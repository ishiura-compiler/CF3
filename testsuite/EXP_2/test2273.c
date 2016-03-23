
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

static volatile int32_t x2 = INT32_MIN;
int32_t x3 = -1;
int32_t x5 = 70361;
volatile int16_t x6 = 7929;
volatile int16_t x7 = INT16_MAX;
int32_t t1 = 676;
int8_t x9 = -15;
static int64_t x14 = -15706LL;
static int16_t x15 = INT16_MIN;
int8_t x19 = -1;
int16_t x20 = -1;
uint16_t x22 = 272U;
static int32_t x31 = -1;
int32_t t8 = 123640;
int16_t x45 = -1;
uint64_t x51 = 763487622764284409LLU;
int32_t x53 = -1;
volatile int16_t x56 = INT16_MIN;
uint64_t x69 = UINT64_MAX;
uint32_t x81 = UINT32_MAX;
static volatile uint8_t x84 = 7U;
int16_t x86 = 488;
volatile uint32_t x91 = UINT32_MAX;
int32_t x97 = -1;
volatile int32_t t27 = 466551203;
static uint16_t x116 = UINT16_MAX;
volatile uint16_t x121 = 38U;
int64_t x127 = INT64_MIN;
int16_t x132 = INT16_MAX;
int32_t t33 = 1;
volatile int64_t x141 = 12642306LL;
static uint32_t x143 = UINT32_MAX;
int32_t x154 = INT32_MIN;
volatile int32_t t36 = 8;
static uint32_t t40 = 816870381U;
static volatile uint16_t x180 = UINT16_MAX;
int16_t x182 = 12222;
uint32_t x190 = 13U;
int32_t x191 = -377;
int16_t x193 = INT16_MIN;
volatile int32_t x194 = 6891;
volatile uint16_t x195 = 27U;
volatile int32_t x196 = -1;
static volatile int32_t t47 = -12;
int32_t x201 = -521071447;
static uint8_t x209 = UINT8_MAX;
volatile int16_t x216 = INT16_MIN;
int32_t x217 = -1;
int64_t x223 = INT64_MIN;
static volatile int32_t x232 = INT32_MIN;
uint8_t x233 = UINT8_MAX;
int64_t x238 = INT64_MIN;
static volatile int16_t x240 = -24;
int8_t x252 = 14;
int32_t t61 = 13;
static int32_t x261 = 25234;
volatile uint8_t x262 = 88U;
int64_t t63 = -1904LL;
static int8_t x265 = -1;
uint64_t x281 = 632LLU;
int16_t x292 = INT16_MIN;
int32_t x299 = INT32_MIN;
volatile int32_t x302 = 180209;
int64_t x306 = INT64_MIN;
uint16_t x308 = 6884U;
int32_t t74 = 166348;
volatile int64_t x312 = INT64_MIN;
int64_t x320 = 3206878562293508LL;
int64_t t81 = 1839812LL;
int8_t x337 = INT8_MAX;
static int64_t x341 = INT64_MIN;
int64_t x347 = 30207666LL;
int16_t x358 = 1;
int16_t x359 = INT16_MAX;
int16_t x362 = INT16_MIN;
int64_t t88 = 3725LL;
int8_t x366 = INT8_MIN;
uint64_t x370 = 12378LLU;
int8_t x373 = INT8_MAX;
volatile int32_t t91 = -5765;
uint16_t x384 = 18U;
int32_t t93 = -340;
int64_t x385 = INT64_MAX;
int32_t x399 = INT32_MAX;
static volatile int32_t t97 = 972697;
int8_t x406 = INT8_MIN;
static uint8_t x409 = 29U;
uint8_t x411 = 15U;
int8_t x412 = INT8_MIN;
static int32_t t102 = -117693708;
volatile uint64_t x421 = UINT64_MAX;
uint16_t x422 = 14326U;
volatile uint64_t x423 = 332302744262639LLU;
static int64_t x424 = 9415640286717032LL;
static uint64_t x425 = 9150374093561078328LLU;
int64_t t104 = 0LL;
int8_t x431 = INT8_MAX;
int8_t x437 = INT8_MAX;
int8_t x440 = INT8_MIN;
int64_t x443 = INT64_MIN;
static int16_t x452 = 232;
uint64_t t110 = 60LLU;
volatile uint32_t x458 = UINT32_MAX;
int32_t t111 = 33656441;
int32_t x461 = INT32_MAX;
uint32_t x463 = 1299U;
int32_t x471 = INT32_MIN;
int32_t x475 = -18;
static uint32_t x477 = 747339223U;
int8_t x478 = INT8_MIN;
volatile int32_t t116 = -1362699;
int32_t x488 = -42155528;
int8_t x489 = 24;
volatile uint16_t x496 = 21263U;
int32_t t120 = -26325977;
static int32_t x497 = INT32_MIN;
uint16_t x504 = 6U;
int32_t t122 = 33;
int16_t x511 = -84;
int16_t x515 = INT16_MAX;
int8_t x545 = INT8_MAX;
volatile int64_t t131 = -250LL;
int8_t x549 = -10;
uint32_t t134 = 51314665U;
uint8_t x561 = UINT8_MAX;
uint32_t x568 = 440604766U;
volatile uint32_t t136 = 118813656U;
int64_t x577 = -44564208LL;
int8_t x581 = 27;
static uint16_t x582 = 1U;
static int16_t x584 = -1;
volatile int8_t x585 = INT8_MIN;
uint64_t x587 = 10054125828LLU;
int16_t x592 = -1;
int16_t x593 = INT16_MIN;
volatile int64_t x597 = INT64_MIN;
int64_t x601 = -1006851116702693599LL;
volatile int64_t x612 = INT64_MIN;
static int64_t x613 = INT64_MIN;
static int64_t x615 = INT64_MAX;
uint32_t x618 = 3U;
uint64_t x620 = 24499604776379LLU;
uint64_t t148 = 90428374LLU;
static int16_t x633 = 1899;
static int16_t x638 = -1;
uint8_t x642 = UINT8_MAX;
int32_t x650 = INT32_MIN;
uint32_t x651 = UINT32_MAX;
uint8_t x655 = 3U;
int64_t x662 = INT64_MIN;
int8_t x669 = -1;
int8_t x678 = 1;
int8_t x683 = 25;
int32_t x692 = -1;
static uint8_t x702 = 3U;
static uint8_t x704 = 8U;
int32_t x706 = 2299;
int32_t t172 = 9;
uint32_t t178 = 702U;
uint8_t x751 = UINT8_MAX;
int32_t x755 = INT32_MIN;
static volatile int32_t t181 = -1;
volatile uint64_t x788 = UINT64_MAX;
uint16_t x792 = 30567U;
int64_t x796 = 3LL;
int8_t x800 = INT8_MIN;
int64_t x801 = -760313892889LL;
int8_t x802 = 1;
volatile int32_t t193 = -19803952;
uint32_t x805 = 25936U;
static volatile uint32_t x812 = 43U;
int32_t x816 = 114;
uint32_t t199 = 31754U;


void f0(void) {
    	int64_t x1 = 22LL;
	int64_t x4 = -1LL;
	int64_t t0 = -267330369087039LL;

    t0 = ((x1>(x2&x3))%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x8 = UINT8_MAX;

    t1 = ((x5>(x6&x7))%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MIN;
	volatile int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -1703390;

    t2 = ((x9>(x10&x11))%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -618311964LL;
	uint8_t x16 = 3U;
	volatile int32_t t3 = 411324030;

    t3 = ((x13>(x14&x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	int8_t x18 = -1;
	volatile int32_t t4 = 654582063;

    t4 = ((x17>(x18&x19))%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint16_t x23 = 150U;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = -219697533;

    t5 = ((x21>(x22&x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	uint16_t x26 = UINT16_MAX;
	static int8_t x27 = 57;
	int16_t x28 = -791;
	int32_t t6 = 18837785;

    t6 = ((x25>(x26&x27))%x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static volatile uint32_t x30 = 1305U;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = -306580698;

    t7 = ((x29>(x30&x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MAX;
	uint8_t x34 = 7U;
	volatile int16_t x35 = INT16_MAX;
	static int16_t x36 = -1;

    t8 = ((x33>(x34&x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint8_t x38 = 41U;
	static int8_t x39 = INT8_MAX;
	uint16_t x40 = 12954U;
	static volatile int32_t t9 = 221869;

    t9 = ((x37>(x38&x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x41 = 3256299678LLU;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MAX;
	int64_t x44 = -26667939LL;
	volatile int64_t t10 = -15021705LL;

    t10 = ((x41>(x42&x43))%x44);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 839LLU;
	int16_t x47 = -2;
	int64_t x48 = -119815030LL;
	volatile int64_t t11 = -25408472392LL;

    t11 = ((x45>(x46&x47))%x48);

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x49 = UINT64_MAX;
	static uint32_t x50 = UINT32_MAX;
	int64_t x52 = 855312LL;
	static int64_t t12 = 1785979530984LL;

    t12 = ((x49>(x50&x51))%x52);

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x54 = 161152U;
	int32_t x55 = INT32_MIN;
	volatile int32_t t13 = -7;

    t13 = ((x53>(x54&x55))%x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	volatile int32_t x58 = -1;
	int16_t x59 = -1;
	uint64_t x60 = UINT64_MAX;
	static uint64_t t14 = 1400074LLU;

    t14 = ((x57>(x58&x59))%x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	static uint16_t x63 = UINT16_MAX;
	volatile uint64_t x64 = UINT64_MAX;
	static uint64_t t15 = 2143862524LLU;

    t15 = ((x61>(x62&x63))%x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	int16_t x66 = -16;
	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = 0;

    t16 = ((x65>(x66&x67))%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = -24;
	uint8_t x71 = 97U;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -390947832;

    t17 = ((x69>(x70&x71))%x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint8_t x74 = 1U;
	int64_t x75 = INT64_MAX;
	static int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -12183675;

    t18 = ((x73>(x74&x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static int64_t x78 = -775LL;
	volatile uint16_t x79 = 755U;
	static uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 3130LLU;

    t19 = ((x77>(x78&x79))%x80);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	int32_t t20 = 1011;

    t20 = ((x81>(x82&x83))%x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = 928375829;
	static volatile int8_t x87 = INT8_MAX;
	int16_t x88 = -1;
	volatile int32_t t21 = 109;

    t21 = ((x85>(x86&x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	static volatile int64_t x90 = INT64_MAX;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t22 = 12566249;

    t22 = ((x89>(x90&x91))%x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 189193U;
	uint16_t x94 = 1339U;
	static volatile int64_t x95 = INT64_MAX;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 3;

    t23 = ((x93>(x94&x95))%x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	int32_t x99 = -1;
	int16_t x100 = -799;
	static int32_t t24 = 683987777;

    t24 = ((x97>(x98&x99))%x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 8U;
	volatile int32_t t25 = -340406;

    t25 = ((x101>(x102&x103))%x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int64_t x106 = INT64_MAX;
	uint64_t x107 = 3709363016LLU;
	uint16_t x108 = 112U;
	volatile int32_t t26 = 1430;

    t26 = ((x105>(x106&x107))%x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MAX;
	uint64_t x111 = 1429956032604980LLU;
	int32_t x112 = -1;

    t27 = ((x109>(x110&x111))%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 16160624493898667LLU;
	static int8_t x114 = 12;
	int64_t x115 = INT64_MAX;
	int32_t t28 = 4;

    t28 = ((x113>(x114&x115))%x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x122 = INT8_MIN;
	int64_t x123 = 94837LL;
	int32_t x124 = INT32_MIN;
	volatile int32_t t29 = -1;

    t29 = ((x121>(x122&x123))%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = -4;
	uint32_t x126 = 7772U;
	int32_t x128 = -1565100;
	int32_t t30 = 14;

    t30 = ((x125>(x126&x127))%x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 1LLU;
	volatile uint64_t x130 = 2678127216801LLU;
	int64_t x131 = 11087396005386654LL;
	int32_t t31 = 1896084;

    t31 = ((x129>(x130&x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = 18778688908LLU;
	uint8_t x134 = 19U;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = 9;
	static volatile int32_t t32 = -7;

    t32 = ((x133>(x134&x135))%x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = 389U;
	static int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	uint8_t x140 = 3U;

    t33 = ((x137>(x138&x139))%x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x142 = -1;
	int8_t x144 = -1;
	int32_t t34 = -1812716;

    t34 = ((x141>(x142&x143))%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -472;
	volatile int16_t x150 = INT16_MIN;
	static uint8_t x151 = 0U;
	static int16_t x152 = 2;
	volatile int32_t t35 = -13186;

    t35 = ((x149>(x150&x151))%x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = 9U;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = -4;

    t36 = ((x153>(x154&x155))%x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MAX;
	int8_t x158 = 3;
	int8_t x159 = 1;
	static volatile int8_t x160 = -1;
	volatile int32_t t37 = -6411024;

    t37 = ((x157>(x158&x159))%x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x161 = INT64_MIN;
	int32_t x162 = -1;
	int32_t x163 = INT32_MAX;
	uint16_t x164 = 485U;
	static int32_t t38 = 70;

    t38 = ((x161>(x162&x163))%x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	static int32_t x166 = -1;
	uint8_t x167 = 0U;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t39 = 10;

    t39 = ((x165>(x166&x167))%x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 935783U;

    t40 = ((x169>(x170&x171))%x172);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = 119394U;
	int8_t x174 = 0;
	uint16_t x175 = UINT16_MAX;
	static volatile int32_t x176 = -1;
	static int32_t t41 = -6;

    t41 = ((x173>(x174&x175))%x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 5700392LLU;
	int16_t x178 = 1;
	int64_t x179 = INT64_MIN;
	volatile int32_t t42 = -18;

    t42 = ((x177>(x178&x179))%x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = 210993598282853LLU;
	int32_t x183 = -1;
	uint32_t x184 = 29200203U;
	uint32_t t43 = 2U;

    t43 = ((x181>(x182&x183))%x184);

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x185 = 6LLU;
	int16_t x186 = -1;
	uint8_t x187 = UINT8_MAX;
	uint16_t x188 = 28U;
	static volatile int32_t t44 = 321551974;

    t44 = ((x185>(x186&x187))%x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MAX;
	int32_t x192 = 353;
	static int32_t t45 = -631556435;

    t45 = ((x189>(x190&x191))%x192);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t t46 = -15429354;

    t46 = ((x193>(x194&x195))%x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MIN;
	uint32_t x198 = 115489317U;
	int8_t x199 = INT8_MAX;
	static int16_t x200 = INT16_MIN;

    t47 = ((x197>(x198&x199))%x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x202 = 1805171705570004404LL;
	volatile int16_t x203 = 0;
	uint64_t x204 = 135020403406LLU;
	volatile uint64_t t48 = 27LLU;

    t48 = ((x201>(x202&x203))%x204);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	static uint32_t x206 = 6022U;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = -1LL;
	volatile int64_t t49 = -1067650278577303LL;

    t49 = ((x205>(x206&x207))%x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -1LL;
	uint64_t x212 = 458568387856333204LLU;
	volatile uint64_t t50 = 544404612200648LLU;

    t50 = ((x209>(x210&x211))%x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = INT32_MIN;
	volatile uint8_t x214 = 25U;
	static int16_t x215 = -121;
	int32_t t51 = 116;

    t51 = ((x213>(x214&x215))%x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x218 = INT16_MIN;
	int8_t x219 = -1;
	static int64_t x220 = INT64_MAX;
	static int64_t t52 = 28849LL;

    t52 = ((x217>(x218&x219))%x220);

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 33496348690550956LLU;
	int32_t x222 = INT32_MIN;
	static int8_t x224 = -7;
	int32_t t53 = 85;

    t53 = ((x221>(x222&x223))%x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = -18;
	int64_t x226 = INT64_MIN;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MIN;
	volatile int32_t t54 = -284;

    t54 = ((x225>(x226&x227))%x228);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x229 = 495U;
	uint64_t x230 = 4400996749LLU;
	static volatile uint64_t x231 = UINT64_MAX;
	int32_t t55 = -3209121;

    t55 = ((x229>(x230&x231))%x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x234 = INT64_MIN;
	volatile uint32_t x235 = 699738U;
	int16_t x236 = -6;
	int32_t t56 = -156581132;

    t56 = ((x233>(x234&x235))%x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x237 = INT8_MAX;
	int64_t x239 = -1LL;
	int32_t t57 = -301514;

    t57 = ((x237>(x238&x239))%x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = UINT8_MAX;
	int8_t x242 = -1;
	int32_t x243 = INT32_MAX;
	uint32_t x244 = UINT32_MAX;
	uint32_t t58 = 24U;

    t58 = ((x241>(x242&x243))%x244);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = INT32_MIN;
	static int32_t x246 = -432623;
	int32_t x247 = INT32_MAX;
	int8_t x248 = -6;
	volatile int32_t t59 = 62997;

    t59 = ((x245>(x246&x247))%x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MIN;
	static int32_t x250 = -4035;
	static int32_t x251 = -479969;
	static int32_t t60 = 12;

    t60 = ((x249>(x250&x251))%x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MAX;
	int64_t x254 = -1LL;
	uint16_t x255 = UINT16_MAX;
	static volatile int8_t x256 = INT8_MIN;

    t61 = ((x253>(x254&x255))%x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x257 = UINT16_MAX;
	uint8_t x258 = 2U;
	int64_t x259 = -1LL;
	volatile int64_t x260 = 182351888LL;
	volatile int64_t t62 = 60207705604998501LL;

    t62 = ((x257>(x258&x259))%x260);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x263 = INT64_MIN;
	static volatile int64_t x264 = -152792858213839563LL;

    t63 = ((x261>(x262&x263))%x264);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	volatile int16_t x268 = -1;
	int32_t t64 = -5969;

    t64 = ((x265>(x266&x267))%x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = 973;
	int64_t x270 = INT64_MAX;
	int64_t x271 = -13053LL;
	uint16_t x272 = 524U;
	static int32_t t65 = -797;

    t65 = ((x269>(x270&x271))%x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x273 = UINT64_MAX;
	static uint32_t x274 = 2949U;
	int32_t x275 = INT32_MIN;
	int16_t x276 = -1;
	static int32_t t66 = 4259237;

    t66 = ((x273>(x274&x275))%x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x277 = 9U;
	int32_t x278 = INT32_MAX;
	int64_t x279 = INT64_MIN;
	static int64_t x280 = INT64_MIN;
	volatile int64_t t67 = -66334LL;

    t67 = ((x277>(x278&x279))%x280);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x282 = INT8_MAX;
	volatile uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t68 = 39967895;

    t68 = ((x281>(x282&x283))%x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x285 = INT16_MAX;
	uint8_t x286 = 5U;
	int32_t x287 = INT32_MAX;
	volatile uint32_t x288 = 113U;
	static uint32_t t69 = 95643269U;

    t69 = ((x285>(x286&x287))%x288);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = 3;
	static int64_t x290 = 543277LL;
	uint64_t x291 = 2710LLU;
	int32_t t70 = -90;

    t70 = ((x289>(x290&x291))%x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = UINT16_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	volatile uint16_t x295 = 10U;
	int16_t x296 = -13;
	int32_t t71 = -28;

    t71 = ((x293>(x294&x295))%x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x297 = 0U;
	static int16_t x298 = -1;
	int32_t x300 = INT32_MAX;
	int32_t t72 = -21;

    t72 = ((x297>(x298&x299))%x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MAX;
	uint32_t x303 = 4080894U;
	static int32_t x304 = INT32_MAX;
	volatile int32_t t73 = 0;

    t73 = ((x301>(x302&x303))%x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x305 = INT8_MAX;
	uint16_t x307 = UINT16_MAX;

    t74 = ((x305>(x306&x307))%x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x309 = 1;
	volatile int32_t x310 = -6928;
	uint16_t x311 = UINT16_MAX;
	volatile int64_t t75 = -130247826LL;

    t75 = ((x309>(x310&x311))%x312);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = 0;
	int8_t x315 = INT8_MIN;
	int64_t x316 = 15795478022727114LL;
	volatile int64_t t76 = 8LL;

    t76 = ((x313>(x314&x315))%x316);

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = INT16_MIN;
	static uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MAX;
	static volatile int64_t t77 = 10703LL;

    t77 = ((x317>(x318&x319))%x320);

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x321 = 62393771000LLU;
	int64_t x322 = -1LL;
	int8_t x323 = -14;
	static volatile uint8_t x324 = UINT8_MAX;
	int32_t t78 = 66036855;

    t78 = ((x321>(x322&x323))%x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 90U;
	static int32_t x326 = INT32_MAX;
	static int16_t x327 = -6;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t79 = 1;

    t79 = ((x325>(x326&x327))%x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x329 = 81463U;
	int16_t x330 = -1;
	uint32_t x331 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t80 = -1;

    t80 = ((x329>(x330&x331))%x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;

    t81 = ((x333>(x334&x335))%x336);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x338 = UINT64_MAX;
	static int64_t x339 = INT64_MAX;
	int64_t x340 = -1LL;
	int64_t t82 = -8376587630239599LL;

    t82 = ((x337>(x338&x339))%x340);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x342 = INT32_MIN;
	static int8_t x343 = INT8_MAX;
	static volatile uint8_t x344 = UINT8_MAX;
	int32_t t83 = -1512;

    t83 = ((x341>(x342&x343))%x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = UINT16_MAX;
	int64_t x346 = -1LL;
	int32_t x348 = -3637277;
	volatile int32_t t84 = -432;

    t84 = ((x345>(x346&x347))%x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = INT16_MAX;
	int16_t x350 = -1;
	int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t85 = -3494;

    t85 = ((x349>(x350&x351))%x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = 6190U;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -566515;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t86 = 469LLU;

    t86 = ((x353>(x354&x355))%x356);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 123U;
	int32_t x360 = INT32_MIN;
	int32_t t87 = 64;

    t87 = ((x357>(x358&x359))%x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	static volatile int64_t x364 = 13LL;

    t88 = ((x361>(x362&x363))%x364);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = INT8_MIN;
	static int64_t x367 = -3LL;
	uint16_t x368 = 1142U;
	volatile int32_t t89 = 8829628;

    t89 = ((x365>(x366&x367))%x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x369 = UINT8_MAX;
	uint8_t x371 = 18U;
	int64_t x372 = 31LL;
	volatile int64_t t90 = 56776614LL;

    t90 = ((x369>(x370&x371))%x372);

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x374 = 3338U;
	static uint64_t x375 = 62451733155612LLU;
	int16_t x376 = INT16_MIN;

    t91 = ((x373>(x374&x375))%x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x377 = 672583LLU;
	uint16_t x378 = 7U;
	int16_t x379 = INT16_MAX;
	volatile uint8_t x380 = 3U;
	int32_t t92 = 2411136;

    t92 = ((x377>(x378&x379))%x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x381 = INT64_MAX;
	int8_t x382 = INT8_MIN;
	static int64_t x383 = INT64_MAX;

    t93 = ((x381>(x382&x383))%x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = 11U;
	int8_t x388 = INT8_MAX;
	int32_t t94 = -6282120;

    t94 = ((x385>(x386&x387))%x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = 106;
	int64_t x390 = -2782407LL;
	int64_t x391 = INT64_MIN;
	int16_t x392 = 41;
	int32_t t95 = 1;

    t95 = ((x389>(x390&x391))%x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	uint16_t x395 = 115U;
	static volatile int16_t x396 = -1;
	volatile int32_t t96 = 19;

    t96 = ((x393>(x394&x395))%x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x397 = 21U;
	int64_t x398 = 15229215869627LL;
	static uint8_t x400 = 2U;

    t97 = ((x397>(x398&x399))%x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = -1;
	int8_t x402 = -1;
	int64_t x403 = -1LL;
	uint32_t x404 = UINT32_MAX;
	static uint32_t t98 = 2000225981U;

    t98 = ((x401>(x402&x403))%x404);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x405 = 24U;
	int32_t x407 = -189;
	static int64_t x408 = -1887089593851789925LL;
	int64_t t99 = -144271005LL;

    t99 = ((x405>(x406&x407))%x408);

    if (t99 != 1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x410 = 354980;
	int32_t t100 = 59624;

    t100 = ((x409>(x410&x411))%x412);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x413 = UINT16_MAX;
	int16_t x414 = -1;
	int8_t x415 = -1;
	static uint64_t x416 = 5930905779171371983LLU;
	uint64_t t101 = 17210LLU;

    t101 = ((x413>(x414&x415))%x416);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = 3U;
	static uint64_t x418 = 8275990426274341LLU;
	volatile uint8_t x419 = 2U;
	static uint8_t x420 = UINT8_MAX;

    t102 = ((x417>(x418&x419))%x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t t103 = 88164892081201976LL;

    t103 = ((x421>(x422&x423))%x424);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x426 = UINT32_MAX;
	uint64_t x427 = 25667270LLU;
	int64_t x428 = 4579031151059LL;

    t104 = ((x425>(x426&x427))%x428);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x430 = 10525990805LL;
	static volatile int16_t x432 = -1;
	static volatile int32_t t105 = 342115442;

    t105 = ((x429>(x430&x431))%x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x433 = 5025;
	uint64_t x434 = UINT64_MAX;
	uint8_t x435 = 64U;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t106 = 706485762;

    t106 = ((x433>(x434&x435))%x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x438 = 56874012;
	int64_t x439 = INT64_MIN;
	volatile int32_t t107 = 7;

    t107 = ((x437>(x438&x439))%x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = -1LL;
	static uint32_t x442 = 1116503U;
	uint16_t x444 = 54U;
	static int32_t t108 = -21673;

    t108 = ((x441>(x442&x443))%x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = INT8_MIN;
	uint8_t x450 = 4U;
	volatile int32_t x451 = INT32_MIN;
	volatile int32_t t109 = 51715679;

    t109 = ((x449>(x450&x451))%x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = -157;
	int32_t x454 = -1;
	static int32_t x455 = INT32_MAX;
	static volatile uint64_t x456 = 7578975713059405LLU;

    t110 = ((x453>(x454&x455))%x456);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = INT32_MIN;
	static int16_t x459 = -1;
	uint16_t x460 = 11713U;

    t111 = ((x457>(x458&x459))%x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x462 = -1;
	volatile uint8_t x464 = 24U;
	volatile int32_t t112 = -12;

    t112 = ((x461>(x462&x463))%x464);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x466 = -2;
	static uint16_t x467 = 14420U;
	int32_t x468 = 76171030;
	volatile int32_t t113 = 11209;

    t113 = ((x465>(x466&x467))%x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = -153;
	uint32_t x470 = 4411U;
	int32_t x472 = -7312062;
	static volatile int32_t t114 = -1641524;

    t114 = ((x469>(x470&x471))%x472);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x473 = 2476575519686033LLU;
	int64_t x474 = INT64_MAX;
	uint32_t x476 = 1133U;
	static uint32_t t115 = 15377U;

    t115 = ((x473>(x474&x475))%x476);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x479 = 7U;
	static int8_t x480 = INT8_MIN;

    t116 = ((x477>(x478&x479))%x480);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x481 = 1135LL;
	int16_t x482 = INT16_MAX;
	uint64_t x483 = UINT64_MAX;
	int64_t x484 = -40762224075939587LL;
	volatile int64_t t117 = 360027LL;

    t117 = ((x481>(x482&x483))%x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x485 = 4U;
	int8_t x486 = INT8_MIN;
	volatile uint16_t x487 = 94U;
	int32_t t118 = -1;

    t118 = ((x485>(x486&x487))%x488);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x490 = 26283U;
	int64_t x491 = -385535749LL;
	static volatile uint8_t x492 = 60U;
	int32_t t119 = 2;

    t119 = ((x489>(x490&x491))%x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = INT64_MAX;
	volatile int32_t x494 = -1;
	int32_t x495 = INT32_MIN;

    t120 = ((x493>(x494&x495))%x496);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x498 = 340948690LLU;
	int64_t x499 = -1LL;
	static volatile int8_t x500 = INT8_MAX;
	volatile int32_t t121 = -7693;

    t121 = ((x497>(x498&x499))%x500);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x501 = 57268667;
	static int32_t x502 = -7583728;
	int16_t x503 = INT16_MIN;

    t122 = ((x501>(x502&x503))%x504);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x509 = 1;
	static uint16_t x510 = UINT16_MAX;
	static uint64_t x512 = UINT64_MAX;
	volatile uint64_t t123 = 65200LLU;

    t123 = ((x509>(x510&x511))%x512);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x513 = INT8_MIN;
	uint32_t x514 = 366U;
	volatile uint16_t x516 = 198U;
	int32_t t124 = -222946940;

    t124 = ((x513>(x514&x515))%x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x517 = 135LLU;
	volatile int32_t x518 = INT32_MIN;
	volatile int16_t x519 = -1;
	uint64_t x520 = 126LLU;
	static volatile uint64_t t125 = 28828839662953824LLU;

    t125 = ((x517>(x518&x519))%x520);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x521 = -1;
	int8_t x522 = 0;
	static uint64_t x523 = UINT64_MAX;
	static uint16_t x524 = 58U;
	volatile int32_t t126 = 32376611;

    t126 = ((x521>(x522&x523))%x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x525 = 1;
	int32_t x526 = INT32_MIN;
	static uint16_t x527 = UINT16_MAX;
	int32_t x528 = INT32_MAX;
	int32_t t127 = 11251471;

    t127 = ((x525>(x526&x527))%x528);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x533 = 1U;
	int8_t x534 = -30;
	static int8_t x535 = 1;
	int64_t x536 = -1LL;
	int64_t t128 = -926055LL;

    t128 = ((x533>(x534&x535))%x536);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x537 = UINT64_MAX;
	uint8_t x538 = 3U;
	int16_t x539 = INT16_MAX;
	volatile uint64_t x540 = 1998775145LLU;
	static uint64_t t129 = 11165LLU;

    t129 = ((x537>(x538&x539))%x540);

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x541 = -1070;
	static int16_t x542 = -1;
	int64_t x543 = INT64_MIN;
	uint8_t x544 = 121U;
	int32_t t130 = 83584445;

    t130 = ((x541>(x542&x543))%x544);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x546 = 22U;
	int16_t x547 = -99;
	volatile int64_t x548 = -1LL;

    t131 = ((x545>(x546&x547))%x548);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x550 = -4;
	static int64_t x551 = INT64_MIN;
	int64_t x552 = 1991170203165736LL;
	static int64_t t132 = -44376595636315LL;

    t132 = ((x549>(x550&x551))%x552);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x553 = 101U;
	uint64_t x554 = UINT64_MAX;
	int32_t x555 = -1;
	int32_t x556 = INT32_MAX;
	int32_t t133 = -28203395;

    t133 = ((x553>(x554&x555))%x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x557 = 23U;
	int8_t x558 = INT8_MAX;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = 28782450U;

    t134 = ((x557>(x558&x559))%x560);

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x562 = UINT8_MAX;
	volatile uint64_t x563 = 1821595416LLU;
	static volatile int16_t x564 = INT16_MIN;
	static volatile int32_t t135 = -4757444;

    t135 = ((x561>(x562&x563))%x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MAX;
	static volatile int16_t x567 = -1;

    t136 = ((x565>(x566&x567))%x568);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = INT8_MIN;
	int16_t x574 = -732;
	uint64_t x575 = UINT64_MAX;
	int8_t x576 = INT8_MIN;
	int32_t t137 = 1;

    t137 = ((x573>(x574&x575))%x576);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x578 = INT64_MIN;
	int16_t x579 = INT16_MAX;
	int16_t x580 = INT16_MIN;
	volatile int32_t t138 = -1576;

    t138 = ((x577>(x578&x579))%x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x583 = 6;
	int32_t t139 = 122;

    t139 = ((x581>(x582&x583))%x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x586 = 125U;
	int32_t x588 = 1;
	volatile int32_t t140 = 3;

    t140 = ((x585>(x586&x587))%x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x589 = INT16_MAX;
	int32_t x590 = -1;
	int32_t x591 = 8971841;
	static volatile int32_t t141 = 0;

    t141 = ((x589>(x590&x591))%x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x594 = 7U;
	volatile int64_t x595 = 5566188368904467LL;
	static volatile int16_t x596 = INT16_MAX;
	int32_t t142 = -2827;

    t142 = ((x593>(x594&x595))%x596);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x598 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	volatile int32_t x600 = INT32_MIN;
	int32_t t143 = 33357880;

    t143 = ((x597>(x598&x599))%x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x602 = INT64_MIN;
	uint8_t x603 = 1U;
	uint8_t x604 = 1U;
	volatile int32_t t144 = 70;

    t144 = ((x601>(x602&x603))%x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x605 = 599244LL;
	int16_t x606 = -2179;
	volatile int64_t x607 = INT64_MAX;
	int32_t x608 = -1;
	int32_t t145 = 463829;

    t145 = ((x605>(x606&x607))%x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x609 = INT16_MIN;
	int16_t x610 = INT16_MIN;
	uint32_t x611 = 6600U;
	static volatile int64_t t146 = 972037177822124304LL;

    t146 = ((x609>(x610&x611))%x612);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x614 = INT64_MAX;
	int32_t x616 = 583;
	int32_t t147 = -1488109;

    t147 = ((x613>(x614&x615))%x616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x617 = INT64_MAX;
	int8_t x619 = INT8_MIN;

    t148 = ((x617>(x618&x619))%x620);

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x621 = INT32_MAX;
	uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 350625550648LLU;
	int8_t x624 = INT8_MIN;
	volatile int32_t t149 = -1;

    t149 = ((x621>(x622&x623))%x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x625 = -1;
	static int64_t x626 = INT64_MAX;
	volatile int16_t x627 = INT16_MIN;
	uint32_t x628 = UINT32_MAX;
	volatile uint32_t t150 = 101136658U;

    t150 = ((x625>(x626&x627))%x628);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x629 = 2413830LLU;
	uint8_t x630 = 4U;
	int8_t x631 = 55;
	static uint16_t x632 = 11437U;
	static int32_t t151 = -7;

    t151 = ((x629>(x630&x631))%x632);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x634 = INT8_MAX;
	static volatile int8_t x635 = INT8_MIN;
	uint8_t x636 = 40U;
	static int32_t t152 = 11077;

    t152 = ((x633>(x634&x635))%x636);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x637 = INT64_MAX;
	static volatile uint8_t x639 = 0U;
	static int8_t x640 = -1;
	int32_t t153 = -856243;

    t153 = ((x637>(x638&x639))%x640);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x641 = INT32_MAX;
	int64_t x643 = INT64_MIN;
	int16_t x644 = 13813;
	volatile int32_t t154 = 218281174;

    t154 = ((x641>(x642&x643))%x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = -1;
	uint16_t x646 = 3U;
	int16_t x647 = 2;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t155 = -26;

    t155 = ((x645>(x646&x647))%x648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = 24;
	volatile int64_t x652 = INT64_MIN;
	volatile int64_t t156 = -15483553681771LL;

    t156 = ((x649>(x650&x651))%x652);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x653 = -1LL;
	int8_t x654 = -57;
	int8_t x656 = -1;
	volatile int32_t t157 = -242511508;

    t157 = ((x653>(x654&x655))%x656);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x657 = 99LLU;
	uint16_t x658 = UINT16_MAX;
	int64_t x659 = INT64_MIN;
	volatile int64_t x660 = INT64_MIN;
	volatile int64_t t158 = 268245377904271LL;

    t158 = ((x657>(x658&x659))%x660);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x661 = 18102399027105595LLU;
	volatile int32_t x663 = INT32_MIN;
	int64_t x664 = 4076LL;
	volatile int64_t t159 = 229848650655LL;

    t159 = ((x661>(x662&x663))%x664);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x665 = 1LLU;
	uint32_t x666 = UINT32_MAX;
	static int16_t x667 = -1;
	static volatile int32_t x668 = INT32_MAX;
	int32_t t160 = 727;

    t160 = ((x665>(x666&x667))%x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x670 = -1;
	int64_t x671 = INT64_MIN;
	volatile int8_t x672 = -1;
	volatile int32_t t161 = 604;

    t161 = ((x669>(x670&x671))%x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x673 = 2U;
	int32_t x674 = -1;
	uint64_t x675 = 30623LLU;
	int64_t x676 = INT64_MAX;
	static volatile int64_t t162 = 6505450544601LL;

    t162 = ((x673>(x674&x675))%x676);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x677 = 65U;
	uint32_t x679 = UINT32_MAX;
	int32_t x680 = INT32_MAX;
	static volatile int32_t t163 = 1182;

    t163 = ((x677>(x678&x679))%x680);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x681 = -1;
	static volatile int64_t x682 = -1LL;
	static int64_t x684 = INT64_MAX;
	int64_t t164 = -16238257508680055LL;

    t164 = ((x681>(x682&x683))%x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x685 = INT16_MIN;
	uint32_t x686 = UINT32_MAX;
	uint64_t x687 = 1179LLU;
	int16_t x688 = -1;
	static volatile int32_t t165 = 5922;

    t165 = ((x685>(x686&x687))%x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x689 = -1;
	int8_t x690 = INT8_MIN;
	int32_t x691 = INT32_MIN;
	int32_t t166 = -2645;

    t166 = ((x689>(x690&x691))%x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x693 = INT16_MIN;
	static volatile int16_t x694 = INT16_MAX;
	int8_t x695 = -1;
	uint8_t x696 = 11U;
	volatile int32_t t167 = 49676;

    t167 = ((x693>(x694&x695))%x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x697 = UINT16_MAX;
	int64_t x698 = INT64_MIN;
	int32_t x699 = -1;
	int64_t x700 = -119157885016574LL;
	volatile int64_t t168 = 23LL;

    t168 = ((x697>(x698&x699))%x700);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x703 = -15282LL;
	int32_t t169 = -978;

    t169 = ((x701>(x702&x703))%x704);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	volatile int64_t x707 = INT64_MIN;
	int8_t x708 = INT8_MIN;
	int32_t t170 = 1079;

    t170 = ((x705>(x706&x707))%x708);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x709 = UINT16_MAX;
	uint32_t x710 = UINT32_MAX;
	static uint8_t x711 = 7U;
	static int64_t x712 = -1388138266LL;
	int64_t t171 = -277232808164531888LL;

    t171 = ((x709>(x710&x711))%x712);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x713 = INT16_MAX;
	int64_t x714 = INT64_MIN;
	int8_t x715 = INT8_MAX;
	int8_t x716 = 1;

    t172 = ((x713>(x714&x715))%x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x717 = INT16_MIN;
	uint16_t x718 = 5U;
	volatile uint16_t x719 = 40U;
	int64_t x720 = 428902169759LL;
	static int64_t t173 = -84399435892LL;

    t173 = ((x717>(x718&x719))%x720);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = -27;
	uint16_t x722 = 936U;
	static volatile int64_t x723 = -12LL;
	uint64_t x724 = 30478038098133LLU;
	volatile uint64_t t174 = 151434806760775552LLU;

    t174 = ((x721>(x722&x723))%x724);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x725 = 23LLU;
	int16_t x726 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	volatile int8_t x728 = INT8_MIN;
	volatile int32_t t175 = -107;

    t175 = ((x725>(x726&x727))%x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = 20U;
	volatile int32_t x730 = INT32_MAX;
	int32_t x731 = INT32_MIN;
	volatile int32_t x732 = -1;
	volatile int32_t t176 = 83;

    t176 = ((x729>(x730&x731))%x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x733 = -1;
	int8_t x734 = INT8_MAX;
	int16_t x735 = INT16_MIN;
	static int8_t x736 = INT8_MAX;
	volatile int32_t t177 = 3;

    t177 = ((x733>(x734&x735))%x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x737 = 5U;
	int16_t x738 = INT16_MIN;
	int8_t x739 = -1;
	static volatile uint32_t x740 = 1518197509U;

    t178 = ((x737>(x738&x739))%x740);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = INT32_MIN;
	int32_t x742 = -1;
	uint16_t x743 = 5022U;
	uint16_t x744 = 41U;
	int32_t t179 = -468;

    t179 = ((x741>(x742&x743))%x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x749 = INT64_MIN;
	uint32_t x750 = UINT32_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t180 = 142;

    t180 = ((x749>(x750&x751))%x752);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x753 = INT16_MIN;
	int64_t x754 = -428175LL;
	static int8_t x756 = INT8_MAX;

    t181 = ((x753>(x754&x755))%x756);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x757 = 1;
	uint64_t x758 = 1832LLU;
	static uint64_t x759 = 470LLU;
	int32_t x760 = INT32_MIN;
	volatile int32_t t182 = 4;

    t182 = ((x757>(x758&x759))%x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = 20589;
	static int32_t x762 = INT32_MIN;
	int32_t x763 = INT32_MAX;
	int32_t x764 = INT32_MAX;
	int32_t t183 = 206855;

    t183 = ((x761>(x762&x763))%x764);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x766 = -139769112;
	uint64_t x767 = 1318240728577411LLU;
	static uint16_t x768 = 20U;
	int32_t t184 = 20777108;

    t184 = ((x765>(x766&x767))%x768);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x769 = 2U;
	uint32_t x770 = UINT32_MAX;
	static int8_t x771 = -26;
	int64_t x772 = INT64_MIN;
	static int64_t t185 = 1645LL;

    t185 = ((x769>(x770&x771))%x772);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x773 = 1832U;
	int8_t x774 = INT8_MIN;
	static int16_t x775 = INT16_MIN;
	static volatile int64_t x776 = INT64_MIN;
	volatile int64_t t186 = -2587058018417LL;

    t186 = ((x773>(x774&x775))%x776);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x777 = UINT8_MAX;
	int8_t x778 = INT8_MAX;
	int64_t x779 = 1177868607LL;
	static int32_t x780 = -1;
	int32_t t187 = 145893672;

    t187 = ((x777>(x778&x779))%x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x781 = 6241104U;
	uint16_t x782 = 27675U;
	int16_t x783 = -1788;
	int8_t x784 = -14;
	static volatile int32_t t188 = 81;

    t188 = ((x781>(x782&x783))%x784);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x785 = -1;
	int16_t x786 = 2;
	int32_t x787 = -1;
	uint64_t t189 = 16LLU;

    t189 = ((x785>(x786&x787))%x788);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x789 = 12;
	int64_t x790 = INT64_MAX;
	static int16_t x791 = INT16_MIN;
	volatile int32_t t190 = 20;

    t190 = ((x789>(x790&x791))%x792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x793 = INT64_MIN;
	volatile int64_t x794 = 1309146733120870994LL;
	volatile int32_t x795 = INT32_MAX;
	volatile int64_t t191 = -258312331221647LL;

    t191 = ((x793>(x794&x795))%x796);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x797 = UINT32_MAX;
	uint8_t x798 = 90U;
	int16_t x799 = INT16_MAX;
	int32_t t192 = 146877;

    t192 = ((x797>(x798&x799))%x800);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x803 = INT32_MAX;
	int32_t x804 = -1;

    t193 = ((x801>(x802&x803))%x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x806 = 26431;
	static uint8_t x807 = UINT8_MAX;
	static int32_t x808 = -50927;
	int32_t t194 = -359764;

    t194 = ((x805>(x806&x807))%x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x809 = INT32_MIN;
	int8_t x810 = 4;
	static int16_t x811 = INT16_MAX;
	uint32_t t195 = 316U;

    t195 = ((x809>(x810&x811))%x812);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x813 = 15468U;
	uint8_t x814 = 3U;
	volatile int8_t x815 = -43;
	int32_t t196 = -24;

    t196 = ((x813>(x814&x815))%x816);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x817 = 8622LLU;
	volatile int32_t x818 = INT32_MIN;
	uint64_t x819 = 1728773033873510874LLU;
	int16_t x820 = -1;
	int32_t t197 = 2718;

    t197 = ((x817>(x818&x819))%x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x825 = 14U;
	int32_t x826 = INT32_MIN;
	static volatile int32_t x827 = INT32_MAX;
	uint8_t x828 = 5U;
	int32_t t198 = 516515381;

    t198 = ((x825>(x826&x827))%x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x829 = -1;
	uint64_t x830 = UINT64_MAX;
	int32_t x831 = INT32_MIN;
	volatile uint32_t x832 = 6600U;

    t199 = ((x829>(x830&x831))%x832);

    if (t199 != 1U) { NG(); } else { ; }
	
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

