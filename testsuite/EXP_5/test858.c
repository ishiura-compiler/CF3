#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -4;
static volatile uint64_t t0 = 10884832251LLU;
uint64_t x196 = 1LLU;
int16_t x273 = 15;
volatile int64_t t2 = 118391331118859LL;
int8_t x384 = INT8_MIN;
int8_t x541 = 0;
int16_t x677 = INT16_MIN;
static int8_t x680 = INT8_MIN;
volatile uint64_t t7 = 41LLU;
static volatile uint32_t x786 = 7U;
int8_t x788 = -1;
int32_t x793 = 6754724;
volatile uint64_t x854 = 3932LLU;
static int32_t x931 = 1;
uint64_t x954 = 1215339665LLU;
int16_t x971 = 43;
volatile uint64_t t15 = 30LLU;
uint64_t x994 = UINT64_MAX;
static volatile uint64_t t16 = 269714208344156LLU;
uint64_t x1022 = 7741597130LLU;
int8_t x1059 = 5;
static int16_t x1151 = 5;
int16_t x1207 = 0;
int32_t x1289 = 72262666;
int16_t x1290 = 782;
int8_t x1291 = 12;
static volatile uint32_t t21 = 226137U;
uint8_t x1305 = 15U;
int64_t x1505 = -1LL;
static int64_t t25 = 16974426692113LL;
int64_t x1657 = -13020LL;
uint8_t x1658 = 52U;
int8_t x1816 = -7;
int16_t x1889 = -628;
uint8_t x1891 = 5U;
int32_t x1892 = -1;
volatile uint16_t x1970 = 0U;
int16_t x1972 = INT16_MAX;
volatile int16_t x2023 = 1;
int8_t x2073 = INT8_MIN;
volatile int8_t x2075 = 25;
int8_t x2076 = INT8_MIN;
int32_t t36 = 3089;
static volatile uint8_t x2098 = UINT8_MAX;
uint16_t x2099 = 15U;
int16_t x2112 = 345;
static volatile uint16_t x2173 = UINT16_MAX;
static int16_t x2202 = 1;
int32_t x2245 = -1;
int64_t x2246 = INT64_MAX;
int16_t x2247 = 0;
int64_t x2372 = INT64_MIN;
static volatile uint32_t t44 = 1900597U;
uint64_t x2714 = 1035817455716025878LLU;
uint32_t x2716 = 1962270U;
static uint64_t t45 = 8705916497975519292LLU;
uint8_t x2755 = 4U;
uint8_t x2774 = 1U;
uint64_t t48 = 3LLU;
volatile int32_t t49 = -331184;
volatile uint8_t x3107 = 0U;
uint64_t t53 = 27LLU;
uint8_t x3538 = UINT8_MAX;
uint8_t x3561 = 6U;
uint64_t x3654 = UINT64_MAX;
int16_t x3655 = 1;
uint8_t x3702 = 13U;
uint64_t x3704 = 1958722LLU;
volatile uint64_t t62 = 2957259923159038767LLU;
uint8_t x3760 = UINT8_MAX;
int32_t x3761 = -9;
int16_t x3762 = INT16_MAX;
static uint8_t x3814 = UINT8_MAX;
volatile int64_t x3969 = INT64_MAX;
int8_t x4433 = INT8_MAX;
volatile uint16_t x4436 = 3409U;
volatile int32_t t69 = 980670236;
int16_t x4578 = INT16_MAX;
int8_t x4580 = 5;
volatile int16_t x4914 = INT16_MAX;
int32_t t73 = 511;
uint64_t x4925 = 88477513939525LLU;
static volatile uint8_t x4927 = 15U;
int64_t x5036 = 102418430885LL;
static volatile int32_t x5153 = INT32_MAX;
volatile uint32_t x5154 = UINT32_MAX;
uint8_t x5402 = UINT8_MAX;
uint8_t x5488 = 7U;
volatile uint64_t t82 = 230131796395LLU;
uint16_t x5582 = 0U;
uint64_t x5729 = 8515805841016800LLU;
volatile int32_t t87 = 15716;
int8_t x5868 = INT8_MIN;
volatile uint32_t x6062 = 1758591U;
int64_t x6220 = -1LL;
volatile uint32_t t93 = 1605238275U;
int8_t x6263 = 1;
static int16_t x6361 = -1;
uint8_t x6510 = 1U;
uint16_t x6511 = 12U;
uint8_t x6515 = 0U;
volatile int64_t x6609 = -1LL;


void f0(void) {
	uint64_t x10 = 53LLU;
	volatile uint32_t x11 = 8U;
	int32_t x12 = 1053;

	t0 = (x9^((x10<<x11)+x12));

	if (t0 != 18446744073709536993LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x193 = 60U;
	int8_t x194 = INT8_MAX;
	int16_t x195 = 5;
	uint64_t t1 = 2206329540LLU;

	t1 = (x193^((x194<<x195)+x196));

	if (t1 != 4061LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x274 = 0;
	uint16_t x275 = 13U;
	volatile int64_t x276 = -18LL;

	t2 = (x273^((x274<<x275)+x276));

	if (t2 != -31LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = 6;
	int32_t t3 = -129808;

	t3 = (x381^((x382<<x383)+x384));

	if (t3 != 4128959) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x417 = -161;
	uint16_t x418 = 351U;
	uint32_t x419 = 1U;
	static int16_t x420 = INT16_MIN;
	int32_t t4 = -28245070;

	t4 = (x417^((x418<<x419)+x420));

	if (t4 != 32225) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x542 = INT16_MAX;
	uint8_t x543 = 0U;
	int8_t x544 = -1;
	volatile int32_t t5 = -537401;

	t5 = (x541^((x542<<x543)+x544));

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x649 = UINT64_MAX;
	uint32_t x650 = UINT32_MAX;
	static uint16_t x651 = 0U;
	static int8_t x652 = 21;
	uint64_t t6 = 2LLU;

	t6 = (x649^((x650<<x651)+x652));

	if (t6 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x678 = UINT64_MAX;
	static int16_t x679 = 5;

	t7 = (x677^((x678<<x679)+x680));

	if (t7 != 32608LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x685 = -1;
	uint32_t x686 = 635U;
	static volatile uint16_t x687 = 15U;
	int32_t x688 = INT32_MIN;
	volatile uint32_t t8 = 512108542U;

	t8 = (x685^((x686<<x687)+x688));

	if (t8 != 2126675967U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x785 = -1LL;
	uint16_t x787 = 4U;
	volatile int64_t t9 = 9363LL;

	t9 = (x785^((x786<<x787)+x788));

	if (t9 != -112LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x794 = UINT8_MAX;
	uint64_t x795 = 18LLU;
	volatile uint32_t x796 = 43U;
	static uint32_t t10 = 334U;

	t10 = (x793^((x794<<x795)+x796));

	if (t10 != 60494223U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x853 = INT64_MIN;
	int32_t x855 = 0;
	static uint16_t x856 = 4U;
	volatile uint64_t t11 = 34866271144042853LLU;

	t11 = (x853^((x854<<x855)+x856));

	if (t11 != 9223372036854779744LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x861 = -24604LL;
	uint16_t x862 = 4U;
	volatile int8_t x863 = 1;
	volatile uint8_t x864 = 1U;
	static volatile int64_t t12 = -895077468704LL;

	t12 = (x861^((x862<<x863)+x864));

	if (t12 != -24595LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x929 = 1759U;
	volatile uint16_t x930 = 4U;
	int16_t x932 = -1;
	volatile uint32_t t13 = 8467713U;

	t13 = (x929^((x930<<x931)+x932));

	if (t13 != 1752U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x953 = -1LL;
	volatile uint16_t x955 = 0U;
	int16_t x956 = INT16_MIN;
	uint64_t t14 = 7606062719514LLU;

	t14 = (x953^((x954<<x955)+x956));

	if (t14 != 18446744072494244718LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x969 = INT32_MAX;
	uint64_t x970 = 15LLU;
	uint8_t x972 = 3U;

	t15 = (x969^((x970<<x971)+x972));

	if (t15 != 131943542816764LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x993 = -1;
	static int8_t x995 = 1;
	int16_t x996 = INT16_MIN;

	t16 = (x993^((x994<<x995)+x996));

	if (t16 != 32769LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1021 = INT32_MIN;
	uint8_t x1023 = 27U;
	volatile int64_t x1024 = INT64_MIN;
	volatile uint64_t t17 = 72775696LLU;

	t17 = (x1021^((x1022<<x1023)+x1024));

	if (t17 != 8184312459511726080LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1057 = INT8_MIN;
	volatile uint64_t x1058 = 4947897274044LLU;
	int64_t x1060 = INT64_MIN;
	uint64_t t18 = 75582716760857069LLU;

	t18 = (x1057^((x1058<<x1059)+x1060));

	if (t18 != 9223213704142006272LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1149 = UINT32_MAX;
	volatile int16_t x1150 = INT16_MAX;
	static int8_t x1152 = INT8_MIN;
	uint32_t t19 = 3959821U;

	t19 = (x1149^((x1150<<x1151)+x1152));

	if (t19 != 4293918879U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1205 = 675873948936426029LL;
	uint8_t x1206 = 6U;
	volatile int16_t x1208 = 50;
	static int64_t t20 = 933904856689015LL;

	t20 = (x1205^((x1206<<x1207)+x1208));

	if (t20 != 675873948936426005LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1292 = 441850428U;

	t21 = (x1289^((x1290<<x1291)+x1292));

	if (t21 != 516447798U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1293 = INT16_MIN;
	uint8_t x1294 = 1U;
	int8_t x1295 = 2;
	int32_t x1296 = INT32_MIN;
	static int32_t t22 = 44;

	t22 = (x1293^((x1294<<x1295)+x1296));

	if (t22 != 2147450884) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1306 = UINT8_MAX;
	uint8_t x1307 = 0U;
	int16_t x1308 = -1;
	volatile int32_t t23 = -42494;

	t23 = (x1305^((x1306<<x1307)+x1308));

	if (t23 != 241) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1473 = -1;
	uint64_t x1474 = 3975409109267700LLU;
	uint32_t x1475 = 52U;
	uint32_t x1476 = UINT32_MAX;
	volatile uint64_t t24 = 153852620868567LLU;

	t24 = (x1473^((x1474<<x1475)+x1476));

	if (t24 != 12736179741908795392LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1506 = 62;
	static uint8_t x1507 = 12U;
	static int16_t x1508 = INT16_MIN;

	t25 = (x1505^((x1506<<x1507)+x1508));

	if (t25 != -221185LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1537 = 1254041;
	static volatile uint8_t x1538 = 29U;
	uint8_t x1539 = 3U;
	int8_t x1540 = -45;
	int32_t t26 = 30;

	t26 = (x1537^((x1538<<x1539)+x1540));

	if (t26 != 1253922) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1659 = 1;
	uint64_t x1660 = 120755916LLU;
	volatile uint64_t t27 = 4199310381801854561LLU;

	t27 = (x1657^((x1658<<x1659)+x1660));

	if (t27 != 18446744073588791824LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1813 = 1762;
	int16_t x1814 = 753;
	int8_t x1815 = 0;
	int32_t t28 = 6040982;

	t28 = (x1813^((x1814<<x1815)+x1816));

	if (t28 != 1032) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1845 = -276416;
	uint32_t x1846 = 7813213U;
	uint8_t x1847 = 1U;
	static int8_t x1848 = -1;
	volatile uint32_t t29 = 0U;

	t29 = (x1845^((x1846<<x1847)+x1848));

	if (t29 != 4279613689U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1885 = INT64_MAX;
	volatile int8_t x1886 = 13;
	uint16_t x1887 = 4U;
	static int16_t x1888 = -1;
	int64_t t30 = -7LL;

	t30 = (x1885^((x1886<<x1887)+x1888));

	if (t30 != 9223372036854775600LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x1890 = 2U;
	volatile uint32_t t31 = 47355343U;

	t31 = (x1889^((x1890<<x1891)+x1892));

	if (t31 != 4294966707U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1969 = 10;
	uint8_t x1971 = 1U;
	static int32_t t32 = -352851;

	t32 = (x1969^((x1970<<x1971)+x1972));

	if (t32 != 32757) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x2021 = 936U;
	static uint64_t x2022 = 4LLU;
	int64_t x2024 = INT64_MIN;
	static volatile uint64_t t33 = 49919809LLU;

	t33 = (x2021^((x2022<<x2023)+x2024));

	if (t33 != 9223372036854776736LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2045 = INT16_MIN;
	uint64_t x2046 = 5993086762LLU;
	static uint8_t x2047 = 5U;
	uint32_t x2048 = UINT32_MAX;
	volatile uint64_t t34 = 375008LLU;

	t34 = (x2045^((x2046<<x2047)+x2048));

	if (t34 != 18446743877635827007LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2074 = 253399123379662LLU;
	static volatile uint64_t t35 = 5LLU;

	t35 = (x2073^((x2074<<x2075)+x2076));

	if (t35 != 1285363677624532992LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2081 = 0;
	static int8_t x2082 = INT8_MAX;
	uint8_t x2083 = 3U;
	static volatile int16_t x2084 = INT16_MAX;

	t36 = (x2081^((x2082<<x2083)+x2084));

	if (t36 != 33783) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2097 = -1LL;
	volatile uint16_t x2100 = 100U;
	volatile int64_t t37 = 21LL;

	t37 = (x2097^((x2098<<x2099)+x2100));

	if (t37 != -8355941LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2109 = UINT8_MAX;
	uint64_t x2110 = 109252302355LLU;
	static int8_t x2111 = 12;
	volatile uint64_t t38 = 726651499129568LLU;

	t38 = (x2109^((x2110<<x2111)+x2112));

	if (t38 != 447497430446502LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x2174 = 4;
	uint16_t x2175 = 4U;
	int32_t x2176 = -1;
	volatile int32_t t39 = -222;

	t39 = (x2173^((x2174<<x2175)+x2176));

	if (t39 != 65472) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2201 = 502601598LLU;
	uint8_t x2203 = 6U;
	int8_t x2204 = -1;
	volatile uint64_t t40 = 159870935LLU;

	t40 = (x2201^((x2202<<x2203)+x2204));

	if (t40 != 502601537LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2248 = -1;
	volatile int64_t t41 = 2047303544LL;

	t41 = (x2245^((x2246<<x2247)+x2248));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2369 = INT8_MAX;
	uint64_t x2370 = UINT64_MAX;
	int64_t x2371 = 2LL;
	volatile uint64_t t42 = 4216LLU;

	t42 = (x2369^((x2370<<x2371)+x2372));

	if (t42 != 9223372036854775683LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x2505 = 65U;
	int8_t x2506 = INT8_MAX;
	uint8_t x2507 = 14U;
	uint32_t x2508 = 3817436U;
	static volatile uint32_t t43 = 5420646U;

	t43 = (x2505^((x2506<<x2507)+x2508));

	if (t43 != 5898141U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x2553 = INT16_MIN;
	volatile int32_t x2554 = 692648184;
	volatile uint16_t x2555 = 1U;
	static uint32_t x2556 = UINT32_MAX;

	t44 = (x2553^((x2554<<x2555)+x2556));

	if (t44 != 2909696495U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2713 = 11;
	static int32_t x2715 = 2;

	t45 = (x2713^((x2714<<x2715)+x2716));

	if (t45 != 4143269822866065789LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2725 = INT64_MAX;
	uint32_t x2726 = 135114U;
	uint8_t x2727 = 7U;
	uint32_t x2728 = 549U;
	int64_t t46 = -1608600373281708LL;

	t46 = (x2725^((x2726<<x2727)+x2728));

	if (t46 != 9223372036837480666LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2753 = 1;
	static volatile uint8_t x2754 = 3U;
	int64_t x2756 = -1LL;
	volatile int64_t t47 = -3487LL;

	t47 = (x2753^((x2754<<x2755)+x2756));

	if (t47 != 46LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2773 = -1LL;
	uint16_t x2775 = 14U;
	uint64_t x2776 = 31681LLU;

	t48 = (x2773^((x2774<<x2775)+x2776));

	if (t48 != 18446744073709503550LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x3089 = 994U;
	volatile int8_t x3090 = 27;
	uint8_t x3091 = 19U;
	static int32_t x3092 = INT32_MIN;

	t49 = (x3089^((x3090<<x3091)+x3092));

	if (t49 != -2133326878) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3105 = 4U;
	uint64_t x3106 = UINT64_MAX;
	int8_t x3108 = 0;
	static volatile uint64_t t50 = 7778710152086751LLU;

	t50 = (x3105^((x3106<<x3107)+x3108));

	if (t50 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3137 = 3U;
	int16_t x3138 = INT16_MAX;
	int8_t x3139 = 9;
	int64_t x3140 = -2LL;
	volatile int64_t t51 = 436449LL;

	t51 = (x3137^((x3138<<x3139)+x3140));

	if (t51 != 16776701LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3253 = 939U;
	static uint16_t x3254 = 2773U;
	static uint8_t x3255 = 0U;
	static uint64_t x3256 = 4238341777LLU;
	uint64_t t52 = 33039234981428578LLU;

	t52 = (x3253^((x3254<<x3255)+x3256));

	if (t52 != 4238344909LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3257 = -1;
	uint8_t x3258 = 31U;
	uint16_t x3259 = 1U;
	uint64_t x3260 = UINT64_MAX;

	t53 = (x3257^((x3258<<x3259)+x3260));

	if (t53 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3369 = 120LLU;
	uint16_t x3370 = UINT16_MAX;
	volatile uint64_t x3371 = 3LLU;
	static int64_t x3372 = -322832483568LL;
	static uint64_t t54 = 26189970944LLU;

	t54 = (x3369^((x3370<<x3371)+x3372));

	if (t54 != 18446743750877592432LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3465 = INT8_MIN;
	static volatile uint32_t x3466 = 102663U;
	uint32_t x3467 = 3U;
	int8_t x3468 = -1;
	volatile uint32_t t55 = 4031U;

	t55 = (x3465^((x3466<<x3467)+x3468));

	if (t55 != 4294145975U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3477 = 1038340LL;
	volatile uint32_t x3478 = 37U;
	uint16_t x3479 = 11U;
	volatile uint32_t x3480 = 14U;
	int64_t t56 = -457690LL;

	t56 = (x3477^((x3478<<x3479)+x3480));

	if (t56 != 978954LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3505 = 249295257U;
	static uint16_t x3506 = 12U;
	uint16_t x3507 = 25U;
	int64_t x3508 = INT64_MIN;
	static int64_t t57 = 24692LL;

	t57 = (x3505^((x3506<<x3507)+x3508));

	if (t57 != -9223372036471262823LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3537 = INT64_MAX;
	volatile uint8_t x3539 = 5U;
	int8_t x3540 = -1;
	volatile int64_t t58 = -47880457482690937LL;

	t58 = (x3537^((x3538<<x3539)+x3540));

	if (t58 != 9223372036854767648LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3562 = UINT32_MAX;
	uint16_t x3563 = 2U;
	uint16_t x3564 = UINT16_MAX;
	volatile uint32_t t59 = 2062U;

	t59 = (x3561^((x3562<<x3563)+x3564));

	if (t59 != 65533U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3617 = 3400986U;
	uint32_t x3618 = 793U;
	uint8_t x3619 = 0U;
	static uint8_t x3620 = 5U;
	volatile uint32_t t60 = 1583253162U;

	t60 = (x3617^((x3618<<x3619)+x3620));

	if (t60 != 3401220U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3653 = 3U;
	int32_t x3656 = -1;
	uint64_t t61 = 13883913158201LLU;

	t61 = (x3653^((x3654<<x3655)+x3656));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x3701 = -1;
	volatile uint8_t x3703 = 0U;

	t62 = (x3701^((x3702<<x3703)+x3704));

	if (t62 != 18446744073707592880LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3757 = 55U;
	int8_t x3758 = INT8_MAX;
	static int8_t x3759 = 0;
	static int32_t t63 = -9159;

	t63 = (x3757^((x3758<<x3759)+x3760));

	if (t63 != 329) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3763 = 12U;
	uint16_t x3764 = 7908U;
	volatile int32_t t64 = -189898144;

	t64 = (x3761^((x3762<<x3763)+x3764));

	if (t64 != -134221549) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3797 = 0LLU;
	static volatile uint64_t x3798 = 4338659354992549LLU;
	static volatile int16_t x3799 = 0;
	volatile uint16_t x3800 = UINT16_MAX;
	uint64_t t65 = 392998353912305046LLU;

	t65 = (x3797^((x3798<<x3799)+x3800));

	if (t65 != 4338659355058084LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3813 = -1LL;
	uint8_t x3815 = 3U;
	uint64_t x3816 = 119012644722113921LLU;
	volatile uint64_t t66 = 407650751084LLU;

	t66 = (x3813^((x3814<<x3815)+x3816));

	if (t66 != 18327731428987435654LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3970 = 457933166591585LLU;
	static uint64_t x3971 = 7LLU;
	uint16_t x3972 = 1U;
	uint64_t t67 = 6928040033055LLU;

	t67 = (x3969^((x3970<<x3971)+x3972));

	if (t67 != 9164756591531052926LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4245 = 1;
	volatile int32_t x4246 = 37752;
	uint8_t x4247 = 3U;
	int32_t x4248 = -3;
	static int32_t t68 = 32407466;

	t68 = (x4245^((x4246<<x4247)+x4248));

	if (t68 != 302012) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x4434 = 1351305;
	uint8_t x4435 = 4U;

	t69 = (x4433^((x4434<<x4435)+x4436));

	if (t69 != 21624222) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4453 = -6359;
	volatile uint8_t x4454 = UINT8_MAX;
	volatile int32_t x4455 = 1;
	static volatile int64_t x4456 = 1LL;
	volatile int64_t t70 = 8LL;

	t70 = (x4453^((x4454<<x4455)+x4456));

	if (t70 != -6442LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x4577 = INT16_MAX;
	volatile uint64_t x4579 = 3LLU;
	volatile int32_t t71 = -130;

	t71 = (x4577^((x4578<<x4579)+x4580));

	if (t71 != 229378) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4805 = 700U;
	static int16_t x4806 = INT16_MAX;
	int64_t x4807 = 7LL;
	int16_t x4808 = 4;
	uint32_t t72 = 137504714U;

	t72 = (x4805^((x4806<<x4807)+x4808));

	if (t72 != 4193592U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x4913 = UINT16_MAX;
	uint16_t x4915 = 0U;
	int16_t x4916 = INT16_MAX;

	t73 = (x4913^((x4914<<x4915)+x4916));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4926 = 30U;
	volatile uint16_t x4928 = 797U;
	uint64_t t74 = 2825493543512462LLU;

	t74 = (x4925^((x4926<<x4927)+x4928));

	if (t74 != 88477513742680LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5033 = INT32_MAX;
	uint8_t x5034 = 16U;
	uint8_t x5035 = 6U;
	int64_t t75 = -502681143216100560LL;

	t75 = (x5033^((x5034<<x5035)+x5036));

	if (t75 != 101592514650LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x5061 = INT8_MIN;
	int64_t x5062 = 0LL;
	static int8_t x5063 = 19;
	uint32_t x5064 = 1921651U;
	volatile int64_t t76 = 17188633130LL;

	t76 = (x5061^((x5062<<x5063)+x5064));

	if (t76 != -1921549LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5065 = -1LL;
	uint64_t x5066 = 598064747LLU;
	uint16_t x5067 = 15U;
	volatile uint16_t x5068 = 3U;
	uint64_t t77 = 1895378085684LLU;

	t77 = (x5065^((x5066<<x5067)+x5068));

	if (t77 != 18446724476323921916LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5155 = 0;
	volatile int8_t x5156 = 2;
	volatile uint32_t t78 = 12786U;

	t78 = (x5153^((x5154<<x5155)+x5156));

	if (t78 != 2147483646U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x5285 = -790413413;
	uint8_t x5286 = 5U;
	int8_t x5287 = 2;
	static volatile uint64_t x5288 = UINT64_MAX;
	uint64_t t79 = 1536LLU;

	t79 = (x5285^((x5286<<x5287)+x5288));

	if (t79 != 18446744072919138184LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5337 = UINT8_MAX;
	static int32_t x5338 = 14561659;
	volatile int32_t x5339 = 1;
	int16_t x5340 = 126;
	int32_t t80 = -77;

	t80 = (x5337^((x5338<<x5339)+x5340));

	if (t80 != 29123467) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x5401 = INT32_MAX;
	int16_t x5403 = 0;
	volatile int32_t x5404 = 0;
	static int32_t t81 = -342037376;

	t81 = (x5401^((x5402<<x5403)+x5404));

	if (t81 != 2147483392) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x5485 = INT16_MIN;
	volatile uint64_t x5486 = 358791LLU;
	volatile uint8_t x5487 = 0U;

	t82 = (x5485^((x5486<<x5487)+x5488));

	if (t82 != 18446744073709222286LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5581 = INT16_MAX;
	static int8_t x5583 = 1;
	static int64_t x5584 = 105534132LL;
	volatile int64_t t83 = -1LL;

	t83 = (x5581^((x5582<<x5583)+x5584));

	if (t83 != 105524555LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5649 = -15;
	uint32_t x5650 = UINT32_MAX;
	uint32_t x5651 = 0U;
	uint8_t x5652 = 2U;
	static uint32_t t84 = 53304764U;

	t84 = (x5649^((x5650<<x5651)+x5652));

	if (t84 != 4294967280U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5685 = -1;
	uint8_t x5686 = UINT8_MAX;
	int8_t x5687 = 3;
	static volatile int64_t x5688 = 62586202353944949LL;
	static int64_t t85 = 7439869415846LL;

	t85 = (x5685^((x5686<<x5687)+x5688));

	if (t85 != -62586202353946990LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5730 = 50U;
	static uint16_t x5731 = 1U;
	uint16_t x5732 = UINT16_MAX;
	uint64_t t86 = 680088964LLU;

	t86 = (x5729^((x5730<<x5731)+x5732));

	if (t86 != 8515805840951171LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5805 = -1;
	uint8_t x5806 = UINT8_MAX;
	volatile uint8_t x5807 = 2U;
	int16_t x5808 = INT16_MIN;

	t87 = (x5805^((x5806<<x5807)+x5808));

	if (t87 != 31747) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x5865 = -1LL;
	uint16_t x5866 = UINT16_MAX;
	int8_t x5867 = 12;
	volatile int64_t t88 = 215052251104LL;

	t88 = (x5865^((x5866<<x5867)+x5868));

	if (t88 != -268431233LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x5897 = INT8_MIN;
	int16_t x5898 = INT16_MAX;
	int16_t x5899 = 0;
	static int8_t x5900 = -3;
	int32_t t89 = 99024087;

	t89 = (x5897^((x5898<<x5899)+x5900));

	if (t89 != -32644) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5981 = INT64_MAX;
	int8_t x5982 = 1;
	static uint16_t x5983 = 3U;
	int16_t x5984 = INT16_MIN;
	int64_t t90 = 898824158572058172LL;

	t90 = (x5981^((x5982<<x5983)+x5984));

	if (t90 != -9223372036854743049LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x6061 = 6766278874895253021LLU;
	uint8_t x6063 = 10U;
	int8_t x6064 = 34;
	uint64_t t91 = 85037670278979404LLU;

	t91 = (x6061^((x6062<<x6063)+x6064));

	if (t91 != 6766278876651422271LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6217 = UINT8_MAX;
	static volatile int8_t x6218 = 29;
	uint8_t x6219 = 20U;
	volatile int64_t t92 = 17995352336972255LL;

	t92 = (x6217^((x6218<<x6219)+x6220));

	if (t92 != 30408448LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x6237 = INT16_MIN;
	uint32_t x6238 = 836808134U;
	uint32_t x6239 = 0U;
	int8_t x6240 = INT8_MIN;

	t93 = (x6237^((x6238<<x6239)+x6240));

	if (t93 != 3458149702U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x6261 = 1;
	uint16_t x6262 = UINT16_MAX;
	int32_t x6264 = 3;
	volatile int32_t t94 = 2103;

	t94 = (x6261^((x6262<<x6263)+x6264));

	if (t94 != 131072) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6362 = 4U;
	int8_t x6363 = 20;
	uint16_t x6364 = 7U;
	volatile int32_t t95 = -648629;

	t95 = (x6361^((x6362<<x6363)+x6364));

	if (t95 != -4194312) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6509 = INT32_MIN;
	int16_t x6512 = -2;
	static volatile int32_t t96 = -341592;

	t96 = (x6509^((x6510<<x6511)+x6512));

	if (t96 != -2147479554) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6513 = INT8_MAX;
	static int8_t x6514 = INT8_MAX;
	static uint16_t x6516 = 28U;
	volatile int32_t t97 = -474891896;

	t97 = (x6513^((x6514<<x6515)+x6516));

	if (t97 != 228) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6565 = -431293353240LL;
	volatile int8_t x6566 = 0;
	int8_t x6567 = 27;
	volatile int64_t x6568 = -29299101807683121LL;
	int64_t t98 = 348LL;

	t98 = (x6565^((x6566<<x6567)+x6568));

	if (t98 != 29298707021851431LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6610 = UINT16_MAX;
	uint8_t x6611 = 2U;
	int16_t x6612 = 5895;
	volatile int64_t t99 = 29447LL;

	t99 = (x6609^((x6610<<x6611)+x6612));

	if (t99 != -268036LL) { NG(); } else { ; }
	
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

