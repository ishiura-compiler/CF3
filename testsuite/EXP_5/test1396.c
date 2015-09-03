#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x178 = 924;
volatile int32_t t3 = 1;
volatile int32_t x327 = 141;
volatile int64_t x415 = INT64_MAX;
int8_t x600 = -1;
static volatile int32_t t7 = -211889570;
static uint16_t x645 = 1U;
int64_t x647 = INT64_MAX;
int64_t x660 = -1LL;
volatile int64_t t9 = 20825596802LL;
uint32_t x673 = 483488U;
static uint32_t t10 = 8U;
int32_t x717 = -191;
int16_t x718 = INT16_MIN;
volatile int32_t t15 = 44293862;
uint32_t x1030 = 2114225553U;
int64_t t20 = -2454766610932834LL;
volatile int16_t x1664 = -1;
uint32_t t23 = 4U;
uint64_t x1698 = 4484064994174960LLU;
static int16_t x1873 = -1;
uint32_t x1874 = 123957340U;
int32_t x1892 = -1;
static int32_t x1964 = -1;
static volatile int64_t t31 = -83227018LL;
static int8_t x1979 = INT8_MIN;
static volatile uint64_t t33 = 31262511LLU;
uint8_t x2065 = 2U;
int64_t x2068 = -1LL;
uint32_t x2159 = 191042U;
int16_t x2277 = INT16_MIN;
uint16_t x2278 = 13868U;
uint32_t x2279 = 1769749U;
int8_t x2306 = INT8_MIN;
uint32_t x2329 = 509U;
int8_t x2331 = 14;
uint16_t x2419 = 839U;
uint64_t t43 = 8LLU;
static int32_t x2809 = 464021895;
int64_t x2810 = -1LL;
int8_t x2812 = -1;
volatile int32_t t46 = -2;
uint32_t x3027 = 3477U;
int32_t t48 = 2822;
static int32_t t50 = -8354123;
int16_t x3568 = -1;
uint64_t x3653 = 227216LLU;
int32_t t55 = 7047336;
static int16_t x3749 = -1;
volatile int32_t t58 = -2063128;
int16_t x4095 = 77;
int8_t x4339 = INT8_MIN;
static int32_t x4365 = -1;
int32_t x4366 = -437142432;
int64_t x4368 = -1LL;
volatile int64_t t63 = 320135164704041572LL;
volatile int16_t x4437 = INT16_MIN;
int32_t x4440 = -1;
int8_t x4612 = -1;
volatile int32_t x4676 = -1;
static volatile int32_t t67 = -66410;
int8_t x4845 = INT8_MAX;
uint8_t x4846 = UINT8_MAX;
static volatile int32_t t69 = 73691;
int64_t x4886 = INT64_MIN;
int8_t x4889 = INT8_MIN;
volatile int64_t t72 = 633LL;
int64_t t73 = -4514100978169LL;
int16_t x5062 = INT16_MIN;
int64_t x5211 = -1LL;
int8_t x5212 = -1;
static volatile int32_t t78 = 103;
int16_t x5219 = -3;
int16_t x5220 = -1;
static volatile uint32_t t79 = 762U;
volatile uint64_t t80 = 410107442521287888LLU;
volatile int64_t t82 = 156349LL;
volatile uint8_t x5647 = UINT8_MAX;
int64_t x5777 = -1LL;
int32_t x5799 = INT32_MIN;
static int32_t t86 = 1301;
static volatile int16_t x5850 = INT16_MIN;
static int32_t t88 = -75178015;
int16_t x5956 = -1;
static volatile int32_t t91 = 8187;
int64_t x5977 = -1LL;
int64_t t92 = -1875427997LL;
volatile int8_t x6042 = -1;
int8_t x6113 = -1;
volatile int8_t x6182 = -13;
volatile int32_t t95 = 266274;
volatile int8_t x6202 = -8;
int16_t x6204 = -1;
volatile uint32_t t96 = 1364199U;
uint64_t t97 = 568896581688693209LLU;
volatile int32_t x6323 = 1192202;
uint64_t x6338 = 8530LLU;


void f0(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MAX;
	static volatile uint64_t x43 = UINT64_MAX;
	static volatile int32_t x44 = -1;
	int32_t t0 = 59;

	t0 = (x41%((x42<x43)/x44));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x177 = -1;
	static volatile int16_t x179 = 15574;
	int32_t x180 = -1;
	int32_t t1 = -10;

	t1 = (x177%((x178<x179)/x180));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x197 = 2U;
	volatile uint16_t x198 = 25U;
	uint64_t x199 = 1167806263795LLU;
	int8_t x200 = -1;
	volatile int32_t t2 = -9;

	t2 = (x197%((x198<x199)/x200));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x289 = 11U;
	int16_t x290 = INT16_MIN;
	static uint16_t x291 = 2753U;
	int16_t x292 = -1;

	t3 = (x289%((x290<x291)/x292));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x325 = INT8_MIN;
	volatile int16_t x326 = 0;
	volatile int8_t x328 = -1;
	int32_t t4 = 0;

	t4 = (x325%((x326<x327)/x328));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x413 = INT16_MIN;
	uint16_t x414 = 4U;
	uint32_t x416 = 1U;
	volatile uint32_t t5 = 286U;

	t5 = (x413%((x414<x415)/x416));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x573 = INT64_MIN;
	int32_t x574 = -665245;
	volatile uint32_t x575 = UINT32_MAX;
	int32_t x576 = 1;
	int64_t t6 = -6513LL;

	t6 = (x573%((x574<x575)/x576));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x597 = INT16_MIN;
	int8_t x598 = 1;
	volatile int16_t x599 = 30;

	t7 = (x597%((x598<x599)/x600));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x646 = UINT32_MAX;
	int64_t x648 = -1LL;
	volatile int64_t t8 = 37555031085LL;

	t8 = (x645%((x646<x647)/x648));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x657 = INT8_MAX;
	int32_t x658 = 573;
	uint64_t x659 = UINT64_MAX;

	t9 = (x657%((x658<x659)/x660));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x674 = INT8_MAX;
	uint32_t x675 = 25188U;
	int16_t x676 = -1;

	t10 = (x673%((x674<x675)/x676));

	if (t10 != 483488U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x677 = 7U;
	int32_t x678 = -77434;
	uint16_t x679 = 10678U;
	static int32_t x680 = -1;
	volatile int32_t t11 = -10266;

	t11 = (x677%((x678<x679)/x680));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x719 = INT8_MIN;
	int32_t x720 = -1;
	volatile int32_t t12 = 91;

	t12 = (x717%((x718<x719)/x720));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x789 = 1U;
	uint16_t x790 = 0U;
	uint8_t x791 = 11U;
	uint32_t x792 = 1U;
	uint32_t t13 = 3447U;

	t13 = (x789%((x790<x791)/x792));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x881 = UINT8_MAX;
	int8_t x882 = -1;
	int8_t x883 = 6;
	int16_t x884 = -1;
	static volatile int32_t t14 = 65545480;

	t14 = (x881%((x882<x883)/x884));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x929 = INT16_MIN;
	int8_t x930 = -1;
	int16_t x931 = INT16_MAX;
	uint16_t x932 = 1U;

	t15 = (x929%((x930<x931)/x932));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x937 = -6;
	volatile int32_t x938 = 15;
	uint64_t x939 = UINT64_MAX;
	int64_t x940 = -1LL;
	int64_t t16 = 154160422333279LL;

	t16 = (x937%((x938<x939)/x940));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1029 = -15639906;
	int16_t x1031 = INT16_MIN;
	int32_t x1032 = -1;
	int32_t t17 = -6102;

	t17 = (x1029%((x1030<x1031)/x1032));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1093 = 900405LLU;
	static uint32_t x1094 = 3U;
	int32_t x1095 = INT32_MIN;
	int8_t x1096 = -1;
	uint64_t t18 = 84371219747924162LLU;

	t18 = (x1093%((x1094<x1095)/x1096));

	if (t18 != 900405LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1113 = 1;
	int8_t x1114 = -1;
	volatile uint16_t x1115 = 7036U;
	int32_t x1116 = -1;
	volatile int32_t t19 = -25542534;

	t19 = (x1113%((x1114<x1115)/x1116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1461 = INT64_MAX;
	volatile int8_t x1462 = -15;
	static int64_t x1463 = INT64_MAX;
	static int64_t x1464 = -1LL;

	t20 = (x1461%((x1462<x1463)/x1464));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1509 = -245;
	static volatile int64_t x1510 = INT64_MIN;
	uint8_t x1511 = UINT8_MAX;
	static int32_t x1512 = -1;
	volatile int32_t t21 = 725;

	t21 = (x1509%((x1510<x1511)/x1512));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1597 = UINT64_MAX;
	uint32_t x1598 = 3606U;
	int32_t x1599 = -595777425;
	int8_t x1600 = -1;
	uint64_t t22 = 120182LLU;

	t22 = (x1597%((x1598<x1599)/x1600));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1661 = 14U;
	uint16_t x1662 = 5U;
	int64_t x1663 = INT64_MAX;

	t23 = (x1661%((x1662<x1663)/x1664));

	if (t23 != 14U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1697 = INT64_MIN;
	int8_t x1699 = -57;
	int8_t x1700 = 1;
	volatile int64_t t24 = -296689316530392903LL;

	t24 = (x1697%((x1698<x1699)/x1700));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1725 = -1LL;
	int64_t x1726 = -1LL;
	volatile int8_t x1727 = 29;
	volatile int64_t x1728 = -1LL;
	volatile int64_t t25 = 7240184LL;

	t25 = (x1725%((x1726<x1727)/x1728));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1753 = INT32_MIN;
	uint32_t x1754 = 918U;
	int32_t x1755 = -157;
	volatile int8_t x1756 = -1;
	volatile int32_t t26 = -79;

	t26 = (x1753%((x1754<x1755)/x1756));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1875 = UINT64_MAX;
	int64_t x1876 = -1LL;
	static int64_t t27 = -258530191321221LL;

	t27 = (x1873%((x1874<x1875)/x1876));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1889 = -15;
	int16_t x1890 = INT16_MIN;
	uint16_t x1891 = UINT16_MAX;
	int32_t t28 = 1;

	t28 = (x1889%((x1890<x1891)/x1892));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1917 = 54632520911LL;
	uint8_t x1918 = 6U;
	int32_t x1919 = 875;
	int16_t x1920 = -1;
	volatile int64_t t29 = 1LL;

	t29 = (x1917%((x1918<x1919)/x1920));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1925 = INT64_MIN;
	int16_t x1926 = INT16_MIN;
	static uint8_t x1927 = 34U;
	volatile uint8_t x1928 = 1U;
	volatile int64_t t30 = -191533275522907491LL;

	t30 = (x1925%((x1926<x1927)/x1928));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x1961 = 620962LL;
	int64_t x1962 = -1LL;
	static uint16_t x1963 = 62U;

	t31 = (x1961%((x1962<x1963)/x1964));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1977 = -1;
	int64_t x1978 = INT64_MIN;
	int64_t x1980 = -1LL;
	static volatile int64_t t32 = 150661427LL;

	t32 = (x1977%((x1978<x1979)/x1980));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2053 = 1470102830833157LLU;
	int32_t x2054 = -1;
	volatile int16_t x2055 = INT16_MAX;
	int16_t x2056 = -1;

	t33 = (x2053%((x2054<x2055)/x2056));

	if (t33 != 1470102830833157LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2057 = INT32_MIN;
	int16_t x2058 = INT16_MIN;
	int32_t x2059 = -1;
	int16_t x2060 = -1;
	static int32_t t34 = -243;

	t34 = (x2057%((x2058<x2059)/x2060));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2066 = INT64_MIN;
	int16_t x2067 = INT16_MIN;
	int64_t t35 = 19655894623280LL;

	t35 = (x2065%((x2066<x2067)/x2068));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2157 = -7391322;
	uint8_t x2158 = 3U;
	static volatile int16_t x2160 = -1;
	int32_t t36 = 73;

	t36 = (x2157%((x2158<x2159)/x2160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2280 = 1;
	volatile int32_t t37 = 2075262;

	t37 = (x2277%((x2278<x2279)/x2280));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2305 = -147;
	uint16_t x2307 = UINT16_MAX;
	volatile int8_t x2308 = -1;
	int32_t t38 = -63;

	t38 = (x2305%((x2306<x2307)/x2308));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2330 = 0U;
	int16_t x2332 = -1;
	uint32_t t39 = 680U;

	t39 = (x2329%((x2330<x2331)/x2332));

	if (t39 != 509U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x2417 = -1LL;
	int16_t x2418 = -430;
	volatile int16_t x2420 = -1;
	volatile int64_t t40 = 132375204962978453LL;

	t40 = (x2417%((x2418<x2419)/x2420));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2637 = 9839043131718859LLU;
	int32_t x2638 = -1;
	static uint8_t x2639 = UINT8_MAX;
	int16_t x2640 = -1;
	volatile uint64_t t41 = 15LLU;

	t41 = (x2637%((x2638<x2639)/x2640));

	if (t41 != 9839043131718859LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2665 = 10376U;
	int16_t x2666 = INT16_MIN;
	int16_t x2667 = 1333;
	int16_t x2668 = -1;
	uint32_t t42 = 457337047U;

	t42 = (x2665%((x2666<x2667)/x2668));

	if (t42 != 10376U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2713 = 1993079377634141114LLU;
	volatile int8_t x2714 = INT8_MAX;
	volatile uint32_t x2715 = 661517U;
	int8_t x2716 = -1;

	t43 = (x2713%((x2714<x2715)/x2716));

	if (t43 != 1993079377634141114LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2801 = 51101;
	uint32_t x2802 = 14U;
	int64_t x2803 = INT64_MAX;
	int32_t x2804 = -1;
	int32_t t44 = 332782;

	t44 = (x2801%((x2802<x2803)/x2804));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2811 = 605U;
	volatile int32_t t45 = -73519;

	t45 = (x2809%((x2810<x2811)/x2812));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2869 = -573;
	static int8_t x2870 = INT8_MIN;
	int16_t x2871 = -1;
	int8_t x2872 = -1;

	t46 = (x2869%((x2870<x2871)/x2872));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3025 = INT8_MAX;
	int8_t x3026 = INT8_MAX;
	static uint8_t x3028 = 1U;
	int32_t t47 = -9;

	t47 = (x3025%((x3026<x3027)/x3028));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3037 = UINT16_MAX;
	static int64_t x3038 = INT64_MIN;
	volatile int32_t x3039 = INT32_MAX;
	volatile int32_t x3040 = -1;

	t48 = (x3037%((x3038<x3039)/x3040));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x3061 = INT16_MIN;
	static int64_t x3062 = INT64_MIN;
	uint8_t x3063 = 0U;
	static int64_t x3064 = -1LL;
	static volatile int64_t t49 = -778LL;

	t49 = (x3061%((x3062<x3063)/x3064));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3221 = 56U;
	int64_t x3222 = INT64_MIN;
	uint16_t x3223 = UINT16_MAX;
	static volatile int8_t x3224 = 1;

	t50 = (x3221%((x3222<x3223)/x3224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3425 = 7028936368LL;
	static volatile int64_t x3426 = INT64_MIN;
	int64_t x3427 = 152LL;
	int8_t x3428 = -1;
	volatile int64_t t51 = -3518818373691197580LL;

	t51 = (x3425%((x3426<x3427)/x3428));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x3565 = -1;
	int16_t x3566 = 7;
	int32_t x3567 = 3028;
	int32_t t52 = 4080890;

	t52 = (x3565%((x3566<x3567)/x3568));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3645 = -1;
	int64_t x3646 = INT64_MIN;
	int8_t x3647 = -1;
	int64_t x3648 = -1LL;
	int64_t t53 = -2513806814023415150LL;

	t53 = (x3645%((x3646<x3647)/x3648));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x3654 = -11024539977074LL;
	uint16_t x3655 = UINT16_MAX;
	int32_t x3656 = -1;
	volatile uint64_t t54 = 2500323909353LLU;

	t54 = (x3653%((x3654<x3655)/x3656));

	if (t54 != 227216LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x3721 = -124038;
	int32_t x3722 = -212901157;
	int64_t x3723 = 4169072530403667LL;
	uint16_t x3724 = 1U;

	t55 = (x3721%((x3722<x3723)/x3724));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3750 = -1;
	static uint16_t x3751 = 3712U;
	static uint8_t x3752 = 1U;
	volatile int32_t t56 = 325616;

	t56 = (x3749%((x3750<x3751)/x3752));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x3769 = 3717689LLU;
	int64_t x3770 = -6332196642LL;
	static uint16_t x3771 = UINT16_MAX;
	int64_t x3772 = -1LL;
	uint64_t t57 = 356457856LLU;

	t57 = (x3769%((x3770<x3771)/x3772));

	if (t57 != 3717689LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3813 = 3;
	int16_t x3814 = INT16_MAX;
	uint64_t x3815 = 9332090548054066LLU;
	uint16_t x3816 = 1U;

	t58 = (x3813%((x3814<x3815)/x3816));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x4093 = 1U;
	int32_t x4094 = -1;
	volatile int8_t x4096 = -1;
	volatile int32_t t59 = -6210;

	t59 = (x4093%((x4094<x4095)/x4096));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4145 = -48553314015776LL;
	int32_t x4146 = -292462037;
	int16_t x4147 = INT16_MIN;
	int32_t x4148 = -1;
	int64_t t60 = 168659735589457LL;

	t60 = (x4145%((x4146<x4147)/x4148));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4189 = 518952796284LLU;
	uint16_t x4190 = 2412U;
	static volatile uint64_t x4191 = UINT64_MAX;
	int64_t x4192 = -1LL;
	volatile uint64_t t61 = 15LLU;

	t61 = (x4189%((x4190<x4191)/x4192));

	if (t61 != 518952796284LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4337 = 1U;
	int16_t x4338 = INT16_MIN;
	int64_t x4340 = -1LL;
	volatile int64_t t62 = 120650LL;

	t62 = (x4337%((x4338<x4339)/x4340));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x4367 = INT8_MIN;

	t63 = (x4365%((x4366<x4367)/x4368));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4438 = -1;
	int16_t x4439 = INT16_MAX;
	volatile int32_t t64 = -794964;

	t64 = (x4437%((x4438<x4439)/x4440));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4501 = 5U;
	volatile uint64_t x4502 = 1200LLU;
	int64_t x4503 = INT64_MIN;
	uint8_t x4504 = 1U;
	static uint32_t t65 = 32802322U;

	t65 = (x4501%((x4502<x4503)/x4504));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4609 = UINT64_MAX;
	int32_t x4610 = -43854;
	volatile int8_t x4611 = -32;
	uint64_t t66 = 29943635591LLU;

	t66 = (x4609%((x4610<x4611)/x4612));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4673 = 993;
	uint32_t x4674 = 286086501U;
	int64_t x4675 = INT64_MAX;

	t67 = (x4673%((x4674<x4675)/x4676));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x4847 = UINT64_MAX;
	static volatile int8_t x4848 = -1;
	static volatile int32_t t68 = -1279;

	t68 = (x4845%((x4846<x4847)/x4848));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4853 = INT16_MIN;
	static volatile int16_t x4854 = -1;
	int32_t x4855 = INT32_MAX;
	int16_t x4856 = -1;

	t69 = (x4853%((x4854<x4855)/x4856));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4873 = UINT16_MAX;
	int8_t x4874 = 9;
	uint16_t x4875 = 24670U;
	static int16_t x4876 = -1;
	volatile int32_t t70 = 465649299;

	t70 = (x4873%((x4874<x4875)/x4876));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4885 = -1746;
	int8_t x4887 = 53;
	static int8_t x4888 = -1;
	static int32_t t71 = 22;

	t71 = (x4885%((x4886<x4887)/x4888));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4890 = -1;
	int16_t x4891 = INT16_MAX;
	static volatile int64_t x4892 = -1LL;

	t72 = (x4889%((x4890<x4891)/x4892));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x5025 = 499U;
	uint8_t x5026 = UINT8_MAX;
	uint64_t x5027 = 3533246668469882LLU;
	int64_t x5028 = -1LL;

	t73 = (x5025%((x5026<x5027)/x5028));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5049 = INT8_MAX;
	int16_t x5050 = -388;
	uint16_t x5051 = 12U;
	static int32_t x5052 = -1;
	volatile int32_t t74 = 1;

	t74 = (x5049%((x5050<x5051)/x5052));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x5061 = 2U;
	uint64_t x5063 = UINT64_MAX;
	volatile int16_t x5064 = -1;
	int32_t t75 = -3386866;

	t75 = (x5061%((x5062<x5063)/x5064));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5089 = -1LL;
	int64_t x5090 = INT64_MIN;
	int16_t x5091 = INT16_MAX;
	int8_t x5092 = 1;
	int64_t t76 = 1279628368638LL;

	t76 = (x5089%((x5090<x5091)/x5092));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x5109 = 1U;
	volatile uint32_t x5110 = 34U;
	int8_t x5111 = INT8_MIN;
	int32_t x5112 = -1;
	volatile int32_t t77 = 15021996;

	t77 = (x5109%((x5110<x5111)/x5112));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5209 = UINT8_MAX;
	int16_t x5210 = INT16_MIN;

	t78 = (x5209%((x5210<x5211)/x5212));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5217 = 2183827U;
	static volatile int64_t x5218 = INT64_MIN;

	t79 = (x5217%((x5218<x5219)/x5220));

	if (t79 != 2183827U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5469 = 13U;
	volatile int64_t x5470 = INT64_MIN;
	int32_t x5471 = INT32_MIN;
	uint64_t x5472 = 1LLU;

	t80 = (x5469%((x5470<x5471)/x5472));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5553 = -550;
	int32_t x5554 = -1;
	static int16_t x5555 = INT16_MAX;
	volatile uint8_t x5556 = 1U;
	volatile int32_t t81 = 21904376;

	t81 = (x5553%((x5554<x5555)/x5556));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5585 = INT64_MIN;
	int8_t x5586 = -7;
	static uint8_t x5587 = 29U;
	int16_t x5588 = -1;

	t82 = (x5585%((x5586<x5587)/x5588));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x5641 = 14676748;
	static uint16_t x5642 = 23573U;
	static int16_t x5643 = INT16_MAX;
	volatile int8_t x5644 = -1;
	static volatile int32_t t83 = 4526801;

	t83 = (x5641%((x5642<x5643)/x5644));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5645 = 7228709508482944LLU;
	uint16_t x5646 = 3U;
	int8_t x5648 = -1;
	uint64_t t84 = 21296LLU;

	t84 = (x5645%((x5646<x5647)/x5648));

	if (t84 != 7228709508482944LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5778 = INT16_MIN;
	static int8_t x5779 = -1;
	int8_t x5780 = -1;
	volatile int64_t t85 = -22813019LL;

	t85 = (x5777%((x5778<x5779)/x5780));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5797 = -10;
	uint64_t x5798 = 227852LLU;
	int32_t x5800 = -1;

	t86 = (x5797%((x5798<x5799)/x5800));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5849 = INT32_MIN;
	volatile uint16_t x5851 = UINT16_MAX;
	int32_t x5852 = -1;
	volatile int32_t t87 = 33;

	t87 = (x5849%((x5850<x5851)/x5852));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5885 = INT32_MIN;
	int16_t x5886 = 10;
	int32_t x5887 = 17551733;
	uint8_t x5888 = 1U;

	t88 = (x5885%((x5886<x5887)/x5888));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5897 = INT64_MIN;
	int16_t x5898 = INT16_MIN;
	volatile uint16_t x5899 = 132U;
	int8_t x5900 = -1;
	static volatile int64_t t89 = 4511872172932LL;

	t89 = (x5897%((x5898<x5899)/x5900));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5941 = INT32_MIN;
	int32_t x5942 = INT32_MIN;
	int16_t x5943 = -1;
	int64_t x5944 = -1LL;
	volatile int64_t t90 = 5177049937882334LL;

	t90 = (x5941%((x5942<x5943)/x5944));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5953 = INT8_MIN;
	int8_t x5954 = INT8_MIN;
	static int64_t x5955 = -1LL;

	t91 = (x5953%((x5954<x5955)/x5956));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5978 = INT32_MIN;
	int16_t x5979 = INT16_MIN;
	int8_t x5980 = -1;

	t92 = (x5977%((x5978<x5979)/x5980));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x6041 = UINT32_MAX;
	volatile int16_t x6043 = 2;
	int32_t x6044 = 1;
	static uint32_t t93 = 29482U;

	t93 = (x6041%((x6042<x6043)/x6044));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6114 = -1;
	uint8_t x6115 = UINT8_MAX;
	static volatile uint8_t x6116 = 1U;
	int32_t t94 = -25770;

	t94 = (x6113%((x6114<x6115)/x6116));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6181 = INT32_MIN;
	int32_t x6183 = INT32_MAX;
	volatile int16_t x6184 = -1;

	t95 = (x6181%((x6182<x6183)/x6184));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x6201 = 702081U;
	int16_t x6203 = -1;

	t96 = (x6201%((x6202<x6203)/x6204));

	if (t96 != 702081U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6285 = UINT64_MAX;
	int8_t x6286 = INT8_MIN;
	volatile int64_t x6287 = INT64_MAX;
	int16_t x6288 = 1;

	t97 = (x6285%((x6286<x6287)/x6288));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x6321 = 0U;
	int64_t x6322 = 1LL;
	volatile int64_t x6324 = -1LL;
	int64_t t98 = -332207595847477790LL;

	t98 = (x6321%((x6322<x6323)/x6324));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6337 = 66139280LLU;
	uint32_t x6339 = UINT32_MAX;
	static int8_t x6340 = 1;
	volatile uint64_t t99 = 374LLU;

	t99 = (x6337%((x6338<x6339)/x6340));

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

