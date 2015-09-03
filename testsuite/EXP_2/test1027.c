#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x25 = 30U;
int8_t x75 = 0;
static int64_t x76 = 870090LL;
volatile int16_t x102 = 12422;
uint64_t x162 = 1767831018697LLU;
volatile int64_t x168 = INT64_MIN;
volatile uint64_t t5 = 31044LLU;
int32_t x173 = -228;
static int64_t x226 = 263065LL;
static volatile int16_t x228 = INT16_MIN;
volatile int8_t x248 = -7;
uint32_t x395 = 25U;
static int8_t x440 = 10;
static int16_t x709 = -3156;
int32_t x725 = INT32_MIN;
int8_t x726 = 18;
int8_t x871 = 0;
uint16_t x941 = 24U;
int8_t x943 = 18;
int8_t x944 = INT8_MAX;
static int64_t x978 = 23834476180208863LL;
int64_t x1148 = INT64_MIN;
int64_t x1221 = INT64_MAX;
static volatile uint32_t x1369 = 29U;
static uint8_t x1371 = 2U;
static int64_t x1421 = INT64_MAX;
static volatile uint64_t t27 = 904557LLU;
uint8_t x1506 = 17U;
static uint16_t x1535 = 4U;
uint16_t x1536 = 20055U;
volatile int8_t x1648 = 56;
volatile uint16_t x1705 = 1017U;
uint64_t x1706 = 2881668415474592202LLU;
volatile uint64_t t32 = 3627192457LLU;
static int8_t x1756 = -14;
volatile int16_t x1808 = 2;
int32_t t34 = 3715;
int64_t x1818 = INT64_MAX;
uint8_t x1819 = 6U;
uint8_t x1843 = 1U;
static int32_t t37 = 0;
int32_t x1893 = 1998;
int8_t x1896 = INT8_MAX;
uint32_t t39 = 29430U;
int8_t x1899 = 26;
uint32_t x1989 = 13459236U;
int64_t x2033 = -1LL;
static volatile int64_t t42 = 3740LL;
static volatile int8_t x2048 = 0;
volatile int8_t x2103 = 1;
static uint16_t x2181 = 0U;
uint8_t x2190 = UINT8_MAX;
static volatile int64_t t47 = 996936LL;
static int16_t x2249 = -1;
volatile int32_t x2257 = -1;
static int32_t x2258 = 0;
static uint16_t x2260 = 380U;
volatile int64_t x2289 = INT64_MIN;
volatile int16_t x2292 = -1;
static volatile int64_t t50 = 16930789573LL;
static int32_t x2345 = INT32_MIN;
uint32_t x2346 = UINT32_MAX;
volatile uint32_t x2377 = 714663075U;
uint8_t x2378 = UINT8_MAX;
int8_t x2380 = INT8_MIN;
static int16_t x2420 = -1;
volatile uint16_t x2429 = UINT16_MAX;
uint8_t x2523 = 1U;
uint8_t x2526 = 11U;
int8_t x2528 = INT8_MAX;
uint16_t x2553 = 638U;
uint64_t x2555 = 0LLU;
volatile uint32_t x2660 = UINT32_MAX;
int64_t x2672 = INT64_MIN;
volatile int16_t x2686 = INT16_MAX;
volatile int16_t x2705 = INT16_MAX;
static int64_t x2707 = 0LL;
volatile int64_t x2708 = INT64_MIN;
int16_t x2752 = INT16_MIN;
static uint16_t x2793 = 11U;
uint8_t x2804 = 6U;
static int64_t t70 = -34LL;
int8_t x2833 = INT8_MAX;
int32_t x2835 = 1;
static volatile uint16_t x2867 = 7U;
volatile int64_t t73 = 4228325452660742603LL;
static volatile uint16_t x2901 = 402U;
uint8_t x3001 = UINT8_MAX;
uint8_t x3024 = UINT8_MAX;
int64_t x3028 = -27278078LL;
volatile uint8_t x3081 = UINT8_MAX;
static volatile int32_t x3083 = 10;
int16_t x3112 = INT16_MAX;
uint32_t x3152 = UINT32_MAX;
uint64_t x3175 = 2LLU;
volatile int64_t t85 = 2863572LL;
volatile int64_t x3274 = 0LL;
static volatile int64_t t86 = 4704962844LL;
static uint32_t x3285 = UINT32_MAX;
uint64_t x3286 = 12333086LLU;
int16_t x3287 = 7;
int64_t x3324 = 84202857037390855LL;
int64_t t88 = 172117LL;
int16_t x3334 = 3179;
uint8_t x3339 = 1U;
int8_t x3457 = INT8_MIN;
uint64_t t93 = 540091754691369486LLU;
uint8_t x3535 = 2U;
static uint32_t t94 = 19628U;
int32_t t95 = -6652736;
int16_t x3558 = INT16_MAX;
int16_t x3560 = -1;
static uint64_t x3601 = UINT64_MAX;
volatile int16_t x3614 = INT16_MAX;
uint8_t x3615 = 3U;
static int8_t x3627 = 2;
static volatile int32_t t99 = -57706242;


void f0(void) {
	static uint32_t x26 = 70635U;
	uint32_t x27 = 7U;
	static int8_t x28 = -1;
	volatile uint32_t t0 = 24U;

	t0 = ((x25+(x26>>x27))^x28);

	if (t0 != 4294966714U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MAX;
	uint8_t x55 = 4U;
	static int8_t x56 = INT8_MIN;
	static volatile int64_t t1 = -8032637LL;

	t1 = ((x53+(x54>>x55))^x56);

	if (t1 != -576460750155939713LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = UINT32_MAX;
	volatile int64_t t2 = 54699346740LL;

	t2 = ((x73+(x74>>x75))^x76);

	if (t2 != 4294097333LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x101 = UINT16_MAX;
	uint8_t x103 = 1U;
	static int64_t x104 = -7LL;
	int64_t t3 = -246971694911575698LL;

	t3 = ((x101+(x102>>x103))^x104);

	if (t3 != -71749LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x161 = INT32_MAX;
	uint8_t x163 = 3U;
	int16_t x164 = INT16_MAX;
	static volatile uint64_t t4 = 108LLU;

	t4 = ((x161+(x162>>x163))^x164);

	if (t4 != 223126383719LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x165 = UINT8_MAX;
	uint64_t x166 = 1939LLU;
	int16_t x167 = 1;

	t5 = ((x165+(x166>>x167))^x168);

	if (t5 != 9223372036854777032LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x174 = INT16_MAX;
	static int8_t x175 = 0;
	volatile int32_t x176 = INT32_MIN;
	int32_t t6 = 904287;

	t6 = ((x173+(x174>>x175))^x176);

	if (t6 != -2147451109) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x227 = 6;
	volatile int64_t t7 = -149472LL;

	t7 = ((x225+(x226>>x227))^x228);

	if (t7 != -28786LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x245 = INT16_MIN;
	uint64_t x246 = 223389LLU;
	int8_t x247 = 10;
	volatile uint64_t t8 = 13LLU;

	t8 = ((x245+(x246>>x247))^x248);

	if (t8 != 32547LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x273 = -1;
	volatile uint16_t x274 = UINT16_MAX;
	int64_t x275 = 0LL;
	int16_t x276 = INT16_MIN;
	int32_t t9 = 998923;

	t9 = ((x273+(x274>>x275))^x276);

	if (t9 != -32770) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x333 = -55LL;
	volatile int32_t x334 = 58;
	int8_t x335 = 6;
	int8_t x336 = -29;
	static volatile int64_t t10 = -6393723896LL;

	t10 = ((x333+(x334>>x335))^x336);

	if (t10 != 42LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x393 = INT16_MIN;
	volatile int32_t x394 = 1;
	volatile int64_t x396 = -1LL;
	volatile int64_t t11 = -2720LL;

	t11 = ((x393+(x394>>x395))^x396);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MAX;
	int8_t x415 = 0;
	int8_t x416 = -1;
	int64_t t12 = 2189LL;

	t12 = ((x413+(x414>>x415))^x416);

	if (t12 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x437 = 4444325484633547LL;
	uint32_t x438 = 348371U;
	static int8_t x439 = 2;
	static volatile int64_t t13 = -902LL;

	t13 = ((x437+(x438>>x439))^x440);

	if (t13 != 4444325484720629LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x665 = INT32_MIN;
	uint64_t x666 = UINT64_MAX;
	uint64_t x667 = 5LLU;
	static volatile int8_t x668 = INT8_MAX;
	volatile uint64_t t14 = 4130054LLU;

	t14 = ((x665+(x666>>x667))^x668);

	if (t14 != 576460750155939712LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x705 = 621U;
	uint16_t x706 = UINT16_MAX;
	uint8_t x707 = 10U;
	volatile int8_t x708 = -4;
	int32_t t15 = 17976558;

	t15 = ((x705+(x706>>x707))^x708);

	if (t15 != -688) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x710 = 758;
	static uint8_t x711 = 1U;
	int64_t x712 = INT64_MAX;
	int64_t t16 = 25703185LL;

	t16 = ((x709+(x710>>x711))^x712);

	if (t16 != -9223372036854773032LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x727 = 1;
	uint64_t x728 = UINT64_MAX;
	uint64_t t17 = 51328LLU;

	t17 = ((x725+(x726>>x727))^x728);

	if (t17 != 2147483638LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x869 = INT32_MIN;
	uint8_t x870 = 0U;
	int8_t x872 = 0;
	volatile int32_t t18 = INT32_MIN;

	t18 = ((x869+(x870>>x871))^x872);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x942 = INT32_MAX;
	int32_t t19 = -1425734;

	t19 = ((x941+(x942>>x943))^x944);

	if (t19 != 8296) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x977 = 61LLU;
	volatile uint16_t x979 = 0U;
	int16_t x980 = INT16_MIN;
	uint64_t t20 = 70303212666770LLU;

	t20 = ((x977+(x978>>x979))^x980);

	if (t20 != 18422909597529373980LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1085 = -1LL;
	uint16_t x1086 = UINT16_MAX;
	volatile uint8_t x1087 = 5U;
	int64_t x1088 = 0LL;
	int64_t t21 = 4957733LL;

	t21 = ((x1085+(x1086>>x1087))^x1088);

	if (t21 != 2046LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1145 = UINT32_MAX;
	int8_t x1146 = 17;
	uint8_t x1147 = 3U;
	int64_t t22 = 6669653373441LL;

	t22 = ((x1145+(x1146>>x1147))^x1148);

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1222 = 3U;
	uint32_t x1223 = 25U;
	uint8_t x1224 = 19U;
	int64_t t23 = 384LL;

	t23 = ((x1221+(x1222>>x1223))^x1224);

	if (t23 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1370 = UINT8_MAX;
	volatile int32_t x1372 = INT32_MIN;
	uint32_t t24 = 345997836U;

	t24 = ((x1369+(x1370>>x1371))^x1372);

	if (t24 != 2147483740U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1377 = -885233770LL;
	volatile int16_t x1378 = INT16_MAX;
	int8_t x1379 = 0;
	static int16_t x1380 = INT16_MIN;
	int64_t t25 = -5124488551986LL;

	t25 = ((x1377+(x1378>>x1379))^x1380);

	if (t25 != 885221269LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1422 = 2948099171190791LLU;
	static uint16_t x1423 = 0U;
	static int64_t x1424 = -8097659516LL;
	uint64_t t26 = 1059162127217628LLU;

	t26 = ((x1421+(x1422>>x1423))^x1424);

	if (t26 != 9220423944703249794LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1485 = 840537LL;
	volatile uint64_t x1486 = 28742281LLU;
	int64_t x1487 = 9LL;
	volatile int32_t x1488 = -1;

	t27 = ((x1485+(x1486>>x1487))^x1488);

	if (t27 != 18446744073708654941LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1505 = INT8_MIN;
	volatile uint8_t x1507 = 1U;
	volatile uint32_t x1508 = 1100557737U;
	volatile uint32_t t28 = 984946998U;

	t28 = ((x1505+(x1506>>x1507))^x1508);

	if (t28 != 3194409505U) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1533 = INT32_MIN;
	uint8_t x1534 = 3U;
	static int32_t t29 = 264974844;

	t29 = ((x1533+(x1534>>x1535))^x1536);

	if (t29 != -2147463593) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1645 = -30869;
	uint16_t x1646 = UINT16_MAX;
	int16_t x1647 = 0;
	static int32_t t30 = 10;

	t30 = ((x1645+(x1646>>x1647))^x1648);

	if (t30 != 34642) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1681 = 14U;
	static int16_t x1682 = INT16_MAX;
	uint16_t x1683 = 3U;
	static volatile int32_t x1684 = INT32_MIN;
	volatile int32_t t31 = -1;

	t31 = ((x1681+(x1682>>x1683))^x1684);

	if (t31 != -2147479539) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1707 = 30;
	volatile uint64_t x1708 = UINT64_MAX;

	t32 = ((x1705+(x1706>>x1707))^x1708);

	if (t32 != 18446744071025787751LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1753 = INT32_MIN;
	static int8_t x1754 = 21;
	uint8_t x1755 = 3U;
	volatile int32_t t33 = 148497;

	t33 = ((x1753+(x1754>>x1755))^x1756);

	if (t33 != 2147483632) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1805 = INT16_MAX;
	uint16_t x1806 = 0U;
	volatile int16_t x1807 = 0;

	t34 = ((x1805+(x1806>>x1807))^x1808);

	if (t34 != 32765) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1817 = -1LL;
	static volatile int16_t x1820 = 2;
	int64_t t35 = -51905645379318320LL;

	t35 = ((x1817+(x1818>>x1819))^x1820);

	if (t35 != 144115188075855868LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1841 = 4U;
	uint32_t x1842 = UINT32_MAX;
	volatile int64_t x1844 = -1LL;
	volatile int64_t t36 = -2216744783LL;

	t36 = ((x1841+(x1842>>x1843))^x1844);

	if (t36 != -2147483652LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1857 = 61U;
	volatile int8_t x1858 = 27;
	volatile int8_t x1859 = 17;
	uint8_t x1860 = 6U;

	t37 = ((x1857+(x1858>>x1859))^x1860);

	if (t37 != 59) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1889 = -1;
	static volatile uint32_t x1890 = 266U;
	int8_t x1891 = 3;
	static int8_t x1892 = -59;
	static uint32_t t38 = 525894U;

	t38 = ((x1889+(x1890>>x1891))^x1892);

	if (t38 != 4294967269U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1894 = 77U;
	int64_t x1895 = 0LL;

	t39 = ((x1893+(x1894>>x1895))^x1896);

	if (t39 != 2148U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1897 = 5U;
	uint8_t x1898 = UINT8_MAX;
	static int8_t x1900 = -7;
	volatile int32_t t40 = -1141866;

	t40 = ((x1897+(x1898>>x1899))^x1900);

	if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1990 = 32U;
	int16_t x1991 = 17;
	int32_t x1992 = INT32_MIN;
	volatile uint32_t t41 = 116518175U;

	t41 = ((x1989+(x1990>>x1991))^x1992);

	if (t41 != 2160942884U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2034 = INT16_MAX;
	int8_t x2035 = 23;
	uint32_t x2036 = 29820503U;

	t42 = ((x2033+(x2034>>x2035))^x2036);

	if (t42 != -29820504LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2045 = UINT64_MAX;
	static int8_t x2046 = 2;
	static volatile uint16_t x2047 = 2U;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x2045+(x2046>>x2047))^x2048);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2101 = INT8_MIN;
	volatile int32_t x2102 = INT32_MAX;
	volatile uint16_t x2104 = 3221U;
	static int32_t t44 = 121614666;

	t44 = ((x2101+(x2102>>x2103))^x2104);

	if (t44 != 1073738730) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2165 = -21;
	uint8_t x2166 = 9U;
	uint8_t x2167 = 0U;
	uint32_t x2168 = UINT32_MAX;
	volatile uint32_t t45 = 419U;

	t45 = ((x2165+(x2166>>x2167))^x2168);

	if (t45 != 11U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2182 = INT64_MAX;
	uint16_t x2183 = 42U;
	volatile int64_t x2184 = -2381049253LL;
	static int64_t t46 = 33312263LL;

	t46 = ((x2181+(x2182>>x2183))^x2184);

	if (t46 != -2381582940LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2189 = 196U;
	uint8_t x2191 = 2U;
	int64_t x2192 = INT64_MIN;

	t47 = ((x2189+(x2190>>x2191))^x2192);

	if (t47 != -9223372036854775549LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2250 = UINT8_MAX;
	uint16_t x2251 = 10U;
	int8_t x2252 = -10;
	volatile int32_t t48 = -257886278;

	t48 = ((x2249+(x2250>>x2251))^x2252);

	if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2259 = 1U;
	int32_t t49 = 1745196;

	t49 = ((x2257+(x2258>>x2259))^x2260);

	if (t49 != -381) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2290 = INT8_MAX;
	volatile uint64_t x2291 = 1LLU;

	t50 = ((x2289+(x2290>>x2291))^x2292);

	if (t50 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2305 = UINT32_MAX;
	int16_t x2306 = INT16_MAX;
	uint8_t x2307 = 0U;
	static int32_t x2308 = INT32_MIN;
	static volatile uint32_t t51 = 3U;

	t51 = ((x2305+(x2306>>x2307))^x2308);

	if (t51 != 2147516414U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2321 = -1;
	int8_t x2322 = INT8_MAX;
	int16_t x2323 = 1;
	int32_t x2324 = 2081141;
	volatile int32_t t52 = 2;

	t52 = ((x2321+(x2322>>x2323))^x2324);

	if (t52 != 2081099) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2347 = 13U;
	volatile int16_t x2348 = INT16_MIN;
	static volatile uint32_t t53 = 4343U;

	t53 = ((x2345+(x2346>>x2347))^x2348);

	if (t53 != 2146992127U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2379 = 0;
	volatile uint32_t t54 = 14U;

	t54 = ((x2377+(x2378>>x2379))^x2380);

	if (t54 != 3580303906U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2417 = INT8_MIN;
	uint8_t x2418 = 7U;
	uint64_t x2419 = 3LLU;
	volatile int32_t t55 = 107716;

	t55 = ((x2417+(x2418>>x2419))^x2420);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2430 = 1875U;
	volatile uint8_t x2431 = 19U;
	uint8_t x2432 = 1U;
	volatile uint32_t t56 = 2572651U;

	t56 = ((x2429+(x2430>>x2431))^x2432);

	if (t56 != 65534U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2521 = 1256303LLU;
	int32_t x2522 = 2549;
	volatile int8_t x2524 = 0;
	volatile uint64_t t57 = 7469789226LLU;

	t57 = ((x2521+(x2522>>x2523))^x2524);

	if (t57 != 1257577LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2525 = INT64_MAX;
	uint16_t x2527 = 22U;
	volatile int64_t t58 = -532LL;

	t58 = ((x2525+(x2526>>x2527))^x2528);

	if (t58 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2549 = 3U;
	uint32_t x2550 = 3U;
	uint32_t x2551 = 12U;
	volatile int8_t x2552 = INT8_MIN;
	volatile uint32_t t59 = 5236732U;

	t59 = ((x2549+(x2550>>x2551))^x2552);

	if (t59 != 4294967171U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2554 = 82593271035415268LLU;
	int64_t x2556 = 77952850LL;
	static uint64_t t60 = 60393595515LLU;

	t60 = ((x2553+(x2554>>x2555))^x2556);

	if (t60 != 82593270957488688LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x2593 = -1;
	volatile uint8_t x2594 = 20U;
	uint64_t x2595 = 1LLU;
	uint8_t x2596 = UINT8_MAX;
	volatile int32_t t61 = -1;

	t61 = ((x2593+(x2594>>x2595))^x2596);

	if (t61 != 246) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x2657 = 105170486LL;
	uint16_t x2658 = UINT16_MAX;
	int16_t x2659 = 2;
	int64_t t62 = 871301879LL;

	t62 = ((x2657+(x2658>>x2659))^x2660);

	if (t62 != 4189780426LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2669 = -1;
	uint8_t x2670 = UINT8_MAX;
	int8_t x2671 = 3;
	int64_t t63 = -23205124LL;

	t63 = ((x2669+(x2670>>x2671))^x2672);

	if (t63 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2685 = INT8_MIN;
	uint8_t x2687 = 4U;
	static uint64_t x2688 = 1650LLU;
	uint64_t t64 = 11535850369367089LLU;

	t64 = ((x2685+(x2686>>x2687))^x2688);

	if (t64 != 269LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2697 = -23;
	volatile uint16_t x2698 = UINT16_MAX;
	static int8_t x2699 = 0;
	int8_t x2700 = INT8_MAX;
	volatile int32_t t65 = 40520471;

	t65 = ((x2697+(x2698>>x2699))^x2700);

	if (t65 != 65431) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2706 = 30U;
	int64_t t66 = -502LL;

	t66 = ((x2705+(x2706>>x2707))^x2708);

	if (t66 != -9223372036854743011LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x2749 = -1;
	uint64_t x2750 = 56560135171875589LLU;
	static volatile uint32_t x2751 = 11U;
	static volatile uint64_t t67 = 2LLU;

	t67 = ((x2749+(x2750>>x2751))^x2752);

	if (t67 != 18446716456456039363LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2769 = 0;
	volatile uint32_t x2770 = 1286652487U;
	volatile uint64_t x2771 = 0LLU;
	uint64_t x2772 = 2559923010263646278LLU;
	static uint64_t t68 = 112573LLU;

	t68 = ((x2769+(x2770>>x2771))^x2772);

	if (t68 != 2559923011145548289LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2794 = UINT32_MAX;
	volatile uint8_t x2795 = 6U;
	int8_t x2796 = INT8_MIN;
	static uint32_t t69 = 1017486U;

	t69 = ((x2793+(x2794>>x2795))^x2796);

	if (t69 != 4227858314U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x2801 = INT16_MIN;
	int64_t x2802 = INT64_MAX;
	int32_t x2803 = 28;

	t70 = ((x2801+(x2802>>x2803))^x2804);

	if (t70 != 34359705593LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2825 = UINT64_MAX;
	int32_t x2826 = INT32_MAX;
	static uint8_t x2827 = 1U;
	volatile int64_t x2828 = -14769688964910926LL;
	volatile uint64_t t71 = 2624877LLU;

	t71 = ((x2825+(x2826>>x2827))^x2828);

	if (t71 != 18431974385288105804LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2834 = INT16_MAX;
	int16_t x2836 = -1;
	int32_t t72 = -636471805;

	t72 = ((x2833+(x2834>>x2835))^x2836);

	if (t72 != -16511) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x2865 = -1;
	int64_t x2866 = 7LL;
	uint32_t x2868 = 118983U;

	t73 = ((x2865+(x2866>>x2867))^x2868);

	if (t73 != -118984LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2902 = 163048;
	uint16_t x2903 = 4U;
	static volatile int8_t x2904 = INT8_MIN;
	static int32_t t74 = 0;

	t74 = ((x2901+(x2902>>x2903))^x2904);

	if (t74 != -10528) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3002 = INT16_MAX;
	uint16_t x3003 = 0U;
	volatile int64_t x3004 = -170853844880LL;
	volatile int64_t t75 = 11147LL;

	t75 = ((x3001+(x3002>>x3003))^x3004);

	if (t75 != -170853812082LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3021 = INT8_MIN;
	static uint32_t x3022 = 0U;
	volatile uint16_t x3023 = 3U;
	volatile uint32_t t76 = 389U;

	t76 = ((x3021+(x3022>>x3023))^x3024);

	if (t76 != 4294967167U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3025 = -5085836LL;
	volatile int16_t x3026 = 390;
	uint8_t x3027 = 5U;
	volatile int64_t t77 = 866500300LL;

	t77 = ((x3025+(x3026>>x3027))^x3028);

	if (t77 != 32350338LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x3049 = -1;
	volatile uint64_t x3050 = 14641674279794LLU;
	volatile uint8_t x3051 = 20U;
	uint16_t x3052 = UINT16_MAX;
	uint64_t t78 = 2139023396333977LLU;

	t78 = ((x3049+(x3050>>x3051))^x3052);

	if (t78 != 14020484LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3082 = UINT32_MAX;
	uint64_t x3084 = 38640733902223LLU;
	volatile uint64_t t79 = 46246126LLU;

	t79 = ((x3081+(x3082>>x3083))^x3084);

	if (t79 != 38640738096497LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3109 = -1;
	int16_t x3110 = INT16_MAX;
	volatile int8_t x3111 = 7;
	volatile int32_t t80 = -2623569;

	t80 = ((x3109+(x3110>>x3111))^x3112);

	if (t80 != 32513) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3149 = INT8_MIN;
	uint16_t x3150 = UINT16_MAX;
	int16_t x3151 = 0;
	uint32_t t81 = 41357U;

	t81 = ((x3149+(x3150>>x3151))^x3152);

	if (t81 != 4294901888U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3165 = INT32_MIN;
	static uint8_t x3166 = 16U;
	uint8_t x3167 = 6U;
	static int16_t x3168 = -1;
	volatile int32_t t82 = INT32_MAX;

	t82 = ((x3165+(x3166>>x3167))^x3168);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3173 = 28;
	static volatile uint32_t x3174 = 30796179U;
	uint32_t x3176 = 86U;
	static volatile uint32_t t83 = 15068U;

	t83 = ((x3173+(x3174>>x3175))^x3176);

	if (t83 != 7699158U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3221 = INT64_MAX;
	uint64_t x3222 = 13170LLU;
	uint8_t x3223 = 58U;
	uint8_t x3224 = 91U;
	uint64_t t84 = 3666633LLU;

	t84 = ((x3221+(x3222>>x3223))^x3224);

	if (t84 != 9223372036854775716LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3237 = INT64_MIN;
	uint32_t x3238 = UINT32_MAX;
	uint8_t x3239 = 0U;
	int32_t x3240 = INT32_MIN;

	t85 = ((x3237+(x3238>>x3239))^x3240);

	if (t85 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3273 = -1;
	uint32_t x3275 = 1U;
	int32_t x3276 = 909;

	t86 = ((x3273+(x3274>>x3275))^x3276);

	if (t86 != -910LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x3288 = 63U;
	volatile uint64_t t87 = 252192712LLU;

	t87 = ((x3285+(x3286>>x3287))^x3288);

	if (t87 != 4295063648LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3321 = 8;
	static uint32_t x3322 = 5U;
	int8_t x3323 = 1;

	t88 = ((x3321+(x3322>>x3323))^x3324);

	if (t88 != 84202857037390861LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3333 = INT8_MAX;
	static int8_t x3335 = 20;
	int8_t x3336 = -1;
	volatile int32_t t89 = 975;

	t89 = ((x3333+(x3334>>x3335))^x3336);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3337 = 49U;
	static volatile int16_t x3338 = 6316;
	int32_t x3340 = -1;
	int32_t t90 = -75077;

	t90 = ((x3337+(x3338>>x3339))^x3340);

	if (t90 != -3208) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3369 = INT32_MIN;
	volatile int8_t x3370 = INT8_MAX;
	uint16_t x3371 = 1U;
	uint16_t x3372 = 1U;
	volatile int32_t t91 = 2717762;

	t91 = ((x3369+(x3370>>x3371))^x3372);

	if (t91 != -2147483586) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3385 = 144U;
	uint8_t x3386 = UINT8_MAX;
	uint32_t x3387 = 9U;
	volatile int8_t x3388 = -7;
	uint32_t t92 = 28815U;

	t92 = ((x3385+(x3386>>x3387))^x3388);

	if (t92 != 4294967145U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3458 = 217083456LLU;
	uint64_t x3459 = 4LLU;
	uint32_t x3460 = 46801U;

	t93 = ((x3457+(x3458>>x3459))^x3460);

	if (t93 != 13611189LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3533 = 8454;
	uint32_t x3534 = 65095U;
	volatile int32_t x3536 = INT32_MIN;

	t94 = ((x3533+(x3534>>x3535))^x3536);

	if (t94 != 2147508375U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3553 = 48;
	uint16_t x3554 = UINT16_MAX;
	int8_t x3555 = 7;
	static uint16_t x3556 = UINT16_MAX;

	t95 = ((x3553+(x3554>>x3555))^x3556);

	if (t95 != 64976) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3557 = -1;
	uint8_t x3559 = 15U;
	int32_t t96 = -479;

	t96 = ((x3557+(x3558>>x3559))^x3560);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x3602 = 4261151487617280LL;
	uint32_t x3603 = 5U;
	volatile int8_t x3604 = 0;
	uint64_t t97 = 25879LLU;

	t97 = ((x3601+(x3602>>x3603))^x3604);

	if (t97 != 133160983988039LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3613 = INT16_MAX;
	uint16_t x3616 = UINT16_MAX;
	static int32_t t98 = 52;

	t98 = ((x3613+(x3614>>x3615))^x3616);

	if (t98 != 28673) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x3625 = INT8_MAX;
	uint16_t x3626 = 644U;
	int8_t x3628 = INT8_MAX;

	t99 = ((x3625+(x3626>>x3627))^x3628);

	if (t99 != 351) { NG(); } else { ; }
	
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

