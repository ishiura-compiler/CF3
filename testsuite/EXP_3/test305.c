#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x87 = INT8_MIN;
uint16_t x90 = UINT16_MAX;
int16_t x92 = -1;
volatile int64_t x164 = INT64_MAX;
uint64_t x217 = 181119256227973924LLU;
volatile int32_t x218 = 5196592;
int64_t x241 = INT64_MIN;
int8_t x248 = -5;
int32_t t5 = -533327;
int64_t x265 = INT64_MIN;
static uint16_t x266 = UINT16_MAX;
int32_t x267 = -1;
static int16_t x327 = 26;
uint64_t t9 = 3613914782777188119LLU;
volatile int16_t x421 = 38;
int8_t x422 = INT8_MIN;
static volatile uint64_t t14 = 31995LLU;
int8_t x765 = -1;
uint8_t x767 = 3U;
int64_t t17 = -13515178162LL;
static int64_t x809 = INT64_MAX;
int8_t x810 = -1;
volatile int32_t x812 = -1;
int64_t t18 = INT64_MAX;
uint8_t x813 = 19U;
int32_t t19 = 359710676;
uint8_t x851 = UINT8_MAX;
int8_t x933 = INT8_MIN;
volatile int8_t x1050 = 0;
uint64_t x1191 = UINT64_MAX;
volatile uint64_t x1192 = UINT64_MAX;
volatile uint32_t t25 = 85U;
volatile uint8_t x1280 = 3U;
volatile int8_t x1421 = INT8_MAX;
uint32_t x1424 = UINT32_MAX;
int16_t x1463 = 2;
uint32_t t31 = 382939U;
int64_t x1542 = INT64_MAX;
int64_t t32 = -1131598478890LL;
int8_t x1657 = INT8_MAX;
uint8_t x1659 = 5U;
volatile int32_t x1691 = -1;
uint8_t x1918 = UINT8_MAX;
int8_t x1930 = 30;
uint8_t x1931 = 5U;
static int8_t x2035 = INT8_MIN;
static int64_t t38 = 2217LL;
uint32_t x2040 = 1U;
uint8_t x2045 = 93U;
uint16_t x2047 = 6U;
volatile uint8_t x2048 = 1U;
int8_t x2093 = -1;
uint16_t x2094 = UINT16_MAX;
volatile int32_t x2189 = INT32_MIN;
static volatile uint8_t x2201 = UINT8_MAX;
int16_t x2203 = -1;
int64_t x2700 = INT64_MIN;
static volatile uint64_t t52 = 10LLU;
int32_t x2817 = INT32_MAX;
volatile int32_t t54 = -1;
static int32_t x2901 = INT32_MIN;
static int64_t x2902 = 1227513394LL;
static int8_t x2942 = -1;
uint8_t x2943 = 3U;
static volatile int32_t x3271 = INT32_MIN;
int64_t x3299 = -1LL;
volatile int8_t x3300 = -1;
int8_t x3320 = -1;
int64_t x3334 = 468LL;
static volatile int64_t x3381 = 938137036521850755LL;
int64_t t64 = 7915183LL;
static int16_t x3412 = -13;
static volatile uint64_t x3510 = 2LLU;
static volatile uint64_t x3525 = UINT64_MAX;
static volatile uint64_t t68 = 67805852569098614LLU;
static uint64_t x3570 = UINT64_MAX;
volatile uint16_t x3601 = 5U;
int64_t x3699 = INT64_MIN;
volatile int64_t x3720 = -1LL;
volatile int32_t x3750 = INT32_MAX;
volatile int16_t x3898 = INT16_MAX;
volatile int16_t x3900 = -1;
int8_t x3924 = -1;
uint32_t x4149 = 43780U;
static int16_t x4152 = 1;
static int8_t x4197 = INT8_MIN;
int16_t x4199 = INT16_MAX;
volatile int16_t x4200 = INT16_MAX;
static volatile int64_t x4237 = INT64_MIN;
int16_t x4238 = INT16_MAX;
int8_t x4239 = -1;
uint64_t x4254 = 3216367LLU;
volatile int64_t x4296 = INT64_MIN;
static int8_t x4399 = -1;
int16_t x4418 = 4836;
uint8_t x4693 = UINT8_MAX;
uint64_t x4694 = 70499536078571157LLU;
int32_t x4784 = -1;
int16_t x4801 = -8;
volatile uint8_t x4856 = UINT8_MAX;
volatile uint64_t t88 = 15705680LLU;
static volatile int64_t t89 = 102LL;
static volatile uint64_t x4893 = 48295331LLU;
uint32_t x5008 = UINT32_MAX;
int32_t t95 = -474;
static volatile int64_t t96 = 2348985914983624LL;
uint64_t x5334 = 378802276LLU;
uint64_t x5335 = UINT64_MAX;
int64_t x5336 = -1LL;


void f0(void) {
	uint8_t x85 = 7U;
	volatile int32_t x86 = -1;
	volatile int8_t x88 = INT8_MIN;
	int32_t t0 = 2019;

	t0 = ((x85&x86)<<(x87-x88));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x89 = INT32_MAX;
	uint16_t x91 = 4U;
	volatile int32_t t1 = 1;

	t1 = ((x89&x90)<<(x91-x92));

	if (t1 != 2097120) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x161 = 31;
	volatile int8_t x162 = 13;
	int64_t x163 = INT64_MAX;
	int32_t t2 = 1;

	t2 = ((x161&x162)<<(x163-x164));

	if (t2 != 13) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x219 = INT64_MIN;
	int64_t x220 = INT64_MIN;
	uint64_t t3 = 270LLU;

	t3 = ((x217&x218)<<(x219-x220));

	if (t3 != 4393760LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x242 = 788832LL;
	volatile int8_t x243 = -2;
	volatile int8_t x244 = -29;
	static int64_t t4 = 201119060LL;

	t4 = ((x241&x242)<<(x243-x244));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x245 = 10972;
	static int16_t x246 = INT16_MIN;
	uint32_t x247 = 6U;

	t5 = ((x245&x246)<<(x247-x248));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x268 = UINT32_MAX;
	static volatile int64_t t6 = 311280603LL;

	t6 = ((x265&x266)<<(x267-x268));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x325 = INT8_MIN;
	static uint8_t x326 = 14U;
	int16_t x328 = -1;
	static volatile int32_t t7 = -2151;

	t7 = ((x325&x326)<<(x327-x328));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x341 = UINT64_MAX;
	static uint32_t x342 = 3442348U;
	int8_t x343 = -1;
	int32_t x344 = -31;
	volatile uint64_t t8 = 520433LLU;

	t8 = ((x341&x342)<<(x343-x344));

	if (t8 != 3696193020362752LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x381 = 316;
	uint64_t x382 = 110046033237829LLU;
	volatile uint32_t x383 = UINT32_MAX;
	int32_t x384 = -1;

	t9 = ((x381&x382)<<(x383-x384));

	if (t9 != 260LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x423 = 2U;
	int8_t x424 = -1;
	volatile int32_t t10 = -512;

	t10 = ((x421&x422)<<(x423-x424));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x481 = -1LL;
	uint8_t x482 = UINT8_MAX;
	int32_t x483 = INT32_MIN;
	int32_t x484 = INT32_MIN;
	static int64_t t11 = 1705726400255778LL;

	t11 = ((x481&x482)<<(x483-x484));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x589 = 25U;
	static int64_t x590 = INT64_MAX;
	static int32_t x591 = INT32_MAX;
	int32_t x592 = INT32_MAX;
	volatile int64_t t12 = 12LL;

	t12 = ((x589&x590)<<(x591-x592));

	if (t12 != 25LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x621 = 1;
	static int32_t x622 = -1;
	uint16_t x623 = UINT16_MAX;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t13 = -5633037;

	t13 = ((x621&x622)<<(x623-x624));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x689 = INT64_MIN;
	uint64_t x690 = 471LLU;
	volatile int16_t x691 = -1;
	static int16_t x692 = -1;

	t14 = ((x689&x690)<<(x691-x692));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x717 = -9;
	uint16_t x718 = UINT16_MAX;
	int8_t x719 = -1;
	volatile uint32_t x720 = UINT32_MAX;
	int32_t t15 = -7531238;

	t15 = ((x717&x718)<<(x719-x720));

	if (t15 != 65527) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x753 = INT16_MAX;
	volatile int8_t x754 = -1;
	static volatile uint16_t x755 = 7U;
	uint64_t x756 = UINT64_MAX;
	static int32_t t16 = 5076;

	t16 = ((x753&x754)<<(x755-x756));

	if (t16 != 8388352) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x766 = 49732LL;
	static uint32_t x768 = UINT32_MAX;

	t17 = ((x765&x766)<<(x767-x768));

	if (t17 != 795712LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x811 = -1;

	t18 = ((x809&x810)<<(x811-x812));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x814 = 6U;
	int32_t x815 = INT32_MIN;
	int32_t x816 = INT32_MIN;

	t19 = ((x813&x814)<<(x815-x816));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x849 = 422886550927LLU;
	static int8_t x850 = 55;
	static uint8_t x852 = UINT8_MAX;
	volatile uint64_t t20 = 1425599LLU;

	t20 = ((x849&x850)<<(x851-x852));

	if (t20 != 7LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x865 = 4U;
	int8_t x866 = -5;
	int32_t x867 = 1;
	int8_t x868 = -1;
	volatile int32_t t21 = 5;

	t21 = ((x865&x866)<<(x867-x868));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x934 = 735U;
	uint16_t x935 = 6U;
	static int16_t x936 = -1;
	static volatile int32_t t22 = -19419630;

	t22 = ((x933&x934)<<(x935-x936));

	if (t22 != 81920) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x1049 = 4U;
	uint8_t x1051 = 1U;
	int64_t x1052 = -1LL;
	volatile int32_t t23 = 15;

	t23 = ((x1049&x1050)<<(x1051-x1052));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1189 = 10341U;
	static volatile int8_t x1190 = -1;
	volatile int32_t t24 = 28371922;

	t24 = ((x1189&x1190)<<(x1191-x1192));

	if (t24 != 10341) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1261 = 0U;
	static uint32_t x1262 = 13360U;
	volatile int16_t x1263 = -1;
	static volatile int8_t x1264 = -1;

	t25 = ((x1261&x1262)<<(x1263-x1264));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1277 = 1U;
	int16_t x1278 = INT16_MAX;
	static uint16_t x1279 = 4U;
	volatile int32_t t26 = -6359;

	t26 = ((x1277&x1278)<<(x1279-x1280));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x1289 = 24749633120010LLU;
	int32_t x1290 = -1;
	static int64_t x1291 = INT64_MIN;
	int64_t x1292 = INT64_MIN;
	volatile uint64_t t27 = 320491963LLU;

	t27 = ((x1289&x1290)<<(x1291-x1292));

	if (t27 != 24749633120010LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1321 = 4;
	static uint16_t x1322 = 1039U;
	uint8_t x1323 = 0U;
	int8_t x1324 = -1;
	int32_t t28 = 1005766;

	t28 = ((x1321&x1322)<<(x1323-x1324));

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1422 = UINT32_MAX;
	int8_t x1423 = 0;
	uint32_t t29 = 616828U;

	t29 = ((x1421&x1422)<<(x1423-x1424));

	if (t29 != 254U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1437 = 2004979402606LLU;
	static uint32_t x1438 = 0U;
	int64_t x1439 = -1LL;
	static uint64_t x1440 = UINT64_MAX;
	volatile uint64_t t30 = 3434LLU;

	t30 = ((x1437&x1438)<<(x1439-x1440));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1461 = 39556U;
	static int8_t x1462 = 7;
	volatile int32_t x1464 = 1;

	t31 = ((x1461&x1462)<<(x1463-x1464));

	if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1541 = 76;
	volatile int16_t x1543 = 7;
	volatile int32_t x1544 = -1;

	t32 = ((x1541&x1542)<<(x1543-x1544));

	if (t32 != 19456LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1658 = INT64_MAX;
	static uint8_t x1660 = 0U;
	int64_t t33 = -4789LL;

	t33 = ((x1657&x1658)<<(x1659-x1660));

	if (t33 != 4064LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1689 = -1;
	uint8_t x1690 = 105U;
	int8_t x1692 = -1;
	volatile int32_t t34 = -4554830;

	t34 = ((x1689&x1690)<<(x1691-x1692));

	if (t34 != 105) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1785 = 31U;
	volatile uint16_t x1786 = 12200U;
	uint64_t x1787 = 0LLU;
	int16_t x1788 = -1;
	volatile int32_t t35 = -225;

	t35 = ((x1785&x1786)<<(x1787-x1788));

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1917 = 2;
	int16_t x1919 = -1;
	static int8_t x1920 = -28;
	volatile int32_t t36 = 0;

	t36 = ((x1917&x1918)<<(x1919-x1920));

	if (t36 != 268435456) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1929 = 1U;
	int16_t x1932 = -1;
	static volatile int32_t t37 = 0;

	t37 = ((x1929&x1930)<<(x1931-x1932));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2033 = UINT16_MAX;
	int64_t x2034 = 4455362655726504LL;
	int8_t x2036 = INT8_MIN;

	t38 = ((x2033&x2034)<<(x2035-x2036));

	if (t38 != 43944LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2037 = 32U;
	volatile int64_t x2038 = INT64_MIN;
	int8_t x2039 = 1;
	volatile int64_t t39 = -1101870355961065LL;

	t39 = ((x2037&x2038)<<(x2039-x2040));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2046 = INT8_MIN;
	int32_t t40 = -10;

	t40 = ((x2045&x2046)<<(x2047-x2048));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2095 = UINT16_MAX;
	uint16_t x2096 = UINT16_MAX;
	int32_t t41 = 16934;

	t41 = ((x2093&x2094)<<(x2095-x2096));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2190 = UINT8_MAX;
	int8_t x2191 = 9;
	int64_t x2192 = -1LL;
	int32_t t42 = -2;

	t42 = ((x2189&x2190)<<(x2191-x2192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2202 = INT64_MAX;
	uint32_t x2204 = UINT32_MAX;
	int64_t t43 = 5138LL;

	t43 = ((x2201&x2202)<<(x2203-x2204));

	if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2209 = 5189887341239LL;
	int64_t x2210 = -3LL;
	static volatile uint32_t x2211 = UINT32_MAX;
	int16_t x2212 = -1;
	int64_t t44 = 294518LL;

	t44 = ((x2209&x2210)<<(x2211-x2212));

	if (t44 != 5189887341237LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2237 = 5U;
	int64_t x2238 = INT64_MIN;
	static uint8_t x2239 = 14U;
	static uint64_t x2240 = UINT64_MAX;
	volatile int64_t t45 = 3180782187LL;

	t45 = ((x2237&x2238)<<(x2239-x2240));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2285 = 24093;
	static int32_t x2286 = -841432;
	static volatile int16_t x2287 = -1;
	int32_t x2288 = -1;
	volatile int32_t t46 = 231765;

	t46 = ((x2285&x2286)<<(x2287-x2288));

	if (t46 != 2056) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2309 = -1;
	static uint64_t x2310 = UINT64_MAX;
	static volatile int32_t x2311 = -1;
	int64_t x2312 = -1LL;
	static volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x2309&x2310)<<(x2311-x2312));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2317 = INT64_MAX;
	uint64_t x2318 = UINT64_MAX;
	static int16_t x2319 = -1;
	volatile int16_t x2320 = -1;
	volatile uint64_t t48 = 132654057844885509LLU;

	t48 = ((x2317&x2318)<<(x2319-x2320));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2349 = INT64_MIN;
	uint32_t x2350 = 3529U;
	static int64_t x2351 = INT64_MIN;
	int64_t x2352 = INT64_MIN;
	volatile int64_t t49 = 15LL;

	t49 = ((x2349&x2350)<<(x2351-x2352));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2457 = INT32_MAX;
	static uint8_t x2458 = 59U;
	int64_t x2459 = INT64_MAX;
	int64_t x2460 = INT64_MAX;
	int32_t t50 = -909901;

	t50 = ((x2457&x2458)<<(x2459-x2460));

	if (t50 != 59) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2601 = INT16_MAX;
	uint64_t x2602 = 0LLU;
	uint16_t x2603 = 8U;
	int8_t x2604 = 8;
	uint64_t t51 = 22239LLU;

	t51 = ((x2601&x2602)<<(x2603-x2604));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2697 = UINT64_MAX;
	uint32_t x2698 = UINT32_MAX;
	int64_t x2699 = INT64_MIN;

	t52 = ((x2697&x2698)<<(x2699-x2700));

	if (t52 != 4294967295LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2765 = 35431396495LLU;
	uint32_t x2766 = 5120U;
	int64_t x2767 = -1LL;
	int32_t x2768 = -1;
	volatile uint64_t t53 = 41240LLU;

	t53 = ((x2765&x2766)<<(x2767-x2768));

	if (t53 != 5120LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2818 = INT32_MIN;
	uint8_t x2819 = 11U;
	int16_t x2820 = -1;

	t54 = ((x2817&x2818)<<(x2819-x2820));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2903 = 1;
	volatile int32_t x2904 = -1;
	volatile int64_t t55 = -14LL;

	t55 = ((x2901&x2902)<<(x2903-x2904));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2941 = 18U;
	static int64_t x2944 = -1LL;
	static int32_t t56 = -489;

	t56 = ((x2941&x2942)<<(x2943-x2944));

	if (t56 != 288) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2993 = -1;
	uint64_t x2994 = 552635726524LLU;
	int8_t x2995 = -1;
	uint32_t x2996 = UINT32_MAX;
	uint64_t t57 = 120267016LLU;

	t57 = ((x2993&x2994)<<(x2995-x2996));

	if (t57 != 552635726524LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3097 = INT32_MIN;
	uint64_t x3098 = UINT64_MAX;
	uint64_t x3099 = UINT64_MAX;
	int64_t x3100 = -1LL;
	uint64_t t58 = 6084307999816415068LLU;

	t58 = ((x3097&x3098)<<(x3099-x3100));

	if (t58 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3265 = 1584;
	int8_t x3266 = -1;
	int64_t x3267 = INT64_MAX;
	int64_t x3268 = INT64_MAX;
	int32_t t59 = -492310341;

	t59 = ((x3265&x3266)<<(x3267-x3268));

	if (t59 != 1584) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x3269 = INT16_MIN;
	volatile uint16_t x3270 = 272U;
	static int32_t x3272 = INT32_MIN;
	static int32_t t60 = 599311;

	t60 = ((x3269&x3270)<<(x3271-x3272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3297 = 1U;
	int32_t x3298 = -1;
	uint32_t t61 = 9U;

	t61 = ((x3297&x3298)<<(x3299-x3300));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3317 = INT8_MAX;
	static uint32_t x3318 = 6387010U;
	int8_t x3319 = -1;
	static uint32_t t62 = 1U;

	t62 = ((x3317&x3318)<<(x3319-x3320));

	if (t62 != 66U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint32_t x3333 = UINT32_MAX;
	uint64_t x3335 = UINT64_MAX;
	static int16_t x3336 = -1;
	int64_t t63 = 440731183940LL;

	t63 = ((x3333&x3334)<<(x3335-x3336));

	if (t63 != 468LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x3382 = 0U;
	uint16_t x3383 = 7U;
	uint64_t x3384 = UINT64_MAX;

	t64 = ((x3381&x3382)<<(x3383-x3384));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3409 = INT16_MAX;
	int32_t x3410 = -1;
	volatile int32_t x3411 = -1;
	volatile int32_t t65 = 1;

	t65 = ((x3409&x3410)<<(x3411-x3412));

	if (t65 != 134213632) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3493 = INT64_MIN;
	static uint32_t x3494 = UINT32_MAX;
	volatile uint64_t x3495 = UINT64_MAX;
	uint64_t x3496 = UINT64_MAX;
	int64_t t66 = 123619423396668LL;

	t66 = ((x3493&x3494)<<(x3495-x3496));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3509 = -1;
	int16_t x3511 = -1;
	int16_t x3512 = -13;
	volatile uint64_t t67 = 14120805LLU;

	t67 = ((x3509&x3510)<<(x3511-x3512));

	if (t67 != 8192LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x3526 = UINT64_MAX;
	int16_t x3527 = 0;
	static volatile int64_t x3528 = -1LL;

	t68 = ((x3525&x3526)<<(x3527-x3528));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3545 = 6;
	uint64_t x3546 = 1748303362LLU;
	int32_t x3547 = -1;
	static volatile int32_t x3548 = -1;
	volatile uint64_t t69 = 2737091LLU;

	t69 = ((x3545&x3546)<<(x3547-x3548));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3569 = 14;
	volatile uint16_t x3571 = 1U;
	static int64_t x3572 = 0LL;
	static uint64_t t70 = 2266LLU;

	t70 = ((x3569&x3570)<<(x3571-x3572));

	if (t70 != 28LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3602 = 62U;
	volatile int16_t x3603 = 3;
	uint64_t x3604 = UINT64_MAX;
	int32_t t71 = 262;

	t71 = ((x3601&x3602)<<(x3603-x3604));

	if (t71 != 64) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3697 = 5609U;
	int8_t x3698 = INT8_MIN;
	int64_t x3700 = INT64_MIN;
	volatile int32_t t72 = 6275053;

	t72 = ((x3697&x3698)<<(x3699-x3700));

	if (t72 != 5504) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3717 = 1;
	int32_t x3718 = -235329362;
	uint64_t x3719 = UINT64_MAX;
	int32_t t73 = -1975;

	t73 = ((x3717&x3718)<<(x3719-x3720));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3749 = 353LL;
	uint64_t x3751 = UINT64_MAX;
	static int32_t x3752 = -1;
	int64_t t74 = 70522881752383LL;

	t74 = ((x3749&x3750)<<(x3751-x3752));

	if (t74 != 353LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3897 = INT16_MAX;
	static uint32_t x3899 = UINT32_MAX;
	int32_t t75 = -20472467;

	t75 = ((x3897&x3898)<<(x3899-x3900));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3921 = INT32_MAX;
	uint64_t x3922 = 48LLU;
	static int64_t x3923 = -1LL;
	uint64_t t76 = 6LLU;

	t76 = ((x3921&x3922)<<(x3923-x3924));

	if (t76 != 48LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4037 = 23;
	int16_t x4038 = INT16_MIN;
	volatile int32_t x4039 = -1;
	uint32_t x4040 = UINT32_MAX;
	static volatile int32_t t77 = 2;

	t77 = ((x4037&x4038)<<(x4039-x4040));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4150 = INT32_MIN;
	volatile uint16_t x4151 = 31U;
	static uint32_t t78 = 214704U;

	t78 = ((x4149&x4150)<<(x4151-x4152));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4198 = INT16_MAX;
	int32_t t79 = -21;

	t79 = ((x4197&x4198)<<(x4199-x4200));

	if (t79 != 32640) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4240 = -1;
	int64_t t80 = -10638535879941976LL;

	t80 = ((x4237&x4238)<<(x4239-x4240));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4253 = 8;
	uint32_t x4255 = UINT32_MAX;
	uint32_t x4256 = UINT32_MAX;
	static volatile uint64_t t81 = 2157LLU;

	t81 = ((x4253&x4254)<<(x4255-x4256));

	if (t81 != 8LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4293 = UINT8_MAX;
	volatile uint32_t x4294 = UINT32_MAX;
	int64_t x4295 = INT64_MIN;
	volatile uint32_t t82 = 1089U;

	t82 = ((x4293&x4294)<<(x4295-x4296));

	if (t82 != 255U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x4397 = UINT32_MAX;
	volatile int32_t x4398 = -1;
	int8_t x4400 = -1;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = ((x4397&x4398)<<(x4399-x4400));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x4417 = INT8_MIN;
	int16_t x4419 = -1;
	uint64_t x4420 = UINT64_MAX;
	volatile int32_t t84 = -360273;

	t84 = ((x4417&x4418)<<(x4419-x4420));

	if (t84 != 4736) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4695 = INT32_MIN;
	static int32_t x4696 = INT32_MIN;
	volatile uint64_t t85 = 22009249346491LLU;

	t85 = ((x4693&x4694)<<(x4695-x4696));

	if (t85 != 149LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4781 = 11132930LL;
	static int16_t x4782 = -1;
	static volatile uint32_t x4783 = UINT32_MAX;
	volatile int64_t t86 = 2838535622950LL;

	t86 = ((x4781&x4782)<<(x4783-x4784));

	if (t86 != 11132930LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4802 = 7373180744635LLU;
	uint64_t x4803 = UINT64_MAX;
	int8_t x4804 = -1;
	uint64_t t87 = 203618455LLU;

	t87 = ((x4801&x4802)<<(x4803-x4804));

	if (t87 != 7373180744632LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4853 = -1;
	static uint64_t x4854 = 10604530536LLU;
	uint8_t x4855 = UINT8_MAX;

	t88 = ((x4853&x4854)<<(x4855-x4856));

	if (t88 != 10604530536LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4869 = 128802716745LL;
	uint8_t x4870 = 73U;
	static int64_t x4871 = -1LL;
	int16_t x4872 = -1;

	t89 = ((x4869&x4870)<<(x4871-x4872));

	if (t89 != 73LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4894 = -1540845530959087037LL;
	volatile int64_t x4895 = INT64_MIN;
	int64_t x4896 = INT64_MIN;
	uint64_t t90 = 2474937422588973LLU;

	t90 = ((x4893&x4894)<<(x4895-x4896));

	if (t90 != 6318083LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x4977 = 127164022260390LLU;
	int16_t x4978 = 60;
	uint32_t x4979 = 0U;
	int64_t x4980 = -1LL;
	volatile uint64_t t91 = 6573901232945408LLU;

	t91 = ((x4977&x4978)<<(x4979-x4980));

	if (t91 != 72LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4985 = 94780950U;
	static int16_t x4986 = -1;
	static int8_t x4987 = 0;
	static volatile uint64_t x4988 = UINT64_MAX;
	volatile uint32_t t92 = 282U;

	t92 = ((x4985&x4986)<<(x4987-x4988));

	if (t92 != 189561900U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5005 = 2164LL;
	int64_t x5006 = 2911LL;
	int16_t x5007 = -1;
	volatile int64_t t93 = -252LL;

	t93 = ((x5005&x5006)<<(x5007-x5008));

	if (t93 != 2132LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5081 = 14229015LLU;
	static int64_t x5082 = -16516704LL;
	volatile int64_t x5083 = -1LL;
	static int8_t x5084 = -1;
	uint64_t t94 = 45931901LLU;

	t94 = ((x5081&x5082)<<(x5083-x5084));

	if (t94 != 71680LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5177 = INT8_MIN;
	int8_t x5178 = 1;
	static uint8_t x5179 = 2U;
	uint8_t x5180 = 1U;

	t95 = ((x5177&x5178)<<(x5179-x5180));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5261 = 2U;
	int64_t x5262 = -1LL;
	int16_t x5263 = -1;
	volatile uint64_t x5264 = UINT64_MAX;

	t96 = ((x5261&x5262)<<(x5263-x5264));

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5325 = INT16_MAX;
	static volatile int16_t x5326 = -15;
	int16_t x5327 = INT16_MAX;
	static int16_t x5328 = INT16_MAX;
	int32_t t97 = -172135;

	t97 = ((x5325&x5326)<<(x5327-x5328));

	if (t97 != 32753) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5333 = 0;
	static uint64_t t98 = 5LLU;

	t98 = ((x5333&x5334)<<(x5335-x5336));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5353 = 40115616128LLU;
	uint32_t x5354 = UINT32_MAX;
	static int16_t x5355 = INT16_MIN;
	int16_t x5356 = INT16_MIN;
	volatile uint64_t t99 = 2463008898561324524LLU;

	t99 = ((x5353&x5354)<<(x5355-x5356));

	if (t99 != 1460910464LLU) { NG(); } else { ; }
	
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

