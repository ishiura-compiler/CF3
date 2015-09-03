#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x86 = INT8_MIN;
volatile int32_t t0 = 8177;
static uint32_t x89 = 110U;
static volatile int64_t x154 = -55LL;
volatile uint16_t x156 = 2U;
int64_t x159 = INT64_MAX;
int8_t x160 = 13;
int64_t x269 = 14245042524547546LL;
uint16_t x272 = 0U;
int16_t x292 = 0;
static int16_t x371 = 6;
volatile int8_t x474 = -1;
uint8_t x475 = 36U;
volatile int16_t x505 = INT16_MIN;
volatile int32_t t11 = -128531781;
uint8_t x592 = 0U;
uint32_t x664 = 1U;
int32_t x841 = 377664;
static volatile int64_t x844 = 0LL;
int16_t x846 = INT16_MAX;
int8_t x848 = 0;
volatile uint64_t x1062 = 10503LLU;
static int32_t t22 = 0;
volatile int32_t t24 = -37;
uint64_t x1366 = 12501162911LLU;
int16_t x1410 = INT16_MIN;
uint32_t x1447 = UINT32_MAX;
static int16_t x1510 = INT16_MAX;
uint16_t x1699 = 136U;
int32_t t30 = 1;
uint32_t x1786 = UINT32_MAX;
volatile int32_t t32 = 894;
static volatile int8_t x1817 = -1;
int8_t x1824 = 0;
int32_t t35 = 1;
uint64_t x1902 = UINT64_MAX;
int32_t t36 = 60512;
int32_t t37 = 0;
int32_t x2193 = -109083642;
uint64_t x2217 = UINT64_MAX;
static int8_t x2220 = 0;
volatile uint64_t x2337 = UINT64_MAX;
uint32_t x2338 = 153487U;
uint8_t x2339 = 6U;
int64_t x2511 = INT64_MAX;
uint32_t x2570 = UINT32_MAX;
int32_t t45 = -19420;
uint16_t x2684 = 3U;
int32_t t48 = -45013680;
static volatile int32_t t49 = INT32_MIN;
uint32_t x2884 = 0U;
uint64_t x2911 = 277573436049923281LLU;
uint64_t t52 = 16LLU;
static int8_t x2957 = INT8_MIN;
volatile int32_t x2958 = 59;
uint32_t x2959 = 23975596U;
uint64_t x3050 = 33680404199613338LLU;
uint64_t x3077 = UINT64_MAX;
uint8_t x3078 = 0U;
volatile uint64_t t55 = 5915578574408404LLU;
volatile uint64_t x3127 = UINT64_MAX;
volatile uint64_t t57 = 200LLU;
int16_t x3298 = 7436;
static volatile uint8_t x3300 = 1U;
static int32_t t58 = -38888972;
int32_t t59 = 2551;
int64_t x3365 = INT64_MIN;
uint8_t x3444 = 7U;
static uint64_t x3451 = 663LLU;
int32_t t64 = INT32_MIN;
static int16_t x3453 = INT16_MIN;
int32_t t69 = -681467638;
static uint8_t x3825 = 7U;
int32_t t71 = -98292496;
uint16_t x3837 = UINT16_MAX;
volatile int64_t x3838 = -2028585391965310LL;
static uint16_t x3839 = 322U;
int32_t t75 = -88934014;
int16_t x4072 = 1;
static int8_t x4146 = -1;
uint16_t x4148 = 15U;
int8_t x4250 = -58;
volatile uint64_t t80 = 21151923584217LLU;
volatile uint16_t x4288 = 0U;
uint64_t x4299 = UINT64_MAX;
int32_t x4366 = -1;
int32_t t84 = -943923144;
uint32_t x4387 = 244091796U;
static volatile uint16_t x4388 = 18U;
int32_t t85 = 376718;
static int16_t x4581 = -1;
int8_t x4584 = 54;
uint16_t x4844 = 62U;
uint32_t x4865 = UINT32_MAX;
int64_t x4868 = 3LL;
volatile int32_t x5070 = -1;
static int64_t x5082 = INT64_MIN;
int32_t x5209 = -1;
int16_t x5298 = 85;
int16_t x5299 = INT16_MAX;
uint8_t x5360 = 0U;
volatile uint32_t x5380 = 9U;
static int16_t x5402 = INT16_MIN;


void f0(void) {
	int32_t x85 = 194;
	int32_t x87 = INT32_MAX;
	uint32_t x88 = 2U;

	t0 = (x85-(x86<=(x87>>x88)));

	if (t0 != 193) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x90 = INT64_MIN;
	volatile uint16_t x91 = 2157U;
	static int8_t x92 = 0;
	uint32_t t1 = 6630U;

	t1 = (x89-(x90<=(x91>>x92)));

	if (t1 != 109U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x153 = INT8_MIN;
	int8_t x155 = 1;
	int32_t t2 = -12786;

	t2 = (x153-(x154<=(x155>>x156)));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x157 = 246329LL;
	uint64_t x158 = 1285415799LLU;
	static int64_t t3 = -829079035003571LL;

	t3 = (x157-(x158<=(x159>>x160)));

	if (t3 != 246328LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = UINT8_MAX;
	uint64_t x212 = 8LLU;
	static volatile int32_t t4 = 502444;

	t4 = (x209-(x210<=(x211>>x212)));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x270 = 144U;
	uint32_t x271 = UINT32_MAX;
	volatile int64_t t5 = 1024138LL;

	t5 = (x269-(x270<=(x271>>x272)));

	if (t5 != 14245042524547545LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x289 = UINT16_MAX;
	int8_t x290 = -2;
	int8_t x291 = 1;
	int32_t t6 = 416;

	t6 = (x289-(x290<=(x291>>x292)));

	if (t6 != 65534) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x369 = 10LL;
	static uint16_t x370 = UINT16_MAX;
	static int64_t x372 = 0LL;
	static int64_t t7 = 1601547804454946957LL;

	t7 = (x369-(x370<=(x371>>x372)));

	if (t7 != 10LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x397 = 20147903U;
	int8_t x398 = 14;
	static int64_t x399 = 68854036366488LL;
	uint16_t x400 = 3U;
	static volatile uint32_t t8 = 371U;

	t8 = (x397-(x398<=(x399>>x400)));

	if (t8 != 20147902U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x449 = INT32_MAX;
	static volatile uint8_t x450 = 21U;
	volatile uint64_t x451 = 575408602935128LLU;
	uint16_t x452 = 1U;
	static int32_t t9 = 6;

	t9 = (x449-(x450<=(x451>>x452)));

	if (t9 != 2147483646) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x473 = 2705378U;
	int32_t x476 = 1;
	volatile uint32_t t10 = 37870U;

	t10 = (x473-(x474<=(x475>>x476)));

	if (t10 != 2705377U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x506 = -1;
	uint64_t x507 = UINT64_MAX;
	uint8_t x508 = 0U;

	t11 = (x505-(x506<=(x507>>x508)));

	if (t11 != -32769) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x589 = -1LL;
	int16_t x590 = 72;
	int64_t x591 = INT64_MAX;
	int64_t t12 = 0LL;

	t12 = (x589-(x590<=(x591>>x592)));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x609 = INT8_MIN;
	static volatile int64_t x610 = INT64_MAX;
	int32_t x611 = INT32_MAX;
	uint8_t x612 = 3U;
	volatile int32_t t13 = -871;

	t13 = (x609-(x610<=(x611>>x612)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x661 = 32U;
	uint64_t x662 = 3LLU;
	uint16_t x663 = 1U;
	uint32_t t14 = 80U;

	t14 = (x661-(x662<=(x663>>x664)));

	if (t14 != 32U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x669 = INT32_MIN;
	static int16_t x670 = -3;
	uint64_t x671 = 14767995808416741LLU;
	static volatile uint8_t x672 = 41U;
	int32_t t15 = INT32_MIN;

	t15 = (x669-(x670<=(x671>>x672)));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x693 = 2003U;
	uint64_t x694 = 3223LLU;
	volatile int32_t x695 = 1329;
	uint8_t x696 = 8U;
	volatile int32_t t16 = -3543382;

	t16 = (x693-(x694<=(x695>>x696)));

	if (t16 != 2003) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x842 = INT16_MIN;
	uint64_t x843 = 10428091280614716LLU;
	static volatile int32_t t17 = -3005917;

	t17 = (x841-(x842<=(x843>>x844)));

	if (t17 != 377664) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x845 = -1719;
	int32_t x847 = INT32_MAX;
	static volatile int32_t t18 = -44170;

	t18 = (x845-(x846<=(x847>>x848)));

	if (t18 != -1720) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x877 = -3794144LL;
	int64_t x878 = INT64_MAX;
	int8_t x879 = INT8_MAX;
	uint8_t x880 = 24U;
	volatile int64_t t19 = 5694770317471LL;

	t19 = (x877-(x878<=(x879>>x880)));

	if (t19 != -3794144LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x937 = 282U;
	uint64_t x938 = UINT64_MAX;
	uint16_t x939 = 0U;
	uint8_t x940 = 31U;
	volatile int32_t t20 = 241520;

	t20 = (x937-(x938<=(x939>>x940)));

	if (t20 != 282) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1013 = 5U;
	uint32_t x1014 = 7U;
	int32_t x1015 = INT32_MAX;
	static uint8_t x1016 = 9U;
	int32_t t21 = -6220301;

	t21 = (x1013-(x1014<=(x1015>>x1016)));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x1061 = -1;
	volatile int8_t x1063 = INT8_MAX;
	volatile int8_t x1064 = 1;

	t22 = (x1061-(x1062<=(x1063>>x1064)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1109 = 27U;
	uint64_t x1110 = UINT64_MAX;
	int16_t x1111 = INT16_MAX;
	uint16_t x1112 = 1U;
	int32_t t23 = 580;

	t23 = (x1109-(x1110<=(x1111>>x1112)));

	if (t23 != 27) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1165 = -1041860114;
	int8_t x1166 = INT8_MAX;
	uint8_t x1167 = UINT8_MAX;
	volatile int32_t x1168 = 13;

	t24 = (x1165-(x1166<=(x1167>>x1168)));

	if (t24 != -1041860114) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1361 = UINT8_MAX;
	uint16_t x1362 = 30123U;
	uint8_t x1363 = UINT8_MAX;
	static int32_t x1364 = 0;
	int32_t t25 = -25435;

	t25 = (x1361-(x1362<=(x1363>>x1364)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x1365 = UINT8_MAX;
	uint8_t x1367 = 3U;
	int32_t x1368 = 1;
	int32_t t26 = 9;

	t26 = (x1365-(x1366<=(x1367>>x1368)));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1409 = 5U;
	volatile int16_t x1411 = 1013;
	int8_t x1412 = 1;
	int32_t t27 = -8158;

	t27 = (x1409-(x1410<=(x1411>>x1412)));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1445 = 1840375550607LLU;
	int64_t x1446 = INT64_MAX;
	int32_t x1448 = 4;
	volatile uint64_t t28 = 3LLU;

	t28 = (x1445-(x1446<=(x1447>>x1448)));

	if (t28 != 1840375550607LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1509 = INT8_MAX;
	static uint8_t x1511 = 1U;
	static volatile uint32_t x1512 = 2U;
	int32_t t29 = 0;

	t29 = (x1509-(x1510<=(x1511>>x1512)));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1697 = INT16_MIN;
	uint32_t x1698 = 13U;
	uint8_t x1700 = 7U;

	t30 = (x1697-(x1698<=(x1699>>x1700)));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1777 = INT16_MIN;
	uint64_t x1778 = 23997161180155LLU;
	static uint16_t x1779 = UINT16_MAX;
	int8_t x1780 = 5;
	volatile int32_t t31 = -782589818;

	t31 = (x1777-(x1778<=(x1779>>x1780)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1785 = UINT8_MAX;
	uint64_t x1787 = 449998958744028290LLU;
	uint8_t x1788 = 10U;

	t32 = (x1785-(x1786<=(x1787>>x1788)));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1818 = UINT8_MAX;
	uint8_t x1819 = 3U;
	int32_t x1820 = 15;
	int32_t t33 = 24875524;

	t33 = (x1817-(x1818<=(x1819>>x1820)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1821 = 43U;
	int32_t x1822 = INT32_MAX;
	int16_t x1823 = INT16_MAX;
	volatile int32_t t34 = -3538;

	t34 = (x1821-(x1822<=(x1823>>x1824)));

	if (t34 != 43) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1837 = -58619139;
	static volatile uint64_t x1838 = 373813229669LLU;
	int64_t x1839 = INT64_MAX;
	int8_t x1840 = 0;

	t35 = (x1837-(x1838<=(x1839>>x1840)));

	if (t35 != -58619140) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1901 = 57U;
	volatile uint8_t x1903 = UINT8_MAX;
	static volatile uint32_t x1904 = 11U;

	t36 = (x1901-(x1902<=(x1903>>x1904)));

	if (t36 != 57) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2137 = 44;
	int64_t x2138 = -560239009164LL;
	int32_t x2139 = 2091301;
	volatile uint8_t x2140 = 0U;

	t37 = (x2137-(x2138<=(x2139>>x2140)));

	if (t37 != 43) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2141 = INT16_MIN;
	int64_t x2142 = INT64_MIN;
	uint16_t x2143 = 13363U;
	static int16_t x2144 = 0;
	int32_t t38 = 2503;

	t38 = (x2141-(x2142<=(x2143>>x2144)));

	if (t38 != -32769) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2194 = 17;
	volatile int32_t x2195 = INT32_MAX;
	static uint8_t x2196 = 10U;
	int32_t t39 = -1;

	t39 = (x2193-(x2194<=(x2195>>x2196)));

	if (t39 != -109083643) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2218 = 0;
	uint64_t x2219 = UINT64_MAX;
	volatile uint64_t t40 = 3198291686261894483LLU;

	t40 = (x2217-(x2218<=(x2219>>x2220)));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2277 = 14446979U;
	int16_t x2278 = INT16_MIN;
	static int8_t x2279 = 14;
	int8_t x2280 = 3;
	volatile uint32_t t41 = 95U;

	t41 = (x2277-(x2278<=(x2279>>x2280)));

	if (t41 != 14446978U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2340 = 2U;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x2337-(x2338<=(x2339>>x2340)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2509 = -1;
	int64_t x2510 = 52289460LL;
	uint16_t x2512 = 36U;
	volatile int32_t t43 = 327968121;

	t43 = (x2509-(x2510<=(x2511>>x2512)));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2517 = -1LL;
	static uint32_t x2518 = 36067669U;
	uint8_t x2519 = UINT8_MAX;
	int16_t x2520 = 0;
	int64_t t44 = 3924040647LL;

	t44 = (x2517-(x2518<=(x2519>>x2520)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2569 = -2771;
	int16_t x2571 = INT16_MAX;
	uint16_t x2572 = 6U;

	t45 = (x2569-(x2570<=(x2571>>x2572)));

	if (t45 != -2771) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2609 = -13;
	uint64_t x2610 = 3792LLU;
	int16_t x2611 = INT16_MAX;
	uint8_t x2612 = 1U;
	int32_t t46 = 0;

	t46 = (x2609-(x2610<=(x2611>>x2612)));

	if (t46 != -14) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2681 = 2096107255U;
	volatile int32_t x2682 = -1;
	volatile uint64_t x2683 = 66188962098286675LLU;
	volatile uint32_t t47 = 85228420U;

	t47 = (x2681-(x2682<=(x2683>>x2684)));

	if (t47 != 2096107255U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2805 = -1;
	int16_t x2806 = 0;
	static int16_t x2807 = INT16_MAX;
	static volatile uint8_t x2808 = 3U;

	t48 = (x2805-(x2806<=(x2807>>x2808)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2873 = INT32_MIN;
	static int16_t x2874 = 2929;
	uint32_t x2875 = 9108U;
	int8_t x2876 = 3;

	t49 = (x2873-(x2874<=(x2875>>x2876)));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2881 = 8;
	uint16_t x2882 = 0U;
	int16_t x2883 = 3;
	volatile int32_t t50 = -52;

	t50 = (x2881-(x2882<=(x2883>>x2884)));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2885 = INT32_MAX;
	int16_t x2886 = -223;
	static int32_t x2887 = 157376;
	int32_t x2888 = 8;
	volatile int32_t t51 = 75033044;

	t51 = (x2885-(x2886<=(x2887>>x2888)));

	if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x2909 = 106123154721LLU;
	static uint32_t x2910 = 419342203U;
	uint8_t x2912 = 30U;

	t52 = (x2909-(x2910<=(x2911>>x2912)));

	if (t52 != 106123154721LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2960 = 11U;
	int32_t t53 = 19984;

	t53 = (x2957-(x2958<=(x2959>>x2960)));

	if (t53 != -129) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x3049 = UINT8_MAX;
	static uint16_t x3051 = UINT16_MAX;
	uint8_t x3052 = 0U;
	static int32_t t54 = -1;

	t54 = (x3049-(x3050<=(x3051>>x3052)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3079 = 3313524;
	uint8_t x3080 = 1U;

	t55 = (x3077-(x3078<=(x3079>>x3080)));

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3125 = 5602344342746295LLU;
	int16_t x3126 = -14;
	int8_t x3128 = 0;
	static volatile uint64_t t56 = 9786604151829LLU;

	t56 = (x3125-(x3126<=(x3127>>x3128)));

	if (t56 != 5602344342746294LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3145 = 63895340234LLU;
	static volatile int16_t x3146 = INT16_MIN;
	uint64_t x3147 = 970772LLU;
	volatile uint16_t x3148 = 17U;

	t57 = (x3145-(x3146<=(x3147>>x3148)));

	if (t57 != 63895340234LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3297 = UINT8_MAX;
	uint8_t x3299 = 19U;

	t58 = (x3297-(x3298<=(x3299>>x3300)));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3309 = 433U;
	int16_t x3310 = INT16_MAX;
	uint64_t x3311 = 3741189423219LLU;
	int16_t x3312 = 0;

	t59 = (x3309-(x3310<=(x3311>>x3312)));

	if (t59 != 432) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3366 = INT16_MIN;
	uint64_t x3367 = UINT64_MAX;
	static uint16_t x3368 = 10U;
	int64_t t60 = INT64_MIN;

	t60 = (x3365-(x3366<=(x3367>>x3368)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3413 = UINT32_MAX;
	int64_t x3414 = 209732LL;
	uint64_t x3415 = 106040LLU;
	static uint32_t x3416 = 7U;
	uint32_t t61 = UINT32_MAX;

	t61 = (x3413-(x3414<=(x3415>>x3416)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3417 = 0U;
	int32_t x3418 = 5562409;
	int16_t x3419 = INT16_MAX;
	uint8_t x3420 = 14U;
	volatile uint32_t t62 = 3119062U;

	t62 = (x3417-(x3418<=(x3419>>x3420)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3441 = -1;
	uint16_t x3442 = UINT16_MAX;
	uint16_t x3443 = UINT16_MAX;
	static int32_t t63 = -221128942;

	t63 = (x3441-(x3442<=(x3443>>x3444)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3449 = INT32_MIN;
	int64_t x3450 = INT64_MIN;
	int8_t x3452 = 1;

	t64 = (x3449-(x3450<=(x3451>>x3452)));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3454 = -1;
	uint64_t x3455 = 50753179860LLU;
	int8_t x3456 = 28;
	int32_t t65 = -7935;

	t65 = (x3453-(x3454<=(x3455>>x3456)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3609 = 71U;
	uint8_t x3610 = 15U;
	uint64_t x3611 = UINT64_MAX;
	uint8_t x3612 = 22U;
	static volatile int32_t t66 = -91281;

	t66 = (x3609-(x3610<=(x3611>>x3612)));

	if (t66 != 70) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x3661 = -1LL;
	static int64_t x3662 = -1LL;
	uint8_t x3663 = 6U;
	volatile int8_t x3664 = 0;
	static volatile int64_t t67 = 8370043LL;

	t67 = (x3661-(x3662<=(x3663>>x3664)));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x3737 = INT32_MIN;
	int32_t x3738 = -1;
	static uint32_t x3739 = 5U;
	volatile uint8_t x3740 = 13U;
	volatile int32_t t68 = INT32_MIN;

	t68 = (x3737-(x3738<=(x3739>>x3740)));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3753 = 790;
	uint16_t x3754 = 164U;
	volatile uint16_t x3755 = UINT16_MAX;
	volatile int16_t x3756 = 30;

	t69 = (x3753-(x3754<=(x3755>>x3756)));

	if (t69 != 790) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3781 = INT16_MIN;
	int64_t x3782 = INT64_MAX;
	static volatile uint64_t x3783 = UINT64_MAX;
	volatile int32_t x3784 = 1;
	static volatile int32_t t70 = 162185706;

	t70 = (x3781-(x3782<=(x3783>>x3784)));

	if (t70 != -32769) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3826 = INT16_MAX;
	int32_t x3827 = 12;
	uint16_t x3828 = 6U;

	t71 = (x3825-(x3826<=(x3827>>x3828)));

	if (t71 != 7) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3840 = 1;
	static volatile int32_t t72 = -1;

	t72 = (x3837-(x3838<=(x3839>>x3840)));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3861 = 21U;
	int8_t x3862 = INT8_MIN;
	uint64_t x3863 = 18706312500081LLU;
	uint32_t x3864 = 7U;
	int32_t t73 = 0;

	t73 = (x3861-(x3862<=(x3863>>x3864)));

	if (t73 != 21) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4033 = UINT8_MAX;
	volatile int16_t x4034 = -2799;
	int8_t x4035 = 1;
	uint64_t x4036 = 3LLU;
	volatile int32_t t74 = -1;

	t74 = (x4033-(x4034<=(x4035>>x4036)));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4045 = 6731U;
	uint16_t x4046 = 42U;
	uint8_t x4047 = UINT8_MAX;
	volatile uint16_t x4048 = 3U;

	t75 = (x4045-(x4046<=(x4047>>x4048)));

	if (t75 != 6731) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x4069 = -1;
	int16_t x4070 = -1;
	uint32_t x4071 = 221954729U;
	int32_t t76 = 92;

	t76 = (x4069-(x4070<=(x4071>>x4072)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4105 = 57U;
	uint8_t x4106 = 6U;
	uint8_t x4107 = 42U;
	uint8_t x4108 = 4U;
	volatile int32_t t77 = 467236;

	t77 = (x4105-(x4106<=(x4107>>x4108)));

	if (t77 != 57) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4145 = 1;
	static volatile int32_t x4147 = 756603272;
	int32_t t78 = 222;

	t78 = (x4145-(x4146<=(x4147>>x4148)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4165 = 21U;
	int64_t x4166 = 0LL;
	volatile uint64_t x4167 = 63642024993483664LLU;
	uint16_t x4168 = 13U;
	volatile int32_t t79 = 47399;

	t79 = (x4165-(x4166<=(x4167>>x4168)));

	if (t79 != 20) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4249 = UINT64_MAX;
	uint16_t x4251 = 22628U;
	volatile uint16_t x4252 = 31U;

	t80 = (x4249-(x4250<=(x4251>>x4252)));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4281 = -1LL;
	static int64_t x4282 = 20545127950128251LL;
	volatile int32_t x4283 = INT32_MAX;
	int8_t x4284 = 0;
	int64_t t81 = 62LL;

	t81 = (x4281-(x4282<=(x4283>>x4284)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4285 = INT8_MAX;
	volatile int16_t x4286 = INT16_MIN;
	uint16_t x4287 = 109U;
	static volatile int32_t t82 = 11534;

	t82 = (x4285-(x4286<=(x4287>>x4288)));

	if (t82 != 126) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4297 = INT32_MIN;
	static uint64_t x4298 = UINT64_MAX;
	int32_t x4300 = 1;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x4297-(x4298<=(x4299>>x4300)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4365 = 1;
	int8_t x4367 = INT8_MAX;
	volatile int16_t x4368 = 1;

	t84 = (x4365-(x4366<=(x4367>>x4368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4385 = 7U;
	static uint64_t x4386 = 6302734938449LLU;

	t85 = (x4385-(x4386<=(x4387>>x4388)));

	if (t85 != 7) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4425 = 32U;
	static volatile uint32_t x4426 = 3339U;
	volatile uint32_t x4427 = 5376405U;
	uint32_t x4428 = 7U;
	volatile int32_t t86 = 326573;

	t86 = (x4425-(x4426<=(x4427>>x4428)));

	if (t86 != 31) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4513 = 155428U;
	int64_t x4514 = INT64_MIN;
	int8_t x4515 = INT8_MAX;
	int8_t x4516 = 23;
	volatile uint32_t t87 = 8017U;

	t87 = (x4513-(x4514<=(x4515>>x4516)));

	if (t87 != 155427U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4582 = -1;
	int64_t x4583 = 4285405074490800LL;
	int32_t t88 = 814824887;

	t88 = (x4581-(x4582<=(x4583>>x4584)));

	if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x4801 = INT32_MAX;
	int16_t x4802 = -12915;
	uint16_t x4803 = 0U;
	static uint8_t x4804 = 28U;
	int32_t t89 = -226776285;

	t89 = (x4801-(x4802<=(x4803>>x4804)));

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4841 = INT16_MAX;
	int8_t x4842 = INT8_MIN;
	int64_t x4843 = 2050570LL;
	static volatile int32_t t90 = -1844;

	t90 = (x4841-(x4842<=(x4843>>x4844)));

	if (t90 != 32766) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4866 = INT32_MIN;
	int16_t x4867 = 856;
	static uint32_t t91 = 125308534U;

	t91 = (x4865-(x4866<=(x4867>>x4868)));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5069 = INT16_MIN;
	uint8_t x5071 = UINT8_MAX;
	volatile uint64_t x5072 = 0LLU;
	static volatile int32_t t92 = -1418;

	t92 = (x5069-(x5070<=(x5071>>x5072)));

	if (t92 != -32769) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5081 = 51U;
	uint16_t x5083 = UINT16_MAX;
	volatile uint16_t x5084 = 11U;
	int32_t t93 = -1319559;

	t93 = (x5081-(x5082<=(x5083>>x5084)));

	if (t93 != 50) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5121 = INT64_MAX;
	int64_t x5122 = -940288LL;
	static uint8_t x5123 = UINT8_MAX;
	uint32_t x5124 = 3U;
	static volatile int64_t t94 = 2944562482416363167LL;

	t94 = (x5121-(x5122<=(x5123>>x5124)));

	if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5210 = 673537;
	uint32_t x5211 = 0U;
	int16_t x5212 = 3;
	volatile int32_t t95 = -739;

	t95 = (x5209-(x5210<=(x5211>>x5212)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5297 = 22397;
	int16_t x5300 = 0;
	static int32_t t96 = 2;

	t96 = (x5297-(x5298<=(x5299>>x5300)));

	if (t96 != 22396) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x5357 = 55U;
	uint16_t x5358 = UINT16_MAX;
	int8_t x5359 = 0;
	static int32_t t97 = 1;

	t97 = (x5357-(x5358<=(x5359>>x5360)));

	if (t97 != 55) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5377 = UINT8_MAX;
	int64_t x5378 = -1LL;
	volatile uint8_t x5379 = 23U;
	int32_t t98 = -14338898;

	t98 = (x5377-(x5378<=(x5379>>x5380)));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5401 = -117;
	static int32_t x5403 = 9;
	volatile uint16_t x5404 = 18U;
	volatile int32_t t99 = -1012;

	t99 = (x5401-(x5402<=(x5403>>x5404)));

	if (t99 != -118) { NG(); } else { ; }
	
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

