#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = INT32_MAX;
uint16_t x243 = UINT16_MAX;
volatile int32_t t2 = 11898494;
int16_t x258 = 13;
volatile int8_t x293 = 3;
int64_t x324 = INT64_MIN;
volatile uint16_t x463 = 5U;
volatile int16_t x555 = INT16_MAX;
int8_t x556 = -57;
uint16_t x719 = UINT16_MAX;
uint32_t x897 = 692U;
static int32_t x899 = -1;
static uint8_t x984 = UINT8_MAX;
volatile int8_t x1024 = -1;
int64_t t17 = 15340916LL;
int8_t x1096 = -1;
int64_t x1166 = 19LL;
int8_t x1254 = 20;
int8_t x1255 = INT8_MAX;
int32_t t21 = -3055;
int16_t x1352 = INT16_MIN;
int32_t t23 = INT32_MAX;
volatile int32_t t24 = 25;
volatile uint16_t x1406 = 3U;
static int16_t x1466 = 0;
uint64_t x1601 = 65437784816LLU;
volatile int32_t x1602 = 27;
int32_t x1688 = -1;
volatile int64_t t32 = -1727215993353145506LL;
uint32_t x1782 = 15U;
int32_t x1889 = 540921;
int32_t t35 = -961;
int16_t x1960 = INT16_MAX;
int32_t t37 = -91162884;
static uint8_t x1964 = 1U;
static int32_t t39 = -1;
uint32_t x2159 = 13572394U;
int8_t x2162 = 7;
int64_t x2164 = INT64_MIN;
volatile uint32_t t44 = 704364131U;
static volatile int32_t t45 = -14;
uint16_t x2425 = 1U;
volatile int16_t x2436 = INT16_MIN;
volatile int32_t t49 = 399;
uint8_t x2632 = 90U;
static uint32_t t50 = UINT32_MAX;
int32_t t51 = 33238435;
static uint8_t x2766 = 9U;
int32_t x2767 = INT32_MAX;
static int64_t t52 = 2303236277902LL;
volatile int32_t x2770 = 26;
int64_t x2771 = INT64_MAX;
volatile int8_t x2787 = 0;
volatile uint64_t t55 = 1415390679080LLU;
int16_t x2878 = 6;
uint8_t x2879 = UINT8_MAX;
volatile int32_t x2902 = 0;
static volatile int32_t x2904 = 262241;
uint32_t x3137 = 30U;
volatile uint32_t t62 = UINT32_MAX;
static int32_t t64 = 252125;
uint64_t x3309 = UINT64_MAX;
volatile uint64_t t65 = 17384127470410408LLU;
static uint32_t x3413 = 1215791U;
volatile uint8_t x3415 = UINT8_MAX;
static volatile int32_t x3444 = -108319;
int32_t t69 = 30101005;
static uint16_t x3565 = 1439U;
volatile uint64_t x3583 = UINT64_MAX;
int16_t x3680 = -1;
volatile int32_t t74 = -15781284;
int64_t t75 = -31874876938LL;
uint64_t x3809 = 1797765LLU;
volatile uint64_t x3829 = 60916646LLU;
int16_t x3878 = 1;
int8_t x3879 = 8;
volatile uint32_t t79 = 0U;
int8_t x3897 = 21;
uint8_t x3898 = 9U;
uint8_t x3946 = 0U;
int8_t x3947 = INT8_MIN;
volatile int32_t t81 = -4722489;
uint8_t x4054 = 0U;
volatile uint32_t x4076 = UINT32_MAX;
volatile uint32_t t86 = 3U;
int32_t x4181 = INT32_MAX;
uint16_t x4182 = 30U;
volatile int32_t x4183 = -1;
int32_t t87 = 5467;
int16_t x4437 = INT16_MAX;
int16_t x4438 = 0;
int64_t x4618 = 0LL;
static volatile int16_t x4620 = INT16_MIN;
int32_t x4643 = -1;
volatile int32_t t93 = -1185950;
uint16_t x4666 = 16U;
int16_t x4668 = -10577;
static int8_t x4691 = -5;
int32_t t95 = 4484;
volatile uint8_t x4724 = 24U;
static int64_t t99 = -4568244493LL;


void f0(void) {
	int8_t x29 = 2;
	int8_t x30 = 0;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 42406504813075798LLU;
	int32_t t0 = -38;

	t0 = (x29>>(x30>>(x31==x32)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x162 = 0U;
	volatile int8_t x163 = -1;
	int64_t x164 = 1527394868085640665LL;

	t1 = (x161>>(x162>>(x163==x164)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x241 = 87U;
	int8_t x242 = 0;
	static int8_t x244 = 22;

	t2 = (x241>>(x242>>(x243==x244)));

	if (t2 != 87) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x257 = 2U;
	volatile int32_t x259 = -1;
	static int64_t x260 = INT64_MIN;
	static volatile int32_t t3 = 951;

	t3 = (x257>>(x258>>(x259==x260)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x294 = 1;
	int16_t x295 = INT16_MIN;
	int64_t x296 = -1LL;
	int32_t t4 = -100790038;

	t4 = (x293>>(x294>>(x295==x296)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x305 = UINT64_MAX;
	static uint32_t x306 = 16U;
	static int64_t x307 = INT64_MAX;
	int64_t x308 = -1LL;
	volatile uint64_t t5 = 993LLU;

	t5 = (x305>>(x306>>(x307==x308)));

	if (t5 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x321 = INT8_MAX;
	uint16_t x322 = 28U;
	volatile uint32_t x323 = 176U;
	static volatile int32_t t6 = 1688177;

	t6 = (x321>>(x322>>(x323==x324)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x409 = 0U;
	uint32_t x410 = 2U;
	int64_t x411 = -61026853181LL;
	volatile uint8_t x412 = 1U;
	static int32_t t7 = 3130;

	t7 = (x409>>(x410>>(x411==x412)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x461 = 4U;
	int8_t x462 = 0;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t8 = 10237U;

	t8 = (x461>>(x462>>(x463==x464)));

	if (t8 != 4U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x553 = 1934U;
	int8_t x554 = 1;
	uint32_t t9 = 779U;

	t9 = (x553>>(x554>>(x555==x556)));

	if (t9 != 967U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x577 = 26;
	int8_t x578 = 7;
	int32_t x579 = INT32_MIN;
	static uint64_t x580 = 1LLU;
	int32_t t10 = 7526;

	t10 = (x577>>(x578>>(x579==x580)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x585 = 43138LLU;
	uint8_t x586 = 1U;
	int16_t x587 = -1;
	int32_t x588 = INT32_MIN;
	volatile uint64_t t11 = 121LLU;

	t11 = (x585>>(x586>>(x587==x588)));

	if (t11 != 21569LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x717 = UINT32_MAX;
	volatile uint32_t x718 = 2U;
	static int8_t x720 = INT8_MIN;
	static volatile uint32_t t12 = 31338U;

	t12 = (x717>>(x718>>(x719==x720)));

	if (t12 != 1073741823U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x801 = 1;
	static int8_t x802 = 5;
	int8_t x803 = INT8_MIN;
	static int32_t x804 = INT32_MIN;
	static volatile int32_t t13 = -1;

	t13 = (x801>>(x802>>(x803==x804)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x898 = 14U;
	uint64_t x900 = UINT64_MAX;
	volatile uint32_t t14 = 164114182U;

	t14 = (x897>>(x898>>(x899==x900)));

	if (t14 != 5U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x981 = UINT64_MAX;
	uint8_t x982 = 4U;
	static int16_t x983 = -1;
	uint64_t t15 = 1778750128987467LLU;

	t15 = (x981>>(x982>>(x983==x984)));

	if (t15 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x1013 = 12;
	int8_t x1014 = 1;
	volatile uint8_t x1015 = 0U;
	static uint8_t x1016 = UINT8_MAX;
	int32_t t16 = 3161312;

	t16 = (x1013>>(x1014>>(x1015==x1016)));

	if (t16 != 6) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1021 = INT64_MAX;
	uint8_t x1022 = 40U;
	volatile int16_t x1023 = INT16_MAX;

	t17 = (x1021>>(x1022>>(x1023==x1024)));

	if (t17 != 8388607LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1093 = UINT64_MAX;
	static volatile uint8_t x1094 = 20U;
	int8_t x1095 = INT8_MAX;
	volatile uint64_t t18 = 49756345643LLU;

	t18 = (x1093>>(x1094>>(x1095==x1096)));

	if (t18 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1165 = INT16_MAX;
	uint64_t x1167 = UINT64_MAX;
	static int16_t x1168 = 170;
	int32_t t19 = 3;

	t19 = (x1165>>(x1166>>(x1167==x1168)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1253 = UINT64_MAX;
	volatile uint64_t x1256 = 3111LLU;
	uint64_t t20 = 4221266440LLU;

	t20 = (x1253>>(x1254>>(x1255==x1256)));

	if (t20 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1277 = UINT16_MAX;
	volatile uint64_t x1278 = 0LLU;
	static int32_t x1279 = -1;
	int8_t x1280 = INT8_MIN;

	t21 = (x1277>>(x1278>>(x1279==x1280)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1285 = INT16_MAX;
	uint8_t x1286 = 0U;
	uint16_t x1287 = 30U;
	int16_t x1288 = INT16_MIN;
	volatile int32_t t22 = 457629499;

	t22 = (x1285>>(x1286>>(x1287==x1288)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1349 = INT32_MAX;
	static uint16_t x1350 = 0U;
	uint64_t x1351 = 211620LLU;

	t23 = (x1349>>(x1350>>(x1351==x1352)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1373 = UINT8_MAX;
	static int32_t x1374 = 13;
	uint64_t x1375 = 1936LLU;
	int16_t x1376 = -1;

	t24 = (x1373>>(x1374>>(x1375==x1376)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1405 = 65734029282LLU;
	static uint32_t x1407 = 0U;
	uint16_t x1408 = 3663U;
	uint64_t t25 = 115101320515590LLU;

	t25 = (x1405>>(x1406>>(x1407==x1408)));

	if (t25 != 8216753660LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1421 = UINT64_MAX;
	volatile uint64_t x1422 = 25LLU;
	uint8_t x1423 = UINT8_MAX;
	int64_t x1424 = INT64_MIN;
	static uint64_t t26 = 847843000236880LLU;

	t26 = (x1421>>(x1422>>(x1423==x1424)));

	if (t26 != 549755813887LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1433 = 263837016U;
	static uint8_t x1434 = 0U;
	volatile uint64_t x1435 = 257778157965LLU;
	uint32_t x1436 = 6U;
	uint32_t t27 = 1U;

	t27 = (x1433>>(x1434>>(x1435==x1436)));

	if (t27 != 263837016U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1449 = 12U;
	uint64_t x1450 = 2LLU;
	int64_t x1451 = 21LL;
	static volatile int64_t x1452 = -1LL;
	volatile int32_t t28 = -2;

	t28 = (x1449>>(x1450>>(x1451==x1452)));

	if (t28 != 3) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1457 = 0;
	uint8_t x1458 = 1U;
	int64_t x1459 = INT64_MIN;
	volatile int64_t x1460 = INT64_MIN;
	int32_t t29 = -55197;

	t29 = (x1457>>(x1458>>(x1459==x1460)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1465 = 1U;
	static volatile int8_t x1467 = 1;
	int8_t x1468 = -1;
	volatile int32_t t30 = 5;

	t30 = (x1465>>(x1466>>(x1467==x1468)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1603 = INT64_MAX;
	int8_t x1604 = 26;
	static uint64_t t31 = 8357528LLU;

	t31 = (x1601>>(x1602>>(x1603==x1604)));

	if (t31 != 487LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1685 = 606481147228797LL;
	uint8_t x1686 = 1U;
	static uint8_t x1687 = 19U;

	t32 = (x1685>>(x1686>>(x1687==x1688)));

	if (t32 != 303240573614398LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1781 = INT16_MAX;
	int64_t x1783 = 235581137168LL;
	int16_t x1784 = 9;
	static volatile int32_t t33 = -5943;

	t33 = (x1781>>(x1782>>(x1783==x1784)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1789 = 6183119U;
	int8_t x1790 = 1;
	int32_t x1791 = INT32_MIN;
	int64_t x1792 = 1310LL;
	volatile uint32_t t34 = 939U;

	t34 = (x1789>>(x1790>>(x1791==x1792)));

	if (t34 != 3091559U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1890 = 6U;
	static volatile uint8_t x1891 = 77U;
	static volatile int16_t x1892 = INT16_MIN;

	t35 = (x1889>>(x1890>>(x1891==x1892)));

	if (t35 != 8451) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1949 = INT32_MAX;
	int16_t x1950 = 0;
	static uint8_t x1951 = 21U;
	int32_t x1952 = -363630;
	int32_t t36 = INT32_MAX;

	t36 = (x1949>>(x1950>>(x1951==x1952)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1957 = 7;
	volatile uint8_t x1958 = 3U;
	int64_t x1959 = -1LL;

	t37 = (x1957>>(x1958>>(x1959==x1960)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1961 = 23946995775LL;
	int8_t x1962 = 39;
	int32_t x1963 = INT32_MAX;
	volatile int64_t t38 = -63451281990LL;

	t38 = (x1961>>(x1962>>(x1963==x1964)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1969 = 2;
	volatile uint8_t x1970 = 6U;
	static uint8_t x1971 = UINT8_MAX;
	volatile uint32_t x1972 = 571745U;

	t39 = (x1969>>(x1970>>(x1971==x1972)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2109 = INT8_MAX;
	uint8_t x2110 = 11U;
	int8_t x2111 = -1;
	int16_t x2112 = 104;
	int32_t t40 = -287;

	t40 = (x2109>>(x2110>>(x2111==x2112)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2157 = 90437163U;
	uint16_t x2158 = 5U;
	volatile int64_t x2160 = INT64_MAX;
	uint32_t t41 = 850324U;

	t41 = (x2157>>(x2158>>(x2159==x2160)));

	if (t41 != 2826161U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2161 = 274;
	int16_t x2163 = INT16_MAX;
	static int32_t t42 = -17;

	t42 = (x2161>>(x2162>>(x2163==x2164)));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x2213 = 9;
	uint8_t x2214 = 1U;
	volatile int8_t x2215 = -9;
	uint32_t x2216 = UINT32_MAX;
	volatile int32_t t43 = -869325821;

	t43 = (x2213>>(x2214>>(x2215==x2216)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2293 = 96049002U;
	uint8_t x2294 = 0U;
	int8_t x2295 = INT8_MIN;
	volatile int64_t x2296 = INT64_MAX;

	t44 = (x2293>>(x2294>>(x2295==x2296)));

	if (t44 != 96049002U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2317 = INT32_MAX;
	uint64_t x2318 = 1LLU;
	int64_t x2319 = -2LL;
	int16_t x2320 = 30;

	t45 = (x2317>>(x2318>>(x2319==x2320)));

	if (t45 != 1073741823) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2377 = UINT64_MAX;
	uint8_t x2378 = 12U;
	static int32_t x2379 = -45;
	int32_t x2380 = INT32_MIN;
	volatile uint64_t t46 = 43262849LLU;

	t46 = (x2377>>(x2378>>(x2379==x2380)));

	if (t46 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x2426 = 0;
	int8_t x2427 = INT8_MAX;
	int64_t x2428 = INT64_MAX;
	volatile int32_t t47 = -1;

	t47 = (x2425>>(x2426>>(x2427==x2428)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2433 = 175146199419LL;
	int8_t x2434 = 1;
	int16_t x2435 = INT16_MIN;
	static volatile int64_t t48 = 3LL;

	t48 = (x2433>>(x2434>>(x2435==x2436)));

	if (t48 != 175146199419LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2581 = 1U;
	uint8_t x2582 = 1U;
	volatile uint8_t x2583 = 2U;
	static volatile int16_t x2584 = 1;

	t49 = (x2581>>(x2582>>(x2583==x2584)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2629 = UINT32_MAX;
	int8_t x2630 = 0;
	static uint32_t x2631 = 190U;

	t50 = (x2629>>(x2630>>(x2631==x2632)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2753 = 6;
	uint8_t x2754 = 27U;
	int32_t x2755 = INT32_MAX;
	volatile uint16_t x2756 = 17U;

	t51 = (x2753>>(x2754>>(x2755==x2756)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2765 = 1262916087LL;
	int16_t x2768 = 460;

	t52 = (x2765>>(x2766>>(x2767==x2768)));

	if (t52 != 2466632LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2769 = INT64_MAX;
	static int64_t x2772 = -2000315195387LL;
	volatile int64_t t53 = 561530LL;

	t53 = (x2769>>(x2770>>(x2771==x2772)));

	if (t53 != 137438953471LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2785 = 14750U;
	uint16_t x2786 = 8U;
	int64_t x2788 = INT64_MIN;
	uint32_t t54 = 19984U;

	t54 = (x2785>>(x2786>>(x2787==x2788)));

	if (t54 != 57U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2837 = 1LLU;
	uint8_t x2838 = 45U;
	volatile int32_t x2839 = 59;
	static int16_t x2840 = -1;

	t55 = (x2837>>(x2838>>(x2839==x2840)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2877 = 386;
	static int8_t x2880 = 1;
	int32_t t56 = 6325082;

	t56 = (x2877>>(x2878>>(x2879==x2880)));

	if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2881 = 705568U;
	int8_t x2882 = 1;
	int64_t x2883 = -1LL;
	int64_t x2884 = -33729231590LL;
	static volatile uint32_t t57 = 1271354U;

	t57 = (x2881>>(x2882>>(x2883==x2884)));

	if (t57 != 352784U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2901 = UINT64_MAX;
	int8_t x2903 = -1;
	static uint64_t t58 = UINT64_MAX;

	t58 = (x2901>>(x2902>>(x2903==x2904)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3005 = 2;
	int16_t x3006 = 25;
	static uint64_t x3007 = 5826136LLU;
	static int32_t x3008 = INT32_MIN;
	volatile int32_t t59 = 327;

	t59 = (x3005>>(x3006>>(x3007==x3008)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x3085 = INT64_MAX;
	int8_t x3086 = 0;
	static int64_t x3087 = 0LL;
	uint64_t x3088 = UINT64_MAX;
	static int64_t t60 = INT64_MAX;

	t60 = (x3085>>(x3086>>(x3087==x3088)));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3138 = 3;
	uint64_t x3139 = UINT64_MAX;
	int64_t x3140 = -11216068171290640LL;
	uint32_t t61 = 3274U;

	t61 = (x3137>>(x3138>>(x3139==x3140)));

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3233 = UINT32_MAX;
	int64_t x3234 = 0LL;
	int8_t x3235 = -1;
	static int8_t x3236 = INT8_MAX;

	t62 = (x3233>>(x3234>>(x3235==x3236)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3281 = UINT64_MAX;
	uint16_t x3282 = 0U;
	static int32_t x3283 = 490;
	uint32_t x3284 = UINT32_MAX;
	uint64_t t63 = UINT64_MAX;

	t63 = (x3281>>(x3282>>(x3283==x3284)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3285 = 11U;
	static uint8_t x3286 = 7U;
	int16_t x3287 = INT16_MIN;
	int8_t x3288 = -1;

	t64 = (x3285>>(x3286>>(x3287==x3288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3310 = 61U;
	volatile int8_t x3311 = -1;
	int8_t x3312 = INT8_MIN;

	t65 = (x3309>>(x3310>>(x3311==x3312)));

	if (t65 != 7LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3341 = UINT64_MAX;
	uint8_t x3342 = 1U;
	uint16_t x3343 = 1U;
	int32_t x3344 = INT32_MIN;
	volatile uint64_t t66 = 17245234557060673LLU;

	t66 = (x3341>>(x3342>>(x3343==x3344)));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3414 = 1LL;
	int32_t x3416 = INT32_MIN;
	static volatile uint32_t t67 = 49404U;

	t67 = (x3413>>(x3414>>(x3415==x3416)));

	if (t67 != 607895U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3425 = UINT32_MAX;
	static uint8_t x3426 = 1U;
	int32_t x3427 = -1;
	uint16_t x3428 = UINT16_MAX;
	volatile uint32_t t68 = 21631U;

	t68 = (x3425>>(x3426>>(x3427==x3428)));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x3441 = 1U;
	uint8_t x3442 = 0U;
	int16_t x3443 = -1;

	t69 = (x3441>>(x3442>>(x3443==x3444)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3566 = 2U;
	static int16_t x3567 = -5;
	int64_t x3568 = 1299880828110752LL;
	int32_t t70 = 0;

	t70 = (x3565>>(x3566>>(x3567==x3568)));

	if (t70 != 359) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x3581 = 103LL;
	uint8_t x3582 = 0U;
	int8_t x3584 = INT8_MAX;
	int64_t t71 = -1966184869851031LL;

	t71 = (x3581>>(x3582>>(x3583==x3584)));

	if (t71 != 103LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x3637 = UINT64_MAX;
	int8_t x3638 = 41;
	uint32_t x3639 = 5010U;
	int64_t x3640 = INT64_MAX;
	volatile uint64_t t72 = 0LLU;

	t72 = (x3637>>(x3638>>(x3639==x3640)));

	if (t72 != 8388607LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3677 = INT8_MAX;
	uint8_t x3678 = 12U;
	int32_t x3679 = INT32_MIN;
	volatile int32_t t73 = -34665248;

	t73 = (x3677>>(x3678>>(x3679==x3680)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3721 = 0;
	static int16_t x3722 = 10;
	int32_t x3723 = INT32_MAX;
	int64_t x3724 = 36013144165650406LL;

	t74 = (x3721>>(x3722>>(x3723==x3724)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3729 = INT64_MAX;
	uint8_t x3730 = 1U;
	int32_t x3731 = INT32_MIN;
	int16_t x3732 = INT16_MIN;

	t75 = (x3729>>(x3730>>(x3731==x3732)));

	if (t75 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3793 = 5;
	int8_t x3794 = 0;
	int8_t x3795 = -1;
	uint64_t x3796 = 0LLU;
	volatile int32_t t76 = -927612560;

	t76 = (x3793>>(x3794>>(x3795==x3796)));

	if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3810 = 0;
	volatile uint16_t x3811 = 185U;
	volatile uint64_t x3812 = 10177277751LLU;
	uint64_t t77 = 6312136645LLU;

	t77 = (x3809>>(x3810>>(x3811==x3812)));

	if (t77 != 1797765LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3830 = 7;
	volatile int32_t x3831 = -909866665;
	volatile uint32_t x3832 = UINT32_MAX;
	static uint64_t t78 = 841619663878304LLU;

	t78 = (x3829>>(x3830>>(x3831==x3832)));

	if (t78 != 475911LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3877 = 24218U;
	int32_t x3880 = -2;

	t79 = (x3877>>(x3878>>(x3879==x3880)));

	if (t79 != 12109U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3899 = 687U;
	volatile int32_t x3900 = INT32_MIN;
	volatile int32_t t80 = -136;

	t80 = (x3897>>(x3898>>(x3899==x3900)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3945 = 19U;
	uint64_t x3948 = 31189LLU;

	t81 = (x3945>>(x3946>>(x3947==x3948)));

	if (t81 != 19) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3985 = 3132;
	uint8_t x3986 = 1U;
	volatile int32_t x3987 = -1;
	int32_t x3988 = 1900;
	static int32_t t82 = 0;

	t82 = (x3985>>(x3986>>(x3987==x3988)));

	if (t82 != 1566) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x4053 = 0;
	int8_t x4055 = INT8_MIN;
	static volatile uint16_t x4056 = 176U;
	volatile int32_t t83 = 94125;

	t83 = (x4053>>(x4054>>(x4055==x4056)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4073 = UINT32_MAX;
	int8_t x4074 = 0;
	volatile uint16_t x4075 = UINT16_MAX;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x4073>>(x4074>>(x4075==x4076)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4085 = 0U;
	static uint16_t x4086 = 11U;
	static volatile int32_t x4087 = INT32_MIN;
	int8_t x4088 = INT8_MIN;
	int32_t t85 = 108;

	t85 = (x4085>>(x4086>>(x4087==x4088)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4105 = 1917287511U;
	int8_t x4106 = 0;
	static int32_t x4107 = -26391;
	int16_t x4108 = 97;

	t86 = (x4105>>(x4106>>(x4107==x4108)));

	if (t86 != 1917287511U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4184 = INT8_MIN;

	t87 = (x4181>>(x4182>>(x4183==x4184)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4185 = 89876;
	static uint16_t x4186 = 4U;
	int16_t x4187 = -1;
	uint16_t x4188 = 20U;
	int32_t t88 = 1;

	t88 = (x4185>>(x4186>>(x4187==x4188)));

	if (t88 != 5617) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4413 = 24021U;
	uint8_t x4414 = 3U;
	static int32_t x4415 = -1;
	int16_t x4416 = INT16_MIN;
	volatile uint32_t t89 = 96302U;

	t89 = (x4413>>(x4414>>(x4415==x4416)));

	if (t89 != 3002U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4439 = INT32_MIN;
	uint64_t x4440 = 423059114LLU;
	volatile int32_t t90 = -348179790;

	t90 = (x4437>>(x4438>>(x4439==x4440)));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4617 = 439847;
	volatile int32_t x4619 = -1;
	int32_t t91 = -49328373;

	t91 = (x4617>>(x4618>>(x4619==x4620)));

	if (t91 != 439847) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4637 = 6996868LL;
	int16_t x4638 = 15;
	int16_t x4639 = 0;
	int32_t x4640 = INT32_MAX;
	static int64_t t92 = -978370222720955LL;

	t92 = (x4637>>(x4638>>(x4639==x4640)));

	if (t92 != 213LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4641 = 1U;
	int8_t x4642 = 3;
	int8_t x4644 = -12;

	t93 = (x4641>>(x4642>>(x4643==x4644)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x4665 = 16145235LLU;
	int8_t x4667 = INT8_MAX;
	uint64_t t94 = 371LLU;

	t94 = (x4665>>(x4666>>(x4667==x4668)));

	if (t94 != 246LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4689 = 0U;
	uint16_t x4690 = 7U;
	int32_t x4692 = INT32_MIN;

	t95 = (x4689>>(x4690>>(x4691==x4692)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4705 = 2069090038LLU;
	uint8_t x4706 = 17U;
	int16_t x4707 = 4;
	uint16_t x4708 = 3U;
	uint64_t t96 = 5974751376073253LLU;

	t96 = (x4705>>(x4706>>(x4707==x4708)));

	if (t96 != 15785LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4721 = INT16_MAX;
	volatile uint8_t x4722 = 0U;
	int32_t x4723 = 564506827;
	volatile int32_t t97 = -190643;

	t97 = (x4721>>(x4722>>(x4723==x4724)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x4817 = INT64_MAX;
	static volatile uint16_t x4818 = 0U;
	uint32_t x4819 = 173U;
	static int8_t x4820 = -1;
	int64_t t98 = INT64_MAX;

	t98 = (x4817>>(x4818>>(x4819==x4820)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4877 = INT64_MAX;
	uint16_t x4878 = 13U;
	int32_t x4879 = INT32_MIN;
	uint8_t x4880 = 1U;

	t99 = (x4877>>(x4878>>(x4879==x4880)));

	if (t99 != 1125899906842623LL) { NG(); } else { ; }
	
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

