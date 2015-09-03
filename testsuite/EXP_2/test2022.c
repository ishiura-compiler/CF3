#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x65 = -1;
volatile int64_t x89 = INT64_MIN;
int8_t x91 = -1;
int64_t t2 = INT64_MAX;
int32_t x113 = 26693330;
uint32_t x115 = 155110U;
int32_t x116 = 5;
uint64_t x138 = 98224708757LLU;
static int64_t x139 = INT64_MIN;
uint8_t x339 = 6U;
uint16_t x359 = UINT16_MAX;
uint32_t x379 = 320820U;
volatile uint32_t t9 = 2583U;
uint64_t x637 = 254863689033881LLU;
static volatile int8_t x640 = 0;
uint64_t t16 = 245273654605733LLU;
volatile uint8_t x964 = 6U;
int16_t x969 = -1;
static uint8_t x972 = 4U;
volatile int32_t x1059 = INT32_MIN;
int64_t t23 = 3780740373399LL;
uint16_t x1120 = 5U;
int16_t x1138 = INT16_MIN;
int64_t x1139 = -1LL;
volatile int64_t t26 = -3LL;
volatile int8_t x1215 = INT8_MIN;
volatile uint64_t x1247 = 19982637299LLU;
int64_t x1261 = INT64_MIN;
static int64_t t31 = 4268122610946777739LL;
static int64_t x1296 = 1LL;
volatile uint32_t t32 = 123626629U;
uint64_t x1318 = UINT64_MAX;
volatile uint32_t x1329 = 9U;
volatile int16_t x1330 = -3893;
volatile uint16_t x1332 = 3U;
volatile int64_t x1478 = 66656101315365LL;
volatile int64_t t38 = -2227026LL;
uint8_t x1588 = 1U;
static int8_t x1657 = -1;
static int64_t x1685 = -4LL;
int64_t t41 = -94260002885LL;
int8_t x1702 = -20;
int32_t x1746 = -1;
static volatile int64_t t44 = -2LL;
volatile uint16_t x1770 = 275U;
volatile int8_t x1773 = -41;
volatile int32_t t46 = 1;
static volatile int32_t x1790 = INT32_MAX;
int32_t x1791 = INT32_MIN;
static uint16_t x1827 = 102U;
int32_t x1842 = 55650981;
static uint64_t x1865 = 1601612678251LLU;
static uint64_t t52 = 14004532317819LLU;
volatile uint32_t x1873 = UINT32_MAX;
int8_t x1874 = INT8_MIN;
int8_t x1876 = 0;
int64_t x1915 = 0LL;
static volatile uint8_t x1992 = 3U;
uint8_t x2100 = 0U;
static uint64_t x2250 = 2601LLU;
static int8_t x2318 = INT8_MAX;
int64_t x2442 = -1736743LL;
uint8_t x2491 = 109U;
uint64_t t67 = 5155201715LLU;
int8_t x2586 = INT8_MIN;
uint8_t x2649 = 4U;
uint32_t x2650 = 1174254U;
uint8_t x2652 = 1U;
int8_t x2776 = 0;
volatile int32_t x2813 = -1;
int32_t x2817 = INT32_MAX;
uint64_t x2819 = 23152939731305383LLU;
uint64_t t73 = 3LLU;
int16_t x2876 = 0;
int8_t x3005 = -42;
int16_t x3008 = 0;
int16_t x3021 = INT16_MIN;
volatile uint8_t x3024 = 0U;
volatile int64_t x3035 = 1823132324LL;
int32_t x3252 = 0;
int32_t x3253 = INT32_MAX;
volatile uint64_t t86 = 189435591LLU;
int16_t x3268 = 0;
volatile int64_t t88 = 5583185LL;
int64_t x3450 = INT64_MAX;
uint64_t t92 = 350073096104398099LLU;
uint64_t x3455 = 35112995LLU;
int32_t x3602 = -18529683;
volatile int8_t x3603 = 23;
uint8_t x3604 = 3U;
static volatile int64_t t95 = 146LL;
volatile uint32_t x3729 = UINT32_MAX;
volatile int8_t x3733 = INT8_MIN;


void f0(void) {
	uint32_t x21 = 131985395U;
	int8_t x22 = -1;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = 14U;
	uint32_t t0 = 330349575U;

	t0 = ((x21^(x22|x23))>>x24);

	if (t0 != 254088U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x66 = -1;
	uint16_t x67 = 2U;
	static int8_t x68 = 2;
	volatile int32_t t1 = 0;

	t1 = ((x65^(x66|x67))>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x90 = INT8_MIN;
	static int8_t x92 = 0;

	t2 = ((x89^(x90|x91))>>x92);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x93 = INT32_MIN;
	static int64_t x94 = -1LL;
	uint16_t x95 = UINT16_MAX;
	uint8_t x96 = 38U;
	static volatile int64_t t3 = 429843264LL;

	t3 = ((x93^(x94|x95))>>x96);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x114 = 66U;
	static volatile uint32_t t4 = 25778746U;

	t4 = ((x113^(x114|x115))>>x116);

	if (t4 != 829593U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x137 = INT8_MIN;
	static int8_t x140 = 1;
	static uint64_t t5 = 2649987152320505717LLU;

	t5 = ((x137^(x138|x139))>>x140);

	if (t5 != 4611685969315033482LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x313 = 281967U;
	volatile uint32_t x314 = 4242827U;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 1LLU;
	volatile uint32_t t6 = 125923251U;

	t6 = ((x313^(x314|x315))>>x316);

	if (t6 != 2147350642U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x337 = -124;
	int64_t x338 = -1LL;
	int64_t x340 = 20LL;
	volatile int64_t t7 = -6911LL;

	t7 = ((x337^(x338|x339))>>x340);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 7U;
	static uint16_t x360 = 1U;
	int32_t t8 = 2891895;

	t8 = ((x357^(x358|x359))>>x360);

	if (t8 != 32640) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x377 = UINT8_MAX;
	int8_t x378 = INT8_MIN;
	static uint8_t x380 = 1U;

	t9 = ((x377^(x378|x379))>>x380);

	if (t9 != 2147483557U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x417 = 36677718LLU;
	int8_t x418 = -1;
	volatile uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = 54;
	volatile uint64_t t10 = 284LLU;

	t10 = ((x417^(x418|x419))>>x420);

	if (t10 != 1023LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x638 = 73LLU;
	int32_t x639 = -1;
	uint64_t t11 = 31LLU;

	t11 = ((x637^(x638|x639))>>x640);

	if (t11 != 18446489210020517734LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x689 = INT64_MAX;
	int16_t x690 = 63;
	int8_t x691 = INT8_MAX;
	volatile uint16_t x692 = 1U;
	int64_t t12 = 20735192744972LL;

	t12 = ((x689^(x690|x691))>>x692);

	if (t12 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x833 = UINT16_MAX;
	static uint16_t x834 = 1001U;
	uint64_t x835 = UINT64_MAX;
	uint8_t x836 = 0U;
	volatile uint64_t t13 = 1120381667581875LLU;

	t13 = ((x833^(x834|x835))>>x836);

	if (t13 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x905 = INT32_MIN;
	int64_t x906 = INT64_MIN;
	static volatile int16_t x907 = INT16_MIN;
	int8_t x908 = 2;
	volatile int64_t t14 = -43798322LL;

	t14 = ((x905^(x906|x907))>>x908);

	if (t14 != 536862720LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x909 = 2LLU;
	uint32_t x910 = UINT32_MAX;
	volatile uint64_t x911 = UINT64_MAX;
	volatile int32_t x912 = 8;
	volatile uint64_t t15 = 3863451747286768LLU;

	t15 = ((x909^(x910|x911))>>x912);

	if (t15 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x917 = INT32_MIN;
	uint64_t x918 = 32391897095LLU;
	static volatile int64_t x919 = -1LL;
	uint64_t x920 = 5LLU;

	t16 = ((x917^(x918|x919))>>x920);

	if (t16 != 67108863LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x925 = -1;
	static int8_t x926 = 23;
	int64_t x927 = -1LL;
	int8_t x928 = 0;
	int64_t t17 = 41481536468577LL;

	t17 = ((x925^(x926|x927))>>x928);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x953 = -1;
	int64_t x954 = 128311082LL;
	int32_t x955 = -1;
	static volatile uint64_t x956 = 37LLU;
	volatile int64_t t18 = -3670750LL;

	t18 = ((x953^(x954|x955))>>x956);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x961 = 1;
	volatile int64_t x962 = INT64_MAX;
	uint8_t x963 = UINT8_MAX;
	static int64_t t19 = 789152388664LL;

	t19 = ((x961^(x962|x963))>>x964);

	if (t19 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x970 = INT8_MIN;
	volatile uint16_t x971 = 3U;
	volatile int32_t t20 = 1;

	t20 = ((x969^(x970|x971))>>x972);

	if (t20 != 7) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x973 = 2U;
	volatile uint64_t x974 = UINT64_MAX;
	uint8_t x975 = UINT8_MAX;
	volatile uint16_t x976 = 1U;
	static uint64_t t21 = 6328856271529849243LLU;

	t21 = ((x973^(x974|x975))>>x976);

	if (t21 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1001 = -24;
	int16_t x1002 = INT16_MIN;
	static int32_t x1003 = -1;
	static int8_t x1004 = 0;
	int32_t t22 = 15700658;

	t22 = ((x1001^(x1002|x1003))>>x1004);

	if (t22 != 23) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1057 = INT32_MIN;
	int64_t x1058 = -104LL;
	uint8_t x1060 = 3U;

	t23 = ((x1057^(x1058|x1059))>>x1060);

	if (t23 != 268435443LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1097 = -1026218;
	int64_t x1098 = INT64_MAX;
	static uint64_t x1099 = 2198301758903LLU;
	int8_t x1100 = 15;
	uint64_t t24 = 32253432964LLU;

	t24 = ((x1097^(x1098|x1099))>>x1100);

	if (t24 != 281474976710687LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1117 = UINT64_MAX;
	int64_t x1118 = INT64_MIN;
	volatile uint64_t x1119 = 75445802LLU;
	volatile uint64_t t25 = 224LLU;

	t25 = ((x1117^(x1118|x1119))>>x1120);

	if (t25 != 288230376149354062LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1137 = INT16_MIN;
	uint64_t x1140 = 4LLU;

	t26 = ((x1137^(x1138|x1139))>>x1140);

	if (t26 != 2047LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1201 = 5;
	uint64_t x1202 = 64351135LLU;
	static uint64_t x1203 = 32414LLU;
	static int8_t x1204 = 6;
	uint64_t t27 = 19431LLU;

	t27 = ((x1201^(x1202|x1203))>>x1204);

	if (t27 != 1005566LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1213 = INT32_MIN;
	int8_t x1214 = INT8_MIN;
	uint8_t x1216 = 17U;
	int32_t t28 = -39;

	t28 = ((x1213^(x1214|x1215))>>x1216);

	if (t28 != 16383) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1237 = INT64_MIN;
	static int64_t x1238 = INT64_MAX;
	int8_t x1239 = INT8_MIN;
	uint8_t x1240 = 7U;
	volatile int64_t t29 = -19752315139LL;

	t29 = ((x1237^(x1238|x1239))>>x1240);

	if (t29 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1245 = 35967;
	int8_t x1246 = 5;
	int8_t x1248 = 0;
	static volatile uint64_t t30 = 826364608426038LLU;

	t30 = ((x1245^(x1246|x1247))>>x1248);

	if (t30 != 19982603400LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x1262 = INT16_MIN;
	volatile int32_t x1263 = -1;
	uint8_t x1264 = 2U;

	t31 = ((x1261^(x1262|x1263))>>x1264);

	if (t31 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1293 = 1670U;
	int8_t x1294 = INT8_MIN;
	uint8_t x1295 = 1U;

	t32 = ((x1293^(x1294|x1295))>>x1296);

	if (t32 != 2147482755U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1317 = 73359118;
	static int16_t x1319 = 3503;
	static uint8_t x1320 = 13U;
	volatile uint64_t t33 = 1LLU;

	t33 = ((x1317^(x1318|x1319))>>x1320);

	if (t33 != 2251799813676293LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1331 = 225;
	volatile uint32_t t34 = 1857908U;

	t34 = ((x1329^(x1330|x1331))>>x1332);

	if (t34 != 536870428U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1401 = -1LL;
	uint64_t x1402 = 138650LLU;
	static int64_t x1403 = -241LL;
	int8_t x1404 = 13;
	uint64_t t35 = 7589509LLU;

	t35 = ((x1401^(x1402|x1403))>>x1404);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1477 = 122LL;
	static uint8_t x1479 = UINT8_MAX;
	volatile uint8_t x1480 = 2U;
	volatile int64_t t36 = -366LL;

	t36 = ((x1477^(x1478|x1479))>>x1480);

	if (t36 != 16664025328865LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1485 = INT8_MIN;
	uint16_t x1486 = 2066U;
	uint64_t x1487 = 92251773482116LLU;
	static volatile uint32_t x1488 = 4U;
	uint64_t t37 = 197450796LLU;

	t37 = ((x1485^(x1486|x1487))>>x1488);

	if (t37 != 1152915738871004209LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1529 = -45LL;
	static int32_t x1530 = -1;
	int8_t x1531 = 3;
	int16_t x1532 = 5;

	t38 = ((x1529^(x1530|x1531))>>x1532);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1585 = UINT16_MAX;
	uint32_t x1586 = 353982U;
	uint32_t x1587 = 18U;
	static uint32_t t39 = 56U;

	t39 = ((x1585^(x1586|x1587))>>x1588);

	if (t39 != 183456U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1658 = -1;
	volatile int64_t x1659 = -1LL;
	int8_t x1660 = 44;
	int64_t t40 = 3494961714852679LL;

	t40 = ((x1657^(x1658|x1659))>>x1660);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1686 = UINT8_MAX;
	volatile int64_t x1687 = INT64_MIN;
	volatile int8_t x1688 = 0;

	t41 = ((x1685^(x1686|x1687))>>x1688);

	if (t41 != 9223372036854775555LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1701 = 67U;
	uint64_t x1703 = UINT64_MAX;
	volatile int8_t x1704 = 16;
	static volatile uint64_t t42 = 15LLU;

	t42 = ((x1701^(x1702|x1703))>>x1704);

	if (t42 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1709 = -1;
	int8_t x1710 = INT8_MIN;
	int64_t x1711 = INT64_MIN;
	volatile uint8_t x1712 = 34U;
	int64_t t43 = 18625LL;

	t43 = ((x1709^(x1710|x1711))>>x1712);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1745 = -1;
	int64_t x1747 = INT64_MIN;
	static int32_t x1748 = 1;

	t44 = ((x1745^(x1746|x1747))>>x1748);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1769 = INT8_MIN;
	static volatile int32_t x1771 = -1;
	static int16_t x1772 = 1;
	volatile int32_t t45 = -5241130;

	t45 = ((x1769^(x1770|x1771))>>x1772);

	if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1774 = INT16_MIN;
	int32_t x1775 = -47420;
	uint32_t x1776 = 25U;

	t46 = ((x1773^(x1774|x1775))>>x1776);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1789 = UINT64_MAX;
	int64_t x1792 = 6LL;
	uint64_t t47 = 8500547266045713271LLU;

	t47 = ((x1789^(x1790|x1791))>>x1792);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1793 = 0;
	uint16_t x1794 = 0U;
	uint64_t x1795 = 33141597536737659LLU;
	uint8_t x1796 = 58U;
	uint64_t t48 = 529203961855633052LLU;

	t48 = ((x1793^(x1794|x1795))>>x1796);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1801 = UINT8_MAX;
	volatile int16_t x1802 = 1977;
	int8_t x1803 = 1;
	uint64_t x1804 = 0LLU;
	int32_t t49 = 35;

	t49 = ((x1801^(x1802|x1803))>>x1804);

	if (t49 != 1862) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1825 = -1;
	int64_t x1826 = INT64_MIN;
	int8_t x1828 = 1;
	int64_t t50 = -13966140LL;

	t50 = ((x1825^(x1826|x1827))>>x1828);

	if (t50 != 4611686018427387852LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x1841 = INT64_MAX;
	int32_t x1843 = INT32_MAX;
	int16_t x1844 = 5;
	volatile int64_t t51 = 122316527LL;

	t51 = ((x1841^(x1842|x1843))>>x1844);

	if (t51 != 288230376084602880LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1866 = -7;
	volatile int32_t x1867 = -13;
	static uint8_t x1868 = 10U;

	t52 = ((x1865^(x1866|x1867))>>x1868);

	if (t52 != 18014396945407102LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x1875 = 495337045883270LLU;
	uint64_t t53 = 180705080217920283LLU;

	t53 = ((x1873^(x1874|x1875))>>x1876);

	if (t53 != 18446744069414584441LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1913 = INT16_MAX;
	volatile uint16_t x1914 = UINT16_MAX;
	static int8_t x1916 = 27;
	int64_t t54 = 33427LL;

	t54 = ((x1913^(x1914|x1915))>>x1916);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1965 = 0LLU;
	int8_t x1966 = -14;
	int16_t x1967 = 61;
	volatile uint32_t x1968 = 12U;
	static volatile uint64_t t55 = 20841921619870947LLU;

	t55 = ((x1965^(x1966|x1967))>>x1968);

	if (t55 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x1989 = 66193557992LLU;
	int32_t x1990 = -1;
	volatile int64_t x1991 = INT64_MIN;
	volatile uint64_t t56 = 32696620723LLU;

	t56 = ((x1989^(x1990|x1991))>>x1992);

	if (t56 != 2305843000939499202LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2029 = 5583U;
	int16_t x2030 = -1;
	uint32_t x2031 = 1012U;
	volatile uint16_t x2032 = 1U;
	uint32_t t57 = 1U;

	t57 = ((x2029^(x2030|x2031))>>x2032);

	if (t57 != 2147480856U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2097 = -1;
	int8_t x2098 = INT8_MAX;
	int32_t x2099 = INT32_MIN;
	static int32_t t58 = -181676769;

	t58 = ((x2097^(x2098|x2099))>>x2100);

	if (t58 != 2147483520) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2245 = INT32_MIN;
	volatile int16_t x2246 = -10;
	int8_t x2247 = 0;
	int8_t x2248 = 1;
	volatile int32_t t59 = -1477;

	t59 = ((x2245^(x2246|x2247))>>x2248);

	if (t59 != 1073741819) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2249 = 1290780283LLU;
	int64_t x2251 = 175813582193LL;
	static volatile int16_t x2252 = 1;
	static volatile uint64_t t60 = 1412LLU;

	t60 = ((x2249^(x2250|x2251))>>x2252);

	if (t60 != 87271993473LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2317 = INT64_MAX;
	uint8_t x2319 = 3U;
	int8_t x2320 = 6;
	volatile int64_t t61 = -11922949LL;

	t61 = ((x2317^(x2318|x2319))>>x2320);

	if (t61 != 144115188075855870LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2337 = -1;
	static uint64_t x2338 = 175976952LLU;
	static int64_t x2339 = 933457822LL;
	uint16_t x2340 = 10U;
	volatile uint64_t t62 = 3414651387LLU;

	t62 = ((x2337^(x2338|x2339))>>x2340);

	if (t62 != 18014398508433440LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2357 = 1919770LLU;
	volatile uint64_t x2358 = UINT64_MAX;
	int8_t x2359 = -1;
	uint8_t x2360 = 7U;
	static volatile uint64_t t63 = 150796609063181LLU;

	t63 = ((x2357^(x2358|x2359))>>x2360);

	if (t63 != 144115188075840873LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x2441 = -1;
	uint32_t x2443 = 148107U;
	uint8_t x2444 = 9U;
	volatile int64_t t64 = 0LL;

	t64 = ((x2441^(x2442|x2443))>>x2444);

	if (t64 != 3136LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2473 = 103U;
	static volatile int8_t x2474 = INT8_MAX;
	uint16_t x2475 = UINT16_MAX;
	uint8_t x2476 = 1U;
	volatile int32_t t65 = -3504;

	t65 = ((x2473^(x2474|x2475))>>x2476);

	if (t65 != 32716) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2481 = -1;
	static int32_t x2482 = INT32_MIN;
	int8_t x2483 = INT8_MAX;
	uint16_t x2484 = 18U;
	volatile int32_t t66 = 149844796;

	t66 = ((x2481^(x2482|x2483))>>x2484);

	if (t66 != 8191) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2489 = -1LL;
	uint64_t x2490 = 21717429829961LLU;
	int16_t x2492 = 1;

	t67 = ((x2489^(x2490|x2491))>>x2492);

	if (t67 != 9223361178139860809LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2585 = -1;
	uint16_t x2587 = 66U;
	uint16_t x2588 = 24U;
	int32_t t68 = -503324620;

	t68 = ((x2585^(x2586|x2587))>>x2588);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2651 = 1;
	uint32_t t69 = 117793U;

	t69 = ((x2649^(x2650|x2651))>>x2652);

	if (t69 != 587125U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x2693 = 33U;
	int32_t x2694 = INT32_MAX;
	uint16_t x2695 = UINT16_MAX;
	uint8_t x2696 = 1U;
	int32_t t70 = -9;

	t70 = ((x2693^(x2694|x2695))>>x2696);

	if (t70 != 1073741807) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2773 = -803293;
	static int16_t x2774 = 0;
	uint64_t x2775 = 3424LLU;
	uint64_t t71 = 419LLU;

	t71 = ((x2773^(x2774|x2775))>>x2776);

	if (t71 != 18446744073708745539LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2814 = 63352052LLU;
	volatile int64_t x2815 = -1LL;
	volatile uint32_t x2816 = 43U;
	volatile uint64_t t72 = 19120625931162147LLU;

	t72 = ((x2813^(x2814|x2815))>>x2816);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2818 = -1;
	uint8_t x2820 = 0U;

	t73 = ((x2817^(x2818|x2819))>>x2820);

	if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2861 = UINT32_MAX;
	uint64_t x2862 = 13944363764340LLU;
	volatile int64_t x2863 = 36280677LL;
	static int8_t x2864 = 3;
	uint64_t t74 = 1172378872LLU;

	t74 = ((x2861^(x2862|x2863))>>x2864);

	if (t74 != 1742852899985LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2869 = INT64_MIN;
	int16_t x2870 = -29;
	int64_t x2871 = -102856726056353LL;
	volatile int8_t x2872 = 0;
	volatile int64_t t75 = INT64_MAX;

	t75 = ((x2869^(x2870|x2871))>>x2872);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2873 = -1LL;
	uint32_t x2874 = UINT32_MAX;
	uint64_t x2875 = UINT64_MAX;
	uint64_t t76 = 104082063017785LLU;

	t76 = ((x2873^(x2874|x2875))>>x2876);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x3001 = -20;
	volatile uint16_t x3002 = UINT16_MAX;
	uint32_t x3003 = UINT32_MAX;
	uint8_t x3004 = 17U;
	volatile uint32_t t77 = 847762U;

	t77 = ((x3001^(x3002|x3003))>>x3004);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3006 = INT8_MAX;
	uint64_t x3007 = 235542422985LLU;
	uint64_t t78 = 2199492686485LLU;

	t78 = ((x3005^(x3006|x3007))>>x3008);

	if (t78 != 18446743838167128617LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3022 = INT32_MIN;
	static uint8_t x3023 = 6U;
	int32_t t79 = 7;

	t79 = ((x3021^(x3022|x3023))>>x3024);

	if (t79 != 2147450886) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3025 = -318;
	int32_t x3026 = 3799979;
	int8_t x3027 = -7;
	int32_t x3028 = 5;
	int32_t t80 = -327346363;

	t80 = ((x3025^(x3026|x3027))>>x3028);

	if (t80 != 9) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x3033 = 53U;
	uint64_t x3034 = 176LLU;
	static uint16_t x3036 = 8U;
	static uint64_t t81 = 3653936047LLU;

	t81 = ((x3033^(x3034|x3035))>>x3036);

	if (t81 != 7121610LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3077 = -1039657;
	int32_t x3078 = 41232;
	volatile int8_t x3079 = -1;
	uint16_t x3080 = 5U;
	volatile int32_t t82 = -1;

	t82 = ((x3077^(x3078|x3079))>>x3080);

	if (t82 != 32489) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3173 = -1;
	uint32_t x3174 = UINT32_MAX;
	volatile int16_t x3175 = -252;
	uint32_t x3176 = 14U;
	static volatile uint32_t t83 = 45563460U;

	t83 = ((x3173^(x3174|x3175))>>x3176);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3201 = INT8_MIN;
	int8_t x3202 = INT8_MAX;
	uint64_t x3203 = UINT64_MAX;
	int8_t x3204 = 5;
	uint64_t t84 = 0LLU;

	t84 = ((x3201^(x3202|x3203))>>x3204);

	if (t84 != 3LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3249 = 25;
	int32_t x3250 = 12271281;
	volatile int16_t x3251 = 0;
	volatile int32_t t85 = 9;

	t85 = ((x3249^(x3250|x3251))>>x3252);

	if (t85 != 12271272) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x3254 = UINT64_MAX;
	volatile uint32_t x3255 = 230422U;
	static uint8_t x3256 = 14U;

	t86 = ((x3253^(x3254|x3255))>>x3256);

	if (t86 != 1125899906711552LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x3265 = INT16_MAX;
	uint32_t x3266 = 2U;
	uint8_t x3267 = 1U;
	volatile uint32_t t87 = 354U;

	t87 = ((x3265^(x3266|x3267))>>x3268);

	if (t87 != 32764U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3293 = INT8_MIN;
	int64_t x3294 = INT64_MIN;
	uint8_t x3295 = 63U;
	uint8_t x3296 = 1U;

	t88 = ((x3293^(x3294|x3295))>>x3296);

	if (t88 != 4611686018427387871LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x3297 = 14;
	int64_t x3298 = INT64_MIN;
	volatile uint64_t x3299 = 811409926LLU;
	static uint8_t x3300 = 19U;
	static uint64_t t89 = 1LLU;

	t89 = ((x3297^(x3298|x3299))>>x3300);

	if (t89 != 17592186045963LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3353 = INT16_MIN;
	volatile int32_t x3354 = -157683;
	static int64_t x3355 = INT64_MIN;
	static uint32_t x3356 = 0U;
	int64_t t90 = 0LL;

	t90 = ((x3353^(x3354|x3355))>>x3356);

	if (t90 != 137229LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3381 = 9;
	uint64_t x3382 = 10751125LLU;
	uint16_t x3383 = 5U;
	uint8_t x3384 = 12U;
	volatile uint64_t t91 = 955348589986LLU;

	t91 = ((x3381^(x3382|x3383))>>x3384);

	if (t91 != 2624LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x3449 = UINT8_MAX;
	uint64_t x3451 = UINT64_MAX;
	uint32_t x3452 = 3U;

	t92 = ((x3449^(x3450|x3451))>>x3452);

	if (t92 != 2305843009213693920LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3453 = -1;
	int64_t x3454 = INT64_MIN;
	int8_t x3456 = 2;
	static volatile uint64_t t93 = 704LLU;

	t93 = ((x3453^(x3454|x3455))>>x3456);

	if (t93 != 2305843009204915703LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3601 = INT16_MIN;
	int32_t t94 = -1850;

	t94 = ((x3601^(x3602|x3603))>>x3604);

	if (t94 != 2316367) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3633 = INT16_MIN;
	static int64_t x3634 = -48061385LL;
	volatile int16_t x3635 = INT16_MAX;
	volatile int16_t x3636 = 54;

	t95 = ((x3633^(x3634|x3635))>>x3636);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3669 = 5842965620LLU;
	volatile int16_t x3670 = -1;
	uint64_t x3671 = UINT64_MAX;
	uint8_t x3672 = 52U;
	volatile uint64_t t96 = 93LLU;

	t96 = ((x3669^(x3670|x3671))>>x3672);

	if (t96 != 4095LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x3730 = 43U;
	static int16_t x3731 = INT16_MIN;
	int8_t x3732 = 0;
	uint32_t t97 = 0U;

	t97 = ((x3729^(x3730|x3731))>>x3732);

	if (t97 != 32724U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3734 = -2;
	volatile int16_t x3735 = INT16_MIN;
	uint16_t x3736 = 31U;
	volatile int32_t t98 = -91352;

	t98 = ((x3733^(x3734|x3735))>>x3736);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x3865 = 54LLU;
	static int16_t x3866 = INT16_MAX;
	uint16_t x3867 = UINT16_MAX;
	static int8_t x3868 = 1;
	volatile uint64_t t99 = 7LLU;

	t99 = ((x3865^(x3866|x3867))>>x3868);

	if (t99 != 32740LLU) { NG(); } else { ; }
	
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

