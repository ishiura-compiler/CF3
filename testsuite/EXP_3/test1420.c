#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x221 = 26;
volatile uint8_t x269 = 3U;
uint8_t x270 = 3U;
static uint64_t x272 = 4444LLU;
int32_t t4 = -17003266;
uint64_t x517 = 249797978LLU;
volatile int8_t x518 = 0;
volatile uint64_t x787 = 341498403368961LLU;
volatile int32_t x788 = INT32_MIN;
static volatile int32_t x847 = 32527405;
static uint32_t x854 = 30U;
uint8_t x894 = 3U;
volatile uint32_t x1274 = 3U;
static uint64_t x1375 = 83LLU;
uint32_t t18 = UINT32_MAX;
volatile uint64_t x1426 = 6LLU;
volatile int16_t x1428 = 1;
volatile uint64_t x1453 = 3890554512744LLU;
static int32_t x1456 = -19767;
volatile int16_t x1478 = 0;
int64_t x1585 = INT64_MAX;
volatile int8_t x1614 = 0;
uint32_t x1704 = 3242U;
static int32_t t25 = -628747;
int8_t x1927 = INT8_MIN;
int64_t x2011 = 631714168975LL;
volatile uint64_t x2069 = UINT64_MAX;
int64_t x2151 = 15221304741949317LL;
int64_t x2152 = INT64_MIN;
uint8_t x2286 = 0U;
int64_t x2288 = -1885LL;
int64_t x2324 = -1LL;
uint8_t x2458 = 0U;
int32_t t34 = 195632896;
static volatile uint16_t x2585 = UINT16_MAX;
static uint64_t x2588 = 319535530897903931LLU;
volatile uint64_t x2653 = 37225227333611138LLU;
uint8_t x2656 = 74U;
static volatile uint64_t t36 = 582899LLU;
uint64_t x2669 = 2798586287858LLU;
int16_t x2670 = 0;
static int16_t x2672 = INT16_MAX;
int64_t x2716 = 793794960LL;
uint16_t x2854 = 11U;
int16_t x2856 = INT16_MIN;
int16_t x2908 = -1;
static int32_t t43 = 356;
uint64_t x2913 = UINT64_MAX;
static uint64_t t44 = 11847LLU;
volatile int8_t x3013 = 3;
int32_t x3014 = 1;
static int64_t x3060 = INT64_MAX;
uint64_t x3093 = UINT64_MAX;
int32_t x3133 = INT32_MAX;
int16_t x3209 = 11089;
int32_t x3211 = -20257;
volatile int64_t x3212 = 7978158497724381LL;
static uint64_t x3349 = UINT64_MAX;
static volatile uint8_t x3350 = 4U;
static volatile int64_t x3631 = 25420040447LL;
static uint8_t x3766 = 13U;
uint8_t x3889 = 53U;
volatile int32_t t57 = INT32_MAX;
volatile int8_t x4051 = INT8_MAX;
int8_t x4062 = 1;
static uint64_t x4245 = UINT64_MAX;
static volatile int32_t x4246 = 0;
uint16_t x4247 = 365U;
uint16_t x4262 = 6U;
volatile int16_t x4269 = 0;
int32_t t62 = 951831466;
int32_t t65 = 817215436;
uint8_t x4594 = 1U;
volatile int8_t x4596 = INT8_MIN;
volatile uint16_t x4609 = 30U;
int32_t x4611 = INT32_MIN;
static int32_t t67 = 2;
volatile int32_t t68 = 1;
static int32_t t69 = 28197233;
int64_t x5131 = 21581LL;
static int8_t x5192 = 22;
static volatile uint32_t t72 = 145067874U;
int32_t t73 = -541;
static int16_t x5369 = 2;
uint8_t x5371 = 2U;
volatile int8_t x5386 = 1;
int32_t x5388 = 5;
uint64_t t76 = 249198254LLU;
int16_t x5690 = 15;
uint32_t t79 = 8U;
uint32_t x5733 = 2031U;
int32_t t84 = 448929;
volatile uint16_t x5933 = 810U;
uint32_t x5934 = 8U;
int16_t x5935 = -1;
volatile int16_t x5988 = 715;
uint32_t t88 = 50U;
static volatile uint8_t x6330 = 9U;
int8_t x6342 = 11;
int32_t x6399 = -1;
uint16_t x6651 = 1903U;
uint8_t x6670 = 8U;
uint8_t x6740 = 0U;
uint32_t x6755 = UINT32_MAX;


void f0(void) {
	int8_t x97 = INT8_MAX;
	uint8_t x98 = 3U;
	uint16_t x99 = 379U;
	volatile int64_t x100 = INT64_MIN;
	int32_t t0 = 362360190;

	t0 = ((x97<<x98)*(x99<x100));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x165 = 10413U;
	int8_t x166 = 6;
	volatile uint64_t x167 = UINT64_MAX;
	int64_t x168 = -1LL;
	int32_t t1 = -477613065;

	t1 = ((x165<<x166)*(x167<x168));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x222 = 2;
	volatile int32_t x223 = INT32_MAX;
	volatile uint8_t x224 = 3U;
	static int32_t t2 = -359;

	t2 = ((x221<<x222)*(x223<x224));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x271 = -2124478487LL;
	int32_t t3 = -226;

	t3 = ((x269<<x270)*(x271<x272));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x329 = INT8_MAX;
	volatile uint16_t x330 = 4U;
	uint16_t x331 = 15252U;
	int64_t x332 = -883062LL;

	t4 = ((x329<<x330)*(x331<x332));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x333 = 4224LLU;
	int64_t x334 = 0LL;
	int16_t x335 = -1998;
	uint16_t x336 = 262U;
	volatile uint64_t t5 = 527045168LLU;

	t5 = ((x333<<x334)*(x335<x336));

	if (t5 != 4224LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x421 = INT64_MAX;
	int32_t x422 = 0;
	int64_t x423 = 33289230LL;
	int8_t x424 = INT8_MAX;
	volatile int64_t t6 = -3833413792052529302LL;

	t6 = ((x421<<x422)*(x423<x424));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	static volatile uint64_t t7 = 3420818713LLU;

	t7 = ((x517<<x518)*(x519<x520));

	if (t7 != 249797978LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x761 = UINT8_MAX;
	uint16_t x762 = 21U;
	static uint16_t x763 = 86U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t8 = -2;

	t8 = ((x761<<x762)*(x763<x764));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x785 = 199LL;
	int16_t x786 = 49;
	static volatile int64_t t9 = -2LL;

	t9 = ((x785<<x786)*(x787<x788));

	if (t9 != 112027040730841088LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x845 = UINT8_MAX;
	int8_t x846 = 0;
	static uint64_t x848 = 1882393138732LLU;
	int32_t t10 = 492225;

	t10 = ((x845<<x846)*(x847<x848));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x853 = 0;
	volatile uint16_t x855 = 4569U;
	int64_t x856 = -3LL;
	int32_t t11 = 4849;

	t11 = ((x853<<x854)*(x855<x856));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x893 = 3;
	static int16_t x895 = INT16_MAX;
	int64_t x896 = INT64_MIN;
	int32_t t12 = -699437;

	t12 = ((x893<<x894)*(x895<x896));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1237 = 59627176U;
	int8_t x1238 = 4;
	volatile uint8_t x1239 = 0U;
	volatile int64_t x1240 = -1LL;
	volatile uint32_t t13 = 607U;

	t13 = ((x1237<<x1238)*(x1239<x1240));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1241 = 3964LLU;
	int64_t x1242 = 20LL;
	int8_t x1243 = -1;
	static int64_t x1244 = INT64_MIN;
	uint64_t t14 = 133758894550LLU;

	t14 = ((x1241<<x1242)*(x1243<x1244));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1257 = 11U;
	volatile uint16_t x1258 = 0U;
	int16_t x1259 = INT16_MIN;
	volatile int32_t x1260 = INT32_MAX;
	int32_t t15 = 1001168;

	t15 = ((x1257<<x1258)*(x1259<x1260));

	if (t15 != 11) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1273 = UINT32_MAX;
	uint64_t x1275 = UINT64_MAX;
	uint16_t x1276 = 13U;
	volatile uint32_t t16 = 1306473U;

	t16 = ((x1273<<x1274)*(x1275<x1276));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1313 = 255353002LLU;
	static volatile int32_t x1314 = 0;
	int64_t x1315 = -1LL;
	uint16_t x1316 = UINT16_MAX;
	uint64_t t17 = 4422852386434921LLU;

	t17 = ((x1313<<x1314)*(x1315<x1316));

	if (t17 != 255353002LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1373 = UINT32_MAX;
	static int16_t x1374 = 0;
	static int16_t x1376 = INT16_MIN;

	t18 = ((x1373<<x1374)*(x1375<x1376));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x1425 = UINT64_MAX;
	volatile int64_t x1427 = -1LL;
	volatile uint64_t t19 = 2178427273175LLU;

	t19 = ((x1425<<x1426)*(x1427<x1428));

	if (t19 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1445 = 0;
	static uint8_t x1446 = 0U;
	static volatile int32_t x1447 = 5;
	int16_t x1448 = INT16_MAX;
	int32_t t20 = -479;

	t20 = ((x1445<<x1446)*(x1447<x1448));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1454 = 5U;
	int16_t x1455 = INT16_MIN;
	static uint64_t t21 = 25393711615465LLU;

	t21 = ((x1453<<x1454)*(x1455<x1456));

	if (t21 != 124497744407808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1477 = 558U;
	int64_t x1479 = INT64_MAX;
	static int16_t x1480 = INT16_MIN;
	static int32_t t22 = -119;

	t22 = ((x1477<<x1478)*(x1479<x1480));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1586 = 0U;
	uint32_t x1587 = 3021U;
	static uint8_t x1588 = 1U;
	volatile int64_t t23 = 17659141721384835LL;

	t23 = ((x1585<<x1586)*(x1587<x1588));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1613 = 14LLU;
	int16_t x1615 = INT16_MIN;
	uint64_t x1616 = UINT64_MAX;
	uint64_t t24 = 264756468909911LLU;

	t24 = ((x1613<<x1614)*(x1615<x1616));

	if (t24 != 14LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1701 = INT8_MAX;
	uint8_t x1702 = 24U;
	volatile int32_t x1703 = 65792511;

	t25 = ((x1701<<x1702)*(x1703<x1704));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1901 = INT8_MAX;
	static int8_t x1902 = 3;
	volatile int64_t x1903 = -6124124186974990LL;
	int8_t x1904 = INT8_MIN;
	int32_t t26 = -379;

	t26 = ((x1901<<x1902)*(x1903<x1904));

	if (t26 != 1016) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1925 = 1961363LLU;
	int16_t x1926 = 5;
	volatile uint32_t x1928 = 20506733U;
	uint64_t t27 = 3156931852139231425LLU;

	t27 = ((x1925<<x1926)*(x1927<x1928));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2009 = 1832912550LLU;
	uint8_t x2010 = 5U;
	volatile int64_t x2012 = -1944686553LL;
	volatile uint64_t t28 = 61909LLU;

	t28 = ((x2009<<x2010)*(x2011<x2012));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2041 = 11;
	uint16_t x2042 = 19U;
	volatile int16_t x2043 = 11990;
	volatile uint8_t x2044 = 5U;
	int32_t t29 = -27304508;

	t29 = ((x2041<<x2042)*(x2043<x2044));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2070 = 44U;
	int64_t x2071 = -22LL;
	volatile uint8_t x2072 = 1U;
	uint64_t t30 = 240LLU;

	t30 = ((x2069<<x2070)*(x2071<x2072));

	if (t30 != 18446726481523507200LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x2149 = 0;
	static volatile uint16_t x2150 = 16U;
	static int32_t t31 = -11;

	t31 = ((x2149<<x2150)*(x2151<x2152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2285 = UINT16_MAX;
	static int8_t x2287 = INT8_MIN;
	int32_t t32 = 0;

	t32 = ((x2285<<x2286)*(x2287<x2288));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x2321 = 22072;
	uint8_t x2322 = 0U;
	uint16_t x2323 = UINT16_MAX;
	int32_t t33 = 735032711;

	t33 = ((x2321<<x2322)*(x2323<x2324));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2457 = INT16_MAX;
	int8_t x2459 = INT8_MIN;
	static uint8_t x2460 = 27U;

	t34 = ((x2457<<x2458)*(x2459<x2460));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x2586 = 15;
	int16_t x2587 = INT16_MIN;
	static volatile int32_t t35 = -624;

	t35 = ((x2585<<x2586)*(x2587<x2588));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2654 = 9U;
	int8_t x2655 = -1;

	t36 = ((x2653<<x2654)*(x2655<x2656));

	if (t36 != 612572321099351040LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2671 = INT64_MIN;
	uint64_t t37 = 72LLU;

	t37 = ((x2669<<x2670)*(x2671<x2672));

	if (t37 != 2798586287858LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2713 = 0;
	static int8_t x2714 = 1;
	int8_t x2715 = INT8_MAX;
	int32_t t38 = -28239;

	t38 = ((x2713<<x2714)*(x2715<x2716));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2769 = 3U;
	volatile uint8_t x2770 = 1U;
	uint32_t x2771 = 75400697U;
	static int32_t x2772 = 56029246;
	int32_t t39 = 547082;

	t39 = ((x2769<<x2770)*(x2771<x2772));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2805 = 46;
	volatile uint8_t x2806 = 0U;
	int8_t x2807 = 49;
	static int64_t x2808 = -1LL;
	int32_t t40 = -290;

	t40 = ((x2805<<x2806)*(x2807<x2808));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2829 = 746U;
	int8_t x2830 = 0;
	int16_t x2831 = 13;
	static int32_t x2832 = INT32_MAX;
	uint32_t t41 = 28907U;

	t41 = ((x2829<<x2830)*(x2831<x2832));

	if (t41 != 746U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2853 = 12U;
	volatile uint8_t x2855 = 46U;
	int32_t t42 = -66196267;

	t42 = ((x2853<<x2854)*(x2855<x2856));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x2905 = 901U;
	volatile uint16_t x2906 = 2U;
	uint16_t x2907 = 9U;

	t43 = ((x2905<<x2906)*(x2907<x2908));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2914 = 27U;
	int32_t x2915 = INT32_MAX;
	uint16_t x2916 = 0U;

	t44 = ((x2913<<x2914)*(x2915<x2916));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x3015 = 1527LLU;
	uint8_t x3016 = 55U;
	int32_t t45 = -35;

	t45 = ((x3013<<x3014)*(x3015<x3016));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3041 = INT8_MAX;
	int8_t x3042 = 1;
	uint16_t x3043 = 64U;
	volatile uint64_t x3044 = 89203LLU;
	int32_t t46 = 1823;

	t46 = ((x3041<<x3042)*(x3043<x3044));

	if (t46 != 254) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3057 = 1605801507U;
	int16_t x3058 = 0;
	uint32_t x3059 = 2036U;
	volatile uint32_t t47 = 233U;

	t47 = ((x3057<<x3058)*(x3059<x3060));

	if (t47 != 1605801507U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3094 = 3;
	int32_t x3095 = INT32_MIN;
	int8_t x3096 = INT8_MAX;
	volatile uint64_t t48 = 60178341895557402LLU;

	t48 = ((x3093<<x3094)*(x3095<x3096));

	if (t48 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3134 = 0U;
	int64_t x3135 = -25999799LL;
	uint16_t x3136 = 1U;
	int32_t t49 = INT32_MAX;

	t49 = ((x3133<<x3134)*(x3135<x3136));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x3210 = 0;
	static int32_t t50 = -244729500;

	t50 = ((x3209<<x3210)*(x3211<x3212));

	if (t50 != 11089) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x3351 = -1LL;
	static int32_t x3352 = -1;
	uint64_t t51 = 25819LLU;

	t51 = ((x3349<<x3350)*(x3351<x3352));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3629 = 281602689975321427LLU;
	int8_t x3630 = 1;
	int16_t x3632 = 5299;
	uint64_t t52 = 15328176423183693LLU;

	t52 = ((x3629<<x3630)*(x3631<x3632));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3765 = 244819U;
	uint8_t x3767 = 113U;
	int8_t x3768 = -2;
	volatile uint32_t t53 = 105217288U;

	t53 = ((x3765<<x3766)*(x3767<x3768));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3833 = 1U;
	static volatile uint8_t x3834 = 1U;
	uint64_t x3835 = UINT64_MAX;
	int16_t x3836 = INT16_MIN;
	int32_t t54 = -221343002;

	t54 = ((x3833<<x3834)*(x3835<x3836));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3853 = 10255U;
	static volatile int16_t x3854 = 16;
	int64_t x3855 = -1LL;
	volatile int16_t x3856 = 7;
	volatile int32_t t55 = -1;

	t55 = ((x3853<<x3854)*(x3855<x3856));

	if (t55 != 672071680) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x3890 = 6LLU;
	uint16_t x3891 = 1320U;
	int32_t x3892 = INT32_MIN;
	int32_t t56 = 65;

	t56 = ((x3889<<x3890)*(x3891<x3892));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x4029 = INT32_MAX;
	volatile uint8_t x4030 = 0U;
	static int32_t x4031 = INT32_MIN;
	static uint64_t x4032 = UINT64_MAX;

	t57 = ((x4029<<x4030)*(x4031<x4032));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x4049 = 2132328177U;
	uint16_t x4050 = 7U;
	int32_t x4052 = INT32_MAX;
	uint32_t t58 = 6743U;

	t58 = ((x4049<<x4050)*(x4051<x4052));

	if (t58 != 2355067008U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4061 = 4648;
	volatile uint16_t x4063 = 12U;
	int32_t x4064 = -1;
	int32_t t59 = 1430;

	t59 = ((x4061<<x4062)*(x4063<x4064));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4248 = 3377727LL;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = ((x4245<<x4246)*(x4247<x4248));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4261 = 10;
	int16_t x4263 = INT16_MIN;
	volatile uint32_t x4264 = UINT32_MAX;
	int32_t t61 = 0;

	t61 = ((x4261<<x4262)*(x4263<x4264));

	if (t61 != 640) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x4270 = 1LLU;
	int8_t x4271 = -1;
	int64_t x4272 = INT64_MIN;

	t62 = ((x4269<<x4270)*(x4271<x4272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4393 = UINT32_MAX;
	static uint8_t x4394 = 0U;
	uint8_t x4395 = 18U;
	volatile uint64_t x4396 = UINT64_MAX;
	static uint32_t t63 = UINT32_MAX;

	t63 = ((x4393<<x4394)*(x4395<x4396));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4425 = UINT32_MAX;
	static uint8_t x4426 = 1U;
	static int32_t x4427 = -1;
	int16_t x4428 = 0;
	volatile uint32_t t64 = 33481995U;

	t64 = ((x4425<<x4426)*(x4427<x4428));

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x4497 = UINT16_MAX;
	static volatile int32_t x4498 = 12;
	int8_t x4499 = 0;
	int32_t x4500 = -3;

	t65 = ((x4497<<x4498)*(x4499<x4500));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4593 = 44;
	uint8_t x4595 = 5U;
	int32_t t66 = 1558;

	t66 = ((x4593<<x4594)*(x4595<x4596));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x4610 = 1U;
	volatile int8_t x4612 = 2;

	t67 = ((x4609<<x4610)*(x4611<x4612));

	if (t67 != 60) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x4653 = 1077751;
	static uint32_t x4654 = 0U;
	volatile int64_t x4655 = INT64_MIN;
	volatile int32_t x4656 = -3;

	t68 = ((x4653<<x4654)*(x4655<x4656));

	if (t68 != 1077751) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4877 = INT8_MAX;
	uint16_t x4878 = 1U;
	static uint8_t x4879 = 25U;
	static int64_t x4880 = 2212440447368LL;

	t69 = ((x4877<<x4878)*(x4879<x4880));

	if (t69 != 254) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x5129 = 2729LLU;
	int16_t x5130 = 44;
	static int8_t x5132 = -1;
	volatile uint64_t t70 = 4110805768004265512LLU;

	t70 = ((x5129<<x5130)*(x5131<x5132));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5161 = 943359042LL;
	uint64_t x5162 = 1LLU;
	static volatile int64_t x5163 = INT64_MIN;
	uint8_t x5164 = 0U;
	volatile int64_t t71 = 25LL;

	t71 = ((x5161<<x5162)*(x5163<x5164));

	if (t71 != 1886718084LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x5189 = 187U;
	uint8_t x5190 = 4U;
	int64_t x5191 = INT64_MIN;

	t72 = ((x5189<<x5190)*(x5191<x5192));

	if (t72 != 2992U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x5245 = 75U;
	uint8_t x5246 = 0U;
	volatile int32_t x5247 = INT32_MAX;
	int16_t x5248 = INT16_MIN;

	t73 = ((x5245<<x5246)*(x5247<x5248));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5365 = INT16_MAX;
	volatile int16_t x5366 = 0;
	int64_t x5367 = INT64_MIN;
	int8_t x5368 = -1;
	volatile int32_t t74 = -2793;

	t74 = ((x5365<<x5366)*(x5367<x5368));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x5370 = 4U;
	volatile int32_t x5372 = -1;
	int32_t t75 = -1;

	t75 = ((x5369<<x5370)*(x5371<x5372));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x5385 = UINT64_MAX;
	int64_t x5387 = -4615LL;

	t76 = ((x5385<<x5386)*(x5387<x5388));

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5449 = UINT8_MAX;
	uint8_t x5450 = 1U;
	int64_t x5451 = 1LL;
	uint32_t x5452 = UINT32_MAX;
	volatile int32_t t77 = -58;

	t77 = ((x5449<<x5450)*(x5451<x5452));

	if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x5573 = INT8_MAX;
	volatile uint16_t x5574 = 3U;
	volatile int32_t x5575 = -17370;
	static volatile int16_t x5576 = 0;
	static volatile int32_t t78 = 1172;

	t78 = ((x5573<<x5574)*(x5575<x5576));

	if (t78 != 1016) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x5689 = 2728U;
	volatile int16_t x5691 = 8751;
	uint16_t x5692 = UINT16_MAX;

	t79 = ((x5689<<x5690)*(x5691<x5692));

	if (t79 != 89391104U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x5734 = 13;
	int32_t x5735 = INT32_MAX;
	int16_t x5736 = 112;
	uint32_t t80 = 125117019U;

	t80 = ((x5733<<x5734)*(x5735<x5736));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x5801 = 20U;
	static int8_t x5802 = 0;
	int16_t x5803 = INT16_MIN;
	int32_t x5804 = INT32_MAX;
	int32_t t81 = 2589064;

	t81 = ((x5801<<x5802)*(x5803<x5804));

	if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5833 = 2;
	uint32_t x5834 = 12U;
	int32_t x5835 = INT32_MAX;
	static int64_t x5836 = -1LL;
	volatile int32_t t82 = -1;

	t82 = ((x5833<<x5834)*(x5835<x5836));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5841 = 17U;
	int8_t x5842 = 5;
	uint64_t x5843 = 128168041535481LLU;
	uint16_t x5844 = 916U;
	volatile int32_t t83 = 19;

	t83 = ((x5841<<x5842)*(x5843<x5844));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x5925 = UINT16_MAX;
	int16_t x5926 = 7;
	volatile int8_t x5927 = -28;
	volatile int64_t x5928 = INT64_MAX;

	t84 = ((x5925<<x5926)*(x5927<x5928));

	if (t84 != 8388480) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x5936 = 6141;
	volatile int32_t t85 = 1;

	t85 = ((x5933<<x5934)*(x5935<x5936));

	if (t85 != 207360) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5985 = 94U;
	volatile uint16_t x5986 = 4U;
	int64_t x5987 = -1LL;
	static int32_t t86 = -59102109;

	t86 = ((x5985<<x5986)*(x5987<x5988));

	if (t86 != 1504) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6057 = 4363U;
	static int8_t x6058 = 1;
	int32_t x6059 = INT32_MIN;
	volatile int8_t x6060 = INT8_MAX;
	static volatile int32_t t87 = -1;

	t87 = ((x6057<<x6058)*(x6059<x6060));

	if (t87 != 8726) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6077 = 263477891U;
	volatile int8_t x6078 = 1;
	volatile int16_t x6079 = INT16_MIN;
	int16_t x6080 = INT16_MAX;

	t88 = ((x6077<<x6078)*(x6079<x6080));

	if (t88 != 526955782U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6325 = 380020260008162LLU;
	volatile uint64_t x6326 = 5LLU;
	volatile int64_t x6327 = INT64_MIN;
	int64_t x6328 = INT64_MAX;
	static uint64_t t89 = 12146299685641523LLU;

	t89 = ((x6325<<x6326)*(x6327<x6328));

	if (t89 != 12160648320261184LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x6329 = 18127LLU;
	volatile uint8_t x6331 = 10U;
	volatile int16_t x6332 = INT16_MIN;
	uint64_t t90 = 2144990961LLU;

	t90 = ((x6329<<x6330)*(x6331<x6332));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6341 = 14;
	uint8_t x6343 = UINT8_MAX;
	int8_t x6344 = -1;
	volatile int32_t t91 = 66382923;

	t91 = ((x6341<<x6342)*(x6343<x6344));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x6397 = 266419835111944LLU;
	static int16_t x6398 = 1;
	int16_t x6400 = -1;
	uint64_t t92 = 70161275816253LLU;

	t92 = ((x6397<<x6398)*(x6399<x6400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x6461 = 3U;
	uint32_t x6462 = 1U;
	uint16_t x6463 = 609U;
	int16_t x6464 = 15225;
	int32_t t93 = 20812;

	t93 = ((x6461<<x6462)*(x6463<x6464));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6637 = 6149648618LLU;
	uint8_t x6638 = 2U;
	int64_t x6639 = INT64_MAX;
	uint16_t x6640 = 10U;
	volatile uint64_t t94 = 109393LLU;

	t94 = ((x6637<<x6638)*(x6639<x6640));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x6649 = 23435U;
	static volatile uint8_t x6650 = 1U;
	volatile int8_t x6652 = INT8_MIN;
	volatile uint32_t t95 = 698U;

	t95 = ((x6649<<x6650)*(x6651<x6652));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6669 = UINT32_MAX;
	int32_t x6671 = -382;
	static int8_t x6672 = INT8_MAX;
	uint32_t t96 = 82U;

	t96 = ((x6669<<x6670)*(x6671<x6672));

	if (t96 != 4294967040U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x6737 = 1U;
	uint32_t x6738 = 1U;
	uint16_t x6739 = 7U;
	static int32_t t97 = -277874049;

	t97 = ((x6737<<x6738)*(x6739<x6740));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6753 = 0U;
	uint8_t x6754 = 6U;
	int64_t x6756 = 2486LL;
	static int32_t t98 = -93885559;

	t98 = ((x6753<<x6754)*(x6755<x6756));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6801 = 2892695017LL;
	uint32_t x6802 = 1U;
	int64_t x6803 = INT64_MIN;
	uint8_t x6804 = 1U;
	volatile int64_t t99 = 77292365976681LL;

	t99 = ((x6801<<x6802)*(x6803<x6804));

	if (t99 != 5785390034LL) { NG(); } else { ; }
	
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

