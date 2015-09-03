#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x25 = 87;
uint8_t x315 = UINT8_MAX;
volatile int8_t x520 = 2;
volatile uint16_t x530 = UINT16_MAX;
int32_t t5 = -2915;
int8_t x730 = 0;
uint8_t x732 = 1U;
static volatile uint32_t x812 = 11U;
static volatile int32_t t12 = 0;
static uint32_t x875 = 718U;
volatile uint32_t t13 = 223733173U;
int8_t x1081 = 3;
int32_t x1095 = 1;
volatile uint64_t x1247 = 3896994LLU;
static uint64_t t20 = 14LLU;
int8_t x1291 = 39;
int32_t x1365 = INT32_MAX;
uint8_t x1392 = 0U;
static uint16_t x1487 = 49U;
uint8_t x1488 = 15U;
uint8_t x1555 = UINT8_MAX;
volatile uint8_t x1556 = 0U;
volatile int32_t t30 = -37636;
int8_t x1962 = -17;
volatile int32_t x2050 = -23428;
static int16_t x2057 = INT16_MIN;
static int32_t x2393 = INT32_MAX;
int32_t x2396 = 6;
uint8_t x2470 = 18U;
uint8_t x2569 = 18U;
uint8_t x2690 = UINT8_MAX;
uint8_t x2692 = 14U;
volatile int32_t t42 = 0;
volatile uint32_t x2705 = UINT32_MAX;
static uint64_t x2731 = 850793LLU;
static volatile uint16_t x2761 = 62U;
int32_t x2762 = -1;
int8_t x3826 = -25;
volatile int32_t t57 = -16666;
volatile int8_t x3838 = INT8_MIN;
static volatile uint16_t x3840 = 0U;
volatile int64_t t59 = 18115128LL;
int64_t x3857 = INT64_MIN;
int8_t x3860 = 0;
volatile int32_t x4046 = 7658;
int32_t x4047 = INT32_MAX;
volatile int32_t t61 = 210990;
int16_t x4149 = -1;
int8_t x4185 = -1;
int8_t x4186 = INT8_MIN;
uint8_t x4188 = 0U;
uint8_t x4496 = 10U;
uint64_t x4662 = 157LLU;
int8_t x4693 = -10;
int32_t x4850 = -597819120;
static int16_t x4885 = INT16_MIN;
static uint16_t x4940 = 13U;
volatile uint32_t t75 = 1179495U;
uint8_t x5038 = 2U;
static uint64_t x5039 = 16147161LLU;
int8_t x5085 = INT8_MIN;
int32_t x5086 = -1;
uint8_t x5104 = 5U;
int64_t x5110 = -694799528751173LL;
uint16_t x5152 = 0U;
volatile int32_t x5217 = INT32_MIN;
int32_t x5241 = INT32_MIN;
uint32_t t87 = 30U;
uint64_t x5386 = 5924991735645LLU;
static uint64_t x5461 = 177523924053232LLU;
int8_t x5473 = 12;
int32_t t92 = -1666;
uint64_t t96 = 87058893678480604LLU;
int16_t x5723 = INT16_MAX;
volatile int32_t t97 = 6739290;
uint8_t x5860 = 0U;


void f0(void) {
	int32_t x26 = INT32_MAX;
	volatile int8_t x27 = INT8_MAX;
	volatile uint64_t x28 = 8LLU;
	volatile int32_t t0 = -3053862;

	t0 = (((x25<=x26)^x27)<<x28);

	if (t0 != 32256) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = 561710;
	static uint8_t x256 = 3U;
	int32_t t1 = 3590;

	t1 = (((x253<=x254)^x255)<<x256);

	if (t1 != 4493680) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x313 = INT64_MAX;
	int32_t x314 = -1;
	static int8_t x316 = 1;
	int32_t t2 = -812;

	t2 = (((x313<=x314)^x315)<<x316);

	if (t2 != 510) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x445 = 4LLU;
	int8_t x446 = -1;
	int64_t x447 = 3609570275LL;
	uint8_t x448 = 0U;
	int64_t t3 = 97560848179LL;

	t3 = (((x445<=x446)^x447)<<x448);

	if (t3 != 3609570274LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x517 = 2;
	static uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 1280U;
	static int32_t t4 = -35;

	t4 = (((x517<=x518)^x519)<<x520);

	if (t4 != 5124) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x529 = -2043870;
	uint8_t x531 = 24U;
	uint8_t x532 = 1U;

	t5 = (((x529<=x530)^x531)<<x532);

	if (t5 != 50) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x557 = UINT16_MAX;
	uint8_t x558 = UINT8_MAX;
	static uint64_t x559 = 14631921008LLU;
	volatile int8_t x560 = 0;
	volatile uint64_t t6 = 1807565LLU;

	t6 = (((x557<=x558)^x559)<<x560);

	if (t6 != 14631921008LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x577 = INT8_MIN;
	int16_t x578 = -2192;
	uint64_t x579 = UINT64_MAX;
	uint8_t x580 = 51U;
	static uint64_t t7 = 217589014713LLU;

	t7 = (((x577<=x578)^x579)<<x580);

	if (t7 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x661 = INT16_MIN;
	int32_t x662 = -1;
	static int8_t x663 = 8;
	uint8_t x664 = 2U;
	static int32_t t8 = 477148;

	t8 = (((x661<=x662)^x663)<<x664);

	if (t8 != 36) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x693 = -19LL;
	int64_t x694 = -18980099820LL;
	static volatile uint8_t x695 = 2U;
	volatile uint32_t x696 = 13U;
	volatile int32_t t9 = -3116655;

	t9 = (((x693<=x694)^x695)<<x696);

	if (t9 != 16384) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x729 = 37U;
	int32_t x731 = 113969608;
	volatile int32_t t10 = -10883;

	t10 = (((x729<=x730)^x731)<<x732);

	if (t10 != 227939216) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x809 = INT32_MIN;
	volatile int32_t x810 = 8728;
	static uint16_t x811 = 3U;
	volatile int32_t t11 = -11;

	t11 = (((x809<=x810)^x811)<<x812);

	if (t11 != 4096) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x857 = -1;
	static uint64_t x858 = 81468324910030948LLU;
	uint8_t x859 = UINT8_MAX;
	int8_t x860 = 1;

	t12 = (((x857<=x858)^x859)<<x860);

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x873 = -25;
	int64_t x874 = -37313LL;
	uint16_t x876 = 1U;

	t13 = (((x873<=x874)^x875)<<x876);

	if (t13 != 1436U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x949 = 3389856214455436LLU;
	int8_t x950 = INT8_MIN;
	int16_t x951 = 1;
	uint32_t x952 = 22U;
	volatile int32_t t14 = -197396;

	t14 = (((x949<=x950)^x951)<<x952);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1082 = -1;
	int8_t x1083 = INT8_MAX;
	volatile uint16_t x1084 = 0U;
	volatile int32_t t15 = -1;

	t15 = (((x1081<=x1082)^x1083)<<x1084);

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1093 = INT64_MAX;
	uint16_t x1094 = 61U;
	int8_t x1096 = 1;
	int32_t t16 = 377659;

	t16 = (((x1093<=x1094)^x1095)<<x1096);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1197 = 1628527U;
	volatile uint8_t x1198 = UINT8_MAX;
	uint8_t x1199 = 13U;
	volatile int16_t x1200 = 4;
	int32_t t17 = -6841;

	t17 = (((x1197<=x1198)^x1199)<<x1200);

	if (t17 != 208) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x1201 = 15;
	static int16_t x1202 = INT16_MIN;
	uint32_t x1203 = UINT32_MAX;
	int16_t x1204 = 2;
	uint32_t t18 = 14874731U;

	t18 = (((x1201<=x1202)^x1203)<<x1204);

	if (t18 != 4294967292U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1229 = INT64_MAX;
	static uint8_t x1230 = 5U;
	volatile int8_t x1231 = 10;
	static uint16_t x1232 = 27U;
	int32_t t19 = -563037706;

	t19 = (((x1229<=x1230)^x1231)<<x1232);

	if (t19 != 1342177280) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1245 = INT16_MAX;
	static int64_t x1246 = -1LL;
	uint16_t x1248 = 0U;

	t20 = (((x1245<=x1246)^x1247)<<x1248);

	if (t20 != 3896994LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1289 = INT32_MIN;
	uint64_t x1290 = 2038225727690928LLU;
	static volatile int8_t x1292 = 11;
	volatile int32_t t21 = 589065;

	t21 = (((x1289<=x1290)^x1291)<<x1292);

	if (t21 != 79872) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1366 = -23;
	uint32_t x1367 = 1702U;
	uint64_t x1368 = 5LLU;
	uint32_t t22 = 939U;

	t22 = (((x1365<=x1366)^x1367)<<x1368);

	if (t22 != 54464U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1389 = 9152934LLU;
	uint32_t x1390 = 5886U;
	uint32_t x1391 = 44632643U;
	uint32_t t23 = 19322630U;

	t23 = (((x1389<=x1390)^x1391)<<x1392);

	if (t23 != 44632643U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1413 = INT16_MIN;
	uint64_t x1414 = 335886926681LLU;
	int32_t x1415 = 53;
	int16_t x1416 = 14;
	int32_t t24 = 46291;

	t24 = (((x1413<=x1414)^x1415)<<x1416);

	if (t24 != 868352) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1441 = INT32_MIN;
	uint32_t x1442 = 4U;
	static int64_t x1443 = 8472250079LL;
	int8_t x1444 = 12;
	int64_t t25 = -370435LL;

	t25 = (((x1441<=x1442)^x1443)<<x1444);

	if (t25 != 34702336323584LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1485 = INT64_MIN;
	static int8_t x1486 = -1;
	volatile int32_t t26 = 675521640;

	t26 = (((x1485<=x1486)^x1487)<<x1488);

	if (t26 != 1572864) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1545 = UINT32_MAX;
	uint64_t x1546 = 4132865245LLU;
	int8_t x1547 = INT8_MAX;
	static int8_t x1548 = 2;
	int32_t t27 = 8560;

	t27 = (((x1545<=x1546)^x1547)<<x1548);

	if (t27 != 508) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1553 = 1U;
	uint8_t x1554 = 8U;
	static int32_t t28 = -203022074;

	t28 = (((x1553<=x1554)^x1555)<<x1556);

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1681 = UINT16_MAX;
	uint16_t x1682 = 25U;
	int16_t x1683 = INT16_MAX;
	volatile uint32_t x1684 = 4U;
	static volatile int32_t t29 = 17;

	t29 = (((x1681<=x1682)^x1683)<<x1684);

	if (t29 != 524272) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x1769 = -1;
	int8_t x1770 = -2;
	uint16_t x1771 = UINT16_MAX;
	uint16_t x1772 = 0U;

	t30 = (((x1769<=x1770)^x1771)<<x1772);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1793 = INT16_MIN;
	int32_t x1794 = INT32_MIN;
	volatile int8_t x1795 = INT8_MAX;
	uint8_t x1796 = 3U;
	int32_t t31 = -162097;

	t31 = (((x1793<=x1794)^x1795)<<x1796);

	if (t31 != 1016) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1901 = 4U;
	int32_t x1902 = -1;
	uint32_t x1903 = 1044103U;
	volatile uint64_t x1904 = 0LLU;
	uint32_t t32 = 1U;

	t32 = (((x1901<=x1902)^x1903)<<x1904);

	if (t32 != 1044103U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1961 = -19248LL;
	uint64_t x1963 = UINT64_MAX;
	static int16_t x1964 = 0;
	volatile uint64_t t33 = 43771908341828868LLU;

	t33 = (((x1961<=x1962)^x1963)<<x1964);

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2049 = 6U;
	int32_t x2051 = 245;
	static uint8_t x2052 = 0U;
	int32_t t34 = -7379;

	t34 = (((x2049<=x2050)^x2051)<<x2052);

	if (t34 != 245) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2058 = INT8_MIN;
	uint32_t x2059 = UINT32_MAX;
	static int8_t x2060 = 0;
	uint32_t t35 = 1726516784U;

	t35 = (((x2057<=x2058)^x2059)<<x2060);

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2353 = 14045LLU;
	uint32_t x2354 = UINT32_MAX;
	static int8_t x2355 = INT8_MAX;
	uint16_t x2356 = 8U;
	int32_t t36 = 287857573;

	t36 = (((x2353<=x2354)^x2355)<<x2356);

	if (t36 != 32256) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2394 = 295788U;
	int8_t x2395 = 5;
	volatile int32_t t37 = -1430458;

	t37 = (((x2393<=x2394)^x2395)<<x2396);

	if (t37 != 320) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2465 = INT16_MIN;
	int16_t x2466 = INT16_MIN;
	volatile uint32_t x2467 = UINT32_MAX;
	int16_t x2468 = 1;
	uint32_t t38 = 124U;

	t38 = (((x2465<=x2466)^x2467)<<x2468);

	if (t38 != 4294967292U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2469 = UINT32_MAX;
	volatile uint8_t x2471 = 5U;
	static volatile int8_t x2472 = 4;
	volatile int32_t t39 = 744461;

	t39 = (((x2469<=x2470)^x2471)<<x2472);

	if (t39 != 80) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2537 = INT32_MAX;
	int8_t x2538 = INT8_MAX;
	uint64_t x2539 = 6469059137LLU;
	uint8_t x2540 = 0U;
	volatile uint64_t t40 = 402531430967040035LLU;

	t40 = (((x2537<=x2538)^x2539)<<x2540);

	if (t40 != 6469059137LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2570 = -1;
	uint32_t x2571 = 792726U;
	uint16_t x2572 = 23U;
	uint32_t t41 = 299830187U;

	t41 = (((x2569<=x2570)^x2571)<<x2572);

	if (t41 != 1258291200U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2689 = INT64_MIN;
	uint16_t x2691 = 11628U;

	t42 = (((x2689<=x2690)^x2691)<<x2692);

	if (t42 != 190529536) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x2706 = INT32_MAX;
	volatile int16_t x2707 = INT16_MAX;
	int16_t x2708 = 0;
	volatile int32_t t43 = -48661034;

	t43 = (((x2705<=x2706)^x2707)<<x2708);

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2729 = INT16_MAX;
	uint64_t x2730 = UINT64_MAX;
	uint64_t x2732 = 4LLU;
	volatile uint64_t t44 = 3822221496577759653LLU;

	t44 = (((x2729<=x2730)^x2731)<<x2732);

	if (t44 != 13612672LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x2763 = 200785U;
	volatile int16_t x2764 = 28;
	uint32_t t45 = 90624U;

	t45 = (((x2761<=x2762)^x2763)<<x2764);

	if (t45 != 268435456U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2801 = -1;
	int64_t x2802 = INT64_MIN;
	volatile int8_t x2803 = 55;
	uint8_t x2804 = 1U;
	int32_t t46 = -1053;

	t46 = (((x2801<=x2802)^x2803)<<x2804);

	if (t46 != 110) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2873 = -46906461;
	int8_t x2874 = -1;
	static volatile int8_t x2875 = 53;
	volatile uint8_t x2876 = 1U;
	volatile int32_t t47 = -64;

	t47 = (((x2873<=x2874)^x2875)<<x2876);

	if (t47 != 104) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2961 = 8U;
	static uint16_t x2962 = UINT16_MAX;
	uint8_t x2963 = 21U;
	uint8_t x2964 = 3U;
	volatile int32_t t48 = -90570581;

	t48 = (((x2961<=x2962)^x2963)<<x2964);

	if (t48 != 160) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3097 = INT8_MIN;
	static int64_t x3098 = -2035418759595LL;
	uint8_t x3099 = 113U;
	int8_t x3100 = 0;
	int32_t t49 = -118156;

	t49 = (((x3097<=x3098)^x3099)<<x3100);

	if (t49 != 113) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x3297 = 60U;
	volatile uint64_t x3298 = UINT64_MAX;
	static int16_t x3299 = 36;
	uint64_t x3300 = 21LLU;
	volatile int32_t t50 = 1;

	t50 = (((x3297<=x3298)^x3299)<<x3300);

	if (t50 != 77594624) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3341 = 68;
	static uint16_t x3342 = UINT16_MAX;
	int16_t x3343 = INT16_MAX;
	uint8_t x3344 = 1U;
	static int32_t t51 = -3582551;

	t51 = (((x3341<=x3342)^x3343)<<x3344);

	if (t51 != 65532) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x3637 = 2U;
	int64_t x3638 = -6829LL;
	int16_t x3639 = 2958;
	volatile uint8_t x3640 = 1U;
	volatile int32_t t52 = 94;

	t52 = (((x3637<=x3638)^x3639)<<x3640);

	if (t52 != 5916) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3713 = -1;
	volatile int32_t x3714 = INT32_MIN;
	volatile uint32_t x3715 = 343360U;
	uint8_t x3716 = 3U;
	volatile uint32_t t53 = 91804U;

	t53 = (((x3713<=x3714)^x3715)<<x3716);

	if (t53 != 2746880U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3725 = 122U;
	static uint16_t x3726 = 17U;
	uint32_t x3727 = 7848U;
	uint16_t x3728 = 1U;
	volatile uint32_t t54 = 1852929U;

	t54 = (((x3725<=x3726)^x3727)<<x3728);

	if (t54 != 15696U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3753 = INT32_MIN;
	static int64_t x3754 = INT64_MAX;
	static uint32_t x3755 = 218U;
	uint16_t x3756 = 0U;
	uint32_t t55 = 5551U;

	t55 = (((x3753<=x3754)^x3755)<<x3756);

	if (t55 != 219U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3801 = 14U;
	static int32_t x3802 = -669336;
	int8_t x3803 = 1;
	int64_t x3804 = 0LL;
	volatile int32_t t56 = -66162933;

	t56 = (((x3801<=x3802)^x3803)<<x3804);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3825 = -7103;
	volatile uint8_t x3827 = 22U;
	uint8_t x3828 = 0U;

	t57 = (((x3825<=x3826)^x3827)<<x3828);

	if (t57 != 23) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3837 = 3921LL;
	uint32_t x3839 = 6U;
	volatile uint32_t t58 = 17516U;

	t58 = (((x3837<=x3838)^x3839)<<x3840);

	if (t58 != 6U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3853 = 54782U;
	int32_t x3854 = 516344518;
	int64_t x3855 = 94753974237820LL;
	static uint16_t x3856 = 1U;

	t59 = (((x3853<=x3854)^x3855)<<x3856);

	if (t59 != 189507948475642LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3858 = -1;
	int8_t x3859 = 3;
	int32_t t60 = -4028;

	t60 = (((x3857<=x3858)^x3859)<<x3860);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4045 = INT16_MIN;
	static uint8_t x4048 = 0U;

	t61 = (((x4045<=x4046)^x4047)<<x4048);

	if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x4150 = UINT16_MAX;
	static uint8_t x4151 = 46U;
	uint8_t x4152 = 1U;
	int32_t t62 = -138266323;

	t62 = (((x4149<=x4150)^x4151)<<x4152);

	if (t62 != 94) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4187 = 1LL;
	int64_t t63 = -111451327LL;

	t63 = (((x4185<=x4186)^x4187)<<x4188);

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4293 = -7;
	int64_t x4294 = INT64_MIN;
	static uint8_t x4295 = 0U;
	static uint8_t x4296 = 1U;
	int32_t t64 = 51990158;

	t64 = (((x4293<=x4294)^x4295)<<x4296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x4341 = INT16_MIN;
	int8_t x4342 = 0;
	uint8_t x4343 = 13U;
	static volatile int32_t x4344 = 0;
	volatile int32_t t65 = -30050087;

	t65 = (((x4341<=x4342)^x4343)<<x4344);

	if (t65 != 12) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4417 = INT32_MIN;
	int64_t x4418 = -1LL;
	volatile uint32_t x4419 = UINT32_MAX;
	volatile uint8_t x4420 = 13U;
	uint32_t t66 = 7225930U;

	t66 = (((x4417<=x4418)^x4419)<<x4420);

	if (t66 != 4294950912U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4493 = 78U;
	int64_t x4494 = -1LL;
	uint16_t x4495 = 5U;
	volatile int32_t t67 = -3;

	t67 = (((x4493<=x4494)^x4495)<<x4496);

	if (t67 != 5120) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4529 = -1LL;
	int16_t x4530 = 161;
	int32_t x4531 = 22;
	int32_t x4532 = 1;
	int32_t t68 = 1;

	t68 = (((x4529<=x4530)^x4531)<<x4532);

	if (t68 != 46) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4661 = 0;
	volatile uint16_t x4663 = 279U;
	uint8_t x4664 = 3U;
	int32_t t69 = -97955612;

	t69 = (((x4661<=x4662)^x4663)<<x4664);

	if (t69 != 2224) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4694 = -5;
	volatile int16_t x4695 = 1;
	uint64_t x4696 = 25LLU;
	volatile int32_t t70 = 0;

	t70 = (((x4693<=x4694)^x4695)<<x4696);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4749 = -1;
	volatile uint32_t x4750 = UINT32_MAX;
	uint64_t x4751 = 1074366107LLU;
	static volatile int8_t x4752 = 5;
	static uint64_t t71 = 241602106585LLU;

	t71 = (((x4749<=x4750)^x4751)<<x4752);

	if (t71 != 34379715392LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4849 = 600U;
	static int32_t x4851 = 183156;
	int8_t x4852 = 1;
	int32_t t72 = 32944376;

	t72 = (((x4849<=x4850)^x4851)<<x4852);

	if (t72 != 366314) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4886 = 15U;
	uint16_t x4887 = UINT16_MAX;
	uint32_t x4888 = 1U;
	int32_t t73 = -93169;

	t73 = (((x4885<=x4886)^x4887)<<x4888);

	if (t73 != 131068) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4937 = INT32_MIN;
	volatile int8_t x4938 = INT8_MAX;
	volatile uint16_t x4939 = UINT16_MAX;
	int32_t t74 = 83411;

	t74 = (((x4937<=x4938)^x4939)<<x4940);

	if (t74 != 536854528) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4961 = INT8_MIN;
	int16_t x4962 = -1;
	volatile uint32_t x4963 = 305096236U;
	int8_t x4964 = 1;

	t75 = (((x4961<=x4962)^x4963)<<x4964);

	if (t75 != 610192474U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4981 = 38193377LL;
	int32_t x4982 = -18130695;
	uint64_t x4983 = 138LLU;
	static uint16_t x4984 = 0U;
	uint64_t t76 = 61911317769752LLU;

	t76 = (((x4981<=x4982)^x4983)<<x4984);

	if (t76 != 138LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5001 = INT64_MIN;
	volatile int32_t x5002 = 756;
	uint32_t x5003 = 1149U;
	int8_t x5004 = 1;
	volatile uint32_t t77 = 7U;

	t77 = (((x5001<=x5002)^x5003)<<x5004);

	if (t77 != 2296U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5037 = -1;
	static int64_t x5040 = 1LL;
	static volatile uint64_t t78 = 125600LLU;

	t78 = (((x5037<=x5038)^x5039)<<x5040);

	if (t78 != 32294320LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x5045 = 8013716093744353LL;
	int16_t x5046 = INT16_MAX;
	uint64_t x5047 = 31831807758779663LLU;
	uint8_t x5048 = 1U;
	static volatile uint64_t t79 = 3030LLU;

	t79 = (((x5045<=x5046)^x5047)<<x5048);

	if (t79 != 63663615517559326LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5087 = INT8_MAX;
	uint8_t x5088 = 15U;
	int32_t t80 = -99405374;

	t80 = (((x5085<=x5086)^x5087)<<x5088);

	if (t80 != 4128768) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5101 = -1;
	static int16_t x5102 = INT16_MAX;
	uint64_t x5103 = 13346LLU;
	volatile uint64_t t81 = 9303277563LLU;

	t81 = (((x5101<=x5102)^x5103)<<x5104);

	if (t81 != 427104LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x5109 = 10;
	uint16_t x5111 = 4855U;
	static volatile int8_t x5112 = 7;
	int32_t t82 = 1093;

	t82 = (((x5109<=x5110)^x5111)<<x5112);

	if (t82 != 621440) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5149 = INT8_MIN;
	uint32_t x5150 = UINT32_MAX;
	uint32_t x5151 = 2291U;
	uint32_t t83 = 635U;

	t83 = (((x5149<=x5150)^x5151)<<x5152);

	if (t83 != 2290U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5185 = 140U;
	int8_t x5186 = 0;
	volatile uint8_t x5187 = 59U;
	static volatile int32_t x5188 = 0;
	volatile int32_t t84 = 193;

	t84 = (((x5185<=x5186)^x5187)<<x5188);

	if (t84 != 59) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5218 = UINT64_MAX;
	int8_t x5219 = 3;
	uint16_t x5220 = 2U;
	int32_t t85 = 158125283;

	t85 = (((x5217<=x5218)^x5219)<<x5220);

	if (t85 != 8) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5225 = 639807739251LLU;
	static int8_t x5226 = INT8_MIN;
	uint64_t x5227 = UINT64_MAX;
	static int16_t x5228 = 1;
	uint64_t t86 = 3778LLU;

	t86 = (((x5225<=x5226)^x5227)<<x5228);

	if (t86 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5242 = 32154179753LLU;
	static uint32_t x5243 = 136694U;
	uint8_t x5244 = 16U;

	t87 = (((x5241<=x5242)^x5243)<<x5244);

	if (t87 != 368443392U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5385 = 21U;
	uint64_t x5387 = 1502702923LLU;
	int8_t x5388 = 0;
	volatile uint64_t t88 = 250LLU;

	t88 = (((x5385<=x5386)^x5387)<<x5388);

	if (t88 != 1502702922LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5449 = 47;
	int8_t x5450 = 1;
	volatile uint32_t x5451 = UINT32_MAX;
	static uint8_t x5452 = 9U;
	volatile uint32_t t89 = 3U;

	t89 = (((x5449<=x5450)^x5451)<<x5452);

	if (t89 != 4294966784U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5462 = 1U;
	uint64_t x5463 = 23LLU;
	int16_t x5464 = 7;
	static volatile uint64_t t90 = 22019658463LLU;

	t90 = (((x5461<=x5462)^x5463)<<x5464);

	if (t90 != 2944LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x5474 = 1LL;
	int8_t x5475 = INT8_MAX;
	uint16_t x5476 = 7U;
	int32_t t91 = 15;

	t91 = (((x5473<=x5474)^x5475)<<x5476);

	if (t91 != 16256) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5521 = -1;
	static uint64_t x5522 = UINT64_MAX;
	static volatile int8_t x5523 = INT8_MAX;
	int32_t x5524 = 1;

	t92 = (((x5521<=x5522)^x5523)<<x5524);

	if (t92 != 252) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5573 = INT32_MIN;
	static uint32_t x5574 = UINT32_MAX;
	int64_t x5575 = INT64_MAX;
	uint8_t x5576 = 0U;
	int64_t t93 = -1325962LL;

	t93 = (((x5573<=x5574)^x5575)<<x5576);

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5653 = -1LL;
	volatile int8_t x5654 = -2;
	uint16_t x5655 = UINT16_MAX;
	uint8_t x5656 = 7U;
	int32_t t94 = 544;

	t94 = (((x5653<=x5654)^x5655)<<x5656);

	if (t94 != 8388480) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x5657 = -121550;
	uint8_t x5658 = UINT8_MAX;
	volatile uint32_t x5659 = 11U;
	uint8_t x5660 = 1U;
	uint32_t t95 = 4U;

	t95 = (((x5657<=x5658)^x5659)<<x5660);

	if (t95 != 20U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5717 = 9U;
	int32_t x5718 = -1;
	uint64_t x5719 = 648LLU;
	int16_t x5720 = 0;

	t96 = (((x5717<=x5718)^x5719)<<x5720);

	if (t96 != 648LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5721 = INT64_MAX;
	uint8_t x5722 = UINT8_MAX;
	int8_t x5724 = 1;

	t97 = (((x5721<=x5722)^x5723)<<x5724);

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5741 = INT64_MAX;
	uint64_t x5742 = 339171204178934LLU;
	static uint16_t x5743 = 42U;
	uint16_t x5744 = 19U;
	volatile int32_t t98 = 5167933;

	t98 = (((x5741<=x5742)^x5743)<<x5744);

	if (t98 != 22020096) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5857 = INT32_MAX;
	volatile int8_t x5858 = INT8_MAX;
	int16_t x5859 = INT16_MAX;
	int32_t t99 = -1;

	t99 = (((x5857<=x5858)^x5859)<<x5860);

	if (t99 != 32767) { NG(); } else { ; }
	
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

