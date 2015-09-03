#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x13 = 2U;
uint16_t x14 = 118U;
uint8_t x44 = 9U;
static uint64_t x182 = 422873369LLU;
uint8_t x184 = 0U;
static int32_t t3 = -222743712;
uint8_t x188 = 2U;
static int64_t x385 = INT64_MIN;
static int16_t x445 = INT16_MIN;
uint32_t x495 = 0U;
volatile int32_t t8 = -2147;
int32_t t9 = INT32_MIN;
int16_t x650 = INT16_MIN;
int8_t x651 = 3;
int8_t x652 = 0;
volatile uint16_t x852 = 1U;
uint8_t x939 = 1U;
uint8_t x940 = 14U;
static int8_t x965 = -1;
volatile int32_t t14 = 314038563;
volatile int8_t x1013 = INT8_MIN;
int8_t x1014 = 36;
int16_t x1288 = 22;
static volatile int32_t t17 = 218563109;
uint16_t x1299 = 3U;
static uint16_t x1302 = 6U;
volatile int32_t x1389 = 995048;
volatile int32_t t22 = 96267;
uint32_t x1635 = 36U;
int8_t x1661 = INT8_MIN;
int8_t x1681 = -1;
volatile int32_t t25 = 99;
int32_t x1787 = 28907735;
static volatile int16_t x1823 = INT16_MAX;
volatile int32_t x2104 = 0;
int32_t x2366 = 1;
uint64_t t34 = UINT64_MAX;
int64_t t35 = INT64_MIN;
uint16_t x2678 = 87U;
uint32_t x2679 = 10344U;
static uint8_t x2747 = 21U;
uint64_t x2871 = 42319LLU;
int16_t x2872 = 1;
volatile int32_t t40 = -1;
static int32_t x2965 = INT32_MAX;
static int32_t x2982 = INT32_MAX;
volatile uint16_t x2983 = 0U;
static volatile int64_t x3193 = INT64_MAX;
uint32_t x3195 = 3406631U;
volatile uint32_t x3218 = UINT32_MAX;
static volatile int32_t x3220 = 4;
volatile int32_t t48 = 1;
int32_t x3465 = INT32_MIN;
int32_t t50 = 721674569;
static volatile uint64_t x3473 = UINT64_MAX;
uint64_t x3565 = 1LLU;
static int64_t x3566 = INT64_MIN;
int32_t t53 = 15640844;
int32_t x3774 = INT32_MIN;
int32_t t54 = 3;
uint64_t x3791 = UINT64_MAX;
static uint64_t x3901 = 476081191LLU;
static volatile int8_t x3969 = -48;
int64_t x4153 = 1564521078455LL;
uint8_t x4156 = 6U;
int16_t x4189 = 1;
volatile int32_t x4190 = -1;
uint8_t x4214 = UINT8_MAX;
int32_t x4410 = INT32_MIN;
uint16_t x4459 = 969U;
int32_t x4550 = INT32_MIN;
int16_t x4557 = INT16_MIN;
volatile int64_t t72 = -986442450002725582LL;
uint8_t x4860 = 1U;
static volatile uint64_t t76 = 64266585205410LLU;
int64_t x5238 = INT64_MIN;
uint64_t x5239 = UINT64_MAX;
uint64_t x5327 = 97810174036LLU;
uint32_t x5362 = UINT32_MAX;
uint32_t x5363 = UINT32_MAX;
int64_t x5405 = INT64_MAX;
volatile int64_t t82 = INT64_MAX;
static int32_t x5509 = INT32_MIN;
int16_t x5599 = 0;
uint32_t x5747 = 862269397U;
static int32_t x5748 = 17;
static uint32_t x5970 = 1696990249U;
volatile int32_t t90 = -11355;
static uint32_t x6375 = 42U;
int32_t t95 = 3;
static uint32_t x6377 = 252152U;
volatile int8_t x6378 = -1;
uint8_t x6380 = 1U;
int16_t x6410 = -1;
static uint8_t x6423 = 0U;
int8_t x6424 = 1;
int32_t t99 = 379936;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;
	static int8_t x3 = INT8_MAX;
	volatile int64_t x4 = 24LL;
	static int64_t t0 = INT64_MIN;

	t0 = (x1|(x2<=(x3<<x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x15 = 41U;
	volatile uint16_t x16 = 2U;
	int32_t t1 = 50800;

	t1 = (x13|(x14<=(x15<<x16)));

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x41 = 0U;
	volatile int16_t x42 = -1;
	uint64_t x43 = 3466243645915863LLU;
	int32_t t2 = -19;

	t2 = (x41|(x42<=(x43<<x44)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x181 = UINT16_MAX;
	static int32_t x183 = INT32_MAX;

	t3 = (x181|(x182<=(x183<<x184)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	static uint8_t x187 = UINT8_MAX;
	int32_t t4 = -34845517;

	t4 = (x185|(x186<=(x187<<x188)));

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x386 = -11;
	uint64_t x387 = 575034639107LLU;
	uint8_t x388 = 0U;
	int64_t t5 = INT64_MIN;

	t5 = (x385|(x386<=(x387<<x388)));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x446 = 1267307262LLU;
	uint16_t x447 = 6U;
	volatile uint32_t x448 = 3U;
	volatile int32_t t6 = 789;

	t6 = (x445|(x446<=(x447<<x448)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x461 = 0;
	volatile int8_t x462 = -33;
	static uint32_t x463 = 105480U;
	uint8_t x464 = 9U;
	volatile int32_t t7 = 233;

	t7 = (x461|(x462<=(x463<<x464)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x493 = 39U;
	int64_t x494 = 23827548543844LL;
	int8_t x496 = 13;

	t8 = (x493|(x494<=(x495<<x496)));

	if (t8 != 39) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x533 = INT32_MIN;
	uint32_t x534 = UINT32_MAX;
	static uint32_t x535 = UINT32_MAX;
	int8_t x536 = 14;

	t9 = (x533|(x534<=(x535<<x536)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x649 = -58;
	int32_t t10 = 0;

	t10 = (x649|(x650<=(x651<<x652)));

	if (t10 != -57) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x765 = -1;
	uint16_t x766 = 25U;
	static volatile uint64_t x767 = 184782LLU;
	static uint16_t x768 = 52U;
	static int32_t t11 = -35;

	t11 = (x765|(x766<=(x767<<x768)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x849 = 28902241322LL;
	int8_t x850 = INT8_MAX;
	int32_t x851 = 109;
	volatile int64_t t12 = 136836055924864LL;

	t12 = (x849|(x850<=(x851<<x852)));

	if (t12 != 28902241323LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x937 = INT16_MAX;
	uint64_t x938 = 7483399888523LLU;
	volatile int32_t t13 = -5252;

	t13 = (x937|(x938<=(x939<<x940)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x966 = UINT8_MAX;
	int16_t x967 = 11;
	volatile int16_t x968 = 11;

	t14 = (x965|(x966<=(x967<<x968)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1015 = 843U;
	uint8_t x1016 = 2U;
	static volatile int32_t t15 = -278153969;

	t15 = (x1013|(x1014<=(x1015<<x1016)));

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1225 = INT16_MAX;
	uint8_t x1226 = 45U;
	uint32_t x1227 = UINT32_MAX;
	int32_t x1228 = 5;
	int32_t t16 = 5460;

	t16 = (x1225|(x1226<=(x1227<<x1228)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x1285 = -16;
	uint64_t x1286 = UINT64_MAX;
	static uint64_t x1287 = 29LLU;

	t17 = (x1285|(x1286<=(x1287<<x1288)));

	if (t17 != -16) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1297 = 612144177U;
	int32_t x1298 = INT32_MIN;
	uint8_t x1300 = 4U;
	uint32_t t18 = 2U;

	t18 = (x1297|(x1298<=(x1299<<x1300)));

	if (t18 != 612144177U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1301 = INT32_MAX;
	int64_t x1303 = 7LL;
	volatile uint8_t x1304 = 39U;
	int32_t t19 = INT32_MAX;

	t19 = (x1301|(x1302<=(x1303<<x1304)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1337 = INT64_MAX;
	static int8_t x1338 = INT8_MIN;
	int64_t x1339 = 540104LL;
	volatile int8_t x1340 = 3;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x1337|(x1338<=(x1339<<x1340)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1390 = 3137041008LL;
	volatile uint64_t x1391 = 50049LLU;
	int8_t x1392 = 1;
	volatile int32_t t21 = 405852;

	t21 = (x1389|(x1390<=(x1391<<x1392)));

	if (t21 != 995048) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1545 = -1;
	static volatile int16_t x1546 = 6;
	static volatile uint16_t x1547 = 7575U;
	uint8_t x1548 = 2U;

	t22 = (x1545|(x1546<=(x1547<<x1548)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1633 = INT8_MIN;
	int32_t x1634 = INT32_MIN;
	int16_t x1636 = 9;
	volatile int32_t t23 = -29306160;

	t23 = (x1633|(x1634<=(x1635<<x1636)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1662 = 1U;
	int8_t x1663 = 52;
	volatile uint16_t x1664 = 1U;
	int32_t t24 = -296;

	t24 = (x1661|(x1662<=(x1663<<x1664)));

	if (t24 != -127) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1682 = INT64_MIN;
	uint8_t x1683 = UINT8_MAX;
	static uint64_t x1684 = 19LLU;

	t25 = (x1681|(x1682<=(x1683<<x1684)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1721 = INT8_MIN;
	static uint64_t x1722 = 107LLU;
	int16_t x1723 = 473;
	uint8_t x1724 = 7U;
	int32_t t26 = 7;

	t26 = (x1721|(x1722<=(x1723<<x1724)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1785 = INT16_MIN;
	static int64_t x1786 = -1LL;
	int8_t x1788 = 6;
	int32_t t27 = -38809;

	t27 = (x1785|(x1786<=(x1787<<x1788)));

	if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1821 = 0;
	static uint64_t x1822 = UINT64_MAX;
	uint16_t x1824 = 6U;
	volatile int32_t t28 = 46622733;

	t28 = (x1821|(x1822<=(x1823<<x1824)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1865 = UINT8_MAX;
	int16_t x1866 = INT16_MIN;
	volatile uint16_t x1867 = 111U;
	uint32_t x1868 = 7U;
	volatile int32_t t29 = 13;

	t29 = (x1865|(x1866<=(x1867<<x1868)));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1981 = 30LL;
	static volatile uint8_t x1982 = 31U;
	static volatile uint8_t x1983 = 5U;
	int8_t x1984 = 21;
	static int64_t t30 = -127399741010154LL;

	t30 = (x1981|(x1982<=(x1983<<x1984)));

	if (t30 != 31LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x2101 = INT32_MIN;
	uint8_t x2102 = UINT8_MAX;
	int16_t x2103 = 0;
	int32_t t31 = INT32_MIN;

	t31 = (x2101|(x2102<=(x2103<<x2104)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2341 = INT32_MIN;
	static uint8_t x2342 = 4U;
	int32_t x2343 = 51208784;
	int8_t x2344 = 3;
	int32_t t32 = -235;

	t32 = (x2341|(x2342<=(x2343<<x2344)));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2365 = INT64_MAX;
	int64_t x2367 = 5810533120LL;
	uint8_t x2368 = 0U;
	static volatile int64_t t33 = INT64_MAX;

	t33 = (x2365|(x2366<=(x2367<<x2368)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2421 = UINT64_MAX;
	int32_t x2422 = INT32_MIN;
	volatile int64_t x2423 = 23414157786440665LL;
	volatile uint8_t x2424 = 3U;

	t34 = (x2421|(x2422<=(x2423<<x2424)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x2429 = INT64_MIN;
	static volatile int64_t x2430 = INT64_MAX;
	uint8_t x2431 = UINT8_MAX;
	uint8_t x2432 = 1U;

	t35 = (x2429|(x2430<=(x2431<<x2432)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x2633 = 66235655758915925LL;
	int16_t x2634 = -75;
	uint8_t x2635 = 1U;
	uint8_t x2636 = 1U;
	int64_t t36 = 88076537000962849LL;

	t36 = (x2633|(x2634<=(x2635<<x2636)));

	if (t36 != 66235655758915925LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2641 = UINT32_MAX;
	int8_t x2642 = INT8_MIN;
	uint8_t x2643 = 15U;
	uint8_t x2644 = 5U;
	static volatile uint32_t t37 = UINT32_MAX;

	t37 = (x2641|(x2642<=(x2643<<x2644)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2677 = 148;
	uint8_t x2680 = 3U;
	volatile int32_t t38 = -92;

	t38 = (x2677|(x2678<=(x2679<<x2680)));

	if (t38 != 149) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2745 = INT8_MAX;
	volatile int32_t x2746 = -112;
	volatile uint8_t x2748 = 4U;
	int32_t t39 = 434861;

	t39 = (x2745|(x2746<=(x2747<<x2748)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2869 = INT16_MIN;
	int64_t x2870 = INT64_MIN;

	t40 = (x2869|(x2870<=(x2871<<x2872)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2966 = 855237U;
	int64_t x2967 = 2886315459779LL;
	static uint8_t x2968 = 15U;
	static int32_t t41 = INT32_MAX;

	t41 = (x2965|(x2966<=(x2967<<x2968)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2981 = INT32_MIN;
	int8_t x2984 = 25;
	static volatile int32_t t42 = INT32_MIN;

	t42 = (x2981|(x2982<=(x2983<<x2984)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3165 = UINT32_MAX;
	uint16_t x3166 = 3U;
	uint8_t x3167 = UINT8_MAX;
	uint16_t x3168 = 2U;
	static volatile uint32_t t43 = UINT32_MAX;

	t43 = (x3165|(x3166<=(x3167<<x3168)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3194 = 5;
	uint8_t x3196 = 5U;
	int64_t t44 = INT64_MAX;

	t44 = (x3193|(x3194<=(x3195<<x3196)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3217 = 4811U;
	int32_t x3219 = 13725;
	volatile int32_t t45 = 32524530;

	t45 = (x3217|(x3218<=(x3219<<x3220)));

	if (t45 != 4811) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x3285 = INT64_MAX;
	int8_t x3286 = 1;
	int32_t x3287 = 21099;
	int16_t x3288 = 13;
	int64_t t46 = INT64_MAX;

	t46 = (x3285|(x3286<=(x3287<<x3288)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3305 = INT8_MIN;
	int8_t x3306 = 19;
	uint64_t x3307 = 140101272834827LLU;
	static uint8_t x3308 = 2U;
	static volatile int32_t t47 = -37257526;

	t47 = (x3305|(x3306<=(x3307<<x3308)));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3369 = 740U;
	int16_t x3370 = 2085;
	uint32_t x3371 = UINT32_MAX;
	int8_t x3372 = 18;

	t48 = (x3369|(x3370<=(x3371<<x3372)));

	if (t48 != 741) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3389 = INT16_MAX;
	uint16_t x3390 = 985U;
	int8_t x3391 = INT8_MAX;
	uint8_t x3392 = 9U;
	volatile int32_t t49 = -21;

	t49 = (x3389|(x3390<=(x3391<<x3392)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3466 = INT64_MIN;
	uint16_t x3467 = 12778U;
	uint16_t x3468 = 7U;

	t50 = (x3465|(x3466<=(x3467<<x3468)));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3474 = INT8_MIN;
	uint32_t x3475 = 45U;
	uint8_t x3476 = 1U;
	static uint64_t t51 = UINT64_MAX;

	t51 = (x3473|(x3474<=(x3475<<x3476)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3567 = 952291764922415LLU;
	uint32_t x3568 = 4U;
	static uint64_t t52 = 940454143415904LLU;

	t52 = (x3565|(x3566<=(x3567<<x3568)));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3757 = INT32_MIN;
	static int32_t x3758 = INT32_MIN;
	int8_t x3759 = INT8_MAX;
	static uint16_t x3760 = 7U;

	t53 = (x3757|(x3758<=(x3759<<x3760)));

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3773 = UINT8_MAX;
	int32_t x3775 = 1;
	int8_t x3776 = 0;

	t54 = (x3773|(x3774<=(x3775<<x3776)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3789 = INT16_MAX;
	uint16_t x3790 = 13U;
	uint8_t x3792 = 3U;
	int32_t t55 = 371810878;

	t55 = (x3789|(x3790<=(x3791<<x3792)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3841 = INT64_MIN;
	volatile int16_t x3842 = -8;
	uint64_t x3843 = 803320LLU;
	uint8_t x3844 = 8U;
	int64_t t56 = INT64_MIN;

	t56 = (x3841|(x3842<=(x3843<<x3844)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x3857 = -7055LL;
	int32_t x3858 = -77810;
	static int16_t x3859 = 14078;
	int8_t x3860 = 0;
	static volatile int64_t t57 = -55444LL;

	t57 = (x3857|(x3858<=(x3859<<x3860)));

	if (t57 != -7055LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3902 = INT64_MAX;
	volatile uint8_t x3903 = 4U;
	int32_t x3904 = 2;
	uint64_t t58 = 402654565194LLU;

	t58 = (x3901|(x3902<=(x3903<<x3904)));

	if (t58 != 476081191LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3970 = -1;
	uint32_t x3971 = UINT32_MAX;
	uint32_t x3972 = 1U;
	volatile int32_t t59 = 414796;

	t59 = (x3969|(x3970<=(x3971<<x3972)));

	if (t59 != -48) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4021 = INT16_MIN;
	uint8_t x4022 = 10U;
	uint32_t x4023 = 2367043U;
	int64_t x4024 = 27LL;
	volatile int32_t t60 = 6192060;

	t60 = (x4021|(x4022<=(x4023<<x4024)));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4154 = -292847543;
	static uint16_t x4155 = 53U;
	int64_t t61 = -1874883633624LL;

	t61 = (x4153|(x4154<=(x4155<<x4156)));

	if (t61 != 1564521078455LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x4165 = INT32_MAX;
	volatile int8_t x4166 = INT8_MIN;
	uint16_t x4167 = 14U;
	int8_t x4168 = 1;
	static volatile int32_t t62 = INT32_MAX;

	t62 = (x4165|(x4166<=(x4167<<x4168)));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4191 = UINT32_MAX;
	static uint8_t x4192 = 25U;
	volatile int32_t t63 = 9070;

	t63 = (x4189|(x4190<=(x4191<<x4192)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x4201 = 1417;
	uint16_t x4202 = 3U;
	static uint64_t x4203 = 3071448LLU;
	uint8_t x4204 = 3U;
	volatile int32_t t64 = -89290236;

	t64 = (x4201|(x4202<=(x4203<<x4204)));

	if (t64 != 1417) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x4213 = INT64_MIN;
	uint8_t x4215 = UINT8_MAX;
	volatile uint16_t x4216 = 9U;
	static int64_t t65 = 1497436LL;

	t65 = (x4213|(x4214<=(x4215<<x4216)));

	if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4321 = -59;
	int32_t x4322 = INT32_MAX;
	int64_t x4323 = 44764779452091727LL;
	int8_t x4324 = 1;
	static volatile int32_t t66 = -35898;

	t66 = (x4321|(x4322<=(x4323<<x4324)));

	if (t66 != -59) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4409 = INT8_MIN;
	uint8_t x4411 = UINT8_MAX;
	volatile int8_t x4412 = 0;
	volatile int32_t t67 = 2727;

	t67 = (x4409|(x4410<=(x4411<<x4412)));

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4457 = -361;
	static uint16_t x4458 = 3802U;
	uint16_t x4460 = 3U;
	volatile int32_t t68 = 6067;

	t68 = (x4457|(x4458<=(x4459<<x4460)));

	if (t68 != -361) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4485 = INT8_MIN;
	int32_t x4486 = INT32_MAX;
	uint8_t x4487 = 8U;
	int32_t x4488 = 7;
	volatile int32_t t69 = 6767;

	t69 = (x4485|(x4486<=(x4487<<x4488)));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4549 = 6;
	uint64_t x4551 = 145198924LLU;
	int64_t x4552 = 2LL;
	volatile int32_t t70 = 62;

	t70 = (x4549|(x4550<=(x4551<<x4552)));

	if (t70 != 6) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4558 = INT16_MAX;
	volatile int8_t x4559 = INT8_MAX;
	uint16_t x4560 = 6U;
	volatile int32_t t71 = 400741799;

	t71 = (x4557|(x4558<=(x4559<<x4560)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x4577 = INT64_MIN;
	uint32_t x4578 = 29U;
	volatile int16_t x4579 = 3127;
	int8_t x4580 = 1;

	t72 = (x4577|(x4578<=(x4579<<x4580)));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4857 = 9U;
	static int32_t x4858 = INT32_MAX;
	int32_t x4859 = 1623050;
	volatile int32_t t73 = -5856;

	t73 = (x4857|(x4858<=(x4859<<x4860)));

	if (t73 != 9) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4905 = -1;
	uint32_t x4906 = 11U;
	static uint32_t x4907 = UINT32_MAX;
	uint16_t x4908 = 10U;
	volatile int32_t t74 = -215162968;

	t74 = (x4905|(x4906<=(x4907<<x4908)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4909 = UINT64_MAX;
	static uint16_t x4910 = 61U;
	uint16_t x4911 = UINT16_MAX;
	volatile int8_t x4912 = 1;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x4909|(x4910<=(x4911<<x4912)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5113 = 14LLU;
	uint32_t x5114 = 5U;
	static volatile int16_t x5115 = 1;
	uint16_t x5116 = 1U;

	t76 = (x5113|(x5114<=(x5115<<x5116)));

	if (t76 != 14LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x5193 = INT8_MIN;
	int32_t x5194 = 359152;
	uint32_t x5195 = 409051398U;
	uint8_t x5196 = 10U;
	int32_t t77 = 27;

	t77 = (x5193|(x5194<=(x5195<<x5196)));

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5237 = -1;
	uint8_t x5240 = 13U;
	volatile int32_t t78 = -10849;

	t78 = (x5237|(x5238<=(x5239<<x5240)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5309 = 16883091841201LL;
	volatile int32_t x5310 = 33568500;
	static uint16_t x5311 = UINT16_MAX;
	int16_t x5312 = 5;
	int64_t t79 = -117979438791LL;

	t79 = (x5309|(x5310<=(x5311<<x5312)));

	if (t79 != 16883091841201LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5325 = 1LLU;
	volatile uint16_t x5326 = 1604U;
	uint16_t x5328 = 0U;
	uint64_t t80 = 1383173587431372LLU;

	t80 = (x5325|(x5326<=(x5327<<x5328)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x5361 = INT64_MAX;
	uint32_t x5364 = 0U;
	int64_t t81 = INT64_MAX;

	t81 = (x5361|(x5362<=(x5363<<x5364)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5406 = INT16_MAX;
	int32_t x5407 = 5;
	int16_t x5408 = 0;

	t82 = (x5405|(x5406<=(x5407<<x5408)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5445 = INT8_MIN;
	int32_t x5446 = INT32_MIN;
	int16_t x5447 = 1;
	uint8_t x5448 = 10U;
	static int32_t t83 = 29498384;

	t83 = (x5445|(x5446<=(x5447<<x5448)));

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5510 = 51U;
	int8_t x5511 = INT8_MAX;
	uint8_t x5512 = 6U;
	volatile int32_t t84 = -260;

	t84 = (x5509|(x5510<=(x5511<<x5512)));

	if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5593 = INT32_MIN;
	int64_t x5594 = -864253LL;
	volatile uint8_t x5595 = 13U;
	int8_t x5596 = 1;
	int32_t t85 = -7;

	t85 = (x5593|(x5594<=(x5595<<x5596)));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5597 = UINT32_MAX;
	static int32_t x5598 = INT32_MIN;
	uint8_t x5600 = 0U;
	static uint32_t t86 = UINT32_MAX;

	t86 = (x5597|(x5598<=(x5599<<x5600)));

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5745 = -1;
	int64_t x5746 = INT64_MIN;
	volatile int32_t t87 = 511;

	t87 = (x5745|(x5746<=(x5747<<x5748)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5881 = UINT64_MAX;
	int8_t x5882 = 11;
	volatile uint8_t x5883 = UINT8_MAX;
	static uint8_t x5884 = 2U;
	uint64_t t88 = UINT64_MAX;

	t88 = (x5881|(x5882<=(x5883<<x5884)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x5889 = 7U;
	int32_t x5890 = -731963119;
	uint32_t x5891 = 3U;
	int64_t x5892 = 27LL;
	volatile int32_t t89 = -511;

	t89 = (x5889|(x5890<=(x5891<<x5892)));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5969 = INT16_MAX;
	static uint32_t x5971 = 2385986U;
	static int8_t x5972 = 0;

	t90 = (x5969|(x5970<=(x5971<<x5972)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x6093 = 4U;
	uint64_t x6094 = 517681241438334606LLU;
	int32_t x6095 = 243208;
	uint8_t x6096 = 11U;
	static volatile uint32_t t91 = 15583733U;

	t91 = (x6093|(x6094<=(x6095<<x6096)));

	if (t91 != 4U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x6157 = INT32_MIN;
	static uint16_t x6158 = 1U;
	static uint16_t x6159 = UINT16_MAX;
	int16_t x6160 = 0;
	int32_t t92 = -2;

	t92 = (x6157|(x6158<=(x6159<<x6160)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6245 = 4361198U;
	int8_t x6246 = 3;
	int16_t x6247 = INT16_MAX;
	uint32_t x6248 = 0U;
	uint32_t t93 = 469U;

	t93 = (x6245|(x6246<=(x6247<<x6248)));

	if (t93 != 4361199U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x6269 = 43780761866963LLU;
	volatile int32_t x6270 = INT32_MIN;
	uint16_t x6271 = 3U;
	uint8_t x6272 = 0U;
	volatile uint64_t t94 = 2LLU;

	t94 = (x6269|(x6270<=(x6271<<x6272)));

	if (t94 != 43780761866963LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6373 = INT8_MIN;
	uint16_t x6374 = UINT16_MAX;
	int8_t x6376 = 4;

	t95 = (x6373|(x6374<=(x6375<<x6376)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6379 = INT8_MAX;
	uint32_t t96 = 0U;

	t96 = (x6377|(x6378<=(x6379<<x6380)));

	if (t96 != 252153U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6409 = 160126348340LLU;
	static uint64_t x6411 = UINT64_MAX;
	static volatile uint32_t x6412 = 0U;
	volatile uint64_t t97 = 0LLU;

	t97 = (x6409|(x6410<=(x6411<<x6412)));

	if (t97 != 160126348341LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6421 = 0LLU;
	static int32_t x6422 = -1;
	uint64_t t98 = 26555LLU;

	t98 = (x6421|(x6422<=(x6423<<x6424)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6433 = 4972;
	volatile int64_t x6434 = INT64_MAX;
	static volatile int16_t x6435 = INT16_MAX;
	uint16_t x6436 = 2U;

	t99 = (x6433|(x6434<=(x6435<<x6436)));

	if (t99 != 4972) { NG(); } else { ; }
	
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

