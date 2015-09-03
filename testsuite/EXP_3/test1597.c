#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x117 = 3673U;
volatile uint16_t x120 = 2U;
uint32_t x133 = UINT32_MAX;
static int32_t x136 = INT32_MIN;
volatile int32_t t3 = -558081;
uint8_t x446 = 0U;
static uint16_t x447 = 34U;
volatile int32_t t4 = -228553763;
uint32_t x697 = 223859603U;
int32_t x795 = INT32_MIN;
volatile int64_t x796 = -1LL;
int32_t t9 = -2477414;
volatile uint64_t x1025 = 76109720937LLU;
static uint8_t x1073 = 3U;
static uint64_t x1074 = 3LLU;
uint8_t x1186 = 29U;
uint8_t x1426 = 0U;
int8_t x1428 = INT8_MAX;
int32_t t21 = -980011;
static uint32_t x1498 = 18U;
static uint32_t x1499 = 1U;
volatile int64_t x1503 = INT64_MIN;
uint8_t x1525 = 37U;
uint16_t x1576 = 2085U;
int64_t x1609 = 16695974LL;
volatile int16_t x1612 = INT16_MIN;
static uint64_t x1637 = 1852129LLU;
uint16_t x1736 = UINT16_MAX;
int8_t x1804 = -1;
uint64_t t31 = 45535900078LLU;
uint32_t x2087 = UINT32_MAX;
int8_t x2168 = -1;
static volatile int32_t x2172 = 66037;
int8_t x2423 = -7;
uint32_t t38 = 2422792U;
int16_t x2457 = INT16_MAX;
static uint8_t x2458 = 1U;
int16_t x2467 = -1;
int8_t x2468 = INT8_MIN;
int64_t x2516 = -1LL;
volatile uint8_t x2578 = 5U;
uint32_t x2579 = UINT32_MAX;
static volatile uint64_t t43 = 1049304644LLU;
uint8_t x2650 = 0U;
static uint64_t x2709 = UINT64_MAX;
uint8_t x2782 = 7U;
volatile int32_t t47 = 249660;
volatile int32_t t48 = -2964289;
uint8_t x2846 = 4U;
int32_t t50 = -1972;
volatile int32_t t54 = 43318029;
static volatile int32_t x3245 = INT32_MAX;
volatile int32_t x3248 = INT32_MIN;
uint8_t x3377 = 23U;
int32_t t58 = -553942898;
int32_t t59 = -46777707;
static uint32_t x3392 = UINT32_MAX;
uint8_t x3394 = 14U;
int64_t x3396 = INT64_MIN;
int32_t t61 = -744389572;
volatile uint32_t x3430 = 1U;
int8_t x3432 = INT8_MAX;
uint64_t x3445 = 2726948457296150961LLU;
static volatile uint64_t t64 = 222666821733LLU;
uint8_t x3525 = 6U;
int64_t x3608 = INT64_MIN;
uint64_t x3625 = 8283807095651255741LLU;
int64_t x3627 = -33110937LL;
int32_t x3628 = INT32_MAX;
static int64_t x3971 = -32LL;
int16_t x4023 = -1;
uint16_t x4037 = 475U;
uint8_t x4131 = UINT8_MAX;
volatile int32_t t77 = 19810993;
static int8_t x4229 = 15;
int32_t x4232 = -6891;
uint8_t x4238 = 0U;
int16_t x4240 = 0;
volatile uint32_t t80 = 4754U;
uint16_t x4241 = 3969U;
int32_t t81 = 5954885;
uint16_t x4276 = 2406U;
int8_t x4476 = INT8_MIN;
uint32_t x4723 = 893432857U;
int8_t x4727 = INT8_MAX;
int32_t t87 = 6615500;
int32_t t88 = -71890936;
int32_t x4944 = -1;
uint16_t x5055 = 78U;
int16_t x5064 = INT16_MAX;
int32_t t94 = 0;
static volatile uint8_t x5207 = 11U;
static volatile uint64_t x5305 = UINT64_MAX;
static int64_t x5327 = INT64_MIN;
int8_t x5328 = INT8_MAX;


void f0(void) {
	uint16_t x118 = 4U;
	uint32_t x119 = 1U;
	int32_t t0 = 42715655;

	t0 = ((x117<<x118)&(x119<=x120));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x134 = 13U;
	uint16_t x135 = UINT16_MAX;
	static volatile uint32_t t1 = 24375731U;

	t1 = ((x133<<x134)&(x135<=x136));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x277 = 1;
	int8_t x278 = 1;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MAX;
	static volatile int32_t t2 = -109997582;

	t2 = ((x277<<x278)&(x279<=x280));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x325 = 0;
	int8_t x326 = 8;
	int64_t x327 = INT64_MIN;
	volatile int8_t x328 = INT8_MIN;

	t3 = ((x325<<x326)&(x327<=x328));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x445 = 56U;
	static volatile int64_t x448 = -1LL;

	t4 = ((x445<<x446)&(x447<=x448));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = 0;
	uint32_t x459 = 264U;
	int64_t x460 = -1LL;
	int32_t t5 = -1;

	t5 = ((x457<<x458)&(x459<=x460));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x481 = 5313U;
	volatile int16_t x482 = 1;
	static int8_t x483 = INT8_MIN;
	int64_t x484 = INT64_MAX;
	volatile uint32_t t6 = 5U;

	t6 = ((x481<<x482)&(x483<=x484));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x698 = 7U;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = 38159435;
	volatile uint32_t t7 = 19U;

	t7 = ((x697<<x698)&(x699<=x700));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x793 = INT16_MAX;
	volatile int32_t x794 = 1;
	static volatile int32_t t8 = 4246;

	t8 = ((x793<<x794)&(x795<=x796));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x837 = INT16_MAX;
	uint16_t x838 = 4U;
	volatile uint64_t x839 = 3906930585LLU;
	static volatile int64_t x840 = INT64_MIN;

	t9 = ((x837<<x838)&(x839<=x840));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x901 = UINT32_MAX;
	uint8_t x902 = 1U;
	static int16_t x903 = INT16_MIN;
	int64_t x904 = -10415520803623LL;
	volatile uint32_t t10 = 500715423U;

	t10 = ((x901<<x902)&(x903<=x904));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x941 = 704766071723LLU;
	static volatile uint8_t x942 = 0U;
	int32_t x943 = INT32_MIN;
	static uint64_t x944 = 2640684808345473LLU;
	uint64_t t11 = 343080728685485LLU;

	t11 = ((x941<<x942)&(x943<=x944));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x961 = UINT64_MAX;
	uint8_t x962 = 6U;
	int64_t x963 = -82879LL;
	uint64_t x964 = UINT64_MAX;
	uint64_t t12 = 1LLU;

	t12 = ((x961<<x962)&(x963<=x964));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x977 = 16351U;
	uint8_t x978 = 0U;
	uint64_t x979 = 339315331245298LLU;
	int32_t x980 = -6971;
	uint32_t t13 = 149836588U;

	t13 = ((x977<<x978)&(x979<=x980));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x1026 = 50;
	int8_t x1027 = INT8_MIN;
	uint32_t x1028 = 11489U;
	volatile uint64_t t14 = 488796531LLU;

	t14 = ((x1025<<x1026)&(x1027<=x1028));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1075 = INT64_MIN;
	static int8_t x1076 = 1;
	volatile int32_t t15 = 23355;

	t15 = ((x1073<<x1074)&(x1075<=x1076));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1117 = 709U;
	static uint8_t x1118 = 13U;
	uint64_t x1119 = 0LLU;
	static int8_t x1120 = INT8_MAX;
	volatile int32_t t16 = 19517;

	t16 = ((x1117<<x1118)&(x1119<=x1120));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x1185 = 1007959429775887527LLU;
	uint16_t x1187 = 3066U;
	int64_t x1188 = INT64_MIN;
	uint64_t t17 = 117LLU;

	t17 = ((x1185<<x1186)&(x1187<=x1188));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1285 = INT16_MAX;
	int8_t x1286 = 3;
	int32_t x1287 = -1;
	int64_t x1288 = INT64_MIN;
	volatile int32_t t18 = -2;

	t18 = ((x1285<<x1286)&(x1287<=x1288));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1425 = 208;
	volatile uint16_t x1427 = 397U;
	int32_t t19 = -908;

	t19 = ((x1425<<x1426)&(x1427<=x1428));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1449 = 5572852847416LLU;
	int32_t x1450 = 1;
	volatile int16_t x1451 = -1;
	uint16_t x1452 = 18005U;
	volatile uint64_t t20 = 10074275282LLU;

	t20 = ((x1449<<x1450)&(x1451<=x1452));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1453 = UINT8_MAX;
	uint8_t x1454 = 4U;
	int32_t x1455 = -1;
	int16_t x1456 = 6251;

	t21 = ((x1453<<x1454)&(x1455<=x1456));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1497 = 41;
	int32_t x1500 = -1;
	volatile int32_t t22 = -30655061;

	t22 = ((x1497<<x1498)&(x1499<=x1500));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x1501 = 4490U;
	static int8_t x1502 = 2;
	static uint32_t x1504 = UINT32_MAX;
	int32_t t23 = -845866;

	t23 = ((x1501<<x1502)&(x1503<=x1504));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1526 = 20LLU;
	int32_t x1527 = INT32_MAX;
	static uint64_t x1528 = 265655375533021LLU;
	int32_t t24 = -870226;

	t24 = ((x1525<<x1526)&(x1527<=x1528));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1573 = 17;
	volatile int8_t x1574 = 2;
	static int32_t x1575 = 18832186;
	volatile int32_t t25 = 16;

	t25 = ((x1573<<x1574)&(x1575<=x1576));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1610 = 1;
	static int32_t x1611 = -1;
	volatile int64_t t26 = 908093362089613LL;

	t26 = ((x1609<<x1610)&(x1611<=x1612));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1625 = 25U;
	static uint64_t x1626 = 18LLU;
	uint32_t x1627 = 12U;
	int16_t x1628 = INT16_MIN;
	uint32_t t27 = 23U;

	t27 = ((x1625<<x1626)&(x1627<=x1628));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1638 = 1U;
	volatile int64_t x1639 = -1LL;
	volatile uint16_t x1640 = UINT16_MAX;
	volatile uint64_t t28 = 12506696671766984LLU;

	t28 = ((x1637<<x1638)&(x1639<=x1640));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1733 = 1539U;
	uint64_t x1734 = 2LLU;
	int16_t x1735 = INT16_MIN;
	int32_t t29 = -3422404;

	t29 = ((x1733<<x1734)&(x1735<=x1736));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1801 = 8821479809588700LL;
	uint8_t x1802 = 0U;
	volatile int8_t x1803 = INT8_MIN;
	static int64_t t30 = 500201028947937754LL;

	t30 = ((x1801<<x1802)&(x1803<=x1804));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1973 = UINT64_MAX;
	static uint8_t x1974 = 6U;
	int32_t x1975 = INT32_MIN;
	int64_t x1976 = INT64_MAX;

	t31 = ((x1973<<x1974)&(x1975<=x1976));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2085 = 0;
	int8_t x2086 = 28;
	static int8_t x2088 = INT8_MAX;
	volatile int32_t t32 = -263808254;

	t32 = ((x2085<<x2086)&(x2087<=x2088));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2165 = 23U;
	int16_t x2166 = 1;
	static int16_t x2167 = INT16_MIN;
	int32_t t33 = 2691;

	t33 = ((x2165<<x2166)&(x2167<=x2168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2169 = UINT64_MAX;
	volatile int8_t x2170 = 6;
	int32_t x2171 = -59532133;
	volatile uint64_t t34 = 1LLU;

	t34 = ((x2169<<x2170)&(x2171<=x2172));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2237 = INT8_MAX;
	uint8_t x2238 = 10U;
	int64_t x2239 = INT64_MIN;
	int8_t x2240 = INT8_MIN;
	static int32_t t35 = -98804354;

	t35 = ((x2237<<x2238)&(x2239<=x2240));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2253 = 27;
	volatile uint32_t x2254 = 7U;
	static int32_t x2255 = -1;
	int8_t x2256 = INT8_MIN;
	volatile int32_t t36 = 261133;

	t36 = ((x2253<<x2254)&(x2255<=x2256));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2421 = 4078;
	static uint64_t x2422 = 0LLU;
	int32_t x2424 = 1450;
	volatile int32_t t37 = 3362;

	t37 = ((x2421<<x2422)&(x2423<=x2424));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2433 = 892963U;
	volatile int8_t x2434 = 0;
	static int8_t x2435 = INT8_MAX;
	static int32_t x2436 = -1;

	t38 = ((x2433<<x2434)&(x2435<=x2436));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2459 = INT8_MIN;
	int64_t x2460 = INT64_MIN;
	static volatile int32_t t39 = 389070828;

	t39 = ((x2457<<x2458)&(x2459<=x2460));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2465 = 7U;
	int16_t x2466 = 1;
	volatile int32_t t40 = -327753;

	t40 = ((x2465<<x2466)&(x2467<=x2468));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2509 = 51871950501873LL;
	static volatile int8_t x2510 = 1;
	int32_t x2511 = -153;
	uint16_t x2512 = 162U;
	volatile int64_t t41 = 123LL;

	t41 = ((x2509<<x2510)&(x2511<=x2512));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2513 = 5U;
	int64_t x2514 = 4LL;
	int8_t x2515 = INT8_MIN;
	volatile int32_t t42 = 1203;

	t42 = ((x2513<<x2514)&(x2515<=x2516));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2577 = UINT64_MAX;
	uint8_t x2580 = UINT8_MAX;

	t43 = ((x2577<<x2578)&(x2579<=x2580));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2649 = 15636LL;
	volatile int64_t x2651 = INT64_MIN;
	int64_t x2652 = -1LL;
	int64_t t44 = 3320623362258349LL;

	t44 = ((x2649<<x2650)&(x2651<=x2652));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2710 = 10U;
	static volatile uint64_t x2711 = 11656926404631206LLU;
	static int8_t x2712 = 0;
	volatile uint64_t t45 = 35LLU;

	t45 = ((x2709<<x2710)&(x2711<=x2712));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2741 = 10U;
	uint8_t x2742 = 4U;
	int32_t x2743 = INT32_MAX;
	static volatile int32_t x2744 = INT32_MIN;
	static volatile int32_t t46 = 0;

	t46 = ((x2741<<x2742)&(x2743<=x2744));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2781 = 18;
	int64_t x2783 = -73399LL;
	static int32_t x2784 = 118;

	t47 = ((x2781<<x2782)&(x2783<=x2784));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2793 = UINT16_MAX;
	uint16_t x2794 = 10U;
	int8_t x2795 = 0;
	static int32_t x2796 = INT32_MAX;

	t48 = ((x2793<<x2794)&(x2795<=x2796));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x2845 = 8U;
	static int8_t x2847 = INT8_MAX;
	static uint16_t x2848 = UINT16_MAX;
	volatile int32_t t49 = -9;

	t49 = ((x2845<<x2846)&(x2847<=x2848));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2865 = 18957U;
	int8_t x2866 = 1;
	uint8_t x2867 = 41U;
	int8_t x2868 = INT8_MAX;

	t50 = ((x2865<<x2866)&(x2867<=x2868));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x2909 = 17429237971688LLU;
	int16_t x2910 = 1;
	int32_t x2911 = -1;
	int64_t x2912 = -3773394LL;
	volatile uint64_t t51 = 179758185LLU;

	t51 = ((x2909<<x2910)&(x2911<=x2912));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2917 = UINT64_MAX;
	int64_t x2918 = 28LL;
	int32_t x2919 = 519;
	uint16_t x2920 = 31U;
	volatile uint64_t t52 = 46082645810161796LLU;

	t52 = ((x2917<<x2918)&(x2919<=x2920));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3081 = 5U;
	uint8_t x3082 = 6U;
	static int32_t x3083 = INT32_MIN;
	int64_t x3084 = -18259295651712434LL;
	int32_t t53 = -2;

	t53 = ((x3081<<x3082)&(x3083<=x3084));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3141 = UINT16_MAX;
	uint16_t x3142 = 10U;
	uint16_t x3143 = 8659U;
	volatile int32_t x3144 = INT32_MAX;

	t54 = ((x3141<<x3142)&(x3143<=x3144));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3173 = INT16_MAX;
	uint8_t x3174 = 0U;
	uint16_t x3175 = 3884U;
	uint32_t x3176 = 1211U;
	volatile int32_t t55 = -148870;

	t55 = ((x3173<<x3174)&(x3175<=x3176));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x3246 = 0U;
	int8_t x3247 = -54;
	static volatile int32_t t56 = 611668;

	t56 = ((x3245<<x3246)&(x3247<=x3248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3265 = 21U;
	static volatile uint32_t x3266 = 11U;
	int32_t x3267 = -1;
	uint32_t x3268 = UINT32_MAX;
	uint32_t t57 = 260U;

	t57 = ((x3265<<x3266)&(x3267<=x3268));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3378 = 17;
	int8_t x3379 = INT8_MAX;
	int32_t x3380 = INT32_MIN;

	t58 = ((x3377<<x3378)&(x3379<=x3380));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3381 = UINT16_MAX;
	uint8_t x3382 = 0U;
	int8_t x3383 = -1;
	volatile int16_t x3384 = -277;

	t59 = ((x3381<<x3382)&(x3383<=x3384));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3389 = INT32_MAX;
	int8_t x3390 = 0;
	volatile int32_t x3391 = -27;
	volatile int32_t t60 = 371482;

	t60 = ((x3389<<x3390)&(x3391<=x3392));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x3393 = 4U;
	uint16_t x3395 = UINT16_MAX;

	t61 = ((x3393<<x3394)&(x3395<=x3396));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3413 = UINT64_MAX;
	static uint16_t x3414 = 6U;
	uint64_t x3415 = 88096725525LLU;
	int8_t x3416 = INT8_MAX;
	uint64_t t62 = 164507355890048LLU;

	t62 = ((x3413<<x3414)&(x3415<=x3416));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3429 = 1079264329802LLU;
	int8_t x3431 = INT8_MIN;
	volatile uint64_t t63 = 84603LLU;

	t63 = ((x3429<<x3430)&(x3431<=x3432));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3446 = 3U;
	static int32_t x3447 = -1;
	uint64_t x3448 = 1812721338554768156LLU;

	t64 = ((x3445<<x3446)&(x3447<=x3448));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3526 = 6;
	int8_t x3527 = 0;
	uint8_t x3528 = 15U;
	static volatile int32_t t65 = 63931;

	t65 = ((x3525<<x3526)&(x3527<=x3528));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3597 = 3727887980128193LLU;
	uint32_t x3598 = 6U;
	volatile uint16_t x3599 = 13293U;
	uint16_t x3600 = UINT16_MAX;
	uint64_t t66 = 4288LLU;

	t66 = ((x3597<<x3598)&(x3599<=x3600));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3605 = 1;
	static int8_t x3606 = 7;
	int16_t x3607 = INT16_MIN;
	int32_t t67 = -536988;

	t67 = ((x3605<<x3606)&(x3607<=x3608));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3626 = 44U;
	static volatile uint64_t t68 = 272650714970437LLU;

	t68 = ((x3625<<x3626)&(x3627<=x3628));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3657 = 1380488588LL;
	uint8_t x3658 = 4U;
	int8_t x3659 = 8;
	int8_t x3660 = 6;
	volatile int64_t t69 = 98736641LL;

	t69 = ((x3657<<x3658)&(x3659<=x3660));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3773 = UINT16_MAX;
	static int8_t x3774 = 0;
	volatile uint16_t x3775 = UINT16_MAX;
	volatile int32_t x3776 = -1;
	volatile int32_t t70 = -1317;

	t70 = ((x3773<<x3774)&(x3775<=x3776));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3893 = 0;
	uint16_t x3894 = 21U;
	int16_t x3895 = 35;
	volatile uint8_t x3896 = 22U;
	volatile int32_t t71 = 242540;

	t71 = ((x3893<<x3894)&(x3895<=x3896));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3933 = 43U;
	int8_t x3934 = 8;
	volatile int16_t x3935 = -125;
	uint8_t x3936 = 10U;
	static volatile int32_t t72 = -8839984;

	t72 = ((x3933<<x3934)&(x3935<=x3936));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3941 = INT16_MAX;
	int64_t x3942 = 0LL;
	int16_t x3943 = INT16_MIN;
	static int32_t x3944 = 36917552;
	volatile int32_t t73 = 52023;

	t73 = ((x3941<<x3942)&(x3943<=x3944));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3969 = UINT32_MAX;
	uint16_t x3970 = 31U;
	volatile int16_t x3972 = INT16_MIN;
	static volatile uint32_t t74 = 359U;

	t74 = ((x3969<<x3970)&(x3971<=x3972));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4021 = UINT16_MAX;
	uint8_t x4022 = 15U;
	uint64_t x4024 = UINT64_MAX;
	int32_t t75 = 0;

	t75 = ((x4021<<x4022)&(x4023<=x4024));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4038 = 1;
	volatile int64_t x4039 = INT64_MIN;
	uint16_t x4040 = UINT16_MAX;
	int32_t t76 = -303764;

	t76 = ((x4037<<x4038)&(x4039<=x4040));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4129 = INT8_MAX;
	uint8_t x4130 = 12U;
	uint64_t x4132 = UINT64_MAX;

	t77 = ((x4129<<x4130)&(x4131<=x4132));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4230 = 27;
	int64_t x4231 = INT64_MIN;
	int32_t t78 = -3977761;

	t78 = ((x4229<<x4230)&(x4231<=x4232));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4233 = UINT8_MAX;
	int16_t x4234 = 0;
	static int8_t x4235 = 1;
	volatile int32_t x4236 = INT32_MIN;
	int32_t t79 = 36046595;

	t79 = ((x4233<<x4234)&(x4235<=x4236));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4237 = 33U;
	int8_t x4239 = 12;

	t80 = ((x4237<<x4238)&(x4239<=x4240));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4242 = 0;
	uint16_t x4243 = 756U;
	uint64_t x4244 = UINT64_MAX;

	t81 = ((x4241<<x4242)&(x4243<=x4244));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x4257 = UINT16_MAX;
	uint8_t x4258 = 1U;
	int32_t x4259 = INT32_MIN;
	static volatile uint64_t x4260 = UINT64_MAX;
	volatile int32_t t82 = -859271;

	t82 = ((x4257<<x4258)&(x4259<=x4260));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4273 = 53;
	static uint8_t x4274 = 3U;
	static int64_t x4275 = INT64_MIN;
	static int32_t t83 = -749897619;

	t83 = ((x4273<<x4274)&(x4275<=x4276));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4465 = 125967LLU;
	uint8_t x4466 = 2U;
	int16_t x4467 = -74;
	uint64_t x4468 = UINT64_MAX;
	uint64_t t84 = 140478890230433872LLU;

	t84 = ((x4465<<x4466)&(x4467<=x4468));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x4473 = INT8_MAX;
	static uint32_t x4474 = 1U;
	int8_t x4475 = INT8_MIN;
	int32_t t85 = -404334;

	t85 = ((x4473<<x4474)&(x4475<=x4476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4721 = UINT64_MAX;
	uint8_t x4722 = 2U;
	uint8_t x4724 = 52U;
	volatile uint64_t t86 = 373752734970593964LLU;

	t86 = ((x4721<<x4722)&(x4723<=x4724));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4725 = 7;
	volatile int8_t x4726 = 0;
	int8_t x4728 = INT8_MIN;

	t87 = ((x4725<<x4726)&(x4727<=x4728));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4761 = 24U;
	uint32_t x4762 = 0U;
	uint8_t x4763 = UINT8_MAX;
	int8_t x4764 = 0;

	t88 = ((x4761<<x4762)&(x4763<=x4764));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4769 = 5862U;
	volatile uint8_t x4770 = 6U;
	uint32_t x4771 = 17U;
	uint32_t x4772 = UINT32_MAX;
	volatile int32_t t89 = 3;

	t89 = ((x4769<<x4770)&(x4771<=x4772));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4905 = 91U;
	volatile uint16_t x4906 = 15U;
	int64_t x4907 = INT64_MIN;
	uint16_t x4908 = 157U;
	int32_t t90 = -3;

	t90 = ((x4905<<x4906)&(x4907<=x4908));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4941 = INT32_MAX;
	static int8_t x4942 = 0;
	int8_t x4943 = INT8_MIN;
	volatile int32_t t91 = -6381;

	t91 = ((x4941<<x4942)&(x4943<=x4944));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5053 = 3;
	static int32_t x5054 = 0;
	uint8_t x5056 = 3U;
	int32_t t92 = -1621;

	t92 = ((x5053<<x5054)&(x5055<=x5056));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5061 = 74288711602LLU;
	int8_t x5062 = 0;
	uint32_t x5063 = UINT32_MAX;
	volatile uint64_t t93 = 17LLU;

	t93 = ((x5061<<x5062)&(x5063<=x5064));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5153 = INT8_MAX;
	static int8_t x5154 = 1;
	static int8_t x5155 = INT8_MIN;
	int8_t x5156 = INT8_MIN;

	t94 = ((x5153<<x5154)&(x5155<=x5156));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5205 = 63U;
	volatile uint8_t x5206 = 6U;
	int64_t x5208 = -1LL;
	volatile int32_t t95 = 34752514;

	t95 = ((x5205<<x5206)&(x5207<=x5208));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x5306 = 0U;
	uint16_t x5307 = 55U;
	volatile int16_t x5308 = -1;
	volatile uint64_t t96 = 245537975835625LLU;

	t96 = ((x5305<<x5306)&(x5307<=x5308));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5321 = 36U;
	int16_t x5322 = 19;
	volatile int8_t x5323 = INT8_MIN;
	volatile int16_t x5324 = 6300;
	volatile int32_t t97 = 31958050;

	t97 = ((x5321<<x5322)&(x5323<=x5324));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5325 = UINT16_MAX;
	int8_t x5326 = 4;
	volatile int32_t t98 = -99;

	t98 = ((x5325<<x5326)&(x5327<=x5328));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5417 = UINT64_MAX;
	int16_t x5418 = 1;
	uint64_t x5419 = 8712007723764162089LLU;
	int8_t x5420 = 1;
	static uint64_t t99 = 21204721LLU;

	t99 = ((x5417<<x5418)&(x5419<=x5420));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

