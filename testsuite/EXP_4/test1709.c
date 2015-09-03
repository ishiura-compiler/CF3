#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x355 = INT64_MIN;
static volatile uint8_t x422 = 9U;
int64_t x727 = -1LL;
static volatile uint64_t t4 = 3672461LLU;
static int16_t x747 = -1;
int32_t x1176 = INT32_MIN;
uint32_t t9 = UINT32_MAX;
uint16_t x1261 = UINT16_MAX;
int8_t x1264 = INT8_MAX;
int16_t x1425 = INT16_MAX;
volatile int32_t t11 = 181939;
int16_t x1439 = -1;
static volatile int64_t x1440 = -1LL;
volatile int32_t x1593 = 56972;
int16_t x1712 = -1;
static int16_t x1764 = INT16_MIN;
volatile uint64_t t17 = UINT64_MAX;
uint8_t x1773 = 13U;
volatile int64_t x1776 = -7LL;
static uint8_t x1966 = 13U;
int16_t x1968 = 321;
static volatile uint32_t t19 = 56048089U;
static int16_t x2047 = INT16_MIN;
uint8_t x2048 = 1U;
static int8_t x2210 = 1;
uint16_t x2211 = 1U;
static uint32_t x2597 = 977669U;
static int16_t x2600 = -3;
volatile uint32_t t23 = 10788U;
static uint16_t x2701 = 321U;
uint16_t x3313 = UINT16_MAX;
int64_t x3316 = -1LL;
static volatile int16_t x3393 = 425;
int16_t x3462 = INT16_MIN;
int16_t x3555 = INT16_MAX;
int16_t x3556 = INT16_MIN;
uint16_t x3757 = 232U;
int16_t x3759 = -1;
int32_t x3760 = -1;
int32_t t32 = -2090;
static int64_t x3899 = INT64_MAX;
static int64_t t34 = INT64_MAX;
int32_t x3901 = 11536;
volatile uint16_t x4141 = UINT16_MAX;
volatile uint32_t t42 = UINT32_MAX;
volatile uint16_t x5039 = UINT16_MAX;
uint32_t x5077 = 1272777U;
static uint32_t x5078 = UINT32_MAX;
uint16_t x5197 = 53U;
int16_t x5316 = 111;
volatile uint64_t x5557 = UINT64_MAX;
volatile int8_t x5598 = -1;
int8_t x5600 = -11;
uint32_t x5796 = 157804845U;
int64_t x5874 = INT64_MIN;
int64_t x5876 = INT64_MIN;
static int64_t x5899 = 183305LL;
volatile int32_t t54 = 1;
static int8_t x6125 = INT8_MAX;
uint16_t x6290 = 15U;
int64_t x6291 = INT64_MIN;


void f0(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = 5;
	volatile uint64_t x356 = 3111618801274LLU;
	static int32_t t0 = -136822;

	t0 = (x353<<(x354-(x355&x356)));

	if (t0 != 8160) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x421 = 1646165587U;
	int8_t x423 = -1;
	uint16_t x424 = 2U;
	volatile uint32_t t1 = 128U;

	t1 = (x421<<(x422-(x423&x424)));

	if (t1 != 255797632U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x529 = 891026LLU;
	int8_t x530 = 1;
	static int8_t x531 = 1;
	int16_t x532 = INT16_MIN;
	volatile uint64_t t2 = 28797542069LLU;

	t2 = (x529<<(x530-(x531&x532)));

	if (t2 != 1782052LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x585 = UINT16_MAX;
	uint16_t x586 = 1U;
	int8_t x587 = 7;
	static int32_t x588 = 454712;
	volatile int32_t t3 = 0;

	t3 = (x585<<(x586-(x587&x588)));

	if (t3 != 131070) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x725 = UINT64_MAX;
	int32_t x726 = -2;
	int32_t x728 = -5;

	t4 = (x725<<(x726-(x727&x728)));

	if (t4 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x745 = 63;
	int8_t x746 = INT8_MIN;
	int8_t x748 = INT8_MIN;
	volatile int32_t t5 = 7606183;

	t5 = (x745<<(x746-(x747&x748)));

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x777 = 30U;
	uint8_t x778 = 10U;
	uint8_t x779 = 12U;
	int32_t x780 = 0;
	volatile int32_t t6 = 50355;

	t6 = (x777<<(x778-(x779&x780)));

	if (t6 != 30720) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x841 = 446905557962LLU;
	volatile int16_t x842 = 2;
	volatile int32_t x843 = 6444;
	static volatile int8_t x844 = 0;
	uint64_t t7 = 138513701371859LLU;

	t7 = (x841<<(x842-(x843&x844)));

	if (t7 != 1787622231848LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x961 = UINT16_MAX;
	volatile int16_t x962 = INT16_MIN;
	static int16_t x963 = INT16_MIN;
	uint64_t x964 = UINT64_MAX;
	int32_t t8 = -3514807;

	t8 = (x961<<(x962-(x963&x964)));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1173 = UINT32_MAX;
	int8_t x1174 = 0;
	int16_t x1175 = 0;

	t9 = (x1173<<(x1174-(x1175&x1176)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1262 = 1U;
	int32_t x1263 = INT32_MIN;
	int32_t t10 = 14;

	t10 = (x1261<<(x1262-(x1263&x1264)));

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x1426 = 5U;
	uint16_t x1427 = 4U;
	uint64_t x1428 = 265949570LLU;

	t11 = (x1425<<(x1426-(x1427&x1428)));

	if (t11 != 1048544) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1437 = 5U;
	int8_t x1438 = 15;
	uint32_t t12 = 83115U;

	t12 = (x1437<<(x1438-(x1439&x1440)));

	if (t12 != 327680U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1493 = UINT32_MAX;
	static int8_t x1494 = 12;
	int8_t x1495 = INT8_MIN;
	int8_t x1496 = 1;
	static volatile uint32_t t13 = 178542U;

	t13 = (x1493<<(x1494-(x1495&x1496)));

	if (t13 != 4294963200U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x1497 = 702U;
	int8_t x1498 = 20;
	int16_t x1499 = 11;
	volatile int64_t x1500 = 14LL;
	volatile int32_t t14 = 0;

	t14 = (x1497<<(x1498-(x1499&x1500)));

	if (t14 != 718848) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1594 = 13U;
	uint16_t x1595 = 5U;
	volatile uint8_t x1596 = UINT8_MAX;
	int32_t t15 = -314353305;

	t15 = (x1593<<(x1594-(x1595&x1596)));

	if (t15 != 14584832) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1709 = UINT64_MAX;
	uint8_t x1710 = 33U;
	uint32_t x1711 = 30U;
	volatile uint64_t t16 = 1593559141LLU;

	t16 = (x1709<<(x1710-(x1711&x1712)));

	if (t16 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1761 = UINT64_MAX;
	int16_t x1762 = INT16_MIN;
	int16_t x1763 = INT16_MIN;

	t17 = (x1761<<(x1762-(x1763&x1764)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1774 = UINT32_MAX;
	uint32_t x1775 = UINT32_MAX;
	static volatile int32_t t18 = -74803625;

	t18 = (x1773<<(x1774-(x1775&x1776)));

	if (t18 != 832) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1965 = 106U;
	int64_t x1967 = 0LL;

	t19 = (x1965<<(x1966-(x1967&x1968)));

	if (t19 != 868352U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x2045 = 20U;
	int32_t x2046 = 23;
	static volatile int32_t t20 = 148;

	t20 = (x2045<<(x2046-(x2047&x2048)));

	if (t20 != 167772160) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x2161 = UINT64_MAX;
	int8_t x2162 = 26;
	static volatile int8_t x2163 = INT8_MIN;
	uint8_t x2164 = 1U;
	uint64_t t21 = 37LLU;

	t21 = (x2161<<(x2162-(x2163&x2164)));

	if (t21 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x2209 = 124U;
	int32_t x2212 = INT32_MIN;
	static volatile int32_t t22 = 2868;

	t22 = (x2209<<(x2210-(x2211&x2212)));

	if (t22 != 248) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2598 = -1;
	int8_t x2599 = -16;

	t23 = (x2597<<(x2598-(x2599&x2600)));

	if (t23 != 1971486720U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2702 = 1U;
	int16_t x2703 = 7973;
	volatile int8_t x2704 = 1;
	static volatile int32_t t24 = 6147781;

	t24 = (x2701<<(x2702-(x2703&x2704)));

	if (t24 != 321) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2837 = UINT32_MAX;
	uint32_t x2838 = 7U;
	volatile int32_t x2839 = INT32_MIN;
	uint16_t x2840 = UINT16_MAX;
	volatile uint32_t t25 = 1221668U;

	t25 = (x2837<<(x2838-(x2839&x2840)));

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x3025 = 2808U;
	int16_t x3026 = 1;
	int8_t x3027 = INT8_MIN;
	uint16_t x3028 = 1U;
	static int32_t t26 = 0;

	t26 = (x3025<<(x3026-(x3027&x3028)));

	if (t26 != 5616) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x3105 = UINT8_MAX;
	uint16_t x3106 = 1U;
	int16_t x3107 = INT16_MIN;
	uint32_t x3108 = 351U;
	static volatile int32_t t27 = -47282824;

	t27 = (x3105<<(x3106-(x3107&x3108)));

	if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x3314 = -1;
	volatile uint64_t x3315 = UINT64_MAX;
	int32_t t28 = 29803440;

	t28 = (x3313<<(x3314-(x3315&x3316)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x3394 = 2U;
	int32_t x3395 = INT32_MIN;
	static int16_t x3396 = INT16_MAX;
	static int32_t t29 = -12466;

	t29 = (x3393<<(x3394-(x3395&x3396)));

	if (t29 != 1700) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x3461 = 2588280LL;
	static volatile uint64_t x3463 = UINT64_MAX;
	static int16_t x3464 = INT16_MIN;
	volatile int64_t t30 = -298839723782350LL;

	t30 = (x3461<<(x3462-(x3463&x3464)));

	if (t30 != 2588280LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x3553 = UINT16_MAX;
	int16_t x3554 = 3;
	int32_t t31 = -6457;

	t31 = (x3553<<(x3554-(x3555&x3556)));

	if (t31 != 524280) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x3758 = -1;

	t32 = (x3757<<(x3758-(x3759&x3760)));

	if (t32 != 232) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x3881 = 1U;
	int8_t x3882 = 28;
	int16_t x3883 = -1;
	uint32_t x3884 = UINT32_MAX;
	int32_t t33 = -2460846;

	t33 = (x3881<<(x3882-(x3883&x3884)));

	if (t33 != 536870912) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x3897 = INT64_MAX;
	int64_t x3898 = INT64_MAX;
	int64_t x3900 = INT64_MAX;

	t34 = (x3897<<(x3898-(x3899&x3900)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x3902 = 12U;
	int64_t x3903 = -1LL;
	uint16_t x3904 = 9U;
	static int32_t t35 = 25877129;

	t35 = (x3901<<(x3902-(x3903&x3904)));

	if (t35 != 92288) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x4142 = INT64_MIN;
	static int64_t x4143 = INT64_MIN;
	int16_t x4144 = -2161;
	volatile int32_t t36 = 43365;

	t36 = (x4141<<(x4142-(x4143&x4144)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x4169 = 1;
	uint16_t x4170 = UINT16_MAX;
	static uint32_t x4171 = UINT32_MAX;
	uint16_t x4172 = UINT16_MAX;
	volatile int32_t t37 = -1;

	t37 = (x4169<<(x4170-(x4171&x4172)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x4201 = 135911919850934335LLU;
	uint32_t x4202 = UINT32_MAX;
	uint32_t x4203 = UINT32_MAX;
	static int64_t x4204 = -1LL;
	uint64_t t38 = 14LLU;

	t38 = (x4201<<(x4202-(x4203&x4204)));

	if (t38 != 135911919850934335LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x4217 = 839812759U;
	volatile uint16_t x4218 = 30U;
	int32_t x4219 = INT32_MIN;
	uint64_t x4220 = 31LLU;
	uint32_t t39 = 15644546U;

	t39 = (x4217<<(x4218-(x4219&x4220)));

	if (t39 != 3221225472U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x4401 = INT32_MAX;
	static int32_t x4402 = INT32_MIN;
	volatile int32_t x4403 = INT32_MIN;
	int32_t x4404 = -1;
	volatile int32_t t40 = INT32_MAX;

	t40 = (x4401<<(x4402-(x4403&x4404)));

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x4493 = UINT16_MAX;
	uint8_t x4494 = 20U;
	uint64_t x4495 = 2427734552576351LLU;
	int8_t x4496 = 6;
	volatile int32_t t41 = -5;

	t41 = (x4493<<(x4494-(x4495&x4496)));

	if (t41 != 1073725440) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x4801 = UINT32_MAX;
	volatile uint32_t x4802 = 0U;
	int16_t x4803 = INT16_MIN;
	int8_t x4804 = INT8_MAX;

	t42 = (x4801<<(x4802-(x4803&x4804)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x5037 = INT8_MAX;
	int8_t x5038 = 6;
	int32_t x5040 = INT32_MIN;
	volatile int32_t t43 = -240156418;

	t43 = (x5037<<(x5038-(x5039&x5040)));

	if (t43 != 8128) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x5079 = UINT32_MAX;
	static volatile int64_t x5080 = -1LL;
	uint32_t t44 = 7746382U;

	t44 = (x5077<<(x5078-(x5079&x5080)));

	if (t44 != 1272777U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x5198 = 1;
	uint32_t x5199 = 2U;
	uint64_t x5200 = 12LLU;
	static volatile int32_t t45 = -356142177;

	t45 = (x5197<<(x5198-(x5199&x5200)));

	if (t45 != 106) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x5209 = 775277586;
	static int16_t x5210 = 0;
	int64_t x5211 = 0LL;
	int8_t x5212 = INT8_MIN;
	volatile int32_t t46 = -1123031;

	t46 = (x5209<<(x5210-(x5211&x5212)));

	if (t46 != 775277586) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x5213 = UINT32_MAX;
	int16_t x5214 = INT16_MIN;
	int16_t x5215 = -1;
	static int16_t x5216 = INT16_MIN;
	uint32_t t47 = UINT32_MAX;

	t47 = (x5213<<(x5214-(x5215&x5216)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x5313 = 57;
	static int8_t x5314 = INT8_MAX;
	int64_t x5315 = -1LL;
	volatile int32_t t48 = -1386;

	t48 = (x5313<<(x5314-(x5315&x5316)));

	if (t48 != 3735552) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x5449 = 1887U;
	uint8_t x5450 = 6U;
	volatile uint32_t x5451 = 123451988U;
	static int64_t x5452 = INT64_MIN;
	volatile int32_t t49 = 7656347;

	t49 = (x5449<<(x5450-(x5451&x5452)));

	if (t49 != 120768) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x5558 = INT8_MIN;
	volatile int8_t x5559 = INT8_MIN;
	volatile int8_t x5560 = INT8_MIN;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x5557<<(x5558-(x5559&x5560)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x5597 = 124U;
	static int64_t x5599 = -1LL;
	volatile uint32_t t51 = 430U;

	t51 = (x5597<<(x5598-(x5599&x5600)));

	if (t51 != 126976U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x5793 = 249064U;
	static volatile uint16_t x5794 = 42U;
	uint16_t x5795 = 53U;
	uint32_t t52 = 1U;

	t52 = (x5793<<(x5794-(x5795&x5796)));

	if (t52 != 7970048U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x5873 = 0U;
	static volatile int32_t x5875 = -1487766;
	int32_t t53 = -163188;

	t53 = (x5873<<(x5874-(x5875&x5876)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x5897 = 1;
	static volatile uint16_t x5898 = 22U;
	volatile int16_t x5900 = 165;

	t54 = (x5897<<(x5898-(x5899&x5900)));

	if (t54 != 2097152) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x6126 = 14U;
	uint16_t x6127 = 6U;
	int16_t x6128 = 1;
	static volatile int32_t t55 = 68670094;

	t55 = (x6125<<(x6126-(x6127&x6128)));

	if (t55 != 2080768) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x6289 = 526836729U;
	static uint16_t x6292 = 671U;
	static uint32_t t56 = 19297629U;

	t56 = (x6289<<(x6290-(x6291&x6292)));

	if (t56 != 1912373248U) { NG(); } else { ; }
	
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


    return 0;
}

