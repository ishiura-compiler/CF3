#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = -33092008;
int32_t x136 = 0;
volatile uint64_t t3 = 17313099737LLU;
uint64_t x457 = UINT64_MAX;
int8_t x458 = INT8_MIN;
uint8_t x536 = 19U;
int16_t x585 = -1;
uint8_t x593 = UINT8_MAX;
static uint32_t x635 = 108U;
uint64_t x717 = 22453120LLU;
volatile uint64_t t11 = 2504LLU;
uint16_t x771 = 2U;
uint32_t x903 = 1110846784U;
uint64_t x1021 = UINT64_MAX;
uint64_t t16 = 84544505946262585LLU;
uint16_t x1068 = 27U;
volatile int64_t x1093 = INT64_MIN;
uint8_t x1094 = 0U;
int32_t x1126 = INT32_MAX;
uint64_t x1198 = 29786LLU;
int32_t x1199 = 51;
int64_t x1238 = INT64_MIN;
volatile uint16_t x1239 = UINT16_MAX;
uint16_t x1309 = 266U;
volatile int32_t t24 = 1974;
static uint16_t x1599 = 16093U;
uint8_t x1686 = 15U;
int16_t x1688 = 1;
static uint32_t x1728 = 19U;
static int32_t x1769 = INT32_MIN;
static int64_t t33 = -3683019140086661LL;
int32_t x1946 = 84137656;
static int64_t x2089 = -1LL;
volatile int8_t x2244 = 1;
int64_t x2270 = INT64_MIN;
uint64_t x2306 = UINT64_MAX;
uint8_t x2412 = 7U;
int16_t x2430 = -1;
int64_t x2538 = INT64_MIN;
uint16_t x2578 = 57U;
static int16_t x2581 = INT16_MAX;
uint64_t t46 = 33536708685073LLU;
int8_t x2917 = INT8_MAX;
uint8_t x2920 = 1U;
volatile int32_t t50 = -21;
volatile int32_t x2978 = -1;
int64_t x3015 = 136463046775834844LL;
int64_t t54 = 2697696LL;
int64_t x3097 = -15544051961LL;
int8_t x3101 = -1;
uint32_t x3102 = UINT32_MAX;
uint64_t x3165 = 301982LLU;
volatile int16_t x3167 = INT16_MAX;
static volatile int64_t x3262 = INT64_MIN;
static int8_t x3264 = 31;
volatile int32_t x3329 = -268663;
static uint8_t x3453 = 1U;
int64_t x3456 = 1LL;
volatile int64_t t64 = 88818580079LL;
volatile int16_t x3557 = INT16_MIN;
static int64_t t68 = 7371688764LL;
static uint64_t x3697 = UINT64_MAX;
uint64_t x3698 = 29472746961952LLU;
volatile uint64_t t69 = 515198658215522LLU;
static int16_t x3785 = -77;
volatile int16_t x3794 = INT16_MIN;
uint8_t x3796 = 13U;
uint64_t x3833 = 438707376821331204LLU;
uint16_t x3853 = 369U;
volatile uint32_t x3855 = 1997U;
static uint8_t x3856 = 27U;
int8_t x3879 = INT8_MAX;
int8_t x3919 = INT8_MAX;
static volatile uint32_t x3983 = 47U;
uint8_t x3984 = 13U;
uint32_t x4025 = 525626U;
static int32_t x4061 = INT32_MIN;
uint8_t x4269 = 0U;
uint16_t x4292 = 8U;
static uint64_t x4319 = 3806949588981468LLU;
volatile int32_t t86 = 3391;
static volatile int8_t x4529 = -1;
static int8_t x4785 = INT8_MAX;
int16_t x4818 = -489;
uint64_t x4919 = 154654183LLU;
volatile uint16_t x5062 = UINT16_MAX;
volatile uint8_t x5088 = 9U;
int8_t x5117 = -1;
uint16_t x5119 = 4845U;
uint16_t x5120 = 25U;
int64_t x5194 = -225853279379LL;
int64_t x5195 = 614918591313594LL;
uint16_t x5209 = 1526U;
int16_t x5210 = -1;
static uint16_t x5293 = UINT16_MAX;
static volatile uint64_t t99 = 234LLU;


void f0(void) {
	uint8_t x53 = UINT8_MAX;
	static int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MAX;
	uint8_t x56 = 45U;
	volatile int64_t t0 = 131565959649673LL;

	t0 = (x53*(x54&(x55>>x56)));

	if (t0 != 58490880LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MAX;
	int32_t x80 = 2;
	int64_t t1 = 1081082967365LL;

	t1 = (x77*(x78&(x79>>x80)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int32_t x86 = -62786;
	volatile int16_t x87 = INT16_MAX;
	uint8_t x88 = 17U;

	t2 = (x85*(x86&(x87>>x88)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x133 = 3503781945271394299LLU;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = 54888130338891090LLU;

	t3 = (x133*(x134&(x135>>x136)));

	if (t3 != 7301902092438030080LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x289 = INT64_MAX;
	volatile int16_t x290 = -1;
	uint8_t x291 = 0U;
	volatile uint16_t x292 = 4U;
	int64_t t4 = 33622138370LL;

	t4 = (x289*(x290&(x291>>x292)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x459 = 15U;
	uint8_t x460 = 1U;
	static uint64_t t5 = 252LLU;

	t5 = (x457*(x458&(x459>>x460)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x465 = UINT64_MAX;
	uint64_t x466 = UINT64_MAX;
	int8_t x467 = 15;
	int8_t x468 = 1;
	uint64_t t6 = 55370829182633661LLU;

	t6 = (x465*(x466&(x467>>x468)));

	if (t6 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x533 = 6U;
	int32_t x534 = INT32_MIN;
	uint64_t x535 = UINT64_MAX;
	uint64_t t7 = 17314723238LLU;

	t7 = (x533*(x534&(x535>>x536)));

	if (t7 != 211093347631104LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x586 = 1716U;
	uint16_t x587 = 0U;
	volatile uint16_t x588 = 7U;
	volatile int32_t t8 = 15;

	t8 = (x585*(x586&(x587>>x588)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x594 = -1582;
	uint32_t x595 = 9974166U;
	uint8_t x596 = 3U;
	uint32_t t9 = 8154U;

	t9 = (x593*(x594&(x595>>x596)));

	if (t9 != 317526510U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x633 = 304LL;
	int32_t x634 = INT32_MIN;
	uint8_t x636 = 1U;
	static volatile int64_t t10 = 31424983257494575LL;

	t10 = (x633*(x634&(x635>>x636)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x718 = 3;
	uint32_t x719 = 437U;
	uint8_t x720 = 16U;

	t11 = (x717*(x718&(x719>>x720)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x769 = 15403983179500952LL;
	int64_t x770 = -1LL;
	uint16_t x772 = 20U;
	volatile int64_t t12 = -1LL;

	t12 = (x769*(x770&(x771>>x772)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x901 = -1;
	uint32_t x902 = 1284434912U;
	static volatile int8_t x904 = 15;
	static uint32_t t13 = 7U;

	t13 = (x901*(x902&(x903>>x904)));

	if (t13 != 4294934432U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x917 = 813279664U;
	static int32_t x918 = INT32_MIN;
	int8_t x919 = INT8_MAX;
	int8_t x920 = 3;
	volatile uint32_t t14 = 805U;

	t14 = (x917*(x918&(x919>>x920)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x969 = INT8_MIN;
	int32_t x970 = INT32_MAX;
	int16_t x971 = INT16_MAX;
	int8_t x972 = 4;
	volatile int32_t t15 = 90963;

	t15 = (x969*(x970&(x971>>x972)));

	if (t15 != -262016) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1022 = 7098;
	static uint16_t x1023 = UINT16_MAX;
	int16_t x1024 = 1;

	t16 = (x1021*(x1022&(x1023>>x1024)));

	if (t16 != 18446744073709544518LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1065 = -1;
	uint8_t x1066 = UINT8_MAX;
	int8_t x1067 = INT8_MAX;
	volatile int32_t t17 = -56;

	t17 = (x1065*(x1066&(x1067>>x1068)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x1095 = 13886673688047978LL;
	uint8_t x1096 = 11U;
	int64_t t18 = 272998590633386521LL;

	t18 = (x1093*(x1094&(x1095>>x1096)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x1125 = UINT32_MAX;
	int32_t x1127 = INT32_MAX;
	static int32_t x1128 = 0;
	uint32_t t19 = 6888U;

	t19 = (x1125*(x1126&(x1127>>x1128)));

	if (t19 != 2147483649U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1197 = -1;
	int8_t x1200 = 9;
	volatile uint64_t t20 = 99128431750LLU;

	t20 = (x1197*(x1198&(x1199>>x1200)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1237 = -1;
	static int16_t x1240 = 2;
	int64_t t21 = 149864955105856094LL;

	t21 = (x1237*(x1238&(x1239>>x1240)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1281 = 4448U;
	volatile int32_t x1282 = -27090;
	volatile uint8_t x1283 = UINT8_MAX;
	uint16_t x1284 = 0U;
	int32_t t22 = 3;

	t22 = (x1281*(x1282&(x1283>>x1284)));

	if (t22 != 204608) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1310 = 1093060U;
	uint64_t x1311 = 214653235956488502LLU;
	uint16_t x1312 = 7U;
	static uint64_t t23 = 125563121097LLU;

	t23 = (x1309*(x1310&(x1311>>x1312)));

	if (t23 != 2451456LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1585 = INT32_MIN;
	int8_t x1586 = -1;
	uint8_t x1587 = 6U;
	static volatile uint8_t x1588 = 27U;

	t24 = (x1585*(x1586&(x1587>>x1588)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x1597 = INT8_MIN;
	int16_t x1598 = INT16_MIN;
	volatile uint32_t x1600 = 21U;
	volatile int32_t t25 = 14870288;

	t25 = (x1597*(x1598&(x1599>>x1600)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1633 = 49;
	int8_t x1634 = INT8_MIN;
	int16_t x1635 = 89;
	static int8_t x1636 = 1;
	static volatile int32_t t26 = -1656575;

	t26 = (x1633*(x1634&(x1635>>x1636)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1685 = INT64_MIN;
	uint8_t x1687 = 0U;
	static int64_t t27 = 536439LL;

	t27 = (x1685*(x1686&(x1687>>x1688)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1697 = -1;
	volatile int32_t x1698 = INT32_MIN;
	int32_t x1699 = INT32_MAX;
	volatile uint16_t x1700 = 9U;
	volatile int32_t t28 = 5279;

	t28 = (x1697*(x1698&(x1699>>x1700)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1725 = INT32_MIN;
	int32_t x1726 = INT32_MIN;
	uint8_t x1727 = UINT8_MAX;
	volatile int32_t t29 = 1;

	t29 = (x1725*(x1726&(x1727>>x1728)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1770 = UINT64_MAX;
	uint64_t x1771 = UINT64_MAX;
	int32_t x1772 = 0;
	volatile uint64_t t30 = 8336564LLU;

	t30 = (x1769*(x1770&(x1771>>x1772)));

	if (t30 != 2147483648LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1805 = INT64_MAX;
	static volatile int8_t x1806 = INT8_MIN;
	static uint8_t x1807 = 35U;
	volatile uint8_t x1808 = 14U;
	static int64_t t31 = -185530LL;

	t31 = (x1805*(x1806&(x1807>>x1808)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1909 = INT16_MIN;
	int64_t x1910 = INT64_MIN;
	int16_t x1911 = 330;
	uint8_t x1912 = 2U;
	int64_t t32 = 36916395LL;

	t32 = (x1909*(x1910&(x1911>>x1912)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1913 = -1;
	static volatile int64_t x1914 = 227786354269053LL;
	int64_t x1915 = 1477859514558038099LL;
	int8_t x1916 = 0;

	t33 = (x1913*(x1914&(x1915>>x1916)));

	if (t33 != -80410380402769LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1945 = INT32_MIN;
	uint64_t x1947 = UINT64_MAX;
	static int64_t x1948 = 29LL;
	uint64_t t34 = 1350176LLU;

	t34 = (x1945*(x1946&(x1947>>x1948)));

	if (t34 != 18266059833268502528LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2033 = 0U;
	static int8_t x2034 = 1;
	static int16_t x2035 = 171;
	int16_t x2036 = 1;
	int32_t t35 = 33963781;

	t35 = (x2033*(x2034&(x2035>>x2036)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2090 = INT8_MIN;
	int32_t x2091 = INT32_MAX;
	volatile uint8_t x2092 = 0U;
	int64_t t36 = 3323967842811413843LL;

	t36 = (x2089*(x2090&(x2091>>x2092)));

	if (t36 != -2147483520LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2097 = 92493157722725LL;
	uint32_t x2098 = 441255532U;
	int32_t x2099 = 1458351;
	int16_t x2100 = 6;
	volatile int64_t t37 = -3538529626LL;

	t37 = (x2097*(x2098&(x2099>>x2100)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x2241 = 80167072U;
	int8_t x2242 = INT8_MIN;
	uint32_t x2243 = 117U;
	volatile uint32_t t38 = 863U;

	t38 = (x2241*(x2242&(x2243>>x2244)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2253 = 3470556548LLU;
	uint8_t x2254 = 7U;
	int32_t x2255 = INT32_MAX;
	static uint16_t x2256 = 31U;
	volatile uint64_t t39 = 2131249706912837611LLU;

	t39 = (x2253*(x2254&(x2255>>x2256)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2269 = 42;
	int8_t x2271 = 3;
	uint8_t x2272 = 3U;
	static volatile int64_t t40 = -10769958623LL;

	t40 = (x2269*(x2270&(x2271>>x2272)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2305 = INT16_MIN;
	uint16_t x2307 = 15224U;
	int8_t x2308 = 30;
	uint64_t t41 = 37001964LLU;

	t41 = (x2305*(x2306&(x2307>>x2308)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2409 = UINT16_MAX;
	volatile int64_t x2410 = -1LL;
	uint8_t x2411 = 2U;
	volatile int64_t t42 = 1434419059423LL;

	t42 = (x2409*(x2410&(x2411>>x2412)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x2429 = INT32_MIN;
	uint64_t x2431 = 3361672720357984LLU;
	int8_t x2432 = 0;
	volatile uint64_t t43 = 5393553173557768326LLU;

	t43 = (x2429*(x2430&(x2431>>x2432)));

	if (t43 != 14543093859388227584LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2537 = INT8_MIN;
	int16_t x2539 = INT16_MAX;
	uint8_t x2540 = 4U;
	volatile int64_t t44 = 0LL;

	t44 = (x2537*(x2538&(x2539>>x2540)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2577 = INT8_MIN;
	uint16_t x2579 = 7926U;
	int8_t x2580 = 0;
	volatile int32_t t45 = -1555781;

	t45 = (x2577*(x2578&(x2579>>x2580)));

	if (t45 != -6144) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2582 = INT64_MAX;
	uint64_t x2583 = 47859570LLU;
	int8_t x2584 = 12;

	t46 = (x2581*(x2582&(x2583>>x2584)));

	if (t46 != 382849628LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2701 = INT32_MIN;
	static int32_t x2702 = 190;
	int64_t x2703 = INT64_MAX;
	int8_t x2704 = 1;
	int64_t t47 = 905696895LL;

	t47 = (x2701*(x2702&(x2703>>x2704)));

	if (t47 != -408021893120LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2749 = -646;
	static int16_t x2750 = 1556;
	static volatile uint16_t x2751 = UINT16_MAX;
	volatile uint8_t x2752 = 0U;
	volatile int32_t t48 = 22003321;

	t48 = (x2749*(x2750&(x2751>>x2752)));

	if (t48 != -1005176) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2897 = INT32_MAX;
	static volatile int32_t x2898 = INT32_MIN;
	int32_t x2899 = INT32_MAX;
	static uint16_t x2900 = 10U;
	volatile int32_t t49 = 631050;

	t49 = (x2897*(x2898&(x2899>>x2900)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x2918 = -3;
	int8_t x2919 = 3;

	t50 = (x2917*(x2918&(x2919>>x2920)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2945 = INT32_MIN;
	volatile int32_t x2946 = INT32_MIN;
	uint16_t x2947 = 2587U;
	uint8_t x2948 = 3U;
	int32_t t51 = 246686048;

	t51 = (x2945*(x2946&(x2947>>x2948)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2977 = INT8_MAX;
	volatile int8_t x2979 = INT8_MAX;
	uint64_t x2980 = 1LLU;
	int32_t t52 = -16727;

	t52 = (x2977*(x2978&(x2979>>x2980)));

	if (t52 != 8001) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2997 = INT64_MIN;
	int32_t x2998 = INT32_MAX;
	volatile uint64_t x2999 = 461798637318LLU;
	int8_t x3000 = 14;
	static uint64_t t53 = 1986357015134439055LLU;

	t53 = (x2997*(x2998&(x2999>>x3000)));

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3013 = 1043;
	uint16_t x3014 = UINT16_MAX;
	uint16_t x3016 = 0U;

	t54 = (x3013*(x3014&(x3015>>x3016)));

	if (t54 != 36542548LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3098 = 533883637958932LLU;
	uint64_t x3099 = UINT64_MAX;
	uint16_t x3100 = 47U;
	uint64_t t55 = 2220803874LLU;

	t55 = (x3097*(x3098&(x3099>>x3100)));

	if (t55 != 18445179906848820108LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3103 = 276LL;
	int64_t x3104 = 0LL;
	static volatile int64_t t56 = 218767743LL;

	t56 = (x3101*(x3102&(x3103>>x3104)));

	if (t56 != -276LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3166 = INT16_MIN;
	static uint8_t x3168 = 1U;
	uint64_t t57 = 688416314055380LLU;

	t57 = (x3165*(x3166&(x3167>>x3168)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3185 = UINT8_MAX;
	static volatile int16_t x3186 = -1;
	static uint64_t x3187 = 5906403LLU;
	int8_t x3188 = 0;
	uint64_t t58 = 1056820LLU;

	t58 = (x3185*(x3186&(x3187>>x3188)));

	if (t58 != 1506132765LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3261 = -1;
	int8_t x3263 = INT8_MAX;
	static int64_t t59 = 94316229740LL;

	t59 = (x3261*(x3262&(x3263>>x3264)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3281 = INT8_MIN;
	volatile uint8_t x3282 = 47U;
	uint16_t x3283 = 5792U;
	static int8_t x3284 = 7;
	static volatile int32_t t60 = 2019;

	t60 = (x3281*(x3282&(x3283>>x3284)));

	if (t60 != -5760) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3330 = INT8_MIN;
	uint64_t x3331 = 2076677237418LLU;
	uint8_t x3332 = 15U;
	uint64_t t61 = 7LLU;

	t61 = (x3329*(x3330&(x3331>>x3332)));

	if (t61 != 18446727047163985664LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3454 = INT64_MIN;
	int64_t x3455 = INT64_MAX;
	int64_t t62 = -577447219111178315LL;

	t62 = (x3453*(x3454&(x3455>>x3456)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3481 = 1U;
	int8_t x3482 = -1;
	int16_t x3483 = 0;
	static volatile uint8_t x3484 = 1U;
	int32_t t63 = 11;

	t63 = (x3481*(x3482&(x3483>>x3484)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3525 = 130369LL;
	int64_t x3526 = INT64_MIN;
	int8_t x3527 = INT8_MAX;
	static uint16_t x3528 = 0U;

	t64 = (x3525*(x3526&(x3527>>x3528)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3558 = -8028;
	static uint64_t x3559 = 78451LLU;
	uint16_t x3560 = 53U;
	uint64_t t65 = 19908464730450LLU;

	t65 = (x3557*(x3558&(x3559>>x3560)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3605 = UINT8_MAX;
	volatile int64_t x3606 = INT64_MIN;
	uint32_t x3607 = 2U;
	int8_t x3608 = 0;
	volatile int64_t t66 = 0LL;

	t66 = (x3605*(x3606&(x3607>>x3608)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3661 = 11U;
	int8_t x3662 = INT8_MIN;
	int32_t x3663 = INT32_MAX;
	static uint16_t x3664 = 2U;
	volatile uint32_t t67 = 3726U;

	t67 = (x3661*(x3662&(x3663>>x3664)));

	if (t67 != 1610611328U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3689 = -97529940;
	int64_t x3690 = INT64_MIN;
	int32_t x3691 = INT32_MAX;
	uint16_t x3692 = 0U;

	t68 = (x3689*(x3690&(x3691>>x3692)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3699 = 8U;
	static uint8_t x3700 = 2U;

	t69 = (x3697*(x3698&(x3699>>x3700)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3786 = UINT16_MAX;
	uint64_t x3787 = UINT64_MAX;
	int8_t x3788 = 8;
	uint64_t t70 = 93505LLU;

	t70 = (x3785*(x3786&(x3787>>x3788)));

	if (t70 != 18446744073704505421LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3789 = INT16_MIN;
	uint16_t x3790 = 162U;
	uint32_t x3791 = 94951U;
	int32_t x3792 = 13;
	static volatile uint32_t t71 = 650272U;

	t71 = (x3789*(x3790&(x3791>>x3792)));

	if (t71 != 4294901760U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3793 = -1;
	uint16_t x3795 = 7113U;
	static int32_t t72 = 22;

	t72 = (x3793*(x3794&(x3795>>x3796)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3834 = 3U;
	volatile int64_t x3835 = 6LL;
	volatile uint8_t x3836 = 0U;
	static volatile uint64_t t73 = 16015874LLU;

	t73 = (x3833*(x3834&(x3835>>x3836)));

	if (t73 != 877414753642662408LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3854 = UINT32_MAX;
	uint32_t t74 = 3U;

	t74 = (x3853*(x3854&(x3855>>x3856)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3877 = 603794U;
	static int16_t x3878 = -277;
	static uint8_t x3880 = 12U;
	uint32_t t75 = 14908U;

	t75 = (x3877*(x3878&(x3879>>x3880)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3917 = -193355100882LL;
	static volatile uint64_t x3918 = 307784LLU;
	int8_t x3920 = 0;
	volatile uint64_t t76 = 737890423218667LLU;

	t76 = (x3917*(x3918&(x3919>>x3920)));

	if (t76 != 18446730152142288112LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3981 = 2U;
	int32_t x3982 = INT32_MIN;
	static volatile uint32_t t77 = 7333803U;

	t77 = (x3981*(x3982&(x3983>>x3984)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4026 = INT32_MAX;
	volatile uint8_t x4027 = 1U;
	uint16_t x4028 = 14U;
	volatile uint32_t t78 = 1897U;

	t78 = (x4025*(x4026&(x4027>>x4028)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4045 = -3;
	uint8_t x4046 = 0U;
	uint32_t x4047 = 234338U;
	int8_t x4048 = 0;
	uint32_t t79 = 637U;

	t79 = (x4045*(x4046&(x4047>>x4048)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4062 = INT8_MIN;
	uint32_t x4063 = 234035518U;
	int16_t x4064 = 0;
	volatile uint32_t t80 = 6361U;

	t80 = (x4061*(x4062&(x4063>>x4064)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4125 = INT64_MIN;
	int8_t x4126 = INT8_MIN;
	static uint64_t x4127 = 40126007384002535LLU;
	static int8_t x4128 = 9;
	uint64_t t81 = 9590726945LLU;

	t81 = (x4125*(x4126&(x4127>>x4128)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4270 = -12287932;
	int8_t x4271 = INT8_MAX;
	static int16_t x4272 = 19;
	volatile int32_t t82 = -742828173;

	t82 = (x4269*(x4270&(x4271>>x4272)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4289 = -1;
	int64_t x4290 = INT64_MAX;
	static uint8_t x4291 = 1U;
	volatile int64_t t83 = 28946610832450LL;

	t83 = (x4289*(x4290&(x4291>>x4292)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4317 = -1LL;
	int64_t x4318 = -1LL;
	uint8_t x4320 = 23U;
	static volatile uint64_t t84 = 0LLU;

	t84 = (x4317*(x4318&(x4319>>x4320)));

	if (t84 != 18446744073255727861LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4341 = INT32_MIN;
	int8_t x4342 = INT8_MIN;
	uint64_t x4343 = UINT64_MAX;
	uint8_t x4344 = 0U;
	volatile uint64_t t85 = 62339234156570842LLU;

	t85 = (x4341*(x4342&(x4343>>x4344)));

	if (t85 != 274877906944LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4441 = 16U;
	static uint8_t x4442 = 121U;
	volatile int16_t x4443 = INT16_MAX;
	static uint16_t x4444 = 1U;

	t86 = (x4441*(x4442&(x4443>>x4444)));

	if (t86 != 1936) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4530 = 754;
	static volatile int32_t x4531 = 0;
	int8_t x4532 = 0;
	volatile int32_t t87 = -1;

	t87 = (x4529*(x4530&(x4531>>x4532)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x4609 = 51331759866LL;
	static int64_t x4610 = 1302975072760LL;
	static int64_t x4611 = 1972444LL;
	int16_t x4612 = 3;
	volatile int64_t t88 = -185763040070LL;

	t88 = (x4609*(x4610&(x4611>>x4612)));

	if (t88 != 5901509768274288LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4786 = 7;
	uint8_t x4787 = 1U;
	int16_t x4788 = 2;
	volatile int32_t t89 = 855;

	t89 = (x4785*(x4786&(x4787>>x4788)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4817 = -1;
	uint16_t x4819 = 46U;
	uint8_t x4820 = 2U;
	static volatile int32_t t90 = 251;

	t90 = (x4817*(x4818&(x4819>>x4820)));

	if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4913 = 89696;
	int16_t x4914 = 2;
	volatile uint16_t x4915 = 31U;
	int8_t x4916 = 1;
	volatile int32_t t91 = 1;

	t91 = (x4913*(x4914&(x4915>>x4916)));

	if (t91 != 179392) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4917 = 2704U;
	int16_t x4918 = -52;
	uint32_t x4920 = 1U;
	uint64_t t92 = 432413LLU;

	t92 = (x4917*(x4918&(x4919>>x4920)));

	if (t92 != 209092316160LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5061 = -25640;
	uint32_t x5063 = 60U;
	uint8_t x5064 = 13U;
	volatile uint32_t t93 = 0U;

	t93 = (x5061*(x5062&(x5063>>x5064)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5085 = INT8_MIN;
	int8_t x5086 = 31;
	int64_t x5087 = INT64_MAX;
	volatile int64_t t94 = -14549189333664898LL;

	t94 = (x5085*(x5086&(x5087>>x5088)));

	if (t94 != -3968LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5118 = -1;
	int32_t t95 = 6743;

	t95 = (x5117*(x5118&(x5119>>x5120)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5193 = INT32_MAX;
	uint8_t x5196 = 21U;
	int64_t t96 = 5151LL;

	t96 = (x5193*(x5194&(x5195>>x5196)));

	if (t96 != 3388215946374367LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5211 = 27U;
	uint8_t x5212 = 1U;
	volatile int32_t t97 = 1850458;

	t97 = (x5209*(x5210&(x5211>>x5212)));

	if (t97 != 19838) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5285 = -4;
	uint32_t x5286 = 944U;
	static uint16_t x5287 = 1U;
	uint8_t x5288 = 11U;
	uint32_t t98 = 66U;

	t98 = (x5285*(x5286&(x5287>>x5288)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5294 = UINT64_MAX;
	volatile int32_t x5295 = 20216544;
	static int16_t x5296 = 22;

	t99 = (x5293*(x5294&(x5295>>x5296)));

	if (t99 != 262140LLU) { NG(); } else { ; }
	
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

