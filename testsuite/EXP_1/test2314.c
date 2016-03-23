
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

static int64_t x1 = 931LL;
int32_t x5 = INT32_MIN;
static uint16_t x7 = UINT16_MAX;
int64_t x8 = 177LL;
int64_t t1 = 474489758125LL;
int16_t x12 = -1;
static volatile int64_t x16 = INT64_MAX;
static volatile int64_t t3 = -15856175LL;
volatile int32_t x17 = INT32_MAX;
uint64_t x25 = 366737527083139076LLU;
uint32_t x30 = 343038414U;
static volatile int8_t x31 = INT8_MIN;
int8_t x34 = INT8_MIN;
uint32_t x36 = 586U;
volatile int64_t t9 = -52304LL;
int16_t x41 = -6;
int64_t x43 = 25651LL;
int32_t x44 = -1;
static int16_t x45 = INT16_MIN;
volatile uint64_t t12 = 4639756LLU;
volatile int8_t x56 = INT8_MIN;
int32_t x67 = -1;
static uint64_t t16 = 47740458728909LLU;
uint8_t x71 = 1U;
int64_t x72 = 109816234023LL;
volatile uint16_t x75 = 6U;
static uint16_t x80 = 1140U;
static volatile uint32_t x82 = UINT32_MAX;
static int64_t x85 = -65900324LL;
volatile uint64_t t21 = 18LLU;
static int64_t x89 = -702LL;
volatile uint16_t x95 = 8U;
volatile uint32_t t23 = 17243049U;
int8_t x97 = INT8_MIN;
int8_t x99 = INT8_MIN;
int16_t x101 = INT16_MIN;
volatile int32_t x102 = INT32_MIN;
int16_t x104 = -1;
int32_t x106 = INT32_MIN;
uint8_t x108 = 58U;
int64_t x109 = -1LL;
int32_t x111 = -1;
static int16_t x117 = 1;
static volatile int8_t x120 = INT8_MIN;
int8_t x122 = -1;
int64_t x124 = INT64_MIN;
int16_t x136 = INT16_MIN;
uint8_t x148 = 72U;
volatile int32_t t37 = 19;
static volatile int32_t x158 = 978524;
uint64_t t39 = 1608583LLU;
volatile int16_t x172 = -56;
int64_t x175 = 1113179LL;
static int64_t t44 = -64142678379997LL;
int16_t x181 = 192;
uint64_t x185 = 100553527060840LLU;
int16_t x193 = -59;
volatile uint64_t x195 = UINT64_MAX;
int8_t x197 = 3;
static int64_t x207 = -255263LL;
int32_t t52 = 1;
volatile uint8_t x214 = 0U;
int16_t x220 = INT16_MIN;
int32_t x227 = INT32_MIN;
int64_t x243 = INT64_MIN;
static volatile int64_t x246 = INT64_MAX;
static volatile uint8_t x252 = 5U;
volatile int64_t x258 = INT64_MAX;
int16_t x264 = INT16_MIN;
int32_t t65 = 27335;
uint16_t x273 = 92U;
volatile int32_t x285 = -217568;
volatile int16_t x289 = -1;
static uint8_t x290 = 92U;
volatile uint32_t t70 = 7698112U;
static int32_t x299 = INT32_MIN;
volatile uint8_t x300 = UINT8_MAX;
static volatile uint32_t x306 = 29969092U;
int64_t t74 = 7531654893835054LL;
int8_t x323 = INT8_MIN;
int32_t x326 = INT32_MAX;
volatile uint64_t t79 = 1478524842LLU;
volatile uint16_t x335 = UINT16_MAX;
int16_t x339 = INT16_MIN;
int16_t x344 = 2275;
int64_t x345 = INT64_MIN;
volatile int8_t x353 = INT8_MAX;
int32_t x356 = INT32_MIN;
volatile uint32_t t86 = 8079U;
static int8_t x358 = 10;
uint8_t x366 = 3U;
volatile int64_t t89 = 49219686770LL;
volatile int64_t t90 = 1990557424LL;
uint32_t x374 = 3U;
uint64_t x375 = UINT64_MAX;
volatile int16_t x376 = INT16_MIN;
uint8_t x377 = UINT8_MAX;
int8_t x379 = 7;
int32_t t94 = -16842;
volatile uint64_t t95 = 4101911209655LLU;
static int64_t x395 = -1LL;
int64_t x401 = -1LL;
int8_t x402 = INT8_MIN;
static uint16_t x413 = 1535U;
static int64_t x414 = -131023LL;
int32_t x418 = INT32_MAX;
static int64_t x425 = INT64_MAX;
volatile uint16_t x427 = UINT16_MAX;
volatile int64_t t104 = 14504248962936LL;
uint32_t x439 = 0U;
int64_t t107 = 50454573LL;
static int32_t x441 = INT32_MAX;
static uint64_t x445 = 2LLU;
volatile int8_t x447 = INT8_MAX;
uint64_t t109 = 526094014LLU;
volatile int16_t x453 = -3582;
volatile uint64_t x455 = 234865897513096684LLU;
int16_t x460 = 211;
int16_t x463 = 200;
static volatile uint32_t t113 = 1U;
volatile uint8_t x486 = 49U;
int8_t x491 = -1;
int8_t x492 = -1;
volatile int16_t x497 = INT16_MIN;
volatile int8_t x500 = -1;
volatile int32_t x502 = -193210;
volatile int16_t x503 = -1;
int16_t x512 = INT16_MAX;
volatile int64_t t128 = -60330432LL;
uint8_t x538 = 9U;
volatile int32_t t132 = -6;
int16_t x541 = INT16_MIN;
volatile uint32_t x544 = 1415U;
int64_t x550 = -96LL;
int32_t x558 = -1;
uint32_t x563 = 370490U;
int8_t x570 = -1;
int8_t x581 = INT8_MIN;
volatile uint8_t x596 = 9U;
volatile int64_t x597 = -1792340939416LL;
int32_t x599 = -9308;
uint64_t x600 = UINT64_MAX;
int16_t x601 = -7930;
uint64_t x606 = 39605810LLU;
volatile int32_t x607 = 280810261;
int32_t x613 = INT32_MIN;
int64_t x615 = INT64_MIN;
uint32_t x618 = 110657U;
int8_t x620 = -16;
uint8_t x623 = UINT8_MAX;
static int64_t t154 = -933223279713155959LL;
uint8_t x630 = 3U;
volatile int64_t x637 = -1LL;
int32_t x643 = INT32_MIN;
uint32_t t160 = 1704501U;
uint64_t x653 = UINT64_MAX;
volatile int16_t x657 = 12721;
uint8_t x661 = 1U;
uint8_t x667 = 0U;
static int64_t t169 = 5LL;
static int16_t x693 = INT16_MAX;
static uint8_t x706 = 26U;
static int64_t t175 = 6711360779885482LL;
volatile int32_t x716 = INT32_MIN;
static volatile int32_t t177 = -30911;
volatile uint8_t x723 = 9U;
int16_t x728 = 2;
static int64_t t180 = 48659LL;
int32_t x737 = 430;
int64_t x738 = -1LL;
int64_t x740 = -113698LL;
int8_t x745 = -1;
static uint8_t x747 = UINT8_MAX;
int8_t x752 = INT8_MIN;
int16_t x754 = INT16_MIN;
int16_t x760 = -1;
uint32_t x761 = UINT32_MAX;
static int32_t x762 = -484807168;
uint16_t x763 = UINT16_MAX;
uint8_t x764 = 3U;
int64_t x773 = INT64_MAX;
uint16_t x779 = 5U;
volatile int8_t x780 = 24;
int64_t t192 = 963LL;
int8_t x785 = INT8_MAX;
uint8_t x790 = 56U;
volatile int32_t t196 = 16161;
volatile uint32_t t198 = 979876U;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 202425457308LL;

    t0 = (((x1&x2)&x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x6 = 1763983U;

    t1 = (((x5&x6)&x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	uint64_t x10 = UINT64_MAX;
	int64_t x11 = INT64_MIN;
	volatile uint64_t t2 = 2011LLU;

    t2 = (((x9&x10)&x11)/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	volatile int32_t x14 = 2679;
	uint8_t x15 = 54U;

    t3 = (((x13&x14)&x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x18 = UINT8_MAX;
	volatile int16_t x19 = INT16_MAX;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -814832;

    t4 = (((x17&x18)&x19)/x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int16_t x22 = -1;
	int16_t x23 = 6;
	static int16_t x24 = -1;
	volatile int32_t t5 = -14824;

    t5 = (((x21&x22)&x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x26 = INT16_MIN;
	volatile uint16_t x27 = 1198U;
	int64_t x28 = 796050LL;
	uint64_t t6 = 1660170458LLU;

    t6 = (((x25&x26)&x27)/x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t7 = -241685172054959120LL;

    t7 = (((x29&x30)&x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x35 = INT8_MAX;
	volatile uint32_t t8 = 32406U;

    t8 = (((x33&x34)&x35)/x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MAX;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MIN;
	int64_t x40 = -36265548LL;

    t9 = (((x37&x38)&x39)/x40);

    if (t9 != -59LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x42 = 1021214668LLU;
	uint64_t t10 = 14130534005180841LLU;

    t10 = (((x41&x42)&x43)/x44);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 6668393843LLU;
	volatile int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t11 = 1992LLU;

    t11 = (((x45&x46)&x47)/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = -1;
	static uint16_t x50 = UINT16_MAX;
	static uint64_t x51 = 54636176109940LLU;
	static uint16_t x52 = 6U;

    t12 = (((x49&x50)&x51)/x52);

    if (t12 != 4840LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -914836LL;
	volatile int8_t x54 = 1;
	static int8_t x55 = INT8_MIN;
	volatile int64_t t13 = 272934939833209LL;

    t13 = (((x53&x54)&x55)/x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MAX;
	int8_t x59 = -1;
	uint64_t x60 = 233381584175LLU;
	uint64_t t14 = 447519934809LLU;

    t14 = (((x57&x58)&x59)/x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int8_t x62 = -2;
	static uint64_t x63 = UINT64_MAX;
	static uint32_t x64 = 846U;
	uint64_t t15 = 48334813969LLU;

    t15 = (((x61&x62)&x63)/x64);

    if (t15 != 38LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	uint64_t x66 = 16232LLU;
	volatile int32_t x68 = 1983;

    t16 = (((x65&x66)&x67)/x68);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1440371837LL;
	volatile int8_t x70 = INT8_MIN;
	int64_t t17 = 534580692512LL;

    t17 = (((x69&x70)&x71)/x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -296431083;
	int32_t x76 = -13;
	volatile int32_t t18 = -3152;

    t18 = (((x73&x74)&x75)/x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = 172;
	uint8_t x78 = 9U;
	int64_t x79 = INT64_MIN;
	static int64_t t19 = -2156210850848974119LL;

    t19 = (((x77&x78)&x79)/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 39;
	int8_t x83 = INT8_MAX;
	uint8_t x84 = UINT8_MAX;
	static volatile uint32_t t20 = 6790109U;

    t20 = (((x81&x82)&x83)/x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x86 = 19U;
	volatile int8_t x87 = -1;
	uint64_t x88 = 255359794392LLU;

    t21 = (((x85&x86)&x87)/x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = -141;
	int16_t x91 = INT16_MAX;
	int32_t x92 = INT32_MIN;
	int64_t t22 = -1LL;

    t22 = (((x89&x90)&x91)/x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	uint32_t x94 = UINT32_MAX;
	uint32_t x96 = UINT32_MAX;

    t23 = (((x93&x94)&x95)/x96);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 1923391639159546650LL;

    t24 = (((x97&x98)&x99)/x100);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x103 = 5U;
	static volatile int32_t t25 = -3484;

    t25 = (((x101&x102)&x103)/x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int16_t x107 = INT16_MAX;
	static uint64_t t26 = 179132721LLU;

    t26 = (((x105&x106)&x107)/x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1LL;
	int64_t x112 = -15403667523LL;
	int64_t t27 = -882804822942868417LL;

    t27 = (((x109&x110)&x111)/x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 108;
	int8_t x114 = -1;
	uint16_t x115 = 1008U;
	uint32_t x116 = 354U;
	uint32_t t28 = 6050499U;

    t28 = (((x113&x114)&x115)/x116);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x118 = 2132603U;
	uint16_t x119 = UINT16_MAX;
	volatile uint32_t t29 = 1163930383U;

    t29 = (((x117&x118)&x119)/x120);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	uint8_t x123 = 23U;
	static volatile int64_t t30 = 18909148811887LL;

    t30 = (((x121&x122)&x123)/x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 15874U;
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	int32_t x128 = -72886;
	uint32_t t31 = 1U;

    t31 = (((x125&x126)&x127)/x128);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 17U;
	uint64_t x130 = 43380204131208782LLU;
	int64_t x131 = INT64_MIN;
	int8_t x132 = -4;
	uint64_t t32 = 1157LLU;

    t32 = (((x129&x130)&x131)/x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 7U;
	static int32_t x134 = INT32_MIN;
	static uint32_t x135 = UINT32_MAX;
	volatile uint32_t t33 = 3591U;

    t33 = (((x133&x134)&x135)/x136);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	volatile int64_t x138 = -1LL;
	static int16_t x139 = INT16_MAX;
	int32_t x140 = INT32_MAX;
	volatile int64_t t34 = 6861046653394755LL;

    t34 = (((x137&x138)&x139)/x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = 88U;
	volatile int64_t t35 = 638039351403LL;

    t35 = (((x141&x142)&x143)/x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int8_t x146 = -1;
	uint8_t x147 = 8U;
	static volatile int32_t t36 = 22;

    t36 = (((x145&x146)&x147)/x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int8_t x150 = -11;
	int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MIN;

    t37 = (((x149&x150)&x151)/x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = 3217623LL;
	int8_t x154 = INT8_MIN;
	int64_t x155 = 767911852LL;
	int32_t x156 = INT32_MIN;
	volatile int64_t t38 = 52941744731617602LL;

    t38 = (((x153&x154)&x155)/x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static uint64_t x159 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;

    t39 = (((x157&x158)&x159)/x160);

    if (t39 != 3836LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int64_t x162 = -258078103098921LL;
	int64_t x163 = INT64_MIN;
	uint8_t x164 = 4U;
	volatile int64_t t40 = 542753483524LL;

    t40 = (((x161&x162)&x163)/x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = INT64_MAX;
	int8_t x167 = -3;
	static int8_t x168 = -1;
	volatile int64_t t41 = -1118179782296450917LL;

    t41 = (((x165&x166)&x167)/x168);

    if (t41 != -253LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 2U;
	int16_t x170 = -7;
	int64_t x171 = INT64_MIN;
	int64_t t42 = -3954LL;

    t42 = (((x169&x170)&x171)/x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	int16_t x176 = -2;
	uint64_t t43 = 249487537LLU;

    t43 = (((x173&x174)&x175)/x176);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	static uint16_t x178 = UINT16_MAX;
	int32_t x179 = 121207;
	int32_t x180 = -1975649;

    t44 = (((x177&x178)&x179)/x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x182 = INT16_MIN;
	uint16_t x183 = 0U;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = -539545;

    t45 = (((x181&x182)&x183)/x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = -1;
	uint8_t x187 = UINT8_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t46 = 98259468846LLU;

    t46 = (((x185&x186)&x187)/x188);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x189 = 5U;
	static uint8_t x190 = 0U;
	int64_t x191 = 287464LL;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = -61584447LL;

    t47 = (((x189&x190)&x191)/x192);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x194 = INT32_MIN;
	int16_t x196 = -405;
	static uint64_t t48 = 19964093LLU;

    t48 = (((x193&x194)&x195)/x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x198 = 1493165489LLU;
	uint16_t x199 = 30U;
	int8_t x200 = INT8_MIN;
	uint64_t t49 = 2903796617LLU;

    t49 = (((x197&x198)&x199)/x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MAX;
	static volatile int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MIN;
	volatile int8_t x204 = INT8_MIN;
	int32_t t50 = 958154;

    t50 = (((x201&x202)&x203)/x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 57;
	volatile uint8_t x206 = 1U;
	volatile int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 12LL;

    t51 = (((x205&x206)&x207)/x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x209 = INT32_MIN;
	int8_t x210 = -1;
	static int32_t x211 = -1;
	uint16_t x212 = 10U;

    t52 = (((x209&x210)&x211)/x212);

    if (t52 != -214748364) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	int16_t x215 = -4452;
	int8_t x216 = INT8_MIN;
	int32_t t53 = -980533;

    t53 = (((x213&x214)&x215)/x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = -326;
	static uint16_t x218 = 3123U;
	volatile uint8_t x219 = 13U;
	int32_t t54 = 21;

    t54 = (((x217&x218)&x219)/x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = 0;
	int64_t x226 = -1LL;
	uint8_t x228 = 20U;
	volatile int64_t t55 = -1LL;

    t55 = (((x225&x226)&x227)/x228);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x229 = -1;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	static uint64_t x232 = 1351894LLU;
	static uint64_t t56 = 561687506423765187LLU;

    t56 = (((x229&x230)&x231)/x232);

    if (t56 != 13645111282069LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MIN;
	int8_t x235 = -2;
	static int8_t x236 = -49;
	static int32_t t57 = 1922359;

    t57 = (((x233&x234)&x235)/x236);

    if (t57 != -1334) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = 6;
	static volatile uint32_t x242 = 2616928U;
	volatile uint16_t x244 = 348U;
	volatile int64_t t58 = -1707418041LL;

    t58 = (((x241&x242)&x243)/x244);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x245 = 2041991172LLU;
	static uint8_t x247 = 4U;
	uint64_t x248 = 161063LLU;
	volatile uint64_t t59 = 168204LLU;

    t59 = (((x245&x246)&x247)/x248);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x249 = 6977102LLU;
	int32_t x250 = INT32_MAX;
	uint16_t x251 = 1U;
	static volatile uint64_t t60 = 2360423769671133LLU;

    t60 = (((x249&x250)&x251)/x252);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = 15;
	static uint32_t x254 = UINT32_MAX;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int64_t t61 = 42291LL;

    t61 = (((x253&x254)&x255)/x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MAX;
	volatile uint32_t x259 = 207690U;
	int16_t x260 = INT16_MAX;
	static volatile int64_t t62 = 21674947529LL;

    t62 = (((x257&x258)&x259)/x260);

    if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = -1;
	static uint16_t x262 = UINT16_MAX;
	int16_t x263 = INT16_MIN;
	int32_t t63 = 1091291;

    t63 = (((x261&x262)&x263)/x264);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x265 = -202194933181LL;
	int16_t x266 = 24;
	static int8_t x267 = INT8_MIN;
	static uint8_t x268 = 31U;
	static int64_t t64 = 69382440LL;

    t64 = (((x265&x266)&x267)/x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x269 = -1;
	volatile int32_t x270 = -7102;
	uint16_t x271 = UINT16_MAX;
	int8_t x272 = INT8_MAX;

    t65 = (((x269&x270)&x271)/x272);

    if (t65 != 460) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x274 = 2U;
	uint64_t x275 = 1841LLU;
	int64_t x276 = INT64_MAX;
	volatile uint64_t t66 = 47753997LLU;

    t66 = (((x273&x274)&x275)/x276);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x277 = -1;
	volatile int16_t x278 = 4;
	static int16_t x279 = -1;
	uint64_t x280 = 312580899660384012LLU;
	static uint64_t t67 = 3881LLU;

    t67 = (((x277&x278)&x279)/x280);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x281 = INT32_MAX;
	static int32_t x282 = INT32_MAX;
	uint32_t x283 = 30281642U;
	int16_t x284 = -15;
	volatile uint32_t t68 = 6990U;

    t68 = (((x281&x282)&x283)/x284);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x286 = 212U;
	int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MAX;
	volatile int64_t t69 = 8060888618320643LL;

    t69 = (((x285&x286)&x287)/x288);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x291 = -11;
	uint32_t x292 = 1U;

    t70 = (((x289&x290)&x291)/x292);

    if (t70 != 84U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 24132U;
	int16_t x294 = -1;
	uint32_t x295 = 55040U;
	int16_t x296 = 113;
	uint32_t t71 = 116U;

    t71 = (((x293&x294)&x295)/x296);

    if (t71 != 194U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MIN;
	static int8_t x298 = INT8_MIN;
	volatile int32_t t72 = -1;

    t72 = (((x297&x298)&x299)/x300);

    if (t72 != -8421504) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = -1;
	uint64_t x303 = 497742304927363LLU;
	int64_t x304 = INT64_MIN;
	static volatile uint64_t t73 = 40166LLU;

    t73 = (((x301&x302)&x303)/x304);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x305 = INT64_MAX;
	int64_t x307 = -10LL;
	int8_t x308 = INT8_MAX;

    t74 = (((x305&x306)&x307)/x308);

    if (t74 != 235977LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	volatile uint64_t x311 = 92065LLU;
	static int16_t x312 = -1;
	static uint64_t t75 = 3805228475191LLU;

    t75 = (((x309&x310)&x311)/x312);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = UINT8_MAX;
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MIN;
	volatile uint16_t x316 = 31U;
	int64_t t76 = -238436277259844LL;

    t76 = (((x313&x314)&x315)/x316);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x318 = -1;
	uint32_t x319 = 718581U;
	int8_t x320 = INT8_MIN;
	volatile uint32_t t77 = 44U;

    t77 = (((x317&x318)&x319)/x320);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x321 = INT8_MIN;
	uint8_t x322 = UINT8_MAX;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t78 = -795849;

    t78 = (((x321&x322)&x323)/x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = 2;
	uint64_t x327 = UINT64_MAX;
	volatile uint8_t x328 = UINT8_MAX;

    t79 = (((x325&x326)&x327)/x328);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x329 = 6715123U;
	int32_t x330 = INT32_MAX;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = -1;
	static uint32_t t80 = 3377U;

    t80 = (((x329&x330)&x331)/x332);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = 1;
	volatile int8_t x334 = INT8_MIN;
	int64_t x336 = -20545375LL;
	static int64_t t81 = 122564470865165911LL;

    t81 = (((x333&x334)&x335)/x336);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = 1U;
	int32_t x338 = 92407363;
	uint64_t x340 = 29263770407924LLU;
	uint64_t t82 = 412858793921753LLU;

    t82 = (((x337&x338)&x339)/x340);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = 3;
	int32_t x343 = INT32_MAX;
	volatile int32_t t83 = 14684327;

    t83 = (((x341&x342)&x343)/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x346 = INT8_MIN;
	int16_t x347 = 37;
	static uint64_t x348 = 246LLU;
	uint64_t t84 = 923412762408LLU;

    t84 = (((x345&x346)&x347)/x348);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = INT16_MIN;
	uint16_t x350 = 0U;
	int8_t x351 = -1;
	int32_t x352 = 7836534;
	static volatile int32_t t85 = -1;

    t85 = (((x349&x350)&x351)/x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x354 = 113U;
	uint32_t x355 = 4590U;

    t86 = (((x353&x354)&x355)/x356);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile int64_t x360 = INT64_MAX;
	volatile int64_t t87 = -1920466242079954LL;

    t87 = (((x357&x358)&x359)/x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	int16_t x362 = -1;
	uint32_t x363 = 0U;
	static int16_t x364 = INT16_MIN;
	volatile uint64_t t88 = 10774327203LLU;

    t88 = (((x361&x362)&x363)/x364);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	int64_t x367 = INT64_MAX;
	int32_t x368 = -1;

    t89 = (((x365&x366)&x367)/x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = -8;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	int32_t x372 = INT32_MIN;

    t90 = (((x369&x370)&x371)/x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x373 = INT16_MIN;
	uint64_t t91 = 5588LLU;

    t91 = (((x373&x374)&x375)/x376);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x378 = 350U;
	uint32_t x380 = UINT32_MAX;
	uint32_t t92 = 3U;

    t92 = (((x377&x378)&x379)/x380);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x381 = 2U;
	static int64_t x382 = 1202303LL;
	static int64_t x383 = INT64_MAX;
	int8_t x384 = -1;
	static int64_t t93 = 125LL;

    t93 = (((x381&x382)&x383)/x384);

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = INT16_MAX;
	uint16_t x386 = 1832U;
	volatile int16_t x387 = -1;
	static volatile int16_t x388 = INT16_MIN;

    t94 = (((x385&x386)&x387)/x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = INT64_MIN;
	uint64_t x390 = 253586LLU;
	int32_t x391 = 355;
	int16_t x392 = -1;

    t95 = (((x389&x390)&x391)/x392);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x393 = INT32_MAX;
	uint32_t x394 = 1083U;
	int8_t x396 = 14;
	volatile int64_t t96 = 2LL;

    t96 = (((x393&x394)&x395)/x396);

    if (t96 != 77LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x397 = INT64_MIN;
	static int8_t x398 = -1;
	static int32_t x399 = -1;
	uint32_t x400 = 52309U;
	volatile int64_t t97 = -11LL;

    t97 = (((x397&x398)&x399)/x400);

    if (t97 != -176324763173732LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x403 = 42110802U;
	int64_t x404 = -8585314045079LL;
	volatile int64_t t98 = -4784LL;

    t98 = (((x401&x402)&x403)/x404);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = 46471U;
	static volatile int8_t x406 = -1;
	int16_t x407 = INT16_MAX;
	static int8_t x408 = -1;
	uint32_t t99 = 11543959U;

    t99 = (((x405&x406)&x407)/x408);

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x409 = 49592205;
	int64_t x410 = INT64_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	int32_t x412 = INT32_MAX;
	static int64_t t100 = 7LL;

    t100 = (((x409&x410)&x411)/x412);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x415 = 0;
	volatile int32_t x416 = INT32_MIN;
	volatile int64_t t101 = 113LL;

    t101 = (((x413&x414)&x415)/x416);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = -1LL;
	uint16_t x419 = 123U;
	volatile uint32_t x420 = 2U;
	volatile int64_t t102 = 7109738381230LL;

    t102 = (((x417&x418)&x419)/x420);

    if (t102 != 61LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = 60LL;
	int32_t x422 = INT32_MIN;
	volatile int32_t x423 = 236522282;
	int32_t x424 = -1;
	int64_t t103 = -886403398LL;

    t103 = (((x421&x422)&x423)/x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x426 = UINT8_MAX;
	int16_t x428 = -10;

    t104 = (((x425&x426)&x427)/x428);

    if (t104 != -25LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = -1LL;
	static int32_t x430 = INT32_MAX;
	int64_t x431 = -1LL;
	int8_t x432 = -31;
	int64_t t105 = 970480385159438LL;

    t105 = (((x429&x430)&x431)/x432);

    if (t105 != -69273666LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x433 = INT64_MIN;
	int64_t x434 = INT64_MIN;
	int16_t x435 = -1;
	int32_t x436 = INT32_MIN;
	static volatile int64_t t106 = 0LL;

    t106 = (((x433&x434)&x435)/x436);

    if (t106 != 4294967296LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x437 = 0;
	volatile int32_t x438 = INT32_MIN;
	volatile int64_t x440 = INT64_MIN;

    t107 = (((x437&x438)&x439)/x440);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x442 = -32556336;
	volatile int8_t x443 = -1;
	static int64_t x444 = -22920901615LL;
	static int64_t t108 = -755124050110527LL;

    t108 = (((x441&x442)&x443)/x444);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x446 = -1;
	volatile int64_t x448 = INT64_MIN;

    t109 = (((x445&x446)&x447)/x448);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = INT8_MAX;
	static int8_t x450 = 40;
	uint16_t x451 = UINT16_MAX;
	int16_t x452 = 9448;
	int32_t t110 = -1839;

    t110 = (((x449&x450)&x451)/x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x454 = 2455LLU;
	uint8_t x456 = 1U;
	volatile uint64_t t111 = 3513818014LLU;

    t111 = (((x453&x454)&x455)/x456);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = INT32_MIN;
	uint8_t x458 = 62U;
	uint32_t x459 = UINT32_MAX;
	volatile uint32_t t112 = 53142U;

    t112 = (((x457&x458)&x459)/x460);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 111339363U;
	int32_t x462 = INT32_MIN;
	static uint32_t x464 = UINT32_MAX;

    t113 = (((x461&x462)&x463)/x464);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = 9LL;
	int16_t x466 = INT16_MAX;
	uint8_t x467 = 0U;
	int32_t x468 = INT32_MIN;
	int64_t t114 = -8221556874818229LL;

    t114 = (((x465&x466)&x467)/x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	int64_t x471 = INT64_MIN;
	int16_t x472 = INT16_MIN;
	volatile int64_t t115 = 604LL;

    t115 = (((x469&x470)&x471)/x472);

    if (t115 != 281474976710656LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = -1;
	uint16_t x474 = UINT16_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	int8_t x476 = -1;
	volatile uint64_t t116 = 11115279327873405LLU;

    t116 = (((x473&x474)&x475)/x476);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x477 = UINT64_MAX;
	static volatile uint16_t x478 = UINT16_MAX;
	int32_t x479 = INT32_MAX;
	uint16_t x480 = 241U;
	static uint64_t t117 = 64939666352664LLU;

    t117 = (((x477&x478)&x479)/x480);

    if (t117 != 271LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x481 = -1;
	int32_t x482 = -12751047;
	uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = INT16_MAX;
	static volatile int32_t t118 = -56;

    t118 = (((x481&x482)&x483)/x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x485 = -1LL;
	int32_t x487 = INT32_MIN;
	static int32_t x488 = INT32_MAX;
	static int64_t t119 = -7969401LL;

    t119 = (((x485&x486)&x487)/x488);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x489 = 1784249LL;
	static volatile uint32_t x490 = 201529198U;
	int64_t t120 = -462LL;

    t120 = (((x489&x490)&x491)/x492);

    if (t120 != -201000LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x493 = 21729534227LL;
	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MIN;
	int32_t x496 = 475139;
	static int64_t t121 = 4579829383068960557LL;

    t121 = (((x493&x494)&x495)/x496);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x498 = 210;
	volatile int64_t x499 = INT64_MIN;
	int64_t t122 = -399018244866LL;

    t122 = (((x497&x498)&x499)/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x501 = -12;
	int32_t x504 = INT32_MAX;
	volatile int32_t t123 = -13;

    t123 = (((x501&x502)&x503)/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x505 = 27195U;
	volatile int16_t x506 = -1;
	volatile uint64_t x507 = 1018LLU;
	int8_t x508 = 1;
	volatile uint64_t t124 = 1328703267281683601LLU;

    t124 = (((x505&x506)&x507)/x508);

    if (t124 != 570LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x509 = INT16_MAX;
	static uint64_t x510 = 1347255LLU;
	int64_t x511 = INT64_MIN;
	uint64_t t125 = 376092816926250538LLU;

    t125 = (((x509&x510)&x511)/x512);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x513 = 24418U;
	static int16_t x514 = INT16_MIN;
	int16_t x515 = 1525;
	static int32_t x516 = -1;
	int32_t t126 = 10;

    t126 = (((x513&x514)&x515)/x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x517 = INT8_MIN;
	int64_t x518 = INT64_MIN;
	int8_t x519 = -1;
	int16_t x520 = INT16_MIN;
	volatile int64_t t127 = 1783274837794LL;

    t127 = (((x517&x518)&x519)/x520);

    if (t127 != 281474976710656LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x521 = 1728434U;
	int32_t x522 = -236;
	volatile int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MAX;

    t128 = (((x521&x522)&x523)/x524);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x525 = UINT16_MAX;
	int16_t x526 = INT16_MAX;
	volatile int64_t x527 = INT64_MIN;
	volatile int8_t x528 = -1;
	volatile int64_t t129 = 34115201462176615LL;

    t129 = (((x525&x526)&x527)/x528);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x529 = 1573962786664LLU;
	static uint16_t x530 = 4123U;
	static volatile uint32_t x531 = 61U;
	static uint32_t x532 = 7231499U;
	volatile uint64_t t130 = 716LLU;

    t130 = (((x529&x530)&x531)/x532);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x533 = UINT32_MAX;
	int64_t x534 = 1LL;
	uint32_t x535 = 0U;
	int8_t x536 = INT8_MIN;
	static int64_t t131 = -278LL;

    t131 = (((x533&x534)&x535)/x536);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x537 = INT32_MIN;
	volatile int32_t x539 = INT32_MIN;
	static volatile int32_t x540 = -12;

    t132 = (((x537&x538)&x539)/x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x542 = 426144U;
	int16_t x543 = 17;
	volatile uint32_t t133 = 15956828U;

    t133 = (((x541&x542)&x543)/x544);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x545 = -1;
	int64_t x546 = 227082570250LL;
	static uint32_t x547 = UINT32_MAX;
	uint32_t x548 = 1890793U;
	int64_t t134 = 372535927907814LL;

    t134 = (((x545&x546)&x547)/x548);

    if (t134 != 1980LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x549 = INT32_MIN;
	int8_t x551 = INT8_MIN;
	uint64_t x552 = 262383467132LLU;
	volatile uint64_t t135 = 15560318LLU;

    t135 = (((x549&x550)&x551)/x552);

    if (t135 != 70304521LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x553 = UINT64_MAX;
	static int16_t x554 = -51;
	volatile uint16_t x555 = UINT16_MAX;
	static int64_t x556 = -596LL;
	volatile uint64_t t136 = 572295136951770965LLU;

    t136 = (((x553&x554)&x555)/x556);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x557 = INT16_MIN;
	static int8_t x559 = INT8_MIN;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t137 = 1;

    t137 = (((x557&x558)&x559)/x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x561 = INT32_MIN;
	int32_t x562 = INT32_MIN;
	volatile int8_t x564 = -5;
	volatile uint32_t t138 = 365828631U;

    t138 = (((x561&x562)&x563)/x564);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = INT64_MAX;
	uint64_t x566 = 125373653325030LLU;
	uint32_t x567 = 15723340U;
	int8_t x568 = -1;
	uint64_t t139 = 885594LLU;

    t139 = (((x565&x566)&x567)/x568);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x569 = INT16_MIN;
	static volatile int16_t x571 = -1;
	static int64_t x572 = 408501542485391LL;
	static volatile int64_t t140 = 2LL;

    t140 = (((x569&x570)&x571)/x572);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x573 = 43;
	static int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 53600589LLU;
	static volatile uint64_t t141 = 59183096719698LLU;

    t141 = (((x573&x574)&x575)/x576);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = 26863748;
	volatile int16_t x578 = INT16_MIN;
	static int16_t x579 = -1;
	uint8_t x580 = 52U;
	volatile int32_t t142 = -296;

    t142 = (((x577&x578)&x579)/x580);

    if (t142 != 516096) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x582 = INT16_MIN;
	static int64_t x583 = -1786LL;
	static uint64_t x584 = UINT64_MAX;
	static volatile uint64_t t143 = 2614557677LLU;

    t143 = (((x581&x582)&x583)/x584);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = 103718280LL;
	static volatile uint8_t x587 = 40U;
	int8_t x588 = INT8_MAX;
	volatile int64_t t144 = -88988349LL;

    t144 = (((x585&x586)&x587)/x588);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MIN;
	uint64_t x592 = 58169763168LLU;
	uint64_t t145 = 68356576LLU;

    t145 = (((x589&x590)&x591)/x592);

    if (t145 != 158559559LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x593 = INT8_MIN;
	static int16_t x594 = 2981;
	int16_t x595 = -1;
	static int32_t t146 = -89745;

    t146 = (((x593&x594)&x595)/x596);

    if (t146 != 327) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x598 = UINT64_MAX;
	volatile uint64_t t147 = 704187097727LLU;

    t147 = (((x597&x598)&x599)/x600);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x602 = INT32_MIN;
	static int64_t x603 = 929808229LL;
	static uint32_t x604 = 195U;
	int64_t t148 = 924793050653LL;

    t148 = (((x601&x602)&x603)/x604);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x605 = 188146LL;
	uint32_t x608 = 12U;
	uint64_t t149 = 42134243096843LLU;

    t149 = (((x605&x606)&x607)/x608);

    if (t149 != 1750LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x609 = 48879U;
	static uint16_t x610 = UINT16_MAX;
	uint16_t x611 = 19998U;
	volatile int32_t x612 = INT32_MAX;
	uint32_t t150 = 1U;

    t150 = (((x609&x610)&x611)/x612);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x614 = INT64_MIN;
	int32_t x616 = INT32_MIN;
	volatile int64_t t151 = 199368497167733519LL;

    t151 = (((x613&x614)&x615)/x616);

    if (t151 != 4294967296LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x617 = 133123U;
	int8_t x619 = INT8_MAX;
	uint32_t t152 = 147U;

    t152 = (((x617&x618)&x619)/x620);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x621 = UINT64_MAX;
	int16_t x622 = INT16_MAX;
	int16_t x624 = INT16_MIN;
	uint64_t t153 = 0LLU;

    t153 = (((x621&x622)&x623)/x624);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x625 = 789U;
	int16_t x626 = -1;
	int16_t x627 = INT16_MAX;
	int64_t x628 = INT64_MIN;

    t154 = (((x625&x626)&x627)/x628);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x629 = INT16_MAX;
	volatile uint16_t x631 = 3U;
	volatile int32_t x632 = INT32_MIN;
	static int32_t t155 = 8383;

    t155 = (((x629&x630)&x631)/x632);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x633 = -1;
	int8_t x634 = 7;
	static int64_t x635 = -1LL;
	int64_t x636 = INT64_MIN;
	volatile int64_t t156 = -3569517204228396LL;

    t156 = (((x633&x634)&x635)/x636);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x638 = 525117548LL;
	int16_t x639 = INT16_MIN;
	int16_t x640 = 342;
	int64_t t157 = -428LL;

    t157 = (((x637&x638)&x639)/x640);

    if (t157 != 1535401LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x641 = INT64_MAX;
	int16_t x642 = -17;
	int8_t x644 = -4;
	volatile int64_t t158 = -683574466618LL;

    t158 = (((x641&x642)&x643)/x644);

    if (t158 != -2305843008676823040LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x645 = INT32_MIN;
	volatile int32_t x646 = -1;
	int32_t x647 = 397;
	static uint64_t x648 = 269125581725708LLU;
	static uint64_t t159 = 1731653555397548830LLU;

    t159 = (((x645&x646)&x647)/x648);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x649 = -51;
	static volatile int32_t x650 = INT32_MAX;
	static uint16_t x651 = UINT16_MAX;
	uint32_t x652 = UINT32_MAX;

    t160 = (((x649&x650)&x651)/x652);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x654 = -1;
	static int64_t x655 = INT64_MIN;
	volatile int16_t x656 = INT16_MIN;
	volatile uint64_t t161 = 19818247644547049LLU;

    t161 = (((x653&x654)&x655)/x656);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x658 = INT16_MIN;
	volatile uint64_t x659 = 70540382742650102LLU;
	static uint8_t x660 = 17U;
	volatile uint64_t t162 = 1747037010LLU;

    t162 = (((x657&x658)&x659)/x660);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x662 = 4;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MIN;
	volatile int32_t t163 = -674510;

    t163 = (((x661&x662)&x663)/x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = 85389LL;
	static int8_t x666 = INT8_MIN;
	uint8_t x668 = UINT8_MAX;
	volatile int64_t t164 = -12160042284063LL;

    t164 = (((x665&x666)&x667)/x668);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x669 = 7028LLU;
	volatile uint32_t x670 = 68845U;
	uint32_t x671 = 5286U;
	int64_t x672 = INT64_MIN;
	uint64_t t165 = 489LLU;

    t165 = (((x669&x670)&x671)/x672);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x673 = INT32_MIN;
	uint16_t x674 = 17U;
	int8_t x675 = 4;
	uint32_t x676 = 33217U;
	uint32_t t166 = 31011U;

    t166 = (((x673&x674)&x675)/x676);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x677 = 7949U;
	int32_t x678 = 1;
	int8_t x679 = INT8_MAX;
	int64_t x680 = -64424758LL;
	volatile int64_t t167 = 1668002360276782634LL;

    t167 = (((x677&x678)&x679)/x680);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x681 = -1;
	uint16_t x682 = 1U;
	int64_t x683 = -1LL;
	volatile int32_t x684 = -1;
	volatile int64_t t168 = 2607290LL;

    t168 = (((x681&x682)&x683)/x684);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MAX;
	int64_t x687 = 380LL;
	volatile int16_t x688 = INT16_MIN;

    t169 = (((x685&x686)&x687)/x688);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = -1LL;
	int64_t x690 = 36767172LL;
	int16_t x691 = INT16_MAX;
	static int64_t x692 = INT64_MAX;
	static int64_t t170 = -8584897942LL;

    t170 = (((x689&x690)&x691)/x692);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x694 = -1;
	static int16_t x695 = INT16_MIN;
	int32_t x696 = INT32_MIN;
	static volatile int32_t t171 = 0;

    t171 = (((x693&x694)&x695)/x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x697 = 2U;
	int64_t x698 = 50357860971271LL;
	static int32_t x699 = -10621;
	uint32_t x700 = UINT32_MAX;
	volatile int64_t t172 = -309959LL;

    t172 = (((x697&x698)&x699)/x700);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x701 = -1;
	int64_t x702 = -1LL;
	int16_t x703 = -21;
	volatile int64_t x704 = INT64_MAX;
	int64_t t173 = -97LL;

    t173 = (((x701&x702)&x703)/x704);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x705 = 547U;
	static int32_t x707 = 1271;
	static uint8_t x708 = UINT8_MAX;
	uint32_t t174 = 146U;

    t174 = (((x705&x706)&x707)/x708);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x709 = -5143LL;
	static int16_t x710 = INT16_MAX;
	static uint8_t x711 = 1U;
	static uint8_t x712 = 14U;

    t175 = (((x709&x710)&x711)/x712);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x713 = -1LL;
	static uint8_t x714 = 35U;
	int64_t x715 = 75576434LL;
	int64_t t176 = 16LL;

    t176 = (((x713&x714)&x715)/x716);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x717 = INT32_MIN;
	static uint8_t x718 = 0U;
	uint8_t x719 = 61U;
	uint8_t x720 = 11U;

    t177 = (((x717&x718)&x719)/x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x721 = 143548677732237903LLU;
	static int64_t x722 = INT64_MAX;
	int16_t x724 = -1;
	volatile uint64_t t178 = 4188115041LLU;

    t178 = (((x721&x722)&x723)/x724);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MAX;
	int32_t x726 = INT32_MIN;
	static int16_t x727 = -31;
	int64_t t179 = 1960813611643LL;

    t179 = (((x725&x726)&x727)/x728);

    if (t179 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x729 = 9U;
	static int64_t x730 = -983244298713LL;
	volatile int8_t x731 = 1;
	static int16_t x732 = -1;

    t180 = (((x729&x730)&x731)/x732);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x733 = INT8_MAX;
	uint32_t x734 = 0U;
	int64_t x735 = INT64_MIN;
	int32_t x736 = -1;
	static int64_t t181 = 21998749LL;

    t181 = (((x733&x734)&x735)/x736);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x739 = INT64_MAX;
	volatile int64_t t182 = -2LL;

    t182 = (((x737&x738)&x739)/x740);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x741 = -1985;
	int32_t x742 = 209585041;
	static uint32_t x743 = 1U;
	static int16_t x744 = INT16_MIN;
	static uint32_t t183 = 574730U;

    t183 = (((x741&x742)&x743)/x744);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x746 = 362208U;
	uint16_t x748 = 25U;
	uint32_t t184 = 17266416U;

    t184 = (((x745&x746)&x747)/x748);

    if (t184 != 8U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x749 = 1U;
	uint64_t x750 = UINT64_MAX;
	static uint16_t x751 = 6160U;
	volatile uint64_t t185 = 158LLU;

    t185 = (((x749&x750)&x751)/x752);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x753 = -22316791441360LL;
	volatile int8_t x755 = -1;
	int64_t x756 = INT64_MIN;
	static int64_t t186 = -2102000142869937740LL;

    t186 = (((x753&x754)&x755)/x756);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x757 = 0LLU;
	int64_t x758 = INT64_MAX;
	static int16_t x759 = INT16_MAX;
	static uint64_t t187 = 252LLU;

    t187 = (((x757&x758)&x759)/x760);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t t188 = 254241180U;

    t188 = (((x761&x762)&x763)/x764);

    if (t188 != 9386U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = INT32_MIN;
	uint8_t x766 = 1U;
	int16_t x767 = -1;
	static int8_t x768 = INT8_MIN;
	int32_t t189 = -11587503;

    t189 = (((x765&x766)&x767)/x768);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x769 = -1LL;
	int8_t x770 = INT8_MIN;
	int16_t x771 = 94;
	static int32_t x772 = INT32_MAX;
	int64_t t190 = -102799243LL;

    t190 = (((x769&x770)&x771)/x772);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x774 = UINT8_MAX;
	int16_t x775 = INT16_MIN;
	volatile int16_t x776 = INT16_MIN;
	int64_t t191 = -1801LL;

    t191 = (((x773&x774)&x775)/x776);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x777 = 4051U;
	int64_t x778 = INT64_MIN;

    t192 = (((x777&x778)&x779)/x780);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x781 = INT16_MIN;
	static volatile int64_t x782 = INT64_MAX;
	int64_t x783 = 48LL;
	int64_t x784 = 17998471LL;
	volatile int64_t t193 = 6029LL;

    t193 = (((x781&x782)&x783)/x784);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	static volatile uint8_t x788 = UINT8_MAX;
	static volatile int32_t t194 = -31981;

    t194 = (((x785&x786)&x787)/x788);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x789 = 12926370U;
	int16_t x791 = INT16_MIN;
	static volatile int64_t x792 = INT64_MIN;
	volatile int64_t t195 = 91843799LL;

    t195 = (((x789&x790)&x791)/x792);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x793 = -102;
	static int16_t x794 = INT16_MAX;
	uint8_t x795 = 1U;
	int16_t x796 = 2;

    t196 = (((x793&x794)&x795)/x796);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x797 = 60828670LLU;
	int32_t x798 = INT32_MIN;
	static int32_t x799 = INT32_MAX;
	int16_t x800 = -1;
	static uint64_t t197 = 7978311832897017LLU;

    t197 = (((x797&x798)&x799)/x800);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x801 = 448282636U;
	int8_t x802 = INT8_MAX;
	uint16_t x803 = 15U;
	uint16_t x804 = 3283U;

    t198 = (((x801&x802)&x803)/x804);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x805 = -1;
	int16_t x806 = -1;
	static int8_t x807 = -1;
	int16_t x808 = INT16_MAX;
	int32_t t199 = -75669004;

    t199 = (((x805&x806)&x807)/x808);

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

