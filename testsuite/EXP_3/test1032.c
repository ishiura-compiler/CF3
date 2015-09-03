#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x131 = UINT8_MAX;
int8_t x414 = INT8_MIN;
volatile uint16_t x423 = 12U;
static int64_t t3 = 8443111774584018LL;
static int64_t t4 = 81273414LL;
int64_t x590 = INT64_MAX;
int8_t x592 = 2;
int32_t x605 = -625;
volatile uint32_t t9 = 2643231U;
uint16_t x805 = 11U;
static int32_t x807 = 39542069;
int64_t t10 = 0LL;
int64_t x913 = INT64_MIN;
uint8_t x916 = 1U;
static volatile int64_t t14 = -15471534131LL;
static volatile uint64_t x1019 = UINT64_MAX;
static int64_t x1190 = -30LL;
int64_t t16 = 906694371455798136LL;
uint32_t x1203 = UINT32_MAX;
int16_t x1208 = 1;
int32_t x1349 = -1;
volatile uint64_t x1351 = 3282234521314089562LLU;
static volatile int32_t t20 = -427;
uint16_t x1756 = 3U;
volatile int16_t x2338 = 36;
uint32_t x2339 = 4U;
int64_t x2347 = INT64_MAX;
static int32_t x2491 = 19585317;
volatile uint32_t x2567 = UINT32_MAX;
uint32_t x2735 = UINT32_MAX;
static uint32_t t35 = 183809U;
int64_t x2914 = -242LL;
uint16_t x2915 = 7U;
int64_t x3209 = INT64_MIN;
volatile int64_t t40 = -5073086969527086LL;
volatile int8_t x3350 = -1;
uint16_t x3484 = 4U;
static volatile uint32_t x3563 = 129U;
volatile uint32_t t43 = 24U;
static int32_t x3666 = INT32_MIN;
int8_t x3826 = -1;
int8_t x4031 = INT8_MAX;
static int32_t t49 = 177263;
static int32_t x4112 = 0;
volatile uint64_t t50 = 9011679243246816LLU;
uint64_t x4202 = UINT64_MAX;
volatile int32_t t53 = -126546;
volatile uint64_t x4353 = UINT64_MAX;
uint16_t x4355 = 117U;
int8_t x4430 = -28;
volatile int32_t t56 = 192950;
static volatile uint32_t x4535 = UINT32_MAX;
uint8_t x4536 = 19U;
int8_t x4722 = INT8_MIN;
static volatile int16_t x4759 = 51;
volatile uint64_t x4882 = 171757209LLU;
static int64_t x5141 = -1486768267LL;
uint64_t x5229 = 2645LLU;
uint32_t x5295 = UINT32_MAX;
int8_t x5296 = 1;
volatile int8_t x5357 = -1;
int64_t x5433 = 8242187472493511LL;
volatile int32_t x5613 = INT32_MIN;
uint64_t x5614 = 901376453490455340LLU;
int16_t x5925 = -7;
int64_t x5939 = INT64_MAX;
int8_t x5986 = 3;
static uint8_t x5988 = 2U;
static int16_t x6010 = 3;
uint64_t x6011 = UINT64_MAX;
uint8_t x6012 = 2U;
uint16_t x6059 = UINT16_MAX;
uint32_t t76 = 332239U;
int32_t x6089 = -97200405;
volatile int8_t x6103 = INT8_MAX;
static int8_t x6289 = INT8_MIN;
int8_t x6350 = 1;
int16_t x6351 = INT16_MAX;
static int32_t t80 = -282226263;
uint32_t x6370 = 88U;
int8_t x6372 = 46;
uint16_t x6555 = UINT16_MAX;
uint32_t x6683 = 2443470U;
uint8_t x6684 = 4U;
static volatile uint32_t t85 = 53542230U;
static uint64_t t86 = 482039214495LLU;
uint8_t x6963 = UINT8_MAX;
int32_t t87 = -287450882;
int8_t x7146 = -2;
volatile int8_t x7194 = -5;


void f0(void) {
	volatile int8_t x129 = -1;
	int64_t x130 = -445780595359430LL;
	uint8_t x132 = 2U;
	int64_t t0 = 2018325LL;

	t0 = ((x129-x130)%(x131>>x132));

	if (t0 != 43LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x413 = UINT16_MAX;
	volatile uint32_t x415 = 215U;
	int64_t x416 = 1LL;
	uint32_t t1 = 2471667U;

	t1 = ((x413-x414)%(x415>>x416));

	if (t1 != 72U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = -1;
	uint8_t x424 = 0U;
	static volatile int32_t t2 = 3097;

	t2 = ((x421-x422)%(x423>>x424));

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x461 = -1LL;
	int32_t x462 = INT32_MIN;
	static uint32_t x463 = UINT32_MAX;
	volatile uint32_t x464 = 2U;

	t3 = ((x461-x462)%(x463>>x464));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x529 = UINT8_MAX;
	int64_t x530 = 115994LL;
	volatile uint32_t x531 = 16559U;
	volatile uint8_t x532 = 7U;

	t4 = ((x529-x530)%(x531>>x532));

	if (t4 != -26LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x589 = -1;
	volatile uint32_t x591 = UINT32_MAX;
	int64_t t5 = 2579536929605LL;

	t5 = ((x589-x590)%(x591>>x592));

	if (t5 != -8LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x606 = 182U;
	int64_t x607 = 26972206LL;
	uint16_t x608 = 13U;
	volatile int64_t t6 = -473593560385759337LL;

	t6 = ((x605-x606)%(x607>>x608));

	if (t6 != 2725LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x685 = 3098U;
	static uint8_t x686 = 0U;
	int64_t x687 = INT64_MAX;
	int8_t x688 = 1;
	volatile int64_t t7 = -7411LL;

	t7 = ((x685-x686)%(x687>>x688));

	if (t7 != 3098LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x713 = 3U;
	volatile int8_t x714 = INT8_MIN;
	int64_t x715 = INT64_MAX;
	volatile uint16_t x716 = 21U;
	volatile int64_t t8 = 0LL;

	t8 = ((x713-x714)%(x715>>x716));

	if (t8 != 131LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MIN;
	uint32_t x739 = 8737U;
	int8_t x740 = 3;

	t9 = ((x737-x738)%(x739>>x740));

	if (t9 != 120U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x806 = 232977674664LL;
	uint8_t x808 = 0U;

	t10 = ((x805-x806)%(x807>>x808));

	if (t10 != -35346174LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x841 = INT8_MIN;
	volatile int16_t x842 = INT16_MIN;
	static uint32_t x843 = 82048057U;
	uint8_t x844 = 0U;
	uint32_t t11 = 2008594U;

	t11 = ((x841-x842)%(x843>>x844));

	if (t11 != 32640U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x849 = -1;
	volatile uint8_t x850 = UINT8_MAX;
	static uint16_t x851 = UINT16_MAX;
	volatile uint8_t x852 = 3U;
	static volatile int32_t t12 = 0;

	t12 = ((x849-x850)%(x851>>x852));

	if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x914 = -6;
	uint16_t x915 = UINT16_MAX;
	int64_t t13 = 1371371259317LL;

	t13 = ((x913-x914)%(x915>>x916));

	if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x969 = INT16_MIN;
	static volatile int16_t x970 = 0;
	int64_t x971 = INT64_MAX;
	volatile int8_t x972 = 1;

	t14 = ((x969-x970)%(x971>>x972));

	if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x1017 = -1;
	static int8_t x1018 = INT8_MAX;
	int8_t x1020 = 0;
	volatile uint64_t t15 = 1043471424964860697LLU;

	t15 = ((x1017-x1018)%(x1019>>x1020));

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1189 = 0U;
	uint8_t x1191 = UINT8_MAX;
	volatile int16_t x1192 = 1;

	t16 = ((x1189-x1190)%(x1191>>x1192));

	if (t16 != 30LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1201 = UINT8_MAX;
	static volatile int8_t x1202 = -1;
	volatile int16_t x1204 = 0;
	static volatile uint32_t t17 = 694373U;

	t17 = ((x1201-x1202)%(x1203>>x1204));

	if (t17 != 256U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1205 = 88368560LL;
	uint8_t x1206 = 1U;
	uint8_t x1207 = 57U;
	int64_t t18 = 3562364488506823764LL;

	t18 = ((x1205-x1206)%(x1207>>x1208));

	if (t18 != 27LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1350 = UINT16_MAX;
	volatile int8_t x1352 = 1;
	volatile uint64_t t19 = 775880391LLU;

	t19 = ((x1349-x1350)%(x1351>>x1352));

	if (t19 != 394454206481993489LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1453 = INT16_MAX;
	int8_t x1454 = INT8_MAX;
	int32_t x1455 = INT32_MAX;
	static uint8_t x1456 = 26U;

	t20 = ((x1453-x1454)%(x1455>>x1456));

	if (t20 != 28) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1693 = INT16_MIN;
	int32_t x1694 = -3946;
	static uint16_t x1695 = 345U;
	uint8_t x1696 = 5U;
	volatile int32_t t21 = -1059000;

	t21 = ((x1693-x1694)%(x1695>>x1696));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1709 = INT16_MIN;
	volatile int64_t x1710 = 0LL;
	uint64_t x1711 = UINT64_MAX;
	int8_t x1712 = 1;
	uint64_t t22 = 106286LLU;

	t22 = ((x1709-x1710)%(x1711>>x1712));

	if (t22 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1753 = INT8_MAX;
	int16_t x1754 = INT16_MIN;
	int64_t x1755 = INT64_MAX;
	int64_t t23 = 134260LL;

	t23 = ((x1753-x1754)%(x1755>>x1756));

	if (t23 != 32895LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1901 = 1;
	uint8_t x1902 = 100U;
	uint64_t x1903 = 109995173138524467LLU;
	int8_t x1904 = 1;
	uint64_t t24 = 8711881817LLU;

	t24 = ((x1901-x1902)%(x1903>>x1904));

	if (t24 != 22552573006703462LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x2109 = -1;
	static uint8_t x2110 = 92U;
	static int16_t x2111 = INT16_MAX;
	uint32_t x2112 = 3U;
	volatile int32_t t25 = 6582;

	t25 = ((x2109-x2110)%(x2111>>x2112));

	if (t25 != -93) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x2181 = INT64_MIN;
	static int16_t x2182 = -1;
	int64_t x2183 = INT64_MAX;
	uint8_t x2184 = 22U;
	volatile int64_t t26 = -1147520879065203LL;

	t26 = ((x2181-x2182)%(x2183>>x2184));

	if (t26 != -4194303LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2277 = INT64_MIN;
	volatile int8_t x2278 = INT8_MIN;
	int64_t x2279 = 163124257063412178LL;
	uint32_t x2280 = 4U;
	static int64_t t27 = -5LL;

	t27 = ((x2277-x2278)%(x2279>>x2280));

	if (t27 != -6851512771987736LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2297 = 92U;
	volatile int64_t x2298 = -2302LL;
	uint32_t x2299 = 902673U;
	static volatile int16_t x2300 = 4;
	volatile int64_t t28 = 1897171LL;

	t28 = ((x2297-x2298)%(x2299>>x2300));

	if (t28 != 2394LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x2337 = 0U;
	volatile uint8_t x2340 = 1U;
	uint32_t t29 = 58192352U;

	t29 = ((x2337-x2338)%(x2339>>x2340));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2345 = INT8_MIN;
	uint32_t x2346 = 27821U;
	uint64_t x2348 = 23LLU;
	static volatile int64_t t30 = -45187226460619LL;

	t30 = ((x2345-x2346)%(x2347>>x2348));

	if (t30 != 4294939347LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2489 = 11U;
	int16_t x2490 = -940;
	uint8_t x2492 = 4U;
	volatile int32_t t31 = 329;

	t31 = ((x2489-x2490)%(x2491>>x2492));

	if (t31 != 951) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x2509 = 0;
	int16_t x2510 = INT16_MIN;
	volatile int16_t x2511 = INT16_MAX;
	int32_t x2512 = 0;
	static volatile int32_t t32 = -3149823;

	t32 = ((x2509-x2510)%(x2511>>x2512));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2565 = 11;
	uint32_t x2566 = 50244U;
	static uint8_t x2568 = 8U;
	volatile uint32_t t33 = 3582U;

	t33 = ((x2565-x2566)%(x2567>>x2568));

	if (t33 != 16727238U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x2677 = INT32_MAX;
	static uint8_t x2678 = 109U;
	static int16_t x2679 = INT16_MAX;
	volatile uint8_t x2680 = 0U;
	volatile int32_t t34 = 55514;

	t34 = ((x2677-x2678)%(x2679>>x2680));

	if (t34 != 32659) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2733 = INT16_MAX;
	int32_t x2734 = -1;
	static uint8_t x2736 = 4U;

	t35 = ((x2733-x2734)%(x2735>>x2736));

	if (t35 != 32768U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2745 = INT8_MAX;
	int32_t x2746 = 376007268;
	volatile int64_t x2747 = INT64_MAX;
	uint8_t x2748 = 7U;
	int64_t t36 = -182907646146LL;

	t36 = ((x2745-x2746)%(x2747>>x2748));

	if (t36 != -376007141LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2793 = UINT16_MAX;
	int16_t x2794 = -1;
	uint32_t x2795 = 181014941U;
	int8_t x2796 = 1;
	uint32_t t37 = 161141496U;

	t37 = ((x2793-x2794)%(x2795>>x2796));

	if (t37 != 65536U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2913 = 1U;
	int8_t x2916 = 1;
	int64_t t38 = -583528LL;

	t38 = ((x2913-x2914)%(x2915>>x2916));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x3041 = INT16_MAX;
	volatile int64_t x3042 = INT64_MAX;
	uint64_t x3043 = 11895LLU;
	uint8_t x3044 = 2U;
	uint64_t t39 = 485402169LLU;

	t39 = ((x3041-x3042)%(x3043>>x3044));

	if (t39 != 2956LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3210 = -114799;
	static uint32_t x3211 = UINT32_MAX;
	int8_t x3212 = 2;

	t40 = ((x3209-x3210)%(x3211>>x3212));

	if (t40 != -1073627032LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x3349 = INT32_MIN;
	static uint64_t x3351 = UINT64_MAX;
	uint16_t x3352 = 51U;
	volatile uint64_t t41 = 1288223788907577340LLU;

	t41 = ((x3349-x3350)%(x3351>>x3352));

	if (t41 != 4065LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3481 = INT32_MIN;
	int32_t x3482 = -1;
	uint32_t x3483 = UINT32_MAX;
	volatile uint32_t t42 = 5438316U;

	t42 = ((x3481-x3482)%(x3483>>x3484));

	if (t42 != 9U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3561 = 2678U;
	volatile int16_t x3562 = -1;
	static uint32_t x3564 = 0U;

	t43 = ((x3561-x3562)%(x3563>>x3564));

	if (t43 != 99U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3565 = 22;
	volatile int8_t x3566 = INT8_MIN;
	uint64_t x3567 = 597135500LLU;
	int16_t x3568 = 1;
	uint64_t t44 = 29185853392LLU;

	t44 = ((x3565-x3566)%(x3567>>x3568));

	if (t44 != 150LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3665 = INT8_MIN;
	volatile uint64_t x3667 = UINT64_MAX;
	uint16_t x3668 = 1U;
	static uint64_t t45 = 10869054645342092LLU;

	t45 = ((x3665-x3666)%(x3667>>x3668));

	if (t45 != 2147483520LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3801 = -1LL;
	volatile int64_t x3802 = INT64_MIN;
	volatile uint64_t x3803 = 209057LLU;
	int8_t x3804 = 4;
	uint64_t t46 = 141675LLU;

	t46 = ((x3801-x3802)%(x3803>>x3804));

	if (t46 != 2855LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3821 = UINT64_MAX;
	static uint32_t x3822 = 3U;
	int16_t x3823 = INT16_MAX;
	volatile int8_t x3824 = 1;
	static volatile uint64_t t47 = 5245647327017LLU;

	t47 = ((x3821-x3822)%(x3823>>x3824));

	if (t47 != 252LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x3825 = 3206LLU;
	int16_t x3827 = 6719;
	static volatile int16_t x3828 = 5;
	volatile uint64_t t48 = 34322984781727265LLU;

	t48 = ((x3825-x3826)%(x3827>>x3828));

	if (t48 != 72LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x4029 = INT8_MIN;
	int32_t x4030 = 1357747;
	volatile uint8_t x4032 = 5U;

	t49 = ((x4029-x4030)%(x4031>>x4032));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x4109 = INT16_MIN;
	static uint8_t x4110 = UINT8_MAX;
	uint64_t x4111 = 14828995837217LLU;

	t50 = ((x4109-x4110)%(x4111>>x4112));

	if (t50 != 7096061710405LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x4201 = -918259392;
	uint64_t x4203 = 22850698145LLU;
	static volatile uint16_t x4204 = 7U;
	uint64_t t51 = 7583450334153LLU;

	t51 = ((x4201-x4202)%(x4203>>x4204));

	if (t51 != 123514765LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x4265 = -1;
	int64_t x4266 = INT64_MIN;
	static volatile uint16_t x4267 = 11380U;
	uint8_t x4268 = 3U;
	volatile int64_t t52 = 2621655LL;

	t52 = ((x4265-x4266)%(x4267>>x4268));

	if (t52 != 1249LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x4325 = UINT16_MAX;
	uint16_t x4326 = 101U;
	int16_t x4327 = INT16_MAX;
	uint16_t x4328 = 7U;

	t53 = ((x4325-x4326)%(x4327>>x4328));

	if (t53 != 154) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4354 = 24503303826LLU;
	uint8_t x4356 = 3U;
	volatile uint64_t t54 = 122LLU;

	t54 = ((x4353-x4354)%(x4355>>x4356));

	if (t54 != 7LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4397 = -1LL;
	int16_t x4398 = INT16_MIN;
	uint32_t x4399 = UINT32_MAX;
	static uint32_t x4400 = 0U;
	static volatile int64_t t55 = -1794LL;

	t55 = ((x4397-x4398)%(x4399>>x4400));

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4429 = UINT8_MAX;
	uint8_t x4431 = UINT8_MAX;
	static uint8_t x4432 = 3U;

	t56 = ((x4429-x4430)%(x4431>>x4432));

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x4533 = INT8_MIN;
	uint64_t x4534 = 499004LLU;
	uint64_t t57 = 898751153273185081LLU;

	t57 = ((x4533-x4534)%(x4535>>x4536));

	if (t57 != 4615LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x4721 = 0;
	static int16_t x4723 = 1533;
	int32_t x4724 = 3;
	int32_t t58 = -49041;

	t58 = ((x4721-x4722)%(x4723>>x4724));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4757 = 1689LLU;
	int16_t x4758 = INT16_MIN;
	static int16_t x4760 = 1;
	uint64_t t59 = 4523492859933958582LLU;

	t59 = ((x4757-x4758)%(x4759>>x4760));

	if (t59 != 7LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4801 = 695LL;
	uint8_t x4802 = UINT8_MAX;
	int64_t x4803 = INT64_MAX;
	int16_t x4804 = 3;
	volatile int64_t t60 = -5269698LL;

	t60 = ((x4801-x4802)%(x4803>>x4804));

	if (t60 != 440LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4881 = -1;
	uint16_t x4883 = 4117U;
	volatile int64_t x4884 = 0LL;
	uint64_t t61 = 1719LLU;

	t61 = ((x4881-x4882)%(x4883>>x4884));

	if (t61 != 3438LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x5069 = INT16_MIN;
	static int16_t x5070 = INT16_MAX;
	static uint8_t x5071 = 47U;
	uint8_t x5072 = 1U;
	volatile int32_t t62 = 301;

	t62 = ((x5069-x5070)%(x5071>>x5072));

	if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x5142 = INT8_MIN;
	volatile uint16_t x5143 = 3U;
	uint16_t x5144 = 0U;
	int64_t t63 = -7LL;

	t63 = ((x5141-x5142)%(x5143>>x5144));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x5169 = 1049410810U;
	static volatile uint32_t x5170 = 58120U;
	static volatile int8_t x5171 = INT8_MAX;
	int32_t x5172 = 1;
	uint32_t t64 = 5U;

	t64 = ((x5169-x5170)%(x5171>>x5172));

	if (t64 != 57U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x5230 = -86478;
	int32_t x5231 = 156416;
	int8_t x5232 = 1;
	volatile uint64_t t65 = 458132058975592LLU;

	t65 = ((x5229-x5230)%(x5231>>x5232));

	if (t65 != 10915LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x5293 = 4U;
	int8_t x5294 = INT8_MAX;
	uint32_t t66 = 38173275U;

	t66 = ((x5293-x5294)%(x5295>>x5296));

	if (t66 != 2147483526U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x5313 = 8536046906LLU;
	uint64_t x5314 = UINT64_MAX;
	static uint64_t x5315 = 684115070324LLU;
	static uint8_t x5316 = 3U;
	uint64_t t67 = 1612LLU;

	t67 = ((x5313-x5314)%(x5315>>x5316));

	if (t67 != 8536046907LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x5358 = 64U;
	static int64_t x5359 = INT64_MAX;
	uint8_t x5360 = 30U;
	int64_t t68 = 16515300800311LL;

	t68 = ((x5357-x5358)%(x5359>>x5360));

	if (t68 != -65LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x5434 = UINT16_MAX;
	int8_t x5435 = INT8_MAX;
	int8_t x5436 = 0;
	int64_t t69 = 987LL;

	t69 = ((x5433-x5434)%(x5435>>x5436));

	if (t69 != 101LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x5615 = 8059U;
	static volatile uint8_t x5616 = 0U;
	static volatile uint64_t t70 = 1386213881LLU;

	t70 = ((x5613-x5614)%(x5615>>x5616));

	if (t70 != 7811LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x5926 = 63U;
	uint64_t x5927 = UINT64_MAX;
	uint16_t x5928 = 1U;
	volatile uint64_t t71 = 0LLU;

	t71 = ((x5925-x5926)%(x5927>>x5928));

	if (t71 != 9223372036854775739LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x5929 = INT64_MAX;
	uint32_t x5930 = UINT32_MAX;
	uint64_t x5931 = UINT64_MAX;
	volatile uint8_t x5932 = 49U;
	uint64_t t72 = 11589881892058407LLU;

	t72 = ((x5929-x5930)%(x5931>>x5932));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x5937 = 656409609U;
	static int16_t x5938 = INT16_MAX;
	volatile int8_t x5940 = 13;
	int64_t t73 = 348428194523531490LL;

	t73 = ((x5937-x5938)%(x5939>>x5940));

	if (t73 != 656376842LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x5985 = INT16_MIN;
	uint32_t x5987 = 16434U;
	uint32_t t74 = 75386U;

	t74 = ((x5985-x5986)%(x5987>>x5988));

	if (t74 != 4093U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x6009 = 938428U;
	uint64_t t75 = 1998LLU;

	t75 = ((x6009-x6010)%(x6011>>x6012));

	if (t75 != 938425LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x6057 = INT8_MIN;
	static volatile uint32_t x6058 = UINT32_MAX;
	volatile uint32_t x6060 = 3U;

	t76 = ((x6057-x6058)%(x6059>>x6060));

	if (t76 != 8128U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x6090 = -1;
	uint64_t x6091 = UINT64_MAX;
	static uint8_t x6092 = 11U;
	volatile uint64_t t77 = 1955922LLU;

	t77 = ((x6089-x6090)%(x6091>>x6092));

	if (t77 != 9007199157542635LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x6101 = 1429;
	static uint8_t x6102 = 1U;
	int8_t x6104 = 0;
	volatile int32_t t78 = -479548;

	t78 = ((x6101-x6102)%(x6103>>x6104));

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x6290 = 81287668LLU;
	int64_t x6291 = INT64_MAX;
	static uint8_t x6292 = 1U;
	volatile uint64_t t79 = 41633195583140408LLU;

	t79 = ((x6289-x6290)%(x6291>>x6292));

	if (t79 != 4611686018346100111LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x6349 = -178;
	volatile int8_t x6352 = 4;

	t80 = ((x6349-x6350)%(x6351>>x6352));

	if (t80 != -179) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6361 = INT16_MAX;
	volatile uint16_t x6362 = 149U;
	uint16_t x6363 = UINT16_MAX;
	uint8_t x6364 = 1U;
	int32_t t81 = 71;

	t81 = ((x6361-x6362)%(x6363>>x6364));

	if (t81 != 32618) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x6369 = -2;
	static int64_t x6371 = 126181770997740727LL;
	static volatile int64_t t82 = 3272657608812657114LL;

	t82 = ((x6369-x6370)%(x6371>>x6372));

	if (t82 != 662LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x6509 = -1LL;
	static volatile int32_t x6510 = INT32_MIN;
	static volatile uint16_t x6511 = 6068U;
	volatile int8_t x6512 = 0;
	int64_t t83 = 6063LL;

	t83 = ((x6509-x6510)%(x6511>>x6512));

	if (t83 != 243LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x6553 = 2U;
	int16_t x6554 = INT16_MIN;
	uint64_t x6556 = 3LLU;
	static int32_t t84 = 1063872637;

	t84 = ((x6553-x6554)%(x6555>>x6556));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6681 = 7;
	static int32_t x6682 = -1;

	t85 = ((x6681-x6682)%(x6683>>x6684));

	if (t85 != 8U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x6929 = UINT64_MAX;
	int64_t x6930 = -1LL;
	uint32_t x6931 = 194206U;
	int8_t x6932 = 4;

	t86 = ((x6929-x6930)%(x6931>>x6932));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x6961 = INT8_MAX;
	static int32_t x6962 = -5;
	uint8_t x6964 = 3U;

	t87 = ((x6961-x6962)%(x6963>>x6964));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x7145 = UINT64_MAX;
	volatile uint32_t x7147 = 1437421051U;
	static int16_t x7148 = 0;
	volatile uint64_t t88 = 123LLU;

	t88 = ((x7145-x7146)%(x7147>>x7148));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x7193 = 78119;
	static int8_t x7195 = INT8_MAX;
	int8_t x7196 = 4;
	int32_t t89 = -1200563;

	t89 = ((x7193-x7194)%(x7195>>x7196));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x7197 = INT32_MAX;
	uint32_t x7198 = UINT32_MAX;
	static uint64_t x7199 = 8584272260LLU;
	uint8_t x7200 = 0U;
	uint64_t t90 = 67861611721LLU;

	t90 = ((x7197-x7198)%(x7199>>x7200));

	if (t90 != 2147483648LLU) { NG(); } else { ; }
	
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


    return 0;
}

