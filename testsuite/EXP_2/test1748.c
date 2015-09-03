#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x226 = INT16_MAX;
static uint64_t x371 = 8830LLU;
uint64_t x682 = 2410157LLU;
static uint16_t x699 = UINT16_MAX;
uint64_t x717 = 733419798223LLU;
static int8_t x718 = 62;
volatile uint64_t t13 = 41934705332473063LLU;
uint64_t t14 = 15LLU;
int8_t x743 = INT8_MIN;
int64_t x744 = 0LL;
int64_t x817 = 1627296356363LL;
uint8_t x940 = 6U;
volatile int64_t x1290 = INT64_MAX;
uint32_t x1292 = 25U;
volatile int64_t t21 = 97LL;
static int16_t x1463 = -1;
volatile int32_t x1557 = 78065;
volatile uint32_t t26 = 124469U;
int16_t x1603 = INT16_MIN;
int16_t x1632 = 1;
static uint32_t t29 = 1710476U;
volatile int32_t x1722 = INT32_MIN;
volatile int32_t t31 = -3627;
int16_t x1850 = 1821;
uint16_t x1900 = 23U;
uint8_t x1912 = 9U;
static int32_t x2218 = -1;
volatile uint8_t x2220 = 0U;
uint32_t x2307 = 27529U;
int8_t x2560 = 0;
uint64_t x2615 = UINT64_MAX;
uint32_t x2616 = 0U;
static uint32_t x2696 = 31U;
volatile uint32_t t44 = 98535U;
static int8_t x2732 = 1;
int8_t x2802 = INT8_MIN;
volatile int64_t x2803 = INT64_MIN;
uint32_t x2804 = 8U;
int64_t t46 = 7539LL;
int8_t x2846 = INT8_MIN;
uint8_t x2965 = UINT8_MAX;
uint8_t x2968 = 13U;
uint16_t x2972 = 2U;
static uint32_t t51 = 29U;
int16_t x3258 = INT16_MIN;
uint8_t x3260 = 11U;
uint64_t t53 = 7125016982519074LLU;
int16_t x3283 = 1;
int64_t t55 = -4LL;
uint16_t x3325 = 1U;
volatile int64_t t57 = -32887754716260LL;
int64_t x3334 = -1LL;
volatile int64_t t58 = 76065879885900LL;
int64_t x3442 = -1LL;
static volatile uint64_t t63 = 4416528760LLU;
uint16_t x3470 = UINT16_MAX;
static int8_t x3472 = 8;
static uint8_t x3476 = 0U;
uint8_t x3548 = 16U;
int64_t x3562 = 404614LL;
static int32_t x3665 = 2978;
int16_t x3666 = INT16_MIN;
uint16_t x3713 = UINT16_MAX;
int32_t x3715 = -1;
volatile int32_t t70 = 107154965;
int64_t x3813 = INT64_MIN;
uint64_t x3815 = UINT64_MAX;
volatile uint8_t x4121 = 7U;
uint8_t x4189 = 92U;
static int32_t x4247 = -9988;
uint8_t x4248 = 5U;
int64_t x4342 = -1LL;
int8_t x4344 = 0;
int16_t x4364 = 1;
static volatile int32_t t83 = 60;
volatile int64_t t84 = -4LL;
uint16_t x4820 = 0U;
uint16_t x4832 = 5U;
uint16_t x4941 = 2743U;
int64_t x4943 = INT64_MAX;
int16_t x5135 = INT16_MIN;
int8_t x5192 = 1;
volatile int32_t t91 = -1296;
int16_t x5308 = 0;
uint16_t x5309 = 1768U;
uint8_t x5312 = 8U;
uint16_t x5333 = UINT16_MAX;
static volatile uint16_t x5413 = UINT16_MAX;
int64_t x5503 = -1LL;
int64_t t96 = -307827877LL;
uint32_t t98 = 61U;
int8_t x5723 = 1;


void f0(void) {
	uint16_t x53 = 88U;
	int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int8_t x56 = 0;
	static int32_t t0 = -5608;

	t0 = ((x53%(x54&x55))<<x56);

	if (t0 != 88) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x209 = 2976431180998994LLU;
	int32_t x210 = 2668;
	uint32_t x211 = UINT32_MAX;
	static uint16_t x212 = 5U;
	volatile uint64_t t1 = 168861828LLU;

	t1 = ((x209%(x210&x211))<<x212);

	if (t1 != 13504LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x227 = -648029147LL;
	static volatile int8_t x228 = 0;
	volatile uint64_t t2 = 130798507438553LLU;

	t2 = ((x225%(x226&x227))<<x228);

	if (t2 != 14640LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x333 = 1;
	static volatile uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	static volatile uint8_t x336 = 8U;
	volatile uint32_t t3 = 122998U;

	t3 = ((x333%(x334&x335))<<x336);

	if (t3 != 256U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x369 = 2U;
	static int64_t x370 = -504LL;
	int8_t x372 = 4;
	uint64_t t4 = 275621286LLU;

	t4 = ((x369%(x370&x371))<<x372);

	if (t4 != 32LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x393 = 11;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MAX;
	volatile int16_t x396 = 41;
	volatile int64_t t5 = -18LL;

	t5 = ((x393%(x394&x395))<<x396);

	if (t5 != 24189255811072LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x417 = UINT16_MAX;
	volatile uint64_t x418 = UINT64_MAX;
	int16_t x419 = -1;
	int64_t x420 = 1LL;
	uint64_t t6 = 86223LLU;

	t6 = ((x417%(x418&x419))<<x420);

	if (t6 != 131070LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x433 = INT8_MAX;
	int32_t x434 = -3707;
	static volatile int64_t x435 = INT64_MIN;
	uint8_t x436 = 2U;
	volatile int64_t t7 = -720637637LL;

	t7 = ((x433%(x434&x435))<<x436);

	if (t7 != 508LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x461 = -9;
	volatile int16_t x462 = -7763;
	uint32_t x463 = 427U;
	static volatile int8_t x464 = 3;
	uint32_t t8 = 404714U;

	t8 = ((x461%(x462&x463))<<x464);

	if (t8 != 1296U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x565 = UINT8_MAX;
	static int64_t x566 = INT64_MIN;
	static volatile int64_t x567 = INT64_MIN;
	uint16_t x568 = 2U;
	int64_t t9 = 7505LL;

	t9 = ((x565%(x566&x567))<<x568);

	if (t9 != 1020LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x681 = -1;
	int16_t x683 = INT16_MIN;
	int32_t x684 = 18;
	volatile uint64_t t10 = 183726258062301935LLU;

	t10 = ((x681%(x682&x683))<<x684);

	if (t10 != 137438691328LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x697 = INT16_MAX;
	int64_t x698 = -3624057LL;
	volatile int8_t x700 = 1;
	volatile int64_t t11 = -34163038LL;

	t11 = ((x697%(x698&x699))<<x700);

	if (t11 != 65534LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x701 = UINT64_MAX;
	volatile int32_t x702 = -15635;
	uint32_t x703 = 3826U;
	uint8_t x704 = 0U;
	uint64_t t12 = 163922LLU;

	t12 = ((x701%(x702&x703))<<x704);

	if (t12 != 511LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x719 = UINT16_MAX;
	int32_t x720 = 31;

	t13 = ((x717%(x718&x719))<<x720);

	if (t13 != 32212254720LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x729 = 22876819LLU;
	static uint8_t x730 = 97U;
	int8_t x731 = -1;
	int16_t x732 = 3;

	t14 = ((x729%(x730&x731))<<x732);

	if (t14 != 384LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x741 = INT64_MAX;
	static int64_t x742 = INT64_MIN;
	static volatile int64_t t15 = INT64_MAX;

	t15 = ((x741%(x742&x743))<<x744);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x818 = 2607485LLU;
	volatile uint32_t x819 = 1909343U;
	static volatile uint64_t x820 = 1LLU;
	static uint64_t t16 = 27505765166756LLU;

	t16 = ((x817%(x818&x819))<<x820);

	if (t16 != 208796LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x905 = INT16_MAX;
	volatile int32_t x906 = -1;
	int16_t x907 = -204;
	int32_t x908 = 19;
	volatile int32_t t17 = 373709577;

	t17 = ((x905%(x906&x907))<<x908);

	if (t17 != 66584576) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x921 = INT8_MIN;
	int64_t x922 = -1LL;
	uint64_t x923 = 474285529908320089LLU;
	int64_t x924 = 1LL;
	static uint64_t t18 = 78638LLU;

	t18 = ((x921%(x922&x923))<<x924);

	if (t18 != 847787874386776212LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x937 = -47592712;
	static int32_t x938 = INT32_MIN;
	volatile uint64_t x939 = UINT64_MAX;
	volatile uint64_t t19 = 13883LLU;

	t19 = ((x937%(x938&x939))<<x940);

	if (t19 != 134393019904LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1289 = 22U;
	static int32_t x1291 = -929;
	int64_t t20 = -878760677756LL;

	t20 = ((x1289%(x1290&x1291))<<x1292);

	if (t20 != 738197504LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1313 = INT64_MAX;
	int16_t x1314 = -50;
	static int64_t x1315 = -1LL;
	int32_t x1316 = 1;

	t21 = ((x1313%(x1314&x1315))<<x1316);

	if (t21 != 14LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x1429 = -28112672LL;
	static uint64_t x1430 = UINT64_MAX;
	static int64_t x1431 = 263220098317LL;
	uint8_t x1432 = 1U;
	volatile uint64_t t22 = 1316205357564380LLU;

	t22 = ((x1429%(x1430&x1431))<<x1432);

	if (t22 != 87763332580LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1449 = 10U;
	int32_t x1450 = -17;
	uint8_t x1451 = UINT8_MAX;
	uint8_t x1452 = 2U;
	static volatile int32_t t23 = -3348715;

	t23 = ((x1449%(x1450&x1451))<<x1452);

	if (t23 != 40) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1461 = INT64_MAX;
	volatile int16_t x1462 = INT16_MIN;
	volatile uint8_t x1464 = 2U;
	volatile int64_t t24 = 5183865990676LL;

	t24 = ((x1461%(x1462&x1463))<<x1464);

	if (t24 != 131068LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1517 = 772930710LLU;
	int16_t x1518 = INT16_MIN;
	int16_t x1519 = -1;
	int8_t x1520 = 20;
	uint64_t t25 = 5755067975950382215LLU;

	t25 = ((x1517%(x1518&x1519))<<x1520);

	if (t25 != 810476592168960LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1558 = 11U;
	int8_t x1559 = 5;
	int8_t x1560 = 13;

	t26 = ((x1557%(x1558&x1559))<<x1560);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1601 = INT32_MIN;
	static int16_t x1602 = INT16_MIN;
	volatile uint16_t x1604 = 11U;
	static volatile int32_t t27 = 1524;

	t27 = ((x1601%(x1602&x1603))<<x1604);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1605 = 31402878123060LL;
	static uint16_t x1606 = 444U;
	int32_t x1607 = 21;
	static volatile int8_t x1608 = 1;
	volatile int64_t t28 = 42LL;

	t28 = ((x1605%(x1606&x1607))<<x1608);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1629 = -1;
	uint32_t x1630 = UINT32_MAX;
	uint32_t x1631 = 464143779U;

	t29 = ((x1629%(x1630&x1631))<<x1632);

	if (t29 != 235346568U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1721 = 2U;
	static int64_t x1723 = INT64_MAX;
	volatile uint8_t x1724 = 0U;
	int64_t t30 = -121040355702740715LL;

	t30 = ((x1721%(x1722&x1723))<<x1724);

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1817 = UINT8_MAX;
	int8_t x1818 = INT8_MIN;
	static int32_t x1819 = -1;
	int16_t x1820 = 1;

	t31 = ((x1817%(x1818&x1819))<<x1820);

	if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1849 = 100404U;
	uint64_t x1851 = 38586188138680LLU;
	int8_t x1852 = 28;
	static volatile uint64_t t32 = 163193288915343LLU;

	t32 = ((x1849%(x1850&x1851))<<x1852);

	if (t32 != 3221225472LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1881 = 58U;
	volatile int64_t x1882 = -1LL;
	int32_t x1883 = INT32_MAX;
	static int8_t x1884 = 0;
	volatile int64_t t33 = -847150LL;

	t33 = ((x1881%(x1882&x1883))<<x1884);

	if (t33 != 58LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1897 = 43497197061LL;
	static volatile int8_t x1898 = 34;
	uint8_t x1899 = 36U;
	int64_t t34 = -52522527LL;

	t34 = ((x1897%(x1898&x1899))<<x1900);

	if (t34 != 41943040LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1909 = 9;
	uint32_t x1910 = 70829U;
	static int16_t x1911 = -30;
	static volatile uint32_t t35 = 647943U;

	t35 = ((x1909%(x1910&x1911))<<x1912);

	if (t35 != 4608U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2005 = -3169472567457447LL;
	uint64_t x2006 = UINT64_MAX;
	int16_t x2007 = INT16_MIN;
	int8_t x2008 = 16;
	volatile uint64_t t36 = 6188LLU;

	t36 = ((x2005%(x2006&x2007))<<x2008);

	if (t36 != 13646374703623372800LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2089 = 3LLU;
	static int8_t x2090 = INT8_MIN;
	int64_t x2091 = INT64_MIN;
	uint16_t x2092 = 25U;
	uint64_t t37 = 9508LLU;

	t37 = ((x2089%(x2090&x2091))<<x2092);

	if (t37 != 100663296LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2105 = -767648LL;
	uint64_t x2106 = 1721LLU;
	uint64_t x2107 = 62LLU;
	uint8_t x2108 = 7U;
	uint64_t t38 = 3078640224823098LLU;

	t38 = ((x2105%(x2106&x2107))<<x2108);

	if (t38 != 2048LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2217 = INT32_MIN;
	static uint64_t x2219 = 35646098611923719LLU;
	static uint64_t t39 = 3636611047114639773LLU;

	t39 = ((x2217%(x2218&x2219))<<x2220);

	if (t39 != 17711089197505245LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2305 = UINT64_MAX;
	volatile int8_t x2306 = INT8_MIN;
	volatile int16_t x2308 = 1;
	volatile uint64_t t40 = 578539239LLU;

	t40 = ((x2305%(x2306&x2307))<<x2308);

	if (t40 != 510LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2469 = UINT64_MAX;
	uint16_t x2470 = UINT16_MAX;
	int8_t x2471 = INT8_MIN;
	int8_t x2472 = 1;
	volatile uint64_t t41 = 28984437277LLU;

	t41 = ((x2469%(x2470&x2471))<<x2472);

	if (t41 != 2046LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2557 = INT16_MAX;
	static int16_t x2558 = 62;
	uint32_t x2559 = UINT32_MAX;
	volatile uint32_t t42 = 121739U;

	t42 = ((x2557%(x2558&x2559))<<x2560);

	if (t42 != 31U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2613 = 62U;
	int16_t x2614 = -1;
	volatile uint64_t t43 = 35LLU;

	t43 = ((x2613%(x2614&x2615))<<x2616);

	if (t43 != 62LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2693 = INT16_MIN;
	static uint8_t x2694 = 2U;
	uint32_t x2695 = UINT32_MAX;

	t44 = ((x2693%(x2694&x2695))<<x2696);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2729 = -4;
	volatile int8_t x2730 = -1;
	static int16_t x2731 = -1;
	static int32_t t45 = 10911028;

	t45 = ((x2729%(x2730&x2731))<<x2732);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2801 = 6;

	t46 = ((x2801%(x2802&x2803))<<x2804);

	if (t46 != 1536LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2845 = UINT32_MAX;
	int64_t x2847 = INT64_MIN;
	int8_t x2848 = 0;
	int64_t t47 = 197112419198104LL;

	t47 = ((x2845%(x2846&x2847))<<x2848);

	if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x2869 = INT32_MAX;
	int8_t x2870 = INT8_MIN;
	volatile int32_t x2871 = INT32_MIN;
	uint32_t x2872 = 0U;
	volatile int32_t t48 = INT32_MAX;

	t48 = ((x2869%(x2870&x2871))<<x2872);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2966 = 1787U;
	static volatile int8_t x2967 = INT8_MIN;
	volatile int32_t t49 = 461878;

	t49 = ((x2965%(x2966&x2967))<<x2968);

	if (t49 != 2088960) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2969 = 42U;
	int64_t x2970 = INT64_MIN;
	int8_t x2971 = INT8_MIN;
	volatile int64_t t50 = 2130881680115469260LL;

	t50 = ((x2969%(x2970&x2971))<<x2972);

	if (t50 != 168LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3069 = UINT32_MAX;
	int8_t x3070 = -1;
	uint16_t x3071 = 25951U;
	static int8_t x3072 = 2;

	t51 = ((x3069%(x3070&x3071))<<x3072);

	if (t51 != 99572U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3205 = 265;
	int8_t x3206 = 17;
	uint64_t x3207 = 1714781970719LLU;
	static uint8_t x3208 = 7U;
	volatile uint64_t t52 = 31325LLU;

	t52 = ((x3205%(x3206&x3207))<<x3208);

	if (t52 != 1280LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3257 = INT16_MIN;
	volatile uint64_t x3259 = 1542924979LLU;

	t53 = ((x3257%(x3258&x3259))<<x3260);

	if (t53 != 225150238720LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3281 = -8;
	int8_t x3282 = 1;
	uint16_t x3284 = 0U;
	static volatile int32_t t54 = -1;

	t54 = ((x3281%(x3282&x3283))<<x3284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x3301 = INT64_MIN;
	static volatile int64_t x3302 = INT64_MIN;
	int32_t x3303 = INT32_MIN;
	uint32_t x3304 = 0U;

	t55 = ((x3301%(x3302&x3303))<<x3304);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3321 = INT64_MIN;
	int8_t x3322 = INT8_MIN;
	volatile int8_t x3323 = -1;
	uint32_t x3324 = 27U;
	volatile int64_t t56 = -920904164242LL;

	t56 = ((x3321%(x3322&x3323))<<x3324);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3326 = INT32_MAX;
	int64_t x3327 = -35837594910LL;
	volatile uint32_t x3328 = 4U;

	t57 = ((x3325%(x3326&x3327))<<x3328);

	if (t57 != 16LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3333 = 1;
	int32_t x3335 = INT32_MAX;
	uint16_t x3336 = 49U;

	t58 = ((x3333%(x3334&x3335))<<x3336);

	if (t58 != 562949953421312LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3345 = 91516U;
	int8_t x3346 = -1;
	int8_t x3347 = -1;
	uint8_t x3348 = 0U;
	uint32_t t59 = 184U;

	t59 = ((x3345%(x3346&x3347))<<x3348);

	if (t59 != 91516U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3349 = 338686226804343LLU;
	int64_t x3350 = INT64_MAX;
	int16_t x3351 = INT16_MIN;
	uint8_t x3352 = 0U;
	uint64_t t60 = 1178526891421542LLU;

	t60 = ((x3349%(x3350&x3351))<<x3352);

	if (t60 != 338686226804343LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3369 = INT64_MAX;
	static volatile int16_t x3370 = INT16_MIN;
	int32_t x3371 = INT32_MIN;
	uint32_t x3372 = 6U;
	int64_t t61 = -9636867LL;

	t61 = ((x3369%(x3370&x3371))<<x3372);

	if (t61 != 137438953408LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3441 = -1;
	uint64_t x3443 = 4922424221LLU;
	static uint8_t x3444 = 1U;
	volatile uint64_t t62 = 6LLU;

	t62 = ((x3441%(x3442&x3443))<<x3444);

	if (t62 != 8231021686LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3453 = INT8_MAX;
	uint64_t x3454 = 98777116895339LLU;
	volatile int8_t x3455 = -1;
	uint8_t x3456 = 1U;

	t63 = ((x3453%(x3454&x3455))<<x3456);

	if (t63 != 254LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3469 = 43U;
	uint64_t x3471 = 7055181LLU;
	volatile uint64_t t64 = 4794887824980053233LLU;

	t64 = ((x3469%(x3470&x3471))<<x3472);

	if (t64 != 11008LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3473 = INT8_MIN;
	int16_t x3474 = INT16_MAX;
	uint64_t x3475 = UINT64_MAX;
	volatile uint64_t t65 = 1543376009LLU;

	t65 = ((x3473%(x3474&x3475))<<x3476);

	if (t65 != 32655LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x3525 = 22608095320LL;
	int8_t x3526 = INT8_MIN;
	int8_t x3527 = -1;
	uint32_t x3528 = 0U;
	static volatile int64_t t66 = -14492103771180062LL;

	t66 = ((x3525%(x3526&x3527))<<x3528);

	if (t66 != 88LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3545 = INT8_MIN;
	int16_t x3546 = 1;
	volatile int32_t x3547 = INT32_MAX;
	volatile int32_t t67 = 1;

	t67 = ((x3545%(x3546&x3547))<<x3548);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3561 = 1406;
	int8_t x3563 = -29;
	uint64_t x3564 = 7LLU;
	static volatile int64_t t68 = -16715944695879LL;

	t68 = ((x3561%(x3562&x3563))<<x3564);

	if (t68 != 179968LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3667 = -1LL;
	static int8_t x3668 = 1;
	volatile int64_t t69 = -1LL;

	t69 = ((x3665%(x3666&x3667))<<x3668);

	if (t69 != 5956LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3714 = 8U;
	uint8_t x3716 = 1U;

	t70 = ((x3713%(x3714&x3715))<<x3716);

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3801 = INT32_MAX;
	int32_t x3802 = INT32_MAX;
	uint8_t x3803 = UINT8_MAX;
	int16_t x3804 = 14;
	volatile int32_t t71 = -9853;

	t71 = ((x3801%(x3802&x3803))<<x3804);

	if (t71 != 2080768) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3805 = 270203377U;
	static volatile uint16_t x3806 = 6U;
	int32_t x3807 = -471182;
	int8_t x3808 = 0;
	static volatile uint32_t t72 = 50412U;

	t72 = ((x3805%(x3806&x3807))<<x3808);

	if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3814 = INT8_MIN;
	int64_t x3816 = 1LL;
	volatile uint64_t t73 = 54839732681LLU;

	t73 = ((x3813%(x3814&x3815))<<x3816);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4122 = INT32_MAX;
	int32_t x4123 = 203;
	static volatile uint16_t x4124 = 0U;
	int32_t t74 = -35669073;

	t74 = ((x4121%(x4122&x4123))<<x4124);

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4190 = -55723015LL;
	int16_t x4191 = INT16_MIN;
	int16_t x4192 = 3;
	int64_t t75 = -15972LL;

	t75 = ((x4189%(x4190&x4191))<<x4192);

	if (t75 != 736LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4245 = 11968501103246262LLU;
	static int8_t x4246 = INT8_MIN;
	uint64_t t76 = 2762353614970015LLU;

	t76 = ((x4245%(x4246&x4247))<<x4248);

	if (t76 != 382992035303880384LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4261 = 36176911123846794LLU;
	volatile uint32_t x4262 = 158766476U;
	volatile uint8_t x4263 = 14U;
	uint8_t x4264 = 1U;
	uint64_t t77 = 35670029429528200LLU;

	t77 = ((x4261%(x4262&x4263))<<x4264);

	if (t77 != 12LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4313 = 1U;
	static uint8_t x4314 = UINT8_MAX;
	int16_t x4315 = -36;
	static volatile uint32_t x4316 = 0U;
	volatile int32_t t78 = -11818;

	t78 = ((x4313%(x4314&x4315))<<x4316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4341 = 5U;
	int8_t x4343 = -1;
	int64_t t79 = -3435190044040558LL;

	t79 = ((x4341%(x4342&x4343))<<x4344);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4361 = 25U;
	static int16_t x4362 = INT16_MAX;
	int8_t x4363 = 1;
	static volatile int32_t t80 = 255883461;

	t80 = ((x4361%(x4362&x4363))<<x4364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4461 = UINT16_MAX;
	int32_t x4462 = INT32_MIN;
	int8_t x4463 = INT8_MIN;
	uint8_t x4464 = 5U;
	volatile int32_t t81 = 52236;

	t81 = ((x4461%(x4462&x4463))<<x4464);

	if (t81 != 2097120) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x4501 = 119U;
	int64_t x4502 = INT64_MAX;
	int8_t x4503 = 13;
	int16_t x4504 = 16;
	volatile int64_t t82 = -4125LL;

	t82 = ((x4501%(x4502&x4503))<<x4504);

	if (t82 != 131072LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4661 = UINT8_MAX;
	int32_t x4662 = INT32_MIN;
	volatile int32_t x4663 = -21261;
	static uint8_t x4664 = 0U;

	t83 = ((x4661%(x4662&x4663))<<x4664);

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4685 = INT64_MAX;
	volatile uint16_t x4686 = UINT16_MAX;
	volatile int32_t x4687 = -31683;
	int16_t x4688 = 6;

	t84 = ((x4685%(x4686&x4687))<<x4688);

	if (t84 != 1246592LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4817 = 2U;
	uint8_t x4818 = UINT8_MAX;
	static int8_t x4819 = 1;
	volatile int32_t t85 = -10;

	t85 = ((x4817%(x4818&x4819))<<x4820);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4829 = 0U;
	int64_t x4830 = INT64_MIN;
	int8_t x4831 = -1;
	volatile int64_t t86 = -458882951LL;

	t86 = ((x4829%(x4830&x4831))<<x4832);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x4942 = 5;
	uint32_t x4944 = 38U;
	int64_t t87 = 3927192771861286047LL;

	t87 = ((x4941%(x4942&x4943))<<x4944);

	if (t87 != 824633720832LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5065 = UINT32_MAX;
	int64_t x5066 = -11082LL;
	int64_t x5067 = INT64_MIN;
	int16_t x5068 = 4;
	int64_t t88 = -14445LL;

	t88 = ((x5065%(x5066&x5067))<<x5068);

	if (t88 != 68719476720LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5133 = INT64_MAX;
	int16_t x5134 = INT16_MIN;
	uint8_t x5136 = 24U;
	volatile int64_t t89 = 42265156LL;

	t89 = ((x5133%(x5134&x5135))<<x5136);

	if (t89 != 549739036672LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5189 = 43U;
	static int16_t x5190 = 215;
	uint32_t x5191 = 4U;
	uint32_t t90 = 508657540U;

	t90 = ((x5189%(x5190&x5191))<<x5192);

	if (t90 != 6U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5281 = 36U;
	int16_t x5282 = INT16_MIN;
	uint16_t x5283 = UINT16_MAX;
	uint16_t x5284 = 4U;

	t91 = ((x5281%(x5282&x5283))<<x5284);

	if (t91 != 576) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5305 = UINT16_MAX;
	int64_t x5306 = -2186196015552474LL;
	volatile int16_t x5307 = INT16_MAX;
	int64_t t92 = 64582692596705LL;

	t92 = ((x5305%(x5306&x5307))<<x5308);

	if (t92 != 12211LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5310 = 8;
	int16_t x5311 = -1;
	int32_t t93 = -2977877;

	t93 = ((x5309%(x5310&x5311))<<x5312);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5334 = 2;
	int64_t x5335 = -10LL;
	uint8_t x5336 = 49U;
	int64_t t94 = 1LL;

	t94 = ((x5333%(x5334&x5335))<<x5336);

	if (t94 != 562949953421312LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5414 = -1;
	uint32_t x5415 = UINT32_MAX;
	uint16_t x5416 = 4U;
	static uint32_t t95 = 33043159U;

	t95 = ((x5413%(x5414&x5415))<<x5416);

	if (t95 != 1048560U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5501 = 117U;
	int32_t x5502 = INT32_MAX;
	static volatile int8_t x5504 = 0;

	t96 = ((x5501%(x5502&x5503))<<x5504);

	if (t96 != 117LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5613 = UINT32_MAX;
	int16_t x5614 = -55;
	int8_t x5615 = INT8_MIN;
	uint8_t x5616 = 0U;
	volatile uint32_t t97 = 303581U;

	t97 = ((x5613%(x5614&x5615))<<x5616);

	if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5709 = -1;
	uint32_t x5710 = 103U;
	static int16_t x5711 = -157;
	static int32_t x5712 = 1;

	t98 = ((x5709%(x5710&x5711))<<x5712);

	if (t98 != 6U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5721 = -1;
	static int8_t x5722 = -1;
	uint8_t x5724 = 30U;
	static int32_t t99 = 3;

	t99 = ((x5721%(x5722&x5723))<<x5724);

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

