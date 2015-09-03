#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = -604466;
volatile int64_t t4 = 262771930969956935LL;
int32_t x517 = INT32_MIN;
static volatile uint64_t x518 = 129583355682485026LLU;
int32_t x608 = INT32_MIN;
uint64_t x713 = 990261064066638LLU;
uint32_t x714 = 80851U;
int16_t x753 = INT16_MIN;
volatile int32_t x754 = 7289701;
uint64_t x780 = 0LLU;
int32_t x909 = -1;
volatile uint32_t x941 = UINT32_MAX;
uint32_t x1100 = UINT32_MAX;
static int16_t x1107 = -3;
static volatile int64_t t17 = -39243016674688LL;
int8_t x1180 = INT8_MAX;
int32_t x1254 = INT32_MAX;
volatile uint64_t t22 = 2LLU;
int32_t x1503 = 1;
int16_t x1751 = 3;
static uint32_t x1789 = 799467U;
int64_t x1974 = 1LL;
static uint32_t x1987 = UINT32_MAX;
volatile int32_t t30 = 891656;
uint32_t x2017 = 56909935U;
static int32_t x2018 = INT32_MIN;
uint32_t t31 = 100692U;
volatile uint32_t t32 = 3U;
uint64_t x2301 = UINT64_MAX;
static int8_t x2303 = -1;
int32_t x2304 = -1;
int64_t t34 = 508LL;
int64_t x2400 = INT64_MIN;
static int8_t x2417 = -1;
uint64_t x2420 = 2LLU;
volatile int16_t x2461 = -6;
int32_t x2462 = INT32_MAX;
volatile int8_t x2464 = 3;
static uint32_t x2628 = UINT32_MAX;
uint64_t x2672 = UINT64_MAX;
uint32_t t41 = 323263U;
static int32_t x2754 = INT32_MIN;
int8_t x2892 = 4;
int64_t x3088 = -1LL;
int32_t x3180 = -1;
volatile int64_t x3477 = -514931197556905439LL;
volatile int64_t t54 = 18LL;
static int16_t x3748 = -3;
int64_t t59 = -280756755191204LL;
int32_t x4340 = INT32_MAX;
static volatile uint8_t x4410 = 0U;
volatile int32_t x4623 = INT32_MIN;
volatile int64_t t70 = -3648254LL;
int16_t x4630 = -1773;
int32_t x4631 = INT32_MIN;
static int32_t t71 = 25867;
int32_t t73 = -12765752;
static int32_t x4704 = -1;
static int16_t x4719 = -1;
static volatile uint64_t t77 = 716LLU;
volatile uint64_t x5030 = UINT64_MAX;
uint64_t t78 = 13776LLU;
static int64_t x5193 = INT64_MAX;
int8_t x5195 = 1;
volatile int64_t t80 = 1LL;
int64_t t82 = -204382050110236531LL;
volatile int32_t t84 = -1;
static uint8_t x5433 = 0U;
uint64_t x5526 = UINT64_MAX;
int8_t x5549 = -9;
int32_t t89 = 1020322330;
uint64_t x5604 = UINT64_MAX;
static uint32_t x5713 = 184299156U;
int16_t x5726 = INT16_MIN;
int32_t t92 = -1542562;
int16_t x5806 = 1504;
int16_t x5858 = 1302;
volatile uint64_t t94 = 2111463736876071792LLU;
volatile int8_t x5899 = INT8_MAX;
uint16_t x5946 = 86U;
volatile uint64_t t97 = 2017965940483718LLU;
volatile uint32_t t98 = 1719516U;
volatile int64_t x6142 = -26780LL;
volatile int64_t t99 = -12778629751018485LL;


void f0(void) {
	static uint16_t x117 = UINT16_MAX;
	uint32_t x118 = UINT32_MAX;
	uint8_t x119 = 18U;
	uint16_t x120 = 4U;
	volatile uint32_t t0 = 449351016U;

	t0 = ((x117&x118)>>(x119^x120));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x241 = 10U;
	uint16_t x242 = 109U;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t1 = -32948101;

	t1 = ((x241&x242)>>(x243^x244));

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x265 = -1;
	static int8_t x266 = INT8_MAX;
	static int16_t x267 = INT16_MAX;
	int16_t x268 = INT16_MAX;

	t2 = ((x265&x266)>>(x267^x268));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x393 = 2101U;
	static uint16_t x394 = 32719U;
	int64_t x395 = INT64_MIN;
	volatile int64_t x396 = INT64_MIN;
	uint32_t t3 = 6334713U;

	t3 = ((x393&x394)>>(x395^x396));

	if (t3 != 2053U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x461 = 11;
	int64_t x462 = INT64_MAX;
	volatile uint32_t x463 = 0U;
	uint8_t x464 = 1U;

	t4 = ((x461&x462)>>(x463^x464));

	if (t4 != 5LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x519 = -1;
	int64_t x520 = -1LL;
	volatile uint64_t t5 = 51093582559879523LLU;

	t5 = ((x517&x518)>>(x519^x520));

	if (t5 != 129583355208400896LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x605 = INT16_MIN;
	int32_t x606 = 3624314;
	volatile int32_t x607 = INT32_MIN;
	int32_t t6 = 5;

	t6 = ((x605&x606)>>(x607^x608));

	if (t6 != 3604480) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x641 = UINT8_MAX;
	static volatile int16_t x642 = 1;
	int64_t x643 = INT64_MIN;
	int64_t x644 = INT64_MIN;
	int32_t t7 = -15319;

	t7 = ((x641&x642)>>(x643^x644));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x673 = 0;
	volatile int8_t x674 = 3;
	volatile int8_t x675 = -1;
	uint64_t x676 = UINT64_MAX;
	volatile int32_t t8 = -2521;

	t8 = ((x673&x674)>>(x675^x676));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x715 = 0LL;
	uint8_t x716 = 5U;
	volatile uint64_t t9 = 1805047473476829893LLU;

	t9 = ((x713&x714)>>(x715^x716));

	if (t9 != 2322LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x755 = UINT8_MAX;
	static volatile uint8_t x756 = UINT8_MAX;
	static volatile int32_t t10 = -121432;

	t10 = ((x753&x754)>>(x755^x756));

	if (t10 != 7274496) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x777 = INT32_MIN;
	uint8_t x778 = UINT8_MAX;
	int64_t x779 = 3LL;
	volatile int32_t t11 = -572680976;

	t11 = ((x777&x778)>>(x779^x780));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x865 = 7U;
	static int64_t x866 = INT64_MAX;
	static int64_t x867 = -1LL;
	int16_t x868 = -4;
	int64_t t12 = -4943946830956LL;

	t12 = ((x865&x866)>>(x867^x868));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x910 = 218243036333780LLU;
	int16_t x911 = -1;
	int8_t x912 = -1;
	static volatile uint64_t t13 = 1864614952570LLU;

	t13 = ((x909&x910)>>(x911^x912));

	if (t13 != 218243036333780LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x942 = 0;
	int32_t x943 = INT32_MIN;
	volatile int32_t x944 = INT32_MIN;
	uint32_t t14 = 53646U;

	t14 = ((x941&x942)>>(x943^x944));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1029 = INT32_MIN;
	uint64_t x1030 = 940088698969LLU;
	int64_t x1031 = -37LL;
	int8_t x1032 = -1;
	volatile uint64_t t15 = 407233LLU;

	t15 = ((x1029&x1030)>>(x1031^x1032));

	if (t15 != 13LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1097 = INT16_MAX;
	static uint64_t x1098 = 59979288LLU;
	int16_t x1099 = -1;
	volatile uint64_t t16 = 6422258LLU;

	t16 = ((x1097&x1098)>>(x1099^x1100));

	if (t16 != 13848LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1105 = INT64_MAX;
	int64_t x1106 = 2098LL;
	int16_t x1108 = -1;

	t17 = ((x1105&x1106)>>(x1107^x1108));

	if (t17 != 524LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1177 = -14812;
	int32_t x1178 = 133;
	int8_t x1179 = INT8_MAX;
	volatile int32_t t18 = 10400013;

	t18 = ((x1177&x1178)>>(x1179^x1180));

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1245 = INT16_MAX;
	uint64_t x1246 = 11308330533LLU;
	int32_t x1247 = -2;
	static int16_t x1248 = -1;
	uint64_t t19 = 63412LLU;

	t19 = ((x1245&x1246)>>(x1247^x1248));

	if (t19 != 14098LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1253 = INT32_MIN;
	int8_t x1255 = INT8_MAX;
	int8_t x1256 = INT8_MAX;
	volatile int32_t t20 = -59;

	t20 = ((x1253&x1254)>>(x1255^x1256));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1425 = INT16_MIN;
	uint32_t x1426 = 27260U;
	int16_t x1427 = -1;
	int64_t x1428 = -1LL;
	volatile uint32_t t21 = 1839U;

	t21 = ((x1425&x1426)>>(x1427^x1428));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1445 = INT32_MAX;
	volatile uint64_t x1446 = 4462637432171786LLU;
	int8_t x1447 = -1;
	uint32_t x1448 = UINT32_MAX;

	t22 = ((x1445&x1446)>>(x1447^x1448));

	if (t22 != 1055386890LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1501 = INT32_MIN;
	uint64_t x1502 = 60LLU;
	volatile uint8_t x1504 = 1U;
	uint64_t t23 = 593911955644LLU;

	t23 = ((x1501&x1502)>>(x1503^x1504));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x1581 = 977U;
	volatile int8_t x1582 = INT8_MAX;
	static uint16_t x1583 = 2U;
	uint8_t x1584 = 20U;
	int32_t t24 = 122299;

	t24 = ((x1581&x1582)>>(x1583^x1584));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1641 = -1;
	int64_t x1642 = INT64_MAX;
	uint32_t x1643 = UINT32_MAX;
	static int8_t x1644 = -55;
	int64_t t25 = -1537287193932445718LL;

	t25 = ((x1641&x1642)>>(x1643^x1644));

	if (t25 != 511LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x1749 = INT8_MIN;
	uint64_t x1750 = 36429625074LLU;
	int16_t x1752 = 49;
	volatile uint64_t t26 = 1LLU;

	t26 = ((x1749&x1750)>>(x1751^x1752));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1790 = 101U;
	volatile int64_t x1791 = INT64_MIN;
	static int64_t x1792 = INT64_MIN;
	static uint32_t t27 = 23988325U;

	t27 = ((x1789&x1790)>>(x1791^x1792));

	if (t27 != 97U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1893 = 3U;
	static int16_t x1894 = -1;
	uint8_t x1895 = 0U;
	uint16_t x1896 = 6U;
	int32_t t28 = 2129790;

	t28 = ((x1893&x1894)>>(x1895^x1896));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1973 = UINT8_MAX;
	int64_t x1975 = -1LL;
	volatile int64_t x1976 = -1LL;
	int64_t t29 = 19270494869467LL;

	t29 = ((x1973&x1974)>>(x1975^x1976));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1985 = 1;
	int16_t x1986 = 36;
	static int8_t x1988 = -1;

	t30 = ((x1985&x1986)>>(x1987^x1988));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2019 = UINT64_MAX;
	uint64_t x2020 = UINT64_MAX;

	t31 = ((x2017&x2018)>>(x2019^x2020));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x2125 = UINT32_MAX;
	int8_t x2126 = -1;
	uint64_t x2127 = 2LLU;
	uint32_t x2128 = 0U;

	t32 = ((x2125&x2126)>>(x2127^x2128));

	if (t32 != 1073741823U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2302 = 1LLU;
	uint64_t t33 = 168634LLU;

	t33 = ((x2301&x2302)>>(x2303^x2304));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2317 = 26U;
	int64_t x2318 = INT64_MIN;
	static int16_t x2319 = INT16_MAX;
	int16_t x2320 = INT16_MAX;

	t34 = ((x2317&x2318)>>(x2319^x2320));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2397 = 23705U;
	volatile int32_t x2398 = -939887065;
	int64_t x2399 = INT64_MIN;
	int32_t t35 = -10378182;

	t35 = ((x2397&x2398)>>(x2399^x2400));

	if (t35 != 21505) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2418 = 4704603U;
	volatile int16_t x2419 = 1;
	volatile uint32_t t36 = 2987443U;

	t36 = ((x2417&x2418)>>(x2419^x2420));

	if (t36 != 588075U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2463 = 20U;
	volatile int32_t t37 = -450863;

	t37 = ((x2461&x2462)>>(x2463^x2464));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2529 = UINT16_MAX;
	int16_t x2530 = INT16_MAX;
	uint64_t x2531 = UINT64_MAX;
	static uint64_t x2532 = UINT64_MAX;
	int32_t t38 = -7002664;

	t38 = ((x2529&x2530)>>(x2531^x2532));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2557 = -1LL;
	static uint32_t x2558 = 25380U;
	int8_t x2559 = INT8_MIN;
	volatile int8_t x2560 = INT8_MIN;
	volatile int64_t t39 = -7599123363LL;

	t39 = ((x2557&x2558)>>(x2559^x2560));

	if (t39 != 25380LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2625 = 28083578;
	volatile int8_t x2626 = INT8_MAX;
	int8_t x2627 = -1;
	int32_t t40 = -1;

	t40 = ((x2625&x2626)>>(x2627^x2628));

	if (t40 != 122) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2669 = INT8_MIN;
	uint32_t x2670 = 1202426756U;
	uint64_t x2671 = UINT64_MAX;

	t41 = ((x2669&x2670)>>(x2671^x2672));

	if (t41 != 1202426752U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2753 = INT8_MAX;
	uint64_t x2755 = UINT64_MAX;
	volatile int16_t x2756 = -1;
	static int32_t t42 = 3073588;

	t42 = ((x2753&x2754)>>(x2755^x2756));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2889 = INT16_MIN;
	static uint16_t x2890 = UINT16_MAX;
	int8_t x2891 = 1;
	static volatile int32_t t43 = -465715121;

	t43 = ((x2889&x2890)>>(x2891^x2892));

	if (t43 != 1024) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2977 = -1LL;
	int16_t x2978 = 1579;
	int16_t x2979 = INT16_MIN;
	volatile int16_t x2980 = INT16_MIN;
	int64_t t44 = -1LL;

	t44 = ((x2977&x2978)>>(x2979^x2980));

	if (t44 != 1579LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x3057 = 14011U;
	static int32_t x3058 = INT32_MAX;
	int8_t x3059 = 6;
	uint16_t x3060 = 13U;
	int32_t t45 = 254013;

	t45 = ((x3057&x3058)>>(x3059^x3060));

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3081 = INT8_MAX;
	uint16_t x3082 = 9842U;
	uint8_t x3083 = 17U;
	uint8_t x3084 = 9U;
	int32_t t46 = -5921596;

	t46 = ((x3081&x3082)>>(x3083^x3084));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3085 = 149U;
	int64_t x3086 = INT64_MIN;
	static volatile int32_t x3087 = -1;
	volatile int64_t t47 = -41516604172LL;

	t47 = ((x3085&x3086)>>(x3087^x3088));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3177 = INT64_MIN;
	uint32_t x3178 = 57497U;
	static volatile int32_t x3179 = -1;
	volatile int64_t t48 = 3950053LL;

	t48 = ((x3177&x3178)>>(x3179^x3180));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3209 = INT32_MAX;
	int32_t x3210 = 176;
	int64_t x3211 = INT64_MIN;
	int64_t x3212 = INT64_MIN;
	volatile int32_t t49 = 168245687;

	t49 = ((x3209&x3210)>>(x3211^x3212));

	if (t49 != 176) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x3213 = 13120U;
	int16_t x3214 = INT16_MAX;
	volatile int16_t x3215 = -1;
	int64_t x3216 = -1LL;
	volatile int32_t t50 = -3570;

	t50 = ((x3213&x3214)>>(x3215^x3216));

	if (t50 != 13120) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3317 = 307;
	static uint64_t x3318 = UINT64_MAX;
	int8_t x3319 = -7;
	uint64_t x3320 = UINT64_MAX;
	volatile uint64_t t51 = 97566011237501LLU;

	t51 = ((x3317&x3318)>>(x3319^x3320));

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x3397 = INT16_MIN;
	static int16_t x3398 = INT16_MAX;
	uint8_t x3399 = 1U;
	int16_t x3400 = 2;
	volatile int32_t t52 = -9;

	t52 = ((x3397&x3398)>>(x3399^x3400));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3409 = INT8_MAX;
	uint16_t x3410 = UINT16_MAX;
	int16_t x3411 = -1;
	int32_t x3412 = -7;
	volatile int32_t t53 = -6156;

	t53 = ((x3409&x3410)>>(x3411^x3412));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3478 = UINT16_MAX;
	int64_t x3479 = -1LL;
	static volatile int16_t x3480 = -1;

	t54 = ((x3477&x3478)>>(x3479^x3480));

	if (t54 != 43553LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3493 = -1;
	int16_t x3494 = INT16_MAX;
	uint64_t x3495 = 10LLU;
	uint16_t x3496 = 2U;
	static volatile int32_t t55 = 353;

	t55 = ((x3493&x3494)>>(x3495^x3496));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3641 = -1;
	uint16_t x3642 = 31U;
	int32_t x3643 = -1;
	int64_t x3644 = -1LL;
	volatile int32_t t56 = 12044692;

	t56 = ((x3641&x3642)>>(x3643^x3644));

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3705 = UINT64_MAX;
	volatile int8_t x3706 = -1;
	static int8_t x3707 = -6;
	int64_t x3708 = -1LL;
	volatile uint64_t t57 = 7490102LLU;

	t57 = ((x3705&x3706)>>(x3707^x3708));

	if (t57 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3745 = INT8_MAX;
	volatile int64_t x3746 = 2106931314621LL;
	static int16_t x3747 = -1;
	int64_t t58 = 1615688835026988LL;

	t58 = ((x3745&x3746)>>(x3747^x3748));

	if (t58 != 15LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3841 = INT64_MIN;
	int64_t x3842 = 182937992LL;
	volatile uint8_t x3843 = 24U;
	static uint64_t x3844 = 46LLU;

	t59 = ((x3841&x3842)>>(x3843^x3844));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3957 = 865912920544117LLU;
	int64_t x3958 = -1LL;
	uint32_t x3959 = UINT32_MAX;
	int32_t x3960 = -1;
	volatile uint64_t t60 = 73LLU;

	t60 = ((x3957&x3958)>>(x3959^x3960));

	if (t60 != 865912920544117LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4041 = 1;
	int32_t x4042 = INT32_MIN;
	int8_t x4043 = 24;
	uint32_t x4044 = 5U;
	int32_t t61 = -13003;

	t61 = ((x4041&x4042)>>(x4043^x4044));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4089 = 15808790779LL;
	int16_t x4090 = -100;
	static int16_t x4091 = -1;
	int16_t x4092 = -1;
	int64_t t62 = 424341LL;

	t62 = ((x4089&x4090)>>(x4091^x4092));

	if (t62 != 15808790680LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4169 = INT64_MAX;
	static volatile int32_t x4170 = INT32_MAX;
	volatile int32_t x4171 = -1;
	static volatile int32_t x4172 = -1;
	volatile int64_t t63 = -71216096LL;

	t63 = ((x4169&x4170)>>(x4171^x4172));

	if (t63 != 2147483647LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4301 = 17U;
	uint8_t x4302 = 21U;
	int8_t x4303 = INT8_MAX;
	int8_t x4304 = INT8_MAX;
	volatile int32_t t64 = 336706;

	t64 = ((x4301&x4302)>>(x4303^x4304));

	if (t64 != 17) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4337 = 365897499U;
	uint64_t x4338 = 64045206576376006LLU;
	int32_t x4339 = INT32_MAX;
	static uint64_t t65 = 47880656LLU;

	t65 = ((x4337&x4338)>>(x4339^x4340));

	if (t65 != 26025986LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x4341 = 7034802030745LLU;
	static int8_t x4342 = 18;
	int16_t x4343 = 0;
	volatile int8_t x4344 = 3;
	static volatile uint64_t t66 = 54951796LLU;

	t66 = ((x4341&x4342)>>(x4343^x4344));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4409 = -120013LL;
	int32_t x4411 = INT32_MIN;
	static int32_t x4412 = INT32_MIN;
	int64_t t67 = 61257401LL;

	t67 = ((x4409&x4410)>>(x4411^x4412));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4521 = INT32_MAX;
	int64_t x4522 = INT64_MIN;
	int16_t x4523 = -1;
	volatile int64_t x4524 = -1LL;
	static volatile int64_t t68 = 24243196LL;

	t68 = ((x4521&x4522)>>(x4523^x4524));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4569 = -1LL;
	int8_t x4570 = 3;
	int8_t x4571 = INT8_MIN;
	volatile int8_t x4572 = INT8_MIN;
	volatile int64_t t69 = -10657604001LL;

	t69 = ((x4569&x4570)>>(x4571^x4572));

	if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x4621 = -1;
	static int64_t x4622 = 27164577917LL;
	static int32_t x4624 = INT32_MIN;

	t70 = ((x4621&x4622)>>(x4623^x4624));

	if (t70 != 27164577917LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4629 = UINT16_MAX;
	int32_t x4632 = INT32_MIN;

	t71 = ((x4629&x4630)>>(x4631^x4632));

	if (t71 != 63763) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4665 = 13021559U;
	int32_t x4666 = INT32_MIN;
	int16_t x4667 = -1;
	int64_t x4668 = -1LL;
	static volatile uint32_t t72 = 504169U;

	t72 = ((x4665&x4666)>>(x4667^x4668));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4677 = -1;
	int16_t x4678 = INT16_MAX;
	static int16_t x4679 = 230;
	uint8_t x4680 = UINT8_MAX;

	t73 = ((x4677&x4678)>>(x4679^x4680));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4701 = -1LL;
	volatile int16_t x4702 = INT16_MAX;
	int8_t x4703 = -1;
	int64_t t74 = 812LL;

	t74 = ((x4701&x4702)>>(x4703^x4704));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4717 = 62933876295197106LLU;
	volatile uint8_t x4718 = 1U;
	int32_t x4720 = -1;
	uint64_t t75 = 9750249788152389LLU;

	t75 = ((x4717&x4718)>>(x4719^x4720));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4893 = INT32_MIN;
	static uint8_t x4894 = 8U;
	int32_t x4895 = -1;
	int8_t x4896 = -1;
	volatile int32_t t76 = -2416;

	t76 = ((x4893&x4894)>>(x4895^x4896));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4945 = UINT64_MAX;
	int8_t x4946 = 0;
	volatile int64_t x4947 = 0LL;
	uint32_t x4948 = 14U;

	t77 = ((x4945&x4946)>>(x4947^x4948));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x5029 = -691620250848722022LL;
	int8_t x5031 = 2;
	volatile int32_t x5032 = 0;

	t78 = ((x5029&x5030)>>(x5031^x5032));

	if (t78 != 4438780955715207398LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5165 = INT16_MAX;
	int64_t x5166 = INT64_MAX;
	int8_t x5167 = -1;
	int32_t x5168 = -1;
	int64_t t79 = -24087345LL;

	t79 = ((x5165&x5166)>>(x5167^x5168));

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5194 = -1;
	uint8_t x5196 = 2U;

	t80 = ((x5193&x5194)>>(x5195^x5196));

	if (t80 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5217 = INT8_MAX;
	volatile int16_t x5218 = -2424;
	int16_t x5219 = -1;
	int8_t x5220 = -1;
	int32_t t81 = 231072;

	t81 = ((x5217&x5218)>>(x5219^x5220));

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5273 = 7073461U;
	int64_t x5274 = -19997LL;
	int16_t x5275 = -1;
	int16_t x5276 = -1;

	t82 = ((x5273&x5274)>>(x5275^x5276));

	if (t82 != 7053473LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5345 = 2052LLU;
	uint8_t x5346 = 5U;
	int64_t x5347 = INT64_MIN;
	volatile int64_t x5348 = INT64_MIN;
	uint64_t t83 = 4642834754LLU;

	t83 = ((x5345&x5346)>>(x5347^x5348));

	if (t83 != 4LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5353 = 41U;
	int16_t x5354 = -4;
	uint32_t x5355 = UINT32_MAX;
	int16_t x5356 = -3;

	t84 = ((x5353&x5354)>>(x5355^x5356));

	if (t84 != 10) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5417 = 10547U;
	int16_t x5418 = 0;
	int64_t x5419 = INT64_MIN;
	int64_t x5420 = INT64_MIN;
	static int32_t t85 = -25468221;

	t85 = ((x5417&x5418)>>(x5419^x5420));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x5434 = -177499365973653LL;
	uint64_t x5435 = 6LLU;
	int16_t x5436 = 3;
	volatile int64_t t86 = 5277923LL;

	t86 = ((x5433&x5434)>>(x5435^x5436));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5469 = 1467;
	static int8_t x5470 = INT8_MIN;
	uint32_t x5471 = UINT32_MAX;
	static volatile uint32_t x5472 = UINT32_MAX;
	volatile int32_t t87 = -330;

	t87 = ((x5469&x5470)>>(x5471^x5472));

	if (t87 != 1408) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5525 = UINT8_MAX;
	static int8_t x5527 = -1;
	volatile int16_t x5528 = -1;
	static volatile uint64_t t88 = 4124328363688240LLU;

	t88 = ((x5525&x5526)>>(x5527^x5528));

	if (t88 != 255LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x5550 = 27U;
	volatile int16_t x5551 = -1;
	volatile int16_t x5552 = -1;

	t89 = ((x5549&x5550)>>(x5551^x5552));

	if (t89 != 19) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5601 = INT32_MAX;
	int8_t x5602 = -1;
	int8_t x5603 = -1;
	int32_t t90 = INT32_MAX;

	t90 = ((x5601&x5602)>>(x5603^x5604));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5714 = INT32_MIN;
	int16_t x5715 = -1;
	uint32_t x5716 = UINT32_MAX;
	uint32_t t91 = 9300U;

	t91 = ((x5713&x5714)>>(x5715^x5716));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x5725 = 20;
	volatile int16_t x5727 = INT16_MIN;
	int16_t x5728 = INT16_MIN;

	t92 = ((x5725&x5726)>>(x5727^x5728));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5805 = INT64_MIN;
	uint16_t x5807 = 36U;
	static uint8_t x5808 = 6U;
	int64_t t93 = -3030LL;

	t93 = ((x5805&x5806)>>(x5807^x5808));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5857 = 117396177162LLU;
	volatile uint64_t x5859 = 1LLU;
	static int8_t x5860 = 1;

	t94 = ((x5857&x5858)>>(x5859^x5860));

	if (t94 != 258LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5897 = 12U;
	uint8_t x5898 = 49U;
	volatile int8_t x5900 = INT8_MAX;
	uint32_t t95 = 30U;

	t95 = ((x5897&x5898)>>(x5899^x5900));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5909 = INT16_MAX;
	uint8_t x5910 = 27U;
	int32_t x5911 = INT32_MIN;
	int32_t x5912 = INT32_MIN;
	int32_t t96 = 133075;

	t96 = ((x5909&x5910)>>(x5911^x5912));

	if (t96 != 27) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5945 = 165716710261983LLU;
	uint64_t x5947 = UINT64_MAX;
	int16_t x5948 = -15;

	t97 = ((x5945&x5946)>>(x5947^x5948));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x6017 = 0U;
	static int16_t x6018 = INT16_MIN;
	int16_t x6019 = -22;
	static volatile int8_t x6020 = -1;

	t98 = ((x6017&x6018)>>(x6019^x6020));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6141 = UINT32_MAX;
	int32_t x6143 = -2;
	static int8_t x6144 = -1;

	t99 = ((x6141&x6142)>>(x6143^x6144));

	if (t99 != 2147470258LL) { NG(); } else { ; }
	
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

