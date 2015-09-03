#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -11091304;
uint16_t x141 = 13826U;
uint32_t x266 = UINT32_MAX;
volatile int16_t x268 = 7;
volatile uint16_t x386 = UINT16_MAX;
static volatile int32_t x388 = INT32_MIN;
volatile int32_t t3 = 43;
static volatile uint8_t x601 = UINT8_MAX;
static int16_t x609 = INT16_MIN;
uint8_t x611 = 7U;
int64_t x630 = -4LL;
static uint32_t x632 = UINT32_MAX;
int8_t x807 = INT8_MIN;
static volatile int8_t x808 = INT8_MIN;
volatile int16_t x911 = -1;
static uint32_t x1034 = 827U;
int32_t t14 = -104245231;
int32_t x1134 = 13239;
volatile int16_t x1194 = -1;
static volatile int16_t x1235 = -3;
uint32_t x1236 = UINT32_MAX;
volatile int32_t x1292 = -1;
uint32_t x1318 = 3002U;
int32_t x1397 = 1;
volatile int8_t x1398 = -3;
int32_t t21 = -477570;
static volatile uint32_t x1577 = 988569545U;
volatile int32_t t24 = -3;
int64_t x1882 = INT64_MIN;
int64_t x1886 = INT64_MIN;
volatile uint8_t x1887 = 13U;
uint16_t x2039 = 4U;
volatile int32_t t31 = -99134;
static int8_t x2054 = 0;
volatile int16_t x2056 = -1;
int32_t t32 = 450169;
int16_t x2246 = -6;
int16_t x2247 = INT16_MAX;
int8_t x2372 = INT8_MAX;
static volatile int8_t x2406 = 5;
int64_t x2408 = -1LL;
static volatile int32_t t42 = -1603;
volatile int16_t x2656 = -3;
int32_t t43 = -2960071;
volatile uint64_t x2690 = 180044372926604LLU;
static volatile int32_t t44 = -19267;
volatile uint8_t x2856 = 14U;
uint32_t x2946 = 513755U;
int64_t x2947 = INT64_MIN;
static int32_t t49 = 1013866887;
uint32_t x3107 = UINT32_MAX;
volatile int64_t x3214 = INT64_MIN;
static int16_t x3215 = -1;
int16_t x3262 = INT16_MIN;
int8_t x3263 = 14;
int32_t t56 = -134;
int32_t x3394 = -19450698;
volatile int32_t t57 = 42753611;
volatile int32_t t58 = -901880;
int16_t x3475 = -1;
volatile uint32_t x3476 = UINT32_MAX;
static volatile int32_t t61 = -1830;
uint32_t x3570 = UINT32_MAX;
uint8_t x3572 = 1U;
int32_t t65 = 116;
int8_t x3747 = INT8_MIN;
volatile int64_t x4037 = -415662032963LL;
static uint16_t x4075 = 12U;
static int8_t x4169 = INT8_MAX;
int16_t x4181 = INT16_MAX;
int32_t t73 = 34;
static int16_t x4221 = INT16_MIN;
uint32_t x4265 = 153952473U;
volatile int32_t t75 = -62332000;
static int8_t x4271 = -13;
int32_t x4317 = INT32_MIN;
volatile uint8_t x4319 = 3U;
volatile int32_t t78 = 0;
int32_t x4338 = 1;
volatile int32_t t81 = 16090;
int16_t x4736 = -9;
int32_t x4764 = -1;
volatile int32_t t87 = -856242008;
static int32_t x5053 = INT32_MIN;
static volatile int16_t x5055 = -1;
uint8_t x5094 = 23U;
int8_t x5123 = 0;
int32_t t90 = -479708872;
volatile int8_t x5125 = -1;
int64_t x5382 = -1LL;
volatile int8_t x5662 = INT8_MIN;
volatile int8_t x5663 = INT8_MIN;
volatile int32_t t98 = 1132494;


void f0(void) {
	int8_t x97 = 1;
	int32_t x98 = -1043729315;
	static uint8_t x99 = 11U;
	static uint8_t x100 = 2U;

	t0 = ((x97==x98)<<(x99^x100));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t1 = -5702;

	t1 = ((x141==x142)<<(x143^x144));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x265 = 19U;
	volatile uint8_t x267 = 0U;
	int32_t t2 = 346826;

	t2 = ((x265==x266)<<(x267^x268));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x387 = INT32_MIN;

	t3 = ((x385==x386)<<(x387^x388));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x389 = 6275;
	int16_t x390 = -1;
	int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t4 = 1;

	t4 = ((x389==x390)<<(x391^x392));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x602 = 0;
	uint64_t x603 = 0LLU;
	static volatile int8_t x604 = 31;
	volatile int32_t t5 = 0;

	t5 = ((x601==x602)<<(x603^x604));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x610 = UINT16_MAX;
	int8_t x612 = 1;
	volatile int32_t t6 = -1;

	t6 = ((x609==x610)<<(x611^x612));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x629 = 53880226U;
	int32_t x631 = -1;
	static int32_t t7 = -1445;

	t7 = ((x629==x630)<<(x631^x632));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x689 = 0U;
	int16_t x690 = INT16_MAX;
	uint16_t x691 = 1U;
	volatile uint16_t x692 = 21U;
	static int32_t t8 = 303;

	t8 = ((x689==x690)<<(x691^x692));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x805 = -1LL;
	uint64_t x806 = 8730LLU;
	volatile int32_t t9 = 3344702;

	t9 = ((x805==x806)<<(x807^x808));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x813 = INT8_MIN;
	uint16_t x814 = 210U;
	static uint16_t x815 = 5U;
	volatile uint8_t x816 = 28U;
	static volatile int32_t t10 = 30933;

	t10 = ((x813==x814)<<(x815^x816));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x889 = -2222497397799528LL;
	int64_t x890 = 1138230874149931892LL;
	static volatile int16_t x891 = -1;
	int8_t x892 = -30;
	int32_t t11 = -76;

	t11 = ((x889==x890)<<(x891^x892));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x897 = INT64_MIN;
	int16_t x898 = INT16_MIN;
	int32_t x899 = 0;
	uint32_t x900 = 0U;
	static volatile int32_t t12 = -271785614;

	t12 = ((x897==x898)<<(x899^x900));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x909 = INT32_MIN;
	int16_t x910 = INT16_MIN;
	uint32_t x912 = UINT32_MAX;
	volatile int32_t t13 = -117;

	t13 = ((x909==x910)<<(x911^x912));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1033 = 47162U;
	volatile int32_t x1035 = 2;
	static uint8_t x1036 = 1U;

	t14 = ((x1033==x1034)<<(x1035^x1036));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1133 = UINT16_MAX;
	static uint16_t x1135 = UINT16_MAX;
	uint16_t x1136 = UINT16_MAX;
	int32_t t15 = 213;

	t15 = ((x1133==x1134)<<(x1135^x1136));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1189 = INT8_MAX;
	int32_t x1190 = INT32_MAX;
	uint8_t x1191 = 31U;
	uint8_t x1192 = 22U;
	volatile int32_t t16 = -215;

	t16 = ((x1189==x1190)<<(x1191^x1192));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1193 = INT8_MIN;
	static uint64_t x1195 = 31LLU;
	uint8_t x1196 = 1U;
	static volatile int32_t t17 = 321088;

	t17 = ((x1193==x1194)<<(x1195^x1196));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1233 = 0;
	int32_t x1234 = -6560;
	volatile int32_t t18 = 58;

	t18 = ((x1233==x1234)<<(x1235^x1236));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x1289 = 10U;
	static int64_t x1290 = -230LL;
	static uint32_t x1291 = UINT32_MAX;
	int32_t t19 = -22;

	t19 = ((x1289==x1290)<<(x1291^x1292));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1317 = 1711LLU;
	uint64_t x1319 = UINT64_MAX;
	volatile uint64_t x1320 = UINT64_MAX;
	volatile int32_t t20 = 156;

	t20 = ((x1317==x1318)<<(x1319^x1320));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x1399 = -1LL;
	static int32_t x1400 = -1;

	t21 = ((x1397==x1398)<<(x1399^x1400));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x1417 = -1LL;
	int64_t x1418 = -1LL;
	static int8_t x1419 = INT8_MIN;
	int8_t x1420 = INT8_MIN;
	volatile int32_t t22 = -137155;

	t22 = ((x1417==x1418)<<(x1419^x1420));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1578 = UINT8_MAX;
	volatile int16_t x1579 = -1;
	uint32_t x1580 = UINT32_MAX;
	static volatile int32_t t23 = 73400894;

	t23 = ((x1577==x1578)<<(x1579^x1580));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1669 = 35616009289339715LLU;
	volatile uint64_t x1670 = UINT64_MAX;
	static volatile int16_t x1671 = -5;
	int32_t x1672 = -16;

	t24 = ((x1669==x1670)<<(x1671^x1672));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1685 = 3;
	uint64_t x1686 = 1935084086365111LLU;
	int16_t x1687 = -1;
	static int32_t x1688 = -1;
	volatile int32_t t25 = 418257;

	t25 = ((x1685==x1686)<<(x1687^x1688));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1789 = INT64_MIN;
	uint16_t x1790 = 2928U;
	volatile int32_t x1791 = INT32_MAX;
	volatile int32_t x1792 = INT32_MAX;
	volatile int32_t t26 = -159;

	t26 = ((x1789==x1790)<<(x1791^x1792));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1877 = INT64_MIN;
	volatile int16_t x1878 = INT16_MIN;
	uint32_t x1879 = UINT32_MAX;
	int16_t x1880 = -1;
	static int32_t t27 = 2121877;

	t27 = ((x1877==x1878)<<(x1879^x1880));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1881 = -131050667019079892LL;
	static int64_t x1883 = INT64_MIN;
	int64_t x1884 = INT64_MIN;
	int32_t t28 = -1;

	t28 = ((x1881==x1882)<<(x1883^x1884));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1885 = 3;
	uint16_t x1888 = 13U;
	int32_t t29 = -1741904;

	t29 = ((x1885==x1886)<<(x1887^x1888));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2029 = -1;
	uint16_t x2030 = UINT16_MAX;
	static volatile uint64_t x2031 = UINT64_MAX;
	static int64_t x2032 = -1LL;
	int32_t t30 = -209;

	t30 = ((x2029==x2030)<<(x2031^x2032));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2037 = 106U;
	static uint32_t x2038 = UINT32_MAX;
	volatile uint8_t x2040 = 22U;

	t31 = ((x2037==x2038)<<(x2039^x2040));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2053 = INT64_MIN;
	int64_t x2055 = -1LL;

	t32 = ((x2053==x2054)<<(x2055^x2056));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2117 = INT32_MAX;
	uint8_t x2118 = 30U;
	int64_t x2119 = INT64_MAX;
	int64_t x2120 = INT64_MAX;
	int32_t t33 = -9003084;

	t33 = ((x2117==x2118)<<(x2119^x2120));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2245 = -1078LL;
	int16_t x2248 = INT16_MAX;
	int32_t t34 = 1554;

	t34 = ((x2245==x2246)<<(x2247^x2248));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x2273 = INT32_MIN;
	int64_t x2274 = INT64_MAX;
	volatile int32_t x2275 = -1;
	int32_t x2276 = -1;
	static volatile int32_t t35 = -55401;

	t35 = ((x2273==x2274)<<(x2275^x2276));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2369 = INT16_MAX;
	uint64_t x2370 = 3733LLU;
	static int8_t x2371 = INT8_MAX;
	int32_t t36 = 0;

	t36 = ((x2369==x2370)<<(x2371^x2372));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2405 = 6U;
	int16_t x2407 = -1;
	int32_t t37 = 200;

	t37 = ((x2405==x2406)<<(x2407^x2408));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2493 = INT8_MAX;
	volatile uint32_t x2494 = UINT32_MAX;
	static volatile int8_t x2495 = INT8_MIN;
	int8_t x2496 = INT8_MIN;
	volatile int32_t t38 = 20733053;

	t38 = ((x2493==x2494)<<(x2495^x2496));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2557 = -1;
	int16_t x2558 = INT16_MAX;
	volatile int8_t x2559 = -1;
	int32_t x2560 = -1;
	static volatile int32_t t39 = 314805;

	t39 = ((x2557==x2558)<<(x2559^x2560));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2577 = -2;
	uint32_t x2578 = 122220U;
	int16_t x2579 = -8;
	int64_t x2580 = -1LL;
	volatile int32_t t40 = 550645;

	t40 = ((x2577==x2578)<<(x2579^x2580));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint64_t x2597 = 1705417562LLU;
	int64_t x2598 = -9494036059LL;
	int16_t x2599 = -1;
	volatile uint32_t x2600 = UINT32_MAX;
	int32_t t41 = 50237;

	t41 = ((x2597==x2598)<<(x2599^x2600));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2625 = 1;
	int16_t x2626 = INT16_MIN;
	int8_t x2627 = -1;
	int64_t x2628 = -1LL;

	t42 = ((x2625==x2626)<<(x2627^x2628));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2653 = -256515;
	int16_t x2654 = -1;
	int8_t x2655 = -1;

	t43 = ((x2653==x2654)<<(x2655^x2656));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2689 = INT64_MIN;
	static volatile uint64_t x2691 = UINT64_MAX;
	static int16_t x2692 = -1;

	t44 = ((x2689==x2690)<<(x2691^x2692));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2749 = 243644276;
	volatile int64_t x2750 = 15LL;
	uint64_t x2751 = UINT64_MAX;
	int32_t x2752 = -1;
	static volatile int32_t t45 = 0;

	t45 = ((x2749==x2750)<<(x2751^x2752));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2805 = UINT64_MAX;
	int64_t x2806 = INT64_MAX;
	uint16_t x2807 = UINT16_MAX;
	static volatile uint16_t x2808 = UINT16_MAX;
	int32_t t46 = 174;

	t46 = ((x2805==x2806)<<(x2807^x2808));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2853 = -18001144305LL;
	uint8_t x2854 = 7U;
	int8_t x2855 = 0;
	int32_t t47 = -168;

	t47 = ((x2853==x2854)<<(x2855^x2856));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2893 = INT32_MAX;
	volatile int16_t x2894 = -1;
	static int16_t x2895 = 3;
	uint8_t x2896 = 3U;
	int32_t t48 = -30;

	t48 = ((x2893==x2894)<<(x2895^x2896));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2945 = -1LL;
	int64_t x2948 = INT64_MIN;

	t49 = ((x2945==x2946)<<(x2947^x2948));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3105 = UINT64_MAX;
	volatile uint64_t x3106 = UINT64_MAX;
	int8_t x3108 = -1;
	int32_t t50 = -6;

	t50 = ((x3105==x3106)<<(x3107^x3108));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3153 = INT8_MIN;
	volatile int8_t x3154 = -40;
	static int8_t x3155 = 18;
	uint16_t x3156 = 14U;
	volatile int32_t t51 = -304666;

	t51 = ((x3153==x3154)<<(x3155^x3156));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3213 = -51;
	uint32_t x3216 = UINT32_MAX;
	volatile int32_t t52 = -2445;

	t52 = ((x3213==x3214)<<(x3215^x3216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3261 = 299;
	int16_t x3264 = 2;
	volatile int32_t t53 = -39;

	t53 = ((x3261==x3262)<<(x3263^x3264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3269 = INT64_MAX;
	int64_t x3270 = 8344430137348LL;
	int16_t x3271 = -1;
	int8_t x3272 = -1;
	static volatile int32_t t54 = -359;

	t54 = ((x3269==x3270)<<(x3271^x3272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3277 = INT64_MAX;
	volatile uint64_t x3278 = 827647157701810LLU;
	int16_t x3279 = -1;
	int8_t x3280 = -3;
	volatile int32_t t55 = 21;

	t55 = ((x3277==x3278)<<(x3279^x3280));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3389 = -870802084;
	volatile uint64_t x3390 = UINT64_MAX;
	uint64_t x3391 = 0LLU;
	volatile uint64_t x3392 = 1LLU;

	t56 = ((x3389==x3390)<<(x3391^x3392));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3393 = 1607U;
	static volatile uint32_t x3395 = UINT32_MAX;
	volatile int16_t x3396 = -1;

	t57 = ((x3393==x3394)<<(x3395^x3396));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3401 = INT32_MIN;
	static int16_t x3402 = -171;
	static int8_t x3403 = INT8_MAX;
	uint32_t x3404 = 119U;

	t58 = ((x3401==x3402)<<(x3403^x3404));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3441 = INT16_MAX;
	int8_t x3442 = -6;
	int8_t x3443 = 8;
	int8_t x3444 = 9;
	int32_t t59 = -573838649;

	t59 = ((x3441==x3442)<<(x3443^x3444));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3445 = 1021366249007231702LLU;
	int16_t x3446 = -1;
	volatile int16_t x3447 = INT16_MAX;
	volatile int16_t x3448 = INT16_MAX;
	volatile int32_t t60 = -1478578;

	t60 = ((x3445==x3446)<<(x3447^x3448));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3473 = UINT64_MAX;
	uint64_t x3474 = 0LLU;

	t61 = ((x3473==x3474)<<(x3475^x3476));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3569 = INT32_MIN;
	uint16_t x3571 = 2U;
	int32_t t62 = 0;

	t62 = ((x3569==x3570)<<(x3571^x3572));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3657 = -80;
	int64_t x3658 = INT64_MIN;
	static uint64_t x3659 = UINT64_MAX;
	static int8_t x3660 = -1;
	int32_t t63 = 25471;

	t63 = ((x3657==x3658)<<(x3659^x3660));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3717 = 0;
	int32_t x3718 = INT32_MIN;
	int32_t x3719 = -1;
	int8_t x3720 = -1;
	volatile int32_t t64 = 1920020;

	t64 = ((x3717==x3718)<<(x3719^x3720));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3721 = INT16_MIN;
	static int8_t x3722 = INT8_MIN;
	int32_t x3723 = -3;
	static uint64_t x3724 = UINT64_MAX;

	t65 = ((x3721==x3722)<<(x3723^x3724));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3745 = UINT8_MAX;
	int32_t x3746 = -1885;
	int8_t x3748 = INT8_MIN;
	int32_t t66 = -936;

	t66 = ((x3745==x3746)<<(x3747^x3748));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3953 = -2836288383928LL;
	int64_t x3954 = -1910LL;
	static int16_t x3955 = 10;
	volatile int8_t x3956 = 1;
	int32_t t67 = 16132731;

	t67 = ((x3953==x3954)<<(x3955^x3956));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3973 = 14;
	static int8_t x3974 = INT8_MIN;
	uint32_t x3975 = UINT32_MAX;
	int16_t x3976 = -26;
	int32_t t68 = -2444;

	t68 = ((x3973==x3974)<<(x3975^x3976));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4038 = 35;
	static int16_t x4039 = -1;
	volatile uint64_t x4040 = UINT64_MAX;
	int32_t t69 = 382844688;

	t69 = ((x4037==x4038)<<(x4039^x4040));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4073 = 118;
	int8_t x4074 = INT8_MAX;
	int16_t x4076 = 6;
	int32_t t70 = 12403075;

	t70 = ((x4073==x4074)<<(x4075^x4076));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4170 = INT16_MIN;
	int32_t x4171 = 2;
	int16_t x4172 = 1;
	static int32_t t71 = 22594192;

	t71 = ((x4169==x4170)<<(x4171^x4172));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4182 = 748U;
	int8_t x4183 = -5;
	int32_t x4184 = -13;
	int32_t t72 = 80506;

	t72 = ((x4181==x4182)<<(x4183^x4184));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4201 = UINT16_MAX;
	uint16_t x4202 = 28U;
	static int8_t x4203 = INT8_MAX;
	uint32_t x4204 = 118U;

	t73 = ((x4201==x4202)<<(x4203^x4204));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4222 = INT64_MIN;
	static uint32_t x4223 = UINT32_MAX;
	volatile int16_t x4224 = -1;
	static volatile int32_t t74 = -7;

	t74 = ((x4221==x4222)<<(x4223^x4224));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x4266 = -1;
	int8_t x4267 = -1;
	int8_t x4268 = -1;

	t75 = ((x4265==x4266)<<(x4267^x4268));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4269 = UINT16_MAX;
	int8_t x4270 = INT8_MIN;
	uint32_t x4272 = UINT32_MAX;
	volatile int32_t t76 = 13;

	t76 = ((x4269==x4270)<<(x4271^x4272));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4273 = 46;
	static uint32_t x4274 = 4U;
	int16_t x4275 = -4;
	int32_t x4276 = -1;
	volatile int32_t t77 = -488616446;

	t77 = ((x4273==x4274)<<(x4275^x4276));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x4318 = UINT32_MAX;
	int8_t x4320 = 5;

	t78 = ((x4317==x4318)<<(x4319^x4320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4337 = INT8_MIN;
	int64_t x4339 = INT64_MIN;
	int64_t x4340 = INT64_MIN;
	volatile int32_t t79 = 997846;

	t79 = ((x4337==x4338)<<(x4339^x4340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4357 = -1LL;
	static int8_t x4358 = 7;
	uint8_t x4359 = 1U;
	int8_t x4360 = 1;
	static int32_t t80 = 1682;

	t80 = ((x4357==x4358)<<(x4359^x4360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4461 = 0U;
	int8_t x4462 = -1;
	uint32_t x4463 = UINT32_MAX;
	volatile uint32_t x4464 = UINT32_MAX;

	t81 = ((x4461==x4462)<<(x4463^x4464));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4561 = INT16_MIN;
	int32_t x4562 = INT32_MAX;
	volatile uint64_t x4563 = UINT64_MAX;
	int16_t x4564 = -1;
	volatile int32_t t82 = -10081;

	t82 = ((x4561==x4562)<<(x4563^x4564));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4601 = 474289793358312LLU;
	int32_t x4602 = 39;
	uint8_t x4603 = 4U;
	int32_t x4604 = 0;
	volatile int32_t t83 = -501260867;

	t83 = ((x4601==x4602)<<(x4603^x4604));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4733 = INT64_MAX;
	static int64_t x4734 = INT64_MIN;
	uint64_t x4735 = UINT64_MAX;
	volatile int32_t t84 = -136;

	t84 = ((x4733==x4734)<<(x4735^x4736));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4761 = -1LL;
	static volatile uint16_t x4762 = UINT16_MAX;
	int64_t x4763 = -1LL;
	volatile int32_t t85 = 107826;

	t85 = ((x4761==x4762)<<(x4763^x4764));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x4913 = 7;
	uint64_t x4914 = UINT64_MAX;
	int32_t x4915 = INT32_MIN;
	static int32_t x4916 = INT32_MIN;
	static volatile int32_t t86 = -15;

	t86 = ((x4913==x4914)<<(x4915^x4916));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4961 = -1;
	static int16_t x4962 = 36;
	uint64_t x4963 = UINT64_MAX;
	volatile int16_t x4964 = -1;

	t87 = ((x4961==x4962)<<(x4963^x4964));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5054 = -213150542;
	volatile uint32_t x5056 = UINT32_MAX;
	static int32_t t88 = -108050;

	t88 = ((x5053==x5054)<<(x5055^x5056));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5093 = INT64_MAX;
	int64_t x5095 = -1LL;
	uint64_t x5096 = UINT64_MAX;
	volatile int32_t t89 = 6;

	t89 = ((x5093==x5094)<<(x5095^x5096));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x5121 = INT16_MIN;
	int8_t x5122 = INT8_MIN;
	int8_t x5124 = 3;

	t90 = ((x5121==x5122)<<(x5123^x5124));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5126 = INT16_MIN;
	uint8_t x5127 = 0U;
	uint16_t x5128 = 5U;
	static int32_t t91 = -9152586;

	t91 = ((x5125==x5126)<<(x5127^x5128));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5285 = 2493330899641161LLU;
	int16_t x5286 = INT16_MAX;
	volatile int8_t x5287 = INT8_MIN;
	int8_t x5288 = INT8_MIN;
	int32_t t92 = 1336689;

	t92 = ((x5285==x5286)<<(x5287^x5288));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5381 = 2876953LL;
	int16_t x5383 = -1;
	static int16_t x5384 = -1;
	int32_t t93 = -3303;

	t93 = ((x5381==x5382)<<(x5383^x5384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5469 = 1076;
	uint8_t x5470 = 43U;
	uint16_t x5471 = 4U;
	int64_t x5472 = 2LL;
	volatile int32_t t94 = -3;

	t94 = ((x5469==x5470)<<(x5471^x5472));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5625 = INT32_MIN;
	volatile uint16_t x5626 = UINT16_MAX;
	static int8_t x5627 = INT8_MIN;
	volatile int8_t x5628 = INT8_MIN;
	static int32_t t95 = -1;

	t95 = ((x5625==x5626)<<(x5627^x5628));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5641 = UINT32_MAX;
	uint32_t x5642 = 2997868U;
	static int16_t x5643 = 0;
	int8_t x5644 = 13;
	volatile int32_t t96 = 6284578;

	t96 = ((x5641==x5642)<<(x5643^x5644));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5661 = -2;
	int8_t x5664 = INT8_MIN;
	static int32_t t97 = 178;

	t97 = ((x5661==x5662)<<(x5663^x5664));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x5717 = INT16_MIN;
	int16_t x5718 = 1445;
	int16_t x5719 = -1;
	static int32_t x5720 = -1;

	t98 = ((x5717==x5718)<<(x5719^x5720));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5761 = 11398913615743571LLU;
	int32_t x5762 = INT32_MIN;
	int64_t x5763 = -1LL;
	int64_t x5764 = -1LL;
	int32_t t99 = -14361;

	t99 = ((x5761==x5762)<<(x5763^x5764));

	if (t99 != 0) { NG(); } else { ; }
	
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

