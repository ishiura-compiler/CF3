#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x70 = 26U;
int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MAX;
uint32_t x169 = 4U;
int8_t x171 = 1;
volatile uint8_t x178 = 4U;
int8_t x179 = 5;
int8_t x236 = 11;
int16_t x286 = INT16_MAX;
uint64_t t5 = 2033658645573LLU;
volatile uint16_t x485 = 285U;
uint16_t x629 = 30221U;
uint32_t x630 = 1U;
static int32_t x854 = 6351865;
static uint8_t x1015 = 3U;
int8_t x1016 = INT8_MAX;
int16_t x1087 = 5;
int32_t x1352 = INT32_MIN;
int32_t x1396 = INT32_MIN;
int32_t t19 = -313348045;
static int16_t x1641 = 1;
int8_t x1643 = 1;
static int64_t x1732 = -1LL;
volatile int64_t x1832 = INT64_MAX;
int8_t x2129 = INT8_MIN;
volatile uint8_t x2259 = 2U;
int32_t t30 = -43;
static uint64_t x2510 = UINT64_MAX;
int32_t x2561 = INT32_MIN;
static uint16_t x2562 = UINT16_MAX;
int64_t t33 = 89853043380023LL;
volatile int64_t x2609 = -1LL;
int16_t x2610 = INT16_MAX;
int64_t t34 = -18LL;
int8_t x2670 = 18;
volatile int16_t x2740 = -9612;
int32_t x2778 = 2;
static volatile uint32_t t42 = 15400U;
int16_t x2859 = 4;
volatile int64_t t43 = -3801409516163099LL;
uint8_t x2935 = 23U;
int64_t x2936 = -1LL;
volatile uint64_t t44 = 2736726985LLU;
volatile uint64_t t45 = 45930601145LLU;
uint16_t x3116 = 24U;
int32_t t47 = 14022807;
uint32_t x3217 = 2582U;
volatile int32_t t49 = 19592104;
uint32_t x3646 = 3225242U;
volatile int64_t x3897 = -262825907LL;
volatile int64_t t52 = 154147LL;
static volatile int16_t x3951 = 1;
volatile int16_t x4001 = 1;
volatile uint8_t x4003 = 12U;
volatile uint64_t t55 = 113382706959LLU;
uint32_t x4229 = UINT32_MAX;
int8_t x4230 = INT8_MAX;
int64_t x4232 = -12172244539LL;
volatile int64_t t57 = 435809297472057LL;
int8_t x4252 = INT8_MAX;
int64_t x4440 = -1LL;
int32_t x4455 = 0;
static uint64_t x4525 = UINT64_MAX;
uint32_t x4619 = 0U;
uint8_t x5103 = 6U;
int64_t t69 = -1LL;
int8_t x5238 = INT8_MAX;
static int16_t x5240 = INT16_MIN;
uint64_t x5303 = 1LLU;
int8_t x5363 = 1;
uint64_t t77 = 11516170LLU;
volatile int8_t x5403 = 9;
static int32_t x5404 = INT32_MAX;
uint8_t x5554 = 7U;
int16_t x5611 = 1;
uint64_t x5712 = UINT64_MAX;
int64_t x5713 = -1LL;
int32_t x5714 = INT32_MAX;
int64_t x5764 = INT64_MAX;
uint64_t t86 = 9010549919244524662LLU;
int16_t x5868 = INT16_MAX;
uint32_t t88 = 317U;
static uint32_t x5870 = UINT32_MAX;
volatile int32_t x5872 = INT32_MIN;
int32_t t90 = 1;
int8_t x6133 = -1;
uint16_t x6135 = 1U;
int64_t x6136 = -308682078LL;
uint32_t x6438 = 39U;
int16_t x6440 = INT16_MAX;
volatile uint32_t t96 = 1U;
int32_t x6478 = 3260549;
int8_t x6627 = 1;
uint64_t x6669 = 2537989377368864442LLU;


void f0(void) {
	static int32_t x69 = INT32_MAX;
	uint8_t x71 = 1U;
	static int16_t x72 = INT16_MIN;
	int32_t t0 = -873;

	t0 = (x69/((x70<<x71)^x72));

	if (t0 != -65640) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x123 = 1;
	volatile uint32_t x124 = 1U;
	volatile uint32_t t1 = 1946637U;

	t1 = (x121/((x122<<x123)^x124));

	if (t1 != 65536U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x170 = 5062762;
	int32_t x172 = -348;
	volatile uint32_t t2 = 1824U;

	t2 = (x169/((x170<<x171)^x172));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x177 = UINT16_MAX;
	uint8_t x180 = 26U;
	static int32_t t3 = 3100912;

	t3 = (x177/((x178<<x179)^x180));

	if (t3 != 425) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x233 = 1U;
	volatile uint16_t x234 = UINT16_MAX;
	volatile uint16_t x235 = 0U;
	static volatile int32_t t4 = -2;

	t4 = (x233/((x234<<x235)^x236));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x285 = INT32_MAX;
	static volatile int32_t x287 = 4;
	static uint64_t x288 = 55932785LLU;

	t5 = (x285/((x286<<x287)^x288));

	if (t5 != 38LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint8_t x314 = 0U;
	volatile uint8_t x315 = 6U;
	volatile int64_t x316 = INT64_MIN;
	uint64_t t6 = 2425510204105LLU;

	t6 = (x313/((x314<<x315)^x316));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x486 = 17220862718448096LLU;
	uint8_t x487 = 7U;
	int32_t x488 = INT32_MIN;
	uint64_t t7 = 455445653515226329LLU;

	t7 = (x485/((x486<<x487)^x488));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x631 = 0U;
	uint64_t x632 = 118935490838635193LLU;
	static volatile uint64_t t8 = 21486LLU;

	t8 = (x629/((x630<<x631)^x632));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x853 = 104U;
	int16_t x855 = 0;
	int16_t x856 = -1;
	volatile int32_t t9 = -11028255;

	t9 = (x853/((x854<<x855)^x856));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x1009 = INT16_MIN;
	uint16_t x1010 = 1U;
	volatile int8_t x1011 = 22;
	int8_t x1012 = 18;
	volatile int32_t t10 = 7938829;

	t10 = (x1009/((x1010<<x1011)^x1012));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1013 = UINT64_MAX;
	uint32_t x1014 = 3139U;
	uint64_t t11 = 4LLU;

	t11 = (x1013/((x1014<<x1015)^x1016));

	if (t11 != 732275180568836LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x1029 = 15926LLU;
	int8_t x1030 = INT8_MAX;
	int8_t x1031 = 8;
	int64_t x1032 = INT64_MIN;
	uint64_t t12 = 423512406492891810LLU;

	t12 = (x1029/((x1030<<x1031)^x1032));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1085 = 2;
	volatile uint8_t x1086 = 2U;
	uint32_t x1088 = UINT32_MAX;
	volatile uint32_t t13 = 25124121U;

	t13 = (x1085/((x1086<<x1087)^x1088));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x1169 = -1;
	volatile int64_t x1170 = INT64_MAX;
	uint8_t x1171 = 0U;
	uint32_t x1172 = 722323U;
	int64_t t14 = -4892049748LL;

	t14 = (x1169/((x1170<<x1171)^x1172));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1193 = 3574540322584460LLU;
	int16_t x1194 = INT16_MAX;
	int16_t x1195 = 3;
	uint32_t x1196 = 262402U;
	uint64_t t15 = 2225886196458473894LLU;

	t15 = (x1193/((x1194<<x1195)^x1196));

	if (t15 != 6821303375LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x1289 = INT16_MIN;
	uint16_t x1290 = 209U;
	uint8_t x1291 = 12U;
	int64_t x1292 = -3500965308371818625LL;
	volatile int64_t t16 = 7687LL;

	t16 = (x1289/((x1290<<x1291)^x1292));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1349 = -1LL;
	int16_t x1350 = INT16_MAX;
	int16_t x1351 = 3;
	volatile int64_t t17 = 108LL;

	t17 = (x1349/((x1350<<x1351)^x1352));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1393 = INT8_MIN;
	volatile int16_t x1394 = INT16_MAX;
	int16_t x1395 = 1;
	int32_t t18 = 2567251;

	t18 = (x1393/((x1394<<x1395)^x1396));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x1561 = UINT8_MAX;
	volatile int8_t x1562 = 6;
	int16_t x1563 = 0;
	int32_t x1564 = 190403;

	t19 = (x1561/((x1562<<x1563)^x1564));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1581 = 25733756LL;
	uint16_t x1582 = 12723U;
	uint8_t x1583 = 9U;
	uint64_t x1584 = 2LLU;
	static volatile uint64_t t20 = 1787706LLU;

	t20 = (x1581/((x1582<<x1583)^x1584));

	if (t20 != 3LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1629 = INT8_MIN;
	static uint64_t x1630 = 3440955LLU;
	volatile uint8_t x1631 = 1U;
	uint64_t x1632 = UINT64_MAX;
	uint64_t t21 = 109LLU;

	t21 = (x1629/((x1630<<x1631)^x1632));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1642 = 5903U;
	uint64_t x1644 = 2173905221789LLU;
	volatile uint64_t t22 = 4LLU;

	t22 = (x1641/((x1642<<x1643)^x1644));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1729 = 16872897944LLU;
	static uint64_t x1730 = UINT64_MAX;
	uint8_t x1731 = 11U;
	volatile uint64_t t23 = 603219102LLU;

	t23 = (x1729/((x1730<<x1731)^x1732));

	if (t23 != 8242744LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1829 = -1LL;
	int16_t x1830 = 386;
	static uint8_t x1831 = 7U;
	volatile int64_t t24 = -256358048LL;

	t24 = (x1829/((x1830<<x1831)^x1832));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1905 = UINT8_MAX;
	uint64_t x1906 = UINT64_MAX;
	int8_t x1907 = 3;
	int16_t x1908 = -1;
	static uint64_t t25 = 906247LLU;

	t25 = (x1905/((x1906<<x1907)^x1908));

	if (t25 != 36LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1957 = INT32_MAX;
	uint64_t x1958 = UINT64_MAX;
	volatile uint8_t x1959 = 3U;
	int8_t x1960 = -1;
	uint64_t t26 = 1954936494744334LLU;

	t26 = (x1957/((x1958<<x1959)^x1960));

	if (t26 != 306783378LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2130 = 17U;
	static uint8_t x2131 = 11U;
	volatile uint16_t x2132 = 622U;
	static volatile uint32_t t27 = 16098U;

	t27 = (x2129/((x2130<<x2131)^x2132));

	if (t27 != 121196U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2257 = 1146U;
	int8_t x2258 = INT8_MAX;
	int64_t x2260 = INT64_MAX;
	volatile int64_t t28 = -1404LL;

	t28 = (x2257/((x2258<<x2259)^x2260));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x2325 = -3733897LL;
	int16_t x2326 = INT16_MAX;
	volatile int8_t x2327 = 1;
	int8_t x2328 = INT8_MIN;
	static volatile int64_t t29 = 89LL;

	t29 = (x2325/((x2326<<x2327)^x2328));

	if (t29 != 57LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x2417 = -521343;
	int32_t x2418 = INT32_MAX;
	uint64_t x2419 = 0LLU;
	volatile int32_t x2420 = -8;

	t30 = (x2417/((x2418<<x2419)^x2420));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2429 = 2604481061538LL;
	static int64_t x2430 = 96617728037572LL;
	static int32_t x2431 = 6;
	uint8_t x2432 = 13U;
	volatile int64_t t31 = 263753871244LL;

	t31 = (x2429/((x2430<<x2431)^x2432));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x2509 = INT64_MIN;
	uint8_t x2511 = 27U;
	uint64_t x2512 = 7734051414LLU;
	volatile uint64_t t32 = 4521965737775LLU;

	t32 = (x2509/((x2510<<x2511)^x2512));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2563 = 1;
	int64_t x2564 = INT64_MIN;

	t33 = (x2561/((x2562<<x2563)^x2564));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2611 = 4U;
	uint16_t x2612 = 3558U;

	t34 = (x2609/((x2610<<x2611)^x2612));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2657 = INT16_MIN;
	uint16_t x2658 = 319U;
	int16_t x2659 = 1;
	static uint8_t x2660 = 30U;
	volatile int32_t t35 = -2753390;

	t35 = (x2657/((x2658<<x2659)^x2660));

	if (t35 != -53) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2669 = 271;
	int8_t x2671 = 1;
	int8_t x2672 = -1;
	int32_t t36 = 96800104;

	t36 = (x2669/((x2670<<x2671)^x2672));

	if (t36 != -7) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2737 = 13U;
	uint64_t x2738 = 1305998910626864LLU;
	uint8_t x2739 = 29U;
	static uint64_t t37 = 7733386327438196132LLU;

	t37 = (x2737/((x2738<<x2739)^x2740));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2761 = -1;
	uint32_t x2762 = 245497U;
	volatile uint8_t x2763 = 24U;
	int8_t x2764 = INT8_MIN;
	static volatile uint32_t t38 = 40898U;

	t38 = (x2761/((x2762<<x2763)^x2764));

	if (t38 != 36U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x2765 = INT32_MIN;
	uint64_t x2766 = 6915273600LLU;
	uint32_t x2767 = 56U;
	static int32_t x2768 = INT32_MAX;
	volatile uint64_t t39 = 6568069717729401966LLU;

	t39 = (x2765/((x2766<<x2767)^x2768));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2769 = INT8_MAX;
	volatile int8_t x2770 = 10;
	int16_t x2771 = 2;
	static int32_t x2772 = INT32_MAX;
	int32_t t40 = 109;

	t40 = (x2769/((x2770<<x2771)^x2772));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2777 = -1300;
	int16_t x2779 = 7;
	uint8_t x2780 = UINT8_MAX;
	static volatile int32_t t41 = -5;

	t41 = (x2777/((x2778<<x2779)^x2780));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2805 = 23199U;
	volatile int8_t x2806 = 0;
	uint8_t x2807 = 2U;
	volatile uint8_t x2808 = 26U;

	t42 = (x2805/((x2806<<x2807)^x2808));

	if (t42 != 892U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2857 = INT64_MIN;
	volatile uint32_t x2858 = 388U;
	int8_t x2860 = 0;

	t43 = (x2857/((x2858<<x2859)^x2860));

	if (t43 != -1485723588410885LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2933 = 249U;
	volatile uint64_t x2934 = 4270333748127501798LLU;

	t44 = (x2933/((x2934<<x2935)^x2936));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2945 = UINT16_MAX;
	volatile uint32_t x2946 = UINT32_MAX;
	uint64_t x2947 = 3LLU;
	uint64_t x2948 = 35LLU;

	t45 = (x2945/((x2946<<x2947)^x2948));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3045 = INT16_MIN;
	int64_t x3046 = 2632545383302138327LL;
	int8_t x3047 = 1;
	int32_t x3048 = -33886487;
	volatile int64_t t46 = -3715306109605721LL;

	t46 = (x3045/((x3046<<x3047)^x3048));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x3113 = INT32_MIN;
	static uint16_t x3114 = UINT16_MAX;
	int16_t x3115 = 0;

	t47 = (x3113/((x3114<<x3115)^x3116));

	if (t47 != -32780) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3218 = 142859619946LLU;
	uint8_t x3219 = 4U;
	int64_t x3220 = -1LL;
	uint64_t t48 = 59843LLU;

	t48 = (x3217/((x3218<<x3219)^x3220));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x3285 = INT32_MAX;
	uint8_t x3286 = 1U;
	volatile int16_t x3287 = 5;
	int8_t x3288 = INT8_MIN;

	t49 = (x3285/((x3286<<x3287)^x3288));

	if (t49 != -22369621) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3437 = 1U;
	static volatile uint32_t x3438 = UINT32_MAX;
	uint8_t x3439 = 1U;
	int8_t x3440 = INT8_MIN;
	static uint32_t t50 = 208U;

	t50 = (x3437/((x3438<<x3439)^x3440));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3645 = INT32_MIN;
	int8_t x3647 = 0;
	int64_t x3648 = 8144LL;
	volatile int64_t t51 = -225998395389478LL;

	t51 = (x3645/((x3646<<x3647)^x3648));

	if (t51 != -666LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3898 = 62;
	int8_t x3899 = 6;
	volatile int8_t x3900 = INT8_MIN;

	t52 = (x3897/((x3898<<x3899)^x3900));

	if (t52 != 64166LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3949 = INT8_MIN;
	int8_t x3950 = 1;
	static uint8_t x3952 = UINT8_MAX;
	int32_t t53 = -14951391;

	t53 = (x3949/((x3950<<x3951)^x3952));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x4002 = INT16_MAX;
	int16_t x4004 = 0;
	static volatile int32_t t54 = 542570;

	t54 = (x4001/((x4002<<x4003)^x4004));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x4057 = 1;
	uint64_t x4058 = UINT64_MAX;
	uint8_t x4059 = 4U;
	volatile uint32_t x4060 = 6078U;

	t55 = (x4057/((x4058<<x4059)^x4060));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x4061 = 7392;
	static uint32_t x4062 = UINT32_MAX;
	static uint8_t x4063 = 27U;
	int16_t x4064 = -1;
	uint32_t t56 = 6U;

	t56 = (x4061/((x4062<<x4063)^x4064));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x4231 = 2;

	t57 = (x4229/((x4230<<x4231)^x4232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x4249 = -1;
	uint8_t x4250 = 13U;
	int32_t x4251 = 22;
	int32_t t58 = 5610194;

	t58 = (x4249/((x4250<<x4251)^x4252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4437 = INT16_MIN;
	int16_t x4438 = INT16_MAX;
	volatile uint8_t x4439 = 3U;
	int64_t t59 = 13187LL;

	t59 = (x4437/((x4438<<x4439)^x4440));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4453 = UINT32_MAX;
	uint8_t x4454 = 4U;
	int64_t x4456 = INT64_MIN;
	int64_t t60 = 18396087239LL;

	t60 = (x4453/((x4454<<x4455)^x4456));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4465 = 0LL;
	int64_t x4466 = 242253780745051LL;
	int32_t x4467 = 0;
	int16_t x4468 = -1;
	volatile int64_t t61 = 818253201LL;

	t61 = (x4465/((x4466<<x4467)^x4468));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x4526 = 6U;
	volatile uint8_t x4527 = 10U;
	static int64_t x4528 = -148492570LL;
	volatile uint64_t t62 = 184437104102796LLU;

	t62 = (x4525/((x4526<<x4527)^x4528));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4533 = 111U;
	volatile uint16_t x4534 = 106U;
	uint8_t x4535 = 0U;
	int16_t x4536 = -1;
	volatile int32_t t63 = 460;

	t63 = (x4533/((x4534<<x4535)^x4536));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4573 = 54404630411567419LL;
	volatile uint32_t x4574 = 1U;
	volatile uint8_t x4575 = 1U;
	uint16_t x4576 = 268U;
	int64_t t64 = -176986770930LL;

	t64 = (x4573/((x4574<<x4575)^x4576));

	if (t64 != 201498631153953LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x4617 = 5LLU;
	uint16_t x4618 = UINT16_MAX;
	int64_t x4620 = 6477252LL;
	volatile uint64_t t65 = 158807695LLU;

	t65 = (x4617/((x4618<<x4619)^x4620));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4857 = -1;
	static uint8_t x4858 = 6U;
	uint8_t x4859 = 1U;
	int64_t x4860 = -1LL;
	volatile int64_t t66 = -2596959233196LL;

	t66 = (x4857/((x4858<<x4859)^x4860));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4933 = -1LL;
	static uint8_t x4934 = 0U;
	static uint32_t x4935 = 2U;
	int64_t x4936 = INT64_MAX;
	volatile int64_t t67 = 3495505359670676524LL;

	t67 = (x4933/((x4934<<x4935)^x4936));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x5061 = INT8_MAX;
	int16_t x5062 = INT16_MAX;
	int8_t x5063 = 0;
	static volatile uint64_t x5064 = 491LLU;
	volatile uint64_t t68 = 15LLU;

	t68 = (x5061/((x5062<<x5063)^x5064));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5101 = INT8_MIN;
	uint32_t x5102 = UINT32_MAX;
	volatile int64_t x5104 = INT64_MAX;

	t69 = (x5101/((x5102<<x5103)^x5104));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x5149 = -12381894LL;
	int16_t x5150 = INT16_MAX;
	int8_t x5151 = 1;
	int16_t x5152 = -1;
	int64_t t70 = 0LL;

	t70 = (x5149/((x5150<<x5151)^x5152));

	if (t70 != 188LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5237 = INT16_MIN;
	int8_t x5239 = 2;
	int32_t t71 = 11853;

	t71 = (x5237/((x5238<<x5239)^x5240));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x5253 = INT16_MAX;
	static volatile int8_t x5254 = 0;
	volatile int16_t x5255 = 5;
	static uint8_t x5256 = UINT8_MAX;
	volatile int32_t t72 = -34431;

	t72 = (x5253/((x5254<<x5255)^x5256));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x5277 = INT64_MIN;
	uint64_t x5278 = 25895653771LLU;
	uint16_t x5279 = 22U;
	volatile int16_t x5280 = INT16_MIN;
	volatile uint64_t t73 = 0LLU;

	t73 = (x5277/((x5278<<x5279)^x5280));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x5301 = INT32_MIN;
	volatile uint8_t x5302 = 11U;
	int64_t x5304 = -49790099910273LL;
	int64_t t74 = 719848787263793048LL;

	t74 = (x5301/((x5302<<x5303)^x5304));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5313 = 1;
	volatile uint32_t x5314 = UINT32_MAX;
	int64_t x5315 = 1LL;
	static int32_t x5316 = INT32_MIN;
	volatile uint32_t t75 = 16742120U;

	t75 = (x5313/((x5314<<x5315)^x5316));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5357 = 110LLU;
	int32_t x5358 = 25482;
	int64_t x5359 = 7LL;
	static uint32_t x5360 = 15628569U;
	uint64_t t76 = 538562683571LLU;

	t76 = (x5357/((x5358<<x5359)^x5360));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5361 = 423;
	uint64_t x5362 = 25851620871LLU;
	static int64_t x5364 = INT64_MIN;

	t77 = (x5361/((x5362<<x5363)^x5364));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x5401 = 75LLU;
	uint8_t x5402 = UINT8_MAX;
	uint64_t t78 = 2314754LLU;

	t78 = (x5401/((x5402<<x5403)^x5404));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5553 = -1;
	int8_t x5555 = 1;
	static uint16_t x5556 = 0U;
	static int32_t t79 = -920;

	t79 = (x5553/((x5554<<x5555)^x5556));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5609 = INT64_MAX;
	static int8_t x5610 = INT8_MAX;
	int16_t x5612 = 4367;
	int64_t t80 = -670459926018LL;

	t80 = (x5609/((x5610<<x5611)^x5612));

	if (t80 != 2008136737830345LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5637 = INT64_MIN;
	uint64_t x5638 = 191998521LLU;
	static uint16_t x5639 = 2U;
	int32_t x5640 = -1;
	volatile uint64_t t81 = 724LLU;

	t81 = (x5637/((x5638<<x5639)^x5640));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5661 = 482U;
	int16_t x5662 = INT16_MAX;
	uint8_t x5663 = 4U;
	int8_t x5664 = 14;
	int32_t t82 = 97178563;

	t82 = (x5661/((x5662<<x5663)^x5664));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5709 = INT32_MIN;
	uint16_t x5710 = 7053U;
	static uint32_t x5711 = 9U;
	uint64_t t83 = 25327327LLU;

	t83 = (x5709/((x5710<<x5711)^x5712));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5715 = 0U;
	int16_t x5716 = INT16_MAX;
	int64_t t84 = -232LL;

	t84 = (x5713/((x5714<<x5715)^x5716));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5757 = 4126808;
	static uint16_t x5758 = 0U;
	static int8_t x5759 = 5;
	uint8_t x5760 = 54U;
	static volatile int32_t t85 = 10;

	t85 = (x5757/((x5758<<x5759)^x5760));

	if (t85 != 76422) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5761 = 31722U;
	static volatile uint64_t x5762 = 14454173LLU;
	volatile int32_t x5763 = 0;

	t86 = (x5761/((x5762<<x5763)^x5764));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x5789 = 1U;
	volatile uint64_t x5790 = 105894217469LLU;
	static int8_t x5791 = 6;
	uint32_t x5792 = 34U;
	volatile uint64_t t87 = 428276160388LLU;

	t87 = (x5789/((x5790<<x5791)^x5792));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5865 = -1;
	static uint32_t x5866 = 615780050U;
	static uint8_t x5867 = 1U;

	t88 = (x5865/((x5866<<x5867)^x5868));

	if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5869 = INT16_MIN;
	static int8_t x5871 = 3;
	uint32_t t89 = 88088603U;

	t89 = (x5869/((x5870<<x5871)^x5872));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5993 = INT32_MIN;
	volatile int8_t x5994 = INT8_MAX;
	uint8_t x5995 = 23U;
	static int16_t x5996 = INT16_MAX;

	t90 = (x5993/((x5994<<x5995)^x5996));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6061 = 443024331LLU;
	static uint32_t x6062 = 5105U;
	uint8_t x6063 = 0U;
	uint32_t x6064 = UINT32_MAX;
	volatile uint64_t t91 = 3LLU;

	t91 = (x6061/((x6062<<x6063)^x6064));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x6134 = UINT32_MAX;
	int64_t t92 = 3144LL;

	t92 = (x6133/((x6134<<x6135)^x6136));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6173 = INT64_MAX;
	uint32_t x6174 = UINT32_MAX;
	int64_t x6175 = 1LL;
	int64_t x6176 = INT64_MIN;
	int64_t t93 = 650480625LL;

	t93 = (x6173/((x6174<<x6175)^x6176));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6229 = INT64_MIN;
	uint16_t x6230 = 31U;
	int16_t x6231 = 0;
	int64_t x6232 = INT64_MIN;
	volatile int64_t t94 = 116310486LL;

	t94 = (x6229/((x6230<<x6231)^x6232));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x6429 = UINT8_MAX;
	uint16_t x6430 = 30131U;
	volatile uint8_t x6431 = 8U;
	int16_t x6432 = 1026;
	int32_t t95 = -9695;

	t95 = (x6429/((x6430<<x6431)^x6432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6437 = -7976;
	uint32_t x6439 = 2U;

	t96 = (x6437/((x6438<<x6439)^x6440));

	if (t96 != 131702U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6477 = 0U;
	static volatile int8_t x6479 = 0;
	int16_t x6480 = INT16_MIN;
	volatile int32_t t97 = -4145012;

	t97 = (x6477/((x6478<<x6479)^x6480));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6625 = UINT32_MAX;
	uint8_t x6626 = UINT8_MAX;
	volatile int8_t x6628 = 3;
	volatile uint32_t t98 = 91289743U;

	t98 = (x6625/((x6626<<x6627)^x6628));

	if (t98 != 8438049U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x6670 = 49174U;
	static volatile uint8_t x6671 = 8U;
	uint16_t x6672 = 776U;
	volatile uint64_t t99 = 35104114475867LLU;

	t99 = (x6669/((x6670<<x6671)^x6672));

	if (t99 != 201615006301LLU) { NG(); } else { ; }
	
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

