#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 1876343674940LLU;
int16_t x205 = INT16_MIN;
volatile int32_t t2 = 1;
static uint16_t x271 = 12832U;
volatile uint8_t x272 = 23U;
static uint8_t x371 = UINT8_MAX;
int64_t t8 = 7287378LL;
static int8_t x416 = 1;
static uint16_t x509 = UINT16_MAX;
volatile int16_t x529 = INT16_MIN;
int8_t x585 = INT8_MAX;
int16_t x746 = -95;
volatile int64_t t14 = 181LL;
uint16_t x918 = UINT16_MAX;
uint32_t x1257 = 107U;
uint16_t x1258 = UINT16_MAX;
uint32_t t19 = 425U;
static uint32_t x1305 = UINT32_MAX;
int16_t x1382 = INT16_MIN;
volatile int32_t t23 = 42794;
volatile int16_t x1385 = INT16_MIN;
static uint32_t x1386 = 96781464U;
uint32_t x1387 = 953743937U;
int8_t x1549 = -1;
uint8_t x1551 = 7U;
int16_t x1816 = 55;
uint64_t x1915 = 606934416454323004LLU;
uint64_t t30 = 110980404300214285LLU;
int64_t x2054 = -1LL;
int32_t x2159 = INT32_MAX;
volatile uint8_t x2160 = 5U;
uint16_t x2188 = 28U;
int64_t x2325 = 6356997014LL;
uint32_t x2326 = 32U;
volatile uint64_t t37 = 1064923644508143872LLU;
uint8_t x2395 = 1U;
uint64_t t39 = 114025LLU;
uint64_t x2463 = 17157272093LLU;
static int8_t x2691 = 13;
int64_t x2890 = INT64_MIN;
volatile int64_t t42 = -253LL;
uint32_t x2994 = UINT32_MAX;
volatile uint32_t t46 = 3242266U;
int32_t x3294 = INT32_MIN;
int32_t t50 = 67078780;
volatile uint32_t t51 = 761165152U;
uint8_t x3426 = 23U;
int16_t x3649 = INT16_MIN;
int8_t x3651 = 2;
int8_t x3754 = INT8_MIN;
uint8_t x3860 = 1U;
int8_t x3932 = 1;
static volatile uint32_t t57 = 66430615U;
static int8_t x3949 = INT8_MIN;
static int8_t x3950 = INT8_MAX;
static uint16_t x4142 = 30U;
uint32_t x4143 = UINT32_MAX;
int8_t x4144 = 1;
static uint32_t x4198 = UINT32_MAX;
int16_t x4200 = 0;
int32_t x4336 = 0;
int32_t x4414 = INT32_MIN;
static volatile uint64_t x4583 = UINT64_MAX;
uint16_t x4824 = 3U;
static uint64_t t72 = 4136LLU;
int8_t x5125 = INT8_MAX;
int8_t x5220 = 31;
static volatile int32_t t76 = 503481749;
volatile uint64_t t78 = 4332LLU;
static volatile uint64_t t79 = 1LLU;
static uint16_t x5516 = 3U;
uint32_t t80 = 112818261U;
uint64_t x5597 = UINT64_MAX;
uint32_t x5598 = 823585U;
uint64_t x5599 = 100322711769859LLU;
int16_t x5662 = -46;
uint64_t x5670 = 7207423007048946694LLU;
uint8_t x5908 = 35U;
int16_t x5954 = INT16_MAX;
static uint64_t t88 = 10LLU;
static int32_t x6153 = 858045;
volatile int32_t x6154 = INT32_MIN;
volatile uint64_t x6155 = UINT64_MAX;
int64_t x6250 = INT64_MAX;
static uint16_t x6252 = 6U;
static int64_t x6277 = -1LL;
uint64_t x6279 = 2LLU;
volatile uint64_t t91 = 219580LLU;
static uint32_t x6376 = 4U;
int32_t x6490 = INT32_MAX;
static int64_t t94 = -159969060LL;
static uint16_t x6562 = UINT16_MAX;
static volatile int32_t x6564 = 0;


void f0(void) {
	uint64_t x145 = 1291LLU;
	uint8_t x146 = 15U;
	static volatile uint8_t x147 = UINT8_MAX;
	volatile uint32_t x148 = 3U;
	static volatile uint64_t t0 = 24949034960LLU;

	t0 = ((x145^x146)*(x147>>x148));

	if (t0 != 39804LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x185 = 3610U;
	volatile int32_t x186 = 4995351;
	uint64_t x187 = 760926667198422281LLU;
	uint64_t x188 = 1LLU;

	t1 = ((x185^x186)*(x187>>x188));

	if (t1 != 2611112603590817972LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x206 = 12U;
	volatile uint16_t x207 = 1U;
	uint8_t x208 = 0U;

	t2 = ((x205^x206)*(x207>>x208));

	if (t2 != -32756) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x221 = 16LLU;
	int8_t x222 = INT8_MIN;
	volatile int8_t x223 = INT8_MAX;
	volatile uint64_t x224 = 10LLU;
	volatile uint64_t t3 = 442LLU;

	t3 = ((x221^x222)*(x223>>x224));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x225 = 9;
	volatile uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 1710374LLU;
	uint8_t x228 = 7U;
	volatile uint64_t t4 = 722294474955LLU;

	t4 = ((x225^x226)*(x227>>x228));

	if (t4 != 3287052LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x249 = 11;
	static int32_t x250 = INT32_MAX;
	uint32_t x251 = 10766011U;
	int8_t x252 = 1;
	volatile uint32_t t5 = 105112U;

	t5 = ((x249^x250)*(x251>>x252));

	if (t5 != 2082887588U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x269 = 3U;
	int32_t x270 = -37;
	int32_t t6 = -1141;

	t6 = ((x269^x270)*(x271>>x272));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x281 = 95LLU;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	static int8_t x284 = 1;
	volatile uint64_t t7 = 39964276579465LLU;

	t7 = ((x281^x282)*(x283>>x284));

	if (t7 != 18446744073709010977LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x369 = -231387LL;
	int16_t x370 = -59;
	static uint64_t x372 = 1LLU;

	t8 = ((x369^x370)*(x371>>x372));

	if (t8 != 29386784LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x413 = 479U;
	uint32_t x414 = UINT32_MAX;
	volatile uint32_t x415 = 402U;
	volatile uint32_t t9 = 429U;

	t9 = ((x413^x414)*(x415>>x416));

	if (t9 != 4294870816U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x510 = 59U;
	int8_t x511 = INT8_MAX;
	int32_t x512 = 7;
	int32_t t10 = 428475454;

	t10 = ((x509^x510)*(x511>>x512));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x530 = 2871387;
	int16_t x531 = 16;
	static uint8_t x532 = 6U;
	volatile int32_t t11 = 236068133;

	t11 = ((x529^x530)*(x531>>x532));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x565 = INT8_MIN;
	uint8_t x566 = 5U;
	uint8_t x567 = UINT8_MAX;
	static uint8_t x568 = 15U;
	int32_t t12 = 60552;

	t12 = ((x565^x566)*(x567>>x568));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x586 = 2U;
	uint32_t x587 = 5518U;
	volatile uint8_t x588 = 2U;
	volatile uint32_t t13 = 27259875U;

	t13 = ((x585^x586)*(x587>>x588));

	if (t13 != 172375U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x745 = 2961LL;
	volatile uint8_t x747 = UINT8_MAX;
	int8_t x748 = 15;

	t14 = ((x745^x746)*(x747>>x748));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x917 = INT16_MAX;
	uint32_t x919 = UINT32_MAX;
	int8_t x920 = 5;
	static uint32_t t15 = 119178709U;

	t15 = ((x917^x918)*(x919>>x920));

	if (t15 != 4294934528U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x945 = 190U;
	int32_t x946 = INT32_MIN;
	int8_t x947 = 0;
	volatile uint16_t x948 = 4U;
	volatile uint32_t t16 = 26U;

	t16 = ((x945^x946)*(x947>>x948));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1029 = UINT16_MAX;
	static int8_t x1030 = 21;
	uint64_t x1031 = 3LLU;
	int8_t x1032 = 1;
	static volatile uint64_t t17 = 15LLU;

	t17 = ((x1029^x1030)*(x1031>>x1032));

	if (t17 != 65514LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1249 = 0;
	int16_t x1250 = 12405;
	uint32_t x1251 = UINT32_MAX;
	volatile int8_t x1252 = 1;
	uint32_t t18 = 126891081U;

	t18 = ((x1249^x1250)*(x1251>>x1252));

	if (t18 != 2147471243U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1259 = 1383U;
	static uint8_t x1260 = 5U;

	t19 = ((x1257^x1258)*(x1259>>x1260));

	if (t19 != 2813404U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1269 = 1;
	volatile int32_t x1270 = 257587;
	int8_t x1271 = 1;
	uint16_t x1272 = 3U;
	volatile int32_t t20 = 167792621;

	t20 = ((x1269^x1270)*(x1271>>x1272));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1273 = INT32_MIN;
	uint16_t x1274 = UINT16_MAX;
	uint32_t x1275 = 0U;
	volatile int8_t x1276 = 2;
	volatile uint32_t t21 = 9032U;

	t21 = ((x1273^x1274)*(x1275>>x1276));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1306 = -21815294;
	uint32_t x1307 = 113753U;
	volatile uint16_t x1308 = 17U;
	uint32_t t22 = 144425U;

	t22 = ((x1305^x1306)*(x1307>>x1308));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1381 = 52U;
	int8_t x1383 = INT8_MAX;
	volatile uint8_t x1384 = 25U;

	t23 = ((x1381^x1382)*(x1383>>x1384));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1388 = 23U;
	volatile uint32_t t24 = 335510952U;

	t24 = ((x1385^x1386)*(x1387>>x1388));

	if (t24 != 1948862232U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1433 = INT8_MIN;
	static uint16_t x1434 = 82U;
	volatile int8_t x1435 = 1;
	uint8_t x1436 = 5U;
	int32_t t25 = -976;

	t25 = ((x1433^x1434)*(x1435>>x1436));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1513 = 4U;
	volatile int8_t x1514 = 45;
	uint32_t x1515 = 23936563U;
	uint16_t x1516 = 1U;
	uint32_t t26 = 2U;

	t26 = ((x1513^x1514)*(x1515>>x1516));

	if (t26 != 490699521U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1550 = -1LL;
	static volatile uint32_t x1552 = 3U;
	int64_t t27 = 236LL;

	t27 = ((x1549^x1550)*(x1551>>x1552));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x1645 = 45;
	uint16_t x1646 = UINT16_MAX;
	uint8_t x1647 = UINT8_MAX;
	int8_t x1648 = 0;
	int32_t t28 = 1;

	t28 = ((x1645^x1646)*(x1647>>x1648));

	if (t28 != 16699950) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1813 = INT32_MAX;
	int16_t x1814 = 230;
	volatile uint64_t x1815 = 48969LLU;
	volatile uint64_t t29 = 49636LLU;

	t29 = ((x1813^x1814)*(x1815>>x1816));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1913 = 1U;
	int16_t x1914 = -6399;
	int16_t x1916 = 22;

	t30 = ((x1913^x1914)*(x1915>>x1916));

	if (t30 != 18445817965286012416LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2053 = -1;
	static uint64_t x2055 = 8444234177LLU;
	static uint8_t x2056 = 13U;
	volatile uint64_t t31 = 2036461059LLU;

	t31 = ((x2053^x2054)*(x2055>>x2056));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2113 = UINT64_MAX;
	int8_t x2114 = INT8_MIN;
	int64_t x2115 = 19079303LL;
	int16_t x2116 = 2;
	uint64_t t32 = 1101708457013849LLU;

	t32 = ((x2113^x2114)*(x2115>>x2116));

	if (t32 != 605767775LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x2149 = -5LL;
	static uint64_t x2150 = 21072163740493LLU;
	volatile uint64_t x2151 = 395LLU;
	int8_t x2152 = 1;
	uint64_t t33 = 4LLU;

	t33 = ((x2149^x2150)*(x2151>>x2152));

	if (t33 != 18442592857452675086LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2157 = 4LLU;
	int64_t x2158 = INT64_MIN;
	uint64_t t34 = 43500334475623LLU;

	t34 = ((x2157^x2158)*(x2159>>x2160));

	if (t34 != 9223372037123211260LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2185 = -65;
	volatile uint8_t x2186 = UINT8_MAX;
	static uint64_t x2187 = 509251LLU;
	uint64_t t35 = 930LLU;

	t35 = ((x2185^x2186)*(x2187>>x2188));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x2327 = INT32_MAX;
	uint8_t x2328 = 11U;
	int64_t t36 = 834087379948LL;

	t36 = ((x2325^x2326)*(x2327>>x2328));

	if (t36 != 6665788177509450LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2357 = 183233393U;
	int16_t x2358 = INT16_MIN;
	uint64_t x2359 = UINT64_MAX;
	uint8_t x2360 = 6U;

	t37 = ((x2357^x2358)*(x2359>>x2360));

	if (t37 != 14123288427322119311LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2381 = 4U;
	int16_t x2382 = -1;
	uint64_t x2383 = 1603657985531318LLU;
	int16_t x2384 = 23;
	uint64_t t38 = 973933043550LLU;

	t38 = ((x2381^x2382)*(x2383>>x2384));

	if (t38 != 18446744072753696971LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2393 = INT64_MIN;
	uint64_t x2394 = 3911099009336177LLU;
	uint64_t x2396 = 0LLU;

	t39 = ((x2393^x2394)*(x2395>>x2396));

	if (t39 != 9227283135864111985LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2461 = -330;
	int64_t x2462 = -2313LL;
	uint16_t x2464 = 1U;
	uint64_t t40 = 11618078LLU;

	t40 = ((x2461^x2462)*(x2463>>x2464));

	if (t40 != 18126657965198LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2689 = -1LL;
	int64_t x2690 = -1LL;
	uint16_t x2692 = 2U;
	int64_t t41 = -165LL;

	t41 = ((x2689^x2690)*(x2691>>x2692));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2889 = INT64_MAX;
	int64_t x2891 = INT64_MAX;
	uint16_t x2892 = 6U;

	t42 = ((x2889^x2890)*(x2891>>x2892));

	if (t42 != -144115188075855871LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2993 = UINT32_MAX;
	volatile int64_t x2995 = 75910148755LL;
	uint16_t x2996 = 0U;
	volatile int64_t t43 = 121295379691112749LL;

	t43 = ((x2993^x2994)*(x2995>>x2996));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3053 = 13130U;
	static int8_t x3054 = INT8_MIN;
	int16_t x3055 = INT16_MAX;
	static uint16_t x3056 = 14U;
	int32_t t44 = -2;

	t44 = ((x3053^x3054)*(x3055>>x3056));

	if (t44 != -13110) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3105 = UINT16_MAX;
	int8_t x3106 = INT8_MAX;
	int8_t x3107 = INT8_MAX;
	static uint8_t x3108 = 0U;
	static int32_t t45 = 1;

	t45 = ((x3105^x3106)*(x3107>>x3108));

	if (t45 != 8306816) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x3129 = -1;
	uint32_t x3130 = 44U;
	volatile int32_t x3131 = 984599;
	int16_t x3132 = 11;

	t46 = ((x3129^x3130)*(x3131>>x3132));

	if (t46 != 4294945696U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3181 = 59U;
	int8_t x3182 = -1;
	uint16_t x3183 = UINT16_MAX;
	uint32_t x3184 = 12U;
	int32_t t47 = 53581;

	t47 = ((x3181^x3182)*(x3183>>x3184));

	if (t47 != -900) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x3189 = INT8_MAX;
	uint16_t x3190 = 50U;
	static uint32_t x3191 = 909683U;
	static uint8_t x3192 = 3U;
	volatile uint32_t t48 = 31360U;

	t48 = ((x3189^x3190)*(x3191>>x3192));

	if (t48 != 8755670U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3245 = 0;
	static uint16_t x3246 = 255U;
	int8_t x3247 = INT8_MAX;
	volatile int8_t x3248 = 5;
	static volatile int32_t t49 = 0;

	t49 = ((x3245^x3246)*(x3247>>x3248));

	if (t49 != 765) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x3293 = 33U;
	volatile uint8_t x3295 = 8U;
	volatile int8_t x3296 = 8;

	t50 = ((x3293^x3294)*(x3295>>x3296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3325 = 8360165U;
	volatile uint32_t x3326 = 4378U;
	uint16_t x3327 = 23356U;
	uint8_t x3328 = 0U;

	t51 = ((x3325^x3326)*(x3327>>x3328));

	if (t51 != 1897405636U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3425 = INT8_MAX;
	volatile int16_t x3427 = INT16_MAX;
	uint8_t x3428 = 1U;
	volatile int32_t t52 = 74987;

	t52 = ((x3425^x3426)*(x3427>>x3428));

	if (t52 != 1703832) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3650 = INT32_MIN;
	uint8_t x3652 = 1U;
	static volatile int32_t t53 = -6289;

	t53 = ((x3649^x3650)*(x3651>>x3652));

	if (t53 != 2147450880) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x3729 = INT32_MIN;
	volatile uint64_t x3730 = 86778LLU;
	volatile int64_t x3731 = 45908648559546LL;
	volatile uint32_t x3732 = 2U;
	static uint64_t t54 = 4294152854LLU;

	t54 = ((x3729^x3730)*(x3731>>x3732));

	if (t54 != 17274770875971953772LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3753 = -253367LL;
	uint8_t x3755 = 8U;
	int16_t x3756 = 11;
	int64_t t55 = -4003640573462164LL;

	t55 = ((x3753^x3754)*(x3755>>x3756));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3857 = INT16_MIN;
	int64_t x3858 = -214577009LL;
	int16_t x3859 = INT16_MAX;
	volatile int64_t t56 = -4600LL;

	t56 = ((x3857^x3858)*(x3859>>x3860));

	if (t56 != 3515554033521LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3929 = 15303U;
	uint16_t x3930 = 416U;
	static int8_t x3931 = 1;

	t57 = ((x3929^x3930)*(x3931>>x3932));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3951 = INT16_MAX;
	uint16_t x3952 = 1U;
	int32_t t58 = 27424;

	t58 = ((x3949^x3950)*(x3951>>x3952));

	if (t58 != -16383) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x4077 = INT64_MIN;
	uint8_t x4078 = UINT8_MAX;
	static uint8_t x4079 = UINT8_MAX;
	uint8_t x4080 = 30U;
	volatile int64_t t59 = 926749499804LL;

	t59 = ((x4077^x4078)*(x4079>>x4080));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4137 = INT64_MAX;
	uint64_t x4138 = UINT64_MAX;
	int32_t x4139 = 33300544;
	uint8_t x4140 = 1U;
	static volatile uint64_t t60 = 6248052990577689287LLU;

	t60 = ((x4137^x4138)*(x4139>>x4140));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x4141 = -1;
	uint32_t t61 = 1U;

	t61 = ((x4141^x4142)*(x4143>>x4144));

	if (t61 != 2147483679U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x4161 = INT32_MAX;
	uint64_t x4162 = UINT64_MAX;
	int64_t x4163 = 2754561698877LL;
	uint32_t x4164 = 7U;
	volatile uint64_t t62 = 192100283242LLU;

	t62 = ((x4161^x4162)*(x4163>>x4164));

	if (t62 != 9126355614765678592LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x4197 = INT32_MIN;
	int8_t x4199 = 3;
	uint32_t t63 = 90218059U;

	t63 = ((x4197^x4198)*(x4199>>x4200));

	if (t63 != 2147483645U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4253 = -2461113310185903LL;
	int8_t x4254 = -23;
	int8_t x4255 = INT8_MAX;
	uint8_t x4256 = 6U;
	static volatile int64_t t64 = 65844652124711584LL;

	t64 = ((x4253^x4254)*(x4255>>x4256));

	if (t64 != 2461113310185912LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4333 = UINT32_MAX;
	int64_t x4334 = -1LL;
	uint32_t x4335 = 28U;
	static int64_t t65 = 4401LL;

	t65 = ((x4333^x4334)*(x4335>>x4336));

	if (t65 != -120259084288LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4413 = INT32_MIN;
	static uint16_t x4415 = 818U;
	static uint16_t x4416 = 2U;
	volatile int32_t t66 = -2812;

	t66 = ((x4413^x4414)*(x4415>>x4416));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4465 = 30595670114961682LLU;
	uint16_t x4466 = UINT16_MAX;
	int32_t x4467 = 47722;
	static uint16_t x4468 = 0U;
	uint64_t t67 = 30053221930LLU;

	t67 = ((x4465^x4466)*(x4467>>x4468));

	if (t67 != 2793787406052651042LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4489 = 1;
	int64_t x4490 = -8816952LL;
	uint64_t x4491 = 276392295264297059LLU;
	uint8_t x4492 = 9U;
	static volatile uint64_t t68 = 7443898049359LLU;

	t68 = ((x4489^x4490)*(x4491>>x4492));

	if (t68 != 18063503913355224464LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4581 = 14U;
	static uint64_t x4582 = UINT64_MAX;
	uint16_t x4584 = 0U;
	uint64_t t69 = 8992364285040LLU;

	t69 = ((x4581^x4582)*(x4583>>x4584));

	if (t69 != 15LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4693 = INT32_MIN;
	static uint32_t x4694 = UINT32_MAX;
	static uint8_t x4695 = 0U;
	volatile uint16_t x4696 = 3U;
	static uint32_t t70 = 446154U;

	t70 = ((x4693^x4694)*(x4695>>x4696));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4821 = -1;
	int32_t x4822 = -1;
	int32_t x4823 = INT32_MAX;
	volatile int32_t t71 = -2542249;

	t71 = ((x4821^x4822)*(x4823>>x4824));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4869 = -7109654LL;
	uint64_t x4870 = 336LLU;
	static volatile uint16_t x4871 = 9U;
	volatile uint16_t x4872 = 18U;

	t72 = ((x4869^x4870)*(x4871>>x4872));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4969 = 1;
	uint8_t x4970 = 30U;
	static uint8_t x4971 = UINT8_MAX;
	static int8_t x4972 = 1;
	int32_t t73 = -1;

	t73 = ((x4969^x4970)*(x4971>>x4972));

	if (t73 != 3937) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5057 = INT16_MIN;
	int64_t x5058 = INT64_MIN;
	static uint8_t x5059 = 3U;
	int16_t x5060 = 1;
	int64_t t74 = -17LL;

	t74 = ((x5057^x5058)*(x5059>>x5060));

	if (t74 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x5126 = INT16_MIN;
	static int8_t x5127 = INT8_MAX;
	uint16_t x5128 = 7U;
	int32_t t75 = -164632472;

	t75 = ((x5125^x5126)*(x5127>>x5128));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x5217 = INT16_MIN;
	int8_t x5218 = INT8_MAX;
	static int16_t x5219 = INT16_MAX;

	t76 = ((x5217^x5218)*(x5219>>x5220));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5225 = -1;
	static int32_t x5226 = -311;
	static int8_t x5227 = INT8_MAX;
	uint8_t x5228 = 9U;
	int32_t t77 = -29246;

	t77 = ((x5225^x5226)*(x5227>>x5228));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x5333 = -1;
	int32_t x5334 = -1;
	uint64_t x5335 = 3652060336054019371LLU;
	int16_t x5336 = 0;

	t78 = ((x5333^x5334)*(x5335>>x5336));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5477 = UINT32_MAX;
	int64_t x5478 = INT64_MIN;
	uint64_t x5479 = 14150896070666048LLU;
	volatile int8_t x5480 = 1;

	t79 = ((x5477^x5478)*(x5479>>x5480));

	if (t79 != 2210335627662732384LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5513 = UINT8_MAX;
	uint32_t x5514 = 554U;
	uint32_t x5515 = UINT32_MAX;

	t80 = ((x5513^x5514)*(x5515>>x5516));

	if (t80 != 2684353835U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5600 = 1LLU;
	volatile uint64_t t81 = 24376LLU;

	t81 = ((x5597^x5598)*(x5599>>x5600));

	if (t81 != 14028041773283519454LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5661 = -1;
	static uint32_t x5663 = UINT32_MAX;
	static int32_t x5664 = 28;
	uint32_t t82 = 401U;

	t82 = ((x5661^x5662)*(x5663>>x5664));

	if (t82 != 675U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5669 = INT16_MIN;
	volatile uint32_t x5671 = 1275U;
	static int64_t x5672 = 0LL;
	uint64_t t83 = 192LLU;

	t83 = ((x5669^x5670)*(x5671>>x5672));

	if (t83 != 15460958793672292834LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5809 = -1;
	volatile uint16_t x5810 = 2U;
	static int16_t x5811 = 4814;
	uint8_t x5812 = 0U;
	int32_t t84 = -61798;

	t84 = ((x5809^x5810)*(x5811>>x5812));

	if (t84 != -14442) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5813 = INT32_MIN;
	uint64_t x5814 = 4757206755LLU;
	int8_t x5815 = 0;
	static uint16_t x5816 = 0U;
	volatile uint64_t t85 = 14052104143LLU;

	t85 = ((x5813^x5814)*(x5815>>x5816));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x5905 = 50812052LLU;
	int32_t x5906 = INT32_MIN;
	uint64_t x5907 = UINT64_MAX;
	volatile uint64_t t86 = 296566449021LLU;

	t86 = ((x5905^x5906)*(x5907>>x5908));

	if (t86 != 17321102083897207660LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5953 = UINT8_MAX;
	volatile uint16_t x5955 = 3U;
	int8_t x5956 = 28;
	static volatile int32_t t87 = -199441;

	t87 = ((x5953^x5954)*(x5955>>x5956));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6037 = UINT16_MAX;
	uint64_t x6038 = UINT64_MAX;
	uint32_t x6039 = UINT32_MAX;
	uint16_t x6040 = 20U;

	t88 = ((x6037^x6038)*(x6039>>x6040));

	if (t88 != 18446744073441181696LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6156 = 0;
	uint64_t t89 = 897341792LLU;

	t89 = ((x6153^x6154)*(x6155>>x6156));

	if (t89 != 2146625603LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6249 = INT64_MIN;
	uint8_t x6251 = 96U;
	int64_t t90 = 8LL;

	t90 = ((x6249^x6250)*(x6251>>x6252));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6278 = -18321655420LL;
	uint64_t x6280 = 2LLU;

	t91 = ((x6277^x6278)*(x6279>>x6280));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6373 = -43659768;
	int16_t x6374 = INT16_MIN;
	int8_t x6375 = INT8_MAX;
	int32_t t92 = 108195071;

	t92 = ((x6373^x6374)*(x6375>>x6376));

	if (t92 != 305668664) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x6453 = INT8_MIN;
	int8_t x6454 = INT8_MIN;
	static int16_t x6455 = 4;
	int8_t x6456 = 0;
	int32_t t93 = -634995;

	t93 = ((x6453^x6454)*(x6455>>x6456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6489 = 506179436U;
	static int64_t x6491 = 1386031883LL;
	int8_t x6492 = 1;

	t94 = ((x6489^x6490)*(x6491>>x6492));

	if (t94 != 1137449982253427551LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6561 = INT8_MIN;
	int64_t x6563 = 133026LL;
	volatile int64_t t95 = -1080LL;

	t95 = ((x6561^x6562)*(x6563>>x6564));

	if (t95 != -8701097634LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6637 = -1;
	static volatile int64_t x6638 = 188234LL;
	uint32_t x6639 = UINT32_MAX;
	uint16_t x6640 = 7U;
	static int64_t t96 = -49478917655LL;

	t96 = ((x6637^x6638)*(x6639>>x6640));

	if (t96 != -6316118319285LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x6705 = INT32_MIN;
	int64_t x6706 = 9133346LL;
	static volatile int32_t x6707 = 1714310;
	uint8_t x6708 = 11U;
	volatile int64_t t97 = -185063LL;

	t97 = ((x6705^x6706)*(x6707>>x6708));

	if (t97 != -1789799202774LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6729 = -1;
	int64_t x6730 = INT64_MIN;
	uint16_t x6731 = 4U;
	uint8_t x6732 = 5U;
	volatile int64_t t98 = 311455978889616713LL;

	t98 = ((x6729^x6730)*(x6731>>x6732));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6745 = INT32_MIN;
	uint64_t x6746 = 12500LLU;
	static int32_t x6747 = 0;
	volatile int32_t x6748 = 0;
	volatile uint64_t t99 = 1105307674316445530LLU;

	t99 = ((x6745^x6746)*(x6747>>x6748));

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

