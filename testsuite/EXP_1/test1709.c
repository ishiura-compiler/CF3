#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x37 = -1LL;
volatile uint64_t x95 = UINT64_MAX;
static int8_t x242 = -1;
uint16_t x244 = 0U;
int8_t x347 = 2;
volatile int8_t x411 = -1;
uint8_t x451 = UINT8_MAX;
volatile int64_t x466 = -196814171LL;
static volatile int64_t t14 = 19LL;
int64_t t15 = -117562037LL;
volatile int64_t x690 = INT64_MAX;
uint64_t x694 = UINT64_MAX;
volatile int64_t t21 = -763516LL;
int32_t x889 = INT32_MIN;
uint64_t x891 = 2160032189276774140LLU;
uint64_t t24 = 286856676665816LLU;
volatile int8_t x974 = INT8_MAX;
static uint8_t x976 = 11U;
uint64_t t25 = 5LLU;
uint8_t x1120 = 2U;
static uint64_t x1135 = 1718304622225062LLU;
volatile uint64_t t30 = 3961574805LLU;
uint32_t x1205 = 55764U;
static int16_t x1259 = -1;
int32_t t35 = -72829;
uint16_t x1517 = 0U;
volatile int32_t t36 = -148904462;
int32_t t37 = -216457582;
int16_t x1553 = -1;
uint64_t x1554 = 87270LLU;
volatile uint16_t x1579 = UINT16_MAX;
volatile uint64_t t40 = 90517877629087864LLU;
int64_t x1724 = 1LL;
volatile uint64_t t42 = 22818LLU;
int16_t x1915 = 1;
int32_t x1916 = 12;
volatile uint32_t t44 = 4227627U;
static uint64_t x1925 = UINT64_MAX;
int64_t x1927 = 13027481LL;
int32_t x2177 = INT32_MIN;
volatile int32_t x2178 = INT32_MIN;
uint32_t x2179 = UINT32_MAX;
static uint32_t t47 = 655106U;
uint64_t x2210 = 3412797LLU;
volatile uint64_t x2211 = 1216991132551416LLU;
int8_t x2212 = 1;
volatile uint64_t t49 = 1LLU;
static int32_t x2323 = INT32_MAX;
uint32_t x2447 = 33U;
volatile uint8_t x2448 = 10U;
uint64_t x2525 = 28272415855LLU;
int32_t x2731 = -1;
uint64_t t56 = 128446187594722234LLU;
uint16_t x2788 = 8U;
uint64_t x2813 = 93LLU;
volatile uint64_t t60 = 4746LLU;
uint64_t x2898 = 233930020620LLU;
int8_t x2908 = 2;
uint64_t t62 = 0LLU;
volatile int64_t t63 = 143455880LL;
uint64_t x2961 = 64752301867299388LLU;
static uint16_t x2962 = 18U;
static volatile int16_t x2989 = INT16_MAX;
uint64_t x2991 = 15203LLU;
int64_t x3186 = 68722760100LL;
uint8_t x3291 = 1U;
volatile uint64_t t70 = 372906LLU;
volatile int64_t x3367 = -530554238352685LL;
uint32_t x3630 = 2U;
uint8_t x3631 = 59U;
uint16_t x3661 = UINT16_MAX;
uint16_t x3749 = 15U;
static volatile uint32_t x3752 = 1U;
uint64_t t77 = 275084598836099LLU;
volatile uint64_t t78 = 96674734877670050LLU;
uint32_t x3866 = UINT32_MAX;
int64_t x3974 = INT64_MAX;
int64_t x3975 = INT64_MIN;
static uint64_t t80 = 27748507992417819LLU;
int64_t x4046 = -1LL;
uint16_t x4047 = 1198U;
uint16_t x4300 = 1U;
uint32_t x4354 = UINT32_MAX;
int32_t x4421 = INT32_MAX;
int16_t x4423 = 1;
int8_t x4632 = 1;
uint32_t t91 = 1204747196U;
volatile int64_t x4751 = -1516763106813716415LL;
int8_t x4788 = 24;
static volatile uint32_t t93 = 55990U;
uint32_t x4797 = UINT32_MAX;
volatile int8_t x4924 = 1;


void f0(void) {
	volatile uint16_t x38 = 17261U;
	volatile uint64_t x39 = UINT64_MAX;
	volatile uint8_t x40 = 0U;
	static volatile uint64_t t0 = 204224412699215898LLU;

	t0 = (((x37&x38)-x39)<<x40);

	if (t0 != 17262LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x65 = INT16_MIN;
	static volatile int32_t x66 = 227393185;
	static int64_t x67 = -245362891LL;
	static int8_t x68 = 0;
	volatile int64_t t1 = 20118095857975LL;

	t1 = (((x65&x66)-x67)<<x68);

	if (t1 != 472740043LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x93 = 221660131671445LLU;
	int16_t x94 = 1857;
	static uint8_t x96 = 1U;
	static volatile uint64_t t2 = 55102345727LLU;

	t2 = (((x93&x94)-x95)<<x96);

	if (t2 != 2564LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	volatile int8_t x147 = -5;
	uint16_t x148 = 3U;
	int32_t t3 = -26999258;

	t3 = (((x145&x146)-x147)<<x148);

	if (t3 != 40) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x237 = INT64_MIN;
	uint32_t x238 = 3596U;
	volatile int64_t x239 = -1LL;
	static int16_t x240 = 0;
	int64_t t4 = 14658964989582245LL;

	t4 = (((x237&x238)-x239)<<x240);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x241 = 31489U;
	uint8_t x243 = 8U;
	volatile int32_t t5 = 41006;

	t5 = (((x241&x242)-x243)<<x244);

	if (t5 != 31481) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x345 = 15U;
	static uint64_t x346 = 303191926438LLU;
	static int64_t x348 = 1LL;
	volatile uint64_t t6 = 17623737695692LLU;

	t6 = (((x345&x346)-x347)<<x348);

	if (t6 != 8LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x381 = 2586;
	int32_t x382 = INT32_MAX;
	static volatile int64_t x383 = -1LL;
	volatile uint8_t x384 = 17U;
	static volatile int64_t t7 = 2025803943LL;

	t7 = (((x381&x382)-x383)<<x384);

	if (t7 != 339083264LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x385 = 6;
	static uint16_t x386 = UINT16_MAX;
	int64_t x387 = -1LL;
	static int16_t x388 = 1;
	int64_t t8 = 3452411338251932LL;

	t8 = (((x385&x386)-x387)<<x388);

	if (t8 != 14LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x409 = 72U;
	int16_t x410 = INT16_MAX;
	static int32_t x412 = 23;
	int32_t t9 = -899056;

	t9 = (((x409&x410)-x411)<<x412);

	if (t9 != 612368384) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x449 = 186447521705LLU;
	uint16_t x450 = 1U;
	int8_t x452 = 42;
	uint64_t t10 = 1084154235528066413LLU;

	t10 = (((x449&x450)-x451)<<x452);

	if (t10 != 18445626969895731200LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x457 = INT16_MAX;
	volatile int8_t x458 = 19;
	static volatile uint64_t x459 = UINT64_MAX;
	uint8_t x460 = 18U;
	uint64_t t11 = 73433960275540LLU;

	t11 = (((x457&x458)-x459)<<x460);

	if (t11 != 5242880LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x465 = UINT8_MAX;
	static int16_t x467 = -1;
	uint8_t x468 = 0U;
	int64_t t12 = 251735644301500046LL;

	t12 = (((x465&x466)-x467)<<x468);

	if (t12 != 166LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x485 = 247LLU;
	uint16_t x486 = 0U;
	static uint32_t x487 = UINT32_MAX;
	volatile int8_t x488 = 1;
	uint64_t t13 = 1LLU;

	t13 = (((x485&x486)-x487)<<x488);

	if (t13 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x497 = -17172763LL;
	uint16_t x498 = 57U;
	int64_t x499 = -155337033LL;
	uint8_t x500 = 33U;

	t14 = (((x497&x498)-x499)<<x500);

	if (t14 != 1334335236653187072LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x517 = -179681543LL;
	volatile int8_t x518 = INT8_MAX;
	static volatile uint8_t x519 = 0U;
	volatile uint16_t x520 = 0U;

	t15 = (((x517&x518)-x519)<<x520);

	if (t15 != 121LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x613 = 364228557865LLU;
	static int16_t x614 = INT16_MIN;
	uint32_t x615 = 9710540U;
	int16_t x616 = 0;
	static uint64_t t16 = 186719967249962907LLU;

	t16 = (((x613&x614)-x615)<<x616);

	if (t16 != 364218831924LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x617 = 32U;
	int16_t x618 = INT16_MIN;
	uint32_t x619 = 12U;
	uint32_t x620 = 15U;
	static uint32_t t17 = 1626U;

	t17 = (((x617&x618)-x619)<<x620);

	if (t17 != 4294574080U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x673 = UINT64_MAX;
	static int8_t x674 = INT8_MIN;
	int32_t x675 = -1;
	uint32_t x676 = 4U;
	uint64_t t18 = 34563821343LLU;

	t18 = (((x673&x674)-x675)<<x676);

	if (t18 != 18446744073709549584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x689 = -44036;
	uint64_t x691 = 55392383LLU;
	volatile int8_t x692 = 5;
	uint64_t t19 = 1880LLU;

	t19 = (((x689&x690)-x691)<<x692);

	if (t19 != 18446744071935586208LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x693 = -1LL;
	static uint16_t x695 = 68U;
	static uint8_t x696 = 0U;
	volatile uint64_t t20 = 517LLU;

	t20 = (((x693&x694)-x695)<<x696);

	if (t20 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x717 = 7538U;
	int64_t x718 = -1LL;
	volatile int16_t x719 = -1;
	volatile int64_t x720 = 21LL;

	t21 = (((x717&x718)-x719)<<x720);

	if (t21 != 15810428928LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x890 = INT64_MIN;
	int8_t x892 = 0;
	volatile uint64_t t22 = 1529LLU;

	t22 = (((x889&x890)-x891)<<x892);

	if (t22 != 7063339847578001668LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x909 = UINT64_MAX;
	static volatile uint32_t x910 = UINT32_MAX;
	volatile int8_t x911 = INT8_MIN;
	uint8_t x912 = 12U;
	volatile uint64_t t23 = 113282253331LLU;

	t23 = (((x909&x910)-x911)<<x912);

	if (t23 != 17592186564608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x961 = 341702973U;
	int32_t x962 = INT32_MIN;
	volatile uint64_t x963 = 60899850055406LLU;
	static uint8_t x964 = 7U;

	t24 = (((x961&x962)-x963)<<x964);

	if (t24 != 18438948892902459648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x973 = -1;
	uint64_t x975 = UINT64_MAX;

	t25 = (((x973&x974)-x975)<<x976);

	if (t25 != 262144LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1105 = 1143102U;
	uint32_t x1106 = 11525U;
	static int64_t x1107 = -307LL;
	static volatile uint16_t x1108 = 4U;
	static int64_t t26 = -43485631LL;

	t26 = (((x1105&x1106)-x1107)<<x1108);

	if (t26 != 140144LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1117 = INT32_MIN;
	int16_t x1118 = INT16_MIN;
	uint64_t x1119 = 137555LLU;
	volatile uint64_t t27 = 47320376460LLU;

	t27 = (((x1117&x1118)-x1119)<<x1120);

	if (t27 != 18446744065119066804LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x1129 = -541477874;
	static volatile uint64_t x1130 = UINT64_MAX;
	uint32_t x1131 = 15876833U;
	uint8_t x1132 = 1U;
	volatile uint64_t t28 = 4LLU;

	t28 = (((x1129&x1130)-x1131)<<x1132);

	if (t28 != 18446744072594842202LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1133 = INT64_MAX;
	static uint64_t x1134 = UINT64_MAX;
	uint32_t x1136 = 1U;
	uint64_t t29 = 214020LLU;

	t29 = (((x1133&x1134)-x1135)<<x1136);

	if (t29 != 18443307464465101490LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1137 = UINT64_MAX;
	int64_t x1138 = -59296LL;
	int64_t x1139 = INT64_MIN;
	volatile int8_t x1140 = 1;

	t30 = (((x1137&x1138)-x1139)<<x1140);

	if (t30 != 18446744073709433024LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1193 = 755166169U;
	uint64_t x1194 = 2507202859369257852LLU;
	int32_t x1195 = INT32_MIN;
	static int8_t x1196 = 2;
	volatile uint64_t t31 = 51465926LLU;

	t31 = (((x1193&x1194)-x1195)<<x1196);

	if (t31 != 8858447200LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1206 = 2946LLU;
	uint8_t x1207 = 17U;
	volatile uint8_t x1208 = 23U;
	volatile uint64_t t32 = 135LLU;

	t32 = (((x1205&x1206)-x1207)<<x1208);

	if (t32 != 20258488320LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1257 = 74547160847LL;
	static int64_t x1258 = INT64_MIN;
	uint8_t x1260 = 2U;
	int64_t t33 = -14137212LL;

	t33 = (((x1257&x1258)-x1259)<<x1260);

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1333 = UINT64_MAX;
	int16_t x1334 = 195;
	uint16_t x1335 = 2U;
	uint8_t x1336 = 1U;
	uint64_t t34 = 59902428LLU;

	t34 = (((x1333&x1334)-x1335)<<x1336);

	if (t34 != 386LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1477 = UINT8_MAX;
	uint16_t x1478 = UINT16_MAX;
	static int16_t x1479 = -871;
	uint8_t x1480 = 12U;

	t35 = (((x1477&x1478)-x1479)<<x1480);

	if (t35 != 4612096) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1518 = UINT16_MAX;
	int16_t x1519 = INT16_MIN;
	static volatile uint8_t x1520 = 1U;

	t36 = (((x1517&x1518)-x1519)<<x1520);

	if (t36 != 65536) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1533 = INT32_MIN;
	int16_t x1534 = INT16_MAX;
	volatile int16_t x1535 = -647;
	volatile int8_t x1536 = 0;

	t37 = (((x1533&x1534)-x1535)<<x1536);

	if (t37 != 647) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1555 = INT64_MIN;
	int8_t x1556 = 21;
	uint64_t t38 = 53040341LLU;

	t38 = (((x1553&x1554)-x1555)<<x1556);

	if (t38 != 183018455040LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1573 = INT8_MIN;
	int32_t x1574 = 187;
	volatile int64_t x1575 = -4LL;
	int8_t x1576 = 7;
	volatile int64_t t39 = -14643LL;

	t39 = (((x1573&x1574)-x1575)<<x1576);

	if (t39 != 16896LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1577 = INT64_MIN;
	uint64_t x1578 = 927134741LLU;
	volatile uint64_t x1580 = 1LLU;

	t40 = (((x1577&x1578)-x1579)<<x1580);

	if (t40 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1721 = -53829296274864626LL;
	volatile int64_t x1722 = INT64_MIN;
	int64_t x1723 = INT64_MIN;
	volatile int64_t t41 = 1578087703083698LL;

	t41 = (((x1721&x1722)-x1723)<<x1724);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1765 = INT16_MAX;
	uint64_t x1766 = 126799LLU;
	int64_t x1767 = INT64_MAX;
	uint8_t x1768 = 0U;

	t42 = (((x1765&x1766)-x1767)<<x1768);

	if (t42 != 9223372036854804304LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1865 = UINT16_MAX;
	int16_t x1866 = INT16_MAX;
	static int16_t x1867 = -1;
	int8_t x1868 = 0;
	volatile int32_t t43 = -1478710;

	t43 = (((x1865&x1866)-x1867)<<x1868);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1913 = INT16_MIN;
	uint32_t x1914 = 3921325U;

	t44 = (((x1913&x1914)-x1915)<<x1916);

	if (t44 != 3087003648U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1926 = 5;
	int16_t x1928 = 5;
	uint64_t t45 = 564900022840481LLU;

	t45 = (((x1925&x1926)-x1927)<<x1928);

	if (t45 != 18446744073292672384LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1965 = -1211;
	static volatile uint32_t x1966 = 24139317U;
	volatile uint32_t x1967 = UINT32_MAX;
	int16_t x1968 = 1;
	volatile uint32_t t46 = 595U;

	t46 = (((x1965&x1966)-x1967)<<x1968);

	if (t46 != 48276492U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2180 = 1LLU;

	t47 = (((x2177&x2178)-x2179)<<x2180);

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2209 = 1;
	static volatile uint64_t t48 = 191728122772667LLU;

	t48 = (((x2209&x2210)-x2211)<<x2212);

	if (t48 != 18444310091444448786LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2297 = INT16_MIN;
	uint16_t x2298 = 2U;
	volatile uint64_t x2299 = 1950066872053485LLU;
	int8_t x2300 = 2;

	t49 = (((x2297&x2298)-x2299)<<x2300);

	if (t49 != 18438943806221337676LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2321 = 7890439739709LLU;
	int8_t x2322 = -1;
	int8_t x2324 = 9;
	volatile uint64_t t50 = 28968479925LLU;

	t50 = (((x2321&x2322)-x2323)<<x2324);

	if (t50 != 4038805635103744LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2445 = INT16_MIN;
	int8_t x2446 = INT8_MIN;
	uint32_t t51 = 3U;

	t51 = (((x2445&x2446)-x2447)<<x2448);

	if (t51 != 4261379072U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x2526 = 897163325U;
	int32_t x2527 = INT32_MIN;
	int16_t x2528 = 10;
	uint64_t t52 = 30876686LLU;

	t52 = (((x2525&x2526)-x2527)<<x2528);

	if (t52 != 2562518463488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2573 = INT64_MIN;
	uint32_t x2574 = 12692U;
	volatile int32_t x2575 = INT32_MIN;
	uint16_t x2576 = 15U;
	volatile int64_t t53 = -563510608999976295LL;

	t53 = (((x2573&x2574)-x2575)<<x2576);

	if (t53 != 70368744177664LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2581 = INT16_MAX;
	static uint8_t x2582 = 96U;
	uint32_t x2583 = 31U;
	volatile uint8_t x2584 = 0U;
	uint32_t t54 = 1U;

	t54 = (((x2581&x2582)-x2583)<<x2584);

	if (t54 != 65U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2685 = INT8_MIN;
	uint16_t x2686 = 318U;
	uint32_t x2687 = 55072U;
	static uint8_t x2688 = 2U;
	static uint32_t t55 = 1655U;

	t55 = (((x2685&x2686)-x2687)<<x2688);

	if (t55 != 4294748032U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x2729 = UINT64_MAX;
	uint32_t x2730 = UINT32_MAX;
	int8_t x2732 = 0;

	t56 = (((x2729&x2730)-x2731)<<x2732);

	if (t56 != 4294967296LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x2745 = 10LLU;
	volatile int32_t x2746 = -1;
	int8_t x2747 = INT8_MIN;
	int32_t x2748 = 4;
	static uint64_t t57 = 8266556316203909165LLU;

	t57 = (((x2745&x2746)-x2747)<<x2748);

	if (t57 != 2208LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2785 = 0U;
	uint64_t x2786 = 27708858278018471LLU;
	int8_t x2787 = 7;
	uint64_t t58 = 2159401229882LLU;

	t58 = (((x2785&x2786)-x2787)<<x2788);

	if (t58 != 18446744073709549824LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2814 = 488892771;
	uint32_t x2815 = UINT32_MAX;
	int16_t x2816 = 1;
	volatile uint64_t t59 = 3713LLU;

	t59 = (((x2813&x2814)-x2815)<<x2816);

	if (t59 != 18446744065119617156LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2865 = 273161027137LLU;
	int8_t x2866 = INT8_MIN;
	int16_t x2867 = INT16_MAX;
	uint32_t x2868 = 3U;

	t60 = (((x2865&x2866)-x2867)<<x2868);

	if (t60 != 2185287954440LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2897 = INT32_MIN;
	uint8_t x2899 = UINT8_MAX;
	uint8_t x2900 = 18U;
	uint64_t t61 = 179LLU;

	t61 = (((x2897&x2898)-x2899)<<x2900);

	if (t61 != 60798594902654976LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x2905 = -1;
	uint16_t x2906 = 8716U;
	uint64_t x2907 = 166086258715297194LLU;

	t62 = (((x2905&x2906)-x2907)<<x2908);

	if (t62 != 17782399038848397704LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2933 = 411071615LL;
	int64_t x2934 = INT64_MAX;
	int8_t x2935 = -1;
	uint8_t x2936 = 0U;

	t63 = (((x2933&x2934)-x2935)<<x2936);

	if (t63 != 411071616LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2963 = 961778LLU;
	static uint64_t x2964 = 0LLU;
	volatile uint64_t t64 = 53853126519178LLU;

	t64 = (((x2961&x2962)-x2963)<<x2964);

	if (t64 != 18446744073708589854LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x2990 = 24074487U;
	int8_t x2992 = 1;
	volatile uint64_t t65 = 65583936003175LLU;

	t65 = (((x2989&x2990)-x2991)<<x2992);

	if (t65 != 15144LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2993 = UINT64_MAX;
	int16_t x2994 = INT16_MIN;
	int8_t x2995 = INT8_MAX;
	volatile uint8_t x2996 = 14U;
	static uint64_t t66 = 105159LLU;

	t66 = (((x2993&x2994)-x2995)<<x2996);

	if (t66 != 18446744073170599936LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3045 = -1LL;
	uint8_t x3046 = UINT8_MAX;
	uint8_t x3047 = UINT8_MAX;
	uint64_t x3048 = 10LLU;
	int64_t t67 = -66778716LL;

	t67 = (((x3045&x3046)-x3047)<<x3048);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3185 = INT16_MIN;
	static volatile int8_t x3187 = -1;
	uint8_t x3188 = 1U;
	int64_t t68 = 1595LL;

	t68 = (((x3185&x3186)-x3187)<<x3188);

	if (t68 != 137445507074LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3213 = -1;
	static uint16_t x3214 = 2U;
	static int8_t x3215 = -1;
	volatile uint32_t x3216 = 1U;
	int32_t t69 = 50373489;

	t69 = (((x3213&x3214)-x3215)<<x3216);

	if (t69 != 6) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3289 = 13175897602LLU;
	volatile uint8_t x3290 = 1U;
	int8_t x3292 = 1;

	t70 = (((x3289&x3290)-x3291)<<x3292);

	if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3365 = -1;
	volatile int16_t x3366 = INT16_MAX;
	static uint8_t x3368 = 12U;
	int64_t t71 = -12765094LL;

	t71 = (((x3365&x3366)-x3367)<<x3368);

	if (t71 != 2173150160426811392LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3449 = UINT32_MAX;
	uint32_t x3450 = UINT32_MAX;
	int8_t x3451 = INT8_MAX;
	static uint8_t x3452 = 3U;
	uint32_t t72 = 9U;

	t72 = (((x3449&x3450)-x3451)<<x3452);

	if (t72 != 4294966272U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3569 = INT8_MAX;
	int64_t x3570 = INT64_MAX;
	int8_t x3571 = INT8_MIN;
	int8_t x3572 = 0;
	volatile int64_t t73 = 1882705771671LL;

	t73 = (((x3569&x3570)-x3571)<<x3572);

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3629 = INT16_MIN;
	uint8_t x3632 = 1U;
	volatile uint32_t t74 = 167274736U;

	t74 = (((x3629&x3630)-x3631)<<x3632);

	if (t74 != 4294967178U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x3662 = INT32_MIN;
	int16_t x3663 = -1;
	uint16_t x3664 = 5U;
	static volatile int32_t t75 = 258;

	t75 = (((x3661&x3662)-x3663)<<x3664);

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x3750 = UINT8_MAX;
	int16_t x3751 = -1;
	int32_t t76 = 251693;

	t76 = (((x3749&x3750)-x3751)<<x3752);

	if (t76 != 32) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3781 = INT64_MIN;
	int16_t x3782 = INT16_MIN;
	uint64_t x3783 = 7LLU;
	int8_t x3784 = 0;

	t77 = (((x3781&x3782)-x3783)<<x3784);

	if (t77 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x3805 = UINT64_MAX;
	uint64_t x3806 = 7107703143216334LLU;
	static int64_t x3807 = INT64_MIN;
	uint16_t x3808 = 1U;

	t78 = (((x3805&x3806)-x3807)<<x3808);

	if (t78 != 14215406286432668LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x3865 = INT16_MIN;
	volatile uint16_t x3867 = 11U;
	uint8_t x3868 = 3U;
	volatile uint32_t t79 = 5806857U;

	t79 = (((x3865&x3866)-x3867)<<x3868);

	if (t79 != 4294705064U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3973 = 56487723841399LLU;
	volatile uint8_t x3976 = 2U;

	t80 = (((x3973&x3974)-x3975)<<x3976);

	if (t80 != 225950895365596LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4045 = 175216585;
	uint8_t x4048 = 13U;
	int64_t t81 = 21980702469766246LL;

	t81 = (((x4045&x4046)-x4047)<<x4048);

	if (t81 != 1435364450304LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x4073 = INT16_MAX;
	int64_t x4074 = INT64_MIN;
	static int16_t x4075 = INT16_MIN;
	static uint32_t x4076 = 30U;
	int64_t t82 = -300215054LL;

	t82 = (((x4073&x4074)-x4075)<<x4076);

	if (t82 != 35184372088832LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4205 = 39600LL;
	volatile int16_t x4206 = INT16_MIN;
	uint64_t x4207 = 14LLU;
	uint8_t x4208 = 28U;
	volatile uint64_t t83 = 105LLU;

	t83 = (((x4205&x4206)-x4207)<<x4208);

	if (t83 != 8792334925824LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4297 = -118139;
	static volatile uint32_t x4298 = UINT32_MAX;
	uint32_t x4299 = UINT32_MAX;
	uint32_t t84 = 13U;

	t84 = (((x4297&x4298)-x4299)<<x4300);

	if (t84 != 4294731020U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4353 = -1;
	int16_t x4355 = 145;
	uint8_t x4356 = 5U;
	volatile uint32_t t85 = 241433233U;

	t85 = (((x4353&x4354)-x4355)<<x4356);

	if (t85 != 4294962624U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4422 = -2914365191250LL;
	int32_t x4424 = 4;
	int64_t t86 = -1955513257124311LL;

	t86 = (((x4421&x4422)-x4423)<<x4424);

	if (t86 != 30681643728LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4441 = UINT32_MAX;
	static int8_t x4442 = 22;
	int8_t x4443 = -1;
	int8_t x4444 = 1;
	uint32_t t87 = 244841970U;

	t87 = (((x4441&x4442)-x4443)<<x4444);

	if (t87 != 46U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x4557 = INT32_MAX;
	int32_t x4558 = INT32_MAX;
	volatile uint64_t x4559 = 198LLU;
	volatile int8_t x4560 = 0;
	static uint64_t t88 = 17334032LLU;

	t88 = (((x4557&x4558)-x4559)<<x4560);

	if (t88 != 2147483449LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4577 = UINT64_MAX;
	int8_t x4578 = -1;
	int8_t x4579 = -1;
	static uint16_t x4580 = 3U;
	volatile uint64_t t89 = 35329784624480937LLU;

	t89 = (((x4577&x4578)-x4579)<<x4580);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4609 = INT32_MAX;
	uint64_t x4610 = 39755362728LLU;
	static int64_t x4611 = INT64_MIN;
	uint8_t x4612 = 17U;
	uint64_t t90 = 5080857803043383523LLU;

	t90 = (((x4609&x4610)-x4611)<<x4612);

	if (t90 != 144265322692608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4629 = 176U;
	int16_t x4630 = INT16_MIN;
	static uint32_t x4631 = 25742735U;

	t91 = (((x4629&x4630)-x4631)<<x4632);

	if (t91 != 4243481826U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4749 = 1LLU;
	static uint32_t x4750 = 20589U;
	uint32_t x4752 = 55U;
	uint64_t t92 = 3021875482508LLU;

	t92 = (((x4749&x4750)-x4751)<<x4752);

	if (t92 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x4785 = 286968296U;
	volatile uint16_t x4786 = 939U;
	volatile int8_t x4787 = -1;

	t93 = (((x4785&x4786)-x4787)<<x4788);

	if (t93 != 2835349504U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x4798 = UINT32_MAX;
	int32_t x4799 = -513;
	volatile int8_t x4800 = 0;
	volatile uint32_t t94 = 93U;

	t94 = (((x4797&x4798)-x4799)<<x4800);

	if (t94 != 512U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4825 = 47629;
	int64_t x4826 = INT64_MAX;
	uint32_t x4827 = 235U;
	uint16_t x4828 = 2U;
	int64_t t95 = -649328066805LL;

	t95 = (((x4825&x4826)-x4827)<<x4828);

	if (t95 != 189576LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4921 = -643602;
	int8_t x4922 = INT8_MAX;
	static uint64_t x4923 = 3484LLU;
	volatile uint64_t t96 = 3888179539064540LLU;

	t96 = (((x4921&x4922)-x4923)<<x4924);

	if (t96 != 18446744073709544868LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x4945 = 152376979LLU;
	uint16_t x4946 = UINT16_MAX;
	int32_t x4947 = INT32_MAX;
	volatile int16_t x4948 = 22;
	volatile uint64_t t97 = 154LLU;

	t97 = (((x4945&x4946)-x4947)<<x4948);

	if (t97 != 18437736898697887744LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x4949 = UINT16_MAX;
	uint64_t x4950 = 68259229LLU;
	volatile int8_t x4951 = -1;
	static int8_t x4952 = 1;
	uint64_t t98 = 321285166466368372LLU;

	t98 = (((x4949&x4950)-x4951)<<x4952);

	if (t98 != 72508LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4997 = 13LLU;
	static volatile int32_t x4998 = INT32_MIN;
	uint8_t x4999 = 30U;
	static uint16_t x5000 = 2U;
	uint64_t t99 = 423LLU;

	t99 = (((x4997&x4998)-x4999)<<x5000);

	if (t99 != 18446744073709551496LLU) { NG(); } else { ; }
	
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

