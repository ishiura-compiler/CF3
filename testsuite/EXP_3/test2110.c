#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = 19;
volatile int32_t t0 = 26475;
volatile int32_t t1 = 588922679;
static volatile int32_t t3 = 1238;
static uint64_t t5 = 13108905161034LLU;
static int64_t t7 = -396306742860349LL;
uint32_t x253 = 197956U;
volatile int64_t t12 = -199581LL;
static int16_t x477 = 5496;
volatile uint32_t x705 = 2663U;
uint32_t x706 = 1U;
static uint64_t x853 = UINT64_MAX;
volatile uint64_t t19 = 215847363782756LLU;
int16_t x925 = 0;
volatile int32_t t21 = 714553142;
uint16_t x999 = 3233U;
int16_t x1120 = -22;
int8_t x1131 = -1;
uint16_t x1137 = 1U;
static volatile uint32_t x1237 = 55472928U;
uint32_t t29 = 3U;
uint16_t x1417 = 1464U;
int16_t x1419 = INT16_MIN;
static uint16_t x1445 = UINT16_MAX;
static uint64_t t31 = 2161007LLU;
uint16_t x1609 = UINT16_MAX;
static int32_t x1611 = -1;
volatile uint64_t t34 = 6860467LLU;
uint16_t x2000 = 11U;
uint16_t x2014 = 9U;
int8_t x2264 = INT8_MIN;
uint16_t x2470 = 25U;
uint64_t x2472 = UINT64_MAX;
volatile int32_t t46 = -730906226;
static uint32_t x2781 = 65078862U;
uint8_t x2782 = 10U;
int64_t t49 = -518879812221617340LL;
static uint32_t x2869 = 56227385U;
uint32_t x2870 = 2U;
volatile int64_t t50 = 2517400651315560493LL;
static int8_t x2930 = 1;
uint64_t x2931 = 19052LLU;
static int32_t x2932 = INT32_MIN;
uint64_t t51 = 844LLU;
int8_t x2958 = 3;
int8_t x2965 = INT8_MAX;
uint16_t x2969 = 28U;
uint64_t t54 = 5422LLU;
volatile int32_t x2982 = 3;
uint8_t x3109 = UINT8_MAX;
volatile int32_t x3149 = INT32_MAX;
volatile int64_t t60 = -130138604LL;
volatile uint32_t x3169 = UINT32_MAX;
volatile uint8_t x3258 = 2U;
static int8_t x3402 = 10;
int16_t x3404 = INT16_MAX;
uint64_t x3589 = 887596084218685456LLU;
int16_t x3591 = -1;
int32_t x3592 = INT32_MIN;
uint64_t t66 = 2730090722854286LLU;
uint64_t x3673 = 2528363414241LLU;
uint32_t x3675 = 2840872U;
static volatile uint8_t x3710 = 26U;
int16_t x3911 = -1;
int64_t x3945 = INT64_MAX;
uint32_t x3947 = UINT32_MAX;
static volatile int64_t t71 = -1771LL;
uint8_t x3965 = 16U;
uint16_t x3966 = 0U;
uint8_t x3967 = 1U;
volatile int32_t t76 = -5544;
uint64_t x4097 = 20485060204LLU;
int32_t t78 = 188;
uint32_t x4185 = UINT32_MAX;
volatile uint8_t x4237 = UINT8_MAX;
uint64_t x4295 = 3556126337962LLU;
uint64_t t81 = 15925538898572LLU;
uint16_t x4478 = 28U;
int32_t x4551 = 972847;
volatile int32_t t88 = -54;
int32_t x4942 = 2;
static int32_t x4944 = -1;
volatile uint64_t t92 = 1319943242467613867LLU;
volatile int16_t x5021 = 412;
uint8_t x5022 = 2U;
uint16_t x5202 = 6U;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int8_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;

	t0 = ((x1>>x2)/(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x25 = 3;
	volatile int16_t x26 = 0;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -1881;

	t1 = ((x25>>x26)/(x27^x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x37 = 64025U;
	int8_t x38 = 3;
	static int16_t x39 = INT16_MIN;
	static volatile int32_t x40 = -1;
	static uint32_t t2 = 514421U;

	t2 = ((x37>>x38)/(x39^x40));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x89 = 17;
	uint32_t x90 = 0U;
	volatile int16_t x91 = INT16_MIN;
	int8_t x92 = -1;

	t3 = ((x89>>x90)/(x91^x92));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x117 = 1U;
	int8_t x118 = 0;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t4 = 917762935;

	t4 = ((x117>>x118)/(x119^x120));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x133 = 54486757172954LLU;
	uint16_t x134 = 3U;
	int16_t x135 = INT16_MIN;
	volatile int64_t x136 = -1210567738LL;

	t5 = ((x133>>x134)/(x135^x136));

	if (t5 != 5626LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = 0;
	int32_t x139 = 12;
	int64_t x140 = -392889236295012LL;
	static int64_t t6 = -1LL;

	t6 = ((x137>>x138)/(x139^x140));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x181 = UINT32_MAX;
	uint16_t x182 = 7U;
	uint32_t x183 = 0U;
	int64_t x184 = -905555523LL;

	t7 = ((x181>>x182)/(x183^x184));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x221 = 7U;
	static int64_t x222 = 0LL;
	uint16_t x223 = 1081U;
	int16_t x224 = INT16_MAX;
	int32_t t8 = -6950842;

	t8 = ((x221>>x222)/(x223^x224));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x254 = 7U;
	volatile int64_t x255 = INT64_MIN;
	int8_t x256 = 15;
	volatile int64_t t9 = -113585238386896LL;

	t9 = ((x253>>x254)/(x255^x256));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x297 = INT64_MAX;
	uint8_t x298 = 39U;
	static volatile int64_t x299 = INT64_MIN;
	uint64_t x300 = 118LLU;
	volatile uint64_t t10 = 31067LLU;

	t10 = ((x297>>x298)/(x299^x300));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x409 = 40U;
	uint8_t x410 = 3U;
	static int8_t x411 = -1;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t11 = 28;

	t11 = ((x409>>x410)/(x411^x412));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x453 = INT64_MAX;
	uint8_t x454 = 5U;
	int8_t x455 = 0;
	uint32_t x456 = 470784U;

	t12 = ((x453>>x454)/(x455^x456));

	if (t12 != 612234859620LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x478 = 18;
	int32_t x479 = -1;
	int8_t x480 = INT8_MIN;
	volatile int32_t t13 = -1845;

	t13 = ((x477>>x478)/(x479^x480));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x509 = 12U;
	volatile int8_t x510 = 11;
	volatile int64_t x511 = INT64_MIN;
	volatile int64_t x512 = INT64_MAX;
	int64_t t14 = -1328LL;

	t14 = ((x509>>x510)/(x511^x512));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x601 = 828445790U;
	int8_t x602 = 0;
	uint32_t x603 = 54395U;
	int64_t x604 = 14996438645490LL;
	volatile int64_t t15 = 351333LL;

	t15 = ((x601>>x602)/(x603^x604));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x685 = 23;
	int16_t x686 = 0;
	int8_t x687 = -1;
	int64_t x688 = 70758162LL;
	int64_t t16 = -4249590473856850890LL;

	t16 = ((x685>>x686)/(x687^x688));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x707 = 2;
	int16_t x708 = 677;
	static volatile uint32_t t17 = 3540U;

	t17 = ((x705>>x706)/(x707^x708));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x854 = 16;
	int8_t x855 = -1;
	volatile uint64_t x856 = 137LLU;
	static uint64_t t18 = 384587560645826LLU;

	t18 = ((x853>>x854)/(x855^x856));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x857 = UINT8_MAX;
	volatile int8_t x858 = 1;
	static int16_t x859 = -1;
	uint64_t x860 = 27427LLU;

	t19 = ((x857>>x858)/(x859^x860));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x926 = 3;
	int16_t x927 = -546;
	uint8_t x928 = 5U;
	static volatile int32_t t20 = -691007031;

	t20 = ((x925>>x926)/(x927^x928));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x937 = INT8_MAX;
	uint32_t x938 = 2U;
	uint8_t x939 = 11U;
	int16_t x940 = INT16_MAX;

	t21 = ((x937>>x938)/(x939^x940));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x953 = 296U;
	uint32_t x954 = 13U;
	int16_t x955 = INT16_MIN;
	int64_t x956 = INT64_MIN;
	static volatile int64_t t22 = 19929795778056868LL;

	t22 = ((x953>>x954)/(x955^x956));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x997 = 32236U;
	int8_t x998 = 0;
	volatile int64_t x1000 = INT64_MAX;
	volatile int64_t t23 = 1935110325LL;

	t23 = ((x997>>x998)/(x999^x1000));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1005 = INT16_MAX;
	uint64_t x1006 = 27LLU;
	int64_t x1007 = 2787LL;
	static volatile uint64_t x1008 = 189921567352360483LLU;
	uint64_t t24 = 611058LLU;

	t24 = ((x1005>>x1006)/(x1007^x1008));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1073 = 8108U;
	uint8_t x1074 = 11U;
	uint64_t x1075 = UINT64_MAX;
	static volatile int16_t x1076 = INT16_MAX;
	volatile uint64_t t25 = 38672010786588848LLU;

	t25 = ((x1073>>x1074)/(x1075^x1076));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1117 = 3198LLU;
	static uint16_t x1118 = 9U;
	int8_t x1119 = INT8_MIN;
	static uint64_t t26 = 22412428621421LLU;

	t26 = ((x1117>>x1118)/(x1119^x1120));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1129 = INT8_MAX;
	int32_t x1130 = 1;
	int16_t x1132 = INT16_MIN;
	int32_t t27 = 14603;

	t27 = ((x1129>>x1130)/(x1131^x1132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1138 = 12;
	int64_t x1139 = INT64_MIN;
	volatile int16_t x1140 = INT16_MIN;
	int64_t t28 = -1287760913224405LL;

	t28 = ((x1137>>x1138)/(x1139^x1140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1238 = 21U;
	int32_t x1239 = INT32_MIN;
	uint32_t x1240 = 3573146U;

	t29 = ((x1237>>x1238)/(x1239^x1240));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1418 = 2U;
	static uint8_t x1420 = 16U;
	int32_t t30 = 15;

	t30 = ((x1417>>x1418)/(x1419^x1420));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1446 = 5U;
	uint8_t x1447 = 7U;
	uint64_t x1448 = 208231276132LLU;

	t31 = ((x1445>>x1446)/(x1447^x1448));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1477 = 8U;
	volatile uint8_t x1478 = 25U;
	int8_t x1479 = 1;
	int64_t x1480 = INT64_MIN;
	int64_t t32 = -18838862LL;

	t32 = ((x1477>>x1478)/(x1479^x1480));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x1501 = INT16_MAX;
	uint8_t x1502 = 9U;
	int32_t x1503 = INT32_MIN;
	int8_t x1504 = 0;
	int32_t t33 = -777387;

	t33 = ((x1501>>x1502)/(x1503^x1504));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1610 = 0LL;
	static uint64_t x1612 = 1914786158212267190LLU;

	t34 = ((x1609>>x1610)/(x1611^x1612));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1669 = 1;
	uint16_t x1670 = 0U;
	int64_t x1671 = INT64_MIN;
	int32_t x1672 = INT32_MIN;
	static int64_t t35 = -73691348073LL;

	t35 = ((x1669>>x1670)/(x1671^x1672));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1813 = INT8_MAX;
	static uint8_t x1814 = 1U;
	int8_t x1815 = INT8_MIN;
	int32_t x1816 = 15973642;
	int32_t t36 = -173;

	t36 = ((x1813>>x1814)/(x1815^x1816));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1921 = 89246730U;
	static int16_t x1922 = 12;
	int32_t x1923 = 0;
	static int32_t x1924 = INT32_MIN;
	volatile uint32_t t37 = 63U;

	t37 = ((x1921>>x1922)/(x1923^x1924));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x1997 = UINT64_MAX;
	volatile uint16_t x1998 = 14U;
	static uint64_t x1999 = 95603413271LLU;
	uint64_t t38 = 725236LLU;

	t38 = ((x1997>>x1998)/(x1999^x2000));

	if (t38 != 11776LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2013 = 0;
	int16_t x2015 = 2878;
	uint32_t x2016 = 6U;
	uint32_t t39 = 0U;

	t39 = ((x2013>>x2014)/(x2015^x2016));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2161 = 3U;
	static uint32_t x2162 = 3U;
	static int64_t x2163 = INT64_MAX;
	uint16_t x2164 = 8442U;
	int64_t t40 = -2062502284041601LL;

	t40 = ((x2161>>x2162)/(x2163^x2164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x2205 = UINT64_MAX;
	uint8_t x2206 = 35U;
	uint32_t x2207 = UINT32_MAX;
	static uint8_t x2208 = 6U;
	volatile uint64_t t41 = 8704323173798553LLU;

	t41 = ((x2205>>x2206)/(x2207^x2208));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2261 = 127731889976LLU;
	volatile int16_t x2262 = 3;
	int32_t x2263 = -1;
	uint64_t t42 = 6068022LLU;

	t42 = ((x2261>>x2262)/(x2263^x2264));

	if (t42 != 125720364LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2469 = 9616636U;
	volatile int8_t x2471 = INT8_MIN;
	uint64_t t43 = 9LLU;

	t43 = ((x2469>>x2470)/(x2471^x2472));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2477 = 0;
	int32_t x2478 = 0;
	uint8_t x2479 = 1U;
	static uint32_t x2480 = 32639U;
	uint32_t t44 = 2618U;

	t44 = ((x2477>>x2478)/(x2479^x2480));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2517 = 327727040969124LLU;
	int8_t x2518 = 12;
	volatile int64_t x2519 = -1LL;
	uint8_t x2520 = 7U;
	uint64_t t45 = 25120934954952LLU;

	t45 = ((x2517>>x2518)/(x2519^x2520));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2529 = 1942;
	int16_t x2530 = 18;
	volatile int8_t x2531 = INT8_MAX;
	int16_t x2532 = INT16_MIN;

	t46 = ((x2529>>x2530)/(x2531^x2532));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2689 = 28U;
	static int32_t x2690 = 22;
	static int64_t x2691 = INT64_MIN;
	volatile uint64_t x2692 = 4133621172574161869LLU;
	uint64_t t47 = 2LLU;

	t47 = ((x2689>>x2690)/(x2691^x2692));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2757 = 2U;
	uint32_t x2758 = 0U;
	int16_t x2759 = INT16_MAX;
	int8_t x2760 = -1;
	static volatile int32_t t48 = 877;

	t48 = ((x2757>>x2758)/(x2759^x2760));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2783 = -551818375;
	static int64_t x2784 = -1LL;

	t49 = ((x2781>>x2782)/(x2783^x2784));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2871 = INT16_MAX;
	static int64_t x2872 = INT64_MIN;

	t50 = ((x2869>>x2870)/(x2871^x2872));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2929 = INT64_MAX;

	t51 = ((x2929>>x2930)/(x2931^x2932));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2957 = UINT8_MAX;
	uint8_t x2959 = 0U;
	uint8_t x2960 = 103U;
	static volatile int32_t t52 = -4;

	t52 = ((x2957>>x2958)/(x2959^x2960));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2966 = 0U;
	static uint64_t x2967 = UINT64_MAX;
	int32_t x2968 = -998741592;
	uint64_t t53 = 84730561LLU;

	t53 = ((x2965>>x2966)/(x2967^x2968));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2970 = 2U;
	uint64_t x2971 = 1331LLU;
	int32_t x2972 = INT32_MIN;

	t54 = ((x2969>>x2970)/(x2971^x2972));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2981 = 9U;
	uint8_t x2983 = UINT8_MAX;
	int8_t x2984 = -1;
	int32_t t55 = -19495735;

	t55 = ((x2981>>x2982)/(x2983^x2984));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3025 = INT32_MAX;
	uint32_t x3026 = 2U;
	volatile int16_t x3027 = INT16_MIN;
	int8_t x3028 = -40;
	volatile int32_t t56 = 308896600;

	t56 = ((x3025>>x3026)/(x3027^x3028));

	if (t56 != 16404) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3053 = 357179U;
	int32_t x3054 = 0;
	volatile int8_t x3055 = 4;
	volatile uint8_t x3056 = 0U;
	volatile uint32_t t57 = 33297U;

	t57 = ((x3053>>x3054)/(x3055^x3056));

	if (t57 != 89294U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3110 = 15U;
	int8_t x3111 = INT8_MIN;
	static volatile int8_t x3112 = INT8_MAX;
	int32_t t58 = -94281;

	t58 = ((x3109>>x3110)/(x3111^x3112));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3150 = 0;
	uint16_t x3151 = UINT16_MAX;
	static volatile int16_t x3152 = INT16_MAX;
	static int32_t t59 = 5295;

	t59 = ((x3149>>x3150)/(x3151^x3152));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3165 = 6U;
	volatile int16_t x3166 = 1;
	static int8_t x3167 = INT8_MIN;
	int64_t x3168 = -1LL;

	t60 = ((x3165>>x3166)/(x3167^x3168));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3170 = 2LL;
	int64_t x3171 = INT64_MIN;
	int8_t x3172 = INT8_MAX;
	static int64_t t61 = -165289445LL;

	t61 = ((x3169>>x3170)/(x3171^x3172));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x3257 = UINT16_MAX;
	int32_t x3259 = INT32_MIN;
	static uint16_t x3260 = 63U;
	int32_t t62 = -727153293;

	t62 = ((x3257>>x3258)/(x3259^x3260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3401 = INT8_MAX;
	volatile uint64_t x3403 = UINT64_MAX;
	static uint64_t t63 = 1LLU;

	t63 = ((x3401>>x3402)/(x3403^x3404));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3445 = 1825;
	static uint8_t x3446 = 6U;
	uint32_t x3447 = UINT32_MAX;
	uint8_t x3448 = 52U;
	volatile uint32_t t64 = 22420U;

	t64 = ((x3445>>x3446)/(x3447^x3448));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3521 = 56028LL;
	volatile int16_t x3522 = 1;
	uint32_t x3523 = 10009153U;
	volatile int32_t x3524 = INT32_MAX;
	volatile int64_t t65 = 17466595662660LL;

	t65 = ((x3521>>x3522)/(x3523^x3524));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3590 = 14;

	t66 = ((x3589>>x3590)/(x3591^x3592));

	if (t66 != 25226LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3661 = UINT8_MAX;
	uint8_t x3662 = 2U;
	uint32_t x3663 = 688041U;
	uint8_t x3664 = 0U;
	static volatile uint32_t t67 = 884100426U;

	t67 = ((x3661>>x3662)/(x3663^x3664));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3674 = 1U;
	int32_t x3676 = -1;
	static uint64_t t68 = 1936084849LLU;

	t68 = ((x3673>>x3674)/(x3675^x3676));

	if (t68 != 294LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3709 = 33884246344LL;
	static int32_t x3711 = INT32_MAX;
	static uint8_t x3712 = 13U;
	int64_t t69 = 120067747448198347LL;

	t69 = ((x3709>>x3710)/(x3711^x3712));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3909 = UINT64_MAX;
	uint8_t x3910 = 15U;
	static volatile int32_t x3912 = -4731372;
	uint64_t t70 = 14459147305LLU;

	t70 = ((x3909>>x3910)/(x3911^x3912));

	if (t70 != 118982416LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3946 = 56U;
	static volatile int8_t x3948 = INT8_MIN;

	t71 = ((x3945>>x3946)/(x3947^x3948));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3968 = -1;
	int32_t t72 = 1695603;

	t72 = ((x3965>>x3966)/(x3967^x3968));

	if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4033 = INT16_MAX;
	int8_t x4034 = 1;
	volatile uint8_t x4035 = UINT8_MAX;
	uint32_t x4036 = 7U;
	volatile uint32_t t73 = 394099U;

	t73 = ((x4033>>x4034)/(x4035^x4036));

	if (t73 != 66U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4061 = 859161720952279854LLU;
	uint64_t x4062 = 1LLU;
	uint64_t x4063 = 575196LLU;
	int8_t x4064 = INT8_MIN;
	static volatile uint64_t t74 = 7250393733465739981LLU;

	t74 = ((x4061>>x4062)/(x4063^x4064));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4085 = UINT64_MAX;
	volatile int32_t x4086 = 7;
	uint8_t x4087 = 24U;
	volatile uint32_t x4088 = 65789U;
	volatile uint64_t t75 = 6595994LLU;

	t75 = ((x4085>>x4086)/(x4087^x4088));

	if (t75 != 2191366046922LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4089 = INT16_MAX;
	static uint16_t x4090 = 12U;
	int32_t x4091 = INT32_MAX;
	static int16_t x4092 = INT16_MAX;

	t76 = ((x4089>>x4090)/(x4091^x4092));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4098 = 2;
	int8_t x4099 = INT8_MIN;
	int16_t x4100 = -1;
	uint64_t t77 = 1599099362LLU;

	t77 = ((x4097>>x4098)/(x4099^x4100));

	if (t77 != 40324921LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4121 = 7;
	volatile int8_t x4122 = 15;
	static int16_t x4123 = 20;
	uint16_t x4124 = UINT16_MAX;

	t78 = ((x4121>>x4122)/(x4123^x4124));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4186 = 28U;
	int64_t x4187 = INT64_MAX;
	uint64_t x4188 = 3399967LLU;
	uint64_t t79 = 0LLU;

	t79 = ((x4185>>x4186)/(x4187^x4188));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4238 = 6LLU;
	static int32_t x4239 = -1;
	int64_t x4240 = INT64_MIN;
	volatile int64_t t80 = 0LL;

	t80 = ((x4237>>x4238)/(x4239^x4240));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4293 = 0;
	int16_t x4294 = 1;
	int32_t x4296 = INT32_MIN;

	t81 = ((x4293>>x4294)/(x4295^x4296));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4349 = 58005034562LLU;
	int8_t x4350 = 12;
	uint32_t x4351 = 736162394U;
	volatile int32_t x4352 = -1;
	volatile uint64_t t82 = 15994475LLU;

	t82 = ((x4349>>x4350)/(x4351^x4352));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4393 = UINT16_MAX;
	static uint16_t x4394 = 18U;
	int16_t x4395 = INT16_MAX;
	uint8_t x4396 = 12U;
	volatile int32_t t83 = 312;

	t83 = ((x4393>>x4394)/(x4395^x4396));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4477 = 476679559676LL;
	int64_t x4479 = INT64_MIN;
	uint8_t x4480 = 87U;
	static int64_t t84 = 24163LL;

	t84 = ((x4477>>x4478)/(x4479^x4480));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4549 = UINT16_MAX;
	static int16_t x4550 = 15;
	uint32_t x4552 = 205U;
	static volatile uint32_t t85 = 18382U;

	t85 = ((x4549>>x4550)/(x4551^x4552));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4613 = INT64_MAX;
	uint8_t x4614 = 2U;
	volatile int16_t x4615 = INT16_MAX;
	int16_t x4616 = 14557;
	int64_t t86 = 238578LL;

	t86 = ((x4613>>x4614)/(x4615^x4616));

	if (t86 != 126625096607012LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4713 = 965205623891350LLU;
	uint16_t x4714 = 7U;
	int8_t x4715 = INT8_MIN;
	uint64_t x4716 = 243LLU;
	uint64_t t87 = 5489811314682393544LLU;

	t87 = ((x4713>>x4714)/(x4715^x4716));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4729 = 1;
	static uint8_t x4730 = 6U;
	volatile int32_t x4731 = 3809;
	int16_t x4732 = 0;

	t88 = ((x4729>>x4730)/(x4731^x4732));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4829 = 244269LLU;
	volatile uint64_t x4830 = 0LLU;
	uint64_t x4831 = 6277344916LLU;
	int32_t x4832 = -1;
	volatile uint64_t t89 = 5118747LLU;

	t89 = ((x4829>>x4830)/(x4831^x4832));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4837 = INT16_MAX;
	uint8_t x4838 = 3U;
	int64_t x4839 = INT64_MAX;
	static int8_t x4840 = INT8_MAX;
	int64_t t90 = -506713982LL;

	t90 = ((x4837>>x4838)/(x4839^x4840));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4869 = 3;
	static volatile int64_t x4870 = 1LL;
	static int8_t x4871 = -1;
	uint8_t x4872 = 14U;
	int32_t t91 = -207769;

	t91 = ((x4869>>x4870)/(x4871^x4872));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x4941 = 1553163577239342796LLU;
	int8_t x4943 = -4;

	t92 = ((x4941>>x4942)/(x4943^x4944));

	if (t92 != 129430298103278566LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4957 = 22250311LLU;
	uint16_t x4958 = 20U;
	int32_t x4959 = -1;
	int32_t x4960 = INT32_MIN;
	volatile uint64_t t93 = 869961077434LLU;

	t93 = ((x4957>>x4958)/(x4959^x4960));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5023 = INT32_MIN;
	int16_t x5024 = 2533;
	int32_t t94 = -212439373;

	t94 = ((x5021>>x5022)/(x5023^x5024));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5121 = INT64_MAX;
	static uint8_t x5122 = 7U;
	static int8_t x5123 = INT8_MIN;
	int16_t x5124 = -1;
	int64_t t95 = 346793LL;

	t95 = ((x5121>>x5122)/(x5123^x5124));

	if (t95 != 567382630219905LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5173 = 1102357670476LLU;
	uint64_t x5174 = 6LLU;
	int64_t x5175 = INT64_MAX;
	volatile int8_t x5176 = -8;
	uint64_t t96 = 17LLU;

	t96 = ((x5173>>x5174)/(x5175^x5176));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5201 = INT32_MAX;
	uint8_t x5203 = UINT8_MAX;
	uint8_t x5204 = 119U;
	int32_t t97 = 0;

	t97 = ((x5201>>x5202)/(x5203^x5204));

	if (t97 != 246723) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5217 = 2827087519LLU;
	uint8_t x5218 = 30U;
	int64_t x5219 = -1LL;
	int32_t x5220 = 11495;
	volatile uint64_t t98 = 12138110LLU;

	t98 = ((x5217>>x5218)/(x5219^x5220));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x5241 = 12895U;
	uint8_t x5242 = 0U;
	volatile int8_t x5243 = INT8_MIN;
	uint32_t x5244 = 68984U;
	static volatile uint32_t t99 = 100402304U;

	t99 = ((x5241>>x5242)/(x5243^x5244));

	if (t99 != 0U) { NG(); } else { ; }
	
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

