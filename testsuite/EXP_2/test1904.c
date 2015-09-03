#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 90LLU;
uint64_t x76 = 7LLU;
static volatile int64_t t3 = -1376913743260LL;
static int32_t x95 = 31800196;
int64_t t5 = -7367377685581LL;
uint16_t x369 = 0U;
int64_t x371 = 171LL;
static volatile uint16_t x373 = 3U;
volatile uint8_t x410 = 17U;
volatile int32_t x411 = INT32_MIN;
volatile int8_t x477 = INT8_MIN;
static volatile int16_t x479 = INT16_MAX;
volatile uint64_t t11 = 8229149278624114514LLU;
static volatile uint32_t x557 = UINT32_MAX;
static int8_t x560 = 2;
int16_t x582 = INT16_MIN;
int8_t x584 = 0;
uint64_t x745 = 66732072258799664LLU;
volatile uint64_t t15 = 930874164LLU;
static volatile int32_t t16 = 773329607;
int8_t x841 = INT8_MIN;
static int32_t x845 = INT32_MAX;
int8_t x846 = -1;
int16_t x863 = -52;
volatile uint16_t x904 = 21U;
volatile uint64_t x947 = 13642442335312081LLU;
uint16_t x948 = 5U;
static volatile uint64_t x1034 = 2224899520LLU;
volatile int32_t x1042 = INT32_MAX;
uint8_t x1045 = 27U;
volatile int8_t x1048 = 1;
volatile int32_t t28 = 0;
volatile int64_t x1086 = INT64_MIN;
volatile uint64_t x1185 = UINT64_MAX;
volatile uint64_t t30 = 458818394798887LLU;
static int8_t x1344 = 28;
int16_t x1380 = 26;
uint64_t x1454 = 13036LLU;
uint32_t x1470 = 277905U;
volatile int16_t x1502 = 55;
static volatile int32_t t37 = 255114250;
static int32_t x1699 = INT32_MIN;
uint16_t x1728 = 7U;
int16_t x1946 = -1;
int32_t x1947 = 0;
int32_t x1967 = INT32_MAX;
volatile uint32_t t46 = 43U;
volatile int32_t x2005 = -517761506;
static uint32_t x2006 = 21U;
int8_t x2040 = 28;
volatile int64_t t48 = -788967011086576LL;
int64_t x2069 = -1LL;
uint8_t x2070 = UINT8_MAX;
uint8_t x2072 = 4U;
volatile int8_t x2143 = 0;
uint16_t x2144 = 6U;
static int8_t x2162 = INT8_MAX;
static int16_t x2163 = INT16_MIN;
uint64_t x2189 = 21070066555702LLU;
int16_t x2192 = 36;
uint8_t x2236 = 16U;
int64_t x2255 = -1LL;
int64_t t56 = -115319941987926LL;
int8_t x2384 = 2;
int8_t x2497 = 0;
uint16_t x2499 = UINT16_MAX;
uint32_t x2660 = 0U;
uint64_t x2661 = UINT64_MAX;
static int16_t x2718 = INT16_MAX;
uint16_t x2719 = 2373U;
uint64_t x2947 = UINT64_MAX;
uint64_t t71 = 1779787086087523753LLU;
static uint64_t t73 = 1LLU;
volatile uint32_t t75 = 59778590U;
uint32_t x3156 = 4U;
uint32_t x3218 = 0U;
uint8_t x3345 = 11U;
volatile int64_t t82 = 14683523485627559LL;
uint32_t t86 = 14229388U;
int8_t x3606 = -10;
volatile int64_t x3607 = 94950442660529LL;
int16_t x3608 = 0;
int64_t t89 = 3502768683633067774LL;
volatile int64_t t90 = -114682757039LL;
int16_t x3779 = INT16_MIN;
static uint8_t x3802 = 3U;
uint8_t x3804 = 0U;
volatile int32_t t93 = 3322;
uint64_t x3819 = 283634433709059974LLU;
int64_t t95 = -12172064103LL;
static volatile int16_t x4018 = INT16_MIN;
int8_t x4019 = -1;
int32_t t97 = 259070264;
volatile uint32_t t98 = 4968U;


void f0(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x14 = -1;
	volatile uint32_t x15 = 13598478U;
	static int8_t x16 = 0;
	uint32_t t0 = 547500U;

	t0 = ((x13/(x14|x15))<<x16);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x41 = 48466467119LLU;
	volatile uint8_t x42 = 31U;
	int32_t x43 = -48;
	uint8_t x44 = 4U;

	t1 = ((x41/(x42|x43))<<x44);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x61 = 12;
	static int8_t x62 = INT8_MIN;
	uint8_t x63 = 23U;
	uint16_t x64 = 15U;
	volatile int32_t t2 = 25;

	t2 = ((x61/(x62|x63))<<x64);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x73 = -1110192;
	static volatile int64_t x74 = INT64_MIN;
	uint32_t x75 = 962902072U;

	t3 = ((x73/(x74|x75))<<x76);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x93 = -1;
	static volatile int16_t x94 = INT16_MIN;
	volatile int16_t x96 = 7;
	volatile int32_t t4 = -515;

	t4 = ((x93/(x94|x95))<<x96);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x277 = -13494886580LL;
	uint16_t x278 = 220U;
	int8_t x279 = INT8_MIN;
	static int8_t x280 = 12;

	t5 = ((x277/(x278|x279))<<x280);

	if (t5 != 1535418204160LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x370 = 22366702LL;
	int8_t x372 = 4;
	int64_t t6 = -35625127220215LL;

	t6 = ((x369/(x370|x371))<<x372);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x374 = -33;
	uint32_t x375 = UINT32_MAX;
	uint16_t x376 = 3U;
	volatile uint32_t t7 = 12U;

	t7 = ((x373/(x374|x375))<<x376);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x409 = INT64_MIN;
	uint8_t x412 = 2U;
	static int64_t t8 = -2544660113604LL;

	t8 = ((x409/(x410|x411))<<x412);

	if (t8 != 17179869320LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x453 = INT16_MIN;
	int16_t x454 = -7;
	int32_t x455 = INT32_MIN;
	uint8_t x456 = 1U;
	volatile int32_t t9 = -96575121;

	t9 = ((x453/(x454|x455))<<x456);

	if (t9 != 9362) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x457 = 6U;
	int8_t x458 = 0;
	volatile int32_t x459 = 875294;
	static uint8_t x460 = 0U;
	int32_t t10 = -110;

	t10 = ((x457/(x458|x459))<<x460);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x478 = 3LLU;
	volatile uint16_t x480 = 3U;

	t11 = ((x477/(x478|x479))<<x480);

	if (t11 != 4503737070518392LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x558 = -1;
	static int16_t x559 = INT16_MAX;
	uint32_t t12 = 1665U;

	t12 = ((x557/(x558|x559))<<x560);

	if (t12 != 4U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x581 = -435634796;
	static volatile uint16_t x583 = 14498U;
	int32_t t13 = -280168017;

	t13 = ((x581/(x582|x583))<<x584);

	if (t13 != 23844) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x705 = INT16_MIN;
	uint64_t x706 = 483490LLU;
	uint64_t x707 = 2193465735909LLU;
	int16_t x708 = 0;
	volatile uint64_t t14 = 2289095LLU;

	t14 = ((x705/(x706|x707))<<x708);

	if (t14 != 8409861LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x746 = 3148U;
	static uint32_t x747 = 4265U;
	int16_t x748 = 27;

	t15 = ((x745/(x746|x747))<<x748);

	if (t15 != 10499396627867893760LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x777 = INT16_MIN;
	int32_t x778 = 3680;
	int32_t x779 = INT32_MIN;
	int8_t x780 = 25;

	t16 = ((x777/(x778|x779))<<x780);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x789 = 11330748860010LLU;
	uint8_t x790 = UINT8_MAX;
	int32_t x791 = INT32_MIN;
	int64_t x792 = 0LL;
	volatile uint64_t t17 = 15LLU;

	t17 = ((x789/(x790|x791))<<x792);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x842 = UINT32_MAX;
	static int64_t x843 = INT64_MIN;
	uint8_t x844 = 4U;
	int64_t t18 = -3845398608928655884LL;

	t18 = ((x841/(x842|x843))<<x844);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x847 = 1839U;
	uint8_t x848 = 0U;
	uint32_t t19 = 483721U;

	t19 = ((x845/(x846|x847))<<x848);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x849 = INT8_MIN;
	uint16_t x850 = 2U;
	int8_t x851 = -1;
	volatile uint16_t x852 = 0U;
	volatile int32_t t20 = 0;

	t20 = ((x849/(x850|x851))<<x852);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x861 = 347999589646LLU;
	volatile int16_t x862 = 26;
	int8_t x864 = 0;
	volatile uint64_t t21 = 17898904586499605LLU;

	t21 = ((x861/(x862|x863))<<x864);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x901 = -40;
	static uint8_t x902 = UINT8_MAX;
	int16_t x903 = -50;
	int32_t t22 = -111108286;

	t22 = ((x901/(x902|x903))<<x904);

	if (t22 != 83886080) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x945 = 5U;
	static int64_t x946 = INT64_MAX;
	volatile uint64_t t23 = 20450518LLU;

	t23 = ((x945/(x946|x947))<<x948);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x965 = UINT16_MAX;
	int64_t x966 = 24901779539LL;
	int64_t x967 = INT64_MAX;
	volatile int8_t x968 = 0;
	int64_t t24 = 8356194366493LL;

	t24 = ((x965/(x966|x967))<<x968);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1005 = INT16_MIN;
	int32_t x1006 = INT32_MIN;
	int32_t x1007 = INT32_MIN;
	uint64_t x1008 = 10LLU;
	volatile int32_t t25 = -814414569;

	t25 = ((x1005/(x1006|x1007))<<x1008);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x1033 = -485341341615318LL;
	int32_t x1035 = 31373;
	int16_t x1036 = 44;
	volatile uint64_t t26 = 62761821LLU;

	t26 = ((x1033/(x1034|x1035))<<x1036);

	if (t26 != 12851778000701620224LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1041 = -1;
	static int64_t x1043 = -1LL;
	static uint8_t x1044 = 4U;
	volatile int64_t t27 = 19687LL;

	t27 = ((x1041/(x1042|x1043))<<x1044);

	if (t27 != 16LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1046 = 32U;
	volatile int8_t x1047 = 1;

	t28 = ((x1045/(x1046|x1047))<<x1048);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1085 = -17;
	uint64_t x1087 = 48398489LLU;
	int32_t x1088 = 12;
	static volatile uint64_t t29 = 16507583168752LLU;

	t29 = ((x1085/(x1086|x1087))<<x1088);

	if (t29 != 4096LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1186 = INT16_MIN;
	uint32_t x1187 = 2100712274U;
	int8_t x1188 = 28;

	t30 = ((x1185/(x1186|x1187))<<x1188);

	if (t30 != 1152924574971592704LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1249 = INT32_MIN;
	static volatile int16_t x1250 = INT16_MIN;
	volatile int64_t x1251 = INT64_MIN;
	int64_t x1252 = 20LL;
	volatile int64_t t31 = -666LL;

	t31 = ((x1249/(x1250|x1251))<<x1252);

	if (t31 != 68719476736LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1341 = -1;
	volatile int8_t x1342 = -1;
	static volatile int64_t x1343 = INT64_MIN;
	volatile int64_t t32 = 971474201355LL;

	t32 = ((x1341/(x1342|x1343))<<x1344);

	if (t32 != 268435456LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1377 = -3;
	int8_t x1378 = INT8_MIN;
	static volatile uint16_t x1379 = 176U;
	volatile int32_t t33 = -806770;

	t33 = ((x1377/(x1378|x1379))<<x1380);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1453 = INT32_MAX;
	volatile int32_t x1455 = INT32_MIN;
	volatile uint8_t x1456 = 12U;
	volatile uint64_t t34 = 16199831589816171LLU;

	t34 = ((x1453/(x1454|x1455))<<x1456);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1469 = -1;
	int16_t x1471 = INT16_MIN;
	uint8_t x1472 = 1U;
	volatile uint32_t t35 = 243U;

	t35 = ((x1469/(x1470|x1471))<<x1472);

	if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1481 = -1;
	static int8_t x1482 = INT8_MIN;
	int64_t x1483 = 177773294036LL;
	volatile uint8_t x1484 = 1U;
	volatile int64_t t36 = 3333783732276LL;

	t36 = ((x1481/(x1482|x1483))<<x1484);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1501 = 27U;
	int8_t x1503 = INT8_MIN;
	int8_t x1504 = 1;

	t37 = ((x1501/(x1502|x1503))<<x1504);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1509 = INT8_MIN;
	int64_t x1510 = INT64_MIN;
	static volatile int8_t x1511 = -1;
	uint16_t x1512 = 3U;
	int64_t t38 = 6115122LL;

	t38 = ((x1509/(x1510|x1511))<<x1512);

	if (t38 != 1024LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1697 = UINT64_MAX;
	static volatile uint8_t x1698 = 25U;
	static uint8_t x1700 = 9U;
	static uint64_t t39 = 127LLU;

	t39 = ((x1697/(x1698|x1699))<<x1700);

	if (t39 != 512LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1725 = 928U;
	int8_t x1726 = INT8_MAX;
	int32_t x1727 = INT32_MIN;
	volatile int32_t t40 = -7045;

	t40 = ((x1725/(x1726|x1727))<<x1728);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1857 = -1LL;
	uint8_t x1858 = 121U;
	uint64_t x1859 = 1851275525907087299LLU;
	uint16_t x1860 = 5U;
	uint64_t t41 = 1016440187497152423LLU;

	t41 = ((x1857/(x1858|x1859))<<x1860);

	if (t41 != 288LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1945 = -1LL;
	uint16_t x1948 = 5U;
	int64_t t42 = 1217LL;

	t42 = ((x1945/(x1946|x1947))<<x1948);

	if (t42 != 32LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x1965 = 6;
	uint32_t x1966 = 207U;
	int8_t x1968 = 0;
	volatile uint32_t t43 = 20974U;

	t43 = ((x1965/(x1966|x1967))<<x1968);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1973 = -1LL;
	int32_t x1974 = -1;
	int8_t x1975 = 20;
	uint16_t x1976 = 58U;
	static int64_t t44 = -30813371LL;

	t44 = ((x1973/(x1974|x1975))<<x1976);

	if (t44 != 288230376151711744LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1977 = UINT8_MAX;
	volatile int16_t x1978 = 996;
	uint64_t x1979 = 1222492767814LLU;
	int8_t x1980 = 1;
	static volatile uint64_t t45 = 1044327283LLU;

	t45 = ((x1977/(x1978|x1979))<<x1980);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1989 = INT16_MIN;
	volatile uint8_t x1990 = 2U;
	volatile uint32_t x1991 = 32171624U;
	static volatile uint32_t x1992 = 3U;

	t46 = ((x1989/(x1990|x1991))<<x1992);

	if (t46 != 1064U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2007 = 3;
	int16_t x2008 = 1;
	uint32_t t47 = 237U;

	t47 = ((x2005/(x2006|x2007))<<x2008);

	if (t47 != 328452676U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2037 = -13;
	int32_t x2038 = -1;
	volatile int64_t x2039 = INT64_MIN;

	t48 = ((x2037/(x2038|x2039))<<x2040);

	if (t48 != 3489660928LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2071 = INT8_MIN;
	static int64_t t49 = -6359589538LL;

	t49 = ((x2069/(x2070|x2071))<<x2072);

	if (t49 != 16LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2141 = 0;
	static uint64_t x2142 = 1414222066LLU;
	volatile uint64_t t50 = 268665655568601LLU;

	t50 = ((x2141/(x2142|x2143))<<x2144);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2145 = UINT64_MAX;
	static int32_t x2146 = INT32_MIN;
	static uint32_t x2147 = 1U;
	uint8_t x2148 = 12U;
	volatile uint64_t t51 = 488384LLU;

	t51 = ((x2145/(x2146|x2147))<<x2148);

	if (t51 != 35184372072448LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2161 = INT8_MIN;
	int8_t x2164 = 6;
	int32_t t52 = 4050486;

	t52 = ((x2161/(x2162|x2163))<<x2164);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2190 = UINT32_MAX;
	uint64_t x2191 = UINT64_MAX;
	static volatile uint64_t t53 = 453772967367LLU;

	t53 = ((x2189/(x2190|x2191))<<x2192);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2213 = 3330849093357511214LLU;
	static int32_t x2214 = -12;
	int16_t x2215 = INT16_MIN;
	uint16_t x2216 = 4U;
	volatile uint64_t t54 = 143939963793LLU;

	t54 = ((x2213/(x2214|x2215))<<x2216);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2233 = 94;
	static uint16_t x2234 = 1028U;
	volatile int16_t x2235 = INT16_MAX;
	static volatile int32_t t55 = 953;

	t55 = ((x2233/(x2234|x2235))<<x2236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2253 = INT16_MIN;
	int32_t x2254 = INT32_MAX;
	int8_t x2256 = 0;

	t56 = ((x2253/(x2254|x2255))<<x2256);

	if (t56 != 32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int16_t x2289 = INT16_MAX;
	int8_t x2290 = INT8_MAX;
	uint32_t x2291 = UINT32_MAX;
	static int8_t x2292 = 1;
	static uint32_t t57 = 0U;

	t57 = ((x2289/(x2290|x2291))<<x2292);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2381 = 5U;
	int32_t x2382 = 24766;
	int8_t x2383 = INT8_MIN;
	int32_t t58 = 5949229;

	t58 = ((x2381/(x2382|x2383))<<x2384);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2405 = 388;
	int32_t x2406 = INT32_MIN;
	volatile int32_t x2407 = INT32_MIN;
	volatile int32_t x2408 = 8;
	static volatile int32_t t59 = 33;

	t59 = ((x2405/(x2406|x2407))<<x2408);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2449 = INT8_MIN;
	volatile int64_t x2450 = 2975976LL;
	uint32_t x2451 = 67U;
	volatile uint32_t x2452 = 60U;
	static int64_t t60 = 50234321152997LL;

	t60 = ((x2449/(x2450|x2451))<<x2452);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2498 = -710140793;
	uint8_t x2500 = 2U;
	int32_t t61 = 507;

	t61 = ((x2497/(x2498|x2499))<<x2500);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2557 = -18479LL;
	uint64_t x2558 = 94500435778924LLU;
	int16_t x2559 = INT16_MIN;
	uint16_t x2560 = 36U;
	uint64_t t62 = 1868016095LLU;

	t62 = ((x2557/(x2558|x2559))<<x2560);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2637 = 2U;
	uint64_t x2638 = 212813256LLU;
	uint64_t x2639 = 25LLU;
	uint8_t x2640 = 13U;
	static volatile uint64_t t63 = 18235LLU;

	t63 = ((x2637/(x2638|x2639))<<x2640);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2657 = UINT32_MAX;
	static uint32_t x2658 = UINT32_MAX;
	volatile int32_t x2659 = 862865870;
	static volatile uint32_t t64 = 159269U;

	t64 = ((x2657/(x2658|x2659))<<x2660);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2662 = 84U;
	int64_t x2663 = 68340700155104LL;
	uint8_t x2664 = 0U;
	static uint64_t t65 = 6452481298LLU;

	t65 = ((x2661/(x2662|x2663))<<x2664);

	if (t65 != 269923LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2689 = -1;
	int8_t x2690 = 16;
	uint16_t x2691 = 5U;
	static uint8_t x2692 = 9U;
	int32_t t66 = 8018;

	t66 = ((x2689/(x2690|x2691))<<x2692);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2705 = -317711538052LL;
	static int16_t x2706 = 3;
	static int64_t x2707 = -1LL;
	int8_t x2708 = 0;
	static int64_t t67 = -12738578LL;

	t67 = ((x2705/(x2706|x2707))<<x2708);

	if (t67 != 317711538052LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2709 = INT16_MIN;
	int64_t x2710 = INT64_MIN;
	int16_t x2711 = INT16_MIN;
	static int16_t x2712 = 0;
	volatile int64_t t68 = -1302423764230292837LL;

	t68 = ((x2709/(x2710|x2711))<<x2712);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2717 = 7763602U;
	uint8_t x2720 = 1U;
	uint32_t t69 = 476006U;

	t69 = ((x2717/(x2718|x2719))<<x2720);

	if (t69 != 472U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2749 = -1;
	static int32_t x2750 = INT32_MAX;
	int16_t x2751 = INT16_MAX;
	int32_t x2752 = 0;
	int32_t t70 = 318;

	t70 = ((x2749/(x2750|x2751))<<x2752);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2945 = INT64_MAX;
	int64_t x2946 = 382LL;
	volatile int8_t x2948 = 15;

	t71 = ((x2945/(x2946|x2947))<<x2948);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2993 = -12;
	static uint64_t x2994 = UINT64_MAX;
	uint8_t x2995 = 2U;
	uint16_t x2996 = 15U;
	static volatile uint64_t t72 = 336524LLU;

	t72 = ((x2993/(x2994|x2995))<<x2996);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3001 = UINT64_MAX;
	volatile uint32_t x3002 = 474266371U;
	int8_t x3003 = -2;
	volatile int8_t x3004 = 5;

	t73 = ((x3001/(x3002|x3003))<<x3004);

	if (t73 != 137438953504LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3045 = 29U;
	int16_t x3046 = INT16_MIN;
	int32_t x3047 = INT32_MIN;
	static int16_t x3048 = 4;
	static volatile int32_t t74 = 750380735;

	t74 = ((x3045/(x3046|x3047))<<x3048);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3069 = UINT32_MAX;
	uint16_t x3070 = UINT16_MAX;
	volatile int8_t x3071 = -7;
	uint8_t x3072 = 0U;

	t75 = ((x3069/(x3070|x3071))<<x3072);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3133 = -1;
	int8_t x3134 = INT8_MAX;
	uint64_t x3135 = UINT64_MAX;
	uint32_t x3136 = 1U;
	uint64_t t76 = 5186069258LLU;

	t76 = ((x3133/(x3134|x3135))<<x3136);

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x3153 = INT32_MIN;
	uint32_t x3154 = UINT32_MAX;
	int8_t x3155 = INT8_MAX;
	volatile uint32_t t77 = 114166U;

	t77 = ((x3153/(x3154|x3155))<<x3156);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3165 = 14;
	int16_t x3166 = 4;
	int8_t x3167 = 29;
	static uint16_t x3168 = 1U;
	volatile int32_t t78 = 267288412;

	t78 = ((x3165/(x3166|x3167))<<x3168);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3217 = UINT64_MAX;
	volatile int64_t x3219 = -39929633103691LL;
	uint8_t x3220 = 1U;
	static uint64_t t79 = 3LLU;

	t79 = ((x3217/(x3218|x3219))<<x3220);

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3225 = -2;
	int32_t x3226 = INT32_MIN;
	int64_t x3227 = INT64_MAX;
	static int32_t x3228 = 0;
	int64_t t80 = -108801742LL;

	t80 = ((x3225/(x3226|x3227))<<x3228);

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x3346 = INT32_MIN;
	uint64_t x3347 = UINT64_MAX;
	uint64_t x3348 = 7LLU;
	uint64_t t81 = 24425LLU;

	t81 = ((x3345/(x3346|x3347))<<x3348);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x3353 = 26;
	int8_t x3354 = INT8_MIN;
	volatile int64_t x3355 = 144372991659488284LL;
	uint64_t x3356 = 3LLU;

	t82 = ((x3353/(x3354|x3355))<<x3356);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3425 = INT64_MAX;
	int8_t x3426 = INT8_MAX;
	volatile int8_t x3427 = INT8_MAX;
	static uint16_t x3428 = 0U;
	volatile int64_t t83 = -3910603878742761LL;

	t83 = ((x3425/(x3426|x3427))<<x3428);

	if (t83 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x3477 = 1U;
	int32_t x3478 = 40;
	int64_t x3479 = -2317LL;
	uint16_t x3480 = 1U;
	volatile int64_t t84 = -2294LL;

	t84 = ((x3477/(x3478|x3479))<<x3480);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3481 = -1;
	int64_t x3482 = INT64_MAX;
	volatile int8_t x3483 = INT8_MIN;
	static int8_t x3484 = 11;
	static volatile int64_t t85 = -3220LL;

	t85 = ((x3481/(x3482|x3483))<<x3484);

	if (t85 != 2048LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3581 = INT16_MAX;
	int16_t x3582 = -1;
	uint32_t x3583 = UINT32_MAX;
	volatile uint8_t x3584 = 1U;

	t86 = ((x3581/(x3582|x3583))<<x3584);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x3597 = -9;
	int16_t x3598 = INT16_MIN;
	uint16_t x3599 = 14U;
	uint8_t x3600 = 13U;
	volatile int32_t t87 = 12;

	t87 = ((x3597/(x3598|x3599))<<x3600);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3605 = -12469;
	volatile int64_t t88 = 8966LL;

	t88 = ((x3605/(x3606|x3607))<<x3608);

	if (t88 != 1385LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x3653 = -1LL;
	volatile uint32_t x3654 = 2787U;
	int8_t x3655 = -1;
	uint16_t x3656 = 1U;

	t89 = ((x3653/(x3654|x3655))<<x3656);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3713 = 11U;
	int32_t x3714 = 6865;
	int64_t x3715 = INT64_MIN;
	uint32_t x3716 = 1U;

	t90 = ((x3713/(x3714|x3715))<<x3716);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x3777 = -1;
	int8_t x3778 = 7;
	static uint64_t x3780 = 10LLU;
	volatile int32_t t91 = -514966583;

	t91 = ((x3777/(x3778|x3779))<<x3780);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3801 = 0LLU;
	volatile uint8_t x3803 = UINT8_MAX;
	uint64_t t92 = 6895440529862384LLU;

	t92 = ((x3801/(x3802|x3803))<<x3804);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3809 = 0;
	uint16_t x3810 = UINT16_MAX;
	int16_t x3811 = -3148;
	int64_t x3812 = 20LL;

	t93 = ((x3809/(x3810|x3811))<<x3812);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x3817 = -1;
	volatile int8_t x3818 = 0;
	int16_t x3820 = 1;
	uint64_t t94 = 6259256184LLU;

	t94 = ((x3817/(x3818|x3819))<<x3820);

	if (t94 != 130LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x3825 = INT64_MIN;
	int8_t x3826 = INT8_MAX;
	int64_t x3827 = INT64_MIN;
	uint8_t x3828 = 45U;

	t95 = ((x3825/(x3826|x3827))<<x3828);

	if (t95 != 35184372088832LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3993 = -1;
	int32_t x3994 = 37;
	static uint8_t x3995 = 53U;
	int8_t x3996 = 0;
	int32_t t96 = -5556648;

	t96 = ((x3993/(x3994|x3995))<<x3996);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4017 = 0;
	int8_t x4020 = 0;

	t97 = ((x4017/(x4018|x4019))<<x4020);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4021 = -1;
	int16_t x4022 = INT16_MIN;
	uint32_t x4023 = 496831641U;
	uint8_t x4024 = 12U;

	t98 = ((x4021/(x4022|x4023))<<x4024);

	if (t98 != 4096U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4105 = 7U;
	uint64_t x4106 = 1729871096706362LLU;
	volatile int32_t x4107 = -1;
	int8_t x4108 = 0;
	volatile uint64_t t99 = 4085449314LLU;

	t99 = ((x4105/(x4106|x4107))<<x4108);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

