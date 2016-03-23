
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

volatile uint32_t x10 = UINT32_MAX;
static int32_t x11 = -1;
static int16_t x14 = INT16_MIN;
uint8_t x20 = UINT8_MAX;
uint8_t x24 = UINT8_MAX;
volatile uint64_t x45 = 504465LLU;
static int32_t x47 = 1164307;
volatile int64_t t11 = -230084LL;
static int8_t x49 = 0;
static volatile uint32_t x61 = 429961547U;
int16_t x65 = INT16_MIN;
int8_t x66 = -1;
static uint16_t x70 = UINT16_MAX;
int64_t x74 = INT64_MAX;
uint32_t x75 = 1059U;
int8_t x77 = 0;
volatile uint64_t x79 = 23195761266875LLU;
volatile int32_t t18 = 3791857;
volatile int32_t t19 = 665;
volatile int64_t t20 = 43660LL;
volatile int16_t x99 = INT16_MIN;
uint16_t x103 = UINT16_MAX;
int64_t x108 = INT64_MAX;
int16_t x111 = INT16_MIN;
int32_t t26 = 1599506;
int64_t x115 = INT64_MIN;
static uint16_t x118 = UINT16_MAX;
static int16_t x155 = INT16_MIN;
int16_t x160 = -1;
int32_t t37 = -73585248;
volatile uint64_t x166 = UINT64_MAX;
volatile int64_t t39 = -651932LL;
static uint32_t x180 = 621586U;
uint16_t x194 = 8129U;
int8_t x195 = INT8_MAX;
uint32_t x199 = UINT32_MAX;
int32_t x203 = INT32_MIN;
uint16_t x206 = 1915U;
static int64_t x218 = -1LL;
int8_t x220 = 14;
volatile int32_t t51 = 33727;
int16_t x221 = INT16_MAX;
int32_t x223 = INT32_MIN;
uint8_t x232 = 73U;
volatile uint16_t x234 = 688U;
volatile int64_t x236 = INT64_MAX;
int16_t x239 = INT16_MIN;
uint16_t x241 = UINT16_MAX;
int32_t x245 = INT32_MAX;
static volatile uint64_t x247 = 346108LLU;
volatile uint64_t x248 = 1669679464733367464LLU;
int8_t x249 = -25;
static volatile int32_t x250 = INT32_MIN;
int32_t t59 = 8;
static volatile int8_t x257 = -15;
static int32_t x261 = INT32_MAX;
int64_t t61 = -64164LL;
int64_t x265 = 1311378889203441474LL;
uint8_t x266 = 1U;
int32_t x271 = -7;
int8_t x277 = INT8_MIN;
int32_t x279 = 3751452;
static volatile int64_t x280 = -3702753866723595LL;
static volatile uint8_t x282 = 17U;
volatile int32_t x304 = 64445374;
uint16_t x307 = 1087U;
uint16_t x308 = 6U;
static int16_t x319 = -1;
int32_t t75 = -1072187650;
int16_t x323 = INT16_MIN;
uint32_t t76 = 55U;
int64_t x331 = -1LL;
int32_t x332 = -1;
int64_t x340 = INT64_MIN;
int8_t x342 = -1;
int64_t t81 = 263186722259457348LL;
static uint8_t x351 = 114U;
static volatile int32_t t83 = 1;
int32_t x356 = INT32_MIN;
volatile int32_t t84 = -214407;
int16_t x372 = -1;
int16_t x373 = -1;
int64_t x374 = INT64_MIN;
int16_t x375 = -1;
uint64_t x379 = 17189LLU;
volatile int32_t x383 = INT32_MIN;
volatile int32_t t91 = -9781;
uint16_t x385 = UINT16_MAX;
int8_t x388 = 1;
static volatile int32_t t92 = 924309;
int8_t x389 = INT8_MAX;
static int64_t x392 = 1097957LL;
int64_t t93 = -146LL;
uint32_t x396 = UINT32_MAX;
static int64_t x406 = -1LL;
int64_t x412 = INT64_MAX;
int32_t x413 = -106552;
int8_t x414 = INT8_MAX;
volatile int32_t x424 = INT32_MIN;
int32_t t102 = -372004;
int16_t x430 = -1;
int16_t x432 = INT16_MIN;
volatile int32_t t103 = -3687;
uint64_t x437 = 1LLU;
static int16_t x446 = INT16_MAX;
int8_t x447 = -1;
int32_t t111 = 309390;
static volatile int32_t x465 = 495416372;
static int16_t x466 = -1;
volatile int32_t t112 = -9683459;
int32_t x470 = INT32_MIN;
int64_t x471 = -5125771049168304LL;
static uint32_t x472 = 63483561U;
uint8_t x477 = 3U;
uint16_t x485 = 44U;
uint8_t x490 = 10U;
int64_t x502 = -1LL;
static volatile int32_t t122 = -19386997;
int8_t x509 = INT8_MAX;
int8_t x510 = -1;
volatile int64_t t124 = 1789088101938028759LL;
static uint8_t x521 = 55U;
int16_t x522 = -29;
static int16_t x527 = -1355;
int64_t x536 = INT64_MAX;
int32_t t130 = -22;
int64_t x544 = -1LL;
static volatile int64_t t131 = 476822LL;
static uint16_t x553 = 0U;
volatile int8_t x555 = -1;
int16_t x558 = INT16_MIN;
uint16_t x562 = UINT16_MAX;
int16_t x565 = -1;
volatile int16_t x567 = INT16_MIN;
volatile int32_t t137 = -191;
volatile int32_t x570 = 50383821;
int32_t t138 = 32;
uint8_t x573 = 0U;
static int16_t x574 = -1;
uint64_t x577 = 630596071LLU;
int8_t x579 = -1;
int64_t x582 = -161400692LL;
int32_t x583 = -1;
int16_t x586 = 0;
int16_t x587 = INT16_MIN;
uint16_t x591 = 26431U;
static int32_t t143 = 7;
int8_t x595 = 12;
int8_t x596 = -1;
int64_t x601 = -1LL;
volatile int8_t x606 = 4;
int16_t x609 = INT16_MIN;
int16_t x610 = 2;
static int32_t t149 = -127;
int32_t x621 = -1;
static int64_t x625 = INT64_MIN;
static int64_t x629 = -1LL;
int32_t x643 = INT32_MIN;
static int64_t x645 = -1LL;
uint32_t t157 = 1780071028U;
int32_t x649 = INT32_MIN;
uint32_t x652 = 147097U;
volatile uint32_t t158 = 100999979U;
volatile int32_t t159 = 5787;
static uint64_t x658 = UINT64_MAX;
int32_t t165 = -108;
int16_t x703 = -1;
volatile int64_t t171 = 122606562776682123LL;
int64_t x714 = -1LL;
volatile int64_t x716 = INT64_MIN;
int64_t t173 = 2506883927LL;
int32_t t175 = -133742;
static int8_t x725 = 3;
int8_t x727 = INT8_MIN;
static uint16_t x734 = 7435U;
int16_t x740 = 41;
int8_t x742 = -2;
static int8_t x748 = INT8_MIN;
int8_t x749 = INT8_MAX;
int32_t x754 = INT32_MAX;
uint32_t x765 = 15794U;
int64_t t185 = 502988306402LL;
uint64_t x771 = UINT64_MAX;
int64_t x772 = -457361000621862LL;
volatile int32_t x773 = INT32_MAX;
static int8_t x785 = -1;
uint32_t t191 = 265938567U;
volatile int16_t x798 = INT16_MIN;
uint8_t x804 = UINT8_MAX;
int8_t x815 = -26;
static uint16_t x817 = 23U;
volatile int32_t x821 = INT32_MAX;
uint32_t x823 = 9786U;
static uint16_t x824 = 5532U;
volatile int32_t t198 = -137911;
volatile int16_t x825 = INT16_MIN;


void f0(void) {
    	uint16_t x1 = 4501U;
	static uint32_t x2 = 261398U;
	uint16_t x3 = 432U;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -14;

    t0 = ((x1==(x2|x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static uint32_t x6 = 106236U;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MIN;
	static int32_t t1 = -30686088;

    t1 = ((x5==(x6|x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = -12;

    t2 = ((x9==(x10|x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static volatile uint8_t x15 = UINT8_MAX;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 21;

    t3 = ((x13==(x14|x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 373;
	volatile int16_t x18 = INT16_MAX;
	static int8_t x19 = INT8_MIN;
	int32_t t4 = 9457;

    t4 = ((x17==(x18|x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	uint64_t x22 = 46LLU;
	static int8_t x23 = -49;
	static volatile int32_t t5 = -13335;

    t5 = ((x21==(x22|x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 0U;
	int64_t x26 = 3510876629LL;
	uint16_t x27 = 82U;
	uint64_t x28 = 2040478435269LLU;
	static uint64_t t6 = 699204LLU;

    t6 = ((x25==(x26|x27))/x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 71U;
	uint8_t x30 = 1U;
	uint32_t x31 = 1861U;
	static int16_t x32 = 81;
	static int32_t t7 = -161;

    t7 = ((x29==(x30|x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 20U;
	int8_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -8637375LL;

    t8 = ((x33==(x34|x35))/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = UINT8_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int64_t x39 = 738924713857LL;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = -42833;

    t9 = ((x37==(x38|x39))/x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 11;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = -1LL;
	static int64_t t10 = -1LL;

    t10 = ((x41==(x42|x43))/x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;
	static int64_t x48 = INT64_MAX;

    t11 = ((x45==(x46|x47))/x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = -3;
	uint64_t x51 = UINT64_MAX;
	volatile uint64_t x52 = 4803423533448988481LLU;
	volatile uint64_t t12 = 5650527293LLU;

    t12 = ((x49==(x50|x51))/x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x57 = 47U;
	int32_t x58 = 5477186;
	int64_t x59 = INT64_MIN;
	static volatile uint32_t x60 = 31859609U;
	static volatile uint32_t t13 = 2082262720U;

    t13 = ((x57==(x58|x59))/x60);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x62 = INT32_MIN;
	int64_t x63 = INT64_MAX;
	volatile int64_t x64 = -4256059943795241LL;
	static int64_t t14 = -409591105131LL;

    t14 = ((x61==(x62|x63))/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x67 = 690000545LLU;
	int16_t x68 = 14947;
	int32_t t15 = 0;

    t15 = ((x65==(x66|x67))/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint8_t x69 = 17U;
	int8_t x71 = INT8_MAX;
	static int16_t x72 = INT16_MIN;
	int32_t t16 = 1;

    t16 = ((x69==(x70|x71))/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MAX;
	int64_t x76 = -1LL;
	volatile int64_t t17 = -5LL;

    t17 = ((x73==(x74|x75))/x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x78 = 866961;
	int8_t x80 = INT8_MAX;

    t18 = ((x77==(x78|x79))/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	volatile int16_t x82 = 0;
	static int64_t x83 = 3149271708LL;
	int8_t x84 = -1;

    t19 = ((x81==(x82|x83))/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 78U;
	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MAX;
	int64_t x88 = -1LL;

    t20 = ((x85==(x86|x87))/x88);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	volatile int8_t x92 = INT8_MIN;
	int32_t t21 = 966231789;

    t21 = ((x89==(x90|x91))/x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	uint16_t x94 = 7U;
	static int8_t x95 = INT8_MIN;
	int64_t x96 = -36871628LL;
	int64_t t22 = 751258795520124LL;

    t22 = ((x93==(x94|x95))/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x98 = -1LL;
	uint32_t x100 = 38769U;
	volatile uint32_t t23 = 3U;

    t23 = ((x97==(x98|x99))/x100);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t24 = -133500365;

    t24 = ((x101==(x102|x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x105 = -409;
	static int8_t x106 = INT8_MIN;
	volatile uint64_t x107 = 35002950293LLU;
	int64_t t25 = -30LL;

    t25 = ((x105==(x106|x107))/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	uint8_t x110 = UINT8_MAX;
	int32_t x112 = -2082;

    t26 = ((x109==(x110|x111))/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x113 = -6029683290LL;
	static int16_t x114 = -1;
	uint16_t x116 = 5U;
	volatile int32_t t27 = -475;

    t27 = ((x113==(x114|x115))/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t28 = 520803727U;

    t28 = ((x117==(x118|x119))/x120);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -1969LL;
	static uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	volatile int16_t x128 = 7;
	volatile int32_t t29 = 20333;

    t29 = ((x125==(x126|x127))/x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = -1;
	static uint16_t x132 = 29U;
	volatile int32_t t30 = -20075;

    t30 = ((x129==(x130|x131))/x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x133 = UINT64_MAX;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 1295430U;
	volatile uint32_t t31 = 3610U;

    t31 = ((x133==(x134|x135))/x136);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = 3203889;
	int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t32 = 9;

    t32 = ((x137==(x138|x139))/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = 8;
	int64_t x142 = -5789992550LL;
	int32_t x143 = -3163;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t33 = -501540;

    t33 = ((x141==(x142|x143))/x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = -6141290LL;
	static int64_t x147 = -1LL;
	volatile int64_t x148 = -1LL;
	volatile int64_t t34 = 31945556559890LL;

    t34 = ((x145==(x146|x147))/x148);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x149 = -23;
	uint32_t x150 = 93498698U;
	volatile int16_t x151 = 1164;
	int8_t x152 = -4;
	int32_t t35 = -7421;

    t35 = ((x149==(x150|x151))/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = INT32_MIN;
	volatile uint64_t x154 = UINT64_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t36 = -2934740982901018LL;

    t36 = ((x153==(x154|x155))/x156);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = 0;
	uint64_t x158 = UINT64_MAX;
	static int16_t x159 = -3;

    t37 = ((x157==(x158|x159))/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = INT64_MAX;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;
	static volatile int32_t t38 = 52;

    t38 = ((x165==(x166|x167))/x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	int16_t x171 = INT16_MIN;
	static int64_t x172 = INT64_MIN;

    t39 = ((x169==(x170|x171))/x172);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x173 = 102U;
	volatile int32_t x174 = 411098;
	int8_t x175 = -2;
	int16_t x176 = -1;
	volatile int32_t t40 = 26;

    t40 = ((x173==(x174|x175))/x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x177 = 0U;
	volatile uint64_t x178 = 3LLU;
	int32_t x179 = -21;
	volatile uint32_t t41 = 13976U;

    t41 = ((x177==(x178|x179))/x180);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x181 = 33U;
	int64_t x182 = -1LL;
	volatile int64_t x183 = INT64_MIN;
	volatile int8_t x184 = -25;
	int32_t t42 = 1;

    t42 = ((x181==(x182|x183))/x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x185 = 15891U;
	int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MAX;
	int32_t x188 = -5795;
	int32_t t43 = -9361;

    t43 = ((x185==(x186|x187))/x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x189 = INT8_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = 3;
	static volatile int8_t x192 = INT8_MIN;
	int32_t t44 = 785942;

    t44 = ((x189==(x190|x191))/x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x193 = 1;
	static int32_t x196 = INT32_MIN;
	int32_t t45 = 2151896;

    t45 = ((x193==(x194|x195))/x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x197 = INT32_MAX;
	uint16_t x198 = 4615U;
	int16_t x200 = -3;
	int32_t t46 = -332;

    t46 = ((x197==(x198|x199))/x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x201 = 231U;
	int16_t x202 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t47 = -25775;

    t47 = ((x201==(x202|x203))/x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x205 = INT32_MAX;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = -1LL;
	int64_t t48 = 66932137699986164LL;

    t48 = ((x205==(x206|x207))/x208);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;
	uint64_t t49 = 1609587963498LLU;

    t49 = ((x209==(x210|x211))/x212);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = 189549LL;
	int16_t x214 = INT16_MAX;
	int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t50 = 27845016;

    t50 = ((x213==(x214|x215))/x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x219 = INT16_MAX;

    t51 = ((x217==(x218|x219))/x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x222 = UINT32_MAX;
	volatile int32_t x224 = INT32_MAX;
	int32_t t52 = -218;

    t52 = ((x221==(x222|x223))/x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = INT64_MIN;
	static int64_t x230 = -1LL;
	int64_t x231 = INT64_MAX;
	int32_t t53 = 5851;

    t53 = ((x229==(x230|x231))/x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x233 = 62510572804924LLU;
	uint64_t x235 = 19342348157366LLU;
	static volatile int64_t t54 = -3926796728885LL;

    t54 = ((x233==(x234|x235))/x236);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x237 = INT16_MAX;
	int16_t x238 = -1364;
	volatile uint64_t x240 = 609344081LLU;
	volatile uint64_t t55 = 1735336259797LLU;

    t55 = ((x237==(x238|x239))/x240);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	uint32_t x244 = 3612U;
	volatile uint32_t t56 = 96U;

    t56 = ((x241==(x242|x243))/x244);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x246 = INT32_MIN;
	static volatile uint64_t t57 = 1935049259LLU;

    t57 = ((x245==(x246|x247))/x248);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x251 = 3;
	uint8_t x252 = 65U;
	volatile int32_t t58 = -713091;

    t58 = ((x249==(x250|x251))/x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = 21U;
	int8_t x254 = -34;
	static int8_t x255 = INT8_MIN;
	int8_t x256 = INT8_MIN;

    t59 = ((x253==(x254|x255))/x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x258 = INT64_MIN;
	static int8_t x259 = 9;
	static volatile int8_t x260 = -1;
	int32_t t60 = -53021;

    t60 = ((x257==(x258|x259))/x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x262 = -5;
	uint32_t x263 = 79U;
	static int64_t x264 = 362LL;

    t61 = ((x261==(x262|x263))/x264);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x267 = INT64_MAX;
	uint16_t x268 = 796U;
	int32_t t62 = 0;

    t62 = ((x265==(x266|x267))/x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x269 = -1;
	uint64_t x270 = 754901670320LLU;
	int16_t x272 = -1;
	volatile int32_t t63 = 302915;

    t63 = ((x269==(x270|x271))/x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -1;
	int32_t x274 = INT32_MIN;
	static int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t64 = 1470577LL;

    t64 = ((x273==(x274|x275))/x276);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x278 = -1;
	int64_t t65 = 342715952985LL;

    t65 = ((x277==(x278|x279))/x280);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = INT8_MIN;
	uint8_t x283 = 1U;
	volatile uint8_t x284 = UINT8_MAX;
	int32_t t66 = 0;

    t66 = ((x281==(x282|x283))/x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x285 = -1;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t67 = -27372562;

    t67 = ((x285==(x286|x287))/x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x289 = 3U;
	volatile uint32_t x290 = 355763209U;
	static int64_t x291 = -1LL;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t68 = 701846;

    t68 = ((x289==(x290|x291))/x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x293 = -214803293217970454LL;
	int16_t x294 = 1174;
	int32_t x295 = INT32_MIN;
	int32_t x296 = -251224;
	int32_t t69 = 3120;

    t69 = ((x293==(x294|x295))/x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x297 = UINT16_MAX;
	volatile uint16_t x298 = 533U;
	volatile uint8_t x299 = 6U;
	static int16_t x300 = INT16_MIN;
	int32_t t70 = -5117;

    t70 = ((x297==(x298|x299))/x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = -479351830;
	int8_t x302 = INT8_MAX;
	static volatile uint8_t x303 = UINT8_MAX;
	static volatile int32_t t71 = 3280;

    t71 = ((x301==(x302|x303))/x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x305 = INT32_MAX;
	uint16_t x306 = UINT16_MAX;
	static int32_t t72 = 3;

    t72 = ((x305==(x306|x307))/x308);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x309 = -41448348;
	int64_t x310 = 9443649497564LL;
	uint16_t x311 = 7832U;
	uint16_t x312 = UINT16_MAX;
	int32_t t73 = 58101;

    t73 = ((x309==(x310|x311))/x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x313 = 1489586U;
	static uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 12541U;
	uint32_t t74 = 1394U;

    t74 = ((x313==(x314|x315))/x316);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x317 = 27U;
	int16_t x318 = -1;
	int16_t x320 = 1;

    t75 = ((x317==(x318|x319))/x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x321 = -1;
	volatile int64_t x322 = INT64_MAX;
	uint32_t x324 = UINT32_MAX;

    t76 = ((x321==(x322|x323))/x324);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MAX;
	static int16_t x327 = -30;
	static uint16_t x328 = 2U;
	int32_t t77 = 1408;

    t77 = ((x325==(x326|x327))/x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x329 = UINT64_MAX;
	volatile uint16_t x330 = 1289U;
	static volatile int32_t t78 = 22627;

    t78 = ((x329==(x330|x331))/x332);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MIN;
	int16_t x335 = -1;
	uint16_t x336 = 220U;
	volatile int32_t t79 = 2118085;

    t79 = ((x333==(x334|x335))/x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x337 = 150807654;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 65493722LLU;
	int64_t t80 = -6497541LL;

    t80 = ((x337==(x338|x339))/x340);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = 150U;
	int64_t x343 = INT64_MIN;
	volatile int64_t x344 = INT64_MIN;

    t81 = ((x341==(x342|x343))/x344);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = INT64_MIN;
	static volatile int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MIN;
	int32_t t82 = -14564;

    t82 = ((x345==(x346|x347))/x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x349 = -127477127LL;
	static uint64_t x350 = UINT64_MAX;
	volatile int8_t x352 = 15;

    t83 = ((x349==(x350|x351))/x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x353 = -1;
	uint64_t x354 = 4767175617LLU;
	int8_t x355 = 57;

    t84 = ((x353==(x354|x355))/x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x357 = INT32_MIN;
	uint64_t x358 = 39812582298LLU;
	int16_t x359 = -1;
	int64_t x360 = -1LL;
	volatile int64_t t85 = 485844525LL;

    t85 = ((x357==(x358|x359))/x360);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x361 = 0U;
	static volatile int16_t x362 = INT16_MIN;
	int32_t x363 = 78;
	int8_t x364 = INT8_MIN;
	static int32_t t86 = -1;

    t86 = ((x361==(x362|x363))/x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = UINT16_MAX;
	static volatile uint64_t x366 = 2985674286147457LLU;
	static uint8_t x367 = 14U;
	uint16_t x368 = 6026U;
	volatile int32_t t87 = 2919449;

    t87 = ((x365==(x366|x367))/x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	volatile int32_t t88 = 135450739;

    t88 = ((x369==(x370|x371))/x372);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x376 = INT8_MIN;
	static int32_t t89 = -7705;

    t89 = ((x373==(x374|x375))/x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x377 = 28U;
	int8_t x378 = 1;
	int16_t x380 = -1;
	volatile int32_t t90 = -238;

    t90 = ((x377==(x378|x379))/x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x381 = 85U;
	static int16_t x382 = 1741;
	int32_t x384 = 2256;

    t91 = ((x381==(x382|x383))/x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x386 = 81U;
	uint16_t x387 = 0U;

    t92 = ((x385==(x386|x387))/x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;

    t93 = ((x389==(x390|x391))/x392);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	static int8_t x395 = -1;
	volatile uint32_t t94 = 15U;

    t94 = ((x393==(x394|x395))/x396);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x397 = -1;
	volatile uint64_t x398 = 196LLU;
	int16_t x399 = -5132;
	volatile int16_t x400 = INT16_MIN;
	int32_t t95 = -1839;

    t95 = ((x397==(x398|x399))/x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x401 = -4;
	static uint64_t x402 = 2474235234717LLU;
	uint16_t x403 = UINT16_MAX;
	static uint16_t x404 = 185U;
	int32_t t96 = 100454415;

    t96 = ((x401==(x402|x403))/x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x405 = 13;
	uint64_t x407 = 3170LLU;
	uint64_t x408 = 145157615017LLU;
	volatile uint64_t t97 = 1752233635974LLU;

    t97 = ((x405==(x406|x407))/x408);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x409 = 20174U;
	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	static volatile int64_t t98 = -39LL;

    t98 = ((x409==(x410|x411))/x412);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x415 = INT16_MAX;
	static volatile int64_t x416 = INT64_MIN;
	volatile int64_t t99 = 2712LL;

    t99 = ((x413==(x414|x415))/x416);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x417 = INT32_MIN;
	static volatile int16_t x418 = -17;
	int64_t x419 = -1LL;
	uint8_t x420 = 1U;
	static int32_t t100 = -1906219;

    t100 = ((x417==(x418|x419))/x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = 3567;
	static uint16_t x422 = 1833U;
	int64_t x423 = INT64_MIN;
	volatile int32_t t101 = -4826;

    t101 = ((x421==(x422|x423))/x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x425 = 14688U;
	int32_t x426 = 29745481;
	int16_t x427 = -1;
	volatile uint8_t x428 = 95U;

    t102 = ((x425==(x426|x427))/x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = 12551;
	static uint32_t x431 = 108436U;

    t103 = ((x429==(x430|x431))/x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x433 = UINT64_MAX;
	static int64_t x434 = 79LL;
	static volatile int64_t x435 = INT64_MIN;
	uint16_t x436 = 10089U;
	volatile int32_t t104 = 1;

    t104 = ((x433==(x434|x435))/x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x438 = UINT8_MAX;
	volatile uint32_t x439 = 30U;
	int16_t x440 = INT16_MIN;
	int32_t t105 = 805900;

    t105 = ((x437==(x438|x439))/x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x441 = 1U;
	volatile uint16_t x442 = UINT16_MAX;
	volatile int64_t x443 = INT64_MIN;
	int8_t x444 = -1;
	volatile int32_t t106 = 241988;

    t106 = ((x441==(x442|x443))/x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x445 = 18U;
	static volatile int16_t x448 = INT16_MIN;
	volatile int32_t t107 = 61;

    t107 = ((x445==(x446|x447))/x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = -32068846453462LL;
	uint8_t x450 = 1U;
	int32_t x451 = INT32_MAX;
	int8_t x452 = INT8_MIN;
	volatile int32_t t108 = -457301154;

    t108 = ((x449==(x450|x451))/x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x453 = INT32_MIN;
	int32_t x454 = -1;
	int32_t x455 = -1;
	uint64_t x456 = 4084759700721LLU;
	uint64_t t109 = 67LLU;

    t109 = ((x453==(x454|x455))/x456);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	int16_t x458 = 380;
	volatile int8_t x459 = -1;
	int16_t x460 = 7;
	int32_t t110 = -121962;

    t110 = ((x457==(x458|x459))/x460);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MIN;
	uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 126U;

    t111 = ((x461==(x462|x463))/x464);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x467 = INT64_MAX;
	int32_t x468 = 329019;

    t112 = ((x465==(x466|x467))/x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x469 = -18749;
	volatile uint32_t t113 = 1U;

    t113 = ((x469==(x470|x471))/x472);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x473 = -63766448817LL;
	int64_t x474 = -1699895041768878LL;
	volatile int16_t x475 = -1;
	int64_t x476 = INT64_MIN;
	static volatile int64_t t114 = 3041689032751099999LL;

    t114 = ((x473==(x474|x475))/x476);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x478 = 10;
	int8_t x479 = INT8_MIN;
	uint8_t x480 = 11U;
	int32_t t115 = -61;

    t115 = ((x477==(x478|x479))/x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -79LL;
	int32_t x482 = INT32_MIN;
	static volatile uint32_t x483 = 920740610U;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint32_t t116 = 54U;

    t116 = ((x481==(x482|x483))/x484);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x486 = INT8_MIN;
	volatile int8_t x487 = INT8_MIN;
	static uint32_t x488 = UINT32_MAX;
	static uint32_t t117 = 3U;

    t117 = ((x485==(x486|x487))/x488);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x489 = INT16_MIN;
	int32_t x491 = INT32_MIN;
	volatile int8_t x492 = -1;
	int32_t t118 = -14515;

    t118 = ((x489==(x490|x491))/x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = 1;
	int8_t x494 = 7;
	static int32_t x495 = INT32_MIN;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t119 = -5717;

    t119 = ((x493==(x494|x495))/x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	static uint8_t x498 = 0U;
	volatile int16_t x499 = INT16_MIN;
	int8_t x500 = -1;
	volatile int32_t t120 = -1321;

    t120 = ((x497==(x498|x499))/x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x501 = -834;
	static uint8_t x503 = 2U;
	int8_t x504 = -1;
	int32_t t121 = -1;

    t121 = ((x501==(x502|x503))/x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x505 = -108;
	volatile int64_t x506 = 25LL;
	static uint32_t x507 = 1592U;
	int32_t x508 = INT32_MAX;

    t122 = ((x505==(x506|x507))/x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x511 = 2004929939U;
	static int16_t x512 = INT16_MAX;
	volatile int32_t t123 = -31;

    t123 = ((x509==(x510|x511))/x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = UINT64_MAX;
	uint32_t x514 = 491886U;
	uint64_t x515 = 959529150773LLU;
	volatile int64_t x516 = -203031440LL;

    t124 = ((x513==(x514|x515))/x516);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MIN;
	volatile int16_t x518 = INT16_MAX;
	static int32_t x519 = INT32_MIN;
	uint64_t x520 = 3789576260813062439LLU;
	volatile uint64_t t125 = 2133296848258LLU;

    t125 = ((x517==(x518|x519))/x520);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x523 = INT32_MAX;
	uint64_t x524 = 175572829616307761LLU;
	static volatile uint64_t t126 = 655484508LLU;

    t126 = ((x521==(x522|x523))/x524);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = -1;
	static int32_t x526 = INT32_MAX;
	static int16_t x528 = INT16_MIN;
	int32_t t127 = -514084949;

    t127 = ((x525==(x526|x527))/x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x529 = 21U;
	uint64_t x530 = 197694834621512LLU;
	uint32_t x531 = 244U;
	int32_t x532 = -1;
	int32_t t128 = 0;

    t128 = ((x529==(x530|x531))/x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x533 = 475007470U;
	int16_t x534 = -1;
	static int8_t x535 = INT8_MIN;
	volatile int64_t t129 = 131554007456457092LL;

    t129 = ((x533==(x534|x535))/x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x537 = 66105LLU;
	volatile int32_t x538 = INT32_MIN;
	int16_t x539 = INT16_MIN;
	volatile int32_t x540 = -1;

    t130 = ((x537==(x538|x539))/x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = 116230LLU;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -39207;

    t131 = ((x541==(x542|x543))/x544);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = INT64_MAX;
	static volatile int16_t x546 = INT16_MIN;
	static int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;
	int32_t t132 = 335;

    t132 = ((x545==(x546|x547))/x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x549 = 68;
	int16_t x550 = INT16_MIN;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	volatile int32_t t133 = -467275;

    t133 = ((x549==(x550|x551))/x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x554 = 124682U;
	static volatile uint64_t x556 = 56076313LLU;
	uint64_t t134 = 751688631LLU;

    t134 = ((x553==(x554|x555))/x556);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	int64_t x560 = -850100714LL;
	volatile int64_t t135 = 15859007615LL;

    t135 = ((x557==(x558|x559))/x560);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x561 = INT8_MIN;
	uint32_t x563 = 12830U;
	volatile int16_t x564 = INT16_MAX;
	int32_t t136 = -9;

    t136 = ((x561==(x562|x563))/x564);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x566 = 0;
	int32_t x568 = 417;

    t137 = ((x565==(x566|x567))/x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x569 = 2276U;
	uint64_t x571 = UINT64_MAX;
	volatile int16_t x572 = INT16_MIN;

    t138 = ((x569==(x570|x571))/x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x575 = 1683796760U;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t139 = -78;

    t139 = ((x573==(x574|x575))/x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x578 = INT64_MIN;
	int8_t x580 = -1;
	int32_t t140 = -2334;

    t140 = ((x577==(x578|x579))/x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = 144U;
	int16_t x584 = INT16_MIN;
	volatile int32_t t141 = 98;

    t141 = ((x581==(x582|x583))/x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x588 = 6059;
	volatile int32_t t142 = -266061507;

    t142 = ((x585==(x586|x587))/x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x589 = 4195U;
	volatile int16_t x590 = -1562;
	volatile int16_t x592 = -1;

    t143 = ((x589==(x590|x591))/x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x593 = UINT16_MAX;
	uint64_t x594 = 45LLU;
	int32_t t144 = -1154;

    t144 = ((x593==(x594|x595))/x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = -1;
	uint8_t x599 = 113U;
	volatile int32_t x600 = INT32_MIN;
	int32_t t145 = 27443492;

    t145 = ((x597==(x598|x599))/x600);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x602 = -1LL;
	static uint64_t x603 = 1536LLU;
	int64_t x604 = INT64_MAX;
	int64_t t146 = -41836810142366518LL;

    t146 = ((x601==(x602|x603))/x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile int8_t x607 = -1;
	int64_t x608 = -1LL;
	volatile int64_t t147 = -3569169988730959LL;

    t147 = ((x605==(x606|x607))/x608);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x611 = 1979;
	uint64_t x612 = 55LLU;
	volatile uint64_t t148 = 120LLU;

    t148 = ((x609==(x610|x611))/x612);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x613 = UINT16_MAX;
	uint32_t x614 = UINT32_MAX;
	static int16_t x615 = -12;
	static int8_t x616 = INT8_MIN;

    t149 = ((x613==(x614|x615))/x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = INT32_MIN;
	static volatile int16_t x618 = INT16_MAX;
	int8_t x619 = INT8_MIN;
	uint8_t x620 = UINT8_MAX;
	volatile int32_t t150 = 90497449;

    t150 = ((x617==(x618|x619))/x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x622 = 656U;
	volatile int64_t x623 = INT64_MAX;
	int32_t x624 = INT32_MAX;
	volatile int32_t t151 = -777;

    t151 = ((x621==(x622|x623))/x624);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x626 = UINT32_MAX;
	int16_t x627 = INT16_MIN;
	uint64_t x628 = UINT64_MAX;
	static volatile uint64_t t152 = 35159286491567851LLU;

    t152 = ((x625==(x626|x627))/x628);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x630 = INT8_MIN;
	uint64_t x631 = 5407580377803808871LLU;
	int32_t x632 = -16;
	static int32_t t153 = 130781;

    t153 = ((x629==(x630|x631))/x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x633 = 7803;
	static int8_t x634 = -1;
	uint32_t x635 = 4402385U;
	int64_t x636 = -1LL;
	volatile int64_t t154 = -4680LL;

    t154 = ((x633==(x634|x635))/x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x637 = 9;
	int64_t x638 = -64LL;
	uint32_t x639 = 843527175U;
	int16_t x640 = -1;
	volatile int32_t t155 = 104;

    t155 = ((x637==(x638|x639))/x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x641 = 8704U;
	int8_t x642 = -1;
	int32_t x644 = INT32_MIN;
	volatile int32_t t156 = -189588;

    t156 = ((x641==(x642|x643))/x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MIN;
	static uint32_t x648 = UINT32_MAX;

    t157 = ((x645==(x646|x647))/x648);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x650 = -22;
	volatile uint32_t x651 = 37U;

    t158 = ((x649==(x650|x651))/x652);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = -42579151543LL;
	int8_t x654 = INT8_MIN;
	static int64_t x655 = INT64_MIN;
	static int32_t x656 = 23860;

    t159 = ((x653==(x654|x655))/x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x659 = INT16_MIN;
	int8_t x660 = 12;
	static int32_t t160 = -2;

    t160 = ((x657==(x658|x659))/x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x661 = 7608U;
	uint64_t x662 = 159675085961LLU;
	int64_t x663 = INT64_MIN;
	uint16_t x664 = 6699U;
	static int32_t t161 = 95;

    t161 = ((x661==(x662|x663))/x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = -1LL;
	uint64_t x666 = UINT64_MAX;
	int32_t x667 = INT32_MIN;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t162 = -3355208;

    t162 = ((x665==(x666|x667))/x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x669 = INT32_MIN;
	static int16_t x670 = -1;
	volatile uint32_t x671 = 1U;
	volatile int64_t x672 = -1LL;
	static volatile int64_t t163 = -7196806249853LL;

    t163 = ((x669==(x670|x671))/x672);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x673 = INT32_MAX;
	static uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MIN;
	volatile int8_t x676 = INT8_MAX;
	int32_t t164 = -756;

    t164 = ((x673==(x674|x675))/x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x677 = 17U;
	uint32_t x678 = 24952420U;
	int32_t x679 = INT32_MAX;
	int16_t x680 = -552;

    t165 = ((x677==(x678|x679))/x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x681 = UINT16_MAX;
	int16_t x682 = -1;
	int8_t x683 = 0;
	volatile uint16_t x684 = UINT16_MAX;
	int32_t t166 = -1370215;

    t166 = ((x681==(x682|x683))/x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MIN;
	static uint64_t x691 = UINT64_MAX;
	static int64_t x692 = INT64_MAX;
	volatile int64_t t167 = -85005246LL;

    t167 = ((x689==(x690|x691))/x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x693 = 4131304;
	int8_t x694 = -43;
	static volatile int8_t x695 = INT8_MIN;
	int64_t x696 = -13088330053776366LL;
	volatile int64_t t168 = 536120459LL;

    t168 = ((x693==(x694|x695))/x696);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x697 = 2436U;
	static int16_t x698 = -1;
	static int32_t x699 = 138128;
	volatile int64_t x700 = INT64_MAX;
	volatile int64_t t169 = 2LL;

    t169 = ((x697==(x698|x699))/x700);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x701 = INT16_MAX;
	int16_t x702 = -1;
	static volatile int32_t x704 = -390575;
	volatile int32_t t170 = -1;

    t170 = ((x701==(x702|x703))/x704);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x705 = 1U;
	int32_t x706 = 390871;
	static volatile int16_t x707 = INT16_MAX;
	static int64_t x708 = INT64_MIN;

    t171 = ((x705==(x706|x707))/x708);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x709 = UINT64_MAX;
	static int32_t x710 = -1;
	int64_t x711 = 1496058004983726926LL;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t172 = 16083;

    t172 = ((x709==(x710|x711))/x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x713 = -21845236;
	uint8_t x715 = 5U;

    t173 = ((x713==(x714|x715))/x716);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = INT16_MIN;
	static int32_t x718 = 0;
	static uint32_t x719 = 244U;
	int8_t x720 = INT8_MIN;
	int32_t t174 = 93;

    t174 = ((x717==(x718|x719))/x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x721 = INT16_MIN;
	int64_t x722 = -1LL;
	volatile int16_t x723 = INT16_MIN;
	volatile int32_t x724 = INT32_MAX;

    t175 = ((x721==(x722|x723))/x724);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x726 = -1;
	int8_t x728 = INT8_MIN;
	volatile int32_t t176 = 310303;

    t176 = ((x725==(x726|x727))/x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = 40820749LLU;
	volatile uint64_t t177 = 6685705434LLU;

    t177 = ((x733==(x734|x735))/x736);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x737 = 13U;
	int8_t x738 = -1;
	static volatile uint64_t x739 = 1096347151LLU;
	int32_t t178 = 57041;

    t178 = ((x737==(x738|x739))/x740);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = 5958;
	int16_t x743 = -562;
	static volatile int16_t x744 = -1;
	int32_t t179 = 778417076;

    t179 = ((x741==(x742|x743))/x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x745 = -1LL;
	int64_t x746 = -1LL;
	uint32_t x747 = 21045299U;
	volatile int32_t t180 = -1;

    t180 = ((x745==(x746|x747))/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x750 = -1;
	volatile uint8_t x751 = 3U;
	static int8_t x752 = INT8_MIN;
	int32_t t181 = 27749;

    t181 = ((x749==(x750|x751))/x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x753 = 59U;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t182 = 231817;

    t182 = ((x753==(x754|x755))/x756);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	uint8_t x758 = UINT8_MAX;
	uint32_t x759 = 29737945U;
	int32_t x760 = -1;
	volatile int32_t t183 = 1378126;

    t183 = ((x757==(x758|x759))/x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x761 = 0;
	int32_t x762 = INT32_MIN;
	int16_t x763 = INT16_MIN;
	int32_t x764 = -627;
	static volatile int32_t t184 = 7945;

    t184 = ((x761==(x762|x763))/x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x766 = INT64_MIN;
	int64_t x767 = INT64_MAX;
	int64_t x768 = INT64_MIN;

    t185 = ((x765==(x766|x767))/x768);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x769 = INT8_MIN;
	int64_t x770 = -1LL;
	int64_t t186 = 489LL;

    t186 = ((x769==(x770|x771))/x772);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x774 = -5;
	int64_t x775 = -1LL;
	int16_t x776 = -1;
	volatile int32_t t187 = 2048;

    t187 = ((x773==(x774|x775))/x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x777 = 255U;
	int16_t x778 = INT16_MIN;
	static int8_t x779 = -1;
	int8_t x780 = INT8_MAX;
	int32_t t188 = -4877;

    t188 = ((x777==(x778|x779))/x780);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = INT16_MAX;
	static uint64_t x782 = 40749629019LLU;
	uint64_t x783 = 29617545416969LLU;
	uint64_t x784 = UINT64_MAX;
	uint64_t t189 = 488814991580LLU;

    t189 = ((x781==(x782|x783))/x784);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x786 = INT64_MIN;
	int32_t x787 = INT32_MIN;
	volatile int64_t x788 = INT64_MAX;
	volatile int64_t t190 = -78262LL;

    t190 = ((x785==(x786|x787))/x788);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = INT32_MIN;
	static uint32_t x790 = UINT32_MAX;
	int32_t x791 = -1;
	uint32_t x792 = UINT32_MAX;

    t191 = ((x789==(x790|x791))/x792);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x793 = 2686LLU;
	static uint64_t x794 = 70570825021818827LLU;
	static int8_t x795 = 56;
	int32_t x796 = INT32_MAX;
	int32_t t192 = -85261659;

    t192 = ((x793==(x794|x795))/x796);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -3782464517699011LL;
	uint64_t x799 = UINT64_MAX;
	int8_t x800 = INT8_MAX;
	int32_t t193 = 110261761;

    t193 = ((x797==(x798|x799))/x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x801 = INT8_MIN;
	int8_t x802 = INT8_MIN;
	uint64_t x803 = 13215402LLU;
	int32_t t194 = 999;

    t194 = ((x801==(x802|x803))/x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = INT64_MAX;
	int64_t x810 = -50LL;
	static volatile int64_t x811 = INT64_MIN;
	static uint16_t x812 = 1642U;
	volatile int32_t t195 = -100;

    t195 = ((x809==(x810|x811))/x812);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x813 = -1;
	static int8_t x814 = INT8_MIN;
	int32_t x816 = INT32_MIN;
	int32_t t196 = 21;

    t196 = ((x813==(x814|x815))/x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x818 = INT16_MAX;
	int64_t x819 = -47986384155LL;
	volatile uint16_t x820 = 17377U;
	volatile int32_t t197 = -32821;

    t197 = ((x817==(x818|x819))/x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x822 = -1;

    t198 = ((x821==(x822|x823))/x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x826 = 1059167647U;
	int64_t x827 = INT64_MIN;
	static int16_t x828 = INT16_MIN;
	volatile int32_t t199 = -935439;

    t199 = ((x825==(x826|x827))/x828);

    if (t199 != 0) { NG(); } else { ; }
	
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

