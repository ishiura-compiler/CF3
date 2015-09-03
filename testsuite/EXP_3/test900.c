#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int8_t x180 = 4;
uint16_t x306 = 32U;
static int16_t x332 = 0;
int64_t x645 = INT64_MIN;
int8_t x714 = 1;
uint8_t x905 = UINT8_MAX;
static uint8_t x908 = 12U;
volatile uint32_t t10 = 30887993U;
static uint16_t x959 = 3U;
volatile uint8_t x1288 = 10U;
volatile int8_t x1393 = INT8_MAX;
int16_t x1594 = INT16_MIN;
int64_t x1734 = INT64_MAX;
volatile uint32_t t21 = 969560U;
int32_t x1877 = INT32_MAX;
static uint64_t t23 = 263308LLU;
uint32_t t24 = 830U;
uint8_t x1958 = 17U;
uint32_t x2007 = 106U;
uint32_t x2015 = 0U;
static uint8_t x2297 = UINT8_MAX;
int32_t t32 = -69;
int8_t x2565 = INT8_MAX;
uint64_t t33 = 136282791211814270LLU;
uint64_t x2591 = 3698848166735LLU;
int8_t x2645 = 0;
int64_t x2845 = INT64_MIN;
int32_t x2847 = 3986;
static uint16_t x2852 = 12U;
uint8_t x2868 = 6U;
int16_t x2942 = INT16_MAX;
static int16_t x2959 = 1731;
uint8_t x3032 = 1U;
uint8_t x3085 = 31U;
uint32_t t44 = 6U;
int8_t x3092 = 14;
uint8_t x3211 = 55U;
int32_t x3212 = 10;
static volatile int64_t x3249 = INT64_MIN;
volatile int64_t t48 = -1009828655472103LL;
static volatile uint64_t t50 = 775838896904855LLU;
static int8_t x3542 = 1;
static uint8_t x3543 = 31U;
static volatile uint32_t x3626 = 61531U;
volatile uint8_t x3654 = 7U;
volatile uint16_t x3655 = 61U;
volatile uint8_t x3656 = 3U;
int16_t x3686 = 279;
int8_t x3688 = 0;
static uint64_t x3907 = UINT64_MAX;
uint64_t t57 = 4975LLU;
uint32_t t58 = 361U;
int64_t x3954 = -22573444027968117LL;
int32_t x4064 = 4;
uint32_t t60 = 85807216U;
volatile int8_t x4169 = -1;
int8_t x4171 = 1;
uint32_t x4217 = 16U;
int8_t x4218 = -1;
static int8_t x4219 = 22;
int64_t t63 = 1790873960733475669LL;
uint8_t x4590 = 1U;
uint32_t x4666 = 77784U;
uint16_t x4674 = 50U;
int64_t x4681 = INT64_MIN;
uint16_t x4734 = 2U;
volatile int16_t x4736 = 1;
uint8_t x4888 = 5U;
static volatile int32_t t71 = -23;
volatile uint64_t t72 = 0LLU;
int32_t x5013 = 8838515;
volatile uint16_t x5120 = 58U;
uint16_t x5160 = 0U;
static uint8_t x5428 = 17U;
static volatile uint64_t t82 = 2977921410LLU;
int16_t x5593 = INT16_MAX;
volatile uint8_t x5724 = 0U;
static uint8_t x5932 = 0U;
uint64_t t87 = 1711522502487496381LLU;
int32_t x5976 = 2;
uint8_t x5991 = UINT8_MAX;
volatile uint8_t x6020 = 11U;
uint8_t x6023 = 4U;
int64_t t93 = -141826281267LL;
static uint8_t x6274 = 22U;
static int16_t x6335 = INT16_MAX;
static int8_t x6406 = -4;
volatile uint8_t x6528 = 0U;
int16_t x6537 = -1;
int8_t x6538 = -1;
uint8_t x6539 = UINT8_MAX;
uint64_t x6540 = 5LLU;
volatile int32_t t99 = 31;


void f0(void) {
	static volatile int8_t x1 = INT8_MIN;
	uint64_t x3 = 506259904833LLU;
	volatile int8_t x4 = 0;
	volatile uint64_t t0 = 932146270LLU;

	t0 = ((x1%x2)*(x3<<x4));

	if (t0 != 16100613108521983872LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x113 = -7;
	int16_t x114 = INT16_MIN;
	volatile uint8_t x115 = 1U;
	static uint8_t x116 = 1U;
	int32_t t1 = 1480632;

	t1 = ((x113%x114)*(x115<<x116));

	if (t1 != -14) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x177 = -3748253940857305611LL;
	int8_t x178 = INT8_MIN;
	uint16_t x179 = 0U;
	volatile int64_t t2 = -86738768642258711LL;

	t2 = ((x177%x178)*(x179<<x180));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x305 = -1;
	uint8_t x307 = UINT8_MAX;
	static volatile uint8_t x308 = 7U;
	static volatile int32_t t3 = 6724;

	t3 = ((x305%x306)*(x307<<x308));

	if (t3 != -32640) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	static volatile int8_t x331 = INT8_MAX;
	volatile int32_t t4 = 294;

	t4 = ((x329%x330)*(x331<<x332));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = -1;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 0U;
	int64_t t5 = -1922932LL;

	t5 = ((x361%x362)*(x363<<x364));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x593 = 363553808;
	volatile int64_t x594 = INT64_MIN;
	volatile uint32_t x595 = 16253U;
	uint8_t x596 = 1U;
	volatile int64_t t6 = -118962830968188LL;

	t6 = ((x593%x594)*(x595<<x596));

	if (t6 != 11817680082848LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x646 = -2LL;
	int32_t x647 = 15709;
	static int8_t x648 = 17;
	volatile int64_t t7 = -231LL;

	t7 = ((x645%x646)*(x647<<x648));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x713 = 1U;
	volatile uint8_t x715 = UINT8_MAX;
	uint64_t x716 = 2LLU;
	int32_t t8 = -38;

	t8 = ((x713%x714)*(x715<<x716));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x805 = 601045893341LLU;
	volatile int32_t x806 = INT32_MIN;
	uint8_t x807 = 14U;
	volatile uint8_t x808 = 26U;
	uint64_t t9 = 33254319582455LLU;

	t9 = ((x805%x806)*(x807<<x808));

	if (t9 != 11294777384428896256LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x906 = INT32_MIN;
	volatile uint32_t x907 = 1873U;

	t10 = ((x905%x906)*(x907<<x908));

	if (t10 != 1956311040U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x957 = UINT64_MAX;
	uint8_t x958 = 8U;
	volatile int32_t x960 = 1;
	volatile uint64_t t11 = 2062589521859LLU;

	t11 = ((x957%x958)*(x959<<x960));

	if (t11 != 42LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1141 = 53722365496LL;
	int64_t x1142 = 3820257901889LL;
	int8_t x1143 = 26;
	int8_t x1144 = 2;
	static volatile int64_t t12 = 818223407056117LL;

	t12 = ((x1141%x1142)*(x1143<<x1144));

	if (t12 != 5587126011584LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1285 = INT16_MIN;
	volatile int8_t x1286 = INT8_MAX;
	int8_t x1287 = 1;
	volatile int32_t t13 = -16427126;

	t13 = ((x1285%x1286)*(x1287<<x1288));

	if (t13 != -2048) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1365 = 1590LL;
	uint32_t x1366 = 1693423U;
	int32_t x1367 = 24182;
	volatile uint32_t x1368 = 14U;
	volatile int64_t t14 = -4989050LL;

	t14 = ((x1365%x1366)*(x1367<<x1368));

	if (t14 != 629954641920LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1394 = 146230U;
	static uint64_t x1395 = 940668LLU;
	uint8_t x1396 = 9U;
	static volatile uint64_t t15 = 2075032895401306370LLU;

	t15 = ((x1393%x1394)*(x1395<<x1396));

	if (t15 != 61165996032LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1593 = INT32_MAX;
	static volatile uint8_t x1595 = 21U;
	int16_t x1596 = 0;
	int32_t t16 = -220159177;

	t16 = ((x1593%x1594)*(x1595<<x1596));

	if (t16 != 688107) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1629 = INT64_MAX;
	int64_t x1630 = -1LL;
	volatile uint64_t x1631 = 552216932624913LLU;
	static int64_t x1632 = 0LL;
	volatile uint64_t t17 = 20726885LLU;

	t17 = ((x1629%x1630)*(x1631<<x1632));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1733 = -30;
	volatile uint64_t x1735 = UINT64_MAX;
	static int64_t x1736 = 0LL;
	static volatile uint64_t t18 = 3727786891094568LLU;

	t18 = ((x1733%x1734)*(x1735<<x1736));

	if (t18 != 30LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1789 = 779U;
	static int16_t x1790 = 12825;
	uint32_t x1791 = 1356577U;
	static int8_t x1792 = 4;
	static uint32_t t19 = 245883433U;

	t19 = ((x1789%x1790)*(x1791<<x1792));

	if (t19 != 4023473840U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1793 = UINT64_MAX;
	int64_t x1794 = -59959087997715089LL;
	uint64_t x1795 = 17441033738930LLU;
	static int8_t x1796 = 1;
	uint64_t t20 = 500597097757336315LLU;

	t20 = ((x1793%x1794)*(x1795<<x1796));

	if (t20 != 13203402914735116352LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1805 = INT32_MIN;
	static uint32_t x1806 = 8526542U;
	uint8_t x1807 = 1U;
	static uint8_t x1808 = 3U;

	t21 = ((x1805%x1806)*(x1807<<x1808));

	if (t21 != 58572848U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1878 = INT8_MAX;
	uint8_t x1879 = UINT8_MAX;
	static volatile uint32_t x1880 = 3U;
	volatile int32_t t22 = -15482;

	t22 = ((x1877%x1878)*(x1879<<x1880));

	if (t22 != 14280) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1889 = 2675LLU;
	uint16_t x1890 = 1U;
	uint16_t x1891 = UINT16_MAX;
	int64_t x1892 = 2LL;

	t23 = ((x1889%x1890)*(x1891<<x1892));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1897 = -63;
	uint32_t x1898 = 280351109U;
	static int8_t x1899 = 3;
	static uint32_t x1900 = 1U;

	t24 = ((x1897%x1898)*(x1899<<x1900));

	if (t24 != 538203588U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1957 = INT32_MAX;
	uint64_t x1959 = 6541LLU;
	uint8_t x1960 = 4U;
	volatile uint64_t t25 = 420LLU;

	t25 = ((x1957%x1958)*(x1959<<x1960));

	if (t25 != 837248LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2005 = 9U;
	uint32_t x2006 = 77336696U;
	static uint16_t x2008 = 1U;
	volatile uint32_t t26 = 27309044U;

	t26 = ((x2005%x2006)*(x2007<<x2008));

	if (t26 != 1908U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2013 = -1;
	int16_t x2014 = INT16_MIN;
	uint32_t x2016 = 14U;
	volatile uint32_t t27 = 24429371U;

	t27 = ((x2013%x2014)*(x2015<<x2016));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2017 = 145U;
	int32_t x2018 = INT32_MIN;
	static volatile uint8_t x2019 = UINT8_MAX;
	uint16_t x2020 = 2U;
	static volatile int32_t t28 = 14;

	t28 = ((x2017%x2018)*(x2019<<x2020));

	if (t28 != 147900) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2033 = 7897U;
	static int8_t x2034 = -37;
	uint32_t x2035 = 659092643U;
	int8_t x2036 = 1;
	uint32_t t29 = 133309U;

	t29 = ((x2033%x2034)*(x2035<<x2036));

	if (t29 != 3911095392U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2257 = 96;
	volatile uint8_t x2258 = 3U;
	static uint32_t x2259 = UINT32_MAX;
	int8_t x2260 = 28;
	volatile uint32_t t30 = 1741386690U;

	t30 = ((x2257%x2258)*(x2259<<x2260));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2289 = INT32_MIN;
	volatile int64_t x2290 = INT64_MIN;
	volatile int32_t x2291 = INT32_MAX;
	uint16_t x2292 = 0U;
	int64_t t31 = 2551123118LL;

	t31 = ((x2289%x2290)*(x2291<<x2292));

	if (t31 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2298 = UINT8_MAX;
	int16_t x2299 = INT16_MAX;
	int32_t x2300 = 7;

	t32 = ((x2297%x2298)*(x2299<<x2300));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2566 = INT64_MIN;
	uint64_t x2567 = 619652061543456399LLU;
	static uint64_t x2568 = 0LLU;

	t33 = ((x2565%x2566)*(x2567<<x2568));

	if (t33 != 4908835521180756209LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2589 = INT16_MAX;
	static int8_t x2590 = INT8_MAX;
	uint32_t x2592 = 7U;
	volatile uint64_t t34 = 8097786109019516485LLU;

	t34 = ((x2589%x2590)*(x2591<<x2592));

	if (t34 != 473452565342080LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2637 = 50333792LLU;
	int16_t x2638 = -1;
	int32_t x2639 = INT32_MAX;
	int8_t x2640 = 0;
	uint64_t t35 = 601476640670LLU;

	t35 = ((x2637%x2638)*(x2639<<x2640));

	if (t35 != 108090995211499424LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2646 = INT16_MIN;
	uint32_t x2647 = 136U;
	uint8_t x2648 = 10U;
	volatile uint32_t t36 = 3484U;

	t36 = ((x2645%x2646)*(x2647<<x2648));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2846 = -1;
	int16_t x2848 = 0;
	static int64_t t37 = -7271604574232LL;

	t37 = ((x2845%x2846)*(x2847<<x2848));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2849 = INT16_MAX;
	static int8_t x2850 = INT8_MAX;
	volatile int8_t x2851 = INT8_MAX;
	int32_t t38 = 1008991491;

	t38 = ((x2849%x2850)*(x2851<<x2852));

	if (t38 != 520192) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2865 = INT32_MAX;
	static int64_t x2866 = -1LL;
	uint64_t x2867 = 350239LLU;
	uint64_t t39 = 345947534435LLU;

	t39 = ((x2865%x2866)*(x2867<<x2868));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2941 = -1;
	uint64_t x2943 = UINT64_MAX;
	int16_t x2944 = 5;
	uint64_t t40 = 92218580501232LLU;

	t40 = ((x2941%x2942)*(x2943<<x2944));

	if (t40 != 32LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2957 = -1LL;
	static int16_t x2958 = INT16_MIN;
	volatile int64_t x2960 = 0LL;
	int64_t t41 = 58368129451LL;

	t41 = ((x2957%x2958)*(x2959<<x2960));

	if (t41 != -1731LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2993 = INT8_MIN;
	int64_t x2994 = INT64_MIN;
	int8_t x2995 = INT8_MAX;
	int8_t x2996 = 0;
	static volatile int64_t t42 = 188462894LL;

	t42 = ((x2993%x2994)*(x2995<<x2996));

	if (t42 != -16256LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3029 = -1;
	int8_t x3030 = INT8_MIN;
	uint8_t x3031 = 8U;
	static int32_t t43 = 0;

	t43 = ((x3029%x3030)*(x3031<<x3032));

	if (t43 != -16) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3086 = INT32_MIN;
	uint32_t x3087 = 3476333U;
	volatile uint8_t x3088 = 4U;

	t44 = ((x3085%x3086)*(x3087<<x3088));

	if (t44 != 1724261168U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3089 = 230281038LLU;
	int32_t x3090 = INT32_MIN;
	uint64_t x3091 = UINT64_MAX;
	uint64_t t45 = 2488LLU;

	t45 = ((x3089%x3090)*(x3091<<x3092));

	if (t45 != 18446740300785025024LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x3177 = 15522744LLU;
	int16_t x3178 = INT16_MIN;
	int8_t x3179 = 2;
	static uint8_t x3180 = 8U;
	uint64_t t46 = 0LLU;

	t46 = ((x3177%x3178)*(x3179<<x3180));

	if (t46 != 7947644928LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3209 = INT8_MIN;
	int32_t x3210 = INT32_MIN;
	volatile int32_t t47 = -11;

	t47 = ((x3209%x3210)*(x3211<<x3212));

	if (t47 != -7208960) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3250 = INT8_MIN;
	volatile uint32_t x3251 = 4689898U;
	static uint16_t x3252 = 0U;

	t48 = ((x3249%x3250)*(x3251<<x3252));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x3261 = 378U;
	volatile int16_t x3262 = -1;
	volatile uint32_t x3263 = 13U;
	uint8_t x3264 = 6U;
	uint32_t t49 = 950771256U;

	t49 = ((x3261%x3262)*(x3263<<x3264));

	if (t49 != 314496U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3429 = 50262915979984LLU;
	int64_t x3430 = -1LL;
	volatile uint64_t x3431 = UINT64_MAX;
	volatile int8_t x3432 = 6;

	t50 = ((x3429%x3430)*(x3431<<x3432));

	if (t50 != 18443527247086832640LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3541 = -1LL;
	uint8_t x3544 = 13U;
	volatile int64_t t51 = 15336304483LL;

	t51 = ((x3541%x3542)*(x3543<<x3544));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3625 = INT32_MAX;
	volatile uint16_t x3627 = 16037U;
	uint8_t x3628 = 0U;
	uint32_t t52 = 4297841U;

	t52 = ((x3625%x3626)*(x3627<<x3628));

	if (t52 != 829866639U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3653 = 852;
	volatile int32_t t53 = -42;

	t53 = ((x3653%x3654)*(x3655<<x3656));

	if (t53 != 2440) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3685 = UINT64_MAX;
	uint32_t x3687 = UINT32_MAX;
	uint64_t t54 = 222121427LLU;

	t54 = ((x3685%x3686)*(x3687<<x3688));

	if (t54 != 64424509425LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3765 = INT16_MIN;
	uint8_t x3766 = 5U;
	uint8_t x3767 = 0U;
	static uint8_t x3768 = 0U;
	int32_t t55 = 15931569;

	t55 = ((x3765%x3766)*(x3767<<x3768));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3797 = 12888734LLU;
	int64_t x3798 = 557515704251605LL;
	uint32_t x3799 = UINT32_MAX;
	int8_t x3800 = 6;
	static uint64_t t56 = 81305709LLU;

	t56 = ((x3797%x3798)*(x3799<<x3800));

	if (t56 != 55356690191964288LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x3905 = 32879210865LLU;
	int8_t x3906 = -22;
	volatile int32_t x3908 = 9;

	t57 = ((x3905%x3906)*(x3907<<x3908));

	if (t57 != 18446727239553588736LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x3949 = -1;
	volatile uint32_t x3950 = 1585U;
	static uint8_t x3951 = 3U;
	volatile int8_t x3952 = 29;

	t58 = ((x3949%x3950)*(x3951<<x3952));

	if (t58 != 1610612736U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x3953 = 0;
	uint16_t x3955 = UINT16_MAX;
	int8_t x3956 = 0;
	int64_t t59 = -68918582LL;

	t59 = ((x3953%x3954)*(x3955<<x3956));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4061 = INT8_MIN;
	int32_t x4062 = -1;
	volatile uint32_t x4063 = 35839304U;

	t60 = ((x4061%x4062)*(x4063<<x4064));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x4170 = -42LL;
	static uint16_t x4172 = 13U;
	int64_t t61 = -110032730520LL;

	t61 = ((x4169%x4170)*(x4171<<x4172));

	if (t61 != -8192LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4220 = 3LL;
	uint32_t t62 = 3811905U;

	t62 = ((x4217%x4218)*(x4219<<x4220));

	if (t62 != 2816U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4357 = UINT32_MAX;
	volatile int64_t x4358 = INT64_MIN;
	volatile uint32_t x4359 = 541273U;
	uint16_t x4360 = 11U;

	t63 = ((x4357%x4358)*(x4359<<x4360));

	if (t63 != 4761087657301063680LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x4473 = INT16_MIN;
	static int64_t x4474 = 19465181820199LL;
	uint8_t x4475 = 3U;
	volatile int16_t x4476 = 13;
	int64_t t64 = -502198209846166LL;

	t64 = ((x4473%x4474)*(x4475<<x4476));

	if (t64 != -805306368LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x4589 = -214;
	static uint64_t x4591 = 96069892LLU;
	volatile uint64_t x4592 = 1LLU;
	volatile uint64_t t65 = 114LLU;

	t65 = ((x4589%x4590)*(x4591<<x4592));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4665 = -16054;
	volatile int8_t x4667 = 4;
	uint8_t x4668 = 2U;
	uint32_t t66 = 17042544U;

	t66 = ((x4665%x4666)*(x4667<<x4668));

	if (t66 != 478368U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4673 = INT32_MAX;
	uint32_t x4675 = 214U;
	volatile uint16_t x4676 = 4U;
	uint32_t t67 = 10U;

	t67 = ((x4673%x4674)*(x4675<<x4676));

	if (t67 != 160928U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x4682 = 261958870;
	uint16_t x4683 = 3U;
	uint8_t x4684 = 1U;
	int64_t t68 = 269661833137LL;

	t68 = ((x4681%x4682)*(x4683<<x4684));

	if (t68 != -84550908LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4701 = INT16_MIN;
	int32_t x4702 = -1;
	uint8_t x4703 = 0U;
	volatile uint16_t x4704 = 30U;
	volatile int32_t t69 = 2653;

	t69 = ((x4701%x4702)*(x4703<<x4704));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4733 = INT8_MIN;
	uint32_t x4735 = 7744537U;
	uint32_t t70 = 8090150U;

	t70 = ((x4733%x4734)*(x4735<<x4736));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4885 = -1;
	static uint8_t x4886 = 8U;
	static uint8_t x4887 = UINT8_MAX;

	t71 = ((x4885%x4886)*(x4887<<x4888));

	if (t71 != -8160) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4949 = 712008232112LLU;
	int64_t x4950 = -96244111LL;
	volatile int8_t x4951 = 14;
	uint16_t x4952 = 2U;

	t72 = ((x4949%x4950)*(x4951<<x4952));

	if (t72 != 39872460998272LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5014 = -1;
	static uint8_t x5015 = UINT8_MAX;
	int32_t x5016 = 0;
	int32_t t73 = -51041;

	t73 = ((x5013%x5014)*(x5015<<x5016));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5089 = 3459103149LLU;
	int32_t x5090 = INT32_MIN;
	volatile uint64_t x5091 = 2551653804LLU;
	static uint16_t x5092 = 2U;
	volatile uint64_t t74 = 6LLU;

	t74 = ((x5089%x5090)*(x5091<<x5092));

	if (t74 != 16858990760587363568LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x5117 = 2U;
	uint32_t x5118 = UINT32_MAX;
	volatile uint64_t x5119 = 31174151LLU;
	static volatile uint64_t t75 = 4000LLU;

	t75 = ((x5117%x5118)*(x5119<<x5120));

	if (t75 != 4035225266123964416LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x5141 = -774;
	static int16_t x5142 = -1;
	static uint16_t x5143 = UINT16_MAX;
	static uint8_t x5144 = 9U;
	volatile int32_t t76 = 1;

	t76 = ((x5141%x5142)*(x5143<<x5144));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x5157 = INT32_MIN;
	int64_t x5158 = -65130885LL;
	uint64_t x5159 = UINT64_MAX;
	static volatile uint64_t t77 = 26212452117021LLU;

	t77 = ((x5157%x5158)*(x5159<<x5160));

	if (t77 != 63295328LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5281 = -10340572;
	volatile uint32_t x5282 = 865U;
	uint32_t x5283 = UINT32_MAX;
	uint8_t x5284 = 0U;
	volatile uint32_t t78 = 3236833U;

	t78 = ((x5281%x5282)*(x5283<<x5284));

	if (t78 != 4294966697U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5345 = 10U;
	uint32_t x5346 = 412791109U;
	int32_t x5347 = INT32_MAX;
	volatile int32_t x5348 = 0;
	uint32_t t79 = 1007U;

	t79 = ((x5345%x5346)*(x5347<<x5348));

	if (t79 != 4294967286U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x5425 = 497;
	int32_t x5426 = INT32_MAX;
	int16_t x5427 = 5;
	volatile int32_t t80 = 2;

	t80 = ((x5425%x5426)*(x5427<<x5428));

	if (t80 != 325713920) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5469 = INT16_MIN;
	static int16_t x5470 = 10747;
	uint32_t x5471 = UINT32_MAX;
	static volatile uint8_t x5472 = 1U;
	volatile uint32_t t81 = 941423U;

	t81 = ((x5469%x5470)*(x5471<<x5472));

	if (t81 != 1054U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5489 = -1;
	int8_t x5490 = INT8_MAX;
	uint64_t x5491 = UINT64_MAX;
	volatile uint8_t x5492 = 53U;

	t82 = ((x5489%x5490)*(x5491<<x5492));

	if (t82 != 9007199254740992LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5594 = -9;
	uint32_t x5595 = UINT32_MAX;
	uint8_t x5596 = 7U;
	uint32_t t83 = 23U;

	t83 = ((x5593%x5594)*(x5595<<x5596));

	if (t83 != 4294966400U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5597 = INT16_MAX;
	int16_t x5598 = INT16_MAX;
	volatile uint16_t x5599 = UINT16_MAX;
	static uint8_t x5600 = 6U;
	volatile int32_t t84 = 13;

	t84 = ((x5597%x5598)*(x5599<<x5600));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5721 = 0U;
	int32_t x5722 = INT32_MAX;
	int64_t x5723 = INT64_MAX;
	int64_t t85 = -79973805273LL;

	t85 = ((x5721%x5722)*(x5723<<x5724));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x5929 = 5U;
	int64_t x5930 = INT64_MAX;
	int8_t x5931 = 4;
	static volatile int64_t t86 = 55082683163150400LL;

	t86 = ((x5929%x5930)*(x5931<<x5932));

	if (t86 != 20LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5961 = INT8_MIN;
	int64_t x5962 = -1LL;
	uint64_t x5963 = UINT64_MAX;
	uint8_t x5964 = 24U;

	t87 = ((x5961%x5962)*(x5963<<x5964));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5973 = UINT16_MAX;
	static int64_t x5974 = INT64_MIN;
	uint32_t x5975 = 4913643U;
	int64_t t88 = -457120LL;

	t88 = ((x5973%x5974)*(x5975<<x5976));

	if (t88 != 1288062376020LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5989 = 1607022743255052LLU;
	int8_t x5990 = -1;
	int8_t x5992 = 7;
	volatile uint64_t t89 = 13760LLU;

	t89 = ((x5989%x5990)*(x5991<<x5992));

	if (t89 != 15559734192425794048LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6017 = 6536484199444588544LLU;
	uint8_t x6018 = UINT8_MAX;
	int32_t x6019 = 51;
	volatile uint64_t t90 = 159LLU;

	t90 = ((x6017%x6018)*(x6019<<x6020));

	if (t90 != 12429312LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6021 = 9;
	static int16_t x6022 = -1;
	uint8_t x6024 = 2U;
	volatile int32_t t91 = -991466074;

	t91 = ((x6021%x6022)*(x6023<<x6024));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6049 = 5139U;
	int64_t x6050 = -127101557LL;
	int8_t x6051 = 61;
	uint8_t x6052 = 4U;
	static volatile int64_t t92 = -409909LL;

	t92 = ((x6049%x6050)*(x6051<<x6052));

	if (t92 != 5015664LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6173 = 56U;
	static int64_t x6174 = INT64_MIN;
	uint8_t x6175 = 90U;
	int8_t x6176 = 1;

	t93 = ((x6173%x6174)*(x6175<<x6176));

	if (t93 != 10080LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6273 = 8;
	uint64_t x6275 = UINT64_MAX;
	uint64_t x6276 = 26LLU;
	static uint64_t t94 = 48059953446752LLU;

	t94 = ((x6273%x6274)*(x6275<<x6276));

	if (t94 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x6333 = 51U;
	volatile int8_t x6334 = 3;
	int8_t x6336 = 0;
	volatile int32_t t95 = 1172;

	t95 = ((x6333%x6334)*(x6335<<x6336));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6405 = -1;
	static int8_t x6407 = 1;
	static volatile uint8_t x6408 = 19U;
	int32_t t96 = -15614;

	t96 = ((x6405%x6406)*(x6407<<x6408));

	if (t96 != -524288) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6425 = INT8_MIN;
	static int16_t x6426 = INT16_MIN;
	static uint16_t x6427 = 85U;
	static uint8_t x6428 = 1U;
	int32_t t97 = -946;

	t97 = ((x6425%x6426)*(x6427<<x6428));

	if (t97 != -21760) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6525 = INT16_MIN;
	static uint64_t x6526 = 1048647274096LLU;
	static uint16_t x6527 = UINT16_MAX;
	static volatile uint64_t t98 = 3LLU;

	t98 = ((x6525%x6526)*(x6527<<x6528));

	if (t98 != 23694803392757280LLU) { NG(); } else { ; }
	
}

void f99(void) {


	t99 = ((x6537%x6538)*(x6539<<x6540));

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

