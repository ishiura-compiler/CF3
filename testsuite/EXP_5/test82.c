#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x20 = 2U;
volatile int64_t t1 = 3191640552279201922LL;
volatile int64_t x174 = INT64_MAX;
volatile int8_t x176 = 18;
volatile uint64_t t3 = 1855488511LLU;
int64_t x421 = INT64_MIN;
uint16_t x424 = 9U;
static volatile int32_t x669 = INT32_MAX;
uint64_t t6 = 166LLU;
int16_t x748 = 0;
int32_t x890 = INT32_MAX;
int8_t x906 = INT8_MIN;
int32_t x907 = INT32_MAX;
int8_t x981 = -26;
static volatile uint64_t x983 = 2766706159619LLU;
static volatile uint64_t t13 = 32537161279LLU;
volatile uint64_t t19 = 90558379867LLU;
uint32_t x1362 = 140986923U;
volatile int32_t t21 = 5165188;
int16_t x1489 = INT16_MAX;
int32_t x1700 = 0;
volatile uint8_t x1720 = 2U;
uint8_t x1793 = 5U;
static volatile int8_t x1849 = INT8_MAX;
int8_t x1850 = INT8_MIN;
uint16_t x1883 = UINT16_MAX;
static uint8_t x1984 = 20U;
uint8_t x1989 = 1U;
int16_t x1990 = -1;
volatile int32_t t29 = 0;
static uint16_t x2084 = 7U;
uint8_t x2156 = 3U;
uint16_t x2323 = UINT16_MAX;
static int8_t x2410 = -1;
volatile uint16_t x2431 = 875U;
int16_t x2432 = 0;
uint32_t x2446 = 349U;
volatile uint8_t x2447 = 3U;
uint16_t x2531 = 9U;
volatile int8_t x2589 = INT8_MIN;
int16_t x2591 = INT16_MIN;
int64_t t40 = -1LL;
static int8_t x2604 = 15;
volatile uint64_t t41 = 125352762LLU;
static uint16_t x2613 = 23948U;
uint32_t t42 = 6338274U;
static uint8_t x2713 = 2U;
static int16_t x2715 = INT16_MIN;
uint32_t t43 = 3U;
int16_t x2847 = INT16_MIN;
uint8_t x2867 = UINT8_MAX;
int32_t t45 = -2046;
static uint16_t x2885 = 0U;
int8_t x2887 = INT8_MIN;
static uint64_t x2897 = 26LLU;
static int64_t x2898 = -1LL;
volatile int64_t x2913 = INT64_MAX;
int8_t x2916 = 0;
int64_t t48 = 90LL;
static volatile uint32_t t49 = 12271U;
uint32_t x3299 = UINT32_MAX;
static int8_t x3312 = 0;
int8_t x3437 = -1;
volatile int32_t x3442 = INT32_MAX;
int8_t x3534 = INT8_MAX;
uint64_t x3535 = 460LLU;
uint8_t x3538 = UINT8_MAX;
static uint64_t t59 = 5650LLU;
uint32_t x3653 = 0U;
static volatile int32_t x3654 = INT32_MIN;
uint64_t x3655 = UINT64_MAX;
volatile uint8_t x3701 = UINT8_MAX;
int16_t x3842 = -11;
int64_t t64 = -3594LL;
volatile int64_t x3991 = 25LL;
static int8_t x4095 = -1;
int8_t x4096 = 4;
volatile uint16_t x4152 = 57U;
int8_t x4247 = -63;
uint64_t t71 = 31LLU;
int8_t x4345 = -1;
volatile int8_t x4357 = INT8_MIN;
uint16_t x4666 = 0U;
volatile uint64_t x4761 = 137539311951558LLU;
uint64_t t77 = 24008730704862LLU;
volatile int8_t x4818 = INT8_MIN;
uint64_t x5033 = UINT64_MAX;
int16_t x5036 = 0;
volatile uint64_t t79 = 2713511540149462684LLU;
uint16_t x5051 = 29471U;
volatile uint16_t x5052 = 5U;
volatile int32_t t80 = 0;
volatile uint64_t x5150 = 0LLU;
uint64_t t81 = 804LLU;
int64_t x5249 = -2LL;
int16_t x5266 = INT16_MIN;
int64_t t86 = 0LL;
uint64_t x5317 = 3432386LLU;
int8_t x5326 = INT8_MIN;
int32_t x5327 = INT32_MAX;
int16_t x5341 = -222;
int16_t x5393 = INT16_MIN;
int64_t x5427 = INT64_MAX;
static volatile uint16_t x5497 = 0U;
int64_t x5499 = -1LL;
static uint16_t x5512 = 3U;
static uint16_t x5586 = UINT16_MAX;
volatile uint32_t x5587 = 183426060U;
volatile int8_t x5632 = 1;
int64_t x5729 = INT64_MAX;
uint32_t x5735 = UINT32_MAX;
int32_t x5758 = -1;
volatile int64_t t98 = 38LL;
uint16_t x5796 = 3U;


void f0(void) {
	static int64_t x17 = INT64_MIN;
	uint32_t x18 = 632258427U;
	int32_t x19 = -1;
	volatile int64_t t0 = -30572361939LL;

	t0 = (x17/((x18+x19)>>x20));

	if (t0 != -58351912362LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x141 = INT16_MIN;
	int8_t x142 = -1;
	int64_t x143 = INT64_MAX;
	uint16_t x144 = 22U;

	t1 = (x141/((x142+x143)>>x144));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x173 = 12;
	static int16_t x175 = INT16_MIN;
	int64_t t2 = -7699444903949LL;

	t2 = (x173/((x174+x175)>>x176));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x313 = UINT32_MAX;
	int16_t x314 = INT16_MAX;
	uint64_t x315 = 41882862LLU;
	uint16_t x316 = 1U;

	t3 = (x313/((x314+x315)>>x316));

	if (t3 != 204LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x422 = 0;
	static volatile int16_t x423 = INT16_MAX;
	int64_t t4 = 15LL;

	t4 = (x421/((x422+x423)>>x424));

	if (t4 != -146402730743726600LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x613 = INT64_MIN;
	volatile int32_t x614 = -1;
	uint32_t x615 = 23U;
	uint16_t x616 = 0U;
	int64_t t5 = 729LL;

	t5 = (x613/((x614+x615)>>x616));

	if (t5 != -419244183493398900LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x670 = 6719391LLU;
	int16_t x671 = -49;
	int16_t x672 = 10;

	t6 = (x669/((x670+x671)>>x672));

	if (t6 != 327310LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x745 = -1;
	volatile int32_t x746 = INT32_MIN;
	uint32_t x747 = 285037U;
	static uint32_t t7 = 122699U;

	t7 = (x745/((x746+x747)>>x748));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x765 = -1;
	static int64_t x766 = 69553361512257001LL;
	static int16_t x767 = 1653;
	volatile uint8_t x768 = 1U;
	int64_t t8 = -968711501741137926LL;

	t8 = (x765/((x766+x767)>>x768));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x781 = UINT8_MAX;
	uint64_t x782 = 1626838861808449LLU;
	uint16_t x783 = UINT16_MAX;
	uint64_t x784 = 22LLU;
	uint64_t t9 = 70094116603268388LLU;

	t9 = (x781/((x782+x783)>>x784));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x869 = INT8_MAX;
	static volatile uint32_t x870 = 5587U;
	volatile uint64_t x871 = UINT64_MAX;
	int32_t x872 = 0;
	volatile uint64_t t10 = 2608761LLU;

	t10 = (x869/((x870+x871)>>x872));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x889 = 0U;
	uint32_t x891 = 7275U;
	int16_t x892 = 0;
	uint32_t t11 = 143890U;

	t11 = (x889/((x890+x891)>>x892));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x905 = INT64_MAX;
	uint8_t x908 = 1U;
	int64_t t12 = 8872424539LL;

	t12 = (x905/((x906+x907)>>x908));

	if (t12 != 8589935112LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x982 = -41;
	uint8_t x984 = 10U;

	t13 = (x981/((x982+x983)>>x984));

	if (t13 != 6827420350LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1021 = 119U;
	uint64_t x1022 = UINT64_MAX;
	uint16_t x1023 = UINT16_MAX;
	uint16_t x1024 = 7U;
	volatile uint64_t t14 = 207LLU;

	t14 = (x1021/((x1022+x1023)>>x1024));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1041 = INT8_MIN;
	uint64_t x1042 = 127061538709LLU;
	uint32_t x1043 = UINT32_MAX;
	uint64_t x1044 = 31LLU;
	uint64_t t15 = 16603321525LLU;

	t15 = (x1041/((x1042+x1043)>>x1044));

	if (t15 != 302405640552615598LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x1093 = INT32_MIN;
	uint16_t x1094 = 23858U;
	int8_t x1095 = -1;
	volatile uint8_t x1096 = 8U;
	static volatile int32_t t16 = -52980749;

	t16 = (x1093/((x1094+x1095)>>x1096));

	if (t16 != -23091222) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1145 = 0U;
	int64_t x1146 = 856486663323760542LL;
	int32_t x1147 = INT32_MIN;
	int8_t x1148 = 5;
	int64_t t17 = 226734LL;

	t17 = (x1145/((x1146+x1147)>>x1148));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1301 = UINT16_MAX;
	static volatile uint16_t x1302 = 13311U;
	int16_t x1303 = INT16_MAX;
	uint8_t x1304 = 3U;
	volatile int32_t t18 = 3;

	t18 = (x1301/((x1302+x1303)>>x1304));

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1341 = 356LL;
	static uint64_t x1342 = 10107315670LLU;
	uint8_t x1343 = 40U;
	uint8_t x1344 = 6U;

	t19 = (x1341/((x1342+x1343)>>x1344));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1361 = -1;
	static int64_t x1363 = -4973920LL;
	static int16_t x1364 = 5;
	volatile int64_t t20 = -51211724413651615LL;

	t20 = (x1361/((x1362+x1363)>>x1364));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1397 = UINT8_MAX;
	static int8_t x1398 = 21;
	int32_t x1399 = -3;
	uint8_t x1400 = 0U;

	t21 = (x1397/((x1398+x1399)>>x1400));

	if (t21 != 14) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1490 = 248847769LL;
	int32_t x1491 = -1;
	uint8_t x1492 = 1U;
	volatile int64_t t22 = -8731734882080LL;

	t22 = (x1489/((x1490+x1491)>>x1492));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1697 = INT32_MAX;
	static int32_t x1698 = INT32_MAX;
	static uint64_t x1699 = UINT64_MAX;
	uint64_t t23 = 435982374597887364LLU;

	t23 = (x1697/((x1698+x1699)>>x1700));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1717 = INT64_MAX;
	static int16_t x1718 = INT16_MAX;
	int16_t x1719 = INT16_MAX;
	int64_t t24 = -3975LL;

	t24 = (x1717/((x1718+x1719)>>x1720));

	if (t24 != 562984315256960LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1794 = INT32_MAX;
	int8_t x1795 = INT8_MIN;
	int8_t x1796 = 1;
	volatile int32_t t25 = -29;

	t25 = (x1793/((x1794+x1795)>>x1796));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1851 = 1204;
	uint8_t x1852 = 0U;
	volatile int32_t t26 = -10;

	t26 = (x1849/((x1850+x1851)>>x1852));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1881 = -1659898276206LL;
	uint64_t x1882 = UINT64_MAX;
	int8_t x1884 = 3;
	uint64_t t27 = 163LLU;

	t27 = (x1881/((x1882+x1883)>>x1884));

	if (t27 != 2252074522501681LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1981 = INT32_MIN;
	uint64_t x1982 = 135108856028652453LLU;
	volatile int16_t x1983 = INT16_MAX;
	volatile uint64_t t28 = 14184405LLU;

	t28 = (x1981/((x1982+x1983)>>x1984));

	if (t28 != 143164657LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1991 = 3973U;
	int8_t x1992 = 2;

	t29 = (x1989/((x1990+x1991)>>x1992));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2081 = UINT16_MAX;
	int32_t x2082 = INT32_MIN;
	volatile uint32_t x2083 = 14721U;
	volatile uint32_t t30 = 608347977U;

	t30 = (x2081/((x2082+x2083)>>x2084));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2153 = UINT16_MAX;
	volatile uint32_t x2154 = 3742058U;
	int8_t x2155 = INT8_MIN;
	static volatile uint32_t t31 = 0U;

	t31 = (x2153/((x2154+x2155)>>x2156));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x2293 = INT8_MIN;
	static uint32_t x2294 = 23812U;
	uint64_t x2295 = 1026731528583167LLU;
	int8_t x2296 = 4;
	volatile uint64_t t32 = 10349025166LLU;

	t32 = (x2293/((x2294+x2295)>>x2296));

	if (t32 != 287463LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2321 = 85U;
	uint16_t x2322 = UINT16_MAX;
	uint8_t x2324 = 0U;
	volatile int32_t t33 = 76;

	t33 = (x2321/((x2322+x2323)>>x2324));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2333 = 76U;
	static uint16_t x2334 = 1217U;
	int16_t x2335 = INT16_MAX;
	volatile uint8_t x2336 = 2U;
	volatile int32_t t34 = 63;

	t34 = (x2333/((x2334+x2335)>>x2336));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2409 = -2765234103464684LL;
	int8_t x2411 = 23;
	volatile int8_t x2412 = 3;
	int64_t t35 = -920LL;

	t35 = (x2409/((x2410+x2411)>>x2412));

	if (t35 != -1382617051732342LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2429 = -1;
	volatile int16_t x2430 = 1;
	static volatile int32_t t36 = -6921309;

	t36 = (x2429/((x2430+x2431)>>x2432));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2445 = INT32_MAX;
	uint32_t x2448 = 1U;
	static volatile uint32_t t37 = 1U;

	t37 = (x2445/((x2446+x2447)>>x2448));

	if (t37 != 12201611U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2489 = INT16_MIN;
	int32_t x2490 = -9154;
	volatile int64_t x2491 = 1221736681688LL;
	uint16_t x2492 = 2U;
	volatile int64_t t38 = -35293412412058985LL;

	t38 = (x2489/((x2490+x2491)>>x2492));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2529 = INT64_MIN;
	uint32_t x2530 = 0U;
	int64_t x2532 = 1LL;
	volatile int64_t t39 = -24584036369LL;

	t39 = (x2529/((x2530+x2531)>>x2532));

	if (t39 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2590 = INT64_MAX;
	static uint32_t x2592 = 1U;

	t40 = (x2589/((x2590+x2591)>>x2592));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x2601 = -1;
	volatile int64_t x2602 = 6209875LL;
	volatile uint64_t x2603 = 98364853736LLU;

	t41 = (x2601/((x2602+x2603)>>x2604));

	if (t41 != 6144723989475LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2614 = -1;
	uint32_t x2615 = 0U;
	uint16_t x2616 = 30U;

	t42 = (x2613/((x2614+x2615)>>x2616));

	if (t42 != 7982U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2714 = 6548465U;
	int8_t x2716 = 0;

	t43 = (x2713/((x2714+x2715)>>x2716));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2845 = INT8_MIN;
	static int64_t x2846 = INT64_MAX;
	int8_t x2848 = 42;
	int64_t t44 = 655681033996LL;

	t44 = (x2845/((x2846+x2847)>>x2848));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2865 = UINT8_MAX;
	static volatile int8_t x2866 = INT8_MAX;
	volatile int8_t x2868 = 1;

	t45 = (x2865/((x2866+x2867)>>x2868));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x2886 = INT16_MAX;
	uint16_t x2888 = 7U;
	int32_t t46 = 14;

	t46 = (x2885/((x2886+x2887)>>x2888));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2899 = UINT8_MAX;
	uint8_t x2900 = 0U;
	uint64_t t47 = 570173165717185128LLU;

	t47 = (x2897/((x2898+x2899)>>x2900));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2914 = -1;
	static uint32_t x2915 = UINT32_MAX;

	t48 = (x2913/((x2914+x2915)>>x2916));

	if (t48 != 2147483649LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2957 = UINT16_MAX;
	volatile uint32_t x2958 = 1901U;
	volatile uint8_t x2959 = 0U;
	int8_t x2960 = 0;

	t49 = (x2957/((x2958+x2959)>>x2960));

	if (t49 != 34U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3005 = -1;
	volatile int16_t x3006 = INT16_MIN;
	int32_t x3007 = INT32_MAX;
	int32_t x3008 = 28;
	int32_t t50 = -22;

	t50 = (x3005/((x3006+x3007)>>x3008));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3273 = 4U;
	uint16_t x3274 = UINT16_MAX;
	uint32_t x3275 = UINT32_MAX;
	int32_t x3276 = 0;
	uint32_t t51 = 5977372U;

	t51 = (x3273/((x3274+x3275)>>x3276));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3297 = 108;
	int16_t x3298 = -1;
	int64_t x3300 = 2LL;
	uint32_t t52 = 10572175U;

	t52 = (x3297/((x3298+x3299)>>x3300));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3309 = -23;
	static uint64_t x3310 = 14738062588655569LLU;
	int64_t x3311 = 1787LL;
	uint64_t t53 = 6282528361LLU;

	t53 = (x3309/((x3310+x3311)>>x3312));

	if (t53 != 1251LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3438 = INT32_MIN;
	static uint64_t x3439 = UINT64_MAX;
	volatile int8_t x3440 = 1;
	uint64_t t54 = 145LLU;

	t54 = (x3437/((x3438+x3439)>>x3440));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3441 = -1;
	uint32_t x3443 = 398U;
	uint16_t x3444 = 0U;
	volatile uint32_t t55 = 1828U;

	t55 = (x3441/((x3442+x3443)>>x3444));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3465 = INT64_MIN;
	volatile uint64_t x3466 = UINT64_MAX;
	int32_t x3467 = INT32_MIN;
	uint8_t x3468 = 3U;
	uint64_t t56 = 42227681113641LLU;

	t56 = (x3465/((x3466+x3467)>>x3468));

	if (t56 != 4LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3481 = INT8_MIN;
	uint16_t x3482 = UINT16_MAX;
	uint64_t x3483 = 0LLU;
	volatile int8_t x3484 = 1;
	static volatile uint64_t t57 = 257987757103LLU;

	t57 = (x3481/((x3482+x3483)>>x3484));

	if (t57 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3533 = INT32_MIN;
	static volatile uint32_t x3536 = 0U;
	uint64_t t58 = 471248997042LLU;

	t58 = (x3533/((x3534+x3535)>>x3536));

	if (t58 != 31425458384262466LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3537 = -746;
	uint64_t x3539 = UINT64_MAX;
	volatile int16_t x3540 = 1;

	t59 = (x3537/((x3538+x3539)>>x3540));

	if (t59 != 145249953336295676LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3637 = 563181696861LLU;
	int16_t x3638 = INT16_MAX;
	int16_t x3639 = INT16_MAX;
	static uint16_t x3640 = 9U;
	uint64_t t60 = 298620271254LLU;

	t60 = (x3637/((x3638+x3639)>>x3640));

	if (t60 != 4434501550LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3656 = 0U;
	uint64_t t61 = 2355403401LLU;

	t61 = (x3653/((x3654+x3655)>>x3656));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x3702 = INT64_MAX;
	int8_t x3703 = 0;
	static volatile uint8_t x3704 = 2U;
	static volatile int64_t t62 = 10553577125227103LL;

	t62 = (x3701/((x3702+x3703)>>x3704));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3841 = INT8_MAX;
	static uint32_t x3843 = UINT32_MAX;
	int8_t x3844 = 29;
	volatile uint32_t t63 = 2998U;

	t63 = (x3841/((x3842+x3843)>>x3844));

	if (t63 != 18U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x3921 = -54;
	volatile int64_t x3922 = -1LL;
	volatile int32_t x3923 = INT32_MAX;
	uint16_t x3924 = 3U;

	t64 = (x3921/((x3922+x3923)>>x3924));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3989 = 0;
	uint16_t x3990 = UINT16_MAX;
	volatile int16_t x3992 = 1;
	volatile int64_t t65 = 6LL;

	t65 = (x3989/((x3990+x3991)>>x3992));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3997 = -3;
	static int8_t x3998 = INT8_MIN;
	uint64_t x3999 = 2476142LLU;
	volatile int8_t x4000 = 0;
	static volatile uint64_t t66 = 29977804380LLU;

	t66 = (x3997/((x3998+x3999)>>x4000));

	if (t66 != 7450177613579LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4093 = -1;
	uint16_t x4094 = UINT16_MAX;
	static volatile int32_t t67 = 0;

	t67 = (x4093/((x4094+x4095)>>x4096));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4149 = 436U;
	static volatile int16_t x4150 = -1;
	int64_t x4151 = INT64_MAX;
	volatile int64_t t68 = 91756192050573565LL;

	t68 = (x4149/((x4150+x4151)>>x4152));

	if (t68 != 6LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x4245 = INT32_MAX;
	int8_t x4246 = INT8_MAX;
	int8_t x4248 = 1;
	int32_t t69 = -8943077;

	t69 = (x4245/((x4246+x4247)>>x4248));

	if (t69 != 67108863) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4321 = INT64_MAX;
	static uint32_t x4322 = 0U;
	static int8_t x4323 = INT8_MAX;
	int8_t x4324 = 0;
	volatile int64_t t70 = -9514725713LL;

	t70 = (x4321/((x4322+x4323)>>x4324));

	if (t70 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4341 = 38LL;
	int64_t x4342 = INT64_MIN;
	uint64_t x4343 = 46138317LLU;
	int8_t x4344 = 1;

	t71 = (x4341/((x4342+x4343)>>x4344));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4346 = INT8_MIN;
	uint32_t x4347 = 6141396U;
	volatile int8_t x4348 = 11;
	uint32_t t72 = 531164060U;

	t72 = (x4345/((x4346+x4347)>>x4348));

	if (t72 != 1432610U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4358 = 1325358790058LL;
	volatile int64_t x4359 = -1LL;
	uint8_t x4360 = 0U;
	int64_t t73 = -740171653834660LL;

	t73 = (x4357/((x4358+x4359)>>x4360));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4473 = 53;
	int16_t x4474 = INT16_MIN;
	uint64_t x4475 = UINT64_MAX;
	volatile int32_t x4476 = 0;
	uint64_t t74 = 32900015LLU;

	t74 = (x4473/((x4474+x4475)>>x4476));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4665 = 27460378942697095LLU;
	static int64_t x4667 = INT64_MAX;
	static volatile uint8_t x4668 = 12U;
	volatile uint64_t t75 = 6LLU;

	t75 = (x4665/((x4666+x4667)>>x4668));

	if (t75 != 12LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x4689 = UINT64_MAX;
	int16_t x4690 = INT16_MAX;
	static volatile int8_t x4691 = -24;
	static volatile int16_t x4692 = 0;
	uint64_t t76 = 946049802LLU;

	t76 = (x4689/((x4690+x4691)>>x4692));

	if (t76 != 563379778081102LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4762 = 217539396LLU;
	int32_t x4763 = INT32_MIN;
	uint8_t x4764 = 1U;

	t77 = (x4761/((x4762+x4763)>>x4764));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4817 = INT8_MAX;
	volatile uint16_t x4819 = 6540U;
	uint16_t x4820 = 0U;
	int32_t t78 = 0;

	t78 = (x4817/((x4818+x4819)>>x4820));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5034 = UINT8_MAX;
	volatile uint32_t x5035 = UINT32_MAX;

	t79 = (x5033/((x5034+x5035)>>x5036));

	if (t79 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5049 = 2647U;
	uint16_t x5050 = 1U;

	t80 = (x5049/((x5050+x5051)>>x5052));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5149 = 131777671724200935LL;
	uint16_t x5151 = UINT16_MAX;
	uint8_t x5152 = 6U;

	t81 = (x5149/((x5150+x5151)>>x5152));

	if (t81 != 128814928371652LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x5173 = INT32_MAX;
	int32_t x5174 = INT32_MIN;
	static int64_t x5175 = INT64_MAX;
	static volatile uint16_t x5176 = 7U;
	volatile int64_t t82 = -2472576201LL;

	t82 = (x5173/((x5174+x5175)>>x5176));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5221 = INT64_MIN;
	uint16_t x5222 = 351U;
	int8_t x5223 = -1;
	static uint8_t x5224 = 3U;
	volatile int64_t t83 = 805233528929936LL;

	t83 = (x5221/((x5222+x5223)>>x5224));

	if (t83 != -214497024112901762LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5250 = 6092509U;
	static uint16_t x5251 = UINT16_MAX;
	uint16_t x5252 = 18U;
	int64_t t84 = 2555LL;

	t84 = (x5249/((x5250+x5251)>>x5252));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x5265 = -4;
	static volatile uint32_t x5267 = UINT32_MAX;
	volatile uint16_t x5268 = 12U;
	uint32_t t85 = 1963649144U;

	t85 = (x5265/((x5266+x5267)>>x5268));

	if (t85 != 4096U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5293 = 1LL;
	int16_t x5294 = -305;
	uint32_t x5295 = 22417U;
	static volatile uint16_t x5296 = 12U;

	t86 = (x5293/((x5294+x5295)>>x5296));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5318 = 3;
	int8_t x5319 = INT8_MAX;
	uint16_t x5320 = 0U;
	static uint64_t t87 = 993LLU;

	t87 = (x5317/((x5318+x5319)>>x5320));

	if (t87 != 26402LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5325 = INT16_MIN;
	int32_t x5328 = 10;
	static volatile int32_t t88 = 25;

	t88 = (x5325/((x5326+x5327)>>x5328));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5342 = INT8_MIN;
	uint16_t x5343 = UINT16_MAX;
	uint16_t x5344 = 4U;
	int32_t t89 = 344827941;

	t89 = (x5341/((x5342+x5343)>>x5344));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x5394 = 7U;
	int64_t x5395 = -1LL;
	static uint16_t x5396 = 0U;
	int64_t t90 = 57LL;

	t90 = (x5393/((x5394+x5395)>>x5396));

	if (t90 != -5461LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5425 = 1;
	int8_t x5426 = -1;
	uint64_t x5428 = 2LLU;
	volatile int64_t t91 = 225LL;

	t91 = (x5425/((x5426+x5427)>>x5428));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5498 = 107344672362262408LL;
	static volatile int16_t x5500 = 1;
	int64_t t92 = -263734LL;

	t92 = (x5497/((x5498+x5499)>>x5500));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5509 = 12796LLU;
	static volatile int8_t x5510 = -1;
	volatile int8_t x5511 = INT8_MAX;
	volatile uint64_t t93 = 3518LLU;

	t93 = (x5509/((x5510+x5511)>>x5512));

	if (t93 != 853LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5585 = 7051057095118377LL;
	uint32_t x5588 = 7U;
	int64_t t94 = -233111430958373LL;

	t94 = (x5585/((x5586+x5587)>>x5588));

	if (t94 != 4918674134LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5629 = -1;
	uint8_t x5630 = 9U;
	int16_t x5631 = 0;
	static volatile int32_t t95 = 30;

	t95 = (x5629/((x5630+x5631)>>x5632));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5730 = -2;
	uint64_t x5731 = 15000543023LLU;
	volatile int64_t x5732 = 0LL;
	uint64_t t96 = 111448LLU;

	t96 = (x5729/((x5730+x5731)>>x5732));

	if (t96 != 614869209LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5733 = INT64_MIN;
	int32_t x5734 = -1;
	uint8_t x5736 = 3U;
	int64_t t97 = -4183254104303026LL;

	t97 = (x5733/((x5734+x5735)>>x5736));

	if (t97 != -17179869216LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5757 = INT16_MIN;
	int64_t x5759 = 508315070799271LL;
	volatile uint32_t x5760 = 0U;

	t98 = (x5757/((x5758+x5759)>>x5760));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5793 = INT64_MAX;
	volatile int8_t x5794 = INT8_MAX;
	int32_t x5795 = -1;
	volatile int64_t t99 = 61969LL;

	t99 = (x5793/((x5794+x5795)>>x5796));

	if (t99 != 614891469123651720LL) { NG(); } else { ; }
	
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

