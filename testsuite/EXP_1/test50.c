
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

static uint32_t x2 = 2828542U;
int16_t x10 = INT16_MIN;
int16_t x13 = -1;
volatile int32_t x20 = -1;
int32_t x21 = INT32_MAX;
uint64_t x23 = 8060914088134314LLU;
volatile uint16_t x27 = 557U;
uint64_t x28 = 1447LLU;
int32_t x39 = INT32_MIN;
static volatile int64_t x52 = INT64_MIN;
int8_t x53 = INT8_MAX;
int16_t x66 = -1;
int16_t x80 = 7;
static int16_t x81 = INT16_MAX;
volatile int32_t x86 = 539;
static uint64_t x88 = UINT64_MAX;
volatile int32_t t17 = -40443974;
volatile int32_t t18 = -1;
int32_t x96 = INT32_MIN;
int64_t x99 = INT64_MAX;
volatile uint8_t x112 = 11U;
uint64_t x113 = UINT64_MAX;
volatile int8_t x125 = INT8_MIN;
static volatile int32_t t24 = 4098847;
uint32_t x135 = UINT32_MAX;
int32_t t26 = -4;
uint8_t x138 = UINT8_MAX;
volatile int32_t x139 = INT32_MAX;
int32_t t31 = 1;
int8_t x161 = -1;
int32_t t34 = -1634784;
volatile int16_t x184 = INT16_MIN;
int8_t x185 = INT8_MIN;
uint16_t x193 = 17U;
int16_t x208 = INT16_MIN;
static int16_t x213 = INT16_MIN;
int16_t x220 = 0;
int8_t x223 = INT8_MIN;
uint64_t x224 = UINT64_MAX;
int16_t x229 = INT16_MIN;
uint64_t x231 = UINT64_MAX;
static uint8_t x232 = 1U;
static int8_t x240 = INT8_MAX;
static int8_t x251 = INT8_MIN;
int32_t x253 = INT32_MAX;
uint16_t x265 = UINT16_MAX;
int8_t x266 = 1;
static int16_t x267 = INT16_MIN;
int16_t x268 = 247;
int32_t t52 = 7356;
volatile int32_t t53 = -66969665;
int8_t x279 = INT8_MAX;
int32_t t54 = 2;
int32_t x284 = INT32_MIN;
int32_t t55 = -154;
volatile int64_t x285 = INT64_MIN;
uint32_t x286 = 519203080U;
uint16_t x287 = UINT16_MAX;
int64_t x297 = -671946496382514789LL;
int64_t x301 = -1LL;
static int16_t x306 = 0;
int16_t x317 = INT16_MAX;
int32_t t63 = -12450889;
uint8_t x322 = UINT8_MAX;
volatile int32_t x328 = -586827998;
uint32_t x333 = 7U;
volatile uint32_t x334 = 31U;
int8_t x335 = INT8_MAX;
int32_t t68 = -2682475;
uint64_t x342 = 53LLU;
volatile int32_t x365 = INT32_MAX;
int32_t t73 = 20845581;
uint32_t x377 = 7692190U;
volatile int32_t x391 = -1;
int32_t t78 = -310207696;
int16_t x396 = -117;
int32_t t80 = -2204335;
uint8_t x402 = 32U;
int8_t x429 = -13;
int16_t x434 = INT16_MIN;
static int8_t x438 = -24;
uint64_t x439 = UINT64_MAX;
static uint64_t x440 = UINT64_MAX;
uint16_t x447 = 13U;
int64_t x449 = 21393347201LL;
int64_t x450 = -43LL;
volatile uint16_t x451 = 144U;
volatile int16_t x453 = -1;
static volatile int32_t t91 = 417776;
int16_t x467 = INT16_MIN;
int16_t x468 = INT16_MIN;
uint64_t x469 = 234821830169501LLU;
int16_t x474 = INT16_MAX;
uint16_t x475 = 3U;
uint8_t x479 = UINT8_MAX;
uint32_t x482 = 3581607U;
static int32_t t98 = 19;
int16_t x487 = INT16_MIN;
int64_t x490 = 1249LL;
int16_t x500 = -37;
volatile int16_t x506 = INT16_MIN;
uint8_t x508 = 15U;
volatile uint32_t x510 = 245U;
int32_t x511 = -1;
int32_t x516 = 1285;
static uint64_t x521 = UINT64_MAX;
static int8_t x522 = -1;
static int64_t x527 = INT64_MIN;
volatile int32_t t108 = 13941;
int8_t x537 = INT8_MIN;
int32_t x549 = -51482548;
static volatile uint32_t x550 = 162U;
volatile uint16_t x563 = UINT16_MAX;
uint16_t x567 = 698U;
int32_t t118 = 96;
static volatile int16_t x584 = -1;
int8_t x586 = 4;
int64_t x587 = -142431233214398523LL;
uint16_t x588 = UINT16_MAX;
int32_t x594 = -1;
int64_t x596 = 29LL;
int64_t x601 = 206782LL;
int16_t x608 = INT16_MAX;
int8_t x609 = -1;
uint32_t x613 = UINT32_MAX;
int64_t x615 = INT64_MAX;
int16_t x616 = 1;
static volatile int32_t t128 = 1;
volatile int32_t t129 = 0;
int64_t x642 = -338023LL;
uint16_t x643 = 734U;
int64_t x645 = INT64_MIN;
int16_t x646 = 6938;
int32_t t132 = 4006150;
int32_t t135 = -25;
static int32_t x662 = -1;
int16_t x666 = INT16_MIN;
int64_t x671 = 1769450599846652LL;
uint64_t x683 = 46257816LLU;
int8_t x684 = -1;
int32_t t141 = 462276;
uint64_t x690 = 6469633769009631LLU;
int16_t x695 = INT16_MIN;
uint16_t x699 = 1U;
volatile uint16_t x701 = 2U;
int8_t x702 = INT8_MAX;
int8_t x707 = INT8_MIN;
volatile int32_t t147 = 29973573;
uint8_t x727 = 110U;
volatile int32_t t148 = 101;
int8_t x731 = -1;
int64_t x735 = -1LL;
static int16_t x739 = 1459;
uint16_t x740 = 13U;
volatile int32_t x752 = INT32_MAX;
volatile int32_t t155 = -1699;
volatile int32_t x758 = INT32_MAX;
int8_t x770 = 7;
static volatile int32_t x773 = -904681152;
volatile int32_t t160 = 14419;
uint32_t x779 = 6489U;
uint16_t x780 = 7U;
static int16_t x784 = INT16_MIN;
uint64_t x788 = UINT64_MAX;
int8_t x793 = INT8_MIN;
int32_t t165 = 1452135;
volatile int8_t x825 = -1;
int64_t x827 = INT64_MIN;
volatile int16_t x828 = 0;
volatile int32_t t170 = 5494537;
int64_t x830 = INT64_MAX;
uint16_t x832 = 8195U;
static uint8_t x834 = 15U;
int32_t t172 = 34060;
volatile int32_t x843 = 416;
int16_t x851 = INT16_MIN;
int64_t x855 = INT64_MIN;
static int64_t x856 = 34753841457882433LL;
volatile int8_t x860 = 0;
int8_t x863 = INT8_MIN;
int32_t t178 = -269828564;
volatile int8_t x870 = INT8_MAX;
uint16_t x875 = UINT16_MAX;
uint64_t x888 = UINT64_MAX;
int32_t x894 = -1;
uint8_t x900 = 0U;
int8_t x906 = 0;
uint16_t x907 = UINT16_MAX;
static volatile int32_t t189 = 15;
uint16_t x918 = UINT16_MAX;
int32_t x920 = INT32_MIN;
int32_t x924 = -113;
static int8_t x925 = 57;
int64_t x931 = INT64_MIN;
uint32_t x933 = 1176543U;
volatile int8_t x934 = INT8_MAX;
volatile uint32_t x937 = UINT32_MAX;
int32_t t198 = 1628;


void f0(void) {
    	int64_t x1 = 152610104LL;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 12094170;

    t0 = (((x1+x2)/x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -108;
	uint16_t x6 = UINT16_MAX;
	volatile int32_t x7 = -1;
	volatile int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = -3930544;

    t1 = (((x5+x6)/x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -2;
	uint64_t x11 = 2011LLU;
	uint64_t x12 = 323027889013106LLU;
	volatile int32_t t2 = 2855;

    t2 = (((x9+x10)/x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x14 = 349544000958998299LLU;
	int64_t x15 = -1LL;
	int16_t x16 = 30;
	int32_t t3 = 40984064;

    t3 = (((x13+x14)/x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 2576;
	int16_t x18 = INT16_MIN;
	int64_t x19 = 895798580784LL;
	volatile int32_t t4 = 5;

    t4 = (((x17+x18)/x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 3163321U;
	uint32_t x24 = 28936262U;
	volatile int32_t t5 = -459;

    t5 = (((x21+x22)/x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 4U;
	static int8_t x26 = 12;
	static volatile int32_t t6 = -27235839;

    t6 = (((x25+x26)/x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -10;
	uint16_t x34 = UINT16_MAX;
	static int8_t x35 = 54;
	static volatile int8_t x36 = INT8_MAX;
	int32_t t7 = 6;

    t7 = (((x33+x34)/x35)==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 3LLU;
	int32_t x38 = -778809592;
	static int8_t x40 = -27;
	static int32_t t8 = 0;

    t8 = (((x37+x38)/x39)==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	int32_t x42 = INT32_MAX;
	static int64_t x43 = 29275491039239LL;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -12406920;

    t9 = (((x41+x42)/x43)==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 0U;
	int32_t x46 = -1;
	int8_t x47 = -1;
	int16_t x48 = 0;
	int32_t t10 = 109;

    t10 = (((x45+x46)/x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	static int32_t t11 = -1763952;

    t11 = (((x49+x50)/x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x54 = 1U;
	int8_t x55 = -1;
	int64_t x56 = -51114586906783LL;
	int32_t t12 = -8074639;

    t12 = (((x53+x54)/x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = 99628621791127423LL;
	int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t13 = -38586;

    t13 = (((x65+x66)/x67)==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = INT16_MIN;
	uint32_t x74 = 3119U;
	volatile int8_t x75 = INT8_MAX;
	volatile int16_t x76 = -1;
	int32_t t14 = 63;

    t14 = (((x73+x74)/x75)==x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = 1;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 571520504515674861LLU;
	volatile int32_t t15 = 4;

    t15 = (((x77+x78)/x79)==x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x82 = 59U;
	volatile uint16_t x83 = 5U;
	int8_t x84 = -3;
	int32_t t16 = -37191;

    t16 = (((x81+x82)/x83)==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x85 = 14U;
	static volatile int32_t x87 = INT32_MIN;

    t17 = (((x85+x86)/x87)==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MAX;
	uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	int16_t x92 = -1;

    t18 = (((x89+x90)/x91)==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = UINT64_MAX;
	int16_t x94 = -1;
	int16_t x95 = -1;
	static int32_t t19 = -600935;

    t19 = (((x93+x94)/x95)==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile int32_t t20 = 2695;

    t20 = (((x97+x98)/x99)==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = 19647LL;
	int32_t x110 = -1;
	int8_t x111 = -17;
	int32_t t21 = 54545292;

    t21 = (((x109+x110)/x111)==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x114 = -94232;
	uint8_t x115 = UINT8_MAX;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t22 = 29659;

    t22 = (((x113+x114)/x115)==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = -1;
	int8_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	int16_t x124 = 176;
	volatile int32_t t23 = 80692;

    t23 = (((x121+x122)/x123)==x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x126 = 1;
	int32_t x127 = -1;
	int32_t x128 = -208941;

    t24 = (((x125+x126)/x127)==x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x129 = -481LL;
	uint32_t x130 = 693957U;
	uint64_t x131 = 2218560266451934LLU;
	uint64_t x132 = 3640257862LLU;
	static volatile int32_t t25 = 86;

    t25 = (((x129+x130)/x131)==x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x133 = INT16_MIN;
	static uint32_t x134 = 8551U;
	int8_t x136 = INT8_MAX;

    t26 = (((x133+x134)/x135)==x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x137 = UINT8_MAX;
	uint32_t x140 = 211U;
	volatile int32_t t27 = 0;

    t27 = (((x137+x138)/x139)==x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x141 = 1U;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	uint64_t x144 = 6LLU;
	volatile int32_t t28 = 749;

    t28 = (((x141+x142)/x143)==x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x145 = 527U;
	volatile int64_t x146 = 7719LL;
	int32_t x147 = -1;
	static uint8_t x148 = UINT8_MAX;
	int32_t t29 = 573961249;

    t29 = (((x145+x146)/x147)==x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x149 = -10576694;
	static uint32_t x150 = 599366663U;
	uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t30 = 26419560;

    t30 = (((x149+x150)/x151)==x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x153 = INT16_MAX;
	volatile int16_t x154 = INT16_MIN;
	int64_t x155 = -15997238LL;
	static int64_t x156 = INT64_MIN;

    t31 = (((x153+x154)/x155)==x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x157 = 2;
	static int16_t x158 = 229;
	uint64_t x159 = 50730776LLU;
	int8_t x160 = 4;
	int32_t t32 = 3436;

    t32 = (((x157+x158)/x159)==x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x162 = 2U;
	int16_t x163 = INT16_MIN;
	static volatile uint64_t x164 = UINT64_MAX;
	int32_t t33 = -143;

    t33 = (((x161+x162)/x163)==x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x169 = -10140LL;
	int32_t x170 = 457;
	uint8_t x171 = 29U;
	int64_t x172 = INT64_MIN;

    t34 = (((x169+x170)/x171)==x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x173 = 47184325U;
	uint32_t x174 = 37U;
	static uint8_t x175 = 98U;
	int16_t x176 = -1;
	volatile int32_t t35 = -365104368;

    t35 = (((x173+x174)/x175)==x176);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x177 = 0U;
	volatile uint32_t x178 = 25322498U;
	static int8_t x179 = 50;
	int8_t x180 = -1;
	int32_t t36 = 15085515;

    t36 = (((x177+x178)/x179)==x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x181 = INT32_MAX;
	static volatile uint32_t x182 = UINT32_MAX;
	static volatile uint64_t x183 = 217231101940930LLU;
	static int32_t t37 = 202791721;

    t37 = (((x181+x182)/x183)==x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x186 = INT64_MAX;
	int32_t x187 = -41560599;
	int8_t x188 = INT8_MAX;
	int32_t t38 = 53725012;

    t38 = (((x185+x186)/x187)==x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x194 = INT8_MAX;
	volatile int8_t x195 = INT8_MIN;
	uint16_t x196 = 1U;
	volatile int32_t t39 = 380005623;

    t39 = (((x193+x194)/x195)==x196);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x201 = 26U;
	volatile uint64_t x202 = 43098619992829604LLU;
	volatile int16_t x203 = 4;
	int8_t x204 = -1;
	static volatile int32_t t40 = 975;

    t40 = (((x201+x202)/x203)==x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x205 = INT64_MIN;
	int64_t x206 = 498131810251315LL;
	static uint8_t x207 = 13U;
	static int32_t t41 = -188989496;

    t41 = (((x205+x206)/x207)==x208);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x214 = 1U;
	volatile uint8_t x215 = 55U;
	uint16_t x216 = UINT16_MAX;
	int32_t t42 = 872600;

    t42 = (((x213+x214)/x215)==x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x217 = -673LL;
	uint32_t x218 = 678942002U;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t t43 = -97340946;

    t43 = (((x217+x218)/x219)==x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x221 = 57U;
	int8_t x222 = 29;
	volatile int32_t t44 = -1;

    t44 = (((x221+x222)/x223)==x224);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x230 = INT16_MIN;
	static int32_t t45 = 259;

    t45 = (((x229+x230)/x231)==x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x233 = INT32_MIN;
	volatile int16_t x234 = 5196;
	volatile uint32_t x235 = 301500U;
	int64_t x236 = -621133640171218236LL;
	static volatile int32_t t46 = -919;

    t46 = (((x233+x234)/x235)==x236);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x237 = INT8_MIN;
	static volatile int64_t x238 = -1LL;
	uint64_t x239 = UINT64_MAX;
	static int32_t t47 = -821;

    t47 = (((x237+x238)/x239)==x240);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x241 = 94501723847LLU;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 13U;
	uint64_t x244 = 33144287473514LLU;
	volatile int32_t t48 = -1596582;

    t48 = (((x241+x242)/x243)==x244);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x249 = 50685566U;
	static int16_t x250 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t49 = -1078;

    t49 = (((x249+x250)/x251)==x252);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x254 = -1LL;
	int16_t x255 = -1;
	int16_t x256 = INT16_MAX;
	int32_t t50 = -25295;

    t50 = (((x253+x254)/x255)==x256);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;
	static volatile int32_t t51 = 521429;

    t51 = (((x261+x262)/x263)==x264);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    

    t52 = (((x265+x266)/x267)==x268);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x269 = 5;
	volatile int64_t x270 = 301LL;
	static int8_t x271 = -3;
	static int32_t x272 = -1;

    t53 = (((x269+x270)/x271)==x272);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x277 = -1LL;
	uint32_t x278 = 19U;
	volatile uint64_t x280 = 317363001003LLU;

    t54 = (((x277+x278)/x279)==x280);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x281 = -1LL;
	int32_t x282 = -1;
	uint64_t x283 = UINT64_MAX;

    t55 = (((x281+x282)/x283)==x284);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x288 = 8454;
	volatile int32_t t56 = 8968739;

    t56 = (((x285+x286)/x287)==x288);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x289 = 3U;
	volatile int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = -1;
	volatile int32_t t57 = 912721;

    t57 = (((x289+x290)/x291)==x292);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x298 = -1;
	static int32_t x299 = -1;
	int64_t x300 = -181845739473129LL;
	volatile int32_t t58 = -187;

    t58 = (((x297+x298)/x299)==x300);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x302 = -1;
	int64_t x303 = 26227020329LL;
	int8_t x304 = -13;
	volatile int32_t t59 = 1;

    t59 = (((x301+x302)/x303)==x304);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x305 = -38669145117023LL;
	int16_t x307 = -1007;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t60 = 158;

    t60 = (((x305+x306)/x307)==x308);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x309 = 1;
	static int32_t x310 = INT32_MIN;
	uint8_t x311 = 31U;
	int8_t x312 = -8;
	int32_t t61 = 3;

    t61 = (((x309+x310)/x311)==x312);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x313 = UINT8_MAX;
	uint16_t x314 = 1U;
	volatile uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t62 = -1493004;

    t62 = (((x313+x314)/x315)==x316);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x318 = -1;
	int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MIN;

    t63 = (((x317+x318)/x319)==x320);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x321 = 4U;
	volatile uint64_t x323 = UINT64_MAX;
	int64_t x324 = INT64_MAX;
	volatile int32_t t64 = 238410;

    t64 = (((x321+x322)/x323)==x324);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x325 = 1395U;
	volatile int64_t x326 = 27LL;
	uint8_t x327 = 1U;
	volatile int32_t t65 = -26;

    t65 = (((x325+x326)/x327)==x328);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = UINT16_MAX;
	static int64_t x331 = -15549LL;
	int8_t x332 = INT8_MIN;
	static int32_t t66 = -105997386;

    t66 = (((x329+x330)/x331)==x332);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x336 = 1223021;
	static volatile int32_t t67 = 1;

    t67 = (((x333+x334)/x335)==x336);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x337 = INT8_MIN;
	uint16_t x338 = UINT16_MAX;
	int16_t x339 = INT16_MIN;
	int64_t x340 = -1LL;

    t68 = (((x337+x338)/x339)==x340);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x341 = INT8_MIN;
	static int16_t x343 = INT16_MAX;
	uint8_t x344 = 0U;
	static int32_t t69 = 22832529;

    t69 = (((x341+x342)/x343)==x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 224919431819911LLU;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	int32_t t70 = -7783;

    t70 = (((x345+x346)/x347)==x348);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x353 = 0U;
	uint64_t x354 = 1027196LLU;
	int8_t x355 = -33;
	static int16_t x356 = INT16_MIN;
	static int32_t t71 = 116311172;

    t71 = (((x353+x354)/x355)==x356);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x361 = 5U;
	int32_t x362 = -211;
	int16_t x363 = -1;
	volatile int8_t x364 = -3;
	int32_t t72 = -287321;

    t72 = (((x361+x362)/x363)==x364);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x366 = -1;
	uint64_t x367 = UINT64_MAX;
	int16_t x368 = -15903;

    t73 = (((x365+x366)/x367)==x368);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x369 = 24;
	uint8_t x370 = 50U;
	static int32_t x371 = -403530080;
	uint8_t x372 = 10U;
	int32_t t74 = -2845;

    t74 = (((x369+x370)/x371)==x372);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x374 = 8;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = 1U;
	int32_t t75 = 124127826;

    t75 = (((x373+x374)/x375)==x376);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	static int32_t t76 = -1003;

    t76 = (((x377+x378)/x379)==x380);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x385 = -1;
	int64_t x386 = -1494329380233661566LL;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	int32_t t77 = -247740781;

    t77 = (((x385+x386)/x387)==x388);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x389 = -4660713227658LL;
	static uint32_t x390 = 3868U;
	static int8_t x392 = -61;

    t78 = (((x389+x390)/x391)==x392);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x393 = 2U;
	uint8_t x394 = UINT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile int32_t t79 = 6265;

    t79 = (((x393+x394)/x395)==x396);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x398 = -1;
	volatile uint64_t x399 = UINT64_MAX;
	static volatile int16_t x400 = INT16_MIN;

    t80 = (((x397+x398)/x399)==x400);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x401 = -20651LL;
	int8_t x403 = 20;
	volatile int8_t x404 = -1;
	static volatile int32_t t81 = -25;

    t81 = (((x401+x402)/x403)==x404);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x405 = 0U;
	volatile uint8_t x406 = 0U;
	int16_t x407 = INT16_MAX;
	int32_t x408 = INT32_MAX;
	volatile int32_t t82 = 1168;

    t82 = (((x405+x406)/x407)==x408);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	uint64_t x424 = 65635LLU;
	int32_t t83 = 66788131;

    t83 = (((x421+x422)/x423)==x424);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x425 = INT16_MAX;
	int16_t x426 = 393;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MIN;
	volatile int32_t t84 = -1358;

    t84 = (((x425+x426)/x427)==x428);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x430 = INT8_MAX;
	int64_t x431 = -167648230LL;
	int64_t x432 = INT64_MIN;
	int32_t t85 = -4;

    t85 = (((x429+x430)/x431)==x432);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x433 = INT16_MAX;
	int32_t x435 = -88;
	int16_t x436 = -153;
	volatile int32_t t86 = -34249;

    t86 = (((x433+x434)/x435)==x436);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x437 = 230U;
	static int32_t t87 = 446720165;

    t87 = (((x437+x438)/x439)==x440);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x441 = INT16_MIN;
	volatile uint16_t x442 = 6U;
	int8_t x443 = INT8_MAX;
	volatile int64_t x444 = -1LL;
	volatile int32_t t88 = 3;

    t88 = (((x441+x442)/x443)==x444);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x445 = 4;
	static uint16_t x446 = UINT16_MAX;
	int8_t x448 = INT8_MAX;
	int32_t t89 = -226;

    t89 = (((x445+x446)/x447)==x448);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x452 = -1LL;
	volatile int32_t t90 = -1027;

    t90 = (((x449+x450)/x451)==x452);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x454 = 9U;
	int32_t x455 = -257118;
	static int16_t x456 = 14464;

    t91 = (((x453+x454)/x455)==x456);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x457 = 113U;
	int8_t x458 = INT8_MAX;
	int8_t x459 = -1;
	int8_t x460 = INT8_MIN;
	volatile int32_t t92 = 1459;

    t92 = (((x457+x458)/x459)==x460);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = 4479919620259152891LL;
	uint32_t x463 = 39U;
	static volatile int32_t x464 = INT32_MIN;
	static int32_t t93 = -90689282;

    t93 = (((x461+x462)/x463)==x464);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = -1LL;
	volatile int32_t t94 = 872;

    t94 = (((x465+x466)/x467)==x468);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x470 = -236656LL;
	volatile int32_t x471 = -1;
	int64_t x472 = -1LL;
	volatile int32_t t95 = 2;

    t95 = (((x469+x470)/x471)==x472);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x473 = 31;
	uint32_t x476 = UINT32_MAX;
	volatile int32_t t96 = -724737581;

    t96 = (((x473+x474)/x475)==x476);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x477 = -10304;
	volatile int32_t x478 = -1;
	static int8_t x480 = INT8_MIN;
	int32_t t97 = -7649753;

    t97 = (((x477+x478)/x479)==x480);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x481 = INT32_MAX;
	uint32_t x483 = UINT32_MAX;
	int32_t x484 = -1;

    t98 = (((x481+x482)/x483)==x484);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x485 = INT64_MIN;
	int8_t x486 = 23;
	volatile int64_t x488 = -759LL;
	static volatile int32_t t99 = 11;

    t99 = (((x485+x486)/x487)==x488);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x489 = INT8_MAX;
	int64_t x491 = INT64_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t100 = 0;

    t100 = (((x489+x490)/x491)==x492);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x493 = 1189710U;
	volatile int16_t x494 = -1;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = INT8_MIN;
	volatile int32_t t101 = 27419218;

    t101 = (((x493+x494)/x495)==x496);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x497 = 2U;
	int8_t x498 = INT8_MAX;
	int16_t x499 = -106;
	int32_t t102 = 0;

    t102 = (((x497+x498)/x499)==x500);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x501 = -1;
	static uint32_t x502 = 52U;
	static uint32_t x503 = 322095716U;
	int16_t x504 = INT16_MIN;
	volatile int32_t t103 = 46;

    t103 = (((x501+x502)/x503)==x504);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x505 = 497;
	int8_t x507 = INT8_MAX;
	int32_t t104 = 1206;

    t104 = (((x505+x506)/x507)==x508);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x509 = UINT64_MAX;
	static volatile uint32_t x512 = UINT32_MAX;
	int32_t t105 = 1;

    t105 = (((x509+x510)/x511)==x512);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x513 = -76439411;
	int64_t x514 = -1LL;
	static uint32_t x515 = UINT32_MAX;
	int32_t t106 = 575731;

    t106 = (((x513+x514)/x515)==x516);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x523 = INT64_MAX;
	uint64_t x524 = 17085082LLU;
	volatile int32_t t107 = -26;

    t107 = (((x521+x522)/x523)==x524);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x525 = INT32_MIN;
	int32_t x526 = INT32_MAX;
	int64_t x528 = 1LL;

    t108 = (((x525+x526)/x527)==x528);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = -1;
	uint32_t x531 = UINT32_MAX;
	volatile uint32_t x532 = 840805U;
	volatile int32_t t109 = 1008063723;

    t109 = (((x529+x530)/x531)==x532);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x533 = INT32_MAX;
	static uint32_t x534 = 142810U;
	int32_t x535 = INT32_MAX;
	uint16_t x536 = 10097U;
	int32_t t110 = 5;

    t110 = (((x533+x534)/x535)==x536);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x538 = UINT64_MAX;
	uint32_t x539 = 584177641U;
	static int32_t x540 = INT32_MIN;
	int32_t t111 = 3331866;

    t111 = (((x537+x538)/x539)==x540);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x545 = INT8_MIN;
	static volatile int16_t x546 = -45;
	uint64_t x547 = 208LLU;
	int64_t x548 = -1LL;
	volatile int32_t t112 = 1;

    t112 = (((x545+x546)/x547)==x548);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x551 = INT16_MIN;
	volatile int16_t x552 = -1;
	static int32_t t113 = -57880102;

    t113 = (((x549+x550)/x551)==x552);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x553 = -5;
	int64_t x554 = -1LL;
	int8_t x555 = INT8_MIN;
	volatile uint16_t x556 = UINT16_MAX;
	static int32_t t114 = 1;

    t114 = (((x553+x554)/x555)==x556);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x557 = INT32_MIN;
	static uint8_t x558 = UINT8_MAX;
	uint64_t x559 = 30LLU;
	static int32_t x560 = INT32_MIN;
	int32_t t115 = -718575;

    t115 = (((x557+x558)/x559)==x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x561 = INT16_MIN;
	static uint16_t x562 = UINT16_MAX;
	int16_t x564 = -1;
	int32_t t116 = 1830735;

    t116 = (((x561+x562)/x563)==x564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x565 = -1;
	volatile int8_t x566 = -1;
	uint8_t x568 = 25U;
	int32_t t117 = 112388066;

    t117 = (((x565+x566)/x567)==x568);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x573 = -1;
	static int8_t x574 = -39;
	uint64_t x575 = 5LLU;
	static int8_t x576 = INT8_MAX;

    t118 = (((x573+x574)/x575)==x576);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x577 = 36;
	int32_t x578 = 476336;
	static int16_t x579 = -12588;
	static int8_t x580 = -1;
	int32_t t119 = -1;

    t119 = (((x577+x578)/x579)==x580);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x581 = 3142643147546LLU;
	volatile uint64_t x582 = 1LLU;
	int8_t x583 = INT8_MAX;
	volatile int32_t t120 = 19660;

    t120 = (((x581+x582)/x583)==x584);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x585 = INT8_MAX;
	static int32_t t121 = -7098;

    t121 = (((x585+x586)/x587)==x588);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x593 = 76826532162LL;
	int32_t x595 = 28975725;
	static int32_t t122 = 3;

    t122 = (((x593+x594)/x595)==x596);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x602 = 27530832528655LLU;
	static int8_t x603 = INT8_MIN;
	static int8_t x604 = INT8_MIN;
	int32_t t123 = -59030;

    t123 = (((x601+x602)/x603)==x604);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x605 = -9064199LL;
	int32_t x606 = 60601741;
	int32_t x607 = INT32_MIN;
	volatile int32_t t124 = -25405;

    t124 = (((x605+x606)/x607)==x608);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x610 = -1;
	static int32_t x611 = INT32_MAX;
	volatile uint32_t x612 = 400473U;
	static volatile int32_t t125 = 1868191;

    t125 = (((x609+x610)/x611)==x612);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x614 = INT32_MIN;
	volatile int32_t t126 = 8898;

    t126 = (((x613+x614)/x615)==x616);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x617 = 69U;
	uint64_t x618 = UINT64_MAX;
	int32_t x619 = INT32_MAX;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t127 = -1;

    t127 = (((x617+x618)/x619)==x620);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x625 = -1;
	int16_t x626 = INT16_MIN;
	int64_t x627 = 34308295050683LL;
	uint16_t x628 = 481U;

    t128 = (((x625+x626)/x627)==x628);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x629 = INT64_MAX;
	int8_t x630 = INT8_MIN;
	static int16_t x631 = -1252;
	int32_t x632 = INT32_MIN;

    t129 = (((x629+x630)/x631)==x632);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x637 = INT64_MIN;
	int64_t x638 = INT64_MAX;
	uint8_t x639 = 33U;
	int32_t x640 = -1;
	int32_t t130 = -1;

    t130 = (((x637+x638)/x639)==x640);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x641 = -1;
	static volatile uint16_t x644 = 0U;
	volatile int32_t t131 = 1;

    t131 = (((x641+x642)/x643)==x644);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x647 = UINT64_MAX;
	int64_t x648 = -1LL;

    t132 = (((x645+x646)/x647)==x648);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x649 = INT8_MAX;
	int16_t x650 = INT16_MAX;
	volatile uint32_t x651 = 1132U;
	static uint64_t x652 = 40087063961243LLU;
	volatile int32_t t133 = -62097734;

    t133 = (((x649+x650)/x651)==x652);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x653 = 22U;
	static int32_t x654 = -80670;
	int32_t x655 = -1;
	uint8_t x656 = 3U;
	int32_t t134 = 0;

    t134 = (((x653+x654)/x655)==x656);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x657 = 1287U;
	static uint32_t x658 = 0U;
	int32_t x659 = -7;
	uint32_t x660 = 253700U;

    t135 = (((x657+x658)/x659)==x660);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x661 = 20U;
	volatile uint32_t x663 = 67U;
	int16_t x664 = INT16_MAX;
	static volatile int32_t t136 = -807559;

    t136 = (((x661+x662)/x663)==x664);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x665 = INT8_MAX;
	int8_t x667 = 4;
	int32_t x668 = 26154;
	volatile int32_t t137 = -235;

    t137 = (((x665+x666)/x667)==x668);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x669 = -1;
	static volatile uint16_t x670 = 5853U;
	int64_t x672 = 3LL;
	int32_t t138 = 47;

    t138 = (((x669+x670)/x671)==x672);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x673 = -1;
	volatile int8_t x674 = -1;
	uint64_t x675 = 115336LLU;
	uint32_t x676 = 13385U;
	int32_t t139 = -122591;

    t139 = (((x673+x674)/x675)==x676);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x677 = 601;
	int32_t x678 = INT32_MIN;
	uint32_t x679 = 499226170U;
	uint8_t x680 = UINT8_MAX;
	int32_t t140 = -34;

    t140 = (((x677+x678)/x679)==x680);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x681 = INT32_MIN;
	volatile int32_t x682 = 833;

    t141 = (((x681+x682)/x683)==x684);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x689 = 2LLU;
	static volatile int8_t x691 = INT8_MAX;
	static uint32_t x692 = 220989U;
	volatile int32_t t142 = 23485198;

    t142 = (((x689+x690)/x691)==x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x693 = INT16_MIN;
	static int8_t x694 = 9;
	volatile int8_t x696 = INT8_MIN;
	int32_t t143 = 15;

    t143 = (((x693+x694)/x695)==x696);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x698 = 0;
	int16_t x700 = -1;
	int32_t t144 = 0;

    t144 = (((x697+x698)/x699)==x700);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x703 = -1;
	volatile uint64_t x704 = UINT64_MAX;
	int32_t t145 = 10112774;

    t145 = (((x701+x702)/x703)==x704);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x705 = 11U;
	uint8_t x706 = UINT8_MAX;
	uint32_t x708 = UINT32_MAX;
	int32_t t146 = -128181749;

    t146 = (((x705+x706)/x707)==x708);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x721 = -39640290LL;
	int16_t x722 = 1;
	static int32_t x723 = -13799;
	volatile int64_t x724 = INT64_MAX;

    t147 = (((x721+x722)/x723)==x724);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x725 = INT8_MIN;
	static int32_t x726 = -1;
	int64_t x728 = INT64_MIN;

    t148 = (((x725+x726)/x727)==x728);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x729 = UINT64_MAX;
	uint32_t x730 = 319441019U;
	static int32_t x732 = INT32_MIN;
	int32_t t149 = -101433154;

    t149 = (((x729+x730)/x731)==x732);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x733 = 92483LL;
	int16_t x734 = -1;
	volatile uint16_t x736 = 30552U;
	int32_t t150 = 2;

    t150 = (((x733+x734)/x735)==x736);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x737 = UINT8_MAX;
	int64_t x738 = 16395709LL;
	static int32_t t151 = -1;

    t151 = (((x737+x738)/x739)==x740);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x741 = UINT8_MAX;
	int32_t x742 = -1;
	volatile int32_t x743 = -1;
	int64_t x744 = INT64_MAX;
	int32_t t152 = -412;

    t152 = (((x741+x742)/x743)==x744);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x745 = INT16_MIN;
	uint8_t x746 = 7U;
	int16_t x747 = INT16_MIN;
	uint32_t x748 = 346035259U;
	volatile int32_t t153 = 0;

    t153 = (((x745+x746)/x747)==x748);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x749 = 2;
	static int8_t x750 = INT8_MIN;
	int16_t x751 = INT16_MAX;
	int32_t t154 = -52670567;

    t154 = (((x749+x750)/x751)==x752);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x753 = INT8_MAX;
	int8_t x754 = -1;
	int32_t x755 = -6057772;
	static int64_t x756 = -1LL;

    t155 = (((x753+x754)/x755)==x756);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x757 = 0U;
	int32_t x759 = INT32_MIN;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t156 = 9006;

    t156 = (((x757+x758)/x759)==x760);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x761 = UINT32_MAX;
	volatile int16_t x762 = INT16_MAX;
	int64_t x763 = INT64_MIN;
	uint16_t x764 = 11820U;
	volatile int32_t t157 = 28;

    t157 = (((x761+x762)/x763)==x764);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x765 = -1;
	int32_t x766 = 28;
	int32_t x767 = -1;
	uint8_t x768 = 7U;
	volatile int32_t t158 = 35;

    t158 = (((x765+x766)/x767)==x768);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x769 = INT16_MIN;
	volatile int32_t x771 = INT32_MIN;
	volatile int8_t x772 = 1;
	volatile int32_t t159 = -2;

    t159 = (((x769+x770)/x771)==x772);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x774 = INT16_MIN;
	uint8_t x775 = 30U;
	uint16_t x776 = UINT16_MAX;

    t160 = (((x773+x774)/x775)==x776);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	int64_t x778 = 368618584LL;
	int32_t t161 = 76077;

    t161 = (((x777+x778)/x779)==x780);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x781 = 14620004789260LL;
	int8_t x782 = -1;
	volatile int8_t x783 = INT8_MIN;
	int32_t t162 = -110715528;

    t162 = (((x781+x782)/x783)==x784);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x785 = 1113919318LLU;
	volatile int8_t x786 = -1;
	static uint32_t x787 = UINT32_MAX;
	static int32_t t163 = 234;

    t163 = (((x785+x786)/x787)==x788);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x794 = INT8_MIN;
	uint32_t x795 = UINT32_MAX;
	int8_t x796 = -1;
	int32_t t164 = 0;

    t164 = (((x793+x794)/x795)==x796);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x797 = UINT8_MAX;
	uint16_t x798 = UINT16_MAX;
	static uint64_t x799 = 3096361601LLU;
	int8_t x800 = INT8_MAX;

    t165 = (((x797+x798)/x799)==x800);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x801 = -4;
	int32_t x802 = -1;
	uint64_t x803 = UINT64_MAX;
	uint16_t x804 = UINT16_MAX;
	int32_t t166 = 5;

    t166 = (((x801+x802)/x803)==x804);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x806 = 1;
	static int16_t x807 = INT16_MIN;
	volatile int32_t x808 = -1;
	volatile int32_t t167 = 3297365;

    t167 = (((x805+x806)/x807)==x808);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x813 = INT64_MIN;
	static int16_t x814 = INT16_MAX;
	volatile uint32_t x815 = UINT32_MAX;
	uint16_t x816 = 669U;
	int32_t t168 = -775937;

    t168 = (((x813+x814)/x815)==x816);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x821 = INT32_MIN;
	volatile int8_t x822 = 0;
	uint32_t x823 = 24170551U;
	static volatile uint64_t x824 = 2254465967861084LLU;
	int32_t t169 = -1;

    t169 = (((x821+x822)/x823)==x824);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x826 = -446476;

    t170 = (((x825+x826)/x827)==x828);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x829 = INT16_MIN;
	int16_t x831 = INT16_MIN;
	volatile int32_t t171 = 28462478;

    t171 = (((x829+x830)/x831)==x832);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x833 = 7667390;
	uint64_t x835 = 839903091142770457LLU;
	uint32_t x836 = 870659U;

    t172 = (((x833+x834)/x835)==x836);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x841 = 2;
	int8_t x842 = -1;
	uint8_t x844 = UINT8_MAX;
	volatile int32_t t173 = 7125023;

    t173 = (((x841+x842)/x843)==x844);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x845 = INT16_MIN;
	uint8_t x846 = 0U;
	uint32_t x847 = UINT32_MAX;
	uint16_t x848 = 14296U;
	int32_t t174 = -95789;

    t174 = (((x845+x846)/x847)==x848);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x849 = INT64_MIN;
	uint16_t x850 = 2U;
	int32_t x852 = INT32_MIN;
	int32_t t175 = -31623;

    t175 = (((x849+x850)/x851)==x852);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x853 = -1LL;
	int64_t x854 = INT64_MAX;
	volatile int32_t t176 = -425098;

    t176 = (((x853+x854)/x855)==x856);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x857 = 0U;
	uint32_t x858 = UINT32_MAX;
	int8_t x859 = -1;
	int32_t t177 = 977;

    t177 = (((x857+x858)/x859)==x860);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x861 = 4U;
	volatile int64_t x862 = INT64_MIN;
	uint8_t x864 = 4U;

    t178 = (((x861+x862)/x863)==x864);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x865 = 1638123468600LLU;
	int32_t x866 = -1;
	static volatile uint32_t x867 = 1004543U;
	int64_t x868 = -59523226381737676LL;
	volatile int32_t t179 = 17;

    t179 = (((x865+x866)/x867)==x868);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x869 = -2;
	int8_t x871 = INT8_MIN;
	int64_t x872 = INT64_MAX;
	int32_t t180 = 1356;

    t180 = (((x869+x870)/x871)==x872);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x873 = INT8_MAX;
	int8_t x874 = INT8_MIN;
	volatile uint32_t x876 = 56U;
	int32_t t181 = -77508;

    t181 = (((x873+x874)/x875)==x876);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x877 = -8957564;
	static volatile int16_t x878 = INT16_MIN;
	int32_t x879 = INT32_MIN;
	int8_t x880 = -1;
	int32_t t182 = 1;

    t182 = (((x877+x878)/x879)==x880);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x885 = UINT32_MAX;
	int32_t x886 = 1600453;
	volatile uint8_t x887 = 8U;
	volatile int32_t t183 = 170;

    t183 = (((x885+x886)/x887)==x888);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x889 = 10U;
	int32_t x890 = INT32_MIN;
	int8_t x891 = -1;
	static uint8_t x892 = UINT8_MAX;
	int32_t t184 = 529;

    t184 = (((x889+x890)/x891)==x892);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x893 = INT32_MAX;
	uint32_t x895 = UINT32_MAX;
	volatile uint32_t x896 = UINT32_MAX;
	int32_t t185 = -3;

    t185 = (((x893+x894)/x895)==x896);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x897 = -3741;
	volatile int64_t x898 = -1LL;
	volatile int16_t x899 = 14119;
	int32_t t186 = -233107;

    t186 = (((x897+x898)/x899)==x900);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x905 = 2U;
	volatile uint16_t x908 = UINT16_MAX;
	static int32_t t187 = 1542;

    t187 = (((x905+x906)/x907)==x908);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x909 = UINT16_MAX;
	volatile int64_t x910 = -1LL;
	int64_t x911 = 11263445804LL;
	int8_t x912 = 1;
	volatile int32_t t188 = -15;

    t188 = (((x909+x910)/x911)==x912);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x913 = UINT8_MAX;
	static volatile uint32_t x914 = 7348U;
	volatile int8_t x915 = INT8_MIN;
	volatile int16_t x916 = INT16_MIN;

    t189 = (((x913+x914)/x915)==x916);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x917 = UINT8_MAX;
	int64_t x919 = -22390595949654LL;
	static volatile int32_t t190 = -3979860;

    t190 = (((x917+x918)/x919)==x920);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x921 = 12U;
	int32_t x922 = INT32_MIN;
	uint16_t x923 = 995U;
	static volatile int32_t t191 = -299077;

    t191 = (((x921+x922)/x923)==x924);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x926 = -50;
	volatile int16_t x927 = INT16_MAX;
	int32_t x928 = INT32_MAX;
	int32_t t192 = 98305;

    t192 = (((x925+x926)/x927)==x928);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x929 = INT64_MIN;
	volatile uint64_t x930 = 32510316405820LLU;
	int8_t x932 = INT8_MAX;
	volatile int32_t t193 = -447;

    t193 = (((x929+x930)/x931)==x932);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x935 = INT8_MAX;
	int64_t x936 = -418LL;
	volatile int32_t t194 = -1803047;

    t194 = (((x933+x934)/x935)==x936);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x938 = 7846U;
	uint64_t x939 = 23726820300340LLU;
	int16_t x940 = 1;
	static int32_t t195 = 63243559;

    t195 = (((x937+x938)/x939)==x940);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x941 = INT64_MIN;
	uint32_t x942 = 26530995U;
	uint8_t x943 = UINT8_MAX;
	static int32_t x944 = -1;
	int32_t t196 = -103;

    t196 = (((x941+x942)/x943)==x944);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x945 = INT32_MIN;
	uint16_t x946 = 22U;
	uint64_t x947 = 4393412570376229790LLU;
	int32_t x948 = INT32_MIN;
	static volatile int32_t t197 = -77115;

    t197 = (((x945+x946)/x947)==x948);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x949 = 102702584698LLU;
	uint8_t x950 = 14U;
	int16_t x951 = INT16_MAX;
	int32_t x952 = 0;

    t198 = (((x949+x950)/x951)==x952);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x953 = -7584;
	int8_t x954 = 5;
	int32_t x955 = INT32_MIN;
	volatile int16_t x956 = INT16_MIN;
	int32_t t199 = 1;

    t199 = (((x953+x954)/x955)==x956);

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

