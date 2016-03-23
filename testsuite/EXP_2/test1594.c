
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

static volatile int16_t x4 = -410;
volatile int8_t x5 = -1;
int16_t x9 = INT16_MIN;
static uint32_t x10 = 269118U;
volatile uint64_t t4 = 590606742908847780LLU;
uint16_t x22 = 126U;
int64_t x29 = -1LL;
int64_t t7 = 0LL;
int8_t x35 = -20;
int64_t x41 = -1LL;
static int8_t x43 = INT8_MAX;
int32_t x73 = INT32_MAX;
uint32_t x75 = 60248U;
volatile int32_t t17 = 140315696;
int16_t x78 = -1;
int16_t x83 = INT16_MAX;
static int64_t x90 = INT64_MIN;
uint16_t x103 = UINT16_MAX;
uint32_t t22 = 15U;
uint8_t x117 = 3U;
int32_t x120 = INT32_MAX;
int32_t t25 = 1;
int64_t x122 = -1LL;
static uint8_t x126 = UINT8_MAX;
uint64_t t28 = 1465345252LLU;
uint16_t x134 = 269U;
uint64_t x135 = 682LLU;
volatile int64_t t29 = -13975204357601LL;
static int8_t x138 = INT8_MIN;
volatile int32_t t30 = 1011474930;
volatile int32_t x144 = INT32_MIN;
static volatile uint64_t x145 = 4516734818771626827LLU;
volatile uint32_t t33 = 1219U;
volatile uint64_t t34 = 39626LLU;
int64_t x157 = -1LL;
volatile int32_t x158 = 3366;
static volatile int64_t t35 = -1402737LL;
int32_t x168 = -28282;
volatile int32_t t37 = 26;
volatile int16_t x174 = INT16_MAX;
volatile uint8_t x176 = 17U;
int16_t x181 = -1;
volatile int32_t t41 = -39;
static int16_t x187 = INT16_MIN;
uint64_t x196 = UINT64_MAX;
uint64_t t44 = 2009439060506457LLU;
volatile uint8_t x200 = 25U;
int8_t x201 = INT8_MIN;
static uint16_t x203 = UINT16_MAX;
volatile int32_t t46 = 1;
volatile uint8_t x207 = 31U;
uint32_t t47 = 1691097155U;
volatile int32_t t49 = -235760614;
static volatile int32_t x248 = -722974;
int64_t x249 = INT64_MAX;
int16_t x253 = INT16_MIN;
int32_t x256 = INT32_MIN;
static int32_t x259 = INT32_MIN;
static int32_t x265 = INT32_MAX;
int16_t x274 = INT16_MAX;
static volatile int32_t t62 = 10756957;
int8_t x282 = INT8_MAX;
static int32_t x284 = 890077932;
int32_t t64 = -16;
static uint32_t x290 = 639827421U;
volatile uint8_t x291 = 4U;
int32_t t66 = 1477;
static int32_t x295 = -139;
int64_t x297 = INT64_MAX;
static int16_t x303 = 231;
int16_t x304 = 747;
uint8_t x309 = 1U;
int8_t x311 = -1;
int8_t x318 = -1;
static int8_t x320 = -1;
volatile int32_t x337 = INT32_MAX;
int32_t x350 = INT32_MIN;
static int64_t x352 = -89720431LL;
int8_t x354 = INT8_MAX;
volatile uint64_t x355 = UINT64_MAX;
int16_t x357 = -1;
int16_t x362 = -1;
volatile int32_t t82 = 883;
int16_t x367 = INT16_MIN;
uint32_t x369 = 202U;
uint32_t t84 = 634U;
volatile int16_t x377 = INT16_MIN;
int16_t x385 = 3405;
static uint64_t x387 = 35557LLU;
static int64_t t89 = -361523864536LL;
volatile int32_t x395 = INT32_MIN;
int16_t x400 = INT16_MAX;
int32_t t91 = 1;
uint64_t t94 = 8012120634749791302LLU;
uint8_t x414 = 6U;
volatile uint64_t t95 = 1167040018768LLU;
int32_t t97 = -551;
int8_t x425 = 17;
volatile int64_t x435 = INT64_MIN;
volatile uint64_t t99 = 19LLU;
int32_t x438 = INT32_MIN;
uint64_t x456 = 32342672785251LLU;
int32_t x457 = INT32_MIN;
volatile int16_t x467 = 255;
int8_t x470 = INT8_MIN;
volatile uint64_t t108 = 1328LLU;
static volatile int32_t t109 = 24594484;
static int16_t x490 = 22;
volatile uint32_t x496 = 1U;
int64_t x501 = 29056467733296706LL;
uint8_t x502 = UINT8_MAX;
volatile int64_t t116 = 2623248170308LL;
volatile int64_t t117 = -2692447460LL;
volatile int32_t x509 = INT32_MIN;
static volatile int64_t t118 = 121003556035878LL;
volatile uint16_t x516 = 4U;
int32_t x525 = -1;
int32_t x527 = -1;
int64_t x537 = INT64_MAX;
static int16_t x538 = 1;
volatile int32_t t126 = 14833;
uint8_t x549 = UINT8_MAX;
int16_t x554 = -13102;
uint32_t x559 = 350271U;
int8_t x560 = INT8_MAX;
static int64_t x564 = 1050354624LL;
int16_t x568 = INT16_MIN;
volatile uint64_t x575 = 195189LLU;
static volatile int64_t t134 = 2LL;
int32_t x598 = INT32_MIN;
volatile int16_t x602 = 3379;
static volatile int16_t x608 = INT16_MAX;
uint32_t x612 = 21512506U;
int32_t x616 = 261229445;
static uint32_t x625 = 559U;
uint64_t x626 = 3776995749LLU;
int64_t x630 = INT64_MIN;
int8_t x638 = INT8_MAX;
int32_t x639 = INT32_MIN;
uint8_t x643 = UINT8_MAX;
int64_t x646 = INT64_MIN;
int16_t x651 = -1;
int32_t x655 = 117132;
uint8_t x665 = 2U;
int32_t x666 = INT32_MIN;
uint16_t x670 = UINT16_MAX;
int16_t x676 = 66;
uint32_t t160 = 721U;
uint64_t x690 = 126308394212LLU;
volatile int64_t x697 = -452048057491665732LL;
int32_t x708 = -9504;
int16_t x717 = INT16_MAX;
static uint16_t x722 = 8U;
uint32_t x726 = 6391U;
static uint16_t x727 = UINT16_MAX;
static int32_t x729 = -1;
volatile uint8_t x730 = 30U;
int8_t x732 = 24;
int8_t x733 = INT8_MIN;
static int64_t x738 = 3979LL;
static int16_t x739 = 356;
volatile int32_t x743 = INT32_MIN;
int64_t x760 = INT64_MAX;
uint32_t x769 = UINT32_MAX;
static uint64_t x770 = 5538819720953731LLU;
volatile int16_t x771 = INT16_MIN;
uint8_t x773 = 59U;
static int64_t x775 = INT64_MIN;
int8_t x779 = 13;
static int32_t x780 = INT32_MIN;
static int32_t x782 = INT32_MAX;
volatile int64_t x783 = -25589237302944LL;
volatile int32_t x788 = INT32_MAX;
volatile int32_t t185 = -798;
static volatile uint64_t t187 = 32642LLU;
uint16_t x804 = UINT16_MAX;
uint16_t x807 = 74U;
int32_t x809 = INT32_MIN;
volatile uint8_t x811 = UINT8_MAX;
int8_t x816 = 12;
int32_t t191 = 19870;
static volatile int64_t x818 = -152895LL;
int32_t x823 = INT32_MIN;
int8_t x838 = 1;
int64_t x840 = INT64_MAX;
volatile int32_t t197 = 15937871;
uint64_t x845 = UINT64_MAX;
static volatile int32_t x846 = -1;
static int64_t t199 = 25818LL;


void f0(void) {
    	int8_t x1 = 6;
	static uint16_t x2 = 3910U;
	volatile int16_t x3 = -2;
	volatile int32_t t0 = 171;

    t0 = ((x1-(x2>x3))&x4);

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -11;
	static int16_t x7 = INT16_MIN;
	int64_t x8 = -42LL;
	volatile int64_t t1 = -1584323LL;

    t1 = ((x5-(x6>x7))&x8);

    if (t1 != -42LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = INT32_MAX;
	int64_t x12 = -1LL;
	static int64_t t2 = 130LL;

    t2 = ((x9-(x10>x11))&x12);

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	uint32_t x14 = 35444U;
	int16_t x15 = 1;
	static int8_t x16 = INT8_MAX;
	volatile int64_t t3 = 3973506799LL;

    t3 = ((x13-(x14>x15))&x16);

    if (t3 != 126LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 10390049893335539LLU;
	volatile int64_t x18 = 26778LL;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = -328;

    t4 = ((x17-(x18>x19))&x20);

    if (t4 != 10390049893335216LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	volatile uint32_t x23 = 348U;
	int64_t x24 = INT64_MIN;
	static volatile int64_t t5 = INT64_MIN;

    t5 = ((x21-(x22>x23))&x24);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint64_t x26 = 161464498821LLU;
	volatile int64_t x27 = -1LL;
	static int8_t x28 = 21;
	static int32_t t6 = -20214;

    t6 = ((x25-(x26>x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -40;
	int16_t x31 = -1;
	int64_t x32 = -1LL;

    t7 = ((x29-(x30>x31))&x32);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MIN;
	volatile uint64_t x36 = 79922770183371LLU;
	volatile uint64_t t8 = 208234163755LLU;

    t8 = ((x33-(x34>x35))&x36);

    if (t8 != 203LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 1326U;
	int8_t x38 = -1;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 6LLU;
	volatile uint64_t t9 = 1859142229200497139LLU;

    t9 = ((x37-(x38>x39))&x40);

    if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 3;
	static volatile uint16_t x44 = 43U;
	int64_t t10 = -4527882673386607554LL;

    t10 = ((x41-(x42>x43))&x44);

    if (t10 != 43LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = INT32_MIN;
	int8_t x50 = 1;
	static volatile int32_t x51 = 196694560;
	int8_t x52 = -1;
	static int32_t t11 = INT32_MIN;

    t11 = ((x49-(x50>x51))&x52);

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 222625377U;
	volatile uint64_t x54 = UINT64_MAX;
	int16_t x55 = 17;
	uint8_t x56 = 6U;
	volatile uint32_t t12 = 29374936U;

    t12 = ((x53-(x54>x55))&x56);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 1U;
	int32_t x58 = -3257671;
	static int8_t x59 = INT8_MIN;
	volatile uint64_t x60 = 136197317856298492LLU;
	uint64_t t13 = 741LLU;

    t13 = ((x57-(x58>x59))&x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	uint8_t x62 = 21U;
	static uint64_t x63 = 2716951638685291LLU;
	int8_t x64 = -1;
	volatile int32_t t14 = -196630;

    t14 = ((x61-(x62>x63))&x64);

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = -1;
	int8_t x66 = INT8_MAX;
	int32_t x67 = 4407;
	int64_t x68 = -330LL;
	volatile int64_t t15 = -296852572380LL;

    t15 = ((x65-(x66>x67))&x68);

    if (t15 != -330LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = INT16_MIN;
	static uint16_t x70 = 911U;
	uint32_t x71 = 938145U;
	uint64_t x72 = 9848023168330104LLU;
	uint64_t t16 = 0LLU;

    t16 = ((x69-(x70>x71))&x72);

    if (t16 != 9848023168319488LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x74 = 17U;
	static volatile int16_t x76 = INT16_MIN;

    t17 = ((x73-(x74>x75))&x76);

    if (t17 != 2147450880) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = -3286476043LL;
	int32_t x79 = INT32_MAX;
	static int64_t x80 = INT64_MAX;
	int64_t t18 = -8LL;

    t18 = ((x77-(x78>x79))&x80);

    if (t18 != 9223372033568299765LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	static int32_t x84 = INT32_MIN;
	int32_t t19 = INT32_MIN;

    t19 = ((x81-(x82>x83))&x84);

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	uint64_t x91 = 37498676969696041LLU;
	int8_t x92 = -3;
	volatile int32_t t20 = -17234;

    t20 = ((x89-(x90>x91))&x92);

    if (t20 != -131) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	uint64_t x102 = UINT64_MAX;
	uint32_t x104 = UINT32_MAX;
	uint32_t t21 = 6347092U;

    t21 = ((x101-(x102>x103))&x104);

    if (t21 != 4294967294U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = -1;
	volatile int32_t x108 = -1019318;

    t22 = ((x105-(x106>x107))&x108);

    if (t22 != 4293947978U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = -356;
	volatile uint8_t x110 = 64U;
	int64_t x111 = -1LL;
	volatile uint64_t x112 = UINT64_MAX;
	uint64_t t23 = 342938LLU;

    t23 = ((x109-(x110>x111))&x112);

    if (t23 != 18446744073709551259LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = 0;
	static int32_t x114 = INT32_MAX;
	static uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;
	static int32_t t24 = 3743192;

    t24 = ((x113-(x114>x115))&x116);

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x118 = 118299898LL;
	int8_t x119 = INT8_MIN;

    t25 = ((x117-(x118>x119))&x120);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = 928459641080LLU;
	volatile int8_t x123 = -1;
	int8_t x124 = -1;
	volatile uint64_t t26 = 32929LLU;

    t26 = ((x121-(x122>x123))&x124);

    if (t26 != 928459641080LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = 1;
	volatile int32_t x127 = -1;
	int32_t x128 = INT32_MAX;
	static int32_t t27 = -271;

    t27 = ((x125-(x126>x127))&x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x129 = 1138LLU;
	uint32_t x130 = 126261U;
	volatile uint8_t x131 = 91U;
	int64_t x132 = INT64_MAX;

    t28 = ((x129-(x130>x131))&x132);

    if (t28 != 1137LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x133 = 5087U;
	static int64_t x136 = INT64_MIN;

    t29 = ((x133-(x134>x135))&x136);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = INT16_MAX;
	static int64_t x139 = INT64_MIN;
	volatile int8_t x140 = 9;

    t30 = ((x137-(x138>x139))&x140);

    if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	volatile uint64_t t31 = 14389464989494155LLU;

    t31 = ((x141-(x142>x143))&x144);

    if (t31 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x146 = 86U;
	volatile int32_t x147 = INT32_MIN;
	int8_t x148 = INT8_MIN;
	volatile uint64_t t32 = 2223162765281LLU;

    t32 = ((x145-(x146>x147))&x148);

    if (t32 != 4516734818771626752LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x149 = INT8_MIN;
	uint64_t x150 = 78LLU;
	uint16_t x151 = 54U;
	uint32_t x152 = 3393U;

    t33 = ((x149-(x150>x151))&x152);

    if (t33 != 3393U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x153 = 437856U;
	uint16_t x154 = 11U;
	volatile int16_t x155 = INT16_MAX;
	volatile uint64_t x156 = 371096LLU;

    t34 = ((x153-(x154>x155))&x156);

    if (t34 != 305152LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x159 = 3106U;
	uint16_t x160 = 0U;

    t35 = ((x157-(x158>x159))&x160);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x161 = 197532321U;
	uint16_t x162 = 54U;
	volatile int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int64_t t36 = 335026262LL;

    t36 = ((x161-(x162>x163))&x164);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x165 = INT16_MIN;
	int64_t x166 = -724324325871809058LL;
	uint32_t x167 = 4966U;

    t37 = ((x165-(x166>x167))&x168);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = INT8_MAX;
	int64_t x170 = -11665111218487512LL;
	volatile int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MIN;
	static int32_t t38 = 1;

    t38 = ((x169-(x170>x171))&x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = 3;
	uint8_t x175 = 81U;
	int32_t t39 = 492734;

    t39 = ((x173-(x174>x175))&x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MIN;
	static volatile uint8_t x179 = 34U;
	static uint64_t x180 = UINT64_MAX;
	static uint64_t t40 = 469081830LLU;

    t40 = ((x177-(x178>x179))&x180);

    if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x182 = -7;
	int32_t x183 = INT32_MAX;
	volatile int8_t x184 = INT8_MAX;

    t41 = ((x181-(x182>x183))&x184);

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = 1962066528784153LL;
	static uint64_t x186 = UINT64_MAX;
	static int64_t x188 = -1LL;
	static int64_t t42 = 735126212291LL;

    t42 = ((x185-(x186>x187))&x188);

    if (t42 != 1962066528784152LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x189 = INT64_MAX;
	int16_t x190 = -109;
	uint8_t x191 = 0U;
	uint32_t x192 = 573024005U;
	volatile int64_t t43 = -46315826LL;

    t43 = ((x189-(x190>x191))&x192);

    if (t43 != 573024005LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x193 = INT16_MIN;
	uint32_t x194 = 109103U;
	volatile uint64_t x195 = 264516787548546327LLU;

    t44 = ((x193-(x194>x195))&x196);

    if (t44 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x197 = UINT64_MAX;
	static volatile int32_t x198 = INT32_MAX;
	static int64_t x199 = -20748932998691LL;
	uint64_t t45 = 2568010627682LLU;

    t45 = ((x197-(x198>x199))&x200);

    if (t45 != 24LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x202 = UINT32_MAX;
	volatile uint16_t x204 = 2545U;

    t46 = ((x201-(x202>x203))&x204);

    if (t46 != 2417) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x205 = -1;
	uint64_t x206 = 5609LLU;
	uint32_t x208 = 1021U;

    t47 = ((x205-(x206>x207))&x208);

    if (t47 != 1020U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 0U;
	int32_t x210 = 31453185;
	int16_t x211 = -1;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

    t48 = ((x209-(x210>x211))&x212);

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x217 = 3;
	int16_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;

    t49 = ((x217-(x218>x219))&x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = INT16_MAX;
	uint64_t x222 = 160775330033LLU;
	static volatile int64_t x223 = 33575851867023718LL;
	int16_t x224 = -1;
	volatile int32_t t50 = 193182;

    t50 = ((x221-(x222>x223))&x224);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = -1;
	uint8_t x226 = 6U;
	int16_t x227 = -9;
	static volatile uint16_t x228 = 1564U;
	int32_t t51 = 1;

    t51 = ((x225-(x226>x227))&x228);

    if (t51 != 1564) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = 5;
	volatile uint8_t x234 = UINT8_MAX;
	int8_t x235 = 5;
	volatile int64_t x236 = 1LL;
	volatile int64_t t52 = 38121LL;

    t52 = ((x233-(x234>x235))&x236);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = INT32_MAX;
	static volatile int8_t x238 = -1;
	int8_t x239 = -1;
	static volatile uint8_t x240 = 1U;
	int32_t t53 = -1;

    t53 = ((x237-(x238>x239))&x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = 1;
	volatile int16_t x243 = INT16_MAX;
	volatile int16_t x244 = -805;
	int32_t t54 = 5;

    t54 = ((x241-(x242>x243))&x244);

    if (t54 != 64731) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x245 = 1037138996601753LLU;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = 5U;
	volatile uint64_t t55 = 460424513697499LLU;

    t55 = ((x245-(x246>x247))&x248);

    if (t55 != 1037138996011904LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x250 = INT16_MIN;
	int64_t x251 = -1LL;
	uint8_t x252 = 3U;
	volatile int64_t t56 = 19LL;

    t56 = ((x249-(x250>x251))&x252);

    if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1;
	volatile int32_t t57 = INT32_MIN;

    t57 = ((x253-(x254>x255))&x256);

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x257 = 99794866U;
	int8_t x258 = 11;
	int64_t x260 = -1LL;
	int64_t t58 = -9LL;

    t58 = ((x257-(x258>x259))&x260);

    if (t58 != 99794865LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x261 = INT32_MAX;
	uint8_t x262 = 44U;
	int16_t x263 = -1;
	static uint64_t x264 = 56359310403439802LLU;
	volatile uint64_t t59 = 80167LLU;

    t59 = ((x261-(x262>x263))&x264);

    if (t59 != 73534650LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x266 = -10729;
	uint8_t x267 = 53U;
	static uint32_t x268 = UINT32_MAX;
	static volatile uint32_t t60 = 170U;

    t60 = ((x265-(x266>x267))&x268);

    if (t60 != 2147483647U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	static int64_t x272 = 32457502157235LL;
	volatile int64_t t61 = 442998LL;

    t61 = ((x269-(x270>x271))&x272);

    if (t61 != 32457502157107LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x273 = -285;
	int32_t x275 = INT32_MIN;
	volatile int32_t x276 = -720504877;

    t62 = ((x273-(x274>x275))&x276);

    if (t62 != -720505150) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x277 = 0;
	volatile int32_t x278 = INT32_MIN;
	uint32_t x279 = 2081030U;
	volatile int16_t x280 = INT16_MIN;
	volatile int32_t t63 = -1689198;

    t63 = ((x277-(x278>x279))&x280);

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x281 = INT8_MAX;
	int64_t x283 = INT64_MIN;

    t64 = ((x281-(x282>x283))&x284);

    if (t64 != 108) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MAX;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MIN;
	static int32_t t65 = 8920;

    t65 = ((x285-(x286>x287))&x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MIN;
	volatile uint8_t x292 = 0U;

    t66 = ((x289-(x290>x291))&x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x293 = 24U;
	uint32_t x294 = 3460U;
	uint32_t x296 = 30044U;
	uint32_t t67 = 18281U;

    t67 = ((x293-(x294>x295))&x296);

    if (t67 != 24U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t68 = -17462063728926LL;

    t68 = ((x297-(x298>x299))&x300);

    if (t68 != 65534LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x301 = 725U;
	int64_t x302 = -1LL;
	uint32_t t69 = 2283656U;

    t69 = ((x301-(x302>x303))&x304);

    if (t69 != 705U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x305 = 33367305U;
	uint64_t x306 = 508864061974102LLU;
	int8_t x307 = INT8_MAX;
	uint8_t x308 = 2U;
	uint32_t t70 = 73387U;

    t70 = ((x305-(x306>x307))&x308);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x310 = -57;
	int64_t x312 = INT64_MIN;
	int64_t t71 = -1530213880338LL;

    t71 = ((x309-(x310>x311))&x312);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = INT16_MIN;
	volatile uint8_t x314 = 101U;
	uint32_t x315 = 2U;
	uint8_t x316 = 1U;
	volatile int32_t t72 = -855;

    t72 = ((x313-(x314>x315))&x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x317 = -1;
	uint16_t x319 = 510U;
	int32_t t73 = -14622021;

    t73 = ((x317-(x318>x319))&x320);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = -348041431197LL;
	uint32_t x326 = 13403087U;
	uint16_t x327 = 18994U;
	uint64_t x328 = 23169726492LLU;
	volatile uint64_t t74 = 72673018897280084LLU;

    t74 = ((x325-(x326>x327))&x328);

    if (t74 != 18874707968LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x333 = -1;
	volatile int64_t x334 = -2LL;
	volatile int32_t x335 = INT32_MAX;
	volatile uint8_t x336 = 3U;
	int32_t t75 = -1513;

    t75 = ((x333-(x334>x335))&x336);

    if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x338 = INT64_MIN;
	static int8_t x339 = -1;
	int32_t x340 = -1;
	volatile int32_t t76 = INT32_MAX;

    t76 = ((x337-(x338>x339))&x340);

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x341 = 7289580U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MAX;
	int8_t x344 = INT8_MAX;
	uint32_t t77 = 197U;

    t77 = ((x341-(x342>x343))&x344);

    if (t77 != 108U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x345 = -1;
	volatile uint8_t x346 = 1U;
	int64_t x347 = 25037LL;
	uint32_t x348 = 2248721U;
	volatile uint32_t t78 = 417421497U;

    t78 = ((x345-(x346>x347))&x348);

    if (t78 != 2248721U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x349 = INT32_MAX;
	int32_t x351 = 74654;
	int64_t t79 = 287070809575600925LL;

    t79 = ((x349-(x350>x351))&x352);

    if (t79 != 2057763217LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t80 = 25522970;

    t80 = ((x353-(x354>x355))&x356);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x358 = INT64_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile int8_t x360 = 22;
	int32_t t81 = 0;

    t81 = ((x357-(x358>x359))&x360);

    if (t81 != 22) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x361 = 31;
	volatile int8_t x363 = INT8_MIN;
	static uint16_t x364 = 2956U;

    t82 = ((x361-(x362>x363))&x364);

    if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = INT16_MAX;
	static uint8_t x366 = 104U;
	static volatile uint8_t x368 = 4U;
	volatile int32_t t83 = -9;

    t83 = ((x365-(x366>x367))&x368);

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 1913U;
	int16_t x372 = INT16_MIN;

    t84 = ((x369-(x370>x371))&x372);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x373 = 1;
	static uint32_t x374 = 495U;
	static int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t85 = -57308950LL;

    t85 = ((x373-(x374>x375))&x376);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x378 = INT8_MIN;
	int8_t x379 = -2;
	volatile int8_t x380 = INT8_MIN;
	static int32_t t86 = -14924580;

    t86 = ((x377-(x378>x379))&x380);

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	static volatile int64_t x383 = INT64_MIN;
	volatile int64_t x384 = INT64_MAX;
	volatile int64_t t87 = -5461679503886LL;

    t87 = ((x381-(x382>x383))&x384);

    if (t87 != 126LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x386 = -1LL;
	volatile int16_t x388 = -1;
	volatile int32_t t88 = -36;

    t88 = ((x385-(x386>x387))&x388);

    if (t88 != 3404) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = INT64_MAX;
	uint64_t x390 = UINT64_MAX;
	static int8_t x391 = -1;
	uint16_t x392 = UINT16_MAX;

    t89 = ((x389-(x390>x391))&x392);

    if (t89 != 65535LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 137U;
	int8_t x394 = INT8_MIN;
	int16_t x396 = 39;
	static uint32_t t90 = 3778U;

    t90 = ((x393-(x394>x395))&x396);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = INT32_MIN;
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;

    t91 = ((x397-(x398>x399))&x400);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x401 = -522245472;
	volatile int32_t x402 = 1206;
	uint32_t x403 = 25728857U;
	volatile int8_t x404 = -5;
	volatile int32_t t92 = -367;

    t92 = ((x401-(x402>x403))&x404);

    if (t92 != -522245472) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x405 = INT32_MAX;
	static uint16_t x406 = 3U;
	uint8_t x407 = 31U;
	int32_t x408 = -1;
	int32_t t93 = INT32_MAX;

    t93 = ((x405-(x406>x407))&x408);

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = 190LLU;
	uint8_t x410 = 70U;
	uint8_t x411 = 13U;
	int32_t x412 = -7198;

    t94 = ((x409-(x410>x411))&x412);

    if (t94 != 160LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x413 = 862LL;
	volatile uint16_t x415 = 1U;
	uint64_t x416 = 2LLU;

    t95 = ((x413-(x414>x415))&x416);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x417 = INT8_MAX;
	int16_t x418 = 8721;
	volatile int16_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	static int32_t t96 = 586639063;

    t96 = ((x417-(x418>x419))&x420);

    if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = INT16_MIN;
	static volatile uint64_t x422 = UINT64_MAX;
	static int16_t x423 = INT16_MIN;
	volatile int32_t x424 = INT32_MAX;

    t97 = ((x421-(x422>x423))&x424);

    if (t97 != 2147450879) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x426 = INT64_MAX;
	int8_t x427 = INT8_MIN;
	volatile uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t98 = 440671LLU;

    t98 = ((x425-(x426>x427))&x428);

    if (t98 != 16LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x433 = 43U;
	int8_t x434 = INT8_MIN;
	volatile uint64_t x436 = 147LLU;

    t99 = ((x433-(x434>x435))&x436);

    if (t99 != 2LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x437 = INT8_MIN;
	static volatile int16_t x439 = -1;
	uint32_t x440 = 725908U;
	volatile uint32_t t100 = 1U;

    t100 = ((x437-(x438>x439))&x440);

    if (t100 != 725888U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x441 = 78U;
	int32_t x442 = -1;
	int64_t x443 = INT64_MAX;
	volatile int8_t x444 = -1;
	int32_t t101 = 6024;

    t101 = ((x441-(x442>x443))&x444);

    if (t101 != 78) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x445 = 30719867LLU;
	int16_t x446 = -28;
	volatile int16_t x447 = INT16_MAX;
	uint64_t x448 = 74406683365979LLU;
	uint64_t t102 = 15288642LLU;

    t102 = ((x445-(x446>x447))&x448);

    if (t102 != 29626971LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x449 = INT16_MIN;
	static volatile uint8_t x450 = 61U;
	uint32_t x451 = 191636U;
	volatile int8_t x452 = INT8_MIN;
	volatile int32_t t103 = -1043884;

    t103 = ((x449-(x450>x451))&x452);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x453 = INT16_MAX;
	int16_t x454 = INT16_MIN;
	static int8_t x455 = INT8_MAX;
	volatile uint64_t t104 = 277841351333111LLU;

    t104 = ((x453-(x454>x455))&x456);

    if (t104 != 16227LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x458 = -26636029425992LL;
	int16_t x459 = INT16_MIN;
	int16_t x460 = -57;
	int32_t t105 = INT32_MIN;

    t105 = ((x457-(x458>x459))&x460);

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x461 = 327884;
	static int32_t x462 = INT32_MIN;
	int64_t x463 = -100367989589LL;
	int16_t x464 = -1;
	volatile int32_t t106 = 201675;

    t106 = ((x461-(x462>x463))&x464);

    if (t106 != 327883) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x465 = 3U;
	uint8_t x466 = UINT8_MAX;
	uint64_t x468 = UINT64_MAX;
	volatile uint64_t t107 = 1247387LLU;

    t107 = ((x465-(x466>x467))&x468);

    if (t107 != 3LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x469 = UINT64_MAX;
	static int32_t x471 = INT32_MIN;
	int16_t x472 = -1;

    t108 = ((x469-(x470>x471))&x472);

    if (t108 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x473 = 51282;
	static int8_t x474 = 2;
	int64_t x475 = INT64_MIN;
	int32_t x476 = -1;

    t109 = ((x473-(x474>x475))&x476);

    if (t109 != 51281) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x477 = INT8_MIN;
	static int16_t x478 = INT16_MAX;
	static volatile int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	static int32_t t110 = -5246929;

    t110 = ((x477-(x478>x479))&x480);

    if (t110 != -256) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MIN;
	uint32_t x483 = 427743U;
	uint8_t x484 = 23U;
	volatile int32_t t111 = -12496780;

    t111 = ((x481-(x482>x483))&x484);

    if (t111 != 23) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x485 = INT8_MAX;
	volatile int32_t x486 = INT32_MAX;
	uint8_t x487 = 94U;
	int16_t x488 = INT16_MIN;
	volatile int32_t t112 = -255;

    t112 = ((x485-(x486>x487))&x488);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x489 = 1;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = -981655509;
	volatile int32_t t113 = 1;

    t113 = ((x489-(x490>x491))&x492);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x493 = INT8_MIN;
	static uint16_t x494 = UINT16_MAX;
	static int16_t x495 = INT16_MIN;
	static uint32_t t114 = 52849U;

    t114 = ((x493-(x494>x495))&x496);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x497 = INT8_MIN;
	uint8_t x498 = UINT8_MAX;
	uint16_t x499 = 7305U;
	static int64_t x500 = INT64_MIN;
	static int64_t t115 = INT64_MIN;

    t115 = ((x497-(x498>x499))&x500);

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x503 = INT64_MIN;
	int16_t x504 = 12936;

    t116 = ((x501-(x502>x503))&x504);

    if (t116 != 12800LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x505 = INT16_MIN;
	int32_t x506 = 0;
	int8_t x507 = -1;
	static volatile int64_t x508 = 18524LL;

    t117 = ((x505-(x506>x507))&x508);

    if (t117 != 18524LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x510 = INT64_MIN;
	volatile int32_t x511 = INT32_MAX;
	int64_t x512 = -5354231829872LL;

    t118 = ((x509-(x510>x511))&x512);

    if (t118 != -5355824218112LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x513 = -1902;
	int8_t x514 = INT8_MAX;
	int16_t x515 = -1;
	volatile int32_t t119 = -13682;

    t119 = ((x513-(x514>x515))&x516);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x517 = 3619U;
	uint32_t x518 = 646628U;
	uint64_t x519 = 443368825LLU;
	uint16_t x520 = 25U;
	volatile int32_t t120 = -22442243;

    t120 = ((x517-(x518>x519))&x520);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x521 = INT8_MAX;
	int64_t x522 = INT64_MIN;
	static int16_t x523 = -122;
	uint32_t x524 = 1458406U;
	volatile uint32_t t121 = 1105U;

    t121 = ((x521-(x522>x523))&x524);

    if (t121 != 102U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x526 = 2;
	volatile int64_t x528 = 225169155581459431LL;
	static int64_t t122 = -4312LL;

    t122 = ((x525-(x526>x527))&x528);

    if (t122 != 225169155581459430LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 0U;
	uint32_t x531 = 3U;
	uint16_t x532 = UINT16_MAX;
	int32_t t123 = 410498;

    t123 = ((x529-(x530>x531))&x532);

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x533 = 124349978LLU;
	uint16_t x534 = 3U;
	static uint64_t x535 = 60033728LLU;
	int32_t x536 = -1;
	uint64_t t124 = 370911325495440LLU;

    t124 = ((x533-(x534>x535))&x536);

    if (t124 != 124349978LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x539 = UINT64_MAX;
	int64_t x540 = INT64_MIN;
	volatile int64_t t125 = -5LL;

    t125 = ((x537-(x538>x539))&x540);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x541 = 1;
	static int64_t x542 = INT64_MAX;
	uint8_t x543 = UINT8_MAX;
	int8_t x544 = INT8_MIN;

    t126 = ((x541-(x542>x543))&x544);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x550 = 3U;
	static int16_t x551 = INT16_MIN;
	static int32_t x552 = INT32_MIN;
	int32_t t127 = -6972;

    t127 = ((x549-(x550>x551))&x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x553 = 1;
	static int8_t x555 = -1;
	int64_t x556 = INT64_MIN;
	int64_t t128 = -20242047883LL;

    t128 = ((x553-(x554>x555))&x556);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x557 = 1;
	int8_t x558 = 0;
	volatile int32_t t129 = 4;

    t129 = ((x557-(x558>x559))&x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x561 = UINT8_MAX;
	volatile uint32_t x562 = 164868842U;
	int64_t x563 = INT64_MAX;
	volatile int64_t t130 = -2097168670085983181LL;

    t130 = ((x561-(x562>x563))&x564);

    if (t130 != 192LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x565 = 422739LL;
	int64_t x566 = -501546LL;
	int32_t x567 = -1;
	int64_t t131 = 6106324LL;

    t131 = ((x565-(x566>x567))&x568);

    if (t131 != 393216LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MAX;
	uint16_t x576 = 25U;
	int32_t t132 = -40141124;

    t132 = ((x573-(x574>x575))&x576);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x577 = 21116U;
	volatile uint8_t x578 = UINT8_MAX;
	static int8_t x579 = -1;
	volatile uint64_t x580 = 80LLU;
	uint64_t t133 = 1598945192586145LLU;

    t133 = ((x577-(x578>x579))&x580);

    if (t133 != 80LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x581 = -1LL;
	int64_t x582 = INT64_MIN;
	static int8_t x583 = -7;
	uint16_t x584 = UINT16_MAX;

    t134 = ((x581-(x582>x583))&x584);

    if (t134 != 65535LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x585 = UINT16_MAX;
	uint32_t x586 = 670723667U;
	volatile int32_t x587 = -1;
	int64_t x588 = INT64_MAX;
	volatile int64_t t135 = 60573720LL;

    t135 = ((x585-(x586>x587))&x588);

    if (t135 != 65535LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x589 = -999621;
	volatile int64_t x590 = INT64_MAX;
	volatile uint8_t x591 = UINT8_MAX;
	int8_t x592 = INT8_MAX;
	volatile int32_t t136 = -291471006;

    t136 = ((x589-(x590>x591))&x592);

    if (t136 != 58) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x594 = 1562647069LLU;
	int64_t x595 = -1LL;
	int32_t x596 = 4;
	static int32_t t137 = 345;

    t137 = ((x593-(x594>x595))&x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x597 = INT16_MAX;
	uint32_t x599 = 32426U;
	static int32_t x600 = INT32_MIN;
	volatile int32_t t138 = 82;

    t138 = ((x597-(x598>x599))&x600);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x601 = -1LL;
	uint32_t x603 = 435340U;
	uint32_t x604 = 16U;
	int64_t t139 = 1LL;

    t139 = ((x601-(x602>x603))&x604);

    if (t139 != 16LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x605 = INT32_MAX;
	static int32_t x606 = -1;
	static int64_t x607 = INT64_MIN;
	int32_t t140 = -1931735;

    t140 = ((x605-(x606>x607))&x608);

    if (t140 != 32766) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x609 = INT16_MIN;
	uint64_t x610 = UINT64_MAX;
	int16_t x611 = -55;
	static volatile uint32_t t141 = 23U;

    t141 = ((x609-(x610>x611))&x612);

    if (t141 != 21512506U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x613 = UINT8_MAX;
	uint16_t x614 = 247U;
	static int8_t x615 = INT8_MIN;
	volatile int32_t t142 = -1022806622;

    t142 = ((x613-(x614>x615))&x616);

    if (t142 != 132) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x617 = 345U;
	uint16_t x618 = 26375U;
	uint8_t x619 = UINT8_MAX;
	uint16_t x620 = UINT16_MAX;
	static volatile int32_t t143 = 87948620;

    t143 = ((x617-(x618>x619))&x620);

    if (t143 != 344) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x621 = 757426U;
	static int64_t x622 = INT64_MAX;
	int8_t x623 = 30;
	int64_t x624 = INT64_MAX;
	volatile int64_t t144 = -36307395633LL;

    t144 = ((x621-(x622>x623))&x624);

    if (t144 != 757425LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x627 = 1237431886562759900LL;
	uint8_t x628 = 110U;
	static uint32_t t145 = 126U;

    t145 = ((x625-(x626>x627))&x628);

    if (t145 != 46U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x629 = 2LL;
	int16_t x631 = -3;
	int32_t x632 = -1;
	static volatile int64_t t146 = -413242LL;

    t146 = ((x629-(x630>x631))&x632);

    if (t146 != 2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x633 = 2U;
	uint64_t x634 = 91408146LLU;
	uint64_t x635 = 7LLU;
	static uint32_t x636 = 2050U;
	static volatile uint32_t t147 = 12285U;

    t147 = ((x633-(x634>x635))&x636);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x637 = INT64_MAX;
	static volatile int16_t x640 = INT16_MIN;
	int64_t t148 = -3448LL;

    t148 = ((x637-(x638>x639))&x640);

    if (t148 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x641 = 7U;
	uint8_t x642 = UINT8_MAX;
	uint32_t x644 = 164919U;
	static volatile uint32_t t149 = 7558U;

    t149 = ((x641-(x642>x643))&x644);

    if (t149 != 7U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x645 = -1LL;
	int16_t x647 = INT16_MAX;
	int8_t x648 = 6;
	int64_t t150 = -127LL;

    t150 = ((x645-(x646>x647))&x648);

    if (t150 != 6LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x649 = INT16_MIN;
	static int32_t x650 = INT32_MIN;
	int32_t x652 = INT32_MIN;
	static volatile int32_t t151 = INT32_MIN;

    t151 = ((x649-(x650>x651))&x652);

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x653 = INT8_MIN;
	int32_t x654 = INT32_MAX;
	static int8_t x656 = 38;
	volatile int32_t t152 = 121;

    t152 = ((x653-(x654>x655))&x656);

    if (t152 != 38) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x657 = 1039445793151243069LLU;
	static int16_t x658 = INT16_MAX;
	static int16_t x659 = INT16_MAX;
	uint64_t x660 = UINT64_MAX;
	volatile uint64_t t153 = 110301LLU;

    t153 = ((x657-(x658>x659))&x660);

    if (t153 != 1039445793151243069LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x661 = 0;
	uint64_t x662 = UINT64_MAX;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = 0U;
	int32_t t154 = -8;

    t154 = ((x661-(x662>x663))&x664);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x667 = UINT32_MAX;
	int8_t x668 = -15;
	volatile int32_t t155 = -199;

    t155 = ((x665-(x666>x667))&x668);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x669 = 7693420568LL;
	static int8_t x671 = -3;
	int16_t x672 = INT16_MIN;
	static int64_t t156 = -12698367114LL;

    t156 = ((x669-(x670>x671))&x672);

    if (t156 != 7693402112LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x673 = INT8_MIN;
	uint8_t x674 = UINT8_MAX;
	int16_t x675 = -1;
	volatile int32_t t157 = -23;

    t157 = ((x673-(x674>x675))&x676);

    if (t157 != 66) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x677 = INT64_MAX;
	int64_t x678 = -92259613475LL;
	int8_t x679 = -1;
	int64_t x680 = INT64_MIN;
	int64_t t158 = -21LL;

    t158 = ((x677-(x678>x679))&x680);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x681 = -1;
	uint16_t x682 = UINT16_MAX;
	static int32_t x683 = INT32_MAX;
	int8_t x684 = INT8_MAX;
	int32_t t159 = 12359;

    t159 = ((x681-(x682>x683))&x684);

    if (t159 != 127) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x685 = 2169837U;
	int8_t x686 = 4;
	int8_t x687 = INT8_MIN;
	uint32_t x688 = 2U;

    t160 = ((x685-(x686>x687))&x688);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x689 = -1;
	static int8_t x691 = INT8_MIN;
	volatile int64_t x692 = -1291592752257LL;
	volatile int64_t t161 = -31LL;

    t161 = ((x689-(x690>x691))&x692);

    if (t161 != -1291592752257LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x693 = 27825820198743LLU;
	volatile int16_t x694 = INT16_MIN;
	static volatile uint64_t x695 = 40039LLU;
	static volatile uint32_t x696 = 8U;
	volatile uint64_t t162 = 11756LLU;

    t162 = ((x693-(x694>x695))&x696);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x698 = -1;
	int64_t x699 = -49696358LL;
	volatile int64_t x700 = INT64_MIN;
	static int64_t t163 = INT64_MIN;

    t163 = ((x697-(x698>x699))&x700);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x701 = -1;
	volatile int16_t x702 = INT16_MIN;
	int64_t x703 = INT64_MIN;
	volatile uint16_t x704 = 166U;
	int32_t t164 = -4604;

    t164 = ((x701-(x702>x703))&x704);

    if (t164 != 166) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x705 = -1;
	volatile uint16_t x706 = UINT16_MAX;
	uint64_t x707 = 1816813331916LLU;
	volatile int32_t t165 = -6156;

    t165 = ((x705-(x706>x707))&x708);

    if (t165 != -9504) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x709 = 1709;
	int64_t x710 = INT64_MIN;
	uint8_t x711 = UINT8_MAX;
	uint8_t x712 = 27U;
	volatile int32_t t166 = -3044574;

    t166 = ((x709-(x710>x711))&x712);

    if (t166 != 9) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x713 = -116918022;
	uint8_t x714 = 21U;
	int64_t x715 = INT64_MIN;
	int64_t x716 = INT64_MIN;
	int64_t t167 = INT64_MIN;

    t167 = ((x713-(x714>x715))&x716);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x718 = 29;
	int32_t x719 = INT32_MIN;
	static volatile uint32_t x720 = UINT32_MAX;
	volatile uint32_t t168 = 478305867U;

    t168 = ((x717-(x718>x719))&x720);

    if (t168 != 32766U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x721 = INT64_MIN;
	uint8_t x723 = UINT8_MAX;
	int8_t x724 = INT8_MIN;
	int64_t t169 = INT64_MIN;

    t169 = ((x721-(x722>x723))&x724);

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x725 = INT32_MAX;
	uint8_t x728 = 9U;
	volatile int32_t t170 = 588;

    t170 = ((x725-(x726>x727))&x728);

    if (t170 != 9) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x731 = UINT8_MAX;
	volatile int32_t t171 = 16;

    t171 = ((x729-(x730>x731))&x732);

    if (t171 != 24) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x734 = 15;
	static volatile uint16_t x735 = 4739U;
	int16_t x736 = INT16_MAX;
	int32_t t172 = -3488116;

    t172 = ((x733-(x734>x735))&x736);

    if (t172 != 32640) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x737 = 0;
	int16_t x740 = INT16_MIN;
	static volatile int32_t t173 = 1;

    t173 = ((x737-(x738>x739))&x740);

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x741 = 1;
	uint64_t x742 = 4662507687600257LLU;
	static int32_t x744 = 48063681;
	static volatile int32_t t174 = 1;

    t174 = ((x741-(x742>x743))&x744);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	int64_t x747 = -1LL;
	volatile int32_t x748 = INT32_MAX;
	static volatile int32_t t175 = -15;

    t175 = ((x745-(x746>x747))&x748);

    if (t175 != 2147450880) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x749 = 2897U;
	static int64_t x750 = -1LL;
	uint32_t x751 = 255U;
	uint64_t x752 = 77565367198741LLU;
	uint64_t t176 = 102207576712LLU;

    t176 = ((x749-(x750>x751))&x752);

    if (t176 != 17LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x753 = -1LL;
	int32_t x754 = -1;
	int8_t x755 = INT8_MIN;
	volatile int8_t x756 = 1;
	static volatile int64_t t177 = 345LL;

    t177 = ((x753-(x754>x755))&x756);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x757 = 242767U;
	uint64_t x758 = UINT64_MAX;
	int8_t x759 = 1;
	volatile int64_t t178 = 768311246942852265LL;

    t178 = ((x757-(x758>x759))&x760);

    if (t178 != 242766LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x761 = 2608397362929641186LL;
	static int16_t x762 = INT16_MAX;
	int32_t x763 = 1;
	uint8_t x764 = 60U;
	volatile int64_t t179 = 608231369090851LL;

    t179 = ((x761-(x762>x763))&x764);

    if (t179 != 32LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x765 = 30876196LLU;
	int8_t x766 = INT8_MIN;
	int8_t x767 = INT8_MIN;
	volatile int16_t x768 = INT16_MIN;
	static uint64_t t180 = 1381714405LLU;

    t180 = ((x765-(x766>x767))&x768);

    if (t180 != 30867456LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x772 = -1LL;
	volatile int64_t t181 = 3712LL;

    t181 = ((x769-(x770>x771))&x772);

    if (t181 != 4294967295LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x774 = -1;
	uint32_t x776 = 6956U;
	uint32_t t182 = 4476U;

    t182 = ((x773-(x774>x775))&x776);

    if (t182 != 40U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x777 = INT16_MAX;
	int32_t x778 = -1;
	volatile int32_t t183 = 4;

    t183 = ((x777-(x778>x779))&x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x781 = -2842;
	volatile int32_t x784 = -1;
	volatile int32_t t184 = 1469293;

    t184 = ((x781-(x782>x783))&x784);

    if (t184 != -2843) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x785 = -1;
	static uint16_t x786 = UINT16_MAX;
	volatile int16_t x787 = INT16_MIN;

    t185 = ((x785-(x786>x787))&x788);

    if (t185 != 2147483646) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x789 = 23U;
	int64_t x790 = INT64_MAX;
	int8_t x791 = INT8_MAX;
	uint32_t x792 = 0U;
	volatile uint32_t t186 = 285613U;

    t186 = ((x789-(x790>x791))&x792);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x797 = 3961LLU;
	int64_t x798 = INT64_MIN;
	uint16_t x799 = 10U;
	int64_t x800 = -1LL;

    t187 = ((x797-(x798>x799))&x800);

    if (t187 != 3961LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x801 = 5;
	int64_t x802 = -1LL;
	static int16_t x803 = 201;
	static int32_t t188 = -1;

    t188 = ((x801-(x802>x803))&x804);

    if (t188 != 5) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x805 = -4;
	int16_t x806 = -2;
	uint32_t x808 = 119U;
	static volatile uint32_t t189 = 222021U;

    t189 = ((x805-(x806>x807))&x808);

    if (t189 != 116U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x810 = 67U;
	int64_t x812 = INT64_MIN;
	int64_t t190 = INT64_MIN;

    t190 = ((x809-(x810>x811))&x812);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x813 = -1;
	uint8_t x814 = 83U;
	int32_t x815 = INT32_MAX;

    t191 = ((x813-(x814>x815))&x816);

    if (t191 != 12) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x817 = UINT16_MAX;
	uint16_t x819 = 210U;
	static int32_t x820 = 39908187;
	volatile int32_t t192 = 434864673;

    t192 = ((x817-(x818>x819))&x820);

    if (t192 != 62299) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x821 = INT16_MAX;
	volatile uint64_t x822 = UINT64_MAX;
	int16_t x824 = INT16_MIN;
	static volatile int32_t t193 = 9267738;

    t193 = ((x821-(x822>x823))&x824);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x825 = 347365841566578019LLU;
	int16_t x826 = 63;
	volatile int32_t x827 = 930;
	uint64_t x828 = 477LLU;
	volatile uint64_t t194 = 523431975900694281LLU;

    t194 = ((x825-(x826>x827))&x828);

    if (t194 != 321LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x829 = INT8_MIN;
	int32_t x830 = -1;
	int32_t x831 = INT32_MIN;
	int64_t x832 = -1LL;
	static int64_t t195 = 3749997594851LL;

    t195 = ((x829-(x830>x831))&x832);

    if (t195 != -129LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x837 = -1;
	uint32_t x839 = 15582U;
	static volatile int64_t t196 = INT64_MAX;

    t196 = ((x837-(x838>x839))&x840);

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x841 = INT8_MIN;
	static int64_t x842 = INT64_MIN;
	static volatile int8_t x843 = INT8_MAX;
	int32_t x844 = -123;

    t197 = ((x841-(x842>x843))&x844);

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x847 = INT64_MAX;
	static int8_t x848 = 1;
	uint64_t t198 = 436754347LLU;

    t198 = ((x845-(x846>x847))&x848);

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x849 = INT8_MIN;
	uint64_t x850 = UINT64_MAX;
	volatile int16_t x851 = INT16_MIN;
	static int64_t x852 = 11799663546859LL;

    t199 = ((x849-(x850>x851))&x852);

    if (t199 != 11799663546731LL) { NG(); } else { ; }
	
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

