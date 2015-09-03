#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 45073LLU;
uint16_t x178 = 32U;
volatile int8_t x188 = -1;
uint8_t x286 = 3U;
static int8_t x348 = 11;
static volatile int32_t t6 = -9793;
volatile uint32_t t7 = 7374U;
uint64_t t8 = 119LLU;
uint16_t x794 = 2U;
volatile uint16_t x795 = UINT16_MAX;
uint64_t x1129 = 146096305905LLU;
static uint8_t x1130 = 0U;
int8_t x1131 = -1;
uint32_t x1229 = 26U;
uint8_t x1287 = UINT8_MAX;
volatile uint32_t x1449 = UINT32_MAX;
int16_t x1479 = 0;
uint16_t x1481 = UINT16_MAX;
uint8_t x1810 = 2U;
static volatile uint32_t t24 = 22305573U;
uint32_t x1941 = 55U;
volatile int64_t t25 = -2747852367213348LL;
int64_t x2193 = 3315623451833769LL;
int8_t x2195 = INT8_MIN;
static int8_t x2196 = INT8_MIN;
int8_t x2234 = 0;
uint8_t x2241 = 97U;
int32_t x2255 = -51890;
int32_t x2380 = -133127792;
uint64_t x2581 = 23258978744732LLU;
uint32_t x2754 = 0U;
volatile int8_t x2774 = 2;
int16_t x2825 = INT16_MAX;
volatile uint32_t x2873 = 418298U;
int64_t x2876 = INT64_MIN;
uint64_t x2887 = 1326LLU;
uint16_t x2977 = 2499U;
uint64_t x2979 = 1642834328499LLU;
uint16_t x3046 = 2U;
uint64_t x3047 = 203368628047733302LLU;
volatile int32_t x3204 = 1;
uint64_t x3205 = 145690583660933LLU;
int16_t x3208 = INT16_MIN;
int8_t x3231 = INT8_MAX;
uint8_t x3282 = 6U;
int8_t x3283 = INT8_MIN;
volatile int32_t t47 = -17;
volatile int32_t t49 = -1;
uint16_t x3593 = 5448U;
static int8_t x3595 = INT8_MIN;
int32_t x3596 = 179383;
int32_t x3728 = INT32_MIN;
static uint32_t t53 = 1839722291U;
int64_t x3817 = 114614398LL;
uint8_t x3939 = 97U;
int64_t t56 = 1650805599524600413LL;
static int8_t x4061 = INT8_MAX;
volatile int8_t x4062 = 0;
int64_t t58 = -277184306896LL;
uint16_t x4410 = 4U;
static int32_t x4476 = -1;
static uint16_t x4497 = 937U;
uint8_t x4498 = 4U;
uint64_t t63 = 674364349LLU;
uint8_t x4604 = 1U;
int32_t x4628 = 95752;
volatile int64_t x4656 = INT64_MIN;
uint64_t x4661 = 276LLU;
int16_t x4663 = 1948;
static int64_t x4664 = INT64_MIN;
static uint8_t x4697 = 2U;
static int8_t x4766 = 2;
static int8_t x4767 = INT8_MAX;
int64_t x4768 = -1LL;
uint32_t x4875 = UINT32_MAX;
volatile uint32_t t72 = 1483882590U;
static uint16_t x4883 = 27U;
static volatile int64_t x4884 = INT64_MAX;
static uint32_t x4995 = 1531U;
int32_t x4996 = INT32_MIN;
volatile uint32_t t76 = 163654U;
static volatile int8_t x5000 = 2;
static volatile uint32_t t77 = 16605U;
uint64_t x5026 = 4LLU;
uint64_t x5057 = 534LLU;
uint16_t x5122 = 0U;
volatile uint32_t t80 = 1052802829U;
int32_t x5127 = INT32_MIN;
int8_t x5331 = -1;
static volatile int16_t x5461 = INT16_MAX;
uint32_t t85 = 29939U;
uint32_t x5487 = UINT32_MAX;
static int8_t x5617 = 1;
int8_t x5710 = 0;
int32_t x5711 = -331944;
volatile uint64_t t89 = 22936LLU;
uint32_t x5829 = UINT32_MAX;
int16_t x5831 = -15843;
int8_t x5832 = INT8_MIN;
static uint8_t x5898 = 6U;
uint64_t t93 = 9562360139LLU;
volatile int16_t x5930 = 1;
int32_t x5931 = INT32_MAX;
static int64_t t94 = 576LL;
uint64_t x6181 = 2640341401277639LLU;
int64_t x6183 = -13LL;
int32_t x6311 = 1907201;
int32_t x6312 = -1;
static uint8_t x6369 = 41U;
static int8_t x6432 = -1;
volatile int32_t t99 = 55882;


void f0(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint32_t x86 = 3U;
	static uint64_t x87 = UINT64_MAX;
	static int32_t x88 = INT32_MIN;

	t0 = ((x85<<x86)+(x87%x88));

	if (t0 != 2147483639LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x177 = 591214727647963260LLU;
	uint16_t x179 = 28U;
	static int64_t x180 = 129023804634991778LL;
	static volatile uint64_t t1 = 12671678037734891LLU;

	t1 = ((x177<<x178)+(x179%x180));

	if (t1 != 10623895296519700508LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x185 = 3;
	int8_t x186 = 1;
	int64_t x187 = INT64_MIN;
	static int64_t t2 = 110633117LL;

	t2 = ((x185<<x186)+(x187%x188));

	if (t2 != 6LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x285 = 1;
	int8_t x287 = 48;
	int16_t x288 = 4;
	volatile int32_t t3 = 1199;

	t3 = ((x285<<x286)+(x287%x288));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x346 = 6;
	volatile int8_t x347 = -1;
	static volatile int32_t t4 = -54346;

	t4 = ((x345<<x346)+(x347%x348));

	if (t4 != 8127) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x485 = 0U;
	uint16_t x486 = 0U;
	volatile int8_t x487 = -2;
	int64_t x488 = -452938088385LL;
	static int64_t t5 = 1041843895013284LL;

	t5 = ((x485<<x486)+(x487%x488));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x493 = 0U;
	int8_t x494 = 0;
	uint16_t x495 = UINT16_MAX;
	int32_t x496 = INT32_MIN;

	t6 = ((x493<<x494)+(x495%x496));

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x685 = INT8_MAX;
	static volatile int8_t x686 = 3;
	uint8_t x687 = 1U;
	uint32_t x688 = 2911066U;

	t7 = ((x685<<x686)+(x687%x688));

	if (t7 != 1017U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x769 = 6LLU;
	uint8_t x770 = 3U;
	static volatile int8_t x771 = INT8_MIN;
	int32_t x772 = -1;

	t8 = ((x769<<x770)+(x771%x772));

	if (t8 != 48LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x793 = 1;
	static int32_t x796 = INT32_MIN;
	int32_t t9 = 1;

	t9 = ((x793<<x794)+(x795%x796));

	if (t9 != 65539) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x949 = UINT16_MAX;
	uint8_t x950 = 2U;
	volatile int16_t x951 = -40;
	int32_t x952 = 1992356;
	volatile int32_t t10 = 37065341;

	t10 = ((x949<<x950)+(x951%x952));

	if (t10 != 262100) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x1057 = 1U;
	static uint16_t x1058 = 1U;
	int32_t x1059 = -1;
	int64_t x1060 = 58427LL;
	int64_t t11 = -273399LL;

	t11 = ((x1057<<x1058)+(x1059%x1060));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1113 = 1;
	uint8_t x1114 = 5U;
	uint64_t x1115 = 2432257231723206LLU;
	volatile int8_t x1116 = -2;
	volatile uint64_t t12 = 895633LLU;

	t12 = ((x1113<<x1114)+(x1115%x1116));

	if (t12 != 2432257231723238LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1132 = INT32_MIN;
	uint64_t t13 = 55156871359636LLU;

	t13 = ((x1129<<x1130)+(x1131%x1132));

	if (t13 != 146096305904LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1230 = 1;
	volatile uint8_t x1231 = 5U;
	uint16_t x1232 = 31U;
	volatile uint32_t t14 = 468245U;

	t14 = ((x1229<<x1230)+(x1231%x1232));

	if (t14 != 57U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1249 = 0U;
	uint8_t x1250 = 0U;
	int32_t x1251 = 1924969;
	volatile int64_t x1252 = 7956401LL;
	int64_t t15 = 51635636913LL;

	t15 = ((x1249<<x1250)+(x1251%x1252));

	if (t15 != 1924969LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1253 = 210U;
	volatile uint16_t x1254 = 0U;
	volatile int64_t x1255 = -1LL;
	uint16_t x1256 = 2752U;
	volatile int64_t t16 = 251LL;

	t16 = ((x1253<<x1254)+(x1255%x1256));

	if (t16 != 209LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1285 = 1987U;
	uint32_t x1286 = 8U;
	int32_t x1288 = 189391;
	volatile int32_t t17 = 31898;

	t17 = ((x1285<<x1286)+(x1287%x1288));

	if (t17 != 508927) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1450 = 1;
	uint8_t x1451 = 39U;
	int8_t x1452 = INT8_MIN;
	uint32_t t18 = 2U;

	t18 = ((x1449<<x1450)+(x1451%x1452));

	if (t18 != 37U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1477 = 58;
	static int8_t x1478 = 8;
	int16_t x1480 = INT16_MIN;
	int32_t t19 = 1920;

	t19 = ((x1477<<x1478)+(x1479%x1480));

	if (t19 != 14848) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x1482 = 2U;
	int32_t x1483 = INT32_MAX;
	int16_t x1484 = INT16_MIN;
	volatile int32_t t20 = -2779824;

	t20 = ((x1481<<x1482)+(x1483%x1484));

	if (t20 != 294907) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1617 = UINT8_MAX;
	volatile uint8_t x1618 = 6U;
	int16_t x1619 = 1;
	int16_t x1620 = INT16_MAX;
	volatile int32_t t21 = 0;

	t21 = ((x1617<<x1618)+(x1619%x1620));

	if (t21 != 16321) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1641 = 330988U;
	static volatile uint16_t x1642 = 2U;
	int8_t x1643 = INT8_MIN;
	uint64_t x1644 = UINT64_MAX;
	uint64_t t22 = 4456526028900228LLU;

	t22 = ((x1641<<x1642)+(x1643%x1644));

	if (t22 != 1323824LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1809 = 1948831451LLU;
	int64_t x1811 = INT64_MIN;
	int8_t x1812 = 1;
	uint64_t t23 = 1448810265606387LLU;

	t23 = ((x1809<<x1810)+(x1811%x1812));

	if (t23 != 7795325804LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1877 = 14U;
	uint8_t x1878 = 1U;
	uint32_t x1879 = UINT32_MAX;
	volatile int16_t x1880 = -146;

	t24 = ((x1877<<x1878)+(x1879%x1880));

	if (t24 != 173U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1942 = 22U;
	volatile int64_t x1943 = -1LL;
	int32_t x1944 = -2524328;

	t25 = ((x1941<<x1942)+(x1943%x1944));

	if (t25 != 230686719LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2133 = 2349U;
	uint8_t x2134 = 28U;
	volatile int8_t x2135 = -1;
	static volatile int16_t x2136 = INT16_MIN;
	volatile uint32_t t26 = 84U;

	t26 = ((x2133<<x2134)+(x2135%x2136));

	if (t26 != 3489660927U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2194 = 2LLU;
	volatile int64_t t27 = -1005423672538482LL;

	t27 = ((x2193<<x2194)+(x2195%x2196));

	if (t27 != 13262493807335076LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2233 = INT16_MAX;
	volatile int8_t x2235 = 0;
	int16_t x2236 = 3;
	int32_t t28 = 128492593;

	t28 = ((x2233<<x2234)+(x2235%x2236));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x2242 = 3U;
	uint32_t x2243 = UINT32_MAX;
	int8_t x2244 = INT8_MIN;
	uint32_t t29 = 201688U;

	t29 = ((x2241<<x2242)+(x2243%x2244));

	if (t29 != 903U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2253 = 530;
	int16_t x2254 = 3;
	uint8_t x2256 = 3U;
	static volatile int32_t t30 = -28158605;

	t30 = ((x2253<<x2254)+(x2255%x2256));

	if (t30 != 4238) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2377 = INT8_MAX;
	volatile uint8_t x2378 = 0U;
	volatile int8_t x2379 = INT8_MIN;
	volatile int32_t t31 = -988;

	t31 = ((x2377<<x2378)+(x2379%x2380));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x2501 = UINT64_MAX;
	static uint16_t x2502 = 10U;
	static uint64_t x2503 = 9110LLU;
	volatile uint16_t x2504 = 43U;
	volatile uint64_t t32 = 187700LLU;

	t32 = ((x2501<<x2502)+(x2503%x2504));

	if (t32 != 18446744073709550629LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2582 = 12;
	int64_t x2583 = -1LL;
	volatile uint32_t x2584 = 3277069U;
	uint64_t t33 = 24492006526508LLU;

	t33 = ((x2581<<x2582)+(x2583%x2584));

	if (t33 != 95268776938422271LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2753 = UINT8_MAX;
	uint16_t x2755 = UINT16_MAX;
	static uint64_t x2756 = 1470763302413LLU;
	volatile uint64_t t34 = 2212657808LLU;

	t34 = ((x2753<<x2754)+(x2755%x2756));

	if (t34 != 65790LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2773 = 4185;
	uint64_t x2775 = 103378525315196LLU;
	volatile int32_t x2776 = INT32_MIN;
	static volatile uint64_t t35 = 7736895LLU;

	t35 = ((x2773<<x2774)+(x2775%x2776));

	if (t35 != 103378525331936LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2826 = 0U;
	int16_t x2827 = -86;
	int32_t x2828 = -53099140;
	volatile int32_t t36 = 1000802607;

	t36 = ((x2825<<x2826)+(x2827%x2828));

	if (t36 != 32681) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2874 = 0U;
	volatile int64_t x2875 = -1LL;
	int64_t t37 = 1422770056900172LL;

	t37 = ((x2873<<x2874)+(x2875%x2876));

	if (t37 != 418297LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2885 = UINT16_MAX;
	static int32_t x2886 = 1;
	int32_t x2888 = INT32_MIN;
	volatile uint64_t t38 = 1485227279025505539LLU;

	t38 = ((x2885<<x2886)+(x2887%x2888));

	if (t38 != 132396LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2901 = UINT16_MAX;
	uint16_t x2902 = 0U;
	int32_t x2903 = 134408126;
	uint32_t x2904 = UINT32_MAX;
	volatile uint32_t t39 = 5620U;

	t39 = ((x2901<<x2902)+(x2903%x2904));

	if (t39 != 134473661U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2978 = 3U;
	int8_t x2980 = INT8_MIN;
	volatile uint64_t t40 = 916911029935318577LLU;

	t40 = ((x2977<<x2978)+(x2979%x2980));

	if (t40 != 1642834348491LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3045 = 857293U;
	uint32_t x3048 = 32994933U;
	static volatile uint64_t t41 = 1535556214724724LLU;

	t41 = ((x3045<<x3046)+(x3047%x3048));

	if (t41 != 6992906LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x3081 = INT8_MAX;
	uint32_t x3082 = 2U;
	volatile uint16_t x3083 = UINT16_MAX;
	int64_t x3084 = -27821299439405LL;
	volatile int64_t t42 = 161LL;

	t42 = ((x3081<<x3082)+(x3083%x3084));

	if (t42 != 66043LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3085 = UINT32_MAX;
	int8_t x3086 = 1;
	int32_t x3087 = INT32_MAX;
	int32_t x3088 = INT32_MIN;
	uint32_t t43 = 966U;

	t43 = ((x3085<<x3086)+(x3087%x3088));

	if (t43 != 2147483645U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x3201 = UINT16_MAX;
	uint64_t x3202 = 12LLU;
	uint16_t x3203 = UINT16_MAX;
	volatile int32_t t44 = 86819;

	t44 = ((x3201<<x3202)+(x3203%x3204));

	if (t44 != 268431360) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3206 = 8;
	uint64_t x3207 = UINT64_MAX;
	uint64_t t45 = 9323680527968404LLU;

	t45 = ((x3205<<x3206)+(x3207%x3208));

	if (t45 != 37296789417231615LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3229 = 9U;
	volatile uint8_t x3230 = 23U;
	volatile int16_t x3232 = 19;
	volatile int32_t t46 = 51552;

	t46 = ((x3229<<x3230)+(x3231%x3232));

	if (t46 != 75497485) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3281 = 0;
	int16_t x3284 = -1;

	t47 = ((x3281<<x3282)+(x3283%x3284));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3301 = 3U;
	uint8_t x3302 = 1U;
	static int64_t x3303 = -1LL;
	uint16_t x3304 = UINT16_MAX;
	int64_t t48 = -15720779324111280LL;

	t48 = ((x3301<<x3302)+(x3303%x3304));

	if (t48 != 5LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3373 = UINT8_MAX;
	uint16_t x3374 = 12U;
	volatile uint16_t x3375 = 7U;
	uint16_t x3376 = 5U;

	t49 = ((x3373<<x3374)+(x3375%x3376));

	if (t49 != 1044482) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3557 = 5U;
	uint8_t x3558 = 3U;
	int64_t x3559 = -1LL;
	uint8_t x3560 = UINT8_MAX;
	volatile int64_t t50 = 9350914595477LL;

	t50 = ((x3557<<x3558)+(x3559%x3560));

	if (t50 != 39LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x3594 = 0LL;
	int32_t t51 = -2447;

	t51 = ((x3593<<x3594)+(x3595%x3596));

	if (t51 != 5320) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3641 = UINT64_MAX;
	int16_t x3642 = 4;
	int8_t x3643 = INT8_MIN;
	int16_t x3644 = INT16_MAX;
	uint64_t t52 = 62LLU;

	t52 = ((x3641<<x3642)+(x3643%x3644));

	if (t52 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3725 = UINT32_MAX;
	static volatile uint8_t x3726 = 3U;
	static uint8_t x3727 = 2U;

	t53 = ((x3725<<x3726)+(x3727%x3728));

	if (t53 != 4294967290U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3818 = 21;
	int8_t x3819 = -1;
	int32_t x3820 = INT32_MAX;
	volatile int64_t t54 = -3930571LL;

	t54 = ((x3817<<x3818)+(x3819%x3820));

	if (t54 != 240363813994495LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3893 = 117341165772700116LLU;
	static uint8_t x3894 = 2U;
	int64_t x3895 = -89786616041LL;
	int64_t x3896 = 50400LL;
	static uint64_t t55 = 6273463722508737LLU;

	t55 = ((x3893<<x3894)+(x3895%x3896));

	if (t55 != 469364663090776423LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3937 = 6U;
	volatile uint16_t x3938 = 17U;
	static int64_t x3940 = 113139018706247LL;

	t56 = ((x3937<<x3938)+(x3939%x3940));

	if (t56 != 786529LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x4063 = 23;
	int64_t x4064 = 7111583255477390LL;
	volatile int64_t t57 = 148073LL;

	t57 = ((x4061<<x4062)+(x4063%x4064));

	if (t57 != 150LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4117 = 102U;
	volatile uint16_t x4118 = 11U;
	int8_t x4119 = 62;
	static volatile int64_t x4120 = -61738520LL;

	t58 = ((x4117<<x4118)+(x4119%x4120));

	if (t58 != 208958LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4161 = 3139;
	uint8_t x4162 = 15U;
	uint16_t x4163 = UINT16_MAX;
	int16_t x4164 = INT16_MIN;
	int32_t t59 = 1983;

	t59 = ((x4161<<x4162)+(x4163%x4164));

	if (t59 != 102891519) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4409 = UINT8_MAX;
	volatile int32_t x4411 = INT32_MAX;
	static uint64_t x4412 = UINT64_MAX;
	uint64_t t60 = 114295745490890LLU;

	t60 = ((x4409<<x4410)+(x4411%x4412));

	if (t60 != 2147487727LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x4473 = 1944U;
	uint8_t x4474 = 7U;
	uint64_t x4475 = 15487257066165LLU;
	uint64_t t61 = 681764513412989205LLU;

	t61 = ((x4473<<x4474)+(x4475%x4476));

	if (t61 != 15487257314997LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x4499 = UINT8_MAX;
	uint8_t x4500 = 16U;
	int32_t t62 = -8606154;

	t62 = ((x4497<<x4498)+(x4499%x4500));

	if (t62 != 15007) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4521 = 68277861465723LL;
	int8_t x4522 = 1;
	uint64_t x4523 = UINT64_MAX;
	int32_t x4524 = 7;

	t63 = ((x4521<<x4522)+(x4523%x4524));

	if (t63 != 136555722931447LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4601 = 1570769LLU;
	static int16_t x4602 = 0;
	int32_t x4603 = INT32_MIN;
	static uint64_t t64 = 287202965032013650LLU;

	t64 = ((x4601<<x4602)+(x4603%x4604));

	if (t64 != 1570769LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x4625 = 1U;
	uint8_t x4626 = 3U;
	int16_t x4627 = INT16_MIN;
	int32_t t65 = -250;

	t65 = ((x4625<<x4626)+(x4627%x4628));

	if (t65 != -32760) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x4653 = 4U;
	int8_t x4654 = 1;
	int16_t x4655 = INT16_MIN;
	volatile int64_t t66 = -15LL;

	t66 = ((x4653<<x4654)+(x4655%x4656));

	if (t66 != -32760LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x4662 = 3;
	static uint64_t t67 = 1848422106669957LLU;

	t67 = ((x4661<<x4662)+(x4663%x4664));

	if (t67 != 4156LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4698 = 2;
	int16_t x4699 = INT16_MAX;
	uint64_t x4700 = 5297482LLU;
	volatile uint64_t t68 = 24302LLU;

	t68 = ((x4697<<x4698)+(x4699%x4700));

	if (t68 != 32775LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4709 = 773089597U;
	volatile uint16_t x4710 = 7U;
	static uint16_t x4711 = UINT16_MAX;
	static volatile int64_t x4712 = INT64_MIN;
	static volatile int64_t t69 = 195LL;

	t69 = ((x4709<<x4710)+(x4711%x4712));

	if (t69 != 171286143LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4761 = 43;
	static volatile int32_t x4762 = 0;
	static int8_t x4763 = -1;
	static uint16_t x4764 = 19U;
	int32_t t70 = -113662690;

	t70 = ((x4761<<x4762)+(x4763%x4764));

	if (t70 != 42) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4765 = UINT16_MAX;
	int64_t t71 = 4146297783LL;

	t71 = ((x4765<<x4766)+(x4767%x4768));

	if (t71 != 262140LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4873 = UINT32_MAX;
	volatile uint64_t x4874 = 23LLU;
	int32_t x4876 = -196;

	t72 = ((x4873<<x4874)+(x4875%x4876));

	if (t72 != 4286578883U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4881 = UINT64_MAX;
	int16_t x4882 = 1;
	volatile uint64_t t73 = 33955LLU;

	t73 = ((x4881<<x4882)+(x4883%x4884));

	if (t73 != 25LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4921 = UINT8_MAX;
	int8_t x4922 = 1;
	volatile int64_t x4923 = 210049003805LL;
	int32_t x4924 = 424291499;
	volatile int64_t t74 = -434811513885LL;

	t74 = ((x4921<<x4922)+(x4923%x4924));

	if (t74 != 24712310LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4953 = 7;
	uint8_t x4954 = 3U;
	int16_t x4955 = INT16_MAX;
	static uint32_t x4956 = UINT32_MAX;
	static uint32_t t75 = 950648U;

	t75 = ((x4953<<x4954)+(x4955%x4956));

	if (t75 != 32823U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4993 = 1;
	static uint8_t x4994 = 2U;

	t76 = ((x4993<<x4994)+(x4995%x4996));

	if (t76 != 1535U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4997 = 952318466U;
	static volatile uint8_t x4998 = 0U;
	int16_t x4999 = INT16_MIN;

	t77 = ((x4997<<x4998)+(x4999%x5000));

	if (t77 != 952318466U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5025 = INT8_MAX;
	volatile int64_t x5027 = INT64_MIN;
	int32_t x5028 = 33590593;
	volatile int64_t t78 = 1LL;

	t78 = ((x5025<<x5026)+(x5027%x5028));

	if (t78 != -33080286LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5058 = 1;
	static int8_t x5059 = 1;
	uint32_t x5060 = 183436242U;
	static volatile uint64_t t79 = 3735LLU;

	t79 = ((x5057<<x5058)+(x5059%x5060));

	if (t79 != 1069LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5121 = 308;
	uint32_t x5123 = 432150197U;
	volatile uint8_t x5124 = UINT8_MAX;

	t80 = ((x5121<<x5122)+(x5123%x5124));

	if (t80 != 475U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5125 = INT64_MAX;
	int8_t x5126 = 0;
	int8_t x5128 = 1;
	static int64_t t81 = INT64_MAX;

	t81 = ((x5125<<x5126)+(x5127%x5128));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x5329 = UINT16_MAX;
	volatile uint8_t x5330 = 15U;
	int64_t x5332 = -43512070508LL;
	int64_t t82 = 4840483LL;

	t82 = ((x5329<<x5330)+(x5331%x5332));

	if (t82 != 2147450879LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5365 = 671U;
	int16_t x5366 = 0;
	int64_t x5367 = 26717760975140159LL;
	int16_t x5368 = 3164;
	volatile int64_t t83 = 4418031700147025LL;

	t83 = ((x5365<<x5366)+(x5367%x5368));

	if (t83 != 1554LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5457 = INT8_MAX;
	static uint32_t x5458 = 2U;
	static int32_t x5459 = INT32_MAX;
	uint16_t x5460 = 259U;
	static int32_t t84 = -21957;

	t84 = ((x5457<<x5458)+(x5459%x5460));

	if (t84 != 677) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x5462 = 0;
	static int16_t x5463 = 3;
	uint32_t x5464 = 1412696165U;

	t85 = ((x5461<<x5462)+(x5463%x5464));

	if (t85 != 32770U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x5485 = 437878U;
	static int8_t x5486 = 2;
	int32_t x5488 = -9318;
	uint32_t t86 = 163U;

	t86 = ((x5485<<x5486)+(x5487%x5488));

	if (t86 != 1760829U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x5589 = 3548U;
	int8_t x5590 = 15;
	uint16_t x5591 = 12798U;
	int8_t x5592 = INT8_MIN;
	volatile int32_t t87 = 70699;

	t87 = ((x5589<<x5590)+(x5591%x5592));

	if (t87 != 116260990) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x5618 = 6;
	int32_t x5619 = INT32_MAX;
	int16_t x5620 = -1;
	static volatile int32_t t88 = -29;

	t88 = ((x5617<<x5618)+(x5619%x5620));

	if (t88 != 64) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5709 = 2381931136LLU;
	volatile uint8_t x5712 = 26U;

	t89 = ((x5709<<x5710)+(x5711%x5712));

	if (t89 != 2381931134LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5830 = 1U;
	uint32_t t90 = 4U;

	t90 = ((x5829<<x5830)+(x5831%x5832));

	if (t90 != 4294967195U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5837 = UINT16_MAX;
	int32_t x5838 = 9;
	uint16_t x5839 = UINT16_MAX;
	int8_t x5840 = -7;
	int32_t t91 = 9601930;

	t91 = ((x5837<<x5838)+(x5839%x5840));

	if (t91 != 33553921) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5885 = 6804899014LLU;
	volatile uint16_t x5886 = 10U;
	volatile uint8_t x5887 = 0U;
	int64_t x5888 = INT64_MAX;
	uint64_t t92 = 126489453289LLU;

	t92 = ((x5885<<x5886)+(x5887%x5888));

	if (t92 != 6968216590336LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5897 = 20;
	int16_t x5899 = -15;
	volatile uint64_t x5900 = 1559417950405061158LLU;

	t93 = ((x5897<<x5898)+(x5899%x5900));

	if (t93 != 1293146619253880143LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5929 = INT16_MAX;
	static int64_t x5932 = INT64_MAX;

	t94 = ((x5929<<x5930)+(x5931%x5932));

	if (t94 != 2147549181LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6182 = 0;
	int32_t x6184 = INT32_MIN;
	volatile uint64_t t95 = 76LLU;

	t95 = ((x6181<<x6182)+(x6183%x6184));

	if (t95 != 2640341401277626LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x6309 = 57519;
	int16_t x6310 = 1;
	volatile int32_t t96 = -1;

	t96 = ((x6309<<x6310)+(x6311%x6312));

	if (t96 != 115038) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x6370 = 4U;
	static int64_t x6371 = 549696681422LL;
	int16_t x6372 = INT16_MIN;
	static int64_t t97 = 38293666763LL;

	t97 = ((x6369<<x6370)+(x6371%x6372));

	if (t97 != 14430LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6389 = 0;
	volatile uint8_t x6390 = 20U;
	volatile uint16_t x6391 = 272U;
	uint8_t x6392 = 63U;
	volatile int32_t t98 = 18119;

	t98 = ((x6389<<x6390)+(x6391%x6392));

	if (t98 != 20) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6429 = 1U;
	static volatile int8_t x6430 = 11;
	int16_t x6431 = 1;

	t99 = ((x6429<<x6430)+(x6431%x6432));

	if (t99 != 2048) { NG(); } else { ; }
	
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

