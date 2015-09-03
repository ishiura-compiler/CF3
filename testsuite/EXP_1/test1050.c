#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x133 = 1U;
static uint32_t x257 = 33697776U;
static uint8_t x522 = 2U;
volatile int32_t t5 = 24713205;
uint32_t x557 = UINT32_MAX;
uint32_t x858 = 16U;
volatile uint8_t x859 = 44U;
static volatile int32_t t11 = 982818452;
int8_t x863 = INT8_MIN;
uint8_t x953 = 2U;
volatile int16_t x956 = INT16_MIN;
volatile int32_t t14 = -8;
volatile int8_t x1041 = 3;
uint8_t x1042 = 3U;
volatile uint16_t x1117 = UINT16_MAX;
static int8_t x1235 = 1;
uint32_t x1275 = 252U;
volatile uint64_t x1325 = 29092555184473LLU;
static int16_t x1327 = INT16_MIN;
int8_t x1328 = -1;
volatile int32_t t22 = 4852;
uint16_t x1745 = 2U;
int16_t x1747 = INT16_MAX;
uint64_t x1748 = 257236988LLU;
static int32_t t25 = 0;
int16_t x1871 = INT16_MIN;
uint64_t x1877 = 1031939750LLU;
int8_t x1878 = 8;
static int32_t x1879 = -4087050;
uint8_t x2034 = 8U;
int16_t x2054 = 6;
static int64_t x2133 = INT64_MAX;
uint32_t x2193 = 19671879U;
volatile int16_t x2195 = INT16_MIN;
static uint8_t x2218 = 1U;
static int8_t x2245 = 1;
int32_t x2246 = 16;
int32_t t38 = 105;
volatile int32_t t39 = 87;
static uint8_t x2882 = 4U;
int32_t x2904 = INT32_MIN;
volatile int32_t t43 = -1069691772;
uint64_t x2933 = UINT64_MAX;
static uint8_t x2946 = 3U;
int8_t x2955 = INT8_MIN;
volatile int32_t t47 = -251687;
int8_t x3014 = 29;
int16_t x3071 = -2230;
volatile uint16_t x3154 = 3U;
int64_t x3240 = 1770977635LL;
int8_t x3294 = 26;
int8_t x3312 = INT8_MAX;
int32_t x3376 = INT32_MAX;
int64_t x3404 = INT64_MIN;
int64_t x3476 = INT64_MIN;
uint32_t x3525 = 18679653U;
static int8_t x3526 = 1;
static volatile uint32_t x3763 = UINT32_MAX;
int8_t x3780 = INT8_MIN;
static uint8_t x3834 = 63U;
int64_t x3871 = INT64_MIN;
static int64_t x3872 = -1LL;
volatile int32_t t68 = 29071;
static int8_t x4037 = INT8_MAX;
int64_t x4039 = 71868679168088857LL;
uint8_t x4105 = 0U;
int8_t x4144 = -22;
uint16_t x4247 = 1596U;
static int32_t t76 = -3;
int16_t x4260 = 1122;
volatile int32_t t77 = 1;
uint64_t x4296 = 670LLU;
volatile int32_t t78 = -13170905;
static uint32_t x4370 = 37U;
int8_t x4471 = INT8_MAX;
int32_t x4522 = 0;
int8_t x4621 = INT8_MAX;
int16_t x4623 = INT16_MIN;
int64_t x4624 = -4227725530668LL;
int32_t t84 = 916763899;
int32_t t85 = 119181694;
uint32_t x4654 = 2U;
int16_t x4655 = 30;
int16_t x4672 = INT16_MAX;
int64_t x4715 = INT64_MIN;
volatile int32_t x4797 = 18433;
int32_t x4799 = 72272;
volatile uint8_t x4894 = 1U;
uint64_t x4934 = 31LLU;
static uint16_t x4950 = 13U;
int32_t t94 = 112970;
volatile int32_t t95 = -27897;
int8_t x5472 = 63;


void f0(void) {
	int8_t x1 = 0;
	volatile uint8_t x2 = 22U;
	volatile int16_t x3 = INT16_MIN;
	static volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -1773968;

	t0 = (((x1>>x2)*x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x85 = 4018LLU;
	uint8_t x86 = 1U;
	int8_t x87 = -5;
	volatile int16_t x88 = -1;
	int32_t t1 = -86072;

	t1 = (((x85>>x86)*x87)<=x88);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x134 = 9LL;
	uint16_t x135 = 1679U;
	volatile int8_t x136 = 0;
	int32_t t2 = 275422;

	t2 = (((x133>>x134)*x135)<=x136);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x258 = 6;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 1;
	volatile int32_t t3 = -362573;

	t3 = (((x257>>x258)*x259)<=x260);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x305 = INT16_MAX;
	uint8_t x306 = 1U;
	int8_t x307 = 1;
	int8_t x308 = -1;
	int32_t t4 = 1;

	t4 = (((x305>>x306)*x307)<=x308);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x521 = 15631U;
	uint64_t x523 = UINT64_MAX;
	uint8_t x524 = UINT8_MAX;

	t5 = (((x521>>x522)*x523)<=x524);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x558 = 4;
	int16_t x559 = INT16_MIN;
	int64_t x560 = -1LL;
	static volatile int32_t t6 = 11797;

	t6 = (((x557>>x558)*x559)<=x560);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x597 = 2U;
	uint8_t x598 = 0U;
	uint32_t x599 = 1U;
	int64_t x600 = -5062599801846LL;
	volatile int32_t t7 = 247;

	t7 = (((x597>>x598)*x599)<=x600);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x645 = 3105U;
	uint16_t x646 = 13U;
	volatile int32_t x647 = 3385;
	static int16_t x648 = -439;
	int32_t t8 = 1530;

	t8 = (((x645>>x646)*x647)<=x648);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x733 = 404079607680LLU;
	static uint8_t x734 = 2U;
	int64_t x735 = 6085021LL;
	uint64_t x736 = 3957182129241256LLU;
	volatile int32_t t9 = -46011109;

	t9 = (((x733>>x734)*x735)<=x736);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x809 = UINT32_MAX;
	volatile uint8_t x810 = 6U;
	int8_t x811 = -1;
	int8_t x812 = INT8_MAX;
	static volatile int32_t t10 = -1;

	t10 = (((x809>>x810)*x811)<=x812);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x857 = 19U;
	int64_t x860 = INT64_MIN;

	t11 = (((x857>>x858)*x859)<=x860);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x861 = 80LLU;
	int8_t x862 = 16;
	int8_t x864 = -1;
	volatile int32_t t12 = 2842;

	t12 = (((x861>>x862)*x863)<=x864);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x889 = 27U;
	static volatile uint8_t x890 = 4U;
	int32_t x891 = -1;
	int32_t x892 = INT32_MIN;
	volatile int32_t t13 = -236904;

	t13 = (((x889>>x890)*x891)<=x892);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x954 = 25U;
	uint16_t x955 = 53U;

	t14 = (((x953>>x954)*x955)<=x956);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1043 = INT8_MIN;
	static uint8_t x1044 = UINT8_MAX;
	static int32_t t15 = 240326910;

	t15 = (((x1041>>x1042)*x1043)<=x1044);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1065 = 0;
	int8_t x1066 = 3;
	uint32_t x1067 = UINT32_MAX;
	uint16_t x1068 = UINT16_MAX;
	volatile int32_t t16 = 9;

	t16 = (((x1065>>x1066)*x1067)<=x1068);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1118 = 0;
	static int8_t x1119 = INT8_MIN;
	volatile int64_t x1120 = -1LL;
	int32_t t17 = -32;

	t17 = (((x1117>>x1118)*x1119)<=x1120);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1233 = 13325U;
	int16_t x1234 = 0;
	static int16_t x1236 = INT16_MIN;
	volatile int32_t t18 = -1449857;

	t18 = (((x1233>>x1234)*x1235)<=x1236);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1273 = 3U;
	int8_t x1274 = 8;
	int64_t x1276 = INT64_MIN;
	static int32_t t19 = 15313;

	t19 = (((x1273>>x1274)*x1275)<=x1276);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1326 = 0U;
	static int32_t t20 = -215;

	t20 = (((x1325>>x1326)*x1327)<=x1328);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1377 = 6008062922735916LLU;
	int8_t x1378 = 1;
	int16_t x1379 = INT16_MIN;
	int32_t x1380 = 291;
	int32_t t21 = -268;

	t21 = (((x1377>>x1378)*x1379)<=x1380);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1405 = UINT8_MAX;
	static uint16_t x1406 = 2U;
	static int16_t x1407 = 9;
	uint8_t x1408 = 27U;

	t22 = (((x1405>>x1406)*x1407)<=x1408);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1445 = 441LL;
	uint16_t x1446 = 0U;
	uint32_t x1447 = 44695U;
	int16_t x1448 = -1;
	int32_t t23 = 20932398;

	t23 = (((x1445>>x1446)*x1447)<=x1448);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1489 = 15U;
	uint8_t x1490 = 2U;
	int64_t x1491 = -1LL;
	static int8_t x1492 = 0;
	volatile int32_t t24 = 215000;

	t24 = (((x1489>>x1490)*x1491)<=x1492);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1746 = 3;

	t25 = (((x1745>>x1746)*x1747)<=x1748);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1869 = 81863597011655LLU;
	int8_t x1870 = 1;
	int8_t x1872 = -1;
	int32_t t26 = -34696442;

	t26 = (((x1869>>x1870)*x1871)<=x1872);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x1880 = UINT8_MAX;
	volatile int32_t t27 = 45491;

	t27 = (((x1877>>x1878)*x1879)<=x1880);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1929 = UINT8_MAX;
	int16_t x1930 = 3;
	uint32_t x1931 = 250U;
	int32_t x1932 = INT32_MAX;
	static int32_t t28 = 1;

	t28 = (((x1929>>x1930)*x1931)<=x1932);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x2033 = INT8_MAX;
	int32_t x2035 = -46;
	volatile int64_t x2036 = INT64_MIN;
	int32_t t29 = -8071;

	t29 = (((x2033>>x2034)*x2035)<=x2036);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2053 = INT16_MAX;
	int8_t x2055 = 2;
	volatile uint8_t x2056 = 14U;
	int32_t t30 = -27633;

	t30 = (((x2053>>x2054)*x2055)<=x2056);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2134 = 24;
	int16_t x2135 = -83;
	int16_t x2136 = -4457;
	static volatile int32_t t31 = 226918;

	t31 = (((x2133>>x2134)*x2135)<=x2136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2181 = 113U;
	uint8_t x2182 = 12U;
	int16_t x2183 = -1;
	static int64_t x2184 = INT64_MIN;
	static int32_t t32 = -74991139;

	t32 = (((x2181>>x2182)*x2183)<=x2184);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2185 = INT8_MAX;
	volatile uint64_t x2186 = 4LLU;
	volatile int16_t x2187 = INT16_MIN;
	uint16_t x2188 = UINT16_MAX;
	volatile int32_t t33 = -759547052;

	t33 = (((x2185>>x2186)*x2187)<=x2188);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2194 = 5U;
	uint32_t x2196 = UINT32_MAX;
	int32_t t34 = -2865722;

	t34 = (((x2193>>x2194)*x2195)<=x2196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2217 = 94U;
	uint32_t x2219 = 75U;
	uint16_t x2220 = 3161U;
	volatile int32_t t35 = -101;

	t35 = (((x2217>>x2218)*x2219)<=x2220);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x2247 = INT8_MIN;
	uint32_t x2248 = 10418U;
	static int32_t t36 = 47;

	t36 = (((x2245>>x2246)*x2247)<=x2248);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2613 = 296U;
	int32_t x2614 = 2;
	uint16_t x2615 = 280U;
	uint16_t x2616 = 3400U;
	static int32_t t37 = -1215;

	t37 = (((x2613>>x2614)*x2615)<=x2616);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2677 = UINT64_MAX;
	uint8_t x2678 = 8U;
	int8_t x2679 = INT8_MIN;
	int64_t x2680 = INT64_MAX;

	t38 = (((x2677>>x2678)*x2679)<=x2680);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x2829 = 17U;
	static volatile int8_t x2830 = 2;
	uint16_t x2831 = 2172U;
	static int16_t x2832 = -1;

	t39 = (((x2829>>x2830)*x2831)<=x2832);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2853 = 2U;
	static uint16_t x2854 = 0U;
	static int16_t x2855 = 990;
	int8_t x2856 = INT8_MIN;
	int32_t t40 = 14;

	t40 = (((x2853>>x2854)*x2855)<=x2856);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2869 = UINT32_MAX;
	uint8_t x2870 = 8U;
	uint64_t x2871 = 16LLU;
	int8_t x2872 = INT8_MAX;
	volatile int32_t t41 = -3887876;

	t41 = (((x2869>>x2870)*x2871)<=x2872);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2881 = 6;
	uint32_t x2883 = 35U;
	static uint16_t x2884 = 20U;
	int32_t t42 = -14;

	t42 = (((x2881>>x2882)*x2883)<=x2884);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2901 = UINT8_MAX;
	static uint8_t x2902 = 3U;
	volatile int16_t x2903 = -243;

	t43 = (((x2901>>x2902)*x2903)<=x2904);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2921 = INT16_MAX;
	uint8_t x2922 = 3U;
	volatile int8_t x2923 = INT8_MAX;
	int16_t x2924 = INT16_MAX;
	int32_t t44 = -6;

	t44 = (((x2921>>x2922)*x2923)<=x2924);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2934 = 4;
	uint8_t x2935 = 0U;
	static int8_t x2936 = 18;
	volatile int32_t t45 = -8016397;

	t45 = (((x2933>>x2934)*x2935)<=x2936);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2945 = 0LLU;
	int8_t x2947 = 53;
	static int16_t x2948 = INT16_MIN;
	int32_t t46 = -239896;

	t46 = (((x2945>>x2946)*x2947)<=x2948);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2953 = INT8_MAX;
	volatile uint8_t x2954 = 2U;
	int64_t x2956 = -1LL;

	t47 = (((x2953>>x2954)*x2955)<=x2956);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3013 = 164506064629381362LLU;
	int8_t x3015 = 0;
	int8_t x3016 = INT8_MAX;
	int32_t t48 = -2987163;

	t48 = (((x3013>>x3014)*x3015)<=x3016);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3025 = 13997384998570LLU;
	uint8_t x3026 = 8U;
	int16_t x3027 = -21;
	volatile uint32_t x3028 = 431U;
	int32_t t49 = -7467;

	t49 = (((x3025>>x3026)*x3027)<=x3028);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3069 = 29U;
	uint16_t x3070 = 1U;
	volatile uint8_t x3072 = 1U;
	int32_t t50 = 333899090;

	t50 = (((x3069>>x3070)*x3071)<=x3072);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3153 = 0U;
	static int8_t x3155 = INT8_MAX;
	int16_t x3156 = INT16_MIN;
	int32_t t51 = -3;

	t51 = (((x3153>>x3154)*x3155)<=x3156);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3169 = 2131734337LLU;
	int8_t x3170 = 0;
	int64_t x3171 = INT64_MIN;
	volatile int64_t x3172 = -1LL;
	int32_t t52 = -333919;

	t52 = (((x3169>>x3170)*x3171)<=x3172);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x3233 = 1081U;
	uint16_t x3234 = 14U;
	volatile int16_t x3235 = -1;
	uint64_t x3236 = 63LLU;
	volatile int32_t t53 = -197149;

	t53 = (((x3233>>x3234)*x3235)<=x3236);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3237 = UINT64_MAX;
	uint8_t x3238 = 14U;
	uint16_t x3239 = 1U;
	volatile int32_t t54 = 31;

	t54 = (((x3237>>x3238)*x3239)<=x3240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3285 = UINT64_MAX;
	uint16_t x3286 = 61U;
	static volatile uint8_t x3287 = UINT8_MAX;
	int32_t x3288 = -181;
	int32_t t55 = -4;

	t55 = (((x3285>>x3286)*x3287)<=x3288);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3293 = 40;
	uint32_t x3295 = 660U;
	volatile int32_t x3296 = 3143498;
	int32_t t56 = 3922;

	t56 = (((x3293>>x3294)*x3295)<=x3296);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3309 = 55252814LL;
	volatile uint8_t x3310 = 13U;
	static int8_t x3311 = -1;
	int32_t t57 = 8;

	t57 = (((x3309>>x3310)*x3311)<=x3312);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3337 = 132818103;
	uint8_t x3338 = 18U;
	int8_t x3339 = INT8_MIN;
	int64_t x3340 = INT64_MAX;
	int32_t t58 = -2;

	t58 = (((x3337>>x3338)*x3339)<=x3340);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3353 = UINT64_MAX;
	int64_t x3354 = 3LL;
	int8_t x3355 = -1;
	int8_t x3356 = INT8_MIN;
	volatile int32_t t59 = 0;

	t59 = (((x3353>>x3354)*x3355)<=x3356);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x3373 = 2579;
	static int8_t x3374 = 0;
	uint32_t x3375 = 28U;
	int32_t t60 = 54638;

	t60 = (((x3373>>x3374)*x3375)<=x3376);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3401 = 1985;
	volatile int8_t x3402 = 1;
	static int8_t x3403 = -9;
	volatile int32_t t61 = -308455;

	t61 = (((x3401>>x3402)*x3403)<=x3404);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x3473 = 65134;
	uint8_t x3474 = 0U;
	static volatile uint8_t x3475 = 0U;
	volatile int32_t t62 = 65063793;

	t62 = (((x3473>>x3474)*x3475)<=x3476);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3527 = -5;
	int64_t x3528 = -3789LL;
	volatile int32_t t63 = 98;

	t63 = (((x3525>>x3526)*x3527)<=x3528);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3761 = 23U;
	static volatile int8_t x3762 = 1;
	static volatile int32_t x3764 = 268179695;
	volatile int32_t t64 = -5690;

	t64 = (((x3761>>x3762)*x3763)<=x3764);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3777 = UINT32_MAX;
	static uint16_t x3778 = 0U;
	static uint64_t x3779 = 2121LLU;
	static int32_t t65 = 2;

	t65 = (((x3777>>x3778)*x3779)<=x3780);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3833 = UINT64_MAX;
	int32_t x3835 = INT32_MIN;
	int64_t x3836 = -14814201414LL;
	int32_t t66 = 926;

	t66 = (((x3833>>x3834)*x3835)<=x3836);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3869 = 13U;
	uint32_t x3870 = 10U;
	volatile int32_t t67 = -3482;

	t67 = (((x3869>>x3870)*x3871)<=x3872);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3933 = INT8_MAX;
	uint8_t x3934 = 13U;
	int16_t x3935 = INT16_MIN;
	uint64_t x3936 = 8899582631632958LLU;

	t68 = (((x3933>>x3934)*x3935)<=x3936);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3949 = UINT8_MAX;
	int8_t x3950 = 3;
	volatile uint8_t x3951 = UINT8_MAX;
	int32_t x3952 = -1;
	static volatile int32_t t69 = -59500173;

	t69 = (((x3949>>x3950)*x3951)<=x3952);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4025 = INT16_MAX;
	uint16_t x4026 = 21U;
	uint64_t x4027 = 1466LLU;
	uint8_t x4028 = 7U;
	int32_t t70 = 1;

	t70 = (((x4025>>x4026)*x4027)<=x4028);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4038 = 8U;
	int8_t x4040 = -1;
	volatile int32_t t71 = 3028665;

	t71 = (((x4037>>x4038)*x4039)<=x4040);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4106 = 21U;
	int8_t x4107 = 0;
	int32_t x4108 = -1;
	static volatile int32_t t72 = -172520;

	t72 = (((x4105>>x4106)*x4107)<=x4108);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4141 = 20U;
	uint8_t x4142 = 25U;
	static int16_t x4143 = INT16_MIN;
	static int32_t t73 = -179;

	t73 = (((x4141>>x4142)*x4143)<=x4144);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4157 = UINT8_MAX;
	int32_t x4158 = 25;
	static int64_t x4159 = INT64_MAX;
	volatile int16_t x4160 = INT16_MIN;
	int32_t t74 = -17887;

	t74 = (((x4157>>x4158)*x4159)<=x4160);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4245 = UINT64_MAX;
	volatile int8_t x4246 = 25;
	int8_t x4248 = -3;
	volatile int32_t t75 = -29;

	t75 = (((x4245>>x4246)*x4247)<=x4248);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4249 = 273344007LL;
	static volatile int8_t x4250 = 0;
	int16_t x4251 = 141;
	static int32_t x4252 = 147584912;

	t76 = (((x4249>>x4250)*x4251)<=x4252);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4257 = 41LL;
	uint8_t x4258 = 2U;
	int32_t x4259 = INT32_MAX;

	t77 = (((x4257>>x4258)*x4259)<=x4260);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4293 = INT32_MAX;
	volatile int8_t x4294 = 4;
	uint32_t x4295 = 234378280U;

	t78 = (((x4293>>x4294)*x4295)<=x4296);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4369 = UINT64_MAX;
	static int64_t x4371 = 25678561512925290LL;
	int32_t x4372 = -2400;
	int32_t t79 = -318962;

	t79 = (((x4369>>x4370)*x4371)<=x4372);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4469 = 38985LL;
	uint32_t x4470 = 6U;
	int16_t x4472 = -1466;
	int32_t t80 = -12818;

	t80 = (((x4469>>x4470)*x4471)<=x4472);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4477 = 12705654U;
	int8_t x4478 = 0;
	static uint32_t x4479 = 53928U;
	uint8_t x4480 = 52U;
	volatile int32_t t81 = -79282193;

	t81 = (((x4477>>x4478)*x4479)<=x4480);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4521 = 2;
	int16_t x4523 = -1;
	static int8_t x4524 = INT8_MIN;
	volatile int32_t t82 = -28;

	t82 = (((x4521>>x4522)*x4523)<=x4524);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4601 = 47U;
	uint8_t x4602 = 26U;
	int8_t x4603 = INT8_MIN;
	int16_t x4604 = 3;
	int32_t t83 = 31;

	t83 = (((x4601>>x4602)*x4603)<=x4604);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4622 = 3U;

	t84 = (((x4621>>x4622)*x4623)<=x4624);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4629 = UINT64_MAX;
	static uint32_t x4630 = 0U;
	int64_t x4631 = -1LL;
	static uint32_t x4632 = 15U;

	t85 = (((x4629>>x4630)*x4631)<=x4632);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x4653 = 1LLU;
	static volatile int16_t x4656 = INT16_MAX;
	static int32_t t86 = -9;

	t86 = (((x4653>>x4654)*x4655)<=x4656);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4669 = UINT64_MAX;
	volatile int16_t x4670 = 10;
	uint8_t x4671 = 2U;
	static volatile int32_t t87 = -9;

	t87 = (((x4669>>x4670)*x4671)<=x4672);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4713 = 71597023679935LLU;
	int8_t x4714 = 0;
	uint64_t x4716 = 51557LLU;
	int32_t t88 = 533262;

	t88 = (((x4713>>x4714)*x4715)<=x4716);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4745 = 8582;
	uint32_t x4746 = 11U;
	uint8_t x4747 = 1U;
	int32_t x4748 = 12;
	volatile int32_t t89 = 2095742;

	t89 = (((x4745>>x4746)*x4747)<=x4748);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4798 = 2;
	uint64_t x4800 = 3586982LLU;
	volatile int32_t t90 = 1;

	t90 = (((x4797>>x4798)*x4799)<=x4800);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4893 = 809U;
	uint32_t x4895 = 232U;
	static int8_t x4896 = INT8_MIN;
	int32_t t91 = -16504;

	t91 = (((x4893>>x4894)*x4895)<=x4896);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4933 = 24U;
	uint32_t x4935 = 175679U;
	static int64_t x4936 = -338464LL;
	volatile int32_t t92 = -5724;

	t92 = (((x4933>>x4934)*x4935)<=x4936);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4949 = UINT64_MAX;
	uint32_t x4951 = 186487507U;
	uint32_t x4952 = UINT32_MAX;
	volatile int32_t t93 = -26703688;

	t93 = (((x4949>>x4950)*x4951)<=x4952);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5185 = UINT8_MAX;
	uint8_t x5186 = 4U;
	int16_t x5187 = INT16_MIN;
	uint16_t x5188 = 3U;

	t94 = (((x5185>>x5186)*x5187)<=x5188);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x5221 = 0U;
	uint16_t x5222 = 1U;
	volatile int32_t x5223 = -12998;
	uint32_t x5224 = 1854912U;

	t95 = (((x5221>>x5222)*x5223)<=x5224);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5269 = INT32_MAX;
	uint16_t x5270 = 1U;
	uint32_t x5271 = 1803636U;
	uint32_t x5272 = 50225993U;
	int32_t t96 = -1;

	t96 = (((x5269>>x5270)*x5271)<=x5272);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5325 = 3420358U;
	volatile uint64_t x5326 = 8LLU;
	int32_t x5327 = 1;
	int16_t x5328 = INT16_MIN;
	volatile int32_t t97 = 1537;

	t97 = (((x5325>>x5326)*x5327)<=x5328);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x5469 = 28393U;
	int16_t x5470 = 5;
	static int8_t x5471 = -8;
	int32_t t98 = 2901;

	t98 = (((x5469>>x5470)*x5471)<=x5472);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5485 = 1303926113131LL;
	uint8_t x5486 = 27U;
	static uint16_t x5487 = 370U;
	volatile int32_t x5488 = INT32_MAX;
	int32_t t99 = -188713777;

	t99 = (((x5485>>x5486)*x5487)<=x5488);

	if (t99 != 1) { NG(); } else { ; }
	
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

