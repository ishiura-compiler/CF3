#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x37 = 347796001U;
volatile uint32_t t2 = 1957390626U;
int16_t x262 = 0;
int32_t t4 = 6564;
int64_t x526 = -1LL;
volatile int64_t t5 = -8368317862098307LL;
int8_t x649 = -1;
static volatile int16_t x794 = -1;
static uint8_t x796 = 6U;
static volatile int8_t x954 = -1;
volatile int64_t x955 = -1LL;
static int16_t x973 = INT16_MIN;
uint16_t x1185 = UINT16_MAX;
int8_t x1414 = INT8_MIN;
uint64_t t16 = 76LLU;
volatile uint32_t x1589 = 986919333U;
static volatile uint8_t x1591 = 3U;
int8_t x1592 = 0;
int16_t x1741 = INT16_MAX;
static volatile uint16_t x1744 = 27U;
volatile uint64_t t19 = 35099644760705LLU;
static uint16_t x1868 = 0U;
volatile uint64_t x1921 = UINT64_MAX;
uint8_t x1922 = 29U;
int64_t x1923 = -1LL;
int8_t x1982 = INT8_MAX;
int64_t x2025 = -44LL;
static int8_t x2027 = 13;
volatile uint64_t x2165 = 753017LLU;
uint8_t x2176 = 38U;
volatile uint64_t x2185 = UINT64_MAX;
volatile int8_t x2283 = -25;
volatile int8_t x2440 = -30;
volatile uint64_t t30 = 12727941103729LLU;
volatile uint32_t x3033 = UINT32_MAX;
static uint8_t x3035 = 3U;
static uint64_t x3089 = UINT64_MAX;
int16_t x3161 = 0;
int16_t x3330 = 0;
int8_t x3385 = INT8_MAX;
static uint8_t x3388 = 3U;
static int8_t x3880 = INT8_MIN;
static int8_t x4139 = -22;
uint64_t x4296 = UINT64_MAX;
static uint64_t t49 = 1177LLU;
static int32_t x4346 = 6;
int8_t x4406 = -54;
uint32_t x4408 = UINT32_MAX;
volatile uint64_t t54 = 145499598439LLU;
static int32_t x4787 = 0;
static uint8_t x4929 = 112U;
uint64_t x4973 = UINT64_MAX;
volatile int32_t x4974 = INT32_MIN;
volatile int64_t x4975 = 5LL;
static volatile int32_t t60 = -3;


void f0(void) {
	int8_t x38 = INT8_MAX;
	static int8_t x39 = -1;
	static volatile int16_t x40 = -1;
	static volatile uint32_t t0 = 1U;

	t0 = ((x37-x38)>>(x39^x40));

	if (t0 != 347795874U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x149 = -643;
	static int32_t x150 = INT32_MIN;
	int32_t x151 = -1;
	int16_t x152 = -15;
	static volatile int32_t t1 = 88;

	t1 = ((x149-x150)>>(x151^x152));

	if (t1 != 131071) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x157 = 101U;
	uint32_t x158 = 39847313U;
	int16_t x159 = -1;
	static int64_t x160 = -1LL;

	t2 = ((x157-x158)>>(x159^x160));

	if (t2 != 4255120084U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x249 = 659145572LLU;
	int8_t x250 = INT8_MAX;
	static uint16_t x251 = 1U;
	int8_t x252 = 0;
	uint64_t t3 = 773398818791LLU;

	t3 = ((x249-x250)>>(x251^x252));

	if (t3 != 329572722LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x261 = 0U;
	volatile uint32_t x263 = UINT32_MAX;
	int8_t x264 = -1;

	t4 = ((x261-x262)>>(x263^x264));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x525 = 36U;
	uint16_t x527 = 24U;
	uint16_t x528 = 1U;

	t5 = ((x525-x526)>>(x527^x528));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x577 = INT16_MAX;
	static uint64_t x578 = 149596071547LLU;
	int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	static volatile uint64_t t6 = 262926413732LLU;

	t6 = ((x577-x578)>>(x579^x580));

	if (t6 != 18446743924113512836LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x593 = INT16_MAX;
	uint16_t x594 = 1481U;
	int64_t x595 = -1LL;
	int64_t x596 = -1LL;
	int32_t t7 = 1;

	t7 = ((x593-x594)>>(x595^x596));

	if (t7 != 31286) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x650 = -381645LL;
	volatile int32_t x651 = INT32_MIN;
	int32_t x652 = INT32_MIN;
	volatile int64_t t8 = -3019126843767561LL;

	t8 = ((x649-x650)>>(x651^x652));

	if (t8 != 381644LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x669 = 4383627345LLU;
	uint16_t x670 = 118U;
	int32_t x671 = -1;
	int32_t x672 = -1;
	static volatile uint64_t t9 = 12409302LLU;

	t9 = ((x669-x670)>>(x671^x672));

	if (t9 != 4383627227LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x737 = UINT32_MAX;
	uint32_t x738 = UINT32_MAX;
	uint8_t x739 = 19U;
	int8_t x740 = 1;
	uint32_t t10 = 420U;

	t10 = ((x737-x738)>>(x739^x740));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x793 = 17166;
	volatile uint16_t x795 = 12U;
	int32_t t11 = 336;

	t11 = ((x793-x794)>>(x795^x796));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x809 = -70349365;
	static uint64_t x810 = 1579047777122057LLU;
	int32_t x811 = -1;
	volatile uint64_t x812 = UINT64_MAX;
	uint64_t t12 = 8614512087696531115LLU;

	t12 = ((x809-x810)>>(x811^x812));

	if (t12 != 18445165025862080194LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x953 = UINT32_MAX;
	uint64_t x956 = UINT64_MAX;
	uint32_t t13 = 23U;

	t13 = ((x953-x954)>>(x955^x956));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x974 = 13602633U;
	uint8_t x975 = 17U;
	volatile int16_t x976 = 0;
	uint32_t t14 = 7U;

	t14 = ((x973-x974)>>(x975^x976));

	if (t14 != 32663U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1186 = -28;
	int8_t x1187 = -1;
	int8_t x1188 = -1;
	volatile int32_t t15 = 929;

	t15 = ((x1185-x1186)>>(x1187^x1188));

	if (t15 != 65563) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1413 = 72066519834943600LLU;
	int16_t x1415 = -1;
	int8_t x1416 = -1;

	t16 = ((x1413-x1414)>>(x1415^x1416));

	if (t16 != 72066519834943728LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1590 = INT16_MIN;
	uint32_t t17 = 32U;

	t17 = ((x1589-x1590)>>(x1591^x1592));

	if (t17 != 123369012U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1605 = 2;
	uint8_t x1606 = 2U;
	uint8_t x1607 = 17U;
	uint8_t x1608 = 11U;
	volatile int32_t t18 = -93;

	t18 = ((x1605-x1606)>>(x1607^x1608));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1742 = 421656155895502347LLU;
	uint8_t x1743 = 6U;

	t19 = ((x1741-x1742)>>(x1743^x1744));

	if (t19 != 33574342574LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1865 = -1;
	int32_t x1866 = INT32_MIN;
	static int8_t x1867 = 25;
	int32_t t20 = 8225214;

	t20 = ((x1865-x1866)>>(x1867^x1868));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1924 = -1LL;
	uint64_t t21 = 31113LLU;

	t21 = ((x1921-x1922)>>(x1923^x1924));

	if (t21 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1981 = 632528829LLU;
	int32_t x1983 = -1;
	static uint64_t x1984 = UINT64_MAX;
	volatile uint64_t t22 = 1LLU;

	t22 = ((x1981-x1982)>>(x1983^x1984));

	if (t22 != 632528702LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x2026 = UINT64_MAX;
	int8_t x2028 = 5;
	static uint64_t t23 = 222810643134LLU;

	t23 = ((x2025-x2026)>>(x2027^x2028));

	if (t23 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x2061 = 3081537539466729186LLU;
	int64_t x2062 = INT64_MAX;
	static int16_t x2063 = -1;
	int8_t x2064 = -1;
	uint64_t t24 = 41119260988LLU;

	t24 = ((x2061-x2062)>>(x2063^x2064));

	if (t24 != 12304909576321504995LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x2166 = -1;
	int32_t x2167 = -1;
	volatile int64_t x2168 = -1LL;
	volatile uint64_t t25 = 3254LLU;

	t25 = ((x2165-x2166)>>(x2167^x2168));

	if (t25 != 753018LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x2173 = 19;
	int64_t x2174 = -1LL;
	uint8_t x2175 = 28U;
	volatile int64_t t26 = -855535578LL;

	t26 = ((x2173-x2174)>>(x2175^x2176));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2186 = 43;
	volatile int16_t x2187 = -1;
	volatile int64_t x2188 = -1LL;
	volatile uint64_t t27 = 387854899266277886LLU;

	t27 = ((x2185-x2186)>>(x2187^x2188));

	if (t27 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x2281 = 77713728890040LLU;
	uint64_t x2282 = 3LLU;
	static int32_t x2284 = -1;
	volatile uint64_t t28 = 5128228680970LLU;

	t28 = ((x2281-x2282)>>(x2283^x2284));

	if (t28 != 4632099LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x2437 = 388836804U;
	static int16_t x2438 = 5563;
	int64_t x2439 = -1LL;
	uint32_t t29 = 323508U;

	t29 = ((x2437-x2438)>>(x2439^x2440));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2513 = 18865359667424LLU;
	int8_t x2514 = INT8_MAX;
	int16_t x2515 = INT16_MIN;
	int16_t x2516 = INT16_MIN;

	t30 = ((x2513-x2514)>>(x2515^x2516));

	if (t30 != 18865359667297LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2629 = 232U;
	uint8_t x2630 = 2U;
	int32_t x2631 = -1;
	int64_t x2632 = -1LL;
	volatile uint32_t t31 = 1947U;

	t31 = ((x2629-x2630)>>(x2631^x2632));

	if (t31 != 230U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2737 = UINT16_MAX;
	int16_t x2738 = 333;
	uint64_t x2739 = UINT64_MAX;
	static int16_t x2740 = -1;
	volatile int32_t t32 = 64384;

	t32 = ((x2737-x2738)>>(x2739^x2740));

	if (t32 != 65202) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2789 = 7945122LLU;
	static int32_t x2790 = INT32_MAX;
	static int32_t x2791 = INT32_MAX;
	int32_t x2792 = INT32_MAX;
	volatile uint64_t t33 = 14985LLU;

	t33 = ((x2789-x2790)>>(x2791^x2792));

	if (t33 != 18446744071570013091LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2913 = 21390589776LLU;
	static int32_t x2914 = 7712249;
	static volatile uint64_t x2915 = UINT64_MAX;
	int8_t x2916 = -1;
	uint64_t t34 = 7063LLU;

	t34 = ((x2913-x2914)>>(x2915^x2916));

	if (t34 != 21382877527LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2925 = -6;
	int64_t x2926 = INT64_MIN;
	volatile int64_t x2927 = -1LL;
	int8_t x2928 = -7;
	int64_t t35 = 555128LL;

	t35 = ((x2925-x2926)>>(x2927^x2928));

	if (t35 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x3013 = -1;
	uint32_t x3014 = UINT32_MAX;
	int8_t x3015 = -1;
	int32_t x3016 = -1;
	volatile uint32_t t36 = 592U;

	t36 = ((x3013-x3014)>>(x3015^x3016));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x3034 = -1;
	int8_t x3036 = 1;
	volatile uint32_t t37 = 0U;

	t37 = ((x3033-x3034)>>(x3035^x3036));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x3090 = INT8_MIN;
	volatile int8_t x3091 = -1;
	int8_t x3092 = -60;
	volatile uint64_t t38 = 53499LLU;

	t38 = ((x3089-x3090)>>(x3091^x3092));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3162 = 13290841LLU;
	int8_t x3163 = -1;
	int8_t x3164 = -4;
	static volatile uint64_t t39 = 188622730409531LLU;

	t39 = ((x3161-x3162)>>(x3163^x3164));

	if (t39 != 2305843009212032596LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3173 = -1;
	int16_t x3174 = -4;
	static int16_t x3175 = -1;
	static int16_t x3176 = -1;
	static volatile int32_t t40 = 7;

	t40 = ((x3173-x3174)>>(x3175^x3176));

	if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3329 = 13U;
	uint16_t x3331 = 31U;
	uint8_t x3332 = 0U;
	int32_t t41 = 8173603;

	t41 = ((x3329-x3330)>>(x3331^x3332));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x3386 = 449U;
	uint64_t x3387 = 1LLU;
	uint32_t t42 = 299U;

	t42 = ((x3385-x3386)>>(x3387^x3388));

	if (t42 != 1073741743U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3413 = UINT32_MAX;
	int8_t x3414 = INT8_MIN;
	int64_t x3415 = -1LL;
	int32_t x3416 = -1;
	volatile uint32_t t43 = 42625U;

	t43 = ((x3413-x3414)>>(x3415^x3416));

	if (t43 != 127U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3793 = 30492672U;
	int64_t x3794 = -2783487561493LL;
	volatile uint16_t x3795 = 13U;
	uint64_t x3796 = 1LLU;
	int64_t t44 = -372487310829475LL;

	t44 = ((x3793-x3794)>>(x3795^x3796));

	if (t44 != 679569837LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x3877 = INT32_MAX;
	volatile int8_t x3878 = INT8_MAX;
	int8_t x3879 = INT8_MIN;
	int32_t t45 = 47;

	t45 = ((x3877-x3878)>>(x3879^x3880));

	if (t45 != 2147483520) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3913 = 1U;
	uint64_t x3914 = 507305164343LLU;
	uint64_t x3915 = UINT64_MAX;
	int16_t x3916 = -1;
	uint64_t t46 = 68292812888LLU;

	t46 = ((x3913-x3914)>>(x3915^x3916));

	if (t46 != 18446743566404387274LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x4017 = 283896U;
	volatile int32_t x4018 = INT32_MIN;
	volatile int16_t x4019 = -1;
	static int16_t x4020 = -15;
	uint32_t t47 = 226925U;

	t47 = ((x4017-x4018)>>(x4019^x4020));

	if (t47 != 131089U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x4137 = 399U;
	static volatile int8_t x4138 = -23;
	uint32_t x4140 = UINT32_MAX;
	volatile int32_t t48 = -3402650;

	t48 = ((x4137-x4138)>>(x4139^x4140));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x4293 = -3;
	static uint64_t x4294 = 8981432313090389LLU;
	volatile int64_t x4295 = -1LL;

	t49 = ((x4293-x4294)>>(x4295^x4296));

	if (t49 != 18437762641396461224LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x4345 = INT16_MAX;
	uint8_t x4347 = 0U;
	int8_t x4348 = 15;
	int32_t t50 = 3367;

	t50 = ((x4345-x4346)>>(x4347^x4348));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x4405 = 3U;
	uint32_t x4407 = UINT32_MAX;
	volatile int32_t t51 = -2228;

	t51 = ((x4405-x4406)>>(x4407^x4408));

	if (t51 != 57) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x4433 = -1;
	volatile int8_t x4434 = -3;
	uint64_t x4435 = UINT64_MAX;
	int8_t x4436 = -1;
	static volatile int32_t t52 = 976;

	t52 = ((x4433-x4434)>>(x4435^x4436));

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x4569 = -1;
	int16_t x4570 = INT16_MIN;
	volatile int8_t x4571 = -1;
	static volatile int8_t x4572 = -8;
	volatile int32_t t53 = -399;

	t53 = ((x4569-x4570)>>(x4571^x4572));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x4669 = -4805430076LL;
	uint64_t x4670 = 1208LLU;
	uint64_t x4671 = UINT64_MAX;
	int8_t x4672 = -1;

	t54 = ((x4669-x4670)>>(x4671^x4672));

	if (t54 != 18446744068904120332LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4693 = -1;
	int32_t x4694 = -1;
	volatile int32_t x4695 = -1;
	int16_t x4696 = -1;
	int32_t t55 = 3;

	t55 = ((x4693-x4694)>>(x4695^x4696));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x4785 = INT16_MAX;
	int16_t x4786 = -1;
	uint8_t x4788 = 1U;
	volatile int32_t t56 = 3;

	t56 = ((x4785-x4786)>>(x4787^x4788));

	if (t56 != 16384) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4930 = -1LL;
	int8_t x4931 = -1;
	volatile int32_t x4932 = -1;
	int64_t t57 = 236644398684LL;

	t57 = ((x4929-x4930)>>(x4931^x4932));

	if (t57 != 113LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x4976 = 1U;
	volatile uint64_t t58 = 900924820LLU;

	t58 = ((x4973-x4974)>>(x4975^x4976));

	if (t58 != 134217727LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x5121 = 2475U;
	uint16_t x5122 = 0U;
	int32_t x5123 = -1;
	uint64_t x5124 = UINT64_MAX;
	volatile int32_t t59 = 158;

	t59 = ((x5121-x5122)>>(x5123^x5124));

	if (t59 != 2475) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x5309 = 2229;
	int8_t x5310 = -1;
	static int8_t x5311 = -1;
	int8_t x5312 = -1;

	t60 = ((x5309-x5310)>>(x5311^x5312));

	if (t60 != 2230) { NG(); } else { ; }
	
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


    return 0;
}

