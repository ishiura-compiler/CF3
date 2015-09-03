#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x89 = 3647U;
static int64_t t2 = 371LL;
volatile uint8_t x454 = 19U;
int64_t x456 = INT64_MAX;
static volatile int32_t x640 = INT32_MAX;
int32_t x651 = -1;
uint16_t x670 = 2U;
volatile int16_t x671 = INT16_MIN;
static uint32_t t8 = 25U;
int8_t x726 = 26;
uint64_t x834 = 1LLU;
uint16_t x835 = 0U;
static int64_t x925 = INT64_MAX;
int16_t x926 = 9;
int16_t x1019 = INT16_MAX;
int8_t x1020 = -5;
static uint8_t x1109 = 0U;
int16_t x1110 = 18;
static int64_t x1112 = -1LL;
uint64_t x1190 = 1LLU;
int8_t x1192 = INT8_MIN;
volatile uint8_t x1361 = 27U;
int64_t x1475 = -1LL;
uint64_t t21 = 1LLU;
int32_t x1686 = 9;
volatile uint64_t t22 = 4016304124LLU;
static uint16_t x2078 = 6U;
uint32_t x2079 = 3317766U;
int64_t t24 = 7998862LL;
uint16_t x2288 = UINT16_MAX;
int32_t t26 = 1;
uint64_t t27 = 129739246768LLU;
static volatile int8_t x2648 = -1;
uint64_t t30 = 30358068718467LLU;
static uint64_t x2661 = 21LLU;
uint64_t x2663 = UINT64_MAX;
uint16_t x2737 = 4U;
uint8_t x2738 = 4U;
volatile int32_t t32 = 301719;
volatile uint32_t t33 = 7252325U;
volatile uint32_t x3106 = 0U;
uint32_t x3121 = 1462U;
volatile uint16_t x3122 = 22U;
uint32_t x3124 = 7344U;
int64_t x3137 = 19020LL;
static volatile int64_t t38 = -23109810102654LL;
uint32_t x3211 = 927934638U;
int32_t x3239 = INT32_MIN;
uint16_t x3240 = UINT16_MAX;
uint64_t x3341 = UINT64_MAX;
static int8_t x3647 = 5;
uint32_t x3900 = UINT32_MAX;
static uint32_t t46 = 31037U;
static int64_t t47 = 0LL;
int64_t x3988 = 13612997403076720LL;
uint8_t x3997 = 2U;
static volatile int8_t x4233 = INT8_MAX;
uint8_t x4234 = 0U;
volatile int64_t x4268 = INT64_MIN;
int64_t t51 = 1LL;
uint16_t x4269 = UINT16_MAX;
volatile int8_t x4377 = INT8_MAX;
uint8_t x4380 = UINT8_MAX;
int64_t t53 = -137133822737176600LL;
uint64_t x4441 = 9418131LLU;
volatile uint64_t x4442 = 1LLU;
uint16_t x4443 = 4162U;
uint16_t x4549 = UINT16_MAX;
static uint16_t x4550 = 20U;
int16_t x4551 = INT16_MIN;
volatile uint32_t x4653 = UINT32_MAX;
volatile int64_t t59 = -3834LL;
volatile int32_t t62 = -76800256;
int32_t x4902 = 0;
uint32_t x5048 = 24U;
uint8_t x5138 = 1U;
volatile int64_t t66 = 35702531638032931LL;
volatile uint16_t x5179 = 0U;
volatile int64_t t68 = -5778783LL;
static uint16_t x5482 = 24U;
uint32_t t71 = 3291875U;
volatile uint32_t t72 = 0U;
static uint32_t x5795 = 583688U;
uint32_t t73 = 445U;
uint16_t x5802 = 1U;
static volatile uint64_t t74 = 18777213393960LLU;
uint16_t x5822 = 1U;
volatile int32_t t75 = 3548;
int8_t x5836 = -1;
volatile uint64_t x5868 = 111977LLU;
volatile uint64_t t77 = 130753LLU;
volatile uint16_t x5966 = 4U;
int8_t x5967 = INT8_MIN;
volatile uint16_t x6046 = 0U;
static volatile uint32_t t79 = 6125766U;
volatile uint64_t x6087 = UINT64_MAX;
uint32_t x6088 = 135395357U;
uint64_t x6129 = UINT64_MAX;
int32_t x6177 = INT32_MAX;
volatile uint16_t x6265 = 18572U;
int64_t x6267 = INT64_MIN;
int64_t x6336 = 425926364188937LL;
volatile int64_t t86 = -4351300LL;
static uint8_t x6362 = 5U;
uint8_t x6390 = 0U;
volatile int64_t t88 = 6834858821LL;
uint8_t x6442 = 0U;
int8_t x6446 = 6;
int8_t x6461 = 0;
uint8_t x6462 = 0U;
volatile int64_t x6463 = INT64_MIN;
static int64_t t91 = -4056132687392630LL;
uint8_t x6477 = UINT8_MAX;
volatile int32_t x6593 = 1;
uint32_t x6797 = 118835935U;
volatile int64_t x6798 = 0LL;
static int8_t x6800 = INT8_MIN;
volatile int8_t x6890 = 10;


void f0(void) {
	uint8_t x90 = 0U;
	uint16_t x91 = 6385U;
	uint64_t x92 = 24539764362LLU;
	volatile uint64_t t0 = 59LLU;

	t0 = (((x89>>x90)&x91)/x92);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x201 = 0U;
	volatile uint64_t x202 = 24LLU;
	uint8_t x203 = 1U;
	int32_t x204 = -3;
	int32_t t1 = -78086586;

	t1 = (((x201>>x202)&x203)/x204);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x289 = 67984U;
	uint16_t x290 = 1U;
	volatile int16_t x291 = -1;
	static int64_t x292 = -166813009556LL;

	t2 = (((x289>>x290)&x291)/x292);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x329 = 62176509778487LL;
	int16_t x330 = 11;
	int32_t x331 = INT32_MAX;
	uint32_t x332 = 3957021U;
	int64_t t3 = -227LL;

	t3 = (((x329>>x330)&x331)/x332);

	if (t3 != 74LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x453 = 58U;
	int16_t x455 = 1;
	int64_t t4 = -6273111040LL;

	t4 = (((x453>>x454)&x455)/x456);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x525 = INT32_MAX;
	volatile uint8_t x526 = 2U;
	static int64_t x527 = 139581304261199387LL;
	int64_t x528 = INT64_MIN;
	int64_t t5 = 3386031473851648195LL;

	t5 = (((x525>>x526)&x527)/x528);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x637 = 30311U;
	int32_t x638 = 0;
	volatile uint64_t x639 = UINT64_MAX;
	volatile uint64_t t6 = 218680459941505160LLU;

	t6 = (((x637>>x638)&x639)/x640);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x649 = INT32_MAX;
	uint16_t x650 = 1U;
	static int32_t x652 = 538678078;
	volatile int32_t t7 = -7284;

	t7 = (((x649>>x650)&x651)/x652);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x669 = 0U;
	volatile int8_t x672 = -1;

	t8 = (((x669>>x670)&x671)/x672);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x725 = 1U;
	int8_t x727 = -1;
	uint8_t x728 = 105U;
	volatile int32_t t9 = -4;

	t9 = (((x725>>x726)&x727)/x728);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x833 = UINT32_MAX;
	static uint32_t x836 = 1202193U;
	uint32_t t10 = 131477427U;

	t10 = (((x833>>x834)&x835)/x836);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x865 = INT64_MAX;
	int8_t x866 = 1;
	uint64_t x867 = UINT64_MAX;
	int64_t x868 = INT64_MIN;
	volatile uint64_t t11 = 8177764576783868LLU;

	t11 = (((x865>>x866)&x867)/x868);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x885 = 560677112786778621LLU;
	int16_t x886 = 0;
	int64_t x887 = -1LL;
	int32_t x888 = INT32_MIN;
	volatile uint64_t t12 = 1068588687LLU;

	t12 = (((x885>>x886)&x887)/x888);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x927 = -30;
	static volatile uint16_t x928 = UINT16_MAX;
	int64_t t13 = 69298390613379LL;

	t13 = (((x925>>x926)&x927)/x928);

	if (t13 != 274882101312LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1017 = 3495401132482351595LLU;
	static volatile uint8_t x1018 = 17U;
	volatile uint64_t t14 = 25145LLU;

	t14 = (((x1017>>x1018)&x1019)/x1020);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1111 = INT32_MIN;
	int64_t t15 = -2011960115938680LL;

	t15 = (((x1109>>x1110)&x1111)/x1112);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x1133 = 3828LL;
	int16_t x1134 = 5;
	volatile int64_t x1135 = INT64_MAX;
	static int64_t x1136 = INT64_MIN;
	volatile int64_t t16 = -4590LL;

	t16 = (((x1133>>x1134)&x1135)/x1136);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1189 = 825903LLU;
	int64_t x1191 = INT64_MIN;
	uint64_t t17 = 4858839656148830714LLU;

	t17 = (((x1189>>x1190)&x1191)/x1192);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1362 = 1LL;
	static uint64_t x1363 = UINT64_MAX;
	int32_t x1364 = 33;
	uint64_t t18 = 1652153446LLU;

	t18 = (((x1361>>x1362)&x1363)/x1364);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x1469 = 75U;
	volatile int8_t x1470 = 0;
	volatile int16_t x1471 = 7;
	uint64_t x1472 = 179091711357965395LLU;
	uint64_t t19 = 98931090LLU;

	t19 = (((x1469>>x1470)&x1471)/x1472);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1473 = UINT8_MAX;
	uint16_t x1474 = 1U;
	int16_t x1476 = -1;
	volatile int64_t t20 = 1050488674000LL;

	t20 = (((x1473>>x1474)&x1475)/x1476);

	if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1625 = 1437LL;
	static uint8_t x1626 = 28U;
	static uint64_t x1627 = 1457307591LLU;
	volatile int8_t x1628 = INT8_MAX;

	t21 = (((x1625>>x1626)&x1627)/x1628);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1685 = 0;
	int32_t x1687 = INT32_MIN;
	static uint64_t x1688 = 58656LLU;

	t22 = (((x1685>>x1686)&x1687)/x1688);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1857 = INT64_MAX;
	int8_t x1858 = 23;
	int32_t x1859 = -1;
	int64_t x1860 = INT64_MIN;
	volatile int64_t t23 = -11004177853821LL;

	t23 = (((x1857>>x1858)&x1859)/x1860);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x2077 = UINT32_MAX;
	int64_t x2080 = -1LL;

	t24 = (((x2077>>x2078)&x2079)/x2080);

	if (t24 != -3317766LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2109 = INT32_MAX;
	uint8_t x2110 = 5U;
	uint16_t x2111 = 0U;
	int32_t x2112 = -1;
	static volatile int32_t t25 = 7;

	t25 = (((x2109>>x2110)&x2111)/x2112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2285 = UINT16_MAX;
	uint16_t x2286 = 1U;
	int8_t x2287 = INT8_MIN;

	t26 = (((x2285>>x2286)&x2287)/x2288);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x2317 = 28U;
	volatile uint8_t x2318 = 1U;
	int16_t x2319 = INT16_MIN;
	uint64_t x2320 = 47414029561561467LLU;

	t27 = (((x2317>>x2318)&x2319)/x2320);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x2505 = UINT8_MAX;
	uint32_t x2506 = 19U;
	volatile uint64_t x2507 = 38049882275LLU;
	int16_t x2508 = INT16_MIN;
	volatile uint64_t t28 = 255575938564LLU;

	t28 = (((x2505>>x2506)&x2507)/x2508);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2645 = UINT64_MAX;
	uint64_t x2646 = 1LLU;
	int64_t x2647 = -1LL;
	volatile uint64_t t29 = 3LLU;

	t29 = (((x2645>>x2646)&x2647)/x2648);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2653 = INT8_MAX;
	int16_t x2654 = 1;
	int16_t x2655 = 635;
	uint64_t x2656 = 96078630810LLU;

	t30 = (((x2653>>x2654)&x2655)/x2656);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2662 = 1U;
	int32_t x2664 = 7414485;
	uint64_t t31 = 112439720LLU;

	t31 = (((x2661>>x2662)&x2663)/x2664);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x2739 = UINT16_MAX;
	static int32_t x2740 = 4;

	t32 = (((x2737>>x2738)&x2739)/x2740);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x3057 = 1;
	uint8_t x3058 = 2U;
	uint32_t x3059 = UINT32_MAX;
	static uint8_t x3060 = UINT8_MAX;

	t33 = (((x3057>>x3058)&x3059)/x3060);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x3061 = 3784;
	volatile uint8_t x3062 = 2U;
	uint64_t x3063 = 7053988695861LLU;
	int64_t x3064 = INT64_MIN;
	static uint64_t t34 = 2852815270961LLU;

	t34 = (((x3061>>x3062)&x3063)/x3064);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x3105 = 155747;
	int64_t x3107 = -3757LL;
	int32_t x3108 = 6;
	static int64_t t35 = 1094LL;

	t35 = (((x3105>>x3106)&x3107)/x3108);

	if (t35 != 25952LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x3123 = INT8_MIN;
	volatile uint32_t t36 = 59716207U;

	t36 = (((x3121>>x3122)&x3123)/x3124);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x3138 = 30U;
	int16_t x3139 = -1;
	volatile int64_t x3140 = INT64_MIN;
	volatile int64_t t37 = 1849168LL;

	t37 = (((x3137>>x3138)&x3139)/x3140);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x3173 = 83;
	int32_t x3174 = 10;
	volatile int64_t x3175 = INT64_MAX;
	int64_t x3176 = INT64_MIN;

	t38 = (((x3173>>x3174)&x3175)/x3176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x3209 = 1LL;
	static uint32_t x3210 = 6U;
	int16_t x3212 = -1;
	int64_t t39 = 3LL;

	t39 = (((x3209>>x3210)&x3211)/x3212);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x3237 = 126544U;
	int8_t x3238 = 25;
	volatile uint32_t t40 = 1U;

	t40 = (((x3237>>x3238)&x3239)/x3240);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3281 = INT16_MAX;
	volatile int16_t x3282 = 1;
	int64_t x3283 = INT64_MAX;
	volatile uint16_t x3284 = UINT16_MAX;
	int64_t t41 = 129657621002LL;

	t41 = (((x3281>>x3282)&x3283)/x3284);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x3342 = 13U;
	int16_t x3343 = INT16_MIN;
	uint16_t x3344 = 79U;
	volatile uint64_t t42 = 1725LLU;

	t42 = (((x3341>>x3342)&x3343)/x3344);

	if (t42 != 28503795109525LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3429 = 685611757142LLU;
	static uint32_t x3430 = 1U;
	int32_t x3431 = INT32_MAX;
	int8_t x3432 = 25;
	uint64_t t43 = 2261LLU;

	t43 = (((x3429>>x3430)&x3431)/x3432);

	if (t43 != 54239141LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x3477 = UINT16_MAX;
	volatile int8_t x3478 = 11;
	uint16_t x3479 = UINT16_MAX;
	int32_t x3480 = INT32_MAX;
	int32_t t44 = 16912776;

	t44 = (((x3477>>x3478)&x3479)/x3480);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3645 = 5;
	int8_t x3646 = 1;
	volatile int64_t x3648 = INT64_MIN;
	volatile int64_t t45 = -5316558LL;

	t45 = (((x3645>>x3646)&x3647)/x3648);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x3897 = INT8_MAX;
	static int8_t x3898 = 0;
	int32_t x3899 = -44258167;

	t46 = (((x3897>>x3898)&x3899)/x3900);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3921 = INT16_MAX;
	uint8_t x3922 = 18U;
	int64_t x3923 = INT64_MIN;
	int32_t x3924 = 24;

	t47 = (((x3921>>x3922)&x3923)/x3924);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x3985 = 20U;
	uint8_t x3986 = 6U;
	uint32_t x3987 = 14725U;
	int64_t t48 = -32136750LL;

	t48 = (((x3985>>x3986)&x3987)/x3988);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x3998 = 15;
	int8_t x3999 = -1;
	static int32_t x4000 = 3997329;
	static int32_t t49 = -14495;

	t49 = (((x3997>>x3998)&x3999)/x4000);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4235 = INT32_MIN;
	uint8_t x4236 = UINT8_MAX;
	int32_t t50 = -4;

	t50 = (((x4233>>x4234)&x4235)/x4236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x4265 = 1007264U;
	volatile uint8_t x4266 = 19U;
	uint32_t x4267 = UINT32_MAX;

	t51 = (((x4265>>x4266)&x4267)/x4268);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x4270 = 2LL;
	static int64_t x4271 = INT64_MIN;
	volatile int32_t x4272 = INT32_MIN;
	volatile int64_t t52 = -1787LL;

	t52 = (((x4269>>x4270)&x4271)/x4272);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x4378 = 28U;
	volatile int64_t x4379 = INT64_MIN;

	t53 = (((x4377>>x4378)&x4379)/x4380);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x4401 = UINT16_MAX;
	int32_t x4402 = 2;
	volatile uint64_t x4403 = 1999LLU;
	volatile int32_t x4404 = 1;
	uint64_t t54 = 6412402769LLU;

	t54 = (((x4401>>x4402)&x4403)/x4404);

	if (t54 != 1999LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x4444 = 42229018LLU;
	volatile uint64_t t55 = 453113LLU;

	t55 = (((x4441>>x4442)&x4443)/x4444);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4537 = 4U;
	uint8_t x4538 = 2U;
	volatile int32_t x4539 = -1;
	uint64_t x4540 = UINT64_MAX;
	volatile uint64_t t56 = 67LLU;

	t56 = (((x4537>>x4538)&x4539)/x4540);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4552 = 56;
	static volatile int32_t t57 = -312;

	t57 = (((x4549>>x4550)&x4551)/x4552);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x4561 = 479115528006541LLU;
	volatile uint16_t x4562 = 41U;
	int8_t x4563 = -1;
	static int64_t x4564 = -86809LL;
	volatile uint64_t t58 = 485184510LLU;

	t58 = (((x4561>>x4562)&x4563)/x4564);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4654 = 0U;
	int64_t x4655 = 1542037988388323113LL;
	int32_t x4656 = INT32_MAX;

	t59 = (((x4653>>x4654)&x4655)/x4656);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x4685 = 0U;
	uint8_t x4686 = 11U;
	volatile uint64_t x4687 = 88LLU;
	int64_t x4688 = -1LL;
	uint64_t t60 = 35169395723869LLU;

	t60 = (((x4685>>x4686)&x4687)/x4688);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4693 = 6U;
	uint16_t x4694 = 2U;
	int32_t x4695 = INT32_MAX;
	int64_t x4696 = 51LL;
	volatile int64_t t61 = -1242477LL;

	t61 = (((x4693>>x4694)&x4695)/x4696);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4757 = 199618;
	int8_t x4758 = 1;
	static int32_t x4759 = -1;
	static int8_t x4760 = 6;

	t62 = (((x4757>>x4758)&x4759)/x4760);

	if (t62 != 16634) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4901 = 1341970LLU;
	int64_t x4903 = INT64_MAX;
	uint32_t x4904 = 2U;
	volatile uint64_t t63 = 17327291LLU;

	t63 = (((x4901>>x4902)&x4903)/x4904);

	if (t63 != 670985LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x5045 = 69;
	static int8_t x5046 = 0;
	uint16_t x5047 = 1U;
	uint32_t t64 = 63U;

	t64 = (((x5045>>x5046)&x5047)/x5048);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x5125 = 1U;
	int64_t x5126 = 2LL;
	int16_t x5127 = -1;
	static int64_t x5128 = INT64_MIN;
	volatile int64_t t65 = -801836777375519LL;

	t65 = (((x5125>>x5126)&x5127)/x5128);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x5137 = UINT32_MAX;
	static uint16_t x5139 = 5U;
	int64_t x5140 = 111679494908LL;

	t66 = (((x5137>>x5138)&x5139)/x5140);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x5177 = 41U;
	uint8_t x5178 = 1U;
	uint16_t x5180 = 1174U;
	volatile int32_t t67 = -14080235;

	t67 = (((x5177>>x5178)&x5179)/x5180);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x5333 = 13U;
	static uint8_t x5334 = 12U;
	int8_t x5335 = -1;
	static int64_t x5336 = INT64_MIN;

	t68 = (((x5333>>x5334)&x5335)/x5336);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x5357 = 55094950U;
	uint16_t x5358 = 0U;
	int64_t x5359 = 202244785412LL;
	uint64_t x5360 = UINT64_MAX;
	volatile uint64_t t69 = 4348874144241LLU;

	t69 = (((x5357>>x5358)&x5359)/x5360);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x5377 = 1;
	uint8_t x5378 = 21U;
	static uint8_t x5379 = UINT8_MAX;
	int8_t x5380 = 7;
	volatile int32_t t70 = -20192;

	t70 = (((x5377>>x5378)&x5379)/x5380);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5481 = 3842695U;
	static int8_t x5483 = INT8_MAX;
	int8_t x5484 = -1;

	t71 = (((x5481>>x5482)&x5483)/x5484);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x5577 = UINT8_MAX;
	static uint16_t x5578 = 6U;
	uint32_t x5579 = UINT32_MAX;
	int8_t x5580 = INT8_MIN;

	t72 = (((x5577>>x5578)&x5579)/x5580);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5793 = 0;
	volatile uint8_t x5794 = 1U;
	int32_t x5796 = -123349481;

	t73 = (((x5793>>x5794)&x5795)/x5796);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x5801 = UINT64_MAX;
	uint64_t x5803 = UINT64_MAX;
	volatile int64_t x5804 = INT64_MIN;

	t74 = (((x5801>>x5802)&x5803)/x5804);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5821 = 14U;
	volatile int8_t x5823 = INT8_MAX;
	int32_t x5824 = INT32_MAX;

	t75 = (((x5821>>x5822)&x5823)/x5824);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5833 = 485U;
	uint8_t x5834 = 0U;
	uint16_t x5835 = 16U;
	int32_t t76 = 789305825;

	t76 = (((x5833>>x5834)&x5835)/x5836);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5865 = 2595;
	uint8_t x5866 = 29U;
	int64_t x5867 = -698LL;

	t77 = (((x5865>>x5866)&x5867)/x5868);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x5965 = 56U;
	int64_t x5968 = INT64_MIN;
	volatile int64_t t78 = 373LL;

	t78 = (((x5965>>x5966)&x5967)/x5968);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x6045 = UINT32_MAX;
	volatile int32_t x6047 = -259656109;
	int8_t x6048 = INT8_MAX;

	t79 = (((x6045>>x6046)&x6047)/x6048);

	if (t79 != 31774103U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x6085 = 296;
	volatile uint8_t x6086 = 3U;
	static uint64_t t80 = 2072438456LLU;

	t80 = (((x6085>>x6086)&x6087)/x6088);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x6130 = 3;
	static int32_t x6131 = INT32_MAX;
	volatile int64_t x6132 = -1LL;
	uint64_t t81 = 32590229008LLU;

	t81 = (((x6129>>x6130)&x6131)/x6132);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x6173 = 16456523U;
	uint8_t x6174 = 1U;
	uint8_t x6175 = 0U;
	volatile int32_t x6176 = INT32_MAX;
	volatile uint32_t t82 = 8628749U;

	t82 = (((x6173>>x6174)&x6175)/x6176);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x6178 = 0LLU;
	int16_t x6179 = -1;
	int8_t x6180 = INT8_MIN;
	volatile int32_t t83 = 2;

	t83 = (((x6177>>x6178)&x6179)/x6180);

	if (t83 != -16777215) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x6266 = 2LLU;
	int32_t x6268 = -1;
	volatile int64_t t84 = -32740012LL;

	t84 = (((x6265>>x6266)&x6267)/x6268);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x6277 = 2U;
	static int16_t x6278 = 1;
	static int8_t x6279 = -2;
	uint64_t x6280 = 487418705202LLU;
	static volatile uint64_t t85 = 11035LLU;

	t85 = (((x6277>>x6278)&x6279)/x6280);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6333 = 15;
	static int8_t x6334 = 9;
	static volatile uint16_t x6335 = UINT16_MAX;

	t86 = (((x6333>>x6334)&x6335)/x6336);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x6361 = 0U;
	volatile int16_t x6363 = 1;
	uint16_t x6364 = UINT16_MAX;
	uint32_t t87 = 32311763U;

	t87 = (((x6361>>x6362)&x6363)/x6364);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x6389 = UINT8_MAX;
	int32_t x6391 = -2236;
	volatile int64_t x6392 = 7551151898695LL;

	t88 = (((x6389>>x6390)&x6391)/x6392);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x6441 = UINT8_MAX;
	int32_t x6443 = INT32_MIN;
	volatile uint32_t x6444 = UINT32_MAX;
	static volatile uint32_t t89 = 55947649U;

	t89 = (((x6441>>x6442)&x6443)/x6444);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x6445 = 1254443391097994LL;
	static uint64_t x6447 = 864LLU;
	int32_t x6448 = -1348046;
	static uint64_t t90 = 4127091458170187558LLU;

	t90 = (((x6445>>x6446)&x6447)/x6448);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6464 = INT64_MIN;

	t91 = (((x6461>>x6462)&x6463)/x6464);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6478 = 3;
	int32_t x6479 = 7;
	int32_t x6480 = INT32_MIN;
	volatile int32_t t92 = 120599;

	t92 = (((x6477>>x6478)&x6479)/x6480);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x6509 = INT8_MAX;
	static volatile uint8_t x6510 = 4U;
	volatile int32_t x6511 = 106662696;
	int16_t x6512 = -3;
	volatile int32_t t93 = -1977253;

	t93 = (((x6509>>x6510)&x6511)/x6512);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6594 = 7;
	int16_t x6595 = -9410;
	volatile int32_t x6596 = -1;
	static int32_t t94 = -20;

	t94 = (((x6593>>x6594)&x6595)/x6596);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x6721 = INT8_MAX;
	uint32_t x6722 = 3U;
	static volatile int64_t x6723 = -889037394919LL;
	static volatile int32_t x6724 = INT32_MIN;
	int64_t t95 = -2821133691486397696LL;

	t95 = (((x6721>>x6722)&x6723)/x6724);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6785 = INT16_MAX;
	uint64_t x6786 = 28LLU;
	uint32_t x6787 = 235296U;
	int8_t x6788 = INT8_MAX;
	uint32_t t96 = 7U;

	t96 = (((x6785>>x6786)&x6787)/x6788);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6799 = 1;
	volatile uint32_t t97 = 10755130U;

	t97 = (((x6797>>x6798)&x6799)/x6800);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6841 = 3U;
	uint8_t x6842 = 14U;
	volatile int16_t x6843 = INT16_MAX;
	int32_t x6844 = -605591702;
	static volatile uint32_t t98 = 129028837U;

	t98 = (((x6841>>x6842)&x6843)/x6844);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6889 = UINT16_MAX;
	volatile int8_t x6891 = -45;
	uint8_t x6892 = 47U;
	int32_t t99 = -171;

	t99 = (((x6889>>x6890)&x6891)/x6892);

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

