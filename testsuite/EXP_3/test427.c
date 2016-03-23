
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

int8_t x4 = -1;
int16_t x32 = -1;
volatile int32_t t5 = -58587;
volatile int32_t t6 = -21;
int8_t x50 = INT8_MIN;
static int32_t t7 = -73928911;
int32_t t8 = -6177;
int16_t x64 = -6;
int16_t x67 = 1;
volatile uint16_t x87 = 5513U;
static volatile int32_t x92 = 205621;
volatile int32_t t14 = 248680;
static volatile int16_t x97 = -1;
static int16_t x101 = -1;
uint8_t x119 = UINT8_MAX;
volatile int8_t x120 = INT8_MIN;
int32_t t19 = 321;
static int32_t x134 = -144;
uint32_t x153 = 18U;
int8_t x156 = INT8_MIN;
volatile uint16_t x159 = 0U;
int32_t t22 = -330;
uint64_t x164 = UINT64_MAX;
volatile int32_t t23 = -338710;
static uint8_t x172 = 81U;
volatile int16_t x175 = -86;
uint8_t x180 = 21U;
int16_t x214 = INT16_MAX;
int8_t x222 = 1;
static int16_t x247 = INT16_MAX;
volatile int32_t t31 = -228971428;
int8_t x249 = -1;
volatile int16_t x250 = -1;
int64_t x264 = INT64_MAX;
uint8_t x266 = 1U;
int8_t x267 = INT8_MAX;
volatile int32_t t35 = 89;
int16_t x272 = -316;
volatile uint16_t x274 = 1117U;
int64_t x280 = -712584878964294LL;
static uint32_t x284 = UINT32_MAX;
int16_t x289 = INT16_MAX;
int32_t t43 = 198962;
static volatile uint16_t x325 = 179U;
static uint64_t x328 = 103381437LLU;
volatile int32_t t47 = -728226507;
int32_t x340 = -1;
int16_t x349 = INT16_MAX;
volatile uint32_t x350 = 46251U;
static int8_t x351 = INT8_MIN;
uint8_t x357 = 53U;
int64_t x359 = INT64_MIN;
volatile int32_t t52 = -100385082;
static uint16_t x367 = 1U;
int8_t x380 = -31;
static int32_t x425 = 43721;
int32_t x429 = 0;
int32_t t64 = -526;
volatile int64_t x449 = 9733365879752LL;
int8_t x451 = INT8_MIN;
int16_t x452 = INT16_MIN;
int32_t x486 = INT32_MAX;
int64_t x488 = -1LL;
int32_t t69 = -28;
int32_t x521 = -29306;
uint16_t x523 = 9717U;
static uint8_t x524 = 19U;
volatile int16_t x531 = INT16_MIN;
int16_t x546 = INT16_MIN;
int16_t x560 = -1;
uint64_t x564 = UINT64_MAX;
static int16_t x572 = INT16_MIN;
volatile int32_t t80 = -162543206;
int16_t x590 = INT16_MIN;
uint32_t x592 = 180041U;
uint16_t x597 = 15U;
int8_t x599 = 1;
volatile int32_t t84 = 102265704;
int64_t x621 = INT64_MAX;
int32_t t88 = -192;
static int8_t x647 = -1;
volatile uint16_t x651 = UINT16_MAX;
volatile int32_t t91 = 6773;
int64_t x679 = -1LL;
volatile int32_t t92 = 316;
static uint64_t x682 = 291774049378769LLU;
int32_t t95 = -125899632;
int8_t x703 = INT8_MIN;
volatile int32_t x704 = -1;
volatile int32_t x706 = -13890819;
volatile uint32_t x707 = UINT32_MAX;
volatile int32_t t98 = -4399;
volatile int32_t x717 = INT32_MIN;
uint64_t x719 = UINT64_MAX;
int32_t t99 = -117499;
volatile int32_t t101 = -53;
int16_t x734 = INT16_MAX;
static volatile int16_t x738 = INT16_MIN;
uint8_t x740 = 6U;
int64_t x757 = INT64_MIN;
int8_t x758 = 0;
static int8_t x768 = INT8_MIN;
static uint64_t x793 = 16378406292340189LLU;
static int16_t x794 = 377;
int32_t t111 = -460661;
int32_t t112 = 1;
int64_t x854 = -1LL;
int32_t t124 = -579;
int8_t x904 = INT8_MAX;
volatile int32_t t126 = -22263281;
int8_t x947 = 8;
static uint8_t x959 = 2U;
int32_t x984 = -7193185;
int32_t t135 = -1;
int32_t t138 = -315;
static int32_t x1016 = INT32_MAX;
static volatile uint64_t x1032 = 125076LLU;
int32_t t142 = 15;
uint16_t x1053 = UINT16_MAX;
volatile int16_t x1054 = INT16_MIN;
volatile int32_t t147 = -9497683;
static uint8_t x1068 = 0U;
int8_t x1069 = INT8_MIN;
volatile int8_t x1070 = INT8_MIN;
int16_t x1078 = INT16_MAX;
volatile int8_t x1082 = 0;
volatile int32_t t151 = 103;
static int32_t x1095 = INT32_MIN;
static volatile int32_t t152 = 458;
int16_t x1105 = -1;
uint16_t x1111 = 88U;
int8_t x1125 = INT8_MIN;
volatile int16_t x1127 = 0;
int16_t x1128 = INT16_MIN;
volatile int32_t t158 = 429451504;
uint16_t x1145 = 3U;
uint8_t x1149 = 14U;
int8_t x1150 = INT8_MIN;
volatile int64_t x1157 = -1LL;
volatile int32_t t163 = -3;
uint16_t x1174 = UINT16_MAX;
uint8_t x1175 = 21U;
int16_t x1192 = INT16_MAX;
uint16_t x1193 = 7087U;
uint8_t x1194 = UINT8_MAX;
int8_t x1195 = INT8_MIN;
uint32_t x1201 = UINT32_MAX;
uint32_t x1207 = UINT32_MAX;
int8_t x1208 = INT8_MIN;
uint32_t x1214 = 4U;
int32_t x1220 = INT32_MAX;
static int16_t x1233 = INT16_MIN;
int16_t x1234 = -1;
static int64_t x1236 = -1LL;
static int8_t x1237 = INT8_MIN;
uint64_t x1241 = 9LLU;
int32_t x1243 = 143802619;
uint8_t x1245 = 0U;
volatile int32_t t177 = 1029284;
int16_t x1267 = INT16_MAX;
uint64_t x1284 = 13512065028789581LLU;
volatile int32_t t182 = 5492;
int32_t t183 = -10;
volatile int32_t t184 = -15;
static int16_t x1293 = 9837;
static volatile int64_t x1295 = 107597LL;
static int16_t x1307 = -241;
static int32_t t187 = 129212;
static int32_t t188 = -1;
static volatile int32_t t189 = 1;
int64_t x1341 = -1LL;
uint64_t x1343 = 1625153603LLU;
static volatile int32_t x1353 = -559581;
uint64_t x1362 = UINT64_MAX;
volatile int16_t x1369 = 5;
static volatile int8_t x1371 = INT8_MAX;
uint32_t x1375 = UINT32_MAX;
static volatile int32_t t195 = 0;
volatile int16_t x1377 = -1;
uint32_t x1379 = UINT32_MAX;
static uint64_t x1380 = 28LLU;
volatile int32_t t197 = 78;
uint16_t x1386 = UINT16_MAX;
volatile int32_t t198 = 0;
volatile int16_t x1389 = -891;
uint32_t x1390 = 348405312U;


void f0(void) {
    	int16_t x1 = -1;
	uint64_t x2 = UINT64_MAX;
	static uint32_t x3 = 4U;
	static volatile int32_t t0 = 17465;

    t0 = ((x1*x2)!=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 0U;
	uint32_t x6 = 4916U;
	volatile uint32_t x7 = 0U;
	int64_t x8 = -27182321825620737LL;
	volatile int32_t t1 = -4556969;

    t1 = ((x5*x6)!=(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = 0;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	static uint64_t x20 = 1510394689LLU;
	int32_t t2 = -109306361;

    t2 = ((x17*x18)!=(x19*x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 98769120U;
	static uint32_t x22 = UINT32_MAX;
	int32_t x23 = 14;
	uint16_t x24 = UINT16_MAX;
	static int32_t t3 = -1803228;

    t3 = ((x21*x22)!=(x23*x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 101226U;
	int16_t x30 = INT16_MIN;
	int64_t x31 = -182214100803LL;
	static int32_t t4 = -6433;

    t4 = ((x29*x30)!=(x31*x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MAX;
	static uint64_t x43 = UINT64_MAX;
	volatile int16_t x44 = INT16_MAX;

    t5 = ((x41*x42)!=(x43*x44));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x45 = -7;
	volatile int32_t x46 = 4;
	static uint32_t x47 = 454U;
	static uint32_t x48 = UINT32_MAX;

    t6 = ((x45*x46)!=(x47*x48));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x49 = INT16_MIN;
	int32_t x51 = -23513330;
	volatile uint8_t x52 = 7U;

    t7 = ((x49*x50)!=(x51*x52));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x53 = 20636LL;
	uint32_t x54 = 0U;
	static uint8_t x55 = UINT8_MAX;
	uint64_t x56 = 163107489LLU;

    t8 = ((x53*x54)!=(x55*x56));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x57 = INT32_MIN;
	static uint64_t x58 = UINT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int8_t x60 = -13;
	int32_t t9 = -232;

    t9 = ((x57*x58)!=(x59*x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x61 = 1U;
	volatile uint64_t x62 = UINT64_MAX;
	static int8_t x63 = -1;
	static volatile int32_t t10 = -121704;

    t10 = ((x61*x62)!=(x63*x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x65 = 92U;
	volatile uint8_t x66 = UINT8_MAX;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t11 = -246630273;

    t11 = ((x65*x66)!=(x67*x68));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x85 = 9LLU;
	uint16_t x86 = 4839U;
	uint16_t x88 = UINT16_MAX;
	int32_t t12 = -51636014;

    t12 = ((x85*x86)!=(x87*x88));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x89 = 95U;
	int16_t x90 = INT16_MAX;
	volatile uint32_t x91 = 1791411123U;
	volatile int32_t t13 = 20;

    t13 = ((x89*x90)!=(x91*x92));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	uint32_t x95 = 13U;
	static volatile int8_t x96 = 7;

    t14 = ((x93*x94)!=(x95*x96));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x98 = -32;
	int16_t x99 = -1;
	uint32_t x100 = UINT32_MAX;
	static int32_t t15 = -79884061;

    t15 = ((x97*x98)!=(x99*x100));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x102 = INT8_MAX;
	uint64_t x103 = 5549LLU;
	int8_t x104 = INT8_MIN;
	static int32_t t16 = 34;

    t16 = ((x101*x102)!=(x103*x104));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x105 = INT16_MIN;
	uint16_t x106 = 16671U;
	int8_t x107 = 0;
	static uint16_t x108 = UINT16_MAX;
	int32_t t17 = 17720658;

    t17 = ((x105*x106)!=(x107*x108));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x117 = 123U;
	volatile int16_t x118 = INT16_MIN;
	static int32_t t18 = -1;

    t18 = ((x117*x118)!=(x119*x120));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x121 = 11466;
	uint8_t x122 = 52U;
	int32_t x123 = -1;
	uint64_t x124 = 1LLU;

    t19 = ((x121*x122)!=(x123*x124));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x133 = -1;
	volatile int64_t x135 = -1LL;
	static int64_t x136 = -127919992690LL;
	volatile int32_t t20 = 7015326;

    t20 = ((x133*x134)!=(x135*x136));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x154 = 0;
	volatile uint16_t x155 = 1U;
	volatile int32_t t21 = 49267602;

    t21 = ((x153*x154)!=(x155*x156));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x157 = -1LL;
	int8_t x158 = -17;
	static volatile int8_t x160 = -1;

    t22 = ((x157*x158)!=(x159*x160));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x161 = 58;
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = -6387290354300LL;

    t23 = ((x161*x162)!=(x163*x164));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x165 = UINT64_MAX;
	int64_t x166 = -713807631LL;
	int8_t x167 = -1;
	int16_t x168 = -1281;
	int32_t t24 = 29;

    t24 = ((x165*x166)!=(x167*x168));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MAX;
	uint32_t x171 = 16U;
	int32_t t25 = -46;

    t25 = ((x169*x170)!=(x171*x172));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 6;
	static volatile uint64_t x176 = 4253648747155534LLU;
	int32_t t26 = 4426396;

    t26 = ((x173*x174)!=(x175*x176));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x177 = 66U;
	int8_t x178 = INT8_MIN;
	static int32_t x179 = 945;
	int32_t t27 = 49221590;

    t27 = ((x177*x178)!=(x179*x180));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x205 = 5;
	static volatile int8_t x206 = -58;
	int64_t x207 = -165998060155824780LL;
	int8_t x208 = 11;
	static volatile int32_t t28 = 19472712;

    t28 = ((x205*x206)!=(x207*x208));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile uint16_t x215 = UINT16_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t29 = -108259;

    t29 = ((x213*x214)!=(x215*x216));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x221 = INT32_MIN;
	int8_t x223 = INT8_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t30 = 169;

    t30 = ((x221*x222)!=(x223*x224));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x245 = 1U;
	int32_t x246 = INT32_MIN;
	int16_t x248 = INT16_MAX;

    t31 = ((x245*x246)!=(x247*x248));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x251 = INT8_MAX;
	int8_t x252 = -1;
	static volatile int32_t t32 = 7076;

    t32 = ((x249*x250)!=(x251*x252));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x253 = 3329143;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = UINT16_MAX;
	static int32_t t33 = -428;

    t33 = ((x253*x254)!=(x255*x256));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x261 = -1;
	int16_t x262 = -1;
	uint16_t x263 = 0U;
	int32_t t34 = -111;

    t34 = ((x261*x262)!=(x263*x264));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x265 = UINT64_MAX;
	int32_t x268 = -1;

    t35 = ((x265*x266)!=(x267*x268));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x269 = INT8_MIN;
	uint32_t x270 = 1U;
	volatile uint8_t x271 = UINT8_MAX;
	static volatile int32_t t36 = -1;

    t36 = ((x269*x270)!=(x271*x272));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x273 = -31;
	static int32_t x275 = -1;
	static uint16_t x276 = 838U;
	static int32_t t37 = -505195646;

    t37 = ((x273*x274)!=(x275*x276));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MAX;
	static uint8_t x279 = 0U;
	int32_t t38 = -112638726;

    t38 = ((x277*x278)!=(x279*x280));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x281 = INT16_MIN;
	uint64_t x282 = 91876881489097LLU;
	int16_t x283 = INT16_MIN;
	int32_t t39 = -1338566;

    t39 = ((x281*x282)!=(x283*x284));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x290 = UINT32_MAX;
	uint64_t x291 = UINT64_MAX;
	static int16_t x292 = INT16_MIN;
	static int32_t t40 = -244;

    t40 = ((x289*x290)!=(x291*x292));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x301 = UINT16_MAX;
	static uint32_t x302 = 1206280731U;
	uint16_t x303 = 6242U;
	volatile int8_t x304 = INT8_MIN;
	int32_t t41 = 446174;

    t41 = ((x301*x302)!=(x303*x304));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x305 = 30U;
	volatile uint16_t x306 = 18009U;
	static volatile uint64_t x307 = UINT64_MAX;
	uint32_t x308 = UINT32_MAX;
	int32_t t42 = 447;

    t42 = ((x305*x306)!=(x307*x308));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x313 = 4LLU;
	int8_t x314 = INT8_MIN;
	static uint16_t x315 = 1U;
	int16_t x316 = INT16_MIN;

    t43 = ((x313*x314)!=(x315*x316));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x317 = 4;
	uint64_t x318 = 183553171263LLU;
	static uint32_t x319 = 1754957396U;
	static int64_t x320 = -157527409LL;
	static int32_t t44 = -1107;

    t44 = ((x317*x318)!=(x319*x320));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x321 = 12889825600214LL;
	int64_t x322 = -1LL;
	int64_t x323 = -169849540187LL;
	uint32_t x324 = 1U;
	static int32_t t45 = 50;

    t45 = ((x321*x322)!=(x323*x324));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x326 = UINT32_MAX;
	volatile int64_t x327 = INT64_MAX;
	int32_t t46 = 129577963;

    t46 = ((x325*x326)!=(x327*x328));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x329 = UINT64_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -7313;
	volatile int8_t x332 = INT8_MIN;

    t47 = ((x329*x330)!=(x331*x332));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 447781574363451LLU;
	int8_t x339 = -2;
	int32_t t48 = 22368838;

    t48 = ((x337*x338)!=(x339*x340));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x341 = 1U;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t49 = 4;

    t49 = ((x341*x342)!=(x343*x344));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x352 = 1U;
	int32_t t50 = -111595;

    t50 = ((x349*x350)!=(x351*x352));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x353 = -1;
	volatile int64_t x354 = -37LL;
	static int32_t x355 = -219523038;
	static int64_t x356 = -57823358LL;
	static int32_t t51 = -1;

    t51 = ((x353*x354)!=(x355*x356));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x358 = UINT8_MAX;
	int16_t x360 = 0;

    t52 = ((x357*x358)!=(x359*x360));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x365 = -1;
	volatile uint32_t x366 = 4012U;
	int64_t x368 = -19LL;
	int32_t t53 = -1935878;

    t53 = ((x365*x366)!=(x367*x368));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x377 = 218;
	int64_t x378 = -1LL;
	int8_t x379 = -3;
	int32_t t54 = 0;

    t54 = ((x377*x378)!=(x379*x380));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 1036U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t55 = -1;

    t55 = ((x381*x382)!=(x383*x384));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = -1LL;
	uint32_t x387 = 60703693U;
	uint16_t x388 = 1U;
	volatile int32_t t56 = 39593;

    t56 = ((x385*x386)!=(x387*x388));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x389 = INT16_MIN;
	volatile uint8_t x390 = 25U;
	volatile int8_t x391 = 47;
	uint32_t x392 = 379U;
	int32_t t57 = -51823;

    t57 = ((x389*x390)!=(x391*x392));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x397 = 19;
	int8_t x398 = INT8_MIN;
	static int16_t x399 = -1;
	static int64_t x400 = -1LL;
	volatile int32_t t58 = -31962486;

    t58 = ((x397*x398)!=(x399*x400));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x405 = INT16_MIN;
	int64_t x406 = 388LL;
	uint64_t x407 = 2994795959491778290LLU;
	static uint16_t x408 = 0U;
	int32_t t59 = 5364264;

    t59 = ((x405*x406)!=(x407*x408));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x417 = INT8_MIN;
	static uint16_t x418 = UINT16_MAX;
	volatile int32_t x419 = -1;
	uint8_t x420 = 0U;
	volatile int32_t t60 = 38923;

    t60 = ((x417*x418)!=(x419*x420));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x426 = INT8_MAX;
	static int32_t x427 = -1;
	volatile uint32_t x428 = UINT32_MAX;
	volatile int32_t t61 = 600600;

    t61 = ((x425*x426)!=(x427*x428));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x430 = 159751155LLU;
	uint8_t x431 = 0U;
	int8_t x432 = INT8_MIN;
	int32_t t62 = 33466;

    t62 = ((x429*x430)!=(x431*x432));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x437 = 0U;
	int64_t x438 = INT64_MIN;
	int64_t x439 = 0LL;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t63 = -18;

    t63 = ((x437*x438)!=(x439*x440));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = 365;
	volatile int32_t x447 = -1;
	uint64_t x448 = 471362994LLU;

    t64 = ((x445*x446)!=(x447*x448));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x450 = 6469603044LLU;
	volatile int32_t t65 = 420341;

    t65 = ((x449*x450)!=(x451*x452));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x465 = 0;
	static int32_t x466 = -1;
	int8_t x467 = -1;
	int8_t x468 = INT8_MIN;
	int32_t t66 = -1797;

    t66 = ((x465*x466)!=(x467*x468));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x469 = -1;
	int64_t x470 = INT64_MAX;
	volatile int16_t x471 = INT16_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t67 = 2;

    t67 = ((x469*x470)!=(x471*x472));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x485 = 210753U;
	volatile int8_t x487 = 15;
	int32_t t68 = 17929;

    t68 = ((x485*x486)!=(x487*x488));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x493 = 297;
	uint32_t x494 = 56559U;
	uint32_t x495 = 4U;
	volatile int16_t x496 = INT16_MIN;

    t69 = ((x493*x494)!=(x495*x496));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x501 = INT8_MIN;
	static int8_t x502 = INT8_MAX;
	int16_t x503 = INT16_MAX;
	uint32_t x504 = 416860U;
	static int32_t t70 = -1686;

    t70 = ((x501*x502)!=(x503*x504));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x505 = 1170587179281568160LLU;
	static volatile int64_t x506 = -1LL;
	uint64_t x507 = 34491230219LLU;
	int16_t x508 = -1;
	int32_t t71 = 13;

    t71 = ((x505*x506)!=(x507*x508));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x513 = 320131U;
	static uint64_t x514 = 110860057456LLU;
	volatile int8_t x515 = INT8_MIN;
	volatile uint64_t x516 = 90752LLU;
	volatile int32_t t72 = -222;

    t72 = ((x513*x514)!=(x515*x516));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x522 = UINT16_MAX;
	int32_t t73 = -132847;

    t73 = ((x521*x522)!=(x523*x524));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x525 = -1;
	static uint16_t x526 = 8295U;
	volatile uint32_t x527 = 1900806U;
	volatile int16_t x528 = 3;
	volatile int32_t t74 = 26183697;

    t74 = ((x525*x526)!=(x527*x528));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x529 = INT64_MAX;
	volatile int64_t x530 = -1LL;
	int64_t x532 = -1LL;
	volatile int32_t t75 = 41;

    t75 = ((x529*x530)!=(x531*x532));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x545 = -1LL;
	volatile uint64_t x547 = 253LLU;
	uint64_t x548 = 25472LLU;
	volatile int32_t t76 = -12;

    t76 = ((x545*x546)!=(x547*x548));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x557 = INT32_MIN;
	uint32_t x558 = UINT32_MAX;
	uint16_t x559 = 0U;
	static int32_t t77 = -1935625;

    t77 = ((x557*x558)!=(x559*x560));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x561 = 475U;
	volatile int8_t x562 = -28;
	uint64_t x563 = 116590824LLU;
	volatile int32_t t78 = -987925695;

    t78 = ((x561*x562)!=(x563*x564));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x569 = 0U;
	static int16_t x570 = INT16_MIN;
	uint16_t x571 = 35U;
	int32_t t79 = -656;

    t79 = ((x569*x570)!=(x571*x572));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x577 = -1;
	int64_t x578 = INT64_MAX;
	int64_t x579 = -4995555416409LL;
	uint16_t x580 = 25U;

    t80 = ((x577*x578)!=(x579*x580));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x585 = -10;
	int16_t x586 = -1;
	static int16_t x587 = INT16_MAX;
	static uint8_t x588 = UINT8_MAX;
	volatile int32_t t81 = -13352011;

    t81 = ((x585*x586)!=(x587*x588));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x589 = 1016102U;
	int8_t x591 = -1;
	static volatile int32_t t82 = -763355628;

    t82 = ((x589*x590)!=(x591*x592));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x598 = INT16_MIN;
	uint32_t x600 = UINT32_MAX;
	int32_t t83 = -3837678;

    t83 = ((x597*x598)!=(x599*x600));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x609 = -4903550;
	uint64_t x610 = 135358401LLU;
	static uint8_t x611 = 7U;
	uint64_t x612 = 67527346LLU;

    t84 = ((x609*x610)!=(x611*x612));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x622 = -1;
	int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;
	int32_t t85 = 850493623;

    t85 = ((x621*x622)!=(x623*x624));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MIN;
	int32_t x631 = -1;
	int16_t x632 = INT16_MIN;
	static volatile int32_t t86 = -925923;

    t86 = ((x629*x630)!=(x631*x632));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x633 = -1;
	int8_t x634 = -9;
	static uint8_t x635 = 0U;
	int16_t x636 = INT16_MAX;
	static int32_t t87 = -62;

    t87 = ((x633*x634)!=(x635*x636));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x637 = -219;
	uint64_t x638 = 1LLU;
	uint8_t x639 = UINT8_MAX;
	int8_t x640 = INT8_MIN;

    t88 = ((x637*x638)!=(x639*x640));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x641 = -1;
	volatile int8_t x642 = -1;
	int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MAX;
	int32_t t89 = 38049744;

    t89 = ((x641*x642)!=(x643*x644));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x645 = 0U;
	int32_t x646 = INT32_MAX;
	uint16_t x648 = 24U;
	int32_t t90 = 248992905;

    t90 = ((x645*x646)!=(x647*x648));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x649 = INT16_MIN;
	int16_t x650 = -1;
	int64_t x652 = -1LL;

    t91 = ((x649*x650)!=(x651*x652));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x677 = UINT64_MAX;
	static uint64_t x678 = UINT64_MAX;
	int32_t x680 = INT32_MAX;

    t92 = ((x677*x678)!=(x679*x680));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x681 = INT16_MAX;
	static volatile uint64_t x683 = UINT64_MAX;
	int64_t x684 = -12102727792481LL;
	volatile int32_t t93 = 0;

    t93 = ((x681*x682)!=(x683*x684));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x693 = INT16_MIN;
	uint16_t x694 = UINT16_MAX;
	uint8_t x695 = 12U;
	static int8_t x696 = -1;
	int32_t t94 = 19970;

    t94 = ((x693*x694)!=(x695*x696));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x697 = -1;
	int8_t x698 = INT8_MIN;
	static int8_t x699 = INT8_MIN;
	static uint32_t x700 = UINT32_MAX;

    t95 = ((x697*x698)!=(x699*x700));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x701 = INT8_MIN;
	uint64_t x702 = UINT64_MAX;
	volatile int32_t t96 = 49592;

    t96 = ((x701*x702)!=(x703*x704));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x705 = 6085056564130033510LLU;
	static uint32_t x708 = 96U;
	volatile int32_t t97 = 68061;

    t97 = ((x705*x706)!=(x707*x708));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x713 = 507093664098LLU;
	volatile int32_t x714 = -1;
	volatile uint32_t x715 = 8U;
	int8_t x716 = INT8_MIN;

    t98 = ((x713*x714)!=(x715*x716));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x718 = 0;
	uint32_t x720 = UINT32_MAX;

    t99 = ((x717*x718)!=(x719*x720));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x725 = -1;
	uint32_t x726 = 6U;
	static int64_t x727 = INT64_MIN;
	volatile uint64_t x728 = 26002190522LLU;
	volatile int32_t t100 = 1750;

    t100 = ((x725*x726)!=(x727*x728));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x729 = 15701U;
	int8_t x730 = -1;
	int16_t x731 = INT16_MIN;
	uint8_t x732 = 2U;

    t101 = ((x729*x730)!=(x731*x732));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x733 = -1234672769LL;
	static uint16_t x735 = 3707U;
	uint32_t x736 = 172U;
	int32_t t102 = 436853;

    t102 = ((x733*x734)!=(x735*x736));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x737 = 3U;
	volatile int64_t x739 = 134340261705857051LL;
	static int32_t t103 = 3583996;

    t103 = ((x737*x738)!=(x739*x740));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x759 = 20U;
	int16_t x760 = -156;
	volatile int32_t t104 = -1097;

    t104 = ((x757*x758)!=(x759*x760));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x765 = -292428417815190LL;
	volatile uint8_t x766 = 8U;
	int64_t x767 = -1LL;
	static volatile int32_t t105 = -18770846;

    t105 = ((x765*x766)!=(x767*x768));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x769 = 82;
	static uint16_t x770 = UINT16_MAX;
	int8_t x771 = INT8_MIN;
	int8_t x772 = -1;
	volatile int32_t t106 = 14058713;

    t106 = ((x769*x770)!=(x771*x772));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x773 = -9744;
	int8_t x774 = INT8_MIN;
	int8_t x775 = -1;
	int16_t x776 = INT16_MIN;
	volatile int32_t t107 = 10513;

    t107 = ((x773*x774)!=(x775*x776));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x781 = INT16_MIN;
	int16_t x782 = INT16_MIN;
	static int32_t x783 = INT32_MIN;
	uint32_t x784 = 428869U;
	volatile int32_t t108 = 6585860;

    t108 = ((x781*x782)!=(x783*x784));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x795 = 12017LLU;
	int16_t x796 = INT16_MAX;
	int32_t t109 = 4302;

    t109 = ((x793*x794)!=(x795*x796));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x813 = 6020394792188638LLU;
	int16_t x814 = 822;
	int8_t x815 = INT8_MIN;
	int32_t x816 = -1;
	volatile int32_t t110 = -210109;

    t110 = ((x813*x814)!=(x815*x816));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x817 = -1LL;
	uint64_t x818 = UINT64_MAX;
	int8_t x819 = INT8_MIN;
	static int16_t x820 = 247;

    t111 = ((x817*x818)!=(x819*x820));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x821 = -754600002;
	int16_t x822 = -1;
	uint32_t x823 = 161792228U;
	int8_t x824 = -2;

    t112 = ((x821*x822)!=(x823*x824));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x825 = INT8_MAX;
	static uint32_t x826 = 8U;
	static uint64_t x827 = 84776193412851111LLU;
	int32_t x828 = 99365540;
	int32_t t113 = 349711;

    t113 = ((x825*x826)!=(x827*x828));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x829 = -1;
	volatile int8_t x830 = 0;
	static volatile uint64_t x831 = UINT64_MAX;
	uint16_t x832 = 4556U;
	volatile int32_t t114 = 0;

    t114 = ((x829*x830)!=(x831*x832));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x833 = 1;
	uint64_t x834 = UINT64_MAX;
	static int8_t x835 = INT8_MIN;
	int16_t x836 = INT16_MAX;
	static volatile int32_t t115 = 93;

    t115 = ((x833*x834)!=(x835*x836));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x837 = -1;
	uint16_t x838 = 4U;
	int64_t x839 = -1LL;
	int64_t x840 = -1LL;
	static volatile int32_t t116 = 0;

    t116 = ((x837*x838)!=(x839*x840));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x845 = 1;
	int32_t x846 = -1;
	volatile uint64_t x847 = UINT64_MAX;
	static volatile int16_t x848 = -1;
	int32_t t117 = 14632225;

    t117 = ((x845*x846)!=(x847*x848));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x853 = -11;
	int64_t x855 = -1LL;
	int8_t x856 = -1;
	static int32_t t118 = 18444;

    t118 = ((x853*x854)!=(x855*x856));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x857 = -15121654162562326LL;
	static uint64_t x858 = 509431891454069886LLU;
	volatile uint8_t x859 = 86U;
	int8_t x860 = -1;
	int32_t t119 = -19;

    t119 = ((x857*x858)!=(x859*x860));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x869 = INT16_MAX;
	static int8_t x870 = INT8_MIN;
	static int16_t x871 = INT16_MAX;
	volatile uint32_t x872 = 1067005U;
	volatile int32_t t120 = -86;

    t120 = ((x869*x870)!=(x871*x872));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x873 = -14;
	uint16_t x874 = 1354U;
	uint16_t x875 = 26U;
	int64_t x876 = -1LL;
	volatile int32_t t121 = -5977956;

    t121 = ((x873*x874)!=(x875*x876));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x881 = -1;
	int32_t x882 = -1;
	static int64_t x883 = -1LL;
	uint16_t x884 = UINT16_MAX;
	volatile int32_t t122 = 61973436;

    t122 = ((x881*x882)!=(x883*x884));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x885 = 41372U;
	int32_t x886 = -1;
	int8_t x887 = -1;
	int8_t x888 = 26;
	int32_t t123 = 804;

    t123 = ((x885*x886)!=(x887*x888));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x897 = 14863U;
	int8_t x898 = INT8_MAX;
	int64_t x899 = -1LL;
	static int16_t x900 = -1;

    t124 = ((x897*x898)!=(x899*x900));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x901 = 1;
	int64_t x902 = 7183550725LL;
	uint16_t x903 = UINT16_MAX;
	static volatile int32_t t125 = -322342;

    t125 = ((x901*x902)!=(x903*x904));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x925 = INT32_MIN;
	volatile int64_t x926 = -1LL;
	int16_t x927 = -113;
	int64_t x928 = 1LL;

    t126 = ((x925*x926)!=(x927*x928));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x929 = UINT8_MAX;
	uint32_t x930 = UINT32_MAX;
	uint32_t x931 = 57U;
	int8_t x932 = -5;
	volatile int32_t t127 = -1010;

    t127 = ((x929*x930)!=(x931*x932));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x937 = 7579355185527LL;
	volatile uint8_t x938 = UINT8_MAX;
	uint32_t x939 = 380776646U;
	volatile int32_t x940 = INT32_MIN;
	int32_t t128 = -85;

    t128 = ((x937*x938)!=(x939*x940));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x941 = -1LL;
	uint16_t x942 = UINT16_MAX;
	int64_t x943 = -147014949LL;
	int32_t x944 = INT32_MIN;
	volatile int32_t t129 = -88903941;

    t129 = ((x941*x942)!=(x943*x944));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x945 = INT8_MIN;
	volatile uint16_t x946 = UINT16_MAX;
	int64_t x948 = 2LL;
	volatile int32_t t130 = 806251879;

    t130 = ((x945*x946)!=(x947*x948));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x957 = INT8_MIN;
	static int64_t x958 = 2367056450495LL;
	static int64_t x960 = -36121664593338LL;
	volatile int32_t t131 = -95;

    t131 = ((x957*x958)!=(x959*x960));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x961 = UINT8_MAX;
	volatile uint16_t x962 = 1986U;
	volatile int16_t x963 = INT16_MIN;
	int32_t x964 = 6;
	int32_t t132 = 6226738;

    t132 = ((x961*x962)!=(x963*x964));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x965 = 4;
	static int32_t x966 = -1;
	static uint64_t x967 = UINT64_MAX;
	int16_t x968 = -1;
	int32_t t133 = -932;

    t133 = ((x965*x966)!=(x967*x968));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x977 = INT16_MIN;
	uint64_t x978 = 95928332634LLU;
	uint64_t x979 = 881457474LLU;
	static uint8_t x980 = 120U;
	static volatile int32_t t134 = 11859;

    t134 = ((x977*x978)!=(x979*x980));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x981 = INT8_MIN;
	static volatile int8_t x982 = INT8_MIN;
	uint64_t x983 = 1281128176762806557LLU;

    t135 = ((x981*x982)!=(x983*x984));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x997 = INT8_MIN;
	int8_t x998 = INT8_MIN;
	uint64_t x999 = 8790890648818884904LLU;
	uint32_t x1000 = 9269022U;
	int32_t t136 = -443343914;

    t136 = ((x997*x998)!=(x999*x1000));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x1001 = 10031223LLU;
	uint32_t x1002 = 706360328U;
	int16_t x1003 = INT16_MIN;
	int8_t x1004 = -1;
	volatile int32_t t137 = 493309690;

    t137 = ((x1001*x1002)!=(x1003*x1004));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x1009 = 48185525092833LLU;
	uint32_t x1010 = 326897U;
	int8_t x1011 = 4;
	volatile int16_t x1012 = -1;

    t138 = ((x1009*x1010)!=(x1011*x1012));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x1013 = -1LL;
	int16_t x1014 = INT16_MIN;
	uint64_t x1015 = UINT64_MAX;
	int32_t t139 = 6307;

    t139 = ((x1013*x1014)!=(x1015*x1016));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1021 = -4;
	static int8_t x1022 = -1;
	int64_t x1023 = INT64_MIN;
	volatile uint64_t x1024 = 565459319329LLU;
	int32_t t140 = -7167785;

    t140 = ((x1021*x1022)!=(x1023*x1024));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1025 = -1;
	uint8_t x1026 = 6U;
	volatile int16_t x1027 = INT16_MIN;
	volatile int8_t x1028 = -1;
	static int32_t t141 = -1554;

    t141 = ((x1025*x1026)!=(x1027*x1028));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x1029 = -1;
	int64_t x1030 = -13218LL;
	int16_t x1031 = INT16_MAX;

    t142 = ((x1029*x1030)!=(x1031*x1032));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1037 = 19378432069861894LL;
	int32_t x1038 = -1;
	volatile uint8_t x1039 = 10U;
	uint32_t x1040 = 54101395U;
	volatile int32_t t143 = 3949051;

    t143 = ((x1037*x1038)!=(x1039*x1040));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1045 = INT32_MIN;
	int64_t x1046 = -1LL;
	uint64_t x1047 = 122057309892LLU;
	int32_t x1048 = -4254;
	static int32_t t144 = -15567538;

    t144 = ((x1045*x1046)!=(x1047*x1048));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x1055 = 27LLU;
	uint32_t x1056 = 631022114U;
	int32_t t145 = 42;

    t145 = ((x1053*x1054)!=(x1055*x1056));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x1057 = -68996644868706LL;
	int64_t x1058 = -1LL;
	uint16_t x1059 = UINT16_MAX;
	int16_t x1060 = INT16_MIN;
	volatile int32_t t146 = 4;

    t146 = ((x1057*x1058)!=(x1059*x1060));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1061 = 619;
	uint32_t x1062 = UINT32_MAX;
	int64_t x1063 = -1LL;
	static volatile uint8_t x1064 = UINT8_MAX;

    t147 = ((x1061*x1062)!=(x1063*x1064));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1065 = -1;
	uint64_t x1066 = UINT64_MAX;
	int16_t x1067 = -208;
	static int32_t t148 = -206085943;

    t148 = ((x1065*x1066)!=(x1067*x1068));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1071 = 1U;
	uint64_t x1072 = UINT64_MAX;
	volatile int32_t t149 = -3507055;

    t149 = ((x1069*x1070)!=(x1071*x1072));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x1077 = 56U;
	volatile int32_t x1079 = -1;
	int8_t x1080 = -1;
	volatile int32_t t150 = 620620;

    t150 = ((x1077*x1078)!=(x1079*x1080));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1081 = INT16_MAX;
	static uint64_t x1083 = 427LLU;
	volatile uint32_t x1084 = UINT32_MAX;

    t151 = ((x1081*x1082)!=(x1083*x1084));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1093 = INT8_MIN;
	uint32_t x1094 = 9U;
	uint32_t x1096 = UINT32_MAX;

    t152 = ((x1093*x1094)!=(x1095*x1096));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1101 = -164511LL;
	int32_t x1102 = INT32_MIN;
	uint8_t x1103 = UINT8_MAX;
	uint32_t x1104 = 1025U;
	static int32_t t153 = 5343252;

    t153 = ((x1101*x1102)!=(x1103*x1104));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1106 = INT32_MAX;
	int32_t x1107 = 0;
	int32_t x1108 = INT32_MIN;
	static volatile int32_t t154 = -37543123;

    t154 = ((x1105*x1106)!=(x1107*x1108));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1109 = 55U;
	uint64_t x1110 = 4013LLU;
	int64_t x1112 = -7700329098063023LL;
	int32_t t155 = 4786;

    t155 = ((x1109*x1110)!=(x1111*x1112));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1117 = UINT8_MAX;
	volatile int8_t x1118 = -1;
	static uint8_t x1119 = UINT8_MAX;
	uint16_t x1120 = 30323U;
	int32_t t156 = 3;

    t156 = ((x1117*x1118)!=(x1119*x1120));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x1126 = 7U;
	static volatile int32_t t157 = 12195934;

    t157 = ((x1125*x1126)!=(x1127*x1128));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x1137 = 0U;
	static int64_t x1138 = 114422LL;
	uint64_t x1139 = 0LLU;
	volatile int64_t x1140 = INT64_MIN;

    t158 = ((x1137*x1138)!=(x1139*x1140));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x1146 = 0U;
	volatile uint32_t x1147 = UINT32_MAX;
	static int16_t x1148 = INT16_MIN;
	int32_t t159 = -360;

    t159 = ((x1145*x1146)!=(x1147*x1148));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1151 = -335;
	int64_t x1152 = -1LL;
	int32_t t160 = 669;

    t160 = ((x1149*x1150)!=(x1151*x1152));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1153 = -1LL;
	volatile int32_t x1154 = -1;
	uint32_t x1155 = 15950559U;
	int16_t x1156 = INT16_MIN;
	volatile int32_t t161 = 13;

    t161 = ((x1153*x1154)!=(x1155*x1156));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1158 = -1;
	int64_t x1159 = -940872211501526LL;
	int8_t x1160 = INT8_MAX;
	static volatile int32_t t162 = 552;

    t162 = ((x1157*x1158)!=(x1159*x1160));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1161 = -62002;
	volatile int64_t x1162 = -1LL;
	static uint16_t x1163 = 3U;
	uint8_t x1164 = 9U;

    t163 = ((x1161*x1162)!=(x1163*x1164));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1169 = -1;
	volatile int32_t x1170 = 22597833;
	static int32_t x1171 = 510;
	int64_t x1172 = 480LL;
	static volatile int32_t t164 = -47938296;

    t164 = ((x1169*x1170)!=(x1171*x1172));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1173 = INT8_MIN;
	uint32_t x1176 = UINT32_MAX;
	volatile int32_t t165 = 1;

    t165 = ((x1173*x1174)!=(x1175*x1176));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1189 = -1;
	static int16_t x1190 = -16;
	int64_t x1191 = 128LL;
	int32_t t166 = 158;

    t166 = ((x1189*x1190)!=(x1191*x1192));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1196 = 13410774;
	int32_t t167 = -19634;

    t167 = ((x1193*x1194)!=(x1195*x1196));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1202 = 3993874;
	uint64_t x1203 = 130092LLU;
	int16_t x1204 = -206;
	int32_t t168 = -13510071;

    t168 = ((x1201*x1202)!=(x1203*x1204));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1205 = INT8_MIN;
	volatile int8_t x1206 = INT8_MAX;
	int32_t t169 = -856;

    t169 = ((x1205*x1206)!=(x1207*x1208));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1213 = UINT8_MAX;
	volatile int8_t x1215 = 30;
	int64_t x1216 = 1LL;
	volatile int32_t t170 = -407113;

    t170 = ((x1213*x1214)!=(x1215*x1216));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1217 = 1552U;
	uint32_t x1218 = UINT32_MAX;
	static uint16_t x1219 = 1U;
	int32_t t171 = -2743975;

    t171 = ((x1217*x1218)!=(x1219*x1220));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1225 = -10;
	static int32_t x1226 = 36491526;
	int16_t x1227 = INT16_MAX;
	static int32_t x1228 = -1;
	int32_t t172 = -96764;

    t172 = ((x1225*x1226)!=(x1227*x1228));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1229 = 5U;
	uint16_t x1230 = 6U;
	int64_t x1231 = 1166LL;
	uint32_t x1232 = 895828U;
	static volatile int32_t t173 = 61;

    t173 = ((x1229*x1230)!=(x1231*x1232));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x1235 = INT64_MAX;
	volatile int32_t t174 = -25655087;

    t174 = ((x1233*x1234)!=(x1235*x1236));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1238 = UINT32_MAX;
	int64_t x1239 = INT64_MIN;
	volatile uint64_t x1240 = 7280562LLU;
	int32_t t175 = -432315265;

    t175 = ((x1237*x1238)!=(x1239*x1240));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x1242 = -1LL;
	static uint64_t x1244 = 1257109LLU;
	static volatile int32_t t176 = 375498736;

    t176 = ((x1241*x1242)!=(x1243*x1244));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x1246 = -1;
	int16_t x1247 = INT16_MIN;
	uint32_t x1248 = 14238U;

    t177 = ((x1245*x1246)!=(x1247*x1248));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1253 = INT8_MIN;
	static int16_t x1254 = -1;
	int32_t x1255 = 265;
	int32_t x1256 = 1282258;
	static volatile int32_t t178 = -98113497;

    t178 = ((x1253*x1254)!=(x1255*x1256));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1261 = 101707858LLU;
	int64_t x1262 = -1LL;
	volatile int16_t x1263 = INT16_MAX;
	int8_t x1264 = INT8_MAX;
	int32_t t179 = -1;

    t179 = ((x1261*x1262)!=(x1263*x1264));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1265 = -7;
	volatile int16_t x1266 = INT16_MAX;
	volatile int16_t x1268 = -1;
	volatile int32_t t180 = -654;

    t180 = ((x1265*x1266)!=(x1267*x1268));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1273 = INT8_MAX;
	int16_t x1274 = INT16_MIN;
	int32_t x1275 = INT32_MAX;
	int64_t x1276 = -1LL;
	int32_t t181 = 104704300;

    t181 = ((x1273*x1274)!=(x1275*x1276));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x1281 = UINT32_MAX;
	int64_t x1282 = -27661800LL;
	int32_t x1283 = INT32_MIN;

    t182 = ((x1281*x1282)!=(x1283*x1284));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1285 = UINT32_MAX;
	uint16_t x1286 = 5U;
	uint8_t x1287 = UINT8_MAX;
	volatile int16_t x1288 = 2;

    t183 = ((x1285*x1286)!=(x1287*x1288));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1289 = INT8_MAX;
	int64_t x1290 = 4026576774283141LL;
	static int16_t x1291 = INT16_MAX;
	int16_t x1292 = INT16_MIN;

    t184 = ((x1289*x1290)!=(x1291*x1292));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1294 = 4U;
	uint32_t x1296 = 1902U;
	int32_t t185 = -46;

    t185 = ((x1293*x1294)!=(x1295*x1296));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1305 = 23424LLU;
	volatile int16_t x1306 = 3727;
	int16_t x1308 = INT16_MAX;
	volatile int32_t t186 = 293347;

    t186 = ((x1305*x1306)!=(x1307*x1308));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1325 = 63;
	int32_t x1326 = -1;
	static int32_t x1327 = -1;
	int16_t x1328 = 0;

    t187 = ((x1325*x1326)!=(x1327*x1328));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1329 = INT16_MIN;
	int32_t x1330 = -1;
	int16_t x1331 = -10;
	int8_t x1332 = INT8_MIN;

    t188 = ((x1329*x1330)!=(x1331*x1332));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1333 = 8;
	uint16_t x1334 = 67U;
	int8_t x1335 = -52;
	uint32_t x1336 = 4U;

    t189 = ((x1333*x1334)!=(x1335*x1336));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x1337 = INT16_MIN;
	int8_t x1338 = -1;
	int8_t x1339 = -1;
	static uint32_t x1340 = UINT32_MAX;
	int32_t t190 = 19870875;

    t190 = ((x1337*x1338)!=(x1339*x1340));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1342 = 492;
	volatile int64_t x1344 = -1LL;
	volatile int32_t t191 = 165921;

    t191 = ((x1341*x1342)!=(x1343*x1344));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1354 = UINT32_MAX;
	volatile uint8_t x1355 = UINT8_MAX;
	int8_t x1356 = INT8_MIN;
	int32_t t192 = 91843855;

    t192 = ((x1353*x1354)!=(x1355*x1356));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1361 = 1399824730295754LL;
	static uint64_t x1363 = UINT64_MAX;
	static int32_t x1364 = -1;
	int32_t t193 = -8340422;

    t193 = ((x1361*x1362)!=(x1363*x1364));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x1370 = -1;
	static int16_t x1372 = 1;
	int32_t t194 = -4192659;

    t194 = ((x1369*x1370)!=(x1371*x1372));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1373 = UINT32_MAX;
	uint64_t x1374 = 30349LLU;
	volatile int16_t x1376 = INT16_MAX;

    t195 = ((x1373*x1374)!=(x1375*x1376));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1378 = 7993U;
	int32_t t196 = -7529936;

    t196 = ((x1377*x1378)!=(x1379*x1380));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1381 = INT8_MAX;
	uint64_t x1382 = 86539LLU;
	static int64_t x1383 = 15LL;
	volatile int32_t x1384 = 11;

    t197 = ((x1381*x1382)!=(x1383*x1384));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1385 = UINT64_MAX;
	static uint8_t x1387 = 2U;
	static int8_t x1388 = INT8_MAX;

    t198 = ((x1385*x1386)!=(x1387*x1388));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1391 = -1;
	int16_t x1392 = 44;
	volatile int32_t t199 = 6554880;

    t199 = ((x1389*x1390)!=(x1391*x1392));

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

