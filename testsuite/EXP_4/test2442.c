
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

int32_t x10 = INT32_MIN;
uint16_t x15 = 52U;
int64_t x30 = INT64_MIN;
uint32_t x37 = UINT32_MAX;
uint64_t x38 = 2919824600144331693LLU;
int32_t t7 = -28758;
volatile int32_t t8 = -637;
volatile uint64_t x58 = 1696539035373LLU;
uint8_t x62 = 12U;
int32_t t11 = 290746;
int64_t x75 = 198179LL;
uint64_t t13 = 49354739895LLU;
static int32_t x85 = 14778046;
int16_t x91 = INT16_MIN;
static volatile int32_t t16 = -182636;
int32_t x101 = 1285;
static uint32_t x104 = UINT32_MAX;
int8_t x146 = INT8_MIN;
int16_t x147 = INT16_MAX;
static uint64_t t21 = 5629115LLU;
static int32_t x167 = -1;
volatile int8_t x173 = 2;
volatile int64_t x175 = -3497355268373291LL;
int32_t t25 = 3;
volatile int32_t x178 = 31;
uint32_t x186 = 64240U;
int64_t x187 = -47615608702544473LL;
int32_t x188 = INT32_MIN;
int8_t x214 = -10;
static uint16_t x216 = 52U;
int8_t x219 = INT8_MIN;
uint8_t x220 = 8U;
static volatile int32_t t31 = 29439;
int16_t x232 = -115;
uint8_t x235 = 18U;
volatile int32_t t34 = -702807;
volatile int32_t t35 = -13;
volatile int8_t x260 = INT8_MAX;
uint8_t x265 = UINT8_MAX;
int32_t x266 = INT32_MIN;
static int16_t x268 = INT16_MIN;
volatile int32_t t38 = 1;
uint32_t x273 = UINT32_MAX;
volatile int64_t x277 = 29LL;
uint8_t x290 = 26U;
uint32_t x292 = 58310774U;
int64_t x300 = -53LL;
static uint32_t t42 = 51U;
uint8_t x321 = 3U;
int32_t x322 = INT32_MIN;
volatile int32_t t47 = 57171;
static int32_t t49 = -1;
int8_t x368 = 3;
static volatile int32_t t50 = -31340;
uint16_t x390 = 3U;
int8_t x391 = -1;
uint8_t x401 = UINT8_MAX;
int32_t x403 = INT32_MIN;
int8_t x410 = INT8_MIN;
volatile int64_t x411 = -1LL;
static uint64_t t55 = 11311406348298672LLU;
uint64_t x416 = 464084438545LLU;
int32_t t56 = -61;
static volatile int64_t x419 = INT64_MIN;
volatile uint32_t t57 = 0U;
static uint32_t x434 = 422U;
uint64_t x453 = UINT64_MAX;
static int32_t x454 = INT32_MIN;
int64_t x459 = INT64_MIN;
volatile int8_t x466 = -1;
static uint32_t t61 = UINT32_MAX;
volatile uint8_t x482 = 99U;
uint16_t x484 = 1047U;
int64_t x488 = INT64_MIN;
int64_t x489 = 1915LL;
int8_t x504 = INT8_MIN;
uint64_t x551 = UINT64_MAX;
uint64_t x552 = 0LLU;
volatile uint64_t x561 = 3LLU;
int8_t x562 = INT8_MIN;
uint16_t x570 = 1U;
uint8_t x573 = 1U;
int16_t x588 = INT16_MIN;
static volatile uint32_t t78 = 10136U;
volatile int32_t x602 = 15372939;
int32_t t80 = 7076;
uint64_t x616 = UINT64_MAX;
static int16_t x620 = INT16_MAX;
uint8_t x621 = 65U;
int32_t x623 = INT32_MIN;
volatile int32_t x624 = INT32_MAX;
uint8_t x629 = 29U;
volatile uint64_t x633 = 390LLU;
int64_t x634 = INT64_MIN;
uint8_t x643 = UINT8_MAX;
static volatile int64_t t90 = -3062827082642829932LL;
uint32_t x654 = 115935U;
int64_t x670 = -1LL;
int64_t x672 = -1LL;
int64_t x679 = -1LL;
volatile uint64_t x683 = 6856505227723LLU;
int32_t x696 = -1;
uint64_t x701 = UINT64_MAX;
volatile int32_t x703 = INT32_MIN;
int32_t x704 = -12427;
uint64_t x705 = 27826602847359LLU;
uint16_t x711 = 409U;
int64_t x712 = 41LL;
uint32_t x722 = 2U;
volatile uint16_t x733 = 2482U;
uint64_t x734 = 362142583LLU;
int32_t t105 = -34;
uint64_t x745 = 314265LLU;
volatile uint64_t t107 = 414LLU;
int64_t x750 = -1LL;
int16_t x753 = 4;
uint16_t x754 = 3U;
uint32_t x756 = UINT32_MAX;
volatile int32_t t110 = -1;
volatile uint32_t t112 = 4316486U;
uint32_t x789 = 178076U;
volatile uint32_t x791 = 102452206U;
uint32_t x813 = 1599030444U;
int8_t x814 = INT8_MIN;
int64_t x816 = INT64_MIN;
uint8_t x827 = UINT8_MAX;
int16_t x833 = INT16_MAX;
static int64_t x836 = INT64_MAX;
int8_t x852 = INT8_MIN;
int64_t x854 = -25258645744LL;
int64_t x862 = 0LL;
static uint16_t x900 = 46U;
uint16_t x904 = 44U;
volatile int32_t t124 = 13;
volatile uint8_t x908 = 112U;
int32_t x921 = 276108449;
int32_t x924 = 150361;
static volatile uint64_t x926 = UINT64_MAX;
uint32_t x941 = 1087U;
uint64_t x946 = 87601911586LLU;
int32_t t129 = 606648;
uint32_t x949 = 5929U;
static uint8_t x957 = 1U;
int64_t x959 = 51259776318LL;
int32_t t131 = 63;
static uint64_t x965 = 58351LLU;
volatile int16_t x967 = INT16_MAX;
uint64_t t133 = 2160472036449023945LLU;
static uint16_t x985 = 21U;
int32_t x987 = INT32_MIN;
int32_t t137 = 28;
uint8_t x993 = 56U;
uint64_t x1001 = 627760LLU;
uint16_t x1024 = 5369U;
volatile int32_t t144 = 6;
int64_t x1062 = INT64_MIN;
volatile uint8_t x1063 = 3U;
volatile int32_t x1071 = INT32_MIN;
static uint64_t t146 = 451LLU;
uint16_t x1073 = UINT16_MAX;
int32_t t147 = 9;
int64_t x1096 = -1LL;
int32_t t150 = 35881;
static volatile int32_t t151 = -517801;
int32_t x1109 = 434325;
volatile int8_t x1110 = INT8_MAX;
static int32_t t153 = 584;
static int16_t x1125 = 6087;
static int16_t x1130 = -1;
uint32_t x1131 = 1613U;
uint64_t x1142 = 61811844630108LLU;
int8_t x1144 = -20;
volatile uint32_t t158 = 4775U;
uint64_t x1179 = 3985LLU;
int16_t x1185 = 1;
volatile uint8_t x1203 = 0U;
int32_t t164 = -772494;
volatile uint16_t x1218 = UINT16_MAX;
volatile int32_t t167 = -451744;
uint32_t x1249 = 25U;
uint32_t x1254 = UINT32_MAX;
int64_t x1262 = -1LL;
int16_t x1287 = 450;
uint32_t x1294 = UINT32_MAX;
uint8_t x1295 = 1U;
int16_t x1304 = -1;
static int32_t t180 = -164;
int32_t x1362 = -1;
uint16_t x1371 = UINT16_MAX;
static int64_t x1372 = -136283283849LL;
uint16_t x1373 = 12182U;
uint32_t t184 = 78894654U;
uint8_t x1392 = 41U;
volatile int64_t x1397 = 104LL;
static volatile uint8_t x1422 = 8U;
static int32_t t188 = -1095;
volatile uint32_t x1425 = 10673031U;
volatile int8_t x1430 = -1;
volatile int16_t x1431 = -1;
static int32_t x1432 = INT32_MAX;
static int16_t x1435 = -14986;
static volatile uint32_t t191 = 2391U;
uint64_t x1440 = 13343395243554569LLU;
volatile uint32_t x1449 = UINT32_MAX;
int32_t x1451 = -243103;
int32_t x1455 = -1;
uint8_t x1478 = UINT8_MAX;
volatile int32_t t196 = -6763;
static volatile int32_t t197 = 0;
int16_t x1505 = INT16_MAX;
int32_t x1508 = INT32_MAX;
volatile int32_t t198 = -22846381;
uint64_t x1515 = 212392821340LLU;


void f0(void) {
    	volatile int8_t x9 = INT8_MAX;
	volatile uint8_t x11 = 3U;
	int64_t x12 = 15LL;
	static volatile int32_t t0 = 28960480;

    t0 = (x9<<(x10!=(x11|x12)));

    if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x13 = UINT8_MAX;
	static int32_t x14 = -1;
	static int8_t x16 = -1;
	volatile int32_t t1 = 464;

    t1 = (x13<<(x14!=(x15|x16)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x25 = INT16_MAX;
	uint32_t x26 = 3U;
	int16_t x27 = -2833;
	int8_t x28 = INT8_MIN;
	int32_t t2 = 453545;

    t2 = (x25<<(x26!=(x27|x28)));

    if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x29 = UINT64_MAX;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	uint64_t t3 = 50LLU;

    t3 = (x29<<(x30!=(x31|x32)));

    if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x33 = 67343349543LLU;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 1530640U;
	static uint16_t x36 = 85U;
	volatile uint64_t t4 = 246072341072247LLU;

    t4 = (x33<<(x34!=(x35|x36)));

    if (t4 != 134686699086LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x39 = INT16_MIN;
	uint64_t x40 = UINT64_MAX;
	uint32_t t5 = 62205U;

    t5 = (x37<<(x38!=(x39|x40)));

    if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x41 = 8464U;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MIN;
	volatile int8_t x44 = 26;
	volatile uint32_t t6 = 206805714U;

    t6 = (x41<<(x42!=(x43|x44)));

    if (t6 != 16928U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = 28U;
	volatile int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	static volatile uint64_t x48 = UINT64_MAX;

    t7 = (x45<<(x46!=(x47|x48)));

    if (t7 != 56) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x53 = 21796U;
	static int8_t x54 = INT8_MAX;
	static uint32_t x55 = 875U;
	uint16_t x56 = UINT16_MAX;

    t8 = (x53<<(x54!=(x55|x56)));

    if (t8 != 43592) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x57 = 2U;
	int32_t x59 = -1;
	static int16_t x60 = INT16_MAX;
	int32_t t9 = -376851642;

    t9 = (x57<<(x58!=(x59|x60)));

    if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x61 = 8281U;
	int8_t x63 = 37;
	int16_t x64 = -29;
	int32_t t10 = -246492021;

    t10 = (x61<<(x62!=(x63|x64)));

    if (t10 != 16562) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x65 = 0;
	int64_t x66 = 1587155525728979407LL;
	static uint32_t x67 = 159U;
	volatile int32_t x68 = INT32_MIN;

    t11 = (x65<<(x66!=(x67|x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x73 = 0U;
	int8_t x74 = INT8_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	static volatile int32_t t12 = -11388;

    t12 = (x73<<(x74!=(x75|x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MAX;
	volatile int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;

    t13 = (x77<<(x78!=(x79|x80)));

    if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x86 = -1;
	int32_t x87 = -2751;
	static int16_t x88 = 11736;
	int32_t t14 = -1530749;

    t14 = (x85<<(x86!=(x87|x88)));

    if (t14 != 29556092) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x89 = UINT16_MAX;
	uint16_t x90 = 136U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t15 = 839974308;

    t15 = (x89<<(x90!=(x91|x92)));

    if (t15 != 131070) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x97 = 8139;
	int16_t x98 = INT16_MIN;
	uint8_t x99 = 1U;
	int8_t x100 = -1;

    t16 = (x97<<(x98!=(x99|x100)));

    if (t16 != 16278) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 12U;
	int32_t t17 = -12;

    t17 = (x101<<(x102!=(x103|x104)));

    if (t17 != 2570) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x113 = UINT16_MAX;
	uint64_t x114 = 60LLU;
	int32_t x115 = -1;
	int64_t x116 = INT64_MIN;
	int32_t t18 = -67;

    t18 = (x113<<(x114!=(x115|x116)));

    if (t18 != 131070) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile uint16_t x122 = 7049U;
	int32_t x123 = INT32_MIN;
	static int16_t x124 = -1098;
	volatile uint64_t t19 = 163414LLU;

    t19 = (x121<<(x122!=(x123|x124)));

    if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x133 = 45U;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	static int32_t t20 = 0;

    t20 = (x133<<(x134!=(x135|x136)));

    if (t20 != 90) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x145 = 23LLU;
	uint16_t x148 = 269U;

    t21 = (x145<<(x146!=(x147|x148)));

    if (t21 != 46LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x157 = 7U;
	int64_t x158 = -2394673LL;
	static uint32_t x159 = 1226U;
	uint8_t x160 = UINT8_MAX;
	int32_t t22 = -1;

    t22 = (x157<<(x158!=(x159|x160)));

    if (t22 != 14) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x161 = 30815036271127484LLU;
	volatile int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	int32_t x164 = -1;
	uint64_t t23 = 1208LLU;

    t23 = (x161<<(x162!=(x163|x164)));

    if (t23 != 30815036271127484LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x165 = 8113961U;
	int64_t x166 = -1LL;
	volatile uint16_t x168 = 1320U;
	uint32_t t24 = 3U;

    t24 = (x165<<(x166!=(x167|x168)));

    if (t24 != 8113961U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x174 = UINT16_MAX;
	uint64_t x176 = 707199023LLU;

    t25 = (x173<<(x174!=(x175|x176)));

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x177 = 1LLU;
	static uint64_t x179 = 0LLU;
	int32_t x180 = INT32_MIN;
	uint64_t t26 = 65600353170758LLU;

    t26 = (x177<<(x178!=(x179|x180)));

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x185 = 0;
	int32_t t27 = 24476280;

    t27 = (x185<<(x186!=(x187|x188)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x209 = 1;
	int64_t x210 = 44805828990648620LL;
	uint32_t x211 = 29785U;
	int64_t x212 = INT64_MIN;
	int32_t t28 = 44;

    t28 = (x209<<(x210!=(x211|x212)));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x213 = 252U;
	volatile int64_t x215 = INT64_MAX;
	static int32_t t29 = -111069;

    t29 = (x213<<(x214!=(x215|x216)));

    if (t29 != 504) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x217 = 2067785U;
	static int16_t x218 = -13;
	volatile uint32_t t30 = 15080738U;

    t30 = (x217<<(x218!=(x219|x220)));

    if (t30 != 4135570U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x221 = UINT16_MAX;
	int64_t x222 = INT64_MIN;
	uint8_t x223 = UINT8_MAX;
	volatile int16_t x224 = INT16_MIN;

    t31 = (x221<<(x222!=(x223|x224)));

    if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x229 = 14829238LL;
	int16_t x230 = INT16_MAX;
	int64_t x231 = INT64_MAX;
	static int64_t t32 = -1LL;

    t32 = (x229<<(x230!=(x231|x232)));

    if (t32 != 29658476LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x233 = INT16_MAX;
	volatile int32_t x234 = INT32_MAX;
	static uint8_t x236 = 52U;
	volatile int32_t t33 = -13;

    t33 = (x233<<(x234!=(x235|x236)));

    if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x245 = UINT8_MAX;
	int32_t x246 = -51242305;
	static int8_t x247 = -1;
	uint8_t x248 = 110U;

    t34 = (x245<<(x246!=(x247|x248)));

    if (t34 != 510) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x249 = 52U;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 15287U;

    t35 = (x249<<(x250!=(x251|x252)));

    if (t35 != 104) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x253 = INT16_MAX;
	uint32_t x254 = 762U;
	static uint8_t x255 = 3U;
	static int64_t x256 = -1LL;
	volatile int32_t t36 = -108373859;

    t36 = (x253<<(x254!=(x255|x256)));

    if (t36 != 65534) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x257 = UINT32_MAX;
	volatile int64_t x258 = -4199277543LL;
	uint64_t x259 = 21919812526830LLU;
	volatile uint32_t t37 = 5U;

    t37 = (x257<<(x258!=(x259|x260)));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x267 = INT8_MIN;

    t38 = (x265<<(x266!=(x267|x268)));

    if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x274 = 3048;
	int8_t x275 = 0;
	int32_t x276 = 22;
	static uint32_t t39 = 6U;

    t39 = (x273<<(x274!=(x275|x276)));

    if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = -1;
	static int32_t x280 = -1;
	static int64_t t40 = 2022604LL;

    t40 = (x277<<(x278!=(x279|x280)));

    if (t40 != 58LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x289 = INT16_MAX;
	uint64_t x291 = 8677218194351269805LLU;
	static volatile int32_t t41 = 0;

    t41 = (x289<<(x290!=(x291|x292)));

    if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x297 = UINT32_MAX;
	static int32_t x298 = INT32_MIN;
	volatile uint64_t x299 = 32381LLU;

    t42 = (x297<<(x298!=(x299|x300)));

    if (t42 != 4294967294U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x301 = 3590U;
	static int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	volatile int16_t x304 = 1352;
	int32_t t43 = -3;

    t43 = (x301<<(x302!=(x303|x304)));

    if (t43 != 7180) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x323 = -1;
	uint64_t x324 = 61564068LLU;
	volatile int32_t t44 = 3;

    t44 = (x321<<(x322!=(x323|x324)));

    if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x325 = 3;
	static int64_t x326 = -10LL;
	volatile int32_t x327 = 863;
	uint32_t x328 = 23276U;
	volatile int32_t t45 = -1;

    t45 = (x325<<(x326!=(x327|x328)));

    if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 29U;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	uint32_t t46 = 1069U;

    t46 = (x337<<(x338!=(x339|x340)));

    if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x349 = INT16_MAX;
	int64_t x350 = -41894791054979LL;
	static int8_t x351 = -1;
	static int16_t x352 = -444;

    t47 = (x349<<(x350!=(x351|x352)));

    if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x353 = 4U;
	uint64_t x354 = 304637760335279979LLU;
	static int32_t x355 = 114025;
	volatile int16_t x356 = 0;
	static int32_t t48 = 2422923;

    t48 = (x353<<(x354!=(x355|x356)));

    if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x361 = 3;
	volatile int8_t x362 = -1;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 292U;

    t49 = (x361<<(x362!=(x363|x364)));

    if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x365 = 2742U;
	volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = 12U;

    t50 = (x365<<(x366!=(x367|x368)));

    if (t50 != 5484) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x385 = 8511601333690426068LLU;
	int32_t x386 = -1;
	int64_t x387 = -52572210004840653LL;
	int64_t x388 = -1LL;
	volatile uint64_t t51 = 842824567933639LLU;

    t51 = (x385<<(x386!=(x387|x388)));

    if (t51 != 8511601333690426068LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x389 = 0U;
	volatile int8_t x392 = 6;
	volatile int32_t t52 = 0;

    t52 = (x389<<(x390!=(x391|x392)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x393 = UINT16_MAX;
	uint16_t x394 = 2145U;
	static int32_t x395 = INT32_MIN;
	uint64_t x396 = 68721608488LLU;
	int32_t t53 = 71918;

    t53 = (x393<<(x394!=(x395|x396)));

    if (t53 != 131070) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x402 = -1;
	volatile uint16_t x404 = 191U;
	volatile int32_t t54 = -83810;

    t54 = (x401<<(x402!=(x403|x404)));

    if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x409 = UINT64_MAX;
	volatile uint32_t x412 = UINT32_MAX;

    t55 = (x409<<(x410!=(x411|x412)));

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x413 = 16;
	int64_t x414 = 6215LL;
	uint64_t x415 = UINT64_MAX;

    t56 = (x413<<(x414!=(x415|x416)));

    if (t56 != 32) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x417 = 46975198U;
	volatile int8_t x418 = INT8_MIN;
	int8_t x420 = 20;

    t57 = (x417<<(x418!=(x419|x420)));

    if (t57 != 93950396U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x433 = 197622164169LL;
	int32_t x435 = -1;
	static int8_t x436 = INT8_MIN;
	int64_t t58 = 162351483719034405LL;

    t58 = (x433<<(x434!=(x435|x436)));

    if (t58 != 395244328338LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x455 = INT16_MAX;
	int32_t x456 = -1;
	volatile uint64_t t59 = 467LLU;

    t59 = (x453<<(x454!=(x455|x456)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x457 = INT8_MAX;
	int16_t x458 = INT16_MAX;
	volatile int16_t x460 = -11;
	static int32_t t60 = 3;

    t60 = (x457<<(x458!=(x459|x460)));

    if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x465 = UINT32_MAX;
	int64_t x467 = -1LL;
	int64_t x468 = INT64_MAX;

    t61 = (x465<<(x466!=(x467|x468)));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x473 = 710539959LLU;
	uint8_t x474 = 5U;
	static volatile int64_t x475 = INT64_MIN;
	uint8_t x476 = 48U;
	static volatile uint64_t t62 = 7852LLU;

    t62 = (x473<<(x474!=(x475|x476)));

    if (t62 != 1421079918LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x477 = 28U;
	static uint64_t x478 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = 75768156U;
	volatile uint32_t t63 = 14U;

    t63 = (x477<<(x478!=(x479|x480)));

    if (t63 != 56U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x481 = 4;
	volatile uint16_t x483 = 1U;
	int32_t t64 = -47737;

    t64 = (x481<<(x482!=(x483|x484)));

    if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x485 = 2U;
	int64_t x486 = 11743959068LL;
	int64_t x487 = 24LL;
	volatile int32_t t65 = -614;

    t65 = (x485<<(x486!=(x487|x488)));

    if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x490 = INT32_MIN;
	uint16_t x491 = 0U;
	int64_t x492 = INT64_MAX;
	volatile int64_t t66 = 18816169859753LL;

    t66 = (x489<<(x490!=(x491|x492)));

    if (t66 != 3830LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x493 = 2014LL;
	int16_t x494 = INT16_MIN;
	int32_t x495 = -1;
	volatile uint8_t x496 = 3U;
	static volatile int64_t t67 = -21915LL;

    t67 = (x493<<(x494!=(x495|x496)));

    if (t67 != 4028LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x501 = UINT8_MAX;
	volatile int64_t x502 = -1LL;
	uint16_t x503 = 692U;
	volatile int32_t t68 = 2430;

    t68 = (x501<<(x502!=(x503|x504)));

    if (t68 != 510) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x513 = 2285571687223457880LLU;
	int64_t x514 = -12339389106390LL;
	int8_t x515 = 1;
	int64_t x516 = -4311450592LL;
	static volatile uint64_t t69 = 5LLU;

    t69 = (x513<<(x514!=(x515|x516)));

    if (t69 != 4571143374446915760LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x545 = 6;
	int8_t x546 = 1;
	int16_t x547 = INT16_MAX;
	static int8_t x548 = INT8_MIN;
	static int32_t t70 = 9;

    t70 = (x545<<(x546!=(x547|x548)));

    if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int32_t x550 = INT32_MAX;
	static uint64_t t71 = 448355807LLU;

    t71 = (x549<<(x550!=(x551|x552)));

    if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x557 = UINT64_MAX;
	uint32_t x558 = 219545U;
	int64_t x559 = INT64_MAX;
	int32_t x560 = 150348;
	static uint64_t t72 = 266868398LLU;

    t72 = (x557<<(x558!=(x559|x560)));

    if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x563 = INT8_MIN;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t73 = 55852242LLU;

    t73 = (x561<<(x562!=(x563|x564)));

    if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x565 = 57U;
	uint8_t x566 = 5U;
	int16_t x567 = INT16_MIN;
	int32_t x568 = INT32_MAX;
	volatile int32_t t74 = 1320;

    t74 = (x565<<(x566!=(x567|x568)));

    if (t74 != 114) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x571 = INT32_MAX;
	int8_t x572 = 1;
	int32_t t75 = 0;

    t75 = (x569<<(x570!=(x571|x572)));

    if (t75 != 131070) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x574 = -1;
	int16_t x575 = INT16_MIN;
	int32_t x576 = -1486;
	int32_t t76 = -279685980;

    t76 = (x573<<(x574!=(x575|x576)));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x577 = 100U;
	uint32_t x578 = 15075U;
	int32_t x579 = 1385;
	int64_t x580 = -1LL;
	static volatile uint32_t t77 = 101387U;

    t77 = (x577<<(x578!=(x579|x580)));

    if (t77 != 200U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x585 = 9U;
	int8_t x586 = -1;
	uint64_t x587 = 122LLU;

    t78 = (x585<<(x586!=(x587|x588)));

    if (t78 != 18U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x589 = 58U;
	int64_t x590 = INT64_MIN;
	volatile uint64_t x591 = UINT64_MAX;
	volatile int8_t x592 = -1;
	volatile int32_t t79 = -21;

    t79 = (x589<<(x590!=(x591|x592)));

    if (t79 != 116) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x601 = 6475U;
	int8_t x603 = -7;
	int16_t x604 = INT16_MIN;

    t80 = (x601<<(x602!=(x603|x604)));

    if (t80 != 12950) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x605 = 2U;
	int8_t x606 = INT8_MIN;
	int8_t x607 = 5;
	static int8_t x608 = 1;
	volatile int32_t t81 = 12008317;

    t81 = (x605<<(x606!=(x607|x608)));

    if (t81 != 4) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	uint64_t x614 = 242158335082367805LLU;
	int32_t x615 = -495321;
	static volatile int32_t t82 = -1;

    t82 = (x613<<(x614!=(x615|x616)));

    if (t82 != 510) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x617 = 5U;
	uint64_t x618 = 507LLU;
	int16_t x619 = 1;
	uint32_t t83 = 38U;

    t83 = (x617<<(x618!=(x619|x620)));

    if (t83 != 10U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x622 = 117U;
	static int32_t t84 = -550344654;

    t84 = (x621<<(x622!=(x623|x624)));

    if (t84 != 130) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x625 = 533148659LLU;
	int64_t x626 = 23447LL;
	volatile int32_t x627 = INT32_MIN;
	int16_t x628 = INT16_MIN;
	static volatile uint64_t t85 = 13891LLU;

    t85 = (x625<<(x626!=(x627|x628)));

    if (t85 != 1066297318LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x630 = -2LL;
	uint64_t x631 = UINT64_MAX;
	static volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t86 = 907151344;

    t86 = (x629<<(x630!=(x631|x632)));

    if (t86 != 58) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x635 = INT8_MIN;
	int16_t x636 = 479;
	volatile uint64_t t87 = 27496395044475554LLU;

    t87 = (x633<<(x634!=(x635|x636)));

    if (t87 != 780LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x637 = 455436LLU;
	uint8_t x638 = UINT8_MAX;
	uint8_t x639 = 16U;
	volatile int32_t x640 = INT32_MIN;
	uint64_t t88 = 1209401230916794LLU;

    t88 = (x637<<(x638!=(x639|x640)));

    if (t88 != 910872LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x641 = UINT16_MAX;
	uint64_t x642 = UINT64_MAX;
	static int8_t x644 = -30;
	volatile int32_t t89 = 26;

    t89 = (x641<<(x642!=(x643|x644)));

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x649 = 1LL;
	int64_t x650 = -1LL;
	int32_t x651 = -15;
	static uint64_t x652 = 4287103033992LLU;

    t90 = (x649<<(x650!=(x651|x652)));

    if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x653 = UINT64_MAX;
	int32_t x655 = -2666614;
	int16_t x656 = INT16_MIN;
	uint64_t t91 = 14441802098249414LLU;

    t91 = (x653<<(x654!=(x655|x656)));

    if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x657 = 0U;
	uint64_t x658 = 183878LLU;
	uint64_t x659 = UINT64_MAX;
	uint32_t x660 = 26U;
	static volatile int32_t t92 = 367608089;

    t92 = (x657<<(x658!=(x659|x660)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x665 = 13399;
	uint32_t x666 = 128U;
	uint64_t x667 = UINT64_MAX;
	int64_t x668 = INT64_MAX;
	volatile int32_t t93 = 21695;

    t93 = (x665<<(x666!=(x667|x668)));

    if (t93 != 26798) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x669 = 49U;
	volatile int8_t x671 = INT8_MAX;
	volatile int32_t t94 = -24671593;

    t94 = (x669<<(x670!=(x671|x672)));

    if (t94 != 49) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint64_t x678 = 5934602LLU;
	uint64_t x680 = 2183327099526888LLU;
	uint64_t t95 = 22880LLU;

    t95 = (x677<<(x678!=(x679|x680)));

    if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x681 = 1U;
	uint32_t x682 = UINT32_MAX;
	volatile uint32_t x684 = UINT32_MAX;
	int32_t t96 = 392661;

    t96 = (x681<<(x682!=(x683|x684)));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x693 = 15862U;
	static int64_t x694 = INT64_MIN;
	static int8_t x695 = -1;
	volatile int32_t t97 = -4186169;

    t97 = (x693<<(x694!=(x695|x696)));

    if (t97 != 31724) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x697 = 86272887761151LL;
	volatile int64_t x698 = INT64_MAX;
	uint32_t x699 = 61270U;
	volatile uint8_t x700 = 94U;
	volatile int64_t t98 = -50LL;

    t98 = (x697<<(x698!=(x699|x700)));

    if (t98 != 172545775522302LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x702 = INT8_MIN;
	uint64_t t99 = 2106536407050LLU;

    t99 = (x701<<(x702!=(x703|x704)));

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x706 = 13U;
	volatile uint16_t x707 = UINT16_MAX;
	int32_t x708 = INT32_MIN;
	volatile uint64_t t100 = 81546496LLU;

    t100 = (x705<<(x706!=(x707|x708)));

    if (t100 != 55653205694718LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x709 = 3122088396661LLU;
	int64_t x710 = INT64_MIN;
	volatile uint64_t t101 = 14859543945LLU;

    t101 = (x709<<(x710!=(x711|x712)));

    if (t101 != 6244176793322LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x717 = 1472;
	int16_t x718 = 692;
	uint16_t x719 = 48U;
	static volatile int64_t x720 = INT64_MIN;
	volatile int32_t t102 = -25058;

    t102 = (x717<<(x718!=(x719|x720)));

    if (t102 != 2944) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x721 = 54443U;
	volatile uint8_t x723 = 107U;
	int8_t x724 = -3;
	volatile uint32_t t103 = 59234U;

    t103 = (x721<<(x722!=(x723|x724)));

    if (t103 != 108886U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x725 = UINT64_MAX;
	int64_t x726 = -235175LL;
	int64_t x727 = -1LL;
	uint16_t x728 = 43U;
	volatile uint64_t t104 = 54429LLU;

    t104 = (x725<<(x726!=(x727|x728)));

    if (t104 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x735 = -39;
	uint16_t x736 = 3U;

    t105 = (x733<<(x734!=(x735|x736)));

    if (t105 != 4964) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x741 = 15U;
	int32_t x742 = INT32_MAX;
	static int8_t x743 = INT8_MIN;
	int8_t x744 = -1;
	volatile int32_t t106 = -3127;

    t106 = (x741<<(x742!=(x743|x744)));

    if (t106 != 30) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	uint32_t x748 = 10099U;

    t107 = (x745<<(x746!=(x747|x748)));

    if (t107 != 628530LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x749 = 2U;
	uint32_t x751 = 2U;
	int64_t x752 = INT64_MIN;
	int32_t t108 = 954581057;

    t108 = (x749<<(x750!=(x751|x752)));

    if (t108 != 4) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x755 = INT64_MIN;
	volatile int32_t t109 = 101526;

    t109 = (x753<<(x754!=(x755|x756)));

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x765 = 126U;
	static int32_t x766 = INT32_MAX;
	static int8_t x767 = 1;
	volatile int16_t x768 = INT16_MAX;

    t110 = (x765<<(x766!=(x767|x768)));

    if (t110 != 252) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x769 = 1538U;
	static int8_t x770 = -44;
	int8_t x771 = -13;
	int32_t x772 = INT32_MIN;
	volatile uint32_t t111 = 32U;

    t111 = (x769<<(x770!=(x771|x772)));

    if (t111 != 3076U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x785 = 40671U;
	static volatile int64_t x786 = INT64_MAX;
	volatile int8_t x787 = -14;
	int16_t x788 = 816;

    t112 = (x785<<(x786!=(x787|x788)));

    if (t112 != 81342U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x790 = 6834U;
	int64_t x792 = -8673LL;
	uint32_t t113 = 0U;

    t113 = (x789<<(x790!=(x791|x792)));

    if (t113 != 356152U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x801 = 3013483981359410LLU;
	int32_t x802 = -2372451;
	volatile uint16_t x803 = 71U;
	int16_t x804 = INT16_MIN;
	volatile uint64_t t114 = 205733387803708877LLU;

    t114 = (x801<<(x802!=(x803|x804)));

    if (t114 != 6026967962718820LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x809 = 14864U;
	volatile int16_t x810 = INT16_MIN;
	int8_t x811 = 3;
	int32_t x812 = -438132;
	uint32_t t115 = 7U;

    t115 = (x809<<(x810!=(x811|x812)));

    if (t115 != 29728U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x815 = INT16_MIN;
	volatile uint32_t t116 = 660278588U;

    t116 = (x813<<(x814!=(x815|x816)));

    if (t116 != 3198060888U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x825 = UINT32_MAX;
	uint16_t x826 = 10136U;
	uint64_t x828 = 477LLU;
	uint32_t t117 = 7U;

    t117 = (x825<<(x826!=(x827|x828)));

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x829 = UINT32_MAX;
	static uint16_t x830 = 2U;
	uint64_t x831 = 1183403609LLU;
	uint64_t x832 = 1638LLU;
	uint32_t t118 = 1701661U;

    t118 = (x829<<(x830!=(x831|x832)));

    if (t118 != 4294967294U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x834 = 1;
	int16_t x835 = -1;
	int32_t t119 = -8578146;

    t119 = (x833<<(x834!=(x835|x836)));

    if (t119 != 65534) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x849 = UINT64_MAX;
	uint64_t x850 = 13LLU;
	int64_t x851 = -1LL;
	volatile uint64_t t120 = 7656871783695LLU;

    t120 = (x849<<(x850!=(x851|x852)));

    if (t120 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x853 = 30624351602LLU;
	volatile int8_t x855 = 7;
	static uint64_t x856 = 63911011902523922LLU;
	volatile uint64_t t121 = 257716431999549LLU;

    t121 = (x853<<(x854!=(x855|x856)));

    if (t121 != 61248703204LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile int16_t x863 = 1645;
	int64_t x864 = INT64_MAX;
	volatile uint64_t t122 = 1305LLU;

    t122 = (x861<<(x862!=(x863|x864)));

    if (t122 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x897 = 1U;
	int16_t x898 = -1;
	int64_t x899 = -166467955012LL;
	uint32_t t123 = 25U;

    t123 = (x897<<(x898!=(x899|x900)));

    if (t123 != 2U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x901 = 10335;
	uint8_t x902 = UINT8_MAX;
	static int64_t x903 = INT64_MIN;

    t124 = (x901<<(x902!=(x903|x904)));

    if (t124 != 20670) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x905 = INT16_MAX;
	uint8_t x906 = 2U;
	int32_t x907 = INT32_MAX;
	static int32_t t125 = 498;

    t125 = (x905<<(x906!=(x907|x908)));

    if (t125 != 65534) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x922 = 7U;
	uint8_t x923 = 1U;
	volatile int32_t t126 = 0;

    t126 = (x921<<(x922!=(x923|x924)));

    if (t126 != 552216898) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x925 = 13782534475881428LLU;
	uint8_t x927 = 7U;
	int64_t x928 = -2103930188424LL;
	uint64_t t127 = 3127LLU;

    t127 = (x925<<(x926!=(x927|x928)));

    if (t127 != 27565068951762856LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x942 = 446738701U;
	uint64_t x943 = 69799LLU;
	int32_t x944 = -104;
	uint32_t t128 = 419352U;

    t128 = (x941<<(x942!=(x943|x944)));

    if (t128 != 2174U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x945 = 11U;
	int16_t x947 = -3;
	int8_t x948 = INT8_MIN;

    t129 = (x945<<(x946!=(x947|x948)));

    if (t129 != 22) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x950 = UINT64_MAX;
	int8_t x951 = -1;
	uint8_t x952 = 93U;
	static uint32_t t130 = 436183U;

    t130 = (x949<<(x950!=(x951|x952)));

    if (t130 != 5929U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x958 = INT16_MIN;
	static uint64_t x960 = 3798330668LLU;

    t131 = (x957<<(x958!=(x959|x960)));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x961 = 13LL;
	int8_t x962 = -48;
	static int64_t x963 = INT64_MIN;
	int32_t x964 = 32;
	static volatile int64_t t132 = 8568LL;

    t132 = (x961<<(x962!=(x963|x964)));

    if (t132 != 26LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x966 = INT8_MAX;
	int32_t x968 = 0;

    t133 = (x965<<(x966!=(x967|x968)));

    if (t133 != 116702LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x969 = 3155U;
	int16_t x970 = INT16_MIN;
	int64_t x971 = INT64_MIN;
	int32_t x972 = -1;
	volatile uint32_t t134 = 1410136U;

    t134 = (x969<<(x970!=(x971|x972)));

    if (t134 != 6310U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x973 = 1;
	volatile uint8_t x974 = 2U;
	int64_t x975 = -1120041099009425754LL;
	int32_t x976 = -39271;
	volatile int32_t t135 = -15;

    t135 = (x973<<(x974!=(x975|x976)));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x986 = INT32_MIN;
	int16_t x988 = 9;
	volatile int32_t t136 = -3337854;

    t136 = (x985<<(x986!=(x987|x988)));

    if (t136 != 42) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x989 = 0;
	static uint16_t x990 = 871U;
	int32_t x991 = -85613;
	uint8_t x992 = UINT8_MAX;

    t137 = (x989<<(x990!=(x991|x992)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x994 = UINT32_MAX;
	int16_t x995 = INT16_MIN;
	static int32_t x996 = -1;
	static volatile int32_t t138 = -1;

    t138 = (x993<<(x994!=(x995|x996)));

    if (t138 != 56) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1002 = -1;
	int64_t x1003 = -1LL;
	uint64_t x1004 = 51494060LLU;
	uint64_t t139 = 430474118608139142LLU;

    t139 = (x1001<<(x1002!=(x1003|x1004)));

    if (t139 != 627760LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1009 = 3U;
	volatile int32_t x1010 = INT32_MIN;
	int32_t x1011 = INT32_MIN;
	int8_t x1012 = 3;
	static int32_t t140 = -7;

    t140 = (x1009<<(x1010!=(x1011|x1012)));

    if (t140 != 6) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x1013 = UINT64_MAX;
	uint32_t x1014 = 96135650U;
	static uint32_t x1015 = 1004U;
	uint32_t x1016 = 907029U;
	static uint64_t t141 = 229413140LLU;

    t141 = (x1013<<(x1014!=(x1015|x1016)));

    if (t141 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1021 = 109LLU;
	static int16_t x1022 = -1;
	uint64_t x1023 = UINT64_MAX;
	uint64_t t142 = 805028584515LLU;

    t142 = (x1021<<(x1022!=(x1023|x1024)));

    if (t142 != 109LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1025 = 25;
	uint32_t x1026 = 23408U;
	int16_t x1027 = INT16_MAX;
	uint16_t x1028 = 18583U;
	volatile int32_t t143 = 5;

    t143 = (x1025<<(x1026!=(x1027|x1028)));

    if (t143 != 50) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x1041 = 28;
	static int8_t x1042 = INT8_MIN;
	int64_t x1043 = INT64_MIN;
	uint32_t x1044 = 2076581576U;

    t144 = (x1041<<(x1042!=(x1043|x1044)));

    if (t144 != 56) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x1061 = UINT16_MAX;
	static uint16_t x1064 = 33U;
	int32_t t145 = 1;

    t145 = (x1061<<(x1062!=(x1063|x1064)));

    if (t145 != 131070) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x1069 = 193458780321LLU;
	volatile uint32_t x1070 = 1418U;
	uint8_t x1072 = UINT8_MAX;

    t146 = (x1069<<(x1070!=(x1071|x1072)));

    if (t146 != 386917560642LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1074 = -1;
	int64_t x1075 = INT64_MIN;
	int8_t x1076 = INT8_MIN;

    t147 = (x1073<<(x1074!=(x1075|x1076)));

    if (t147 != 131070) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1089 = INT16_MAX;
	int8_t x1090 = INT8_MIN;
	int8_t x1091 = INT8_MIN;
	int16_t x1092 = INT16_MIN;
	int32_t t148 = 6136016;

    t148 = (x1089<<(x1090!=(x1091|x1092)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1093 = UINT16_MAX;
	int64_t x1094 = INT64_MIN;
	static volatile int16_t x1095 = -2;
	volatile int32_t t149 = 4182776;

    t149 = (x1093<<(x1094!=(x1095|x1096)));

    if (t149 != 131070) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1097 = INT16_MAX;
	int64_t x1098 = INT64_MIN;
	volatile int32_t x1099 = 1712576;
	volatile int8_t x1100 = 0;

    t150 = (x1097<<(x1098!=(x1099|x1100)));

    if (t150 != 65534) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1101 = UINT8_MAX;
	volatile int8_t x1102 = 7;
	volatile uint32_t x1103 = UINT32_MAX;
	uint32_t x1104 = 2859951U;

    t151 = (x1101<<(x1102!=(x1103|x1104)));

    if (t151 != 510) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1105 = 3U;
	volatile int16_t x1106 = INT16_MIN;
	int64_t x1107 = INT64_MAX;
	volatile int64_t x1108 = INT64_MAX;
	static int32_t t152 = 43783268;

    t152 = (x1105<<(x1106!=(x1107|x1108)));

    if (t152 != 6) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x1111 = 16U;
	volatile int8_t x1112 = -1;

    t153 = (x1109<<(x1110!=(x1111|x1112)));

    if (t153 != 868650) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1121 = 502;
	volatile int8_t x1122 = INT8_MAX;
	static uint32_t x1123 = UINT32_MAX;
	int64_t x1124 = -1LL;
	volatile int32_t t154 = 39;

    t154 = (x1121<<(x1122!=(x1123|x1124)));

    if (t154 != 1004) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1126 = 54LL;
	int64_t x1127 = INT64_MIN;
	uint64_t x1128 = 104LLU;
	int32_t t155 = -408;

    t155 = (x1125<<(x1126!=(x1127|x1128)));

    if (t155 != 12174) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1129 = 32184U;
	volatile int64_t x1132 = INT64_MAX;
	volatile int32_t t156 = 44479781;

    t156 = (x1129<<(x1130!=(x1131|x1132)));

    if (t156 != 64368) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x1141 = 27647U;
	int64_t x1143 = -53221120330LL;
	static int32_t t157 = 9179;

    t157 = (x1141<<(x1142!=(x1143|x1144)));

    if (t157 != 55294) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1149 = 49U;
	int8_t x1150 = -1;
	static int16_t x1151 = -1;
	int64_t x1152 = 51734901LL;

    t158 = (x1149<<(x1150!=(x1151|x1152)));

    if (t158 != 49U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1169 = 1;
	int8_t x1170 = INT8_MIN;
	int32_t x1171 = INT32_MAX;
	volatile uint8_t x1172 = 22U;
	volatile int32_t t159 = -42148;

    t159 = (x1169<<(x1170!=(x1171|x1172)));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1177 = 4U;
	int8_t x1178 = -1;
	static volatile int32_t x1180 = -1;
	int32_t t160 = -407313481;

    t160 = (x1177<<(x1178!=(x1179|x1180)));

    if (t160 != 4) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1186 = -1;
	uint32_t x1187 = 99342136U;
	int16_t x1188 = INT16_MIN;
	static volatile int32_t t161 = 23094;

    t161 = (x1185<<(x1186!=(x1187|x1188)));

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x1189 = 1U;
	int8_t x1190 = -4;
	uint64_t x1191 = 2749LLU;
	static int32_t x1192 = 48717;
	int32_t t162 = 3;

    t162 = (x1189<<(x1190!=(x1191|x1192)));

    if (t162 != 2) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1197 = 11LLU;
	int32_t x1198 = INT32_MIN;
	int8_t x1199 = 4;
	int32_t x1200 = INT32_MIN;
	uint64_t t163 = 0LLU;

    t163 = (x1197<<(x1198!=(x1199|x1200)));

    if (t163 != 22LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1201 = 6;
	volatile uint8_t x1202 = 4U;
	uint32_t x1204 = 1342638374U;

    t164 = (x1201<<(x1202!=(x1203|x1204)));

    if (t164 != 12) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1209 = 30U;
	uint16_t x1210 = UINT16_MAX;
	int64_t x1211 = INT64_MAX;
	int8_t x1212 = -1;
	volatile uint32_t t165 = 1233217U;

    t165 = (x1209<<(x1210!=(x1211|x1212)));

    if (t165 != 60U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1217 = 2U;
	int32_t x1219 = -2980;
	int16_t x1220 = -1;
	volatile int32_t t166 = -5136535;

    t166 = (x1217<<(x1218!=(x1219|x1220)));

    if (t166 != 4) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x1221 = 47U;
	volatile int32_t x1222 = INT32_MIN;
	int16_t x1223 = INT16_MIN;
	static volatile int64_t x1224 = INT64_MIN;

    t167 = (x1221<<(x1222!=(x1223|x1224)));

    if (t167 != 94) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1241 = 1;
	static int32_t x1242 = 24261630;
	int32_t x1243 = INT32_MIN;
	volatile int8_t x1244 = -1;
	volatile int32_t t168 = -1751267;

    t168 = (x1241<<(x1242!=(x1243|x1244)));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1245 = 8U;
	volatile uint64_t x1246 = UINT64_MAX;
	int64_t x1247 = -1LL;
	uint16_t x1248 = UINT16_MAX;
	volatile int32_t t169 = -11;

    t169 = (x1245<<(x1246!=(x1247|x1248)));

    if (t169 != 8) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1250 = 1789;
	static uint16_t x1251 = UINT16_MAX;
	static int8_t x1252 = INT8_MIN;
	uint32_t t170 = 23427699U;

    t170 = (x1249<<(x1250!=(x1251|x1252)));

    if (t170 != 50U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1253 = INT8_MAX;
	static int64_t x1255 = INT64_MIN;
	volatile int8_t x1256 = 0;
	int32_t t171 = 1561303;

    t171 = (x1253<<(x1254!=(x1255|x1256)));

    if (t171 != 254) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1257 = 1428482693U;
	int16_t x1258 = 12190;
	volatile uint16_t x1259 = 28970U;
	uint32_t x1260 = 709U;
	uint32_t t172 = 81942976U;

    t172 = (x1257<<(x1258!=(x1259|x1260)));

    if (t172 != 2856965386U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x1261 = 2539U;
	static volatile int64_t x1263 = INT64_MAX;
	volatile int32_t x1264 = INT32_MIN;
	static volatile int32_t t173 = -48;

    t173 = (x1261<<(x1262!=(x1263|x1264)));

    if (t173 != 2539) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1273 = 30;
	uint64_t x1274 = UINT64_MAX;
	int32_t x1275 = 2247928;
	static int64_t x1276 = -4523007453149887590LL;
	int32_t t174 = 30194;

    t174 = (x1273<<(x1274!=(x1275|x1276)));

    if (t174 != 60) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1281 = 16U;
	uint64_t x1282 = UINT64_MAX;
	volatile uint32_t x1283 = 27U;
	static uint16_t x1284 = UINT16_MAX;
	int32_t t175 = 132009769;

    t175 = (x1281<<(x1282!=(x1283|x1284)));

    if (t175 != 32) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1285 = UINT8_MAX;
	uint16_t x1286 = UINT16_MAX;
	int16_t x1288 = INT16_MAX;
	volatile int32_t t176 = 7292590;

    t176 = (x1285<<(x1286!=(x1287|x1288)));

    if (t176 != 510) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x1293 = 15;
	int8_t x1296 = 14;
	volatile int32_t t177 = 0;

    t177 = (x1293<<(x1294!=(x1295|x1296)));

    if (t177 != 30) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1297 = 842U;
	uint8_t x1298 = UINT8_MAX;
	uint16_t x1299 = UINT16_MAX;
	int32_t x1300 = -14326395;
	int32_t t178 = -4174064;

    t178 = (x1297<<(x1298!=(x1299|x1300)));

    if (t178 != 1684) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1301 = UINT8_MAX;
	int8_t x1302 = INT8_MIN;
	static volatile uint8_t x1303 = UINT8_MAX;
	volatile int32_t t179 = -55;

    t179 = (x1301<<(x1302!=(x1303|x1304)));

    if (t179 != 510) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1313 = 158602198;
	int64_t x1314 = -154LL;
	int32_t x1315 = -22;
	int32_t x1316 = 702769057;

    t180 = (x1313<<(x1314!=(x1315|x1316)));

    if (t180 != 317204396) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1361 = 6U;
	int32_t x1363 = INT32_MIN;
	int16_t x1364 = -1;
	static int32_t t181 = 10266883;

    t181 = (x1361<<(x1362!=(x1363|x1364)));

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x1369 = 45507373976525LLU;
	static int64_t x1370 = -1LL;
	static volatile uint64_t t182 = 1668424406565739LLU;

    t182 = (x1369<<(x1370!=(x1371|x1372)));

    if (t182 != 91014747953050LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1374 = -17;
	int32_t x1375 = 1;
	int16_t x1376 = -53;
	int32_t t183 = 117;

    t183 = (x1373<<(x1374!=(x1375|x1376)));

    if (t183 != 24364) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1377 = UINT32_MAX;
	int32_t x1378 = INT32_MIN;
	int16_t x1379 = 2;
	uint32_t x1380 = 114759U;

    t184 = (x1377<<(x1378!=(x1379|x1380)));

    if (t184 != 4294967294U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1389 = INT8_MAX;
	uint16_t x1390 = UINT16_MAX;
	int16_t x1391 = -1;
	volatile int32_t t185 = 80917593;

    t185 = (x1389<<(x1390!=(x1391|x1392)));

    if (t185 != 254) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1393 = 1;
	int16_t x1394 = -1949;
	int64_t x1395 = INT64_MAX;
	uint64_t x1396 = UINT64_MAX;
	volatile int32_t t186 = -2716950;

    t186 = (x1393<<(x1394!=(x1395|x1396)));

    if (t186 != 2) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1398 = -1LL;
	int32_t x1399 = 35279;
	volatile int16_t x1400 = 1;
	int64_t t187 = -31740807116405935LL;

    t187 = (x1397<<(x1398!=(x1399|x1400)));

    if (t187 != 208LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1421 = INT16_MAX;
	static uint8_t x1423 = 41U;
	uint32_t x1424 = UINT32_MAX;

    t188 = (x1421<<(x1422!=(x1423|x1424)));

    if (t188 != 65534) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1426 = 9;
	static int32_t x1427 = 812;
	int16_t x1428 = INT16_MIN;
	uint32_t t189 = 1006U;

    t189 = (x1425<<(x1426!=(x1427|x1428)));

    if (t189 != 21346062U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1429 = UINT16_MAX;
	int32_t t190 = 6656;

    t190 = (x1429<<(x1430!=(x1431|x1432)));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1433 = 45542U;
	uint32_t x1434 = 11554U;
	int64_t x1436 = -46105838386051LL;

    t191 = (x1433<<(x1434!=(x1435|x1436)));

    if (t191 != 91084U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1437 = UINT64_MAX;
	int32_t x1438 = -1;
	volatile int64_t x1439 = -1LL;
	static uint64_t t192 = UINT64_MAX;

    t192 = (x1437<<(x1438!=(x1439|x1440)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1450 = UINT16_MAX;
	uint8_t x1452 = 24U;
	volatile uint32_t t193 = 99289U;

    t193 = (x1449<<(x1450!=(x1451|x1452)));

    if (t193 != 4294967294U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1453 = 517;
	static int8_t x1454 = -1;
	uint16_t x1456 = 54U;
	int32_t t194 = 122772;

    t194 = (x1453<<(x1454!=(x1455|x1456)));

    if (t194 != 517) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1477 = 268U;
	uint8_t x1479 = 7U;
	int16_t x1480 = INT16_MIN;
	volatile int32_t t195 = -2;

    t195 = (x1477<<(x1478!=(x1479|x1480)));

    if (t195 != 536) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1489 = 50U;
	static int8_t x1490 = INT8_MAX;
	int8_t x1491 = INT8_MIN;
	uint64_t x1492 = 9LLU;

    t196 = (x1489<<(x1490!=(x1491|x1492)));

    if (t196 != 100) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1493 = 127U;
	uint64_t x1494 = 8LLU;
	static uint16_t x1495 = UINT16_MAX;
	int32_t x1496 = INT32_MIN;

    t197 = (x1493<<(x1494!=(x1495|x1496)));

    if (t197 != 254) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1506 = UINT8_MAX;
	int16_t x1507 = 0;

    t198 = (x1505<<(x1506!=(x1507|x1508)));

    if (t198 != 65534) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1513 = UINT32_MAX;
	int8_t x1514 = -1;
	uint64_t x1516 = 433LLU;
	uint32_t t199 = 833192270U;

    t199 = (x1513<<(x1514!=(x1515|x1516)));

    if (t199 != 4294967294U) { NG(); } else { ; }
	
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

