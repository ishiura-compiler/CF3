
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

static int64_t x31 = -1LL;
uint32_t t2 = UINT32_MAX;
int16_t x35 = INT16_MIN;
int8_t x39 = INT8_MIN;
volatile int32_t t5 = INT32_MAX;
int64_t x75 = INT64_MAX;
int64_t x76 = -1LL;
uint32_t x77 = UINT32_MAX;
static int32_t x91 = 91748253;
int64_t x94 = -1LL;
uint64_t x95 = UINT64_MAX;
uint64_t x108 = 110776651827029LLU;
int16_t x109 = INT16_MAX;
uint64_t x120 = 3LLU;
int32_t t15 = -1;
int8_t x142 = INT8_MIN;
int32_t x144 = INT32_MIN;
int32_t t19 = 44984678;
int64_t x207 = INT64_MAX;
int8_t x211 = INT8_MAX;
int64_t x212 = INT64_MAX;
static uint64_t t24 = 2818364LLU;
volatile uint32_t x232 = UINT32_MAX;
volatile int16_t x234 = INT16_MIN;
static int16_t x240 = 1;
static volatile int32_t t29 = 2334752;
volatile int32_t x274 = INT32_MIN;
static volatile int32_t t33 = -106138;
static int32_t t34 = 1453;
uint32_t x293 = 209754502U;
uint8_t x295 = UINT8_MAX;
static int64_t x302 = -4309030383605398LL;
int8_t x303 = INT8_MIN;
int16_t x304 = 178;
int64_t x330 = INT64_MAX;
uint64_t x333 = 902438516LLU;
int8_t x334 = INT8_MIN;
static uint64_t x335 = 277LLU;
int8_t x347 = -1;
static int16_t x348 = INT16_MAX;
uint64_t x357 = 12238291708121LLU;
uint8_t x358 = UINT8_MAX;
static int16_t x360 = -1;
static volatile uint16_t x365 = 0U;
uint8_t x366 = UINT8_MAX;
static int64_t t47 = INT64_MAX;
int32_t t49 = -12850452;
static uint32_t x402 = 3U;
volatile int16_t x416 = -1;
int32_t x418 = 6924;
int16_t x431 = INT16_MIN;
volatile uint64_t x438 = UINT64_MAX;
uint64_t t55 = UINT64_MAX;
volatile int64_t x441 = 9LL;
static int16_t x449 = 12915;
uint64_t x489 = UINT64_MAX;
int64_t x510 = -1LL;
static uint64_t x513 = 19004028795LLU;
uint64_t x516 = 1670297261562174LLU;
static uint16_t x541 = 169U;
volatile int32_t x542 = -1;
static volatile int32_t x544 = 6;
uint8_t x564 = 3U;
static volatile int32_t t66 = 5;
int64_t x572 = -2275661LL;
uint16_t x585 = 2U;
int32_t t69 = -20025;
static uint32_t x593 = UINT32_MAX;
int8_t x595 = INT8_MIN;
volatile uint32_t t71 = UINT32_MAX;
int64_t t72 = 967837416LL;
int16_t x612 = INT16_MIN;
int32_t x626 = INT32_MIN;
volatile int32_t t74 = -226;
volatile int64_t x635 = INT64_MIN;
int64_t x637 = 9064LL;
static volatile uint64_t x638 = 54LLU;
volatile int64_t t76 = -118239LL;
volatile int16_t x655 = INT16_MAX;
int16_t x663 = INT16_MAX;
int8_t x664 = -1;
int64_t x666 = INT64_MIN;
volatile int64_t x679 = INT64_MIN;
uint8_t x680 = 0U;
volatile uint64_t x689 = 229074609873811089LLU;
static int32_t x692 = -1;
int32_t t84 = 47958;
static uint32_t x724 = UINT32_MAX;
uint32_t x729 = 963U;
volatile uint64_t x731 = UINT64_MAX;
static uint32_t x736 = 3002U;
static int32_t t90 = 247704;
int64_t x745 = 0LL;
static int64_t t91 = -1753600456530587LL;
volatile uint32_t t93 = UINT32_MAX;
uint64_t x759 = UINT64_MAX;
volatile uint64_t x761 = 941463LLU;
int16_t x770 = INT16_MIN;
static volatile uint64_t t96 = 2994732665226416999LLU;
volatile int16_t x792 = INT16_MIN;
int64_t x794 = -3139613LL;
int64_t x796 = -70712LL;
volatile int32_t x808 = -1;
int32_t t102 = 23100727;
uint64_t x845 = 6591079302156LLU;
volatile int16_t x848 = 968;
volatile uint64_t t106 = 1748432702724LLU;
volatile int8_t x869 = 3;
volatile int16_t x872 = 1;
static volatile int8_t x876 = INT8_MAX;
uint64_t t109 = 2442613182780007827LLU;
volatile int8_t x883 = INT8_MIN;
volatile int8_t x906 = -1;
int64_t x907 = -836822245464588060LL;
int64_t x913 = 220244783130LL;
volatile uint64_t x920 = 70180462394084LLU;
volatile uint32_t t114 = 23293U;
volatile int32_t t118 = -95362006;
int8_t x978 = INT8_MIN;
volatile int64_t t122 = 1750772307759370027LL;
volatile int32_t x1000 = -481311397;
uint8_t x1001 = UINT8_MAX;
static volatile int8_t x1013 = INT8_MAX;
static int32_t x1014 = -1;
volatile int32_t t128 = -244888;
volatile int64_t x1046 = 3LL;
volatile uint32_t t129 = 113161411U;
volatile int64_t x1058 = INT64_MAX;
int32_t x1060 = INT32_MIN;
uint32_t t132 = 116U;
static int16_t x1081 = INT16_MAX;
uint8_t x1085 = 26U;
int16_t x1099 = -1;
static int32_t t140 = 14;
volatile uint32_t x1137 = UINT32_MAX;
int32_t x1147 = INT32_MIN;
int8_t x1157 = 0;
volatile int32_t x1159 = -1;
volatile uint64_t x1160 = 20688271015666LLU;
int8_t x1169 = 9;
int8_t x1174 = INT8_MAX;
volatile uint8_t x1175 = 97U;
uint8_t x1185 = 124U;
int64_t x1186 = 443LL;
volatile int64_t x1211 = -1LL;
int32_t t149 = 275411;
static int16_t x1223 = -262;
static volatile int64_t t152 = -539227749781909LL;
uint32_t x1225 = UINT32_MAX;
static volatile int8_t x1229 = 1;
int8_t x1235 = -1;
uint16_t x1241 = 20646U;
int32_t t157 = -10984711;
int64_t x1250 = INT64_MIN;
int32_t t158 = 7;
volatile int16_t x1266 = INT16_MIN;
int32_t t160 = -48;
int16_t x1278 = -11;
int8_t x1280 = -1;
int32_t x1327 = INT32_MIN;
volatile uint64_t t165 = UINT64_MAX;
volatile int64_t t166 = 4LL;
static int64_t x1351 = -1LL;
static uint32_t x1353 = 1181399233U;
int32_t x1359 = INT32_MAX;
volatile int32_t t170 = -29;
uint32_t x1363 = UINT32_MAX;
uint64_t x1364 = 12421624438379887LLU;
volatile int32_t t171 = 564290;
int32_t x1375 = -1;
int32_t x1380 = -1;
int32_t x1426 = -1;
uint64_t t178 = 540250899364089LLU;
uint16_t x1434 = 22U;
static int32_t t180 = -26794;
int32_t t181 = -288;
uint8_t x1467 = 0U;
static int32_t t183 = -3969;
static volatile int64_t x1476 = -1LL;
int16_t x1483 = -1;
int64_t x1488 = INT64_MIN;
int8_t x1497 = 2;
int16_t x1499 = INT16_MIN;
static int32_t t187 = -9016;
static int64_t x1510 = INT64_MIN;
static volatile int16_t x1523 = -4;
int16_t x1524 = INT16_MIN;
static volatile int32_t t190 = -399262;
uint64_t x1526 = UINT64_MAX;
uint64_t x1533 = UINT64_MAX;
static volatile int16_t x1535 = -1;
static uint16_t x1541 = 189U;
int64_t x1546 = INT64_MIN;
int32_t x1558 = INT32_MAX;
static uint16_t x1559 = 0U;
uint32_t x1567 = UINT32_MAX;
volatile int64_t x1573 = 27450891570135318LL;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	int16_t x2 = -681;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	static volatile uint64_t t0 = UINT64_MAX;

    t0 = (x1<<(x2*(x3==x4)));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x9 = 19241U;
	int16_t x10 = 1;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = -1;
	static volatile uint32_t t1 = 111U;

    t1 = (x9<<(x10*(x11==x12)));

    if (t1 != 19241U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x29 = UINT32_MAX;
	int32_t x30 = 6;
	static int16_t x32 = INT16_MIN;

    t2 = (x29<<(x30*(x31==x32)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x33 = INT64_MAX;
	uint16_t x34 = 1515U;
	int8_t x36 = INT8_MIN;
	volatile int64_t t3 = INT64_MAX;

    t3 = (x33<<(x34*(x35==x36)));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x37 = UINT16_MAX;
	int16_t x38 = -7120;
	uint8_t x40 = 2U;
	int32_t t4 = -5328861;

    t4 = (x37<<(x38*(x39==x40)));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x45 = INT32_MAX;
	uint64_t x46 = 382207199439LLU;
	int64_t x47 = INT64_MIN;
	static uint16_t x48 = UINT16_MAX;

    t5 = (x45<<(x46*(x47==x48)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x61 = 565U;
	static int64_t x62 = -9LL;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = 7;
	int32_t t6 = 3477;

    t6 = (x61<<(x62*(x63==x64)));

    if (t6 != 565) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x73 = INT8_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int32_t t7 = 35;

    t7 = (x73<<(x74*(x75==x76)));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x78 = -1;
	static int8_t x79 = -4;
	static volatile int16_t x80 = INT16_MIN;
	static volatile uint32_t t8 = UINT32_MAX;

    t8 = (x77<<(x78*(x79==x80)));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x89 = 1013U;
	uint64_t x90 = UINT64_MAX;
	uint64_t x92 = 9492291LLU;
	volatile int32_t t9 = 4823429;

    t9 = (x89<<(x90*(x91==x92)));

    if (t9 != 1013) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x93 = 2032085LLU;
	volatile int8_t x96 = INT8_MIN;
	uint64_t t10 = 2649LLU;

    t10 = (x93<<(x94*(x95==x96)));

    if (t10 != 2032085LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x105 = 51U;
	int16_t x106 = INT16_MAX;
	static int64_t x107 = -1LL;
	volatile int32_t t11 = 28029;

    t11 = (x105<<(x106*(x107==x108)));

    if (t11 != 51) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x110 = INT32_MIN;
	int16_t x111 = -1;
	int8_t x112 = 11;
	volatile int32_t t12 = 44202902;

    t12 = (x109<<(x110*(x111==x112)));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	static int8_t x118 = -4;
	int16_t x119 = -938;
	volatile uint64_t t13 = UINT64_MAX;

    t13 = (x117<<(x118*(x119==x120)));

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x129 = INT64_MAX;
	int8_t x130 = -9;
	int64_t x131 = -1LL;
	uint32_t x132 = 5410515U;
	int64_t t14 = INT64_MAX;

    t14 = (x129<<(x130*(x131==x132)));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	static volatile int64_t x138 = -1LL;
	uint64_t x139 = 1186297290LLU;
	static volatile int32_t x140 = 1;

    t15 = (x137<<(x138*(x139==x140)));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x141 = 64LLU;
	static uint32_t x143 = UINT32_MAX;
	static volatile uint64_t t16 = 2LLU;

    t16 = (x141<<(x142*(x143==x144)));

    if (t16 != 64LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x145 = 118960459LLU;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = 63U;
	uint64_t x148 = 23616233LLU;
	uint64_t t17 = 107438504248995LLU;

    t17 = (x145<<(x146*(x147==x148)));

    if (t17 != 118960459LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x149 = 521U;
	int16_t x150 = INT16_MAX;
	static int8_t x151 = 2;
	uint16_t x152 = UINT16_MAX;
	int32_t t18 = 7;

    t18 = (x149<<(x150*(x151==x152)));

    if (t18 != 521) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x153 = 1;
	uint8_t x154 = 1U;
	int16_t x155 = INT16_MAX;
	uint8_t x156 = 5U;

    t19 = (x153<<(x154*(x155==x156)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x161 = INT32_MAX;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MAX;
	volatile uint32_t x164 = 1U;
	static int32_t t20 = INT32_MAX;

    t20 = (x161<<(x162*(x163==x164)));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x181 = INT8_MAX;
	static int64_t x182 = -1LL;
	volatile int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	int32_t t21 = 0;

    t21 = (x181<<(x182*(x183==x184)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x205 = 3LLU;
	int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	static uint64_t t22 = 402736605946268LLU;

    t22 = (x205<<(x206*(x207==x208)));

    if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x209 = 213U;
	int16_t x210 = INT16_MIN;
	static uint32_t t23 = 21635076U;

    t23 = (x209<<(x210*(x211==x212)));

    if (t23 != 213U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x225 = 453LLU;
	volatile uint64_t x226 = 14LLU;
	volatile int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;

    t24 = (x225<<(x226*(x227==x228)));

    if (t24 != 7421952LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x229 = INT8_MAX;
	volatile int16_t x230 = -12;
	uint64_t x231 = 5740658LLU;
	volatile int32_t t25 = -1383355;

    t25 = (x229<<(x230*(x231==x232)));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x233 = 1;
	int64_t x235 = -106561LL;
	uint16_t x236 = UINT16_MAX;
	int32_t t26 = -1;

    t26 = (x233<<(x234*(x235==x236)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x237 = INT8_MAX;
	int64_t x238 = 5909531510793LL;
	static int32_t x239 = 137;
	int32_t t27 = 161488641;

    t27 = (x237<<(x238*(x239==x240)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x241 = INT64_MAX;
	int32_t x242 = 122;
	int64_t x243 = -1LL;
	uint64_t x244 = 147119537LLU;
	volatile int64_t t28 = INT64_MAX;

    t28 = (x241<<(x242*(x243==x244)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x257 = 907U;
	uint64_t x258 = UINT64_MAX;
	volatile uint16_t x259 = UINT16_MAX;
	volatile int32_t x260 = -4;

    t29 = (x257<<(x258*(x259==x260)));

    if (t29 != 907) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x265 = 1;
	static uint16_t x266 = 40U;
	volatile uint8_t x267 = 15U;
	int32_t x268 = -1;
	int32_t t30 = 205397;

    t30 = (x265<<(x266*(x267==x268)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x273 = 5506704LLU;
	static volatile uint8_t x275 = 15U;
	uint32_t x276 = 1124184359U;
	static volatile uint64_t t31 = 255866422258117LLU;

    t31 = (x273<<(x274*(x275==x276)));

    if (t31 != 5506704LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x277 = 1110183553LLU;
	int32_t x278 = -1;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MIN;
	uint64_t t32 = 49LLU;

    t32 = (x277<<(x278*(x279==x280)));

    if (t32 != 1110183553LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x281 = UINT8_MAX;
	int32_t x282 = 20628;
	int8_t x283 = INT8_MIN;
	static int16_t x284 = -1;

    t33 = (x281<<(x282*(x283==x284)));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x285 = INT8_MAX;
	volatile uint32_t x286 = 1553996308U;
	int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = -1;

    t34 = (x285<<(x286*(x287==x288)));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x294 = -1;
	volatile int16_t x296 = -92;
	uint32_t t35 = 4151U;

    t35 = (x293<<(x294*(x295==x296)));

    if (t35 != 209754502U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x301 = INT8_MAX;
	volatile int32_t t36 = -1;

    t36 = (x301<<(x302*(x303==x304)));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x309 = 6992;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = 1;
	volatile int64_t x312 = INT64_MAX;
	int32_t t37 = 0;

    t37 = (x309<<(x310*(x311==x312)));

    if (t37 != 6992) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x313 = 2U;
	uint64_t x314 = 61LLU;
	static int64_t x315 = INT64_MIN;
	int8_t x316 = INT8_MAX;
	int32_t t38 = 354830;

    t38 = (x313<<(x314*(x315==x316)));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = 3U;
	uint64_t x324 = 502004LLU;
	static volatile int32_t t39 = -7763868;

    t39 = (x321<<(x322*(x323==x324)));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x329 = UINT32_MAX;
	static int64_t x331 = 1LL;
	int16_t x332 = INT16_MAX;
	static uint32_t t40 = UINT32_MAX;

    t40 = (x329<<(x330*(x331==x332)));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x336 = -1;
	volatile uint64_t t41 = 0LLU;

    t41 = (x333<<(x334*(x335==x336)));

    if (t41 != 902438516LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x337 = 68095;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	uint16_t x340 = UINT16_MAX;
	static int32_t t42 = 654684233;

    t42 = (x337<<(x338*(x339==x340)));

    if (t42 != 68095) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x345 = INT8_MAX;
	uint32_t x346 = 123768454U;
	static int32_t t43 = -2418693;

    t43 = (x345<<(x346*(x347==x348)));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x349 = UINT8_MAX;
	static uint16_t x350 = 4509U;
	volatile uint16_t x351 = 2008U;
	uint16_t x352 = 20U;
	int32_t t44 = 18;

    t44 = (x349<<(x350*(x351==x352)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x359 = INT16_MAX;
	volatile uint64_t t45 = 243LLU;

    t45 = (x357<<(x358*(x359==x360)));

    if (t45 != 12238291708121LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	int32_t t46 = -3598121;

    t46 = (x365<<(x366*(x367==x368)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x370 = -1;
	uint16_t x371 = 25454U;
	volatile int32_t x372 = -1693241;

    t47 = (x369<<(x370*(x371==x372)));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x377 = 1228348739666903LL;
	int64_t x378 = -1LL;
	int8_t x379 = -1;
	int64_t x380 = -2639315611154236LL;
	volatile int64_t t48 = -2LL;

    t48 = (x377<<(x378*(x379==x380)));

    if (t48 != 1228348739666903LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x389 = 676U;
	int32_t x390 = -135288915;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 1944457158LLU;

    t49 = (x389<<(x390*(x391==x392)));

    if (t49 != 676) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x401 = UINT64_MAX;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = -1;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x401<<(x402*(x403==x404)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x413 = 4U;
	volatile int32_t x414 = INT32_MIN;
	int64_t x415 = INT64_MIN;
	int32_t t51 = 1454;

    t51 = (x413<<(x414*(x415==x416)));

    if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x417 = INT32_MAX;
	volatile int32_t x419 = INT32_MIN;
	volatile int8_t x420 = 1;
	volatile int32_t t52 = INT32_MAX;

    t52 = (x417<<(x418*(x419==x420)));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x425 = 2;
	int8_t x426 = INT8_MAX;
	static int16_t x427 = -1;
	static int64_t x428 = -585354372624LL;
	volatile int32_t t53 = -3;

    t53 = (x425<<(x426*(x427==x428)));

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x429 = 10013U;
	int32_t x430 = INT32_MIN;
	uint8_t x432 = 47U;
	volatile int32_t t54 = 1;

    t54 = (x429<<(x430*(x431==x432)));

    if (t54 != 10013) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x437 = UINT64_MAX;
	uint32_t x439 = 891U;
	int16_t x440 = -218;

    t55 = (x437<<(x438*(x439==x440)));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x442 = 13U;
	volatile int32_t x443 = -1;
	uint32_t x444 = 2U;
	static int64_t t56 = 64LL;

    t56 = (x441<<(x442*(x443==x444)));

    if (t56 != 9LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x450 = 3U;
	int64_t x451 = 12499680894596483LL;
	static int16_t x452 = 22;
	volatile int32_t t57 = 2927211;

    t57 = (x449<<(x450*(x451==x452)));

    if (t57 != 12915) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = 0;
	int8_t x463 = -1;
	int32_t x464 = 27627;
	static volatile int32_t t58 = INT32_MAX;

    t58 = (x461<<(x462*(x463==x464)));

    if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x473 = INT8_MAX;
	uint32_t x474 = 6856768U;
	int32_t x475 = INT32_MAX;
	int64_t x476 = -115807963013LL;
	static volatile int32_t t59 = 40;

    t59 = (x473<<(x474*(x475==x476)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x490 = -1LL;
	int64_t x491 = INT64_MIN;
	uint16_t x492 = 8856U;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = (x489<<(x490*(x491==x492)));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x497 = INT32_MAX;
	int8_t x498 = INT8_MAX;
	static volatile int8_t x499 = 58;
	int64_t x500 = -11705372366835LL;
	volatile int32_t t61 = INT32_MAX;

    t61 = (x497<<(x498*(x499==x500)));

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x509 = 171432529U;
	int8_t x511 = -1;
	int64_t x512 = -69513669841914LL;
	uint32_t t62 = 8824U;

    t62 = (x509<<(x510*(x511==x512)));

    if (t62 != 171432529U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x514 = INT64_MIN;
	uint64_t x515 = UINT64_MAX;
	static volatile uint64_t t63 = 339863598LLU;

    t63 = (x513<<(x514*(x515==x516)));

    if (t63 != 19004028795LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x521 = 1324U;
	uint32_t x522 = 998U;
	int32_t x523 = -1;
	volatile int32_t x524 = 45348;
	volatile int32_t t64 = -95;

    t64 = (x521<<(x522*(x523==x524)));

    if (t64 != 1324) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x543 = 7868148600761690862LLU;
	int32_t t65 = -3327682;

    t65 = (x541<<(x542*(x543==x544)));

    if (t65 != 169) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x561 = 1U;
	static volatile uint8_t x562 = 4U;
	int32_t x563 = INT32_MIN;

    t66 = (x561<<(x562*(x563==x564)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x569 = INT32_MAX;
	static int32_t x570 = INT32_MIN;
	volatile uint8_t x571 = 6U;
	int32_t t67 = INT32_MAX;

    t67 = (x569<<(x570*(x571==x572)));

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = 50U;
	uint8_t x579 = 20U;
	uint16_t x580 = 2206U;
	volatile int64_t t68 = INT64_MAX;

    t68 = (x577<<(x578*(x579==x580)));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x586 = INT64_MIN;
	static int32_t x587 = INT32_MAX;
	int16_t x588 = INT16_MIN;

    t69 = (x585<<(x586*(x587==x588)));

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x589 = 107U;
	volatile int64_t x590 = -3LL;
	uint16_t x591 = 13U;
	uint32_t x592 = 419U;
	int32_t t70 = -6043401;

    t70 = (x589<<(x590*(x591==x592)));

    if (t70 != 107) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x594 = INT32_MAX;
	int16_t x596 = -1;

    t71 = (x593<<(x594*(x595==x596)));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x605 = 64424200191LL;
	uint32_t x606 = UINT32_MAX;
	int8_t x607 = INT8_MAX;
	volatile int64_t x608 = -1LL;

    t72 = (x605<<(x606*(x607==x608)));

    if (t72 != 64424200191LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x609 = INT8_MAX;
	int32_t x610 = -6874370;
	volatile int32_t x611 = INT32_MIN;
	volatile int32_t t73 = 10232;

    t73 = (x609<<(x610*(x611==x612)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x625 = 3U;
	int32_t x627 = -1;
	int32_t x628 = INT32_MAX;

    t74 = (x625<<(x626*(x627==x628)));

    if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x633 = INT32_MAX;
	int16_t x634 = 1;
	static int32_t x636 = INT32_MIN;
	volatile int32_t t75 = INT32_MAX;

    t75 = (x633<<(x634*(x635==x636)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x639 = 16327776U;
	uint16_t x640 = 0U;

    t76 = (x637<<(x638*(x639==x640)));

    if (t76 != 9064LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x645 = 90U;
	int32_t x646 = INT32_MAX;
	int16_t x647 = 0;
	int16_t x648 = INT16_MIN;
	int32_t t77 = 1716720;

    t77 = (x645<<(x646*(x647==x648)));

    if (t77 != 90) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x653 = INT8_MAX;
	uint64_t x654 = 233054646696467LLU;
	int64_t x656 = -1LL;
	volatile int32_t t78 = 1;

    t78 = (x653<<(x654*(x655==x656)));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x661 = 69U;
	int16_t x662 = INT16_MAX;
	int32_t t79 = 1455099;

    t79 = (x661<<(x662*(x663==x664)));

    if (t79 != 69) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x667 = INT32_MAX;
	uint32_t x668 = 175U;
	int32_t t80 = -14323416;

    t80 = (x665<<(x666*(x667==x668)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x677 = 7U;
	uint16_t x678 = 130U;
	volatile int32_t t81 = 45880808;

    t81 = (x677<<(x678*(x679==x680)));

    if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x690 = INT32_MIN;
	int64_t x691 = 136183520831973667LL;
	volatile uint64_t t82 = 1687759877384329LLU;

    t82 = (x689<<(x690*(x691==x692)));

    if (t82 != 229074609873811089LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x693 = 540;
	static int16_t x694 = 8;
	volatile int8_t x695 = -1;
	static volatile int64_t x696 = INT64_MIN;
	int32_t t83 = 25977846;

    t83 = (x693<<(x694*(x695==x696)));

    if (t83 != 540) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x713 = 211U;
	int32_t x714 = INT32_MIN;
	volatile uint16_t x715 = 12U;
	static int8_t x716 = INT8_MIN;

    t84 = (x713<<(x714*(x715==x716)));

    if (t84 != 211) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x721 = 987U;
	int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	volatile int32_t t85 = -11143694;

    t85 = (x721<<(x722*(x723==x724)));

    if (t85 != 987) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x725 = INT8_MAX;
	static volatile uint8_t x726 = 1U;
	int16_t x727 = -24;
	uint8_t x728 = 106U;
	volatile int32_t t86 = -3015567;

    t86 = (x725<<(x726*(x727==x728)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x730 = 0;
	int16_t x732 = INT16_MIN;
	volatile uint32_t t87 = 1732600175U;

    t87 = (x729<<(x730*(x731==x732)));

    if (t87 != 963U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x733 = 9U;
	static volatile int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MAX;
	volatile uint32_t t88 = 252U;

    t88 = (x733<<(x734*(x735==x736)));

    if (t88 != 9U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x737 = UINT32_MAX;
	int64_t x738 = -42LL;
	int64_t x739 = INT64_MIN;
	int64_t x740 = -132775415626791LL;
	uint32_t t89 = UINT32_MAX;

    t89 = (x737<<(x738*(x739==x740)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x741 = UINT16_MAX;
	static int64_t x742 = -33LL;
	int8_t x743 = -7;
	int8_t x744 = INT8_MIN;

    t90 = (x741<<(x742*(x743==x744)));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x746 = -1;
	int8_t x747 = INT8_MAX;
	volatile int16_t x748 = INT16_MIN;

    t91 = (x745<<(x746*(x747==x748)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x749 = 14;
	static int32_t x750 = -1;
	uint64_t x751 = 8806347516220839236LLU;
	int32_t x752 = INT32_MAX;
	int32_t t92 = -301561204;

    t92 = (x749<<(x750*(x751==x752)));

    if (t92 != 14) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile int32_t x754 = -1;
	int16_t x755 = -18;
	int16_t x756 = 0;

    t93 = (x753<<(x754*(x755==x756)));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x757 = INT32_MAX;
	int8_t x758 = INT8_MIN;
	uint8_t x760 = 2U;
	volatile int32_t t94 = INT32_MAX;

    t94 = (x757<<(x758*(x759==x760)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x762 = UINT16_MAX;
	static int32_t x763 = INT32_MIN;
	int32_t x764 = -1;
	volatile uint64_t t95 = 815543918342130565LLU;

    t95 = (x761<<(x762*(x763==x764)));

    if (t95 != 941463LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x769 = 18201LLU;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = INT64_MIN;

    t96 = (x769<<(x770*(x771==x772)));

    if (t96 != 18201LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x777 = UINT64_MAX;
	static int64_t x778 = -1LL;
	static int16_t x779 = -1;
	int8_t x780 = INT8_MAX;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = (x777<<(x778*(x779==x780)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x789 = INT8_MAX;
	int32_t x790 = INT32_MAX;
	int64_t x791 = -118406030595399LL;
	volatile int32_t t98 = 36;

    t98 = (x789<<(x790*(x791==x792)));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x793 = INT16_MAX;
	int32_t x795 = INT32_MIN;
	int32_t t99 = -1;

    t99 = (x793<<(x794*(x795==x796)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x797 = 57273101624LL;
	static uint32_t x798 = 0U;
	int16_t x799 = 40;
	int32_t x800 = INT32_MIN;
	static int64_t t100 = -6549119961929LL;

    t100 = (x797<<(x798*(x799==x800)));

    if (t100 != 57273101624LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x805 = 14;
	int16_t x806 = -11225;
	int32_t x807 = INT32_MIN;
	volatile int32_t t101 = -312900159;

    t101 = (x805<<(x806*(x807==x808)));

    if (t101 != 14) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x821 = 24016U;
	int64_t x822 = 149702961309854LL;
	static int64_t x823 = INT64_MAX;
	int32_t x824 = INT32_MAX;

    t102 = (x821<<(x822*(x823==x824)));

    if (t102 != 24016) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x825 = 2U;
	static int8_t x826 = -1;
	int64_t x827 = 984491267LL;
	int64_t x828 = INT64_MIN;
	volatile int32_t t103 = -13935;

    t103 = (x825<<(x826*(x827==x828)));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x829 = UINT8_MAX;
	uint16_t x830 = 1976U;
	int16_t x831 = -1;
	volatile int32_t x832 = INT32_MIN;
	static int32_t t104 = 19152749;

    t104 = (x829<<(x830*(x831==x832)));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x833 = 3546548882LL;
	uint16_t x834 = 25722U;
	int16_t x835 = INT16_MAX;
	uint8_t x836 = UINT8_MAX;
	volatile int64_t t105 = 5LL;

    t105 = (x833<<(x834*(x835==x836)));

    if (t105 != 3546548882LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x846 = -1;
	int16_t x847 = 2;

    t106 = (x845<<(x846*(x847==x848)));

    if (t106 != 6591079302156LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x849 = 108;
	int32_t x850 = -35;
	int64_t x851 = INT64_MAX;
	uint16_t x852 = 1305U;
	int32_t t107 = 1337051;

    t107 = (x849<<(x850*(x851==x852)));

    if (t107 != 108) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x870 = 19054867433LLU;
	static int64_t x871 = INT64_MIN;
	int32_t t108 = -13026;

    t108 = (x869<<(x870*(x871==x872)));

    if (t108 != 3) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x873 = 40650824756LLU;
	static int16_t x874 = INT16_MIN;
	volatile int64_t x875 = -1LL;

    t109 = (x873<<(x874*(x875==x876)));

    if (t109 != 40650824756LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x881 = 25U;
	int16_t x882 = -1;
	volatile uint16_t x884 = 189U;
	static volatile int32_t t110 = -288730274;

    t110 = (x881<<(x882*(x883==x884)));

    if (t110 != 25) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x905 = 484U;
	int16_t x908 = INT16_MIN;
	static volatile int32_t t111 = 13;

    t111 = (x905<<(x906*(x907==x908)));

    if (t111 != 484) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x914 = INT8_MAX;
	int32_t x915 = INT32_MIN;
	int16_t x916 = -1;
	int64_t t112 = 33284843096465690LL;

    t112 = (x913<<(x914*(x915==x916)));

    if (t112 != 220244783130LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x917 = 458929;
	static uint8_t x918 = 22U;
	int8_t x919 = -1;
	volatile int32_t t113 = -153;

    t113 = (x917<<(x918*(x919==x920)));

    if (t113 != 458929) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x921 = 1572786222U;
	static int8_t x922 = -5;
	volatile int32_t x923 = INT32_MIN;
	static int32_t x924 = INT32_MAX;

    t114 = (x921<<(x922*(x923==x924)));

    if (t114 != 1572786222U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x929 = 5LLU;
	static int16_t x930 = INT16_MIN;
	volatile int8_t x931 = -5;
	int16_t x932 = INT16_MIN;
	uint64_t t115 = 259400585313361LLU;

    t115 = (x929<<(x930*(x931==x932)));

    if (t115 != 5LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x933 = 29;
	int32_t x934 = INT32_MAX;
	uint16_t x935 = 15U;
	static int8_t x936 = INT8_MIN;
	int32_t t116 = -1723734;

    t116 = (x933<<(x934*(x935==x936)));

    if (t116 != 29) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x945 = 5;
	int64_t x946 = 13115453LL;
	int32_t x947 = INT32_MIN;
	int16_t x948 = 1;
	int32_t t117 = -1;

    t117 = (x945<<(x946*(x947==x948)));

    if (t117 != 5) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x953 = 117U;
	int16_t x954 = INT16_MIN;
	volatile int32_t x955 = INT32_MIN;
	int64_t x956 = INT64_MAX;

    t118 = (x953<<(x954*(x955==x956)));

    if (t118 != 117) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x957 = 14149U;
	volatile int64_t x958 = 1270529648LL;
	uint16_t x959 = UINT16_MAX;
	int8_t x960 = INT8_MAX;
	volatile uint32_t t119 = 11U;

    t119 = (x957<<(x958*(x959==x960)));

    if (t119 != 14149U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x961 = INT8_MAX;
	uint32_t x962 = UINT32_MAX;
	static volatile int64_t x963 = INT64_MIN;
	int8_t x964 = INT8_MIN;
	int32_t t120 = 668964222;

    t120 = (x961<<(x962*(x963==x964)));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x965 = 9179;
	static int16_t x966 = -1;
	uint16_t x967 = UINT16_MAX;
	static int8_t x968 = -1;
	static volatile int32_t t121 = -146;

    t121 = (x965<<(x966*(x967==x968)));

    if (t121 != 9179) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x977 = 1063LL;
	uint32_t x979 = 4409683U;
	int64_t x980 = INT64_MAX;

    t122 = (x977<<(x978*(x979==x980)));

    if (t122 != 1063LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x985 = 1;
	uint8_t x986 = 40U;
	volatile uint64_t x987 = 2576310383401383160LLU;
	static int32_t x988 = INT32_MAX;
	volatile int32_t t123 = 293;

    t123 = (x985<<(x986*(x987==x988)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x989 = INT64_MAX;
	volatile int16_t x990 = INT16_MIN;
	uint32_t x991 = 1088U;
	uint64_t x992 = UINT64_MAX;
	int64_t t124 = INT64_MAX;

    t124 = (x989<<(x990*(x991==x992)));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x997 = INT64_MAX;
	uint8_t x998 = 0U;
	int32_t x999 = -1;
	static int64_t t125 = INT64_MAX;

    t125 = (x997<<(x998*(x999==x1000)));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x1002 = INT16_MIN;
	int64_t x1003 = INT64_MIN;
	uint64_t x1004 = UINT64_MAX;
	static volatile int32_t t126 = 220;

    t126 = (x1001<<(x1002*(x1003==x1004)));

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = 13;
	int32_t x1007 = INT32_MAX;
	volatile uint16_t x1008 = UINT16_MAX;
	volatile int32_t t127 = -11635;

    t127 = (x1005<<(x1006*(x1007==x1008)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1015 = INT16_MAX;
	uint8_t x1016 = 117U;

    t128 = (x1013<<(x1014*(x1015==x1016)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x1045 = 51U;
	int8_t x1047 = -1;
	int8_t x1048 = -1;

    t129 = (x1045<<(x1046*(x1047==x1048)));

    if (t129 != 408U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x1049 = UINT32_MAX;
	int8_t x1050 = INT8_MIN;
	uint32_t x1051 = 0U;
	uint32_t x1052 = 3U;
	uint32_t t130 = UINT32_MAX;

    t130 = (x1049<<(x1050*(x1051==x1052)));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1057 = INT16_MAX;
	int8_t x1059 = INT8_MIN;
	int32_t t131 = -26;

    t131 = (x1057<<(x1058*(x1059==x1060)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1069 = 13U;
	static uint16_t x1070 = 1U;
	uint32_t x1071 = UINT32_MAX;
	volatile uint32_t x1072 = 2281566U;

    t132 = (x1069<<(x1070*(x1071==x1072)));

    if (t132 != 13U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1077 = 5;
	int64_t x1078 = 3LL;
	static int64_t x1079 = -1LL;
	static uint8_t x1080 = UINT8_MAX;
	volatile int32_t t133 = 5341059;

    t133 = (x1077<<(x1078*(x1079==x1080)));

    if (t133 != 5) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x1082 = INT64_MIN;
	uint16_t x1083 = 0U;
	uint64_t x1084 = UINT64_MAX;
	volatile int32_t t134 = -1029585838;

    t134 = (x1081<<(x1082*(x1083==x1084)));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x1086 = 14U;
	int16_t x1087 = -77;
	int64_t x1088 = -1LL;
	int32_t t135 = 487;

    t135 = (x1085<<(x1086*(x1087==x1088)));

    if (t135 != 26) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x1093 = 5148494LLU;
	int8_t x1094 = -1;
	static int16_t x1095 = INT16_MIN;
	int64_t x1096 = INT64_MAX;
	volatile uint64_t t136 = 416869413798803LLU;

    t136 = (x1093<<(x1094*(x1095==x1096)));

    if (t136 != 5148494LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1097 = 3450662U;
	int32_t x1098 = INT32_MIN;
	static volatile uint8_t x1100 = 1U;
	static uint32_t t137 = 0U;

    t137 = (x1097<<(x1098*(x1099==x1100)));

    if (t137 != 3450662U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1105 = UINT32_MAX;
	volatile uint8_t x1106 = UINT8_MAX;
	uint8_t x1107 = 0U;
	int64_t x1108 = 3759750964990LL;
	volatile uint32_t t138 = UINT32_MAX;

    t138 = (x1105<<(x1106*(x1107==x1108)));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1113 = INT8_MAX;
	uint16_t x1114 = 17042U;
	int32_t x1115 = 57270162;
	volatile int16_t x1116 = INT16_MIN;
	int32_t t139 = -10887493;

    t139 = (x1113<<(x1114*(x1115==x1116)));

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1129 = 3;
	volatile int16_t x1130 = -1;
	int16_t x1131 = INT16_MIN;
	uint32_t x1132 = 61U;

    t140 = (x1129<<(x1130*(x1131==x1132)));

    if (t140 != 3) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x1138 = 804U;
	static int64_t x1139 = 901595162LL;
	volatile int8_t x1140 = -11;
	volatile uint32_t t141 = UINT32_MAX;

    t141 = (x1137<<(x1138*(x1139==x1140)));

    if (t141 != UINT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x1145 = 1U;
	static int32_t x1146 = INT32_MIN;
	int64_t x1148 = 979500888262532LL;
	volatile int32_t t142 = 505636;

    t142 = (x1145<<(x1146*(x1147==x1148)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x1158 = 484LLU;
	static volatile int32_t t143 = -30488;

    t143 = (x1157<<(x1158*(x1159==x1160)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1165 = 8;
	int64_t x1166 = INT64_MAX;
	uint32_t x1167 = UINT32_MAX;
	int16_t x1168 = -859;
	int32_t t144 = 0;

    t144 = (x1165<<(x1166*(x1167==x1168)));

    if (t144 != 8) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1170 = 56U;
	static int32_t x1171 = -1;
	uint32_t x1172 = 137487511U;
	volatile int32_t t145 = 37182142;

    t145 = (x1169<<(x1170*(x1171==x1172)));

    if (t145 != 9) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x1173 = INT8_MAX;
	int64_t x1176 = -893462LL;
	static volatile int32_t t146 = -1;

    t146 = (x1173<<(x1174*(x1175==x1176)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1177 = INT16_MAX;
	int16_t x1178 = 47;
	int32_t x1179 = -1;
	int16_t x1180 = -951;
	int32_t t147 = 21796;

    t147 = (x1177<<(x1178*(x1179==x1180)));

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1187 = -78716603677LL;
	int16_t x1188 = -6;
	volatile int32_t t148 = 11;

    t148 = (x1185<<(x1186*(x1187==x1188)));

    if (t148 != 124) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x1209 = INT16_MAX;
	uint8_t x1210 = 0U;
	static uint16_t x1212 = 2726U;

    t149 = (x1209<<(x1210*(x1211==x1212)));

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1213 = 14956;
	int64_t x1214 = -1LL;
	uint8_t x1215 = 41U;
	int32_t x1216 = INT32_MIN;
	int32_t t150 = 35592973;

    t150 = (x1213<<(x1214*(x1215==x1216)));

    if (t150 != 14956) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1217 = INT8_MAX;
	uint8_t x1218 = UINT8_MAX;
	int32_t x1219 = INT32_MIN;
	int16_t x1220 = INT16_MIN;
	static int32_t t151 = 75;

    t151 = (x1217<<(x1218*(x1219==x1220)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1221 = 46693384790LL;
	int8_t x1222 = 0;
	uint32_t x1224 = UINT32_MAX;

    t152 = (x1221<<(x1222*(x1223==x1224)));

    if (t152 != 46693384790LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1226 = INT16_MAX;
	uint32_t x1227 = 943062U;
	int16_t x1228 = INT16_MIN;
	uint32_t t153 = UINT32_MAX;

    t153 = (x1225<<(x1226*(x1227==x1228)));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1230 = 22994LL;
	uint64_t x1231 = 398391869115656LLU;
	int32_t x1232 = INT32_MIN;
	int32_t t154 = 186851304;

    t154 = (x1229<<(x1230*(x1231==x1232)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1233 = INT32_MAX;
	static int32_t x1234 = INT32_MAX;
	int8_t x1236 = 44;
	int32_t t155 = INT32_MAX;

    t155 = (x1233<<(x1234*(x1235==x1236)));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x1242 = 11005845;
	static int32_t x1243 = INT32_MAX;
	volatile int16_t x1244 = INT16_MIN;
	int32_t t156 = 54655;

    t156 = (x1241<<(x1242*(x1243==x1244)));

    if (t156 != 20646) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1245 = 27U;
	uint64_t x1246 = 2873980LLU;
	volatile int64_t x1247 = 14147LL;
	static int8_t x1248 = -1;

    t157 = (x1245<<(x1246*(x1247==x1248)));

    if (t157 != 27) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1249 = INT8_MAX;
	int64_t x1251 = -1LL;
	int8_t x1252 = INT8_MIN;

    t158 = (x1249<<(x1250*(x1251==x1252)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1265 = 10226LL;
	static volatile int8_t x1267 = -14;
	int32_t x1268 = INT32_MIN;
	volatile int64_t t159 = 1819LL;

    t159 = (x1265<<(x1266*(x1267==x1268)));

    if (t159 != 10226LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1269 = 25U;
	volatile int16_t x1270 = 7;
	volatile int8_t x1271 = -3;
	uint8_t x1272 = 0U;

    t160 = (x1269<<(x1270*(x1271==x1272)));

    if (t160 != 25) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1277 = 5;
	static uint16_t x1279 = 2637U;
	int32_t t161 = 1;

    t161 = (x1277<<(x1278*(x1279==x1280)));

    if (t161 != 5) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x1309 = 24U;
	volatile int64_t x1310 = INT64_MAX;
	static volatile int16_t x1311 = INT16_MIN;
	volatile uint64_t x1312 = 502046LLU;
	static int32_t t162 = 3984;

    t162 = (x1309<<(x1310*(x1311==x1312)));

    if (t162 != 24) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1317 = UINT8_MAX;
	static uint64_t x1318 = 7543493088LLU;
	volatile uint64_t x1319 = 411627814022184826LLU;
	static int16_t x1320 = 57;
	int32_t t163 = 399130420;

    t163 = (x1317<<(x1318*(x1319==x1320)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1325 = 1095727605LLU;
	int32_t x1326 = INT32_MAX;
	int64_t x1328 = -45LL;
	volatile uint64_t t164 = 33275593311LLU;

    t164 = (x1325<<(x1326*(x1327==x1328)));

    if (t164 != 1095727605LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1329 = UINT64_MAX;
	static uint32_t x1330 = 448502741U;
	uint16_t x1331 = UINT16_MAX;
	int64_t x1332 = -1105132LL;

    t165 = (x1329<<(x1330*(x1331==x1332)));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1341 = 1672459LL;
	static int32_t x1342 = -1888;
	uint32_t x1343 = 0U;
	static int32_t x1344 = 152712790;

    t166 = (x1341<<(x1342*(x1343==x1344)));

    if (t166 != 1672459LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x1345 = 30081579U;
	static int16_t x1346 = INT16_MIN;
	int64_t x1347 = INT64_MIN;
	uint64_t x1348 = UINT64_MAX;
	static uint32_t t167 = 65U;

    t167 = (x1345<<(x1346*(x1347==x1348)));

    if (t167 != 30081579U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1349 = 15U;
	uint64_t x1350 = 2145220921LLU;
	static volatile uint64_t x1352 = 216216179LLU;
	int32_t t168 = -1732;

    t168 = (x1349<<(x1350*(x1351==x1352)));

    if (t168 != 15) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1354 = INT16_MAX;
	static uint32_t x1355 = UINT32_MAX;
	int8_t x1356 = INT8_MIN;
	static uint32_t t169 = 0U;

    t169 = (x1353<<(x1354*(x1355==x1356)));

    if (t169 != 1181399233U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1357 = 111U;
	volatile int16_t x1358 = INT16_MIN;
	static int64_t x1360 = INT64_MAX;

    t170 = (x1357<<(x1358*(x1359==x1360)));

    if (t170 != 111) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1361 = 446;
	uint16_t x1362 = 13U;

    t171 = (x1361<<(x1362*(x1363==x1364)));

    if (t171 != 446) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1373 = 2799U;
	uint16_t x1374 = 221U;
	static int64_t x1376 = INT64_MAX;
	int32_t t172 = -193854;

    t172 = (x1373<<(x1374*(x1375==x1376)));

    if (t172 != 2799) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1377 = 593384U;
	static int8_t x1378 = INT8_MIN;
	int16_t x1379 = INT16_MIN;
	volatile uint32_t t173 = 8852668U;

    t173 = (x1377<<(x1378*(x1379==x1380)));

    if (t173 != 593384U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1385 = 103691692519LLU;
	static uint32_t x1386 = 11U;
	int16_t x1387 = INT16_MAX;
	uint64_t x1388 = 674LLU;
	uint64_t t174 = 46091205873350728LLU;

    t174 = (x1385<<(x1386*(x1387==x1388)));

    if (t174 != 103691692519LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1405 = 996391689LL;
	int64_t x1406 = -554780136420105LL;
	int16_t x1407 = 12;
	static volatile int64_t x1408 = -1064996LL;
	volatile int64_t t175 = 102163808938564841LL;

    t175 = (x1405<<(x1406*(x1407==x1408)));

    if (t175 != 996391689LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1413 = 24064U;
	int8_t x1414 = INT8_MIN;
	int16_t x1415 = INT16_MAX;
	int16_t x1416 = -1;
	volatile uint32_t t176 = 374536801U;

    t176 = (x1413<<(x1414*(x1415==x1416)));

    if (t176 != 24064U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x1425 = 6375U;
	static uint8_t x1427 = 9U;
	static volatile int64_t x1428 = INT64_MAX;
	static volatile int32_t t177 = 6872;

    t177 = (x1425<<(x1426*(x1427==x1428)));

    if (t177 != 6375) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x1429 = 5764551515304LLU;
	uint64_t x1430 = 81806107681159LLU;
	static int64_t x1431 = 0LL;
	static uint8_t x1432 = 21U;

    t178 = (x1429<<(x1430*(x1431==x1432)));

    if (t178 != 5764551515304LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1433 = 80U;
	int8_t x1435 = -1;
	uint16_t x1436 = UINT16_MAX;
	int32_t t179 = 57;

    t179 = (x1433<<(x1434*(x1435==x1436)));

    if (t179 != 80) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1437 = 57;
	volatile uint16_t x1438 = UINT16_MAX;
	int16_t x1439 = -10738;
	int16_t x1440 = 12854;

    t180 = (x1437<<(x1438*(x1439==x1440)));

    if (t180 != 57) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1445 = 20U;
	int16_t x1446 = -1;
	int16_t x1447 = -1;
	volatile int64_t x1448 = -232191LL;

    t181 = (x1445<<(x1446*(x1447==x1448)));

    if (t181 != 20) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1457 = UINT16_MAX;
	static int8_t x1458 = INT8_MAX;
	uint16_t x1459 = 2162U;
	int16_t x1460 = -1;
	int32_t t182 = -49;

    t182 = (x1457<<(x1458*(x1459==x1460)));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1465 = 30;
	int16_t x1466 = INT16_MIN;
	int32_t x1468 = INT32_MIN;

    t183 = (x1465<<(x1466*(x1467==x1468)));

    if (t183 != 30) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1473 = UINT32_MAX;
	volatile int32_t x1474 = INT32_MIN;
	int32_t x1475 = INT32_MAX;
	volatile uint32_t t184 = UINT32_MAX;

    t184 = (x1473<<(x1474*(x1475==x1476)));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1481 = UINT64_MAX;
	volatile uint32_t x1482 = 153648U;
	uint64_t x1484 = 110102513424LLU;
	static volatile uint64_t t185 = UINT64_MAX;

    t185 = (x1481<<(x1482*(x1483==x1484)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1485 = INT64_MAX;
	static int32_t x1486 = INT32_MIN;
	int32_t x1487 = 5;
	int64_t t186 = INT64_MAX;

    t186 = (x1485<<(x1486*(x1487==x1488)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1498 = -7238915440618557LL;
	static int64_t x1500 = INT64_MIN;

    t187 = (x1497<<(x1498*(x1499==x1500)));

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1509 = 967578;
	uint8_t x1511 = 7U;
	uint8_t x1512 = 16U;
	static int32_t t188 = -38099976;

    t188 = (x1509<<(x1510*(x1511==x1512)));

    if (t188 != 967578) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1517 = 51U;
	int16_t x1518 = INT16_MIN;
	volatile int64_t x1519 = INT64_MIN;
	volatile int16_t x1520 = INT16_MIN;
	volatile int32_t t189 = -1385710;

    t189 = (x1517<<(x1518*(x1519==x1520)));

    if (t189 != 51) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1521 = INT16_MAX;
	int64_t x1522 = -201LL;

    t190 = (x1521<<(x1522*(x1523==x1524)));

    if (t190 != 32767) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1525 = 190U;
	uint32_t x1527 = 13907733U;
	int8_t x1528 = INT8_MAX;
	volatile int32_t t191 = -95;

    t191 = (x1525<<(x1526*(x1527==x1528)));

    if (t191 != 190) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1534 = 31U;
	int8_t x1536 = -53;
	static volatile uint64_t t192 = UINT64_MAX;

    t192 = (x1533<<(x1534*(x1535==x1536)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1542 = -1;
	uint32_t x1543 = UINT32_MAX;
	uint8_t x1544 = UINT8_MAX;
	volatile int32_t t193 = 0;

    t193 = (x1541<<(x1542*(x1543==x1544)));

    if (t193 != 189) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1545 = INT8_MAX;
	uint64_t x1547 = 431326366827LLU;
	int32_t x1548 = -1;
	volatile int32_t t194 = 144929;

    t194 = (x1545<<(x1546*(x1547==x1548)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x1557 = UINT8_MAX;
	int8_t x1560 = INT8_MIN;
	volatile int32_t t195 = 0;

    t195 = (x1557<<(x1558*(x1559==x1560)));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1561 = 0U;
	int32_t x1562 = 584883341;
	int16_t x1563 = INT16_MAX;
	static volatile int16_t x1564 = -1;
	int32_t t196 = 78696968;

    t196 = (x1561<<(x1562*(x1563==x1564)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1565 = UINT32_MAX;
	int16_t x1566 = -13097;
	static int64_t x1568 = -5600885LL;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (x1565<<(x1566*(x1567==x1568)));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1574 = -157;
	int16_t x1575 = INT16_MAX;
	uint32_t x1576 = 27602U;
	static int64_t t198 = -1189121006529LL;

    t198 = (x1573<<(x1574*(x1575==x1576)));

    if (t198 != 27450891570135318LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1585 = INT8_MAX;
	uint64_t x1586 = UINT64_MAX;
	static uint8_t x1587 = 124U;
	int8_t x1588 = 38;
	static int32_t t199 = -253637;

    t199 = (x1585<<(x1586*(x1587==x1588)));

    if (t199 != 127) { NG(); } else { ; }
	
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

