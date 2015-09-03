#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x75 = 1U;
int32_t x159 = INT32_MIN;
static volatile uint64_t t1 = 836903186903875LLU;
uint64_t x167 = 125196961240LLU;
uint16_t x243 = UINT16_MAX;
static volatile uint16_t x248 = UINT16_MAX;
int8_t x446 = 0;
uint32_t t6 = 197U;
uint64_t x480 = UINT64_MAX;
uint8_t x494 = 2U;
int8_t x496 = INT8_MAX;
volatile uint32_t t9 = 2909646U;
uint8_t x566 = 16U;
volatile int16_t x731 = INT16_MAX;
int16_t x799 = INT16_MIN;
int32_t x879 = INT32_MAX;
uint64_t t15 = 12406LLU;
uint8_t x1061 = 16U;
uint16_t x1064 = UINT16_MAX;
volatile uint32_t t19 = 115459897U;
uint8_t x1462 = 2U;
volatile int32_t t24 = -1041088752;
int8_t x1761 = 62;
uint8_t x1762 = 1U;
uint16_t x1764 = 1U;
int32_t t26 = 3;
uint64_t x1901 = 144324544LLU;
static int16_t x1981 = INT16_MAX;
volatile uint16_t x2117 = 326U;
uint16_t x2121 = 0U;
volatile int64_t t31 = -19525992898563854LL;
int32_t x2183 = -1;
volatile uint64_t t33 = 75709LLU;
uint64_t x2323 = 128LLU;
uint64_t t35 = 18258762589LLU;
uint16_t x2432 = UINT16_MAX;
volatile uint64_t x2485 = 4189774329151320LLU;
int32_t x2615 = INT32_MIN;
volatile uint64_t t39 = 1694830884LLU;
volatile uint32_t x2694 = 3U;
int64_t x2695 = INT64_MAX;
volatile uint32_t x2815 = 1039292U;
int8_t x2823 = 0;
uint8_t x2833 = UINT8_MAX;
int16_t x2835 = INT16_MIN;
static int32_t t44 = -124841;
uint64_t x2921 = 2900079263LLU;
static volatile uint8_t x2926 = 24U;
uint64_t x2962 = 18LLU;
int8_t x2974 = 0;
int32_t x2975 = INT32_MAX;
static int64_t x2976 = INT64_MIN;
volatile int64_t t50 = 1157287756539241LL;
volatile int32_t t51 = 115;
static uint8_t x3105 = 45U;
int8_t x3107 = INT8_MIN;
uint8_t x3154 = 3U;
int16_t x3156 = INT16_MIN;
int64_t x3212 = INT64_MIN;
int8_t x3384 = -1;
int32_t x3467 = INT32_MIN;
static volatile int8_t x3486 = 0;
uint64_t t58 = 1732734793994026LLU;
uint16_t x3518 = 30U;
int16_t x3519 = -1;
uint8_t x3520 = UINT8_MAX;
uint8_t x3786 = 1U;
uint32_t t61 = 20U;
static uint8_t x3970 = 8U;
int64_t x3972 = INT64_MIN;
int32_t x3977 = 1989977;
volatile int8_t x3978 = 0;
int32_t x3979 = INT32_MIN;
volatile int64_t t63 = 1830975573801LL;
uint8_t x4026 = 3U;
int16_t x4031 = 4;
volatile int32_t t67 = -516083;
int16_t x4121 = INT16_MAX;
volatile int64_t x4219 = INT64_MAX;
uint32_t t72 = 1379105U;
volatile uint32_t x4334 = 3U;
uint32_t x4335 = UINT32_MAX;
static uint64_t t73 = 60082721LLU;
int8_t x4437 = INT8_MAX;
uint16_t x4438 = 15U;
static uint64_t x4440 = 1536599LLU;
uint64_t t75 = 13474164508LLU;
static volatile uint32_t x4781 = 289542U;
uint64_t x4783 = 2201716940907698761LLU;
uint64_t x4793 = 34102LLU;
uint16_t x4794 = 12U;
volatile int32_t x4796 = 22557;
int8_t x5031 = -1;
int64_t t89 = -1159672616016230LL;
static int16_t x5699 = -1;
static volatile int8_t x5718 = 13;
int8_t x5720 = INT8_MIN;
static int32_t t92 = 158980;
int8_t x5839 = 51;
volatile uint32_t t93 = 19924488U;
uint8_t x5940 = 1U;
static volatile int16_t x6014 = 20;
int64_t t97 = -157376336208LL;
int32_t x6087 = INT32_MIN;
uint8_t x6106 = 10U;
int32_t x6108 = INT32_MIN;


void f0(void) {
	static uint8_t x73 = 6U;
	int8_t x74 = 16;
	volatile int8_t x76 = -1;
	volatile uint32_t t0 = 13871U;

	t0 = ((x73>>x74)*(x75%x76));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x157 = 5241648708592258LLU;
	int8_t x158 = 1;
	static volatile int32_t x160 = -1;

	t1 = ((x157>>x158)*(x159%x160));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x165 = 0;
	uint8_t x166 = 15U;
	int16_t x168 = INT16_MIN;
	uint64_t t2 = 101243LLU;

	t2 = ((x165>>x166)*(x167%x168));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x241 = 21634941124729LLU;
	static uint16_t x242 = 8U;
	uint8_t x244 = 3U;
	volatile uint64_t t3 = 862280621669266LLU;

	t3 = ((x241>>x242)*(x243%x244));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x245 = 0U;
	uint32_t x246 = 3U;
	static int64_t x247 = -1LL;
	static int64_t t4 = -109165317682912062LL;

	t4 = ((x245>>x246)*(x247%x248));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x333 = 10;
	volatile int16_t x334 = 1;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -7883640036LL;
	volatile int64_t t5 = -2049400911325758LL;

	t5 = ((x333>>x334)*(x335%x336));

	if (t5 != -640LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x445 = 69525762U;
	int32_t x447 = INT32_MIN;
	volatile int16_t x448 = INT16_MIN;

	t6 = ((x445>>x446)*(x447%x448));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x477 = 34687621U;
	int16_t x478 = 0;
	static int32_t x479 = 7126223;
	uint64_t t7 = 3LLU;

	t7 = ((x477>>x478)*(x479%x480));

	if (t7 != 247191722585483LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x493 = 0U;
	int64_t x495 = INT64_MIN;
	volatile int64_t t8 = 268244934777763199LL;

	t8 = ((x493>>x494)*(x495%x496));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x525 = UINT16_MAX;
	uint8_t x526 = 10U;
	uint8_t x527 = UINT8_MAX;
	uint32_t x528 = 404931U;

	t9 = ((x525>>x526)*(x527%x528));

	if (t9 != 16065U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x533 = UINT32_MAX;
	static uint16_t x534 = 14U;
	uint16_t x535 = 924U;
	volatile uint16_t x536 = UINT16_MAX;
	static uint32_t t10 = 2808768U;

	t10 = ((x533>>x534)*(x535%x536));

	if (t10 != 242220132U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x565 = UINT32_MAX;
	int64_t x567 = INT64_MIN;
	int64_t x568 = -53262268LL;
	static volatile int64_t t11 = -1037474524015619LL;

	t11 = ((x565>>x566)*(x567%x568));

	if (t11 != -44191823340LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x729 = INT64_MAX;
	static int8_t x730 = 10;
	int8_t x732 = INT8_MIN;
	static int64_t t12 = -804LL;

	t12 = ((x729>>x730)*(x731%x732));

	if (t12 != 1143914305352105857LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x797 = 6U;
	int8_t x798 = 0;
	static int32_t x800 = -223299137;
	volatile uint32_t t13 = 1U;

	t13 = ((x797>>x798)*(x799%x800));

	if (t13 != 4294770688U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x877 = 261LLU;
	uint32_t x878 = 6U;
	int16_t x880 = -1;
	volatile uint64_t t14 = 2511069863340751734LLU;

	t14 = ((x877>>x878)*(x879%x880));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x913 = 40736992751LLU;
	uint8_t x914 = 11U;
	volatile uint8_t x915 = 1U;
	int16_t x916 = -1;

	t15 = ((x913>>x914)*(x915%x916));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1062 = 11LLU;
	static volatile int64_t x1063 = INT64_MAX;
	static volatile int64_t t16 = 57545515522LL;

	t16 = ((x1061>>x1062)*(x1063%x1064));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1121 = 490932616201LL;
	int8_t x1122 = 1;
	uint64_t x1123 = UINT64_MAX;
	static int8_t x1124 = INT8_MIN;
	uint64_t t17 = 4065LLU;

	t17 = ((x1121>>x1122)*(x1123%x1124));

	if (t17 != 31174221128700LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1165 = 7U;
	uint32_t x1166 = 13U;
	uint32_t x1167 = 513432U;
	int64_t x1168 = INT64_MAX;
	int64_t t18 = 57726697478987LL;

	t18 = ((x1165>>x1166)*(x1167%x1168));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1205 = 10U;
	uint8_t x1206 = 6U;
	static uint16_t x1207 = 904U;
	int32_t x1208 = 625954;

	t19 = ((x1205>>x1206)*(x1207%x1208));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1433 = 97U;
	uint16_t x1434 = 0U;
	volatile int16_t x1435 = -685;
	volatile uint16_t x1436 = 4006U;
	volatile int32_t t20 = -39;

	t20 = ((x1433>>x1434)*(x1435%x1436));

	if (t20 != -66445) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1437 = INT8_MAX;
	volatile int16_t x1438 = 5;
	int8_t x1439 = INT8_MIN;
	uint8_t x1440 = 1U;
	volatile int32_t t21 = 1;

	t21 = ((x1437>>x1438)*(x1439%x1440));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1461 = 43390U;
	volatile uint64_t x1463 = 253788LLU;
	static volatile int64_t x1464 = INT64_MIN;
	volatile uint64_t t22 = 158LLU;

	t22 = ((x1461>>x1462)*(x1463%x1464));

	if (t22 != 2752838436LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1481 = 176087842105LL;
	uint8_t x1482 = 24U;
	int64_t x1483 = -1LL;
	int64_t x1484 = -1LL;
	volatile int64_t t23 = -300515530LL;

	t23 = ((x1481>>x1482)*(x1483%x1484));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1589 = 1U;
	uint8_t x1590 = 3U;
	int8_t x1591 = INT8_MIN;
	volatile int16_t x1592 = 3;

	t24 = ((x1589>>x1590)*(x1591%x1592));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1745 = UINT16_MAX;
	int16_t x1746 = 3;
	static volatile int64_t x1747 = INT64_MAX;
	volatile int8_t x1748 = -1;
	volatile int64_t t25 = 841788438073LL;

	t25 = ((x1745>>x1746)*(x1747%x1748));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1763 = -1;

	t26 = ((x1761>>x1762)*(x1763%x1764));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1889 = INT64_MAX;
	int8_t x1890 = 49;
	volatile int64_t x1891 = INT64_MIN;
	uint64_t x1892 = 881018830LLU;
	static volatile uint64_t t27 = 4656577LLU;

	t27 = ((x1889>>x1890)*(x1891%x1892));

	if (t27 != 2031789318684LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1902 = 0U;
	uint16_t x1903 = 15165U;
	volatile int8_t x1904 = INT8_MAX;
	uint64_t t28 = 5875657LLU;

	t28 = ((x1901>>x1902)*(x1903%x1904));

	if (t28 != 7504876288LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1982 = 11U;
	static uint64_t x1983 = 494274859965LLU;
	int8_t x1984 = -1;
	volatile uint64_t t29 = 2LLU;

	t29 = ((x1981>>x1982)*(x1983%x1984));

	if (t29 != 7414122899475LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2118 = 8;
	static int16_t x2119 = 1026;
	int64_t x2120 = 6LL;
	static int64_t t30 = -121475790828403LL;

	t30 = ((x2117>>x2118)*(x2119%x2120));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2122 = 12U;
	int64_t x2123 = INT64_MIN;
	int64_t x2124 = INT64_MIN;

	t31 = ((x2121>>x2122)*(x2123%x2124));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2169 = 0U;
	static uint32_t x2170 = 1U;
	int64_t x2171 = INT64_MAX;
	int16_t x2172 = INT16_MIN;
	volatile int64_t t32 = -31662757416014841LL;

	t32 = ((x2169>>x2170)*(x2171%x2172));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2181 = INT64_MAX;
	int32_t x2182 = 8;
	uint64_t x2184 = 29831LLU;

	t33 = ((x2181>>x2182)*(x2183%x2184));

	if (t33 != 4035225266123959696LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2321 = INT32_MAX;
	int32_t x2322 = 4;
	volatile int32_t x2324 = INT32_MIN;
	uint64_t t34 = 1351LLU;

	t34 = ((x2321>>x2322)*(x2323%x2324));

	if (t34 != 17179869056LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2417 = UINT64_MAX;
	uint8_t x2418 = 1U;
	static int8_t x2419 = INT8_MAX;
	int16_t x2420 = 23;

	t35 = ((x2417>>x2418)*(x2419%x2420));

	if (t35 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2429 = UINT16_MAX;
	uint16_t x2430 = 11U;
	static int32_t x2431 = INT32_MIN;
	int32_t t36 = -3644216;

	t36 = ((x2429>>x2430)*(x2431%x2432));

	if (t36 != -1015808) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2486 = 4U;
	static uint64_t x2487 = 2936630487LLU;
	uint16_t x2488 = 139U;
	volatile uint64_t t37 = 59813505LLU;

	t37 = ((x2485>>x2486)*(x2487%x2488));

	if (t37 != 1309304477859785LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2573 = 0;
	uint16_t x2574 = 25U;
	int32_t x2575 = INT32_MAX;
	uint32_t x2576 = UINT32_MAX;
	uint32_t t38 = 39404661U;

	t38 = ((x2573>>x2574)*(x2575%x2576));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2613 = 37;
	volatile int16_t x2614 = 10;
	uint64_t x2616 = 1539982987328351LLU;

	t39 = ((x2613>>x2614)*(x2615%x2616));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2633 = 6U;
	static uint64_t x2634 = 1LLU;
	uint16_t x2635 = 3U;
	int8_t x2636 = INT8_MAX;
	int32_t t40 = 2006966;

	t40 = ((x2633>>x2634)*(x2635%x2636));

	if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x2693 = INT32_MAX;
	uint32_t x2696 = UINT32_MAX;
	volatile int64_t t41 = 1808143246217421544LL;

	t41 = ((x2693>>x2694)*(x2695%x2696));

	if (t41 != 576460749887504385LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2813 = 224596351U;
	volatile int16_t x2814 = 0;
	int16_t x2816 = INT16_MIN;
	volatile uint32_t t42 = 218211533U;

	t42 = ((x2813>>x2814)*(x2815%x2816));

	if (t42 != 2603187780U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2821 = 56U;
	int8_t x2822 = 0;
	int8_t x2824 = -1;
	int32_t t43 = 100448;

	t43 = ((x2821>>x2822)*(x2823%x2824));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2834 = 0U;
	uint16_t x2836 = UINT16_MAX;

	t44 = ((x2833>>x2834)*(x2835%x2836));

	if (t44 != -8355840) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x2841 = UINT8_MAX;
	volatile uint16_t x2842 = 31U;
	int32_t x2843 = -1;
	int16_t x2844 = INT16_MIN;
	int32_t t45 = -3;

	t45 = ((x2841>>x2842)*(x2843%x2844));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x2901 = 616902658088LL;
	uint32_t x2902 = 58U;
	uint64_t x2903 = UINT64_MAX;
	int32_t x2904 = -1;
	uint64_t t46 = 41311393221158LLU;

	t46 = ((x2901>>x2902)*(x2903%x2904));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x2922 = 3;
	int16_t x2923 = -1;
	volatile uint16_t x2924 = UINT16_MAX;
	uint64_t t47 = 1866595538LLU;

	t47 = ((x2921>>x2922)*(x2923%x2924));

	if (t47 != 18446744073347041709LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2925 = 1446U;
	uint8_t x2927 = UINT8_MAX;
	volatile int32_t x2928 = -43590958;
	volatile uint32_t t48 = 25576363U;

	t48 = ((x2925>>x2926)*(x2927%x2928));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x2961 = INT16_MAX;
	int8_t x2963 = -1;
	uint8_t x2964 = UINT8_MAX;
	int32_t t49 = 16;

	t49 = ((x2961>>x2962)*(x2963%x2964));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2973 = 259023U;

	t50 = ((x2973>>x2974)*(x2975%x2976));

	if (t50 != 556247656696881LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2989 = INT8_MAX;
	static uint16_t x2990 = 16U;
	volatile int8_t x2991 = -1;
	static volatile uint16_t x2992 = 42U;

	t51 = ((x2989>>x2990)*(x2991%x2992));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3106 = 16U;
	int32_t x3108 = INT32_MIN;
	int32_t t52 = 6864401;

	t52 = ((x3105>>x3106)*(x3107%x3108));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3153 = 124;
	int16_t x3155 = -7507;
	int32_t t53 = 242609;

	t53 = ((x3153>>x3154)*(x3155%x3156));

	if (t53 != -112605) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3209 = UINT32_MAX;
	int8_t x3210 = 22;
	int64_t x3211 = -1LL;
	static volatile int64_t t54 = -384LL;

	t54 = ((x3209>>x3210)*(x3211%x3212));

	if (t54 != -1023LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3365 = UINT8_MAX;
	uint8_t x3366 = 0U;
	static int16_t x3367 = INT16_MIN;
	static volatile int16_t x3368 = 4409;
	int32_t t55 = -8310;

	t55 = ((x3365>>x3366)*(x3367%x3368));

	if (t55 != -485775) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3381 = 454126317760LLU;
	uint32_t x3382 = 25U;
	int32_t x3383 = INT32_MIN;
	volatile uint64_t t56 = 4613274437604164391LLU;

	t56 = ((x3381>>x3382)*(x3383%x3384));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3465 = UINT16_MAX;
	volatile uint64_t x3466 = 1LLU;
	int32_t x3468 = INT32_MAX;
	int32_t t57 = -14887548;

	t57 = ((x3465>>x3466)*(x3467%x3468));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3485 = 4949809876886254599LLU;
	uint16_t x3487 = 8138U;
	int64_t x3488 = 65687514463989760LL;

	t58 = ((x3485>>x3486)*(x3487%x3488));

	if (t58 != 12310465192388748934LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3517 = 14U;
	volatile int32_t t59 = -116;

	t59 = ((x3517>>x3518)*(x3519%x3520));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3785 = UINT16_MAX;
	volatile int16_t x3787 = 3;
	int16_t x3788 = INT16_MIN;
	int32_t t60 = -2063634;

	t60 = ((x3785>>x3786)*(x3787%x3788));

	if (t60 != 98301) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3881 = 2U;
	int8_t x3882 = 1;
	uint32_t x3883 = 1009880U;
	int16_t x3884 = INT16_MIN;

	t61 = ((x3881>>x3882)*(x3883%x3884));

	if (t61 != 1009880U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x3969 = UINT8_MAX;
	volatile int32_t x3971 = -1;
	volatile int64_t t62 = 625959989727749775LL;

	t62 = ((x3969>>x3970)*(x3971%x3972));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x3980 = INT64_MIN;

	t63 = ((x3977>>x3978)*(x3979%x3980));

	if (t63 != -4273443067396096LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4005 = 0U;
	int8_t x4006 = 28;
	static uint32_t x4007 = 118816U;
	uint32_t x4008 = UINT32_MAX;
	uint32_t t64 = 1416376U;

	t64 = ((x4005>>x4006)*(x4007%x4008));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4021 = 26U;
	static int32_t x4022 = 7;
	int32_t x4023 = INT32_MIN;
	int64_t x4024 = 254256680952841LL;
	int64_t t65 = 1541981391506491LL;

	t65 = ((x4021>>x4022)*(x4023%x4024));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4025 = INT8_MAX;
	volatile uint16_t x4027 = 17522U;
	uint32_t x4028 = 8U;
	volatile uint32_t t66 = 730523229U;

	t66 = ((x4025>>x4026)*(x4027%x4028));

	if (t66 != 30U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x4029 = 3869U;
	volatile uint16_t x4030 = 7U;
	int16_t x4032 = 1;

	t67 = ((x4029>>x4030)*(x4031%x4032));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4033 = 347205602;
	uint16_t x4034 = 25U;
	volatile int16_t x4035 = 1;
	int32_t x4036 = INT32_MIN;
	int32_t t68 = -34958179;

	t68 = ((x4033>>x4034)*(x4035%x4036));

	if (t68 != 10) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x4097 = 1;
	int8_t x4098 = 0;
	int32_t x4099 = INT32_MIN;
	int64_t x4100 = -4434751527268LL;
	int64_t t69 = -334149001368890204LL;

	t69 = ((x4097>>x4098)*(x4099%x4100));

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4122 = 1U;
	int32_t x4123 = -18;
	static int16_t x4124 = -217;
	int32_t t70 = -10;

	t70 = ((x4121>>x4122)*(x4123%x4124));

	if (t70 != -294894) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4217 = INT8_MAX;
	static uint8_t x4218 = 20U;
	int64_t x4220 = -1LL;
	volatile int64_t t71 = 1LL;

	t71 = ((x4217>>x4218)*(x4219%x4220));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4237 = 24U;
	uint8_t x4238 = 1U;
	uint32_t x4239 = 14428647U;
	uint16_t x4240 = 3U;

	t72 = ((x4237>>x4238)*(x4239%x4240));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4333 = 0U;
	uint64_t x4336 = UINT64_MAX;

	t73 = ((x4333>>x4334)*(x4335%x4336));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4385 = UINT32_MAX;
	volatile int32_t x4386 = 0;
	int8_t x4387 = INT8_MIN;
	volatile int64_t x4388 = INT64_MIN;
	volatile int64_t t74 = 2518387094LL;

	t74 = ((x4385>>x4386)*(x4387%x4388));

	if (t74 != -549755813760LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x4439 = 0U;

	t75 = ((x4437>>x4438)*(x4439%x4440));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4645 = 2U;
	uint8_t x4646 = 0U;
	static uint32_t x4647 = 4605U;
	volatile uint16_t x4648 = 133U;
	volatile uint32_t t76 = 248U;

	t76 = ((x4645>>x4646)*(x4647%x4648));

	if (t76 != 166U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4782 = 4U;
	uint32_t x4784 = 1U;
	uint64_t t77 = 1594059864950LLU;

	t77 = ((x4781>>x4782)*(x4783%x4784));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4795 = 0U;
	volatile uint64_t t78 = 4949819916061032625LLU;

	t78 = ((x4793>>x4794)*(x4795%x4796));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4809 = UINT16_MAX;
	uint8_t x4810 = 2U;
	static int8_t x4811 = -3;
	volatile int64_t x4812 = INT64_MAX;
	static volatile int64_t t79 = 1269LL;

	t79 = ((x4809>>x4810)*(x4811%x4812));

	if (t79 != -49149LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x4813 = 15855;
	uint8_t x4814 = 0U;
	uint16_t x4815 = 30053U;
	int8_t x4816 = INT8_MIN;
	int32_t t80 = 257;

	t80 = ((x4813>>x4814)*(x4815%x4816));

	if (t80 != 1601355) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5029 = 5469;
	int16_t x5030 = 1;
	int16_t x5032 = INT16_MAX;
	volatile int32_t t81 = 191;

	t81 = ((x5029>>x5030)*(x5031%x5032));

	if (t81 != -2734) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5105 = INT16_MAX;
	uint8_t x5106 = 0U;
	int32_t x5107 = -1;
	uint8_t x5108 = 5U;
	volatile int32_t t82 = 89;

	t82 = ((x5105>>x5106)*(x5107%x5108));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5325 = 52U;
	int8_t x5326 = 24;
	uint64_t x5327 = 26644786LLU;
	static int32_t x5328 = -1;
	static uint64_t t83 = 161514001655739184LLU;

	t83 = ((x5325>>x5326)*(x5327%x5328));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5373 = UINT8_MAX;
	int8_t x5374 = 1;
	uint32_t x5375 = 404965U;
	volatile int32_t x5376 = INT32_MIN;
	uint32_t t84 = 2380611U;

	t84 = ((x5373>>x5374)*(x5375%x5376));

	if (t84 != 51430555U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x5401 = 1295U;
	int16_t x5402 = 1;
	int64_t x5403 = INT64_MIN;
	int8_t x5404 = -1;
	int64_t t85 = 183671883593LL;

	t85 = ((x5401>>x5402)*(x5403%x5404));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5481 = INT8_MAX;
	int16_t x5482 = 1;
	int32_t x5483 = INT32_MAX;
	int64_t x5484 = INT64_MAX;
	static volatile int64_t t86 = 4LL;

	t86 = ((x5481>>x5482)*(x5483%x5484));

	if (t86 != 135291469761LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x5489 = 111U;
	uint16_t x5490 = 6U;
	static uint32_t x5491 = UINT32_MAX;
	uint16_t x5492 = UINT16_MAX;
	uint32_t t87 = 2416U;

	t87 = ((x5489>>x5490)*(x5491%x5492));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5505 = 0U;
	uint8_t x5506 = 14U;
	int64_t x5507 = INT64_MAX;
	int64_t x5508 = INT64_MIN;
	int64_t t88 = -1571771447700LL;

	t88 = ((x5505>>x5506)*(x5507%x5508));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x5529 = 170894127700643LL;
	uint8_t x5530 = 2U;
	volatile uint16_t x5531 = 6458U;
	int32_t x5532 = -3;

	t89 = ((x5529>>x5530)*(x5531%x5532));

	if (t89 != 85447063850320LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5697 = 7748716358LLU;
	int16_t x5698 = 0;
	volatile uint8_t x5700 = 89U;
	static volatile uint64_t t90 = 26743605354LLU;

	t90 = ((x5697>>x5698)*(x5699%x5700));

	if (t90 != 18446744065960835258LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5717 = INT16_MAX;
	int16_t x5719 = INT16_MAX;
	int32_t t91 = -4;

	t91 = ((x5717>>x5718)*(x5719%x5720));

	if (t91 != 381) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5813 = 3358;
	uint8_t x5814 = 2U;
	int32_t x5815 = INT32_MIN;
	int32_t x5816 = -12;

	t92 = ((x5813>>x5814)*(x5815%x5816));

	if (t92 != -6712) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5837 = 109U;
	uint8_t x5838 = 27U;
	int32_t x5840 = INT32_MIN;

	t93 = ((x5837>>x5838)*(x5839%x5840));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5937 = INT64_MAX;
	uint8_t x5938 = 12U;
	uint32_t x5939 = 3118U;
	int64_t t94 = -20515870420676613LL;

	t94 = ((x5937>>x5938)*(x5939%x5940));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5949 = 96511;
	volatile int16_t x5950 = 1;
	uint32_t x5951 = 54257425U;
	static int64_t x5952 = INT64_MIN;
	int64_t t95 = 29645605987LL;

	t95 = ((x5949>>x5950)*(x5951%x5952));

	if (t95 != 2618192043375LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x5973 = UINT32_MAX;
	uint64_t x5974 = 0LLU;
	int8_t x5975 = INT8_MAX;
	int32_t x5976 = INT32_MIN;
	volatile uint32_t t96 = 2U;

	t96 = ((x5973>>x5974)*(x5975%x5976));

	if (t96 != 4294967169U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6013 = INT32_MAX;
	volatile int64_t x6015 = INT64_MIN;
	uint8_t x6016 = UINT8_MAX;

	t97 = ((x6013>>x6014)*(x6015%x6016));

	if (t97 != -262016LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x6085 = UINT16_MAX;
	int64_t x6086 = 7LL;
	static volatile int16_t x6088 = INT16_MIN;
	int32_t t98 = 10228008;

	t98 = ((x6085>>x6086)*(x6087%x6088));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6105 = UINT8_MAX;
	uint64_t x6107 = UINT64_MAX;
	uint64_t t99 = 369730396819785431LLU;

	t99 = ((x6105>>x6106)*(x6107%x6108));

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

