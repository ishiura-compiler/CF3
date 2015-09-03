#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
static volatile int32_t t0 = -33;
static int8_t x53 = -1;
int8_t x54 = 8;
static volatile uint16_t x55 = UINT16_MAX;
static int16_t x81 = 3651;
volatile int32_t t3 = -24881;
int16_t x98 = 26;
uint32_t x206 = 97798U;
int32_t x262 = -124;
volatile int32_t t8 = -598279;
int8_t x529 = INT8_MIN;
int32_t t11 = 1;
static int32_t x677 = INT32_MAX;
static uint8_t x695 = 12U;
volatile uint16_t x805 = 15U;
uint32_t x808 = 2U;
volatile int16_t x943 = 8263;
static volatile int32_t t18 = 1135;
int32_t t20 = 15;
static int32_t x1438 = -1;
volatile int16_t x1495 = INT16_MAX;
static int8_t x1496 = 12;
uint8_t x1580 = 11U;
volatile uint8_t x1744 = 0U;
volatile uint64_t x1869 = UINT64_MAX;
uint8_t x1870 = 28U;
int64_t x1893 = -1LL;
volatile uint16_t x1894 = 2U;
int64_t x1907 = INT64_MAX;
static int8_t x2281 = INT8_MAX;
static uint8_t x2284 = 3U;
int8_t x2329 = -1;
static volatile int64_t x2381 = -1LL;
int32_t x2382 = -1;
volatile int16_t x2472 = 15;
volatile int32_t t36 = -1804631;
int32_t x2521 = INT32_MIN;
int8_t x2524 = 1;
int64_t x2697 = INT64_MAX;
static uint64_t x2713 = 8490805911205LLU;
static uint8_t x2716 = 0U;
volatile int8_t x2814 = 3;
static volatile uint32_t x2828 = 0U;
static uint16_t x2973 = 3U;
volatile int64_t x3089 = -174765462256LL;
uint32_t x3095 = 134455U;
static int8_t x3102 = INT8_MAX;
int32_t t51 = -30094;
volatile uint64_t x3251 = 808257564LLU;
int8_t x3332 = 4;
uint8_t x3361 = 60U;
volatile int8_t x3363 = 1;
int32_t t54 = -49;
uint32_t x3379 = 158563513U;
static uint8_t x3380 = 20U;
int32_t t55 = 7759;
volatile uint16_t x3422 = 1U;
static volatile uint32_t x3434 = 486921U;
uint8_t x3595 = 0U;
volatile int8_t x3672 = 1;
int8_t x3832 = 1;
uint64_t x3919 = 5437LLU;
uint8_t x3920 = 12U;
uint8_t x3976 = 25U;
volatile int32_t t65 = -1;
int32_t x4130 = INT32_MAX;
uint8_t x4189 = UINT8_MAX;
volatile uint64_t x4192 = 0LLU;
static uint32_t x4222 = UINT32_MAX;
volatile int32_t t70 = -1;
volatile uint64_t x4316 = 22LLU;
uint8_t x4466 = 24U;
int64_t x4467 = INT64_MAX;
int32_t x4497 = INT32_MIN;
uint16_t x4499 = 62U;
uint8_t x4500 = 0U;
int32_t x4659 = INT32_MAX;
volatile int32_t t76 = 12608573;
static int64_t x4661 = -1LL;
volatile int32_t t77 = 2278;
volatile int8_t x4900 = 0;
int32_t t79 = 1;
volatile int32_t t80 = 36;
uint64_t x5072 = 6LLU;
uint32_t x5073 = 172025237U;
volatile int32_t t84 = -155;
int64_t x5230 = -1LL;
int16_t x5232 = 1;
uint8_t x5310 = UINT8_MAX;
static uint16_t x5311 = UINT16_MAX;
volatile int32_t t87 = -215;
static uint8_t x5336 = 0U;
static uint64_t x5353 = 2372114748493LLU;
volatile int32_t t90 = -15997;
int16_t x5562 = INT16_MAX;
volatile int32_t t91 = 514790;
int8_t x5804 = 0;
uint16_t x5918 = 613U;
uint32_t x5920 = 1U;
uint8_t x5973 = 4U;
int32_t t96 = -24816372;
volatile int16_t x5993 = INT16_MIN;
volatile int32_t t98 = 120;


void f0(void) {
	uint64_t x1 = 26850950LLU;
	static volatile uint8_t x2 = 0U;
	int32_t x4 = 0;

	t0 = (x1<=(x2-(x3>>x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x56 = 11U;
	int32_t t1 = -2303333;

	t1 = (x53<=(x54-(x55>>x56)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x77 = INT32_MIN;
	volatile uint64_t x78 = 46002114970142159LLU;
	static volatile int8_t x79 = 1;
	uint16_t x80 = 26U;
	volatile int32_t t2 = 409;

	t2 = (x77<=(x78-(x79>>x80)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x82 = 13;
	static uint8_t x83 = 6U;
	int8_t x84 = 25;

	t3 = (x81<=(x82-(x83>>x84)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x97 = 70760526LL;
	volatile uint32_t x99 = 37U;
	uint8_t x100 = 23U;
	int32_t t4 = -27102408;

	t4 = (x97<=(x98-(x99>>x100)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = -1LL;
	uint64_t x107 = 806881505154032LLU;
	uint16_t x108 = 5U;
	int32_t t5 = 20;

	t5 = (x105<=(x106-(x107>>x108)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x205 = 5U;
	static int8_t x207 = INT8_MAX;
	static uint8_t x208 = 24U;
	volatile int32_t t6 = -3226;

	t6 = (x205<=(x206-(x207>>x208)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x261 = INT8_MAX;
	uint16_t x263 = UINT16_MAX;
	static int8_t x264 = 26;
	int32_t t7 = -2985;

	t7 = (x261<=(x262-(x263>>x264)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x273 = -1LL;
	uint32_t x274 = 241647604U;
	uint32_t x275 = 778487994U;
	uint32_t x276 = 11U;

	t8 = (x273<=(x274-(x275>>x276)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x397 = INT32_MAX;
	int32_t x398 = -33;
	int16_t x399 = 463;
	volatile uint16_t x400 = 15U;
	volatile int32_t t9 = 238;

	t9 = (x397<=(x398-(x399>>x400)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x530 = INT64_MIN;
	static int16_t x531 = 1;
	static volatile uint16_t x532 = 13U;
	volatile int32_t t10 = -14700357;

	t10 = (x529<=(x530-(x531>>x532)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x601 = UINT32_MAX;
	static uint8_t x602 = UINT8_MAX;
	uint16_t x603 = UINT16_MAX;
	int16_t x604 = 0;

	t11 = (x601<=(x602-(x603>>x604)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x678 = INT16_MAX;
	uint32_t x679 = UINT32_MAX;
	uint8_t x680 = 5U;
	static int32_t t12 = -7103;

	t12 = (x677<=(x678-(x679>>x680)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x693 = 18U;
	static uint64_t x694 = 54898415LLU;
	int16_t x696 = 0;
	static int32_t t13 = -2901818;

	t13 = (x693<=(x694-(x695>>x696)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x705 = 1;
	static uint16_t x706 = 287U;
	uint32_t x707 = 7614U;
	uint32_t x708 = 2U;
	volatile int32_t t14 = -54751;

	t14 = (x705<=(x706-(x707>>x708)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x806 = 28LLU;
	volatile uint64_t x807 = 21008064759723LLU;
	int32_t t15 = -31705;

	t15 = (x805<=(x806-(x807>>x808)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x901 = 2656631U;
	int8_t x902 = INT8_MAX;
	int16_t x903 = INT16_MAX;
	volatile uint8_t x904 = 11U;
	volatile int32_t t16 = 937;

	t16 = (x901<=(x902-(x903>>x904)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x941 = UINT64_MAX;
	uint8_t x942 = UINT8_MAX;
	int8_t x944 = 0;
	int32_t t17 = -10;

	t17 = (x941<=(x942-(x943>>x944)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1033 = INT64_MIN;
	static uint16_t x1034 = 1U;
	int32_t x1035 = 0;
	int8_t x1036 = 2;

	t18 = (x1033<=(x1034-(x1035>>x1036)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1105 = INT64_MIN;
	uint16_t x1106 = UINT16_MAX;
	static int32_t x1107 = 7;
	static int16_t x1108 = 6;
	volatile int32_t t19 = 261;

	t19 = (x1105<=(x1106-(x1107>>x1108)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1225 = 7U;
	volatile int8_t x1226 = INT8_MIN;
	uint8_t x1227 = UINT8_MAX;
	uint8_t x1228 = 5U;

	t20 = (x1225<=(x1226-(x1227>>x1228)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1409 = INT16_MIN;
	int16_t x1410 = -380;
	int8_t x1411 = 1;
	int8_t x1412 = 0;
	static volatile int32_t t21 = 1;

	t21 = (x1409<=(x1410-(x1411>>x1412)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1437 = INT16_MAX;
	int16_t x1439 = INT16_MAX;
	int8_t x1440 = 6;
	volatile int32_t t22 = 14566940;

	t22 = (x1437<=(x1438-(x1439>>x1440)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1493 = 29LLU;
	uint8_t x1494 = UINT8_MAX;
	int32_t t23 = -4383;

	t23 = (x1493<=(x1494-(x1495>>x1496)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1577 = INT8_MAX;
	uint16_t x1578 = 603U;
	volatile int64_t x1579 = 0LL;
	volatile int32_t t24 = -97415;

	t24 = (x1577<=(x1578-(x1579>>x1580)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x1741 = INT32_MIN;
	uint32_t x1742 = UINT32_MAX;
	uint8_t x1743 = 15U;
	volatile int32_t t25 = -9954794;

	t25 = (x1741<=(x1742-(x1743>>x1744)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1777 = INT16_MIN;
	int32_t x1778 = -35859424;
	volatile int32_t x1779 = INT32_MAX;
	uint16_t x1780 = 2U;
	int32_t t26 = -111;

	t26 = (x1777<=(x1778-(x1779>>x1780)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1871 = INT16_MAX;
	uint64_t x1872 = 15LLU;
	static int32_t t27 = 1794805;

	t27 = (x1869<=(x1870-(x1871>>x1872)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1895 = 518034LLU;
	int32_t x1896 = 17;
	int32_t t28 = -35137302;

	t28 = (x1893<=(x1894-(x1895>>x1896)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1901 = INT64_MIN;
	static int8_t x1902 = -3;
	uint8_t x1903 = 3U;
	uint16_t x1904 = 0U;
	int32_t t29 = 359;

	t29 = (x1901<=(x1902-(x1903>>x1904)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1905 = UINT16_MAX;
	int16_t x1906 = 1;
	static int16_t x1908 = 12;
	static int32_t t30 = 7;

	t30 = (x1905<=(x1906-(x1907>>x1908)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1961 = 1LLU;
	uint32_t x1962 = UINT32_MAX;
	int64_t x1963 = 7099907497797LL;
	volatile int16_t x1964 = 2;
	int32_t t31 = 224563;

	t31 = (x1961<=(x1962-(x1963>>x1964)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1985 = UINT8_MAX;
	int16_t x1986 = 564;
	uint8_t x1987 = UINT8_MAX;
	uint8_t x1988 = 31U;
	int32_t t32 = -92637;

	t32 = (x1985<=(x1986-(x1987>>x1988)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2282 = 6U;
	int8_t x2283 = 1;
	static volatile int32_t t33 = 7712426;

	t33 = (x2281<=(x2282-(x2283>>x2284)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2330 = 191U;
	volatile uint32_t x2331 = 182U;
	volatile int64_t x2332 = 24LL;
	volatile int32_t t34 = 671;

	t34 = (x2329<=(x2330-(x2331>>x2332)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2383 = 227213864931LL;
	int8_t x2384 = 1;
	static int32_t t35 = -97;

	t35 = (x2381<=(x2382-(x2383>>x2384)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2469 = 1;
	static uint16_t x2470 = UINT16_MAX;
	volatile int8_t x2471 = 1;

	t36 = (x2469<=(x2470-(x2471>>x2472)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2522 = -17;
	uint64_t x2523 = 481774280608858212LLU;
	int32_t t37 = -8133207;

	t37 = (x2521<=(x2522-(x2523>>x2524)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2649 = 17;
	volatile uint32_t x2650 = 82656677U;
	static volatile uint64_t x2651 = 994LLU;
	volatile uint64_t x2652 = 4LLU;
	volatile int32_t t38 = 268137;

	t38 = (x2649<=(x2650-(x2651>>x2652)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2698 = 2038127;
	int16_t x2699 = INT16_MAX;
	int16_t x2700 = 7;
	int32_t t39 = -3337;

	t39 = (x2697<=(x2698-(x2699>>x2700)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2714 = 217U;
	int8_t x2715 = 52;
	volatile int32_t t40 = 12;

	t40 = (x2713<=(x2714-(x2715>>x2716)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2749 = 23506U;
	volatile uint64_t x2750 = UINT64_MAX;
	static uint16_t x2751 = 9U;
	uint8_t x2752 = 7U;
	static volatile int32_t t41 = 4558034;

	t41 = (x2749<=(x2750-(x2751>>x2752)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2813 = 12170LLU;
	static volatile int8_t x2815 = 7;
	uint8_t x2816 = 3U;
	volatile int32_t t42 = -256730;

	t42 = (x2813<=(x2814-(x2815>>x2816)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2825 = 10U;
	uint64_t x2826 = 728360430LLU;
	uint16_t x2827 = UINT16_MAX;
	int32_t t43 = -12653204;

	t43 = (x2825<=(x2826-(x2827>>x2828)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2913 = INT64_MAX;
	int64_t x2914 = INT64_MIN;
	uint8_t x2915 = 15U;
	volatile uint16_t x2916 = 4U;
	volatile int32_t t44 = -13293;

	t44 = (x2913<=(x2914-(x2915>>x2916)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2974 = 308656379;
	static int32_t x2975 = INT32_MAX;
	uint8_t x2976 = 5U;
	int32_t t45 = -163;

	t45 = (x2973<=(x2974-(x2975>>x2976)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2989 = INT16_MIN;
	uint8_t x2990 = 0U;
	int8_t x2991 = INT8_MAX;
	uint32_t x2992 = 2U;
	int32_t t46 = -355805;

	t46 = (x2989<=(x2990-(x2991>>x2992)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3001 = -39;
	volatile uint64_t x3002 = 1419391888763244LLU;
	uint64_t x3003 = UINT64_MAX;
	static volatile int16_t x3004 = 6;
	int32_t t47 = 9400498;

	t47 = (x3001<=(x3002-(x3003>>x3004)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3090 = 0U;
	int8_t x3091 = 1;
	static uint16_t x3092 = 30U;
	volatile int32_t t48 = -1006;

	t48 = (x3089<=(x3090-(x3091>>x3092)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3093 = INT64_MIN;
	uint8_t x3094 = 27U;
	int16_t x3096 = 4;
	static volatile int32_t t49 = -1;

	t49 = (x3093<=(x3094-(x3095>>x3096)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3101 = 3609861LLU;
	int32_t x3103 = INT32_MAX;
	uint8_t x3104 = 7U;
	static int32_t t50 = -37085097;

	t50 = (x3101<=(x3102-(x3103>>x3104)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3225 = -1;
	uint64_t x3226 = UINT64_MAX;
	volatile int64_t x3227 = INT64_MAX;
	volatile uint16_t x3228 = 19U;

	t51 = (x3225<=(x3226-(x3227>>x3228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3249 = INT32_MIN;
	static uint16_t x3250 = 2547U;
	int32_t x3252 = 43;
	int32_t t52 = -19675;

	t52 = (x3249<=(x3250-(x3251>>x3252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3329 = INT16_MIN;
	int8_t x3330 = INT8_MIN;
	static int16_t x3331 = INT16_MAX;
	int32_t t53 = -854964;

	t53 = (x3329<=(x3330-(x3331>>x3332)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3362 = INT8_MIN;
	uint8_t x3364 = 25U;

	t54 = (x3361<=(x3362-(x3363>>x3364)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3377 = 197U;
	int32_t x3378 = -504182732;

	t55 = (x3377<=(x3378-(x3379>>x3380)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3421 = INT8_MIN;
	static uint32_t x3423 = 3207903U;
	uint16_t x3424 = 10U;
	volatile int32_t t56 = -29510354;

	t56 = (x3421<=(x3422-(x3423>>x3424)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3433 = INT8_MAX;
	volatile int16_t x3435 = INT16_MAX;
	volatile uint8_t x3436 = 19U;
	static volatile int32_t t57 = -1756;

	t57 = (x3433<=(x3434-(x3435>>x3436)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3469 = -5789590;
	int8_t x3470 = 11;
	volatile uint16_t x3471 = 893U;
	uint8_t x3472 = 1U;
	int32_t t58 = 324;

	t58 = (x3469<=(x3470-(x3471>>x3472)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3593 = 49217246LLU;
	int32_t x3594 = -206916;
	int32_t x3596 = 19;
	volatile int32_t t59 = 6384;

	t59 = (x3593<=(x3594-(x3595>>x3596)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3669 = INT8_MIN;
	volatile int16_t x3670 = INT16_MIN;
	uint8_t x3671 = UINT8_MAX;
	int32_t t60 = 14;

	t60 = (x3669<=(x3670-(x3671>>x3672)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3721 = 5224U;
	uint64_t x3722 = 912338488LLU;
	int8_t x3723 = INT8_MAX;
	static int32_t x3724 = 10;
	volatile int32_t t61 = 1535;

	t61 = (x3721<=(x3722-(x3723>>x3724)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3829 = 5U;
	static int64_t x3830 = -991716265985078LL;
	int64_t x3831 = INT64_MAX;
	volatile int32_t t62 = 5893;

	t62 = (x3829<=(x3830-(x3831>>x3832)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3909 = INT8_MAX;
	int64_t x3910 = -35576575740785702LL;
	int16_t x3911 = 6;
	int8_t x3912 = 3;
	volatile int32_t t63 = 1227;

	t63 = (x3909<=(x3910-(x3911>>x3912)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3917 = UINT16_MAX;
	volatile int8_t x3918 = INT8_MAX;
	int32_t t64 = 1044;

	t64 = (x3917<=(x3918-(x3919>>x3920)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x3973 = INT32_MAX;
	int32_t x3974 = -3;
	uint32_t x3975 = UINT32_MAX;

	t65 = (x3973<=(x3974-(x3975>>x3976)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4129 = 7;
	volatile uint8_t x4131 = 10U;
	uint8_t x4132 = 0U;
	volatile int32_t t66 = 8084287;

	t66 = (x4129<=(x4130-(x4131>>x4132)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4169 = INT32_MIN;
	static uint16_t x4170 = UINT16_MAX;
	int32_t x4171 = INT32_MAX;
	static int8_t x4172 = 7;
	volatile int32_t t67 = 12197441;

	t67 = (x4169<=(x4170-(x4171>>x4172)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4190 = 34;
	uint32_t x4191 = 7036623U;
	int32_t t68 = -1278;

	t68 = (x4189<=(x4190-(x4191>>x4192)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4205 = 56U;
	volatile int64_t x4206 = -1LL;
	volatile uint64_t x4207 = 57845128831363LLU;
	int16_t x4208 = 15;
	volatile int32_t t69 = -20535063;

	t69 = (x4205<=(x4206-(x4207>>x4208)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4221 = INT32_MIN;
	static volatile uint32_t x4223 = 1766303665U;
	int8_t x4224 = 0;

	t70 = (x4221<=(x4222-(x4223>>x4224)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4313 = UINT64_MAX;
	int8_t x4314 = INT8_MIN;
	static uint8_t x4315 = UINT8_MAX;
	int32_t t71 = 51904;

	t71 = (x4313<=(x4314-(x4315>>x4316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4361 = -14;
	uint16_t x4362 = UINT16_MAX;
	int32_t x4363 = INT32_MAX;
	uint8_t x4364 = 30U;
	static volatile int32_t t72 = 3964;

	t72 = (x4361<=(x4362-(x4363>>x4364)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x4465 = -1;
	uint8_t x4468 = 62U;
	int32_t t73 = 3467838;

	t73 = (x4465<=(x4466-(x4467>>x4468)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4498 = INT32_MAX;
	int32_t t74 = 191269;

	t74 = (x4497<=(x4498-(x4499>>x4500)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x4605 = UINT64_MAX;
	uint16_t x4606 = 2029U;
	static uint64_t x4607 = 64223345257LLU;
	static int64_t x4608 = 18LL;
	volatile int32_t t75 = 104262;

	t75 = (x4605<=(x4606-(x4607>>x4608)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4657 = -1;
	uint8_t x4658 = 39U;
	int32_t x4660 = 0;

	t76 = (x4657<=(x4658-(x4659>>x4660)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4662 = -11;
	int32_t x4663 = 8;
	uint16_t x4664 = 1U;

	t77 = (x4661<=(x4662-(x4663>>x4664)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4897 = INT16_MIN;
	volatile uint64_t x4898 = 446579LLU;
	uint16_t x4899 = 12200U;
	int32_t t78 = 171406;

	t78 = (x4897<=(x4898-(x4899>>x4900)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4929 = 3U;
	int64_t x4930 = -945350141127850773LL;
	static int64_t x4931 = INT64_MAX;
	static int16_t x4932 = 12;

	t79 = (x4929<=(x4930-(x4931>>x4932)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x4961 = INT8_MAX;
	uint16_t x4962 = UINT16_MAX;
	int16_t x4963 = 8;
	uint16_t x4964 = 14U;

	t80 = (x4961<=(x4962-(x4963>>x4964)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5037 = -1;
	int32_t x5038 = -1;
	static int32_t x5039 = INT32_MAX;
	static uint32_t x5040 = 1U;
	int32_t t81 = 1070769004;

	t81 = (x5037<=(x5038-(x5039>>x5040)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x5069 = INT64_MIN;
	int8_t x5070 = INT8_MIN;
	static volatile int16_t x5071 = 4006;
	static int32_t t82 = -61339159;

	t82 = (x5069<=(x5070-(x5071>>x5072)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5074 = INT16_MIN;
	uint16_t x5075 = UINT16_MAX;
	int16_t x5076 = 1;
	static volatile int32_t t83 = -2478;

	t83 = (x5073<=(x5074-(x5075>>x5076)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5129 = 557U;
	int16_t x5130 = 1;
	static volatile int8_t x5131 = 1;
	static uint32_t x5132 = 1U;

	t84 = (x5129<=(x5130-(x5131>>x5132)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5213 = INT64_MIN;
	static int8_t x5214 = INT8_MIN;
	volatile int32_t x5215 = INT32_MAX;
	int32_t x5216 = 1;
	int32_t t85 = 119;

	t85 = (x5213<=(x5214-(x5215>>x5216)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5229 = -1;
	int32_t x5231 = 56926246;
	volatile int32_t t86 = 1549312;

	t86 = (x5229<=(x5230-(x5231>>x5232)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x5309 = -1;
	uint32_t x5312 = 13U;

	t87 = (x5309<=(x5310-(x5311>>x5312)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5333 = INT8_MAX;
	uint16_t x5334 = UINT16_MAX;
	static int8_t x5335 = INT8_MAX;
	volatile int32_t t88 = 7877;

	t88 = (x5333<=(x5334-(x5335>>x5336)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5354 = -1LL;
	static int8_t x5355 = 0;
	uint8_t x5356 = 1U;
	int32_t t89 = 7006216;

	t89 = (x5353<=(x5354-(x5355>>x5356)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5497 = 5U;
	uint16_t x5498 = 3U;
	int64_t x5499 = 1053499048267635037LL;
	uint8_t x5500 = 19U;

	t90 = (x5497<=(x5498-(x5499>>x5500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5561 = INT8_MIN;
	int32_t x5563 = 121139590;
	static uint16_t x5564 = 24U;

	t91 = (x5561<=(x5562-(x5563>>x5564)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5569 = 0;
	static int64_t x5570 = INT64_MAX;
	int16_t x5571 = INT16_MAX;
	uint16_t x5572 = 0U;
	int32_t t92 = -13586166;

	t92 = (x5569<=(x5570-(x5571>>x5572)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5745 = -10245;
	uint64_t x5746 = 1508221LLU;
	int8_t x5747 = 3;
	uint8_t x5748 = 9U;
	volatile int32_t t93 = 1791354;

	t93 = (x5745<=(x5746-(x5747>>x5748)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5801 = 1U;
	static uint16_t x5802 = UINT16_MAX;
	uint16_t x5803 = 1U;
	int32_t t94 = -2;

	t94 = (x5801<=(x5802-(x5803>>x5804)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x5917 = 650U;
	uint64_t x5919 = 7628274945012LLU;
	volatile int32_t t95 = -133291416;

	t95 = (x5917<=(x5918-(x5919>>x5920)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5974 = UINT16_MAX;
	static volatile uint16_t x5975 = 14226U;
	uint64_t x5976 = 3LLU;

	t96 = (x5973<=(x5974-(x5975>>x5976)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5994 = -1;
	uint8_t x5995 = UINT8_MAX;
	uint8_t x5996 = 1U;
	volatile int32_t t97 = 148158773;

	t97 = (x5993<=(x5994-(x5995>>x5996)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5997 = 307;
	volatile int8_t x5998 = -2;
	static int32_t x5999 = 38;
	int8_t x6000 = 9;

	t98 = (x5997<=(x5998-(x5999>>x6000)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6005 = INT16_MIN;
	int16_t x6006 = INT16_MIN;
	volatile int64_t x6007 = INT64_MAX;
	volatile int16_t x6008 = 8;
	volatile int32_t t99 = 1;

	t99 = (x6005<=(x6006-(x6007>>x6008)));

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

