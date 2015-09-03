#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x117 = UINT16_MAX;
uint8_t x120 = 0U;
int8_t x187 = -1;
static int32_t x207 = INT32_MIN;
uint64_t t3 = 40341LLU;
uint32_t x269 = 0U;
volatile int16_t x271 = -1;
volatile uint64_t x273 = UINT64_MAX;
int8_t x481 = 6;
volatile int32_t t10 = 116264772;
volatile int64_t x884 = 0LL;
uint32_t x1039 = UINT32_MAX;
int8_t x1069 = INT8_MAX;
volatile int32_t t14 = 1235836;
int8_t x1155 = INT8_MIN;
volatile int8_t x1196 = 1;
int32_t t20 = 1738;
uint8_t x1307 = 12U;
uint32_t t22 = 4654U;
uint64_t x1349 = 971011912LLU;
uint16_t x1580 = 1U;
uint8_t x1712 = 8U;
volatile int32_t t27 = -22512;
uint8_t x1849 = UINT8_MAX;
static uint8_t x1874 = 6U;
int32_t x1875 = INT32_MAX;
static uint64_t x2217 = 2656510874002LLU;
int8_t x2296 = 3;
int8_t x2456 = 0;
uint64_t x2503 = 12431LLU;
uint32_t x2609 = UINT32_MAX;
int64_t x2610 = INT64_MAX;
int64_t x2617 = 64309063213959LL;
int8_t x2620 = 1;
uint16_t x2748 = 3U;
int16_t x3113 = INT16_MAX;
int16_t x3116 = 3;
int8_t x3556 = 1;
uint32_t t50 = 1044561466U;
static int32_t x4046 = -1;
uint32_t x4258 = 4980U;
volatile int64_t x4366 = -5436706314LL;
static volatile int32_t t55 = 3;
uint32_t x4396 = 0U;
int64_t x4550 = INT64_MIN;
uint8_t x4629 = UINT8_MAX;
int32_t t59 = 227157;
uint16_t x4676 = 0U;
uint8_t x4940 = 19U;
volatile int32_t t66 = -41;
volatile uint32_t x4949 = 6U;
static volatile uint32_t t67 = 2U;
uint64_t x5270 = UINT64_MAX;
int64_t x5271 = -1LL;
volatile int16_t x5272 = 0;
uint32_t x5405 = 0U;
volatile int8_t x5408 = 0;
uint32_t t73 = 14U;
uint16_t x5427 = 7U;
volatile uint32_t x5506 = UINT32_MAX;
int8_t x5507 = INT8_MIN;
volatile uint32_t x5806 = UINT32_MAX;
static uint16_t x5994 = 42U;
int32_t t79 = -5;
static int32_t t80 = 3973585;
int16_t x6314 = INT16_MIN;
int16_t x6416 = 12;
static volatile uint64_t x6433 = 12708299337252145LLU;
int64_t x6518 = -1LL;
volatile uint32_t x6523 = UINT32_MAX;
uint16_t x6541 = UINT16_MAX;
uint16_t x6575 = UINT16_MAX;
volatile uint64_t t91 = 36613465490LLU;
static int64_t x6737 = 1378446LL;
uint32_t x6741 = 1435162998U;
uint32_t t93 = 16888631U;
static uint16_t x6780 = 3U;
uint64_t x6846 = 636LLU;
int32_t x6853 = 55005;
int8_t x6935 = -1;
int32_t t99 = -1;


void f0(void) {
	int64_t x118 = INT64_MAX;
	int64_t x119 = INT64_MAX;
	volatile int32_t t0 = -4177546;

	t0 = (x117<<((x118<x119)^x120));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x137 = 102;
	static int8_t x138 = -1;
	int8_t x139 = -13;
	uint32_t x140 = 4U;
	static int32_t t1 = -2727363;

	t1 = (x137<<((x138<x139)^x140));

	if (t1 != 1632) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x185 = 88U;
	uint64_t x186 = 2LLU;
	uint8_t x188 = 1U;
	int32_t t2 = -3;

	t2 = (x185<<((x186<x187)^x188));

	if (t2 != 88) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MIN;
	uint8_t x208 = 2U;

	t3 = (x205<<((x206<x207)^x208));

	if (t3 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x229 = INT16_MAX;
	static int16_t x230 = INT16_MIN;
	uint32_t x231 = 70683119U;
	static uint8_t x232 = 1U;
	int32_t t4 = 918830;

	t4 = (x229<<((x230<x231)^x232));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x270 = INT8_MIN;
	uint64_t x272 = 24LLU;
	static uint32_t t5 = 444U;

	t5 = (x269<<((x270<x271)^x272));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 48775216680LLU;
	uint16_t x276 = 13U;
	uint64_t t6 = 73LLU;

	t6 = (x273<<((x274<x275)^x276));

	if (t6 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x482 = 1U;
	uint8_t x483 = 4U;
	volatile uint8_t x484 = 5U;
	int32_t t7 = 1;

	t7 = (x481<<((x482<x483)^x484));

	if (t7 != 96) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x601 = 96U;
	uint32_t x602 = 693480102U;
	uint16_t x603 = 12U;
	static int8_t x604 = 1;
	int32_t t8 = 10951632;

	t8 = (x601<<((x602<x603)^x604));

	if (t8 != 192) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x681 = 36;
	uint64_t x682 = UINT64_MAX;
	int16_t x683 = 5509;
	volatile uint8_t x684 = 4U;
	int32_t t9 = -34847045;

	t9 = (x681<<((x682<x683)^x684));

	if (t9 != 576) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x789 = 3U;
	uint32_t x790 = UINT32_MAX;
	int8_t x791 = INT8_MAX;
	uint8_t x792 = 25U;

	t10 = (x789<<((x790<x791)^x792));

	if (t10 != 100663296) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x881 = 8831;
	volatile int64_t x882 = -1LL;
	volatile int8_t x883 = -1;
	int32_t t11 = -1625449;

	t11 = (x881<<((x882<x883)^x884));

	if (t11 != 8831) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x969 = INT8_MAX;
	uint64_t x970 = 36064690299533LLU;
	uint64_t x971 = UINT64_MAX;
	volatile uint8_t x972 = 0U;
	volatile int32_t t12 = -2112;

	t12 = (x969<<((x970<x971)^x972));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1037 = 368U;
	int16_t x1038 = INT16_MIN;
	int8_t x1040 = 14;
	static volatile int32_t t13 = 20;

	t13 = (x1037<<((x1038<x1039)^x1040));

	if (t13 != 12058624) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1070 = -1;
	volatile int32_t x1071 = -1;
	uint8_t x1072 = 16U;

	t14 = (x1069<<((x1070<x1071)^x1072));

	if (t14 != 8323072) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1073 = 25;
	static volatile uint8_t x1074 = UINT8_MAX;
	static int16_t x1075 = -6;
	volatile int32_t x1076 = 0;
	static volatile int32_t t15 = 6108619;

	t15 = (x1073<<((x1074<x1075)^x1076));

	if (t15 != 25) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1133 = 28U;
	uint64_t x1134 = 1733756969021980100LLU;
	int64_t x1135 = INT64_MIN;
	uint8_t x1136 = 14U;
	static volatile int32_t t16 = -3;

	t16 = (x1133<<((x1134<x1135)^x1136));

	if (t16 != 917504) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1153 = UINT64_MAX;
	volatile int32_t x1154 = 4;
	static int8_t x1156 = 0;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x1153<<((x1154<x1155)^x1156));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1181 = 229301542;
	static int64_t x1182 = INT64_MIN;
	int8_t x1183 = INT8_MIN;
	static uint16_t x1184 = 1U;
	volatile int32_t t18 = -110793;

	t18 = (x1181<<((x1182<x1183)^x1184));

	if (t18 != 229301542) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1193 = UINT64_MAX;
	volatile int8_t x1194 = INT8_MAX;
	volatile int32_t x1195 = INT32_MIN;
	uint64_t t19 = 54661381312LLU;

	t19 = (x1193<<((x1194<x1195)^x1196));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1229 = UINT8_MAX;
	uint64_t x1230 = 407550284086401121LLU;
	int16_t x1231 = -14;
	int8_t x1232 = 3;

	t20 = (x1229<<((x1230<x1231)^x1232));

	if (t20 != 1020) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1305 = 712990049144247645LL;
	int16_t x1306 = 51;
	uint64_t x1308 = 1LLU;
	volatile int64_t t21 = 130108270598920880LL;

	t21 = (x1305<<((x1306<x1307)^x1308));

	if (t21 != 1425980098288495290LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1325 = 16U;
	static volatile int64_t x1326 = INT64_MIN;
	int8_t x1327 = -1;
	uint8_t x1328 = 1U;

	t22 = (x1325<<((x1326<x1327)^x1328));

	if (t22 != 16U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1350 = INT64_MIN;
	volatile uint32_t x1351 = 360971707U;
	volatile uint64_t x1352 = 3LLU;
	uint64_t t23 = 2957926090LLU;

	t23 = (x1349<<((x1350<x1351)^x1352));

	if (t23 != 3884047648LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1417 = 397U;
	int16_t x1418 = 137;
	uint16_t x1419 = 98U;
	static uint8_t x1420 = 0U;
	int32_t t24 = 6;

	t24 = (x1417<<((x1418<x1419)^x1420));

	if (t24 != 397) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1577 = 90U;
	uint64_t x1578 = 58534881436188445LLU;
	uint64_t x1579 = UINT64_MAX;
	volatile int32_t t25 = -251;

	t25 = (x1577<<((x1578<x1579)^x1580));

	if (t25 != 90) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1697 = 140896255400LLU;
	uint8_t x1698 = 1U;
	static uint64_t x1699 = 0LLU;
	volatile uint32_t x1700 = 33U;
	uint64_t t26 = 32LLU;

	t26 = (x1697<<((x1698<x1699)^x1700));

	if (t26 != 11251253352605941760LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1709 = 60U;
	static int64_t x1710 = -741LL;
	uint64_t x1711 = 180906303LLU;

	t27 = (x1709<<((x1710<x1711)^x1712));

	if (t27 != 15360) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1850 = -15;
	int8_t x1851 = INT8_MIN;
	static uint16_t x1852 = 1U;
	static volatile int32_t t28 = 1529344;

	t28 = (x1849<<((x1850<x1851)^x1852));

	if (t28 != 510) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1873 = INT16_MAX;
	static uint8_t x1876 = 0U;
	int32_t t29 = -1296;

	t29 = (x1873<<((x1874<x1875)^x1876));

	if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x2153 = 4U;
	int8_t x2154 = 14;
	int64_t x2155 = INT64_MIN;
	uint8_t x2156 = 1U;
	volatile int32_t t30 = 6;

	t30 = (x2153<<((x2154<x2155)^x2156));

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2189 = UINT64_MAX;
	static uint64_t x2190 = UINT64_MAX;
	static uint8_t x2191 = 111U;
	int16_t x2192 = 1;
	static volatile uint64_t t31 = 238291LLU;

	t31 = (x2189<<((x2190<x2191)^x2192));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2218 = 378659562706111260LLU;
	int32_t x2219 = -5012;
	volatile uint8_t x2220 = 1U;
	uint64_t t32 = 2443553656039LLU;

	t32 = (x2217<<((x2218<x2219)^x2220));

	if (t32 != 2656510874002LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2273 = INT16_MAX;
	uint16_t x2274 = 1U;
	static int32_t x2275 = 882564828;
	volatile uint8_t x2276 = 6U;
	volatile int32_t t33 = 977861;

	t33 = (x2273<<((x2274<x2275)^x2276));

	if (t33 != 4194176) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2293 = UINT32_MAX;
	static int8_t x2294 = -1;
	uint64_t x2295 = 4578LLU;
	uint32_t t34 = 479948064U;

	t34 = (x2293<<((x2294<x2295)^x2296));

	if (t34 != 4294967288U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x2453 = 7U;
	static uint16_t x2454 = 21U;
	uint32_t x2455 = UINT32_MAX;
	int32_t t35 = 11643748;

	t35 = (x2453<<((x2454<x2455)^x2456));

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2501 = INT64_MAX;
	volatile uint32_t x2502 = 62U;
	static uint64_t x2504 = 1LLU;
	volatile int64_t t36 = INT64_MAX;

	t36 = (x2501<<((x2502<x2503)^x2504));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x2541 = 6LLU;
	volatile int32_t x2542 = 0;
	int64_t x2543 = -447342622LL;
	static int8_t x2544 = 11;
	volatile uint64_t t37 = 119LLU;

	t37 = (x2541<<((x2542<x2543)^x2544));

	if (t37 != 12288LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2611 = INT16_MIN;
	static uint16_t x2612 = 8U;
	volatile uint32_t t38 = 26284130U;

	t38 = (x2609<<((x2610<x2611)^x2612));

	if (t38 != 4294967040U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2618 = 3;
	int32_t x2619 = INT32_MIN;
	int64_t t39 = 468LL;

	t39 = (x2617<<((x2618<x2619)^x2620));

	if (t39 != 128618126427918LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2701 = 15U;
	uint64_t x2702 = 26713LLU;
	uint32_t x2703 = 239188044U;
	uint8_t x2704 = 25U;
	volatile int32_t t40 = 212267;

	t40 = (x2701<<((x2702<x2703)^x2704));

	if (t40 != 251658240) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2745 = INT8_MAX;
	int32_t x2746 = INT32_MIN;
	static uint64_t x2747 = 223818476LLU;
	int32_t t41 = 8612;

	t41 = (x2745<<((x2746<x2747)^x2748));

	if (t41 != 1016) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2757 = 138LLU;
	int32_t x2758 = INT32_MIN;
	volatile int32_t x2759 = -1;
	volatile int16_t x2760 = 6;
	uint64_t t42 = 434325854961710LLU;

	t42 = (x2757<<((x2758<x2759)^x2760));

	if (t42 != 17664LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x3114 = INT8_MIN;
	volatile int64_t x3115 = INT64_MIN;
	static volatile int32_t t43 = 16531191;

	t43 = (x3113<<((x3114<x3115)^x3116));

	if (t43 != 262136) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x3277 = UINT64_MAX;
	static int16_t x3278 = 218;
	int8_t x3279 = 2;
	uint16_t x3280 = 1U;
	volatile uint64_t t44 = 6644LLU;

	t44 = (x3277<<((x3278<x3279)^x3280));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x3317 = 3050U;
	int8_t x3318 = -9;
	int32_t x3319 = -3939190;
	int32_t x3320 = 4;
	int32_t t45 = 22834;

	t45 = (x3317<<((x3318<x3319)^x3320));

	if (t45 != 48800) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x3341 = 3U;
	volatile int8_t x3342 = INT8_MIN;
	int64_t x3343 = INT64_MIN;
	uint8_t x3344 = 12U;
	volatile int32_t t46 = -94;

	t46 = (x3341<<((x3342<x3343)^x3344));

	if (t46 != 12288) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x3369 = 171627847LL;
	int16_t x3370 = -7940;
	static int32_t x3371 = 189121837;
	volatile int32_t x3372 = 0;
	int64_t t47 = -248659626076476LL;

	t47 = (x3369<<((x3370<x3371)^x3372));

	if (t47 != 343255694LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3389 = 238135924U;
	int64_t x3390 = INT64_MAX;
	static volatile uint64_t x3391 = UINT64_MAX;
	int8_t x3392 = 1;
	volatile uint32_t t48 = 221160526U;

	t48 = (x3389<<((x3390<x3391)^x3392));

	if (t48 != 238135924U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3553 = 2270304010LL;
	static volatile int16_t x3554 = INT16_MIN;
	int64_t x3555 = INT64_MAX;
	volatile int64_t t49 = -23299654966LL;

	t49 = (x3553<<((x3554<x3555)^x3556));

	if (t49 != 2270304010LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3761 = 46U;
	volatile uint64_t x3762 = 14402993LLU;
	volatile int16_t x3763 = INT16_MIN;
	uint16_t x3764 = 4U;

	t50 = (x3761<<((x3762<x3763)^x3764));

	if (t50 != 1472U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x4029 = INT8_MAX;
	uint64_t x4030 = UINT64_MAX;
	static uint32_t x4031 = UINT32_MAX;
	uint16_t x4032 = 5U;
	volatile int32_t t51 = -118;

	t51 = (x4029<<((x4030<x4031)^x4032));

	if (t51 != 4064) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x4045 = 24845U;
	uint8_t x4047 = 20U;
	volatile uint16_t x4048 = 15U;
	volatile int32_t t52 = 126904;

	t52 = (x4045<<((x4046<x4047)^x4048));

	if (t52 != 407060480) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x4213 = INT8_MAX;
	int64_t x4214 = -4926LL;
	uint64_t x4215 = UINT64_MAX;
	static uint32_t x4216 = 10U;
	static int32_t t53 = -18776;

	t53 = (x4213<<((x4214<x4215)^x4216));

	if (t53 != 260096) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4257 = UINT64_MAX;
	uint8_t x4259 = 0U;
	uint8_t x4260 = 18U;
	volatile uint64_t t54 = 25770296064LLU;

	t54 = (x4257<<((x4258<x4259)^x4260));

	if (t54 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x4365 = 56U;
	int32_t x4367 = 3;
	volatile uint64_t x4368 = 1LLU;

	t55 = (x4365<<((x4366<x4367)^x4368));

	if (t55 != 56) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x4393 = 67671218865LL;
	int32_t x4394 = -1;
	volatile int8_t x4395 = INT8_MIN;
	int64_t t56 = -7319451975958228LL;

	t56 = (x4393<<((x4394<x4395)^x4396));

	if (t56 != 67671218865LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x4509 = INT8_MAX;
	uint32_t x4510 = 1252541U;
	int64_t x4511 = INT64_MIN;
	volatile int8_t x4512 = 0;
	int32_t t57 = -4301;

	t57 = (x4509<<((x4510<x4511)^x4512));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x4549 = 25698U;
	uint32_t x4551 = UINT32_MAX;
	static volatile uint32_t x4552 = 11U;
	int32_t t58 = 27;

	t58 = (x4549<<((x4550<x4551)^x4552));

	if (t58 != 26314752) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4630 = -23;
	static int32_t x4631 = -1;
	volatile uint64_t x4632 = 6LLU;

	t59 = (x4629<<((x4630<x4631)^x4632));

	if (t59 != 32640) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4673 = 14U;
	volatile uint8_t x4674 = 0U;
	static int32_t x4675 = -1;
	uint32_t t60 = 341142110U;

	t60 = (x4673<<((x4674<x4675)^x4676));

	if (t60 != 14U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4681 = 0U;
	int8_t x4682 = 18;
	uint16_t x4683 = 567U;
	volatile uint16_t x4684 = 1U;
	volatile int32_t t61 = -51940;

	t61 = (x4681<<((x4682<x4683)^x4684));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4781 = INT16_MAX;
	int16_t x4782 = 35;
	int64_t x4783 = INT64_MIN;
	int8_t x4784 = 0;
	int32_t t62 = 432162215;

	t62 = (x4781<<((x4782<x4783)^x4784));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x4849 = INT8_MAX;
	uint8_t x4850 = UINT8_MAX;
	volatile uint8_t x4851 = 0U;
	volatile uint32_t x4852 = 1U;
	int32_t t63 = 2;

	t63 = (x4849<<((x4850<x4851)^x4852));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4869 = 1;
	uint64_t x4870 = 3435033202746740LLU;
	uint8_t x4871 = 5U;
	uint16_t x4872 = 16U;
	int32_t t64 = -7755;

	t64 = (x4869<<((x4870<x4871)^x4872));

	if (t64 != 65536) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4921 = 1240749727754LLU;
	static volatile uint32_t x4922 = UINT32_MAX;
	int32_t x4923 = INT32_MIN;
	uint8_t x4924 = 1U;
	volatile uint64_t t65 = 2593572423LLU;

	t65 = (x4921<<((x4922<x4923)^x4924));

	if (t65 != 2481499455508LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x4937 = 33U;
	int64_t x4938 = -1LL;
	int64_t x4939 = 40421032LL;

	t66 = (x4937<<((x4938<x4939)^x4940));

	if (t66 != 8650752) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4950 = INT64_MIN;
	volatile int32_t x4951 = INT32_MIN;
	int8_t x4952 = 0;

	t67 = (x4949<<((x4950<x4951)^x4952));

	if (t67 != 12U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x4985 = UINT32_MAX;
	int64_t x4986 = INT64_MIN;
	uint8_t x4987 = UINT8_MAX;
	uint8_t x4988 = 1U;
	uint32_t t68 = UINT32_MAX;

	t68 = (x4985<<((x4986<x4987)^x4988));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x5037 = 246U;
	uint8_t x5038 = 29U;
	int8_t x5039 = INT8_MIN;
	int32_t x5040 = 4;
	int32_t t69 = -4036024;

	t69 = (x5037<<((x5038<x5039)^x5040));

	if (t69 != 3936) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5153 = UINT32_MAX;
	uint16_t x5154 = UINT16_MAX;
	volatile int8_t x5155 = -45;
	uint8_t x5156 = 5U;
	volatile uint32_t t70 = 6735U;

	t70 = (x5153<<((x5154<x5155)^x5156));

	if (t70 != 4294967264U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5161 = 295U;
	int16_t x5162 = -46;
	int8_t x5163 = 0;
	int64_t x5164 = 16LL;
	volatile int32_t t71 = -71660474;

	t71 = (x5161<<((x5162<x5163)^x5164));

	if (t71 != 38666240) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x5269 = 211075U;
	uint32_t t72 = 28904U;

	t72 = (x5269<<((x5270<x5271)^x5272));

	if (t72 != 211075U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x5406 = -1;
	int8_t x5407 = -36;

	t73 = (x5405<<((x5406<x5407)^x5408));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x5413 = INT16_MAX;
	int8_t x5414 = 1;
	int32_t x5415 = -45750;
	uint16_t x5416 = 8U;
	int32_t t74 = 9254758;

	t74 = (x5413<<((x5414<x5415)^x5416));

	if (t74 != 8388352) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5425 = 0LL;
	static int8_t x5426 = -1;
	int8_t x5428 = 0;
	static volatile int64_t t75 = 400247LL;

	t75 = (x5425<<((x5426<x5427)^x5428));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5505 = 2;
	uint16_t x5508 = 14U;
	int32_t t76 = -4160967;

	t76 = (x5505<<((x5506<x5507)^x5508));

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5637 = 36U;
	static int16_t x5638 = INT16_MAX;
	int64_t x5639 = INT64_MAX;
	uint32_t x5640 = 24U;
	int32_t t77 = -1538287;

	t77 = (x5637<<((x5638<x5639)^x5640));

	if (t77 != 1207959552) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x5805 = 12U;
	static uint32_t x5807 = UINT32_MAX;
	uint16_t x5808 = 5U;
	static int32_t t78 = -2;

	t78 = (x5805<<((x5806<x5807)^x5808));

	if (t78 != 384) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x5993 = 0U;
	volatile int16_t x5995 = -1;
	int32_t x5996 = 1;

	t79 = (x5993<<((x5994<x5995)^x5996));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x6061 = UINT8_MAX;
	uint32_t x6062 = UINT32_MAX;
	int16_t x6063 = -1;
	int16_t x6064 = 2;

	t80 = (x6061<<((x6062<x6063)^x6064));

	if (t80 != 1020) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x6281 = INT16_MAX;
	static int64_t x6282 = INT64_MAX;
	volatile int32_t x6283 = INT32_MIN;
	int64_t x6284 = 1LL;
	int32_t t81 = -1;

	t81 = (x6281<<((x6282<x6283)^x6284));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x6313 = 869U;
	int64_t x6315 = 1483708441435436430LL;
	uint8_t x6316 = 10U;
	static int32_t t82 = -1;

	t82 = (x6313<<((x6314<x6315)^x6316));

	if (t82 != 1779712) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x6329 = 1041LLU;
	int16_t x6330 = INT16_MAX;
	static volatile int32_t x6331 = -1;
	int32_t x6332 = 63;
	uint64_t t83 = 182259663131024139LLU;

	t83 = (x6329<<((x6330<x6331)^x6332));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x6413 = 8U;
	static int16_t x6414 = INT16_MIN;
	static uint64_t x6415 = 1849807LLU;
	volatile int32_t t84 = 51469;

	t84 = (x6413<<((x6414<x6415)^x6416));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x6434 = -1;
	uint16_t x6435 = 0U;
	uint64_t x6436 = 2LLU;
	uint64_t t85 = 4LLU;

	t85 = (x6433<<((x6434<x6435)^x6436));

	if (t85 != 101666394698017160LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x6461 = UINT32_MAX;
	static volatile int64_t x6462 = -1LL;
	volatile int8_t x6463 = INT8_MAX;
	uint16_t x6464 = 12U;
	uint32_t t86 = 0U;

	t86 = (x6461<<((x6462<x6463)^x6464));

	if (t86 != 4294959104U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x6517 = 1U;
	uint64_t x6519 = 121941878LLU;
	uint8_t x6520 = 1U;
	uint32_t t87 = 7U;

	t87 = (x6517<<((x6518<x6519)^x6520));

	if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6521 = UINT16_MAX;
	volatile uint32_t x6522 = 226U;
	int8_t x6524 = 2;
	int32_t t88 = 3572853;

	t88 = (x6521<<((x6522<x6523)^x6524));

	if (t88 != 524280) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6542 = INT16_MIN;
	uint32_t x6543 = UINT32_MAX;
	volatile uint32_t x6544 = 4U;
	int32_t t89 = -413;

	t89 = (x6541<<((x6542<x6543)^x6544));

	if (t89 != 2097120) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6573 = 133U;
	int32_t x6574 = INT32_MIN;
	uint32_t x6576 = 5U;
	uint32_t t90 = 1770080U;

	t90 = (x6573<<((x6574<x6575)^x6576));

	if (t90 != 2128U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x6597 = 1267LLU;
	uint64_t x6598 = 1009379LLU;
	int32_t x6599 = INT32_MIN;
	volatile int8_t x6600 = 2;

	t91 = (x6597<<((x6598<x6599)^x6600));

	if (t91 != 10136LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6738 = 1;
	uint16_t x6739 = 59U;
	uint8_t x6740 = 5U;
	int64_t t92 = 1LL;

	t92 = (x6737<<((x6738<x6739)^x6740));

	if (t92 != 22055136LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x6742 = -117;
	uint8_t x6743 = UINT8_MAX;
	int8_t x6744 = 24;

	t93 = (x6741<<((x6742<x6743)^x6744));

	if (t93 != 3959422976U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x6777 = INT16_MAX;
	int32_t x6778 = INT32_MIN;
	static volatile int8_t x6779 = INT8_MIN;
	int32_t t94 = -10;

	t94 = (x6777<<((x6778<x6779)^x6780));

	if (t94 != 131068) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6845 = UINT8_MAX;
	uint64_t x6847 = UINT64_MAX;
	int16_t x6848 = 9;
	volatile int32_t t95 = -15898;

	t95 = (x6845<<((x6846<x6847)^x6848));

	if (t95 != 65280) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6854 = INT8_MAX;
	static volatile uint16_t x6855 = 7306U;
	uint8_t x6856 = 3U;
	int32_t t96 = -1419;

	t96 = (x6853<<((x6854<x6855)^x6856));

	if (t96 != 220020) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6917 = 12U;
	int8_t x6918 = INT8_MIN;
	int8_t x6919 = -12;
	int8_t x6920 = 0;
	static int32_t t97 = 332320;

	t97 = (x6917<<((x6918<x6919)^x6920));

	if (t97 != 24) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6933 = 5048U;
	uint16_t x6934 = 3127U;
	int16_t x6936 = 2;
	int32_t t98 = -50704193;

	t98 = (x6933<<((x6934<x6935)^x6936));

	if (t98 != 20192) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6937 = 1U;
	uint16_t x6938 = UINT16_MAX;
	int8_t x6939 = INT8_MIN;
	static volatile uint16_t x6940 = 2U;

	t99 = (x6937<<((x6938<x6939)^x6940));

	if (t99 != 4) { NG(); } else { ; }
	
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

