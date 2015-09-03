#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x101 = 4080;
uint64_t x103 = UINT64_MAX;
volatile int32_t x119 = -1;
volatile uint32_t t2 = 84563U;
static uint64_t x166 = 314197579314LLU;
volatile int64_t x237 = -528066214768383494LL;
volatile int64_t x238 = INT64_MIN;
volatile uint16_t x286 = UINT16_MAX;
int8_t x294 = -26;
volatile uint8_t x295 = 10U;
int16_t x296 = -1;
int16_t x307 = -1;
uint32_t x346 = UINT32_MAX;
int64_t x748 = -1LL;
uint64_t x762 = 1LLU;
volatile uint32_t x763 = UINT32_MAX;
int16_t x825 = INT16_MIN;
int16_t x827 = 7;
static volatile uint32_t x837 = UINT32_MAX;
uint64_t x845 = 73936LLU;
volatile int16_t x999 = INT16_MIN;
int16_t x1000 = INT16_MIN;
int8_t x1029 = INT8_MAX;
int32_t x1032 = INT32_MIN;
int16_t x1129 = -1;
uint32_t x1149 = UINT32_MAX;
volatile uint16_t x1151 = UINT16_MAX;
volatile uint32_t t20 = 3U;
int16_t x1215 = -1;
volatile uint32_t x1223 = UINT32_MAX;
uint64_t t23 = 50LLU;
volatile uint16_t x1406 = 26U;
int32_t x1407 = INT32_MAX;
uint16_t x1446 = 2757U;
int32_t x1481 = INT32_MIN;
int64_t x1482 = -1LL;
static int64_t x1510 = 1732375LL;
int8_t x1512 = -1;
uint64_t x1780 = UINT64_MAX;
int16_t x1791 = -1;
volatile int16_t x1792 = -4;
int64_t x1826 = -7155957536229954LL;
volatile uint8_t x1915 = 5U;
int8_t x1939 = -1;
volatile int32_t x2053 = 126;
uint32_t t38 = 86278U;
int16_t x2063 = 1;
uint32_t x2104 = UINT32_MAX;
volatile uint8_t x2245 = 25U;
volatile int32_t t46 = -16267574;
static uint32_t x2335 = 3U;
uint32_t x2342 = UINT32_MAX;
static int16_t x2378 = INT16_MIN;
int8_t x2421 = -1;
volatile int32_t t50 = 6381;
int8_t x2509 = INT8_MIN;
int16_t x2514 = -1784;
volatile int32_t t52 = 1;
int32_t x2665 = -1;
int8_t x2667 = INT8_MIN;
int8_t x2668 = INT8_MIN;
uint16_t x2761 = 20U;
int32_t x2764 = -1;
int32_t x2904 = -1;
int64_t x2946 = -367806067LL;
static volatile int8_t x2947 = 5;
volatile uint32_t x2948 = UINT32_MAX;
int32_t x3022 = INT32_MIN;
static volatile uint32_t x3023 = UINT32_MAX;
volatile int32_t t60 = 5172;
volatile int8_t x3091 = 43;
volatile int64_t t61 = 944045756200950LL;
int8_t x3158 = -6;
int32_t t62 = -94423981;
uint32_t x3393 = 525424056U;
int32_t x3666 = INT32_MIN;
static uint8_t x3668 = UINT8_MAX;
int32_t t67 = 30;
static int32_t x3684 = -1;
uint32_t x3717 = UINT32_MAX;
volatile int64_t x3720 = -1LL;
volatile int8_t x3788 = -1;
int16_t x3816 = -3;
volatile int32_t t72 = 4691;
uint64_t x3905 = UINT64_MAX;
volatile int64_t x3942 = -1LL;
uint64_t x4057 = 108072099473168349LLU;
int64_t x4126 = 4523173922036208430LL;
volatile int64_t x4290 = 2813658963208180943LL;
static uint8_t x4311 = 6U;
int16_t x4353 = 25;
int32_t t81 = -501;
static volatile int64_t x4426 = INT64_MAX;
uint64_t x4428 = UINT64_MAX;
uint8_t x4449 = UINT8_MAX;
int16_t x4454 = INT16_MIN;
uint64_t x4527 = UINT64_MAX;
volatile uint64_t t86 = 22263122LLU;
static int8_t x4545 = -1;
int8_t x4547 = 1;
int8_t x4571 = -1;
static int8_t x4629 = INT8_MIN;
int8_t x4674 = INT8_MIN;
int32_t t90 = 7;
int32_t x4697 = -1;
int8_t x4797 = INT8_MIN;
volatile int64_t x4850 = 1LL;
int32_t x5042 = -1;
volatile int8_t x5043 = INT8_MIN;
int8_t x5044 = INT8_MIN;
int16_t x5185 = -1;
static int8_t x5187 = -1;
int32_t x5229 = INT32_MIN;


void f0(void) {
	int16_t x97 = -1;
	uint64_t x98 = 674143779488754403LLU;
	static uint8_t x99 = 1U;
	int16_t x100 = -1;
	static uint64_t t0 = 18523028073LLU;

	t0 = ((x97/x98)>>(x99-x100));

	if (t0 != 6LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x102 = 66LLU;
	static int32_t x104 = -1;
	uint64_t t1 = 1850203LLU;

	t1 = ((x101/x102)>>(x103-x104));

	if (t1 != 61LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x117 = INT32_MIN;
	uint32_t x118 = 1368054772U;
	uint32_t x120 = UINT32_MAX;

	t2 = ((x117/x118)>>(x119-x120));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x165 = -60059006089LL;
	static int64_t x167 = -1LL;
	int64_t x168 = -1LL;
	uint64_t t3 = 30997LLU;

	t3 = ((x165/x166)>>(x167-x168));

	if (t3 != 58710649LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x239 = 1U;
	uint32_t x240 = 1U;
	int64_t t4 = 5900839970652LL;

	t4 = ((x237/x238)>>(x239-x240));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x253 = 20549372154LLU;
	int32_t x254 = -3781346;
	uint8_t x255 = 0U;
	uint8_t x256 = 0U;
	static volatile uint64_t t5 = 429429027958135LLU;

	t5 = ((x253/x254)>>(x255-x256));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x285 = -1LL;
	uint8_t x287 = UINT8_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t6 = 0LL;

	t6 = ((x285/x286)>>(x287-x288));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x293 = INT8_MIN;
	volatile int32_t t7 = 2052162;

	t7 = ((x293/x294)>>(x295-x296));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MIN;
	int8_t x308 = -1;
	volatile int64_t t8 = 2LL;

	t8 = ((x305/x306)>>(x307-x308));

	if (t8 != 281474976710656LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x345 = INT16_MAX;
	int8_t x347 = -1;
	volatile uint32_t x348 = UINT32_MAX;
	uint32_t t9 = 772045700U;

	t9 = ((x345/x346)>>(x347-x348));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x745 = INT64_MIN;
	int8_t x746 = INT8_MIN;
	int32_t x747 = -1;
	static int64_t t10 = -73230048LL;

	t10 = ((x745/x746)>>(x747-x748));

	if (t10 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x761 = 0U;
	int8_t x764 = -1;
	uint64_t t11 = 358624181206800LLU;

	t11 = ((x761/x762)>>(x763-x764));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x826 = -1;
	int16_t x828 = -1;
	volatile int32_t t12 = 44235485;

	t12 = ((x825/x826)>>(x827-x828));

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x838 = 34U;
	int16_t x839 = INT16_MIN;
	static int16_t x840 = INT16_MIN;
	volatile uint32_t t13 = 17319185U;

	t13 = ((x837/x838)>>(x839-x840));

	if (t13 != 126322567U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x846 = INT16_MAX;
	int8_t x847 = -1;
	int32_t x848 = -1;
	static volatile uint64_t t14 = 4019467310885807LLU;

	t14 = ((x845/x846)>>(x847-x848));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x997 = -1LL;
	int32_t x998 = INT32_MAX;
	int64_t t15 = -344345945713109570LL;

	t15 = ((x997/x998)>>(x999-x1000));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1030 = INT8_MIN;
	volatile int32_t x1031 = INT32_MIN;
	int32_t t16 = 813991549;

	t16 = ((x1029/x1030)>>(x1031-x1032));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1073 = 8189;
	int64_t x1074 = -722301420LL;
	uint32_t x1075 = 11U;
	int32_t x1076 = -5;
	int64_t t17 = -1681LL;

	t17 = ((x1073/x1074)>>(x1075-x1076));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1085 = -384;
	uint32_t x1086 = UINT32_MAX;
	int8_t x1087 = -1;
	int16_t x1088 = -1;
	volatile uint32_t t18 = 12U;

	t18 = ((x1085/x1086)>>(x1087-x1088));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1130 = INT32_MIN;
	static uint8_t x1131 = 2U;
	int32_t x1132 = -1;
	int32_t t19 = -232;

	t19 = ((x1129/x1130)>>(x1131-x1132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1150 = 8U;
	static uint16_t x1152 = UINT16_MAX;

	t20 = ((x1149/x1150)>>(x1151-x1152));

	if (t20 != 536870911U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1213 = UINT8_MAX;
	int32_t x1214 = INT32_MIN;
	uint32_t x1216 = UINT32_MAX;
	static int32_t t21 = -4334;

	t21 = ((x1213/x1214)>>(x1215-x1216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1221 = -1;
	uint32_t x1222 = 57639U;
	int16_t x1224 = -1;
	volatile uint32_t t22 = 914843U;

	t22 = ((x1221/x1222)>>(x1223-x1224));

	if (t22 != 74514U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1305 = 893051906277497085LLU;
	int16_t x1306 = -149;
	volatile uint64_t x1307 = UINT64_MAX;
	int32_t x1308 = -1;

	t23 = ((x1305/x1306)>>(x1307-x1308));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1321 = INT8_MIN;
	volatile uint64_t x1322 = UINT64_MAX;
	int8_t x1323 = -1;
	int64_t x1324 = -1LL;
	uint64_t t24 = 344307729837LLU;

	t24 = ((x1321/x1322)>>(x1323-x1324));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1341 = 5U;
	uint32_t x1342 = 15376525U;
	static volatile uint64_t x1343 = 9LLU;
	static uint8_t x1344 = 0U;
	uint32_t t25 = 64U;

	t25 = ((x1341/x1342)>>(x1343-x1344));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1405 = -1;
	volatile int32_t x1408 = INT32_MAX;
	int32_t t26 = 58006588;

	t26 = ((x1405/x1406)>>(x1407-x1408));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1445 = -1;
	uint32_t x1447 = UINT32_MAX;
	static int8_t x1448 = -1;
	volatile int32_t t27 = -516869646;

	t27 = ((x1445/x1446)>>(x1447-x1448));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1483 = UINT64_MAX;
	static int16_t x1484 = -1;
	volatile int64_t t28 = -1LL;

	t28 = ((x1481/x1482)>>(x1483-x1484));

	if (t28 != 2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1497 = -1;
	int16_t x1498 = INT16_MAX;
	volatile int8_t x1499 = INT8_MAX;
	int8_t x1500 = INT8_MAX;
	int32_t t29 = 1;

	t29 = ((x1497/x1498)>>(x1499-x1500));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1509 = INT8_MIN;
	uint64_t x1511 = UINT64_MAX;
	static volatile int64_t t30 = 3567274419186LL;

	t30 = ((x1509/x1510)>>(x1511-x1512));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1777 = 1047314550LL;
	volatile uint32_t x1778 = 966252886U;
	int32_t x1779 = -1;
	int64_t t31 = 183559052LL;

	t31 = ((x1777/x1778)>>(x1779-x1780));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1789 = UINT16_MAX;
	uint8_t x1790 = UINT8_MAX;
	volatile int32_t t32 = 87422;

	t32 = ((x1789/x1790)>>(x1791-x1792));

	if (t32 != 32) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1825 = 1;
	volatile uint8_t x1827 = 0U;
	static uint32_t x1828 = UINT32_MAX;
	int64_t t33 = 21397285800510292LL;

	t33 = ((x1825/x1826)>>(x1827-x1828));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1881 = INT8_MIN;
	int32_t x1882 = INT32_MAX;
	int16_t x1883 = -1;
	uint64_t x1884 = UINT64_MAX;
	int32_t t34 = 130938;

	t34 = ((x1881/x1882)>>(x1883-x1884));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1901 = 29U;
	volatile uint16_t x1902 = UINT16_MAX;
	int16_t x1903 = -1;
	int32_t x1904 = -1;
	volatile int32_t t35 = -1058;

	t35 = ((x1901/x1902)>>(x1903-x1904));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1913 = -1;
	static int16_t x1914 = INT16_MIN;
	uint8_t x1916 = 0U;
	volatile int32_t t36 = -2432;

	t36 = ((x1913/x1914)>>(x1915-x1916));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1937 = 25U;
	uint64_t x1938 = 2066785551468351606LLU;
	static int32_t x1940 = -1;
	uint64_t t37 = 53LLU;

	t37 = ((x1937/x1938)>>(x1939-x1940));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2054 = UINT32_MAX;
	int16_t x2055 = 1;
	int16_t x2056 = -1;

	t38 = ((x2053/x2054)>>(x2055-x2056));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2061 = INT16_MAX;
	uint32_t x2062 = UINT32_MAX;
	int8_t x2064 = -4;
	static volatile uint32_t t39 = 14708U;

	t39 = ((x2061/x2062)>>(x2063-x2064));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2081 = 1;
	uint64_t x2082 = 13919771LLU;
	int64_t x2083 = -1LL;
	static int16_t x2084 = -1;
	volatile uint64_t t40 = 851149LLU;

	t40 = ((x2081/x2082)>>(x2083-x2084));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2097 = INT32_MIN;
	int64_t x2098 = INT64_MIN;
	int8_t x2099 = 3;
	uint32_t x2100 = 0U;
	int64_t t41 = 29404282LL;

	t41 = ((x2097/x2098)>>(x2099-x2100));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2101 = 202157929U;
	volatile int8_t x2102 = -1;
	int8_t x2103 = 4;
	uint32_t t42 = 35184U;

	t42 = ((x2101/x2102)>>(x2103-x2104));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2105 = INT32_MIN;
	volatile int64_t x2106 = INT64_MAX;
	volatile uint8_t x2107 = 35U;
	static int8_t x2108 = 1;
	int64_t t43 = -26786048102LL;

	t43 = ((x2105/x2106)>>(x2107-x2108));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x2181 = -6;
	int64_t x2182 = -35565638046LL;
	uint64_t x2183 = UINT64_MAX;
	int8_t x2184 = -1;
	volatile int64_t t44 = -151849932092178LL;

	t44 = ((x2181/x2182)>>(x2183-x2184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2246 = INT64_MIN;
	int32_t x2247 = -1;
	uint32_t x2248 = UINT32_MAX;
	volatile int64_t t45 = 6696LL;

	t45 = ((x2245/x2246)>>(x2247-x2248));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2321 = 10;
	uint16_t x2322 = 12U;
	static volatile int32_t x2323 = INT32_MIN;
	static int32_t x2324 = INT32_MIN;

	t46 = ((x2321/x2322)>>(x2323-x2324));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2333 = -1LL;
	uint32_t x2334 = 503U;
	volatile int8_t x2336 = 1;
	int64_t t47 = 0LL;

	t47 = ((x2333/x2334)>>(x2335-x2336));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2341 = UINT8_MAX;
	volatile uint16_t x2343 = 27U;
	static int8_t x2344 = 4;
	uint32_t t48 = 62517158U;

	t48 = ((x2341/x2342)>>(x2343-x2344));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2377 = INT16_MIN;
	uint16_t x2379 = 2U;
	int64_t x2380 = -1LL;
	volatile int32_t t49 = -85428543;

	t49 = ((x2377/x2378)>>(x2379-x2380));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2422 = -1;
	static int64_t x2423 = -1LL;
	int8_t x2424 = -1;

	t50 = ((x2421/x2422)>>(x2423-x2424));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2510 = -1LL;
	uint64_t x2511 = 6LLU;
	volatile int16_t x2512 = -1;
	static int64_t t51 = 1720349432268LL;

	t51 = ((x2509/x2510)>>(x2511-x2512));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2513 = INT8_MIN;
	uint64_t x2515 = UINT64_MAX;
	static int8_t x2516 = -22;

	t52 = ((x2513/x2514)>>(x2515-x2516));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2561 = 823524978LLU;
	int16_t x2562 = INT16_MIN;
	int32_t x2563 = -1;
	volatile int16_t x2564 = -38;
	volatile uint64_t t53 = 61172LLU;

	t53 = ((x2561/x2562)>>(x2563-x2564));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2666 = UINT8_MAX;
	static volatile int32_t t54 = 209900514;

	t54 = ((x2665/x2666)>>(x2667-x2668));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2685 = INT8_MAX;
	static volatile int16_t x2686 = INT16_MIN;
	int64_t x2687 = -1LL;
	int8_t x2688 = -1;
	static volatile int32_t t55 = -39;

	t55 = ((x2685/x2686)>>(x2687-x2688));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2762 = UINT8_MAX;
	int64_t x2763 = -1LL;
	int32_t t56 = 4010;

	t56 = ((x2761/x2762)>>(x2763-x2764));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2845 = 0;
	int32_t x2846 = 1;
	int32_t x2847 = -1;
	int16_t x2848 = -1;
	static volatile int32_t t57 = -900;

	t57 = ((x2845/x2846)>>(x2847-x2848));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2901 = -10031;
	static int32_t x2902 = INT32_MAX;
	volatile int8_t x2903 = -1;
	int32_t t58 = -21681;

	t58 = ((x2901/x2902)>>(x2903-x2904));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2945 = INT16_MIN;
	int64_t t59 = 21702486143768LL;

	t59 = ((x2945/x2946)>>(x2947-x2948));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x3021 = -5040;
	int32_t x3024 = -22;

	t60 = ((x3021/x3022)>>(x3023-x3024));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3089 = -1LL;
	int8_t x3090 = INT8_MIN;
	uint64_t x3092 = UINT64_MAX;

	t61 = ((x3089/x3090)>>(x3091-x3092));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3157 = -1;
	static volatile int32_t x3159 = -1;
	int8_t x3160 = -2;

	t62 = ((x3157/x3158)>>(x3159-x3160));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3365 = INT64_MIN;
	int64_t x3366 = -42593LL;
	static uint16_t x3367 = 41U;
	int8_t x3368 = -1;
	static volatile int64_t t63 = -1044777595073412LL;

	t63 = ((x3365/x3366)>>(x3367-x3368));

	if (t63 != 49LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3394 = -1;
	volatile uint8_t x3395 = 10U;
	static int16_t x3396 = -1;
	static volatile uint32_t t64 = 0U;

	t64 = ((x3393/x3394)>>(x3395-x3396));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3513 = 25;
	int64_t x3514 = 2LL;
	int64_t x3515 = -1LL;
	int16_t x3516 = -1;
	int64_t t65 = -56155030LL;

	t65 = ((x3513/x3514)>>(x3515-x3516));

	if (t65 != 12LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3629 = INT64_MIN;
	uint64_t x3630 = 15504673627873LLU;
	static uint32_t x3631 = 2U;
	static uint64_t x3632 = UINT64_MAX;
	volatile uint64_t t66 = 2563334733339278LLU;

	t66 = ((x3629/x3630)>>(x3631-x3632));

	if (t66 != 74359LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3665 = INT16_MAX;
	uint8_t x3667 = UINT8_MAX;

	t67 = ((x3665/x3666)>>(x3667-x3668));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3681 = INT64_MAX;
	uint64_t x3682 = UINT64_MAX;
	int8_t x3683 = 62;
	volatile uint64_t t68 = 8046505839682445LLU;

	t68 = ((x3681/x3682)>>(x3683-x3684));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x3718 = -38884050;
	int32_t x3719 = -1;
	volatile uint32_t t69 = 3U;

	t69 = ((x3717/x3718)>>(x3719-x3720));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3785 = 2165131976438134060LLU;
	int8_t x3786 = INT8_MIN;
	volatile int32_t x3787 = -1;
	volatile uint64_t t70 = 12060LLU;

	t70 = ((x3785/x3786)>>(x3787-x3788));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x3797 = -1;
	static uint32_t x3798 = 1721U;
	uint64_t x3799 = UINT64_MAX;
	volatile int8_t x3800 = -1;
	uint32_t t71 = 599943948U;

	t71 = ((x3797/x3798)>>(x3799-x3800));

	if (t71 != 2495623U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3813 = INT32_MIN;
	volatile int16_t x3814 = INT16_MIN;
	int8_t x3815 = -1;

	t72 = ((x3813/x3814)>>(x3815-x3816));

	if (t72 != 16384) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3877 = INT8_MIN;
	int32_t x3878 = INT32_MAX;
	uint8_t x3879 = 7U;
	uint64_t x3880 = UINT64_MAX;
	int32_t t73 = 521104637;

	t73 = ((x3877/x3878)>>(x3879-x3880));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3906 = -18;
	int64_t x3907 = -1LL;
	static int32_t x3908 = -1;
	uint64_t t74 = 71745131LLU;

	t74 = ((x3905/x3906)>>(x3907-x3908));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3941 = INT32_MIN;
	uint8_t x3943 = 19U;
	int32_t x3944 = -1;
	int64_t t75 = -24007230887847LL;

	t75 = ((x3941/x3942)>>(x3943-x3944));

	if (t75 != 2048LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4037 = INT16_MAX;
	static volatile int32_t x4038 = INT32_MAX;
	int8_t x4039 = INT8_MIN;
	int8_t x4040 = INT8_MIN;
	int32_t t76 = -743426;

	t76 = ((x4037/x4038)>>(x4039-x4040));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4058 = INT64_MAX;
	static uint8_t x4059 = 4U;
	static uint64_t x4060 = 3LLU;
	volatile uint64_t t77 = 0LLU;

	t77 = ((x4057/x4058)>>(x4059-x4060));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4125 = INT32_MIN;
	static int32_t x4127 = -1;
	int8_t x4128 = -6;
	static int64_t t78 = -230923473LL;

	t78 = ((x4125/x4126)>>(x4127-x4128));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4289 = INT32_MIN;
	uint8_t x4291 = 35U;
	int8_t x4292 = -1;
	volatile int64_t t79 = -27925561078LL;

	t79 = ((x4289/x4290)>>(x4291-x4292));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4309 = -30058LL;
	int32_t x4310 = -4510299;
	volatile uint64_t x4312 = UINT64_MAX;
	static int64_t t80 = 1767817734459LL;

	t80 = ((x4309/x4310)>>(x4311-x4312));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4354 = INT8_MIN;
	volatile int8_t x4355 = 0;
	volatile int8_t x4356 = -1;

	t81 = ((x4353/x4354)>>(x4355-x4356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4425 = UINT8_MAX;
	static uint32_t x4427 = 37U;
	static int64_t t82 = 120LL;

	t82 = ((x4425/x4426)>>(x4427-x4428));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4450 = 10305786292356LLU;
	int16_t x4451 = 64;
	int8_t x4452 = 30;
	static volatile uint64_t t83 = 151LLU;

	t83 = ((x4449/x4450)>>(x4451-x4452));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4453 = 44LLU;
	volatile int8_t x4455 = 6;
	int64_t x4456 = -1LL;
	volatile uint64_t t84 = 36806341720611728LLU;

	t84 = ((x4453/x4454)>>(x4455-x4456));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4505 = UINT8_MAX;
	int32_t x4506 = INT32_MIN;
	uint16_t x4507 = 20U;
	int64_t x4508 = -1LL;
	int32_t t85 = 20;

	t85 = ((x4505/x4506)>>(x4507-x4508));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4525 = 507383U;
	uint64_t x4526 = UINT64_MAX;
	volatile int8_t x4528 = -1;

	t86 = ((x4525/x4526)>>(x4527-x4528));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x4546 = INT8_MIN;
	volatile int16_t x4548 = -1;
	int32_t t87 = -1;

	t87 = ((x4545/x4546)>>(x4547-x4548));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4569 = -1956985LL;
	int8_t x4570 = INT8_MIN;
	int8_t x4572 = -1;
	static volatile int64_t t88 = 2635044689177954106LL;

	t88 = ((x4569/x4570)>>(x4571-x4572));

	if (t88 != 15288LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4630 = INT64_MAX;
	uint32_t x4631 = 16U;
	static uint8_t x4632 = 0U;
	volatile int64_t t89 = -2047048020081704LL;

	t89 = ((x4629/x4630)>>(x4631-x4632));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4673 = INT8_MIN;
	uint16_t x4675 = 8U;
	uint32_t x4676 = 4U;

	t90 = ((x4673/x4674)>>(x4675-x4676));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x4681 = UINT16_MAX;
	static uint64_t x4682 = UINT64_MAX;
	uint16_t x4683 = 25U;
	uint32_t x4684 = 6U;
	static volatile uint64_t t91 = 9601LLU;

	t91 = ((x4681/x4682)>>(x4683-x4684));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4698 = INT8_MAX;
	uint8_t x4699 = 1U;
	uint16_t x4700 = 1U;
	volatile int32_t t92 = 496;

	t92 = ((x4697/x4698)>>(x4699-x4700));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4798 = INT8_MIN;
	int16_t x4799 = -1;
	int16_t x4800 = -1;
	static volatile int32_t t93 = 751932053;

	t93 = ((x4797/x4798)>>(x4799-x4800));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4849 = 13578312U;
	uint32_t x4851 = 0U;
	int8_t x4852 = -1;
	volatile int64_t t94 = -3156274853098LL;

	t94 = ((x4849/x4850)>>(x4851-x4852));

	if (t94 != 6789156LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4897 = 0U;
	int8_t x4898 = -1;
	uint32_t x4899 = UINT32_MAX;
	int8_t x4900 = -3;
	volatile int32_t t95 = -11696512;

	t95 = ((x4897/x4898)>>(x4899-x4900));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5041 = 29148U;
	uint32_t t96 = 2067301771U;

	t96 = ((x5041/x5042)>>(x5043-x5044));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5069 = UINT32_MAX;
	volatile int32_t x5070 = INT32_MIN;
	volatile uint8_t x5071 = 0U;
	uint32_t x5072 = UINT32_MAX;
	uint32_t t97 = 26300543U;

	t97 = ((x5069/x5070)>>(x5071-x5072));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5186 = UINT32_MAX;
	int16_t x5188 = -1;
	uint32_t t98 = 4U;

	t98 = ((x5185/x5186)>>(x5187-x5188));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5230 = 349915108628347LLU;
	int64_t x5231 = -1LL;
	int64_t x5232 = -1LL;
	volatile uint64_t t99 = 61661711LLU;

	t99 = ((x5229/x5230)>>(x5231-x5232));

	if (t99 != 52717LLU) { NG(); } else { ; }
	
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

