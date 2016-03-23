
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

int16_t x1 = -1;
int16_t x2 = 5;
uint8_t x10 = 65U;
static volatile int64_t x12 = INT64_MIN;
volatile uint64_t t2 = 77298516877555673LLU;
uint32_t x17 = 1426762656U;
volatile uint32_t x19 = 5095489U;
uint32_t t3 = 92309624U;
int32_t x24 = INT32_MAX;
static int32_t t5 = 1;
uint16_t x33 = UINT16_MAX;
static uint64_t x35 = UINT64_MAX;
uint32_t x39 = 4658859U;
int64_t t7 = 450286520715LL;
static int32_t x45 = -1;
volatile uint32_t t8 = 126443U;
int8_t x62 = INT8_MIN;
static volatile int8_t x69 = INT8_MIN;
static int16_t x70 = INT16_MIN;
int32_t x73 = 495;
static int16_t x74 = -1;
int16_t x87 = -3;
uint64_t x89 = 31456618898230847LLU;
uint16_t x91 = UINT16_MAX;
static int16_t x99 = INT16_MAX;
uint8_t x100 = UINT8_MAX;
static uint64_t t20 = 260220460300LLU;
static uint16_t x101 = UINT16_MAX;
int64_t x106 = -1LL;
static int8_t x107 = 1;
int32_t x115 = -1;
int64_t x116 = INT64_MAX;
int64_t x138 = INT64_MAX;
volatile int16_t x150 = INT16_MIN;
int32_t x151 = INT32_MIN;
volatile uint32_t t29 = 248399U;
uint16_t x153 = 390U;
int64_t x157 = -30LL;
static uint32_t x160 = 3838U;
int64_t x171 = INT64_MAX;
uint64_t t33 = 1021LLU;
static uint64_t x181 = 46021050673LLU;
int32_t x190 = -244;
uint8_t x192 = 8U;
int8_t x203 = INT8_MAX;
int16_t x218 = INT16_MIN;
uint64_t x219 = 1872766LLU;
static uint64_t x221 = 3464911LLU;
uint64_t x223 = UINT64_MAX;
static uint64_t x224 = UINT64_MAX;
int8_t x226 = -1;
int16_t x228 = -10458;
static volatile int8_t x232 = -1;
uint64_t t44 = 427251273047742LLU;
uint16_t x241 = 24838U;
uint16_t x246 = UINT16_MAX;
int16_t x249 = INT16_MIN;
int64_t x252 = 388LL;
int8_t x256 = 1;
static uint16_t x257 = UINT16_MAX;
int16_t x269 = -1;
uint64_t x270 = 3347LLU;
uint64_t t51 = 8728931827843083901LLU;
volatile int64_t x277 = 793648497LL;
uint32_t x278 = 29661U;
int8_t x279 = INT8_MIN;
volatile int64_t t53 = 725088885129051321LL;
int64_t x287 = INT64_MAX;
static int32_t x296 = -104824184;
uint64_t x297 = 601LLU;
uint64_t x299 = 457768601889668189LLU;
volatile int8_t x302 = -1;
static uint8_t x310 = 1U;
int32_t t60 = 0;
int32_t x334 = -4141102;
int8_t x341 = 7;
int8_t x351 = -1;
int64_t x359 = -1LL;
uint16_t x360 = 7U;
uint64_t x371 = UINT64_MAX;
static uint32_t x376 = UINT32_MAX;
static volatile int32_t t69 = 41562;
int16_t x382 = INT16_MIN;
volatile int32_t t71 = -1524304;
static uint64_t x387 = 1615391LLU;
uint32_t x388 = UINT32_MAX;
uint16_t x397 = UINT16_MAX;
volatile int64_t x399 = INT64_MAX;
int16_t x405 = INT16_MIN;
int32_t x407 = -1;
volatile int32_t x412 = INT32_MIN;
static int32_t x417 = -1;
int16_t x426 = INT16_MIN;
uint16_t x428 = 18642U;
uint8_t x435 = 20U;
volatile int32_t t83 = 7070588;
uint32_t x437 = 575U;
int64_t x444 = INT64_MIN;
int32_t x469 = INT32_MIN;
int8_t x478 = -21;
int16_t x486 = -4967;
static volatile int64_t t93 = -1LL;
uint8_t x496 = 26U;
int64_t x497 = -1650778290226384LL;
volatile int16_t x501 = INT16_MIN;
static volatile int32_t x504 = -1;
volatile int32_t t97 = -93;
int64_t x511 = 2752LL;
int64_t x512 = INT64_MIN;
int64_t t98 = 1LL;
int16_t x516 = -509;
volatile uint64_t t100 = 17093449LLU;
int64_t x526 = -1LL;
int16_t x528 = -16;
volatile int64_t t101 = -130388LL;
int16_t x533 = -1;
int16_t x535 = -1;
volatile int8_t x545 = -1;
int64_t x547 = INT64_MIN;
volatile int8_t x552 = 3;
static int32_t t107 = 491739886;
uint32_t x557 = 59503480U;
uint64_t x560 = UINT64_MAX;
uint64_t x563 = UINT64_MAX;
volatile int32_t x564 = 917;
static int64_t x567 = INT64_MAX;
static uint64_t x572 = UINT64_MAX;
int8_t x573 = INT8_MIN;
static int64_t x579 = -1374225422LL;
uint32_t x584 = UINT32_MAX;
int8_t x593 = -1;
int16_t x595 = 76;
volatile int32_t t115 = 1;
int16_t x597 = INT16_MIN;
int64_t x614 = -125222LL;
uint64_t t120 = 0LLU;
int32_t x634 = 38;
int32_t x640 = -777;
uint32_t x644 = 27U;
volatile int32_t t124 = -31554;
static volatile int32_t t127 = 75332;
static volatile uint64_t x665 = 170830946556951LLU;
int64_t x668 = 842563896316615LL;
int16_t x674 = INT16_MAX;
static int8_t x678 = INT8_MAX;
uint8_t x693 = 3U;
uint64_t x694 = UINT64_MAX;
int16_t x697 = 377;
static volatile int32_t t134 = 106541;
int16_t x701 = 341;
uint16_t x706 = UINT16_MAX;
volatile uint32_t t136 = 55719U;
uint16_t x716 = UINT16_MAX;
int64_t x720 = INT64_MIN;
int32_t t139 = -961764;
int32_t t140 = 125;
static uint8_t x740 = UINT8_MAX;
static int64_t x743 = INT64_MAX;
int8_t x744 = 0;
int16_t x747 = -1;
volatile uint16_t x756 = 183U;
int32_t x760 = -1;
uint8_t x763 = UINT8_MAX;
int32_t x764 = -139150;
volatile uint64_t t148 = 636010557355046603LLU;
static uint8_t x770 = UINT8_MAX;
int8_t x789 = -47;
int32_t x796 = INT32_MIN;
int8_t x805 = -1;
uint32_t x806 = 52078508U;
volatile int8_t x807 = INT8_MAX;
int32_t x823 = INT32_MIN;
volatile uint64_t t156 = 484788710578LLU;
static int64_t x832 = 85025198650928LL;
uint8_t x834 = UINT8_MAX;
static int32_t x835 = -3198367;
uint16_t x838 = 0U;
uint64_t x839 = 118LLU;
int8_t x851 = INT8_MIN;
static int32_t t162 = -4402;
uint16_t x871 = 33U;
volatile uint32_t t167 = 4U;
volatile int32_t x879 = INT32_MAX;
volatile uint8_t x894 = 10U;
int32_t x906 = -3;
int32_t x908 = INT32_MIN;
int16_t x918 = INT16_MIN;
uint64_t t176 = 3976353502LLU;
volatile int64_t t178 = -464689151490148LL;
uint16_t x937 = 41U;
volatile uint32_t x938 = 223758313U;
int16_t x939 = 66;
int8_t x940 = INT8_MIN;
int16_t x942 = INT16_MIN;
int8_t x954 = -1;
int8_t x955 = -1;
int64_t x961 = -1LL;
uint64_t x964 = 5158687884LLU;
uint32_t x968 = 1147U;
static int32_t x973 = INT32_MIN;
static volatile uint64_t x974 = UINT64_MAX;
volatile uint64_t t187 = 4180646658158LLU;
int16_t x977 = -1;
int8_t x982 = INT8_MIN;
volatile int32_t x992 = -1;
int8_t x994 = INT8_MIN;
uint32_t x997 = 4644650U;
volatile uint8_t x1005 = 0U;
volatile int8_t x1008 = 1;
uint8_t x1014 = UINT8_MAX;
int8_t x1016 = INT8_MAX;
static uint8_t x1018 = 7U;
volatile int64_t x1023 = -57064921052LL;
static volatile int32_t t199 = 12795695;


void f0(void) {
    	int32_t x3 = -1;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -232901;

    t0 = ((x1*x2)-(x3==x4));

    if (t0 != -5) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MAX;
	volatile uint8_t x11 = 0U;
	volatile int32_t t1 = 7145100;

    t1 = ((x9*x10)-(x11==x12));

    if (t1 != 8255) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 2931525394LLU;
	volatile uint64_t x14 = 113671896766564939LLU;
	uint32_t x15 = 457011U;
	int32_t x16 = 531952657;

    t2 = ((x13*x14)-(x15==x16));

    if (t2 != 13532322096731506246LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = -1;
	int32_t x20 = -9877;

    t3 = ((x17*x18)-(x19==x20));

    if (t3 != 2868204640U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	volatile int32_t t4 = 117349;

    t4 = ((x21*x22)-(x23==x24));

    if (t4 != -1073709056) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x30 = 14561376;
	int16_t x31 = -5927;
	int16_t x32 = INT16_MIN;

    t5 = ((x29*x30)-(x31==x32));

    if (t5 != 1849294752) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x34 = 1U;
	uint16_t x36 = 1U;
	int32_t t6 = 0;

    t6 = ((x33*x34)-(x35==x36));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x37 = -4LL;
	static int64_t x38 = 1139485261839979181LL;
	int16_t x40 = INT16_MIN;

    t7 = ((x37*x38)-(x39==x40));

    if (t7 != -4557941047359916724LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x46 = 0U;
	uint8_t x47 = UINT8_MAX;
	uint16_t x48 = UINT16_MAX;

    t8 = ((x45*x46)-(x47==x48));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x49 = -5436063;
	int64_t x50 = -1LL;
	uint8_t x51 = 114U;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t9 = -5145574496015738LL;

    t9 = ((x49*x50)-(x51==x52));

    if (t9 != 5436063LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = INT16_MAX;
	int16_t x55 = -1883;
	volatile int16_t x56 = INT16_MIN;
	static int32_t t10 = 30520;

    t10 = ((x53*x54)-(x55==x56));

    if (t10 != -1073709056) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = INT8_MAX;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = 1U;
	int32_t t11 = 65;

    t11 = ((x61*x62)-(x63==x64));

    if (t11 != -16256) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = 13;
	int16_t x66 = INT16_MIN;
	static uint16_t x67 = 0U;
	volatile uint16_t x68 = UINT16_MAX;
	int32_t t12 = 166091;

    t12 = ((x65*x66)-(x67==x68));

    if (t12 != -425984) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x71 = -1LL;
	uint32_t x72 = UINT32_MAX;
	int32_t t13 = 983000;

    t13 = ((x69*x70)-(x71==x72));

    if (t13 != 4194304) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x75 = 6546522U;
	int32_t x76 = 3114;
	int32_t t14 = -27446712;

    t14 = ((x73*x74)-(x75==x76));

    if (t14 != -495) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = -1LL;
	int32_t x78 = 1369637;
	uint16_t x79 = 31U;
	uint32_t x80 = UINT32_MAX;
	int64_t t15 = -209590161LL;

    t15 = ((x77*x78)-(x79==x80));

    if (t15 != -1369637LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = INT8_MAX;
	static int32_t x82 = -173787;
	int64_t x83 = INT64_MIN;
	int32_t x84 = -9;
	static int32_t t16 = 0;

    t16 = ((x81*x82)-(x83==x84));

    if (t16 != -22070949) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	static uint64_t x86 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t17 = 2776612LLU;

    t17 = ((x85*x86)-(x87==x88));

    if (t17 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x90 = INT32_MIN;
	static int16_t x92 = INT16_MIN;
	volatile uint64_t t18 = 62632860810759456LLU;

    t18 = ((x89*x90)-(x91==x92));

    if (t18 != 10835160290371305472LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = 1852142117LL;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = -395831343LL;
	int64_t x96 = 68024945397LL;
	volatile int64_t t19 = -3107LL;

    t19 = ((x93*x94)-(x95==x96));

    if (t19 != 7954889818207063515LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MAX;

    t20 = ((x97*x98)-(x99==x100));

    if (t20 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x102 = -29;
	static int8_t x103 = -5;
	volatile int16_t x104 = -1;
	int32_t t21 = -3612733;

    t21 = ((x101*x102)-(x103==x104));

    if (t21 != -1900515) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x105 = INT32_MAX;
	int16_t x108 = INT16_MIN;
	volatile int64_t t22 = 37424528828LL;

    t22 = ((x105*x106)-(x107==x108));

    if (t22 != -2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = INT16_MIN;
	static volatile int64_t x110 = -1LL;
	uint32_t x111 = 1U;
	int32_t x112 = INT32_MAX;
	static volatile int64_t t23 = 3816379156748576LL;

    t23 = ((x109*x110)-(x111==x112));

    if (t23 != 32768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MAX;
	int16_t x114 = -1;
	int32_t t24 = 16331;

    t24 = ((x113*x114)-(x115==x116));

    if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = -47;
	uint16_t x134 = 4061U;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t25 = -1067442;

    t25 = ((x133*x134)-(x135==x136));

    if (t25 != -190867) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x137 = -1;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 4434U;
	int64_t t26 = 77LL;

    t26 = ((x137*x138)-(x139==x140));

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x141 = 0U;
	static int8_t x142 = INT8_MAX;
	volatile int64_t x143 = -1LL;
	static int16_t x144 = -366;
	volatile int32_t t27 = 1;

    t27 = ((x141*x142)-(x143==x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x145 = 1U;
	int32_t x146 = -239052934;
	int32_t x147 = -10185;
	static int8_t x148 = INT8_MIN;
	static int32_t t28 = -49893;

    t28 = ((x145*x146)-(x147==x148));

    if (t28 != -239052934) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x149 = UINT32_MAX;
	int64_t x152 = INT64_MIN;

    t29 = ((x149*x150)-(x151==x152));

    if (t29 != 32768U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x154 = -1;
	int64_t x155 = 1209837647994834LL;
	int16_t x156 = INT16_MIN;
	volatile int32_t t30 = -388;

    t30 = ((x153*x154)-(x155==x156));

    if (t30 != -390) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x158 = UINT64_MAX;
	static volatile int64_t x159 = INT64_MIN;
	uint64_t t31 = 31439326147LLU;

    t31 = ((x157*x158)-(x159==x160));

    if (t31 != 30LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x165 = UINT64_MAX;
	static int32_t x166 = 5043;
	uint32_t x167 = 4134423U;
	int8_t x168 = -7;
	static volatile uint64_t t32 = 6457432863378243LLU;

    t32 = ((x165*x166)-(x167==x168));

    if (t32 != 18446744073709546573LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x169 = 65991537439094LLU;
	static int16_t x170 = 1925;
	volatile int16_t x172 = -1;

    t33 = ((x169*x170)-(x171==x172));

    if (t33 != 127033709570255950LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x177 = INT32_MIN;
	volatile int64_t x178 = -399070495LL;
	int64_t x179 = INT64_MIN;
	int8_t x180 = -61;
	int64_t t34 = -10782485152325206LL;

    t34 = ((x177*x178)-(x179==x180));

    if (t34 != 856997362411765760LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x182 = INT16_MIN;
	uint8_t x183 = 1U;
	static volatile uint16_t x184 = 1520U;
	uint64_t t35 = 1001744LLU;

    t35 = ((x181*x182)-(x183==x184));

    if (t35 != 18445236055921098752LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x189 = 1433U;
	uint32_t x191 = 31494191U;
	volatile int32_t t36 = 1;

    t36 = ((x189*x190)-(x191==x192));

    if (t36 != -349652) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x193 = 3;
	volatile int16_t x194 = INT16_MIN;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t37 = -871;

    t37 = ((x193*x194)-(x195==x196));

    if (t37 != -98304) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x201 = 1U;
	int32_t x202 = 61985;
	volatile uint32_t x204 = UINT32_MAX;
	int32_t t38 = 3366;

    t38 = ((x201*x202)-(x203==x204));

    if (t38 != 61985) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x205 = INT16_MIN;
	uint8_t x206 = 13U;
	uint16_t x207 = UINT16_MAX;
	int16_t x208 = -1;
	int32_t t39 = -121557584;

    t39 = ((x205*x206)-(x207==x208));

    if (t39 != -425984) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	uint16_t x210 = 7306U;
	volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = -1;
	static volatile uint64_t t40 = 94LLU;

    t40 = ((x209*x210)-(x211==x212));

    if (t40 != 18446744073709544310LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x217 = -1;
	int32_t x220 = INT32_MAX;
	volatile int32_t t41 = -594492;

    t41 = ((x217*x218)-(x219==x220));

    if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x222 = UINT16_MAX;
	volatile uint64_t t42 = 218777497968355894LLU;

    t42 = ((x221*x222)-(x223==x224));

    if (t42 != 227072942384LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t t43 = 16983;

    t43 = ((x225*x226)-(x227==x228));

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = UINT64_MAX;
	uint8_t x231 = 16U;

    t44 = ((x229*x230)-(x231==x232));

    if (t44 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x242 = 1322U;
	int8_t x243 = INT8_MAX;
	volatile int16_t x244 = -1;
	uint32_t t45 = 364U;

    t45 = ((x241*x242)-(x243==x244));

    if (t45 != 32835836U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x245 = -1;
	int32_t x247 = -22268;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t46 = 300474970;

    t46 = ((x245*x246)-(x247==x248));

    if (t46 != -65535) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x250 = 4U;
	int32_t x251 = INT32_MAX;
	volatile int32_t t47 = -33053371;

    t47 = ((x249*x250)-(x251==x252));

    if (t47 != -131072) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x253 = -1740;
	int16_t x254 = INT16_MIN;
	static int8_t x255 = INT8_MIN;
	volatile int32_t t48 = -12392287;

    t48 = ((x253*x254)-(x255==x256));

    if (t48 != 57016320) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x258 = 2LLU;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MIN;
	uint64_t t49 = 18142466LLU;

    t49 = ((x257*x258)-(x259==x260));

    if (t49 != 131070LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x265 = 5;
	static int8_t x266 = 11;
	int16_t x267 = INT16_MIN;
	static uint64_t x268 = 55360913LLU;
	static volatile int32_t t50 = 1;

    t50 = ((x265*x266)-(x267==x268));

    if (t50 != 55) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x271 = UINT16_MAX;
	static uint32_t x272 = 10248U;

    t51 = ((x269*x270)-(x271==x272));

    if (t51 != 18446744073709548269LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x273 = -1;
	uint16_t x274 = 24126U;
	uint8_t x275 = 15U;
	volatile int16_t x276 = -1;
	volatile int32_t t52 = 3892;

    t52 = ((x273*x274)-(x275==x276));

    if (t52 != -24126) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x280 = -1;

    t53 = ((x277*x278)-(x279==x280));

    if (t53 != 23540408069517LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x285 = 97U;
	static int64_t x286 = -65519398LL;
	static int8_t x288 = INT8_MAX;
	volatile int64_t t54 = -13429009LL;

    t54 = ((x285*x286)-(x287==x288));

    if (t54 != -6355381606LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 1U;
	int32_t x295 = 553740855;
	uint32_t t55 = UINT32_MAX;

    t55 = ((x293*x294)-(x295==x296));

    if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x298 = 0;
	int8_t x300 = 0;
	volatile uint64_t t56 = 37671487LLU;

    t56 = ((x297*x298)-(x299==x300));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x301 = 1996618784LL;
	static uint8_t x303 = UINT8_MAX;
	static uint16_t x304 = UINT16_MAX;
	int64_t t57 = -796LL;

    t57 = ((x301*x302)-(x303==x304));

    if (t57 != -1996618784LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x309 = -1;
	int8_t x311 = INT8_MIN;
	static int8_t x312 = -1;
	int32_t t58 = -3376;

    t58 = ((x309*x310)-(x311==x312));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x321 = -1LL;
	volatile int16_t x322 = -1;
	int32_t x323 = INT32_MIN;
	static uint8_t x324 = 15U;
	static volatile int64_t t59 = -34141604182025LL;

    t59 = ((x321*x322)-(x323==x324));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x325 = UINT16_MAX;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = UINT16_MAX;
	int8_t x328 = -1;

    t60 = ((x325*x326)-(x327==x328));

    if (t60 != -2147450880) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x329 = 6;
	int8_t x330 = -1;
	volatile int64_t x331 = INT64_MIN;
	static uint32_t x332 = 5658487U;
	static int32_t t61 = -288028627;

    t61 = ((x329*x330)-(x331==x332));

    if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x333 = 3;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t62 = -31;

    t62 = ((x333*x334)-(x335==x336));

    if (t62 != -12423306) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	uint32_t x344 = 15U;
	static int32_t t63 = 0;

    t63 = ((x341*x342)-(x343==x344));

    if (t63 != 1785) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x345 = INT16_MAX;
	uint64_t x346 = 1124943LLU;
	static uint8_t x347 = 2U;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t64 = 57492234902LLU;

    t64 = ((x345*x346)-(x347==x348));

    if (t64 != 36861007281LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x349 = 82U;
	int16_t x350 = 8;
	uint64_t x352 = 467LLU;
	static volatile int32_t t65 = -24067848;

    t65 = ((x349*x350)-(x351==x352));

    if (t65 != 656) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x357 = INT16_MAX;
	int16_t x358 = INT16_MIN;
	int32_t t66 = 63409536;

    t66 = ((x357*x358)-(x359==x360));

    if (t66 != -1073709056) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x365 = 809710U;
	volatile int8_t x366 = 6;
	int8_t x367 = 11;
	uint64_t x368 = UINT64_MAX;
	uint32_t t67 = 34U;

    t67 = ((x365*x366)-(x367==x368));

    if (t67 != 4858260U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x369 = -1;
	int32_t x370 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t68 = 630016135;

    t68 = ((x369*x370)-(x371==x372));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x373 = UINT8_MAX;
	int8_t x374 = 22;
	int8_t x375 = INT8_MAX;

    t69 = ((x373*x374)-(x375==x376));

    if (t69 != 5610) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x377 = INT32_MIN;
	static uint64_t x378 = 0LLU;
	uint32_t x379 = 18296128U;
	uint32_t x380 = 8247U;
	uint64_t t70 = 74174LLU;

    t70 = ((x377*x378)-(x379==x380));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x381 = -1;
	int64_t x383 = 823302756944698175LL;
	int8_t x384 = INT8_MIN;

    t71 = ((x381*x382)-(x383==x384));

    if (t71 != 32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x385 = -7;
	int32_t x386 = 234800273;
	static int32_t t72 = -358;

    t72 = ((x385*x386)-(x387==x388));

    if (t72 != -1643601911) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = -1;
	int16_t x391 = -3;
	uint16_t x392 = 1007U;
	int32_t t73 = -37183;

    t73 = ((x389*x390)-(x391==x392));

    if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x393 = 11;
	volatile int32_t x394 = -1;
	static int64_t x395 = -667991365496564LL;
	static uint8_t x396 = UINT8_MAX;
	int32_t t74 = 1301;

    t74 = ((x393*x394)-(x395==x396));

    if (t74 != -11) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x398 = -1;
	uint64_t x400 = 1080515114233LLU;
	volatile int32_t t75 = -192927;

    t75 = ((x397*x398)-(x399==x400));

    if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x406 = -1;
	uint16_t x408 = 232U;
	int32_t t76 = 116;

    t76 = ((x405*x406)-(x407==x408));

    if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x409 = 1U;
	volatile uint32_t x410 = 47389996U;
	uint32_t x411 = 11714U;
	volatile uint32_t t77 = 250448U;

    t77 = ((x409*x410)-(x411==x412));

    if (t77 != 47389996U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x413 = 222157880LLU;
	volatile int8_t x414 = -1;
	int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;
	uint64_t t78 = 1166122926206677LLU;

    t78 = ((x413*x414)-(x415==x416));

    if (t78 != 18446744073487393736LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x418 = INT8_MIN;
	int64_t x419 = -1LL;
	uint32_t x420 = 1974296256U;
	volatile int32_t t79 = 169258;

    t79 = ((x417*x418)-(x419==x420));

    if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x422 = 0;
	uint64_t x423 = UINT64_MAX;
	static uint16_t x424 = 26311U;
	static volatile int64_t t80 = -3711122462754444310LL;

    t80 = ((x421*x422)-(x423==x424));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x425 = UINT16_MAX;
	volatile uint16_t x427 = 4058U;
	volatile int32_t t81 = 359026;

    t81 = ((x425*x426)-(x427==x428));

    if (t81 != -2147450880) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x429 = INT8_MIN;
	static uint32_t x430 = 53928U;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = -52;
	uint32_t t82 = 9548U;

    t82 = ((x429*x430)-(x431==x432));

    if (t82 != 4288064512U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x433 = 15U;
	volatile uint8_t x434 = UINT8_MAX;
	static int8_t x436 = INT8_MIN;

    t83 = ((x433*x434)-(x435==x436));

    if (t83 != 3825) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x438 = INT16_MIN;
	static int8_t x439 = -18;
	int32_t x440 = 97333391;
	volatile uint32_t t84 = 185584U;

    t84 = ((x437*x438)-(x439==x440));

    if (t84 != 4276125696U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x441 = 0;
	int16_t x442 = INT16_MAX;
	volatile int16_t x443 = -1;
	volatile int32_t t85 = 9;

    t85 = ((x441*x442)-(x443==x444));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x445 = UINT8_MAX;
	static volatile uint64_t x446 = UINT64_MAX;
	static int32_t x447 = INT32_MIN;
	int8_t x448 = INT8_MIN;
	volatile uint64_t t86 = 490342350064LLU;

    t86 = ((x445*x446)-(x447==x448));

    if (t86 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x449 = 1U;
	int16_t x450 = -1;
	volatile int64_t x451 = INT64_MIN;
	uint64_t x452 = 1499880744LLU;
	int32_t t87 = -130492343;

    t87 = ((x449*x450)-(x451==x452));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x453 = INT16_MIN;
	volatile int16_t x454 = -4531;
	uint64_t x455 = 266511192LLU;
	int64_t x456 = 792048962923259265LL;
	volatile int32_t t88 = -14;

    t88 = ((x453*x454)-(x455==x456));

    if (t88 != 148471808) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x465 = -1;
	int64_t x466 = -53473146LL;
	static int16_t x467 = 8;
	int32_t x468 = 355;
	int64_t t89 = 392LL;

    t89 = ((x465*x466)-(x467==x468));

    if (t89 != 53473146LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x470 = 993246719U;
	int32_t x471 = 78;
	int32_t x472 = -1;
	uint32_t t90 = 12859824U;

    t90 = ((x469*x470)-(x471==x472));

    if (t90 != 2147483648U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x473 = -1;
	static int16_t x474 = INT16_MIN;
	volatile int8_t x475 = 18;
	uint16_t x476 = 15U;
	volatile int32_t t91 = -5420211;

    t91 = ((x473*x474)-(x475==x476));

    if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x477 = INT16_MAX;
	int64_t x479 = INT64_MAX;
	uint16_t x480 = 0U;
	volatile int32_t t92 = -4134782;

    t92 = ((x477*x478)-(x479==x480));

    if (t92 != -688107) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x485 = 3317048451518LL;
	volatile int8_t x487 = INT8_MIN;
	volatile uint16_t x488 = UINT16_MAX;

    t93 = ((x485*x486)-(x487==x488));

    if (t93 != -16475779658689906LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x489 = -1095223238955690LL;
	uint64_t x490 = 1LLU;
	int32_t x491 = 415;
	int64_t x492 = -1LL;
	uint64_t t94 = 873061LLU;

    t94 = ((x489*x490)-(x491==x492));

    if (t94 != 18445648850470595926LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x493 = 34U;
	static uint8_t x494 = 1U;
	static volatile uint16_t x495 = UINT16_MAX;
	int32_t t95 = 1951;

    t95 = ((x493*x494)-(x495==x496));

    if (t95 != 34) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x498 = UINT8_MAX;
	volatile uint64_t x499 = 25300LLU;
	int8_t x500 = INT8_MIN;
	volatile int64_t t96 = -4221597656232LL;

    t96 = ((x497*x498)-(x499==x500));

    if (t96 != -420948464007727920LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x502 = -1;
	uint32_t x503 = 330007U;

    t97 = ((x501*x502)-(x503==x504));

    if (t97 != 32768) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x509 = 2725517254106LL;
	int16_t x510 = INT16_MIN;

    t98 = ((x509*x510)-(x511==x512));

    if (t98 != -89309749382545408LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x513 = 52642LLU;
	static int16_t x514 = INT16_MAX;
	int8_t x515 = INT8_MAX;
	volatile uint64_t t99 = 6524693117LLU;

    t99 = ((x513*x514)-(x515==x516));

    if (t99 != 1724920414LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x521 = INT64_MAX;
	volatile uint64_t x522 = 17LLU;
	uint16_t x523 = 1U;
	int8_t x524 = INT8_MIN;

    t100 = ((x521*x522)-(x523==x524));

    if (t100 != 9223372036854775791LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x525 = -16;
	uint8_t x527 = 56U;

    t101 = ((x525*x526)-(x527==x528));

    if (t101 != 16LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x529 = -1;
	uint32_t x530 = 51860U;
	int32_t x531 = -375727;
	volatile int64_t x532 = -1LL;
	static uint32_t t102 = 10U;

    t102 = ((x529*x530)-(x531==x532));

    if (t102 != 4294915436U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x534 = UINT8_MAX;
	uint64_t x536 = 31850848LLU;
	int32_t t103 = 228;

    t103 = ((x533*x534)-(x535==x536));

    if (t103 != -255) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x541 = UINT32_MAX;
	int8_t x542 = -35;
	static volatile int32_t x543 = INT32_MIN;
	volatile int8_t x544 = INT8_MIN;
	uint32_t t104 = 1030013800U;

    t104 = ((x541*x542)-(x543==x544));

    if (t104 != 35U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x546 = 1U;
	int32_t x548 = INT32_MAX;
	volatile int32_t t105 = -806992;

    t105 = ((x545*x546)-(x547==x548));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x549 = 27U;
	volatile int8_t x550 = INT8_MIN;
	int8_t x551 = 1;
	volatile int32_t t106 = -1828;

    t106 = ((x549*x550)-(x551==x552));

    if (t106 != -3456) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x553 = -25154;
	int8_t x554 = INT8_MIN;
	int16_t x555 = -1;
	uint32_t x556 = 9355176U;

    t107 = ((x553*x554)-(x555==x556));

    if (t107 != 3219712) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x558 = 13U;
	int16_t x559 = INT16_MIN;
	uint32_t t108 = 10264U;

    t108 = ((x557*x558)-(x559==x560));

    if (t108 != 773545240U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x561 = INT32_MAX;
	volatile uint64_t x562 = UINT64_MAX;
	uint64_t t109 = 2823979519659243533LLU;

    t109 = ((x561*x562)-(x563==x564));

    if (t109 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = INT8_MIN;
	static volatile uint8_t x566 = 0U;
	volatile int64_t x568 = -1LL;
	static int32_t t110 = 608142;

    t110 = ((x565*x566)-(x567==x568));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x569 = 892131U;
	int8_t x570 = -7;
	static int32_t x571 = INT32_MAX;
	static volatile uint32_t t111 = 7U;

    t111 = ((x569*x570)-(x571==x572));

    if (t111 != 4288722379U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x574 = UINT32_MAX;
	volatile int16_t x575 = INT16_MIN;
	uint8_t x576 = 0U;
	volatile uint32_t t112 = 224210U;

    t112 = ((x573*x574)-(x575==x576));

    if (t112 != 128U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x577 = INT8_MIN;
	static uint64_t x578 = 1355920LLU;
	uint64_t x580 = 224620775645491LLU;
	volatile uint64_t t113 = 1292204981LLU;

    t113 = ((x577*x578)-(x579==x580));

    if (t113 != 18446744073535993856LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x581 = -33;
	int32_t x582 = -287088;
	static int32_t x583 = 10878121;
	int32_t t114 = 68;

    t114 = ((x581*x582)-(x583==x584));

    if (t114 != 9473904) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x594 = 99U;
	int16_t x596 = -126;

    t115 = ((x593*x594)-(x595==x596));

    if (t115 != -99) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x598 = -3;
	int64_t x599 = 56555LL;
	uint8_t x600 = UINT8_MAX;
	int32_t t116 = 61;

    t116 = ((x597*x598)-(x599==x600));

    if (t116 != 98304) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x605 = 14020U;
	int8_t x606 = -1;
	uint32_t x607 = UINT32_MAX;
	int64_t x608 = INT64_MAX;
	volatile uint32_t t117 = 857U;

    t117 = ((x605*x606)-(x607==x608));

    if (t117 != 4294953276U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x613 = 195889497;
	int8_t x615 = -1;
	int8_t x616 = INT8_MIN;
	volatile int64_t t118 = 871402619LL;

    t118 = ((x613*x614)-(x615==x616));

    if (t118 != -24529674593334LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x617 = INT32_MAX;
	uint32_t x618 = UINT32_MAX;
	uint16_t x619 = 2U;
	int8_t x620 = INT8_MIN;
	volatile uint32_t t119 = 20U;

    t119 = ((x617*x618)-(x619==x620));

    if (t119 != 2147483649U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x625 = 2053U;
	uint64_t x626 = 61LLU;
	int32_t x627 = 45505;
	uint64_t x628 = 46LLU;

    t120 = ((x625*x626)-(x627==x628));

    if (t120 != 125233LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x629 = UINT64_MAX;
	static uint64_t x630 = UINT64_MAX;
	int64_t x631 = -4826837164795LL;
	volatile int64_t x632 = -4301772828LL;
	volatile uint64_t t121 = 7449LLU;

    t121 = ((x629*x630)-(x631==x632));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x633 = 2U;
	static int8_t x635 = 1;
	static int16_t x636 = -222;
	volatile int32_t t122 = 32242;

    t122 = ((x633*x634)-(x635==x636));

    if (t122 != 76) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x637 = 188920LLU;
	int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = 261526LLU;
	static volatile uint64_t t123 = 234611811342LLU;

    t123 = ((x637*x638)-(x639==x640));

    if (t123 != 23992840LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x641 = 3;
	uint16_t x642 = 2U;
	static int64_t x643 = -13326LL;

    t124 = ((x641*x642)-(x643==x644));

    if (t124 != 6) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x645 = 63800LLU;
	static volatile int8_t x646 = INT8_MIN;
	static int16_t x647 = INT16_MIN;
	int16_t x648 = -1;
	static uint64_t t125 = 1406568847612LLU;

    t125 = ((x645*x646)-(x647==x648));

    if (t125 != 18446744073701385216LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x657 = -200;
	volatile int16_t x658 = -1;
	uint32_t x659 = 539U;
	uint16_t x660 = 19U;
	int32_t t126 = 10010163;

    t126 = ((x657*x658)-(x659==x660));

    if (t126 != 200) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x661 = 1;
	static int16_t x662 = -931;
	int64_t x663 = -1LL;
	volatile int32_t x664 = -1;

    t127 = ((x661*x662)-(x663==x664));

    if (t127 != -932) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x666 = -10557;
	int32_t x667 = INT32_MAX;
	uint64_t t128 = 2203312615786884947LLU;

    t128 = ((x665*x666)-(x667==x668));

    if (t128 != 16643281770907819909LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x669 = INT16_MIN;
	uint16_t x670 = UINT16_MAX;
	uint32_t x671 = UINT32_MAX;
	static int64_t x672 = 29627091813206LL;
	int32_t t129 = 0;

    t129 = ((x669*x670)-(x671==x672));

    if (t129 != -2147450880) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x673 = 342U;
	uint16_t x675 = 243U;
	int32_t x676 = -1;
	volatile int32_t t130 = 44019641;

    t130 = ((x673*x674)-(x675==x676));

    if (t130 != 11206314) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x677 = 2;
	int8_t x679 = INT8_MIN;
	static int16_t x680 = -1;
	int32_t t131 = 3846912;

    t131 = ((x677*x678)-(x679==x680));

    if (t131 != 254) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x681 = 0U;
	int64_t x682 = INT64_MAX;
	int8_t x683 = INT8_MIN;
	static uint8_t x684 = 0U;
	int64_t t132 = -2119527832LL;

    t132 = ((x681*x682)-(x683==x684));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x695 = 46341U;
	int32_t x696 = -1;
	volatile uint64_t t133 = 3129373484LLU;

    t133 = ((x693*x694)-(x695==x696));

    if (t133 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x698 = -2;
	int64_t x699 = INT64_MIN;
	volatile int64_t x700 = 3LL;

    t134 = ((x697*x698)-(x699==x700));

    if (t134 != -754) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x702 = 21086U;
	static int64_t x703 = -1LL;
	uint32_t x704 = 272U;
	uint32_t t135 = 56752180U;

    t135 = ((x701*x702)-(x703==x704));

    if (t135 != 7190326U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x705 = 1890786U;
	int8_t x707 = -1;
	static volatile int64_t x708 = -1LL;

    t136 = ((x705*x706)-(x707==x708));

    if (t136 != 3653576221U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x709 = 15702U;
	uint16_t x710 = UINT16_MAX;
	int32_t x711 = INT32_MIN;
	int16_t x712 = INT16_MIN;
	int32_t t137 = 308161;

    t137 = ((x709*x710)-(x711==x712));

    if (t137 != 1029030570) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x713 = 40U;
	uint64_t x714 = 5026060249457LLU;
	uint16_t x715 = 57U;
	uint64_t t138 = 108249LLU;

    t138 = ((x713*x714)-(x715==x716));

    if (t138 != 201042409978280LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x717 = INT16_MIN;
	uint16_t x718 = 3626U;
	static uint64_t x719 = 183330LLU;

    t139 = ((x717*x718)-(x719==x720));

    if (t139 != -118816768) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	volatile int64_t x728 = INT64_MIN;

    t140 = ((x725*x726)-(x727==x728));

    if (t140 != 128) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x737 = -2966;
	static int16_t x738 = INT16_MAX;
	int8_t x739 = INT8_MAX;
	int32_t t141 = 24594914;

    t141 = ((x737*x738)-(x739==x740));

    if (t141 != -97186922) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x741 = UINT16_MAX;
	int16_t x742 = 1735;
	volatile int32_t t142 = -158026;

    t142 = ((x741*x742)-(x743==x744));

    if (t142 != 113703225) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x745 = -1;
	uint32_t x746 = 573U;
	static uint8_t x748 = UINT8_MAX;
	volatile uint32_t t143 = 4015U;

    t143 = ((x745*x746)-(x747==x748));

    if (t143 != 4294966723U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x749 = -2;
	uint64_t x750 = UINT64_MAX;
	int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MAX;
	volatile uint64_t t144 = 1LLU;

    t144 = ((x749*x750)-(x751==x752));

    if (t144 != 2LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x753 = UINT32_MAX;
	static int16_t x754 = INT16_MIN;
	int32_t x755 = INT32_MIN;
	uint32_t t145 = 6999U;

    t145 = ((x753*x754)-(x755==x756));

    if (t145 != 32768U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = 65926736195111LL;
	int32_t x759 = -1;
	int64_t t146 = -66828LL;

    t146 = ((x757*x758)-(x759==x760));

    if (t146 != -8438622232974209LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x761 = -1;
	volatile uint64_t x762 = UINT64_MAX;
	volatile uint64_t t147 = 159243380308792690LLU;

    t147 = ((x761*x762)-(x763==x764));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x765 = 47U;
	uint64_t x766 = UINT64_MAX;
	uint16_t x767 = 1U;
	uint32_t x768 = 50351206U;

    t148 = ((x765*x766)-(x767==x768));

    if (t148 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x769 = -1;
	volatile uint32_t x771 = UINT32_MAX;
	volatile uint16_t x772 = UINT16_MAX;
	volatile int32_t t149 = 56;

    t149 = ((x769*x770)-(x771==x772));

    if (t149 != -255) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x773 = -1473310;
	uint32_t x774 = 0U;
	int64_t x775 = 26296338857060LL;
	uint16_t x776 = 7U;
	static volatile uint32_t t150 = 30711242U;

    t150 = ((x773*x774)-(x775==x776));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x777 = -13927;
	static volatile uint16_t x778 = UINT16_MAX;
	uint8_t x779 = UINT8_MAX;
	int16_t x780 = INT16_MAX;
	volatile int32_t t151 = 1027580;

    t151 = ((x777*x778)-(x779==x780));

    if (t151 != -912705945) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x790 = 51U;
	static int64_t x791 = INT64_MIN;
	int64_t x792 = -1LL;
	volatile int32_t t152 = -2156876;

    t152 = ((x789*x790)-(x791==x792));

    if (t152 != -2397) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x793 = 71U;
	int16_t x794 = -10018;
	static volatile int64_t x795 = -1LL;
	volatile int32_t t153 = -64;

    t153 = ((x793*x794)-(x795==x796));

    if (t153 != -711278) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x808 = INT64_MIN;
	static volatile uint32_t t154 = 259474U;

    t154 = ((x805*x806)-(x807==x808));

    if (t154 != 4242888788U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x817 = 9884801525043LL;
	int32_t x818 = -3;
	int32_t x819 = -1;
	volatile uint32_t x820 = 21771197U;
	int64_t t155 = 1396LL;

    t155 = ((x817*x818)-(x819==x820));

    if (t155 != -29654404575129LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x821 = 3LLU;
	uint32_t x822 = 8U;
	int8_t x824 = 7;

    t156 = ((x821*x822)-(x823==x824));

    if (t156 != 24LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x829 = 115U;
	volatile int8_t x830 = INT8_MAX;
	int32_t x831 = INT32_MIN;
	static volatile int32_t t157 = -7;

    t157 = ((x829*x830)-(x831==x832));

    if (t157 != 14605) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x833 = -3;
	uint32_t x836 = 4U;
	int32_t t158 = -1;

    t158 = ((x833*x834)-(x835==x836));

    if (t158 != -765) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x837 = -678806937LL;
	uint32_t x840 = UINT32_MAX;
	volatile int64_t t159 = 28069029969991LL;

    t159 = ((x837*x838)-(x839==x840));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x841 = -1;
	uint16_t x842 = 0U;
	volatile int8_t x843 = INT8_MIN;
	uint32_t x844 = 536U;
	int32_t t160 = 48711283;

    t160 = ((x841*x842)-(x843==x844));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x845 = INT8_MIN;
	uint64_t x846 = 139747438433LLU;
	static int8_t x847 = INT8_MIN;
	uint8_t x848 = 2U;
	uint64_t t161 = 146367916288323LLU;

    t161 = ((x845*x846)-(x847==x848));

    if (t161 != 18446726186037432192LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x849 = INT16_MIN;
	uint16_t x850 = 108U;
	int8_t x852 = INT8_MAX;

    t162 = ((x849*x850)-(x851==x852));

    if (t162 != -3538944) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x857 = -1;
	static uint32_t x858 = 3U;
	int8_t x859 = -1;
	uint32_t x860 = 3047U;
	static uint32_t t163 = 301620U;

    t163 = ((x857*x858)-(x859==x860));

    if (t163 != 4294967293U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x861 = -1LL;
	int8_t x862 = -1;
	volatile uint8_t x863 = 15U;
	volatile uint64_t x864 = 2LLU;
	volatile int64_t t164 = -112541259219517188LL;

    t164 = ((x861*x862)-(x863==x864));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x865 = 5;
	int8_t x866 = INT8_MIN;
	int16_t x867 = INT16_MIN;
	uint32_t x868 = UINT32_MAX;
	volatile int32_t t165 = -2;

    t165 = ((x865*x866)-(x867==x868));

    if (t165 != -640) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x869 = -1;
	int16_t x870 = 104;
	int32_t x872 = 0;
	volatile int32_t t166 = -932;

    t166 = ((x869*x870)-(x871==x872));

    if (t166 != -104) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x873 = 221054550U;
	volatile int16_t x874 = 12185;
	int16_t x875 = 15044;
	uint32_t x876 = 3023U;

    t167 = ((x873*x874)-(x875==x876));

    if (t167 != 605197158U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x877 = 2U;
	volatile int64_t x878 = -1LL;
	int16_t x880 = INT16_MIN;
	int64_t t168 = -494361LL;

    t168 = ((x877*x878)-(x879==x880));

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x881 = UINT16_MAX;
	int32_t x882 = -352;
	volatile uint64_t x883 = 743LLU;
	int32_t x884 = -2;
	int32_t t169 = 101690437;

    t169 = ((x881*x882)-(x883==x884));

    if (t169 != -23068320) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x893 = INT16_MIN;
	volatile uint8_t x895 = UINT8_MAX;
	uint64_t x896 = UINT64_MAX;
	volatile int32_t t170 = -7;

    t170 = ((x893*x894)-(x895==x896));

    if (t170 != -327680) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x897 = INT16_MAX;
	uint32_t x898 = 1825620U;
	int16_t x899 = 0;
	static int64_t x900 = -1LL;
	uint32_t t171 = 2U;

    t171 = ((x897*x898)-(x899==x900));

    if (t171 != 3985515692U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x901 = UINT8_MAX;
	int64_t x902 = 125961803LL;
	int16_t x903 = INT16_MAX;
	uint8_t x904 = UINT8_MAX;
	int64_t t172 = 30028018LL;

    t172 = ((x901*x902)-(x903==x904));

    if (t172 != 32120259765LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x905 = -1;
	int32_t x907 = -1;
	static int32_t t173 = -980;

    t173 = ((x905*x906)-(x907==x908));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x909 = INT16_MIN;
	int32_t x910 = -1;
	volatile int64_t x911 = -1LL;
	volatile uint32_t x912 = 102167U;
	int32_t t174 = -6;

    t174 = ((x909*x910)-(x911==x912));

    if (t174 != 32768) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x917 = UINT8_MAX;
	int64_t x919 = 30855LL;
	uint8_t x920 = 74U;
	volatile int32_t t175 = 283058712;

    t175 = ((x917*x918)-(x919==x920));

    if (t175 != -8355840) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x921 = 29U;
	static uint64_t x922 = 264763774852049343LLU;
	static int64_t x923 = INT64_MAX;
	volatile int64_t x924 = 1LL;

    t176 = ((x921*x922)-(x923==x924));

    if (t176 != 7678149470709430947LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile int32_t x926 = -1;
	int64_t x927 = -1LL;
	volatile int64_t x928 = INT64_MIN;
	static volatile int32_t t177 = 8;

    t177 = ((x925*x926)-(x927==x928));

    if (t177 != -65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x929 = INT32_MIN;
	int64_t x930 = -42LL;
	volatile uint32_t x931 = 1657U;
	static int64_t x932 = INT64_MAX;

    t178 = ((x929*x930)-(x931==x932));

    if (t178 != 90194313216LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t t179 = 64408598U;

    t179 = ((x937*x938)-(x939==x940));

    if (t179 != 584156241U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x941 = 1U;
	int32_t x943 = -408344128;
	volatile uint32_t x944 = UINT32_MAX;
	volatile int32_t t180 = 2602;

    t180 = ((x941*x942)-(x943==x944));

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x945 = UINT16_MAX;
	int16_t x946 = INT16_MIN;
	int16_t x947 = INT16_MAX;
	int64_t x948 = -11123795030034290LL;
	int32_t t181 = -6217;

    t181 = ((x945*x946)-(x947==x948));

    if (t181 != -2147450880) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x949 = INT16_MIN;
	int32_t x950 = -1;
	int32_t x951 = INT32_MIN;
	int16_t x952 = INT16_MIN;
	int32_t t182 = -1390;

    t182 = ((x949*x950)-(x951==x952));

    if (t182 != 32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x953 = -1;
	static int64_t x956 = 38072591770LL;
	int32_t t183 = -159;

    t183 = ((x953*x954)-(x955==x956));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x957 = UINT8_MAX;
	volatile int16_t x958 = INT16_MAX;
	volatile int64_t x959 = INT64_MIN;
	volatile uint8_t x960 = UINT8_MAX;
	volatile int32_t t184 = 3943315;

    t184 = ((x957*x958)-(x959==x960));

    if (t184 != 8355585) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x962 = UINT32_MAX;
	static int16_t x963 = -1;
	static volatile int64_t t185 = -391796606995LL;

    t185 = ((x961*x962)-(x963==x964));

    if (t185 != -4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x965 = INT32_MIN;
	uint64_t x966 = 5488553288540LLU;
	static volatile uint64_t x967 = 670LLU;
	volatile uint64_t t186 = 54215058620LLU;

    t186 = ((x965*x966)-(x967==x968));

    if (t186 != 891024784127688704LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x975 = -1LL;
	uint32_t x976 = 0U;

    t187 = ((x973*x974)-(x975==x976));

    if (t187 != 2147483648LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x978 = -1022330417970082LL;
	static volatile int64_t x979 = INT64_MIN;
	int64_t x980 = INT64_MAX;
	int64_t t188 = -192568707686499LL;

    t188 = ((x977*x978)-(x979==x980));

    if (t188 != 1022330417970082LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x981 = -5;
	static int64_t x983 = INT64_MIN;
	int8_t x984 = INT8_MIN;
	volatile int32_t t189 = -706301;

    t189 = ((x981*x982)-(x983==x984));

    if (t189 != 640) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x985 = 3256877;
	int8_t x986 = INT8_MAX;
	int8_t x987 = INT8_MIN;
	int32_t x988 = -1;
	volatile int32_t t190 = 15795;

    t190 = ((x985*x986)-(x987==x988));

    if (t190 != 413623379) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x989 = 1U;
	int16_t x990 = 327;
	uint16_t x991 = UINT16_MAX;
	volatile int32_t t191 = -44;

    t191 = ((x989*x990)-(x991==x992));

    if (t191 != 327) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x993 = INT8_MIN;
	int64_t x995 = INT64_MAX;
	int64_t x996 = INT64_MIN;
	static volatile int32_t t192 = 3;

    t192 = ((x993*x994)-(x995==x996));

    if (t192 != 16384) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x998 = INT16_MIN;
	static int64_t x999 = -1LL;
	int64_t x1000 = INT64_MAX;
	volatile uint32_t t193 = 24U;

    t193 = ((x997*x998)-(x999==x1000));

    if (t193 != 2422931456U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1006 = -1;
	uint8_t x1007 = UINT8_MAX;
	volatile int32_t t194 = -476053357;

    t194 = ((x1005*x1006)-(x1007==x1008));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1009 = -5999304845LL;
	int32_t x1010 = -1;
	int64_t x1011 = INT64_MIN;
	int16_t x1012 = INT16_MIN;
	volatile int64_t t195 = 974483245LL;

    t195 = ((x1009*x1010)-(x1011==x1012));

    if (t195 != 5999304845LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1013 = -1;
	volatile int16_t x1015 = 1;
	volatile int32_t t196 = 0;

    t196 = ((x1013*x1014)-(x1015==x1016));

    if (t196 != -255) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1017 = INT8_MIN;
	uint32_t x1019 = UINT32_MAX;
	int8_t x1020 = INT8_MIN;
	volatile int32_t t197 = -272;

    t197 = ((x1017*x1018)-(x1019==x1020));

    if (t197 != -896) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1021 = 1U;
	static int8_t x1022 = -63;
	volatile int16_t x1024 = INT16_MIN;
	volatile int32_t t198 = 0;

    t198 = ((x1021*x1022)-(x1023==x1024));

    if (t198 != -63) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1025 = 17;
	int32_t x1026 = -1;
	int16_t x1027 = -1;
	volatile int64_t x1028 = INT64_MIN;

    t199 = ((x1025*x1026)-(x1027==x1028));

    if (t199 != -17) { NG(); } else { ; }
	
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

