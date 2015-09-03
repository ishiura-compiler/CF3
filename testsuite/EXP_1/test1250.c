#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x80 = UINT64_MAX;
int32_t t3 = -1;
uint32_t x104 = UINT32_MAX;
int16_t x116 = INT16_MIN;
int16_t x198 = INT16_MIN;
volatile int32_t t9 = 36718;
volatile int8_t x305 = -37;
int8_t x386 = INT8_MAX;
int16_t x387 = 15;
int32_t t11 = 15627;
int16_t x405 = -1;
int16_t x406 = 1476;
uint8_t x436 = UINT8_MAX;
volatile uint32_t x464 = UINT32_MAX;
int64_t x529 = INT64_MAX;
volatile int64_t t16 = -59142909730LL;
int16_t x613 = 299;
static int32_t x615 = 0;
volatile uint64_t t19 = 490385LLU;
static volatile uint16_t x711 = 3U;
static volatile int64_t x753 = INT64_MAX;
int64_t x754 = -1968019LL;
static int64_t x825 = INT64_MIN;
uint16_t x827 = 3U;
int8_t x828 = INT8_MIN;
uint16_t x835 = 3U;
int32_t x836 = INT32_MAX;
uint8_t x847 = 3U;
uint64_t x848 = UINT64_MAX;
uint64_t t24 = 14048399084859520LLU;
uint32_t x954 = UINT32_MAX;
int16_t x993 = INT16_MIN;
int32_t x996 = -1;
int16_t x1136 = -1;
static int64_t x1217 = INT64_MAX;
uint32_t x1220 = UINT32_MAX;
static int32_t t35 = 5708;
int32_t t37 = 14755;
volatile int8_t x1568 = 25;
int32_t x1657 = 810578;
uint32_t x1660 = UINT32_MAX;
int64_t x1754 = -1LL;
int16_t x1756 = INT16_MAX;
int32_t x1792 = 403491;
int64_t x1837 = INT64_MAX;
int8_t x1838 = 1;
volatile int16_t x1849 = 1622;
uint8_t x1851 = 0U;
static uint16_t x1868 = 13U;
int32_t t49 = 1;
int32_t x1931 = 4;
int64_t x1940 = INT64_MAX;
static volatile int64_t t51 = -5LL;
uint8_t x1943 = 22U;
int8_t x1951 = 28;
int64_t x2108 = -621385359088567LL;
static uint64_t x2153 = 4704332827LLU;
static int16_t x2172 = -1;
int32_t t59 = 2;
static uint16_t x2303 = 21U;
int32_t x2314 = -1;
static int16_t x2316 = 28;
int8_t x2322 = 28;
int8_t x2323 = 2;
uint64_t x2409 = 113619LLU;
int16_t x2439 = 1;
volatile uint32_t x2545 = 32216454U;
uint8_t x2714 = 33U;
uint32_t x2716 = 16256U;
static uint32_t t70 = 1164191U;
static uint8_t x2723 = 26U;
int64_t x2752 = INT64_MAX;
int64_t x2757 = -59LL;
int32_t x2760 = -1;
int32_t x2782 = -131789394;
volatile int32_t t74 = 25;
volatile int64_t x2797 = INT64_MIN;
static int8_t x2999 = 9;
static int8_t x3054 = INT8_MIN;
volatile int16_t x3055 = 7;
static uint8_t x3099 = 0U;
volatile int8_t x3100 = INT8_MIN;
uint8_t x3121 = 117U;
volatile uint16_t x3123 = 2U;
uint64_t t83 = 1544175269178829LLU;
uint32_t x3125 = 94614U;
static volatile uint32_t x3177 = UINT32_MAX;
volatile uint32_t x3178 = 4555922U;
int16_t x3197 = 25;
volatile int32_t t87 = -83930;
int32_t x3217 = -197285;
uint16_t x3290 = UINT16_MAX;
volatile int16_t x3302 = 14814;
int8_t x3304 = 1;
static volatile int64_t x3341 = INT64_MIN;
int64_t x3342 = -1LL;
uint64_t x3344 = 3185819278341LLU;
volatile uint64_t t92 = 170762651LLU;
int8_t x3348 = INT8_MIN;
volatile int32_t t93 = 831;
uint16_t x3439 = 1U;
volatile uint16_t x3440 = 1035U;
int32_t t97 = -453;
volatile uint8_t x3494 = UINT8_MAX;
static int32_t t98 = -13154015;


void f0(void) {
	static volatile int8_t x1 = 3;
	static int64_t x2 = -1LL;
	uint8_t x3 = 0U;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -1352236;

	t0 = (((x1==x2)<<x3)-x4);

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x49 = INT64_MIN;
	volatile int64_t x50 = 3583LL;
	int16_t x51 = 11;
	static volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t1 = 459;

	t1 = (((x49==x50)<<x51)-x52);

	if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x77 = UINT16_MAX;
	int16_t x78 = INT16_MIN;
	int8_t x79 = 0;
	volatile uint64_t t2 = 513LLU;

	t2 = (((x77==x78)<<x79)-x80);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x90 = -1;
	uint8_t x91 = 12U;
	uint8_t x92 = 16U;

	t3 = (((x89==x90)<<x91)-x92);

	if (t3 != -16) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x101 = UINT8_MAX;
	static uint8_t x102 = 16U;
	static int16_t x103 = 1;
	static volatile uint32_t t4 = 15565818U;

	t4 = (((x101==x102)<<x103)-x104);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = 29;
	int32_t t5 = -9;

	t5 = (((x113==x114)<<x115)-x116);

	if (t5 != 536903680) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x197 = INT8_MIN;
	static uint16_t x199 = 7U;
	static int32_t x200 = 1;
	int32_t t6 = 158827;

	t6 = (((x197==x198)<<x199)-x200);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x205 = -1;
	int16_t x206 = -1;
	int16_t x207 = 0;
	int32_t x208 = -425636;
	volatile int32_t t7 = 988;

	t7 = (((x205==x206)<<x207)-x208);

	if (t7 != 425637) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x233 = 1;
	uint64_t x234 = 119411121009471LLU;
	static int64_t x235 = 15LL;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t8 = 13;

	t8 = (((x233==x234)<<x235)-x236);

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x281 = INT64_MAX;
	volatile int32_t x282 = -551;
	uint8_t x283 = 5U;
	uint16_t x284 = UINT16_MAX;

	t9 = (((x281==x282)<<x283)-x284);

	if (t9 != -65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x306 = 325;
	uint8_t x307 = 3U;
	uint8_t x308 = 20U;
	int32_t t10 = -1;

	t10 = (((x305==x306)<<x307)-x308);

	if (t10 != -20) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x385 = -1;
	static uint16_t x388 = 576U;

	t11 = (((x385==x386)<<x387)-x388);

	if (t11 != -576) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x407 = 0;
	uint32_t x408 = UINT32_MAX;
	volatile uint32_t t12 = 5U;

	t12 = (((x405==x406)<<x407)-x408);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x433 = -1LL;
	uint8_t x434 = UINT8_MAX;
	uint8_t x435 = 0U;
	static int32_t t13 = 16072;

	t13 = (((x433==x434)<<x435)-x436);

	if (t13 != -255) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x461 = 58U;
	static volatile int16_t x462 = INT16_MIN;
	int8_t x463 = 2;
	uint32_t t14 = 602395U;

	t14 = (((x461==x462)<<x463)-x464);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x473 = UINT8_MAX;
	int8_t x474 = -1;
	int32_t x475 = 16;
	volatile int32_t x476 = -1;
	volatile int32_t t15 = -2032;

	t15 = (((x473==x474)<<x475)-x476);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x530 = INT64_MAX;
	static int32_t x531 = 1;
	static int64_t x532 = INT64_MAX;

	t16 = (((x529==x530)<<x531)-x532);

	if (t16 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x573 = INT32_MIN;
	static volatile int32_t x574 = -1;
	int8_t x575 = 8;
	uint16_t x576 = 8U;
	int32_t t17 = 1565;

	t17 = (((x573==x574)<<x575)-x576);

	if (t17 != -8) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x593 = UINT64_MAX;
	int16_t x594 = -91;
	volatile int8_t x595 = 0;
	volatile int8_t x596 = 1;
	static int32_t t18 = -31269;

	t18 = (((x593==x594)<<x595)-x596);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x614 = 1527U;
	volatile uint64_t x616 = UINT64_MAX;

	t19 = (((x613==x614)<<x615)-x616);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x709 = 0U;
	volatile int64_t x710 = INT64_MIN;
	static int64_t x712 = -1LL;
	int64_t t20 = 1434412602LL;

	t20 = (((x709==x710)<<x711)-x712);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x755 = 0;
	int16_t x756 = 52;
	volatile int32_t t21 = 316;

	t21 = (((x753==x754)<<x755)-x756);

	if (t21 != -52) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x826 = -1;
	volatile int32_t t22 = -3884381;

	t22 = (((x825==x826)<<x827)-x828);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x833 = 3416U;
	int8_t x834 = -1;
	int32_t t23 = 81010672;

	t23 = (((x833==x834)<<x835)-x836);

	if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x845 = -1;
	static int16_t x846 = INT16_MIN;

	t24 = (((x845==x846)<<x847)-x848);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x881 = -1;
	static volatile uint64_t x882 = 2622777LLU;
	uint64_t x883 = 6LLU;
	uint8_t x884 = 1U;
	int32_t t25 = -181;

	t25 = (((x881==x882)<<x883)-x884);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x889 = INT32_MIN;
	uint8_t x890 = 13U;
	static uint64_t x891 = 2LLU;
	uint8_t x892 = 15U;
	int32_t t26 = 22346855;

	t26 = (((x889==x890)<<x891)-x892);

	if (t26 != -15) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x925 = UINT64_MAX;
	static volatile int64_t x926 = INT64_MAX;
	uint8_t x927 = 4U;
	uint64_t x928 = 200644494475LLU;
	uint64_t t27 = 364106387016051LLU;

	t27 = (((x925==x926)<<x927)-x928);

	if (t27 != 18446743873065057141LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x933 = UINT64_MAX;
	int16_t x934 = -1;
	int32_t x935 = 2;
	int16_t x936 = -12258;
	volatile int32_t t28 = -725074;

	t28 = (((x933==x934)<<x935)-x936);

	if (t28 != 12262) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x953 = INT16_MIN;
	static int32_t x955 = 3;
	int16_t x956 = -37;
	int32_t t29 = 54;

	t29 = (((x953==x954)<<x955)-x956);

	if (t29 != 37) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x994 = UINT64_MAX;
	int8_t x995 = 0;
	static int32_t t30 = -1522;

	t30 = (((x993==x994)<<x995)-x996);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1081 = INT32_MIN;
	int32_t x1082 = INT32_MIN;
	int8_t x1083 = 0;
	uint8_t x1084 = 13U;
	static volatile int32_t t31 = 570;

	t31 = (((x1081==x1082)<<x1083)-x1084);

	if (t31 != -12) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1133 = INT32_MIN;
	static uint16_t x1134 = 0U;
	uint8_t x1135 = 3U;
	volatile int32_t t32 = -1;

	t32 = (((x1133==x1134)<<x1135)-x1136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1145 = 1956892631U;
	static volatile uint16_t x1146 = 177U;
	int8_t x1147 = 16;
	uint32_t x1148 = UINT32_MAX;
	uint32_t t33 = 0U;

	t33 = (((x1145==x1146)<<x1147)-x1148);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1218 = -8;
	int16_t x1219 = 1;
	uint32_t t34 = 0U;

	t34 = (((x1217==x1218)<<x1219)-x1220);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1301 = INT16_MIN;
	static uint16_t x1302 = UINT16_MAX;
	volatile uint16_t x1303 = 3U;
	int32_t x1304 = -1;

	t35 = (((x1301==x1302)<<x1303)-x1304);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1329 = -1;
	uint64_t x1330 = UINT64_MAX;
	uint8_t x1331 = 25U;
	int16_t x1332 = -18;
	int32_t t36 = -880475;

	t36 = (((x1329==x1330)<<x1331)-x1332);

	if (t36 != 33554450) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1405 = INT64_MIN;
	int16_t x1406 = -1;
	int8_t x1407 = 2;
	volatile int8_t x1408 = INT8_MIN;

	t37 = (((x1405==x1406)<<x1407)-x1408);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x1421 = 493107032U;
	int64_t x1422 = -1LL;
	int16_t x1423 = 2;
	int16_t x1424 = INT16_MIN;
	int32_t t38 = 155;

	t38 = (((x1421==x1422)<<x1423)-x1424);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1505 = INT64_MIN;
	static int8_t x1506 = INT8_MAX;
	uint8_t x1507 = 23U;
	static int8_t x1508 = INT8_MIN;
	static volatile int32_t t39 = 3659882;

	t39 = (((x1505==x1506)<<x1507)-x1508);

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1565 = 0;
	uint16_t x1566 = 5U;
	static int8_t x1567 = 4;
	volatile int32_t t40 = 405024;

	t40 = (((x1565==x1566)<<x1567)-x1568);

	if (t40 != -25) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1658 = 738637496903631282LL;
	static int8_t x1659 = 0;
	volatile uint32_t t41 = 127063U;

	t41 = (((x1657==x1658)<<x1659)-x1660);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1677 = 30U;
	uint32_t x1678 = 65U;
	static uint16_t x1679 = 8U;
	static int32_t x1680 = -7420450;
	volatile int32_t t42 = -4069535;

	t42 = (((x1677==x1678)<<x1679)-x1680);

	if (t42 != 7420450) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1685 = INT16_MIN;
	static int8_t x1686 = INT8_MIN;
	static uint16_t x1687 = 0U;
	volatile int64_t x1688 = -1LL;
	int64_t t43 = 649217261LL;

	t43 = (((x1685==x1686)<<x1687)-x1688);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1753 = INT32_MIN;
	volatile int8_t x1755 = 2;
	volatile int32_t t44 = 7099356;

	t44 = (((x1753==x1754)<<x1755)-x1756);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1789 = -1;
	uint8_t x1790 = 20U;
	uint8_t x1791 = 4U;
	int32_t t45 = 1928785;

	t45 = (((x1789==x1790)<<x1791)-x1792);

	if (t45 != -403491) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1839 = 4;
	uint64_t x1840 = 248884399005LLU;
	uint64_t t46 = 6048744684381673869LLU;

	t46 = (((x1837==x1838)<<x1839)-x1840);

	if (t46 != 18446743824825152611LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1850 = -1;
	int16_t x1852 = -1;
	int32_t t47 = 56878697;

	t47 = (((x1849==x1850)<<x1851)-x1852);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1865 = INT16_MIN;
	uint64_t x1866 = UINT64_MAX;
	int64_t x1867 = 1LL;
	volatile int32_t t48 = -2;

	t48 = (((x1865==x1866)<<x1867)-x1868);

	if (t48 != -13) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1893 = INT32_MIN;
	int16_t x1894 = INT16_MIN;
	uint8_t x1895 = 29U;
	volatile int8_t x1896 = 2;

	t49 = (((x1893==x1894)<<x1895)-x1896);

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x1929 = UINT32_MAX;
	volatile int16_t x1930 = INT16_MIN;
	static volatile uint32_t x1932 = UINT32_MAX;
	uint32_t t50 = 16U;

	t50 = (((x1929==x1930)<<x1931)-x1932);

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1937 = INT16_MIN;
	int64_t x1938 = 164964397LL;
	volatile uint8_t x1939 = 7U;

	t51 = (((x1937==x1938)<<x1939)-x1940);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1941 = -18180;
	int16_t x1942 = 28;
	static uint32_t x1944 = UINT32_MAX;
	uint32_t t52 = 1379633489U;

	t52 = (((x1941==x1942)<<x1943)-x1944);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1949 = UINT32_MAX;
	static uint64_t x1950 = 15797562976770257LLU;
	uint32_t x1952 = 16314U;
	volatile uint32_t t53 = 44U;

	t53 = (((x1949==x1950)<<x1951)-x1952);

	if (t53 != 4294950982U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x1953 = 2949191076383214453LLU;
	uint16_t x1954 = 7U;
	uint8_t x1955 = 22U;
	int8_t x1956 = INT8_MAX;
	volatile int32_t t54 = -3599160;

	t54 = (((x1953==x1954)<<x1955)-x1956);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2065 = INT16_MIN;
	static uint8_t x2066 = 5U;
	uint16_t x2067 = 19U;
	int16_t x2068 = 22;
	volatile int32_t t55 = -7845;

	t55 = (((x2065==x2066)<<x2067)-x2068);

	if (t55 != -22) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2105 = INT16_MAX;
	int16_t x2106 = INT16_MIN;
	static uint16_t x2107 = 13U;
	volatile int64_t t56 = 733LL;

	t56 = (((x2105==x2106)<<x2107)-x2108);

	if (t56 != 621385359088567LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2125 = 1167LLU;
	volatile int64_t x2126 = INT64_MIN;
	int8_t x2127 = 26;
	uint16_t x2128 = UINT16_MAX;
	static volatile int32_t t57 = -181;

	t57 = (((x2125==x2126)<<x2127)-x2128);

	if (t57 != -65535) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x2154 = INT16_MIN;
	static int32_t x2155 = 13;
	uint8_t x2156 = UINT8_MAX;
	static int32_t t58 = 63;

	t58 = (((x2153==x2154)<<x2155)-x2156);

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2169 = 77515;
	int64_t x2170 = -1LL;
	uint8_t x2171 = 15U;

	t59 = (((x2169==x2170)<<x2171)-x2172);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x2301 = -19972;
	static volatile int8_t x2302 = -1;
	volatile int8_t x2304 = INT8_MIN;
	volatile int32_t t60 = 2729;

	t60 = (((x2301==x2302)<<x2303)-x2304);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2313 = -14;
	volatile int8_t x2315 = 1;
	int32_t t61 = 90497;

	t61 = (((x2313==x2314)<<x2315)-x2316);

	if (t61 != -28) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2321 = 1;
	int64_t x2324 = -1LL;
	int64_t t62 = 2134713789096LL;

	t62 = (((x2321==x2322)<<x2323)-x2324);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2410 = 1;
	static uint8_t x2411 = 4U;
	volatile int8_t x2412 = INT8_MAX;
	int32_t t63 = -225;

	t63 = (((x2409==x2410)<<x2411)-x2412);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2417 = UINT16_MAX;
	volatile uint16_t x2418 = 1979U;
	uint16_t x2419 = 26U;
	uint32_t x2420 = 499422U;
	uint32_t t64 = 294U;

	t64 = (((x2417==x2418)<<x2419)-x2420);

	if (t64 != 4294467874U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2437 = 2;
	uint64_t x2438 = 225417LLU;
	static int8_t x2440 = -1;
	static int32_t t65 = 136;

	t65 = (((x2437==x2438)<<x2439)-x2440);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x2481 = 30823U;
	static int16_t x2482 = 1;
	uint16_t x2483 = 1U;
	int32_t x2484 = 47262658;
	int32_t t66 = 1025904822;

	t66 = (((x2481==x2482)<<x2483)-x2484);

	if (t66 != -47262658) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2505 = UINT32_MAX;
	int16_t x2506 = INT16_MAX;
	uint8_t x2507 = 1U;
	volatile uint32_t x2508 = UINT32_MAX;
	volatile uint32_t t67 = 1597980U;

	t67 = (((x2505==x2506)<<x2507)-x2508);

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2546 = -1;
	uint64_t x2547 = 4LLU;
	int16_t x2548 = INT16_MIN;
	static volatile int32_t t68 = -175539;

	t68 = (((x2545==x2546)<<x2547)-x2548);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2601 = INT8_MIN;
	int64_t x2602 = INT64_MAX;
	static uint8_t x2603 = 6U;
	uint32_t x2604 = UINT32_MAX;
	volatile uint32_t t69 = 1224U;

	t69 = (((x2601==x2602)<<x2603)-x2604);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2713 = 22U;
	uint16_t x2715 = 29U;

	t70 = (((x2713==x2714)<<x2715)-x2716);

	if (t70 != 4294951040U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2721 = 8;
	volatile int16_t x2722 = INT16_MIN;
	uint64_t x2724 = UINT64_MAX;
	static uint64_t t71 = 473845052251613LLU;

	t71 = (((x2721==x2722)<<x2723)-x2724);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2749 = 8780;
	uint32_t x2750 = 2115U;
	uint16_t x2751 = 5U;
	int64_t t72 = -30114887803344LL;

	t72 = (((x2749==x2750)<<x2751)-x2752);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2758 = INT64_MIN;
	int8_t x2759 = 0;
	volatile int32_t t73 = -244;

	t73 = (((x2757==x2758)<<x2759)-x2760);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2781 = 3041;
	int8_t x2783 = 0;
	static int32_t x2784 = -233090;

	t74 = (((x2781==x2782)<<x2783)-x2784);

	if (t74 != 233090) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2798 = INT32_MAX;
	uint8_t x2799 = 0U;
	uint64_t x2800 = 448310892964697172LLU;
	uint64_t t75 = 10983936098LLU;

	t75 = (((x2797==x2798)<<x2799)-x2800);

	if (t75 != 17998433180744854444LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x2861 = 77U;
	static int8_t x2862 = INT8_MIN;
	static int16_t x2863 = 1;
	int8_t x2864 = INT8_MIN;
	static int32_t t76 = 98;

	t76 = (((x2861==x2862)<<x2863)-x2864);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2885 = INT8_MAX;
	static uint64_t x2886 = 152LLU;
	volatile int8_t x2887 = 1;
	uint16_t x2888 = 419U;
	int32_t t77 = -68843;

	t77 = (((x2885==x2886)<<x2887)-x2888);

	if (t77 != -419) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2989 = -1;
	uint16_t x2990 = 58U;
	volatile int16_t x2991 = 1;
	uint64_t x2992 = 371LLU;
	static volatile uint64_t t78 = 38888003LLU;

	t78 = (((x2989==x2990)<<x2991)-x2992);

	if (t78 != 18446744073709551245LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2997 = 1448353;
	volatile int8_t x2998 = 0;
	int8_t x3000 = INT8_MIN;
	volatile int32_t t79 = 21823979;

	t79 = (((x2997==x2998)<<x2999)-x3000);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3053 = 55;
	int64_t x3056 = -6528LL;
	volatile int64_t t80 = -2394LL;

	t80 = (((x3053==x3054)<<x3055)-x3056);

	if (t80 != 6528LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3077 = -1;
	int8_t x3078 = -3;
	int32_t x3079 = 0;
	uint8_t x3080 = UINT8_MAX;
	volatile int32_t t81 = -2;

	t81 = (((x3077==x3078)<<x3079)-x3080);

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3097 = 9026U;
	int8_t x3098 = 1;
	volatile int32_t t82 = -187431878;

	t82 = (((x3097==x3098)<<x3099)-x3100);

	if (t82 != 128) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3122 = 3LL;
	volatile uint64_t x3124 = 1219968736906009LLU;

	t83 = (((x3121==x3122)<<x3123)-x3124);

	if (t83 != 18445524104972645607LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x3126 = INT32_MIN;
	uint16_t x3127 = 27U;
	uint16_t x3128 = UINT16_MAX;
	volatile int32_t t84 = 17;

	t84 = (((x3125==x3126)<<x3127)-x3128);

	if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x3141 = INT16_MAX;
	volatile int8_t x3142 = -61;
	volatile uint32_t x3143 = 17U;
	volatile uint32_t x3144 = 1613624U;
	volatile uint32_t t85 = 4744U;

	t85 = (((x3141==x3142)<<x3143)-x3144);

	if (t85 != 4293353672U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x3179 = 11U;
	int16_t x3180 = -1;
	int32_t t86 = 1;

	t86 = (((x3177==x3178)<<x3179)-x3180);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x3198 = INT32_MAX;
	uint8_t x3199 = 0U;
	int16_t x3200 = INT16_MIN;

	t87 = (((x3197==x3198)<<x3199)-x3200);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3218 = 45U;
	volatile int16_t x3219 = 27;
	int16_t x3220 = INT16_MAX;
	volatile int32_t t88 = 48212;

	t88 = (((x3217==x3218)<<x3219)-x3220);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3265 = INT16_MAX;
	static volatile int16_t x3266 = INT16_MAX;
	int32_t x3267 = 0;
	uint64_t x3268 = 3511446940181LLU;
	uint64_t t89 = 4611LLU;

	t89 = (((x3265==x3266)<<x3267)-x3268);

	if (t89 != 18446740562262611436LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3289 = 3;
	uint8_t x3291 = 6U;
	uint8_t x3292 = UINT8_MAX;
	int32_t t90 = 752469;

	t90 = (((x3289==x3290)<<x3291)-x3292);

	if (t90 != -255) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3301 = -1;
	volatile uint16_t x3303 = 4U;
	int32_t t91 = 0;

	t91 = (((x3301==x3302)<<x3303)-x3304);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x3343 = 5;

	t92 = (((x3341==x3342)<<x3343)-x3344);

	if (t92 != 18446740887890273275LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3345 = 0;
	int32_t x3346 = -3;
	uint16_t x3347 = 1U;

	t93 = (((x3345==x3346)<<x3347)-x3348);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x3397 = INT8_MIN;
	volatile int32_t x3398 = -1780603;
	int16_t x3399 = 2;
	uint16_t x3400 = 6U;
	int32_t t94 = -395;

	t94 = (((x3397==x3398)<<x3399)-x3400);

	if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3437 = 2U;
	static uint16_t x3438 = UINT16_MAX;
	volatile int32_t t95 = 2507600;

	t95 = (((x3437==x3438)<<x3439)-x3440);

	if (t95 != -1035) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3469 = 2;
	static uint8_t x3470 = 75U;
	volatile uint16_t x3471 = 0U;
	static uint32_t x3472 = UINT32_MAX;
	uint32_t t96 = 193038U;

	t96 = (((x3469==x3470)<<x3471)-x3472);

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x3481 = INT32_MIN;
	int64_t x3482 = INT64_MIN;
	int16_t x3483 = 0;
	static uint8_t x3484 = UINT8_MAX;

	t97 = (((x3481==x3482)<<x3483)-x3484);

	if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3493 = UINT8_MAX;
	uint8_t x3495 = 1U;
	int16_t x3496 = INT16_MIN;

	t98 = (((x3493==x3494)<<x3495)-x3496);

	if (t98 != 32770) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x3517 = INT64_MIN;
	static int16_t x3518 = -1;
	uint8_t x3519 = 4U;
	int16_t x3520 = 446;
	int32_t t99 = 1895;

	t99 = (((x3517==x3518)<<x3519)-x3520);

	if (t99 != -446) { NG(); } else { ; }
	
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

