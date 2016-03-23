
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

static uint64_t x4 = 18173LLU;
volatile int32_t t1 = -20;
uint8_t x11 = UINT8_MAX;
volatile int32_t t2 = 3;
int16_t x42 = 4;
uint8_t x61 = 1U;
uint8_t x63 = UINT8_MAX;
int16_t x64 = INT16_MAX;
int8_t x65 = INT8_MIN;
uint64_t x67 = UINT64_MAX;
volatile uint8_t x88 = UINT8_MAX;
uint64_t x97 = 55LLU;
int16_t x98 = -1;
int8_t x99 = INT8_MIN;
volatile int32_t t11 = 2;
static int8_t x103 = INT8_MAX;
volatile int32_t t13 = -6;
volatile uint8_t x124 = 124U;
int8_t x132 = INT8_MIN;
volatile int16_t x134 = INT16_MIN;
uint32_t x148 = 1575557159U;
volatile int64_t x150 = -4198457476LL;
int64_t x152 = -1LL;
int16_t x156 = 103;
uint64_t x162 = 10LLU;
uint64_t x164 = UINT64_MAX;
static volatile int32_t t21 = 490;
int64_t x167 = -1LL;
static volatile uint8_t x172 = UINT8_MAX;
int32_t t23 = 172033783;
uint64_t x175 = 32799834986988681LLU;
int64_t x179 = 7218LL;
static volatile int32_t t25 = -1;
volatile uint32_t x189 = UINT32_MAX;
static int32_t t28 = -46;
uint32_t x204 = 126523611U;
int32_t t29 = 61;
int32_t x209 = 233654025;
int16_t x210 = 0;
uint64_t x211 = 3002235LLU;
uint32_t x212 = UINT32_MAX;
volatile int32_t t32 = 1357;
int32_t t35 = 241;
int8_t x237 = -2;
int16_t x273 = INT16_MIN;
static int16_t x274 = 10;
int16_t x285 = -1;
volatile uint32_t x288 = 42U;
volatile int32_t t42 = -124869;
uint16_t x297 = UINT16_MAX;
int16_t x302 = INT16_MAX;
static uint16_t x306 = 3U;
int16_t x314 = INT16_MIN;
static int16_t x318 = -1;
int32_t t47 = 33659370;
uint8_t x327 = 38U;
volatile int64_t x330 = -1LL;
int64_t x332 = -1LL;
static volatile int32_t t50 = -16650;
static volatile int32_t x346 = 6;
int64_t x367 = 1LL;
int32_t x368 = INT32_MAX;
uint8_t x369 = 11U;
uint8_t x391 = 1U;
volatile int32_t x392 = -27411340;
uint8_t x399 = UINT8_MAX;
static uint8_t x402 = UINT8_MAX;
static uint32_t x410 = UINT32_MAX;
volatile int64_t x413 = 87LL;
volatile int32_t t61 = -189166;
int16_t x427 = INT16_MIN;
uint8_t x432 = 1U;
static int16_t x458 = INT16_MIN;
static volatile int32_t t66 = 15145;
volatile int16_t x490 = -1;
volatile int8_t x492 = 3;
uint64_t x499 = UINT64_MAX;
volatile uint32_t x501 = 14011U;
int32_t x502 = INT32_MAX;
volatile uint16_t x507 = 127U;
uint32_t x508 = 849184U;
int8_t x511 = -1;
int32_t t73 = -19071;
volatile int32_t t74 = 71;
int64_t x529 = 25583388LL;
uint32_t x534 = 8U;
volatile int32_t t78 = -2661;
static uint64_t x555 = UINT64_MAX;
static uint32_t x556 = 5852U;
int32_t x563 = -1;
volatile int8_t x565 = INT8_MAX;
int32_t t82 = 59206;
int64_t x585 = -1LL;
uint8_t x586 = 86U;
uint64_t x587 = 9513380LLU;
uint64_t x588 = 489369585964LLU;
volatile uint64_t x593 = UINT64_MAX;
volatile uint64_t x594 = 13463009814LLU;
static uint64_t x610 = 8443682867944293LLU;
static uint64_t x611 = UINT64_MAX;
volatile uint32_t x616 = 4876U;
volatile uint32_t x623 = 104153U;
int8_t x643 = INT8_MIN;
int32_t x649 = 11;
volatile int64_t x696 = -1LL;
volatile uint16_t x717 = UINT16_MAX;
int16_t x743 = -1;
int8_t x755 = 5;
static volatile int8_t x757 = INT8_MIN;
volatile uint32_t x759 = 2U;
static volatile int16_t x763 = -1;
int16_t x781 = INT16_MAX;
uint64_t x823 = 582LLU;
int32_t t111 = -6810;
uint8_t x831 = UINT8_MAX;
int32_t x843 = -1;
volatile int64_t x854 = -46739063877LL;
static volatile uint64_t x857 = 3394617350014610LLU;
static int16_t x864 = -1;
int32_t t118 = -104;
int32_t t119 = -141160980;
uint16_t x893 = 1030U;
int8_t x895 = INT8_MIN;
int32_t t122 = -5275;
volatile int32_t t123 = -319372485;
static uint64_t x905 = 24047914LLU;
int8_t x918 = -46;
int16_t x924 = -1;
int8_t x941 = INT8_MIN;
volatile int8_t x943 = -23;
volatile uint64_t x944 = UINT64_MAX;
int16_t x945 = INT16_MAX;
int16_t x946 = INT16_MIN;
int16_t x951 = INT16_MIN;
int32_t x952 = -1;
int16_t x953 = -3;
int16_t x967 = INT16_MIN;
volatile int32_t t132 = -7006613;
int32_t t133 = -165380808;
static int16_t x976 = -1;
int32_t t137 = -1;
int32_t t138 = -1;
int8_t x1007 = 1;
int32_t t139 = -170619978;
uint16_t x1012 = UINT16_MAX;
int8_t x1034 = INT8_MIN;
uint16_t x1036 = 1U;
int32_t t144 = 1486523;
uint16_t x1043 = UINT16_MAX;
int16_t x1044 = 8;
volatile int32_t t145 = -13798459;
int16_t x1050 = INT16_MAX;
int8_t x1073 = INT8_MIN;
volatile int8_t x1074 = INT8_MIN;
volatile uint64_t x1081 = 1040937181LLU;
static uint8_t x1094 = UINT8_MAX;
static int32_t t152 = -255173;
volatile int32_t t153 = 4238;
int16_t x1114 = -1;
uint32_t x1116 = 0U;
int32_t x1121 = 848;
volatile int32_t t155 = 57554;
uint8_t x1133 = 40U;
int8_t x1168 = INT8_MIN;
volatile int32_t t159 = -35095358;
volatile int64_t x1171 = -1LL;
int32_t x1174 = INT32_MAX;
volatile uint32_t x1175 = 0U;
static int64_t x1195 = 4336323LL;
int64_t x1206 = -1LL;
int64_t x1208 = -1LL;
int32_t t163 = 60747732;
volatile int64_t x1236 = 1LL;
int32_t x1251 = -9;
uint32_t x1258 = 25249U;
uint32_t x1289 = 9163711U;
int32_t x1291 = INT32_MIN;
int64_t x1304 = 14783LL;
int32_t t174 = -19038692;
static volatile int8_t x1325 = -1;
volatile int32_t x1329 = 2299641;
int64_t x1330 = -105007362327LL;
int64_t x1331 = 1LL;
volatile uint64_t x1332 = 11929LLU;
volatile int32_t t177 = 1796868;
int8_t x1337 = 5;
static uint32_t x1340 = UINT32_MAX;
static int32_t t180 = -152872;
static int32_t x1353 = -5546;
volatile int32_t t183 = -16089683;
int32_t x1374 = -1;
volatile int32_t t184 = -1;
int16_t x1382 = 1;
volatile int16_t x1391 = INT16_MAX;
volatile uint32_t x1405 = 50945U;
int16_t x1408 = 0;
uint32_t x1439 = UINT32_MAX;
static volatile int8_t x1447 = INT8_MAX;
uint64_t x1448 = UINT64_MAX;
static int64_t x1458 = -1LL;
volatile int32_t x1469 = -13188338;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	volatile int16_t x3 = INT16_MIN;
	static int32_t t0 = 218075;

    t0 = ((x1*x2)>(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 670598883542LLU;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 53795567653689LLU;
	uint16_t x8 = UINT16_MAX;

    t1 = ((x5*x6)>(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = -48;
	int64_t x10 = 0LL;
	static volatile int8_t x12 = INT8_MAX;

    t2 = ((x9*x10)>(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x37 = INT64_MIN;
	volatile uint64_t x38 = 14323985559237LLU;
	uint32_t x39 = 1U;
	int32_t x40 = -19199;
	volatile int32_t t3 = 466849;

    t3 = ((x37*x38)>(x39*x40));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x41 = -1;
	int64_t x43 = -6452894LL;
	int8_t x44 = INT8_MIN;
	volatile int32_t t4 = -70798422;

    t4 = ((x41*x42)>(x43*x44));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x45 = -1LL;
	volatile int16_t x46 = 0;
	int8_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile int32_t t5 = -78463483;

    t5 = ((x45*x46)>(x47*x48));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x62 = -2;
	volatile int32_t t6 = 896041617;

    t6 = ((x61*x62)>(x63*x64));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x66 = 29737480720LL;
	uint64_t x68 = UINT64_MAX;
	static int32_t t7 = -116073;

    t7 = ((x65*x66)>(x67*x68));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x73 = 111U;
	int64_t x74 = -1LL;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = -359616;
	volatile int32_t t8 = 284774097;

    t8 = ((x73*x74)>(x75*x76));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x85 = -1;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -459586417LL;
	volatile int32_t t9 = -1;

    t9 = ((x85*x86)>(x87*x88));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x93 = 1026230899U;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	volatile int32_t t10 = -513;

    t10 = ((x93*x94)>(x95*x96));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x100 = INT8_MAX;

    t11 = ((x97*x98)>(x99*x100));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x102 = 809LL;
	static uint8_t x104 = 0U;
	int32_t t12 = 17642762;

    t12 = ((x101*x102)>(x103*x104));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x105 = 831358582307LLU;
	volatile int64_t x106 = INT64_MIN;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = -1LL;

    t13 = ((x105*x106)>(x107*x108));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x121 = INT32_MAX;
	volatile uint64_t x122 = 117885725202982809LLU;
	int16_t x123 = INT16_MIN;
	volatile int32_t t14 = -28475;

    t14 = ((x121*x122)>(x123*x124));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x129 = INT16_MIN;
	static int32_t x130 = -545;
	int64_t x131 = -8893092LL;
	volatile int32_t t15 = 17807222;

    t15 = ((x129*x130)>(x131*x132));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x133 = 10;
	uint32_t x135 = 64480U;
	volatile int64_t x136 = -1LL;
	static int32_t t16 = 47640;

    t16 = ((x133*x134)>(x135*x136));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x141 = -1522582683027LL;
	uint32_t x142 = 53U;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = 20;
	int32_t t17 = 35;

    t17 = ((x141*x142)>(x143*x144));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x145 = INT32_MIN;
	uint32_t x146 = 301U;
	int32_t x147 = 1547386;
	volatile int32_t t18 = 523;

    t18 = ((x145*x146)>(x147*x148));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x149 = -1;
	static uint8_t x151 = 105U;
	volatile int32_t t19 = -902;

    t19 = ((x149*x150)>(x151*x152));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x153 = 44;
	int8_t x154 = -5;
	uint8_t x155 = UINT8_MAX;
	static int32_t t20 = -5;

    t20 = ((x153*x154)>(x155*x156));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile int8_t x163 = INT8_MIN;

    t21 = ((x161*x162)>(x163*x164));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x165 = 1U;
	int16_t x166 = 7;
	static int8_t x168 = -1;
	volatile int32_t t22 = -3;

    t22 = ((x165*x166)>(x167*x168));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x169 = 1LLU;
	int8_t x170 = 11;
	int8_t x171 = INT8_MAX;

    t23 = ((x169*x170)>(x171*x172));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x173 = -14684895481529524LL;
	uint8_t x174 = 4U;
	volatile int64_t x176 = 2945365007140327LL;
	int32_t t24 = 7501855;

    t24 = ((x173*x174)>(x175*x176));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x177 = -4303542962427116LL;
	int16_t x178 = -288;
	uint32_t x180 = UINT32_MAX;

    t25 = ((x177*x178)>(x179*x180));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = UINT64_MAX;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = 0;
	static volatile int32_t t26 = -66802546;

    t26 = ((x181*x182)>(x183*x184));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x190 = 64U;
	static uint32_t x191 = 1150U;
	int16_t x192 = INT16_MIN;
	volatile int32_t t27 = 1;

    t27 = ((x189*x190)>(x191*x192));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x193 = INT8_MIN;
	volatile uint8_t x194 = UINT8_MAX;
	volatile uint8_t x195 = 0U;
	static int64_t x196 = -1LL;

    t28 = ((x193*x194)>(x195*x196));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	uint64_t x203 = 14LLU;

    t29 = ((x201*x202)>(x203*x204));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x205 = 0U;
	int32_t x206 = 1998199;
	int32_t x207 = -28958;
	int64_t x208 = -1LL;
	volatile int32_t t30 = 1626991;

    t30 = ((x205*x206)>(x207*x208));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t t31 = -1614807;

    t31 = ((x209*x210)>(x211*x212));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x217 = INT16_MIN;
	uint32_t x218 = 113093U;
	static int64_t x219 = -403498LL;
	int32_t x220 = -1;

    t32 = ((x217*x218)>(x219*x220));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x221 = -1;
	volatile uint8_t x222 = 11U;
	static uint8_t x223 = 5U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t33 = 6794061;

    t33 = ((x221*x222)>(x223*x224));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x225 = INT64_MAX;
	static uint64_t x226 = 1018735140741306978LLU;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -1;
	volatile int32_t t34 = -2158;

    t34 = ((x225*x226)>(x227*x228));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x229 = UINT8_MAX;
	int16_t x230 = INT16_MAX;
	int16_t x231 = -1;
	uint64_t x232 = UINT64_MAX;

    t35 = ((x229*x230)>(x231*x232));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x238 = INT16_MAX;
	int64_t x239 = 369595LL;
	static uint8_t x240 = UINT8_MAX;
	int32_t t36 = 44032;

    t36 = ((x237*x238)>(x239*x240));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x245 = -1;
	int16_t x246 = 16;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = -1;
	volatile int32_t t37 = 8969229;

    t37 = ((x245*x246)>(x247*x248));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x249 = -1LL;
	static int32_t x250 = -1;
	static uint32_t x251 = 219U;
	volatile int8_t x252 = INT8_MAX;
	int32_t t38 = -74533;

    t38 = ((x249*x250)>(x251*x252));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x265 = 77U;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = 380670U;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t39 = -3;

    t39 = ((x265*x266)>(x267*x268));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x269 = 515756U;
	static int8_t x270 = 0;
	volatile uint32_t x271 = 59989U;
	int8_t x272 = -1;
	int32_t t40 = 874052064;

    t40 = ((x269*x270)>(x271*x272));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x275 = -1;
	volatile uint32_t x276 = UINT32_MAX;
	static volatile int32_t t41 = 86808509;

    t41 = ((x273*x274)>(x275*x276));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x286 = 9U;
	int16_t x287 = INT16_MIN;

    t42 = ((x285*x286)>(x287*x288));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x298 = UINT8_MAX;
	static uint32_t x299 = 0U;
	int32_t x300 = -68231130;
	volatile int32_t t43 = 14;

    t43 = ((x297*x298)>(x299*x300));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x301 = 7;
	int8_t x303 = 1;
	static int8_t x304 = INT8_MAX;
	static volatile int32_t t44 = 464;

    t44 = ((x301*x302)>(x303*x304));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x305 = -5472087;
	int16_t x307 = INT16_MAX;
	volatile int16_t x308 = -1;
	static volatile int32_t t45 = 72323;

    t45 = ((x305*x306)>(x307*x308));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x313 = 184789U;
	int32_t x315 = -11251;
	static uint8_t x316 = 10U;
	int32_t t46 = 1831;

    t46 = ((x313*x314)>(x315*x316));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x317 = 184U;
	int32_t x319 = -5;
	uint8_t x320 = 17U;

    t47 = ((x317*x318)>(x319*x320));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x325 = 3300;
	uint32_t x326 = 3319976U;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t48 = -69;

    t48 = ((x325*x326)>(x327*x328));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x329 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	volatile int32_t t49 = 7;

    t49 = ((x329*x330)>(x331*x332));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x333 = 3LL;
	int16_t x334 = -1;
	int32_t x335 = 5;
	uint32_t x336 = 31U;

    t50 = ((x333*x334)>(x335*x336));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x345 = -3;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	volatile int32_t t51 = 19649;

    t51 = ((x345*x346)>(x347*x348));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x365 = 1U;
	int32_t x366 = 69510584;
	static int32_t t52 = 10900;

    t52 = ((x365*x366)>(x367*x368));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x370 = -298;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t53 = -12822;

    t53 = ((x369*x370)>(x371*x372));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x373 = UINT32_MAX;
	static volatile uint64_t x374 = 7397186LLU;
	volatile uint8_t x375 = 12U;
	uint8_t x376 = 22U;
	int32_t t54 = -1634227;

    t54 = ((x373*x374)>(x375*x376));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x385 = -1796190;
	static volatile uint8_t x386 = UINT8_MAX;
	static int8_t x387 = INT8_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t55 = -1941934;

    t55 = ((x385*x386)>(x387*x388));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x389 = 0U;
	uint32_t x390 = 183144515U;
	volatile int32_t t56 = -837;

    t56 = ((x389*x390)>(x391*x392));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x397 = -32;
	int8_t x398 = -1;
	volatile uint32_t x400 = 986067U;
	int32_t t57 = 25;

    t57 = ((x397*x398)>(x399*x400));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x401 = -1;
	static int16_t x403 = INT16_MIN;
	static uint16_t x404 = UINT16_MAX;
	volatile int32_t t58 = 39310;

    t58 = ((x401*x402)>(x403*x404));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x409 = UINT32_MAX;
	static int32_t x411 = -6053;
	static uint64_t x412 = 247LLU;
	volatile int32_t t59 = 35263270;

    t59 = ((x409*x410)>(x411*x412));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x414 = INT8_MIN;
	uint64_t x415 = 148782LLU;
	static uint16_t x416 = 5380U;
	volatile int32_t t60 = -1;

    t60 = ((x413*x414)>(x415*x416));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x417 = 23U;
	static int64_t x418 = -111596179557028LL;
	volatile int8_t x419 = INT8_MAX;
	uint16_t x420 = UINT16_MAX;

    t61 = ((x417*x418)>(x419*x420));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x425 = 1154U;
	volatile int16_t x426 = 15193;
	static uint64_t x428 = 4119649455210356144LLU;
	int32_t t62 = 29;

    t62 = ((x425*x426)>(x427*x428));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x429 = UINT16_MAX;
	uint64_t x430 = UINT64_MAX;
	int16_t x431 = INT16_MIN;
	int32_t t63 = -143947352;

    t63 = ((x429*x430)>(x431*x432));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x453 = -343;
	volatile uint8_t x454 = 8U;
	volatile int16_t x455 = 39;
	uint32_t x456 = 6122U;
	int32_t t64 = -21459426;

    t64 = ((x453*x454)>(x455*x456));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x457 = -7;
	volatile uint64_t x459 = UINT64_MAX;
	uint8_t x460 = UINT8_MAX;
	int32_t t65 = 2377;

    t65 = ((x457*x458)>(x459*x460));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x473 = 3677U;
	uint8_t x474 = 0U;
	uint16_t x475 = 1113U;
	int32_t x476 = 573348;

    t66 = ((x473*x474)>(x475*x476));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x489 = -350404729155LL;
	uint8_t x491 = 0U;
	int32_t t67 = 1;

    t67 = ((x489*x490)>(x491*x492));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x497 = -1;
	int16_t x498 = INT16_MAX;
	uint32_t x500 = 50U;
	static volatile int32_t t68 = -12262;

    t68 = ((x497*x498)>(x499*x500));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x503 = INT16_MIN;
	static uint32_t x504 = 206U;
	int32_t t69 = 630575754;

    t69 = ((x501*x502)>(x503*x504));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x505 = 4U;
	int16_t x506 = INT16_MIN;
	int32_t t70 = 2523;

    t70 = ((x505*x506)>(x507*x508));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x509 = 9626120977545994LLU;
	uint64_t x510 = 7699624292954943875LLU;
	static int8_t x512 = INT8_MIN;
	volatile int32_t t71 = -8770412;

    t71 = ((x509*x510)>(x511*x512));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x513 = 103U;
	static uint64_t x514 = UINT64_MAX;
	uint8_t x515 = 75U;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t72 = -80;

    t72 = ((x513*x514)>(x515*x516));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x517 = INT8_MIN;
	uint32_t x518 = 35U;
	int8_t x519 = INT8_MIN;
	int32_t x520 = 11207375;

    t73 = ((x517*x518)>(x519*x520));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x521 = -1;
	int64_t x522 = INT64_MAX;
	uint64_t x523 = 23643120062313911LLU;
	uint8_t x524 = 0U;

    t74 = ((x521*x522)>(x523*x524));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x525 = -1LL;
	uint8_t x526 = 1U;
	static uint64_t x527 = 1842454LLU;
	static uint64_t x528 = 3794848LLU;
	volatile int32_t t75 = 21241;

    t75 = ((x525*x526)>(x527*x528));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x530 = 2357;
	uint32_t x531 = 100U;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t76 = 119989570;

    t76 = ((x529*x530)>(x531*x532));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x533 = 7308411LLU;
	volatile int16_t x535 = -1;
	volatile int16_t x536 = INT16_MIN;
	static volatile int32_t t77 = -58413;

    t77 = ((x533*x534)>(x535*x536));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x537 = 12;
	volatile int16_t x538 = INT16_MIN;
	static int8_t x539 = -10;
	uint64_t x540 = 52780950291130660LLU;

    t78 = ((x537*x538)>(x539*x540));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x549 = -1;
	volatile uint64_t x550 = 9385LLU;
	int32_t x551 = -3;
	volatile int8_t x552 = INT8_MAX;
	static volatile int32_t t79 = -7942;

    t79 = ((x549*x550)>(x551*x552));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x553 = UINT16_MAX;
	int8_t x554 = INT8_MIN;
	int32_t t80 = -32137808;

    t80 = ((x553*x554)>(x555*x556));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x561 = -1;
	volatile uint8_t x562 = 7U;
	static int32_t x564 = -2129688;
	static volatile int32_t t81 = -401;

    t81 = ((x561*x562)>(x563*x564));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x566 = 14U;
	int64_t x567 = 612859966LL;
	int64_t x568 = 5212LL;

    t82 = ((x565*x566)>(x567*x568));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x569 = -439;
	uint8_t x570 = 0U;
	volatile int32_t x571 = -1;
	int8_t x572 = INT8_MIN;
	int32_t t83 = -13;

    t83 = ((x569*x570)>(x571*x572));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t t84 = -103379;

    t84 = ((x585*x586)>(x587*x588));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x595 = INT16_MIN;
	static volatile int64_t x596 = -9193574LL;
	int32_t t85 = 0;

    t85 = ((x593*x594)>(x595*x596));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x597 = 125004810;
	static int8_t x598 = -1;
	int64_t x599 = 32LL;
	uint32_t x600 = 785162431U;
	int32_t t86 = 63692700;

    t86 = ((x597*x598)>(x599*x600));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x609 = 8U;
	int32_t x612 = INT32_MIN;
	static int32_t t87 = -1;

    t87 = ((x609*x610)>(x611*x612));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x613 = 3U;
	static uint16_t x614 = UINT16_MAX;
	int16_t x615 = INT16_MIN;
	volatile int32_t t88 = 1;

    t88 = ((x613*x614)>(x615*x616));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x617 = 1;
	volatile uint8_t x618 = UINT8_MAX;
	int16_t x619 = 433;
	int64_t x620 = -1LL;
	volatile int32_t t89 = -303;

    t89 = ((x617*x618)>(x619*x620));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x621 = UINT16_MAX;
	int32_t x622 = 0;
	int32_t x624 = 6091;
	int32_t t90 = -4071248;

    t90 = ((x621*x622)>(x623*x624));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x637 = 1;
	static int8_t x638 = -31;
	uint16_t x639 = 0U;
	volatile int32_t x640 = INT32_MIN;
	int32_t t91 = -53;

    t91 = ((x637*x638)>(x639*x640));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x641 = -1LL;
	int32_t x642 = -1;
	uint16_t x644 = 11U;
	int32_t t92 = 241;

    t92 = ((x641*x642)>(x643*x644));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x650 = INT16_MIN;
	static volatile int32_t x651 = 3;
	int16_t x652 = INT16_MIN;
	volatile int32_t t93 = -177;

    t93 = ((x649*x650)>(x651*x652));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x669 = UINT16_MAX;
	static int8_t x670 = -1;
	uint64_t x671 = UINT64_MAX;
	int8_t x672 = -19;
	volatile int32_t t94 = -9932156;

    t94 = ((x669*x670)>(x671*x672));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x673 = 12U;
	int64_t x674 = -17949972LL;
	int64_t x675 = INT64_MIN;
	volatile uint64_t x676 = UINT64_MAX;
	int32_t t95 = 0;

    t95 = ((x673*x674)>(x675*x676));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x681 = 30U;
	volatile uint8_t x682 = UINT8_MAX;
	uint32_t x683 = 0U;
	int64_t x684 = -106LL;
	volatile int32_t t96 = -524;

    t96 = ((x681*x682)>(x683*x684));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = INT8_MAX;
	static uint32_t x695 = 3977035U;
	int32_t t97 = -467596779;

    t97 = ((x693*x694)>(x695*x696));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x701 = -1;
	int16_t x702 = 27;
	volatile int16_t x703 = -903;
	uint8_t x704 = UINT8_MAX;
	int32_t t98 = -6565;

    t98 = ((x701*x702)>(x703*x704));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x718 = 2321LLU;
	int8_t x719 = INT8_MIN;
	uint16_t x720 = 0U;
	int32_t t99 = 281790;

    t99 = ((x717*x718)>(x719*x720));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x741 = INT16_MIN;
	int32_t x742 = -108;
	uint64_t x744 = 32764279398912LLU;
	volatile int32_t t100 = 124811;

    t100 = ((x741*x742)>(x743*x744));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	uint64_t x746 = UINT64_MAX;
	int8_t x747 = INT8_MIN;
	int8_t x748 = -1;
	volatile int32_t t101 = -1;

    t101 = ((x745*x746)>(x747*x748));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x749 = 2517938815248080078LLU;
	uint64_t x750 = UINT64_MAX;
	int8_t x751 = INT8_MIN;
	volatile int16_t x752 = -1;
	static int32_t t102 = -6124835;

    t102 = ((x749*x750)>(x751*x752));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x753 = INT16_MIN;
	static int64_t x754 = 41456163896LL;
	static int8_t x756 = 12;
	volatile int32_t t103 = 11188413;

    t103 = ((x753*x754)>(x755*x756));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x758 = -21;
	int64_t x760 = 443LL;
	static int32_t t104 = -3810;

    t104 = ((x757*x758)>(x759*x760));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x761 = INT8_MAX;
	static volatile uint64_t x762 = UINT64_MAX;
	int16_t x764 = INT16_MAX;
	volatile int32_t t105 = -51;

    t105 = ((x761*x762)>(x763*x764));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x782 = 34U;
	uint32_t x783 = 6923777U;
	uint32_t x784 = UINT32_MAX;
	int32_t t106 = -88;

    t106 = ((x781*x782)>(x783*x784));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x789 = 14890354LLU;
	volatile uint32_t x790 = 13207703U;
	uint8_t x791 = 1U;
	volatile int8_t x792 = INT8_MAX;
	int32_t t107 = -123360021;

    t107 = ((x789*x790)>(x791*x792));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x797 = 7335791U;
	uint16_t x798 = 1U;
	static uint32_t x799 = UINT32_MAX;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t108 = -40;

    t108 = ((x797*x798)>(x799*x800));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x813 = UINT8_MAX;
	uint16_t x814 = 7492U;
	volatile int64_t x815 = 5LL;
	int64_t x816 = 157LL;
	int32_t t109 = 74;

    t109 = ((x813*x814)>(x815*x816));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x817 = 647U;
	uint16_t x818 = 75U;
	int8_t x819 = INT8_MAX;
	static int8_t x820 = INT8_MIN;
	volatile int32_t t110 = -2325;

    t110 = ((x817*x818)>(x819*x820));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x821 = -42;
	volatile int64_t x822 = -1LL;
	uint32_t x824 = UINT32_MAX;

    t111 = ((x821*x822)>(x823*x824));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x825 = INT16_MAX;
	int64_t x826 = -1006560996118LL;
	static uint16_t x827 = 2U;
	int8_t x828 = INT8_MAX;
	int32_t t112 = -16868;

    t112 = ((x825*x826)>(x827*x828));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x829 = UINT8_MAX;
	int8_t x830 = INT8_MIN;
	static uint8_t x832 = 114U;
	volatile int32_t t113 = -38324147;

    t113 = ((x829*x830)>(x831*x832));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x833 = UINT32_MAX;
	uint8_t x834 = UINT8_MAX;
	int16_t x835 = INT16_MIN;
	uint32_t x836 = 882U;
	int32_t t114 = -1;

    t114 = ((x833*x834)>(x835*x836));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x841 = UINT64_MAX;
	int8_t x842 = INT8_MIN;
	int8_t x844 = INT8_MIN;
	int32_t t115 = 138149473;

    t115 = ((x841*x842)>(x843*x844));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x853 = 5914293U;
	uint8_t x855 = 1U;
	uint32_t x856 = UINT32_MAX;
	volatile int32_t t116 = -90155321;

    t116 = ((x853*x854)>(x855*x856));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x858 = INT64_MAX;
	uint64_t x859 = 284569861676LLU;
	int8_t x860 = -1;
	volatile int32_t t117 = 57960;

    t117 = ((x857*x858)>(x859*x860));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x861 = -251;
	volatile uint64_t x862 = UINT64_MAX;
	static uint16_t x863 = 332U;

    t118 = ((x861*x862)>(x863*x864));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x877 = 6U;
	int64_t x878 = 186340408336858918LL;
	static int8_t x879 = INT8_MAX;
	uint16_t x880 = 91U;

    t119 = ((x877*x878)>(x879*x880));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x885 = INT8_MAX;
	volatile int32_t x886 = 11648;
	static uint32_t x887 = UINT32_MAX;
	uint16_t x888 = UINT16_MAX;
	volatile int32_t t120 = 73718;

    t120 = ((x885*x886)>(x887*x888));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x889 = 0;
	uint32_t x890 = UINT32_MAX;
	int32_t x891 = -1;
	uint64_t x892 = 4567736635LLU;
	int32_t t121 = -746457499;

    t121 = ((x889*x890)>(x891*x892));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x894 = 1;
	static volatile uint8_t x896 = UINT8_MAX;

    t122 = ((x893*x894)>(x895*x896));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x897 = -1;
	int8_t x898 = -11;
	int8_t x899 = 13;
	volatile uint8_t x900 = 62U;

    t123 = ((x897*x898)>(x899*x900));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x906 = 136363171955196201LLU;
	static volatile int16_t x907 = 7327;
	int8_t x908 = -1;
	volatile int32_t t124 = -7570626;

    t124 = ((x905*x906)>(x907*x908));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x917 = UINT16_MAX;
	int16_t x919 = 5560;
	static volatile uint16_t x920 = 0U;
	static volatile int32_t t125 = 18;

    t125 = ((x917*x918)>(x919*x920));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x921 = INT8_MIN;
	static int8_t x922 = INT8_MIN;
	int16_t x923 = INT16_MIN;
	int32_t t126 = -15318408;

    t126 = ((x921*x922)>(x923*x924));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x925 = 133LLU;
	static uint8_t x926 = 38U;
	volatile int8_t x927 = -9;
	uint64_t x928 = 3944909103211927LLU;
	int32_t t127 = 641;

    t127 = ((x925*x926)>(x927*x928));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x942 = UINT16_MAX;
	volatile int32_t t128 = -275;

    t128 = ((x941*x942)>(x943*x944));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x947 = 14;
	static uint16_t x948 = 293U;
	int32_t t129 = -9;

    t129 = ((x945*x946)>(x947*x948));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x949 = INT8_MIN;
	int16_t x950 = 0;
	volatile int32_t t130 = 569659;

    t130 = ((x949*x950)>(x951*x952));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x954 = -1;
	int32_t x955 = INT32_MIN;
	uint64_t x956 = UINT64_MAX;
	int32_t t131 = -172890984;

    t131 = ((x953*x954)>(x955*x956));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x965 = 161U;
	volatile int8_t x966 = 53;
	uint16_t x968 = UINT16_MAX;

    t132 = ((x965*x966)>(x967*x968));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x969 = UINT64_MAX;
	volatile int16_t x970 = INT16_MIN;
	int8_t x971 = 0;
	uint16_t x972 = UINT16_MAX;

    t133 = ((x969*x970)>(x971*x972));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x973 = 1U;
	int32_t x974 = -4405;
	static volatile uint32_t x975 = 123373U;
	int32_t t134 = -1;

    t134 = ((x973*x974)>(x975*x976));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x977 = 399U;
	uint16_t x978 = 84U;
	uint16_t x979 = 10U;
	int32_t x980 = -1;
	volatile int32_t t135 = 179217365;

    t135 = ((x977*x978)>(x979*x980));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x981 = 195;
	static int16_t x982 = 1;
	uint8_t x983 = 2U;
	int16_t x984 = -1;
	int32_t t136 = -99608;

    t136 = ((x981*x982)>(x983*x984));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x985 = UINT8_MAX;
	int16_t x986 = INT16_MIN;
	int32_t x987 = -1;
	uint16_t x988 = 13347U;

    t137 = ((x985*x986)>(x987*x988));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x997 = 3LLU;
	int32_t x998 = INT32_MIN;
	int64_t x999 = -1LL;
	static volatile int32_t x1000 = INT32_MIN;

    t138 = ((x997*x998)>(x999*x1000));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x1005 = 265794735LLU;
	uint64_t x1006 = 1100408046349889LLU;
	static volatile uint32_t x1008 = 2108U;

    t139 = ((x1005*x1006)>(x1007*x1008));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1009 = -71;
	uint64_t x1010 = UINT64_MAX;
	static volatile int32_t x1011 = -1;
	volatile int32_t t140 = 35;

    t140 = ((x1009*x1010)>(x1011*x1012));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1025 = INT16_MIN;
	volatile int8_t x1026 = INT8_MIN;
	int8_t x1027 = -1;
	int8_t x1028 = -1;
	static int32_t t141 = 74;

    t141 = ((x1025*x1026)>(x1027*x1028));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1029 = -399;
	uint8_t x1030 = UINT8_MAX;
	volatile uint64_t x1031 = UINT64_MAX;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t142 = 1;

    t142 = ((x1029*x1030)>(x1031*x1032));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1033 = UINT64_MAX;
	uint8_t x1035 = 10U;
	int32_t t143 = -28;

    t143 = ((x1033*x1034)>(x1035*x1036));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1037 = -1;
	int8_t x1038 = INT8_MIN;
	uint16_t x1039 = 24U;
	uint32_t x1040 = UINT32_MAX;

    t144 = ((x1037*x1038)>(x1039*x1040));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1041 = 3U;
	volatile int16_t x1042 = 54;

    t145 = ((x1041*x1042)>(x1043*x1044));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1049 = -768009203LL;
	int32_t x1051 = 738147281;
	int32_t x1052 = 1;
	int32_t t146 = 120;

    t146 = ((x1049*x1050)>(x1051*x1052));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1065 = -1;
	uint16_t x1066 = 27U;
	int64_t x1067 = -1LL;
	uint32_t x1068 = UINT32_MAX;
	static volatile int32_t t147 = -5230379;

    t147 = ((x1065*x1066)>(x1067*x1068));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1075 = 1;
	uint8_t x1076 = 1U;
	int32_t t148 = -58194;

    t148 = ((x1073*x1074)>(x1075*x1076));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1077 = 1375995LLU;
	static int8_t x1078 = -1;
	volatile int8_t x1079 = 0;
	int16_t x1080 = INT16_MIN;
	static int32_t t149 = -7043059;

    t149 = ((x1077*x1078)>(x1079*x1080));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1082 = INT16_MIN;
	int8_t x1083 = INT8_MIN;
	static uint32_t x1084 = 8252U;
	int32_t t150 = -242671838;

    t150 = ((x1081*x1082)>(x1083*x1084));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x1093 = -1;
	uint32_t x1095 = UINT32_MAX;
	static volatile int16_t x1096 = INT16_MAX;
	volatile int32_t t151 = 8;

    t151 = ((x1093*x1094)>(x1095*x1096));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x1097 = 1LLU;
	int16_t x1098 = -582;
	volatile int8_t x1099 = -1;
	int64_t x1100 = INT64_MAX;

    t152 = ((x1097*x1098)>(x1099*x1100));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x1105 = 4U;
	volatile int8_t x1106 = 4;
	uint64_t x1107 = 102072913872781649LLU;
	int32_t x1108 = 174;

    t153 = ((x1105*x1106)>(x1107*x1108));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1113 = -1;
	static uint32_t x1115 = 59819U;
	static int32_t t154 = -95;

    t154 = ((x1113*x1114)>(x1115*x1116));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1122 = -5071846163444038LL;
	int8_t x1123 = -1;
	static int32_t x1124 = 3715;

    t155 = ((x1121*x1122)>(x1123*x1124));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1134 = 13663;
	int8_t x1135 = INT8_MIN;
	uint32_t x1136 = 1212089232U;
	static volatile int32_t t156 = -25037;

    t156 = ((x1133*x1134)>(x1135*x1136));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1145 = INT8_MIN;
	uint64_t x1146 = UINT64_MAX;
	int8_t x1147 = INT8_MAX;
	int16_t x1148 = INT16_MAX;
	int32_t t157 = 207205976;

    t157 = ((x1145*x1146)>(x1147*x1148));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1157 = -16197343LL;
	int32_t x1158 = INT32_MAX;
	static int16_t x1159 = -1;
	static uint32_t x1160 = UINT32_MAX;
	int32_t t158 = 9567186;

    t158 = ((x1157*x1158)>(x1159*x1160));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x1165 = 1184U;
	volatile int64_t x1166 = -1LL;
	static int16_t x1167 = INT16_MIN;

    t159 = ((x1165*x1166)>(x1167*x1168));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1169 = 23797039U;
	uint64_t x1170 = UINT64_MAX;
	volatile uint64_t x1172 = UINT64_MAX;
	volatile int32_t t160 = 1770;

    t160 = ((x1169*x1170)>(x1171*x1172));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1173 = -1;
	static int64_t x1176 = INT64_MIN;
	volatile int32_t t161 = -32637;

    t161 = ((x1173*x1174)>(x1175*x1176));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1193 = UINT16_MAX;
	volatile uint64_t x1194 = 1224511LLU;
	int32_t x1196 = INT32_MAX;
	int32_t t162 = -3;

    t162 = ((x1193*x1194)>(x1195*x1196));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1205 = INT32_MIN;
	int64_t x1207 = INT64_MAX;

    t163 = ((x1205*x1206)>(x1207*x1208));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1233 = UINT32_MAX;
	uint16_t x1234 = UINT16_MAX;
	uint64_t x1235 = 6780785016662829LLU;
	volatile int32_t t164 = -3778;

    t164 = ((x1233*x1234)>(x1235*x1236));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1249 = INT8_MIN;
	uint16_t x1250 = UINT16_MAX;
	uint8_t x1252 = 9U;
	volatile int32_t t165 = -106891152;

    t165 = ((x1249*x1250)>(x1251*x1252));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x1253 = 3959223634540586136LLU;
	int16_t x1254 = -1;
	static volatile int8_t x1255 = INT8_MIN;
	int16_t x1256 = -3653;
	int32_t t166 = 811129;

    t166 = ((x1253*x1254)>(x1255*x1256));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x1257 = -1;
	volatile uint16_t x1259 = 14873U;
	int64_t x1260 = -1853875099378LL;
	int32_t t167 = 18498812;

    t167 = ((x1257*x1258)>(x1259*x1260));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1265 = 141304263112425LLU;
	static uint32_t x1266 = UINT32_MAX;
	int64_t x1267 = 449809788LL;
	volatile int32_t x1268 = INT32_MIN;
	int32_t t168 = -97442;

    t168 = ((x1265*x1266)>(x1267*x1268));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint64_t x1269 = 560753861LLU;
	int64_t x1270 = -5484413LL;
	int32_t x1271 = 10;
	static uint8_t x1272 = 24U;
	volatile int32_t t169 = 570;

    t169 = ((x1269*x1270)>(x1271*x1272));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x1273 = INT8_MAX;
	int8_t x1274 = -1;
	int16_t x1275 = INT16_MAX;
	uint64_t x1276 = UINT64_MAX;
	int32_t t170 = 0;

    t170 = ((x1273*x1274)>(x1275*x1276));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1277 = 2;
	static uint64_t x1278 = 8365795820LLU;
	uint8_t x1279 = 13U;
	static uint16_t x1280 = 6022U;
	volatile int32_t t171 = 1;

    t171 = ((x1277*x1278)>(x1279*x1280));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1290 = UINT32_MAX;
	uint32_t x1292 = 1562695060U;
	int32_t t172 = 3917;

    t172 = ((x1289*x1290)>(x1291*x1292));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1293 = 1;
	static volatile int64_t x1294 = 2801107013389LL;
	int8_t x1295 = -35;
	int16_t x1296 = -5;
	static int32_t t173 = 11458;

    t173 = ((x1293*x1294)>(x1295*x1296));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1301 = 116U;
	int64_t x1302 = -1LL;
	volatile int8_t x1303 = INT8_MAX;

    t174 = ((x1301*x1302)>(x1303*x1304));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1309 = -1;
	uint64_t x1310 = UINT64_MAX;
	uint32_t x1311 = 7127U;
	uint64_t x1312 = 8LLU;
	int32_t t175 = 54902;

    t175 = ((x1309*x1310)>(x1311*x1312));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1326 = 1;
	static int16_t x1327 = INT16_MIN;
	volatile int16_t x1328 = -3611;
	int32_t t176 = 1;

    t176 = ((x1325*x1326)>(x1327*x1328));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    

    t177 = ((x1329*x1330)>(x1331*x1332));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1338 = UINT32_MAX;
	static volatile int8_t x1339 = INT8_MIN;
	volatile int32_t t178 = 111922959;

    t178 = ((x1337*x1338)>(x1339*x1340));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1341 = 9U;
	uint64_t x1342 = 0LLU;
	int32_t x1343 = INT32_MIN;
	uint64_t x1344 = 1384546LLU;
	volatile int32_t t179 = -984999227;

    t179 = ((x1341*x1342)>(x1343*x1344));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1349 = -1LL;
	int16_t x1350 = INT16_MAX;
	int64_t x1351 = 224736LL;
	int32_t x1352 = INT32_MIN;

    t180 = ((x1349*x1350)>(x1351*x1352));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1354 = -48;
	static int32_t x1355 = 13895563;
	int16_t x1356 = -1;
	int32_t t181 = 36947;

    t181 = ((x1353*x1354)>(x1355*x1356));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1365 = -1LL;
	int16_t x1366 = -35;
	volatile uint8_t x1367 = 14U;
	static int64_t x1368 = -467024851162412742LL;
	int32_t t182 = 62669982;

    t182 = ((x1365*x1366)>(x1367*x1368));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1369 = INT8_MIN;
	int64_t x1370 = -1LL;
	int16_t x1371 = -1;
	int8_t x1372 = INT8_MAX;

    t183 = ((x1369*x1370)>(x1371*x1372));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1373 = 2109;
	int16_t x1375 = INT16_MAX;
	int32_t x1376 = -1;

    t184 = ((x1373*x1374)>(x1375*x1376));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1377 = INT16_MAX;
	uint32_t x1378 = 1500352U;
	static uint32_t x1379 = 59700U;
	uint8_t x1380 = UINT8_MAX;
	volatile int32_t t185 = -859107884;

    t185 = ((x1377*x1378)>(x1379*x1380));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1381 = 0;
	int8_t x1383 = INT8_MAX;
	int16_t x1384 = INT16_MIN;
	volatile int32_t t186 = 0;

    t186 = ((x1381*x1382)>(x1383*x1384));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x1385 = -1LL;
	static uint16_t x1386 = 20141U;
	static volatile uint8_t x1387 = UINT8_MAX;
	uint64_t x1388 = 21155LLU;
	volatile int32_t t187 = -1;

    t187 = ((x1385*x1386)>(x1387*x1388));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1389 = 418484960171912LLU;
	static volatile int64_t x1390 = 4087321841107LL;
	static int32_t x1392 = -1;
	volatile int32_t t188 = -82;

    t188 = ((x1389*x1390)>(x1391*x1392));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1406 = 68U;
	int8_t x1407 = -1;
	int32_t t189 = -282912;

    t189 = ((x1405*x1406)>(x1407*x1408));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1413 = INT16_MIN;
	static int64_t x1414 = -1LL;
	uint16_t x1415 = 0U;
	static int32_t x1416 = 165;
	volatile int32_t t190 = 98121;

    t190 = ((x1413*x1414)>(x1415*x1416));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1417 = -1;
	uint16_t x1418 = 175U;
	uint8_t x1419 = 85U;
	int8_t x1420 = INT8_MAX;
	volatile int32_t t191 = 1;

    t191 = ((x1417*x1418)>(x1419*x1420));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1425 = 7;
	int8_t x1426 = INT8_MIN;
	static uint16_t x1427 = 1613U;
	int16_t x1428 = INT16_MAX;
	volatile int32_t t192 = 611157;

    t192 = ((x1425*x1426)>(x1427*x1428));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1429 = UINT32_MAX;
	uint8_t x1430 = 17U;
	static int32_t x1431 = -1;
	static volatile int64_t x1432 = -276440238133LL;
	int32_t t193 = 86;

    t193 = ((x1429*x1430)>(x1431*x1432));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1433 = -1;
	int16_t x1434 = -1;
	static int64_t x1435 = -7LL;
	int16_t x1436 = INT16_MAX;
	int32_t t194 = 82;

    t194 = ((x1433*x1434)>(x1435*x1436));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1437 = UINT16_MAX;
	volatile uint32_t x1438 = 0U;
	static int32_t x1440 = 48363253;
	volatile int32_t t195 = 3;

    t195 = ((x1437*x1438)>(x1439*x1440));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1445 = 13U;
	int16_t x1446 = INT16_MIN;
	int32_t t196 = 15;

    t196 = ((x1445*x1446)>(x1447*x1448));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1449 = -1LL;
	uint64_t x1450 = 3LLU;
	static int16_t x1451 = 326;
	volatile int8_t x1452 = INT8_MIN;
	volatile int32_t t197 = -54120;

    t197 = ((x1449*x1450)>(x1451*x1452));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1457 = 224385LLU;
	uint32_t x1459 = 28895U;
	int8_t x1460 = INT8_MIN;
	static volatile int32_t t198 = -379;

    t198 = ((x1457*x1458)>(x1459*x1460));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1470 = -1;
	int8_t x1471 = -1;
	volatile int16_t x1472 = 3;
	volatile int32_t t199 = -7888;

    t199 = ((x1469*x1470)>(x1471*x1472));

    if (t199 != 1) { NG(); } else { ; }
	
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

