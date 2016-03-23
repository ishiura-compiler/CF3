
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

static int16_t x6 = INT16_MAX;
int64_t x9 = -433954746911032058LL;
int32_t x15 = -1;
int64_t t3 = INT64_MAX;
static int8_t x17 = INT8_MIN;
int8_t x23 = INT8_MIN;
int32_t x27 = INT32_MIN;
uint16_t x28 = 2U;
int64_t x36 = INT64_MAX;
int8_t x40 = -1;
uint8_t x43 = 46U;
int32_t t10 = 6591853;
static uint64_t t12 = 6LLU;
volatile uint64_t t13 = UINT64_MAX;
int32_t x59 = 23130;
int32_t x60 = INT32_MIN;
int8_t x66 = INT8_MIN;
uint8_t x72 = 70U;
volatile int32_t t19 = 21;
volatile int16_t x86 = INT16_MAX;
int16_t x87 = INT16_MIN;
uint8_t x89 = 0U;
int64_t x90 = 636937LL;
uint16_t x91 = 126U;
uint64_t x96 = 242648215211567LLU;
uint64_t t23 = 5322LLU;
uint8_t x97 = 105U;
static int16_t x98 = 20;
int32_t x101 = INT32_MIN;
uint8_t x104 = 27U;
uint8_t x106 = 8U;
int32_t x108 = INT32_MIN;
volatile int32_t t26 = 14;
static volatile int32_t x113 = -1;
int32_t x121 = INT32_MIN;
int64_t x124 = INT64_MIN;
static volatile int8_t x129 = -1;
volatile int16_t x135 = 325;
uint8_t x136 = UINT8_MAX;
int8_t x146 = INT8_MIN;
static uint32_t x151 = 0U;
uint32_t x155 = 28235919U;
volatile uint64_t x156 = 2LLU;
volatile uint32_t x169 = UINT32_MAX;
int64_t x171 = 11LL;
int32_t t42 = -1;
uint32_t x173 = 60231996U;
int8_t x175 = -1;
uint64_t x176 = UINT64_MAX;
volatile uint64_t t43 = UINT64_MAX;
int8_t x185 = 9;
int8_t x189 = INT8_MIN;
int32_t t48 = 69321;
uint64_t x199 = 145891583568829299LLU;
volatile uint8_t x206 = UINT8_MAX;
volatile int32_t x208 = 111485;
int8_t x216 = -1;
int32_t t53 = -296082831;
int8_t x239 = INT8_MAX;
uint16_t x245 = UINT16_MAX;
uint32_t x247 = 1630U;
static uint64_t x252 = UINT64_MAX;
int32_t t64 = -327552742;
int64_t x261 = INT64_MAX;
uint8_t x267 = UINT8_MAX;
int32_t x268 = 1;
uint8_t x274 = UINT8_MAX;
static int32_t x276 = INT32_MIN;
volatile int32_t x285 = 25502196;
volatile int64_t x287 = INT64_MAX;
uint64_t x294 = 2014178442827995LLU;
int16_t x297 = INT16_MIN;
int64_t x300 = 25148426241620498LL;
int16_t x301 = -1;
int8_t x302 = -2;
static int16_t x305 = INT16_MIN;
int32_t t76 = 7550;
uint32_t x314 = UINT32_MAX;
uint32_t x322 = 775821183U;
volatile int32_t t83 = 1288521;
int64_t x341 = INT64_MIN;
uint8_t x343 = 0U;
uint32_t x348 = UINT32_MAX;
int32_t x352 = INT32_MIN;
static uint16_t x354 = 12U;
volatile int32_t t88 = -9;
int32_t t89 = -112;
int16_t x366 = INT16_MAX;
int32_t x367 = 7;
uint64_t t92 = UINT64_MAX;
static int32_t x374 = INT32_MIN;
volatile int8_t x384 = INT8_MAX;
uint16_t x389 = UINT16_MAX;
volatile uint8_t x390 = UINT8_MAX;
static int32_t x392 = INT32_MAX;
volatile uint64_t t98 = UINT64_MAX;
volatile int32_t t101 = 222;
int8_t x411 = INT8_MAX;
int32_t x412 = INT32_MIN;
uint16_t x414 = 2U;
volatile int16_t x421 = 1;
int16_t x431 = -21;
int32_t t107 = -1110460;
static int64_t x440 = 625LL;
volatile int64_t t109 = -311888507108LL;
volatile uint32_t t110 = 22330553U;
static int8_t x445 = INT8_MAX;
int16_t x446 = INT16_MAX;
uint32_t x455 = 483U;
int8_t x458 = INT8_MIN;
int16_t x462 = INT16_MAX;
int8_t x466 = INT8_MIN;
int64_t x467 = -803094LL;
int64_t t116 = 4LL;
static volatile int32_t t117 = -65;
volatile uint8_t x475 = 3U;
int64_t x478 = 862807058LL;
uint16_t x489 = UINT16_MAX;
volatile int64_t t123 = INT64_MAX;
uint16_t x497 = 0U;
static int16_t x501 = -1;
int8_t x504 = INT8_MAX;
static int64_t t126 = -113082LL;
int8_t x512 = INT8_MIN;
static volatile uint32_t t129 = 5188U;
static uint64_t x525 = 10LLU;
uint64_t x527 = 1230954728831850LLU;
volatile int64_t x531 = INT64_MAX;
int16_t x532 = -1;
int8_t x538 = INT8_MAX;
int8_t x542 = 0;
int32_t t135 = 11;
static int32_t x545 = INT32_MAX;
volatile uint32_t t136 = 8691U;
static int32_t t137 = 233794945;
int64_t x562 = INT64_MIN;
volatile uint64_t x564 = 1600544LLU;
volatile uint8_t x567 = UINT8_MAX;
int32_t x568 = -1;
static volatile int64_t x569 = -1LL;
int32_t t142 = -29;
volatile int16_t x576 = INT16_MAX;
int16_t x579 = -1869;
int64_t x582 = -1LL;
static int8_t x590 = -6;
static int64_t x591 = INT64_MIN;
uint16_t x605 = UINT16_MAX;
uint8_t x611 = 7U;
int32_t x612 = INT32_MIN;
static uint16_t x614 = 135U;
static int16_t x615 = INT16_MIN;
volatile int32_t t153 = -1017772541;
int8_t x620 = INT8_MIN;
static uint32_t x630 = 73U;
int8_t x631 = INT8_MAX;
int8_t x634 = 0;
int8_t x641 = INT8_MIN;
int8_t x642 = INT8_MIN;
uint16_t x644 = 229U;
int32_t x650 = 1;
static volatile uint64_t t162 = 5LLU;
uint16_t x669 = UINT16_MAX;
int8_t x672 = -8;
volatile int8_t x674 = INT8_MIN;
static uint8_t x680 = UINT8_MAX;
volatile int32_t t171 = -11106756;
int8_t x694 = 28;
int32_t x695 = INT32_MAX;
uint32_t x697 = 210670035U;
int32_t x703 = 1;
uint64_t x711 = UINT64_MAX;
volatile int16_t x717 = INT16_MIN;
static uint32_t x721 = 717482321U;
int16_t x725 = INT16_MAX;
uint64_t x726 = 7042775346LLU;
int16_t x728 = INT16_MIN;
static int8_t x732 = INT8_MIN;
volatile int32_t t183 = INT32_MAX;
volatile int32_t x739 = -86706559;
uint64_t x744 = UINT64_MAX;
volatile int16_t x753 = INT16_MAX;
int8_t x754 = INT8_MIN;
volatile int64_t t188 = -706LL;
static int32_t x759 = INT32_MIN;
int64_t x760 = INT64_MIN;
static int64_t t189 = -2154790547757099521LL;
uint8_t x763 = 46U;
int32_t x768 = INT32_MAX;
int64_t x772 = INT64_MIN;
static int16_t x781 = INT16_MIN;
uint8_t x783 = 0U;
uint8_t x786 = UINT8_MAX;
static volatile uint64_t x795 = 415821829LLU;


void f0(void) {
    	uint16_t x1 = 473U;
	int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = 27717;

    t0 = (((x1==x2)!=x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int16_t x7 = -4687;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 802837;

    t1 = (((x5==x6)!=x7)|x8);

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -232434;
	volatile int8_t x11 = INT8_MIN;
	static uint64_t x12 = 281887LLU;
	uint64_t t2 = 8259522076LLU;

    t2 = (((x9==x10)!=x11)|x12);

    if (t2 != 281887LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = -1;
	static int64_t x16 = INT64_MAX;

    t3 = (((x13==x14)!=x15)|x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = 19;
	uint16_t x19 = 1456U;
	static int8_t x20 = -31;
	static volatile int32_t t4 = 1162;

    t4 = (((x17==x18)!=x19)|x20);

    if (t4 != -31) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = 42U;
	int64_t x22 = INT64_MIN;
	int64_t x24 = INT64_MAX;
	int64_t t5 = INT64_MAX;

    t5 = (((x21==x22)!=x23)|x24);

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 0LLU;
	int32_t x26 = INT32_MIN;
	int32_t t6 = 206;

    t6 = (((x25==x26)!=x27)|x28);

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 84U;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = -467;
	int64_t x32 = 1LL;
	int64_t t7 = -1445505087758LL;

    t7 = (((x29==x30)!=x31)|x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	static int32_t x35 = INT32_MIN;
	volatile int64_t t8 = INT64_MAX;

    t8 = (((x33==x34)!=x35)|x36);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	static int16_t x39 = -1;
	int32_t t9 = 407605474;

    t9 = (((x37==x38)!=x39)|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	static int8_t x42 = 1;
	int32_t x44 = -780549;

    t10 = (((x41==x42)!=x43)|x44);

    if (t10 != -780549) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1594765532489LLU;
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MAX;
	int64_t t11 = INT64_MAX;

    t11 = (((x45==x46)!=x47)|x48);

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x50 = 50;
	volatile int64_t x51 = -9LL;
	uint64_t x52 = 6021716LLU;

    t12 = (((x49==x50)!=x51)|x52);

    if (t12 != 6021717LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int32_t x54 = -1;
	int16_t x55 = 214;
	volatile uint64_t x56 = UINT64_MAX;

    t13 = (((x53==x54)!=x55)|x56);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 105447008382748450LLU;
	uint16_t x58 = UINT16_MAX;
	int32_t t14 = 0;

    t14 = (((x57==x58)!=x59)|x60);

    if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = 91U;
	int8_t x62 = INT8_MIN;
	static volatile int64_t x63 = INT64_MAX;
	static volatile uint32_t x64 = UINT32_MAX;
	static uint32_t t15 = UINT32_MAX;

    t15 = (((x61==x62)!=x63)|x64);

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 16U;
	int64_t x67 = INT64_MIN;
	static int16_t x68 = 45;
	int32_t t16 = -835;

    t16 = (((x65==x66)!=x67)|x68);

    if (t16 != 45) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	volatile int16_t x70 = -10;
	volatile int16_t x71 = -48;
	static int32_t t17 = -993411;

    t17 = (((x69==x70)!=x71)|x72);

    if (t17 != 71) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -928251542;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 1326343793U;
	static uint32_t t18 = 30258U;

    t18 = (((x73==x74)!=x75)|x76);

    if (t18 != 1326343793U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x78 = -2500;
	int16_t x79 = -1;
	int16_t x80 = -1;

    t19 = (((x77==x78)!=x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	int8_t x82 = -58;
	static uint64_t x83 = 2146834347200245379LLU;
	int8_t x84 = 3;
	volatile int32_t t20 = 701;

    t20 = (((x81==x82)!=x83)|x84);

    if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	uint8_t x88 = 26U;
	int32_t t21 = -781201446;

    t21 = (((x85==x86)!=x87)|x88);

    if (t21 != 27) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x92 = -1LL;
	volatile int64_t t22 = 755505315898LL;

    t22 = (((x89==x90)!=x91)|x92);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int64_t x94 = -1LL;
	int16_t x95 = -73;

    t23 = (((x93==x94)!=x95)|x96);

    if (t23 != 242648215211567LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x99 = 0U;
	uint16_t x100 = UINT16_MAX;
	int32_t t24 = 1786;

    t24 = (((x97==x98)!=x99)|x100);

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 0U;
	volatile int32_t t25 = -375020950;

    t25 = (((x101==x102)!=x103)|x104);

    if (t25 != 27) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 11;
	int64_t x107 = 16106154LL;

    t26 = (((x105==x106)!=x107)|x108);

    if (t26 != -2147483647) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MIN;
	int16_t x110 = 0;
	static int8_t x111 = -1;
	uint64_t x112 = 3356LLU;
	uint64_t t27 = 70211225055390158LLU;

    t27 = (((x109==x110)!=x111)|x112);

    if (t27 != 3357LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x114 = 81090412892796LLU;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = -7;
	int32_t t28 = -6519258;

    t28 = (((x113==x114)!=x115)|x116);

    if (t28 != -7) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = 31787454U;
	int64_t x119 = INT64_MAX;
	int64_t x120 = 2918LL;
	int64_t t29 = -158749600LL;

    t29 = (((x117==x118)!=x119)|x120);

    if (t29 != 2919LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 1738U;
	static int32_t x123 = INT32_MIN;
	volatile int64_t t30 = -17LL;

    t30 = (((x121==x122)!=x123)|x124);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	uint64_t x128 = 1790088509LLU;
	uint64_t t31 = 106278015LLU;

    t31 = (((x125==x126)!=x127)|x128);

    if (t31 != 1790088509LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 51U;
	int16_t x131 = INT16_MAX;
	static volatile int64_t x132 = INT64_MAX;
	static volatile int64_t t32 = INT64_MAX;

    t32 = (((x129==x130)!=x131)|x132);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 1306U;
	volatile int16_t x134 = -1;
	int32_t t33 = -54915;

    t33 = (((x133==x134)!=x135)|x136);

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 514U;
	uint8_t x138 = 32U;
	volatile int64_t x139 = 19176913553943LL;
	int16_t x140 = INT16_MAX;
	static volatile int32_t t34 = -839234;

    t34 = (((x137==x138)!=x139)|x140);

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = UINT32_MAX;
	int8_t x142 = 1;
	static int32_t x143 = -305817;
	uint8_t x144 = 0U;
	static volatile int32_t t35 = -2;

    t35 = (((x141==x142)!=x143)|x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint16_t x147 = 1061U;
	volatile uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 1013195;

    t36 = (((x145==x146)!=x147)|x148);

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	uint16_t x150 = 7U;
	volatile int32_t x152 = INT32_MIN;
	int32_t t37 = INT32_MIN;

    t37 = (((x149==x150)!=x151)|x152);

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x153 = 23752193LLU;
	volatile uint32_t x154 = 0U;
	volatile uint64_t t38 = 1379804318015LLU;

    t38 = (((x153==x154)!=x155)|x156);

    if (t38 != 3LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 7524;
	int16_t x158 = -1;
	int16_t x159 = 19;
	int8_t x160 = INT8_MIN;
	static int32_t t39 = 2477;

    t39 = (((x157==x158)!=x159)|x160);

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	int32_t x162 = 11782584;
	int16_t x163 = INT16_MAX;
	volatile uint64_t x164 = 3929LLU;
	volatile uint64_t t40 = 21359801355524159LLU;

    t40 = (((x161==x162)!=x163)|x164);

    if (t40 != 3929LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int16_t x166 = INT16_MIN;
	int64_t x167 = 8LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -202694178;

    t41 = (((x165==x166)!=x167)|x168);

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = INT64_MIN;
	static int8_t x172 = INT8_MIN;

    t42 = (((x169==x170)!=x171)|x172);

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = -1;

    t43 = (((x173==x174)!=x175)|x176);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x177 = INT16_MIN;
	int64_t x178 = -52LL;
	volatile int32_t x179 = -1;
	static int32_t x180 = INT32_MIN;
	int32_t t44 = -33798;

    t44 = (((x177==x178)!=x179)|x180);

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MAX;
	volatile int8_t x183 = 10;
	volatile uint8_t x184 = 10U;
	volatile int32_t t45 = 25789507;

    t45 = (((x181==x182)!=x183)|x184);

    if (t45 != 11) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x186 = UINT64_MAX;
	int32_t x187 = 108271056;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 365448173;

    t46 = (((x185==x186)!=x187)|x188);

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x190 = 1;
	int16_t x191 = -1;
	int16_t x192 = -1;
	static int32_t t47 = -11;

    t47 = (((x189==x190)!=x191)|x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 325U;
	uint16_t x194 = 1U;
	int16_t x195 = 397;
	volatile uint8_t x196 = 2U;

    t48 = (((x193==x194)!=x195)|x196);

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int16_t x198 = -1;
	uint16_t x200 = UINT16_MAX;
	static volatile int32_t t49 = -188977568;

    t49 = (((x197==x198)!=x199)|x200);

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	uint32_t x202 = 1U;
	volatile uint8_t x203 = UINT8_MAX;
	int8_t x204 = 3;
	int32_t t50 = -356138893;

    t50 = (((x201==x202)!=x203)|x204);

    if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = UINT8_MAX;
	volatile int8_t x207 = -1;
	static int32_t t51 = 22309;

    t51 = (((x205==x206)!=x207)|x208);

    if (t51 != 111485) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x209 = UINT8_MAX;
	uint64_t x210 = 2132045151346139099LLU;
	int64_t x211 = -117LL;
	volatile int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -22951373;

    t52 = (((x209==x210)!=x211)|x212);

    if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 28656482662238835LL;
	volatile uint8_t x214 = 72U;
	uint8_t x215 = 49U;

    t53 = (((x213==x214)!=x215)|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -1;
	uint64_t x219 = 855857479542434696LLU;
	int8_t x220 = -14;
	int32_t t54 = 7357179;

    t54 = (((x217==x218)!=x219)|x220);

    if (t54 != -13) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MAX;
	volatile int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	volatile int64_t x224 = 827LL;
	volatile int64_t t55 = 166681432072626LL;

    t55 = (((x221==x222)!=x223)|x224);

    if (t55 != 827LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x225 = -1201;
	static int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MAX;
	volatile int32_t x228 = -1;
	static int32_t t56 = -1430;

    t56 = (((x225==x226)!=x227)|x228);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 41U;
	static uint16_t x230 = 28218U;
	int16_t x231 = INT16_MIN;
	uint64_t x232 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

    t57 = (((x229==x230)!=x231)|x232);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x234 = -1;
	static volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t58 = UINT64_MAX;

    t58 = (((x233==x234)!=x235)|x236);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	int64_t x238 = -259303005LL;
	volatile int32_t x240 = INT32_MIN;
	static int32_t t59 = -37732052;

    t59 = (((x237==x238)!=x239)|x240);

    if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 35U;
	int16_t x242 = INT16_MAX;
	uint32_t x243 = 5289U;
	uint16_t x244 = 307U;
	volatile int32_t t60 = 0;

    t60 = (((x241==x242)!=x243)|x244);

    if (t60 != 307) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = 63U;
	static int8_t x248 = 0;
	int32_t t61 = 0;

    t61 = (((x245==x246)!=x247)|x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile uint64_t t62 = UINT64_MAX;

    t62 = (((x249==x250)!=x251)|x252);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MAX;
	int32_t x256 = -1;
	int32_t t63 = -31;

    t63 = (((x253==x254)!=x255)|x256);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 8U;
	int16_t x258 = -36;
	volatile int32_t x259 = INT32_MIN;
	int32_t x260 = -1;

    t64 = (((x257==x258)!=x259)|x260);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x262 = INT64_MIN;
	uint16_t x263 = 76U;
	uint16_t x264 = 2902U;
	int32_t t65 = -168014;

    t65 = (((x261==x262)!=x263)|x264);

    if (t65 != 2903) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	int32_t t66 = 9848010;

    t66 = (((x265==x266)!=x267)|x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	static uint64_t x270 = UINT64_MAX;
	uint32_t x271 = 13143U;
	static uint64_t x272 = 168374073LLU;
	static volatile uint64_t t67 = 3577780032LLU;

    t67 = (((x269==x270)!=x271)|x272);

    if (t67 != 168374073LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	volatile int32_t t68 = 938477;

    t68 = (((x273==x274)!=x275)|x276);

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 1565801LLU;
	uint8_t x278 = UINT8_MAX;
	volatile int16_t x279 = -1;
	int16_t x280 = -1;
	volatile int32_t t69 = 1976;

    t69 = (((x277==x278)!=x279)|x280);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 13689U;
	volatile int16_t x282 = INT16_MIN;
	volatile int16_t x283 = INT16_MAX;
	volatile uint32_t x284 = 818172U;
	volatile uint32_t t70 = 11451907U;

    t70 = (((x281==x282)!=x283)|x284);

    if (t70 != 818173U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = INT32_MIN;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t71 = -1;

    t71 = (((x285==x286)!=x287)|x288);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	volatile int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	int8_t x292 = -1;
	int32_t t72 = 0;

    t72 = (((x289==x290)!=x291)|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	static int32_t x295 = 51;
	int16_t x296 = -1;
	static int32_t t73 = 5;

    t73 = (((x293==x294)!=x295)|x296);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x298 = -44;
	static int8_t x299 = INT8_MIN;
	volatile int64_t t74 = -397442159417LL;

    t74 = (((x297==x298)!=x299)|x300);

    if (t74 != 25148426241620499LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x303 = INT32_MIN;
	int16_t x304 = 3511;
	volatile int32_t t75 = 9;

    t75 = (((x301==x302)!=x303)|x304);

    if (t75 != 3511) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = UINT16_MAX;
	uint64_t x307 = 16298075744LLU;
	int16_t x308 = -1;

    t76 = (((x305==x306)!=x307)|x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -3;
	int32_t x310 = -493782634;
	int16_t x311 = -1797;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 844;

    t77 = (((x309==x310)!=x311)|x312);

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 1692U;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 938397LL;

    t78 = (((x313==x314)!=x315)|x316);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MAX;
	static int32_t x318 = 24;
	static int32_t x319 = INT32_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = 22;

    t79 = (((x317==x318)!=x319)|x320);

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	volatile int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 0;

    t80 = (((x321==x322)!=x323)|x324);

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = 1005U;
	int32_t t81 = -1;

    t81 = (((x325==x326)!=x327)|x328);

    if (t81 != 1005) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = 596;
	volatile int8_t x330 = 3;
	int8_t x331 = 1;
	uint32_t x332 = UINT32_MAX;
	static uint32_t t82 = UINT32_MAX;

    t82 = (((x329==x330)!=x331)|x332);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = INT16_MAX;
	uint64_t x334 = 27483LLU;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;

    t83 = (((x333==x334)!=x335)|x336);

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 474566537370868957LL;
	int32_t x338 = 10;
	static int32_t x339 = -33441572;
	static volatile int8_t x340 = INT8_MAX;
	volatile int32_t t84 = -1292;

    t84 = (((x337==x338)!=x339)|x340);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x342 = 47;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -292289;

    t85 = (((x341==x342)!=x343)|x344);

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = -1;
	uint8_t x346 = 7U;
	volatile int16_t x347 = -1;
	uint32_t t86 = UINT32_MAX;

    t86 = (((x345==x346)!=x347)|x348);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 4244850U;
	volatile uint8_t x350 = 2U;
	int16_t x351 = INT16_MAX;
	int32_t t87 = -679186;

    t87 = (((x349==x350)!=x351)|x352);

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint32_t x355 = 0U;
	static volatile int16_t x356 = INT16_MAX;

    t88 = (((x353==x354)!=x355)|x356);

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 39534;
	static volatile uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 14728U;
	uint8_t x360 = 7U;

    t89 = (((x357==x358)!=x359)|x360);

    if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -42;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 1LLU;
	volatile int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 239101;

    t90 = (((x361==x362)!=x363)|x364);

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	static int32_t x368 = -1;
	int32_t t91 = -7852351;

    t91 = (((x365==x366)!=x367)|x368);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	static uint16_t x370 = 22U;
	uint64_t x371 = 1LLU;
	volatile uint64_t x372 = UINT64_MAX;

    t92 = (((x369==x370)!=x371)|x372);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MAX;
	volatile int32_t x375 = -1;
	static int32_t x376 = -1;
	volatile int32_t t93 = -5055269;

    t93 = (((x373==x374)!=x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 1904U;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 905LLU;
	volatile uint64_t t94 = 65995434426678LLU;

    t94 = (((x377==x378)!=x379)|x380);

    if (t94 != 905LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 717592U;
	volatile int64_t x382 = -1LL;
	static volatile uint32_t x383 = 0U;
	int32_t t95 = -25824139;

    t95 = (((x381==x382)!=x383)|x384);

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 27;
	uint64_t x386 = 93766694067050LLU;
	uint32_t x387 = 1363765U;
	static int64_t x388 = INT64_MAX;
	int64_t t96 = INT64_MAX;

    t96 = (((x385==x386)!=x387)|x388);

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x391 = -37137;
	int32_t t97 = INT32_MAX;

    t97 = (((x389==x390)!=x391)|x392);

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile int64_t x395 = -1LL;
	uint64_t x396 = UINT64_MAX;

    t98 = (((x393==x394)!=x395)|x396);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = INT64_MAX;
	static int16_t x398 = -1;
	volatile int32_t x399 = -939396692;
	int64_t x400 = INT64_MAX;
	int64_t t99 = INT64_MAX;

    t99 = (((x397==x398)!=x399)|x400);

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 52U;
	static int8_t x402 = -24;
	static int64_t x403 = INT64_MAX;
	static int64_t x404 = INT64_MIN;
	int64_t t100 = 172128005491LL;

    t100 = (((x401==x402)!=x403)|x404);

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 52498139U;
	int8_t x406 = 11;
	volatile int32_t x407 = INT32_MAX;
	int8_t x408 = INT8_MAX;

    t101 = (((x405==x406)!=x407)|x408);

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 13;
	int8_t x410 = 13;
	int32_t t102 = -6699;

    t102 = (((x409==x410)!=x411)|x412);

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t103 = -39436757000453LL;

    t103 = (((x413==x414)!=x415)|x416);

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	uint8_t x418 = 23U;
	int8_t x419 = INT8_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -101;

    t104 = (((x417==x418)!=x419)|x420);

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x422 = -1;
	int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = 3U;
	uint32_t t105 = 6639U;

    t105 = (((x421==x422)!=x423)|x424);

    if (t105 != 3U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x426 = INT8_MIN;
	uint16_t x427 = 3210U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = 106002;

    t106 = (((x425==x426)!=x427)|x428);

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = -1;
	int16_t x430 = INT16_MIN;
	int8_t x432 = INT8_MIN;

    t107 = (((x429==x430)!=x431)|x432);

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MIN;
	volatile uint64_t x435 = UINT64_MAX;
	static int8_t x436 = -1;
	static volatile int32_t t108 = 1;

    t108 = (((x433==x434)!=x435)|x436);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	volatile int32_t x438 = INT32_MIN;
	volatile int8_t x439 = INT8_MIN;

    t109 = (((x437==x438)!=x439)|x440);

    if (t109 != 625LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -108965;
	volatile uint16_t x442 = 20U;
	static int64_t x443 = INT64_MIN;
	uint32_t x444 = 3U;

    t110 = (((x441==x442)!=x443)|x444);

    if (t110 != 3U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x447 = -91LL;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = 179910102;

    t111 = (((x445==x446)!=x447)|x448);

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MAX;
	int8_t x450 = -1;
	int16_t x451 = INT16_MIN;
	static int8_t x452 = INT8_MIN;
	int32_t t112 = 7077;

    t112 = (((x449==x450)!=x451)|x452);

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x454 = INT32_MIN;
	int8_t x456 = 49;
	int32_t t113 = 6138;

    t113 = (((x453==x454)!=x455)|x456);

    if (t113 != 49) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 7;
	static int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = 884;

    t114 = (((x457==x458)!=x459)|x460);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x463 = INT64_MIN;
	uint64_t x464 = 46024516014LLU;
	volatile uint64_t t115 = 242008LLU;

    t115 = (((x461==x462)!=x463)|x464);

    if (t115 != 46024516015LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 1091262005552157LLU;
	int64_t x468 = -1679822LL;

    t116 = (((x465==x466)!=x467)|x468);

    if (t116 != -1679821LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int16_t x470 = -509;
	volatile int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MIN;

    t117 = (((x469==x470)!=x471)|x472);

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	int8_t x474 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	static volatile int32_t t118 = 5322970;

    t118 = (((x473==x474)!=x475)|x476);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	static int32_t x479 = INT32_MAX;
	int8_t x480 = 6;
	volatile int32_t t119 = 576827;

    t119 = (((x477==x478)!=x479)|x480);

    if (t119 != 7) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	volatile int64_t x482 = INT64_MIN;
	int8_t x483 = INT8_MIN;
	static uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = -80219;

    t120 = (((x481==x482)!=x483)|x484);

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MAX;
	int64_t x487 = -1054448397350115LL;
	int8_t x488 = INT8_MIN;
	int32_t t121 = -805449443;

    t121 = (((x485==x486)!=x487)|x488);

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	uint16_t x492 = 16617U;
	volatile int32_t t122 = -21;

    t122 = (((x489==x490)!=x491)|x492);

    if (t122 != 16617) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 1;
	int64_t x494 = INT64_MIN;
	volatile uint32_t x495 = UINT32_MAX;
	int64_t x496 = INT64_MAX;

    t123 = (((x493==x494)!=x495)|x496);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x498 = 1;
	volatile int32_t x499 = -15611420;
	volatile int8_t x500 = -6;
	int32_t t124 = -1;

    t124 = (((x497==x498)!=x499)|x500);

    if (t124 != -5) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x502 = 4U;
	volatile uint64_t x503 = UINT64_MAX;
	volatile int32_t t125 = -15948977;

    t125 = (((x501==x502)!=x503)|x504);

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = 7450063720278473LL;
	uint16_t x506 = 172U;
	int64_t x507 = INT64_MIN;
	int64_t x508 = -1LL;

    t126 = (((x505==x506)!=x507)|x508);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = 14U;
	uint32_t x510 = 50401377U;
	volatile int8_t x511 = -11;
	int32_t t127 = 130546497;

    t127 = (((x509==x510)!=x511)|x512);

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -8127LL;
	int64_t x514 = INT64_MAX;
	static int16_t x515 = INT16_MAX;
	int64_t x516 = 259893011045646656LL;
	volatile int64_t t128 = 8707284028746LL;

    t128 = (((x513==x514)!=x515)|x516);

    if (t128 != 259893011045646657LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -1;
	volatile int8_t x518 = INT8_MIN;
	volatile int32_t x519 = INT32_MIN;
	uint32_t x520 = 8U;

    t129 = (((x517==x518)!=x519)|x520);

    if (t129 != 9U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	static int8_t x522 = INT8_MIN;
	static int64_t x523 = INT64_MIN;
	static uint32_t x524 = 5499U;
	static uint32_t t130 = 717U;

    t130 = (((x521==x522)!=x523)|x524);

    if (t130 != 5499U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x526 = INT8_MIN;
	int8_t x528 = -1;
	volatile int32_t t131 = 93;

    t131 = (((x525==x526)!=x527)|x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = -16LL;
	int32_t x530 = INT32_MIN;
	int32_t t132 = -3258134;

    t132 = (((x529==x530)!=x531)|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = 1;
	volatile int16_t x534 = -1;
	volatile int16_t x535 = INT16_MIN;
	static int64_t x536 = INT64_MIN;
	static int64_t t133 = -479645335LL;

    t133 = (((x533==x534)!=x535)|x536);

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = UINT32_MAX;
	int16_t x539 = 6;
	static int16_t x540 = -1;
	volatile int32_t t134 = 3;

    t134 = (((x537==x538)!=x539)|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MAX;
	uint8_t x543 = UINT8_MAX;
	static int8_t x544 = -1;

    t135 = (((x541==x542)!=x543)|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = -1993;
	int8_t x547 = INT8_MIN;
	static uint32_t x548 = 1727U;

    t136 = (((x545==x546)!=x547)|x548);

    if (t136 != 1727U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 0;
	volatile int64_t x550 = 230779995LL;
	static uint32_t x551 = 26247U;
	uint16_t x552 = UINT16_MAX;

    t137 = (((x549==x550)!=x551)|x552);

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MAX;
	int16_t x554 = -1;
	volatile uint64_t x555 = 4741682244828792380LLU;
	static int16_t x556 = -1;
	int32_t t138 = 7158001;

    t138 = (((x553==x554)!=x555)|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	int16_t x558 = INT16_MIN;
	uint64_t x559 = 0LLU;
	static uint16_t x560 = UINT16_MAX;
	static volatile int32_t t139 = 894427353;

    t139 = (((x557==x558)!=x559)|x560);

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x561 = UINT8_MAX;
	uint32_t x563 = UINT32_MAX;
	volatile uint64_t t140 = 16819057621LLU;

    t140 = (((x561==x562)!=x563)|x564);

    if (t140 != 1600545LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	static int8_t x566 = INT8_MIN;
	static volatile int32_t t141 = -28553078;

    t141 = (((x565==x566)!=x567)|x568);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x570 = 14U;
	int64_t x571 = -1LL;
	int32_t x572 = 6973790;

    t142 = (((x569==x570)!=x571)|x572);

    if (t142 != 6973791) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	uint32_t x574 = UINT32_MAX;
	int16_t x575 = -242;
	int32_t t143 = 40424555;

    t143 = (((x573==x574)!=x575)|x576);

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	volatile uint64_t x578 = 45492624842831LLU;
	int32_t x580 = -23611;
	static int32_t t144 = 58;

    t144 = (((x577==x578)!=x579)|x580);

    if (t144 != -23611) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = INT16_MIN;
	int8_t x583 = INT8_MIN;
	int32_t x584 = -58111;
	int32_t t145 = -633403007;

    t145 = (((x581==x582)!=x583)|x584);

    if (t145 != -58111) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MIN;
	uint16_t x586 = 28150U;
	volatile uint16_t x587 = UINT16_MAX;
	static volatile int32_t x588 = -1;
	volatile int32_t t146 = 1594954;

    t146 = (((x585==x586)!=x587)|x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	uint32_t x592 = 252845174U;
	volatile uint32_t t147 = 1745U;

    t147 = (((x589==x590)!=x591)|x592);

    if (t147 != 252845175U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	static uint16_t x594 = 162U;
	int16_t x595 = INT16_MAX;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -264527759;

    t148 = (((x593==x594)!=x595)|x596);

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 1953798007588LLU;
	volatile int64_t x598 = -3533603LL;
	volatile int8_t x599 = 2;
	volatile uint32_t x600 = 3767016U;
	volatile uint32_t t149 = 1196469U;

    t149 = (((x597==x598)!=x599)|x600);

    if (t149 != 3767017U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = 494809564LL;
	static int16_t x602 = INT16_MAX;
	int8_t x603 = -1;
	static int64_t x604 = INT64_MIN;
	volatile int64_t t150 = -49391LL;

    t150 = (((x601==x602)!=x603)|x604);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = -2615;
	static int16_t x607 = INT16_MAX;
	int32_t x608 = INT32_MAX;
	int32_t t151 = INT32_MAX;

    t151 = (((x605==x606)!=x607)|x608);

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MAX;
	int32_t x610 = 6;
	volatile int32_t t152 = -3;

    t152 = (((x609==x610)!=x611)|x612);

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile int16_t x616 = -1;

    t153 = (((x613==x614)!=x615)|x616);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x618 = INT32_MAX;
	int16_t x619 = INT16_MAX;
	int32_t t154 = -531669;

    t154 = (((x617==x618)!=x619)|x620);

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	uint16_t x622 = 650U;
	static volatile int64_t x623 = INT64_MIN;
	static uint16_t x624 = 8U;
	int32_t t155 = -884963267;

    t155 = (((x621==x622)!=x623)|x624);

    if (t155 != 9) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	int64_t x626 = INT64_MAX;
	int32_t x627 = -845895989;
	int8_t x628 = 0;
	int32_t t156 = 1;

    t156 = (((x625==x626)!=x627)|x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MAX;
	int64_t x632 = 60107076075771LL;
	volatile int64_t t157 = 97369954361LL;

    t157 = (((x629==x630)!=x631)|x632);

    if (t157 != 60107076075771LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 401264U;
	int32_t x635 = 730354736;
	uint8_t x636 = 0U;
	int32_t t158 = -1749;

    t158 = (((x633==x634)!=x635)|x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	volatile int32_t x638 = 114069715;
	volatile int64_t x639 = INT64_MIN;
	uint16_t x640 = 3U;
	int32_t t159 = -10620665;

    t159 = (((x637==x638)!=x639)|x640);

    if (t159 != 3) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x643 = UINT32_MAX;
	volatile int32_t t160 = 3804;

    t160 = (((x641==x642)!=x643)|x644);

    if (t160 != 229) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int64_t x646 = INT64_MAX;
	int8_t x647 = INT8_MAX;
	static uint64_t x648 = 78678519328754537LLU;
	volatile uint64_t t161 = 10LLU;

    t161 = (((x645==x646)!=x647)|x648);

    if (t161 != 78678519328754537LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int32_t x651 = INT32_MAX;
	static uint64_t x652 = 13038603LLU;

    t162 = (((x649==x650)!=x651)|x652);

    if (t162 != 13038603LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	static int64_t x654 = 5060LL;
	int64_t x655 = -960LL;
	volatile int64_t x656 = INT64_MAX;
	static int64_t t163 = INT64_MAX;

    t163 = (((x653==x654)!=x655)|x656);

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = INT64_MIN;
	uint16_t x658 = 3U;
	int8_t x659 = INT8_MIN;
	int64_t x660 = INT64_MIN;
	int64_t t164 = 4784370517929864LL;

    t164 = (((x657==x658)!=x659)|x660);

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x661 = UINT64_MAX;
	volatile int32_t x662 = -1;
	static volatile uint32_t x663 = 52U;
	static int8_t x664 = INT8_MAX;
	int32_t t165 = 4615091;

    t165 = (((x661==x662)!=x663)|x664);

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 5716682559204115LLU;
	static volatile int16_t x666 = INT16_MIN;
	static int8_t x667 = -1;
	uint64_t x668 = 407524299437884123LLU;
	volatile uint64_t t166 = 236332511956LLU;

    t166 = (((x665==x666)!=x667)|x668);

    if (t166 != 407524299437884123LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = 89850019LL;
	int64_t x671 = -1LL;
	int32_t t167 = -8;

    t167 = (((x669==x670)!=x671)|x672);

    if (t167 != -7) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MAX;
	uint16_t x675 = UINT16_MAX;
	volatile uint16_t x676 = 957U;
	volatile int32_t t168 = 43208;

    t168 = (((x673==x674)!=x675)|x676);

    if (t168 != 957) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	static int32_t x678 = 0;
	int32_t x679 = -1;
	volatile int32_t t169 = -53711;

    t169 = (((x677==x678)!=x679)|x680);

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = 53666797073330800LL;
	int8_t x682 = 44;
	int16_t x683 = INT16_MIN;
	int16_t x684 = INT16_MIN;
	static int32_t t170 = 29851590;

    t170 = (((x681==x682)!=x683)|x684);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint8_t x686 = 24U;
	static volatile int8_t x687 = INT8_MIN;
	uint16_t x688 = 170U;

    t171 = (((x685==x686)!=x687)|x688);

    if (t171 != 171) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int8_t x690 = -5;
	int32_t x691 = -1;
	int64_t x692 = -9377707267396569LL;
	int64_t t172 = -16011235LL;

    t172 = (((x689==x690)!=x691)|x692);

    if (t172 != -9377707267396569LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MAX;
	int8_t x696 = -1;
	volatile int32_t t173 = -44019535;

    t173 = (((x693==x694)!=x695)|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x698 = INT32_MIN;
	int16_t x699 = 2378;
	int8_t x700 = 56;
	volatile int32_t t174 = -14225580;

    t174 = (((x697==x698)!=x699)|x700);

    if (t174 != 57) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 8203380798798238773LLU;
	static int16_t x702 = INT16_MIN;
	volatile uint64_t x704 = 273485384752882267LLU;
	volatile uint64_t t175 = 166846613003501LLU;

    t175 = (((x701==x702)!=x703)|x704);

    if (t175 != 273485384752882267LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 0LL;
	int32_t x706 = 1955;
	static int64_t x707 = INT64_MIN;
	uint8_t x708 = 1U;
	static int32_t t176 = -692;

    t176 = (((x705==x706)!=x707)|x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = 0;
	int64_t x710 = INT64_MAX;
	uint8_t x712 = 11U;
	volatile int32_t t177 = 1063;

    t177 = (((x709==x710)!=x711)|x712);

    if (t177 != 11) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x713 = 1169023657134056LL;
	uint8_t x714 = 54U;
	uint16_t x715 = UINT16_MAX;
	int16_t x716 = INT16_MAX;
	int32_t t178 = -259156035;

    t178 = (((x713==x714)!=x715)|x716);

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MAX;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = -1;
	int32_t t179 = -14226238;

    t179 = (((x717==x718)!=x719)|x720);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x722 = INT32_MIN;
	static int32_t x723 = INT32_MAX;
	static uint64_t x724 = UINT64_MAX;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = (((x721==x722)!=x723)|x724);

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x727 = UINT8_MAX;
	int32_t t181 = -78797;

    t181 = (((x725==x726)!=x727)|x728);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x729 = 1U;
	int16_t x730 = INT16_MAX;
	volatile uint64_t x731 = UINT64_MAX;
	static int32_t t182 = 291094399;

    t182 = (((x729==x730)!=x731)|x732);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = INT8_MAX;
	static int16_t x734 = INT16_MIN;
	int32_t x735 = 36892;
	int32_t x736 = INT32_MAX;

    t183 = (((x733==x734)!=x735)|x736);

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 171U;
	uint16_t x738 = 100U;
	int16_t x740 = INT16_MIN;
	int32_t t184 = -5232;

    t184 = (((x737==x738)!=x739)|x740);

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -2913;
	uint8_t x742 = 28U;
	volatile int8_t x743 = 51;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (((x741==x742)!=x743)|x744);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x745 = INT16_MIN;
	volatile int16_t x746 = -1;
	volatile uint64_t x747 = 31463859073LLU;
	int8_t x748 = -1;
	volatile int32_t t186 = -256711648;

    t186 = (((x745==x746)!=x747)|x748);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 11U;
	static int32_t x750 = -1;
	static uint64_t x751 = 56010487138377LLU;
	int32_t x752 = 1260211;
	volatile int32_t t187 = -810;

    t187 = (((x749==x750)!=x751)|x752);

    if (t187 != 1260211) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x755 = INT16_MIN;
	int64_t x756 = 164LL;

    t188 = (((x753==x754)!=x755)|x756);

    if (t188 != 165LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -1;
	static int16_t x758 = -1;

    t189 = (((x757==x758)!=x759)|x760);

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	int16_t x762 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	int32_t t190 = -9;

    t190 = (((x761==x762)!=x763)|x764);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = -7;
	volatile uint8_t x766 = 56U;
	int16_t x767 = -1;
	int32_t t191 = INT32_MAX;

    t191 = (((x765==x766)!=x767)|x768);

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 0;
	int16_t x770 = INT16_MAX;
	uint32_t x771 = UINT32_MAX;
	volatile int64_t t192 = -89267960461LL;

    t192 = (((x769==x770)!=x771)|x772);

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 498687280861453LLU;
	uint64_t x774 = UINT64_MAX;
	volatile int8_t x775 = INT8_MAX;
	uint64_t x776 = 73503649LLU;
	static volatile uint64_t t193 = 0LLU;

    t193 = (((x773==x774)!=x775)|x776);

    if (t193 != 73503649LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = 3U;
	static volatile int16_t x778 = INT16_MIN;
	int8_t x779 = -43;
	int32_t x780 = -1;
	volatile int32_t t194 = 11849;

    t194 = (((x777==x778)!=x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x782 = -41240LL;
	int16_t x784 = 1;
	int32_t t195 = 3389;

    t195 = (((x781==x782)!=x783)|x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = INT16_MIN;
	uint32_t x787 = UINT32_MAX;
	int8_t x788 = 13;
	int32_t t196 = -3540592;

    t196 = (((x785==x786)!=x787)|x788);

    if (t196 != 13) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MIN;
	int64_t x790 = INT64_MIN;
	static int64_t x791 = INT64_MIN;
	volatile int16_t x792 = INT16_MAX;
	volatile int32_t t197 = 17018;

    t197 = (((x789==x790)!=x791)|x792);

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -4;
	int16_t x794 = INT16_MAX;
	int32_t x796 = -496;
	volatile int32_t t198 = -1471419;

    t198 = (((x793==x794)!=x795)|x796);

    if (t198 != -495) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 7304949U;
	static int32_t x798 = 1;
	static volatile uint32_t x799 = 1286340122U;
	int64_t x800 = INT64_MIN;
	volatile int64_t t199 = 1213LL;

    t199 = (((x797==x798)!=x799)|x800);

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

