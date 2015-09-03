#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x74 = 2;
volatile uint32_t x121 = 25215U;
uint64_t x123 = UINT64_MAX;
int8_t x292 = INT8_MIN;
uint16_t x303 = 11005U;
int16_t x410 = 0;
static int32_t x442 = 26;
static uint64_t x443 = 1LLU;
uint32_t x444 = 1U;
volatile uint8_t x461 = 75U;
int16_t x464 = -4285;
uint32_t x720 = 1U;
uint8_t x753 = 7U;
int32_t x755 = -5;
volatile int32_t t10 = -460;
static int8_t x774 = 8;
uint64_t x776 = 1978225LLU;
int16_t x781 = INT16_MAX;
volatile uint8_t x789 = 77U;
volatile int8_t x792 = 11;
volatile int32_t t13 = -47698;
volatile uint64_t x930 = 5LLU;
volatile uint64_t t15 = 213017LLU;
int32_t t16 = 0;
int8_t x1078 = 0;
int8_t x1409 = 0;
static int16_t x1410 = 0;
int32_t x1412 = -104967722;
int8_t x1565 = INT8_MAX;
int16_t x1568 = 0;
int8_t x1570 = 5;
int8_t x1572 = INT8_MIN;
uint64_t t25 = 437968990392LLU;
int64_t x1789 = INT64_MAX;
uint16_t x1825 = UINT16_MAX;
uint8_t x1841 = UINT8_MAX;
uint8_t x1842 = 9U;
uint32_t x1843 = 81U;
int8_t x1844 = -1;
uint32_t t28 = 39260U;
uint8_t x2071 = UINT8_MAX;
volatile uint32_t t29 = 7750428U;
uint16_t x2122 = 7U;
volatile int32_t t30 = -260998;
uint64_t x2238 = 3LLU;
int8_t x2239 = 6;
volatile uint8_t x2240 = 13U;
volatile uint16_t x2317 = UINT16_MAX;
static int8_t x2521 = INT8_MAX;
uint16_t x2582 = 2U;
uint16_t x2669 = UINT16_MAX;
static volatile uint64_t t37 = 56LLU;
volatile uint32_t t39 = 3U;
uint8_t x2846 = 1U;
int32_t t40 = -1;
static int32_t x3059 = -1;
static volatile uint32_t t42 = 51359U;
static uint16_t x3221 = 16310U;
static int8_t x3280 = -1;
volatile uint32_t x3404 = UINT32_MAX;
static uint8_t x3426 = 23U;
static uint16_t x3493 = 23U;
int8_t x3495 = -1;
uint64_t x3496 = 20965971881169LLU;
volatile uint64_t t50 = 5228576897LLU;
uint8_t x3514 = 1U;
static int32_t x3591 = INT32_MIN;
volatile int32_t t52 = 393;
static uint64_t x3793 = 13143LLU;
static uint16_t x3795 = 15243U;
static int16_t x3796 = INT16_MAX;
volatile uint8_t x3866 = 10U;
uint8_t x3867 = 11U;
static uint64_t t60 = 103079017110LLU;
static int16_t x4132 = -7;
volatile int8_t x4147 = 1;
int8_t x4199 = 4;
int32_t x4200 = -1;
int8_t x4274 = 0;
int8_t x4473 = 4;
volatile uint16_t x4475 = 11U;
int64_t t69 = 132992383LL;
int64_t x4575 = INT64_MAX;
int64_t x4576 = INT64_MIN;
volatile uint64_t t72 = 770LLU;
int32_t t73 = -61370;
int16_t x4766 = 43;
uint16_t x4970 = 1U;
static uint64_t x4972 = 7792LLU;
static volatile int16_t x5231 = -1;
int64_t x5407 = INT64_MAX;
static volatile int32_t x5408 = INT32_MIN;
int32_t x5477 = INT32_MAX;
uint16_t x5479 = UINT16_MAX;
int64_t t79 = 7LL;
int64_t x5509 = 29658414372978108LL;
int32_t x5530 = 2;
static int8_t x5751 = INT8_MIN;
static uint16_t x5752 = 151U;
volatile int64_t t85 = -12873434518538LL;
static volatile uint64_t x5773 = UINT64_MAX;
uint16_t x5814 = 30U;
int8_t x5816 = INT8_MIN;
static uint32_t t87 = 216471830U;
static int16_t x5867 = INT16_MIN;
int32_t x6195 = -34457;
int8_t x6258 = 4;
int32_t x6259 = INT32_MAX;
int8_t x6270 = 0;
int8_t x6271 = INT8_MIN;
int32_t x6367 = -27;
volatile int64_t t94 = -21079LL;
int16_t x6469 = INT16_MAX;
static volatile uint8_t x6472 = UINT8_MAX;
static int16_t x6476 = -1;
int32_t x6535 = INT32_MIN;


void f0(void) {
	int32_t x21 = 1;
	uint32_t x22 = 1U;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t0 = 29938577;

	t0 = ((x21<<x22)+(x23^x24));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x73 = UINT16_MAX;
	uint32_t x75 = 1U;
	static uint16_t x76 = UINT16_MAX;
	volatile uint32_t t1 = 16312681U;

	t1 = ((x73<<x74)+(x75^x76));

	if (t1 != 327674U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x122 = 3;
	int32_t x124 = INT32_MIN;
	static volatile uint64_t t2 = 0LLU;

	t2 = ((x121<<x122)+(x123^x124));

	if (t2 != 2147685367LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x161 = UINT32_MAX;
	uint8_t x162 = 0U;
	int8_t x163 = -1;
	int16_t x164 = INT16_MIN;
	volatile uint32_t t3 = 0U;

	t3 = ((x161<<x162)+(x163^x164));

	if (t3 != 32766U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x289 = 39;
	int32_t x290 = 12;
	volatile uint32_t x291 = UINT32_MAX;
	static volatile uint32_t t4 = 2092701410U;

	t4 = ((x289<<x290)+(x291^x292));

	if (t4 != 159871U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x301 = UINT8_MAX;
	uint8_t x302 = 4U;
	uint32_t x304 = 1U;
	uint32_t t5 = 5U;

	t5 = ((x301<<x302)+(x303^x304));

	if (t5 != 15084U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x409 = 1;
	int32_t x411 = INT32_MIN;
	volatile uint32_t x412 = 536115U;
	volatile uint32_t t6 = 2214U;

	t6 = ((x409<<x410)+(x411^x412));

	if (t6 != 2148019764U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x441 = UINT32_MAX;
	uint64_t t7 = 10905LLU;

	t7 = ((x441<<x442)+(x443^x444));

	if (t7 != 4227858432LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x462 = 0U;
	volatile uint16_t x463 = 51U;
	volatile int32_t t8 = 1;

	t8 = ((x461<<x462)+(x463^x464));

	if (t8 != -4165) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x717 = INT8_MAX;
	static uint64_t x718 = 1LLU;
	int64_t x719 = -1LL;
	int64_t t9 = -26140523178969507LL;

	t9 = ((x717<<x718)+(x719^x720));

	if (t9 != 252LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x754 = 2;
	volatile uint16_t x756 = 23772U;

	t10 = ((x753<<x754)+(x755^x756));

	if (t10 != -23741) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x773 = 15U;
	int8_t x775 = -31;
	uint64_t t11 = 72408LLU;

	t11 = ((x773<<x774)+(x775^x776));

	if (t11 != 18446744073707577232LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x782 = 2U;
	int16_t x783 = INT16_MIN;
	int32_t x784 = 802;
	int32_t t12 = -12931;

	t12 = ((x781<<x782)+(x783^x784));

	if (t12 != 99102) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x790 = 1;
	int16_t x791 = -10368;

	t13 = ((x789<<x790)+(x791^x792));

	if (t13 != -10203) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x877 = 0;
	uint8_t x878 = 5U;
	int8_t x879 = -10;
	static volatile int64_t x880 = 144143295350LL;
	static volatile int64_t t14 = 233616403162LL;

	t14 = ((x877<<x878)+(x879^x880));

	if (t14 != -144143295360LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x929 = 127388673295494689LLU;
	volatile uint64_t x931 = 1192178885008355LLU;
	volatile uint16_t x932 = 6U;

	t15 = ((x929<<x930)+(x931^x932));

	if (t15 != 4077629724340838405LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x941 = 1;
	static int8_t x942 = 1;
	int8_t x943 = INT8_MIN;
	static int8_t x944 = -1;

	t16 = ((x941<<x942)+(x943^x944));

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1077 = 162471LLU;
	volatile int8_t x1079 = -1;
	uint8_t x1080 = 7U;
	uint64_t t17 = 48719104LLU;

	t17 = ((x1077<<x1078)+(x1079^x1080));

	if (t17 != 162463LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1237 = 5924LLU;
	uint16_t x1238 = 1U;
	int64_t x1239 = 72071LL;
	volatile int64_t x1240 = INT64_MAX;
	uint64_t t18 = 1534LLU;

	t18 = ((x1237<<x1238)+(x1239^x1240));

	if (t18 != 9223372036854715584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1341 = UINT64_MAX;
	volatile int32_t x1342 = 35;
	int16_t x1343 = INT16_MAX;
	int32_t x1344 = -1;
	volatile uint64_t t19 = 40LLU;

	t19 = ((x1341<<x1342)+(x1343^x1344));

	if (t19 != 18446744039349780480LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1411 = 90;
	volatile int32_t t20 = 13905;

	t20 = ((x1409<<x1410)+(x1411^x1412));

	if (t20 != -104967796) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1421 = 29526U;
	uint8_t x1422 = 2U;
	volatile int8_t x1423 = INT8_MIN;
	volatile int64_t x1424 = INT64_MAX;
	int64_t t21 = -224LL;

	t21 = ((x1421<<x1422)+(x1423^x1424));

	if (t21 != -9223372036854657577LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1566 = 12U;
	uint16_t x1567 = 229U;
	static volatile int32_t t22 = -13011;

	t22 = ((x1565<<x1566)+(x1567^x1568));

	if (t22 != 520421) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1569 = 43592715;
	uint8_t x1571 = 19U;
	int32_t t23 = -1932;

	t23 = ((x1569<<x1570)+(x1571^x1572));

	if (t23 != 1394966771) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1613 = 1022623LLU;
	volatile int16_t x1614 = 14;
	int32_t x1615 = INT32_MIN;
	int16_t x1616 = 14;
	static volatile uint64_t t24 = 23217717725932697LLU;

	t24 = ((x1613<<x1614)+(x1615^x1616));

	if (t24 != 14607171598LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1729 = 11886366773LLU;
	volatile int8_t x1730 = 1;
	int64_t x1731 = INT64_MIN;
	static int16_t x1732 = 79;

	t25 = ((x1729<<x1730)+(x1731^x1732));

	if (t25 != 9223372060627509433LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1790 = 0;
	int32_t x1791 = INT32_MAX;
	int8_t x1792 = -24;
	static int64_t t26 = 2167427709471515LL;

	t26 = ((x1789<<x1790)+(x1791^x1792));

	if (t26 != 9223372034707292182LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1826 = 14U;
	static uint32_t x1827 = 898U;
	uint16_t x1828 = 3U;
	static volatile uint32_t t27 = 2U;

	t27 = ((x1825<<x1826)+(x1827^x1828));

	if (t27 != 1073726337U) { NG(); } else { ; }
	
}

void f28(void) {


	t28 = ((x1841<<x1842)+(x1843^x1844));

	if (t28 != 130478U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x2069 = 3U;
	int8_t x2070 = 1;
	static uint32_t x2072 = 258256371U;

	t29 = ((x2069<<x2070)+(x2071^x2072));

	if (t29 != 258256146U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x2121 = 1;
	static int16_t x2123 = 1;
	int16_t x2124 = INT16_MIN;

	t30 = ((x2121<<x2122)+(x2123^x2124));

	if (t30 != -32639) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2237 = 359U;
	volatile int32_t t31 = -7374;

	t31 = ((x2237<<x2238)+(x2239^x2240));

	if (t31 != 2883) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2318 = 7U;
	volatile int32_t x2319 = 3;
	static int8_t x2320 = INT8_MIN;
	volatile int32_t t32 = -55748;

	t32 = ((x2317<<x2318)+(x2319^x2320));

	if (t32 != 8388355) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2522 = 0U;
	int64_t x2523 = 2432493LL;
	uint32_t x2524 = 3020693U;
	volatile int64_t t33 = -3665LL;

	t33 = ((x2521<<x2522)+(x2523^x2524));

	if (t33 != 723703LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2561 = 4;
	static uint16_t x2562 = 6U;
	int16_t x2563 = 0;
	uint64_t x2564 = 3997280985807494368LLU;
	uint64_t t34 = 14408LLU;

	t34 = ((x2561<<x2562)+(x2563^x2564));

	if (t34 != 3997280985807494624LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2581 = UINT8_MAX;
	uint16_t x2583 = UINT16_MAX;
	int64_t x2584 = -792LL;
	static volatile int64_t t35 = 1130LL;

	t35 = ((x2581<<x2582)+(x2583^x2584));

	if (t35 != -63725LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2670 = 1;
	int64_t x2671 = INT64_MAX;
	int64_t x2672 = INT64_MAX;
	volatile int64_t t36 = -39361682204LL;

	t36 = ((x2669<<x2670)+(x2671^x2672));

	if (t36 != 131070LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x2741 = 1322410677761LLU;
	int16_t x2742 = 0;
	int8_t x2743 = -1;
	int64_t x2744 = -3678337158387LL;

	t37 = ((x2741<<x2742)+(x2743^x2744));

	if (t37 != 5000747836147LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2753 = 2757U;
	int64_t x2754 = 15LL;
	static uint64_t x2755 = 2553980716223LLU;
	static int8_t x2756 = INT8_MAX;
	uint64_t t38 = 156446LLU;

	t38 = ((x2753<<x2754)+(x2755^x2756));

	if (t38 != 2554071057600LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2825 = UINT32_MAX;
	uint64_t x2826 = 0LLU;
	static uint32_t x2827 = 6U;
	uint16_t x2828 = 15201U;

	t39 = ((x2825<<x2826)+(x2827^x2828));

	if (t39 != 15206U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2845 = 4;
	static uint16_t x2847 = 15U;
	volatile int16_t x2848 = INT16_MIN;

	t40 = ((x2845<<x2846)+(x2847^x2848));

	if (t40 != -32745) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2941 = UINT32_MAX;
	volatile int32_t x2942 = 1;
	int32_t x2943 = 1909740;
	static volatile int64_t x2944 = INT64_MIN;
	int64_t t41 = -183471947582LL;

	t41 = ((x2941<<x2942)+(x2943^x2944));

	if (t41 != -9223372032557898774LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x3057 = 4;
	uint16_t x3058 = 14U;
	uint32_t x3060 = 36953U;

	t42 = ((x3057<<x3058)+(x3059^x3060));

	if (t42 != 28582U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3189 = 13103697U;
	uint64_t x3190 = 12LLU;
	static int16_t x3191 = INT16_MIN;
	int8_t x3192 = INT8_MIN;
	volatile uint32_t t43 = 285U;

	t43 = ((x3189<<x3190)+(x3191^x3192));

	if (t43 != 2133168000U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x3209 = 53823U;
	static int64_t x3210 = 10LL;
	int32_t x3211 = -1;
	volatile int32_t x3212 = INT32_MIN;
	uint32_t t44 = 373U;

	t44 = ((x3209<<x3210)+(x3211^x3212));

	if (t44 != 2202598399U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3222 = 1;
	volatile int64_t x3223 = 1411560894050038LL;
	uint64_t x3224 = UINT64_MAX;
	volatile uint64_t t45 = 238436LLU;

	t45 = ((x3221<<x3222)+(x3223^x3224));

	if (t45 != 18445332512815534197LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3277 = 0LL;
	static uint16_t x3278 = 7U;
	static volatile int16_t x3279 = INT16_MAX;
	volatile int64_t t46 = 102LL;

	t46 = ((x3277<<x3278)+(x3279^x3280));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x3333 = 11;
	uint16_t x3334 = 13U;
	static uint64_t x3335 = 431034984LLU;
	int32_t x3336 = 31100634;
	static volatile uint64_t t47 = 26235513LLU;

	t47 = ((x3333<<x3334)+(x3335^x3336));

	if (t47 != 409795762LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3401 = 1U;
	uint16_t x3402 = 26U;
	static uint8_t x3403 = 14U;
	static volatile uint32_t t48 = 19999179U;

	t48 = ((x3401<<x3402)+(x3403^x3404));

	if (t48 != 67108849U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3425 = 1U;
	int64_t x3427 = 23892LL;
	static int8_t x3428 = INT8_MIN;
	volatile int64_t t49 = -39465128LL;

	t49 = ((x3425<<x3426)+(x3427^x3428));

	if (t49 != 8364756LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x3494 = 4U;

	t50 = ((x3493<<x3494)+(x3495^x3496));

	if (t50 != 18446723107737670814LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3513 = INT8_MAX;
	int64_t x3515 = INT64_MAX;
	static volatile int16_t x3516 = -2116;
	static volatile int64_t t51 = -3713528LL;

	t51 = ((x3513<<x3514)+(x3515^x3516));

	if (t51 != -9223372036854773439LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3589 = 21U;
	volatile uint32_t x3590 = 23U;
	int8_t x3592 = 8;

	t52 = ((x3589<<x3590)+(x3591^x3592));

	if (t52 != -1971322872) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3605 = 365599923LLU;
	uint16_t x3606 = 55U;
	int8_t x3607 = -51;
	static volatile uint64_t x3608 = UINT64_MAX;
	uint64_t t53 = 1021557405924535571LLU;

	t53 = ((x3605<<x3606)+(x3607^x3608));

	if (t53 != 6449154666394550322LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3657 = 11U;
	uint8_t x3658 = 6U;
	uint32_t x3659 = 28408496U;
	int32_t x3660 = -495;
	uint32_t t54 = 203776039U;

	t54 = ((x3657<<x3658)+(x3659^x3660));

	if (t54 != 4266559329U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x3773 = 947U;
	static uint8_t x3774 = 4U;
	uint32_t x3775 = 388656U;
	int32_t x3776 = -20;
	uint32_t t55 = 166903595U;

	t55 = ((x3773<<x3774)+(x3775^x3776));

	if (t55 != 4294593804U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3794 = 23U;
	static volatile uint64_t t56 = 5314682304LLU;

	t56 = ((x3793<<x3794)+(x3795^x3796));

	if (t56 != 110251492468LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3865 = 7;
	int8_t x3868 = 1;
	int32_t t57 = -1122;

	t57 = ((x3865<<x3866)+(x3867^x3868));

	if (t57 != 7178) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3881 = UINT64_MAX;
	uint16_t x3882 = 1U;
	int32_t x3883 = -1;
	uint64_t x3884 = UINT64_MAX;
	volatile uint64_t t58 = 892419LLU;

	t58 = ((x3881<<x3882)+(x3883^x3884));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3885 = UINT32_MAX;
	volatile int16_t x3886 = 8;
	volatile int8_t x3887 = 0;
	int64_t x3888 = 8595718792LL;
	int64_t t59 = -14LL;

	t59 = ((x3885<<x3886)+(x3887^x3888));

	if (t59 != 12890685832LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3945 = 3107LLU;
	uint16_t x3946 = 37U;
	uint8_t x3947 = 18U;
	static int32_t x3948 = INT32_MIN;

	t60 = ((x3945<<x3946)+(x3947^x3948));

	if (t60 != 427020680953874LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4129 = 7U;
	static int16_t x4130 = 3;
	uint16_t x4131 = UINT16_MAX;
	uint32_t t61 = 13U;

	t61 = ((x4129<<x4130)+(x4131^x4132));

	if (t61 != 4294901822U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x4145 = INT8_MAX;
	uint8_t x4146 = 6U;
	static volatile int16_t x4148 = INT16_MIN;
	volatile int32_t t62 = 2974;

	t62 = ((x4145<<x4146)+(x4147^x4148));

	if (t62 != -24639) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x4173 = UINT8_MAX;
	int8_t x4174 = 0;
	uint64_t x4175 = UINT64_MAX;
	static uint64_t x4176 = UINT64_MAX;
	static volatile uint64_t t63 = 2254LLU;

	t63 = ((x4173<<x4174)+(x4175^x4176));

	if (t63 != 255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4197 = 1732615922880511169LLU;
	static uint16_t x4198 = 2U;
	static uint64_t t64 = 47504862960403LLU;

	t64 = ((x4197<<x4198)+(x4199^x4200));

	if (t64 != 6930463691522044671LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4229 = INT16_MAX;
	int8_t x4230 = 0;
	int32_t x4231 = -1;
	int32_t x4232 = 5537;
	int32_t t65 = -55488;

	t65 = ((x4229<<x4230)+(x4231^x4232));

	if (t65 != 27229) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x4273 = 0U;
	static uint32_t x4275 = UINT32_MAX;
	int8_t x4276 = INT8_MAX;
	uint32_t t66 = 200U;

	t66 = ((x4273<<x4274)+(x4275^x4276));

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4349 = 1;
	uint32_t x4350 = 10U;
	volatile int64_t x4351 = -546339409749LL;
	uint32_t x4352 = UINT32_MAX;
	volatile int64_t t67 = -335669009126966175LL;

	t67 = ((x4349<<x4350)+(x4351^x4352));

	if (t67 != -548877249708LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4393 = 20570762116090LL;
	static int8_t x4394 = 0;
	uint32_t x4395 = 25U;
	uint8_t x4396 = 2U;
	int64_t t68 = -2426242488083630158LL;

	t68 = ((x4393<<x4394)+(x4395^x4396));

	if (t68 != 20570762116117LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x4474 = 0U;
	int64_t x4476 = -84943109329502146LL;

	t69 = ((x4473<<x4474)+(x4475^x4476));

	if (t69 != -84943109329502151LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4573 = 940295637975454LLU;
	int8_t x4574 = 24;
	uint64_t t70 = 48LLU;

	t70 = ((x4573<<x4574)+(x4575^x4576));

	if (t70 != 3576839150327824383LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4613 = 7U;
	int16_t x4614 = 0;
	int8_t x4615 = INT8_MIN;
	int32_t x4616 = -1;
	int32_t t71 = -274270588;

	t71 = ((x4613<<x4614)+(x4615^x4616));

	if (t71 != 134) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4669 = 291041285822LLU;
	int32_t x4670 = 3;
	int32_t x4671 = -1;
	int64_t x4672 = INT64_MIN;

	t72 = ((x4669<<x4670)+(x4671^x4672));

	if (t72 != 9223374365185062383LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4685 = 0U;
	uint8_t x4686 = 1U;
	int32_t x4687 = -1;
	static int8_t x4688 = -33;

	t73 = ((x4685<<x4686)+(x4687^x4688));

	if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4765 = 141071583LLU;
	int16_t x4767 = INT16_MAX;
	volatile int32_t x4768 = -126803;
	static uint64_t t74 = 5574689132321LLU;

	t74 = ((x4765<<x4766)+(x4767^x4768));

	if (t74 != 4946913919596654418LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4841 = 6;
	static volatile uint16_t x4842 = 6U;
	uint64_t x4843 = UINT64_MAX;
	volatile uint8_t x4844 = 4U;
	volatile uint64_t t75 = 66015301653LLU;

	t75 = ((x4841<<x4842)+(x4843^x4844));

	if (t75 != 379LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4969 = 0U;
	int64_t x4971 = 33264779974LL;
	static uint64_t t76 = 26010392655461349LLU;

	t76 = ((x4969<<x4970)+(x4971^x4972));

	if (t76 != 33264786614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5229 = 252301887U;
	uint8_t x5230 = 19U;
	static volatile int32_t x5232 = 1;
	uint32_t t77 = 23U;

	t77 = ((x5229<<x5230)+(x5231^x5232));

	if (t77 != 2448949246U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x5405 = INT16_MAX;
	uint16_t x5406 = 6U;
	volatile int64_t t78 = -649595717LL;

	t78 = ((x5405<<x5406)+(x5407^x5408));

	if (t78 != -9223372034705195073LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5478 = 0U;
	int64_t x5480 = 1550690902792980LL;

	t79 = ((x5477<<x5478)+(x5479^x5480));

	if (t79 != 1550693050229994LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5510 = 6U;
	uint8_t x5511 = 62U;
	static uint32_t x5512 = UINT32_MAX;
	int64_t t80 = 6437760493345LL;

	t80 = ((x5509<<x5510)+(x5511^x5512));

	if (t80 != 1898138524165566145LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5529 = UINT64_MAX;
	volatile int32_t x5531 = INT32_MAX;
	int32_t x5532 = -1;
	uint64_t t81 = 251064LLU;

	t81 = ((x5529<<x5530)+(x5531^x5532));

	if (t81 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5677 = UINT32_MAX;
	int64_t x5678 = 1LL;
	volatile int16_t x5679 = 11334;
	int16_t x5680 = INT16_MIN;
	static volatile uint32_t t82 = 4078895U;

	t82 = ((x5677<<x5678)+(x5679^x5680));

	if (t82 != 4294945860U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x5721 = 217466235LL;
	static uint16_t x5722 = 8U;
	static volatile int8_t x5723 = INT8_MAX;
	int8_t x5724 = -2;
	static volatile int64_t t83 = 6274850959LL;

	t83 = ((x5721<<x5722)+(x5723^x5724));

	if (t83 != 55671356033LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5725 = 228U;
	int8_t x5726 = 1;
	int8_t x5727 = -46;
	uint16_t x5728 = UINT16_MAX;
	static volatile uint32_t t84 = 1U;

	t84 = ((x5725<<x5726)+(x5727^x5728));

	if (t84 != 4294902261U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x5749 = 349025001216977LL;
	uint8_t x5750 = 6U;

	t85 = ((x5749<<x5750)+(x5751^x5752));

	if (t85 != 22337600077886295LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5774 = 0;
	int16_t x5775 = INT16_MIN;
	int8_t x5776 = 17;
	volatile uint64_t t86 = 3409LLU;

	t86 = ((x5773<<x5774)+(x5775^x5776));

	if (t86 != 18446744073709518864LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5813 = UINT32_MAX;
	uint8_t x5815 = UINT8_MAX;

	t87 = ((x5813<<x5814)+(x5815^x5816));

	if (t87 != 3221225343U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5865 = 13842040U;
	uint8_t x5866 = 5U;
	static int32_t x5868 = 178362;
	volatile uint32_t t88 = 9866973U;

	t88 = ((x5865<<x5866)+(x5867^x5868));

	if (t88 != 442763194U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x6089 = 27134U;
	volatile uint8_t x6090 = 11U;
	int32_t x6091 = -345918;
	int64_t x6092 = INT64_MAX;
	int64_t t89 = 13716676039232574LL;

	t89 = ((x6089<<x6090)+(x6091^x6092));

	if (t89 != -9223372036798859459LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6121 = 0LLU;
	volatile uint32_t x6122 = 1U;
	static int16_t x6123 = INT16_MIN;
	uint16_t x6124 = 599U;
	uint64_t t90 = 400209LLU;

	t90 = ((x6121<<x6122)+(x6123^x6124));

	if (t90 != 18446744073709519447LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x6193 = 1361269110394LL;
	static volatile uint16_t x6194 = 7U;
	int64_t x6196 = -726890320922755840LL;
	volatile int64_t t91 = -14998602932087LL;

	t91 = ((x6193<<x6194)+(x6195^x6196));

	if (t91 != 727064563368919399LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6257 = 7;
	int32_t x6260 = INT32_MIN;
	int32_t t92 = 4046779;

	t92 = ((x6257<<x6258)+(x6259^x6260));

	if (t92 != 111) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6269 = 470307715U;
	uint32_t x6272 = UINT32_MAX;
	volatile uint32_t t93 = 1579558U;

	t93 = ((x6269<<x6270)+(x6271^x6272));

	if (t93 != 470307842U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6365 = 3U;
	uint8_t x6366 = 0U;
	int64_t x6368 = INT64_MIN;

	t94 = ((x6365<<x6366)+(x6367^x6368));

	if (t94 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x6465 = 4315151835269LLU;
	volatile int8_t x6466 = 0;
	static uint32_t x6467 = 41U;
	int32_t x6468 = -47;
	volatile uint64_t t95 = 1267046LLU;

	t95 = ((x6465<<x6466)+(x6467^x6468));

	if (t95 != 4319446802557LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6470 = 10;
	static volatile int32_t x6471 = -1;
	volatile int32_t t96 = -465041802;

	t96 = ((x6469<<x6470)+(x6471^x6472));

	if (t96 != 33553152) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6473 = 284725;
	uint64_t x6474 = 7LLU;
	uint16_t x6475 = 3U;
	static int32_t t97 = -3;

	t97 = ((x6473<<x6474)+(x6475^x6476));

	if (t97 != 36444796) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x6533 = 0;
	int64_t x6534 = 21LL;
	static int32_t x6536 = INT32_MIN;
	int32_t t98 = 7802475;

	t98 = ((x6533<<x6534)+(x6535^x6536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x6557 = UINT64_MAX;
	volatile int16_t x6558 = 3;
	int32_t x6559 = INT32_MAX;
	uint64_t x6560 = 533737541907LLU;
	uint64_t t99 = 11493367787LLU;

	t99 = ((x6557<<x6558)+(x6559^x6560));

	if (t99 != 533561831140LLU) { NG(); } else { ; }
	
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

