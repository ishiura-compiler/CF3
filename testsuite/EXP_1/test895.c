#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x115 = INT8_MAX;
int64_t x116 = 61756581861386988LL;
uint64_t x122 = 11LLU;
int32_t t2 = 3;
static uint64_t x165 = 0LLU;
static uint64_t t3 = 0LLU;
volatile uint64_t t6 = 2051841117068870LLU;
uint16_t x444 = 5U;
volatile int32_t t8 = 53933;
volatile int64_t t10 = -3343883307248LL;
uint32_t x729 = 14867U;
uint16_t x731 = UINT16_MAX;
uint32_t t11 = 7289254U;
uint32_t x815 = 41608U;
uint16_t x978 = 15U;
volatile int64_t t17 = 1484229402837879255LL;
uint8_t x1279 = 44U;
static int32_t x1360 = INT32_MAX;
uint32_t x1377 = UINT32_MAX;
volatile uint32_t x1379 = UINT32_MAX;
static volatile int16_t x1386 = 14;
uint16_t x1388 = 173U;
int64_t x1547 = -97LL;
uint64_t x1603 = 2756LLU;
volatile uint16_t x1670 = 1U;
int16_t x1671 = INT16_MAX;
int16_t x1672 = 115;
uint8_t x1749 = UINT8_MAX;
int32_t x1751 = INT32_MIN;
uint8_t x1798 = 4U;
volatile int8_t x1800 = -1;
static volatile int32_t t28 = -104;
uint64_t x1931 = 468108886526703LLU;
volatile uint64_t t30 = 1188560490734357LLU;
uint16_t x1993 = 1U;
static uint8_t x1994 = 3U;
static uint8_t x2002 = 14U;
uint64_t t35 = 732766120062500338LLU;
uint64_t x2385 = 9LLU;
volatile int8_t x2388 = INT8_MAX;
uint32_t x2404 = 1451590U;
volatile int16_t x2414 = 0;
uint8_t x2552 = 2U;
static uint8_t x2567 = UINT8_MAX;
volatile int32_t t41 = 54;
static int16_t x2591 = -1;
uint32_t t42 = 127597U;
uint32_t x2597 = 159458U;
static volatile uint8_t x2702 = 6U;
uint32_t x2706 = 0U;
static uint32_t x2731 = UINT32_MAX;
volatile int8_t x2735 = INT8_MAX;
int64_t t48 = -911LL;
volatile uint32_t x2841 = UINT32_MAX;
int32_t x2843 = INT32_MAX;
static volatile int32_t x2875 = -1;
volatile int64_t t51 = 22911LL;
uint64_t x3003 = 6877452065LLU;
int32_t x3020 = INT32_MIN;
int8_t x3217 = 17;
static volatile int8_t x3319 = 1;
static int64_t t64 = -3040656LL;
static int16_t x3361 = INT16_MAX;
int8_t x3466 = 1;
static int16_t x3499 = INT16_MIN;
uint16_t x3726 = 16U;
int8_t x3770 = 1;
uint8_t x3772 = UINT8_MAX;
volatile int32_t t71 = 112314;
int8_t x3840 = 0;
uint32_t x3889 = 43U;
int64_t t75 = 2678504189168LL;
int8_t x3931 = INT8_MAX;
int64_t x3960 = INT64_MIN;
static int32_t x4082 = 9;
int8_t x4083 = INT8_MIN;
static volatile uint64_t t78 = 1854455843495LLU;
volatile uint64_t x4107 = 10977612483527556LLU;
int32_t x4137 = 1;
int64_t t80 = -227746314LL;
int64_t x4391 = 49124312343774LL;
int64_t t82 = 1LL;
int16_t x4439 = -193;
static uint64_t x4588 = 8214288882926941LLU;
uint16_t x4593 = UINT16_MAX;
volatile uint64_t t85 = 14105464LLU;
int8_t x4636 = INT8_MIN;
uint8_t x4765 = UINT8_MAX;
int64_t x4767 = 7194965196804LL;
int16_t x4819 = INT16_MAX;
int32_t x4820 = INT32_MIN;
int8_t x4991 = -1;
int32_t x4992 = INT32_MIN;
uint32_t x5048 = UINT32_MAX;
uint8_t x5245 = 1U;
int32_t t93 = 0;
uint32_t x5297 = UINT32_MAX;
uint32_t t95 = 1039271U;
uint64_t x5353 = 8311352722941927LLU;
volatile uint64_t t97 = 418LLU;
uint16_t x5401 = 30U;


void f0(void) {
	uint16_t x1 = 113U;
	volatile uint8_t x2 = 4U;
	static int32_t x3 = INT32_MIN;
	volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 226754;

	t0 = (((x1<<x2)/x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x113 = 1;
	uint8_t x114 = 1U;
	volatile int64_t t1 = 0LL;

	t1 = (((x113<<x114)/x115)&x116);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x121 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = -1;

	t2 = (((x121<<x122)/x123)&x124);

	if (t2 != -4095) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x166 = 6U;
	int64_t x167 = -1LL;
	int64_t x168 = 19LL;

	t3 = (((x165<<x166)/x167)&x168);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint32_t x178 = 20U;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 16U;
	volatile int64_t t4 = 911617297LL;

	t4 = (((x177<<x178)/x179)&x180);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x269 = 705511U;
	static volatile int8_t x270 = 14;
	uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 56U;
	uint32_t t5 = 289489U;

	t5 = (((x269<<x270)/x271)&x272);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x393 = UINT64_MAX;
	uint8_t x394 = 53U;
	static int64_t x395 = INT64_MIN;
	uint64_t x396 = 3452LLU;

	t6 = (((x393<<x394)/x395)&x396);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x441 = 0U;
	volatile uint16_t x442 = 18U;
	volatile uint8_t x443 = 54U;
	volatile int32_t t7 = 0;

	t7 = (((x441<<x442)/x443)&x444);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x461 = UINT16_MAX;
	uint8_t x462 = 6U;
	volatile int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;

	t8 = (((x461<<x462)/x463)&x464);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x549 = UINT16_MAX;
	volatile uint8_t x550 = 2U;
	volatile int8_t x551 = INT8_MIN;
	static int16_t x552 = -13;
	volatile int32_t t9 = 240697183;

	t9 = (((x549<<x550)/x551)&x552);

	if (t9 != -2047) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x601 = 2;
	uint32_t x602 = 0U;
	uint8_t x603 = 97U;
	int64_t x604 = INT64_MAX;

	t10 = (((x601<<x602)/x603)&x604);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x730 = 3LL;
	uint32_t x732 = 37707U;

	t11 = (((x729<<x730)/x731)&x732);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x785 = UINT32_MAX;
	int16_t x786 = 22;
	uint16_t x787 = 8833U;
	static volatile int64_t x788 = -1LL;
	static volatile int64_t t12 = 475705068928LL;

	t12 = (((x785<<x786)/x787)&x788);

	if (t12 != 485766LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x813 = UINT64_MAX;
	static int8_t x814 = 1;
	int64_t x816 = 15LL;
	volatile uint64_t t13 = 0LLU;

	t13 = (((x813<<x814)/x815)&x816);

	if (t13 != 13LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x973 = 21348060612LLU;
	uint8_t x974 = 2U;
	uint16_t x975 = 708U;
	uint64_t x976 = 3002837527788067LLU;
	uint64_t t14 = 197662033723211066LLU;

	t14 = (((x973<<x974)/x975)&x976);

	if (t14 != 2120195LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x977 = 32;
	static uint64_t x979 = UINT64_MAX;
	static volatile int16_t x980 = INT16_MAX;
	volatile uint64_t t15 = 19237252698LLU;

	t15 = (((x977<<x978)/x979)&x980);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1093 = 0;
	uint64_t x1094 = 3LLU;
	static uint8_t x1095 = 3U;
	int8_t x1096 = INT8_MAX;
	static int32_t t16 = 375591;

	t16 = (((x1093<<x1094)/x1095)&x1096);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1221 = INT8_MAX;
	uint32_t x1222 = 14U;
	static int64_t x1223 = INT64_MIN;
	int32_t x1224 = INT32_MAX;

	t17 = (((x1221<<x1222)/x1223)&x1224);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1277 = 51U;
	volatile uint8_t x1278 = 14U;
	int64_t x1280 = 1LL;
	int64_t t18 = -387154126498554679LL;

	t18 = (((x1277<<x1278)/x1279)&x1280);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1357 = 3475642097LLU;
	uint8_t x1358 = 9U;
	int8_t x1359 = INT8_MIN;
	uint64_t t19 = 1526112618546019LLU;

	t19 = (((x1357<<x1358)/x1359)&x1360);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1378 = 1;
	int8_t x1380 = -1;
	uint32_t t20 = 42947U;

	t20 = (((x1377<<x1378)/x1379)&x1380);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1385 = 7;
	int16_t x1387 = INT16_MAX;
	volatile int32_t t21 = -26354;

	t21 = (((x1385<<x1386)/x1387)&x1388);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1545 = 3U;
	int8_t x1546 = 11;
	int32_t x1548 = -1;
	int64_t t22 = -47928LL;

	t22 = (((x1545<<x1546)/x1547)&x1548);

	if (t22 != -63LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1597 = 238769974U;
	uint8_t x1598 = 3U;
	int16_t x1599 = 2;
	uint64_t x1600 = UINT64_MAX;
	uint64_t t23 = 19298938LLU;

	t23 = (((x1597<<x1598)/x1599)&x1600);

	if (t23 != 955079896LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1601 = INT16_MAX;
	uint16_t x1602 = 8U;
	int8_t x1604 = -1;
	uint64_t t24 = 87609424748263LLU;

	t24 = (((x1601<<x1602)/x1603)&x1604);

	if (t24 != 3043LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1625 = 358U;
	uint16_t x1626 = 1U;
	int32_t x1627 = INT32_MIN;
	int32_t x1628 = -1;
	volatile uint32_t t25 = 11927725U;

	t25 = (((x1625<<x1626)/x1627)&x1628);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1669 = 939112250LL;
	int64_t t26 = 7396884139242LL;

	t26 = (((x1669<<x1670)/x1671)&x1672);

	if (t26 != 96LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1750 = 1U;
	int64_t x1752 = 2079014929184LL;
	static volatile int64_t t27 = 198140337724093676LL;

	t27 = (((x1749<<x1750)/x1751)&x1752);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1797 = 0U;
	int8_t x1799 = -1;

	t28 = (((x1797<<x1798)/x1799)&x1800);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1881 = INT8_MAX;
	int32_t x1882 = 0;
	static uint16_t x1883 = 7U;
	int16_t x1884 = -64;
	volatile int32_t t29 = -32167409;

	t29 = (((x1881<<x1882)/x1883)&x1884);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1929 = 5942480U;
	int16_t x1930 = 0;
	uint32_t x1932 = 34388007U;

	t30 = (((x1929<<x1930)/x1931)&x1932);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1995 = INT64_MAX;
	uint16_t x1996 = 9U;
	int64_t t31 = -7LL;

	t31 = (((x1993<<x1994)/x1995)&x1996);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x2001 = 379;
	uint8_t x2003 = 30U;
	uint64_t x2004 = 4097313552743891LLU;
	volatile uint64_t t32 = 15525812979LLU;

	t32 = (((x2001<<x2002)/x2003)&x2004);

	if (t32 != 10368LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2029 = UINT16_MAX;
	int16_t x2030 = 3;
	volatile uint8_t x2031 = 59U;
	volatile int8_t x2032 = INT8_MAX;
	volatile int32_t t33 = 89;

	t33 = (((x2029<<x2030)/x2031)&x2032);

	if (t33 != 54) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2305 = 1124;
	int16_t x2306 = 0;
	int8_t x2307 = 14;
	int16_t x2308 = 96;
	volatile int32_t t34 = -13;

	t34 = (((x2305<<x2306)/x2307)&x2308);

	if (t34 != 64) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2373 = UINT64_MAX;
	uint16_t x2374 = 0U;
	uint32_t x2375 = 94U;
	int8_t x2376 = INT8_MIN;

	t35 = (((x2373<<x2374)/x2375)&x2376);

	if (t35 != 196241958230952576LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2386 = 1;
	int64_t x2387 = INT64_MIN;
	uint64_t t36 = 34726783LLU;

	t36 = (((x2385<<x2386)/x2387)&x2388);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2401 = INT8_MAX;
	uint8_t x2402 = 3U;
	uint64_t x2403 = 469116LLU;
	uint64_t t37 = 0LLU;

	t37 = (((x2401<<x2402)/x2403)&x2404);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2413 = INT64_MAX;
	int8_t x2415 = INT8_MIN;
	volatile int64_t x2416 = INT64_MIN;
	static volatile int64_t t38 = INT64_MIN;

	t38 = (((x2413<<x2414)/x2415)&x2416);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2489 = 43636707191467LL;
	uint8_t x2490 = 0U;
	int8_t x2491 = INT8_MIN;
	uint64_t x2492 = 39603340730LLU;
	uint64_t t39 = 297133758690289098LLU;

	t39 = (((x2489<<x2490)/x2491)&x2492);

	if (t39 != 537067818LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2549 = INT8_MAX;
	uint16_t x2550 = 1U;
	int64_t x2551 = INT64_MIN;
	volatile int64_t t40 = 312LL;

	t40 = (((x2549<<x2550)/x2551)&x2552);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2565 = 126;
	int8_t x2566 = 3;
	int32_t x2568 = INT32_MIN;

	t41 = (((x2565<<x2566)/x2567)&x2568);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2589 = 5905U;
	int16_t x2590 = 0;
	int32_t x2592 = 61578680;

	t42 = (((x2589<<x2590)/x2591)&x2592);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x2598 = 0;
	uint8_t x2599 = 3U;
	int16_t x2600 = -1;
	uint32_t t43 = 112022U;

	t43 = (((x2597<<x2598)/x2599)&x2600);

	if (t43 != 53152U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2701 = INT16_MAX;
	volatile int16_t x2703 = INT16_MAX;
	int64_t x2704 = INT64_MIN;
	volatile int64_t t44 = 3029932LL;

	t44 = (((x2701<<x2702)/x2703)&x2704);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2705 = UINT32_MAX;
	volatile uint64_t x2707 = 839208255657988LLU;
	int16_t x2708 = INT16_MIN;
	volatile uint64_t t45 = 3092547811715706LLU;

	t45 = (((x2705<<x2706)/x2707)&x2708);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2729 = INT16_MAX;
	uint32_t x2730 = 4U;
	uint8_t x2732 = UINT8_MAX;
	uint32_t t46 = 1571U;

	t46 = (((x2729<<x2730)/x2731)&x2732);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2733 = 62U;
	uint32_t x2734 = 2U;
	int64_t x2736 = INT64_MAX;
	static volatile int64_t t47 = -577LL;

	t47 = (((x2733<<x2734)/x2735)&x2736);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2797 = 0;
	uint32_t x2798 = 24U;
	uint8_t x2799 = 33U;
	int64_t x2800 = 2724763538146082LL;

	t48 = (((x2797<<x2798)/x2799)&x2800);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2842 = 0;
	static uint8_t x2844 = 0U;
	volatile uint32_t t49 = 2488266U;

	t49 = (((x2841<<x2842)/x2843)&x2844);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2873 = UINT8_MAX;
	static uint8_t x2874 = 14U;
	int16_t x2876 = INT16_MAX;
	static int32_t t50 = 1;

	t50 = (((x2873<<x2874)/x2875)&x2876);

	if (t50 != 16384) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2945 = UINT16_MAX;
	int32_t x2946 = 0;
	static int64_t x2947 = INT64_MIN;
	static int64_t x2948 = INT64_MIN;

	t51 = (((x2945<<x2946)/x2947)&x2948);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2965 = INT8_MAX;
	static uint8_t x2966 = 5U;
	volatile uint8_t x2967 = UINT8_MAX;
	uint64_t x2968 = UINT64_MAX;
	uint64_t t52 = 14LLU;

	t52 = (((x2965<<x2966)/x2967)&x2968);

	if (t52 != 15LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x3001 = UINT32_MAX;
	uint8_t x3002 = 2U;
	uint32_t x3004 = 706762290U;
	uint64_t t53 = 75LLU;

	t53 = (((x3001<<x3002)/x3003)&x3004);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x3017 = 573U;
	int8_t x3018 = 2;
	uint16_t x3019 = 11109U;
	int32_t t54 = -24;

	t54 = (((x3017<<x3018)/x3019)&x3020);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x3097 = 250394;
	uint8_t x3098 = 1U;
	int32_t x3099 = -1;
	volatile int8_t x3100 = -1;
	int32_t t55 = -559096431;

	t55 = (((x3097<<x3098)/x3099)&x3100);

	if (t55 != -500788) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3101 = 1032U;
	int8_t x3102 = 4;
	static volatile int32_t x3103 = -1;
	int64_t x3104 = 341482LL;
	volatile int64_t t56 = 1472473242144845LL;

	t56 = (((x3101<<x3102)/x3103)&x3104);

	if (t56 != 341376LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3121 = 2U;
	int8_t x3122 = 5;
	int64_t x3123 = INT64_MIN;
	volatile uint16_t x3124 = 918U;
	volatile int64_t t57 = -85428102814941446LL;

	t57 = (((x3121<<x3122)/x3123)&x3124);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3173 = 71LL;
	uint8_t x3174 = 1U;
	uint16_t x3175 = UINT16_MAX;
	static uint64_t x3176 = 64226LLU;
	volatile uint64_t t58 = 100514006400091LLU;

	t58 = (((x3173<<x3174)/x3175)&x3176);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3209 = INT8_MAX;
	uint16_t x3210 = 14U;
	uint64_t x3211 = 64941822076211LLU;
	volatile int8_t x3212 = INT8_MAX;
	volatile uint64_t t59 = 1028923LLU;

	t59 = (((x3209<<x3210)/x3211)&x3212);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3218 = 13;
	static int8_t x3219 = INT8_MIN;
	int16_t x3220 = INT16_MAX;
	int32_t t60 = 1002290334;

	t60 = (((x3217<<x3218)/x3219)&x3220);

	if (t60 != 31680) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3229 = INT16_MAX;
	int32_t x3230 = 2;
	uint64_t x3231 = 8LLU;
	uint32_t x3232 = UINT32_MAX;
	uint64_t t61 = 303367368275LLU;

	t61 = (((x3229<<x3230)/x3231)&x3232);

	if (t61 != 16383LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3241 = 294521;
	uint8_t x3242 = 2U;
	static int16_t x3243 = -50;
	uint32_t x3244 = 28U;
	uint32_t t62 = 3468U;

	t62 = (((x3241<<x3242)/x3243)&x3244);

	if (t62 != 20U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x3317 = 2U;
	int8_t x3318 = 1;
	uint8_t x3320 = 0U;
	uint32_t t63 = 7224497U;

	t63 = (((x3317<<x3318)/x3319)&x3320);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x3337 = UINT16_MAX;
	uint32_t x3338 = 2U;
	int64_t x3339 = INT64_MIN;
	uint16_t x3340 = UINT16_MAX;

	t64 = (((x3337<<x3338)/x3339)&x3340);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3362 = 6U;
	uint8_t x3363 = 20U;
	int16_t x3364 = -1;
	volatile int32_t t65 = 16356;

	t65 = (((x3361<<x3362)/x3363)&x3364);

	if (t65 != 104854) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3465 = 21;
	uint64_t x3467 = UINT64_MAX;
	int32_t x3468 = INT32_MAX;
	volatile uint64_t t66 = 1309883053244649447LLU;

	t66 = (((x3465<<x3466)/x3467)&x3468);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3497 = 108U;
	int8_t x3498 = 1;
	uint64_t x3500 = 13315492408619659LLU;
	uint64_t t67 = 213LLU;

	t67 = (((x3497<<x3498)/x3499)&x3500);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3601 = UINT16_MAX;
	uint16_t x3602 = 1U;
	int8_t x3603 = -51;
	static int16_t x3604 = -2;
	int32_t t68 = 13;

	t68 = (((x3601<<x3602)/x3603)&x3604);

	if (t68 != -2570) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3645 = 28211822051996323LLU;
	uint8_t x3646 = 14U;
	int8_t x3647 = INT8_MIN;
	volatile int8_t x3648 = INT8_MAX;
	uint64_t t69 = 8LLU;

	t69 = (((x3645<<x3646)/x3647)&x3648);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x3725 = INT16_MAX;
	uint16_t x3727 = UINT16_MAX;
	int16_t x3728 = -1;
	int32_t t70 = 29668;

	t70 = (((x3725<<x3726)/x3727)&x3728);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3769 = UINT8_MAX;
	static int32_t x3771 = INT32_MIN;

	t71 = (((x3769<<x3770)/x3771)&x3772);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x3825 = UINT64_MAX;
	int8_t x3826 = 1;
	int8_t x3827 = -58;
	int64_t x3828 = INT64_MAX;
	volatile uint64_t t72 = 101632382LLU;

	t72 = (((x3825<<x3826)/x3827)&x3828);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3837 = 0;
	static uint32_t x3838 = 12U;
	volatile uint8_t x3839 = 23U;
	int32_t t73 = 112490;

	t73 = (((x3837<<x3838)/x3839)&x3840);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3890 = 5U;
	static int8_t x3891 = INT8_MAX;
	int64_t x3892 = INT64_MIN;
	volatile int64_t t74 = 5716978829LL;

	t74 = (((x3889<<x3890)/x3891)&x3892);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3897 = 1LL;
	uint32_t x3898 = 53U;
	uint16_t x3899 = 10433U;
	int16_t x3900 = -1;

	t75 = (((x3897<<x3898)/x3899)&x3900);

	if (t75 != 863337415387LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x3929 = 1;
	uint8_t x3930 = 0U;
	volatile int64_t x3932 = INT64_MIN;
	int64_t t76 = 272095512589LL;

	t76 = (((x3929<<x3930)/x3931)&x3932);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3957 = 1519U;
	uint8_t x3958 = 4U;
	uint16_t x3959 = UINT16_MAX;
	int64_t t77 = 0LL;

	t77 = (((x3957<<x3958)/x3959)&x3960);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x4081 = 711273660LLU;
	int16_t x4084 = INT16_MIN;

	t78 = (((x4081<<x4082)/x4083)&x4084);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4105 = 9U;
	uint8_t x4106 = 7U;
	uint32_t x4108 = UINT32_MAX;
	static volatile uint64_t t79 = 1692069827579899131LLU;

	t79 = (((x4105<<x4106)/x4107)&x4108);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4138 = 4U;
	static int64_t x4139 = -6468LL;
	int16_t x4140 = INT16_MIN;

	t80 = (((x4137<<x4138)/x4139)&x4140);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4253 = UINT8_MAX;
	int16_t x4254 = 3;
	uint32_t x4255 = 451534U;
	volatile int32_t x4256 = INT32_MAX;
	volatile uint32_t t81 = 26063U;

	t81 = (((x4253<<x4254)/x4255)&x4256);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4389 = 9U;
	uint8_t x4390 = 13U;
	int64_t x4392 = -31201125LL;

	t82 = (((x4389<<x4390)/x4391)&x4392);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4437 = UINT16_MAX;
	int64_t x4438 = 1LL;
	volatile uint16_t x4440 = 2502U;
	volatile int32_t t83 = -19;

	t83 = (((x4437<<x4438)/x4439)&x4440);

	if (t83 != 2368) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x4585 = UINT32_MAX;
	uint16_t x4586 = 2U;
	static volatile int32_t x4587 = INT32_MAX;
	volatile uint64_t t84 = 6LLU;

	t84 = (((x4585<<x4586)/x4587)&x4588);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x4594 = 0U;
	static volatile int64_t x4595 = -1LL;
	uint64_t x4596 = 6907739LLU;

	t85 = (((x4593<<x4594)/x4595)&x4596);

	if (t85 != 6881281LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4633 = 1;
	volatile uint32_t x4634 = 24U;
	uint16_t x4635 = 1U;
	int32_t t86 = 25483;

	t86 = (((x4633<<x4634)/x4635)&x4636);

	if (t86 != 16777216) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4766 = 1;
	int64_t x4768 = INT64_MIN;
	int64_t t87 = 225969346LL;

	t87 = (((x4765<<x4766)/x4767)&x4768);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x4817 = INT16_MAX;
	int8_t x4818 = 0;
	int32_t t88 = 512640;

	t88 = (((x4817<<x4818)/x4819)&x4820);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4989 = 40U;
	uint8_t x4990 = 5U;
	volatile int32_t t89 = INT32_MIN;

	t89 = (((x4989<<x4990)/x4991)&x4992);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5021 = 4423;
	uint16_t x5022 = 4U;
	static int8_t x5023 = -1;
	static uint16_t x5024 = 1682U;
	int32_t t90 = -31;

	t90 = (((x5021<<x5022)/x5023)&x5024);

	if (t90 != 656) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5045 = 5141473;
	static volatile uint8_t x5046 = 1U;
	int8_t x5047 = INT8_MIN;
	uint32_t t91 = 8103U;

	t91 = (((x5045<<x5046)/x5047)&x5048);

	if (t91 != 4294886961U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5097 = UINT32_MAX;
	uint8_t x5098 = 0U;
	int32_t x5099 = INT32_MIN;
	static volatile uint32_t x5100 = 2710U;
	volatile uint32_t t92 = 185614235U;

	t92 = (((x5097<<x5098)/x5099)&x5100);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5246 = 26U;
	static uint16_t x5247 = UINT16_MAX;
	uint8_t x5248 = 0U;

	t93 = (((x5245<<x5246)/x5247)&x5248);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5281 = 4094046U;
	volatile int8_t x5282 = 28;
	int32_t x5283 = 45514309;
	int64_t x5284 = -7588LL;
	static volatile int64_t t94 = 12LL;

	t94 = (((x5281<<x5282)/x5283)&x5284);

	if (t94 != 80LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5298 = 15U;
	uint8_t x5299 = 15U;
	static uint8_t x5300 = 4U;

	t95 = (((x5297<<x5298)/x5299)&x5300);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5337 = 0;
	int8_t x5338 = 8;
	int8_t x5339 = INT8_MAX;
	volatile uint16_t x5340 = 6881U;
	volatile int32_t t96 = 836517;

	t96 = (((x5337<<x5338)/x5339)&x5340);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5354 = 5U;
	int8_t x5355 = -1;
	volatile int32_t x5356 = -1;

	t97 = (((x5353<<x5354)/x5355)&x5356);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5402 = 0;
	uint64_t x5403 = 574037152LLU;
	int16_t x5404 = -312;
	volatile uint64_t t98 = 525256753LLU;

	t98 = (((x5401<<x5402)/x5403)&x5404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5521 = 5LLU;
	volatile uint8_t x5522 = 25U;
	volatile int64_t x5523 = -5722998996LL;
	uint32_t x5524 = 155635108U;
	uint64_t t99 = 3847750211153LLU;

	t99 = (((x5521<<x5522)/x5523)&x5524);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

