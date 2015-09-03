#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x7 = -1LL;
volatile int32_t t1 = 13;
volatile int8_t x183 = 5;
static uint16_t x184 = 1203U;
static volatile int32_t x186 = 1;
static uint64_t x187 = 552714923014863LLU;
int8_t x194 = 3;
int64_t x219 = INT64_MIN;
int32_t t6 = -1103777;
volatile uint16_t x293 = 2U;
uint8_t x295 = UINT8_MAX;
int32_t x313 = 0;
uint8_t x458 = 1U;
volatile int32_t x469 = 1478;
uint8_t x506 = 0U;
volatile uint32_t t15 = 1588U;
int16_t x925 = 4;
uint16_t x963 = UINT16_MAX;
int8_t x1142 = 25;
uint8_t x1221 = 0U;
volatile int32_t t23 = 50753;
volatile int64_t x1243 = -1LL;
volatile uint32_t t25 = UINT32_MAX;
uint32_t x1397 = 2570U;
volatile int64_t x1539 = -837139018196601955LL;
uint64_t x1709 = 1664371100LLU;
int8_t x1806 = 48;
int16_t x1906 = 1;
volatile uint16_t x1907 = 0U;
volatile int32_t t32 = 7;
int32_t t33 = 8117;
static uint64_t x1975 = 115022642938580830LLU;
int16_t x2265 = 1;
volatile uint8_t x2266 = 10U;
int8_t x2355 = INT8_MIN;
uint16_t x2389 = 2U;
int8_t x2406 = 3;
volatile int16_t x2407 = INT16_MAX;
static int64_t x2408 = INT64_MAX;
int64_t x2411 = INT64_MIN;
static int64_t x2433 = INT64_MAX;
uint16_t x2435 = 4932U;
volatile uint64_t x2436 = 194206023LLU;
uint32_t t44 = 9517U;
int8_t x2737 = 3;
uint8_t x2738 = 5U;
uint8_t x2774 = 1U;
uint8_t x2837 = 40U;
uint64_t x2840 = 2402724297535LLU;
volatile int8_t x2875 = -3;
static volatile int32_t x2876 = INT32_MAX;
uint16_t x2907 = UINT16_MAX;
uint8_t x3006 = 0U;
uint32_t t51 = 34898U;
uint64_t x3022 = 1LLU;
volatile int32_t t58 = -123;
uint8_t x3571 = 2U;
static int16_t x3572 = INT16_MIN;
volatile uint32_t t59 = 91U;
int32_t x3687 = INT32_MIN;
uint32_t x3732 = UINT32_MAX;
uint32_t x3738 = 1U;
uint16_t x3739 = 6U;
int16_t x3852 = -1;
int32_t t64 = 75;
static uint8_t x4026 = 9U;
int32_t t66 = 1820244;
static volatile int32_t t67 = -10463;
volatile int16_t x4185 = INT16_MAX;
int32_t x4187 = INT32_MIN;
volatile int32_t t68 = -7;
int8_t x4242 = 31;
volatile int16_t x4244 = INT16_MAX;
int8_t x4246 = 0;
int8_t x4446 = 39;
volatile uint64_t t72 = 3064419899570LLU;
uint64_t x4605 = 197LLU;
static uint8_t x4608 = 41U;
int32_t x4694 = 0;
static volatile int32_t t74 = 25636210;
uint16_t x4789 = 1U;
uint8_t x4790 = 0U;
int16_t x4816 = INT16_MAX;
uint64_t t77 = 56079LLU;
uint8_t x4857 = 24U;
uint8_t x4858 = 0U;
static int16_t x4860 = -876;
int32_t t78 = 0;
volatile int8_t x4904 = 11;
uint32_t t79 = 968474521U;
int32_t t80 = 482380777;
uint16_t x5131 = 6626U;
volatile int32_t t82 = 477;
int8_t x5166 = 1;
volatile int32_t t83 = 1;
static int16_t x5213 = 2;
int16_t x5243 = INT16_MIN;
volatile uint64_t x5765 = 1227289352179898542LLU;
int64_t x5767 = INT64_MIN;
uint64_t t90 = 66858LLU;
uint64_t x5791 = 1204345742LLU;
uint8_t x5870 = 5U;
volatile int16_t x5872 = -1;
int32_t x5988 = INT32_MIN;
uint16_t x5989 = 17U;
int64_t x5992 = INT64_MIN;
int8_t x6028 = -13;


void f0(void) {
	volatile uint32_t x5 = 1U;
	int16_t x6 = 1;
	volatile uint64_t x8 = 3549806548597849615LLU;
	volatile uint32_t t0 = 12720U;

	t0 = (x5<<(x6>>(x7<x8)));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x173 = 1;
	int16_t x174 = 0;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = UINT8_MAX;

	t1 = (x173<<(x174>>(x175<x176)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x181 = INT32_MAX;
	volatile uint16_t x182 = 0U;
	int32_t t2 = INT32_MAX;

	t2 = (x181<<(x182>>(x183<x184)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x185 = INT16_MAX;
	volatile int16_t x188 = 3;
	volatile int32_t t3 = 0;

	t3 = (x185<<(x186>>(x187<x188)));

	if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x193 = 884U;
	static volatile int8_t x195 = INT8_MIN;
	int16_t x196 = -13;
	static int32_t t4 = -1;

	t4 = (x193<<(x194>>(x195<x196)));

	if (t4 != 1768) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x217 = 586U;
	uint8_t x218 = 38U;
	static int8_t x220 = 6;
	int32_t t5 = -10896131;

	t5 = (x217<<(x218>>(x219<x220)));

	if (t5 != 307232768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x221 = 47U;
	uint16_t x222 = 0U;
	static volatile int32_t x223 = -1;
	static int16_t x224 = -1;

	t6 = (x221<<(x222>>(x223<x224)));

	if (t6 != 47) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x294 = 0U;
	int16_t x296 = -7;
	volatile int32_t t7 = -2484128;

	t7 = (x293<<(x294>>(x295<x296)));

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x314 = 0U;
	int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	volatile int32_t t8 = -40276;

	t8 = (x313<<(x314>>(x315<x316)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x377 = 21;
	uint16_t x378 = 15U;
	volatile int8_t x379 = -6;
	static int8_t x380 = -3;
	int32_t t9 = 0;

	t9 = (x377<<(x378>>(x379<x380)));

	if (t9 != 2688) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x441 = 5U;
	static uint8_t x442 = 2U;
	uint16_t x443 = UINT16_MAX;
	uint64_t x444 = 96955LLU;
	int32_t t10 = 2536;

	t10 = (x441<<(x442>>(x443<x444)));

	if (t10 != 10) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x457 = 1250U;
	int32_t x459 = -2008066;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t11 = 38;

	t11 = (x457<<(x458>>(x459<x460)));

	if (t11 != 1250) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x470 = 0;
	uint32_t x471 = 37U;
	int32_t x472 = -1;
	static int32_t t12 = 90311104;

	t12 = (x469<<(x470>>(x471<x472)));

	if (t12 != 1478) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x501 = 2477U;
	volatile int8_t x502 = 5;
	volatile int64_t x503 = INT64_MIN;
	uint32_t x504 = 1U;
	uint32_t t13 = 954U;

	t13 = (x501<<(x502>>(x503<x504)));

	if (t13 != 9908U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x505 = UINT16_MAX;
	uint64_t x507 = 3233LLU;
	uint32_t x508 = 197U;
	int32_t t14 = -735544154;

	t14 = (x505<<(x506>>(x507<x508)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x637 = 458U;
	uint16_t x638 = 5U;
	int64_t x639 = 1244215130906LL;
	uint32_t x640 = 840U;

	t15 = (x637<<(x638>>(x639<x640)));

	if (t15 != 14656U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x693 = UINT8_MAX;
	static uint32_t x694 = 39U;
	static int16_t x695 = INT16_MIN;
	uint64_t x696 = UINT64_MAX;
	static volatile int32_t t16 = -8218;

	t16 = (x693<<(x694>>(x695<x696)));

	if (t16 != 133693440) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x926 = 0U;
	static int64_t x927 = INT64_MIN;
	static int8_t x928 = -1;
	volatile int32_t t17 = 910605580;

	t17 = (x925<<(x926>>(x927<x928)));

	if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x961 = 1968U;
	static uint32_t x962 = 7U;
	int8_t x964 = -48;
	static volatile int32_t t18 = -49858;

	t18 = (x961<<(x962>>(x963<x964)));

	if (t18 != 251904) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x977 = 78064LL;
	static uint16_t x978 = 24U;
	int64_t x979 = INT64_MIN;
	int8_t x980 = 0;
	volatile int64_t t19 = -1424462978810LL;

	t19 = (x977<<(x978>>(x979<x980)));

	if (t19 != 319750144LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1093 = 17048;
	int32_t x1094 = 0;
	int8_t x1095 = -1;
	int16_t x1096 = 2929;
	int32_t t20 = 1;

	t20 = (x1093<<(x1094>>(x1095<x1096)));

	if (t20 != 17048) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x1141 = 581225U;
	int16_t x1143 = INT16_MIN;
	int16_t x1144 = 65;
	uint32_t t21 = 20760729U;

	t21 = (x1141<<(x1142>>(x1143<x1144)));

	if (t21 != 2380697600U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1185 = 6775822LLU;
	static volatile uint8_t x1186 = 0U;
	static volatile uint64_t x1187 = 65774820683797235LLU;
	static int8_t x1188 = 0;
	volatile uint64_t t22 = 36447832707934214LLU;

	t22 = (x1185<<(x1186>>(x1187<x1188)));

	if (t22 != 6775822LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1222 = 0U;
	static uint8_t x1223 = UINT8_MAX;
	volatile uint64_t x1224 = UINT64_MAX;

	t23 = (x1221<<(x1222>>(x1223<x1224)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1241 = INT32_MAX;
	static volatile uint16_t x1242 = 1U;
	volatile int16_t x1244 = INT16_MAX;
	int32_t t24 = INT32_MAX;

	t24 = (x1241<<(x1242>>(x1243<x1244)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1301 = UINT32_MAX;
	uint16_t x1302 = 0U;
	static int64_t x1303 = -45671958378083LL;
	uint16_t x1304 = 1855U;

	t25 = (x1301<<(x1302>>(x1303<x1304)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1398 = 1U;
	int8_t x1399 = INT8_MIN;
	uint64_t x1400 = 20938796627LLU;
	volatile uint32_t t26 = 102563174U;

	t26 = (x1397<<(x1398>>(x1399<x1400)));

	if (t26 != 5140U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1537 = 5U;
	int8_t x1538 = 27;
	static uint16_t x1540 = 2566U;
	int32_t t27 = 35904;

	t27 = (x1537<<(x1538>>(x1539<x1540)));

	if (t27 != 40960) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1641 = INT32_MAX;
	static int16_t x1642 = 0;
	uint64_t x1643 = UINT64_MAX;
	int64_t x1644 = INT64_MAX;
	int32_t t28 = INT32_MAX;

	t28 = (x1641<<(x1642>>(x1643<x1644)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1710 = 7U;
	int64_t x1711 = -759752LL;
	int64_t x1712 = INT64_MIN;
	static uint64_t t29 = 622LLU;

	t29 = (x1709<<(x1710>>(x1711<x1712)));

	if (t29 != 213039500800LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1805 = 0;
	int32_t x1807 = INT32_MIN;
	uint8_t x1808 = UINT8_MAX;
	volatile int32_t t30 = 604;

	t30 = (x1805<<(x1806>>(x1807<x1808)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1817 = UINT32_MAX;
	int8_t x1818 = 0;
	static volatile uint32_t x1819 = 119U;
	volatile int8_t x1820 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = (x1817<<(x1818>>(x1819<x1820)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1905 = 0;
	int64_t x1908 = -27019227981LL;

	t32 = (x1905<<(x1906>>(x1907<x1908)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x1957 = 46U;
	static int16_t x1958 = 11;
	uint16_t x1959 = 3U;
	volatile int32_t x1960 = 3801;

	t33 = (x1957<<(x1958>>(x1959<x1960)));

	if (t33 != 1472) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1973 = INT64_MAX;
	int8_t x1974 = 1;
	int32_t x1976 = INT32_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x1973<<(x1974>>(x1975<x1976)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2017 = 0LL;
	int8_t x2018 = 21;
	static int8_t x2019 = INT8_MIN;
	uint16_t x2020 = 219U;
	volatile int64_t t35 = -2810786549LL;

	t35 = (x2017<<(x2018>>(x2019<x2020)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2185 = 999695080532LLU;
	uint8_t x2186 = 45U;
	int64_t x2187 = -1LL;
	static uint32_t x2188 = 20U;
	uint64_t t36 = 2539778488071817991LLU;

	t36 = (x2185<<(x2186>>(x2187<x2188)));

	if (t36 != 4193025075055689728LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2267 = 8U;
	volatile int8_t x2268 = 0;
	int32_t t37 = 847993637;

	t37 = (x2265<<(x2266>>(x2267<x2268)));

	if (t37 != 1024) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2269 = INT16_MAX;
	static int32_t x2270 = 3;
	volatile uint64_t x2271 = UINT64_MAX;
	static uint64_t x2272 = UINT64_MAX;
	volatile int32_t t38 = 7168;

	t38 = (x2269<<(x2270>>(x2271<x2272)));

	if (t38 != 262136) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2353 = 46U;
	uint8_t x2354 = 2U;
	uint32_t x2356 = 5181U;
	static int32_t t39 = 45125354;

	t39 = (x2353<<(x2354>>(x2355<x2356)));

	if (t39 != 184) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2390 = 11U;
	uint64_t x2391 = UINT64_MAX;
	volatile int8_t x2392 = INT8_MAX;
	int32_t t40 = -1;

	t40 = (x2389<<(x2390>>(x2391<x2392)));

	if (t40 != 4096) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2405 = 45U;
	volatile int32_t t41 = -1;

	t41 = (x2405<<(x2406>>(x2407<x2408)));

	if (t41 != 90) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2409 = 15504LLU;
	int8_t x2410 = 6;
	static int64_t x2412 = INT64_MIN;
	static uint64_t t42 = 3876LLU;

	t42 = (x2409<<(x2410>>(x2411<x2412)));

	if (t42 != 992256LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2434 = 1U;
	static int64_t t43 = INT64_MAX;

	t43 = (x2433<<(x2434>>(x2435<x2436)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2561 = 2123485038U;
	uint8_t x2562 = 1U;
	volatile int32_t x2563 = INT32_MIN;
	int8_t x2564 = -1;

	t44 = (x2561<<(x2562>>(x2563<x2564)));

	if (t44 != 2123485038U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2739 = INT32_MIN;
	static uint32_t x2740 = UINT32_MAX;
	static int32_t t45 = -243730;

	t45 = (x2737<<(x2738>>(x2739<x2740)));

	if (t45 != 12) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2773 = INT8_MAX;
	int16_t x2775 = INT16_MIN;
	static uint8_t x2776 = UINT8_MAX;
	volatile int32_t t46 = -1244;

	t46 = (x2773<<(x2774>>(x2775<x2776)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2838 = 5U;
	int32_t x2839 = -1;
	volatile int32_t t47 = 173064;

	t47 = (x2837<<(x2838>>(x2839<x2840)));

	if (t47 != 1280) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2873 = 1635U;
	int8_t x2874 = 23;
	volatile uint32_t t48 = 85489088U;

	t48 = (x2873<<(x2874>>(x2875<x2876)));

	if (t48 != 3348480U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2905 = UINT64_MAX;
	uint16_t x2906 = 52U;
	int32_t x2908 = INT32_MAX;
	volatile uint64_t t49 = 6676239619505751476LLU;

	t49 = (x2905<<(x2906>>(x2907<x2908)));

	if (t49 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2977 = 1;
	uint8_t x2978 = 2U;
	static uint8_t x2979 = 15U;
	static int16_t x2980 = INT16_MIN;
	int32_t t50 = -30143688;

	t50 = (x2977<<(x2978>>(x2979<x2980)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x3005 = 48436049U;
	int8_t x3007 = INT8_MIN;
	int64_t x3008 = INT64_MIN;

	t51 = (x3005<<(x3006>>(x3007<x3008)));

	if (t51 != 48436049U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3021 = 481U;
	int64_t x3023 = INT64_MIN;
	static int8_t x3024 = 1;
	volatile int32_t t52 = -203653909;

	t52 = (x3021<<(x3022>>(x3023<x3024)));

	if (t52 != 481) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3025 = 66767159LL;
	uint8_t x3026 = 5U;
	int8_t x3027 = INT8_MIN;
	int8_t x3028 = 0;
	volatile int64_t t53 = 225159075770LL;

	t53 = (x3025<<(x3026>>(x3027<x3028)));

	if (t53 != 267068636LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3213 = INT16_MAX;
	uint8_t x3214 = 2U;
	int16_t x3215 = INT16_MAX;
	int32_t x3216 = -3;
	static int32_t t54 = -1;

	t54 = (x3213<<(x3214>>(x3215<x3216)));

	if (t54 != 131068) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3293 = INT8_MAX;
	static int32_t x3294 = 2;
	int32_t x3295 = INT32_MIN;
	volatile int16_t x3296 = -1;
	volatile int32_t t55 = 97408;

	t55 = (x3293<<(x3294>>(x3295<x3296)));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3317 = 491650847U;
	volatile uint8_t x3318 = 0U;
	int16_t x3319 = -1;
	int16_t x3320 = INT16_MIN;
	uint32_t t56 = 10142273U;

	t56 = (x3317<<(x3318>>(x3319<x3320)));

	if (t56 != 491650847U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3353 = 209960;
	int16_t x3354 = 3;
	int8_t x3355 = 6;
	static volatile uint16_t x3356 = 0U;
	static volatile int32_t t57 = -51400;

	t57 = (x3353<<(x3354>>(x3355<x3356)));

	if (t57 != 1679680) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3401 = INT16_MAX;
	int32_t x3402 = 0;
	uint64_t x3403 = UINT64_MAX;
	static int64_t x3404 = INT64_MIN;

	t58 = (x3401<<(x3402>>(x3403<x3404)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3569 = 29U;
	uint16_t x3570 = 10U;

	t59 = (x3569<<(x3570>>(x3571<x3572)));

	if (t59 != 29696U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3685 = 0;
	int8_t x3686 = 1;
	uint8_t x3688 = 15U;
	volatile int32_t t60 = 642268095;

	t60 = (x3685<<(x3686>>(x3687<x3688)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3729 = INT64_MAX;
	uint8_t x3730 = 1U;
	int64_t x3731 = -1LL;
	int64_t t61 = INT64_MAX;

	t61 = (x3729<<(x3730>>(x3731<x3732)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3737 = 254U;
	int32_t x3740 = INT32_MIN;
	int32_t t62 = -799549919;

	t62 = (x3737<<(x3738>>(x3739<x3740)));

	if (t62 != 508) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3849 = 45;
	int32_t x3850 = 1;
	static uint8_t x3851 = 18U;
	static volatile int32_t t63 = 493900659;

	t63 = (x3849<<(x3850>>(x3851<x3852)));

	if (t63 != 90) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3853 = 119100202;
	uint8_t x3854 = 3U;
	uint8_t x3855 = UINT8_MAX;
	int8_t x3856 = INT8_MAX;

	t64 = (x3853<<(x3854>>(x3855<x3856)));

	if (t64 != 952801616) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4025 = 2216U;
	int32_t x4027 = -29;
	uint64_t x4028 = 1385LLU;
	static uint32_t t65 = 2008353834U;

	t65 = (x4025<<(x4026>>(x4027<x4028)));

	if (t65 != 1134592U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4137 = 13U;
	uint8_t x4138 = 1U;
	volatile int32_t x4139 = -1;
	static uint32_t x4140 = 998862U;

	t66 = (x4137<<(x4138>>(x4139<x4140)));

	if (t66 != 26) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x4145 = UINT8_MAX;
	uint32_t x4146 = 0U;
	uint16_t x4147 = 8U;
	int16_t x4148 = -159;

	t67 = (x4145<<(x4146>>(x4147<x4148)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4186 = 1;
	int64_t x4188 = 14LL;

	t68 = (x4185<<(x4186>>(x4187<x4188)));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4241 = UINT16_MAX;
	volatile uint16_t x4243 = 4U;
	volatile int32_t t69 = 10076;

	t69 = (x4241<<(x4242>>(x4243<x4244)));

	if (t69 != 2147450880) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4245 = 22U;
	static volatile uint8_t x4247 = UINT8_MAX;
	int8_t x4248 = 16;
	static int32_t t70 = 23619898;

	t70 = (x4245<<(x4246>>(x4247<x4248)));

	if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4445 = 8594073564252LLU;
	volatile int8_t x4447 = INT8_MIN;
	int64_t x4448 = -1LL;
	uint64_t t71 = 69504925LLU;

	t71 = (x4445<<(x4446>>(x4447<x4448)));

	if (t71 != 4505769640854552576LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4545 = 17616957905583519LLU;
	int8_t x4546 = 0;
	uint32_t x4547 = 1068U;
	int16_t x4548 = -13050;

	t72 = (x4545<<(x4546>>(x4547<x4548)));

	if (t72 != 17616957905583519LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x4606 = 4;
	uint32_t x4607 = 225825923U;
	volatile uint64_t t73 = 867928256279LLU;

	t73 = (x4605<<(x4606>>(x4607<x4608)));

	if (t73 != 3152LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4693 = 591795202;
	volatile int64_t x4695 = INT64_MAX;
	static int8_t x4696 = -1;

	t74 = (x4693<<(x4694>>(x4695<x4696)));

	if (t74 != 591795202) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4777 = 3;
	int32_t x4778 = 27;
	uint16_t x4779 = 68U;
	static int64_t x4780 = 21LL;
	int32_t t75 = 4580;

	t75 = (x4777<<(x4778>>(x4779<x4780)));

	if (t75 != 402653184) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4791 = INT16_MAX;
	static volatile int32_t x4792 = -45620;
	int32_t t76 = -96410520;

	t76 = (x4789<<(x4790>>(x4791<x4792)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4813 = 2429600493LLU;
	volatile uint16_t x4814 = 0U;
	volatile uint32_t x4815 = 660849U;

	t77 = (x4813<<(x4814>>(x4815<x4816)));

	if (t77 != 2429600493LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4859 = 2119384439777LL;

	t78 = (x4857<<(x4858>>(x4859<x4860)));

	if (t78 != 24) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4901 = UINT32_MAX;
	int16_t x4902 = 1;
	static int64_t x4903 = 35641928272129LL;

	t79 = (x4901<<(x4902>>(x4903<x4904)));

	if (t79 != 4294967294U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5029 = UINT8_MAX;
	uint8_t x5030 = 0U;
	volatile uint32_t x5031 = UINT32_MAX;
	static int8_t x5032 = 40;

	t80 = (x5029<<(x5030>>(x5031<x5032)));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5113 = 51;
	uint8_t x5114 = 12U;
	uint8_t x5115 = 115U;
	static int16_t x5116 = INT16_MAX;
	int32_t t81 = 20470;

	t81 = (x5113<<(x5114>>(x5115<x5116)));

	if (t81 != 3264) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5129 = 13U;
	int8_t x5130 = 1;
	static int32_t x5132 = -1;

	t82 = (x5129<<(x5130>>(x5131<x5132)));

	if (t82 != 26) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x5165 = INT16_MAX;
	int64_t x5167 = -1LL;
	int16_t x5168 = -1;

	t83 = (x5165<<(x5166>>(x5167<x5168)));

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5181 = 19950937148328679LL;
	static uint32_t x5182 = 0U;
	int16_t x5183 = INT16_MIN;
	int64_t x5184 = INT64_MIN;
	int64_t t84 = -1020914805LL;

	t84 = (x5181<<(x5182>>(x5183<x5184)));

	if (t84 != 19950937148328679LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5214 = 1;
	int32_t x5215 = -1;
	int8_t x5216 = INT8_MAX;
	static int32_t t85 = -3099;

	t85 = (x5213<<(x5214>>(x5215<x5216)));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5241 = 40859360934674LLU;
	static int16_t x5242 = 2;
	int16_t x5244 = INT16_MIN;
	volatile uint64_t t86 = 1001362LLU;

	t86 = (x5241<<(x5242>>(x5243<x5244)));

	if (t86 != 163437443738696LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5501 = 0;
	static int16_t x5502 = 3;
	static uint64_t x5503 = 1391325925508LLU;
	int8_t x5504 = INT8_MIN;
	static int32_t t87 = 1963069;

	t87 = (x5501<<(x5502>>(x5503<x5504)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5653 = 28U;
	volatile int16_t x5654 = 0;
	int16_t x5655 = -1;
	volatile uint16_t x5656 = 348U;
	int32_t t88 = 163145236;

	t88 = (x5653<<(x5654>>(x5655<x5656)));

	if (t88 != 28) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5741 = 462184107015892LLU;
	int8_t x5742 = INT8_MAX;
	int16_t x5743 = -14963;
	volatile uint16_t x5744 = 26U;
	volatile uint64_t t89 = 4293225286743677LLU;

	t89 = (x5741<<(x5742>>(x5743<x5744)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5766 = 27U;
	int64_t x5768 = 405985395143482153LL;

	t90 = (x5765<<(x5766>>(x5767<x5768)));

	if (t90 != 478852886023225344LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5789 = 11783;
	int8_t x5790 = 2;
	static int16_t x5792 = INT16_MAX;
	int32_t t91 = 57712279;

	t91 = (x5789<<(x5790>>(x5791<x5792)));

	if (t91 != 47132) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5797 = 41LL;
	uint8_t x5798 = 4U;
	static int8_t x5799 = 6;
	int8_t x5800 = INT8_MIN;
	static volatile int64_t t92 = 138379447644LL;

	t92 = (x5797<<(x5798>>(x5799<x5800)));

	if (t92 != 656LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5869 = INT8_MAX;
	uint16_t x5871 = 86U;
	static int32_t t93 = 0;

	t93 = (x5869<<(x5870>>(x5871<x5872)));

	if (t93 != 4064) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x5917 = 1U;
	volatile uint16_t x5918 = 12U;
	volatile int64_t x5919 = 1838009659311650032LL;
	int32_t x5920 = INT32_MIN;
	volatile int32_t t94 = 30;

	t94 = (x5917<<(x5918>>(x5919<x5920)));

	if (t94 != 4096) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x5985 = 0U;
	static volatile uint8_t x5986 = 23U;
	int64_t x5987 = -30810986275LL;
	int32_t t95 = -155373;

	t95 = (x5985<<(x5986>>(x5987<x5988)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5990 = 1;
	int32_t x5991 = -1;
	int32_t t96 = 13227361;

	t96 = (x5989<<(x5990>>(x5991<x5992)));

	if (t96 != 34) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6025 = UINT32_MAX;
	uint8_t x6026 = 0U;
	volatile uint64_t x6027 = 352703112942660LLU;
	uint32_t t97 = UINT32_MAX;

	t97 = (x6025<<(x6026>>(x6027<x6028)));

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x6089 = 1747U;
	int16_t x6090 = 1;
	int16_t x6091 = 16198;
	volatile uint16_t x6092 = UINT16_MAX;
	volatile uint32_t t98 = 169237104U;

	t98 = (x6089<<(x6090>>(x6091<x6092)));

	if (t98 != 1747U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x6125 = 21U;
	uint8_t x6126 = 12U;
	int64_t x6127 = INT64_MAX;
	uint16_t x6128 = 56U;
	volatile int32_t t99 = -90938424;

	t99 = (x6125<<(x6126>>(x6127<x6128)));

	if (t99 != 86016) { NG(); } else { ; }
	
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

