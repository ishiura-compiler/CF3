#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t5 = -1455617;
volatile uint8_t x327 = 9U;
int64_t x389 = -1LL;
static uint64_t x390 = 31142750835383928LLU;
volatile int32_t t9 = 1;
int8_t x634 = INT8_MIN;
static int32_t x781 = -48493400;
volatile int64_t x1050 = INT64_MIN;
volatile uint8_t x1114 = 14U;
static uint8_t x1127 = 20U;
int64_t x1129 = INT64_MIN;
int8_t x1131 = INT8_MAX;
volatile int32_t t18 = -158987;
static volatile uint32_t x1155 = 3505U;
volatile int32_t t19 = -223;
int32_t x1232 = 28;
static uint64_t x1319 = 903817870228LLU;
uint32_t x1320 = 30U;
int32_t x1330 = INT32_MIN;
int32_t x1369 = -1;
int32_t x1371 = INT32_MAX;
int32_t t24 = 136649578;
int8_t x1520 = 12;
int8_t x1612 = 0;
volatile int8_t x1649 = -1;
static volatile int32_t t29 = 9;
int64_t x1862 = INT64_MIN;
uint8_t x1864 = 59U;
uint16_t x1871 = UINT16_MAX;
int16_t x2041 = -1;
volatile uint16_t x2132 = 6U;
volatile uint32_t x2299 = 24U;
uint8_t x2376 = 6U;
uint64_t x2491 = UINT64_MAX;
uint16_t x2492 = 58U;
volatile int32_t t40 = -5012873;
int8_t x2565 = INT8_MIN;
int32_t x2587 = 57245;
volatile int32_t t42 = -2;
static uint8_t x2801 = UINT8_MAX;
uint8_t x2804 = 18U;
uint8_t x2817 = 15U;
int64_t x2876 = 7LL;
uint64_t x2889 = 1296LLU;
uint32_t x2983 = 10226752U;
volatile int32_t t48 = -376234;
static int32_t x3053 = INT32_MIN;
uint32_t x3055 = 1023672U;
static uint32_t x3056 = 1U;
int64_t x3155 = 118157560LL;
volatile uint8_t x3210 = 29U;
int16_t x3212 = 0;
static int32_t x3283 = 766;
uint8_t x3323 = 16U;
uint64_t x3537 = 38959208LLU;
uint64_t x3539 = 26555LLU;
volatile uint64_t x3695 = 1769820LLU;
int16_t x4112 = 0;
static uint8_t x4115 = 3U;
int64_t x4117 = INT64_MAX;
uint8_t x4120 = 0U;
int64_t x4195 = 103927734289432671LL;
uint8_t x4211 = 31U;
uint8_t x4212 = 1U;
int32_t x4254 = 88805639;
uint32_t x4357 = 330405U;
static int8_t x4358 = -1;
volatile int32_t t74 = -20;
int32_t t75 = 571416;
volatile int32_t t76 = -164944;
int8_t x4585 = 1;
uint8_t x4587 = UINT8_MAX;
int16_t x4773 = INT16_MAX;
int8_t x4906 = INT8_MAX;
uint64_t x4925 = 3LLU;
uint16_t x5175 = 21209U;
volatile int32_t x5176 = 2;
volatile uint32_t x5384 = 12U;
uint8_t x5432 = 29U;
uint32_t x5823 = 16U;
int8_t x5838 = INT8_MIN;
volatile int16_t x5839 = 3;
volatile int32_t t93 = -1058508861;
static int32_t t94 = 364752469;
static uint16_t x5954 = 61U;
uint8_t x5956 = 5U;
uint16_t x6011 = 785U;
volatile int32_t t99 = -7122;


void f0(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x14 = 5U;
	int8_t x15 = 0;
	volatile uint16_t x16 = 0U;
	volatile int32_t t0 = -4;

	t0 = ((x13+x14)<=(x15<<x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 10U;
	uint8_t x67 = 1U;
	int8_t x68 = 1;
	volatile int32_t t1 = -59448;

	t1 = ((x65+x66)<=(x67<<x68));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 4U;
	uint64_t x95 = 6LLU;
	static uint8_t x96 = 18U;
	volatile int32_t t2 = -7;

	t2 = ((x93+x94)<=(x95<<x96));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x141 = 59U;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = UINT32_MAX;
	static uint8_t x144 = 0U;
	static int32_t t3 = -1;

	t3 = ((x141+x142)<=(x143<<x144));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x169 = 1U;
	int8_t x170 = 0;
	volatile uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 5U;
	volatile int32_t t4 = -1;

	t4 = ((x169+x170)<=(x171<<x172));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x269 = UINT16_MAX;
	int64_t x270 = -162222072LL;
	uint64_t x271 = UINT64_MAX;
	uint8_t x272 = 35U;

	t5 = ((x269+x270)<=(x271<<x272));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x325 = INT8_MAX;
	static int16_t x326 = -48;
	uint32_t x328 = 14U;
	static int32_t t6 = 225555795;

	t6 = ((x325+x326)<=(x327<<x328));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x391 = 58;
	static volatile uint16_t x392 = 1U;
	int32_t t7 = -5462;

	t7 = ((x389+x390)<=(x391<<x392));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x461 = INT32_MIN;
	int64_t x462 = -1LL;
	static volatile int16_t x463 = 1522;
	uint64_t x464 = 1LLU;
	int32_t t8 = 19;

	t8 = ((x461+x462)<=(x463<<x464));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x553 = INT16_MIN;
	int8_t x554 = -1;
	uint64_t x555 = 188079482804308503LLU;
	uint8_t x556 = 7U;

	t9 = ((x553+x554)<=(x555<<x556));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x569 = INT32_MIN;
	uint8_t x570 = 3U;
	uint64_t x571 = UINT64_MAX;
	uint8_t x572 = 0U;
	volatile int32_t t10 = 587;

	t10 = ((x569+x570)<=(x571<<x572));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x621 = INT8_MIN;
	static int32_t x622 = -1;
	static uint32_t x623 = 21930237U;
	int8_t x624 = 16;
	volatile int32_t t11 = -25;

	t11 = ((x621+x622)<=(x623<<x624));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x633 = 186LLU;
	uint8_t x635 = 2U;
	int8_t x636 = 1;
	int32_t t12 = 13526717;

	t12 = ((x633+x634)<=(x635<<x636));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x782 = 31U;
	uint64_t x783 = 272LLU;
	uint8_t x784 = 3U;
	int32_t t13 = -6205398;

	t13 = ((x781+x782)<=(x783<<x784));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1049 = 19;
	int32_t x1051 = INT32_MAX;
	int32_t x1052 = 0;
	int32_t t14 = -403425;

	t14 = ((x1049+x1050)<=(x1051<<x1052));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1061 = 44;
	int32_t x1062 = -1;
	uint32_t x1063 = 26878334U;
	static uint8_t x1064 = 11U;
	volatile int32_t t15 = -3202558;

	t15 = ((x1061+x1062)<=(x1063<<x1064));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1113 = -1;
	static int32_t x1115 = 7;
	uint32_t x1116 = 15U;
	int32_t t16 = -29086;

	t16 = ((x1113+x1114)<=(x1115<<x1116));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1125 = -620002LL;
	int32_t x1126 = INT32_MIN;
	volatile uint8_t x1128 = 2U;
	static volatile int32_t t17 = 21;

	t17 = ((x1125+x1126)<=(x1127<<x1128));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1130 = 1;
	static uint8_t x1132 = 9U;

	t18 = ((x1129+x1130)<=(x1131<<x1132));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1153 = -1;
	uint16_t x1154 = UINT16_MAX;
	static uint8_t x1156 = 0U;

	t19 = ((x1153+x1154)<=(x1155<<x1156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1229 = -1;
	uint8_t x1230 = 1U;
	int64_t x1231 = 103393164LL;
	volatile int32_t t20 = -30682;

	t20 = ((x1229+x1230)<=(x1231<<x1232));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x1317 = INT32_MIN;
	int64_t x1318 = 104285355110281LL;
	static volatile int32_t t21 = -54224;

	t21 = ((x1317+x1318)<=(x1319<<x1320));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1329 = UINT64_MAX;
	static int64_t x1331 = INT64_MAX;
	uint8_t x1332 = 0U;
	static volatile int32_t t22 = -10274756;

	t22 = ((x1329+x1330)<=(x1331<<x1332));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1370 = INT16_MIN;
	int16_t x1372 = 0;
	static int32_t t23 = 1;

	t23 = ((x1369+x1370)<=(x1371<<x1372));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x1393 = 1U;
	int64_t x1394 = -1LL;
	uint32_t x1395 = 13062U;
	int8_t x1396 = 10;

	t24 = ((x1393+x1394)<=(x1395<<x1396));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1517 = UINT32_MAX;
	static int16_t x1518 = -60;
	uint16_t x1519 = 11614U;
	int32_t t25 = -1;

	t25 = ((x1517+x1518)<=(x1519<<x1520));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1609 = INT8_MIN;
	volatile int64_t x1610 = 14950236413LL;
	uint8_t x1611 = 24U;
	volatile int32_t t26 = -1;

	t26 = ((x1609+x1610)<=(x1611<<x1612));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1650 = -1;
	uint64_t x1651 = 2866466LLU;
	static int8_t x1652 = 0;
	volatile int32_t t27 = 141;

	t27 = ((x1649+x1650)<=(x1651<<x1652));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1677 = -13LL;
	int32_t x1678 = 601367;
	volatile int16_t x1679 = 1212;
	volatile int32_t x1680 = 0;
	int32_t t28 = 1256667;

	t28 = ((x1677+x1678)<=(x1679<<x1680));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1801 = 2;
	int8_t x1802 = -1;
	int16_t x1803 = 0;
	uint16_t x1804 = 15U;

	t29 = ((x1801+x1802)<=(x1803<<x1804));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1861 = 1;
	volatile uint64_t x1863 = UINT64_MAX;
	int32_t t30 = 135309339;

	t30 = ((x1861+x1862)<=(x1863<<x1864));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1869 = -1;
	static volatile uint8_t x1870 = 0U;
	volatile int16_t x1872 = 3;
	int32_t t31 = -14056858;

	t31 = ((x1869+x1870)<=(x1871<<x1872));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1913 = UINT64_MAX;
	uint8_t x1914 = 13U;
	volatile uint32_t x1915 = 9U;
	int64_t x1916 = 0LL;
	volatile int32_t t32 = 19;

	t32 = ((x1913+x1914)<=(x1915<<x1916));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2042 = -1LL;
	uint8_t x2043 = UINT8_MAX;
	uint8_t x2044 = 13U;
	volatile int32_t t33 = -12;

	t33 = ((x2041+x2042)<=(x2043<<x2044));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2129 = 0U;
	uint8_t x2130 = 1U;
	int16_t x2131 = INT16_MAX;
	volatile int32_t t34 = 2;

	t34 = ((x2129+x2130)<=(x2131<<x2132));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2225 = 129078LLU;
	uint8_t x2226 = 6U;
	uint64_t x2227 = 256046280381LLU;
	uint8_t x2228 = 23U;
	static volatile int32_t t35 = 0;

	t35 = ((x2225+x2226)<=(x2227<<x2228));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x2297 = INT32_MIN;
	static uint8_t x2298 = 5U;
	static uint8_t x2300 = 12U;
	int32_t t36 = -1363;

	t36 = ((x2297+x2298)<=(x2299<<x2300));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2313 = UINT8_MAX;
	int32_t x2314 = INT32_MIN;
	volatile uint32_t x2315 = 5513U;
	volatile uint8_t x2316 = 7U;
	volatile int32_t t37 = -2013583;

	t37 = ((x2313+x2314)<=(x2315<<x2316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2373 = INT64_MIN;
	static uint64_t x2374 = 6845LLU;
	uint32_t x2375 = 553U;
	int32_t t38 = 57187175;

	t38 = ((x2373+x2374)<=(x2375<<x2376));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2389 = INT16_MAX;
	int64_t x2390 = INT64_MIN;
	int32_t x2391 = 1072;
	int16_t x2392 = 7;
	static int32_t t39 = 127235;

	t39 = ((x2389+x2390)<=(x2391<<x2392));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2489 = 5440461442LLU;
	volatile int16_t x2490 = -20;

	t40 = ((x2489+x2490)<=(x2491<<x2492));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2566 = -1665653611642LL;
	uint32_t x2567 = 1565U;
	int16_t x2568 = 0;
	volatile int32_t t41 = 7;

	t41 = ((x2565+x2566)<=(x2567<<x2568));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2585 = -1LL;
	uint16_t x2586 = 6356U;
	int32_t x2588 = 0;

	t42 = ((x2585+x2586)<=(x2587<<x2588));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2709 = 2552U;
	int8_t x2710 = 1;
	uint8_t x2711 = UINT8_MAX;
	static int8_t x2712 = 3;
	int32_t t43 = 4;

	t43 = ((x2709+x2710)<=(x2711<<x2712));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2802 = 2015LL;
	int32_t x2803 = 1394;
	volatile int32_t t44 = -3078197;

	t44 = ((x2801+x2802)<=(x2803<<x2804));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2818 = INT64_MIN;
	int8_t x2819 = INT8_MAX;
	uint8_t x2820 = 24U;
	int32_t t45 = 77;

	t45 = ((x2817+x2818)<=(x2819<<x2820));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2873 = INT16_MAX;
	int32_t x2874 = -729615;
	static uint8_t x2875 = 1U;
	volatile int32_t t46 = 0;

	t46 = ((x2873+x2874)<=(x2875<<x2876));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2890 = 52379U;
	static volatile uint64_t x2891 = 50339047751435LLU;
	static uint32_t x2892 = 6U;
	static volatile int32_t t47 = -5828392;

	t47 = ((x2889+x2890)<=(x2891<<x2892));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2981 = 42814LL;
	volatile int8_t x2982 = INT8_MIN;
	uint8_t x2984 = 1U;

	t48 = ((x2981+x2982)<=(x2983<<x2984));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3013 = INT32_MIN;
	volatile uint32_t x3014 = UINT32_MAX;
	static uint16_t x3015 = UINT16_MAX;
	volatile int16_t x3016 = 0;
	volatile int32_t t49 = 0;

	t49 = ((x3013+x3014)<=(x3015<<x3016));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3054 = INT8_MAX;
	static int32_t t50 = -160931816;

	t50 = ((x3053+x3054)<=(x3055<<x3056));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x3093 = 5281LLU;
	uint16_t x3094 = 127U;
	int16_t x3095 = INT16_MAX;
	int16_t x3096 = 3;
	static volatile int32_t t51 = 111684857;

	t51 = ((x3093+x3094)<=(x3095<<x3096));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3133 = INT32_MIN;
	static int8_t x3134 = 50;
	static uint64_t x3135 = 31928232421622LLU;
	int8_t x3136 = 1;
	static int32_t t52 = 59;

	t52 = ((x3133+x3134)<=(x3135<<x3136));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3141 = INT64_MAX;
	uint64_t x3142 = UINT64_MAX;
	volatile uint32_t x3143 = UINT32_MAX;
	volatile uint8_t x3144 = 0U;
	volatile int32_t t53 = 12615283;

	t53 = ((x3141+x3142)<=(x3143<<x3144));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x3149 = -1;
	int16_t x3150 = INT16_MIN;
	int64_t x3151 = 25293566978LL;
	static uint8_t x3152 = 1U;
	volatile int32_t t54 = 201;

	t54 = ((x3149+x3150)<=(x3151<<x3152));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3153 = -1;
	static int8_t x3154 = 0;
	volatile int8_t x3156 = 9;
	volatile int32_t t55 = -3;

	t55 = ((x3153+x3154)<=(x3155<<x3156));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3177 = 970055;
	static volatile uint64_t x3178 = 2279252LLU;
	uint16_t x3179 = 66U;
	int16_t x3180 = 16;
	int32_t t56 = -266905966;

	t56 = ((x3177+x3178)<=(x3179<<x3180));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3189 = INT64_MIN;
	volatile uint16_t x3190 = 3U;
	volatile int16_t x3191 = INT16_MAX;
	int8_t x3192 = 5;
	int32_t t57 = -5954879;

	t57 = ((x3189+x3190)<=(x3191<<x3192));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x3209 = 56U;
	static uint64_t x3211 = UINT64_MAX;
	int32_t t58 = 420;

	t58 = ((x3209+x3210)<=(x3211<<x3212));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3281 = -1;
	volatile int64_t x3282 = INT64_MAX;
	uint32_t x3284 = 4U;
	int32_t t59 = -303180322;

	t59 = ((x3281+x3282)<=(x3283<<x3284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3321 = 140521760;
	volatile int16_t x3322 = -372;
	static uint8_t x3324 = 22U;
	static int32_t t60 = -1325577;

	t60 = ((x3321+x3322)<=(x3323<<x3324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x3538 = -3597;
	static int8_t x3540 = 30;
	volatile int32_t t61 = 1;

	t61 = ((x3537+x3538)<=(x3539<<x3540));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3693 = 65896202091100455LLU;
	int64_t x3694 = 4LL;
	static uint8_t x3696 = 8U;
	int32_t t62 = -11927;

	t62 = ((x3693+x3694)<=(x3695<<x3696));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3737 = -1LL;
	uint64_t x3738 = 39874798036101786LLU;
	uint64_t x3739 = 69686232653547265LLU;
	static uint16_t x3740 = 10U;
	static volatile int32_t t63 = -13229715;

	t63 = ((x3737+x3738)<=(x3739<<x3740));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3817 = -1;
	int64_t x3818 = -26743LL;
	static int64_t x3819 = 2055781LL;
	uint32_t x3820 = 0U;
	int32_t t64 = 4;

	t64 = ((x3817+x3818)<=(x3819<<x3820));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3829 = 1783LL;
	volatile uint32_t x3830 = 354U;
	uint64_t x3831 = UINT64_MAX;
	uint8_t x3832 = 24U;
	volatile int32_t t65 = 1310385;

	t65 = ((x3829+x3830)<=(x3831<<x3832));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4065 = INT16_MIN;
	uint32_t x4066 = 214773210U;
	uint8_t x4067 = 68U;
	uint64_t x4068 = 15LLU;
	int32_t t66 = -5;

	t66 = ((x4065+x4066)<=(x4067<<x4068));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4105 = 266;
	static volatile uint32_t x4106 = 954408463U;
	uint8_t x4107 = 44U;
	int16_t x4108 = 2;
	static volatile int32_t t67 = -5;

	t67 = ((x4105+x4106)<=(x4107<<x4108));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4109 = 31;
	static int64_t x4110 = -1LL;
	int32_t x4111 = 21965286;
	volatile int32_t t68 = 1663007;

	t68 = ((x4109+x4110)<=(x4111<<x4112));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4113 = UINT32_MAX;
	int64_t x4114 = INT64_MIN;
	volatile int8_t x4116 = 1;
	volatile int32_t t69 = 2898238;

	t69 = ((x4113+x4114)<=(x4115<<x4116));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x4118 = -1LL;
	volatile int32_t x4119 = 939184;
	int32_t t70 = -3;

	t70 = ((x4117+x4118)<=(x4119<<x4120));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x4193 = 3U;
	volatile uint64_t x4194 = 5256728022899LLU;
	static volatile uint16_t x4196 = 2U;
	int32_t t71 = 1;

	t71 = ((x4193+x4194)<=(x4195<<x4196));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4209 = INT8_MIN;
	uint64_t x4210 = 2047527629013LLU;
	volatile int32_t t72 = 24611730;

	t72 = ((x4209+x4210)<=(x4211<<x4212));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4253 = -4;
	int16_t x4255 = INT16_MAX;
	static uint8_t x4256 = 14U;
	volatile int32_t t73 = -48624;

	t73 = ((x4253+x4254)<=(x4255<<x4256));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x4359 = 4U;
	volatile int32_t x4360 = 9;

	t74 = ((x4357+x4358)<=(x4359<<x4360));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4517 = -1451330LL;
	volatile int64_t x4518 = -1LL;
	uint8_t x4519 = 32U;
	int8_t x4520 = 7;

	t75 = ((x4517+x4518)<=(x4519<<x4520));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x4569 = 672715272U;
	static int32_t x4570 = INT32_MAX;
	uint64_t x4571 = UINT64_MAX;
	int32_t x4572 = 1;

	t76 = ((x4569+x4570)<=(x4571<<x4572));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4586 = UINT64_MAX;
	int16_t x4588 = 7;
	static volatile int32_t t77 = -56593;

	t77 = ((x4585+x4586)<=(x4587<<x4588));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4774 = UINT32_MAX;
	volatile uint32_t x4775 = 0U;
	static volatile uint16_t x4776 = 17U;
	volatile int32_t t78 = -53648652;

	t78 = ((x4773+x4774)<=(x4775<<x4776));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x4905 = 16;
	uint16_t x4907 = 77U;
	uint8_t x4908 = 1U;
	static int32_t t79 = -1;

	t79 = ((x4905+x4906)<=(x4907<<x4908));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4926 = 2;
	uint16_t x4927 = 17997U;
	volatile uint16_t x4928 = 11U;
	int32_t t80 = 280;

	t80 = ((x4925+x4926)<=(x4927<<x4928));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x5001 = UINT64_MAX;
	volatile int64_t x5002 = -4503671639463954700LL;
	volatile int8_t x5003 = 3;
	uint8_t x5004 = 21U;
	volatile int32_t t81 = 2834042;

	t81 = ((x5001+x5002)<=(x5003<<x5004));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x5121 = -4942292;
	uint32_t x5122 = 14450U;
	int64_t x5123 = 15302451LL;
	static volatile int8_t x5124 = 5;
	int32_t t82 = -488;

	t82 = ((x5121+x5122)<=(x5123<<x5124));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5173 = UINT32_MAX;
	int64_t x5174 = -1LL;
	volatile int32_t t83 = -262787;

	t83 = ((x5173+x5174)<=(x5175<<x5176));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5197 = 3839847709381LLU;
	volatile uint16_t x5198 = 452U;
	int32_t x5199 = 1;
	volatile int8_t x5200 = 1;
	int32_t t84 = -6696147;

	t84 = ((x5197+x5198)<=(x5199<<x5200));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5209 = INT16_MIN;
	uint8_t x5210 = 53U;
	uint16_t x5211 = 1376U;
	int8_t x5212 = 0;
	volatile int32_t t85 = -1;

	t85 = ((x5209+x5210)<=(x5211<<x5212));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5381 = -170421809LL;
	uint16_t x5382 = 4963U;
	uint16_t x5383 = 1U;
	static volatile int32_t t86 = -14;

	t86 = ((x5381+x5382)<=(x5383<<x5384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5429 = INT16_MIN;
	int8_t x5430 = 2;
	static volatile int16_t x5431 = 0;
	volatile int32_t t87 = -1;

	t87 = ((x5429+x5430)<=(x5431<<x5432));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x5501 = 3906U;
	uint32_t x5502 = 7U;
	volatile uint64_t x5503 = 5649LLU;
	uint8_t x5504 = 0U;
	int32_t t88 = -51939;

	t88 = ((x5501+x5502)<=(x5503<<x5504));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5745 = 1;
	uint32_t x5746 = 6U;
	int8_t x5747 = 3;
	volatile uint64_t x5748 = 7LLU;
	volatile int32_t t89 = 1003;

	t89 = ((x5745+x5746)<=(x5747<<x5748));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x5765 = 0LLU;
	int32_t x5766 = INT32_MIN;
	uint32_t x5767 = 2U;
	int8_t x5768 = 15;
	volatile int32_t t90 = -7927210;

	t90 = ((x5765+x5766)<=(x5767<<x5768));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5821 = INT16_MAX;
	int16_t x5822 = 26;
	static uint8_t x5824 = 6U;
	volatile int32_t t91 = -2;

	t91 = ((x5821+x5822)<=(x5823<<x5824));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x5837 = -1;
	static int16_t x5840 = 3;
	int32_t t92 = 38074;

	t92 = ((x5837+x5838)<=(x5839<<x5840));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5845 = INT32_MIN;
	int8_t x5846 = INT8_MAX;
	int8_t x5847 = 6;
	volatile int16_t x5848 = 0;

	t93 = ((x5845+x5846)<=(x5847<<x5848));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5857 = -1;
	volatile int8_t x5858 = INT8_MAX;
	static uint32_t x5859 = 179396U;
	uint16_t x5860 = 30U;

	t94 = ((x5857+x5858)<=(x5859<<x5860));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5953 = INT8_MAX;
	static uint8_t x5955 = 0U;
	volatile int32_t t95 = 3882711;

	t95 = ((x5953+x5954)<=(x5955<<x5956));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x6009 = 6047699664233624LLU;
	int64_t x6010 = -1LL;
	static volatile int8_t x6012 = 3;
	int32_t t96 = 236;

	t96 = ((x6009+x6010)<=(x6011<<x6012));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x6029 = INT64_MIN;
	uint16_t x6030 = 29U;
	volatile int64_t x6031 = 1LL;
	int32_t x6032 = 7;
	volatile int32_t t97 = -31606;

	t97 = ((x6029+x6030)<=(x6031<<x6032));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6033 = INT16_MAX;
	uint64_t x6034 = 18920LLU;
	uint8_t x6035 = 3U;
	volatile uint8_t x6036 = 0U;
	volatile int32_t t98 = 0;

	t98 = ((x6033+x6034)<=(x6035<<x6036));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6133 = -1;
	static uint16_t x6134 = 2072U;
	volatile int64_t x6135 = INT64_MAX;
	static volatile int32_t x6136 = 0;

	t99 = ((x6133+x6134)<=(x6135<<x6136));

	if (t99 != 1) { NG(); } else { ; }
	
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

