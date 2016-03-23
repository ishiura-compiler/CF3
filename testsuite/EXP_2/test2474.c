
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

int8_t x2 = -1;
volatile uint8_t x11 = 119U;
int32_t t2 = 57251;
int64_t x13 = -258175LL;
int16_t x14 = INT16_MIN;
static int64_t x18 = INT64_MIN;
int32_t x19 = -1;
uint16_t x26 = 10693U;
uint64_t x28 = 267583078636021LLU;
int32_t t6 = -161879429;
static volatile uint16_t x30 = UINT16_MAX;
int8_t x31 = INT8_MAX;
int16_t x32 = 137;
int32_t t7 = 82589256;
static uint64_t x45 = 30LLU;
uint32_t x46 = 15U;
volatile int32_t x48 = INT32_MAX;
uint16_t x50 = 0U;
int8_t x60 = INT8_MAX;
int64_t x63 = 76LL;
volatile int8_t x67 = INT8_MIN;
volatile int32_t t16 = 13497;
int64_t x71 = -1253350742420LL;
static uint64_t x76 = 0LLU;
int32_t t19 = 940798;
static uint8_t x81 = 2U;
int32_t x83 = INT32_MIN;
static int8_t x87 = -1;
int32_t t21 = 23568917;
volatile uint64_t x91 = 39932LLU;
static int64_t x92 = INT64_MIN;
volatile int32_t t23 = -391;
int32_t t24 = 5;
int16_t x101 = 5;
int64_t x108 = INT64_MAX;
uint32_t x111 = 13333227U;
volatile int32_t t27 = 455987;
int64_t x113 = 4305611LL;
int8_t x114 = -1;
int32_t t28 = 104231900;
int32_t x117 = -1;
int16_t x126 = INT16_MIN;
uint64_t x133 = 81636368540LLU;
static volatile int32_t t33 = 29363903;
volatile uint64_t x140 = UINT64_MAX;
volatile int32_t t35 = -727823;
uint8_t x148 = 97U;
static int32_t x149 = -9747;
uint32_t x150 = 640031U;
int16_t x151 = -1;
volatile int32_t x161 = 0;
volatile int16_t x162 = 412;
volatile int32_t t40 = -251993860;
static int16_t x167 = -3;
int8_t x170 = INT8_MIN;
int32_t t44 = 194007084;
int16_t x186 = -1;
volatile int32_t t46 = 2186;
volatile int8_t x192 = -1;
static int8_t x195 = -1;
int8_t x197 = INT8_MAX;
volatile int32_t t49 = -207;
int8_t x201 = -1;
uint32_t x203 = 61U;
static volatile int32_t t52 = 0;
static volatile int32_t x216 = -197882689;
int16_t x218 = INT16_MAX;
uint8_t x223 = 23U;
static uint64_t x227 = 80775983166135LLU;
int16_t x231 = INT16_MAX;
uint64_t x244 = 3986364950801LLU;
volatile int32_t t60 = -8815;
volatile int32_t x247 = INT32_MIN;
int64_t x251 = 3114852470320554235LL;
int32_t x252 = 109635;
volatile int32_t t63 = 497636;
int32_t x263 = 30438;
static volatile int32_t t65 = 534;
uint8_t x269 = 77U;
uint8_t x272 = UINT8_MAX;
static int8_t x274 = 1;
uint64_t x281 = 3855934LLU;
static int16_t x288 = -1;
static volatile int32_t t71 = -75;
uint16_t x293 = 1U;
int8_t x296 = INT8_MIN;
int32_t t74 = -6006940;
static int32_t x301 = INT32_MIN;
static int32_t x306 = 87;
int8_t x312 = INT8_MIN;
uint16_t x319 = 21661U;
int8_t x326 = INT8_MAX;
int64_t x333 = -121LL;
int32_t t84 = -1;
int16_t x346 = INT16_MAX;
volatile int32_t t88 = 3025994;
static uint64_t x357 = 159558015911129LLU;
static volatile int64_t x358 = -1LL;
int8_t x362 = -40;
static volatile int32_t t92 = -493325761;
static int32_t t93 = 427464;
volatile uint64_t x377 = UINT64_MAX;
int64_t x379 = INT64_MAX;
uint16_t x384 = 3U;
volatile int32_t t95 = 1563;
volatile int32_t x385 = -21865;
int8_t x391 = 0;
int32_t t97 = -517;
uint8_t x395 = 3U;
int32_t x398 = -1;
int32_t x399 = INT32_MIN;
static int32_t x405 = -1;
uint64_t x410 = 1023048466LLU;
int16_t x412 = 3;
uint64_t x416 = 1924988964629LLU;
static int32_t x417 = -535;
static uint32_t x422 = UINT32_MAX;
int32_t t106 = -1;
volatile int8_t x433 = 3;
int16_t x441 = INT16_MIN;
static volatile uint32_t x443 = 107020899U;
uint16_t x457 = 2U;
uint64_t x458 = 631360LLU;
int32_t t114 = -1;
static uint64_t x461 = UINT64_MAX;
uint16_t x466 = UINT16_MAX;
int32_t t116 = -123586;
volatile int32_t x470 = -169;
int64_t x475 = INT64_MAX;
static uint32_t x476 = 14786907U;
static uint32_t x489 = UINT32_MAX;
static uint32_t x496 = 7403U;
int32_t t123 = 1972;
int16_t x497 = -711;
volatile int32_t t126 = 50240;
int64_t x520 = INT64_MIN;
int32_t t129 = 4641360;
int64_t x521 = -9789441230LL;
static uint16_t x524 = UINT16_MAX;
volatile int32_t x526 = -667659;
volatile int32_t t131 = -1247;
static uint8_t x529 = 3U;
uint8_t x534 = UINT8_MAX;
volatile uint16_t x538 = 3470U;
int64_t x540 = 5443384125390232LL;
int32_t t135 = -10;
volatile int8_t x555 = INT8_MAX;
int64_t x559 = -1LL;
uint64_t x560 = UINT64_MAX;
volatile int32_t t139 = -299;
int32_t x561 = INT32_MAX;
int16_t x562 = INT16_MAX;
int16_t x564 = -1;
int32_t x565 = -149;
int64_t x576 = INT64_MIN;
static uint64_t x578 = UINT64_MAX;
int32_t x580 = INT32_MIN;
static int32_t t144 = 61;
uint16_t x581 = UINT16_MAX;
volatile uint32_t x595 = 1114426U;
static int32_t t148 = 58336;
volatile uint64_t x600 = 131108377478581231LLU;
volatile int8_t x603 = INT8_MAX;
uint64_t x617 = UINT64_MAX;
uint64_t x619 = 3683LLU;
static int16_t x624 = -1;
int32_t t155 = -12371793;
static uint16_t x626 = UINT16_MAX;
uint32_t x632 = 25877U;
int8_t x636 = -1;
static int64_t x642 = 1857979370171992LL;
static volatile uint32_t x663 = UINT32_MAX;
static int8_t x665 = -1;
static uint32_t x667 = 1199U;
int32_t x668 = 0;
int8_t x677 = -2;
int32_t t169 = 1343098;
int32_t x683 = -373823;
int32_t t170 = 6;
uint16_t x689 = 877U;
int64_t x692 = 3206LL;
int16_t x693 = INT16_MIN;
uint32_t x697 = UINT32_MAX;
volatile int32_t x706 = -1;
int32_t x707 = INT32_MAX;
uint16_t x712 = 14U;
static uint8_t x714 = 49U;
uint8_t x724 = UINT8_MAX;
volatile int32_t t181 = 68744;
static volatile int32_t t182 = 891583003;
int16_t x738 = 3;
volatile int8_t x742 = INT8_MIN;
static int32_t t185 = 188082;
int32_t t186 = 159800186;
int8_t x766 = INT8_MIN;
int32_t x767 = -1;
static int32_t t191 = -68224325;
int64_t x773 = -1LL;
uint16_t x784 = UINT16_MAX;
volatile int32_t t195 = -6742;
volatile int64_t x786 = 306484439425107LL;
uint32_t x790 = 1050591U;
int32_t t198 = 0;
uint64_t x799 = 33636233093LLU;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x3 = 10;
	volatile int16_t x4 = 0;
	int32_t t0 = 95157584;

    t0 = ((x1>(x2|x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	int64_t x6 = -2626156LL;
	static int32_t x7 = -4;
	int32_t x8 = -56822581;
	static volatile int32_t t1 = 247;

    t1 = ((x5>(x6|x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1010LL;
	int64_t x10 = INT64_MIN;
	int64_t x12 = -1LL;

    t2 = ((x9>(x10|x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MAX;
	int32_t t3 = 1780;

    t3 = ((x13>(x14|x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 872906715140958082LLU;
	static int32_t x20 = 105711412;
	static volatile int32_t t4 = 55851;

    t4 = ((x17>(x18|x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static int8_t x22 = 1;
	int32_t x23 = INT32_MIN;
	volatile int32_t x24 = INT32_MIN;
	int32_t t5 = 4;

    t5 = ((x21>(x22|x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 11828640994794LL;
	static int16_t x27 = INT16_MAX;

    t6 = ((x25>(x26|x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;

    t7 = ((x29>(x30|x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -23027796041355480LL;
	uint16_t x34 = UINT16_MAX;
	static int32_t x35 = -1;
	volatile uint16_t x36 = UINT16_MAX;
	int32_t t8 = 0;

    t8 = ((x33>(x34|x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	volatile int16_t x38 = -1;
	int8_t x39 = 27;
	volatile uint64_t x40 = UINT64_MAX;
	int32_t t9 = 3651;

    t9 = ((x37>(x38|x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 261710728355039704LLU;
	static volatile int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = -1;

    t10 = ((x41>(x42|x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x47 = 9U;
	volatile int32_t t11 = -10;

    t11 = ((x45>(x46|x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -2041;
	volatile uint64_t x51 = 247LLU;
	static int32_t x52 = INT32_MIN;
	int32_t t12 = -80;

    t12 = ((x49>(x50|x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int64_t x54 = -16570015LL;
	int8_t x55 = INT8_MAX;
	int8_t x56 = -45;
	int32_t t13 = -522;

    t13 = ((x53>(x54|x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 0U;
	int64_t x59 = INT64_MAX;
	int32_t t14 = 327;

    t14 = ((x57>(x58|x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint64_t x64 = 1LLU;
	volatile int32_t t15 = -1;

    t15 = ((x61>(x62|x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -1230045LL;
	int32_t x66 = -1;
	uint64_t x68 = 5621534278280LLU;

    t16 = ((x65>(x66|x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x70 = -1;
	int16_t x72 = -6503;
	volatile int32_t t17 = 354624509;

    t17 = ((x69>(x70|x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -1LL;
	int32_t t18 = 7244;

    t18 = ((x73>(x74|x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -5510;
	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = 6U;
	int64_t x80 = -1LL;

    t19 = ((x77>(x78|x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x82 = INT8_MIN;
	volatile int16_t x84 = 5695;
	static volatile int32_t t20 = -2;

    t20 = ((x81>(x82|x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x86 = -4896601619014773LL;
	int32_t x88 = INT32_MAX;

    t21 = ((x85>(x86|x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	int32_t t22 = 213899;

    t22 = ((x89>(x90|x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x94 = 15167;
	static volatile int16_t x95 = INT16_MAX;
	static int16_t x96 = 4244;

    t23 = ((x93>(x94|x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 352561LLU;
	uint64_t x98 = UINT64_MAX;
	uint32_t x99 = 41U;
	int32_t x100 = INT32_MAX;

    t24 = ((x97>(x98|x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	int32_t x103 = -22315717;
	int16_t x104 = 2176;
	int32_t t25 = 8;

    t25 = ((x101>(x102|x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	static volatile int16_t x106 = INT16_MIN;
	uint8_t x107 = UINT8_MAX;
	int32_t t26 = 84;

    t26 = ((x105>(x106|x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x110 = -6;
	int64_t x112 = INT64_MIN;

    t27 = ((x109>(x110|x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x115 = INT16_MAX;
	uint64_t x116 = UINT64_MAX;

    t28 = ((x113>(x114|x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = 2092;
	static int32_t x119 = INT32_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = -932732371;

    t29 = ((x117>(x118|x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = -1LL;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = 1334U;
	static int8_t x124 = -6;
	int32_t t30 = -56457;

    t30 = ((x121>(x122|x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x125 = 0;
	static uint16_t x127 = 17U;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 110458;

    t31 = ((x125>(x126|x127))<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 11025387U;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -53;

    t32 = ((x129>(x130|x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = 8755U;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MAX;

    t33 = ((x133>(x134|x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = INT32_MIN;
	int32_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int32_t t34 = 1;

    t34 = ((x137>(x138|x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 1972;
	uint16_t x142 = UINT16_MAX;
	volatile int32_t x143 = 1939088;
	volatile int16_t x144 = 507;

    t35 = ((x141>(x142|x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 4U;
	int64_t x146 = -50351365964423139LL;
	uint32_t x147 = UINT32_MAX;
	static int32_t t36 = -103;

    t36 = ((x145>(x146|x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x152 = -1;
	int32_t t37 = 6;

    t37 = ((x149>(x150|x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 969;
	volatile uint64_t x154 = 56583455257LLU;
	volatile int64_t x155 = -1LL;
	int64_t x156 = -1202788187177511464LL;
	int32_t t38 = -1900;

    t38 = ((x153>(x154|x155))<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int8_t x158 = INT8_MIN;
	int16_t x159 = -1;
	int64_t x160 = 896LL;
	volatile int32_t t39 = 124;

    t39 = ((x157>(x158|x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x163 = 64449569LLU;
	volatile uint64_t x164 = 49547949937LLU;

    t40 = ((x161>(x162|x163))<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	int8_t x166 = -16;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 254;

    t41 = ((x165>(x166|x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int8_t x171 = 0;
	volatile int32_t x172 = -5856980;
	static volatile int32_t t42 = -24517363;

    t42 = ((x169>(x170|x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	uint16_t x174 = 956U;
	int16_t x175 = -5;
	int8_t x176 = INT8_MIN;
	int32_t t43 = 1896;

    t43 = ((x173>(x174|x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 254U;
	uint32_t x178 = 14U;
	volatile int32_t x179 = 2252765;
	int16_t x180 = INT16_MIN;

    t44 = ((x177>(x178|x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	uint64_t x182 = 116968659787LLU;
	int16_t x183 = 104;
	static int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 212;

    t45 = ((x181>(x182|x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = 12845U;

    t46 = ((x185>(x186|x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile int8_t x190 = 3;
	int16_t x191 = INT16_MIN;
	volatile int32_t t47 = -17994887;

    t47 = ((x189>(x190|x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 1579;
	int8_t x194 = 1;
	static volatile int8_t x196 = 0;
	volatile int32_t t48 = -11696039;

    t48 = ((x193>(x194|x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x198 = UINT32_MAX;
	static int64_t x199 = INT64_MAX;
	uint32_t x200 = 423392U;

    t49 = ((x197>(x198|x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 1476U;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -66551;

    t50 = ((x201>(x202|x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 1U;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MAX;
	static int32_t t51 = -555379173;

    t51 = ((x205>(x206|x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1454LL;
	static int16_t x210 = 3142;
	static uint32_t x211 = 6877U;
	static int32_t x212 = -1;

    t52 = ((x209>(x210|x211))<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 450;
	int64_t x214 = INT64_MIN;
	int16_t x215 = 111;
	volatile int32_t t53 = -382977;

    t53 = ((x213>(x214|x215))<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int8_t x219 = INT8_MAX;
	volatile int64_t x220 = INT64_MIN;
	int32_t t54 = -10802319;

    t54 = ((x217>(x218|x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	uint64_t x222 = UINT64_MAX;
	uint64_t x224 = 70286886791096939LLU;
	int32_t t55 = -52;

    t55 = ((x221>(x222|x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = 810LLU;
	int32_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;
	int32_t t56 = 23478;

    t56 = ((x225>(x226|x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = -927135;
	static int16_t x230 = INT16_MAX;
	int16_t x232 = -1;
	int32_t t57 = 1925699;

    t57 = ((x229>(x230|x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int64_t x234 = -26LL;
	int64_t x235 = 591344LL;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 4;

    t58 = ((x233>(x234|x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	volatile int64_t x238 = INT64_MIN;
	uint8_t x239 = UINT8_MAX;
	static int64_t x240 = INT64_MIN;
	int32_t t59 = 0;

    t59 = ((x237>(x238|x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;

    t60 = ((x241>(x242|x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 10;
	uint64_t x246 = 20659932351666520LLU;
	int16_t x248 = INT16_MIN;
	static int32_t t61 = 8;

    t61 = ((x245>(x246|x247))<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x249 = 1272U;
	volatile int32_t x250 = -1;
	static int32_t t62 = 17594113;

    t62 = ((x249>(x250|x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 1U;
	uint64_t x254 = UINT64_MAX;
	volatile int16_t x255 = 162;
	int32_t x256 = -1;

    t63 = ((x253>(x254|x255))<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 63;
	static uint64_t x258 = 244825558996700LLU;
	int8_t x259 = -47;
	uint32_t x260 = 1126U;
	volatile int32_t t64 = -1;

    t64 = ((x257>(x258|x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 4965LLU;
	int32_t x262 = INT32_MIN;
	int32_t x264 = -38656580;

    t65 = ((x261>(x262|x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	static uint8_t x266 = 57U;
	static uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t66 = -1025;

    t66 = ((x265>(x266|x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x270 = 19556;
	int8_t x271 = 15;
	int32_t t67 = -161;

    t67 = ((x269>(x270|x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -3;
	static int32_t x275 = -86119098;
	volatile uint8_t x276 = 0U;
	volatile int32_t t68 = -2885474;

    t68 = ((x273>(x274|x275))<=x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = -3;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t69 = 1;

    t69 = ((x277>(x278|x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x282 = INT64_MIN;
	int16_t x283 = -1;
	static int32_t x284 = 33685219;
	int32_t t70 = -3768963;

    t70 = ((x281>(x282|x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint8_t x286 = 103U;
	volatile uint8_t x287 = 19U;

    t71 = ((x285>(x286|x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = -1;
	static int16_t x290 = 3;
	static uint64_t x291 = 2079669LLU;
	static int16_t x292 = INT16_MIN;
	int32_t t72 = 405956282;

    t72 = ((x289>(x290|x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = 349045U;
	volatile int16_t x295 = -468;
	static int32_t t73 = 1;

    t73 = ((x293>(x294|x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x297 = 33703751LL;
	int64_t x298 = INT64_MAX;
	uint32_t x299 = UINT32_MAX;
	static int32_t x300 = INT32_MIN;

    t74 = ((x297>(x298|x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = INT32_MAX;
	volatile uint32_t x303 = UINT32_MAX;
	int8_t x304 = -9;
	int32_t t75 = 49815;

    t75 = ((x301>(x302|x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 32U;
	static volatile uint32_t x307 = 26U;
	int64_t x308 = -1LL;
	volatile int32_t t76 = -109007839;

    t76 = ((x305>(x306|x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -1LL;
	int64_t x310 = -1LL;
	volatile int64_t x311 = INT64_MIN;
	volatile int32_t t77 = 0;

    t77 = ((x309>(x310|x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = INT64_MAX;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -132;

    t78 = ((x313>(x314|x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = 59897;
	int16_t x318 = INT16_MIN;
	int64_t x320 = 9213212514383470LL;
	int32_t t79 = 183124;

    t79 = ((x317>(x318|x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 2757351381935592LLU;
	static int16_t x322 = INT16_MAX;
	uint8_t x323 = UINT8_MAX;
	static int64_t x324 = 35351LL;
	static int32_t t80 = 5;

    t80 = ((x321>(x322|x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = 0;
	int8_t x327 = 12;
	uint16_t x328 = 119U;
	static int32_t t81 = 401;

    t81 = ((x325>(x326|x327))<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = 1U;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -3870;

    t82 = ((x329>(x330|x331))<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = UINT8_MAX;
	static int16_t x335 = INT16_MIN;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -16638303;

    t83 = ((x333>(x334|x335))<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 119LLU;
	volatile int64_t x338 = 201LL;
	int64_t x339 = 30238524469552093LL;
	static volatile int8_t x340 = -16;

    t84 = ((x337>(x338|x339))<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MAX;
	int8_t x342 = -1;
	int16_t x343 = 1;
	int32_t x344 = INT32_MIN;
	static int32_t t85 = -4587318;

    t85 = ((x341>(x342|x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	static volatile int8_t x347 = INT8_MIN;
	volatile uint64_t x348 = 206LLU;
	volatile int32_t t86 = 2;

    t86 = ((x345>(x346|x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -1;
	static int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 1;

    t87 = ((x349>(x350|x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	int8_t x354 = INT8_MIN;
	static int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MAX;

    t88 = ((x353>(x354|x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x359 = INT64_MIN;
	static uint16_t x360 = 10955U;
	int32_t t89 = 40;

    t89 = ((x357>(x358|x359))<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int16_t x363 = 121;
	int8_t x364 = INT8_MIN;
	int32_t t90 = -252149;

    t90 = ((x361>(x362|x363))<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -61990LL;
	volatile uint16_t x366 = 3U;
	int8_t x367 = INT8_MIN;
	static volatile int64_t x368 = -1LL;
	volatile int32_t t91 = 1786;

    t91 = ((x365>(x366|x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MIN;
	volatile int32_t x370 = INT32_MIN;
	volatile uint16_t x371 = UINT16_MAX;
	uint32_t x372 = UINT32_MAX;

    t92 = ((x369>(x370|x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x373 = UINT8_MAX;
	static volatile uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MAX;
	uint32_t x376 = 1U;

    t93 = ((x373>(x374|x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MIN;
	int32_t x380 = -1;
	static volatile int32_t t94 = 771226;

    t94 = ((x377>(x378|x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = 3U;

    t95 = ((x381>(x382|x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x386 = UINT32_MAX;
	static int32_t x387 = 26126;
	uint16_t x388 = 15U;
	int32_t t96 = 17529;

    t96 = ((x385>(x386|x387))<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = INT32_MIN;
	static int16_t x392 = INT16_MIN;

    t97 = ((x389>(x390|x391))<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x393 = 75U;
	int8_t x394 = -1;
	int64_t x396 = 190656LL;
	volatile int32_t t98 = 0;

    t98 = ((x393>(x394|x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -1LL;
	int16_t x400 = INT16_MAX;
	int32_t t99 = -64994114;

    t99 = ((x397>(x398|x399))<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 71984109898LL;
	int64_t x402 = -1LL;
	uint8_t x403 = 6U;
	static int8_t x404 = INT8_MIN;
	int32_t t100 = -49;

    t100 = ((x401>(x402|x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -1;
	uint16_t x407 = 8153U;
	int64_t x408 = INT64_MAX;
	volatile int32_t t101 = 4054413;

    t101 = ((x405>(x406|x407))<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 1410714LLU;
	uint16_t x411 = 2U;
	int32_t t102 = -1;

    t102 = ((x409>(x410|x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = 561;
	int32_t x414 = INT32_MAX;
	int16_t x415 = -7;
	volatile int32_t t103 = -1;

    t103 = ((x413>(x414|x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x418 = 1U;
	int32_t x419 = 928;
	static uint64_t x420 = 92LLU;
	int32_t t104 = -134438096;

    t104 = ((x417>(x418|x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = UINT32_MAX;
	static uint8_t x423 = 17U;
	int32_t x424 = -17672254;
	int32_t t105 = 439;

    t105 = ((x421>(x422|x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 1;
	uint32_t x426 = UINT32_MAX;
	volatile int64_t x427 = 1591224040LL;
	static uint32_t x428 = 15451U;

    t106 = ((x425>(x426|x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = UINT8_MAX;
	static int32_t x430 = INT32_MIN;
	volatile int8_t x431 = -1;
	volatile int8_t x432 = INT8_MIN;
	int32_t t107 = -106;

    t107 = ((x429>(x430|x431))<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x434 = INT16_MIN;
	uint8_t x435 = 1U;
	int64_t x436 = 100389793251313LL;
	volatile int32_t t108 = 16941;

    t108 = ((x433>(x434|x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -47546LL;
	volatile uint16_t x438 = 1U;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = 29168079486LL;
	volatile int32_t t109 = 11161907;

    t109 = ((x437>(x438|x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x442 = INT32_MIN;
	static int16_t x444 = 222;
	static int32_t t110 = -919573261;

    t110 = ((x441>(x442|x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = 11;
	volatile int32_t x446 = 15;
	int32_t x447 = 761761;
	volatile int64_t x448 = -1LL;
	static int32_t t111 = -7;

    t111 = ((x445>(x446|x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	int32_t x450 = INT32_MIN;
	volatile uint8_t x451 = UINT8_MAX;
	static uint64_t x452 = 1180956687347530LLU;
	int32_t t112 = 19619;

    t112 = ((x449>(x450|x451))<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = 455609U;
	uint8_t x454 = 97U;
	static int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	int32_t t113 = 18598690;

    t113 = ((x453>(x454|x455))<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x459 = INT16_MAX;
	volatile int8_t x460 = INT8_MIN;

    t114 = ((x457>(x458|x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 18U;
	int64_t x463 = INT64_MIN;
	volatile int32_t x464 = -1;
	static volatile int32_t t115 = -888787;

    t115 = ((x461>(x462|x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile int64_t x467 = -9651LL;
	int32_t x468 = INT32_MAX;

    t116 = ((x465>(x466|x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = INT16_MIN;
	int32_t x471 = -28;
	uint64_t x472 = 44789549023LLU;
	int32_t t117 = 714;

    t117 = ((x469>(x470|x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = 1;
	int32_t x474 = INT32_MIN;
	int32_t t118 = -1763991;

    t118 = ((x473>(x474|x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x477 = 1;
	int8_t x478 = INT8_MAX;
	static int64_t x479 = -1LL;
	int64_t x480 = 1LL;
	volatile int32_t t119 = 1;

    t119 = ((x477>(x478|x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 1U;
	int16_t x482 = 2227;
	int32_t x483 = -31;
	int64_t x484 = 8789811048486LL;
	int32_t t120 = -12954;

    t120 = ((x481>(x482|x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = 80;
	int64_t x486 = INT64_MIN;
	int16_t x487 = -16;
	static int8_t x488 = 1;
	int32_t t121 = 56243692;

    t121 = ((x485>(x486|x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x490 = INT64_MIN;
	uint32_t x491 = 219875U;
	int32_t x492 = -2179002;
	volatile int32_t t122 = -401;

    t122 = ((x489>(x490|x491))<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	int16_t x495 = INT16_MAX;

    t123 = ((x493>(x494|x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x498 = 2203841511LLU;
	static volatile int64_t x499 = INT64_MAX;
	int64_t x500 = INT64_MIN;
	int32_t t124 = 257429624;

    t124 = ((x497>(x498|x499))<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 30502LLU;
	int16_t x502 = 3683;
	uint32_t x503 = UINT32_MAX;
	static uint8_t x504 = 1U;
	static volatile int32_t t125 = -11117613;

    t125 = ((x501>(x502|x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = -5;
	volatile int16_t x507 = -28;
	volatile int16_t x508 = INT16_MAX;

    t126 = ((x505>(x506|x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	static uint64_t x510 = UINT64_MAX;
	volatile int32_t x511 = INT32_MIN;
	volatile uint16_t x512 = 120U;
	volatile int32_t t127 = 5462312;

    t127 = ((x509>(x510|x511))<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = -1;
	volatile int8_t x515 = INT8_MAX;
	uint16_t x516 = 0U;
	static volatile int32_t t128 = -1;

    t128 = ((x513>(x514|x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	volatile int16_t x518 = INT16_MIN;
	int8_t x519 = INT8_MIN;

    t129 = ((x517>(x518|x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x522 = 8;
	static int8_t x523 = INT8_MAX;
	static int32_t t130 = 225001276;

    t130 = ((x521>(x522|x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	uint64_t x527 = 108LLU;
	int8_t x528 = INT8_MAX;

    t131 = ((x525>(x526|x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = -1;
	volatile int32_t x531 = INT32_MIN;
	int32_t x532 = 836;
	volatile int32_t t132 = 161697;

    t132 = ((x529>(x530|x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MAX;
	static uint64_t x535 = UINT64_MAX;
	int16_t x536 = -120;
	int32_t t133 = -1;

    t133 = ((x533>(x534|x535))<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = INT64_MIN;
	volatile int8_t x539 = 14;
	static volatile int32_t t134 = 62805;

    t134 = ((x537>(x538|x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -1LL;
	int64_t x542 = INT64_MAX;
	int16_t x543 = -1;
	int8_t x544 = INT8_MAX;

    t135 = ((x541>(x542|x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = -2562;
	uint32_t x546 = 2U;
	int32_t x547 = 731;
	int8_t x548 = INT8_MAX;
	int32_t t136 = -1;

    t136 = ((x545>(x546|x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 387662;
	int32_t x550 = -1;
	static uint32_t x551 = UINT32_MAX;
	int8_t x552 = -1;
	int32_t t137 = 942325420;

    t137 = ((x549>(x550|x551))<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -118732604LL;
	int16_t x554 = -1;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t138 = -40;

    t138 = ((x553>(x554|x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MAX;
	static int16_t x558 = INT16_MIN;

    t139 = ((x557>(x558|x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x563 = INT16_MIN;
	static volatile int32_t t140 = 552829232;

    t140 = ((x561>(x562|x563))<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x566 = 59191694LLU;
	uint16_t x567 = 2012U;
	uint32_t x568 = UINT32_MAX;
	volatile int32_t t141 = 18040;

    t141 = ((x565>(x566|x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = -65039;
	static int32_t x570 = 973;
	int32_t x571 = INT32_MIN;
	volatile uint64_t x572 = 3834LLU;
	int32_t t142 = -234219885;

    t142 = ((x569>(x570|x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 967312999;
	static int16_t x574 = INT16_MIN;
	int64_t x575 = -1LL;
	int32_t t143 = 11940;

    t143 = ((x573>(x574|x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 411719;
	int64_t x579 = INT64_MAX;

    t144 = ((x577>(x578|x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = INT16_MAX;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = -12;
	static int32_t t145 = -6857;

    t145 = ((x581>(x582|x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x585 = 476548LLU;
	int64_t x586 = INT64_MIN;
	int64_t x587 = -497930LL;
	int32_t x588 = 877;
	static int32_t t146 = 8327555;

    t146 = ((x585>(x586|x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x590 = 1U;
	int32_t x591 = 2685;
	int32_t x592 = INT32_MIN;
	int32_t t147 = -15269410;

    t147 = ((x589>(x590|x591))<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -924;
	int8_t x594 = 11;
	int32_t x596 = INT32_MIN;

    t148 = ((x593>(x594|x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = 3098922;
	uint16_t x598 = UINT16_MAX;
	uint64_t x599 = 206168598080035178LLU;
	int32_t t149 = -4582318;

    t149 = ((x597>(x598|x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x601 = 92LLU;
	static int16_t x602 = INT16_MIN;
	int8_t x604 = -1;
	int32_t t150 = -15950619;

    t150 = ((x601>(x602|x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = -1LL;
	uint64_t x606 = 3361LLU;
	int32_t x607 = -66828763;
	volatile int64_t x608 = INT64_MAX;
	volatile int32_t t151 = -15237;

    t151 = ((x605>(x606|x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	uint64_t x610 = 2557438328LLU;
	int64_t x611 = -394LL;
	int8_t x612 = -1;
	static int32_t t152 = 10664;

    t152 = ((x609>(x610|x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 1668U;
	int64_t x614 = INT64_MAX;
	static volatile int32_t x615 = -1;
	uint64_t x616 = UINT64_MAX;
	static int32_t t153 = -933323291;

    t153 = ((x613>(x614|x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x618 = 1222LLU;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t154 = 1246263;

    t154 = ((x617>(x618|x619))<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x621 = INT64_MIN;
	int16_t x622 = -1;
	int8_t x623 = 62;

    t155 = ((x621>(x622|x623))<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = 2942;
	volatile uint32_t x627 = UINT32_MAX;
	static int64_t x628 = -1LL;
	static int32_t t156 = 190560199;

    t156 = ((x625>(x626|x627))<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	uint32_t x631 = 5931U;
	static int32_t t157 = 351;

    t157 = ((x629>(x630|x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MAX;
	int64_t x634 = -88859361873348125LL;
	volatile uint16_t x635 = 303U;
	int32_t t158 = 7;

    t158 = ((x633>(x634|x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = -1LL;
	static uint16_t x638 = 13U;
	int8_t x639 = 0;
	uint8_t x640 = 29U;
	int32_t t159 = -388256;

    t159 = ((x637>(x638|x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 762904515597425LL;
	static uint8_t x643 = UINT8_MAX;
	static int8_t x644 = INT8_MIN;
	static int32_t t160 = -173732;

    t160 = ((x641>(x642|x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 1830163532U;
	static int8_t x646 = -1;
	static int8_t x647 = INT8_MAX;
	int8_t x648 = -1;
	int32_t t161 = -21;

    t161 = ((x645>(x646|x647))<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = INT8_MIN;
	static int32_t x651 = -1;
	int32_t x652 = -1;
	volatile int32_t t162 = 12;

    t162 = ((x649>(x650|x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	int8_t x654 = 6;
	static uint64_t x655 = UINT64_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t163 = 0;

    t163 = ((x653>(x654|x655))<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x657 = INT8_MIN;
	uint64_t x658 = 3473428046597LLU;
	int8_t x659 = INT8_MIN;
	static volatile int16_t x660 = INT16_MAX;
	int32_t t164 = 15257;

    t164 = ((x657>(x658|x659))<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 243239640569773LLU;
	int64_t x662 = -1LL;
	static int32_t x664 = -29317181;
	volatile int32_t t165 = -15;

    t165 = ((x661>(x662|x663))<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = 1871462369LLU;
	int32_t t166 = 2484;

    t166 = ((x665>(x666|x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 8050U;
	static int8_t x670 = INT8_MIN;
	static volatile uint16_t x671 = 1503U;
	int8_t x672 = -2;
	volatile int32_t t167 = 30;

    t167 = ((x669>(x670|x671))<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MIN;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = -376;
	int32_t t168 = 1603006;

    t168 = ((x673>(x674|x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x678 = 863LL;
	int64_t x679 = INT64_MIN;
	int16_t x680 = 8;

    t169 = ((x677>(x678|x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	uint32_t x682 = UINT32_MAX;
	int32_t x684 = 197;

    t170 = ((x681>(x682|x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 14U;
	static volatile uint64_t x686 = 200488LLU;
	uint64_t x687 = UINT64_MAX;
	uint64_t x688 = 8197716854658LLU;
	volatile int32_t t171 = 83457;

    t171 = ((x685>(x686|x687))<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MIN;
	int32_t t172 = 0;

    t172 = ((x689>(x690|x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MIN;
	int8_t x696 = -3;
	volatile int32_t t173 = 23447689;

    t173 = ((x693>(x694|x695))<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x698 = INT8_MIN;
	int16_t x699 = -933;
	int8_t x700 = INT8_MIN;
	volatile int32_t t174 = -1;

    t174 = ((x697>(x698|x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	uint64_t x702 = 48315LLU;
	int64_t x703 = INT64_MAX;
	static int64_t x704 = INT64_MAX;
	volatile int32_t t175 = -89404360;

    t175 = ((x701>(x702|x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = -1;
	volatile int8_t x708 = -63;
	int32_t t176 = 971;

    t176 = ((x705>(x706|x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = -1LL;
	static int64_t x711 = INT64_MIN;
	volatile int32_t t177 = 83299812;

    t177 = ((x709>(x710|x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 660427LLU;
	int16_t x715 = -1;
	uint64_t x716 = 690LLU;
	volatile int32_t t178 = 201;

    t178 = ((x713>(x714|x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = 30;
	int64_t x718 = INT64_MIN;
	uint16_t x719 = 9151U;
	static uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = -257741;

    t179 = ((x717>(x718|x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	volatile int8_t x722 = INT8_MIN;
	int8_t x723 = 0;
	int32_t t180 = -192804;

    t180 = ((x721>(x722|x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MIN;
	volatile int64_t x727 = INT64_MIN;
	volatile uint64_t x728 = 2142602031LLU;

    t181 = ((x725>(x726|x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 0U;
	static int8_t x730 = 3;
	uint32_t x731 = UINT32_MAX;
	volatile int64_t x732 = -1LL;

    t182 = ((x729>(x730|x731))<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x733 = 38U;
	int8_t x734 = INT8_MAX;
	static int8_t x735 = INT8_MIN;
	static uint8_t x736 = 46U;
	int32_t t183 = -7931;

    t183 = ((x733>(x734|x735))<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x737 = -62;
	int16_t x739 = -1;
	static uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = 2772253;

    t184 = ((x737>(x738|x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = 426696U;
	static int64_t x743 = INT64_MAX;
	volatile uint32_t x744 = 4354U;

    t185 = ((x741>(x742|x743))<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	int8_t x746 = -8;
	uint8_t x747 = 4U;
	int64_t x748 = 6061661308741LL;

    t186 = ((x745>(x746|x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = INT64_MAX;
	int16_t x751 = INT16_MIN;
	int16_t x752 = -1;
	volatile int32_t t187 = 32704350;

    t187 = ((x749>(x750|x751))<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	int16_t x754 = INT16_MIN;
	static uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 30U;
	volatile int32_t t188 = 0;

    t188 = ((x753>(x754|x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	uint8_t x758 = 3U;
	int8_t x759 = 5;
	int32_t x760 = -15170911;
	int32_t t189 = 3585;

    t189 = ((x757>(x758|x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = INT8_MIN;
	int16_t x762 = -3;
	int32_t x763 = INT32_MAX;
	static volatile int64_t x764 = INT64_MIN;
	volatile int32_t t190 = -79634272;

    t190 = ((x761>(x762|x763))<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	volatile int16_t x768 = 422;

    t191 = ((x765>(x766|x767))<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	static int16_t x770 = -78;
	uint16_t x771 = 1U;
	int16_t x772 = -584;
	int32_t t192 = -3525;

    t192 = ((x769>(x770|x771))<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x774 = 1732012149930732720LL;
	int16_t x775 = -12095;
	volatile int8_t x776 = -12;
	int32_t t193 = 636937634;

    t193 = ((x773>(x774|x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint16_t x778 = 1U;
	volatile uint8_t x779 = 22U;
	uint16_t x780 = 12726U;
	volatile int32_t t194 = 33;

    t194 = ((x777>(x778|x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = 783;
	volatile int64_t x782 = INT64_MIN;
	volatile int16_t x783 = INT16_MIN;

    t195 = ((x781>(x782|x783))<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	int16_t x787 = -28;
	int8_t x788 = INT8_MIN;
	volatile int32_t t196 = 1709;

    t196 = ((x785>(x786|x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	int16_t x791 = 222;
	uint64_t x792 = UINT64_MAX;
	static int32_t t197 = 308;

    t197 = ((x789>(x790|x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static int64_t x794 = INT64_MAX;
	int64_t x795 = INT64_MAX;
	static uint8_t x796 = UINT8_MAX;

    t198 = ((x793>(x794|x795))<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = -1LL;
	volatile int16_t x798 = INT16_MAX;
	int16_t x800 = INT16_MAX;
	static int32_t t199 = 1;

    t199 = ((x797>(x798|x799))<=x800);

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

