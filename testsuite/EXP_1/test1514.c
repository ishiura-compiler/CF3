#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x57 = -1;
int64_t x60 = 2LL;
static uint32_t x142 = UINT32_MAX;
uint64_t x143 = 248134201168LLU;
uint32_t x303 = 546U;
static uint16_t x304 = 0U;
static volatile uint32_t t4 = 0U;
static volatile int64_t x325 = 3376582745LL;
volatile uint32_t t6 = 724640148U;
int32_t x531 = 5733053;
int32_t x796 = 0;
int16_t x854 = INT16_MAX;
int64_t t12 = INT64_MAX;
int8_t x1304 = 1;
int64_t t18 = -1321LL;
int32_t x1533 = INT32_MIN;
uint16_t x1536 = 0U;
static uint64_t x1576 = 17LLU;
int64_t x1578 = INT64_MIN;
static uint32_t x1580 = 12U;
uint8_t x1600 = 3U;
uint8_t x1781 = UINT8_MAX;
uint16_t x1888 = 3U;
static volatile int32_t t27 = 4;
int16_t x1989 = 4;
volatile uint64_t x2042 = 261748135322LLU;
static int32_t t31 = -29;
volatile uint64_t x2065 = 212024013LLU;
uint8_t x2208 = 0U;
volatile uint64_t t33 = 457430998412822LLU;
int16_t x2355 = 0;
int32_t t34 = -15304;
volatile int8_t x2374 = INT8_MIN;
static volatile uint64_t t37 = 165430193274818LLU;
static volatile int32_t x2692 = 0;
int32_t x2815 = 7;
int32_t t41 = 9149061;
volatile uint8_t x3043 = UINT8_MAX;
uint8_t x3052 = 1U;
static volatile uint32_t x3207 = UINT32_MAX;
volatile uint8_t x3460 = 0U;
uint64_t x3517 = 343LLU;
int32_t x3589 = 124621;
int16_t x3590 = INT16_MAX;
static volatile int32_t t53 = 1;
static int16_t x3665 = 13540;
uint8_t x3765 = 17U;
volatile uint64_t x3767 = 6813200830741664169LLU;
int64_t x3790 = INT64_MAX;
uint32_t x3798 = 1U;
int16_t x3805 = INT16_MIN;
static uint64_t x3806 = UINT64_MAX;
volatile int8_t x3825 = -31;
static uint8_t x3828 = 3U;
uint32_t x3885 = 5573087U;
uint8_t x3888 = 4U;
int32_t x3941 = INT32_MAX;
static volatile int8_t x3944 = 4;
static volatile int32_t t63 = -16183;
static volatile int32_t t64 = -7414636;
uint32_t x4110 = UINT32_MAX;
uint32_t t67 = 0U;
uint16_t x4161 = UINT16_MAX;
static uint16_t x4274 = 1U;
uint16_t x4276 = 0U;
volatile int32_t t70 = 0;
int8_t x4390 = -1;
static int32_t x4556 = 3;
uint16_t x4820 = 1U;
int8_t x4889 = -7;
uint16_t x4892 = 11U;
uint64_t x4901 = UINT64_MAX;
static volatile int64_t t78 = INT64_MAX;
volatile int32_t t80 = 0;
volatile int8_t x5119 = INT8_MAX;
uint64_t x5166 = 466021462LLU;
volatile uint64_t t82 = 39148073LLU;
static uint64_t x5193 = UINT64_MAX;
volatile int16_t x5375 = 24;
uint32_t x5410 = UINT32_MAX;
static volatile int64_t t86 = 421676LL;
static uint16_t x5470 = 7U;
static int8_t x5477 = -1;
int64_t x5479 = 1288058008LL;
volatile int64_t x5517 = INT64_MAX;
int32_t t89 = 1069328563;
int32_t t90 = 463320;
int32_t t91 = -76;
volatile int8_t x5721 = INT8_MAX;
static uint8_t x5722 = 0U;
static int32_t t93 = -58690;
volatile int8_t x6258 = -21;
uint32_t t94 = 33942U;
uint64_t x6425 = 734LLU;
static int64_t x6478 = -2785195764203451LL;


void f0(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 594LLU;
	volatile int16_t x24 = 7;
	volatile uint64_t t0 = 535010978458LLU;

	t0 = (((x21<x22)^x23)<<x24);

	if (t0 != 76160LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x58 = INT16_MAX;
	int64_t x59 = 5640LL;
	volatile int64_t t1 = -5583408415LL;

	t1 = (((x57<x58)^x59)<<x60);

	if (t1 != 22564LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x141 = UINT32_MAX;
	volatile uint32_t x144 = 29U;
	static uint64_t t2 = 504364459506395265LLU;

	t2 = (((x141<x142)^x143)<<x144);

	if (t2 != 4088826363488763904LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x289 = 127542012503271921LLU;
	int8_t x290 = 10;
	volatile uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 4U;
	volatile int32_t t3 = 48907124;

	t3 = (((x289<x290)^x291)<<x292);

	if (t3 != 4080) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x301 = 4U;
	uint16_t x302 = 61U;

	t4 = (((x301<x302)^x303)<<x304);

	if (t4 != 547U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x326 = 50;
	uint16_t x327 = 769U;
	uint8_t x328 = 9U;
	int32_t t5 = 1271102;

	t5 = (((x325<x326)^x327)<<x328);

	if (t5 != 393728) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x401 = -117090813561981LL;
	static int64_t x402 = INT64_MAX;
	uint32_t x403 = UINT32_MAX;
	uint16_t x404 = 4U;

	t6 = (((x401<x402)^x403)<<x404);

	if (t6 != 4294967264U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x529 = -41130;
	volatile int64_t x530 = INT64_MIN;
	static int8_t x532 = 1;
	int32_t t7 = 29926436;

	t7 = (((x529<x530)^x531)<<x532);

	if (t7 != 11466106) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x793 = 12U;
	int8_t x794 = INT8_MAX;
	int16_t x795 = 2888;
	static int32_t t8 = 3201238;

	t8 = (((x793<x794)^x795)<<x796);

	if (t8 != 2889) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x797 = UINT16_MAX;
	int64_t x798 = -650523LL;
	uint8_t x799 = 3U;
	static uint8_t x800 = 12U;
	int32_t t9 = 285;

	t9 = (((x797<x798)^x799)<<x800);

	if (t9 != 12288) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x853 = 1U;
	static int8_t x855 = 44;
	int16_t x856 = 5;
	volatile int32_t t10 = -470523770;

	t10 = (((x853<x854)^x855)<<x856);

	if (t10 != 1440) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x949 = INT8_MIN;
	int16_t x950 = 0;
	static volatile uint64_t x951 = UINT64_MAX;
	int8_t x952 = 4;
	uint64_t t11 = 97LLU;

	t11 = (((x949<x950)^x951)<<x952);

	if (t11 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x957 = 2;
	int32_t x958 = -1843610;
	int64_t x959 = INT64_MAX;
	static int64_t x960 = 0LL;

	t12 = (((x957<x958)^x959)<<x960);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1017 = UINT16_MAX;
	int64_t x1018 = INT64_MAX;
	uint32_t x1019 = 84071U;
	uint16_t x1020 = 0U;
	static uint32_t t13 = 269613U;

	t13 = (((x1017<x1018)^x1019)<<x1020);

	if (t13 != 84070U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1093 = INT64_MAX;
	uint32_t x1094 = 469142U;
	int64_t x1095 = 1164813LL;
	static uint8_t x1096 = 42U;
	int64_t t14 = 41LL;

	t14 = (((x1093<x1094)^x1095)<<x1096);

	if (t14 != 5122901750738583552LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1189 = 47U;
	int64_t x1190 = INT64_MAX;
	volatile uint32_t x1191 = 60U;
	static int8_t x1192 = 23;
	volatile uint32_t t15 = 254351848U;

	t15 = (((x1189<x1190)^x1191)<<x1192);

	if (t15 != 511705088U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1221 = UINT32_MAX;
	uint32_t x1222 = 12569U;
	uint64_t x1223 = UINT64_MAX;
	int8_t x1224 = 10;
	volatile uint64_t t16 = 94LLU;

	t16 = (((x1221<x1222)^x1223)<<x1224);

	if (t16 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1301 = 348911586812846424LL;
	static int8_t x1302 = INT8_MAX;
	volatile uint64_t x1303 = UINT64_MAX;
	uint64_t t17 = 16603130LLU;

	t17 = (((x1301<x1302)^x1303)<<x1304);

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1345 = INT64_MIN;
	uint64_t x1346 = 31769208305190763LLU;
	volatile int64_t x1347 = 2321480LL;
	uint8_t x1348 = 0U;

	t18 = (((x1345<x1346)^x1347)<<x1348);

	if (t18 != 2321480LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1369 = 33866205165368LLU;
	int64_t x1370 = 0LL;
	volatile uint8_t x1371 = 56U;
	static uint64_t x1372 = 15LLU;
	volatile int32_t t19 = -22995656;

	t19 = (((x1369<x1370)^x1371)<<x1372);

	if (t19 != 1835008) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1509 = INT64_MIN;
	uint64_t x1510 = 895751271738LLU;
	volatile uint8_t x1511 = UINT8_MAX;
	uint32_t x1512 = 7U;
	int32_t t20 = -5416;

	t20 = (((x1509<x1510)^x1511)<<x1512);

	if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1534 = 500U;
	volatile uint16_t x1535 = UINT16_MAX;
	volatile int32_t t21 = 13140;

	t21 = (((x1533<x1534)^x1535)<<x1536);

	if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1573 = INT16_MIN;
	uint8_t x1574 = 1U;
	uint32_t x1575 = UINT32_MAX;
	uint32_t t22 = 12818747U;

	t22 = (((x1573<x1574)^x1575)<<x1576);

	if (t22 != 4294705152U) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1577 = INT64_MIN;
	static uint64_t x1579 = UINT64_MAX;
	volatile uint64_t t23 = 8643787188LLU;

	t23 = (((x1577<x1578)^x1579)<<x1580);

	if (t23 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1597 = 5;
	static volatile int8_t x1598 = -18;
	int64_t x1599 = 557057508708823108LL;
	volatile int64_t t24 = -124909160LL;

	t24 = (((x1597<x1598)^x1599)<<x1600);

	if (t24 != 4456460069670584864LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1677 = INT16_MIN;
	uint64_t x1678 = 7190357LLU;
	uint64_t x1679 = UINT64_MAX;
	uint8_t x1680 = 10U;
	volatile uint64_t t25 = 79149233LLU;

	t25 = (((x1677<x1678)^x1679)<<x1680);

	if (t25 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1782 = 12U;
	uint16_t x1783 = UINT16_MAX;
	uint16_t x1784 = 15U;
	int32_t t26 = 748885115;

	t26 = (((x1781<x1782)^x1783)<<x1784);

	if (t26 != 2147450880) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1885 = -24;
	uint8_t x1886 = UINT8_MAX;
	uint16_t x1887 = UINT16_MAX;

	t27 = (((x1885<x1886)^x1887)<<x1888);

	if (t27 != 524272) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1893 = 455LLU;
	uint64_t x1894 = UINT64_MAX;
	uint8_t x1895 = UINT8_MAX;
	int8_t x1896 = 0;
	volatile int32_t t28 = 3384;

	t28 = (((x1893<x1894)^x1895)<<x1896);

	if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1945 = -1;
	int8_t x1946 = -1;
	static uint32_t x1947 = UINT32_MAX;
	int8_t x1948 = 12;
	volatile uint32_t t29 = 829217926U;

	t29 = (((x1945<x1946)^x1947)<<x1948);

	if (t29 != 4294963200U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1990 = INT32_MIN;
	uint16_t x1991 = UINT16_MAX;
	static int8_t x1992 = 9;
	static int32_t t30 = 510482688;

	t30 = (((x1989<x1990)^x1991)<<x1992);

	if (t30 != 33553920) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2041 = INT32_MIN;
	uint8_t x2043 = UINT8_MAX;
	uint8_t x2044 = 8U;

	t31 = (((x2041<x2042)^x2043)<<x2044);

	if (t31 != 65280) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2066 = INT16_MIN;
	uint32_t x2067 = 865U;
	int16_t x2068 = 0;
	static uint32_t t32 = 306851U;

	t32 = (((x2065<x2066)^x2067)<<x2068);

	if (t32 != 864U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2205 = INT16_MIN;
	static volatile uint64_t x2206 = 3503LLU;
	volatile uint64_t x2207 = 32775LLU;

	t33 = (((x2205<x2206)^x2207)<<x2208);

	if (t33 != 32775LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2353 = INT64_MIN;
	int32_t x2354 = 197;
	uint32_t x2356 = 3U;

	t34 = (((x2353<x2354)^x2355)<<x2356);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x2373 = -1LL;
	uint16_t x2375 = UINT16_MAX;
	volatile uint16_t x2376 = 1U;
	static int32_t t35 = 28148;

	t35 = (((x2373<x2374)^x2375)<<x2376);

	if (t35 != 131070) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2385 = -36481624679010LL;
	static int16_t x2386 = INT16_MIN;
	uint16_t x2387 = 13593U;
	uint16_t x2388 = 7U;
	int32_t t36 = -1;

	t36 = (((x2385<x2386)^x2387)<<x2388);

	if (t36 != 1739776) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2421 = INT16_MIN;
	static int32_t x2422 = 5;
	uint64_t x2423 = 243774052220LLU;
	int8_t x2424 = 2;

	t37 = (((x2421<x2422)^x2423)<<x2424);

	if (t37 != 975096208884LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2453 = INT32_MIN;
	int8_t x2454 = -1;
	uint8_t x2455 = UINT8_MAX;
	static int64_t x2456 = 1LL;
	volatile int32_t t38 = 665129403;

	t38 = (((x2453<x2454)^x2455)<<x2456);

	if (t38 != 508) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2689 = INT64_MAX;
	int8_t x2690 = INT8_MAX;
	volatile uint32_t x2691 = 78U;
	static volatile uint32_t t39 = 11U;

	t39 = (((x2689<x2690)^x2691)<<x2692);

	if (t39 != 78U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2721 = 1U;
	uint32_t x2722 = 1U;
	static int16_t x2723 = 37;
	uint64_t x2724 = 6LLU;
	int32_t t40 = -941425346;

	t40 = (((x2721<x2722)^x2723)<<x2724);

	if (t40 != 2368) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2813 = -3305;
	int64_t x2814 = INT64_MIN;
	uint16_t x2816 = 3U;

	t41 = (((x2813<x2814)^x2815)<<x2816);

	if (t41 != 56) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2861 = 25141U;
	int64_t x2862 = INT64_MIN;
	int16_t x2863 = INT16_MAX;
	uint8_t x2864 = 8U;
	int32_t t42 = 15757197;

	t42 = (((x2861<x2862)^x2863)<<x2864);

	if (t42 != 8388352) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2885 = 13492;
	static uint8_t x2886 = UINT8_MAX;
	int8_t x2887 = 1;
	static uint16_t x2888 = 0U;
	int32_t t43 = -200387;

	t43 = (((x2885<x2886)^x2887)<<x2888);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3041 = -1;
	static volatile int16_t x3042 = INT16_MIN;
	uint8_t x3044 = 1U;
	volatile int32_t t44 = -511;

	t44 = (((x3041<x3042)^x3043)<<x3044);

	if (t44 != 510) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3049 = INT8_MIN;
	int64_t x3050 = INT64_MAX;
	uint64_t x3051 = 8307844LLU;
	uint64_t t45 = 1649453LLU;

	t45 = (((x3049<x3050)^x3051)<<x3052);

	if (t45 != 16615690LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3205 = UINT16_MAX;
	int32_t x3206 = -1;
	uint8_t x3208 = 14U;
	uint32_t t46 = 5456U;

	t46 = (((x3205<x3206)^x3207)<<x3208);

	if (t46 != 4294950912U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3253 = UINT16_MAX;
	uint64_t x3254 = 1022LLU;
	static uint8_t x3255 = 2U;
	volatile int16_t x3256 = 1;
	volatile int32_t t47 = 15;

	t47 = (((x3253<x3254)^x3255)<<x3256);

	if (t47 != 4) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3433 = 6967388984242370LLU;
	uint32_t x3434 = UINT32_MAX;
	static uint8_t x3435 = UINT8_MAX;
	int8_t x3436 = 0;
	int32_t t48 = -91;

	t48 = (((x3433<x3434)^x3435)<<x3436);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3457 = INT32_MIN;
	int32_t x3458 = INT32_MIN;
	static uint32_t x3459 = 5046375U;
	uint32_t t49 = 2040837U;

	t49 = (((x3457<x3458)^x3459)<<x3460);

	if (t49 != 5046375U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3497 = 23991815LLU;
	uint32_t x3498 = 831015U;
	uint32_t x3499 = 3044U;
	uint32_t x3500 = 1U;
	static volatile uint32_t t50 = 58383U;

	t50 = (((x3497<x3498)^x3499)<<x3500);

	if (t50 != 6088U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3518 = 27;
	uint32_t x3519 = 136553U;
	int16_t x3520 = 2;
	static volatile uint32_t t51 = 547383U;

	t51 = (((x3517<x3518)^x3519)<<x3520);

	if (t51 != 546212U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3557 = UINT64_MAX;
	int8_t x3558 = INT8_MIN;
	uint64_t x3559 = 233LLU;
	int8_t x3560 = 8;
	volatile uint64_t t52 = 202672049954509381LLU;

	t52 = (((x3557<x3558)^x3559)<<x3560);

	if (t52 != 59648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3591 = UINT16_MAX;
	uint16_t x3592 = 7U;

	t53 = (((x3589<x3590)^x3591)<<x3592);

	if (t53 != 8388480) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3666 = -1LL;
	uint32_t x3667 = UINT32_MAX;
	int32_t x3668 = 0;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (((x3665<x3666)^x3667)<<x3668);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3669 = 255;
	uint32_t x3670 = 0U;
	uint32_t x3671 = UINT32_MAX;
	volatile int8_t x3672 = 11;
	static volatile uint32_t t55 = 13147864U;

	t55 = (((x3669<x3670)^x3671)<<x3672);

	if (t55 != 4294965248U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3766 = UINT8_MAX;
	volatile int64_t x3768 = 1LL;
	uint64_t t56 = 13547LLU;

	t56 = (((x3765<x3766)^x3767)<<x3768);

	if (t56 != 13626401661483328336LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3789 = 42U;
	volatile uint32_t x3791 = 20885836U;
	uint16_t x3792 = 26U;
	uint32_t t57 = 3207U;

	t57 = (((x3789<x3790)^x3791)<<x3792);

	if (t57 != 872415232U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3797 = 29U;
	static uint16_t x3799 = 5U;
	int16_t x3800 = 8;
	static int32_t t58 = -5;

	t58 = (((x3797<x3798)^x3799)<<x3800);

	if (t58 != 1280) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3807 = 4370U;
	static volatile uint16_t x3808 = 3U;
	volatile uint32_t t59 = 30662U;

	t59 = (((x3805<x3806)^x3807)<<x3808);

	if (t59 != 34968U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x3826 = -1;
	uint16_t x3827 = 30138U;
	int32_t t60 = 158773;

	t60 = (((x3825<x3826)^x3827)<<x3828);

	if (t60 != 241112) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3886 = INT64_MAX;
	uint8_t x3887 = 33U;
	static volatile int32_t t61 = -7654;

	t61 = (((x3885<x3886)^x3887)<<x3888);

	if (t61 != 512) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3942 = -4;
	volatile uint16_t x3943 = UINT16_MAX;
	static volatile int32_t t62 = -450;

	t62 = (((x3941<x3942)^x3943)<<x3944);

	if (t62 != 1048560) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x3965 = -1;
	int8_t x3966 = INT8_MIN;
	uint16_t x3967 = 1462U;
	uint8_t x3968 = 1U;

	t63 = (((x3965<x3966)^x3967)<<x3968);

	if (t63 != 2924) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x4029 = 544U;
	volatile uint32_t x4030 = 254221019U;
	uint8_t x4031 = 3U;
	uint8_t x4032 = 11U;

	t64 = (((x4029<x4030)^x4031)<<x4032);

	if (t64 != 4096) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x4041 = 949857U;
	volatile uint16_t x4042 = 1214U;
	uint32_t x4043 = 597U;
	uint8_t x4044 = 1U;
	uint32_t t65 = 494U;

	t65 = (((x4041<x4042)^x4043)<<x4044);

	if (t65 != 1194U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4061 = INT32_MIN;
	uint32_t x4062 = 1637U;
	uint64_t x4063 = 107443344LLU;
	int8_t x4064 = 63;
	static volatile uint64_t t66 = 552LLU;

	t66 = (((x4061<x4062)^x4063)<<x4064);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4109 = 4910U;
	uint32_t x4111 = 620U;
	int8_t x4112 = 9;

	t67 = (((x4109<x4110)^x4111)<<x4112);

	if (t67 != 317952U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x4162 = INT16_MAX;
	uint8_t x4163 = 28U;
	int8_t x4164 = 1;
	volatile int32_t t68 = 1;

	t68 = (((x4161<x4162)^x4163)<<x4164);

	if (t68 != 56) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4241 = -23805481832140LL;
	int16_t x4242 = INT16_MAX;
	uint8_t x4243 = 5U;
	uint32_t x4244 = 4U;
	static int32_t t69 = 2;

	t69 = (((x4241<x4242)^x4243)<<x4244);

	if (t69 != 64) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4273 = 13;
	uint16_t x4275 = 1U;

	t70 = (((x4273<x4274)^x4275)<<x4276);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4389 = INT64_MIN;
	static uint16_t x4391 = 4115U;
	uint16_t x4392 = 4U;
	static volatile int32_t t71 = 0;

	t71 = (((x4389<x4390)^x4391)<<x4392);

	if (t71 != 65824) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4461 = 4255782255992746641LLU;
	volatile uint64_t x4462 = 96040148950016887LLU;
	int32_t x4463 = INT32_MAX;
	static int16_t x4464 = 0;
	static volatile int32_t t72 = INT32_MAX;

	t72 = (((x4461<x4462)^x4463)<<x4464);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4509 = 8U;
	int64_t x4510 = INT64_MIN;
	int64_t x4511 = 2LL;
	uint64_t x4512 = 46LLU;
	int64_t t73 = -1694LL;

	t73 = (((x4509<x4510)^x4511)<<x4512);

	if (t73 != 140737488355328LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4553 = INT32_MAX;
	uint8_t x4554 = UINT8_MAX;
	int8_t x4555 = 0;
	int32_t t74 = -55135;

	t74 = (((x4553<x4554)^x4555)<<x4556);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x4793 = 53;
	static int16_t x4794 = 22;
	uint8_t x4795 = 1U;
	static int32_t x4796 = 15;
	static volatile int32_t t75 = 50847;

	t75 = (((x4793<x4794)^x4795)<<x4796);

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4817 = 8U;
	volatile uint64_t x4818 = 56750974LLU;
	volatile uint64_t x4819 = 14LLU;
	volatile uint64_t t76 = 4LLU;

	t76 = (((x4817<x4818)^x4819)<<x4820);

	if (t76 != 30LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4890 = 52U;
	uint16_t x4891 = UINT16_MAX;
	volatile int32_t t77 = -244271879;

	t77 = (((x4889<x4890)^x4891)<<x4892);

	if (t77 != 134213632) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4902 = 8LLU;
	static int64_t x4903 = INT64_MAX;
	volatile int8_t x4904 = 0;

	t78 = (((x4901<x4902)^x4903)<<x4904);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4933 = 552156U;
	int16_t x4934 = 2382;
	volatile int16_t x4935 = 0;
	static uint8_t x4936 = 9U;
	volatile int32_t t79 = 0;

	t79 = (((x4933<x4934)^x4935)<<x4936);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x4977 = INT16_MIN;
	volatile int64_t x4978 = INT64_MIN;
	int8_t x4979 = INT8_MAX;
	static int16_t x4980 = 1;

	t80 = (((x4977<x4978)^x4979)<<x4980);

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5117 = -1LL;
	int8_t x5118 = 5;
	uint16_t x5120 = 1U;
	static volatile int32_t t81 = -65;

	t81 = (((x5117<x5118)^x5119)<<x5120);

	if (t81 != 252) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x5165 = INT32_MAX;
	uint64_t x5167 = 1409398448541656LLU;
	volatile uint8_t x5168 = 1U;

	t82 = (((x5165<x5166)^x5167)<<x5168);

	if (t82 != 2818796897083312LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5194 = -4661;
	uint8_t x5195 = UINT8_MAX;
	static uint16_t x5196 = 7U;
	int32_t t83 = -3;

	t83 = (((x5193<x5194)^x5195)<<x5196);

	if (t83 != 32640) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5213 = INT8_MAX;
	uint64_t x5214 = 8053954370903689304LLU;
	volatile int16_t x5215 = 0;
	static uint8_t x5216 = 1U;
	int32_t t84 = 93570;

	t84 = (((x5213<x5214)^x5215)<<x5216);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5373 = INT16_MAX;
	int8_t x5374 = INT8_MAX;
	volatile uint8_t x5376 = 1U;
	static volatile int32_t t85 = -19;

	t85 = (((x5373<x5374)^x5375)<<x5376);

	if (t85 != 48) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5409 = 1U;
	int64_t x5411 = 4992LL;
	static int8_t x5412 = 0;

	t86 = (((x5409<x5410)^x5411)<<x5412);

	if (t86 != 4993LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5469 = INT16_MIN;
	static int32_t x5471 = 0;
	uint8_t x5472 = 3U;
	volatile int32_t t87 = -3;

	t87 = (((x5469<x5470)^x5471)<<x5472);

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5478 = -1;
	int16_t x5480 = 0;
	static int64_t t88 = 261382856030966LL;

	t88 = (((x5477<x5478)^x5479)<<x5480);

	if (t88 != 1288058008LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x5518 = 79U;
	uint16_t x5519 = 648U;
	static volatile uint16_t x5520 = 0U;

	t89 = (((x5517<x5518)^x5519)<<x5520);

	if (t89 != 648) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5557 = 785891U;
	int64_t x5558 = INT64_MAX;
	static uint16_t x5559 = 5913U;
	volatile uint16_t x5560 = 0U;

	t90 = (((x5557<x5558)^x5559)<<x5560);

	if (t90 != 5912) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5633 = INT8_MAX;
	static uint16_t x5634 = 4882U;
	int8_t x5635 = 1;
	volatile uint8_t x5636 = 7U;

	t91 = (((x5633<x5634)^x5635)<<x5636);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5723 = 0U;
	uint16_t x5724 = 3U;
	static int32_t t92 = 49422;

	t92 = (((x5721<x5722)^x5723)<<x5724);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x6105 = 13U;
	int32_t x6106 = 1941284;
	int16_t x6107 = 7;
	uint16_t x6108 = 4U;

	t93 = (((x6105<x6106)^x6107)<<x6108);

	if (t93 != 96) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6257 = 15293382838LLU;
	uint32_t x6259 = 8U;
	int8_t x6260 = 1;

	t94 = (((x6257<x6258)^x6259)<<x6260);

	if (t94 != 18U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x6281 = INT64_MAX;
	uint64_t x6282 = 66817806558966560LLU;
	int64_t x6283 = 1278947408LL;
	int16_t x6284 = 0;
	int64_t t95 = 167544382923165LL;

	t95 = (((x6281<x6282)^x6283)<<x6284);

	if (t95 != 1278947408LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6389 = INT8_MIN;
	int8_t x6390 = INT8_MAX;
	static int16_t x6391 = 41;
	uint16_t x6392 = 0U;
	static int32_t t96 = 6991386;

	t96 = (((x6389<x6390)^x6391)<<x6392);

	if (t96 != 40) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6426 = -1;
	volatile uint32_t x6427 = 216441698U;
	static uint64_t x6428 = 1LLU;
	static uint32_t t97 = 1993833791U;

	t97 = (((x6425<x6426)^x6427)<<x6428);

	if (t97 != 432883398U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6477 = 1907U;
	int16_t x6479 = 12;
	int8_t x6480 = 2;
	volatile int32_t t98 = -881602;

	t98 = (((x6477<x6478)^x6479)<<x6480);

	if (t98 != 48) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6485 = 2707911999367077552LLU;
	uint8_t x6486 = UINT8_MAX;
	uint64_t x6487 = 5502793058275967LLU;
	int32_t x6488 = 29;
	static volatile uint64_t t99 = 381106370LLU;

	t99 = (((x6485<x6486)^x6487)<<x6488);

	if (t99 != 6570851155440566272LLU) { NG(); } else { ; }
	
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

