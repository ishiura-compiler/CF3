
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

uint32_t x8 = UINT32_MAX;
int8_t x9 = INT8_MAX;
volatile int64_t x10 = INT64_MIN;
static volatile int64_t x12 = INT64_MIN;
uint32_t x22 = 101071U;
volatile int32_t x23 = -1;
uint8_t x27 = UINT8_MAX;
static int32_t t6 = 4;
volatile int32_t t8 = 37363;
int8_t x38 = -1;
volatile int32_t t10 = -87177665;
volatile int32_t x50 = INT32_MIN;
int8_t x53 = INT8_MIN;
int8_t x57 = INT8_MAX;
int32_t t14 = -2;
static int64_t x65 = INT64_MIN;
volatile int8_t x68 = -1;
static volatile int64_t x87 = INT64_MIN;
int32_t t21 = 57128386;
static uint64_t x89 = UINT64_MAX;
volatile int32_t t23 = 1;
uint64_t x99 = 14746LLU;
static int16_t x100 = -1;
int32_t t24 = -9492866;
int32_t x106 = -78594;
int64_t x108 = 1LL;
static int64_t x112 = -50719272255LL;
volatile int32_t t27 = 132336;
int32_t x115 = -32450646;
uint16_t x116 = UINT16_MAX;
int16_t x118 = INT16_MAX;
int8_t x119 = -1;
int8_t x128 = 1;
int16_t x129 = INT16_MAX;
volatile int32_t x131 = 263852988;
int64_t x134 = -1LL;
static volatile int32_t t33 = -6356;
int8_t x137 = -1;
uint8_t x139 = UINT8_MAX;
int16_t x148 = -1;
static volatile int32_t t37 = -463349;
uint16_t x156 = UINT16_MAX;
int32_t t38 = 8568;
static uint64_t x161 = UINT64_MAX;
int8_t x162 = 8;
uint32_t x168 = UINT32_MAX;
int8_t x170 = INT8_MIN;
static int64_t x179 = -79LL;
uint16_t x181 = 38U;
int16_t x183 = INT16_MIN;
int16_t x203 = -1;
int64_t x211 = INT64_MAX;
int8_t x212 = -1;
int32_t x213 = INT32_MIN;
uint32_t x215 = UINT32_MAX;
static int64_t x223 = -6LL;
static int64_t x224 = INT64_MIN;
int64_t x231 = INT64_MIN;
int8_t x241 = 2;
volatile int8_t x242 = INT8_MIN;
uint16_t x244 = 1793U;
int64_t x247 = INT64_MIN;
int32_t x249 = INT32_MAX;
int8_t x253 = -30;
int16_t x254 = INT16_MAX;
int32_t t64 = -486597;
volatile int64_t x261 = -1LL;
int16_t x264 = INT16_MIN;
volatile int32_t t66 = 4946;
uint32_t x273 = UINT32_MAX;
int32_t x275 = 88298;
int32_t x276 = -413;
int32_t t69 = 337564409;
int64_t x281 = -358254507316055LL;
uint16_t x284 = UINT16_MAX;
static int64_t x286 = INT64_MIN;
int32_t x296 = INT32_MIN;
int8_t x297 = -1;
uint32_t x298 = 1101524U;
volatile uint8_t x306 = UINT8_MAX;
int16_t x311 = INT16_MIN;
volatile int32_t t77 = -68727;
int64_t x313 = INT64_MIN;
int8_t x315 = INT8_MIN;
int64_t x316 = INT64_MIN;
uint32_t x320 = 129764U;
int32_t x322 = -13834;
volatile int8_t x323 = 26;
static int32_t t80 = -8096955;
static int32_t t81 = -176;
volatile int32_t x331 = 31539826;
int32_t x340 = INT32_MAX;
static volatile int32_t t84 = 176;
uint8_t x344 = UINT8_MAX;
uint64_t x347 = UINT64_MAX;
int32_t t86 = 987371881;
static volatile int16_t x351 = 10;
int64_t x357 = 115011318533LL;
int32_t t91 = 28;
int8_t x372 = -1;
uint32_t x373 = 8221747U;
volatile int32_t t93 = -8088302;
uint16_t x379 = 2U;
int8_t x380 = 45;
uint16_t x381 = 25734U;
volatile uint64_t x383 = 15365627923324011LLU;
volatile int32_t t95 = -73;
volatile uint8_t x386 = 51U;
uint16_t x392 = UINT16_MAX;
volatile int32_t t97 = -2062;
volatile int16_t x403 = -1;
static int32_t x404 = 7416577;
volatile int32_t t101 = 1;
volatile uint16_t x410 = UINT16_MAX;
int16_t x414 = -1;
int16_t x429 = INT16_MAX;
int16_t x433 = 480;
volatile int8_t x436 = -1;
static int64_t x437 = INT64_MAX;
int32_t t109 = -51405;
int32_t t110 = 26;
uint32_t x451 = 273U;
int64_t x458 = INT64_MIN;
int32_t x461 = INT32_MIN;
static int64_t x467 = -84LL;
int32_t x468 = INT32_MIN;
static uint16_t x472 = UINT16_MAX;
volatile int32_t t119 = 55;
int8_t x482 = 4;
uint32_t x483 = 58809U;
int16_t x493 = 452;
static int32_t t123 = -1281;
int64_t x497 = INT64_MIN;
uint8_t x503 = 17U;
int32_t t125 = -144;
static volatile uint64_t x522 = 14801769LLU;
static volatile uint32_t x533 = UINT32_MAX;
int64_t x539 = 2044770615828232LL;
int32_t t135 = 37;
uint64_t x550 = UINT64_MAX;
uint16_t x552 = UINT16_MAX;
static volatile int32_t t139 = 1062;
static int16_t x562 = INT16_MIN;
static uint32_t x563 = 0U;
int64_t x571 = INT64_MIN;
int32_t x573 = -2008;
int32_t x578 = 25;
int64_t x582 = -1LL;
volatile int64_t x585 = -1LL;
static int16_t x588 = 53;
int32_t t147 = 685088;
volatile int8_t x600 = INT8_MIN;
int32_t t149 = -2894317;
static uint16_t x603 = 59U;
int8_t x604 = INT8_MIN;
uint8_t x614 = 2U;
uint32_t x618 = UINT32_MAX;
int8_t x622 = 10;
int32_t t156 = -22;
static volatile uint8_t x629 = UINT8_MAX;
volatile int8_t x631 = -1;
uint8_t x633 = 2U;
volatile int8_t x648 = INT8_MIN;
static int32_t t161 = -755;
volatile int32_t t164 = -26931060;
int64_t x661 = INT64_MAX;
int16_t x667 = -1431;
int64_t x674 = INT64_MIN;
volatile int32_t x677 = -1;
static uint8_t x679 = UINT8_MAX;
int32_t t169 = -679132;
uint64_t x683 = 267346412680LLU;
int64_t x685 = INT64_MAX;
int64_t x689 = INT64_MAX;
uint64_t x692 = UINT64_MAX;
volatile int32_t t175 = 116317;
volatile int32_t t176 = -83986;
int8_t x726 = INT8_MIN;
static int32_t x734 = 7939;
volatile int32_t t185 = -743655;
int32_t x746 = -112529;
uint16_t x747 = UINT16_MAX;
int64_t x753 = -1LL;
int16_t x756 = -3;
volatile int32_t t188 = -9345;
int8_t x765 = -19;
uint8_t x769 = UINT8_MAX;
uint32_t x773 = 42896U;
static uint64_t x774 = 41857LLU;
uint16_t x777 = 3U;
static int64_t x780 = INT64_MAX;
int64_t x782 = INT64_MIN;
volatile uint16_t x787 = 49U;
int16_t x797 = 1;
static uint64_t x798 = 226600529LLU;


void f0(void) {
    	uint32_t x1 = 3205U;
	uint64_t x2 = UINT64_MAX;
	uint64_t x3 = UINT64_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = 11264;

    t0 = ((x1==(x2|x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MAX;
	static int8_t x7 = -1;
	int32_t t1 = -8657109;

    t1 = ((x5==(x6|x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x11 = 4U;
	int32_t t2 = -1663;

    t2 = ((x9==(x10|x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MIN;
	volatile uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 363909946;

    t3 = ((x13==(x14|x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	static int8_t x18 = INT8_MAX;
	static int16_t x19 = 1146;
	int64_t x20 = 1382070173074LL;
	volatile int32_t t4 = -375144990;

    t4 = ((x17==(x18|x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 256699406728558LLU;
	uint32_t x24 = 844604721U;
	volatile int32_t t5 = 1893;

    t5 = ((x21==(x22|x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 40537665LLU;
	static volatile uint16_t x26 = 7754U;
	int8_t x28 = INT8_MIN;

    t6 = ((x25==(x26|x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 4985728;
	static uint16_t x30 = UINT16_MAX;
	int64_t x31 = 106165969474172LL;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -883492;

    t7 = ((x29==(x30|x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 9215U;
	volatile int64_t x34 = INT64_MIN;
	volatile int64_t x35 = INT64_MIN;
	uint8_t x36 = 1U;

    t8 = ((x33==(x34|x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 248;
	static int8_t x39 = INT8_MAX;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -2156;

    t9 = ((x37==(x38|x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = 648923U;
	int8_t x43 = -1;
	uint16_t x44 = 111U;

    t10 = ((x41==(x42|x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	int8_t x47 = -42;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -239197;

    t11 = ((x45==(x46|x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	static volatile int16_t x51 = INT16_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 20736668;

    t12 = ((x49==(x50|x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x54 = 1944U;
	int16_t x55 = -1;
	static volatile int64_t x56 = -1LL;
	volatile int32_t t13 = 0;

    t13 = ((x53==(x54|x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = 127698833838LL;
	int8_t x59 = INT8_MIN;
	static int64_t x60 = -1LL;

    t14 = ((x57==(x58|x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 3733;
	int8_t x62 = INT8_MAX;
	uint8_t x63 = 3U;
	static volatile uint8_t x64 = 1U;
	static volatile int32_t t15 = 0;

    t15 = ((x61==(x62|x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -1;
	uint64_t x67 = 5LLU;
	volatile int32_t t16 = -57686;

    t16 = ((x65==(x66|x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 7429;
	uint64_t x70 = 429596LLU;
	uint32_t x71 = 1U;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 6469;

    t17 = ((x69==(x70|x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static int16_t x74 = -1;
	uint8_t x75 = 8U;
	int64_t x76 = -1951586061947454LL;
	volatile int32_t t18 = -486;

    t18 = ((x73==(x74|x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	static int8_t x79 = -1;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = 3730375;

    t19 = ((x77==(x78|x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -6;
	int16_t x83 = -1;
	volatile uint16_t x84 = 47U;
	volatile int32_t t20 = -295;

    t20 = ((x81==(x82|x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 2224644519840LLU;
	int8_t x86 = 29;
	int16_t x88 = INT16_MIN;

    t21 = ((x85==(x86|x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 44U;
	int8_t x91 = 6;
	int8_t x92 = 23;
	static volatile int32_t t22 = 11083;

    t22 = ((x89==(x90|x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x93 = 8324449158110LLU;
	volatile uint64_t x94 = 3517986388237LLU;
	int16_t x95 = INT16_MAX;
	static int32_t x96 = -7487;

    t23 = ((x93==(x94|x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;

    t24 = ((x97==(x98|x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	int16_t x102 = 3;
	volatile uint32_t x103 = 1852738395U;
	uint32_t x104 = 978409327U;
	static int32_t t25 = -29;

    t25 = ((x101==(x102|x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	static uint8_t x107 = 21U;
	int32_t t26 = 13657;

    t26 = ((x105==(x106|x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = UINT16_MAX;
	int8_t x110 = -1;
	int32_t x111 = INT32_MIN;

    t27 = ((x109==(x110|x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 30948469766690LLU;
	static uint64_t x114 = 1268LLU;
	static volatile int32_t t28 = -51;

    t28 = ((x113==(x114|x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	int64_t x120 = INT64_MAX;
	static int32_t t29 = -193;

    t29 = ((x117==(x118|x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 3183524U;
	uint16_t x122 = 2U;
	static uint64_t x123 = UINT64_MAX;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = 30179;

    t30 = ((x121==(x122|x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = -22;
	volatile int16_t x126 = -1;
	int8_t x127 = 15;
	int32_t t31 = 8715842;

    t31 = ((x125==(x126|x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = -1;
	int16_t x132 = INT16_MAX;
	volatile int32_t t32 = 51425;

    t32 = ((x129==(x130|x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	static int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;

    t33 = ((x133==(x134|x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x138 = INT8_MAX;
	int8_t x140 = INT8_MAX;
	int32_t t34 = 1;

    t34 = ((x137==(x138|x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	static int32_t x143 = INT32_MAX;
	volatile int16_t x144 = 12;
	volatile int32_t t35 = -986;

    t35 = ((x141==(x142|x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = 952442661605LL;
	volatile int32_t t36 = -90;

    t36 = ((x145==(x146|x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 68U;
	int16_t x150 = -1;
	int8_t x151 = -1;
	int64_t x152 = 14401403LL;

    t37 = ((x149==(x150|x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	uint64_t x154 = 82465LLU;
	static uint8_t x155 = UINT8_MAX;

    t38 = ((x153==(x154|x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	int64_t x158 = -1LL;
	uint64_t x159 = 26129157LLU;
	uint16_t x160 = 5U;
	int32_t t39 = -2034;

    t39 = ((x157==(x158|x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x163 = INT8_MAX;
	int16_t x164 = -11;
	int32_t t40 = 2935;

    t40 = ((x161==(x162|x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = -1;
	int16_t x167 = INT16_MAX;
	int32_t t41 = -81168162;

    t41 = ((x165==(x166|x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 138U;
	int64_t x171 = 522446930088105818LL;
	volatile int16_t x172 = -1;
	int32_t t42 = -570138;

    t42 = ((x169==(x170|x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	static int64_t x174 = INT64_MIN;
	int16_t x175 = -15;
	volatile uint64_t x176 = 8053172636183130848LLU;
	int32_t t43 = -66825556;

    t43 = ((x173==(x174|x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 12U;
	int64_t x178 = INT64_MIN;
	int8_t x180 = -1;
	volatile int32_t t44 = 35;

    t44 = ((x177==(x178|x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x182 = -1LL;
	volatile int32_t x184 = INT32_MAX;
	volatile int32_t t45 = -3396;

    t45 = ((x181==(x182|x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x185 = 2U;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int64_t x188 = -139055775LL;
	int32_t t46 = 6930341;

    t46 = ((x185==(x186|x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	uint64_t x190 = 124626362024831LLU;
	uint8_t x191 = 1U;
	uint8_t x192 = 0U;
	int32_t t47 = 24;

    t47 = ((x189==(x190|x191))!=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x193 = 27727LLU;
	uint8_t x194 = 10U;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -3;

    t48 = ((x193==(x194|x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	volatile uint16_t x198 = UINT16_MAX;
	uint16_t x199 = 2138U;
	int64_t x200 = INT64_MAX;
	static int32_t t49 = -334241640;

    t49 = ((x197==(x198|x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MIN;
	uint16_t x202 = UINT16_MAX;
	int16_t x204 = INT16_MAX;
	int32_t t50 = 16087;

    t50 = ((x201==(x202|x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static int8_t x206 = -3;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = -241;

    t51 = ((x205==(x206|x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x209 = -1LL;
	int32_t x210 = -64830178;
	volatile int32_t t52 = 293267644;

    t52 = ((x209==(x210|x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x214 = 11;
	int64_t x216 = -70141033176489329LL;
	int32_t t53 = 54336988;

    t53 = ((x213==(x214|x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int16_t x218 = 74;
	static uint8_t x219 = 1U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 20059;

    t54 = ((x217==(x218|x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = 3646;
	static volatile int32_t x222 = -923;
	int32_t t55 = 3772;

    t55 = ((x221==(x222|x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int32_t x227 = 6167770;
	uint8_t x228 = 3U;
	int32_t t56 = 33674530;

    t56 = ((x225==(x226|x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = UINT64_MAX;
	uint16_t x232 = 154U;
	volatile int32_t t57 = -257213;

    t57 = ((x229==(x230|x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int8_t x236 = 7;
	static volatile int32_t t58 = 254985;

    t58 = ((x233==(x234|x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	volatile int16_t x238 = -12;
	static int16_t x239 = 1;
	static int8_t x240 = -1;
	volatile int32_t t59 = 3674;

    t59 = ((x237==(x238|x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x243 = 12047;
	int32_t t60 = 7;

    t60 = ((x241==(x242|x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	int8_t x246 = -3;
	int32_t x248 = 9991821;
	volatile int32_t t61 = 59419424;

    t61 = ((x245==(x246|x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x250 = INT64_MIN;
	volatile int64_t x251 = INT64_MIN;
	uint8_t x252 = 20U;
	volatile int32_t t62 = -9154;

    t62 = ((x249==(x250|x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x255 = INT16_MAX;
	uint16_t x256 = UINT16_MAX;
	int32_t t63 = 24;

    t63 = ((x253==(x254|x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	static int64_t x258 = 0LL;
	static int32_t x259 = -1;
	uint64_t x260 = UINT64_MAX;

    t64 = ((x257==(x258|x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x262 = 82U;
	int32_t x263 = INT32_MIN;
	volatile int32_t t65 = -111261174;

    t65 = ((x261==(x262|x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MAX;

    t66 = ((x265==(x266|x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MAX;
	volatile int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = 39488;

    t67 = ((x269==(x270|x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x274 = INT8_MIN;
	int32_t t68 = 77313;

    t68 = ((x273==(x274|x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MAX;
	volatile int8_t x279 = INT8_MAX;
	volatile int8_t x280 = INT8_MIN;

    t69 = ((x277==(x278|x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x282 = UINT16_MAX;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t70 = 28111;

    t70 = ((x281==(x282|x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	uint8_t x288 = 1U;
	int32_t t71 = 0;

    t71 = ((x285==(x286|x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 294220U;
	int16_t x290 = -3;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t72 = -11675;

    t72 = ((x289==(x290|x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	static volatile int8_t x294 = 1;
	static volatile uint64_t x295 = UINT64_MAX;
	int32_t t73 = -2048516;

    t73 = ((x293==(x294|x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x299 = INT32_MIN;
	volatile int64_t x300 = -1LL;
	int32_t t74 = -7;

    t74 = ((x297==(x298|x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	volatile int8_t x302 = INT8_MIN;
	static int8_t x303 = INT8_MAX;
	int8_t x304 = -1;
	volatile int32_t t75 = -3301307;

    t75 = ((x301==(x302|x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = 2712986638LLU;
	int64_t x307 = -1LL;
	int64_t x308 = -57772097654189LL;
	volatile int32_t t76 = -53;

    t76 = ((x305==(x306|x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	volatile int16_t x310 = INT16_MAX;
	volatile int64_t x312 = INT64_MIN;

    t77 = ((x309==(x310|x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = UINT32_MAX;
	volatile int32_t t78 = -101802008;

    t78 = ((x313==(x314|x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 590U;
	int32_t x318 = INT32_MAX;
	static volatile uint32_t x319 = 383U;
	static int32_t t79 = 2;

    t79 = ((x317==(x318|x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;

    t80 = ((x321==(x322|x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int32_t x327 = INT32_MAX;
	static uint32_t x328 = 266305486U;

    t81 = ((x325==(x326|x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MAX;
	uint16_t x330 = 1U;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -5039;

    t82 = ((x329==(x330|x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	uint32_t x334 = 7300336U;
	int64_t x335 = INT64_MAX;
	volatile int16_t x336 = -3497;
	static int32_t t83 = 668366499;

    t83 = ((x333==(x334|x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x338 = 3721986007LL;
	int32_t x339 = -23376580;

    t84 = ((x337==(x338|x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -1513;
	uint32_t x342 = 91589U;
	static int64_t x343 = INT64_MIN;
	int32_t t85 = 363949365;

    t85 = ((x341==(x342|x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 189793802363099121LLU;
	int16_t x346 = -5288;
	uint32_t x348 = 41U;

    t86 = ((x345==(x346|x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = -42432704;
	static int64_t x350 = -1LL;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t87 = 6225732;

    t87 = ((x349==(x350|x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MAX;
	int8_t x354 = 1;
	int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = 14399;

    t88 = ((x353==(x354|x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x358 = 48U;
	volatile uint32_t x359 = 3U;
	int16_t x360 = 15151;
	volatile int32_t t89 = 7542;

    t89 = ((x357==(x358|x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 4063U;
	int64_t x362 = INT64_MIN;
	volatile int16_t x363 = -269;
	volatile int32_t x364 = INT32_MIN;
	int32_t t90 = -28;

    t90 = ((x361==(x362|x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = 457;
	uint8_t x368 = UINT8_MAX;

    t91 = ((x365==(x366|x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = UINT16_MAX;
	volatile int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MAX;
	int32_t t92 = 0;

    t92 = ((x369==(x370|x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x374 = 2;
	uint8_t x375 = 3U;
	volatile int64_t x376 = 18LL;

    t93 = ((x373==(x374|x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x377 = 377571U;
	int16_t x378 = -1;
	int32_t t94 = -2;

    t94 = ((x377==(x378|x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -1LL;
	volatile uint8_t x384 = UINT8_MAX;

    t95 = ((x381==(x382|x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	static int64_t x387 = INT64_MIN;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = -1;

    t96 = ((x385==(x386|x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;

    t97 = ((x389==(x390|x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MIN;
	static int64_t x394 = 1691LL;
	uint32_t x395 = 2784U;
	static int64_t x396 = INT64_MIN;
	int32_t t98 = -9;

    t98 = ((x393==(x394|x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	volatile int8_t x398 = INT8_MIN;
	uint32_t x399 = 16U;
	int8_t x400 = 40;
	int32_t t99 = 2;

    t99 = ((x397==(x398|x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -517107681777118LL;
	volatile int64_t x402 = 2366405284268615LL;
	int32_t t100 = 162266129;

    t100 = ((x401==(x402|x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	uint16_t x406 = 29492U;
	int16_t x407 = 498;
	uint64_t x408 = UINT64_MAX;

    t101 = ((x405==(x406|x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = 0;
	static uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = 414955914;

    t102 = ((x409==(x410|x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MAX;
	volatile int64_t x415 = INT64_MIN;
	static int8_t x416 = INT8_MAX;
	int32_t t103 = 946;

    t103 = ((x413==(x414|x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	int8_t x418 = 1;
	static int64_t x419 = INT64_MAX;
	int64_t x420 = INT64_MIN;
	static volatile int32_t t104 = -1065862930;

    t104 = ((x417==(x418|x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	static int64_t x422 = INT64_MAX;
	int8_t x423 = -4;
	static volatile int32_t x424 = INT32_MIN;
	int32_t t105 = 271;

    t105 = ((x421==(x422|x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1069328313435LL;
	int8_t x426 = -5;
	int16_t x427 = -1;
	int64_t x428 = INT64_MIN;
	int32_t t106 = -1;

    t106 = ((x425==(x426|x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	uint8_t x432 = 13U;
	int32_t t107 = 1;

    t107 = ((x429==(x430|x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	uint32_t x435 = 26140U;
	int32_t t108 = 84;

    t108 = ((x433==(x434|x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x438 = -10;
	uint8_t x439 = 58U;
	int16_t x440 = INT16_MIN;

    t109 = ((x437==(x438|x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -25;
	int16_t x442 = 1;
	int32_t x443 = INT32_MIN;
	int8_t x444 = 34;

    t110 = ((x441==(x442|x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 0U;
	static int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	static int64_t x448 = -1LL;
	int32_t t111 = 201;

    t111 = ((x445==(x446|x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -31;
	uint64_t x450 = 2491LLU;
	volatile uint16_t x452 = 6540U;
	volatile int32_t t112 = -116;

    t112 = ((x449==(x450|x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	int32_t x454 = INT32_MAX;
	uint8_t x455 = 3U;
	int64_t x456 = -184362645LL;
	static int32_t t113 = 1;

    t113 = ((x453==(x454|x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = INT16_MIN;
	int16_t x459 = INT16_MAX;
	static int16_t x460 = -1;
	int32_t t114 = 14;

    t114 = ((x457==(x458|x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x462 = INT32_MAX;
	int8_t x463 = 2;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t115 = -42653;

    t115 = ((x461==(x462|x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -68;
	static int8_t x466 = -1;
	volatile int32_t t116 = 1;

    t116 = ((x465==(x466|x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	uint16_t x470 = UINT16_MAX;
	static int64_t x471 = INT64_MAX;
	int32_t t117 = 821280962;

    t117 = ((x469==(x470|x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 14856;
	int8_t x474 = INT8_MIN;
	static uint16_t x475 = 7U;
	int64_t x476 = 936655LL;
	int32_t t118 = 11436836;

    t118 = ((x473==(x474|x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 1LL;
	volatile uint32_t x478 = UINT32_MAX;
	volatile int32_t x479 = -64145;
	int32_t x480 = INT32_MIN;

    t119 = ((x477==(x478|x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	static volatile uint32_t x484 = 716319U;
	volatile int32_t t120 = -1;

    t120 = ((x481==(x482|x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 951232069413LL;
	volatile uint16_t x486 = 1653U;
	static int32_t x487 = -1;
	int16_t x488 = INT16_MAX;
	volatile int32_t t121 = -3;

    t121 = ((x485==(x486|x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 107U;
	static int16_t x490 = INT16_MAX;
	int64_t x491 = -2654440472548929LL;
	int64_t x492 = -1LL;
	static volatile int32_t t122 = 1;

    t122 = ((x489==(x490|x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x494 = 6U;
	int32_t x495 = INT32_MAX;
	volatile uint16_t x496 = 3804U;

    t123 = ((x493==(x494|x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x498 = 1U;
	uint8_t x499 = 61U;
	int32_t x500 = -1;
	volatile int32_t t124 = 22749;

    t124 = ((x497==(x498|x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int8_t x502 = -1;
	static volatile uint16_t x504 = UINT16_MAX;

    t125 = ((x501==(x502|x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	int8_t x506 = 0;
	int32_t x507 = -142370;
	int16_t x508 = INT16_MAX;
	static volatile int32_t t126 = -20;

    t126 = ((x505==(x506|x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	int8_t x510 = INT8_MIN;
	uint32_t x511 = 425U;
	uint8_t x512 = 6U;
	int32_t t127 = 3368;

    t127 = ((x509==(x510|x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 150562397U;
	int8_t x514 = 0;
	uint8_t x515 = 22U;
	static int16_t x516 = -3;
	int32_t t128 = 4298;

    t128 = ((x513==(x514|x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = -1;
	int8_t x518 = -1;
	static int64_t x519 = INT64_MIN;
	volatile uint8_t x520 = UINT8_MAX;
	int32_t t129 = 3;

    t129 = ((x517==(x518|x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	static int64_t x523 = -1LL;
	int64_t x524 = -422518356LL;
	volatile int32_t t130 = 13;

    t130 = ((x521==(x522|x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	static int32_t x526 = INT32_MIN;
	static volatile int16_t x527 = INT16_MIN;
	int32_t x528 = -1;
	static volatile int32_t t131 = -1;

    t131 = ((x525==(x526|x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = 106U;
	static int32_t x530 = 22706;
	volatile int16_t x531 = INT16_MAX;
	uint16_t x532 = UINT16_MAX;
	int32_t t132 = -602;

    t132 = ((x529==(x530|x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = INT64_MIN;
	static uint16_t x535 = UINT16_MAX;
	int8_t x536 = INT8_MAX;
	static int32_t t133 = 10841710;

    t133 = ((x533==(x534|x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	int8_t x538 = -7;
	int64_t x540 = INT64_MIN;
	volatile int32_t t134 = -571439;

    t134 = ((x537==(x538|x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x541 = 1U;
	int32_t x542 = -1;
	int32_t x543 = INT32_MAX;
	volatile int8_t x544 = -1;

    t135 = ((x541==(x542|x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x545 = 6582428785049LLU;
	volatile int32_t x546 = -6902;
	int32_t x547 = -6366;
	uint8_t x548 = UINT8_MAX;
	int32_t t136 = -7;

    t136 = ((x545==(x546|x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x549 = UINT16_MAX;
	int16_t x551 = -1;
	int32_t t137 = 1497043;

    t137 = ((x549==(x550|x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = 362LL;
	uint32_t x554 = 2021965U;
	volatile int32_t x555 = INT32_MIN;
	volatile uint32_t x556 = 1018794U;
	int32_t t138 = -48681;

    t138 = ((x553==(x554|x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x557 = INT32_MIN;
	int32_t x558 = INT32_MIN;
	int16_t x559 = 606;
	int16_t x560 = 967;

    t139 = ((x557==(x558|x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	int8_t x564 = -1;
	int32_t t140 = 0;

    t140 = ((x561==(x562|x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	uint32_t x566 = UINT32_MAX;
	int8_t x567 = INT8_MAX;
	uint16_t x568 = 1005U;
	int32_t t141 = 9;

    t141 = ((x565==(x566|x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	int8_t x570 = -12;
	volatile uint16_t x572 = 3731U;
	int32_t t142 = -1;

    t142 = ((x569==(x570|x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = -398379025825LL;
	int64_t x575 = -435573650640320576LL;
	int64_t x576 = 9580661599LL;
	static int32_t t143 = 301704527;

    t143 = ((x573==(x574|x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	static int8_t x579 = INT8_MAX;
	int8_t x580 = -1;
	static volatile int32_t t144 = -2054457;

    t144 = ((x577==(x578|x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = 64496071;
	int8_t x583 = 0;
	int64_t x584 = 300019424908097971LL;
	volatile int32_t t145 = -137;

    t145 = ((x581==(x582|x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = INT32_MIN;
	uint32_t x587 = 3232U;
	int32_t t146 = 780129;

    t146 = ((x585==(x586|x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = INT16_MIN;
	static uint64_t x590 = 135795LLU;
	int16_t x591 = -1;
	volatile int64_t x592 = INT64_MAX;

    t147 = ((x589==(x590|x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	static int64_t x594 = INT64_MIN;
	uint32_t x595 = UINT32_MAX;
	volatile uint8_t x596 = 119U;
	int32_t t148 = 0;

    t148 = ((x593==(x594|x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	static int16_t x598 = INT16_MIN;
	int32_t x599 = INT32_MIN;

    t149 = ((x597==(x598|x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	int16_t x602 = -1;
	int32_t t150 = 47178;

    t150 = ((x601==(x602|x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	int64_t x606 = 174263932LL;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = INT16_MIN;
	int32_t t151 = 568937;

    t151 = ((x605==(x606|x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	int32_t x610 = 4;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t x612 = 1;
	static int32_t t152 = -1803;

    t152 = ((x609==(x610|x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -389086777275LL;
	uint64_t x615 = UINT64_MAX;
	static uint32_t x616 = UINT32_MAX;
	int32_t t153 = -3002;

    t153 = ((x613==(x614|x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 54LLU;
	static int8_t x619 = 0;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t154 = -95579677;

    t154 = ((x617==(x618|x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = 140489LL;
	volatile int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t155 = 495612;

    t155 = ((x621==(x622|x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -12973;
	int8_t x626 = INT8_MIN;
	volatile int32_t x627 = INT32_MAX;
	uint8_t x628 = UINT8_MAX;

    t156 = ((x625==(x626|x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = UINT64_MAX;
	uint64_t x632 = 22LLU;
	int32_t t157 = -2;

    t157 = ((x629==(x630|x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x634 = -20;
	uint32_t x635 = 115190512U;
	int8_t x636 = INT8_MIN;
	int32_t t158 = 4551;

    t158 = ((x633==(x634|x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = INT8_MIN;
	volatile uint64_t x638 = 123LLU;
	int16_t x639 = INT16_MIN;
	volatile int32_t x640 = INT32_MIN;
	int32_t t159 = -308220046;

    t159 = ((x637==(x638|x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MAX;
	int16_t x642 = 1;
	uint32_t x643 = 491789776U;
	int64_t x644 = -1LL;
	int32_t t160 = 1;

    t160 = ((x641==(x642|x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 5U;
	int64_t x646 = 33920578211LL;
	int8_t x647 = INT8_MAX;

    t161 = ((x645==(x646|x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = INT64_MAX;
	volatile int16_t x650 = 2736;
	int16_t x651 = INT16_MAX;
	int64_t x652 = INT64_MIN;
	static int32_t t162 = -946;

    t162 = ((x649==(x650|x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	static uint16_t x654 = 132U;
	int16_t x655 = -12;
	uint64_t x656 = 130533791727771071LLU;
	int32_t t163 = -2;

    t163 = ((x653==(x654|x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 92238610;
	volatile int32_t x658 = -544047121;
	int32_t x659 = -1;
	static uint8_t x660 = 48U;

    t164 = ((x657==(x658|x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = 658159706LL;
	uint64_t x663 = 8000318LLU;
	static uint32_t x664 = UINT32_MAX;
	static int32_t t165 = 294;

    t165 = ((x661==(x662|x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MIN;
	static uint64_t x668 = UINT64_MAX;
	int32_t t166 = 437657132;

    t166 = ((x665==(x666|x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int16_t x670 = INT16_MAX;
	volatile int8_t x671 = INT8_MAX;
	uint64_t x672 = 15722934160852LLU;
	static int32_t t167 = 1900598;

    t167 = ((x669==(x670|x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	uint16_t x675 = 0U;
	volatile uint16_t x676 = 6998U;
	int32_t t168 = -399654;

    t168 = ((x673==(x674|x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x678 = 1413;
	volatile int32_t x680 = INT32_MIN;

    t169 = ((x677==(x678|x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	volatile int32_t x682 = -1;
	static int16_t x684 = INT16_MIN;
	int32_t t170 = 944787938;

    t170 = ((x681==(x682|x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x686 = 31U;
	int16_t x687 = 1;
	volatile int16_t x688 = INT16_MIN;
	int32_t t171 = 1;

    t171 = ((x685==(x686|x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x690 = 2;
	static int16_t x691 = INT16_MAX;
	int32_t t172 = 196;

    t172 = ((x689==(x690|x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MAX;
	int64_t x694 = INT64_MIN;
	static int16_t x695 = INT16_MIN;
	volatile int8_t x696 = INT8_MAX;
	static volatile int32_t t173 = -4;

    t173 = ((x693==(x694|x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 1150713831U;
	static volatile int32_t x698 = INT32_MIN;
	int32_t x699 = INT32_MIN;
	volatile int16_t x700 = INT16_MAX;
	volatile int32_t t174 = -342784981;

    t174 = ((x697==(x698|x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 11U;
	int8_t x702 = -9;
	uint64_t x703 = 7693016687LLU;
	int8_t x704 = 4;

    t175 = ((x701==(x702|x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -24190228;
	uint8_t x706 = UINT8_MAX;
	int32_t x707 = INT32_MAX;
	int8_t x708 = INT8_MIN;

    t176 = ((x705==(x706|x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = -1;
	uint16_t x710 = UINT16_MAX;
	volatile int32_t x711 = INT32_MIN;
	uint16_t x712 = 18U;
	volatile int32_t t177 = 39235712;

    t177 = ((x709==(x710|x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -118892715;
	int64_t x714 = -13620053831501LL;
	int16_t x715 = INT16_MAX;
	int32_t x716 = -1;
	int32_t t178 = -130866;

    t178 = ((x713==(x714|x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	static int32_t x718 = 9142229;
	volatile int32_t x719 = -1;
	int64_t x720 = INT64_MAX;
	int32_t t179 = 13;

    t179 = ((x717==(x718|x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	uint16_t x722 = UINT16_MAX;
	int8_t x723 = -1;
	int8_t x724 = 29;
	static int32_t t180 = -126;

    t180 = ((x721==(x722|x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 94U;
	int8_t x727 = INT8_MIN;
	int16_t x728 = -13;
	volatile int32_t t181 = 650733924;

    t181 = ((x725==(x726|x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	volatile int64_t x730 = -1LL;
	volatile int8_t x731 = -1;
	static int16_t x732 = -17;
	volatile int32_t t182 = -39;

    t182 = ((x729==(x730|x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	int16_t x735 = -1;
	volatile int16_t x736 = 1;
	int32_t t183 = -1655;

    t183 = ((x733==(x734|x735))!=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 1U;
	int8_t x738 = INT8_MIN;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 105145306;

    t184 = ((x737==(x738|x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 2;
	int64_t x742 = INT64_MIN;
	uint16_t x743 = UINT16_MAX;
	static volatile int64_t x744 = -40720031028LL;

    t185 = ((x741==(x742|x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x745 = 1;
	int16_t x748 = -1568;
	int32_t t186 = -41357;

    t186 = ((x745==(x746|x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 177393LLU;
	static uint16_t x750 = UINT16_MAX;
	uint64_t x751 = 1348793505602643033LLU;
	int8_t x752 = -4;
	volatile int32_t t187 = -1427;

    t187 = ((x749==(x750|x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = -1;
	static uint64_t x755 = 343183495521471405LLU;

    t188 = ((x753==(x754|x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = 6819898088LL;
	static volatile int32_t x758 = -1280;
	uint64_t x759 = UINT64_MAX;
	uint32_t x760 = 1U;
	volatile int32_t t189 = 1646792;

    t189 = ((x757==(x758|x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 1;
	volatile int8_t x762 = INT8_MAX;
	int64_t x763 = INT64_MAX;
	volatile int8_t x764 = 11;
	static volatile int32_t t190 = 1891941;

    t190 = ((x761==(x762|x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x766 = 159126LLU;
	volatile int32_t x767 = -1;
	uint8_t x768 = 10U;
	volatile int32_t t191 = 1;

    t191 = ((x765==(x766|x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = 0;
	volatile uint8_t x771 = UINT8_MAX;
	int8_t x772 = -34;
	int32_t t192 = -2792345;

    t192 = ((x769==(x770|x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x775 = UINT32_MAX;
	int64_t x776 = -10962178LL;
	int32_t t193 = 0;

    t193 = ((x773==(x774|x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x778 = UINT32_MAX;
	int16_t x779 = -1;
	int32_t t194 = -1;

    t194 = ((x777==(x778|x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 225U;
	int16_t x783 = -1;
	int32_t x784 = -1;
	volatile int32_t t195 = -6364;

    t195 = ((x781==(x782|x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 4896306U;
	int16_t x786 = -1;
	uint32_t x788 = 1U;
	static volatile int32_t t196 = 1;

    t196 = ((x785==(x786|x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	int32_t x790 = -259;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = 865;
	int32_t t197 = 51;

    t197 = ((x789==(x790|x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1451U;
	int16_t x794 = -1;
	int32_t x795 = -246203334;
	int16_t x796 = -1;
	int32_t t198 = -3682864;

    t198 = ((x793==(x794|x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x799 = INT16_MIN;
	uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = 15;

    t199 = ((x797==(x798|x799))!=x800);

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

