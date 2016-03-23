
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

static int64_t x2 = INT64_MAX;
int32_t x40 = INT32_MIN;
static volatile int32_t t4 = -1697;
int32_t x58 = 24;
int32_t x91 = -1;
int64_t x92 = -188617816173149LL;
static uint16_t x94 = 3U;
int8_t x95 = 1;
volatile uint64_t x101 = UINT64_MAX;
uint64_t x108 = 674412798815043LLU;
static int64_t x116 = INT64_MIN;
int64_t x153 = -33955333034210753LL;
volatile int16_t x154 = 276;
volatile int32_t x157 = -110;
int8_t x165 = INT8_MIN;
int16_t x167 = -1;
int32_t x172 = INT32_MAX;
int16_t x193 = 0;
volatile int32_t t29 = 103128598;
static volatile uint32_t x213 = 1922452141U;
int32_t x221 = -1;
volatile int32_t x229 = -59;
static volatile int32_t t33 = -43644758;
uint16_t x237 = UINT16_MAX;
int64_t x252 = -1LL;
int32_t t37 = 106535072;
uint32_t x254 = 3659758U;
static volatile int8_t x265 = INT8_MIN;
int16_t x268 = INT16_MIN;
int32_t t41 = -89740;
int64_t x282 = INT64_MIN;
int64_t x297 = INT64_MIN;
int32_t x304 = INT32_MIN;
uint32_t x310 = UINT32_MAX;
volatile int16_t x311 = -1;
volatile int16_t x312 = INT16_MIN;
int16_t x328 = -64;
volatile int16_t x330 = INT16_MIN;
uint64_t x333 = 207886957137LLU;
static uint8_t x337 = UINT8_MAX;
int32_t x338 = 18714;
static int16_t x354 = -1;
static uint16_t x365 = 200U;
static int32_t t59 = -77921575;
volatile int16_t x409 = -1;
int16_t x410 = INT16_MAX;
int16_t x432 = -113;
int32_t t64 = -21592184;
int32_t t65 = -11;
volatile int32_t t66 = 2697;
int8_t x457 = -1;
static volatile int32_t x465 = 2690;
int16_t x468 = INT16_MIN;
volatile int32_t t69 = 29;
int8_t x474 = -50;
int32_t t70 = -125;
volatile int64_t x492 = INT64_MIN;
uint64_t x501 = UINT64_MAX;
int32_t x504 = INT32_MIN;
int32_t t75 = 0;
int8_t x524 = INT8_MIN;
int8_t x542 = INT8_MIN;
volatile int32_t t79 = 23053563;
volatile int8_t x547 = -1;
int32_t x555 = INT32_MAX;
int64_t x556 = INT64_MAX;
int32_t t82 = 422609648;
uint16_t x560 = 80U;
int32_t t83 = -347;
int32_t x573 = -3;
int16_t x574 = -1;
uint32_t x587 = 316024960U;
int32_t t89 = -43;
int64_t x593 = -60008949LL;
int8_t x607 = 50;
int32_t t93 = 19551171;
uint8_t x622 = 51U;
int16_t x637 = INT16_MIN;
int32_t x658 = 13063731;
int32_t t97 = 3154;
uint8_t x663 = 1U;
int16_t x684 = INT16_MIN;
int16_t x685 = INT16_MIN;
int64_t x687 = 7LL;
static uint64_t x688 = 2233337618732427355LLU;
int32_t t101 = 12637;
int8_t x699 = INT8_MAX;
int32_t x706 = -1;
volatile int32_t t107 = 6378319;
int8_t x721 = -1;
int32_t x747 = INT32_MAX;
int64_t x778 = INT64_MIN;
int8_t x780 = -1;
uint16_t x782 = 21U;
int32_t t114 = 10;
int8_t x798 = -1;
int32_t t116 = -10836;
int8_t x805 = INT8_MIN;
int8_t x807 = -1;
volatile int64_t x808 = -1LL;
int8_t x825 = -1;
uint8_t x829 = 117U;
uint8_t x830 = 0U;
static uint32_t x831 = 1845004U;
int32_t t120 = -1;
int64_t x850 = INT64_MIN;
int8_t x852 = INT8_MIN;
static int32_t x860 = INT32_MIN;
int32_t x861 = INT32_MIN;
uint16_t x862 = UINT16_MAX;
static uint16_t x867 = UINT16_MAX;
static volatile int32_t t124 = 19470995;
static volatile uint16_t x883 = 0U;
volatile int32_t t129 = 31;
int16_t x898 = -11;
uint32_t x905 = UINT32_MAX;
int32_t x908 = -434;
int64_t x914 = INT64_MIN;
int16_t x915 = INT16_MAX;
uint8_t x926 = 5U;
int64_t x928 = -57189836828750558LL;
int64_t x931 = -1LL;
static volatile int32_t t136 = 2098;
int64_t x933 = INT64_MIN;
uint64_t x941 = 4009746791LLU;
int8_t x943 = 44;
static int64_t x949 = INT64_MAX;
volatile uint32_t x959 = UINT32_MAX;
static int64_t x961 = INT64_MIN;
int16_t x964 = INT16_MIN;
int32_t x967 = -6471396;
volatile uint16_t x971 = UINT16_MAX;
static int32_t x980 = INT32_MAX;
static int32_t t145 = 229;
volatile uint8_t x985 = 13U;
volatile int8_t x991 = -1;
static volatile int32_t x998 = -1;
int32_t x1000 = INT32_MIN;
volatile int32_t t149 = -4;
int64_t x1004 = INT64_MIN;
volatile int32_t x1012 = INT32_MAX;
static int32_t t152 = -389454015;
volatile int16_t x1017 = -17;
int32_t x1018 = INT32_MAX;
int32_t t156 = 253960365;
int64_t x1053 = -1LL;
volatile int32_t t160 = -8444699;
uint16_t x1062 = 26827U;
static int32_t x1071 = 761714;
int8_t x1074 = INT8_MAX;
volatile int32_t t165 = -873733;
int8_t x1103 = -1;
int16_t x1104 = -55;
volatile int32_t t166 = 1542377;
int8_t x1107 = 1;
uint8_t x1121 = UINT8_MAX;
int32_t x1122 = INT32_MIN;
int8_t x1123 = -52;
volatile uint8_t x1124 = UINT8_MAX;
static int16_t x1152 = INT16_MIN;
static uint32_t x1154 = 2U;
int64_t x1161 = INT64_MIN;
static int32_t x1191 = -1;
int32_t t177 = -2;
static uint8_t x1194 = 8U;
int64_t x1196 = INT64_MIN;
int8_t x1201 = INT8_MIN;
int32_t x1213 = -1;
int64_t x1214 = INT64_MAX;
uint16_t x1223 = UINT16_MAX;
volatile int64_t x1238 = -1LL;
int16_t x1241 = 15;
static int32_t x1244 = 30387188;
int8_t x1254 = 0;
static volatile int32_t x1274 = INT32_MIN;
int16_t x1282 = -1;
int32_t t191 = -12;
int8_t x1300 = INT8_MAX;
volatile int32_t t193 = 65143454;
int32_t x1309 = 1;
int32_t t195 = 263288060;
uint8_t x1330 = UINT8_MAX;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	int16_t x3 = -339;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 2037536;

    t0 = ((x1<=x2)<<(x3/x4));

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = -1LL;
	int32_t x22 = 8197179;
	static int16_t x23 = -1;
	static volatile int64_t x24 = INT64_MIN;
	volatile int32_t t1 = 35581196;

    t1 = ((x21<=x22)<<(x23/x24));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = -1LL;
	int32_t x26 = INT32_MIN;
	static int16_t x27 = -789;
	int64_t x28 = INT64_MAX;
	volatile int32_t t2 = 3473;

    t2 = ((x25<=x26)<<(x27/x28));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x29 = 3U;
	static uint8_t x30 = UINT8_MAX;
	volatile uint8_t x31 = UINT8_MAX;
	volatile int32_t x32 = INT32_MIN;
	int32_t t3 = 6218;

    t3 = ((x29<=x30)<<(x31/x32));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x37 = -170649693231816LL;
	int16_t x38 = -1;
	static int16_t x39 = INT16_MIN;

    t4 = ((x37<=x38)<<(x39/x40));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x57 = INT8_MIN;
	uint32_t x59 = 1755943U;
	int32_t x60 = -1;
	volatile int32_t t5 = -24546914;

    t5 = ((x57<=x58)<<(x59/x60));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x65 = -1;
	int64_t x66 = 352263682938LL;
	static volatile uint8_t x67 = 51U;
	int8_t x68 = INT8_MAX;
	volatile int32_t t6 = -1;

    t6 = ((x65<=x66)<<(x67/x68));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x73 = 4U;
	int16_t x74 = -1;
	volatile uint64_t x75 = 100LLU;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t7 = 29;

    t7 = ((x73<=x74)<<(x75/x76));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x89 = INT64_MAX;
	uint32_t x90 = 1114U;
	volatile int32_t t8 = 847372235;

    t8 = ((x89<=x90)<<(x91/x92));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x93 = 43;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t9 = -4588;

    t9 = ((x93<=x94)<<(x95/x96));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x102 = 1023400LLU;
	uint8_t x103 = UINT8_MAX;
	volatile int64_t x104 = -35652279825287389LL;
	volatile int32_t t10 = -4202201;

    t10 = ((x101<=x102)<<(x103/x104));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	volatile uint8_t x107 = 0U;
	static int32_t t11 = -3164;

    t11 = ((x105<=x106)<<(x107/x108));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = 0;
	static int16_t x115 = INT16_MIN;
	volatile int32_t t12 = -1579;

    t12 = ((x113<=x114)<<(x115/x116));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x121 = 306312222835459LLU;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -36LL;
	volatile int16_t x124 = INT16_MIN;
	int32_t t13 = -534;

    t13 = ((x121<=x122)<<(x123/x124));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x129 = 1770106U;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -31;
	static volatile int32_t t14 = 6484868;

    t14 = ((x129<=x130)<<(x131/x132));

    if (t14 != 16) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x137 = INT64_MIN;
	static volatile int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile int32_t t15 = 118230357;

    t15 = ((x137<=x138)<<(x139/x140));

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 36U;
	volatile uint16_t x151 = 377U;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t16 = 3856589;

    t16 = ((x149<=x150)<<(x151/x152));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x155 = 251448U;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t17 = 1;

    t17 = ((x153<=x154)<<(x155/x156));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x158 = INT64_MAX;
	static int32_t x159 = -9;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t18 = 173787;

    t18 = ((x157<=x158)<<(x159/x160));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	static int8_t x163 = -1;
	uint8_t x164 = 6U;
	int32_t t19 = 0;

    t19 = ((x161<=x162)<<(x163/x164));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x166 = -1LL;
	int32_t x168 = 8732432;
	volatile int32_t t20 = 1594;

    t20 = ((x165<=x166)<<(x167/x168));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = -2668;
	volatile int32_t x171 = -3042;
	volatile int32_t t21 = -383092;

    t21 = ((x169<=x170)<<(x171/x172));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x173 = -1;
	int8_t x174 = -1;
	int32_t x175 = -1;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t22 = -12176838;

    t22 = ((x173<=x174)<<(x175/x176));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	volatile int16_t x179 = INT16_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t23 = -76;

    t23 = ((x177<=x178)<<(x179/x180));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x185 = INT64_MAX;
	int8_t x186 = 0;
	int16_t x187 = INT16_MIN;
	static volatile int32_t x188 = INT32_MAX;
	int32_t t24 = 1;

    t24 = ((x185<=x186)<<(x187/x188));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x194 = INT32_MAX;
	static int8_t x195 = 1;
	volatile int16_t x196 = INT16_MIN;
	int32_t t25 = 141907;

    t25 = ((x193<=x194)<<(x195/x196));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x197 = UINT16_MAX;
	int16_t x198 = INT16_MAX;
	static int32_t x199 = 1367;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t26 = 2585;

    t26 = ((x197<=x198)<<(x199/x200));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x201 = 404;
	volatile int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t27 = -6;

    t27 = ((x201<=x202)<<(x203/x204));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int32_t t28 = -3;

    t28 = ((x205<=x206)<<(x207/x208));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x209 = INT8_MIN;
	static int32_t x210 = -25;
	static int32_t x211 = INT32_MIN;
	static int64_t x212 = INT64_MIN;

    t29 = ((x209<=x210)<<(x211/x212));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t30 = -593319678;

    t30 = ((x213<=x214)<<(x215/x216));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = -1LL;
	uint8_t x224 = UINT8_MAX;
	static int32_t t31 = -1;

    t31 = ((x221<=x222)<<(x223/x224));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x225 = -45961186060345LL;
	uint64_t x226 = UINT64_MAX;
	uint32_t x227 = 6127942U;
	int32_t x228 = -1;
	volatile int32_t t32 = -1083;

    t32 = ((x225<=x226)<<(x227/x228));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x230 = -17;
	volatile int32_t x231 = -1;
	int8_t x232 = INT8_MAX;

    t33 = ((x229<=x230)<<(x231/x232));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	static uint32_t x235 = 349694U;
	int16_t x236 = -1;
	int32_t t34 = 197531849;

    t34 = ((x233<=x234)<<(x235/x236));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x238 = 12U;
	uint8_t x239 = 88U;
	static int64_t x240 = INT64_MIN;
	int32_t t35 = -4;

    t35 = ((x237<=x238)<<(x239/x240));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x241 = -683;
	int8_t x242 = INT8_MAX;
	volatile int8_t x243 = 50;
	int64_t x244 = -47785445872LL;
	volatile int32_t t36 = -13864;

    t36 = ((x241<=x242)<<(x243/x244));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x249 = -1;
	int16_t x250 = 1431;
	int8_t x251 = -1;

    t37 = ((x249<=x250)<<(x251/x252));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t38 = 114787709;

    t38 = ((x253<=x254)<<(x255/x256));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x261 = 1U;
	uint16_t x262 = 8U;
	volatile uint32_t x263 = 24133338U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t39 = 15398;

    t39 = ((x261<=x262)<<(x263/x264));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x266 = 81925954LLU;
	int32_t x267 = -1;
	int32_t t40 = 1197;

    t40 = ((x265<=x266)<<(x267/x268));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x277 = INT8_MAX;
	int64_t x278 = -1LL;
	uint32_t x279 = 4663181U;
	volatile int8_t x280 = INT8_MIN;

    t41 = ((x277<=x278)<<(x279/x280));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x281 = 8807U;
	uint64_t x283 = 587LLU;
	int64_t x284 = INT64_MAX;
	int32_t t42 = -68;

    t42 = ((x281<=x282)<<(x283/x284));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x293 = INT32_MAX;
	uint8_t x294 = 26U;
	int16_t x295 = 737;
	int32_t x296 = INT32_MIN;
	volatile int32_t t43 = -50;

    t43 = ((x293<=x294)<<(x295/x296));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x298 = 4U;
	volatile uint64_t x299 = UINT64_MAX;
	static int8_t x300 = -1;
	int32_t t44 = -1623;

    t44 = ((x297<=x298)<<(x299/x300));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x301 = 30;
	volatile int32_t x302 = INT32_MIN;
	uint32_t x303 = 44U;
	volatile int32_t t45 = 6;

    t45 = ((x301<=x302)<<(x303/x304));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x309 = INT8_MAX;
	int32_t t46 = -273;

    t46 = ((x309<=x310)<<(x311/x312));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x313 = 23806612363LLU;
	int32_t x314 = -5958;
	static uint64_t x315 = UINT64_MAX;
	volatile int64_t x316 = -165939533133035072LL;
	static int32_t t47 = -437128;

    t47 = ((x313<=x314)<<(x315/x316));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x325 = -5;
	uint64_t x326 = 3675811LLU;
	int16_t x327 = 7;
	volatile int32_t t48 = -5501475;

    t48 = ((x325<=x326)<<(x327/x328));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x329 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	static volatile int32_t x332 = 1012067;
	static int32_t t49 = -49877735;

    t49 = ((x329<=x330)<<(x331/x332));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x334 = 1375195692U;
	int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 7211345614352049753LLU;
	int32_t t50 = 5321807;

    t50 = ((x333<=x334)<<(x335/x336));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x339 = 12U;
	static int8_t x340 = -1;
	int32_t t51 = 31;

    t51 = ((x337<=x338)<<(x339/x340));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x345 = 452698151LL;
	volatile int32_t x346 = INT32_MIN;
	volatile uint16_t x347 = 0U;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t52 = -4710422;

    t52 = ((x345<=x346)<<(x347/x348));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x353 = 447118834054LL;
	uint64_t x355 = 1165823LLU;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t53 = 59978;

    t53 = ((x353<=x354)<<(x355/x356));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x361 = -1;
	int16_t x362 = INT16_MAX;
	volatile uint8_t x363 = 38U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t54 = 51;

    t54 = ((x361<=x362)<<(x363/x364));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x366 = 113U;
	static volatile uint8_t x367 = 2U;
	int8_t x368 = -4;
	volatile int32_t t55 = 3234104;

    t55 = ((x365<=x366)<<(x367/x368));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x373 = -1;
	int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	static int64_t x376 = 10428501148LL;
	int32_t t56 = 194;

    t56 = ((x373<=x374)<<(x375/x376));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x377 = 55;
	volatile int32_t x378 = -2595;
	int8_t x379 = -1;
	int32_t x380 = 6;
	volatile int32_t t57 = 7088491;

    t57 = ((x377<=x378)<<(x379/x380));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x381 = -1;
	uint8_t x382 = 18U;
	static uint8_t x383 = 1U;
	uint64_t x384 = 8722458977LLU;
	int32_t t58 = 308492194;

    t58 = ((x381<=x382)<<(x383/x384));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x397 = -1LL;
	volatile int8_t x398 = INT8_MIN;
	uint16_t x399 = 467U;
	static volatile int32_t x400 = INT32_MAX;

    t59 = ((x397<=x398)<<(x399/x400));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x411 = -1;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t60 = 25;

    t60 = ((x409<=x410)<<(x411/x412));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x413 = -1;
	volatile int16_t x414 = -618;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = 18261LL;
	volatile int32_t t61 = -86613;

    t61 = ((x413<=x414)<<(x415/x416));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x421 = INT16_MAX;
	uint32_t x422 = 245597U;
	static uint16_t x423 = 4U;
	int8_t x424 = INT8_MIN;
	static int32_t t62 = 31;

    t62 = ((x421<=x422)<<(x423/x424));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x429 = UINT64_MAX;
	uint64_t x430 = 11274968892380105LLU;
	uint8_t x431 = 92U;
	volatile int32_t t63 = 50630;

    t63 = ((x429<=x430)<<(x431/x432));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x433 = UINT16_MAX;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -1LL;
	volatile int32_t x436 = INT32_MIN;

    t64 = ((x433<=x434)<<(x435/x436));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x441 = INT16_MAX;
	int32_t x442 = 7494;
	static uint8_t x443 = 11U;
	int16_t x444 = -1499;

    t65 = ((x441<=x442)<<(x443/x444));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x453 = 1U;
	static volatile int8_t x454 = -1;
	static int8_t x455 = INT8_MIN;
	int8_t x456 = -20;

    t66 = ((x453<=x454)<<(x455/x456));

    if (t66 != 64) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x458 = 5044378254LL;
	int32_t x459 = -1;
	int16_t x460 = INT16_MIN;
	volatile int32_t t67 = -11489;

    t67 = ((x457<=x458)<<(x459/x460));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x461 = INT8_MAX;
	volatile uint8_t x462 = 43U;
	uint64_t x463 = 1595749LLU;
	static int64_t x464 = -1LL;
	static int32_t t68 = 215;

    t68 = ((x461<=x462)<<(x463/x464));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x466 = 379634208821004LL;
	uint32_t x467 = 132842727U;

    t69 = ((x465<=x466)<<(x467/x468));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x473 = 488U;
	int32_t x475 = -1;
	static uint16_t x476 = UINT16_MAX;

    t70 = ((x473<=x474)<<(x475/x476));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x481 = -13020;
	static uint8_t x482 = 5U;
	volatile int64_t x483 = 2515988LL;
	static volatile int32_t x484 = INT32_MIN;
	volatile int32_t t71 = -101;

    t71 = ((x481<=x482)<<(x483/x484));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x489 = UINT32_MAX;
	uint16_t x490 = 978U;
	volatile int16_t x491 = INT16_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x489<=x490)<<(x491/x492));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x497 = 125U;
	int16_t x498 = INT16_MIN;
	int64_t x499 = -1LL;
	int16_t x500 = -293;
	static int32_t t73 = 23480;

    t73 = ((x497<=x498)<<(x499/x500));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x502 = 772306U;
	int64_t x503 = 0LL;
	volatile int32_t t74 = 9;

    t74 = ((x501<=x502)<<(x503/x504));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x505 = 266677068U;
	int16_t x506 = 1;
	int32_t x507 = INT32_MAX;
	int32_t x508 = INT32_MAX;

    t75 = ((x505<=x506)<<(x507/x508));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x521 = UINT32_MAX;
	uint8_t x522 = 3U;
	uint32_t x523 = 1446849339U;
	volatile int32_t t76 = 104;

    t76 = ((x521<=x522)<<(x523/x524));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x529 = INT16_MAX;
	static int8_t x530 = -3;
	int16_t x531 = -83;
	static uint16_t x532 = UINT16_MAX;
	int32_t t77 = -182485401;

    t77 = ((x529<=x530)<<(x531/x532));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x533 = 1U;
	int16_t x534 = INT16_MAX;
	volatile int8_t x535 = INT8_MIN;
	int8_t x536 = INT8_MIN;
	volatile int32_t t78 = 206751;

    t78 = ((x533<=x534)<<(x535/x536));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x541 = INT16_MAX;
	int64_t x543 = -1LL;
	uint8_t x544 = 7U;

    t79 = ((x541<=x542)<<(x543/x544));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x545 = UINT32_MAX;
	static uint32_t x546 = UINT32_MAX;
	int16_t x548 = -1;
	static int32_t t80 = 68571;

    t80 = ((x545<=x546)<<(x547/x548));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x549 = UINT16_MAX;
	static int32_t x550 = INT32_MAX;
	volatile uint32_t x551 = UINT32_MAX;
	int16_t x552 = INT16_MIN;
	int32_t t81 = 187946;

    t81 = ((x549<=x550)<<(x551/x552));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x553 = 75295U;
	int64_t x554 = INT64_MIN;

    t82 = ((x553<=x554)<<(x555/x556));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x557 = -1;
	volatile uint8_t x558 = 72U;
	int8_t x559 = -1;

    t83 = ((x557<=x558)<<(x559/x560));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x561 = 9961U;
	static int16_t x562 = -16;
	volatile uint8_t x563 = UINT8_MAX;
	int64_t x564 = -44573556LL;
	volatile int32_t t84 = 2;

    t84 = ((x561<=x562)<<(x563/x564));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x565 = 1LLU;
	static volatile uint16_t x566 = 0U;
	int64_t x567 = -1LL;
	int64_t x568 = 275906LL;
	static volatile int32_t t85 = -2;

    t85 = ((x565<=x566)<<(x567/x568));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x569 = UINT8_MAX;
	uint64_t x570 = 0LLU;
	static int64_t x571 = INT64_MIN;
	volatile int64_t x572 = INT64_MIN;
	int32_t t86 = 23291;

    t86 = ((x569<=x570)<<(x571/x572));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x575 = 11;
	volatile int64_t x576 = 20LL;
	int32_t t87 = 130199;

    t87 = ((x573<=x574)<<(x575/x576));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x581 = 14U;
	uint64_t x582 = 1003134801LLU;
	volatile int8_t x583 = -1;
	uint32_t x584 = UINT32_MAX;
	int32_t t88 = 253395;

    t88 = ((x581<=x582)<<(x583/x584));

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x585 = UINT16_MAX;
	static int16_t x586 = -2379;
	volatile int8_t x588 = -1;

    t89 = ((x585<=x586)<<(x587/x588));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x594 = UINT32_MAX;
	int8_t x595 = INT8_MIN;
	volatile int64_t x596 = INT64_MIN;
	int32_t t90 = 5;

    t90 = ((x593<=x594)<<(x595/x596));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x605 = INT64_MAX;
	volatile int8_t x606 = 0;
	int8_t x608 = INT8_MIN;
	static int32_t t91 = 1;

    t91 = ((x605<=x606)<<(x607/x608));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x609 = -1LL;
	int16_t x610 = INT16_MAX;
	static volatile int32_t x611 = -1;
	int8_t x612 = -1;
	int32_t t92 = -6833;

    t92 = ((x609<=x610)<<(x611/x612));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x613 = -6;
	volatile uint16_t x614 = UINT16_MAX;
	volatile int16_t x615 = -1;
	static uint32_t x616 = 643883823U;

    t93 = ((x613<=x614)<<(x615/x616));

    if (t93 != 64) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x621 = INT8_MAX;
	static uint16_t x623 = 83U;
	uint32_t x624 = 6U;
	volatile int32_t t94 = -127808;

    t94 = ((x621<=x622)<<(x623/x624));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x625 = INT16_MIN;
	int64_t x626 = 332037586697LL;
	static uint8_t x627 = 0U;
	int16_t x628 = -1;
	int32_t t95 = 3449;

    t95 = ((x625<=x626)<<(x627/x628));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x638 = 75U;
	int64_t x639 = -1LL;
	volatile uint64_t x640 = UINT64_MAX;
	volatile int32_t t96 = -2651845;

    t96 = ((x637<=x638)<<(x639/x640));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MIN;

    t97 = ((x657<=x658)<<(x659/x660));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x661 = UINT8_MAX;
	int16_t x662 = -1;
	static int64_t x664 = INT64_MIN;
	int32_t t98 = -51022108;

    t98 = ((x661<=x662)<<(x663/x664));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MAX;
	static int64_t x680 = INT64_MIN;
	int32_t t99 = 422382;

    t99 = ((x677<=x678)<<(x679/x680));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x681 = 0U;
	int8_t x682 = INT8_MAX;
	static int64_t x683 = -1LL;
	int32_t t100 = -13885767;

    t100 = ((x681<=x682)<<(x683/x684));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x686 = INT64_MIN;

    t101 = ((x685<=x686)<<(x687/x688));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x689 = INT64_MAX;
	uint16_t x690 = UINT16_MAX;
	uint8_t x691 = 1U;
	int8_t x692 = INT8_MAX;
	static int32_t t102 = -7;

    t102 = ((x689<=x690)<<(x691/x692));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x693 = -43173958;
	int16_t x694 = 869;
	uint16_t x695 = 1U;
	int16_t x696 = 10734;
	int32_t t103 = -6755103;

    t103 = ((x693<=x694)<<(x695/x696));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x697 = INT64_MAX;
	uint8_t x698 = 1U;
	uint8_t x700 = 70U;
	int32_t t104 = 370;

    t104 = ((x697<=x698)<<(x699/x700));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x701 = 3LLU;
	int16_t x702 = -1;
	int16_t x703 = 0;
	volatile int8_t x704 = -9;
	static int32_t t105 = -54;

    t105 = ((x701<=x702)<<(x703/x704));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x705 = 6409731LL;
	uint32_t x707 = UINT32_MAX;
	int64_t x708 = INT64_MIN;
	int32_t t106 = 44;

    t106 = ((x705<=x706)<<(x707/x708));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x709 = 4U;
	static int32_t x710 = 28052;
	uint64_t x711 = 168815LLU;
	int32_t x712 = INT32_MAX;

    t107 = ((x709<=x710)<<(x711/x712));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x722 = INT32_MIN;
	uint32_t x723 = UINT32_MAX;
	int32_t x724 = INT32_MIN;
	int32_t t108 = -210595;

    t108 = ((x721<=x722)<<(x723/x724));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x745 = INT8_MAX;
	int8_t x746 = -1;
	static uint32_t x748 = UINT32_MAX;
	volatile int32_t t109 = -834374906;

    t109 = ((x745<=x746)<<(x747/x748));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x753 = INT32_MAX;
	volatile int8_t x754 = -1;
	uint64_t x755 = 187828507LLU;
	int32_t x756 = -14692;
	static int32_t t110 = -120567;

    t110 = ((x753<=x754)<<(x755/x756));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x765 = INT32_MIN;
	uint8_t x766 = 12U;
	int16_t x767 = INT16_MIN;
	static uint64_t x768 = UINT64_MAX;
	static volatile int32_t t111 = 753;

    t111 = ((x765<=x766)<<(x767/x768));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x777 = -1;
	static int16_t x779 = -12;
	int32_t t112 = 9354;

    t112 = ((x777<=x778)<<(x779/x780));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x781 = INT32_MAX;
	static volatile int64_t x783 = -1LL;
	static int16_t x784 = 155;
	static volatile int32_t t113 = -4;

    t113 = ((x781<=x782)<<(x783/x784));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MAX;
	static int32_t x787 = INT32_MIN;
	int64_t x788 = INT64_MIN;

    t114 = ((x785<=x786)<<(x787/x788));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x793 = UINT16_MAX;
	int32_t x794 = -1;
	int32_t x795 = INT32_MAX;
	int32_t x796 = INT32_MIN;
	static int32_t t115 = 973313859;

    t115 = ((x793<=x794)<<(x795/x796));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x797 = -1;
	int64_t x799 = -1LL;
	int16_t x800 = INT16_MIN;

    t116 = ((x797<=x798)<<(x799/x800));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x806 = 44;
	volatile int32_t t117 = -576531305;

    t117 = ((x805<=x806)<<(x807/x808));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x821 = INT32_MIN;
	uint32_t x822 = 439U;
	int16_t x823 = INT16_MIN;
	int32_t x824 = INT32_MIN;
	int32_t t118 = 395;

    t118 = ((x821<=x822)<<(x823/x824));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x826 = 2120685852782LL;
	int64_t x827 = 31378965473LL;
	volatile int64_t x828 = INT64_MIN;
	int32_t t119 = -747740;

    t119 = ((x825<=x826)<<(x827/x828));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x832 = -1;

    t120 = ((x829<=x830)<<(x831/x832));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x849 = INT32_MAX;
	int8_t x851 = INT8_MIN;
	int32_t t121 = 2906751;

    t121 = ((x849<=x850)<<(x851/x852));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x857 = INT64_MIN;
	uint16_t x858 = UINT16_MAX;
	static int32_t x859 = -1;
	volatile int32_t t122 = -7799426;

    t122 = ((x857<=x858)<<(x859/x860));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x863 = -1;
	int32_t x864 = 385020;
	static volatile int32_t t123 = -36211254;

    t123 = ((x861<=x862)<<(x863/x864));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x865 = -20;
	int32_t x866 = -1;
	int32_t x868 = 52583;

    t124 = ((x865<=x866)<<(x867/x868));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x873 = INT64_MIN;
	int32_t x874 = -464253920;
	uint32_t x875 = 221U;
	uint16_t x876 = UINT16_MAX;
	volatile int32_t t125 = -1;

    t125 = ((x873<=x874)<<(x875/x876));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x877 = INT16_MIN;
	int8_t x878 = INT8_MAX;
	int16_t x879 = -1;
	int64_t x880 = INT64_MIN;
	int32_t t126 = -161;

    t126 = ((x877<=x878)<<(x879/x880));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x881 = INT32_MAX;
	uint8_t x882 = UINT8_MAX;
	static int32_t x884 = INT32_MIN;
	int32_t t127 = -31;

    t127 = ((x881<=x882)<<(x883/x884));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x885 = 0U;
	int64_t x886 = 559802LL;
	int8_t x887 = INT8_MAX;
	int32_t x888 = INT32_MAX;
	int32_t t128 = -7;

    t128 = ((x885<=x886)<<(x887/x888));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x889 = UINT16_MAX;
	static uint16_t x890 = UINT16_MAX;
	uint16_t x891 = 1U;
	uint32_t x892 = UINT32_MAX;

    t129 = ((x889<=x890)<<(x891/x892));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x897 = -1;
	int64_t x899 = 1348976545LL;
	int64_t x900 = INT64_MIN;
	int32_t t130 = 0;

    t130 = ((x897<=x898)<<(x899/x900));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x901 = INT16_MAX;
	int32_t x902 = INT32_MIN;
	uint8_t x903 = 58U;
	volatile uint64_t x904 = UINT64_MAX;
	int32_t t131 = -261;

    t131 = ((x901<=x902)<<(x903/x904));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x906 = -7655LL;
	uint8_t x907 = 3U;
	static volatile int32_t t132 = -8102;

    t132 = ((x905<=x906)<<(x907/x908));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x909 = 0;
	int64_t x910 = INT64_MAX;
	uint16_t x911 = 5U;
	int64_t x912 = INT64_MAX;
	int32_t t133 = -420253506;

    t133 = ((x909<=x910)<<(x911/x912));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x913 = 1274LL;
	int32_t x916 = INT32_MIN;
	volatile int32_t t134 = 470;

    t134 = ((x913<=x914)<<(x915/x916));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x925 = INT16_MIN;
	volatile uint16_t x927 = 5U;
	volatile int32_t t135 = 368813;

    t135 = ((x925<=x926)<<(x927/x928));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x929 = 50U;
	volatile int64_t x930 = 30381923LL;
	int32_t x932 = 5;

    t136 = ((x929<=x930)<<(x931/x932));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x934 = -1;
	uint16_t x935 = UINT16_MAX;
	int64_t x936 = 72438237792623403LL;
	volatile int32_t t137 = 63;

    t137 = ((x933<=x934)<<(x935/x936));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x942 = INT16_MIN;
	static int8_t x944 = INT8_MIN;
	int32_t t138 = -2;

    t138 = ((x941<=x942)<<(x943/x944));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x950 = 4592U;
	int8_t x951 = INT8_MAX;
	static int64_t x952 = INT64_MIN;
	int32_t t139 = 398067;

    t139 = ((x949<=x950)<<(x951/x952));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x957 = 596U;
	uint16_t x958 = UINT16_MAX;
	static int64_t x960 = INT64_MIN;
	volatile int32_t t140 = 496298151;

    t140 = ((x957<=x958)<<(x959/x960));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x962 = UINT16_MAX;
	static volatile uint64_t x963 = 94892195210270310LLU;
	volatile int32_t t141 = -1211814;

    t141 = ((x961<=x962)<<(x963/x964));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x965 = INT32_MAX;
	int8_t x966 = 13;
	uint64_t x968 = UINT64_MAX;
	static int32_t t142 = 8043;

    t142 = ((x965<=x966)<<(x967/x968));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x969 = -29LL;
	int32_t x970 = INT32_MIN;
	static int32_t x972 = INT32_MIN;
	int32_t t143 = 960708285;

    t143 = ((x969<=x970)<<(x971/x972));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x973 = 1U;
	static int8_t x974 = INT8_MIN;
	volatile uint32_t x975 = 8103U;
	static int16_t x976 = 13101;
	int32_t t144 = 5269619;

    t144 = ((x973<=x974)<<(x975/x976));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x977 = INT16_MAX;
	static int64_t x978 = INT64_MIN;
	int16_t x979 = INT16_MAX;

    t145 = ((x977<=x978)<<(x979/x980));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x981 = INT64_MAX;
	static int16_t x982 = -6625;
	static int16_t x983 = INT16_MIN;
	int32_t x984 = INT32_MIN;
	static volatile int32_t t146 = -95609;

    t146 = ((x981<=x982)<<(x983/x984));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x986 = INT32_MIN;
	volatile uint8_t x987 = 1U;
	int64_t x988 = 778102417007LL;
	static volatile int32_t t147 = -3692;

    t147 = ((x985<=x986)<<(x987/x988));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x989 = -1;
	int16_t x990 = 26;
	uint8_t x992 = UINT8_MAX;
	volatile int32_t t148 = 4664965;

    t148 = ((x989<=x990)<<(x991/x992));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x997 = -1252;
	uint64_t x999 = 7933490409436LLU;

    t149 = ((x997<=x998)<<(x999/x1000));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x1001 = 3765228367016068LL;
	int64_t x1002 = -1656521085001LL;
	int16_t x1003 = INT16_MIN;
	volatile int32_t t150 = 507815;

    t150 = ((x1001<=x1002)<<(x1003/x1004));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1009 = -1;
	int32_t x1010 = -3326;
	uint32_t x1011 = UINT32_MAX;
	volatile int32_t t151 = 5271030;

    t151 = ((x1009<=x1010)<<(x1011/x1012));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x1013 = 115500841454LL;
	int16_t x1014 = -1;
	volatile int16_t x1015 = INT16_MAX;
	static int16_t x1016 = INT16_MAX;

    t152 = ((x1013<=x1014)<<(x1015/x1016));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1019 = 374U;
	int64_t x1020 = INT64_MIN;
	static volatile int32_t t153 = -113247582;

    t153 = ((x1017<=x1018)<<(x1019/x1020));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x1025 = -42;
	int64_t x1026 = INT64_MIN;
	static uint64_t x1027 = 458931600748656LLU;
	int16_t x1028 = -1;
	volatile int32_t t154 = 4603164;

    t154 = ((x1025<=x1026)<<(x1027/x1028));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x1029 = 9U;
	static int64_t x1030 = -1LL;
	int32_t x1031 = INT32_MIN;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t155 = 31;

    t155 = ((x1029<=x1030)<<(x1031/x1032));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x1033 = INT16_MAX;
	int8_t x1034 = INT8_MAX;
	static int16_t x1035 = INT16_MAX;
	volatile uint64_t x1036 = 2603251LLU;

    t156 = ((x1033<=x1034)<<(x1035/x1036));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1037 = -1;
	volatile int16_t x1038 = -1;
	int64_t x1039 = -1LL;
	uint8_t x1040 = 99U;
	volatile int32_t t157 = 97;

    t157 = ((x1037<=x1038)<<(x1039/x1040));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x1041 = 563499725888357929LLU;
	static int8_t x1042 = INT8_MIN;
	volatile int16_t x1043 = -1;
	volatile int8_t x1044 = INT8_MAX;
	volatile int32_t t158 = 388232489;

    t158 = ((x1041<=x1042)<<(x1043/x1044));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1049 = INT8_MIN;
	uint64_t x1050 = UINT64_MAX;
	int64_t x1051 = -1LL;
	int32_t x1052 = INT32_MIN;
	int32_t t159 = -2224;

    t159 = ((x1049<=x1050)<<(x1051/x1052));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1054 = 0;
	static uint64_t x1055 = UINT64_MAX;
	int32_t x1056 = -1;

    t160 = ((x1053<=x1054)<<(x1055/x1056));

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1057 = 80280885U;
	volatile int32_t x1058 = INT32_MAX;
	volatile uint32_t x1059 = 254U;
	int8_t x1060 = -26;
	volatile int32_t t161 = -56044;

    t161 = ((x1057<=x1058)<<(x1059/x1060));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1061 = INT64_MAX;
	int32_t x1063 = INT32_MIN;
	static int64_t x1064 = INT64_MAX;
	int32_t t162 = -880583837;

    t162 = ((x1061<=x1062)<<(x1063/x1064));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1069 = -25979735LL;
	uint32_t x1070 = 49779151U;
	int64_t x1072 = INT64_MIN;
	static int32_t t163 = 21832;

    t163 = ((x1069<=x1070)<<(x1071/x1072));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x1073 = -1;
	int32_t x1075 = INT32_MIN;
	int64_t x1076 = INT64_MIN;
	volatile int32_t t164 = 8593385;

    t164 = ((x1073<=x1074)<<(x1075/x1076));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1093 = 1U;
	static uint16_t x1094 = 15U;
	int32_t x1095 = 121;
	static volatile uint32_t x1096 = 20118U;

    t165 = ((x1093<=x1094)<<(x1095/x1096));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1101 = 79099U;
	int16_t x1102 = INT16_MAX;

    t166 = ((x1101<=x1102)<<(x1103/x1104));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1105 = 229349U;
	uint64_t x1106 = 3797LLU;
	volatile uint32_t x1108 = 9180166U;
	int32_t t167 = -89696665;

    t167 = ((x1105<=x1106)<<(x1107/x1108));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1117 = INT16_MIN;
	static int16_t x1118 = -1;
	uint16_t x1119 = 9U;
	volatile int32_t x1120 = 683956;
	volatile int32_t t168 = 2032793;

    t168 = ((x1117<=x1118)<<(x1119/x1120));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t t169 = -474293;

    t169 = ((x1121<=x1122)<<(x1123/x1124));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x1141 = 453097414U;
	static uint32_t x1142 = 13255472U;
	static int8_t x1143 = -3;
	int16_t x1144 = -1;
	static int32_t t170 = 39673450;

    t170 = ((x1141<=x1142)<<(x1143/x1144));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1145 = UINT8_MAX;
	volatile int64_t x1146 = -1LL;
	int16_t x1147 = INT16_MIN;
	int64_t x1148 = INT64_MIN;
	int32_t t171 = 130659;

    t171 = ((x1145<=x1146)<<(x1147/x1148));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x1149 = INT32_MAX;
	int16_t x1150 = INT16_MAX;
	static uint16_t x1151 = 3U;
	int32_t t172 = 1565;

    t172 = ((x1149<=x1150)<<(x1151/x1152));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1153 = 2U;
	static int8_t x1155 = -1;
	int8_t x1156 = -43;
	int32_t t173 = 49313;

    t173 = ((x1153<=x1154)<<(x1155/x1156));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1162 = 3;
	static int64_t x1163 = -1LL;
	int8_t x1164 = INT8_MIN;
	int32_t t174 = -19239;

    t174 = ((x1161<=x1162)<<(x1163/x1164));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x1165 = INT64_MIN;
	volatile uint64_t x1166 = 662994858LLU;
	int8_t x1167 = 21;
	int8_t x1168 = 9;
	volatile int32_t t175 = 1;

    t175 = ((x1165<=x1166)<<(x1167/x1168));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1173 = UINT32_MAX;
	volatile uint32_t x1174 = 1218U;
	uint16_t x1175 = 4313U;
	uint16_t x1176 = UINT16_MAX;
	int32_t t176 = 1885;

    t176 = ((x1173<=x1174)<<(x1175/x1176));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x1189 = 190U;
	uint64_t x1190 = UINT64_MAX;
	int32_t x1192 = -439;

    t177 = ((x1189<=x1190)<<(x1191/x1192));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1193 = INT16_MIN;
	uint16_t x1195 = 4139U;
	volatile int32_t t178 = 0;

    t178 = ((x1193<=x1194)<<(x1195/x1196));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1202 = INT64_MAX;
	uint32_t x1203 = 4U;
	uint32_t x1204 = 2U;
	volatile int32_t t179 = -13;

    t179 = ((x1201<=x1202)<<(x1203/x1204));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x1215 = 5552U;
	int32_t x1216 = INT32_MAX;
	int32_t t180 = 2803584;

    t180 = ((x1213<=x1214)<<(x1215/x1216));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1221 = -1;
	volatile uint16_t x1222 = UINT16_MAX;
	int32_t x1224 = 3858864;
	int32_t t181 = -14;

    t181 = ((x1221<=x1222)<<(x1223/x1224));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1225 = INT8_MIN;
	int16_t x1226 = -4;
	int8_t x1227 = INT8_MAX;
	uint8_t x1228 = 35U;
	volatile int32_t t182 = -328131441;

    t182 = ((x1225<=x1226)<<(x1227/x1228));

    if (t182 != 8) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1229 = INT64_MAX;
	static volatile int64_t x1230 = INT64_MIN;
	int32_t x1231 = -1;
	int16_t x1232 = -194;
	int32_t t183 = 898043;

    t183 = ((x1229<=x1230)<<(x1231/x1232));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1237 = UINT64_MAX;
	int8_t x1239 = -1;
	volatile int16_t x1240 = -1;
	volatile int32_t t184 = -5;

    t184 = ((x1237<=x1238)<<(x1239/x1240));

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1242 = 4U;
	int32_t x1243 = 1;
	volatile int32_t t185 = -33720098;

    t185 = ((x1241<=x1242)<<(x1243/x1244));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x1253 = UINT8_MAX;
	static uint16_t x1255 = 241U;
	static uint16_t x1256 = 28U;
	int32_t t186 = 20;

    t186 = ((x1253<=x1254)<<(x1255/x1256));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1269 = 1626U;
	static int64_t x1270 = 33463376315289459LL;
	int16_t x1271 = 1;
	static int64_t x1272 = 1667651608LL;
	int32_t t187 = 993243;

    t187 = ((x1269<=x1270)<<(x1271/x1272));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1273 = INT32_MIN;
	int8_t x1275 = -1;
	volatile int64_t x1276 = -12460908LL;
	volatile int32_t t188 = -26146433;

    t188 = ((x1273<=x1274)<<(x1275/x1276));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1277 = -1176713;
	volatile int16_t x1278 = -1;
	int8_t x1279 = -2;
	int64_t x1280 = -1LL;
	int32_t t189 = 3232792;

    t189 = ((x1277<=x1278)<<(x1279/x1280));

    if (t189 != 4) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1281 = -1;
	uint64_t x1283 = 18681363522LLU;
	static int8_t x1284 = -1;
	volatile int32_t t190 = 487;

    t190 = ((x1281<=x1282)<<(x1283/x1284));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1285 = INT16_MIN;
	int32_t x1286 = INT32_MIN;
	volatile int64_t x1287 = -1LL;
	int64_t x1288 = 6862869LL;

    t191 = ((x1285<=x1286)<<(x1287/x1288));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1293 = INT64_MAX;
	int8_t x1294 = -1;
	static volatile int16_t x1295 = INT16_MAX;
	static int64_t x1296 = INT64_MAX;
	volatile int32_t t192 = 28678955;

    t192 = ((x1293<=x1294)<<(x1295/x1296));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1297 = INT32_MIN;
	static uint64_t x1298 = 18316113224217LLU;
	uint8_t x1299 = 51U;

    t193 = ((x1297<=x1298)<<(x1299/x1300));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1301 = 15288;
	int32_t x1302 = 289943916;
	volatile int8_t x1303 = 13;
	int64_t x1304 = INT64_MAX;
	int32_t t194 = 117;

    t194 = ((x1301<=x1302)<<(x1303/x1304));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1310 = 116U;
	volatile int8_t x1311 = 0;
	int16_t x1312 = INT16_MIN;

    t195 = ((x1309<=x1310)<<(x1311/x1312));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1313 = INT64_MIN;
	int32_t x1314 = -1;
	int16_t x1315 = INT16_MIN;
	static volatile uint64_t x1316 = 1657706889009423683LLU;
	volatile int32_t t196 = 2452;

    t196 = ((x1313<=x1314)<<(x1315/x1316));

    if (t196 != 2048) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1321 = INT64_MIN;
	static int32_t x1322 = -21434;
	int8_t x1323 = INT8_MIN;
	int8_t x1324 = -31;
	volatile int32_t t197 = 219;

    t197 = ((x1321<=x1322)<<(x1323/x1324));

    if (t197 != 16) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1325 = 484645122391290LL;
	uint64_t x1326 = UINT64_MAX;
	int16_t x1327 = INT16_MIN;
	static int32_t x1328 = INT32_MIN;
	volatile int32_t t198 = -6;

    t198 = ((x1325<=x1326)<<(x1327/x1328));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1329 = -1;
	uint8_t x1331 = 7U;
	int16_t x1332 = INT16_MAX;
	static int32_t t199 = -4022;

    t199 = ((x1329<=x1330)<<(x1331/x1332));

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

