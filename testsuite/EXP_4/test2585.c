
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

int64_t x5 = INT64_MAX;
uint8_t x24 = 116U;
int32_t x25 = INT32_MAX;
static uint32_t x28 = UINT32_MAX;
int8_t x30 = -1;
int8_t x31 = INT8_MAX;
volatile int32_t t7 = 45;
int32_t x50 = 326;
volatile uint16_t x57 = 15U;
uint32_t x59 = UINT32_MAX;
static int8_t x61 = -1;
uint32_t x79 = 6008U;
static int32_t x85 = -1;
volatile int32_t x87 = -244610;
int32_t x94 = INT32_MIN;
int8_t x95 = INT8_MAX;
int32_t x99 = 17571;
int64_t x110 = -1LL;
int16_t x111 = INT16_MIN;
int64_t x112 = -1LL;
static volatile int32_t t17 = 1;
uint8_t x113 = 0U;
int32_t x120 = -1;
volatile int32_t t19 = -34;
static volatile int16_t x123 = 2617;
int32_t x149 = -35;
int8_t x151 = INT8_MIN;
uint64_t x156 = 6593067804LLU;
int64_t x157 = INT64_MAX;
volatile uint64_t x166 = 28971446401943199LLU;
volatile uint8_t x174 = 1U;
uint32_t x190 = 42576U;
static int32_t x195 = -160510;
int16_t x211 = 491;
volatile int16_t x214 = 2501;
volatile int8_t x221 = INT8_MIN;
int8_t x223 = INT8_MIN;
int32_t t37 = 268305966;
uint16_t x234 = 184U;
int64_t x235 = -917814556LL;
static int8_t x238 = 3;
int32_t t41 = -2958027;
int32_t x255 = INT32_MAX;
volatile int32_t t42 = 1;
static uint64_t x260 = 39530LLU;
int8_t x261 = 1;
static int32_t t45 = 13;
uint32_t x278 = 13581857U;
int32_t t46 = 309;
volatile int16_t x314 = -1;
int16_t x322 = INT16_MIN;
int16_t x323 = -2468;
static uint16_t x325 = 23U;
int64_t x326 = -1LL;
int64_t x327 = INT64_MAX;
volatile uint32_t x337 = 1U;
static volatile uint8_t x342 = UINT8_MAX;
static int8_t x358 = INT8_MAX;
static volatile int8_t x359 = -1;
volatile int32_t t58 = 297;
uint64_t x369 = 23166207629853LLU;
int16_t x371 = INT16_MAX;
int16_t x372 = INT16_MIN;
static int32_t t61 = 1;
volatile int32_t t64 = 562;
volatile int32_t t66 = 7312;
int32_t t67 = -14570;
static int16_t x410 = INT16_MIN;
volatile int32_t t69 = 13985;
int64_t x421 = 86607944302LL;
int8_t x422 = -1;
uint16_t x423 = 1182U;
static uint8_t x430 = 107U;
volatile int16_t x432 = INT16_MAX;
volatile int32_t t72 = 20089;
int16_t x439 = -1;
int32_t t74 = 4;
uint8_t x448 = 33U;
volatile int32_t t75 = -2447;
volatile int16_t x450 = INT16_MAX;
uint16_t x452 = 211U;
int16_t x453 = 1585;
volatile int16_t x455 = INT16_MIN;
static int16_t x459 = 6816;
static int32_t x463 = INT32_MAX;
int32_t t79 = -6148182;
volatile int32_t t81 = 827855;
static uint8_t x477 = 20U;
static volatile int16_t x485 = INT16_MIN;
static uint16_t x522 = 87U;
uint16_t x526 = 361U;
static uint32_t x528 = UINT32_MAX;
volatile int8_t x547 = INT8_MIN;
int32_t t90 = 1;
volatile int8_t x559 = INT8_MIN;
static uint32_t x563 = 86991013U;
uint64_t x564 = 9055624194047880438LLU;
int64_t x568 = -1LL;
static int32_t x585 = -1;
static int64_t x592 = -1LL;
volatile int32_t t97 = 3419;
int32_t x604 = 684156649;
int16_t x613 = INT16_MIN;
int32_t t102 = 946400827;
volatile int64_t x625 = INT64_MIN;
static int32_t t105 = 270310;
int16_t x630 = 0;
volatile int32_t t106 = -47992;
volatile uint8_t x637 = UINT8_MAX;
int32_t t108 = 6887;
int32_t t109 = 6;
uint16_t x655 = 8U;
int32_t t111 = 580881315;
volatile int32_t x669 = INT32_MAX;
int16_t x671 = -1;
static int32_t t114 = -73320247;
int16_t x679 = 1;
uint8_t x680 = 10U;
int64_t x682 = -1LL;
uint16_t x690 = 424U;
static int8_t x701 = INT8_MIN;
int16_t x708 = INT16_MAX;
int64_t x721 = 5LL;
int16_t x722 = 1;
int32_t x728 = -62324;
int8_t x733 = 3;
static int32_t x735 = -33173846;
int64_t x739 = -1LL;
uint16_t x740 = 0U;
volatile int32_t t128 = -12178127;
uint8_t x742 = 3U;
volatile uint64_t x750 = UINT64_MAX;
int32_t t130 = 1;
int64_t x761 = INT64_MAX;
static uint32_t x762 = 1077873580U;
int32_t x763 = 345005553;
uint32_t x771 = UINT32_MAX;
int8_t x772 = INT8_MIN;
int32_t t135 = -25;
uint32_t x785 = UINT32_MAX;
int16_t x793 = INT16_MIN;
int16_t x794 = -1;
volatile int32_t t137 = 467468;
uint32_t x809 = 785471837U;
int16_t x827 = -10;
static int8_t x837 = 7;
uint32_t x838 = 2U;
volatile uint16_t x841 = 4618U;
int8_t x859 = -6;
uint64_t x863 = 1406734LLU;
static int64_t x867 = INT64_MAX;
int32_t t150 = 23492;
uint16_t x869 = 13357U;
volatile int32_t t151 = -274453844;
uint16_t x873 = 512U;
volatile int64_t x881 = 44623396455239LL;
static int8_t x883 = 0;
int64_t x889 = -4292584419322LL;
int32_t t156 = -8595372;
uint32_t x900 = UINT32_MAX;
int32_t x907 = -1;
int64_t x912 = INT64_MIN;
static int32_t t159 = -19;
int32_t x922 = INT32_MAX;
volatile uint64_t x926 = UINT64_MAX;
int8_t x927 = INT8_MIN;
volatile int8_t x928 = INT8_MIN;
int8_t x929 = INT8_MAX;
volatile int32_t t163 = 3643158;
static int8_t x934 = -1;
volatile int32_t t164 = -455894888;
volatile int32_t t165 = 3366114;
static uint8_t x941 = 33U;
int64_t x946 = -432908LL;
static int32_t t168 = -6;
int32_t t169 = 2003343;
uint8_t x961 = 1U;
int16_t x963 = INT16_MIN;
volatile int32_t t170 = 19531;
int8_t x971 = INT8_MAX;
int32_t t171 = -11292412;
static uint64_t x987 = UINT64_MAX;
int64_t x1008 = -1LL;
static uint8_t x1011 = 126U;
volatile int32_t t176 = 107810201;
int16_t x1015 = -1226;
int16_t x1019 = 1;
int32_t t178 = -383700794;
uint64_t x1025 = 104014146LLU;
int32_t t180 = 4102203;
int64_t x1033 = -1LL;
static uint32_t x1036 = 118U;
int32_t t182 = -28604922;
int16_t x1040 = 13716;
uint32_t x1042 = 55912U;
static int32_t x1043 = -1;
int32_t x1045 = -879;
static uint64_t x1052 = 1775170976507339963LLU;
int32_t t187 = -1256;
int16_t x1066 = 856;
int16_t x1067 = INT16_MIN;
volatile int32_t t188 = 42256;
static volatile uint16_t x1069 = UINT16_MAX;
static volatile int32_t t189 = 53715111;
static int16_t x1083 = INT16_MIN;
volatile int8_t x1093 = 2;
uint16_t x1094 = 218U;
int32_t x1095 = 3497718;
static volatile uint64_t x1106 = UINT64_MAX;
uint8_t x1111 = UINT8_MAX;


void f0(void) {
    	static int64_t x1 = INT64_MAX;
	static volatile uint64_t x2 = UINT64_MAX;
	uint64_t x3 = 683669250LLU;
	static uint8_t x4 = 60U;
	volatile int32_t t0 = -102158;

    t0 = (x1>(x2*(x3^x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = -46;
	volatile uint64_t x7 = 24353LLU;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -25434478;

    t1 = (x5>(x6*(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = 1LL;
	volatile uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -8;
	volatile int32_t t2 = 1291;

    t2 = (x9>(x10*(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 1U;
	int64_t x14 = INT64_MAX;
	int32_t x15 = -1;
	uint64_t x16 = 20707LLU;
	int32_t t3 = -7;

    t3 = (x13>(x14*(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = 2;
	volatile int16_t x22 = INT16_MIN;
	volatile int64_t x23 = 24LL;
	int32_t t4 = -45;

    t4 = (x21>(x22*(x23^x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = 169730LLU;
	static int64_t x27 = INT64_MAX;
	volatile int32_t t5 = -38156;

    t5 = (x25>(x26*(x27^x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	int16_t x32 = -3557;
	int32_t t6 = -693513;

    t6 = (x29>(x30*(x31^x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = UINT8_MAX;
	uint64_t x46 = 1396752039LLU;
	int64_t x47 = -1LL;
	uint16_t x48 = 13419U;

    t7 = (x45>(x46*(x47^x48)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = INT32_MAX;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 1175455654419290LLU;
	volatile int32_t t8 = 2;

    t8 = (x49>(x50*(x51^x52)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x58 = -49341;
	static int8_t x60 = -1;
	static int32_t t9 = -10516;

    t9 = (x57>(x58*(x59^x60)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x62 = 61958613781979LLU;
	int64_t x63 = INT64_MIN;
	int8_t x64 = 27;
	int32_t t10 = -111523;

    t10 = (x61>(x62*(x63^x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x65 = 100852167831150LLU;
	int16_t x66 = INT16_MIN;
	uint16_t x67 = 54U;
	int16_t x68 = INT16_MIN;
	volatile int32_t t11 = 80768402;

    t11 = (x65>(x66*(x67^x68)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x77 = INT64_MAX;
	static uint8_t x78 = 0U;
	int32_t x80 = -193680;
	int32_t t12 = -48548378;

    t12 = (x77>(x78*(x79^x80)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x86 = -1;
	static uint8_t x88 = UINT8_MAX;
	static volatile int32_t t13 = -1031013681;

    t13 = (x85>(x86*(x87^x88)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x89 = INT16_MIN;
	volatile uint8_t x90 = 1U;
	uint64_t x91 = 1303611485075057LLU;
	int64_t x92 = INT64_MIN;
	int32_t t14 = -23739;

    t14 = (x89>(x90*(x91^x92)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x93 = INT16_MAX;
	int64_t x96 = -1LL;
	volatile int32_t t15 = -1;

    t15 = (x93>(x94*(x95^x96)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x97 = 723U;
	uint8_t x98 = 0U;
	uint16_t x100 = UINT16_MAX;
	int32_t t16 = -3082;

    t16 = (x97>(x98*(x99^x100)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x109 = INT64_MAX;

    t17 = (x109>(x110*(x111^x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x114 = INT64_MIN;
	int8_t x115 = 0;
	uint64_t x116 = 14LLU;
	volatile int32_t t18 = -882;

    t18 = (x113>(x114*(x115^x116)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x117 = 178;
	volatile int16_t x118 = INT16_MAX;
	uint32_t x119 = 893618506U;

    t19 = (x117>(x118*(x119^x120)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x121 = INT32_MIN;
	uint32_t x122 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	int32_t t20 = 10;

    t20 = (x121>(x122*(x123^x124)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x125 = 5LLU;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	static uint32_t x128 = UINT32_MAX;
	int32_t t21 = 26149423;

    t21 = (x125>(x126*(x127^x128)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x129 = 353896725LLU;
	uint8_t x130 = 78U;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 1112983005508LLU;
	int32_t t22 = 258;

    t22 = (x129>(x130*(x131^x132)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x137 = INT32_MAX;
	uint64_t x138 = 1163841355678LLU;
	int16_t x139 = INT16_MAX;
	volatile uint64_t x140 = 1315733LLU;
	int32_t t23 = -3360;

    t23 = (x137>(x138*(x139^x140)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x150 = INT8_MIN;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t24 = -46892;

    t24 = (x149>(x150*(x151^x152)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x153 = -1;
	static volatile int32_t x154 = -1;
	int8_t x155 = -1;
	volatile int32_t t25 = 38179627;

    t25 = (x153>(x154*(x155^x156)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x158 = 12786U;
	static int16_t x159 = 3186;
	int64_t x160 = 14LL;
	static volatile int32_t t26 = 171377;

    t26 = (x157>(x158*(x159^x160)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = INT8_MAX;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -1;
	volatile int32_t t27 = -538;

    t27 = (x161>(x162*(x163^x164)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x165 = 1U;
	volatile int16_t x167 = INT16_MIN;
	static uint8_t x168 = UINT8_MAX;
	int32_t t28 = -1156669;

    t28 = (x165>(x166*(x167^x168)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x173 = UINT32_MAX;
	static volatile int8_t x175 = 1;
	static int16_t x176 = INT16_MAX;
	int32_t t29 = -691;

    t29 = (x173>(x174*(x175^x176)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x177 = 307;
	int8_t x178 = -1;
	uint64_t x179 = 1381241770LLU;
	static int32_t x180 = INT32_MIN;
	int32_t t30 = 183217533;

    t30 = (x177>(x178*(x179^x180)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	volatile int8_t x191 = 10;
	int16_t x192 = -1;
	static volatile int32_t t31 = 10739518;

    t31 = (x189>(x190*(x191^x192)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x193 = INT32_MAX;
	uint32_t x194 = 14U;
	uint64_t x196 = 1228333198LLU;
	int32_t t32 = 1371;

    t32 = (x193>(x194*(x195^x196)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x205 = UINT32_MAX;
	int64_t x206 = 8059559101829344LL;
	int64_t x207 = -1LL;
	uint32_t x208 = 20U;
	static volatile int32_t t33 = -43525;

    t33 = (x205>(x206*(x207^x208)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x209 = -1;
	volatile uint32_t x210 = 292585206U;
	int32_t x212 = INT32_MIN;
	int32_t t34 = -977;

    t34 = (x209>(x210*(x211^x212)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x213 = INT8_MAX;
	int8_t x215 = INT8_MAX;
	int8_t x216 = -1;
	static volatile int32_t t35 = -288;

    t35 = (x213>(x214*(x215^x216)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x217 = INT16_MIN;
	static int8_t x218 = 42;
	uint16_t x219 = UINT16_MAX;
	volatile uint32_t x220 = 686U;
	int32_t t36 = -5;

    t36 = (x217>(x218*(x219^x220)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x222 = 1;
	uint64_t x224 = UINT64_MAX;

    t37 = (x221>(x222*(x223^x224)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MAX;
	int64_t x231 = 10969LL;
	int16_t x232 = -1;
	volatile int32_t t38 = -31963;

    t38 = (x229>(x230*(x231^x232)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	int32_t t39 = -705035798;

    t39 = (x233>(x234*(x235^x236)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x237 = 58U;
	int8_t x239 = -1;
	int32_t x240 = 115;
	static int32_t t40 = -19251235;

    t40 = (x237>(x238*(x239^x240)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	static int32_t x242 = 0;
	static volatile uint8_t x243 = 4U;
	volatile int16_t x244 = INT16_MIN;

    t41 = (x241>(x242*(x243^x244)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x253 = 7U;
	uint64_t x254 = 33686198856331660LLU;
	uint32_t x256 = 1502226U;

    t42 = (x253>(x254*(x255^x256)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x257 = INT32_MAX;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = -1;
	int32_t t43 = -299;

    t43 = (x257>(x258*(x259^x260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x262 = 94U;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = 6U;
	int32_t t44 = -373197866;

    t44 = (x261>(x262*(x263^x264)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x269 = INT64_MIN;
	volatile int64_t x270 = 478LL;
	uint8_t x271 = 3U;
	int32_t x272 = -63738;

    t45 = (x269>(x270*(x271^x272)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x277 = UINT32_MAX;
	int32_t x279 = -289600586;
	static uint64_t x280 = 15873571738LLU;

    t46 = (x277>(x278*(x279^x280)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x289 = INT64_MAX;
	uint64_t x290 = 8LLU;
	int64_t x291 = INT64_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t47 = 7552;

    t47 = (x289>(x290*(x291^x292)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x301 = 46U;
	static int8_t x302 = INT8_MAX;
	int64_t x303 = -1LL;
	static int64_t x304 = -1LL;
	volatile int32_t t48 = -2752;

    t48 = (x301>(x302*(x303^x304)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x305 = UINT8_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MAX;
	uint64_t x308 = 199LLU;
	volatile int32_t t49 = 12711531;

    t49 = (x305>(x306*(x307^x308)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x313 = -1;
	static int32_t x315 = INT32_MIN;
	volatile int8_t x316 = INT8_MIN;
	int32_t t50 = -23206519;

    t50 = (x313>(x314*(x315^x316)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x321 = 31U;
	int8_t x324 = -1;
	int32_t t51 = 1;

    t51 = (x321>(x322*(x323^x324)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x328 = INT32_MIN;
	static int32_t t52 = 21;

    t52 = (x325>(x326*(x327^x328)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x338 = -25854092255948LL;
	volatile uint8_t x339 = 3U;
	static int64_t x340 = -1LL;
	int32_t t53 = 24;

    t53 = (x337>(x338*(x339^x340)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x341 = INT64_MIN;
	static int16_t x343 = 6703;
	int32_t x344 = -5;
	volatile int32_t t54 = 568;

    t54 = (x341>(x342*(x343^x344)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x345 = -1LL;
	int64_t x346 = -1LL;
	static int32_t x347 = INT32_MIN;
	volatile uint8_t x348 = 0U;
	static int32_t t55 = -65056;

    t55 = (x345>(x346*(x347^x348)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -41329513022LL;
	uint32_t x352 = 324643U;
	int32_t t56 = -5776071;

    t56 = (x349>(x350*(x351^x352)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	int8_t x355 = -12;
	volatile uint32_t x356 = 3U;
	volatile int32_t t57 = 3;

    t57 = (x353>(x354*(x355^x356)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x357 = 1293416962043140LLU;
	uint8_t x360 = UINT8_MAX;

    t58 = (x357>(x358*(x359^x360)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x365 = 25U;
	static int64_t x366 = 37207646250766LL;
	static int32_t x367 = 1904;
	int64_t x368 = -123590LL;
	static int32_t t59 = -233054232;

    t59 = (x365>(x366*(x367^x368)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x370 = 10560U;
	static volatile int32_t t60 = 138;

    t60 = (x369>(x370*(x371^x372)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x373 = 161672635139914209LLU;
	static uint64_t x374 = 134317583LLU;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;

    t61 = (x373>(x374*(x375^x376)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x381 = -2;
	int64_t x382 = 13612991324076935LL;
	uint64_t x383 = 14569690LLU;
	int64_t x384 = 944330591874LL;
	volatile int32_t t62 = 26270;

    t62 = (x381>(x382*(x383^x384)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x385 = -1;
	int16_t x386 = -1;
	static int64_t x387 = 1548761044597953LL;
	uint64_t x388 = UINT64_MAX;
	int32_t t63 = 562848;

    t63 = (x385>(x386*(x387^x388)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x389 = -1;
	int8_t x390 = -1;
	int32_t x391 = -1;
	int16_t x392 = 0;

    t64 = (x389>(x390*(x391^x392)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x397 = INT8_MAX;
	int16_t x398 = 277;
	uint32_t x399 = 123427763U;
	int64_t x400 = -1LL;
	static int32_t t65 = 0;

    t65 = (x397>(x398*(x399^x400)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x401 = 714202126792217214LL;
	uint64_t x402 = 251744222371338LLU;
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = -1LL;

    t66 = (x401>(x402*(x403^x404)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x405 = 8U;
	uint8_t x406 = 9U;
	static int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;

    t67 = (x405>(x406*(x407^x408)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x409 = UINT8_MAX;
	uint8_t x411 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	int32_t t68 = 45603219;

    t68 = (x409>(x410*(x411^x412)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile uint64_t x418 = 2028LLU;
	uint8_t x419 = 3U;
	uint8_t x420 = 13U;

    t69 = (x417>(x418*(x419^x420)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x424 = INT16_MAX;
	volatile int32_t t70 = -11;

    t70 = (x421>(x422*(x423^x424)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x429 = 3U;
	static int8_t x431 = INT8_MIN;
	int32_t t71 = 343171;

    t71 = (x429>(x430*(x431^x432)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x433 = INT8_MIN;
	static uint32_t x434 = UINT32_MAX;
	uint32_t x435 = UINT32_MAX;
	volatile int32_t x436 = INT32_MIN;

    t72 = (x433>(x434*(x435^x436)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x437 = -1;
	int16_t x438 = 2412;
	int64_t x440 = 80440LL;
	volatile int32_t t73 = -62;

    t73 = (x437>(x438*(x439^x440)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x442 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	int64_t x444 = INT64_MAX;

    t74 = (x441>(x442*(x443^x444)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x445 = -3;
	int8_t x446 = -1;
	uint16_t x447 = UINT16_MAX;

    t75 = (x445>(x446*(x447^x448)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x449 = 182U;
	volatile uint8_t x451 = 56U;
	volatile int32_t t76 = 6;

    t76 = (x449>(x450*(x451^x452)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x454 = 481373212130LLU;
	static int64_t x456 = INT64_MIN;
	int32_t t77 = -388155263;

    t77 = (x453>(x454*(x455^x456)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x457 = 0U;
	static volatile int8_t x458 = INT8_MAX;
	int16_t x460 = INT16_MAX;
	int32_t t78 = 831810;

    t78 = (x457>(x458*(x459^x460)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x461 = 7852769305285LL;
	int32_t x462 = INT32_MIN;
	uint64_t x464 = 2168LLU;

    t79 = (x461>(x462*(x463^x464)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x465 = 363818583U;
	int64_t x466 = -1LL;
	uint8_t x467 = 9U;
	int64_t x468 = -12571610LL;
	int32_t t80 = 11175;

    t80 = (x465>(x466*(x467^x468)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x469 = INT16_MAX;
	volatile int32_t x470 = INT32_MIN;
	volatile uint64_t x471 = 116950818650771LLU;
	int8_t x472 = -1;

    t81 = (x469>(x470*(x471^x472)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x473 = -24LL;
	static int32_t x474 = 18148;
	int8_t x475 = INT8_MAX;
	uint64_t x476 = UINT64_MAX;
	int32_t t82 = 121085;

    t82 = (x473>(x474*(x475^x476)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x478 = -4;
	static int16_t x479 = INT16_MIN;
	uint16_t x480 = 447U;
	volatile int32_t t83 = 353;

    t83 = (x477>(x478*(x479^x480)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x486 = -1;
	int32_t x487 = INT32_MIN;
	static uint32_t x488 = UINT32_MAX;
	volatile int32_t t84 = 0;

    t84 = (x485>(x486*(x487^x488)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x509 = -1LL;
	volatile uint8_t x510 = UINT8_MAX;
	volatile uint32_t x511 = 47809727U;
	uint64_t x512 = 437518631411LLU;
	volatile int32_t t85 = 315560;

    t85 = (x509>(x510*(x511^x512)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x521 = 48926051792096LL;
	static int64_t x523 = INT64_MIN;
	uint64_t x524 = 1667931498123314702LLU;
	volatile int32_t t86 = 29782014;

    t86 = (x521>(x522*(x523^x524)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x525 = 2554461U;
	static uint32_t x527 = 306003379U;
	int32_t t87 = 88;

    t87 = (x525>(x526*(x527^x528)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x533 = INT64_MIN;
	uint16_t x534 = 0U;
	static int16_t x535 = INT16_MIN;
	static int32_t x536 = 1349961;
	volatile int32_t t88 = 89697261;

    t88 = (x533>(x534*(x535^x536)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x537 = INT64_MAX;
	int8_t x538 = INT8_MIN;
	volatile int8_t x539 = -39;
	int16_t x540 = INT16_MIN;
	int32_t t89 = -46;

    t89 = (x537>(x538*(x539^x540)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x545 = -1;
	static volatile int16_t x546 = INT16_MIN;
	static uint32_t x548 = UINT32_MAX;

    t90 = (x545>(x546*(x547^x548)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x557 = INT32_MAX;
	uint32_t x558 = 933311323U;
	int32_t x560 = INT32_MAX;
	static int32_t t91 = -33149760;

    t91 = (x557>(x558*(x559^x560)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x561 = INT16_MIN;
	int16_t x562 = 14;
	volatile int32_t t92 = 0;

    t92 = (x561>(x562*(x563^x564)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x566 = -796928;
	int16_t x567 = INT16_MIN;
	static int32_t t93 = 104411;

    t93 = (x565>(x566*(x567^x568)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x569 = INT16_MIN;
	static uint32_t x570 = 7391U;
	int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MIN;
	volatile int32_t t94 = 1778;

    t94 = (x569>(x570*(x571^x572)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x577 = 2;
	volatile uint32_t x578 = 17798849U;
	static int32_t x579 = INT32_MIN;
	int8_t x580 = -5;
	int32_t t95 = 413965;

    t95 = (x577>(x578*(x579^x580)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x586 = INT16_MIN;
	static uint64_t x587 = UINT64_MAX;
	static int32_t x588 = INT32_MIN;
	volatile int32_t t96 = 102;

    t96 = (x585>(x586*(x587^x588)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x589 = -1;
	static int32_t x590 = -1;
	uint32_t x591 = UINT32_MAX;

    t97 = (x589>(x590*(x591^x592)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x593 = -1;
	uint8_t x594 = 99U;
	static volatile int16_t x595 = -740;
	static uint16_t x596 = 3U;
	int32_t t98 = -92692;

    t98 = (x593>(x594*(x595^x596)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x601 = 3U;
	int64_t x602 = INT64_MIN;
	uint64_t x603 = 9631345908467019LLU;
	volatile int32_t t99 = 3;

    t99 = (x601>(x602*(x603^x604)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x605 = 376U;
	uint64_t x606 = 18LLU;
	volatile uint32_t x607 = UINT32_MAX;
	uint64_t x608 = 13965609006917384LLU;
	volatile int32_t t100 = 33;

    t100 = (x605>(x606*(x607^x608)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x609 = INT16_MAX;
	int8_t x610 = INT8_MAX;
	int32_t x611 = INT32_MIN;
	int64_t x612 = -63796548LL;
	int32_t t101 = -102490;

    t101 = (x609>(x610*(x611^x612)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x614 = -8257LL;
	static uint64_t x615 = 351462LLU;
	uint16_t x616 = 19U;

    t102 = (x613>(x614*(x615^x616)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x617 = 184;
	int64_t x618 = -1LL;
	int64_t x619 = INT64_MAX;
	uint32_t x620 = 813813833U;
	int32_t t103 = -3;

    t103 = (x617>(x618*(x619^x620)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x621 = 23U;
	uint32_t x622 = 5702U;
	int32_t x623 = -1;
	int16_t x624 = 49;
	int32_t t104 = 124851;

    t104 = (x621>(x622*(x623^x624)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x626 = -1;
	static uint32_t x627 = 12290U;
	int64_t x628 = INT64_MIN;

    t105 = (x625>(x626*(x627^x628)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x629 = 96U;
	uint64_t x631 = 241566084152122LLU;
	int16_t x632 = INT16_MIN;

    t106 = (x629>(x630*(x631^x632)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x633 = -11;
	int16_t x634 = INT16_MAX;
	uint64_t x635 = UINT64_MAX;
	int32_t x636 = 108;
	int32_t t107 = 15364;

    t107 = (x633>(x634*(x635^x636)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x638 = INT16_MAX;
	uint8_t x639 = UINT8_MAX;
	int8_t x640 = -3;

    t108 = (x637>(x638*(x639^x640)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x649 = UINT16_MAX;
	int64_t x650 = -1LL;
	int64_t x651 = INT64_MAX;
	static int64_t x652 = INT64_MIN;

    t109 = (x649>(x650*(x651^x652)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x653 = INT8_MIN;
	int8_t x654 = INT8_MIN;
	uint64_t x656 = 21LLU;
	volatile int32_t t110 = -461356973;

    t110 = (x653>(x654*(x655^x656)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x657 = -533;
	int8_t x658 = -1;
	int8_t x659 = -1;
	uint32_t x660 = 10U;

    t111 = (x657>(x658*(x659^x660)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x661 = INT64_MIN;
	volatile uint64_t x662 = 306LLU;
	static uint64_t x663 = 28469504LLU;
	volatile int64_t x664 = INT64_MAX;
	int32_t t112 = -1717;

    t112 = (x661>(x662*(x663^x664)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x665 = -1;
	int64_t x666 = INT64_MIN;
	int64_t x667 = INT64_MIN;
	volatile int64_t x668 = INT64_MIN;
	volatile int32_t t113 = 483188;

    t113 = (x665>(x666*(x667^x668)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x670 = 1U;
	volatile uint8_t x672 = UINT8_MAX;

    t114 = (x669>(x670*(x671^x672)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x673 = -24;
	int16_t x674 = -1139;
	int64_t x675 = 25547777693506LL;
	static int64_t x676 = 1LL;
	volatile int32_t t115 = -1;

    t115 = (x673>(x674*(x675^x676)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x677 = -1;
	int16_t x678 = INT16_MAX;
	int32_t t116 = -44055;

    t116 = (x677>(x678*(x679^x680)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x681 = INT64_MIN;
	int32_t x683 = -1;
	int16_t x684 = INT16_MIN;
	volatile int32_t t117 = -4354183;

    t117 = (x681>(x682*(x683^x684)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x689 = 29;
	volatile int8_t x691 = INT8_MIN;
	uint64_t x692 = 12LLU;
	volatile int32_t t118 = 3060008;

    t118 = (x689>(x690*(x691^x692)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x693 = INT8_MAX;
	static int16_t x694 = -1;
	static int16_t x695 = INT16_MIN;
	uint16_t x696 = 1954U;
	volatile int32_t t119 = -8884351;

    t119 = (x693>(x694*(x695^x696)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x697 = -5;
	uint8_t x698 = UINT8_MAX;
	int8_t x699 = INT8_MAX;
	int16_t x700 = INT16_MAX;
	int32_t t120 = -10661;

    t120 = (x697>(x698*(x699^x700)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x702 = -12;
	uint8_t x703 = 88U;
	int16_t x704 = -295;
	int32_t t121 = 26159255;

    t121 = (x701>(x702*(x703^x704)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x705 = UINT32_MAX;
	int32_t x706 = -37142;
	int8_t x707 = INT8_MAX;
	static int32_t t122 = 1217;

    t122 = (x705>(x706*(x707^x708)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x713 = UINT64_MAX;
	static int16_t x714 = INT16_MAX;
	volatile int64_t x715 = -525LL;
	uint64_t x716 = UINT64_MAX;
	int32_t t123 = -6;

    t123 = (x713>(x714*(x715^x716)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x717 = -1;
	uint64_t x718 = UINT64_MAX;
	int8_t x719 = INT8_MIN;
	static int32_t x720 = INT32_MIN;
	int32_t t124 = 59885;

    t124 = (x717>(x718*(x719^x720)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x723 = 234307496U;
	static int16_t x724 = -5;
	volatile int32_t t125 = 6721214;

    t125 = (x721>(x722*(x723^x724)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x725 = -1;
	volatile int64_t x726 = 24457975875747LL;
	int32_t x727 = -783;
	int32_t t126 = -13;

    t126 = (x725>(x726*(x727^x728)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x734 = -1;
	volatile int32_t x736 = -1;
	int32_t t127 = -22697;

    t127 = (x733>(x734*(x735^x736)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x737 = UINT64_MAX;
	uint8_t x738 = 11U;

    t128 = (x737>(x738*(x739^x740)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x741 = 0U;
	static int8_t x743 = -1;
	int8_t x744 = INT8_MIN;
	int32_t t129 = 3075065;

    t129 = (x741>(x742*(x743^x744)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x749 = 3608833697064380LLU;
	int32_t x751 = -1;
	volatile int64_t x752 = INT64_MIN;

    t130 = (x749>(x750*(x751^x752)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x753 = INT64_MIN;
	int64_t x754 = -1LL;
	volatile int32_t x755 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;
	static int32_t t131 = -556417;

    t131 = (x753>(x754*(x755^x756)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x757 = INT32_MAX;
	volatile uint16_t x758 = 3U;
	int64_t x759 = -34635962363974LL;
	int16_t x760 = INT16_MIN;
	static volatile int32_t t132 = -3362;

    t132 = (x757>(x758*(x759^x760)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x764 = 221;
	int32_t t133 = 69582;

    t133 = (x761>(x762*(x763^x764)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = 0;
	int32_t t134 = -662736677;

    t134 = (x769>(x770*(x771^x772)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x777 = 29U;
	int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MIN;
	uint64_t x780 = 453894153681612LLU;

    t135 = (x777>(x778*(x779^x780)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x786 = 2;
	int64_t x787 = -1LL;
	uint64_t x788 = 134791972712LLU;
	volatile int32_t t136 = 9967;

    t136 = (x785>(x786*(x787^x788)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x795 = 50968U;
	uint16_t x796 = UINT16_MAX;

    t137 = (x793>(x794*(x795^x796)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x797 = -4;
	int32_t x798 = 105437;
	int8_t x799 = INT8_MIN;
	uint64_t x800 = UINT64_MAX;
	static volatile int32_t t138 = 25;

    t138 = (x797>(x798*(x799^x800)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = INT16_MIN;
	static volatile int64_t x803 = -6LL;
	uint16_t x804 = UINT16_MAX;
	static volatile int32_t t139 = -14245;

    t139 = (x801>(x802*(x803^x804)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x805 = INT32_MAX;
	uint8_t x806 = UINT8_MAX;
	int16_t x807 = INT16_MAX;
	static int16_t x808 = 31;
	static volatile int32_t t140 = -6;

    t140 = (x805>(x806*(x807^x808)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x810 = UINT64_MAX;
	static int16_t x811 = -48;
	uint64_t x812 = 2610LLU;
	int32_t t141 = -1;

    t141 = (x809>(x810*(x811^x812)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x813 = INT64_MIN;
	uint32_t x814 = UINT32_MAX;
	volatile int32_t x815 = INT32_MIN;
	volatile int16_t x816 = INT16_MIN;
	volatile int32_t t142 = 669124;

    t142 = (x813>(x814*(x815^x816)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x817 = 21619558046828987LLU;
	int8_t x818 = 2;
	uint16_t x819 = 1254U;
	static uint64_t x820 = 469907695326009076LLU;
	int32_t t143 = -358;

    t143 = (x817>(x818*(x819^x820)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x825 = UINT32_MAX;
	int32_t x826 = 3151761;
	uint8_t x828 = 1U;
	static volatile int32_t t144 = 161619;

    t144 = (x825>(x826*(x827^x828)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x829 = -48;
	int8_t x830 = -13;
	uint8_t x831 = 1U;
	uint8_t x832 = 84U;
	volatile int32_t t145 = 1203;

    t145 = (x829>(x830*(x831^x832)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x839 = 3U;
	int8_t x840 = -3;
	volatile int32_t t146 = 34170069;

    t146 = (x837>(x838*(x839^x840)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x842 = -1;
	int8_t x843 = -1;
	int64_t x844 = -9105LL;
	int32_t t147 = 968;

    t147 = (x841>(x842*(x843^x844)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x857 = INT16_MAX;
	uint64_t x858 = 93352LLU;
	static uint32_t x860 = UINT32_MAX;
	volatile int32_t t148 = -100431211;

    t148 = (x857>(x858*(x859^x860)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x861 = -1067489457LL;
	static int16_t x862 = 23;
	int64_t x864 = -3LL;
	int32_t t149 = -19173332;

    t149 = (x861>(x862*(x863^x864)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x865 = UINT32_MAX;
	int32_t x866 = 14;
	volatile int64_t x868 = INT64_MIN;

    t150 = (x865>(x866*(x867^x868)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x870 = 5LLU;
	uint8_t x871 = 5U;
	int16_t x872 = -1;

    t151 = (x869>(x870*(x871^x872)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x874 = 5U;
	int8_t x875 = -1;
	static int8_t x876 = INT8_MIN;
	int32_t t152 = -2644;

    t152 = (x873>(x874*(x875^x876)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x877 = INT8_MIN;
	int64_t x878 = INT64_MIN;
	int64_t x879 = 502309760131LL;
	volatile uint64_t x880 = 1LLU;
	int32_t t153 = -14;

    t153 = (x877>(x878*(x879^x880)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x882 = 515794525LLU;
	static int8_t x884 = INT8_MAX;
	volatile int32_t t154 = -13840630;

    t154 = (x881>(x882*(x883^x884)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x890 = UINT64_MAX;
	int32_t x891 = 231551;
	int8_t x892 = INT8_MIN;
	int32_t t155 = 837317;

    t155 = (x889>(x890*(x891^x892)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x893 = INT64_MAX;
	volatile int8_t x894 = 3;
	int64_t x895 = INT64_MIN;
	int64_t x896 = INT64_MAX;

    t156 = (x893>(x894*(x895^x896)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x897 = INT32_MIN;
	static volatile int16_t x898 = INT16_MIN;
	volatile int16_t x899 = -1;
	int32_t t157 = 298445;

    t157 = (x897>(x898*(x899^x900)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x905 = 88361LLU;
	int8_t x906 = -1;
	volatile int32_t x908 = 2;
	int32_t t158 = 211;

    t158 = (x905>(x906*(x907^x908)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x909 = -734LL;
	static int32_t x910 = INT32_MIN;
	static int64_t x911 = INT64_MAX;

    t159 = (x909>(x910*(x911^x912)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x913 = -304566663827LL;
	int64_t x914 = -1LL;
	static uint32_t x915 = UINT32_MAX;
	uint32_t x916 = UINT32_MAX;
	volatile int32_t t160 = 74207;

    t160 = (x913>(x914*(x915^x916)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x921 = UINT64_MAX;
	static uint64_t x923 = 1571234872448325153LLU;
	uint8_t x924 = 1U;
	static int32_t t161 = 4;

    t161 = (x921>(x922*(x923^x924)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x925 = 82LL;
	volatile int32_t t162 = -16618;

    t162 = (x925>(x926*(x927^x928)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x930 = UINT64_MAX;
	static int64_t x931 = -9LL;
	volatile int8_t x932 = 13;

    t163 = (x929>(x930*(x931^x932)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x933 = 1672943LLU;
	int32_t x935 = 5963793;
	static uint8_t x936 = 49U;

    t164 = (x933>(x934*(x935^x936)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x937 = 5;
	static int16_t x938 = 0;
	volatile int32_t x939 = INT32_MAX;
	static int64_t x940 = INT64_MIN;

    t165 = (x937>(x938*(x939^x940)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x942 = 2442647854896435LLU;
	uint8_t x943 = UINT8_MAX;
	volatile uint32_t x944 = UINT32_MAX;
	volatile int32_t t166 = 752250894;

    t166 = (x941>(x942*(x943^x944)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x945 = INT32_MAX;
	volatile int64_t x947 = 48911587037LL;
	int8_t x948 = INT8_MAX;
	volatile int32_t t167 = -65417020;

    t167 = (x945>(x946*(x947^x948)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x949 = -1;
	int32_t x950 = 9047;
	int32_t x951 = -1;
	int16_t x952 = -6772;

    t168 = (x949>(x950*(x951^x952)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x953 = -1;
	int8_t x954 = -1;
	uint8_t x955 = 8U;
	uint16_t x956 = 1U;

    t169 = (x953>(x954*(x955^x956)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x962 = 50U;
	volatile uint16_t x964 = 16341U;

    t170 = (x961>(x962*(x963^x964)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x969 = 199;
	static int8_t x970 = -1;
	uint8_t x972 = 62U;

    t171 = (x969>(x970*(x971^x972)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x973 = INT32_MIN;
	uint16_t x974 = UINT16_MAX;
	int8_t x975 = INT8_MIN;
	static int64_t x976 = 102239977388408LL;
	int32_t t172 = 1830;

    t172 = (x973>(x974*(x975^x976)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x977 = -1;
	int64_t x978 = 0LL;
	int16_t x979 = 6;
	int64_t x980 = -78LL;
	static volatile int32_t t173 = 16282;

    t173 = (x977>(x978*(x979^x980)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x985 = 23052U;
	volatile uint64_t x986 = 3868693193686LLU;
	int16_t x988 = INT16_MIN;
	int32_t t174 = -529;

    t174 = (x985>(x986*(x987^x988)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x1005 = UINT16_MAX;
	int64_t x1006 = -1LL;
	uint16_t x1007 = UINT16_MAX;
	int32_t t175 = 431;

    t175 = (x1005>(x1006*(x1007^x1008)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1009 = INT32_MIN;
	int64_t x1010 = -1LL;
	static volatile uint32_t x1012 = 10319U;

    t176 = (x1009>(x1010*(x1011^x1012)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1013 = INT16_MIN;
	uint16_t x1014 = UINT16_MAX;
	static volatile int16_t x1016 = -1;
	int32_t t177 = 14738168;

    t177 = (x1013>(x1014*(x1015^x1016)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1017 = 1U;
	uint16_t x1018 = UINT16_MAX;
	int32_t x1020 = -1;

    t178 = (x1017>(x1018*(x1019^x1020)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1021 = 237684LLU;
	volatile uint8_t x1022 = UINT8_MAX;
	static uint8_t x1023 = 1U;
	uint16_t x1024 = 0U;
	static volatile int32_t t179 = -103640562;

    t179 = (x1021>(x1022*(x1023^x1024)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1026 = UINT64_MAX;
	int16_t x1027 = INT16_MIN;
	static int32_t x1028 = INT32_MAX;

    t180 = (x1025>(x1026*(x1027^x1028)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x1029 = 94890U;
	uint64_t x1030 = 28335903559423759LLU;
	volatile int16_t x1031 = 3699;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t181 = 84061;

    t181 = (x1029>(x1030*(x1031^x1032)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1034 = INT16_MIN;
	int32_t x1035 = 16078998;

    t182 = (x1033>(x1034*(x1035^x1036)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1037 = UINT16_MAX;
	volatile int16_t x1038 = -1;
	int64_t x1039 = INT64_MIN;
	static volatile int32_t t183 = -12;

    t183 = (x1037>(x1038*(x1039^x1040)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1041 = 3883U;
	int16_t x1044 = INT16_MIN;
	volatile int32_t t184 = 10;

    t184 = (x1041>(x1042*(x1043^x1044)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1046 = 2U;
	static uint8_t x1047 = UINT8_MAX;
	static int32_t x1048 = -29448;
	volatile int32_t t185 = -2631907;

    t185 = (x1045>(x1046*(x1047^x1048)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1049 = UINT16_MAX;
	int32_t x1050 = 195;
	static uint8_t x1051 = UINT8_MAX;
	int32_t t186 = -1568;

    t186 = (x1049>(x1050*(x1051^x1052)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1061 = INT16_MAX;
	volatile uint32_t x1062 = UINT32_MAX;
	uint8_t x1063 = UINT8_MAX;
	int8_t x1064 = -1;

    t187 = (x1061>(x1062*(x1063^x1064)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1065 = INT32_MIN;
	static int16_t x1068 = INT16_MIN;

    t188 = (x1065>(x1066*(x1067^x1068)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1070 = UINT16_MAX;
	static uint64_t x1071 = 1502115LLU;
	int64_t x1072 = -1LL;

    t189 = (x1069>(x1070*(x1071^x1072)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1073 = -199306645;
	uint64_t x1074 = 59LLU;
	uint8_t x1075 = 5U;
	uint64_t x1076 = 18LLU;
	int32_t t190 = 101976;

    t190 = (x1073>(x1074*(x1075^x1076)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1077 = INT16_MIN;
	int32_t x1078 = INT32_MIN;
	int16_t x1079 = INT16_MIN;
	int64_t x1080 = 1LL;
	volatile int32_t t191 = -2335453;

    t191 = (x1077>(x1078*(x1079^x1080)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1081 = INT8_MIN;
	int8_t x1082 = -1;
	volatile int64_t x1084 = 11542746279410923LL;
	volatile int32_t t192 = 241528182;

    t192 = (x1081>(x1082*(x1083^x1084)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1089 = 14;
	static volatile uint32_t x1090 = 32U;
	uint8_t x1091 = 3U;
	uint32_t x1092 = UINT32_MAX;
	static int32_t t193 = 404167402;

    t193 = (x1089>(x1090*(x1091^x1092)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1096 = INT8_MAX;
	int32_t t194 = 25599784;

    t194 = (x1093>(x1094*(x1095^x1096)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1097 = -1;
	uint64_t x1098 = 96792LLU;
	int32_t x1099 = 418;
	uint16_t x1100 = 46U;
	int32_t t195 = 10721539;

    t195 = (x1097>(x1098*(x1099^x1100)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1101 = -1;
	uint32_t x1102 = 0U;
	uint64_t x1103 = 3627679413401853955LLU;
	uint32_t x1104 = 110291U;
	volatile int32_t t196 = 34964762;

    t196 = (x1101>(x1102*(x1103^x1104)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x1105 = INT16_MIN;
	volatile uint64_t x1107 = 8976123LLU;
	volatile uint8_t x1108 = UINT8_MAX;
	static int32_t t197 = -129366576;

    t197 = (x1105>(x1106*(x1107^x1108)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1109 = 3623;
	static int16_t x1110 = -1;
	volatile int32_t x1112 = -1;
	static int32_t t198 = -112588045;

    t198 = (x1109>(x1110*(x1111^x1112)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1113 = INT8_MAX;
	volatile uint32_t x1114 = 46U;
	uint32_t x1115 = 0U;
	volatile int8_t x1116 = -8;
	int32_t t199 = -2678851;

    t199 = (x1113>(x1114*(x1115^x1116)));

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

