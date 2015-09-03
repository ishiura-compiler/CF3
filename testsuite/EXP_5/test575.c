#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x45 = -1;
static int64_t x46 = INT64_MIN;
static int64_t x105 = INT64_MAX;
int8_t x148 = 1;
int8_t x202 = -1;
static int32_t x203 = -1024851;
uint8_t x204 = 14U;
static uint32_t t5 = 3067U;
int64_t x263 = INT64_MIN;
int32_t x385 = -1;
int32_t t9 = -454;
int8_t x414 = INT8_MIN;
uint16_t x416 = 11U;
int16_t x546 = 12;
uint8_t x548 = 53U;
volatile uint64_t t13 = 17728LLU;
uint32_t x573 = UINT32_MAX;
int8_t x574 = -1;
int8_t x575 = INT8_MIN;
uint8_t x588 = 0U;
volatile uint64_t x781 = UINT64_MAX;
uint16_t x898 = 23478U;
static int64_t x930 = -98731976LL;
uint64_t x998 = UINT64_MAX;
uint32_t x1000 = 3U;
static volatile uint64_t t21 = 4024301925912786178LLU;
volatile uint8_t x1017 = 117U;
uint32_t x1025 = UINT32_MAX;
static int8_t x1097 = 7;
int16_t x1099 = INT16_MIN;
uint8_t x1226 = UINT8_MAX;
int8_t x1228 = 0;
int64_t x1285 = 57622420LL;
static volatile uint8_t x1288 = 2U;
volatile int64_t t32 = 63993287572932LL;
uint64_t x1351 = 14752708LLU;
uint64_t x1633 = 4563985873060845284LLU;
static int16_t x1682 = INT16_MIN;
int16_t x1728 = 51;
static volatile uint16_t x1732 = 20U;
uint64_t x1769 = 1530393779998446377LLU;
uint64_t t44 = 2266740610366LLU;
uint64_t x1786 = 1339938597304LLU;
static volatile uint64_t x1802 = 1863351LLU;
int16_t x1846 = INT16_MAX;
uint32_t x1963 = 14694462U;
uint64_t x2058 = 87LLU;
volatile uint16_t x2112 = 2U;
int8_t x2126 = INT8_MIN;
uint16_t x2167 = UINT16_MAX;
int32_t t55 = 27397;
int16_t x2169 = -13;
volatile uint64_t t57 = 1549770LLU;
uint16_t x2250 = UINT16_MAX;
int64_t x2293 = 667442187290LL;
int16_t x2311 = INT16_MIN;
volatile int8_t x2333 = INT8_MIN;
volatile int32_t t61 = -826;
uint32_t x2376 = 0U;
int8_t x2433 = INT8_MIN;
int64_t x2434 = -63015593046879152LL;
static int16_t x2458 = 306;
uint32_t x2587 = 202952561U;
uint32_t x2594 = 1154U;
uint32_t x2595 = 7U;
volatile int32_t x2646 = -1;
int64_t x2741 = -1LL;
int64_t x2743 = -1LL;
int32_t x2917 = -2636;
volatile int16_t x2954 = -3197;
uint16_t x2958 = UINT16_MAX;
volatile uint8_t x2960 = 1U;
volatile uint64_t t78 = 11202LLU;
volatile int32_t x3013 = INT32_MIN;
volatile uint64_t x3015 = UINT64_MAX;
uint8_t x3016 = 12U;
volatile int32_t x3051 = 680768027;
int16_t x3073 = INT16_MIN;
int16_t x3085 = -1;
static int16_t x3087 = 1755;
volatile uint8_t x3145 = 1U;
volatile uint32_t x3147 = 1033111941U;
int8_t x3170 = -1;
uint64_t x3351 = UINT64_MAX;
volatile int8_t x3405 = -1;
int32_t x3408 = 23;
static uint64_t t91 = 122781LLU;
uint64_t x3417 = 63056906085183LLU;
uint64_t t92 = 2885021285411601LLU;
int64_t x3451 = INT64_MAX;
uint64_t x3559 = UINT64_MAX;
int16_t x3756 = 37;
uint8_t x3817 = UINT8_MAX;


void f0(void) {
	int8_t x47 = INT8_MIN;
	int8_t x48 = 0;
	volatile int64_t t0 = 40274690784549734LL;

	t0 = (x45*((x46/x47)<<x48));

	if (t0 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x97 = 3U;
	volatile int8_t x98 = INT8_MIN;
	static int32_t x99 = 468;
	static volatile uint8_t x100 = 7U;
	static volatile int32_t t1 = -64708;

	t1 = (x97*((x98/x99)<<x100));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x106 = INT16_MAX;
	int32_t x107 = 134195690;
	static uint16_t x108 = 5U;
	static int64_t t2 = -98516LL;

	t2 = (x105*((x106/x107)<<x108));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x145 = 1;
	static volatile int16_t x146 = 1541;
	static uint64_t x147 = 2642901183135LLU;
	uint64_t t3 = 7984700771925350LLU;

	t3 = (x145*((x146/x147)<<x148));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x201 = -1LL;
	volatile int64_t t4 = 26619435553687726LL;

	t4 = (x201*((x202/x203)<<x204));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = 0;
	static uint32_t x223 = 48361057U;
	int16_t x224 = 21;

	t5 = (x221*((x222/x223)<<x224));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x261 = 12U;
	int64_t x262 = -1LL;
	volatile uint16_t x264 = 1U;
	int64_t t6 = 51610LL;

	t6 = (x261*((x262/x263)<<x264));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x265 = -12009668990464184LL;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 0;
	volatile int64_t t7 = 137899846664LL;

	t7 = (x265*((x266/x267)<<x268));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x309 = -1;
	static int32_t x310 = -245731347;
	int16_t x311 = -12054;
	uint8_t x312 = 0U;
	int32_t t8 = -254623349;

	t8 = (x309*((x310/x311)<<x312));

	if (t8 != -20385) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x386 = UINT8_MAX;
	int16_t x387 = 174;
	volatile int32_t x388 = 14;

	t9 = (x385*((x386/x387)<<x388));

	if (t9 != -16384) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x413 = INT8_MIN;
	uint64_t x415 = 22767827843096LLU;
	uint64_t t10 = 6587416440224LLU;

	t10 = (x413*((x414/x415)<<x416));

	if (t10 != 18446743861317861376LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x469 = 274779011912026683LL;
	uint8_t x470 = 14U;
	volatile int32_t x471 = -42700642;
	volatile int8_t x472 = 0;
	int64_t t11 = -1LL;

	t11 = (x469*((x470/x471)<<x472));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x545 = 7U;
	int64_t x547 = INT64_MIN;
	volatile int64_t t12 = 15178808LL;

	t12 = (x545*((x546/x547)<<x548));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x549 = INT8_MAX;
	uint64_t x550 = UINT64_MAX;
	int32_t x551 = -228337987;
	uint8_t x552 = 4U;

	t13 = (x549*((x550/x551)<<x552));

	if (t13 != 2032LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x561 = 2U;
	uint8_t x562 = UINT8_MAX;
	volatile uint16_t x563 = 1727U;
	int16_t x564 = 14;
	static volatile int32_t t14 = -18089751;

	t14 = (x561*((x562/x563)<<x564));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x576 = 11U;
	uint32_t t15 = 189706616U;

	t15 = (x573*((x574/x575)<<x576));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x585 = 12284161248LLU;
	int64_t x586 = -1LL;
	int64_t x587 = -1LL;
	volatile uint64_t t16 = 20341544LLU;

	t16 = (x585*((x586/x587)<<x588));

	if (t16 != 12284161248LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x782 = -10612;
	int64_t x783 = -189LL;
	uint8_t x784 = 3U;
	volatile uint64_t t17 = 2680LLU;

	t17 = (x781*((x782/x783)<<x784));

	if (t17 != 18446744073709551168LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x801 = -1LL;
	static int8_t x802 = INT8_MIN;
	uint32_t x803 = 20572U;
	uint16_t x804 = 15U;
	int64_t t18 = 3482LL;

	t18 = (x801*((x802/x803)<<x804));

	if (t18 != -2546237440LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x897 = UINT8_MAX;
	uint32_t x899 = 120U;
	uint16_t x900 = 0U;
	uint32_t t19 = 8307U;

	t19 = (x897*((x898/x899)<<x900));

	if (t19 != 49725U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x929 = INT32_MIN;
	volatile int8_t x931 = INT8_MIN;
	uint8_t x932 = 11U;
	int64_t t20 = 1011524LL;

	t20 = (x929*((x930/x931)<<x932));

	if (t20 != -3392402390014492672LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x997 = INT8_MIN;
	int32_t x999 = -8861;

	t21 = (x997*((x998/x999)<<x1000));

	if (t21 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1013 = UINT16_MAX;
	uint64_t x1014 = 509242933723LLU;
	int32_t x1015 = INT32_MIN;
	uint32_t x1016 = 62U;
	uint64_t t22 = 156693LLU;

	t22 = (x1013*((x1014/x1015)<<x1016));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1018 = -1;
	volatile uint64_t x1019 = UINT64_MAX;
	volatile int8_t x1020 = 1;
	static uint64_t t23 = 114582849526103LLU;

	t23 = (x1017*((x1018/x1019)<<x1020));

	if (t23 != 234LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1026 = 88U;
	static int64_t x1027 = INT64_MIN;
	uint16_t x1028 = 2U;
	volatile int64_t t24 = -841560796571810LL;

	t24 = (x1025*((x1026/x1027)<<x1028));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1098 = INT16_MIN;
	volatile int8_t x1100 = 1;
	int32_t t25 = -668;

	t25 = (x1097*((x1098/x1099)<<x1100));

	if (t25 != 14) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1101 = 119911536;
	int32_t x1102 = INT32_MIN;
	int64_t x1103 = -22530743936LL;
	int8_t x1104 = 6;
	int64_t t26 = 87LL;

	t26 = (x1101*((x1102/x1103)<<x1104));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1137 = 85U;
	int32_t x1138 = INT32_MAX;
	int64_t x1139 = 238416645LL;
	uint8_t x1140 = 2U;
	volatile int64_t t27 = 8994568539384953LL;

	t27 = (x1137*((x1138/x1139)<<x1140));

	if (t27 != 3060LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1225 = 13;
	volatile uint32_t x1227 = 2086807U;
	uint32_t t28 = 7U;

	t28 = (x1225*((x1226/x1227)<<x1228));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1233 = 188267068;
	volatile int8_t x1234 = INT8_MIN;
	static int16_t x1235 = INT16_MIN;
	uint8_t x1236 = 13U;
	volatile int32_t t29 = 134513063;

	t29 = (x1233*((x1234/x1235)<<x1236));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1269 = INT64_MIN;
	static uint16_t x1270 = 15U;
	static int32_t x1271 = -18702;
	int16_t x1272 = 1;
	static volatile int64_t t30 = 760537569LL;

	t30 = (x1269*((x1270/x1271)<<x1272));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1286 = INT32_MAX;
	int64_t x1287 = INT64_MAX;
	volatile int64_t t31 = -1048239906992000LL;

	t31 = (x1285*((x1286/x1287)<<x1288));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1293 = -1LL;
	int32_t x1294 = -1;
	int8_t x1295 = INT8_MIN;
	uint8_t x1296 = 1U;

	t32 = (x1293*((x1294/x1295)<<x1296));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x1305 = 69772LL;
	volatile uint16_t x1306 = UINT16_MAX;
	int8_t x1307 = 4;
	uint16_t x1308 = 10U;
	int64_t t33 = 443LL;

	t33 = (x1305*((x1306/x1307)<<x1308));

	if (t33 != 1170508468224LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1349 = 8411673;
	uint64_t x1350 = 15LLU;
	int8_t x1352 = 0;
	uint64_t t34 = 1040LLU;

	t34 = (x1349*((x1350/x1351)<<x1352));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1373 = 0U;
	static volatile int8_t x1374 = -1;
	int16_t x1375 = INT16_MIN;
	volatile uint8_t x1376 = 1U;
	volatile int32_t t35 = -28;

	t35 = (x1373*((x1374/x1375)<<x1376));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1489 = INT16_MAX;
	static int64_t x1490 = INT64_MAX;
	int64_t x1491 = INT64_MIN;
	uint32_t x1492 = 3U;
	int64_t t36 = -24LL;

	t36 = (x1489*((x1490/x1491)<<x1492));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1533 = INT32_MIN;
	int8_t x1534 = -1;
	int64_t x1535 = INT64_MAX;
	uint8_t x1536 = 2U;
	int64_t t37 = -3923754494204LL;

	t37 = (x1533*((x1534/x1535)<<x1536));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1613 = 63U;
	int32_t x1614 = INT32_MAX;
	uint32_t x1615 = 144243U;
	uint8_t x1616 = 31U;
	uint32_t t38 = 0U;

	t38 = (x1613*((x1614/x1615)<<x1616));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1634 = 1222124448799LLU;
	uint32_t x1635 = UINT32_MAX;
	uint8_t x1636 = 0U;
	volatile uint64_t t39 = 55LLU;

	t39 = (x1633*((x1634/x1635)<<x1636));

	if (t39 != 4899902789611447536LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1681 = -1LL;
	static uint16_t x1683 = UINT16_MAX;
	volatile uint64_t x1684 = 0LLU;
	int64_t t40 = -28LL;

	t40 = (x1681*((x1682/x1683)<<x1684));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1685 = -1;
	int8_t x1686 = INT8_MIN;
	uint16_t x1687 = 4764U;
	uint8_t x1688 = 6U;
	static volatile int32_t t41 = 103;

	t41 = (x1685*((x1686/x1687)<<x1688));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1725 = -499;
	volatile uint16_t x1726 = 0U;
	volatile uint64_t x1727 = 97LLU;
	volatile uint64_t t42 = 55620622494879LLU;

	t42 = (x1725*((x1726/x1727)<<x1728));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1729 = 1692U;
	int16_t x1730 = INT16_MIN;
	int8_t x1731 = -22;
	static uint32_t t43 = 0U;

	t43 = (x1729*((x1730/x1731)<<x1732));

	if (t43 != 364904448U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x1770 = 23U;
	int8_t x1771 = 1;
	volatile uint8_t x1772 = 2U;

	t44 = (x1769*((x1770/x1771)<<x1772));

	if (t44 != 11669019243890205372LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1785 = 60540446U;
	uint64_t x1787 = 3207570680923074044LLU;
	static int8_t x1788 = 33;
	volatile uint64_t t45 = 17479332069077LLU;

	t45 = (x1785*((x1786/x1787)<<x1788));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1801 = INT8_MIN;
	int32_t x1803 = -87;
	volatile int8_t x1804 = 0;
	volatile uint64_t t46 = 2006208044334035LLU;

	t46 = (x1801*((x1802/x1803)<<x1804));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1833 = 123194216078LLU;
	volatile int32_t x1834 = INT32_MIN;
	int8_t x1835 = INT8_MIN;
	volatile int8_t x1836 = 0;
	uint64_t t47 = 161917LLU;

	t47 = (x1833*((x1834/x1835)<<x1836));

	if (t47 != 2066855973091278848LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1845 = -1;
	uint32_t x1847 = 262062854U;
	volatile uint8_t x1848 = 1U;
	volatile uint32_t t48 = 118U;

	t48 = (x1845*((x1846/x1847)<<x1848));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1889 = UINT8_MAX;
	int64_t x1890 = INT64_MIN;
	volatile int32_t x1891 = INT32_MIN;
	int16_t x1892 = 14;
	static int64_t t49 = -694203LL;

	t49 = (x1889*((x1890/x1891)<<x1892));

	if (t49 != 17944029765304320LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1913 = INT16_MAX;
	volatile int16_t x1914 = -1;
	uint8_t x1915 = 9U;
	volatile int32_t x1916 = 0;
	int32_t t50 = -80441;

	t50 = (x1913*((x1914/x1915)<<x1916));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1961 = -533096848489329653LL;
	uint16_t x1962 = 15948U;
	static uint16_t x1964 = 1U;
	static int64_t t51 = -9LL;

	t51 = (x1961*((x1962/x1963)<<x1964));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2057 = 12U;
	static uint64_t x2059 = 40349184117290542LLU;
	int16_t x2060 = 47;
	uint64_t t52 = 0LLU;

	t52 = (x2057*((x2058/x2059)<<x2060));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x2109 = UINT8_MAX;
	volatile int8_t x2110 = -1;
	int64_t x2111 = INT64_MAX;
	static int64_t t53 = -1153633650517167708LL;

	t53 = (x2109*((x2110/x2111)<<x2112));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2125 = 1533022648U;
	int64_t x2127 = -1LL;
	uint16_t x2128 = 2U;
	int64_t t54 = 15LL;

	t54 = (x2125*((x2126/x2127)<<x2128));

	if (t54 != 784907595776LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2165 = -10;
	int16_t x2166 = INT16_MIN;
	volatile int16_t x2168 = 1;

	t55 = (x2165*((x2166/x2167)<<x2168));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2170 = 7;
	static int64_t x2171 = 2006661206404LL;
	uint8_t x2172 = 4U;
	volatile int64_t t56 = -167390543LL;

	t56 = (x2169*((x2170/x2171)<<x2172));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2177 = -2585;
	static uint64_t x2178 = UINT64_MAX;
	static uint8_t x2179 = 15U;
	uint8_t x2180 = 12U;

	t57 = (x2177*((x2178/x2179)<<x2180));

	if (t57 != 12297829382473740288LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2249 = 580;
	volatile int32_t x2251 = INT32_MIN;
	int32_t x2252 = 15;
	volatile int32_t t58 = -1506;

	t58 = (x2249*((x2250/x2251)<<x2252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2294 = 55694038U;
	volatile uint64_t x2295 = 1900LLU;
	uint8_t x2296 = 12U;
	static volatile uint64_t t59 = 1589681658733650590LLU;

	t59 = (x2293*((x2294/x2295)<<x2296));

	if (t59 != 6347435558348783616LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2309 = 3494620794LLU;
	volatile int16_t x2310 = 1;
	uint8_t x2312 = 1U;
	static uint64_t t60 = 133836053775LLU;

	t60 = (x2309*((x2310/x2311)<<x2312));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2334 = 23U;
	int8_t x2335 = INT8_MAX;
	int64_t x2336 = 3LL;

	t61 = (x2333*((x2334/x2335)<<x2336));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2373 = 1;
	int64_t x2374 = -40566707449006983LL;
	int32_t x2375 = INT32_MIN;
	int64_t t62 = -493175178LL;

	t62 = (x2373*((x2374/x2375)<<x2376));

	if (t62 != 18890345LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2435 = INT16_MIN;
	uint16_t x2436 = 15U;
	volatile int64_t t63 = -3LL;

	t63 = (x2433*((x2434/x2435)<<x2436));

	if (t63 != -8065995909999099904LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x2457 = 30U;
	static uint32_t x2459 = 789U;
	static int8_t x2460 = 2;
	uint32_t t64 = 8U;

	t64 = (x2457*((x2458/x2459)<<x2460));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2509 = UINT16_MAX;
	uint8_t x2510 = UINT8_MAX;
	static volatile int16_t x2511 = INT16_MIN;
	uint8_t x2512 = 0U;
	int32_t t65 = -32042;

	t65 = (x2509*((x2510/x2511)<<x2512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2549 = 46713903U;
	uint8_t x2550 = UINT8_MAX;
	volatile int32_t x2551 = INT32_MIN;
	static uint64_t x2552 = 0LLU;
	uint32_t t66 = 2U;

	t66 = (x2549*((x2550/x2551)<<x2552));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2585 = 3215LLU;
	int32_t x2586 = 25693;
	int8_t x2588 = 0;
	static volatile uint64_t t67 = 1021LLU;

	t67 = (x2585*((x2586/x2587)<<x2588));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x2593 = UINT32_MAX;
	static int8_t x2596 = 0;
	uint32_t t68 = 59718U;

	t68 = (x2593*((x2594/x2595)<<x2596));

	if (t68 != 4294967132U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2613 = INT32_MIN;
	int16_t x2614 = -1;
	uint16_t x2615 = 42U;
	static uint16_t x2616 = 1U;
	volatile int32_t t69 = -253821;

	t69 = (x2613*((x2614/x2615)<<x2616));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2645 = -978904053LL;
	static int16_t x2647 = INT16_MIN;
	uint8_t x2648 = 2U;
	int64_t t70 = 1994791108671LL;

	t70 = (x2645*((x2646/x2647)<<x2648));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2697 = 89807258089LLU;
	int64_t x2698 = -48LL;
	int32_t x2699 = INT32_MAX;
	uint8_t x2700 = 6U;
	static uint64_t t71 = 2125044LLU;

	t71 = (x2697*((x2698/x2699)<<x2700));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2742 = -1;
	volatile uint16_t x2744 = 18U;
	static volatile int64_t t72 = -62001576589943LL;

	t72 = (x2741*((x2742/x2743)<<x2744));

	if (t72 != -262144LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2841 = -4;
	uint8_t x2842 = 86U;
	int8_t x2843 = 63;
	uint8_t x2844 = 2U;
	int32_t t73 = 101027;

	t73 = (x2841*((x2842/x2843)<<x2844));

	if (t73 != -16) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2865 = UINT32_MAX;
	int8_t x2866 = -1;
	volatile int8_t x2867 = -1;
	uint8_t x2868 = 19U;
	static uint32_t t74 = 394530548U;

	t74 = (x2865*((x2866/x2867)<<x2868));

	if (t74 != 4294443008U) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2877 = INT32_MIN;
	int8_t x2878 = -1;
	uint16_t x2879 = UINT16_MAX;
	uint8_t x2880 = 3U;
	int32_t t75 = -311;

	t75 = (x2877*((x2878/x2879)<<x2880));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2918 = 54U;
	static uint64_t x2919 = 12LLU;
	volatile uint8_t x2920 = 0U;
	uint64_t t76 = 10414LLU;

	t76 = (x2917*((x2918/x2919)<<x2920));

	if (t76 != 18446744073709541072LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2953 = -1;
	int64_t x2955 = -1LL;
	int8_t x2956 = 25;
	static int64_t t77 = 174463238921830LL;

	t77 = (x2953*((x2954/x2955)<<x2956));

	if (t77 != -107273519104LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2957 = INT32_MIN;
	uint64_t x2959 = 3987LLU;

	t78 = (x2957*((x2958/x2959)<<x2960));

	if (t78 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2985 = UINT64_MAX;
	static uint8_t x2986 = 31U;
	uint16_t x2987 = UINT16_MAX;
	static int8_t x2988 = 0;
	uint64_t t79 = 227995910LLU;

	t79 = (x2985*((x2986/x2987)<<x2988));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x3014 = UINT8_MAX;
	volatile uint64_t t80 = 2050000LLU;

	t80 = (x3013*((x3014/x3015)<<x3016));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x3049 = 91758220914611994LLU;
	static int16_t x3050 = -1;
	uint8_t x3052 = 8U;
	static volatile uint64_t t81 = 912807LLU;

	t81 = (x3049*((x3050/x3051)<<x3052));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x3074 = INT8_MAX;
	uint16_t x3075 = 47U;
	uint8_t x3076 = 1U;
	static int32_t t82 = -1840;

	t82 = (x3073*((x3074/x3075)<<x3076));

	if (t82 != -131072) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3086 = 2525483U;
	uint8_t x3088 = 1U;
	volatile uint32_t t83 = 31532U;

	t83 = (x3085*((x3086/x3087)<<x3088));

	if (t83 != 4294964418U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x3146 = -1;
	volatile int16_t x3148 = 1;
	static volatile uint32_t t84 = 274845U;

	t84 = (x3145*((x3146/x3147)<<x3148));

	if (t84 != 8U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3169 = 3567475703675341LLU;
	int64_t x3171 = -1LL;
	uint8_t x3172 = 59U;
	uint64_t t85 = 1417046561775844LLU;

	t85 = (x3169*((x3170/x3171)<<x3172));

	if (t85 != 7493989779944505344LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3181 = -1;
	uint8_t x3182 = 9U;
	int16_t x3183 = INT16_MAX;
	static int32_t x3184 = 10;
	static int32_t t86 = 1487;

	t86 = (x3181*((x3182/x3183)<<x3184));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3249 = INT8_MIN;
	uint8_t x3250 = 0U;
	volatile int32_t x3251 = INT32_MAX;
	static int16_t x3252 = 1;
	volatile int32_t t87 = -74467;

	t87 = (x3249*((x3250/x3251)<<x3252));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x3325 = INT32_MIN;
	static int8_t x3326 = -10;
	volatile int16_t x3327 = INT16_MAX;
	int8_t x3328 = 8;
	static volatile int32_t t88 = -920175;

	t88 = (x3325*((x3326/x3327)<<x3328));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x3349 = 3312;
	volatile int32_t x3350 = -30623850;
	uint64_t x3352 = 31LLU;
	volatile uint64_t t89 = 8LLU;

	t89 = (x3349*((x3350/x3351)<<x3352));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3369 = 63240106U;
	static int32_t x3370 = -13;
	uint32_t x3371 = 79194U;
	volatile uint32_t x3372 = 1U;
	uint32_t t90 = 466U;

	t90 = (x3369*((x3370/x3371)<<x3372));

	if (t90 != 338565684U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3406 = UINT64_MAX;
	int8_t x3407 = 3;

	t91 = (x3405*((x3406/x3407)<<x3408));

	if (t91 != 6148914691239313408LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3418 = 1U;
	uint8_t x3419 = 47U;
	static int64_t x3420 = 9LL;

	t92 = (x3417*((x3418/x3419)<<x3420));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x3437 = -1;
	int8_t x3438 = INT8_MIN;
	uint64_t x3439 = 9014674545522992813LLU;
	int32_t x3440 = 20;
	static volatile uint64_t t93 = 349446369283LLU;

	t93 = (x3437*((x3438/x3439)<<x3440));

	if (t93 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3449 = 2315008LLU;
	int8_t x3450 = INT8_MIN;
	static uint8_t x3452 = 4U;
	static uint64_t t94 = 869212288454LLU;

	t94 = (x3449*((x3450/x3451)<<x3452));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x3557 = -5;
	uint8_t x3558 = 70U;
	int8_t x3560 = 6;
	uint64_t t95 = 267911015566445869LLU;

	t95 = (x3557*((x3558/x3559)<<x3560));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3697 = -1;
	int32_t x3698 = INT32_MAX;
	int16_t x3699 = INT16_MAX;
	uint8_t x3700 = 0U;
	volatile int32_t t96 = -55567285;

	t96 = (x3697*((x3698/x3699)<<x3700));

	if (t96 != -65538) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x3753 = INT32_MIN;
	static int16_t x3754 = INT16_MIN;
	uint64_t x3755 = UINT64_MAX;
	volatile uint64_t t97 = 525532853515651394LLU;

	t97 = (x3753*((x3754/x3755)<<x3756));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3818 = -14097;
	int32_t x3819 = -809802314;
	int8_t x3820 = 1;
	int32_t t98 = 0;

	t98 = (x3817*((x3818/x3819)<<x3820));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3881 = -1;
	static int32_t x3882 = INT32_MIN;
	uint32_t x3883 = UINT32_MAX;
	int16_t x3884 = 0;
	volatile uint32_t t99 = 125U;

	t99 = (x3881*((x3882/x3883)<<x3884));

	if (t99 != 0U) { NG(); } else { ; }
	
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

