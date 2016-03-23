
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

int16_t x2 = -6;
int16_t x4 = -2;
uint16_t x6 = 4253U;
int16_t x8 = INT16_MAX;
uint32_t x12 = UINT32_MAX;
static uint64_t x29 = UINT64_MAX;
volatile uint64_t t5 = 1LLU;
int64_t x34 = -1LL;
int16_t x35 = INT16_MIN;
int32_t x41 = INT32_MIN;
volatile int16_t x59 = INT16_MIN;
int16_t x62 = 9;
static int8_t x72 = INT8_MAX;
int64_t x75 = INT64_MIN;
uint64_t x87 = 29467334822654932LLU;
int16_t x88 = INT16_MAX;
int64_t x93 = INT64_MAX;
int64_t t15 = 1309395669407087LL;
int16_t x105 = -1;
int64_t x107 = -1LL;
int64_t t17 = 29LL;
volatile uint64_t x134 = UINT64_MAX;
static uint16_t x143 = 3561U;
uint16_t x144 = UINT16_MAX;
int64_t x145 = INT64_MIN;
uint64_t x177 = 939531497099LLU;
volatile int8_t x180 = INT8_MIN;
volatile int16_t x186 = INT16_MAX;
uint32_t t26 = 15320U;
int32_t t28 = -2658;
uint32_t x226 = UINT32_MAX;
int32_t x227 = INT32_MIN;
int8_t x230 = -1;
int32_t x232 = INT32_MIN;
static int64_t x244 = 16040269892LL;
static volatile int64_t t35 = -684285960290689LL;
int8_t x290 = -1;
int8_t x292 = INT8_MAX;
volatile int16_t x300 = INT16_MIN;
int32_t t39 = -1380;
int32_t x308 = -1;
static int32_t x310 = INT32_MIN;
int16_t x312 = INT16_MAX;
volatile int32_t t41 = -408;
int64_t x315 = INT64_MIN;
int32_t t43 = 14508;
volatile int32_t t44 = -81;
uint16_t x353 = UINT16_MAX;
static uint8_t x360 = 7U;
int32_t x381 = -28;
uint32_t x389 = 28877953U;
int16_t x390 = -1;
uint8_t x392 = 4U;
uint32_t t49 = 649U;
int64_t x396 = INT64_MIN;
static int32_t x397 = -1;
static int16_t x404 = INT16_MIN;
static int64_t x405 = 15301043300833140LL;
int8_t x421 = INT8_MIN;
int64_t x423 = -3425316505663LL;
int64_t x425 = INT64_MAX;
volatile int64_t t55 = -1174026684LL;
uint64_t x442 = UINT64_MAX;
int32_t t58 = -13640425;
int64_t x457 = INT64_MAX;
uint16_t x458 = 11819U;
int64_t x461 = INT64_MIN;
static int16_t x463 = INT16_MIN;
int16_t x475 = INT16_MIN;
static uint32_t x485 = 859938U;
int8_t x487 = -6;
static uint8_t x490 = UINT8_MAX;
static volatile int32_t t64 = 0;
int16_t x521 = 1;
uint32_t x524 = 856534806U;
static int64_t x535 = -29088317196LL;
int32_t x543 = INT32_MIN;
int32_t x546 = INT32_MAX;
static int8_t x559 = 1;
static volatile uint32_t t71 = 319431U;
static int16_t x588 = INT16_MIN;
int32_t t72 = 0;
static uint8_t x589 = 8U;
volatile int8_t x605 = -1;
volatile int32_t t74 = 20307729;
int16_t x614 = INT16_MAX;
uint16_t x617 = 18607U;
uint8_t x619 = UINT8_MAX;
static volatile int32_t t77 = 63;
int16_t x624 = INT16_MAX;
int32_t x632 = INT32_MIN;
volatile uint8_t x637 = UINT8_MAX;
static uint8_t x640 = 11U;
volatile uint32_t t82 = 37U;
int8_t x659 = -2;
uint8_t x661 = UINT8_MAX;
static volatile uint64_t x684 = UINT64_MAX;
int32_t x693 = 11572145;
volatile int32_t t86 = 1;
int64_t x702 = -1LL;
volatile int64_t t88 = -3528858959996LL;
static int32_t x735 = INT32_MAX;
uint16_t x749 = 905U;
int64_t t92 = -7579084636436LL;
int16_t x753 = 356;
static int32_t x761 = INT32_MAX;
int16_t x762 = 1547;
uint8_t x776 = 13U;
int32_t x803 = 1;
uint16_t x805 = 1123U;
static int64_t x806 = -1LL;
int32_t t100 = -20;
int32_t x809 = -1674;
static int64_t x811 = INT64_MIN;
int64_t t103 = 10695953725655LL;
uint16_t x843 = UINT16_MAX;
int16_t x844 = INT16_MIN;
static volatile int32_t t104 = 0;
static volatile int8_t x845 = INT8_MIN;
volatile uint8_t x856 = 62U;
static int32_t t107 = -8;
static int32_t t110 = -47;
volatile uint64_t t111 = 1301734LLU;
int32_t x894 = INT32_MIN;
static int32_t x896 = -31584;
int32_t t112 = 813470284;
int16_t x906 = -32;
int32_t t114 = 1458532;
int32_t t117 = -422240;
volatile int64_t t119 = 2510123673840LL;
uint16_t x983 = 3U;
uint8_t x987 = UINT8_MAX;
int64_t t121 = -218199304707LL;
volatile uint64_t x997 = UINT64_MAX;
int64_t x998 = INT64_MAX;
static volatile int64_t x1000 = 424LL;
int16_t x1006 = INT16_MIN;
static volatile int32_t x1011 = -969;
static volatile uint64_t t125 = 446313LLU;
uint16_t x1029 = 0U;
volatile int32_t t127 = 38;
int32_t t128 = -71;
uint16_t x1054 = UINT16_MAX;
volatile int64_t x1056 = INT64_MIN;
uint32_t x1058 = 5353754U;
int16_t x1066 = INT16_MAX;
int64_t t132 = -1930689LL;
int16_t x1077 = INT16_MAX;
int16_t x1082 = -1;
static int64_t t135 = 96959408LL;
uint8_t x1116 = 39U;
int16_t x1126 = INT16_MAX;
int64_t x1127 = -3816646301368686LL;
volatile uint8_t x1128 = 28U;
static int64_t t142 = 2133893475725361LL;
volatile int32_t t143 = -16;
int8_t x1153 = INT8_MIN;
uint8_t x1212 = UINT8_MAX;
static int32_t x1218 = INT32_MIN;
int64_t x1219 = INT64_MIN;
static volatile int64_t x1223 = -8LL;
volatile int8_t x1224 = -5;
int32_t t151 = 1678;
static uint8_t x1253 = 41U;
int16_t x1261 = -1;
volatile int32_t x1262 = 374049772;
int64_t t155 = 324828390002LL;
int64_t x1284 = 2488774302182LL;
int8_t x1310 = -1;
int16_t x1314 = -14015;
static uint64_t x1316 = 30023416172256298LLU;
int64_t x1320 = 30746404656233927LL;
static volatile int64_t x1322 = -1LL;
int64_t x1331 = -1LL;
static volatile int8_t x1348 = 13;
int64_t x1353 = INT64_MIN;
int64_t x1356 = 1636605321448LL;
uint32_t x1357 = UINT32_MAX;
static volatile int64_t t165 = 9LL;
static int64_t x1391 = INT64_MIN;
int32_t t168 = 136;
static int16_t x1409 = INT16_MIN;
int64_t x1411 = INT64_MIN;
int8_t x1416 = -8;
int32_t t171 = 6987677;
int8_t x1435 = 12;
int16_t x1441 = 923;
volatile uint64_t x1458 = UINT64_MAX;
uint64_t x1460 = UINT64_MAX;
uint64_t x1462 = 21401968061LLU;
uint32_t x1465 = 184971U;
uint64_t t178 = 17779LLU;
static uint8_t x1482 = 7U;
static int64_t t180 = -1129997404507365141LL;
uint16_t x1510 = 25U;
static int32_t x1513 = INT32_MIN;
int32_t x1561 = -443;
uint64_t x1585 = 869564618454477LLU;
int64_t t192 = -1081188031175679LL;
uint16_t x1622 = 12U;
uint64_t x1636 = 41340377727164LLU;
int16_t x1641 = INT16_MAX;
int8_t x1643 = 0;
int32_t t196 = 17;
uint64_t x1654 = 987LLU;
uint64_t x1678 = 49874826894333LLU;


void f0(void) {
    	uint64_t x1 = 66846279LLU;
	int32_t x3 = INT32_MIN;
	volatile uint64_t t0 = 7704082234571558118LLU;

    t0 = ((x1%(x2>x3))*x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int64_t x7 = -1LL;
	int32_t t1 = -2227;

    t1 = ((x5%(x6>x7))*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int32_t x10 = -1;
	int32_t x11 = INT32_MIN;
	uint32_t t2 = 86U;

    t2 = ((x9%(x10>x11))*x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 1317LLU;
	int32_t x15 = 619;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t3 = 89U;

    t3 = ((x13%(x14>x15))*x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	static uint16_t x22 = 58U;
	static int16_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 2048883;

    t4 = ((x21%(x22>x23))*x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x30 = 4;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;

    t5 = ((x29%(x30>x31))*x32);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = 6;
	int32_t x36 = -1;
	int32_t t6 = -25845;

    t6 = ((x33%(x34>x35))*x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x42 = INT32_MAX;
	int32_t x43 = -7742;
	int8_t x44 = 0;
	int32_t t7 = -13808342;

    t7 = ((x41%(x42>x43))*x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x53 = 15;
	int16_t x54 = 63;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -1LL;
	int64_t t8 = -1474LL;

    t8 = ((x53%(x54>x55))*x56);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x57 = INT64_MIN;
	uint16_t x58 = 12U;
	int32_t x60 = INT32_MAX;
	int64_t t9 = 0LL;

    t9 = ((x57%(x58>x59))*x60);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x61 = -1;
	int8_t x63 = INT8_MIN;
	int16_t x64 = 63;
	int32_t t10 = -28736286;

    t10 = ((x61%(x62>x63))*x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x69 = 6947237845188LLU;
	uint8_t x70 = 27U;
	int16_t x71 = -1;
	uint64_t t11 = 2139229017LLU;

    t11 = ((x69%(x70>x71))*x72);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x73 = UINT64_MAX;
	static uint64_t x74 = UINT64_MAX;
	int8_t x76 = 5;
	static volatile uint64_t t12 = 294622198LLU;

    t12 = ((x73%(x74>x75))*x76);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x81 = -21;
	volatile int64_t x82 = -1LL;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;
	int32_t t13 = 10632;

    t13 = ((x81%(x82>x83))*x84);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	volatile uint32_t t14 = 10U;

    t14 = ((x85%(x86>x87))*x88);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x94 = -2;
	int32_t x95 = INT32_MIN;
	int64_t x96 = 242LL;

    t15 = ((x93%(x94>x95))*x96);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x106 = 253873071;
	int8_t x108 = -1;
	volatile int32_t t16 = -41;

    t16 = ((x105%(x106>x107))*x108);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	uint8_t x119 = 20U;
	int64_t x120 = INT64_MAX;

    t17 = ((x117%(x118>x119))*x120);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x121 = -1;
	uint16_t x122 = 16451U;
	volatile int16_t x123 = -1;
	int32_t x124 = -1;
	volatile int32_t t18 = 3;

    t18 = ((x121%(x122>x123))*x124);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x133 = -1;
	volatile int64_t x135 = INT64_MIN;
	static uint8_t x136 = UINT8_MAX;
	int32_t t19 = 198;

    t19 = ((x133%(x134>x135))*x136);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = 499270;
	int32_t t20 = 8966;

    t20 = ((x141%(x142>x143))*x144);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = INT16_MAX;
	int32_t x148 = 4481891;
	int64_t t21 = 218969289335429769LL;

    t21 = ((x145%(x146>x147))*x148);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x153 = INT8_MIN;
	int32_t x154 = 3539406;
	int32_t x155 = -1;
	static uint16_t x156 = 8160U;
	int32_t t22 = -377997320;

    t22 = ((x153%(x154>x155))*x156);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x169 = -1;
	int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	volatile int32_t x172 = INT32_MAX;
	int32_t t23 = 6475917;

    t23 = ((x169%(x170>x171))*x172);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x178 = 4U;
	static int64_t x179 = 1LL;
	uint64_t t24 = 253LLU;

    t24 = ((x177%(x178>x179))*x180);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x185 = INT64_MIN;
	static int16_t x187 = INT16_MIN;
	int32_t x188 = -1;
	volatile int64_t t25 = 218LL;

    t25 = ((x185%(x186>x187))*x188);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x197 = INT32_MIN;
	uint64_t x198 = UINT64_MAX;
	uint8_t x199 = 34U;
	uint32_t x200 = UINT32_MAX;

    t26 = ((x197%(x198>x199))*x200);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x201 = 0;
	static uint32_t x202 = UINT32_MAX;
	static int32_t x203 = INT32_MIN;
	static int32_t x204 = -1;
	volatile int32_t t27 = -1;

    t27 = ((x201%(x202>x203))*x204);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint16_t x209 = 83U;
	uint32_t x210 = 761U;
	int8_t x211 = INT8_MAX;
	int8_t x212 = INT8_MIN;

    t28 = ((x209%(x210>x211))*x212);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x221 = UINT64_MAX;
	volatile int64_t x222 = 0LL;
	int32_t x223 = -1;
	uint32_t x224 = 215U;
	uint64_t t29 = 3936326249080984LLU;

    t29 = ((x221%(x222>x223))*x224);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x225 = 12425673855410458LLU;
	int8_t x228 = INT8_MIN;
	uint64_t t30 = 1985292014087769LLU;

    t30 = ((x225%(x226>x227))*x228);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x229 = 3397932199838883694LLU;
	int32_t x231 = INT32_MIN;
	volatile uint64_t t31 = 1LLU;

    t31 = ((x229%(x230>x231))*x232);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x233 = 3U;
	int16_t x234 = INT16_MAX;
	volatile int32_t x235 = 556;
	static int8_t x236 = 1;
	int32_t t32 = -4372815;

    t32 = ((x233%(x234>x235))*x236);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x241 = -1LL;
	int16_t x242 = INT16_MIN;
	uint32_t x243 = 1746U;
	int64_t t33 = -279699431LL;

    t33 = ((x241%(x242>x243))*x244);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x245 = INT16_MAX;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = 26;
	static uint8_t x248 = 23U;
	volatile int32_t t34 = -333314;

    t34 = ((x245%(x246>x247))*x248);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x257 = INT64_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 20U;

    t35 = ((x257%(x258>x259))*x260);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x269 = 13;
	volatile uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = INT32_MIN;
	int64_t x272 = 216822LL;
	int64_t t36 = 74LL;

    t36 = ((x269%(x270>x271))*x272);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x277 = 602896;
	int32_t x278 = -1071;
	static uint32_t x279 = 5U;
	static int8_t x280 = -26;
	int32_t t37 = -47939;

    t37 = ((x277%(x278>x279))*x280);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x289 = INT8_MIN;
	static uint32_t x291 = 5U;
	int32_t t38 = 1;

    t38 = ((x289%(x290>x291))*x292);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x297 = -5;
	volatile int16_t x298 = -1;
	static int32_t x299 = -1817375;

    t39 = ((x297%(x298>x299))*x300);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = -1;
	static uint64_t x307 = 332333LLU;
	volatile uint32_t t40 = 16661376U;

    t40 = ((x305%(x306>x307))*x308);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x309 = -480028;
	uint64_t x311 = 43447358LLU;

    t41 = ((x309%(x310>x311))*x312);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x313 = INT64_MAX;
	static int16_t x314 = INT16_MIN;
	int16_t x316 = 0;
	volatile int64_t t42 = 17927727311917400LL;

    t42 = ((x313%(x314>x315))*x316);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -1;

    t43 = ((x325%(x326>x327))*x328);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x337 = -11097409;
	int16_t x338 = 3668;
	int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;

    t44 = ((x337%(x338>x339))*x340);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x354 = 15396U;
	static uint64_t x355 = 1LLU;
	volatile int8_t x356 = -32;
	volatile int32_t t45 = 10809;

    t45 = ((x353%(x354>x355))*x356);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x357 = INT16_MIN;
	uint32_t x358 = 34506U;
	volatile uint64_t x359 = 67LLU;
	int32_t t46 = 90741;

    t46 = ((x357%(x358>x359))*x360);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x373 = INT16_MIN;
	volatile int64_t x374 = 3836233661LL;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = -12;
	int32_t t47 = -2655;

    t47 = ((x373%(x374>x375))*x376);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x382 = 447U;
	static volatile int16_t x383 = INT16_MIN;
	int32_t x384 = INT32_MIN;
	volatile int32_t t48 = -16593773;

    t48 = ((x381%(x382>x383))*x384);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x391 = INT8_MIN;

    t49 = ((x389%(x390>x391))*x392);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x393 = 50U;
	static uint16_t x394 = 92U;
	volatile int32_t x395 = INT32_MIN;
	volatile int64_t t50 = 1474625690LL;

    t50 = ((x393%(x394>x395))*x396);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x398 = -5403788120476106LL;
	uint64_t x399 = 220495283697126LLU;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t51 = -213;

    t51 = ((x397%(x398>x399))*x400);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x401 = INT16_MIN;
	int16_t x402 = 4;
	int16_t x403 = -1;
	volatile int32_t t52 = 682;

    t52 = ((x401%(x402>x403))*x404);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x406 = UINT16_MAX;
	static uint8_t x407 = 65U;
	int8_t x408 = INT8_MIN;
	volatile int64_t t53 = 52724767567630LL;

    t53 = ((x405%(x406>x407))*x408);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x422 = -44;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t54 = -1;

    t54 = ((x421%(x422>x423))*x424);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x426 = INT16_MIN;
	int64_t x427 = INT64_MIN;
	uint8_t x428 = 0U;

    t55 = ((x425%(x426>x427))*x428);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x433 = INT64_MAX;
	volatile int16_t x434 = INT16_MAX;
	volatile int64_t x435 = -1414533LL;
	int64_t x436 = INT64_MIN;
	int64_t t56 = 135339142645LL;

    t56 = ((x433%(x434>x435))*x436);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x437 = -1;
	static int8_t x438 = INT8_MAX;
	int32_t x439 = -1;
	int8_t x440 = -2;
	volatile int32_t t57 = -179513;

    t57 = ((x437%(x438>x439))*x440);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x441 = 92U;
	static int8_t x443 = 1;
	volatile int32_t x444 = INT32_MIN;

    t58 = ((x441%(x442>x443))*x444);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x459 = -1;
	int8_t x460 = 0;
	volatile int64_t t59 = -632352593195LL;

    t59 = ((x457%(x458>x459))*x460);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x462 = 103LL;
	volatile int16_t x464 = 3;
	volatile int64_t t60 = 440190735963908LL;

    t60 = ((x461%(x462>x463))*x464);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x473 = INT32_MIN;
	int16_t x474 = -1;
	uint8_t x476 = UINT8_MAX;
	int32_t t61 = -2983992;

    t61 = ((x473%(x474>x475))*x476);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x486 = UINT32_MAX;
	int8_t x488 = -1;
	volatile uint32_t t62 = 6255155U;

    t62 = ((x485%(x486>x487))*x488);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x489 = UINT8_MAX;
	int8_t x491 = INT8_MIN;
	int16_t x492 = 33;
	int32_t t63 = 14412430;

    t63 = ((x489%(x490>x491))*x492);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x493 = -2452;
	volatile int16_t x494 = INT16_MIN;
	int64_t x495 = INT64_MIN;
	int8_t x496 = -60;

    t64 = ((x493%(x494>x495))*x496);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x513 = INT8_MIN;
	static uint64_t x514 = 111123LLU;
	int64_t x515 = 15792LL;
	uint64_t x516 = 11915663LLU;
	volatile uint64_t t65 = 4938589416191479925LLU;

    t65 = ((x513%(x514>x515))*x516);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x522 = INT32_MIN;
	int64_t x523 = INT64_MIN;
	uint32_t t66 = 5U;

    t66 = ((x521%(x522>x523))*x524);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x533 = 1558U;
	uint16_t x534 = 22228U;
	uint8_t x536 = 5U;
	static volatile int32_t t67 = -517;

    t67 = ((x533%(x534>x535))*x536);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x541 = 5U;
	int16_t x542 = -1;
	uint64_t x544 = 134920977176LLU;
	volatile uint64_t t68 = 27201941291LLU;

    t68 = ((x541%(x542>x543))*x544);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x545 = 910;
	uint64_t x547 = 925LLU;
	volatile int16_t x548 = -1;
	static int32_t t69 = -1101905;

    t69 = ((x545%(x546>x547))*x548);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x553 = INT64_MIN;
	uint8_t x554 = 3U;
	int16_t x555 = -1;
	uint16_t x556 = 16U;
	volatile int64_t t70 = 12397608421376LL;

    t70 = ((x553%(x554>x555))*x556);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x557 = 13473459;
	uint32_t x558 = 14326U;
	uint32_t x560 = UINT32_MAX;

    t71 = ((x557%(x558>x559))*x560);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x586 = 23U;
	int64_t x587 = INT64_MIN;

    t72 = ((x585%(x586>x587))*x588);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x590 = UINT64_MAX;
	int64_t x591 = INT64_MIN;
	uint16_t x592 = 3448U;
	volatile int32_t t73 = 59;

    t73 = ((x589%(x590>x591))*x592);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x606 = INT16_MIN;
	uint32_t x607 = 31U;
	int32_t x608 = INT32_MIN;

    t74 = ((x605%(x606>x607))*x608);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x609 = UINT8_MAX;
	uint64_t x610 = UINT64_MAX;
	int64_t x611 = 165661463LL;
	int8_t x612 = INT8_MIN;
	int32_t t75 = -375788242;

    t75 = ((x609%(x610>x611))*x612);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x613 = UINT64_MAX;
	int8_t x615 = 6;
	uint64_t x616 = 57328819095174LLU;
	volatile uint64_t t76 = 29936494359607714LLU;

    t76 = ((x613%(x614>x615))*x616);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x618 = INT32_MAX;
	static int16_t x620 = -12;

    t77 = ((x617%(x618>x619))*x620);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x621 = INT32_MAX;
	int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	static volatile int32_t t78 = 224876;

    t78 = ((x621%(x622>x623))*x624);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x629 = INT64_MIN;
	int8_t x630 = -1;
	int8_t x631 = INT8_MIN;
	int64_t t79 = 3771841765224122280LL;

    t79 = ((x629%(x630>x631))*x632);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x633 = INT8_MIN;
	uint16_t x634 = UINT16_MAX;
	int8_t x635 = -9;
	int32_t x636 = -1;
	volatile int32_t t80 = 5244;

    t80 = ((x633%(x634>x635))*x636);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x638 = INT64_MAX;
	int32_t x639 = 7;
	static volatile int32_t t81 = -10;

    t81 = ((x637%(x638>x639))*x640);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x649 = INT32_MIN;
	uint8_t x650 = UINT8_MAX;
	int32_t x651 = INT32_MIN;
	static uint32_t x652 = 6U;

    t82 = ((x649%(x650>x651))*x652);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x657 = 12U;
	uint8_t x658 = 6U;
	int64_t x660 = INT64_MIN;
	static int64_t t83 = 55705482LL;

    t83 = ((x657%(x658>x659))*x660);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x662 = INT64_MAX;
	int32_t x663 = 226680;
	volatile int8_t x664 = INT8_MIN;
	volatile int32_t t84 = -184938;

    t84 = ((x661%(x662>x663))*x664);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x681 = 1;
	uint32_t x682 = 1063139U;
	uint8_t x683 = 1U;
	uint64_t t85 = 727053128878661351LLU;

    t85 = ((x681%(x682>x683))*x684);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x694 = INT16_MAX;
	int32_t x695 = -42626;
	volatile int16_t x696 = INT16_MAX;

    t86 = ((x693%(x694>x695))*x696);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x697 = -1;
	volatile uint64_t x698 = UINT64_MAX;
	uint16_t x699 = 19U;
	int8_t x700 = -1;
	volatile int32_t t87 = 40671;

    t87 = ((x697%(x698>x699))*x700);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x701 = -1LL;
	static int32_t x703 = INT32_MIN;
	uint32_t x704 = 5512U;

    t88 = ((x701%(x702>x703))*x704);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x705 = 0;
	int8_t x706 = 0;
	int8_t x707 = INT8_MIN;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t89 = 8924994870331688888LLU;

    t89 = ((x705%(x706>x707))*x708);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x713 = INT8_MAX;
	uint64_t x714 = UINT64_MAX;
	uint16_t x715 = 9U;
	int16_t x716 = INT16_MIN;
	int32_t t90 = 1855;

    t90 = ((x713%(x714>x715))*x716);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x733 = 2LLU;
	static volatile uint32_t x734 = UINT32_MAX;
	int16_t x736 = -970;
	volatile uint64_t t91 = 443454790LLU;

    t91 = ((x733%(x734>x735))*x736);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x750 = 870924014LL;
	int8_t x751 = 9;
	static int64_t x752 = 5051053887LL;

    t92 = ((x749%(x750>x751))*x752);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x754 = 32857776LL;
	volatile int16_t x755 = INT16_MIN;
	uint32_t x756 = 7079U;
	volatile uint32_t t93 = 4236435U;

    t93 = ((x753%(x754>x755))*x756);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x757 = -46;
	static volatile uint32_t x758 = 400211649U;
	static volatile uint16_t x759 = 460U;
	int8_t x760 = -1;
	int32_t t94 = -531949713;

    t94 = ((x757%(x758>x759))*x760);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x763 = 0U;
	int16_t x764 = INT16_MIN;
	volatile int32_t t95 = 110;

    t95 = ((x761%(x762>x763))*x764);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x765 = -3851;
	uint8_t x766 = 1U;
	int16_t x767 = INT16_MIN;
	static volatile int64_t x768 = INT64_MIN;
	volatile int64_t t96 = 37203513LL;

    t96 = ((x765%(x766>x767))*x768);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x773 = INT16_MAX;
	int16_t x774 = 713;
	volatile uint8_t x775 = 0U;
	int32_t t97 = 3;

    t97 = ((x773%(x774>x775))*x776);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x797 = 10;
	volatile int16_t x798 = INT16_MIN;
	uint32_t x799 = 1391550839U;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t98 = -1;

    t98 = ((x797%(x798>x799))*x800);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x801 = INT64_MAX;
	int32_t x802 = 132798542;
	int32_t x804 = -172196877;
	int64_t t99 = -3870439LL;

    t99 = ((x801%(x802>x803))*x804);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x807 = -25;
	int32_t x808 = -1;

    t100 = ((x805%(x806>x807))*x808);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x810 = 10;
	volatile int16_t x812 = INT16_MIN;
	int32_t t101 = -99012;

    t101 = ((x809%(x810>x811))*x812);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x825 = -1;
	volatile int16_t x826 = INT16_MIN;
	uint32_t x827 = 4U;
	volatile int16_t x828 = 1;
	int32_t t102 = -8692;

    t102 = ((x825%(x826>x827))*x828);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x829 = UINT8_MAX;
	int8_t x830 = INT8_MIN;
	int16_t x831 = INT16_MIN;
	static int64_t x832 = INT64_MAX;

    t103 = ((x829%(x830>x831))*x832);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x841 = 1U;
	uint32_t x842 = 74657U;

    t104 = ((x841%(x842>x843))*x844);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x846 = 10U;
	volatile int64_t x847 = -10817337333814LL;
	static int64_t x848 = INT64_MIN;
	volatile int64_t t105 = -52519827LL;

    t105 = ((x845%(x846>x847))*x848);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x849 = INT16_MIN;
	static uint16_t x850 = 0U;
	static int64_t x851 = INT64_MIN;
	int64_t x852 = INT64_MIN;
	int64_t t106 = 374585384386203LL;

    t106 = ((x849%(x850>x851))*x852);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x853 = 1;
	uint8_t x854 = 95U;
	volatile int32_t x855 = -21900128;

    t107 = ((x853%(x854>x855))*x856);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x857 = -1941;
	uint16_t x858 = 12588U;
	static int64_t x859 = -1LL;
	int16_t x860 = -167;
	volatile int32_t t108 = -1060627373;

    t108 = ((x857%(x858>x859))*x860);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x873 = 1U;
	int32_t x874 = INT32_MIN;
	uint32_t x875 = 51412470U;
	int32_t x876 = INT32_MIN;
	static int32_t t109 = 0;

    t109 = ((x873%(x874>x875))*x876);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x881 = -7;
	static uint32_t x882 = UINT32_MAX;
	int32_t x883 = INT32_MIN;
	volatile uint16_t x884 = 25U;

    t110 = ((x881%(x882>x883))*x884);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x885 = 1;
	int16_t x886 = INT16_MIN;
	volatile uint64_t x887 = 1506773042953126LLU;
	uint64_t x888 = 22775LLU;

    t111 = ((x885%(x886>x887))*x888);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x893 = -1;
	int64_t x895 = INT64_MIN;

    t112 = ((x893%(x894>x895))*x896);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x897 = INT16_MIN;
	uint64_t x898 = 448515008705962LLU;
	uint8_t x899 = UINT8_MAX;
	uint8_t x900 = 46U;
	volatile int32_t t113 = -3;

    t113 = ((x897%(x898>x899))*x900);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x905 = UINT16_MAX;
	static int8_t x907 = INT8_MIN;
	static int8_t x908 = INT8_MIN;

    t114 = ((x905%(x906>x907))*x908);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x921 = UINT16_MAX;
	int64_t x922 = 4594800595LL;
	volatile int8_t x923 = INT8_MAX;
	uint64_t x924 = UINT64_MAX;
	volatile uint64_t t115 = 8914311LLU;

    t115 = ((x921%(x922>x923))*x924);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x925 = 562U;
	static volatile int16_t x926 = INT16_MIN;
	uint32_t x927 = 604493U;
	int16_t x928 = -1;
	int32_t t116 = -10054391;

    t116 = ((x925%(x926>x927))*x928);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x933 = -1;
	static int16_t x934 = INT16_MAX;
	int8_t x935 = INT8_MIN;
	int8_t x936 = 1;

    t117 = ((x933%(x934>x935))*x936);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x945 = -1;
	uint32_t x946 = UINT32_MAX;
	int16_t x947 = 1;
	int64_t x948 = 139250LL;
	volatile int64_t t118 = -1517217083593852LL;

    t118 = ((x945%(x946>x947))*x948);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x961 = 14U;
	static int32_t x962 = INT32_MAX;
	uint32_t x963 = 10824U;
	int64_t x964 = -1LL;

    t119 = ((x961%(x962>x963))*x964);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x981 = INT8_MIN;
	volatile int16_t x982 = INT16_MAX;
	volatile uint32_t x984 = 89580U;
	uint32_t t120 = 4U;

    t120 = ((x981%(x982>x983))*x984);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x985 = 3725345U;
	int16_t x986 = INT16_MAX;
	int64_t x988 = -1145486893807404011LL;

    t121 = ((x985%(x986>x987))*x988);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x989 = INT16_MIN;
	int64_t x990 = 14LL;
	int64_t x991 = -6780809349838LL;
	uint8_t x992 = 37U;
	static volatile int32_t t122 = 4766064;

    t122 = ((x989%(x990>x991))*x992);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x999 = -37648580321350LL;
	uint64_t t123 = 333727474454289069LLU;

    t123 = ((x997%(x998>x999))*x1000);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x1005 = -15928;
	static int32_t x1007 = INT32_MIN;
	static volatile int32_t x1008 = INT32_MIN;
	volatile int32_t t124 = -615722;

    t124 = ((x1005%(x1006>x1007))*x1008);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x1009 = UINT64_MAX;
	uint8_t x1010 = 2U;
	int32_t x1012 = INT32_MIN;

    t125 = ((x1009%(x1010>x1011))*x1012);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x1021 = 8184U;
	uint32_t x1022 = 1531551069U;
	uint8_t x1023 = UINT8_MAX;
	volatile int8_t x1024 = INT8_MIN;
	volatile int32_t t126 = 84;

    t126 = ((x1021%(x1022>x1023))*x1024);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1030 = UINT16_MAX;
	volatile int8_t x1031 = -35;
	static int8_t x1032 = INT8_MIN;

    t127 = ((x1029%(x1030>x1031))*x1032);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x1037 = INT32_MIN;
	int32_t x1038 = -1;
	int32_t x1039 = -929720;
	static int8_t x1040 = INT8_MIN;

    t128 = ((x1037%(x1038>x1039))*x1040);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x1045 = 10U;
	uint32_t x1046 = 1804075864U;
	int16_t x1047 = INT16_MAX;
	static volatile int8_t x1048 = -1;
	volatile int32_t t129 = -36209583;

    t129 = ((x1045%(x1046>x1047))*x1048);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x1053 = INT16_MIN;
	static uint32_t x1055 = 1U;
	int64_t t130 = 8029472613243825LL;

    t130 = ((x1053%(x1054>x1055))*x1056);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1057 = -13;
	static uint8_t x1059 = 30U;
	int8_t x1060 = -22;
	int32_t t131 = -176597;

    t131 = ((x1057%(x1058>x1059))*x1060);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1065 = INT32_MIN;
	int32_t x1067 = INT32_MIN;
	int64_t x1068 = -1LL;

    t132 = ((x1065%(x1066>x1067))*x1068);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1073 = 4;
	uint8_t x1074 = UINT8_MAX;
	int32_t x1075 = -1;
	static int64_t x1076 = -58565051800LL;
	volatile int64_t t133 = -391934983758499LL;

    t133 = ((x1073%(x1074>x1075))*x1076);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x1078 = UINT64_MAX;
	int16_t x1079 = 1;
	int64_t x1080 = INT64_MIN;
	volatile int64_t t134 = 16LL;

    t134 = ((x1077%(x1078>x1079))*x1080);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1081 = -1;
	uint64_t x1083 = 702426175212LLU;
	int64_t x1084 = -1LL;

    t135 = ((x1081%(x1082>x1083))*x1084);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1101 = UINT16_MAX;
	int16_t x1102 = 0;
	int8_t x1103 = -1;
	int16_t x1104 = INT16_MIN;
	int32_t t136 = -294044;

    t136 = ((x1101%(x1102>x1103))*x1104);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x1109 = 3166813261840LLU;
	volatile int32_t x1110 = -814;
	static int16_t x1111 = INT16_MIN;
	int8_t x1112 = INT8_MIN;
	uint64_t t137 = 261861LLU;

    t137 = ((x1109%(x1110>x1111))*x1112);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1113 = INT64_MIN;
	static uint16_t x1114 = 163U;
	volatile int64_t x1115 = INT64_MIN;
	volatile int64_t t138 = 237592282422368918LL;

    t138 = ((x1113%(x1114>x1115))*x1116);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1121 = UINT64_MAX;
	int8_t x1122 = 1;
	volatile int16_t x1123 = INT16_MIN;
	volatile uint32_t x1124 = UINT32_MAX;
	volatile uint64_t t139 = 377774804LLU;

    t139 = ((x1121%(x1122>x1123))*x1124);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1125 = 52383;
	int32_t t140 = 1107;

    t140 = ((x1125%(x1126>x1127))*x1128);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1129 = INT16_MIN;
	int16_t x1130 = INT16_MAX;
	int32_t x1131 = -1;
	uint32_t x1132 = 526376U;
	static volatile uint32_t t141 = 7570683U;

    t141 = ((x1129%(x1130>x1131))*x1132);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1141 = -1;
	int16_t x1142 = INT16_MIN;
	uint32_t x1143 = 3218U;
	static int64_t x1144 = INT64_MAX;

    t142 = ((x1141%(x1142>x1143))*x1144);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x1145 = 1;
	uint8_t x1146 = 72U;
	int16_t x1147 = INT16_MIN;
	volatile int16_t x1148 = -1;

    t143 = ((x1145%(x1146>x1147))*x1148);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1149 = 436;
	uint8_t x1150 = 62U;
	int64_t x1151 = -1LL;
	int8_t x1152 = -3;
	volatile int32_t t144 = 1;

    t144 = ((x1149%(x1150>x1151))*x1152);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1154 = INT16_MAX;
	volatile uint8_t x1155 = 7U;
	static uint16_t x1156 = UINT16_MAX;
	int32_t t145 = -1;

    t145 = ((x1153%(x1154>x1155))*x1156);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1197 = INT8_MIN;
	uint64_t x1198 = UINT64_MAX;
	int32_t x1199 = INT32_MIN;
	int8_t x1200 = 2;
	static int32_t t146 = -56983;

    t146 = ((x1197%(x1198>x1199))*x1200);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x1201 = 7U;
	static volatile int8_t x1202 = -26;
	static int64_t x1203 = INT64_MIN;
	static uint16_t x1204 = 13978U;
	volatile int32_t t147 = 8306;

    t147 = ((x1201%(x1202>x1203))*x1204);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1209 = INT64_MAX;
	static volatile uint32_t x1210 = 521924U;
	int64_t x1211 = INT64_MIN;
	volatile int64_t t148 = 3LL;

    t148 = ((x1209%(x1210>x1211))*x1212);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1217 = INT32_MIN;
	int8_t x1220 = -1;
	volatile int32_t t149 = -226619784;

    t149 = ((x1217%(x1218>x1219))*x1220);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x1221 = 1949LLU;
	int64_t x1222 = -1LL;
	uint64_t t150 = 64286376966065857LLU;

    t150 = ((x1221%(x1222>x1223))*x1224);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x1237 = UINT8_MAX;
	int16_t x1238 = INT16_MIN;
	uint64_t x1239 = 363806761480133LLU;
	uint16_t x1240 = UINT16_MAX;

    t151 = ((x1237%(x1238>x1239))*x1240);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1249 = INT8_MIN;
	uint32_t x1250 = 10927U;
	volatile uint16_t x1251 = 1U;
	static int8_t x1252 = -2;
	int32_t t152 = -85;

    t152 = ((x1249%(x1250>x1251))*x1252);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1254 = -1LL;
	static int64_t x1255 = INT64_MIN;
	int8_t x1256 = 5;
	static volatile int32_t t153 = -2;

    t153 = ((x1253%(x1254>x1255))*x1256);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1263 = 2U;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t154 = -474335857;

    t154 = ((x1261%(x1262>x1263))*x1264);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1269 = 13352U;
	uint32_t x1270 = 433387U;
	uint8_t x1271 = 26U;
	int64_t x1272 = -58LL;

    t155 = ((x1269%(x1270>x1271))*x1272);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x1281 = 1LLU;
	int16_t x1282 = INT16_MAX;
	uint8_t x1283 = 0U;
	static volatile uint64_t t156 = 7349205751159LLU;

    t156 = ((x1281%(x1282>x1283))*x1284);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1289 = -1;
	uint8_t x1290 = 112U;
	int8_t x1291 = 8;
	volatile int16_t x1292 = INT16_MAX;
	volatile int32_t t157 = 29;

    t157 = ((x1289%(x1290>x1291))*x1292);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x1309 = 1U;
	static int16_t x1311 = -2;
	int16_t x1312 = INT16_MAX;
	static volatile int32_t t158 = -7;

    t158 = ((x1309%(x1310>x1311))*x1312);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1313 = -1;
	uint32_t x1315 = 45U;
	static volatile uint64_t t159 = 461267130547LLU;

    t159 = ((x1313%(x1314>x1315))*x1316);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1317 = UINT16_MAX;
	static uint64_t x1318 = UINT64_MAX;
	int8_t x1319 = 6;
	volatile int64_t t160 = -85540269772LL;

    t160 = ((x1317%(x1318>x1319))*x1320);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1321 = -1;
	static int8_t x1323 = -47;
	uint32_t x1324 = 403801U;
	static uint32_t t161 = 1964468081U;

    t161 = ((x1321%(x1322>x1323))*x1324);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1329 = INT8_MIN;
	static int32_t x1330 = 18451511;
	uint32_t x1332 = UINT32_MAX;
	volatile uint32_t t162 = 258650122U;

    t162 = ((x1329%(x1330>x1331))*x1332);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1345 = INT16_MIN;
	volatile int64_t x1346 = -1LL;
	int16_t x1347 = INT16_MIN;
	volatile int32_t t163 = -122875;

    t163 = ((x1345%(x1346>x1347))*x1348);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1354 = -1;
	int64_t x1355 = -3390116986353549LL;
	volatile int64_t t164 = 24395280LL;

    t164 = ((x1353%(x1354>x1355))*x1356);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x1358 = -2;
	static int64_t x1359 = INT64_MIN;
	int64_t x1360 = -1LL;

    t165 = ((x1357%(x1358>x1359))*x1360);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x1369 = 3325;
	int64_t x1370 = 166545LL;
	int64_t x1371 = -1LL;
	static int16_t x1372 = -1;
	int32_t t166 = -23434;

    t166 = ((x1369%(x1370>x1371))*x1372);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1377 = 167U;
	uint16_t x1378 = UINT16_MAX;
	static volatile int32_t x1379 = 5;
	int16_t x1380 = INT16_MIN;
	uint32_t t167 = 406517U;

    t167 = ((x1377%(x1378>x1379))*x1380);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1389 = INT16_MIN;
	int16_t x1390 = INT16_MIN;
	static volatile int16_t x1392 = INT16_MIN;

    t168 = ((x1389%(x1390>x1391))*x1392);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1397 = INT16_MIN;
	int16_t x1398 = -490;
	uint64_t x1399 = 331223LLU;
	volatile uint8_t x1400 = UINT8_MAX;
	static volatile int32_t t169 = 893038;

    t169 = ((x1397%(x1398>x1399))*x1400);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1410 = INT8_MAX;
	static volatile int8_t x1412 = INT8_MAX;
	static int32_t t170 = -1;

    t170 = ((x1409%(x1410>x1411))*x1412);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x1413 = 87;
	int16_t x1414 = INT16_MIN;
	static int64_t x1415 = INT64_MIN;

    t171 = ((x1413%(x1414>x1415))*x1416);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1425 = INT8_MAX;
	int64_t x1426 = 60935926462LL;
	int8_t x1427 = 1;
	uint32_t x1428 = 42U;
	volatile uint32_t t172 = 77421U;

    t172 = ((x1425%(x1426>x1427))*x1428);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1433 = 31;
	int64_t x1434 = INT64_MAX;
	uint32_t x1436 = 5U;
	uint32_t t173 = 1004U;

    t173 = ((x1433%(x1434>x1435))*x1436);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x1442 = UINT64_MAX;
	uint64_t x1443 = 947752424968857995LLU;
	static int64_t x1444 = 156LL;
	volatile int64_t t174 = 1416014095095588LL;

    t174 = ((x1441%(x1442>x1443))*x1444);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1449 = INT8_MIN;
	uint64_t x1450 = 79427031417285LLU;
	int16_t x1451 = INT16_MAX;
	volatile int32_t x1452 = INT32_MAX;
	static int32_t t175 = 1968;

    t175 = ((x1449%(x1450>x1451))*x1452);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1457 = INT8_MAX;
	uint32_t x1459 = 705017247U;
	volatile uint64_t t176 = 6232595047439244LLU;

    t176 = ((x1457%(x1458>x1459))*x1460);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1461 = -1LL;
	volatile uint8_t x1463 = 34U;
	uint64_t x1464 = 2320364692LLU;
	volatile uint64_t t177 = 12437605848LLU;

    t177 = ((x1461%(x1462>x1463))*x1464);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x1466 = 6U;
	static int32_t x1467 = -2;
	uint64_t x1468 = 3624222899LLU;

    t178 = ((x1465%(x1466>x1467))*x1468);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1481 = INT64_MIN;
	int64_t x1483 = INT64_MIN;
	int32_t x1484 = INT32_MIN;
	static int64_t t179 = 15255LL;

    t179 = ((x1481%(x1482>x1483))*x1484);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1489 = INT64_MAX;
	volatile uint8_t x1490 = 115U;
	uint32_t x1491 = 3U;
	volatile int16_t x1492 = INT16_MIN;

    t180 = ((x1489%(x1490>x1491))*x1492);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1493 = -1;
	uint8_t x1494 = 1U;
	int16_t x1495 = 0;
	static volatile int32_t x1496 = INT32_MIN;
	int32_t t181 = 26;

    t181 = ((x1493%(x1494>x1495))*x1496);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1509 = UINT8_MAX;
	int32_t x1511 = 9;
	int64_t x1512 = INT64_MIN;
	volatile int64_t t182 = -230712336521762690LL;

    t182 = ((x1509%(x1510>x1511))*x1512);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1514 = INT32_MIN;
	int64_t x1515 = INT64_MIN;
	static int64_t x1516 = -41LL;
	static int64_t t183 = 0LL;

    t183 = ((x1513%(x1514>x1515))*x1516);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1517 = 502299;
	static int32_t x1518 = INT32_MIN;
	int64_t x1519 = INT64_MIN;
	volatile int32_t x1520 = INT32_MAX;
	volatile int32_t t184 = -266420;

    t184 = ((x1517%(x1518>x1519))*x1520);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1562 = UINT16_MAX;
	static uint64_t x1563 = 2370LLU;
	int32_t x1564 = -246509464;
	static volatile int32_t t185 = 7;

    t185 = ((x1561%(x1562>x1563))*x1564);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1565 = 35712537869LL;
	uint64_t x1566 = 10584897927LLU;
	uint64_t x1567 = 0LLU;
	int64_t x1568 = -1LL;
	volatile int64_t t186 = -1258656219LL;

    t186 = ((x1565%(x1566>x1567))*x1568);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1577 = INT16_MAX;
	uint32_t x1578 = UINT32_MAX;
	volatile int64_t x1579 = -1LL;
	int64_t x1580 = INT64_MIN;
	volatile int64_t t187 = -681710966164LL;

    t187 = ((x1577%(x1578>x1579))*x1580);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1586 = -543LL;
	int32_t x1587 = INT32_MIN;
	static uint32_t x1588 = UINT32_MAX;
	volatile uint64_t t188 = 7339825LLU;

    t188 = ((x1585%(x1586>x1587))*x1588);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1593 = 1LL;
	int16_t x1594 = 255;
	int64_t x1595 = INT64_MIN;
	uint16_t x1596 = 439U;
	int64_t t189 = -21467009LL;

    t189 = ((x1593%(x1594>x1595))*x1596);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1609 = INT16_MIN;
	static volatile uint64_t x1610 = UINT64_MAX;
	int32_t x1611 = 4899;
	uint64_t x1612 = 2208284120LLU;
	uint64_t t190 = 94LLU;

    t190 = ((x1609%(x1610>x1611))*x1612);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1613 = INT32_MIN;
	int16_t x1614 = -1;
	int8_t x1615 = INT8_MIN;
	static uint64_t x1616 = 381LLU;
	volatile uint64_t t191 = 314LLU;

    t191 = ((x1613%(x1614>x1615))*x1616);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1617 = 293957133692319451LL;
	int16_t x1618 = INT16_MIN;
	int32_t x1619 = INT32_MIN;
	static volatile int16_t x1620 = 2;

    t192 = ((x1617%(x1618>x1619))*x1620);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1621 = -1;
	int64_t x1623 = INT64_MIN;
	int64_t x1624 = INT64_MIN;
	volatile int64_t t193 = -62440LL;

    t193 = ((x1621%(x1622>x1623))*x1624);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1625 = -8388086LL;
	int64_t x1626 = 151105806770989169LL;
	uint64_t x1627 = 2388236984787998LLU;
	uint32_t x1628 = 1U;
	int64_t t194 = 44867724055007LL;

    t194 = ((x1625%(x1626>x1627))*x1628);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1633 = INT32_MAX;
	int16_t x1634 = -1;
	uint64_t x1635 = 4687097449862LLU;
	volatile uint64_t t195 = 61557641LLU;

    t195 = ((x1633%(x1634>x1635))*x1636);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1642 = 2U;
	int8_t x1644 = INT8_MAX;

    t196 = ((x1641%(x1642>x1643))*x1644);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1649 = 1U;
	static int16_t x1650 = INT16_MAX;
	static int8_t x1651 = -3;
	int64_t x1652 = INT64_MIN;
	int64_t t197 = -767951015185LL;

    t197 = ((x1649%(x1650>x1651))*x1652);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1653 = INT8_MIN;
	int32_t x1655 = 11;
	volatile uint16_t x1656 = 68U;
	volatile int32_t t198 = -171277;

    t198 = ((x1653%(x1654>x1655))*x1656);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1677 = -1717;
	volatile int64_t x1679 = 180LL;
	volatile int64_t x1680 = 833623563LL;
	volatile int64_t t199 = 433497674LL;

    t199 = ((x1677%(x1678>x1679))*x1680);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

