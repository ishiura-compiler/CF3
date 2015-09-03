#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x84 = -1;
int64_t x327 = -1LL;
uint8_t x474 = 3U;
uint16_t x583 = UINT16_MAX;
int64_t t11 = -17107009590237LL;
int64_t x739 = -1LL;
uint8_t x928 = 1U;
int8_t x973 = INT8_MAX;
uint16_t x975 = 1U;
int16_t x976 = -13;
int64_t x1110 = 3LL;
uint64_t x1111 = 7621482751514297225LLU;
static int16_t x1218 = 32;
static volatile uint64_t t18 = 113370LLU;
uint8_t x1301 = 2U;
static volatile uint16_t x1303 = UINT16_MAX;
static volatile int32_t x1304 = INT32_MAX;
uint16_t x1333 = 1U;
uint8_t x1565 = 120U;
volatile uint64_t x1568 = UINT64_MAX;
uint64_t t22 = UINT64_MAX;
uint64_t x1685 = UINT64_MAX;
volatile uint32_t x1686 = 14U;
uint8_t x1687 = 3U;
uint16_t x1688 = 61U;
int32_t x1811 = INT32_MIN;
int64_t x1821 = 55281LL;
int8_t x1849 = INT8_MAX;
int16_t x1851 = 25;
volatile int64_t x1890 = 4LL;
uint8_t x2050 = 4U;
volatile int16_t x2261 = 478;
volatile int64_t t30 = -60721293041823563LL;
uint8_t x2293 = UINT8_MAX;
uint32_t x2333 = UINT32_MAX;
uint8_t x2336 = 18U;
uint64_t x2343 = 1318176039063479386LLU;
int32_t x2446 = 0;
int8_t x2447 = 47;
int16_t x2448 = -5;
volatile int64_t x2517 = 10308413124486998LL;
int64_t x2520 = -1193535391076562964LL;
volatile int32_t x2586 = 0;
int32_t t42 = INT32_MAX;
int32_t t43 = -12110511;
uint8_t x3058 = 1U;
uint64_t x3579 = UINT64_MAX;
volatile uint64_t x3580 = 12481447546106730LLU;
volatile uint32_t x3638 = 0U;
uint8_t x3677 = UINT8_MAX;
uint16_t x3764 = UINT16_MAX;
volatile int32_t t57 = -9;
uint16_t x3829 = 151U;
int16_t x3831 = INT16_MIN;
int8_t x3895 = INT8_MAX;
uint8_t x3915 = 2U;
volatile int64_t t61 = -12LL;
static uint16_t x4104 = 18862U;
uint8_t x4158 = 2U;
volatile int8_t x4159 = INT8_MIN;
int64_t x4160 = INT64_MAX;
uint32_t x4374 = 2U;
volatile uint8_t x4375 = UINT8_MAX;
uint16_t x4482 = 28U;
int64_t x4606 = 2LL;
int64_t x4607 = 1272092968843354377LL;
static int8_t x4702 = 4;
uint64_t x4906 = 11LLU;
uint16_t x4955 = UINT16_MAX;
static uint64_t x5299 = UINT64_MAX;
int8_t x5429 = INT8_MAX;
int64_t x5431 = 8LL;
uint8_t x5432 = UINT8_MAX;
int32_t x5457 = 93816398;
uint8_t x5542 = 30U;
uint16_t x5589 = UINT16_MAX;
volatile uint16_t x5590 = 4U;
static uint8_t x5610 = 20U;
int32_t t85 = -12341;
volatile int32_t t86 = -39614;
static volatile int16_t x5735 = 14659;
static int8_t x5762 = 0;
int32_t x5790 = 2;
int8_t x5792 = -9;
int64_t t89 = -2547518356090887LL;
uint32_t x5797 = UINT32_MAX;
int8_t x5800 = -28;
uint32_t t90 = 512760831U;
int64_t x5857 = 522160LL;
uint64_t x5893 = 1941656110LLU;
int32_t x5999 = -1;
volatile int64_t t95 = -26874933847LL;
volatile uint32_t t96 = 1914U;
int16_t x6278 = 25;
static uint32_t x6333 = UINT32_MAX;


void f0(void) {
	uint32_t x17 = 9U;
	volatile int16_t x18 = 3;
	int64_t x19 = INT64_MIN;
	volatile int16_t x20 = -758;
	int64_t t0 = -1772187259LL;

	t0 = (((x17<<x18)+x19)|x20);

	if (t0 != -694LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x81 = UINT8_MAX;
	volatile int8_t x82 = 0;
	static uint32_t x83 = 6U;
	uint32_t t1 = UINT32_MAX;

	t1 = (((x81<<x82)+x83)|x84);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static uint8_t x146 = 1U;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 1008579001465LLU;
	uint64_t t2 = 425157704LLU;

	t2 = (((x145<<x146)+x147)|x148);

	if (t2 != 18446744073709534719LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x213 = 6;
	int16_t x214 = 1;
	int32_t x215 = -28937;
	int8_t x216 = INT8_MIN;
	volatile int32_t t3 = -263817013;

	t3 = (((x213<<x214)+x215)|x216);

	if (t3 != -125) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x273 = 295;
	uint8_t x274 = 2U;
	static volatile uint16_t x275 = UINT16_MAX;
	static volatile uint32_t x276 = 854593555U;
	uint32_t t4 = 36U;

	t4 = (((x273<<x274)+x275)|x276);

	if (t4 != 854660251U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x325 = 46U;
	int8_t x326 = 0;
	int8_t x328 = -1;
	volatile int64_t t5 = 482616LL;

	t5 = (((x325<<x326)+x327)|x328);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x473 = UINT16_MAX;
	int8_t x475 = -3;
	static int64_t x476 = INT64_MAX;
	volatile int64_t t6 = INT64_MAX;

	t6 = (((x473<<x474)+x475)|x476);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x525 = 51871798634LLU;
	uint8_t x526 = 22U;
	uint8_t x527 = 6U;
	uint16_t x528 = UINT16_MAX;
	volatile uint64_t t7 = 1572002290912LLU;

	t7 = (((x525<<x526)+x527)|x528);

	if (t7 != 217566092497846271LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x557 = UINT16_MAX;
	static uint64_t x558 = 0LLU;
	int64_t x559 = -114LL;
	int8_t x560 = 1;
	int64_t t8 = -13209250316749704LL;

	t8 = (((x557<<x558)+x559)|x560);

	if (t8 != 65421LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x581 = UINT64_MAX;
	uint32_t x582 = 12U;
	int64_t x584 = INT64_MIN;
	uint64_t t9 = 93349188LLU;

	t9 = (((x581<<x582)+x583)|x584);

	if (t9 != 9223372036854837247LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x637 = 12;
	static uint8_t x638 = 0U;
	int8_t x639 = 3;
	uint16_t x640 = 153U;
	int32_t t10 = -12439;

	t10 = (((x637<<x638)+x639)|x640);

	if (t10 != 159) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x721 = 8651U;
	uint32_t x722 = 2U;
	int32_t x723 = INT32_MAX;
	volatile int64_t x724 = 13543LL;

	t11 = (((x721<<x722)+x723)|x724);

	if (t11 != 2147530735LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x737 = 34U;
	volatile uint64_t x738 = 7LLU;
	uint8_t x740 = UINT8_MAX;
	volatile int64_t t12 = -1LL;

	t12 = (((x737<<x738)+x739)|x740);

	if (t12 != 4351LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x889 = UINT8_MAX;
	uint16_t x890 = 1U;
	int64_t x891 = 994834925067632LL;
	volatile int32_t x892 = INT32_MAX;
	int64_t t13 = -2LL;

	t13 = (((x889<<x890)+x891)|x892);

	if (t13 != 994836832321535LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x925 = 7;
	int8_t x926 = 5;
	volatile int64_t x927 = -1LL;
	volatile int64_t t14 = -23294572LL;

	t14 = (((x925<<x926)+x927)|x928);

	if (t14 != 223LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x974 = 6;
	static int32_t t15 = -2338;

	t15 = (((x973<<x974)+x975)|x976);

	if (t15 != -13) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1057 = INT32_MAX;
	uint16_t x1058 = 0U;
	int8_t x1059 = INT8_MIN;
	static volatile uint16_t x1060 = 160U;
	volatile int32_t t16 = INT32_MAX;

	t16 = (((x1057<<x1058)+x1059)|x1060);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x1109 = 194U;
	volatile int16_t x1112 = INT16_MIN;
	uint64_t t17 = 141833LLU;

	t17 = (((x1109<<x1110)+x1111)|x1112);

	if (t17 != 18446744073709537689LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1217 = UINT64_MAX;
	int64_t x1219 = INT64_MIN;
	uint16_t x1220 = 4363U;

	t18 = (((x1217<<x1218)+x1219)|x1220);

	if (t18 != 9223372032559812875LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1302 = 0;
	int32_t t19 = INT32_MAX;

	t19 = (((x1301<<x1302)+x1303)|x1304);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1334 = 1U;
	static volatile int16_t x1335 = -1;
	uint8_t x1336 = UINT8_MAX;
	static int32_t t20 = -141076;

	t20 = (((x1333<<x1334)+x1335)|x1336);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1453 = UINT16_MAX;
	int16_t x1454 = 0;
	int8_t x1455 = INT8_MIN;
	volatile uint32_t x1456 = 1560247U;
	volatile uint32_t t21 = 97098U;

	t21 = (((x1453<<x1454)+x1455)|x1456);

	if (t21 != 1572863U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1566 = 1U;
	static volatile uint64_t x1567 = 4097708144865496990LLU;

	t22 = (((x1565<<x1566)+x1567)|x1568);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t t23 = 2239031LLU;

	t23 = (((x1685<<x1686)+x1687)|x1688);

	if (t23 != 18446744073709535295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1809 = UINT64_MAX;
	int8_t x1810 = 0;
	int32_t x1812 = -1;
	volatile uint64_t t24 = UINT64_MAX;

	t24 = (((x1809<<x1810)+x1811)|x1812);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1822 = 27;
	uint32_t x1823 = 0U;
	uint8_t x1824 = 5U;
	volatile int64_t t25 = 205493003814445LL;

	t25 = (((x1821<<x1822)+x1823)|x1824);

	if (t25 != 7419690221573LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1850 = 7;
	uint16_t x1852 = UINT16_MAX;
	volatile int32_t t26 = 14;

	t26 = (((x1849<<x1850)+x1851)|x1852);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1889 = 1836;
	int8_t x1891 = INT8_MIN;
	volatile uint16_t x1892 = UINT16_MAX;
	static int32_t t27 = 97041;

	t27 = (((x1889<<x1890)+x1891)|x1892);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1997 = 269184428;
	uint8_t x1998 = 0U;
	int64_t x1999 = INT64_MIN;
	static int32_t x2000 = 68931935;
	int64_t t28 = -783LL;

	t28 = (((x1997<<x1998)+x1999)|x2000);

	if (t28 != -9223372036517396993LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2049 = 13059LLU;
	static int16_t x2051 = INT16_MIN;
	static int8_t x2052 = INT8_MIN;
	volatile uint64_t t29 = 357164168366234174LLU;

	t29 = (((x2049<<x2050)+x2051)|x2052);

	if (t29 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x2262 = 0U;
	int8_t x2263 = INT8_MIN;
	volatile int64_t x2264 = -7312774168LL;

	t30 = (((x2261<<x2262)+x2263)|x2264);

	if (t30 != -7312774146LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2285 = 1U;
	uint16_t x2286 = 1U;
	int8_t x2287 = INT8_MIN;
	int64_t x2288 = -1LL;
	static int64_t t31 = -255383311510708LL;

	t31 = (((x2285<<x2286)+x2287)|x2288);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2294 = 3U;
	int16_t x2295 = INT16_MIN;
	int32_t x2296 = INT32_MAX;
	int32_t t32 = -8;

	t32 = (((x2293<<x2294)+x2295)|x2296);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2334 = 27;
	int16_t x2335 = INT16_MAX;
	static uint32_t t33 = 495005962U;

	t33 = (((x2333<<x2334)+x2335)|x2336);

	if (t33 != 4160782335U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2341 = 1U;
	uint8_t x2342 = 6U;
	uint64_t x2344 = 245672858LLU;
	uint64_t t34 = 26205738LLU;

	t34 = (((x2341<<x2342)+x2343)|x2344);

	if (t34 != 1318176039065612186LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2357 = 207708434U;
	static int16_t x2358 = 1;
	volatile int64_t x2359 = INT64_MIN;
	int32_t x2360 = INT32_MIN;
	volatile int64_t t35 = 13879452034396063LL;

	t35 = (((x2357<<x2358)+x2359)|x2360);

	if (t35 != -1732066780LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2445 = INT8_MAX;
	volatile int32_t t36 = 810823016;

	t36 = (((x2445<<x2446)+x2447)|x2448);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2489 = 1568553946256LLU;
	int16_t x2490 = 18;
	int16_t x2491 = 124;
	volatile uint32_t x2492 = 466U;
	uint64_t t37 = 57238429804112964LLU;

	t37 = (((x2489<<x2490)+x2491)|x2492);

	if (t37 != 411187005687333374LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2518 = 1;
	int16_t x2519 = 277;
	static volatile int64_t t38 = 236562335041LL;

	t38 = (((x2517<<x2518)+x2519)|x2520);

	if (t38 != -1193524377690877971LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2541 = UINT64_MAX;
	uint8_t x2542 = 0U;
	uint8_t x2543 = 9U;
	volatile uint16_t x2544 = 24541U;
	volatile uint64_t t39 = 33593019588LLU;

	t39 = (((x2541<<x2542)+x2543)|x2544);

	if (t39 != 24541LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x2585 = 129710386791861LLU;
	uint32_t x2587 = 59202U;
	volatile int16_t x2588 = 8469;
	volatile uint64_t t40 = 1050256346LLU;

	t40 = (((x2585<<x2586)+x2587)|x2588);

	if (t40 != 129710386851319LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x2589 = INT64_MAX;
	uint64_t x2590 = 0LLU;
	int32_t x2591 = -1;
	uint32_t x2592 = 149214U;
	int64_t t41 = 255LL;

	t41 = (((x2589<<x2590)+x2591)|x2592);

	if (t41 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x2705 = 1;
	int8_t x2706 = 0;
	int8_t x2707 = 28;
	int32_t x2708 = INT32_MAX;

	t42 = (((x2705<<x2706)+x2707)|x2708);

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2713 = UINT16_MAX;
	uint16_t x2714 = 2U;
	int8_t x2715 = INT8_MIN;
	int16_t x2716 = INT16_MIN;

	t43 = (((x2713<<x2714)+x2715)|x2716);

	if (t43 != -132) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2865 = UINT8_MAX;
	uint16_t x2866 = 2U;
	int32_t x2867 = -1;
	uint8_t x2868 = 1U;
	int32_t t44 = 14838;

	t44 = (((x2865<<x2866)+x2867)|x2868);

	if (t44 != 1019) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2885 = 3723258987310LLU;
	uint16_t x2886 = 38U;
	uint32_t x2887 = 37554170U;
	static int16_t x2888 = INT16_MAX;
	uint64_t t45 = 3780683859LLU;

	t45 = (((x2885<<x2886)+x2887)|x2888);

	if (t45 != 16276232803970809855LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2945 = 3512U;
	volatile uint8_t x2946 = 1U;
	uint16_t x2947 = UINT16_MAX;
	int16_t x2948 = 2;
	volatile int32_t t46 = 9474163;

	t46 = (((x2945<<x2946)+x2947)|x2948);

	if (t46 != 72559) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3057 = UINT32_MAX;
	uint32_t x3059 = UINT32_MAX;
	static uint64_t x3060 = 959073930874441724LLU;
	uint64_t t47 = 62842LLU;

	t47 = (((x3057<<x3058)+x3059)|x3060);

	if (t47 != 959073932432900093LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3129 = INT64_MAX;
	int8_t x3130 = 0;
	int8_t x3131 = INT8_MIN;
	static uint32_t x3132 = 264679U;
	int64_t t48 = INT64_MAX;

	t48 = (((x3129<<x3130)+x3131)|x3132);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x3201 = INT64_MAX;
	volatile int8_t x3202 = 0;
	int8_t x3203 = -1;
	uint8_t x3204 = 0U;
	volatile int64_t t49 = 465567010LL;

	t49 = (((x3201<<x3202)+x3203)|x3204);

	if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3261 = UINT64_MAX;
	uint8_t x3262 = 29U;
	int32_t x3263 = INT32_MIN;
	volatile int16_t x3264 = -157;
	static uint64_t t50 = 8920121224924824LLU;

	t50 = (((x3261<<x3262)+x3263)|x3264);

	if (t50 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3341 = 8937143157120117LLU;
	static volatile uint8_t x3342 = 5U;
	uint32_t x3343 = UINT32_MAX;
	static int64_t x3344 = 5572875590LL;
	volatile uint64_t t51 = 34LLU;

	t51 = (((x3341<<x3342)+x3343)|x3344);

	if (t51 != 285988589752016863LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3577 = 82U;
	volatile uint16_t x3578 = 2U;
	volatile uint64_t t52 = 5949820732586LLU;

	t52 = (((x3577<<x3578)+x3579)|x3580);

	if (t52 != 12481447546106735LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3637 = UINT32_MAX;
	static int32_t x3639 = INT32_MIN;
	uint8_t x3640 = 4U;
	uint32_t t53 = 25U;

	t53 = (((x3637<<x3638)+x3639)|x3640);

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3649 = UINT32_MAX;
	static int8_t x3650 = 0;
	int8_t x3651 = -1;
	volatile int8_t x3652 = -1;
	uint32_t t54 = UINT32_MAX;

	t54 = (((x3649<<x3650)+x3651)|x3652);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3678 = 10U;
	uint64_t x3679 = 761062577LLU;
	uint8_t x3680 = 13U;
	static volatile uint64_t t55 = 8LLU;

	t55 = (((x3677<<x3678)+x3679)|x3680);

	if (t55 != 761323709LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3697 = 12542U;
	static uint8_t x3698 = 3U;
	int64_t x3699 = INT64_MIN;
	int64_t x3700 = INT64_MAX;
	volatile int64_t t56 = -2301LL;

	t56 = (((x3697<<x3698)+x3699)|x3700);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x3761 = 16U;
	int32_t x3762 = 2;
	int32_t x3763 = -747950635;

	t57 = (((x3761<<x3762)+x3763)|x3764);

	if (t57 != -747896833) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3830 = 0;
	uint8_t x3832 = 29U;
	volatile int32_t t58 = -1413393;

	t58 = (((x3829<<x3830)+x3831)|x3832);

	if (t58 != -32609) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3893 = UINT8_MAX;
	volatile int8_t x3894 = 0;
	volatile uint32_t x3896 = 0U;
	uint32_t t59 = 981U;

	t59 = (((x3893<<x3894)+x3895)|x3896);

	if (t59 != 382U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3913 = 20627249709788002LLU;
	uint8_t x3914 = 20U;
	static uint8_t x3916 = 29U;
	volatile uint64_t t60 = 43934474610699LLU;

	t60 = (((x3913<<x3914)+x3915)|x3916);

	if (t60 != 9654937303069491231LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4021 = 421;
	uint16_t x4022 = 4U;
	volatile int64_t x4023 = INT64_MIN;
	volatile int8_t x4024 = -1;

	t61 = (((x4021<<x4022)+x4023)|x4024);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4033 = 1;
	uint64_t x4034 = 1LLU;
	int8_t x4035 = INT8_MIN;
	volatile int64_t x4036 = -1LL;
	volatile int64_t t62 = -252001908LL;

	t62 = (((x4033<<x4034)+x4035)|x4036);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x4101 = 0U;
	uint16_t x4102 = 3U;
	volatile int8_t x4103 = -7;
	volatile int32_t t63 = -2131;

	t63 = (((x4101<<x4102)+x4103)|x4104);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x4157 = 27433U;
	volatile int64_t t64 = INT64_MAX;

	t64 = (((x4157<<x4158)+x4159)|x4160);

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4253 = INT32_MAX;
	int8_t x4254 = 0;
	uint64_t x4255 = 30649LLU;
	volatile int8_t x4256 = INT8_MIN;
	static volatile uint64_t t65 = 8436213896548LLU;

	t65 = (((x4253<<x4254)+x4255)|x4256);

	if (t65 != 18446744073709551544LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4325 = INT32_MAX;
	uint8_t x4326 = 0U;
	int16_t x4327 = INT16_MIN;
	int16_t x4328 = -680;
	int32_t t66 = -4;

	t66 = (((x4325<<x4326)+x4327)|x4328);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4333 = 4590239U;
	int32_t x4334 = 1;
	int16_t x4335 = INT16_MAX;
	int16_t x4336 = -1;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = (((x4333<<x4334)+x4335)|x4336);

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4369 = UINT32_MAX;
	int32_t x4370 = 1;
	uint16_t x4371 = 197U;
	int64_t x4372 = INT64_MIN;
	static volatile int64_t t68 = 210018207648773857LL;

	t68 = (((x4369<<x4370)+x4371)|x4372);

	if (t68 != -9223372036854775613LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4373 = 60;
	static uint8_t x4376 = 18U;
	int32_t t69 = 41657;

	t69 = (((x4373<<x4374)+x4375)|x4376);

	if (t69 != 511) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4401 = 2U;
	static uint32_t x4402 = 13U;
	int64_t x4403 = 108664907LL;
	uint64_t x4404 = 472945851LLU;
	volatile uint64_t t70 = 1917228531LLU;

	t70 = (((x4401<<x4402)+x4403)|x4404);

	if (t70 != 511368443LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4481 = UINT64_MAX;
	uint16_t x4483 = 21664U;
	uint64_t x4484 = 10985LLU;
	uint64_t t71 = 225046466323952LLU;

	t71 = (((x4481<<x4482)+x4483)|x4484);

	if (t71 != 18446744073441148649LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4553 = 8030LLU;
	int8_t x4554 = 0;
	int32_t x4555 = -1;
	volatile uint32_t x4556 = 641U;
	uint64_t t72 = 318457349157685787LLU;

	t72 = (((x4553<<x4554)+x4555)|x4556);

	if (t72 != 8157LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4605 = 1375U;
	int32_t x4608 = -1;
	int64_t t73 = -178361610LL;

	t73 = (((x4605<<x4606)+x4607)|x4608);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4701 = INT16_MAX;
	static uint8_t x4703 = 93U;
	int64_t x4704 = -1LL;
	static volatile int64_t t74 = 7822539830561956LL;

	t74 = (((x4701<<x4702)+x4703)|x4704);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4893 = 90U;
	uint16_t x4894 = 20U;
	uint64_t x4895 = UINT64_MAX;
	static uint64_t x4896 = 106867591134LLU;
	uint64_t t75 = 47407LLU;

	t75 = (((x4893<<x4894)+x4895)|x4896);

	if (t75 != 106935877631LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4905 = 0;
	volatile uint64_t x4907 = 99603871428143908LLU;
	uint32_t x4908 = 6U;
	uint64_t t76 = 1752LLU;

	t76 = (((x4905<<x4906)+x4907)|x4908);

	if (t76 != 99603871428143910LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4953 = 2351;
	static int32_t x4954 = 7;
	volatile int8_t x4956 = 28;
	static int32_t t77 = -9;

	t77 = (((x4953<<x4954)+x4955)|x4956);

	if (t77 != 366463) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4985 = UINT32_MAX;
	uint8_t x4986 = 8U;
	uint16_t x4987 = 23U;
	volatile int64_t x4988 = -91813488158594364LL;
	volatile int64_t t78 = 238808284LL;

	t78 = (((x4985<<x4986)+x4987)|x4988);

	if (t78 != -91813485821820969LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x5249 = INT8_MAX;
	static uint16_t x5250 = 0U;
	int64_t x5251 = -66374820586949955LL;
	int8_t x5252 = INT8_MAX;
	volatile int64_t t79 = -2918LL;

	t79 = (((x5249<<x5250)+x5251)|x5252);

	if (t79 != -66374820586949761LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x5297 = INT16_MAX;
	volatile uint16_t x5298 = 1U;
	int8_t x5300 = 29;
	volatile uint64_t t80 = 765279590LLU;

	t80 = (((x5297<<x5298)+x5299)|x5300);

	if (t80 != 65533LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5430 = 2U;
	volatile int64_t t81 = 7188138075829435LL;

	t81 = (((x5429<<x5430)+x5431)|x5432);

	if (t81 != 767LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x5458 = 0;
	int32_t x5459 = INT32_MIN;
	volatile int64_t x5460 = INT64_MIN;
	volatile int64_t t82 = 213823676867669LL;

	t82 = (((x5457<<x5458)+x5459)|x5460);

	if (t82 != -2053667250LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x5541 = UINT64_MAX;
	uint16_t x5543 = 6U;
	static int8_t x5544 = -1;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (((x5541<<x5542)+x5543)|x5544);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5591 = UINT8_MAX;
	int16_t x5592 = -28;
	volatile int32_t t84 = -135078;

	t84 = (((x5589<<x5590)+x5591)|x5592);

	if (t84 != -17) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5609 = 21U;
	int8_t x5611 = 7;
	volatile int8_t x5612 = -7;

	t85 = (((x5609<<x5610)+x5611)|x5612);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5625 = 23;
	static int8_t x5626 = 2;
	static int8_t x5627 = -1;
	int16_t x5628 = INT16_MAX;

	t86 = (((x5625<<x5626)+x5627)|x5628);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x5733 = 1;
	uint8_t x5734 = 0U;
	volatile uint32_t x5736 = 915U;
	uint32_t t87 = 20269U;

	t87 = (((x5733<<x5734)+x5735)|x5736);

	if (t87 != 15319U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5761 = 4332758U;
	volatile uint32_t x5763 = 1701799U;
	int8_t x5764 = INT8_MAX;
	uint32_t t88 = 4U;

	t88 = (((x5761<<x5762)+x5763)|x5764);

	if (t88 != 6034559U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5789 = 2237930400295170LL;
	volatile uint16_t x5791 = 4U;

	t89 = (((x5789<<x5790)+x5791)|x5792);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5798 = 5LL;
	int16_t x5799 = INT16_MIN;

	t90 = (((x5797<<x5798)+x5799)|x5800);

	if (t90 != 4294967268U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5858 = 28;
	static uint64_t x5859 = 1890106382516LLU;
	uint64_t x5860 = 31597LLU;
	volatile uint64_t t91 = 18849273236851LLU;

	t91 = (((x5857<<x5858)+x5859)|x5860);

	if (t91 != 142056364112893LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x5894 = 17;
	int8_t x5895 = INT8_MIN;
	int16_t x5896 = INT16_MAX;
	uint64_t t92 = 1LLU;

	t92 = (((x5893<<x5894)+x5895)|x5896);

	if (t92 != 254496749649919LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5997 = UINT32_MAX;
	uint64_t x5998 = 1LLU;
	static uint64_t x6000 = 12407LLU;
	static volatile uint64_t t93 = 329444676272LLU;

	t93 = (((x5997<<x5998)+x5999)|x6000);

	if (t93 != 4294967295LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6093 = 20U;
	int16_t x6094 = 1;
	static int16_t x6095 = INT16_MAX;
	uint16_t x6096 = UINT16_MAX;
	int32_t t94 = -27021;

	t94 = (((x6093<<x6094)+x6095)|x6096);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x6169 = 9303852527LL;
	uint32_t x6170 = 0U;
	volatile int32_t x6171 = INT32_MAX;
	volatile int8_t x6172 = -1;

	t95 = (((x6169<<x6170)+x6171)|x6172);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x6233 = 0;
	int8_t x6234 = 1;
	uint32_t x6235 = 118555U;
	int32_t x6236 = INT32_MAX;

	t96 = (((x6233<<x6234)+x6235)|x6236);

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6277 = 1LLU;
	uint32_t x6279 = 112870U;
	int8_t x6280 = -1;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x6277<<x6278)+x6279)|x6280);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6334 = 0;
	int16_t x6335 = -1;
	static uint64_t x6336 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x6333<<x6334)+x6335)|x6336);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6353 = INT8_MAX;
	int64_t x6354 = 1LL;
	volatile int8_t x6355 = -1;
	uint64_t x6356 = 28876373277855236LLU;
	static uint64_t t99 = 8587478524051147002LLU;

	t99 = (((x6353<<x6354)+x6355)|x6356);

	if (t99 != 28876373277855485LLU) { NG(); } else { ; }
	
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

