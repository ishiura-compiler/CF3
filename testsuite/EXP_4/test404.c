#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 476244318LLU;
volatile uint32_t x239 = 0U;
volatile int64_t x272 = INT64_MIN;
int8_t x345 = -51;
volatile uint64_t t3 = 902384714425841424LLU;
int16_t x405 = 15;
static int16_t x408 = -214;
int8_t x553 = INT8_MAX;
uint8_t x631 = 0U;
uint32_t x646 = UINT32_MAX;
int32_t x768 = -1;
uint16_t x830 = 2689U;
int64_t t11 = 6512395LL;
volatile int64_t x1005 = INT64_MIN;
uint32_t x1006 = UINT32_MAX;
static uint32_t x1007 = 115626U;
int8_t x1017 = INT8_MIN;
int32_t t13 = -255589;
volatile int8_t x1051 = -1;
uint8_t x1057 = 0U;
int16_t x1058 = 73;
static int8_t x1059 = 0;
volatile int64_t x1060 = -4037799695LL;
uint8_t x1094 = UINT8_MAX;
int16_t x1191 = -1;
int32_t x1406 = 220;
volatile uint8_t x1458 = UINT8_MAX;
volatile int32_t t21 = -12;
volatile int64_t x1679 = -1LL;
uint8_t x1719 = 0U;
static volatile uint16_t x1720 = 31U;
static volatile uint64_t t24 = 14349234LLU;
uint32_t x1745 = 39U;
uint16_t x1858 = UINT16_MAX;
int64_t x1888 = 0LL;
volatile uint32_t t28 = 3749U;
uint32_t x2251 = UINT32_MAX;
uint32_t x2252 = UINT32_MAX;
int32_t t33 = -256;
volatile uint32_t t34 = 6954976U;
static int32_t x2757 = INT32_MIN;
int64_t x2760 = -1LL;
uint32_t x2809 = 272475178U;
volatile uint8_t x2810 = 0U;
static uint16_t x2846 = 7U;
int32_t x3188 = INT32_MIN;
uint64_t x3190 = 10562268624086LLU;
static int32_t x3351 = -3584;
int32_t x3352 = 0;
uint32_t t44 = 1270599190U;
static volatile int16_t x3421 = -1;
static int64_t x3422 = 29266655630LL;
volatile uint8_t x3461 = 1U;
int16_t x3464 = 1;
volatile uint64_t t48 = 3LLU;
int8_t x3763 = 0;
volatile int32_t t52 = 9118;
int64_t x3946 = INT64_MAX;
uint32_t x3993 = 1612933449U;
volatile uint64_t x4290 = 17LLU;
volatile uint64_t t58 = 8676405887473588786LLU;
static volatile int8_t x4429 = 14;
int8_t x4737 = INT8_MIN;
int16_t x4740 = 0;
int8_t x4792 = INT8_MIN;
static uint32_t t63 = 271698062U;
int8_t x4925 = INT8_MAX;
volatile int16_t x4927 = 1103;
uint8_t x4928 = 0U;
volatile int32_t t65 = 2506;
volatile uint64_t x5485 = 1307167LLU;
volatile int8_t x5488 = 0;
volatile uint64_t t67 = 10858705242824LLU;
volatile uint16_t x5737 = 0U;
int64_t x5738 = 2789727LL;
volatile int16_t x5857 = -3;
uint8_t x5882 = UINT8_MAX;
static int32_t t73 = -118784;
volatile int32_t x5977 = INT32_MAX;
uint64_t x5979 = 254872029416LLU;
static int16_t x5980 = 0;
int64_t x6159 = -1LL;
volatile uint64_t t76 = 21LLU;
uint8_t x6186 = 78U;
int32_t x6187 = INT32_MIN;
static volatile uint8_t x6188 = 0U;
int64_t x6261 = INT64_MIN;
static int32_t x6317 = -1;
int64_t x6319 = -1LL;
volatile uint32_t x6329 = UINT32_MAX;
int8_t x6331 = -1;
int16_t x6332 = -1;
int8_t x6385 = 12;
static uint32_t x6388 = 0U;
uint64_t x6436 = UINT64_MAX;
int32_t x6496 = 23;
uint32_t x6515 = UINT32_MAX;
uint32_t x6516 = UINT32_MAX;
volatile int32_t x6525 = INT32_MIN;
volatile int32_t x6655 = INT32_MAX;
uint64_t x6662 = UINT64_MAX;
volatile int8_t x6663 = 0;
int64_t x6664 = INT64_MAX;
int16_t x6710 = 109;
uint64_t x6958 = 315LLU;
int64_t x6981 = -243518074488317LL;
int64_t x7008 = -2LL;
volatile uint8_t x7075 = 0U;
static uint32_t x7078 = 190091U;
int16_t x7092 = 0;
volatile int32_t t97 = 1137535;


void f0(void) {
	int32_t x17 = INT32_MAX;
	uint64_t x18 = UINT64_MAX;
	static uint64_t x19 = UINT64_MAX;
	int16_t x20 = -1;

	t0 = (x17+(x18<<(x19*x20)));

	if (t0 != 2147483645LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x237 = -1LL;
	volatile uint32_t x238 = 408500633U;
	static uint64_t x240 = 26622722235315774LLU;
	static int64_t t1 = 1666LL;

	t1 = (x237+(x238<<(x239*x240)));

	if (t1 != 408500632LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x269 = 2652190250194LLU;
	int64_t x270 = INT64_MAX;
	volatile uint32_t x271 = 0U;
	volatile uint64_t t2 = 346597896787612LLU;

	t2 = (x269+(x270<<(x271*x272)));

	if (t2 != 9223374689045026001LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x346 = 2479240990259LLU;
	uint32_t x347 = 0U;
	int16_t x348 = -544;

	t3 = (x345+(x346<<(x347*x348)));

	if (t3 != 2479240990208LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x406 = UINT8_MAX;
	int16_t x407 = 0;
	static int32_t t4 = -404703738;

	t4 = (x405+(x406<<(x407*x408)));

	if (t4 != 270) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x509 = -1;
	int64_t x510 = 33626721031472LL;
	static uint64_t x511 = UINT64_MAX;
	static uint8_t x512 = 0U;
	int64_t t5 = 449142668479LL;

	t5 = (x509+(x510<<(x511*x512)));

	if (t5 != 33626721031471LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x554 = 66U;
	int16_t x555 = -1;
	uint32_t x556 = UINT32_MAX;
	int32_t t6 = 42952773;

	t6 = (x553+(x554<<(x555*x556)));

	if (t6 != 259) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x613 = INT32_MIN;
	uint8_t x614 = UINT8_MAX;
	int16_t x615 = 0;
	uint8_t x616 = 10U;
	volatile int32_t t7 = 4603028;

	t7 = (x613+(x614<<(x615*x616)));

	if (t7 != -2147483393) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x629 = -2189;
	uint16_t x630 = 26U;
	int32_t x632 = INT32_MAX;
	volatile int32_t t8 = -1602266;

	t8 = (x629+(x630<<(x631*x632)));

	if (t8 != -2163) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x645 = 1736782452LL;
	int8_t x647 = 0;
	uint16_t x648 = 1U;
	volatile int64_t t9 = -1482786616635889227LL;

	t9 = (x645+(x646<<(x647*x648)));

	if (t9 != 6031749747LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x765 = UINT32_MAX;
	volatile uint32_t x766 = 3414U;
	volatile uint64_t x767 = UINT64_MAX;
	volatile uint32_t t10 = 51411176U;

	t10 = (x765+(x766<<(x767*x768)));

	if (t10 != 6827U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x829 = -1LL;
	int64_t x831 = INT64_MIN;
	int8_t x832 = 0;

	t11 = (x829+(x830<<(x831*x832)));

	if (t11 != 2688LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1008 = INT32_MIN;
	volatile int64_t t12 = 7996658380866052LL;

	t12 = (x1005+(x1006<<(x1007*x1008)));

	if (t12 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1018 = 36U;
	int32_t x1019 = -1;
	static uint32_t x1020 = UINT32_MAX;

	t13 = (x1017+(x1018<<(x1019*x1020)));

	if (t13 != -56) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1041 = -38985347912LL;
	volatile uint16_t x1042 = 455U;
	uint8_t x1043 = 2U;
	static uint8_t x1044 = 8U;
	int64_t t14 = -1498085402LL;

	t14 = (x1041+(x1042<<(x1043*x1044)));

	if (t14 != -38955529032LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1049 = -763;
	int16_t x1050 = INT16_MAX;
	static int32_t x1052 = -1;
	int32_t t15 = -3565;

	t15 = (x1049+(x1050<<(x1051*x1052)));

	if (t15 != 64771) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t t16 = -10;

	t16 = (x1057+(x1058<<(x1059*x1060)));

	if (t16 != 73) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1093 = -47;
	int16_t x1095 = -1;
	static volatile int32_t x1096 = 0;
	static int32_t t17 = 1;

	t17 = (x1093+(x1094<<(x1095*x1096)));

	if (t17 != 208) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1189 = INT64_MIN;
	uint8_t x1190 = UINT8_MAX;
	int64_t x1192 = -1LL;
	int64_t t18 = 163096926LL;

	t18 = (x1189+(x1190<<(x1191*x1192)));

	if (t18 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1257 = UINT8_MAX;
	uint8_t x1258 = 126U;
	volatile int16_t x1259 = 0;
	uint64_t x1260 = UINT64_MAX;
	static int32_t t19 = 10659;

	t19 = (x1257+(x1258<<(x1259*x1260)));

	if (t19 != 381) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1405 = -1LL;
	int8_t x1407 = 0;
	volatile int16_t x1408 = INT16_MAX;
	int64_t t20 = -5590922469LL;

	t20 = (x1405+(x1406<<(x1407*x1408)));

	if (t20 != 219LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1457 = INT8_MIN;
	int8_t x1459 = 0;
	static int8_t x1460 = 35;

	t21 = (x1457+(x1458<<(x1459*x1460)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1493 = 204448739518867781LLU;
	uint8_t x1494 = 0U;
	int16_t x1495 = -5;
	int64_t x1496 = -1LL;
	uint64_t t22 = 513139774685620364LLU;

	t22 = (x1493+(x1494<<(x1495*x1496)));

	if (t22 != 204448739518867781LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x1677 = -1;
	uint8_t x1678 = 0U;
	volatile int8_t x1680 = -1;
	volatile int32_t t23 = 699;

	t23 = (x1677+(x1678<<(x1679*x1680)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1717 = 23681289196242670LLU;
	int64_t x1718 = INT64_MAX;

	t24 = (x1717+(x1718<<(x1719*x1720)));

	if (t24 != 9247053326051018477LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1746 = 12U;
	int32_t x1747 = -1;
	volatile uint64_t x1748 = UINT64_MAX;
	volatile uint32_t t25 = 67489U;

	t25 = (x1745+(x1746<<(x1747*x1748)));

	if (t25 != 63U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1857 = -1LL;
	volatile int64_t x1859 = -1LL;
	int64_t x1860 = -1LL;
	int64_t t26 = -24LL;

	t26 = (x1857+(x1858<<(x1859*x1860)));

	if (t26 != 131069LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1877 = UINT32_MAX;
	int16_t x1878 = 11564;
	volatile int8_t x1879 = 0;
	int8_t x1880 = INT8_MIN;
	static volatile uint32_t t27 = 1430U;

	t27 = (x1877+(x1878<<(x1879*x1880)));

	if (t27 != 11563U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x1885 = 43U;
	int8_t x1886 = INT8_MAX;
	uint16_t x1887 = UINT16_MAX;

	t28 = (x1885+(x1886<<(x1887*x1888)));

	if (t28 != 170U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x2185 = 0;
	int8_t x2186 = 0;
	int8_t x2187 = -3;
	int64_t x2188 = -1LL;
	volatile int32_t t29 = -387071559;

	t29 = (x2185+(x2186<<(x2187*x2188)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2189 = -1;
	static uint32_t x2190 = 6518U;
	int8_t x2191 = -15;
	int64_t x2192 = -1LL;
	static volatile uint32_t t30 = 4176495U;

	t30 = (x2189+(x2190<<(x2191*x2192)));

	if (t30 != 213581823U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x2249 = UINT64_MAX;
	int16_t x2250 = 100;
	volatile uint64_t t31 = 58763346LLU;

	t31 = (x2249+(x2250<<(x2251*x2252)));

	if (t31 != 199LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2353 = UINT64_MAX;
	static int8_t x2354 = INT8_MAX;
	int16_t x2355 = -1;
	volatile int32_t x2356 = -1;
	volatile uint64_t t32 = 101645323LLU;

	t32 = (x2353+(x2354<<(x2355*x2356)));

	if (t32 != 253LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2413 = INT8_MIN;
	volatile int8_t x2414 = 29;
	int16_t x2415 = -10;
	static int16_t x2416 = -1;

	t33 = (x2413+(x2414<<(x2415*x2416)));

	if (t33 != 29568) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x2505 = 3737965U;
	uint8_t x2506 = UINT8_MAX;
	static uint64_t x2507 = UINT64_MAX;
	uint8_t x2508 = 0U;

	t34 = (x2505+(x2506<<(x2507*x2508)));

	if (t34 != 3738220U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2758 = UINT32_MAX;
	static int64_t x2759 = -1LL;
	uint32_t t35 = 114U;

	t35 = (x2757+(x2758<<(x2759*x2760)));

	if (t35 != 2147483646U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2811 = -1;
	int32_t x2812 = -1;
	volatile uint32_t t36 = 92296189U;

	t36 = (x2809+(x2810<<(x2811*x2812)));

	if (t36 != 272475178U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2845 = INT16_MAX;
	int64_t x2847 = -1LL;
	static int8_t x2848 = -1;
	int32_t t37 = -2;

	t37 = (x2845+(x2846<<(x2847*x2848)));

	if (t37 != 32781) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x2897 = UINT16_MAX;
	uint16_t x2898 = 111U;
	static int16_t x2899 = INT16_MIN;
	uint64_t x2900 = 0LLU;
	volatile int32_t t38 = 45008;

	t38 = (x2897+(x2898<<(x2899*x2900)));

	if (t38 != 65646) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3013 = 8;
	int8_t x3014 = INT8_MAX;
	uint8_t x3015 = 0U;
	uint64_t x3016 = 1036208LLU;
	volatile int32_t t39 = 3202;

	t39 = (x3013+(x3014<<(x3015*x3016)));

	if (t39 != 135) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x3069 = INT64_MIN;
	int16_t x3070 = 1973;
	uint64_t x3071 = 0LLU;
	int8_t x3072 = -1;
	static int64_t t40 = 1263993995615133LL;

	t40 = (x3069+(x3070<<(x3071*x3072)));

	if (t40 != -9223372036854773835LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3185 = -37928LL;
	static uint64_t x3186 = 21745LLU;
	int16_t x3187 = 0;
	uint64_t t41 = 896167LLU;

	t41 = (x3185+(x3186<<(x3187*x3188)));

	if (t41 != 18446744073709535433LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x3189 = UINT8_MAX;
	int32_t x3191 = -1;
	uint16_t x3192 = 0U;
	volatile uint64_t t42 = 1853545085889435984LLU;

	t42 = (x3189+(x3190<<(x3191*x3192)));

	if (t42 != 10562268624341LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3265 = 1;
	int64_t x3266 = 3582150189LL;
	int64_t x3267 = -1LL;
	int16_t x3268 = -1;
	int64_t t43 = -3382813LL;

	t43 = (x3265+(x3266<<(x3267*x3268)));

	if (t43 != 7164300379LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x3349 = 0U;
	uint32_t x3350 = 658861027U;

	t44 = (x3349+(x3350<<(x3351*x3352)));

	if (t44 != 658861027U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x3423 = -1LL;
	volatile int8_t x3424 = -1;
	int64_t t45 = -56525403546238LL;

	t45 = (x3421+(x3422<<(x3423*x3424)));

	if (t45 != 58533311259LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3462 = 18331349LLU;
	static volatile uint32_t x3463 = 1U;
	uint64_t t46 = 112LLU;

	t46 = (x3461+(x3462<<(x3463*x3464)));

	if (t46 != 36662699LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3637 = -1;
	volatile uint32_t x3638 = 1509585688U;
	static int16_t x3639 = INT16_MIN;
	static uint16_t x3640 = 0U;
	uint32_t t47 = 44949479U;

	t47 = (x3637+(x3638<<(x3639*x3640)));

	if (t47 != 1509585687U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3705 = 7U;
	static uint64_t x3706 = 9353787042311370LLU;
	int64_t x3707 = -1LL;
	int16_t x3708 = -1;

	t48 = (x3705+(x3706<<(x3707*x3708)));

	if (t48 != 18707574084622747LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x3717 = 81U;
	uint32_t x3718 = 1595U;
	uint32_t x3719 = UINT32_MAX;
	volatile int8_t x3720 = -1;
	uint32_t t49 = 273U;

	t49 = (x3717+(x3718<<(x3719*x3720)));

	if (t49 != 3271U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3761 = 13U;
	int16_t x3762 = 3;
	static int8_t x3764 = -1;
	volatile int32_t t50 = 6;

	t50 = (x3761+(x3762<<(x3763*x3764)));

	if (t50 != 16) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3853 = 1;
	static int32_t x3854 = 14528381;
	uint16_t x3855 = 0U;
	uint64_t x3856 = 312064950747LLU;
	volatile int32_t t51 = 6907690;

	t51 = (x3853+(x3854<<(x3855*x3856)));

	if (t51 != 14528382) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3917 = -1;
	uint8_t x3918 = 1U;
	int16_t x3919 = -14;
	static int32_t x3920 = -1;

	t52 = (x3917+(x3918<<(x3919*x3920)));

	if (t52 != 16383) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3945 = INT8_MIN;
	int32_t x3947 = 0;
	volatile int8_t x3948 = INT8_MIN;
	volatile int64_t t53 = 478LL;

	t53 = (x3945+(x3946<<(x3947*x3948)));

	if (t53 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3953 = INT16_MIN;
	uint8_t x3954 = 1U;
	int64_t x3955 = INT64_MIN;
	static uint64_t x3956 = 2LLU;
	volatile int32_t t54 = 15655288;

	t54 = (x3953+(x3954<<(x3955*x3956)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3994 = INT8_MAX;
	uint8_t x3995 = 0U;
	volatile int8_t x3996 = INT8_MAX;
	volatile uint32_t t55 = 11U;

	t55 = (x3993+(x3994<<(x3995*x3996)));

	if (t55 != 1612933576U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x4113 = INT64_MAX;
	volatile uint64_t x4114 = UINT64_MAX;
	int16_t x4115 = 0;
	int32_t x4116 = INT32_MIN;
	uint64_t t56 = 3322934490754LLU;

	t56 = (x4113+(x4114<<(x4115*x4116)));

	if (t56 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4289 = 48507;
	uint8_t x4291 = 0U;
	int32_t x4292 = INT32_MIN;
	uint64_t t57 = 151985LLU;

	t57 = (x4289+(x4290<<(x4291*x4292)));

	if (t57 != 48524LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x4405 = INT16_MIN;
	static uint64_t x4406 = 32404559LLU;
	static int8_t x4407 = -1;
	int8_t x4408 = -1;

	t58 = (x4405+(x4406<<(x4407*x4408)));

	if (t58 != 64776350LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4430 = UINT64_MAX;
	int8_t x4431 = 0;
	int16_t x4432 = INT16_MAX;
	static volatile uint64_t t59 = 127172350237LLU;

	t59 = (x4429+(x4430<<(x4431*x4432)));

	if (t59 != 13LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x4457 = 118266491700LLU;
	uint64_t x4458 = 23466687375210195LLU;
	volatile int8_t x4459 = 0;
	static volatile int32_t x4460 = INT32_MIN;
	volatile uint64_t t60 = 1442LLU;

	t60 = (x4457+(x4458<<(x4459*x4460)));

	if (t60 != 23466805641701895LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x4485 = -19;
	static volatile uint32_t x4486 = 1006U;
	int32_t x4487 = -15;
	volatile uint64_t x4488 = UINT64_MAX;
	static volatile uint32_t t61 = 385335U;

	t61 = (x4485+(x4486<<(x4487*x4488)));

	if (t61 != 32964589U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x4738 = 15534007U;
	int8_t x4739 = INT8_MAX;
	uint32_t t62 = 81565830U;

	t62 = (x4737+(x4738<<(x4739*x4740)));

	if (t62 != 15533879U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4789 = 160U;
	int8_t x4790 = 14;
	volatile int8_t x4791 = 0;

	t63 = (x4789+(x4790<<(x4791*x4792)));

	if (t63 != 174U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4926 = 1;
	static int32_t t64 = -690;

	t64 = (x4925+(x4926<<(x4927*x4928)));

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x5009 = INT8_MAX;
	int8_t x5010 = 55;
	int64_t x5011 = INT64_MAX;
	uint8_t x5012 = 0U;

	t65 = (x5009+(x5010<<(x5011*x5012)));

	if (t65 != 182) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x5349 = INT8_MIN;
	uint64_t x5350 = 241221435687LLU;
	uint32_t x5351 = 0U;
	int32_t x5352 = 960087046;
	uint64_t t66 = 2225941620509917LLU;

	t66 = (x5349+(x5350<<(x5351*x5352)));

	if (t66 != 241221435559LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x5486 = INT16_MAX;
	int16_t x5487 = -1;

	t67 = (x5485+(x5486<<(x5487*x5488)));

	if (t67 != 1339934LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5549 = -1;
	uint32_t x5550 = UINT32_MAX;
	int16_t x5551 = -1;
	volatile int32_t x5552 = -1;
	static volatile uint32_t t68 = 12704156U;

	t68 = (x5549+(x5550<<(x5551*x5552)));

	if (t68 != 4294967293U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x5621 = UINT64_MAX;
	static uint16_t x5622 = UINT16_MAX;
	volatile int16_t x5623 = -1;
	uint8_t x5624 = 0U;
	uint64_t t69 = 356342LLU;

	t69 = (x5621+(x5622<<(x5623*x5624)));

	if (t69 != 65534LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5739 = -1;
	int32_t x5740 = -1;
	volatile int64_t t70 = 15595446LL;

	t70 = (x5737+(x5738<<(x5739*x5740)));

	if (t70 != 5579454LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x5829 = INT8_MAX;
	int8_t x5830 = 0;
	static int64_t x5831 = -1LL;
	int32_t x5832 = -1;
	volatile int32_t t71 = -45897046;

	t71 = (x5829+(x5830<<(x5831*x5832)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x5858 = UINT8_MAX;
	volatile uint8_t x5859 = 0U;
	volatile int8_t x5860 = -2;
	volatile int32_t t72 = 2011186;

	t72 = (x5857+(x5858<<(x5859*x5860)));

	if (t72 != 252) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5881 = 0U;
	volatile int8_t x5883 = INT8_MIN;
	uint8_t x5884 = 0U;

	t73 = (x5881+(x5882<<(x5883*x5884)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5893 = UINT32_MAX;
	uint64_t x5894 = UINT64_MAX;
	static uint16_t x5895 = 0U;
	volatile int32_t x5896 = INT32_MAX;
	volatile uint64_t t74 = 4640240470150758LLU;

	t74 = (x5893+(x5894<<(x5895*x5896)));

	if (t74 != 4294967294LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x5978 = 0;
	int32_t t75 = INT32_MAX;

	t75 = (x5977+(x5978<<(x5979*x5980)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x6157 = UINT32_MAX;
	uint64_t x6158 = 35122771LLU;
	volatile int32_t x6160 = -1;

	t76 = (x6157+(x6158<<(x6159*x6160)));

	if (t76 != 4365212837LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x6185 = INT32_MIN;
	volatile int32_t t77 = -6381015;

	t77 = (x6185+(x6186<<(x6187*x6188)));

	if (t77 != -2147483570) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x6193 = 3U;
	static uint64_t x6194 = UINT64_MAX;
	uint16_t x6195 = UINT16_MAX;
	static uint32_t x6196 = 0U;
	static uint64_t t78 = 61541117561835285LLU;

	t78 = (x6193+(x6194<<(x6195*x6196)));

	if (t78 != 2LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x6262 = UINT16_MAX;
	static int8_t x6263 = 0;
	volatile uint64_t x6264 = 58923LLU;
	volatile int64_t t79 = 0LL;

	t79 = (x6261+(x6262<<(x6263*x6264)));

	if (t79 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x6289 = INT64_MIN;
	uint16_t x6290 = UINT16_MAX;
	int8_t x6291 = 0;
	int32_t x6292 = INT32_MAX;
	static volatile int64_t t80 = 5966LL;

	t80 = (x6289+(x6290<<(x6291*x6292)));

	if (t80 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x6318 = 0U;
	int64_t x6320 = -1LL;
	static int32_t t81 = -13009;

	t81 = (x6317+(x6318<<(x6319*x6320)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x6330 = 1852360786983489374LLU;
	static volatile uint64_t t82 = 3850445LLU;

	t82 = (x6329+(x6330<<(x6331*x6332)));

	if (t82 != 3704721578261946043LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x6386 = 21U;
	uint16_t x6387 = 2012U;
	int32_t t83 = 22179;

	t83 = (x6385+(x6386<<(x6387*x6388)));

	if (t83 != 33) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x6433 = INT64_MIN;
	static uint64_t x6434 = 3979035551502076714LLU;
	int64_t x6435 = -1LL;
	uint64_t t84 = 2123746LLU;

	t84 = (x6433+(x6434<<(x6435*x6436)));

	if (t84 != 17181443139858929236LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x6493 = 23LLU;
	volatile uint16_t x6494 = 15U;
	uint8_t x6495 = 1U;
	volatile uint64_t t85 = 2957908874051LLU;

	t85 = (x6493+(x6494<<(x6495*x6496)));

	if (t85 != 125829143LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x6513 = -1LL;
	static uint64_t x6514 = 334199105135775537LLU;
	uint64_t t86 = 178932791920997048LLU;

	t86 = (x6513+(x6514<<(x6515*x6516)));

	if (t86 != 668398210271551073LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x6526 = 76U;
	static int16_t x6527 = -1;
	volatile int16_t x6528 = 0;
	uint32_t t87 = 1U;

	t87 = (x6525+(x6526<<(x6527*x6528)));

	if (t87 != 2147483724U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6653 = 0U;
	volatile int8_t x6654 = INT8_MAX;
	volatile uint16_t x6656 = 0U;
	int32_t t88 = 0;

	t88 = (x6653+(x6654<<(x6655*x6656)));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x6661 = UINT16_MAX;
	volatile uint64_t t89 = 41617LLU;

	t89 = (x6661+(x6662<<(x6663*x6664)));

	if (t89 != 65534LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6705 = UINT64_MAX;
	int8_t x6706 = INT8_MAX;
	static int8_t x6707 = 34;
	int32_t x6708 = 0;
	volatile uint64_t t90 = 561396253152253326LLU;

	t90 = (x6705+(x6706<<(x6707*x6708)));

	if (t90 != 126LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x6709 = UINT32_MAX;
	int64_t x6711 = -1LL;
	static volatile int32_t x6712 = -1;
	volatile uint32_t t91 = 10U;

	t91 = (x6709+(x6710<<(x6711*x6712)));

	if (t91 != 217U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x6957 = 1300U;
	static uint8_t x6959 = 0U;
	int16_t x6960 = INT16_MIN;
	uint64_t t92 = 140325889963106LLU;

	t92 = (x6957+(x6958<<(x6959*x6960)));

	if (t92 != 1615LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6982 = INT8_MAX;
	int16_t x6983 = 1;
	volatile int8_t x6984 = 6;
	int64_t t93 = 17015486908LL;

	t93 = (x6981+(x6982<<(x6983*x6984)));

	if (t93 != -243518074480189LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x7005 = 7U;
	uint64_t x7006 = UINT64_MAX;
	volatile int32_t x7007 = -1;
	volatile uint64_t t94 = 420710LLU;

	t94 = (x7005+(x7006<<(x7007*x7008)));

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x7073 = INT64_MIN;
	volatile uint64_t x7074 = 27057179011351565LLU;
	int64_t x7076 = INT64_MIN;
	uint64_t t95 = 7446519LLU;

	t95 = (x7073+(x7074<<(x7075*x7076)));

	if (t95 != 9250429215866127373LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x7077 = -3750LL;
	volatile int32_t x7079 = -1;
	uint64_t x7080 = UINT64_MAX;
	static volatile int64_t t96 = 459670LL;

	t96 = (x7077+(x7078<<(x7079*x7080)));

	if (t96 != 376432LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x7089 = -2273;
	int16_t x7090 = INT16_MAX;
	int8_t x7091 = -3;

	t97 = (x7089+(x7090<<(x7091*x7092)));

	if (t97 != 30494) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x7093 = 0;
	volatile uint32_t x7094 = UINT32_MAX;
	uint32_t x7095 = 0U;
	int8_t x7096 = -8;
	uint32_t t98 = UINT32_MAX;

	t98 = (x7093+(x7094<<(x7095*x7096)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7249 = 5993853U;
	static int8_t x7250 = 1;
	volatile int8_t x7251 = -1;
	int64_t x7252 = -1LL;
	volatile uint32_t t99 = 198U;

	t99 = (x7249+(x7250<<(x7251*x7252)));

	if (t99 != 5993855U) { NG(); } else { ; }
	
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

