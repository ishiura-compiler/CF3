
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

static int32_t x2 = INT32_MAX;
int8_t x9 = -1;
uint8_t x13 = 1U;
volatile int16_t x14 = INT16_MIN;
int8_t x28 = 17;
volatile int16_t x49 = -1;
volatile int16_t x54 = -1;
int8_t x55 = -3;
static uint16_t x56 = 62U;
uint16_t x61 = 583U;
int8_t x63 = 3;
int8_t x64 = INT8_MIN;
volatile int64_t x66 = -157224LL;
uint64_t x90 = 49LLU;
uint64_t t22 = 11706LLU;
int8_t x106 = -1;
static int32_t x108 = -15670082;
volatile int64_t t26 = -7LL;
static int64_t x120 = 7879LL;
int64_t x125 = INT64_MIN;
static volatile int32_t t31 = 3843349;
int8_t x133 = INT8_MIN;
volatile int32_t t32 = -117253482;
int32_t t33 = 1;
uint64_t x141 = 5380LLU;
int64_t x145 = -7246128LL;
volatile int16_t x146 = INT16_MAX;
int8_t x152 = -1;
uint32_t x154 = 4722001U;
static volatile uint64_t x157 = 593LLU;
int32_t x158 = INT32_MIN;
uint32_t x166 = 105137U;
static uint64_t t41 = 9LLU;
uint8_t x178 = 2U;
int8_t x185 = INT8_MAX;
volatile int32_t t45 = -3507833;
volatile int32_t x193 = -1;
int64_t x195 = 40520LL;
int32_t x199 = -1;
uint8_t x200 = UINT8_MAX;
int32_t t49 = -22998898;
volatile int64_t x209 = -173353390305922292LL;
volatile uint16_t x212 = 140U;
uint8_t x219 = 76U;
static volatile int8_t x231 = INT8_MIN;
static volatile uint32_t x234 = UINT32_MAX;
int16_t x235 = -1;
uint16_t x237 = 28U;
uint32_t x240 = 1837U;
volatile int16_t x244 = INT16_MIN;
volatile uint64_t t58 = 14024LLU;
int8_t x245 = INT8_MIN;
static uint8_t x247 = 55U;
static volatile int16_t x248 = INT16_MAX;
int32_t x249 = INT32_MIN;
static uint16_t x258 = 73U;
int64_t x265 = INT64_MIN;
int64_t x270 = INT64_MAX;
uint64_t x275 = UINT64_MAX;
volatile uint8_t x284 = UINT8_MAX;
static uint64_t x289 = 230815169LLU;
uint32_t x291 = 1U;
volatile uint64_t t70 = 2LLU;
int64_t t72 = -16210562769606045LL;
int8_t x304 = INT8_MIN;
static int32_t x309 = INT32_MAX;
volatile uint32_t x310 = UINT32_MAX;
static uint16_t x312 = 1785U;
int32_t x316 = 231088;
volatile uint64_t t77 = 54613029LLU;
uint8_t x323 = 13U;
int32_t x324 = INT32_MIN;
static volatile int64_t x327 = INT64_MIN;
int16_t x328 = INT16_MAX;
int64_t x330 = -1LL;
uint32_t x331 = UINT32_MAX;
static uint64_t x332 = 4139350LLU;
int32_t x335 = INT32_MIN;
int16_t x344 = -1;
uint8_t x348 = UINT8_MAX;
uint16_t x350 = 377U;
int64_t x351 = -1LL;
static int64_t x360 = INT64_MIN;
int64_t x368 = INT64_MIN;
int32_t x375 = -627;
uint16_t x376 = UINT16_MAX;
int8_t x384 = INT8_MIN;
int64_t t93 = 198233818LL;
uint64_t x388 = 14709796234355LLU;
uint32_t x392 = 24233U;
uint64_t t96 = 1LLU;
int16_t x398 = -11;
uint8_t x400 = 5U;
uint8_t x401 = UINT8_MAX;
int32_t t98 = 1;
volatile int8_t x406 = INT8_MIN;
static int64_t x408 = INT64_MAX;
int32_t x410 = -1;
static int64_t t100 = 2758LL;
static int64_t t102 = -112075444475LL;
uint8_t x432 = 15U;
volatile int32_t t105 = 427506314;
static volatile int64_t x433 = INT64_MAX;
uint16_t x448 = 505U;
volatile int8_t x450 = INT8_MIN;
int16_t x456 = INT16_MIN;
int32_t x459 = -1;
volatile int32_t t112 = 14954;
static volatile uint32_t x476 = 7009358U;
uint8_t x481 = UINT8_MAX;
int8_t x484 = INT8_MAX;
uint64_t x490 = UINT64_MAX;
volatile uint16_t x498 = 3U;
int64_t x506 = 564589LL;
volatile uint64_t t124 = 76765079854356LLU;
int32_t x517 = -1;
uint16_t x518 = 0U;
uint32_t x529 = 383U;
static uint64_t x543 = 54536LLU;
volatile uint64_t t131 = 230029981331077LLU;
volatile int64_t x548 = INT64_MIN;
int64_t t132 = INT64_MIN;
int32_t x551 = INT32_MIN;
int32_t x555 = INT32_MIN;
int16_t x558 = INT16_MIN;
int64_t x561 = -35698408849LL;
uint64_t x564 = UINT64_MAX;
volatile uint32_t x570 = 625776U;
int16_t x572 = -1;
int8_t x576 = -1;
static int16_t x579 = INT16_MAX;
uint64_t t140 = 1078094966076LLU;
static uint64_t x583 = UINT64_MAX;
static uint64_t x596 = UINT64_MAX;
static uint64_t x597 = UINT64_MAX;
int32_t x600 = 4;
static int16_t x608 = 0;
int16_t x618 = INT16_MIN;
static int64_t x619 = INT64_MIN;
int16_t x622 = -1;
int64_t x626 = INT64_MAX;
uint8_t x629 = 25U;
volatile int64_t t153 = 4468683720844722778LL;
static volatile int16_t x642 = INT16_MIN;
volatile uint8_t x643 = 11U;
static int16_t x646 = INT16_MIN;
uint32_t x653 = 493889129U;
int64_t x663 = INT64_MIN;
static int64_t x664 = -16046LL;
int16_t x668 = INT16_MIN;
static uint32_t t161 = 39686U;
int32_t x677 = -1;
static uint8_t x678 = 0U;
static int64_t t165 = 34484LL;
int16_t x692 = -1;
int64_t t166 = 54985416007LL;
volatile int32_t t168 = 1;
volatile uint32_t t169 = 601982187U;
volatile int8_t x709 = INT8_MIN;
int32_t x710 = -1;
int64_t x712 = -1LL;
int64_t t171 = -15412LL;
int32_t x719 = -1;
int16_t x721 = -1;
int32_t x726 = INT32_MAX;
static int64_t t178 = 445849LL;
uint64_t x747 = 30507418779LLU;
uint16_t x748 = 10016U;
int64_t x758 = -1LL;
int32_t x761 = 5202024;
uint8_t x762 = 0U;
static uint32_t x765 = UINT32_MAX;
int64_t x767 = INT64_MAX;
static volatile int16_t x768 = -1;
uint16_t x773 = UINT16_MAX;
uint64_t x783 = 32399859371761615LLU;
volatile uint64_t t191 = 3779814395008088LLU;
volatile uint64_t t192 = 5119213505256551976LLU;
uint16_t x813 = 53U;
uint16_t x819 = 482U;
static volatile int16_t x822 = INT16_MIN;
static int64_t x824 = -1LL;
volatile int32_t t199 = 19758059;


void f0(void) {
    	int16_t x1 = -1;
	int8_t x3 = 1;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 1LL;

    t0 = (((x1&x2)/x3)&x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	static volatile int8_t x6 = INT8_MIN;
	int16_t x7 = -155;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -618;

    t1 = (((x5&x6)/x7)&x8);

    if (t1 != -512) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	static uint8_t x11 = 6U;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 272601855013277562LL;

    t2 = (((x9&x10)/x11)&x12);

    if (t2 != 715827883LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 46961;

    t3 = (((x13&x14)/x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 17U;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 152;

    t4 = (((x17&x18)/x19)&x20);

    if (t4 != 30841) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	static int32_t x22 = INT32_MIN;
	static int32_t x23 = 868065135;
	static volatile uint64_t x24 = 5LLU;
	uint64_t t5 = 250897081696LLU;

    t5 = (((x21&x22)/x23)&x24);

    if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 0U;
	uint8_t x26 = 3U;
	int16_t x27 = INT16_MAX;
	int32_t t6 = -808;

    t6 = (((x25&x26)/x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 645U;
	static uint32_t x30 = UINT32_MAX;
	static int16_t x31 = 56;
	int16_t x32 = 1994;
	static volatile uint32_t t7 = 20325U;

    t7 = (((x29&x30)/x31)&x32);

    if (t7 != 10U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 52854698021LL;
	static int32_t x34 = -15492539;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MAX;
	int64_t t8 = 7564342LL;

    t8 = (((x33&x34)/x35)&x36);

    if (t8 != 32744LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -34;
	int64_t x38 = -2422271418375585LL;
	static int16_t x39 = INT16_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = -35245LL;

    t9 = (((x37&x38)/x39)&x40);

    if (t9 != 3385298093LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static volatile int16_t x42 = INT16_MAX;
	static uint16_t x43 = 4491U;
	int8_t x44 = -40;
	int32_t t10 = 5;

    t10 = (((x41&x42)/x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = INT64_MIN;
	static uint32_t x46 = 1997291U;
	int16_t x47 = INT16_MIN;
	static int64_t x48 = -336851LL;
	int64_t t11 = 353328183206LL;

    t11 = (((x45&x46)/x47)&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 10468963492635559LLU;
	int8_t x51 = -1;
	uint8_t x52 = UINT8_MAX;
	static uint64_t t12 = 6LLU;

    t12 = (((x49&x50)/x51)&x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t t13 = 63735797;

    t13 = (((x53&x54)/x55)&x56);

    if (t13 != 42) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = 0;
	volatile int32_t x58 = -1;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 10U;
	volatile int64_t t14 = -27315796488LL;

    t14 = (((x57&x58)/x59)&x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = INT32_MIN;
	volatile int32_t t15 = 28933;

    t15 = (((x61&x62)/x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 6975U;
	uint64_t x67 = UINT64_MAX;
	int32_t x68 = INT32_MIN;
	static volatile uint64_t t16 = 8845509584232403LLU;

    t16 = (((x65&x66)/x67)&x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	static int16_t x70 = 0;
	int32_t x71 = 51927215;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -415127979;

    t17 = (((x69&x70)/x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	int16_t x74 = 1;
	int64_t x75 = 209LL;
	int16_t x76 = INT16_MIN;
	volatile int64_t t18 = -137145088LL;

    t18 = (((x73&x74)/x75)&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -662472LL;
	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = INT16_MAX;
	volatile int64_t t19 = 209884204LL;

    t19 = (((x77&x78)/x79)&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 2LL;
	volatile int8_t x82 = INT8_MIN;
	volatile int8_t x83 = INT8_MAX;
	volatile int64_t x84 = -1LL;
	int64_t t20 = 23135LL;

    t20 = (((x81&x82)/x83)&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 8U;
	static int32_t x86 = -13506;
	static int64_t x87 = 126318838LL;
	volatile int64_t x88 = -13808135808706604LL;
	int64_t t21 = -4393340755751532LL;

    t21 = (((x85&x86)/x87)&x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -8;
	int16_t x91 = INT16_MAX;
	volatile int64_t x92 = INT64_MAX;

    t22 = (((x89&x90)/x91)&x92);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 7402U;
	int16_t x94 = 3;
	int8_t x95 = 14;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = 0U;

    t23 = (((x93&x94)/x95)&x96);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 828958663LLU;
	uint64_t x102 = UINT64_MAX;
	static int8_t x103 = -1;
	uint64_t x104 = 60533LLU;
	uint64_t t24 = 1956967LLU;

    t24 = (((x101&x102)/x103)&x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = -1;
	int16_t x107 = INT16_MAX;
	int32_t t25 = -57;

    t25 = (((x105&x106)/x107)&x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x109 = -1;
	static int64_t x110 = -2004688LL;
	uint8_t x111 = UINT8_MAX;
	uint16_t x112 = 87U;

    t26 = (((x109&x110)/x111)&x112);

    if (t26 != 67LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 32893047U;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	volatile int64_t t27 = -11562883316913501LL;

    t27 = (((x113&x114)/x115)&x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = 172U;
	static int32_t x118 = -133;
	int64_t x119 = 267899197LL;
	int64_t t28 = -1460647363LL;

    t28 = (((x117&x118)/x119)&x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint64_t x122 = 59546484651905LLU;
	uint16_t x123 = 54U;
	int64_t x124 = INT64_MIN;
	uint64_t t29 = 46779944446LLU;

    t29 = (((x121&x122)/x123)&x124);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x126 = -1;
	volatile uint64_t x127 = 9099782LLU;
	int8_t x128 = -45;
	uint64_t t30 = 477445150425965LLU;

    t30 = (((x125&x126)/x127)&x128);

    if (t30 != 1013581648081LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = -1;
	static int32_t x130 = INT32_MIN;
	int32_t x131 = -6547;
	volatile int16_t x132 = 88;

    t31 = (((x129&x130)/x131)&x132);

    if (t31 != 72) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = -1;
	static int32_t x135 = 3742;
	uint16_t x136 = 15U;

    t32 = (((x133&x134)/x135)&x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = -1;

    t33 = (((x137&x138)/x139)&x140);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x142 = 18555128559LLU;
	uint16_t x143 = 2525U;
	volatile int8_t x144 = INT8_MIN;
	uint64_t t34 = 418LLU;

    t34 = (((x141&x142)/x143)&x144);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x147 = INT64_MAX;
	int8_t x148 = INT8_MAX;
	volatile int64_t t35 = -17887481LL;

    t35 = (((x145&x146)/x147)&x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MAX;
	static volatile int32_t x150 = -1;
	static int8_t x151 = -12;
	int64_t t36 = 14LL;

    t36 = (((x149&x150)/x151)&x152);

    if (t36 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 1271578665U;
	int8_t x155 = INT8_MIN;
	static int64_t x156 = 68LL;
	int64_t t37 = 590728468979364330LL;

    t37 = (((x153&x154)/x155)&x156);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x159 = INT16_MAX;
	static uint16_t x160 = 3U;
	static uint64_t t38 = 2829315131412443248LLU;

    t38 = (((x157&x158)/x159)&x160);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	int32_t x162 = 63;
	volatile int64_t x163 = INT64_MAX;
	int32_t x164 = 40;
	int64_t t39 = 880331899LL;

    t39 = (((x161&x162)/x163)&x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x167 = 4U;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t40 = 22039U;

    t40 = (((x165&x166)/x167)&x168);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x169 = -10;
	volatile int16_t x170 = INT16_MIN;
	static uint64_t x171 = 26368LLU;
	int32_t x172 = -547783083;

    t41 = (((x169&x170)/x171)&x172);

    if (t41 != 699588282946581LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MAX;
	volatile int64_t x175 = 20594661LL;
	int8_t x176 = INT8_MIN;
	int64_t t42 = 104085425229LL;

    t42 = (((x173&x174)/x175)&x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x177 = 1;
	int16_t x179 = INT16_MIN;
	volatile int32_t x180 = 1857312;
	int32_t t43 = -735051;

    t43 = (((x177&x178)/x179)&x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 2355U;
	int32_t x182 = INT32_MIN;
	static volatile int32_t x183 = INT32_MAX;
	volatile uint8_t x184 = 0U;
	int32_t t44 = 229;

    t44 = (((x181&x182)/x183)&x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x186 = -10428;
	volatile int8_t x187 = -1;
	int32_t x188 = INT32_MAX;

    t45 = (((x185&x186)/x187)&x188);

    if (t45 != 2147483580) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MAX;
	int64_t x190 = INT64_MIN;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;
	volatile int64_t t46 = -544995877498673322LL;

    t46 = (((x189&x190)/x191)&x192);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x194 = INT16_MAX;
	static uint16_t x196 = UINT16_MAX;
	int64_t t47 = -8695654818363334LL;

    t47 = (((x193&x194)/x195)&x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	volatile int32_t t48 = 7730;

    t48 = (((x197&x198)/x199)&x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x201 = 3075U;
	int16_t x202 = INT16_MIN;
	volatile int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;

    t49 = (((x201&x202)/x203)&x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = UINT8_MAX;
	volatile int64_t x206 = -648185388475553LL;
	uint8_t x207 = 2U;
	uint64_t x208 = 63733221487378LLU;
	volatile uint64_t t50 = 697686827LLU;

    t50 = (((x205&x206)/x207)&x208);

    if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x210 = INT16_MAX;
	volatile int64_t x211 = INT64_MAX;
	volatile int64_t t51 = 31LL;

    t51 = (((x209&x210)/x211)&x212);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	volatile int32_t x215 = -1;
	int8_t x216 = INT8_MIN;
	volatile uint64_t t52 = 5011454575LLU;

    t52 = (((x213&x214)/x215)&x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 1329U;
	int32_t x218 = 4;
	uint16_t x220 = 478U;
	int32_t t53 = 129396;

    t53 = (((x217&x218)/x219)&x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = INT8_MIN;
	volatile uint16_t x226 = 42U;
	volatile int16_t x227 = -6948;
	int64_t x228 = INT64_MIN;
	static volatile int64_t t54 = 1942693861125021004LL;

    t54 = (((x225&x226)/x227)&x228);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x229 = -18;
	int8_t x230 = 1;
	int8_t x232 = INT8_MIN;
	int32_t t55 = -8;

    t55 = (((x229&x230)/x231)&x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x233 = INT8_MAX;
	volatile int64_t x236 = -29235689037511LL;
	int64_t t56 = 29LL;

    t56 = (((x233&x234)/x235)&x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x238 = -4068;
	volatile int32_t x239 = -446697978;
	uint32_t t57 = 39170856U;

    t57 = (((x237&x238)/x239)&x240);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x241 = 15080LLU;
	uint32_t x242 = 2136940U;
	int32_t x243 = -1;

    t58 = (((x241&x242)/x243)&x244);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x246 = 154U;
	volatile int32_t t59 = -9;

    t59 = (((x245&x246)/x247)&x248);

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x250 = UINT32_MAX;
	static uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 3316U;
	volatile uint32_t t60 = 108213U;

    t60 = (((x249&x250)/x251)&x252);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	volatile uint32_t x255 = 3917U;
	uint8_t x256 = UINT8_MAX;
	uint32_t t61 = 473266U;

    t61 = (((x253&x254)/x255)&x256);

    if (t61 != 142U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x257 = INT64_MAX;
	int32_t x259 = INT32_MIN;
	uint32_t x260 = 10513320U;
	volatile int64_t t62 = -91678510LL;

    t62 = (((x257&x258)/x259)&x260);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x261 = 29U;
	static uint8_t x262 = UINT8_MAX;
	uint16_t x263 = 894U;
	static int16_t x264 = 5;
	int32_t t63 = 73;

    t63 = (((x261&x262)/x263)&x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x266 = 5732U;
	int16_t x267 = INT16_MAX;
	static volatile uint16_t x268 = UINT16_MAX;
	volatile int64_t t64 = -1679LL;

    t64 = (((x265&x266)/x267)&x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MIN;
	static uint16_t x271 = 37U;
	volatile uint16_t x272 = 8U;
	int64_t t65 = 5170809LL;

    t65 = (((x269&x270)/x271)&x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = -1;
	uint32_t x274 = 75020943U;
	uint32_t x276 = 2808U;
	static volatile uint64_t t66 = 8LLU;

    t66 = (((x273&x274)/x275)&x276);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = INT8_MIN;
	static int16_t x278 = INT16_MIN;
	uint16_t x279 = 227U;
	int64_t x280 = 199367837839734712LL;
	static volatile int64_t t67 = 111LL;

    t67 = (((x277&x278)/x279)&x280);

    if (t67 != 199367837839734576LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = 20679;
	int16_t x282 = 0;
	int64_t x283 = INT64_MIN;
	volatile int64_t t68 = 688792368LL;

    t68 = (((x281&x282)/x283)&x284);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = 7;
	static int16_t x287 = INT16_MIN;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t69 = 6754841189251357LLU;

    t69 = (((x285&x286)/x287)&x288);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x290 = -32;
	uint64_t x292 = 540LLU;

    t70 = (((x289&x290)/x291)&x292);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = 75LLU;
	int64_t x295 = -1LL;
	volatile int8_t x296 = 1;
	uint64_t t71 = 131078724LLU;

    t71 = (((x293&x294)/x295)&x296);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = 171128990820607LL;
	int64_t x298 = -499403LL;
	uint32_t x299 = 60745U;
	int16_t x300 = -15948;

    t72 = (((x297&x298)/x299)&x300);

    if (t72 != 2817163316LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x301 = -36LL;
	int32_t x302 = INT32_MAX;
	volatile int16_t x303 = INT16_MIN;
	static int64_t t73 = -494111508322LL;

    t73 = (((x301&x302)/x303)&x304);

    if (t73 != -65536LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -140851;
	int8_t x306 = -4;
	int32_t x307 = -1;
	int16_t x308 = INT16_MAX;
	volatile int32_t t74 = -297847699;

    t74 = (((x305&x306)/x307)&x308);

    if (t74 != 9780) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x311 = 92465LLU;
	uint64_t t75 = 7467249504470LLU;

    t75 = (((x309&x310)/x311)&x312);

    if (t75 != 696LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = -8457;
	int64_t x315 = -1LL;
	volatile int64_t t76 = 4011LL;

    t76 = (((x313&x314)/x315)&x316);

    if (t76 != 128LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 374211707U;
	int8_t x318 = -1;
	uint64_t x319 = 1998LLU;
	uint32_t x320 = UINT32_MAX;

    t77 = (((x317&x318)/x319)&x320);

    if (t77 != 187293LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x321 = 0;
	volatile int32_t x322 = INT32_MAX;
	static volatile int32_t t78 = -2420;

    t78 = (((x321&x322)/x323)&x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = INT64_MIN;
	static int64_t x326 = INT64_MIN;
	int64_t t79 = -32746181131230398LL;

    t79 = (((x325&x326)/x327)&x328);

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x329 = 4;
	volatile uint64_t t80 = 179LLU;

    t80 = (((x329&x330)/x331)&x332);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	int16_t x336 = INT16_MAX;
	volatile int32_t t81 = 552134879;

    t81 = (((x333&x334)/x335)&x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	static uint8_t x338 = 12U;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t82 = 1160610533LLU;

    t82 = (((x337&x338)/x339)&x340);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x341 = 1U;
	volatile int64_t x342 = -12447215LL;
	volatile int32_t x343 = INT32_MIN;
	static volatile int64_t t83 = 230LL;

    t83 = (((x341&x342)/x343)&x344);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = INT8_MIN;
	volatile int64_t x346 = INT64_MIN;
	int32_t x347 = INT32_MAX;
	int64_t t84 = -37153754300581LL;

    t84 = (((x345&x346)/x347)&x348);

    if (t84 != 254LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x349 = INT64_MAX;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t85 = INT64_MIN;

    t85 = (((x349&x350)/x351)&x352);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = INT32_MAX;
	static int16_t x354 = INT16_MIN;
	int16_t x355 = -424;
	uint32_t x356 = 606U;
	volatile uint32_t t86 = 945418U;

    t86 = (((x353&x354)/x355)&x356);

    if (t86 != 602U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x357 = INT16_MAX;
	volatile int16_t x358 = INT16_MAX;
	int64_t x359 = INT64_MAX;
	volatile int64_t t87 = -25705507710LL;

    t87 = (((x357&x358)/x359)&x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = 38896;
	static volatile int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	int16_t x364 = INT16_MIN;
	volatile uint64_t t88 = 3160434027LLU;

    t88 = (((x361&x362)/x363)&x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = 33028143U;
	static uint64_t x366 = 1473909484LLU;
	static uint16_t x367 = UINT16_MAX;
	uint64_t t89 = 3964651500706750LLU;

    t89 = (((x365&x366)/x367)&x368);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x369 = 1399698LL;
	int8_t x370 = -1;
	int64_t x371 = -1LL;
	volatile uint16_t x372 = UINT16_MAX;
	int64_t t90 = -1819721356621320LL;

    t90 = (((x369&x370)/x371)&x372);

    if (t90 != 42094LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -1;
	int32_t t91 = -25136432;

    t91 = (((x373&x374)/x375)&x376);

    if (t91 != 65432) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -1LL;
	static volatile int16_t x379 = 228;
	static uint8_t x380 = 25U;
	uint64_t t92 = 32LLU;

    t92 = (((x377&x378)/x379)&x380);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x381 = -1;
	int64_t x382 = -385298LL;
	int32_t x383 = -73211821;

    t93 = (((x381&x382)/x383)&x384);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -1LL;
	int16_t x386 = -1;
	int16_t x387 = -128;
	static volatile uint64_t t94 = 76303466798601LLU;

    t94 = (((x385&x386)/x387)&x388);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x389 = INT8_MAX;
	uint16_t x390 = 124U;
	uint32_t x391 = 1017U;
	volatile uint32_t t95 = 3495863U;

    t95 = (((x389&x390)/x391)&x392);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x393 = INT32_MAX;
	uint64_t x394 = 32373886LLU;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -1;

    t96 = (((x393&x394)/x395)&x396);

    if (t96 != 493LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = INT8_MAX;
	volatile int32_t x399 = 166683;
	int32_t t97 = -877472746;

    t97 = (((x397&x398)/x399)&x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MAX;
	int32_t x404 = -11;

    t98 = (((x401&x402)/x403)&x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x405 = -1;
	uint16_t x407 = 1U;
	int64_t t99 = -5964324319882LL;

    t99 = (((x405&x406)/x407)&x408);

    if (t99 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x409 = UINT8_MAX;
	int64_t x411 = -1LL;
	int32_t x412 = -207;

    t100 = (((x409&x410)/x411)&x412);

    if (t100 != -255LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x413 = 22001LLU;
	int32_t x414 = 36;
	int64_t x415 = -1LL;
	int8_t x416 = -1;
	static uint64_t t101 = 82160300372584153LLU;

    t101 = (((x413&x414)/x415)&x416);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = -1LL;
	uint16_t x418 = 28U;
	static int32_t x419 = INT32_MAX;
	static volatile int64_t x420 = INT64_MAX;

    t102 = (((x417&x418)/x419)&x420);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = 0;
	int32_t x422 = -165495250;
	int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MAX;
	int64_t t103 = -172LL;

    t103 = (((x421&x422)/x423)&x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x425 = 2173U;
	static int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	uint16_t x428 = 73U;
	volatile int32_t t104 = -24412134;

    t104 = (((x425&x426)/x427)&x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x429 = 3776;
	volatile int8_t x430 = -1;
	int8_t x431 = -1;

    t105 = (((x429&x430)/x431)&x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x434 = 2498;
	int32_t x435 = 655;
	int16_t x436 = -1;
	int64_t t106 = -5310LL;

    t106 = (((x433&x434)/x435)&x436);

    if (t106 != 3LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x441 = -1;
	int64_t x442 = -1LL;
	static int16_t x443 = -13;
	int16_t x444 = INT16_MIN;
	int64_t t107 = 6583802678379LL;

    t107 = (((x441&x442)/x443)&x444);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x445 = -1;
	static volatile uint64_t x446 = UINT64_MAX;
	static volatile uint16_t x447 = 225U;
	volatile uint64_t t108 = 46812681593250512LLU;

    t108 = (((x445&x446)/x447)&x448);

    if (t108 != 496LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = 48151075155LL;
	int8_t x451 = INT8_MIN;
	volatile int32_t x452 = INT32_MIN;
	volatile int64_t t109 = 168366294LL;

    t109 = (((x449&x450)/x451)&x452);

    if (t109 != -2147483648LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = INT8_MAX;
	uint64_t x454 = 63950218LLU;
	static int64_t x455 = -1LL;
	volatile uint64_t t110 = 52148LLU;

    t110 = (((x453&x454)/x455)&x456);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x457 = -1LL;
	volatile int16_t x458 = INT16_MIN;
	volatile int64_t x460 = 40012173050695951LL;
	int64_t t111 = 1446937982628961725LL;

    t111 = (((x457&x458)/x459)&x460);

    if (t111 != 32768LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x461 = 4U;
	int32_t x462 = -60;
	int8_t x463 = INT8_MIN;
	static volatile int8_t x464 = INT8_MIN;

    t112 = (((x461&x462)/x463)&x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x465 = -785458LL;
	int64_t x466 = INT64_MAX;
	static uint16_t x467 = 24U;
	int8_t x468 = INT8_MAX;
	static volatile int64_t t113 = 14184107789LL;

    t113 = (((x465&x466)/x467)&x468);

    if (t113 != 125LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x469 = 759981455405434LLU;
	int64_t x470 = -11448456197LL;
	int32_t x471 = INT32_MAX;
	int32_t x472 = 3437;
	volatile uint64_t t114 = 25854666732LLU;

    t114 = (((x469&x470)/x471)&x472);

    if (t114 != 1120LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = INT8_MIN;
	uint16_t x474 = 1U;
	static volatile int64_t x475 = INT64_MIN;
	volatile int64_t t115 = 140904449557093913LL;

    t115 = (((x473&x474)/x475)&x476);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x477 = 690073941LLU;
	int32_t x478 = -62101852;
	uint64_t x479 = UINT64_MAX;
	int16_t x480 = INT16_MIN;
	uint64_t t116 = 34LLU;

    t116 = (((x477&x478)/x479)&x480);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x482 = INT32_MAX;
	int8_t x483 = 62;
	volatile int32_t t117 = 590;

    t117 = (((x481&x482)/x483)&x484);

    if (t117 != 4) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = 7U;
	int16_t x486 = -1;
	uint16_t x487 = 390U;
	static volatile uint32_t x488 = 2U;
	uint32_t t118 = 5118270U;

    t118 = (((x485&x486)/x487)&x488);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = -1;
	static uint16_t x491 = 1518U;
	int32_t x492 = INT32_MIN;
	uint64_t t119 = 1LLU;

    t119 = (((x489&x490)/x491)&x492);

    if (t119 != 12152004373643264LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x497 = UINT64_MAX;
	int8_t x499 = -1;
	static uint64_t x500 = 517344453493336015LLU;
	uint64_t t120 = 9581478LLU;

    t120 = (((x497&x498)/x499)&x500);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = INT8_MIN;
	int64_t x502 = INT64_MIN;
	static int16_t x503 = INT16_MIN;
	static volatile uint32_t x504 = UINT32_MAX;
	int64_t t121 = -293LL;

    t121 = (((x501&x502)/x503)&x504);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x505 = UINT64_MAX;
	int64_t x507 = INT64_MIN;
	uint16_t x508 = 0U;
	static uint64_t t122 = 1LLU;

    t122 = (((x505&x506)/x507)&x508);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x509 = INT64_MAX;
	int64_t x510 = -1LL;
	int16_t x511 = INT16_MAX;
	static uint8_t x512 = 1U;
	volatile int64_t t123 = 443041208LL;

    t123 = (((x509&x510)/x511)&x512);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x513 = 2333545;
	uint64_t x514 = UINT64_MAX;
	int16_t x515 = 606;
	int16_t x516 = INT16_MIN;

    t124 = (((x513&x514)/x515)&x516);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x519 = -363367LL;
	volatile int32_t x520 = -247812329;
	volatile int64_t t125 = -139LL;

    t125 = (((x517&x518)/x519)&x520);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x521 = 1U;
	int64_t x522 = INT64_MAX;
	int32_t x523 = -16782644;
	int32_t x524 = INT32_MIN;
	int64_t t126 = 58442067492LL;

    t126 = (((x521&x522)/x523)&x524);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = 6;
	int16_t x526 = INT16_MIN;
	int16_t x527 = -17;
	static int64_t x528 = INT64_MIN;
	static int64_t t127 = 4055974787899823686LL;

    t127 = (((x525&x526)/x527)&x528);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x530 = -1LL;
	int16_t x531 = -1955;
	int16_t x532 = INT16_MAX;
	static volatile int64_t t128 = -7LL;

    t128 = (((x529&x530)/x531)&x532);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = UINT64_MAX;
	static uint32_t x534 = 92878U;
	static int8_t x535 = INT8_MIN;
	int16_t x536 = 1047;
	static volatile uint64_t t129 = 226417601621090LLU;

    t129 = (((x533&x534)/x535)&x536);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = -1;
	int64_t x538 = INT64_MIN;
	int16_t x539 = INT16_MIN;
	int32_t x540 = -1;
	volatile int64_t t130 = -222295550609082309LL;

    t130 = (((x537&x538)/x539)&x540);

    if (t130 != 281474976710656LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MAX;
	static volatile uint16_t x542 = 68U;
	uint16_t x544 = UINT16_MAX;

    t131 = (((x541&x542)/x543)&x544);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x545 = INT16_MIN;
	volatile int8_t x546 = INT8_MIN;
	int8_t x547 = 1;

    t132 = (((x545&x546)/x547)&x548);

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int16_t x550 = INT16_MAX;
	uint64_t x552 = UINT64_MAX;
	static volatile uint64_t t133 = 91923796LLU;

    t133 = (((x549&x550)/x551)&x552);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MAX;
	static int64_t x554 = -965647696212LL;
	volatile int32_t x556 = INT32_MIN;
	volatile int64_t t134 = 66887944981LL;

    t134 = (((x553&x554)/x555)&x556);

    if (t134 != -4294967296LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x557 = INT8_MIN;
	volatile uint16_t x559 = UINT16_MAX;
	static uint8_t x560 = 69U;
	volatile int32_t t135 = -26641696;

    t135 = (((x557&x558)/x559)&x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x562 = 453738007979LL;
	uint8_t x563 = 1U;
	static uint64_t t136 = 10355LLU;

    t136 = (((x561&x562)/x563)&x564);

    if (t136 != 419298574379LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = INT16_MIN;
	static uint16_t x566 = 61U;
	uint32_t x567 = UINT32_MAX;
	volatile int32_t x568 = -1;
	static uint32_t t137 = 16U;

    t137 = (((x565&x566)/x567)&x568);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x569 = 1163190499LLU;
	int8_t x571 = INT8_MAX;
	uint64_t t138 = 12801LLU;

    t138 = (((x569&x570)/x571)&x572);

    if (t138 != 258LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = 3850084;
	int64_t x574 = -9LL;
	static int16_t x575 = INT16_MAX;
	int64_t t139 = 789856194614LL;

    t139 = (((x573&x574)/x575)&x576);

    if (t139 != 117LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int8_t x578 = INT8_MIN;
	volatile int8_t x580 = INT8_MAX;

    t140 = (((x577&x578)/x579)&x580);

    if (t140 != 15LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x582 = -1;
	int64_t x584 = -1LL;
	uint64_t t141 = 7936440LLU;

    t141 = (((x581&x582)/x583)&x584);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x585 = INT32_MIN;
	int8_t x586 = INT8_MIN;
	uint16_t x587 = UINT16_MAX;
	volatile int32_t x588 = -1;
	int32_t t142 = -664;

    t142 = (((x585&x586)/x587)&x588);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x589 = 1U;
	volatile uint8_t x590 = 30U;
	int64_t x591 = 1LL;
	int16_t x592 = INT16_MAX;
	volatile int64_t t143 = -513280431606741LL;

    t143 = (((x589&x590)/x591)&x592);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x593 = -1;
	static uint8_t x594 = 2U;
	int8_t x595 = INT8_MAX;
	static volatile uint64_t t144 = 23LLU;

    t144 = (((x593&x594)/x595)&x596);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x598 = 90U;
	uint64_t x599 = 973512297LLU;
	uint64_t t145 = 35245187418399LLU;

    t145 = (((x597&x598)/x599)&x600);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = 35;
	static uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MAX;
	int16_t x604 = INT16_MAX;
	int32_t t146 = -5422;

    t146 = (((x601&x602)/x603)&x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x605 = INT32_MAX;
	static volatile int64_t x606 = 53563439512196LL;
	int64_t x607 = INT64_MAX;
	volatile int64_t t147 = 14798115LL;

    t147 = (((x605&x606)/x607)&x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x609 = UINT32_MAX;
	volatile uint32_t x610 = 55986U;
	volatile int8_t x611 = INT8_MIN;
	int64_t x612 = -605864783193LL;
	int64_t t148 = 0LL;

    t148 = (((x609&x610)/x611)&x612);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = -1;
	int32_t x614 = -30;
	static int16_t x615 = INT16_MIN;
	static volatile int8_t x616 = INT8_MIN;
	volatile int32_t t149 = -640024;

    t149 = (((x613&x614)/x615)&x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = INT64_MIN;
	uint32_t x620 = 1554549728U;
	int64_t t150 = -81624751233878456LL;

    t150 = (((x617&x618)/x619)&x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x623 = -44689713LL;
	int8_t x624 = -1;
	static volatile int64_t t151 = -18LL;

    t151 = (((x621&x622)/x623)&x624);

    if (t151 != -48LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = UINT64_MAX;
	int64_t x627 = INT64_MIN;
	int8_t x628 = 32;
	uint64_t t152 = 7LLU;

    t152 = (((x625&x626)/x627)&x628);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x630 = INT32_MIN;
	static int8_t x631 = 4;
	volatile int64_t x632 = INT64_MIN;

    t153 = (((x629&x630)/x631)&x632);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x641 = 268631263LLU;
	int8_t x644 = INT8_MIN;
	volatile uint64_t t154 = 114856140002802583LLU;

    t154 = (((x641&x642)/x643)&x644);

    if (t154 != 24418048LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x645 = INT64_MAX;
	uint64_t x647 = UINT64_MAX;
	static int64_t x648 = INT64_MIN;
	uint64_t t155 = 18503LLU;

    t155 = (((x645&x646)/x647)&x648);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = -1701996LL;
	int8_t x650 = INT8_MIN;
	volatile uint32_t x651 = 69446U;
	int16_t x652 = -244;
	volatile int64_t t156 = 7858761358380493LL;

    t156 = (((x649&x650)/x651)&x652);

    if (t156 != -248LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x654 = 98U;
	static int16_t x655 = -1;
	volatile int32_t x656 = 1;
	uint32_t t157 = 17049430U;

    t157 = (((x653&x654)/x655)&x656);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x657 = 54U;
	int16_t x658 = -1;
	static uint64_t x659 = 99702194851LLU;
	int8_t x660 = -1;
	uint64_t t158 = 71428007716584475LLU;

    t158 = (((x657&x658)/x659)&x660);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x661 = -6;
	static uint16_t x662 = UINT16_MAX;
	int64_t t159 = 397248691LL;

    t159 = (((x661&x662)/x663)&x664);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x665 = 105449056642928892LLU;
	int32_t x666 = INT32_MAX;
	uint32_t x667 = 1189666993U;
	uint64_t t160 = 15LLU;

    t160 = (((x665&x666)/x667)&x668);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = -1;
	int16_t x670 = -29;
	static int8_t x671 = INT8_MIN;
	static uint32_t x672 = 182827U;

    t161 = (((x669&x670)/x671)&x672);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x673 = 134U;
	uint16_t x674 = 6U;
	uint64_t x675 = UINT64_MAX;
	uint32_t x676 = 500014U;
	volatile uint64_t t162 = 56958117892824127LLU;

    t162 = (((x673&x674)/x675)&x676);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x679 = INT32_MIN;
	uint32_t x680 = UINT32_MAX;
	volatile uint32_t t163 = 10809677U;

    t163 = (((x677&x678)/x679)&x680);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x681 = 26LLU;
	volatile int32_t x682 = INT32_MAX;
	int64_t x683 = -246626877592LL;
	uint64_t x684 = 76530893LLU;
	volatile uint64_t t164 = 1938LLU;

    t164 = (((x681&x682)/x683)&x684);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x685 = -31479;
	uint32_t x686 = 5599119U;
	int64_t x687 = -1LL;
	int16_t x688 = INT16_MAX;

    t165 = (((x685&x686)/x687)&x688);

    if (t165 != 31479LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x689 = UINT32_MAX;
	int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;

    t166 = (((x689&x690)/x691)&x692);

    if (t166 != -131071LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x693 = 6U;
	volatile uint64_t x694 = 3431LLU;
	static uint32_t x695 = 2051U;
	int64_t x696 = 420739405787758608LL;
	uint64_t t167 = 5666LLU;

    t167 = (((x693&x694)/x695)&x696);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x697 = UINT16_MAX;
	volatile uint8_t x698 = UINT8_MAX;
	int8_t x699 = INT8_MIN;
	uint16_t x700 = UINT16_MAX;

    t168 = (((x697&x698)/x699)&x700);

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x701 = -1;
	volatile int32_t x702 = -1;
	uint32_t x703 = UINT32_MAX;
	static volatile int8_t x704 = INT8_MAX;

    t169 = (((x701&x702)/x703)&x704);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = -822901402840985LL;
	uint16_t x706 = 30778U;
	int8_t x707 = -1;
	uint64_t x708 = 4156290064558LLU;
	uint64_t t170 = 306353871LLU;

    t170 = (((x705&x706)/x707)&x708);

    if (t170 != 4156290048142LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x711 = INT64_MIN;

    t171 = (((x709&x710)/x711)&x712);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x713 = -1;
	uint8_t x714 = 91U;
	int64_t x715 = -1LL;
	int8_t x716 = INT8_MIN;
	volatile int64_t t172 = 154032530164875608LL;

    t172 = (((x713&x714)/x715)&x716);

    if (t172 != -128LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x717 = INT64_MIN;
	uint8_t x718 = 51U;
	int8_t x720 = INT8_MIN;
	static volatile int64_t t173 = -25LL;

    t173 = (((x717&x718)/x719)&x720);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x722 = INT16_MIN;
	int32_t x723 = INT32_MIN;
	uint8_t x724 = 110U;
	int32_t t174 = 0;

    t174 = (((x721&x722)/x723)&x724);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x725 = 0U;
	static int32_t x727 = 26575017;
	volatile uint8_t x728 = 6U;
	volatile uint32_t t175 = 2468U;

    t175 = (((x725&x726)/x727)&x728);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x729 = -1663247918974LL;
	int8_t x730 = INT8_MAX;
	uint8_t x731 = UINT8_MAX;
	int32_t x732 = -44;
	volatile int64_t t176 = -14498639LL;

    t176 = (((x729&x730)/x731)&x732);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x733 = UINT8_MAX;
	uint32_t x734 = UINT32_MAX;
	volatile int64_t x735 = INT64_MIN;
	uint32_t x736 = 1996U;
	int64_t t177 = -71887LL;

    t177 = (((x733&x734)/x735)&x736);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x737 = -1;
	static int32_t x738 = -1;
	int64_t x739 = 302223867LL;
	int16_t x740 = INT16_MIN;

    t178 = (((x737&x738)/x739)&x740);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = INT64_MIN;
	static uint16_t x742 = 0U;
	int8_t x743 = -1;
	int16_t x744 = INT16_MIN;
	volatile int64_t t179 = -783849658521LL;

    t179 = (((x741&x742)/x743)&x744);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x745 = INT16_MAX;
	static uint32_t x746 = UINT32_MAX;
	uint64_t t180 = 6003625764368417572LLU;

    t180 = (((x745&x746)/x747)&x748);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = -1;
	int32_t x751 = INT32_MIN;
	int32_t x752 = INT32_MIN;
	volatile int32_t t181 = -4602484;

    t181 = (((x749&x750)/x751)&x752);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = INT64_MAX;
	volatile int16_t x754 = INT16_MIN;
	static int32_t x755 = INT32_MAX;
	int8_t x756 = 0;
	int64_t t182 = -2246655LL;

    t182 = (((x753&x754)/x755)&x756);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x757 = 23U;
	uint64_t x759 = UINT64_MAX;
	static uint32_t x760 = 204U;
	volatile uint64_t t183 = 15127LLU;

    t183 = (((x757&x758)/x759)&x760);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x763 = INT64_MIN;
	static int64_t x764 = -1LL;
	volatile int64_t t184 = 89655839438050313LL;

    t184 = (((x761&x762)/x763)&x764);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x766 = INT32_MAX;
	volatile int64_t t185 = 30904LL;

    t185 = (((x765&x766)/x767)&x768);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x769 = -1;
	uint32_t x770 = 15073808U;
	uint8_t x771 = 105U;
	static uint64_t x772 = 724985469958417725LLU;
	volatile uint64_t t186 = 50464696394678LLU;

    t186 = (((x769&x770)/x771)&x772);

    if (t186 != 8200LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x774 = 1684;
	int64_t x775 = 3339169LL;
	uint8_t x776 = UINT8_MAX;
	volatile int64_t t187 = 51321046056912LL;

    t187 = (((x773&x774)/x775)&x776);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x777 = 6815U;
	int64_t x778 = INT64_MAX;
	static int8_t x779 = INT8_MAX;
	volatile uint16_t x780 = 5381U;
	volatile int64_t t188 = -294536791726455LL;

    t188 = (((x777&x778)/x779)&x780);

    if (t188 != 5LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = INT64_MAX;
	volatile uint64_t x782 = UINT64_MAX;
	int16_t x784 = INT16_MIN;
	uint64_t t189 = 2LLU;

    t189 = (((x781&x782)/x783)&x784);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x785 = 43U;
	int16_t x786 = -7;
	static int32_t x787 = -1;
	volatile int16_t x788 = INT16_MIN;
	int32_t t190 = -865037;

    t190 = (((x785&x786)/x787)&x788);

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = 776206;
	int16_t x790 = -1885;
	uint8_t x791 = 127U;
	uint64_t x792 = 566183LLU;

    t191 = (((x789&x790)/x791)&x792);

    if (t191 != 903LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x793 = INT32_MIN;
	uint64_t x794 = 349043084525LLU;
	uint32_t x795 = UINT32_MAX;
	int32_t x796 = INT32_MIN;

    t192 = (((x793&x794)/x795)&x796);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x797 = 31U;
	volatile uint16_t x798 = 4040U;
	int32_t x799 = -975;
	static volatile int32_t x800 = 1036;
	static volatile int32_t t193 = 47845;

    t193 = (((x797&x798)/x799)&x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x801 = 1U;
	static int32_t x802 = INT32_MIN;
	int16_t x803 = INT16_MAX;
	int8_t x804 = -1;
	int32_t t194 = -620;

    t194 = (((x801&x802)/x803)&x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	volatile int8_t x810 = -20;
	static uint64_t x811 = 1389024891LLU;
	volatile uint64_t x812 = 987LLU;
	volatile uint64_t t195 = 201776969LLU;

    t195 = (((x809&x810)/x811)&x812);

    if (t195 != 3LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x814 = 45118U;
	int16_t x815 = -1;
	uint32_t x816 = UINT32_MAX;
	volatile uint32_t t196 = 6269161U;

    t196 = (((x813&x814)/x815)&x816);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x817 = 1890197196978889037LLU;
	static uint32_t x818 = 1U;
	int32_t x820 = -1;
	uint64_t t197 = 2017976LLU;

    t197 = (((x817&x818)/x819)&x820);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x821 = 6693177LLU;
	int16_t x823 = -1;
	uint64_t t198 = 6678217793LLU;

    t198 = (((x821&x822)/x823)&x824);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x825 = 9417U;
	volatile int32_t x826 = -7861445;
	uint16_t x827 = UINT16_MAX;
	int32_t x828 = 1003605;

    t199 = (((x825&x826)/x827)&x828);

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

