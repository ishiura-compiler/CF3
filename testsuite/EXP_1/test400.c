
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

static volatile int32_t t0 = 0;
static int16_t x10 = -1;
int16_t x16 = -3793;
uint8_t x17 = UINT8_MAX;
volatile uint32_t x18 = 206901694U;
int32_t x19 = INT32_MIN;
int32_t t5 = 19864;
uint64_t x36 = 6942183617LLU;
int64_t x44 = 817264863349538604LL;
int32_t x45 = -1;
int8_t x48 = INT8_MAX;
static volatile int16_t x55 = 9;
volatile int32_t t10 = -3450;
static int64_t x58 = 1592LL;
volatile int8_t x66 = 0;
int8_t x74 = INT8_MIN;
uint32_t x76 = UINT32_MAX;
uint16_t x78 = UINT16_MAX;
static volatile int32_t t14 = -71726922;
static volatile int32_t t16 = 596;
uint16_t x124 = 3507U;
static volatile int32_t t20 = -757412207;
static uint32_t x128 = 6U;
static volatile uint64_t x132 = 4334990LLU;
static volatile int32_t t24 = 2;
static int64_t x146 = -46LL;
int64_t x148 = INT64_MIN;
volatile int16_t x159 = -30;
static volatile int8_t x162 = INT8_MIN;
static uint16_t x166 = UINT16_MAX;
uint16_t x180 = 0U;
volatile int32_t t29 = 0;
uint32_t x185 = 3922321U;
static int32_t x188 = INT32_MIN;
volatile int32_t t30 = 465;
int64_t x200 = INT64_MIN;
volatile uint8_t x201 = UINT8_MAX;
int64_t x211 = 8011LL;
static volatile uint16_t x219 = 1U;
int32_t t35 = 7699;
int16_t x225 = INT16_MIN;
int32_t x226 = -1;
int16_t x230 = INT16_MIN;
int8_t x246 = 55;
int16_t x252 = INT16_MAX;
static int32_t t39 = -313756229;
uint32_t x265 = 417259U;
int32_t t41 = -474780;
int32_t t44 = -1;
uint32_t x283 = UINT32_MAX;
int8_t x288 = INT8_MAX;
uint16_t x297 = UINT16_MAX;
uint8_t x299 = 8U;
int32_t t48 = -23304;
volatile uint64_t x301 = UINT64_MAX;
volatile uint64_t x304 = 642LLU;
int32_t t49 = 31;
static volatile int64_t x308 = 211LL;
int32_t t50 = 15194934;
uint64_t x313 = 3925841276104409258LLU;
volatile int32_t t51 = 1;
int32_t x331 = INT32_MAX;
uint8_t x336 = UINT8_MAX;
static int64_t x341 = INT64_MIN;
uint16_t x346 = 966U;
static int16_t x353 = -1;
int16_t x367 = -1766;
int16_t x369 = -100;
static int8_t x383 = INT8_MIN;
volatile int32_t t63 = -3;
uint8_t x385 = UINT8_MAX;
static volatile uint16_t x395 = UINT16_MAX;
volatile int32_t t66 = 9;
volatile uint32_t x398 = 1182910U;
static int8_t x405 = INT8_MAX;
volatile int32_t t69 = 189389;
static volatile uint32_t x417 = 7014U;
int64_t x420 = INT64_MIN;
uint64_t x434 = 1665204849302113189LLU;
int64_t x438 = -1LL;
int16_t x447 = 0;
int16_t x450 = INT16_MIN;
uint64_t x451 = UINT64_MAX;
int8_t x455 = INT8_MIN;
uint32_t x478 = 739958387U;
static int8_t x488 = 32;
volatile uint32_t x493 = 3U;
int16_t x497 = INT16_MIN;
int32_t x500 = INT32_MIN;
volatile int64_t x501 = INT64_MIN;
static uint16_t x522 = UINT16_MAX;
int8_t x524 = INT8_MAX;
uint32_t x525 = 8410363U;
int64_t x528 = 1933977LL;
volatile int64_t x531 = 19LL;
volatile int32_t t85 = 7954409;
static uint32_t x533 = 3U;
uint64_t x545 = UINT64_MAX;
volatile int32_t t90 = -3889;
uint64_t x573 = UINT64_MAX;
volatile int8_t x582 = -1;
static uint32_t x583 = UINT32_MAX;
uint32_t x590 = 1U;
int64_t x596 = INT64_MIN;
volatile int32_t t97 = 31381631;
static uint64_t x618 = 7561587850459272LLU;
static int32_t x620 = INT32_MAX;
int8_t x647 = INT8_MIN;
uint16_t x650 = UINT16_MAX;
int16_t x651 = 29;
volatile int32_t t105 = 912;
volatile int32_t x654 = INT32_MIN;
static int8_t x669 = -15;
int32_t x671 = 1466;
static int32_t x683 = -1;
volatile int64_t x697 = -1LL;
volatile int8_t x699 = -1;
int32_t t111 = -24;
volatile uint8_t x702 = 13U;
uint16_t x704 = 28899U;
int32_t t113 = 25459;
int32_t t114 = -32676855;
static int16_t x713 = -495;
int32_t t115 = -6598;
static volatile uint32_t x720 = UINT32_MAX;
static uint8_t x727 = 3U;
int64_t x732 = -1LL;
int64_t x738 = -1LL;
volatile int8_t x739 = -1;
volatile int8_t x743 = -20;
static int8_t x746 = 12;
int32_t t124 = -45;
uint8_t x757 = 13U;
volatile int32_t x758 = -28028144;
int16_t x769 = 44;
volatile uint32_t x780 = 11U;
volatile int64_t x788 = -1LL;
int32_t x791 = -26885;
uint64_t x803 = UINT64_MAX;
static volatile int16_t x811 = -1427;
int16_t x828 = INT16_MAX;
volatile int32_t t139 = 3336;
int16_t x829 = -1;
volatile uint32_t x835 = UINT32_MAX;
int16_t x837 = -1;
int32_t t143 = -210;
int32_t x860 = INT32_MIN;
int32_t x869 = 719;
uint32_t x887 = 335961206U;
volatile uint64_t x905 = 54222896LLU;
uint8_t x906 = 97U;
uint64_t x911 = 1LLU;
uint16_t x919 = 3U;
volatile int32_t t156 = 12813825;
int32_t x931 = -9;
static volatile int32_t t157 = -51917292;
int64_t x944 = INT64_MIN;
uint16_t x949 = UINT16_MAX;
int64_t x968 = -1LL;
volatile int32_t t168 = -66408450;
int32_t t169 = -3741;
volatile int32_t t170 = 10;
static uint32_t x1023 = 3U;
uint64_t x1038 = 188444513170891733LLU;
volatile int32_t t175 = 0;
uint64_t x1041 = 8177355138633163400LLU;
static int16_t x1045 = INT16_MAX;
static int32_t t178 = 1;
int32_t t179 = 2564609;
uint64_t x1075 = 4898463423LLU;
uint32_t x1076 = UINT32_MAX;
int32_t x1077 = -1;
int8_t x1090 = INT8_MIN;
int16_t x1092 = -9191;
int16_t x1093 = -198;
uint64_t x1094 = 735LLU;
static volatile int32_t t185 = 0;
static int16_t x1097 = INT16_MIN;
static uint16_t x1099 = UINT16_MAX;
uint32_t x1104 = UINT32_MAX;
int32_t t187 = -1;
static uint16_t x1105 = UINT16_MAX;
uint32_t x1108 = 584464422U;
int8_t x1111 = 0;
uint8_t x1112 = 7U;
volatile int32_t t189 = 3865;
volatile int64_t x1130 = 6801343073LL;
uint16_t x1135 = 0U;
volatile int32_t t195 = -465213774;
int16_t x1137 = 61;
int32_t t199 = -734535;


void f0(void) {
    	int64_t x1 = 17759798454710LL;
	volatile uint8_t x2 = 59U;
	uint16_t x3 = 4U;
	int32_t x4 = INT32_MAX;

    t0 = (((x1*x2)+x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = -1;
	uint8_t x11 = 6U;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -113399701;

    t1 = (((x9*x10)+x11)==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 28258U;
	static uint32_t x14 = 351207U;
	static int8_t x15 = INT8_MAX;
	volatile int32_t t2 = 36458;

    t2 = (((x13*x14)+x15)==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 57467;

    t3 = (((x17*x18)+x19)==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x21 = -1;
	int64_t x22 = 24242786435LL;
	int8_t x23 = -1;
	static volatile uint64_t x24 = 2188756625570288913LLU;
	int32_t t4 = 1156737;

    t4 = (((x21*x22)+x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x29 = INT32_MIN;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;

    t5 = (((x29*x30)+x31)==x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x33 = 172372808U;
	volatile uint64_t x34 = UINT64_MAX;
	static uint32_t x35 = 79157943U;
	int32_t t6 = 1;

    t6 = (((x33*x34)+x35)==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = 56U;
	uint64_t x38 = 356537398062161665LLU;
	int32_t x39 = INT32_MIN;
	volatile int64_t x40 = INT64_MIN;
	static volatile int32_t t7 = -1;

    t7 = (((x37*x38)+x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x41 = -1;
	uint64_t x42 = 4132833497080LLU;
	static volatile int32_t x43 = INT32_MIN;
	static volatile int32_t t8 = -903038380;

    t8 = (((x41*x42)+x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x46 = -1LL;
	static int8_t x47 = 0;
	int32_t t9 = 113738;

    t9 = (((x45*x46)+x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x53 = 51U;
	int8_t x54 = -1;
	uint16_t x56 = 75U;

    t10 = (((x53*x54)+x55)==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = 16U;
	uint64_t x59 = 3LLU;
	static int64_t x60 = 46LL;
	volatile int32_t t11 = -42;

    t11 = (((x57*x58)+x59)==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = 72U;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t12 = -29;

    t12 = (((x65*x66)+x67)==x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = -1;
	static volatile uint32_t x75 = 15U;
	volatile int32_t t13 = -312372;

    t13 = (((x73*x74)+x75)==x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x77 = -744612881LL;
	int64_t x79 = -1LL;
	uint32_t x80 = 634300U;

    t14 = (((x77*x78)+x79)==x80);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x85 = 0;
	static int32_t x86 = -1;
	int32_t x87 = INT32_MAX;
	uint8_t x88 = 1U;
	volatile int32_t t15 = -1003820878;

    t15 = (((x85*x86)+x87)==x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x97 = INT32_MAX;
	uint64_t x98 = 0LLU;
	int8_t x99 = -19;
	volatile uint64_t x100 = 298887LLU;

    t16 = (((x97*x98)+x99)==x100);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x101 = 954U;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = -24;
	uint16_t x104 = 29U;
	static int32_t t17 = 0;

    t17 = (((x101*x102)+x103)==x104);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x105 = -1LL;
	uint16_t x106 = 20U;
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t18 = 13;

    t18 = (((x105*x106)+x107)==x108);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x113 = 113U;
	int8_t x114 = -1;
	int64_t x115 = -338418607014LL;
	volatile int64_t x116 = INT64_MAX;
	int32_t t19 = 321655943;

    t19 = (((x113*x114)+x115)==x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x121 = INT8_MIN;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = INT8_MIN;

    t20 = (((x121*x122)+x123)==x124);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x125 = -1;
	int16_t x126 = -1;
	static volatile uint64_t x127 = 64116084694887LLU;
	volatile int32_t t21 = 1486531;

    t21 = (((x125*x126)+x127)==x128);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x129 = INT64_MIN;
	static uint8_t x130 = 1U;
	int32_t x131 = 30;
	static volatile int32_t t22 = -252989396;

    t22 = (((x129*x130)+x131)==x132);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = -1LL;
	int32_t x138 = INT32_MIN;
	int8_t x139 = 1;
	uint32_t x140 = UINT32_MAX;
	static int32_t t23 = -106727;

    t23 = (((x137*x138)+x139)==x140);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x141 = INT16_MIN;
	volatile int8_t x142 = 4;
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = INT64_MIN;

    t24 = (((x141*x142)+x143)==x144);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x145 = UINT8_MAX;
	static volatile int64_t x147 = -101LL;
	int32_t t25 = 11556;

    t25 = (((x145*x146)+x147)==x148);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x157 = 681;
	int32_t x158 = -1;
	int64_t x160 = INT64_MIN;
	int32_t t26 = -3;

    t26 = (((x157*x158)+x159)==x160);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x161 = 97598U;
	static int8_t x163 = -1;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t27 = -27751;

    t27 = (((x161*x162)+x163)==x164);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = 0;
	int32_t x167 = -537862;
	int32_t x168 = INT32_MIN;
	volatile int32_t t28 = -1;

    t28 = (((x165*x166)+x167)==x168);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x177 = INT8_MIN;
	uint32_t x178 = UINT32_MAX;
	uint8_t x179 = 3U;

    t29 = (((x177*x178)+x179)==x180);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x186 = INT8_MIN;
	int32_t x187 = -1;

    t30 = (((x185*x186)+x187)==x188);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x197 = 0;
	int16_t x198 = -258;
	int32_t x199 = -1857;
	int32_t t31 = -3913391;

    t31 = (((x197*x198)+x199)==x200);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x202 = 30;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -1;
	static int32_t t32 = -97418;

    t32 = (((x201*x202)+x203)==x204);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x209 = -1;
	volatile uint64_t x210 = 183457LLU;
	int16_t x212 = -1;
	int32_t t33 = -2;

    t33 = (((x209*x210)+x211)==x212);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x217 = -143LL;
	static int32_t x218 = -42134232;
	int64_t x220 = -1LL;
	static int32_t t34 = -1331231;

    t34 = (((x217*x218)+x219)==x220);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x221 = 0;
	int32_t x222 = -1546;
	int16_t x223 = -1;
	volatile uint64_t x224 = UINT64_MAX;

    t35 = (((x221*x222)+x223)==x224);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x227 = UINT32_MAX;
	static int16_t x228 = 363;
	int32_t t36 = -6;

    t36 = (((x225*x226)+x227)==x228);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x229 = 690269420066LL;
	uint16_t x231 = 231U;
	int16_t x232 = INT16_MIN;
	int32_t t37 = 1305;

    t37 = (((x229*x230)+x231)==x232);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x245 = -40;
	static uint64_t x247 = 56258296791LLU;
	uint16_t x248 = 86U;
	int32_t t38 = -592;

    t38 = (((x245*x246)+x247)==x248);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x249 = INT16_MIN;
	uint16_t x250 = 782U;
	static volatile int16_t x251 = INT16_MIN;

    t39 = (((x249*x250)+x251)==x252);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x257 = 9LLU;
	static int32_t x258 = -1;
	int32_t x259 = 15945;
	int16_t x260 = INT16_MIN;
	int32_t t40 = -1482453;

    t40 = (((x257*x258)+x259)==x260);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 1260U;

    t41 = (((x265*x266)+x267)==x268);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x269 = -1LL;
	int8_t x270 = INT8_MAX;
	static volatile int64_t x271 = -1LL;
	static int8_t x272 = INT8_MAX;
	static int32_t t42 = -51099423;

    t42 = (((x269*x270)+x271)==x272);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x273 = -29024;
	int16_t x274 = -62;
	uint8_t x275 = 0U;
	int32_t x276 = -6758991;
	int32_t t43 = -2879530;

    t43 = (((x273*x274)+x275)==x276);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x277 = 9385750U;
	uint64_t x278 = 37266594455597179LLU;
	int16_t x279 = -347;
	int64_t x280 = INT64_MIN;

    t44 = (((x277*x278)+x279)==x280);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x281 = INT32_MAX;
	uint64_t x282 = 4903725234839648LLU;
	int32_t x284 = INT32_MIN;
	int32_t t45 = 460868329;

    t45 = (((x281*x282)+x283)==x284);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x285 = 3094U;
	int64_t x286 = -1LL;
	static int32_t x287 = -1;
	int32_t t46 = 334955859;

    t46 = (((x285*x286)+x287)==x288);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	static uint8_t x291 = 16U;
	volatile int64_t x292 = INT64_MIN;
	int32_t t47 = 896777529;

    t47 = (((x289*x290)+x291)==x292);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x298 = INT16_MIN;
	static uint32_t x300 = 494U;

    t48 = (((x297*x298)+x299)==x300);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x302 = -1;
	static volatile uint16_t x303 = 7U;

    t49 = (((x301*x302)+x303)==x304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x305 = 1;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = 35622807838384312LL;

    t50 = (((x305*x306)+x307)==x308);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x314 = INT64_MIN;
	uint16_t x315 = 14337U;
	static int32_t x316 = INT32_MIN;

    t51 = (((x313*x314)+x315)==x316);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x317 = 122;
	int16_t x318 = -1;
	static uint8_t x319 = UINT8_MAX;
	int16_t x320 = -1;
	volatile int32_t t52 = 740191485;

    t52 = (((x317*x318)+x319)==x320);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x325 = -1;
	int16_t x326 = INT16_MAX;
	static int16_t x327 = -2942;
	volatile uint64_t x328 = 463LLU;
	int32_t t53 = 399490;

    t53 = (((x325*x326)+x327)==x328);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	static uint32_t x330 = 2462U;
	uint16_t x332 = 53U;
	int32_t t54 = 24779;

    t54 = (((x329*x330)+x331)==x332);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x333 = INT8_MIN;
	volatile uint8_t x334 = UINT8_MAX;
	uint16_t x335 = UINT16_MAX;
	volatile int32_t t55 = -12;

    t55 = (((x333*x334)+x335)==x336);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x342 = 1875024518LLU;
	uint16_t x343 = 828U;
	volatile int64_t x344 = -1LL;
	int32_t t56 = 3;

    t56 = (((x341*x342)+x343)==x344);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x345 = UINT16_MAX;
	uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MAX;
	static int32_t t57 = 5626;

    t57 = (((x345*x346)+x347)==x348);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x354 = 176U;
	static int8_t x355 = 8;
	int8_t x356 = INT8_MAX;
	int32_t t58 = 15551;

    t58 = (((x353*x354)+x355)==x356);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x361 = -1;
	static int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MAX;
	int8_t x364 = -1;
	int32_t t59 = -6702;

    t59 = (((x361*x362)+x363)==x364);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x365 = -28;
	uint8_t x366 = 0U;
	volatile int16_t x368 = INT16_MIN;
	int32_t t60 = -373638;

    t60 = (((x365*x366)+x367)==x368);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x370 = 10U;
	int8_t x371 = -1;
	uint64_t x372 = UINT64_MAX;
	static int32_t t61 = -13;

    t61 = (((x369*x370)+x371)==x372);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x373 = -1LL;
	static int16_t x374 = 3;
	int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int32_t t62 = 5640874;

    t62 = (((x373*x374)+x375)==x376);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x381 = 0U;
	int64_t x382 = -1LL;
	static int16_t x384 = INT16_MIN;

    t63 = (((x381*x382)+x383)==x384);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x386 = -1;
	static int32_t x387 = INT32_MAX;
	uint32_t x388 = 4143373U;
	int32_t t64 = 1912;

    t64 = (((x385*x386)+x387)==x388);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x389 = 55U;
	volatile uint32_t x390 = UINT32_MAX;
	uint16_t x391 = UINT16_MAX;
	static uint32_t x392 = 17822404U;
	int32_t t65 = -46194;

    t65 = (((x389*x390)+x391)==x392);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	uint16_t x396 = 0U;

    t66 = (((x393*x394)+x395)==x396);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x397 = -50477910LL;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t67 = -176;

    t67 = (((x397*x398)+x399)==x400);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x401 = 3U;
	int16_t x402 = -1;
	volatile uint64_t x403 = UINT64_MAX;
	uint64_t x404 = 9940925LLU;
	int32_t t68 = 85;

    t68 = (((x401*x402)+x403)==x404);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x406 = 172192995777LL;
	static volatile int16_t x407 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;

    t69 = (((x405*x406)+x407)==x408);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x418 = 8109;
	uint64_t x419 = UINT64_MAX;
	static int32_t t70 = 0;

    t70 = (((x417*x418)+x419)==x420);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x433 = INT32_MAX;
	static uint64_t x435 = UINT64_MAX;
	volatile uint32_t x436 = 62442447U;
	volatile int32_t t71 = 1840207;

    t71 = (((x433*x434)+x435)==x436);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x437 = 15254089U;
	uint16_t x439 = 661U;
	volatile uint8_t x440 = 39U;
	int32_t t72 = 51;

    t72 = (((x437*x438)+x439)==x440);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x445 = 1;
	static volatile int8_t x446 = -1;
	int8_t x448 = INT8_MIN;
	int32_t t73 = 97;

    t73 = (((x445*x446)+x447)==x448);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x449 = UINT32_MAX;
	uint16_t x452 = 86U;
	int32_t t74 = 2;

    t74 = (((x449*x450)+x451)==x452);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x453 = -1;
	int8_t x454 = -2;
	int64_t x456 = INT64_MIN;
	volatile int32_t t75 = -147219;

    t75 = (((x453*x454)+x455)==x456);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x465 = 1386U;
	int64_t x466 = -61LL;
	int64_t x467 = 612859400LL;
	volatile int32_t x468 = -914780788;
	volatile int32_t t76 = -2474;

    t76 = (((x465*x466)+x467)==x468);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x477 = -47;
	uint8_t x479 = 1U;
	volatile uint32_t x480 = UINT32_MAX;
	volatile int32_t t77 = 8;

    t77 = (((x477*x478)+x479)==x480);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x485 = 3727;
	volatile uint32_t x486 = 997U;
	int8_t x487 = INT8_MIN;
	volatile int32_t t78 = 46613498;

    t78 = (((x485*x486)+x487)==x488);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x489 = 24U;
	volatile uint64_t x490 = UINT64_MAX;
	uint8_t x491 = UINT8_MAX;
	int64_t x492 = 163039LL;
	int32_t t79 = 810;

    t79 = (((x489*x490)+x491)==x492);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x494 = INT32_MAX;
	int32_t x495 = INT32_MIN;
	int64_t x496 = -1LL;
	int32_t t80 = -303991197;

    t80 = (((x493*x494)+x495)==x496);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x498 = 0;
	volatile int16_t x499 = INT16_MAX;
	static int32_t t81 = 10093579;

    t81 = (((x497*x498)+x499)==x500);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x502 = 26719LLU;
	int32_t x503 = INT32_MAX;
	int64_t x504 = -1LL;
	volatile int32_t t82 = 1;

    t82 = (((x501*x502)+x503)==x504);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x521 = -1;
	static int16_t x523 = INT16_MAX;
	int32_t t83 = -8738562;

    t83 = (((x521*x522)+x523)==x524);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MIN;
	volatile int32_t t84 = 255625080;

    t84 = (((x525*x526)+x527)==x528);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x529 = INT64_MAX;
	static volatile uint64_t x530 = 16609371317561LLU;
	static uint64_t x532 = 579485010480209LLU;

    t85 = (((x529*x530)+x531)==x532);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x534 = -1;
	volatile int64_t x535 = INT64_MIN;
	static uint32_t x536 = 1U;
	int32_t t86 = -10770;

    t86 = (((x533*x534)+x535)==x536);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = -14;
	static volatile uint16_t x543 = 3U;
	volatile uint64_t x544 = UINT64_MAX;
	volatile int32_t t87 = 5296;

    t87 = (((x541*x542)+x543)==x544);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x546 = INT32_MIN;
	volatile uint16_t x547 = 0U;
	uint16_t x548 = 4U;
	static int32_t t88 = -2;

    t88 = (((x545*x546)+x547)==x548);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x549 = -1;
	int32_t x550 = -1;
	static uint8_t x551 = UINT8_MAX;
	static int64_t x552 = INT64_MIN;
	static int32_t t89 = -162;

    t89 = (((x549*x550)+x551)==x552);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x553 = 1U;
	uint64_t x554 = 36LLU;
	int64_t x555 = INT64_MAX;
	static volatile int64_t x556 = INT64_MIN;

    t90 = (((x553*x554)+x555)==x556);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x569 = 3LLU;
	volatile uint8_t x570 = UINT8_MAX;
	int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;
	int32_t t91 = 2854811;

    t91 = (((x569*x570)+x571)==x572);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x574 = 59U;
	int32_t x575 = 14725694;
	volatile uint64_t x576 = 2LLU;
	volatile int32_t t92 = -49211;

    t92 = (((x573*x574)+x575)==x576);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x577 = 230;
	uint8_t x578 = 3U;
	int16_t x579 = INT16_MIN;
	int64_t x580 = INT64_MIN;
	volatile int32_t t93 = -12063;

    t93 = (((x577*x578)+x579)==x580);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x581 = 654U;
	int32_t x584 = 2;
	int32_t t94 = 172061;

    t94 = (((x581*x582)+x583)==x584);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x585 = 230U;
	volatile uint8_t x586 = 4U;
	static uint32_t x587 = 438U;
	int64_t x588 = INT64_MIN;
	int32_t t95 = -6822;

    t95 = (((x585*x586)+x587)==x588);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x589 = -1LL;
	volatile uint8_t x591 = 63U;
	volatile int16_t x592 = INT16_MIN;
	volatile int32_t t96 = 24439560;

    t96 = (((x589*x590)+x591)==x592);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x593 = -1;
	int64_t x594 = -43315789803LL;
	int64_t x595 = INT64_MIN;

    t97 = (((x593*x594)+x595)==x596);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x601 = 7;
	uint16_t x602 = 60U;
	static int8_t x603 = 0;
	volatile int64_t x604 = INT64_MIN;
	volatile int32_t t98 = 25454479;

    t98 = (((x601*x602)+x603)==x604);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x613 = INT8_MIN;
	uint32_t x614 = 2121U;
	int16_t x615 = INT16_MIN;
	int16_t x616 = -1;
	int32_t t99 = -6;

    t99 = (((x613*x614)+x615)==x616);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x617 = 6U;
	int8_t x619 = INT8_MIN;
	volatile int32_t t100 = 80382234;

    t100 = (((x617*x618)+x619)==x620);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x621 = 3;
	int16_t x622 = -1;
	int8_t x623 = INT8_MIN;
	uint64_t x624 = UINT64_MAX;
	volatile int32_t t101 = 29;

    t101 = (((x621*x622)+x623)==x624);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x626 = 43;
	volatile int16_t x627 = INT16_MAX;
	static uint16_t x628 = 911U;
	int32_t t102 = -539710;

    t102 = (((x625*x626)+x627)==x628);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x641 = -24;
	int16_t x642 = INT16_MIN;
	int16_t x643 = -1;
	static int32_t x644 = 1377;
	volatile int32_t t103 = -7584163;

    t103 = (((x641*x642)+x643)==x644);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x645 = 1U;
	volatile int16_t x646 = -1543;
	volatile int64_t x648 = -1LL;
	volatile int32_t t104 = -226;

    t104 = (((x645*x646)+x647)==x648);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x649 = INT8_MAX;
	int64_t x652 = -1LL;

    t105 = (((x649*x650)+x651)==x652);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x653 = -1LL;
	int16_t x655 = -1;
	static int16_t x656 = 0;
	volatile int32_t t106 = 459218028;

    t106 = (((x653*x654)+x655)==x656);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x661 = 22819LLU;
	volatile uint8_t x662 = 6U;
	static int16_t x663 = 1907;
	int16_t x664 = -12188;
	int32_t t107 = -104752074;

    t107 = (((x661*x662)+x663)==x664);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x670 = UINT8_MAX;
	int8_t x672 = -1;
	static volatile int32_t t108 = 6499;

    t108 = (((x669*x670)+x671)==x672);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x673 = 0;
	int64_t x674 = INT64_MIN;
	volatile int64_t x675 = INT64_MIN;
	int8_t x676 = -1;
	static volatile int32_t t109 = 0;

    t109 = (((x673*x674)+x675)==x676);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x681 = 649LLU;
	int8_t x682 = 12;
	uint16_t x684 = 3U;
	static volatile int32_t t110 = -3735;

    t110 = (((x681*x682)+x683)==x684);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x698 = 10053;
	volatile uint32_t x700 = 15354372U;

    t111 = (((x697*x698)+x699)==x700);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x701 = -4404LL;
	uint64_t x703 = UINT64_MAX;
	volatile int32_t t112 = 1;

    t112 = (((x701*x702)+x703)==x704);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x705 = INT8_MIN;
	static int32_t x706 = -1;
	int8_t x707 = INT8_MAX;
	int8_t x708 = INT8_MIN;

    t113 = (((x705*x706)+x707)==x708);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = INT8_MAX;
	volatile int64_t x711 = 125353LL;
	int16_t x712 = INT16_MAX;

    t114 = (((x709*x710)+x711)==x712);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x714 = 1U;
	volatile uint32_t x715 = UINT32_MAX;
	volatile int32_t x716 = -1;

    t115 = (((x713*x714)+x715)==x716);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x717 = -1;
	int64_t x718 = -6241664983524514LL;
	static uint8_t x719 = 26U;
	int32_t t116 = -1;

    t116 = (((x717*x718)+x719)==x720);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x721 = 210U;
	int16_t x722 = INT16_MAX;
	int16_t x723 = INT16_MAX;
	int32_t x724 = 225;
	static int32_t t117 = -3;

    t117 = (((x721*x722)+x723)==x724);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x725 = 2117095888LLU;
	uint32_t x726 = UINT32_MAX;
	static int16_t x728 = 2044;
	volatile int32_t t118 = 1;

    t118 = (((x725*x726)+x727)==x728);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x729 = 3U;
	volatile int8_t x730 = INT8_MAX;
	uint8_t x731 = 1U;
	int32_t t119 = 33120;

    t119 = (((x729*x730)+x731)==x732);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x733 = 32128955LL;
	static volatile uint32_t x734 = 501U;
	uint64_t x735 = UINT64_MAX;
	static uint64_t x736 = 33919299764018693LLU;
	int32_t t120 = -3;

    t120 = (((x733*x734)+x735)==x736);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x737 = 1535368678741LLU;
	int32_t x740 = -1;
	static volatile int32_t t121 = 120;

    t121 = (((x737*x738)+x739)==x740);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x741 = -65076936;
	int16_t x742 = -1;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t122 = 7912854;

    t122 = (((x741*x742)+x743)==x744);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x745 = -1;
	volatile int32_t x747 = 9166;
	static int32_t x748 = 0;
	int32_t t123 = -33177943;

    t123 = (((x745*x746)+x747)==x748);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x749 = 47U;
	volatile int32_t x750 = -1;
	static volatile int8_t x751 = INT8_MIN;
	uint64_t x752 = 0LLU;

    t124 = (((x749*x750)+x751)==x752);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x759 = INT8_MAX;
	int64_t x760 = INT64_MIN;
	volatile int32_t t125 = 1486;

    t125 = (((x757*x758)+x759)==x760);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x761 = 16U;
	static int64_t x762 = -1LL;
	uint16_t x763 = 0U;
	int16_t x764 = INT16_MIN;
	volatile int32_t t126 = 239;

    t126 = (((x761*x762)+x763)==x764);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x765 = INT8_MIN;
	volatile int8_t x766 = 1;
	volatile uint16_t x767 = UINT16_MAX;
	uint8_t x768 = 0U;
	static volatile int32_t t127 = 4087738;

    t127 = (((x765*x766)+x767)==x768);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x770 = 102U;
	uint64_t x771 = 172983085136049137LLU;
	uint16_t x772 = 3139U;
	static int32_t t128 = 1;

    t128 = (((x769*x770)+x771)==x772);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x777 = 12;
	volatile uint16_t x778 = 1U;
	int32_t x779 = -298735;
	int32_t t129 = -3;

    t129 = (((x777*x778)+x779)==x780);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x781 = 3794473697LLU;
	uint64_t x782 = 480LLU;
	uint64_t x783 = UINT64_MAX;
	int8_t x784 = -2;
	volatile int32_t t130 = 29193;

    t130 = (((x781*x782)+x783)==x784);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x785 = 14U;
	volatile uint64_t x786 = 614287980999007LLU;
	uint64_t x787 = UINT64_MAX;
	volatile int32_t t131 = -223528796;

    t131 = (((x785*x786)+x787)==x788);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x789 = -692246;
	static int8_t x790 = INT8_MIN;
	int64_t x792 = -198LL;
	volatile int32_t t132 = -2221;

    t132 = (((x789*x790)+x791)==x792);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x793 = 240U;
	int8_t x794 = INT8_MIN;
	int16_t x795 = -1;
	int16_t x796 = -1;
	volatile int32_t t133 = 204636785;

    t133 = (((x793*x794)+x795)==x796);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x801 = -800237;
	volatile int8_t x802 = INT8_MIN;
	uint8_t x804 = 1U;
	volatile int32_t t134 = -1884;

    t134 = (((x801*x802)+x803)==x804);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x805 = 2979916629428434024LLU;
	int32_t x806 = 864960769;
	static uint64_t x807 = 428613810544LLU;
	uint32_t x808 = UINT32_MAX;
	int32_t t135 = 1;

    t135 = (((x805*x806)+x807)==x808);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x809 = -39692219LL;
	uint32_t x810 = 2U;
	int32_t x812 = -1;
	int32_t t136 = 125;

    t136 = (((x809*x810)+x811)==x812);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x813 = -568;
	int64_t x814 = -23555408LL;
	int32_t x815 = INT32_MIN;
	int64_t x816 = INT64_MIN;
	volatile int32_t t137 = 1;

    t137 = (((x813*x814)+x815)==x816);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x821 = 1U;
	static int16_t x822 = INT16_MIN;
	volatile int16_t x823 = -1;
	volatile int16_t x824 = INT16_MAX;
	volatile int32_t t138 = -81;

    t138 = (((x821*x822)+x823)==x824);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x825 = INT32_MIN;
	uint64_t x826 = 809462LLU;
	int64_t x827 = INT64_MIN;

    t139 = (((x825*x826)+x827)==x828);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x830 = 3;
	static uint16_t x831 = UINT16_MAX;
	int16_t x832 = -1;
	int32_t t140 = 321;

    t140 = (((x829*x830)+x831)==x832);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	int16_t x834 = INT16_MIN;
	uint16_t x836 = UINT16_MAX;
	int32_t t141 = -9;

    t141 = (((x833*x834)+x835)==x836);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x838 = -1;
	int16_t x839 = INT16_MIN;
	volatile uint8_t x840 = UINT8_MAX;
	static volatile int32_t t142 = 62976001;

    t142 = (((x837*x838)+x839)==x840);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x841 = INT16_MIN;
	uint8_t x842 = 1U;
	uint32_t x843 = 1041440U;
	uint32_t x844 = 1309596184U;

    t143 = (((x841*x842)+x843)==x844);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x845 = -1;
	int8_t x846 = -1;
	volatile uint32_t x847 = 105761315U;
	int32_t x848 = -1;
	int32_t t144 = 7303;

    t144 = (((x845*x846)+x847)==x848);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x849 = 67U;
	static int32_t x850 = INT32_MAX;
	volatile int64_t x851 = INT64_MIN;
	static int16_t x852 = INT16_MIN;
	int32_t t145 = 1398;

    t145 = (((x849*x850)+x851)==x852);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x857 = INT8_MIN;
	static int8_t x858 = -1;
	static int64_t x859 = INT64_MIN;
	static volatile int32_t t146 = 2363;

    t146 = (((x857*x858)+x859)==x860);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x870 = INT16_MIN;
	static uint16_t x871 = 477U;
	volatile int32_t x872 = 2836;
	volatile int32_t t147 = -6396;

    t147 = (((x869*x870)+x871)==x872);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x885 = INT16_MIN;
	int8_t x886 = -1;
	uint64_t x888 = UINT64_MAX;
	int32_t t148 = 389;

    t148 = (((x885*x886)+x887)==x888);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x889 = -1LL;
	static int16_t x890 = INT16_MIN;
	volatile int64_t x891 = -7620LL;
	static int64_t x892 = -96799498520061396LL;
	static volatile int32_t t149 = -4640027;

    t149 = (((x889*x890)+x891)==x892);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x897 = INT8_MIN;
	int8_t x898 = -1;
	static int16_t x899 = -2233;
	volatile uint32_t x900 = UINT32_MAX;
	volatile int32_t t150 = 138274;

    t150 = (((x897*x898)+x899)==x900);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x901 = -3;
	int16_t x902 = -1;
	int16_t x903 = INT16_MIN;
	static int16_t x904 = INT16_MIN;
	volatile int32_t t151 = -3703;

    t151 = (((x901*x902)+x903)==x904);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x907 = 9445U;
	int16_t x908 = -1;
	static int32_t t152 = -29110;

    t152 = (((x905*x906)+x907)==x908);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x909 = 3U;
	int8_t x910 = -1;
	volatile int8_t x912 = INT8_MIN;
	int32_t t153 = -29643;

    t153 = (((x909*x910)+x911)==x912);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x913 = -1;
	int16_t x914 = -9;
	int32_t x915 = -10945;
	int32_t x916 = -1732017;
	int32_t t154 = -32908;

    t154 = (((x913*x914)+x915)==x916);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x917 = 9U;
	uint64_t x918 = UINT64_MAX;
	uint32_t x920 = 4277200U;
	int32_t t155 = 18489;

    t155 = (((x917*x918)+x919)==x920);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x925 = -844546095598867332LL;
	uint64_t x926 = UINT64_MAX;
	int16_t x927 = 768;
	uint16_t x928 = 2U;

    t156 = (((x925*x926)+x927)==x928);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x929 = 10U;
	int16_t x930 = -4440;
	int32_t x932 = INT32_MIN;

    t157 = (((x929*x930)+x931)==x932);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x933 = 34U;
	volatile int16_t x934 = -1;
	int8_t x935 = 21;
	uint64_t x936 = UINT64_MAX;
	static int32_t t158 = -832180020;

    t158 = (((x933*x934)+x935)==x936);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x941 = 4;
	static volatile int8_t x942 = INT8_MIN;
	uint32_t x943 = UINT32_MAX;
	volatile int32_t t159 = -1;

    t159 = (((x941*x942)+x943)==x944);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x945 = 0U;
	volatile int8_t x946 = INT8_MAX;
	int64_t x947 = INT64_MIN;
	volatile int16_t x948 = 1048;
	volatile int32_t t160 = -34760667;

    t160 = (((x945*x946)+x947)==x948);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x950 = -39;
	volatile uint8_t x951 = 28U;
	int64_t x952 = INT64_MIN;
	int32_t t161 = -2;

    t161 = (((x949*x950)+x951)==x952);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x953 = -1;
	volatile uint16_t x954 = 3432U;
	volatile uint8_t x955 = 5U;
	static int64_t x956 = INT64_MIN;
	int32_t t162 = 172725444;

    t162 = (((x953*x954)+x955)==x956);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x961 = 24186U;
	int16_t x962 = -3012;
	int8_t x963 = 1;
	int8_t x964 = INT8_MAX;
	volatile int32_t t163 = 3;

    t163 = (((x961*x962)+x963)==x964);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x965 = UINT8_MAX;
	int32_t x966 = -1312842;
	static int64_t x967 = -413932996164315935LL;
	volatile int32_t t164 = -490685;

    t164 = (((x965*x966)+x967)==x968);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x977 = UINT16_MAX;
	int32_t x978 = -28;
	int16_t x979 = 5;
	static int16_t x980 = INT16_MIN;
	volatile int32_t t165 = 324292;

    t165 = (((x977*x978)+x979)==x980);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x981 = UINT32_MAX;
	uint8_t x982 = 0U;
	uint8_t x983 = 32U;
	int32_t x984 = INT32_MIN;
	static volatile int32_t t166 = -1;

    t166 = (((x981*x982)+x983)==x984);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x989 = 1;
	uint16_t x990 = 15U;
	uint8_t x991 = 1U;
	static volatile uint64_t x992 = UINT64_MAX;
	int32_t t167 = 38057;

    t167 = (((x989*x990)+x991)==x992);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x997 = INT16_MIN;
	volatile int8_t x998 = -1;
	int8_t x999 = 20;
	int16_t x1000 = 7;

    t168 = (((x997*x998)+x999)==x1000);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x1001 = 29U;
	uint64_t x1002 = UINT64_MAX;
	int32_t x1003 = -12345;
	int16_t x1004 = INT16_MAX;

    t169 = (((x1001*x1002)+x1003)==x1004);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x1005 = 14U;
	static int16_t x1006 = -125;
	volatile uint64_t x1007 = 9014LLU;
	int8_t x1008 = -38;

    t170 = (((x1005*x1006)+x1007)==x1008);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1009 = 111;
	int16_t x1010 = INT16_MAX;
	volatile int32_t x1011 = INT32_MIN;
	int16_t x1012 = INT16_MIN;
	int32_t t171 = 36475882;

    t171 = (((x1009*x1010)+x1011)==x1012);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1017 = -1;
	uint8_t x1018 = 126U;
	uint32_t x1019 = 0U;
	int32_t x1020 = 34394140;
	int32_t t172 = 241192170;

    t172 = (((x1017*x1018)+x1019)==x1020);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x1021 = INT16_MIN;
	int64_t x1022 = -1LL;
	int64_t x1024 = -4376286866955785180LL;
	volatile int32_t t173 = 2522;

    t173 = (((x1021*x1022)+x1023)==x1024);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1033 = -1;
	static int16_t x1034 = -1;
	int64_t x1035 = -49697228LL;
	int8_t x1036 = -3;
	int32_t t174 = -5;

    t174 = (((x1033*x1034)+x1035)==x1036);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1037 = 20U;
	int8_t x1039 = 0;
	int32_t x1040 = -180357037;

    t175 = (((x1037*x1038)+x1039)==x1040);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1042 = 0;
	volatile int64_t x1043 = INT64_MIN;
	static uint64_t x1044 = 54611497LLU;
	static volatile int32_t t176 = -8037;

    t176 = (((x1041*x1042)+x1043)==x1044);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1046 = 6298167593235LLU;
	static volatile int16_t x1047 = INT16_MIN;
	int64_t x1048 = -1LL;
	int32_t t177 = 815263029;

    t177 = (((x1045*x1046)+x1047)==x1048);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1057 = INT8_MAX;
	volatile int16_t x1058 = INT16_MAX;
	int16_t x1059 = INT16_MIN;
	int64_t x1060 = 1LL;

    t178 = (((x1057*x1058)+x1059)==x1060);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1065 = UINT32_MAX;
	static int32_t x1066 = INT32_MAX;
	uint64_t x1067 = 5539276886402262698LLU;
	int32_t x1068 = -1;

    t179 = (((x1065*x1066)+x1067)==x1068);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x1069 = 1287714LLU;
	int16_t x1070 = -1;
	int16_t x1071 = INT16_MIN;
	static int64_t x1072 = INT64_MIN;
	volatile int32_t t180 = -43095;

    t180 = (((x1069*x1070)+x1071)==x1072);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1073 = -1;
	int64_t x1074 = 2158798140374431455LL;
	int32_t t181 = -5303003;

    t181 = (((x1073*x1074)+x1075)==x1076);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1078 = INT16_MIN;
	int16_t x1079 = -13;
	volatile int16_t x1080 = 2;
	volatile int32_t t182 = 46282;

    t182 = (((x1077*x1078)+x1079)==x1080);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1085 = 438116;
	uint64_t x1086 = UINT64_MAX;
	int64_t x1087 = INT64_MIN;
	static int64_t x1088 = INT64_MIN;
	static volatile int32_t t183 = -11221155;

    t183 = (((x1085*x1086)+x1087)==x1088);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1089 = -9;
	int8_t x1091 = -1;
	static volatile int32_t t184 = 248920271;

    t184 = (((x1089*x1090)+x1091)==x1092);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1095 = UINT16_MAX;
	int32_t x1096 = INT32_MIN;

    t185 = (((x1093*x1094)+x1095)==x1096);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1098 = 31U;
	volatile int32_t x1100 = -1;
	int32_t t186 = 560468;

    t186 = (((x1097*x1098)+x1099)==x1100);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1101 = INT16_MIN;
	int8_t x1102 = INT8_MAX;
	static int16_t x1103 = 1;

    t187 = (((x1101*x1102)+x1103)==x1104);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1106 = 5127U;
	static int64_t x1107 = INT64_MIN;
	int32_t t188 = 116968063;

    t188 = (((x1105*x1106)+x1107)==x1108);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x1109 = 16U;
	static volatile uint32_t x1110 = 2901574U;

    t189 = (((x1109*x1110)+x1111)==x1112);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1113 = INT8_MIN;
	static int8_t x1114 = INT8_MAX;
	int8_t x1115 = 5;
	int8_t x1116 = INT8_MAX;
	static int32_t t190 = 142270091;

    t190 = (((x1113*x1114)+x1115)==x1116);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1117 = UINT16_MAX;
	int16_t x1118 = INT16_MIN;
	volatile int64_t x1119 = 1106619781LL;
	int64_t x1120 = INT64_MIN;
	volatile int32_t t191 = 6334044;

    t191 = (((x1117*x1118)+x1119)==x1120);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1121 = 0LL;
	int64_t x1122 = -1LL;
	volatile uint8_t x1123 = 92U;
	uint64_t x1124 = 19070256LLU;
	volatile int32_t t192 = 151177;

    t192 = (((x1121*x1122)+x1123)==x1124);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1125 = -11767469;
	int64_t x1126 = 693130747304LL;
	static int8_t x1127 = INT8_MIN;
	volatile uint16_t x1128 = UINT16_MAX;
	int32_t t193 = 1158823;

    t193 = (((x1125*x1126)+x1127)==x1128);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1129 = -1;
	static int64_t x1131 = INT64_MAX;
	static volatile int32_t x1132 = INT32_MAX;
	volatile int32_t t194 = -18;

    t194 = (((x1129*x1130)+x1131)==x1132);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1133 = -14828;
	uint16_t x1134 = 93U;
	int32_t x1136 = -1;

    t195 = (((x1133*x1134)+x1135)==x1136);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1138 = -10790LL;
	int32_t x1139 = 2;
	uint32_t x1140 = UINT32_MAX;
	static int32_t t196 = 970;

    t196 = (((x1137*x1138)+x1139)==x1140);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x1145 = 4694U;
	static volatile int32_t x1146 = -7916;
	uint16_t x1147 = UINT16_MAX;
	static int8_t x1148 = INT8_MAX;
	int32_t t197 = -476818;

    t197 = (((x1145*x1146)+x1147)==x1148);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1149 = 68463407334745227LLU;
	int8_t x1150 = INT8_MIN;
	uint16_t x1151 = UINT16_MAX;
	uint64_t x1152 = 13944560059LLU;
	int32_t t198 = 6936430;

    t198 = (((x1149*x1150)+x1151)==x1152);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1153 = 6307;
	static volatile int16_t x1154 = -1;
	int32_t x1155 = -1;
	static int16_t x1156 = -1;

    t199 = (((x1153*x1154)+x1155)==x1156);

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

