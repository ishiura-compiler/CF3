#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x37 = -437888368;
static int64_t x194 = -124534380973314LL;
int16_t x199 = -1;
uint32_t x271 = UINT32_MAX;
int16_t x272 = -1;
volatile uint64_t x555 = UINT64_MAX;
int16_t x708 = 1;
int16_t x799 = INT16_MAX;
volatile int32_t t9 = 1313;
int32_t x1063 = -1;
volatile uint64_t t10 = 497LLU;
int8_t x1070 = -1;
int32_t x1251 = -1;
volatile int32_t t13 = 181723;
volatile int16_t x1271 = -1;
volatile uint32_t x1389 = 6447074U;
int8_t x1390 = INT8_MIN;
static uint16_t x1394 = 212U;
uint32_t x1457 = 16052409U;
uint16_t x1762 = UINT16_MAX;
int32_t x1764 = -1;
static int8_t x1925 = INT8_MIN;
int16_t x1927 = INT16_MAX;
volatile uint32_t t20 = 1829U;
uint64_t x1936 = UINT64_MAX;
uint16_t x1957 = UINT16_MAX;
uint32_t t23 = 59950U;
int64_t x2056 = INT64_MIN;
int32_t t25 = -440;
uint32_t x2237 = 55U;
volatile uint8_t x2238 = 14U;
volatile uint32_t t26 = 5300162U;
static volatile int64_t x2269 = INT64_MAX;
int16_t x2270 = -1;
int8_t x2302 = INT8_MIN;
volatile uint64_t t30 = 8132523365589075LLU;
int64_t x2343 = -1LL;
static int32_t x2344 = -1;
int64_t x2635 = -1LL;
uint64_t x2636 = UINT64_MAX;
int32_t x2865 = INT32_MIN;
volatile int32_t x2922 = INT32_MIN;
int32_t t34 = -1443;
int16_t x2925 = INT16_MAX;
volatile int16_t x2926 = -1;
volatile int8_t x2928 = -1;
int64_t x3042 = -1LL;
int8_t x3319 = INT8_MIN;
int32_t t39 = -26543;
uint32_t x3374 = 530U;
int8_t x3375 = 0;
int8_t x3376 = 0;
static int8_t x3385 = INT8_MIN;
int64_t x3386 = -15028754640357LL;
int64_t t41 = 1080607904285LL;
volatile uint32_t t42 = 157223U;
int32_t x3677 = 1;
int16_t x3680 = INT16_MIN;
uint64_t x3920 = UINT64_MAX;
int32_t t45 = -1;
int16_t x4095 = INT16_MAX;
static int32_t x4170 = INT32_MAX;
int8_t x4233 = INT8_MIN;
volatile int16_t x4234 = -1;
uint64_t t51 = 3LLU;
volatile int64_t x4267 = -1LL;
uint64_t t54 = 1LLU;
uint16_t x4523 = UINT16_MAX;
uint16_t x4524 = UINT16_MAX;
int16_t x4577 = -3854;
static int16_t x4580 = INT16_MIN;
int32_t t56 = -101089012;
int64_t t57 = -120621260950171LL;
static uint32_t x4790 = 2287969U;
static uint8_t x4882 = 92U;
int32_t x4921 = INT32_MAX;
int32_t t60 = 311098;
uint64_t x5089 = 1LLU;
volatile uint64_t x5250 = 16LLU;


void f0(void) {
	int32_t x38 = INT32_MAX;
	volatile int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	int32_t t0 = -398874775;

	t0 = ((x37%x38)/(x39==x40));

	if (t0 != -437888368) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x193 = INT8_MAX;
	static int32_t x195 = INT32_MIN;
	static volatile int32_t x196 = INT32_MIN;
	int64_t t1 = 322642LL;

	t1 = ((x193%x194)/(x195==x196));

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x197 = 47881778U;
	int16_t x198 = 1135;
	static int16_t x200 = -1;
	volatile uint32_t t2 = 12195008U;

	t2 = ((x197%x198)/(x199==x200));

	if (t2 != 668U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = -3998727724739480368LL;
	volatile int64_t t3 = 430LL;

	t3 = ((x269%x270)/(x271==x272));

	if (t3 != -32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x505 = 22201359775737497LLU;
	int8_t x506 = -1;
	uint64_t x507 = UINT64_MAX;
	int8_t x508 = -1;
	uint64_t t4 = 2LLU;

	t4 = ((x505%x506)/(x507==x508));

	if (t4 != 22201359775737497LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x509 = INT16_MIN;
	volatile int16_t x510 = INT16_MIN;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = -1;
	int32_t t5 = 0;

	t5 = ((x509%x510)/(x511==x512));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x553 = INT8_MIN;
	static uint16_t x554 = 1U;
	int8_t x556 = -1;
	volatile int32_t t6 = 78448;

	t6 = ((x553%x554)/(x555==x556));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x705 = -4413806776LL;
	volatile int8_t x706 = -1;
	int8_t x707 = 1;
	volatile int64_t t7 = -7568002792LL;

	t7 = ((x705%x706)/(x707==x708));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x793 = INT64_MIN;
	uint8_t x794 = UINT8_MAX;
	int8_t x795 = -1;
	int64_t x796 = -1LL;
	int64_t t8 = -3LL;

	t8 = ((x793%x794)/(x795==x796));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x797 = 854U;
	int16_t x798 = 343;
	static int16_t x800 = INT16_MAX;

	t9 = ((x797%x798)/(x799==x800));

	if (t9 != 168) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1061 = 10033U;
	uint64_t x1062 = 93673739664480182LLU;
	uint32_t x1064 = UINT32_MAX;

	t10 = ((x1061%x1062)/(x1063==x1064));

	if (t10 != 10033LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1069 = INT64_MIN;
	uint32_t x1071 = UINT32_MAX;
	int16_t x1072 = -1;
	static volatile int64_t t11 = 36206943634184051LL;

	t11 = ((x1069%x1070)/(x1071==x1072));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1217 = INT64_MIN;
	volatile uint16_t x1218 = 14201U;
	volatile uint32_t x1219 = UINT32_MAX;
	int16_t x1220 = -1;
	volatile int64_t t12 = -2815352336081LL;

	t12 = ((x1217%x1218)/(x1219==x1220));

	if (t12 != -9765LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1249 = INT16_MIN;
	int32_t x1250 = INT32_MIN;
	int64_t x1252 = -1LL;

	t13 = ((x1249%x1250)/(x1251==x1252));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1269 = 27201864U;
	int8_t x1270 = INT8_MIN;
	static int16_t x1272 = -1;
	volatile uint32_t t14 = 2U;

	t14 = ((x1269%x1270)/(x1271==x1272));

	if (t14 != 27201864U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1305 = -1;
	int64_t x1306 = -4466703683428LL;
	int8_t x1307 = -1;
	static int64_t x1308 = -1LL;
	int64_t t15 = 31818LL;

	t15 = ((x1305%x1306)/(x1307==x1308));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1391 = -1LL;
	static int32_t x1392 = -1;
	static volatile uint32_t t16 = 2225U;

	t16 = ((x1389%x1390)/(x1391==x1392));

	if (t16 != 6447074U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1393 = UINT32_MAX;
	uint16_t x1395 = UINT16_MAX;
	uint16_t x1396 = UINT16_MAX;
	static uint32_t t17 = 33U;

	t17 = ((x1393%x1394)/(x1395==x1396));

	if (t17 != 147U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1458 = INT32_MIN;
	int64_t x1459 = -1LL;
	uint64_t x1460 = UINT64_MAX;
	volatile uint32_t t18 = 3U;

	t18 = ((x1457%x1458)/(x1459==x1460));

	if (t18 != 16052409U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1761 = INT64_MAX;
	uint64_t x1763 = UINT64_MAX;
	volatile int64_t t19 = -406163LL;

	t19 = ((x1761%x1762)/(x1763==x1764));

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1926 = UINT32_MAX;
	volatile int16_t x1928 = INT16_MAX;

	t20 = ((x1925%x1926)/(x1927==x1928));

	if (t20 != 4294967168U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1933 = UINT32_MAX;
	static uint64_t x1934 = UINT64_MAX;
	int8_t x1935 = -1;
	uint64_t t21 = 1LLU;

	t21 = ((x1933%x1934)/(x1935==x1936));

	if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1958 = INT32_MIN;
	int8_t x1959 = -1;
	static int16_t x1960 = -1;
	int32_t t22 = -413;

	t22 = ((x1957%x1958)/(x1959==x1960));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x2001 = 166U;
	volatile int16_t x2002 = 5380;
	volatile int8_t x2003 = -1;
	int8_t x2004 = -1;

	t23 = ((x2001%x2002)/(x2003==x2004));

	if (t23 != 166U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2053 = INT64_MIN;
	static volatile int8_t x2054 = INT8_MIN;
	int64_t x2055 = INT64_MIN;
	int64_t t24 = 180802LL;

	t24 = ((x2053%x2054)/(x2055==x2056));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2165 = UINT16_MAX;
	int32_t x2166 = INT32_MIN;
	int8_t x2167 = INT8_MIN;
	static int8_t x2168 = INT8_MIN;

	t25 = ((x2165%x2166)/(x2167==x2168));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2239 = UINT32_MAX;
	int32_t x2240 = -1;

	t26 = ((x2237%x2238)/(x2239==x2240));

	if (t26 != 13U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x2257 = 526749673LL;
	static uint8_t x2258 = 1U;
	int8_t x2259 = -1;
	uint32_t x2260 = UINT32_MAX;
	static volatile int64_t t27 = -1LL;

	t27 = ((x2257%x2258)/(x2259==x2260));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x2271 = UINT64_MAX;
	int8_t x2272 = -1;
	volatile int64_t t28 = 3874LL;

	t28 = ((x2269%x2270)/(x2271==x2272));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2301 = -1LL;
	volatile uint8_t x2303 = 121U;
	static uint8_t x2304 = 121U;
	static volatile int64_t t29 = -487677549064426147LL;

	t29 = ((x2301%x2302)/(x2303==x2304));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2305 = INT8_MIN;
	uint64_t x2306 = 129766311592429704LLU;
	int8_t x2307 = -1;
	int64_t x2308 = -1LL;

	t30 = ((x2305%x2306)/(x2307==x2308));

	if (t30 != 19927827584533520LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2341 = 58U;
	volatile int64_t x2342 = INT64_MAX;
	volatile int64_t t31 = 47LL;

	t31 = ((x2341%x2342)/(x2343==x2344));

	if (t31 != 58LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2633 = INT8_MAX;
	uint8_t x2634 = 39U;
	static int32_t t32 = -3794979;

	t32 = ((x2633%x2634)/(x2635==x2636));

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2866 = INT64_MAX;
	uint64_t x2867 = UINT64_MAX;
	int64_t x2868 = -1LL;
	volatile int64_t t33 = 5785369495800LL;

	t33 = ((x2865%x2866)/(x2867==x2868));

	if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x2921 = INT8_MIN;
	static uint16_t x2923 = UINT16_MAX;
	uint16_t x2924 = UINT16_MAX;

	t34 = ((x2921%x2922)/(x2923==x2924));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2927 = UINT32_MAX;
	static volatile int32_t t35 = 51004;

	t35 = ((x2925%x2926)/(x2927==x2928));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x3041 = INT32_MAX;
	volatile uint64_t x3043 = UINT64_MAX;
	int64_t x3044 = -1LL;
	int64_t t36 = 17130LL;

	t36 = ((x3041%x3042)/(x3043==x3044));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3113 = INT64_MIN;
	static int32_t x3114 = INT32_MIN;
	int32_t x3115 = INT32_MIN;
	int32_t x3116 = INT32_MIN;
	volatile int64_t t37 = 93599373LL;

	t37 = ((x3113%x3114)/(x3115==x3116));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x3189 = UINT16_MAX;
	uint16_t x3190 = UINT16_MAX;
	static uint64_t x3191 = UINT64_MAX;
	int64_t x3192 = -1LL;
	static volatile int32_t t38 = -7765332;

	t38 = ((x3189%x3190)/(x3191==x3192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x3317 = 6U;
	int16_t x3318 = INT16_MIN;
	int8_t x3320 = INT8_MIN;

	t39 = ((x3317%x3318)/(x3319==x3320));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x3373 = INT16_MIN;
	volatile uint32_t t40 = 16U;

	t40 = ((x3373%x3374)/(x3375==x3376));

	if (t40 != 28U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x3387 = -1;
	int16_t x3388 = -1;

	t41 = ((x3385%x3386)/(x3387==x3388));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x3545 = 1U;
	volatile uint8_t x3546 = UINT8_MAX;
	static int16_t x3547 = -1;
	volatile int8_t x3548 = -1;

	t42 = ((x3545%x3546)/(x3547==x3548));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3565 = INT64_MIN;
	int64_t x3566 = INT64_MAX;
	uint64_t x3567 = UINT64_MAX;
	int32_t x3568 = -1;
	int64_t t43 = 225253680706849038LL;

	t43 = ((x3565%x3566)/(x3567==x3568));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x3678 = UINT32_MAX;
	int16_t x3679 = INT16_MIN;
	static uint32_t t44 = 3U;

	t44 = ((x3677%x3678)/(x3679==x3680));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3917 = INT8_MAX;
	volatile int8_t x3918 = 25;
	static int64_t x3919 = -1LL;

	t45 = ((x3917%x3918)/(x3919==x3920));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x4037 = INT64_MIN;
	volatile int16_t x4038 = INT16_MIN;
	int64_t x4039 = -1LL;
	int16_t x4040 = -1;
	volatile int64_t t46 = -25421224971593LL;

	t46 = ((x4037%x4038)/(x4039==x4040));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x4085 = UINT8_MAX;
	uint8_t x4086 = 6U;
	int8_t x4087 = -1;
	static int16_t x4088 = -1;
	int32_t t47 = -1875608;

	t47 = ((x4085%x4086)/(x4087==x4088));

	if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4093 = 0U;
	uint16_t x4094 = 2U;
	int16_t x4096 = INT16_MAX;
	volatile int32_t t48 = -56;

	t48 = ((x4093%x4094)/(x4095==x4096));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x4169 = -631;
	int8_t x4171 = -1;
	volatile int64_t x4172 = -1LL;
	volatile int32_t t49 = 42695;

	t49 = ((x4169%x4170)/(x4171==x4172));

	if (t49 != -631) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x4235 = INT16_MIN;
	int16_t x4236 = INT16_MIN;
	volatile int32_t t50 = 0;

	t50 = ((x4233%x4234)/(x4235==x4236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x4237 = UINT64_MAX;
	int32_t x4238 = -1;
	static int16_t x4239 = -1;
	int32_t x4240 = -1;

	t51 = ((x4237%x4238)/(x4239==x4240));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x4265 = 111362456LLU;
	uint8_t x4266 = 2U;
	int16_t x4268 = -1;
	volatile uint64_t t52 = 73832307978039LLU;

	t52 = ((x4265%x4266)/(x4267==x4268));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x4325 = 87;
	uint32_t x4326 = 2U;
	static int8_t x4327 = INT8_MIN;
	static volatile int8_t x4328 = INT8_MIN;
	volatile uint32_t t53 = 37385U;

	t53 = ((x4325%x4326)/(x4327==x4328));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4357 = 111689274LLU;
	uint8_t x4358 = 1U;
	volatile uint64_t x4359 = UINT64_MAX;
	static uint64_t x4360 = UINT64_MAX;

	t54 = ((x4357%x4358)/(x4359==x4360));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x4521 = -241512799LL;
	static int8_t x4522 = 25;
	volatile int64_t t55 = -1LL;

	t55 = ((x4521%x4522)/(x4523==x4524));

	if (t55 != -24LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4578 = INT8_MIN;
	volatile int16_t x4579 = INT16_MIN;

	t56 = ((x4577%x4578)/(x4579==x4580));

	if (t56 != -14) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4593 = -26100357LL;
	static int16_t x4594 = INT16_MIN;
	uint32_t x4595 = UINT32_MAX;
	uint32_t x4596 = UINT32_MAX;

	t57 = ((x4593%x4594)/(x4595==x4596));

	if (t57 != -17029LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4789 = -1;
	static int32_t x4791 = INT32_MIN;
	int32_t x4792 = INT32_MIN;
	static uint32_t t58 = 24U;

	t58 = ((x4789%x4790)/(x4791==x4792));

	if (t58 != 449482U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x4881 = -45;
	int16_t x4883 = -1;
	int8_t x4884 = -1;
	static int32_t t59 = -23;

	t59 = ((x4881%x4882)/(x4883==x4884));

	if (t59 != -45) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x4922 = INT8_MAX;
	static volatile int64_t x4923 = -1LL;
	volatile int64_t x4924 = -1LL;

	t60 = ((x4921%x4922)/(x4923==x4924));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x5033 = UINT8_MAX;
	static int64_t x5034 = INT64_MIN;
	volatile int8_t x5035 = -1;
	uint64_t x5036 = UINT64_MAX;
	volatile int64_t t61 = -33304LL;

	t61 = ((x5033%x5034)/(x5035==x5036));

	if (t61 != 255LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x5090 = UINT16_MAX;
	static int16_t x5091 = -1;
	int32_t x5092 = -1;
	uint64_t t62 = 1039248LLU;

	t62 = ((x5089%x5090)/(x5091==x5092));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x5249 = INT8_MIN;
	int16_t x5251 = INT16_MIN;
	int16_t x5252 = INT16_MIN;
	volatile uint64_t t63 = 1393LLU;

	t63 = ((x5249%x5250)/(x5251==x5252));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x5425 = -1;
	uint8_t x5426 = 121U;
	int64_t x5427 = -1LL;
	int32_t x5428 = -1;
	int32_t t64 = 1;

	t64 = ((x5425%x5426)/(x5427==x5428));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x5477 = INT8_MIN;
	uint8_t x5478 = UINT8_MAX;
	static int16_t x5479 = INT16_MIN;
	int16_t x5480 = INT16_MIN;
	int32_t t65 = 40279065;

	t65 = ((x5477%x5478)/(x5479==x5480));

	if (t65 != -128) { NG(); } else { ; }
	
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


    return 0;
}

