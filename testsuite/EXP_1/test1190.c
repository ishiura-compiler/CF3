
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

static int16_t x6 = 2256;
static int32_t x16 = INT32_MIN;
static int8_t x21 = INT8_MAX;
int64_t x24 = -6799149889883755LL;
int64_t x25 = INT64_MIN;
int64_t t6 = -70864437LL;
uint64_t x29 = UINT64_MAX;
int32_t x31 = 907;
volatile int32_t t7 = -63047;
volatile uint16_t x38 = 5943U;
int64_t x45 = 11682467652298LL;
int32_t t10 = 5962;
static uint32_t x60 = UINT32_MAX;
int32_t x64 = 27547;
int8_t x65 = INT8_MAX;
uint64_t x70 = 2556345916772920LLU;
int32_t t16 = -285;
static int32_t x74 = INT32_MIN;
volatile uint64_t t17 = 123423012283942LLU;
uint8_t x82 = 0U;
uint32_t x99 = 6U;
volatile uint64_t x103 = 263556349LLU;
int32_t x107 = 18662612;
static int32_t x110 = -1;
int64_t x123 = INT64_MIN;
static uint8_t x124 = 56U;
int64_t t29 = -28LL;
uint8_t x130 = 7U;
static uint64_t x131 = UINT64_MAX;
static int64_t x135 = INT64_MIN;
int32_t x137 = 916757331;
int32_t x138 = -971431366;
uint16_t x144 = UINT16_MAX;
int16_t x153 = INT16_MAX;
int16_t x156 = -1;
volatile uint32_t x160 = 1U;
int64_t x177 = INT64_MIN;
int64_t x186 = INT64_MIN;
int32_t x190 = 3667;
int8_t x191 = 1;
uint16_t x193 = 830U;
uint8_t x197 = 6U;
volatile uint32_t x201 = UINT32_MAX;
uint16_t x204 = UINT16_MAX;
static int64_t t47 = -4LL;
int16_t x206 = INT16_MIN;
int16_t x207 = INT16_MIN;
int16_t x214 = INT16_MIN;
volatile int32_t t50 = 0;
uint8_t x221 = UINT8_MAX;
int8_t x223 = -3;
volatile int64_t x235 = 18170709858716555LL;
int32_t x238 = INT32_MAX;
volatile uint32_t t55 = 1512391U;
uint32_t t58 = 27544U;
static int8_t x253 = -1;
volatile int64_t x255 = INT64_MAX;
int8_t x256 = INT8_MAX;
int64_t t59 = 596363859840LL;
int32_t x265 = INT32_MAX;
uint64_t t61 = 1649439290LLU;
uint32_t x273 = 7481U;
int16_t x295 = -1;
volatile int32_t t67 = 452767108;
volatile int8_t x306 = INT8_MAX;
static int32_t x314 = INT32_MIN;
static int64_t x321 = -1LL;
uint64_t x322 = 551039232211880LLU;
uint64_t x326 = UINT64_MAX;
int64_t x343 = -20764421LL;
int64_t t77 = 62LL;
int8_t x349 = -4;
volatile int16_t x353 = -1547;
volatile int64_t t83 = -422074756LL;
int8_t x370 = -7;
volatile int32_t x371 = INT32_MIN;
uint64_t x372 = 17929868LLU;
int16_t x379 = INT16_MAX;
int64_t x382 = -56838622646543705LL;
int64_t x390 = -1LL;
int32_t x393 = -1;
int8_t x396 = -1;
static int32_t t90 = -44120;
static uint16_t x397 = 26U;
uint32_t x398 = 1U;
volatile uint8_t x400 = 27U;
uint8_t x402 = 6U;
volatile int64_t x404 = -1LL;
volatile int64_t t92 = 848490006LL;
volatile uint8_t x408 = UINT8_MAX;
uint64_t x410 = UINT64_MAX;
volatile int32_t t94 = -25590;
uint32_t x415 = 1U;
static uint32_t x421 = UINT32_MAX;
int64_t x427 = -1LL;
uint16_t x428 = 29U;
volatile uint64_t x433 = 40175449100LLU;
volatile int8_t x435 = INT8_MAX;
int8_t x440 = INT8_MAX;
int64_t x443 = INT64_MIN;
int8_t x447 = INT8_MIN;
static uint16_t x449 = UINT16_MAX;
uint32_t x458 = UINT32_MAX;
volatile int64_t x459 = INT64_MIN;
int64_t x466 = INT64_MIN;
int8_t x468 = 1;
volatile uint64_t t111 = 22LLU;
uint32_t x487 = 1790992785U;
int16_t x504 = INT16_MIN;
int8_t x507 = INT8_MIN;
int64_t t117 = -339558189LL;
int64_t x509 = INT64_MAX;
static int32_t x513 = INT32_MIN;
static uint32_t x516 = 3266811U;
volatile uint16_t x517 = 6932U;
static volatile int8_t x519 = INT8_MAX;
static int64_t x528 = -1LL;
int64_t t123 = -266346388580175535LL;
uint32_t x535 = UINT32_MAX;
int64_t x541 = INT64_MIN;
uint16_t x544 = 2U;
static int32_t x547 = -1;
volatile uint64_t t128 = 115439607635338LLU;
int64_t x555 = -26786784042LL;
int16_t x560 = -1;
int16_t x564 = INT16_MIN;
uint8_t x566 = 2U;
int64_t x567 = -1LL;
uint32_t x573 = UINT32_MAX;
int64_t x575 = -1509751682274524833LL;
int64_t x586 = 70857391042LL;
volatile uint64_t x588 = 231070801LLU;
uint64_t t137 = 7547098395925LLU;
static int8_t x590 = -4;
int32_t x592 = -1;
int64_t x596 = -1LL;
int32_t x604 = -480;
static uint64_t x605 = UINT64_MAX;
int64_t x614 = INT64_MIN;
int16_t x616 = INT16_MAX;
volatile int8_t x618 = INT8_MAX;
static int32_t x619 = -1;
volatile int64_t x626 = INT64_MIN;
int32_t t148 = -312;
int16_t x645 = INT16_MIN;
int16_t x649 = -315;
volatile int64_t x650 = INT64_MIN;
volatile int64_t t153 = 13200LL;
static int32_t x657 = INT32_MIN;
int8_t x661 = 0;
uint64_t x665 = 661014250362768LLU;
int8_t x670 = INT8_MAX;
volatile int16_t x672 = -7512;
int8_t x675 = INT8_MAX;
int8_t x677 = INT8_MIN;
static int32_t x686 = -59356;
volatile int16_t x687 = INT16_MIN;
uint32_t t164 = UINT32_MAX;
uint8_t x697 = 2U;
uint16_t x707 = 10715U;
uint8_t x710 = UINT8_MAX;
uint8_t x713 = 5U;
int32_t t168 = 2654;
volatile uint32_t t169 = 5245U;
uint64_t x722 = 339LLU;
int16_t x725 = INT16_MIN;
uint16_t x726 = 9865U;
int64_t x727 = -1LL;
int16_t x729 = -1;
int32_t t173 = -4;
volatile int8_t x740 = -19;
volatile uint64_t x743 = UINT64_MAX;
volatile uint64_t t175 = 1060188887LLU;
volatile uint64_t t176 = 1759780839628355872LLU;
uint32_t x751 = 164983924U;
int8_t x754 = 1;
uint8_t x755 = 1U;
uint16_t x756 = 2722U;
int32_t x783 = INT32_MIN;
int16_t x789 = INT16_MIN;
volatile int8_t x793 = -1;
int32_t x797 = -1;
volatile uint32_t x799 = 132U;
static int32_t x812 = -2;
int8_t x813 = INT8_MAX;
static int32_t x819 = -1;
uint64_t t194 = 16426114352314LLU;
int16_t x822 = INT16_MIN;
static int16_t x830 = -1;
static volatile int64_t t198 = -25810934671LL;
uint8_t x838 = 3U;
static volatile int32_t t199 = -835035161;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t x2 = -1LL;
	int8_t x3 = 0;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -12733;

    t0 = (((x1!=x2)+x3)^x4);

    if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	volatile int32_t x7 = -175300;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -6377097;

    t1 = (((x5!=x6)+x7)^x8);

    if (t1 != 175293) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	static volatile int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -72531540;

    t2 = (((x9!=x10)+x11)^x12);

    if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = -1LL;
	static int64_t t3 = -793615LL;

    t3 = (((x13!=x14)+x15)^x16);

    if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	volatile int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 2245;

    t4 = (((x17!=x18)+x19)^x20);

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 0U;
	volatile int8_t x23 = INT8_MAX;
	int64_t t5 = 61LL;

    t5 = (((x21!=x22)+x23)^x24);

    if (t5 != -6799149889883883LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 582457261147LL;
	int64_t x27 = INT64_MIN;
	static int64_t x28 = -150737563537LL;

    t6 = (((x25!=x26)+x27)^x28);

    if (t6 != 9223371886117212270LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = -1LL;
	int32_t x32 = INT32_MIN;

    t7 = (((x29!=x30)+x31)^x32);

    if (t7 != -2147482741) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = -1;
	int32_t x39 = -5445;
	static uint8_t x40 = 25U;
	int32_t t8 = 209;

    t8 = (((x37!=x38)+x39)^x40);

    if (t8 != -5467) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 219102LLU;
	volatile int16_t x42 = INT16_MIN;
	volatile int16_t x43 = INT16_MIN;
	uint8_t x44 = 11U;
	volatile int32_t t9 = 625720;

    t9 = (((x41!=x42)+x43)^x44);

    if (t9 != -32758) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x46 = -1;
	int32_t x47 = -103700214;
	static volatile int32_t x48 = 3807;

    t10 = (((x45!=x46)+x47)^x48);

    if (t10 != -103700524) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MAX;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -1724;

    t11 = (((x49!=x50)+x51)^x52);

    if (t11 != -32896) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t12 = -95;

    t12 = (((x53!=x54)+x55)^x56);

    if (t12 != 32641) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x57 = 0;
	volatile int8_t x58 = INT8_MAX;
	static int16_t x59 = 3906;
	volatile uint32_t t13 = 7167U;

    t13 = (((x57!=x58)+x59)^x60);

    if (t13 != 4294963388U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	static uint16_t x62 = UINT16_MAX;
	int32_t x63 = INT32_MIN;
	volatile int32_t t14 = 420;

    t14 = (((x61!=x62)+x63)^x64);

    if (t14 != -2147456101) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = INT16_MIN;
	uint64_t t15 = 1481022406285LLU;

    t15 = (((x65!=x66)+x67)^x68);

    if (t15 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 6U;
	int32_t x71 = -1;
	int16_t x72 = INT16_MIN;

    t16 = (((x69!=x70)+x71)^x72);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	uint16_t x75 = 0U;
	uint64_t x76 = 575655116LLU;

    t17 = (((x73!=x74)+x75)^x76);

    if (t17 != 575655117LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = 123138718;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 14266U;
	int32_t x80 = -1;
	uint32_t t18 = 0U;

    t18 = (((x77!=x78)+x79)^x80);

    if (t18 != 4294953028U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = INT32_MIN;
	static volatile uint8_t x83 = UINT8_MAX;
	volatile int64_t x84 = 2069LL;
	int64_t t19 = 464101LL;

    t19 = (((x81!=x82)+x83)^x84);

    if (t19 != 2325LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = 31232698965LL;
	int16_t x86 = INT16_MAX;
	static uint16_t x87 = 1582U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -753;

    t20 = (((x85!=x86)+x87)^x88);

    if (t20 != -1617) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 5;
	int64_t x90 = -476030097LL;
	volatile uint8_t x91 = 37U;
	int16_t x92 = -1;
	int32_t t21 = 11;

    t21 = (((x89!=x90)+x91)^x92);

    if (t21 != -39) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = -590LL;
	uint16_t x95 = 0U;
	static uint8_t x96 = 2U;
	volatile int32_t t22 = -14381;

    t22 = (((x93!=x94)+x95)^x96);

    if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static uint16_t x98 = 53U;
	static uint16_t x100 = 0U;
	volatile uint32_t t23 = 109U;

    t23 = (((x97!=x98)+x99)^x100);

    if (t23 != 7U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 0U;
	volatile int16_t x102 = -564;
	uint64_t x104 = 891962LLU;
	volatile uint64_t t24 = 726918667681314LLU;

    t24 = (((x101!=x102)+x103)^x104);

    if (t24 != 263721156LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 6U;
	int32_t x106 = INT32_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t25 = -26;

    t25 = (((x105!=x106)+x107)^x108);

    if (t25 != -18662571) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	volatile int16_t x111 = -9501;
	int16_t x112 = INT16_MAX;
	int32_t t26 = 6384071;

    t26 = (((x109!=x110)+x111)^x112);

    if (t26 != -23269) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	static int64_t x118 = -1LL;
	static volatile int32_t x119 = 6835;
	volatile int16_t x120 = -1;
	int32_t t27 = -60389155;

    t27 = (((x117!=x118)+x119)^x120);

    if (t27 != -6837) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x121 = UINT32_MAX;
	static int8_t x122 = 13;
	static volatile int64_t t28 = 6156320923837LL;

    t28 = (((x121!=x122)+x123)^x124);

    if (t28 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = -1;
	static int16_t x126 = INT16_MIN;
	int64_t x127 = -347323LL;
	int8_t x128 = INT8_MIN;

    t29 = (((x125!=x126)+x127)^x128);

    if (t29 != 347334LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MIN;
	uint8_t x132 = UINT8_MAX;
	static uint64_t t30 = 484473182780LLU;

    t30 = (((x129!=x130)+x131)^x132);

    if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x133 = INT16_MIN;
	static volatile uint64_t x134 = UINT64_MAX;
	static volatile int8_t x136 = INT8_MIN;
	volatile int64_t t31 = -36231614890LL;

    t31 = (((x133!=x134)+x135)^x136);

    if (t31 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x139 = 9U;
	int64_t x140 = INT64_MAX;
	static volatile int64_t t32 = -35334396168410418LL;

    t32 = (((x137!=x138)+x139)^x140);

    if (t32 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MAX;
	volatile int32_t t33 = 1898;

    t33 = (((x141!=x142)+x143)^x144);

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = 150U;
	volatile uint32_t x150 = 1U;
	uint8_t x151 = 38U;
	uint8_t x152 = 3U;
	volatile int32_t t34 = 0;

    t34 = (((x149!=x150)+x151)^x152);

    if (t34 != 36) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x154 = 4304430U;
	volatile int8_t x155 = -1;
	int32_t t35 = 2;

    t35 = (((x153!=x154)+x155)^x156);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x157 = UINT64_MAX;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 0U;
	uint32_t t36 = 188605437U;

    t36 = (((x157!=x158)+x159)^x160);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = UINT32_MAX;
	static uint64_t x162 = 6304LLU;
	static volatile int16_t x163 = INT16_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	volatile int32_t t37 = 3849;

    t37 = (((x161!=x162)+x163)^x164);

    if (t37 != -32770) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x165 = 0;
	int32_t x166 = -1;
	volatile int8_t x167 = -1;
	uint32_t x168 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

    t38 = (((x165!=x166)+x167)^x168);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x169 = INT64_MIN;
	static int64_t x170 = INT64_MIN;
	uint8_t x171 = 117U;
	int8_t x172 = -1;
	int32_t t39 = 21809449;

    t39 = (((x169!=x170)+x171)^x172);

    if (t39 != -118) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = -1LL;
	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	int32_t t40 = 831178919;

    t40 = (((x173!=x174)+x175)^x176);

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x178 = INT64_MIN;
	int64_t x179 = -73701LL;
	static int16_t x180 = -1;
	int64_t t41 = 720LL;

    t41 = (((x177!=x178)+x179)^x180);

    if (t41 != 73700LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x181 = 584U;
	static int8_t x182 = -31;
	int64_t x183 = INT64_MIN;
	volatile int16_t x184 = INT16_MAX;
	int64_t t42 = 56545LL;

    t42 = (((x181!=x182)+x183)^x184);

    if (t42 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 4627U;
	static int64_t x187 = 352LL;
	uint32_t x188 = UINT32_MAX;
	volatile int64_t t43 = -688441LL;

    t43 = (((x185!=x186)+x187)^x188);

    if (t43 != 4294966942LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = 20U;
	int16_t x192 = INT16_MAX;
	volatile int32_t t44 = -2556238;

    t44 = (((x189!=x190)+x191)^x192);

    if (t44 != 32765) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x194 = 1U;
	int16_t x195 = -105;
	static int64_t x196 = INT64_MIN;
	int64_t t45 = 924001055LL;

    t45 = (((x193!=x194)+x195)^x196);

    if (t45 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x198 = 16808225886815543LLU;
	static int64_t x199 = 20392200454275LL;
	static int8_t x200 = -1;
	int64_t t46 = 1925273477735233LL;

    t46 = (((x197!=x198)+x199)^x200);

    if (t46 != -20392200454277LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x202 = 43189961LLU;
	static int64_t x203 = 42901533271631843LL;

    t47 = (((x201!=x202)+x203)^x204);

    if (t47 != 42901533271611419LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -4;
	static uint16_t x208 = 1U;
	int32_t t48 = -9;

    t48 = (((x205!=x206)+x207)^x208);

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x209 = -1LL;
	int16_t x210 = -1;
	int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t49 = -6829188056LL;

    t49 = (((x209!=x210)+x211)^x212);

    if (t49 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = -1;
	volatile int16_t x215 = 14705;
	int8_t x216 = -1;

    t50 = (((x213!=x214)+x215)^x216);

    if (t50 != -14707) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MIN;
	uint8_t x218 = 1U;
	uint16_t x219 = 762U;
	int32_t x220 = INT32_MIN;
	int32_t t51 = 46892141;

    t51 = (((x217!=x218)+x219)^x220);

    if (t51 != -2147482885) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x222 = -1LL;
	int16_t x224 = -1;
	volatile int32_t t52 = 2484;

    t52 = (((x221!=x222)+x223)^x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MAX;
	uint8_t x226 = 30U;
	volatile int8_t x227 = -1;
	static uint16_t x228 = 62U;
	volatile int32_t t53 = 1380;

    t53 = (((x225!=x226)+x227)^x228);

    if (t53 != 62) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x233 = 73749577851893LLU;
	static uint8_t x234 = 10U;
	uint32_t x236 = 7518U;
	static int64_t t54 = -57788329LL;

    t54 = (((x233!=x234)+x235)^x236);

    if (t54 != 18170709858719442LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x237 = 7U;
	uint32_t x239 = 1878799U;
	int16_t x240 = -1;

    t55 = (((x237!=x238)+x239)^x240);

    if (t55 != 4293088495U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int16_t x242 = INT16_MIN;
	volatile int8_t x243 = INT8_MIN;
	volatile int64_t x244 = 1930LL;
	volatile int64_t t56 = 7450269836LL;

    t56 = (((x241!=x242)+x243)^x244);

    if (t56 != -2037LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MAX;
	int16_t x247 = 943;
	static int8_t x248 = INT8_MIN;
	int32_t t57 = 1005400040;

    t57 = (((x245!=x246)+x247)^x248);

    if (t57 != -976) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x249 = -1LL;
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = 2U;
	int16_t x252 = INT16_MIN;

    t58 = (((x249!=x250)+x251)^x252);

    if (t58 != 4294934531U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x254 = -1;

    t59 = (((x253!=x254)+x255)^x256);

    if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = -72209841886LL;
	int8_t x258 = -1;
	int64_t x259 = -161337130LL;
	uint16_t x260 = 241U;
	volatile int64_t t60 = -1717830LL;

    t60 = (((x257!=x258)+x259)^x260);

    if (t60 != -161337306LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x266 = 1445548592U;
	uint64_t x267 = 48LLU;
	static uint32_t x268 = UINT32_MAX;

    t61 = (((x265!=x266)+x267)^x268);

    if (t61 != 4294967246LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x274 = INT16_MAX;
	uint32_t x275 = 6318284U;
	static int32_t x276 = -83684;
	uint32_t t62 = 541U;

    t62 = (((x273!=x274)+x275)^x276);

    if (t62 != 4288598481U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x277 = 1460U;
	static uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MAX;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t63 = -27484455;

    t63 = (((x277!=x278)+x279)^x280);

    if (t63 != 65407) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x289 = INT8_MIN;
	volatile int32_t x290 = -1;
	volatile int64_t x291 = -15723489029LL;
	uint16_t x292 = 377U;
	int64_t t64 = -44770538552LL;

    t64 = (((x289!=x290)+x291)^x292);

    if (t64 != -15723488891LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = 165206870031214LLU;
	volatile int64_t x294 = -1LL;
	volatile uint64_t x296 = 5574454LLU;
	volatile uint64_t t65 = 2691408207812LLU;

    t65 = (((x293!=x294)+x295)^x296);

    if (t65 != 5574454LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x297 = -270326647451217LL;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 56076LLU;
	static uint32_t x300 = 868U;
	volatile uint64_t t66 = 23846480LLU;

    t66 = (((x297!=x298)+x299)^x300);

    if (t66 != 55401LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x301 = 7481633666LL;
	uint64_t x302 = UINT64_MAX;
	volatile int16_t x303 = INT16_MAX;
	uint16_t x304 = UINT16_MAX;

    t67 = (((x301!=x302)+x303)^x304);

    if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x305 = 0LLU;
	int16_t x307 = -1;
	int64_t x308 = INT64_MAX;
	volatile int64_t t68 = INT64_MAX;

    t68 = (((x305!=x306)+x307)^x308);

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x309 = UINT32_MAX;
	int64_t x310 = -1LL;
	volatile uint16_t x311 = UINT16_MAX;
	volatile int8_t x312 = -1;
	volatile int32_t t69 = -78;

    t69 = (((x309!=x310)+x311)^x312);

    if (t69 != -65537) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;
	volatile int64_t t70 = -1980023575975982LL;

    t70 = (((x313!=x314)+x315)^x316);

    if (t70 != 32766LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = -1LL;
	volatile uint64_t x319 = 805531844359LLU;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t71 = 2342LLU;

    t71 = (((x317!=x318)+x319)^x320);

    if (t71 != 18446743266481176328LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x323 = UINT8_MAX;
	volatile int64_t x324 = INT64_MAX;
	int64_t t72 = 893674871782444192LL;

    t72 = (((x321!=x322)+x323)^x324);

    if (t72 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x325 = UINT8_MAX;
	volatile int64_t x327 = 11590741039482LL;
	int16_t x328 = 9;
	int64_t t73 = -2LL;

    t73 = (((x325!=x326)+x327)^x328);

    if (t73 != 11590741039474LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MAX;
	int16_t x331 = -1;
	static volatile int16_t x332 = -1;
	int32_t t74 = -4236601;

    t74 = (((x329!=x330)+x331)^x332);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x333 = 3U;
	uint16_t x334 = 2702U;
	uint16_t x335 = 1U;
	static uint32_t x336 = 0U;
	volatile uint32_t t75 = 6083U;

    t75 = (((x333!=x334)+x335)^x336);

    if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x337 = 14;
	static int8_t x338 = INT8_MIN;
	static int32_t x339 = -1;
	static int64_t x340 = -1LL;
	volatile int64_t t76 = -825998LL;

    t76 = (((x337!=x338)+x339)^x340);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MAX;
	int16_t x344 = -1;

    t77 = (((x341!=x342)+x343)^x344);

    if (t77 != 20764419LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x345 = 16489589LLU;
	volatile uint32_t x346 = 19U;
	int16_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t78 = 61;

    t78 = (((x345!=x346)+x347)^x348);

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x350 = 40127793337LL;
	int32_t x351 = 1121652;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t79 = 32341U;

    t79 = (((x349!=x350)+x351)^x352);

    if (t79 != 4293845642U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x354 = INT8_MAX;
	volatile int64_t x355 = 7243532LL;
	int8_t x356 = -1;
	static int64_t t80 = 3989LL;

    t80 = (((x353!=x354)+x355)^x356);

    if (t80 != -7243534LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = INT64_MAX;
	int16_t x358 = 1;
	uint8_t x359 = UINT8_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t81 = 221;

    t81 = (((x357!=x358)+x359)^x360);

    if (t81 != 2147483391) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x361 = 25U;
	int16_t x362 = INT16_MIN;
	static uint32_t x363 = 59761U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t82 = 43LL;

    t82 = (((x361!=x362)+x363)^x364);

    if (t82 != 9223372036854716045LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x365 = UINT16_MAX;
	static int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MAX;

    t83 = (((x365!=x366)+x367)^x368);

    if (t83 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x369 = INT8_MIN;
	uint64_t t84 = 171890447LLU;

    t84 = (((x369!=x370)+x371)^x372);

    if (t84 != 18446744071579997837LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	uint64_t x375 = 2545848LLU;
	static volatile int32_t x376 = -2127607;
	volatile uint64_t t85 = 8369124LLU;

    t85 = (((x373!=x374)+x375)^x376);

    if (t85 != 18446744073709113776LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x377 = INT64_MIN;
	static int64_t x378 = INT64_MIN;
	int32_t x380 = -143145;
	volatile int32_t t86 = -3067440;

    t86 = (((x377!=x378)+x379)^x380);

    if (t86 != -151768) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x381 = INT32_MIN;
	volatile int16_t x383 = 1;
	static volatile int16_t x384 = -1;
	static int32_t t87 = 25395;

    t87 = (((x381!=x382)+x383)^x384);

    if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x385 = INT16_MIN;
	volatile int8_t x386 = -1;
	static int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	int32_t t88 = INT32_MIN;

    t88 = (((x385!=x386)+x387)^x388);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	volatile uint16_t x392 = 4504U;
	int32_t t89 = -1;

    t89 = (((x389!=x390)+x391)^x392);

    if (t89 != -28263) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x394 = -1;
	volatile uint16_t x395 = UINT16_MAX;

    t90 = (((x393!=x394)+x395)^x396);

    if (t90 != -65536) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x399 = 2075U;
	uint32_t t91 = 41U;

    t91 = (((x397!=x398)+x399)^x400);

    if (t91 != 2055U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x401 = 0U;
	volatile int64_t x403 = INT64_MIN;

    t92 = (((x401!=x402)+x403)^x404);

    if (t92 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x405 = INT16_MIN;
	static int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MAX;
	int32_t t93 = -6453182;

    t93 = (((x405!=x406)+x407)^x408);

    if (t93 != 33023) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x409 = 1U;
	uint16_t x411 = 25U;
	volatile int32_t x412 = INT32_MAX;

    t94 = (((x409!=x410)+x411)^x412);

    if (t94 != 2147483621) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x413 = -562890113553821LL;
	static int64_t x414 = INT64_MIN;
	int16_t x416 = 45;
	volatile uint32_t t95 = 1036419027U;

    t95 = (((x413!=x414)+x415)^x416);

    if (t95 != 47U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint16_t x418 = UINT16_MAX;
	int32_t x419 = 0;
	int8_t x420 = INT8_MAX;
	volatile int32_t t96 = 0;

    t96 = (((x417!=x418)+x419)^x420);

    if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x422 = 11614990U;
	int32_t x423 = -4;
	int16_t x424 = 3;
	static volatile int32_t t97 = -5266733;

    t97 = (((x421!=x422)+x423)^x424);

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x425 = -1;
	int8_t x426 = -1;
	int64_t t98 = 7164LL;

    t98 = (((x425!=x426)+x427)^x428);

    if (t98 != -30LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x429 = INT16_MAX;
	volatile int32_t x430 = -1;
	static uint32_t x431 = 2U;
	int32_t x432 = -1;
	static uint32_t t99 = 35043U;

    t99 = (((x429!=x430)+x431)^x432);

    if (t99 != 4294967292U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x434 = 61U;
	uint16_t x436 = 81U;
	static int32_t t100 = 41726206;

    t100 = (((x433!=x434)+x435)^x436);

    if (t100 != 209) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x437 = -21;
	int64_t x438 = -1459806409907448381LL;
	uint8_t x439 = UINT8_MAX;
	static int32_t t101 = 12360413;

    t101 = (((x437!=x438)+x439)^x440);

    if (t101 != 383) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x441 = -2198LL;
	static int32_t x442 = -1626813;
	static int8_t x444 = 0;
	volatile int64_t t102 = -7319528743LL;

    t102 = (((x441!=x442)+x443)^x444);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x445 = INT16_MIN;
	int8_t x446 = -1;
	static int64_t x448 = -50683341401164LL;
	static int64_t t103 = 13LL;

    t103 = (((x445!=x446)+x447)^x448);

    if (t103 != 50683341401141LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x450 = INT32_MAX;
	int32_t x451 = INT32_MIN;
	int16_t x452 = -1;
	volatile int32_t t104 = 0;

    t104 = (((x449!=x450)+x451)^x452);

    if (t104 != 2147483646) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x453 = 107U;
	static int32_t x454 = INT32_MIN;
	int16_t x455 = INT16_MIN;
	volatile int64_t x456 = INT64_MAX;
	int64_t t105 = 13LL;

    t105 = (((x453!=x454)+x455)^x456);

    if (t105 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x457 = -5971LL;
	int32_t x460 = -321696383;
	static volatile int64_t t106 = 5773908509456LL;

    t106 = (((x457!=x458)+x459)^x460);

    if (t106 != 9223372036533079424LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x461 = INT64_MIN;
	static int8_t x462 = INT8_MIN;
	int64_t x463 = 20478158724909LL;
	volatile int64_t x464 = -752791660592016441LL;
	static int64_t t107 = -30412100LL;

    t107 = (((x461!=x462)+x463)^x464);

    if (t107 != -752776895813579543LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	static volatile int64_t t108 = INT64_MIN;

    t108 = (((x465!=x466)+x467)^x468);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x469 = 6537U;
	int64_t x470 = INT64_MAX;
	static volatile int32_t x471 = 3;
	volatile int8_t x472 = -1;
	volatile int32_t t109 = -303471;

    t109 = (((x469!=x470)+x471)^x472);

    if (t109 != -5) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x473 = INT16_MAX;
	int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MIN;
	volatile int64_t t110 = 13810940899735LL;

    t110 = (((x473!=x474)+x475)^x476);

    if (t110 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x481 = 710330U;
	int64_t x482 = INT64_MIN;
	static uint64_t x483 = 2810375053684010LLU;
	volatile int64_t x484 = INT64_MIN;

    t111 = (((x481!=x482)+x483)^x484);

    if (t111 != 9226182411908459819LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x485 = 22456960957LLU;
	int8_t x486 = INT8_MIN;
	volatile uint16_t x488 = UINT16_MAX;
	volatile uint32_t t112 = 2259410U;

    t112 = (((x485!=x486)+x487)^x488);

    if (t112 != 1791008365U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x489 = 5U;
	static int32_t x490 = INT32_MAX;
	uint64_t x491 = 1LLU;
	int64_t x492 = 2234290265995555088LL;
	static volatile uint64_t t113 = 1LLU;

    t113 = (((x489!=x490)+x491)^x492);

    if (t113 != 2234290265995555090LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x493 = INT64_MAX;
	int16_t x494 = -404;
	volatile uint8_t x495 = 2U;
	static int8_t x496 = -1;
	volatile int32_t t114 = -8836579;

    t114 = (((x493!=x494)+x495)^x496);

    if (t114 != -4) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x497 = INT64_MIN;
	static int8_t x498 = INT8_MIN;
	int8_t x499 = INT8_MIN;
	int8_t x500 = -1;
	int32_t t115 = -1;

    t115 = (((x497!=x498)+x499)^x500);

    if (t115 != 126) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x501 = UINT64_MAX;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MIN;
	int32_t t116 = -6657;

    t116 = (((x501!=x502)+x503)^x504);

    if (t116 != 32641) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x505 = 5U;
	uint32_t x506 = UINT32_MAX;
	static int64_t x508 = -1LL;

    t117 = (((x505!=x506)+x507)^x508);

    if (t117 != 126LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x510 = 438979LL;
	static int32_t x511 = 6;
	uint64_t x512 = 1790170LLU;
	static volatile uint64_t t118 = 949161770736LLU;

    t118 = (((x509!=x510)+x511)^x512);

    if (t118 != 1790173LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x514 = 21515U;
	int64_t x515 = INT64_MIN;
	int64_t t119 = -1943651863741LL;

    t119 = (((x513!=x514)+x515)^x516);

    if (t119 != -9223372036851508998LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x518 = INT16_MIN;
	volatile int8_t x520 = INT8_MIN;
	int32_t t120 = 666006;

    t120 = (((x517!=x518)+x519)^x520);

    if (t120 != -256) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x521 = 250LLU;
	uint64_t x522 = 443645348430LLU;
	int16_t x523 = -1;
	int8_t x524 = INT8_MIN;
	int32_t t121 = 19913606;

    t121 = (((x521!=x522)+x523)^x524);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x525 = INT8_MIN;
	volatile int8_t x526 = INT8_MIN;
	int64_t x527 = INT64_MIN;
	static int64_t t122 = INT64_MAX;

    t122 = (((x525!=x526)+x527)^x528);

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x529 = 60LL;
	static int16_t x530 = INT16_MAX;
	int64_t x531 = -1274967LL;
	static int8_t x532 = -1;

    t123 = (((x529!=x530)+x531)^x532);

    if (t123 != 1274965LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x533 = INT16_MIN;
	static int64_t x534 = -2062143309325LL;
	static int32_t x536 = INT32_MIN;
	uint32_t t124 = 65U;

    t124 = (((x533!=x534)+x535)^x536);

    if (t124 != 2147483648U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x537 = UINT32_MAX;
	int64_t x538 = 0LL;
	uint64_t x539 = 584542915174943LLU;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t125 = 4199865012LLU;

    t125 = (((x537!=x538)+x539)^x540);

    if (t125 != 9223956579769950752LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x542 = 10533;
	int32_t x543 = -69529143;
	volatile int32_t t126 = 36670;

    t126 = (((x541!=x542)+x543)^x544);

    if (t126 != -69529144) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x545 = 1535073197LLU;
	static int16_t x546 = INT16_MAX;
	int64_t x548 = INT64_MAX;
	int64_t t127 = INT64_MAX;

    t127 = (((x545!=x546)+x547)^x548);

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x549 = INT64_MIN;
	static uint32_t x550 = UINT32_MAX;
	uint8_t x551 = 1U;
	static uint64_t x552 = 8LLU;

    t128 = (((x549!=x550)+x551)^x552);

    if (t128 != 10LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x553 = 6242LLU;
	int8_t x554 = INT8_MIN;
	static int64_t x556 = -12279631704LL;
	int64_t t129 = -1525LL;

    t129 = (((x553!=x554)+x555)^x556);

    if (t129 != 21062855807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x557 = 5599U;
	int16_t x558 = INT16_MIN;
	volatile int64_t x559 = INT64_MIN;
	volatile int64_t t130 = 409853170413202LL;

    t130 = (((x557!=x558)+x559)^x560);

    if (t130 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MAX;
	volatile uint8_t x563 = UINT8_MAX;
	int32_t t131 = 24984;

    t131 = (((x561!=x562)+x563)^x564);

    if (t131 != -32512) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x565 = 97144U;
	static int16_t x568 = -1;
	static int64_t t132 = -3108484519235469LL;

    t132 = (((x565!=x566)+x567)^x568);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x569 = 50907U;
	uint32_t x570 = UINT32_MAX;
	static uint16_t x571 = 226U;
	int8_t x572 = -52;
	static volatile int32_t t133 = -1992;

    t133 = (((x569!=x570)+x571)^x572);

    if (t133 != -209) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x574 = UINT8_MAX;
	volatile int32_t x576 = 105139705;
	static volatile int64_t t134 = -927854998LL;

    t134 = (((x573!=x574)+x575)^x576);

    if (t134 != -1509751682379101031LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x577 = UINT32_MAX;
	static int16_t x578 = -1;
	int8_t x579 = -1;
	uint64_t x580 = 1524592614838LLU;
	volatile uint64_t t135 = 1LLU;

    t135 = (((x577!=x578)+x579)^x580);

    if (t135 != 18446742549116936777LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x581 = UINT16_MAX;
	int8_t x582 = -1;
	volatile int64_t x583 = 2703LL;
	static volatile int8_t x584 = -11;
	volatile int64_t t136 = 11362073761710LL;

    t136 = (((x581!=x582)+x583)^x584);

    if (t136 != -2715LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x585 = -581;
	volatile int32_t x587 = 28946741;

    t137 = (((x585!=x586)+x587)^x588);

    if (t137 != 209481063LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x589 = 58U;
	uint16_t x591 = 254U;
	int32_t t138 = 99785;

    t138 = (((x589!=x590)+x591)^x592);

    if (t138 != -256) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x593 = 51299559721725LL;
	static int8_t x594 = -1;
	int8_t x595 = INT8_MIN;
	volatile int64_t t139 = -314LL;

    t139 = (((x593!=x594)+x595)^x596);

    if (t139 != 126LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x597 = 1;
	volatile uint8_t x598 = UINT8_MAX;
	int64_t x599 = INT64_MIN;
	int16_t x600 = -63;
	volatile int64_t t140 = 10455LL;

    t140 = (((x597!=x598)+x599)^x600);

    if (t140 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x601 = 2U;
	uint64_t x602 = 2003161799011868LLU;
	int16_t x603 = 3663;
	volatile int32_t t141 = 842946955;

    t141 = (((x601!=x602)+x603)^x604);

    if (t141 != -3984) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x606 = -27178;
	volatile int16_t x607 = 2;
	volatile uint32_t x608 = UINT32_MAX;
	volatile uint32_t t142 = 289290U;

    t142 = (((x605!=x606)+x607)^x608);

    if (t142 != 4294967292U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x609 = 1U;
	int32_t x610 = -5669;
	static int64_t x611 = INT64_MIN;
	uint16_t x612 = UINT16_MAX;
	int64_t t143 = 137197LL;

    t143 = (((x609!=x610)+x611)^x612);

    if (t143 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x613 = INT32_MAX;
	uint8_t x615 = 0U;
	volatile int32_t t144 = -2442465;

    t144 = (((x613!=x614)+x615)^x616);

    if (t144 != 32766) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x617 = 0;
	int64_t x620 = INT64_MIN;
	volatile int64_t t145 = INT64_MIN;

    t145 = (((x617!=x618)+x619)^x620);

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x622 = INT8_MIN;
	uint16_t x623 = 1782U;
	volatile uint16_t x624 = 0U;
	volatile int32_t t146 = 112;

    t146 = (((x621!=x622)+x623)^x624);

    if (t146 != 1783) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x625 = 13702620546167645LLU;
	uint64_t x627 = 54LLU;
	int32_t x628 = INT32_MIN;
	uint64_t t147 = 47963928596LLU;

    t147 = (((x625!=x626)+x627)^x628);

    if (t147 != 18446744071562068023LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x629 = 1167442591LLU;
	uint16_t x630 = 1983U;
	uint16_t x631 = 13330U;
	int16_t x632 = -1;

    t148 = (((x629!=x630)+x631)^x632);

    if (t148 != -13332) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x633 = -1;
	static volatile int32_t x634 = INT32_MAX;
	int64_t x635 = -2615562LL;
	volatile uint8_t x636 = 117U;
	volatile int64_t t149 = 133143566LL;

    t149 = (((x633!=x634)+x635)^x636);

    if (t149 != -2615678LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x637 = UINT8_MAX;
	volatile int8_t x638 = 5;
	static int16_t x639 = INT16_MIN;
	int16_t x640 = -1;
	int32_t t150 = 135471;

    t150 = (((x637!=x638)+x639)^x640);

    if (t150 != 32766) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x641 = -52105277671425LL;
	static uint32_t x642 = UINT32_MAX;
	int16_t x643 = INT16_MAX;
	uint32_t x644 = UINT32_MAX;
	static volatile uint32_t t151 = 1329U;

    t151 = (((x641!=x642)+x643)^x644);

    if (t151 != 4294934527U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x646 = 120U;
	int16_t x647 = INT16_MAX;
	uint8_t x648 = UINT8_MAX;
	int32_t t152 = 80844162;

    t152 = (((x645!=x646)+x647)^x648);

    if (t152 != 33023) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x651 = 73U;
	static int64_t x652 = -1LL;

    t153 = (((x649!=x650)+x651)^x652);

    if (t153 != -75LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x653 = INT8_MIN;
	uint16_t x654 = UINT16_MAX;
	int8_t x655 = 7;
	int8_t x656 = INT8_MAX;
	static volatile int32_t t154 = -10905;

    t154 = (((x653!=x654)+x655)^x656);

    if (t154 != 119) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x658 = INT32_MAX;
	uint64_t x659 = UINT64_MAX;
	int64_t x660 = -1LL;
	volatile uint64_t t155 = UINT64_MAX;

    t155 = (((x657!=x658)+x659)^x660);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x662 = INT64_MAX;
	volatile int8_t x663 = INT8_MAX;
	static volatile int32_t x664 = INT32_MAX;
	volatile int32_t t156 = -5;

    t156 = (((x661!=x662)+x663)^x664);

    if (t156 != 2147483519) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x666 = -1;
	int32_t x667 = -1;
	volatile int32_t x668 = INT32_MIN;
	int32_t t157 = INT32_MIN;

    t157 = (((x665!=x666)+x667)^x668);

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x669 = 493U;
	static int16_t x671 = 3704;
	volatile int32_t t158 = -12;

    t158 = (((x669!=x670)+x671)^x672);

    if (t158 != -4911) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x673 = 169900879648LL;
	uint16_t x674 = UINT16_MAX;
	uint16_t x676 = 196U;
	volatile int32_t t159 = -41467;

    t159 = (((x673!=x674)+x675)^x676);

    if (t159 != 68) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x678 = -26;
	volatile int16_t x679 = -905;
	uint64_t x680 = 29847530432829360LLU;
	volatile uint64_t t160 = 55303526561529756LLU;

    t160 = (((x677!=x678)+x679)^x680);

    if (t160 != 18416896543276723144LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = -1LL;
	uint8_t x683 = UINT8_MAX;
	int8_t x684 = 0;
	int32_t t161 = -442;

    t161 = (((x681!=x682)+x683)^x684);

    if (t161 != 256) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x685 = 0U;
	volatile uint16_t x688 = 85U;
	volatile int32_t t162 = -208;

    t162 = (((x685!=x686)+x687)^x688);

    if (t162 != -32684) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x689 = INT32_MIN;
	volatile int8_t x690 = 1;
	uint8_t x691 = 0U;
	volatile int32_t x692 = INT32_MIN;
	static int32_t t163 = 2279;

    t163 = (((x689!=x690)+x691)^x692);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x693 = 448131U;
	volatile int8_t x694 = INT8_MAX;
	uint32_t x695 = UINT32_MAX;
	int8_t x696 = -1;

    t164 = (((x693!=x694)+x695)^x696);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x698 = -1;
	uint16_t x699 = 28752U;
	int64_t x700 = INT64_MIN;
	static volatile int64_t t165 = -2941216177452LL;

    t165 = (((x697!=x698)+x699)^x700);

    if (t165 != -9223372036854747055LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x705 = INT16_MIN;
	uint64_t x706 = 2155290655LLU;
	static volatile int8_t x708 = 16;
	int32_t t166 = 631;

    t166 = (((x705!=x706)+x707)^x708);

    if (t166 != 10700) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x709 = 4U;
	uint16_t x711 = 76U;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t167 = 438914145;

    t167 = (((x709!=x710)+x711)^x712);

    if (t167 != 65458) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x714 = -29088;
	volatile uint8_t x715 = 8U;
	static int32_t x716 = INT32_MAX;

    t168 = (((x713!=x714)+x715)^x716);

    if (t168 != 2147483638) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x717 = 29782769LLU;
	static uint16_t x718 = 86U;
	static int8_t x719 = INT8_MAX;
	uint32_t x720 = 240257773U;

    t169 = (((x717!=x718)+x719)^x720);

    if (t169 != 240257645U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x721 = -1;
	int32_t x723 = 47881440;
	uint8_t x724 = 49U;
	int32_t t170 = 478837634;

    t170 = (((x721!=x722)+x723)^x724);

    if (t170 != 47881424) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x728 = INT32_MAX;
	int64_t t171 = -1218861LL;

    t171 = (((x725!=x726)+x727)^x728);

    if (t171 != 2147483647LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x730 = UINT64_MAX;
	uint8_t x731 = 5U;
	volatile uint16_t x732 = 843U;
	int32_t t172 = -32223;

    t172 = (((x729!=x730)+x731)^x732);

    if (t172 != 846) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x733 = -1;
	int32_t x734 = INT32_MIN;
	int16_t x735 = -383;
	int16_t x736 = INT16_MIN;

    t173 = (((x733!=x734)+x735)^x736);

    if (t173 != 32386) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x737 = 0U;
	uint8_t x738 = UINT8_MAX;
	volatile int8_t x739 = 1;
	volatile int32_t t174 = -671713075;

    t174 = (((x737!=x738)+x739)^x740);

    if (t174 != -17) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x741 = INT16_MIN;
	volatile uint16_t x742 = 21400U;
	int8_t x744 = INT8_MIN;

    t175 = (((x741!=x742)+x743)^x744);

    if (t175 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x745 = 13U;
	int8_t x746 = INT8_MIN;
	static volatile uint64_t x747 = 146605326LLU;
	volatile int8_t x748 = INT8_MIN;

    t176 = (((x745!=x746)+x747)^x748);

    if (t176 != 18446744073562946191LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x749 = -513;
	int64_t x750 = INT64_MIN;
	int32_t x752 = INT32_MIN;
	volatile uint32_t t177 = 31020U;

    t177 = (((x749!=x750)+x751)^x752);

    if (t177 != 2312467573U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x753 = 58U;
	static int32_t t178 = 30902;

    t178 = (((x753!=x754)+x755)^x756);

    if (t178 != 2720) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x757 = INT8_MIN;
	int16_t x758 = INT16_MAX;
	int8_t x759 = INT8_MAX;
	static int16_t x760 = -1;
	volatile int32_t t179 = 706;

    t179 = (((x757!=x758)+x759)^x760);

    if (t179 != -129) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x761 = -2;
	uint16_t x762 = UINT16_MAX;
	volatile int16_t x763 = INT16_MIN;
	volatile int32_t x764 = -534;
	volatile int32_t t180 = -156842;

    t180 = (((x761!=x762)+x763)^x764);

    if (t180 != 32235) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x765 = 1U;
	static int16_t x766 = -59;
	int64_t x767 = -1LL;
	uint32_t x768 = 866U;
	int64_t t181 = -3678668LL;

    t181 = (((x765!=x766)+x767)^x768);

    if (t181 != 866LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x769 = UINT8_MAX;
	volatile int16_t x770 = INT16_MIN;
	int32_t x771 = INT32_MIN;
	int64_t x772 = INT64_MIN;
	int64_t t182 = 3LL;

    t182 = (((x769!=x770)+x771)^x772);

    if (t182 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x773 = 27U;
	volatile int8_t x774 = 0;
	int16_t x775 = -1;
	int32_t x776 = -1263617;
	int32_t t183 = 260980;

    t183 = (((x773!=x774)+x775)^x776);

    if (t183 != -1263617) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = 0;
	int64_t x778 = -1LL;
	volatile int64_t x779 = 898LL;
	uint64_t x780 = 11747646815674LLU;
	uint64_t t184 = 1043006977743LLU;

    t184 = (((x777!=x778)+x779)^x780);

    if (t184 != 11747646815801LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x781 = 3483549U;
	volatile uint16_t x782 = 17U;
	int16_t x784 = -1;
	volatile int32_t t185 = 71338833;

    t185 = (((x781!=x782)+x783)^x784);

    if (t185 != 2147483646) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x785 = INT8_MIN;
	volatile int32_t x786 = INT32_MAX;
	int32_t x787 = INT32_MIN;
	uint32_t x788 = 114U;
	uint32_t t186 = 125U;

    t186 = (((x785!=x786)+x787)^x788);

    if (t186 != 2147483763U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x790 = 426431304U;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = UINT64_MAX;
	volatile uint64_t t187 = 51372129581822LLU;

    t187 = (((x789!=x790)+x791)^x792);

    if (t187 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x794 = UINT32_MAX;
	volatile uint8_t x795 = 6U;
	uint64_t x796 = 120637786584LLU;
	volatile uint64_t t188 = 1630115304LLU;

    t188 = (((x793!=x794)+x795)^x796);

    if (t188 != 120637786590LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x798 = INT32_MAX;
	int32_t x800 = -5526;
	volatile uint32_t t189 = 907337793U;

    t189 = (((x797!=x798)+x799)^x800);

    if (t189 != 4294961903U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x801 = -1;
	int64_t x802 = INT64_MAX;
	int32_t x803 = -1;
	uint32_t x804 = 789U;
	volatile uint32_t t190 = 563U;

    t190 = (((x801!=x802)+x803)^x804);

    if (t190 != 789U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x805 = INT8_MIN;
	int32_t x806 = INT32_MIN;
	volatile int16_t x807 = INT16_MAX;
	int16_t x808 = -6117;
	int32_t t191 = -1;

    t191 = (((x805!=x806)+x807)^x808);

    if (t191 != -38885) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x809 = INT32_MIN;
	static int16_t x810 = INT16_MAX;
	uint16_t x811 = 3511U;
	static int32_t t192 = -6775058;

    t192 = (((x809!=x810)+x811)^x812);

    if (t192 != -3514) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x814 = -1;
	static volatile int16_t x815 = -510;
	int64_t x816 = INT64_MIN;
	volatile int64_t t193 = 380926507347839LL;

    t193 = (((x813!=x814)+x815)^x816);

    if (t193 != 9223372036854775299LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x817 = 740U;
	static int16_t x818 = INT16_MAX;
	static uint64_t x820 = 2022899LLU;

    t194 = (((x817!=x818)+x819)^x820);

    if (t194 != 2022899LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x821 = UINT32_MAX;
	uint32_t x823 = UINT32_MAX;
	volatile int16_t x824 = INT16_MIN;
	static uint32_t t195 = 10134547U;

    t195 = (((x821!=x822)+x823)^x824);

    if (t195 != 4294934528U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x825 = UINT32_MAX;
	volatile uint16_t x826 = UINT16_MAX;
	volatile uint64_t x827 = 38LLU;
	int32_t x828 = -26;
	uint64_t t196 = 2867123564489LLU;

    t196 = (((x825!=x826)+x827)^x828);

    if (t196 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x829 = UINT32_MAX;
	int8_t x831 = 6;
	volatile uint64_t x832 = UINT64_MAX;
	static volatile uint64_t t197 = 1106624235669LLU;

    t197 = (((x829!=x830)+x831)^x832);

    if (t197 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x833 = INT16_MIN;
	int32_t x834 = INT32_MAX;
	int64_t x835 = -6041790LL;
	uint32_t x836 = UINT32_MAX;

    t198 = (((x833!=x834)+x835)^x836);

    if (t198 != -4288925508LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x837 = INT16_MIN;
	volatile int8_t x839 = INT8_MIN;
	int8_t x840 = -15;

    t199 = (((x837!=x838)+x839)^x840);

    if (t199 != 112) { NG(); } else { ; }
	
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

