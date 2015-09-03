#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 16LL;
uint32_t t2 = 802U;
int32_t t3 = 3163;
int16_t x167 = INT16_MIN;
uint8_t x168 = 6U;
int16_t x174 = INT16_MIN;
static uint64_t x175 = 15950350566173424LLU;
int8_t x201 = 0;
uint8_t x213 = 2U;
static int16_t x215 = 9805;
volatile int8_t x357 = 47;
volatile uint64_t x359 = 61856776761257LLU;
int8_t x598 = -7;
uint64_t x673 = UINT64_MAX;
static uint16_t x732 = 0U;
static uint8_t x813 = 6U;
uint16_t x876 = 19U;
static int8_t x878 = INT8_MAX;
int16_t x879 = INT16_MIN;
uint16_t x890 = 8U;
volatile uint16_t x925 = UINT16_MAX;
int32_t x927 = -1;
int32_t x995 = INT32_MIN;
uint8_t x996 = 21U;
uint16_t x1031 = 0U;
volatile int32_t x1138 = INT32_MIN;
int16_t x1139 = -1;
int32_t t30 = 1336;
uint16_t x1233 = 125U;
int8_t x1259 = -1;
uint8_t x1260 = 20U;
volatile int32_t t32 = -502636;
static volatile int32_t t33 = -20231138;
static int16_t x1342 = INT16_MAX;
uint32_t x1520 = 28U;
uint32_t x1521 = 461019103U;
volatile uint32_t t36 = 1014U;
volatile uint16_t x1612 = 2U;
int8_t x1657 = 5;
int8_t x1686 = INT8_MIN;
uint64_t t40 = UINT64_MAX;
uint8_t x1721 = 3U;
static int64_t x1722 = INT64_MAX;
int16_t x1723 = 0;
int8_t x1724 = 0;
static volatile int16_t x1790 = -1;
volatile int32_t t42 = 22693;
uint64_t x1802 = UINT64_MAX;
uint8_t x1804 = 30U;
volatile int32_t t43 = 6;
int64_t x1962 = INT64_MIN;
int8_t x2047 = INT8_MIN;
uint16_t x2086 = 3U;
uint16_t x2312 = 5U;
static uint32_t x2316 = 2U;
uint16_t x2582 = 3973U;
int64_t x2671 = INT64_MIN;
volatile uint64_t t54 = UINT64_MAX;
int32_t x2921 = 427766510;
uint16_t x2924 = 1U;
static int64_t x2967 = -45077LL;
int16_t x3125 = INT16_MAX;
int8_t x3127 = -1;
static volatile uint64_t x3129 = UINT64_MAX;
uint8_t x3217 = UINT8_MAX;
uint8_t x3218 = 12U;
static volatile uint16_t x3238 = 2814U;
int32_t t62 = -13435528;
volatile int64_t x3682 = INT64_MAX;
int64_t x3729 = INT64_MAX;
uint64_t x3741 = UINT64_MAX;
uint32_t x3786 = 70514U;
static int8_t x3796 = 0;
int64_t t71 = 4250847387LL;
uint32_t x4005 = 83U;
uint64_t x4007 = UINT64_MAX;
volatile int32_t t78 = -70845907;
volatile uint64_t t81 = UINT64_MAX;
volatile uint8_t x4865 = UINT8_MAX;
int64_t x5047 = INT64_MAX;
int32_t t84 = -4;
int64_t x5059 = 11639748682LL;
int8_t x5060 = 7;
uint8_t x5081 = 2U;
uint32_t x5190 = UINT32_MAX;
volatile uint64_t x5238 = UINT64_MAX;
static uint16_t x5248 = 1U;
static volatile int16_t x5328 = 0;
volatile int32_t t90 = -134914;
static uint64_t x5345 = 6LLU;
volatile uint64_t t91 = 14922351558954LLU;
int32_t x5386 = 1644;
static int64_t t92 = INT64_MAX;
int8_t x5492 = 6;
uint8_t x5532 = 0U;
int16_t x5573 = INT16_MAX;
int32_t x5579 = INT32_MAX;
static volatile uint32_t t96 = 493450U;
volatile uint8_t x5651 = 10U;
uint32_t x5692 = 16U;


void f0(void) {
	uint8_t x1 = 0U;
	int16_t x2 = INT16_MAX;
	int16_t x3 = -14369;
	volatile int32_t t0 = 28;

	t0 = (x1>>((x2==x3)>>x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x105 = 1774LLU;
	uint16_t x106 = 43U;
	volatile int8_t x107 = -48;
	int16_t x108 = 2;
	volatile uint64_t t1 = 34LLU;

	t1 = (x105>>((x106==x107)>>x108));

	if (t1 != 1774LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x113 = 731623U;
	volatile int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	static int8_t x116 = 7;

	t2 = (x113>>((x114==x115)>>x116));

	if (t2 != 731623U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = 4LLU;
	int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = 27U;

	t3 = (x117>>((x118==x119)>>x120));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x145 = INT16_MAX;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = -1LL;
	uint8_t x148 = 18U;
	int32_t t4 = -81;

	t4 = (x145>>((x146==x147)>>x148));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x165 = 47LLU;
	volatile int64_t x166 = -151266085LL;
	volatile uint64_t t5 = 16046213LLU;

	t5 = (x165>>((x166==x167)>>x168));

	if (t5 != 47LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x173 = UINT8_MAX;
	static uint16_t x176 = 2U;
	volatile int32_t t6 = 33433931;

	t6 = (x173>>((x174==x175)>>x176));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x202 = INT32_MIN;
	uint8_t x203 = UINT8_MAX;
	volatile int8_t x204 = 24;
	int32_t t7 = -5657;

	t7 = (x201>>((x202==x203)>>x204));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x214 = 4U;
	static int8_t x216 = 15;
	static volatile int32_t t8 = 9123;

	t8 = (x213>>((x214==x215)>>x216));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static volatile int16_t x286 = 24;
	volatile uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = 0;
	static volatile int32_t t9 = 1;

	t9 = (x285>>((x286==x287)>>x288));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x289 = INT8_MAX;
	volatile uint8_t x290 = UINT8_MAX;
	int64_t x291 = -1LL;
	uint32_t x292 = 13U;
	int32_t t10 = -16;

	t10 = (x289>>((x290==x291)>>x292));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x325 = UINT64_MAX;
	static volatile uint16_t x326 = 1189U;
	static int16_t x327 = 0;
	uint64_t x328 = 1LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x325>>((x326==x327)>>x328));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x358 = INT64_MIN;
	int32_t x360 = 30;
	int32_t t12 = -1;

	t12 = (x357>>((x358==x359)>>x360));

	if (t12 != 47) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x393 = UINT32_MAX;
	static int16_t x394 = 0;
	int32_t x395 = INT32_MAX;
	volatile uint8_t x396 = 23U;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x393>>((x394==x395)>>x396));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x433 = 28;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = -1;
	static int16_t x436 = 1;
	volatile int32_t t14 = -10657473;

	t14 = (x433>>((x434==x435)>>x436));

	if (t14 != 28) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x545 = 16618254721286LLU;
	uint8_t x546 = 35U;
	static int32_t x547 = INT32_MAX;
	int8_t x548 = 12;
	static uint64_t t15 = 731026037430496LLU;

	t15 = (x545>>((x546==x547)>>x548));

	if (t15 != 16618254721286LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x597 = INT32_MAX;
	uint16_t x599 = 72U;
	int8_t x600 = 0;
	volatile int32_t t16 = INT32_MAX;

	t16 = (x597>>((x598==x599)>>x600));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x674 = INT64_MIN;
	static int16_t x675 = -1;
	uint8_t x676 = 28U;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x673>>((x674==x675)>>x676));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x705 = UINT64_MAX;
	int32_t x706 = 99417136;
	int32_t x707 = -813;
	uint16_t x708 = 3U;
	uint64_t t18 = UINT64_MAX;

	t18 = (x705>>((x706==x707)>>x708));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x729 = 0;
	volatile uint16_t x730 = 14811U;
	volatile int16_t x731 = INT16_MIN;
	static int32_t t19 = 3418;

	t19 = (x729>>((x730==x731)>>x732));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x737 = 0;
	uint64_t x738 = UINT64_MAX;
	int32_t x739 = -282900;
	int8_t x740 = 22;
	static volatile int32_t t20 = 225232884;

	t20 = (x737>>((x738==x739)>>x740));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x814 = -71915111075375053LL;
	uint16_t x815 = UINT16_MAX;
	uint64_t x816 = 1LLU;
	static volatile int32_t t21 = -8;

	t21 = (x813>>((x814==x815)>>x816));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x829 = 74;
	uint16_t x830 = 254U;
	volatile uint32_t x831 = 0U;
	uint8_t x832 = 1U;
	volatile int32_t t22 = -179048334;

	t22 = (x829>>((x830==x831)>>x832));

	if (t22 != 74) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x873 = 520142LLU;
	uint64_t x874 = UINT64_MAX;
	volatile uint16_t x875 = 448U;
	static uint64_t t23 = 263505044849356LLU;

	t23 = (x873>>((x874==x875)>>x876));

	if (t23 != 520142LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x877 = INT64_MAX;
	int8_t x880 = 0;
	volatile int64_t t24 = INT64_MAX;

	t24 = (x877>>((x878==x879)>>x880));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x889 = INT16_MAX;
	volatile uint64_t x891 = UINT64_MAX;
	volatile int16_t x892 = 1;
	static int32_t t25 = -30414;

	t25 = (x889>>((x890==x891)>>x892));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x909 = INT8_MAX;
	uint16_t x910 = UINT16_MAX;
	volatile int16_t x911 = INT16_MAX;
	uint8_t x912 = 26U;
	static volatile int32_t t26 = 2743613;

	t26 = (x909>>((x910==x911)>>x912));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x926 = INT64_MIN;
	uint16_t x928 = 8U;
	volatile int32_t t27 = 61179142;

	t27 = (x925>>((x926==x927)>>x928));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x993 = 166U;
	int32_t x994 = INT32_MIN;
	uint32_t t28 = 153152940U;

	t28 = (x993>>((x994==x995)>>x996));

	if (t28 != 166U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1029 = UINT32_MAX;
	int64_t x1030 = 18589900LL;
	int8_t x1032 = 28;
	uint32_t t29 = UINT32_MAX;

	t29 = (x1029>>((x1030==x1031)>>x1032));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1137 = 709;
	int8_t x1140 = 1;

	t30 = (x1137>>((x1138==x1139)>>x1140));

	if (t30 != 709) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1234 = INT32_MAX;
	uint32_t x1235 = 6U;
	uint16_t x1236 = 3U;
	static int32_t t31 = -1;

	t31 = (x1233>>((x1234==x1235)>>x1236));

	if (t31 != 125) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1257 = 5U;
	uint32_t x1258 = UINT32_MAX;

	t32 = (x1257>>((x1258==x1259)>>x1260));

	if (t32 != 5) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1277 = 4;
	uint64_t x1278 = 49593288253828364LLU;
	static int64_t x1279 = INT64_MAX;
	uint8_t x1280 = 1U;

	t33 = (x1277>>((x1278==x1279)>>x1280));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1341 = 58;
	int64_t x1343 = -1LL;
	volatile int64_t x1344 = 0LL;
	volatile int32_t t34 = -390;

	t34 = (x1341>>((x1342==x1343)>>x1344));

	if (t34 != 58) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1517 = 623323037U;
	uint16_t x1518 = 923U;
	int64_t x1519 = INT64_MAX;
	static uint32_t t35 = 3059U;

	t35 = (x1517>>((x1518==x1519)>>x1520));

	if (t35 != 623323037U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1522 = 62288189LL;
	volatile uint8_t x1523 = 2U;
	uint32_t x1524 = 3U;

	t36 = (x1521>>((x1522==x1523)>>x1524));

	if (t36 != 461019103U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1609 = 0LL;
	static volatile int8_t x1610 = INT8_MIN;
	uint16_t x1611 = 1960U;
	volatile int64_t t37 = 25576LL;

	t37 = (x1609>>((x1610==x1611)>>x1612));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x1649 = INT8_MAX;
	int16_t x1650 = 160;
	int64_t x1651 = INT64_MIN;
	uint32_t x1652 = 5U;
	volatile int32_t t38 = 536111607;

	t38 = (x1649>>((x1650==x1651)>>x1652));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1658 = INT32_MAX;
	uint8_t x1659 = 1U;
	uint8_t x1660 = 1U;
	static int32_t t39 = -207910346;

	t39 = (x1657>>((x1658==x1659)>>x1660));

	if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1685 = UINT64_MAX;
	int32_t x1687 = -21;
	uint64_t x1688 = 6LLU;

	t40 = (x1685>>((x1686==x1687)>>x1688));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t t41 = -103;

	t41 = (x1721>>((x1722==x1723)>>x1724));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1789 = INT16_MAX;
	uint32_t x1791 = 235259274U;
	int8_t x1792 = 15;

	t42 = (x1789>>((x1790==x1791)>>x1792));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x1801 = 0U;
	uint16_t x1803 = 3529U;

	t43 = (x1801>>((x1802==x1803)>>x1804));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x1833 = 8;
	int64_t x1834 = INT64_MIN;
	uint16_t x1835 = 511U;
	uint8_t x1836 = 3U;
	int32_t t44 = -487723;

	t44 = (x1833>>((x1834==x1835)>>x1836));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x1913 = 512536156945871LL;
	uint32_t x1914 = 1592375474U;
	volatile uint32_t x1915 = UINT32_MAX;
	uint16_t x1916 = 30U;
	int64_t t45 = -7LL;

	t45 = (x1913>>((x1914==x1915)>>x1916));

	if (t45 != 512536156945871LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1961 = 1;
	int16_t x1963 = INT16_MAX;
	int8_t x1964 = 5;
	int32_t t46 = 28375;

	t46 = (x1961>>((x1962==x1963)>>x1964));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2045 = INT16_MAX;
	uint64_t x2046 = 14553677150888LLU;
	uint8_t x2048 = 0U;
	volatile int32_t t47 = -5017504;

	t47 = (x2045>>((x2046==x2047)>>x2048));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2085 = 1794431810LLU;
	uint16_t x2087 = 113U;
	uint16_t x2088 = 19U;
	uint64_t t48 = 5520946107955607744LLU;

	t48 = (x2085>>((x2086==x2087)>>x2088));

	if (t48 != 1794431810LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2309 = INT32_MAX;
	uint32_t x2310 = UINT32_MAX;
	static uint16_t x2311 = 1U;
	volatile int32_t t49 = INT32_MAX;

	t49 = (x2309>>((x2310==x2311)>>x2312));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2313 = UINT32_MAX;
	uint16_t x2314 = 12U;
	int16_t x2315 = INT16_MIN;
	uint32_t t50 = UINT32_MAX;

	t50 = (x2313>>((x2314==x2315)>>x2316));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2581 = INT64_MAX;
	uint64_t x2583 = 118057619LLU;
	volatile int16_t x2584 = 0;
	int64_t t51 = INT64_MAX;

	t51 = (x2581>>((x2582==x2583)>>x2584));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x2669 = 169216U;
	int8_t x2670 = INT8_MIN;
	uint8_t x2672 = 0U;
	uint32_t t52 = 6U;

	t52 = (x2669>>((x2670==x2671)>>x2672));

	if (t52 != 169216U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2789 = 5U;
	uint16_t x2790 = 1U;
	volatile uint32_t x2791 = 7666522U;
	uint8_t x2792 = 0U;
	int32_t t53 = -102051356;

	t53 = (x2789>>((x2790==x2791)>>x2792));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2893 = UINT64_MAX;
	int16_t x2894 = -930;
	volatile uint16_t x2895 = 5U;
	volatile int16_t x2896 = 3;

	t54 = (x2893>>((x2894==x2895)>>x2896));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2922 = -62240LL;
	int8_t x2923 = 1;
	int32_t t55 = 8143;

	t55 = (x2921>>((x2922==x2923)>>x2924));

	if (t55 != 427766510) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2965 = 4604680U;
	static volatile uint16_t x2966 = 3039U;
	volatile int16_t x2968 = 0;
	uint32_t t56 = 1735241U;

	t56 = (x2965>>((x2966==x2967)>>x2968));

	if (t56 != 4604680U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3001 = 105U;
	int64_t x3002 = 523691508LL;
	volatile int64_t x3003 = INT64_MIN;
	volatile uint32_t x3004 = 2U;
	volatile int32_t t57 = -2724033;

	t57 = (x3001>>((x3002==x3003)>>x3004));

	if (t57 != 105) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3126 = INT16_MIN;
	uint8_t x3128 = 1U;
	volatile int32_t t58 = -91914;

	t58 = (x3125>>((x3126==x3127)>>x3128));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3130 = -1;
	int64_t x3131 = -1632171LL;
	uint8_t x3132 = 1U;
	uint64_t t59 = UINT64_MAX;

	t59 = (x3129>>((x3130==x3131)>>x3132));

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3219 = INT8_MIN;
	int8_t x3220 = 7;
	volatile int32_t t60 = -2073088;

	t60 = (x3217>>((x3218==x3219)>>x3220));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3221 = INT64_MAX;
	int8_t x3222 = INT8_MAX;
	int16_t x3223 = INT16_MAX;
	uint8_t x3224 = 0U;
	int64_t t61 = INT64_MAX;

	t61 = (x3221>>((x3222==x3223)>>x3224));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x3237 = 6521U;
	volatile int16_t x3239 = INT16_MAX;
	static uint8_t x3240 = 11U;

	t62 = (x3237>>((x3238==x3239)>>x3240));

	if (t62 != 6521) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3361 = 3181185949547080490LLU;
	int16_t x3362 = INT16_MIN;
	volatile int8_t x3363 = INT8_MAX;
	volatile uint16_t x3364 = 1U;
	volatile uint64_t t63 = 5258941636321053LLU;

	t63 = (x3361>>((x3362==x3363)>>x3364));

	if (t63 != 3181185949547080490LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3653 = 7U;
	static volatile int16_t x3654 = 186;
	volatile uint32_t x3655 = 1558788799U;
	int32_t x3656 = 2;
	volatile int32_t t64 = -13;

	t64 = (x3653>>((x3654==x3655)>>x3656));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3681 = INT8_MAX;
	uint8_t x3683 = 1U;
	static int8_t x3684 = 14;
	static volatile int32_t t65 = -56;

	t65 = (x3681>>((x3682==x3683)>>x3684));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3689 = 1535U;
	int8_t x3690 = INT8_MIN;
	uint8_t x3691 = 15U;
	int16_t x3692 = 1;
	volatile uint32_t t66 = 11767554U;

	t66 = (x3689>>((x3690==x3691)>>x3692));

	if (t66 != 1535U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3730 = INT16_MIN;
	static int32_t x3731 = -1;
	volatile uint16_t x3732 = 0U;
	int64_t t67 = INT64_MAX;

	t67 = (x3729>>((x3730==x3731)>>x3732));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3742 = -1;
	int32_t x3743 = INT32_MIN;
	int8_t x3744 = 11;
	uint64_t t68 = UINT64_MAX;

	t68 = (x3741>>((x3742==x3743)>>x3744));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3785 = 1181LLU;
	int64_t x3787 = 195956989850LL;
	static uint8_t x3788 = 20U;
	uint64_t t69 = 11514717LLU;

	t69 = (x3785>>((x3786==x3787)>>x3788));

	if (t69 != 1181LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3793 = 69;
	static uint16_t x3794 = 132U;
	volatile uint8_t x3795 = UINT8_MAX;
	static int32_t t70 = -3;

	t70 = (x3793>>((x3794==x3795)>>x3796));

	if (t70 != 69) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3853 = 15435157592538LL;
	static int16_t x3854 = -1;
	uint16_t x3855 = UINT16_MAX;
	volatile int16_t x3856 = 1;

	t71 = (x3853>>((x3854==x3855)>>x3856));

	if (t71 != 15435157592538LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3893 = INT8_MAX;
	uint32_t x3894 = 3758U;
	static volatile int16_t x3895 = -98;
	static uint32_t x3896 = 3U;
	volatile int32_t t72 = -47219;

	t72 = (x3893>>((x3894==x3895)>>x3896));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4006 = INT64_MIN;
	volatile int8_t x4008 = 5;
	volatile uint32_t t73 = 2U;

	t73 = (x4005>>((x4006==x4007)>>x4008));

	if (t73 != 83U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4113 = 2671U;
	uint8_t x4114 = 107U;
	static uint8_t x4115 = 43U;
	int32_t x4116 = 12;
	volatile int32_t t74 = 217;

	t74 = (x4113>>((x4114==x4115)>>x4116));

	if (t74 != 2671) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4141 = UINT32_MAX;
	static int32_t x4142 = 0;
	uint8_t x4143 = UINT8_MAX;
	int8_t x4144 = 0;
	uint32_t t75 = UINT32_MAX;

	t75 = (x4141>>((x4142==x4143)>>x4144));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4253 = 20;
	int8_t x4254 = INT8_MIN;
	int8_t x4255 = INT8_MIN;
	uint64_t x4256 = 29LLU;
	volatile int32_t t76 = 1;

	t76 = (x4253>>((x4254==x4255)>>x4256));

	if (t76 != 20) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4329 = 0U;
	int16_t x4330 = -1;
	int64_t x4331 = -1LL;
	static uint8_t x4332 = 15U;
	int32_t t77 = -59;

	t77 = (x4329>>((x4330==x4331)>>x4332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4377 = 30572U;
	static volatile int16_t x4378 = -1;
	int32_t x4379 = INT32_MIN;
	uint8_t x4380 = 1U;

	t78 = (x4377>>((x4378==x4379)>>x4380));

	if (t78 != 30572) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4513 = INT16_MAX;
	int32_t x4514 = -1;
	uint32_t x4515 = 782U;
	int16_t x4516 = 3;
	int32_t t79 = 163981;

	t79 = (x4513>>((x4514==x4515)>>x4516));

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4593 = 0;
	volatile uint16_t x4594 = 60U;
	int16_t x4595 = -1;
	int8_t x4596 = 3;
	static int32_t t80 = 117;

	t80 = (x4593>>((x4594==x4595)>>x4596));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4677 = UINT64_MAX;
	volatile int64_t x4678 = 87315743089626911LL;
	static int8_t x4679 = 3;
	int8_t x4680 = 1;

	t81 = (x4677>>((x4678==x4679)>>x4680));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4866 = 45U;
	int16_t x4867 = INT16_MIN;
	static uint32_t x4868 = 25U;
	volatile int32_t t82 = 3204;

	t82 = (x4865>>((x4866==x4867)>>x4868));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5033 = 0U;
	volatile uint32_t x5034 = UINT32_MAX;
	static int64_t x5035 = 19746525269LL;
	volatile uint8_t x5036 = 4U;
	static int32_t t83 = -854975;

	t83 = (x5033>>((x5034==x5035)>>x5036));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5045 = INT16_MAX;
	static uint8_t x5046 = 2U;
	uint64_t x5048 = 10LLU;

	t84 = (x5045>>((x5046==x5047)>>x5048));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5057 = INT8_MAX;
	static int16_t x5058 = INT16_MAX;
	volatile int32_t t85 = 260939480;

	t85 = (x5057>>((x5058==x5059)>>x5060));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5082 = -1;
	int64_t x5083 = INT64_MIN;
	volatile int16_t x5084 = 1;
	int32_t t86 = 68;

	t86 = (x5081>>((x5082==x5083)>>x5084));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5189 = INT16_MAX;
	int8_t x5191 = INT8_MIN;
	uint32_t x5192 = 3U;
	int32_t t87 = 1797713;

	t87 = (x5189>>((x5190==x5191)>>x5192));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5237 = INT16_MAX;
	static int32_t x5239 = -1547;
	uint8_t x5240 = 5U;
	volatile int32_t t88 = -3915813;

	t88 = (x5237>>((x5238==x5239)>>x5240));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x5245 = 13884632LL;
	volatile int32_t x5246 = -1;
	uint16_t x5247 = 33U;
	volatile int64_t t89 = 331194783LL;

	t89 = (x5245>>((x5246==x5247)>>x5248));

	if (t89 != 13884632LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5325 = 0;
	static int32_t x5326 = INT32_MIN;
	volatile int8_t x5327 = INT8_MIN;

	t90 = (x5325>>((x5326==x5327)>>x5328));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5346 = 19;
	int64_t x5347 = -25724654282LL;
	int8_t x5348 = 1;

	t91 = (x5345>>((x5346==x5347)>>x5348));

	if (t91 != 6LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5385 = INT64_MAX;
	uint64_t x5387 = 1LLU;
	volatile uint16_t x5388 = 14U;

	t92 = (x5385>>((x5386==x5387)>>x5388));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x5489 = UINT16_MAX;
	volatile uint64_t x5490 = 712726638522566668LLU;
	static int16_t x5491 = INT16_MIN;
	volatile int32_t t93 = 509089;

	t93 = (x5489>>((x5490==x5491)>>x5492));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5529 = 27998;
	int16_t x5530 = INT16_MIN;
	uint64_t x5531 = 7313973829LLU;
	static int32_t t94 = 223680;

	t94 = (x5529>>((x5530==x5531)>>x5532));

	if (t94 != 27998) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5574 = 6224U;
	uint32_t x5575 = 5766680U;
	uint16_t x5576 = 3U;
	volatile int32_t t95 = 0;

	t95 = (x5573>>((x5574==x5575)>>x5576));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5577 = 24846U;
	uint16_t x5578 = 2311U;
	volatile uint16_t x5580 = 5U;

	t96 = (x5577>>((x5578==x5579)>>x5580));

	if (t96 != 24846U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5645 = INT16_MAX;
	int32_t x5646 = 39;
	int64_t x5647 = -494668245274LL;
	static int8_t x5648 = 12;
	volatile int32_t t97 = -19;

	t97 = (x5645>>((x5646==x5647)>>x5648));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5649 = INT64_MAX;
	int64_t x5650 = INT64_MIN;
	int16_t x5652 = 1;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x5649>>((x5650==x5651)>>x5652));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5689 = UINT8_MAX;
	static volatile int16_t x5690 = -78;
	uint32_t x5691 = UINT32_MAX;
	int32_t t99 = -4;

	t99 = (x5689>>((x5690==x5691)>>x5692));

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

