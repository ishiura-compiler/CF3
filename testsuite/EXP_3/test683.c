#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 31159;
int8_t x49 = INT8_MIN;
uint32_t x51 = 1891U;
int16_t x52 = 1;
int16_t x121 = INT16_MIN;
int64_t x137 = -1LL;
static volatile int64_t t7 = -1LL;
uint32_t x177 = 2061274534U;
int32_t x180 = -2;
static volatile int64_t t11 = 379LL;
uint8_t x226 = 113U;
static volatile uint32_t x227 = UINT32_MAX;
uint64_t x239 = UINT64_MAX;
volatile int32_t t13 = -5797060;
uint64_t t14 = 0LLU;
volatile uint32_t x302 = 54U;
int16_t x355 = -1424;
volatile uint64_t t18 = 729492318350148LLU;
volatile uint64_t x369 = 4025570156183LLU;
uint32_t x379 = 5U;
int32_t x390 = -72;
static int32_t x392 = INT32_MIN;
int32_t t21 = 0;
int16_t x397 = INT16_MAX;
int32_t x427 = INT32_MIN;
int16_t x496 = INT16_MIN;
int32_t x501 = INT32_MAX;
int32_t x503 = -1;
volatile uint32_t x504 = UINT32_MAX;
static volatile int64_t t27 = -38972505333564LL;
int16_t x566 = -1;
uint16_t x567 = UINT16_MAX;
volatile int16_t x568 = -1;
int64_t x620 = -1LL;
volatile int64_t x668 = -22462LL;
static int32_t t32 = 925;
int64_t x681 = 1919LL;
static int32_t x738 = -1;
int8_t x757 = -63;
uint8_t x758 = 96U;
uint64_t x769 = 5795427998155817LLU;
uint8_t x773 = UINT8_MAX;
volatile uint64_t t40 = 2873815482LLU;
int32_t x859 = -1;
static uint16_t x861 = 24749U;
volatile uint32_t t47 = 3677478U;
uint64_t t49 = 106LLU;
int8_t x926 = -1;
volatile uint16_t x975 = 8U;
int8_t x991 = 0;
uint32_t x1022 = 6588U;
int32_t x1023 = INT32_MIN;
volatile uint16_t x1029 = UINT16_MAX;
uint32_t x1030 = 1561267U;
static int32_t x1032 = INT32_MAX;
volatile uint64_t x1043 = UINT64_MAX;
uint32_t x1120 = 228U;
volatile uint32_t t59 = 2U;
volatile int64_t t60 = -103461764913190LL;
uint8_t x1163 = 0U;
int64_t x1171 = -1LL;
int64_t x1236 = -1LL;
volatile int64_t t64 = 287399739LL;
uint8_t x1265 = 7U;
int8_t x1274 = INT8_MAX;
volatile uint64_t t66 = 1046919694495904LLU;
static int32_t x1298 = INT32_MAX;
int64_t x1309 = -90LL;
static uint64_t t69 = 452460094LLU;
static uint32_t x1313 = 2551U;
int32_t x1315 = INT32_MIN;
uint16_t x1328 = 4U;
int16_t x1346 = INT16_MIN;
int32_t x1365 = -12980780;
int64_t t75 = 31227967LL;
int16_t x1376 = -1;
volatile uint64_t t76 = 1072903737682024489LLU;
int64_t x1387 = 2062791489051LL;
static volatile uint64_t t77 = 2351662LLU;
int64_t x1397 = INT64_MAX;
int8_t x1398 = -2;
int64_t t78 = -480621LL;
volatile uint64_t x1406 = 42LLU;
volatile int32_t t80 = 20494;
volatile uint64_t x1443 = UINT64_MAX;
int64_t x1444 = INT64_MAX;
volatile uint16_t x1463 = 125U;
volatile int32_t x1526 = INT32_MIN;
static volatile uint32_t t84 = 0U;
volatile int8_t x1565 = INT8_MIN;
static volatile int64_t x1567 = INT64_MIN;
static int32_t x1588 = -1;
volatile int32_t x1595 = INT32_MAX;
int8_t x1596 = 11;
int32_t x1638 = -111658236;
int16_t x1658 = 1;
static uint32_t x1662 = 140U;
volatile int16_t x1677 = -1;
static int64_t x1680 = -1LL;
volatile int32_t t94 = -24;
uint64_t x1749 = UINT64_MAX;
static volatile uint64_t t97 = 368359540LLU;
int8_t x1754 = -1;
uint64_t x1765 = 5699694601822LLU;


void f0(void) {
	int32_t x13 = 1028989240;
	volatile int16_t x14 = INT16_MIN;
	volatile int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;

	t0 = ((x13+x14)>>(x15%x16));

	if (t0 != 1028956472) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x45 = -14;
	static uint16_t x46 = 22U;
	int64_t x47 = INT64_MAX;
	int32_t x48 = -13;
	volatile int32_t t1 = 2108;

	t1 = ((x45+x46)>>(x47%x48));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x50 = 0LLU;
	uint64_t t2 = 5082611207LLU;

	t2 = ((x49+x50)>>(x51%x52));

	if (t2 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x101 = 4U;
	volatile int64_t x102 = 1935LL;
	volatile uint16_t x103 = UINT16_MAX;
	uint8_t x104 = 5U;
	volatile int64_t t3 = -1074888013027134LL;

	t3 = ((x101+x102)>>(x103%x104));

	if (t3 != 1939LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x109 = INT32_MIN;
	static uint32_t x110 = 5380U;
	int64_t x111 = 2000LL;
	int32_t x112 = -1;
	uint32_t t4 = 727U;

	t4 = ((x109+x110)>>(x111%x112));

	if (t4 != 2147489028U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x117 = 26U;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = 21;
	static int16_t x120 = 14;
	uint32_t t5 = 57U;

	t5 = ((x117+x118)>>(x119%x120));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x122 = 455548U;
	volatile int32_t x123 = -1;
	uint32_t x124 = 15U;
	volatile uint32_t t6 = 8132U;

	t6 = ((x121+x122)>>(x123%x124));

	if (t6 != 422780U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x138 = 67967U;
	uint8_t x139 = 30U;
	volatile uint8_t x140 = 24U;

	t7 = ((x137+x138)>>(x139%x140));

	if (t7 != 1061LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x141 = -1734296144445615LL;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = -2202305;
	volatile int16_t x144 = -1;
	volatile uint64_t t8 = 232848885352228LLU;

	t8 = ((x141+x142)>>(x143%x144));

	if (t8 != 18445009777565106000LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x157 = 27620U;
	int8_t x158 = -6;
	uint16_t x159 = 28U;
	uint64_t x160 = 549976869028189LLU;
	int32_t t9 = 115418;

	t9 = ((x157+x158)>>(x159%x160));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x178 = -1;
	static int16_t x179 = INT16_MAX;
	volatile uint32_t t10 = 409252175U;

	t10 = ((x177+x178)>>(x179%x180));

	if (t10 != 1030637266U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x221 = 167308364747LL;
	uint32_t x222 = 3U;
	volatile uint8_t x223 = 3U;
	volatile int32_t x224 = INT32_MIN;

	t11 = ((x221+x222)>>(x223%x224));

	if (t11 != 20913545593LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x225 = -1;
	uint8_t x228 = 20U;
	volatile int32_t t12 = 252764;

	t12 = ((x225+x226)>>(x227%x228));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x237 = INT16_MIN;
	static uint16_t x238 = UINT16_MAX;
	uint8_t x240 = 77U;

	t13 = ((x237+x238)>>(x239%x240));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x241 = INT64_MAX;
	uint64_t x242 = UINT64_MAX;
	static int64_t x243 = 635198867LL;
	volatile int16_t x244 = -1;

	t14 = ((x241+x242)>>(x243%x244));

	if (t14 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x301 = 21726255;
	int64_t x303 = 7596500LL;
	volatile int32_t x304 = -1;
	volatile uint32_t t15 = 567242162U;

	t15 = ((x301+x302)>>(x303%x304));

	if (t15 != 21726309U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x305 = -16;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	static int32_t t16 = 240118;

	t16 = ((x305+x306)>>(x307%x308));

	if (t16 != 65519) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x309 = UINT8_MAX;
	int32_t x310 = -1;
	volatile uint16_t x311 = 0U;
	static volatile int64_t x312 = INT64_MAX;
	static int32_t t17 = 344592;

	t17 = ((x309+x310)>>(x311%x312));

	if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x353 = 2000508925630LLU;
	int32_t x354 = INT32_MIN;
	static volatile int32_t x356 = -1;

	t18 = ((x353+x354)>>(x355%x356));

	if (t18 != 1998361441982LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MAX;
	int32_t x372 = INT32_MAX;
	uint64_t t19 = 1079189728297552LLU;

	t19 = ((x369+x370)>>(x371%x372));

	if (t19 != 4027717639830LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x377 = 6292U;
	int8_t x378 = 1;
	int64_t x380 = INT64_MIN;
	volatile uint32_t t20 = 2989U;

	t20 = ((x377+x378)>>(x379%x380));

	if (t20 != 196U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x389 = UINT8_MAX;
	int32_t x391 = INT32_MIN;

	t21 = ((x389+x390)>>(x391%x392));

	if (t21 != 183) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x398 = 0U;
	volatile uint8_t x399 = 6U;
	int32_t x400 = -60606;
	int32_t t22 = 1398;

	t22 = ((x397+x398)>>(x399%x400));

	if (t22 != 511) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x425 = 48U;
	int32_t x426 = 6509;
	int8_t x428 = -1;
	static volatile uint32_t t23 = 3U;

	t23 = ((x425+x426)>>(x427%x428));

	if (t23 != 6557U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x493 = -15777;
	uint32_t x494 = 1395U;
	static int16_t x495 = INT16_MIN;
	static uint32_t t24 = 1362U;

	t24 = ((x493+x494)>>(x495%x496));

	if (t24 != 4294952914U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x497 = 1079468U;
	int32_t x498 = INT32_MAX;
	int8_t x499 = 1;
	int64_t x500 = INT64_MIN;
	volatile uint32_t t25 = 14U;

	t25 = ((x497+x498)>>(x499%x500));

	if (t25 != 1074281557U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x502 = INT8_MIN;
	static volatile int32_t t26 = 8451478;

	t26 = ((x501+x502)>>(x503%x504));

	if (t26 != 2147483519) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x529 = 2807044U;
	static int64_t x530 = -1LL;
	uint8_t x531 = UINT8_MAX;
	int16_t x532 = -1;

	t27 = ((x529+x530)>>(x531%x532));

	if (t27 != 2807043LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x561 = 64053653236LL;
	uint8_t x562 = UINT8_MAX;
	int64_t x563 = INT64_MAX;
	static uint8_t x564 = 10U;
	int64_t t28 = -6852880542595720LL;

	t28 = ((x561+x562)>>(x563%x564));

	if (t28 != 500419167LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x565 = UINT8_MAX;
	int32_t t29 = 201853943;

	t29 = ((x565+x566)>>(x567%x568));

	if (t29 != 254) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x609 = 35795419LLU;
	int32_t x610 = INT32_MIN;
	uint8_t x611 = 99U;
	int16_t x612 = -1;
	volatile uint64_t t30 = 5628514LLU;

	t30 = ((x609+x610)>>(x611%x612));

	if (t30 != 18446744071597863387LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x617 = -1LL;
	int32_t x618 = INT32_MAX;
	int8_t x619 = -1;
	int64_t t31 = 10609306956691LL;

	t31 = ((x617+x618)>>(x619%x620));

	if (t31 != 2147483646LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x665 = 1586;
	volatile int32_t x666 = -1;
	static uint64_t x667 = 10LLU;

	t32 = ((x665+x666)>>(x667%x668));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x673 = 5;
	uint16_t x674 = 3U;
	int32_t x675 = 1;
	int16_t x676 = -1324;
	volatile int32_t t33 = -104740;

	t33 = ((x673+x674)>>(x675%x676));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x682 = -1;
	uint8_t x683 = 6U;
	int16_t x684 = INT16_MIN;
	int64_t t34 = -4813221882085LL;

	t34 = ((x681+x682)>>(x683%x684));

	if (t34 != 29LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x701 = 12U;
	volatile int64_t x702 = -1LL;
	static uint8_t x703 = 13U;
	int16_t x704 = INT16_MIN;
	int64_t t35 = 51959419001LL;

	t35 = ((x701+x702)>>(x703%x704));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x737 = 76759887LLU;
	volatile uint64_t x739 = 121522LLU;
	uint8_t x740 = 2U;
	volatile uint64_t t36 = 503961645948957LLU;

	t36 = ((x737+x738)>>(x739%x740));

	if (t36 != 76759886LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x749 = -1;
	uint64_t x750 = 171163304LLU;
	static volatile int32_t x751 = -1;
	uint64_t x752 = UINT64_MAX;
	uint64_t t37 = 1967949580551LLU;

	t37 = ((x749+x750)>>(x751%x752));

	if (t37 != 171163303LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x759 = 16LLU;
	uint16_t x760 = UINT16_MAX;
	int32_t t38 = 563343221;

	t38 = ((x757+x758)>>(x759%x760));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x770 = 514U;
	int32_t x771 = INT32_MAX;
	static uint8_t x772 = 7U;
	uint64_t t39 = 15LLU;

	t39 = ((x769+x770)>>(x771%x772));

	if (t39 != 2897713999078165LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x774 = UINT64_MAX;
	uint64_t x775 = 531702349751605429LLU;
	uint8_t x776 = 2U;

	t40 = ((x773+x774)>>(x775%x776));

	if (t40 != 127LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x793 = 1;
	int32_t x794 = -1;
	static uint8_t x795 = 70U;
	int8_t x796 = -1;
	volatile int32_t t41 = -54076080;

	t41 = ((x793+x794)>>(x795%x796));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x797 = 198985545U;
	volatile int8_t x798 = INT8_MIN;
	volatile int8_t x799 = INT8_MIN;
	int16_t x800 = -1;
	volatile uint32_t t42 = 1U;

	t42 = ((x797+x798)>>(x799%x800));

	if (t42 != 198985417U) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x805 = INT64_MAX;
	int16_t x806 = -1;
	int8_t x807 = 2;
	static volatile int16_t x808 = INT16_MIN;
	volatile int64_t t43 = -24783076807LL;

	t43 = ((x805+x806)>>(x807%x808));

	if (t43 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x821 = -424;
	static uint16_t x822 = 1506U;
	volatile uint64_t x823 = UINT64_MAX;
	uint8_t x824 = 26U;
	static int32_t t44 = 6693111;

	t44 = ((x821+x822)>>(x823%x824));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x845 = INT8_MIN;
	int32_t x846 = INT32_MAX;
	uint16_t x847 = 0U;
	int64_t x848 = INT64_MIN;
	int32_t t45 = -194471;

	t45 = ((x845+x846)>>(x847%x848));

	if (t45 != 2147483519) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x857 = -61;
	uint64_t x858 = 115720530508490998LLU;
	int16_t x860 = -1;
	uint64_t t46 = 427132112LLU;

	t46 = ((x857+x858)>>(x859%x860));

	if (t46 != 115720530508490937LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x862 = UINT32_MAX;
	static int8_t x863 = 60;
	volatile uint16_t x864 = 7U;

	t47 = ((x861+x862)>>(x863%x864));

	if (t47 != 1546U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x869 = -1;
	volatile int64_t x870 = 10709233LL;
	volatile int16_t x871 = INT16_MAX;
	uint8_t x872 = 3U;
	volatile int64_t t48 = -3804126141694705548LL;

	t48 = ((x869+x870)>>(x871%x872));

	if (t48 != 5354616LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x913 = -1;
	uint64_t x914 = 18LLU;
	volatile uint8_t x915 = UINT8_MAX;
	uint8_t x916 = 1U;

	t49 = ((x913+x914)>>(x915%x916));

	if (t49 != 17LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x925 = INT32_MAX;
	uint16_t x927 = UINT16_MAX;
	uint16_t x928 = UINT16_MAX;
	volatile int32_t t50 = 2798;

	t50 = ((x925+x926)>>(x927%x928));

	if (t50 != 2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x929 = -234;
	uint8_t x930 = UINT8_MAX;
	int16_t x931 = -1;
	int64_t x932 = -1LL;
	static int32_t t51 = 5043;

	t51 = ((x929+x930)>>(x931%x932));

	if (t51 != 21) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x973 = UINT16_MAX;
	int16_t x974 = INT16_MIN;
	int64_t x976 = 64016862954LL;
	volatile int32_t t52 = 2189866;

	t52 = ((x973+x974)>>(x975%x976));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x989 = 22U;
	static int32_t x990 = -1;
	int32_t x992 = -153500895;
	int32_t t53 = -41707371;

	t53 = ((x989+x990)>>(x991%x992));

	if (t53 != 21) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1021 = INT8_MAX;
	int32_t x1024 = INT32_MIN;
	uint32_t t54 = 12236U;

	t54 = ((x1021+x1022)>>(x1023%x1024));

	if (t54 != 6715U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1031 = 1U;
	static uint32_t t55 = 6U;

	t55 = ((x1029+x1030)>>(x1031%x1032));

	if (t55 != 813401U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x1041 = -1LL;
	int8_t x1042 = INT8_MAX;
	uint16_t x1044 = 39U;
	int64_t t56 = -223473091465LL;

	t56 = ((x1041+x1042)>>(x1043%x1044));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x1085 = 1U;
	int64_t x1086 = -1LL;
	volatile int64_t x1087 = INT64_MIN;
	int8_t x1088 = 1;
	int64_t t57 = -48LL;

	t57 = ((x1085+x1086)>>(x1087%x1088));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1117 = UINT16_MAX;
	int16_t x1118 = INT16_MAX;
	uint8_t x1119 = UINT8_MAX;
	volatile int32_t t58 = -297;

	t58 = ((x1117+x1118)>>(x1119%x1120));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x1133 = INT8_MAX;
	uint32_t x1134 = 326645054U;
	uint8_t x1135 = 0U;
	volatile int8_t x1136 = -1;

	t59 = ((x1133+x1134)>>(x1135%x1136));

	if (t59 != 326645181U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1141 = INT16_MAX;
	int64_t x1142 = -1LL;
	int8_t x1143 = -1;
	int8_t x1144 = -1;

	t60 = ((x1141+x1142)>>(x1143%x1144));

	if (t60 != 32766LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1161 = 157U;
	uint64_t x1162 = 9553278463LLU;
	uint32_t x1164 = UINT32_MAX;
	uint64_t t61 = 1722LLU;

	t61 = ((x1161+x1162)>>(x1163%x1164));

	if (t61 != 9553278620LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1169 = 251116970444560680LL;
	volatile int16_t x1170 = -1;
	int8_t x1172 = 1;
	int64_t t62 = 1017129770LL;

	t62 = ((x1169+x1170)>>(x1171%x1172));

	if (t62 != 251116970444560679LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1205 = 2097160U;
	int8_t x1206 = INT8_MIN;
	uint16_t x1207 = UINT16_MAX;
	int16_t x1208 = -1;
	uint32_t t63 = 2U;

	t63 = ((x1205+x1206)>>(x1207%x1208));

	if (t63 != 2097032U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1233 = 2210233062683796LL;
	uint16_t x1234 = 32179U;
	volatile int8_t x1235 = -1;

	t64 = ((x1233+x1234)>>(x1235%x1236));

	if (t64 != 2210233062715975LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1266 = 5;
	volatile int16_t x1267 = INT16_MIN;
	uint32_t x1268 = 1U;
	static volatile int32_t t65 = -190957209;

	t65 = ((x1265+x1266)>>(x1267%x1268));

	if (t65 != 12) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x1273 = 146912LLU;
	int64_t x1275 = -1LL;
	volatile int32_t x1276 = -1;

	t66 = ((x1273+x1274)>>(x1275%x1276));

	if (t66 != 147039LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x1277 = 23697U;
	uint64_t x1278 = UINT64_MAX;
	uint8_t x1279 = UINT8_MAX;
	int8_t x1280 = INT8_MAX;
	uint64_t t67 = 1521991132171851519LLU;

	t67 = ((x1277+x1278)>>(x1279%x1280));

	if (t67 != 11848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1297 = INT16_MIN;
	int64_t x1299 = INT64_MIN;
	int64_t x1300 = INT64_MIN;
	volatile int32_t t68 = 427732318;

	t68 = ((x1297+x1298)>>(x1299%x1300));

	if (t68 != 2147450879) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x1310 = 1880452018688301LLU;
	volatile uint16_t x1311 = UINT16_MAX;
	int64_t x1312 = -1LL;

	t69 = ((x1309+x1310)>>(x1311%x1312));

	if (t69 != 1880452018688211LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1314 = UINT64_MAX;
	int8_t x1316 = INT8_MIN;
	volatile uint64_t t70 = 2LLU;

	t70 = ((x1313+x1314)>>(x1315%x1316));

	if (t70 != 2550LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1325 = -1;
	int64_t x1326 = 357475LL;
	int64_t x1327 = INT64_MAX;
	static volatile int64_t t71 = -19LL;

	t71 = ((x1325+x1326)>>(x1327%x1328));

	if (t71 != 44684LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1337 = 3416U;
	int8_t x1338 = INT8_MIN;
	int32_t x1339 = INT32_MAX;
	static int8_t x1340 = INT8_MAX;
	volatile int32_t t72 = -518936;

	t72 = ((x1337+x1338)>>(x1339%x1340));

	if (t72 != 25) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1345 = 85315192U;
	uint8_t x1347 = 14U;
	static int8_t x1348 = INT8_MIN;
	uint32_t t73 = 65740878U;

	t73 = ((x1345+x1346)>>(x1347%x1348));

	if (t73 != 5205U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1353 = INT32_MAX;
	volatile int8_t x1354 = INT8_MIN;
	static int64_t x1355 = INT64_MIN;
	int8_t x1356 = INT8_MIN;
	int32_t t74 = 124021018;

	t74 = ((x1353+x1354)>>(x1355%x1356));

	if (t74 != 2147483519) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x1366 = INT64_MAX;
	static uint64_t x1367 = 0LLU;
	int16_t x1368 = INT16_MAX;

	t75 = ((x1365+x1366)>>(x1367%x1368));

	if (t75 != 9223372036841795027LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x1373 = INT32_MIN;
	static uint64_t x1374 = UINT64_MAX;
	static volatile int64_t x1375 = INT64_MIN;

	t76 = ((x1373+x1374)>>(x1375%x1376));

	if (t76 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1385 = INT64_MIN;
	uint64_t x1386 = UINT64_MAX;
	uint16_t x1388 = 1U;

	t77 = ((x1385+x1386)>>(x1387%x1388));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1399 = 14;
	int8_t x1400 = INT8_MIN;

	t78 = ((x1397+x1398)>>(x1399%x1400));

	if (t78 != 562949953421311LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1405 = 0U;
	int64_t x1407 = -1LL;
	int8_t x1408 = 1;
	volatile uint64_t t79 = 0LLU;

	t79 = ((x1405+x1406)>>(x1407%x1408));

	if (t79 != 42LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1421 = INT16_MAX;
	uint8_t x1422 = 42U;
	int16_t x1423 = INT16_MAX;
	volatile int16_t x1424 = INT16_MAX;

	t80 = ((x1421+x1422)>>(x1423%x1424));

	if (t80 != 32809) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x1441 = 1U;
	uint8_t x1442 = UINT8_MAX;
	volatile int32_t t81 = 2923612;

	t81 = ((x1441+x1442)>>(x1443%x1444));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1461 = UINT8_MAX;
	static uint64_t x1462 = 4LLU;
	static int32_t x1464 = -1;
	volatile uint64_t t82 = 364197LLU;

	t82 = ((x1461+x1462)>>(x1463%x1464));

	if (t82 != 259LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x1469 = INT16_MAX;
	volatile uint16_t x1470 = 52U;
	volatile int32_t x1471 = -1;
	static int32_t x1472 = -1;
	int32_t t83 = -1;

	t83 = ((x1469+x1470)>>(x1471%x1472));

	if (t83 != 32819) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1525 = 386548U;
	static uint8_t x1527 = 4U;
	static volatile uint8_t x1528 = 77U;

	t84 = ((x1525+x1526)>>(x1527%x1528));

	if (t84 != 134241887U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x1549 = UINT16_MAX;
	static int32_t x1550 = 0;
	int16_t x1551 = INT16_MIN;
	int64_t x1552 = -1LL;
	volatile int32_t t85 = 1;

	t85 = ((x1549+x1550)>>(x1551%x1552));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x1553 = 513;
	uint8_t x1554 = UINT8_MAX;
	int16_t x1555 = INT16_MIN;
	int64_t x1556 = -1LL;
	volatile int32_t t86 = -534413735;

	t86 = ((x1553+x1554)>>(x1555%x1556));

	if (t86 != 768) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x1566 = 5787580LL;
	volatile int32_t x1568 = INT32_MIN;
	volatile int64_t t87 = -43LL;

	t87 = ((x1565+x1566)>>(x1567%x1568));

	if (t87 != 5787452LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1585 = -1;
	static uint64_t x1586 = UINT64_MAX;
	int16_t x1587 = INT16_MAX;
	uint64_t t88 = 24823756LLU;

	t88 = ((x1585+x1586)>>(x1587%x1588));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x1593 = 11142;
	volatile uint16_t x1594 = 989U;
	static volatile int32_t t89 = -224060090;

	t89 = ((x1593+x1594)>>(x1595%x1596));

	if (t89 != 6065) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x1637 = INT32_MAX;
	int64_t x1639 = INT64_MAX;
	static volatile uint32_t x1640 = 1U;
	volatile int32_t t90 = 51;

	t90 = ((x1637+x1638)>>(x1639%x1640));

	if (t90 != 2035825411) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1653 = 78U;
	static int8_t x1654 = INT8_MAX;
	uint8_t x1655 = 0U;
	uint16_t x1656 = 64U;
	int32_t t91 = 387599;

	t91 = ((x1653+x1654)>>(x1655%x1656));

	if (t91 != 205) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1657 = -1;
	int64_t x1659 = INT64_MAX;
	int64_t x1660 = INT64_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x1657+x1658)>>(x1659%x1660));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x1661 = UINT8_MAX;
	uint8_t x1663 = 29U;
	int32_t x1664 = INT32_MAX;
	uint32_t t93 = 590U;

	t93 = ((x1661+x1662)>>(x1663%x1664));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x1678 = 3;
	int64_t x1679 = 34LL;

	t94 = ((x1677+x1678)>>(x1679%x1680));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1689 = 31262603LL;
	volatile int16_t x1690 = -1;
	uint8_t x1691 = 2U;
	volatile int64_t x1692 = -945720349LL;
	volatile int64_t t95 = -44677191889228153LL;

	t95 = ((x1689+x1690)>>(x1691%x1692));

	if (t95 != 7815650LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x1721 = 13U;
	static uint8_t x1722 = UINT8_MAX;
	int16_t x1723 = INT16_MIN;
	int64_t x1724 = -1LL;
	static int32_t t96 = -3959113;

	t96 = ((x1721+x1722)>>(x1723%x1724));

	if (t96 != 268) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x1750 = UINT32_MAX;
	int64_t x1751 = INT64_MAX;
	static int64_t x1752 = -1LL;

	t97 = ((x1749+x1750)>>(x1751%x1752));

	if (t97 != 4294967294LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x1753 = 66LLU;
	static int8_t x1755 = 5;
	volatile int32_t x1756 = INT32_MIN;
	volatile uint64_t t98 = 56482983LLU;

	t98 = ((x1753+x1754)>>(x1755%x1756));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1766 = -1;
	volatile int32_t x1767 = 2203;
	static int8_t x1768 = -12;
	volatile uint64_t t99 = 4999922785488051358LLU;

	t99 = ((x1765+x1766)>>(x1767%x1768));

	if (t99 != 44528864076LLU) { NG(); } else { ; }
	
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

