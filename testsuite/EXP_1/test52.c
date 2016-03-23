
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

int32_t x1 = INT32_MIN;
int64_t x7 = INT64_MIN;
int16_t x8 = INT16_MIN;
uint16_t x21 = UINT16_MAX;
int64_t x26 = -7LL;
static int8_t x28 = INT8_MAX;
uint32_t x29 = 34032117U;
int32_t x31 = -3247133;
int64_t x32 = INT64_MIN;
int16_t x35 = INT16_MAX;
volatile int32_t t8 = 0;
volatile int32_t t9 = -1984;
int32_t x42 = 33902;
static volatile int32_t x45 = INT32_MIN;
int64_t x54 = -1LL;
volatile int32_t t13 = -58;
volatile int16_t x59 = INT16_MIN;
int64_t x66 = -1LL;
int16_t x67 = INT16_MAX;
int8_t x72 = INT8_MAX;
uint32_t x73 = 6U;
int32_t x74 = -77852706;
volatile int8_t x77 = -1;
uint8_t x81 = 81U;
int32_t x84 = -1;
int64_t x85 = -2479396LL;
uint32_t x93 = UINT32_MAX;
volatile int32_t t22 = 7681065;
volatile int8_t x108 = -1;
uint8_t x110 = 12U;
int8_t x113 = 0;
int32_t x115 = -1;
uint8_t x123 = 14U;
int32_t t28 = -1190;
static uint32_t x125 = UINT32_MAX;
static int32_t x127 = -1;
int16_t x131 = INT16_MAX;
int8_t x136 = -4;
volatile uint8_t x144 = 7U;
static int32_t x150 = -1;
int64_t x152 = 4956101149LL;
volatile int32_t t34 = -26336;
int16_t x155 = INT16_MIN;
uint8_t x156 = 2U;
int32_t t37 = -481289007;
int16_t x167 = -1;
static int16_t x168 = INT16_MIN;
int32_t t38 = 410080;
int64_t x171 = INT64_MIN;
int32_t t39 = -1198032;
int32_t x183 = -1;
int32_t x190 = INT32_MIN;
int16_t x191 = INT16_MIN;
uint8_t x193 = UINT8_MAX;
volatile int16_t x196 = INT16_MAX;
volatile int16_t x197 = 2;
uint64_t x202 = 91524455318177LLU;
int8_t x203 = -1;
volatile uint8_t x204 = 126U;
int64_t x211 = 57905LL;
static int8_t x215 = INT8_MIN;
volatile int64_t x221 = INT64_MIN;
volatile int64_t x224 = INT64_MAX;
volatile uint64_t x225 = UINT64_MAX;
int32_t t51 = 17403;
uint64_t x234 = UINT64_MAX;
uint16_t x244 = 222U;
uint32_t x252 = 170U;
int8_t x253 = INT8_MAX;
int64_t x255 = -1LL;
uint64_t x261 = UINT64_MAX;
int8_t x265 = INT8_MIN;
static volatile int8_t x268 = 0;
static volatile int32_t t61 = -122914;
int64_t x270 = 19309774010LL;
int64_t x271 = INT64_MAX;
uint8_t x273 = UINT8_MAX;
uint16_t x276 = 0U;
int64_t x279 = INT64_MAX;
static uint32_t x280 = 25256923U;
int64_t x282 = INT64_MAX;
static uint32_t x284 = 182585U;
volatile uint64_t x289 = 100727193LLU;
static uint64_t x294 = UINT64_MAX;
volatile int32_t t67 = -106;
int64_t x298 = INT64_MIN;
int64_t x299 = INT64_MIN;
uint32_t x309 = 12080U;
int16_t x311 = INT16_MIN;
static uint16_t x316 = 5876U;
int16_t x321 = -1;
int16_t x325 = -1;
int16_t x328 = -1;
static uint32_t x329 = 402U;
uint16_t x334 = 144U;
int64_t x338 = INT64_MAX;
int64_t x346 = INT64_MAX;
int16_t x349 = INT16_MIN;
int32_t x353 = 3;
uint32_t x354 = 25725202U;
volatile int32_t t81 = 14151;
int8_t x357 = INT8_MIN;
int64_t x359 = INT64_MIN;
uint64_t x367 = 9226861680271998LLU;
static uint64_t x371 = UINT64_MAX;
volatile int64_t x372 = -387685482899823LL;
uint32_t x373 = UINT32_MAX;
int32_t x377 = -1;
int16_t x379 = -1;
volatile int32_t t87 = -2083;
static uint8_t x382 = 2U;
static int64_t x383 = INT64_MIN;
int64_t x391 = -7103220531633647LL;
static volatile int8_t x403 = -20;
static volatile int32_t t91 = -138;
int8_t x407 = -1;
int64_t x416 = INT64_MAX;
static int16_t x418 = -499;
int64_t x423 = INT64_MIN;
volatile int8_t x425 = 0;
uint32_t x426 = UINT32_MAX;
int8_t x427 = -4;
int8_t x431 = INT8_MIN;
static uint32_t x440 = 14623U;
uint16_t x444 = 6342U;
volatile int32_t t100 = 22097429;
volatile uint8_t x453 = 5U;
static int8_t x457 = -7;
uint32_t x458 = UINT32_MAX;
int64_t x459 = -110784536712LL;
int64_t x460 = 177275422599556LL;
int32_t x465 = INT32_MIN;
int8_t x468 = -1;
uint32_t x476 = 8220715U;
int32_t x484 = -304167642;
static int32_t t109 = 26;
static int64_t x486 = 79795LL;
int16_t x511 = -5976;
int16_t x524 = 603;
volatile uint64_t x529 = UINT64_MAX;
volatile int32_t t117 = 1;
int64_t x534 = 1965LL;
int16_t x535 = INT16_MAX;
int32_t t118 = 13753633;
volatile uint16_t x542 = UINT16_MAX;
int16_t x545 = 21;
int32_t x547 = INT32_MIN;
int32_t t121 = -1;
int32_t t123 = 1;
int16_t x572 = 594;
static volatile int16_t x574 = INT16_MIN;
volatile int16_t x576 = INT16_MAX;
int32_t x578 = 63318;
uint8_t x581 = 4U;
int32_t x582 = -293;
uint64_t x591 = UINT64_MAX;
volatile int32_t t133 = -14896;
static int64_t x608 = INT64_MIN;
int8_t x610 = -20;
static volatile int64_t x611 = 1836913LL;
volatile int64_t x615 = INT64_MIN;
volatile int64_t x616 = INT64_MIN;
volatile int32_t x623 = -26187;
int32_t x626 = 7953162;
int16_t x630 = -1;
static int64_t x636 = INT64_MIN;
int64_t x637 = 44820438030LL;
static int16_t x639 = -1;
uint8_t x644 = 19U;
int32_t x648 = INT32_MAX;
int32_t x650 = INT32_MIN;
volatile int64_t x656 = INT64_MAX;
uint32_t x657 = UINT32_MAX;
static uint32_t x659 = UINT32_MAX;
int8_t x662 = 36;
int16_t x673 = INT16_MIN;
uint16_t x676 = UINT16_MAX;
uint64_t x680 = 0LLU;
int64_t x687 = INT64_MIN;
volatile int64_t x692 = INT64_MIN;
static int8_t x695 = INT8_MIN;
static int16_t x698 = INT16_MIN;
int8_t x702 = INT8_MIN;
static uint64_t x707 = UINT64_MAX;
volatile uint32_t x709 = 771U;
uint64_t x714 = UINT64_MAX;
static int32_t t159 = -4022;
static volatile uint16_t x719 = 3U;
uint64_t x722 = 137355820374LLU;
int8_t x732 = -5;
int32_t t163 = -34518203;
static uint8_t x733 = UINT8_MAX;
volatile int16_t x741 = INT16_MIN;
int64_t x746 = -1LL;
int32_t x764 = -1;
int64_t x765 = -44171016LL;
uint64_t x779 = 1076548853078LLU;
volatile int32_t t175 = 25089;
int32_t t176 = -6365388;
static volatile int32_t t178 = -40052047;
int64_t x803 = 246LL;
int64_t x805 = 67796025371405LL;
int32_t t181 = 42;
int32_t x811 = INT32_MIN;
int16_t x813 = INT16_MIN;
int8_t x814 = INT8_MAX;
volatile uint16_t x816 = 3U;
volatile int32_t t183 = -294;
static int64_t x817 = -57843005LL;
uint32_t x818 = UINT32_MAX;
uint32_t x819 = UINT32_MAX;
uint64_t x820 = UINT64_MAX;
static volatile int32_t t184 = -245603423;
int32_t x828 = INT32_MAX;
volatile int32_t t186 = 4916118;
uint16_t x832 = 119U;
volatile int32_t t189 = -36735;
int8_t x843 = -1;
int32_t x850 = -88304;
int64_t x853 = -4174492LL;
int8_t x855 = INT8_MIN;
static int8_t x856 = INT8_MIN;
static int64_t x860 = INT64_MIN;
uint64_t x869 = UINT64_MAX;
int32_t x872 = -1;
static uint8_t x873 = 20U;
volatile int32_t t197 = 4259;
uint8_t x877 = 0U;


void f0(void) {
    	static uint64_t x2 = 383614LLU;
	volatile int32_t x3 = INT32_MIN;
	volatile uint64_t x4 = 1755LLU;
	volatile int32_t t0 = -241;

    t0 = (((x1+x2)/x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = -1;
	static volatile int32_t t1 = 5243721;

    t1 = (((x5+x6)/x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile int32_t x10 = -1;
	static volatile int16_t x11 = -3084;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = 4;

    t2 = (((x9+x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 3129557;
	int8_t x14 = -24;
	int16_t x15 = 65;
	int64_t x16 = -1255LL;
	volatile int32_t t3 = -60813318;

    t3 = (((x13+x14)/x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int32_t x18 = -2001;
	int32_t x19 = 26;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -115966;

    t4 = (((x17+x18)/x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -125;
	uint8_t x23 = 53U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 1;

    t5 = (((x21+x22)/x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static volatile uint16_t x27 = 7444U;
	volatile int32_t t6 = 0;

    t6 = (((x25+x26)/x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = UINT16_MAX;
	int32_t t7 = -21891;

    t7 = (((x29+x30)/x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int16_t x34 = 119;
	int8_t x36 = -2;

    t8 = (((x33+x34)/x35)<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 26;
	int32_t x38 = 50598;
	volatile uint32_t x39 = 1U;
	uint8_t x40 = 18U;

    t9 = (((x37+x38)/x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 0U;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -138632LL;
	int32_t t10 = -59509;

    t10 = (((x41+x42)/x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = 3;
	static int64_t x47 = -1LL;
	uint16_t x48 = 98U;
	int32_t t11 = 398649859;

    t11 = (((x45+x46)/x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint32_t x50 = 492U;
	uint8_t x51 = 1U;
	int8_t x52 = -1;
	volatile int32_t t12 = -5;

    t12 = (((x49+x50)/x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	uint8_t x55 = 1U;
	uint64_t x56 = 769500980884771171LLU;

    t13 = (((x53+x54)/x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	uint8_t x58 = 66U;
	int8_t x60 = -1;
	volatile int32_t t14 = 100223222;

    t14 = (((x57+x58)/x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	static int8_t x68 = INT8_MAX;
	volatile int32_t t15 = -1;

    t15 = (((x65+x66)/x67)<=x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x69 = -1LL;
	volatile int64_t x70 = 4151790142959LL;
	static volatile uint32_t x71 = 989U;
	volatile int32_t t16 = 359581941;

    t16 = (((x69+x70)/x71)<=x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x75 = INT16_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -19169;

    t17 = (((x73+x74)/x75)<=x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = 53404697499LLU;
	int64_t x79 = 5563644423631359LL;
	uint8_t x80 = UINT8_MAX;
	static int32_t t18 = 199;

    t18 = (((x77+x78)/x79)<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int32_t t19 = 213079487;

    t19 = (((x81+x82)/x83)<=x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x86 = 86U;
	int32_t x87 = -1;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t20 = 1;

    t20 = (((x85+x86)/x87)<=x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	uint64_t x90 = 8833846643LLU;
	volatile int64_t x91 = -1LL;
	volatile int16_t x92 = INT16_MIN;
	static volatile int32_t t21 = 5;

    t21 = (((x89+x90)/x91)<=x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x94 = INT16_MAX;
	int16_t x95 = 1369;
	int16_t x96 = -1;

    t22 = (((x93+x94)/x95)<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	uint64_t x99 = 16831108341LLU;
	int16_t x100 = INT16_MIN;
	volatile int32_t t23 = -1;

    t23 = (((x97+x98)/x99)<=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x105 = 149;
	uint16_t x106 = 21305U;
	static int32_t x107 = -6493;
	int32_t t24 = -479;

    t24 = (((x105+x106)/x107)<=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = 7000042002LL;
	uint16_t x111 = 5U;
	static int16_t x112 = INT16_MIN;
	int32_t t25 = -1174424;

    t25 = (((x109+x110)/x111)<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x114 = INT8_MAX;
	int32_t x116 = INT32_MIN;
	int32_t t26 = 3;

    t26 = (((x113+x114)/x115)<=x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 2706LLU;
	int8_t x118 = INT8_MIN;
	static volatile int8_t x119 = -1;
	uint64_t x120 = 16973759178684650LLU;
	static volatile int32_t t27 = -75337;

    t27 = (((x117+x118)/x119)<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 322U;
	int32_t x122 = INT32_MIN;
	uint32_t x124 = 151620U;

    t28 = (((x121+x122)/x123)<=x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x126 = INT8_MIN;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t29 = 1;

    t29 = (((x125+x126)/x127)<=x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 4596U;
	volatile uint16_t x130 = 0U;
	static int16_t x132 = INT16_MAX;
	volatile int32_t t30 = 9126462;

    t30 = (((x129+x130)/x131)<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = UINT64_MAX;
	volatile uint8_t x134 = 0U;
	int64_t x135 = INT64_MIN;
	static volatile int32_t t31 = -393811;

    t31 = (((x133+x134)/x135)<=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint8_t x138 = 9U;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -10954;
	int32_t t32 = 39605206;

    t32 = (((x137+x138)/x139)<=x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MIN;
	int32_t t33 = -58;

    t33 = (((x141+x142)/x143)<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	static int16_t x151 = -1;

    t34 = (((x149+x150)/x151)<=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x153 = -1;
	int16_t x154 = -1;
	static volatile int32_t t35 = 12297;

    t35 = (((x153+x154)/x155)<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	volatile int8_t x158 = 0;
	int32_t x159 = -1;
	int16_t x160 = INT16_MAX;
	static volatile int32_t t36 = 708;

    t36 = (((x157+x158)/x159)<=x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 902358436U;
	int32_t x162 = 1;
	uint32_t x163 = 486U;
	uint8_t x164 = 3U;

    t37 = (((x161+x162)/x163)<=x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MAX;
	int64_t x166 = INT64_MIN;

    t38 = (((x165+x166)/x167)<=x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x169 = -1LL;
	static int32_t x170 = INT32_MAX;
	int8_t x172 = INT8_MIN;

    t39 = (((x169+x170)/x171)<=x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x177 = UINT32_MAX;
	volatile uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	int64_t x180 = -1430521796LL;
	static int32_t t40 = -3;

    t40 = (((x177+x178)/x179)<=x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x181 = INT8_MAX;
	static int64_t x182 = INT64_MIN;
	static int64_t x184 = INT64_MAX;
	static volatile int32_t t41 = 1835338;

    t41 = (((x181+x182)/x183)<=x184);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = 0;
	volatile uint16_t x192 = UINT16_MAX;
	static int32_t t42 = -79;

    t42 = (((x189+x190)/x191)<=x192);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x194 = UINT32_MAX;
	int64_t x195 = 1LL;
	int32_t t43 = 1506;

    t43 = (((x193+x194)/x195)<=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x198 = INT64_MIN;
	int32_t x199 = 7543;
	uint64_t x200 = UINT64_MAX;
	static int32_t t44 = -201715321;

    t44 = (((x197+x198)/x199)<=x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 6LLU;
	static int32_t t45 = -499051215;

    t45 = (((x201+x202)/x203)<=x204);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = -1;
	uint64_t x206 = 4948824437992315274LLU;
	uint64_t x207 = 8314634518515LLU;
	uint32_t x208 = UINT32_MAX;
	int32_t t46 = 9;

    t46 = (((x205+x206)/x207)<=x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x209 = -826362781833117067LL;
	int8_t x210 = INT8_MAX;
	int16_t x212 = 2298;
	int32_t t47 = -165;

    t47 = (((x209+x210)/x211)<=x212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = 0;
	int32_t x214 = -1;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t48 = 2813771;

    t48 = (((x213+x214)/x215)<=x216);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = -140LL;
	int32_t x218 = INT32_MAX;
	volatile int32_t x219 = 254;
	volatile int8_t x220 = 4;
	static volatile int32_t t49 = -8;

    t49 = (((x217+x218)/x219)<=x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x222 = 25490LLU;
	uint8_t x223 = 6U;
	volatile int32_t t50 = -12;

    t50 = (((x221+x222)/x223)<=x224);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

    t51 = (((x225+x226)/x227)<=x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = -7LL;
	int16_t x230 = INT16_MAX;
	int32_t x231 = INT32_MIN;
	static uint64_t x232 = UINT64_MAX;
	static int32_t t52 = -831663;

    t52 = (((x229+x230)/x231)<=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x233 = 231203U;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = 240717087U;
	volatile int32_t t53 = -2;

    t53 = (((x233+x234)/x235)<=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x237 = 55U;
	int32_t x238 = 11;
	uint64_t x239 = UINT64_MAX;
	uint8_t x240 = 0U;
	volatile int32_t t54 = 15;

    t54 = (((x237+x238)/x239)<=x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x241 = 2923U;
	int8_t x242 = 18;
	volatile uint64_t x243 = UINT64_MAX;
	int32_t t55 = -153425119;

    t55 = (((x241+x242)/x243)<=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x245 = INT32_MAX;
	uint32_t x246 = 31U;
	volatile int32_t x247 = 727940;
	volatile int64_t x248 = INT64_MAX;
	volatile int32_t t56 = -13913303;

    t56 = (((x245+x246)/x247)<=x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 91U;
	int32_t x251 = -508;
	static int32_t t57 = -537682;

    t57 = (((x249+x250)/x251)<=x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x254 = 85U;
	int32_t x256 = INT32_MIN;
	static int32_t t58 = -26036451;

    t58 = (((x253+x254)/x255)<=x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = INT64_MIN;
	uint32_t x258 = 98U;
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t59 = 107953;

    t59 = (((x257+x258)/x259)<=x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x262 = 246839784LLU;
	uint64_t x263 = 55611975LLU;
	int64_t x264 = INT64_MAX;
	static volatile int32_t t60 = 419;

    t60 = (((x261+x262)/x263)<=x264);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x266 = INT8_MAX;
	static volatile int16_t x267 = -1;

    t61 = (((x265+x266)/x267)<=x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x269 = 9518850363789LL;
	int64_t x272 = INT64_MIN;
	int32_t t62 = 121391;

    t62 = (((x269+x270)/x271)<=x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x274 = -506421271887137LL;
	uint32_t x275 = 367U;
	static volatile int32_t t63 = 214;

    t63 = (((x273+x274)/x275)<=x276);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = 0;
	int32_t x278 = INT32_MAX;
	static int32_t t64 = 329;

    t64 = (((x277+x278)/x279)<=x280);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = -2;
	int64_t x283 = -1LL;
	static volatile int32_t t65 = -198853287;

    t65 = (((x281+x282)/x283)<=x284);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x290 = 393U;
	int64_t x291 = INT64_MIN;
	static volatile int8_t x292 = -1;
	volatile int32_t t66 = -5373;

    t66 = (((x289+x290)/x291)<=x292);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = 64;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -1LL;

    t67 = (((x293+x294)/x295)<=x296);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t68 = 373971961;

    t68 = (((x297+x298)/x299)<=x300);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x301 = INT16_MIN;
	volatile uint8_t x302 = 0U;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t69 = 186019;

    t69 = (((x301+x302)/x303)<=x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x305 = 1;
	static volatile int8_t x306 = 0;
	static volatile int32_t x307 = INT32_MIN;
	uint32_t x308 = 2101268242U;
	volatile int32_t t70 = 34840394;

    t70 = (((x305+x306)/x307)<=x308);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x310 = INT64_MIN;
	uint8_t x312 = 7U;
	static volatile int32_t t71 = 94;

    t71 = (((x309+x310)/x311)<=x312);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x313 = 0U;
	int32_t x314 = INT32_MIN;
	int32_t x315 = 9782;
	volatile int32_t t72 = -28633966;

    t72 = (((x313+x314)/x315)<=x316);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = INT32_MIN;
	static int8_t x318 = INT8_MAX;
	static int16_t x319 = INT16_MAX;
	uint16_t x320 = 0U;
	volatile int32_t t73 = -43762514;

    t73 = (((x317+x318)/x319)<=x320);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = 86;
	volatile uint8_t x323 = UINT8_MAX;
	static uint16_t x324 = 2218U;
	volatile int32_t t74 = 3744;

    t74 = (((x321+x322)/x323)<=x324);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x326 = 10;
	static int16_t x327 = 2;
	int32_t t75 = -2291;

    t75 = (((x325+x326)/x327)<=x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x330 = INT16_MAX;
	int16_t x331 = -1;
	int32_t x332 = INT32_MIN;
	int32_t t76 = -22971656;

    t76 = (((x329+x330)/x331)<=x332);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x333 = -1LL;
	int16_t x335 = -1;
	static uint32_t x336 = 5U;
	int32_t t77 = 7029013;

    t77 = (((x333+x334)/x335)<=x336);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x337 = -10457;
	volatile uint32_t x339 = UINT32_MAX;
	uint8_t x340 = 7U;
	int32_t t78 = -8083260;

    t78 = (((x337+x338)/x339)<=x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x345 = -1;
	int16_t x347 = 9;
	int32_t x348 = INT32_MIN;
	volatile int32_t t79 = -7821;

    t79 = (((x345+x346)/x347)<=x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x350 = 0U;
	int8_t x351 = -1;
	int64_t x352 = INT64_MIN;
	int32_t t80 = 76645;

    t80 = (((x349+x350)/x351)<=x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x355 = 56249LLU;
	int64_t x356 = INT64_MIN;

    t81 = (((x353+x354)/x355)<=x356);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x358 = 52U;
	uint16_t x360 = UINT16_MAX;
	static int32_t t82 = 12917;

    t82 = (((x357+x358)/x359)<=x360);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x361 = -1;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MAX;
	static int16_t x364 = INT16_MAX;
	volatile int32_t t83 = -17811666;

    t83 = (((x361+x362)/x363)<=x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MAX;
	uint8_t x368 = 15U;
	int32_t t84 = 3177;

    t84 = (((x365+x366)/x367)<=x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x369 = 1805499300U;
	int8_t x370 = 1;
	int32_t t85 = 1863;

    t85 = (((x369+x370)/x371)<=x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MIN;
	volatile uint8_t x376 = 17U;
	static volatile int32_t t86 = 3923885;

    t86 = (((x373+x374)/x375)<=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x378 = UINT8_MAX;
	int8_t x380 = 0;

    t87 = (((x377+x378)/x379)<=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x381 = -1LL;
	int8_t x384 = 0;
	volatile int32_t t88 = 0;

    t88 = (((x381+x382)/x383)<=x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = -194;
	volatile int8_t x390 = INT8_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t89 = 434;

    t89 = (((x389+x390)/x391)<=x392);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x397 = -1;
	int16_t x398 = INT16_MAX;
	static int32_t x399 = INT32_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t90 = -1;

    t90 = (((x397+x398)/x399)<=x400);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x401 = INT16_MIN;
	uint64_t x402 = 97588076872LLU;
	static volatile int32_t x404 = 78;

    t91 = (((x401+x402)/x403)<=x404);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x405 = INT32_MIN;
	uint32_t x406 = 145239306U;
	uint64_t x408 = 3545779028055LLU;
	int32_t t92 = -223899;

    t92 = (((x405+x406)/x407)<=x408);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = 95;
	volatile int64_t x414 = -1LL;
	int64_t x415 = INT64_MIN;
	int32_t t93 = -7290856;

    t93 = (((x413+x414)/x415)<=x416);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x417 = 160389LLU;
	int32_t x419 = -1;
	int64_t x420 = -741169539591LL;
	static volatile int32_t t94 = 16107982;

    t94 = (((x417+x418)/x419)<=x420);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x421 = INT32_MAX;
	int64_t x422 = 39318050270LL;
	static uint64_t x424 = 1LLU;
	volatile int32_t t95 = -8;

    t95 = (((x421+x422)/x423)<=x424);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x428 = UINT32_MAX;
	static int32_t t96 = -15388501;

    t96 = (((x425+x426)/x427)<=x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x429 = INT64_MAX;
	int16_t x430 = INT16_MIN;
	uint8_t x432 = 60U;
	volatile int32_t t97 = 104266689;

    t97 = (((x429+x430)/x431)<=x432);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x433 = 3U;
	static int8_t x434 = -1;
	uint16_t x435 = 635U;
	int8_t x436 = INT8_MIN;
	int32_t t98 = 2232192;

    t98 = (((x433+x434)/x435)<=x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x437 = INT32_MIN;
	int64_t x438 = 33908893711374525LL;
	static uint16_t x439 = 16895U;
	static volatile int32_t t99 = -1214;

    t99 = (((x437+x438)/x439)<=x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x441 = 29LLU;
	uint64_t x442 = 25489859LLU;
	int8_t x443 = -1;

    t100 = (((x441+x442)/x443)<=x444);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int16_t x450 = -1;
	int16_t x451 = -5;
	static int32_t x452 = -1;
	volatile int32_t t101 = -289834601;

    t101 = (((x449+x450)/x451)<=x452);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x454 = 1072U;
	volatile int32_t x455 = -2;
	static uint64_t x456 = 445970708LLU;
	static volatile int32_t t102 = -6;

    t102 = (((x453+x454)/x455)<=x456);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t t103 = -402389057;

    t103 = (((x457+x458)/x459)<=x460);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x461 = -369277782441775LL;
	int32_t x462 = INT32_MIN;
	volatile int8_t x463 = 1;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t104 = 25542;

    t104 = (((x461+x462)/x463)<=x464);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x466 = UINT32_MAX;
	int64_t x467 = -1LL;
	static volatile int32_t t105 = -1268714;

    t105 = (((x465+x466)/x467)<=x468);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x469 = -1;
	int64_t x470 = -7924052LL;
	uint8_t x471 = 5U;
	volatile int32_t x472 = 234577;
	static int32_t t106 = 888;

    t106 = (((x469+x470)/x471)<=x472);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x473 = UINT8_MAX;
	int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MAX;
	int32_t t107 = 276;

    t107 = (((x473+x474)/x475)<=x476);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x477 = INT16_MAX;
	volatile int8_t x478 = INT8_MIN;
	uint32_t x479 = 372U;
	int16_t x480 = -1;
	int32_t t108 = -502915;

    t108 = (((x477+x478)/x479)<=x480);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = 8256076273641LL;
	uint32_t x482 = 114890067U;
	int16_t x483 = INT16_MAX;

    t109 = (((x481+x482)/x483)<=x484);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x485 = 12;
	uint32_t x487 = UINT32_MAX;
	int32_t x488 = INT32_MIN;
	static int32_t t110 = 11918107;

    t110 = (((x485+x486)/x487)<=x488);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x493 = UINT64_MAX;
	static int64_t x494 = -13155810386023332LL;
	volatile int64_t x495 = INT64_MAX;
	int8_t x496 = INT8_MAX;
	volatile int32_t t111 = 139;

    t111 = (((x493+x494)/x495)<=x496);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x501 = 5U;
	static volatile int16_t x502 = INT16_MIN;
	static int8_t x503 = INT8_MIN;
	static volatile int8_t x504 = INT8_MIN;
	volatile int32_t t112 = -2049;

    t112 = (((x501+x502)/x503)<=x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = 614;
	int16_t x506 = INT16_MIN;
	uint16_t x507 = 924U;
	uint32_t x508 = UINT32_MAX;
	static int32_t t113 = 202638;

    t113 = (((x505+x506)/x507)<=x508);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = INT16_MAX;
	static int64_t x510 = INT64_MIN;
	int32_t x512 = INT32_MIN;
	int32_t t114 = -63145;

    t114 = (((x509+x510)/x511)<=x512);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x513 = INT16_MAX;
	uint16_t x514 = 150U;
	volatile uint64_t x515 = UINT64_MAX;
	uint32_t x516 = UINT32_MAX;
	static volatile int32_t t115 = 23121;

    t115 = (((x513+x514)/x515)<=x516);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x521 = -21;
	int8_t x522 = INT8_MAX;
	int8_t x523 = INT8_MIN;
	volatile int32_t t116 = 6990;

    t116 = (((x521+x522)/x523)<=x524);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x530 = INT64_MIN;
	uint64_t x531 = 556578898625189LLU;
	int32_t x532 = 27644;

    t117 = (((x529+x530)/x531)<=x532);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x533 = -1;
	volatile int32_t x536 = INT32_MIN;

    t118 = (((x533+x534)/x535)<=x536);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x537 = -41;
	uint64_t x538 = 20LLU;
	uint32_t x539 = 1263853639U;
	volatile int16_t x540 = -1;
	volatile int32_t t119 = -313044;

    t119 = (((x537+x538)/x539)<=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x541 = -49;
	volatile int16_t x543 = 150;
	int16_t x544 = -8811;
	int32_t t120 = 1664560;

    t120 = (((x541+x542)/x543)<=x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x546 = INT8_MIN;
	int8_t x548 = INT8_MIN;

    t121 = (((x545+x546)/x547)<=x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MAX;
	int64_t x554 = 1723LL;
	int16_t x555 = INT16_MIN;
	static int64_t x556 = INT64_MIN;
	volatile int32_t t122 = -326;

    t122 = (((x553+x554)/x555)<=x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x557 = 379060663LLU;
	int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	volatile int8_t x560 = INT8_MIN;

    t123 = (((x557+x558)/x559)<=x560);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x561 = INT64_MIN;
	uint64_t x562 = 8025378424LLU;
	uint32_t x563 = UINT32_MAX;
	uint8_t x564 = 82U;
	int32_t t124 = 27475;

    t124 = (((x561+x562)/x563)<=x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = -1;
	static uint64_t x566 = UINT64_MAX;
	int64_t x567 = INT64_MIN;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t125 = -64553;

    t125 = (((x565+x566)/x567)<=x568);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x569 = UINT16_MAX;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 3248530965653709LL;
	volatile int32_t t126 = 2;

    t126 = (((x569+x570)/x571)<=x572);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	volatile int32_t t127 = 29415;

    t127 = (((x573+x574)/x575)<=x576);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x577 = -11;
	int16_t x579 = -1;
	uint32_t x580 = 538129U;
	volatile int32_t t128 = 721549;

    t128 = (((x577+x578)/x579)<=x580);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x583 = UINT32_MAX;
	int64_t x584 = -1LL;
	int32_t t129 = -17;

    t129 = (((x581+x582)/x583)<=x584);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = INT64_MAX;
	volatile int16_t x586 = INT16_MIN;
	static volatile uint16_t x587 = 22979U;
	int8_t x588 = -1;
	int32_t t130 = -58732887;

    t130 = (((x585+x586)/x587)<=x588);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x589 = INT16_MAX;
	uint64_t x590 = 28LLU;
	uint8_t x592 = 67U;
	int32_t t131 = -21;

    t131 = (((x589+x590)/x591)<=x592);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x593 = INT32_MAX;
	int8_t x594 = INT8_MIN;
	uint64_t x595 = UINT64_MAX;
	uint64_t x596 = 29666901LLU;
	int32_t t132 = -12946;

    t132 = (((x593+x594)/x595)<=x596);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x597 = 10;
	static int16_t x598 = INT16_MAX;
	int64_t x599 = -1LL;
	int32_t x600 = 0;

    t133 = (((x597+x598)/x599)<=x600);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = INT16_MIN;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 6U;
	volatile int32_t t134 = -31;

    t134 = (((x605+x606)/x607)<=x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x609 = INT8_MIN;
	volatile int8_t x612 = INT8_MIN;
	int32_t t135 = 1;

    t135 = (((x609+x610)/x611)<=x612);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = INT16_MIN;
	uint8_t x614 = 5U;
	static volatile int32_t t136 = -8370627;

    t136 = (((x613+x614)/x615)<=x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x617 = UINT64_MAX;
	int64_t x618 = INT64_MIN;
	uint32_t x619 = 78120U;
	uint64_t x620 = 543185197872555LLU;
	static volatile int32_t t137 = -1801774;

    t137 = (((x617+x618)/x619)<=x620);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x621 = -1;
	static int8_t x622 = INT8_MAX;
	static uint8_t x624 = UINT8_MAX;
	volatile int32_t t138 = -748;

    t138 = (((x621+x622)/x623)<=x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x625 = -1LL;
	static volatile int64_t x627 = 3LL;
	uint32_t x628 = UINT32_MAX;
	volatile int32_t t139 = -49162870;

    t139 = (((x625+x626)/x627)<=x628);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x629 = -4;
	uint32_t x631 = UINT32_MAX;
	static int64_t x632 = 491290770LL;
	volatile int32_t t140 = -1;

    t140 = (((x629+x630)/x631)<=x632);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x633 = INT16_MAX;
	int8_t x634 = INT8_MIN;
	uint8_t x635 = 1U;
	int32_t t141 = 482380673;

    t141 = (((x633+x634)/x635)<=x636);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x638 = INT8_MIN;
	int32_t x640 = INT32_MIN;
	volatile int32_t t142 = 5;

    t142 = (((x637+x638)/x639)<=x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x641 = INT8_MIN;
	uint64_t x642 = 1644478754317LLU;
	volatile int8_t x643 = INT8_MIN;
	volatile int32_t t143 = -31661986;

    t143 = (((x641+x642)/x643)<=x644);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x645 = 97820497;
	int64_t x646 = -308LL;
	int64_t x647 = INT64_MIN;
	int32_t t144 = 4086398;

    t144 = (((x645+x646)/x647)<=x648);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x649 = UINT64_MAX;
	static volatile int32_t x651 = INT32_MIN;
	static volatile int64_t x652 = 869904387066900322LL;
	volatile int32_t t145 = 2;

    t145 = (((x649+x650)/x651)<=x652);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x653 = -1;
	int64_t x654 = 13849402LL;
	volatile int64_t x655 = -309215293305LL;
	volatile int32_t t146 = 15288479;

    t146 = (((x653+x654)/x655)<=x656);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x658 = INT32_MAX;
	static uint64_t x660 = UINT64_MAX;
	volatile int32_t t147 = -1716001;

    t147 = (((x657+x658)/x659)<=x660);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x661 = 0;
	int16_t x663 = -1;
	uint8_t x664 = 62U;
	int32_t t148 = -366;

    t148 = (((x661+x662)/x663)<=x664);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x665 = UINT32_MAX;
	uint64_t x666 = 105260451129LLU;
	int16_t x667 = -1;
	int64_t x668 = 16425921LL;
	int32_t t149 = -8074;

    t149 = (((x665+x666)/x667)<=x668);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x674 = UINT8_MAX;
	int8_t x675 = 7;
	static volatile int32_t t150 = -129188806;

    t150 = (((x673+x674)/x675)<=x676);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x677 = INT8_MIN;
	int16_t x678 = 15641;
	volatile uint16_t x679 = 228U;
	int32_t t151 = 496494149;

    t151 = (((x677+x678)/x679)<=x680);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x685 = UINT16_MAX;
	uint64_t x686 = 27832401290LLU;
	int16_t x688 = INT16_MIN;
	volatile int32_t t152 = -102300833;

    t152 = (((x685+x686)/x687)<=x688);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x689 = 0;
	static int64_t x690 = INT64_MIN;
	int8_t x691 = INT8_MIN;
	int32_t t153 = -60592;

    t153 = (((x689+x690)/x691)<=x692);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x693 = INT64_MIN;
	int32_t x694 = INT32_MAX;
	uint32_t x696 = UINT32_MAX;
	static int32_t t154 = -220;

    t154 = (((x693+x694)/x695)<=x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x697 = -7LL;
	int16_t x699 = 1072;
	volatile uint32_t x700 = UINT32_MAX;
	int32_t t155 = -590509323;

    t155 = (((x697+x698)/x699)<=x700);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x701 = INT64_MAX;
	int32_t x703 = 2005902;
	int8_t x704 = INT8_MIN;
	volatile int32_t t156 = -611;

    t156 = (((x701+x702)/x703)<=x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x705 = INT64_MAX;
	int64_t x706 = -1LL;
	uint32_t x708 = 1518777068U;
	static int32_t t157 = -726964042;

    t157 = (((x705+x706)/x707)<=x708);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x710 = INT8_MIN;
	int64_t x711 = INT64_MIN;
	volatile uint8_t x712 = 7U;
	int32_t t158 = -119790634;

    t158 = (((x709+x710)/x711)<=x712);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x713 = 29071U;
	uint8_t x715 = 6U;
	volatile uint8_t x716 = 102U;

    t159 = (((x713+x714)/x715)<=x716);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x717 = 1029U;
	volatile uint16_t x718 = UINT16_MAX;
	int16_t x720 = -1;
	volatile int32_t t160 = 90864;

    t160 = (((x717+x718)/x719)<=x720);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x721 = 33369649;
	int8_t x723 = 4;
	volatile int16_t x724 = -1;
	volatile int32_t t161 = -550151716;

    t161 = (((x721+x722)/x723)<=x724);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x725 = INT64_MAX;
	volatile int32_t x726 = -1;
	static volatile int16_t x727 = -1;
	int16_t x728 = -1;
	int32_t t162 = -13;

    t162 = (((x725+x726)/x727)<=x728);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x729 = INT8_MAX;
	uint8_t x730 = 9U;
	uint8_t x731 = 3U;

    t163 = (((x729+x730)/x731)<=x732);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x734 = 982699130629835125LLU;
	uint8_t x735 = 1U;
	int8_t x736 = INT8_MIN;
	volatile int32_t t164 = 12694636;

    t164 = (((x733+x734)/x735)<=x736);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x737 = -1;
	uint16_t x738 = UINT16_MAX;
	uint16_t x739 = UINT16_MAX;
	int32_t x740 = -117611124;
	static int32_t t165 = -45;

    t165 = (((x737+x738)/x739)<=x740);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x742 = INT8_MIN;
	static int32_t x743 = -2740474;
	volatile uint32_t x744 = UINT32_MAX;
	volatile int32_t t166 = -20369;

    t166 = (((x741+x742)/x743)<=x744);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x745 = 5;
	uint16_t x747 = 20U;
	int16_t x748 = -300;
	volatile int32_t t167 = -85128;

    t167 = (((x745+x746)/x747)<=x748);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x749 = INT64_MIN;
	uint64_t x750 = 16652979022119654LLU;
	static uint8_t x751 = 1U;
	int8_t x752 = -1;
	volatile int32_t t168 = -301030;

    t168 = (((x749+x750)/x751)<=x752);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x753 = -1;
	int64_t x754 = -53331871230835475LL;
	int32_t x755 = 393460159;
	volatile int8_t x756 = INT8_MIN;
	volatile int32_t t169 = -151;

    t169 = (((x753+x754)/x755)<=x756);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x757 = 6290230223266LLU;
	uint32_t x758 = 19892244U;
	volatile int64_t x759 = INT64_MAX;
	uint32_t x760 = 269556844U;
	int32_t t170 = 5;

    t170 = (((x757+x758)/x759)<=x760);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x761 = INT64_MIN;
	volatile int16_t x762 = INT16_MAX;
	static int32_t x763 = -13808093;
	volatile int32_t t171 = 1;

    t171 = (((x761+x762)/x763)<=x764);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x766 = 1;
	int16_t x767 = -1;
	uint32_t x768 = UINT32_MAX;
	int32_t t172 = -29;

    t172 = (((x765+x766)/x767)<=x768);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x769 = 32U;
	int32_t x770 = INT32_MIN;
	int32_t x771 = -10;
	int16_t x772 = INT16_MAX;
	volatile int32_t t173 = 1;

    t173 = (((x769+x770)/x771)<=x772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x773 = INT16_MIN;
	volatile uint32_t x774 = UINT32_MAX;
	int16_t x775 = -1;
	uint32_t x776 = UINT32_MAX;
	int32_t t174 = -918;

    t174 = (((x773+x774)/x775)<=x776);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x777 = UINT8_MAX;
	static int16_t x778 = INT16_MIN;
	uint16_t x780 = UINT16_MAX;

    t175 = (((x777+x778)/x779)<=x780);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x781 = 1045086640836445550LL;
	uint8_t x782 = 4U;
	uint8_t x783 = UINT8_MAX;
	static uint8_t x784 = UINT8_MAX;

    t176 = (((x781+x782)/x783)<=x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x785 = INT16_MAX;
	int64_t x786 = INT64_MIN;
	int8_t x787 = -1;
	uint8_t x788 = 3U;
	static volatile int32_t t177 = 86204505;

    t177 = (((x785+x786)/x787)<=x788);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x789 = INT16_MAX;
	uint16_t x790 = 0U;
	uint32_t x791 = 9652163U;
	static uint64_t x792 = 31844534LLU;

    t178 = (((x789+x790)/x791)<=x792);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	static volatile int8_t x798 = INT8_MIN;
	volatile int32_t x799 = -1;
	int8_t x800 = INT8_MAX;
	volatile int32_t t179 = -32;

    t179 = (((x797+x798)/x799)<=x800);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = -1;
	int64_t x802 = 2072061259401200LL;
	volatile int32_t x804 = 158612;
	volatile int32_t t180 = 0;

    t180 = (((x801+x802)/x803)<=x804);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x806 = 302319178207961510LLU;
	int64_t x807 = INT64_MAX;
	int16_t x808 = INT16_MIN;

    t181 = (((x805+x806)/x807)<=x808);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x809 = INT8_MAX;
	volatile int64_t x810 = -1LL;
	int16_t x812 = INT16_MIN;
	volatile int32_t t182 = 2;

    t182 = (((x809+x810)/x811)<=x812);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x815 = 1U;

    t183 = (((x813+x814)/x815)<=x816);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    

    t184 = (((x817+x818)/x819)<=x820);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x821 = -1081986650707604172LL;
	volatile int8_t x822 = INT8_MAX;
	static int8_t x823 = INT8_MAX;
	int32_t x824 = INT32_MIN;
	int32_t t185 = 2;

    t185 = (((x821+x822)/x823)<=x824);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x825 = -8LL;
	int16_t x826 = INT16_MIN;
	uint16_t x827 = 702U;

    t186 = (((x825+x826)/x827)<=x828);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x829 = 1U;
	static int8_t x830 = INT8_MAX;
	int16_t x831 = -1;
	int32_t t187 = 1254;

    t187 = (((x829+x830)/x831)<=x832);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x833 = 13684587879344LL;
	int32_t x834 = -1;
	static int8_t x835 = -26;
	volatile uint8_t x836 = UINT8_MAX;
	volatile int32_t t188 = -46482;

    t188 = (((x833+x834)/x835)<=x836);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x837 = 104661297103124586LL;
	uint16_t x838 = 13439U;
	int16_t x839 = 428;
	int64_t x840 = -57195LL;

    t189 = (((x837+x838)/x839)<=x840);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x841 = INT16_MIN;
	uint8_t x842 = 5U;
	static volatile int8_t x844 = -1;
	static int32_t t190 = 31;

    t190 = (((x841+x842)/x843)<=x844);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x849 = 1U;
	uint8_t x851 = 2U;
	int32_t x852 = INT32_MAX;
	static int32_t t191 = -23;

    t191 = (((x849+x850)/x851)<=x852);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x854 = 33185048U;
	volatile int32_t t192 = -21;

    t192 = (((x853+x854)/x855)<=x856);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x857 = -1;
	int16_t x858 = INT16_MIN;
	int8_t x859 = 1;
	static volatile int32_t t193 = 60752816;

    t193 = (((x857+x858)/x859)<=x860);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x861 = 2U;
	uint32_t x862 = 140U;
	volatile int8_t x863 = -59;
	int8_t x864 = -1;
	int32_t t194 = 3482057;

    t194 = (((x861+x862)/x863)<=x864);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x865 = 52395354;
	uint8_t x866 = 32U;
	int8_t x867 = INT8_MAX;
	int8_t x868 = -1;
	int32_t t195 = 2;

    t195 = (((x865+x866)/x867)<=x868);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x870 = 3U;
	volatile int16_t x871 = -7481;
	static volatile int32_t t196 = 1455;

    t196 = (((x869+x870)/x871)<=x872);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x874 = 96LL;
	uint16_t x875 = 9U;
	int32_t x876 = INT32_MIN;

    t197 = (((x873+x874)/x875)<=x876);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x878 = 2561;
	uint8_t x879 = 3U;
	uint32_t x880 = UINT32_MAX;
	volatile int32_t t198 = 20;

    t198 = (((x877+x878)/x879)<=x880);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x881 = INT8_MIN;
	int16_t x882 = INT16_MAX;
	int16_t x883 = INT16_MAX;
	int8_t x884 = INT8_MAX;
	static volatile int32_t t199 = -1473896;

    t199 = (((x881+x882)/x883)<=x884);

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

