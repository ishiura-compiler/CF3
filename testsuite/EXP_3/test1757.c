#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -4;
uint16_t x58 = 1U;
volatile uint8_t x59 = UINT8_MAX;
uint32_t x60 = 5812U;
uint8_t x77 = 3U;
volatile int32_t x80 = INT32_MAX;
int64_t x283 = 8909197457LL;
volatile int32_t x343 = INT32_MAX;
uint16_t x385 = 7U;
uint8_t x387 = 64U;
static int16_t x405 = INT16_MAX;
int32_t x407 = -347683;
int16_t x546 = 0;
uint64_t t12 = 24720415803308271LLU;
static uint32_t t15 = 315020U;
int8_t x882 = 2;
int64_t x883 = INT64_MIN;
uint16_t x956 = UINT16_MAX;
volatile uint64_t t18 = 103664LLU;
int32_t t20 = 1;
volatile uint32_t t21 = 571U;
int32_t t22 = 3;
volatile uint64_t t23 = 187255LLU;
int16_t x1591 = INT16_MIN;
uint16_t x1592 = UINT16_MAX;
volatile int64_t x1659 = INT64_MIN;
int64_t x2467 = INT64_MAX;
volatile uint16_t x2468 = 495U;
volatile uint32_t x2509 = 1490U;
volatile int32_t x2511 = -1;
int64_t x2576 = INT64_MIN;
uint8_t x2646 = 1U;
int64_t x2793 = INT64_MAX;
uint64_t t40 = 67782581524221136LLU;
volatile int8_t x2887 = -1;
uint64_t t42 = 4855774670663289577LLU;
int32_t x2900 = INT32_MIN;
uint16_t x3036 = 3U;
int8_t x3085 = INT8_MAX;
volatile uint16_t x3086 = 5U;
static int8_t x3087 = INT8_MAX;
int8_t x3088 = INT8_MIN;
uint16_t x3110 = 1U;
int32_t x3233 = 67705969;
static volatile int8_t x3371 = INT8_MAX;
int64_t x3372 = -910970105588LL;
int32_t x3388 = INT32_MIN;
uint32_t x3525 = 1016U;
uint8_t x3591 = 34U;
int64_t t57 = 3667LL;
int16_t x3624 = -99;
static volatile int32_t t59 = -403420;
static int16_t x3768 = 468;
static volatile int64_t t63 = 291721975651LL;
volatile uint64_t x3981 = 1210174822345087573LLU;
uint16_t x4005 = UINT16_MAX;
int64_t t66 = 5889395LL;
int8_t x4018 = 1;
volatile uint64_t t67 = 10849124470900LLU;
int32_t x4082 = 0;
volatile int16_t x4083 = -27;
uint64_t x4084 = 67101806179061LLU;
static volatile int64_t x4087 = INT64_MIN;
static int64_t t69 = -15955460858491165LL;
volatile uint32_t t70 = 1U;
volatile int64_t t72 = -417LL;
static int64_t x4296 = INT64_MIN;
volatile int64_t x4297 = 3152513766LL;
uint16_t x4300 = UINT16_MAX;
uint32_t x4305 = UINT32_MAX;
volatile int64_t t76 = -2355LL;
int32_t x4411 = -1;
volatile uint64_t t78 = 71129082588LLU;
static int8_t x4565 = 0;
static int8_t x4566 = 1;
int8_t x4567 = 1;
static volatile int64_t t80 = 1789799LL;
uint16_t x4670 = 22U;
uint32_t x4671 = UINT32_MAX;
uint16_t x4937 = 42U;
uint8_t x4938 = 6U;
volatile uint32_t x4963 = 239501U;
uint32_t t84 = 24434U;
int32_t t85 = 4023910;
uint64_t t86 = 4268LLU;
uint64_t x5249 = 2LLU;
volatile uint32_t x5252 = UINT32_MAX;
uint8_t x5333 = UINT8_MAX;
int8_t x5335 = -1;
int8_t x5372 = -1;
uint8_t x5397 = 12U;
volatile int16_t x5399 = INT16_MIN;
static int64_t x5400 = INT64_MAX;
volatile uint64_t x5470 = 26LLU;
volatile int32_t x5471 = INT32_MIN;
uint16_t x5472 = 46U;
uint32_t t94 = 2369630U;
int8_t x5628 = -1;
volatile int32_t t96 = 2873;
volatile int32_t t98 = -732;


void f0(void) {
	int16_t x49 = INT16_MAX;
	uint8_t x50 = 0U;
	volatile int32_t x51 = -1;
	int16_t x52 = -1;

	t0 = ((x49<<x50)-(x51&x52));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x57 = 2U;
	uint32_t t1 = 114614108U;

	t1 = ((x57<<x58)-(x59&x60));

	if (t1 != 4294967120U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x73 = 251204U;
	uint8_t x74 = 2U;
	int32_t x75 = INT32_MAX;
	volatile int8_t x76 = INT8_MAX;
	volatile uint32_t t2 = 388U;

	t2 = ((x73<<x74)-(x75&x76));

	if (t2 != 1004689U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x78 = 1LL;
	uint8_t x79 = 0U;
	int32_t t3 = 3;

	t3 = ((x77<<x78)-(x79&x80));

	if (t3 != 6) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x121 = 52315450580439924LL;
	int8_t x122 = 1;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MAX;
	uint64_t t4 = 1627LLU;

	t4 = ((x121<<x122)-(x123&x124));

	if (t4 != 104630901160879721LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x165 = 237654LLU;
	static uint8_t x166 = 37U;
	int16_t x167 = -1;
	int16_t x168 = 1;
	uint64_t t5 = 222747950319LLU;

	t5 = ((x165<<x166)-(x167&x168));

	if (t5 != 32662917048434687LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x281 = 0U;
	uint8_t x282 = 3U;
	int64_t x284 = -2949729599440LL;
	int64_t t6 = -951278497161061LL;

	t6 = ((x281<<x282)-(x283&x284));

	if (t6 != -302120976LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x301 = 2U;
	static uint8_t x302 = 21U;
	int8_t x303 = 2;
	volatile uint64_t x304 = 62081099004151815LLU;
	static volatile uint64_t t7 = 681LLU;

	t7 = ((x301<<x302)-(x303&x304));

	if (t7 != 4194302LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = 3;
	uint8_t x344 = 15U;
	volatile uint64_t t8 = 338408645874721LLU;

	t8 = ((x341<<x342)-(x343&x344));

	if (t8 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x386 = 1U;
	uint64_t x388 = 65359652320LLU;
	uint64_t t9 = 726047922LLU;

	t9 = ((x385<<x386)-(x387&x388));

	if (t9 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x406 = 1;
	volatile uint8_t x408 = 45U;
	int32_t t10 = -3938;

	t10 = ((x405<<x406)-(x407&x408));

	if (t10 != 65521) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x521 = UINT16_MAX;
	int32_t x522 = 0;
	uint64_t x523 = 195273032LLU;
	int64_t x524 = INT64_MIN;
	volatile uint64_t t11 = 2050768683118955402LLU;

	t11 = ((x521<<x522)-(x523&x524));

	if (t11 != 65535LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x545 = 0;
	uint64_t x547 = UINT64_MAX;
	int16_t x548 = 2271;

	t12 = ((x545<<x546)-(x547&x548));

	if (t12 != 18446744073709549345LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x657 = 325645;
	volatile int32_t x658 = 7;
	volatile uint64_t x659 = 5964945955954222200LLU;
	volatile int16_t x660 = INT16_MIN;
	volatile uint64_t t13 = 102189059758LLU;

	t13 = ((x657<<x658)-(x659&x660));

	if (t13 != 12481798117797037696LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x689 = 38188U;
	volatile uint16_t x690 = 8U;
	volatile uint16_t x691 = 1U;
	volatile uint8_t x692 = 3U;
	static volatile uint32_t t14 = 7827481U;

	t14 = ((x689<<x690)-(x691&x692));

	if (t14 != 9776127U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x781 = UINT8_MAX;
	volatile int16_t x782 = 1;
	uint8_t x783 = 44U;
	uint32_t x784 = 1803U;

	t15 = ((x781<<x782)-(x783&x784));

	if (t15 != 502U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x881 = 24;
	volatile int8_t x884 = INT8_MAX;
	int64_t t16 = 70LL;

	t16 = ((x881<<x882)-(x883&x884));

	if (t16 != 96LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x953 = UINT16_MAX;
	volatile uint8_t x954 = 11U;
	uint8_t x955 = 4U;
	int32_t t17 = 1;

	t17 = ((x953<<x954)-(x955&x956));

	if (t17 != 134215676) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1045 = UINT64_MAX;
	uint8_t x1046 = 1U;
	int32_t x1047 = -1;
	uint16_t x1048 = 16U;

	t18 = ((x1045<<x1046)-(x1047&x1048));

	if (t18 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1105 = 20U;
	uint8_t x1106 = 0U;
	int16_t x1107 = -1;
	uint64_t x1108 = 48LLU;
	volatile uint64_t t19 = 777967019838489054LLU;

	t19 = ((x1105<<x1106)-(x1107&x1108));

	if (t19 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1129 = 0U;
	volatile uint8_t x1130 = 30U;
	volatile int16_t x1131 = 502;
	uint16_t x1132 = 9347U;

	t20 = ((x1129<<x1130)-(x1131&x1132));

	if (t20 != -130) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1253 = UINT32_MAX;
	int8_t x1254 = 15;
	uint32_t x1255 = 1264U;
	volatile uint32_t x1256 = UINT32_MAX;

	t21 = ((x1253<<x1254)-(x1255&x1256));

	if (t21 != 4294933264U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1281 = UINT8_MAX;
	uint16_t x1282 = 21U;
	int32_t x1283 = INT32_MAX;
	int16_t x1284 = -1;

	t22 = ((x1281<<x1282)-(x1283&x1284));

	if (t22 != -1612709887) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1353 = UINT8_MAX;
	volatile int8_t x1354 = 3;
	int32_t x1355 = INT32_MAX;
	uint64_t x1356 = 4067548579952LLU;

	t23 = ((x1353<<x1354)-(x1355&x1356));

	if (t23 != 18446744073495003016LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1589 = 17U;
	uint8_t x1590 = 1U;
	volatile int32_t t24 = 678;

	t24 = ((x1589<<x1590)-(x1591&x1592));

	if (t24 != -32734) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x1601 = 0;
	uint8_t x1602 = 5U;
	static int16_t x1603 = -1;
	volatile int8_t x1604 = -1;
	static volatile int32_t t25 = 10;

	t25 = ((x1601<<x1602)-(x1603&x1604));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1657 = INT16_MAX;
	volatile int8_t x1658 = 1;
	int16_t x1660 = 2891;
	volatile int64_t t26 = -12097145585LL;

	t26 = ((x1657<<x1658)-(x1659&x1660));

	if (t26 != 65534LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2021 = UINT32_MAX;
	int8_t x2022 = 0;
	int64_t x2023 = INT64_MIN;
	uint32_t x2024 = 27119U;
	static volatile int64_t t27 = 26013LL;

	t27 = ((x2021<<x2022)-(x2023&x2024));

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2077 = 1201047241909413LL;
	volatile uint8_t x2078 = 0U;
	uint16_t x2079 = UINT16_MAX;
	static uint8_t x2080 = UINT8_MAX;
	volatile int64_t t28 = -92513075061LL;

	t28 = ((x2077<<x2078)-(x2079&x2080));

	if (t28 != 1201047241909158LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x2093 = 2413021002562665862LL;
	static uint8_t x2094 = 0U;
	int8_t x2095 = -1;
	static int32_t x2096 = -3305;
	int64_t t29 = -151415315LL;

	t29 = ((x2093<<x2094)-(x2095&x2096));

	if (t29 != 2413021002562669167LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2165 = 228U;
	uint32_t x2166 = 15U;
	static int16_t x2167 = INT16_MIN;
	int8_t x2168 = INT8_MIN;
	uint32_t t30 = 33681U;

	t30 = ((x2165<<x2166)-(x2167&x2168));

	if (t30 != 7503872U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2281 = INT16_MAX;
	uint8_t x2282 = 7U;
	int64_t x2283 = -1LL;
	int32_t x2284 = INT32_MAX;
	volatile int64_t t31 = -417281042836LL;

	t31 = ((x2281<<x2282)-(x2283&x2284));

	if (t31 != -2143289471LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2361 = UINT64_MAX;
	static volatile uint16_t x2362 = 1U;
	uint32_t x2363 = 288843606U;
	volatile int64_t x2364 = -1LL;
	static uint64_t t32 = 128095LLU;

	t32 = ((x2361<<x2362)-(x2363&x2364));

	if (t32 != 18446744073420708008LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2465 = INT32_MAX;
	static volatile int16_t x2466 = 0;
	volatile int64_t t33 = 1767090662827571269LL;

	t33 = ((x2465<<x2466)-(x2467&x2468));

	if (t33 != 2147483152LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2489 = 3;
	static int16_t x2490 = 1;
	static int64_t x2491 = INT64_MIN;
	uint64_t x2492 = UINT64_MAX;
	uint64_t t34 = 223LLU;

	t34 = ((x2489<<x2490)-(x2491&x2492));

	if (t34 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2510 = 0U;
	int16_t x2512 = -4354;
	volatile uint32_t t35 = 959146487U;

	t35 = ((x2509<<x2510)-(x2511&x2512));

	if (t35 != 5844U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2533 = UINT16_MAX;
	volatile uint8_t x2534 = 1U;
	volatile uint64_t x2535 = 53LLU;
	static int32_t x2536 = -1;
	volatile uint64_t t36 = 4451LLU;

	t36 = ((x2533<<x2534)-(x2535&x2536));

	if (t36 != 131017LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2573 = 714094784LLU;
	uint16_t x2574 = 13U;
	int32_t x2575 = -1;
	volatile uint64_t t37 = 0LLU;

	t37 = ((x2573<<x2574)-(x2575&x2576));

	if (t37 != 9223377886719246336LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2645 = 1863370284LL;
	int8_t x2647 = INT8_MIN;
	int32_t x2648 = INT32_MAX;
	volatile int64_t t38 = 5303236588635293LL;

	t38 = ((x2645<<x2646)-(x2647&x2648));

	if (t38 != 1579257048LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2705 = 223U;
	uint16_t x2706 = 5U;
	int32_t x2707 = INT32_MIN;
	uint64_t x2708 = UINT64_MAX;
	uint64_t t39 = 4657961008LLU;

	t39 = ((x2705<<x2706)-(x2707&x2708));

	if (t39 != 2147490784LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2794 = 0;
	int64_t x2795 = 2337184692467LL;
	static uint64_t x2796 = UINT64_MAX;

	t40 = ((x2793<<x2794)-(x2795&x2796));

	if (t40 != 9223369699670083340LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x2865 = 0;
	volatile uint8_t x2866 = 20U;
	volatile int32_t x2867 = -475;
	int32_t x2868 = INT32_MAX;
	int32_t t41 = -30379;

	t41 = ((x2865<<x2866)-(x2867&x2868));

	if (t41 != -2147483173) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2885 = 2LLU;
	static int16_t x2886 = 27;
	static int16_t x2888 = INT16_MAX;

	t42 = ((x2885<<x2886)-(x2887&x2888));

	if (t42 != 268402689LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x2889 = 96131129722777277LLU;
	uint8_t x2890 = 59U;
	int64_t x2891 = 999539LL;
	uint16_t x2892 = UINT16_MAX;
	static uint64_t t43 = 4466421003LLU;

	t43 = ((x2889<<x2890)-(x2891&x2892));

	if (t43 != 16717361816799264653LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2897 = INT8_MAX;
	static int16_t x2898 = 6;
	uint32_t x2899 = 205911660U;
	uint32_t t44 = 6U;

	t44 = ((x2897<<x2898)-(x2899&x2900));

	if (t44 != 8128U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2961 = 27145548422LLU;
	int8_t x2962 = 52;
	volatile uint64_t x2963 = UINT64_MAX;
	uint8_t x2964 = 0U;
	volatile uint64_t t45 = 673490540479579LLU;

	t45 = ((x2961<<x2962)-(x2963&x2964));

	if (t45 != 2909325359281340416LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3033 = 1279653013348LL;
	uint32_t x3034 = 9U;
	int32_t x3035 = INT32_MIN;
	volatile int64_t t46 = -64LL;

	t46 = ((x3033<<x3034)-(x3035&x3036));

	if (t46 != 655182342834176LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t t47 = 1;

	t47 = ((x3085<<x3086)-(x3087&x3088));

	if (t47 != 4064) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x3097 = 7U;
	static uint8_t x3098 = 0U;
	int64_t x3099 = 59616LL;
	int64_t x3100 = -2357128793LL;
	volatile int64_t t48 = -1070896677425750LL;

	t48 = ((x3097<<x3098)-(x3099&x3100));

	if (t48 != -153LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3109 = 29611U;
	volatile uint64_t x3111 = 99677327849612945LLU;
	volatile int8_t x3112 = -1;
	static uint64_t t49 = 60807LLU;

	t49 = ((x3109<<x3110)-(x3111&x3112));

	if (t49 != 18347066745859997893LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3234 = 1;
	volatile int32_t x3235 = 5729027;
	int32_t x3236 = INT32_MIN;
	int32_t t50 = -674060;

	t50 = ((x3233<<x3234)-(x3235&x3236));

	if (t50 != 135411938) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3289 = UINT8_MAX;
	uint16_t x3290 = 1U;
	int16_t x3291 = INT16_MIN;
	volatile uint32_t x3292 = UINT32_MAX;
	volatile uint32_t t51 = 2U;

	t51 = ((x3289<<x3290)-(x3291&x3292));

	if (t51 != 33278U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3333 = INT8_MAX;
	int8_t x3334 = 6;
	uint32_t x3335 = UINT32_MAX;
	int64_t x3336 = INT64_MIN;
	int64_t t52 = -20790692381LL;

	t52 = ((x3333<<x3334)-(x3335&x3336));

	if (t52 != 8128LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x3369 = 475060756361787425LLU;
	volatile uint8_t x3370 = 14U;
	static volatile uint64_t t53 = 33528327LLU;

	t53 = ((x3369<<x3370)-(x3371&x3372));

	if (t53 != 17316177199803940852LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3385 = INT64_MAX;
	static int8_t x3386 = 0;
	int32_t x3387 = 879787865;
	int64_t t54 = INT64_MAX;

	t54 = ((x3385<<x3386)-(x3387&x3388));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3526 = 1;
	static int64_t x3527 = INT64_MIN;
	static uint16_t x3528 = 1679U;
	volatile int64_t t55 = 408LL;

	t55 = ((x3525<<x3526)-(x3527&x3528));

	if (t55 != 2032LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3589 = 470;
	static uint8_t x3590 = 1U;
	int8_t x3592 = INT8_MIN;
	int32_t t56 = 234688;

	t56 = ((x3589<<x3590)-(x3591&x3592));

	if (t56 != 940) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3613 = UINT32_MAX;
	volatile uint8_t x3614 = 0U;
	int32_t x3615 = -1;
	int64_t x3616 = 202364427689134203LL;

	t57 = ((x3613<<x3614)-(x3615&x3616));

	if (t57 != -202364423394166908LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3621 = 2233U;
	int32_t x3622 = 0;
	static int16_t x3623 = -1;
	int32_t t58 = 251;

	t58 = ((x3621<<x3622)-(x3623&x3624));

	if (t58 != 2332) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3669 = INT8_MAX;
	int8_t x3670 = 6;
	int8_t x3671 = INT8_MIN;
	uint8_t x3672 = 8U;

	t59 = ((x3669<<x3670)-(x3671&x3672));

	if (t59 != 8128) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3685 = 24U;
	int32_t x3686 = 6;
	volatile int16_t x3687 = INT16_MAX;
	int32_t x3688 = -1;
	volatile int32_t t60 = 64980;

	t60 = ((x3685<<x3686)-(x3687&x3688));

	if (t60 != -31231) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3765 = UINT64_MAX;
	uint16_t x3766 = 13U;
	static volatile int8_t x3767 = -11;
	volatile uint64_t t61 = 2884LLU;

	t61 = ((x3765<<x3766)-(x3767&x3768));

	if (t61 != 18446744073709542956LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3773 = 13225U;
	uint8_t x3774 = 3U;
	int16_t x3775 = -3216;
	volatile int8_t x3776 = INT8_MAX;
	volatile int32_t t62 = -2;

	t62 = ((x3773<<x3774)-(x3775&x3776));

	if (t62 != 105688) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3801 = 126;
	uint8_t x3802 = 0U;
	static int32_t x3803 = -1;
	int64_t x3804 = INT64_MAX;

	t63 = ((x3801<<x3802)-(x3803&x3804));

	if (t63 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3969 = UINT64_MAX;
	uint8_t x3970 = 4U;
	int32_t x3971 = INT32_MIN;
	uint64_t x3972 = 14790LLU;
	volatile uint64_t t64 = 12350LLU;

	t64 = ((x3969<<x3970)-(x3971&x3972));

	if (t64 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3982 = 1;
	int32_t x3983 = INT32_MAX;
	int64_t x3984 = INT64_MIN;
	uint64_t t65 = 13LLU;

	t65 = ((x3981<<x3982)-(x3983&x3984));

	if (t65 != 2420349644690175146LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4006 = 1U;
	static int32_t x4007 = -38;
	volatile int64_t x4008 = INT64_MAX;

	t66 = ((x4005<<x4006)-(x4007&x4008));

	if (t66 != -9223372036854644700LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4017 = 21U;
	uint64_t x4019 = 883LLU;
	int32_t x4020 = INT32_MIN;

	t67 = ((x4017<<x4018)-(x4019&x4020));

	if (t67 != 42LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4081 = 1U;
	volatile uint64_t t68 = 1713632349LLU;

	t68 = ((x4081<<x4082)-(x4083&x4084));

	if (t68 != 18446676971903372572LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4085 = 9U;
	uint8_t x4086 = 6U;
	int8_t x4088 = INT8_MAX;

	t69 = ((x4085<<x4086)-(x4087&x4088));

	if (t69 != 576LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4101 = 37552U;
	static int16_t x4102 = 17;
	int8_t x4103 = INT8_MIN;
	static int8_t x4104 = INT8_MAX;

	t70 = ((x4101<<x4102)-(x4103&x4104));

	if (t70 != 627048448U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4117 = INT16_MAX;
	volatile uint32_t x4118 = 0U;
	uint8_t x4119 = UINT8_MAX;
	int64_t x4120 = -1LL;
	int64_t t71 = 4248541LL;

	t71 = ((x4117<<x4118)-(x4119&x4120));

	if (t71 != 32512LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4221 = 11U;
	uint16_t x4222 = 18U;
	int64_t x4223 = INT64_MAX;
	uint8_t x4224 = UINT8_MAX;

	t72 = ((x4221<<x4222)-(x4223&x4224));

	if (t72 != 2883329LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4289 = UINT16_MAX;
	volatile int32_t x4290 = 1;
	uint32_t x4291 = 391877770U;
	static int32_t x4292 = 1906992;
	volatile uint32_t t73 = 238512U;

	t73 = ((x4289<<x4290)-(x4291&x4292));

	if (t73 != 4293455870U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4293 = 527038LLU;
	int32_t x4294 = 2;
	volatile uint64_t x4295 = 252685211384LLU;
	uint64_t t74 = 548643710922167LLU;

	t74 = ((x4293<<x4294)-(x4295&x4296));

	if (t74 != 2108152LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4298 = 1;
	int32_t x4299 = 558669;
	volatile int64_t t75 = -97987050798270821LL;

	t75 = ((x4297<<x4298)-(x4299&x4300));

	if (t75 != 6304993151LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x4306 = 2U;
	int64_t x4307 = -1LL;
	uint32_t x4308 = 80632U;

	t76 = ((x4305<<x4306)-(x4307&x4308));

	if (t76 != 4294886660LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x4409 = 0U;
	volatile uint16_t x4410 = 7U;
	int32_t x4412 = 1;
	static volatile int32_t t77 = 156662;

	t77 = ((x4409<<x4410)-(x4411&x4412));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4509 = 2U;
	int8_t x4510 = 1;
	uint64_t x4511 = UINT64_MAX;
	static volatile uint32_t x4512 = 113U;

	t78 = ((x4509<<x4510)-(x4511&x4512));

	if (t78 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4568 = 1623281LLU;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = ((x4565<<x4566)-(x4567&x4568));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4629 = UINT32_MAX;
	uint8_t x4630 = 22U;
	uint8_t x4631 = 41U;
	volatile int64_t x4632 = -1LL;

	t80 = ((x4629<<x4630)-(x4631&x4632));

	if (t80 != 4290772951LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4653 = INT16_MAX;
	int8_t x4654 = 3;
	static int32_t x4655 = INT32_MAX;
	int32_t x4656 = INT32_MIN;
	volatile int32_t t81 = -247005;

	t81 = ((x4653<<x4654)-(x4655&x4656));

	if (t81 != 262136) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x4669 = UINT8_MAX;
	int64_t x4672 = INT64_MAX;
	int64_t t82 = 7LL;

	t82 = ((x4669<<x4670)-(x4671&x4672));

	if (t82 != -3225419775LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4939 = -21;
	int16_t x4940 = INT16_MIN;
	volatile int32_t t83 = -109;

	t83 = ((x4937<<x4938)-(x4939&x4940));

	if (t83 != 35456) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4961 = UINT8_MAX;
	uint32_t x4962 = 13U;
	static int8_t x4964 = INT8_MIN;

	t84 = ((x4961<<x4962)-(x4963&x4964));

	if (t84 != 1849472U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x5045 = UINT16_MAX;
	volatile uint32_t x5046 = 12U;
	int32_t x5047 = -1;
	int16_t x5048 = INT16_MIN;

	t85 = ((x5045<<x5046)-(x5047&x5048));

	if (t85 != 268464128) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x5061 = 3137908566089389LLU;
	volatile uint8_t x5062 = 7U;
	int16_t x5063 = INT16_MIN;
	int32_t x5064 = 0;

	t86 = ((x5061<<x5062)-(x5063&x5064));

	if (t86 != 401652296459441792LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5233 = 13044U;
	volatile int64_t x5234 = 0LL;
	uint64_t x5235 = 734172401LLU;
	uint64_t x5236 = 40517260LLU;
	static volatile uint64_t t87 = 4228812447917556LLU;

	t87 = ((x5233<<x5234)-(x5235&x5236));

	if (t87 != 18446744073671679604LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5250 = 4;
	volatile uint32_t x5251 = 985730U;
	static volatile uint64_t t88 = 21LLU;

	t88 = ((x5249<<x5250)-(x5251&x5252));

	if (t88 != 18446744073708565918LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5281 = 915041732;
	volatile int8_t x5282 = 0;
	int64_t x5283 = INT64_MAX;
	uint32_t x5284 = UINT32_MAX;
	volatile int64_t t89 = 4049LL;

	t89 = ((x5281<<x5282)-(x5283&x5284));

	if (t89 != -3379925563LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5334 = 1LLU;
	int8_t x5336 = INT8_MIN;
	int32_t t90 = -582;

	t90 = ((x5333<<x5334)-(x5335&x5336));

	if (t90 != 638) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5369 = 1;
	static volatile uint8_t x5370 = 17U;
	uint16_t x5371 = 22982U;
	volatile int32_t t91 = -2056739;

	t91 = ((x5369<<x5370)-(x5371&x5372));

	if (t91 != 108090) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x5398 = 2U;
	int64_t t92 = -753722066LL;

	t92 = ((x5397<<x5398)-(x5399&x5400));

	if (t92 != -9223372036854742992LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5469 = 3U;
	volatile uint32_t t93 = 90U;

	t93 = ((x5469<<x5470)-(x5471&x5472));

	if (t93 != 201326592U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5513 = UINT8_MAX;
	int8_t x5514 = 1;
	volatile int16_t x5515 = 6;
	uint32_t x5516 = 116U;

	t94 = ((x5513<<x5514)-(x5515&x5516));

	if (t94 != 506U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5517 = 26276LLU;
	uint8_t x5518 = 1U;
	int32_t x5519 = INT32_MAX;
	volatile int16_t x5520 = INT16_MIN;
	uint64_t t95 = 42391LLU;

	t95 = ((x5517<<x5518)-(x5519&x5520));

	if (t95 != 18446744071562153288LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x5625 = 3U;
	volatile int8_t x5626 = 0;
	volatile int8_t x5627 = INT8_MAX;

	t96 = ((x5625<<x5626)-(x5627&x5628));

	if (t96 != -124) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5649 = 2239329642571916LLU;
	volatile uint8_t x5650 = 3U;
	int64_t x5651 = -15827LL;
	volatile int8_t x5652 = 0;
	uint64_t t97 = 305350171462LLU;

	t97 = ((x5649<<x5650)-(x5651&x5652));

	if (t97 != 17914637140575328LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x5653 = 1;
	int8_t x5654 = 5;
	static int16_t x5655 = 137;
	int8_t x5656 = INT8_MAX;

	t98 = ((x5653<<x5654)-(x5655&x5656));

	if (t98 != 23) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5729 = 0;
	uint8_t x5730 = 7U;
	int32_t x5731 = -1;
	static int8_t x5732 = INT8_MIN;
	volatile int32_t t99 = 21395312;

	t99 = ((x5729<<x5730)-(x5731&x5732));

	if (t99 != 128) { NG(); } else { ; }
	
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

