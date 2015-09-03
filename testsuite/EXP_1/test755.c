#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x93 = 1865162202LLU;
volatile uint16_t x141 = 0U;
int8_t x142 = -1;
volatile int16_t x144 = -190;
int32_t t2 = -8111;
static uint32_t x188 = UINT32_MAX;
int16_t x199 = 3;
uint64_t x222 = UINT64_MAX;
int64_t t7 = INT64_MIN;
int64_t x365 = -1LL;
static uint32_t x367 = 6U;
int32_t x398 = INT32_MAX;
int16_t x399 = 3;
static int32_t x473 = INT32_MAX;
volatile int16_t x474 = INT16_MIN;
int32_t x539 = 52;
volatile uint64_t t15 = 15743529478372LLU;
int8_t x668 = 6;
volatile uint64_t t17 = 109523449191265111LLU;
int16_t x858 = -1;
int32_t x859 = 20;
int16_t x956 = 2549;
volatile int64_t t26 = 1030692816965LL;
uint16_t x1055 = 31U;
static int8_t x1125 = -1;
static int64_t x1126 = -1LL;
uint8_t x1128 = 9U;
static uint64_t x1149 = 739192813765389LLU;
uint64_t t31 = 122733001LLU;
uint8_t x1275 = 7U;
uint32_t x1358 = 62888U;
uint8_t x1360 = UINT8_MAX;
static int32_t x1380 = INT32_MAX;
int32_t x1426 = INT32_MAX;
uint32_t x1476 = 73475U;
volatile int64_t t41 = -3LL;
static volatile int16_t x1575 = 26;
static uint32_t t42 = 57733414U;
static uint32_t t43 = 8586U;
uint16_t x1777 = UINT16_MAX;
static uint64_t t45 = 17475603054333LLU;
volatile uint32_t t46 = 125742U;
volatile int32_t t47 = -1687;
static uint32_t x1985 = 63333U;
volatile uint64_t t48 = 8890542508120569083LLU;
int64_t x2017 = INT64_MIN;
int16_t x2044 = INT16_MIN;
uint16_t x2081 = 13U;
int64_t x2161 = INT64_MAX;
uint64_t x2162 = 60453733999280LLU;
int8_t x2252 = INT8_MIN;
int64_t t55 = 219652543LL;
volatile uint32_t x2437 = UINT32_MAX;
static uint32_t t56 = UINT32_MAX;
int32_t x2456 = INT32_MAX;
uint32_t t58 = 638447234U;
uint64_t t60 = 2657010187333LLU;
int32_t x2591 = 1;
int32_t x2630 = 829759;
uint8_t x2631 = 0U;
static int8_t x2666 = INT8_MIN;
static int8_t x2708 = INT8_MAX;
int16_t x2715 = 25;
uint32_t t66 = 156U;
uint16_t x2807 = 2U;
static volatile uint32_t x2808 = UINT32_MAX;
int64_t x3086 = -386197041LL;
int8_t x3088 = INT8_MIN;
int16_t x3111 = 1;
int8_t x3170 = -1;
static uint8_t x3171 = 0U;
static int8_t x3181 = INT8_MAX;
int8_t x3182 = INT8_MIN;
static int64_t x3184 = INT64_MIN;
volatile int64_t x3197 = -177955LL;
int16_t x3199 = 2;
uint64_t x3202 = 1055738376890LLU;
int16_t x3210 = 4;
uint8_t x3211 = 2U;
int64_t t77 = -442401746079LL;
static uint64_t x3425 = 764051534LLU;
uint8_t x3427 = 2U;
int16_t x3469 = 0;
volatile int64_t x3472 = 930486369497240963LL;
volatile int64_t t80 = -3LL;
uint32_t x3661 = UINT32_MAX;
int64_t x3662 = -3207456939554236237LL;
static int64_t x3702 = -1LL;
int8_t x3704 = -31;
int16_t x3752 = INT16_MIN;
static int16_t x3761 = INT16_MIN;
volatile int64_t x3764 = INT64_MAX;
uint8_t x3781 = UINT8_MAX;
uint8_t x3801 = 2U;
static uint8_t x3803 = 0U;
static uint32_t x3887 = 3U;
int64_t x3888 = INT64_MIN;
volatile int32_t t94 = INT32_MAX;
int16_t x3978 = -1;
static int64_t x3980 = INT64_MIN;
int64_t t96 = INT64_MIN;
int16_t x3989 = INT16_MIN;
int32_t t97 = -3809987;
int8_t x4008 = -1;
int64_t x4087 = 7LL;
volatile uint16_t x4088 = 83U;


void f0(void) {
	int32_t x37 = -783;
	int64_t x38 = -1LL;
	uint16_t x39 = 24U;
	volatile int32_t x40 = INT32_MIN;
	int64_t t0 = 848976LL;

	t0 = (((x37%x38)>>x39)+x40);

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x94 = INT8_MAX;
	static uint16_t x95 = 15U;
	int16_t x96 = -1;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = (((x93%x94)>>x95)+x96);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x143 = 3U;

	t2 = (((x141%x142)>>x143)+x144);

	if (t2 != -190) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x185 = 1677U;
	int32_t x186 = -1;
	volatile int8_t x187 = 12;
	uint32_t t3 = UINT32_MAX;

	t3 = (((x185%x186)>>x187)+x188);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x197 = UINT64_MAX;
	static volatile int64_t x198 = -1LL;
	volatile uint8_t x200 = 6U;
	volatile uint64_t t4 = 30315340084LLU;

	t4 = (((x197%x198)>>x199)+x200);

	if (t4 != 6LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x221 = INT16_MAX;
	uint8_t x223 = 11U;
	uint64_t x224 = 1335443582826032LLU;
	static uint64_t t5 = 503002LLU;

	t5 = (((x221%x222)>>x223)+x224);

	if (t5 != 1335443582826047LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x241 = -1387;
	static volatile int8_t x242 = -1;
	int8_t x243 = 2;
	uint8_t x244 = 20U;
	static int32_t t6 = 7;

	t6 = (((x241%x242)>>x243)+x244);

	if (t6 != 20) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	volatile int8_t x267 = 62;
	int64_t x268 = INT64_MIN;

	t7 = (((x265%x266)>>x267)+x268);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x366 = 1U;
	static uint32_t x368 = UINT32_MAX;
	int64_t t8 = 3249381LL;

	t8 = (((x365%x366)>>x367)+x368);

	if (t8 != 4294967295LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x397 = UINT8_MAX;
	volatile uint64_t x400 = 339515545LLU;
	static volatile uint64_t t9 = 178605867124514500LLU;

	t9 = (((x397%x398)>>x399)+x400);

	if (t9 != 339515576LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x457 = 5705959LLU;
	int32_t x458 = -24694;
	static uint8_t x459 = 6U;
	static volatile uint8_t x460 = 4U;
	volatile uint64_t t10 = 5419139022197599164LLU;

	t10 = (((x457%x458)>>x459)+x460);

	if (t10 != 89159LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x475 = 1U;
	int32_t x476 = -1;
	volatile int32_t t11 = 519940289;

	t11 = (((x473%x474)>>x475)+x476);

	if (t11 != 16382) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x489 = 3;
	int64_t x490 = INT64_MIN;
	uint8_t x491 = 2U;
	int32_t x492 = INT32_MAX;
	static volatile int64_t t12 = 91455LL;

	t12 = (((x489%x490)>>x491)+x492);

	if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x513 = 6747220548LLU;
	int32_t x514 = INT32_MAX;
	static uint16_t x515 = 0U;
	static int32_t x516 = INT32_MIN;
	static volatile uint64_t t13 = 1947039517624374962LLU;

	t13 = (((x513%x514)>>x515)+x516);

	if (t13 != 18446744071866837575LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x533 = INT64_MAX;
	int32_t x534 = INT32_MIN;
	int16_t x535 = 5;
	static volatile int32_t x536 = -1;
	volatile int64_t t14 = -343337883844LL;

	t14 = (((x533%x534)>>x535)+x536);

	if (t14 != 67108862LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x537 = 6648034342LLU;
	uint32_t x538 = 175673U;
	static int32_t x540 = INT32_MIN;

	t15 = (((x537%x538)>>x539)+x540);

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x581 = UINT16_MAX;
	uint64_t x582 = 3770181908780338561LLU;
	int16_t x583 = 0;
	int64_t x584 = INT64_MIN;
	volatile uint64_t t16 = 8182593395638826171LLU;

	t16 = (((x581%x582)>>x583)+x584);

	if (t16 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x665 = 14843LLU;
	static int64_t x666 = INT64_MIN;
	int8_t x667 = 1;

	t17 = (((x665%x666)>>x667)+x668);

	if (t17 != 7427LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x673 = INT32_MIN;
	int32_t x674 = INT32_MIN;
	uint16_t x675 = 0U;
	int16_t x676 = -1;
	volatile int32_t t18 = -1;

	t18 = (((x673%x674)>>x675)+x676);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x769 = UINT32_MAX;
	int64_t x770 = INT64_MAX;
	int8_t x771 = 5;
	uint8_t x772 = 103U;
	volatile int64_t t19 = -8108484916650533LL;

	t19 = (((x769%x770)>>x771)+x772);

	if (t19 != 134217830LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x781 = -7;
	static uint64_t x782 = UINT64_MAX;
	uint32_t x783 = 3U;
	uint32_t x784 = 160U;
	volatile uint64_t t20 = 32163458411LLU;

	t20 = (((x781%x782)>>x783)+x784);

	if (t20 != 2305843009213694111LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x857 = 6992817348196518816LLU;
	static volatile uint8_t x860 = 27U;
	static uint64_t t21 = 5312784LLU;

	t21 = (((x857%x858)>>x859)+x860);

	if (t21 != 6668870304322LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x905 = 60;
	int32_t x906 = -3580294;
	volatile uint64_t x907 = 3LLU;
	uint16_t x908 = UINT16_MAX;
	int32_t t22 = -10;

	t22 = (((x905%x906)>>x907)+x908);

	if (t22 != 65542) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x949 = INT32_MAX;
	int8_t x950 = INT8_MAX;
	uint8_t x951 = 6U;
	uint32_t x952 = 17838U;
	volatile uint32_t t23 = 157825U;

	t23 = (((x949%x950)>>x951)+x952);

	if (t23 != 17838U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x953 = 6U;
	uint8_t x954 = 3U;
	int32_t x955 = 0;
	static int32_t t24 = 1485134;

	t24 = (((x953%x954)>>x955)+x956);

	if (t24 != 2549) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x965 = 0;
	uint16_t x966 = UINT16_MAX;
	static uint8_t x967 = 2U;
	volatile int64_t x968 = INT64_MAX;
	int64_t t25 = INT64_MAX;

	t25 = (((x965%x966)>>x967)+x968);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x985 = -1;
	volatile int16_t x986 = 1;
	static uint8_t x987 = 18U;
	int64_t x988 = 5656LL;

	t26 = (((x985%x986)>>x987)+x988);

	if (t26 != 5656LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1053 = UINT32_MAX;
	uint8_t x1054 = UINT8_MAX;
	int64_t x1056 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = (((x1053%x1054)>>x1055)+x1056);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1127 = 49;
	int64_t t28 = 98590LL;

	t28 = (((x1125%x1126)>>x1127)+x1128);

	if (t28 != 9LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1150 = 2;
	static volatile int32_t x1151 = 15;
	static int32_t x1152 = INT32_MIN;
	uint64_t t29 = 0LLU;

	t29 = (((x1149%x1150)>>x1151)+x1152);

	if (t29 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1193 = UINT16_MAX;
	static int32_t x1194 = INT32_MIN;
	int8_t x1195 = 26;
	uint16_t x1196 = UINT16_MAX;
	volatile int32_t t30 = 61;

	t30 = (((x1193%x1194)>>x1195)+x1196);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1241 = UINT64_MAX;
	static uint32_t x1242 = 36U;
	int16_t x1243 = 0;
	uint64_t x1244 = 0LLU;

	t31 = (((x1241%x1242)>>x1243)+x1244);

	if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1273 = 212U;
	static uint32_t x1274 = UINT32_MAX;
	static int8_t x1276 = -14;
	uint32_t t32 = 34010155U;

	t32 = (((x1273%x1274)>>x1275)+x1276);

	if (t32 != 4294967283U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1281 = UINT64_MAX;
	uint8_t x1282 = 2U;
	uint8_t x1283 = 4U;
	uint8_t x1284 = 0U;
	volatile uint64_t t33 = 1126LLU;

	t33 = (((x1281%x1282)>>x1283)+x1284);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1293 = 0;
	uint16_t x1294 = UINT16_MAX;
	static int16_t x1295 = 0;
	static volatile int8_t x1296 = -1;
	static volatile int32_t t34 = -1820825;

	t34 = (((x1293%x1294)>>x1295)+x1296);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1297 = INT8_MAX;
	static int16_t x1298 = 3638;
	int16_t x1299 = 6;
	static uint32_t x1300 = UINT32_MAX;
	volatile uint32_t t35 = 19439U;

	t35 = (((x1297%x1298)>>x1299)+x1300);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1357 = 43U;
	uint8_t x1359 = 1U;
	volatile uint32_t t36 = 638738056U;

	t36 = (((x1357%x1358)>>x1359)+x1360);

	if (t36 != 276U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x1373 = UINT64_MAX;
	uint32_t x1374 = 987548U;
	uint64_t x1375 = 0LLU;
	int64_t x1376 = INT64_MAX;
	volatile uint64_t t37 = 5599298034LLU;

	t37 = (((x1373%x1374)>>x1375)+x1376);

	if (t37 != 9223372036855163614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1377 = 2U;
	uint8_t x1378 = UINT8_MAX;
	uint8_t x1379 = 2U;
	uint32_t t38 = 2297U;

	t38 = (((x1377%x1378)>>x1379)+x1380);

	if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1425 = INT32_MAX;
	static uint8_t x1427 = 20U;
	uint64_t x1428 = 256757LLU;
	static uint64_t t39 = 1125176031424789848LLU;

	t39 = (((x1425%x1426)>>x1427)+x1428);

	if (t39 != 256757LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1473 = 3315U;
	int32_t x1474 = -8067;
	uint8_t x1475 = 7U;
	volatile uint32_t t40 = 79335994U;

	t40 = (((x1473%x1474)>>x1475)+x1476);

	if (t40 != 73500U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1501 = -1;
	int64_t x1502 = -1LL;
	int16_t x1503 = 4;
	static int32_t x1504 = INT32_MAX;

	t41 = (((x1501%x1502)>>x1503)+x1504);

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1573 = 1379U;
	int16_t x1574 = -464;
	int16_t x1576 = INT16_MIN;

	t42 = (((x1573%x1574)>>x1575)+x1576);

	if (t42 != 4294934528U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1701 = 377304743U;
	volatile uint32_t x1702 = UINT32_MAX;
	uint8_t x1703 = 24U;
	volatile int8_t x1704 = 7;

	t43 = (((x1701%x1702)>>x1703)+x1704);

	if (t43 != 29U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1753 = 37U;
	int8_t x1754 = -1;
	int8_t x1755 = 1;
	uint32_t x1756 = 84513556U;
	uint32_t t44 = 27464364U;

	t44 = (((x1753%x1754)>>x1755)+x1756);

	if (t44 != 84513556U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1778 = 4515265599290428LLU;
	volatile int8_t x1779 = 3;
	int32_t x1780 = -24420566;

	t45 = (((x1777%x1778)>>x1779)+x1780);

	if (t45 != 18446744073685139241LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1845 = INT16_MIN;
	volatile uint32_t x1846 = 3U;
	int64_t x1847 = 1LL;
	int32_t x1848 = 213;

	t46 = (((x1845%x1846)>>x1847)+x1848);

	if (t46 != 214U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1869 = UINT16_MAX;
	int16_t x1870 = -1;
	uint16_t x1871 = 1U;
	int16_t x1872 = 1;

	t47 = (((x1869%x1870)>>x1871)+x1872);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1986 = 177072U;
	uint16_t x1987 = 0U;
	static uint64_t x1988 = UINT64_MAX;

	t48 = (((x1985%x1986)>>x1987)+x1988);

	if (t48 != 63332LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2018 = INT64_MIN;
	int8_t x2019 = 0;
	int16_t x2020 = INT16_MIN;
	int64_t t49 = 5312LL;

	t49 = (((x2017%x2018)>>x2019)+x2020);

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2041 = 80393059U;
	int8_t x2042 = INT8_MIN;
	uint8_t x2043 = 1U;
	volatile uint32_t t50 = 1265452991U;

	t50 = (((x2041%x2042)>>x2043)+x2044);

	if (t50 != 40163761U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2082 = INT8_MIN;
	uint16_t x2083 = 1U;
	uint16_t x2084 = 9U;
	int32_t t51 = 0;

	t51 = (((x2081%x2082)>>x2083)+x2084);

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2163 = 29U;
	int16_t x2164 = -1;
	uint64_t t52 = 1234LLU;

	t52 = (((x2161%x2162)>>x2163)+x2164);

	if (t52 != 11723LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2177 = 5483663075701LLU;
	int32_t x2178 = INT32_MAX;
	volatile uint8_t x2179 = 11U;
	int32_t x2180 = -1;
	volatile uint64_t t53 = 20234697760LLU;

	t53 = (((x2177%x2178)>>x2179)+x2180);

	if (t53 != 555333LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2221 = UINT32_MAX;
	static int64_t x2222 = INT64_MIN;
	uint8_t x2223 = 1U;
	static uint32_t x2224 = 38671334U;
	static volatile int64_t t54 = -75390918LL;

	t54 = (((x2221%x2222)>>x2223)+x2224);

	if (t54 != 2186154981LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2249 = INT16_MAX;
	int64_t x2250 = INT64_MAX;
	uint8_t x2251 = 32U;

	t55 = (((x2249%x2250)>>x2251)+x2252);

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2438 = INT8_MIN;
	volatile uint8_t x2439 = 0U;
	int8_t x2440 = INT8_MIN;

	t56 = (((x2437%x2438)>>x2439)+x2440);

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2453 = 2789509202LLU;
	static int32_t x2454 = INT32_MAX;
	uint16_t x2455 = 0U;
	volatile uint64_t t57 = 7LLU;

	t57 = (((x2453%x2454)>>x2455)+x2456);

	if (t57 != 2789509202LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2509 = 44;
	volatile uint32_t x2510 = 25U;
	int8_t x2511 = 1;
	uint16_t x2512 = 159U;

	t58 = (((x2509%x2510)>>x2511)+x2512);

	if (t58 != 168U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2525 = INT32_MAX;
	uint64_t x2526 = UINT64_MAX;
	uint32_t x2527 = 1U;
	volatile uint64_t x2528 = UINT64_MAX;
	uint64_t t59 = 7942962413LLU;

	t59 = (((x2525%x2526)>>x2527)+x2528);

	if (t59 != 1073741822LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2541 = 1;
	static uint64_t x2542 = 7596904693LLU;
	int8_t x2543 = 1;
	volatile int8_t x2544 = INT8_MIN;

	t60 = (((x2541%x2542)>>x2543)+x2544);

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2589 = 448038029LL;
	volatile int64_t x2590 = -1LL;
	int16_t x2592 = -1;
	volatile int64_t t61 = 22919833LL;

	t61 = (((x2589%x2590)>>x2591)+x2592);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2621 = INT64_MAX;
	static uint8_t x2622 = 1U;
	int16_t x2623 = 2;
	int16_t x2624 = INT16_MAX;
	volatile int64_t t62 = 2939390824LL;

	t62 = (((x2621%x2622)>>x2623)+x2624);

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2629 = 119089978925032862LL;
	uint64_t x2632 = 39126754995996961LLU;
	uint64_t t63 = 2696208LLU;

	t63 = (((x2629%x2630)>>x2631)+x2632);

	if (t63 != 39126754996293535LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2665 = INT64_MIN;
	uint32_t x2667 = 12U;
	int64_t x2668 = -624054155502143LL;
	int64_t t64 = 830350741536030893LL;

	t64 = (((x2665%x2666)>>x2667)+x2668);

	if (t64 != -624054155502143LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2705 = 8060U;
	int64_t x2706 = 389561318LL;
	uint32_t x2707 = 45U;
	volatile int64_t t65 = 13615482396LL;

	t65 = (((x2705%x2706)>>x2707)+x2708);

	if (t65 != 127LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2713 = 552240U;
	uint8_t x2714 = 4U;
	static uint8_t x2716 = UINT8_MAX;

	t66 = (((x2713%x2714)>>x2715)+x2716);

	if (t66 != 255U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x2793 = 1967062262840907LLU;
	static volatile int32_t x2794 = INT32_MIN;
	uint32_t x2795 = 4U;
	uint8_t x2796 = 0U;
	volatile uint64_t t67 = 48LLU;

	t67 = (((x2793%x2794)>>x2795)+x2796);

	if (t67 != 122941391427556LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2805 = 54172492;
	int64_t x2806 = INT64_MIN;
	volatile int64_t t68 = 101179958759177820LL;

	t68 = (((x2805%x2806)>>x2807)+x2808);

	if (t68 != 4308510418LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x2845 = 92U;
	volatile int64_t x2846 = -53057191622LL;
	uint8_t x2847 = 3U;
	int16_t x2848 = INT16_MIN;
	int64_t t69 = -124827LL;

	t69 = (((x2845%x2846)>>x2847)+x2848);

	if (t69 != -32757LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x3073 = 125U;
	static int32_t x3074 = -209946;
	int8_t x3075 = 0;
	int8_t x3076 = -63;
	int32_t t70 = 33;

	t70 = (((x3073%x3074)>>x3075)+x3076);

	if (t70 != 62) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3085 = 20U;
	volatile int8_t x3087 = 1;
	int64_t t71 = -1449836172645LL;

	t71 = (((x3085%x3086)>>x3087)+x3088);

	if (t71 != -118LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3109 = 50U;
	uint32_t x3110 = 3U;
	int64_t x3112 = 68997523395055LL;
	int64_t t72 = -2496088644360LL;

	t72 = (((x3109%x3110)>>x3111)+x3112);

	if (t72 != 68997523395056LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x3169 = 0U;
	int32_t x3172 = INT32_MIN;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (((x3169%x3170)>>x3171)+x3172);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3183 = 1U;
	int64_t t74 = 2594453082036948786LL;

	t74 = (((x3181%x3182)>>x3183)+x3184);

	if (t74 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3198 = 1U;
	static uint32_t x3200 = 30510U;
	volatile int64_t t75 = 13LL;

	t75 = (((x3197%x3198)>>x3199)+x3200);

	if (t75 != 30510LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3201 = INT64_MIN;
	static uint8_t x3203 = 11U;
	volatile int8_t x3204 = -3;
	volatile uint64_t t76 = 1334771984945283196LLU;

	t76 = (((x3201%x3202)>>x3203)+x3204);

	if (t76 != 135596772LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x3209 = UINT16_MAX;
	int64_t x3212 = -135424464618069801LL;

	t77 = (((x3209%x3210)>>x3211)+x3212);

	if (t77 != -135424464618069801LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x3365 = 11318606306851008LL;
	int8_t x3366 = INT8_MIN;
	uint8_t x3367 = 28U;
	volatile int16_t x3368 = -43;
	static int64_t t78 = 68602LL;

	t78 = (((x3365%x3366)>>x3367)+x3368);

	if (t78 != -43LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3426 = -6922735634LL;
	int32_t x3428 = INT32_MIN;
	volatile uint64_t t79 = 536453LLU;

	t79 = (((x3425%x3426)>>x3427)+x3428);

	if (t79 != 18446744071753080851LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3470 = 14729U;
	uint8_t x3471 = 5U;

	t80 = (((x3469%x3470)>>x3471)+x3472);

	if (t80 != 930486369497240963LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3613 = INT32_MIN;
	uint64_t x3614 = 23297366101LLU;
	uint16_t x3615 = 20U;
	volatile int16_t x3616 = INT16_MIN;
	volatile uint64_t t81 = 2405LLU;

	t81 = (((x3613%x3614)>>x3615)+x3616);

	if (t81 != 18446744073709540120LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3633 = 119343918U;
	uint8_t x3634 = 45U;
	uint32_t x3635 = 0U;
	int8_t x3636 = -5;
	static uint32_t t82 = 64U;

	t82 = (((x3633%x3634)>>x3635)+x3636);

	if (t82 != 4294967294U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3663 = 21U;
	uint16_t x3664 = 3U;
	volatile int64_t t83 = 1970280LL;

	t83 = (((x3661%x3662)>>x3663)+x3664);

	if (t83 != 2050LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x3701 = INT8_MIN;
	int32_t x3703 = 17;
	static volatile int64_t t84 = 1489660545LL;

	t84 = (((x3701%x3702)>>x3703)+x3704);

	if (t84 != -31LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3749 = 749739234408LLU;
	static volatile int32_t x3750 = 1027;
	static uint8_t x3751 = 2U;
	uint64_t t85 = 77321104319LLU;

	t85 = (((x3749%x3750)>>x3751)+x3752);

	if (t85 != 18446744073709519061LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3753 = -3;
	uint64_t x3754 = 223LLU;
	uint8_t x3755 = 15U;
	int16_t x3756 = INT16_MAX;
	uint64_t t86 = 2502874094379LLU;

	t86 = (((x3753%x3754)>>x3755)+x3756);

	if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3757 = UINT8_MAX;
	static volatile int64_t x3758 = -10LL;
	uint8_t x3759 = 2U;
	int16_t x3760 = 1;
	int64_t t87 = 229824482398LL;

	t87 = (((x3757%x3758)>>x3759)+x3760);

	if (t87 != 2LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x3762 = 696197951739LLU;
	static int8_t x3763 = 2;
	static volatile uint64_t t88 = 34492758428478LLU;

	t88 = (((x3761%x3762)>>x3763)+x3764);

	if (t88 != 9223372158870918010LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3782 = 96;
	int32_t x3783 = 11;
	static int8_t x3784 = 1;
	volatile int32_t t89 = 656;

	t89 = (((x3781%x3782)>>x3783)+x3784);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3802 = -1;
	volatile int32_t x3804 = -110947421;
	volatile int32_t t90 = -812812;

	t90 = (((x3801%x3802)>>x3803)+x3804);

	if (t90 != -110947421) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x3829 = INT32_MAX;
	int8_t x3830 = -5;
	static volatile uint8_t x3831 = 7U;
	uint32_t x3832 = UINT32_MAX;
	static volatile uint32_t t91 = UINT32_MAX;

	t91 = (((x3829%x3830)>>x3831)+x3832);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3837 = INT8_MIN;
	uint64_t x3838 = 449307247803LLU;
	uint8_t x3839 = 1U;
	int32_t x3840 = INT32_MIN;
	static uint64_t t92 = 880874LLU;

	t92 = (((x3837%x3838)>>x3839)+x3840);

	if (t92 != 40723272944LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x3885 = 1U;
	uint16_t x3886 = UINT16_MAX;
	int64_t t93 = INT64_MIN;

	t93 = (((x3885%x3886)>>x3887)+x3888);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x3909 = INT32_MAX;
	int8_t x3910 = INT8_MIN;
	static volatile uint32_t x3911 = 15U;
	volatile int32_t x3912 = INT32_MAX;

	t94 = (((x3909%x3910)>>x3911)+x3912);

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x3969 = INT64_MIN;
	int16_t x3970 = -1;
	uint8_t x3971 = 21U;
	int16_t x3972 = INT16_MIN;
	int64_t t95 = -2991236848071580737LL;

	t95 = (((x3969%x3970)>>x3971)+x3972);

	if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x3977 = -1LL;
	int8_t x3979 = 1;

	t96 = (((x3977%x3978)>>x3979)+x3980);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3990 = -1;
	uint8_t x3991 = 1U;
	int8_t x3992 = INT8_MAX;

	t97 = (((x3989%x3990)>>x3991)+x3992);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4005 = 1874111LLU;
	int8_t x4006 = INT8_MIN;
	static uint32_t x4007 = 2U;
	volatile uint64_t t98 = 5658LLU;

	t98 = (((x4005%x4006)>>x4007)+x4008);

	if (t98 != 468526LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4085 = 13059074U;
	static int16_t x4086 = 248;
	uint32_t t99 = 5687U;

	t99 = (((x4085%x4086)>>x4087)+x4088);

	if (t99 != 84U) { NG(); } else { ; }
	
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

