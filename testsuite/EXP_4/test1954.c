#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x84 = -1;
int64_t t0 = INT64_MIN;
int16_t x98 = INT16_MIN;
static volatile int16_t x100 = INT16_MIN;
int16_t x111 = -1;
int16_t x112 = -1;
int8_t x135 = -1;
uint64_t x146 = UINT64_MAX;
int8_t x394 = -1;
int8_t x396 = -1;
uint16_t x437 = 13U;
volatile int32_t t10 = INT32_MIN;
int64_t x799 = INT64_MIN;
int32_t x932 = INT32_MIN;
volatile int32_t x1114 = -1;
int8_t x1126 = -1;
volatile int32_t t16 = 0;
volatile int32_t x1134 = -1;
static int64_t x1135 = -1LL;
int32_t t18 = -7646557;
int8_t x1353 = INT8_MIN;
int32_t t20 = -81863496;
uint64_t x1460 = UINT64_MAX;
volatile int64_t t22 = 109LL;
volatile int16_t x1507 = INT16_MIN;
volatile int16_t x1590 = -1;
int32_t x1591 = -123870564;
int64_t x1592 = -1LL;
volatile int32_t t26 = -110415;
int32_t t29 = -155553;
volatile uint32_t x1952 = 294545U;
volatile int32_t x2218 = -1;
uint32_t t36 = 286U;
int8_t x2471 = INT8_MIN;
int8_t x2473 = 12;
int8_t x2475 = -15;
static uint16_t x2487 = 11141U;
int8_t x2622 = -1;
int16_t x2623 = -1;
int16_t x2737 = INT16_MAX;
int64_t x2747 = 38653491762736LL;
int64_t t43 = 29LL;
int8_t x3059 = INT8_MIN;
int32_t x3229 = 942;
int32_t x3285 = -3235;
int32_t t51 = 31;
uint16_t x3473 = UINT16_MAX;
int64_t x3541 = INT64_MIN;
volatile uint64_t x3542 = UINT64_MAX;
int32_t x3649 = INT32_MAX;
static int32_t x3651 = 9;
int16_t x4110 = -1;
int8_t x4123 = INT8_MIN;
static int64_t x4193 = 3739968938596214384LL;
uint64_t x4293 = 96588632LLU;
volatile int8_t x4295 = INT8_MIN;
uint32_t x4296 = UINT32_MAX;
volatile uint64_t t65 = 765634051900419LLU;
int8_t x4525 = INT8_MIN;
static int32_t x4527 = INT32_MIN;
static uint8_t x4597 = 11U;
uint64_t x4722 = UINT64_MAX;
uint64_t x4787 = UINT64_MAX;
volatile int32_t x4935 = -1;
volatile int32_t t77 = 3090165;
int8_t x5067 = -1;
int8_t x5154 = -1;
static uint16_t x5284 = 892U;
int64_t x5302 = -1LL;
volatile uint64_t x5366 = UINT64_MAX;
static uint32_t x5376 = UINT32_MAX;
int64_t x5436 = -1LL;
static int32_t x5530 = -1;
static uint32_t x5568 = UINT32_MAX;
static volatile int64_t t90 = -9637453668406736LL;
int64_t t91 = -3972LL;
static int16_t x5642 = -1;
volatile int8_t x5644 = -1;
volatile int32_t t92 = -5832166;
int8_t x5758 = -1;
volatile int32_t t95 = 6269;
volatile int8_t x5953 = INT8_MIN;
static int16_t x6090 = -1;
int8_t x6157 = INT8_MIN;


void f0(void) {
	int64_t x81 = INT64_MIN;
	int32_t x82 = -1;
	uint64_t x83 = UINT64_MAX;

	t0 = (x81/(x82==(x83|x84)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 1812U;
	static volatile int64_t x96 = -1LL;
	int32_t t1 = 6378610;

	t1 = (x93/(x94==(x95|x96)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x97 = INT8_MAX;
	int32_t x99 = INT32_MIN;
	int32_t t2 = 21;

	t2 = (x97/(x98==(x99|x100)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x109 = 126U;
	int8_t x110 = -1;
	volatile uint32_t t3 = 869774024U;

	t3 = (x109/(x110==(x111|x112)));

	if (t3 != 126U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x121 = -69295740892712LL;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	uint32_t x124 = 40U;
	volatile int64_t t4 = -52446296235996LL;

	t4 = (x121/(x122==(x123|x124)));

	if (t4 != -69295740892712LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x133 = -1;
	int32_t x134 = -1;
	static uint64_t x136 = UINT64_MAX;
	volatile int32_t t5 = 13584237;

	t5 = (x133/(x134==(x135|x136)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x145 = INT8_MAX;
	static int16_t x147 = INT16_MAX;
	int16_t x148 = -66;
	volatile int32_t t6 = -2657;

	t6 = (x145/(x146==(x147|x148)));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x393 = 166U;
	int16_t x395 = -1;
	volatile uint32_t t7 = 29U;

	t7 = (x393/(x394==(x395|x396)));

	if (t7 != 166U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x438 = -1;
	int32_t x439 = INT32_MAX;
	volatile int8_t x440 = INT8_MIN;
	volatile int32_t t8 = -1;

	t8 = (x437/(x438==(x439|x440)));

	if (t8 != 13) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x757 = UINT64_MAX;
	static int8_t x758 = -1;
	int8_t x759 = -2;
	uint32_t x760 = 79U;
	static uint64_t t9 = UINT64_MAX;

	t9 = (x757/(x758==(x759|x760)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x781 = INT32_MIN;
	static int16_t x782 = -1;
	static int16_t x783 = -1;
	int8_t x784 = -1;

	t10 = (x781/(x782==(x783|x784)));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x797 = -1334074;
	int32_t x798 = INT32_MIN;
	int32_t x800 = INT32_MIN;
	static volatile int32_t t11 = 25949495;

	t11 = (x797/(x798==(x799|x800)));

	if (t11 != -1334074) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x809 = 90LL;
	uint64_t x810 = UINT64_MAX;
	static int64_t x811 = -22LL;
	int8_t x812 = -1;
	volatile int64_t t12 = 81695897078LL;

	t12 = (x809/(x810==(x811|x812)));

	if (t12 != 90LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x929 = INT64_MIN;
	int32_t x930 = INT32_MIN;
	volatile int64_t x931 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = (x929/(x930==(x931|x932)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1077 = -141444413999LL;
	volatile uint32_t x1078 = UINT32_MAX;
	volatile int32_t x1079 = -1;
	uint8_t x1080 = 12U;
	int64_t t14 = 975LL;

	t14 = (x1077/(x1078==(x1079|x1080)));

	if (t14 != -141444413999LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1113 = -19LL;
	int8_t x1115 = -1;
	uint32_t x1116 = 69872U;
	int64_t t15 = 0LL;

	t15 = (x1113/(x1114==(x1115|x1116)));

	if (t15 != -19LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x1125 = INT16_MAX;
	int16_t x1127 = INT16_MIN;
	static int8_t x1128 = -1;

	t16 = (x1125/(x1126==(x1127|x1128)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1133 = 9573U;
	int64_t x1136 = INT64_MIN;
	int32_t t17 = 483333824;

	t17 = (x1133/(x1134==(x1135|x1136)));

	if (t17 != 9573) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1253 = 0U;
	uint64_t x1254 = UINT64_MAX;
	uint64_t x1255 = UINT64_MAX;
	uint16_t x1256 = UINT16_MAX;

	t18 = (x1253/(x1254==(x1255|x1256)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1341 = 8121735803863294LL;
	int32_t x1342 = -1;
	int8_t x1343 = INT8_MAX;
	volatile uint64_t x1344 = UINT64_MAX;
	int64_t t19 = -32LL;

	t19 = (x1341/(x1342==(x1343|x1344)));

	if (t19 != 8121735803863294LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1354 = -1;
	static int8_t x1355 = -1;
	volatile uint16_t x1356 = UINT16_MAX;

	t20 = (x1353/(x1354==(x1355|x1356)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1357 = -1;
	int16_t x1358 = -1;
	int16_t x1359 = INT16_MAX;
	int16_t x1360 = INT16_MIN;
	volatile int32_t t21 = 0;

	t21 = (x1357/(x1358==(x1359|x1360)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1457 = 17410313019810LL;
	static int32_t x1458 = -1;
	int8_t x1459 = 1;

	t22 = (x1457/(x1458==(x1459|x1460)));

	if (t22 != 17410313019810LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1505 = UINT8_MAX;
	int16_t x1506 = INT16_MIN;
	int64_t x1508 = INT64_MIN;
	volatile int32_t t23 = 376562;

	t23 = (x1505/(x1506==(x1507|x1508)));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1589 = -1;
	volatile int32_t t24 = -1345913;

	t24 = (x1589/(x1590==(x1591|x1592)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x1645 = 96906;
	volatile int8_t x1646 = -1;
	uint64_t x1647 = 6975910727740842LLU;
	static int16_t x1648 = -1;
	volatile int32_t t25 = -267;

	t25 = (x1645/(x1646==(x1647|x1648)));

	if (t25 != 96906) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1689 = -1923;
	volatile uint32_t x1690 = UINT32_MAX;
	uint16_t x1691 = 6778U;
	int16_t x1692 = -1;

	t26 = (x1689/(x1690==(x1691|x1692)));

	if (t26 != -1923) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1865 = INT32_MIN;
	static volatile int8_t x1866 = -1;
	static int16_t x1867 = -5;
	int64_t x1868 = INT64_MAX;
	int32_t t27 = INT32_MIN;

	t27 = (x1865/(x1866==(x1867|x1868)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1909 = UINT16_MAX;
	volatile int64_t x1910 = INT64_MAX;
	int64_t x1911 = INT64_MAX;
	uint8_t x1912 = UINT8_MAX;
	static int32_t t28 = -36467159;

	t28 = (x1909/(x1910==(x1911|x1912)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1937 = INT16_MIN;
	volatile int32_t x1938 = -1;
	int32_t x1939 = -1;
	uint32_t x1940 = UINT32_MAX;

	t29 = (x1937/(x1938==(x1939|x1940)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1949 = 11569U;
	static int8_t x1950 = -1;
	int32_t x1951 = -1;
	int32_t t30 = -9036;

	t30 = (x1949/(x1950==(x1951|x1952)));

	if (t30 != 11569) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x2073 = -1;
	int64_t x2074 = INT64_MAX;
	int64_t x2075 = INT64_MAX;
	uint32_t x2076 = 1432618U;
	volatile int32_t t31 = 126;

	t31 = (x2073/(x2074==(x2075|x2076)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x2161 = 66309180576576LLU;
	static uint64_t x2162 = UINT64_MAX;
	int32_t x2163 = 2083151;
	static uint64_t x2164 = UINT64_MAX;
	uint64_t t32 = 9061119543563245544LLU;

	t32 = (x2161/(x2162==(x2163|x2164)));

	if (t32 != 66309180576576LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2181 = INT32_MIN;
	volatile int8_t x2182 = -1;
	static int16_t x2183 = -1;
	static int8_t x2184 = -1;
	int32_t t33 = INT32_MIN;

	t33 = (x2181/(x2182==(x2183|x2184)));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2217 = 12LLU;
	volatile int32_t x2219 = INT32_MIN;
	static int8_t x2220 = -1;
	uint64_t t34 = 4LLU;

	t34 = (x2217/(x2218==(x2219|x2220)));

	if (t34 != 12LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2297 = INT16_MAX;
	int16_t x2298 = -1;
	static volatile uint8_t x2299 = 0U;
	int8_t x2300 = -1;
	int32_t t35 = -6452;

	t35 = (x2297/(x2298==(x2299|x2300)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2325 = 54U;
	volatile int64_t x2326 = -1LL;
	int64_t x2327 = -1LL;
	static int16_t x2328 = 30;

	t36 = (x2325/(x2326==(x2327|x2328)));

	if (t36 != 54U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2397 = 23118232639151LL;
	int32_t x2398 = -1;
	volatile int16_t x2399 = INT16_MIN;
	volatile int16_t x2400 = -1;
	volatile int64_t t37 = -36388734LL;

	t37 = (x2397/(x2398==(x2399|x2400)));

	if (t37 != 23118232639151LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2469 = 2870LLU;
	int64_t x2470 = -1LL;
	static int64_t x2472 = -1LL;
	volatile uint64_t t38 = 348LLU;

	t38 = (x2469/(x2470==(x2471|x2472)));

	if (t38 != 2870LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x2474 = -1;
	volatile int16_t x2476 = -10786;
	volatile int32_t t39 = 30345745;

	t39 = (x2473/(x2474==(x2475|x2476)));

	if (t39 != 12) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x2485 = -2082354565LL;
	volatile int16_t x2486 = -1;
	int64_t x2488 = -1LL;
	volatile int64_t t40 = 27915398732208LL;

	t40 = (x2485/(x2486==(x2487|x2488)));

	if (t40 != -2082354565LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2621 = 51U;
	static int32_t x2624 = -7;
	int32_t t41 = -12720;

	t41 = (x2621/(x2622==(x2623|x2624)));

	if (t41 != 51) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2738 = -1LL;
	int32_t x2739 = -1;
	uint8_t x2740 = UINT8_MAX;
	volatile int32_t t42 = -16748599;

	t42 = (x2737/(x2738==(x2739|x2740)));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x2745 = -19979526861LL;
	int8_t x2746 = -1;
	uint64_t x2748 = UINT64_MAX;

	t43 = (x2745/(x2746==(x2747|x2748)));

	if (t43 != -19979526861LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3057 = -1;
	static int16_t x3058 = -1;
	static uint8_t x3060 = UINT8_MAX;
	int32_t t44 = -1;

	t44 = (x3057/(x3058==(x3059|x3060)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3085 = UINT16_MAX;
	static int8_t x3086 = -1;
	int16_t x3087 = -3;
	int8_t x3088 = -1;
	static volatile int32_t t45 = -119221;

	t45 = (x3085/(x3086==(x3087|x3088)));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3230 = -1;
	int8_t x3231 = -1;
	int8_t x3232 = INT8_MAX;
	volatile int32_t t46 = -23709;

	t46 = (x3229/(x3230==(x3231|x3232)));

	if (t46 != 942) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x3253 = UINT8_MAX;
	int8_t x3254 = -1;
	int8_t x3255 = 1;
	static int64_t x3256 = -1LL;
	int32_t t47 = -21795;

	t47 = (x3253/(x3254==(x3255|x3256)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3286 = -1;
	int8_t x3287 = -1;
	static int16_t x3288 = -612;
	volatile int32_t t48 = -701627;

	t48 = (x3285/(x3286==(x3287|x3288)));

	if (t48 != -3235) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x3405 = 815U;
	int32_t x3406 = -1;
	int64_t x3407 = -51230855460221513LL;
	int64_t x3408 = INT64_MAX;
	int32_t t49 = -59818;

	t49 = (x3405/(x3406==(x3407|x3408)));

	if (t49 != 815) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x3409 = -1;
	static uint64_t x3410 = UINT64_MAX;
	static uint16_t x3411 = UINT16_MAX;
	uint64_t x3412 = UINT64_MAX;
	volatile int32_t t50 = 15830;

	t50 = (x3409/(x3410==(x3411|x3412)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3437 = -1;
	volatile int16_t x3438 = -1;
	volatile int8_t x3439 = -1;
	volatile int64_t x3440 = 142LL;

	t51 = (x3437/(x3438==(x3439|x3440)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x3474 = -1;
	int32_t x3475 = -158;
	uint16_t x3476 = UINT16_MAX;
	volatile int32_t t52 = 665542809;

	t52 = (x3473/(x3474==(x3475|x3476)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x3513 = 1;
	static uint64_t x3514 = UINT64_MAX;
	int16_t x3515 = INT16_MIN;
	int64_t x3516 = INT64_MAX;
	int32_t t53 = -25886;

	t53 = (x3513/(x3514==(x3515|x3516)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x3537 = 200;
	int8_t x3538 = -1;
	uint64_t x3539 = UINT64_MAX;
	int64_t x3540 = -162462LL;
	int32_t t54 = -12054438;

	t54 = (x3537/(x3538==(x3539|x3540)));

	if (t54 != 200) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3543 = UINT64_MAX;
	int32_t x3544 = 20106621;
	int64_t t55 = INT64_MIN;

	t55 = (x3541/(x3542==(x3543|x3544)));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3621 = INT8_MIN;
	int32_t x3622 = -1;
	static int8_t x3623 = INT8_MIN;
	volatile int32_t x3624 = -1;
	static volatile int32_t t56 = -7;

	t56 = (x3621/(x3622==(x3623|x3624)));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3650 = -1;
	uint64_t x3652 = UINT64_MAX;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x3649/(x3650==(x3651|x3652)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x3853 = INT16_MIN;
	uint32_t x3854 = UINT32_MAX;
	volatile int8_t x3855 = INT8_MIN;
	int16_t x3856 = -1;
	static int32_t t58 = -32084436;

	t58 = (x3853/(x3854==(x3855|x3856)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3889 = 2492548LL;
	int8_t x3890 = -1;
	int64_t x3891 = -388005128183LL;
	volatile int16_t x3892 = -1;
	volatile int64_t t59 = 2999317103888966LL;

	t59 = (x3889/(x3890==(x3891|x3892)));

	if (t59 != 2492548LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4053 = 3U;
	uint64_t x4054 = UINT64_MAX;
	uint64_t x4055 = UINT64_MAX;
	int16_t x4056 = -1;
	int32_t t60 = 1873;

	t60 = (x4053/(x4054==(x4055|x4056)));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4109 = INT16_MIN;
	uint32_t x4111 = UINT32_MAX;
	int32_t x4112 = INT32_MIN;
	static volatile int32_t t61 = -55936;

	t61 = (x4109/(x4110==(x4111|x4112)));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4121 = 14;
	volatile int8_t x4122 = -1;
	int64_t x4124 = -1LL;
	int32_t t62 = 850559909;

	t62 = (x4121/(x4122==(x4123|x4124)));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x4194 = -1;
	static volatile int8_t x4195 = -1;
	uint8_t x4196 = 35U;
	static int64_t t63 = 28LL;

	t63 = (x4193/(x4194==(x4195|x4196)));

	if (t63 != 3739968938596214384LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4197 = INT64_MAX;
	volatile int8_t x4198 = -1;
	int64_t x4199 = -1LL;
	volatile int16_t x4200 = 0;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x4197/(x4198==(x4199|x4200)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4294 = -1;

	t65 = (x4293/(x4294==(x4295|x4296)));

	if (t65 != 96588632LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4329 = 18498436946LLU;
	int16_t x4330 = -1;
	uint32_t x4331 = 88645U;
	static int32_t x4332 = -1;
	uint64_t t66 = 457LLU;

	t66 = (x4329/(x4330==(x4331|x4332)));

	if (t66 != 18498436946LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4349 = -49145140802948LL;
	int16_t x4350 = -1;
	volatile int16_t x4351 = INT16_MAX;
	uint64_t x4352 = UINT64_MAX;
	int64_t t67 = 3923329167LL;

	t67 = (x4349/(x4350==(x4351|x4352)));

	if (t67 != -49145140802948LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x4381 = -4171;
	uint32_t x4382 = UINT32_MAX;
	int16_t x4383 = -1;
	volatile int16_t x4384 = 0;
	int32_t t68 = -2841;

	t68 = (x4381/(x4382==(x4383|x4384)));

	if (t68 != -4171) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x4489 = 1LLU;
	volatile uint64_t x4490 = UINT64_MAX;
	static int64_t x4491 = -63478703939LL;
	int16_t x4492 = -50;
	static uint64_t t69 = 558996480530106LLU;

	t69 = (x4489/(x4490==(x4491|x4492)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4513 = UINT64_MAX;
	static int16_t x4514 = -1;
	static int16_t x4515 = -1;
	int16_t x4516 = INT16_MIN;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x4513/(x4514==(x4515|x4516)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x4526 = -1;
	uint64_t x4528 = UINT64_MAX;
	static int32_t t71 = 1064955165;

	t71 = (x4525/(x4526==(x4527|x4528)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x4598 = INT32_MAX;
	static int32_t x4599 = INT32_MAX;
	volatile int16_t x4600 = INT16_MAX;
	volatile int32_t t72 = 948519;

	t72 = (x4597/(x4598==(x4599|x4600)));

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4721 = INT16_MIN;
	volatile int8_t x4723 = INT8_MIN;
	int64_t x4724 = INT64_MAX;
	volatile int32_t t73 = -74673;

	t73 = (x4721/(x4722==(x4723|x4724)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4785 = 3319000799955LL;
	int32_t x4786 = -1;
	int8_t x4788 = 28;
	volatile int64_t t74 = 2077854378LL;

	t74 = (x4785/(x4786==(x4787|x4788)));

	if (t74 != 3319000799955LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4829 = INT16_MIN;
	int64_t x4830 = -1LL;
	int64_t x4831 = -1LL;
	int8_t x4832 = 1;
	int32_t t75 = -3899005;

	t75 = (x4829/(x4830==(x4831|x4832)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4933 = 23U;
	int32_t x4934 = -1;
	volatile uint16_t x4936 = UINT16_MAX;
	int32_t t76 = 2;

	t76 = (x4933/(x4934==(x4935|x4936)));

	if (t76 != 23) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5001 = INT16_MAX;
	int64_t x5002 = -1LL;
	int8_t x5003 = INT8_MAX;
	static int8_t x5004 = -1;

	t77 = (x5001/(x5002==(x5003|x5004)));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5037 = UINT16_MAX;
	static int16_t x5038 = INT16_MAX;
	int16_t x5039 = INT16_MAX;
	volatile uint16_t x5040 = 2U;
	static volatile int32_t t78 = 1;

	t78 = (x5037/(x5038==(x5039|x5040)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5065 = INT64_MIN;
	uint64_t x5066 = UINT64_MAX;
	int32_t x5068 = INT32_MIN;
	static volatile int64_t t79 = INT64_MIN;

	t79 = (x5065/(x5066==(x5067|x5068)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5105 = UINT16_MAX;
	int8_t x5106 = -1;
	static uint32_t x5107 = UINT32_MAX;
	int8_t x5108 = INT8_MIN;
	int32_t t80 = -61211;

	t80 = (x5105/(x5106==(x5107|x5108)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x5153 = -1;
	int16_t x5155 = INT16_MIN;
	uint64_t x5156 = UINT64_MAX;
	int32_t t81 = -6823;

	t81 = (x5153/(x5154==(x5155|x5156)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5237 = -1;
	int8_t x5238 = -1;
	static volatile int8_t x5239 = 0;
	int32_t x5240 = -1;
	int32_t t82 = -264834;

	t82 = (x5237/(x5238==(x5239|x5240)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5245 = -1LL;
	volatile int16_t x5246 = -1;
	static int8_t x5247 = INT8_MIN;
	uint16_t x5248 = UINT16_MAX;
	int64_t t83 = 0LL;

	t83 = (x5245/(x5246==(x5247|x5248)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5281 = UINT8_MAX;
	int8_t x5282 = -1;
	int16_t x5283 = -1;
	volatile int32_t t84 = 74;

	t84 = (x5281/(x5282==(x5283|x5284)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x5301 = -1;
	int8_t x5303 = -1;
	static uint64_t x5304 = 19419LLU;
	volatile int32_t t85 = -205574;

	t85 = (x5301/(x5302==(x5303|x5304)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x5365 = INT8_MIN;
	int64_t x5367 = -1LL;
	static volatile int32_t x5368 = INT32_MIN;
	volatile int32_t t86 = 19452;

	t86 = (x5365/(x5366==(x5367|x5368)));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x5373 = 9;
	int8_t x5374 = -1;
	static int32_t x5375 = -1;
	volatile int32_t t87 = -1;

	t87 = (x5373/(x5374==(x5375|x5376)));

	if (t87 != 9) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5433 = INT16_MIN;
	int8_t x5434 = -1;
	static int64_t x5435 = -1145463LL;
	int32_t t88 = -414874255;

	t88 = (x5433/(x5434==(x5435|x5436)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5529 = 159;
	int8_t x5531 = -2;
	int16_t x5532 = INT16_MAX;
	int32_t t89 = 59293634;

	t89 = (x5529/(x5530==(x5531|x5532)));

	if (t89 != 159) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5565 = 19151881LL;
	int32_t x5566 = -1;
	int32_t x5567 = -1014729;

	t90 = (x5565/(x5566==(x5567|x5568)));

	if (t90 != 19151881LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x5573 = -106LL;
	int32_t x5574 = -1;
	uint16_t x5575 = 0U;
	static int32_t x5576 = -1;

	t91 = (x5573/(x5574==(x5575|x5576)));

	if (t91 != -106LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5641 = 0;
	int8_t x5643 = -1;

	t92 = (x5641/(x5642==(x5643|x5644)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5729 = 35U;
	volatile int16_t x5730 = -1;
	int8_t x5731 = INT8_MAX;
	volatile int8_t x5732 = INT8_MIN;
	int32_t t93 = 1;

	t93 = (x5729/(x5730==(x5731|x5732)));

	if (t93 != 35) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5757 = 13LLU;
	uint32_t x5759 = 239U;
	uint32_t x5760 = UINT32_MAX;
	volatile uint64_t t94 = 54304LLU;

	t94 = (x5757/(x5758==(x5759|x5760)));

	if (t94 != 13LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5917 = 19659U;
	int8_t x5918 = -1;
	volatile uint64_t x5919 = UINT64_MAX;
	int64_t x5920 = INT64_MAX;

	t95 = (x5917/(x5918==(x5919|x5920)));

	if (t95 != 19659) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5954 = -1;
	int32_t x5955 = INT32_MIN;
	int32_t x5956 = -1;
	int32_t t96 = 2252;

	t96 = (x5953/(x5954==(x5955|x5956)));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6017 = -1LL;
	int32_t x6018 = -1;
	static int64_t x6019 = -627925520173207002LL;
	int32_t x6020 = -1;
	volatile int64_t t97 = 503699537LL;

	t97 = (x6017/(x6018==(x6019|x6020)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6089 = UINT32_MAX;
	uint8_t x6091 = 75U;
	int64_t x6092 = -1LL;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x6089/(x6090==(x6091|x6092)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6158 = -1;
	static int32_t x6159 = -1;
	int16_t x6160 = -1;
	static int32_t t99 = -24329634;

	t99 = (x6157/(x6158==(x6159|x6160)));

	if (t99 != -128) { NG(); } else { ; }
	
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

