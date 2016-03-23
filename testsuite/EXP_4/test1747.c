
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

int8_t x11 = INT8_MAX;
uint16_t x30 = 1U;
uint32_t x32 = UINT32_MAX;
volatile uint8_t x34 = 3U;
static int64_t x35 = INT64_MAX;
uint64_t x41 = UINT64_MAX;
uint64_t x43 = 184320LLU;
volatile uint64_t t3 = 198852293LLU;
int32_t x105 = INT32_MAX;
int32_t t4 = -612670949;
int64_t x260 = INT64_MIN;
volatile int32_t t7 = -16;
int8_t x268 = INT8_MAX;
int8_t x295 = INT8_MIN;
uint64_t t11 = 650408LLU;
int32_t t13 = 39;
uint16_t x557 = UINT16_MAX;
volatile uint16_t x622 = 0U;
volatile int32_t x624 = INT32_MIN;
int8_t x670 = 1;
uint8_t x671 = 37U;
static int32_t x673 = INT32_MAX;
int32_t x706 = 16;
volatile uint16_t x729 = UINT16_MAX;
volatile uint8_t x730 = 14U;
static int32_t t20 = 1;
volatile int8_t x946 = 0;
int16_t x948 = 38;
uint8_t x977 = 120U;
int8_t x979 = 4;
static int16_t x1025 = 3773;
uint16_t x1028 = 12U;
int16_t x1047 = INT16_MIN;
volatile uint32_t t25 = 32979252U;
static volatile uint8_t x1069 = UINT8_MAX;
static volatile int32_t x1097 = 295200;
static int16_t x1227 = INT16_MIN;
uint64_t t29 = 52749LLU;
int32_t t30 = 13419;
volatile uint64_t x1249 = 15740845701996LLU;
static volatile int32_t t32 = 255276;
int32_t t33 = -1;
static volatile uint64_t t35 = 78LLU;
static int8_t x1428 = 1;
int16_t x1462 = 27;
uint32_t x1464 = 195U;
int16_t x1497 = INT16_MAX;
static volatile int32_t t38 = 6478;
static uint64_t x1568 = 21LLU;
uint64_t x1661 = 35633757858436019LLU;
int8_t x1768 = -50;
int32_t x1893 = INT32_MAX;
int16_t x1895 = INT16_MIN;
volatile int8_t x1938 = 2;
int32_t x1944 = INT32_MIN;
int16_t x1995 = 42;
volatile uint16_t x2209 = UINT16_MAX;
uint32_t x2210 = 28U;
volatile int64_t x2261 = 0LL;
uint8_t x2262 = 1U;
int16_t x2263 = 11819;
uint64_t x2285 = UINT64_MAX;
uint16_t x2286 = 6U;
uint8_t x2302 = 5U;
volatile int32_t x2303 = 227716056;
int32_t t57 = 1516;
uint32_t x2470 = 0U;
static int16_t x2471 = -1;
volatile uint64_t t59 = UINT64_MAX;
static int64_t x2527 = 4LL;
int16_t x2755 = INT16_MAX;
uint8_t x2974 = 2U;
uint32_t t64 = 514692077U;
uint16_t x3065 = 13823U;
volatile int16_t x3069 = 1680;
int32_t x3162 = 0;
int8_t x3342 = 2;
uint64_t x3343 = 216676LLU;
uint8_t x3366 = 1U;
int16_t x3368 = -1;
uint16_t x3382 = 21U;
int16_t x3461 = 409;
volatile int32_t t74 = -93;
uint64_t x3473 = 626556394881143LLU;
static uint16_t x3474 = 0U;
uint16_t x3481 = 29517U;
volatile int8_t x3582 = 1;
int16_t x3587 = INT16_MAX;
static int16_t x3603 = 4;
volatile uint32_t t81 = 190328514U;
int8_t x3649 = 11;
volatile int32_t t85 = -19;
int64_t x3945 = INT64_MAX;
int32_t t88 = -47767;
volatile uint64_t x4023 = 3743660162424614673LLU;
uint16_t x4024 = 15089U;
volatile uint32_t t89 = 1U;
volatile int16_t x4060 = -1;
uint64_t x4105 = 126351LLU;
int16_t x4108 = INT16_MAX;
volatile uint32_t x4128 = UINT32_MAX;
uint16_t x4317 = 462U;
volatile int32_t t96 = 2024;
uint32_t x4405 = 6U;
static int16_t x4406 = 4;
int64_t x4407 = -1LL;
int64_t x4408 = -1LL;
int16_t x4505 = INT16_MAX;
static int16_t x4517 = INT16_MAX;
static volatile int16_t x4633 = INT16_MAX;
int32_t x4636 = INT32_MIN;
static uint8_t x4637 = 52U;
volatile uint8_t x4845 = 0U;
uint64_t x4848 = 29LLU;
volatile int64_t x5045 = 12563755683863LL;
uint64_t x5073 = 8007LLU;
volatile int16_t x5403 = 1;
volatile int32_t t109 = -239695;
uint8_t x5405 = UINT8_MAX;
int16_t x5416 = -7876;
static uint32_t x5755 = 2709U;
volatile int32_t t114 = 3899;
static uint8_t x5835 = UINT8_MAX;
int8_t x5836 = 43;
uint64_t x5914 = 2LLU;
static int16_t x5915 = 4;
int16_t x5916 = INT16_MIN;
volatile int32_t t117 = -14503847;
static int8_t x5918 = 1;
static int32_t t118 = 0;
static int64_t x5931 = INT64_MAX;
volatile int16_t x5932 = -1;
int16_t x5943 = INT16_MIN;
int16_t x5944 = -1;
uint16_t x5958 = 2U;
int8_t x6002 = 1;
int8_t x6220 = -1;
int16_t x6305 = 234;
static volatile uint8_t x6306 = 3U;
uint16_t x6308 = 9826U;
volatile int64_t x6357 = 1914215866142417931LL;
int16_t x6358 = 0;
int64_t t129 = 13152827222806LL;
uint32_t x6658 = 0U;
int32_t t132 = -10028364;
static int8_t x6954 = 30;
static uint64_t x6955 = UINT64_MAX;
int64_t t135 = -33077699659709LL;
uint32_t x7159 = 493U;
static uint8_t x7198 = 2U;
static uint64_t x7213 = UINT64_MAX;
uint64_t t141 = 13140849LLU;
static volatile int32_t x7235 = INT32_MIN;
int16_t x7275 = 35;
static volatile int64_t t144 = -639435LL;
uint32_t x7277 = 4299271U;
uint8_t x7309 = 109U;
uint8_t x7310 = 0U;
uint16_t x7522 = 1U;
volatile int64_t t151 = -109365485797LL;
int16_t x7680 = 55;
volatile int32_t x7701 = 6185133;
int8_t x7703 = -1;
int64_t x7704 = -1LL;
volatile int32_t x7762 = 0;
int8_t x7770 = 0;
uint8_t x7790 = 1U;
int64_t x7791 = -613237LL;
volatile int32_t t157 = 6570;
volatile int32_t x7918 = 23;
static int8_t x7920 = -1;
static volatile int64_t x7940 = -15153877LL;
int8_t x8201 = 39;
uint32_t x8283 = 11967U;
int32_t x8284 = INT32_MIN;
uint8_t x8350 = 1U;
uint8_t x8354 = 3U;
static uint32_t x8364 = 1930U;
int8_t x8448 = INT8_MIN;
static volatile uint64_t t171 = 746236LLU;
uint8_t x8645 = UINT8_MAX;
volatile uint8_t x8676 = 10U;
static int32_t x8680 = INT32_MIN;
volatile int8_t x8928 = 2;
uint64_t x8939 = 7541242LLU;
volatile int32_t x9108 = INT32_MIN;
uint32_t x9330 = 1U;
int8_t x9499 = INT8_MIN;
volatile uint32_t t186 = UINT32_MAX;
int8_t x9535 = -1;
int8_t x9595 = -1;
int8_t x9596 = 32;
uint8_t x9606 = 1U;
int32_t x9607 = -1;
int8_t x9643 = -9;
int8_t x9644 = 0;
uint32_t x9680 = 800U;
int16_t x9787 = -1;
volatile uint16_t x9819 = 47U;
static int32_t t195 = -119861;
int32_t x9987 = 3411190;
static volatile int8_t x10040 = INT8_MIN;
int16_t x10061 = 6;
uint8_t x10062 = 0U;
int32_t t199 = -4;


void f0(void) {
    	int64_t x9 = 2257LL;
	static uint8_t x10 = 1U;
	int64_t x12 = 1LL;
	static int64_t t0 = 35022458015896539LL;

    t0 = (x9>>(x10|(x11>x12)));

    if (t0 != 1128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x31 = -32162;
	volatile int32_t t1 = -80;

    t1 = (x29>>(x30|(x31>x32)));

    if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x33 = INT64_MAX;
	static int32_t x36 = INT32_MIN;
	volatile int64_t t2 = -2544696LL;

    t2 = (x33>>(x34|(x35>x36)));

    if (t2 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x42 = 6U;
	uint64_t x44 = 1647602927529768LLU;

    t3 = (x41>>(x42|(x43>x44)));

    if (t3 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x106 = 2;
	int8_t x107 = -1;
	uint8_t x108 = 104U;

    t4 = (x105>>(x106|(x107>x108)));

    if (t4 != 536870911) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x234 = 22;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;
	int32_t t5 = 38361928;

    t5 = (x233>>(x234|(x235>x236)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x245 = INT64_MAX;
	int8_t x246 = 0;
	int64_t x247 = 1046196509690946LL;
	int16_t x248 = 1596;
	volatile int64_t t6 = 424936371172LL;

    t6 = (x245>>(x246|(x247>x248)));

    if (t6 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x257 = 0;
	static int8_t x258 = 2;
	static uint32_t x259 = UINT32_MAX;

    t7 = (x257>>(x258|(x259>x260)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x265 = 1;
	int32_t x266 = 0;
	volatile uint32_t x267 = UINT32_MAX;
	int32_t t8 = 12561;

    t8 = (x265>>(x266|(x267>x268)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x293 = 31;
	uint16_t x294 = 5U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t9 = -34127813;

    t9 = (x293>>(x294|(x295>x296)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x373 = INT64_MAX;
	uint8_t x374 = 5U;
	int16_t x375 = -1;
	static int8_t x376 = 0;
	int64_t t10 = -176LL;

    t10 = (x373>>(x374|(x375>x376)));

    if (t10 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x425 = 15605756649750206LLU;
	int8_t x426 = 2;
	volatile int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MAX;

    t11 = (x425>>(x426|(x427>x428)));

    if (t11 != 3901439162437551LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x441 = UINT16_MAX;
	static int16_t x442 = 26;
	uint32_t x443 = 31U;
	uint64_t x444 = 38926LLU;
	int32_t t12 = -3686;

    t12 = (x441>>(x442|(x443>x444)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x473 = 12150U;
	uint64_t x474 = 1LLU;
	static int8_t x475 = 1;
	volatile int8_t x476 = -6;

    t13 = (x473>>(x474|(x475>x476)));

    if (t13 != 6075) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x558 = 1U;
	int32_t x559 = 1;
	int64_t x560 = 26991056984273LL;
	volatile int32_t t14 = -13;

    t14 = (x557>>(x558|(x559>x560)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x621 = 2U;
	static volatile uint64_t x623 = UINT64_MAX;
	int32_t t15 = -337;

    t15 = (x621>>(x622|(x623>x624)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int64_t x672 = 15525836982241LL;
	static int32_t t16 = -534455;

    t16 = (x669>>(x670|(x671>x672)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x674 = 1;
	int8_t x675 = 1;
	uint32_t x676 = 12871U;
	volatile int32_t t17 = 1201;

    t17 = (x673>>(x674|(x675>x676)));

    if (t17 != 1073741823) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x685 = 12;
	uint8_t x686 = 6U;
	static uint32_t x687 = 3509U;
	int16_t x688 = INT16_MAX;
	volatile int32_t t18 = 452550876;

    t18 = (x685>>(x686|(x687>x688)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x705 = INT64_MAX;
	uint64_t x707 = 362LLU;
	volatile int16_t x708 = INT16_MIN;
	int64_t t19 = 15LL;

    t19 = (x705>>(x706|(x707>x708)));

    if (t19 != 140737488355327LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x731 = -1;
	int16_t x732 = INT16_MIN;

    t20 = (x729>>(x730|(x731>x732)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x865 = UINT64_MAX;
	int32_t x866 = 1;
	uint16_t x867 = 8U;
	volatile int64_t x868 = INT64_MAX;
	volatile uint64_t t21 = 0LLU;

    t21 = (x865>>(x866|(x867>x868)));

    if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x945 = 59;
	volatile int8_t x947 = 53;
	int32_t t22 = -7415069;

    t22 = (x945>>(x946|(x947>x948)));

    if (t22 != 29) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x978 = 4U;
	uint64_t x980 = 0LLU;
	volatile int32_t t23 = 2;

    t23 = (x977>>(x978|(x979>x980)));

    if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1026 = 30U;
	uint64_t x1027 = 7876901425LLU;
	static volatile int32_t t24 = -607485;

    t24 = (x1025>>(x1026|(x1027>x1028)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x1045 = UINT32_MAX;
	uint8_t x1046 = 6U;
	int8_t x1048 = INT8_MAX;

    t25 = (x1045>>(x1046|(x1047>x1048)));

    if (t25 != 67108863U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1070 = 14U;
	int16_t x1071 = INT16_MIN;
	static int64_t x1072 = INT64_MIN;
	volatile int32_t t26 = -22273;

    t26 = (x1069>>(x1070|(x1071>x1072)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x1098 = 7U;
	static volatile uint8_t x1099 = 104U;
	static int64_t x1100 = INT64_MIN;
	int32_t t27 = -231135621;

    t27 = (x1097>>(x1098|(x1099>x1100)));

    if (t27 != 2306) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1121 = INT16_MAX;
	volatile int32_t x1122 = 2;
	uint8_t x1123 = 7U;
	int16_t x1124 = INT16_MIN;
	static int32_t t28 = -152686;

    t28 = (x1121>>(x1122|(x1123>x1124)));

    if (t28 != 4095) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1225 = UINT64_MAX;
	int8_t x1226 = 24;
	uint64_t x1228 = UINT64_MAX;

    t29 = (x1225>>(x1226|(x1227>x1228)));

    if (t29 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x1241 = 12U;
	static uint16_t x1242 = 0U;
	int32_t x1243 = -1;
	int16_t x1244 = INT16_MIN;

    t30 = (x1241>>(x1242|(x1243>x1244)));

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1250 = 0;
	static int64_t x1251 = -1LL;
	int64_t x1252 = -1LL;
	volatile uint64_t t31 = 568199781169734228LLU;

    t31 = (x1249>>(x1250|(x1251>x1252)));

    if (t31 != 15740845701996LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1305 = INT16_MAX;
	int8_t x1306 = 0;
	int64_t x1307 = -1LL;
	int8_t x1308 = INT8_MAX;

    t32 = (x1305>>(x1306|(x1307>x1308)));

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1357 = 30U;
	uint16_t x1358 = 18U;
	static int16_t x1359 = INT16_MIN;
	volatile int64_t x1360 = INT64_MIN;

    t33 = (x1357>>(x1358|(x1359>x1360)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1385 = 15171516LL;
	volatile uint8_t x1386 = 17U;
	static int16_t x1387 = 7;
	int16_t x1388 = INT16_MIN;
	volatile int64_t t34 = 3834406LL;

    t34 = (x1385>>(x1386|(x1387>x1388)));

    if (t34 != 115LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x1401 = 603978238961792LLU;
	uint8_t x1402 = 0U;
	int32_t x1403 = -1;
	volatile int32_t x1404 = -1;

    t35 = (x1401>>(x1402|(x1403>x1404)));

    if (t35 != 603978238961792LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1425 = 0;
	static uint8_t x1426 = 3U;
	int16_t x1427 = INT16_MAX;
	volatile int32_t t36 = 30348960;

    t36 = (x1425>>(x1426|(x1427>x1428)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x1461 = 13U;
	volatile int16_t x1463 = -1;
	int32_t t37 = 51;

    t37 = (x1461>>(x1462|(x1463>x1464)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x1498 = 0U;
	int8_t x1499 = INT8_MIN;
	static int32_t x1500 = -14568;

    t38 = (x1497>>(x1498|(x1499>x1500)));

    if (t38 != 16383) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1565 = INT8_MAX;
	uint8_t x1566 = 7U;
	uint8_t x1567 = 7U;
	static volatile int32_t t39 = 5;

    t39 = (x1565>>(x1566|(x1567>x1568)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1637 = 1874U;
	static uint16_t x1638 = 0U;
	int8_t x1639 = INT8_MAX;
	int32_t x1640 = INT32_MAX;
	int32_t t40 = 56;

    t40 = (x1637>>(x1638|(x1639>x1640)));

    if (t40 != 1874) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x1662 = 1;
	int64_t x1663 = INT64_MAX;
	int32_t x1664 = -1;
	uint64_t t41 = 49375422413195LLU;

    t41 = (x1661>>(x1662|(x1663>x1664)));

    if (t41 != 17816878929218009LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x1765 = 4613218436054LLU;
	volatile int8_t x1766 = 1;
	volatile uint32_t x1767 = 150444U;
	volatile uint64_t t42 = 122360775656LLU;

    t42 = (x1765>>(x1766|(x1767>x1768)));

    if (t42 != 2306609218027LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1821 = INT32_MAX;
	int8_t x1822 = 6;
	int64_t x1823 = INT64_MIN;
	int16_t x1824 = -1;
	int32_t t43 = 28422;

    t43 = (x1821>>(x1822|(x1823>x1824)));

    if (t43 != 33554431) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x1829 = UINT32_MAX;
	volatile uint8_t x1830 = 8U;
	static uint8_t x1831 = 1U;
	int16_t x1832 = INT16_MAX;
	uint32_t t44 = 537735119U;

    t44 = (x1829>>(x1830|(x1831>x1832)));

    if (t44 != 16777215U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x1894 = 11;
	int32_t x1896 = -27;
	static volatile int32_t t45 = -1;

    t45 = (x1893>>(x1894|(x1895>x1896)));

    if (t45 != 1048575) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1897 = 10;
	volatile uint8_t x1898 = 0U;
	int16_t x1899 = INT16_MIN;
	volatile uint32_t x1900 = UINT32_MAX;
	int32_t t46 = -899;

    t46 = (x1897>>(x1898|(x1899>x1900)));

    if (t46 != 10) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x1913 = 108U;
	static volatile uint8_t x1914 = 1U;
	volatile int64_t x1915 = INT64_MIN;
	uint16_t x1916 = 66U;
	static int32_t t47 = 849146;

    t47 = (x1913>>(x1914|(x1915>x1916)));

    if (t47 != 54) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1937 = 2;
	int8_t x1939 = INT8_MAX;
	int32_t x1940 = -1;
	int32_t t48 = 114;

    t48 = (x1937>>(x1938|(x1939>x1940)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x1941 = 1U;
	uint8_t x1942 = 0U;
	int64_t x1943 = INT64_MIN;
	int32_t t49 = 559628;

    t49 = (x1941>>(x1942|(x1943>x1944)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x1993 = UINT16_MAX;
	uint16_t x1994 = 0U;
	int16_t x1996 = INT16_MAX;
	volatile int32_t t50 = 47;

    t50 = (x1993>>(x1994|(x1995>x1996)));

    if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x2009 = 30U;
	volatile int8_t x2010 = 1;
	int8_t x2011 = 38;
	static uint8_t x2012 = 1U;
	volatile int32_t t51 = 459106;

    t51 = (x2009>>(x2010|(x2011>x2012)));

    if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x2101 = UINT8_MAX;
	uint16_t x2102 = 6U;
	static int64_t x2103 = INT64_MAX;
	volatile int32_t x2104 = -6100499;
	volatile int32_t t52 = 7;

    t52 = (x2101>>(x2102|(x2103>x2104)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x2141 = INT64_MAX;
	static volatile uint8_t x2142 = 14U;
	static int32_t x2143 = -58;
	int32_t x2144 = INT32_MIN;
	int64_t t53 = -2355793724689125LL;

    t53 = (x2141>>(x2142|(x2143>x2144)));

    if (t53 != 281474976710655LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2211 = -1;
	static uint32_t x2212 = 27286U;
	int32_t t54 = 382590;

    t54 = (x2209>>(x2210|(x2211>x2212)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2264 = INT16_MAX;
	volatile int64_t t55 = 40LL;

    t55 = (x2261>>(x2262|(x2263>x2264)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x2287 = -1;
	int16_t x2288 = -1;
	static volatile uint64_t t56 = 3770331LLU;

    t56 = (x2285>>(x2286|(x2287>x2288)));

    if (t56 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x2301 = INT16_MAX;
	int8_t x2304 = -1;

    t57 = (x2301>>(x2302|(x2303>x2304)));

    if (t57 != 1023) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x2421 = 1U;
	int32_t x2422 = 1;
	int8_t x2423 = INT8_MAX;
	uint8_t x2424 = UINT8_MAX;
	volatile int32_t t58 = -40;

    t58 = (x2421>>(x2422|(x2423>x2424)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x2469 = UINT64_MAX;
	int8_t x2472 = INT8_MAX;

    t59 = (x2469>>(x2470|(x2471>x2472)));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x2525 = 33U;
	int8_t x2526 = 3;
	static uint32_t x2528 = UINT32_MAX;
	volatile int32_t t60 = 22;

    t60 = (x2525>>(x2526|(x2527>x2528)));

    if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2669 = INT64_MAX;
	static uint16_t x2670 = 6U;
	int64_t x2671 = INT64_MIN;
	uint16_t x2672 = 7499U;
	int64_t t61 = -3LL;

    t61 = (x2669>>(x2670|(x2671>x2672)));

    if (t61 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2721 = 53;
	uint32_t x2722 = 0U;
	int32_t x2723 = 12;
	int16_t x2724 = -13816;
	int32_t t62 = -261;

    t62 = (x2721>>(x2722|(x2723>x2724)));

    if (t62 != 26) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x2753 = 644860314U;
	uint16_t x2754 = 19U;
	int32_t x2756 = -1;
	uint32_t t63 = 651959764U;

    t63 = (x2753>>(x2754|(x2755>x2756)));

    if (t63 != 1229U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x2973 = 0U;
	static volatile uint64_t x2975 = 1528178682416LLU;
	int8_t x2976 = INT8_MAX;

    t64 = (x2973>>(x2974|(x2975>x2976)));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x3057 = 4U;
	static volatile int16_t x3058 = 10;
	uint32_t x3059 = 478286U;
	volatile int8_t x3060 = INT8_MAX;
	volatile int32_t t65 = 287481;

    t65 = (x3057>>(x3058|(x3059>x3060)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x3066 = 7;
	int8_t x3067 = INT8_MIN;
	int8_t x3068 = 10;
	volatile int32_t t66 = -12350863;

    t66 = (x3065>>(x3066|(x3067>x3068)));

    if (t66 != 107) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x3070 = 3U;
	volatile int16_t x3071 = -1;
	uint16_t x3072 = UINT16_MAX;
	static volatile int32_t t67 = -7912550;

    t67 = (x3069>>(x3070|(x3071>x3072)));

    if (t67 != 210) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3161 = 9823;
	int8_t x3163 = -1;
	uint8_t x3164 = 5U;
	volatile int32_t t68 = 583049126;

    t68 = (x3161>>(x3162|(x3163>x3164)));

    if (t68 != 9823) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x3301 = 89U;
	uint16_t x3302 = 0U;
	int32_t x3303 = 156853;
	int32_t x3304 = 14;
	static volatile int32_t t69 = -1518;

    t69 = (x3301>>(x3302|(x3303>x3304)));

    if (t69 != 44) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x3341 = 520U;
	uint64_t x3344 = 1562LLU;
	int32_t t70 = 2278110;

    t70 = (x3341>>(x3342|(x3343>x3344)));

    if (t70 != 65) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x3365 = 112U;
	static int16_t x3367 = 2;
	int32_t t71 = -10;

    t71 = (x3365>>(x3366|(x3367>x3368)));

    if (t71 != 56) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3381 = 8;
	int16_t x3383 = INT16_MIN;
	uint16_t x3384 = 298U;
	volatile int32_t t72 = -6707565;

    t72 = (x3381>>(x3382|(x3383>x3384)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x3462 = 3U;
	static int32_t x3463 = -65417426;
	int32_t x3464 = -1;
	static volatile int32_t t73 = 48;

    t73 = (x3461>>(x3462|(x3463>x3464)));

    if (t73 != 51) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x3465 = INT16_MAX;
	volatile uint8_t x3466 = 1U;
	int32_t x3467 = -23750197;
	int16_t x3468 = INT16_MIN;

    t74 = (x3465>>(x3466|(x3467>x3468)));

    if (t74 != 16383) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x3475 = -6540572;
	int8_t x3476 = -1;
	static uint64_t t75 = 292LLU;

    t75 = (x3473>>(x3474|(x3475>x3476)));

    if (t75 != 626556394881143LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x3482 = 0U;
	int8_t x3483 = INT8_MIN;
	int16_t x3484 = -23;
	volatile int32_t t76 = 10026;

    t76 = (x3481>>(x3482|(x3483>x3484)));

    if (t76 != 29517) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x3577 = 41U;
	volatile uint16_t x3578 = 0U;
	static uint8_t x3579 = 36U;
	int16_t x3580 = INT16_MAX;
	volatile int32_t t77 = -429;

    t77 = (x3577>>(x3578|(x3579>x3580)));

    if (t77 != 41) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x3581 = 16165564LL;
	static int32_t x3583 = 236062904;
	volatile int64_t x3584 = INT64_MAX;
	static int64_t t78 = -20198905388948LL;

    t78 = (x3581>>(x3582|(x3583>x3584)));

    if (t78 != 8082782LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x3585 = UINT32_MAX;
	uint8_t x3586 = 12U;
	uint16_t x3588 = UINT16_MAX;
	uint32_t t79 = 0U;

    t79 = (x3585>>(x3586|(x3587>x3588)));

    if (t79 != 1048575U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x3601 = 358849681LLU;
	volatile int8_t x3602 = 2;
	int8_t x3604 = -1;
	uint64_t t80 = 24725450LLU;

    t80 = (x3601>>(x3602|(x3603>x3604)));

    if (t80 != 44856210LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x3605 = 357429U;
	int16_t x3606 = 4;
	int64_t x3607 = INT64_MIN;
	static volatile int16_t x3608 = INT16_MIN;

    t81 = (x3605>>(x3606|(x3607>x3608)));

    if (t81 != 22339U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x3650 = 31U;
	int64_t x3651 = -1LL;
	int16_t x3652 = -14330;
	static int32_t t82 = 0;

    t82 = (x3649>>(x3650|(x3651>x3652)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x3725 = 8086U;
	uint8_t x3726 = 4U;
	int32_t x3727 = INT32_MIN;
	int64_t x3728 = INT64_MIN;
	int32_t t83 = 12891;

    t83 = (x3725>>(x3726|(x3727>x3728)));

    if (t83 != 252) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x3773 = 412794;
	static volatile int16_t x3774 = 3;
	volatile uint32_t x3775 = 28985879U;
	uint8_t x3776 = UINT8_MAX;
	volatile int32_t t84 = -39;

    t84 = (x3773>>(x3774|(x3775>x3776)));

    if (t84 != 51599) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x3833 = INT8_MAX;
	int8_t x3834 = 24;
	uint16_t x3835 = UINT16_MAX;
	static int8_t x3836 = -1;

    t85 = (x3833>>(x3834|(x3835>x3836)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x3893 = 1U;
	static uint8_t x3894 = 5U;
	uint32_t x3895 = 22U;
	uint8_t x3896 = 9U;
	uint32_t t86 = 29015557U;

    t86 = (x3893>>(x3894|(x3895>x3896)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x3946 = 9U;
	int8_t x3947 = INT8_MAX;
	volatile int8_t x3948 = INT8_MIN;
	int64_t t87 = 1799508010158895LL;

    t87 = (x3945>>(x3946|(x3947>x3948)));

    if (t87 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x4017 = 851;
	uint16_t x4018 = 6U;
	volatile int64_t x4019 = INT64_MIN;
	volatile int8_t x4020 = INT8_MAX;

    t88 = (x4017>>(x4018|(x4019>x4020)));

    if (t88 != 13) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x4021 = 285U;
	uint16_t x4022 = 6U;

    t89 = (x4021>>(x4022|(x4023>x4024)));

    if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x4045 = 56;
	int8_t x4046 = 2;
	volatile int64_t x4047 = 3032271LL;
	volatile int16_t x4048 = -241;
	volatile int32_t t90 = -96720;

    t90 = (x4045>>(x4046|(x4047>x4048)));

    if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x4057 = 3974U;
	int16_t x4058 = 3;
	uint8_t x4059 = UINT8_MAX;
	int32_t t91 = 15122;

    t91 = (x4057>>(x4058|(x4059>x4060)));

    if (t91 != 496) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x4106 = 26U;
	uint16_t x4107 = 1013U;
	volatile uint64_t t92 = 600LLU;

    t92 = (x4105>>(x4106|(x4107>x4108)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x4125 = UINT16_MAX;
	int16_t x4126 = 1;
	int16_t x4127 = 1642;
	int32_t t93 = -1;

    t93 = (x4125>>(x4126|(x4127>x4128)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x4181 = 1;
	int8_t x4182 = 1;
	int32_t x4183 = -356799176;
	static int16_t x4184 = -1;
	volatile int32_t t94 = -1382021;

    t94 = (x4181>>(x4182|(x4183>x4184)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x4297 = UINT8_MAX;
	int32_t x4298 = 1;
	volatile uint8_t x4299 = UINT8_MAX;
	int16_t x4300 = INT16_MIN;
	static volatile int32_t t95 = -48663007;

    t95 = (x4297>>(x4298|(x4299>x4300)));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x4318 = 0;
	static uint16_t x4319 = UINT16_MAX;
	static volatile int64_t x4320 = -17675269109786259LL;

    t96 = (x4317>>(x4318|(x4319>x4320)));

    if (t96 != 231) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x4381 = 3U;
	uint8_t x4382 = 3U;
	int32_t x4383 = 4;
	int16_t x4384 = INT16_MIN;
	volatile int32_t t97 = 441;

    t97 = (x4381>>(x4382|(x4383>x4384)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t t98 = 7528U;

    t98 = (x4405>>(x4406|(x4407>x4408)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x4473 = UINT64_MAX;
	uint8_t x4474 = 40U;
	uint32_t x4475 = 34993808U;
	static uint16_t x4476 = UINT16_MAX;
	volatile uint64_t t99 = 918957630391LLU;

    t99 = (x4473>>(x4474|(x4475>x4476)));

    if (t99 != 8388607LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x4506 = 7U;
	volatile int64_t x4507 = -1LL;
	static int16_t x4508 = INT16_MIN;
	int32_t t100 = -185;

    t100 = (x4505>>(x4506|(x4507>x4508)));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x4518 = 4U;
	int8_t x4519 = INT8_MIN;
	int32_t x4520 = INT32_MAX;
	static int32_t t101 = -51595;

    t101 = (x4517>>(x4518|(x4519>x4520)));

    if (t101 != 2047) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x4629 = 2U;
	static uint8_t x4630 = 0U;
	static int8_t x4631 = INT8_MIN;
	uint32_t x4632 = UINT32_MAX;
	volatile int32_t t102 = -112154055;

    t102 = (x4629>>(x4630|(x4631>x4632)));

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x4634 = 1U;
	int32_t x4635 = -1;
	volatile int32_t t103 = 73654178;

    t103 = (x4633>>(x4634|(x4635>x4636)));

    if (t103 != 16383) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x4638 = 8U;
	uint8_t x4639 = 82U;
	int8_t x4640 = 26;
	static volatile int32_t t104 = 2864;

    t104 = (x4637>>(x4638|(x4639>x4640)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x4846 = 4;
	volatile uint8_t x4847 = 36U;
	volatile int32_t t105 = -25;

    t105 = (x4845>>(x4846|(x4847>x4848)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5046 = 15U;
	int8_t x5047 = INT8_MIN;
	int64_t x5048 = INT64_MIN;
	static int64_t t106 = -4980148915712551LL;

    t106 = (x5045>>(x5046|(x5047>x5048)));

    if (t106 != 383415395LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x5074 = 9U;
	static volatile uint8_t x5075 = 3U;
	uint32_t x5076 = UINT32_MAX;
	uint64_t t107 = 209179246LLU;

    t107 = (x5073>>(x5074|(x5075>x5076)));

    if (t107 != 15LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x5233 = 20399757LL;
	volatile uint8_t x5234 = 27U;
	static int64_t x5235 = INT64_MIN;
	uint64_t x5236 = 88398292LLU;
	int64_t t108 = 2160462LL;

    t108 = (x5233>>(x5234|(x5235>x5236)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x5401 = 36239768;
	uint64_t x5402 = 4LLU;
	uint64_t x5404 = 7140887248071047422LLU;

    t109 = (x5401>>(x5402|(x5403>x5404)));

    if (t109 != 2264985) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x5406 = 1U;
	volatile int16_t x5407 = INT16_MAX;
	static int16_t x5408 = INT16_MAX;
	int32_t t110 = -6014843;

    t110 = (x5405>>(x5406|(x5407>x5408)));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x5409 = INT16_MAX;
	uint8_t x5410 = 19U;
	volatile int32_t x5411 = -1;
	volatile int32_t x5412 = -1;
	volatile int32_t t111 = -1005;

    t111 = (x5409>>(x5410|(x5411>x5412)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x5413 = 89547LLU;
	int32_t x5414 = 0;
	uint16_t x5415 = 104U;
	volatile uint64_t t112 = 1701388834LLU;

    t112 = (x5413>>(x5414|(x5415>x5416)));

    if (t112 != 44773LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x5725 = 9576U;
	uint64_t x5726 = 3LLU;
	uint32_t x5727 = UINT32_MAX;
	int32_t x5728 = INT32_MIN;
	volatile uint32_t t113 = 143146U;

    t113 = (x5725>>(x5726|(x5727>x5728)));

    if (t113 != 1197U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x5753 = INT8_MAX;
	volatile uint8_t x5754 = 12U;
	int64_t x5756 = INT64_MIN;

    t114 = (x5753>>(x5754|(x5755>x5756)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x5813 = 58U;
	static uint16_t x5814 = 5U;
	volatile int64_t x5815 = INT64_MIN;
	int32_t x5816 = -1;
	volatile int32_t t115 = -7945;

    t115 = (x5813>>(x5814|(x5815>x5816)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x5833 = 18U;
	uint8_t x5834 = 0U;
	volatile int32_t t116 = -264509796;

    t116 = (x5833>>(x5834|(x5835>x5836)));

    if (t116 != 9) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x5913 = 4022U;

    t117 = (x5913>>(x5914|(x5915>x5916)));

    if (t117 != 502) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x5917 = 119;
	int64_t x5919 = -1LL;
	int16_t x5920 = INT16_MIN;

    t118 = (x5917>>(x5918|(x5919>x5920)));

    if (t118 != 59) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x5929 = 52U;
	uint32_t x5930 = 12U;
	volatile int32_t t119 = 8;

    t119 = (x5929>>(x5930|(x5931>x5932)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x5941 = 15573U;
	uint8_t x5942 = 3U;
	volatile int32_t t120 = 86134;

    t120 = (x5941>>(x5942|(x5943>x5944)));

    if (t120 != 1946) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x5957 = 976428;
	int64_t x5959 = INT64_MIN;
	int64_t x5960 = INT64_MIN;
	int32_t t121 = -98303;

    t121 = (x5957>>(x5958|(x5959>x5960)));

    if (t121 != 244107) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x5961 = INT16_MAX;
	volatile uint8_t x5962 = 1U;
	volatile int32_t x5963 = INT32_MIN;
	int8_t x5964 = 0;
	volatile int32_t t122 = 45210;

    t122 = (x5961>>(x5962|(x5963>x5964)));

    if (t122 != 16383) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x6001 = UINT32_MAX;
	int32_t x6003 = 7;
	static int32_t x6004 = -1;
	uint32_t t123 = 1879891U;

    t123 = (x6001>>(x6002|(x6003>x6004)));

    if (t123 != 2147483647U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x6021 = 1;
	int8_t x6022 = 1;
	int32_t x6023 = INT32_MIN;
	int16_t x6024 = -1;
	static int32_t t124 = -438;

    t124 = (x6021>>(x6022|(x6023>x6024)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6165 = INT8_MAX;
	volatile int64_t x6166 = 0LL;
	volatile int64_t x6167 = -2638506LL;
	int16_t x6168 = INT16_MIN;
	int32_t t125 = -3552;

    t125 = (x6165>>(x6166|(x6167>x6168)));

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x6217 = UINT16_MAX;
	int8_t x6218 = 2;
	int8_t x6219 = INT8_MIN;
	volatile int32_t t126 = 0;

    t126 = (x6217>>(x6218|(x6219>x6220)));

    if (t126 != 16383) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x6237 = UINT8_MAX;
	uint8_t x6238 = 7U;
	int16_t x6239 = INT16_MIN;
	volatile uint16_t x6240 = 13507U;
	static volatile int32_t t127 = -424788544;

    t127 = (x6237>>(x6238|(x6239>x6240)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x6307 = INT32_MAX;
	int32_t t128 = 6958;

    t128 = (x6305>>(x6306|(x6307>x6308)));

    if (t128 != 29) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x6359 = 3545696078388192390LL;
	int32_t x6360 = -1;

    t129 = (x6357>>(x6358|(x6359>x6360)));

    if (t129 != 957107933071208965LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x6601 = 0U;
	uint16_t x6602 = 0U;
	volatile int8_t x6603 = -1;
	volatile uint8_t x6604 = 123U;
	volatile uint32_t t130 = 82U;

    t130 = (x6601>>(x6602|(x6603>x6604)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x6657 = INT32_MAX;
	int8_t x6659 = 1;
	uint8_t x6660 = 3U;
	int32_t t131 = INT32_MAX;

    t131 = (x6657>>(x6658|(x6659>x6660)));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x6681 = 0;
	uint8_t x6682 = 6U;
	int32_t x6683 = -13625322;
	uint16_t x6684 = 233U;

    t132 = (x6681>>(x6682|(x6683>x6684)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x6953 = 2851977657390563377LLU;
	static volatile int64_t x6956 = INT64_MIN;
	volatile uint64_t t133 = 107731394269549746LLU;

    t133 = (x6953>>(x6954|(x6955>x6956)));

    if (t133 != 1328055587LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x6973 = 1U;
	uint8_t x6974 = 25U;
	volatile int32_t x6975 = -1;
	static uint8_t x6976 = 1U;
	volatile int32_t t134 = -97499;

    t134 = (x6973>>(x6974|(x6975>x6976)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x6989 = 0LL;
	int8_t x6990 = 1;
	static int32_t x6991 = -90988;
	static int64_t x6992 = -13582081LL;

    t135 = (x6989>>(x6990|(x6991>x6992)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x7073 = 2156636LL;
	static uint64_t x7074 = 1LLU;
	uint8_t x7075 = UINT8_MAX;
	int64_t x7076 = INT64_MAX;
	volatile int64_t t136 = -93276580LL;

    t136 = (x7073>>(x7074|(x7075>x7076)));

    if (t136 != 1078318LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x7077 = 871046131U;
	uint64_t x7078 = 1LLU;
	int8_t x7079 = INT8_MIN;
	static int64_t x7080 = -22963244LL;
	volatile uint32_t t137 = 2372U;

    t137 = (x7077>>(x7078|(x7079>x7080)));

    if (t137 != 435523065U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x7105 = 79954193LLU;
	volatile uint16_t x7106 = 49U;
	static int32_t x7107 = -82642116;
	int32_t x7108 = -2583;
	volatile uint64_t t138 = 103986615191923052LLU;

    t138 = (x7105>>(x7106|(x7107>x7108)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x7157 = 23125U;
	uint8_t x7158 = 29U;
	uint16_t x7160 = 18955U;
	volatile int32_t t139 = 5;

    t139 = (x7157>>(x7158|(x7159>x7160)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x7197 = 26U;
	volatile int32_t x7199 = 13;
	static uint16_t x7200 = 1886U;
	volatile int32_t t140 = -7014807;

    t140 = (x7197>>(x7198|(x7199>x7200)));

    if (t140 != 6) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x7214 = 5U;
	volatile int16_t x7215 = INT16_MIN;
	uint16_t x7216 = 297U;

    t141 = (x7213>>(x7214|(x7215>x7216)));

    if (t141 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x7233 = 4U;
	volatile int16_t x7234 = 3;
	volatile int16_t x7236 = 0;
	volatile int32_t t142 = 6166977;

    t142 = (x7233>>(x7234|(x7235>x7236)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x7265 = 78966798255594425LL;
	uint8_t x7266 = 54U;
	int8_t x7267 = -1;
	uint16_t x7268 = 1U;
	volatile int64_t t143 = -13208991LL;

    t143 = (x7265>>(x7266|(x7267>x7268)));

    if (t143 != 4LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7273 = INT64_MAX;
	uint16_t x7274 = 2U;
	static int64_t x7276 = -1LL;

    t144 = (x7273>>(x7274|(x7275>x7276)));

    if (t144 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x7278 = 12U;
	uint32_t x7279 = 404083614U;
	int64_t x7280 = INT64_MIN;
	uint32_t t145 = 485231U;

    t145 = (x7277>>(x7278|(x7279>x7280)));

    if (t145 != 524U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7311 = INT8_MIN;
	uint8_t x7312 = 1U;
	int32_t t146 = 76603;

    t146 = (x7309>>(x7310|(x7311>x7312)));

    if (t146 != 109) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x7393 = UINT32_MAX;
	int8_t x7394 = 9;
	volatile uint8_t x7395 = 4U;
	volatile int64_t x7396 = INT64_MIN;
	uint32_t t147 = 405912811U;

    t147 = (x7393>>(x7394|(x7395>x7396)));

    if (t147 != 8388607U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7521 = UINT64_MAX;
	static int64_t x7523 = INT64_MAX;
	uint8_t x7524 = UINT8_MAX;
	volatile uint64_t t148 = 6LLU;

    t148 = (x7521>>(x7522|(x7523>x7524)));

    if (t148 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x7533 = 44U;
	uint32_t x7534 = 1U;
	int64_t x7535 = -1LL;
	int32_t x7536 = -1;
	uint32_t t149 = 6U;

    t149 = (x7533>>(x7534|(x7535>x7536)));

    if (t149 != 22U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x7565 = 1468;
	static uint32_t x7566 = 8U;
	uint64_t x7567 = UINT64_MAX;
	static int16_t x7568 = -1;
	static volatile int32_t t150 = -2386486;

    t150 = (x7565>>(x7566|(x7567>x7568)));

    if (t150 != 5) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7665 = 10LL;
	static uint32_t x7666 = 3U;
	int64_t x7667 = -1840987868444LL;
	static int8_t x7668 = INT8_MIN;

    t151 = (x7665>>(x7666|(x7667>x7668)));

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x7677 = 793U;
	uint32_t x7678 = 7U;
	uint32_t x7679 = 0U;
	int32_t t152 = 19003;

    t152 = (x7677>>(x7678|(x7679>x7680)));

    if (t152 != 6) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x7702 = 4;
	int32_t t153 = -1648680;

    t153 = (x7701>>(x7702|(x7703>x7704)));

    if (t153 != 386570) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x7761 = 81U;
	static volatile int16_t x7763 = -1;
	volatile int64_t x7764 = INT64_MIN;
	volatile int32_t t154 = -1;

    t154 = (x7761>>(x7762|(x7763>x7764)));

    if (t154 != 40) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x7769 = 3U;
	int64_t x7771 = 1832343314LL;
	int16_t x7772 = INT16_MIN;
	volatile int32_t t155 = -4;

    t155 = (x7769>>(x7770|(x7771>x7772)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7781 = 48581LLU;
	uint8_t x7782 = 31U;
	uint64_t x7783 = 2646541227595097LLU;
	uint32_t x7784 = 45U;
	volatile uint64_t t156 = 44462169LLU;

    t156 = (x7781>>(x7782|(x7783>x7784)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x7789 = 12454U;
	static volatile int16_t x7792 = -7;

    t157 = (x7789>>(x7790|(x7791>x7792)));

    if (t157 != 6227) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x7813 = 3U;
	uint8_t x7814 = 0U;
	uint16_t x7815 = UINT16_MAX;
	static int8_t x7816 = INT8_MAX;
	int32_t t158 = -1106768;

    t158 = (x7813>>(x7814|(x7815>x7816)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x7849 = INT64_MAX;
	uint8_t x7850 = 3U;
	static volatile int8_t x7851 = -1;
	static uint64_t x7852 = 2549030802327LLU;
	volatile int64_t t159 = -265433396392106730LL;

    t159 = (x7849>>(x7850|(x7851>x7852)));

    if (t159 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x7917 = 1U;
	volatile int16_t x7919 = INT16_MIN;
	volatile int32_t t160 = -6858;

    t160 = (x7917>>(x7918|(x7919>x7920)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x7937 = 187;
	uint8_t x7938 = 21U;
	static int32_t x7939 = -41280372;
	int32_t t161 = -1496;

    t161 = (x7937>>(x7938|(x7939>x7940)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x8145 = 0U;
	int32_t x8146 = 1;
	int16_t x8147 = -15728;
	int16_t x8148 = INT16_MIN;
	int32_t t162 = 240830;

    t162 = (x8145>>(x8146|(x8147>x8148)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x8202 = 1;
	int8_t x8203 = -7;
	volatile uint8_t x8204 = UINT8_MAX;
	int32_t t163 = 4490967;

    t163 = (x8201>>(x8202|(x8203>x8204)));

    if (t163 != 19) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x8221 = UINT32_MAX;
	uint16_t x8222 = 0U;
	uint8_t x8223 = 2U;
	static int64_t x8224 = INT64_MAX;
	static volatile uint32_t t164 = UINT32_MAX;

    t164 = (x8221>>(x8222|(x8223>x8224)));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x8281 = 11258U;
	int8_t x8282 = 17;
	static volatile uint32_t t165 = 101U;

    t165 = (x8281>>(x8282|(x8283>x8284)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x8345 = 1110961104LLU;
	volatile uint32_t x8346 = 34U;
	static int64_t x8347 = INT64_MIN;
	int16_t x8348 = -1;
	volatile uint64_t t166 = 18023105LLU;

    t166 = (x8345>>(x8346|(x8347>x8348)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x8349 = 230U;
	static int32_t x8351 = 968;
	static uint32_t x8352 = 100107027U;
	volatile int32_t t167 = -41286036;

    t167 = (x8349>>(x8350|(x8351>x8352)));

    if (t167 != 115) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x8353 = UINT8_MAX;
	volatile uint16_t x8355 = 158U;
	uint16_t x8356 = UINT16_MAX;
	int32_t t168 = -1;

    t168 = (x8353>>(x8354|(x8355>x8356)));

    if (t168 != 31) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x8361 = 0U;
	int8_t x8362 = 0;
	int8_t x8363 = INT8_MIN;
	volatile int32_t t169 = 580347213;

    t169 = (x8361>>(x8362|(x8363>x8364)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x8445 = UINT8_MAX;
	uint64_t x8446 = 11LLU;
	static volatile uint64_t x8447 = 18004LLU;
	int32_t t170 = 1783;

    t170 = (x8445>>(x8446|(x8447>x8448)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x8589 = 6701647533647037LLU;
	static volatile int8_t x8590 = 5;
	static int64_t x8591 = INT64_MIN;
	int16_t x8592 = -468;

    t171 = (x8589>>(x8590|(x8591>x8592)));

    if (t171 != 209426485426469LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x8646 = 5U;
	static int8_t x8647 = -3;
	volatile int64_t x8648 = -1LL;
	volatile int32_t t172 = 214;

    t172 = (x8645>>(x8646|(x8647>x8648)));

    if (t172 != 7) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x8673 = 2U;
	volatile int8_t x8674 = 11;
	uint64_t x8675 = 224027215LLU;
	volatile int32_t t173 = 0;

    t173 = (x8673>>(x8674|(x8675>x8676)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x8677 = 1187889887U;
	static uint8_t x8678 = 10U;
	volatile uint64_t x8679 = 2307615294LLU;
	volatile uint32_t t174 = 52U;

    t174 = (x8677>>(x8678|(x8679>x8680)));

    if (t174 != 1160048U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x8741 = INT64_MAX;
	volatile uint16_t x8742 = 1U;
	int64_t x8743 = INT64_MIN;
	int8_t x8744 = INT8_MIN;
	int64_t t175 = 3786220372436239LL;

    t175 = (x8741>>(x8742|(x8743>x8744)));

    if (t175 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x8925 = 1;
	volatile int8_t x8926 = 1;
	uint8_t x8927 = 0U;
	volatile int32_t t176 = -410;

    t176 = (x8925>>(x8926|(x8927>x8928)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x8937 = 344322278U;
	uint16_t x8938 = 10U;
	int8_t x8940 = INT8_MAX;
	uint32_t t177 = 2978U;

    t177 = (x8937>>(x8938|(x8939>x8940)));

    if (t177 != 168126U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x9093 = 1U;
	volatile uint16_t x9094 = 9U;
	int16_t x9095 = INT16_MAX;
	int8_t x9096 = INT8_MIN;
	int32_t t178 = 399533426;

    t178 = (x9093>>(x9094|(x9095>x9096)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x9105 = 27;
	uint16_t x9106 = 8U;
	int64_t x9107 = 21152LL;
	static volatile int32_t t179 = -5245259;

    t179 = (x9105>>(x9106|(x9107>x9108)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x9145 = 59U;
	static uint8_t x9146 = 3U;
	uint16_t x9147 = 77U;
	int32_t x9148 = -1;
	int32_t t180 = 57655496;

    t180 = (x9145>>(x9146|(x9147>x9148)));

    if (t180 != 7) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x9157 = 1583;
	uint8_t x9158 = 9U;
	int32_t x9159 = 1353;
	int64_t x9160 = INT64_MIN;
	volatile int32_t t181 = -8;

    t181 = (x9157>>(x9158|(x9159>x9160)));

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x9281 = 0;
	uint8_t x9282 = 29U;
	int32_t x9283 = -1;
	uint16_t x9284 = UINT16_MAX;
	volatile int32_t t182 = -596436873;

    t182 = (x9281>>(x9282|(x9283>x9284)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x9309 = UINT32_MAX;
	int8_t x9310 = 0;
	uint16_t x9311 = 275U;
	int32_t x9312 = -1;
	static volatile uint32_t t183 = 9627620U;

    t183 = (x9309>>(x9310|(x9311>x9312)));

    if (t183 != 2147483647U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x9329 = INT32_MAX;
	uint8_t x9331 = UINT8_MAX;
	int16_t x9332 = INT16_MAX;
	int32_t t184 = 2156;

    t184 = (x9329>>(x9330|(x9331>x9332)));

    if (t184 != 1073741823) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x9449 = 388709U;
	uint8_t x9450 = 13U;
	uint32_t x9451 = UINT32_MAX;
	int32_t x9452 = 154;
	uint32_t t185 = 114U;

    t185 = (x9449>>(x9450|(x9451>x9452)));

    if (t185 != 47U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint32_t x9497 = UINT32_MAX;
	volatile int8_t x9498 = 0;
	volatile int64_t x9500 = 784LL;

    t186 = (x9497>>(x9498|(x9499>x9500)));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x9533 = 31091853046433LLU;
	uint8_t x9534 = 1U;
	uint64_t x9536 = 252LLU;
	uint64_t t187 = 5254LLU;

    t187 = (x9533>>(x9534|(x9535>x9536)));

    if (t187 != 15545926523216LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x9593 = 0;
	static volatile uint8_t x9594 = 4U;
	volatile int32_t t188 = -357984;

    t188 = (x9593>>(x9594|(x9595>x9596)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x9605 = 2U;
	volatile int64_t x9608 = -1LL;
	int32_t t189 = 810604;

    t189 = (x9605>>(x9606|(x9607>x9608)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x9641 = 1;
	static uint8_t x9642 = 0U;
	volatile int32_t t190 = -347;

    t190 = (x9641>>(x9642|(x9643>x9644)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x9677 = 325659957LL;
	static int8_t x9678 = 1;
	static int32_t x9679 = 755;
	volatile int64_t t191 = -202104351818695997LL;

    t191 = (x9677>>(x9678|(x9679>x9680)));

    if (t191 != 162829978LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x9785 = 0U;
	int16_t x9786 = 6;
	volatile int32_t x9788 = 1401253;
	int32_t t192 = -68180590;

    t192 = (x9785>>(x9786|(x9787>x9788)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x9801 = 19635071633529071LL;
	int8_t x9802 = 0;
	uint16_t x9803 = 6U;
	int16_t x9804 = INT16_MIN;
	static int64_t t193 = -1467495434469LL;

    t193 = (x9801>>(x9802|(x9803>x9804)));

    if (t193 != 9817535816764535LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x9817 = UINT16_MAX;
	volatile uint32_t x9818 = 6U;
	int16_t x9820 = INT16_MIN;
	volatile int32_t t194 = -4;

    t194 = (x9817>>(x9818|(x9819>x9820)));

    if (t194 != 511) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x9941 = 9U;
	uint8_t x9942 = 15U;
	static int16_t x9943 = -2050;
	uint64_t x9944 = 163635LLU;

    t195 = (x9941>>(x9942|(x9943>x9944)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x9985 = 1LLU;
	uint8_t x9986 = 0U;
	uint8_t x9988 = 3U;
	uint64_t t196 = 17081764454LLU;

    t196 = (x9985>>(x9986|(x9987>x9988)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x10037 = 1U;
	uint8_t x10038 = 15U;
	int8_t x10039 = -3;
	volatile int32_t t197 = 44653;

    t197 = (x10037>>(x10038|(x10039>x10040)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x10063 = UINT16_MAX;
	static int16_t x10064 = INT16_MAX;
	volatile int32_t t198 = 1;

    t198 = (x10061>>(x10062|(x10063>x10064)));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x10069 = 2530;
	volatile int8_t x10070 = 0;
	static int64_t x10071 = INT64_MIN;
	int8_t x10072 = INT8_MAX;

    t199 = (x10069>>(x10070|(x10071>x10072)));

    if (t199 != 2530) { NG(); } else { ; }
	
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

