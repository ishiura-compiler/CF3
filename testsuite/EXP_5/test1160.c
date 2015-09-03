#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x107 = 24U;
volatile int32_t x160 = -1;
volatile uint8_t x197 = UINT8_MAX;
uint32_t x243 = 10U;
uint64_t t7 = 1LLU;
static int32_t x455 = 23;
int64_t x456 = 6971263280614LL;
int32_t x542 = INT32_MAX;
int8_t x751 = 0;
uint32_t x824 = 1071061U;
int16_t x884 = 12;
volatile uint8_t x985 = 70U;
int64_t x986 = INT64_MAX;
uint8_t x987 = 31U;
static int64_t t16 = -3063367715LL;
volatile int64_t x1008 = 1797399LL;
int64_t x1016 = INT64_MIN;
static uint8_t x1215 = 7U;
volatile int32_t t22 = -1903851;
int32_t x1350 = 2;
volatile uint8_t x1459 = 0U;
static int64_t t24 = 11255250614506LL;
volatile int32_t t28 = -212237054;
uint64_t x1777 = 35LLU;
uint64_t t29 = 245720315009574LLU;
int8_t x1829 = -1;
uint16_t x1943 = 7U;
uint16_t x1944 = 2282U;
static volatile uint64_t t33 = 299518LLU;
int8_t x2135 = 4;
int8_t x2136 = -1;
static int16_t x2196 = INT16_MAX;
uint8_t x2207 = 0U;
uint64_t x2346 = 991224533690868LLU;
volatile uint64_t t38 = 256729694665LLU;
int32_t x2389 = -11992;
static uint16_t x2391 = 1U;
uint32_t x2545 = UINT32_MAX;
volatile int64_t t44 = -4664761365620510LL;
int8_t x2824 = -1;
uint32_t x2846 = 65U;
uint32_t x2847 = 2U;
int64_t t46 = -119164737LL;
static int16_t x3106 = INT16_MAX;
int32_t x3129 = INT32_MAX;
volatile int8_t x3219 = 0;
volatile int32_t t50 = 3860987;
int8_t x3408 = INT8_MAX;
volatile uint64_t x3452 = 12092660804315506LLU;
static int8_t x3473 = 0;
volatile int32_t x3474 = INT32_MAX;
volatile uint8_t x3475 = 29U;
int32_t x3476 = INT32_MAX;
static volatile int32_t t54 = -14481;
uint32_t x3547 = 3U;
volatile uint64_t t55 = 423607LLU;
uint64_t x3694 = UINT64_MAX;
volatile uint16_t x3715 = 2U;
int32_t x3796 = INT32_MAX;
volatile uint64_t t65 = 947012131800LLU;
uint64_t x3829 = 8005059552826LLU;
int16_t x3850 = 26;
int8_t x3879 = 1;
static volatile int32_t t69 = 1;
int8_t x3953 = 0;
volatile uint32_t x3954 = 357622690U;
uint8_t x3959 = 2U;
uint8_t x3993 = UINT8_MAX;
int64_t x3994 = 115748627LL;
static volatile int8_t x4031 = 0;
volatile int32_t x4032 = INT32_MIN;
static uint32_t x4110 = 1683U;
uint32_t x4112 = 55600636U;
int8_t x4209 = INT8_MIN;
static int32_t x4210 = INT32_MAX;
int8_t x4233 = INT8_MIN;
uint16_t x4301 = 8U;
static volatile int16_t x4302 = INT16_MAX;
volatile int32_t t82 = -1;
uint16_t x4333 = UINT16_MAX;
int64_t x4414 = INT64_MAX;
uint64_t x4416 = UINT64_MAX;
uint32_t x4654 = UINT32_MAX;
static uint32_t x4674 = 11U;
int16_t x4676 = INT16_MIN;
static int16_t x4757 = -1;
volatile uint64_t x4758 = 17LLU;
uint32_t x4759 = 25U;
static uint16_t x4869 = 3577U;
volatile uint64_t t88 = 23636803990LLU;
volatile int64_t t89 = 20346417090LL;
uint32_t x5158 = UINT32_MAX;
uint32_t x5190 = 3668387U;
volatile int16_t x5217 = INT16_MIN;
static uint8_t x5218 = 1U;
int16_t x5349 = -521;
uint64_t x5351 = 20LLU;
uint8_t x5379 = 1U;
volatile uint64_t t99 = 1293753LLU;


void f0(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	volatile uint8_t x95 = 8U;
	static uint8_t x96 = UINT8_MAX;
	uint64_t t0 = 2362412333592LLU;

	t0 = (x93*((x94>>x95)|x96));

	if (t0 != 32768LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x97 = -1LL;
	volatile uint8_t x98 = 4U;
	int8_t x99 = 6;
	uint16_t x100 = 10816U;
	volatile int64_t t1 = 13005LL;

	t1 = (x97*((x98>>x99)|x100));

	if (t1 != -10816LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x105 = 0U;
	static uint8_t x106 = 54U;
	static int64_t x108 = INT64_MIN;
	volatile int64_t t2 = -671LL;

	t2 = (x105*((x106>>x107)|x108));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x157 = UINT16_MAX;
	static int64_t x158 = INT64_MAX;
	static int8_t x159 = 1;
	int64_t t3 = -120648519762753LL;

	t3 = (x157*((x158>>x159)|x160));

	if (t3 != -65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x198 = 1721U;
	static int8_t x199 = 3;
	int8_t x200 = 0;
	volatile int32_t t4 = -16084;

	t4 = (x197*((x198>>x199)|x200));

	if (t4 != 54825) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x221 = INT16_MAX;
	static uint32_t x222 = 15107U;
	uint32_t x223 = 1U;
	uint16_t x224 = 42U;
	volatile uint32_t t5 = 126U;

	t5 = (x221*((x222>>x223)|x224));

	if (t5 != 248865365U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = 394189;
	uint32_t x244 = 1015321693U;
	static uint32_t t6 = 46U;

	t6 = (x241*((x242>>x243)|x244));

	if (t6 != 3279645219U) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x329 = INT8_MAX;
	uint64_t x330 = 2408888307013747727LLU;
	uint8_t x331 = 15U;
	volatile int32_t x332 = -1;

	t7 = (x329*((x330>>x331)|x332));

	if (t7 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x433 = 3U;
	uint64_t x434 = 1704183LLU;
	static int8_t x435 = 0;
	static uint32_t x436 = 158U;
	volatile uint64_t t8 = 1810166450165LLU;

	t8 = (x433*((x434>>x435)|x436));

	if (t8 != 5112573LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x453 = 23317LLU;
	volatile uint64_t x454 = UINT64_MAX;
	uint64_t t9 = 4088005LLU;

	t9 = (x453*((x454>>x455)|x456));

	if (t9 != 205098500998800619LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x489 = 4123700LL;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = 10;
	uint16_t x492 = UINT16_MAX;
	int64_t t10 = -2728454879097939LL;

	t10 = (x489*((x490>>x491)|x492));

	if (t10 != 17296047281100LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x541 = 281U;
	volatile uint16_t x543 = 9U;
	volatile int8_t x544 = 11;
	int32_t t11 = -23895296;

	t11 = (x541*((x542>>x543)|x544));

	if (t11 != 1178599143) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x749 = UINT8_MAX;
	uint32_t x750 = 209788730U;
	static uint64_t x752 = UINT64_MAX;
	volatile uint64_t t12 = 165865279271589218LLU;

	t12 = (x749*((x750>>x751)|x752));

	if (t12 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x821 = INT32_MAX;
	static uint32_t x822 = UINT32_MAX;
	uint16_t x823 = 6U;
	volatile uint32_t t13 = 10U;

	t13 = (x821*((x822>>x823)|x824));

	if (t13 != 2080374785U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x881 = 62U;
	int64_t x882 = INT64_MAX;
	static int16_t x883 = 55;
	int64_t t14 = -10479311LL;

	t14 = (x881*((x882>>x883)|x884));

	if (t14 != 15810LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x929 = -1LL;
	uint64_t x930 = UINT64_MAX;
	int16_t x931 = 5;
	static int16_t x932 = 3684;
	uint64_t t15 = 4803LLU;

	t15 = (x929*((x930>>x931)|x932));

	if (t15 != 17870283321406128129LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x988 = 12906399248629LL;

	t16 = (x985*((x986>>x987)|x988));

	if (t16 != 903747018424250LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1005 = UINT8_MAX;
	volatile uint64_t x1006 = UINT64_MAX;
	volatile uint32_t x1007 = 2U;
	static volatile uint64_t t17 = 247944LLU;

	t17 = (x1005*((x1006>>x1007)|x1008));

	if (t17 != 13835058055282163457LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1013 = UINT64_MAX;
	volatile uint64_t x1014 = 3933873899843549LLU;
	uint8_t x1015 = 1U;
	uint64_t t18 = 4LLU;

	t18 = (x1013*((x1014>>x1015)|x1016));

	if (t18 != 9221405099904854034LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1049 = INT8_MIN;
	static uint8_t x1050 = 106U;
	volatile int8_t x1051 = 14;
	uint16_t x1052 = 14U;
	int32_t t19 = -208;

	t19 = (x1049*((x1050>>x1051)|x1052));

	if (t19 != -1792) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1169 = UINT8_MAX;
	int64_t x1170 = 12LL;
	volatile uint8_t x1171 = 13U;
	int16_t x1172 = INT16_MAX;
	volatile int64_t t20 = -10129396257392LL;

	t20 = (x1169*((x1170>>x1171)|x1172));

	if (t20 != 8355585LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1213 = UINT64_MAX;
	uint8_t x1214 = 4U;
	uint32_t x1216 = 244781U;
	volatile uint64_t t21 = 98096801LLU;

	t21 = (x1213*((x1214>>x1215)|x1216));

	if (t21 != 18446744073709306835LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1309 = -1;
	int8_t x1310 = INT8_MAX;
	uint8_t x1311 = 30U;
	int16_t x1312 = -1;

	t22 = (x1309*((x1310>>x1311)|x1312));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1349 = UINT16_MAX;
	int16_t x1351 = 1;
	uint32_t x1352 = 10540452U;
	uint32_t t23 = 754103U;

	t23 = (x1349*((x1350>>x1351)|x1352));

	if (t23 != 3573819995U) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1457 = 1;
	volatile int64_t x1458 = 1LL;
	int16_t x1460 = INT16_MIN;

	t24 = (x1457*((x1458>>x1459)|x1460));

	if (t24 != -32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1489 = -1LL;
	int32_t x1490 = 3818;
	int8_t x1491 = 1;
	volatile int16_t x1492 = INT16_MIN;
	volatile int64_t t25 = 8LL;

	t25 = (x1489*((x1490>>x1491)|x1492));

	if (t25 != 30859LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1505 = -1;
	volatile int64_t x1506 = 186126LL;
	uint32_t x1507 = 29U;
	int16_t x1508 = INT16_MIN;
	volatile int64_t t26 = 4143518640622653462LL;

	t26 = (x1505*((x1506>>x1507)|x1508));

	if (t26 != 32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1549 = INT16_MIN;
	static uint32_t x1550 = 65120167U;
	static uint32_t x1551 = 10U;
	int32_t x1552 = -1;
	volatile uint32_t t27 = 1463572893U;

	t27 = (x1549*((x1550>>x1551)|x1552));

	if (t27 != 32768U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1569 = INT8_MIN;
	uint8_t x1570 = UINT8_MAX;
	uint8_t x1571 = 14U;
	uint16_t x1572 = 4154U;

	t28 = (x1569*((x1570>>x1571)|x1572));

	if (t28 != -531712) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1778 = UINT8_MAX;
	volatile int16_t x1779 = 25;
	int16_t x1780 = -1;

	t29 = (x1777*((x1778>>x1779)|x1780));

	if (t29 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1830 = UINT16_MAX;
	volatile uint32_t x1831 = 6U;
	int32_t x1832 = INT32_MAX;
	int32_t t30 = -3683;

	t30 = (x1829*((x1830>>x1831)|x1832));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1861 = INT8_MIN;
	volatile int64_t x1862 = INT64_MAX;
	int32_t x1863 = 0;
	static int64_t x1864 = INT64_MIN;
	volatile int64_t t31 = 1523202432276927LL;

	t31 = (x1861*((x1862>>x1863)|x1864));

	if (t31 != 128LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1941 = UINT16_MAX;
	uint64_t x1942 = 14656081099866LLU;
	static uint64_t t32 = 223825509289182251LLU;

	t32 = (x1941*((x1942>>x1943)|x1944));

	if (t32 != 7503799156798470LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2129 = 4468;
	volatile uint64_t x2130 = UINT64_MAX;
	volatile uint16_t x2131 = 1U;
	uint32_t x2132 = 187468339U;

	t33 = (x2129*((x2130>>x2131)|x2132));

	if (t33 != 18446744073709547148LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2133 = UINT32_MAX;
	uint32_t x2134 = UINT32_MAX;
	static volatile uint32_t t34 = 12926674U;

	t34 = (x2133*((x2134>>x2135)|x2136));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2193 = 1008191183033799994LLU;
	int8_t x2194 = 0;
	int8_t x2195 = 0;
	volatile uint64_t t35 = 0LLU;

	t35 = (x2193*((x2194>>x2195)|x2196));

	if (t35 != 15728602528427010758LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2205 = 0LL;
	static int8_t x2206 = INT8_MAX;
	volatile uint32_t x2208 = 75991U;
	volatile int64_t t36 = -7112704065LL;

	t36 = (x2205*((x2206>>x2207)|x2208));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2325 = 2U;
	uint8_t x2326 = 12U;
	uint16_t x2327 = 7U;
	static int64_t x2328 = 443031803656569337LL;
	static int64_t t37 = -805490838589566LL;

	t37 = (x2325*((x2326>>x2327)|x2328));

	if (t37 != 886063607313138674LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2345 = -1LL;
	uint32_t x2347 = 6U;
	int8_t x2348 = INT8_MAX;

	t38 = (x2345*((x2346>>x2347)|x2348));

	if (t38 != 18446728585826212609LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2361 = -1;
	uint64_t x2362 = 2111982447775LLU;
	uint16_t x2363 = 35U;
	volatile int32_t x2364 = 647020729;
	volatile uint64_t t39 = 2026515083628LLU;

	t39 = (x2361*((x2362>>x2363)|x2364));

	if (t39 != 18446744073062530883LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2390 = 4U;
	int64_t x2392 = -3998654LL;
	volatile int64_t t40 = 3086LL;

	t40 = (x2389*((x2390>>x2391)|x2392));

	if (t40 != 47951858768LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2537 = 48428415LLU;
	int64_t x2538 = INT64_MAX;
	uint64_t x2539 = 61LLU;
	int64_t x2540 = INT64_MIN;
	uint64_t t41 = 3411225393LLU;

	t41 = (x2537*((x2538>>x2539)|x2540));

	if (t41 != 9223372037000061053LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2546 = 4;
	static int8_t x2547 = 1;
	static int64_t x2548 = -1LL;
	volatile int64_t t42 = 783449LL;

	t42 = (x2545*((x2546>>x2547)|x2548));

	if (t42 != -4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2677 = UINT32_MAX;
	static volatile int16_t x2678 = 1013;
	uint8_t x2679 = 2U;
	static volatile int16_t x2680 = -1;
	static uint32_t t43 = 148247983U;

	t43 = (x2677*((x2678>>x2679)|x2680));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2785 = -1;
	static int64_t x2786 = INT64_MAX;
	uint8_t x2787 = 0U;
	int8_t x2788 = INT8_MIN;

	t44 = (x2785*((x2786>>x2787)|x2788));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2821 = INT32_MAX;
	static volatile uint32_t x2822 = UINT32_MAX;
	uint16_t x2823 = 24U;
	volatile uint32_t t45 = 24U;

	t45 = (x2821*((x2822>>x2823)|x2824));

	if (t45 != 2147483649U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x2845 = -1LL;
	uint16_t x2848 = 139U;

	t46 = (x2845*((x2846>>x2847)|x2848));

	if (t46 != -155LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3105 = -1;
	uint8_t x3107 = 1U;
	uint8_t x3108 = 1U;
	int32_t t47 = -144;

	t47 = (x3105*((x3106>>x3107)|x3108));

	if (t47 != -16383) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x3130 = UINT16_MAX;
	volatile int64_t x3131 = 2LL;
	int8_t x3132 = -1;
	volatile int32_t t48 = -6530417;

	t48 = (x3129*((x3130>>x3131)|x3132));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3217 = 1U;
	static volatile uint8_t x3218 = 102U;
	volatile int32_t x3220 = -1;
	int32_t t49 = 619727;

	t49 = (x3217*((x3218>>x3219)|x3220));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3321 = 13;
	int16_t x3322 = 949;
	uint8_t x3323 = 10U;
	int16_t x3324 = INT16_MIN;

	t50 = (x3321*((x3322>>x3323)|x3324));

	if (t50 != -425984) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3353 = -1;
	uint32_t x3354 = UINT32_MAX;
	int8_t x3355 = 5;
	uint16_t x3356 = 46U;
	uint32_t t51 = 271143U;

	t51 = (x3353*((x3354>>x3355)|x3356));

	if (t51 != 4160749569U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3405 = INT8_MIN;
	static int16_t x3406 = INT16_MAX;
	uint8_t x3407 = 2U;
	static volatile int32_t t52 = -17;

	t52 = (x3405*((x3406>>x3407)|x3408));

	if (t52 != -1048448) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3449 = 0;
	uint16_t x3450 = 2U;
	static int8_t x3451 = 1;
	uint64_t t53 = 1699002025411LLU;

	t53 = (x3449*((x3450>>x3451)|x3452));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {


	t54 = (x3473*((x3474>>x3475)|x3476));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3545 = INT32_MIN;
	uint16_t x3546 = UINT16_MAX;
	uint64_t x3548 = 3428791475680LLU;

	t55 = (x3545*((x3546>>x3547)|x3548));

	if (t55 != 15424001893147344896LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3609 = -234295541253LL;
	volatile uint8_t x3610 = 4U;
	uint8_t x3611 = 1U;
	int8_t x3612 = INT8_MIN;
	static int64_t t56 = -3302796914462840041LL;

	t56 = (x3609*((x3610>>x3611)|x3612));

	if (t56 != 29521238197878LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3617 = -60;
	uint8_t x3618 = 54U;
	uint64_t x3619 = 12LLU;
	static int64_t x3620 = -1LL;
	volatile int64_t t57 = -1098148739LL;

	t57 = (x3617*((x3618>>x3619)|x3620));

	if (t57 != 60LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3693 = 2613U;
	int16_t x3695 = 3;
	uint64_t x3696 = UINT64_MAX;
	uint64_t t58 = 8351042590572778LLU;

	t58 = (x3693*((x3694>>x3695)|x3696));

	if (t58 != 18446744073709549003LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x3713 = 294U;
	uint8_t x3714 = 8U;
	int16_t x3716 = INT16_MIN;
	volatile int32_t t59 = -10587;

	t59 = (x3713*((x3714>>x3715)|x3716));

	if (t59 != -9633204) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3717 = 39;
	volatile uint64_t x3718 = UINT64_MAX;
	int8_t x3719 = 34;
	int64_t x3720 = -1LL;
	uint64_t t60 = 12014163670583LLU;

	t60 = (x3717*((x3718>>x3719)|x3720));

	if (t60 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3761 = INT32_MIN;
	static volatile int8_t x3762 = 3;
	static uint32_t x3763 = 6U;
	int64_t x3764 = 961279069LL;
	static int64_t t61 = 578LL;

	t61 = (x3761*((x3762>>x3763)|x3764));

	if (t61 != -2064331081842163712LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x3789 = UINT8_MAX;
	uint64_t x3790 = 31091322LLU;
	int32_t x3791 = 18;
	uint64_t x3792 = 391522822857LLU;
	volatile uint64_t t62 = 2354527LLU;

	t62 = (x3789*((x3790>>x3791)|x3792));

	if (t62 != 99838319842305LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3793 = -694294657LL;
	uint32_t x3794 = 402U;
	volatile uint8_t x3795 = 13U;
	volatile int64_t t63 = -646LL;

	t63 = (x3793*((x3794>>x3795)|x3796));

	if (t63 != -1490986422106974079LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3809 = 24593U;
	int16_t x3810 = 1;
	uint8_t x3811 = 29U;
	int8_t x3812 = INT8_MIN;
	static volatile uint32_t t64 = 232391189U;

	t64 = (x3809*((x3810>>x3811)|x3812));

	if (t64 != 4291819392U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3825 = -1;
	static uint8_t x3826 = 8U;
	int8_t x3827 = 2;
	uint64_t x3828 = UINT64_MAX;

	t65 = (x3825*((x3826>>x3827)|x3828));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3830 = 11U;
	uint16_t x3831 = 6U;
	int32_t x3832 = -1;
	uint64_t t66 = 3864445932509681898LLU;

	t66 = (x3829*((x3830>>x3831)|x3832));

	if (t66 != 18446736068649998790LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x3849 = -1;
	static uint8_t x3851 = 14U;
	static int16_t x3852 = 0;
	int32_t t67 = -112423182;

	t67 = (x3849*((x3850>>x3851)|x3852));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3877 = 884900547621321290LL;
	static int16_t x3878 = INT16_MAX;
	uint64_t x3880 = 585651513969586LLU;
	volatile uint64_t t68 = 1811850016149659187LLU;

	t68 = (x3877*((x3878>>x3879)|x3880));

	if (t68 != 11412953610015966646LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3889 = INT8_MAX;
	int16_t x3890 = INT16_MAX;
	int64_t x3891 = 27LL;
	int16_t x3892 = -36;

	t69 = (x3889*((x3890>>x3891)|x3892));

	if (t69 != -4572) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3945 = INT32_MAX;
	static volatile uint64_t x3946 = 2019784540773LLU;
	uint16_t x3947 = 1U;
	int16_t x3948 = INT16_MIN;
	static uint64_t t70 = 196116594976LLU;

	t70 = (x3945*((x3946>>x3947)|x3948));

	if (t70 != 18446691954281438926LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3955 = 11U;
	static int32_t x3956 = INT32_MIN;
	volatile uint32_t t71 = 15983U;

	t71 = (x3953*((x3954>>x3955)|x3956));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3957 = INT64_MIN;
	static uint8_t x3958 = 6U;
	int32_t x3960 = 0;
	int64_t t72 = INT64_MIN;

	t72 = (x3957*((x3958>>x3959)|x3960));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x3995 = 2;
	volatile int8_t x3996 = -1;
	static volatile int64_t t73 = -3671LL;

	t73 = (x3993*((x3994>>x3995)|x3996));

	if (t73 != -255LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4029 = -1192;
	int64_t x4030 = INT64_MAX;
	volatile int64_t t74 = -149969632024LL;

	t74 = (x4029*((x4030>>x4031)|x4032));

	if (t74 != 1192LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4061 = 5U;
	int32_t x4062 = INT32_MAX;
	int8_t x4063 = 19;
	uint64_t x4064 = 1078296743LLU;
	uint64_t t75 = 209924806313989687LLU;

	t75 = (x4061*((x4062>>x4063)|x4064));

	if (t75 != 5391503355LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4109 = INT16_MAX;
	int8_t x4111 = 1;
	static volatile uint32_t t76 = 1349877406U;

	t76 = (x4109*((x4110>>x4111)|x4112));

	if (t76 != 816715779U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4157 = -9;
	uint16_t x4158 = UINT16_MAX;
	int8_t x4159 = 1;
	volatile uint8_t x4160 = 35U;
	int32_t t77 = -764;

	t77 = (x4157*((x4158>>x4159)|x4160));

	if (t77 != -294903) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4193 = INT16_MAX;
	int8_t x4194 = 24;
	uint8_t x4195 = 24U;
	static volatile int16_t x4196 = -1;
	static volatile int32_t t78 = -19;

	t78 = (x4193*((x4194>>x4195)|x4196));

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4211 = 6;
	int32_t x4212 = -1;
	volatile int32_t t79 = 491;

	t79 = (x4209*((x4210>>x4211)|x4212));

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4234 = UINT64_MAX;
	uint8_t x4235 = 2U;
	uint16_t x4236 = UINT16_MAX;
	uint64_t t80 = 51LLU;

	t80 = (x4233*((x4234>>x4235)|x4236));

	if (t80 != 128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4269 = INT16_MIN;
	uint16_t x4270 = 2770U;
	uint64_t x4271 = 3LLU;
	int16_t x4272 = INT16_MIN;
	int32_t t81 = 122391328;

	t81 = (x4269*((x4270>>x4271)|x4272));

	if (t81 != 1062404096) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4303 = 6U;
	int16_t x4304 = INT16_MIN;

	t82 = (x4301*((x4302>>x4303)|x4304));

	if (t82 != -258056) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4334 = 13888126U;
	uint8_t x4335 = 0U;
	uint64_t x4336 = UINT64_MAX;
	uint64_t t83 = 860669010LLU;

	t83 = (x4333*((x4334>>x4335)|x4336));

	if (t83 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4413 = 11;
	uint8_t x4415 = 7U;
	static volatile uint64_t t84 = 114013LLU;

	t84 = (x4413*((x4414>>x4415)|x4416));

	if (t84 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4653 = 0U;
	volatile uint8_t x4655 = 0U;
	volatile int8_t x4656 = INT8_MAX;
	uint32_t t85 = 591U;

	t85 = (x4653*((x4654>>x4655)|x4656));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x4673 = INT16_MIN;
	volatile int16_t x4675 = 3;
	uint32_t t86 = 14823U;

	t86 = (x4673*((x4674>>x4675)|x4676));

	if (t86 != 1073709056U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4760 = INT64_MIN;
	uint64_t t87 = 68111168930LLU;

	t87 = (x4757*((x4758>>x4759)|x4760));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4870 = 41;
	int8_t x4871 = 2;
	volatile uint64_t x4872 = UINT64_MAX;

	t88 = (x4869*((x4870>>x4871)|x4872));

	if (t88 != 18446744073709548039LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4925 = -1LL;
	uint16_t x4926 = UINT16_MAX;
	uint8_t x4927 = 0U;
	int64_t x4928 = -16450LL;

	t89 = (x4925*((x4926>>x4927)|x4928));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4933 = -3;
	uint64_t x4934 = 555LLU;
	uint64_t x4935 = 6LLU;
	static int32_t x4936 = -1;
	volatile uint64_t t90 = 1892351928523125289LLU;

	t90 = (x4933*((x4934>>x4935)|x4936));

	if (t90 != 3LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5057 = -1;
	volatile uint16_t x5058 = UINT16_MAX;
	int8_t x5059 = 9;
	uint16_t x5060 = 11837U;
	int32_t t91 = -299068022;

	t91 = (x5057*((x5058>>x5059)|x5060));

	if (t91 != -11903) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5117 = -61;
	uint64_t x5118 = UINT64_MAX;
	uint8_t x5119 = 0U;
	uint16_t x5120 = 343U;
	volatile uint64_t t92 = 41847096274LLU;

	t92 = (x5117*((x5118>>x5119)|x5120));

	if (t92 != 61LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5157 = -1;
	static int16_t x5159 = 18;
	int32_t x5160 = INT32_MAX;
	static uint32_t t93 = 74403U;

	t93 = (x5157*((x5158>>x5159)|x5160));

	if (t93 != 2147483649U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5165 = 7289086;
	uint8_t x5166 = 0U;
	static int16_t x5167 = 1;
	int8_t x5168 = -8;
	int32_t t94 = -54176;

	t94 = (x5165*((x5166>>x5167)|x5168));

	if (t94 != -58312688) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5185 = 25304U;
	static uint32_t x5186 = UINT32_MAX;
	volatile uint16_t x5187 = 6U;
	int32_t x5188 = -44023356;
	uint32_t t95 = 1227904U;

	t95 = (x5185*((x5186>>x5187)|x5188));

	if (t95 != 4294941992U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5189 = INT16_MIN;
	uint16_t x5191 = 11U;
	static int16_t x5192 = -1;
	static uint32_t t96 = 1581314U;

	t96 = (x5189*((x5190>>x5191)|x5192));

	if (t96 != 32768U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5219 = 1U;
	int64_t x5220 = 223031295941LL;
	int64_t t97 = -61925492132299395LL;

	t97 = (x5217*((x5218>>x5219)|x5220));

	if (t97 != -7308289505394688LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x5350 = 1971LLU;
	static int8_t x5352 = INT8_MAX;
	static uint64_t t98 = 18388LLU;

	t98 = (x5349*((x5350>>x5351)|x5352));

	if (t98 != 18446744073709485449LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5377 = INT16_MIN;
	uint64_t x5378 = 111879495186687LLU;
	int32_t x5380 = -666855394;

	t99 = (x5377*((x5378>>x5379)|x5380));

	if (t99 != 1767945306112LLU) { NG(); } else { ; }
	
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

