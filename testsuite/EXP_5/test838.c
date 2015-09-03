#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x79 = UINT32_MAX;
uint32_t x80 = UINT32_MAX;
static uint16_t x169 = 22623U;
static int32_t x170 = INT32_MIN;
int16_t x210 = -3;
int64_t t6 = 1128333621596238999LL;
uint8_t x286 = 0U;
uint8_t x288 = 0U;
int32_t x449 = INT32_MAX;
static int8_t x485 = 8;
uint16_t x513 = 9U;
uint8_t x521 = UINT8_MAX;
int32_t x554 = -1;
int16_t x594 = -1;
static int32_t t14 = 44;
uint32_t x629 = 401U;
volatile int8_t x630 = 0;
uint32_t x632 = 0U;
volatile uint32_t t15 = 74U;
uint8_t x757 = UINT8_MAX;
int8_t x758 = 2;
int32_t t16 = 25;
uint8_t x790 = 13U;
uint16_t x796 = 8U;
int8_t x971 = INT8_MIN;
int64_t x1435 = 52761184036583LL;
static int64_t x1643 = INT64_MIN;
int32_t t27 = -744006;
uint64_t x1836 = 0LLU;
int8_t x1846 = INT8_MIN;
int8_t x1847 = -3;
volatile uint16_t x2037 = UINT16_MAX;
int8_t x2040 = -1;
static int32_t x2147 = -106095;
static int16_t x2244 = 1;
int16_t x2290 = INT16_MIN;
int64_t x2544 = -1LL;
uint64_t x2548 = UINT64_MAX;
int64_t x2825 = 112161663099113223LL;
int8_t x2826 = 2;
uint64_t t42 = 1LLU;
static int16_t x3251 = INT16_MAX;
static int32_t t48 = -89585;
static volatile uint64_t x3529 = UINT64_MAX;
int64_t x3530 = -1LL;
static uint64_t t49 = UINT64_MAX;
static uint64_t x3545 = 3172063LLU;
int8_t x3548 = -1;
uint64_t x3649 = UINT64_MAX;
static int8_t x3652 = -1;
int8_t x3699 = INT8_MIN;
static uint8_t x3700 = 0U;
volatile uint64_t t53 = 30133LLU;
static uint8_t x4002 = 0U;
volatile int64_t x4025 = 170LL;
uint64_t x4085 = UINT64_MAX;
uint32_t x4133 = 174174U;
static int32_t x4135 = INT32_MIN;
int16_t x4151 = 21;
volatile uint32_t t60 = 30U;
volatile int32_t x4589 = 502399;
int64_t x4591 = -1LL;
uint32_t x4592 = 0U;
int32_t t63 = 83;
static int32_t x4610 = -1;
uint32_t x4612 = UINT32_MAX;
volatile int32_t t64 = 127;
uint64_t x4641 = 0LLU;
uint64_t t65 = 6311096434247411525LLU;
int8_t x4699 = 1;
int32_t x4824 = -1;
static int64_t x5134 = INT64_MIN;
uint32_t x5185 = 1384319928U;
int32_t x5238 = -1;
int32_t x5240 = -1;
uint64_t x5373 = UINT64_MAX;
int16_t x5375 = INT16_MIN;
static int32_t t74 = 1;
uint8_t x5405 = 53U;
uint8_t x5504 = 29U;
int16_t x5611 = 10;
volatile uint64_t t77 = 19278236LLU;
volatile uint32_t t79 = 817338U;


void f0(void) {
	uint64_t x37 = 25LLU;
	int64_t x38 = INT64_MIN;
	static int16_t x39 = -81;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t0 = 2LLU;

	t0 = (x37<<((x38%x39)^x40));

	if (t0 != 838860800LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x77 = 5U;
	int8_t x78 = -24;
	volatile int32_t t1 = 8059519;

	t1 = (x77<<((x78%x79)^x80));

	if (t1 != 41943040) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x171 = 2LLU;
	uint8_t x172 = 8U;
	int32_t t2 = -44;

	t2 = (x169<<((x170%x171)^x172));

	if (t2 != 5791488) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x209 = 228425LL;
	static uint16_t x211 = 15U;
	uint32_t x212 = UINT32_MAX;
	int64_t t3 = 5426834807728724LL;

	t3 = (x209<<((x210%x211)^x212));

	if (t3 != 913700LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x221 = 4;
	volatile int64_t x222 = -1LL;
	uint64_t x223 = UINT64_MAX;
	static int8_t x224 = 16;
	volatile int32_t t4 = -49;

	t4 = (x221<<((x222%x223)^x224));

	if (t4 != 262144) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	static int64_t x231 = 1873LL;
	int8_t x232 = INT8_MIN;
	uint32_t t5 = UINT32_MAX;

	t5 = (x229<<((x230%x231)^x232));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x281 = 10761334LL;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;

	t6 = (x281<<((x282%x283)^x284));

	if (t6 != 10761334LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile uint64_t x287 = 35LLU;
	uint32_t t7 = UINT32_MAX;

	t7 = (x285<<((x286%x287)^x288));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x373 = 1LL;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = -1;
	int64_t t8 = 0LL;

	t8 = (x373<<((x374%x375)^x376));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x450 = 1U;
	uint32_t x451 = UINT32_MAX;
	static int8_t x452 = 1;
	static int32_t t9 = INT32_MAX;

	t9 = (x449<<((x450%x451)^x452));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x486 = 12;
	volatile int8_t x487 = 3;
	uint8_t x488 = 0U;
	int32_t t10 = 8205;

	t10 = (x485<<((x486%x487)^x488));

	if (t10 != 8) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x514 = 16U;
	int8_t x515 = -1;
	volatile uint16_t x516 = 20U;
	volatile int32_t t11 = -1;

	t11 = (x513<<((x514%x515)^x516));

	if (t11 != 9437184) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x522 = INT32_MIN;
	static int8_t x523 = -1;
	int8_t x524 = 1;
	int32_t t12 = -6075018;

	t12 = (x521<<((x522%x523)^x524));

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x553 = 3503735883083249711LL;
	static uint8_t x555 = 3U;
	volatile int16_t x556 = -1;
	int64_t t13 = -35246079LL;

	t13 = (x553<<((x554%x555)^x556));

	if (t13 != 3503735883083249711LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x593 = 5U;
	int32_t x595 = -1;
	uint8_t x596 = 0U;

	t14 = (x593<<((x594%x595)^x596));

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x631 = INT32_MIN;

	t15 = (x629<<((x630%x631)^x632));

	if (t15 != 401U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x759 = INT16_MIN;
	uint16_t x760 = 2U;

	t16 = (x757<<((x758%x759)^x760));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x789 = 692409138LL;
	volatile int8_t x791 = -1;
	static uint64_t x792 = 2LLU;
	int64_t t17 = -4LL;

	t17 = (x789<<((x790%x791)^x792));

	if (t17 != 2769636552LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x793 = 57U;
	int32_t x794 = INT32_MIN;
	uint32_t x795 = 27U;
	volatile int32_t t18 = 235161357;

	t18 = (x793<<((x794%x795)^x796));

	if (t18 != 456) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x873 = INT8_MAX;
	uint32_t x874 = UINT32_MAX;
	volatile int16_t x875 = -1;
	volatile uint16_t x876 = 24U;
	int32_t t19 = 14;

	t19 = (x873<<((x874%x875)^x876));

	if (t19 != 2130706432) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x969 = UINT32_MAX;
	volatile int16_t x970 = INT16_MIN;
	uint8_t x972 = 2U;
	uint32_t t20 = 674795U;

	t20 = (x969<<((x970%x971)^x972));

	if (t20 != 4294967292U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1029 = 3U;
	volatile uint32_t x1030 = UINT32_MAX;
	static int16_t x1031 = 17;
	int8_t x1032 = 8;
	int32_t t21 = -6485;

	t21 = (x1029<<((x1030%x1031)^x1032));

	if (t21 != 768) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1121 = 1018U;
	uint8_t x1122 = 0U;
	uint64_t x1123 = 57133912112120LLU;
	volatile uint16_t x1124 = 24U;
	static volatile uint32_t t22 = 944U;

	t22 = (x1121<<((x1122%x1123)^x1124));

	if (t22 != 4194304000U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1285 = UINT8_MAX;
	static int32_t x1286 = INT32_MIN;
	uint32_t x1287 = UINT32_MAX;
	volatile int32_t x1288 = INT32_MIN;
	volatile int32_t t23 = 362;

	t23 = (x1285<<((x1286%x1287)^x1288));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1353 = UINT8_MAX;
	uint32_t x1354 = 22U;
	static int32_t x1355 = INT32_MAX;
	int8_t x1356 = 0;
	volatile int32_t t24 = 0;

	t24 = (x1353<<((x1354%x1355)^x1356));

	if (t24 != 1069547520) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1433 = 11910U;
	int8_t x1434 = INT8_MIN;
	static volatile int8_t x1436 = INT8_MIN;
	uint32_t t25 = 1U;

	t25 = (x1433<<((x1434%x1435)^x1436));

	if (t25 != 11910U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1641 = 1;
	static int16_t x1642 = -1;
	uint64_t x1644 = UINT64_MAX;
	static int32_t t26 = 36906;

	t26 = (x1641<<((x1642%x1643)^x1644));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1805 = 1420;
	static int32_t x1806 = INT32_MIN;
	volatile int64_t x1807 = -125739959053309LL;
	volatile int32_t x1808 = INT32_MIN;

	t27 = (x1805<<((x1806%x1807)^x1808));

	if (t27 != 1420) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1833 = INT64_MAX;
	static volatile int32_t x1834 = INT32_MIN;
	int8_t x1835 = INT8_MIN;
	int64_t t28 = INT64_MAX;

	t28 = (x1833<<((x1834%x1835)^x1836));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1845 = 895657524;
	int8_t x1848 = -1;
	int32_t t29 = 201;

	t29 = (x1845<<((x1846%x1847)^x1848));

	if (t29 != 1791315048) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x2001 = 5;
	int64_t x2002 = INT64_MIN;
	int16_t x2003 = -1;
	int8_t x2004 = 15;
	static volatile int32_t t30 = -1;

	t30 = (x2001<<((x2002%x2003)^x2004));

	if (t30 != 163840) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x2038 = -1;
	volatile uint16_t x2039 = UINT16_MAX;
	volatile int32_t t31 = -1;

	t31 = (x2037<<((x2038%x2039)^x2040));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x2129 = UINT64_MAX;
	static volatile int8_t x2130 = -1;
	volatile int64_t x2131 = -1LL;
	int8_t x2132 = 32;
	uint64_t t32 = 313717LLU;

	t32 = (x2129<<((x2130%x2131)^x2132));

	if (t32 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2145 = UINT16_MAX;
	int32_t x2146 = -1;
	uint64_t x2148 = UINT64_MAX;
	int32_t t33 = 5;

	t33 = (x2145<<((x2146%x2147)^x2148));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x2241 = 251688973LLU;
	static uint16_t x2242 = UINT16_MAX;
	int32_t x2243 = -1;
	volatile uint64_t t34 = 1888373LLU;

	t34 = (x2241<<((x2242%x2243)^x2244));

	if (t34 != 503377946LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2289 = 10;
	static int8_t x2291 = INT8_MIN;
	static volatile int16_t x2292 = 7;
	static int32_t t35 = -102701324;

	t35 = (x2289<<((x2290%x2291)^x2292));

	if (t35 != 1280) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2461 = 1;
	uint16_t x2462 = 1U;
	int32_t x2463 = -499604617;
	static uint8_t x2464 = 1U;
	static volatile int32_t t36 = 361460;

	t36 = (x2461<<((x2462%x2463)^x2464));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2541 = 7006U;
	static volatile int32_t x2542 = -1;
	int16_t x2543 = 81;
	static int32_t t37 = 3927;

	t37 = (x2541<<((x2542%x2543)^x2544));

	if (t37 != 7006) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x2545 = 1U;
	int8_t x2546 = -1;
	volatile int32_t x2547 = -183;
	uint32_t t38 = 8030954U;

	t38 = (x2545<<((x2546%x2547)^x2548));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2701 = 88U;
	volatile int64_t x2702 = INT64_MIN;
	static int8_t x2703 = INT8_MAX;
	static int32_t x2704 = -1;
	int32_t t39 = 0;

	t39 = (x2701<<((x2702%x2703)^x2704));

	if (t39 != 88) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2827 = INT8_MIN;
	uint16_t x2828 = 2U;
	int64_t t40 = -31151590595850LL;

	t40 = (x2825<<((x2826%x2827)^x2828));

	if (t40 != 112161663099113223LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2873 = UINT64_MAX;
	int64_t x2874 = -1LL;
	int64_t x2875 = INT64_MAX;
	int8_t x2876 = -37;
	volatile uint64_t t41 = 1400200024196753194LLU;

	t41 = (x2873<<((x2874%x2875)^x2876));

	if (t41 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2973 = 9952022561229222LLU;
	int16_t x2974 = INT16_MIN;
	int64_t x2975 = -7185124553396754LL;
	static int16_t x2976 = INT16_MIN;

	t42 = (x2973<<((x2974%x2975)^x2976));

	if (t42 != 9952022561229222LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x3001 = UINT8_MAX;
	int8_t x3002 = INT8_MIN;
	int64_t x3003 = INT64_MIN;
	int8_t x3004 = INT8_MIN;
	volatile int32_t t43 = 20383;

	t43 = (x3001<<((x3002%x3003)^x3004));

	if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x3117 = 2062U;
	volatile uint64_t x3118 = UINT64_MAX;
	volatile uint8_t x3119 = 16U;
	int32_t x3120 = 1;
	volatile uint32_t t44 = 4U;

	t44 = (x3117<<((x3118%x3119)^x3120));

	if (t44 != 33783808U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3161 = INT64_MAX;
	volatile int64_t x3162 = -1LL;
	int64_t x3163 = -1LL;
	uint8_t x3164 = 0U;
	int64_t t45 = INT64_MAX;

	t45 = (x3161<<((x3162%x3163)^x3164));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3249 = INT8_MAX;
	static int64_t x3250 = -1LL;
	int16_t x3252 = -16;
	int32_t t46 = 1;

	t46 = (x3249<<((x3250%x3251)^x3252));

	if (t46 != 4161536) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3373 = 107357729LLU;
	volatile uint8_t x3374 = 7U;
	static int16_t x3375 = -1;
	int8_t x3376 = 2;
	uint64_t t47 = 588014756550569LLU;

	t47 = (x3373<<((x3374%x3375)^x3376));

	if (t47 != 429430916LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3497 = 26;
	int16_t x3498 = -1;
	uint64_t x3499 = UINT64_MAX;
	volatile int8_t x3500 = 0;

	t48 = (x3497<<((x3498%x3499)^x3500));

	if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3531 = UINT8_MAX;
	uint64_t x3532 = UINT64_MAX;

	t49 = (x3529<<((x3530%x3531)^x3532));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x3546 = -1;
	int16_t x3547 = INT16_MIN;
	uint64_t t50 = 10120518622260LLU;

	t50 = (x3545<<((x3546%x3547)^x3548));

	if (t50 != 3172063LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3650 = -1;
	int8_t x3651 = 7;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = (x3649<<((x3650%x3651)^x3652));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3697 = 1504787U;
	int8_t x3698 = INT8_MIN;
	volatile uint32_t t52 = 17U;

	t52 = (x3697<<((x3698%x3699)^x3700));

	if (t52 != 1504787U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3929 = 15932375661879LLU;
	int32_t x3930 = -6619;
	uint8_t x3931 = 61U;
	int64_t x3932 = -1LL;

	t53 = (x3929<<((x3930%x3931)^x3932));

	if (t53 != 7126347510410379264LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x4001 = 10669U;
	uint64_t x4003 = UINT64_MAX;
	int16_t x4004 = 0;
	uint32_t t54 = 2U;

	t54 = (x4001<<((x4002%x4003)^x4004));

	if (t54 != 10669U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4021 = INT16_MAX;
	int16_t x4022 = -1;
	int8_t x4023 = INT8_MIN;
	int32_t x4024 = -1;
	static int32_t t55 = -31309539;

	t55 = (x4021<<((x4022%x4023)^x4024));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x4026 = -1LL;
	uint16_t x4027 = UINT16_MAX;
	volatile int16_t x4028 = -1;
	volatile int64_t t56 = -648LL;

	t56 = (x4025<<((x4026%x4027)^x4028));

	if (t56 != 170LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4086 = 4U;
	volatile int64_t x4087 = -781887946371392131LL;
	int8_t x4088 = 0;
	volatile uint64_t t57 = 882710265739LLU;

	t57 = (x4085<<((x4086%x4087)^x4088));

	if (t57 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4134 = 28;
	int8_t x4136 = 1;
	static uint32_t t58 = 57U;

	t58 = (x4133<<((x4134%x4135)^x4136));

	if (t58 != 3221225472U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4149 = 199U;
	uint32_t x4150 = 1235536344U;
	static int8_t x4152 = 23;
	int32_t t59 = 27;

	t59 = (x4149<<((x4150%x4151)^x4152));

	if (t59 != 1669332992) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x4169 = 1212215U;
	int64_t x4170 = INT64_MIN;
	volatile int32_t x4171 = INT32_MAX;
	int32_t x4172 = -1;

	t60 = (x4169<<((x4170%x4171)^x4172));

	if (t60 != 2424430U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x4193 = UINT64_MAX;
	uint16_t x4194 = 833U;
	int8_t x4195 = -1;
	static int8_t x4196 = 1;
	volatile uint64_t t61 = 28153997651620LLU;

	t61 = (x4193<<((x4194%x4195)^x4196));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x4329 = 1U;
	volatile int16_t x4330 = INT16_MAX;
	int16_t x4331 = -1;
	int8_t x4332 = 1;
	static volatile int32_t t62 = 31063266;

	t62 = (x4329<<((x4330%x4331)^x4332));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4590 = INT32_MIN;

	t63 = (x4589<<((x4590%x4591)^x4592));

	if (t63 != 502399) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4609 = 3;
	int16_t x4611 = INT16_MIN;

	t64 = (x4609<<((x4610%x4611)^x4612));

	if (t64 != 3) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4642 = INT64_MIN;
	uint8_t x4643 = 23U;
	int32_t x4644 = -1;

	t65 = (x4641<<((x4642%x4643)^x4644));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4697 = UINT16_MAX;
	volatile uint8_t x4698 = 108U;
	int8_t x4700 = 1;
	int32_t t66 = 8776866;

	t66 = (x4697<<((x4698%x4699)^x4700));

	if (t66 != 131070) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4821 = 5U;
	static int32_t x4822 = INT32_MIN;
	int8_t x4823 = INT8_MAX;
	static volatile int32_t t67 = -3779383;

	t67 = (x4821<<((x4822%x4823)^x4824));

	if (t67 != 640) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5057 = 1;
	uint16_t x5058 = 0U;
	uint64_t x5059 = 100LLU;
	uint8_t x5060 = 1U;
	volatile int32_t t68 = -13779;

	t68 = (x5057<<((x5058%x5059)^x5060));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x5101 = INT64_MAX;
	volatile int64_t x5102 = -1LL;
	int64_t x5103 = INT64_MIN;
	int8_t x5104 = -1;
	int64_t t69 = INT64_MAX;

	t69 = (x5101<<((x5102%x5103)^x5104));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x5133 = INT16_MAX;
	int32_t x5135 = INT32_MIN;
	uint8_t x5136 = 16U;
	volatile int32_t t70 = 28;

	t70 = (x5133<<((x5134%x5135)^x5136));

	if (t70 != 2147418112) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5186 = -1LL;
	int8_t x5187 = 25;
	int32_t x5188 = -3;
	uint32_t t71 = 1858422625U;

	t71 = (x5185<<((x5186%x5187)^x5188));

	if (t71 != 1242312416U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5237 = 18;
	int32_t x5239 = 24440405;
	static int32_t t72 = 3316475;

	t72 = (x5237<<((x5238%x5239)^x5240));

	if (t72 != 18) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x5374 = INT32_MIN;
	uint8_t x5376 = 2U;
	uint64_t t73 = 2425106141LLU;

	t73 = (x5373<<((x5374%x5375)^x5376));

	if (t73 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x5397 = 13004U;
	uint64_t x5398 = 3LLU;
	int8_t x5399 = -9;
	int8_t x5400 = 0;

	t74 = (x5397<<((x5398%x5399)^x5400));

	if (t74 != 104032) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5406 = INT64_MAX;
	static int8_t x5407 = -30;
	uint8_t x5408 = 0U;
	static volatile int32_t t75 = 174;

	t75 = (x5405<<((x5406%x5407)^x5408));

	if (t75 != 6784) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5501 = 260U;
	int8_t x5502 = 0;
	static int32_t x5503 = INT32_MIN;
	static uint32_t t76 = 35U;

	t76 = (x5501<<((x5502%x5503)^x5504));

	if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x5609 = 76404276798LLU;
	int32_t x5610 = -2;
	int8_t x5612 = -63;

	t77 = (x5609<<((x5610%x5611)^x5612));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x5645 = UINT16_MAX;
	uint32_t x5646 = UINT32_MAX;
	int64_t x5647 = -1LL;
	uint8_t x5648 = 11U;
	static volatile int32_t t78 = 1;

	t78 = (x5645<<((x5646%x5647)^x5648));

	if (t78 != 134215680) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5869 = UINT32_MAX;
	int16_t x5870 = 2;
	static int64_t x5871 = INT64_MIN;
	static int32_t x5872 = 1;

	t79 = (x5869<<((x5870%x5871)^x5872));

	if (t79 != 4294967288U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x6077 = 64966944977031LLU;
	int64_t x6078 = -1LL;
	int64_t x6079 = 42119895686271LL;
	int64_t x6080 = -4LL;
	static uint64_t t80 = 3155865487LLU;

	t80 = (x6077<<((x6078%x6079)^x6080));

	if (t80 != 519735559816248LLU) { NG(); } else { ; }
	
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


    return 0;
}

