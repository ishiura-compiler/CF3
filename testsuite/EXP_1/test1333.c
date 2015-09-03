#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x37 = 56813519;
volatile uint16_t x38 = 70U;
int32_t x121 = -1;
static volatile uint32_t x124 = 5U;
int32_t t3 = -10140379;
volatile int16_t x394 = INT16_MIN;
static volatile uint64_t t7 = 34286928590690LLU;
static int8_t x589 = 11;
uint32_t x668 = 26U;
int32_t x670 = INT32_MIN;
static int8_t x672 = 7;
int64_t t12 = 104833604531LL;
int32_t t13 = 1;
int64_t x790 = -507LL;
uint8_t x863 = 6U;
volatile int8_t x864 = 2;
uint64_t x869 = 1202565702LLU;
uint8_t x872 = 2U;
int64_t t17 = -256430LL;
int8_t x894 = INT8_MIN;
volatile uint32_t x937 = 1196665435U;
volatile uint32_t x940 = 33U;
int64_t x1035 = 5368110760139LL;
static int16_t x1149 = -1;
uint32_t x1276 = 8U;
volatile uint16_t x1400 = 2U;
int8_t x1406 = INT8_MIN;
volatile uint8_t x1408 = 31U;
int32_t t32 = 1;
uint64_t x1499 = 165147124281LLU;
volatile uint8_t x1500 = 2U;
int8_t x1502 = INT8_MIN;
int64_t x1533 = INT64_MIN;
int32_t x1534 = 299458275;
int32_t t35 = 12467767;
int64_t x1577 = 345191281LL;
volatile int16_t x1654 = 14920;
static uint32_t x1692 = 6U;
int16_t x1709 = INT16_MIN;
volatile int8_t x1711 = INT8_MAX;
volatile uint8_t x1712 = 5U;
int16_t x1749 = INT16_MIN;
int16_t x1765 = INT16_MIN;
uint16_t x1848 = 0U;
uint8_t x1903 = 20U;
int8_t x1993 = INT8_MIN;
volatile int32_t x2066 = INT32_MAX;
int16_t x2086 = -1;
uint64_t t49 = 43LLU;
int8_t x2281 = 11;
int16_t x2310 = INT16_MIN;
volatile int32_t t53 = 41564;
static int16_t x2325 = INT16_MAX;
uint64_t x2326 = 719LLU;
uint64_t t55 = 4246513725LLU;
uint32_t x2381 = 2823U;
volatile int8_t x2625 = INT8_MIN;
uint16_t x2628 = 2U;
static volatile int32_t t59 = 92768666;
static volatile int32_t x2822 = 6;
int8_t x2978 = -1;
uint8_t x2979 = 67U;
int32_t t63 = 224843;
volatile uint32_t t66 = 193U;
int16_t x3304 = 2;
int8_t x3410 = INT8_MIN;
static volatile uint32_t x3423 = 6U;
uint16_t x3424 = 7U;
int16_t x3518 = -29;
int16_t x3593 = INT16_MAX;
static int8_t x3595 = INT8_MAX;
int64_t x3798 = -1LL;
volatile uint8_t x3799 = UINT8_MAX;
uint8_t x3800 = 21U;
int32_t x3838 = INT32_MAX;
int64_t x3839 = 1489832LL;
static uint64_t x3840 = 3LLU;
volatile int16_t x3891 = INT16_MAX;
uint8_t x3892 = 0U;
volatile int16_t x3954 = INT16_MAX;
int32_t t82 = -2;
int32_t x3981 = 5871;
volatile int64_t x3989 = 6LL;
int32_t t85 = 592559;
int64_t x4117 = -1LL;
uint64_t x4158 = 464591LLU;
uint8_t x4436 = 0U;
int32_t x4519 = INT32_MAX;
static volatile int16_t x4520 = 1;
int8_t x4575 = INT8_MAX;
static uint64_t x4645 = 436790772524LLU;
volatile uint32_t t93 = 93979808U;
uint16_t x4744 = 9U;
uint8_t x4800 = 0U;
volatile int32_t x4821 = 0;
volatile int32_t t96 = -7995191;
uint16_t x4872 = 1U;
int32_t t97 = 23131;
uint16_t x4893 = 178U;


void f0(void) {
	static uint16_t x39 = 0U;
	static volatile int8_t x40 = 6;
	int32_t t0 = -88901879;

	t0 = (((x37==x38)|x39)>>x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x61 = UINT64_MAX;
	int64_t x62 = -16895416LL;
	uint64_t x63 = UINT64_MAX;
	uint32_t x64 = 24U;
	uint64_t t1 = 2687LLU;

	t1 = (((x61==x62)|x63)>>x64);

	if (t1 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x73 = INT16_MIN;
	volatile int8_t x74 = -1;
	uint64_t x75 = 1364953275LLU;
	int16_t x76 = 0;
	static uint64_t t2 = 2105530710LLU;

	t2 = (((x73==x74)|x75)>>x76);

	if (t2 != 1364953275LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;

	t3 = (((x121==x122)|x123)>>x124);

	if (t3 != 2047) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x145 = 22;
	uint16_t x146 = 101U;
	uint16_t x147 = 5U;
	volatile uint8_t x148 = 31U;
	volatile int32_t t4 = -1498461;

	t4 = (((x145==x146)|x147)>>x148);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x305 = 1U;
	int32_t x306 = INT32_MIN;
	volatile uint32_t x307 = 102U;
	int8_t x308 = 6;
	volatile uint32_t t5 = 916U;

	t5 = (((x305==x306)|x307)>>x308);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x341 = -1;
	static int8_t x342 = -1;
	int16_t x343 = 0;
	uint64_t x344 = 6LLU;
	int32_t t6 = 1;

	t6 = (((x341==x342)|x343)>>x344);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x393 = INT32_MAX;
	static uint64_t x395 = 10059789752LLU;
	uint8_t x396 = 0U;

	t7 = (((x393==x394)|x395)>>x396);

	if (t7 != 10059789752LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x545 = UINT16_MAX;
	uint16_t x546 = 4103U;
	volatile uint16_t x547 = 6U;
	uint32_t x548 = 22U;
	int32_t t8 = 51908;

	t8 = (((x545==x546)|x547)>>x548);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x573 = INT32_MIN;
	static int32_t x574 = 333491030;
	int8_t x575 = 0;
	uint8_t x576 = 3U;
	volatile int32_t t9 = 258;

	t9 = (((x573==x574)|x575)>>x576);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x590 = 6;
	uint32_t x591 = 58U;
	static int8_t x592 = 26;
	volatile uint32_t t10 = 5U;

	t10 = (((x589==x590)|x591)>>x592);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	uint64_t x667 = 1674014494LLU;
	uint64_t t11 = 15947LLU;

	t11 = (((x665==x666)|x667)>>x668);

	if (t11 != 24LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x669 = INT64_MAX;
	int64_t x671 = 708LL;

	t12 = (((x669==x670)|x671)>>x672);

	if (t12 != 5LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x745 = -46;
	uint8_t x746 = 28U;
	uint16_t x747 = 4232U;
	uint8_t x748 = 0U;

	t13 = (((x745==x746)|x747)>>x748);

	if (t13 != 4232) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x789 = 41LLU;
	volatile uint64_t x791 = UINT64_MAX;
	int8_t x792 = 1;
	uint64_t t14 = 45LLU;

	t14 = (((x789==x790)|x791)>>x792);

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x821 = 189U;
	volatile uint16_t x822 = UINT16_MAX;
	uint8_t x823 = 1U;
	static uint8_t x824 = 1U;
	int32_t t15 = 0;

	t15 = (((x821==x822)|x823)>>x824);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x861 = -15;
	uint8_t x862 = 26U;
	volatile int32_t t16 = -36264801;

	t16 = (((x861==x862)|x863)>>x864);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x870 = 2U;
	int64_t x871 = 816372822661LL;

	t17 = (((x869==x870)|x871)>>x872);

	if (t17 != 204093205665LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x893 = 8LL;
	int64_t x895 = 516481458954292LL;
	static int8_t x896 = 2;
	volatile int64_t t18 = 793647809172483LL;

	t18 = (((x893==x894)|x895)>>x896);

	if (t18 != 129120364738573LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x921 = 1501376605LLU;
	int64_t x922 = 224485551LL;
	static volatile uint8_t x923 = 15U;
	int8_t x924 = 1;
	volatile int32_t t19 = -371;

	t19 = (((x921==x922)|x923)>>x924);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x933 = 824LLU;
	static int8_t x934 = INT8_MIN;
	uint32_t x935 = 12U;
	volatile int16_t x936 = 23;
	uint32_t t20 = 327183U;

	t20 = (((x933==x934)|x935)>>x936);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x938 = INT32_MIN;
	static uint64_t x939 = 2LLU;
	volatile uint64_t t21 = 372LLU;

	t21 = (((x937==x938)|x939)>>x940);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1033 = -1;
	uint16_t x1034 = 1U;
	uint8_t x1036 = 1U;
	int64_t t22 = 2364701080019LL;

	t22 = (((x1033==x1034)|x1035)>>x1036);

	if (t22 != 2684055380069LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1041 = -1;
	static int64_t x1042 = -1LL;
	uint16_t x1043 = 2U;
	uint8_t x1044 = 5U;
	volatile int32_t t23 = -56383662;

	t23 = (((x1041==x1042)|x1043)>>x1044);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1049 = 0;
	uint8_t x1050 = UINT8_MAX;
	uint16_t x1051 = UINT16_MAX;
	int8_t x1052 = 0;
	int32_t t24 = -132;

	t24 = (((x1049==x1050)|x1051)>>x1052);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1113 = 354;
	int16_t x1114 = -1;
	int64_t x1115 = INT64_MAX;
	volatile int8_t x1116 = 34;
	int64_t t25 = 1826609210989290LL;

	t25 = (((x1113==x1114)|x1115)>>x1116);

	if (t25 != 536870911LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1137 = INT16_MAX;
	uint16_t x1138 = 1U;
	uint16_t x1139 = 310U;
	uint64_t x1140 = 25LLU;
	volatile int32_t t26 = -492;

	t26 = (((x1137==x1138)|x1139)>>x1140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1150 = -1LL;
	int16_t x1151 = 1;
	int16_t x1152 = 13;
	volatile int32_t t27 = -150;

	t27 = (((x1149==x1150)|x1151)>>x1152);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1205 = UINT64_MAX;
	int16_t x1206 = INT16_MIN;
	volatile int16_t x1207 = 7;
	uint32_t x1208 = 1U;
	volatile int32_t t28 = -681481084;

	t28 = (((x1205==x1206)|x1207)>>x1208);

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1273 = 1U;
	static uint64_t x1274 = 242006782LLU;
	uint16_t x1275 = 201U;
	volatile int32_t t29 = -143957805;

	t29 = (((x1273==x1274)|x1275)>>x1276);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1333 = -13;
	uint16_t x1334 = 3050U;
	uint32_t x1335 = 6353U;
	volatile int64_t x1336 = 8LL;
	static volatile uint32_t t30 = 151U;

	t30 = (((x1333==x1334)|x1335)>>x1336);

	if (t30 != 24U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x1397 = INT16_MIN;
	uint16_t x1398 = 2U;
	uint32_t x1399 = UINT32_MAX;
	volatile uint32_t t31 = 38U;

	t31 = (((x1397==x1398)|x1399)>>x1400);

	if (t31 != 1073741823U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1405 = -2546063;
	static uint16_t x1407 = 1U;

	t32 = (((x1405==x1406)|x1407)>>x1408);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1497 = -929661;
	int8_t x1498 = -1;
	uint64_t t33 = 1625LLU;

	t33 = (((x1497==x1498)|x1499)>>x1500);

	if (t33 != 41286781070LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1501 = 75LL;
	static uint16_t x1503 = 0U;
	static uint32_t x1504 = 1U;
	volatile int32_t t34 = -3884254;

	t34 = (((x1501==x1502)|x1503)>>x1504);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1535 = 5;
	static int8_t x1536 = 13;

	t35 = (((x1533==x1534)|x1535)>>x1536);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1578 = 5;
	static volatile uint16_t x1579 = UINT16_MAX;
	static int32_t x1580 = 1;
	static volatile int32_t t36 = 1830;

	t36 = (((x1577==x1578)|x1579)>>x1580);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1653 = -9;
	volatile uint64_t x1655 = UINT64_MAX;
	static int32_t x1656 = 6;
	uint64_t t37 = 114128913566902LLU;

	t37 = (((x1653==x1654)|x1655)>>x1656);

	if (t37 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1689 = -1;
	volatile int8_t x1690 = INT8_MIN;
	static uint16_t x1691 = 108U;
	int32_t t38 = 0;

	t38 = (((x1689==x1690)|x1691)>>x1692);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1710 = -139949744LL;
	volatile int32_t t39 = 29;

	t39 = (((x1709==x1710)|x1711)>>x1712);

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1750 = -1;
	volatile uint64_t x1751 = 10521LLU;
	static int16_t x1752 = 1;
	uint64_t t40 = 1003536506LLU;

	t40 = (((x1749==x1750)|x1751)>>x1752);

	if (t40 != 5260LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1766 = 126444U;
	volatile uint16_t x1767 = UINT16_MAX;
	uint8_t x1768 = 13U;
	static volatile int32_t t41 = -68818864;

	t41 = (((x1765==x1766)|x1767)>>x1768);

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x1821 = -1LL;
	volatile int16_t x1822 = -1;
	uint8_t x1823 = UINT8_MAX;
	static uint64_t x1824 = 1LLU;
	volatile int32_t t42 = -477766;

	t42 = (((x1821==x1822)|x1823)>>x1824);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1845 = 125542292542LLU;
	int64_t x1846 = -1LL;
	uint16_t x1847 = UINT16_MAX;
	volatile int32_t t43 = -18895701;

	t43 = (((x1845==x1846)|x1847)>>x1848);

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1901 = INT8_MAX;
	int16_t x1902 = -1;
	static int16_t x1904 = 1;
	int32_t t44 = -90534162;

	t44 = (((x1901==x1902)|x1903)>>x1904);

	if (t44 != 10) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1953 = 4;
	volatile int8_t x1954 = 0;
	int16_t x1955 = 6;
	int32_t x1956 = 11;
	volatile int32_t t45 = 71079780;

	t45 = (((x1953==x1954)|x1955)>>x1956);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1994 = 28945U;
	volatile uint8_t x1995 = UINT8_MAX;
	volatile uint8_t x1996 = 4U;
	volatile int32_t t46 = 1;

	t46 = (((x1993==x1994)|x1995)>>x1996);

	if (t46 != 15) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2037 = 0;
	int8_t x2038 = INT8_MIN;
	uint32_t x2039 = 11095U;
	uint32_t x2040 = 7U;
	uint32_t t47 = 16885U;

	t47 = (((x2037==x2038)|x2039)>>x2040);

	if (t47 != 86U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2065 = INT8_MIN;
	uint32_t x2067 = UINT32_MAX;
	uint8_t x2068 = 2U;
	uint32_t t48 = 437686706U;

	t48 = (((x2065==x2066)|x2067)>>x2068);

	if (t48 != 1073741823U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2085 = INT16_MIN;
	uint64_t x2087 = 600LLU;
	static uint8_t x2088 = 1U;

	t49 = (((x2085==x2086)|x2087)>>x2088);

	if (t49 != 300LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2185 = INT64_MIN;
	static volatile int32_t x2186 = INT32_MAX;
	volatile uint64_t x2187 = 670904331273LLU;
	volatile int8_t x2188 = 0;
	uint64_t t50 = 28713248LLU;

	t50 = (((x2185==x2186)|x2187)>>x2188);

	if (t50 != 670904331273LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2221 = INT8_MIN;
	int32_t x2222 = INT32_MIN;
	int32_t x2223 = INT32_MAX;
	uint32_t x2224 = 26U;
	volatile int32_t t51 = 44744330;

	t51 = (((x2221==x2222)|x2223)>>x2224);

	if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2282 = UINT32_MAX;
	static uint64_t x2283 = UINT64_MAX;
	int8_t x2284 = 11;
	uint64_t t52 = 160245866535620LLU;

	t52 = (((x2281==x2282)|x2283)>>x2284);

	if (t52 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2309 = UINT32_MAX;
	int16_t x2311 = INT16_MAX;
	uint8_t x2312 = 27U;

	t53 = (((x2309==x2310)|x2311)>>x2312);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2327 = INT16_MAX;
	int16_t x2328 = 1;
	int32_t t54 = -14938215;

	t54 = (((x2325==x2326)|x2327)>>x2328);

	if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2361 = 0;
	static int32_t x2362 = INT32_MIN;
	volatile uint64_t x2363 = 5307778283470270LLU;
	int16_t x2364 = 0;

	t55 = (((x2361==x2362)|x2363)>>x2364);

	if (t55 != 5307778283470270LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2382 = INT32_MAX;
	int64_t x2383 = INT64_MAX;
	int8_t x2384 = 15;
	volatile int64_t t56 = 37058587224195LL;

	t56 = (((x2381==x2382)|x2383)>>x2384);

	if (t56 != 281474976710655LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2545 = INT16_MAX;
	volatile int8_t x2546 = INT8_MIN;
	static int16_t x2547 = 4;
	uint8_t x2548 = 6U;
	static volatile int32_t t57 = 155821;

	t57 = (((x2545==x2546)|x2547)>>x2548);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2565 = INT16_MIN;
	int8_t x2566 = INT8_MIN;
	uint32_t x2567 = UINT32_MAX;
	int8_t x2568 = 11;
	static uint32_t t58 = 31473970U;

	t58 = (((x2565==x2566)|x2567)>>x2568);

	if (t58 != 2097151U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2626 = 1;
	static uint8_t x2627 = 3U;

	t59 = (((x2625==x2626)|x2627)>>x2628);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2773 = INT16_MAX;
	uint16_t x2774 = 2130U;
	uint32_t x2775 = UINT32_MAX;
	uint16_t x2776 = 12U;
	uint32_t t60 = 14933U;

	t60 = (((x2773==x2774)|x2775)>>x2776);

	if (t60 != 1048575U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2793 = 51U;
	static int8_t x2794 = -3;
	int32_t x2795 = INT32_MAX;
	uint8_t x2796 = 24U;
	int32_t t61 = 9369;

	t61 = (((x2793==x2794)|x2795)>>x2796);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2821 = -1;
	volatile uint16_t x2823 = 71U;
	uint16_t x2824 = 0U;
	static volatile int32_t t62 = -51984;

	t62 = (((x2821==x2822)|x2823)>>x2824);

	if (t62 != 71) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x2977 = INT16_MAX;
	static int16_t x2980 = 0;

	t63 = (((x2977==x2978)|x2979)>>x2980);

	if (t63 != 67) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3093 = -30;
	int16_t x3094 = -553;
	static uint64_t x3095 = 11317295786095LLU;
	uint8_t x3096 = 6U;
	static uint64_t t64 = 114361LLU;

	t64 = (((x3093==x3094)|x3095)>>x3096);

	if (t64 != 176832746657LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3165 = UINT64_MAX;
	uint8_t x3166 = 7U;
	static uint16_t x3167 = UINT16_MAX;
	volatile uint8_t x3168 = 6U;
	int32_t t65 = -7;

	t65 = (((x3165==x3166)|x3167)>>x3168);

	if (t65 != 1023) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x3249 = INT32_MAX;
	int64_t x3250 = -150810908035113LL;
	uint32_t x3251 = UINT32_MAX;
	int8_t x3252 = 12;

	t66 = (((x3249==x3250)|x3251)>>x3252);

	if (t66 != 1048575U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3293 = 78652645627965LL;
	uint32_t x3294 = UINT32_MAX;
	uint32_t x3295 = 1409U;
	uint16_t x3296 = 1U;
	uint32_t t67 = 1761U;

	t67 = (((x3293==x3294)|x3295)>>x3296);

	if (t67 != 704U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x3301 = INT32_MAX;
	uint16_t x3302 = 4252U;
	volatile uint64_t x3303 = 4292065030793LLU;
	volatile uint64_t t68 = 104756139LLU;

	t68 = (((x3301==x3302)|x3303)>>x3304);

	if (t68 != 1073016257698LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3369 = INT32_MIN;
	static volatile int32_t x3370 = -1;
	volatile uint32_t x3371 = 79U;
	uint16_t x3372 = 1U;
	static volatile uint32_t t69 = 97262U;

	t69 = (((x3369==x3370)|x3371)>>x3372);

	if (t69 != 39U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3409 = INT32_MIN;
	static volatile int16_t x3411 = INT16_MAX;
	uint32_t x3412 = 28U;
	static int32_t t70 = 273;

	t70 = (((x3409==x3410)|x3411)>>x3412);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3421 = 43653LLU;
	int8_t x3422 = 13;
	uint32_t t71 = 264563U;

	t71 = (((x3421==x3422)|x3423)>>x3424);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3457 = -234;
	int8_t x3458 = INT8_MIN;
	uint16_t x3459 = 14U;
	int16_t x3460 = 0;
	volatile int32_t t72 = 9822;

	t72 = (((x3457==x3458)|x3459)>>x3460);

	if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3505 = INT8_MIN;
	int8_t x3506 = INT8_MIN;
	static uint8_t x3507 = 6U;
	static int8_t x3508 = 1;
	volatile int32_t t73 = 68;

	t73 = (((x3505==x3506)|x3507)>>x3508);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x3517 = INT64_MIN;
	int8_t x3519 = INT8_MAX;
	int8_t x3520 = 3;
	int32_t t74 = 3;

	t74 = (((x3517==x3518)|x3519)>>x3520);

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3594 = INT8_MAX;
	uint32_t x3596 = 14U;
	volatile int32_t t75 = 2;

	t75 = (((x3593==x3594)|x3595)>>x3596);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3621 = 8;
	int64_t x3622 = -15LL;
	uint16_t x3623 = 792U;
	uint64_t x3624 = 11LLU;
	volatile int32_t t76 = 11358;

	t76 = (((x3621==x3622)|x3623)>>x3624);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3733 = -1;
	int8_t x3734 = 1;
	uint16_t x3735 = 416U;
	uint32_t x3736 = 0U;
	int32_t t77 = -25537117;

	t77 = (((x3733==x3734)|x3735)>>x3736);

	if (t77 != 416) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3797 = INT64_MAX;
	volatile int32_t t78 = -758112619;

	t78 = (((x3797==x3798)|x3799)>>x3800);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3837 = 5;
	int64_t t79 = 1096LL;

	t79 = (((x3837==x3838)|x3839)>>x3840);

	if (t79 != 186229LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x3877 = 140U;
	int8_t x3878 = 9;
	volatile uint16_t x3879 = 0U;
	uint8_t x3880 = 1U;
	volatile int32_t t80 = -22;

	t80 = (((x3877==x3878)|x3879)>>x3880);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3889 = -1;
	int8_t x3890 = INT8_MIN;
	static volatile int32_t t81 = 6384525;

	t81 = (((x3889==x3890)|x3891)>>x3892);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x3953 = INT16_MIN;
	int16_t x3955 = INT16_MAX;
	volatile int8_t x3956 = 19;

	t82 = (((x3953==x3954)|x3955)>>x3956);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x3982 = -1;
	int8_t x3983 = INT8_MAX;
	uint16_t x3984 = 5U;
	volatile int32_t t83 = -8909;

	t83 = (((x3981==x3982)|x3983)>>x3984);

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x3990 = 5995;
	static uint8_t x3991 = 2U;
	volatile int32_t x3992 = 1;
	volatile int32_t t84 = 2852;

	t84 = (((x3989==x3990)|x3991)>>x3992);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3997 = INT8_MAX;
	uint64_t x3998 = 6701445000321069514LLU;
	uint16_t x3999 = 4U;
	volatile uint8_t x4000 = 2U;

	t85 = (((x3997==x3998)|x3999)>>x4000);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x4097 = -1;
	int64_t x4098 = INT64_MIN;
	uint64_t x4099 = UINT64_MAX;
	int8_t x4100 = 0;
	uint64_t t86 = UINT64_MAX;

	t86 = (((x4097==x4098)|x4099)>>x4100);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4118 = 13846;
	int8_t x4119 = 5;
	static int32_t x4120 = 11;
	int32_t t87 = -206670;

	t87 = (((x4117==x4118)|x4119)>>x4120);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4125 = 1728;
	int32_t x4126 = 3;
	uint8_t x4127 = 9U;
	uint8_t x4128 = 11U;
	static int32_t t88 = 25379;

	t88 = (((x4125==x4126)|x4127)>>x4128);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4157 = INT32_MIN;
	static uint64_t x4159 = UINT64_MAX;
	uint8_t x4160 = 59U;
	uint64_t t89 = 546429501684844298LLU;

	t89 = (((x4157==x4158)|x4159)>>x4160);

	if (t89 != 31LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x4433 = INT64_MAX;
	int8_t x4434 = INT8_MIN;
	uint32_t x4435 = 228U;
	uint32_t t90 = 5248U;

	t90 = (((x4433==x4434)|x4435)>>x4436);

	if (t90 != 228U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4517 = INT16_MIN;
	uint32_t x4518 = 104U;
	volatile int32_t t91 = -1313;

	t91 = (((x4517==x4518)|x4519)>>x4520);

	if (t91 != 1073741823) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4573 = 31;
	int64_t x4574 = INT64_MIN;
	uint8_t x4576 = 1U;
	volatile int32_t t92 = -487;

	t92 = (((x4573==x4574)|x4575)>>x4576);

	if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x4646 = INT64_MIN;
	uint32_t x4647 = 50479023U;
	volatile uint8_t x4648 = 2U;

	t93 = (((x4645==x4646)|x4647)>>x4648);

	if (t93 != 12619755U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x4741 = -1;
	uint32_t x4742 = 27U;
	uint8_t x4743 = UINT8_MAX;
	volatile int32_t t94 = 15001941;

	t94 = (((x4741==x4742)|x4743)>>x4744);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4797 = INT64_MIN;
	int8_t x4798 = -1;
	static int32_t x4799 = 137698765;
	int32_t t95 = -4;

	t95 = (((x4797==x4798)|x4799)>>x4800);

	if (t95 != 137698765) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4822 = 1;
	static uint8_t x4823 = 4U;
	uint8_t x4824 = 11U;

	t96 = (((x4821==x4822)|x4823)>>x4824);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4869 = 33;
	int16_t x4870 = INT16_MIN;
	static uint8_t x4871 = 21U;

	t97 = (((x4869==x4870)|x4871)>>x4872);

	if (t97 != 10) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x4889 = INT32_MAX;
	static uint64_t x4890 = UINT64_MAX;
	uint32_t x4891 = UINT32_MAX;
	volatile uint16_t x4892 = 7U;
	volatile uint32_t t98 = 802636U;

	t98 = (((x4889==x4890)|x4891)>>x4892);

	if (t98 != 33554431U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4894 = -1;
	int8_t x4895 = 3;
	int64_t x4896 = 3LL;
	int32_t t99 = 22169;

	t99 = (((x4893==x4894)|x4895)>>x4896);

	if (t99 != 0) { NG(); } else { ; }
	
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

