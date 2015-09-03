#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x40 = 0;
volatile int16_t x94 = INT16_MIN;
uint64_t x263 = UINT64_MAX;
static int64_t t2 = -22LL;
uint32_t x287 = UINT32_MAX;
int32_t x290 = INT32_MIN;
static volatile uint64_t t4 = 300199LLU;
uint64_t x446 = 12621498251117396LLU;
uint8_t x448 = 2U;
int16_t x570 = -1;
uint8_t x572 = 2U;
int8_t x728 = 8;
volatile int64_t t7 = -7988012LL;
int8_t x797 = INT8_MIN;
int32_t t9 = -4;
volatile uint8_t x822 = UINT8_MAX;
uint32_t x874 = 211529U;
int64_t t12 = 14LL;
uint8_t x929 = 58U;
volatile int16_t x932 = 0;
volatile int32_t t15 = 34;
int32_t x1188 = 1;
static int64_t x1201 = 1031065645413911LL;
int16_t x1202 = 108;
volatile int64_t t19 = 572445408388LL;
int8_t x1315 = INT8_MAX;
volatile int32_t t21 = -61;
static uint8_t x1357 = 20U;
static int8_t x1358 = -17;
uint64_t x1521 = 1979761LLU;
uint16_t x1565 = 25U;
static uint32_t x1600 = 23U;
volatile uint64_t t26 = 1042003383LLU;
int16_t x1754 = INT16_MIN;
volatile int64_t x1822 = -3803005129LL;
int64_t x1953 = -62390033194LL;
int32_t x1960 = 2;
int32_t t33 = -9725691;
static volatile uint8_t x2347 = UINT8_MAX;
volatile int8_t x2348 = 1;
volatile int32_t t35 = -10497;
static int8_t x2388 = 1;
static volatile int32_t t37 = -115;
int8_t x2465 = INT8_MAX;
uint8_t x2736 = 4U;
int16_t x2785 = -1;
int16_t x3117 = INT16_MIN;
uint16_t x3223 = UINT16_MAX;
uint32_t x3273 = 7U;
volatile int16_t x3332 = 22;
static volatile int32_t t45 = -275860957;
int64_t x3429 = INT64_MIN;
volatile uint16_t x3674 = 21U;
int32_t t48 = -2;
int32_t t50 = 13502797;
static int16_t x3862 = INT16_MIN;
uint64_t x3865 = 653492915396223LLU;
volatile int64_t x3934 = INT64_MIN;
volatile uint32_t x3961 = 1968698442U;
uint32_t t56 = 207441270U;
uint8_t x3980 = 12U;
volatile int8_t x4082 = INT8_MIN;
volatile int64_t x4274 = INT64_MIN;
static int32_t x4289 = -1;
volatile int64_t x4326 = INT64_MIN;
static uint32_t x4330 = 597U;
int16_t x4356 = 13;
int64_t x4446 = INT64_MIN;
int32_t x4458 = -3912;
int8_t x4732 = 4;
uint8_t x4780 = 4U;
uint8_t x4935 = 2U;
uint32_t x5246 = 358239U;
int64_t x5247 = INT64_MAX;
volatile int32_t t76 = -19;
uint16_t x5261 = 35U;
int64_t x5263 = INT64_MIN;
int64_t x5547 = INT64_MAX;
int32_t x5578 = -1;
int32_t t81 = 2;
int16_t x5621 = 0;
uint64_t x5622 = 839008722897667LLU;
uint16_t x5630 = 14703U;
static volatile int32_t t83 = 55573;
int32_t x5853 = INT32_MAX;
volatile int32_t t86 = 1;
volatile int8_t x5952 = 26;
static int32_t t87 = -3253;
uint32_t x6015 = 1866128U;
int16_t x6016 = 0;
int64_t t89 = INT64_MIN;
static int8_t x6047 = INT8_MAX;
volatile uint8_t x6048 = 12U;
static int32_t x6081 = INT32_MAX;
int16_t x6177 = 800;
static int32_t x6209 = -1;
int16_t x6210 = INT16_MIN;
static volatile int8_t x6373 = -3;
int8_t x6374 = -7;
uint64_t x6376 = 1LLU;
int16_t x6410 = INT16_MIN;


void f0(void) {
	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	static int64_t t0 = INT64_MIN;

	t0 = (x37/((x38<x39)<<x40));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x93 = -183;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = 1U;
	static volatile int32_t t1 = 30;

	t1 = (x93/((x94<x95)<<x96));

	if (t1 != -91) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x261 = -1LL;
	static uint32_t x262 = 3136379U;
	static int8_t x264 = 29;

	t2 = (x261/((x262<x263)<<x264));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x285 = -1;
	static uint16_t x286 = 10261U;
	static uint64_t x288 = 10LLU;
	int32_t t3 = -35497119;

	t3 = (x285/((x286<x287)<<x288));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x289 = 1226367LLU;
	static volatile int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 10U;

	t4 = (x289/((x290<x291)<<x292));

	if (t4 != 1197LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x445 = INT32_MIN;
	static int64_t x447 = INT64_MIN;
	volatile int32_t t5 = -90158;

	t5 = (x445/((x446<x447)<<x448));

	if (t5 != -536870912) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x569 = INT32_MAX;
	static int16_t x571 = 0;
	static volatile int32_t t6 = -3745;

	t6 = (x569/((x570<x571)<<x572));

	if (t6 != 536870911) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x725 = -1LL;
	uint64_t x726 = 78380LLU;
	int32_t x727 = INT32_MAX;

	t7 = (x725/((x726<x727)<<x728));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x729 = INT64_MIN;
	volatile uint8_t x730 = 4U;
	static int16_t x731 = 1248;
	uint16_t x732 = 1U;
	int64_t t8 = -3058675813LL;

	t8 = (x729/((x730<x731)<<x732));

	if (t8 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x798 = 363990201U;
	static int8_t x799 = -13;
	int8_t x800 = 1;

	t9 = (x797/((x798<x799)<<x800));

	if (t9 != -64) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x821 = INT64_MIN;
	static uint32_t x823 = 17960673U;
	static uint8_t x824 = 1U;
	static volatile int64_t t10 = 16486231253709LL;

	t10 = (x821/((x822<x823)<<x824));

	if (t10 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x873 = UINT32_MAX;
	static volatile int8_t x875 = -1;
	uint32_t x876 = 7U;
	uint32_t t11 = 94U;

	t11 = (x873/((x874<x875)<<x876));

	if (t11 != 33554431U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x877 = -1LL;
	int8_t x878 = 0;
	static uint32_t x879 = 189U;
	volatile int8_t x880 = 2;

	t12 = (x877/((x878<x879)<<x880));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x921 = 0;
	static int8_t x922 = -1;
	uint16_t x923 = UINT16_MAX;
	volatile int8_t x924 = 20;
	int32_t t13 = -60;

	t13 = (x921/((x922<x923)<<x924));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x930 = 45U;
	static volatile uint16_t x931 = 1482U;
	int32_t t14 = 3390;

	t14 = (x929/((x930<x931)<<x932));

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1089 = -1;
	int64_t x1090 = INT64_MIN;
	int64_t x1091 = INT64_MAX;
	uint32_t x1092 = 1U;

	t15 = (x1089/((x1090<x1091)<<x1092));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1185 = -1;
	uint32_t x1186 = 70244U;
	static volatile int64_t x1187 = 832850LL;
	static int32_t t16 = -25;

	t16 = (x1185/((x1186<x1187)<<x1188));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1203 = INT16_MAX;
	uint8_t x1204 = 8U;
	static int64_t t17 = -5445900920979LL;

	t17 = (x1201/((x1202<x1203)<<x1204));

	if (t17 != 4027600177398LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x1205 = -1;
	uint16_t x1206 = 535U;
	int32_t x1207 = INT32_MAX;
	uint16_t x1208 = 20U;
	volatile int32_t t18 = -2475;

	t18 = (x1205/((x1206<x1207)<<x1208));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1257 = -1LL;
	static volatile int64_t x1258 = -1LL;
	int32_t x1259 = 11;
	static int64_t x1260 = 11LL;

	t19 = (x1257/((x1258<x1259)<<x1260));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1313 = INT64_MAX;
	uint16_t x1314 = 6U;
	int16_t x1316 = 7;
	int64_t t20 = -359830215055351LL;

	t20 = (x1313/((x1314<x1315)<<x1316));

	if (t20 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1317 = -1;
	static int64_t x1318 = -340299LL;
	int16_t x1319 = INT16_MIN;
	static volatile uint8_t x1320 = 13U;

	t21 = (x1317/((x1318<x1319)<<x1320));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1359 = -11;
	int8_t x1360 = 5;
	int32_t t22 = -13282722;

	t22 = (x1357/((x1358<x1359)<<x1360));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1509 = -1;
	int8_t x1510 = INT8_MIN;
	static volatile uint16_t x1511 = 1U;
	volatile int8_t x1512 = 4;
	static int32_t t23 = 234;

	t23 = (x1509/((x1510<x1511)<<x1512));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1522 = 1027463507276LLU;
	volatile uint64_t x1523 = 4257159595180LLU;
	volatile uint16_t x1524 = 14U;
	uint64_t t24 = 537754297443LLU;

	t24 = (x1521/((x1522<x1523)<<x1524));

	if (t24 != 120LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x1566 = -1;
	volatile int32_t x1567 = 7710;
	int8_t x1568 = 18;
	volatile int32_t t25 = 23407;

	t25 = (x1565/((x1566<x1567)<<x1568));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1597 = 678LLU;
	static int16_t x1598 = INT16_MIN;
	volatile int32_t x1599 = 1592;

	t26 = (x1597/((x1598<x1599)<<x1600));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1753 = 15;
	int32_t x1755 = -1;
	static uint16_t x1756 = 27U;
	int32_t t27 = 3435;

	t27 = (x1753/((x1754<x1755)<<x1756));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1793 = INT16_MIN;
	int8_t x1794 = 13;
	uint8_t x1795 = 28U;
	static uint32_t x1796 = 1U;
	volatile int32_t t28 = -552691697;

	t28 = (x1793/((x1794<x1795)<<x1796));

	if (t28 != -16384) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1821 = INT32_MIN;
	int64_t x1823 = INT64_MAX;
	uint16_t x1824 = 0U;
	static int32_t t29 = INT32_MIN;

	t29 = (x1821/((x1822<x1823)<<x1824));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1954 = 24892U;
	static int64_t x1955 = 70374122083703LL;
	int8_t x1956 = 6;
	volatile int64_t t30 = -4231LL;

	t30 = (x1953/((x1954<x1955)<<x1956));

	if (t30 != -974844268LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1957 = 2U;
	volatile int8_t x1958 = INT8_MIN;
	int8_t x1959 = -1;
	int32_t t31 = 1;

	t31 = (x1957/((x1958<x1959)<<x1960));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1985 = INT8_MAX;
	uint16_t x1986 = 554U;
	uint64_t x1987 = 59386622770729LLU;
	uint8_t x1988 = 1U;
	volatile int32_t t32 = -79912787;

	t32 = (x1985/((x1986<x1987)<<x1988));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2317 = -1;
	volatile int32_t x2318 = INT32_MIN;
	int16_t x2319 = -102;
	uint32_t x2320 = 3U;

	t33 = (x2317/((x2318<x2319)<<x2320));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2345 = 25;
	int8_t x2346 = -1;
	volatile int32_t t34 = -56;

	t34 = (x2345/((x2346<x2347)<<x2348));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2373 = -1;
	int16_t x2374 = INT16_MAX;
	static uint64_t x2375 = 107669803LLU;
	static int8_t x2376 = 5;

	t35 = (x2373/((x2374<x2375)<<x2376));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2385 = 3878569007716355LLU;
	volatile int16_t x2386 = -1;
	int8_t x2387 = 5;
	volatile uint64_t t36 = 440489113569518LLU;

	t36 = (x2385/((x2386<x2387)<<x2388));

	if (t36 != 1939284503858177LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2441 = -1133860;
	int8_t x2442 = 0;
	int32_t x2443 = INT32_MAX;
	uint8_t x2444 = 5U;

	t37 = (x2441/((x2442<x2443)<<x2444));

	if (t37 != -35433) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2466 = 6U;
	volatile uint8_t x2467 = UINT8_MAX;
	static int16_t x2468 = 12;
	volatile int32_t t38 = 136049024;

	t38 = (x2465/((x2466<x2467)<<x2468));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2733 = -346;
	static int32_t x2734 = -183545299;
	static volatile int8_t x2735 = -1;
	static volatile int32_t t39 = 820053;

	t39 = (x2733/((x2734<x2735)<<x2736));

	if (t39 != -21) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2786 = 2;
	static uint32_t x2787 = UINT32_MAX;
	uint8_t x2788 = 2U;
	static volatile int32_t t40 = 678392323;

	t40 = (x2785/((x2786<x2787)<<x2788));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2821 = INT16_MAX;
	uint8_t x2822 = 1U;
	static uint64_t x2823 = 193939LLU;
	int8_t x2824 = 0;
	static volatile int32_t t41 = -541735;

	t41 = (x2821/((x2822<x2823)<<x2824));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3118 = 2U;
	int16_t x3119 = 11077;
	volatile uint16_t x3120 = 1U;
	volatile int32_t t42 = 345600;

	t42 = (x3117/((x3118<x3119)<<x3120));

	if (t42 != -16384) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x3221 = 24U;
	volatile int16_t x3222 = -1;
	int8_t x3224 = 11;
	volatile int32_t t43 = 0;

	t43 = (x3221/((x3222<x3223)<<x3224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3274 = 31U;
	volatile int8_t x3275 = INT8_MAX;
	int32_t x3276 = 1;
	uint32_t t44 = 36492699U;

	t44 = (x3273/((x3274<x3275)<<x3276));

	if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x3329 = 0U;
	uint8_t x3330 = 111U;
	volatile uint32_t x3331 = 1689251U;

	t45 = (x3329/((x3330<x3331)<<x3332));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3361 = -6840;
	static volatile int16_t x3362 = INT16_MIN;
	uint32_t x3363 = UINT32_MAX;
	uint8_t x3364 = 6U;
	int32_t t46 = -13620;

	t46 = (x3361/((x3362<x3363)<<x3364));

	if (t46 != -106) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3430 = 17U;
	uint16_t x3431 = UINT16_MAX;
	uint16_t x3432 = 1U;
	volatile int64_t t47 = -17039686289LL;

	t47 = (x3429/((x3430<x3431)<<x3432));

	if (t47 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3673 = 724418;
	int16_t x3675 = 223;
	uint8_t x3676 = 0U;

	t48 = (x3673/((x3674<x3675)<<x3676));

	if (t48 != 724418) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3705 = 1493524;
	static int16_t x3706 = INT16_MIN;
	static uint8_t x3707 = UINT8_MAX;
	uint8_t x3708 = 5U;
	int32_t t49 = 1;

	t49 = (x3705/((x3706<x3707)<<x3708));

	if (t49 != 46672) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3829 = INT8_MIN;
	uint16_t x3830 = 0U;
	int8_t x3831 = INT8_MAX;
	uint8_t x3832 = 14U;

	t50 = (x3829/((x3830<x3831)<<x3832));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3861 = INT64_MIN;
	int32_t x3863 = -1;
	int16_t x3864 = 2;
	int64_t t51 = -719652267975349LL;

	t51 = (x3861/((x3862<x3863)<<x3864));

	if (t51 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3866 = INT64_MIN;
	uint16_t x3867 = 7701U;
	uint32_t x3868 = 21U;
	static volatile uint64_t t52 = 404030LLU;

	t52 = (x3865/((x3866<x3867)<<x3868));

	if (t52 != 311609704LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3873 = INT32_MIN;
	static volatile uint8_t x3874 = UINT8_MAX;
	int64_t x3875 = 1994588230832155096LL;
	static int16_t x3876 = 27;
	volatile int32_t t53 = 798813075;

	t53 = (x3873/((x3874<x3875)<<x3876));

	if (t53 != -16) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3881 = INT8_MAX;
	static uint16_t x3882 = 600U;
	int32_t x3883 = INT32_MAX;
	int8_t x3884 = 2;
	static volatile int32_t t54 = -20;

	t54 = (x3881/((x3882<x3883)<<x3884));

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x3933 = 53495764U;
	int8_t x3935 = INT8_MAX;
	uint32_t x3936 = 28U;
	static volatile uint32_t t55 = 200955U;

	t55 = (x3933/((x3934<x3935)<<x3936));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x3962 = 201845735619636123LLU;
	int8_t x3963 = INT8_MIN;
	volatile int32_t x3964 = 0;

	t56 = (x3961/((x3962<x3963)<<x3964));

	if (t56 != 1968698442U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3977 = INT16_MIN;
	int16_t x3978 = -16047;
	uint8_t x3979 = UINT8_MAX;
	volatile int32_t t57 = 55098;

	t57 = (x3977/((x3978<x3979)<<x3980));

	if (t57 != -8) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4081 = INT8_MIN;
	int64_t x4083 = 30772862LL;
	int8_t x4084 = 0;
	int32_t t58 = 96552868;

	t58 = (x4081/((x4082<x4083)<<x4084));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4205 = -23;
	int8_t x4206 = 0;
	static int16_t x4207 = 7;
	volatile int8_t x4208 = 7;
	int32_t t59 = 553799894;

	t59 = (x4205/((x4206<x4207)<<x4208));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x4245 = -16;
	int64_t x4246 = INT64_MIN;
	int8_t x4247 = -1;
	uint16_t x4248 = 2U;
	int32_t t60 = -35;

	t60 = (x4245/((x4246<x4247)<<x4248));

	if (t60 != -4) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x4273 = UINT64_MAX;
	uint32_t x4275 = 10168269U;
	uint16_t x4276 = 3U;
	volatile uint64_t t61 = 3305467147463LLU;

	t61 = (x4273/((x4274<x4275)<<x4276));

	if (t61 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4290 = 1382U;
	static volatile int64_t x4291 = 882330LL;
	int16_t x4292 = 2;
	volatile int32_t t62 = -361774;

	t62 = (x4289/((x4290<x4291)<<x4292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4325 = INT32_MIN;
	uint8_t x4327 = UINT8_MAX;
	static int8_t x4328 = 1;
	static volatile int32_t t63 = -1608505;

	t63 = (x4325/((x4326<x4327)<<x4328));

	if (t63 != -1073741824) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4329 = INT16_MIN;
	int32_t x4331 = INT32_MIN;
	uint16_t x4332 = 2U;
	int32_t t64 = -457136735;

	t64 = (x4329/((x4330<x4331)<<x4332));

	if (t64 != -8192) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4353 = UINT32_MAX;
	int16_t x4354 = INT16_MIN;
	static int8_t x4355 = -1;
	volatile uint32_t t65 = 1495750U;

	t65 = (x4353/((x4354<x4355)<<x4356));

	if (t65 != 524287U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4381 = 8U;
	volatile int8_t x4382 = INT8_MIN;
	volatile int16_t x4383 = INT16_MAX;
	static int8_t x4384 = 1;
	static int32_t t66 = 2283637;

	t66 = (x4381/((x4382<x4383)<<x4384));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4401 = 89U;
	int8_t x4402 = -1;
	volatile uint8_t x4403 = 3U;
	volatile uint16_t x4404 = 0U;
	int32_t t67 = 12070381;

	t67 = (x4401/((x4402<x4403)<<x4404));

	if (t67 != 89) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4445 = 1U;
	int8_t x4447 = INT8_MAX;
	uint8_t x4448 = 0U;
	volatile int32_t t68 = -1;

	t68 = (x4445/((x4446<x4447)<<x4448));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4457 = 123LLU;
	int16_t x4459 = -1;
	uint8_t x4460 = 7U;
	uint64_t t69 = 154228907LLU;

	t69 = (x4457/((x4458<x4459)<<x4460));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4633 = -1LL;
	int32_t x4634 = INT32_MIN;
	static int64_t x4635 = 0LL;
	volatile int16_t x4636 = 5;
	volatile int64_t t70 = -17752664981432LL;

	t70 = (x4633/((x4634<x4635)<<x4636));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4697 = -1;
	int32_t x4698 = -76;
	int64_t x4699 = 775009LL;
	static int8_t x4700 = 4;
	int32_t t71 = -146745;

	t71 = (x4697/((x4698<x4699)<<x4700));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4729 = INT8_MIN;
	volatile int8_t x4730 = 7;
	int16_t x4731 = 2653;
	int32_t t72 = -15;

	t72 = (x4729/((x4730<x4731)<<x4732));

	if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4777 = UINT64_MAX;
	uint64_t x4778 = 447LLU;
	int8_t x4779 = -1;
	uint64_t t73 = 564677747LLU;

	t73 = (x4777/((x4778<x4779)<<x4780));

	if (t73 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4933 = UINT8_MAX;
	int32_t x4934 = INT32_MIN;
	volatile uint16_t x4936 = 10U;
	static volatile int32_t t74 = -1604855;

	t74 = (x4933/((x4934<x4935)<<x4936));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5105 = INT8_MIN;
	static int8_t x5106 = INT8_MIN;
	int16_t x5107 = -55;
	int8_t x5108 = 0;
	volatile int32_t t75 = -8949;

	t75 = (x5105/((x5106<x5107)<<x5108));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5245 = 28U;
	uint8_t x5248 = 2U;

	t76 = (x5245/((x5246<x5247)<<x5248));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5262 = 2552263LLU;
	int64_t x5264 = 4LL;
	volatile int32_t t77 = 70835;

	t77 = (x5261/((x5262<x5263)<<x5264));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5413 = -1LL;
	int64_t x5414 = -578LL;
	int64_t x5415 = INT64_MAX;
	volatile uint8_t x5416 = 12U;
	static int64_t t78 = -3LL;

	t78 = (x5413/((x5414<x5415)<<x5416));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x5545 = -1;
	int64_t x5546 = -817LL;
	int16_t x5548 = 5;
	static volatile int32_t t79 = -9560528;

	t79 = (x5545/((x5546<x5547)<<x5548));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5573 = INT64_MIN;
	uint16_t x5574 = 3849U;
	static uint64_t x5575 = 217379LLU;
	int8_t x5576 = 9;
	volatile int64_t t80 = 214667816533299LL;

	t80 = (x5573/((x5574<x5575)<<x5576));

	if (t80 != -18014398509481984LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5577 = INT16_MAX;
	static int64_t x5579 = INT64_MAX;
	uint8_t x5580 = 20U;

	t81 = (x5577/((x5578<x5579)<<x5580));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5623 = -953083635LL;
	uint16_t x5624 = 9U;
	static volatile int32_t t82 = 181;

	t82 = (x5621/((x5622<x5623)<<x5624));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5629 = INT32_MIN;
	uint64_t x5631 = UINT64_MAX;
	uint32_t x5632 = 6U;

	t83 = (x5629/((x5630<x5631)<<x5632));

	if (t83 != -33554432) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x5753 = UINT32_MAX;
	static uint64_t x5754 = 64362LLU;
	volatile int8_t x5755 = INT8_MIN;
	uint8_t x5756 = 5U;
	static volatile uint32_t t84 = 17345636U;

	t84 = (x5753/((x5754<x5755)<<x5756));

	if (t84 != 134217727U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5821 = 22LLU;
	uint8_t x5822 = 105U;
	volatile uint32_t x5823 = UINT32_MAX;
	volatile int8_t x5824 = 11;
	uint64_t t85 = 98378LLU;

	t85 = (x5821/((x5822<x5823)<<x5824));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5854 = INT32_MIN;
	uint8_t x5855 = 15U;
	int8_t x5856 = 17;

	t86 = (x5853/((x5854<x5855)<<x5856));

	if (t86 != 16383) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5949 = 139U;
	int64_t x5950 = INT64_MIN;
	int32_t x5951 = -460;

	t87 = (x5949/((x5950<x5951)<<x5952));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x6013 = -617216053736LL;
	static uint16_t x6014 = 2779U;
	static int64_t t88 = 83146LL;

	t88 = (x6013/((x6014<x6015)<<x6016));

	if (t88 != -617216053736LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x6021 = INT64_MIN;
	int8_t x6022 = -1;
	volatile uint16_t x6023 = UINT16_MAX;
	int8_t x6024 = 0;

	t89 = (x6021/((x6022<x6023)<<x6024));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x6045 = 56342U;
	int16_t x6046 = -1;
	volatile uint32_t t90 = 398U;

	t90 = (x6045/((x6046<x6047)<<x6048));

	if (t90 != 13U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6082 = UINT8_MAX;
	volatile int16_t x6083 = INT16_MAX;
	uint8_t x6084 = 7U;
	int32_t t91 = 231286;

	t91 = (x6081/((x6082<x6083)<<x6084));

	if (t91 != 16777215) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6178 = INT8_MIN;
	volatile uint16_t x6179 = 6108U;
	uint8_t x6180 = 9U;
	volatile int32_t t92 = 138814124;

	t92 = (x6177/((x6178<x6179)<<x6180));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6189 = -19;
	static uint8_t x6190 = UINT8_MAX;
	uint16_t x6191 = UINT16_MAX;
	int32_t x6192 = 12;
	int32_t t93 = -83754220;

	t93 = (x6189/((x6190<x6191)<<x6192));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6201 = UINT16_MAX;
	volatile int32_t x6202 = -1;
	uint8_t x6203 = UINT8_MAX;
	uint16_t x6204 = 1U;
	int32_t t94 = -295;

	t94 = (x6201/((x6202<x6203)<<x6204));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6211 = -1;
	int8_t x6212 = 1;
	volatile int32_t t95 = -509;

	t95 = (x6209/((x6210<x6211)<<x6212));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x6261 = 1886;
	int32_t x6262 = INT32_MIN;
	uint16_t x6263 = UINT16_MAX;
	int32_t x6264 = 1;
	static volatile int32_t t96 = -57068682;

	t96 = (x6261/((x6262<x6263)<<x6264));

	if (t96 != 943) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x6301 = -1LL;
	uint32_t x6302 = 10U;
	int16_t x6303 = INT16_MIN;
	static int8_t x6304 = 0;
	int64_t t97 = -96985384207870747LL;

	t97 = (x6301/((x6302<x6303)<<x6304));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6375 = UINT16_MAX;
	int32_t t98 = -3;

	t98 = (x6373/((x6374<x6375)<<x6376));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6409 = 4424;
	volatile uint8_t x6411 = UINT8_MAX;
	uint32_t x6412 = 8U;
	int32_t t99 = -588895256;

	t99 = (x6409/((x6410<x6411)<<x6412));

	if (t99 != 17) { NG(); } else { ; }
	
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

