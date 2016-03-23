
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

static int64_t x17 = INT64_MAX;
static uint16_t x46 = UINT16_MAX;
int32_t x86 = INT32_MIN;
int8_t x123 = -50;
volatile int8_t x179 = INT8_MAX;
int8_t x221 = INT8_MAX;
volatile int32_t t7 = 17658;
int8_t x225 = -41;
int8_t x228 = 29;
uint16_t x266 = 1U;
volatile int32_t x267 = 1;
static int64_t x274 = 418928260756482LL;
int32_t t10 = 81030;
volatile int32_t x299 = 5381458;
volatile int32_t x325 = -5238;
static int16_t x379 = -2691;
int64_t x463 = -27LL;
int16_t x497 = INT16_MAX;
volatile uint8_t x498 = 0U;
uint16_t x536 = 10U;
volatile int32_t t18 = -48;
static int64_t x538 = INT64_MIN;
static volatile uint16_t x539 = 4U;
static uint16_t x540 = 1U;
uint8_t x588 = 3U;
int16_t x617 = INT16_MIN;
volatile int32_t t22 = -425032;
int16_t x657 = INT16_MAX;
volatile int32_t t23 = 7;
int8_t x666 = INT8_MAX;
static int8_t x698 = -1;
int16_t x740 = 0;
int64_t x774 = -52LL;
int8_t x820 = 3;
uint8_t x908 = 30U;
int8_t x912 = 1;
int32_t x981 = INT32_MIN;
uint64_t x982 = 1557252LLU;
uint8_t x1016 = 4U;
static volatile uint8_t x1158 = 6U;
int32_t t38 = 405804717;
int16_t x1179 = -1;
static int32_t t39 = -35191;
volatile int8_t x1230 = INT8_MIN;
int32_t t40 = -12408036;
uint64_t x1274 = 1LLU;
int32_t t43 = 1;
volatile int32_t x1287 = 1721519;
static int16_t x1288 = 4;
int32_t t45 = 30;
volatile int16_t x1338 = -1;
static int32_t t46 = 3;
int32_t x1342 = 47964;
static volatile uint16_t x1372 = 6U;
static volatile uint8_t x1409 = 51U;
volatile int32_t x1410 = INT32_MIN;
int16_t x1439 = INT16_MAX;
uint8_t x1440 = 2U;
int32_t x1482 = 74;
int32_t x1483 = 4419;
volatile int32_t t52 = -1895;
volatile int32_t x1485 = 24;
int16_t x1487 = 4627;
int32_t t53 = 7;
static int32_t t54 = -30557;
int32_t x1581 = 1363396;
int16_t x1582 = -1901;
uint32_t x1657 = 7989U;
int8_t x1659 = -1;
static int32_t t57 = 1488;
uint16_t x1742 = UINT16_MAX;
int8_t x1744 = 0;
volatile uint8_t x1745 = 4U;
int16_t x1765 = INT16_MAX;
int32_t t61 = -682;
int32_t t62 = 77310;
static int8_t x1923 = 27;
volatile int16_t x1951 = -1;
static uint32_t x1952 = 1U;
volatile int32_t t64 = -206147239;
static int64_t x1981 = -1LL;
int64_t x2011 = -140896132673082LL;
uint8_t x2012 = 8U;
int32_t t67 = -24;
uint16_t x2228 = 26U;
int16_t x2321 = 8939;
static uint32_t x2323 = 10U;
volatile int32_t t69 = -5;
static int16_t x2328 = 0;
static uint8_t x2366 = 2U;
int16_t x2372 = 2;
uint16_t x2430 = 754U;
int64_t x2762 = -1LL;
volatile int32_t x2763 = INT32_MAX;
int32_t t79 = 270032;
int8_t x2793 = INT8_MIN;
uint32_t x2812 = 22U;
static int8_t x2825 = -1;
int32_t t82 = -6;
uint32_t x2830 = 454U;
volatile uint8_t x2848 = 3U;
static int32_t t84 = 81661;
int32_t x2900 = 3;
static int8_t x3146 = INT8_MAX;
uint8_t x3148 = 0U;
int64_t x3182 = INT64_MAX;
uint32_t x3206 = 1534875U;
static int8_t x3207 = 46;
int8_t x3208 = 0;
int8_t x3224 = 0;
int32_t t94 = 0;
uint8_t x3307 = 1U;
volatile int32_t t95 = -55225712;
int64_t x3322 = INT64_MIN;
int32_t t97 = -396905;
static uint64_t x3367 = UINT64_MAX;
volatile uint8_t x3368 = 7U;
int32_t t98 = 13360161;
int32_t t100 = -65609533;
static uint64_t x3455 = 116661846117503373LLU;
static uint16_t x3563 = 7776U;
uint32_t x3643 = UINT32_MAX;
uint8_t x3677 = UINT8_MAX;
volatile uint32_t x3678 = 206U;
int8_t x3680 = 3;
volatile int16_t x3717 = INT16_MIN;
int16_t x3727 = INT16_MAX;
uint8_t x3730 = 97U;
volatile int16_t x3731 = -1;
volatile uint8_t x3784 = 29U;
int32_t t109 = 29475;
int32_t x3841 = 299;
int32_t x3844 = 1;
static int8_t x3856 = 11;
uint16_t x3859 = 342U;
int8_t x3860 = 3;
int32_t t113 = 1;
uint64_t x3890 = 346425049LLU;
volatile int32_t t115 = -826064;
int64_t x3951 = -26416102LL;
int8_t x3952 = 0;
static int32_t t119 = 6568710;
int64_t x3969 = INT64_MIN;
int8_t x3990 = INT8_MIN;
int8_t x4007 = -1;
int32_t t123 = -12055;
int32_t t124 = 0;
static int64_t x4038 = 65556408376158465LL;
int32_t t125 = -2929;
volatile uint8_t x4116 = 2U;
volatile int32_t t126 = -7177;
uint8_t x4126 = 3U;
uint8_t x4127 = 3U;
static volatile int32_t t127 = 28201222;
volatile int32_t t128 = 10577886;
static int8_t x4179 = -1;
volatile int32_t t133 = 92159;
int32_t x4314 = INT32_MIN;
int32_t x4316 = 1;
int64_t x4330 = -3756864808LL;
volatile int32_t t135 = 6500334;
uint64_t x4358 = 1146973329LLU;
uint16_t x4360 = 26U;
uint32_t x4434 = 1U;
uint8_t x4496 = 1U;
int32_t x4689 = INT32_MAX;
int8_t x4691 = INT8_MIN;
static int8_t x4713 = INT8_MIN;
static int32_t x4714 = -13121051;
volatile int32_t t145 = 9700;
static int32_t x4802 = INT32_MAX;
int16_t x4803 = 3907;
static volatile uint32_t x4818 = 136826622U;
int32_t t150 = -15;
int32_t x4894 = 4231;
volatile int8_t x4928 = 6;
static int16_t x4952 = 6;
int32_t t154 = 8223349;
uint32_t x4993 = 13792790U;
volatile uint16_t x4996 = 21U;
static volatile int64_t x5001 = 17175728838610149LL;
static int16_t x5181 = 4;
static int16_t x5183 = INT16_MAX;
static uint16_t x5196 = 19U;
volatile int16_t x5229 = INT16_MAX;
static int64_t x5230 = INT64_MAX;
int64_t x5231 = INT64_MIN;
static int16_t x5274 = INT16_MIN;
static volatile int32_t x5276 = 1;
int32_t t167 = 3107;
volatile uint8_t x5304 = 3U;
int8_t x5355 = INT8_MIN;
uint32_t x5447 = 3000280U;
volatile int32_t t171 = -37310909;
uint16_t x5492 = 6U;
static int16_t x5525 = 12;
static int16_t x5721 = INT16_MIN;
static volatile int32_t x5789 = -1;
uint32_t x5948 = 1U;
int8_t x5976 = 5;
int32_t x6029 = -3935;
uint16_t x6058 = 148U;
uint32_t x6065 = 78U;
uint16_t x6093 = 57U;
uint8_t x6095 = 17U;
volatile int32_t x6109 = -1;
int16_t x6111 = INT16_MAX;
volatile uint8_t x6112 = 15U;
int32_t x6199 = 95756;
volatile int32_t t196 = 131885028;
uint16_t x6301 = UINT16_MAX;
int64_t x6309 = INT64_MAX;


void f0(void) {
    	static int64_t x18 = INT64_MAX;
	volatile uint64_t x19 = UINT64_MAX;
	static int64_t x20 = 0LL;
	int32_t t0 = -23229908;

    t0 = (((x17==x18)==x19)<<x20);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x45 = -3827703319LL;
	int8_t x47 = 34;
	uint8_t x48 = 1U;
	volatile int32_t t1 = 52;

    t1 = (((x45==x46)==x47)<<x48);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = -1LL;
	int8_t x79 = 0;
	volatile int8_t x80 = 1;
	int32_t t2 = 830403602;

    t2 = (((x77==x78)==x79)<<x80);

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x85 = -956;
	static int8_t x87 = 0;
	int64_t x88 = 14LL;
	int32_t t3 = -10;

    t3 = (((x85==x86)==x87)<<x88);

    if (t3 != 16384) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x121 = -1;
	static uint16_t x122 = UINT16_MAX;
	uint16_t x124 = 27U;
	int32_t t4 = 14316;

    t4 = (((x121==x122)==x123)<<x124);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x133 = 12U;
	volatile int8_t x134 = 48;
	int64_t x135 = INT64_MIN;
	uint8_t x136 = 6U;
	static volatile int32_t t5 = -24109796;

    t5 = (((x133==x134)==x135)<<x136);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x177 = INT32_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	volatile int16_t x180 = 3;
	volatile int32_t t6 = 79;

    t6 = (((x177==x178)==x179)<<x180);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x222 = 368U;
	volatile int16_t x223 = INT16_MIN;
	volatile int8_t x224 = 0;

    t7 = (((x221==x222)==x223)<<x224);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = -1;
	int32_t t8 = -707009757;

    t8 = (((x225==x226)==x227)<<x228);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x265 = 124U;
	static volatile int8_t x268 = 24;
	int32_t t9 = -4225;

    t9 = (((x265==x266)==x267)<<x268);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x273 = INT64_MIN;
	static volatile int32_t x275 = -246211603;
	static uint8_t x276 = 13U;

    t10 = (((x273==x274)==x275)<<x276);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x286 = 1;
	int8_t x287 = -5;
	volatile int8_t x288 = 8;
	int32_t t11 = -34942;

    t11 = (((x285==x286)==x287)<<x288);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	uint8_t x300 = 6U;
	volatile int32_t t12 = 87;

    t12 = (((x297==x298)==x299)<<x300);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x326 = 1894169226LLU;
	int64_t x327 = INT64_MIN;
	static volatile uint8_t x328 = 0U;
	int32_t t13 = -342960;

    t13 = (((x325==x326)==x327)<<x328);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x369 = INT64_MIN;
	uint8_t x370 = 74U;
	static int16_t x371 = -5110;
	uint16_t x372 = 0U;
	volatile int32_t t14 = -2367795;

    t14 = (((x369==x370)==x371)<<x372);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	uint8_t x380 = 0U;
	volatile int32_t t15 = -7292;

    t15 = (((x377==x378)==x379)<<x380);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x461 = INT8_MIN;
	volatile int64_t x462 = -8357463616808025LL;
	uint8_t x464 = 22U;
	int32_t t16 = -930;

    t16 = (((x461==x462)==x463)<<x464);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x499 = -1LL;
	int16_t x500 = 0;
	volatile int32_t t17 = -12934;

    t17 = (((x497==x498)==x499)<<x500);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x533 = INT8_MAX;
	int32_t x534 = INT32_MAX;
	volatile uint16_t x535 = UINT16_MAX;

    t18 = (((x533==x534)==x535)<<x536);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x537 = INT8_MIN;
	volatile int32_t t19 = 11973;

    t19 = (((x537==x538)==x539)<<x540);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x565 = -107LL;
	volatile int64_t x566 = INT64_MIN;
	static int64_t x567 = -326240LL;
	int16_t x568 = 0;
	static volatile int32_t t20 = 267735824;

    t20 = (((x565==x566)==x567)<<x568);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x585 = -2;
	volatile int64_t x586 = 2885897079LL;
	int64_t x587 = 53499570LL;
	static int32_t t21 = 7106387;

    t21 = (((x585==x586)==x587)<<x588);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x618 = -1;
	volatile uint32_t x619 = UINT32_MAX;
	volatile int8_t x620 = 4;

    t22 = (((x617==x618)==x619)<<x620);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x658 = INT32_MAX;
	volatile uint64_t x659 = UINT64_MAX;
	uint8_t x660 = 7U;

    t23 = (((x657==x658)==x659)<<x660);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x661 = 15U;
	int32_t x662 = INT32_MIN;
	volatile int16_t x663 = INT16_MIN;
	volatile int8_t x664 = 1;
	static volatile int32_t t24 = -1224;

    t24 = (((x661==x662)==x663)<<x664);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x665 = INT8_MIN;
	static int8_t x667 = INT8_MAX;
	uint8_t x668 = 1U;
	static volatile int32_t t25 = 5296116;

    t25 = (((x665==x666)==x667)<<x668);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x697 = INT16_MAX;
	volatile uint32_t x699 = 395U;
	uint8_t x700 = 1U;
	int32_t t26 = 46405;

    t26 = (((x697==x698)==x699)<<x700);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x718 = 389226372850LL;
	volatile uint64_t x719 = 352474361368088LLU;
	static volatile int16_t x720 = 0;
	volatile int32_t t27 = -9568;

    t27 = (((x717==x718)==x719)<<x720);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x737 = UINT16_MAX;
	int32_t x738 = -1;
	volatile int64_t x739 = INT64_MAX;
	volatile int32_t t28 = -721344139;

    t28 = (((x737==x738)==x739)<<x740);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x773 = UINT16_MAX;
	uint8_t x775 = UINT8_MAX;
	static int8_t x776 = 0;
	static int32_t t29 = -30957146;

    t29 = (((x773==x774)==x775)<<x776);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x817 = 346210799075307LL;
	uint32_t x818 = 803U;
	uint32_t x819 = 3U;
	int32_t t30 = -1;

    t30 = (((x817==x818)==x819)<<x820);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x905 = INT32_MAX;
	int8_t x906 = -1;
	int64_t x907 = -428LL;
	int32_t t31 = 21250;

    t31 = (((x905==x906)==x907)<<x908);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x909 = 20;
	int64_t x910 = INT64_MIN;
	volatile uint32_t x911 = 945U;
	volatile int32_t t32 = -1194858;

    t32 = (((x909==x910)==x911)<<x912);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x983 = 8LL;
	volatile int16_t x984 = 10;
	int32_t t33 = 7349364;

    t33 = (((x981==x982)==x983)<<x984);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1001 = INT64_MIN;
	volatile uint32_t x1002 = 251U;
	int8_t x1003 = INT8_MIN;
	uint8_t x1004 = 1U;
	volatile int32_t t34 = 2215;

    t34 = (((x1001==x1002)==x1003)<<x1004);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1013 = -59;
	uint8_t x1014 = 1U;
	volatile uint16_t x1015 = 27U;
	volatile int32_t t35 = -3663;

    t35 = (((x1013==x1014)==x1015)<<x1016);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x1097 = -96556857494LL;
	int32_t x1098 = INT32_MIN;
	int16_t x1099 = INT16_MAX;
	uint32_t x1100 = 20U;
	volatile int32_t t36 = -4017;

    t36 = (((x1097==x1098)==x1099)<<x1100);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1121 = INT16_MIN;
	int8_t x1122 = INT8_MAX;
	static uint64_t x1123 = UINT64_MAX;
	int8_t x1124 = 0;
	volatile int32_t t37 = 562793813;

    t37 = (((x1121==x1122)==x1123)<<x1124);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1157 = -26759;
	uint16_t x1159 = 3732U;
	uint8_t x1160 = 0U;

    t38 = (((x1157==x1158)==x1159)<<x1160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x1177 = UINT8_MAX;
	int8_t x1178 = 5;
	int8_t x1180 = 2;

    t39 = (((x1177==x1178)==x1179)<<x1180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x1229 = UINT32_MAX;
	int64_t x1231 = INT64_MIN;
	static volatile uint8_t x1232 = 30U;

    t40 = (((x1229==x1230)==x1231)<<x1232);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x1233 = -1;
	uint64_t x1234 = UINT64_MAX;
	int32_t x1235 = -1;
	int16_t x1236 = 24;
	volatile int32_t t41 = 132113;

    t41 = (((x1233==x1234)==x1235)<<x1236);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1249 = -9;
	volatile int64_t x1250 = 27376530LL;
	volatile int16_t x1251 = -1;
	uint16_t x1252 = 2U;
	volatile int32_t t42 = -246885815;

    t42 = (((x1249==x1250)==x1251)<<x1252);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1273 = 197260349820297LLU;
	int8_t x1275 = -1;
	int32_t x1276 = 1;

    t43 = (((x1273==x1274)==x1275)<<x1276);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1285 = 248U;
	static volatile int8_t x1286 = -1;
	int32_t t44 = 434;

    t44 = (((x1285==x1286)==x1287)<<x1288);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x1321 = INT16_MIN;
	uint64_t x1322 = UINT64_MAX;
	static uint64_t x1323 = UINT64_MAX;
	volatile uint8_t x1324 = 12U;

    t45 = (((x1321==x1322)==x1323)<<x1324);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1337 = INT64_MAX;
	uint8_t x1339 = UINT8_MAX;
	int8_t x1340 = 25;

    t46 = (((x1337==x1338)==x1339)<<x1340);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x1341 = 19018101919LLU;
	static int16_t x1343 = INT16_MAX;
	volatile int16_t x1344 = 0;
	int32_t t47 = 28922193;

    t47 = (((x1341==x1342)==x1343)<<x1344);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x1369 = INT32_MIN;
	static volatile int16_t x1370 = INT16_MAX;
	int8_t x1371 = INT8_MIN;
	int32_t t48 = 32780400;

    t48 = (((x1369==x1370)==x1371)<<x1372);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1411 = 39;
	uint8_t x1412 = 9U;
	int32_t t49 = -873533;

    t49 = (((x1409==x1410)==x1411)<<x1412);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x1437 = 3156U;
	int16_t x1438 = INT16_MAX;
	volatile int32_t t50 = 1;

    t50 = (((x1437==x1438)==x1439)<<x1440);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1461 = INT32_MIN;
	static int32_t x1462 = INT32_MAX;
	int64_t x1463 = INT64_MAX;
	static uint16_t x1464 = 5U;
	int32_t t51 = 129899;

    t51 = (((x1461==x1462)==x1463)<<x1464);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x1481 = -1;
	int8_t x1484 = 0;

    t52 = (((x1481==x1482)==x1483)<<x1484);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x1486 = 171047728U;
	volatile uint16_t x1488 = 6U;

    t53 = (((x1485==x1486)==x1487)<<x1488);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x1577 = UINT32_MAX;
	int32_t x1578 = INT32_MIN;
	static volatile int8_t x1579 = -1;
	static int8_t x1580 = 0;

    t54 = (((x1577==x1578)==x1579)<<x1580);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x1583 = INT32_MIN;
	volatile uint32_t x1584 = 1U;
	volatile int32_t t55 = 129226065;

    t55 = (((x1581==x1582)==x1583)<<x1584);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1658 = UINT8_MAX;
	volatile uint32_t x1660 = 0U;
	static volatile int32_t t56 = 905;

    t56 = (((x1657==x1658)==x1659)<<x1660);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x1697 = 3U;
	int16_t x1698 = INT16_MIN;
	static volatile uint16_t x1699 = 1U;
	int8_t x1700 = 14;

    t57 = (((x1697==x1698)==x1699)<<x1700);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x1729 = 13U;
	static int32_t x1730 = -1;
	int32_t x1731 = INT32_MAX;
	uint32_t x1732 = 0U;
	volatile int32_t t58 = 1385783;

    t58 = (((x1729==x1730)==x1731)<<x1732);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x1741 = -1LL;
	uint64_t x1743 = 3552LLU;
	volatile int32_t t59 = 15;

    t59 = (((x1741==x1742)==x1743)<<x1744);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1746 = INT32_MIN;
	uint32_t x1747 = 1044173623U;
	uint16_t x1748 = 29U;
	int32_t t60 = 811489679;

    t60 = (((x1745==x1746)==x1747)<<x1748);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x1766 = 119422329;
	int16_t x1767 = -1;
	int16_t x1768 = 0;

    t61 = (((x1765==x1766)==x1767)<<x1768);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x1917 = -1LL;
	uint8_t x1918 = 0U;
	volatile int64_t x1919 = INT64_MAX;
	uint32_t x1920 = 1U;

    t62 = (((x1917==x1918)==x1919)<<x1920);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x1921 = -1LL;
	int16_t x1922 = 2096;
	uint8_t x1924 = 1U;
	volatile int32_t t63 = 1711281;

    t63 = (((x1921==x1922)==x1923)<<x1924);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x1949 = -1;
	volatile uint64_t x1950 = 699743802445822LLU;

    t64 = (((x1949==x1950)==x1951)<<x1952);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x1982 = -1036;
	static int32_t x1983 = INT32_MIN;
	uint8_t x1984 = 15U;
	int32_t t65 = 257;

    t65 = (((x1981==x1982)==x1983)<<x1984);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x2009 = 18;
	int16_t x2010 = -2200;
	static int32_t t66 = -1;

    t66 = (((x2009==x2010)==x2011)<<x2012);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x2093 = -11;
	volatile int64_t x2094 = -1LL;
	volatile int8_t x2095 = 0;
	uint32_t x2096 = 0U;

    t67 = (((x2093==x2094)==x2095)<<x2096);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x2225 = INT64_MIN;
	static int64_t x2226 = INT64_MIN;
	int8_t x2227 = -1;
	int32_t t68 = -184854589;

    t68 = (((x2225==x2226)==x2227)<<x2228);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x2322 = INT8_MIN;
	uint16_t x2324 = 5U;

    t69 = (((x2321==x2322)==x2323)<<x2324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2325 = INT16_MIN;
	static int32_t x2326 = 26;
	int64_t x2327 = 63938LL;
	int32_t t70 = -1360257;

    t70 = (((x2325==x2326)==x2327)<<x2328);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x2329 = 1U;
	volatile int64_t x2330 = -1LL;
	int16_t x2331 = -1;
	static volatile int64_t x2332 = 0LL;
	static int32_t t71 = 2322373;

    t71 = (((x2329==x2330)==x2331)<<x2332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2365 = INT64_MIN;
	volatile int16_t x2367 = INT16_MIN;
	static volatile uint16_t x2368 = 15U;
	int32_t t72 = -914537309;

    t72 = (((x2365==x2366)==x2367)<<x2368);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x2369 = -1LL;
	static int32_t x2370 = INT32_MAX;
	int32_t x2371 = INT32_MAX;
	volatile int32_t t73 = -1;

    t73 = (((x2369==x2370)==x2371)<<x2372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2389 = 6;
	int32_t x2390 = -1;
	static int8_t x2391 = INT8_MIN;
	uint8_t x2392 = 17U;
	static volatile int32_t t74 = -1;

    t74 = (((x2389==x2390)==x2391)<<x2392);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x2413 = -1LL;
	uint16_t x2414 = UINT16_MAX;
	static int32_t x2415 = -1;
	volatile uint8_t x2416 = 1U;
	volatile int32_t t75 = -244234;

    t75 = (((x2413==x2414)==x2415)<<x2416);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x2429 = 575812LLU;
	int16_t x2431 = INT16_MAX;
	volatile uint8_t x2432 = 14U;
	int32_t t76 = -113425744;

    t76 = (((x2429==x2430)==x2431)<<x2432);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x2673 = INT16_MIN;
	int64_t x2674 = 15619689394156062LL;
	int16_t x2675 = 1620;
	uint8_t x2676 = 3U;
	static int32_t t77 = 3909;

    t77 = (((x2673==x2674)==x2675)<<x2676);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x2689 = INT16_MIN;
	static volatile int8_t x2690 = -1;
	int64_t x2691 = -1LL;
	int8_t x2692 = 1;
	volatile int32_t t78 = 4238;

    t78 = (((x2689==x2690)==x2691)<<x2692);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2761 = -1;
	static int32_t x2764 = 14;

    t79 = (((x2761==x2762)==x2763)<<x2764);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x2794 = INT64_MAX;
	volatile int8_t x2795 = INT8_MIN;
	static int16_t x2796 = 27;
	volatile int32_t t80 = 266;

    t80 = (((x2793==x2794)==x2795)<<x2796);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x2809 = 19U;
	int16_t x2810 = INT16_MIN;
	int8_t x2811 = -1;
	volatile int32_t t81 = -1459285;

    t81 = (((x2809==x2810)==x2811)<<x2812);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x2826 = 103869LL;
	int8_t x2827 = -1;
	volatile int16_t x2828 = 0;

    t82 = (((x2825==x2826)==x2827)<<x2828);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x2829 = INT32_MIN;
	uint8_t x2831 = 3U;
	uint64_t x2832 = 1LLU;
	int32_t t83 = 186309;

    t83 = (((x2829==x2830)==x2831)<<x2832);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2845 = INT8_MIN;
	uint64_t x2846 = 319LLU;
	volatile int16_t x2847 = -1;

    t84 = (((x2845==x2846)==x2847)<<x2848);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2897 = 18LLU;
	int64_t x2898 = INT64_MAX;
	uint32_t x2899 = 9U;
	static volatile int32_t t85 = 231;

    t85 = (((x2897==x2898)==x2899)<<x2900);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x2941 = 4U;
	int32_t x2942 = -83994;
	uint64_t x2943 = 3620187LLU;
	uint8_t x2944 = 26U;
	volatile int32_t t86 = 3299;

    t86 = (((x2941==x2942)==x2943)<<x2944);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x2969 = INT16_MIN;
	static int16_t x2970 = -276;
	volatile int8_t x2971 = INT8_MIN;
	uint16_t x2972 = 2U;
	volatile int32_t t87 = -177205724;

    t87 = (((x2969==x2970)==x2971)<<x2972);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x3033 = INT8_MAX;
	int64_t x3034 = INT64_MIN;
	static volatile int16_t x3035 = INT16_MIN;
	uint8_t x3036 = 19U;
	static volatile int32_t t88 = 50675;

    t88 = (((x3033==x3034)==x3035)<<x3036);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x3081 = -1;
	volatile int32_t x3082 = -1;
	int8_t x3083 = INT8_MIN;
	uint8_t x3084 = 0U;
	volatile int32_t t89 = 446626;

    t89 = (((x3081==x3082)==x3083)<<x3084);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x3145 = 58LLU;
	volatile uint8_t x3147 = 6U;
	int32_t t90 = -141538458;

    t90 = (((x3145==x3146)==x3147)<<x3148);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x3181 = UINT32_MAX;
	int8_t x3183 = INT8_MIN;
	uint16_t x3184 = 1U;
	volatile int32_t t91 = -609421470;

    t91 = (((x3181==x3182)==x3183)<<x3184);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x3205 = 157171;
	volatile int32_t t92 = -6131668;

    t92 = (((x3205==x3206)==x3207)<<x3208);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x3221 = 6480U;
	static int16_t x3222 = INT16_MIN;
	volatile int16_t x3223 = INT16_MIN;
	static volatile int32_t t93 = 45;

    t93 = (((x3221==x3222)==x3223)<<x3224);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x3253 = -3331842LL;
	static uint16_t x3254 = UINT16_MAX;
	uint32_t x3255 = 972533U;
	static int16_t x3256 = 1;

    t94 = (((x3253==x3254)==x3255)<<x3256);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x3305 = INT8_MAX;
	static volatile int32_t x3306 = 38895960;
	volatile int16_t x3308 = 0;

    t95 = (((x3305==x3306)==x3307)<<x3308);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x3321 = 4944U;
	uint16_t x3323 = 56U;
	volatile uint8_t x3324 = 0U;
	int32_t t96 = 6234552;

    t96 = (((x3321==x3322)==x3323)<<x3324);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x3325 = 0U;
	volatile int32_t x3326 = -1;
	int64_t x3327 = 179345723LL;
	static uint8_t x3328 = 1U;

    t97 = (((x3325==x3326)==x3327)<<x3328);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x3365 = INT8_MIN;
	volatile int32_t x3366 = INT32_MIN;

    t98 = (((x3365==x3366)==x3367)<<x3368);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x3369 = UINT32_MAX;
	volatile int16_t x3370 = INT16_MIN;
	int64_t x3371 = INT64_MIN;
	static int16_t x3372 = 29;
	int32_t t99 = -656105;

    t99 = (((x3369==x3370)==x3371)<<x3372);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3381 = INT16_MIN;
	int16_t x3382 = 1399;
	static int16_t x3383 = -1023;
	volatile int32_t x3384 = 0;

    t100 = (((x3381==x3382)==x3383)<<x3384);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x3413 = -1;
	int64_t x3414 = 127012731732LL;
	volatile int8_t x3415 = INT8_MIN;
	static uint16_t x3416 = 4U;
	volatile int32_t t101 = 26753006;

    t101 = (((x3413==x3414)==x3415)<<x3416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x3453 = 36;
	uint32_t x3454 = 1U;
	uint16_t x3456 = 8U;
	int32_t t102 = -450919;

    t102 = (((x3453==x3454)==x3455)<<x3456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3561 = 1563LL;
	int64_t x3562 = 123717LL;
	int64_t x3564 = 16LL;
	volatile int32_t t103 = 35579277;

    t103 = (((x3561==x3562)==x3563)<<x3564);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3641 = INT16_MIN;
	static volatile int8_t x3642 = INT8_MIN;
	uint8_t x3644 = 0U;
	static int32_t t104 = 116843355;

    t104 = (((x3641==x3642)==x3643)<<x3644);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x3679 = 0U;
	volatile int32_t t105 = -1593218;

    t105 = (((x3677==x3678)==x3679)<<x3680);

    if (t105 != 8) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x3718 = UINT64_MAX;
	uint16_t x3719 = UINT16_MAX;
	uint32_t x3720 = 9U;
	static volatile int32_t t106 = -1475460;

    t106 = (((x3717==x3718)==x3719)<<x3720);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3725 = INT64_MIN;
	volatile int32_t x3726 = INT32_MIN;
	uint32_t x3728 = 9U;
	volatile int32_t t107 = -15875;

    t107 = (((x3725==x3726)==x3727)<<x3728);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x3729 = INT16_MIN;
	int64_t x3732 = 1LL;
	static int32_t t108 = 0;

    t108 = (((x3729==x3730)==x3731)<<x3732);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3781 = INT16_MIN;
	volatile uint64_t x3782 = 488607126LLU;
	int64_t x3783 = INT64_MAX;

    t109 = (((x3781==x3782)==x3783)<<x3784);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3825 = INT64_MAX;
	int64_t x3826 = INT64_MIN;
	volatile int16_t x3827 = 195;
	uint16_t x3828 = 3U;
	volatile int32_t t110 = 21;

    t110 = (((x3825==x3826)==x3827)<<x3828);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint16_t x3842 = 25U;
	static uint64_t x3843 = 395133545LLU;
	int32_t t111 = 24;

    t111 = (((x3841==x3842)==x3843)<<x3844);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x3853 = -1LL;
	volatile uint16_t x3854 = UINT16_MAX;
	int32_t x3855 = INT32_MIN;
	int32_t t112 = -126858;

    t112 = (((x3853==x3854)==x3855)<<x3856);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3857 = INT32_MIN;
	int8_t x3858 = 1;

    t113 = (((x3857==x3858)==x3859)<<x3860);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x3865 = 19U;
	uint8_t x3866 = 100U;
	int32_t x3867 = INT32_MIN;
	static uint16_t x3868 = 0U;
	int32_t t114 = 2786089;

    t114 = (((x3865==x3866)==x3867)<<x3868);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x3889 = -3901232651135124LL;
	static uint64_t x3891 = 3067276637LLU;
	static uint8_t x3892 = 3U;

    t115 = (((x3889==x3890)==x3891)<<x3892);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x3901 = 111655148737038LL;
	static int64_t x3902 = INT64_MIN;
	uint32_t x3903 = 2805003U;
	volatile uint8_t x3904 = 24U;
	static volatile int32_t t116 = -234120;

    t116 = (((x3901==x3902)==x3903)<<x3904);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x3909 = 38485649U;
	int16_t x3910 = 31;
	int16_t x3911 = -145;
	uint8_t x3912 = 6U;
	int32_t t117 = 7;

    t117 = (((x3909==x3910)==x3911)<<x3912);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x3945 = UINT32_MAX;
	volatile int64_t x3946 = INT64_MIN;
	static volatile uint16_t x3947 = UINT16_MAX;
	uint8_t x3948 = 1U;
	volatile int32_t t118 = 43358;

    t118 = (((x3945==x3946)==x3947)<<x3948);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x3949 = 824U;
	int16_t x3950 = INT16_MIN;

    t119 = (((x3949==x3950)==x3951)<<x3952);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x3970 = 34;
	int8_t x3971 = -1;
	uint16_t x3972 = 0U;
	int32_t t120 = 15257015;

    t120 = (((x3969==x3970)==x3971)<<x3972);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3981 = -37713134263127LL;
	static int32_t x3982 = INT32_MIN;
	static int32_t x3983 = INT32_MIN;
	int8_t x3984 = 0;
	int32_t t121 = -428548481;

    t121 = (((x3981==x3982)==x3983)<<x3984);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x3989 = INT64_MIN;
	uint16_t x3991 = 99U;
	uint64_t x3992 = 31LLU;
	int32_t t122 = -2891546;

    t122 = (((x3989==x3990)==x3991)<<x3992);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x4005 = 27832016LLU;
	int16_t x4006 = 3;
	static uint32_t x4008 = 5U;

    t123 = (((x4005==x4006)==x4007)<<x4008);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x4017 = 310386U;
	static int16_t x4018 = INT16_MAX;
	uint32_t x4019 = 927571860U;
	uint16_t x4020 = 3U;

    t124 = (((x4017==x4018)==x4019)<<x4020);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x4037 = UINT64_MAX;
	int16_t x4039 = -3706;
	uint8_t x4040 = 1U;

    t125 = (((x4037==x4038)==x4039)<<x4040);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4113 = INT32_MIN;
	uint16_t x4114 = 11641U;
	int16_t x4115 = INT16_MIN;

    t126 = (((x4113==x4114)==x4115)<<x4116);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x4125 = INT32_MIN;
	volatile int8_t x4128 = 3;

    t127 = (((x4125==x4126)==x4127)<<x4128);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4141 = INT16_MIN;
	int64_t x4142 = INT64_MIN;
	uint64_t x4143 = 22829LLU;
	volatile uint16_t x4144 = 1U;

    t128 = (((x4141==x4142)==x4143)<<x4144);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x4177 = 3U;
	int32_t x4178 = -403721;
	static uint64_t x4180 = 7LLU;
	volatile int32_t t129 = -1209;

    t129 = (((x4177==x4178)==x4179)<<x4180);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x4193 = -63;
	uint16_t x4194 = UINT16_MAX;
	int32_t x4195 = INT32_MIN;
	static uint16_t x4196 = 0U;
	volatile int32_t t130 = -1;

    t130 = (((x4193==x4194)==x4195)<<x4196);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x4217 = 976774960628241836LL;
	volatile uint16_t x4218 = 14U;
	int32_t x4219 = INT32_MIN;
	uint16_t x4220 = 1U;
	int32_t t131 = -249667;

    t131 = (((x4217==x4218)==x4219)<<x4220);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x4305 = INT32_MIN;
	volatile int64_t x4306 = INT64_MIN;
	static int8_t x4307 = INT8_MAX;
	uint8_t x4308 = 6U;
	volatile int32_t t132 = 88767908;

    t132 = (((x4305==x4306)==x4307)<<x4308);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4309 = INT64_MIN;
	int16_t x4310 = -105;
	uint8_t x4311 = 7U;
	uint16_t x4312 = 2U;

    t133 = (((x4309==x4310)==x4311)<<x4312);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x4313 = 31LLU;
	volatile int16_t x4315 = INT16_MIN;
	volatile int32_t t134 = -407847;

    t134 = (((x4313==x4314)==x4315)<<x4316);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x4329 = 1325;
	static int8_t x4331 = INT8_MIN;
	uint8_t x4332 = 1U;

    t135 = (((x4329==x4330)==x4331)<<x4332);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x4337 = INT32_MIN;
	uint32_t x4338 = 445U;
	int8_t x4339 = INT8_MIN;
	static uint8_t x4340 = 29U;
	int32_t t136 = 13;

    t136 = (((x4337==x4338)==x4339)<<x4340);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x4357 = INT32_MAX;
	static uint8_t x4359 = 1U;
	int32_t t137 = 2;

    t137 = (((x4357==x4358)==x4359)<<x4360);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4405 = INT8_MIN;
	uint8_t x4406 = UINT8_MAX;
	int64_t x4407 = -346877533LL;
	static int16_t x4408 = 15;
	volatile int32_t t138 = -65294;

    t138 = (((x4405==x4406)==x4407)<<x4408);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4421 = -1;
	int8_t x4422 = INT8_MIN;
	int16_t x4423 = 1590;
	uint32_t x4424 = 29U;
	int32_t t139 = 168333439;

    t139 = (((x4421==x4422)==x4423)<<x4424);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x4433 = -1;
	static int8_t x4435 = INT8_MAX;
	uint16_t x4436 = 10U;
	int32_t t140 = -1;

    t140 = (((x4433==x4434)==x4435)<<x4436);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x4493 = 3319;
	static int16_t x4494 = 0;
	volatile int32_t x4495 = -1;
	int32_t t141 = -8328;

    t141 = (((x4493==x4494)==x4495)<<x4496);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x4533 = INT32_MAX;
	int8_t x4534 = -6;
	int64_t x4535 = 510301LL;
	int16_t x4536 = 0;
	int32_t t142 = -37660933;

    t142 = (((x4533==x4534)==x4535)<<x4536);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x4690 = -1;
	static int64_t x4692 = 28LL;
	volatile int32_t t143 = 53599;

    t143 = (((x4689==x4690)==x4691)<<x4692);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x4715 = INT32_MIN;
	int16_t x4716 = 4;
	static int32_t t144 = 113140;

    t144 = (((x4713==x4714)==x4715)<<x4716);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x4773 = UINT64_MAX;
	uint32_t x4774 = 196392U;
	volatile int8_t x4775 = INT8_MAX;
	int8_t x4776 = 0;

    t145 = (((x4773==x4774)==x4775)<<x4776);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x4793 = UINT8_MAX;
	volatile uint8_t x4794 = UINT8_MAX;
	int16_t x4795 = 1985;
	static volatile int16_t x4796 = 1;
	volatile int32_t t146 = 16677239;

    t146 = (((x4793==x4794)==x4795)<<x4796);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x4801 = UINT8_MAX;
	uint32_t x4804 = 7U;
	volatile int32_t t147 = -6;

    t147 = (((x4801==x4802)==x4803)<<x4804);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x4805 = 8;
	int64_t x4806 = -185556320311282LL;
	int16_t x4807 = -322;
	uint16_t x4808 = 19U;
	int32_t t148 = -14;

    t148 = (((x4805==x4806)==x4807)<<x4808);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4817 = INT8_MIN;
	static int64_t x4819 = 6LL;
	uint8_t x4820 = 22U;
	volatile int32_t t149 = 159461436;

    t149 = (((x4817==x4818)==x4819)<<x4820);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x4857 = UINT32_MAX;
	int16_t x4858 = INT16_MAX;
	volatile int8_t x4859 = -27;
	static uint8_t x4860 = 3U;

    t150 = (((x4857==x4858)==x4859)<<x4860);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x4893 = -23543904LL;
	static int16_t x4895 = INT16_MAX;
	uint16_t x4896 = 1U;
	volatile int32_t t151 = 298589;

    t151 = (((x4893==x4894)==x4895)<<x4896);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x4905 = INT16_MIN;
	int8_t x4906 = INT8_MAX;
	volatile int32_t x4907 = INT32_MIN;
	uint16_t x4908 = 16U;
	int32_t t152 = -301;

    t152 = (((x4905==x4906)==x4907)<<x4908);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x4925 = -6;
	uint8_t x4926 = 1U;
	volatile int32_t x4927 = 0;
	static volatile int32_t t153 = -202549974;

    t153 = (((x4925==x4926)==x4927)<<x4928);

    if (t153 != 64) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x4949 = 20LLU;
	int16_t x4950 = 830;
	static int64_t x4951 = -1LL;

    t154 = (((x4949==x4950)==x4951)<<x4952);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x4957 = -103;
	uint16_t x4958 = UINT16_MAX;
	int16_t x4959 = -1;
	uint8_t x4960 = 1U;
	int32_t t155 = 108;

    t155 = (((x4957==x4958)==x4959)<<x4960);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x4977 = -1;
	int16_t x4978 = -12;
	int16_t x4979 = INT16_MIN;
	int8_t x4980 = 6;
	static volatile int32_t t156 = -1;

    t156 = (((x4977==x4978)==x4979)<<x4980);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x4994 = 1016;
	static int32_t x4995 = 1;
	static int32_t t157 = 346;

    t157 = (((x4993==x4994)==x4995)<<x4996);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x5002 = UINT64_MAX;
	volatile int8_t x5003 = INT8_MIN;
	int8_t x5004 = 3;
	volatile int32_t t158 = 1;

    t158 = (((x5001==x5002)==x5003)<<x5004);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x5013 = INT32_MAX;
	int8_t x5014 = -18;
	volatile int8_t x5015 = 8;
	int32_t x5016 = 1;
	int32_t t159 = 12;

    t159 = (((x5013==x5014)==x5015)<<x5016);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x5053 = -1LL;
	int32_t x5054 = INT32_MIN;
	static uint16_t x5055 = UINT16_MAX;
	volatile uint64_t x5056 = 7LLU;
	volatile int32_t t160 = -1350846;

    t160 = (((x5053==x5054)==x5055)<<x5056);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x5073 = -1;
	int16_t x5074 = -14355;
	int8_t x5075 = INT8_MIN;
	int8_t x5076 = 5;
	volatile int32_t t161 = -2624509;

    t161 = (((x5073==x5074)==x5075)<<x5076);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x5097 = 13U;
	uint8_t x5098 = 127U;
	int32_t x5099 = -341988593;
	uint8_t x5100 = 26U;
	volatile int32_t t162 = 173510373;

    t162 = (((x5097==x5098)==x5099)<<x5100);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x5149 = INT32_MIN;
	uint8_t x5150 = UINT8_MAX;
	int64_t x5151 = -1465542854LL;
	static uint16_t x5152 = 3U;
	int32_t t163 = -1;

    t163 = (((x5149==x5150)==x5151)<<x5152);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x5182 = UINT8_MAX;
	uint8_t x5184 = 2U;
	static volatile int32_t t164 = -182009036;

    t164 = (((x5181==x5182)==x5183)<<x5184);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x5193 = UINT64_MAX;
	uint16_t x5194 = UINT16_MAX;
	uint32_t x5195 = 4398U;
	static volatile int32_t t165 = -1;

    t165 = (((x5193==x5194)==x5195)<<x5196);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x5232 = 3U;
	int32_t t166 = -2;

    t166 = (((x5229==x5230)==x5231)<<x5232);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x5273 = 29U;
	int32_t x5275 = 1;

    t167 = (((x5273==x5274)==x5275)<<x5276);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x5301 = INT8_MIN;
	static volatile uint16_t x5302 = 10U;
	static uint32_t x5303 = 1443U;
	static volatile int32_t t168 = 0;

    t168 = (((x5301==x5302)==x5303)<<x5304);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x5353 = INT8_MIN;
	int32_t x5354 = INT32_MIN;
	int16_t x5356 = 1;
	int32_t t169 = -117576040;

    t169 = (((x5353==x5354)==x5355)<<x5356);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x5357 = 97958U;
	int32_t x5358 = -7236;
	uint8_t x5359 = UINT8_MAX;
	static int8_t x5360 = 0;
	int32_t t170 = 28189;

    t170 = (((x5357==x5358)==x5359)<<x5360);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x5445 = -1;
	int32_t x5446 = INT32_MIN;
	int64_t x5448 = 6LL;

    t171 = (((x5445==x5446)==x5447)<<x5448);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x5489 = INT16_MAX;
	int64_t x5490 = INT64_MIN;
	volatile int32_t x5491 = INT32_MIN;
	volatile int32_t t172 = 191526285;

    t172 = (((x5489==x5490)==x5491)<<x5492);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x5513 = 3U;
	static int8_t x5514 = -1;
	int8_t x5515 = 1;
	int8_t x5516 = 3;
	int32_t t173 = 115840;

    t173 = (((x5513==x5514)==x5515)<<x5516);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x5526 = INT8_MIN;
	static int32_t x5527 = -884;
	uint16_t x5528 = 3U;
	volatile int32_t t174 = 9071;

    t174 = (((x5525==x5526)==x5527)<<x5528);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x5722 = INT64_MAX;
	static int64_t x5723 = INT64_MIN;
	int8_t x5724 = 6;
	static int32_t t175 = 3509978;

    t175 = (((x5721==x5722)==x5723)<<x5724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5745 = INT32_MIN;
	int64_t x5746 = 26587387543144755LL;
	volatile int16_t x5747 = INT16_MIN;
	uint8_t x5748 = 3U;
	volatile int32_t t176 = -10161;

    t176 = (((x5745==x5746)==x5747)<<x5748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x5757 = -1550;
	int32_t x5758 = INT32_MAX;
	static volatile int8_t x5759 = -1;
	uint8_t x5760 = 6U;
	volatile int32_t t177 = 2067;

    t177 = (((x5757==x5758)==x5759)<<x5760);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x5790 = INT8_MAX;
	static uint16_t x5791 = 7578U;
	uint8_t x5792 = 4U;
	volatile int32_t t178 = 2065417;

    t178 = (((x5789==x5790)==x5791)<<x5792);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x5825 = INT64_MIN;
	static int16_t x5826 = -7;
	int32_t x5827 = 33194894;
	int16_t x5828 = 0;
	volatile int32_t t179 = -177;

    t179 = (((x5825==x5826)==x5827)<<x5828);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x5861 = UINT64_MAX;
	volatile int32_t x5862 = INT32_MAX;
	int64_t x5863 = INT64_MIN;
	static uint8_t x5864 = 10U;
	volatile int32_t t180 = -17207;

    t180 = (((x5861==x5862)==x5863)<<x5864);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x5889 = 61096538U;
	uint32_t x5890 = 97U;
	int64_t x5891 = 2378061340199762629LL;
	uint8_t x5892 = 0U;
	volatile int32_t t181 = 561;

    t181 = (((x5889==x5890)==x5891)<<x5892);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x5945 = -1;
	volatile int64_t x5946 = INT64_MIN;
	int8_t x5947 = -14;
	int32_t t182 = -6;

    t182 = (((x5945==x5946)==x5947)<<x5948);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x5973 = -1;
	volatile uint32_t x5974 = 1372687898U;
	int64_t x5975 = INT64_MIN;
	int32_t t183 = 1;

    t183 = (((x5973==x5974)==x5975)<<x5976);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x5997 = INT64_MIN;
	uint8_t x5998 = UINT8_MAX;
	int64_t x5999 = -1LL;
	static uint16_t x6000 = 1U;
	int32_t t184 = -39336735;

    t184 = (((x5997==x5998)==x5999)<<x6000);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x6030 = 1;
	static volatile int8_t x6031 = INT8_MIN;
	static volatile int8_t x6032 = 1;
	volatile int32_t t185 = -43288012;

    t185 = (((x6029==x6030)==x6031)<<x6032);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x6057 = 1956LLU;
	int16_t x6059 = -8;
	uint8_t x6060 = 10U;
	int32_t t186 = -161;

    t186 = (((x6057==x6058)==x6059)<<x6060);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x6061 = 743983118012649LLU;
	int64_t x6062 = INT64_MIN;
	volatile int32_t x6063 = -1;
	volatile uint32_t x6064 = 15U;
	int32_t t187 = -17;

    t187 = (((x6061==x6062)==x6063)<<x6064);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x6066 = 98288167;
	uint8_t x6067 = UINT8_MAX;
	uint32_t x6068 = 15U;
	int32_t t188 = 17250;

    t188 = (((x6065==x6066)==x6067)<<x6068);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x6081 = 9606738419710324LLU;
	uint8_t x6082 = 14U;
	uint32_t x6083 = UINT32_MAX;
	static int8_t x6084 = 1;
	static volatile int32_t t189 = 480884;

    t189 = (((x6081==x6082)==x6083)<<x6084);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x6094 = 9177LLU;
	int8_t x6096 = 30;
	volatile int32_t t190 = 430709294;

    t190 = (((x6093==x6094)==x6095)<<x6096);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x6101 = INT32_MIN;
	int64_t x6102 = 926575327741LL;
	int8_t x6103 = -13;
	static int32_t x6104 = 15;
	int32_t t191 = -2;

    t191 = (((x6101==x6102)==x6103)<<x6104);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x6110 = UINT64_MAX;
	int32_t t192 = 1;

    t192 = (((x6109==x6110)==x6111)<<x6112);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x6141 = 0;
	volatile uint64_t x6142 = 20066035LLU;
	volatile int8_t x6143 = INT8_MAX;
	volatile uint16_t x6144 = 0U;
	static int32_t t193 = 1594;

    t193 = (((x6141==x6142)==x6143)<<x6144);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x6193 = 4088709U;
	uint16_t x6194 = 2U;
	uint16_t x6195 = UINT16_MAX;
	int16_t x6196 = 6;
	int32_t t194 = 193815343;

    t194 = (((x6193==x6194)==x6195)<<x6196);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x6197 = UINT32_MAX;
	int8_t x6198 = INT8_MAX;
	uint32_t x6200 = 6U;
	int32_t t195 = 237875576;

    t195 = (((x6197==x6198)==x6199)<<x6200);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x6225 = 29899;
	uint32_t x6226 = UINT32_MAX;
	static uint32_t x6227 = 99U;
	uint8_t x6228 = 12U;

    t196 = (((x6225==x6226)==x6227)<<x6228);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x6302 = INT32_MIN;
	int32_t x6303 = -1147;
	int8_t x6304 = 11;
	int32_t t197 = -31069;

    t197 = (((x6301==x6302)==x6303)<<x6304);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x6310 = 1785;
	static int64_t x6311 = INT64_MIN;
	static uint8_t x6312 = 2U;
	volatile int32_t t198 = 331;

    t198 = (((x6309==x6310)==x6311)<<x6312);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6349 = -2;
	int64_t x6350 = -1LL;
	int64_t x6351 = INT64_MIN;
	static uint32_t x6352 = 5U;
	volatile int32_t t199 = -157;

    t199 = (((x6349==x6350)==x6351)<<x6352);

    if (t199 != 0) { NG(); } else { ; }
	
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

