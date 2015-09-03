#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x64 = -355;
int32_t x126 = 0;
static int32_t x127 = INT32_MAX;
uint32_t x149 = UINT32_MAX;
uint8_t x150 = 5U;
int16_t x237 = 94;
static int8_t x238 = 4;
volatile int32_t t5 = 30;
volatile uint32_t x260 = UINT32_MAX;
static int16_t x267 = 239;
volatile int32_t t7 = 118;
int64_t x306 = 1LL;
static int16_t x308 = INT16_MIN;
volatile uint32_t t8 = 749238U;
volatile uint8_t x314 = 1U;
uint8_t x318 = 1U;
uint32_t x320 = 16466U;
uint16_t x410 = 6U;
uint8_t x614 = 25U;
uint64_t x641 = 54LLU;
int8_t x690 = 0;
volatile int16_t x692 = INT16_MIN;
int64_t x764 = INT64_MIN;
volatile int32_t t19 = -1;
volatile int32_t x892 = -1;
static volatile int32_t t22 = 971622;
volatile uint8_t x1054 = 4U;
static volatile int32_t x1131 = -1;
static uint16_t x1132 = 10U;
uint32_t x1138 = 2U;
static uint64_t x1140 = 11LLU;
uint64_t x1201 = UINT64_MAX;
int32_t x1222 = 1;
uint32_t x1223 = UINT32_MAX;
int32_t x1224 = INT32_MIN;
volatile int32_t t30 = 2021440;
int64_t x1349 = 228842420427344LL;
int64_t t33 = -6211920LL;
volatile int8_t x1773 = 4;
static volatile int32_t t37 = -22846;
int8_t x1790 = 1;
int32_t x1814 = 25;
volatile uint16_t x1919 = 1905U;
volatile uint16_t x1923 = 40U;
uint8_t x1969 = 5U;
uint8_t x1970 = 7U;
static uint32_t x1971 = UINT32_MAX;
int32_t t42 = 8092;
static uint32_t t45 = 1315457U;
volatile int64_t x2679 = INT64_MIN;
volatile uint8_t x2873 = UINT8_MAX;
static int16_t x2874 = 2;
static int16_t x2876 = INT16_MIN;
static int8_t x2882 = 1;
volatile int32_t t50 = 0;
volatile int16_t x3319 = -1;
static uint8_t x3410 = 28U;
int16_t x3543 = INT16_MAX;
uint64_t t60 = 245922LLU;
int32_t x3580 = INT32_MIN;
int32_t x3620 = -14261926;
volatile uint64_t t63 = 5050992166157LLU;
int16_t x3628 = INT16_MAX;
int64_t x3705 = INT64_MAX;
static volatile uint8_t x3706 = 0U;
int64_t x3708 = INT64_MIN;
int64_t x3763 = -7LL;
volatile int32_t t67 = 120855858;
volatile uint64_t x3785 = UINT64_MAX;
uint64_t t68 = 2887231526974398LLU;
volatile int32_t x3831 = INT32_MAX;
static volatile uint8_t x3918 = 0U;
int16_t x4123 = -42;
int16_t x4174 = 1;
uint8_t x4180 = 18U;
volatile int32_t t74 = 82;
static int16_t x4456 = INT16_MIN;
int32_t t78 = 204954;
volatile int8_t x4668 = -33;
uint32_t x4676 = 4181038U;
int32_t x4700 = INT32_MAX;
int64_t x4933 = INT64_MAX;
int64_t t85 = INT64_MAX;
uint64_t x5169 = 174102012LLU;
uint16_t x5190 = 0U;
uint32_t x5192 = UINT32_MAX;
int8_t x5242 = 0;
int8_t x5266 = 2;
uint64_t x5310 = 1LLU;
uint16_t x5311 = 2105U;
uint16_t x5357 = 130U;
static volatile int8_t x5358 = 0;
volatile int32_t t93 = -27942311;
int8_t x5389 = INT8_MAX;
int8_t x5421 = INT8_MAX;
volatile int64_t x5423 = INT64_MAX;
volatile int64_t x5424 = INT64_MIN;
static int16_t x5538 = 1;
volatile uint8_t x5579 = UINT8_MAX;
volatile int32_t t99 = -781;


void f0(void) {
	static volatile int16_t x61 = 1;
	uint32_t x62 = 0U;
	int16_t x63 = -1;
	volatile int32_t t0 = 45602674;

	t0 = ((x61<<x62)+(x63<=x64));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x125 = UINT32_MAX;
	int8_t x128 = INT8_MAX;
	static volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x125<<x126)+(x127<=x128));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x151 = -6;
	int8_t x152 = INT8_MIN;
	uint32_t t2 = 5284U;

	t2 = ((x149<<x150)+(x151<=x152));

	if (t2 != 4294967264U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x181 = 20;
	volatile uint8_t x182 = 13U;
	uint8_t x183 = 1U;
	volatile uint8_t x184 = 0U;
	volatile int32_t t3 = -1659;

	t3 = ((x181<<x182)+(x183<=x184));

	if (t3 != 163840) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x229 = INT8_MAX;
	static uint8_t x230 = 2U;
	int32_t x231 = INT32_MAX;
	int16_t x232 = INT16_MAX;
	volatile int32_t t4 = 3;

	t4 = ((x229<<x230)+(x231<=x232));

	if (t4 != 508) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x239 = 2120133U;
	int64_t x240 = 0LL;

	t5 = ((x237<<x238)+(x239<=x240));

	if (t5 != 1504) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x257 = 2108259296582986990LLU;
	uint8_t x258 = 14U;
	int16_t x259 = -1014;
	volatile uint64_t t6 = 39976821199476LLU;

	t6 = ((x257<<x258)+(x259<=x260));

	if (t6 != 9415409231378219009LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = 2;
	static uint64_t x268 = 767649LLU;

	t7 = ((x265<<x266)+(x267<=x268));

	if (t7 != 131069) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint8_t x307 = UINT8_MAX;

	t8 = ((x305<<x306)+(x307<=x308));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x313 = 2U;
	uint8_t x315 = 0U;
	int8_t x316 = INT8_MIN;
	volatile int32_t t9 = 1879;

	t9 = ((x313<<x314)+(x315<=x316));

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t10 = -104168;

	t10 = ((x317<<x318)+(x319<=x320));

	if (t10 != 510) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x409 = 6775LLU;
	uint16_t x411 = 21U;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t11 = 10721016LLU;

	t11 = ((x409<<x410)+(x411<=x412));

	if (t11 != 433600LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x433 = 134LLU;
	uint32_t x434 = 19U;
	static volatile int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MAX;
	volatile uint64_t t12 = 20531892855262053LLU;

	t12 = ((x433<<x434)+(x435<=x436));

	if (t12 != 70254593LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x437 = 10407U;
	uint16_t x438 = 2U;
	int32_t x439 = -1;
	static int16_t x440 = -1;
	uint32_t t13 = 58624436U;

	t13 = ((x437<<x438)+(x439<=x440));

	if (t13 != 41629U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x521 = 290U;
	uint16_t x522 = 0U;
	uint64_t x523 = 101941587LLU;
	int32_t x524 = INT32_MIN;
	int32_t t14 = 120730;

	t14 = ((x521<<x522)+(x523<=x524));

	if (t14 != 291) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x613 = 5U;
	int32_t x615 = INT32_MIN;
	int64_t x616 = 5994LL;
	volatile int32_t t15 = 132;

	t15 = ((x613<<x614)+(x615<=x616));

	if (t15 != 167772161) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x625 = 439122643210994LL;
	uint8_t x626 = 1U;
	volatile int16_t x627 = INT16_MAX;
	int32_t x628 = INT32_MIN;
	static int64_t t16 = -167094LL;

	t16 = ((x625<<x626)+(x627<=x628));

	if (t16 != 878245286421988LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x642 = 6U;
	uint16_t x643 = 28685U;
	static int16_t x644 = INT16_MIN;
	uint64_t t17 = 1171351193LLU;

	t17 = ((x641<<x642)+(x643<=x644));

	if (t17 != 3456LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x689 = INT16_MAX;
	volatile int16_t x691 = INT16_MIN;
	static int32_t t18 = -89229;

	t18 = ((x689<<x690)+(x691<=x692));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x761 = INT8_MAX;
	uint8_t x762 = 1U;
	int64_t x763 = INT64_MIN;

	t19 = ((x761<<x762)+(x763<=x764));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x889 = UINT8_MAX;
	int32_t x890 = 7;
	uint8_t x891 = 110U;
	int32_t t20 = 2786874;

	t20 = ((x889<<x890)+(x891<=x892));

	if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x965 = 79U;
	static volatile uint16_t x966 = 20U;
	uint16_t x967 = 26251U;
	int8_t x968 = INT8_MIN;
	volatile int32_t t21 = 93401070;

	t21 = ((x965<<x966)+(x967<=x968));

	if (t21 != 82837504) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1041 = UINT16_MAX;
	int64_t x1042 = 5LL;
	int16_t x1043 = 5367;
	int64_t x1044 = 14241322LL;

	t22 = ((x1041<<x1042)+(x1043<=x1044));

	if (t22 != 2097121) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x1053 = 36U;
	volatile int16_t x1055 = -1;
	volatile int8_t x1056 = -1;
	volatile int32_t t23 = -74;

	t23 = ((x1053<<x1054)+(x1055<=x1056));

	if (t23 != 577) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1121 = 92U;
	uint8_t x1122 = 3U;
	int8_t x1123 = INT8_MIN;
	uint64_t x1124 = 10866008111698LLU;
	int32_t t24 = 1;

	t24 = ((x1121<<x1122)+(x1123<=x1124));

	if (t24 != 736) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1129 = UINT16_MAX;
	uint8_t x1130 = 15U;
	int32_t t25 = 36099657;

	t25 = ((x1129<<x1130)+(x1131<=x1132));

	if (t25 != 2147450881) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1137 = 7U;
	int16_t x1139 = INT16_MAX;
	int32_t t26 = 403;

	t26 = ((x1137<<x1138)+(x1139<=x1140));

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1161 = 0LLU;
	static int16_t x1162 = 29;
	uint8_t x1163 = 15U;
	int32_t x1164 = INT32_MIN;
	uint64_t t27 = 6757021181691285927LLU;

	t27 = ((x1161<<x1162)+(x1163<=x1164));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1185 = 30U;
	uint8_t x1186 = 3U;
	int32_t x1187 = INT32_MAX;
	static volatile uint32_t x1188 = 440U;
	static volatile int32_t t28 = 2323;

	t28 = ((x1185<<x1186)+(x1187<=x1188));

	if (t28 != 240) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1202 = 32LLU;
	volatile int16_t x1203 = INT16_MAX;
	volatile int64_t x1204 = 220080200LL;
	volatile uint64_t t29 = 17267LLU;

	t29 = ((x1201<<x1202)+(x1203<=x1204));

	if (t29 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1221 = 46;

	t30 = ((x1221<<x1222)+(x1223<=x1224));

	if (t30 != 92) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1245 = 2;
	static int8_t x1246 = 10;
	volatile int8_t x1247 = INT8_MIN;
	int8_t x1248 = -1;
	volatile int32_t t31 = -25313139;

	t31 = ((x1245<<x1246)+(x1247<=x1248));

	if (t31 != 2049) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1345 = 57U;
	int8_t x1346 = 1;
	int16_t x1347 = -1;
	int8_t x1348 = -1;
	int32_t t32 = -1151;

	t32 = ((x1345<<x1346)+(x1347<=x1348));

	if (t32 != 115) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1350 = 3;
	static int16_t x1351 = INT16_MAX;
	static uint16_t x1352 = UINT16_MAX;

	t33 = ((x1349<<x1350)+(x1351<=x1352));

	if (t33 != 1830739363418753LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1369 = 109171773U;
	int8_t x1370 = 2;
	static uint8_t x1371 = 3U;
	int16_t x1372 = INT16_MAX;
	uint32_t t34 = 1562190889U;

	t34 = ((x1369<<x1370)+(x1371<=x1372));

	if (t34 != 436687093U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1393 = INT8_MAX;
	uint16_t x1394 = 3U;
	int8_t x1395 = -1;
	volatile uint16_t x1396 = 5558U;
	volatile int32_t t35 = -1;

	t35 = ((x1393<<x1394)+(x1395<=x1396));

	if (t35 != 1017) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1437 = 1U;
	uint8_t x1438 = 13U;
	int8_t x1439 = -5;
	static volatile int8_t x1440 = -33;
	volatile uint32_t t36 = 1597048049U;

	t36 = ((x1437<<x1438)+(x1439<=x1440));

	if (t36 != 8192U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1774 = 0U;
	int32_t x1775 = -1;
	int32_t x1776 = 15;

	t37 = ((x1773<<x1774)+(x1775<=x1776));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1789 = INT16_MAX;
	int8_t x1791 = INT8_MIN;
	int64_t x1792 = INT64_MAX;
	int32_t t38 = 749;

	t38 = ((x1789<<x1790)+(x1791<=x1792));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1813 = 9U;
	uint8_t x1815 = 0U;
	uint64_t x1816 = UINT64_MAX;
	int32_t t39 = 259569005;

	t39 = ((x1813<<x1814)+(x1815<=x1816));

	if (t39 != 301989889) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1917 = 86;
	uint8_t x1918 = 0U;
	int32_t x1920 = -1;
	volatile int32_t t40 = -1515;

	t40 = ((x1917<<x1918)+(x1919<=x1920));

	if (t40 != 86) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1921 = UINT16_MAX;
	uint8_t x1922 = 15U;
	int32_t x1924 = INT32_MIN;
	volatile int32_t t41 = -696532;

	t41 = ((x1921<<x1922)+(x1923<=x1924));

	if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1972 = UINT64_MAX;

	t42 = ((x1969<<x1970)+(x1971<=x1972));

	if (t42 != 641) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2049 = 21087361LLU;
	uint8_t x2050 = 17U;
	uint16_t x2051 = 1U;
	uint64_t x2052 = 394216128239412754LLU;
	static volatile uint64_t t43 = 2221297220929LLU;

	t43 = ((x2049<<x2050)+(x2051<=x2052));

	if (t43 != 2763962580993LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2193 = UINT32_MAX;
	uint8_t x2194 = 3U;
	int32_t x2195 = -2055201;
	volatile uint8_t x2196 = 5U;
	static uint32_t t44 = 729334439U;

	t44 = ((x2193<<x2194)+(x2195<=x2196));

	if (t44 != 4294967289U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2281 = 25U;
	uint8_t x2282 = 6U;
	volatile int16_t x2283 = INT16_MIN;
	int8_t x2284 = 1;

	t45 = ((x2281<<x2282)+(x2283<=x2284));

	if (t45 != 1601U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2417 = 515U;
	uint8_t x2418 = 18U;
	int8_t x2419 = 5;
	int32_t x2420 = INT32_MIN;
	int32_t t46 = 67;

	t46 = ((x2417<<x2418)+(x2419<=x2420));

	if (t46 != 135004160) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2677 = 0;
	uint8_t x2678 = 6U;
	static uint64_t x2680 = 338459596984606810LLU;
	static int32_t t47 = 173;

	t47 = ((x2677<<x2678)+(x2679<=x2680));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2757 = 13083U;
	static uint32_t x2758 = 7U;
	int16_t x2759 = INT16_MIN;
	int8_t x2760 = INT8_MIN;
	volatile int32_t t48 = 1452;

	t48 = ((x2757<<x2758)+(x2759<=x2760));

	if (t48 != 1674625) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x2875 = -1;
	int32_t t49 = -9257;

	t49 = ((x2873<<x2874)+(x2875<=x2876));

	if (t49 != 1020) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2881 = 96315706;
	volatile uint8_t x2883 = UINT8_MAX;
	int8_t x2884 = INT8_MIN;

	t50 = ((x2881<<x2882)+(x2883<=x2884));

	if (t50 != 192631412) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2973 = 2287443893LL;
	uint8_t x2974 = 10U;
	int8_t x2975 = -1;
	int16_t x2976 = -1;
	volatile int64_t t51 = -469521564112LL;

	t51 = ((x2973<<x2974)+(x2975<=x2976));

	if (t51 != 2342342546433LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3113 = 50;
	uint16_t x3114 = 21U;
	int8_t x3115 = INT8_MIN;
	static int8_t x3116 = INT8_MIN;
	int32_t t52 = 3882152;

	t52 = ((x3113<<x3114)+(x3115<=x3116));

	if (t52 != 104857601) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3161 = 0U;
	volatile uint8_t x3162 = 16U;
	uint32_t x3163 = UINT32_MAX;
	int32_t x3164 = INT32_MAX;
	int32_t t53 = 3051;

	t53 = ((x3161<<x3162)+(x3163<=x3164));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3173 = 2437LLU;
	int16_t x3174 = 0;
	static int32_t x3175 = INT32_MIN;
	uint8_t x3176 = 4U;
	volatile uint64_t t54 = 109LLU;

	t54 = ((x3173<<x3174)+(x3175<=x3176));

	if (t54 != 2438LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x3185 = 76740987755LLU;
	uint8_t x3186 = 34U;
	int64_t x3187 = INT64_MIN;
	uint16_t x3188 = 2U;
	uint64_t t55 = 75LLU;

	t55 = ((x3185<<x3186)+(x3187<=x3188));

	if (t55 != 8681301448467677185LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x3281 = UINT64_MAX;
	uint16_t x3282 = 7U;
	volatile int8_t x3283 = INT8_MIN;
	volatile int32_t x3284 = INT32_MIN;
	static volatile uint64_t t56 = 262263064776703536LLU;

	t56 = ((x3281<<x3282)+(x3283<=x3284));

	if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3317 = 8U;
	uint32_t x3318 = 1U;
	volatile int8_t x3320 = -1;
	volatile int32_t t57 = -469621156;

	t57 = ((x3317<<x3318)+(x3319<=x3320));

	if (t57 != 17) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3409 = 7U;
	int32_t x3411 = INT32_MIN;
	uint32_t x3412 = 7684U;
	volatile int32_t t58 = -881601847;

	t58 = ((x3409<<x3410)+(x3411<=x3412));

	if (t58 != 1879048192) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3517 = 28594507995556LL;
	int16_t x3518 = 11;
	uint32_t x3519 = UINT32_MAX;
	uint8_t x3520 = UINT8_MAX;
	int64_t t59 = -10486673297LL;

	t59 = ((x3517<<x3518)+(x3519<=x3520));

	if (t59 != 58561552374898688LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3541 = 144086355974923773LLU;
	volatile uint8_t x3542 = 10U;
	int64_t x3544 = -1LL;

	t60 = ((x3541<<x3542)+(x3543<=x3544));

	if (t60 != 18417220002355082240LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3577 = 102306;
	int16_t x3578 = 1;
	int16_t x3579 = INT16_MIN;
	volatile int32_t t61 = -26684;

	t61 = ((x3577<<x3578)+(x3579<=x3580));

	if (t61 != 204612) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x3581 = 0;
	static int64_t x3582 = 18LL;
	volatile uint32_t x3583 = 237191U;
	int64_t x3584 = -300903432799310239LL;
	volatile int32_t t62 = 6582;

	t62 = ((x3581<<x3582)+(x3583<=x3584));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3617 = 57886422245972761LLU;
	uint8_t x3618 = 63U;
	uint32_t x3619 = 7U;

	t63 = ((x3617<<x3618)+(x3619<=x3620));

	if (t63 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3625 = UINT8_MAX;
	uint8_t x3626 = 4U;
	volatile int32_t x3627 = -2;
	static int32_t t64 = -5;

	t64 = ((x3625<<x3626)+(x3627<=x3628));

	if (t64 != 4081) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3681 = 16626U;
	uint8_t x3682 = 25U;
	uint32_t x3683 = 254U;
	uint8_t x3684 = UINT8_MAX;
	static volatile uint32_t t65 = 2701U;

	t65 = ((x3681<<x3682)+(x3683<=x3684));

	if (t65 != 3825205249U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3707 = UINT64_MAX;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x3705<<x3706)+(x3707<=x3708));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3761 = 3U;
	uint8_t x3762 = 26U;
	int32_t x3764 = -1;

	t67 = ((x3761<<x3762)+(x3763<=x3764));

	if (t67 != 201326593) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3786 = 5U;
	static int32_t x3787 = -415009756;
	uint8_t x3788 = 7U;

	t68 = ((x3785<<x3786)+(x3787<=x3788));

	if (t68 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x3829 = 2872744412720116262LLU;
	uint8_t x3830 = 2U;
	static int32_t x3832 = INT32_MAX;
	uint64_t t69 = 2598770151318633LLU;

	t69 = ((x3829<<x3830)+(x3831<=x3832));

	if (t69 != 11490977650880465049LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3917 = INT8_MAX;
	int16_t x3919 = -1;
	uint16_t x3920 = 7051U;
	volatile int32_t t70 = -485184;

	t70 = ((x3917<<x3918)+(x3919<=x3920));

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3925 = 173109503132569257LL;
	volatile uint8_t x3926 = 2U;
	int16_t x3927 = -1;
	uint64_t x3928 = 11LLU;
	int64_t t71 = 307014116591LL;

	t71 = ((x3925<<x3926)+(x3927<=x3928));

	if (t71 != 692438012530277028LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4121 = UINT16_MAX;
	uint8_t x4122 = 12U;
	int8_t x4124 = 0;
	volatile int32_t t72 = 23636;

	t72 = ((x4121<<x4122)+(x4123<=x4124));

	if (t72 != 268431361) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4173 = 409;
	static int8_t x4175 = INT8_MAX;
	int32_t x4176 = 334642635;
	int32_t t73 = -114204;

	t73 = ((x4173<<x4174)+(x4175<=x4176));

	if (t73 != 819) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4177 = 1;
	uint64_t x4178 = 7LLU;
	int8_t x4179 = INT8_MIN;

	t74 = ((x4177<<x4178)+(x4179<=x4180));

	if (t74 != 129) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4221 = 44200176823LLU;
	int8_t x4222 = 9;
	static int64_t x4223 = INT64_MIN;
	int16_t x4224 = -1;
	uint64_t t75 = 39370783120LLU;

	t75 = ((x4221<<x4222)+(x4223<=x4224));

	if (t75 != 22630490533377LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4305 = 7U;
	volatile uint64_t x4306 = 9LLU;
	int32_t x4307 = -1;
	int8_t x4308 = INT8_MIN;
	int32_t t76 = 29;

	t76 = ((x4305<<x4306)+(x4307<=x4308));

	if (t76 != 3584) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4453 = 6LLU;
	int32_t x4454 = 1;
	volatile uint8_t x4455 = UINT8_MAX;
	uint64_t t77 = 11470LLU;

	t77 = ((x4453<<x4454)+(x4455<=x4456));

	if (t77 != 12LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4481 = INT8_MAX;
	uint8_t x4482 = 19U;
	uint64_t x4483 = UINT64_MAX;
	uint8_t x4484 = 61U;

	t78 = ((x4481<<x4482)+(x4483<=x4484));

	if (t78 != 66584576) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x4569 = 2U;
	static uint8_t x4570 = 2U;
	uint16_t x4571 = 25U;
	int32_t x4572 = 9;
	volatile int32_t t79 = 39;

	t79 = ((x4569<<x4570)+(x4571<=x4572));

	if (t79 != 8) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4625 = UINT16_MAX;
	uint8_t x4626 = 1U;
	static int8_t x4627 = 45;
	uint32_t x4628 = UINT32_MAX;
	static int32_t t80 = -899889;

	t80 = ((x4625<<x4626)+(x4627<=x4628));

	if (t80 != 131071) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x4665 = INT8_MAX;
	uint64_t x4666 = 2LLU;
	static int16_t x4667 = -1;
	int32_t t81 = -28388;

	t81 = ((x4665<<x4666)+(x4667<=x4668));

	if (t81 != 508) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4673 = INT32_MAX;
	uint16_t x4674 = 0U;
	int16_t x4675 = -6;
	int32_t t82 = INT32_MAX;

	t82 = ((x4673<<x4674)+(x4675<=x4676));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x4697 = 93141903U;
	volatile int32_t x4698 = 1;
	uint8_t x4699 = 1U;
	volatile uint32_t t83 = 649U;

	t83 = ((x4697<<x4698)+(x4699<=x4700));

	if (t83 != 186283807U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4869 = 91819U;
	uint32_t x4870 = 15U;
	int64_t x4871 = -3628693727040455LL;
	uint32_t x4872 = 1260032516U;
	volatile uint32_t t84 = 3830416U;

	t84 = ((x4869<<x4870)+(x4871<=x4872));

	if (t84 != 3008724993U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4934 = 0U;
	uint32_t x4935 = 9643015U;
	int8_t x4936 = 61;

	t85 = ((x4933<<x4934)+(x4935<=x4936));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5057 = INT16_MAX;
	int8_t x5058 = 0;
	int8_t x5059 = -1;
	int8_t x5060 = 1;
	volatile int32_t t86 = -1;

	t86 = ((x5057<<x5058)+(x5059<=x5060));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5170 = 42;
	static volatile int8_t x5171 = INT8_MIN;
	uint32_t x5172 = 9U;
	static uint64_t t87 = 1796874654944001LLU;

	t87 = ((x5169<<x5170)+(x5171<=x5172));

	if (t87 != 9392239430695124992LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5189 = INT16_MAX;
	volatile int64_t x5191 = -30288739732780066LL;
	volatile int32_t t88 = -39658;

	t88 = ((x5189<<x5190)+(x5191<=x5192));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5241 = UINT8_MAX;
	volatile int64_t x5243 = -1LL;
	int16_t x5244 = -1296;
	static volatile int32_t t89 = 104;

	t89 = ((x5241<<x5242)+(x5243<=x5244));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5253 = INT16_MAX;
	int16_t x5254 = 1;
	uint16_t x5255 = UINT16_MAX;
	int8_t x5256 = 2;
	volatile int32_t t90 = 8979995;

	t90 = ((x5253<<x5254)+(x5255<=x5256));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5265 = 6U;
	static int8_t x5267 = 12;
	uint64_t x5268 = 1938219948997788602LLU;
	static int32_t t91 = -6;

	t91 = ((x5265<<x5266)+(x5267<=x5268));

	if (t91 != 25) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5309 = INT16_MAX;
	uint16_t x5312 = UINT16_MAX;
	volatile int32_t t92 = -29;

	t92 = ((x5309<<x5310)+(x5311<=x5312));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5359 = INT16_MIN;
	volatile int64_t x5360 = -1LL;

	t93 = ((x5357<<x5358)+(x5359<=x5360));

	if (t93 != 131) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5390 = 10;
	int8_t x5391 = -13;
	volatile uint32_t x5392 = 2010947U;
	volatile int32_t t94 = 382;

	t94 = ((x5389<<x5390)+(x5391<=x5392));

	if (t94 != 130048) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5422 = 7U;
	static volatile int32_t t95 = -3;

	t95 = ((x5421<<x5422)+(x5423<=x5424));

	if (t95 != 16256) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5477 = 10025579;
	volatile int8_t x5478 = 0;
	int8_t x5479 = -1;
	int64_t x5480 = 127316604911144474LL;
	int32_t t96 = 435780369;

	t96 = ((x5477<<x5478)+(x5479<=x5480));

	if (t96 != 10025580) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x5537 = 51U;
	volatile int16_t x5539 = 6842;
	int16_t x5540 = INT16_MIN;
	volatile int32_t t97 = 441434;

	t97 = ((x5537<<x5538)+(x5539<=x5540));

	if (t97 != 102) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x5545 = 3U;
	volatile uint16_t x5546 = 1U;
	int32_t x5547 = 8;
	int32_t x5548 = INT32_MIN;
	volatile int32_t t98 = 9;

	t98 = ((x5545<<x5546)+(x5547<=x5548));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x5577 = INT8_MAX;
	int16_t x5578 = 7;
	int8_t x5580 = INT8_MIN;

	t99 = ((x5577<<x5578)+(x5579<=x5580));

	if (t99 != 16256) { NG(); } else { ; }
	
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

