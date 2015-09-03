#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x248 = 1;
int64_t x307 = -3530160LL;
static volatile int64_t x553 = -1LL;
static uint64_t x593 = UINT64_MAX;
uint16_t x595 = 28992U;
uint16_t x597 = UINT16_MAX;
static volatile uint16_t x598 = 36U;
int64_t x620 = 3LL;
int8_t x669 = INT8_MIN;
volatile int16_t x673 = INT16_MAX;
volatile uint64_t x760 = 24LLU;
volatile int64_t t22 = -14LL;
int32_t t23 = -21;
static uint8_t x901 = UINT8_MAX;
int8_t x903 = -11;
static uint64_t t25 = 203612898182320LLU;
static int16_t x1047 = 215;
uint16_t x1134 = 0U;
static volatile int32_t t30 = -344;
int32_t x1165 = 388610;
int64_t x1167 = -16072684LL;
volatile uint8_t x1168 = 3U;
int32_t x1207 = -326;
volatile uint64_t x1430 = 179929LLU;
static uint8_t x1438 = UINT8_MAX;
static int32_t t36 = 0;
static int16_t x1512 = 0;
uint64_t x1575 = 956676LLU;
int16_t x1721 = INT16_MAX;
uint16_t x1724 = 3U;
uint32_t t39 = 29U;
int32_t x1731 = INT32_MIN;
volatile int32_t t40 = -24872267;
int64_t x1824 = 1LL;
int64_t x1841 = INT64_MIN;
volatile uint64_t t44 = 26913044285LLU;
uint32_t x1845 = 620088U;
int16_t x1930 = 531;
volatile uint8_t x1931 = 2U;
static volatile int32_t t46 = 147792;
uint64_t x1951 = UINT64_MAX;
volatile uint32_t x2034 = 19U;
uint16_t x2082 = 14714U;
int32_t x2135 = -1;
uint32_t x2137 = 5U;
int64_t x2139 = INT64_MIN;
uint8_t x2140 = 12U;
uint64_t t53 = 80LLU;
int16_t x2201 = INT16_MIN;
static int8_t x2204 = 41;
volatile uint64_t t54 = 279050061196099970LLU;
static volatile uint16_t x2285 = 95U;
uint8_t x2370 = 9U;
uint8_t x2371 = 0U;
static int32_t t58 = -360;
int8_t x2452 = 12;
int32_t x2475 = 9652;
uint16_t x2476 = 0U;
int8_t x2593 = 1;
uint32_t x2617 = UINT32_MAX;
uint64_t x2620 = 2LLU;
int32_t x2689 = 7695;
uint16_t x2691 = 18U;
volatile int64_t x2775 = 6028956LL;
volatile int64_t t65 = -12LL;
uint32_t t66 = 3578U;
int32_t x2822 = 73741;
int32_t x2843 = INT32_MIN;
volatile int64_t t71 = -783357889548LL;
volatile int64_t x3069 = -1526045LL;
int64_t x3071 = 13240LL;
static volatile uint64_t x3083 = 516LLU;
static int32_t x3169 = -1;
int64_t x3171 = -777667661779199LL;
int16_t x3173 = INT16_MAX;
volatile int16_t x3240 = 1;
static int16_t x3268 = 0;
int64_t x3317 = -1LL;
int16_t x3357 = 2;
static int8_t x3359 = -2;
int64_t x3473 = -264109234399LL;
static int64_t x3474 = 1085118550351LL;
uint8_t x3477 = 1U;
static int16_t x3478 = INT16_MAX;
int16_t x3479 = -268;
static volatile int32_t t88 = 1097;
int64_t t90 = 1418568495LL;
static int64_t x3618 = 82935724692LL;
static uint64_t x3666 = 1276404269108370LLU;
uint16_t x3667 = 1U;
uint32_t t95 = 1868593U;
uint32_t x3759 = UINT32_MAX;
static uint64_t t99 = 220257LLU;


void f0(void) {
	static uint8_t x21 = 0U;
	volatile int16_t x22 = 19;
	uint8_t x23 = 2U;
	uint64_t x24 = 11LLU;
	int32_t t0 = -215677316;

	t0 = ((x21/(x22+x23))>>x24);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x57 = 115U;
	static uint8_t x58 = UINT8_MAX;
	int8_t x59 = -1;
	static int8_t x60 = 18;
	volatile int32_t t1 = -5202701;

	t1 = ((x57/(x58+x59))>>x60);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x65 = -1;
	int32_t x66 = -832679;
	int16_t x67 = 18;
	uint8_t x68 = 1U;
	static int32_t t2 = -2347;

	t2 = ((x65/(x66+x67))>>x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	static int8_t x92 = 12;
	volatile int64_t t3 = 2895LL;

	t3 = ((x89/(x90+x91))>>x92);

	if (t3 != 1048576LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x133 = -4757;
	volatile int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	int16_t x136 = 12;
	int64_t t4 = 1930LL;

	t4 = ((x133/(x134+x135))>>x136);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x245 = 255648833622736LLU;
	static int8_t x246 = -4;
	static uint32_t x247 = 33162019U;
	uint64_t t5 = 427474378509789LLU;

	t5 = ((x245/(x246+x247))>>x248);

	if (t5 != 3854543LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MIN;
	uint64_t x299 = 3980024427540090LLU;
	int8_t x300 = 20;
	static volatile uint64_t t6 = 0LLU;

	t6 = ((x297/(x298+x299))>>x300);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x305 = INT8_MAX;
	int64_t x306 = -1LL;
	static uint8_t x308 = 5U;
	static volatile int64_t t7 = -1005893346LL;

	t7 = ((x305/(x306+x307))>>x308);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x317 = -1;
	int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 5U;
	int32_t t8 = 1;

	t8 = ((x317/(x318+x319))>>x320);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x333 = INT8_MIN;
	volatile uint32_t x334 = UINT32_MAX;
	uint64_t x335 = UINT64_MAX;
	volatile uint8_t x336 = 25U;
	uint64_t t9 = 175314664909858LLU;

	t9 = ((x333/(x334+x335))>>x336);

	if (t9 != 128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x349 = 422965112U;
	uint8_t x350 = 0U;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = 3U;
	volatile uint32_t t10 = 99U;

	t10 = ((x349/(x350+x351))>>x352);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x437 = -1;
	int64_t x438 = 49LL;
	int32_t x439 = -5205012;
	uint8_t x440 = 34U;
	int64_t t11 = -57980392LL;

	t11 = ((x437/(x438+x439))>>x440);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x469 = INT16_MIN;
	int8_t x470 = 0;
	uint64_t x471 = UINT64_MAX;
	static volatile int16_t x472 = 0;
	volatile uint64_t t12 = 31433556717335757LLU;

	t12 = ((x469/(x470+x471))>>x472);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x554 = UINT8_MAX;
	uint64_t x555 = UINT64_MAX;
	uint8_t x556 = 7U;
	volatile uint64_t t13 = 4050083674002LLU;

	t13 = ((x553/(x554+x555))>>x556);

	if (t13 != 567382630219905LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x577 = -1;
	int32_t x578 = INT32_MAX;
	static uint32_t x579 = 974948774U;
	uint8_t x580 = 1U;
	volatile uint32_t t14 = 168U;

	t14 = ((x577/(x578+x579))>>x580);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x594 = -58520246333366LL;
	volatile int32_t x596 = 2;
	uint64_t t15 = 118345610611LLU;

	t15 = ((x593/(x594+x595))>>x596);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x599 = INT16_MAX;
	uint8_t x600 = 10U;
	int32_t t16 = 94991805;

	t16 = ((x597/(x598+x599))>>x600);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x617 = -1;
	int32_t x618 = -9294;
	int16_t x619 = 308;
	volatile int32_t t17 = -1740910;

	t17 = ((x617/(x618+x619))>>x620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x637 = INT64_MIN;
	static int32_t x638 = 15;
	static int32_t x639 = INT32_MIN;
	uint32_t x640 = 1U;
	int64_t t18 = -528545735044274616LL;

	t18 = ((x637/(x638+x639))>>x640);

	if (t18 != 2147483663LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x670 = 1U;
	volatile int8_t x671 = -5;
	static volatile int32_t x672 = 6;
	static int32_t t19 = -369502622;

	t19 = ((x669/(x670+x671))>>x672);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x674 = -11507345;
	static uint16_t x675 = UINT16_MAX;
	static uint8_t x676 = 4U;
	volatile int32_t t20 = 863467;

	t20 = ((x673/(x674+x675))>>x676);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x757 = 25757040U;
	int64_t x758 = -3439LL;
	int32_t x759 = INT32_MAX;
	volatile int64_t t21 = 274671691512743LL;

	t21 = ((x757/(x758+x759))>>x760);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x821 = INT64_MAX;
	volatile uint8_t x822 = 3U;
	int8_t x823 = INT8_MAX;
	uint8_t x824 = 5U;

	t22 = ((x821/(x822+x823))>>x824);

	if (t22 != 2217156739628551LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x833 = -1;
	volatile int8_t x834 = INT8_MAX;
	volatile int32_t x835 = INT32_MIN;
	uint8_t x836 = 0U;

	t23 = ((x833/(x834+x835))>>x836);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x902 = INT8_MAX;
	static int8_t x904 = 4;
	int32_t t24 = -589997;

	t24 = ((x901/(x902+x903))>>x904);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x929 = 10929231891329LLU;
	static uint32_t x930 = UINT32_MAX;
	volatile int8_t x931 = -1;
	int16_t x932 = 8;

	t25 = ((x929/(x930+x931))>>x932);

	if (t25 != 9LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x953 = INT16_MIN;
	volatile uint64_t x954 = 97853024038096LLU;
	uint8_t x955 = UINT8_MAX;
	static volatile uint16_t x956 = 2U;
	volatile uint64_t t26 = 32LLU;

	t26 = ((x953/(x954+x955))>>x956);

	if (t26 != 47128LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x997 = INT16_MAX;
	static volatile uint64_t x998 = 1447897011LLU;
	static int32_t x999 = INT32_MAX;
	int16_t x1000 = 0;
	volatile uint64_t t27 = 70682285LLU;

	t27 = ((x997/(x998+x999))>>x1000);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1045 = UINT8_MAX;
	uint8_t x1046 = 27U;
	uint8_t x1048 = 14U;
	int32_t t28 = -6915384;

	t28 = ((x1045/(x1046+x1047))>>x1048);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1077 = 26804359LLU;
	int64_t x1078 = 7LL;
	volatile int64_t x1079 = -4717351395615LL;
	int32_t x1080 = 0;
	static volatile uint64_t t29 = 207262943461676LLU;

	t29 = ((x1077/(x1078+x1079))>>x1080);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1133 = INT8_MAX;
	volatile uint16_t x1135 = 11U;
	uint32_t x1136 = 1U;

	t30 = ((x1133/(x1134+x1135))>>x1136);

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1166 = UINT64_MAX;
	uint64_t t31 = 274040079431621363LLU;

	t31 = ((x1165/(x1166+x1167))>>x1168);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1205 = INT16_MIN;
	uint64_t x1206 = 1002573LLU;
	uint16_t x1208 = 3U;
	static uint64_t t32 = 6260551700042LLU;

	t32 = ((x1205/(x1206+x1207))>>x1208);

	if (t32 != 2300673396092LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1317 = INT32_MAX;
	volatile uint32_t x1318 = 11635293U;
	int64_t x1319 = INT64_MIN;
	volatile int16_t x1320 = 11;
	static volatile int64_t t33 = 466LL;

	t33 = ((x1317/(x1318+x1319))>>x1320);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1429 = INT16_MAX;
	uint32_t x1431 = 2U;
	static volatile uint16_t x1432 = 8U;
	volatile uint64_t t34 = 61266038546845LLU;

	t34 = ((x1429/(x1430+x1431))>>x1432);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1437 = -1;
	int8_t x1439 = -1;
	int16_t x1440 = 1;
	int32_t t35 = 16590487;

	t35 = ((x1437/(x1438+x1439))>>x1440);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1505 = 3189;
	int32_t x1506 = INT32_MIN;
	uint8_t x1507 = UINT8_MAX;
	uint32_t x1508 = 3U;

	t36 = ((x1505/(x1506+x1507))>>x1508);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1509 = INT16_MIN;
	uint16_t x1510 = 0U;
	volatile uint64_t x1511 = 3LLU;
	static uint64_t t37 = 3516798653793188LLU;

	t37 = ((x1509/(x1510+x1511))>>x1512);

	if (t37 != 6148914691236506282LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1573 = 7427823;
	int8_t x1574 = INT8_MAX;
	uint8_t x1576 = 9U;
	uint64_t t38 = 128398647288LLU;

	t38 = ((x1573/(x1574+x1575))>>x1576);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x1722 = -54;
	uint32_t x1723 = 172615166U;

	t39 = ((x1721/(x1722+x1723))>>x1724);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1729 = INT8_MIN;
	uint8_t x1730 = 0U;
	int16_t x1732 = 0;

	t40 = ((x1729/(x1730+x1731))>>x1732);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1785 = INT8_MIN;
	int32_t x1786 = -1;
	static uint64_t x1787 = 163139926638185LLU;
	static uint16_t x1788 = 1U;
	static volatile uint64_t t41 = 15108598LLU;

	t41 = ((x1785/(x1786+x1787))>>x1788);

	if (t41 != 56536LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1821 = UINT8_MAX;
	uint64_t x1822 = 9316LLU;
	static uint32_t x1823 = 33871639U;
	volatile uint64_t t42 = 1411039LLU;

	t42 = ((x1821/(x1822+x1823))>>x1824);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1833 = -1253;
	int8_t x1834 = INT8_MIN;
	int16_t x1835 = INT16_MIN;
	uint8_t x1836 = 1U;
	volatile int32_t t43 = -17849661;

	t43 = ((x1833/(x1834+x1835))>>x1836);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1842 = 6438656039LLU;
	uint64_t x1843 = 17154401542LLU;
	uint8_t x1844 = 22U;

	t44 = ((x1841/(x1842+x1843))>>x1844);

	if (t44 != 93LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1846 = -1;
	static int8_t x1847 = INT8_MIN;
	volatile uint8_t x1848 = 1U;
	volatile uint32_t t45 = 1U;

	t45 = ((x1845/(x1846+x1847))>>x1848);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1929 = UINT8_MAX;
	volatile uint8_t x1932 = 7U;

	t46 = ((x1929/(x1930+x1931))>>x1932);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x1949 = -1LL;
	volatile int8_t x1950 = 0;
	uint8_t x1952 = 1U;
	uint64_t t47 = 125761474LLU;

	t47 = ((x1949/(x1950+x1951))>>x1952);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2033 = 258U;
	uint16_t x2035 = 2U;
	static uint8_t x2036 = 7U;
	uint32_t t48 = 491070U;

	t48 = ((x2033/(x2034+x2035))>>x2036);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2041 = 5U;
	int64_t x2042 = -296LL;
	int64_t x2043 = -1LL;
	int8_t x2044 = 0;
	int64_t t49 = 1089526671584LL;

	t49 = ((x2041/(x2042+x2043))>>x2044);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2081 = INT64_MIN;
	int32_t x2083 = -1978217;
	uint16_t x2084 = 1U;
	volatile int64_t t50 = 481042022LL;

	t50 = ((x2081/(x2082+x2083))>>x2084);

	if (t50 != 2348703321781LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2133 = -1;
	static uint8_t x2134 = UINT8_MAX;
	uint64_t x2136 = 2LLU;
	volatile int32_t t51 = 9574;

	t51 = ((x2133/(x2134+x2135))>>x2136);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2138 = 1350LLU;
	static uint64_t t52 = 105109809837LLU;

	t52 = ((x2137/(x2138+x2139))>>x2140);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2177 = 20937341U;
	volatile int32_t x2178 = 17;
	static uint64_t x2179 = UINT64_MAX;
	static volatile int8_t x2180 = 1;

	t53 = ((x2177/(x2178+x2179))>>x2180);

	if (t53 != 654291LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2202 = INT16_MAX;
	uint64_t x2203 = 178905129179791LLU;

	t54 = ((x2201/(x2202+x2203))>>x2204);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2286 = UINT32_MAX;
	static int64_t x2287 = INT64_MIN;
	volatile int8_t x2288 = 60;
	static int64_t t55 = -28894345401100122LL;

	t55 = ((x2285/(x2286+x2287))>>x2288);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x2333 = INT8_MAX;
	uint32_t x2334 = 2824U;
	int8_t x2335 = INT8_MAX;
	uint8_t x2336 = 15U;
	static uint32_t t56 = 704015U;

	t56 = ((x2333/(x2334+x2335))>>x2336);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2369 = 300009446696052736LL;
	static volatile int8_t x2372 = 1;
	volatile int64_t t57 = 155LL;

	t57 = ((x2369/(x2370+x2371))>>x2372);

	if (t57 != 16667191483114040LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2397 = -1;
	volatile uint8_t x2398 = UINT8_MAX;
	int8_t x2399 = INT8_MIN;
	uint8_t x2400 = 0U;

	t58 = ((x2397/(x2398+x2399))>>x2400);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2449 = INT8_MIN;
	int16_t x2450 = -11839;
	uint32_t x2451 = 1569622138U;
	uint32_t t59 = 55U;

	t59 = ((x2449/(x2450+x2451))>>x2452);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2453 = INT32_MIN;
	uint32_t x2454 = UINT32_MAX;
	static int32_t x2455 = -1;
	static int16_t x2456 = 1;
	uint32_t t60 = 135U;

	t60 = ((x2453/(x2454+x2455))>>x2456);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2473 = INT16_MIN;
	static uint64_t x2474 = 228328407382LLU;
	uint64_t t61 = 4713022242847361051LLU;

	t61 = ((x2473/(x2474+x2475))>>x2476);

	if (t61 != 80790399LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2594 = UINT64_MAX;
	volatile int32_t x2595 = 263793555;
	volatile uint8_t x2596 = 19U;
	volatile uint64_t t62 = 1624467081135574397LLU;

	t62 = ((x2593/(x2594+x2595))>>x2596);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2618 = UINT8_MAX;
	uint32_t x2619 = 138177U;
	volatile uint32_t t63 = 478656280U;

	t63 = ((x2617/(x2618+x2619))>>x2620);

	if (t63 != 7756U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2690 = 58357999U;
	uint8_t x2692 = 24U;
	static volatile uint32_t t64 = 1394034374U;

	t64 = ((x2689/(x2690+x2691))>>x2692);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2773 = -3883122;
	int32_t x2774 = INT32_MAX;
	uint8_t x2776 = 36U;

	t65 = ((x2773/(x2774+x2775))>>x2776);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2793 = 12657991U;
	int16_t x2794 = -1;
	static int8_t x2795 = INT8_MIN;
	int64_t x2796 = 1LL;

	t66 = ((x2793/(x2794+x2795))>>x2796);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2821 = -1;
	uint32_t x2823 = 14U;
	int16_t x2824 = 29;
	volatile uint32_t t67 = 481507584U;

	t67 = ((x2821/(x2822+x2823))>>x2824);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2841 = 28189U;
	uint8_t x2842 = 37U;
	volatile uint32_t x2844 = 1U;
	volatile int32_t t68 = 99365;

	t68 = ((x2841/(x2842+x2843))>>x2844);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x2905 = 18U;
	uint64_t x2906 = 44985997707LLU;
	static int32_t x2907 = 125996;
	int8_t x2908 = 4;
	static volatile uint64_t t69 = 371010858812508185LLU;

	t69 = ((x2905/(x2906+x2907))>>x2908);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2993 = INT32_MAX;
	static int64_t x2994 = INT64_MIN;
	int8_t x2995 = INT8_MAX;
	uint8_t x2996 = 1U;
	int64_t t70 = -25594787LL;

	t70 = ((x2993/(x2994+x2995))>>x2996);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3017 = 112LL;
	volatile int8_t x3018 = 14;
	int16_t x3019 = INT16_MIN;
	volatile int16_t x3020 = 10;

	t71 = ((x3017/(x3018+x3019))>>x3020);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3070 = 100889572LLU;
	int8_t x3072 = 0;
	static uint64_t t72 = 5201228115LLU;

	t72 = ((x3069/(x3070+x3071))>>x3072);

	if (t72 != 182816947397LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3081 = INT32_MIN;
	uint64_t x3082 = 8261591505916LLU;
	volatile uint64_t x3084 = 2LLU;
	volatile uint64_t t73 = 449088967570934789LLU;

	t73 = ((x3081/(x3082+x3083))>>x3084);

	if (t73 != 558207LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3170 = -1;
	int16_t x3172 = 29;
	volatile int64_t t74 = -47373LL;

	t74 = ((x3169/(x3170+x3171))>>x3172);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3174 = 637358163165LLU;
	static int64_t x3175 = INT64_MIN;
	uint8_t x3176 = 1U;
	static volatile uint64_t t75 = 3239LLU;

	t75 = ((x3173/(x3174+x3175))>>x3176);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3213 = -1LL;
	int8_t x3214 = INT8_MIN;
	volatile uint64_t x3215 = UINT64_MAX;
	volatile uint8_t x3216 = 21U;
	volatile uint64_t t76 = 102061666741743LLU;

	t76 = ((x3213/(x3214+x3215))>>x3216);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3221 = 2U;
	static int64_t x3222 = 12369372LL;
	static int64_t x3223 = INT64_MIN;
	volatile int16_t x3224 = 0;
	int64_t t77 = -175199LL;

	t77 = ((x3221/(x3222+x3223))>>x3224);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3237 = UINT8_MAX;
	volatile int16_t x3238 = -1;
	static volatile uint32_t x3239 = 79126U;
	uint32_t t78 = 2663U;

	t78 = ((x3237/(x3238+x3239))>>x3240);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3253 = 1U;
	static int32_t x3254 = -1063734;
	volatile int64_t x3255 = -2LL;
	uint32_t x3256 = 1U;
	volatile int64_t t79 = -4105404108826LL;

	t79 = ((x3253/(x3254+x3255))>>x3256);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3265 = 9U;
	static volatile int16_t x3266 = INT16_MIN;
	int32_t x3267 = -1;
	volatile int32_t t80 = 949;

	t80 = ((x3265/(x3266+x3267))>>x3268);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3309 = 4U;
	int16_t x3310 = -12858;
	int32_t x3311 = 18;
	int8_t x3312 = 2;
	volatile int32_t t81 = -886847;

	t81 = ((x3309/(x3310+x3311))>>x3312);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3318 = INT16_MAX;
	int32_t x3319 = INT32_MIN;
	uint8_t x3320 = 38U;
	int64_t t82 = -4881052814LL;

	t82 = ((x3317/(x3318+x3319))>>x3320);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3349 = INT32_MAX;
	int32_t x3350 = 875696638;
	static int32_t x3351 = -1;
	volatile uint8_t x3352 = 28U;
	volatile int32_t t83 = 435861079;

	t83 = ((x3349/(x3350+x3351))>>x3352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3358 = 23;
	uint8_t x3360 = 1U;
	volatile int32_t t84 = 791975135;

	t84 = ((x3357/(x3358+x3359))>>x3360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3409 = 47163065837LLU;
	int64_t x3410 = 29424375750LL;
	volatile uint16_t x3411 = 75U;
	static uint32_t x3412 = 13U;
	static uint64_t t85 = 228013443149LLU;

	t85 = ((x3409/(x3410+x3411))>>x3412);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x3433 = 1830U;
	int8_t x3434 = INT8_MIN;
	uint64_t x3435 = UINT64_MAX;
	volatile int8_t x3436 = 8;
	volatile uint64_t t86 = 238211064621560LLU;

	t86 = ((x3433/(x3434+x3435))>>x3436);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3475 = INT64_MIN;
	uint64_t x3476 = 1LLU;
	int64_t t87 = -611792LL;

	t87 = ((x3473/(x3474+x3475))>>x3476);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3480 = 10U;

	t88 = ((x3477/(x3478+x3479))>>x3480);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3485 = 2;
	int32_t x3486 = INT32_MIN;
	static int64_t x3487 = 77219626LL;
	int8_t x3488 = 14;
	int64_t t89 = -6501312115206709LL;

	t89 = ((x3485/(x3486+x3487))>>x3488);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x3541 = -6824894LL;
	int8_t x3542 = -1;
	int32_t x3543 = -23;
	uint64_t x3544 = 3LLU;

	t90 = ((x3541/(x3542+x3543))>>x3544);

	if (t90 != 35546LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3573 = UINT16_MAX;
	uint8_t x3574 = 2U;
	static int32_t x3575 = 795;
	uint8_t x3576 = 1U;
	static volatile int32_t t91 = 247209037;

	t91 = ((x3573/(x3574+x3575))>>x3576);

	if (t91 != 41) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3617 = INT8_MIN;
	int32_t x3619 = INT32_MAX;
	volatile uint64_t x3620 = 15LLU;
	int64_t t92 = 1LL;

	t92 = ((x3617/(x3618+x3619))>>x3620);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3665 = -1;
	uint8_t x3668 = 4U;
	static uint64_t t93 = 28981LLU;

	t93 = ((x3665/(x3666+x3667))>>x3668);

	if (t93 != 903LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3709 = 3;
	uint8_t x3710 = UINT8_MAX;
	int64_t x3711 = INT64_MIN;
	uint64_t x3712 = 11LLU;
	volatile int64_t t94 = 957796345752956908LL;

	t94 = ((x3709/(x3710+x3711))>>x3712);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3713 = -1;
	uint8_t x3714 = 8U;
	uint32_t x3715 = UINT32_MAX;
	int8_t x3716 = 0;

	t95 = ((x3713/(x3714+x3715))>>x3716);

	if (t95 != 613566756U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x3729 = INT16_MIN;
	uint8_t x3730 = 3U;
	int16_t x3731 = INT16_MIN;
	static int8_t x3732 = 0;
	volatile int32_t t96 = 25;

	t96 = ((x3729/(x3730+x3731))>>x3732);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3757 = INT16_MIN;
	int64_t x3758 = INT64_MIN;
	uint8_t x3760 = 1U;
	int64_t t97 = 33382117847LL;

	t97 = ((x3757/(x3758+x3759))>>x3760);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3777 = INT8_MIN;
	uint32_t x3778 = 1299657828U;
	volatile uint16_t x3779 = UINT16_MAX;
	uint32_t x3780 = 12U;
	uint32_t t98 = 7719U;

	t98 = ((x3777/(x3778+x3779))>>x3780);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3873 = -3378;
	uint64_t x3874 = 5872552LLU;
	int16_t x3875 = INT16_MAX;
	volatile int16_t x3876 = 1;

	t99 = ((x3873/(x3874+x3875))>>x3876);

	if (t99 != 1561875325762LLU) { NG(); } else { ; }
	
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

