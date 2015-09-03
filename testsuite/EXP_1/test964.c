#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x47 = -5;
volatile int32_t t1 = 26;
int8_t x80 = 3;
int32_t x223 = -94674;
int64_t t3 = 17874595LL;
static uint32_t x471 = 29939429U;
static int8_t x505 = 3;
int32_t t8 = 958025462;
uint8_t x709 = UINT8_MAX;
int16_t x712 = INT16_MAX;
uint8_t x795 = UINT8_MAX;
uint16_t x979 = 1183U;
volatile int32_t x1063 = 1;
uint32_t x1215 = 1U;
int64_t x1216 = 0LL;
uint16_t x1503 = 11461U;
int8_t x1504 = -20;
int16_t x1536 = INT16_MIN;
int32_t x1642 = 0;
volatile int32_t t21 = 1147502;
static uint64_t x1837 = 351886496070LLU;
uint16_t x1838 = 15U;
uint32_t x1877 = 6521U;
uint16_t x1897 = UINT16_MAX;
static int32_t t25 = 153458;
int64_t x1955 = INT64_MIN;
volatile uint8_t x2033 = UINT8_MAX;
volatile int16_t x2035 = -1;
volatile int64_t t28 = -2011043003274196LL;
int32_t x2233 = 28200;
volatile uint8_t x2291 = 20U;
volatile int32_t x2329 = 1772;
int16_t x2575 = -1;
static uint8_t x2582 = 2U;
volatile int8_t x2658 = 0;
uint64_t x2709 = 8LLU;
static int8_t x2730 = 3;
int8_t x2783 = -3;
static int8_t x2784 = INT8_MAX;
int8_t x2812 = INT8_MIN;
int16_t x2814 = 0;
uint16_t x3148 = UINT16_MAX;
uint16_t x3277 = 16U;
volatile uint8_t x3286 = 17U;
volatile int32_t t51 = -84728922;
int16_t x3314 = 0;
static volatile int32_t x3327 = INT32_MIN;
int32_t x3535 = INT32_MIN;
uint64_t x3609 = 9074192363633816LLU;
static int8_t x3623 = -24;
static int8_t x3624 = 20;
uint16_t x3698 = 0U;
int16_t x3740 = 0;
volatile int32_t t60 = -271790;
volatile int32_t t61 = -1121;
volatile int32_t t62 = -22;
int8_t x3887 = INT8_MAX;
volatile uint16_t x3922 = 4U;
static uint64_t x3923 = UINT64_MAX;
uint64_t x3941 = UINT64_MAX;
uint8_t x3942 = 1U;
volatile uint64_t x4109 = 1446722220554711771LLU;
int32_t x4251 = 22427383;
static uint8_t x4265 = 20U;
static uint32_t x4267 = UINT32_MAX;
volatile uint8_t x4395 = 83U;
int32_t x4396 = INT32_MAX;
uint8_t x4430 = 3U;
volatile int32_t x4431 = 297092896;
static uint32_t x4667 = 1394805883U;
int16_t x4668 = -1;
uint64_t x4802 = 0LLU;
int32_t t78 = -416307118;
uint64_t x4890 = 24LLU;
uint32_t t79 = 213U;
int8_t x5091 = -1;
uint32_t x5166 = 8U;
uint32_t x5167 = UINT32_MAX;
uint64_t x5617 = 4743423731993663287LLU;
volatile uint64_t x5771 = UINT64_MAX;
static volatile uint8_t x5826 = 1U;
volatile uint8_t x6146 = 2U;
int8_t x6148 = -1;
uint16_t x6157 = UINT16_MAX;
uint8_t x6286 = 7U;
volatile uint64_t x6425 = 63637163049587727LLU;
int8_t x6758 = 0;


void f0(void) {
	uint64_t x21 = 573262212767199LLU;
	volatile uint8_t x22 = 0U;
	uint32_t x23 = 98U;
	uint16_t x24 = UINT16_MAX;
	static volatile int32_t t0 = 14388743;

	t0 = (((x21<<x22)<=x23)-x24);

	if (t0 != -65535) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x45 = 5209110488289LL;
	volatile int8_t x46 = 0;
	int8_t x48 = 2;

	t1 = (((x45<<x46)<=x47)-x48);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x77 = UINT8_MAX;
	volatile uint8_t x78 = 1U;
	uint32_t x79 = 97103U;
	volatile int32_t t2 = -3;

	t2 = (((x77<<x78)<=x79)-x80);

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x221 = INT16_MAX;
	static volatile int8_t x222 = 0;
	int64_t x224 = 17314358910227356LL;

	t3 = (((x221<<x222)<=x223)-x224);

	if (t3 != -17314358910227356LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x269 = INT32_MAX;
	uint16_t x270 = 0U;
	uint16_t x271 = 26172U;
	int16_t x272 = -1;
	volatile int32_t t4 = -1107;

	t4 = (((x269<<x270)<=x271)-x272);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x429 = INT16_MAX;
	int16_t x430 = 1;
	volatile int16_t x431 = -1;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t5 = 32399724;

	t5 = (((x429<<x430)<=x431)-x432);

	if (t5 != -65535) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x469 = UINT32_MAX;
	uint8_t x470 = 1U;
	int16_t x472 = INT16_MIN;
	volatile int32_t t6 = 26;

	t6 = (((x469<<x470)<=x471)-x472);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x506 = 3U;
	uint64_t x507 = 505825LLU;
	volatile int16_t x508 = INT16_MIN;
	int32_t t7 = 0;

	t7 = (((x505<<x506)<=x507)-x508);

	if (t7 != 32769) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x657 = INT8_MAX;
	static uint16_t x658 = 3U;
	int16_t x659 = INT16_MIN;
	int32_t x660 = 47;

	t8 = (((x657<<x658)<=x659)-x660);

	if (t8 != -47) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x710 = 0;
	int8_t x711 = 47;
	static int32_t t9 = -2428921;

	t9 = (((x709<<x710)<=x711)-x712);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x793 = UINT32_MAX;
	uint16_t x794 = 7U;
	volatile uint8_t x796 = 0U;
	volatile int32_t t10 = 110;

	t10 = (((x793<<x794)<=x795)-x796);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x849 = INT16_MAX;
	int8_t x850 = 3;
	volatile int16_t x851 = -1;
	volatile int16_t x852 = INT16_MIN;
	volatile int32_t t11 = -1;

	t11 = (((x849<<x850)<=x851)-x852);

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x977 = 43U;
	volatile uint16_t x978 = 6U;
	int8_t x980 = -1;
	volatile int32_t t12 = -3760;

	t12 = (((x977<<x978)<=x979)-x980);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x1057 = 5811;
	static uint32_t x1058 = 5U;
	int64_t x1059 = INT64_MIN;
	int32_t x1060 = INT32_MAX;
	volatile int32_t t13 = -1314431;

	t13 = (((x1057<<x1058)<=x1059)-x1060);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x1061 = 8U;
	uint16_t x1062 = 11U;
	int64_t x1064 = 19LL;
	int64_t t14 = 167109957548LL;

	t14 = (((x1061<<x1062)<=x1063)-x1064);

	if (t14 != -19LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1205 = 218U;
	static int16_t x1206 = 6;
	volatile uint8_t x1207 = 9U;
	uint16_t x1208 = 48U;
	int32_t t15 = -4137179;

	t15 = (((x1205<<x1206)<=x1207)-x1208);

	if (t15 != -48) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1213 = INT8_MAX;
	int8_t x1214 = 18;
	int64_t t16 = -227491325LL;

	t16 = (((x1213<<x1214)<=x1215)-x1216);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1501 = 2123800856388LLU;
	uint16_t x1502 = 10U;
	int32_t t17 = 0;

	t17 = (((x1501<<x1502)<=x1503)-x1504);

	if (t17 != 20) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1509 = INT64_MAX;
	uint32_t x1510 = 0U;
	uint16_t x1511 = 55U;
	static int32_t x1512 = -1;
	static int32_t t18 = 163550;

	t18 = (((x1509<<x1510)<=x1511)-x1512);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1533 = UINT32_MAX;
	int8_t x1534 = 22;
	int8_t x1535 = INT8_MAX;
	volatile int32_t t19 = 3193;

	t19 = (((x1533<<x1534)<=x1535)-x1536);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1641 = 24U;
	static uint16_t x1643 = 7547U;
	int64_t x1644 = INT64_MAX;
	int64_t t20 = 10797942956LL;

	t20 = (((x1641<<x1642)<=x1643)-x1644);

	if (t20 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1681 = UINT8_MAX;
	uint8_t x1682 = 0U;
	int8_t x1683 = -2;
	uint8_t x1684 = 3U;

	t21 = (((x1681<<x1682)<=x1683)-x1684);

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1749 = 83U;
	uint8_t x1750 = 3U;
	uint64_t x1751 = 1815970099768217LLU;
	int8_t x1752 = INT8_MIN;
	volatile int32_t t22 = -164671064;

	t22 = (((x1749<<x1750)<=x1751)-x1752);

	if (t22 != 129) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1839 = -1;
	int8_t x1840 = -29;
	volatile int32_t t23 = -10556;

	t23 = (((x1837<<x1838)<=x1839)-x1840);

	if (t23 != 30) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1878 = 1U;
	volatile int16_t x1879 = -1;
	int16_t x1880 = INT16_MAX;
	volatile int32_t t24 = 30669848;

	t24 = (((x1877<<x1878)<=x1879)-x1880);

	if (t24 != -32766) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1898 = 0LL;
	int8_t x1899 = INT8_MAX;
	int32_t x1900 = -1449670;

	t25 = (((x1897<<x1898)<=x1899)-x1900);

	if (t25 != 1449670) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1905 = 131;
	volatile int8_t x1906 = 5;
	static int64_t x1907 = INT64_MIN;
	volatile int8_t x1908 = INT8_MIN;
	volatile int32_t t26 = 171421;

	t26 = (((x1905<<x1906)<=x1907)-x1908);

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1953 = 1;
	int8_t x1954 = 26;
	volatile int64_t x1956 = 49612LL;
	static int64_t t27 = -51179096LL;

	t27 = (((x1953<<x1954)<=x1955)-x1956);

	if (t27 != -49612LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2034 = 4;
	int64_t x2036 = 2302744019323572LL;

	t28 = (((x2033<<x2034)<=x2035)-x2036);

	if (t28 != -2302744019323572LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x2234 = 1;
	static uint16_t x2235 = 3068U;
	static int8_t x2236 = INT8_MAX;
	volatile int32_t t29 = -4173128;

	t29 = (((x2233<<x2234)<=x2235)-x2236);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x2237 = 1U;
	static int8_t x2238 = 2;
	static int16_t x2239 = -1;
	static int16_t x2240 = INT16_MIN;
	static volatile int32_t t30 = -15;

	t30 = (((x2237<<x2238)<=x2239)-x2240);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2289 = 141743U;
	volatile int64_t x2290 = 8LL;
	static volatile int8_t x2292 = INT8_MIN;
	int32_t t31 = 63765895;

	t31 = (((x2289<<x2290)<=x2291)-x2292);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x2330 = 3;
	int32_t x2331 = 690038;
	static int8_t x2332 = INT8_MIN;
	int32_t t32 = 355;

	t32 = (((x2329<<x2330)<=x2331)-x2332);

	if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2381 = 750U;
	uint16_t x2382 = 3U;
	int64_t x2383 = INT64_MAX;
	int64_t x2384 = -50731338LL;
	volatile int64_t t33 = 1LL;

	t33 = (((x2381<<x2382)<=x2383)-x2384);

	if (t33 != 50731339LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2573 = 1026950445U;
	int32_t x2574 = 0;
	uint8_t x2576 = UINT8_MAX;
	int32_t t34 = -441543675;

	t34 = (((x2573<<x2574)<=x2575)-x2576);

	if (t34 != -254) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2581 = 2558531810232671LLU;
	volatile uint32_t x2583 = 16U;
	static int16_t x2584 = INT16_MAX;
	static volatile int32_t t35 = 201131;

	t35 = (((x2581<<x2582)<=x2583)-x2584);

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2589 = 1485U;
	int8_t x2590 = 14;
	volatile int32_t x2591 = -1;
	uint16_t x2592 = 133U;
	volatile int32_t t36 = -141757754;

	t36 = (((x2589<<x2590)<=x2591)-x2592);

	if (t36 != -133) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2653 = UINT8_MAX;
	volatile int8_t x2654 = 3;
	int16_t x2655 = INT16_MIN;
	volatile int16_t x2656 = INT16_MAX;
	int32_t t37 = 786264062;

	t37 = (((x2653<<x2654)<=x2655)-x2656);

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2657 = 5;
	static int16_t x2659 = INT16_MIN;
	int8_t x2660 = INT8_MIN;
	volatile int32_t t38 = -2;

	t38 = (((x2657<<x2658)<=x2659)-x2660);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2701 = UINT8_MAX;
	uint8_t x2702 = 0U;
	uint16_t x2703 = UINT16_MAX;
	int64_t x2704 = 600764LL;
	volatile int64_t t39 = -426386253748616215LL;

	t39 = (((x2701<<x2702)<=x2703)-x2704);

	if (t39 != -600763LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2710 = 18;
	static volatile uint64_t x2711 = UINT64_MAX;
	static int8_t x2712 = -1;
	static volatile int32_t t40 = 128;

	t40 = (((x2709<<x2710)<=x2711)-x2712);

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2729 = UINT64_MAX;
	volatile int32_t x2731 = -1;
	int8_t x2732 = 0;
	volatile int32_t t41 = -35421451;

	t41 = (((x2729<<x2730)<=x2731)-x2732);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2781 = 11348981055762LLU;
	uint16_t x2782 = 0U;
	volatile int32_t t42 = 1961;

	t42 = (((x2781<<x2782)<=x2783)-x2784);

	if (t42 != -126) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2809 = 47326285LLU;
	uint16_t x2810 = 20U;
	uint8_t x2811 = UINT8_MAX;
	volatile int32_t t43 = -15546756;

	t43 = (((x2809<<x2810)<=x2811)-x2812);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2813 = 145U;
	volatile uint32_t x2815 = 7613U;
	static uint32_t x2816 = 11713254U;
	volatile uint32_t t44 = 84470130U;

	t44 = (((x2813<<x2814)<=x2815)-x2816);

	if (t44 != 4283254043U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2957 = UINT16_MAX;
	int8_t x2958 = 3;
	volatile uint64_t x2959 = UINT64_MAX;
	uint8_t x2960 = UINT8_MAX;
	int32_t t45 = -10332;

	t45 = (((x2957<<x2958)<=x2959)-x2960);

	if (t45 != -254) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3069 = INT16_MAX;
	static uint32_t x3070 = 9U;
	int16_t x3071 = -1;
	uint32_t x3072 = 1280963316U;
	static uint32_t t46 = 24099852U;

	t46 = (((x3069<<x3070)<=x3071)-x3072);

	if (t46 != 3014003980U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3081 = 6201127U;
	uint8_t x3082 = 1U;
	uint64_t x3083 = 216LLU;
	uint16_t x3084 = UINT16_MAX;
	volatile int32_t t47 = 466704122;

	t47 = (((x3081<<x3082)<=x3083)-x3084);

	if (t47 != -65535) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3129 = 123;
	static uint16_t x3130 = 1U;
	uint64_t x3131 = UINT64_MAX;
	uint8_t x3132 = 6U;
	int32_t t48 = -199195;

	t48 = (((x3129<<x3130)<=x3131)-x3132);

	if (t48 != -5) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x3145 = INT16_MAX;
	int32_t x3146 = 6;
	int8_t x3147 = -1;
	int32_t t49 = -29135;

	t49 = (((x3145<<x3146)<=x3147)-x3148);

	if (t49 != -65535) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3278 = 4;
	volatile int32_t x3279 = -365;
	static int8_t x3280 = 47;
	static int32_t t50 = -68244338;

	t50 = (((x3277<<x3278)<=x3279)-x3280);

	if (t50 != -47) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3285 = UINT32_MAX;
	volatile int16_t x3287 = -945;
	uint16_t x3288 = UINT16_MAX;

	t51 = (((x3285<<x3286)<=x3287)-x3288);

	if (t51 != -65534) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3313 = INT8_MAX;
	int8_t x3315 = -1;
	volatile int16_t x3316 = 5;
	int32_t t52 = 10091;

	t52 = (((x3313<<x3314)<=x3315)-x3316);

	if (t52 != -5) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3325 = 35473465428810508LLU;
	int16_t x3326 = 60;
	volatile uint16_t x3328 = UINT16_MAX;
	volatile int32_t t53 = 7;

	t53 = (((x3325<<x3326)<=x3327)-x3328);

	if (t53 != -65534) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3477 = 0;
	int16_t x3478 = 13;
	static int64_t x3479 = -1LL;
	int8_t x3480 = INT8_MIN;
	int32_t t54 = -509;

	t54 = (((x3477<<x3478)<=x3479)-x3480);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x3533 = INT16_MAX;
	volatile uint32_t x3534 = 4U;
	uint16_t x3536 = 9U;
	volatile int32_t t55 = -621;

	t55 = (((x3533<<x3534)<=x3535)-x3536);

	if (t55 != -9) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3610 = 1U;
	uint16_t x3611 = 1U;
	uint32_t x3612 = 1U;
	uint32_t t56 = UINT32_MAX;

	t56 = (((x3609<<x3610)<=x3611)-x3612);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3621 = 99192U;
	int8_t x3622 = 3;
	static int32_t t57 = 46195018;

	t57 = (((x3621<<x3622)<=x3623)-x3624);

	if (t57 != -19) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3673 = 40U;
	uint64_t x3674 = 1LLU;
	int64_t x3675 = -1LL;
	int8_t x3676 = -12;
	volatile int32_t t58 = 6027;

	t58 = (((x3673<<x3674)<=x3675)-x3676);

	if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x3697 = INT8_MAX;
	volatile int8_t x3699 = INT8_MIN;
	int32_t x3700 = -1;
	volatile int32_t t59 = -516560;

	t59 = (((x3697<<x3698)<=x3699)-x3700);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3737 = 29102LLU;
	static volatile int8_t x3738 = 1;
	int16_t x3739 = -110;

	t60 = (((x3737<<x3738)<=x3739)-x3740);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3809 = INT8_MAX;
	uint8_t x3810 = 0U;
	static int64_t x3811 = INT64_MIN;
	int8_t x3812 = -31;

	t61 = (((x3809<<x3810)<=x3811)-x3812);

	if (t61 != 31) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3861 = 4693;
	int8_t x3862 = 0;
	int16_t x3863 = 2;
	int16_t x3864 = 103;

	t62 = (((x3861<<x3862)<=x3863)-x3864);

	if (t62 != -103) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3885 = 5376349214355279750LLU;
	volatile uint8_t x3886 = 3U;
	int32_t x3888 = INT32_MAX;
	static int32_t t63 = 471524672;

	t63 = (((x3885<<x3886)<=x3887)-x3888);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3921 = 1;
	int16_t x3924 = -3;
	volatile int32_t t64 = -56703;

	t64 = (((x3921<<x3922)<=x3923)-x3924);

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3943 = 0U;
	int16_t x3944 = -1;
	volatile int32_t t65 = 8;

	t65 = (((x3941<<x3942)<=x3943)-x3944);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x4110 = 29;
	uint16_t x4111 = 1U;
	static int16_t x4112 = 5312;
	int32_t t66 = -46;

	t66 = (((x4109<<x4110)<=x4111)-x4112);

	if (t66 != -5312) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4249 = 12U;
	volatile int16_t x4250 = 0;
	int8_t x4252 = INT8_MIN;
	volatile int32_t t67 = 1;

	t67 = (((x4249<<x4250)<=x4251)-x4252);

	if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4253 = UINT64_MAX;
	uint8_t x4254 = 0U;
	int8_t x4255 = INT8_MIN;
	volatile uint32_t x4256 = UINT32_MAX;
	uint32_t t68 = 170147400U;

	t68 = (((x4253<<x4254)<=x4255)-x4256);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x4266 = 18U;
	int64_t x4268 = -1LL;
	volatile int64_t t69 = 19891987LL;

	t69 = (((x4265<<x4266)<=x4267)-x4268);

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4385 = 15;
	int8_t x4386 = 1;
	int32_t x4387 = INT32_MIN;
	static int8_t x4388 = INT8_MAX;
	int32_t t70 = 2;

	t70 = (((x4385<<x4386)<=x4387)-x4388);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x4389 = 59U;
	static uint8_t x4390 = 0U;
	int16_t x4391 = INT16_MAX;
	int8_t x4392 = INT8_MIN;
	int32_t t71 = -887;

	t71 = (((x4389<<x4390)<=x4391)-x4392);

	if (t71 != 129) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4393 = UINT16_MAX;
	uint8_t x4394 = 6U;
	static volatile int32_t t72 = 50490160;

	t72 = (((x4393<<x4394)<=x4395)-x4396);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4429 = 0U;
	static volatile int8_t x4432 = -17;
	volatile int32_t t73 = 173;

	t73 = (((x4429<<x4430)<=x4431)-x4432);

	if (t73 != 18) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4469 = 91U;
	uint32_t x4470 = 4U;
	uint64_t x4471 = 50777097LLU;
	static volatile int8_t x4472 = INT8_MIN;
	int32_t t74 = 207953;

	t74 = (((x4469<<x4470)<=x4471)-x4472);

	if (t74 != 129) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4557 = INT8_MAX;
	int64_t x4558 = 1LL;
	int8_t x4559 = INT8_MAX;
	int32_t x4560 = INT32_MAX;
	int32_t t75 = 806508417;

	t75 = (((x4557<<x4558)<=x4559)-x4560);

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4665 = 2709701513185742296LL;
	uint16_t x4666 = 1U;
	volatile int32_t t76 = 865187;

	t76 = (((x4665<<x4666)<=x4667)-x4668);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4701 = 257204088LLU;
	int8_t x4702 = 3;
	static int16_t x4703 = 0;
	static int16_t x4704 = -582;
	volatile int32_t t77 = 51;

	t77 = (((x4701<<x4702)<=x4703)-x4704);

	if (t77 != 582) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4801 = INT64_MAX;
	int8_t x4803 = 30;
	int8_t x4804 = INT8_MIN;

	t78 = (((x4801<<x4802)<=x4803)-x4804);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4889 = 1115U;
	volatile uint8_t x4891 = UINT8_MAX;
	uint32_t x4892 = 37820096U;

	t79 = (((x4889<<x4890)<=x4891)-x4892);

	if (t79 != 4257147200U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4917 = 299344818272052LLU;
	volatile int8_t x4918 = 0;
	uint8_t x4919 = UINT8_MAX;
	uint32_t x4920 = 238U;
	static volatile uint32_t t80 = 455U;

	t80 = (((x4917<<x4918)<=x4919)-x4920);

	if (t80 != 4294967058U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4977 = UINT32_MAX;
	uint8_t x4978 = 1U;
	volatile uint32_t x4979 = UINT32_MAX;
	int16_t x4980 = -599;
	static volatile int32_t t81 = -15;

	t81 = (((x4977<<x4978)<=x4979)-x4980);

	if (t81 != 600) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5089 = 64;
	int8_t x5090 = 0;
	static volatile int64_t x5092 = -1207529863831787LL;
	volatile int64_t t82 = 7LL;

	t82 = (((x5089<<x5090)<=x5091)-x5092);

	if (t82 != 1207529863831787LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5121 = 7536U;
	uint16_t x5122 = 2U;
	int64_t x5123 = INT64_MAX;
	int8_t x5124 = 1;
	int32_t t83 = 948489560;

	t83 = (((x5121<<x5122)<=x5123)-x5124);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5165 = UINT32_MAX;
	static volatile int32_t x5168 = -12946;
	static volatile int32_t t84 = -55364722;

	t84 = (((x5165<<x5166)<=x5167)-x5168);

	if (t84 != 12947) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5409 = 728U;
	uint16_t x5410 = 10U;
	uint16_t x5411 = 54U;
	static volatile int8_t x5412 = INT8_MAX;
	volatile int32_t t85 = -6248;

	t85 = (((x5409<<x5410)<=x5411)-x5412);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5618 = 12;
	volatile uint16_t x5619 = UINT16_MAX;
	int32_t x5620 = -1;
	static int32_t t86 = 428723224;

	t86 = (((x5617<<x5618)<=x5619)-x5620);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5713 = 91479U;
	static uint16_t x5714 = 0U;
	int8_t x5715 = 1;
	uint32_t x5716 = 354U;
	volatile uint32_t t87 = 23916042U;

	t87 = (((x5713<<x5714)<=x5715)-x5716);

	if (t87 != 4294966942U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x5769 = INT16_MAX;
	uint8_t x5770 = 1U;
	int16_t x5772 = 3261;
	int32_t t88 = 9735237;

	t88 = (((x5769<<x5770)<=x5771)-x5772);

	if (t88 != -3260) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x5825 = UINT32_MAX;
	volatile int16_t x5827 = -1;
	int16_t x5828 = -1;
	static volatile int32_t t89 = 1;

	t89 = (((x5825<<x5826)<=x5827)-x5828);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5969 = UINT64_MAX;
	uint16_t x5970 = 17U;
	int16_t x5971 = INT16_MIN;
	int8_t x5972 = -1;
	static int32_t t90 = 46242937;

	t90 = (((x5969<<x5970)<=x5971)-x5972);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x6145 = UINT8_MAX;
	int32_t x6147 = INT32_MAX;
	static volatile int32_t t91 = -100844;

	t91 = (((x6145<<x6146)<=x6147)-x6148);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6158 = 1;
	volatile int16_t x6159 = 3;
	uint16_t x6160 = 1916U;
	static int32_t t92 = 4100827;

	t92 = (((x6157<<x6158)<=x6159)-x6160);

	if (t92 != -1916) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x6285 = 487U;
	uint32_t x6287 = UINT32_MAX;
	static int8_t x6288 = -1;
	volatile int32_t t93 = 0;

	t93 = (((x6285<<x6286)<=x6287)-x6288);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6333 = 53U;
	int8_t x6334 = 9;
	uint16_t x6335 = 1U;
	static uint8_t x6336 = UINT8_MAX;
	volatile int32_t t94 = -101605;

	t94 = (((x6333<<x6334)<=x6335)-x6336);

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6381 = 0U;
	uint8_t x6382 = 1U;
	static uint16_t x6383 = UINT16_MAX;
	int16_t x6384 = 11701;
	int32_t t95 = 696;

	t95 = (((x6381<<x6382)<=x6383)-x6384);

	if (t95 != -11700) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6426 = 43U;
	int8_t x6427 = INT8_MIN;
	int16_t x6428 = INT16_MIN;
	static int32_t t96 = 54634590;

	t96 = (((x6425<<x6426)<=x6427)-x6428);

	if (t96 != 32769) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6505 = 34718654319699815LLU;
	int32_t x6506 = 17;
	uint8_t x6507 = 13U;
	static int64_t x6508 = INT64_MAX;
	int64_t t97 = 21306207114529599LL;

	t97 = (((x6505<<x6506)<=x6507)-x6508);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6657 = 19598U;
	uint16_t x6658 = 1U;
	uint8_t x6659 = UINT8_MAX;
	int32_t x6660 = INT32_MAX;
	int32_t t98 = -83944775;

	t98 = (((x6657<<x6658)<=x6659)-x6660);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x6757 = 0U;
	volatile int8_t x6759 = -5;
	uint64_t x6760 = UINT64_MAX;
	volatile uint64_t t99 = 3830036679LLU;

	t99 = (((x6757<<x6758)<=x6759)-x6760);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

