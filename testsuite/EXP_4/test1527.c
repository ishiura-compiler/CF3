#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MAX;
int64_t x8 = INT64_MIN;
volatile uint16_t x18 = 2U;
int16_t x19 = INT16_MIN;
volatile uint8_t x41 = UINT8_MAX;
volatile int32_t t2 = 9471;
int32_t x143 = INT32_MAX;
int32_t x144 = -1;
volatile uint64_t x175 = UINT64_MAX;
uint32_t x245 = 213U;
int16_t x247 = INT16_MAX;
uint8_t x314 = 0U;
int32_t x387 = INT32_MIN;
int32_t x388 = -39564;
int8_t x415 = INT8_MIN;
uint16_t x416 = UINT16_MAX;
uint32_t x451 = 1914U;
volatile uint64_t t13 = 1LLU;
static int32_t x578 = -1;
volatile uint8_t x580 = UINT8_MAX;
volatile int8_t x594 = 0;
volatile uint16_t x595 = 21U;
int8_t x602 = 4;
static volatile uint32_t t17 = 4U;
volatile uint8_t x747 = 50U;
volatile uint16_t x912 = UINT16_MAX;
static volatile int64_t t20 = -6517877802LL;
int64_t x945 = 1LL;
uint8_t x962 = 0U;
volatile int8_t x964 = 7;
static uint32_t x965 = 6806U;
uint64_t x998 = UINT64_MAX;
uint32_t x1000 = UINT32_MAX;
volatile int32_t t24 = -3525;
volatile uint64_t x1053 = UINT64_MAX;
int16_t x1214 = 0;
volatile int64_t x1215 = -4491784873579LL;
uint16_t x1258 = 5U;
static int32_t t30 = 46081;
int64_t x1296 = INT64_MAX;
uint64_t x1381 = 14073933LLU;
static int32_t x1383 = 952396;
int32_t t34 = 15399;
int8_t x1508 = INT8_MIN;
uint64_t x1525 = 884854958LLU;
int32_t x1528 = INT32_MAX;
static volatile uint64_t t36 = 350324710382133LLU;
uint16_t x1797 = UINT16_MAX;
static uint16_t x1854 = 1U;
volatile uint64_t t43 = UINT64_MAX;
static volatile int32_t x2010 = -1;
int8_t x2012 = INT8_MAX;
volatile int16_t x2091 = INT16_MIN;
int8_t x2162 = -1;
int16_t x2164 = -1;
volatile int32_t t47 = -73578;
int8_t x2187 = -1;
volatile int64_t t49 = INT64_MAX;
static uint16_t x2221 = 11U;
int16_t x2223 = INT16_MIN;
uint16_t x2224 = 12U;
int32_t t50 = 1475;
volatile uint8_t x2266 = 5U;
uint32_t x2310 = UINT32_MAX;
static int8_t x2319 = INT8_MAX;
volatile int32_t t53 = -147;
volatile uint8_t x2330 = 0U;
uint32_t t55 = UINT32_MAX;
static uint8_t x2422 = 2U;
uint16_t x2423 = 31U;
volatile uint32_t t57 = 322379U;
int64_t x2458 = 0LL;
int16_t x2459 = 1503;
int32_t x2532 = INT32_MAX;
volatile int32_t t62 = 86;
int64_t x2598 = -1LL;
volatile uint64_t x2709 = 667992563355LLU;
volatile int16_t x2710 = 0;
volatile int64_t x2711 = -420781833660215220LL;
static volatile uint64_t t66 = 35LLU;
int8_t x2736 = INT8_MAX;
uint64_t x2737 = UINT64_MAX;
static uint8_t x2739 = 7U;
int8_t x2943 = INT8_MIN;
uint64_t x2964 = 4720180LLU;
int32_t t72 = -1241798;
int32_t x2970 = -1;
int16_t x2971 = INT16_MIN;
int32_t x3017 = 80783712;
static int32_t t75 = 46831963;
uint32_t t76 = 1017020857U;
static uint64_t x3100 = 75271122LLU;
uint64_t x3101 = 1721249LLU;
int16_t x3102 = -1;
uint32_t x3125 = 162607U;
int64_t x3126 = 1LL;
static volatile uint64_t x3149 = 20300843839482922LLU;
uint8_t x3192 = UINT8_MAX;
volatile int32_t t82 = -799086;
int32_t t83 = -17;
volatile uint32_t x3474 = UINT32_MAX;
uint16_t x3561 = 1U;
uint16_t x3562 = 11U;
int32_t t91 = 0;
volatile int16_t x3681 = 1;
uint8_t x3683 = 0U;
int16_t x3693 = INT16_MAX;
static uint8_t x3789 = 54U;
volatile uint64_t x3791 = 2189LLU;
int32_t t96 = 2889698;
static uint16_t x3821 = UINT16_MAX;
int16_t x3823 = 6343;
int16_t x3824 = INT16_MAX;
int64_t x3847 = INT64_MIN;
uint32_t t99 = UINT32_MAX;


void f0(void) {
	int8_t x6 = 0;
	int16_t x7 = INT16_MIN;
	static int64_t t0 = INT64_MAX;

	t0 = (x5<<(x6+(x7<=x8)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x17 = UINT8_MAX;
	volatile int64_t x20 = 9560028254671LL;
	int32_t t1 = -1;

	t1 = (x17<<(x18+(x19<=x20)));

	if (t1 != 2040) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x42 = -1;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 120U;

	t2 = (x41<<(x42+(x43<=x44)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x141 = 1;
	int8_t x142 = 22;
	static int32_t t3 = -1;

	t3 = (x141<<(x142+(x143<=x144)));

	if (t3 != 4194304) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x173 = UINT16_MAX;
	uint32_t x174 = 4U;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t4 = -113;

	t4 = (x173<<(x174+(x175<=x176)));

	if (t4 != 1048560) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x246 = 1U;
	static int8_t x248 = -1;
	uint32_t t5 = 22100U;

	t5 = (x245<<(x246+(x247<=x248)));

	if (t5 != 426U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x289 = 27U;
	uint16_t x290 = 9U;
	uint32_t x291 = 21U;
	volatile uint16_t x292 = 151U;
	volatile int32_t t6 = 3596225;

	t6 = (x289<<(x290+(x291<=x292)));

	if (t6 != 27648) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x293 = INT16_MAX;
	int8_t x294 = 13;
	static volatile int64_t x295 = 140537185524086423LL;
	int32_t x296 = INT32_MAX;
	static volatile int32_t t7 = -9727108;

	t7 = (x293<<(x294+(x295<=x296)));

	if (t7 != 268427264) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x313 = 1U;
	int8_t x315 = -1;
	int8_t x316 = 41;
	uint32_t t8 = 2529431U;

	t8 = (x313<<(x314+(x315<=x316)));

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = -1;
	uint64_t x355 = 7LLU;
	int32_t x356 = INT32_MIN;
	volatile int64_t t9 = INT64_MAX;

	t9 = (x353<<(x354+(x355<=x356)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x369 = INT8_MAX;
	uint8_t x370 = 11U;
	int64_t x371 = -1378695LL;
	uint64_t x372 = 10244630885849LLU;
	int32_t t10 = -66253269;

	t10 = (x369<<(x370+(x371<=x372)));

	if (t10 != 260096) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x385 = 14036;
	int8_t x386 = -1;
	volatile int32_t t11 = -15;

	t11 = (x385<<(x386+(x387<=x388)));

	if (t11 != 14036) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x413 = INT64_MAX;
	int8_t x414 = -1;
	int64_t t12 = INT64_MAX;

	t12 = (x413<<(x414+(x415<=x416)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x449 = 11031LLU;
	static uint8_t x450 = 55U;
	int64_t x452 = 3216758198478016558LL;

	t13 = (x449<<(x450+(x451<=x452)));

	if (t13 != 1657324662872342528LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x577 = 277U;
	int16_t x579 = 5;
	uint32_t t14 = 4968U;

	t14 = (x577<<(x578+(x579<=x580)));

	if (t14 != 277U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x593 = INT8_MAX;
	static uint16_t x596 = UINT16_MAX;
	volatile int32_t t15 = -298445589;

	t15 = (x593<<(x594+(x595<=x596)));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x601 = 4728LL;
	int16_t x603 = 0;
	int16_t x604 = INT16_MIN;
	int64_t t16 = 594539311LL;

	t16 = (x601<<(x602+(x603<=x604)));

	if (t16 != 75648LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x713 = 145041791U;
	volatile uint8_t x714 = 8U;
	int32_t x715 = 5;
	uint8_t x716 = 74U;

	t17 = (x713<<(x714+(x715<=x716)));

	if (t17 != 1246952960U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x745 = INT64_MAX;
	uint64_t x746 = 0LLU;
	static volatile int8_t x748 = 0;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x745<<(x746+(x747<=x748)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x877 = 3LLU;
	uint16_t x878 = 1U;
	uint8_t x879 = 22U;
	uint64_t x880 = 429865LLU;
	uint64_t t19 = 1449795580836LLU;

	t19 = (x877<<(x878+(x879<=x880)));

	if (t19 != 12LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x909 = 328843367323327944LL;
	uint32_t x910 = UINT32_MAX;
	int16_t x911 = INT16_MIN;

	t20 = (x909<<(x910+(x911<=x912)));

	if (t20 != 328843367323327944LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x946 = 34;
	static uint16_t x947 = 31U;
	volatile uint16_t x948 = 4U;
	int64_t t21 = 2196LL;

	t21 = (x945<<(x946+(x947<=x948)));

	if (t21 != 17179869184LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x961 = UINT8_MAX;
	uint64_t x963 = 1009658834LLU;
	volatile int32_t t22 = 21547055;

	t22 = (x961<<(x962+(x963<=x964)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x966 = 0;
	int32_t x967 = 196;
	static volatile int8_t x968 = INT8_MIN;
	uint32_t t23 = 1146U;

	t23 = (x965<<(x966+(x967<=x968)));

	if (t23 != 6806U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x997 = UINT8_MAX;
	volatile int16_t x999 = -1;

	t24 = (x997<<(x998+(x999<=x1000)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1054 = 37U;
	volatile uint32_t x1055 = 1981U;
	static int32_t x1056 = INT32_MIN;
	volatile uint64_t t25 = 41422120652596522LLU;

	t25 = (x1053<<(x1054+(x1055<=x1056)));

	if (t25 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1073 = 22U;
	static int16_t x1074 = 0;
	static int8_t x1075 = 15;
	static int16_t x1076 = 2904;
	volatile int32_t t26 = 86;

	t26 = (x1073<<(x1074+(x1075<=x1076)));

	if (t26 != 44) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1129 = 10;
	int8_t x1130 = -1;
	static int64_t x1131 = INT64_MIN;
	int64_t x1132 = -1LL;
	int32_t t27 = 18317046;

	t27 = (x1129<<(x1130+(x1131<=x1132)));

	if (t27 != 10) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x1205 = 689U;
	uint32_t x1206 = UINT32_MAX;
	static int16_t x1207 = INT16_MIN;
	volatile int64_t x1208 = 175184731203LL;
	volatile int32_t t28 = 0;

	t28 = (x1205<<(x1206+(x1207<=x1208)));

	if (t28 != 689) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1213 = 68338LLU;
	volatile uint16_t x1216 = 27U;
	volatile uint64_t t29 = 1428556414LLU;

	t29 = (x1213<<(x1214+(x1215<=x1216)));

	if (t29 != 136676LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1257 = 15U;
	int16_t x1259 = INT16_MIN;
	int8_t x1260 = -1;

	t30 = (x1257<<(x1258+(x1259<=x1260)));

	if (t30 != 960) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1293 = 61U;
	static volatile uint8_t x1294 = 14U;
	int32_t x1295 = -1;
	volatile int32_t t31 = 537;

	t31 = (x1293<<(x1294+(x1295<=x1296)));

	if (t31 != 1998848) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1349 = INT16_MAX;
	volatile uint8_t x1350 = 6U;
	uint64_t x1351 = 2074627041LLU;
	static volatile int16_t x1352 = -1;
	static int32_t t32 = 32305845;

	t32 = (x1349<<(x1350+(x1351<=x1352)));

	if (t32 != 4194176) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1382 = -1;
	static int64_t x1384 = INT64_MAX;
	volatile uint64_t t33 = 2016927423832LLU;

	t33 = (x1381<<(x1382+(x1383<=x1384)));

	if (t33 != 14073933LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1421 = 7;
	uint8_t x1422 = 0U;
	volatile int64_t x1423 = -1LL;
	static uint16_t x1424 = 602U;

	t34 = (x1421<<(x1422+(x1423<=x1424)));

	if (t34 != 14) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1505 = 2089U;
	static int32_t x1506 = -1;
	int32_t x1507 = INT32_MIN;
	uint32_t t35 = 121874U;

	t35 = (x1505<<(x1506+(x1507<=x1508)));

	if (t35 != 2089U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1526 = -1;
	int16_t x1527 = INT16_MAX;

	t36 = (x1525<<(x1526+(x1527<=x1528)));

	if (t36 != 884854958LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1701 = UINT32_MAX;
	static int16_t x1702 = -1;
	int8_t x1703 = INT8_MAX;
	uint64_t x1704 = 401300292LLU;
	volatile uint32_t t37 = UINT32_MAX;

	t37 = (x1701<<(x1702+(x1703<=x1704)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1798 = -1LL;
	int16_t x1799 = INT16_MIN;
	int16_t x1800 = -13157;
	int32_t t38 = -116646;

	t38 = (x1797<<(x1798+(x1799<=x1800)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1833 = INT16_MAX;
	uint32_t x1834 = 1U;
	volatile uint8_t x1835 = 2U;
	uint16_t x1836 = 4U;
	int32_t t39 = 6;

	t39 = (x1833<<(x1834+(x1835<=x1836)));

	if (t39 != 131068) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1841 = 2257361890LL;
	int16_t x1842 = 1;
	int32_t x1843 = 82590587;
	volatile int64_t x1844 = INT64_MAX;
	volatile int64_t t40 = 2926909001LL;

	t40 = (x1841<<(x1842+(x1843<=x1844)));

	if (t40 != 9029447560LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1853 = 3086455633LLU;
	int64_t x1855 = INT64_MAX;
	volatile int64_t x1856 = INT64_MIN;
	volatile uint64_t t41 = 1465934377LLU;

	t41 = (x1853<<(x1854+(x1855<=x1856)));

	if (t41 != 6172911266LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1933 = 77U;
	static volatile int8_t x1934 = 1;
	volatile int32_t x1935 = -1;
	uint64_t x1936 = 74802LLU;
	volatile uint32_t t42 = 241885U;

	t42 = (x1933<<(x1934+(x1935<=x1936)));

	if (t42 != 154U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1949 = UINT64_MAX;
	static int32_t x1950 = -1;
	int32_t x1951 = INT32_MIN;
	static int16_t x1952 = -16;

	t43 = (x1949<<(x1950+(x1951<=x1952)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x1969 = 1U;
	static int64_t x1970 = -1LL;
	static int16_t x1971 = INT16_MAX;
	int32_t x1972 = INT32_MAX;
	volatile int32_t t44 = 18;

	t44 = (x1969<<(x1970+(x1971<=x1972)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2009 = 1;
	volatile int32_t x2011 = INT32_MIN;
	int32_t t45 = 4;

	t45 = (x2009<<(x2010+(x2011<=x2012)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2089 = 48;
	int64_t x2090 = -1LL;
	volatile uint8_t x2092 = UINT8_MAX;
	static int32_t t46 = 2945401;

	t46 = (x2089<<(x2090+(x2091<=x2092)));

	if (t46 != 48) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2161 = INT16_MAX;
	uint64_t x2163 = UINT64_MAX;

	t47 = (x2161<<(x2162+(x2163<=x2164)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2185 = INT32_MAX;
	uint64_t x2186 = UINT64_MAX;
	int64_t x2188 = INT64_MAX;
	volatile int32_t t48 = INT32_MAX;

	t48 = (x2185<<(x2186+(x2187<=x2188)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2201 = INT64_MAX;
	volatile int32_t x2202 = -1;
	volatile uint32_t x2203 = 114200611U;
	static int16_t x2204 = INT16_MIN;

	t49 = (x2201<<(x2202+(x2203<=x2204)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2222 = 6U;

	t50 = (x2221<<(x2222+(x2223<=x2224)));

	if (t50 != 1408) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2265 = UINT16_MAX;
	int64_t x2267 = -1LL;
	int8_t x2268 = -4;
	int32_t t51 = 20787173;

	t51 = (x2265<<(x2266+(x2267<=x2268)));

	if (t51 != 2097120) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2309 = UINT8_MAX;
	static volatile int16_t x2311 = INT16_MIN;
	volatile int8_t x2312 = INT8_MAX;
	volatile int32_t t52 = 1;

	t52 = (x2309<<(x2310+(x2311<=x2312)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2317 = 21744018;
	int8_t x2318 = 1;
	int64_t x2320 = INT64_MIN;

	t53 = (x2317<<(x2318+(x2319<=x2320)));

	if (t53 != 43488036) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2329 = 23U;
	static int32_t x2331 = 421547;
	int64_t x2332 = -1LL;
	volatile int32_t t54 = 1407;

	t54 = (x2329<<(x2330+(x2331<=x2332)));

	if (t54 != 23) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2405 = UINT32_MAX;
	uint64_t x2406 = UINT64_MAX;
	volatile uint32_t x2407 = 3348U;
	int16_t x2408 = INT16_MIN;

	t55 = (x2405<<(x2406+(x2407<=x2408)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2421 = UINT16_MAX;
	int32_t x2424 = -1;
	int32_t t56 = -4120806;

	t56 = (x2421<<(x2422+(x2423<=x2424)));

	if (t56 != 262140) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2433 = UINT32_MAX;
	int8_t x2434 = 16;
	int32_t x2435 = -26954;
	uint32_t x2436 = 147U;

	t57 = (x2433<<(x2434+(x2435<=x2436)));

	if (t57 != 4294901760U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2437 = INT64_MAX;
	uint64_t x2438 = UINT64_MAX;
	int64_t x2439 = -202143LL;
	uint16_t x2440 = 1U;
	int64_t t58 = INT64_MAX;

	t58 = (x2437<<(x2438+(x2439<=x2440)));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x2457 = UINT16_MAX;
	int32_t x2460 = 159380;
	int32_t t59 = 1084365;

	t59 = (x2457<<(x2458+(x2459<=x2460)));

	if (t59 != 131070) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x2477 = 3U;
	int16_t x2478 = -1;
	uint64_t x2479 = 1408291LLU;
	int32_t x2480 = -1;
	static int32_t t60 = 1;

	t60 = (x2477<<(x2478+(x2479<=x2480)));

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2529 = UINT32_MAX;
	uint32_t x2530 = UINT32_MAX;
	uint16_t x2531 = 2024U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x2529<<(x2530+(x2531<=x2532)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2553 = UINT16_MAX;
	uint16_t x2554 = 0U;
	uint16_t x2555 = UINT16_MAX;
	volatile int64_t x2556 = INT64_MIN;

	t62 = (x2553<<(x2554+(x2555<=x2556)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2577 = 62;
	int16_t x2578 = 0;
	uint32_t x2579 = UINT32_MAX;
	static int16_t x2580 = -225;
	int32_t t63 = -2423;

	t63 = (x2577<<(x2578+(x2579<=x2580)));

	if (t63 != 62) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x2597 = 115LLU;
	static uint8_t x2599 = UINT8_MAX;
	int32_t x2600 = INT32_MAX;
	volatile uint64_t t64 = 440308264803647057LLU;

	t64 = (x2597<<(x2598+(x2599<=x2600)));

	if (t64 != 115LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x2633 = 54458394;
	static int16_t x2634 = -1;
	static int8_t x2635 = INT8_MIN;
	volatile int32_t x2636 = 2696;
	int32_t t65 = -4198165;

	t65 = (x2633<<(x2634+(x2635<=x2636)));

	if (t65 != 54458394) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2712 = INT16_MIN;

	t66 = (x2709<<(x2710+(x2711<=x2712)));

	if (t66 != 1335985126710LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2733 = 499926994523995113LL;
	uint64_t x2734 = UINT64_MAX;
	int16_t x2735 = 2;
	int64_t t67 = 4LL;

	t67 = (x2733<<(x2734+(x2735<=x2736)));

	if (t67 != 499926994523995113LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2738 = UINT32_MAX;
	uint32_t x2740 = 1568663130U;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x2737<<(x2738+(x2739<=x2740)));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2813 = INT32_MAX;
	static uint64_t x2814 = UINT64_MAX;
	int64_t x2815 = -1LL;
	volatile int8_t x2816 = -1;
	static volatile int32_t t69 = INT32_MAX;

	t69 = (x2813<<(x2814+(x2815<=x2816)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2925 = UINT8_MAX;
	static uint16_t x2926 = 1U;
	uint32_t x2927 = 456U;
	int32_t x2928 = INT32_MIN;
	volatile int32_t t70 = 6376849;

	t70 = (x2925<<(x2926+(x2927<=x2928)));

	if (t70 != 1020) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x2941 = 99U;
	int16_t x2942 = -1;
	uint64_t x2944 = UINT64_MAX;
	int32_t t71 = 121913966;

	t71 = (x2941<<(x2942+(x2943<=x2944)));

	if (t71 != 99) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2961 = INT8_MAX;
	uint8_t x2962 = 1U;
	int64_t x2963 = INT64_MIN;

	t72 = (x2961<<(x2962+(x2963<=x2964)));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2969 = INT16_MAX;
	int8_t x2972 = INT8_MIN;
	static volatile int32_t t73 = -34503;

	t73 = (x2969<<(x2970+(x2971<=x2972)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3005 = 11;
	static volatile uint32_t x3006 = UINT32_MAX;
	volatile int32_t x3007 = INT32_MIN;
	static uint8_t x3008 = UINT8_MAX;
	int32_t t74 = -1;

	t74 = (x3005<<(x3006+(x3007<=x3008)));

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3018 = UINT64_MAX;
	uint8_t x3019 = 3U;
	uint32_t x3020 = 192U;

	t75 = (x3017<<(x3018+(x3019<=x3020)));

	if (t75 != 80783712) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3093 = 446545785U;
	static volatile int32_t x3094 = -1;
	volatile uint32_t x3095 = 2988845U;
	static uint64_t x3096 = 1097310172886640LLU;

	t76 = (x3093<<(x3094+(x3095<=x3096)));

	if (t76 != 446545785U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x3097 = INT8_MAX;
	volatile int64_t x3098 = -1LL;
	volatile int16_t x3099 = INT16_MAX;
	static int32_t t77 = -92775;

	t77 = (x3097<<(x3098+(x3099<=x3100)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3103 = INT16_MIN;
	volatile int16_t x3104 = INT16_MIN;
	volatile uint64_t t78 = 9706764688674475LLU;

	t78 = (x3101<<(x3102+(x3103<=x3104)));

	if (t78 != 1721249LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3127 = 143363397LLU;
	volatile int64_t x3128 = INT64_MIN;
	volatile uint32_t t79 = 12U;

	t79 = (x3125<<(x3126+(x3127<=x3128)));

	if (t79 != 650428U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3150 = 35U;
	int16_t x3151 = INT16_MAX;
	int32_t x3152 = 15153;
	uint64_t t80 = 4140599516949LLU;

	t80 = (x3149<<(x3150+(x3151<=x3152)));

	if (t80 != 5587666758908510208LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3185 = 1LL;
	int8_t x3186 = 3;
	static uint64_t x3187 = 170247645718918462LLU;
	int64_t x3188 = -1LL;
	volatile int64_t t81 = 1903382778546467528LL;

	t81 = (x3185<<(x3186+(x3187<=x3188)));

	if (t81 != 16LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x3189 = UINT8_MAX;
	volatile int16_t x3190 = -1;
	int32_t x3191 = INT32_MIN;

	t82 = (x3189<<(x3190+(x3191<=x3192)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3193 = INT8_MAX;
	int64_t x3194 = 3LL;
	volatile int8_t x3195 = -1;
	int64_t x3196 = INT64_MIN;

	t83 = (x3193<<(x3194+(x3195<=x3196)));

	if (t83 != 1016) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3277 = 86176U;
	int64_t x3278 = -1LL;
	uint8_t x3279 = 0U;
	int8_t x3280 = INT8_MAX;
	volatile uint32_t t84 = 120407518U;

	t84 = (x3277<<(x3278+(x3279<=x3280)));

	if (t84 != 86176U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3309 = 29U;
	uint32_t x3310 = UINT32_MAX;
	uint16_t x3311 = 153U;
	uint64_t x3312 = 1808709418LLU;
	static volatile int32_t t85 = 48956;

	t85 = (x3309<<(x3310+(x3311<=x3312)));

	if (t85 != 29) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3389 = 56546901LLU;
	int8_t x3390 = 22;
	static volatile int32_t x3391 = -10;
	uint64_t x3392 = 8475045774315LLU;
	uint64_t t86 = 172LLU;

	t86 = (x3389<<(x3390+(x3391<=x3392)));

	if (t86 != 237174893051904LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3409 = 542441025611LL;
	uint16_t x3410 = 10U;
	volatile int8_t x3411 = -1;
	uint8_t x3412 = 103U;
	int64_t t87 = 80508819103946129LL;

	t87 = (x3409<<(x3410+(x3411<=x3412)));

	if (t87 != 1110919220451328LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3473 = 1449U;
	uint8_t x3475 = 58U;
	static int16_t x3476 = INT16_MAX;
	uint32_t t88 = 570144U;

	t88 = (x3473<<(x3474+(x3475<=x3476)));

	if (t88 != 1449U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3549 = 3U;
	uint64_t x3550 = UINT64_MAX;
	int16_t x3551 = INT16_MIN;
	int8_t x3552 = 1;
	static volatile int32_t t89 = -23819;

	t89 = (x3549<<(x3550+(x3551<=x3552)));

	if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3557 = INT8_MAX;
	uint64_t x3558 = 7LLU;
	uint16_t x3559 = 82U;
	static volatile int32_t x3560 = INT32_MIN;
	static volatile int32_t t90 = 1008888;

	t90 = (x3557<<(x3558+(x3559<=x3560)));

	if (t90 != 16256) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3563 = 271;
	static int8_t x3564 = INT8_MAX;

	t91 = (x3561<<(x3562+(x3563<=x3564)));

	if (t91 != 2048) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x3661 = 1U;
	static uint8_t x3662 = 25U;
	int16_t x3663 = INT16_MIN;
	uint32_t x3664 = 3U;
	volatile int32_t t92 = 4162662;

	t92 = (x3661<<(x3662+(x3663<=x3664)));

	if (t92 != 33554432) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3682 = -1;
	uint64_t x3684 = 127622545465379973LLU;
	int32_t t93 = 23;

	t93 = (x3681<<(x3682+(x3683<=x3684)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x3694 = -1;
	int32_t x3695 = INT32_MIN;
	static uint16_t x3696 = UINT16_MAX;
	int32_t t94 = -197521772;

	t94 = (x3693<<(x3694+(x3695<=x3696)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3701 = UINT8_MAX;
	volatile uint8_t x3702 = 12U;
	uint64_t x3703 = UINT64_MAX;
	uint32_t x3704 = 17499789U;
	volatile int32_t t95 = -45;

	t95 = (x3701<<(x3702+(x3703<=x3704)));

	if (t95 != 1044480) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x3790 = UINT64_MAX;
	int32_t x3792 = INT32_MIN;

	t96 = (x3789<<(x3790+(x3791<=x3792)));

	if (t96 != 54) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x3822 = 4U;
	volatile int32_t t97 = -790318;

	t97 = (x3821<<(x3822+(x3823<=x3824)));

	if (t97 != 2097120) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x3845 = UINT32_MAX;
	int16_t x3846 = -1;
	int64_t x3848 = -1LL;
	uint32_t t98 = UINT32_MAX;

	t98 = (x3845<<(x3846+(x3847<=x3848)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x3957 = UINT32_MAX;
	int32_t x3958 = -1;
	uint64_t x3959 = 1142046911LLU;
	int64_t x3960 = INT64_MIN;

	t99 = (x3957<<(x3958+(x3959<=x3960)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

