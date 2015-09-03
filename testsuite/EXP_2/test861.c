#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 1U;
uint8_t x26 = UINT8_MAX;
volatile int32_t t1 = -250109;
volatile int8_t x183 = 1;
static uint32_t t2 = 9U;
int8_t x403 = 2;
volatile int32_t t5 = 87976;
uint32_t x757 = UINT32_MAX;
volatile uint64_t x878 = UINT64_MAX;
int32_t x913 = 0;
volatile uint16_t x915 = 1U;
volatile int16_t x916 = -1;
volatile int32_t x929 = 3521149;
uint64_t t13 = 2156LLU;
int8_t x1465 = 0;
uint32_t x1466 = 39U;
int16_t x1509 = INT16_MIN;
uint64_t x1511 = 28LLU;
int8_t x1512 = -1;
volatile int32_t x1645 = -196;
static volatile uint32_t x1646 = 7315548U;
volatile int8_t x1801 = INT8_MIN;
volatile uint32_t x1802 = UINT32_MAX;
int64_t x1884 = -1LL;
int32_t x1925 = 298720;
volatile uint64_t t21 = 7442LLU;
static volatile uint64_t t22 = 61216291528161553LLU;
uint32_t x2260 = UINT32_MAX;
uint32_t x2274 = UINT32_MAX;
volatile uint32_t t25 = 18U;
int64_t x2408 = -1LL;
int16_t x2515 = 1;
uint64_t x2600 = 966337155505039LLU;
static int16_t x2645 = INT16_MIN;
static uint8_t x2670 = 1U;
uint8_t x2671 = 19U;
volatile uint64_t t33 = 97382762376046LLU;
volatile uint8_t x2701 = UINT8_MAX;
uint8_t x2703 = 8U;
uint64_t t34 = 272915913LLU;
uint64_t x3009 = 564110662389789501LLU;
volatile uint16_t x3224 = 191U;
volatile int64_t x3396 = -1LL;
volatile uint64_t t39 = 48347LLU;
uint8_t x3657 = 51U;
static int64_t t44 = -5463LL;
int8_t x4291 = 9;
volatile uint64_t x4292 = UINT64_MAX;
volatile uint64_t t50 = 6452947LLU;
uint8_t x4345 = UINT8_MAX;
int32_t t52 = 14157273;
volatile int8_t x4404 = 12;
volatile uint8_t x4464 = 7U;
int8_t x4538 = INT8_MAX;
int32_t t56 = -150;
volatile uint64_t x4798 = 2204340653531333396LLU;
volatile uint64_t t59 = 1616117LLU;
volatile int8_t x5092 = INT8_MIN;
static int16_t x5133 = 0;
volatile int64_t t61 = 25166896LL;
uint32_t x5226 = UINT32_MAX;
uint16_t x5228 = 706U;
uint32_t x5363 = 24U;
int16_t x5452 = INT16_MAX;
volatile uint8_t x5723 = 2U;
volatile uint64_t t65 = 65685071LLU;
int64_t x5781 = INT64_MIN;
static int64_t t68 = 1445029LL;
static int64_t x5916 = 15LL;
volatile int64_t t69 = 94799409962174852LL;
static uint16_t x6017 = UINT16_MAX;
int8_t x6019 = 1;
volatile uint32_t t70 = 1U;
uint64_t x6272 = 259297347LLU;
static uint64_t t73 = 62224872029037LLU;
uint32_t x6369 = 59U;
uint16_t x6470 = UINT16_MAX;
uint16_t x6738 = UINT16_MAX;
volatile int32_t x6841 = INT32_MIN;
int16_t x6843 = 21;
uint32_t x7012 = UINT32_MAX;
static uint32_t x7176 = 30677751U;
int64_t t84 = 17490048436LL;
volatile uint32_t t88 = 96088U;
uint16_t x7619 = 3U;
static int8_t x7664 = INT8_MIN;
int32_t x7724 = INT32_MIN;
static volatile uint32_t t93 = 289U;
uint16_t x7775 = 0U;
int16_t x7776 = INT16_MAX;
int64_t x7992 = 7390LL;
uint32_t x8018 = 15U;
int16_t x8020 = 12631;
static uint32_t t97 = 30U;
volatile uint32_t x8234 = 1374433331U;
static volatile uint32_t t99 = 10781U;


void f0(void) {
	uint64_t x2 = 3LLU;
	static int8_t x3 = 0;
	int8_t x4 = -1;
	uint64_t t0 = 56634070202LLU;

	t0 = ((x1-(x2<<x3))*x4);

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = -1;
	static uint64_t x27 = 1LLU;
	int8_t x28 = INT8_MIN;

	t1 = ((x25-(x26<<x27))*x28);

	if (t1 != 65408) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x181 = 216U;
	uint32_t x182 = 131958U;
	int16_t x184 = -1;

	t2 = ((x181-(x182<<x183))*x184);

	if (t2 != 263700U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MAX;
	int8_t x404 = 2;
	int32_t t3 = -1369;

	t3 = ((x401-(x402<<x403))*x404);

	if (t3 != -1272) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x481 = 6U;
	int16_t x482 = 1;
	volatile int16_t x483 = 1;
	static volatile int8_t x484 = INT8_MIN;
	int32_t t4 = -1047095295;

	t4 = ((x481-(x482<<x483))*x484);

	if (t4 != -512) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x505 = INT16_MIN;
	volatile int8_t x506 = 0;
	uint16_t x507 = 7U;
	volatile int16_t x508 = INT16_MAX;

	t5 = ((x505-(x506<<x507))*x508);

	if (t5 != -1073709056) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x549 = INT16_MIN;
	volatile uint16_t x550 = 0U;
	uint16_t x551 = 27U;
	int64_t x552 = 1LL;
	int64_t t6 = -7362848LL;

	t6 = ((x549-(x550<<x551))*x552);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x758 = 20829971U;
	uint8_t x759 = 15U;
	uint8_t x760 = UINT8_MAX;
	uint32_t t7 = 432U;

	t7 = ((x757-(x758<<x759))*x760);

	if (t7 != 1644789505U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x877 = -1LL;
	uint8_t x879 = 1U;
	int16_t x880 = 15;
	volatile uint64_t t8 = 11170LLU;

	t8 = ((x877-(x878<<x879))*x880);

	if (t8 != 15LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x914 = 31U;
	static int32_t t9 = 0;

	t9 = ((x913-(x914<<x915))*x916);

	if (t9 != 62) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x930 = 241110062293LL;
	uint32_t x931 = 19U;
	uint16_t x932 = 1U;
	volatile int64_t t10 = 1786423126017103LL;

	t10 = ((x929-(x930<<x931))*x932);

	if (t10 != -126411112335951235LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x945 = UINT64_MAX;
	uint8_t x946 = 1U;
	volatile uint8_t x947 = 1U;
	uint64_t x948 = UINT64_MAX;
	static volatile uint64_t t11 = 5459803056721LLU;

	t11 = ((x945-(x946<<x947))*x948);

	if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x1281 = -1701;
	uint8_t x1282 = 57U;
	int8_t x1283 = 2;
	volatile int8_t x1284 = -1;
	volatile int32_t t12 = 28949978;

	t12 = ((x1281-(x1282<<x1283))*x1284);

	if (t12 != 1929) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1405 = INT32_MIN;
	volatile uint64_t x1406 = 0LLU;
	uint32_t x1407 = 2U;
	volatile int64_t x1408 = INT64_MIN;

	t13 = ((x1405-(x1406<<x1407))*x1408);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1467 = 1U;
	uint16_t x1468 = UINT16_MAX;
	uint32_t t14 = 7090899U;

	t14 = ((x1465-(x1466<<x1467))*x1468);

	if (t14 != 4289855566U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1510 = 4U;
	int32_t t15 = -131228;

	t15 = ((x1509-(x1510<<x1511))*x1512);

	if (t15 != 1073774592) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x1647 = 0U;
	static uint8_t x1648 = 0U;
	static volatile uint32_t t16 = 3349U;

	t16 = ((x1645-(x1646<<x1647))*x1648);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1665 = 4551;
	uint32_t x1666 = UINT32_MAX;
	int16_t x1667 = 3;
	int32_t x1668 = INT32_MIN;
	static volatile uint32_t t17 = 8745803U;

	t17 = ((x1665-(x1666<<x1667))*x1668);

	if (t17 != 2147483648U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1693 = UINT64_MAX;
	uint32_t x1694 = UINT32_MAX;
	int8_t x1695 = 4;
	volatile int8_t x1696 = -21;
	volatile uint64_t t18 = 1804342LLU;

	t18 = ((x1693-(x1694<<x1695))*x1696);

	if (t18 != 90194312901LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1803 = 3U;
	int32_t x1804 = -1;
	static uint32_t t19 = 651425U;

	t19 = ((x1801-(x1802<<x1803))*x1804);

	if (t19 != 120U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1881 = INT16_MIN;
	volatile uint16_t x1882 = UINT16_MAX;
	static volatile int8_t x1883 = 1;
	int64_t t20 = 123630711105LL;

	t20 = ((x1881-(x1882<<x1883))*x1884);

	if (t20 != 163838LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1926 = 1616058330U;
	uint32_t x1927 = 9U;
	uint64_t x1928 = UINT64_MAX;

	t21 = ((x1925-(x1926<<x1927))*x1928);

	if (t21 != 18446744072202429728LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x2249 = UINT64_MAX;
	int32_t x2250 = 45;
	uint8_t x2251 = 0U;
	volatile int32_t x2252 = -1;

	t22 = ((x2249-(x2250<<x2251))*x2252);

	if (t22 != 46LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x2257 = INT8_MIN;
	uint16_t x2258 = 24634U;
	volatile int8_t x2259 = 4;
	volatile uint32_t t23 = 3U;

	t23 = ((x2257-(x2258<<x2259))*x2260);

	if (t23 != 394272U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x2265 = INT32_MIN;
	uint32_t x2266 = 3U;
	volatile int8_t x2267 = 1;
	volatile uint64_t x2268 = 58404821599882163LLU;
	static uint64_t t24 = 3545776345LLU;

	t24 = ((x2265-(x2266<<x2267))*x2268);

	if (t24 != 1545804051469744590LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2273 = 0;
	int64_t x2275 = 11LL;
	int16_t x2276 = -104;

	t25 = ((x2273-(x2274<<x2275))*x2276);

	if (t25 != 4294754304U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x2405 = INT32_MIN;
	uint32_t x2406 = 1059120U;
	int16_t x2407 = 0;
	int64_t t26 = 46LL;

	t26 = ((x2405-(x2406<<x2407))*x2408);

	if (t26 != -2146424528LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2421 = UINT8_MAX;
	uint64_t x2422 = 114463698767067696LLU;
	uint8_t x2423 = 53U;
	int16_t x2424 = INT16_MIN;
	uint64_t t27 = 524486246621407LLU;

	t27 = ((x2421-(x2422<<x2423))*x2424);

	if (t27 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x2513 = -1;
	int8_t x2514 = 8;
	static int16_t x2516 = INT16_MAX;
	volatile int32_t t28 = -10005408;

	t28 = ((x2513-(x2514<<x2515))*x2516);

	if (t28 != -557039) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2545 = 15927U;
	int8_t x2546 = INT8_MAX;
	int8_t x2547 = 8;
	volatile uint64_t x2548 = 243282019LLU;
	uint64_t t29 = 30LLU;

	t29 = ((x2545-(x2546<<x2547))*x2548);

	if (t29 != 18446740038877266501LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2597 = INT16_MAX;
	uint8_t x2598 = UINT8_MAX;
	static int64_t x2599 = 1LL;
	volatile uint64_t t30 = 716108786LLU;

	t30 = ((x2597-(x2598<<x2599))*x2600);

	if (t30 != 12724393551416491407LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2646 = UINT32_MAX;
	static int16_t x2647 = 6;
	int16_t x2648 = -59;
	static volatile uint32_t t31 = 207U;

	t31 = ((x2645-(x2646<<x2647))*x2648);

	if (t31 != 1929536U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x2669 = UINT32_MAX;
	volatile int16_t x2672 = INT16_MAX;
	uint32_t t32 = 88U;

	t32 = ((x2669-(x2670<<x2671))*x2672);

	if (t32 != 491521U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2689 = UINT64_MAX;
	static volatile int64_t x2690 = 1LL;
	uint8_t x2691 = 45U;
	int8_t x2692 = -3;

	t33 = ((x2689-(x2690<<x2691))*x2692);

	if (t33 != 105553116266499LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2702 = UINT64_MAX;
	uint32_t x2704 = UINT32_MAX;

	t34 = ((x2701-(x2702<<x2703))*x2704);

	if (t34 != 2194728287745LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x3010 = 8LL;
	uint8_t x3011 = 10U;
	static int32_t x3012 = INT32_MIN;
	static uint64_t t35 = 14410LLU;

	t35 = ((x3009-(x3010<<x3011))*x3012);

	if (t35 != 12763085214494752768LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3221 = 25U;
	int16_t x3222 = 194;
	int16_t x3223 = 2;
	int32_t t36 = 1;

	t36 = ((x3221-(x3222<<x3223))*x3224);

	if (t36 != -143441) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x3333 = 79;
	static volatile uint64_t x3334 = 3362252493029LLU;
	uint8_t x3335 = 21U;
	static uint32_t x3336 = UINT32_MAX;
	volatile uint64_t t37 = 464850193125263606LLU;

	t37 = ((x3333-(x3334<<x3335))*x3336);

	if (t37 != 4988506250227482545LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3373 = 66573398883580825LLU;
	uint16_t x3374 = 342U;
	uint64_t x3375 = 4LLU;
	int32_t x3376 = INT32_MIN;
	uint64_t t38 = 3457953533138LLU;

	t38 = ((x3373-(x3374<<x3375))*x3376);

	if (t38 != 6343017587047137280LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3393 = UINT64_MAX;
	volatile uint8_t x3394 = 7U;
	static uint8_t x3395 = 1U;

	t39 = ((x3393-(x3394<<x3395))*x3396);

	if (t39 != 15LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x3433 = 19U;
	volatile uint32_t x3434 = 291396U;
	int8_t x3435 = 17;
	uint8_t x3436 = UINT8_MAX;
	static uint32_t t40 = 411U;

	t40 = ((x3433-(x3434<<x3435))*x3436);

	if (t40 != 1552421613U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x3653 = 101U;
	uint32_t x3654 = 970250U;
	uint16_t x3655 = 20U;
	int16_t x3656 = INT16_MIN;
	uint32_t t41 = 48U;

	t41 = ((x3653-(x3654<<x3655))*x3656);

	if (t41 != 4291657728U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x3658 = 15000468478151167LLU;
	uint8_t x3659 = 3U;
	uint16_t x3660 = 21544U;
	volatile uint64_t t42 = 3LLU;

	t42 = ((x3657-(x3658<<x3659))*x3660);

	if (t42 != 15630171246737941816LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3661 = INT16_MIN;
	int8_t x3662 = 1;
	static volatile int8_t x3663 = 0;
	static int8_t x3664 = -1;
	int32_t t43 = 229703287;

	t43 = ((x3661-(x3662<<x3663))*x3664);

	if (t43 != 32769) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x3773 = INT32_MAX;
	int64_t x3774 = 94860876061320LL;
	static uint8_t x3775 = 1U;
	static int16_t x3776 = INT16_MAX;

	t44 = ((x3773-(x3774<<x3775))*x3776);

	if (t44 != -6216542285205883631LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x3865 = 63;
	static uint16_t x3866 = 1465U;
	volatile int32_t x3867 = 20;
	static uint64_t x3868 = UINT64_MAX;
	volatile uint64_t t45 = 132851LLU;

	t45 = ((x3865-(x3866<<x3867))*x3868);

	if (t45 != 1536163777LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3937 = 307366650;
	uint32_t x3938 = UINT32_MAX;
	uint32_t x3939 = 0U;
	volatile uint8_t x3940 = 1U;
	uint32_t t46 = 36U;

	t46 = ((x3937-(x3938<<x3939))*x3940);

	if (t46 != 307366651U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x4109 = 793;
	uint64_t x4110 = 510248050498720LLU;
	static int8_t x4111 = 3;
	static uint32_t x4112 = 52U;
	volatile uint64_t t47 = 76993580LLU;

	t47 = ((x4109-(x4110<<x4111))*x4112);

	if (t47 != 18234480884702125332LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x4121 = INT16_MIN;
	static volatile int8_t x4122 = 7;
	int16_t x4123 = 13;
	int16_t x4124 = -1;
	int32_t t48 = -2;

	t48 = ((x4121-(x4122<<x4123))*x4124);

	if (t48 != 90112) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x4181 = UINT32_MAX;
	static uint64_t x4182 = 4453135LLU;
	static uint8_t x4183 = 1U;
	uint16_t x4184 = UINT16_MAX;
	uint64_t t49 = 41016594261254LLU;

	t49 = ((x4181-(x4182<<x4183))*x4184);

	if (t49 != 280887009273375LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x4289 = 1U;
	static int64_t x4290 = 364591LL;

	t50 = ((x4289-(x4290<<x4291))*x4292);

	if (t50 != 186670591LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x4313 = 2;
	uint32_t x4314 = 2161U;
	int16_t x4315 = 1;
	uint64_t x4316 = UINT64_MAX;
	volatile uint64_t t51 = 4746040LLU;

	t51 = ((x4313-(x4314<<x4315))*x4316);

	if (t51 != 18446744069414588640LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4346 = INT16_MAX;
	int16_t x4347 = 0;
	int8_t x4348 = INT8_MAX;

	t52 = ((x4345-(x4346<<x4347))*x4348);

	if (t52 != -4129024) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x4401 = 38057650LLU;
	static int8_t x4402 = INT8_MAX;
	uint8_t x4403 = 1U;
	uint64_t t53 = 42LLU;

	t53 = ((x4401-(x4402<<x4403))*x4404);

	if (t53 != 456688752LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x4461 = -1;
	int8_t x4462 = 0;
	uint32_t x4463 = 13U;
	static volatile int32_t t54 = -100;

	t54 = ((x4461-(x4462<<x4463))*x4464);

	if (t54 != -7) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x4529 = UINT16_MAX;
	uint16_t x4530 = 54U;
	uint8_t x4531 = 1U;
	volatile uint64_t x4532 = UINT64_MAX;
	uint64_t t55 = 3491291721043LLU;

	t55 = ((x4529-(x4530<<x4531))*x4532);

	if (t55 != 18446744073709486189LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4537 = -139;
	int64_t x4539 = 3LL;
	volatile int32_t x4540 = -1;

	t56 = ((x4537-(x4538<<x4539))*x4540);

	if (t56 != 1155) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4797 = -1;
	volatile uint32_t x4799 = 20U;
	int8_t x4800 = -24;
	uint64_t t57 = 822275844254LLU;

	t57 = ((x4797-(x4798<<x4799))*x4800);

	if (t57 != 4020175170793635864LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4817 = -1;
	static volatile int16_t x4818 = INT16_MAX;
	uint8_t x4819 = 3U;
	int8_t x4820 = INT8_MIN;
	volatile int32_t t58 = 3915006;

	t58 = ((x4817-(x4818<<x4819))*x4820);

	if (t58 != 33553536) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4845 = 195;
	uint64_t x4846 = UINT64_MAX;
	uint8_t x4847 = 1U;
	volatile int32_t x4848 = INT32_MAX;

	t59 = ((x4845-(x4846<<x4847))*x4848);

	if (t59 != 423054278459LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x5089 = 15485;
	uint64_t x5090 = 162629266LLU;
	uint16_t x5091 = 1U;
	volatile uint64_t t60 = 1763562480515LLU;

	t60 = ((x5089-(x5090<<x5091))*x5092);

	if (t60 != 41631110016LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5134 = 0;
	uint8_t x5135 = 1U;
	int64_t x5136 = INT64_MIN;

	t61 = ((x5133-(x5134<<x5135))*x5136);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x5225 = INT32_MIN;
	int8_t x5227 = 1;
	static uint32_t t62 = 47042431U;

	t62 = ((x5225-(x5226<<x5227))*x5228);

	if (t62 != 1412U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x5361 = UINT32_MAX;
	uint32_t x5362 = 93053U;
	volatile uint64_t x5364 = 3024724535601682953LLU;
	uint64_t t63 = 561911525179259564LLU;

	t63 = ((x5361-(x5362<<x5363))*x5364);

	if (t63 != 16681061586891023863LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x5449 = 110;
	int32_t x5450 = 0;
	int32_t x5451 = 25;
	static volatile int32_t t64 = -6044;

	t64 = ((x5449-(x5450<<x5451))*x5452);

	if (t64 != 3604370) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x5721 = -135700;
	static uint64_t x5722 = UINT64_MAX;
	static int64_t x5724 = INT64_MAX;

	t65 = ((x5721-(x5722<<x5723))*x5724);

	if (t65 != 135696LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x5777 = INT8_MAX;
	uint32_t x5778 = 4U;
	static uint8_t x5779 = 7U;
	static int8_t x5780 = 39;
	static volatile uint32_t t66 = 32467558U;

	t66 = ((x5777-(x5778<<x5779))*x5780);

	if (t66 != 4294952281U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x5782 = 1115994943LLU;
	uint64_t x5783 = 19LLU;
	int64_t x5784 = INT64_MAX;
	uint64_t t67 = 112627252966878060LLU;

	t67 = ((x5781-(x5782<<x5783))*x5784);

	if (t67 != 9223957139611451392LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5909 = -1;
	int64_t x5910 = 14LL;
	uint16_t x5911 = 11U;
	static int32_t x5912 = INT32_MIN;

	t68 = ((x5909-(x5910<<x5911))*x5912);

	if (t68 != 61574798639104LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5913 = INT16_MIN;
	uint16_t x5914 = 4U;
	uint8_t x5915 = 0U;

	t69 = ((x5913-(x5914<<x5915))*x5916);

	if (t69 != -491580LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x6018 = 7602U;
	int16_t x6020 = INT16_MIN;

	t70 = ((x6017-(x6018<<x6019))*x6020);

	if (t70 != 2645721088U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x6085 = -285LL;
	volatile int16_t x6086 = 0;
	int8_t x6087 = 1;
	uint64_t x6088 = 886LLU;
	uint64_t t71 = 2396546299435LLU;

	t71 = ((x6085-(x6086<<x6087))*x6088);

	if (t71 != 18446744073709299106LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x6269 = -1;
	static int32_t x6270 = 1;
	uint64_t x6271 = 25LLU;
	volatile uint64_t t72 = 231265LLU;

	t72 = ((x6269-(x6270<<x6271))*x6272);

	if (t72 != 18438043498252562365LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x6329 = 2238810977769115LL;
	uint64_t x6330 = UINT64_MAX;
	int8_t x6331 = 1;
	int32_t x6332 = INT32_MAX;

	t73 = ((x6329-(x6330<<x6331))*x6332);

	if (t73 != 16608808265151900003LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x6370 = 1U;
	uint16_t x6371 = 3U;
	int16_t x6372 = 233;
	volatile uint32_t t74 = 57U;

	t74 = ((x6369-(x6370<<x6371))*x6372);

	if (t74 != 11883U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x6469 = INT32_MAX;
	static uint32_t x6471 = 1U;
	volatile uint64_t x6472 = UINT64_MAX;
	volatile uint64_t t75 = 630LLU;

	t75 = ((x6469-(x6470<<x6471))*x6472);

	if (t75 != 18446744071562199039LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x6481 = 2062326847180997LL;
	volatile uint64_t x6482 = 647816092LLU;
	static int8_t x6483 = 3;
	int32_t x6484 = -1;
	volatile uint64_t t76 = 7668299867713LLU;

	t76 = ((x6481-(x6482<<x6483))*x6484);

	if (t76 != 18444681752044899355LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x6737 = 6U;
	uint32_t x6739 = 7U;
	int8_t x6740 = INT8_MIN;
	int32_t t77 = -5065;

	t77 = ((x6737-(x6738<<x6739))*x6740);

	if (t77 != 1073724672) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x6842 = 10337691U;
	uint16_t x6844 = 12737U;
	volatile uint32_t t78 = 60833U;

	t78 = ((x6841-(x6842<<x6843))*x6844);

	if (t78 != 3835691008U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6845 = INT8_MIN;
	static int8_t x6846 = INT8_MAX;
	volatile int16_t x6847 = 10;
	uint16_t x6848 = 52U;
	static int32_t t79 = 1;

	t79 = ((x6845-(x6846<<x6847))*x6848);

	if (t79 != -6769152) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x6857 = UINT8_MAX;
	static uint32_t x6858 = 486U;
	volatile int8_t x6859 = 0;
	static volatile int64_t x6860 = -1LL;
	int64_t t80 = -1597572679311LL;

	t80 = ((x6857-(x6858<<x6859))*x6860);

	if (t80 != -4294967065LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x6861 = UINT64_MAX;
	uint32_t x6862 = 232248703U;
	uint16_t x6863 = 0U;
	int64_t x6864 = 2LL;
	uint64_t t81 = 1022201LLU;

	t81 = ((x6861-(x6862<<x6863))*x6864);

	if (t81 != 18446744073245054208LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x7009 = 28U;
	uint16_t x7010 = UINT16_MAX;
	int8_t x7011 = 1;
	static volatile uint32_t t82 = 1706478U;

	t82 = ((x7009-(x7010<<x7011))*x7012);

	if (t82 != 131042U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x7173 = UINT8_MAX;
	uint16_t x7174 = 11223U;
	uint64_t x7175 = 1LLU;
	static volatile uint32_t t83 = 3258U;

	t83 = ((x7173-(x7174<<x7175))*x7176);

	if (t83 != 2129827623U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x7201 = INT16_MIN;
	int64_t x7202 = 850367402873LL;
	int8_t x7203 = 0;
	uint16_t x7204 = 8787U;

	t84 = ((x7201-(x7202<<x7203))*x7204);

	if (t84 != -7472178656977467LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x7221 = INT32_MIN;
	volatile uint64_t x7222 = 15LLU;
	uint32_t x7223 = 1U;
	volatile int32_t x7224 = -4072431;
	volatile uint64_t t85 = 15855150188LLU;

	t85 = ((x7221-(x7222<<x7223))*x7224);

	if (t85 != 8745479102281218LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x7233 = UINT8_MAX;
	uint64_t x7234 = 2089093633LLU;
	int32_t x7235 = 1;
	int32_t x7236 = 1735;
	static volatile uint64_t t86 = 366380618294854079LLU;

	t86 = ((x7233-(x7234<<x7235))*x7236);

	if (t86 != 18446736824555087531LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x7261 = 42U;
	uint32_t x7262 = 8463993U;
	uint32_t x7263 = 20U;
	int32_t x7264 = -1;
	volatile uint32_t t87 = 251017U;

	t87 = ((x7261-(x7262<<x7263))*x7264);

	if (t87 != 1737490390U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x7461 = UINT32_MAX;
	volatile uint8_t x7462 = 5U;
	uint8_t x7463 = 15U;
	uint16_t x7464 = UINT16_MAX;

	t88 = ((x7461-(x7462<<x7463))*x7464);

	if (t88 != 2147581953U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x7589 = 966LLU;
	uint64_t x7590 = UINT64_MAX;
	uint8_t x7591 = 8U;
	int16_t x7592 = INT16_MIN;
	volatile uint64_t t89 = 62LLU;

	t89 = ((x7589-(x7590<<x7591))*x7592);

	if (t89 != 18446744073669509120LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x7617 = INT8_MIN;
	static int64_t x7618 = 99058999LL;
	uint16_t x7620 = UINT16_MAX;
	int64_t t90 = -2709111969349LL;

	t90 = ((x7617-(x7618<<x7619))*x7620);

	if (t90 != -51934660384200LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x7661 = -1;
	static uint16_t x7662 = 680U;
	uint32_t x7663 = 8U;
	volatile int32_t t91 = 5;

	t91 = ((x7661-(x7662<<x7663))*x7664);

	if (t91 != 22282368) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x7693 = 3694960U;
	int8_t x7694 = INT8_MAX;
	uint8_t x7695 = 0U;
	static int64_t x7696 = -417401991LL;
	volatile int64_t t92 = -960192314055413468LL;

	t92 = ((x7693-(x7694<<x7695))*x7696);

	if (t92 != -1542230650612503LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x7721 = UINT32_MAX;
	uint16_t x7722 = UINT16_MAX;
	int8_t x7723 = 11;

	t93 = ((x7721-(x7722<<x7723))*x7724);

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x7749 = 92365556U;
	volatile int32_t x7750 = INT32_MAX;
	int32_t x7751 = 0;
	static int32_t x7752 = -1;
	volatile uint32_t t94 = 89990761U;

	t94 = ((x7749-(x7750<<x7751))*x7752);

	if (t94 != 2055118091U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x7773 = -1594349;
	uint64_t x7774 = 827177130188LLU;
	volatile uint64_t t95 = 673329LLU;

	t95 = ((x7773-(x7774<<x7775))*x7776);

	if (t95 != 18419639908442647737LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x7989 = 2U;
	volatile uint64_t x7990 = UINT64_MAX;
	int16_t x7991 = 1;
	uint64_t t96 = 2473226822LLU;

	t96 = ((x7989-(x7990<<x7991))*x7992);

	if (t96 != 29560LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x8017 = INT16_MIN;
	volatile int32_t x8019 = 6;

	t97 = ((x8017-(x8018<<x8019))*x8020);

	if (t97 != 3868948928U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x8181 = -661;
	int8_t x8182 = INT8_MAX;
	uint32_t x8183 = 17U;
	volatile int8_t x8184 = -1;
	int32_t t98 = 3152;

	t98 = ((x8181-(x8182<<x8183))*x8184);

	if (t98 != 16646805) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x8233 = INT8_MIN;
	int32_t x8235 = 1;
	static int32_t x8236 = -59249096;

	t99 = ((x8233-(x8234<<x8235))*x8236);

	if (t99 != 2343238064U) { NG(); } else { ; }
	
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

