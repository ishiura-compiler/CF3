#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x16 = 104U;
int8_t x94 = 14;
int64_t x95 = -1LL;
uint32_t x186 = 12U;
int64_t x188 = INT64_MIN;
int16_t x213 = 771;
volatile int8_t x275 = INT8_MAX;
int64_t t7 = 3826572142754LL;
volatile uint64_t x749 = 40875179978394LLU;
int64_t x750 = 3LL;
int8_t x751 = 10;
volatile uint64_t t12 = 334114952513036360LLU;
static volatile int16_t x870 = 28;
uint8_t x929 = 2U;
uint8_t x930 = 6U;
uint8_t x990 = 1U;
int8_t x1041 = INT8_MAX;
int16_t x1051 = INT16_MAX;
uint64_t t21 = 37LLU;
volatile int64_t x1139 = INT64_MIN;
volatile uint64_t t22 = 2279521LLU;
uint8_t x1153 = UINT8_MAX;
volatile uint8_t x1155 = 13U;
int32_t t23 = 6872;
static uint64_t t24 = 39387LLU;
uint8_t x1194 = 11U;
int16_t x1282 = 0;
uint8_t x1283 = UINT8_MAX;
volatile uint16_t x1293 = UINT16_MAX;
uint8_t x1330 = 3U;
int8_t x1331 = -1;
static volatile int32_t t29 = 0;
uint16_t x1400 = 150U;
volatile int32_t t30 = -112953;
uint8_t x1422 = 1U;
uint32_t x1423 = UINT32_MAX;
static volatile uint32_t t31 = 1U;
uint32_t x1569 = UINT32_MAX;
uint32_t x1596 = 186U;
int8_t x2026 = 4;
int32_t x2027 = -1;
volatile uint64_t t37 = 3658204LLU;
int16_t x2089 = INT16_MAX;
static uint16_t x2098 = 0U;
volatile int32_t x2100 = INT32_MAX;
uint8_t x2145 = 2U;
static int32_t x2327 = INT32_MIN;
static volatile int8_t x2405 = 0;
uint8_t x2406 = 7U;
static uint16_t x2413 = UINT16_MAX;
volatile uint32_t x2414 = 1U;
int16_t x2415 = -1;
static int64_t x2426 = 1LL;
static int32_t x2475 = INT32_MAX;
int32_t t47 = 13670;
int8_t x2730 = 0;
uint64_t x2753 = UINT64_MAX;
volatile uint64_t t50 = UINT64_MAX;
int64_t x2853 = INT64_MAX;
volatile uint8_t x2854 = 5U;
int16_t x2924 = INT16_MAX;
volatile int16_t x2987 = INT16_MAX;
static int32_t t57 = -21576;
volatile int8_t x3239 = -1;
int32_t x3240 = INT32_MIN;
volatile int32_t x3368 = INT32_MIN;
uint16_t x3416 = 12U;
int8_t x3458 = 0;
uint16_t x3626 = 6U;
uint32_t x3674 = 1U;
volatile int32_t t65 = 521454;
int32_t x3756 = -1;
static uint8_t x3781 = UINT8_MAX;
volatile int8_t x3782 = 1;
static int32_t x3833 = 247;
int64_t x3836 = INT64_MIN;
static uint32_t x3954 = 1U;
uint16_t x3955 = 60U;
static int64_t x3956 = -1LL;
volatile uint64_t x4148 = 22875867697867LLU;
volatile uint64_t t73 = 14586LLU;
volatile int16_t x4235 = INT16_MIN;
int64_t x4236 = INT64_MIN;
int32_t t75 = -16057;
volatile int32_t x4295 = INT32_MIN;
static uint64_t t81 = 15500714432873060LLU;
int32_t x4493 = 3155;
volatile uint32_t x4562 = 3U;
int8_t x4941 = 0;
int64_t x5129 = 363672903LL;
int8_t x5131 = INT8_MIN;
uint32_t x5196 = UINT32_MAX;
int32_t t89 = 19445624;
int64_t t90 = 825115LL;
int32_t t91 = -32574;
volatile uint32_t x5326 = 14U;
int64_t x5327 = INT64_MAX;
uint8_t x5338 = 9U;
volatile int32_t x5397 = 619;
int64_t x5445 = 123LL;
uint32_t x5562 = 1U;
volatile int64_t x5564 = INT64_MIN;
volatile uint64_t t97 = 3171630300275LLU;
static uint8_t x5614 = 15U;
int16_t x5622 = 1;


void f0(void) {
	uint8_t x5 = 2U;
	uint8_t x6 = 13U;
	int64_t x7 = -1LL;
	uint32_t x8 = 150U;
	int64_t t0 = -6554575386072955LL;

	t0 = ((x5>>x6)|(x7^x8));

	if (t0 != -151LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 708799975164984LLU;
	uint16_t x14 = 7U;
	int8_t x15 = INT8_MIN;
	volatile uint64_t t1 = 93923462278015LLU;

	t1 = ((x13>>x14)|(x15^x16));

	if (t1 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 17U;
	static int64_t x63 = INT64_MAX;
	static int8_t x64 = INT8_MAX;
	volatile int64_t t2 = -57972206577LL;

	t2 = ((x61>>x62)|(x63^x64));

	if (t2 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x93 = 0;
	static uint8_t x96 = 13U;
	static int64_t t3 = 282358LL;

	t3 = ((x93>>x94)|(x95^x96));

	if (t3 != -14LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x137 = 36;
	int8_t x138 = 1;
	volatile uint64_t x139 = 297883LLU;
	volatile int64_t x140 = INT64_MIN;
	volatile uint64_t t4 = 28094699075LLU;

	t4 = ((x137>>x138)|(x139^x140));

	if (t4 != 9223372036855073691LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x185 = 23297U;
	int16_t x187 = INT16_MIN;
	int64_t t5 = 190142466401LL;

	t5 = ((x185>>x186)|(x187^x188));

	if (t5 != 9223372036854743045LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x214 = 11U;
	int16_t x215 = -1442;
	int16_t x216 = -450;
	int32_t t6 = 1648;

	t6 = ((x213>>x214)|(x215^x216));

	if (t6 != 1120) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x273 = 12906010LL;
	uint8_t x274 = 26U;
	int64_t x276 = -1LL;

	t7 = ((x273>>x274)|(x275^x276));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x309 = 27571U;
	int8_t x310 = 0;
	int64_t x311 = 69459546732609565LL;
	int8_t x312 = INT8_MAX;
	int64_t t8 = -68333194186621923LL;

	t8 = ((x309>>x310)|(x311^x312));

	if (t8 != 69459546732620787LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x369 = INT16_MAX;
	uint8_t x370 = 5U;
	int32_t x371 = 58;
	int32_t x372 = INT32_MIN;
	volatile int32_t t9 = -59475967;

	t9 = ((x369>>x370)|(x371^x372));

	if (t9 != -2147482625) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 29U;
	int16_t x463 = -1;
	int32_t x464 = 3115;
	volatile uint32_t t10 = 19315954U;

	t10 = ((x461>>x462)|(x463^x464));

	if (t10 != 4294964183U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x613 = 55649U;
	int32_t x614 = 0;
	uint8_t x615 = 2U;
	int64_t x616 = -1LL;
	static int64_t t11 = -326LL;

	t11 = ((x613>>x614)|(x615^x616));

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x752 = -1LL;

	t12 = ((x749>>x750)|(x751^x752));

	if (t12 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x801 = INT8_MAX;
	uint8_t x802 = 19U;
	int8_t x803 = -1;
	uint64_t x804 = 91032122LLU;
	uint64_t t13 = 13921065112344LLU;

	t13 = ((x801>>x802)|(x803^x804));

	if (t13 != 18446744073618519493LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x829 = 649U;
	int8_t x830 = 24;
	static volatile int8_t x831 = INT8_MIN;
	int32_t x832 = -15250712;
	static volatile uint32_t t14 = 10U;

	t14 = ((x829>>x830)|(x831^x832));

	if (t14 != 15250792U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x857 = 1612U;
	uint16_t x858 = 0U;
	int32_t x859 = -1;
	int64_t x860 = 15249750474764977LL;
	volatile int64_t t15 = -888LL;

	t15 = ((x857>>x858)|(x859^x860));

	if (t15 != -15249750474764466LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x869 = UINT32_MAX;
	volatile int64_t x871 = -3896LL;
	uint64_t x872 = UINT64_MAX;
	volatile uint64_t t16 = 18602597LLU;

	t16 = ((x869>>x870)|(x871^x872));

	if (t16 != 3903LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x931 = -14265438;
	int8_t x932 = 60;
	static int32_t t17 = 500553531;

	t17 = ((x929>>x930)|(x931^x932));

	if (t17 != -14265442) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x989 = 0;
	uint8_t x991 = UINT8_MAX;
	volatile int16_t x992 = INT16_MAX;
	volatile int32_t t18 = 130177137;

	t18 = ((x989>>x990)|(x991^x992));

	if (t18 != 32512) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1009 = 7U;
	int8_t x1010 = 1;
	uint8_t x1011 = 8U;
	int16_t x1012 = -1;
	uint32_t t19 = 223489001U;

	t19 = ((x1009>>x1010)|(x1011^x1012));

	if (t19 != 4294967287U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1042 = 12U;
	int32_t x1043 = INT32_MIN;
	int8_t x1044 = -1;
	volatile int32_t t20 = INT32_MAX;

	t20 = ((x1041>>x1042)|(x1043^x1044));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1049 = 2126401129642LLU;
	uint16_t x1050 = 0U;
	uint32_t x1052 = 26292917U;

	t21 = ((x1049>>x1050)|(x1051^x1052));

	if (t21 != 2126410632682LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1137 = 988954LLU;
	volatile uint16_t x1138 = 24U;
	int32_t x1140 = -1;

	t22 = ((x1137>>x1138)|(x1139^x1140));

	if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1154 = 1;
	uint8_t x1156 = UINT8_MAX;

	t23 = ((x1153>>x1154)|(x1155^x1156));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x1189 = 3U;
	uint8_t x1190 = 0U;
	int32_t x1191 = INT32_MIN;
	volatile uint64_t x1192 = 4757949740041624651LLU;

	t24 = ((x1189>>x1190)|(x1191^x1192));

	if (t24 != 13688794335357164619LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1193 = 3;
	int32_t x1195 = INT32_MIN;
	static volatile uint64_t x1196 = UINT64_MAX;
	static volatile uint64_t t25 = 21581LLU;

	t25 = ((x1193>>x1194)|(x1195^x1196));

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1225 = 13699494287219LL;
	static uint16_t x1226 = 0U;
	int8_t x1227 = INT8_MIN;
	static uint16_t x1228 = 2U;
	volatile int64_t t26 = -101471213447729LL;

	t26 = ((x1225>>x1226)|(x1227^x1228));

	if (t26 != -13LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1281 = UINT8_MAX;
	volatile int8_t x1284 = -6;
	static volatile int32_t t27 = 38128360;

	t27 = ((x1281>>x1282)|(x1283^x1284));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1294 = 24U;
	static int16_t x1295 = INT16_MIN;
	int64_t x1296 = INT64_MIN;
	volatile int64_t t28 = 3110283662441LL;

	t28 = ((x1293>>x1294)|(x1295^x1296));

	if (t28 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1329 = INT16_MAX;
	volatile int16_t x1332 = INT16_MIN;

	t29 = ((x1329>>x1330)|(x1331^x1332));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1397 = INT8_MAX;
	int16_t x1398 = 3;
	uint16_t x1399 = 116U;

	t30 = ((x1397>>x1398)|(x1399^x1400));

	if (t30 != 239) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1421 = 1269969U;
	int16_t x1424 = INT16_MAX;

	t31 = ((x1421>>x1422)|(x1423^x1424));

	if (t31 != 4294946920U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1493 = UINT8_MAX;
	volatile uint8_t x1494 = 17U;
	int8_t x1495 = INT8_MAX;
	int32_t x1496 = INT32_MIN;
	static int32_t t32 = 654951;

	t32 = ((x1493>>x1494)|(x1495^x1496));

	if (t32 != -2147483521) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1570 = 3U;
	uint16_t x1571 = 4148U;
	static int64_t x1572 = 243301203453LL;
	int64_t t33 = 14691874824315LL;

	t33 = ((x1569>>x1570)|(x1571^x1572));

	if (t33 != 243739394047LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1593 = 4531U;
	int16_t x1594 = 8;
	int32_t x1595 = INT32_MIN;
	volatile uint32_t t34 = 9991143U;

	t34 = ((x1593>>x1594)|(x1595^x1596));

	if (t34 != 2147483835U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1897 = INT32_MAX;
	int8_t x1898 = 0;
	int16_t x1899 = -1;
	int32_t x1900 = INT32_MAX;
	volatile int32_t t35 = 107912;

	t35 = ((x1897>>x1898)|(x1899^x1900));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2025 = 49521003;
	static uint16_t x2028 = UINT16_MAX;
	static volatile int32_t t36 = -350;

	t36 = ((x2025>>x2026)|(x2027^x2028));

	if (t36 != -50666) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2045 = 3429355LLU;
	uint32_t x2046 = 30U;
	volatile uint8_t x2047 = 10U;
	volatile int32_t x2048 = INT32_MIN;

	t37 = ((x2045>>x2046)|(x2047^x2048));

	if (t37 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2090 = 28U;
	volatile uint64_t x2091 = 4181992470LLU;
	volatile int16_t x2092 = INT16_MAX;
	static uint64_t t38 = 57204LLU;

	t38 = ((x2089>>x2090)|(x2091^x2092));

	if (t38 != 4182006761LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2097 = 199LLU;
	int8_t x2099 = -1;
	volatile uint64_t t39 = 146LLU;

	t39 = ((x2097>>x2098)|(x2099^x2100));

	if (t39 != 18446744071562068167LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2146 = 2;
	int32_t x2147 = INT32_MIN;
	static int64_t x2148 = INT64_MAX;
	int64_t t40 = 6LL;

	t40 = ((x2145>>x2146)|(x2147^x2148));

	if (t40 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2325 = 5264023681LL;
	uint8_t x2326 = 0U;
	int16_t x2328 = INT16_MIN;
	int64_t t41 = -51508150357LL;

	t41 = ((x2325>>x2326)|(x2327^x2328));

	if (t41 != 6442426497LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2407 = INT64_MIN;
	int64_t x2408 = 0LL;
	int64_t t42 = INT64_MIN;

	t42 = ((x2405>>x2406)|(x2407^x2408));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2416 = 6825;
	int32_t t43 = 1490026;

	t43 = ((x2413>>x2414)|(x2415^x2416));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2425 = 68U;
	int16_t x2427 = INT16_MAX;
	uint8_t x2428 = 7U;
	static volatile uint32_t t44 = 72U;

	t44 = ((x2425>>x2426)|(x2427^x2428));

	if (t44 != 32762U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x2441 = INT64_MAX;
	uint8_t x2442 = 0U;
	uint16_t x2443 = UINT16_MAX;
	int8_t x2444 = INT8_MAX;
	int64_t t45 = INT64_MAX;

	t45 = ((x2441>>x2442)|(x2443^x2444));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2453 = 14070U;
	uint8_t x2454 = 1U;
	volatile int32_t x2455 = INT32_MIN;
	volatile uint8_t x2456 = 6U;
	uint32_t t46 = 29U;

	t46 = ((x2453>>x2454)|(x2455^x2456));

	if (t46 != 2147490687U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2473 = 57311;
	static uint8_t x2474 = 13U;
	uint8_t x2476 = 22U;

	t47 = ((x2473>>x2474)|(x2475^x2476));

	if (t47 != 2147483631) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2641 = 10830;
	static uint64_t x2642 = 4LLU;
	int16_t x2643 = -1;
	volatile int8_t x2644 = INT8_MIN;
	volatile int32_t t48 = -602;

	t48 = ((x2641>>x2642)|(x2643^x2644));

	if (t48 != 767) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2729 = 83U;
	uint16_t x2731 = UINT16_MAX;
	uint16_t x2732 = 1891U;
	volatile int32_t t49 = 1495891;

	t49 = ((x2729>>x2730)|(x2731^x2732));

	if (t49 != 63711) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2754 = 4U;
	int8_t x2755 = 1;
	int16_t x2756 = INT16_MIN;

	t50 = ((x2753>>x2754)|(x2755^x2756));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2833 = 92926;
	uint32_t x2834 = 2U;
	static volatile int32_t x2835 = -1;
	static int64_t x2836 = 1059112632LL;
	static volatile int64_t t51 = 210LL;

	t51 = ((x2833>>x2834)|(x2835^x2836));

	if (t51 != -1059095553LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2855 = 0;
	int32_t x2856 = -1631598;
	volatile int64_t t52 = 61645350LL;

	t52 = ((x2853>>x2854)|(x2855^x2856));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2921 = UINT8_MAX;
	volatile uint8_t x2922 = 1U;
	int64_t x2923 = -2270375522251LL;
	volatile int64_t t53 = -9298580335688LL;

	t53 = ((x2921>>x2922)|(x2923^x2924));

	if (t53 != -2270375530497LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x2985 = UINT32_MAX;
	uint8_t x2986 = 15U;
	int16_t x2988 = -1;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x2985>>x2986)|(x2987^x2988));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3005 = 6U;
	volatile uint8_t x3006 = 1U;
	int32_t x3007 = INT32_MAX;
	int8_t x3008 = INT8_MIN;
	volatile int32_t t55 = -11;

	t55 = ((x3005>>x3006)|(x3007^x3008));

	if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3021 = 1080417680465LLU;
	uint8_t x3022 = 1U;
	volatile int64_t x3023 = 6902136610LL;
	volatile int64_t x3024 = INT64_MIN;
	static uint64_t t56 = 16107680910598LLU;

	t56 = ((x3021>>x3022)|(x3023^x3024));

	if (t56 != 9223372577483177770LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x3089 = 0U;
	int16_t x3090 = 1;
	uint16_t x3091 = 1321U;
	int8_t x3092 = -53;

	t57 = ((x3089>>x3090)|(x3091^x3092));

	if (t57 != -1310) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3237 = 854U;
	uint16_t x3238 = 0U;
	static volatile int32_t t58 = INT32_MAX;

	t58 = ((x3237>>x3238)|(x3239^x3240));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x3261 = 0U;
	volatile uint16_t x3262 = 0U;
	uint16_t x3263 = 1176U;
	int32_t x3264 = INT32_MIN;
	volatile int32_t t59 = 185910667;

	t59 = ((x3261>>x3262)|(x3263^x3264));

	if (t59 != -2147482472) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3365 = 934436U;
	int8_t x3366 = 8;
	static volatile int16_t x3367 = -1;
	uint32_t t60 = 20U;

	t60 = ((x3365>>x3366)|(x3367^x3368));

	if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3413 = INT64_MAX;
	int8_t x3414 = 31;
	int64_t x3415 = -6402512907LL;
	int64_t t61 = -8774936008LL;

	t61 = ((x3413>>x3414)|(x3415^x3416));

	if (t61 != -4294967297LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3457 = INT32_MAX;
	uint8_t x3459 = 74U;
	static int8_t x3460 = -5;
	int32_t t62 = 107;

	t62 = ((x3457>>x3458)|(x3459^x3460));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x3585 = INT64_MAX;
	volatile int8_t x3586 = 1;
	static int8_t x3587 = -1;
	int32_t x3588 = INT32_MIN;
	volatile int64_t t63 = -8457067695516LL;

	t63 = ((x3585>>x3586)|(x3587^x3588));

	if (t63 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3625 = UINT16_MAX;
	int8_t x3627 = 0;
	int8_t x3628 = -4;
	static volatile int32_t t64 = -9;

	t64 = ((x3625>>x3626)|(x3627^x3628));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3673 = 26;
	int32_t x3675 = 5411859;
	static uint8_t x3676 = 14U;

	t65 = ((x3673>>x3674)|(x3675^x3676));

	if (t65 != 5411869) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3713 = 136341771673757573LL;
	uint8_t x3714 = 15U;
	int64_t x3715 = INT64_MAX;
	int16_t x3716 = INT16_MIN;
	int64_t t66 = 14687275504264555LL;

	t66 = ((x3713>>x3714)|(x3715^x3716));

	if (t66 != -9223367876034101249LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3753 = INT64_MAX;
	uint8_t x3754 = 0U;
	static uint64_t x3755 = 373898156241712LLU;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = ((x3753>>x3754)|(x3755^x3756));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3783 = 49U;
	int16_t x3784 = -1;
	int32_t t68 = -9032674;

	t68 = ((x3781>>x3782)|(x3783^x3784));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3834 = 1;
	uint64_t x3835 = 70063175355463524LLU;
	static volatile uint64_t t69 = 48572817LLU;

	t69 = ((x3833>>x3834)|(x3835^x3836));

	if (t69 != 9293435212210239359LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x3953 = 769U;
	int64_t t70 = 12557LL;

	t70 = ((x3953>>x3954)|(x3955^x3956));

	if (t70 != -61LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x3993 = UINT8_MAX;
	uint32_t x3994 = 1U;
	uint64_t x3995 = 344520570LLU;
	int16_t x3996 = 0;
	volatile uint64_t t71 = 6356349LLU;

	t71 = ((x3993>>x3994)|(x3995^x3996));

	if (t71 != 344520575LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x4061 = 12156872;
	static uint8_t x4062 = 31U;
	volatile int16_t x4063 = -1;
	uint32_t x4064 = 1155U;
	uint32_t t72 = 39836353U;

	t72 = ((x4061>>x4062)|(x4063^x4064));

	if (t72 != 4294966140U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x4145 = UINT16_MAX;
	uint64_t x4146 = 0LLU;
	volatile uint32_t x4147 = UINT32_MAX;

	t73 = ((x4145>>x4146)|(x4147^x4148));

	if (t73 != 22878418960383LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4233 = INT64_MAX;
	uint16_t x4234 = 27U;
	int64_t t74 = INT64_MAX;

	t74 = ((x4233>>x4234)|(x4235^x4236));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4237 = UINT16_MAX;
	static uint32_t x4238 = 0U;
	volatile int8_t x4239 = 0;
	int16_t x4240 = -1;

	t75 = ((x4237>>x4238)|(x4239^x4240));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x4289 = INT16_MAX;
	int16_t x4290 = 0;
	uint16_t x4291 = UINT16_MAX;
	int8_t x4292 = -1;
	int32_t t76 = 725159456;

	t76 = ((x4289>>x4290)|(x4291^x4292));

	if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4293 = 2146777994374820857LLU;
	int8_t x4294 = 1;
	int32_t x4296 = INT32_MAX;
	static uint64_t t77 = UINT64_MAX;

	t77 = ((x4293>>x4294)|(x4295^x4296));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4305 = 1018U;
	uint8_t x4306 = 3U;
	int64_t x4307 = -182713002540082723LL;
	int32_t x4308 = 1;
	int64_t t78 = -48446875085LL;

	t78 = ((x4305>>x4306)|(x4307^x4308));

	if (t78 != -182713002540082689LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4313 = UINT16_MAX;
	uint32_t x4314 = 12U;
	int32_t x4315 = -11;
	uint64_t x4316 = 108620660576LLU;
	static uint64_t t79 = 447146230717LLU;

	t79 = ((x4313>>x4314)|(x4315^x4316));

	if (t79 != 18446743965088891039LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4349 = UINT32_MAX;
	static int16_t x4350 = 0;
	volatile int32_t x4351 = INT32_MIN;
	int32_t x4352 = INT32_MIN;
	volatile uint32_t t80 = UINT32_MAX;

	t80 = ((x4349>>x4350)|(x4351^x4352));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4373 = 949370420379227366LLU;
	int16_t x4374 = 0;
	int8_t x4375 = 0;
	int8_t x4376 = INT8_MAX;

	t81 = ((x4373>>x4374)|(x4375^x4376));

	if (t81 != 949370420379227391LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x4494 = 14;
	static int8_t x4495 = 18;
	static uint32_t x4496 = UINT32_MAX;
	static volatile uint32_t t82 = 56U;

	t82 = ((x4493>>x4494)|(x4495^x4496));

	if (t82 != 4294967277U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4561 = 1217043550046950LLU;
	uint64_t x4563 = 23704544997034131LLU;
	int16_t x4564 = INT16_MAX;
	static volatile uint64_t t83 = 14590054828420LLU;

	t83 = ((x4561>>x4562)|(x4563^x4564));

	if (t83 != 23854441520134012LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4613 = UINT32_MAX;
	static int8_t x4614 = 4;
	int16_t x4615 = INT16_MIN;
	int16_t x4616 = INT16_MAX;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = ((x4613>>x4614)|(x4615^x4616));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4857 = UINT16_MAX;
	static uint8_t x4858 = 13U;
	int8_t x4859 = INT8_MIN;
	int64_t x4860 = INT64_MAX;
	static int64_t t85 = 55LL;

	t85 = ((x4857>>x4858)|(x4859^x4860));

	if (t85 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4942 = 1;
	uint64_t x4943 = UINT64_MAX;
	int32_t x4944 = INT32_MIN;
	volatile uint64_t t86 = 164976930538LLU;

	t86 = ((x4941>>x4942)|(x4943^x4944));

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5130 = 4U;
	int64_t x5132 = -295LL;
	int64_t t87 = -175466582LL;

	t87 = ((x5129>>x5130)|(x5131^x5132));

	if (t87 != 22729565LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5193 = INT16_MAX;
	uint16_t x5194 = 4U;
	static uint8_t x5195 = 88U;
	uint32_t t88 = UINT32_MAX;

	t88 = ((x5193>>x5194)|(x5195^x5196));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5233 = INT16_MAX;
	static uint8_t x5234 = 5U;
	static int16_t x5235 = 20;
	int32_t x5236 = 311;

	t89 = ((x5233>>x5234)|(x5235^x5236));

	if (t89 != 1023) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5285 = INT32_MAX;
	uint32_t x5286 = 4U;
	static int8_t x5287 = 1;
	static int64_t x5288 = -1LL;

	t90 = ((x5285>>x5286)|(x5287^x5288));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x5301 = UINT8_MAX;
	int8_t x5302 = 1;
	volatile int32_t x5303 = -33380;
	static int8_t x5304 = -5;

	t91 = ((x5301>>x5302)|(x5303^x5304));

	if (t91 != 33407) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x5325 = 0;
	uint8_t x5328 = UINT8_MAX;
	volatile int64_t t92 = -223351086LL;

	t92 = ((x5325>>x5326)|(x5327^x5328));

	if (t92 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5337 = 204;
	static volatile uint8_t x5339 = UINT8_MAX;
	int32_t x5340 = 1;
	static int32_t t93 = 308507;

	t93 = ((x5337>>x5338)|(x5339^x5340));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5373 = 481515708426LLU;
	int32_t x5374 = 4;
	volatile uint16_t x5375 = UINT16_MAX;
	static int32_t x5376 = 35865916;
	static volatile uint64_t t94 = 8LLU;

	t94 = ((x5373>>x5374)|(x5375^x5376));

	if (t94 != 30130551491LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5398 = 1LLU;
	int64_t x5399 = -1LL;
	int16_t x5400 = -118;
	int64_t t95 = 34480147773LL;

	t95 = ((x5397>>x5398)|(x5399^x5400));

	if (t95 != 373LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5446 = 0;
	int32_t x5447 = 120756725;
	volatile uint32_t x5448 = 73197U;
	volatile int64_t t96 = -63811026536993LL;

	t96 = ((x5445>>x5446)|(x5447^x5448));

	if (t96 != 120816763LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5561 = 1985LLU;
	int32_t x5563 = INT32_MAX;

	t97 = ((x5561>>x5562)|(x5563^x5564));

	if (t97 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5613 = UINT64_MAX;
	int8_t x5615 = 0;
	uint8_t x5616 = 1U;
	volatile uint64_t t98 = 100089957539317749LLU;

	t98 = ((x5613>>x5614)|(x5615^x5616));

	if (t98 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5621 = UINT16_MAX;
	int32_t x5623 = INT32_MIN;
	static int8_t x5624 = INT8_MIN;
	int32_t t99 = INT32_MAX;

	t99 = ((x5621>>x5622)|(x5623^x5624));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

