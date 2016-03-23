
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x66 = INT32_MIN;
int32_t x102 = INT32_MAX;
uint64_t x163 = UINT64_MAX;
volatile int64_t t3 = 9LL;
int8_t x265 = INT8_MAX;
int8_t x268 = 0;
int32_t x321 = INT32_MAX;
int16_t x391 = -1;
volatile int32_t t6 = 2;
int16_t x566 = -1;
int8_t x567 = INT8_MAX;
int8_t x568 = 1;
uint64_t t9 = 381960625000LLU;
int8_t x888 = 2;
int32_t x1021 = INT32_MIN;
int32_t x1024 = 1;
int16_t x1043 = INT16_MIN;
uint8_t x1044 = 1U;
int64_t x1214 = -1LL;
static int64_t x1216 = 62LL;
int16_t x1293 = -1;
int8_t x1294 = INT8_MIN;
static int16_t x1295 = INT16_MIN;
uint32_t t21 = 11960U;
static uint8_t x1485 = UINT8_MAX;
uint64_t x1526 = 193193LLU;
int16_t x1636 = 12;
volatile int32_t t25 = -45;
static uint16_t x1647 = UINT16_MAX;
uint32_t t26 = 22209U;
int8_t x1656 = 1;
static volatile uint64_t t27 = 8454LLU;
volatile int8_t x1791 = -1;
int8_t x1792 = 3;
static int64_t x2093 = -130926LL;
uint32_t x2145 = 110U;
volatile int8_t x2147 = 34;
int64_t x2203 = INT64_MIN;
int16_t x2229 = 924;
volatile uint64_t x2365 = 37525526LLU;
volatile uint8_t x2386 = UINT8_MAX;
volatile uint64_t x2398 = 229822659806430011LLU;
int64_t x2427 = -4124762801LL;
volatile uint16_t x2445 = 125U;
volatile uint16_t x2448 = 0U;
volatile uint64_t x2506 = 5009512358630201LLU;
static int16_t x2507 = 0;
uint64_t t42 = 22733101LLU;
static int8_t x2754 = INT8_MAX;
int8_t x2755 = INT8_MAX;
uint8_t x2788 = 1U;
volatile int32_t t46 = -80498962;
volatile uint64_t x3016 = 9LLU;
volatile int8_t x3051 = INT8_MAX;
volatile uint32_t t51 = 63U;
int8_t x3129 = INT8_MAX;
static int64_t x3130 = -8LL;
volatile int64_t x3131 = 32062314430314LL;
uint16_t x3172 = 3U;
int32_t x3209 = -110;
static int64_t x3210 = -207909416048889LL;
uint32_t x3212 = 3U;
volatile uint16_t x3217 = 1U;
int32_t t57 = 7980;
int8_t x3237 = -1;
uint32_t x3238 = 270U;
uint8_t x3240 = 9U;
uint16_t x3253 = 9213U;
volatile int64_t x3255 = -1LL;
int16_t x3261 = 45;
volatile uint16_t x3262 = 0U;
uint32_t x3263 = 266U;
volatile uint8_t x3296 = 15U;
int32_t x3358 = -1;
uint16_t x3360 = 40U;
static int16_t x3459 = -11779;
volatile uint16_t x3498 = 0U;
int8_t x3667 = -3;
uint64_t t66 = 1230719044040088961LLU;
static int16_t x3734 = 31;
uint32_t x3735 = UINT32_MAX;
volatile int64_t x3736 = 6LL;
uint16_t x3796 = 2U;
static uint64_t x3909 = 380302626371022LLU;
uint32_t x3910 = 1533470U;
volatile uint64_t t69 = 1434734549LLU;
volatile uint32_t x3932 = 38U;
volatile uint64_t t70 = 21650LLU;
int8_t x3997 = -1;
static int16_t x3999 = INT16_MIN;
uint32_t x4132 = 18U;
static int8_t x4656 = 18;
static uint64_t x4670 = 1112784985865656792LLU;
volatile uint64_t t83 = 44776067LLU;
int16_t x5035 = INT16_MIN;
static volatile uint8_t x5078 = 0U;
uint16_t x5125 = 3U;
uint16_t x5151 = 40U;
volatile uint64_t t95 = 12363251307LLU;
uint64_t t96 = 3LLU;
uint32_t x5410 = 744315U;
uint32_t t97 = 7105437U;
static uint8_t x5422 = UINT8_MAX;
int64_t x5431 = INT64_MIN;
static uint16_t x5482 = 11U;
uint64_t x5483 = 2LLU;
static volatile uint64_t t100 = 0LLU;
static int16_t x5726 = INT16_MAX;
static volatile int8_t x5728 = 1;
int8_t x5803 = INT8_MIN;
uint16_t x5862 = 22448U;
uint8_t x5863 = 13U;
static volatile int32_t x5955 = INT32_MAX;
static int8_t x6005 = -1;
volatile int16_t x6053 = 1669;
int16_t x6055 = 1610;
volatile uint32_t t110 = 955443U;
uint8_t x6232 = 1U;
volatile uint64_t t115 = 0LLU;
uint64_t x6429 = UINT64_MAX;
volatile int16_t x6682 = INT16_MIN;
volatile int64_t x6701 = -98369272LL;
int32_t x6702 = INT32_MAX;
int64_t t119 = -862838LL;
volatile int64_t t123 = 0LL;
int64_t x7051 = -14988LL;
uint16_t x7052 = 22U;
int8_t x7088 = 2;
uint64_t t125 = 0LLU;
uint32_t x7201 = 107903U;
static int64_t x7203 = 372281574596LL;
static volatile int64_t t126 = -4043620512417145LL;
uint64_t x7259 = 802201240707553646LLU;
int16_t x7301 = -1;
static int32_t x7302 = -116326557;
static int16_t x7322 = INT16_MIN;
int32_t x7334 = -1;
uint16_t x7335 = 26U;
int32_t t132 = 961482;
volatile int8_t x7591 = -1;
static volatile uint16_t x7616 = 33U;
static volatile int16_t x8017 = -5;
volatile uint32_t x8019 = 107U;
uint32_t x8058 = 85143U;
int8_t x8059 = INT8_MAX;
volatile uint32_t t139 = 258U;
static volatile uint8_t x8068 = 0U;
static volatile int16_t x8155 = INT16_MAX;
uint16_t x8156 = 8U;
volatile uint64_t x8286 = 5LLU;
int64_t x8287 = 689504734878268LL;
static volatile uint64_t t143 = 198767846464465503LLU;
volatile uint32_t x8469 = 368U;
uint64_t x8470 = 106513242736383127LLU;
int8_t x8530 = -1;
uint8_t x8532 = 20U;
static int8_t x8804 = 0;
int16_t x8807 = 3;
int8_t x8923 = -8;
static int32_t t154 = 1073;
int8_t x8941 = 1;
uint8_t x8944 = 28U;
volatile uint32_t t157 = 3822U;
int16_t x9074 = 1;
int32_t x9075 = 451702799;
volatile uint64_t x9126 = UINT64_MAX;
uint64_t x9381 = 4LLU;
uint8_t x9473 = UINT8_MAX;
uint8_t x9475 = 1U;
static volatile int16_t x9486 = INT16_MIN;
int32_t x9504 = 14;
int16_t x9555 = INT16_MIN;
int8_t x9593 = 1;
int64_t x9778 = INT64_MAX;
int16_t x9847 = -1;
static uint64_t t173 = 484136829292099038LLU;
volatile int8_t x9965 = INT8_MIN;
int16_t x9968 = 8;
volatile uint64_t t174 = 159458427884593499LLU;
uint32_t x10142 = UINT32_MAX;
volatile uint32_t t176 = 35909U;
uint16_t x10154 = 44U;
volatile int32_t t179 = -571386;
volatile int32_t t180 = -58262348;
int32_t x10471 = INT32_MAX;
int16_t x10472 = 3;
int8_t x10494 = INT8_MAX;
int64_t x10678 = INT64_MIN;
volatile uint8_t x10785 = 4U;
static uint8_t x10786 = UINT8_MAX;
static volatile uint16_t x10787 = UINT16_MAX;
static uint16_t x10875 = 135U;
volatile uint64_t x10891 = 108209LLU;
volatile int16_t x10892 = 16;
volatile int32_t x10949 = -1;
static uint64_t x11081 = UINT64_MAX;
int16_t x11111 = 35;
uint64_t t192 = 120707367LLU;
volatile int8_t x11133 = 59;
int16_t x11211 = -1;
volatile uint64_t x11275 = UINT64_MAX;
volatile int32_t x11283 = 215430;
uint64_t t197 = 57523375836LLU;
static uint64_t x11407 = 1612LLU;
static uint64_t t198 = 62119910620959223LLU;
int8_t x11699 = INT8_MIN;
volatile uint32_t t199 = 569638U;


void f0(void) {
    	volatile int16_t x65 = INT16_MIN;
	int64_t x67 = 444146LL;
	int64_t x68 = 6LL;
	int64_t t0 = 15065679158413965LL;

    t0 = ((x65*(x66+x67))>>x68);

    if (t0 != 1099284225024LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x101 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = 1;
	volatile uint64_t t1 = 130784257105006816LLU;

    t1 = ((x101*(x102+x103))>>x104);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x161 = -1;
	int16_t x162 = 50;
	uint8_t x164 = 6U;
	uint64_t t2 = 481339503376503428LLU;

    t2 = ((x161*(x162+x163))>>x164);

    if (t2 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x213 = -1;
	volatile int64_t x214 = INT64_MIN;
	uint32_t x215 = 1759485938U;
	int8_t x216 = 1;

    t3 = ((x213*(x214+x215))>>x216);

    if (t3 != 4611686017547644935LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x266 = INT8_MAX;
	int8_t x267 = -1;
	static int32_t t4 = -57432;

    t4 = ((x265*(x266+x267))>>x268);

    if (t4 != 16002) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x322 = INT8_MAX;
	volatile uint64_t x323 = 222400580LLU;
	uint64_t x324 = 25LLU;
	uint64_t t5 = 1265482857942633LLU;

    t5 = ((x321*(x322+x323))>>x324);

    if (t5 != 14233645241LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = INT16_MIN;
	static volatile uint8_t x392 = 0U;

    t6 = ((x389*(x390+x391))>>x392);

    if (t6 != 1073774592) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x405 = -1;
	volatile int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	volatile int8_t x408 = 1;
	int32_t t7 = -3700;

    t7 = ((x405*(x406+x407))>>x408);

    if (t7 != 16384) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x565 = 15175LLU;
	volatile uint64_t t8 = 193491087703119LLU;

    t8 = ((x565*(x566+x567))>>x568);

    if (t8 != 956025LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x609 = INT16_MIN;
	static uint64_t x610 = 7901351372436LLU;
	uint32_t x611 = 328U;
	uint16_t x612 = 1U;

    t9 = ((x609*(x610+x611))>>x612);

    if (t9 != 9093916295963410432LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x689 = 424U;
	int16_t x690 = INT16_MAX;
	int8_t x691 = -54;
	int16_t x692 = 1;
	int32_t t10 = -101;

    t10 = ((x689*(x690+x691))>>x692);

    if (t10 != 6935156) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x741 = 7U;
	volatile uint64_t x742 = 216847293766187LLU;
	uint8_t x743 = 4U;
	static int8_t x744 = 1;
	volatile uint64_t t11 = 495388492526851LLU;

    t11 = ((x741*(x742+x743))>>x744);

    if (t11 != 758965528181668LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x829 = 66804LL;
	uint8_t x830 = 3U;
	int16_t x831 = INT16_MAX;
	int64_t x832 = 21LL;
	volatile int64_t t12 = 30LL;

    t12 = ((x829*(x830+x831))>>x832);

    if (t12 != 1043LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x885 = 0U;
	volatile int32_t x886 = INT32_MIN;
	static int64_t x887 = -1LL;
	volatile int64_t t13 = -248LL;

    t13 = ((x885*(x886+x887))>>x888);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x1022 = 45096U;
	uint32_t x1023 = 739763411U;
	volatile uint32_t t14 = 2U;

    t14 = ((x1021*(x1022+x1023))>>x1024);

    if (t14 != 1073741824U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1041 = 18U;
	uint16_t x1042 = UINT16_MAX;
	int32_t t15 = 52;

    t15 = ((x1041*(x1042+x1043))>>x1044);

    if (t15 != 294903) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x1105 = UINT64_MAX;
	int64_t x1106 = INT64_MAX;
	static volatile uint64_t x1107 = 33500242074366LLU;
	volatile uint32_t x1108 = 33U;
	volatile uint64_t t16 = 2506489945LLU;

    t16 = ((x1105*(x1106+x1107))>>x1108);

    if (t16 != 1073737924LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1109 = INT16_MIN;
	static volatile uint32_t x1110 = UINT32_MAX;
	int16_t x1111 = -16083;
	static int8_t x1112 = 0;
	uint32_t t17 = 1197382271U;

    t17 = ((x1109*(x1110+x1111))>>x1112);

    if (t17 != 527040512U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1213 = 124480U;
	uint64_t x1215 = UINT64_MAX;
	uint64_t t18 = 4693685316262336127LLU;

    t18 = ((x1213*(x1214+x1215))>>x1216);

    if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x1233 = 0U;
	int16_t x1234 = -15180;
	volatile int32_t x1235 = INT32_MAX;
	uint8_t x1236 = 2U;
	static volatile int32_t t19 = 7895174;

    t19 = ((x1233*(x1234+x1235))>>x1236);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1296 = 6U;
	static int32_t t20 = 1;

    t20 = ((x1293*(x1294+x1295))>>x1296);

    if (t20 != 514) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1373 = 1U;
	uint8_t x1374 = UINT8_MAX;
	volatile uint32_t x1375 = 631145219U;
	static uint8_t x1376 = 2U;

    t21 = ((x1373*(x1374+x1375))>>x1376);

    if (t21 != 157786368U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1385 = 8786601184869601LLU;
	static uint32_t x1386 = 32700830U;
	int16_t x1387 = -3;
	uint16_t x1388 = 9U;
	uint64_t t22 = 166442007403765725LLU;

    t22 = ((x1385*(x1386+x1387))>>x1388);

    if (t22 != 5155414679421658LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1486 = 3U;
	uint8_t x1487 = 0U;
	static uint16_t x1488 = 0U;
	volatile int32_t t23 = 5795025;

    t23 = ((x1485*(x1486+x1487))>>x1488);

    if (t23 != 765) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1525 = 42807919771034257LLU;
	int8_t x1527 = INT8_MAX;
	static uint16_t x1528 = 2U;
	uint64_t t24 = 134711900009LLU;

    t24 = ((x1525*(x1526+x1527))>>x1528);

    if (t24 != 2871426278615859818LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x1633 = -10638;
	int16_t x1634 = INT16_MIN;
	int32_t x1635 = -1;

    t25 = ((x1633*(x1634+x1635))>>x1636);

    if (t25 != 85106) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x1645 = INT16_MAX;
	uint32_t x1646 = UINT32_MAX;
	uint64_t x1648 = 0LLU;

    t26 = ((x1645*(x1646+x1647))>>x1648);

    if (t26 != 2147352578U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x1653 = 4U;
	int16_t x1654 = INT16_MIN;
	uint64_t x1655 = UINT64_MAX;

    t27 = ((x1653*(x1654+x1655))>>x1656);

    if (t27 != 9223372036854710270LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1773 = INT16_MAX;
	int16_t x1774 = 3;
	static int64_t x1775 = 5816876993822LL;
	uint8_t x1776 = 3U;
	static volatile int64_t t28 = 2608396LL;

    t28 = ((x1773*(x1774+x1775))>>x1776);

    if (t28 != 23825201057082971LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1789 = UINT8_MAX;
	int16_t x1790 = 138;
	volatile int32_t t29 = 898;

    t29 = ((x1789*(x1790+x1791))>>x1792);

    if (t29 != 4366) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x2094 = 1147U;
	static uint64_t x2095 = UINT64_MAX;
	volatile uint16_t x2096 = 1U;
	volatile uint64_t t30 = 22947LLU;

    t30 = ((x2093*(x2094+x2095))>>x2096);

    if (t30 != 9223372036779755210LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x2146 = INT16_MIN;
	static uint32_t x2148 = 2U;
	volatile uint32_t t31 = 568576734U;

    t31 = ((x2145*(x2146+x2147))>>x2148);

    if (t31 != 1072841639U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x2181 = 905;
	uint32_t x2182 = 9U;
	volatile int8_t x2183 = INT8_MAX;
	static int16_t x2184 = 1;
	static volatile uint32_t t32 = 1522191373U;

    t32 = ((x2181*(x2182+x2183))>>x2184);

    if (t32 != 61540U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x2201 = -1;
	uint64_t x2202 = 130219929701462362LLU;
	uint8_t x2204 = 27U;
	uint64_t t33 = 5354626328006023LLU;

    t33 = ((x2201*(x2202+x2203))>>x2204);

    if (t33 != 67749262654LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x2230 = 133U;
	uint16_t x2231 = 28U;
	volatile uint8_t x2232 = 0U;
	volatile uint32_t t34 = 100U;

    t34 = ((x2229*(x2230+x2231))>>x2232);

    if (t34 != 148764U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2313 = -1;
	int64_t x2314 = INT64_MAX;
	volatile int64_t x2315 = INT64_MIN;
	static uint8_t x2316 = 17U;
	volatile int64_t t35 = 4777026371852958LL;

    t35 = ((x2313*(x2314+x2315))>>x2316);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x2366 = INT8_MIN;
	volatile int16_t x2367 = INT16_MAX;
	static uint16_t x2368 = 1U;
	static uint64_t t36 = 0LLU;

    t36 = ((x2365*(x2366+x2367))>>x2368);

    if (t36 != 612397821557LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x2385 = -1LL;
	int32_t x2387 = -4720;
	static uint8_t x2388 = 49U;
	volatile int64_t t37 = -485870112494LL;

    t37 = ((x2385*(x2386+x2387))>>x2388);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x2397 = 95;
	static volatile int32_t x2399 = INT32_MIN;
	static int8_t x2400 = 1;
	static uint64_t t38 = 5LLU;

    t38 = ((x2397*(x2398+x2399))>>x2400);

    if (t38 != 1693204201945176434LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x2425 = 61U;
	static uint64_t x2426 = 15616522019037294LLU;
	int16_t x2428 = 1;
	volatile uint64_t t39 = 64636124LLU;

    t39 = ((x2425*(x2426+x2427))>>x2428);

    if (t39 != 476303795775372036LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x2446 = INT64_MIN;
	static uint64_t x2447 = 451406525498528703LLU;
	volatile uint64_t t40 = 16533558802680LLU;

    t40 = ((x2445*(x2446+x2447))>>x2448);

    if (t40 != 10308955503042208835LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2505 = 105U;
	uint8_t x2508 = 8U;
	uint64_t t41 = 1551LLU;

    t41 = ((x2505*(x2506+x2507))>>x2508);

    if (t41 != 2054682803344418LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x2589 = 627U;
	volatile int64_t x2590 = -187LL;
	uint64_t x2591 = 33704688LLU;
	static volatile uint8_t x2592 = 3U;

    t42 = ((x2589*(x2590+x2591))>>x2592);

    if (t42 != 2641590265LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x2645 = 12U;
	volatile int16_t x2646 = INT16_MAX;
	int64_t x2647 = 0LL;
	volatile uint8_t x2648 = 45U;
	volatile int64_t t43 = -407393LL;

    t43 = ((x2645*(x2646+x2647))>>x2648);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x2753 = 113202;
	uint8_t x2756 = 25U;
	volatile int32_t t44 = 27;

    t44 = ((x2753*(x2754+x2755))>>x2756);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2785 = 41U;
	volatile uint16_t x2786 = 6476U;
	int8_t x2787 = -1;
	volatile int32_t t45 = -416;

    t45 = ((x2785*(x2786+x2787))>>x2788);

    if (t45 != 132737) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x2833 = -1;
	uint8_t x2834 = 0U;
	int16_t x2835 = INT16_MIN;
	static uint8_t x2836 = 0U;

    t46 = ((x2833*(x2834+x2835))>>x2836);

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2929 = 40881LLU;
	int64_t x2930 = INT64_MIN;
	uint8_t x2931 = 73U;
	uint16_t x2932 = 2U;
	volatile uint64_t t47 = 290168574LLU;

    t47 = ((x2929*(x2930+x2931))>>x2932);

    if (t47 != 2305843009214440030LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x3013 = -1LL;
	int32_t x3014 = -1;
	static int16_t x3015 = INT16_MIN;
	int64_t t48 = 3848970LL;

    t48 = ((x3013*(x3014+x3015))>>x3016);

    if (t48 != 64LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x3021 = INT64_MAX;
	uint64_t x3022 = 2189LLU;
	volatile uint8_t x3023 = UINT8_MAX;
	uint64_t x3024 = 26LLU;
	uint64_t t49 = 599006387510304859LLU;

    t49 = ((x3021*(x3022+x3023))>>x3024);

    if (t49 != 274877906943LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x3049 = -1;
	int64_t x3050 = INT64_MIN;
	uint8_t x3052 = 1U;
	static int64_t t50 = 0LL;

    t50 = ((x3049*(x3050+x3051))>>x3052);

    if (t50 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3073 = INT32_MIN;
	uint16_t x3074 = 59U;
	volatile uint32_t x3075 = 18821894U;
	static uint8_t x3076 = 7U;

    t51 = ((x3073*(x3074+x3075))>>x3076);

    if (t51 != 16777216U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x3121 = -335790155LL;
	uint8_t x3122 = 1U;
	volatile uint64_t x3123 = 13LLU;
	int8_t x3124 = 49;
	volatile uint64_t t52 = 2008062785142491LLU;

    t52 = ((x3121*(x3122+x3123))>>x3124);

    if (t52 != 32767LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x3132 = 2U;
	volatile int64_t t53 = 56475917LL;

    t53 = ((x3129*(x3130+x3131))>>x3132);

    if (t53 != 1017978483162215LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x3137 = INT8_MIN;
	uint32_t x3138 = 2599841U;
	int32_t x3139 = INT32_MIN;
	static int16_t x3140 = 3;
	volatile uint32_t t54 = 1276U;

    t54 = ((x3137*(x3138+x3139))>>x3140);

    if (t54 != 495273456U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x3169 = 25778;
	int16_t x3170 = -480;
	uint64_t x3171 = 1648763537488LLU;
	volatile uint64_t t55 = 514606053890385LLU;

    t55 = ((x3169*(x3170+x3171))>>x3172);

    if (t55 != 5312728307124028LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x3211 = INT16_MAX;
	volatile int64_t t56 = -405314862534LL;

    t56 = ((x3209*(x3210+x3211))>>x3212);

    if (t56 != 2858754470221677LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x3218 = 3;
	int16_t x3219 = 322;
	static volatile uint8_t x3220 = 4U;

    t57 = ((x3217*(x3218+x3219))>>x3220);

    if (t57 != 20) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3239 = INT16_MIN;
	static volatile uint32_t t58 = 17U;

    t58 = ((x3237*(x3238+x3239))>>x3240);

    if (t58 != 63U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x3254 = 23;
	volatile uint64_t x3256 = 2LLU;
	volatile int64_t t59 = -15767279312LL;

    t59 = ((x3253*(x3254+x3255))>>x3256);

    if (t59 != 50671LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3264 = 29;
	volatile uint32_t t60 = 24931U;

    t60 = ((x3261*(x3262+x3263))>>x3264);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x3293 = 1383U;
	uint32_t x3294 = UINT32_MAX;
	int64_t x3295 = 2162074835734LL;
	static int64_t t61 = -3564LL;

    t61 = ((x3293*(x3294+x3295))>>x3296);

    if (t61 != 91433393481LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x3337 = 4011U;
	uint32_t x3338 = UINT32_MAX;
	int64_t x3339 = -1LL;
	uint8_t x3340 = 17U;
	int64_t t62 = -339069LL;

    t62 = ((x3337*(x3338+x3339))>>x3340);

    if (t62 != 131432447LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x3357 = 7833277456LLU;
	volatile uint8_t x3359 = 6U;
	uint64_t t63 = 114LLU;

    t63 = ((x3357*(x3358+x3359))>>x3360);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x3457 = INT16_MIN;
	int16_t x3458 = -9;
	static int8_t x3460 = 0;
	volatile int32_t t64 = -18474078;

    t64 = ((x3457*(x3458+x3459))>>x3460);

    if (t64 != 386269184) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3497 = INT16_MIN;
	uint32_t x3499 = UINT32_MAX;
	uint16_t x3500 = 2U;
	volatile uint32_t t65 = 312388U;

    t65 = ((x3497*(x3498+x3499))>>x3500);

    if (t65 != 8192U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x3665 = INT32_MIN;
	uint64_t x3666 = 1LLU;
	int16_t x3668 = 2;

    t66 = ((x3665*(x3666+x3667))>>x3668);

    if (t66 != 1073741824LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x3733 = 8U;
	volatile uint32_t t67 = 118U;

    t67 = ((x3733*(x3734+x3735))>>x3736);

    if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3793 = 0;
	static int16_t x3794 = -26;
	int16_t x3795 = -1;
	volatile int32_t t68 = -28;

    t68 = ((x3793*(x3794+x3795))>>x3796);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x3911 = 1U;
	int16_t x3912 = 2;

    t69 = ((x3909*(x3910+x3911))>>x3912);

    if (t69 != 2833495619700344316LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x3929 = 104U;
	volatile int8_t x3930 = 15;
	uint64_t x3931 = 704247062499259LLU;

    t70 = ((x3929*(x3930+x3931))>>x3932);

    if (t70 != 266451LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3985 = INT16_MIN;
	uint64_t x3986 = UINT64_MAX;
	volatile uint32_t x3987 = 1608215U;
	int16_t x3988 = 0;
	uint64_t t71 = 3801837LLU;

    t71 = ((x3985*(x3986+x3987))>>x3988);

    if (t71 != 18446744021011595264LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3993 = 8119751492126LLU;
	static volatile int32_t x3994 = -1;
	int32_t x3995 = -1;
	static volatile int16_t x3996 = 3;
	uint64_t t72 = 41233801726304LLU;

    t72 = ((x3993*(x3994+x3995))>>x3996);

    if (t72 != 2305840979275820920LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x3998 = -1;
	int16_t x4000 = 3;
	volatile int32_t t73 = -1233109;

    t73 = ((x3997*(x3998+x3999))>>x4000);

    if (t73 != 4096) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x4125 = 112813U;
	uint16_t x4126 = 8U;
	static uint8_t x4127 = 6U;
	int32_t x4128 = 0;
	uint32_t t74 = 2482306U;

    t74 = ((x4125*(x4126+x4127))>>x4128);

    if (t74 != 1579382U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x4129 = 97866077651153690LL;
	uint64_t x4130 = 1LLU;
	int32_t x4131 = 3;
	volatile uint64_t t75 = 144383LLU;

    t75 = ((x4129*(x4130+x4131))>>x4132);

    if (t75 != 1493317835253LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x4205 = UINT16_MAX;
	volatile uint16_t x4206 = UINT16_MAX;
	volatile int64_t x4207 = 60637136LL;
	volatile int8_t x4208 = 0;
	static int64_t t76 = 2886792200541463791LL;

    t76 = ((x4205*(x4206+x4207))>>x4208);

    if (t76 != 3978149543985LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x4269 = 503510572U;
	uint16_t x4270 = UINT16_MAX;
	int16_t x4271 = INT16_MIN;
	static int16_t x4272 = 7;
	volatile uint32_t t77 = 67U;

    t77 = ((x4269*(x4270+x4271))>>x4272);

    if (t77 != 12199443U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint8_t x4373 = 79U;
	uint16_t x4374 = 2U;
	uint16_t x4375 = UINT16_MAX;
	static uint8_t x4376 = 4U;
	volatile int32_t t78 = -3168;

    t78 = ((x4373*(x4374+x4375))>>x4376);

    if (t78 != 323588) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x4445 = 4106701879LLU;
	uint8_t x4446 = 24U;
	volatile int8_t x4447 = 1;
	static int32_t x4448 = 2;
	volatile uint64_t t79 = 171630926LLU;

    t79 = ((x4445*(x4446+x4447))>>x4448);

    if (t79 != 25666886743LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x4481 = UINT32_MAX;
	int8_t x4482 = INT8_MAX;
	uint32_t x4483 = UINT32_MAX;
	static uint8_t x4484 = 0U;
	uint32_t t80 = 5U;

    t80 = ((x4481*(x4482+x4483))>>x4484);

    if (t80 != 4294967170U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x4521 = 4083705020511693416LLU;
	int32_t x4522 = -58675;
	uint8_t x4523 = 0U;
	static volatile uint8_t x4524 = 9U;
	uint64_t t81 = 310031LLU;

    t81 = ((x4521*(x4522+x4523))>>x4524);

    if (t81 != 23073122975516226LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4653 = 27;
	int8_t x4654 = INT8_MAX;
	uint64_t x4655 = 873597863LLU;
	static uint64_t t82 = 475171LLU;

    t82 = ((x4653*(x4654+x4655))>>x4656);

    if (t82 != 89977LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x4669 = -26;
	int64_t x4671 = INT64_MIN;
	int32_t x4672 = 0;

    t83 = ((x4669*(x4670+x4671))>>x4672);

    if (t83 != 7961078514912026640LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x4717 = -1;
	uint64_t x4718 = UINT64_MAX;
	int64_t x4719 = -55153995782LL;
	uint8_t x4720 = 1U;
	uint64_t t84 = 40690282LLU;

    t84 = ((x4717*(x4718+x4719))>>x4720);

    if (t84 != 27576997891LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x4865 = INT32_MIN;
	uint32_t x4866 = 37U;
	uint64_t x4867 = UINT64_MAX;
	int16_t x4868 = 3;
	volatile uint64_t t85 = 1519380440123736855LLU;

    t85 = ((x4865*(x4866+x4867))>>x4868);

    if (t85 != 2305842999550017536LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x4877 = -843378LL;
	int16_t x4878 = INT16_MIN;
	int16_t x4879 = 16234;
	static int8_t x4880 = 1;
	volatile int64_t t86 = 663532824596233LL;

    t86 = ((x4877*(x4878+x4879))>>x4880);

    if (t86 != 6972205926LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x5025 = -1;
	static int16_t x5026 = INT16_MIN;
	static int16_t x5027 = 1;
	int8_t x5028 = 2;
	volatile int32_t t87 = -1083;

    t87 = ((x5025*(x5026+x5027))>>x5028);

    if (t87 != 8191) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x5029 = 0;
	static uint8_t x5030 = 14U;
	int32_t x5031 = -1;
	volatile int16_t x5032 = 1;
	int32_t t88 = -90;

    t88 = ((x5029*(x5030+x5031))>>x5032);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x5033 = -1;
	uint8_t x5034 = UINT8_MAX;
	static volatile uint32_t x5036 = 0U;
	int32_t t89 = -10006967;

    t89 = ((x5033*(x5034+x5035))>>x5036);

    if (t89 != 32513) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x5077 = 5U;
	static int16_t x5079 = INT16_MAX;
	uint8_t x5080 = 0U;
	int32_t t90 = -1578696;

    t90 = ((x5077*(x5078+x5079))>>x5080);

    if (t90 != 163835) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x5126 = UINT32_MAX;
	uint64_t x5127 = 1800309LLU;
	uint16_t x5128 = 1U;
	volatile uint64_t t91 = 1LLU;

    t91 = ((x5125*(x5126+x5127))>>x5128);

    if (t91 != 6445151406LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x5149 = 1U;
	volatile uint64_t x5150 = UINT64_MAX;
	volatile uint8_t x5152 = 6U;
	uint64_t t92 = 16352885795975911LLU;

    t92 = ((x5149*(x5150+x5151))>>x5152);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x5217 = 96;
	uint16_t x5218 = UINT16_MAX;
	uint64_t x5219 = UINT64_MAX;
	int8_t x5220 = 2;
	uint64_t t93 = 28256LLU;

    t93 = ((x5217*(x5218+x5219))>>x5220);

    if (t93 != 1572816LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x5269 = UINT16_MAX;
	uint64_t x5270 = UINT64_MAX;
	uint8_t x5271 = UINT8_MAX;
	int16_t x5272 = 0;
	volatile uint64_t t94 = 55LLU;

    t94 = ((x5269*(x5270+x5271))>>x5272);

    if (t94 != 16645890LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x5313 = INT16_MAX;
	uint64_t x5314 = 9332619256380LLU;
	uint64_t x5315 = 61267554734420451LLU;
	static uint16_t x5316 = 20U;

    t95 = ((x5313*(x5314+x5315))>>x5316);

    if (t95 != 14888198811814LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x5333 = -84364;
	static volatile uint64_t x5334 = UINT64_MAX;
	uint16_t x5335 = 8U;
	uint8_t x5336 = 27U;

    t96 = ((x5333*(x5334+x5335))>>x5336);

    if (t96 != 137438953471LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x5409 = INT32_MAX;
	static int16_t x5411 = INT16_MAX;
	uint16_t x5412 = 2U;

    t97 = ((x5409*(x5410+x5411))>>x5412);

    if (t97 != 1073547553U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x5421 = 1590414;
	int8_t x5423 = -1;
	uint16_t x5424 = 0U;
	int32_t t98 = 5;

    t98 = ((x5421*(x5422+x5423))>>x5424);

    if (t98 != 403965156) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x5429 = INT64_MIN;
	volatile uint64_t x5430 = 5886431LLU;
	volatile uint8_t x5432 = 58U;
	uint64_t t99 = 8729LLU;

    t99 = ((x5429*(x5430+x5431))>>x5432);

    if (t99 != 32LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x5481 = -8062068;
	uint8_t x5484 = 14U;

    t100 = ((x5481*(x5482+x5483))>>x5484);

    if (t100 != 1125899906836227LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x5609 = -1;
	uint32_t x5610 = UINT32_MAX;
	static uint16_t x5611 = UINT16_MAX;
	volatile int8_t x5612 = 2;
	volatile uint32_t t101 = 415U;

    t101 = ((x5609*(x5610+x5611))>>x5612);

    if (t101 != 1073725440U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x5653 = -16;
	static int16_t x5654 = -1;
	int16_t x5655 = INT16_MIN;
	volatile int8_t x5656 = 5;
	static volatile int32_t t102 = -5893592;

    t102 = ((x5653*(x5654+x5655))>>x5656);

    if (t102 != 16384) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x5725 = UINT8_MAX;
	uint64_t x5727 = 19325615LLU;
	uint64_t t103 = 670662168LLU;

    t103 = ((x5725*(x5726+x5727))>>x5728);

    if (t103 != 2468193705LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x5769 = INT8_MIN;
	uint64_t x5770 = 12962179647LLU;
	static volatile int8_t x5771 = INT8_MAX;
	int32_t x5772 = 0;
	uint64_t t104 = 120396903512049LLU;

    t104 = ((x5769*(x5770+x5771))>>x5772);

    if (t104 != 18446742414550540544LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x5801 = 101756825LL;
	static int32_t x5802 = INT32_MAX;
	uint8_t x5804 = 9U;
	volatile int64_t t105 = 2828150308207LL;

    t105 = ((x5801*(x5802+x5803))>>x5804);

    if (t105 != 426799032486849LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x5861 = UINT16_MAX;
	int16_t x5864 = 12;
	volatile int32_t t106 = 1737001;

    t106 = ((x5861*(x5862+x5863))>>x5864);

    if (t106 != 359370) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5953 = 774940245889LLU;
	int32_t x5954 = -12;
	static int32_t x5956 = 61;
	uint64_t t107 = 8166260LLU;

    t107 = ((x5953*(x5954+x5955))>>x5956);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x6006 = UINT64_MAX;
	int8_t x6007 = 2;
	int64_t x6008 = 1LL;
	static uint64_t t108 = 643206770715LLU;

    t108 = ((x6005*(x6006+x6007))>>x6008);

    if (t108 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x6054 = 105578312293161LLU;
	uint8_t x6056 = 36U;
	uint64_t t109 = 531262538LLU;

    t109 = ((x6053*(x6054+x6055))>>x6056);

    if (t109 != 2564195LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x6129 = UINT16_MAX;
	uint32_t x6130 = 26U;
	volatile uint16_t x6131 = 1U;
	uint32_t x6132 = 11U;

    t110 = ((x6129*(x6130+x6131))>>x6132);

    if (t110 != 863U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x6149 = INT32_MAX;
	uint64_t x6150 = 2LLU;
	int8_t x6151 = INT8_MIN;
	static uint8_t x6152 = 35U;
	static uint64_t t111 = 3628360LLU;

    t111 = ((x6149*(x6150+x6151))>>x6152);

    if (t111 != 536870904LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x6185 = INT64_MIN;
	int8_t x6186 = INT8_MAX;
	uint64_t x6187 = 109974070029034830LLU;
	static uint8_t x6188 = 30U;
	volatile uint64_t t112 = 83523232282LLU;

    t112 = ((x6185*(x6186+x6187))>>x6188);

    if (t112 != 8589934592LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x6229 = INT8_MIN;
	uint64_t x6230 = 2LLU;
	int32_t x6231 = -7775074;
	volatile uint64_t t113 = 289LLU;

    t113 = ((x6229*(x6230+x6231))>>x6232);

    if (t113 != 497604608LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x6289 = 1;
	static uint64_t x6290 = 88373LLU;
	int32_t x6291 = -49042979;
	volatile uint16_t x6292 = 56U;
	volatile uint64_t t114 = 6590LLU;

    t114 = ((x6289*(x6290+x6291))>>x6292);

    if (t114 != 255LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x6369 = 1;
	int64_t x6370 = -515449374215382LL;
	uint64_t x6371 = 174417279316LLU;
	static uint16_t x6372 = 13U;

    t115 = ((x6369*(x6370+x6371))>>x6372);

    if (t115 != 2251736913910231LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x6430 = INT8_MAX;
	int8_t x6431 = INT8_MIN;
	int8_t x6432 = 1;
	static uint64_t t116 = 19118214LLU;

    t116 = ((x6429*(x6430+x6431))>>x6432);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x6537 = UINT32_MAX;
	int32_t x6538 = -1;
	uint16_t x6539 = UINT16_MAX;
	uint32_t x6540 = 6U;
	volatile uint32_t t117 = 1U;

    t117 = ((x6537*(x6538+x6539))>>x6540);

    if (t117 != 67107840U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x6681 = -1;
	static uint64_t x6683 = 15456207870804014LLU;
	volatile uint32_t x6684 = 0U;
	volatile uint64_t t118 = 9092815LLU;

    t118 = ((x6681*(x6682+x6683))>>x6684);

    if (t118 != 18431287865838780370LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x6703 = INT32_MIN;
	uint32_t x6704 = 28U;

    t119 = ((x6701*(x6702+x6703))>>x6704);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x6717 = 958972410LLU;
	int16_t x6718 = INT16_MAX;
	int32_t x6719 = -7484304;
	volatile uint16_t x6720 = 24U;
	uint64_t t120 = 243920838636LLU;

    t120 = ((x6717*(x6718+x6719))>>x6720);

    if (t120 != 1099085703808LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x6833 = INT32_MIN;
	int32_t x6834 = -24542893;
	uint32_t x6835 = 85039448U;
	static uint8_t x6836 = 3U;
	uint32_t t121 = 50918452U;

    t121 = ((x6833*(x6834+x6835))>>x6836);

    if (t121 != 268435456U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x6845 = 68646427343009LL;
	uint16_t x6846 = 30U;
	int32_t x6847 = 994;
	uint8_t x6848 = 5U;
	static volatile int64_t t122 = 58101216986950LL;

    t122 = ((x6845*(x6846+x6847))>>x6848);

    if (t122 != 2196685674976288LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x6989 = 331072291LL;
	volatile uint16_t x6990 = UINT16_MAX;
	int64_t x6991 = -2LL;
	volatile uint8_t x6992 = 3U;

    t123 = ((x6989*(x6990+x6991))>>x6992);

    if (t123 != 2712020055762LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x7049 = 228189007362203LLU;
	int32_t x7050 = 110246932;
	uint64_t t124 = 571373LLU;

    t124 = ((x7049*(x7050+x7051))>>x7052);

    if (t124 != 2576281666715LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x7085 = 8U;
	static int16_t x7086 = INT16_MIN;
	uint64_t x7087 = 5996LLU;

    t125 = ((x7085*(x7086+x7087))>>x7088);

    if (t125 != 4611686018427334360LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x7202 = INT32_MIN;
	static volatile int32_t x7204 = 52;

    t126 = ((x7201*(x7202+x7203))>>x7204);

    if (t126 != 8LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x7209 = UINT8_MAX;
	static int16_t x7210 = 11398;
	int32_t x7211 = -1;
	int32_t x7212 = 0;
	volatile int32_t t127 = -166396357;

    t127 = ((x7209*(x7210+x7211))>>x7212);

    if (t127 != 2906235) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x7257 = INT64_MIN;
	int32_t x7258 = -1;
	int8_t x7260 = 13;
	volatile uint64_t t128 = 17LLU;

    t128 = ((x7257*(x7258+x7259))>>x7260);

    if (t128 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x7277 = 2506477;
	int64_t x7278 = -1LL;
	int8_t x7279 = INT8_MAX;
	int8_t x7280 = 0;
	static int64_t t129 = 3609171LL;

    t129 = ((x7277*(x7278+x7279))>>x7280);

    if (t129 != 315816102LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x7303 = INT16_MAX;
	uint8_t x7304 = 4U;
	int32_t t130 = -168;

    t130 = ((x7301*(x7302+x7303))>>x7304);

    if (t130 != 7268361) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x7321 = UINT8_MAX;
	volatile uint32_t x7323 = 19U;
	int8_t x7324 = 1;
	uint32_t t131 = 11738U;

    t131 = ((x7321*(x7322+x7323))>>x7324);

    if (t131 != 2143308150U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x7333 = INT8_MAX;
	static uint32_t x7336 = 7U;

    t132 = ((x7333*(x7334+x7335))>>x7336);

    if (t132 != 24) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x7589 = 12U;
	uint8_t x7590 = 15U;
	int16_t x7592 = 0;
	volatile int32_t t133 = -28565981;

    t133 = ((x7589*(x7590+x7591))>>x7592);

    if (t133 != 168) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x7613 = INT8_MIN;
	static uint64_t x7614 = UINT64_MAX;
	int32_t x7615 = INT32_MIN;
	uint64_t t134 = 307LLU;

    t134 = ((x7613*(x7614+x7615))>>x7616);

    if (t134 != 32LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x7617 = UINT64_MAX;
	static volatile int16_t x7618 = 15027;
	int32_t x7619 = 376;
	uint8_t x7620 = 20U;
	volatile uint64_t t135 = 60679885478193LLU;

    t135 = ((x7617*(x7618+x7619))>>x7620);

    if (t135 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x7721 = 2U;
	static int8_t x7722 = -33;
	int16_t x7723 = INT16_MAX;
	uint8_t x7724 = 6U;
	uint32_t t136 = 767702193U;

    t136 = ((x7721*(x7722+x7723))>>x7724);

    if (t136 != 1022U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x7849 = INT8_MIN;
	uint32_t x7850 = 87068U;
	int8_t x7851 = -57;
	static uint16_t x7852 = 3U;
	volatile uint32_t t137 = 789299179U;

    t137 = ((x7849*(x7850+x7851))>>x7852);

    if (t137 != 535478736U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x8018 = INT16_MIN;
	int16_t x8020 = 1;
	volatile uint32_t t138 = 4812393U;

    t138 = ((x8017*(x8018+x8019))>>x8020);

    if (t138 != 81652U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x8057 = -1;
	static uint16_t x8060 = 8U;

    t139 = ((x8057*(x8058+x8059))>>x8060);

    if (t139 != 16776882U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x8065 = UINT16_MAX;
	uint32_t x8066 = 1457U;
	int32_t x8067 = INT32_MAX;
	volatile uint32_t t140 = 28946436U;

    t140 = ((x8065*(x8066+x8067))>>x8068);

    if (t140 != 2242902608U) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x8153 = -1LL;
	uint64_t x8154 = UINT64_MAX;
	uint64_t t141 = 186104081960LLU;

    t141 = ((x8153*(x8154+x8155))>>x8156);

    if (t141 != 72057594037927808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x8185 = 64U;
	int32_t x8186 = -1;
	int32_t x8187 = 3;
	int16_t x8188 = 0;
	volatile uint32_t t142 = 129128U;

    t142 = ((x8185*(x8186+x8187))>>x8188);

    if (t142 != 128U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x8285 = -1;
	uint16_t x8288 = 3U;

    t143 = ((x8285*(x8286+x8287))>>x8288);

    if (t143 != 2305756821121834167LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x8321 = 0LL;
	int32_t x8322 = -1;
	static uint8_t x8323 = 0U;
	volatile int16_t x8324 = 0;
	static volatile int64_t t144 = -21LL;

    t144 = ((x8321*(x8322+x8323))>>x8324);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x8345 = 3018U;
	uint32_t x8346 = 127132U;
	uint16_t x8347 = 70U;
	uint32_t x8348 = 29U;
	uint32_t t145 = 26U;

    t145 = ((x8345*(x8346+x8347))>>x8348);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x8361 = INT16_MIN;
	int16_t x8362 = -3040;
	uint32_t x8363 = UINT32_MAX;
	uint8_t x8364 = 21U;
	uint32_t t146 = 28396U;

    t146 = ((x8361*(x8362+x8363))>>x8364);

    if (t146 != 47U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x8471 = -22984LL;
	uint32_t x8472 = 4U;
	uint64_t t147 = 10060LLU;

    t147 = ((x8469*(x8470+x8471))>>x8472);

    if (t147 != 143961573722589337LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x8529 = -1;
	static int8_t x8531 = 1;
	int32_t t148 = -328805;

    t148 = ((x8529*(x8530+x8531))>>x8532);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x8693 = 2U;
	int32_t x8694 = 256;
	static int8_t x8695 = INT8_MIN;
	static volatile int16_t x8696 = 1;
	int32_t t149 = 17;

    t149 = ((x8693*(x8694+x8695))>>x8696);

    if (t149 != 128) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x8705 = INT16_MAX;
	int8_t x8706 = INT8_MAX;
	int8_t x8707 = 6;
	volatile int8_t x8708 = 0;
	int32_t t150 = 164;

    t150 = ((x8705*(x8706+x8707))>>x8708);

    if (t150 != 4358011) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x8801 = 325U;
	int16_t x8802 = 58;
	uint32_t x8803 = 56068U;
	static uint32_t t151 = 51829U;

    t151 = ((x8801*(x8802+x8803))>>x8804);

    if (t151 != 18240950U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x8805 = 0U;
	uint32_t x8806 = 235300380U;
	uint16_t x8808 = 2U;
	uint32_t t152 = 874U;

    t152 = ((x8805*(x8806+x8807))>>x8808);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x8825 = -51;
	int16_t x8826 = INT16_MIN;
	static int16_t x8827 = -25;
	uint16_t x8828 = 0U;
	volatile int32_t t153 = -1729;

    t153 = ((x8825*(x8826+x8827))>>x8828);

    if (t153 != 1672443) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x8921 = 0U;
	uint8_t x8922 = 1U;
	uint8_t x8924 = 0U;

    t154 = ((x8921*(x8922+x8923))>>x8924);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x8942 = 0;
	uint8_t x8943 = 5U;
	int32_t t155 = -13;

    t155 = ((x8941*(x8942+x8943))>>x8944);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x9021 = 703U;
	uint8_t x9022 = UINT8_MAX;
	static volatile int16_t x9023 = 932;
	uint8_t x9024 = 3U;
	int32_t t156 = -6188;

    t156 = ((x9021*(x9022+x9023))>>x9024);

    if (t156 != 104307) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x9065 = 217U;
	volatile uint32_t x9066 = UINT32_MAX;
	volatile uint32_t x9067 = UINT32_MAX;
	volatile int8_t x9068 = 11;

    t157 = ((x9065*(x9066+x9067))>>x9068);

    if (t157 != 2097151U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x9073 = 15973767196726961LLU;
	int32_t x9076 = 2;
	static volatile uint64_t t158 = 3530LLU;

    t158 = ((x9073*(x9074+x9075))>>x9076);

    if (t158 != 1691277612283311812LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x9125 = UINT32_MAX;
	static uint32_t x9127 = 30U;
	uint16_t x9128 = 12U;
	volatile uint64_t t159 = 3410040LLU;

    t159 = ((x9125*(x9126+x9127))>>x9128);

    if (t159 != 30408703LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x9245 = 50LLU;
	uint8_t x9246 = UINT8_MAX;
	int8_t x9247 = INT8_MIN;
	volatile uint8_t x9248 = 19U;
	uint64_t t160 = 1039802371494871536LLU;

    t160 = ((x9245*(x9246+x9247))>>x9248);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x9305 = 1U;
	int32_t x9306 = -14;
	volatile int16_t x9307 = INT16_MIN;
	uint32_t x9308 = 20U;
	uint32_t t161 = 59U;

    t161 = ((x9305*(x9306+x9307))>>x9308);

    if (t161 != 4095U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x9382 = UINT32_MAX;
	int64_t x9383 = -21953902692471LL;
	static int8_t x9384 = 1;
	uint64_t t162 = 2152241279LLU;

    t162 = ((x9381*(x9382+x9383))>>x9384);

    if (t162 != 9223328137639325456LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x9413 = -1LL;
	int8_t x9414 = INT8_MAX;
	int16_t x9415 = INT16_MIN;
	uint16_t x9416 = 3U;
	volatile int64_t t163 = -655363146395481LL;

    t163 = ((x9413*(x9414+x9415))>>x9416);

    if (t163 != 4080LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x9457 = UINT64_MAX;
	int8_t x9458 = INT8_MAX;
	volatile int32_t x9459 = INT32_MIN;
	int32_t x9460 = 7;
	static volatile uint64_t t164 = 113974LLU;

    t164 = ((x9457*(x9458+x9459))>>x9460);

    if (t164 != 16777215LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x9474 = UINT64_MAX;
	volatile int16_t x9476 = 2;
	uint64_t t165 = 32794660LLU;

    t165 = ((x9473*(x9474+x9475))>>x9476);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x9485 = 15648U;
	uint64_t x9487 = 43992131384LLU;
	uint32_t x9488 = 4U;
	volatile uint64_t t166 = 1089618672708127LLU;

    t166 = ((x9485*(x9486+x9487))>>x9488);

    if (t166 != 43024272446448LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x9501 = -14;
	volatile int32_t x9502 = INT32_MIN;
	volatile uint64_t x9503 = 122LLU;
	volatile uint64_t t167 = 234179122LLU;

    t167 = ((x9501*(x9502+x9503))>>x9504);

    if (t167 != 1835007LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x9553 = -11459;
	volatile uint8_t x9554 = UINT8_MAX;
	uint16_t x9556 = 0U;
	int32_t t168 = -975364;

    t168 = ((x9553*(x9554+x9555))>>x9556);

    if (t168 != 372566467) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x9594 = -1LL;
	uint64_t x9595 = UINT64_MAX;
	int8_t x9596 = 1;
	uint64_t t169 = 1911LLU;

    t169 = ((x9593*(x9594+x9595))>>x9596);

    if (t169 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x9613 = -16586324;
	int16_t x9614 = INT16_MIN;
	volatile uint32_t x9615 = 56U;
	static uint8_t x9616 = 0U;
	uint32_t t170 = 1545414661U;

    t170 = ((x9613*(x9614+x9615))>>x9616);

    if (t170 != 1405951392U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x9773 = UINT8_MAX;
	static uint32_t x9774 = 2580729U;
	int32_t x9775 = INT32_MAX;
	static int32_t x9776 = 1;
	volatile uint32_t t171 = 2U;

    t171 = ((x9773*(x9774+x9775))>>x9776);

    if (t171 != 1402784644U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x9777 = INT16_MIN;
	volatile uint64_t x9779 = UINT64_MAX;
	int16_t x9780 = 2;
	volatile uint64_t t172 = 4918128732909LLU;

    t172 = ((x9777*(x9778+x9779))>>x9780);

    if (t172 != 16384LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x9845 = 21;
	static uint64_t x9846 = 941LLU;
	static uint8_t x9848 = 9U;

    t173 = ((x9845*(x9846+x9847))>>x9848);

    if (t173 != 38LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x9966 = INT8_MIN;
	static uint64_t x9967 = 523770571855LLU;

    t174 = ((x9965*(x9966+x9967))>>x9968);

    if (t174 != 72057332152642072LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x10085 = -1LL;
	uint16_t x10086 = UINT16_MAX;
	volatile uint64_t x10087 = 26018747908LLU;
	static int32_t x10088 = 1;
	volatile uint64_t t175 = 38042805998104LLU;

    t175 = ((x10085*(x10086+x10087))>>x10088);

    if (t175 != 9223372023845369086LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x10141 = -6;
	uint8_t x10143 = 10U;
	static uint16_t x10144 = 2U;

    t176 = ((x10141*(x10142+x10143))>>x10144);

    if (t176 != 1073741810U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x10153 = 21898777U;
	static int8_t x10155 = -1;
	uint8_t x10156 = 30U;
	uint32_t t177 = 55918U;

    t177 = ((x10153*(x10154+x10155))>>x10156);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x10297 = INT16_MAX;
	int16_t x10298 = -1;
	static uint64_t x10299 = 15891LLU;
	uint32_t x10300 = 9U;
	volatile uint64_t t178 = 57668LLU;

    t178 = ((x10297*(x10298+x10299))>>x10300);

    if (t178 != 1016928LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x10337 = INT8_MIN;
	volatile int16_t x10338 = -39;
	int8_t x10339 = INT8_MIN;
	int32_t x10340 = 27;

    t179 = ((x10337*(x10338+x10339))>>x10340);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x10433 = INT8_MIN;
	static int8_t x10434 = INT8_MIN;
	uint8_t x10435 = 73U;
	volatile int8_t x10436 = 1;

    t180 = ((x10433*(x10434+x10435))>>x10436);

    if (t180 != 3520) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x10469 = -1;
	uint64_t x10470 = 3635933471LLU;
	static uint64_t t181 = 1788LLU;

    t181 = ((x10469*(x10470+x10471))>>x10472);

    if (t181 != 2305843008490766812LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x10493 = -7;
	uint64_t x10495 = 3LLU;
	static uint8_t x10496 = 14U;
	uint64_t t182 = 57046700LLU;

    t182 = ((x10493*(x10494+x10495))>>x10496);

    if (t182 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x10633 = 0;
	int64_t x10634 = -54LL;
	int16_t x10635 = -1;
	uint32_t x10636 = 45U;
	int64_t t183 = -7774447707LL;

    t183 = ((x10633*(x10634+x10635))>>x10636);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x10677 = INT64_MAX;
	uint64_t x10679 = 100974LLU;
	static uint16_t x10680 = 10U;
	uint64_t t184 = 56032LLU;

    t184 = ((x10677*(x10678+x10679))>>x10680);

    if (t184 != 9007199254740893LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x10737 = UINT8_MAX;
	uint8_t x10738 = UINT8_MAX;
	volatile uint8_t x10739 = UINT8_MAX;
	int8_t x10740 = 1;
	int32_t t185 = 105928715;

    t185 = ((x10737*(x10738+x10739))>>x10740);

    if (t185 != 65025) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x10788 = 11U;
	int32_t t186 = 1;

    t186 = ((x10785*(x10786+x10787))>>x10788);

    if (t186 != 128) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x10873 = -1;
	static int32_t x10874 = INT32_MIN;
	uint8_t x10876 = 29U;
	int32_t t187 = 9;

    t187 = ((x10873*(x10874+x10875))>>x10876);

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x10889 = 0U;
	int64_t x10890 = -1LL;
	volatile uint64_t t188 = 9976684839LLU;

    t188 = ((x10889*(x10890+x10891))>>x10892);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x10950 = -1;
	int8_t x10951 = -1;
	uint32_t x10952 = 21U;
	int32_t t189 = -33691718;

    t189 = ((x10949*(x10950+x10951))>>x10952);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x11082 = INT8_MAX;
	volatile int64_t x11083 = -1LL;
	uint8_t x11084 = 15U;
	uint64_t t190 = 26743443LLU;

    t190 = ((x11081*(x11082+x11083))>>x11084);

    if (t190 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x11109 = 24U;
	uint32_t x11110 = 1674695310U;
	int16_t x11112 = 15;
	uint32_t t191 = 202U;

    t191 = ((x11109*(x11110+x11111))>>x11112);

    if (t191 != 46935U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x11125 = 718LLU;
	int16_t x11126 = INT16_MIN;
	static volatile int64_t x11127 = 832382LL;
	volatile uint16_t x11128 = 1U;

    t192 = ((x11125*(x11126+x11127))>>x11128);

    if (t192 != 287061426LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x11134 = 13U;
	static uint64_t x11135 = 20LLU;
	uint8_t x11136 = 4U;
	uint64_t t193 = 3371LLU;

    t193 = ((x11133*(x11134+x11135))>>x11136);

    if (t193 != 121LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x11153 = INT8_MAX;
	uint32_t x11154 = 0U;
	int64_t x11155 = 4139800627992813LL;
	int16_t x11156 = 22;
	int64_t t194 = 33425449LL;

    t194 = ((x11153*(x11154+x11155))>>x11156);

    if (t194 != 125349683703LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x11209 = 1006433LLU;
	int8_t x11210 = INT8_MIN;
	volatile uint16_t x11212 = 0U;
	uint64_t t195 = 1808258LLU;

    t195 = ((x11209*(x11210+x11211))>>x11212);

    if (t195 != 18446744073579721759LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x11273 = -1;
	volatile int8_t x11274 = 10;
	int32_t x11276 = 21;
	volatile uint64_t t196 = 6417LLU;

    t196 = ((x11273*(x11274+x11275))>>x11276);

    if (t196 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x11281 = UINT32_MAX;
	volatile uint64_t x11282 = UINT64_MAX;
	volatile uint8_t x11284 = 14U;

    t197 = ((x11281*(x11282+x11283))>>x11284);

    if (t197 != 56473419762LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x11405 = UINT32_MAX;
	static int8_t x11406 = -1;
	static uint8_t x11408 = 1U;

    t198 = ((x11405*(x11406+x11407))>>x11408);

    if (t198 != 3459596156122LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x11697 = 4U;
	uint16_t x11698 = UINT16_MAX;
	uint8_t x11700 = 21U;

    t199 = ((x11697*(x11698+x11699))>>x11700);

    if (t199 != 0U) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

