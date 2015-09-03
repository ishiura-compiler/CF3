#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = UINT32_MAX;
int16_t x8 = -1;
int8_t x65 = 6;
static volatile int32_t t1 = -35560694;
int8_t x97 = INT8_MIN;
int8_t x100 = -1;
static int64_t t2 = -908685841146LL;
volatile uint64_t t4 = 1243990676LLU;
int64_t x348 = 21490079951143LL;
volatile uint64_t x376 = 547LLU;
static int8_t x592 = -1;
volatile int64_t t7 = -76LL;
int8_t x786 = INT8_MAX;
volatile int64_t t12 = -22208707LL;
uint64_t t14 = 65830136LLU;
int32_t x1044 = -1;
int64_t x1082 = INT64_MIN;
static int16_t x1084 = -1;
int16_t x1213 = -1;
volatile int32_t t21 = -6453;
uint8_t x1629 = 15U;
int8_t x1789 = -1;
static volatile uint8_t x1790 = 78U;
uint32_t x1792 = UINT32_MAX;
uint32_t x1823 = 0U;
uint32_t x1873 = 9085U;
volatile uint32_t t29 = 192421U;
uint64_t x1885 = 37756LLU;
int64_t x1887 = -1LL;
int16_t x1888 = -1;
static uint64_t t30 = 42LLU;
int64_t t32 = 731685035162LL;
uint64_t x2214 = UINT64_MAX;
uint16_t x2237 = 24094U;
static volatile uint64_t t35 = 1123171LLU;
int64_t x2277 = -676815733861LL;
int64_t x2279 = INT64_MIN;
int8_t x2527 = -1;
uint32_t x2528 = UINT32_MAX;
uint8_t x2681 = UINT8_MAX;
int32_t x2730 = -1;
uint16_t x2772 = 0U;
static int8_t x2857 = -3;
static volatile int32_t x3031 = -1;
int64_t x3032 = -1LL;
int32_t t47 = 112527;
int8_t x3047 = INT8_MIN;
uint8_t x3048 = 0U;
int16_t x3073 = -9;
int8_t x3156 = -6;
volatile uint32_t t53 = 31U;
static uint32_t x3344 = UINT32_MAX;
uint8_t x3351 = 0U;
volatile uint64_t t56 = 3731LLU;
uint8_t x3451 = 0U;
uint64_t t58 = 9898769305872894LLU;
static volatile uint64_t t59 = 127065624LLU;
static uint64_t t61 = 24LLU;
uint32_t x3709 = 1U;
int32_t t65 = 256058533;
int32_t x4050 = INT32_MIN;
static int32_t t67 = -6;
int32_t x4152 = -1;
volatile int64_t t68 = 44720401820505LL;
int8_t x4249 = INT8_MAX;
int32_t x4251 = 0;
volatile int32_t t69 = 408;
static uint8_t x4260 = 0U;
int8_t x4266 = INT8_MAX;
int16_t x4268 = -1;
int32_t x4281 = INT32_MIN;
uint8_t x4306 = UINT8_MAX;
uint8_t x4430 = 19U;
static int8_t x4431 = -7;
static volatile uint32_t t74 = 240U;
static int64_t x4458 = INT64_MIN;
int64_t x4459 = -2385LL;
static uint32_t x4497 = UINT32_MAX;
static volatile uint16_t x4498 = 88U;
int16_t x4501 = INT16_MIN;
uint8_t x4503 = 2U;
volatile int8_t x4505 = INT8_MIN;
volatile int8_t x4507 = -1;
volatile int16_t x4569 = INT16_MIN;
int64_t x4571 = -1LL;
uint64_t t82 = 262770976295LLU;
int32_t x4577 = -1;
static uint64_t x4579 = UINT64_MAX;
uint32_t x4586 = 242U;
int8_t x4588 = 0;
uint64_t x4628 = UINT64_MAX;
static volatile uint64_t x4730 = 7992929542271141436LLU;
int8_t x4878 = 7;
int16_t x4925 = INT16_MIN;
static uint64_t x4926 = UINT64_MAX;
uint64_t t91 = 389732133767LLU;
volatile int64_t t95 = -29LL;
static uint64_t x5065 = UINT64_MAX;
int8_t x5220 = -1;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	volatile int8_t x6 = INT8_MAX;
	volatile int32_t t0 = -43066;

	t0 = ((x5/x6)<<(x7*x8));

	if (t0 != 1032) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x66 = 3758U;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 4523956U;

	t1 = ((x65/x66)<<(x67*x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x98 = INT64_MIN;
	volatile int32_t x99 = -1;

	t2 = ((x97/x98)<<(x99*x100));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x145 = INT32_MAX;
	uint16_t x146 = UINT16_MAX;
	volatile uint16_t x147 = 61U;
	int16_t x148 = 0;
	volatile int32_t t3 = 218801538;

	t3 = ((x145/x146)<<(x147*x148));

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x261 = 4002503398515LLU;
	int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	uint64_t x264 = 4798285181639141142LLU;

	t4 = ((x261/x262)<<(x263*x264));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x345 = -2;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = 0U;
	static int32_t t5 = -1;

	t5 = ((x345/x346)<<(x347*x348));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x373 = 13844U;
	uint64_t x374 = 7883794LLU;
	static int16_t x375 = 0;
	uint64_t t6 = 13584689LLU;

	t6 = ((x373/x374)<<(x375*x376));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x589 = INT64_MIN;
	int8_t x590 = INT8_MIN;
	volatile uint64_t x591 = UINT64_MAX;

	t7 = ((x589/x590)<<(x591*x592));

	if (t7 != 144115188075855872LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x613 = UINT16_MAX;
	uint8_t x614 = 1U;
	uint8_t x615 = 0U;
	int64_t x616 = -1LL;
	static int32_t t8 = -1;

	t8 = ((x613/x614)<<(x615*x616));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x777 = UINT16_MAX;
	static uint32_t x778 = 49U;
	int32_t x779 = 4;
	uint8_t x780 = 0U;
	volatile uint32_t t9 = 2425U;

	t9 = ((x777/x778)<<(x779*x780));

	if (t9 != 1337U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x785 = 134133632455188633LL;
	volatile uint32_t x787 = 8U;
	int32_t x788 = 1;
	volatile int64_t t10 = 16LL;

	t10 = ((x785/x786)<<(x787*x788));

	if (t10 != 270379605578962688LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x793 = -1;
	uint16_t x794 = 889U;
	uint16_t x795 = 0U;
	uint8_t x796 = 13U;
	int32_t t11 = -83;

	t11 = ((x793/x794)<<(x795*x796));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x905 = 22139287LL;
	uint32_t x906 = 451U;
	static uint8_t x907 = 3U;
	volatile int32_t x908 = 0;

	t12 = ((x905/x906)<<(x907*x908));

	if (t12 != 49089LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x937 = INT64_MIN;
	static volatile int16_t x938 = -34;
	int8_t x939 = INT8_MIN;
	volatile int16_t x940 = 0;
	static int64_t t13 = 1LL;

	t13 = ((x937/x938)<<(x939*x940));

	if (t13 != 271275648142787523LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x969 = 51377711LLU;
	static int64_t x970 = INT64_MAX;
	static uint64_t x971 = 0LLU;
	int32_t x972 = -23109581;

	t14 = ((x969/x970)<<(x971*x972));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x997 = UINT16_MAX;
	int32_t x998 = 20129;
	volatile int8_t x999 = 0;
	int8_t x1000 = INT8_MIN;
	int32_t t15 = -1465;

	t15 = ((x997/x998)<<(x999*x1000));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1041 = INT8_MAX;
	int8_t x1042 = INT8_MIN;
	volatile int64_t x1043 = -1LL;
	int32_t t16 = -116826;

	t16 = ((x1041/x1042)<<(x1043*x1044));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1081 = 7175U;
	uint32_t x1083 = 0U;
	volatile int64_t t17 = -45879589LL;

	t17 = ((x1081/x1082)<<(x1083*x1084));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1214 = INT32_MIN;
	static uint32_t x1215 = UINT32_MAX;
	volatile int8_t x1216 = -1;
	int32_t t18 = 6952313;

	t18 = ((x1213/x1214)<<(x1215*x1216));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1293 = 2275U;
	static int64_t x1294 = INT64_MAX;
	uint32_t x1295 = 0U;
	int8_t x1296 = INT8_MIN;
	static int64_t t19 = -122337276LL;

	t19 = ((x1293/x1294)<<(x1295*x1296));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1333 = -906828242388198372LL;
	static volatile int32_t x1334 = INT32_MIN;
	int16_t x1335 = INT16_MAX;
	static uint8_t x1336 = 0U;
	int64_t t20 = -24LL;

	t20 = ((x1333/x1334)<<(x1335*x1336));

	if (t20 != 422274806LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1341 = -1;
	int8_t x1342 = 7;
	int32_t x1343 = 2153246;
	volatile uint8_t x1344 = 0U;

	t21 = ((x1341/x1342)<<(x1343*x1344));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x1401 = UINT32_MAX;
	int32_t x1402 = INT32_MAX;
	static uint16_t x1403 = 0U;
	int64_t x1404 = 85057893874632LL;
	volatile uint32_t t22 = 1557199U;

	t22 = ((x1401/x1402)<<(x1403*x1404));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1417 = INT64_MAX;
	uint32_t x1418 = 10718U;
	static int16_t x1419 = INT16_MAX;
	uint32_t x1420 = 0U;
	int64_t t23 = -412403LL;

	t23 = ((x1417/x1418)<<(x1419*x1420));

	if (t23 != 860549732865718LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1630 = INT32_MIN;
	int64_t x1631 = INT64_MIN;
	uint64_t x1632 = 31498878970LLU;
	volatile int32_t t24 = 672257036;

	t24 = ((x1629/x1630)<<(x1631*x1632));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1713 = 75705057U;
	int32_t x1714 = -1;
	int8_t x1715 = 0;
	uint8_t x1716 = 64U;
	uint32_t t25 = 1106U;

	t25 = ((x1713/x1714)<<(x1715*x1716));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1791 = UINT32_MAX;
	volatile int32_t t26 = -3897562;

	t26 = ((x1789/x1790)<<(x1791*x1792));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1821 = -912;
	int16_t x1822 = -1;
	int32_t x1824 = -376;
	int32_t t27 = -197;

	t27 = ((x1821/x1822)<<(x1823*x1824));

	if (t27 != 912) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1853 = 64142986U;
	static int16_t x1854 = -12;
	int64_t x1855 = -1LL;
	int8_t x1856 = 0;
	uint32_t t28 = 2U;

	t28 = ((x1853/x1854)<<(x1855*x1856));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1874 = INT16_MIN;
	static int8_t x1875 = -1;
	volatile int8_t x1876 = -1;

	t29 = ((x1873/x1874)<<(x1875*x1876));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1886 = 499226885103LLU;

	t30 = ((x1885/x1886)<<(x1887*x1888));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2041 = INT8_MAX;
	volatile uint64_t x2042 = 729936238152980LLU;
	int8_t x2043 = 0;
	uint32_t x2044 = 1U;
	static uint64_t t31 = 53953649LLU;

	t31 = ((x2041/x2042)<<(x2043*x2044));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2049 = INT64_MAX;
	uint32_t x2050 = 20751U;
	static uint8_t x2051 = 0U;
	uint32_t x2052 = 1452751783U;

	t32 = ((x2049/x2050)<<(x2051*x2052));

	if (t32 != 444478436550275LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2213 = INT32_MIN;
	uint8_t x2215 = 0U;
	int32_t x2216 = -1;
	uint64_t t33 = 156076008594830LLU;

	t33 = ((x2213/x2214)<<(x2215*x2216));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2238 = 2U;
	int16_t x2239 = 0;
	static int16_t x2240 = 0;
	int32_t t34 = -411;

	t34 = ((x2237/x2238)<<(x2239*x2240));

	if (t34 != 12047) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2261 = 21945676357903067LLU;
	int32_t x2262 = INT32_MIN;
	volatile int8_t x2263 = 0;
	int32_t x2264 = 32876269;

	t35 = ((x2261/x2262)<<(x2263*x2264));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2278 = UINT64_MAX;
	uint8_t x2280 = 0U;
	volatile uint64_t t36 = 35710LLU;

	t36 = ((x2277/x2278)<<(x2279*x2280));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2465 = -1;
	int32_t x2466 = -1;
	volatile int64_t x2467 = -1LL;
	int32_t x2468 = -1;
	int32_t t37 = 68155866;

	t37 = ((x2465/x2466)<<(x2467*x2468));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2489 = 1;
	volatile int32_t x2490 = INT32_MIN;
	uint64_t x2491 = UINT64_MAX;
	int8_t x2492 = -1;
	int32_t t38 = -14452983;

	t38 = ((x2489/x2490)<<(x2491*x2492));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2525 = -1;
	static int64_t x2526 = -1LL;
	static int64_t t39 = 13057374089450476LL;

	t39 = ((x2525/x2526)<<(x2527*x2528));

	if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2561 = 6U;
	int32_t x2562 = INT32_MIN;
	static int8_t x2563 = -1;
	volatile int64_t x2564 = -1LL;
	int32_t t40 = 1;

	t40 = ((x2561/x2562)<<(x2563*x2564));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2585 = 841U;
	int64_t x2586 = -1989896567908769LL;
	int8_t x2587 = 0;
	uint8_t x2588 = UINT8_MAX;
	static int64_t t41 = 476408232677LL;

	t41 = ((x2585/x2586)<<(x2587*x2588));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2682 = INT32_MIN;
	volatile int64_t x2683 = INT64_MIN;
	volatile int32_t x2684 = 0;
	int32_t t42 = 123958211;

	t42 = ((x2681/x2682)<<(x2683*x2684));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2729 = INT8_MIN;
	volatile uint64_t x2731 = 0LLU;
	volatile uint64_t x2732 = 3985090LLU;
	volatile int32_t t43 = 17;

	t43 = ((x2729/x2730)<<(x2731*x2732));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x2769 = UINT32_MAX;
	int64_t x2770 = INT64_MAX;
	int64_t x2771 = -1LL;
	int64_t t44 = -4669LL;

	t44 = ((x2769/x2770)<<(x2771*x2772));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2858 = -1;
	int16_t x2859 = -20;
	int16_t x2860 = -1;
	int32_t t45 = 38096595;

	t45 = ((x2857/x2858)<<(x2859*x2860));

	if (t45 != 3145728) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2989 = INT16_MIN;
	static int32_t x2990 = -1;
	volatile uint8_t x2991 = 0U;
	static int8_t x2992 = -1;
	static volatile int32_t t46 = 1;

	t46 = ((x2989/x2990)<<(x2991*x2992));

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x3029 = -1;
	volatile int16_t x3030 = INT16_MIN;

	t47 = ((x3029/x3030)<<(x3031*x3032));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3045 = 12LLU;
	int16_t x3046 = INT16_MIN;
	uint64_t t48 = 888031509116LLU;

	t48 = ((x3045/x3046)<<(x3047*x3048));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x3074 = INT32_MAX;
	uint64_t x3075 = UINT64_MAX;
	int64_t x3076 = -1LL;
	int32_t t49 = -814391475;

	t49 = ((x3073/x3074)<<(x3075*x3076));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3153 = 5349U;
	uint8_t x3154 = 4U;
	static uint64_t x3155 = UINT64_MAX;
	int32_t t50 = 155965;

	t50 = ((x3153/x3154)<<(x3155*x3156));

	if (t50 != 85568) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3161 = -1LL;
	static uint8_t x3162 = 12U;
	uint64_t x3163 = UINT64_MAX;
	static volatile int16_t x3164 = -1;
	int64_t t51 = -46272928390006LL;

	t51 = ((x3161/x3162)<<(x3163*x3164));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3189 = 3162U;
	int64_t x3190 = 1589349283851039538LL;
	uint8_t x3191 = 1U;
	int8_t x3192 = 38;
	static int64_t t52 = -987LL;

	t52 = ((x3189/x3190)<<(x3191*x3192));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3325 = UINT16_MAX;
	uint32_t x3326 = 21440530U;
	int8_t x3327 = -1;
	uint64_t x3328 = UINT64_MAX;

	t53 = ((x3325/x3326)<<(x3327*x3328));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3341 = -1;
	uint16_t x3342 = 305U;
	int8_t x3343 = -1;
	int32_t t54 = -147253;

	t54 = ((x3341/x3342)<<(x3343*x3344));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3349 = -1;
	int8_t x3350 = INT8_MIN;
	int32_t x3352 = 25437388;
	int32_t t55 = -414;

	t55 = ((x3349/x3350)<<(x3351*x3352));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3353 = 222U;
	uint64_t x3354 = UINT64_MAX;
	int16_t x3355 = -1;
	int64_t x3356 = -1LL;

	t56 = ((x3353/x3354)<<(x3355*x3356));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3429 = -7659;
	static int32_t x3430 = -1015930983;
	int8_t x3431 = 1;
	static int8_t x3432 = 1;
	int32_t t57 = 1;

	t57 = ((x3429/x3430)<<(x3431*x3432));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x3449 = INT8_MIN;
	volatile uint64_t x3450 = 4955535379664LLU;
	int8_t x3452 = INT8_MIN;

	t58 = ((x3449/x3450)<<(x3451*x3452));

	if (t58 != 3722452LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3485 = 97LLU;
	int64_t x3486 = -1LL;
	int32_t x3487 = -1;
	static volatile int16_t x3488 = -1;

	t59 = ((x3485/x3486)<<(x3487*x3488));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3605 = INT32_MAX;
	uint64_t x3606 = UINT64_MAX;
	uint32_t x3607 = 0U;
	uint8_t x3608 = UINT8_MAX;
	static uint64_t t60 = 2604LLU;

	t60 = ((x3605/x3606)<<(x3607*x3608));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3621 = 84U;
	static uint64_t x3622 = UINT64_MAX;
	int16_t x3623 = 1;
	uint8_t x3624 = 0U;

	t61 = ((x3621/x3622)<<(x3623*x3624));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x3673 = 44928LLU;
	int32_t x3674 = INT32_MIN;
	static uint32_t x3675 = 0U;
	int32_t x3676 = INT32_MIN;
	uint64_t t62 = 9110959826336356919LLU;

	t62 = ((x3673/x3674)<<(x3675*x3676));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3710 = INT16_MAX;
	uint16_t x3711 = 0U;
	int8_t x3712 = INT8_MIN;
	volatile uint32_t t63 = 109721319U;

	t63 = ((x3709/x3710)<<(x3711*x3712));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3741 = 8U;
	uint16_t x3742 = UINT16_MAX;
	int8_t x3743 = 0;
	uint32_t x3744 = 1U;
	int32_t t64 = 13;

	t64 = ((x3741/x3742)<<(x3743*x3744));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3793 = UINT8_MAX;
	uint8_t x3794 = UINT8_MAX;
	uint16_t x3795 = 0U;
	uint32_t x3796 = 35855217U;

	t65 = ((x3793/x3794)<<(x3795*x3796));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3861 = 305341LL;
	int64_t x3862 = -340599474LL;
	int8_t x3863 = -1;
	int32_t x3864 = -1;
	static int64_t t66 = 247355060147871LL;

	t66 = ((x3861/x3862)<<(x3863*x3864));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4049 = INT16_MAX;
	int64_t x4051 = -1LL;
	static int8_t x4052 = -1;

	t67 = ((x4049/x4050)<<(x4051*x4052));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4149 = INT8_MAX;
	int64_t x4150 = 928161771010515068LL;
	volatile uint32_t x4151 = UINT32_MAX;

	t68 = ((x4149/x4150)<<(x4151*x4152));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4250 = 4U;
	static int64_t x4252 = -14LL;

	t69 = ((x4249/x4250)<<(x4251*x4252));

	if (t69 != 31) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4257 = UINT16_MAX;
	static volatile uint32_t x4258 = UINT32_MAX;
	uint16_t x4259 = 1278U;
	volatile uint32_t t70 = 5U;

	t70 = ((x4257/x4258)<<(x4259*x4260));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x4265 = 2485165U;
	int64_t x4267 = -1LL;
	uint32_t t71 = 47U;

	t71 = ((x4265/x4266)<<(x4267*x4268));

	if (t71 != 39136U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4282 = -1LL;
	uint32_t x4283 = 0U;
	uint16_t x4284 = 22427U;
	volatile int64_t t72 = 454864449872173611LL;

	t72 = ((x4281/x4282)<<(x4283*x4284));

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x4305 = 4U;
	int64_t x4307 = 5091025543LL;
	volatile uint8_t x4308 = 0U;
	int32_t t73 = -374;

	t73 = ((x4305/x4306)<<(x4307*x4308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4429 = UINT32_MAX;
	uint16_t x4432 = 0U;

	t74 = ((x4429/x4430)<<(x4431*x4432));

	if (t74 != 226050910U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4445 = 1LLU;
	uint16_t x4446 = 4602U;
	int16_t x4447 = 0;
	static volatile int8_t x4448 = 0;
	volatile uint64_t t75 = 4141103673925091343LLU;

	t75 = ((x4445/x4446)<<(x4447*x4448));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4457 = INT8_MIN;
	int16_t x4460 = 0;
	volatile int64_t t76 = -754925788194LL;

	t76 = ((x4457/x4458)<<(x4459*x4460));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x4499 = INT16_MIN;
	static int8_t x4500 = 0;
	volatile uint32_t t77 = 28145U;

	t77 = ((x4497/x4498)<<(x4499*x4500));

	if (t77 != 48806446U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x4502 = INT64_MAX;
	static uint8_t x4504 = 0U;
	int64_t t78 = -157556335281629777LL;

	t78 = ((x4501/x4502)<<(x4503*x4504));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4506 = -1;
	static int32_t x4508 = -1;
	int32_t t79 = -8093583;

	t79 = ((x4505/x4506)<<(x4507*x4508));

	if (t79 != 256) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4525 = INT32_MIN;
	int32_t x4526 = -25;
	uint32_t x4527 = 0U;
	static int32_t x4528 = INT32_MIN;
	int32_t t80 = 619;

	t80 = ((x4525/x4526)<<(x4527*x4528));

	if (t80 != 85899345) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x4529 = -5;
	int64_t x4530 = -101798434LL;
	volatile int64_t x4531 = 0LL;
	volatile int8_t x4532 = -43;
	int64_t t81 = 208LL;

	t81 = ((x4529/x4530)<<(x4531*x4532));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4570 = 151590951395LLU;
	int8_t x4572 = -1;

	t82 = ((x4569/x4570)<<(x4571*x4572));

	if (t82 != 243375266LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4573 = -205822;
	uint32_t x4574 = UINT32_MAX;
	int8_t x4575 = -13;
	uint64_t x4576 = UINT64_MAX;
	volatile uint32_t t83 = 182U;

	t83 = ((x4573/x4574)<<(x4575*x4576));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x4578 = UINT32_MAX;
	int8_t x4580 = -1;
	static volatile uint32_t t84 = 7574676U;

	t84 = ((x4577/x4578)<<(x4579*x4580));

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4585 = -244;
	int32_t x4587 = INT32_MIN;
	volatile uint32_t t85 = 604U;

	t85 = ((x4585/x4586)<<(x4587*x4588));

	if (t85 != 17747797U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x4625 = UINT64_MAX;
	static uint64_t x4626 = 1516516979875437LLU;
	int8_t x4627 = -1;
	uint64_t t86 = 22LLU;

	t86 = ((x4625/x4626)<<(x4627*x4628));

	if (t86 != 24326LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4681 = UINT16_MAX;
	uint16_t x4682 = 14526U;
	static int8_t x4683 = -1;
	int32_t x4684 = -1;
	int32_t t87 = 604693889;

	t87 = ((x4681/x4682)<<(x4683*x4684));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x4729 = 0U;
	int16_t x4731 = -1;
	int32_t x4732 = -1;
	static uint64_t t88 = 7696786785859354436LLU;

	t88 = ((x4729/x4730)<<(x4731*x4732));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4857 = 0U;
	volatile int64_t x4858 = INT64_MIN;
	int16_t x4859 = INT16_MIN;
	static int8_t x4860 = 0;
	int64_t t89 = 39780219675885006LL;

	t89 = ((x4857/x4858)<<(x4859*x4860));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x4877 = 15U;
	uint8_t x4879 = 1U;
	int16_t x4880 = 3;
	volatile uint32_t t90 = 12698512U;

	t90 = ((x4877/x4878)<<(x4879*x4880));

	if (t90 != 16U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4927 = -1;
	int64_t x4928 = 0LL;

	t91 = ((x4925/x4926)<<(x4927*x4928));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4941 = -1019;
	int64_t x4942 = INT64_MIN;
	static int64_t x4943 = -1LL;
	int8_t x4944 = -60;
	int64_t t92 = 0LL;

	t92 = ((x4941/x4942)<<(x4943*x4944));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4985 = UINT32_MAX;
	int32_t x4986 = -1;
	volatile uint16_t x4987 = UINT16_MAX;
	volatile int16_t x4988 = 0;
	volatile uint32_t t93 = 56701U;

	t93 = ((x4985/x4986)<<(x4987*x4988));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5017 = INT16_MIN;
	int64_t x5018 = 116592693544LL;
	int32_t x5019 = INT32_MIN;
	int8_t x5020 = 0;
	volatile int64_t t94 = 2LL;

	t94 = ((x5017/x5018)<<(x5019*x5020));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5029 = 3242U;
	int64_t x5030 = INT64_MIN;
	int8_t x5031 = 3;
	uint64_t x5032 = 2LLU;

	t95 = ((x5029/x5030)<<(x5031*x5032));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x5066 = INT64_MIN;
	int8_t x5067 = -54;
	uint64_t x5068 = UINT64_MAX;
	volatile uint64_t t96 = 245998127792486LLU;

	t96 = ((x5065/x5066)<<(x5067*x5068));

	if (t96 != 18014398509481984LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x5085 = 795U;
	uint32_t x5086 = 19886U;
	int32_t x5087 = 1;
	int16_t x5088 = 15;
	volatile uint32_t t97 = 4U;

	t97 = ((x5085/x5086)<<(x5087*x5088));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x5181 = 0;
	int16_t x5182 = -1;
	int32_t x5183 = -1;
	static int64_t x5184 = -1LL;
	static int32_t t98 = -191;

	t98 = ((x5181/x5182)<<(x5183*x5184));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5217 = UINT32_MAX;
	static uint16_t x5218 = 6U;
	static int64_t x5219 = -1LL;
	uint32_t t99 = 209617107U;

	t99 = ((x5217/x5218)<<(x5219*x5220));

	if (t99 != 1431655764U) { NG(); } else { ; }
	
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

