#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
uint32_t x36 = 5U;
static int32_t t1 = -74654731;
static uint64_t x85 = 1811930LLU;
int32_t x126 = INT32_MAX;
static volatile int32_t x127 = INT32_MIN;
int64_t x213 = -36969319997410570LL;
int64_t x215 = 788704677LL;
int16_t x401 = 2;
int64_t x533 = -3879LL;
static volatile int8_t x535 = -1;
volatile int16_t x536 = 0;
uint32_t x630 = UINT32_MAX;
uint64_t t14 = 114LLU;
volatile uint64_t x707 = 3LLU;
uint8_t x732 = 2U;
volatile uint16_t x961 = UINT16_MAX;
int8_t x963 = INT8_MIN;
static uint64_t x994 = 2LLU;
static uint8_t x1024 = 8U;
static volatile int16_t x1045 = -1;
int64_t x1282 = -3LL;
int64_t x1347 = -14098512540386384LL;
int16_t x1348 = 3;
int8_t x1441 = INT8_MIN;
uint64_t t26 = 63529493050LLU;
int32_t t27 = -3930473;
static volatile int8_t x1613 = INT8_MIN;
int16_t x1614 = -336;
int64_t t30 = 16028LL;
static int64_t x1733 = INT64_MAX;
volatile uint64_t t33 = 4564558LLU;
static int16_t x1793 = INT16_MIN;
int16_t x1927 = -1;
uint8_t x2002 = UINT8_MAX;
uint64_t x2003 = UINT64_MAX;
volatile uint64_t t37 = 73360498017712LLU;
uint8_t x2032 = 1U;
volatile int32_t x2133 = INT32_MAX;
int32_t t41 = 370;
static int64_t x2321 = 165LL;
int32_t x2377 = 214;
static uint64_t x2379 = UINT64_MAX;
uint64_t x2437 = 250848357443LLU;
uint8_t x2595 = UINT8_MAX;
uint64_t t48 = 17619172672128905LLU;
static int8_t x2664 = 29;
int64_t x2719 = -237338653LL;
uint32_t x2720 = 3U;
int32_t x2741 = 21401;
static int32_t x2836 = 6;
volatile uint64_t x2945 = UINT64_MAX;
int16_t x2946 = INT16_MIN;
uint8_t x2948 = 26U;
static int8_t x2984 = 15;
uint32_t x3190 = 61736769U;
int64_t x3376 = 14LL;
uint8_t x3520 = 5U;
uint8_t x3540 = 40U;
int64_t x3571 = -34905980626848879LL;
static uint64_t t70 = 753790385694390236LLU;
int8_t x3582 = INT8_MIN;
volatile uint32_t x3614 = UINT32_MAX;
volatile uint64_t t73 = 9631438901908LLU;
static uint32_t x3789 = 1702153U;
int64_t t74 = 5971749576894LL;
int8_t x4132 = 4;
volatile int8_t x4133 = INT8_MAX;
int64_t x4151 = 2769217597145LL;
uint16_t x4341 = 4725U;
int16_t x4343 = INT16_MIN;
uint64_t x4418 = 25797LLU;
uint16_t x4420 = 3U;
int8_t x4592 = 1;
int16_t x4796 = 0;
int8_t x4810 = 0;
int16_t x4812 = 1;
volatile uint32_t t84 = 3793206U;
int64_t x4845 = -783363370LL;
volatile int16_t x4848 = 3;
int8_t x4948 = 0;
uint32_t x5145 = 28U;
uint16_t x5147 = UINT16_MAX;
int16_t x5344 = 1;
static uint16_t x5349 = 23U;
uint64_t x5351 = 79LLU;
uint32_t x5463 = 19126U;
int16_t x5516 = 1;
int32_t x5522 = -1;
static uint8_t x5524 = 0U;


void f0(void) {
	int8_t x5 = -1;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = 4;
	volatile int64_t t0 = 242631924LL;

	t0 = (((x5*x6)/x7)<<x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = -1;
	int32_t x35 = 1013630674;

	t1 = (((x33*x34)/x35)<<x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x86 = 6U;
	uint8_t x87 = 2U;
	uint16_t x88 = 7U;
	volatile uint64_t t2 = 397054110487LLU;

	t2 = (((x85*x86)/x87)<<x88);

	if (t2 != 695781120LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = 13U;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = 5;
	volatile int32_t t3 = -77244;

	t3 = (((x101*x102)/x103)<<x104);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x125 = 690394LLU;
	static uint8_t x128 = 62U;
	uint64_t t4 = 8680874060130379LLU;

	t4 = (((x125*x126)/x127)<<x128);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x129 = 117U;
	uint64_t x130 = 217128953715653LLU;
	int16_t x131 = -1;
	uint32_t x132 = 7U;
	volatile uint64_t t5 = 839LLU;

	t5 = (((x129*x130)/x131)<<x132);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x157 = 7244585LL;
	volatile int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	static int16_t x160 = 3;
	static volatile int64_t t6 = 146535993663661LL;

	t6 = (((x157*x158)/x159)<<x160);

	if (t6 != 452784LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x214 = 0;
	uint8_t x216 = 25U;
	static int64_t t7 = -33375916858LL;

	t7 = (((x213*x214)/x215)<<x216);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x301 = 22U;
	int32_t x302 = -1;
	int8_t x303 = -1;
	static uint16_t x304 = 1U;
	static uint32_t t8 = 5812830U;

	t8 = (((x301*x302)/x303)<<x304);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	static int32_t x315 = INT32_MIN;
	static volatile uint8_t x316 = 1U;
	volatile int32_t t9 = 1055646;

	t9 = (((x313*x314)/x315)<<x316);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x402 = INT8_MIN;
	int16_t x403 = -393;
	uint16_t x404 = 1U;
	static volatile int32_t t10 = 9;

	t10 = (((x401*x402)/x403)<<x404);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x465 = 53U;
	volatile int16_t x466 = INT16_MIN;
	uint32_t x467 = 6875243U;
	volatile int32_t x468 = 1;
	volatile uint32_t t11 = 306750U;

	t11 = (((x465*x466)/x467)<<x468);

	if (t11 != 1248U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x497 = INT16_MAX;
	volatile uint16_t x498 = UINT16_MAX;
	uint32_t x499 = 72039U;
	static volatile uint8_t x500 = 5U;
	uint32_t t12 = 24U;

	t12 = (((x497*x498)/x499)<<x500);

	if (t12 != 953856U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x534 = UINT16_MAX;
	volatile int64_t t13 = 110664500754586061LL;

	t13 = (((x533*x534)/x535)<<x536);

	if (t13 != 254210265LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x629 = 48U;
	uint64_t x631 = 694018565429491290LLU;
	uint16_t x632 = 18U;

	t14 = (((x629*x630)/x631)<<x632);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x637 = INT8_MAX;
	static int16_t x638 = INT16_MAX;
	static int32_t x639 = INT32_MAX;
	static int32_t x640 = 5;
	int32_t t15 = 145;

	t15 = (((x637*x638)/x639)<<x640);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x705 = 10U;
	volatile int16_t x706 = -1;
	volatile int32_t x708 = 61;
	uint64_t t16 = 57760585645LLU;

	t16 = (((x705*x706)/x707)<<x708);

	if (t16 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x729 = INT16_MAX;
	static int8_t x730 = INT8_MAX;
	int32_t x731 = INT32_MIN;
	int32_t t17 = -995;

	t17 = (((x729*x730)/x731)<<x732);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x962 = INT16_MIN;
	int16_t x964 = 1;
	volatile int32_t t18 = -1086779;

	t18 = (((x961*x962)/x963)<<x964);

	if (t18 != 33553920) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x993 = 26U;
	static uint32_t x995 = 6746091U;
	static int8_t x996 = 4;
	volatile uint64_t t19 = 10LLU;

	t19 = (((x993*x994)/x995)<<x996);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1021 = -545;
	static uint32_t x1022 = 0U;
	uint8_t x1023 = 1U;
	volatile uint32_t t20 = 14557U;

	t20 = (((x1021*x1022)/x1023)<<x1024);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1046 = UINT64_MAX;
	static volatile int16_t x1047 = -1;
	volatile uint8_t x1048 = 0U;
	volatile uint64_t t21 = 4LLU;

	t21 = (((x1045*x1046)/x1047)<<x1048);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1149 = 22U;
	uint16_t x1150 = 92U;
	int16_t x1151 = INT16_MIN;
	uint8_t x1152 = 1U;
	volatile int32_t t22 = 5700;

	t22 = (((x1149*x1150)/x1151)<<x1152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1281 = 422U;
	volatile uint32_t x1283 = 129882U;
	static uint16_t x1284 = 1U;
	int64_t t23 = -62LL;

	t23 = (((x1281*x1282)/x1283)<<x1284);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1345 = UINT8_MAX;
	int8_t x1346 = INT8_MAX;
	int64_t t24 = 939777LL;

	t24 = (((x1345*x1346)/x1347)<<x1348);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1442 = INT8_MAX;
	int32_t x1443 = INT32_MIN;
	uint8_t x1444 = 3U;
	int32_t t25 = 1;

	t25 = (((x1441*x1442)/x1443)<<x1444);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1453 = 564403LLU;
	volatile int64_t x1454 = INT64_MIN;
	int64_t x1455 = 981416939097793LL;
	int8_t x1456 = 62;

	t26 = (((x1453*x1454)/x1455)<<x1456);

	if (t26 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1481 = -1;
	volatile int16_t x1482 = 0;
	static int32_t x1483 = INT32_MIN;
	volatile int64_t x1484 = 20LL;

	t27 = (((x1481*x1482)/x1483)<<x1484);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1485 = 2U;
	uint32_t x1486 = 244690U;
	int16_t x1487 = -49;
	uint16_t x1488 = 25U;
	volatile uint32_t t28 = 150013U;

	t28 = (((x1485*x1486)/x1487)<<x1488);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1615 = 1884758759348526438LL;
	volatile int16_t x1616 = 10;
	int64_t t29 = 1209623542988296016LL;

	t29 = (((x1613*x1614)/x1615)<<x1616);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1645 = INT8_MIN;
	int64_t x1646 = -1LL;
	int64_t x1647 = -71619694890972LL;
	uint8_t x1648 = 13U;

	t30 = (((x1645*x1646)/x1647)<<x1648);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1701 = 264029390107LL;
	int16_t x1702 = 91;
	static int16_t x1703 = INT16_MAX;
	uint8_t x1704 = 20U;
	int64_t t31 = -42LL;

	t31 = (((x1701*x1702)/x1703)<<x1704);

	if (t31 != 768877047840768LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1734 = 4044LLU;
	int64_t x1735 = 8845451151874LL;
	static uint8_t x1736 = 12U;
	uint64_t t32 = 44LLU;

	t32 = (((x1733*x1734)/x1735)<<x1736);

	if (t32 != 8541999104LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1773 = 29736624076LLU;
	int16_t x1774 = -1;
	int16_t x1775 = INT16_MAX;
	uint16_t x1776 = 0U;

	t33 = (((x1773*x1774)/x1775)<<x1776);

	if (t33 != 562967132907282LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1794 = 1;
	uint64_t x1795 = 197LLU;
	int32_t x1796 = 7;
	uint64_t t34 = 57804192306697LLU;

	t34 = (((x1793*x1794)/x1795)<<x1796);

	if (t34 != 11985701733171666944LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1825 = INT32_MIN;
	volatile uint64_t x1826 = 7380904LLU;
	static volatile int32_t x1827 = -1;
	volatile uint32_t x1828 = 1U;
	uint64_t t35 = 1255357153435952361LLU;

	t35 = (((x1825*x1826)/x1827)<<x1828);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1925 = 220744577LL;
	int64_t x1926 = -236LL;
	static uint8_t x1928 = 3U;
	volatile int64_t t36 = -264347136012339484LL;

	t36 = (((x1925*x1926)/x1927)<<x1928);

	if (t36 != 416765761376LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2001 = 1;
	static uint16_t x2004 = 3U;

	t37 = (((x2001*x2002)/x2003)<<x2004);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2029 = 3;
	uint32_t x2030 = 15788U;
	static int8_t x2031 = INT8_MIN;
	uint32_t t38 = 5249560U;

	t38 = (((x2029*x2030)/x2031)<<x2032);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2134 = 0U;
	static int8_t x2135 = -1;
	int8_t x2136 = 0;
	static volatile int32_t t39 = -8211650;

	t39 = (((x2133*x2134)/x2135)<<x2136);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2149 = -1;
	int64_t x2150 = -1LL;
	int64_t x2151 = 39041426341LL;
	uint16_t x2152 = 2U;
	volatile int64_t t40 = 174220LL;

	t40 = (((x2149*x2150)/x2151)<<x2152);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x2217 = 1U;
	volatile uint16_t x2218 = 3399U;
	int8_t x2219 = INT8_MAX;
	static volatile int32_t x2220 = 1;

	t41 = (((x2217*x2218)/x2219)<<x2220);

	if (t41 != 52) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2225 = 28807U;
	int8_t x2226 = 0;
	int16_t x2227 = INT16_MAX;
	uint8_t x2228 = 1U;
	static volatile int32_t t42 = -59702674;

	t42 = (((x2225*x2226)/x2227)<<x2228);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2322 = INT32_MAX;
	int64_t x2323 = INT64_MIN;
	uint8_t x2324 = 0U;
	int64_t t43 = 105935636058241LL;

	t43 = (((x2321*x2322)/x2323)<<x2324);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2378 = 2U;
	int16_t x2380 = 3;
	uint64_t t44 = 224021117329609522LLU;

	t44 = (((x2377*x2378)/x2379)<<x2380);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2438 = 1562027;
	int16_t x2439 = INT16_MAX;
	uint8_t x2440 = 0U;
	volatile uint64_t t45 = 284108644876879LLU;

	t45 = (((x2437*x2438)/x2439)<<x2440);

	if (t45 != 11958125773846LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2441 = 159916519U;
	uint64_t x2442 = 32245140930249526LLU;
	int32_t x2443 = INT32_MAX;
	uint64_t x2444 = 16LLU;
	uint64_t t46 = 709619662697069LLU;

	t46 = (((x2441*x2442)/x2443)<<x2444);

	if (t46 != 50074507214848LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2537 = 29720222564LLU;
	int32_t x2538 = -1417880;
	int32_t x2539 = INT32_MAX;
	int8_t x2540 = 4;
	static uint64_t t47 = 3503446219033886893LLU;

	t47 = (((x2537*x2538)/x2539)<<x2540);

	if (t47 != 137124988224LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2593 = 2069202035LLU;
	volatile int8_t x2594 = INT8_MAX;
	uint32_t x2596 = 10U;

	t48 = (((x2593*x2594)/x2595)<<x2596);

	if (t48 != 1055276808192LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2661 = INT8_MIN;
	uint64_t x2662 = UINT64_MAX;
	volatile int64_t x2663 = INT64_MIN;
	volatile uint64_t t49 = 25570054505LLU;

	t49 = (((x2661*x2662)/x2663)<<x2664);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2665 = INT8_MIN;
	static int16_t x2666 = INT16_MIN;
	uint8_t x2667 = 5U;
	int16_t x2668 = 1;
	static int32_t t50 = -2430;

	t50 = (((x2665*x2666)/x2667)<<x2668);

	if (t50 != 1677720) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2717 = UINT32_MAX;
	int8_t x2718 = INT8_MIN;
	static int64_t t51 = 1LL;

	t51 = (((x2717*x2718)/x2719)<<x2720);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2742 = -1;
	static int32_t x2743 = -25;
	uint16_t x2744 = 2U;
	volatile int32_t t52 = 128;

	t52 = (((x2741*x2742)/x2743)<<x2744);

	if (t52 != 3424) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2797 = INT8_MAX;
	uint16_t x2798 = UINT16_MAX;
	int64_t x2799 = INT64_MIN;
	int16_t x2800 = 1;
	static volatile int64_t t53 = -58424LL;

	t53 = (((x2797*x2798)/x2799)<<x2800);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x2833 = 13U;
	int8_t x2834 = -1;
	static uint64_t x2835 = 2822LLU;
	static uint64_t t54 = 1895486136729LLU;

	t54 = (((x2833*x2834)/x2835)<<x2836);

	if (t54 != 418352806774419264LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2853 = 1;
	static uint8_t x2854 = UINT8_MAX;
	uint64_t x2855 = 5773LLU;
	int16_t x2856 = 0;
	static uint64_t t55 = 172165070288LLU;

	t55 = (((x2853*x2854)/x2855)<<x2856);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2889 = INT16_MAX;
	volatile uint16_t x2890 = UINT16_MAX;
	uint32_t x2891 = UINT32_MAX;
	uint16_t x2892 = 0U;
	volatile uint32_t t56 = 330005531U;

	t56 = (((x2889*x2890)/x2891)<<x2892);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2947 = -99984335876LL;
	volatile uint64_t t57 = 22351788453LLU;

	t57 = (((x2945*x2946)/x2947)<<x2948);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2973 = INT16_MAX;
	int16_t x2974 = INT16_MIN;
	volatile int64_t x2975 = INT64_MIN;
	static uint32_t x2976 = 20U;
	volatile int64_t t58 = 127663808677495LL;

	t58 = (((x2973*x2974)/x2975)<<x2976);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2981 = 34U;
	int16_t x2982 = 6;
	static uint32_t x2983 = UINT32_MAX;
	uint32_t t59 = 150042344U;

	t59 = (((x2981*x2982)/x2983)<<x2984);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3125 = -5;
	uint16_t x3126 = 2U;
	volatile uint32_t x3127 = UINT32_MAX;
	uint32_t x3128 = 2U;
	uint32_t t60 = 178U;

	t60 = (((x3125*x3126)/x3127)<<x3128);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3129 = 122LLU;
	uint64_t x3130 = 6824678345485354800LLU;
	int64_t x3131 = -486505373238341LL;
	uint16_t x3132 = 4U;
	volatile uint64_t t61 = 7618LLU;

	t61 = (((x3129*x3130)/x3131)<<x3132);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x3189 = UINT16_MAX;
	uint32_t x3191 = UINT32_MAX;
	int32_t x3192 = 15;
	uint32_t t62 = 38U;

	t62 = (((x3189*x3190)/x3191)<<x3192);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3245 = INT8_MIN;
	int8_t x3246 = -30;
	volatile int16_t x3247 = 3544;
	uint16_t x3248 = 0U;
	volatile int32_t t63 = 697813129;

	t63 = (((x3245*x3246)/x3247)<<x3248);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3373 = 9041109691017826781LLU;
	volatile uint16_t x3374 = 111U;
	uint32_t x3375 = 4663472U;
	volatile uint64_t t64 = 2936506448293LLU;

	t64 = (((x3373*x3374)/x3375)<<x3376);

	if (t64 != 26135142640517120LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3389 = INT8_MIN;
	volatile uint32_t x3390 = 1U;
	volatile uint64_t x3391 = 302223733225492LLU;
	uint16_t x3392 = 13U;
	uint64_t t65 = 8660358843200605576LLU;

	t65 = (((x3389*x3390)/x3391)<<x3392);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3449 = 1U;
	int32_t x3450 = INT32_MAX;
	int32_t x3451 = INT32_MAX;
	int8_t x3452 = 0;
	volatile int32_t t66 = 1068;

	t66 = (((x3449*x3450)/x3451)<<x3452);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3517 = INT32_MIN;
	static volatile uint16_t x3518 = 0U;
	int8_t x3519 = INT8_MAX;
	volatile int32_t t67 = 219;

	t67 = (((x3517*x3518)/x3519)<<x3520);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3537 = 43;
	volatile int64_t x3538 = -1LL;
	int64_t x3539 = -1LL;
	volatile int64_t t68 = 95LL;

	t68 = (((x3537*x3538)/x3539)<<x3540);

	if (t68 != 47278999994368LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3545 = 4824U;
	uint32_t x3546 = 3508879U;
	volatile uint8_t x3547 = UINT8_MAX;
	volatile int64_t x3548 = 5LL;
	uint32_t t69 = 453577636U;

	t69 = (((x3545*x3546)/x3547)<<x3548);

	if (t69 != 507222624U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3569 = UINT64_MAX;
	uint32_t x3570 = 220855U;
	volatile int16_t x3572 = 40;

	t70 = (((x3569*x3570)/x3571)<<x3572);

	if (t70 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3581 = 1672732962065LLU;
	static int8_t x3583 = -1;
	int8_t x3584 = 31;
	uint64_t t71 = 5367718108316LLU;

	t71 = (((x3581*x3582)/x3583)<<x3584);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3613 = 27;
	int64_t x3615 = INT64_MAX;
	int8_t x3616 = 0;
	int64_t t72 = -58594134251LL;

	t72 = (((x3613*x3614)/x3615)<<x3616);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3665 = 29U;
	uint64_t x3666 = 792510410109LLU;
	int64_t x3667 = 36558430588367LL;
	int16_t x3668 = 1;

	t73 = (((x3665*x3666)/x3667)<<x3668);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3790 = INT32_MIN;
	static int64_t x3791 = INT64_MIN;
	volatile uint8_t x3792 = 1U;

	t74 = (((x3789*x3790)/x3791)<<x3792);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4129 = UINT64_MAX;
	volatile int64_t x4130 = -247LL;
	int64_t x4131 = 123LL;
	volatile uint64_t t75 = 2216581348283212101LLU;

	t75 = (((x4129*x4130)/x4131)<<x4132);

	if (t75 != 32LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4134 = UINT8_MAX;
	int16_t x4135 = INT16_MIN;
	uint32_t x4136 = 16U;
	int32_t t76 = 3513;

	t76 = (((x4133*x4134)/x4135)<<x4136);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4149 = INT8_MIN;
	uint64_t x4150 = 48927493LLU;
	static uint32_t x4152 = 30U;
	static volatile uint64_t t77 = 26438159LLU;

	t77 = (((x4149*x4150)/x4151)<<x4152);

	if (t77 != 7152575468011520LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4342 = 1U;
	volatile int16_t x4344 = 1;
	volatile int32_t t78 = 26;

	t78 = (((x4341*x4342)/x4343)<<x4344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4353 = -8;
	int8_t x4354 = 0;
	static uint16_t x4355 = 16821U;
	uint8_t x4356 = 7U;
	int32_t t79 = 364228;

	t79 = (((x4353*x4354)/x4355)<<x4356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4413 = 86951133U;
	static uint64_t x4414 = UINT64_MAX;
	volatile int8_t x4415 = INT8_MIN;
	int32_t x4416 = 1;
	volatile uint64_t t80 = 953LLU;

	t80 = (((x4413*x4414)/x4415)<<x4416);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4417 = INT64_MIN;
	uint32_t x4419 = 10U;
	uint64_t t81 = 455LLU;

	t81 = (((x4417*x4418)/x4419)<<x4420);

	if (t81 != 7378697629483820640LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4589 = UINT32_MAX;
	volatile int32_t x4590 = INT32_MAX;
	int32_t x4591 = -72644589;
	volatile uint32_t t82 = 235U;

	t82 = (((x4589*x4590)/x4591)<<x4592);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4793 = UINT16_MAX;
	uint32_t x4794 = 568298U;
	static int16_t x4795 = INT16_MIN;
	volatile uint32_t t83 = 52598U;

	t83 = (((x4793*x4794)/x4795)<<x4796);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x4809 = UINT32_MAX;
	volatile uint8_t x4811 = 8U;

	t84 = (((x4809*x4810)/x4811)<<x4812);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4846 = -473909491LL;
	int32_t x4847 = 13;
	int64_t t85 = -3853921896300820LL;

	t85 = (((x4845*x4846)/x4847)<<x4848);

	if (t85 != 228457437504458256LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4945 = 2U;
	uint8_t x4946 = 0U;
	uint32_t x4947 = UINT32_MAX;
	volatile uint32_t t86 = 84036631U;

	t86 = (((x4945*x4946)/x4947)<<x4948);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4961 = 1;
	static int16_t x4962 = INT16_MIN;
	volatile uint32_t x4963 = 1059U;
	int8_t x4964 = 25;
	uint32_t t87 = 251534U;

	t87 = (((x4961*x4962)/x4963)<<x4964);

	if (t87 != 3321888768U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5049 = 3152;
	uint32_t x5050 = 30U;
	static volatile int32_t x5051 = INT32_MAX;
	int8_t x5052 = 2;
	uint32_t t88 = 810486064U;

	t88 = (((x5049*x5050)/x5051)<<x5052);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5146 = UINT64_MAX;
	int8_t x5148 = 0;
	volatile uint64_t t89 = 799928344907374LLU;

	t89 = (((x5145*x5146)/x5147)<<x5148);

	if (t89 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5341 = -5;
	static int32_t x5342 = -1;
	int64_t x5343 = -1216719739LL;
	volatile int64_t t90 = 97830LL;

	t90 = (((x5341*x5342)/x5343)<<x5344);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5350 = 1211U;
	static uint8_t x5352 = 63U;
	static volatile uint64_t t91 = 12LLU;

	t91 = (((x5349*x5350)/x5351)<<x5352);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5357 = -2;
	int8_t x5358 = -1;
	int32_t x5359 = INT32_MIN;
	uint8_t x5360 = 2U;
	int32_t t92 = 35505;

	t92 = (((x5357*x5358)/x5359)<<x5360);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x5385 = 121U;
	static volatile int32_t x5386 = 27679;
	volatile int64_t x5387 = INT64_MAX;
	uint32_t x5388 = 2U;
	int64_t t93 = 0LL;

	t93 = (((x5385*x5386)/x5387)<<x5388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5433 = 8;
	int64_t x5434 = 0LL;
	static int32_t x5435 = INT32_MIN;
	int8_t x5436 = 2;
	static int64_t t94 = 12056188102653LL;

	t94 = (((x5433*x5434)/x5435)<<x5436);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5449 = 1U;
	static int8_t x5450 = INT8_MIN;
	volatile uint64_t x5451 = 9060185LLU;
	static int8_t x5452 = 56;
	uint64_t t95 = 57435424949LLU;

	t95 = (((x5449*x5450)/x5451)<<x5452);

	if (t95 != 15708555500268290048LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5461 = UINT16_MAX;
	int8_t x5462 = -1;
	uint64_t x5464 = 15LLU;
	static volatile uint32_t t96 = 14U;

	t96 = (((x5461*x5462)/x5463)<<x5464);

	if (t96 != 3063349248U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5501 = 48U;
	int16_t x5502 = 0;
	volatile int8_t x5503 = 1;
	int8_t x5504 = 0;
	volatile int32_t t97 = -17;

	t97 = (((x5501*x5502)/x5503)<<x5504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5513 = INT8_MAX;
	int64_t x5514 = -1LL;
	static int16_t x5515 = INT16_MAX;
	static int64_t t98 = 24618LL;

	t98 = (((x5513*x5514)/x5515)<<x5516);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5521 = -15;
	int32_t x5523 = -1044295;
	int32_t t99 = -29837;

	t99 = (((x5521*x5522)/x5523)<<x5524);

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

