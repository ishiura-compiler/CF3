#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x22 = 56U;
uint8_t x139 = UINT8_MAX;
static int16_t x233 = 104;
int32_t t6 = -6;
int64_t x304 = -1LL;
int32_t t7 = 53;
uint32_t x407 = UINT32_MAX;
static volatile int64_t x437 = 766LL;
static int8_t x440 = INT8_MIN;
uint16_t x468 = UINT16_MAX;
volatile uint16_t x477 = 909U;
int32_t t12 = -488101;
uint16_t x528 = UINT16_MAX;
int8_t x712 = INT8_MIN;
volatile int64_t x723 = 0LL;
static volatile int32_t t17 = 5;
volatile uint32_t x797 = 0U;
volatile int8_t x798 = 1;
int8_t x816 = 0;
int16_t x847 = 0;
int16_t x850 = INT16_MIN;
static int8_t x897 = INT8_MAX;
static int8_t x990 = INT8_MAX;
static int16_t x991 = -71;
uint8_t x992 = 0U;
int32_t x1010 = 1;
int64_t x1025 = 64904583LL;
volatile int32_t t28 = 826103683;
uint8_t x1048 = UINT8_MAX;
static volatile uint32_t t30 = 724U;
volatile int32_t t31 = -112;
static volatile uint8_t x1248 = 0U;
volatile uint64_t x1265 = 989043096037926479LLU;
static int32_t x1326 = 0;
uint64_t t35 = UINT64_MAX;
int64_t x1343 = -10LL;
static uint8_t x1348 = 21U;
volatile int32_t t37 = 6917933;
uint8_t x1407 = UINT8_MAX;
int32_t x1455 = INT32_MIN;
volatile uint8_t x1486 = 1U;
static int64_t x1487 = 218032LL;
static int8_t x1527 = INT8_MIN;
uint32_t x1548 = 51U;
volatile uint32_t t42 = 9U;
uint32_t x1606 = UINT32_MAX;
int64_t x1674 = INT64_MIN;
volatile uint32_t t44 = 8367U;
static uint8_t x1701 = UINT8_MAX;
int64_t x1703 = -708592068709448681LL;
uint16_t x1704 = 26U;
int64_t x1899 = INT64_MAX;
static uint8_t x1967 = 86U;
uint32_t x2096 = 7621U;
int32_t x2097 = INT32_MAX;
static int16_t x2137 = 0;
int64_t x2139 = 128811LL;
int8_t x2195 = -1;
static uint32_t x2261 = UINT32_MAX;
uint32_t x2354 = 7U;
static uint32_t x2356 = 28227960U;
int8_t x2421 = 60;
uint16_t x2422 = 2U;
int32_t x2654 = INT32_MIN;
int32_t t64 = -3014;
int64_t x2768 = -1LL;
int32_t t65 = -107837033;
static uint32_t x2829 = 2U;
int32_t x2832 = -1;
int32_t x2836 = 50;
uint64_t x2837 = 249908915861063LLU;
int32_t x2839 = 21;
uint8_t x2876 = 4U;
uint64_t t69 = 9074568063253LLU;
int32_t x2878 = 299;
static int8_t x2880 = 39;
int64_t x2883 = -1LL;
static volatile uint64_t t73 = 69334572275695LLU;
int32_t t74 = 7106510;
int64_t x2987 = INT64_MAX;
int8_t x3016 = -1;
uint64_t x3035 = 2LLU;
volatile uint32_t x3126 = 61U;
uint64_t x3128 = 10LLU;
int8_t x3170 = 3;
static volatile int16_t x3207 = INT16_MAX;
int32_t t85 = -1;
uint32_t x3213 = 341266499U;
volatile int32_t t90 = -31902704;
uint32_t x3393 = UINT32_MAX;
int16_t x3394 = -1;
uint8_t x3441 = 25U;
int16_t x3444 = -1;
uint16_t x3640 = 25U;
volatile uint64_t t96 = 4LLU;
static uint64_t x3649 = UINT64_MAX;
volatile uint64_t t98 = 4112LLU;
volatile uint64_t t99 = 705712200LLU;


void f0(void) {
	static uint64_t x21 = UINT64_MAX;
	volatile int16_t x23 = INT16_MIN;
	volatile int64_t x24 = -1LL;
	volatile uint64_t t0 = 1094902015957002520LLU;

	t0 = (x21>>(x22%(x23-x24)));

	if (t0 != 255LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x77 = 13704156114758890LLU;
	uint16_t x78 = 18U;
	int64_t x79 = -1LL;
	uint64_t x80 = 1LLU;
	uint64_t t1 = 60133630341LLU;

	t1 = (x77>>(x78%(x79-x80)));

	if (t1 != 52277206858LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x137 = 7U;
	int8_t x138 = 13;
	int64_t x140 = -1LL;
	int32_t t2 = -242605725;

	t2 = (x137>>(x138%(x139-x140)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x169 = UINT16_MAX;
	volatile int32_t x170 = INT32_MIN;
	static int32_t x171 = 7;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t3 = 30;

	t3 = (x169>>(x170%(x171-x172)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x201 = 47U;
	int16_t x202 = 31;
	int64_t x203 = INT64_MIN;
	uint64_t x204 = 1060373891839968171LLU;
	static volatile int32_t t4 = -1;

	t4 = (x201>>(x202%(x203-x204)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x234 = 20U;
	volatile int32_t x235 = -1;
	static uint8_t x236 = 0U;
	int32_t t5 = -661032497;

	t5 = (x233>>(x234%(x235-x236)));

	if (t5 != 104) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x249 = INT16_MAX;
	static uint32_t x250 = 25U;
	static int8_t x251 = INT8_MIN;
	static int64_t x252 = INT64_MIN;

	t6 = (x249>>(x250%(x251-x252)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x301 = 250U;
	uint32_t x302 = 3U;
	uint16_t x303 = 26U;

	t7 = (x301>>(x302%(x303-x304)));

	if (t7 != 31) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x325 = 3443U;
	static volatile int32_t x326 = 1;
	int32_t x327 = -1;
	uint64_t x328 = 159122346911LLU;
	int32_t t8 = 13092584;

	t8 = (x325>>(x326%(x327-x328)));

	if (t8 != 1721) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x405 = 47818242822LLU;
	int8_t x406 = 3;
	uint64_t x408 = 8121499LLU;
	volatile uint64_t t9 = 1372LLU;

	t9 = (x405>>(x406%(x407-x408)));

	if (t9 != 5977280352LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x438 = UINT64_MAX;
	static int32_t x439 = -1;
	int64_t t10 = -14LL;

	t10 = (x437>>(x438%(x439-x440)));

	if (t10 != 383LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x465 = INT8_MAX;
	static uint8_t x466 = 1U;
	static uint64_t x467 = UINT64_MAX;
	static int32_t t11 = -4288;

	t11 = (x465>>(x466%(x467-x468)));

	if (t11 != 63) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x478 = 0;
	uint16_t x479 = 33U;
	uint16_t x480 = 1709U;

	t12 = (x477>>(x478%(x479-x480)));

	if (t12 != 909) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x525 = 0;
	volatile uint8_t x526 = 6U;
	uint64_t x527 = 83587602276LLU;
	int32_t t13 = 13975345;

	t13 = (x525>>(x526%(x527-x528)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x605 = 20U;
	static int32_t x606 = INT32_MAX;
	static int16_t x607 = INT16_MAX;
	int16_t x608 = 0;
	volatile int32_t t14 = -18074;

	t14 = (x605>>(x606%(x607-x608)));

	if (t14 != 10) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x709 = 3316U;
	static int64_t x710 = INT64_MIN;
	uint32_t x711 = 0U;
	volatile uint32_t t15 = 64963U;

	t15 = (x709>>(x710%(x711-x712)));

	if (t15 != 3316U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x721 = 7;
	int16_t x722 = 1;
	int16_t x724 = INT16_MIN;
	volatile int32_t t16 = -15432873;

	t16 = (x721>>(x722%(x723-x724)));

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x757 = 2;
	static volatile uint32_t x758 = 3U;
	int8_t x759 = INT8_MIN;
	static uint8_t x760 = UINT8_MAX;

	t17 = (x757>>(x758%(x759-x760)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x799 = -1LL;
	int16_t x800 = INT16_MIN;
	volatile uint32_t t18 = 0U;

	t18 = (x797>>(x798%(x799-x800)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x813 = 18197027819163LLU;
	static uint16_t x814 = UINT16_MAX;
	int64_t x815 = -1LL;
	static uint64_t t19 = 2251407891989271348LLU;

	t19 = (x813>>(x814%(x815-x816)));

	if (t19 != 18197027819163LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x833 = UINT8_MAX;
	uint16_t x834 = 0U;
	uint64_t x835 = UINT64_MAX;
	static volatile int64_t x836 = INT64_MIN;
	int32_t t20 = -9856;

	t20 = (x833>>(x834%(x835-x836)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x845 = 7U;
	int64_t x846 = -165LL;
	int32_t x848 = -1;
	static uint32_t t21 = 50U;

	t21 = (x845>>(x846%(x847-x848)));

	if (t21 != 7U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x849 = 3997830507535970LL;
	int64_t x851 = -1LL;
	int64_t x852 = -17LL;
	int64_t t22 = 2373188242914438216LL;

	t22 = (x849>>(x850%(x851-x852)));

	if (t22 != 3997830507535970LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x898 = 5LL;
	volatile int32_t x899 = INT32_MAX;
	uint32_t x900 = UINT32_MAX;
	int32_t t23 = -42977436;

	t23 = (x897>>(x898%(x899-x900)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x909 = 38425221U;
	int8_t x910 = 0;
	volatile int32_t x911 = 174;
	uint16_t x912 = 19513U;
	volatile uint32_t t24 = 247683097U;

	t24 = (x909>>(x910%(x911-x912)));

	if (t24 != 38425221U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x989 = INT64_MAX;
	volatile int64_t t25 = -170855LL;

	t25 = (x989>>(x990%(x991-x992)));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1009 = INT8_MAX;
	static int16_t x1011 = INT16_MIN;
	int64_t x1012 = -980LL;
	static volatile int32_t t26 = -101292394;

	t26 = (x1009>>(x1010%(x1011-x1012)));

	if (t26 != 63) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1026 = INT64_MAX;
	uint8_t x1027 = 48U;
	static int8_t x1028 = -1;
	int64_t t27 = 5042872656LL;

	t27 = (x1025>>(x1026%(x1027-x1028)));

	if (t27 != 64904583LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1041 = 2U;
	int8_t x1042 = 1;
	int32_t x1043 = INT32_MAX;
	uint8_t x1044 = 25U;

	t28 = (x1041>>(x1042%(x1043-x1044)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1045 = UINT8_MAX;
	uint8_t x1046 = 3U;
	int32_t x1047 = -1;
	volatile int32_t t29 = -32024;

	t29 = (x1045>>(x1046%(x1047-x1048)));

	if (t29 != 31) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1085 = 1191042992U;
	int16_t x1086 = 7;
	uint8_t x1087 = 1U;
	uint16_t x1088 = UINT16_MAX;

	t30 = (x1085>>(x1086%(x1087-x1088)));

	if (t30 != 9305023U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1137 = INT16_MAX;
	uint16_t x1138 = 0U;
	static volatile int32_t x1139 = -1;
	volatile int16_t x1140 = INT16_MIN;

	t31 = (x1137>>(x1138%(x1139-x1140)));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1201 = 15727U;
	uint16_t x1202 = 0U;
	static uint64_t x1203 = 893364335074947650LLU;
	volatile int16_t x1204 = -1;
	volatile int32_t t32 = -273929036;

	t32 = (x1201>>(x1202%(x1203-x1204)));

	if (t32 != 15727) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1245 = UINT32_MAX;
	volatile int64_t x1246 = INT64_MIN;
	int16_t x1247 = -1;
	static uint32_t t33 = UINT32_MAX;

	t33 = (x1245>>(x1246%(x1247-x1248)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1266 = INT64_MAX;
	int16_t x1267 = INT16_MIN;
	static int16_t x1268 = -8;
	uint64_t t34 = 13257508228LLU;

	t34 = (x1265>>(x1266%(x1267-x1268)));

	if (t34 != 7726899187796300LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x1325 = UINT64_MAX;
	volatile uint16_t x1327 = 9U;
	static int16_t x1328 = INT16_MIN;

	t35 = (x1325>>(x1326%(x1327-x1328)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x1341 = 0U;
	volatile int8_t x1342 = 2;
	static int32_t x1344 = INT32_MAX;
	volatile int32_t t36 = 116;

	t36 = (x1341>>(x1342%(x1343-x1344)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1345 = 2861U;
	uint16_t x1346 = 5U;
	static volatile int16_t x1347 = INT16_MIN;

	t37 = (x1345>>(x1346%(x1347-x1348)));

	if (t37 != 89) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1405 = 37104LLU;
	int16_t x1406 = INT16_MIN;
	int16_t x1408 = -1;
	static uint64_t t38 = 143811LLU;

	t38 = (x1405>>(x1406%(x1407-x1408)));

	if (t38 != 37104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1453 = 7;
	uint32_t x1454 = 1U;
	int8_t x1456 = INT8_MIN;
	volatile int32_t t39 = -719482;

	t39 = (x1453>>(x1454%(x1455-x1456)));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1485 = 22206955835730LLU;
	uint16_t x1488 = 61U;
	volatile uint64_t t40 = 986311861027LLU;

	t40 = (x1485>>(x1486%(x1487-x1488)));

	if (t40 != 11103477917865LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x1525 = UINT8_MAX;
	int32_t x1526 = 52608;
	int16_t x1528 = -1;
	volatile int32_t t41 = 2339597;

	t41 = (x1525>>(x1526%(x1527-x1528)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1545 = 27U;
	int64_t x1546 = INT64_MAX;
	int64_t x1547 = -1LL;

	t42 = (x1545>>(x1546%(x1547-x1548)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1605 = UINT16_MAX;
	volatile int8_t x1607 = INT8_MAX;
	volatile int8_t x1608 = 0;
	volatile int32_t t43 = 484835288;

	t43 = (x1605>>(x1606%(x1607-x1608)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1673 = 9006155U;
	uint64_t x1675 = UINT64_MAX;
	int64_t x1676 = INT64_MIN;

	t44 = (x1673>>(x1674%(x1675-x1676)));

	if (t44 != 4503077U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1702 = 6U;
	static int32_t t45 = -21300936;

	t45 = (x1701>>(x1702%(x1703-x1704)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x1897 = 23387847371132LLU;
	static uint8_t x1898 = 6U;
	int16_t x1900 = INT16_MAX;
	uint64_t t46 = 2051985277305019714LLU;

	t46 = (x1897>>(x1898%(x1899-x1900)));

	if (t46 != 365435115173LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1937 = INT64_MAX;
	int16_t x1938 = 11528;
	uint16_t x1939 = 0U;
	static int8_t x1940 = 58;
	int64_t t47 = -2438317747472LL;

	t47 = (x1937>>(x1938%(x1939-x1940)));

	if (t47 != 524287LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1965 = INT32_MAX;
	uint16_t x1966 = 0U;
	static volatile int64_t x1968 = -1LL;
	volatile int32_t t48 = INT32_MAX;

	t48 = (x1965>>(x1966%(x1967-x1968)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x2045 = 6182;
	uint16_t x2046 = 3740U;
	uint8_t x2047 = 5U;
	static uint64_t x2048 = 3LLU;
	int32_t t49 = -93;

	t49 = (x2045>>(x2046%(x2047-x2048)));

	if (t49 != 6182) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2093 = UINT64_MAX;
	uint64_t x2094 = 1LLU;
	uint64_t x2095 = 120343352797114769LLU;
	volatile uint64_t t50 = 8016395792979LLU;

	t50 = (x2093>>(x2094%(x2095-x2096)));

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2098 = 25U;
	int64_t x2099 = INT64_MAX;
	int16_t x2100 = 12308;
	volatile int32_t t51 = -116984;

	t51 = (x2097>>(x2098%(x2099-x2100)));

	if (t51 != 63) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2138 = 0U;
	int8_t x2140 = INT8_MIN;
	int32_t t52 = -528463;

	t52 = (x2137>>(x2138%(x2139-x2140)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2165 = 1U;
	static uint8_t x2166 = 2U;
	int8_t x2167 = INT8_MAX;
	uint8_t x2168 = 51U;
	static volatile uint32_t t53 = 145U;

	t53 = (x2165>>(x2166%(x2167-x2168)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2193 = UINT32_MAX;
	volatile int8_t x2194 = 6;
	int8_t x2196 = INT8_MIN;
	volatile uint32_t t54 = 1U;

	t54 = (x2193>>(x2194%(x2195-x2196)));

	if (t54 != 67108863U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2229 = 6;
	volatile int64_t x2230 = INT64_MAX;
	int8_t x2231 = -10;
	int16_t x2232 = 0;
	static int32_t t55 = -203;

	t55 = (x2229>>(x2230%(x2231-x2232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2237 = INT32_MAX;
	int64_t x2238 = INT64_MAX;
	int64_t x2239 = INT64_MIN;
	volatile int64_t x2240 = -1LL;
	volatile int32_t t56 = INT32_MAX;

	t56 = (x2237>>(x2238%(x2239-x2240)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x2253 = 955448U;
	static int16_t x2254 = INT16_MAX;
	int8_t x2255 = INT8_MIN;
	int16_t x2256 = -1;
	static uint32_t t57 = 15674U;

	t57 = (x2253>>(x2254%(x2255-x2256)));

	if (t57 != 477724U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x2262 = 1U;
	static int32_t x2263 = INT32_MIN;
	volatile int32_t x2264 = -1;
	uint32_t t58 = 6082126U;

	t58 = (x2261>>(x2262%(x2263-x2264)));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2353 = INT8_MAX;
	int16_t x2355 = INT16_MAX;
	volatile int32_t t59 = -5902465;

	t59 = (x2353>>(x2354%(x2355-x2356)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2369 = INT16_MAX;
	int16_t x2370 = INT16_MIN;
	static int8_t x2371 = INT8_MAX;
	volatile int16_t x2372 = -1;
	int32_t t60 = 866;

	t60 = (x2369>>(x2370%(x2371-x2372)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x2423 = 4U;
	uint8_t x2424 = 3U;
	int32_t t61 = 0;

	t61 = (x2421>>(x2422%(x2423-x2424)));

	if (t61 != 60) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2645 = 1U;
	static int64_t x2646 = INT64_MAX;
	int64_t x2647 = INT64_MIN;
	static int32_t x2648 = -1;
	volatile uint32_t t62 = 1557U;

	t62 = (x2645>>(x2646%(x2647-x2648)));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2653 = 50U;
	int8_t x2655 = 1;
	uint8_t x2656 = 3U;
	volatile int32_t t63 = 2195798;

	t63 = (x2653>>(x2654%(x2655-x2656)));

	if (t63 != 50) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2737 = 4017U;
	int8_t x2738 = -1;
	volatile uint32_t x2739 = UINT32_MAX;
	int32_t x2740 = INT32_MIN;

	t64 = (x2737>>(x2738%(x2739-x2740)));

	if (t64 != 2008) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2765 = 1586;
	int64_t x2766 = INT64_MAX;
	int8_t x2767 = 1;

	t65 = (x2765>>(x2766%(x2767-x2768)));

	if (t65 != 793) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2830 = 1;
	static int64_t x2831 = 924391839LL;
	volatile uint32_t t66 = 116216243U;

	t66 = (x2829>>(x2830%(x2831-x2832)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x2833 = UINT8_MAX;
	static uint16_t x2834 = 1U;
	int8_t x2835 = INT8_MIN;
	volatile int32_t t67 = -5;

	t67 = (x2833>>(x2834%(x2835-x2836)));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x2838 = 17U;
	int32_t x2840 = INT32_MAX;
	volatile uint64_t t68 = 19150274268LLU;

	t68 = (x2837>>(x2838%(x2839-x2840)));

	if (t68 != 1906653715LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2873 = 354102503801613206LLU;
	static volatile uint8_t x2874 = UINT8_MAX;
	uint8_t x2875 = 6U;

	t69 = (x2873>>(x2874%(x2875-x2876)));

	if (t69 != 177051251900806603LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2877 = 8U;
	int32_t x2879 = -98;
	volatile int32_t t70 = 41;

	t70 = (x2877>>(x2878%(x2879-x2880)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2881 = 116U;
	volatile int64_t x2882 = INT64_MAX;
	int8_t x2884 = INT8_MIN;
	uint32_t t71 = 3U;

	t71 = (x2881>>(x2882%(x2883-x2884)));

	if (t71 != 116U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2885 = 101;
	int8_t x2886 = -1;
	volatile int8_t x2887 = 4;
	static uint32_t x2888 = UINT32_MAX;
	int32_t t72 = -1;

	t72 = (x2885>>(x2886%(x2887-x2888)));

	if (t72 != 101) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2901 = UINT64_MAX;
	uint8_t x2902 = 45U;
	int16_t x2903 = 0;
	int64_t x2904 = INT64_MAX;

	t73 = (x2901>>(x2902%(x2903-x2904)));

	if (t73 != 524287LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2925 = 23;
	static int16_t x2926 = 2;
	uint64_t x2927 = UINT64_MAX;
	int32_t x2928 = 18310079;

	t74 = (x2925>>(x2926%(x2927-x2928)));

	if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2949 = 0U;
	uint32_t x2950 = 2U;
	volatile uint32_t x2951 = UINT32_MAX;
	uint64_t x2952 = 67209956617033LLU;
	volatile int32_t t75 = 369577516;

	t75 = (x2949>>(x2950%(x2951-x2952)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2985 = 4549242U;
	uint16_t x2986 = 2U;
	uint8_t x2988 = UINT8_MAX;
	volatile uint32_t t76 = 1678104877U;

	t76 = (x2985>>(x2986%(x2987-x2988)));

	if (t76 != 1137310U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3013 = 0U;
	int64_t x3014 = INT64_MAX;
	static int64_t x3015 = INT64_MIN;
	volatile int32_t t77 = -2032909;

	t77 = (x3013>>(x3014%(x3015-x3016)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3033 = 21U;
	uint32_t x3034 = 0U;
	static int16_t x3036 = INT16_MIN;
	volatile int32_t t78 = -16685521;

	t78 = (x3033>>(x3034%(x3035-x3036)));

	if (t78 != 21) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3057 = 1939;
	volatile int16_t x3058 = INT16_MIN;
	int16_t x3059 = -3;
	int16_t x3060 = -1;
	volatile int32_t t79 = 12769353;

	t79 = (x3057>>(x3058%(x3059-x3060)));

	if (t79 != 1939) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3125 = 13009LLU;
	uint16_t x3127 = 29985U;
	uint64_t t80 = 7437885LLU;

	t80 = (x3125>>(x3126%(x3127-x3128)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3145 = INT16_MAX;
	static int8_t x3146 = INT8_MIN;
	static int8_t x3147 = -9;
	uint8_t x3148 = 7U;
	volatile int32_t t81 = 57;

	t81 = (x3145>>(x3146%(x3147-x3148)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3169 = 14U;
	volatile int8_t x3171 = 26;
	int16_t x3172 = -1483;
	volatile uint32_t t82 = 1U;

	t82 = (x3169>>(x3170%(x3171-x3172)));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3185 = INT32_MAX;
	uint16_t x3186 = 1U;
	int16_t x3187 = 1;
	int64_t x3188 = 727433LL;
	static volatile int32_t t83 = -45454508;

	t83 = (x3185>>(x3186%(x3187-x3188)));

	if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3201 = 377U;
	volatile uint16_t x3202 = 0U;
	int32_t x3203 = INT32_MAX;
	int32_t x3204 = 181128593;
	uint32_t t84 = 51512U;

	t84 = (x3201>>(x3202%(x3203-x3204)));

	if (t84 != 377U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3205 = 4U;
	uint64_t x3206 = 1LLU;
	static uint16_t x3208 = UINT16_MAX;

	t85 = (x3205>>(x3206%(x3207-x3208)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3214 = -1;
	uint32_t x3215 = 95U;
	int8_t x3216 = 0;
	static volatile uint32_t t86 = 13U;

	t86 = (x3213>>(x3214%(x3215-x3216)));

	if (t86 != 10664578U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3233 = 370231;
	volatile uint8_t x3234 = 11U;
	static volatile uint16_t x3235 = 3U;
	uint32_t x3236 = 1U;
	volatile int32_t t87 = -171;

	t87 = (x3233>>(x3234%(x3235-x3236)));

	if (t87 != 185115) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3277 = INT16_MAX;
	int8_t x3278 = 2;
	int64_t x3279 = -54294LL;
	static volatile uint16_t x3280 = 11832U;
	volatile int32_t t88 = -102;

	t88 = (x3277>>(x3278%(x3279-x3280)));

	if (t88 != 8191) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x3329 = 23970;
	int8_t x3330 = 1;
	volatile uint32_t x3331 = UINT32_MAX;
	uint32_t x3332 = 756563U;
	int32_t t89 = 97647443;

	t89 = (x3329>>(x3330%(x3331-x3332)));

	if (t89 != 11985) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x3341 = 1;
	uint64_t x3342 = 7LLU;
	uint64_t x3343 = 23714294147073172LLU;
	volatile uint8_t x3344 = 1U;

	t90 = (x3341>>(x3342%(x3343-x3344)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3395 = -1;
	static uint8_t x3396 = 0U;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x3393>>(x3394%(x3395-x3396)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3442 = INT16_MIN;
	uint64_t x3443 = 28LLU;
	volatile int32_t t92 = 14;

	t92 = (x3441>>(x3442%(x3443-x3444)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3533 = INT8_MAX;
	int8_t x3534 = -31;
	int32_t x3535 = 0;
	uint16_t x3536 = 1U;
	volatile int32_t t93 = -11821961;

	t93 = (x3533>>(x3534%(x3535-x3536)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3537 = 2U;
	uint16_t x3538 = 0U;
	static volatile int32_t x3539 = 411;
	static int8_t x3540 = INT8_MIN;
	volatile int32_t t94 = 6692;

	t94 = (x3537>>(x3538%(x3539-x3540)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x3569 = INT16_MAX;
	static volatile uint8_t x3570 = 1U;
	int64_t x3571 = INT64_MIN;
	int32_t x3572 = INT32_MIN;
	volatile int32_t t95 = -210785103;

	t95 = (x3569>>(x3570%(x3571-x3572)));

	if (t95 != 16383) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3637 = 2270454127134110LLU;
	volatile int16_t x3638 = -1;
	uint32_t x3639 = 7U;

	t96 = (x3637>>(x3638%(x3639-x3640)));

	if (t96 != 17322190301LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3641 = UINT32_MAX;
	uint16_t x3642 = 151U;
	int8_t x3643 = -5;
	int32_t x3644 = 1;
	uint32_t t97 = 473492895U;

	t97 = (x3641>>(x3642%(x3643-x3644)));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3650 = UINT64_MAX;
	volatile uint16_t x3651 = 0U;
	uint8_t x3652 = 3U;

	t98 = (x3649>>(x3650%(x3651-x3652)));

	if (t98 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3693 = 0LLU;
	uint8_t x3694 = 56U;
	static int64_t x3695 = INT64_MIN;
	volatile int32_t x3696 = INT32_MIN;

	t99 = (x3693>>(x3694%(x3695-x3696)));

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

