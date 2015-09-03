#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x182 = UINT64_MAX;
int16_t x275 = 0;
volatile int64_t x284 = -1LL;
int8_t x341 = INT8_MIN;
volatile uint32_t t7 = 1190U;
uint8_t x671 = 70U;
volatile int32_t t8 = 365851013;
uint16_t x679 = 4U;
int16_t x1040 = INT16_MIN;
int64_t x1108 = -1LL;
int64_t x1111 = INT64_MAX;
uint64_t x1112 = 0LLU;
volatile int16_t x1173 = INT16_MIN;
volatile int8_t x1281 = INT8_MIN;
int16_t x1283 = 1;
uint16_t x1490 = 1U;
static uint32_t x1962 = 7313U;
uint32_t t19 = 62262U;
static int64_t x2251 = -1LL;
uint32_t x2293 = UINT32_MAX;
uint8_t x2294 = 122U;
uint32_t t22 = 2214U;
static volatile uint64_t x2466 = 28468290LLU;
uint16_t x2467 = 8U;
static uint32_t x2478 = UINT32_MAX;
int16_t x2479 = INT16_MIN;
uint32_t x2614 = 1U;
int64_t t27 = INT64_MIN;
volatile uint64_t t33 = 3209LLU;
int32_t x3245 = INT32_MIN;
int64_t x3253 = -1LL;
int8_t x3259 = INT8_MAX;
uint8_t x3323 = 27U;
int32_t x3367 = -1;
uint8_t x3368 = 0U;
int32_t x3887 = -1;
static int32_t x3948 = -1;
static uint8_t x4057 = 122U;
uint32_t x4058 = 3U;
uint8_t x4083 = 6U;
int8_t x4098 = INT8_MAX;
int32_t x4135 = INT32_MIN;
int32_t t49 = 429878735;
uint64_t x4266 = UINT64_MAX;
volatile uint64_t x4723 = 30578770901349LLU;
volatile uint64_t t54 = 42363256852901586LLU;
volatile int16_t x4803 = INT16_MIN;
int32_t x5257 = -1380;
int8_t x5260 = -1;
static int32_t x5392 = -1;
volatile int32_t t60 = 2153;
uint32_t x5576 = UINT32_MAX;
volatile uint64_t t61 = 18847634788136011LLU;
volatile int8_t x5767 = -2;
uint16_t x6026 = 24690U;
uint64_t x6027 = 1829578641304245141LLU;
volatile int32_t x6153 = -1;
uint64_t x6154 = 1203731LLU;
int16_t x6277 = 173;
static volatile int32_t x6280 = 104000;
uint32_t x6595 = 3U;
int64_t x6621 = 12548070288649LL;
volatile int32_t x6624 = -1;
uint16_t x6655 = 0U;
uint64_t x6685 = 87LLU;
int8_t x6793 = -1;
static uint8_t x6795 = 0U;
int16_t x6852 = INT16_MAX;
volatile uint64_t t78 = 64499414013193083LLU;
int16_t x6982 = 1710;
int8_t x7092 = 1;
uint16_t x7157 = 1U;
uint32_t x7158 = 292U;
static uint32_t x7160 = 0U;
int16_t x7221 = INT16_MAX;
int8_t x7222 = 3;
static uint32_t x7277 = 176U;
int16_t x7279 = -1;
static int16_t x7370 = INT16_MAX;
int8_t x7372 = -1;
uint32_t t86 = 26845U;
uint8_t x7433 = UINT8_MAX;
static uint64_t x7434 = UINT64_MAX;
int32_t x7501 = 10053;
int32_t t90 = -121500;
volatile int32_t t91 = -524911;
volatile uint32_t x7706 = 191664U;
int32_t x7737 = 15092;
volatile int16_t x7739 = 0;
static uint64_t x7740 = UINT64_MAX;
uint8_t x7946 = UINT8_MAX;
uint64_t x7948 = 0LLU;
volatile int64_t t94 = 2LL;
uint32_t x8071 = UINT32_MAX;
int32_t x8400 = 5;
static uint64_t t99 = 241994669546LLU;


void f0(void) {
	volatile uint8_t x89 = 2U;
	int8_t x90 = 25;
	static int64_t x91 = -1LL;
	int8_t x92 = -1;
	static int32_t t0 = -11;

	t0 = (x89*(x90<<(x91*x92)));

	if (t0 != 100) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x121 = UINT16_MAX;
	uint8_t x122 = UINT8_MAX;
	volatile int8_t x123 = 0;
	volatile uint64_t x124 = 1632094LLU;
	int32_t t1 = -145122;

	t1 = (x121*(x122<<(x123*x124)));

	if (t1 != 16711425) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x181 = INT32_MIN;
	int16_t x183 = -1;
	int16_t x184 = -6;
	volatile uint64_t t2 = 1657246125106579LLU;

	t2 = (x181*(x182<<(x183*x184)));

	if (t2 != 137438953472LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x273 = 2U;
	uint16_t x274 = 7635U;
	int16_t x276 = INT16_MIN;
	int32_t t3 = 19364;

	t3 = (x273*(x274<<(x275*x276)));

	if (t3 != 15270) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x281 = INT32_MAX;
	volatile uint64_t x282 = 7103982LLU;
	uint16_t x283 = 0U;
	uint64_t t4 = 18702109LLU;

	t4 = (x281*(x282<<(x283*x284)));

	if (t4 != 15255685173582354LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x333 = UINT16_MAX;
	static int16_t x334 = 11;
	int64_t x335 = -1LL;
	int64_t x336 = -1LL;
	int32_t t5 = -4061;

	t5 = (x333*(x334<<(x335*x336)));

	if (t5 != 1441770) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x342 = UINT32_MAX;
	static uint8_t x343 = UINT8_MAX;
	volatile int8_t x344 = 0;
	volatile uint32_t t6 = 38761069U;

	t6 = (x341*(x342<<(x343*x344)));

	if (t6 != 128U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x541 = INT16_MAX;
	uint32_t x542 = 2445164U;
	uint32_t x543 = UINT32_MAX;
	static volatile uint32_t x544 = UINT32_MAX;

	t7 = (x541*(x542<<(x543*x544)));

	if (t7 != 1327587624U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x669 = INT16_MIN;
	uint16_t x670 = UINT16_MAX;
	int8_t x672 = 0;

	t8 = (x669*(x670<<(x671*x672)));

	if (t8 != -2147450880) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x677 = INT8_MIN;
	static uint64_t x678 = UINT64_MAX;
	int64_t x680 = 1LL;
	static uint64_t t9 = 5697521536973LLU;

	t9 = (x677*(x678<<(x679*x680)));

	if (t9 != 2048LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x881 = INT8_MIN;
	uint32_t x882 = 65258U;
	int64_t x883 = INT64_MIN;
	uint8_t x884 = 0U;
	uint32_t t10 = 1601215U;

	t10 = (x881*(x882<<(x883*x884)));

	if (t10 != 4286614272U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1037 = 10;
	int32_t x1038 = 3334;
	uint32_t x1039 = 0U;
	int32_t t11 = 117279445;

	t11 = (x1037*(x1038<<(x1039*x1040)));

	if (t11 != 33340) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x1105 = INT32_MAX;
	int8_t x1106 = 0;
	int64_t x1107 = -2LL;
	static int32_t t12 = -89;

	t12 = (x1105*(x1106<<(x1107*x1108)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1109 = 500787727U;
	static int16_t x1110 = INT16_MAX;
	uint32_t t13 = 5U;

	t13 = (x1109*(x1110<<(x1111*x1112)));

	if (t13 != 2536379889U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x1129 = UINT8_MAX;
	static uint8_t x1130 = 0U;
	static volatile int8_t x1131 = -1;
	volatile int16_t x1132 = -1;
	static volatile int32_t t14 = 38;

	t14 = (x1129*(x1130<<(x1131*x1132)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1174 = UINT64_MAX;
	uint8_t x1175 = 6U;
	static int16_t x1176 = 1;
	uint64_t t15 = 295674200LLU;

	t15 = (x1173*(x1174<<(x1175*x1176)));

	if (t15 != 2097152LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1282 = 255922280LLU;
	volatile int8_t x1284 = 35;
	uint64_t t16 = 4909170323251845LLU;

	t16 = (x1281*(x1282<<(x1283*x1284)));

	if (t16 != 18140041902211203072LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1489 = 180U;
	int16_t x1491 = -71;
	uint8_t x1492 = 0U;
	volatile uint32_t t17 = 5311U;

	t17 = (x1489*(x1490<<(x1491*x1492)));

	if (t17 != 180U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1677 = 1023563U;
	volatile uint8_t x1678 = 7U;
	volatile uint8_t x1679 = 3U;
	static uint8_t x1680 = 0U;
	static uint32_t t18 = 206613090U;

	t18 = (x1677*(x1678<<(x1679*x1680)));

	if (t18 != 7164941U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1961 = 1071U;
	volatile uint64_t x1963 = 31969LLU;
	volatile uint8_t x1964 = 0U;

	t19 = (x1961*(x1962<<(x1963*x1964)));

	if (t19 != 7832223U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x2249 = 10LL;
	static uint64_t x2250 = 8536489309427097845LLU;
	int8_t x2252 = -28;
	static uint64_t t20 = 1482306497645LLU;

	t20 = (x2249*(x2250<<(x2251*x2252)));

	if (t20 != 14507075821799211008LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x2277 = -1;
	volatile int8_t x2278 = 24;
	static uint8_t x2279 = 3U;
	volatile uint32_t x2280 = 5U;
	volatile int32_t t21 = 1502514;

	t21 = (x2277*(x2278<<(x2279*x2280)));

	if (t21 != -786432) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2295 = 0U;
	int32_t x2296 = -318199954;

	t22 = (x2293*(x2294<<(x2295*x2296)));

	if (t22 != 4294967174U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x2465 = -1;
	uint32_t x2468 = 0U;
	volatile uint64_t t23 = 6842312061LLU;

	t23 = (x2465*(x2466<<(x2467*x2468)));

	if (t23 != 18446744073681083326LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x2477 = -1;
	uint8_t x2480 = 0U;
	static uint32_t t24 = 1U;

	t24 = (x2477*(x2478<<(x2479*x2480)));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2517 = -1;
	uint64_t x2518 = UINT64_MAX;
	int16_t x2519 = INT16_MIN;
	uint32_t x2520 = 0U;
	uint64_t t25 = 22338055LLU;

	t25 = (x2517*(x2518<<(x2519*x2520)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2613 = -1;
	int32_t x2615 = -1;
	int64_t x2616 = -1LL;
	volatile uint32_t t26 = 3266U;

	t26 = (x2613*(x2614<<(x2615*x2616)));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2629 = INT64_MIN;
	volatile uint8_t x2630 = 1U;
	static int64_t x2631 = INT64_MIN;
	int16_t x2632 = 0;

	t27 = (x2629*(x2630<<(x2631*x2632)));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2649 = -712;
	int8_t x2650 = INT8_MAX;
	int32_t x2651 = -1;
	int16_t x2652 = -1;
	int32_t t28 = -1268;

	t28 = (x2649*(x2650<<(x2651*x2652)));

	if (t28 != -180848) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2681 = 49U;
	uint16_t x2682 = 24U;
	volatile int8_t x2683 = -3;
	int8_t x2684 = -1;
	volatile int32_t t29 = -33465150;

	t29 = (x2681*(x2682<<(x2683*x2684)));

	if (t29 != 9408) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2693 = INT16_MAX;
	uint32_t x2694 = 130863U;
	int8_t x2695 = -1;
	volatile int64_t x2696 = -1LL;
	static uint32_t t30 = 114002U;

	t30 = (x2693*(x2694<<(x2695*x2696)));

	if (t30 != 4281008546U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x2705 = 20157LLU;
	uint32_t x2706 = 13U;
	static uint8_t x2707 = 0U;
	int8_t x2708 = INT8_MIN;
	uint64_t t31 = 56LLU;

	t31 = (x2705*(x2706<<(x2707*x2708)));

	if (t31 != 262041LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2989 = INT32_MAX;
	uint32_t x2990 = 2507338U;
	int32_t x2991 = INT32_MIN;
	uint32_t x2992 = 630U;
	uint32_t t32 = 54213U;

	t32 = (x2989*(x2990<<(x2991*x2992)));

	if (t32 != 4292459958U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x3141 = INT16_MAX;
	uint64_t x3142 = 84759447472758LLU;
	uint64_t x3143 = 21147644876166LLU;
	volatile int64_t x3144 = INT64_MIN;

	t33 = (x3141*(x3142<<(x3143*x3144)));

	if (t33 != 2777312815339861386LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x3193 = 3;
	static uint8_t x3194 = UINT8_MAX;
	uint8_t x3195 = 1U;
	static uint64_t x3196 = 6LLU;
	int32_t t34 = -352308848;

	t34 = (x3193*(x3194<<(x3195*x3196)));

	if (t34 != 48960) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3246 = 0LLU;
	volatile int8_t x3247 = 0;
	uint16_t x3248 = 9938U;
	volatile uint64_t t35 = 236739116284309LLU;

	t35 = (x3245*(x3246<<(x3247*x3248)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x3254 = INT16_MAX;
	uint8_t x3255 = 0U;
	static int8_t x3256 = INT8_MAX;
	int64_t t36 = -383884315968750LL;

	t36 = (x3253*(x3254<<(x3255*x3256)));

	if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3257 = -1;
	uint64_t x3258 = 25898899429211088LLU;
	volatile uint32_t x3260 = 0U;
	static uint64_t t37 = 269LLU;

	t37 = (x3257*(x3258<<(x3259*x3260)));

	if (t37 != 18420845174280340528LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x3321 = 79U;
	uint64_t x3322 = UINT64_MAX;
	int32_t x3324 = 1;
	uint64_t t38 = 4596975527651379431LLU;

	t38 = (x3321*(x3322<<(x3323*x3324)));

	if (t38 != 18446744063106351104LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x3365 = -53377;
	int16_t x3366 = INT16_MAX;
	static volatile int32_t t39 = -29123483;

	t39 = (x3365*(x3366<<(x3367*x3368)));

	if (t39 != -1749004159) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3593 = INT64_MAX;
	uint16_t x3594 = 1U;
	volatile int16_t x3595 = 0;
	uint64_t x3596 = UINT64_MAX;
	static int64_t t40 = INT64_MAX;

	t40 = (x3593*(x3594<<(x3595*x3596)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x3769 = 0LL;
	int8_t x3770 = 12;
	uint64_t x3771 = UINT64_MAX;
	int64_t x3772 = -1LL;
	int64_t t41 = 4255798LL;

	t41 = (x3769*(x3770<<(x3771*x3772)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3773 = UINT64_MAX;
	volatile uint64_t x3774 = 22292193689LLU;
	volatile int8_t x3775 = 0;
	static int8_t x3776 = 3;
	static volatile uint64_t t42 = 60LLU;

	t42 = (x3773*(x3774<<(x3775*x3776)));

	if (t42 != 18446744051417357927LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3885 = UINT32_MAX;
	uint64_t x3886 = 4091819747692455263LLU;
	static volatile int64_t x3888 = -1LL;
	static volatile uint64_t t43 = 88815823788526LLU;

	t43 = (x3885*(x3886<<(x3887*x3888)));

	if (t43 != 12876963391964034370LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3945 = -1;
	static uint64_t x3946 = 4363579591376138LLU;
	static volatile uint16_t x3947 = 0U;
	static volatile uint64_t t44 = 126989983LLU;

	t44 = (x3945*(x3946<<(x3947*x3948)));

	if (t44 != 18442380494118175478LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x4059 = -1;
	static int8_t x4060 = -1;
	uint32_t t45 = 0U;

	t45 = (x4057*(x4058<<(x4059*x4060)));

	if (t45 != 732U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x4061 = UINT64_MAX;
	volatile uint8_t x4062 = 14U;
	int16_t x4063 = -1;
	volatile int8_t x4064 = -1;
	volatile uint64_t t46 = 17199837186LLU;

	t46 = (x4061*(x4062<<(x4063*x4064)));

	if (t46 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x4081 = -1;
	static uint64_t x4082 = 144120567LLU;
	uint8_t x4084 = 2U;
	volatile uint64_t t47 = 26LLU;

	t47 = (x4081*(x4082<<(x4083*x4084)));

	if (t47 != 18446743483391709184LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x4097 = -89;
	uint32_t x4099 = 23896U;
	static int32_t x4100 = INT32_MIN;
	static int32_t t48 = -21550216;

	t48 = (x4097*(x4098<<(x4099*x4100)));

	if (t48 != -11303) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x4133 = -1;
	static uint16_t x4134 = UINT16_MAX;
	volatile uint32_t x4136 = 0U;

	t49 = (x4133*(x4134<<(x4135*x4136)));

	if (t49 != -65535) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4265 = INT16_MIN;
	int64_t x4267 = INT64_MIN;
	uint64_t x4268 = 9513242LLU;
	volatile uint64_t t50 = 1996LLU;

	t50 = (x4265*(x4266<<(x4267*x4268)));

	if (t50 != 32768LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x4313 = UINT64_MAX;
	uint8_t x4314 = UINT8_MAX;
	int16_t x4315 = -1;
	uint32_t x4316 = UINT32_MAX;
	volatile uint64_t t51 = 4112966LLU;

	t51 = (x4313*(x4314<<(x4315*x4316)));

	if (t51 != 18446744073709551106LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x4341 = 5584811445251LLU;
	static volatile int8_t x4342 = INT8_MAX;
	int16_t x4343 = -1;
	int8_t x4344 = -1;
	uint64_t t52 = 563842957LLU;

	t52 = (x4341*(x4342<<(x4343*x4344)));

	if (t52 != 1418542107093754LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x4441 = 0;
	int32_t x4442 = INT32_MAX;
	volatile int64_t x4443 = INT64_MIN;
	int16_t x4444 = 0;
	volatile int32_t t53 = -13213995;

	t53 = (x4441*(x4442<<(x4443*x4444)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x4721 = 994LLU;
	volatile int64_t x4722 = INT64_MAX;
	uint32_t x4724 = 0U;

	t54 = (x4721*(x4722<<(x4723*x4724)));

	if (t54 != 18446744073709550622LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4773 = 324172652847755LLU;
	uint8_t x4774 = 39U;
	volatile uint8_t x4775 = 0U;
	int16_t x4776 = INT16_MAX;
	uint64_t t55 = 16LLU;

	t55 = (x4773*(x4774<<(x4775*x4776)));

	if (t55 != 12642733461062445LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x4801 = INT8_MIN;
	int8_t x4802 = 5;
	static int8_t x4804 = 0;
	int32_t t56 = 25;

	t56 = (x4801*(x4802<<(x4803*x4804)));

	if (t56 != -640) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4821 = -1;
	uint8_t x4822 = UINT8_MAX;
	int16_t x4823 = 1;
	uint32_t x4824 = 4U;
	volatile int32_t t57 = 242362;

	t57 = (x4821*(x4822<<(x4823*x4824)));

	if (t57 != -4080) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x5177 = INT8_MIN;
	int8_t x5178 = INT8_MAX;
	uint32_t x5179 = 8U;
	int32_t x5180 = INT32_MIN;
	int32_t t58 = 33287;

	t58 = (x5177*(x5178<<(x5179*x5180)));

	if (t58 != -16256) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x5258 = 997LLU;
	int8_t x5259 = -8;
	static volatile uint64_t t59 = 2418265LLU;

	t59 = (x5257*(x5258<<(x5259*x5260)));

	if (t59 != 18446744073357331456LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x5389 = INT16_MIN;
	static uint8_t x5390 = 12U;
	int64_t x5391 = -1LL;

	t60 = (x5389*(x5390<<(x5391*x5392)));

	if (t60 != -786432) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x5573 = INT64_MAX;
	uint64_t x5574 = UINT64_MAX;
	static uint32_t x5575 = UINT32_MAX;

	t61 = (x5573*(x5574<<(x5575*x5576)));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x5673 = -1LL;
	uint16_t x5674 = 236U;
	int32_t x5675 = -1;
	static int32_t x5676 = -1;
	static volatile int64_t t62 = 22339107829580513LL;

	t62 = (x5673*(x5674<<(x5675*x5676)));

	if (t62 != -472LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x5749 = 110907306556048LLU;
	uint32_t x5750 = 108932191U;
	int32_t x5751 = 1701;
	int16_t x5752 = 0;
	volatile uint64_t t63 = 7941672LLU;

	t63 = (x5749*(x5750<<(x5751*x5752)));

	if (t63 != 17205276852926184304LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x5765 = INT8_MAX;
	int64_t x5766 = 60LL;
	static uint64_t x5768 = 0LLU;
	volatile int64_t t64 = -94291525LL;

	t64 = (x5765*(x5766<<(x5767*x5768)));

	if (t64 != 7620LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x5857 = 26;
	int8_t x5858 = 3;
	int8_t x5859 = -1;
	volatile int8_t x5860 = -1;
	int32_t t65 = 278584;

	t65 = (x5857*(x5858<<(x5859*x5860)));

	if (t65 != 156) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x6025 = UINT32_MAX;
	int16_t x6028 = 0;
	volatile uint32_t t66 = 24421U;

	t66 = (x6025*(x6026<<(x6027*x6028)));

	if (t66 != 4294942606U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x6125 = INT32_MAX;
	uint64_t x6126 = 5305411LLU;
	int8_t x6127 = -5;
	uint32_t x6128 = UINT32_MAX;
	uint64_t t67 = 29LLU;

	t67 = (x6125*(x6126<<(x6127*x6128)));

	if (t67 != 364585067619645344LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x6155 = 657215872LLU;
	volatile int64_t x6156 = INT64_MIN;
	uint64_t t68 = 3020463802573689987LLU;

	t68 = (x6153*(x6154<<(x6155*x6156)));

	if (t68 != 18446744073708347885LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x6241 = 168629507474036917LL;
	uint64_t x6242 = 27LLU;
	static int8_t x6243 = INT8_MIN;
	uint8_t x6244 = 0U;
	volatile uint64_t t69 = 11LLU;

	t69 = (x6241*(x6242<<(x6243*x6244)));

	if (t69 != 4552996701798996759LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x6278 = 2842U;
	static int8_t x6279 = 0;
	int32_t t70 = 0;

	t70 = (x6277*(x6278<<(x6279*x6280)));

	if (t70 != 491666) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x6493 = 3280U;
	uint32_t x6494 = 259574U;
	static int32_t x6495 = -1;
	volatile int16_t x6496 = -1;
	uint32_t t71 = 1U;

	t71 = (x6493*(x6494<<(x6495*x6496)));

	if (t71 != 1702805440U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x6561 = 352562LL;
	int64_t x6562 = 354LL;
	int64_t x6563 = INT64_MIN;
	int16_t x6564 = 0;
	static int64_t t72 = 2242LL;

	t72 = (x6561*(x6562<<(x6563*x6564)));

	if (t72 != 124806948LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x6593 = INT16_MIN;
	uint16_t x6594 = 9U;
	int8_t x6596 = 0;
	static volatile int32_t t73 = 502;

	t73 = (x6593*(x6594<<(x6595*x6596)));

	if (t73 != -294912) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x6622 = UINT64_MAX;
	volatile int32_t x6623 = -1;
	volatile uint64_t t74 = 185949607LLU;

	t74 = (x6621*(x6622<<(x6623*x6624)));

	if (t74 != 18446718977568974318LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x6653 = 0;
	static volatile uint64_t x6654 = 53252669676544637LLU;
	static int32_t x6656 = INT32_MIN;
	uint64_t t75 = 5270478858LLU;

	t75 = (x6653*(x6654<<(x6655*x6656)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x6686 = 108U;
	uint8_t x6687 = 0U;
	int64_t x6688 = 1LL;
	uint64_t t76 = 62302518869544982LLU;

	t76 = (x6685*(x6686<<(x6687*x6688)));

	if (t76 != 9396LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x6794 = 3;
	int16_t x6796 = INT16_MIN;
	int32_t t77 = -559527413;

	t77 = (x6793*(x6794<<(x6795*x6796)));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x6849 = 9424LLU;
	volatile int32_t x6850 = 122;
	uint32_t x6851 = 0U;

	t78 = (x6849*(x6850<<(x6851*x6852)));

	if (t78 != 1149728LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x6865 = INT32_MAX;
	volatile uint32_t x6866 = UINT32_MAX;
	static int8_t x6867 = 0;
	static int16_t x6868 = -1;
	static volatile uint32_t t79 = 7U;

	t79 = (x6865*(x6866<<(x6867*x6868)));

	if (t79 != 2147483649U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x6981 = 30668470861258LLU;
	volatile int32_t x6983 = -1;
	uint32_t x6984 = UINT32_MAX;
	volatile uint64_t t80 = 12182920609LLU;

	t80 = (x6981*(x6982<<(x6983*x6984)));

	if (t80 != 104886170345502360LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x6997 = -85819LL;
	uint32_t x6998 = 0U;
	int32_t x6999 = -1;
	static int8_t x7000 = -1;
	volatile int64_t t81 = -1171264LL;

	t81 = (x6997*(x6998<<(x6999*x7000)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x7089 = 101010038LL;
	int8_t x7090 = INT8_MAX;
	int16_t x7091 = 1;
	volatile int64_t t82 = 4059393198608823852LL;

	t82 = (x7089*(x7090<<(x7091*x7092)));

	if (t82 != 25656549652LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x7159 = INT32_MAX;
	volatile uint32_t t83 = 5360562U;

	t83 = (x7157*(x7158<<(x7159*x7160)));

	if (t83 != 292U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x7223 = -1;
	uint32_t x7224 = UINT32_MAX;
	volatile int32_t t84 = -462243;

	t84 = (x7221*(x7222<<(x7223*x7224)));

	if (t84 != 196602) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x7278 = 23;
	uint32_t x7280 = UINT32_MAX;
	volatile uint32_t t85 = 1922U;

	t85 = (x7277*(x7278<<(x7279*x7280)));

	if (t85 != 8096U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x7369 = UINT32_MAX;
	int64_t x7371 = -1LL;

	t86 = (x7369*(x7370<<(x7371*x7372)));

	if (t86 != 4294901762U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x7435 = 0;
	uint32_t x7436 = 138638501U;
	uint64_t t87 = 1930465LLU;

	t87 = (x7433*(x7434<<(x7435*x7436)));

	if (t87 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x7477 = -6599358103LL;
	uint32_t x7478 = 1357U;
	uint16_t x7479 = UINT16_MAX;
	int16_t x7480 = 0;
	volatile int64_t t88 = 6LL;

	t88 = (x7477*(x7478<<(x7479*x7480)));

	if (t88 != -8955328945771LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x7502 = 197;
	volatile int32_t x7503 = INT32_MIN;
	uint32_t x7504 = 54U;
	int32_t t89 = 1;

	t89 = (x7501*(x7502<<(x7503*x7504)));

	if (t89 != 1980441) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x7577 = UINT16_MAX;
	static int16_t x7578 = INT16_MAX;
	uint8_t x7579 = 0U;
	volatile int8_t x7580 = INT8_MAX;

	t90 = (x7577*(x7578<<(x7579*x7580)));

	if (t90 != 2147385345) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x7685 = -1;
	uint8_t x7686 = 6U;
	uint32_t x7687 = UINT32_MAX;
	uint32_t x7688 = UINT32_MAX;

	t91 = (x7685*(x7686<<(x7687*x7688)));

	if (t91 != -12) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x7705 = -1;
	static int32_t x7707 = -1;
	uint64_t x7708 = UINT64_MAX;
	volatile uint32_t t92 = 0U;

	t92 = (x7705*(x7706<<(x7707*x7708)));

	if (t92 != 4294583968U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x7738 = 9U;
	volatile int32_t t93 = -795390;

	t93 = (x7737*(x7738<<(x7739*x7740)));

	if (t93 != 135828) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x7945 = 421923284018LL;
	int64_t x7947 = -1LL;

	t94 = (x7945*(x7946<<(x7947*x7948)));

	if (t94 != 107590437424590LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x8069 = 48917U;
	uint32_t x8070 = 38U;
	volatile int8_t x8072 = -1;
	uint32_t t95 = 1144U;

	t95 = (x8069*(x8070<<(x8071*x8072)));

	if (t95 != 3717692U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x8225 = 92863044U;
	uint8_t x8226 = 6U;
	uint16_t x8227 = 0U;
	int8_t x8228 = -4;
	uint32_t t96 = 0U;

	t96 = (x8225*(x8226<<(x8227*x8228)));

	if (t96 != 557178264U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x8273 = INT8_MIN;
	int16_t x8274 = 2485;
	int64_t x8275 = -1LL;
	int8_t x8276 = -7;
	static volatile int32_t t97 = 63245444;

	t97 = (x8273*(x8274<<(x8275*x8276)));

	if (t97 != -40714240) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x8365 = -1;
	uint32_t x8366 = 5593U;
	static int16_t x8367 = -2;
	int32_t x8368 = -1;
	uint32_t t98 = 105909532U;

	t98 = (x8365*(x8366<<(x8367*x8368)));

	if (t98 != 4294944924U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x8397 = 972887U;
	uint64_t x8398 = 1695LLU;
	int8_t x8399 = 0;

	t99 = (x8397*(x8398<<(x8399*x8400)));

	if (t99 != 1649043465LLU) { NG(); } else { ; }
	
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

