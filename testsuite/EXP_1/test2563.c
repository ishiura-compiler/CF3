
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

volatile int32_t x4 = -1;
int16_t x10 = INT16_MIN;
static volatile int32_t t1 = -21898027;
int16_t x15 = INT16_MIN;
uint32_t x26 = 55U;
uint8_t x27 = 35U;
uint64_t x28 = 1677252LLU;
volatile uint64_t t4 = 2482786097960656LLU;
volatile uint32_t x30 = UINT32_MAX;
int8_t x31 = INT8_MIN;
volatile uint64_t t5 = 53179985LLU;
uint32_t x36 = 7441744U;
int64_t t7 = 3494LL;
volatile int64_t t8 = -399592130LL;
int8_t x45 = 17;
uint8_t x47 = UINT8_MAX;
static uint64_t x51 = 720LLU;
uint16_t x55 = UINT16_MAX;
volatile int32_t t11 = -52916;
uint32_t t12 = 3879U;
static int8_t x68 = INT8_MIN;
static int8_t x70 = INT8_MIN;
uint64_t x75 = UINT64_MAX;
int8_t x80 = 52;
uint32_t t16 = 3U;
int16_t x85 = -1954;
uint32_t x87 = UINT32_MAX;
volatile int64_t t17 = 16078007502490308LL;
static int64_t x90 = -89944394457LL;
uint64_t x91 = 1LLU;
volatile uint32_t t21 = 3U;
uint16_t x115 = UINT16_MAX;
volatile int64_t t23 = -11LL;
int16_t x117 = INT16_MAX;
static uint64_t t25 = 9006644711434329351LLU;
int8_t x136 = INT8_MIN;
volatile uint64_t x140 = 1401477378807LLU;
uint64_t t27 = 880LLU;
int32_t x142 = INT32_MIN;
int64_t x146 = INT64_MIN;
volatile uint64_t t29 = 1814367LLU;
static int64_t t30 = 13914LL;
uint16_t x174 = 11U;
uint64_t x180 = 753470252LLU;
volatile uint8_t x185 = UINT8_MAX;
int32_t x186 = INT32_MIN;
int8_t x192 = 6;
int8_t x193 = INT8_MIN;
uint8_t x194 = 1U;
static int8_t x195 = INT8_MIN;
int16_t x199 = INT16_MAX;
volatile int64_t x201 = -18439127502LL;
volatile int32_t x207 = INT32_MIN;
int8_t x210 = INT8_MAX;
int16_t x211 = 76;
static int64_t x214 = -1LL;
uint8_t x216 = 1U;
uint32_t x224 = 12U;
static volatile uint32_t t45 = 7732824U;
int16_t x230 = INT16_MIN;
int16_t x231 = INT16_MAX;
uint64_t x234 = UINT64_MAX;
static volatile uint8_t x236 = 34U;
uint64_t t47 = 168LLU;
volatile uint32_t t50 = 86594U;
int8_t x254 = -12;
int16_t x259 = INT16_MIN;
volatile uint32_t t53 = 24U;
int16_t x280 = INT16_MAX;
static uint16_t x284 = 324U;
volatile uint16_t x285 = UINT16_MAX;
volatile int8_t x287 = -1;
int64_t t58 = -194642472884LL;
int64_t x289 = 0LL;
static int32_t x290 = -54642399;
int32_t x310 = -2710893;
int64_t x314 = 859537497LL;
volatile uint64_t t66 = 7632546LLU;
static uint32_t x338 = 0U;
uint64_t x346 = 4LLU;
volatile int64_t x348 = -1LL;
int32_t x357 = INT32_MIN;
uint8_t x358 = UINT8_MAX;
uint64_t x360 = 9890LLU;
static uint64_t t72 = 2948406LLU;
int32_t x362 = -1;
int32_t x366 = INT32_MIN;
static volatile int8_t x374 = -8;
static int8_t x376 = INT8_MAX;
int16_t x379 = INT16_MIN;
int64_t t79 = 2LL;
int16_t x391 = -1;
int32_t x392 = -1;
static int64_t x393 = INT64_MIN;
uint16_t x396 = 108U;
static uint32_t x397 = 23294626U;
volatile int64_t t83 = 1017959LL;
uint32_t x413 = UINT32_MAX;
int32_t x414 = INT32_MIN;
int32_t x418 = -1;
int32_t t87 = -3503;
int16_t x421 = -1;
uint64_t x432 = 11405908998LLU;
uint64_t t90 = 390331LLU;
int16_t x439 = -873;
volatile int8_t x444 = INT8_MIN;
volatile uint64_t t92 = 371666LLU;
int64_t x445 = INT64_MIN;
volatile uint64_t t93 = 44850135927294LLU;
int64_t x451 = -1LL;
uint64_t x452 = 289264044LLU;
int16_t x455 = INT16_MAX;
volatile int32_t x458 = -37235;
int16_t x469 = INT16_MIN;
int8_t x471 = 1;
int16_t x485 = -1232;
int16_t x493 = INT16_MAX;
uint64_t x498 = 66956906046075LLU;
int64_t x500 = 4LL;
int8_t x501 = -9;
int32_t x502 = -212057;
static int64_t x509 = INT64_MIN;
uint32_t x511 = UINT32_MAX;
int32_t t109 = -3738122;
volatile int8_t x548 = INT8_MIN;
int32_t x549 = -24;
int32_t x565 = 1;
static volatile uint64_t t118 = 4641873900766LLU;
uint32_t x579 = 700U;
int8_t x581 = INT8_MIN;
uint64_t x583 = 407900LLU;
int32_t x590 = -1;
volatile int32_t x592 = INT32_MIN;
volatile int64_t x600 = INT64_MIN;
static volatile uint8_t x601 = UINT8_MAX;
uint8_t x603 = 8U;
int64_t t124 = 29676444795882174LL;
uint64_t x618 = UINT64_MAX;
int16_t x624 = INT16_MIN;
uint64_t x625 = 14425568029700747LLU;
int32_t x628 = 3;
static int64_t x634 = -135830883574455LL;
int16_t x641 = -5;
uint32_t x642 = 131623U;
int32_t x643 = 766768;
volatile int64_t x646 = INT64_MAX;
uint16_t x648 = 87U;
static int64_t x649 = 993404571275416298LL;
static volatile int8_t x654 = INT8_MIN;
int32_t x662 = 673527693;
volatile int64_t t137 = 3061991562LL;
int8_t x677 = INT8_MIN;
volatile int32_t x681 = -1;
uint32_t x687 = UINT32_MAX;
static uint8_t x696 = UINT8_MAX;
uint8_t x713 = UINT8_MAX;
uint64_t t147 = 18269682968LLU;
uint16_t x725 = 8U;
static uint32_t t149 = 229583U;
static uint32_t x729 = UINT32_MAX;
static volatile uint64_t x733 = UINT64_MAX;
static int32_t x734 = INT32_MIN;
static uint32_t x740 = UINT32_MAX;
int16_t x743 = INT16_MIN;
uint64_t t154 = 210178995201776LLU;
uint16_t x749 = 2U;
static int16_t x752 = INT16_MIN;
volatile int16_t x762 = INT16_MAX;
int8_t x764 = 13;
static int8_t x771 = INT8_MIN;
static uint64_t x773 = UINT64_MAX;
uint64_t x784 = 253732918221LLU;
int32_t x795 = -1;
int8_t x799 = 0;
int64_t t166 = 5LL;
volatile int64_t t169 = 1LL;
int8_t x833 = INT8_MIN;
static uint64_t x836 = 1LLU;
static volatile int64_t x837 = 420627434987LL;
int32_t x838 = INT32_MIN;
uint16_t x839 = 2U;
int16_t x841 = INT16_MAX;
int8_t x843 = INT8_MIN;
int8_t x844 = -1;
int16_t x845 = INT16_MIN;
uint64_t x847 = 149727456124LLU;
int8_t x851 = -4;
volatile uint64_t t175 = 1576892821595780LLU;
volatile uint32_t x858 = UINT32_MAX;
static volatile uint64_t x859 = UINT64_MAX;
int32_t x861 = INT32_MIN;
int16_t x867 = INT16_MIN;
volatile int64_t t178 = 0LL;
uint16_t x870 = 3441U;
int64_t x871 = -142386986870944912LL;
static int8_t x872 = INT8_MIN;
static volatile int64_t t179 = -11959909LL;
volatile uint32_t x873 = UINT32_MAX;
static int64_t t180 = -117154543255325937LL;
volatile int16_t x879 = INT16_MAX;
uint64_t t181 = 83301019293670LLU;
static int64_t t184 = 869LL;
volatile uint32_t t185 = 894499298U;
static volatile int16_t x903 = INT16_MIN;
int16_t x906 = INT16_MIN;
uint64_t t188 = 40431896873LLU;
int32_t t189 = 4;
volatile uint32_t t191 = 1733630334U;
volatile uint32_t t192 = 105134U;
int32_t x927 = INT32_MIN;
int64_t x936 = INT64_MIN;
uint32_t x947 = UINT32_MAX;
uint32_t x948 = 1927345U;
volatile int32_t t196 = -6566302;
volatile uint16_t x958 = 735U;
volatile uint32_t x959 = 35269094U;
int32_t x966 = INT32_MIN;
volatile int32_t t199 = 117254;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static int64_t x2 = INT64_MIN;
	int8_t x3 = -1;
	volatile int64_t t0 = 15245440658112LL;

    t0 = (((x1^x2)-x3)+x4);

    if (t0 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	static int16_t x12 = INT16_MAX;

    t1 = (((x9^x10)-x11)+x12);

    if (t1 != 2147483392) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	volatile int16_t x14 = INT16_MAX;
	static volatile uint32_t x16 = 2285905U;
	static uint32_t t2 = 13527282U;

    t2 = (((x13^x14)-x15)+x16);

    if (t2 != 2351185U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = 1214;
	uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = -120749LL;
	volatile uint8_t x20 = 96U;
	int64_t t3 = -428LL;

    t3 = (((x17^x18)-x19)+x20);

    if (t3 != 4295086926LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x25 = 27717U;

    t4 = (((x25^x26)-x27)+x28);

    if (t4 != 1704979LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	uint16_t x32 = 20U;

    t5 = (((x29^x30)-x31)+x32);

    if (t5 != 18446744069414584468LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 10U;
	int32_t x34 = -13;
	int16_t x35 = INT16_MIN;
	uint32_t t6 = 10U;

    t6 = (((x33^x34)-x35)+x36);

    if (t6 != 7474505U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = 3297LL;
	int16_t x38 = -1;
	static volatile int8_t x39 = -1;
	uint32_t x40 = UINT32_MAX;

    t7 = (((x37^x38)-x39)+x40);

    if (t7 != 4294963998LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = -1LL;
	static int64_t x43 = -1LL;
	volatile uint32_t x44 = 22U;

    t8 = (((x41^x42)-x43)+x44);

    if (t8 != 32790LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x46 = 205750;
	static int16_t x48 = INT16_MIN;
	int32_t t9 = 1;

    t9 = (((x45^x46)-x47)+x48);

    if (t9 != 172712) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	static int32_t x50 = 453821;
	int16_t x52 = 348;
	volatile uint64_t t10 = 11285271830207LLU;

    t10 = (((x49^x50)-x51)+x52);

    if (t10 != 18446744071562521417LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	static int32_t x56 = INT32_MAX;

    t11 = (((x53^x54)-x55)+x56);

    if (t11 != 2147418112) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = -1;
	static uint32_t x62 = 5716635U;
	static int8_t x63 = INT8_MIN;
	uint32_t x64 = 1634U;

    t12 = (((x61^x62)-x63)+x64);

    if (t12 != 4289252422U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = UINT8_MAX;
	static uint64_t x66 = 66784082411040LLU;
	int16_t x67 = -1;
	volatile uint64_t t13 = 8109072LLU;

    t13 = (((x65^x66)-x67)+x68);

    if (t13 != 66784082411104LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = -1;
	uint16_t x71 = 2U;
	static int64_t x72 = 3924620LL;
	int64_t t14 = -50059533524414162LL;

    t14 = (((x69^x70)-x71)+x72);

    if (t14 != 3924745LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x73 = -1LL;
	uint16_t x74 = 4559U;
	uint32_t x76 = 9697U;
	volatile uint64_t t15 = 29567848966044986LLU;

    t15 = (((x73^x74)-x75)+x76);

    if (t15 != 5138LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	volatile uint32_t x78 = 6302U;
	int8_t x79 = INT8_MIN;

    t16 = (((x77^x78)-x79)+x80);

    if (t16 != 4294961173U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x86 = INT32_MIN;
	volatile int64_t x88 = -1LL;

    t17 = (((x85^x86)-x87)+x88);

    if (t17 != 2147481694LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x89 = 73U;
	volatile int8_t x92 = 33;
	uint64_t t18 = 901273019LLU;

    t18 = (((x89^x90)-x91)+x92);

    if (t18 != 18446743983765157262LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x93 = UINT32_MAX;
	uint8_t x94 = UINT8_MAX;
	int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	volatile uint32_t t19 = 4439101U;

    t19 = (((x93^x94)-x95)+x96);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x101 = -1;
	uint64_t x102 = UINT64_MAX;
	uint64_t x103 = 47039LLU;
	static uint32_t x104 = 26U;
	uint64_t t20 = 7527128725699411272LLU;

    t20 = (((x101^x102)-x103)+x104);

    if (t20 != 18446744073709504603LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = 374U;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = INT16_MAX;

    t21 = (((x105^x106)-x107)+x108);

    if (t21 != 374U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = 1;
	int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = -456;
	volatile int32_t t22 = -142406989;

    t22 = (((x109^x110)-x111)+x112);

    if (t22 != -455) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x113 = 40;
	int64_t x114 = INT64_MAX;
	uint32_t x116 = 87U;

    t23 = (((x113^x114)-x115)+x116);

    if (t23 != 9223372036854710319LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x118 = -642104LL;
	int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	int64_t t24 = 361LL;

    t24 = (((x117^x118)-x119)+x120);

    if (t24 != -602826LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MAX;
	int32_t x123 = INT32_MIN;
	volatile int8_t x124 = -3;

    t25 = (((x121^x122)-x123)+x124);

    if (t25 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x133 = INT32_MIN;
	uint16_t x134 = 40U;
	uint64_t x135 = 91569LLU;
	uint64_t t26 = 12593302885LLU;

    t26 = (((x133^x134)-x135)+x136);

    if (t26 != 18446744071561976311LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x137 = 22666031621479787LLU;
	uint8_t x138 = UINT8_MAX;
	int64_t x139 = -326LL;

    t27 = (((x137^x138)-x139)+x140);

    if (t27 != 22667433098858961LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x141 = -1;
	static uint32_t x143 = 252489U;
	static uint64_t x144 = 599906565681028LLU;
	volatile uint64_t t28 = 55076978956LLU;

    t28 = (((x141^x142)-x143)+x144);

    if (t28 != 599908712912186LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x145 = UINT8_MAX;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = INT32_MIN;

    t29 = (((x145^x146)-x147)+x148);

    if (t29 != 9223372034707292416LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = -1LL;
	int16_t x154 = INT16_MAX;
	volatile int16_t x155 = INT16_MIN;
	int16_t x156 = -43;

    t30 = (((x153^x154)-x155)+x156);

    if (t30 != -43LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	int32_t x158 = -37;
	static uint8_t x159 = 3U;
	int64_t x160 = INT64_MAX;
	int64_t t31 = 56638947551509LL;

    t31 = (((x157^x158)-x159)+x160);

    if (t31 != 9223372036854710304LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x161 = 26;
	volatile int32_t x162 = INT32_MAX;
	static uint8_t x163 = UINT8_MAX;
	int32_t x164 = -1;
	int32_t t32 = -2;

    t32 = (((x161^x162)-x163)+x164);

    if (t32 != 2147483365) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x165 = -1;
	static int64_t x166 = INT64_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = 11744464992LL;
	volatile int64_t t33 = 222155852785634LL;

    t33 = (((x165^x166)-x167)+x168);

    if (t33 != -9223372022962827168LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x169 = -13676;
	int8_t x170 = 1;
	uint16_t x171 = UINT16_MAX;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t34 = -79275645;

    t34 = (((x169^x170)-x171)+x172);

    if (t34 != -13675) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x173 = UINT8_MAX;
	int8_t x175 = -1;
	volatile int16_t x176 = INT16_MIN;
	static volatile int32_t t35 = -35906;

    t35 = (((x173^x174)-x175)+x176);

    if (t35 != -32523) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x177 = -151;
	int64_t x178 = INT64_MIN;
	volatile uint64_t x179 = 7899463LLU;
	volatile uint64_t t36 = 405948LLU;

    t36 = (((x177^x178)-x179)+x180);

    if (t36 != 9223372037600346446LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x187 = -426713612;
	volatile int64_t x188 = -1LL;
	int64_t t37 = -115888812933550LL;

    t37 = (((x185^x186)-x187)+x188);

    if (t37 != -1720769782LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x189 = 47137290986150639LLU;
	uint64_t x190 = UINT64_MAX;
	static int32_t x191 = -24468;
	volatile uint64_t t38 = 30958661LLU;

    t38 = (((x189^x190)-x191)+x192);

    if (t38 != 18399606782723425450LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x196 = -1;
	static volatile int32_t t39 = 3;

    t39 = (((x193^x194)-x195)+x196);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x197 = INT8_MAX;
	uint8_t x198 = 0U;
	static uint32_t x200 = 6727587U;
	volatile uint32_t t40 = 432288198U;

    t40 = (((x197^x198)-x199)+x200);

    if (t40 != 6694947U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x202 = -1;
	int8_t x203 = INT8_MIN;
	static uint16_t x204 = 1868U;
	int64_t t41 = 9693781917LL;

    t41 = (((x201^x202)-x203)+x204);

    if (t41 != 18439129497LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x205 = -157248;
	int32_t x206 = 19963;
	static volatile int8_t x208 = INT8_MIN;
	int32_t t42 = 9675005;

    t42 = (((x205^x206)-x207)+x208);

    if (t42 != 2147341243) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x209 = 483758211;
	int16_t x212 = -1;
	int32_t t43 = 13689089;

    t43 = (((x209^x210)-x211)+x212);

    if (t43 != 483758255) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MIN;
	volatile int64_t t44 = -1615160799770LL;

    t44 = (((x213^x214)-x215)+x216);

    if (t44 != 2147516416LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x221 = UINT16_MAX;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;

    t45 = (((x221^x222)-x223)+x224);

    if (t45 != 2147418251U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x229 = -1;
	uint32_t x232 = 25984U;
	uint32_t t46 = 161126U;

    t46 = (((x229^x230)-x231)+x232);

    if (t46 != 25984U) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x233 = -1;
	uint8_t x235 = UINT8_MAX;

    t47 = (((x233^x234)-x235)+x236);

    if (t47 != 18446744073709551395LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x241 = 0;
	int16_t x242 = -29;
	int32_t x243 = -1;
	static int8_t x244 = INT8_MIN;
	int32_t t48 = 15641439;

    t48 = (((x241^x242)-x243)+x244);

    if (t48 != -156) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x245 = 1U;
	static int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	int64_t x248 = -1772771298847729919LL;
	static volatile int64_t t49 = 213604LL;

    t49 = (((x245^x246)-x247)+x248);

    if (t49 != -1772771296700279037LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = 65156092;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	volatile int16_t x252 = INT16_MAX;

    t50 = (((x249^x250)-x251)+x252);

    if (t50 != 4229843971U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x253 = -3;
	static uint32_t x255 = 65975U;
	uint16_t x256 = 0U;
	volatile uint32_t t51 = 92U;

    t51 = (((x253^x254)-x255)+x256);

    if (t51 != 4294901330U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x257 = -1;
	int16_t x258 = -98;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t52 = 0;

    t52 = (((x257^x258)-x259)+x260);

    if (t52 != -2147450783) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x261 = 573083U;
	int32_t x262 = 10098;
	uint32_t x263 = 1786645U;
	uint32_t x264 = 241U;

    t53 = (((x261^x262)-x263)+x264);

    if (t53 != 4293744581U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x269 = INT32_MAX;
	int16_t x270 = 1;
	static uint8_t x271 = 0U;
	int16_t x272 = INT16_MIN;
	int32_t t54 = -149;

    t54 = (((x269^x270)-x271)+x272);

    if (t54 != 2147450878) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x273 = 4679113U;
	static volatile uint16_t x274 = UINT16_MAX;
	uint64_t x275 = 28908012560351LLU;
	int8_t x276 = -1;
	volatile uint64_t t55 = 6978150715LLU;

    t55 = (((x273^x274)-x275)+x276);

    if (t55 != 18446715165701683798LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x277 = INT64_MAX;
	static volatile uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	volatile int64_t t56 = 326374156858867LL;

    t56 = (((x277^x278)-x279)+x280);

    if (t56 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x281 = 34U;
	uint16_t x282 = 691U;
	int16_t x283 = INT16_MIN;
	int32_t t57 = -85884;

    t57 = (((x281^x282)-x283)+x284);

    if (t57 != 33749) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x286 = -23LL;
	volatile uint8_t x288 = 17U;

    t58 = (((x285^x286)-x287)+x288);

    if (t58 != -65496LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x291 = INT32_MAX;
	static volatile int64_t x292 = -1LL;
	volatile int64_t t59 = 3684042LL;

    t59 = (((x289^x290)-x291)+x292);

    if (t59 != -2202126047LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = 18LL;
	volatile uint64_t x300 = 81560279LLU;
	static volatile uint64_t t60 = 2289969LLU;

    t60 = (((x297^x298)-x299)+x300);

    if (t60 != 81494725LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x301 = INT64_MIN;
	int16_t x302 = 27;
	volatile int32_t x303 = -1;
	int16_t x304 = -1;
	int64_t t61 = 2024LL;

    t61 = (((x301^x302)-x303)+x304);

    if (t61 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x305 = 90U;
	int32_t x306 = -33352;
	uint16_t x307 = 14U;
	uint32_t x308 = UINT32_MAX;
	volatile uint32_t t62 = 128603U;

    t62 = (((x305^x306)-x307)+x308);

    if (t62 != 4294933971U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x309 = INT8_MAX;
	volatile uint32_t x311 = 25723534U;
	volatile uint64_t x312 = UINT64_MAX;
	uint64_t t63 = 714LLU;

    t63 = (((x309^x310)-x311)+x312);

    if (t63 != 4266532957LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x313 = UINT16_MAX;
	int8_t x315 = INT8_MIN;
	static int32_t x316 = INT32_MIN;
	int64_t t64 = -73605488991712781LL;

    t64 = (((x313^x314)-x315)+x316);

    if (t64 != -1287946202LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x321 = 4749U;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	int16_t x324 = 12;
	volatile int32_t t65 = -71210;

    t65 = (((x321^x322)-x323)+x324);

    if (t65 != -2147478759) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x325 = 27199776LLU;
	static int64_t x326 = 142LL;
	static uint64_t x327 = 75585974LLU;
	static int32_t x328 = INT32_MIN;

    t66 = (((x325^x326)-x327)+x328);

    if (t66 != 18446744071513681912LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MAX;
	int16_t x335 = 1;
	int8_t x336 = 0;
	int64_t t67 = -150LL;

    t67 = (((x333^x334)-x335)+x336);

    if (t67 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x337 = UINT16_MAX;
	static int16_t x339 = 16254;
	int16_t x340 = 235;
	volatile uint32_t t68 = 31340U;

    t68 = (((x337^x338)-x339)+x340);

    if (t68 != 49516U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x341 = -1;
	static int8_t x342 = -45;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = -88;
	int32_t t69 = -308;

    t69 = (((x341^x342)-x343)+x344);

    if (t69 != -65579) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x345 = -1;
	uint16_t x347 = UINT16_MAX;
	volatile uint64_t t70 = 1878413LLU;

    t70 = (((x345^x346)-x347)+x348);

    if (t70 != 18446744073709486075LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = -3;
	int64_t t71 = -7886969LL;

    t71 = (((x349^x350)-x351)+x352);

    if (t71 != 32509LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x359 = -1LL;

    t72 = (((x357^x358)-x359)+x360);

    if (t72 != 18446744071562078114LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x361 = -789;
	int32_t x363 = -1;
	uint32_t x364 = 4743U;
	uint32_t t73 = 1U;

    t73 = (((x361^x362)-x363)+x364);

    if (t73 != 5532U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x365 = -1;
	static uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = -1LL;
	int64_t t74 = -3872848069502106LL;

    t74 = (((x365^x366)-x367)+x368);

    if (t74 != 2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x369 = INT64_MIN;
	volatile int64_t x370 = 48176706689090LL;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = 86489U;
	int64_t t75 = -32753693517LL;

    t75 = (((x369^x370)-x371)+x372);

    if (t75 != -9223323860148032996LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x373 = -56;
	uint8_t x375 = UINT8_MAX;
	int32_t t76 = 3;

    t76 = (((x373^x374)-x375)+x376);

    if (t76 != -80) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x377 = INT32_MIN;
	static int64_t x378 = -1LL;
	volatile int16_t x380 = INT16_MIN;
	int64_t t77 = 5180584368270LL;

    t77 = (((x377^x378)-x379)+x380);

    if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x381 = INT32_MIN;
	static int64_t x382 = -1LL;
	volatile int64_t x383 = 229LL;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int64_t t78 = -5410198438513LL;

    t78 = (((x381^x382)-x383)+x384);

    if (t78 != 2147548953LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x385 = INT32_MIN;
	volatile int64_t x386 = INT64_MIN;
	static int8_t x387 = INT8_MIN;
	uint8_t x388 = UINT8_MAX;

    t79 = (((x385^x386)-x387)+x388);

    if (t79 != 9223372034707292543LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x389 = 1076465U;
	volatile int32_t x390 = -1;
	volatile uint32_t t80 = 7381648U;

    t80 = (((x389^x390)-x391)+x392);

    if (t80 != 4293890830U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x394 = 10238066;
	uint32_t x395 = 4965853U;
	int64_t t81 = -278145251816918LL;

    t81 = (((x393^x394)-x395)+x396);

    if (t81 != -9223372036849503487LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x398 = -1;
	int16_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	uint32_t t82 = 164542U;

    t82 = (((x397^x398)-x399)+x400);

    if (t82 != 4271738205U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x401 = 54U;
	static int8_t x402 = 12;
	int8_t x403 = 4;
	int64_t x404 = INT64_MIN;

    t83 = (((x401^x402)-x403)+x404);

    if (t83 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x405 = INT8_MAX;
	volatile int16_t x406 = INT16_MIN;
	int32_t x407 = -1;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t84 = 13679;

    t84 = (((x405^x406)-x407)+x408);

    if (t84 != -32385) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x409 = 6U;
	uint64_t x410 = 4LLU;
	uint64_t x411 = 117041LLU;
	int8_t x412 = 3;
	uint64_t t85 = 199953209830740283LLU;

    t85 = (((x409^x410)-x411)+x412);

    if (t85 != 18446744073709434580LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x415 = -1;
	uint32_t x416 = 516912U;
	uint32_t t86 = 398U;

    t86 = (((x413^x414)-x415)+x416);

    if (t86 != 2148000560U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint8_t x419 = 1U;
	static int16_t x420 = INT16_MIN;

    t87 = (((x417^x418)-x419)+x420);

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x422 = UINT16_MAX;
	volatile uint32_t x423 = 4940U;
	uint64_t x424 = 457199LLU;
	volatile uint64_t t88 = 79064849LLU;

    t88 = (((x421^x422)-x423)+x424);

    if (t88 != 4295354019LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x429 = 15166800755LLU;
	int64_t x430 = INT64_MIN;
	uint16_t x431 = 5U;
	uint64_t t89 = 219993471947058218LLU;

    t89 = (((x429^x430)-x431)+x432);

    if (t89 != 9223372063427485556LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x433 = 235168336497270LLU;
	volatile uint16_t x434 = 3U;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t x436 = -1;

    t90 = (((x433^x434)-x435)+x436);

    if (t90 != 235168336497269LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MIN;
	uint16_t x440 = 0U;
	volatile int32_t t91 = -508;

    t91 = (((x437^x438)-x439)+x440);

    if (t91 != -64536) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x441 = 5204LL;
	uint64_t x442 = 3754757LLU;
	int8_t x443 = INT8_MIN;

    t92 = (((x441^x442)-x443)+x444);

    if (t92 != 3759953LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 1598LLU;
	volatile int64_t x448 = -225971LL;

    t93 = (((x445^x446)-x447)+x448);

    if (t93 != 9223372036854613774LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x449 = 2803U;
	volatile int64_t x450 = -2LL;
	uint64_t t94 = 119866078782179484LLU;

    t94 = (((x449^x450)-x451)+x452);

    if (t94 != 289261242LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x453 = INT8_MIN;
	uint32_t x454 = 0U;
	static int16_t x456 = INT16_MIN;
	uint32_t t95 = 0U;

    t95 = (((x453^x454)-x455)+x456);

    if (t95 != 4294901633U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x457 = -1;
	static int8_t x459 = -1;
	int8_t x460 = 1;
	int32_t t96 = -34072;

    t96 = (((x457^x458)-x459)+x460);

    if (t96 != 37236) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x461 = INT64_MIN;
	uint64_t x462 = 8020091050405625884LLU;
	int32_t x463 = INT32_MIN;
	uint16_t x464 = 0U;
	uint64_t t97 = 301950306LLU;

    t97 = (((x461^x462)-x463)+x464);

    if (t97 != 17243463089407885340LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x465 = -1;
	volatile int32_t x466 = INT32_MIN;
	uint64_t x467 = 1365864350027LLU;
	uint64_t x468 = UINT64_MAX;
	uint64_t t98 = 991LLU;

    t98 = (((x465^x466)-x467)+x468);

    if (t98 != 18446742709992685235LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x470 = UINT8_MAX;
	volatile int64_t x472 = -397LL;
	int64_t t99 = -72638808LL;

    t99 = (((x469^x470)-x471)+x472);

    if (t99 != -32911LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x477 = INT32_MIN;
	uint64_t x478 = 35372LLU;
	uint64_t x479 = 38LLU;
	int32_t x480 = 0;
	volatile uint64_t t100 = 3071082LLU;

    t100 = (((x477^x478)-x479)+x480);

    if (t100 != 18446744071562103302LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x486 = 36;
	int16_t x487 = 13;
	int8_t x488 = INT8_MAX;
	volatile int32_t t101 = 3077456;

    t101 = (((x485^x486)-x487)+x488);

    if (t101 != -1146) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MIN;
	int8_t x491 = -1;
	int32_t x492 = INT32_MIN;
	volatile int64_t t102 = 34106203168789LL;

    t102 = (((x489^x490)-x491)+x492);

    if (t102 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x494 = -1010407852089898192LL;
	static uint16_t x495 = 902U;
	int32_t x496 = INT32_MAX;
	static volatile int64_t t103 = -11511LL;

    t103 = (((x493^x494)-x495)+x496);

    if (t103 != -1010407849942388408LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = INT64_MIN;
	volatile uint16_t x499 = 52U;
	uint64_t t104 = 1491709914695935LLU;

    t104 = (((x497^x498)-x499)+x500);

    if (t104 != 9223438993760821835LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x503 = -20;
	int8_t x504 = INT8_MIN;
	int32_t t105 = 6;

    t105 = (((x501^x502)-x503)+x504);

    if (t105 != 211940) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x510 = -2980;
	static volatile int8_t x512 = -1;
	static int64_t t106 = 11505842383230LL;

    t106 = (((x509^x510)-x511)+x512);

    if (t106 != 9223372032559805532LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x513 = INT16_MIN;
	volatile uint16_t x514 = 6U;
	int16_t x515 = 44;
	int16_t x516 = 1983;
	int32_t t107 = -24637;

    t107 = (((x513^x514)-x515)+x516);

    if (t107 != -30823) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x521 = UINT32_MAX;
	volatile int64_t x522 = -237LL;
	int16_t x523 = -1;
	int8_t x524 = 9;
	volatile int64_t t108 = -13908899165295038LL;

    t108 = (((x521^x522)-x523)+x524);

    if (t108 != -4294967050LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x525 = 7199U;
	uint8_t x526 = 6U;
	int8_t x527 = -1;
	volatile int8_t x528 = INT8_MIN;

    t109 = (((x525^x526)-x527)+x528);

    if (t109 != 7066) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x537 = 2U;
	int8_t x538 = INT8_MAX;
	volatile int16_t x539 = -3175;
	int64_t x540 = 1134944LL;
	int64_t t110 = -4153956LL;

    t110 = (((x537^x538)-x539)+x540);

    if (t110 != 1138244LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = -6;
	uint64_t x543 = UINT64_MAX;
	int64_t x544 = INT64_MIN;
	volatile uint64_t t111 = 196657LLU;

    t111 = (((x541^x542)-x543)+x544);

    if (t111 != 9223372036854808571LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x545 = -1;
	int8_t x546 = -1;
	int8_t x547 = INT8_MAX;
	static volatile int32_t t112 = 931844007;

    t112 = (((x545^x546)-x547)+x548);

    if (t112 != -255) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x550 = 66U;
	int64_t x551 = -1LL;
	uint16_t x552 = 3U;
	volatile int64_t t113 = 340LL;

    t113 = (((x549^x550)-x551)+x552);

    if (t113 != 4294967214LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x557 = INT16_MAX;
	volatile uint8_t x558 = 14U;
	int64_t x559 = INT64_MAX;
	int8_t x560 = INT8_MIN;
	int64_t t114 = 2423305694641058655LL;

    t114 = (((x557^x558)-x559)+x560);

    if (t114 != -9223372036854743182LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x561 = -49;
	uint16_t x562 = UINT16_MAX;
	static uint16_t x563 = 1841U;
	uint32_t x564 = 1243417350U;
	volatile uint32_t t115 = 252584250U;

    t115 = (((x561^x562)-x563)+x564);

    if (t115 != 1243350021U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x566 = INT16_MIN;
	uint32_t x567 = 591017187U;
	int16_t x568 = -1;
	volatile uint32_t t116 = 21U;

    t116 = (((x565^x566)-x567)+x568);

    if (t116 != 3703917341U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x569 = -53;
	uint16_t x570 = 3U;
	volatile int8_t x571 = 12;
	int32_t x572 = 403;
	volatile int32_t t117 = -3710;

    t117 = (((x569^x570)-x571)+x572);

    if (t117 != 335) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x573 = -1;
	uint64_t x574 = 7991363658442LLU;
	int32_t x575 = -1;
	uint8_t x576 = 1U;

    t118 = (((x573^x574)-x575)+x576);

    if (t118 != 18446736082345893175LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x577 = 2U;
	static uint64_t x578 = 57LLU;
	volatile int64_t x580 = INT64_MIN;
	volatile uint64_t t119 = 116113571820556653LLU;

    t119 = (((x577^x578)-x579)+x580);

    if (t119 != 9223372036854775167LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x582 = UINT64_MAX;
	int32_t x584 = -1;
	volatile uint64_t t120 = 318803401084023182LLU;

    t120 = (((x581^x582)-x583)+x584);

    if (t120 != 18446744073709143842LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x589 = -1LL;
	int32_t x591 = -1;
	volatile int64_t t121 = 8827LL;

    t121 = (((x589^x590)-x591)+x592);

    if (t121 != -2147483647LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x597 = 1375935;
	volatile uint32_t x598 = 42515U;
	static int32_t x599 = INT32_MIN;
	volatile int64_t t122 = 913399LL;

    t122 = (((x597^x598)-x599)+x600);

    if (t122 != -9223372034705958740LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x602 = UINT8_MAX;
	int32_t x604 = 3838;
	static int32_t t123 = -1881467;

    t123 = (((x601^x602)-x603)+x604);

    if (t123 != 3830) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x605 = 1;
	int64_t x606 = -1LL;
	uint16_t x607 = 1697U;
	int32_t x608 = INT32_MIN;

    t124 = (((x605^x606)-x607)+x608);

    if (t124 != -2147485347LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	static int8_t x611 = -1;
	uint8_t x612 = UINT8_MAX;
	static int32_t t125 = 85146;

    t125 = (((x609^x610)-x611)+x612);

    if (t125 != -32257) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x613 = -270823030357LL;
	int8_t x614 = INT8_MAX;
	uint16_t x615 = 1U;
	volatile int32_t x616 = 0;
	volatile int64_t t126 = 28LL;

    t126 = (((x613^x614)-x615)+x616);

    if (t126 != -270823030317LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x617 = 3245970817LL;
	volatile uint32_t x619 = 515242U;
	static int8_t x620 = INT8_MIN;
	volatile uint64_t t127 = 2248167445955418LLU;

    t127 = (((x617^x618)-x619)+x620);

    if (t127 != 18446744070463065428LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x621 = -1;
	uint16_t x622 = 1U;
	static int64_t x623 = 294363022517148LL;
	int64_t t128 = 34050671858LL;

    t128 = (((x621^x622)-x623)+x624);

    if (t128 != -294363022549918LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x626 = INT32_MAX;
	static int8_t x627 = INT8_MIN;
	volatile uint64_t t129 = 52LLU;

    t129 = (((x625^x626)-x627)+x628);

    if (t129 != 14425567691017719LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x629 = 0;
	int8_t x630 = -1;
	static volatile int8_t x631 = INT8_MIN;
	int16_t x632 = INT16_MIN;
	int32_t t130 = -28857;

    t130 = (((x629^x630)-x631)+x632);

    if (t130 != -32641) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x633 = INT64_MIN;
	volatile int8_t x635 = INT8_MIN;
	uint8_t x636 = UINT8_MAX;
	int64_t t131 = -8268196268579LL;

    t131 = (((x633^x634)-x635)+x636);

    if (t131 != 9223236205971201736LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x644 = INT8_MIN;
	volatile uint32_t t132 = 63905256U;

    t132 = (((x641^x642)-x643)+x644);

    if (t132 != 4294068780U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x645 = 2LLU;
	int8_t x647 = -48;
	uint64_t t133 = 566121073LLU;

    t133 = (((x645^x646)-x647)+x648);

    if (t133 != 9223372036854775940LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x650 = INT64_MAX;
	uint64_t x651 = UINT64_MAX;
	volatile int8_t x652 = -1;
	volatile uint64_t t134 = 114LLU;

    t134 = (((x649^x650)-x651)+x652);

    if (t134 != 8229967465579359509LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x653 = 18784U;
	volatile int32_t x655 = -19469;
	int8_t x656 = INT8_MAX;
	int32_t t135 = 42043;

    t135 = (((x653^x654)-x655)+x656);

    if (t135 != 876) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x661 = 0U;
	int64_t x663 = 4534358791287044LL;
	uint32_t x664 = 63160U;
	int64_t t136 = 0LL;

    t136 = (((x661^x662)-x663)+x664);

    if (t136 != -4534358117696191LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x669 = 1LL;
	volatile uint8_t x670 = UINT8_MAX;
	int32_t x671 = -505161;
	int64_t x672 = INT64_MIN;

    t137 = (((x669^x670)-x671)+x672);

    if (t137 != -9223372036854270393LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x673 = 227U;
	uint32_t x674 = 21450U;
	uint16_t x675 = UINT16_MAX;
	static volatile int8_t x676 = INT8_MIN;
	static volatile uint32_t t138 = 3U;

    t138 = (((x673^x674)-x675)+x676);

    if (t138 != 4294922922U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x678 = UINT64_MAX;
	int16_t x679 = -12497;
	int32_t x680 = INT32_MIN;
	static uint64_t t139 = 232LLU;

    t139 = (((x677^x678)-x679)+x680);

    if (t139 != 18446744071562080592LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x682 = -15791;
	volatile int16_t x683 = -296;
	int16_t x684 = 4;
	int32_t t140 = -2;

    t140 = (((x681^x682)-x683)+x684);

    if (t140 != 16090) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x685 = INT32_MIN;
	static uint8_t x686 = 54U;
	int16_t x688 = INT16_MIN;
	uint32_t t141 = 230252U;

    t141 = (((x685^x686)-x687)+x688);

    if (t141 != 2147450935U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x689 = 1U;
	uint16_t x690 = UINT16_MAX;
	int16_t x691 = -14;
	int32_t x692 = -3824046;
	volatile uint32_t t142 = 28088U;

    t142 = (((x689^x690)-x691)+x692);

    if (t142 != 4291208798U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x693 = 7988992486602LLU;
	volatile int64_t x694 = -1LL;
	int16_t x695 = INT16_MAX;
	uint64_t t143 = 9554531LLU;

    t143 = (((x693^x694)-x695)+x696);

    if (t143 != 18446736084717032501LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MAX;
	int32_t x699 = INT32_MIN;
	int8_t x700 = INT8_MAX;
	volatile int32_t t144 = 189822772;

    t144 = (((x697^x698)-x699)+x700);

    if (t144 != 254) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x709 = 184205U;
	volatile int8_t x710 = -29;
	int8_t x711 = INT8_MIN;
	int16_t x712 = 2779;
	uint32_t t145 = 1U;

    t145 = (((x709^x710)-x711)+x712);

    if (t145 != 4294785993U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x714 = INT64_MIN;
	uint16_t x715 = 38U;
	static volatile int8_t x716 = -1;
	static int64_t t146 = 211LL;

    t146 = (((x713^x714)-x715)+x716);

    if (t146 != -9223372036854775592LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x717 = 8U;
	int16_t x718 = INT16_MAX;
	int16_t x719 = INT16_MIN;
	static uint64_t x720 = 13970LLU;

    t147 = (((x717^x718)-x719)+x720);

    if (t147 != 79497LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x721 = 10U;
	uint8_t x722 = UINT8_MAX;
	volatile uint64_t x723 = 253407LLU;
	int16_t x724 = -629;
	volatile uint64_t t148 = 0LLU;

    t148 = (((x721^x722)-x723)+x724);

    if (t148 != 18446744073709297825LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x726 = 2U;
	int32_t x727 = INT32_MAX;
	uint32_t x728 = 16U;

    t149 = (((x725^x726)-x727)+x728);

    if (t149 != 2147483675U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x730 = UINT64_MAX;
	volatile int32_t x731 = -96049570;
	uint16_t x732 = 43U;
	uint64_t t150 = 1235428387LLU;

    t150 = (((x729^x730)-x731)+x732);

    if (t150 != 18446744069510633933LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x735 = INT16_MIN;
	int8_t x736 = INT8_MIN;
	volatile uint64_t t151 = 63LLU;

    t151 = (((x733^x734)-x735)+x736);

    if (t151 != 2147516287LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x737 = INT16_MIN;
	int32_t x738 = 46891831;
	volatile int32_t x739 = 11;
	uint32_t t152 = 171315U;

    t152 = (((x737^x738)-x739)+x740);

    if (t152 != 4248044331U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x741 = 2646LLU;
	uint16_t x742 = UINT16_MAX;
	static volatile int64_t x744 = INT64_MIN;
	volatile uint64_t t153 = 3502531785LLU;

    t153 = (((x741^x742)-x743)+x744);

    if (t153 != 9223372036854871465LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x745 = 6U;
	uint32_t x746 = 859U;
	static uint64_t x747 = 6706547559196924LLU;
	static int64_t x748 = -1LL;

    t154 = (((x745^x746)-x747)+x748);

    if (t154 != 18440037526150355552LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x750 = INT16_MIN;
	uint32_t x751 = 112U;
	static volatile uint32_t t155 = 9758U;

    t155 = (((x749^x750)-x751)+x752);

    if (t155 != 4294901650U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x753 = -5;
	int32_t x754 = -1158184;
	static int32_t x755 = -1;
	static volatile int8_t x756 = -1;
	static volatile int32_t t156 = 0;

    t156 = (((x753^x754)-x755)+x756);

    if (t156 != 1158179) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x761 = INT32_MAX;
	static volatile uint64_t x763 = UINT64_MAX;
	static uint64_t t157 = 1219LLU;

    t157 = (((x761^x762)-x763)+x764);

    if (t157 != 2147450894LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x765 = 4;
	int32_t x766 = INT32_MIN;
	volatile int64_t x767 = INT64_MIN;
	uint8_t x768 = UINT8_MAX;
	int64_t t158 = 23549855619536088LL;

    t158 = (((x765^x766)-x767)+x768);

    if (t158 != 9223372034707292419LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = INT64_MIN;
	uint16_t x770 = 20U;
	static uint64_t x772 = 228371LLU;
	uint64_t t159 = 4849647349969LLU;

    t159 = (((x769^x770)-x771)+x772);

    if (t159 != 9223372036855004327LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x774 = INT64_MAX;
	int16_t x775 = INT16_MIN;
	uint32_t x776 = 311U;
	volatile uint64_t t160 = 5446202767104807224LLU;

    t160 = (((x773^x774)-x775)+x776);

    if (t160 != 9223372036854808887LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x777 = -29844216255570811LL;
	uint32_t x778 = UINT32_MAX;
	int8_t x779 = INT8_MIN;
	volatile uint32_t x780 = UINT32_MAX;
	volatile int64_t t161 = 1928449LL;

    t161 = (((x777^x778)-x779)+x780);

    if (t161 != -29844215567260679LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x782 = -1;
	static uint8_t x783 = UINT8_MAX;
	volatile uint64_t t162 = 83515808576133LLU;

    t162 = (((x781^x782)-x783)+x784);

    if (t162 != 253732917838LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x785 = 107LLU;
	static int64_t x786 = INT64_MIN;
	int32_t x787 = 54;
	int8_t x788 = -1;
	uint64_t t163 = 2LLU;

    t163 = (((x785^x786)-x787)+x788);

    if (t163 != 9223372036854775860LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x789 = -1LL;
	volatile uint16_t x790 = UINT16_MAX;
	int8_t x791 = 1;
	static uint32_t x792 = UINT32_MAX;
	int64_t t164 = 3896188235319LL;

    t164 = (((x789^x790)-x791)+x792);

    if (t164 != 4294901758LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x793 = INT64_MIN;
	int64_t x794 = INT64_MAX;
	volatile int32_t x796 = INT32_MAX;
	int64_t t165 = -8185660475514627LL;

    t165 = (((x793^x794)-x795)+x796);

    if (t165 != 2147483647LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x797 = 2439702086LL;
	int8_t x798 = -1;
	volatile uint16_t x800 = UINT16_MAX;

    t166 = (((x797^x798)-x799)+x800);

    if (t166 != -2439636552LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x801 = INT16_MAX;
	uint8_t x802 = 1U;
	static int8_t x803 = INT8_MIN;
	int8_t x804 = INT8_MIN;
	static int32_t t167 = 1;

    t167 = (((x801^x802)-x803)+x804);

    if (t167 != 32766) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x809 = UINT8_MAX;
	uint64_t x810 = UINT64_MAX;
	volatile int16_t x811 = 9;
	int32_t x812 = -1;
	static uint64_t t168 = 235529023715225LLU;

    t168 = (((x809^x810)-x811)+x812);

    if (t168 != 18446744073709551350LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x825 = 318723533901080LL;
	int64_t x826 = INT64_MIN;
	static int8_t x827 = -1;
	int32_t x828 = INT32_MIN;

    t169 = (((x825^x826)-x827)+x828);

    if (t169 != -9223053315468358375LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x834 = 15U;
	static int8_t x835 = -1;
	volatile uint64_t t170 = 29LLU;

    t170 = (((x833^x834)-x835)+x836);

    if (t170 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x840 = UINT16_MAX;
	static volatile int64_t t171 = -234417596939216176LL;

    t171 = (((x837^x838)-x839)+x840);

    if (t171 != -419038605848LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x842 = UINT8_MAX;
	int32_t t172 = -2883304;

    t172 = (((x841^x842)-x843)+x844);

    if (t172 != 32639) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x846 = INT16_MIN;
	int32_t x848 = -19;
	uint64_t t173 = 548360084505424147LLU;

    t173 = (((x845^x846)-x847)+x848);

    if (t173 != 18446743923982095473LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x849 = INT16_MIN;
	static int32_t x850 = INT32_MIN;
	uint16_t x852 = 32421U;
	volatile int32_t t174 = -961682971;

    t174 = (((x849^x850)-x851)+x852);

    if (t174 != 2147483305) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x853 = 228865294LLU;
	int8_t x854 = 6;
	volatile int16_t x855 = 0;
	static int64_t x856 = INT64_MIN;

    t175 = (((x853^x854)-x855)+x856);

    if (t175 != 9223372037083641096LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x857 = -1;
	int8_t x860 = -2;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = (((x857^x858)-x859)+x860);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x862 = -526360;
	uint64_t x863 = 75LLU;
	static int64_t x864 = -1LL;
	static uint64_t t177 = 17748738216336942LLU;

    t177 = (((x861^x862)-x863)+x864);

    if (t177 != 2146957212LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x865 = INT32_MIN;
	volatile int64_t x866 = -1LL;
	uint16_t x868 = UINT16_MAX;

    t178 = (((x865^x866)-x867)+x868);

    if (t178 != 2147581950LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x869 = 4U;

    t179 = (((x869^x870)-x871)+x872);

    if (t179 != 142386986870948229LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x874 = INT64_MAX;
	volatile int32_t x875 = INT32_MIN;
	static int64_t x876 = -2094026LL;

    t180 = (((x873^x874)-x875)+x876);

    if (t180 != 9223372034705198134LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x877 = 256690961LLU;
	volatile uint16_t x878 = 636U;
	volatile int16_t x880 = -3305;

    t181 = (((x877^x878)-x879)+x880);

    if (t181 != 256654469LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x881 = INT8_MIN;
	uint64_t x882 = 2247442660506LLU;
	static int8_t x883 = -1;
	uint16_t x884 = 7U;
	static volatile uint64_t t182 = 831662537181LLU;

    t182 = (((x881^x882)-x883)+x884);

    if (t182 != 18446741826266891042LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x885 = -1;
	volatile int16_t x886 = INT16_MIN;
	int64_t x887 = -9861851LL;
	int8_t x888 = -1;
	volatile int64_t t183 = -1LL;

    t183 = (((x885^x886)-x887)+x888);

    if (t183 != 9894617LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x889 = 19261U;
	static volatile int16_t x890 = -1;
	volatile int16_t x891 = 2;
	int64_t x892 = INT64_MIN;

    t184 = (((x889^x890)-x891)+x892);

    if (t184 != -9223372032559827776LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x893 = INT32_MIN;
	uint16_t x894 = 1U;
	int16_t x895 = -1;
	uint32_t x896 = UINT32_MAX;

    t185 = (((x893^x894)-x895)+x896);

    if (t185 != 2147483649U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x897 = 98347U;
	int64_t x898 = INT64_MIN;
	int8_t x899 = -1;
	volatile uint8_t x900 = 31U;
	volatile int64_t t186 = -28963LL;

    t186 = (((x897^x898)-x899)+x900);

    if (t186 != -9223372036854677429LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x901 = UINT16_MAX;
	volatile int64_t x902 = 1869144957539546LL;
	static volatile int16_t x904 = INT16_MAX;
	static volatile int64_t t187 = 182455LL;

    t187 = (((x901^x902)-x903)+x904);

    if (t187 != 1869144957627172LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x905 = -13;
	static uint64_t x907 = 2376561185941LLU;
	int32_t x908 = INT32_MIN;

    t188 = (((x905^x906)-x907)+x908);

    if (t188 != 18446741695000914782LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x909 = INT32_MAX;
	static int16_t x910 = -158;
	int8_t x911 = INT8_MIN;
	int8_t x912 = INT8_MIN;

    t189 = (((x909^x910)-x911)+x912);

    if (t189 != -2147483491) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x913 = UINT64_MAX;
	int32_t x914 = 16032;
	volatile uint64_t x915 = 2236767154LLU;
	uint8_t x916 = 13U;
	uint64_t t190 = 61648928967868LLU;

    t190 = (((x913^x914)-x915)+x916);

    if (t190 != 18446744071472768442LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x917 = UINT16_MAX;
	uint16_t x918 = UINT16_MAX;
	uint32_t x919 = 37615178U;
	uint16_t x920 = UINT16_MAX;

    t191 = (((x917^x918)-x919)+x920);

    if (t191 != 4257417653U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x921 = -15;
	volatile int16_t x922 = -1;
	static volatile int32_t x923 = INT32_MAX;
	volatile uint32_t x924 = 62343U;

    t192 = (((x921^x922)-x923)+x924);

    if (t192 != 2147546006U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x925 = INT32_MAX;
	static uint32_t x926 = 181788U;
	int8_t x928 = INT8_MIN;
	static volatile uint32_t t193 = 126759173U;

    t193 = (((x925^x926)-x927)+x928);

    if (t193 != 4294785379U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x933 = INT16_MAX;
	int16_t x934 = INT16_MIN;
	static int32_t x935 = -1;
	volatile int64_t t194 = INT64_MIN;

    t194 = (((x933^x934)-x935)+x936);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x945 = -1;
	uint64_t x946 = 2795209LLU;
	volatile uint64_t t195 = 888711076916LLU;

    t195 = (((x945^x946)-x947)+x948);

    if (t195 != 18446744069413716456LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x949 = UINT16_MAX;
	int16_t x950 = INT16_MAX;
	uint8_t x951 = UINT8_MAX;
	volatile int8_t x952 = INT8_MIN;

    t196 = (((x949^x950)-x951)+x952);

    if (t196 != 32385) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x953 = INT32_MIN;
	volatile int16_t x954 = INT16_MIN;
	int8_t x955 = -9;
	int16_t x956 = INT16_MIN;
	static volatile int32_t t197 = 7217717;

    t197 = (((x953^x954)-x955)+x956);

    if (t197 != 2147418121) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x957 = INT16_MIN;
	volatile int8_t x960 = -2;
	uint32_t t198 = 169U;

    t198 = (((x957^x958)-x959)+x960);

    if (t198 != 4259666167U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x965 = INT32_MAX;
	int8_t x967 = -1;
	static int8_t x968 = 57;

    t199 = (((x965^x966)-x967)+x968);

    if (t199 != 57) { NG(); } else { ; }
	
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

