
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

int16_t x11 = -1;
int64_t x12 = 334921030167283538LL;
uint16_t x31 = UINT16_MAX;
volatile uint16_t x32 = 317U;
int8_t x55 = -1;
uint16_t x66 = 211U;
int64_t t8 = INT64_MAX;
volatile uint64_t t9 = 4350172530524170848LLU;
uint32_t x91 = UINT32_MAX;
static int8_t x98 = INT8_MAX;
int8_t x114 = 30;
int64_t x115 = INT64_MIN;
uint8_t x118 = 97U;
int16_t x123 = -1;
int8_t x124 = INT8_MIN;
uint8_t x130 = 12U;
static int32_t t16 = 43000015;
int8_t x134 = -1;
static int64_t t17 = INT64_MAX;
uint8_t x165 = 12U;
int32_t x174 = INT32_MIN;
volatile int32_t t24 = -922;
static uint64_t x207 = 372098039LLU;
int8_t x234 = -17;
static uint8_t x235 = UINT8_MAX;
int64_t x236 = -63658471955280LL;
volatile int8_t x257 = INT8_MAX;
volatile int32_t x261 = 3;
uint32_t x264 = 9427U;
uint16_t x289 = UINT16_MAX;
static volatile int8_t x290 = INT8_MIN;
int8_t x292 = -10;
int8_t x298 = INT8_MIN;
uint64_t t36 = UINT64_MAX;
static int16_t x310 = -1586;
int32_t t40 = 809425;
int16_t x363 = INT16_MAX;
static uint16_t x386 = 5U;
static int16_t x387 = INT16_MIN;
volatile int32_t t46 = 752767;
int32_t t47 = 59048;
uint8_t x396 = UINT8_MAX;
uint32_t x413 = 32272U;
int32_t x422 = INT32_MIN;
int32_t x440 = 928346;
uint32_t x442 = UINT32_MAX;
volatile int32_t t57 = 25;
static int32_t x481 = INT32_MAX;
static int16_t x505 = INT16_MAX;
uint8_t x523 = 18U;
int32_t t63 = 7036;
int16_t x538 = -1;
int32_t t65 = 41266189;
static uint32_t x549 = 515171968U;
uint32_t x551 = UINT32_MAX;
int16_t x567 = -419;
static int8_t x579 = -60;
int32_t t71 = 32;
static int32_t t73 = 10459;
int64_t x598 = -6744603398LL;
static uint32_t x600 = 838161U;
static int16_t x609 = INT16_MAX;
int16_t x612 = -1;
uint16_t x648 = 26681U;
uint64_t x649 = 5138LLU;
int8_t x655 = INT8_MIN;
static uint16_t x664 = 232U;
volatile int32_t t83 = 3;
int32_t x673 = 1;
uint32_t x675 = UINT32_MAX;
uint16_t x676 = 0U;
int64_t x681 = INT64_MAX;
static volatile int64_t t86 = INT64_MAX;
int32_t x705 = INT32_MAX;
int8_t x708 = 11;
int32_t x710 = -12405;
volatile int64_t t92 = 1LL;
static volatile int32_t t93 = -872836;
uint32_t x753 = 1243459330U;
volatile int32_t t98 = -12672;
volatile int32_t x763 = INT32_MIN;
volatile int32_t t99 = -117;
uint16_t x769 = UINT16_MAX;
int8_t x772 = INT8_MAX;
int64_t x778 = -1LL;
volatile int8_t x796 = INT8_MIN;
uint32_t x799 = 4194U;
int64_t x802 = INT64_MIN;
uint32_t x803 = 10438U;
int8_t x804 = -1;
volatile int64_t t106 = INT64_MAX;
uint8_t x809 = UINT8_MAX;
int32_t t109 = 47;
int32_t x821 = INT32_MAX;
volatile uint32_t x823 = UINT32_MAX;
static int32_t t110 = INT32_MAX;
uint32_t x831 = 3493U;
static int16_t x837 = 164;
int32_t t112 = -3;
int64_t x860 = -236172934LL;
volatile int32_t x875 = 7;
uint8_t x877 = UINT8_MAX;
volatile int16_t x892 = -1;
static volatile uint64_t x899 = UINT64_MAX;
int32_t x902 = INT32_MIN;
uint32_t x904 = 21233416U;
static uint8_t x906 = 0U;
int8_t x928 = INT8_MIN;
uint8_t x934 = UINT8_MAX;
int32_t x936 = -30310;
static volatile uint16_t x957 = 25173U;
volatile int32_t t127 = -172284315;
volatile uint64_t x961 = 10LLU;
int16_t x962 = -1;
static uint64_t x970 = UINT64_MAX;
static volatile uint8_t x973 = 78U;
static uint16_t x975 = UINT16_MAX;
volatile int8_t x976 = -1;
static volatile int8_t x1015 = -1;
int64_t t135 = INT64_MAX;
volatile int32_t t136 = 312400761;
uint64_t x1041 = 27476296741542LLU;
volatile int16_t x1042 = INT16_MIN;
static int32_t t138 = 1489;
uint8_t x1066 = 12U;
int8_t x1067 = -6;
int8_t x1098 = INT8_MIN;
int64_t x1152 = INT64_MIN;
uint32_t t151 = UINT32_MAX;
uint64_t x1164 = 10LLU;
volatile int32_t t156 = -593;
int16_t x1210 = INT16_MIN;
int64_t x1226 = INT64_MIN;
volatile int8_t x1227 = INT8_MAX;
volatile int32_t t160 = -2;
int8_t x1229 = INT8_MAX;
uint8_t x1231 = UINT8_MAX;
int64_t t162 = INT64_MAX;
static volatile int32_t x1241 = INT32_MAX;
int32_t t164 = -819879328;
uint64_t x1253 = 1971141971110LLU;
int8_t x1256 = INT8_MAX;
uint64_t t165 = 10488661LLU;
uint16_t x1277 = 282U;
int64_t x1280 = INT64_MIN;
int64_t x1282 = INT64_MAX;
volatile uint64_t t168 = 1742908397006LLU;
uint32_t t169 = 5262309U;
static volatile uint32_t t170 = 165U;
int64_t x1311 = INT64_MIN;
int16_t x1312 = INT16_MIN;
volatile uint16_t x1347 = 1U;
static int64_t t179 = 6703132973LL;
int8_t x1360 = INT8_MIN;
volatile uint32_t t181 = UINT32_MAX;
static int16_t x1383 = INT16_MAX;
static uint16_t x1405 = UINT16_MAX;
volatile int64_t x1407 = -15LL;
volatile int64_t x1408 = INT64_MIN;
uint8_t x1414 = UINT8_MAX;
uint32_t x1429 = UINT32_MAX;
uint16_t x1434 = 44U;
static int16_t x1435 = -1;
uint64_t x1437 = 26464LLU;
volatile uint8_t x1439 = 2U;
volatile int32_t t191 = -480;
uint32_t x1449 = 197U;
static volatile int8_t x1450 = INT8_MAX;
uint8_t x1453 = 126U;
uint64_t x1456 = 132790394286830LLU;
volatile int32_t t193 = 258157607;
volatile int32_t x1464 = INT32_MIN;
volatile uint64_t t194 = UINT64_MAX;
int16_t x1470 = 73;
volatile uint32_t t195 = UINT32_MAX;
int64_t x1480 = 618489764130665384LL;
int32_t x1482 = -1;
static int64_t x1483 = INT64_MIN;


void f0(void) {
    	volatile int8_t x1 = 0;
	volatile int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	int64_t x4 = 346666399899561561LL;
	int32_t t0 = -68728584;

    t0 = (x1<<(x2==(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 0U;
	int32_t x6 = INT32_MAX;
	int64_t x7 = 2245578516326131LL;
	int64_t x8 = 13431443LL;
	volatile int32_t t1 = -3;

    t1 = (x5<<(x6==(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	static volatile int8_t x10 = INT8_MIN;
	int32_t t2 = -3;

    t2 = (x9<<(x10==(x11|x12)));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 8352;
	static uint32_t x18 = 19045U;
	int32_t x19 = INT32_MIN;
	volatile int16_t x20 = INT16_MIN;
	int32_t t3 = 6758;

    t3 = (x17<<(x18==(x19|x20)));

    if (t3 != 8352) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 3066565U;
	static volatile uint8_t x22 = 2U;
	int64_t x23 = INT64_MIN;
	int16_t x24 = INT16_MIN;
	static uint32_t t4 = 563801749U;

    t4 = (x21<<(x22==(x23|x24)));

    if (t4 != 3066565U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = -5;
	volatile int32_t t5 = 18;

    t5 = (x29<<(x30==(x31|x32)));

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x53 = UINT8_MAX;
	int16_t x54 = INT16_MAX;
	static int16_t x56 = INT16_MAX;
	static volatile int32_t t6 = 32600767;

    t6 = (x53<<(x54==(x55|x56)));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = 464344688024148537LL;
	static int8_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	int32_t t7 = 1490315;

    t7 = (x61<<(x62==(x63|x64)));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x65 = INT64_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int64_t x68 = -193463LL;

    t8 = (x65<<(x66==(x67|x68)));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x73 = 7220LLU;
	uint32_t x74 = 3719905U;
	uint32_t x75 = 1U;
	int8_t x76 = INT8_MIN;

    t9 = (x73<<(x74==(x75|x76)));

    if (t9 != 7220LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x89 = 336206LL;
	volatile int8_t x90 = 1;
	int32_t x92 = 514081;
	int64_t t10 = -1052407319184605LL;

    t10 = (x89<<(x90==(x91|x92)));

    if (t10 != 336206LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x97 = 4385087U;
	static uint32_t x99 = UINT32_MAX;
	static int32_t x100 = INT32_MAX;
	volatile uint32_t t11 = 400916022U;

    t11 = (x97<<(x98==(x99|x100)));

    if (t11 != 4385087U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x109 = UINT64_MAX;
	static volatile int32_t x110 = INT32_MAX;
	int16_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	uint64_t t12 = UINT64_MAX;

    t12 = (x109<<(x110==(x111|x112)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x113 = 14LL;
	int32_t x116 = -1;
	int64_t t13 = -3341506LL;

    t13 = (x113<<(x114==(x115|x116)));

    if (t13 != 14LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x117 = 1448651807U;
	uint64_t x119 = 39791111967977297LLU;
	static int64_t x120 = INT64_MIN;
	static uint32_t t14 = 120U;

    t14 = (x117<<(x118==(x119|x120)));

    if (t14 != 1448651807U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x121 = 6U;
	int16_t x122 = INT16_MAX;
	static volatile int32_t t15 = 527;

    t15 = (x121<<(x122==(x123|x124)));

    if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x129 = INT8_MAX;
	int32_t x131 = -10695;
	static int64_t x132 = INT64_MIN;

    t16 = (x129<<(x130==(x131|x132)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x133 = INT64_MAX;
	static int32_t x135 = -1961905;
	int16_t x136 = INT16_MIN;

    t17 = (x133<<(x134==(x135|x136)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x141 = INT8_MAX;
	volatile int32_t x142 = 136122;
	volatile int8_t x143 = INT8_MIN;
	int16_t x144 = -1;
	static int32_t t18 = -914707;

    t18 = (x141<<(x142==(x143|x144)));

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x157 = 796737U;
	static volatile uint32_t x158 = UINT32_MAX;
	int16_t x159 = 0;
	int8_t x160 = INT8_MIN;
	volatile uint32_t t19 = 27U;

    t19 = (x157<<(x158==(x159|x160)));

    if (t19 != 796737U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x166 = -445;
	int8_t x167 = -3;
	int64_t x168 = -1LL;
	volatile int32_t t20 = -248450;

    t20 = (x165<<(x166==(x167|x168)));

    if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x169 = 125553577LL;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MAX;
	int64_t t21 = 3128882LL;

    t21 = (x169<<(x170==(x171|x172)));

    if (t21 != 125553577LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x173 = 0U;
	static int16_t x175 = INT16_MIN;
	uint32_t x176 = 18439557U;
	volatile int32_t t22 = 213;

    t22 = (x173<<(x174==(x175|x176)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x177 = 22831892171553LLU;
	static int8_t x178 = 0;
	static int8_t x179 = INT8_MIN;
	volatile int64_t x180 = INT64_MAX;
	static uint64_t t23 = 38859653398LLU;

    t23 = (x177<<(x178==(x179|x180)));

    if (t23 != 22831892171553LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x181 = INT8_MAX;
	uint64_t x182 = UINT64_MAX;
	static int8_t x183 = 5;
	int32_t x184 = -6742883;

    t24 = (x181<<(x182==(x183|x184)));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x205 = 1U;
	uint8_t x206 = UINT8_MAX;
	int32_t x208 = -1;
	volatile int32_t t25 = 72537791;

    t25 = (x205<<(x206==(x207|x208)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x213 = 3759784230018192LLU;
	static volatile int32_t x214 = INT32_MIN;
	int32_t x215 = 526;
	int32_t x216 = INT32_MAX;
	volatile uint64_t t26 = 515063954270095044LLU;

    t26 = (x213<<(x214==(x215|x216)));

    if (t26 != 3759784230018192LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x217 = 5U;
	int32_t x218 = -26;
	int8_t x219 = -3;
	int64_t x220 = 445164574749807873LL;
	volatile int32_t t27 = -25;

    t27 = (x217<<(x218==(x219|x220)));

    if (t27 != 5) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x229 = 72U;
	int32_t x230 = -13582562;
	int64_t x231 = -1LL;
	int32_t x232 = -10017313;
	int32_t t28 = 133892756;

    t28 = (x229<<(x230==(x231|x232)));

    if (t28 != 72) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x233 = 4523U;
	volatile int32_t t29 = 51629;

    t29 = (x233<<(x234==(x235|x236)));

    if (t29 != 4523) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x241 = INT8_MAX;
	static int16_t x242 = INT16_MAX;
	int64_t x243 = -555328689268432LL;
	static uint8_t x244 = 62U;
	int32_t t30 = 1617409;

    t30 = (x241<<(x242==(x243|x244)));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x249 = UINT8_MAX;
	volatile uint32_t x250 = 24392287U;
	int16_t x251 = -1;
	int16_t x252 = -1;
	int32_t t31 = 471793;

    t31 = (x249<<(x250==(x251|x252)));

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x258 = 78U;
	uint8_t x259 = UINT8_MAX;
	static int64_t x260 = INT64_MIN;
	int32_t t32 = 21862060;

    t32 = (x257<<(x258==(x259|x260)));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x262 = -2600733220497LL;
	uint64_t x263 = 13687297470354LLU;
	int32_t t33 = 60;

    t33 = (x261<<(x262==(x263|x264)));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x291 = 1997052481265882LL;
	volatile int32_t t34 = 3;

    t34 = (x289<<(x290==(x291|x292)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x293 = 3U;
	int32_t x294 = INT32_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 130700830517677943LLU;
	volatile int32_t t35 = -1;

    t35 = (x293<<(x294==(x295|x296)));

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x297 = UINT64_MAX;
	uint8_t x299 = 10U;
	int8_t x300 = -1;

    t36 = (x297<<(x298==(x299|x300)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x301 = 1LL;
	static int32_t x302 = INT32_MIN;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	int64_t t37 = 3261190829604189LL;

    t37 = (x301<<(x302==(x303|x304)));

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x309 = 9U;
	static int32_t x311 = -3299;
	volatile int8_t x312 = INT8_MAX;
	static int32_t t38 = -887816;

    t38 = (x309<<(x310==(x311|x312)));

    if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x317 = 16U;
	volatile int32_t x318 = INT32_MIN;
	int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	volatile int32_t t39 = -905113953;

    t39 = (x317<<(x318==(x319|x320)));

    if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x321 = UINT16_MAX;
	int32_t x322 = -658;
	int16_t x323 = -1;
	int8_t x324 = INT8_MIN;

    t40 = (x321<<(x322==(x323|x324)));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x337 = 9683LLU;
	int64_t x338 = -1LL;
	int32_t x339 = INT32_MIN;
	volatile int16_t x340 = INT16_MAX;
	volatile uint64_t t41 = 116254570201LLU;

    t41 = (x337<<(x338==(x339|x340)));

    if (t41 != 9683LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x357 = 1;
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = -7135LL;
	int16_t x360 = INT16_MAX;
	volatile int32_t t42 = -109174;

    t42 = (x357<<(x358==(x359|x360)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x361 = 16271U;
	volatile int8_t x362 = -1;
	int32_t x364 = -1;
	int32_t t43 = 140;

    t43 = (x361<<(x362==(x363|x364)));

    if (t43 != 32542) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x377 = UINT64_MAX;
	volatile int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = 50U;
	int16_t x380 = INT16_MIN;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = (x377<<(x378==(x379|x380)));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x381 = INT16_MAX;
	int64_t x382 = 654328851045LL;
	static uint16_t x383 = 14678U;
	uint64_t x384 = 197051571154309LLU;
	static int32_t t45 = 3648854;

    t45 = (x381<<(x382==(x383|x384)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x385 = 3422;
	static volatile int16_t x388 = 1936;

    t46 = (x385<<(x386==(x387|x388)));

    if (t46 != 3422) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x389 = 3441U;
	int64_t x390 = 2094183LL;
	int32_t x391 = -1;
	uint8_t x392 = UINT8_MAX;

    t47 = (x389<<(x390==(x391|x392)));

    if (t47 != 3441) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x393 = 137;
	int8_t x394 = -4;
	int32_t x395 = INT32_MIN;
	volatile int32_t t48 = 132438449;

    t48 = (x393<<(x394==(x395|x396)));

    if (t48 != 137) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x397 = INT16_MAX;
	uint64_t x398 = 8909118487LLU;
	uint32_t x399 = UINT32_MAX;
	volatile int8_t x400 = INT8_MIN;
	int32_t t49 = -258;

    t49 = (x397<<(x398==(x399|x400)));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x405 = 1932894U;
	int16_t x406 = INT16_MAX;
	int8_t x407 = -1;
	static int64_t x408 = 344635LL;
	uint32_t t50 = 188U;

    t50 = (x405<<(x406==(x407|x408)));

    if (t50 != 1932894U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = 9284;
	uint32_t t51 = 1U;

    t51 = (x413<<(x414==(x415|x416)));

    if (t51 != 32272U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x417 = 27168LLU;
	uint8_t x418 = 21U;
	volatile int64_t x419 = -7976LL;
	int8_t x420 = 6;
	volatile uint64_t t52 = 250375690351202LLU;

    t52 = (x417<<(x418==(x419|x420)));

    if (t52 != 27168LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x421 = INT8_MAX;
	volatile int32_t x423 = INT32_MIN;
	int64_t x424 = -3571216136115180200LL;
	volatile int32_t t53 = -9;

    t53 = (x421<<(x422==(x423|x424)));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x437 = 158;
	int64_t x438 = -138754107123337821LL;
	int16_t x439 = INT16_MIN;
	int32_t t54 = 16843;

    t54 = (x437<<(x438==(x439|x440)));

    if (t54 != 158) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x441 = 62936U;
	uint8_t x443 = 0U;
	int64_t x444 = INT64_MIN;
	static volatile uint32_t t55 = 2970U;

    t55 = (x441<<(x442==(x443|x444)));

    if (t55 != 62936U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	static volatile uint64_t x446 = UINT64_MAX;
	volatile int8_t x447 = -1;
	uint8_t x448 = 12U;
	static uint64_t t56 = 1588931472600162LLU;

    t56 = (x445<<(x446==(x447|x448)));

    if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x469 = 21;
	uint64_t x470 = 4542986LLU;
	volatile int16_t x471 = INT16_MIN;
	int64_t x472 = -1LL;

    t57 = (x469<<(x470==(x471|x472)));

    if (t57 != 21) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x473 = INT8_MAX;
	uint32_t x474 = 905U;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t58 = -15971703;

    t58 = (x473<<(x474==(x475|x476)));

    if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x482 = INT32_MIN;
	static volatile int64_t x483 = -1LL;
	int64_t x484 = INT64_MAX;
	int32_t t59 = INT32_MAX;

    t59 = (x481<<(x482==(x483|x484)));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x497 = 5128;
	uint32_t x498 = 1794186U;
	uint32_t x499 = 60818U;
	int32_t x500 = -1;
	int32_t t60 = 24783;

    t60 = (x497<<(x498==(x499|x500)));

    if (t60 != 5128) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x506 = INT16_MIN;
	int8_t x507 = -1;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t61 = -61607125;

    t61 = (x505<<(x506==(x507|x508)));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x513 = 4256003557LLU;
	int32_t x514 = -956233897;
	int8_t x515 = INT8_MAX;
	int32_t x516 = INT32_MIN;
	uint64_t t62 = 3094LLU;

    t62 = (x513<<(x514==(x515|x516)));

    if (t62 != 4256003557LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x521 = 20903922;
	uint64_t x522 = 94LLU;
	static uint16_t x524 = UINT16_MAX;

    t63 = (x521<<(x522==(x523|x524)));

    if (t63 != 20903922) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x525 = UINT32_MAX;
	int32_t x526 = INT32_MIN;
	int32_t x527 = -1;
	int64_t x528 = INT64_MIN;
	static volatile uint32_t t64 = UINT32_MAX;

    t64 = (x525<<(x526==(x527|x528)));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x537 = INT16_MAX;
	int64_t x539 = -1LL;
	volatile uint32_t x540 = 1626U;

    t65 = (x537<<(x538==(x539|x540)));

    if (t65 != 65534) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x550 = INT32_MAX;
	int64_t x552 = 65351314646LL;
	uint32_t t66 = 225U;

    t66 = (x549<<(x550==(x551|x552)));

    if (t66 != 515171968U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x553 = UINT8_MAX;
	int32_t x554 = INT32_MIN;
	uint16_t x555 = UINT16_MAX;
	int8_t x556 = INT8_MAX;
	int32_t t67 = 14197;

    t67 = (x553<<(x554==(x555|x556)));

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x557 = UINT32_MAX;
	volatile int32_t x558 = -1;
	uint8_t x559 = 0U;
	uint8_t x560 = 56U;
	volatile uint32_t t68 = UINT32_MAX;

    t68 = (x557<<(x558==(x559|x560)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x565 = 21031000U;
	static int16_t x566 = -1;
	int32_t x568 = 3;
	uint32_t t69 = 315594072U;

    t69 = (x565<<(x566==(x567|x568)));

    if (t69 != 21031000U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x569 = INT16_MAX;
	static int16_t x570 = 11175;
	uint64_t x571 = UINT64_MAX;
	uint8_t x572 = 1U;
	volatile int32_t t70 = 238778;

    t70 = (x569<<(x570==(x571|x572)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x577 = 31U;
	volatile int16_t x578 = INT16_MAX;
	uint8_t x580 = 7U;

    t71 = (x577<<(x578==(x579|x580)));

    if (t71 != 31) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x581 = 7;
	volatile uint64_t x582 = 4460781207482973LLU;
	uint64_t x583 = 24014LLU;
	static int64_t x584 = -1LL;
	int32_t t72 = 1;

    t72 = (x581<<(x582==(x583|x584)));

    if (t72 != 7) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x589 = UINT16_MAX;
	uint32_t x590 = 758237U;
	uint8_t x591 = UINT8_MAX;
	volatile int32_t x592 = INT32_MAX;

    t73 = (x589<<(x590==(x591|x592)));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x593 = UINT16_MAX;
	static int32_t x594 = INT32_MIN;
	uint64_t x595 = 429337893LLU;
	volatile int16_t x596 = -1;
	volatile int32_t t74 = -137519868;

    t74 = (x593<<(x594==(x595|x596)));

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x597 = UINT8_MAX;
	uint32_t x599 = 50694783U;
	volatile int32_t t75 = 88671717;

    t75 = (x597<<(x598==(x599|x600)));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x601 = INT8_MAX;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	static int8_t x604 = INT8_MIN;
	int32_t t76 = -11;

    t76 = (x601<<(x602==(x603|x604)));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x605 = 3;
	volatile int8_t x606 = INT8_MIN;
	int64_t x607 = 1316950LL;
	uint16_t x608 = UINT16_MAX;
	int32_t t77 = 1;

    t77 = (x605<<(x606==(x607|x608)));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x610 = UINT32_MAX;
	int8_t x611 = INT8_MIN;
	volatile int32_t t78 = -3;

    t78 = (x609<<(x610==(x611|x612)));

    if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x637 = 205995408LLU;
	int16_t x638 = -1;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = 0;
	uint64_t t79 = 90585254755659LLU;

    t79 = (x637<<(x638==(x639|x640)));

    if (t79 != 205995408LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x645 = 344664;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = UINT16_MAX;
	static volatile int32_t t80 = -3574;

    t80 = (x645<<(x646==(x647|x648)));

    if (t80 != 344664) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x650 = UINT64_MAX;
	volatile int8_t x651 = -1;
	static int32_t x652 = -1;
	volatile uint64_t t81 = 4419775354LLU;

    t81 = (x649<<(x650==(x651|x652)));

    if (t81 != 10276LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x653 = INT16_MAX;
	uint64_t x654 = 98521045692LLU;
	int8_t x656 = INT8_MIN;
	static volatile int32_t t82 = 554105162;

    t82 = (x653<<(x654==(x655|x656)));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x661 = 3U;
	volatile uint16_t x662 = 7U;
	static volatile int32_t x663 = 1;

    t83 = (x661<<(x662==(x663|x664)));

    if (t83 != 3) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x669 = UINT64_MAX;
	static int64_t x670 = 355LL;
	volatile uint8_t x671 = 3U;
	static uint16_t x672 = UINT16_MAX;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = (x669<<(x670==(x671|x672)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x674 = -1LL;
	int32_t t85 = -222948501;

    t85 = (x673<<(x674==(x675|x676)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x682 = 1;
	static uint16_t x683 = 7U;
	uint16_t x684 = 21278U;

    t86 = (x681<<(x682==(x683|x684)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x685 = 0;
	uint16_t x686 = 292U;
	uint64_t x687 = 48104660439856LLU;
	uint16_t x688 = 3U;
	int32_t t87 = 11039;

    t87 = (x685<<(x686==(x687|x688)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x697 = 1895585933075647LLU;
	volatile int16_t x698 = INT16_MAX;
	volatile int32_t x699 = INT32_MAX;
	static int16_t x700 = -1;
	uint64_t t88 = 4908677LLU;

    t88 = (x697<<(x698==(x699|x700)));

    if (t88 != 1895585933075647LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x706 = -1;
	int16_t x707 = INT16_MAX;
	static volatile int32_t t89 = INT32_MAX;

    t89 = (x705<<(x706==(x707|x708)));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x709 = 481U;
	uint16_t x711 = 0U;
	int16_t x712 = -1;
	static volatile uint32_t t90 = 1443892U;

    t90 = (x709<<(x710==(x711|x712)));

    if (t90 != 481U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x721 = INT32_MAX;
	uint8_t x722 = 17U;
	int16_t x723 = INT16_MIN;
	int64_t x724 = -9483397LL;
	int32_t t91 = INT32_MAX;

    t91 = (x721<<(x722==(x723|x724)));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x725 = 213LL;
	int8_t x726 = INT8_MAX;
	uint32_t x727 = 1765454112U;
	static volatile int64_t x728 = INT64_MIN;

    t92 = (x725<<(x726==(x727|x728)));

    if (t92 != 213LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x729 = UINT8_MAX;
	int8_t x730 = INT8_MIN;
	static int32_t x731 = -2933;
	volatile uint32_t x732 = 6885U;

    t93 = (x729<<(x730==(x731|x732)));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x737 = 0U;
	static volatile int64_t x738 = -533045287LL;
	static uint64_t x739 = 838720086414056069LLU;
	static int16_t x740 = -5325;
	int32_t t94 = 0;

    t94 = (x737<<(x738==(x739|x740)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x741 = 19480U;
	volatile int16_t x742 = -1;
	uint16_t x743 = 96U;
	uint16_t x744 = 358U;
	int32_t t95 = -38709;

    t95 = (x741<<(x742==(x743|x744)));

    if (t95 != 19480) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x745 = 1439;
	static volatile int32_t x746 = 3939446;
	int32_t x747 = INT32_MIN;
	int8_t x748 = -1;
	int32_t t96 = -54760;

    t96 = (x745<<(x746==(x747|x748)));

    if (t96 != 1439) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x754 = 2647U;
	uint32_t x755 = 953U;
	volatile int8_t x756 = 0;
	static volatile uint32_t t97 = 5573596U;

    t97 = (x753<<(x754==(x755|x756)));

    if (t97 != 1243459330U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x757 = INT8_MAX;
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = -43310;
	int32_t x760 = -904;

    t98 = (x757<<(x758==(x759|x760)));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x761 = INT16_MAX;
	static uint8_t x762 = 85U;
	uint64_t x764 = 3703936643640269LLU;

    t99 = (x761<<(x762==(x763|x764)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x770 = INT32_MIN;
	int16_t x771 = -3;
	volatile int32_t t100 = 84802;

    t100 = (x769<<(x770==(x771|x772)));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x773 = 79024785575LLU;
	uint16_t x774 = 33U;
	uint32_t x775 = 5060263U;
	int64_t x776 = INT64_MIN;
	volatile uint64_t t101 = 53LLU;

    t101 = (x773<<(x774==(x775|x776)));

    if (t101 != 79024785575LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x777 = 80U;
	static int32_t x779 = -1;
	int8_t x780 = INT8_MAX;
	static uint32_t t102 = 7383U;

    t102 = (x777<<(x778==(x779|x780)));

    if (t102 != 160U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x789 = 0U;
	int16_t x790 = INT16_MIN;
	volatile int64_t x791 = -4233775458345777LL;
	int8_t x792 = 4;
	volatile int32_t t103 = 443;

    t103 = (x789<<(x790==(x791|x792)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x793 = 61U;
	int16_t x794 = INT16_MIN;
	int16_t x795 = 303;
	int32_t t104 = -63;

    t104 = (x793<<(x794==(x795|x796)));

    if (t104 != 61) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x797 = 25U;
	int64_t x798 = INT64_MIN;
	volatile int32_t x800 = -1;
	uint32_t t105 = 865U;

    t105 = (x797<<(x798==(x799|x800)));

    if (t105 != 25U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x801 = INT64_MAX;

    t106 = (x801<<(x802==(x803|x804)));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x805 = 769815897050384LLU;
	static int64_t x806 = INT64_MAX;
	uint16_t x807 = 1U;
	int64_t x808 = -1LL;
	volatile uint64_t t107 = 180255817421566341LLU;

    t107 = (x805<<(x806==(x807|x808)));

    if (t107 != 769815897050384LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x810 = INT32_MIN;
	uint16_t x811 = 1923U;
	static int32_t x812 = -1;
	int32_t t108 = 0;

    t108 = (x809<<(x810==(x811|x812)));

    if (t108 != 255) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x813 = 8;
	uint32_t x814 = UINT32_MAX;
	int8_t x815 = INT8_MIN;
	static uint8_t x816 = UINT8_MAX;

    t109 = (x813<<(x814==(x815|x816)));

    if (t109 != 16) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x822 = 4746714LLU;
	int32_t x824 = INT32_MIN;

    t110 = (x821<<(x822==(x823|x824)));

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x829 = 774;
	uint16_t x830 = 29U;
	static int64_t x832 = INT64_MIN;
	int32_t t111 = -2;

    t111 = (x829<<(x830==(x831|x832)));

    if (t111 != 774) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x838 = 1020;
	int16_t x839 = INT16_MAX;
	uint8_t x840 = 44U;

    t112 = (x837<<(x838==(x839|x840)));

    if (t112 != 164) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x849 = 4755U;
	uint32_t x850 = 51720U;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = -1LL;
	volatile int32_t t113 = -349169041;

    t113 = (x849<<(x850==(x851|x852)));

    if (t113 != 4755) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x853 = 847447LL;
	static int32_t x854 = INT32_MAX;
	int64_t x855 = INT64_MAX;
	int64_t x856 = INT64_MIN;
	volatile int64_t t114 = 16135026408215841LL;

    t114 = (x853<<(x854==(x855|x856)));

    if (t114 != 847447LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x857 = 106U;
	volatile int64_t x858 = INT64_MAX;
	uint32_t x859 = UINT32_MAX;
	int32_t t115 = 82;

    t115 = (x857<<(x858==(x859|x860)));

    if (t115 != 106) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x869 = 181338284LLU;
	static volatile uint8_t x870 = UINT8_MAX;
	uint16_t x871 = UINT16_MAX;
	uint64_t x872 = 109672904780539346LLU;
	volatile uint64_t t116 = 196614263378265591LLU;

    t116 = (x869<<(x870==(x871|x872)));

    if (t116 != 181338284LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x873 = UINT8_MAX;
	uint64_t x874 = 13128LLU;
	volatile int32_t x876 = -1;
	volatile int32_t t117 = 850;

    t117 = (x873<<(x874==(x875|x876)));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x878 = -1LL;
	int64_t x879 = INT64_MIN;
	uint32_t x880 = UINT32_MAX;
	volatile int32_t t118 = 11517792;

    t118 = (x877<<(x878==(x879|x880)));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x889 = 26565971;
	int32_t x890 = INT32_MIN;
	static uint64_t x891 = 298598680973781LLU;
	volatile int32_t t119 = -4101;

    t119 = (x889<<(x890==(x891|x892)));

    if (t119 != 26565971) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x893 = UINT8_MAX;
	int16_t x894 = -1;
	static int8_t x895 = INT8_MIN;
	int8_t x896 = INT8_MIN;
	int32_t t120 = -276288;

    t120 = (x893<<(x894==(x895|x896)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x897 = INT8_MAX;
	volatile int16_t x898 = 61;
	int16_t x900 = 49;
	volatile int32_t t121 = -4;

    t121 = (x897<<(x898==(x899|x900)));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x901 = 0U;
	static int32_t x903 = 1;
	int32_t t122 = -16271;

    t122 = (x901<<(x902==(x903|x904)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x905 = 240U;
	uint8_t x907 = 3U;
	static uint16_t x908 = 696U;
	volatile uint32_t t123 = 2U;

    t123 = (x905<<(x906==(x907|x908)));

    if (t123 != 240U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x925 = 48588741U;
	uint32_t x926 = UINT32_MAX;
	int16_t x927 = INT16_MAX;
	static volatile uint32_t t124 = 72U;

    t124 = (x925<<(x926==(x927|x928)));

    if (t124 != 97177482U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x933 = 84205099075LLU;
	uint32_t x935 = 1288205240U;
	uint64_t t125 = 4817386678668078LLU;

    t125 = (x933<<(x934==(x935|x936)));

    if (t125 != 84205099075LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x941 = 8115U;
	uint16_t x942 = 459U;
	int16_t x943 = INT16_MIN;
	int16_t x944 = -600;
	static volatile int32_t t126 = -1065274;

    t126 = (x941<<(x942==(x943|x944)));

    if (t126 != 8115) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x958 = -925;
	volatile uint16_t x959 = 328U;
	static volatile int16_t x960 = INT16_MIN;

    t127 = (x957<<(x958==(x959|x960)));

    if (t127 != 25173) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x963 = INT16_MIN;
	static int64_t x964 = -1LL;
	volatile uint64_t t128 = 128300LLU;

    t128 = (x961<<(x962==(x963|x964)));

    if (t128 != 20LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x965 = 3U;
	int16_t x966 = INT16_MIN;
	int8_t x967 = -1;
	int8_t x968 = -1;
	static int32_t t129 = 1218194;

    t129 = (x965<<(x966==(x967|x968)));

    if (t129 != 3) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x969 = 29U;
	uint8_t x971 = 0U;
	int32_t x972 = -1;
	static int32_t t130 = -89286707;

    t130 = (x969<<(x970==(x971|x972)));

    if (t130 != 58) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x974 = 3728032156074978331LLU;
	volatile int32_t t131 = 172;

    t131 = (x973<<(x974==(x975|x976)));

    if (t131 != 78) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x985 = 3U;
	uint16_t x986 = 6866U;
	int16_t x987 = 28;
	int32_t x988 = INT32_MIN;
	uint32_t t132 = 5U;

    t132 = (x985<<(x986==(x987|x988)));

    if (t132 != 3U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x1009 = UINT64_MAX;
	int8_t x1010 = -1;
	static int8_t x1011 = -1;
	int32_t x1012 = INT32_MIN;
	volatile uint64_t t133 = 7061900LLU;

    t133 = (x1009<<(x1010==(x1011|x1012)));

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1013 = UINT16_MAX;
	int64_t x1014 = 608LL;
	static int8_t x1016 = 16;
	volatile int32_t t134 = -14997783;

    t134 = (x1013<<(x1014==(x1015|x1016)));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x1029 = INT64_MAX;
	static uint8_t x1030 = UINT8_MAX;
	volatile int16_t x1031 = -4;
	int16_t x1032 = 13;

    t135 = (x1029<<(x1030==(x1031|x1032)));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1037 = 1709U;
	int8_t x1038 = -1;
	static uint32_t x1039 = 1591U;
	int16_t x1040 = 1;

    t136 = (x1037<<(x1038==(x1039|x1040)));

    if (t136 != 1709) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1043 = -2;
	static uint16_t x1044 = UINT16_MAX;
	volatile uint64_t t137 = 23566496637716LLU;

    t137 = (x1041<<(x1042==(x1043|x1044)));

    if (t137 != 27476296741542LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1045 = 18;
	int64_t x1046 = 278070984381140193LL;
	volatile int32_t x1047 = INT32_MAX;
	int16_t x1048 = -1;

    t138 = (x1045<<(x1046==(x1047|x1048)));

    if (t138 != 18) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1061 = INT16_MAX;
	static int64_t x1062 = 60263023629414965LL;
	int32_t x1063 = -18802457;
	static volatile int8_t x1064 = INT8_MAX;
	int32_t t139 = 1;

    t139 = (x1061<<(x1062==(x1063|x1064)));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1065 = UINT32_MAX;
	int32_t x1068 = -1;
	uint32_t t140 = UINT32_MAX;

    t140 = (x1065<<(x1066==(x1067|x1068)));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1077 = INT64_MAX;
	static int16_t x1078 = -2;
	int32_t x1079 = -47226;
	uint8_t x1080 = UINT8_MAX;
	volatile int64_t t141 = INT64_MAX;

    t141 = (x1077<<(x1078==(x1079|x1080)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1081 = 2582;
	int32_t x1082 = -1950313;
	int8_t x1083 = 0;
	uint64_t x1084 = UINT64_MAX;
	volatile int32_t t142 = -1;

    t142 = (x1081<<(x1082==(x1083|x1084)));

    if (t142 != 2582) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x1085 = 33204321679LL;
	int16_t x1086 = INT16_MAX;
	int32_t x1087 = -1;
	int16_t x1088 = 0;
	int64_t t143 = 404965691710LL;

    t143 = (x1085<<(x1086==(x1087|x1088)));

    if (t143 != 33204321679LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1089 = INT64_MAX;
	volatile uint64_t x1090 = 91809563LLU;
	volatile uint8_t x1091 = 4U;
	volatile int8_t x1092 = INT8_MAX;
	volatile int64_t t144 = INT64_MAX;

    t144 = (x1089<<(x1090==(x1091|x1092)));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1097 = 41;
	uint8_t x1099 = 13U;
	uint64_t x1100 = 1650071384LLU;
	volatile int32_t t145 = 0;

    t145 = (x1097<<(x1098==(x1099|x1100)));

    if (t145 != 41) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1101 = 6U;
	static int32_t x1102 = INT32_MIN;
	static int32_t x1103 = -6;
	uint64_t x1104 = 14LLU;
	volatile int32_t t146 = 3;

    t146 = (x1101<<(x1102==(x1103|x1104)));

    if (t146 != 6) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1109 = 20719U;
	volatile int16_t x1110 = -1;
	int8_t x1111 = INT8_MIN;
	uint32_t x1112 = 30970U;
	static volatile uint32_t t147 = 810741U;

    t147 = (x1109<<(x1110==(x1111|x1112)));

    if (t147 != 20719U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x1117 = 254U;
	static int64_t x1118 = INT64_MIN;
	static uint8_t x1119 = 58U;
	volatile int16_t x1120 = INT16_MIN;
	uint32_t t148 = 11073987U;

    t148 = (x1117<<(x1118==(x1119|x1120)));

    if (t148 != 254U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1121 = 13U;
	int64_t x1122 = -1LL;
	uint8_t x1123 = UINT8_MAX;
	volatile int64_t x1124 = INT64_MIN;
	volatile int32_t t149 = 539;

    t149 = (x1121<<(x1122==(x1123|x1124)));

    if (t149 != 13) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1129 = UINT32_MAX;
	static uint16_t x1130 = 0U;
	int16_t x1131 = INT16_MAX;
	static int64_t x1132 = -45799LL;
	volatile uint32_t t150 = UINT32_MAX;

    t150 = (x1129<<(x1130==(x1131|x1132)));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1149 = UINT32_MAX;
	uint8_t x1150 = 51U;
	static int8_t x1151 = -61;

    t151 = (x1149<<(x1150==(x1151|x1152)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x1161 = 1243U;
	volatile int32_t x1162 = -1;
	static uint64_t x1163 = UINT64_MAX;
	int32_t t152 = 895;

    t152 = (x1161<<(x1162==(x1163|x1164)));

    if (t152 != 2486) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x1169 = 4;
	static uint16_t x1170 = 14U;
	volatile int64_t x1171 = INT64_MIN;
	volatile int64_t x1172 = INT64_MIN;
	volatile int32_t t153 = 97;

    t153 = (x1169<<(x1170==(x1171|x1172)));

    if (t153 != 4) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1173 = INT64_MAX;
	int8_t x1174 = INT8_MIN;
	uint16_t x1175 = 21653U;
	uint16_t x1176 = 10979U;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x1173<<(x1174==(x1175|x1176)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x1181 = INT32_MAX;
	static int8_t x1182 = 1;
	volatile uint32_t x1183 = 37U;
	int64_t x1184 = INT64_MIN;
	int32_t t155 = INT32_MAX;

    t155 = (x1181<<(x1182==(x1183|x1184)));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x1189 = 91U;
	static uint16_t x1190 = 1698U;
	int32_t x1191 = INT32_MAX;
	int16_t x1192 = 0;

    t156 = (x1189<<(x1190==(x1191|x1192)));

    if (t156 != 91) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1205 = UINT32_MAX;
	int32_t x1206 = INT32_MAX;
	int16_t x1207 = -1;
	static int16_t x1208 = 1774;
	uint32_t t157 = UINT32_MAX;

    t157 = (x1205<<(x1206==(x1207|x1208)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x1209 = 209949U;
	volatile uint64_t x1211 = UINT64_MAX;
	int16_t x1212 = INT16_MIN;
	uint32_t t158 = 1966U;

    t158 = (x1209<<(x1210==(x1211|x1212)));

    if (t158 != 209949U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x1221 = UINT8_MAX;
	static uint32_t x1222 = 16905U;
	volatile int8_t x1223 = INT8_MIN;
	static int16_t x1224 = INT16_MIN;
	volatile int32_t t159 = -3138385;

    t159 = (x1221<<(x1222==(x1223|x1224)));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1225 = INT16_MAX;
	int32_t x1228 = INT32_MIN;

    t160 = (x1225<<(x1226==(x1227|x1228)));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1230 = 804653860U;
	uint64_t x1232 = 1702700418103863374LLU;
	int32_t t161 = -11891;

    t161 = (x1229<<(x1230==(x1231|x1232)));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x1233 = INT64_MAX;
	static volatile int32_t x1234 = INT32_MAX;
	int8_t x1235 = 1;
	volatile int8_t x1236 = INT8_MIN;

    t162 = (x1233<<(x1234==(x1235|x1236)));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1242 = INT32_MAX;
	volatile uint8_t x1243 = UINT8_MAX;
	int64_t x1244 = INT64_MIN;
	volatile int32_t t163 = INT32_MAX;

    t163 = (x1241<<(x1242==(x1243|x1244)));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1249 = INT8_MAX;
	volatile uint32_t x1250 = 152109855U;
	uint16_t x1251 = 1U;
	int64_t x1252 = 1577135397862309287LL;

    t164 = (x1249<<(x1250==(x1251|x1252)));

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1254 = INT32_MIN;
	int16_t x1255 = INT16_MIN;

    t165 = (x1253<<(x1254==(x1255|x1256)));

    if (t165 != 1971141971110LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1261 = UINT16_MAX;
	static uint8_t x1262 = 1U;
	uint32_t x1263 = 117U;
	static int8_t x1264 = INT8_MIN;
	int32_t t166 = -20372981;

    t166 = (x1261<<(x1262==(x1263|x1264)));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1278 = UINT64_MAX;
	static int32_t x1279 = 3469753;
	volatile int32_t t167 = 60;

    t167 = (x1277<<(x1278==(x1279|x1280)));

    if (t167 != 282) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1281 = 14860700LLU;
	uint64_t x1283 = 187864128344870213LLU;
	int32_t x1284 = INT32_MIN;

    t168 = (x1281<<(x1282==(x1283|x1284)));

    if (t168 != 14860700LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1285 = 18466U;
	volatile int32_t x1286 = -1;
	int32_t x1287 = -30;
	uint16_t x1288 = 3350U;

    t169 = (x1285<<(x1286==(x1287|x1288)));

    if (t169 != 18466U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x1289 = 28396708U;
	int32_t x1290 = INT32_MIN;
	uint8_t x1291 = UINT8_MAX;
	int16_t x1292 = INT16_MAX;

    t170 = (x1289<<(x1290==(x1291|x1292)));

    if (t170 != 28396708U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1293 = UINT8_MAX;
	volatile int32_t x1294 = -1;
	int8_t x1295 = 6;
	uint64_t x1296 = 229923210672388550LLU;
	volatile int32_t t171 = -1989;

    t171 = (x1293<<(x1294==(x1295|x1296)));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1301 = 1U;
	int8_t x1302 = 1;
	int16_t x1303 = INT16_MAX;
	int64_t x1304 = 11651458LL;
	static int32_t t172 = -60773014;

    t172 = (x1301<<(x1302==(x1303|x1304)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1309 = 12U;
	int8_t x1310 = 46;
	volatile int32_t t173 = -1577;

    t173 = (x1309<<(x1310==(x1311|x1312)));

    if (t173 != 12) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x1317 = 74416855984988944LLU;
	int32_t x1318 = INT32_MIN;
	int8_t x1319 = -1;
	uint16_t x1320 = 62U;
	volatile uint64_t t174 = 993922809966LLU;

    t174 = (x1317<<(x1318==(x1319|x1320)));

    if (t174 != 74416855984988944LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x1329 = 2U;
	static int64_t x1330 = INT64_MAX;
	int16_t x1331 = INT16_MIN;
	volatile uint64_t x1332 = 305747378456975852LLU;
	volatile int32_t t175 = -909;

    t175 = (x1329<<(x1330==(x1331|x1332)));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1333 = 63263602732LLU;
	int64_t x1334 = -1LL;
	int16_t x1335 = -1;
	uint8_t x1336 = 15U;
	volatile uint64_t t176 = 6LLU;

    t176 = (x1333<<(x1334==(x1335|x1336)));

    if (t176 != 126527205464LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1337 = 1;
	static int32_t x1338 = -322168;
	int16_t x1339 = -3;
	int32_t x1340 = INT32_MIN;
	volatile int32_t t177 = 20161;

    t177 = (x1337<<(x1338==(x1339|x1340)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1341 = 41U;
	volatile int64_t x1342 = 629365941LL;
	int8_t x1343 = INT8_MAX;
	static int8_t x1344 = INT8_MIN;
	int32_t t178 = -116811472;

    t178 = (x1341<<(x1342==(x1343|x1344)));

    if (t178 != 41) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1345 = 653308515682037121LL;
	int8_t x1346 = INT8_MIN;
	int64_t x1348 = INT64_MIN;

    t179 = (x1345<<(x1346==(x1347|x1348)));

    if (t179 != 653308515682037121LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1349 = INT16_MAX;
	uint64_t x1350 = 1LLU;
	int8_t x1351 = -1;
	int32_t x1352 = INT32_MIN;
	volatile int32_t t180 = 1367073;

    t180 = (x1349<<(x1350==(x1351|x1352)));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1357 = UINT32_MAX;
	int64_t x1358 = -1002400055LL;
	int32_t x1359 = INT32_MIN;

    t181 = (x1357<<(x1358==(x1359|x1360)));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1377 = 12053021449358LL;
	volatile int64_t x1378 = INT64_MAX;
	int8_t x1379 = INT8_MIN;
	volatile uint32_t x1380 = 30813U;
	static volatile int64_t t182 = -937500LL;

    t182 = (x1377<<(x1378==(x1379|x1380)));

    if (t182 != 12053021449358LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1381 = INT16_MAX;
	uint16_t x1382 = UINT16_MAX;
	volatile int64_t x1384 = INT64_MAX;
	volatile int32_t t183 = 4666;

    t183 = (x1381<<(x1382==(x1383|x1384)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1385 = 590395;
	int16_t x1386 = -1;
	static volatile uint8_t x1387 = 11U;
	int32_t x1388 = -1;
	int32_t t184 = -234;

    t184 = (x1385<<(x1386==(x1387|x1388)));

    if (t184 != 1180790) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1406 = 1LLU;
	volatile int32_t t185 = -39079;

    t185 = (x1405<<(x1406==(x1407|x1408)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1409 = INT16_MAX;
	volatile uint8_t x1410 = 46U;
	uint16_t x1411 = 9723U;
	volatile uint16_t x1412 = 14505U;
	volatile int32_t t186 = -109506896;

    t186 = (x1409<<(x1410==(x1411|x1412)));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1413 = 119LLU;
	int8_t x1415 = -5;
	uint64_t x1416 = 187LLU;
	uint64_t t187 = 44132655548398580LLU;

    t187 = (x1413<<(x1414==(x1415|x1416)));

    if (t187 != 119LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1430 = INT32_MIN;
	int8_t x1431 = INT8_MIN;
	uint16_t x1432 = 741U;
	uint32_t t188 = UINT32_MAX;

    t188 = (x1429<<(x1430==(x1431|x1432)));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1433 = 190U;
	int8_t x1436 = INT8_MAX;
	int32_t t189 = -15161;

    t189 = (x1433<<(x1434==(x1435|x1436)));

    if (t189 != 190) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1438 = 2073;
	uint32_t x1440 = 3501281U;
	uint64_t t190 = 14287LLU;

    t190 = (x1437<<(x1438==(x1439|x1440)));

    if (t190 != 26464LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1441 = 38U;
	uint64_t x1442 = 76681075797604LLU;
	uint32_t x1443 = 964382U;
	int16_t x1444 = INT16_MIN;

    t191 = (x1441<<(x1442==(x1443|x1444)));

    if (t191 != 38) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1451 = UINT64_MAX;
	int64_t x1452 = INT64_MIN;
	volatile uint32_t t192 = 20U;

    t192 = (x1449<<(x1450==(x1451|x1452)));

    if (t192 != 197U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1454 = -43766;
	uint32_t x1455 = UINT32_MAX;

    t193 = (x1453<<(x1454==(x1455|x1456)));

    if (t193 != 126) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1461 = UINT64_MAX;
	static int16_t x1462 = INT16_MIN;
	int32_t x1463 = INT32_MAX;

    t194 = (x1461<<(x1462==(x1463|x1464)));

    if (t194 != UINT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1469 = UINT32_MAX;
	int32_t x1471 = -29511;
	uint64_t x1472 = 632296221878862430LLU;

    t195 = (x1469<<(x1470==(x1471|x1472)));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1477 = 5221U;
	uint32_t x1478 = 60734U;
	uint32_t x1479 = 1267157U;
	volatile uint32_t t196 = 2561640U;

    t196 = (x1477<<(x1478==(x1479|x1480)));

    if (t196 != 5221U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1481 = 123536997U;
	uint16_t x1484 = 3439U;
	volatile uint32_t t197 = 11U;

    t197 = (x1481<<(x1482==(x1483|x1484)));

    if (t197 != 123536997U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1489 = 38U;
	int32_t x1490 = INT32_MAX;
	int64_t x1491 = INT64_MIN;
	int32_t x1492 = 35762599;
	int32_t t198 = 199;

    t198 = (x1489<<(x1490==(x1491|x1492)));

    if (t198 != 38) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1497 = UINT8_MAX;
	uint64_t x1498 = 45LLU;
	static volatile uint16_t x1499 = UINT16_MAX;
	static int64_t x1500 = INT64_MIN;
	int32_t t199 = 750425934;

    t199 = (x1497<<(x1498==(x1499|x1500)));

    if (t199 != 255) { NG(); } else { ; }
	
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

