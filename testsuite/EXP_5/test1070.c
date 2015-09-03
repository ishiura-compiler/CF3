#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x401 = UINT16_MAX;
static uint16_t x404 = 795U;
uint32_t x554 = 4898U;
static int8_t x705 = -1;
int32_t x912 = INT32_MAX;
volatile uint32_t t9 = 3141U;
int16_t x1527 = 2;
int64_t x1528 = 4437542420974428876LL;
int8_t x1536 = 14;
volatile int64_t t12 = -1018LL;
static uint8_t x1632 = UINT8_MAX;
uint8_t x1675 = 0U;
uint64_t x1829 = UINT64_MAX;
uint64_t x1830 = 9494223527309LLU;
static int16_t x1832 = -1;
static uint16_t x1999 = 3U;
uint32_t t18 = 243U;
uint16_t x2225 = UINT16_MAX;
uint64_t x2226 = 156LLU;
uint32_t x2322 = 186388U;
int32_t x2386 = 5929;
int8_t x2583 = 0;
uint32_t x2607 = 0U;
volatile uint32_t x2608 = UINT32_MAX;
static int16_t x2610 = INT16_MAX;
uint16_t x2612 = 12U;
int8_t x2645 = -52;
int16_t x2646 = 4512;
int16_t x2647 = 6;
uint64_t x2648 = 274076714359899520LLU;
volatile uint64_t t26 = 6LLU;
volatile int8_t x2669 = INT8_MAX;
uint64_t x2708 = UINT64_MAX;
static volatile int64_t x2775 = 1LL;
volatile int32_t x3179 = 3;
int32_t t33 = -74893226;
volatile uint64_t x3630 = UINT64_MAX;
int32_t x3669 = INT32_MIN;
uint64_t x3670 = 15534625LLU;
uint64_t x3679 = 1LLU;
uint64_t x3738 = 4LLU;
static volatile int16_t x3739 = 2;
int8_t x3921 = -1;
uint64_t x3922 = UINT64_MAX;
uint64_t t40 = 149659LLU;
volatile int32_t x4200 = -820769658;
volatile uint32_t x4225 = 67219U;
uint32_t x4227 = 0U;
int8_t x4255 = 0;
uint64_t t45 = 999792LLU;
uint32_t x4398 = 1U;
uint16_t x4414 = 7060U;
static uint16_t x4415 = 0U;
int64_t x4553 = -1LL;
int8_t x4556 = INT8_MIN;
int16_t x4665 = -1;
uint16_t x4668 = 1173U;
int32_t x4810 = 756347;
int8_t x4811 = 3;
uint64_t t53 = 2028163322LLU;
volatile uint32_t x5055 = 1U;
static int8_t x5283 = 15;
int16_t x5284 = -1;
uint64_t t56 = 945348186LLU;
int32_t t59 = -115072;
uint64_t x5546 = UINT64_MAX;
uint16_t x5548 = UINT16_MAX;
volatile int64_t x5640 = INT64_MIN;
static int32_t x5953 = INT32_MIN;
static volatile uint8_t x5955 = 41U;
uint32_t x5961 = UINT32_MAX;
int16_t x5962 = INT16_MAX;
static int64_t t67 = 53699880090751213LL;
int64_t x6473 = 373231LL;
uint8_t x6577 = 0U;
int16_t x6579 = 12;
uint8_t x6675 = 0U;
uint16_t x6676 = 10561U;
uint32_t t70 = 38U;
uint32_t x6799 = 0U;
static uint32_t x6893 = UINT32_MAX;
static int8_t x6903 = 1;
static volatile uint16_t x6923 = 5U;
uint8_t x7095 = 12U;
int64_t x7198 = INT64_MAX;
static uint8_t x7217 = 2U;
uint8_t x7219 = 9U;
uint32_t x7330 = UINT32_MAX;
volatile int64_t t82 = -182083LL;
int16_t x7396 = INT16_MIN;
int64_t t84 = 688562LL;


void f0(void) {
	uint32_t x129 = UINT32_MAX;
	uint64_t x130 = 558813467553695352LLU;
	uint8_t x131 = 7U;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t0 = 29696540519976062LLU;

	t0 = (x129/((x130>>x131)%x132));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x402 = INT64_MAX;
	int8_t x403 = 8;
	volatile int64_t t1 = -11770735012026945LL;

	t1 = (x401/((x402>>x403)%x404));

	if (t1 != 9362LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x425 = INT8_MIN;
	uint64_t x426 = 94371875196334LLU;
	int8_t x427 = 1;
	int8_t x428 = -1;
	volatile uint64_t t2 = 40823119380303901LLU;

	t2 = (x425/((x426>>x427)%x428));

	if (t2 != 390937LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x465 = INT8_MAX;
	static uint32_t x466 = 7913U;
	static uint8_t x467 = 3U;
	int32_t x468 = INT32_MIN;
	uint32_t t3 = 797U;

	t3 = (x465/((x466>>x467)%x468));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x553 = -1LL;
	int8_t x555 = 2;
	static int32_t x556 = -633;
	static int64_t t4 = 32534755539LL;

	t4 = (x553/((x554>>x555)%x556));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x706 = UINT8_MAX;
	uint16_t x707 = 1U;
	static uint8_t x708 = 3U;
	int32_t t5 = 56;

	t5 = (x705/((x706>>x707)%x708));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x909 = INT16_MIN;
	uint64_t x910 = 8LLU;
	int16_t x911 = 1;
	volatile uint64_t t6 = 19354LLU;

	t6 = (x909/((x910>>x911)%x912));

	if (t6 != 4611686018427379712LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x917 = -1LL;
	uint32_t x918 = 11U;
	int32_t x919 = 1;
	uint32_t x920 = UINT32_MAX;
	int64_t t7 = -28760LL;

	t7 = (x917/((x918>>x919)%x920));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1273 = INT64_MAX;
	uint32_t x1274 = 417157956U;
	int8_t x1275 = 1;
	volatile int32_t x1276 = -15;
	int64_t t8 = -1861909LL;

	t8 = (x1273/((x1274>>x1275)%x1276));

	if (t8 != 44220046168LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x1281 = 1099158U;
	int32_t x1282 = INT32_MAX;
	int16_t x1283 = 0;
	static int32_t x1284 = 185284454;

	t9 = (x1281/((x1282>>x1283)%x1284));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x1453 = INT8_MAX;
	uint32_t x1454 = 622995U;
	static int8_t x1455 = 2;
	static int64_t x1456 = INT64_MIN;
	volatile int64_t t10 = 14605695301075LL;

	t10 = (x1453/((x1454>>x1455)%x1456));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1525 = UINT8_MAX;
	uint32_t x1526 = UINT32_MAX;
	static int64_t t11 = 5LL;

	t11 = (x1525/((x1526>>x1527)%x1528));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x1533 = -1606542LL;
	volatile uint8_t x1534 = UINT8_MAX;
	static uint8_t x1535 = 0U;

	t12 = (x1533/((x1534>>x1535)%x1536));

	if (t12 != -535514LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1605 = UINT32_MAX;
	uint32_t x1606 = 1264265U;
	int16_t x1607 = 1;
	volatile int64_t x1608 = 45587LL;
	volatile int64_t t13 = -437079LL;

	t13 = (x1605/((x1606>>x1607)%x1608));

	if (t13 != 108730LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x1613 = 2930;
	volatile int16_t x1614 = INT16_MAX;
	volatile uint8_t x1615 = 3U;
	int16_t x1616 = 1956;
	static int32_t t14 = 2834;

	t14 = (x1613/((x1614>>x1615)%x1616));

	if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1629 = 9870624U;
	int64_t x1630 = 1667400775833LL;
	uint8_t x1631 = 23U;
	int64_t t15 = 246691LL;

	t15 = (x1629/((x1630>>x1631)%x1632));

	if (t15 != 79601LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x1673 = 0;
	static uint32_t x1674 = 65583U;
	int8_t x1676 = INT8_MIN;
	volatile uint32_t t16 = 1291073912U;

	t16 = (x1673/((x1674>>x1675)%x1676));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1831 = 33LLU;
	static uint64_t t17 = 3LLU;

	t17 = (x1829/((x1830>>x1831)%x1832));

	if (t17 != 16693886039556155LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1997 = -1;
	static uint32_t x1998 = 87U;
	int16_t x2000 = -1;

	t18 = (x1997/((x1998>>x1999)%x2000));

	if (t18 != 429496729U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x2081 = 3U;
	uint8_t x2082 = 21U;
	uint8_t x2083 = 1U;
	int8_t x2084 = INT8_MAX;
	volatile int32_t t19 = -1;

	t19 = (x2081/((x2082>>x2083)%x2084));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x2227 = 4U;
	volatile int64_t x2228 = INT64_MIN;
	uint64_t t20 = 436613LLU;

	t20 = (x2225/((x2226>>x2227)%x2228));

	if (t20 != 7281LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x2321 = 26U;
	int8_t x2323 = 0;
	int32_t x2324 = -1;
	static uint32_t t21 = 759352172U;

	t21 = (x2321/((x2322>>x2323)%x2324));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x2385 = INT64_MIN;
	int32_t x2387 = 3;
	int8_t x2388 = INT8_MIN;
	int64_t t22 = 797876LL;

	t22 = (x2385/((x2386>>x2387)%x2388));

	if (t22 != -91320515216383918LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x2581 = 3U;
	int16_t x2582 = 12804;
	int16_t x2584 = INT16_MIN;
	int32_t t23 = 1285;

	t23 = (x2581/((x2582>>x2583)%x2584));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2605 = INT16_MAX;
	static volatile int32_t x2606 = 856907;
	uint32_t t24 = 128U;

	t24 = (x2605/((x2606>>x2607)%x2608));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x2609 = INT64_MAX;
	uint8_t x2611 = 0U;
	int64_t t25 = 98219LL;

	t25 = (x2609/((x2610>>x2611)%x2612));

	if (t25 != 1317624576693539401LL) { NG(); } else { ; }
	
}

void f26(void) {


	t26 = (x2645/((x2646>>x2647)%x2648));

	if (t26 != 263524915338707879LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2670 = 2U;
	uint8_t x2671 = 1U;
	uint64_t x2672 = 15402750130707384LLU;
	volatile uint64_t t27 = 168054237407LLU;

	t27 = (x2669/((x2670>>x2671)%x2672));

	if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x2705 = INT64_MAX;
	int32_t x2706 = INT32_MAX;
	static int8_t x2707 = 26;
	volatile uint64_t t28 = 21049512LLU;

	t28 = (x2705/((x2706>>x2707)%x2708));

	if (t28 != 297528130221121800LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2773 = -1;
	static uint32_t x2774 = 21712187U;
	int32_t x2776 = INT32_MIN;
	volatile uint32_t t29 = 18529494U;

	t29 = (x2773/((x2774>>x2775)%x2776));

	if (t29 != 395U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2833 = INT16_MIN;
	int64_t x2834 = 236081773763747781LL;
	int16_t x2835 = 2;
	volatile uint64_t x2836 = 28LLU;
	volatile uint64_t t30 = 143126080175059LLU;

	t30 = (x2833/((x2834>>x2835)%x2836));

	if (t30 != 2049638230412168760LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x3025 = -2;
	uint64_t x3026 = 54759575288134LLU;
	int32_t x3027 = 1;
	int64_t x3028 = INT64_MIN;
	uint64_t t31 = 50447412886097LLU;

	t31 = (x3025/((x3026>>x3027)%x3028));

	if (t31 != 673735LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x3177 = 329;
	static int64_t x3178 = 46152403LL;
	volatile uint8_t x3180 = 24U;
	volatile int64_t t32 = 377460300LL;

	t32 = (x3177/((x3178>>x3179)%x3180));

	if (t32 != 164LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x3241 = INT32_MAX;
	uint16_t x3242 = 15445U;
	volatile uint8_t x3243 = 2U;
	int32_t x3244 = INT32_MAX;

	t33 = (x3241/((x3242>>x3243)%x3244));

	if (t33 != 556198) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x3269 = -1LL;
	uint32_t x3270 = 118206445U;
	int8_t x3271 = 24;
	static uint32_t x3272 = 1093634U;
	int64_t t34 = 134109084LL;

	t34 = (x3269/((x3270>>x3271)%x3272));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x3293 = INT64_MIN;
	static uint16_t x3294 = UINT16_MAX;
	int32_t x3295 = 13;
	int16_t x3296 = INT16_MAX;
	int64_t t35 = -214566403882LL;

	t35 = (x3293/((x3294>>x3295)%x3296));

	if (t35 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x3629 = -1LL;
	uint8_t x3631 = 15U;
	uint8_t x3632 = 9U;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x3629/((x3630>>x3631)%x3632));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x3671 = 1;
	int8_t x3672 = -1;
	static volatile uint64_t t37 = 5807422710302669LLU;

	t37 = (x3669/((x3670>>x3671)%x3672));

	if (t37 != 2374919930030LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x3677 = INT32_MIN;
	uint8_t x3678 = 63U;
	int64_t x3680 = -13LL;
	static int64_t t38 = 2898630LL;

	t38 = (x3677/((x3678>>x3679)%x3680));

	if (t38 != -429496729LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3737 = INT32_MAX;
	static int8_t x3740 = INT8_MAX;
	uint64_t t39 = 1197729717292LLU;

	t39 = (x3737/((x3738>>x3739)%x3740));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x3923 = 25U;
	uint8_t x3924 = 5U;

	t40 = (x3921/((x3922>>x3923)%x3924));

	if (t40 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x4049 = 0U;
	uint32_t x4050 = 5005009U;
	uint8_t x4051 = 7U;
	uint16_t x4052 = UINT16_MAX;
	uint32_t t41 = 85515702U;

	t41 = (x4049/((x4050>>x4051)%x4052));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x4129 = INT64_MIN;
	uint32_t x4130 = UINT32_MAX;
	uint8_t x4131 = 10U;
	int64_t x4132 = -4694775LL;
	static int64_t t42 = -1097556874LL;

	t42 = (x4129/((x4130>>x4131)%x4132));

	if (t42 != -2199023779840LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x4197 = INT8_MIN;
	uint16_t x4198 = 6134U;
	int8_t x4199 = 1;
	static volatile int32_t t43 = -17;

	t43 = (x4197/((x4198>>x4199)%x4200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x4226 = UINT64_MAX;
	volatile uint64_t x4228 = 42745863506LLU;
	uint64_t t44 = 50347163897LLU;

	t44 = (x4225/((x4226>>x4227)%x4228));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x4253 = 45504949366656790LL;
	uint64_t x4254 = 6148028093869304102LLU;
	int16_t x4256 = -157;

	t45 = (x4253/((x4254>>x4255)%x4256));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x4397 = -1LL;
	int8_t x4399 = 0;
	uint16_t x4400 = 10U;
	int64_t t46 = 468471600634LL;

	t46 = (x4397/((x4398>>x4399)%x4400));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x4413 = 22148U;
	int8_t x4416 = INT8_MIN;
	volatile uint32_t t47 = 13192U;

	t47 = (x4413/((x4414>>x4415)%x4416));

	if (t47 != 1107U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x4554 = 15;
	volatile uint8_t x4555 = 0U;
	int64_t t48 = 85939898564LL;

	t48 = (x4553/((x4554>>x4555)%x4556));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x4666 = 319038477328727LLU;
	volatile uint8_t x4667 = 37U;
	static volatile uint64_t t49 = 466611317087567390LLU;

	t49 = (x4665/((x4666>>x4667)%x4668));

	if (t49 != 16068592398701700LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x4689 = INT64_MIN;
	uint8_t x4690 = 7U;
	uint8_t x4691 = 0U;
	uint32_t x4692 = 2971U;
	int64_t t50 = -7244694105484490LL;

	t50 = (x4689/((x4690>>x4691)%x4692));

	if (t50 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x4753 = INT16_MAX;
	uint32_t x4754 = 9U;
	static int32_t x4755 = 1;
	static int16_t x4756 = INT16_MAX;
	uint32_t t51 = 2U;

	t51 = (x4753/((x4754>>x4755)%x4756));

	if (t51 != 8191U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x4801 = UINT32_MAX;
	uint32_t x4802 = 2U;
	int16_t x4803 = 0;
	static uint8_t x4804 = UINT8_MAX;
	uint32_t t52 = 1U;

	t52 = (x4801/((x4802>>x4803)%x4804));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x4809 = INT8_MIN;
	volatile uint64_t x4812 = 955266741152835611LLU;

	t53 = (x4809/((x4810>>x4811)%x4812));

	if (t53 != 195114858569217LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x5053 = INT32_MIN;
	uint8_t x5054 = UINT8_MAX;
	static uint16_t x5056 = 182U;
	int32_t t54 = -910100623;

	t54 = (x5053/((x5054>>x5055)%x5056));

	if (t54 != -16909320) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x5085 = INT32_MAX;
	int64_t x5086 = 123607127212932637LL;
	static int16_t x5087 = 0;
	static volatile int8_t x5088 = INT8_MIN;
	volatile int64_t t55 = -155597LL;

	t55 = (x5085/((x5086>>x5087)%x5088));

	if (t55 != 74051160LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x5281 = INT16_MAX;
	uint64_t x5282 = 115741374430844869LLU;

	t56 = (x5281/((x5282>>x5283)%x5284));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x5381 = -1LL;
	uint64_t x5382 = UINT64_MAX;
	int16_t x5383 = 0;
	volatile int16_t x5384 = -16;
	uint64_t t57 = 3091557699307603470LLU;

	t57 = (x5381/((x5382>>x5383)%x5384));

	if (t57 != 1229782938247303441LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x5417 = 75U;
	static uint8_t x5418 = 14U;
	int32_t x5419 = 0;
	volatile int16_t x5420 = INT16_MIN;
	volatile int32_t t58 = -47409;

	t58 = (x5417/((x5418>>x5419)%x5420));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x5429 = -383;
	static volatile uint16_t x5430 = UINT16_MAX;
	static uint16_t x5431 = 1U;
	static volatile int8_t x5432 = 14;

	t59 = (x5429/((x5430>>x5431)%x5432));

	if (t59 != -54) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x5545 = 64235U;
	uint8_t x5547 = 3U;
	volatile uint64_t t60 = 3LLU;

	t60 = (x5545/((x5546>>x5547)%x5548));

	if (t60 != 7LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x5577 = 51;
	int8_t x5578 = 21;
	int16_t x5579 = 0;
	static int8_t x5580 = INT8_MIN;
	int32_t t61 = 4105421;

	t61 = (x5577/((x5578>>x5579)%x5580));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x5637 = 301LLU;
	int64_t x5638 = 55229LL;
	int32_t x5639 = 0;
	uint64_t t62 = 1LLU;

	t62 = (x5637/((x5638>>x5639)%x5640));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x5725 = INT16_MIN;
	int16_t x5726 = INT16_MAX;
	uint64_t x5727 = 0LLU;
	static int64_t x5728 = INT64_MIN;
	volatile int64_t t63 = 29155666LL;

	t63 = (x5725/((x5726>>x5727)%x5728));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x5954 = INT64_MAX;
	int64_t x5956 = INT64_MIN;
	static int64_t t64 = 27840320159928LL;

	t64 = (x5953/((x5954>>x5955)%x5956));

	if (t64 != -512LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x5963 = 5U;
	int8_t x5964 = INT8_MIN;
	uint32_t t65 = 0U;

	t65 = (x5961/((x5962>>x5963)%x5964));

	if (t65 != 33818640U) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x6093 = INT64_MIN;
	int64_t x6094 = INT64_MAX;
	static int64_t x6095 = 7LL;
	volatile int64_t x6096 = 11719792746591143LL;
	int64_t t66 = 7225LL;

	t66 = (x6093/((x6094>>x6095)%x6096));

	if (t66 != -5304LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x6213 = 3441049246272203LL;
	static uint16_t x6214 = UINT16_MAX;
	uint16_t x6215 = 7U;
	int64_t x6216 = 476413LL;

	t67 = (x6213/((x6214>>x6215)%x6216));

	if (t67 != 6733951558262LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x6474 = 983121249;
	static int64_t x6475 = 0LL;
	static int8_t x6476 = INT8_MAX;
	static volatile int64_t t68 = 41446111LL;

	t68 = (x6473/((x6474>>x6475)%x6476));

	if (t68 != 14929LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x6578 = INT32_MAX;
	static int64_t x6580 = INT64_MIN;
	volatile int64_t t69 = -156351854574788LL;

	t69 = (x6577/((x6578>>x6579)%x6580));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x6673 = -10;
	volatile uint32_t x6674 = 1U;

	t70 = (x6673/((x6674>>x6675)%x6676));

	if (t70 != 4294967286U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x6797 = UINT32_MAX;
	uint8_t x6798 = UINT8_MAX;
	int64_t x6800 = INT64_MIN;
	static int64_t t71 = -3598601876847937LL;

	t71 = (x6797/((x6798>>x6799)%x6800));

	if (t71 != 16843009LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x6885 = 49107715;
	uint8_t x6886 = 61U;
	uint8_t x6887 = 0U;
	uint16_t x6888 = 7447U;
	volatile int32_t t72 = -65059757;

	t72 = (x6885/((x6886>>x6887)%x6888));

	if (t72 != 805044) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x6894 = 50;
	static volatile int16_t x6895 = 4;
	int8_t x6896 = -42;
	volatile uint32_t t73 = 1515466U;

	t73 = (x6893/((x6894>>x6895)%x6896));

	if (t73 != 1431655765U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x6901 = INT64_MIN;
	volatile uint32_t x6902 = 632932U;
	int32_t x6904 = INT32_MIN;
	int64_t t74 = 29872984LL;

	t74 = (x6901/((x6902>>x6903)%x6904));

	if (t74 != -29144906678299LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x6921 = 16099LLU;
	static uint8_t x6922 = UINT8_MAX;
	static uint32_t x6924 = 115U;
	static uint64_t t75 = 991491LLU;

	t75 = (x6921/((x6922>>x6923)%x6924));

	if (t75 != 2299LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x7009 = INT64_MIN;
	static int32_t x7010 = INT32_MAX;
	uint8_t x7011 = 4U;
	static volatile uint32_t x7012 = 51899369U;
	static int64_t t76 = -679104LL;

	t76 = (x7009/((x7010>>x7011)%x7012));

	if (t76 != -303210998789LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x7093 = INT64_MAX;
	volatile uint32_t x7094 = UINT32_MAX;
	uint64_t x7096 = 1081045934170294LLU;
	uint64_t t77 = 164893867144916056LLU;

	t77 = (x7093/((x7094>>x7095)%x7096));

	if (t77 != 8796101410824LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x7197 = -19298261LL;
	uint8_t x7199 = 1U;
	static int64_t x7200 = INT64_MIN;
	volatile int64_t t78 = 1LL;

	t78 = (x7197/((x7198>>x7199)%x7200));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x7218 = 65179U;
	int64_t x7220 = INT64_MAX;
	int64_t t79 = 20808214557LL;

	t79 = (x7217/((x7218>>x7219)%x7220));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x7313 = -1LL;
	uint32_t x7314 = UINT32_MAX;
	volatile uint16_t x7315 = 1U;
	static int8_t x7316 = INT8_MIN;
	volatile int64_t t80 = -3LL;

	t80 = (x7313/((x7314>>x7315)%x7316));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x7329 = INT16_MAX;
	uint8_t x7331 = 3U;
	uint32_t x7332 = UINT32_MAX;
	uint32_t t81 = 37U;

	t81 = (x7329/((x7330>>x7331)%x7332));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x7385 = INT8_MAX;
	static int64_t x7386 = 3324484104565652LL;
	static volatile uint8_t x7387 = 31U;
	int32_t x7388 = INT32_MIN;

	t82 = (x7385/((x7386>>x7387)%x7388));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x7393 = 175U;
	static uint64_t x7394 = 25397348350901LLU;
	uint8_t x7395 = 2U;
	volatile uint64_t t83 = 25291875925106261LLU;

	t83 = (x7393/((x7394>>x7395)%x7396));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x7433 = INT8_MIN;
	int64_t x7434 = INT64_MAX;
	uint16_t x7435 = 2U;
	uint32_t x7436 = UINT32_MAX;

	t84 = (x7433/((x7434>>x7435)%x7436));

	if (t84 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

