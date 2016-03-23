
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

int32_t x169 = -1;
int16_t x171 = -1;
static volatile int64_t x201 = -1LL;
static volatile uint32_t x204 = 2U;
volatile uint16_t x313 = 12U;
uint16_t x381 = 214U;
volatile int32_t x382 = -1;
int8_t x384 = 0;
int16_t x398 = INT16_MIN;
volatile int16_t x425 = INT16_MIN;
int64_t x535 = INT64_MIN;
uint16_t x536 = 3U;
static int64_t x578 = INT64_MIN;
static volatile int32_t t19 = 1;
volatile int32_t t24 = 3;
static int64_t x867 = INT64_MIN;
uint32_t x1000 = 2U;
uint16_t x1017 = 4U;
int32_t t29 = 14;
volatile int16_t x1137 = INT16_MIN;
uint32_t x1138 = UINT32_MAX;
int32_t x1209 = INT32_MAX;
int64_t x1241 = INT64_MAX;
int64_t x1244 = 0LL;
volatile uint64_t x1282 = UINT64_MAX;
volatile int32_t t36 = -4838862;
static int16_t x1302 = 0;
int16_t x1303 = INT16_MAX;
int32_t x1502 = 1603;
volatile uint64_t x1582 = 28673180432LLU;
static volatile uint16_t x1584 = 0U;
int8_t x1585 = INT8_MIN;
static uint32_t x1643 = 591785004U;
volatile uint32_t x1649 = UINT32_MAX;
volatile int64_t x1650 = INT64_MIN;
uint8_t x1652 = 6U;
static int32_t t45 = -798785;
uint64_t x1835 = 682665846LLU;
volatile uint8_t x1898 = UINT8_MAX;
int64_t x1900 = 2LL;
static uint8_t x1916 = 6U;
volatile int32_t t51 = 1457;
static volatile int8_t x1935 = 7;
int64_t x1981 = INT64_MIN;
int16_t x1984 = 30;
uint8_t x2002 = UINT8_MAX;
volatile int16_t x2003 = INT16_MIN;
uint32_t x2099 = UINT32_MAX;
int8_t x2194 = 0;
volatile uint64_t x2195 = UINT64_MAX;
uint16_t x2312 = 5U;
volatile uint8_t x2325 = 53U;
int8_t x2328 = 9;
int64_t x2497 = INT64_MIN;
uint8_t x2523 = 2U;
volatile int32_t t65 = -49;
volatile uint32_t x2548 = 7U;
int32_t t66 = -1;
int32_t x2593 = INT32_MAX;
static int32_t t68 = 1536;
volatile int16_t x2605 = INT16_MIN;
int32_t x2607 = INT32_MIN;
static int32_t x2631 = -1;
static int16_t x2679 = INT16_MAX;
int32_t t71 = -5546893;
int32_t x2757 = INT32_MIN;
int32_t t74 = 1022;
int32_t x2853 = -3419162;
int32_t t75 = 97904;
int64_t x2897 = -956527502548818490LL;
static volatile int8_t x2982 = 1;
int64_t x3014 = INT64_MIN;
static volatile int32_t x3015 = -1;
static uint8_t x3016 = 0U;
uint32_t x3053 = 12210566U;
int32_t t84 = 9;
int64_t x3083 = INT64_MIN;
volatile int64_t x3094 = INT64_MIN;
uint64_t x3133 = 930145056331024542LLU;
int8_t x3135 = -1;
int16_t x3166 = -1;
volatile uint8_t x3167 = 0U;
uint64_t x3201 = UINT64_MAX;
uint8_t x3204 = 1U;
int32_t t90 = -372125;
int16_t x3314 = INT16_MAX;
uint64_t x3357 = 11328636323327LLU;
static uint16_t x3360 = 1U;
int64_t x3421 = INT64_MIN;
int8_t x3424 = 0;
volatile int16_t x3473 = 1;
int8_t x3666 = -1;
volatile int32_t t99 = 27502;
int16_t x3670 = -4191;
static int8_t x3672 = 1;
int32_t t101 = -3;
uint8_t x3949 = UINT8_MAX;
int8_t x3950 = INT8_MIN;
static int8_t x3951 = -1;
int16_t x3961 = 0;
int8_t x3986 = -1;
int64_t x4025 = -3482LL;
static int8_t x4036 = 2;
static int8_t x4125 = INT8_MAX;
int64_t x4127 = 346830868121576019LL;
uint16_t x4128 = 0U;
volatile int32_t t111 = -28;
volatile int32_t t112 = -804148705;
static volatile int32_t x4202 = INT32_MIN;
uint8_t x4204 = 19U;
volatile uint8_t x4252 = 5U;
uint64_t x4287 = 1LLU;
volatile int32_t t118 = -240;
int8_t x4370 = -1;
uint64_t x4375 = 8188371988318777644LLU;
uint64_t x4376 = 8LLU;
int32_t t123 = 2;
static volatile int32_t x4415 = INT32_MIN;
int32_t x4462 = INT32_MAX;
int64_t x4463 = -1LL;
int8_t x4588 = 1;
int32_t x4603 = -1317;
static volatile int16_t x4622 = 265;
uint64_t x4664 = 0LLU;
int32_t x4891 = -1;
int16_t x5117 = -1;
volatile uint64_t x5118 = UINT64_MAX;
uint8_t x5144 = 18U;
int16_t x5158 = INT16_MAX;
uint64_t x5161 = 1230317800395831LLU;
int32_t x5199 = -112199;
int16_t x5204 = 2;
uint8_t x5228 = 0U;
uint16_t x5296 = 26U;
int8_t x5308 = 5;
int32_t t151 = -3433;
static volatile int16_t x5409 = INT16_MIN;
volatile int32_t t155 = 13282;
int16_t x5445 = INT16_MAX;
volatile int16_t x5447 = -1;
volatile int32_t t157 = -1475026;
uint64_t x5478 = 4237426662254013821LLU;
int32_t x5507 = INT32_MIN;
volatile int8_t x5530 = INT8_MIN;
volatile int16_t x5531 = -1;
static int8_t x5548 = 9;
static int32_t t164 = -23;
uint32_t x5587 = UINT32_MAX;
int32_t t166 = 6949;
int64_t x5641 = 1797683589LL;
static int32_t x5643 = -227342;
volatile int32_t t168 = -101964;
uint16_t x5758 = 7U;
volatile int16_t x5911 = INT16_MAX;
int32_t x5935 = -1;
int32_t x5971 = INT32_MAX;
static volatile uint16_t x5973 = UINT16_MAX;
int32_t t178 = 304527;
int32_t t179 = -4079923;
uint32_t x6003 = 89U;
volatile int32_t t180 = -68104123;
uint16_t x6279 = 177U;
int16_t x6315 = INT16_MIN;
static int8_t x6384 = 5;
volatile uint32_t x6458 = 1U;
int8_t x6485 = INT8_MAX;
static uint64_t x6486 = 856492853852LLU;
volatile int32_t t192 = 546118;
uint8_t x6681 = UINT8_MAX;
int32_t t196 = 3704;
int32_t x6751 = INT32_MAX;
volatile int32_t t198 = 450;
volatile uint64_t x6761 = 7725210661043LLU;
volatile int32_t t199 = 679463759;


void f0(void) {
    	int64_t x1 = 18817167LL;
	uint8_t x2 = 4U;
	int16_t x3 = INT16_MIN;
	int8_t x4 = 7;
	int32_t t0 = -72;

    t0 = ((x1<=(x2^x3))<<x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x105 = 952;
	uint32_t x106 = 67U;
	static int64_t x107 = INT64_MAX;
	int16_t x108 = 29;
	static int32_t t1 = 80;

    t1 = ((x105<=(x106^x107))<<x108);

    if (t1 != 536870912) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x109 = UINT8_MAX;
	int8_t x110 = 15;
	uint16_t x111 = 48U;
	uint16_t x112 = 0U;
	int32_t t2 = 2695989;

    t2 = ((x109<=(x110^x111))<<x112);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x137 = -1;
	uint16_t x138 = 175U;
	int64_t x139 = 3655LL;
	volatile int8_t x140 = 0;
	volatile int32_t t3 = -220;

    t3 = ((x137<=(x138^x139))<<x140);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = 1;
	static volatile int32_t t4 = -784;

    t4 = ((x157<=(x158^x159))<<x160);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x161 = -1;
	int16_t x162 = 126;
	static int8_t x163 = INT8_MAX;
	uint32_t x164 = 2U;
	int32_t t5 = -31;

    t5 = ((x161<=(x162^x163))<<x164);

    if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x170 = 3746630961089LLU;
	int32_t x172 = 11;
	int32_t t6 = 3;

    t6 = ((x169<=(x170^x171))<<x172);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x202 = 3U;
	static volatile int16_t x203 = INT16_MIN;
	volatile int32_t t7 = -1299310;

    t7 = ((x201<=(x202^x203))<<x204);

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x277 = -1;
	static int8_t x278 = 15;
	volatile int8_t x279 = -2;
	volatile uint16_t x280 = 15U;
	int32_t t8 = -3294;

    t8 = ((x277<=(x278^x279))<<x280);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x305 = UINT64_MAX;
	static int32_t x306 = INT32_MIN;
	int32_t x307 = 261703;
	static int16_t x308 = 4;
	int32_t t9 = 1434;

    t9 = ((x305<=(x306^x307))<<x308);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x314 = 114648176U;
	uint32_t x315 = 4U;
	uint16_t x316 = 0U;
	volatile int32_t t10 = -78226942;

    t10 = ((x313<=(x314^x315))<<x316);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x377 = -1LL;
	volatile int16_t x378 = -1;
	int32_t x379 = -1476210;
	uint8_t x380 = 3U;
	int32_t t11 = -56132860;

    t11 = ((x377<=(x378^x379))<<x380);

    if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x383 = -93;
	volatile int32_t t12 = 495512422;

    t12 = ((x381<=(x382^x383))<<x384);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x397 = INT64_MAX;
	volatile int16_t x399 = -1;
	uint8_t x400 = 16U;
	volatile int32_t t13 = 30;

    t13 = ((x397<=(x398^x399))<<x400);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x426 = INT32_MIN;
	int32_t x427 = -3;
	uint8_t x428 = 6U;
	int32_t t14 = -103121131;

    t14 = ((x425<=(x426^x427))<<x428);

    if (t14 != 64) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x501 = 209U;
	int16_t x502 = 48;
	volatile int16_t x503 = -1;
	uint64_t x504 = 7LLU;
	volatile int32_t t15 = 0;

    t15 = ((x501<=(x502^x503))<<x504);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x533 = 2U;
	volatile int32_t x534 = -1;
	volatile int32_t t16 = 189014672;

    t16 = ((x533<=(x534^x535))<<x536);

    if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x577 = UINT16_MAX;
	int32_t x579 = INT32_MAX;
	int16_t x580 = 1;
	int32_t t17 = -6;

    t17 = ((x577<=(x578^x579))<<x580);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x701 = 50U;
	static int8_t x702 = 1;
	static int32_t x703 = INT32_MAX;
	int8_t x704 = 30;
	volatile int32_t t18 = -171757657;

    t18 = ((x701<=(x702^x703))<<x704);

    if (t18 != 1073741824) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x713 = -1864947392600602LL;
	uint16_t x714 = 490U;
	volatile uint8_t x715 = UINT8_MAX;
	uint8_t x716 = 0U;

    t19 = ((x713<=(x714^x715))<<x716);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint32_t x782 = 384444U;
	uint64_t x783 = 193124231821115LLU;
	volatile uint8_t x784 = 1U;
	int32_t t20 = -5726135;

    t20 = ((x781<=(x782^x783))<<x784);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x809 = 455U;
	uint64_t x810 = UINT64_MAX;
	int32_t x811 = -2830445;
	int16_t x812 = 0;
	volatile int32_t t21 = -140177;

    t21 = ((x809<=(x810^x811))<<x812);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x821 = -1;
	static volatile int16_t x822 = 4;
	uint8_t x823 = UINT8_MAX;
	uint8_t x824 = 2U;
	volatile int32_t t22 = -971;

    t22 = ((x821<=(x822^x823))<<x824);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x825 = INT64_MAX;
	int32_t x826 = INT32_MIN;
	int8_t x827 = INT8_MIN;
	uint8_t x828 = 23U;
	int32_t t23 = 798;

    t23 = ((x825<=(x826^x827))<<x828);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x861 = -134571341375203LL;
	int64_t x862 = INT64_MIN;
	int64_t x863 = INT64_MIN;
	int16_t x864 = 0;

    t24 = ((x861<=(x862^x863))<<x864);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x865 = INT64_MIN;
	uint64_t x866 = 147LLU;
	static int32_t x868 = 1;
	volatile int32_t t25 = 216;

    t25 = ((x865<=(x866^x867))<<x868);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x933 = INT32_MAX;
	int8_t x934 = INT8_MIN;
	uint64_t x935 = 111438526LLU;
	static int16_t x936 = 1;
	int32_t t26 = 4;

    t26 = ((x933<=(x934^x935))<<x936);

    if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x997 = 1227;
	uint16_t x998 = UINT16_MAX;
	static volatile int8_t x999 = -1;
	int32_t t27 = 511;

    t27 = ((x997<=(x998^x999))<<x1000);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1018 = 23916U;
	volatile int8_t x1019 = -3;
	static uint64_t x1020 = 16LLU;
	volatile int32_t t28 = 31579452;

    t28 = ((x1017<=(x1018^x1019))<<x1020);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1065 = -248;
	static uint64_t x1066 = UINT64_MAX;
	int8_t x1067 = 6;
	uint32_t x1068 = 30U;

    t29 = ((x1065<=(x1066^x1067))<<x1068);

    if (t29 != 1073741824) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1133 = -1;
	int8_t x1134 = -1;
	int32_t x1135 = INT32_MIN;
	volatile int32_t x1136 = 1;
	volatile int32_t t30 = 9938587;

    t30 = ((x1133<=(x1134^x1135))<<x1136);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x1139 = 13LLU;
	int32_t x1140 = 24;
	volatile int32_t t31 = -3006;

    t31 = ((x1137<=(x1138^x1139))<<x1140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1193 = INT64_MIN;
	int64_t x1194 = INT64_MAX;
	volatile int64_t x1195 = -1LL;
	static uint8_t x1196 = 1U;
	int32_t t32 = -2932;

    t32 = ((x1193<=(x1194^x1195))<<x1196);

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1210 = INT64_MIN;
	int64_t x1211 = INT64_MAX;
	int32_t x1212 = 0;
	volatile int32_t t33 = -29;

    t33 = ((x1209<=(x1210^x1211))<<x1212);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x1242 = INT8_MIN;
	volatile uint16_t x1243 = UINT16_MAX;
	int32_t t34 = -892;

    t34 = ((x1241<=(x1242^x1243))<<x1244);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1253 = INT16_MAX;
	volatile int8_t x1254 = -1;
	static int16_t x1255 = INT16_MIN;
	uint8_t x1256 = 0U;
	volatile int32_t t35 = -15;

    t35 = ((x1253<=(x1254^x1255))<<x1256);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x1281 = INT64_MAX;
	volatile int8_t x1283 = -1;
	uint32_t x1284 = 0U;

    t36 = ((x1281<=(x1282^x1283))<<x1284);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x1301 = INT64_MAX;
	int16_t x1304 = 1;
	int32_t t37 = -58751;

    t37 = ((x1301<=(x1302^x1303))<<x1304);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x1321 = INT16_MIN;
	int8_t x1322 = -37;
	uint32_t x1323 = UINT32_MAX;
	int16_t x1324 = 11;
	int32_t t38 = 33769;

    t38 = ((x1321<=(x1322^x1323))<<x1324);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x1369 = UINT16_MAX;
	uint8_t x1370 = UINT8_MAX;
	volatile uint16_t x1371 = UINT16_MAX;
	static int16_t x1372 = 11;
	volatile int32_t t39 = 0;

    t39 = ((x1369<=(x1370^x1371))<<x1372);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x1377 = -24;
	int8_t x1378 = INT8_MIN;
	int64_t x1379 = INT64_MIN;
	volatile int8_t x1380 = 0;
	int32_t t40 = -4595387;

    t40 = ((x1377<=(x1378^x1379))<<x1380);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x1501 = UINT8_MAX;
	int64_t x1503 = INT64_MIN;
	int8_t x1504 = 9;
	int32_t t41 = 221866384;

    t41 = ((x1501<=(x1502^x1503))<<x1504);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x1581 = INT64_MIN;
	int64_t x1583 = INT64_MAX;
	static int32_t t42 = 7;

    t42 = ((x1581<=(x1582^x1583))<<x1584);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1586 = INT32_MAX;
	uint32_t x1587 = UINT32_MAX;
	volatile uint8_t x1588 = 15U;
	volatile int32_t t43 = 1;

    t43 = ((x1585<=(x1586^x1587))<<x1588);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x1641 = 240U;
	int16_t x1642 = INT16_MIN;
	volatile uint16_t x1644 = 19U;
	static int32_t t44 = -1;

    t44 = ((x1641<=(x1642^x1643))<<x1644);

    if (t44 != 524288) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1651 = -1;

    t45 = ((x1649<=(x1650^x1651))<<x1652);

    if (t45 != 64) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x1733 = -47252608594416LL;
	int64_t x1734 = 11129050636677LL;
	uint64_t x1735 = UINT64_MAX;
	int16_t x1736 = 0;
	volatile int32_t t46 = 1768914;

    t46 = ((x1733<=(x1734^x1735))<<x1736);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x1757 = INT16_MAX;
	int16_t x1758 = -1;
	static volatile int16_t x1759 = -1;
	int16_t x1760 = 1;
	int32_t t47 = 181171;

    t47 = ((x1757<=(x1758^x1759))<<x1760);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x1833 = INT16_MAX;
	uint16_t x1834 = 18U;
	uint8_t x1836 = 2U;
	int32_t t48 = 184089;

    t48 = ((x1833<=(x1834^x1835))<<x1836);

    if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x1865 = 0U;
	int64_t x1866 = -126500LL;
	volatile uint64_t x1867 = 249562325676623208LLU;
	uint16_t x1868 = 3U;
	int32_t t49 = 132873;

    t49 = ((x1865<=(x1866^x1867))<<x1868);

    if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x1897 = 11;
	volatile uint8_t x1899 = 1U;
	volatile int32_t t50 = 862;

    t50 = ((x1897<=(x1898^x1899))<<x1900);

    if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1913 = INT32_MAX;
	int64_t x1914 = INT64_MIN;
	static int64_t x1915 = 19LL;

    t51 = ((x1913<=(x1914^x1915))<<x1916);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x1933 = 30861484439996LLU;
	uint64_t x1934 = 454LLU;
	int16_t x1936 = 0;
	int32_t t52 = -43510419;

    t52 = ((x1933<=(x1934^x1935))<<x1936);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1982 = INT64_MIN;
	uint64_t x1983 = 2014LLU;
	int32_t t53 = -204851;

    t53 = ((x1981<=(x1982^x1983))<<x1984);

    if (t53 != 1073741824) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2001 = INT8_MIN;
	uint8_t x2004 = 6U;
	volatile int32_t t54 = 13925246;

    t54 = ((x2001<=(x2002^x2003))<<x2004);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2097 = -1;
	static int64_t x2098 = INT64_MAX;
	int16_t x2100 = 1;
	int32_t t55 = -12421210;

    t55 = ((x2097<=(x2098^x2099))<<x2100);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x2193 = 0U;
	uint8_t x2196 = 9U;
	int32_t t56 = 0;

    t56 = ((x2193<=(x2194^x2195))<<x2196);

    if (t56 != 512) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x2201 = INT8_MAX;
	int64_t x2202 = INT64_MIN;
	static int64_t x2203 = INT64_MIN;
	volatile int8_t x2204 = 1;
	int32_t t57 = 7623;

    t57 = ((x2201<=(x2202^x2203))<<x2204);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2209 = INT16_MIN;
	int64_t x2210 = INT64_MIN;
	static uint32_t x2211 = 675U;
	int8_t x2212 = 1;
	volatile int32_t t58 = 30573769;

    t58 = ((x2209<=(x2210^x2211))<<x2212);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2301 = 56U;
	volatile int8_t x2302 = INT8_MAX;
	int16_t x2303 = 0;
	int8_t x2304 = 1;
	int32_t t59 = -1432819;

    t59 = ((x2301<=(x2302^x2303))<<x2304);

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2309 = -3444;
	volatile int32_t x2310 = 25819015;
	static int16_t x2311 = 0;
	static volatile int32_t t60 = 17634;

    t60 = ((x2309<=(x2310^x2311))<<x2312);

    if (t60 != 32) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x2326 = INT64_MIN;
	int16_t x2327 = INT16_MIN;
	volatile int32_t t61 = -1;

    t61 = ((x2325<=(x2326^x2327))<<x2328);

    if (t61 != 512) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2485 = 82206198114754LLU;
	int8_t x2486 = -1;
	int64_t x2487 = INT64_MAX;
	int8_t x2488 = 5;
	int32_t t62 = 848;

    t62 = ((x2485<=(x2486^x2487))<<x2488);

    if (t62 != 32) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2498 = 21497U;
	int64_t x2499 = INT64_MIN;
	int8_t x2500 = 0;
	int32_t t63 = -359195;

    t63 = ((x2497<=(x2498^x2499))<<x2500);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x2513 = INT32_MAX;
	uint32_t x2514 = 24701334U;
	int32_t x2515 = INT32_MIN;
	int32_t x2516 = 2;
	volatile int32_t t64 = 18642768;

    t64 = ((x2513<=(x2514^x2515))<<x2516);

    if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2521 = -9;
	volatile int16_t x2522 = INT16_MAX;
	volatile uint32_t x2524 = 8U;

    t65 = ((x2521<=(x2522^x2523))<<x2524);

    if (t65 != 256) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2545 = 46U;
	int64_t x2546 = 13762103523362LL;
	uint32_t x2547 = UINT32_MAX;

    t66 = ((x2545<=(x2546^x2547))<<x2548);

    if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x2549 = UINT8_MAX;
	uint64_t x2550 = 1650596516LLU;
	int32_t x2551 = -1;
	int32_t x2552 = 0;
	volatile int32_t t67 = 113672;

    t67 = ((x2549<=(x2550^x2551))<<x2552);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x2594 = -1;
	uint64_t x2595 = UINT64_MAX;
	volatile uint16_t x2596 = 0U;

    t68 = ((x2593<=(x2594^x2595))<<x2596);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2606 = -321069411127LL;
	int8_t x2608 = 10;
	int32_t t69 = -7041;

    t69 = ((x2605<=(x2606^x2607))<<x2608);

    if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x2629 = INT64_MAX;
	uint64_t x2630 = UINT64_MAX;
	uint8_t x2632 = 1U;
	volatile int32_t t70 = -270;

    t70 = ((x2629<=(x2630^x2631))<<x2632);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x2677 = INT32_MIN;
	static int16_t x2678 = -4;
	int16_t x2680 = 11;

    t71 = ((x2677<=(x2678^x2679))<<x2680);

    if (t71 != 2048) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x2685 = UINT8_MAX;
	int32_t x2686 = INT32_MAX;
	volatile uint16_t x2687 = 461U;
	uint8_t x2688 = 1U;
	static int32_t t72 = -183237;

    t72 = ((x2685<=(x2686^x2687))<<x2688);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2758 = INT8_MIN;
	uint16_t x2759 = UINT16_MAX;
	uint16_t x2760 = 4U;
	volatile int32_t t73 = 21;

    t73 = ((x2757<=(x2758^x2759))<<x2760);

    if (t73 != 16) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2773 = -1;
	uint64_t x2774 = 1873632LLU;
	int8_t x2775 = INT8_MIN;
	static int8_t x2776 = 0;

    t74 = ((x2773<=(x2774^x2775))<<x2776);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2854 = INT32_MIN;
	int32_t x2855 = -9;
	volatile int32_t x2856 = 5;

    t75 = ((x2853<=(x2854^x2855))<<x2856);

    if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x2869 = UINT64_MAX;
	static int64_t x2870 = 24280888LL;
	volatile uint32_t x2871 = 85770622U;
	uint16_t x2872 = 0U;
	static volatile int32_t t76 = -8;

    t76 = ((x2869<=(x2870^x2871))<<x2872);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2898 = INT8_MIN;
	int32_t x2899 = INT32_MIN;
	uint16_t x2900 = 17U;
	volatile int32_t t77 = 29189;

    t77 = ((x2897<=(x2898^x2899))<<x2900);

    if (t77 != 131072) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2921 = INT32_MAX;
	static int8_t x2922 = INT8_MIN;
	static uint16_t x2923 = 1U;
	uint8_t x2924 = 4U;
	static volatile int32_t t78 = -159816;

    t78 = ((x2921<=(x2922^x2923))<<x2924);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x2925 = 15302558655120753LLU;
	int16_t x2926 = -1;
	int16_t x2927 = -1;
	uint16_t x2928 = 1U;
	volatile int32_t t79 = 1;

    t79 = ((x2925<=(x2926^x2927))<<x2928);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x2953 = 1766029250836115612LLU;
	int8_t x2954 = -1;
	static volatile uint16_t x2955 = 188U;
	uint8_t x2956 = 1U;
	volatile int32_t t80 = -357269;

    t80 = ((x2953<=(x2954^x2955))<<x2956);

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2981 = -4117;
	int64_t x2983 = 167106057728709LL;
	volatile int8_t x2984 = 14;
	static int32_t t81 = -177324375;

    t81 = ((x2981<=(x2982^x2983))<<x2984);

    if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x2985 = 419106U;
	uint8_t x2986 = 0U;
	int64_t x2987 = INT64_MIN;
	static int32_t x2988 = 0;
	int32_t t82 = -410896642;

    t82 = ((x2985<=(x2986^x2987))<<x2988);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x3013 = 566;
	int32_t t83 = -2;

    t83 = ((x3013<=(x3014^x3015))<<x3016);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x3054 = 1398LLU;
	int8_t x3055 = 24;
	volatile uint8_t x3056 = 1U;

    t84 = ((x3053<=(x3054^x3055))<<x3056);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x3081 = -1;
	static int64_t x3082 = INT64_MIN;
	static volatile uint8_t x3084 = 0U;
	volatile int32_t t85 = 49152873;

    t85 = ((x3081<=(x3082^x3083))<<x3084);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x3093 = 0U;
	static volatile uint8_t x3095 = UINT8_MAX;
	int32_t x3096 = 0;
	volatile int32_t t86 = 6136046;

    t86 = ((x3093<=(x3094^x3095))<<x3096);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x3134 = 10437290;
	uint16_t x3136 = 23U;
	volatile int32_t t87 = 577280694;

    t87 = ((x3133<=(x3134^x3135))<<x3136);

    if (t87 != 8388608) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3165 = INT64_MAX;
	uint8_t x3168 = 26U;
	int32_t t88 = -4;

    t88 = ((x3165<=(x3166^x3167))<<x3168);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x3202 = UINT8_MAX;
	uint32_t x3203 = 1630778U;
	int32_t t89 = 403;

    t89 = ((x3201<=(x3202^x3203))<<x3204);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x3249 = INT64_MIN;
	volatile int16_t x3250 = INT16_MAX;
	uint8_t x3251 = 1U;
	uint8_t x3252 = 3U;

    t90 = ((x3249<=(x3250^x3251))<<x3252);

    if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x3313 = -1;
	volatile int64_t x3315 = INT64_MIN;
	volatile uint16_t x3316 = 4U;
	volatile int32_t t91 = -41122;

    t91 = ((x3313<=(x3314^x3315))<<x3316);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x3325 = -245;
	static volatile uint64_t x3326 = UINT64_MAX;
	uint32_t x3327 = 26325U;
	volatile int8_t x3328 = 20;
	volatile int32_t t92 = 62162585;

    t92 = ((x3325<=(x3326^x3327))<<x3328);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x3358 = UINT32_MAX;
	uint32_t x3359 = 0U;
	int32_t t93 = -805;

    t93 = ((x3357<=(x3358^x3359))<<x3360);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x3409 = 1486103U;
	int8_t x3410 = INT8_MAX;
	int32_t x3411 = -97592;
	static uint8_t x3412 = 4U;
	volatile int32_t t94 = 1;

    t94 = ((x3409<=(x3410^x3411))<<x3412);

    if (t94 != 16) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x3417 = UINT64_MAX;
	int8_t x3418 = 0;
	uint8_t x3419 = 2U;
	volatile int32_t x3420 = 2;
	volatile int32_t t95 = -1463;

    t95 = ((x3417<=(x3418^x3419))<<x3420);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x3422 = 78U;
	uint16_t x3423 = 14295U;
	volatile int32_t t96 = -3661046;

    t96 = ((x3421<=(x3422^x3423))<<x3424);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x3461 = INT32_MIN;
	volatile int16_t x3462 = INT16_MAX;
	uint8_t x3463 = UINT8_MAX;
	volatile uint64_t x3464 = 2LLU;
	static volatile int32_t t97 = 1379;

    t97 = ((x3461<=(x3462^x3463))<<x3464);

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3474 = -47507118LL;
	int64_t x3475 = 30416376LL;
	int16_t x3476 = 0;
	volatile int32_t t98 = -398;

    t98 = ((x3473<=(x3474^x3475))<<x3476);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x3665 = -1;
	int8_t x3667 = 2;
	uint8_t x3668 = 0U;

    t99 = ((x3665<=(x3666^x3667))<<x3668);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x3669 = INT64_MAX;
	int64_t x3671 = -1LL;
	volatile int32_t t100 = -532650560;

    t100 = ((x3669<=(x3670^x3671))<<x3672);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x3737 = UINT8_MAX;
	volatile int64_t x3738 = INT64_MAX;
	int16_t x3739 = -1;
	volatile uint32_t x3740 = 4U;

    t101 = ((x3737<=(x3738^x3739))<<x3740);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3745 = UINT32_MAX;
	static int32_t x3746 = 101;
	uint8_t x3747 = 6U;
	uint8_t x3748 = 11U;
	int32_t t102 = 1219;

    t102 = ((x3745<=(x3746^x3747))<<x3748);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x3865 = INT32_MIN;
	uint16_t x3866 = 1948U;
	static int32_t x3867 = 434077060;
	uint64_t x3868 = 5LLU;
	int32_t t103 = -310835461;

    t103 = ((x3865<=(x3866^x3867))<<x3868);

    if (t103 != 32) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x3905 = 24U;
	int16_t x3906 = INT16_MIN;
	volatile uint32_t x3907 = 448U;
	volatile uint16_t x3908 = 3U;
	volatile int32_t t104 = -48077;

    t104 = ((x3905<=(x3906^x3907))<<x3908);

    if (t104 != 8) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x3952 = 2U;
	volatile int32_t t105 = 1664;

    t105 = ((x3949<=(x3950^x3951))<<x3952);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x3962 = 676U;
	volatile uint8_t x3963 = 3U;
	int16_t x3964 = 1;
	static volatile int32_t t106 = -2558;

    t106 = ((x3961<=(x3962^x3963))<<x3964);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x3985 = 0U;
	volatile int8_t x3987 = INT8_MIN;
	uint8_t x3988 = 12U;
	int32_t t107 = -28343408;

    t107 = ((x3985<=(x3986^x3987))<<x3988);

    if (t107 != 4096) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x4026 = INT64_MAX;
	int64_t x4027 = 653LL;
	uint16_t x4028 = 7U;
	volatile int32_t t108 = -726391935;

    t108 = ((x4025<=(x4026^x4027))<<x4028);

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x4033 = INT16_MAX;
	volatile int64_t x4034 = INT64_MIN;
	static int8_t x4035 = -54;
	static int32_t t109 = 2;

    t109 = ((x4033<=(x4034^x4035))<<x4036);

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x4057 = INT16_MIN;
	static int64_t x4058 = INT64_MAX;
	uint32_t x4059 = UINT32_MAX;
	volatile uint8_t x4060 = 17U;
	int32_t t110 = -5512012;

    t110 = ((x4057<=(x4058^x4059))<<x4060);

    if (t110 != 131072) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x4126 = INT8_MAX;

    t111 = ((x4125<=(x4126^x4127))<<x4128);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x4137 = -1;
	int16_t x4138 = INT16_MIN;
	uint8_t x4139 = 82U;
	uint16_t x4140 = 9U;

    t112 = ((x4137<=(x4138^x4139))<<x4140);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x4197 = INT64_MIN;
	volatile int8_t x4198 = -1;
	int16_t x4199 = INT16_MIN;
	volatile uint8_t x4200 = 2U;
	static int32_t t113 = 1;

    t113 = ((x4197<=(x4198^x4199))<<x4200);

    if (t113 != 4) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x4201 = 0U;
	static int64_t x4203 = -1LL;
	volatile int32_t t114 = -483033332;

    t114 = ((x4201<=(x4202^x4203))<<x4204);

    if (t114 != 524288) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x4245 = 9U;
	static volatile uint32_t x4246 = UINT32_MAX;
	uint16_t x4247 = 32U;
	uint32_t x4248 = 7U;
	int32_t t115 = 1565;

    t115 = ((x4245<=(x4246^x4247))<<x4248);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x4249 = UINT16_MAX;
	static volatile uint16_t x4250 = 0U;
	int16_t x4251 = 7;
	volatile int32_t t116 = 37722770;

    t116 = ((x4249<=(x4250^x4251))<<x4252);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x4285 = -215;
	int16_t x4286 = 4;
	uint16_t x4288 = 1U;
	volatile int32_t t117 = -114;

    t117 = ((x4285<=(x4286^x4287))<<x4288);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x4293 = 16231LLU;
	volatile int16_t x4294 = -94;
	int16_t x4295 = -1;
	uint8_t x4296 = 5U;

    t118 = ((x4293<=(x4294^x4295))<<x4296);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x4309 = -1;
	volatile int8_t x4310 = INT8_MIN;
	int32_t x4311 = -1;
	uint16_t x4312 = 1U;
	volatile int32_t t119 = -90628;

    t119 = ((x4309<=(x4310^x4311))<<x4312);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x4369 = -1;
	int16_t x4371 = INT16_MIN;
	static uint8_t x4372 = 2U;
	volatile int32_t t120 = 65477234;

    t120 = ((x4369<=(x4370^x4371))<<x4372);

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x4373 = INT32_MIN;
	int16_t x4374 = -1;
	static volatile int32_t t121 = -747907818;

    t121 = ((x4373<=(x4374^x4375))<<x4376);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x4377 = 13U;
	uint16_t x4378 = 1U;
	volatile uint64_t x4379 = UINT64_MAX;
	volatile uint8_t x4380 = 2U;
	int32_t t122 = -342582007;

    t122 = ((x4377<=(x4378^x4379))<<x4380);

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x4393 = INT8_MIN;
	volatile int8_t x4394 = -1;
	static int64_t x4395 = 681457859925947LL;
	uint8_t x4396 = 3U;

    t123 = ((x4393<=(x4394^x4395))<<x4396);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x4413 = INT16_MIN;
	volatile int16_t x4414 = 9751;
	static uint8_t x4416 = 1U;
	volatile int32_t t124 = 20;

    t124 = ((x4413<=(x4414^x4415))<<x4416);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x4421 = 777U;
	uint16_t x4422 = UINT16_MAX;
	int32_t x4423 = -248117;
	static uint8_t x4424 = 27U;
	volatile int32_t t125 = -93504;

    t125 = ((x4421<=(x4422^x4423))<<x4424);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4461 = -1;
	uint8_t x4464 = 2U;
	static volatile int32_t t126 = 1046;

    t126 = ((x4461<=(x4462^x4463))<<x4464);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x4529 = INT64_MIN;
	static int8_t x4530 = INT8_MIN;
	int8_t x4531 = INT8_MIN;
	volatile uint16_t x4532 = 22U;
	volatile int32_t t127 = 6;

    t127 = ((x4529<=(x4530^x4531))<<x4532);

    if (t127 != 4194304) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x4577 = UINT16_MAX;
	static int16_t x4578 = -1;
	uint64_t x4579 = 47398417111897677LLU;
	static uint64_t x4580 = 3LLU;
	static volatile int32_t t128 = 8865;

    t128 = ((x4577<=(x4578^x4579))<<x4580);

    if (t128 != 8) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x4585 = UINT8_MAX;
	uint8_t x4586 = 29U;
	volatile int32_t x4587 = -1;
	volatile int32_t t129 = 28755024;

    t129 = ((x4585<=(x4586^x4587))<<x4588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x4601 = 15U;
	static int8_t x4602 = INT8_MIN;
	volatile int16_t x4604 = 3;
	static volatile int32_t t130 = 327866000;

    t130 = ((x4601<=(x4602^x4603))<<x4604);

    if (t130 != 8) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x4609 = INT16_MIN;
	int64_t x4610 = -1LL;
	int64_t x4611 = INT64_MIN;
	int8_t x4612 = 1;
	int32_t t131 = 785069;

    t131 = ((x4609<=(x4610^x4611))<<x4612);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4613 = -2;
	uint32_t x4614 = 82882438U;
	uint8_t x4615 = 1U;
	uint16_t x4616 = 5U;
	volatile int32_t t132 = -702;

    t132 = ((x4613<=(x4614^x4615))<<x4616);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x4621 = INT64_MIN;
	static int8_t x4623 = INT8_MIN;
	int8_t x4624 = 15;
	volatile int32_t t133 = 1;

    t133 = ((x4621<=(x4622^x4623))<<x4624);

    if (t133 != 32768) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x4629 = 54LLU;
	uint8_t x4630 = UINT8_MAX;
	static int16_t x4631 = INT16_MAX;
	int8_t x4632 = 4;
	int32_t t134 = 37312481;

    t134 = ((x4629<=(x4630^x4631))<<x4632);

    if (t134 != 16) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x4661 = INT64_MIN;
	uint32_t x4662 = UINT32_MAX;
	uint8_t x4663 = 7U;
	int32_t t135 = -85537718;

    t135 = ((x4661<=(x4662^x4663))<<x4664);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4705 = INT16_MAX;
	static uint32_t x4706 = 14507929U;
	volatile uint8_t x4707 = 0U;
	int8_t x4708 = 3;
	int32_t t136 = -31003324;

    t136 = ((x4705<=(x4706^x4707))<<x4708);

    if (t136 != 8) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x4869 = INT16_MIN;
	volatile uint8_t x4870 = UINT8_MAX;
	int8_t x4871 = INT8_MAX;
	uint16_t x4872 = 6U;
	static volatile int32_t t137 = -251877;

    t137 = ((x4869<=(x4870^x4871))<<x4872);

    if (t137 != 64) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x4889 = INT8_MAX;
	int8_t x4890 = INT8_MIN;
	volatile uint16_t x4892 = 0U;
	int32_t t138 = -72;

    t138 = ((x4889<=(x4890^x4891))<<x4892);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x5119 = 4U;
	int8_t x5120 = 10;
	volatile int32_t t139 = 14679;

    t139 = ((x5117<=(x5118^x5119))<<x5120);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x5125 = -3;
	int32_t x5126 = -1;
	uint64_t x5127 = 124175237027960LLU;
	int8_t x5128 = 0;
	static volatile int32_t t140 = -13;

    t140 = ((x5125<=(x5126^x5127))<<x5128);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x5129 = 100;
	int32_t x5130 = INT32_MIN;
	volatile int8_t x5131 = INT8_MAX;
	volatile uint8_t x5132 = 0U;
	volatile int32_t t141 = -181;

    t141 = ((x5129<=(x5130^x5131))<<x5132);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x5137 = 2184124580544LL;
	volatile int16_t x5138 = INT16_MIN;
	uint32_t x5139 = 269235U;
	static uint8_t x5140 = 0U;
	volatile int32_t t142 = 1258;

    t142 = ((x5137<=(x5138^x5139))<<x5140);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x5141 = INT8_MIN;
	volatile int32_t x5142 = INT32_MIN;
	int64_t x5143 = INT64_MAX;
	volatile int32_t t143 = 4121119;

    t143 = ((x5141<=(x5142^x5143))<<x5144);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x5157 = INT8_MIN;
	static int32_t x5159 = INT32_MAX;
	static uint16_t x5160 = 14U;
	int32_t t144 = -1324020;

    t144 = ((x5157<=(x5158^x5159))<<x5160);

    if (t144 != 16384) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x5162 = 823;
	static int32_t x5163 = -152639203;
	static uint32_t x5164 = 0U;
	volatile int32_t t145 = -174;

    t145 = ((x5161<=(x5162^x5163))<<x5164);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x5197 = INT32_MAX;
	static int16_t x5198 = -953;
	uint16_t x5200 = 2U;
	int32_t t146 = -53606278;

    t146 = ((x5197<=(x5198^x5199))<<x5200);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x5201 = -1;
	int32_t x5202 = INT32_MIN;
	int16_t x5203 = INT16_MAX;
	volatile int32_t t147 = 211639857;

    t147 = ((x5201<=(x5202^x5203))<<x5204);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x5225 = 294804544U;
	int64_t x5226 = INT64_MAX;
	uint16_t x5227 = 451U;
	volatile int32_t t148 = 41;

    t148 = ((x5225<=(x5226^x5227))<<x5228);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x5293 = INT16_MAX;
	int64_t x5294 = -510152450546781518LL;
	int16_t x5295 = INT16_MAX;
	volatile int32_t t149 = 0;

    t149 = ((x5293<=(x5294^x5295))<<x5296);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x5305 = -1;
	int8_t x5306 = 15;
	volatile int16_t x5307 = -1;
	volatile int32_t t150 = -167965;

    t150 = ((x5305<=(x5306^x5307))<<x5308);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x5361 = INT64_MAX;
	int32_t x5362 = INT32_MAX;
	volatile uint32_t x5363 = 20051961U;
	int8_t x5364 = 0;

    t151 = ((x5361<=(x5362^x5363))<<x5364);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5393 = 2676327U;
	uint64_t x5394 = 105064297839958419LLU;
	int16_t x5395 = INT16_MIN;
	volatile uint8_t x5396 = 4U;
	volatile int32_t t152 = 26;

    t152 = ((x5393<=(x5394^x5395))<<x5396);

    if (t152 != 16) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5397 = -3000509529857435966LL;
	int8_t x5398 = INT8_MAX;
	int16_t x5399 = -1;
	uint32_t x5400 = 0U;
	int32_t t153 = -38;

    t153 = ((x5397<=(x5398^x5399))<<x5400);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x5405 = 6452374404914LLU;
	static int8_t x5406 = 9;
	static volatile uint32_t x5407 = UINT32_MAX;
	volatile uint32_t x5408 = 15U;
	volatile int32_t t154 = -15;

    t154 = ((x5405<=(x5406^x5407))<<x5408);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x5410 = INT64_MIN;
	uint16_t x5411 = UINT16_MAX;
	uint8_t x5412 = 9U;

    t155 = ((x5409<=(x5410^x5411))<<x5412);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x5421 = 4LLU;
	int8_t x5422 = 1;
	static uint64_t x5423 = 191286LLU;
	volatile int32_t x5424 = 1;
	volatile int32_t t156 = 14498;

    t156 = ((x5421<=(x5422^x5423))<<x5424);

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x5446 = 17;
	int8_t x5448 = 1;

    t157 = ((x5445<=(x5446^x5447))<<x5448);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x5453 = 31U;
	int32_t x5454 = 14;
	static uint32_t x5455 = 116397U;
	volatile int16_t x5456 = 2;
	int32_t t158 = -25;

    t158 = ((x5453<=(x5454^x5455))<<x5456);

    if (t158 != 4) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x5477 = UINT8_MAX;
	int64_t x5479 = INT64_MAX;
	uint8_t x5480 = 29U;
	volatile int32_t t159 = -8453485;

    t159 = ((x5477<=(x5478^x5479))<<x5480);

    if (t159 != 536870912) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5497 = INT16_MIN;
	int32_t x5498 = INT32_MIN;
	int16_t x5499 = -1;
	volatile uint8_t x5500 = 15U;
	int32_t t160 = 16256318;

    t160 = ((x5497<=(x5498^x5499))<<x5500);

    if (t160 != 32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x5505 = INT16_MIN;
	int16_t x5506 = INT16_MIN;
	static volatile uint8_t x5508 = 2U;
	int32_t t161 = -16446319;

    t161 = ((x5505<=(x5506^x5507))<<x5508);

    if (t161 != 4) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x5529 = INT16_MIN;
	int32_t x5532 = 1;
	volatile int32_t t162 = 1012;

    t162 = ((x5529<=(x5530^x5531))<<x5532);

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x5533 = INT8_MIN;
	volatile int64_t x5534 = -1385006078LL;
	int64_t x5535 = 74LL;
	uint8_t x5536 = 3U;
	int32_t t163 = -133648;

    t163 = ((x5533<=(x5534^x5535))<<x5536);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x5545 = 105U;
	static int8_t x5546 = INT8_MAX;
	static int64_t x5547 = -1990LL;

    t164 = ((x5545<=(x5546^x5547))<<x5548);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x5585 = INT32_MIN;
	volatile uint64_t x5586 = 57347597957LLU;
	static int8_t x5588 = 0;
	int32_t t165 = 3467193;

    t165 = ((x5585<=(x5586^x5587))<<x5588);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x5637 = -190;
	int8_t x5638 = -1;
	uint64_t x5639 = 3130812699051749LLU;
	uint8_t x5640 = 10U;

    t166 = ((x5637<=(x5638^x5639))<<x5640);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x5642 = 1600U;
	volatile int8_t x5644 = 0;
	static volatile int32_t t167 = 162;

    t167 = ((x5641<=(x5642^x5643))<<x5644);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x5661 = UINT8_MAX;
	int32_t x5662 = -28481858;
	static int16_t x5663 = 23;
	static int8_t x5664 = 6;

    t168 = ((x5661<=(x5662^x5663))<<x5664);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x5673 = UINT64_MAX;
	static uint32_t x5674 = 4887U;
	volatile uint32_t x5675 = 1U;
	uint32_t x5676 = 1U;
	int32_t t169 = -34;

    t169 = ((x5673<=(x5674^x5675))<<x5676);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x5757 = UINT32_MAX;
	uint32_t x5759 = UINT32_MAX;
	uint16_t x5760 = 11U;
	int32_t t170 = -1685306;

    t170 = ((x5757<=(x5758^x5759))<<x5760);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x5865 = 0U;
	static volatile int16_t x5866 = -1;
	static uint16_t x5867 = 392U;
	int8_t x5868 = 13;
	volatile int32_t t171 = -2215041;

    t171 = ((x5865<=(x5866^x5867))<<x5868);

    if (t171 != 8192) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x5893 = -1;
	uint16_t x5894 = 1416U;
	uint32_t x5895 = UINT32_MAX;
	int8_t x5896 = 23;
	int32_t t172 = 11958;

    t172 = ((x5893<=(x5894^x5895))<<x5896);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x5909 = INT16_MIN;
	volatile uint8_t x5910 = UINT8_MAX;
	uint16_t x5912 = 1U;
	volatile int32_t t173 = 382226392;

    t173 = ((x5909<=(x5910^x5911))<<x5912);

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x5925 = 8U;
	int64_t x5926 = INT64_MIN;
	static volatile int64_t x5927 = -1LL;
	uint8_t x5928 = 11U;
	int32_t t174 = 1;

    t174 = ((x5925<=(x5926^x5927))<<x5928);

    if (t174 != 2048) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x5933 = INT8_MIN;
	int64_t x5934 = INT64_MAX;
	uint8_t x5936 = 3U;
	volatile int32_t t175 = -15887;

    t175 = ((x5933<=(x5934^x5935))<<x5936);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x5961 = 77071LL;
	static int64_t x5962 = INT64_MIN;
	int16_t x5963 = 1084;
	uint16_t x5964 = 1U;
	static volatile int32_t t176 = -138;

    t176 = ((x5961<=(x5962^x5963))<<x5964);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x5969 = INT32_MIN;
	uint32_t x5970 = 592465U;
	uint8_t x5972 = 0U;
	int32_t t177 = -184;

    t177 = ((x5969<=(x5970^x5971))<<x5972);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5974 = 15U;
	int8_t x5975 = INT8_MIN;
	uint8_t x5976 = 1U;

    t178 = ((x5973<=(x5974^x5975))<<x5976);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5989 = UINT8_MAX;
	uint8_t x5990 = 103U;
	int32_t x5991 = INT32_MAX;
	static uint16_t x5992 = 0U;

    t179 = ((x5989<=(x5990^x5991))<<x5992);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x6001 = 14U;
	int64_t x6002 = INT64_MIN;
	uint16_t x6004 = 5U;

    t180 = ((x6001<=(x6002^x6003))<<x6004);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x6049 = INT64_MIN;
	int64_t x6050 = INT64_MIN;
	int32_t x6051 = -1;
	uint16_t x6052 = 12U;
	int32_t t181 = -1998845;

    t181 = ((x6049<=(x6050^x6051))<<x6052);

    if (t181 != 4096) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x6069 = 6315413LLU;
	static int16_t x6070 = INT16_MAX;
	volatile int32_t x6071 = -6;
	uint16_t x6072 = 0U;
	volatile int32_t t182 = -107806;

    t182 = ((x6069<=(x6070^x6071))<<x6072);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x6189 = UINT16_MAX;
	volatile int16_t x6190 = INT16_MIN;
	static uint64_t x6191 = 20LLU;
	volatile uint64_t x6192 = 12LLU;
	volatile int32_t t183 = 3;

    t183 = ((x6189<=(x6190^x6191))<<x6192);

    if (t183 != 4096) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x6273 = -51;
	int64_t x6274 = -1LL;
	volatile int32_t x6275 = -1;
	volatile uint8_t x6276 = 1U;
	int32_t t184 = 56886878;

    t184 = ((x6273<=(x6274^x6275))<<x6276);

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x6277 = -4;
	uint32_t x6278 = UINT32_MAX;
	uint8_t x6280 = 3U;
	volatile int32_t t185 = 1;

    t185 = ((x6277<=(x6278^x6279))<<x6280);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x6301 = UINT64_MAX;
	uint64_t x6302 = 33173362313735967LLU;
	uint32_t x6303 = 1409229871U;
	uint16_t x6304 = 9U;
	volatile int32_t t186 = 2;

    t186 = ((x6301<=(x6302^x6303))<<x6304);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x6313 = INT8_MIN;
	int16_t x6314 = 3;
	uint8_t x6316 = 0U;
	volatile int32_t t187 = -1;

    t187 = ((x6313<=(x6314^x6315))<<x6316);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x6381 = -3;
	int32_t x6382 = 911869356;
	static int64_t x6383 = 1LL;
	volatile int32_t t188 = 933075;

    t188 = ((x6381<=(x6382^x6383))<<x6384);

    if (t188 != 32) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x6457 = 903841679LL;
	int16_t x6459 = -32;
	int8_t x6460 = 2;
	static volatile int32_t t189 = 0;

    t189 = ((x6457<=(x6458^x6459))<<x6460);

    if (t189 != 4) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x6487 = 43671;
	uint64_t x6488 = 7LLU;
	volatile int32_t t190 = 1078455;

    t190 = ((x6485<=(x6486^x6487))<<x6488);

    if (t190 != 128) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x6489 = INT8_MAX;
	static uint32_t x6490 = 734U;
	static volatile int64_t x6491 = INT64_MAX;
	uint32_t x6492 = 2U;
	int32_t t191 = -350;

    t191 = ((x6489<=(x6490^x6491))<<x6492);

    if (t191 != 4) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x6537 = -1;
	int16_t x6538 = INT16_MIN;
	int8_t x6539 = -1;
	uint16_t x6540 = 0U;

    t192 = ((x6537<=(x6538^x6539))<<x6540);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x6673 = 3397U;
	int32_t x6674 = INT32_MIN;
	int32_t x6675 = -1;
	int32_t x6676 = 6;
	volatile int32_t t193 = 2;

    t193 = ((x6673<=(x6674^x6675))<<x6676);

    if (t193 != 64) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x6682 = UINT8_MAX;
	static volatile int64_t x6683 = INT64_MIN;
	int32_t x6684 = 0;
	int32_t t194 = 10425;

    t194 = ((x6681<=(x6682^x6683))<<x6684);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6685 = -1044860LL;
	static int64_t x6686 = -1044023LL;
	uint32_t x6687 = UINT32_MAX;
	static uint16_t x6688 = 8U;
	int32_t t195 = -6;

    t195 = ((x6685<=(x6686^x6687))<<x6688);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x6733 = 109832LLU;
	int32_t x6734 = -422214075;
	int32_t x6735 = -1;
	int16_t x6736 = 3;

    t196 = ((x6733<=(x6734^x6735))<<x6736);

    if (t196 != 8) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x6749 = -1248;
	int8_t x6750 = 42;
	uint8_t x6752 = 1U;
	int32_t t197 = 219797;

    t197 = ((x6749<=(x6750^x6751))<<x6752);

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x6753 = -1LL;
	int32_t x6754 = INT32_MIN;
	int64_t x6755 = INT64_MIN;
	uint64_t x6756 = 2LLU;

    t198 = ((x6753<=(x6754^x6755))<<x6756);

    if (t198 != 4) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x6762 = INT64_MAX;
	uint64_t x6763 = UINT64_MAX;
	uint32_t x6764 = 8U;

    t199 = ((x6761<=(x6762^x6763))<<x6764);

    if (t199 != 256) { NG(); } else { ; }
	
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

