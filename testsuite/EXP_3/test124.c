#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x61 = 420107396;
static volatile int32_t x257 = -1;
int8_t x258 = -1;
static uint8_t x293 = UINT8_MAX;
int16_t x294 = 5572;
static volatile int8_t x295 = 5;
int8_t x372 = 0;
int64_t x409 = INT64_MIN;
volatile int32_t t5 = 260530471;
static uint8_t x424 = 15U;
static volatile int32_t t7 = -130058;
uint8_t x490 = UINT8_MAX;
int8_t x526 = 27;
uint32_t x527 = UINT32_MAX;
static volatile int32_t t11 = 0;
int16_t x614 = INT16_MIN;
static volatile int16_t x625 = -1;
int16_t x626 = -1;
int32_t x628 = -1;
int64_t x649 = -1573391252843474172LL;
volatile int64_t x650 = INT64_MIN;
int32_t x717 = -24498880;
int8_t x761 = INT8_MIN;
int16_t x804 = 1;
static uint32_t x815 = UINT32_MAX;
int16_t x905 = INT16_MAX;
volatile uint64_t x908 = UINT64_MAX;
int32_t x1028 = -1;
static int16_t x1101 = -1;
int8_t x1141 = -17;
volatile int32_t x1345 = 10;
int16_t x1417 = INT16_MIN;
uint32_t x1419 = UINT32_MAX;
int32_t x1723 = 1;
int16_t x1754 = INT16_MIN;
uint32_t x1963 = 3U;
volatile int32_t t37 = 719689925;
int16_t x2022 = -1;
uint8_t x2023 = 16U;
static int32_t t38 = -1670096;
uint32_t x2057 = UINT32_MAX;
int8_t x2108 = 2;
static volatile int32_t t40 = 3747168;
int8_t x2267 = 7;
volatile int32_t t42 = 6;
static volatile int16_t x2535 = -1;
int8_t x2536 = 1;
static int16_t x2609 = 15236;
uint8_t x2611 = 7U;
volatile uint8_t x2945 = 11U;
uint32_t x2946 = 64200779U;
volatile int16_t x3006 = INT16_MIN;
volatile int16_t x3007 = 4;
int64_t x3030 = INT64_MIN;
int64_t x3032 = 21LL;
int64_t x3047 = 11LL;
static uint64_t x3197 = 1311058044LLU;
int8_t x3200 = 28;
int8_t x3223 = 15;
int8_t x3338 = INT8_MIN;
uint8_t x3437 = 2U;
int16_t x3556 = 2;
static uint16_t x3567 = 10U;
uint8_t x3568 = 9U;
volatile uint32_t x3611 = UINT32_MAX;
static volatile uint8_t x3730 = 19U;
uint16_t x3997 = 113U;
int8_t x4325 = -1;
int32_t x4327 = -1;
uint8_t x4328 = 2U;
int64_t x4433 = 3978916056638LL;
int64_t x4435 = -1LL;
static uint8_t x4436 = 26U;
static volatile int32_t t64 = -203798;
int64_t x4457 = 118430LL;
volatile int32_t t65 = 15594;
int8_t x4553 = INT8_MIN;
int32_t t66 = 15;
static uint8_t x4619 = 5U;
int32_t t68 = 0;
volatile uint32_t x4711 = 28U;
volatile int32_t t72 = -256158;
static uint64_t x4861 = UINT64_MAX;
uint16_t x4981 = UINT16_MAX;
int16_t x4984 = 29;
volatile uint8_t x5164 = 4U;
volatile int32_t t76 = -132947722;
int16_t x5192 = -1;
volatile uint64_t x5221 = 285114908351835LLU;
int64_t x5445 = 322099665932LL;
int16_t x5458 = 2944;
volatile int8_t x5459 = 11;
uint8_t x5513 = 26U;
static int8_t x5514 = 0;
volatile int32_t x5669 = INT32_MAX;
static int16_t x5670 = 332;
volatile int32_t t84 = -1366;
volatile int16_t x5811 = 1;
int8_t x5832 = 1;
static int64_t x5850 = -1LL;
static int32_t t87 = 1;
int32_t x5879 = -1;
uint8_t x5979 = 17U;
uint8_t x6037 = 24U;
uint64_t x6038 = 454268438250LLU;
volatile int8_t x6039 = -1;
int64_t x6062 = INT64_MAX;
volatile uint32_t x6106 = 20621044U;
volatile int32_t t95 = 306880764;
static uint32_t x6451 = 10U;
int8_t x6526 = 7;
int8_t x6528 = 1;
static int8_t x6544 = 0;


void f0(void) {
	volatile int8_t x62 = INT8_MIN;
	static uint16_t x63 = 14U;
	volatile uint8_t x64 = 5U;
	int32_t t0 = -634391;

	t0 = ((x61<=x62)>>(x63+x64));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x165 = -3;
	uint16_t x166 = 574U;
	uint8_t x167 = 12U;
	int16_t x168 = -5;
	int32_t t1 = 35;

	t1 = ((x165<=x166)>>(x167+x168));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x259 = 5;
	volatile int32_t x260 = -1;
	volatile int32_t t2 = 104;

	t2 = ((x257<=x258)>>(x259+x260));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x296 = 0;
	int32_t t3 = -520158;

	t3 = ((x293<=x294)>>(x295+x296));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MAX;
	volatile uint8_t x371 = 16U;
	int32_t t4 = 60746883;

	t4 = ((x369<=x370)>>(x371+x372));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x410 = 9;
	static uint64_t x411 = 14LLU;
	static int16_t x412 = 0;

	t5 = ((x409<=x410)>>(x411+x412));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x421 = INT16_MAX;
	volatile uint8_t x422 = UINT8_MAX;
	uint32_t x423 = UINT32_MAX;
	int32_t t6 = 950785;

	t6 = ((x421<=x422)>>(x423+x424));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x457 = 7871LLU;
	int8_t x458 = INT8_MAX;
	uint16_t x459 = 14U;
	uint32_t x460 = UINT32_MAX;

	t7 = ((x457<=x458)>>(x459+x460));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x489 = INT8_MAX;
	int32_t x491 = 0;
	uint8_t x492 = 4U;
	volatile int32_t t8 = 96722103;

	t8 = ((x489<=x490)>>(x491+x492));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x505 = 239U;
	int32_t x506 = 15119;
	int16_t x507 = -1;
	int8_t x508 = 7;
	static volatile int32_t t9 = 61587;

	t9 = ((x505<=x506)>>(x507+x508));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x525 = -3213411853560576827LL;
	uint8_t x528 = 18U;
	int32_t t10 = -7594;

	t10 = ((x525<=x526)>>(x527+x528));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x545 = -1;
	static uint8_t x546 = 8U;
	uint8_t x547 = 7U;
	volatile uint64_t x548 = UINT64_MAX;

	t11 = ((x545<=x546)>>(x547+x548));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x613 = 2U;
	int16_t x615 = -1;
	uint32_t x616 = 15U;
	int32_t t12 = 4624873;

	t12 = ((x613<=x614)>>(x615+x616));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x627 = 29;
	int32_t t13 = 752484;

	t13 = ((x625<=x626)>>(x627+x628));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x651 = 1U;
	static uint16_t x652 = 3U;
	int32_t t14 = 43;

	t14 = ((x649<=x650)>>(x651+x652));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x669 = 55U;
	static int16_t x670 = INT16_MIN;
	uint8_t x671 = 1U;
	int8_t x672 = -1;
	static int32_t t15 = -1;

	t15 = ((x669<=x670)>>(x671+x672));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x718 = -39594018713844LL;
	int8_t x719 = 3;
	int16_t x720 = -1;
	volatile int32_t t16 = 0;

	t16 = ((x717<=x718)>>(x719+x720));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x762 = INT8_MIN;
	static uint8_t x763 = 6U;
	uint32_t x764 = 3U;
	static volatile int32_t t17 = -364721698;

	t17 = ((x761<=x762)>>(x763+x764));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x789 = INT16_MIN;
	uint16_t x790 = 120U;
	uint32_t x791 = UINT32_MAX;
	volatile int16_t x792 = 2;
	static volatile int32_t t18 = 580692;

	t18 = ((x789<=x790)>>(x791+x792));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x801 = 0;
	uint32_t x802 = UINT32_MAX;
	uint8_t x803 = 28U;
	volatile int32_t t19 = -3;

	t19 = ((x801<=x802)>>(x803+x804));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x813 = INT16_MAX;
	int8_t x814 = -2;
	int16_t x816 = 1;
	volatile int32_t t20 = -561412480;

	t20 = ((x813<=x814)>>(x815+x816));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x833 = -14947;
	static int32_t x834 = INT32_MAX;
	uint32_t x835 = UINT32_MAX;
	int8_t x836 = 7;
	volatile int32_t t21 = -30;

	t21 = ((x833<=x834)>>(x835+x836));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x906 = 15714U;
	static volatile int16_t x907 = 1;
	int32_t t22 = -57089392;

	t22 = ((x905<=x906)>>(x907+x908));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1025 = INT64_MIN;
	uint8_t x1026 = 55U;
	volatile uint8_t x1027 = 1U;
	int32_t t23 = -6;

	t23 = ((x1025<=x1026)>>(x1027+x1028));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1069 = INT64_MIN;
	int8_t x1070 = INT8_MAX;
	static uint32_t x1071 = 3U;
	static int8_t x1072 = 0;
	volatile int32_t t24 = -12075569;

	t24 = ((x1069<=x1070)>>(x1071+x1072));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1097 = UINT8_MAX;
	volatile int8_t x1098 = INT8_MIN;
	int32_t x1099 = 12;
	int32_t x1100 = -1;
	int32_t t25 = 946077203;

	t25 = ((x1097<=x1098)>>(x1099+x1100));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1102 = 8764;
	uint8_t x1103 = 25U;
	int16_t x1104 = -1;
	int32_t t26 = -1672126;

	t26 = ((x1101<=x1102)>>(x1103+x1104));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1142 = INT8_MAX;
	uint32_t x1143 = 15U;
	volatile int16_t x1144 = 5;
	volatile int32_t t27 = -95880;

	t27 = ((x1141<=x1142)>>(x1143+x1144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1346 = -1LL;
	uint8_t x1347 = 30U;
	volatile int16_t x1348 = -1;
	volatile int32_t t28 = 0;

	t28 = ((x1345<=x1346)>>(x1347+x1348));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1393 = 14578573U;
	int32_t x1394 = INT32_MIN;
	int32_t x1395 = 11;
	int8_t x1396 = 0;
	int32_t t29 = -2008;

	t29 = ((x1393<=x1394)>>(x1395+x1396));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1418 = 207748252LLU;
	uint16_t x1420 = 31U;
	static int32_t t30 = -6637365;

	t30 = ((x1417<=x1418)>>(x1419+x1420));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1721 = 3U;
	static uint32_t x1722 = 118734U;
	uint32_t x1724 = 0U;
	int32_t t31 = -62;

	t31 = ((x1721<=x1722)>>(x1723+x1724));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1741 = -853954935;
	uint64_t x1742 = 21482853829776LLU;
	uint16_t x1743 = 1U;
	uint8_t x1744 = 13U;
	int32_t t32 = 6;

	t32 = ((x1741<=x1742)>>(x1743+x1744));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1753 = -1;
	int8_t x1755 = -1;
	uint16_t x1756 = 7U;
	int32_t t33 = -302545114;

	t33 = ((x1753<=x1754)>>(x1755+x1756));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1821 = -1;
	static int8_t x1822 = 0;
	volatile uint64_t x1823 = UINT64_MAX;
	volatile uint16_t x1824 = 5U;
	volatile int32_t t34 = 6574;

	t34 = ((x1821<=x1822)>>(x1823+x1824));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1865 = INT64_MIN;
	int8_t x1866 = INT8_MAX;
	volatile int8_t x1867 = -1;
	uint64_t x1868 = 1LLU;
	static int32_t t35 = 3568286;

	t35 = ((x1865<=x1866)>>(x1867+x1868));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1873 = INT64_MIN;
	static uint64_t x1874 = 514049536421774LLU;
	int32_t x1875 = -1;
	volatile uint8_t x1876 = 2U;
	volatile int32_t t36 = 12241;

	t36 = ((x1873<=x1874)>>(x1875+x1876));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1961 = 7846U;
	static uint16_t x1962 = UINT16_MAX;
	uint8_t x1964 = 3U;

	t37 = ((x1961<=x1962)>>(x1963+x1964));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2021 = 3206845894553493LLU;
	uint32_t x2024 = UINT32_MAX;

	t38 = ((x2021<=x2022)>>(x2023+x2024));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2058 = -1555536061LL;
	volatile uint8_t x2059 = 26U;
	int8_t x2060 = -1;
	volatile int32_t t39 = 14831490;

	t39 = ((x2057<=x2058)>>(x2059+x2060));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2105 = INT8_MIN;
	uint16_t x2106 = 12U;
	int8_t x2107 = 18;

	t40 = ((x2105<=x2106)>>(x2107+x2108));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2245 = -36;
	volatile int8_t x2246 = INT8_MIN;
	volatile int8_t x2247 = 16;
	int32_t x2248 = -1;
	static int32_t t41 = 413;

	t41 = ((x2245<=x2246)>>(x2247+x2248));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2265 = INT32_MIN;
	static int8_t x2266 = INT8_MIN;
	volatile uint32_t x2268 = 2U;

	t42 = ((x2265<=x2266)>>(x2267+x2268));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2317 = UINT64_MAX;
	static int64_t x2318 = INT64_MIN;
	static volatile uint8_t x2319 = 6U;
	volatile int8_t x2320 = 10;
	volatile int32_t t43 = 239;

	t43 = ((x2317<=x2318)>>(x2319+x2320));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2533 = INT8_MIN;
	static int8_t x2534 = INT8_MIN;
	static int32_t t44 = 165956;

	t44 = ((x2533<=x2534)>>(x2535+x2536));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2565 = INT8_MIN;
	static volatile int16_t x2566 = 8631;
	int8_t x2567 = 5;
	static uint8_t x2568 = 26U;
	volatile int32_t t45 = 532;

	t45 = ((x2565<=x2566)>>(x2567+x2568));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2610 = -24;
	uint8_t x2612 = 7U;
	volatile int32_t t46 = 16068011;

	t46 = ((x2609<=x2610)>>(x2611+x2612));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2947 = 3U;
	int8_t x2948 = 4;
	int32_t t47 = 16719715;

	t47 = ((x2945<=x2946)>>(x2947+x2948));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3005 = 2602U;
	uint8_t x3008 = 14U;
	int32_t t48 = -4739810;

	t48 = ((x3005<=x3006)>>(x3007+x3008));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3029 = 2668;
	int8_t x3031 = -1;
	int32_t t49 = -29917;

	t49 = ((x3029<=x3030)>>(x3031+x3032));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3045 = 1U;
	uint16_t x3046 = 10238U;
	uint16_t x3048 = 8U;
	int32_t t50 = -143996561;

	t50 = ((x3045<=x3046)>>(x3047+x3048));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3198 = 1U;
	volatile int8_t x3199 = -1;
	volatile int32_t t51 = 0;

	t51 = ((x3197<=x3198)>>(x3199+x3200));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3221 = UINT64_MAX;
	uint64_t x3222 = 229699162LLU;
	int8_t x3224 = -4;
	static volatile int32_t t52 = 44568;

	t52 = ((x3221<=x3222)>>(x3223+x3224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3277 = -1LL;
	static uint8_t x3278 = 54U;
	int8_t x3279 = 4;
	volatile uint64_t x3280 = UINT64_MAX;
	static int32_t t53 = 1999;

	t53 = ((x3277<=x3278)>>(x3279+x3280));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3309 = INT32_MIN;
	int32_t x3310 = -4961;
	int16_t x3311 = 0;
	int8_t x3312 = 1;
	volatile int32_t t54 = -3453;

	t54 = ((x3309<=x3310)>>(x3311+x3312));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3337 = INT8_MAX;
	uint32_t x3339 = 3U;
	volatile int8_t x3340 = 1;
	volatile int32_t t55 = -616;

	t55 = ((x3337<=x3338)>>(x3339+x3340));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x3438 = 15913101;
	volatile int8_t x3439 = 21;
	static int16_t x3440 = -1;
	static volatile int32_t t56 = -98;

	t56 = ((x3437<=x3438)>>(x3439+x3440));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3553 = 377519LLU;
	int32_t x3554 = INT32_MAX;
	static uint64_t x3555 = UINT64_MAX;
	int32_t t57 = -4;

	t57 = ((x3553<=x3554)>>(x3555+x3556));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3565 = 3;
	int16_t x3566 = 1;
	int32_t t58 = -105151;

	t58 = ((x3565<=x3566)>>(x3567+x3568));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x3609 = -184608141;
	uint32_t x3610 = 24U;
	volatile uint8_t x3612 = 25U;
	static volatile int32_t t59 = -27;

	t59 = ((x3609<=x3610)>>(x3611+x3612));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3729 = INT8_MIN;
	int8_t x3731 = -1;
	uint16_t x3732 = 22U;
	volatile int32_t t60 = -21537052;

	t60 = ((x3729<=x3730)>>(x3731+x3732));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x3998 = -1;
	uint8_t x3999 = 6U;
	int8_t x4000 = -1;
	volatile int32_t t61 = 12079051;

	t61 = ((x3997<=x3998)>>(x3999+x4000));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4081 = INT16_MAX;
	int64_t x4082 = 2364794420170LL;
	int8_t x4083 = 0;
	int8_t x4084 = 1;
	volatile int32_t t62 = 122657;

	t62 = ((x4081<=x4082)>>(x4083+x4084));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x4326 = 33013LLU;
	int32_t t63 = 11391;

	t63 = ((x4325<=x4326)>>(x4327+x4328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4434 = -2001381655647LL;

	t64 = ((x4433<=x4434)>>(x4435+x4436));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x4458 = 130871LLU;
	uint16_t x4459 = 6U;
	volatile int32_t x4460 = -1;

	t65 = ((x4457<=x4458)>>(x4459+x4460));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x4554 = -1LL;
	static uint8_t x4555 = 5U;
	int8_t x4556 = -1;

	t66 = ((x4553<=x4554)>>(x4555+x4556));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4617 = UINT32_MAX;
	int32_t x4618 = 2;
	uint8_t x4620 = 4U;
	volatile int32_t t67 = 11;

	t67 = ((x4617<=x4618)>>(x4619+x4620));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4633 = 409LL;
	uint64_t x4634 = 182486968788LLU;
	int32_t x4635 = -1;
	uint16_t x4636 = 7U;

	t68 = ((x4633<=x4634)>>(x4635+x4636));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x4701 = 17361050U;
	int32_t x4702 = INT32_MIN;
	int8_t x4703 = -1;
	uint8_t x4704 = 2U;
	volatile int32_t t69 = 13352823;

	t69 = ((x4701<=x4702)>>(x4703+x4704));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4709 = UINT64_MAX;
	int32_t x4710 = -1;
	volatile int16_t x4712 = 1;
	int32_t t70 = 510245803;

	t70 = ((x4709<=x4710)>>(x4711+x4712));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4777 = 2960LL;
	int64_t x4778 = INT64_MIN;
	volatile int16_t x4779 = -1;
	int8_t x4780 = 2;
	volatile int32_t t71 = -573;

	t71 = ((x4777<=x4778)>>(x4779+x4780));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x4845 = 16608958U;
	int64_t x4846 = INT64_MIN;
	uint16_t x4847 = 2U;
	static uint32_t x4848 = 2U;

	t72 = ((x4845<=x4846)>>(x4847+x4848));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4862 = 1503U;
	uint8_t x4863 = 6U;
	volatile uint16_t x4864 = 1U;
	volatile int32_t t73 = 854117;

	t73 = ((x4861<=x4862)>>(x4863+x4864));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4982 = 341548498LL;
	int8_t x4983 = -20;
	int32_t t74 = -122580;

	t74 = ((x4981<=x4982)>>(x4983+x4984));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5161 = INT32_MIN;
	volatile int64_t x5162 = -722733310854497005LL;
	int16_t x5163 = 0;
	int32_t t75 = 490692670;

	t75 = ((x5161<=x5162)>>(x5163+x5164));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x5169 = 0;
	int64_t x5170 = INT64_MIN;
	int32_t x5171 = 11;
	int64_t x5172 = -1LL;

	t76 = ((x5169<=x5170)>>(x5171+x5172));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x5189 = 721U;
	int32_t x5190 = INT32_MAX;
	uint8_t x5191 = 2U;
	int32_t t77 = 4;

	t77 = ((x5189<=x5190)>>(x5191+x5192));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x5222 = INT32_MIN;
	int16_t x5223 = -1;
	uint8_t x5224 = 2U;
	volatile int32_t t78 = -13441;

	t78 = ((x5221<=x5222)>>(x5223+x5224));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5446 = 8505U;
	volatile int32_t x5447 = -1;
	uint8_t x5448 = 3U;
	volatile int32_t t79 = 1419;

	t79 = ((x5445<=x5446)>>(x5447+x5448));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5457 = -1;
	int32_t x5460 = -1;
	volatile int32_t t80 = -63;

	t80 = ((x5457<=x5458)>>(x5459+x5460));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5515 = 16U;
	static int8_t x5516 = -2;
	volatile int32_t t81 = -336454680;

	t81 = ((x5513<=x5514)>>(x5515+x5516));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5537 = 1U;
	uint8_t x5538 = 1U;
	static volatile int8_t x5539 = 1;
	static uint8_t x5540 = 7U;
	volatile int32_t t82 = 3015929;

	t82 = ((x5537<=x5538)>>(x5539+x5540));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5605 = 221730171U;
	volatile uint32_t x5606 = 1609732U;
	volatile int8_t x5607 = -1;
	uint32_t x5608 = 6U;
	volatile int32_t t83 = -54;

	t83 = ((x5605<=x5606)>>(x5607+x5608));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5671 = 1U;
	int64_t x5672 = -1LL;

	t84 = ((x5669<=x5670)>>(x5671+x5672));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5809 = -157242303;
	uint16_t x5810 = 3U;
	uint16_t x5812 = 13U;
	volatile int32_t t85 = -2635786;

	t85 = ((x5809<=x5810)>>(x5811+x5812));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5829 = -1;
	uint8_t x5830 = UINT8_MAX;
	volatile int32_t x5831 = 1;
	volatile int32_t t86 = -58;

	t86 = ((x5829<=x5830)>>(x5831+x5832));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5849 = -14;
	static int8_t x5851 = 16;
	volatile int8_t x5852 = -1;

	t87 = ((x5849<=x5850)>>(x5851+x5852));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5877 = INT32_MIN;
	volatile int16_t x5878 = 1;
	volatile uint8_t x5880 = 11U;
	volatile int32_t t88 = -57;

	t88 = ((x5877<=x5878)>>(x5879+x5880));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5881 = 0;
	static uint32_t x5882 = UINT32_MAX;
	int8_t x5883 = 0;
	uint8_t x5884 = 1U;
	static int32_t t89 = -14139;

	t89 = ((x5881<=x5882)>>(x5883+x5884));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5913 = 1098U;
	volatile int8_t x5914 = INT8_MIN;
	volatile int64_t x5915 = 5LL;
	int64_t x5916 = -1LL;
	volatile int32_t t90 = -5660479;

	t90 = ((x5913<=x5914)>>(x5915+x5916));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5977 = 16525761667810LL;
	static uint16_t x5978 = UINT16_MAX;
	int8_t x5980 = -1;
	static volatile int32_t t91 = 58923351;

	t91 = ((x5977<=x5978)>>(x5979+x5980));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6040 = 2U;
	volatile int32_t t92 = -2197;

	t92 = ((x6037<=x6038)>>(x6039+x6040));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x6061 = 20U;
	int32_t x6063 = 8;
	static uint32_t x6064 = UINT32_MAX;
	volatile int32_t t93 = 4779805;

	t93 = ((x6061<=x6062)>>(x6063+x6064));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x6105 = INT32_MIN;
	uint8_t x6107 = 20U;
	uint32_t x6108 = UINT32_MAX;
	volatile int32_t t94 = -149;

	t94 = ((x6105<=x6106)>>(x6107+x6108));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6257 = INT16_MIN;
	int8_t x6258 = INT8_MIN;
	volatile uint16_t x6259 = 5U;
	uint8_t x6260 = 4U;

	t95 = ((x6257<=x6258)>>(x6259+x6260));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6321 = -1;
	volatile int16_t x6322 = 15824;
	int16_t x6323 = 8;
	int64_t x6324 = -1LL;
	int32_t t96 = 51807;

	t96 = ((x6321<=x6322)>>(x6323+x6324));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6449 = -1LL;
	int16_t x6450 = -1;
	static uint8_t x6452 = 2U;
	int32_t t97 = 4;

	t97 = ((x6449<=x6450)>>(x6451+x6452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6525 = 1043697309LL;
	int32_t x6527 = 24;
	static volatile int32_t t98 = -3;

	t98 = ((x6525<=x6526)>>(x6527+x6528));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x6541 = INT8_MAX;
	uint16_t x6542 = 1U;
	int32_t x6543 = 1;
	volatile int32_t t99 = 8013;

	t99 = ((x6541<=x6542)>>(x6543+x6544));

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

