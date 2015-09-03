#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x86 = INT32_MIN;
uint16_t x112 = 8U;
volatile uint64_t t2 = 216970LLU;
static int16_t x120 = 0;
int8_t x144 = 0;
static uint64_t x250 = 1115249097376804999LLU;
volatile int64_t x251 = INT64_MIN;
volatile int8_t x383 = INT8_MIN;
int32_t x521 = 0;
static uint8_t x524 = 1U;
volatile int32_t t8 = 9;
volatile int32_t t10 = 792;
volatile uint8_t x750 = UINT8_MAX;
int8_t x771 = -1;
static int32_t t15 = -120;
uint64_t x808 = 7LLU;
static int8_t x848 = 0;
static uint16_t x878 = 21U;
static int8_t x890 = 2;
uint32_t t20 = 4989U;
int16_t x970 = -10;
uint64_t x986 = 123LLU;
int64_t x1014 = 120562487796028LL;
uint8_t x1016 = 1U;
uint8_t x1053 = 0U;
volatile uint64_t t25 = 15438263116LLU;
volatile int8_t x1095 = -1;
uint32_t t26 = 5470U;
static uint8_t x1118 = 5U;
uint8_t x1120 = 22U;
uint16_t x1163 = 12U;
int32_t x1248 = 0;
uint8_t x1262 = 7U;
uint64_t x1263 = UINT64_MAX;
uint8_t x1264 = 53U;
volatile int8_t x1312 = 1;
int64_t x1323 = INT64_MIN;
int64_t x1341 = INT64_MIN;
uint64_t x1357 = 14418239072588LLU;
static int8_t x1359 = INT8_MAX;
uint8_t x1360 = 18U;
volatile int16_t x1364 = 2;
uint64_t x1394 = 285523536636658624LLU;
volatile int64_t x1396 = 50LL;
volatile uint32_t x1414 = 345U;
uint64_t x1415 = UINT64_MAX;
uint16_t x1604 = 0U;
uint8_t x1611 = 0U;
static int64_t t43 = -1855465555967990LL;
uint8_t x1784 = 4U;
uint32_t t44 = 1840851U;
uint32_t x1839 = 4824U;
static int16_t x1843 = -1;
static uint64_t t46 = 457993187251952LLU;
int64_t x1933 = INT64_MIN;
int8_t x1941 = 0;
static int32_t x2087 = -1;
static int16_t x2131 = -1;
uint32_t t53 = 24969688U;
volatile uint8_t x2198 = UINT8_MAX;
uint8_t x2244 = 0U;
int8_t x2305 = INT8_MIN;
uint32_t x2307 = UINT32_MAX;
volatile uint32_t t58 = 16701U;
uint8_t x2373 = UINT8_MAX;
volatile uint16_t x2448 = 25U;
uint64_t x2470 = UINT64_MAX;
uint8_t x2472 = 0U;
uint64_t t62 = 151242196LLU;
int32_t x2515 = INT32_MIN;
uint16_t x2549 = 62U;
static volatile uint16_t x2552 = 2U;
static volatile int16_t x2574 = INT16_MIN;
int64_t t65 = 43542842469520085LL;
uint64_t x2582 = 63404557298377957LLU;
int16_t x2587 = 187;
uint8_t x2594 = 19U;
uint32_t x2602 = 7U;
uint8_t x2749 = 6U;
uint16_t x2752 = 10U;
static volatile int64_t t70 = 1LL;
int64_t t71 = -2911156352931LL;
volatile int8_t x2852 = 5;
volatile int16_t x2878 = INT16_MAX;
volatile int64_t x2969 = -1LL;
volatile int8_t x3110 = INT8_MIN;
uint8_t x3111 = 0U;
static uint8_t x3112 = 12U;
uint16_t x3191 = UINT16_MAX;
uint16_t x3243 = UINT16_MAX;
int32_t t80 = -1041182388;
uint64_t x3325 = 790075114532LLU;
int32_t x3507 = INT32_MIN;
static volatile uint32_t t87 = 34U;
int8_t x3832 = 15;
int8_t x3880 = 1;
uint16_t x3928 = 2U;
uint8_t x3976 = 0U;
int32_t t96 = 0;
int8_t x4133 = -1;
int8_t x4136 = 0;
static int16_t x4195 = -1;


void f0(void) {
	static int64_t x85 = 1LL;
	int32_t x87 = INT32_MIN;
	uint8_t x88 = 0U;
	int64_t t0 = -50317LL;

	t0 = (((x85&x86)*x87)<<x88);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x93 = 12088373LL;
	static volatile int32_t x94 = -46230852;
	int8_t x95 = 53;
	uint16_t x96 = 0U;
	int64_t t1 = 20635760LL;

	t1 = (((x93&x94)*x95)<<x96);

	if (t1 != 194730692LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x109 = 10127U;
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MIN;

	t2 = (((x109&x110)*x111)<<x112);

	if (t2 != 18446743988758118400LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x117 = INT8_MIN;
	uint8_t x118 = 3U;
	int64_t x119 = INT64_MIN;
	static volatile int64_t t3 = -661LL;

	t3 = (((x117&x118)*x119)<<x120);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x141 = 9U;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	static volatile uint64_t t4 = 13194872702764LLU;

	t4 = (((x141&x142)*x143)<<x144);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	static volatile uint8_t x152 = 23U;
	static volatile uint32_t t5 = 564890564U;

	t5 = (((x149&x150)*x151)<<x152);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x249 = 32596;
	static volatile int16_t x252 = 17;
	uint64_t t6 = 2573990723753042LLU;

	t6 = (((x249&x250)*x251)<<x252);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x381 = -152;
	uint64_t x382 = UINT64_MAX;
	uint8_t x384 = 57U;
	volatile uint64_t t7 = 177822LLU;

	t7 = (((x381&x382)*x383)<<x384);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x522 = 2U;
	volatile uint16_t x523 = UINT16_MAX;

	t8 = (((x521&x522)*x523)<<x524);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x585 = 8224U;
	static int64_t x586 = INT64_MAX;
	uint16_t x587 = UINT16_MAX;
	volatile int8_t x588 = 1;
	int64_t t9 = 8044192544678LL;

	t9 = (((x585&x586)*x587)<<x588);

	if (t9 != 1077919680LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x641 = INT16_MIN;
	static int16_t x642 = 9;
	int16_t x643 = -21;
	uint8_t x644 = 31U;

	t10 = (((x641&x642)*x643)<<x644);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x653 = 14U;
	uint32_t x654 = UINT32_MAX;
	volatile uint16_t x655 = UINT16_MAX;
	uint8_t x656 = 1U;
	static volatile uint32_t t11 = 645478U;

	t11 = (((x653&x654)*x655)<<x656);

	if (t11 != 1834980U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x657 = -1LL;
	volatile uint8_t x658 = 0U;
	int8_t x659 = -1;
	uint8_t x660 = 2U;
	int64_t t12 = -4625590109167LL;

	t12 = (((x657&x658)*x659)<<x660);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x745 = INT64_MAX;
	static int16_t x746 = 487;
	uint64_t x747 = 1087232549317772596LLU;
	int64_t x748 = 7LL;
	volatile uint64_t t13 = 106721548LLU;

	t13 = (((x745&x746)*x747)<<x748);

	if (t13 != 390467463779907072LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x749 = 1706307U;
	int8_t x751 = 1;
	uint8_t x752 = 9U;
	volatile uint32_t t14 = 10U;

	t14 = (((x749&x750)*x751)<<x752);

	if (t14 != 34304U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x769 = INT32_MIN;
	uint16_t x770 = 127U;
	uint16_t x772 = 0U;

	t15 = (((x769&x770)*x771)<<x772);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x805 = 1154586184U;
	uint32_t x806 = 3U;
	int16_t x807 = INT16_MAX;
	uint32_t t16 = 2121352291U;

	t16 = (((x805&x806)*x807)<<x808);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x845 = -1;
	static int8_t x846 = 24;
	uint32_t x847 = UINT32_MAX;
	uint32_t t17 = 20089190U;

	t17 = (((x845&x846)*x847)<<x848);

	if (t17 != 4294967272U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x877 = 272U;
	uint8_t x879 = 114U;
	int8_t x880 = 9;
	int32_t t18 = 1746766;

	t18 = (((x877&x878)*x879)<<x880);

	if (t18 != 933888) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x889 = INT8_MAX;
	uint32_t x891 = 1258106804U;
	int16_t x892 = 0;
	volatile uint32_t t19 = 8022U;

	t19 = (((x889&x890)*x891)<<x892);

	if (t19 != 2516213608U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x929 = UINT32_MAX;
	uint32_t x930 = 96579U;
	static int8_t x931 = INT8_MAX;
	uint16_t x932 = 1U;

	t20 = (((x929&x930)*x931)<<x932);

	if (t20 != 24531066U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x969 = 49379991LLU;
	static int32_t x971 = 2187053;
	uint32_t x972 = 10U;
	volatile uint64_t t21 = 447649168111LLU;

	t21 = (((x969&x970)*x971)<<x972);

	if (t21 != 110588574995937280LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x985 = INT8_MIN;
	int32_t x987 = INT32_MAX;
	static int8_t x988 = 1;
	static volatile uint64_t t22 = 3906178065LLU;

	t22 = (((x985&x986)*x987)<<x988);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1013 = INT64_MIN;
	int32_t x1015 = INT32_MIN;
	volatile int64_t t23 = -11529881689023LL;

	t23 = (((x1013&x1014)*x1015)<<x1016);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1054 = 119U;
	int64_t x1055 = INT64_MAX;
	volatile int32_t x1056 = 33;
	volatile int64_t t24 = -1LL;

	t24 = (((x1053&x1054)*x1055)<<x1056);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1073 = 124982LLU;
	int8_t x1074 = INT8_MIN;
	int64_t x1075 = INT64_MIN;
	uint8_t x1076 = 23U;

	t25 = (((x1073&x1074)*x1075)<<x1076);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1093 = UINT32_MAX;
	uint32_t x1094 = UINT32_MAX;
	uint8_t x1096 = 12U;

	t26 = (((x1093&x1094)*x1095)<<x1096);

	if (t26 != 4096U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1117 = UINT8_MAX;
	uint8_t x1119 = 10U;
	int32_t t27 = 4245079;

	t27 = (((x1117&x1118)*x1119)<<x1120);

	if (t27 != 209715200) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1161 = 14306359878856359LL;
	static uint8_t x1162 = 0U;
	static volatile uint8_t x1164 = 31U;
	volatile int64_t t28 = -17LL;

	t28 = (((x1161&x1162)*x1163)<<x1164);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1197 = 69U;
	volatile uint64_t x1198 = UINT64_MAX;
	uint8_t x1199 = 31U;
	uint8_t x1200 = 1U;
	volatile uint64_t t29 = 27234586662107851LLU;

	t29 = (((x1197&x1198)*x1199)<<x1200);

	if (t29 != 4278LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1245 = INT8_MIN;
	volatile int8_t x1246 = -1;
	static int64_t x1247 = -1LL;
	int64_t t30 = 6254236140LL;

	t30 = (((x1245&x1246)*x1247)<<x1248);

	if (t30 != 128LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1261 = 2479043LLU;
	volatile uint64_t t31 = 430LLU;

	t31 = (((x1261&x1262)*x1263)<<x1264);

	if (t31 != 18419722475945328640LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1281 = 1;
	static int8_t x1282 = -1;
	uint8_t x1283 = 0U;
	uint8_t x1284 = 7U;
	volatile int32_t t32 = 23;

	t32 = (((x1281&x1282)*x1283)<<x1284);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1309 = 29LLU;
	int32_t x1310 = -1;
	int64_t x1311 = -6308425274234LL;
	volatile uint64_t t33 = 1570045322304604654LLU;

	t33 = (((x1309&x1310)*x1311)<<x1312);

	if (t33 != 18446378185043646044LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1321 = 430674399586LLU;
	uint8_t x1322 = UINT8_MAX;
	static uint32_t x1324 = 1U;
	uint64_t t34 = 152086031878999LLU;

	t34 = (((x1321&x1322)*x1323)<<x1324);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1342 = 192LLU;
	static uint16_t x1343 = 3778U;
	uint8_t x1344 = 1U;
	volatile uint64_t t35 = 40306LLU;

	t35 = (((x1341&x1342)*x1343)<<x1344);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1358 = 1974931289LL;
	static uint64_t t36 = 7635928LLU;

	t36 = (((x1357&x1358)*x1359)<<x1360);

	if (t36 != 8806476021760LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1361 = -1;
	static uint32_t x1362 = 416424U;
	volatile int8_t x1363 = 0;
	volatile uint32_t t37 = 100683U;

	t37 = (((x1361&x1362)*x1363)<<x1364);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1393 = 1;
	uint64_t x1395 = UINT64_MAX;
	uint64_t t38 = 7116935241LLU;

	t38 = (((x1393&x1394)*x1395)<<x1396);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1413 = -1;
	static uint8_t x1416 = 20U;
	volatile uint64_t t39 = 1911965582107485332LLU;

	t39 = (((x1413&x1414)*x1415)<<x1416);

	if (t39 != 18446744073347792896LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1433 = INT32_MIN;
	uint16_t x1434 = UINT16_MAX;
	int32_t x1435 = INT32_MIN;
	uint8_t x1436 = 30U;
	volatile int32_t t40 = 110087243;

	t40 = (((x1433&x1434)*x1435)<<x1436);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1601 = INT64_MIN;
	int64_t x1602 = INT64_MAX;
	int64_t x1603 = -63046642149001LL;
	int64_t t41 = 343197165614LL;

	t41 = (((x1601&x1602)*x1603)<<x1604);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1609 = INT8_MIN;
	volatile int16_t x1610 = INT16_MIN;
	int8_t x1612 = 2;
	volatile int32_t t42 = 26308562;

	t42 = (((x1609&x1610)*x1611)<<x1612);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1773 = -470038LL;
	int8_t x1774 = INT8_MIN;
	int32_t x1775 = -24767176;
	int8_t x1776 = 6;

	t43 = (((x1773&x1774)*x1775)<<x1776);

	if (t43 != 745224908374016LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x1781 = INT8_MIN;
	int32_t x1782 = 10394219;
	uint32_t x1783 = 437935U;

	t44 = (((x1781&x1782)*x1783)<<x1784);

	if (t44 != 1366581248U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1837 = 1856982022819765LLU;
	static int32_t x1838 = 3873258;
	uint32_t x1840 = 29U;
	volatile uint64_t t45 = 66547077117801LLU;

	t45 = (((x1837&x1838)*x1839)<<x1840);

	if (t45 != 3231240236222644224LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1841 = 5;
	uint64_t x1842 = 424LLU;
	uint8_t x1844 = 0U;

	t46 = (((x1841&x1842)*x1843)<<x1844);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1934 = 2882LLU;
	volatile uint32_t x1935 = 7U;
	static int8_t x1936 = 2;
	volatile uint64_t t47 = 14090605859763087LLU;

	t47 = (((x1933&x1934)*x1935)<<x1936);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1942 = -1;
	volatile int8_t x1943 = 2;
	int8_t x1944 = 24;
	volatile int32_t t48 = 117789010;

	t48 = (((x1941&x1942)*x1943)<<x1944);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1989 = INT8_MIN;
	uint64_t x1990 = 3162LLU;
	int16_t x1991 = INT16_MIN;
	uint8_t x1992 = 0U;
	static uint64_t t49 = 3494412LLU;

	t49 = (((x1989&x1990)*x1991)<<x1992);

	if (t49 != 18446744073608888320LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1997 = INT8_MAX;
	int32_t x1998 = -1;
	uint32_t x1999 = UINT32_MAX;
	uint16_t x2000 = 13U;
	volatile uint32_t t50 = 112764332U;

	t50 = (((x1997&x1998)*x1999)<<x2000);

	if (t50 != 4293926912U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2009 = 15U;
	volatile uint64_t x2010 = 1002607LLU;
	uint16_t x2011 = 36U;
	volatile int8_t x2012 = 2;
	uint64_t t51 = 91908621569883LLU;

	t51 = (((x2009&x2010)*x2011)<<x2012);

	if (t51 != 2160LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2085 = INT16_MIN;
	uint64_t x2086 = 6579796LLU;
	int8_t x2088 = 20;
	uint64_t t52 = 11LLU;

	t52 = (((x2085&x2086)*x2087)<<x2088);

	if (t52 != 18446737201761878016LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2129 = -1;
	uint32_t x2130 = 126U;
	int8_t x2132 = 17;

	t53 = (((x2129&x2130)*x2131)<<x2132);

	if (t53 != 4278452224U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2141 = 2LLU;
	int8_t x2142 = -41;
	volatile int64_t x2143 = INT64_MAX;
	int8_t x2144 = 56;
	uint64_t t54 = 84045770479756LLU;

	t54 = (((x2141&x2142)*x2143)<<x2144);

	if (t54 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x2165 = -1;
	uint8_t x2166 = 3U;
	uint64_t x2167 = 149363LLU;
	int8_t x2168 = 15;
	uint64_t t55 = 3909991325395486LLU;

	t55 = (((x2165&x2166)*x2167)<<x2168);

	if (t55 != 14682980352LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2197 = 540;
	static uint32_t x2199 = 20U;
	volatile uint8_t x2200 = 8U;
	volatile uint32_t t56 = 243194059U;

	t56 = (((x2197&x2198)*x2199)<<x2200);

	if (t56 != 143360U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x2241 = 368766182803684LLU;
	static volatile int32_t x2242 = INT32_MIN;
	int64_t x2243 = INT64_MIN;
	volatile uint64_t t57 = 8358256381LLU;

	t57 = (((x2241&x2242)*x2243)<<x2244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2306 = UINT16_MAX;
	static int32_t x2308 = 0;

	t58 = (((x2305&x2306)*x2307)<<x2308);

	if (t58 != 4294901888U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x2374 = INT64_MIN;
	static int64_t x2375 = -1LL;
	uint16_t x2376 = 0U;
	volatile int64_t t59 = -7252036920LL;

	t59 = (((x2373&x2374)*x2375)<<x2376);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2389 = -1;
	volatile uint8_t x2390 = 1U;
	volatile uint8_t x2391 = UINT8_MAX;
	volatile uint64_t x2392 = 3LLU;
	int32_t t60 = 46131;

	t60 = (((x2389&x2390)*x2391)<<x2392);

	if (t60 != 2040) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2445 = 0U;
	int16_t x2446 = INT16_MIN;
	int16_t x2447 = -1;
	volatile int32_t t61 = 10205;

	t61 = (((x2445&x2446)*x2447)<<x2448);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2469 = INT8_MIN;
	uint64_t x2471 = UINT64_MAX;

	t62 = (((x2469&x2470)*x2471)<<x2472);

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2513 = UINT8_MAX;
	int16_t x2514 = INT16_MIN;
	uint64_t x2516 = 0LLU;
	volatile int32_t t63 = -7;

	t63 = (((x2513&x2514)*x2515)<<x2516);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2550 = INT64_MIN;
	int64_t x2551 = 87564813LL;
	volatile int64_t t64 = 802661LL;

	t64 = (((x2549&x2550)*x2551)<<x2552);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2573 = UINT8_MAX;
	int64_t x2575 = INT64_MAX;
	static uint16_t x2576 = 21U;

	t65 = (((x2573&x2574)*x2575)<<x2576);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2581 = UINT64_MAX;
	int8_t x2583 = -1;
	uint8_t x2584 = 0U;
	static uint64_t t66 = 308019LLU;

	t66 = (((x2581&x2582)*x2583)<<x2584);

	if (t66 != 18383339516411173659LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x2585 = 4;
	int64_t x2586 = INT64_MIN;
	uint8_t x2588 = 1U;
	static volatile int64_t t67 = -219739LL;

	t67 = (((x2585&x2586)*x2587)<<x2588);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2593 = INT64_MIN;
	uint32_t x2595 = UINT32_MAX;
	static int16_t x2596 = 1;
	volatile int64_t t68 = 69LL;

	t68 = (((x2593&x2594)*x2595)<<x2596);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2601 = -1;
	int32_t x2603 = INT32_MIN;
	uint32_t x2604 = 3U;
	uint32_t t69 = 2262U;

	t69 = (((x2601&x2602)*x2603)<<x2604);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x2750 = -1LL;
	uint16_t x2751 = 204U;

	t70 = (((x2749&x2750)*x2751)<<x2752);

	if (t70 != 1253376LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x2777 = INT64_MIN;
	volatile uint16_t x2778 = 10746U;
	static int16_t x2779 = INT16_MIN;
	uint32_t x2780 = 22U;

	t71 = (((x2777&x2778)*x2779)<<x2780);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2849 = 112886592LLU;
	int64_t x2850 = INT64_MIN;
	volatile uint64_t x2851 = 8579LLU;
	uint64_t t72 = 32887305284984649LLU;

	t72 = (((x2849&x2850)*x2851)<<x2852);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2877 = INT32_MIN;
	uint16_t x2879 = 943U;
	int32_t x2880 = 1;
	volatile int32_t t73 = 6657;

	t73 = (((x2877&x2878)*x2879)<<x2880);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2953 = 0U;
	static uint64_t x2954 = 498426LLU;
	int16_t x2955 = INT16_MIN;
	volatile uint8_t x2956 = 9U;
	uint64_t t74 = 22203590382LLU;

	t74 = (((x2953&x2954)*x2955)<<x2956);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2957 = INT16_MIN;
	int16_t x2958 = -13606;
	int8_t x2959 = INT8_MIN;
	uint8_t x2960 = 1U;
	static int32_t t75 = 37350;

	t75 = (((x2957&x2958)*x2959)<<x2960);

	if (t75 != 8388608) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2970 = -1;
	uint16_t x2971 = 0U;
	int32_t x2972 = 2;
	int64_t t76 = -3875907237049LL;

	t76 = (((x2969&x2970)*x2971)<<x2972);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2993 = 0;
	int16_t x2994 = INT16_MAX;
	static volatile int32_t x2995 = INT32_MIN;
	uint8_t x2996 = 3U;
	volatile int32_t t77 = 11904;

	t77 = (((x2993&x2994)*x2995)<<x2996);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3109 = INT32_MIN;
	volatile int32_t t78 = 465;

	t78 = (((x3109&x3110)*x3111)<<x3112);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3189 = 870U;
	volatile int64_t x3190 = -1LL;
	uint8_t x3192 = 2U;
	volatile int64_t t79 = 10LL;

	t79 = (((x3189&x3190)*x3191)<<x3192);

	if (t79 != 228061800LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x3241 = 56;
	int16_t x3242 = INT16_MIN;
	static volatile uint8_t x3244 = 0U;

	t80 = (((x3241&x3242)*x3243)<<x3244);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3277 = INT8_MIN;
	int32_t x3278 = -30686;
	uint8_t x3279 = 0U;
	int8_t x3280 = 4;
	static volatile int32_t t81 = 791414;

	t81 = (((x3277&x3278)*x3279)<<x3280);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x3326 = INT8_MIN;
	static int16_t x3327 = 0;
	uint32_t x3328 = 22U;
	static uint64_t t82 = 8LLU;

	t82 = (((x3325&x3326)*x3327)<<x3328);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3341 = INT64_MAX;
	int32_t x3342 = 175909;
	uint64_t x3343 = 4135233LLU;
	static int64_t x3344 = 8LL;
	volatile uint64_t t83 = 29529LLU;

	t83 = (((x3341&x3342)*x3343)<<x3344);

	if (t83 != 186220723660032LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3381 = 41U;
	int8_t x3382 = -1;
	uint32_t x3383 = 754455U;
	static int8_t x3384 = 14;
	uint32_t t84 = 289U;

	t84 = (((x3381&x3382)*x3383)<<x3384);

	if (t84 != 4289445888U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x3477 = 208;
	volatile int8_t x3478 = INT8_MIN;
	static int8_t x3479 = INT8_MAX;
	int8_t x3480 = 0;
	volatile int32_t t85 = -1407;

	t85 = (((x3477&x3478)*x3479)<<x3480);

	if (t85 != 16256) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x3481 = 0;
	uint8_t x3482 = UINT8_MAX;
	uint64_t x3483 = 1836283315LLU;
	uint32_t x3484 = 0U;
	uint64_t t86 = 318582421851790744LLU;

	t86 = (((x3481&x3482)*x3483)<<x3484);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3505 = 2192;
	uint32_t x3506 = 8U;
	uint64_t x3508 = 6LLU;

	t87 = (((x3505&x3506)*x3507)<<x3508);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x3529 = -3;
	int16_t x3530 = -7;
	volatile int8_t x3531 = -1;
	int8_t x3532 = 1;
	int32_t t88 = -251652323;

	t88 = (((x3529&x3530)*x3531)<<x3532);

	if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3757 = INT64_MIN;
	static uint32_t x3758 = UINT32_MAX;
	uint8_t x3759 = 74U;
	int8_t x3760 = 4;
	int64_t t89 = 1LL;

	t89 = (((x3757&x3758)*x3759)<<x3760);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x3829 = 6679505LLU;
	volatile uint16_t x3830 = 13923U;
	uint8_t x3831 = 5U;
	uint64_t t90 = 540482LLU;

	t90 = (((x3829&x3830)*x3831)<<x3832);

	if (t90 != 1436712960LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3877 = 27U;
	int64_t x3878 = 3326528LL;
	uint64_t x3879 = 11272794747277950LLU;
	static uint64_t t91 = 159032763611LLU;

	t91 = (((x3877&x3878)*x3879)<<x3880);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x3925 = UINT32_MAX;
	uint64_t x3926 = 66210905995882LLU;
	uint64_t x3927 = 13701765186683LLU;
	static volatile uint64_t t92 = 4630053553LLU;

	t92 = (((x3925&x3926)*x3927)<<x3928);

	if (t92 != 3704848678061925304LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3969 = 13667U;
	int64_t x3970 = INT64_MIN;
	volatile uint32_t x3971 = 39U;
	static volatile int8_t x3972 = 1;
	static volatile int64_t t93 = -16505203561LL;

	t93 = (((x3969&x3970)*x3971)<<x3972);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x3973 = 5270261LL;
	uint64_t x3974 = UINT64_MAX;
	uint64_t x3975 = 677866LLU;
	volatile uint64_t t94 = 161971349LLU;

	t94 = (((x3973&x3974)*x3975)<<x3976);

	if (t94 != 3572530743026LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3989 = 6240163;
	uint32_t x3990 = 12833U;
	volatile uint8_t x3991 = 0U;
	uint8_t x3992 = 15U;
	volatile uint32_t t95 = 0U;

	t95 = (((x3989&x3990)*x3991)<<x3992);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x4113 = -210;
	static int16_t x4114 = 0;
	int32_t x4115 = INT32_MIN;
	uint64_t x4116 = 1LLU;

	t96 = (((x4113&x4114)*x4115)<<x4116);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4134 = 263;
	volatile uint64_t x4135 = 352222738LLU;
	static volatile uint64_t t97 = 43749751310443LLU;

	t97 = (((x4133&x4134)*x4135)<<x4136);

	if (t97 != 92634580094LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4177 = 7U;
	int8_t x4178 = INT8_MIN;
	static int16_t x4179 = -1;
	uint16_t x4180 = 0U;
	static volatile int32_t t98 = -50035;

	t98 = (((x4177&x4178)*x4179)<<x4180);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4193 = INT16_MIN;
	int32_t x4194 = -1;
	uint8_t x4196 = 1U;
	int32_t t99 = 7;

	t99 = (((x4193&x4194)*x4195)<<x4196);

	if (t99 != 65536) { NG(); } else { ; }
	
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

