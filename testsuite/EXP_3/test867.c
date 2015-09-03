#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = UINT64_MAX;
static uint8_t x32 = 14U;
volatile int32_t t3 = -284587423;
int64_t x219 = INT64_MAX;
uint8_t x404 = 49U;
uint16_t x618 = 2U;
int16_t x619 = 0;
int32_t x620 = 16;
int16_t x742 = 5991;
static volatile uint64_t x743 = 1376994650249427LLU;
int16_t x765 = -22;
int32_t t10 = 29839;
static int64_t x921 = -1LL;
uint8_t x924 = 10U;
static uint64_t x1033 = UINT64_MAX;
volatile uint32_t x1035 = 815651U;
int32_t x1417 = INT32_MIN;
int32_t t16 = 0;
volatile int8_t x1523 = INT8_MAX;
int32_t x1546 = INT32_MIN;
volatile uint64_t x1753 = 5196910171055711751LLU;
int8_t x1914 = -15;
uint32_t x1915 = UINT32_MAX;
int16_t x2082 = 30;
int32_t x2147 = 0;
int16_t x2174 = 661;
static uint32_t x2314 = 98U;
static volatile uint8_t x2443 = 18U;
uint32_t x2444 = 0U;
uint16_t x2459 = 1996U;
uint8_t x2515 = UINT8_MAX;
int32_t t34 = -367948801;
int16_t x2677 = 3;
int16_t x2679 = INT16_MAX;
static int8_t x2840 = 30;
int8_t x2930 = INT8_MIN;
static uint32_t x2965 = UINT32_MAX;
volatile int32_t t40 = 7911985;
int32_t x2992 = 1;
uint16_t x3173 = 1U;
uint32_t x3267 = 274009U;
int32_t t44 = 8287;
int8_t x3371 = 0;
static int64_t x3433 = INT64_MIN;
uint64_t x3434 = UINT64_MAX;
static int8_t x3528 = 12;
static int8_t x3750 = INT8_MAX;
uint8_t x3905 = 43U;
static volatile int32_t t54 = -620417307;
int8_t x3913 = -1;
int32_t x4129 = -1;
int32_t t56 = 0;
uint8_t x4136 = 11U;
int32_t t58 = -3745;
int32_t x4552 = 26;
int8_t x4697 = -1;
static uint32_t x4813 = UINT32_MAX;
int32_t x4815 = 86;
volatile uint8_t x4816 = 7U;
static int32_t t65 = 18463;
static uint32_t x5017 = UINT32_MAX;
volatile int16_t x5020 = 1;
int64_t x5145 = -4541223699809444LL;
volatile int16_t x5146 = INT16_MIN;
uint16_t x5152 = 5U;
static int32_t t70 = -2162430;
int32_t t71 = 17724;
volatile uint8_t x5408 = 5U;
int32_t x5458 = -166542310;
uint64_t x5459 = 73277189870787LLU;
int32_t t74 = -32791390;
uint8_t x5584 = 1U;
int16_t x5613 = INT16_MIN;
int64_t x5615 = 57966145700346LL;
int16_t x5937 = -5;
int16_t x5940 = 0;
int32_t t81 = -7462;
uint8_t x6015 = 5U;
static int64_t x6189 = INT64_MIN;
static volatile int64_t x6231 = INT64_MAX;
volatile int16_t x6252 = 1;
static volatile int32_t t88 = 86;
uint32_t x6628 = 3U;
static uint32_t x6877 = UINT32_MAX;
int8_t x6941 = INT8_MAX;
int64_t x6942 = -2LL;
static volatile int32_t t93 = 54;
volatile int32_t t94 = -30822058;
volatile int32_t t96 = 26550284;
static uint32_t x7418 = 113020U;
volatile uint16_t x7419 = 1U;
uint8_t x7471 = 0U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint64_t x3 = 30353228247040LLU;
	int16_t x4 = 0;
	volatile int32_t t0 = 502;

	t0 = ((x1-x2)<(x3<<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x29 = 4642U;
	int8_t x30 = INT8_MIN;
	int16_t x31 = 6037;
	volatile int32_t t1 = 1;

	t1 = ((x29-x30)<(x31<<x32));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x65 = INT16_MAX;
	uint32_t x66 = 113592626U;
	int16_t x67 = INT16_MAX;
	uint8_t x68 = 6U;
	static int32_t t2 = -1645961;

	t2 = ((x65-x66)<(x67<<x68));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x177 = -1LL;
	static int64_t x178 = 1793023687251383LL;
	uint8_t x179 = 0U;
	int64_t x180 = 9LL;

	t3 = ((x177-x178)<(x179<<x180));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MAX;
	int8_t x220 = 0;
	int32_t t4 = -3;

	t4 = ((x217-x218)<(x219<<x220));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static int64_t x262 = 16462710LL;
	static uint64_t x263 = 3LLU;
	uint8_t x264 = 5U;
	volatile int32_t t5 = -56788795;

	t5 = ((x261-x262)<(x263<<x264));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x401 = UINT32_MAX;
	static volatile uint16_t x402 = 26724U;
	uint64_t x403 = 2190718LLU;
	static int32_t t6 = -13;

	t6 = ((x401-x402)<(x403<<x404));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x449 = INT16_MIN;
	uint64_t x450 = UINT64_MAX;
	uint64_t x451 = 425830LLU;
	uint16_t x452 = 2U;
	int32_t t7 = 3935;

	t7 = ((x449-x450)<(x451<<x452));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x617 = UINT16_MAX;
	int32_t t8 = -3129071;

	t8 = ((x617-x618)<(x619<<x620));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x741 = INT8_MAX;
	uint16_t x744 = 2U;
	volatile int32_t t9 = 1;

	t9 = ((x741-x742)<(x743<<x744));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x766 = -1;
	uint32_t x767 = 4107U;
	volatile uint64_t x768 = 1LLU;

	t10 = ((x765-x766)<(x767<<x768));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x885 = INT16_MAX;
	uint16_t x886 = 3932U;
	volatile uint16_t x887 = 248U;
	volatile uint16_t x888 = 4U;
	volatile int32_t t11 = -47175;

	t11 = ((x885-x886)<(x887<<x888));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x905 = 105774017LLU;
	uint64_t x906 = 777549290LLU;
	uint16_t x907 = 1227U;
	static uint8_t x908 = 0U;
	volatile int32_t t12 = -18827207;

	t12 = ((x905-x906)<(x907<<x908));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x922 = 2U;
	int16_t x923 = 2;
	int32_t t13 = 57413;

	t13 = ((x921-x922)<(x923<<x924));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x933 = UINT64_MAX;
	volatile int16_t x934 = INT16_MIN;
	int16_t x935 = 0;
	int16_t x936 = 8;
	static volatile int32_t t14 = -1;

	t14 = ((x933-x934)<(x935<<x936));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1034 = 3226613698LLU;
	uint32_t x1036 = 8U;
	int32_t t15 = -17542;

	t15 = ((x1033-x1034)<(x1035<<x1036));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1418 = UINT32_MAX;
	volatile uint16_t x1419 = UINT16_MAX;
	static uint32_t x1420 = 0U;

	t16 = ((x1417-x1418)<(x1419<<x1420));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1521 = -1;
	int32_t x1522 = -1333;
	uint8_t x1524 = 2U;
	volatile int32_t t17 = -788219320;

	t17 = ((x1521-x1522)<(x1523<<x1524));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1545 = 46405708LL;
	volatile uint32_t x1547 = 4144075U;
	uint8_t x1548 = 7U;
	int32_t t18 = -1;

	t18 = ((x1545-x1546)<(x1547<<x1548));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1754 = 377344U;
	uint64_t x1755 = UINT64_MAX;
	int16_t x1756 = 44;
	int32_t t19 = 12316;

	t19 = ((x1753-x1754)<(x1755<<x1756));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1901 = 746U;
	int16_t x1902 = 72;
	uint16_t x1903 = 12U;
	int8_t x1904 = 0;
	int32_t t20 = -1;

	t20 = ((x1901-x1902)<(x1903<<x1904));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1913 = INT16_MAX;
	uint64_t x1916 = 1LLU;
	int32_t t21 = -47035;

	t21 = ((x1913-x1914)<(x1915<<x1916));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2081 = 90538400959772LLU;
	volatile uint16_t x2083 = 0U;
	int8_t x2084 = 15;
	volatile int32_t t22 = 134601201;

	t22 = ((x2081-x2082)<(x2083<<x2084));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2145 = 1;
	volatile int64_t x2146 = -126386439350102619LL;
	volatile int8_t x2148 = 23;
	volatile int32_t t23 = -40313;

	t23 = ((x2145-x2146)<(x2147<<x2148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x2173 = 3070U;
	volatile uint8_t x2175 = 123U;
	uint8_t x2176 = 7U;
	int32_t t24 = 0;

	t24 = ((x2173-x2174)<(x2175<<x2176));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2309 = UINT32_MAX;
	static volatile int8_t x2310 = 0;
	int8_t x2311 = INT8_MAX;
	static int8_t x2312 = 12;
	int32_t t25 = 2370782;

	t25 = ((x2309-x2310)<(x2311<<x2312));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2313 = 3U;
	volatile uint64_t x2315 = 215085LLU;
	int8_t x2316 = 1;
	int32_t t26 = -909832251;

	t26 = ((x2313-x2314)<(x2315<<x2316));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2441 = INT32_MIN;
	volatile uint64_t x2442 = UINT64_MAX;
	int32_t t27 = 2033;

	t27 = ((x2441-x2442)<(x2443<<x2444));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x2457 = -19LL;
	int16_t x2458 = -6;
	int8_t x2460 = 15;
	int32_t t28 = -26672212;

	t28 = ((x2457-x2458)<(x2459<<x2460));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2513 = 28290LLU;
	static int32_t x2514 = 15547;
	int8_t x2516 = 0;
	int32_t t29 = -337;

	t29 = ((x2513-x2514)<(x2515<<x2516));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2525 = INT8_MAX;
	int16_t x2526 = INT16_MAX;
	uint64_t x2527 = 758595084654457LLU;
	uint16_t x2528 = 2U;
	volatile int32_t t30 = -507299531;

	t30 = ((x2525-x2526)<(x2527<<x2528));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2549 = INT8_MIN;
	static int32_t x2550 = INT32_MIN;
	uint8_t x2551 = UINT8_MAX;
	uint64_t x2552 = 6LLU;
	volatile int32_t t31 = 872973;

	t31 = ((x2549-x2550)<(x2551<<x2552));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2581 = 167345427U;
	uint64_t x2582 = 608964855485317306LLU;
	int16_t x2583 = 2;
	uint8_t x2584 = 24U;
	volatile int32_t t32 = 615;

	t32 = ((x2581-x2582)<(x2583<<x2584));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x2609 = INT8_MIN;
	int16_t x2610 = INT16_MAX;
	static volatile uint64_t x2611 = UINT64_MAX;
	volatile uint8_t x2612 = 11U;
	int32_t t33 = -1453261;

	t33 = ((x2609-x2610)<(x2611<<x2612));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2657 = 2;
	uint64_t x2658 = UINT64_MAX;
	uint16_t x2659 = UINT16_MAX;
	uint8_t x2660 = 1U;

	t34 = ((x2657-x2658)<(x2659<<x2660));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2673 = 0U;
	int32_t x2674 = -13313329;
	volatile int16_t x2675 = INT16_MAX;
	uint8_t x2676 = 6U;
	int32_t t35 = -1;

	t35 = ((x2673-x2674)<(x2675<<x2676));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2678 = -1;
	uint32_t x2680 = 6U;
	volatile int32_t t36 = 3;

	t36 = ((x2677-x2678)<(x2679<<x2680));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2697 = 55U;
	uint32_t x2698 = UINT32_MAX;
	uint8_t x2699 = UINT8_MAX;
	volatile uint8_t x2700 = 23U;
	static volatile int32_t t37 = 5;

	t37 = ((x2697-x2698)<(x2699<<x2700));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2837 = UINT64_MAX;
	volatile int64_t x2838 = INT64_MIN;
	static uint64_t x2839 = 2187920118719507LLU;
	int32_t t38 = 12;

	t38 = ((x2837-x2838)<(x2839<<x2840));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2929 = -180;
	int8_t x2931 = INT8_MAX;
	uint64_t x2932 = 24LLU;
	int32_t t39 = -441513998;

	t39 = ((x2929-x2930)<(x2931<<x2932));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2966 = -1;
	int32_t x2967 = 13;
	uint8_t x2968 = 3U;

	t40 = ((x2965-x2966)<(x2967<<x2968));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2989 = INT32_MIN;
	volatile int16_t x2990 = -1;
	uint64_t x2991 = 2668LLU;
	volatile int32_t t41 = -3;

	t41 = ((x2989-x2990)<(x2991<<x2992));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3025 = 1064;
	uint64_t x3026 = 1604472LLU;
	int8_t x3027 = 7;
	uint8_t x3028 = 2U;
	volatile int32_t t42 = 115361;

	t42 = ((x3025-x3026)<(x3027<<x3028));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3174 = INT8_MIN;
	uint8_t x3175 = 4U;
	uint8_t x3176 = 3U;
	int32_t t43 = -1;

	t43 = ((x3173-x3174)<(x3175<<x3176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3265 = 5U;
	volatile uint8_t x3266 = UINT8_MAX;
	int64_t x3268 = 1LL;

	t44 = ((x3265-x3266)<(x3267<<x3268));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x3353 = -24402621;
	int8_t x3354 = INT8_MIN;
	uint32_t x3355 = UINT32_MAX;
	uint8_t x3356 = 3U;
	volatile int32_t t45 = -29139282;

	t45 = ((x3353-x3354)<(x3355<<x3356));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x3369 = INT32_MIN;
	int32_t x3370 = -25;
	static uint8_t x3372 = 2U;
	volatile int32_t t46 = 69;

	t46 = ((x3369-x3370)<(x3371<<x3372));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3435 = 13196383;
	uint64_t x3436 = 2LLU;
	static volatile int32_t t47 = 11914787;

	t47 = ((x3433-x3434)<(x3435<<x3436));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3525 = -6;
	uint8_t x3526 = UINT8_MAX;
	volatile uint8_t x3527 = 11U;
	volatile int32_t t48 = -6;

	t48 = ((x3525-x3526)<(x3527<<x3528));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3689 = 1LLU;
	volatile int64_t x3690 = -1LL;
	uint16_t x3691 = UINT16_MAX;
	static volatile uint8_t x3692 = 1U;
	static int32_t t49 = 1155;

	t49 = ((x3689-x3690)<(x3691<<x3692));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3749 = INT8_MIN;
	uint32_t x3751 = 4209839U;
	int8_t x3752 = 2;
	int32_t t50 = -1028191206;

	t50 = ((x3749-x3750)<(x3751<<x3752));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3781 = -1;
	static uint16_t x3782 = 7U;
	uint64_t x3783 = UINT64_MAX;
	uint8_t x3784 = 5U;
	volatile int32_t t51 = -2055284;

	t51 = ((x3781-x3782)<(x3783<<x3784));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3833 = INT64_MIN;
	int64_t x3834 = INT64_MIN;
	int16_t x3835 = 54;
	uint8_t x3836 = 1U;
	static volatile int32_t t52 = -4;

	t52 = ((x3833-x3834)<(x3835<<x3836));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3853 = 2473U;
	int8_t x3854 = -1;
	uint16_t x3855 = 26U;
	uint8_t x3856 = 2U;
	static volatile int32_t t53 = -22;

	t53 = ((x3853-x3854)<(x3855<<x3856));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3906 = 94755966954LLU;
	int32_t x3907 = 396038;
	uint8_t x3908 = 3U;

	t54 = ((x3905-x3906)<(x3907<<x3908));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3914 = 834;
	uint64_t x3915 = 601437061512LLU;
	volatile int32_t x3916 = 0;
	volatile int32_t t55 = 1403700;

	t55 = ((x3913-x3914)<(x3915<<x3916));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x4130 = -1LL;
	static uint16_t x4131 = UINT16_MAX;
	static uint8_t x4132 = 0U;

	t56 = ((x4129-x4130)<(x4131<<x4132));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x4133 = UINT64_MAX;
	static int64_t x4134 = INT64_MIN;
	int8_t x4135 = INT8_MAX;
	volatile int32_t t57 = 16;

	t57 = ((x4133-x4134)<(x4135<<x4136));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x4177 = 34;
	int64_t x4178 = 1397445022753981LL;
	uint8_t x4179 = UINT8_MAX;
	int8_t x4180 = 0;

	t58 = ((x4177-x4178)<(x4179<<x4180));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x4301 = 9011429LLU;
	uint8_t x4302 = 26U;
	int64_t x4303 = 70427898527238LL;
	static uint8_t x4304 = 6U;
	int32_t t59 = 781813333;

	t59 = ((x4301-x4302)<(x4303<<x4304));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x4389 = 8U;
	static volatile int16_t x4390 = -1;
	int8_t x4391 = INT8_MAX;
	int64_t x4392 = 0LL;
	static volatile int32_t t60 = -268;

	t60 = ((x4389-x4390)<(x4391<<x4392));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4549 = -4812268002LL;
	int16_t x4550 = -138;
	int16_t x4551 = 10;
	int32_t t61 = -4167725;

	t61 = ((x4549-x4550)<(x4551<<x4552));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4657 = INT64_MIN;
	int8_t x4658 = -3;
	volatile uint8_t x4659 = 51U;
	int16_t x4660 = 3;
	volatile int32_t t62 = -44183316;

	t62 = ((x4657-x4658)<(x4659<<x4660));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4698 = INT32_MIN;
	int16_t x4699 = 3;
	int8_t x4700 = 1;
	int32_t t63 = 148355328;

	t63 = ((x4697-x4698)<(x4699<<x4700));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4733 = INT64_MIN;
	int8_t x4734 = INT8_MIN;
	uint64_t x4735 = 5120522LLU;
	uint32_t x4736 = 0U;
	volatile int32_t t64 = 2580375;

	t64 = ((x4733-x4734)<(x4735<<x4736));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x4814 = UINT8_MAX;

	t65 = ((x4813-x4814)<(x4815<<x4816));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4845 = 25LL;
	int64_t x4846 = INT64_MAX;
	int64_t x4847 = 67607367677LL;
	uint8_t x4848 = 1U;
	int32_t t66 = 3;

	t66 = ((x4845-x4846)<(x4847<<x4848));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x5018 = INT64_MAX;
	uint64_t x5019 = UINT64_MAX;
	int32_t t67 = 11325;

	t67 = ((x5017-x5018)<(x5019<<x5020));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x5069 = -1;
	uint64_t x5070 = 1060681063301384470LLU;
	uint64_t x5071 = 719664361666300789LLU;
	int16_t x5072 = 7;
	volatile int32_t t68 = 124890320;

	t68 = ((x5069-x5070)<(x5071<<x5072));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5147 = INT16_MAX;
	static uint8_t x5148 = 14U;
	volatile int32_t t69 = -6;

	t69 = ((x5145-x5146)<(x5147<<x5148));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x5149 = 90796LLU;
	volatile uint16_t x5150 = 15682U;
	uint16_t x5151 = 247U;

	t70 = ((x5149-x5150)<(x5151<<x5152));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5365 = 11497U;
	uint64_t x5366 = 1119793LLU;
	int16_t x5367 = INT16_MAX;
	int8_t x5368 = 1;

	t71 = ((x5365-x5366)<(x5367<<x5368));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5405 = 228;
	int8_t x5406 = 0;
	static uint32_t x5407 = 3490U;
	static int32_t t72 = -5;

	t72 = ((x5405-x5406)<(x5407<<x5408));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5457 = UINT8_MAX;
	int8_t x5460 = 6;
	int32_t t73 = -116403;

	t73 = ((x5457-x5458)<(x5459<<x5460));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x5497 = INT16_MAX;
	int32_t x5498 = INT32_MAX;
	static volatile uint8_t x5499 = 46U;
	uint8_t x5500 = 8U;

	t74 = ((x5497-x5498)<(x5499<<x5500));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5537 = 11446U;
	static int8_t x5538 = INT8_MIN;
	uint64_t x5539 = 7LLU;
	volatile int8_t x5540 = 0;
	static int32_t t75 = -12670705;

	t75 = ((x5537-x5538)<(x5539<<x5540));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5557 = UINT8_MAX;
	uint16_t x5558 = UINT16_MAX;
	static uint8_t x5559 = 3U;
	int64_t x5560 = 25LL;
	int32_t t76 = 1;

	t76 = ((x5557-x5558)<(x5559<<x5560));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x5581 = -1LL;
	uint32_t x5582 = UINT32_MAX;
	int8_t x5583 = INT8_MAX;
	volatile int32_t t77 = 0;

	t77 = ((x5581-x5582)<(x5583<<x5584));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5614 = 4;
	static uint8_t x5616 = 17U;
	int32_t t78 = 1803;

	t78 = ((x5613-x5614)<(x5615<<x5616));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x5801 = -1;
	int64_t x5802 = -1LL;
	volatile int16_t x5803 = 903;
	static uint64_t x5804 = 20LLU;
	volatile int32_t t79 = 118784403;

	t79 = ((x5801-x5802)<(x5803<<x5804));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5845 = UINT8_MAX;
	int32_t x5846 = -1;
	uint16_t x5847 = 11U;
	int8_t x5848 = 5;
	static int32_t t80 = 18;

	t80 = ((x5845-x5846)<(x5847<<x5848));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x5938 = 9710U;
	uint64_t x5939 = UINT64_MAX;

	t81 = ((x5937-x5938)<(x5939<<x5940));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5949 = 522746642172LLU;
	uint64_t x5950 = 0LLU;
	uint16_t x5951 = 4611U;
	uint8_t x5952 = 12U;
	volatile int32_t t82 = -15;

	t82 = ((x5949-x5950)<(x5951<<x5952));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x6013 = INT8_MIN;
	int32_t x6014 = INT32_MIN;
	int64_t x6016 = 7LL;
	int32_t t83 = -73802236;

	t83 = ((x6013-x6014)<(x6015<<x6016));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6053 = -1;
	int8_t x6054 = INT8_MAX;
	static int64_t x6055 = 6366LL;
	uint8_t x6056 = 28U;
	int32_t t84 = -21741;

	t84 = ((x6053-x6054)<(x6055<<x6056));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6190 = 2218861095120026LLU;
	uint32_t x6191 = 32287460U;
	uint64_t x6192 = 23LLU;
	int32_t t85 = -449;

	t85 = ((x6189-x6190)<(x6191<<x6192));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6197 = 15U;
	int16_t x6198 = INT16_MIN;
	uint8_t x6199 = 1U;
	int32_t x6200 = 6;
	static volatile int32_t t86 = 0;

	t86 = ((x6197-x6198)<(x6199<<x6200));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x6229 = INT64_MAX;
	int64_t x6230 = 6491861LL;
	int16_t x6232 = 0;
	int32_t t87 = 461630;

	t87 = ((x6229-x6230)<(x6231<<x6232));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6249 = 10;
	volatile uint16_t x6250 = 1U;
	uint8_t x6251 = 8U;

	t88 = ((x6249-x6250)<(x6251<<x6252));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x6329 = INT8_MAX;
	int16_t x6330 = INT16_MIN;
	uint64_t x6331 = 496909500LLU;
	volatile uint8_t x6332 = 4U;
	volatile int32_t t89 = 222;

	t89 = ((x6329-x6330)<(x6331<<x6332));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x6549 = 8836246LL;
	uint16_t x6550 = UINT16_MAX;
	uint16_t x6551 = UINT16_MAX;
	static int64_t x6552 = 10LL;
	int32_t t90 = 0;

	t90 = ((x6549-x6550)<(x6551<<x6552));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6625 = INT16_MIN;
	int16_t x6626 = INT16_MIN;
	int16_t x6627 = INT16_MAX;
	volatile int32_t t91 = -433728;

	t91 = ((x6625-x6626)<(x6627<<x6628));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6878 = INT32_MIN;
	uint8_t x6879 = 1U;
	int16_t x6880 = 0;
	int32_t t92 = 7806348;

	t92 = ((x6877-x6878)<(x6879<<x6880));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x6943 = 1721U;
	uint8_t x6944 = 1U;

	t93 = ((x6941-x6942)<(x6943<<x6944));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x7125 = -22;
	int8_t x7126 = -1;
	volatile uint8_t x7127 = 38U;
	int64_t x7128 = 1LL;

	t94 = ((x7125-x7126)<(x7127<<x7128));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x7165 = INT8_MIN;
	uint8_t x7166 = 15U;
	uint16_t x7167 = 12U;
	int8_t x7168 = 0;
	static int32_t t95 = -36784;

	t95 = ((x7165-x7166)<(x7167<<x7168));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x7217 = 60;
	volatile uint64_t x7218 = 6046946156915007198LLU;
	static uint64_t x7219 = 528439015LLU;
	uint8_t x7220 = 5U;

	t96 = ((x7217-x7218)<(x7219<<x7220));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x7417 = -130103435;
	static volatile uint8_t x7420 = 1U;
	static volatile int32_t t97 = 14932;

	t97 = ((x7417-x7418)<(x7419<<x7420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x7441 = 6U;
	int64_t x7442 = -1LL;
	uint32_t x7443 = 281878U;
	uint16_t x7444 = 2U;
	volatile int32_t t98 = 192393727;

	t98 = ((x7441-x7442)<(x7443<<x7444));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x7469 = 0U;
	volatile uint8_t x7470 = UINT8_MAX;
	static int8_t x7472 = 1;
	int32_t t99 = 91;

	t99 = ((x7469-x7470)<(x7471<<x7472));

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

