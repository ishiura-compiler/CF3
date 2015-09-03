#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = -406074507;
int32_t x206 = 875354967;
static int16_t x303 = -31;
int8_t x316 = 3;
volatile int32_t t8 = 13465;
uint16_t x494 = UINT16_MAX;
uint64_t x627 = 3546LLU;
static volatile uint8_t x628 = 13U;
uint32_t x793 = UINT32_MAX;
uint16_t x796 = 7U;
int8_t x975 = -1;
static int32_t x976 = 15;
uint32_t x1089 = 444824U;
static int32_t x1090 = INT32_MIN;
uint64_t x1091 = UINT64_MAX;
static int32_t x1134 = INT32_MIN;
uint64_t t16 = 111842013LLU;
int8_t x1145 = 2;
int32_t t17 = 13015;
uint8_t x1229 = UINT8_MAX;
uint32_t x1232 = 9U;
volatile int32_t t18 = 2002;
static uint8_t x1252 = 1U;
int8_t x1400 = 1;
int32_t t20 = 9907847;
static uint8_t x1422 = UINT8_MAX;
uint16_t x1455 = UINT16_MAX;
int16_t x1692 = 24;
volatile int32_t t27 = 11901;
static uint64_t x1789 = 344356031LLU;
int8_t x2027 = 0;
volatile int32_t t29 = 14052;
uint64_t t30 = 65357316704LLU;
static uint64_t x2059 = 1597915973742889LLU;
volatile int32_t t31 = 2774773;
static int8_t x2066 = -1;
uint32_t t34 = 6U;
int32_t t35 = 56756168;
uint16_t x2677 = 3U;
uint8_t x2815 = 6U;
static uint16_t x3053 = 762U;
int16_t x3054 = INT16_MIN;
volatile int16_t x3273 = 215;
static int32_t x3274 = INT32_MAX;
volatile uint64_t x3362 = UINT64_MAX;
int32_t x3383 = -1;
volatile int32_t t50 = -121325103;
static volatile int16_t x3464 = 8;
static int16_t x3465 = INT16_MAX;
int64_t x3467 = 0LL;
static int8_t x3483 = -1;
volatile int32_t x3484 = 1;
int8_t x3522 = INT8_MIN;
int8_t x3523 = INT8_MIN;
int16_t x3538 = -1;
int32_t t57 = 117;
uint16_t x3584 = 11U;
static volatile uint8_t x3637 = 6U;
int64_t x3640 = 24LL;
static int16_t x3658 = INT16_MIN;
uint16_t x3689 = 117U;
static volatile int8_t x3782 = INT8_MIN;
uint32_t x3853 = 1U;
volatile uint16_t x3856 = 2U;
volatile uint32_t t64 = 586581U;
static volatile int8_t x3920 = 1;
int32_t t65 = 1161443;
volatile uint16_t x4056 = 9U;
static uint8_t x4125 = UINT8_MAX;
volatile int8_t x4128 = 1;
uint32_t x4129 = UINT32_MAX;
int32_t x4130 = INT32_MAX;
static uint32_t x4169 = 74879U;
int32_t x4170 = INT32_MAX;
uint32_t t70 = 7985510U;
int8_t x4267 = 0;
int16_t x4298 = INT16_MAX;
uint16_t x4300 = 0U;
int8_t x4304 = 2;
int64_t t77 = 7275LL;
static int16_t x4567 = INT16_MAX;
uint8_t x4568 = 1U;
static uint32_t x4733 = 5799U;
static int16_t x4749 = 5595;
uint64_t x4750 = 504622LLU;
uint32_t x4777 = 106U;
static uint64_t x4780 = 1LLU;
volatile int32_t t82 = -439896;
static int16_t x4969 = INT16_MAX;
static int16_t x4971 = INT16_MIN;
volatile uint16_t x4972 = 1U;
int32_t t83 = -380;
volatile int32_t t84 = 6;
uint8_t x5176 = 7U;
volatile int32_t x5338 = -1;
uint64_t x5597 = UINT64_MAX;
int16_t x5599 = -1;
int8_t x5600 = 5;
static uint64_t t95 = 16804718258656LLU;
int16_t x5602 = -24;
int32_t x5604 = 15;
static int8_t x5706 = 2;


void f0(void) {
	int8_t x89 = INT8_MAX;
	static uint64_t x90 = 13086LLU;
	volatile int64_t x91 = 2LL;
	static volatile uint16_t x92 = 0U;
	static int32_t t0 = 36717;

	t0 = ((x89^(x90<=x91))<<x92);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x101 = 222798662848090569LLU;
	int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	uint8_t x104 = 1U;
	uint64_t t1 = 25717337493188850LLU;

	t1 = ((x101^(x102<=x103))<<x104);

	if (t1 != 445597325696181136LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x125 = 41;
	volatile uint16_t x126 = 26907U;
	uint64_t x127 = UINT64_MAX;
	static int32_t x128 = 6;

	t2 = ((x125^(x126<=x127))<<x128);

	if (t2 != 2560) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x177 = UINT64_MAX;
	static int16_t x178 = -1;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = 4U;
	uint64_t t3 = 19291472132883610LLU;

	t3 = ((x177^(x178<=x179))<<x180);

	if (t3 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x205 = 221203372637865214LLU;
	int64_t x207 = -1LL;
	int8_t x208 = 45;
	uint64_t t4 = 186409870473LLU;

	t4 = ((x205^(x206<=x207))<<x208);

	if (t4 != 6386033902867185664LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x301 = 422U;
	int32_t x302 = -677008;
	static uint16_t x304 = 0U;
	static int32_t t5 = -63;

	t5 = ((x301^(x302<=x303))<<x304);

	if (t5 != 423) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x313 = UINT32_MAX;
	static int64_t x314 = 1827553301378LL;
	int16_t x315 = -3060;
	volatile uint32_t t6 = 1323778U;

	t6 = ((x313^(x314<=x315))<<x316);

	if (t6 != 4294967288U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x353 = 735693;
	uint8_t x354 = UINT8_MAX;
	volatile int16_t x355 = 4299;
	uint16_t x356 = 2U;
	int32_t t7 = -2980517;

	t7 = ((x353^(x354<=x355))<<x356);

	if (t7 != 2942768) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x365 = 434U;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 0U;
	static uint16_t x368 = 3U;

	t8 = ((x365^(x366<=x367))<<x368);

	if (t8 != 3480) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x493 = 167050LLU;
	int8_t x495 = 0;
	static uint64_t x496 = 0LLU;
	uint64_t t9 = 2128270604LLU;

	t9 = ((x493^(x494<=x495))<<x496);

	if (t9 != 167050LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x625 = UINT16_MAX;
	static volatile int64_t x626 = 137389106794LL;
	int32_t t10 = -8127602;

	t10 = ((x625^(x626<=x627))<<x628);

	if (t10 != 536862720) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x781 = 728313473;
	int64_t x782 = 9089499293840LL;
	int64_t x783 = INT64_MIN;
	int8_t x784 = 0;
	int32_t t11 = -7;

	t11 = ((x781^(x782<=x783))<<x784);

	if (t11 != 728313473) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x794 = INT32_MAX;
	int8_t x795 = INT8_MIN;
	volatile uint32_t t12 = 14068510U;

	t12 = ((x793^(x794<=x795))<<x796);

	if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x973 = UINT64_MAX;
	volatile int32_t x974 = INT32_MIN;
	uint64_t t13 = 1506LLU;

	t13 = ((x973^(x974<=x975))<<x976);

	if (t13 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1045 = 2369761157903090LLU;
	uint8_t x1046 = UINT8_MAX;
	volatile int32_t x1047 = INT32_MIN;
	int32_t x1048 = 3;
	volatile uint64_t t14 = 4529979334LLU;

	t14 = ((x1045^(x1046<=x1047))<<x1048);

	if (t14 != 18958089263224720LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1092 = 0U;
	static uint32_t t15 = 48393446U;

	t15 = ((x1089^(x1090<=x1091))<<x1092);

	if (t15 != 444825U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1133 = UINT64_MAX;
	static int32_t x1135 = INT32_MAX;
	int16_t x1136 = 0;

	t16 = ((x1133^(x1134<=x1135))<<x1136);

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1146 = INT32_MIN;
	int8_t x1147 = INT8_MIN;
	static int16_t x1148 = 1;

	t17 = ((x1145^(x1146<=x1147))<<x1148);

	if (t17 != 6) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1230 = UINT8_MAX;
	uint64_t x1231 = 136949023216LLU;

	t18 = ((x1229^(x1230<=x1231))<<x1232);

	if (t18 != 130048) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1249 = 25U;
	uint64_t x1250 = 2093685781588LLU;
	int32_t x1251 = INT32_MIN;
	int32_t t19 = -4;

	t19 = ((x1249^(x1250<=x1251))<<x1252);

	if (t19 != 48) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1397 = 0U;
	uint32_t x1398 = 10917283U;
	uint16_t x1399 = 0U;

	t20 = ((x1397^(x1398<=x1399))<<x1400);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1421 = 2934089LLU;
	uint32_t x1423 = UINT32_MAX;
	uint8_t x1424 = 6U;
	volatile uint64_t t21 = 8264346LLU;

	t21 = ((x1421^(x1422<=x1423))<<x1424);

	if (t21 != 187781632LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1453 = UINT32_MAX;
	volatile int16_t x1454 = 103;
	int16_t x1456 = 0;
	static uint32_t t22 = 239464881U;

	t22 = ((x1453^(x1454<=x1455))<<x1456);

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1537 = UINT64_MAX;
	int64_t x1538 = 837785742195LL;
	volatile int64_t x1539 = -3979739135637LL;
	static uint8_t x1540 = 0U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x1537^(x1538<=x1539))<<x1540);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1601 = 50984552050LLU;
	int64_t x1602 = INT64_MIN;
	uint64_t x1603 = 5114030484486485446LLU;
	int8_t x1604 = 9;
	uint64_t t24 = 83334986LLU;

	t24 = ((x1601^(x1602<=x1603))<<x1604);

	if (t24 != 26104090649600LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1689 = 2634805814LLU;
	volatile uint64_t x1690 = 15424734LLU;
	static uint32_t x1691 = 43820752U;
	uint64_t t25 = 86LLU;

	t25 = ((x1689^(x1690<=x1691))<<x1692);

	if (t25 != 44204706276311040LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1697 = 117U;
	int32_t x1698 = -7831;
	volatile uint64_t x1699 = 1494147460474670LLU;
	int32_t x1700 = 7;
	uint32_t t26 = 507229842U;

	t26 = ((x1697^(x1698<=x1699))<<x1700);

	if (t26 != 14976U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x1737 = INT16_MAX;
	int16_t x1738 = INT16_MIN;
	static int8_t x1739 = 0;
	uint8_t x1740 = 1U;

	t27 = ((x1737^(x1738<=x1739))<<x1740);

	if (t27 != 65532) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1790 = INT16_MIN;
	int32_t x1791 = -1;
	volatile int8_t x1792 = 12;
	uint64_t t28 = 23LLU;

	t28 = ((x1789^(x1790<=x1791))<<x1792);

	if (t28 != 1410482298880LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2025 = 9;
	static int64_t x2026 = INT64_MIN;
	uint8_t x2028 = 10U;

	t29 = ((x2025^(x2026<=x2027))<<x2028);

	if (t29 != 8192) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2041 = 12882313593703818LLU;
	int64_t x2042 = INT64_MAX;
	static volatile int64_t x2043 = -1LL;
	volatile uint32_t x2044 = 57U;

	t30 = ((x2041^(x2042<=x2043))<<x2044);

	if (t30 != 1441151880758558720LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x2057 = 2;
	uint64_t x2058 = 127597147429342738LLU;
	uint8_t x2060 = 2U;

	t31 = ((x2057^(x2058<=x2059))<<x2060);

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2065 = 36U;
	int8_t x2067 = INT8_MIN;
	volatile uint16_t x2068 = 1U;
	uint32_t t32 = 0U;

	t32 = ((x2065^(x2066<=x2067))<<x2068);

	if (t32 != 72U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2261 = UINT16_MAX;
	int16_t x2262 = INT16_MAX;
	int64_t x2263 = INT64_MIN;
	static int16_t x2264 = 1;
	volatile int32_t t33 = -306311;

	t33 = ((x2261^(x2262<=x2263))<<x2264);

	if (t33 != 131070) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2293 = 359677U;
	int32_t x2294 = -1;
	volatile int32_t x2295 = INT32_MAX;
	volatile uint8_t x2296 = 5U;

	t34 = ((x2293^(x2294<=x2295))<<x2296);

	if (t34 != 11509632U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2405 = 3U;
	uint32_t x2406 = UINT32_MAX;
	volatile uint64_t x2407 = 300803773800LLU;
	uint8_t x2408 = 1U;

	t35 = ((x2405^(x2406<=x2407))<<x2408);

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2678 = 502328LLU;
	int32_t x2679 = INT32_MIN;
	static uint8_t x2680 = 0U;
	volatile int32_t t36 = -1;

	t36 = ((x2677^(x2678<=x2679))<<x2680);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2729 = 26U;
	int8_t x2730 = 0;
	int8_t x2731 = -1;
	uint32_t x2732 = 3U;
	int32_t t37 = 1261;

	t37 = ((x2729^(x2730<=x2731))<<x2732);

	if (t37 != 208) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2793 = 9U;
	int16_t x2794 = INT16_MAX;
	volatile int8_t x2795 = -1;
	uint16_t x2796 = 1U;
	uint32_t t38 = 6658375U;

	t38 = ((x2793^(x2794<=x2795))<<x2796);

	if (t38 != 18U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2813 = UINT8_MAX;
	int64_t x2814 = INT64_MAX;
	uint32_t x2816 = 12U;
	int32_t t39 = 40748;

	t39 = ((x2813^(x2814<=x2815))<<x2816);

	if (t39 != 1044480) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x3029 = 28049884743LL;
	static uint32_t x3030 = 7414484U;
	volatile int64_t x3031 = INT64_MIN;
	static uint8_t x3032 = 2U;
	static volatile int64_t t40 = 10691747314882667LL;

	t40 = ((x3029^(x3030<=x3031))<<x3032);

	if (t40 != 112199538972LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3049 = 72;
	static volatile int16_t x3050 = -1;
	volatile int8_t x3051 = 25;
	int8_t x3052 = 0;
	int32_t t41 = 398923;

	t41 = ((x3049^(x3050<=x3051))<<x3052);

	if (t41 != 73) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x3055 = -1;
	volatile int8_t x3056 = 2;
	static volatile int32_t t42 = -7763646;

	t42 = ((x3053^(x3054<=x3055))<<x3056);

	if (t42 != 3052) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3133 = 260611697;
	int8_t x3134 = INT8_MIN;
	static uint8_t x3135 = UINT8_MAX;
	int8_t x3136 = 0;
	volatile int32_t t43 = -14;

	t43 = ((x3133^(x3134<=x3135))<<x3136);

	if (t43 != 260611696) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3229 = UINT32_MAX;
	int8_t x3230 = INT8_MIN;
	int16_t x3231 = 0;
	int16_t x3232 = 1;
	volatile uint32_t t44 = 1888738U;

	t44 = ((x3229^(x3230<=x3231))<<x3232);

	if (t44 != 4294967292U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3275 = 356U;
	volatile int8_t x3276 = 2;
	int32_t t45 = 1061757747;

	t45 = ((x3273^(x3274<=x3275))<<x3276);

	if (t45 != 860) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x3333 = UINT32_MAX;
	static uint32_t x3334 = 1019058U;
	uint32_t x3335 = 4U;
	uint16_t x3336 = 22U;
	uint32_t t46 = 44U;

	t46 = ((x3333^(x3334<=x3335))<<x3336);

	if (t46 != 4290772992U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3353 = 3U;
	int32_t x3354 = 216513268;
	static uint8_t x3355 = UINT8_MAX;
	uint16_t x3356 = 1U;
	int32_t t47 = 49077788;

	t47 = ((x3353^(x3354<=x3355))<<x3356);

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x3361 = UINT16_MAX;
	int8_t x3363 = 1;
	volatile int8_t x3364 = 3;
	int32_t t48 = 87;

	t48 = ((x3361^(x3362<=x3363))<<x3364);

	if (t48 != 524280) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3381 = UINT64_MAX;
	int16_t x3382 = INT16_MAX;
	static uint16_t x3384 = 13U;
	static volatile uint64_t t49 = 55777438403LLU;

	t49 = ((x3381^(x3382<=x3383))<<x3384);

	if (t49 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3445 = 2;
	uint32_t x3446 = UINT32_MAX;
	int64_t x3447 = INT64_MIN;
	static uint8_t x3448 = 4U;

	t50 = ((x3445^(x3446<=x3447))<<x3448);

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3461 = UINT8_MAX;
	int64_t x3462 = 1243548LL;
	static uint16_t x3463 = UINT16_MAX;
	int32_t t51 = 27;

	t51 = ((x3461^(x3462<=x3463))<<x3464);

	if (t51 != 65280) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3466 = -1;
	int16_t x3468 = 7;
	volatile int32_t t52 = 14118;

	t52 = ((x3465^(x3466<=x3467))<<x3468);

	if (t52 != 4194048) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3481 = 157LLU;
	static int16_t x3482 = INT16_MIN;
	uint64_t t53 = 60523579942803897LLU;

	t53 = ((x3481^(x3482<=x3483))<<x3484);

	if (t53 != 312LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3521 = INT16_MAX;
	static uint16_t x3524 = 0U;
	int32_t t54 = -66514338;

	t54 = ((x3521^(x3522<=x3523))<<x3524);

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3525 = 1U;
	volatile uint32_t x3526 = UINT32_MAX;
	int16_t x3527 = INT16_MIN;
	int8_t x3528 = 0;
	int32_t t55 = -265520;

	t55 = ((x3525^(x3526<=x3527))<<x3528);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3537 = 0;
	int64_t x3539 = -839LL;
	volatile int16_t x3540 = 0;
	int32_t t56 = -2548;

	t56 = ((x3537^(x3538<=x3539))<<x3540);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3561 = 0;
	int64_t x3562 = INT64_MAX;
	volatile uint8_t x3563 = UINT8_MAX;
	int8_t x3564 = 2;

	t57 = ((x3561^(x3562<=x3563))<<x3564);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3581 = 39U;
	int8_t x3582 = INT8_MIN;
	volatile uint8_t x3583 = 92U;
	int32_t t58 = -449352313;

	t58 = ((x3581^(x3582<=x3583))<<x3584);

	if (t58 != 77824) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3638 = UINT8_MAX;
	static int8_t x3639 = INT8_MIN;
	int32_t t59 = 259657151;

	t59 = ((x3637^(x3638<=x3639))<<x3640);

	if (t59 != 100663296) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3657 = UINT32_MAX;
	int32_t x3659 = INT32_MIN;
	uint8_t x3660 = 1U;
	uint32_t t60 = 3924U;

	t60 = ((x3657^(x3658<=x3659))<<x3660);

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3690 = INT32_MIN;
	int32_t x3691 = -1;
	uint8_t x3692 = 3U;
	int32_t t61 = -110180965;

	t61 = ((x3689^(x3690<=x3691))<<x3692);

	if (t61 != 928) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3781 = 341962U;
	int8_t x3783 = INT8_MAX;
	int8_t x3784 = 0;
	static uint32_t t62 = 0U;

	t62 = ((x3781^(x3782<=x3783))<<x3784);

	if (t62 != 341963U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3854 = 1105LLU;
	uint16_t x3855 = 9016U;
	volatile uint32_t t63 = 430907U;

	t63 = ((x3853^(x3854<=x3855))<<x3856);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3913 = 52U;
	int64_t x3914 = INT64_MIN;
	static int32_t x3915 = INT32_MIN;
	uint16_t x3916 = 27U;

	t64 = ((x3913^(x3914<=x3915))<<x3916);

	if (t64 != 2818572288U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x3917 = 0U;
	static uint64_t x3918 = 50310784LLU;
	static int8_t x3919 = INT8_MIN;

	t65 = ((x3917^(x3918<=x3919))<<x3920);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4025 = INT8_MAX;
	int8_t x4026 = INT8_MAX;
	int8_t x4027 = INT8_MIN;
	int8_t x4028 = 15;
	static int32_t t66 = 23;

	t66 = ((x4025^(x4026<=x4027))<<x4028);

	if (t66 != 4161536) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4053 = 40212647535253LLU;
	static int16_t x4054 = 9128;
	int16_t x4055 = 3929;
	volatile uint64_t t67 = 1306509881952381LLU;

	t67 = ((x4053^(x4054<=x4055))<<x4056);

	if (t67 != 20588875538049536LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4126 = INT16_MIN;
	uint32_t x4127 = 30589U;
	static int32_t t68 = 862;

	t68 = ((x4125^(x4126<=x4127))<<x4128);

	if (t68 != 510) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x4131 = 0U;
	uint8_t x4132 = 4U;
	static volatile uint32_t t69 = 844307795U;

	t69 = ((x4129^(x4130<=x4131))<<x4132);

	if (t69 != 4294967280U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x4171 = INT8_MIN;
	uint16_t x4172 = 0U;

	t70 = ((x4169^(x4170<=x4171))<<x4172);

	if (t70 != 74879U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4213 = UINT32_MAX;
	int8_t x4214 = INT8_MIN;
	int32_t x4215 = -447101;
	uint8_t x4216 = 4U;
	static uint32_t t71 = 119726U;

	t71 = ((x4213^(x4214<=x4215))<<x4216);

	if (t71 != 4294967280U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4265 = INT8_MAX;
	volatile uint16_t x4266 = 1189U;
	volatile int32_t x4268 = 1;
	int32_t t72 = 14554333;

	t72 = ((x4265^(x4266<=x4267))<<x4268);

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4269 = UINT8_MAX;
	uint8_t x4270 = UINT8_MAX;
	static int16_t x4271 = 1743;
	uint8_t x4272 = 5U;
	int32_t t73 = 443502110;

	t73 = ((x4269^(x4270<=x4271))<<x4272);

	if (t73 != 8128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x4297 = 55;
	volatile uint8_t x4299 = UINT8_MAX;
	static volatile int32_t t74 = 1015;

	t74 = ((x4297^(x4298<=x4299))<<x4300);

	if (t74 != 55) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4301 = UINT8_MAX;
	int64_t x4302 = -10728364LL;
	int8_t x4303 = INT8_MIN;
	int32_t t75 = -13906188;

	t75 = ((x4301^(x4302<=x4303))<<x4304);

	if (t75 != 1016) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4337 = 2LL;
	int64_t x4338 = -1LL;
	int16_t x4339 = INT16_MIN;
	static int8_t x4340 = 36;
	static int64_t t76 = -1182930519752424LL;

	t76 = ((x4337^(x4338<=x4339))<<x4340);

	if (t76 != 137438953472LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x4561 = 214LL;
	volatile uint64_t x4562 = UINT64_MAX;
	static volatile int16_t x4563 = 34;
	static int8_t x4564 = 1;

	t77 = ((x4561^(x4562<=x4563))<<x4564);

	if (t77 != 428LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4565 = 5299U;
	int8_t x4566 = 0;
	static volatile uint32_t t78 = 219289781U;

	t78 = ((x4565^(x4566<=x4567))<<x4568);

	if (t78 != 10596U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4734 = INT64_MAX;
	volatile uint32_t x4735 = 213766570U;
	uint64_t x4736 = 2LLU;
	uint32_t t79 = 263U;

	t79 = ((x4733^(x4734<=x4735))<<x4736);

	if (t79 != 23196U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4751 = -1;
	int8_t x4752 = 3;
	int32_t t80 = -186321462;

	t80 = ((x4749^(x4750<=x4751))<<x4752);

	if (t80 != 44752) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4778 = INT16_MIN;
	volatile uint16_t x4779 = 305U;
	static uint32_t t81 = 25698339U;

	t81 = ((x4777^(x4778<=x4779))<<x4780);

	if (t81 != 214U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4861 = 0U;
	uint32_t x4862 = 30U;
	static int8_t x4863 = 27;
	static int8_t x4864 = 2;

	t82 = ((x4861^(x4862<=x4863))<<x4864);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x4970 = 20685U;

	t83 = ((x4969^(x4970<=x4971))<<x4972);

	if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x5073 = 7U;
	uint16_t x5074 = UINT16_MAX;
	static int16_t x5075 = INT16_MAX;
	uint64_t x5076 = 0LLU;

	t84 = ((x5073^(x5074<=x5075))<<x5076);

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5085 = 1U;
	int8_t x5086 = -1;
	uint64_t x5087 = 675268LLU;
	volatile uint8_t x5088 = 2U;
	int32_t t85 = 323819;

	t85 = ((x5085^(x5086<=x5087))<<x5088);

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5113 = UINT8_MAX;
	int64_t x5114 = 7836638301827424LL;
	static uint8_t x5115 = 5U;
	static int8_t x5116 = 10;
	int32_t t86 = -416356;

	t86 = ((x5113^(x5114<=x5115))<<x5116);

	if (t86 != 261120) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5121 = 62U;
	int32_t x5122 = INT32_MIN;
	static uint64_t x5123 = UINT64_MAX;
	volatile uint16_t x5124 = 12U;
	volatile int32_t t87 = 492764;

	t87 = ((x5121^(x5122<=x5123))<<x5124);

	if (t87 != 258048) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5153 = 6369;
	int64_t x5154 = INT64_MAX;
	uint64_t x5155 = 452490358656322LLU;
	int8_t x5156 = 1;
	volatile int32_t t88 = 25845;

	t88 = ((x5153^(x5154<=x5155))<<x5156);

	if (t88 != 12738) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5173 = 83U;
	int8_t x5174 = INT8_MIN;
	int16_t x5175 = -1;
	int32_t t89 = 26;

	t89 = ((x5173^(x5174<=x5175))<<x5176);

	if (t89 != 10496) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5189 = 128824U;
	uint32_t x5190 = 23573U;
	static int64_t x5191 = -1LL;
	uint8_t x5192 = 0U;
	uint32_t t90 = 5308U;

	t90 = ((x5189^(x5190<=x5191))<<x5192);

	if (t90 != 128824U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5321 = 675614547;
	uint64_t x5322 = 135LLU;
	volatile int8_t x5323 = -2;
	uint16_t x5324 = 1U;
	static volatile int32_t t91 = -32;

	t91 = ((x5321^(x5322<=x5323))<<x5324);

	if (t91 != 1351229092) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5337 = 83LLU;
	int8_t x5339 = INT8_MIN;
	uint8_t x5340 = 30U;
	uint64_t t92 = 5378452LLU;

	t92 = ((x5337^(x5338<=x5339))<<x5340);

	if (t92 != 89120571392LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5397 = 0U;
	int32_t x5398 = -1;
	int8_t x5399 = -1;
	volatile uint8_t x5400 = 1U;
	int32_t t93 = -11984909;

	t93 = ((x5397^(x5398<=x5399))<<x5400);

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5401 = 3U;
	uint16_t x5402 = 858U;
	uint8_t x5403 = 0U;
	int8_t x5404 = 5;
	int32_t t94 = 0;

	t94 = ((x5401^(x5402<=x5403))<<x5404);

	if (t94 != 96) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x5598 = -2LL;

	t95 = ((x5597^(x5598<=x5599))<<x5600);

	if (t95 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x5601 = 42953630363LLU;
	volatile uint64_t x5603 = 138225771668908LLU;
	volatile uint64_t t96 = 12LLU;

	t96 = ((x5601^(x5602<=x5603))<<x5604);

	if (t96 != 1407504559734784LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5705 = 0LL;
	int32_t x5707 = INT32_MIN;
	int8_t x5708 = 15;
	int64_t t97 = 125495LL;

	t97 = ((x5705^(x5706<=x5707))<<x5708);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5729 = 28185U;
	uint8_t x5730 = 16U;
	static int32_t x5731 = 1278775;
	uint16_t x5732 = 4U;
	uint32_t t98 = 30U;

	t98 = ((x5729^(x5730<=x5731))<<x5732);

	if (t98 != 450944U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5769 = INT16_MAX;
	static int32_t x5770 = -1;
	uint64_t x5771 = 131621LLU;
	static int8_t x5772 = 6;
	volatile int32_t t99 = 31;

	t99 = ((x5769^(x5770<=x5771))<<x5772);

	if (t99 != 2097088) { NG(); } else { ; }
	
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

