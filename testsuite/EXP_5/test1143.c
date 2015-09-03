#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = INT64_MIN;
int8_t x83 = 9;
int32_t t2 = -109;
uint16_t x230 = 4298U;
uint8_t x232 = 0U;
static uint8_t x273 = 17U;
uint16_t x288 = UINT16_MAX;
volatile int32_t t5 = INT32_MAX;
volatile int32_t x361 = INT32_MAX;
int32_t x363 = 0;
static uint16_t x447 = 12U;
int32_t x448 = 38;
static uint32_t x497 = 3286U;
volatile int32_t t12 = -240061;
volatile int64_t x750 = INT64_MAX;
static uint64_t t15 = UINT64_MAX;
uint32_t x770 = 263287362U;
int8_t x771 = 1;
int64_t x773 = INT64_MAX;
uint8_t x775 = 0U;
int16_t x803 = 0;
int64_t t19 = -35LL;
static int64_t t21 = INT64_MAX;
volatile int32_t t23 = -121056463;
static uint32_t x983 = 15U;
int32_t t24 = 267617;
uint8_t x1035 = 5U;
uint8_t x1169 = 0U;
uint16_t x1171 = 6U;
uint32_t x1172 = 83U;
static volatile int8_t x1230 = INT8_MAX;
static uint8_t x1231 = 5U;
uint8_t x1270 = UINT8_MAX;
static uint32_t x1271 = 0U;
volatile uint64_t t28 = 104316689575018LLU;
int64_t x1313 = INT64_MIN;
static volatile uint32_t x1361 = 29471696U;
uint32_t x1441 = 13308442U;
uint16_t x1445 = UINT16_MAX;
int8_t x1489 = INT8_MIN;
static volatile uint32_t x1490 = 812077834U;
uint64_t x1526 = UINT64_MAX;
int32_t x1554 = INT32_MAX;
volatile int32_t t39 = -764168;
uint8_t x1655 = 16U;
int8_t x1656 = -9;
int8_t x1670 = 0;
static volatile int16_t x1722 = 1;
uint64_t x1762 = 388306LLU;
int32_t t43 = 876;
int32_t x1836 = INT32_MIN;
int8_t x1924 = INT8_MAX;
volatile uint16_t x1934 = 270U;
volatile int16_t x2069 = INT16_MAX;
uint32_t x2354 = UINT32_MAX;
volatile int8_t x2355 = 5;
int32_t x2356 = 973764;
int32_t t56 = -2;
int16_t x2489 = 0;
static uint16_t x2491 = 7U;
volatile int32_t t59 = -219604;
static int16_t x2509 = INT16_MAX;
uint64_t x2510 = 3452075980188LLU;
int32_t x2512 = INT32_MAX;
volatile int32_t t60 = -5367511;
uint32_t t64 = UINT32_MAX;
uint32_t x2765 = UINT32_MAX;
int64_t x2766 = 2926LL;
int32_t x2776 = -1;
int64_t t67 = -4896LL;
volatile uint16_t x2871 = 30U;
uint8_t x2974 = 4U;
uint8_t x3047 = 26U;
volatile uint8_t x3090 = UINT8_MAX;
int16_t x3181 = -1;
uint16_t x3182 = UINT16_MAX;
int32_t x3261 = INT32_MIN;
uint64_t x3326 = 3566660932824335LLU;
int8_t x3328 = INT8_MIN;
int16_t x3334 = 0;
volatile int32_t x3335 = 14;
uint32_t x3338 = 265U;
static volatile uint16_t x3378 = 5997U;
static int16_t x3380 = INT16_MIN;
static uint32_t x3398 = 5618U;
volatile int64_t t86 = -1763211991001266LL;
int32_t x4005 = INT32_MIN;
int8_t x4073 = INT8_MIN;
int32_t t89 = -25;
uint8_t x4141 = 4U;
int64_t t92 = 3791063398622311603LL;
static uint64_t x4217 = UINT64_MAX;
int32_t t94 = -3570718;
volatile uint32_t x4321 = 1462680333U;
int32_t x4322 = INT32_MAX;
uint32_t x4355 = 6U;
static int16_t x4360 = INT16_MAX;
static volatile uint32_t t98 = 88U;
uint16_t x4443 = 1U;


void f0(void) {
	int64_t x21 = -1LL;
	static int64_t x22 = INT64_MAX;
	uint8_t x23 = 2U;
	int16_t x24 = -16;
	volatile int64_t t0 = 1689348599640LL;

	t0 = (x21|((x22>>x23)<=x24));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = INT64_MIN;
	static uint8_t x38 = 63U;
	static uint8_t x39 = 2U;
	int32_t x40 = -76600052;

	t1 = (x37|((x38>>x39)<=x40));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x81 = -1;
	int8_t x82 = 31;
	int32_t x84 = INT32_MIN;

	t2 = (x81|((x82>>x83)<=x84));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x229 = UINT16_MAX;
	uint8_t x231 = 5U;
	volatile int32_t t3 = -16;

	t3 = (x229|((x230>>x231)<=x232));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x274 = UINT16_MAX;
	volatile uint8_t x275 = 1U;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t4 = -93284325;

	t4 = (x273|((x274>>x275)<=x276));

	if (t4 != 17) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x285 = INT32_MAX;
	uint32_t x286 = 894U;
	int16_t x287 = 23;

	t5 = (x285|((x286>>x287)<=x288));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x349 = INT32_MAX;
	uint8_t x350 = UINT8_MAX;
	static uint32_t x351 = 0U;
	int32_t x352 = INT32_MIN;
	int32_t t6 = INT32_MAX;

	t6 = (x349|((x350>>x351)<=x352));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x362 = 62797829LLU;
	int8_t x364 = -1;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x361|((x362>>x363)<=x364));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x437 = -126725776LL;
	static volatile uint32_t x438 = UINT32_MAX;
	int8_t x439 = 2;
	static uint8_t x440 = UINT8_MAX;
	volatile int64_t t8 = -4LL;

	t8 = (x437|((x438>>x439)<=x440));

	if (t8 != -126725776LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x445 = -1;
	uint16_t x446 = UINT16_MAX;
	static int32_t t9 = -108;

	t9 = (x445|((x446>>x447)<=x448));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x453 = INT16_MIN;
	static uint8_t x454 = 1U;
	int64_t x455 = 5LL;
	int8_t x456 = INT8_MAX;
	int32_t t10 = -2166282;

	t10 = (x453|((x454>>x455)<=x456));

	if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x498 = INT64_MAX;
	uint8_t x499 = 1U;
	int64_t x500 = -1LL;
	volatile uint32_t t11 = 1U;

	t11 = (x497|((x498>>x499)<=x500));

	if (t11 != 3286U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x601 = -1;
	int8_t x602 = 27;
	uint16_t x603 = 1U;
	volatile int8_t x604 = 5;

	t12 = (x601|((x602>>x603)<=x604));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x673 = 8593;
	int32_t x674 = 0;
	volatile uint8_t x675 = 10U;
	uint64_t x676 = 6847LLU;
	int32_t t13 = -11275001;

	t13 = (x673|((x674>>x675)<=x676));

	if (t13 != 8593) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x733 = INT16_MIN;
	uint16_t x734 = 14802U;
	static volatile uint32_t x735 = 5U;
	int32_t x736 = 1844339;
	int32_t t14 = -62876233;

	t14 = (x733|((x734>>x735)<=x736));

	if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x749 = UINT64_MAX;
	static int8_t x751 = 0;
	volatile int64_t x752 = INT64_MAX;

	t15 = (x749|((x750>>x751)<=x752));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x753 = -1LL;
	uint16_t x754 = 0U;
	uint64_t x755 = 0LLU;
	volatile uint8_t x756 = 3U;
	int64_t t16 = 460045674LL;

	t16 = (x753|((x754>>x755)<=x756));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x769 = INT16_MIN;
	uint64_t x772 = 2052822038992509388LLU;
	volatile int32_t t17 = 91;

	t17 = (x769|((x770>>x771)<=x772));

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x774 = INT32_MAX;
	int64_t x776 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x773|((x774>>x775)<=x776));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x801 = INT64_MIN;
	uint64_t x802 = 211851576788085LLU;
	int64_t x804 = -1LL;

	t19 = (x801|((x802>>x803)<=x804));

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x845 = INT16_MAX;
	uint64_t x846 = 0LLU;
	static volatile int8_t x847 = 1;
	uint8_t x848 = 0U;
	volatile int32_t t20 = -948183624;

	t20 = (x845|((x846>>x847)<=x848));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x857 = INT64_MAX;
	volatile int16_t x858 = 0;
	uint16_t x859 = 0U;
	static volatile int64_t x860 = INT64_MIN;

	t21 = (x857|((x858>>x859)<=x860));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x861 = 2687U;
	static int16_t x862 = 132;
	int8_t x863 = 3;
	volatile int64_t x864 = -1352156654LL;
	volatile int32_t t22 = -389;

	t22 = (x861|((x862>>x863)<=x864));

	if (t22 != 2687) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x865 = 3445U;
	static uint16_t x866 = 50U;
	int8_t x867 = 1;
	int64_t x868 = INT64_MAX;

	t23 = (x865|((x866>>x867)<=x868));

	if (t23 != 3445) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x981 = -1;
	static uint8_t x982 = 4U;
	int16_t x984 = INT16_MIN;

	t24 = (x981|((x982>>x983)<=x984));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1033 = -128;
	volatile uint32_t x1034 = 99766U;
	volatile uint32_t x1036 = 125931599U;
	int32_t t25 = 653111;

	t25 = (x1033|((x1034>>x1035)<=x1036));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1170 = 0LL;
	volatile int32_t t26 = 130864806;

	t26 = (x1169|((x1170>>x1171)<=x1172));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1229 = 0;
	volatile int8_t x1232 = -1;
	int32_t t27 = 971;

	t27 = (x1229|((x1230>>x1231)<=x1232));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1269 = 55LLU;
	volatile int8_t x1272 = INT8_MIN;

	t28 = (x1269|((x1270>>x1271)<=x1272));

	if (t28 != 55LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x1314 = 7U;
	static int32_t x1315 = 1;
	int16_t x1316 = -1;
	int64_t t29 = INT64_MIN;

	t29 = (x1313|((x1314>>x1315)<=x1316));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1321 = INT64_MIN;
	static int16_t x1322 = INT16_MAX;
	int8_t x1323 = 0;
	int16_t x1324 = 1;
	int64_t t30 = INT64_MIN;

	t30 = (x1321|((x1322>>x1323)<=x1324));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1362 = UINT8_MAX;
	static volatile int32_t x1363 = 1;
	int8_t x1364 = INT8_MIN;
	static uint32_t t31 = 79U;

	t31 = (x1361|((x1362>>x1363)<=x1364));

	if (t31 != 29471696U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x1442 = 31LL;
	static uint16_t x1443 = 0U;
	int64_t x1444 = INT64_MIN;
	volatile uint32_t t32 = 187929U;

	t32 = (x1441|((x1442>>x1443)<=x1444));

	if (t32 != 13308442U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1446 = 68U;
	uint8_t x1447 = 1U;
	uint32_t x1448 = 565991U;
	static int32_t t33 = 2303;

	t33 = (x1445|((x1446>>x1447)<=x1448));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1453 = 33U;
	static int16_t x1454 = 4;
	uint64_t x1455 = 5LLU;
	volatile int8_t x1456 = INT8_MAX;
	int32_t t34 = 682938;

	t34 = (x1453|((x1454>>x1455)<=x1456));

	if (t34 != 33) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1491 = 2;
	static volatile int64_t x1492 = INT64_MAX;
	volatile int32_t t35 = 12631;

	t35 = (x1489|((x1490>>x1491)<=x1492));

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1525 = 127025U;
	static int32_t x1527 = 0;
	volatile int16_t x1528 = 20;
	uint32_t t36 = 4578U;

	t36 = (x1525|((x1526>>x1527)<=x1528));

	if (t36 != 127025U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x1553 = 116U;
	static volatile int64_t x1555 = 10LL;
	static volatile int8_t x1556 = -1;
	static int32_t t37 = -1;

	t37 = (x1553|((x1554>>x1555)<=x1556));

	if (t37 != 116) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1577 = INT32_MIN;
	volatile int8_t x1578 = INT8_MAX;
	static int8_t x1579 = 2;
	volatile int32_t x1580 = 385764262;
	volatile int32_t t38 = 390421390;

	t38 = (x1577|((x1578>>x1579)<=x1580));

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x1645 = 187464;
	uint32_t x1646 = UINT32_MAX;
	int8_t x1647 = 3;
	int32_t x1648 = -132358;

	t39 = (x1645|((x1646>>x1647)<=x1648));

	if (t39 != 187465) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1653 = INT64_MIN;
	static volatile int16_t x1654 = 2161;
	static volatile int64_t t40 = INT64_MIN;

	t40 = (x1653|((x1654>>x1655)<=x1656));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1669 = 10U;
	int16_t x1671 = 0;
	static uint8_t x1672 = UINT8_MAX;
	int32_t t41 = 449;

	t41 = (x1669|((x1670>>x1671)<=x1672));

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1721 = 2U;
	uint8_t x1723 = 7U;
	volatile int8_t x1724 = INT8_MIN;
	volatile int32_t t42 = 3297476;

	t42 = (x1721|((x1722>>x1723)<=x1724));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1761 = -1;
	static volatile uint8_t x1763 = 11U;
	int64_t x1764 = -390487502LL;

	t43 = (x1761|((x1762>>x1763)<=x1764));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1793 = INT16_MIN;
	uint32_t x1794 = 16U;
	uint32_t x1795 = 5U;
	int32_t x1796 = INT32_MIN;
	int32_t t44 = 1687029;

	t44 = (x1793|((x1794>>x1795)<=x1796));

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1809 = 121U;
	int32_t x1810 = 606716;
	uint8_t x1811 = 0U;
	uint8_t x1812 = 0U;
	int32_t t45 = 5564251;

	t45 = (x1809|((x1810>>x1811)<=x1812));

	if (t45 != 121) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1833 = -1;
	uint32_t x1834 = 42011562U;
	uint16_t x1835 = 0U;
	volatile int32_t t46 = -833;

	t46 = (x1833|((x1834>>x1835)<=x1836));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1841 = 294961322820940951LL;
	uint64_t x1842 = UINT64_MAX;
	static int8_t x1843 = 2;
	static int8_t x1844 = INT8_MIN;
	int64_t t47 = -2798754270LL;

	t47 = (x1841|((x1842>>x1843)<=x1844));

	if (t47 != 294961322820940951LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1921 = 13252U;
	static uint8_t x1922 = 0U;
	uint32_t x1923 = 0U;
	uint32_t t48 = 0U;

	t48 = (x1921|((x1922>>x1923)<=x1924));

	if (t48 != 13253U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1933 = 79U;
	int8_t x1935 = 7;
	static volatile uint8_t x1936 = 96U;
	static int32_t t49 = -5;

	t49 = (x1933|((x1934>>x1935)<=x1936));

	if (t49 != 79) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1957 = UINT8_MAX;
	int64_t x1958 = 1LL;
	uint32_t x1959 = 1U;
	uint64_t x1960 = 4311893413704302LLU;
	int32_t t50 = -1;

	t50 = (x1957|((x1958>>x1959)<=x1960));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1993 = INT8_MIN;
	static uint32_t x1994 = UINT32_MAX;
	static volatile uint16_t x1995 = 6U;
	static int32_t x1996 = -12;
	int32_t t51 = 127025888;

	t51 = (x1993|((x1994>>x1995)<=x1996));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2070 = UINT8_MAX;
	static int16_t x2071 = 3;
	volatile int32_t x2072 = 346;
	static volatile int32_t t52 = -169077;

	t52 = (x2069|((x2070>>x2071)<=x2072));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2105 = UINT16_MAX;
	uint64_t x2106 = 0LLU;
	uint32_t x2107 = 16U;
	static uint32_t x2108 = 61U;
	static volatile int32_t t53 = 1259;

	t53 = (x2105|((x2106>>x2107)<=x2108));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2149 = INT16_MIN;
	static int64_t x2150 = 57LL;
	int8_t x2151 = 1;
	uint64_t x2152 = 16036LLU;
	volatile int32_t t54 = -70380885;

	t54 = (x2149|((x2150>>x2151)<=x2152));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2205 = INT16_MIN;
	volatile int32_t x2206 = INT32_MAX;
	uint64_t x2207 = 30LLU;
	volatile uint32_t x2208 = UINT32_MAX;
	volatile int32_t t55 = 15986;

	t55 = (x2205|((x2206>>x2207)<=x2208));

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2353 = UINT8_MAX;

	t56 = (x2353|((x2354>>x2355)<=x2356));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2445 = -121;
	int32_t x2446 = INT32_MAX;
	volatile uint16_t x2447 = 7U;
	static volatile int16_t x2448 = INT16_MAX;
	volatile int32_t t57 = 40;

	t57 = (x2445|((x2446>>x2447)<=x2448));

	if (t57 != -121) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x2490 = 5U;
	static uint64_t x2492 = 14393LLU;
	int32_t t58 = -662236;

	t58 = (x2489|((x2490>>x2491)<=x2492));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2493 = UINT8_MAX;
	int32_t x2494 = 479801040;
	int8_t x2495 = 1;
	int16_t x2496 = 0;

	t59 = (x2493|((x2494>>x2495)<=x2496));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2511 = 55;

	t60 = (x2509|((x2510>>x2511)<=x2512));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2549 = 5U;
	volatile uint64_t x2550 = UINT64_MAX;
	volatile int32_t x2551 = 1;
	int16_t x2552 = INT16_MAX;
	static volatile int32_t t61 = -12;

	t61 = (x2549|((x2550>>x2551)<=x2552));

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2629 = UINT8_MAX;
	uint32_t x2630 = 30554U;
	uint8_t x2631 = 1U;
	static int16_t x2632 = -1;
	volatile int32_t t62 = 971;

	t62 = (x2629|((x2630>>x2631)<=x2632));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2645 = UINT16_MAX;
	int32_t x2646 = 23579921;
	volatile uint8_t x2647 = 28U;
	uint64_t x2648 = 22027059487920LLU;
	volatile int32_t t63 = 7713604;

	t63 = (x2645|((x2646>>x2647)<=x2648));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2681 = UINT32_MAX;
	uint8_t x2682 = UINT8_MAX;
	int32_t x2683 = 0;
	uint8_t x2684 = UINT8_MAX;

	t64 = (x2681|((x2682>>x2683)<=x2684));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2767 = 0;
	int8_t x2768 = INT8_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (x2765|((x2766>>x2767)<=x2768));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2773 = INT16_MIN;
	uint8_t x2774 = 56U;
	volatile uint8_t x2775 = 25U;
	static int32_t t66 = 2182;

	t66 = (x2773|((x2774>>x2775)<=x2776));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2789 = -109976111LL;
	static int64_t x2790 = INT64_MAX;
	volatile uint8_t x2791 = 0U;
	int16_t x2792 = INT16_MAX;

	t67 = (x2789|((x2790>>x2791)<=x2792));

	if (t67 != -109976111LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x2797 = -1;
	int64_t x2798 = 5LL;
	uint64_t x2799 = 12LLU;
	int8_t x2800 = INT8_MAX;
	int32_t t68 = -9;

	t68 = (x2797|((x2798>>x2799)<=x2800));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2845 = 1592U;
	volatile int64_t x2846 = 410989054LL;
	volatile int8_t x2847 = 22;
	int16_t x2848 = INT16_MIN;
	volatile uint32_t t69 = 1U;

	t69 = (x2845|((x2846>>x2847)<=x2848));

	if (t69 != 1592U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x2869 = 6U;
	int8_t x2870 = INT8_MAX;
	int32_t x2872 = INT32_MAX;
	volatile int32_t t70 = 0;

	t70 = (x2869|((x2870>>x2871)<=x2872));

	if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2973 = INT8_MIN;
	int64_t x2975 = 1LL;
	volatile uint32_t x2976 = UINT32_MAX;
	int32_t t71 = 198;

	t71 = (x2973|((x2974>>x2975)<=x2976));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x3045 = -33365461965LL;
	int32_t x3046 = 28193;
	int16_t x3048 = -1;
	int64_t t72 = 82907400220348029LL;

	t72 = (x3045|((x3046>>x3047)<=x3048));

	if (t72 != -33365461965LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3089 = UINT32_MAX;
	uint8_t x3091 = 23U;
	int64_t x3092 = -1LL;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x3089|((x3090>>x3091)<=x3092));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3097 = INT16_MIN;
	static volatile uint8_t x3098 = 2U;
	uint32_t x3099 = 2U;
	volatile int16_t x3100 = 11045;
	int32_t t74 = -1;

	t74 = (x3097|((x3098>>x3099)<=x3100));

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3129 = 0U;
	int8_t x3130 = 28;
	int16_t x3131 = 27;
	static int64_t x3132 = -1915642LL;
	volatile int32_t t75 = 414468;

	t75 = (x3129|((x3130>>x3131)<=x3132));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x3183 = 6U;
	static uint8_t x3184 = 59U;
	int32_t t76 = 1747;

	t76 = (x3181|((x3182>>x3183)<=x3184));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3201 = -3;
	int64_t x3202 = INT64_MAX;
	static uint8_t x3203 = 3U;
	static uint8_t x3204 = 1U;
	volatile int32_t t77 = -61;

	t77 = (x3201|((x3202>>x3203)<=x3204));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3262 = 18070078LL;
	int32_t x3263 = 8;
	uint8_t x3264 = 1U;
	int32_t t78 = INT32_MIN;

	t78 = (x3261|((x3262>>x3263)<=x3264));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3325 = 2103U;
	int8_t x3327 = 30;
	uint32_t t79 = 9U;

	t79 = (x3325|((x3326>>x3327)<=x3328));

	if (t79 != 2103U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3333 = 164;
	int64_t x3336 = INT64_MIN;
	int32_t t80 = -37;

	t80 = (x3333|((x3334>>x3335)<=x3336));

	if (t80 != 164) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3337 = 806656233421525883LLU;
	uint8_t x3339 = 25U;
	int32_t x3340 = INT32_MAX;
	volatile uint64_t t81 = 279LLU;

	t81 = (x3337|((x3338>>x3339)<=x3340));

	if (t81 != 806656233421525883LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3377 = -1;
	uint16_t x3379 = 1U;
	int32_t t82 = -1142346;

	t82 = (x3377|((x3378>>x3379)<=x3380));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x3397 = 396U;
	uint32_t x3399 = 30U;
	static uint16_t x3400 = 519U;
	uint32_t t83 = 0U;

	t83 = (x3397|((x3398>>x3399)<=x3400));

	if (t83 != 397U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3657 = 1U;
	volatile int32_t x3658 = INT32_MAX;
	static uint16_t x3659 = 1U;
	static volatile int32_t x3660 = INT32_MAX;
	volatile int32_t t84 = 0;

	t84 = (x3657|((x3658>>x3659)<=x3660));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3729 = 1013372;
	int16_t x3730 = 1191;
	uint8_t x3731 = 7U;
	static volatile int32_t x3732 = INT32_MAX;
	int32_t t85 = -5795;

	t85 = (x3729|((x3730>>x3731)<=x3732));

	if (t85 != 1013373) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3853 = 13LL;
	static uint16_t x3854 = UINT16_MAX;
	static volatile uint8_t x3855 = 6U;
	static volatile int32_t x3856 = INT32_MAX;

	t86 = (x3853|((x3854>>x3855)<=x3856));

	if (t86 != 13LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x3881 = UINT64_MAX;
	int8_t x3882 = 6;
	static uint16_t x3883 = 1U;
	int64_t x3884 = 3LL;
	uint64_t t87 = UINT64_MAX;

	t87 = (x3881|((x3882>>x3883)<=x3884));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4006 = INT16_MAX;
	uint8_t x4007 = 8U;
	int64_t x4008 = INT64_MIN;
	static volatile int32_t t88 = INT32_MIN;

	t88 = (x4005|((x4006>>x4007)<=x4008));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4074 = 289;
	uint16_t x4075 = 0U;
	static int64_t x4076 = INT64_MAX;

	t89 = (x4073|((x4074>>x4075)<=x4076));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4129 = INT32_MAX;
	uint64_t x4130 = 751224170LLU;
	uint8_t x4131 = 19U;
	volatile int8_t x4132 = 1;
	int32_t t90 = INT32_MAX;

	t90 = (x4129|((x4130>>x4131)<=x4132));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4142 = 0U;
	uint32_t x4143 = 1U;
	static int32_t x4144 = INT32_MAX;
	volatile int32_t t91 = -75;

	t91 = (x4141|((x4142>>x4143)<=x4144));

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4181 = INT64_MIN;
	uint32_t x4182 = 10U;
	uint16_t x4183 = 1U;
	uint32_t x4184 = 8U;

	t92 = (x4181|((x4182>>x4183)<=x4184));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4218 = 487U;
	int32_t x4219 = 3;
	int64_t x4220 = INT64_MIN;
	static uint64_t t93 = UINT64_MAX;

	t93 = (x4217|((x4218>>x4219)<=x4220));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4269 = INT16_MIN;
	volatile int64_t x4270 = INT64_MAX;
	uint32_t x4271 = 2U;
	int8_t x4272 = INT8_MIN;

	t94 = (x4269|((x4270>>x4271)<=x4272));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4323 = 0U;
	static int64_t x4324 = INT64_MIN;
	uint32_t t95 = 109075295U;

	t95 = (x4321|((x4322>>x4323)<=x4324));

	if (t95 != 1462680333U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4353 = -171975;
	volatile int64_t x4354 = 111LL;
	volatile int8_t x4356 = -1;
	int32_t t96 = 483473;

	t96 = (x4353|((x4354>>x4355)<=x4356));

	if (t96 != -171975) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4357 = INT16_MAX;
	uint16_t x4358 = 1165U;
	uint16_t x4359 = 1U;
	int32_t t97 = -5734382;

	t97 = (x4357|((x4358>>x4359)<=x4360));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4405 = 964U;
	uint16_t x4406 = 3U;
	static uint32_t x4407 = 4U;
	static volatile int64_t x4408 = -7885514373913196LL;

	t98 = (x4405|((x4406>>x4407)<=x4408));

	if (t98 != 964U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4441 = INT16_MIN;
	uint16_t x4442 = 66U;
	int8_t x4444 = 4;
	static int32_t t99 = -95;

	t99 = (x4441|((x4442>>x4443)<=x4444));

	if (t99 != -32768) { NG(); } else { ; }
	
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

