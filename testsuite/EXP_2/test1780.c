
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

int64_t x16 = 3943357476LL;
int16_t x20 = INT16_MIN;
uint16_t x25 = 21156U;
static int64_t x30 = INT64_MIN;
volatile uint32_t x37 = UINT32_MAX;
volatile uint32_t x45 = 25U;
int16_t x46 = -1;
int8_t x61 = INT8_MIN;
static uint8_t x63 = 18U;
volatile uint16_t x64 = 312U;
static int32_t t12 = 0;
volatile int64_t t13 = -137488383042821LL;
uint16_t x71 = 0U;
uint16_t x77 = 29373U;
volatile uint32_t x83 = 23892U;
uint8_t x86 = 1U;
uint8_t x105 = 3U;
int8_t x107 = -7;
static volatile int16_t x110 = INT16_MIN;
static volatile uint64_t t20 = 2999381113501LLU;
static volatile int64_t x115 = INT64_MAX;
int16_t x126 = -10966;
volatile int64_t x127 = INT64_MIN;
volatile uint64_t t23 = 374344634850LLU;
int16_t x129 = INT16_MIN;
static volatile int8_t x135 = 19;
uint64_t t25 = 1748072190044293661LLU;
static int64_t x138 = -87646914LL;
static int8_t x140 = -12;
volatile int32_t x145 = INT32_MAX;
uint32_t x146 = 1U;
uint64_t x147 = 2471LLU;
static volatile uint8_t x148 = 38U;
uint16_t x153 = 84U;
int64_t x158 = INT64_MIN;
static int32_t x165 = INT32_MIN;
int8_t x169 = INT8_MIN;
uint16_t x170 = UINT16_MAX;
volatile int32_t t33 = 763;
int32_t x196 = -3269;
uint16_t x205 = 30448U;
int16_t x208 = INT16_MIN;
uint32_t x210 = 3477158U;
static volatile int8_t x212 = INT8_MAX;
uint64_t x213 = 15LLU;
int8_t x220 = INT8_MIN;
uint64_t x221 = UINT64_MAX;
uint32_t x222 = 1764U;
static uint32_t x224 = 217U;
volatile int16_t x229 = INT16_MAX;
volatile int32_t t46 = 483;
static volatile uint8_t x236 = UINT8_MAX;
int8_t x238 = -1;
static int16_t x239 = -2850;
volatile uint32_t t48 = 2172562U;
uint16_t x247 = UINT16_MAX;
int32_t x248 = -216144161;
int8_t x253 = INT8_MIN;
static int32_t x269 = -1;
uint64_t x271 = UINT64_MAX;
int32_t t55 = -2;
int16_t x274 = INT16_MIN;
int16_t x276 = INT16_MIN;
int32_t t56 = -256278;
uint32_t x281 = 57917U;
int16_t x282 = 10124;
int8_t x293 = 5;
static uint64_t t61 = 172LLU;
static uint16_t x314 = 6417U;
volatile int32_t t64 = 3847;
int32_t x318 = -50673;
volatile uint16_t x332 = UINT16_MAX;
uint64_t t68 = 52624317704622863LLU;
volatile int8_t x347 = 9;
int16_t x349 = INT16_MAX;
volatile int32_t t74 = 16586;
int16_t x368 = 11737;
static uint8_t x370 = UINT8_MAX;
volatile int16_t x372 = -1;
static int32_t x377 = -1882883;
int32_t x385 = -646951858;
static int32_t x386 = -1;
uint32_t x388 = 54U;
int32_t t79 = -1231633;
int8_t x398 = INT8_MIN;
int16_t x400 = INT16_MIN;
int32_t t80 = -12;
int64_t x410 = INT64_MAX;
static uint16_t x417 = UINT16_MAX;
int16_t x420 = -17;
int16_t x422 = -8686;
uint32_t x426 = 82739U;
int64_t x428 = -33LL;
uint32_t x432 = UINT32_MAX;
static int32_t x435 = -121518;
uint64_t x436 = 14781443LLU;
int64_t x438 = -1LL;
int32_t t90 = 449;
uint16_t x454 = 1558U;
static int32_t x459 = 0;
int32_t x460 = INT32_MIN;
uint8_t x466 = 31U;
int8_t x470 = INT8_MAX;
uint8_t x476 = 0U;
static int16_t x477 = INT16_MIN;
int32_t t98 = -425748364;
uint32_t x481 = 55435644U;
static int32_t x484 = -7;
int16_t x487 = INT16_MIN;
int8_t x491 = -1;
int64_t x493 = INT64_MAX;
int8_t x501 = INT8_MIN;
uint64_t x505 = UINT64_MAX;
int32_t x519 = INT32_MIN;
static int64_t x525 = 0LL;
static volatile int64_t x527 = INT64_MIN;
static int8_t x530 = INT8_MIN;
uint64_t x532 = 40056549581918LLU;
int32_t t113 = -19041;
volatile int64_t t114 = -275568478LL;
uint64_t t115 = 91762215589LLU;
volatile int8_t x554 = 0;
int32_t t116 = -41;
static int64_t x560 = -1LL;
int64_t x562 = -1LL;
static int8_t x571 = INT8_MIN;
volatile uint64_t t120 = 712LLU;
uint64_t x578 = 274584135844585272LLU;
static int64_t x580 = 1043353LL;
int8_t x581 = INT8_MIN;
int16_t x582 = INT16_MIN;
uint32_t x584 = UINT32_MAX;
volatile uint32_t t123 = 1U;
volatile uint32_t x586 = 851782U;
int32_t x598 = -27855677;
static int32_t x613 = 39103964;
int16_t x614 = INT16_MIN;
int8_t x616 = -1;
uint8_t x618 = UINT8_MAX;
uint64_t x623 = 3475267148022061LLU;
int64_t x625 = -1LL;
static uint8_t x627 = UINT8_MAX;
volatile int16_t x636 = INT16_MIN;
int32_t t135 = 1613;
uint32_t x655 = 5U;
uint32_t x662 = UINT32_MAX;
int8_t x663 = INT8_MIN;
static volatile uint16_t x665 = 3U;
uint8_t x668 = 31U;
int8_t x689 = INT8_MAX;
int32_t x699 = -85;
uint64_t x709 = UINT64_MAX;
volatile int32_t t152 = 10039;
int8_t x722 = 0;
int16_t x725 = INT16_MIN;
static int32_t x727 = INT32_MAX;
volatile int8_t x728 = INT8_MIN;
uint64_t x741 = 21985849657039LLU;
int64_t x743 = INT64_MIN;
uint32_t x764 = UINT32_MAX;
uint16_t x765 = 1U;
int32_t t161 = 6;
static uint64_t x773 = 1880574025494244899LLU;
static int64_t x774 = 25311LL;
static uint64_t t163 = 599LLU;
uint64_t x778 = 3498390613180LLU;
int64_t x792 = 77806088108323LL;
static int64_t x795 = -1LL;
uint8_t x796 = 46U;
static uint32_t x800 = 11674U;
int16_t x820 = -1;
static int32_t t173 = 21661;
int8_t x829 = INT8_MIN;
static volatile uint32_t t176 = 1979U;
volatile uint64_t x838 = UINT64_MAX;
int8_t x842 = INT8_MIN;
int8_t x846 = INT8_MIN;
uint64_t x851 = UINT64_MAX;
static int32_t x857 = INT32_MAX;
volatile int64_t x859 = -884LL;
uint32_t x864 = 258382U;
int32_t x868 = INT32_MIN;
volatile int64_t t184 = 254109666935528LL;
int16_t x872 = -1;
int32_t t185 = -16;
int16_t x873 = INT16_MIN;
int32_t x875 = 1409;
int32_t x878 = INT32_MIN;
volatile int32_t x880 = 2079054;
int16_t x881 = INT16_MAX;
uint64_t x886 = UINT64_MAX;
volatile uint32_t t190 = 0U;
static uint32_t x893 = UINT32_MAX;
static uint32_t t191 = 13458U;
uint8_t x899 = 31U;
static volatile int8_t x902 = 53;
static uint16_t x904 = UINT16_MAX;
volatile int32_t t193 = -1826320;
volatile uint8_t x908 = 4U;
int32_t x911 = 33517101;
static int8_t x912 = INT8_MIN;
volatile int64_t x914 = 33933191705772LL;
volatile int16_t x915 = INT16_MIN;
int8_t x916 = INT8_MIN;
uint8_t x923 = 24U;
uint16_t x927 = 7270U;
static int16_t x928 = 3;
static int32_t x940 = INT32_MAX;


void f0(void) {
    	volatile int8_t x1 = INT8_MAX;
	static uint16_t x2 = 3U;
	static uint8_t x3 = 45U;
	uint32_t x4 = 117828U;
	volatile uint32_t t0 = 7551843U;

    t0 = ((x1-(x2<=x3))-x4);

    if (t0 != 4294849594U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = INT32_MIN;
	volatile int8_t x10 = INT8_MAX;
	static int8_t x11 = INT8_MIN;
	volatile uint64_t x12 = 3942656539334692LLU;
	volatile uint64_t t1 = 22587074LLU;

    t1 = ((x9-(x10<=x11))-x12);

    if (t1 != 18442801415022733276LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x13 = 249U;
	static uint16_t x14 = 15U;
	uint8_t x15 = UINT8_MAX;
	volatile int64_t t2 = 61LL;

    t2 = ((x13-(x14<=x15))-x16);

    if (t2 != -3943357228LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 2LL;
	int16_t x18 = -940;
	int64_t x19 = 226503226LL;
	int64_t t3 = 547434641LL;

    t3 = ((x17-(x18<=x19))-x20);

    if (t3 != 32769LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	int64_t x22 = -102774LL;
	static int8_t x23 = -1;
	uint8_t x24 = 3U;
	int64_t t4 = -250051138983330LL;

    t4 = ((x21-(x22<=x23))-x24);

    if (t4 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = 1U;
	int32_t x27 = 231632206;
	int64_t x28 = INT64_MAX;
	int64_t t5 = 3523LL;

    t5 = ((x25-(x26<=x27))-x28);

    if (t5 != -9223372036854754652LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x29 = 18U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = -5;
	volatile int32_t t6 = -197180597;

    t6 = ((x29-(x30<=x31))-x32);

    if (t6 != 22) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x33 = 1U;
	int64_t x34 = INT64_MAX;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -1;
	static int32_t t7 = 576767;

    t7 = ((x33-(x34<=x35))-x36);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = 24LL;
	volatile uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 1689536462361859033LLU;
	volatile uint64_t t8 = 3LLU;

    t8 = ((x37-(x38<=x39))-x40);

    if (t8 != 16757207615642659877LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -61;
	volatile int8_t x42 = -1;
	int64_t x43 = 51527254590LL;
	volatile int8_t x44 = -1;
	static int32_t t9 = -10930;

    t9 = ((x41-(x42<=x43))-x44);

    if (t9 != -61) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x47 = 0U;
	static int8_t x48 = INT8_MIN;
	static volatile uint32_t t10 = 1508300804U;

    t10 = ((x45-(x46<=x47))-x48);

    if (t10 != 152U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = 1228563338U;
	volatile int8_t x58 = -1;
	int32_t x59 = 688545;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t11 = 10776034LLU;

    t11 = ((x57-(x58<=x59))-x60);

    if (t11 != 1228563338LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x62 = 0;

    t12 = ((x61-(x62<=x63))-x64);

    if (t12 != -441) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = 1024067LL;
	static uint16_t x66 = UINT16_MAX;
	volatile uint8_t x67 = UINT8_MAX;
	volatile int8_t x68 = -1;

    t13 = ((x65-(x66<=x67))-x68);

    if (t13 != 1024068LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	int32_t x72 = -3058;
	volatile int64_t t14 = -9586070300LL;

    t14 = ((x69-(x70<=x71))-x72);

    if (t14 != -9223372036854772750LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;
	int64_t x80 = -1LL;
	int64_t t15 = -58064751993LL;

    t15 = ((x77-(x78<=x79))-x80);

    if (t15 != 29373LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = 60245044741186237LL;
	static volatile uint8_t x82 = UINT8_MAX;
	int16_t x84 = -6;
	int64_t t16 = -52888760639975LL;

    t16 = ((x81-(x82<=x83))-x84);

    if (t16 != 60245044741186242LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x85 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	static volatile int64_t x88 = INT64_MIN;
	int64_t t17 = -181529901LL;

    t17 = ((x85-(x86<=x87))-x88);

    if (t17 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = -1;
	int64_t x94 = 5063627778LL;
	uint8_t x95 = UINT8_MAX;
	static int8_t x96 = -1;
	static int32_t t18 = -552;

    t18 = ((x93-(x94<=x95))-x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x106 = INT32_MAX;
	int8_t x108 = -12;
	volatile int32_t t19 = -29293802;

    t19 = ((x105-(x106<=x107))-x108);

    if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x109 = UINT64_MAX;
	uint32_t x111 = UINT32_MAX;
	static volatile int8_t x112 = 0;

    t20 = ((x109-(x110<=x111))-x112);

    if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x113 = UINT8_MAX;
	volatile uint8_t x114 = 2U;
	int32_t x116 = -1;
	int32_t t21 = -3949893;

    t21 = ((x113-(x114<=x115))-x116);

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x121 = 0LL;
	static uint8_t x122 = 0U;
	volatile int16_t x123 = INT16_MIN;
	volatile uint16_t x124 = UINT16_MAX;
	volatile int64_t t22 = -14845999115915LL;

    t22 = ((x121-(x122<=x123))-x124);

    if (t22 != -65535LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x125 = 79267455135504176LLU;
	uint16_t x128 = 224U;

    t23 = ((x125-(x126<=x127))-x128);

    if (t23 != 79267455135503952LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x130 = 1;
	int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t24 = -2665258295LL;

    t24 = ((x129-(x130<=x131))-x132);

    if (t24 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x133 = 3866510880297067158LLU;
	volatile int8_t x134 = -8;
	volatile int16_t x136 = 2;

    t25 = ((x133-(x134<=x135))-x136);

    if (t25 != 3866510880297067155LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = -1;
	uint64_t x139 = 721981758108159268LLU;
	volatile int32_t t26 = 2;

    t26 = ((x137-(x138<=x139))-x140);

    if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = -1;
	int8_t x142 = 26;
	int16_t x143 = -22;
	static uint32_t x144 = 13681U;
	uint32_t t27 = 39320587U;

    t27 = ((x141-(x142<=x143))-x144);

    if (t27 != 4294953614U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t t28 = -775;

    t28 = ((x145-(x146<=x147))-x148);

    if (t28 != 2147483608) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x154 = 4U;
	static uint32_t x155 = 7889U;
	uint16_t x156 = UINT16_MAX;
	int32_t t29 = -657199;

    t29 = ((x153-(x154<=x155))-x156);

    if (t29 != -65452) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x157 = 184882LLU;
	volatile uint32_t x159 = 1264U;
	int16_t x160 = 9;
	uint64_t t30 = 1770LLU;

    t30 = ((x157-(x158<=x159))-x160);

    if (t30 != 184872LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x166 = UINT64_MAX;
	int32_t x167 = -749070430;
	int64_t x168 = INT64_MIN;
	int64_t t31 = 15104643854825149LL;

    t31 = ((x165-(x166<=x167))-x168);

    if (t31 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	int32_t t32 = -3;

    t32 = ((x169-(x170<=x171))-x172);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x173 = INT32_MIN;
	int16_t x174 = -1;
	int64_t x175 = INT64_MIN;
	volatile int8_t x176 = -3;

    t33 = ((x173-(x174<=x175))-x176);

    if (t33 != -2147483645) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	static int32_t x178 = INT32_MIN;
	static uint64_t x179 = 55565511041692974LLU;
	volatile int64_t x180 = -1LL;
	uint64_t t34 = 413565776667293235LLU;

    t34 = ((x177-(x178<=x179))-x180);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x181 = 199942449U;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = 4U;
	int16_t x184 = -706;
	volatile uint32_t t35 = 1451U;

    t35 = ((x181-(x182<=x183))-x184);

    if (t35 != 199943154U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x189 = -1;
	int32_t x190 = -105280469;
	int8_t x191 = INT8_MIN;
	static int8_t x192 = INT8_MAX;
	static volatile int32_t t36 = 5;

    t36 = ((x189-(x190<=x191))-x192);

    if (t36 != -129) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x193 = -364;
	volatile int64_t x194 = -200LL;
	static int32_t x195 = -40;
	static int32_t t37 = -873322439;

    t37 = ((x193-(x194<=x195))-x196);

    if (t37 != 2904) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x197 = -1;
	int16_t x198 = 6;
	static int64_t x199 = 94431771687LL;
	static uint32_t x200 = 0U;
	static uint32_t t38 = 1379035960U;

    t38 = ((x197-(x198<=x199))-x200);

    if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x201 = 95233809767LLU;
	uint16_t x202 = 18U;
	static uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t39 = 46LLU;

    t39 = ((x201-(x202<=x203))-x204);

    if (t39 != 95233842534LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x206 = 5U;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t t40 = 332;

    t40 = ((x205-(x206<=x207))-x208);

    if (t40 != 63215) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x209 = -1;
	int64_t x211 = INT64_MIN;
	volatile int32_t t41 = 10;

    t41 = ((x209-(x210<=x211))-x212);

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x214 = 4LL;
	int16_t x215 = 4;
	uint32_t x216 = 29769U;
	volatile uint64_t t42 = 381393075380743LLU;

    t42 = ((x213-(x214<=x215))-x216);

    if (t42 != 18446744073709521861LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x217 = -1;
	volatile uint64_t x218 = 294604444986410362LLU;
	volatile int8_t x219 = 8;
	static int32_t t43 = 16;

    t43 = ((x217-(x218<=x219))-x220);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x223 = -7979108;
	volatile uint64_t t44 = 341625LLU;

    t44 = ((x221-(x222<=x223))-x224);

    if (t44 != 18446744073709551397LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x225 = 6U;
	uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = INT32_MAX;
	int64_t x228 = -1LL;
	int64_t t45 = -254LL;

    t45 = ((x225-(x226<=x227))-x228);

    if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x230 = -56996338;
	uint32_t x231 = 54494966U;
	int16_t x232 = INT16_MAX;

    t46 = ((x229-(x230<=x231))-x232);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x233 = -26;
	static volatile uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MAX;
	volatile int32_t t47 = 1;

    t47 = ((x233-(x234<=x235))-x236);

    if (t47 != -282) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x237 = 7U;
	uint16_t x240 = 9785U;

    t48 = ((x237-(x238<=x239))-x240);

    if (t48 != 4294957518U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x241 = INT16_MAX;
	uint64_t x242 = 11LLU;
	volatile int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	volatile int32_t t49 = -180807;

    t49 = ((x241-(x242<=x243))-x244);

    if (t49 != 32894) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x245 = INT8_MIN;
	uint8_t x246 = 9U;
	volatile int32_t t50 = 2276;

    t50 = ((x245-(x246<=x247))-x248);

    if (t50 != 216144032) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	static int32_t x251 = -1;
	uint8_t x252 = 6U;
	volatile int32_t t51 = -1;

    t51 = ((x249-(x250<=x251))-x252);

    if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x254 = 1806U;
	static int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t52 = 3LL;

    t52 = ((x253-(x254<=x255))-x256);

    if (t52 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = -1;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int16_t x260 = -1;
	int32_t t53 = -1;

    t53 = ((x257-(x258<=x259))-x260);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x261 = -54516LL;
	int8_t x262 = -1;
	volatile int16_t x263 = INT16_MAX;
	int8_t x264 = -1;
	int64_t t54 = -57667466553272LL;

    t54 = ((x261-(x262<=x263))-x264);

    if (t54 != -54516LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x270 = 8U;
	static uint16_t x272 = 230U;

    t55 = ((x269-(x270<=x271))-x272);

    if (t55 != -232) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x273 = -1;
	uint64_t x275 = 5LLU;

    t56 = ((x273-(x274<=x275))-x276);

    if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x277 = 23U;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	static uint64_t x280 = UINT64_MAX;
	volatile uint64_t t57 = 1052153278625LLU;

    t57 = ((x277-(x278<=x279))-x280);

    if (t57 != 23LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x283 = 944477359U;
	static int32_t x284 = 8034802;
	uint32_t t58 = 0U;

    t58 = ((x281-(x282<=x283))-x284);

    if (t58 != 4286990410U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = UINT64_MAX;
	volatile int64_t x286 = -116LL;
	int64_t x287 = 13682069979LL;
	int16_t x288 = INT16_MIN;
	static volatile uint64_t t59 = 2350937854487752LLU;

    t59 = ((x285-(x286<=x287))-x288);

    if (t59 != 32766LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x294 = 110462U;
	volatile uint16_t x295 = 16U;
	uint8_t x296 = 9U;
	volatile int32_t t60 = -1;

    t60 = ((x293-(x294<=x295))-x296);

    if (t60 != -4) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x297 = -1;
	uint64_t x298 = UINT64_MAX;
	static uint32_t x299 = 7517300U;
	uint64_t x300 = 10398884276070766LLU;

    t61 = ((x297-(x298<=x299))-x300);

    if (t61 != 18436345189433480849LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	static int8_t x303 = 1;
	volatile int16_t x304 = 39;
	volatile int32_t t62 = -5732;

    t62 = ((x301-(x302<=x303))-x304);

    if (t62 != 2147483607) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x309 = UINT8_MAX;
	static int8_t x310 = -1;
	int8_t x311 = INT8_MAX;
	int8_t x312 = 6;
	volatile int32_t t63 = 339014;

    t63 = ((x309-(x310<=x311))-x312);

    if (t63 != 248) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MAX;

    t64 = ((x313-(x314<=x315))-x316);

    if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x317 = -1;
	volatile uint32_t x319 = 48885U;
	volatile uint8_t x320 = 3U;
	static volatile int32_t t65 = 248977778;

    t65 = ((x317-(x318<=x319))-x320);

    if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x325 = UINT32_MAX;
	static volatile int8_t x326 = 3;
	int64_t x327 = INT64_MAX;
	uint32_t x328 = UINT32_MAX;
	uint32_t t66 = UINT32_MAX;

    t66 = ((x325-(x326<=x327))-x328);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x329 = -11;
	uint64_t x330 = 1333LLU;
	static int8_t x331 = INT8_MIN;
	static volatile int32_t t67 = 0;

    t67 = ((x329-(x330<=x331))-x332);

    if (t67 != -65547) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x333 = UINT8_MAX;
	static uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = 51;
	uint64_t x336 = UINT64_MAX;

    t68 = ((x333-(x334<=x335))-x336);

    if (t68 != 256LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x337 = INT16_MAX;
	uint64_t x338 = 293LLU;
	static int32_t x339 = -893;
	static uint8_t x340 = 4U;
	int32_t t69 = -261852;

    t69 = ((x337-(x338<=x339))-x340);

    if (t69 != 32762) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x345 = 24U;
	static uint16_t x346 = 0U;
	uint8_t x348 = 76U;
	volatile int32_t t70 = -15;

    t70 = ((x345-(x346<=x347))-x348);

    if (t70 != -53) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x350 = -66395;
	int8_t x351 = INT8_MAX;
	int16_t x352 = INT16_MIN;
	static int32_t t71 = 70842;

    t71 = ((x349-(x350<=x351))-x352);

    if (t71 != 65534) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x353 = 5484123U;
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint16_t x356 = 3122U;
	uint32_t t72 = 7866446U;

    t72 = ((x353-(x354<=x355))-x356);

    if (t72 != 5481001U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x357 = -1LL;
	uint8_t x358 = 0U;
	uint64_t x359 = 2726192246286040771LLU;
	uint8_t x360 = UINT8_MAX;
	static int64_t t73 = 0LL;

    t73 = ((x357-(x358<=x359))-x360);

    if (t73 != -257LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x361 = 1U;
	static int32_t x362 = -1;
	static int32_t x363 = -1;
	int32_t x364 = -1;

    t74 = ((x361-(x362<=x363))-x364);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x365 = 308067178LL;
	int16_t x366 = 2422;
	int16_t x367 = -386;
	volatile int64_t t75 = -1835912LL;

    t75 = ((x365-(x366<=x367))-x368);

    if (t75 != 308055441LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x369 = -1LL;
	static volatile uint64_t x371 = 30170651LLU;
	volatile int64_t t76 = -7LL;

    t76 = ((x369-(x370<=x371))-x372);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	uint16_t x380 = 3432U;
	static int32_t t77 = 4546;

    t77 = ((x377-(x378<=x379))-x380);

    if (t77 != -1886316) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x387 = INT64_MAX;
	volatile uint32_t t78 = 740173U;

    t78 = ((x385-(x386<=x387))-x388);

    if (t78 != 3648015383U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x389 = -176;
	uint32_t x390 = 410678U;
	volatile int8_t x391 = -24;
	int32_t x392 = INT32_MIN;

    t79 = ((x389-(x390<=x391))-x392);

    if (t79 != 2147483471) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x397 = INT8_MIN;
	int8_t x399 = INT8_MIN;

    t80 = ((x397-(x398<=x399))-x400);

    if (t80 != 32639) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x401 = -10;
	static volatile int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	int8_t x404 = INT8_MAX;
	volatile int32_t t81 = 16850;

    t81 = ((x401-(x402<=x403))-x404);

    if (t81 != -137) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x405 = -1LL;
	static uint8_t x406 = 3U;
	int8_t x407 = -1;
	int16_t x408 = -1;
	static int64_t t82 = 3439680092LL;

    t82 = ((x405-(x406<=x407))-x408);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x409 = -1;
	uint16_t x411 = UINT16_MAX;
	uint8_t x412 = UINT8_MAX;
	int32_t t83 = 6786009;

    t83 = ((x409-(x410<=x411))-x412);

    if (t83 != -256) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x418 = 2U;
	int16_t x419 = -499;
	int32_t t84 = -99788;

    t84 = ((x417-(x418<=x419))-x420);

    if (t84 != 65552) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x421 = -1LL;
	volatile uint16_t x423 = UINT16_MAX;
	int64_t x424 = -1LL;
	static int64_t t85 = -1102743LL;

    t85 = ((x421-(x422<=x423))-x424);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x425 = 52274U;
	int32_t x427 = INT32_MAX;
	static int64_t t86 = -1103205354520817LL;

    t86 = ((x425-(x426<=x427))-x428);

    if (t86 != 52306LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x429 = 14U;
	volatile uint64_t x430 = UINT64_MAX;
	int8_t x431 = -1;
	static uint32_t t87 = 8827U;

    t87 = ((x429-(x430<=x431))-x432);

    if (t87 != 14U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x433 = INT32_MIN;
	int64_t x434 = -1LL;
	uint64_t t88 = 5LLU;

    t88 = ((x433-(x434<=x435))-x436);

    if (t88 != 18446744071547286525LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x437 = UINT8_MAX;
	static uint32_t x439 = UINT32_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t89 = 63078632;

    t89 = ((x437-(x438<=x439))-x440);

    if (t89 != 382) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x441 = INT16_MIN;
	uint16_t x442 = 1482U;
	int8_t x443 = INT8_MIN;
	uint16_t x444 = 3U;

    t90 = ((x441-(x442<=x443))-x444);

    if (t90 != -32771) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	static int32_t x447 = 5095561;
	int64_t x448 = INT64_MIN;
	int64_t t91 = 156805487LL;

    t91 = ((x445-(x446<=x447))-x448);

    if (t91 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x449 = INT8_MIN;
	static int32_t x450 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 106U;
	static volatile int32_t t92 = -52957;

    t92 = ((x449-(x450<=x451))-x452);

    if (t92 != -235) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x453 = -1011463510;
	uint64_t x455 = 4176361LLU;
	static volatile uint16_t x456 = UINT16_MAX;
	static int32_t t93 = -416;

    t93 = ((x453-(x454<=x455))-x456);

    if (t93 != -1011529046) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x457 = 2LLU;
	int8_t x458 = 1;
	uint64_t t94 = 8068587953001317348LLU;

    t94 = ((x457-(x458<=x459))-x460);

    if (t94 != 2147483650LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x465 = INT8_MIN;
	static int8_t x467 = 1;
	volatile uint16_t x468 = 24517U;
	int32_t t95 = -2714448;

    t95 = ((x465-(x466<=x467))-x468);

    if (t95 != -24645) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x469 = 130U;
	int64_t x471 = -318777984967240660LL;
	static uint8_t x472 = UINT8_MAX;
	volatile int32_t t96 = 0;

    t96 = ((x469-(x470<=x471))-x472);

    if (t96 != -125) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x474 = 5265;
	int32_t x475 = 910046666;
	uint64_t t97 = 76LLU;

    t97 = ((x473-(x474<=x475))-x476);

    if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x478 = INT8_MIN;
	int32_t x479 = -1;
	volatile int32_t x480 = 13504288;

    t98 = ((x477-(x478<=x479))-x480);

    if (t98 != -13537057) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x482 = INT64_MAX;
	int64_t x483 = INT64_MAX;
	uint32_t t99 = 871765825U;

    t99 = ((x481-(x482<=x483))-x484);

    if (t99 != 55435650U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x485 = 1;
	int32_t x486 = -8;
	uint32_t x488 = UINT32_MAX;
	uint32_t t100 = 81444U;

    t100 = ((x485-(x486<=x487))-x488);

    if (t100 != 2U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x489 = 14U;
	uint16_t x490 = UINT16_MAX;
	int8_t x492 = -2;
	int32_t t101 = 4;

    t101 = ((x489-(x490<=x491))-x492);

    if (t101 != 16) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x494 = UINT8_MAX;
	uint16_t x495 = 1569U;
	volatile uint32_t x496 = 8559774U;
	int64_t t102 = -32622399421LL;

    t102 = ((x493-(x494<=x495))-x496);

    if (t102 != 9223372036846216032LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x497 = INT32_MIN;
	int64_t x498 = -1LL;
	uint64_t x499 = 944882310LLU;
	volatile int64_t x500 = INT64_MIN;
	volatile int64_t t103 = -1940LL;

    t103 = ((x497-(x498<=x499))-x500);

    if (t103 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x502 = UINT32_MAX;
	int8_t x503 = -3;
	volatile int64_t x504 = -1LL;
	static int64_t t104 = -53673LL;

    t104 = ((x501-(x502<=x503))-x504);

    if (t104 != -127LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x506 = INT64_MIN;
	static int8_t x507 = -1;
	int32_t x508 = -1;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x505-(x506<=x507))-x508);

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x509 = 1175U;
	int64_t x510 = INT64_MIN;
	int32_t x511 = -1;
	uint64_t x512 = 12LLU;
	volatile uint64_t t106 = 62204LLU;

    t106 = ((x509-(x510<=x511))-x512);

    if (t106 != 1162LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x513 = -1;
	static volatile uint8_t x514 = 0U;
	static uint8_t x515 = 15U;
	int32_t x516 = 11622245;
	volatile int32_t t107 = -409912;

    t107 = ((x513-(x514<=x515))-x516);

    if (t107 != -11622247) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x517 = -1LL;
	int32_t x518 = INT32_MAX;
	int64_t x520 = INT64_MIN;
	static int64_t t108 = INT64_MAX;

    t108 = ((x517-(x518<=x519))-x520);

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MAX;
	int64_t x523 = INT64_MIN;
	int16_t x524 = -699;
	volatile int32_t t109 = -21214324;

    t109 = ((x521-(x522<=x523))-x524);

    if (t109 != -32069) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x526 = 7;
	volatile uint8_t x528 = UINT8_MAX;
	static int64_t t110 = 2777384082163598LL;

    t110 = ((x525-(x526<=x527))-x528);

    if (t110 != -255LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x529 = -1;
	static int64_t x531 = -1918418847186915LL;
	static uint64_t t111 = 506LLU;

    t111 = ((x529-(x530<=x531))-x532);

    if (t111 != 18446704017159969697LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x533 = -1;
	volatile uint32_t x534 = UINT32_MAX;
	int16_t x535 = INT16_MIN;
	static int64_t x536 = -1LL;
	volatile int64_t t112 = -2449465905LL;

    t112 = ((x533-(x534<=x535))-x536);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x537 = INT8_MAX;
	uint64_t x538 = UINT64_MAX;
	static volatile uint16_t x539 = 0U;
	int8_t x540 = INT8_MIN;

    t113 = ((x537-(x538<=x539))-x540);

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x545 = -1LL;
	volatile int64_t x546 = INT64_MIN;
	int16_t x547 = INT16_MAX;
	static uint32_t x548 = 189268037U;

    t114 = ((x545-(x546<=x547))-x548);

    if (t114 != -189268039LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x549 = 994385828424LLU;
	uint16_t x550 = UINT16_MAX;
	int8_t x551 = -1;
	int32_t x552 = -1;

    t115 = ((x549-(x550<=x551))-x552);

    if (t115 != 994385828425LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = 1;
	int8_t x555 = 34;
	volatile uint16_t x556 = UINT16_MAX;

    t116 = ((x553-(x554<=x555))-x556);

    if (t116 != -65535) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x557 = 67109251173670LL;
	int8_t x558 = -1;
	uint16_t x559 = 6U;
	static int64_t t117 = -162749LL;

    t117 = ((x557-(x558<=x559))-x560);

    if (t117 != 67109251173670LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x563 = -1;
	volatile uint8_t x564 = 22U;
	volatile int32_t t118 = 69195734;

    t118 = ((x561-(x562<=x563))-x564);

    if (t118 != -32791) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x565 = -8;
	uint64_t x566 = 7717364945987775416LLU;
	int16_t x567 = 47;
	volatile int16_t x568 = INT16_MIN;
	int32_t t119 = 139421;

    t119 = ((x565-(x566<=x567))-x568);

    if (t119 != 32760) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x569 = INT16_MIN;
	int32_t x570 = INT32_MIN;
	static volatile uint64_t x572 = UINT64_MAX;

    t120 = ((x569-(x570<=x571))-x572);

    if (t120 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x573 = 1659845831981LLU;
	volatile int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	int8_t x576 = 16;
	volatile uint64_t t121 = 321344932638822LLU;

    t121 = ((x573-(x574<=x575))-x576);

    if (t121 != 1659845831964LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = INT16_MIN;
	static int32_t x579 = -1195;
	static volatile int64_t t122 = -10195726591LL;

    t122 = ((x577-(x578<=x579))-x580);

    if (t122 != -1076122LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x583 = 53U;

    t123 = ((x581-(x582<=x583))-x584);

    if (t123 != 4294967168U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x585 = INT16_MIN;
	uint64_t x587 = UINT64_MAX;
	int8_t x588 = -1;
	volatile int32_t t124 = -994866590;

    t124 = ((x585-(x586<=x587))-x588);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x589 = 26U;
	static uint32_t x590 = UINT32_MAX;
	int8_t x591 = INT8_MIN;
	static uint8_t x592 = 0U;
	volatile int32_t t125 = 1;

    t125 = ((x589-(x590<=x591))-x592);

    if (t125 != 26) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x593 = UINT64_MAX;
	int64_t x594 = -1LL;
	static volatile uint8_t x595 = 0U;
	int32_t x596 = -464170;
	uint64_t t126 = 17LLU;

    t126 = ((x593-(x594<=x595))-x596);

    if (t126 != 464168LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x597 = -74893LL;
	int8_t x599 = -3;
	volatile int32_t x600 = -864141;
	static volatile int64_t t127 = 195239683357602802LL;

    t127 = ((x597-(x598<=x599))-x600);

    if (t127 != 789247LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x601 = INT64_MAX;
	int32_t x602 = INT32_MIN;
	static volatile int32_t x603 = -1;
	volatile uint16_t x604 = UINT16_MAX;
	int64_t t128 = 1817380520LL;

    t128 = ((x601-(x602<=x603))-x604);

    if (t128 != 9223372036854710271LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x605 = 1225604460U;
	volatile uint16_t x606 = 28U;
	uint8_t x607 = UINT8_MAX;
	static int16_t x608 = -1;
	volatile uint32_t t129 = 115691U;

    t129 = ((x605-(x606<=x607))-x608);

    if (t129 != 1225604460U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x615 = INT16_MIN;
	volatile int32_t t130 = -7403466;

    t130 = ((x613-(x614<=x615))-x616);

    if (t130 != 39103964) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x617 = -1;
	static int64_t x619 = -1LL;
	uint64_t x620 = 13581926826LLU;
	uint64_t t131 = 26301LLU;

    t131 = ((x617-(x618<=x619))-x620);

    if (t131 != 18446744060127624789LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x621 = INT64_MAX;
	int16_t x622 = 14;
	int8_t x624 = 2;
	int64_t t132 = -1480LL;

    t132 = ((x621-(x622<=x623))-x624);

    if (t132 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x626 = INT8_MIN;
	int32_t x628 = 18437;
	volatile int64_t t133 = 7609634866LL;

    t133 = ((x625-(x626<=x627))-x628);

    if (t133 != -18439LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x629 = 18235922U;
	uint16_t x630 = 591U;
	int32_t x631 = -4;
	int16_t x632 = -3;
	uint32_t t134 = 5U;

    t134 = ((x629-(x630<=x631))-x632);

    if (t134 != 18235925U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x633 = UINT8_MAX;
	volatile int64_t x634 = INT64_MIN;
	uint8_t x635 = 2U;

    t135 = ((x633-(x634<=x635))-x636);

    if (t135 != 33022) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x637 = INT64_MAX;
	volatile int16_t x638 = INT16_MIN;
	uint8_t x639 = 1U;
	int64_t x640 = INT64_MAX;
	int64_t t136 = -6287131206691558LL;

    t136 = ((x637-(x638<=x639))-x640);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x641 = 391;
	volatile int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MAX;
	volatile int8_t x644 = 14;
	volatile int32_t t137 = -8418248;

    t137 = ((x641-(x642<=x643))-x644);

    if (t137 != 376) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x645 = 427936317LL;
	uint32_t x646 = UINT32_MAX;
	volatile uint8_t x647 = 22U;
	uint16_t x648 = UINT16_MAX;
	int64_t t138 = -60072888513LL;

    t138 = ((x645-(x646<=x647))-x648);

    if (t138 != 427870782LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x653 = -1;
	int16_t x654 = 38;
	int8_t x656 = -1;
	static volatile int32_t t139 = 874;

    t139 = ((x653-(x654<=x655))-x656);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x657 = -1;
	int8_t x658 = INT8_MIN;
	int64_t x659 = 1074925467082323LL;
	int64_t x660 = -1LL;
	volatile int64_t t140 = 10LL;

    t140 = ((x657-(x658<=x659))-x660);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x661 = 29208294U;
	int16_t x664 = -1;
	volatile uint32_t t141 = 4U;

    t141 = ((x661-(x662<=x663))-x664);

    if (t141 != 29208295U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x666 = 6081;
	int64_t x667 = -1LL;
	int32_t t142 = -465078;

    t142 = ((x665-(x666<=x667))-x668);

    if (t142 != -28) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x669 = 0;
	int8_t x670 = INT8_MIN;
	static int32_t x671 = INT32_MAX;
	volatile int32_t x672 = INT32_MIN;
	int32_t t143 = INT32_MAX;

    t143 = ((x669-(x670<=x671))-x672);

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x677 = 40;
	static uint8_t x678 = 4U;
	volatile uint64_t x679 = 92441665585982LLU;
	uint32_t x680 = 5704543U;
	static volatile uint32_t t144 = 452067U;

    t144 = ((x677-(x678<=x679))-x680);

    if (t144 != 4289262792U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x681 = 942471LLU;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = 123023811994735LLU;
	uint32_t x684 = 370541U;
	uint64_t t145 = 4228012859778LLU;

    t145 = ((x681-(x682<=x683))-x684);

    if (t145 != 571930LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x685 = 0U;
	int32_t x686 = -466802324;
	int64_t x687 = INT64_MIN;
	static volatile int16_t x688 = -1;
	volatile int32_t t146 = -14139001;

    t146 = ((x685-(x686<=x687))-x688);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x690 = -1;
	int32_t x691 = INT32_MAX;
	volatile uint16_t x692 = 23U;
	int32_t t147 = -109092798;

    t147 = ((x689-(x690<=x691))-x692);

    if (t147 != 103) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x697 = 528LLU;
	static int32_t x698 = -1;
	int64_t x700 = INT64_MIN;
	volatile uint64_t t148 = 615LLU;

    t148 = ((x697-(x698<=x699))-x700);

    if (t148 != 9223372036854776336LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x705 = INT16_MAX;
	int8_t x706 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	int32_t x708 = INT32_MAX;
	int32_t t149 = 35;

    t149 = ((x705-(x706<=x707))-x708);

    if (t149 != -2147450880) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x710 = INT16_MIN;
	volatile uint16_t x711 = UINT16_MAX;
	int64_t x712 = INT64_MIN;
	uint64_t t150 = 2829338408409623LLU;

    t150 = ((x709-(x710<=x711))-x712);

    if (t150 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x713 = -185762070;
	int8_t x714 = INT8_MAX;
	volatile int16_t x715 = INT16_MAX;
	int16_t x716 = INT16_MAX;
	int32_t t151 = 33797205;

    t151 = ((x713-(x714<=x715))-x716);

    if (t151 != -185794838) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x717 = INT16_MIN;
	static int8_t x718 = INT8_MIN;
	static int64_t x719 = -101LL;
	static int16_t x720 = -15019;

    t152 = ((x717-(x718<=x719))-x720);

    if (t152 != -17750) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x721 = 11LLU;
	int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MAX;
	volatile uint64_t t153 = 36598985052099043LLU;

    t153 = ((x721-(x722<=x723))-x724);

    if (t153 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x726 = -1;
	static volatile int32_t t154 = 6;

    t154 = ((x725-(x726<=x727))-x728);

    if (t154 != -32641) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x729 = UINT16_MAX;
	static volatile int8_t x730 = -1;
	volatile int8_t x731 = -1;
	int64_t x732 = INT64_MAX;
	int64_t t155 = -2585048198156LL;

    t155 = ((x729-(x730<=x731))-x732);

    if (t155 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x742 = 7216;
	uint64_t x744 = 511287921413509LLU;
	static volatile uint64_t t156 = 298LLU;

    t156 = ((x741-(x742<=x743))-x744);

    if (t156 != 18446254771637795146LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x745 = 31U;
	int8_t x746 = INT8_MIN;
	int64_t x747 = -67390862296838165LL;
	int8_t x748 = -21;
	volatile int32_t t157 = -3789432;

    t157 = ((x745-(x746<=x747))-x748);

    if (t157 != 52) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x749 = 0U;
	uint8_t x750 = 1U;
	int64_t x751 = -1LL;
	int8_t x752 = -1;
	volatile uint32_t t158 = 2969U;

    t158 = ((x749-(x750<=x751))-x752);

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x757 = INT64_MIN;
	volatile int8_t x758 = -1;
	uint32_t x759 = 4U;
	int32_t x760 = INT32_MIN;
	volatile int64_t t159 = -325852388LL;

    t159 = ((x757-(x758<=x759))-x760);

    if (t159 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x761 = 565544246771LLU;
	int8_t x762 = -1;
	int32_t x763 = INT32_MAX;
	uint64_t t160 = 432747137270386LLU;

    t160 = ((x761-(x762<=x763))-x764);

    if (t160 != 561249279475LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x766 = 16385078918LLU;
	int64_t x767 = INT64_MAX;
	int32_t x768 = 0;

    t161 = ((x765-(x766<=x767))-x768);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x769 = -1;
	static uint8_t x770 = 24U;
	uint16_t x771 = 12817U;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t162 = 1;

    t162 = ((x769-(x770<=x771))-x772);

    if (t162 != -257) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x775 = UINT8_MAX;
	int32_t x776 = INT32_MAX;

    t163 = ((x773-(x774<=x775))-x776);

    if (t163 != 1880574023346761252LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x777 = INT16_MIN;
	static int16_t x779 = INT16_MAX;
	int32_t x780 = INT32_MIN;
	int32_t t164 = -1;

    t164 = ((x777-(x778<=x779))-x780);

    if (t164 != 2147450880) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x781 = -1;
	int32_t x782 = -1;
	int16_t x783 = -1;
	int64_t x784 = INT64_MIN;
	int64_t t165 = -11050222574LL;

    t165 = ((x781-(x782<=x783))-x784);

    if (t165 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x789 = -14;
	static int16_t x790 = 1;
	volatile int8_t x791 = INT8_MIN;
	int64_t t166 = -24279LL;

    t166 = ((x789-(x790<=x791))-x792);

    if (t166 != -77806088108337LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x793 = INT32_MAX;
	static uint16_t x794 = 437U;
	static volatile int32_t t167 = -2004248;

    t167 = ((x793-(x794<=x795))-x796);

    if (t167 != 2147483601) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x797 = -1039;
	static int32_t x798 = -1429498;
	uint16_t x799 = 62U;
	static volatile uint32_t t168 = 1973637U;

    t168 = ((x797-(x798<=x799))-x800);

    if (t168 != 4294954582U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x801 = -98886LL;
	int8_t x802 = INT8_MIN;
	int16_t x803 = INT16_MIN;
	int16_t x804 = INT16_MAX;
	int64_t t169 = -1LL;

    t169 = ((x801-(x802<=x803))-x804);

    if (t169 != -131653LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x805 = 3U;
	uint32_t x806 = 10U;
	volatile uint16_t x807 = 148U;
	volatile uint32_t x808 = 13748U;
	uint32_t t170 = 55U;

    t170 = ((x805-(x806<=x807))-x808);

    if (t170 != 4294953550U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x809 = INT16_MIN;
	volatile int8_t x810 = -1;
	static int64_t x811 = -1LL;
	static int32_t x812 = INT32_MIN;
	volatile int32_t t171 = -1859;

    t171 = ((x809-(x810<=x811))-x812);

    if (t171 != 2147450879) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x813 = INT32_MIN;
	uint16_t x814 = UINT16_MAX;
	volatile uint32_t x815 = 7666U;
	int16_t x816 = INT16_MIN;
	int32_t t172 = 75965;

    t172 = ((x813-(x814<=x815))-x816);

    if (t172 != -2147450880) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x817 = INT32_MIN;
	int64_t x818 = INT64_MAX;
	int16_t x819 = INT16_MIN;

    t173 = ((x817-(x818<=x819))-x820);

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x821 = 1;
	volatile int64_t x822 = INT64_MIN;
	uint64_t x823 = 143495514426779060LLU;
	int32_t x824 = INT32_MAX;
	volatile int32_t t174 = -9175606;

    t174 = ((x821-(x822<=x823))-x824);

    if (t174 != -2147483646) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x830 = 1;
	static volatile int16_t x831 = -1360;
	int8_t x832 = INT8_MIN;
	int32_t t175 = 7877496;

    t175 = ((x829-(x830<=x831))-x832);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x833 = INT32_MIN;
	static int16_t x834 = -22;
	static int16_t x835 = INT16_MIN;
	uint32_t x836 = 22U;

    t176 = ((x833-(x834<=x835))-x836);

    if (t176 != 2147483626U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x837 = 1;
	int64_t x839 = INT64_MIN;
	uint16_t x840 = UINT16_MAX;
	int32_t t177 = 242949466;

    t177 = ((x837-(x838<=x839))-x840);

    if (t177 != -65534) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x841 = -1LL;
	static volatile int64_t x843 = -1LL;
	int64_t x844 = 387272215LL;
	int64_t t178 = 2576LL;

    t178 = ((x841-(x842<=x843))-x844);

    if (t178 != -387272217LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x845 = INT16_MIN;
	uint16_t x847 = UINT16_MAX;
	volatile int64_t x848 = 1140280893279001658LL;
	volatile int64_t t179 = -63434844LL;

    t179 = ((x845-(x846<=x847))-x848);

    if (t179 != -1140280893279034427LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x849 = INT8_MIN;
	uint16_t x850 = 2U;
	volatile int64_t x852 = -416828LL;
	int64_t t180 = 19409399133LL;

    t180 = ((x849-(x850<=x851))-x852);

    if (t180 != 416699LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x853 = -1;
	volatile uint16_t x854 = 1U;
	volatile int32_t x855 = -14;
	int32_t x856 = INT32_MAX;
	static int32_t t181 = INT32_MIN;

    t181 = ((x853-(x854<=x855))-x856);

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x858 = UINT8_MAX;
	volatile int8_t x860 = 6;
	static volatile int32_t t182 = -462;

    t182 = ((x857-(x858<=x859))-x860);

    if (t182 != 2147483641) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x861 = INT8_MAX;
	int32_t x862 = 33005064;
	int32_t x863 = INT32_MAX;
	volatile uint32_t t183 = 13073U;

    t183 = ((x861-(x862<=x863))-x864);

    if (t183 != 4294709040U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x865 = 2782882294LL;
	uint16_t x866 = UINT16_MAX;
	static uint32_t x867 = 2103305U;

    t184 = ((x865-(x866<=x867))-x868);

    if (t184 != 4930365941LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x869 = -8;
	uint64_t x870 = 7LLU;
	int16_t x871 = 5;

    t185 = ((x869-(x870<=x871))-x872);

    if (t185 != -7) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x874 = 178422U;
	int64_t x876 = INT64_MIN;
	int64_t t186 = -3167LL;

    t186 = ((x873-(x874<=x875))-x876);

    if (t186 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x877 = 3U;
	volatile int16_t x879 = INT16_MIN;
	static volatile int32_t t187 = 15670968;

    t187 = ((x877-(x878<=x879))-x880);

    if (t187 != -2079052) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x882 = INT16_MIN;
	int8_t x883 = 0;
	uint64_t x884 = 2545381128LLU;
	volatile uint64_t t188 = 427588287652015241LLU;

    t188 = ((x881-(x882<=x883))-x884);

    if (t188 != 18446744071164203254LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x885 = INT64_MAX;
	int8_t x887 = INT8_MAX;
	static int64_t x888 = 13LL;
	volatile int64_t t189 = 6003211231481LL;

    t189 = ((x885-(x886<=x887))-x888);

    if (t189 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x889 = UINT32_MAX;
	int64_t x890 = INT64_MAX;
	static int16_t x891 = -403;
	uint16_t x892 = 95U;

    t190 = ((x889-(x890<=x891))-x892);

    if (t190 != 4294967200U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x894 = 1576U;
	int64_t x895 = INT64_MIN;
	uint16_t x896 = UINT16_MAX;

    t191 = ((x893-(x894<=x895))-x896);

    if (t191 != 4294901760U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x897 = 796346347LL;
	static int16_t x898 = INT16_MIN;
	int16_t x900 = 202;
	static volatile int64_t t192 = -42395812239LL;

    t192 = ((x897-(x898<=x899))-x900);

    if (t192 != 796346144LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x901 = INT8_MAX;
	int16_t x903 = INT16_MIN;

    t193 = ((x901-(x902<=x903))-x904);

    if (t193 != -65408) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x905 = 0U;
	int16_t x906 = INT16_MAX;
	uint64_t x907 = 23638LLU;
	volatile int32_t t194 = -7003568;

    t194 = ((x905-(x906<=x907))-x908);

    if (t194 != -4) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x909 = 156058U;
	volatile int8_t x910 = INT8_MIN;
	volatile uint32_t t195 = 2880456U;

    t195 = ((x909-(x910<=x911))-x912);

    if (t195 != 156185U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x913 = -1;
	static volatile int32_t t196 = -116347360;

    t196 = ((x913-(x914<=x915))-x916);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x921 = INT8_MAX;
	int64_t x922 = -1LL;
	int16_t x924 = 390;
	volatile int32_t t197 = 2;

    t197 = ((x921-(x922<=x923))-x924);

    if (t197 != -264) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x925 = 831U;
	int8_t x926 = INT8_MIN;
	static int32_t t198 = 0;

    t198 = ((x925-(x926<=x927))-x928);

    if (t198 != 827) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x937 = 134U;
	int16_t x938 = INT16_MIN;
	int16_t x939 = INT16_MAX;
	uint32_t t199 = 126U;

    t199 = ((x937-(x938<=x939))-x940);

    if (t199 != 2147483782U) { NG(); } else { ; }
	
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

