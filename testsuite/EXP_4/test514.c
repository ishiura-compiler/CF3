#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x76 = INT8_MIN;
volatile int32_t t1 = 1041050;
int64_t x346 = -1LL;
volatile int32_t x347 = INT32_MIN;
int16_t x725 = 6;
uint16_t x942 = 5U;
int32_t x944 = 14088975;
uint64_t x1045 = 45782769665796LLU;
volatile uint8_t x1046 = 11U;
volatile uint64_t x1048 = UINT64_MAX;
int16_t x1326 = -1;
uint16_t x1550 = 3U;
int64_t x1840 = INT64_MIN;
uint32_t t14 = 160631U;
int16_t x1894 = 1;
int64_t x2095 = -1LL;
volatile int8_t x2242 = 8;
uint8_t x2270 = 5U;
uint16_t x2410 = 54U;
volatile int8_t x2424 = -1;
int8_t x2463 = 12;
uint8_t x2658 = 0U;
int32_t x2902 = 13;
static int64_t x2903 = 4LL;
int32_t x2904 = INT32_MAX;
static volatile int64_t t27 = INT64_MAX;
static int64_t x2972 = INT64_MIN;
static int16_t x3005 = 14456;
int32_t t35 = 60;
volatile uint8_t x3225 = 2U;
volatile int32_t x3228 = -54499;
uint8_t x3255 = UINT8_MAX;
static int32_t x3256 = INT32_MIN;
int16_t x3395 = INT16_MAX;
static uint64_t x3445 = 668661235LLU;
uint32_t x3448 = UINT32_MAX;
uint8_t x3665 = 37U;
int32_t t42 = 68880;
static uint32_t x4050 = UINT32_MAX;
int16_t x4176 = INT16_MIN;
static uint16_t x4315 = 29081U;
int32_t t46 = 97179;
volatile uint64_t x4336 = UINT64_MAX;
int32_t t47 = -4286;
uint16_t x4367 = 1U;
static int64_t x4444 = 1763390126267LL;
uint64_t t51 = 32914552985858LLU;
int16_t x4550 = 0;
int8_t x4552 = -1;
int16_t x4582 = 3;
static int64_t x4584 = INT64_MIN;
uint64_t t54 = 116LLU;
volatile uint32_t x4803 = 1026218U;
uint64_t x4847 = UINT64_MAX;
uint8_t x4894 = 0U;
int64_t x4896 = -1LL;
volatile int32_t x4993 = 68;
int32_t x5235 = INT32_MAX;
int32_t t64 = 87484;
volatile uint64_t t65 = 455299138025LLU;
uint64_t x5711 = 60LLU;
uint8_t x5971 = UINT8_MAX;
int8_t x6064 = INT8_MAX;
volatile uint32_t x6275 = UINT32_MAX;
uint64_t x6344 = UINT64_MAX;
uint16_t x6668 = 6974U;
uint16_t x6725 = UINT16_MAX;
static int32_t t82 = -1012481;
int64_t x6964 = 2LL;
uint32_t x7019 = 346U;
int64_t x7020 = INT64_MAX;
static uint8_t x7110 = 7U;
int64_t x7111 = -1LL;
static volatile uint64_t t87 = 2273843LLU;
int64_t x7465 = 23319917366105LL;
uint64_t x7467 = 739LLU;
uint16_t x7485 = UINT16_MAX;
volatile int16_t x7504 = -160;
int32_t t92 = 0;
volatile int64_t x7789 = 26979808707564671LL;
int8_t x7802 = 5;
int32_t x7803 = -7011020;
volatile int16_t x7979 = -1;
static int8_t x7994 = 58;
uint64_t t98 = 23186248187LLU;


void f0(void) {
	uint64_t x73 = 3784052545537798296LLU;
	int8_t x74 = 0;
	volatile int32_t x75 = -1;
	volatile uint64_t t0 = 153283589949951632LLU;

	t0 = (x73>>(x74+(x75/x76)));

	if (t0 != 3784052545537798296LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x81 = 120;
	uint16_t x82 = 4U;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MIN;

	t1 = (x81>>(x82+(x83/x84)));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x105 = 5;
	uint64_t x106 = UINT64_MAX;
	static int32_t x107 = -1;
	int8_t x108 = -1;
	int32_t t2 = -582;

	t2 = (x105>>(x106+(x107/x108)));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x345 = INT16_MAX;
	static int32_t x348 = -135602842;
	volatile int32_t t3 = 1042315;

	t3 = (x345>>(x346+(x347/x348)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x726 = 5U;
	static uint64_t x727 = UINT64_MAX;
	int16_t x728 = -1;
	int32_t t4 = -1;

	t4 = (x725>>(x726+(x727/x728)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x801 = 0;
	static int16_t x802 = -1;
	uint8_t x803 = 95U;
	static uint8_t x804 = 89U;
	int32_t t5 = 2759737;

	t5 = (x801>>(x802+(x803/x804)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x941 = 1320U;
	static int16_t x943 = 394;
	int32_t t6 = 1983;

	t6 = (x941>>(x942+(x943/x944)));

	if (t6 != 41) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x1047 = UINT64_MAX;
	uint64_t t7 = 934571004LLU;

	t7 = (x1045>>(x1046+(x1047/x1048)));

	if (t7 != 11177434000LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x1129 = INT16_MAX;
	volatile uint8_t x1130 = 5U;
	uint8_t x1131 = 2U;
	uint64_t x1132 = 92406520854346LLU;
	static volatile int32_t t8 = 19429177;

	t8 = (x1129>>(x1130+(x1131/x1132)));

	if (t8 != 1023) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x1169 = UINT64_MAX;
	uint64_t x1170 = 51LLU;
	uint32_t x1171 = UINT32_MAX;
	uint64_t x1172 = 1458416592LLU;
	static uint64_t t9 = 2960390051480112LLU;

	t9 = (x1169>>(x1170+(x1171/x1172)));

	if (t9 != 2047LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1177 = UINT16_MAX;
	int8_t x1178 = 1;
	uint8_t x1179 = 6U;
	uint64_t x1180 = 86796530730356834LLU;
	int32_t t10 = -3727029;

	t10 = (x1177>>(x1178+(x1179/x1180)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x1325 = 34U;
	static int8_t x1327 = INT8_MAX;
	static int64_t x1328 = 77LL;
	volatile uint32_t t11 = 1U;

	t11 = (x1325>>(x1326+(x1327/x1328)));

	if (t11 != 34U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x1549 = UINT32_MAX;
	int32_t x1551 = INT32_MIN;
	int32_t x1552 = INT32_MIN;
	static volatile uint32_t t12 = 38462U;

	t12 = (x1549>>(x1550+(x1551/x1552)));

	if (t12 != 268435455U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x1553 = 33U;
	int16_t x1554 = 5;
	int64_t x1555 = -1LL;
	uint32_t x1556 = 299362U;
	volatile int32_t t13 = -21199;

	t13 = (x1553>>(x1554+(x1555/x1556)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1837 = 2829U;
	volatile uint8_t x1838 = 30U;
	int64_t x1839 = INT64_MIN;

	t14 = (x1837>>(x1838+(x1839/x1840)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1893 = UINT64_MAX;
	int64_t x1895 = -3LL;
	uint16_t x1896 = 5335U;
	uint64_t t15 = 1LLU;

	t15 = (x1893>>(x1894+(x1895/x1896)));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x2093 = 253LL;
	static int8_t x2094 = 7;
	int64_t x2096 = -44787318509759315LL;
	static int64_t t16 = 76LL;

	t16 = (x2093>>(x2094+(x2095/x2096)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x2241 = UINT8_MAX;
	uint32_t x2243 = 1U;
	int8_t x2244 = -1;
	int32_t t17 = -2006690;

	t17 = (x2241>>(x2242+(x2243/x2244)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x2269 = 10U;
	int16_t x2271 = -300;
	volatile int64_t x2272 = -22945445582200503LL;
	volatile int32_t t18 = 145254685;

	t18 = (x2269>>(x2270+(x2271/x2272)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x2409 = 1901068512808455LLU;
	volatile int8_t x2411 = -1;
	static int16_t x2412 = INT16_MIN;
	uint64_t t19 = 13378LLU;

	t19 = (x2409>>(x2410+(x2411/x2412)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x2421 = INT8_MAX;
	int16_t x2422 = 10;
	uint64_t x2423 = UINT64_MAX;
	int32_t t20 = 227;

	t20 = (x2421>>(x2422+(x2423/x2424)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x2461 = INT8_MAX;
	uint8_t x2462 = 2U;
	uint32_t x2464 = 615U;
	static int32_t t21 = 1677670;

	t21 = (x2461>>(x2462+(x2463/x2464)));

	if (t21 != 31) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2657 = 126U;
	volatile uint64_t x2659 = UINT64_MAX;
	int64_t x2660 = INT64_MIN;
	volatile int32_t t22 = 24498;

	t22 = (x2657>>(x2658+(x2659/x2660)));

	if (t22 != 63) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2673 = 93LLU;
	uint8_t x2674 = 50U;
	uint8_t x2675 = UINT8_MAX;
	uint16_t x2676 = 60U;
	static uint64_t t23 = 2154822443238296LLU;

	t23 = (x2673>>(x2674+(x2675/x2676)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2765 = 5U;
	uint8_t x2766 = 4U;
	int16_t x2767 = -6;
	volatile int64_t x2768 = INT64_MIN;
	int32_t t24 = -98700;

	t24 = (x2765>>(x2766+(x2767/x2768)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x2789 = 499384887881LLU;
	int8_t x2790 = 1;
	int64_t x2791 = 60LL;
	static volatile int64_t x2792 = 2443513553735LL;
	uint64_t t25 = 599LLU;

	t25 = (x2789>>(x2790+(x2791/x2792)));

	if (t25 != 249692443940LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2901 = UINT16_MAX;
	volatile int32_t t26 = -61;

	t26 = (x2901>>(x2902+(x2903/x2904)));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2905 = INT64_MAX;
	volatile int32_t x2906 = INT32_MAX;
	int32_t x2907 = INT32_MAX;
	static int64_t x2908 = -1LL;

	t27 = (x2905>>(x2906+(x2907/x2908)));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x2949 = 66LLU;
	volatile uint8_t x2950 = 19U;
	uint32_t x2951 = UINT32_MAX;
	uint32_t x2952 = UINT32_MAX;
	volatile uint64_t t28 = 35LLU;

	t28 = (x2949>>(x2950+(x2951/x2952)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2969 = 1658876694989346LLU;
	int16_t x2970 = -1;
	volatile int64_t x2971 = INT64_MIN;
	volatile uint64_t t29 = 4945274311450251LLU;

	t29 = (x2969>>(x2970+(x2971/x2972)));

	if (t29 != 1658876694989346LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x3006 = 19;
	static int16_t x3007 = -1;
	int32_t x3008 = INT32_MIN;
	volatile int32_t t30 = -5473997;

	t30 = (x3005>>(x3006+(x3007/x3008)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x3017 = 1U;
	volatile uint8_t x3018 = 5U;
	int8_t x3019 = -1;
	int32_t x3020 = -1;
	static int32_t t31 = -17;

	t31 = (x3017>>(x3018+(x3019/x3020)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x3081 = 5474463984508LL;
	volatile int32_t x3082 = 0;
	static uint16_t x3083 = 330U;
	int64_t x3084 = INT64_MIN;
	int64_t t32 = 550261495848LL;

	t32 = (x3081>>(x3082+(x3083/x3084)));

	if (t32 != 5474463984508LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x3097 = INT8_MAX;
	uint64_t x3098 = 18LLU;
	int8_t x3099 = INT8_MIN;
	static volatile uint64_t x3100 = 2203221674053895593LLU;
	volatile int32_t t33 = 51251316;

	t33 = (x3097>>(x3098+(x3099/x3100)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3149 = 39;
	uint8_t x3150 = 10U;
	int16_t x3151 = INT16_MAX;
	int32_t x3152 = INT32_MIN;
	int32_t t34 = -2;

	t34 = (x3149>>(x3150+(x3151/x3152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3217 = 9;
	uint64_t x3218 = UINT64_MAX;
	uint8_t x3219 = UINT8_MAX;
	uint32_t x3220 = 79U;

	t35 = (x3217>>(x3218+(x3219/x3220)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x3226 = 2U;
	uint64_t x3227 = 549199327738LLU;
	volatile int32_t t36 = 564906;

	t36 = (x3225>>(x3226+(x3227/x3228)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x3253 = UINT16_MAX;
	uint8_t x3254 = 22U;
	int32_t t37 = -306631;

	t37 = (x3253>>(x3254+(x3255/x3256)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x3333 = 6276LL;
	int8_t x3334 = 0;
	uint32_t x3335 = 200844U;
	int16_t x3336 = -1;
	int64_t t38 = -14667204700236LL;

	t38 = (x3333>>(x3334+(x3335/x3336)));

	if (t38 != 6276LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x3393 = 15201;
	int32_t x3394 = 1;
	static int64_t x3396 = INT64_MIN;
	static int32_t t39 = -55;

	t39 = (x3393>>(x3394+(x3395/x3396)));

	if (t39 != 7600) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3446 = 19;
	int16_t x3447 = INT16_MIN;
	uint64_t t40 = 3LLU;

	t40 = (x3445>>(x3446+(x3447/x3448)));

	if (t40 != 1275LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x3666 = 3U;
	int8_t x3667 = 1;
	int8_t x3668 = INT8_MIN;
	volatile int32_t t41 = -405846907;

	t41 = (x3665>>(x3666+(x3667/x3668)));

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3949 = 465188084;
	uint64_t x3950 = UINT64_MAX;
	static int32_t x3951 = 48271;
	volatile uint16_t x3952 = 11296U;

	t42 = (x3949>>(x3950+(x3951/x3952)));

	if (t42 != 58148510) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x4049 = 48359906307261LL;
	volatile uint32_t x4051 = UINT32_MAX;
	static int16_t x4052 = -1;
	volatile int64_t t43 = -1506789LL;

	t43 = (x4049>>(x4050+(x4051/x4052)));

	if (t43 != 48359906307261LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x4133 = 36096738127LLU;
	uint64_t x4134 = 3LLU;
	uint16_t x4135 = 7028U;
	volatile uint8_t x4136 = UINT8_MAX;
	uint64_t t44 = 2346954556602931LLU;

	t44 = (x4133>>(x4134+(x4135/x4136)));

	if (t44 != 33LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x4173 = 157970701;
	int64_t x4174 = -1LL;
	uint32_t x4175 = UINT32_MAX;
	volatile int32_t t45 = 694;

	t45 = (x4173>>(x4174+(x4175/x4176)));

	if (t45 != 157970701) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x4313 = 250U;
	uint8_t x4314 = 20U;
	int16_t x4316 = INT16_MIN;

	t46 = (x4313>>(x4314+(x4315/x4316)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x4333 = UINT8_MAX;
	int32_t x4334 = -1;
	int8_t x4335 = -1;

	t47 = (x4333>>(x4334+(x4335/x4336)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x4365 = UINT8_MAX;
	uint8_t x4366 = 6U;
	static int64_t x4368 = -1LL;
	volatile int32_t t48 = 27349502;

	t48 = (x4365>>(x4366+(x4367/x4368)));

	if (t48 != 7) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x4433 = 7U;
	uint8_t x4434 = 17U;
	int32_t x4435 = -1;
	int8_t x4436 = INT8_MAX;
	int32_t t49 = -21180;

	t49 = (x4433>>(x4434+(x4435/x4436)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x4441 = 20277U;
	volatile uint8_t x4442 = 7U;
	int16_t x4443 = INT16_MIN;
	static uint32_t t50 = 3087U;

	t50 = (x4441>>(x4442+(x4443/x4444)));

	if (t50 != 158U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x4485 = 380364538678904LLU;
	static int8_t x4486 = -1;
	int16_t x4487 = INT16_MIN;
	int16_t x4488 = INT16_MIN;

	t51 = (x4485>>(x4486+(x4487/x4488)));

	if (t51 != 380364538678904LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x4545 = UINT32_MAX;
	uint32_t x4546 = 1U;
	int32_t x4547 = -7;
	int16_t x4548 = INT16_MIN;
	volatile uint32_t t52 = 6269U;

	t52 = (x4545>>(x4546+(x4547/x4548)));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x4549 = 2;
	uint64_t x4551 = 2263878980157060588LLU;
	static int32_t t53 = -8774;

	t53 = (x4549>>(x4550+(x4551/x4552)));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x4581 = 487833390237291LLU;
	uint32_t x4583 = UINT32_MAX;

	t54 = (x4581>>(x4582+(x4583/x4584)));

	if (t54 != 60979173779661LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4801 = 110U;
	static volatile uint16_t x4802 = 6U;
	int32_t x4804 = INT32_MAX;
	int32_t t55 = -272;

	t55 = (x4801>>(x4802+(x4803/x4804)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4845 = UINT8_MAX;
	int16_t x4846 = -1;
	int32_t x4848 = -92865666;
	int32_t t56 = 81;

	t56 = (x4845>>(x4846+(x4847/x4848)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4893 = INT64_MAX;
	uint64_t x4895 = 150810452875521848LLU;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x4893>>(x4894+(x4895/x4896)));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4913 = UINT32_MAX;
	static int32_t x4914 = 0;
	volatile int32_t x4915 = -7208;
	int32_t x4916 = -38354;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (x4913>>(x4914+(x4915/x4916)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4985 = UINT16_MAX;
	static int32_t x4986 = 14;
	static uint16_t x4987 = 4215U;
	static uint32_t x4988 = UINT32_MAX;
	static int32_t t59 = 64803;

	t59 = (x4985>>(x4986+(x4987/x4988)));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x4994 = -1;
	uint64_t x4995 = UINT64_MAX;
	int64_t x4996 = INT64_MIN;
	static volatile int32_t t60 = -54;

	t60 = (x4993>>(x4994+(x4995/x4996)));

	if (t60 != 68) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x5041 = 1040218082U;
	volatile uint16_t x5042 = 0U;
	volatile uint16_t x5043 = 0U;
	int64_t x5044 = -11820398710LL;
	static volatile uint32_t t61 = 611U;

	t61 = (x5041>>(x5042+(x5043/x5044)));

	if (t61 != 1040218082U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x5233 = 863351U;
	int32_t x5234 = INT32_MAX;
	int8_t x5236 = -1;
	uint32_t t62 = 434250U;

	t62 = (x5233>>(x5234+(x5235/x5236)));

	if (t62 != 863351U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x5273 = 57U;
	int8_t x5274 = 0;
	static int8_t x5275 = INT8_MIN;
	static int64_t x5276 = INT64_MIN;
	int32_t t63 = 698593;

	t63 = (x5273>>(x5274+(x5275/x5276)));

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x5409 = INT16_MAX;
	int16_t x5410 = 1;
	int16_t x5411 = INT16_MAX;
	uint16_t x5412 = 31450U;

	t64 = (x5409>>(x5410+(x5411/x5412)));

	if (t64 != 8191) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x5461 = UINT64_MAX;
	int16_t x5462 = 4;
	uint64_t x5463 = 14847317613795148LLU;
	static volatile int8_t x5464 = INT8_MIN;

	t65 = (x5461>>(x5462+(x5463/x5464)));

	if (t65 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x5477 = 14U;
	uint64_t x5478 = UINT64_MAX;
	int8_t x5479 = INT8_MIN;
	uint32_t x5480 = 1751268450U;
	int32_t t66 = -184;

	t66 = (x5477>>(x5478+(x5479/x5480)));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x5521 = UINT16_MAX;
	volatile int16_t x5522 = -1;
	int64_t x5523 = 3933LL;
	uint16_t x5524 = 121U;
	volatile int32_t t67 = -569639;

	t67 = (x5521>>(x5522+(x5523/x5524)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x5625 = 10575447;
	uint8_t x5626 = 1U;
	int16_t x5627 = 3;
	uint32_t x5628 = 2340U;
	volatile int32_t t68 = -61;

	t68 = (x5625>>(x5626+(x5627/x5628)));

	if (t68 != 5287723) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x5709 = UINT32_MAX;
	static int8_t x5710 = 14;
	int8_t x5712 = INT8_MIN;
	static volatile uint32_t t69 = 1432768U;

	t69 = (x5709>>(x5710+(x5711/x5712)));

	if (t69 != 262143U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x5921 = 12473374LLU;
	static uint16_t x5922 = 1U;
	int64_t x5923 = 1LL;
	int16_t x5924 = INT16_MIN;
	uint64_t t70 = 12LLU;

	t70 = (x5921>>(x5922+(x5923/x5924)));

	if (t70 != 6236687LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5961 = 1;
	int16_t x5962 = 28;
	uint16_t x5963 = 24U;
	volatile int8_t x5964 = INT8_MIN;
	static int32_t t71 = -6;

	t71 = (x5961>>(x5962+(x5963/x5964)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x5969 = INT64_MAX;
	uint8_t x5970 = 17U;
	int8_t x5972 = INT8_MAX;
	int64_t t72 = -118LL;

	t72 = (x5969>>(x5970+(x5971/x5972)));

	if (t72 != 17592186044415LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x6061 = UINT32_MAX;
	int8_t x6062 = 1;
	volatile uint64_t x6063 = 2LLU;
	uint32_t t73 = 1U;

	t73 = (x6061>>(x6062+(x6063/x6064)));

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6225 = UINT64_MAX;
	static int64_t x6226 = -1LL;
	uint16_t x6227 = UINT16_MAX;
	uint16_t x6228 = UINT16_MAX;
	uint64_t t74 = UINT64_MAX;

	t74 = (x6225>>(x6226+(x6227/x6228)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x6269 = UINT16_MAX;
	static volatile int64_t x6270 = 9LL;
	int32_t x6271 = -88223940;
	int32_t x6272 = INT32_MAX;
	int32_t t75 = -364354164;

	t75 = (x6269>>(x6270+(x6271/x6272)));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x6273 = 74884824435LLU;
	uint8_t x6274 = 22U;
	int16_t x6276 = -18;
	volatile uint64_t t76 = 1328579LLU;

	t76 = (x6273>>(x6274+(x6275/x6276)));

	if (t76 != 8926LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x6297 = INT32_MAX;
	int8_t x6298 = -1;
	int8_t x6299 = INT8_MAX;
	int8_t x6300 = INT8_MAX;
	static volatile int32_t t77 = INT32_MAX;

	t77 = (x6297>>(x6298+(x6299/x6300)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x6341 = INT16_MAX;
	uint8_t x6342 = 3U;
	uint8_t x6343 = 0U;
	volatile int32_t t78 = 715601;

	t78 = (x6341>>(x6342+(x6343/x6344)));

	if (t78 != 4095) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x6461 = 14206009029546LLU;
	volatile int64_t x6462 = 9LL;
	int8_t x6463 = INT8_MIN;
	uint32_t x6464 = 1597622233U;
	static volatile uint64_t t79 = 572681693LLU;

	t79 = (x6461>>(x6462+(x6463/x6464)));

	if (t79 != 6936527846LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x6621 = 3026U;
	volatile int8_t x6622 = 0;
	volatile int64_t x6623 = -19181LL;
	static int32_t x6624 = INT32_MIN;
	int32_t t80 = 3;

	t80 = (x6621>>(x6622+(x6623/x6624)));

	if (t80 != 3026) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x6665 = UINT32_MAX;
	int16_t x6666 = 0;
	int16_t x6667 = -1;
	uint32_t t81 = UINT32_MAX;

	t81 = (x6665>>(x6666+(x6667/x6668)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x6726 = 5;
	uint16_t x6727 = UINT16_MAX;
	volatile int32_t x6728 = INT32_MAX;

	t82 = (x6725>>(x6726+(x6727/x6728)));

	if (t82 != 2047) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x6917 = 6U;
	int8_t x6918 = 1;
	volatile int16_t x6919 = INT16_MAX;
	static int64_t x6920 = INT64_MAX;
	int32_t t83 = -51319854;

	t83 = (x6917>>(x6918+(x6919/x6920)));

	if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x6941 = 8;
	int8_t x6942 = INT8_MIN;
	int8_t x6943 = INT8_MIN;
	volatile int32_t x6944 = -1;
	int32_t t84 = -38;

	t84 = (x6941>>(x6942+(x6943/x6944)));

	if (t84 != 8) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x6961 = 109U;
	uint16_t x6962 = 0U;
	static uint8_t x6963 = 49U;
	static volatile int32_t t85 = 24658234;

	t85 = (x6961>>(x6962+(x6963/x6964)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x7017 = 1;
	int8_t x7018 = 26;
	static volatile int32_t t86 = -7247244;

	t86 = (x7017>>(x7018+(x7019/x7020)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x7109 = 110717626429679634LLU;
	uint32_t x7112 = UINT32_MAX;

	t87 = (x7109>>(x7110+(x7111/x7112)));

	if (t87 != 864981456481872LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x7453 = 1U;
	volatile int16_t x7454 = -1;
	int16_t x7455 = -1;
	uint32_t x7456 = UINT32_MAX;
	static int32_t t88 = 341569238;

	t88 = (x7453>>(x7454+(x7455/x7456)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x7466 = 1;
	static int64_t x7468 = 6439271985LL;
	int64_t t89 = -25LL;

	t89 = (x7465>>(x7466+(x7467/x7468)));

	if (t89 != 11659958683052LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x7486 = 18LLU;
	int8_t x7487 = 1;
	static int8_t x7488 = 1;
	int32_t t90 = 45435;

	t90 = (x7485>>(x7486+(x7487/x7488)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x7501 = INT64_MAX;
	uint8_t x7502 = 41U;
	int32_t x7503 = -1;
	static int64_t t91 = -20LL;

	t91 = (x7501>>(x7502+(x7503/x7504)));

	if (t91 != 4194303LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x7517 = 13519;
	int16_t x7518 = 1;
	uint16_t x7519 = 15U;
	static uint64_t x7520 = 3041276LLU;

	t92 = (x7517>>(x7518+(x7519/x7520)));

	if (t92 != 6759) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x7597 = 4U;
	uint16_t x7598 = 12U;
	int8_t x7599 = -1;
	int8_t x7600 = -1;
	static int32_t t93 = -138;

	t93 = (x7597>>(x7598+(x7599/x7600)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x7790 = -1LL;
	int64_t x7791 = -1LL;
	int32_t x7792 = -1;
	volatile int64_t t94 = 273275728926145394LL;

	t94 = (x7789>>(x7790+(x7791/x7792)));

	if (t94 != 26979808707564671LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x7801 = INT64_MAX;
	static int64_t x7804 = -42644927LL;
	static volatile int64_t t95 = 93501870840924324LL;

	t95 = (x7801>>(x7802+(x7803/x7804)));

	if (t95 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x7869 = INT32_MAX;
	static int64_t x7870 = -1LL;
	int32_t x7871 = INT32_MAX;
	int64_t x7872 = 1637888126LL;
	int32_t t96 = INT32_MAX;

	t96 = (x7869>>(x7870+(x7871/x7872)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x7977 = INT64_MAX;
	static int8_t x7978 = 1;
	int8_t x7980 = -17;
	volatile int64_t t97 = -68840150360188LL;

	t97 = (x7977>>(x7978+(x7979/x7980)));

	if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x7993 = UINT64_MAX;
	int8_t x7995 = INT8_MIN;
	uint16_t x7996 = UINT16_MAX;

	t98 = (x7993>>(x7994+(x7995/x7996)));

	if (t98 != 63LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x8065 = 1393655716642549626LLU;
	int32_t x8066 = 1;
	uint16_t x8067 = 7U;
	static uint32_t x8068 = 211095U;
	static uint64_t t99 = 12034702153607367LLU;

	t99 = (x8065>>(x8066+(x8067/x8068)));

	if (t99 != 696827858321274813LLU) { NG(); } else { ; }
	
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

