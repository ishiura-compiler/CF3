#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x186 = 0U;
int32_t t2 = 1;
static volatile uint16_t x214 = 9U;
uint8_t x215 = UINT8_MAX;
volatile uint64_t x381 = UINT64_MAX;
uint8_t x390 = 3U;
int64_t x391 = INT64_MAX;
int32_t x392 = INT32_MIN;
int8_t x413 = 28;
static uint16_t x414 = 1U;
uint16_t x570 = 6U;
uint64_t x595 = 242148LLU;
int32_t t9 = 40375070;
int64_t x641 = 1795497687LL;
int32_t x797 = INT32_MAX;
volatile int32_t t12 = 254758846;
static uint8_t x830 = 4U;
volatile uint8_t x834 = 29U;
static int8_t x860 = -1;
volatile uint16_t x905 = 20686U;
uint16_t x908 = 1U;
uint16_t x941 = UINT16_MAX;
volatile int32_t t20 = -16;
int32_t t21 = -3288249;
uint32_t x1157 = UINT32_MAX;
volatile uint32_t x1187 = UINT32_MAX;
volatile int32_t x1188 = INT32_MAX;
int64_t x1234 = 3LL;
int32_t x1236 = INT32_MIN;
uint8_t x1305 = 120U;
int8_t x1308 = -1;
volatile int32_t x1367 = INT32_MIN;
volatile uint8_t x1434 = 25U;
uint32_t x1435 = UINT32_MAX;
int64_t x1436 = INT64_MIN;
int32_t t30 = -1;
static int8_t x1474 = 0;
volatile uint16_t x1622 = 31U;
int64_t x1741 = 9640830476722LL;
uint8_t x1742 = 38U;
int16_t x1744 = -1;
int32_t t41 = 150093798;
int16_t x1972 = 529;
static int32_t t42 = -13;
static int64_t x2043 = INT64_MIN;
uint32_t x2112 = 11692094U;
int8_t x2160 = 20;
int32_t x2183 = INT32_MIN;
static uint8_t x2194 = 1U;
uint64_t x2276 = 107855930429308LLU;
volatile int16_t x2328 = INT16_MIN;
uint16_t x2330 = 1U;
uint64_t x2391 = 10804798LLU;
static int8_t x2471 = -1;
uint8_t x2534 = 1U;
uint32_t x2629 = 182746018U;
int32_t t56 = -35;
int32_t x2633 = 419;
uint16_t x2635 = UINT16_MAX;
static volatile int64_t x2961 = INT64_MAX;
uint32_t x3039 = 246432086U;
int16_t x3053 = 192;
int64_t x3056 = 1LL;
int8_t x3119 = 0;
int64_t x3547 = INT64_MIN;
static int8_t x3630 = 0;
int32_t t72 = 0;
uint8_t x3714 = 1U;
int32_t x3804 = -821734691;
int32_t x3819 = INT32_MIN;
volatile int64_t x4013 = INT64_MAX;
int16_t x4015 = INT16_MAX;
int16_t x4053 = INT16_MAX;
static int64_t x4200 = 783154LL;
uint8_t x4461 = 0U;
uint64_t x4464 = 13760LLU;
volatile int32_t x4524 = INT32_MIN;
int32_t x4591 = INT32_MIN;
volatile int32_t t88 = 27107947;
int32_t x4735 = INT32_MIN;
int64_t x4775 = -1LL;
volatile int8_t x4800 = -1;
uint32_t x4817 = UINT32_MAX;
uint8_t x4818 = 13U;
uint32_t x4819 = 53098U;
static int32_t t95 = -121411104;
uint64_t x4967 = 6664192685375LLU;
int32_t x4968 = 6147;
int32_t x5005 = INT32_MAX;


void f0(void) {
	uint16_t x65 = 924U;
	int8_t x66 = 4;
	uint8_t x67 = 0U;
	volatile int64_t x68 = -275749726292827LL;
	int32_t t0 = 29;

	t0 = ((x65>>x66)<=(x67&x68));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x185 = INT16_MAX;
	uint8_t x187 = UINT8_MAX;
	int32_t x188 = -12;
	int32_t t1 = 1;

	t1 = ((x185>>x186)<=(x187&x188));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x197 = INT64_MAX;
	static uint8_t x198 = 13U;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 112U;

	t2 = ((x197>>x198)<=(x199&x200));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x213 = 3942863102LLU;
	int8_t x216 = -15;
	volatile int32_t t3 = -4921;

	t3 = ((x213>>x214)<=(x215&x216));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x285 = 1U;
	volatile int32_t x286 = 0;
	static int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t4 = -145;

	t4 = ((x285>>x286)<=(x287&x288));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x382 = 0;
	uint64_t x383 = 711067276125533LLU;
	uint16_t x384 = 27U;
	volatile int32_t t5 = 2;

	t5 = ((x381>>x382)<=(x383&x384));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int32_t t6 = -81973414;

	t6 = ((x389>>x390)<=(x391&x392));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x415 = 258U;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t7 = -5524;

	t7 = ((x413>>x414)<=(x415&x416));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x569 = 6579500;
	uint32_t x571 = 13675428U;
	static volatile int64_t x572 = INT64_MIN;
	volatile int32_t t8 = -1404907;

	t8 = ((x569>>x570)<=(x571&x572));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x593 = UINT16_MAX;
	uint8_t x594 = 27U;
	static int64_t x596 = 106350994269747325LL;

	t9 = ((x593>>x594)<=(x595&x596));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x633 = INT16_MAX;
	int8_t x634 = 26;
	int64_t x635 = 109582604LL;
	static uint32_t x636 = 8370U;
	int32_t t10 = 298503;

	t10 = ((x633>>x634)<=(x635&x636));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x642 = 1U;
	int16_t x643 = INT16_MAX;
	int16_t x644 = -1;
	int32_t t11 = 38308785;

	t11 = ((x641>>x642)<=(x643&x644));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x798 = 10;
	int8_t x799 = 1;
	static int32_t x800 = INT32_MIN;

	t12 = ((x797>>x798)<=(x799&x800));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x817 = INT32_MAX;
	int8_t x818 = 0;
	int16_t x819 = 6069;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t13 = 109;

	t13 = ((x817>>x818)<=(x819&x820));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x829 = UINT16_MAX;
	int32_t x831 = -1;
	int32_t x832 = -1;
	volatile int32_t t14 = 1;

	t14 = ((x829>>x830)<=(x831&x832));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x833 = UINT16_MAX;
	uint32_t x835 = 67U;
	uint64_t x836 = 3940814892644944976LLU;
	int32_t t15 = 7328339;

	t15 = ((x833>>x834)<=(x835&x836));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x857 = UINT32_MAX;
	uint32_t x858 = 25U;
	uint8_t x859 = UINT8_MAX;
	int32_t t16 = 0;

	t16 = ((x857>>x858)<=(x859&x860));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x906 = 29;
	volatile uint32_t x907 = UINT32_MAX;
	int32_t t17 = 29;

	t17 = ((x905>>x906)<=(x907&x908));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x942 = 3U;
	volatile int8_t x943 = INT8_MIN;
	uint16_t x944 = UINT16_MAX;
	volatile int32_t t18 = 58382;

	t18 = ((x941>>x942)<=(x943&x944));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x957 = INT32_MAX;
	static volatile uint8_t x958 = 1U;
	int32_t x959 = -1;
	static uint8_t x960 = 1U;
	static int32_t t19 = -211188523;

	t19 = ((x957>>x958)<=(x959&x960));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1133 = 40;
	volatile int8_t x1134 = 1;
	volatile int64_t x1135 = 426478685224074626LL;
	uint16_t x1136 = 1U;

	t20 = ((x1133>>x1134)<=(x1135&x1136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1153 = 380728020U;
	int8_t x1154 = 6;
	int32_t x1155 = 3792876;
	uint16_t x1156 = UINT16_MAX;

	t21 = ((x1153>>x1154)<=(x1155&x1156));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1158 = 19U;
	volatile int16_t x1159 = 1;
	int64_t x1160 = INT64_MIN;
	volatile int32_t t22 = -5432177;

	t22 = ((x1157>>x1158)<=(x1159&x1160));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1185 = 945202029977LLU;
	uint8_t x1186 = 0U;
	int32_t t23 = 236573320;

	t23 = ((x1185>>x1186)<=(x1187&x1188));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1205 = INT32_MAX;
	uint8_t x1206 = 24U;
	int8_t x1207 = INT8_MIN;
	volatile int16_t x1208 = -701;
	static volatile int32_t t24 = 1;

	t24 = ((x1205>>x1206)<=(x1207&x1208));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1233 = INT64_MAX;
	int64_t x1235 = 73234889LL;
	int32_t t25 = -167;

	t25 = ((x1233>>x1234)<=(x1235&x1236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1269 = INT32_MAX;
	uint8_t x1270 = 12U;
	static uint32_t x1271 = 16007197U;
	volatile int32_t x1272 = INT32_MIN;
	int32_t t26 = 7230214;

	t26 = ((x1269>>x1270)<=(x1271&x1272));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1306 = 3U;
	int32_t x1307 = 0;
	static volatile int32_t t27 = -118937659;

	t27 = ((x1305>>x1306)<=(x1307&x1308));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1341 = 12LL;
	int16_t x1342 = 1;
	int8_t x1343 = INT8_MIN;
	int64_t x1344 = INT64_MIN;
	int32_t t28 = -3;

	t28 = ((x1341>>x1342)<=(x1343&x1344));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1365 = INT64_MAX;
	static volatile int8_t x1366 = 1;
	int64_t x1368 = 219899635LL;
	int32_t t29 = -249439;

	t29 = ((x1365>>x1366)<=(x1367&x1368));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1433 = INT32_MAX;

	t30 = ((x1433>>x1434)<=(x1435&x1436));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1437 = UINT8_MAX;
	int16_t x1438 = 9;
	static uint16_t x1439 = 122U;
	static uint8_t x1440 = 13U;
	static volatile int32_t t31 = -109394659;

	t31 = ((x1437>>x1438)<=(x1439&x1440));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1473 = 0U;
	int32_t x1475 = -1;
	static int16_t x1476 = INT16_MAX;
	volatile int32_t t32 = 204274967;

	t32 = ((x1473>>x1474)<=(x1475&x1476));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1481 = 0U;
	volatile int8_t x1482 = 6;
	uint16_t x1483 = 438U;
	int8_t x1484 = -1;
	volatile int32_t t33 = 35;

	t33 = ((x1481>>x1482)<=(x1483&x1484));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1605 = INT64_MAX;
	int8_t x1606 = 1;
	static uint8_t x1607 = 43U;
	int32_t x1608 = 1;
	static volatile int32_t t34 = -232351938;

	t34 = ((x1605>>x1606)<=(x1607&x1608));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1621 = 11U;
	volatile uint8_t x1623 = UINT8_MAX;
	int32_t x1624 = -1;
	volatile int32_t t35 = -4510;

	t35 = ((x1621>>x1622)<=(x1623&x1624));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x1669 = 25U;
	static volatile int64_t x1670 = 4LL;
	int8_t x1671 = INT8_MIN;
	volatile uint16_t x1672 = 31896U;
	int32_t t36 = -1068;

	t36 = ((x1669>>x1670)<=(x1671&x1672));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1677 = 0;
	volatile uint8_t x1678 = 6U;
	uint32_t x1679 = 0U;
	uint32_t x1680 = 3U;
	static int32_t t37 = -979551474;

	t37 = ((x1677>>x1678)<=(x1679&x1680));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1743 = INT16_MIN;
	int32_t t38 = 208943;

	t38 = ((x1741>>x1742)<=(x1743&x1744));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1753 = INT16_MAX;
	int16_t x1754 = 0;
	volatile uint8_t x1755 = UINT8_MAX;
	static uint32_t x1756 = 1977815264U;
	int32_t t39 = 7568148;

	t39 = ((x1753>>x1754)<=(x1755&x1756));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1845 = INT64_MAX;
	uint32_t x1846 = 0U;
	int32_t x1847 = -13588414;
	volatile uint8_t x1848 = 1U;
	volatile int32_t t40 = 492100957;

	t40 = ((x1845>>x1846)<=(x1847&x1848));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1929 = 57U;
	int16_t x1930 = 2;
	uint8_t x1931 = UINT8_MAX;
	volatile int8_t x1932 = -1;

	t41 = ((x1929>>x1930)<=(x1931&x1932));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1969 = INT8_MAX;
	int16_t x1970 = 0;
	int16_t x1971 = INT16_MIN;

	t42 = ((x1969>>x1970)<=(x1971&x1972));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2041 = 2400;
	int8_t x2042 = 1;
	int32_t x2044 = INT32_MAX;
	int32_t t43 = 333948233;

	t43 = ((x2041>>x2042)<=(x2043&x2044));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x2109 = UINT64_MAX;
	uint16_t x2110 = 48U;
	uint32_t x2111 = 8U;
	volatile int32_t t44 = 1220277;

	t44 = ((x2109>>x2110)<=(x2111&x2112));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x2157 = 793061460LLU;
	uint8_t x2158 = 45U;
	static int16_t x2159 = 5;
	int32_t t45 = -53;

	t45 = ((x2157>>x2158)<=(x2159&x2160));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x2181 = 0U;
	int16_t x2182 = 1;
	uint16_t x2184 = 31164U;
	int32_t t46 = -1;

	t46 = ((x2181>>x2182)<=(x2183&x2184));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x2193 = UINT8_MAX;
	static int8_t x2195 = INT8_MIN;
	static uint8_t x2196 = 23U;
	volatile int32_t t47 = -421074193;

	t47 = ((x2193>>x2194)<=(x2195&x2196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2273 = 49673865846LLU;
	static uint8_t x2274 = 0U;
	static volatile int32_t x2275 = INT32_MIN;
	volatile int32_t t48 = -844;

	t48 = ((x2273>>x2274)<=(x2275&x2276));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2325 = INT32_MAX;
	uint8_t x2326 = 14U;
	int16_t x2327 = -1;
	static int32_t t49 = -13;

	t49 = ((x2325>>x2326)<=(x2327&x2328));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2329 = 1;
	int32_t x2331 = INT32_MIN;
	uint64_t x2332 = 32132079128LLU;
	volatile int32_t t50 = 149216329;

	t50 = ((x2329>>x2330)<=(x2331&x2332));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2341 = 1U;
	static volatile int16_t x2342 = 17;
	uint64_t x2343 = 1378730980409430153LLU;
	volatile uint8_t x2344 = 2U;
	int32_t t51 = 173538;

	t51 = ((x2341>>x2342)<=(x2343&x2344));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2389 = UINT64_MAX;
	static uint32_t x2390 = 1U;
	volatile int32_t x2392 = INT32_MIN;
	volatile int32_t t52 = -11561567;

	t52 = ((x2389>>x2390)<=(x2391&x2392));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2425 = 49723LLU;
	uint8_t x2426 = 5U;
	static volatile uint16_t x2427 = 1602U;
	int64_t x2428 = INT64_MIN;
	volatile int32_t t53 = -6610730;

	t53 = ((x2425>>x2426)<=(x2427&x2428));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2469 = 301753900U;
	static volatile int8_t x2470 = 20;
	int32_t x2472 = INT32_MIN;
	volatile int32_t t54 = 9393732;

	t54 = ((x2469>>x2470)<=(x2471&x2472));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2533 = INT8_MAX;
	volatile uint8_t x2535 = UINT8_MAX;
	volatile uint8_t x2536 = UINT8_MAX;
	int32_t t55 = 2;

	t55 = ((x2533>>x2534)<=(x2535&x2536));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2630 = 0;
	uint32_t x2631 = 375821U;
	int16_t x2632 = INT16_MIN;

	t56 = ((x2629>>x2630)<=(x2631&x2632));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x2634 = 0;
	int32_t x2636 = INT32_MAX;
	static int32_t t57 = -113;

	t57 = ((x2633>>x2634)<=(x2635&x2636));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2669 = 16045U;
	static uint64_t x2670 = 19LLU;
	static int8_t x2671 = INT8_MIN;
	static uint8_t x2672 = 1U;
	int32_t t58 = -212;

	t58 = ((x2669>>x2670)<=(x2671&x2672));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x2673 = 1U;
	uint16_t x2674 = 14U;
	static int64_t x2675 = INT64_MIN;
	static int8_t x2676 = INT8_MIN;
	int32_t t59 = 238661142;

	t59 = ((x2673>>x2674)<=(x2675&x2676));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2685 = 11945103LLU;
	int64_t x2686 = 55LL;
	int8_t x2687 = INT8_MIN;
	int32_t x2688 = -1;
	volatile int32_t t60 = -561455;

	t60 = ((x2685>>x2686)<=(x2687&x2688));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x2733 = 1;
	uint16_t x2734 = 0U;
	static int32_t x2735 = -1;
	uint32_t x2736 = 50U;
	volatile int32_t t61 = -3461449;

	t61 = ((x2733>>x2734)<=(x2735&x2736));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x2793 = 30U;
	static uint64_t x2794 = 0LLU;
	volatile int8_t x2795 = INT8_MIN;
	uint16_t x2796 = 173U;
	static volatile int32_t t62 = -234;

	t62 = ((x2793>>x2794)<=(x2795&x2796));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2962 = 22;
	uint8_t x2963 = UINT8_MAX;
	int8_t x2964 = INT8_MIN;
	int32_t t63 = -2;

	t63 = ((x2961>>x2962)<=(x2963&x2964));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3037 = 28400U;
	int8_t x3038 = 14;
	int64_t x3040 = -27960862LL;
	static volatile int32_t t64 = -163;

	t64 = ((x3037>>x3038)<=(x3039&x3040));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3054 = 3;
	int64_t x3055 = INT64_MIN;
	volatile int32_t t65 = -68393174;

	t65 = ((x3053>>x3054)<=(x3055&x3056));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x3117 = 47044964;
	int32_t x3118 = 15;
	int64_t x3120 = -4185615822411119LL;
	static int32_t t66 = 765;

	t66 = ((x3117>>x3118)<=(x3119&x3120));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3441 = INT64_MAX;
	uint8_t x3442 = 2U;
	int32_t x3443 = 3057468;
	int8_t x3444 = INT8_MIN;
	int32_t t67 = 6573;

	t67 = ((x3441>>x3442)<=(x3443&x3444));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3445 = 1U;
	volatile uint8_t x3446 = 11U;
	int16_t x3447 = -4;
	uint8_t x3448 = 31U;
	int32_t t68 = -355;

	t68 = ((x3445>>x3446)<=(x3447&x3448));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3545 = 413;
	volatile int16_t x3546 = 1;
	int32_t x3548 = INT32_MIN;
	int32_t t69 = 199;

	t69 = ((x3545>>x3546)<=(x3547&x3548));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3561 = 33U;
	uint8_t x3562 = 13U;
	uint8_t x3563 = UINT8_MAX;
	static int64_t x3564 = INT64_MIN;
	volatile int32_t t70 = 32752;

	t70 = ((x3561>>x3562)<=(x3563&x3564));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3629 = UINT64_MAX;
	int32_t x3631 = 51865;
	int16_t x3632 = INT16_MIN;
	static int32_t t71 = -697096149;

	t71 = ((x3629>>x3630)<=(x3631&x3632));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3665 = 408U;
	uint16_t x3666 = 30U;
	uint64_t x3667 = UINT64_MAX;
	volatile int8_t x3668 = -1;

	t72 = ((x3665>>x3666)<=(x3667&x3668));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3681 = UINT16_MAX;
	uint8_t x3682 = 8U;
	int64_t x3683 = INT64_MIN;
	uint8_t x3684 = 1U;
	volatile int32_t t73 = 50;

	t73 = ((x3681>>x3682)<=(x3683&x3684));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3713 = 1042877U;
	int64_t x3715 = -26881373617594320LL;
	uint16_t x3716 = 120U;
	volatile int32_t t74 = 0;

	t74 = ((x3713>>x3714)<=(x3715&x3716));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3801 = INT16_MAX;
	uint8_t x3802 = 7U;
	volatile int8_t x3803 = INT8_MAX;
	int32_t t75 = -938608;

	t75 = ((x3801>>x3802)<=(x3803&x3804));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3817 = INT64_MAX;
	volatile uint16_t x3818 = 10U;
	uint32_t x3820 = 1589074793U;
	int32_t t76 = -54;

	t76 = ((x3817>>x3818)<=(x3819&x3820));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3897 = 686166U;
	uint8_t x3898 = 0U;
	uint8_t x3899 = 19U;
	int32_t x3900 = INT32_MIN;
	volatile int32_t t77 = -5442277;

	t77 = ((x3897>>x3898)<=(x3899&x3900));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3937 = 47U;
	uint8_t x3938 = 31U;
	int16_t x3939 = INT16_MIN;
	int32_t x3940 = INT32_MIN;
	volatile int32_t t78 = 116982;

	t78 = ((x3937>>x3938)<=(x3939&x3940));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x3957 = 11600U;
	static int8_t x3958 = 1;
	int32_t x3959 = -1;
	int16_t x3960 = -1;
	int32_t t79 = 1;

	t79 = ((x3957>>x3958)<=(x3959&x3960));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3993 = 3U;
	static volatile uint8_t x3994 = 23U;
	uint16_t x3995 = 1U;
	volatile uint8_t x3996 = UINT8_MAX;
	static int32_t t80 = -81204842;

	t80 = ((x3993>>x3994)<=(x3995&x3996));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4014 = 0;
	int16_t x4016 = INT16_MIN;
	volatile int32_t t81 = 132;

	t81 = ((x4013>>x4014)<=(x4015&x4016));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4054 = 0;
	int64_t x4055 = -18095LL;
	static volatile int8_t x4056 = -46;
	volatile int32_t t82 = 276;

	t82 = ((x4053>>x4054)<=(x4055&x4056));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x4081 = 63U;
	volatile int16_t x4082 = 3;
	int32_t x4083 = INT32_MIN;
	int32_t x4084 = -600319;
	volatile int32_t t83 = -795731;

	t83 = ((x4081>>x4082)<=(x4083&x4084));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4197 = UINT64_MAX;
	uint8_t x4198 = 56U;
	static uint8_t x4199 = UINT8_MAX;
	static volatile int32_t t84 = -1;

	t84 = ((x4197>>x4198)<=(x4199&x4200));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4462 = 0;
	volatile uint32_t x4463 = 233U;
	volatile int32_t t85 = -309606594;

	t85 = ((x4461>>x4462)<=(x4463&x4464));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4521 = 10U;
	uint8_t x4522 = 25U;
	uint64_t x4523 = 265649114250LLU;
	int32_t t86 = 2807300;

	t86 = ((x4521>>x4522)<=(x4523&x4524));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4529 = 13892U;
	uint8_t x4530 = 7U;
	int64_t x4531 = INT64_MIN;
	static int16_t x4532 = INT16_MIN;
	int32_t t87 = -99;

	t87 = ((x4529>>x4530)<=(x4531&x4532));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4589 = 56907082U;
	uint64_t x4590 = 12LLU;
	int32_t x4592 = -1;

	t88 = ((x4589>>x4590)<=(x4591&x4592));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x4597 = 2286306125755807493LLU;
	uint16_t x4598 = 9U;
	int32_t x4599 = -1;
	static uint64_t x4600 = 138098999LLU;
	volatile int32_t t89 = 511723712;

	t89 = ((x4597>>x4598)<=(x4599&x4600));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4733 = 6U;
	int16_t x4734 = 1;
	static uint64_t x4736 = 0LLU;
	volatile int32_t t90 = -29;

	t90 = ((x4733>>x4734)<=(x4735&x4736));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4737 = UINT8_MAX;
	volatile int32_t x4738 = 1;
	uint32_t x4739 = UINT32_MAX;
	volatile int8_t x4740 = 14;
	volatile int32_t t91 = 1058139176;

	t91 = ((x4737>>x4738)<=(x4739&x4740));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4773 = 1073863962917638LL;
	static int16_t x4774 = 0;
	static uint8_t x4776 = 7U;
	volatile int32_t t92 = -5422;

	t92 = ((x4773>>x4774)<=(x4775&x4776));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4797 = 2;
	volatile int8_t x4798 = 0;
	int64_t x4799 = INT64_MAX;
	static volatile int32_t t93 = -25609297;

	t93 = ((x4797>>x4798)<=(x4799&x4800));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4820 = 1LL;
	volatile int32_t t94 = 185925;

	t94 = ((x4817>>x4818)<=(x4819&x4820));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4893 = INT16_MAX;
	int32_t x4894 = 11;
	static int16_t x4895 = -1;
	int16_t x4896 = -16;

	t95 = ((x4893>>x4894)<=(x4895&x4896));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4945 = 73633869U;
	int8_t x4946 = 12;
	int64_t x4947 = 4203098754861LL;
	volatile int8_t x4948 = -1;
	volatile int32_t t96 = -1481;

	t96 = ((x4945>>x4946)<=(x4947&x4948));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4965 = 1379;
	uint16_t x4966 = 6U;
	int32_t t97 = -224679;

	t97 = ((x4965>>x4966)<=(x4967&x4968));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5006 = 2;
	uint64_t x5007 = 231837LLU;
	int16_t x5008 = INT16_MIN;
	volatile int32_t t98 = -86289;

	t98 = ((x5005>>x5006)<=(x5007&x5008));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x5037 = UINT32_MAX;
	static int8_t x5038 = 1;
	static uint8_t x5039 = 51U;
	uint64_t x5040 = 799LLU;
	volatile int32_t t99 = 0;

	t99 = ((x5037>>x5038)<=(x5039&x5040));

	if (t99 != 0) { NG(); } else { ; }
	
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

