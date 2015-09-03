#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x18 = 30U;
int8_t x20 = -1;
int8_t x72 = -3;
volatile int32_t x197 = INT32_MAX;
static int16_t x198 = 6;
int16_t x209 = 1;
static volatile uint16_t x210 = 0U;
volatile int64_t x285 = 81718296560627226LL;
static int16_t x286 = 21;
int64_t x312 = INT64_MIN;
static int32_t x444 = INT32_MAX;
uint8_t x523 = UINT8_MAX;
uint32_t t10 = 5330U;
int32_t t11 = 11569003;
volatile int64_t x704 = INT64_MIN;
volatile int16_t x767 = 3362;
volatile uint32_t t16 = 224272U;
static uint64_t t20 = 1LLU;
volatile int64_t t21 = -5LL;
uint16_t x1206 = 5U;
static uint64_t x1311 = 81139709597LLU;
int8_t x1507 = INT8_MAX;
volatile uint32_t t27 = 96516U;
uint8_t x1530 = 0U;
volatile uint16_t x1768 = UINT16_MAX;
int32_t t30 = 535011395;
uint8_t x1866 = 14U;
uint64_t x1945 = 70429769848LLU;
static int64_t x1947 = INT64_MIN;
volatile int64_t x2101 = INT64_MAX;
uint8_t x2104 = 3U;
uint64_t x2116 = 8332082399125LLU;
volatile uint64_t t36 = 691LLU;
int32_t x2178 = 29;
static int16_t x2180 = 54;
int64_t x2181 = 88363786386LL;
uint64_t x2248 = 36765623653804790LLU;
uint32_t x2253 = 1441U;
uint8_t x2256 = UINT8_MAX;
uint8_t x2382 = 25U;
volatile uint8_t x2383 = 3U;
uint8_t x2513 = UINT8_MAX;
int8_t x2609 = 0;
int16_t x2641 = 221;
static int32_t x2670 = 0;
int32_t x2695 = -831;
int32_t x2696 = 108091223;
int32_t t47 = 1;
int64_t x2823 = -1LL;
int64_t t48 = -702870LL;
volatile int32_t t50 = 10;
int16_t x3230 = 4;
volatile int32_t t53 = -7155;
int8_t x3250 = 30;
uint32_t x3251 = 65262U;
int16_t x3286 = 1;
int8_t x3803 = INT8_MIN;
uint32_t x3804 = 516354U;
volatile uint8_t x3990 = 2U;
int8_t x3992 = -2;
uint32_t t62 = 38U;
int32_t x4125 = 12131;
static uint32_t x4126 = 0U;
int32_t x4127 = -92172712;
static volatile int8_t x4231 = -1;
uint8_t x4269 = UINT8_MAX;
uint8_t x4286 = 0U;
static volatile int64_t t67 = -11226400LL;
int16_t x4371 = -1;
int16_t x4376 = INT16_MAX;
volatile int8_t x4613 = 1;
int32_t t71 = 2;
static uint8_t x4701 = 8U;
volatile uint32_t x4765 = 25022U;
volatile int64_t t74 = 7643681974LL;
static volatile uint64_t x4854 = 1LLU;
uint32_t x4900 = 22577U;
int16_t x5263 = -1;
volatile int32_t t80 = 114322641;
volatile uint8_t x5457 = UINT8_MAX;
int64_t x5459 = -19010232143LL;
uint64_t x5501 = 193725265LLU;
volatile uint16_t x5578 = 1U;
uint16_t x5654 = 0U;
int16_t x5656 = INT16_MIN;
uint32_t x5738 = 12U;
int16_t x5739 = INT16_MAX;
static int64_t x5740 = INT64_MIN;
static int8_t x5952 = 13;
uint32_t t90 = 294464253U;
static uint64_t x5971 = 764906467LLU;
uint64_t t91 = 3852LLU;
volatile uint16_t x6014 = 7U;
int32_t x6064 = INT32_MIN;
volatile int64_t x6086 = 1LL;
int8_t x6088 = 1;
volatile uint8_t x6103 = 1U;
int16_t x6104 = 489;
volatile int64_t t97 = -83LL;
volatile uint8_t x6242 = 13U;
int16_t x6247 = INT16_MIN;


void f0(void) {
	uint64_t x17 = 1051790403228516117LLU;
	volatile int64_t x19 = -1LL;
	static volatile uint64_t t0 = 115536194340LLU;

	t0 = (((x17>>x18)|x19)%x20);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x69 = INT64_MAX;
	int8_t x70 = 0;
	uint64_t x71 = 234393LLU;
	uint64_t t1 = 2058097145578096794LLU;

	t1 = (((x69>>x70)|x71)%x72);

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x77 = 1U;
	static uint16_t x78 = 3U;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = -1;
	int32_t t2 = -11154296;

	t2 = (((x77>>x78)|x79)%x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x199 = 6583059U;
	int64_t x200 = 312609888364148LL;
	int64_t t3 = 199062770099849053LL;

	t3 = (((x197>>x198)|x199)%x200);

	if (t3 != 33554431LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x211 = -101479752912LL;
	int32_t x212 = -1;
	static volatile int64_t t4 = 780591707503453LL;

	t4 = (((x209>>x210)|x211)%x212);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x261 = 0U;
	int64_t x262 = 1LL;
	uint32_t x263 = 4849U;
	int32_t x264 = INT32_MAX;
	static uint32_t t5 = 265835U;

	t5 = (((x261>>x262)|x263)%x264);

	if (t5 != 4849U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x287 = 2329652430LLU;
	static int8_t x288 = -1;
	uint64_t t6 = 5509421519623LLU;

	t6 = (((x285>>x286)|x287)%x288);

	if (t6 != 41252814079LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x309 = 206852U;
	uint8_t x310 = 0U;
	int64_t x311 = INT64_MIN;
	int64_t t7 = -1942LL;

	t7 = (((x309>>x310)|x311)%x312);

	if (t7 != -9223372036854568956LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x441 = 1;
	uint8_t x442 = 2U;
	int8_t x443 = INT8_MIN;
	volatile int32_t t8 = 485626;

	t8 = (((x441>>x442)|x443)%x444);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x477 = UINT16_MAX;
	volatile uint8_t x478 = 16U;
	static int64_t x479 = -1LL;
	int32_t x480 = INT32_MIN;
	volatile int64_t t9 = 3581303843562LL;

	t9 = (((x477>>x478)|x479)%x480);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x521 = 15470U;
	volatile int64_t x522 = 2LL;
	static int32_t x524 = INT32_MIN;

	t10 = (((x521>>x522)|x523)%x524);

	if (t10 != 4095U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x577 = 287;
	int8_t x578 = 0;
	static volatile int16_t x579 = -100;
	int32_t x580 = INT32_MIN;

	t11 = (((x577>>x578)|x579)%x580);

	if (t11 != -97) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x637 = INT32_MAX;
	volatile uint8_t x638 = 0U;
	int16_t x639 = -10825;
	static int64_t x640 = -521262130LL;
	volatile int64_t t12 = 1205138LL;

	t12 = (((x637>>x638)|x639)%x640);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x701 = UINT64_MAX;
	int16_t x702 = 2;
	int64_t x703 = INT64_MIN;
	uint64_t t13 = 1540LLU;

	t13 = (((x701>>x702)|x703)%x704);

	if (t13 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x709 = UINT8_MAX;
	uint8_t x710 = 0U;
	int8_t x711 = -63;
	uint16_t x712 = 699U;
	int32_t t14 = -3079;

	t14 = (((x709>>x710)|x711)%x712);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = 14U;
	static volatile int8_t x739 = INT8_MIN;
	int8_t x740 = -1;
	static volatile int32_t t15 = -473686081;

	t15 = (((x737>>x738)|x739)%x740);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x765 = 44;
	static uint32_t x766 = 9U;
	uint32_t x768 = 3617U;

	t16 = (((x765>>x766)|x767)%x768);

	if (t16 != 3362U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x805 = UINT64_MAX;
	volatile uint8_t x806 = 1U;
	uint8_t x807 = 3U;
	int8_t x808 = INT8_MIN;
	static uint64_t t17 = 7851738300LLU;

	t17 = (((x805>>x806)|x807)%x808);

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x849 = 76U;
	static uint8_t x850 = 9U;
	volatile int64_t x851 = -25331745079967847LL;
	int64_t x852 = INT64_MIN;
	int64_t t18 = 24458119975280LL;

	t18 = (((x849>>x850)|x851)%x852);

	if (t18 != -25331745079967847LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x873 = 333486U;
	int8_t x874 = 12;
	int16_t x875 = -1;
	uint8_t x876 = UINT8_MAX;
	uint32_t t19 = 6941981U;

	t19 = (((x873>>x874)|x875)%x876);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x925 = 5;
	static uint16_t x926 = 1U;
	int8_t x927 = INT8_MIN;
	uint64_t x928 = 7074181577LLU;

	t20 = (((x925>>x926)|x927)%x928);

	if (t20 != 991312852LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1177 = 1U;
	volatile uint8_t x1178 = 5U;
	static int64_t x1179 = -1LL;
	int16_t x1180 = INT16_MIN;

	t21 = (((x1177>>x1178)|x1179)%x1180);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1197 = INT64_MAX;
	static uint16_t x1198 = 55U;
	int64_t x1199 = INT64_MIN;
	uint16_t x1200 = 635U;
	int64_t t22 = 70257351207LL;

	t22 = (((x1197>>x1198)|x1199)%x1200);

	if (t22 != -508LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1205 = 1888;
	uint64_t x1207 = 691065079522855856LLU;
	int64_t x1208 = -1LL;
	uint64_t t23 = 67879478LLU;

	t23 = (((x1205>>x1206)|x1207)%x1208);

	if (t23 != 691065079522855867LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1245 = 25U;
	uint16_t x1246 = 9U;
	volatile int32_t x1247 = -1;
	uint16_t x1248 = UINT16_MAX;
	volatile int32_t t24 = 11;

	t24 = (((x1245>>x1246)|x1247)%x1248);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1309 = 0;
	uint8_t x1310 = 25U;
	int64_t x1312 = -44LL;
	uint64_t t25 = 103987LLU;

	t25 = (((x1309>>x1310)|x1311)%x1312);

	if (t25 != 81139709597LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1397 = INT64_MAX;
	uint16_t x1398 = 0U;
	int32_t x1399 = -1;
	int64_t x1400 = 959112774LL;
	volatile int64_t t26 = 265331086693LL;

	t26 = (((x1397>>x1398)|x1399)%x1400);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1505 = 117698873U;
	uint8_t x1506 = 5U;
	int16_t x1508 = INT16_MIN;

	t27 = (((x1505>>x1506)|x1507)%x1508);

	if (t27 != 3678207U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1529 = INT16_MAX;
	int8_t x1531 = INT8_MIN;
	int8_t x1532 = INT8_MAX;
	int32_t t28 = -6;

	t28 = (((x1529>>x1530)|x1531)%x1532);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1541 = 5711538LL;
	volatile int16_t x1542 = 8;
	int16_t x1543 = INT16_MAX;
	int32_t x1544 = INT32_MAX;
	int64_t t29 = -1040253834465LL;

	t29 = (((x1541>>x1542)|x1543)%x1544);

	if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1765 = 1U;
	volatile int32_t x1766 = 5;
	static int32_t x1767 = -3;

	t30 = (((x1765>>x1766)|x1767)%x1768);

	if (t30 != -3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1861 = 41U;
	int8_t x1862 = 0;
	int32_t x1863 = INT32_MIN;
	int16_t x1864 = INT16_MIN;
	static int32_t t31 = 58963;

	t31 = (((x1861>>x1862)|x1863)%x1864);

	if (t31 != -32727) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1865 = UINT64_MAX;
	int16_t x1867 = -30;
	int64_t x1868 = INT64_MIN;
	static volatile uint64_t t32 = 62981186698LLU;

	t32 = (((x1865>>x1866)|x1867)%x1868);

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1946 = 1;
	int32_t x1948 = -61986457;
	volatile uint64_t t33 = 82LLU;

	t33 = (((x1945>>x1946)|x1947)%x1948);

	if (t33 != 9223372072069660732LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2049 = 8554U;
	volatile int16_t x2050 = 0;
	int64_t x2051 = 1876680807955391694LL;
	int64_t x2052 = -25LL;
	int64_t t34 = -17LL;

	t34 = (((x2049>>x2050)|x2051)%x2052);

	if (t34 != 7LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2102 = 1U;
	static int32_t x2103 = 1952485;
	static int64_t t35 = 4851711LL;

	t35 = (((x2101>>x2102)|x2103)%x2104);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x2113 = 6;
	static int8_t x2114 = 1;
	int64_t x2115 = INT64_MIN;

	t36 = (((x2113>>x2114)|x2115)%x2116);

	if (t36 != 6783495374561LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2177 = 30283412456737451LLU;
	static int16_t x2179 = INT16_MAX;
	uint64_t t37 = 30276525LLU;

	t37 = (((x2177>>x2178)|x2179)%x2180);

	if (t37 != 5LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2182 = 0U;
	volatile int32_t x2183 = -402;
	uint8_t x2184 = UINT8_MAX;
	int64_t t38 = 7151LL;

	t38 = (((x2181>>x2182)|x2183)%x2184);

	if (t38 != -3LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2245 = 0;
	uint16_t x2246 = 0U;
	int8_t x2247 = INT8_MIN;
	volatile uint64_t t39 = 38092046LLU;

	t39 = (((x2245>>x2246)|x2247)%x2248);

	if (t39 != 27166623153351698LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2254 = 2U;
	static int32_t x2255 = INT32_MIN;
	static uint32_t t40 = 2736U;

	t40 = (((x2253>>x2254)|x2255)%x2256);

	if (t40 != 233U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2381 = 0;
	static uint64_t x2384 = 78160LLU;
	uint64_t t41 = 2018LLU;

	t41 = (((x2381>>x2382)|x2383)%x2384);

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2514 = 1U;
	int64_t x2515 = 306224031494809LL;
	int16_t x2516 = INT16_MIN;
	int64_t t42 = -428LL;

	t42 = (((x2513>>x2514)|x2515)%x2516);

	if (t42 != 29439LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x2597 = INT64_MAX;
	uint8_t x2598 = 24U;
	volatile int64_t x2599 = -918223LL;
	int32_t x2600 = INT32_MIN;
	volatile int64_t t43 = 97LL;

	t43 = (((x2597>>x2598)|x2599)%x2600);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2610 = 6U;
	static volatile uint16_t x2611 = 113U;
	int8_t x2612 = 1;
	volatile int32_t t44 = 5860754;

	t44 = (((x2609>>x2610)|x2611)%x2612);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2642 = 3U;
	static int32_t x2643 = -22218489;
	int64_t x2644 = INT64_MIN;
	static int64_t t45 = -432LL;

	t45 = (((x2641>>x2642)|x2643)%x2644);

	if (t45 != -22218465LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2669 = INT16_MAX;
	int64_t x2671 = 933LL;
	int16_t x2672 = -2;
	volatile int64_t t46 = 291221273119447LL;

	t46 = (((x2669>>x2670)|x2671)%x2672);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2693 = INT8_MAX;
	int16_t x2694 = 0;

	t47 = (((x2693>>x2694)|x2695)%x2696);

	if (t47 != -769) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2821 = UINT16_MAX;
	volatile uint8_t x2822 = 6U;
	int16_t x2824 = INT16_MAX;

	t48 = (((x2821>>x2822)|x2823)%x2824);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x2905 = 4156724429545657LLU;
	int64_t x2906 = 22LL;
	int16_t x2907 = INT16_MAX;
	int8_t x2908 = -55;
	static volatile uint64_t t49 = 2693762633332LLU;

	t49 = (((x2905>>x2906)|x2907)%x2908);

	if (t49 != 991068159LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3133 = 94U;
	int8_t x3134 = 0;
	static volatile int8_t x3135 = INT8_MIN;
	uint16_t x3136 = UINT16_MAX;

	t50 = (((x3133>>x3134)|x3135)%x3136);

	if (t50 != -34) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3201 = 98U;
	volatile uint16_t x3202 = 19U;
	int32_t x3203 = -1;
	uint32_t x3204 = UINT32_MAX;
	volatile uint32_t t51 = 380U;

	t51 = (((x3201>>x3202)|x3203)%x3204);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3225 = INT64_MAX;
	volatile uint8_t x3226 = 44U;
	static int8_t x3227 = INT8_MIN;
	int16_t x3228 = -1;
	volatile int64_t t52 = 116259095405LL;

	t52 = (((x3225>>x3226)|x3227)%x3228);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3229 = 2564U;
	volatile int16_t x3231 = INT16_MIN;
	int8_t x3232 = -1;

	t53 = (((x3229>>x3230)|x3231)%x3232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3249 = 498344;
	volatile int64_t x3252 = INT64_MIN;
	int64_t t54 = 304123LL;

	t54 = (((x3249>>x3250)|x3251)%x3252);

	if (t54 != 65262LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3273 = 675U;
	uint16_t x3274 = 3U;
	int16_t x3275 = -1;
	static int64_t x3276 = 3259450959LL;
	int64_t t55 = -22187LL;

	t55 = (((x3273>>x3274)|x3275)%x3276);

	if (t55 != 1035516336LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3277 = UINT16_MAX;
	static uint8_t x3278 = 28U;
	volatile uint32_t x3279 = 1382114U;
	int64_t x3280 = INT64_MIN;
	static int64_t t56 = -831257393LL;

	t56 = (((x3277>>x3278)|x3279)%x3280);

	if (t56 != 1382114LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3285 = INT32_MAX;
	static int32_t x3287 = 593330;
	uint8_t x3288 = 7U;
	volatile int32_t t57 = -64008788;

	t57 = (((x3285>>x3286)|x3287)%x3288);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3441 = 1644938583078099LL;
	uint16_t x3442 = 1U;
	int16_t x3443 = -1;
	volatile int16_t x3444 = 1913;
	volatile int64_t t58 = 0LL;

	t58 = (((x3441>>x3442)|x3443)%x3444);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3561 = 1279114868LLU;
	uint8_t x3562 = 3U;
	uint16_t x3563 = 29U;
	int8_t x3564 = INT8_MIN;
	volatile uint64_t t59 = 57034461453903068LLU;

	t59 = (((x3561>>x3562)|x3563)%x3564);

	if (t59 != 159889375LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3633 = 0;
	uint8_t x3634 = 2U;
	static volatile int8_t x3635 = -1;
	uint16_t x3636 = 25U;
	int32_t t60 = -8155;

	t60 = (((x3633>>x3634)|x3635)%x3636);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3801 = 3;
	volatile int8_t x3802 = 4;
	static uint32_t t61 = 615U;

	t61 = (((x3801>>x3802)|x3803)%x3804);

	if (t61 != 450950U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3989 = 19884U;
	volatile int32_t x3991 = INT32_MAX;

	t62 = (((x3989>>x3990)|x3991)%x3992);

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4128 = INT32_MAX;
	int32_t t63 = 1;

	t63 = (((x4125>>x4126)|x4127)%x4128);

	if (t63 != -92164229) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4229 = 414666;
	volatile uint32_t x4230 = 6U;
	int32_t x4232 = -553818429;
	volatile int32_t t64 = -478239924;

	t64 = (((x4229>>x4230)|x4231)%x4232);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x4270 = 3;
	uint16_t x4271 = 2U;
	int64_t x4272 = -2648972425788148LL;
	int64_t t65 = 3LL;

	t65 = (((x4269>>x4270)|x4271)%x4272);

	if (t65 != 31LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x4285 = 6U;
	volatile uint16_t x4287 = 1U;
	static int16_t x4288 = 3;
	volatile uint32_t t66 = 3911529U;

	t66 = (((x4285>>x4286)|x4287)%x4288);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4289 = INT16_MAX;
	uint8_t x4290 = 24U;
	uint8_t x4291 = 60U;
	static int64_t x4292 = INT64_MIN;

	t67 = (((x4289>>x4290)|x4291)%x4292);

	if (t67 != 60LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4369 = 762;
	uint8_t x4370 = 12U;
	int16_t x4372 = -1;
	int32_t t68 = -2850474;

	t68 = (((x4369>>x4370)|x4371)%x4372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x4373 = INT8_MAX;
	static uint16_t x4374 = 6U;
	static int16_t x4375 = -6;
	volatile int32_t t69 = -207;

	t69 = (((x4373>>x4374)|x4375)%x4376);

	if (t69 != -5) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4493 = 273322367693901LLU;
	int8_t x4494 = 2;
	uint16_t x4495 = UINT16_MAX;
	volatile uint64_t x4496 = UINT64_MAX;
	uint64_t t70 = 25660LLU;

	t70 = (((x4493>>x4494)|x4495)%x4496);

	if (t70 != 68330591944703LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4614 = 1U;
	uint8_t x4615 = 6U;
	static int8_t x4616 = -1;

	t71 = (((x4613>>x4614)|x4615)%x4616);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x4702 = 0U;
	volatile uint8_t x4703 = UINT8_MAX;
	volatile int64_t x4704 = INT64_MIN;
	int64_t t72 = 2951694064121LL;

	t72 = (((x4701>>x4702)|x4703)%x4704);

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4729 = UINT16_MAX;
	int8_t x4730 = 1;
	int64_t x4731 = 153285622492075LL;
	volatile int8_t x4732 = INT8_MIN;
	int64_t t73 = 584342427LL;

	t73 = (((x4729>>x4730)|x4731)%x4732);

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4766 = 1;
	int16_t x4767 = 25;
	int64_t x4768 = -1LL;

	t74 = (((x4765>>x4766)|x4767)%x4768);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4853 = UINT8_MAX;
	volatile uint8_t x4855 = 19U;
	static uint32_t x4856 = 27U;
	uint32_t t75 = 6219U;

	t75 = (((x4853>>x4854)|x4855)%x4856);

	if (t75 != 19U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4897 = 0;
	int8_t x4898 = 10;
	static volatile uint64_t x4899 = UINT64_MAX;
	uint64_t t76 = 19132LLU;

	t76 = (((x4897>>x4898)|x4899)%x4900);

	if (t76 != 5976LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5049 = UINT16_MAX;
	int8_t x5050 = 1;
	volatile int16_t x5051 = INT16_MAX;
	int32_t x5052 = 106717668;
	int32_t t77 = 597;

	t77 = (((x5049>>x5050)|x5051)%x5052);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x5213 = INT32_MAX;
	volatile uint8_t x5214 = 15U;
	int8_t x5215 = INT8_MAX;
	uint64_t x5216 = UINT64_MAX;
	uint64_t t78 = 122865892094LLU;

	t78 = (((x5213>>x5214)|x5215)%x5216);

	if (t78 != 65535LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x5261 = UINT64_MAX;
	static int32_t x5262 = 1;
	uint8_t x5264 = 1U;
	uint64_t t79 = 12290LLU;

	t79 = (((x5261>>x5262)|x5263)%x5264);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5301 = INT8_MAX;
	int8_t x5302 = 11;
	int16_t x5303 = -1;
	int32_t x5304 = INT32_MIN;

	t80 = (((x5301>>x5302)|x5303)%x5304);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5333 = 23U;
	volatile uint8_t x5334 = 1U;
	static int8_t x5335 = -55;
	volatile uint16_t x5336 = 1662U;
	volatile int32_t t81 = -1346115;

	t81 = (((x5333>>x5334)|x5335)%x5336);

	if (t81 != -53) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5458 = 8U;
	volatile uint32_t x5460 = 28190388U;
	volatile int64_t t82 = 3823626612745581LL;

	t82 = (((x5457>>x5458)|x5459)%x5460);

	if (t82 != -9910631LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5502 = 20U;
	volatile int8_t x5503 = -1;
	volatile int8_t x5504 = INT8_MIN;
	volatile uint64_t t83 = 26189LLU;

	t83 = (((x5501>>x5502)|x5503)%x5504);

	if (t83 != 127LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5521 = INT8_MAX;
	uint16_t x5522 = 1U;
	int8_t x5523 = -3;
	uint8_t x5524 = 8U;
	static int32_t t84 = 0;

	t84 = (((x5521>>x5522)|x5523)%x5524);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5577 = UINT32_MAX;
	volatile int64_t x5579 = -1LL;
	int16_t x5580 = -1;
	volatile int64_t t85 = -962450431623LL;

	t85 = (((x5577>>x5578)|x5579)%x5580);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x5653 = INT64_MAX;
	int32_t x5655 = 0;
	volatile int64_t t86 = 8219535322LL;

	t86 = (((x5653>>x5654)|x5655)%x5656);

	if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5737 = 2;
	volatile int64_t t87 = 792409125290857106LL;

	t87 = (((x5737>>x5738)|x5739)%x5740);

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5809 = INT64_MAX;
	static int8_t x5810 = 0;
	volatile int8_t x5811 = INT8_MIN;
	int16_t x5812 = -1;
	int64_t t88 = -4449LL;

	t88 = (((x5809>>x5810)|x5811)%x5812);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x5949 = INT16_MAX;
	static int16_t x5950 = 31;
	int16_t x5951 = INT16_MIN;
	int32_t t89 = 85470421;

	t89 = (((x5949>>x5950)|x5951)%x5952);

	if (t89 != -8) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5957 = UINT8_MAX;
	int16_t x5958 = 1;
	int8_t x5959 = 1;
	uint32_t x5960 = 2U;

	t90 = (((x5957>>x5958)|x5959)%x5960);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5969 = 516U;
	int8_t x5970 = 0;
	int16_t x5972 = -1;

	t91 = (((x5969>>x5970)|x5971)%x5972);

	if (t91 != 764906471LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x6013 = INT64_MAX;
	uint32_t x6015 = 3141U;
	uint8_t x6016 = UINT8_MAX;
	volatile int64_t t92 = -781647670725217LL;

	t92 = (((x6013>>x6014)|x6015)%x6016);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x6021 = 1137877U;
	int8_t x6022 = 4;
	int32_t x6023 = -1;
	int64_t x6024 = -1LL;
	int64_t t93 = -398198039740LL;

	t93 = (((x6021>>x6022)|x6023)%x6024);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6061 = 0;
	volatile uint8_t x6062 = 1U;
	int8_t x6063 = -1;
	volatile int32_t t94 = 34150121;

	t94 = (((x6061>>x6062)|x6063)%x6064);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6073 = INT32_MAX;
	static int8_t x6074 = 11;
	uint64_t x6075 = UINT64_MAX;
	volatile uint8_t x6076 = 5U;
	volatile uint64_t t95 = 15563422378LLU;

	t95 = (((x6073>>x6074)|x6075)%x6076);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6085 = 5;
	static int16_t x6087 = INT16_MAX;
	int32_t t96 = -6;

	t96 = (((x6085>>x6086)|x6087)%x6088);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6101 = INT64_MAX;
	uint8_t x6102 = 1U;

	t97 = (((x6101>>x6102)|x6103)%x6104);

	if (t97 != 54LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6241 = 74109353147LLU;
	uint64_t x6243 = 1762818546LLU;
	int16_t x6244 = 443;
	static uint64_t t98 = 1924328LLU;

	t98 = (((x6241>>x6242)|x6243)%x6244);

	if (t98 != 417LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x6245 = 18936467516375LLU;
	volatile uint16_t x6246 = 5U;
	static int64_t x6248 = INT64_MIN;
	volatile uint64_t t99 = 17761LLU;

	t99 = (((x6245>>x6246)|x6247)%x6248);

	if (t99 != 9223372036854766430LLU) { NG(); } else { ; }
	
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

