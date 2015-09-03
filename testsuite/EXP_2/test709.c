#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
uint64_t x7 = 3LLU;
int64_t x90 = INT64_MIN;
uint32_t x343 = 61299370U;
static int64_t x422 = INT64_MIN;
uint16_t x423 = 1U;
int64_t t7 = -208484930773LL;
volatile uint16_t x499 = 818U;
volatile int64_t t10 = 11725LL;
volatile int64_t t11 = 42494791LL;
static volatile uint16_t x659 = UINT16_MAX;
volatile int32_t x721 = 236;
static int8_t x722 = INT8_MAX;
int64_t x753 = -1LL;
uint32_t x862 = 8973U;
uint64_t x898 = 2300083035252LLU;
int8_t x913 = -1;
int16_t x914 = -5;
volatile uint8_t x1033 = UINT8_MAX;
volatile uint8_t x1158 = UINT8_MAX;
uint8_t x1159 = 1U;
int8_t x1167 = -9;
volatile int64_t t25 = -564756996704764LL;
uint64_t x1206 = 41119136853967041LLU;
static uint32_t x1316 = 63U;
uint32_t x1351 = UINT32_MAX;
uint8_t x1354 = UINT8_MAX;
static volatile uint32_t t31 = 49777U;
int64_t x1375 = INT64_MIN;
int16_t x1376 = 3;
static volatile int64_t t32 = -64010761563121630LL;
int32_t x1407 = -1;
uint16_t x1408 = 4U;
volatile uint32_t t37 = 979572U;
volatile int64_t x1867 = -1LL;
int64_t t40 = -276LL;
volatile int8_t x1921 = INT8_MAX;
uint8_t x1924 = 0U;
int64_t x1937 = INT64_MAX;
static int16_t x1938 = INT16_MIN;
volatile int16_t x1981 = 92;
int16_t x2009 = 1564;
static uint64_t x2011 = 4LLU;
static uint64_t t48 = 44765992858LLU;
int8_t x2183 = -3;
int32_t x2215 = -1;
uint32_t x2224 = 17U;
volatile uint64_t t51 = 3412313485499742311LLU;
int16_t x2266 = 370;
volatile uint64_t x2268 = 3LLU;
uint64_t x2354 = 4151LLU;
uint16_t x2356 = 21U;
int16_t x2360 = 12;
int16_t x2419 = 167;
volatile uint64_t t58 = 7149836539991243LLU;
volatile int8_t x2629 = 1;
int32_t x2715 = INT32_MAX;
uint8_t x2716 = 1U;
static volatile uint32_t x2732 = 14U;
uint8_t x2757 = UINT8_MAX;
int32_t x2758 = -1;
uint8_t x2760 = 30U;
volatile uint32_t t62 = 23026U;
volatile uint64_t t63 = 66196LLU;
int32_t x2863 = 615808;
int8_t x2908 = 0;
int32_t x2958 = INT32_MIN;
uint8_t x2960 = 1U;
int32_t x3025 = INT32_MIN;
volatile int8_t x3026 = 5;
volatile uint64_t t68 = 1327676LLU;
uint32_t t69 = 7426U;
int16_t x3130 = -1;
int16_t x3131 = -1;
uint8_t x3132 = 5U;
uint32_t x3197 = 9896U;
static int64_t x3283 = -5808256LL;
int8_t x3284 = 3;
static uint32_t x3299 = 195745437U;
uint8_t x3472 = 0U;
volatile uint8_t x3509 = 2U;
uint32_t t79 = 126U;
int32_t x3525 = INT32_MIN;
static volatile uint64_t x3526 = 292258272542LLU;
int8_t x3527 = 3;
int64_t t81 = 11743728LL;
int16_t x3616 = 5;
int16_t x3661 = -114;
volatile int8_t x3732 = 0;
int32_t t89 = -25;
static uint8_t x4001 = 6U;
uint32_t t90 = 1U;
int8_t x4164 = 0;
static int64_t x4169 = INT64_MAX;
int8_t x4171 = -2;
int64_t x4203 = INT64_MAX;
uint8_t x4205 = 51U;
static uint8_t x4206 = 40U;
volatile int64_t x4246 = INT64_MAX;
int8_t x4247 = -1;


void f0(void) {
	static uint8_t x6 = UINT8_MAX;
	uint8_t x8 = 7U;
	volatile uint64_t t0 = 415101474116LLU;

	t0 = ((x5*(x6%x7))>>x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x69 = -12830;
	volatile int64_t x70 = -1LL;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = 41;
	static volatile int64_t t1 = 213206836593275LL;

	t1 = ((x69*(x70%x71))>>x72);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x89 = -20;
	int64_t x91 = INT64_MAX;
	uint16_t x92 = 12U;
	int64_t t2 = 3332260LL;

	t2 = ((x89*(x90%x91))>>x92);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x105 = 0U;
	int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	volatile uint8_t x108 = 24U;
	volatile int32_t t3 = -179178;

	t3 = ((x105*(x106%x107))>>x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int8_t x138 = -3;
	int16_t x139 = -2830;
	int32_t x140 = 3;
	volatile int32_t t4 = -266364441;

	t4 = ((x137*(x138%x139))>>x140);

	if (t4 != 48) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x341 = 895;
	static int16_t x342 = INT16_MAX;
	volatile uint8_t x344 = 24U;
	volatile uint32_t t5 = 913U;

	t5 = ((x341*(x342%x343))>>x344);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x385 = 22892LLU;
	static int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	static uint32_t x388 = 7U;
	uint64_t t6 = 23924349LLU;

	t6 = ((x385*(x386%x387))>>x388);

	if (t6 != 5860173LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x421 = -2854963LL;
	static int32_t x424 = 7;

	t7 = ((x421*(x422%x423))>>x424);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x461 = 11;
	int16_t x462 = -2857;
	uint64_t x463 = 6LLU;
	int32_t x464 = 0;
	volatile uint64_t t8 = 766202LLU;

	t8 = ((x461*(x462%x463))>>x464);

	if (t8 != 33LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x497 = UINT32_MAX;
	int8_t x498 = INT8_MAX;
	volatile int8_t x500 = 1;
	uint32_t t9 = 8U;

	t9 = ((x497*(x498%x499))>>x500);

	if (t9 != 2147483584U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x573 = INT16_MAX;
	volatile int32_t x574 = INT32_MAX;
	static int64_t x575 = INT64_MIN;
	static uint16_t x576 = 0U;

	t10 = ((x573*(x574%x575))>>x576);

	if (t10 != 70366596661249LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x633 = 232U;
	volatile uint16_t x634 = 0U;
	volatile int64_t x635 = INT64_MIN;
	int32_t x636 = 1;

	t11 = ((x633*(x634%x635))>>x636);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x657 = 19754U;
	uint32_t x658 = UINT32_MAX;
	volatile uint8_t x660 = 2U;
	volatile uint32_t t12 = 1623071475U;

	t12 = ((x657*(x658%x659))>>x660);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x677 = 784307;
	volatile int16_t x678 = INT16_MIN;
	uint8_t x679 = 1U;
	volatile int8_t x680 = 5;
	static int32_t t13 = -57;

	t13 = ((x677*(x678%x679))>>x680);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x723 = INT8_MIN;
	int8_t x724 = 14;
	int32_t t14 = -8;

	t14 = ((x721*(x722%x723))>>x724);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x754 = INT8_MIN;
	int64_t x755 = INT64_MAX;
	uint8_t x756 = 37U;
	volatile int64_t t15 = 166782790513751073LL;

	t15 = ((x753*(x754%x755))>>x756);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x829 = UINT64_MAX;
	uint64_t x830 = UINT64_MAX;
	uint8_t x831 = 4U;
	volatile int8_t x832 = 14;
	uint64_t t16 = 2LLU;

	t16 = ((x829*(x830%x831))>>x832);

	if (t16 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x861 = INT8_MIN;
	uint32_t x863 = 487U;
	int16_t x864 = 2;
	uint32_t t17 = 18U;

	t17 = ((x861*(x862%x863))>>x864);

	if (t17 != 1073735200U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x897 = 7;
	uint16_t x899 = 10U;
	static uint32_t x900 = 43U;
	uint64_t t18 = 718406068824720594LLU;

	t18 = ((x897*(x898%x899))>>x900);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x901 = 777835562U;
	uint32_t x902 = 404052U;
	static uint8_t x903 = 30U;
	int8_t x904 = 0;
	static volatile uint32_t t19 = 25U;

	t19 = ((x901*(x902%x903))>>x904);

	if (t19 != 744092152U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x915 = 5456U;
	uint8_t x916 = 22U;
	volatile uint32_t t20 = 309131113U;

	t20 = ((x913*(x914%x915))>>x916);

	if (t20 != 1023U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1034 = INT64_MAX;
	int8_t x1035 = INT8_MAX;
	volatile uint64_t x1036 = 6LLU;
	volatile int64_t t21 = -121299816622369961LL;

	t21 = ((x1033*(x1034%x1035))>>x1036);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1129 = UINT32_MAX;
	static int64_t x1130 = INT64_MAX;
	int8_t x1131 = INT8_MIN;
	volatile uint8_t x1132 = 24U;
	volatile int64_t t22 = 1LL;

	t22 = ((x1129*(x1130%x1131))>>x1132);

	if (t22 != 32511LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1141 = 89U;
	uint16_t x1142 = 3U;
	uint8_t x1143 = 3U;
	static volatile uint8_t x1144 = 8U;
	int32_t t23 = -97646;

	t23 = ((x1141*(x1142%x1143))>>x1144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1157 = INT8_MAX;
	volatile int16_t x1160 = 0;
	volatile int32_t t24 = 24032;

	t24 = ((x1157*(x1158%x1159))>>x1160);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1165 = 1LL;
	volatile uint16_t x1166 = UINT16_MAX;
	int16_t x1168 = 0;

	t25 = ((x1165*(x1166%x1167))>>x1168);

	if (t25 != 6LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1201 = INT8_MIN;
	int16_t x1202 = INT16_MIN;
	int64_t x1203 = INT64_MAX;
	int8_t x1204 = 16;
	volatile int64_t t26 = -405731252549LL;

	t26 = ((x1201*(x1202%x1203))>>x1204);

	if (t26 != 64LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1205 = 2U;
	int32_t x1207 = -83017896;
	uint16_t x1208 = 4U;
	uint64_t t27 = 5127008219066LLU;

	t27 = ((x1205*(x1206%x1207))>>x1208);

	if (t27 != 5139892106745880LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1249 = UINT8_MAX;
	static uint8_t x1250 = 9U;
	int16_t x1251 = -27;
	uint8_t x1252 = 7U;
	static int32_t t28 = -107119;

	t28 = ((x1249*(x1250%x1251))>>x1252);

	if (t28 != 17) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1313 = UINT16_MAX;
	uint16_t x1314 = UINT16_MAX;
	volatile int64_t x1315 = -1LL;
	static volatile int64_t t29 = 525229658LL;

	t29 = ((x1313*(x1314%x1315))>>x1316);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1349 = UINT16_MAX;
	int16_t x1350 = INT16_MIN;
	static uint16_t x1352 = 1U;
	static uint32_t t30 = 1U;

	t30 = ((x1349*(x1350%x1351))>>x1352);

	if (t30 != 1073758208U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1353 = -1;
	uint32_t x1355 = UINT32_MAX;
	int8_t x1356 = 31;

	t31 = ((x1353*(x1354%x1355))>>x1356);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1373 = INT64_MAX;
	volatile int8_t x1374 = 1;

	t32 = ((x1373*(x1374%x1375))>>x1376);

	if (t32 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1405 = UINT16_MAX;
	int16_t x1406 = INT16_MIN;
	int32_t t33 = 34365899;

	t33 = ((x1405*(x1406%x1407))>>x1408);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1453 = INT16_MAX;
	static int64_t x1454 = 8091LL;
	int32_t x1455 = -1;
	int32_t x1456 = 46;
	int64_t t34 = 194126498892532043LL;

	t34 = ((x1453*(x1454%x1455))>>x1456);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x1557 = UINT64_MAX;
	int32_t x1558 = INT32_MAX;
	int64_t x1559 = -1LL;
	static uint64_t x1560 = 10LLU;
	uint64_t t35 = 1204005739401093907LLU;

	t35 = ((x1557*(x1558%x1559))>>x1560);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1581 = INT16_MIN;
	int8_t x1582 = INT8_MIN;
	uint64_t x1583 = UINT64_MAX;
	uint8_t x1584 = 5U;
	volatile uint64_t t36 = 7568428LLU;

	t36 = ((x1581*(x1582%x1583))>>x1584);

	if (t36 != 131072LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1677 = -197639;
	static uint32_t x1678 = 21486096U;
	volatile int8_t x1679 = -1;
	uint16_t x1680 = 1U;

	t37 = ((x1677*(x1678%x1679))>>x1680);

	if (t37 != 616064200U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1785 = INT32_MIN;
	int16_t x1786 = INT16_MIN;
	uint64_t x1787 = 2161440012039288027LLU;
	uint8_t x1788 = 10U;
	uint64_t t38 = 852374767863559942LLU;

	t38 = ((x1785*(x1786%x1787))>>x1788);

	if (t38 != 16021004782403584LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1789 = 2U;
	uint8_t x1790 = UINT8_MAX;
	uint16_t x1791 = 3283U;
	uint16_t x1792 = 1U;
	volatile int32_t t39 = 14601605;

	t39 = ((x1789*(x1790%x1791))>>x1792);

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x1865 = -1;
	uint8_t x1866 = 0U;
	volatile uint8_t x1868 = 14U;

	t40 = ((x1865*(x1866%x1867))>>x1868);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1922 = INT32_MIN;
	uint8_t x1923 = 1U;
	volatile int32_t t41 = 438263562;

	t41 = ((x1921*(x1922%x1923))>>x1924);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x1939 = INT8_MIN;
	int8_t x1940 = 0;
	volatile int64_t t42 = -15854LL;

	t42 = ((x1937*(x1938%x1939))>>x1940);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1982 = INT8_MAX;
	static int8_t x1983 = 47;
	uint8_t x1984 = 25U;
	static volatile int32_t t43 = 3824897;

	t43 = ((x1981*(x1982%x1983))>>x1984);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2010 = -1;
	int8_t x2012 = 1;
	volatile uint64_t t44 = 406484232957166880LLU;

	t44 = ((x2009*(x2010%x2011))>>x2012);

	if (t44 != 2346LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2021 = UINT16_MAX;
	volatile int8_t x2022 = 0;
	volatile int32_t x2023 = 860;
	uint16_t x2024 = 2U;
	volatile int32_t t45 = -665723;

	t45 = ((x2021*(x2022%x2023))>>x2024);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2025 = INT32_MAX;
	int16_t x2026 = 768;
	int8_t x2027 = 1;
	static uint64_t x2028 = 6LLU;
	volatile int32_t t46 = 3677668;

	t46 = ((x2025*(x2026%x2027))>>x2028);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2053 = -1LL;
	int32_t x2054 = -1;
	uint16_t x2055 = 8265U;
	int8_t x2056 = 16;
	volatile int64_t t47 = -126269LL;

	t47 = ((x2053*(x2054%x2055))>>x2056);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2081 = 11679676208321973LLU;
	static int64_t x2082 = INT64_MAX;
	uint32_t x2083 = UINT32_MAX;
	uint8_t x2084 = 0U;

	t48 = ((x2081*(x2082%x2083))>>x2084);

	if (t48 != 4869812040962861643LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2181 = UINT8_MAX;
	uint8_t x2182 = 1U;
	int8_t x2184 = 0;
	volatile int32_t t49 = -37975716;

	t49 = ((x2181*(x2182%x2183))>>x2184);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2213 = 211U;
	int32_t x2214 = INT32_MAX;
	uint8_t x2216 = 8U;
	static int32_t t50 = -1261908;

	t50 = ((x2213*(x2214%x2215))>>x2216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x2221 = INT64_MIN;
	int32_t x2222 = INT32_MAX;
	uint64_t x2223 = UINT64_MAX;

	t51 = ((x2221*(x2222%x2223))>>x2224);

	if (t51 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2241 = 516LLU;
	uint8_t x2242 = UINT8_MAX;
	volatile uint64_t x2243 = 38LLU;
	int32_t x2244 = 24;
	static uint64_t t52 = 37500748LLU;

	t52 = ((x2241*(x2242%x2243))>>x2244);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2265 = INT8_MAX;
	int16_t x2267 = INT16_MAX;
	int32_t t53 = 2095945;

	t53 = ((x2265*(x2266%x2267))>>x2268);

	if (t53 != 5873) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2353 = INT64_MIN;
	static int16_t x2355 = INT16_MIN;
	uint64_t t54 = 506836516787253867LLU;

	t54 = ((x2353*(x2354%x2355))>>x2356);

	if (t54 != 4398046511104LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2357 = -4210466426LL;
	int64_t x2358 = INT64_MIN;
	int8_t x2359 = INT8_MAX;
	int64_t t55 = 4192LL;

	t55 = ((x2357*(x2358%x2359))>>x2360);

	if (t55 != 1027945LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2417 = -11001;
	static volatile int8_t x2418 = INT8_MIN;
	uint8_t x2420 = 26U;
	int32_t t56 = 315;

	t56 = ((x2417*(x2418%x2419))>>x2420);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2445 = INT8_MIN;
	int32_t x2446 = INT32_MIN;
	volatile uint64_t x2447 = 976289249LLU;
	uint8_t x2448 = 10U;
	uint64_t t57 = 62931LLU;

	t57 = ((x2445*(x2446%x2447))>>x2448);

	if (t57 != 18014398432148350LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2569 = 4LLU;
	int16_t x2570 = -11227;
	int8_t x2571 = 2;
	volatile uint8_t x2572 = 0U;

	t58 = ((x2569*(x2570%x2571))>>x2572);

	if (t58 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2630 = UINT64_MAX;
	int16_t x2631 = INT16_MAX;
	volatile uint32_t x2632 = 30U;
	uint64_t t59 = 57409779LLU;

	t59 = ((x2629*(x2630%x2631))>>x2632);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x2713 = INT64_MIN;
	static uint64_t x2714 = UINT64_MAX;
	volatile uint64_t t60 = 883325LLU;

	t60 = ((x2713*(x2714%x2715))>>x2716);

	if (t60 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2729 = 22U;
	static uint16_t x2730 = 5U;
	uint16_t x2731 = UINT16_MAX;
	int32_t t61 = -46;

	t61 = ((x2729*(x2730%x2731))>>x2732);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x2759 = 26072U;

	t62 = ((x2757*(x2758%x2759))>>x2760);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2853 = INT8_MIN;
	static uint64_t x2854 = 4068520801422636LLU;
	int32_t x2855 = -291;
	uint8_t x2856 = 1U;

	t63 = ((x2853*(x2854%x2855))>>x2856);

	if (t63 != 8962986705563727104LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2861 = UINT16_MAX;
	uint64_t x2862 = 711476077986535LLU;
	static volatile uint16_t x2864 = 1U;
	uint64_t t64 = 984959861236811010LLU;

	t64 = ((x2861*(x2862%x2863))>>x2864);

	if (t64 != 7116806092LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2905 = INT16_MIN;
	int32_t x2906 = INT32_MIN;
	int32_t x2907 = -2935;
	volatile int32_t t65 = 1561887;

	t65 = ((x2905*(x2906%x2907))>>x2908);

	if (t65 != 93323264) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x2921 = -83965246620551339LL;
	int32_t x2922 = INT32_MIN;
	int8_t x2923 = INT8_MIN;
	uint64_t x2924 = 31LLU;
	int64_t t66 = 21723909018282497LL;

	t66 = ((x2921*(x2922%x2923))>>x2924);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x2957 = -73LL;
	int64_t x2959 = -243661745LL;
	int64_t t67 = 57224497576LL;

	t67 = ((x2957*(x2958%x2959))>>x2960);

	if (t67 != 7233923612LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3027 = 34882861437LLU;
	int16_t x3028 = 55;

	t68 = ((x3025*(x3026%x3027))>>x3028);

	if (t68 != 511LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3061 = -8;
	static uint8_t x3062 = 89U;
	uint32_t x3063 = UINT32_MAX;
	uint16_t x3064 = 0U;

	t69 = ((x3061*(x3062%x3063))>>x3064);

	if (t69 != 4294966584U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3065 = 10631312424LLU;
	uint64_t x3066 = 0LLU;
	uint16_t x3067 = 10479U;
	uint16_t x3068 = 7U;
	volatile uint64_t t70 = 3LLU;

	t70 = ((x3065*(x3066%x3067))>>x3068);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3129 = 2662159U;
	uint32_t t71 = 949U;

	t71 = ((x3129*(x3130%x3131))>>x3132);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3198 = 129U;
	uint8_t x3199 = 15U;
	uint8_t x3200 = 5U;
	volatile uint32_t t72 = 10U;

	t72 = ((x3197*(x3198%x3199))>>x3200);

	if (t72 != 2783U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3201 = 44U;
	int64_t x3202 = INT64_MAX;
	int8_t x3203 = -1;
	static uint16_t x3204 = 5U;
	volatile int64_t t73 = 1LL;

	t73 = ((x3201*(x3202%x3203))>>x3204);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3225 = INT32_MAX;
	uint16_t x3226 = UINT16_MAX;
	int16_t x3227 = 2;
	volatile int16_t x3228 = 8;
	volatile int32_t t74 = -12538143;

	t74 = ((x3225*(x3226%x3227))>>x3228);

	if (t74 != 8388607) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3281 = INT8_MIN;
	volatile int32_t x3282 = INT32_MIN;
	volatile int64_t t75 = 4629616737607LL;

	t75 = ((x3281*(x3282%x3283))>>x3284);

	if (t75 != 67794944LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x3297 = 422677175093066LL;
	static uint16_t x3298 = 17589U;
	uint16_t x3300 = 1U;
	int64_t t76 = -568LL;

	t76 = ((x3297*(x3298%x3299))>>x3300);

	if (t76 != 3717234416355968937LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x3345 = INT32_MAX;
	static int64_t x3346 = 189LL;
	int32_t x3347 = -1;
	static uint8_t x3348 = 3U;
	volatile int64_t t77 = -224078LL;

	t77 = ((x3345*(x3346%x3347))>>x3348);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x3469 = 2552U;
	int16_t x3470 = INT16_MIN;
	static volatile uint16_t x3471 = 3380U;
	uint32_t t78 = 7811U;

	t78 = ((x3469*(x3470%x3471))>>x3472);

	if (t78 != 4288975200U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3510 = -15;
	uint32_t x3511 = UINT32_MAX;
	uint16_t x3512 = 1U;

	t79 = ((x3509*(x3510%x3511))>>x3512);

	if (t79 != 2147483633U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x3528 = 3U;
	static volatile uint64_t t80 = 62598998528LLU;

	t80 = ((x3525*(x3526%x3527))>>x3528);

	if (t80 != 2305843008676823040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x3549 = -1184567665LL;
	int64_t x3550 = INT64_MIN;
	static volatile int16_t x3551 = INT16_MIN;
	uint8_t x3552 = 2U;

	t81 = ((x3549*(x3550%x3551))>>x3552);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x3613 = -1;
	volatile uint64_t x3614 = 276243749986248692LLU;
	volatile int64_t x3615 = INT64_MAX;
	uint64_t t82 = 3983371578496336752LLU;

	t82 = ((x3613*(x3614%x3615))>>x3616);

	if (t82 != 567828135116353216LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3662 = -1;
	int64_t x3663 = INT64_MIN;
	int32_t x3664 = 10;
	volatile int64_t t83 = -827169LL;

	t83 = ((x3661*(x3662%x3663))>>x3664);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x3729 = 2LL;
	static uint64_t x3730 = 16886158803LLU;
	uint64_t x3731 = UINT64_MAX;
	volatile uint64_t t84 = 1850698127859543LLU;

	t84 = ((x3729*(x3730%x3731))>>x3732);

	if (t84 != 33772317606LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x3737 = UINT16_MAX;
	static uint64_t x3738 = 3949022333886LLU;
	uint32_t x3739 = 40925278U;
	static uint8_t x3740 = 24U;
	uint64_t t85 = 14578287070556554LLU;

	t85 = ((x3737*(x3738%x3739))>>x3740);

	if (t85 != 76107LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x3749 = INT64_MIN;
	int32_t x3750 = 153917;
	int8_t x3751 = 1;
	int16_t x3752 = 0;
	volatile int64_t t86 = -112LL;

	t86 = ((x3749*(x3750%x3751))>>x3752);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3809 = INT8_MIN;
	int16_t x3810 = -14354;
	int64_t x3811 = -1LL;
	static volatile uint8_t x3812 = 5U;
	volatile int64_t t87 = -19036451087LL;

	t87 = ((x3809*(x3810%x3811))>>x3812);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3897 = UINT32_MAX;
	volatile uint64_t x3898 = 18476817336984LLU;
	int8_t x3899 = -1;
	uint16_t x3900 = 29U;
	uint64_t t88 = 1159198072139923448LLU;

	t88 = ((x3897*(x3898%x3899))>>x3900);

	if (t88 != 33303940688LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3901 = 7;
	uint16_t x3902 = 841U;
	int16_t x3903 = INT16_MIN;
	static uint8_t x3904 = 19U;

	t89 = ((x3901*(x3902%x3903))>>x3904);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4002 = UINT32_MAX;
	int32_t x4003 = INT32_MIN;
	uint8_t x4004 = 3U;

	t90 = ((x4001*(x4002%x4003))>>x4004);

	if (t90 != 536870911U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4005 = -3;
	int64_t x4006 = -9LL;
	int32_t x4007 = -1;
	uint8_t x4008 = 2U;
	static volatile int64_t t91 = -7LL;

	t91 = ((x4005*(x4006%x4007))>>x4008);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x4161 = -1;
	uint64_t x4162 = 1694437438399972369LLU;
	int32_t x4163 = INT32_MIN;
	uint64_t t92 = 510314912116LLU;

	t92 = ((x4161*(x4162%x4163))>>x4164);

	if (t92 != 16752306635309579247LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4170 = 166747;
	int8_t x4172 = 1;
	int64_t t93 = 5121927451533LL;

	t93 = ((x4169*(x4170%x4171))>>x4172);

	if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4177 = 521194645LLU;
	int16_t x4178 = INT16_MAX;
	volatile uint16_t x4179 = 17U;
	static volatile uint8_t x4180 = 5U;
	static uint64_t t94 = 137292883LLU;

	t94 = ((x4177*(x4178%x4179))>>x4180);

	if (t94 != 130298661LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x4201 = INT32_MIN;
	int8_t x4202 = INT8_MIN;
	volatile uint16_t x4204 = 0U;
	int64_t t95 = -11670989060119LL;

	t95 = ((x4201*(x4202%x4203))>>x4204);

	if (t95 != 274877906944LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4207 = INT64_MIN;
	static int8_t x4208 = 22;
	int64_t t96 = 5496505LL;

	t96 = ((x4205*(x4206%x4207))>>x4208);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4245 = -10;
	int16_t x4248 = 0;
	static volatile int64_t t97 = 413694571LL;

	t97 = ((x4245*(x4246%x4247))>>x4248);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4377 = -1LL;
	int32_t x4378 = 3;
	int16_t x4379 = -1;
	static volatile uint8_t x4380 = 3U;
	static int64_t t98 = 41575629LL;

	t98 = ((x4377*(x4378%x4379))>>x4380);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4397 = 3479865551248545922LLU;
	volatile int32_t x4398 = INT32_MIN;
	uint64_t x4399 = 7082LLU;
	uint32_t x4400 = 0U;
	volatile uint64_t t99 = 1392122056191487LLU;

	t99 = ((x4397*(x4398%x4399))>>x4400);

	if (t99 != 7977325057864551856LLU) { NG(); } else { ; }
	
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

