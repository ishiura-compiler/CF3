
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

static int16_t x2 = -1;
int32_t x7 = -1;
uint64_t x12 = 69643726689107282LLU;
static int32_t x13 = INT32_MAX;
uint64_t x20 = 34526064235202LLU;
int64_t x25 = -1LL;
int16_t x26 = INT16_MAX;
volatile int32_t t7 = 156889;
uint64_t x36 = UINT64_MAX;
int16_t x42 = 14457;
static int32_t t10 = -1151;
int16_t x46 = INT16_MIN;
int64_t x48 = INT64_MAX;
uint8_t x59 = UINT8_MAX;
int32_t x60 = -8076528;
int32_t t14 = -721223279;
volatile int64_t x63 = INT64_MIN;
static uint32_t x66 = UINT32_MAX;
uint8_t x68 = 5U;
int64_t x73 = -3729852LL;
volatile uint8_t x76 = UINT8_MAX;
uint8_t x80 = 29U;
int32_t t19 = 463331;
int16_t x83 = INT16_MIN;
int32_t x89 = INT32_MAX;
int64_t x97 = -1054943045LL;
volatile int32_t x102 = INT32_MIN;
volatile uint64_t x104 = 849LLU;
int32_t x109 = INT32_MIN;
static int32_t t31 = 0;
uint16_t x131 = 15194U;
int32_t t32 = 40958;
int64_t x137 = -1LL;
static int32_t x138 = -3247542;
static int16_t x139 = -941;
volatile int32_t x143 = INT32_MIN;
volatile int32_t t35 = -9;
int32_t x169 = -1;
int16_t x172 = INT16_MIN;
int32_t x175 = -1;
int8_t x176 = INT8_MIN;
int32_t x178 = INT32_MIN;
volatile uint32_t x183 = 1044861088U;
volatile uint64_t x185 = 40913LLU;
volatile int8_t x197 = INT8_MIN;
uint8_t x199 = 11U;
uint64_t x217 = 565770296LLU;
int32_t x223 = INT32_MIN;
int32_t x235 = -1;
volatile int32_t t58 = 205;
int32_t x240 = -1;
int16_t x260 = -12;
int32_t t64 = 86627498;
uint8_t x264 = 43U;
int32_t t66 = 1920425;
int8_t x270 = 1;
volatile int32_t t68 = -804;
static int8_t x278 = INT8_MAX;
int8_t x279 = -22;
static uint8_t x280 = 2U;
volatile int32_t t70 = 91060308;
static uint16_t x286 = UINT16_MAX;
int8_t x294 = -1;
int32_t t74 = -102397710;
static int8_t x302 = -1;
int8_t x307 = -1;
uint32_t x313 = UINT32_MAX;
int8_t x317 = -1;
int8_t x319 = -1;
int32_t t80 = 130;
volatile int64_t x331 = -709065133645LL;
uint64_t x333 = UINT64_MAX;
uint8_t x337 = 17U;
volatile uint64_t x338 = 216520248LLU;
int32_t t84 = -16426157;
int32_t x350 = -94;
static int32_t x354 = 66326586;
uint32_t x358 = 7U;
static int8_t x359 = -4;
static int32_t x364 = -1;
uint32_t x366 = 496U;
int8_t x368 = INT8_MIN;
volatile int32_t t91 = 243;
int64_t x375 = -1LL;
uint64_t x376 = UINT64_MAX;
int16_t x377 = INT16_MIN;
uint32_t x380 = UINT32_MAX;
volatile int32_t x384 = INT32_MAX;
uint8_t x386 = 22U;
volatile int32_t t96 = -16510134;
int16_t x396 = 1;
static volatile int8_t x405 = 0;
int64_t x408 = -1LL;
int32_t t101 = -4078814;
uint8_t x410 = 104U;
volatile int32_t t102 = 5;
uint64_t x416 = UINT64_MAX;
int32_t t104 = -64886;
static int8_t x427 = -3;
static int16_t x432 = INT16_MIN;
volatile uint16_t x440 = 123U;
int64_t x442 = INT64_MAX;
static int32_t x443 = -19256;
int64_t x454 = -1LL;
int32_t x457 = INT32_MIN;
volatile int32_t t114 = -86813112;
int32_t x470 = -1;
static int32_t t117 = 1240;
uint32_t x480 = 273U;
volatile int16_t x484 = INT16_MIN;
volatile uint16_t x488 = 2507U;
static int32_t x490 = INT32_MIN;
static uint32_t x493 = 8898184U;
volatile int32_t t123 = 1;
int32_t t124 = 111;
static int64_t x508 = INT64_MAX;
int64_t x509 = INT64_MIN;
int32_t x512 = 108;
int64_t x522 = -2137961018LL;
uint64_t x531 = 1804386389350616007LLU;
static int32_t t133 = 338316111;
static int16_t x538 = INT16_MIN;
int32_t t134 = 10;
uint32_t x544 = UINT32_MAX;
static uint16_t x549 = UINT16_MAX;
int16_t x559 = 12;
int8_t x570 = -5;
int32_t x571 = 13670;
static int8_t x572 = INT8_MIN;
static volatile int8_t x575 = INT8_MIN;
int8_t x584 = -24;
int16_t x586 = INT16_MIN;
int32_t t146 = -387;
int32_t t147 = 27364;
uint8_t x594 = UINT8_MAX;
volatile uint8_t x599 = 59U;
int64_t x600 = INT64_MIN;
int32_t t149 = -58362253;
int16_t x601 = 7;
volatile int64_t x602 = 495070139120LL;
static int32_t x625 = INT32_MAX;
uint8_t x627 = 1U;
int64_t x628 = 7115474410LL;
int8_t x640 = -1;
static volatile int32_t t161 = 1;
uint16_t x649 = 3U;
volatile int32_t t162 = -143;
static volatile int32_t t164 = 0;
static volatile uint8_t x666 = 101U;
int8_t x667 = INT8_MIN;
int8_t x672 = -1;
uint16_t x673 = 1U;
static int8_t x676 = -1;
static int8_t x682 = -1;
volatile int32_t x689 = 3080;
int8_t x694 = INT8_MIN;
int32_t t174 = -254122;
volatile uint64_t x705 = 6LLU;
uint64_t x707 = UINT64_MAX;
static uint32_t x708 = 79U;
static int8_t x714 = -1;
int32_t t178 = 185;
volatile int32_t t179 = -122;
int32_t t180 = 1;
int64_t x726 = INT64_MAX;
uint64_t x732 = UINT64_MAX;
int32_t t182 = -633;
int32_t x735 = INT32_MIN;
int32_t x743 = -1;
int64_t x757 = INT64_MIN;
uint8_t x762 = UINT8_MAX;
int16_t x779 = INT16_MAX;
static uint32_t x780 = 618632U;
int64_t x781 = INT64_MAX;
int32_t x786 = -1353;
static volatile int32_t t196 = 97966;
int64_t x797 = INT64_MIN;


void f0(void) {
    	static uint32_t x1 = UINT32_MAX;
	uint64_t x3 = 267809404311009434LLU;
	int8_t x4 = 1;
	volatile int32_t t0 = 55;

    t0 = ((x1!=x2)^(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -47829465;
	static int32_t x6 = -1;
	uint16_t x8 = 119U;
	int32_t t1 = 16677;

    t1 = ((x5!=x6)^(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -2835;
	static int32_t x10 = -14624683;
	int32_t x11 = -1;
	static int32_t t2 = -64017;

    t2 = ((x9!=x10)^(x11<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = 0;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -165;

    t3 = ((x13!=x14)^(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	static volatile int32_t t4 = 14103045;

    t4 = ((x17!=x18)^(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 1003337U;
	int64_t x22 = 3569751LL;
	static int8_t x23 = 25;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = 372795828;

    t5 = ((x21!=x22)^(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x27 = -1LL;
	volatile int16_t x28 = -46;
	static int32_t t6 = 1122;

    t6 = ((x25!=x26)^(x27<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MIN;
	static int32_t x32 = INT32_MIN;

    t7 = ((x29!=x30)^(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -331720389LL;
	static uint64_t x34 = 99LLU;
	volatile int16_t x35 = INT16_MIN;
	static volatile int32_t t8 = 102;

    t8 = ((x33!=x34)^(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 137457178U;
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = -1;
	int32_t x40 = -1;
	int32_t t9 = -414;

    t9 = ((x37!=x38)^(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 13956058506714LLU;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = -95;

    t10 = ((x41!=x42)^(x43<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	volatile uint32_t x47 = 13U;
	volatile int32_t t11 = 4533895;

    t11 = ((x45!=x46)^(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MAX;
	static uint8_t x50 = 0U;
	uint8_t x51 = 3U;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = 19390;

    t12 = ((x49!=x50)^(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 42762U;
	volatile int64_t x55 = 757397701151782891LL;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -1875436;

    t13 = ((x53!=x54)^(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MIN;

    t14 = ((x57!=x58)^(x59<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	volatile int32_t x62 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -60353288;

    t15 = ((x61!=x62)^(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	uint8_t x67 = 13U;
	int32_t t16 = 8295937;

    t16 = ((x65!=x66)^(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MAX;
	int32_t x70 = 5677;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -62993885;

    t17 = ((x69!=x70)^(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MAX;
	int32_t x75 = 246524708;
	volatile int32_t t18 = 1;

    t18 = ((x73!=x74)^(x75<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -9;
	int32_t x78 = INT32_MIN;
	uint16_t x79 = UINT16_MAX;

    t19 = ((x77!=x78)^(x79<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = -11242;
	int16_t x82 = INT16_MIN;
	uint16_t x84 = 55U;
	volatile int32_t t20 = -41486356;

    t20 = ((x81!=x82)^(x83<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	uint64_t x86 = UINT64_MAX;
	uint32_t x87 = 1U;
	static int16_t x88 = 1852;
	int32_t t21 = 12353;

    t21 = ((x85!=x86)^(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -1LL;
	uint8_t x91 = UINT8_MAX;
	volatile uint32_t x92 = 1U;
	volatile int32_t t22 = -100186;

    t22 = ((x89!=x90)^(x91<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = 9705758;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -3533409;

    t23 = ((x93!=x94)^(x95<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int32_t x100 = INT32_MIN;
	int32_t t24 = 417805857;

    t24 = ((x97!=x98)^(x99<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 247496313U;
	volatile int8_t x103 = -10;
	int32_t t25 = -4899;

    t25 = ((x101!=x102)^(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MAX;
	static uint64_t x108 = UINT64_MAX;
	int32_t t26 = -2;

    t26 = ((x105!=x106)^(x107<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -24;
	uint64_t x111 = 23568LLU;
	int32_t x112 = 1;
	volatile int32_t t27 = -2;

    t27 = ((x109!=x110)^(x111<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = -1;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 62583;

    t28 = ((x113!=x114)^(x115<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 1470U;
	uint16_t x118 = 21U;
	volatile int32_t x119 = INT32_MIN;
	static int16_t x120 = 62;
	static int32_t t29 = 1134;

    t29 = ((x117!=x118)^(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	uint8_t x122 = 73U;
	static int8_t x123 = 2;
	int64_t x124 = -1LL;
	volatile int32_t t30 = -392615;

    t30 = ((x121!=x122)^(x123<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 5U;
	int64_t x128 = INT64_MIN;

    t31 = ((x125!=x126)^(x127<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MAX;
	static volatile int64_t x130 = INT64_MAX;
	uint64_t x132 = 164455724984213LLU;

    t32 = ((x129!=x130)^(x131<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = -3389137061012LL;
	uint16_t x134 = UINT16_MAX;
	static uint64_t x135 = 80889647394901LLU;
	static volatile int8_t x136 = 18;
	int32_t t33 = -2838;

    t33 = ((x133!=x134)^(x135<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x140 = 755LL;
	volatile int32_t t34 = -58785953;

    t34 = ((x137!=x138)^(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	volatile int8_t x142 = INT8_MIN;
	volatile uint32_t x144 = 258959U;

    t35 = ((x141!=x142)^(x143<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int8_t x146 = -1;
	static uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 13U;
	int32_t t36 = 2268;

    t36 = ((x145!=x146)^(x147<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = -207589225;
	int8_t x152 = -1;
	int32_t t37 = -572;

    t37 = ((x149!=x150)^(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	static int32_t x154 = INT32_MIN;
	int64_t x155 = -753844LL;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 3396;

    t38 = ((x153!=x154)^(x155<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 99;
	int32_t x158 = INT32_MAX;
	uint16_t x159 = UINT16_MAX;
	static int32_t x160 = 358;
	volatile int32_t t39 = 10138;

    t39 = ((x157!=x158)^(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -7018;
	static volatile int64_t x164 = -4115674906224LL;
	int32_t t40 = 7490;

    t40 = ((x161!=x162)^(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MAX;
	uint32_t x166 = 68936U;
	volatile uint64_t x167 = 17379733759LLU;
	uint16_t x168 = 848U;
	volatile int32_t t41 = 28754354;

    t41 = ((x165!=x166)^(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x170 = 1U;
	uint64_t x171 = 19769233195LLU;
	int32_t t42 = -7768;

    t42 = ((x169!=x170)^(x171<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	uint8_t x174 = UINT8_MAX;
	static volatile int32_t t43 = 798143297;

    t43 = ((x173!=x174)^(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x177 = 25U;
	volatile int32_t x179 = INT32_MIN;
	int8_t x180 = -10;
	static volatile int32_t t44 = -221041047;

    t44 = ((x177!=x178)^(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	uint64_t x182 = 3482136LLU;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 953244587;

    t45 = ((x181!=x182)^(x183<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = 63;
	volatile int64_t x187 = INT64_MAX;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -218187;

    t46 = ((x185!=x186)^(x187<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 0;
	int32_t x190 = -1;
	int16_t x191 = INT16_MIN;
	int8_t x192 = -16;
	volatile int32_t t47 = 105121;

    t47 = ((x189!=x190)^(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x193 = 2U;
	int64_t x194 = 20332704LL;
	int32_t x195 = -186241560;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t48 = 671420457;

    t48 = ((x193!=x194)^(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x198 = 13U;
	static int8_t x200 = INT8_MAX;
	static volatile int32_t t49 = -47521146;

    t49 = ((x197!=x198)^(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	volatile uint64_t x202 = 18001710704LLU;
	int64_t x203 = -278876653LL;
	static int32_t x204 = 30647134;
	static volatile int32_t t50 = -200794392;

    t50 = ((x201!=x202)^(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = 103131740;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -1479;
	static int32_t x208 = INT32_MAX;
	volatile int32_t t51 = 5531040;

    t51 = ((x205!=x206)^(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	uint8_t x211 = 1U;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 28576;

    t52 = ((x209!=x210)^(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	int8_t x214 = -24;
	volatile int8_t x215 = INT8_MIN;
	volatile int64_t x216 = INT64_MAX;
	int32_t t53 = -105877696;

    t53 = ((x213!=x214)^(x215<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x218 = 8309768794LLU;
	static int16_t x219 = -1;
	volatile uint32_t x220 = 2942899U;
	volatile int32_t t54 = 212866464;

    t54 = ((x217!=x218)^(x219<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 0U;
	uint16_t x222 = UINT16_MAX;
	int16_t x224 = -1;
	volatile int32_t t55 = -11;

    t55 = ((x221!=x222)^(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 170U;
	uint16_t x226 = 16U;
	uint8_t x227 = 78U;
	volatile uint16_t x228 = 0U;
	int32_t t56 = 27370;

    t56 = ((x225!=x226)^(x227<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MAX;
	volatile uint16_t x230 = 3U;
	uint16_t x231 = 6866U;
	int64_t x232 = -1LL;
	int32_t t57 = 0;

    t57 = ((x229!=x230)^(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -15;
	int16_t x234 = INT16_MAX;
	uint8_t x236 = 30U;

    t58 = ((x233!=x234)^(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x237 = 26U;
	uint32_t x238 = 69817U;
	int16_t x239 = INT16_MIN;
	static volatile int32_t t59 = -1;

    t59 = ((x237!=x238)^(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MAX;
	volatile int64_t x243 = INT64_MAX;
	uint32_t x244 = 654342U;
	volatile int32_t t60 = 3367;

    t60 = ((x241!=x242)^(x243<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 6708757U;
	static uint32_t x246 = 514100U;
	uint32_t x247 = 3539106U;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 456411;

    t61 = ((x245!=x246)^(x247<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 140537321;
	int64_t x250 = -1LL;
	static volatile int8_t x251 = INT8_MAX;
	volatile int8_t x252 = INT8_MAX;
	int32_t t62 = -58;

    t62 = ((x249!=x250)^(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x253 = 1648U;
	uint32_t x254 = UINT32_MAX;
	static uint64_t x255 = 56LLU;
	int64_t x256 = 3828536783LL;
	static int32_t t63 = 46;

    t63 = ((x253!=x254)^(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 0;
	static int16_t x258 = 1421;
	int64_t x259 = -1LL;

    t64 = ((x257!=x258)^(x259<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x261 = UINT64_MAX;
	int16_t x262 = 1796;
	volatile uint32_t x263 = UINT32_MAX;
	int32_t t65 = -58;

    t65 = ((x261!=x262)^(x263<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = INT64_MAX;
	static int64_t x266 = INT64_MAX;
	int64_t x267 = 50000151LL;
	uint64_t x268 = UINT64_MAX;

    t66 = ((x265!=x266)^(x267<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x269 = UINT8_MAX;
	static volatile int32_t x271 = INT32_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t67 = -6814;

    t67 = ((x269!=x270)^(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = UINT8_MAX;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MIN;

    t68 = ((x273!=x274)^(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x277 = INT16_MIN;
	volatile int32_t t69 = 1636;

    t69 = ((x277!=x278)^(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	static volatile int16_t x282 = INT16_MAX;
	static int64_t x283 = INT64_MIN;
	volatile uint8_t x284 = UINT8_MAX;

    t70 = ((x281!=x282)^(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	uint64_t x287 = 115895LLU;
	uint16_t x288 = 1U;
	volatile int32_t t71 = 8;

    t71 = ((x285!=x286)^(x287<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = -169323;
	int16_t x290 = 2;
	int16_t x291 = INT16_MAX;
	uint16_t x292 = 0U;
	static volatile int32_t t72 = -1097;

    t72 = ((x289!=x290)^(x291<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 60382767949LLU;
	int16_t x295 = INT16_MIN;
	static uint16_t x296 = 224U;
	int32_t t73 = 2;

    t73 = ((x293!=x294)^(x295<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = UINT8_MAX;
	int16_t x298 = INT16_MAX;
	int8_t x299 = 0;
	static uint64_t x300 = 3534221LLU;

    t74 = ((x297!=x298)^(x299<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x301 = 6242U;
	int32_t x303 = -1;
	static int16_t x304 = -1;
	int32_t t75 = 3653;

    t75 = ((x301!=x302)^(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile int64_t x306 = INT64_MAX;
	uint8_t x308 = 2U;
	int32_t t76 = -781742;

    t76 = ((x305!=x306)^(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	static int32_t x310 = INT32_MIN;
	int8_t x311 = 24;
	static uint64_t x312 = 49658699490408381LLU;
	int32_t t77 = -617216;

    t77 = ((x309!=x310)^(x311<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MAX;
	volatile int8_t x315 = -12;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -1279516;

    t78 = ((x313!=x314)^(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = 32329U;
	static uint64_t x320 = 40786630340791LLU;
	volatile int32_t t79 = -3;

    t79 = ((x317!=x318)^(x319<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 505LL;
	int64_t x322 = 17499509501591095LL;
	volatile uint32_t x323 = UINT32_MAX;
	static int32_t x324 = INT32_MAX;

    t80 = ((x321!=x322)^(x323<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	static volatile uint8_t x326 = 48U;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 600U;
	volatile int32_t t81 = -194193323;

    t81 = ((x325!=x326)^(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int32_t x330 = -1;
	static uint64_t x332 = 10263571752LLU;
	int32_t t82 = -9;

    t82 = ((x329!=x330)^(x331<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = 234310545LLU;
	int64_t x336 = INT64_MIN;
	int32_t t83 = -2007;

    t83 = ((x333!=x334)^(x335<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x339 = 99U;
	uint64_t x340 = 0LLU;

    t84 = ((x337!=x338)^(x339<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = UINT64_MAX;
	uint16_t x342 = 2U;
	int16_t x343 = 94;
	int64_t x344 = 778155689112460820LL;
	volatile int32_t t85 = -951748;

    t85 = ((x341!=x342)^(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = INT16_MAX;
	uint8_t x346 = 7U;
	uint16_t x347 = 1588U;
	int64_t x348 = INT64_MIN;
	int32_t t86 = -1951810;

    t86 = ((x345!=x346)^(x347<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 8905775;

    t87 = ((x349!=x350)^(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	int8_t x355 = -1;
	int64_t x356 = -31360LL;
	int32_t t88 = 44655;

    t88 = ((x353!=x354)^(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = 1820059194LLU;
	volatile int32_t x360 = INT32_MIN;
	int32_t t89 = 800874589;

    t89 = ((x357!=x358)^(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x361 = 5U;
	int16_t x362 = 367;
	int32_t x363 = -1;
	volatile int32_t t90 = 8687;

    t90 = ((x361!=x362)^(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 2LL;
	uint32_t x367 = 305U;

    t91 = ((x365!=x366)^(x367<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 16478023U;
	int8_t x370 = INT8_MIN;
	int32_t x371 = -1001002;
	uint16_t x372 = 60U;
	int32_t t92 = -16052418;

    t92 = ((x369!=x370)^(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x373 = 6166952LLU;
	uint16_t x374 = 6U;
	int32_t t93 = 5;

    t93 = ((x373!=x374)^(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = INT32_MIN;
	int64_t x379 = INT64_MIN;
	static int32_t t94 = -1;

    t94 = ((x377!=x378)^(x379<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	static int32_t x382 = 9285855;
	volatile uint16_t x383 = 24235U;
	volatile int32_t t95 = 23;

    t95 = ((x381!=x382)^(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -4006;
	int64_t x387 = 851LL;
	uint16_t x388 = UINT16_MAX;

    t96 = ((x385!=x386)^(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 220618030599001LLU;
	static uint64_t x390 = 28648739667LLU;
	volatile int16_t x391 = -1;
	uint8_t x392 = 113U;
	static volatile int32_t t97 = 1;

    t97 = ((x389!=x390)^(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MIN;
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = 5814584412416345LL;
	int32_t t98 = 1;

    t98 = ((x393!=x394)^(x395<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 6678U;
	int32_t x398 = 92253;
	int64_t x399 = 14130270LL;
	uint16_t x400 = UINT16_MAX;
	static int32_t t99 = 95;

    t99 = ((x397!=x398)^(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	uint16_t x402 = 2216U;
	static int16_t x403 = -1;
	static int8_t x404 = INT8_MAX;
	int32_t t100 = 58224901;

    t100 = ((x401!=x402)^(x403<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x406 = UINT8_MAX;
	int8_t x407 = 1;

    t101 = ((x405!=x406)^(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	static uint32_t x411 = 221U;
	int16_t x412 = 191;

    t102 = ((x409!=x410)^(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 1662;
	int64_t x414 = -1LL;
	int8_t x415 = 12;
	static int32_t t103 = 7;

    t103 = ((x413!=x414)^(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MAX;
	int8_t x418 = 7;
	int64_t x419 = -1LL;
	uint32_t x420 = 86204266U;

    t104 = ((x417!=x418)^(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 0;
	int64_t x422 = INT64_MIN;
	uint16_t x423 = 18U;
	static int32_t x424 = -435;
	volatile int32_t t105 = 76;

    t105 = ((x421!=x422)^(x423<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 6225931LL;
	static uint16_t x426 = UINT16_MAX;
	volatile int32_t x428 = INT32_MAX;
	volatile int32_t t106 = -1;

    t106 = ((x425!=x426)^(x427<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int32_t x430 = -1;
	int16_t x431 = -1;
	volatile int32_t t107 = -176536895;

    t107 = ((x429!=x430)^(x431<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = UINT32_MAX;
	int64_t x434 = INT64_MAX;
	static volatile int64_t x435 = INT64_MIN;
	volatile uint16_t x436 = 951U;
	static volatile int32_t t108 = 3788008;

    t108 = ((x433!=x434)^(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x437 = 3U;
	int16_t x438 = INT16_MAX;
	uint64_t x439 = 5464589LLU;
	volatile int32_t t109 = -47663;

    t109 = ((x437!=x438)^(x439<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = 1;
	volatile int16_t x444 = INT16_MIN;
	static volatile int32_t t110 = -91;

    t110 = ((x441!=x442)^(x443<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	uint8_t x446 = 14U;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = 2555U;
	volatile int32_t t111 = -88177784;

    t111 = ((x445!=x446)^(x447<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 58905U;
	static int64_t x450 = INT64_MIN;
	int64_t x451 = -1LL;
	volatile int16_t x452 = -1;
	volatile int32_t t112 = 120432;

    t112 = ((x449!=x450)^(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x455 = -1;
	int64_t x456 = -49368182LL;
	volatile int32_t t113 = 13;

    t113 = ((x453!=x454)^(x455<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = INT16_MAX;
	int8_t x459 = INT8_MIN;
	int64_t x460 = -1263693685239294120LL;

    t114 = ((x457!=x458)^(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 12158;
	int16_t x462 = -1;
	static int64_t x463 = 15571360LL;
	volatile int8_t x464 = INT8_MIN;
	volatile int32_t t115 = -142796;

    t115 = ((x461!=x462)^(x463<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 32U;
	uint32_t x466 = UINT32_MAX;
	static volatile uint64_t x467 = 85LLU;
	uint8_t x468 = 1U;
	volatile int32_t t116 = 302067;

    t116 = ((x465!=x466)^(x467<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int64_t x471 = INT64_MIN;
	int64_t x472 = 4073349876767186LL;

    t117 = ((x469!=x470)^(x471<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	uint16_t x474 = 53U;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;
	volatile int32_t t118 = -679;

    t118 = ((x473!=x474)^(x475<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MAX;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = INT64_MIN;
	volatile int32_t t119 = -31676;

    t119 = ((x477!=x478)^(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -1;
	volatile int16_t x482 = INT16_MAX;
	static volatile int32_t x483 = -19852;
	static int32_t t120 = 1190732;

    t120 = ((x481!=x482)^(x483<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int8_t x486 = -13;
	static volatile int64_t x487 = INT64_MIN;
	static int32_t t121 = -958300252;

    t121 = ((x485!=x486)^(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	int16_t x491 = 0;
	int64_t x492 = INT64_MAX;
	static int32_t t122 = 3;

    t122 = ((x489!=x490)^(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x494 = INT16_MIN;
	uint32_t x495 = 116683585U;
	uint64_t x496 = UINT64_MAX;

    t123 = ((x493!=x494)^(x495<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int16_t x498 = 10937;
	int8_t x499 = -21;
	int64_t x500 = 3641870LL;

    t124 = ((x497!=x498)^(x499<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 47031LLU;
	volatile int32_t x502 = INT32_MIN;
	static int16_t x503 = -1042;
	int32_t x504 = INT32_MAX;
	int32_t t125 = 13740;

    t125 = ((x501!=x502)^(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = 12736;
	volatile int32_t x506 = 65590645;
	int16_t x507 = INT16_MIN;
	volatile int32_t t126 = -1;

    t126 = ((x505!=x506)^(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x510 = 1U;
	uint16_t x511 = 81U;
	int32_t t127 = -1;

    t127 = ((x509!=x510)^(x511<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 50049;
	int64_t x514 = INT64_MIN;
	int8_t x515 = 1;
	int16_t x516 = 787;
	static volatile int32_t t128 = -543;

    t128 = ((x513!=x514)^(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = -1;
	int32_t x520 = -1;
	volatile int32_t t129 = 456374548;

    t129 = ((x517!=x518)^(x519<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	static volatile int32_t x523 = -114;
	int16_t x524 = -1;
	int32_t t130 = -741;

    t130 = ((x521!=x522)^(x523<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = UINT16_MAX;
	volatile int8_t x526 = INT8_MIN;
	uint8_t x527 = UINT8_MAX;
	static volatile uint64_t x528 = 130LLU;
	volatile int32_t t131 = 633;

    t131 = ((x525!=x526)^(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MAX;
	int32_t x530 = INT32_MIN;
	static int16_t x532 = 3;
	int32_t t132 = 6714832;

    t132 = ((x529!=x530)^(x531<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x533 = 936542404675LLU;
	static int16_t x534 = INT16_MAX;
	int32_t x535 = -1;
	volatile uint32_t x536 = 2120919670U;

    t133 = ((x533!=x534)^(x535<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MAX;
	int64_t x539 = -45206179352LL;
	uint16_t x540 = 2U;

    t134 = ((x537!=x538)^(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	int64_t x542 = -1LL;
	static int32_t x543 = INT32_MAX;
	int32_t t135 = 445558783;

    t135 = ((x541!=x542)^(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	uint32_t x546 = UINT32_MAX;
	uint64_t x547 = 58310658772833838LLU;
	uint64_t x548 = 5516018569397768234LLU;
	volatile int32_t t136 = -465147;

    t136 = ((x545!=x546)^(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x550 = INT32_MIN;
	int8_t x551 = -1;
	int8_t x552 = 1;
	int32_t t137 = 406326;

    t137 = ((x549!=x550)^(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	int32_t x554 = -99466;
	static int32_t x555 = INT32_MAX;
	uint8_t x556 = UINT8_MAX;
	static int32_t t138 = 797058768;

    t138 = ((x553!=x554)^(x555<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = -14620719519588832LL;
	int64_t x558 = INT64_MAX;
	int32_t x560 = INT32_MIN;
	volatile int32_t t139 = -677257320;

    t139 = ((x557!=x558)^(x559<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MAX;
	static uint16_t x562 = 6764U;
	int8_t x563 = 0;
	static int8_t x564 = INT8_MAX;
	int32_t t140 = 0;

    t140 = ((x561!=x562)^(x563<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 22;
	uint32_t x566 = 4U;
	int64_t x567 = 4001803382265976508LL;
	static int8_t x568 = 1;
	int32_t t141 = 6783073;

    t141 = ((x565!=x566)^(x567<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x569 = INT32_MIN;
	volatile int32_t t142 = 0;

    t142 = ((x569!=x570)^(x571<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	int32_t x574 = -32;
	static volatile int64_t x576 = INT64_MIN;
	int32_t t143 = 595533;

    t143 = ((x573!=x574)^(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 15U;
	static int64_t x578 = -1LL;
	int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t144 = -339;

    t144 = ((x577!=x578)^(x579<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 0;
	static int8_t x582 = 27;
	uint64_t x583 = 269408016096377584LLU;
	static volatile int32_t t145 = -468916;

    t145 = ((x581!=x582)^(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = 0;
	int64_t x587 = 622101762239813LL;
	int8_t x588 = INT8_MIN;

    t146 = ((x585!=x586)^(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 6U;
	volatile int32_t x590 = -1;
	volatile int8_t x591 = -1;
	uint16_t x592 = 0U;

    t147 = ((x589!=x590)^(x591<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	int16_t x595 = -1;
	volatile uint32_t x596 = 6U;
	int32_t t148 = 538267;

    t148 = ((x593!=x594)^(x595<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 9;
	uint8_t x598 = 5U;

    t149 = ((x597!=x598)^(x599<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x603 = INT64_MIN;
	uint16_t x604 = 21U;
	volatile int32_t t150 = -188;

    t150 = ((x601!=x602)^(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	int8_t x606 = INT8_MAX;
	int32_t x607 = INT32_MIN;
	int64_t x608 = -8931LL;
	volatile int32_t t151 = -2;

    t151 = ((x605!=x606)^(x607<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	static uint32_t x610 = 30U;
	int16_t x611 = INT16_MIN;
	int32_t x612 = -6611145;
	volatile int32_t t152 = 398680864;

    t152 = ((x609!=x610)^(x611<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	static volatile int16_t x614 = INT16_MAX;
	static uint16_t x615 = UINT16_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -1145;

    t153 = ((x613!=x614)^(x615<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	volatile uint64_t x618 = 60365261122532942LLU;
	int16_t x619 = INT16_MIN;
	int64_t x620 = INT64_MIN;
	static int32_t t154 = -215783902;

    t154 = ((x617!=x618)^(x619<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint32_t x621 = 40905689U;
	int16_t x622 = -1;
	int16_t x623 = -15;
	int64_t x624 = -1337120208LL;
	volatile int32_t t155 = 317614;

    t155 = ((x621!=x622)^(x623<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x626 = 3;
	int32_t t156 = 388059277;

    t156 = ((x625!=x626)^(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	uint16_t x630 = 845U;
	uint16_t x631 = 97U;
	int32_t x632 = -565124243;
	static int32_t t157 = -34004788;

    t157 = ((x629!=x630)^(x631<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 1U;
	volatile uint32_t x634 = 10U;
	int8_t x635 = 11;
	volatile int16_t x636 = 1;
	int32_t t158 = -11;

    t158 = ((x633!=x634)^(x635<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int8_t x638 = -1;
	static volatile uint64_t x639 = UINT64_MAX;
	int32_t t159 = -147061;

    t159 = ((x637!=x638)^(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	static int64_t x642 = INT64_MIN;
	int64_t x643 = -1LL;
	int64_t x644 = 989685500437LL;
	static int32_t t160 = -1722261;

    t160 = ((x641!=x642)^(x643<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x645 = UINT16_MAX;
	int16_t x646 = INT16_MIN;
	volatile int32_t x647 = -1;
	uint64_t x648 = 1567633LLU;

    t161 = ((x645!=x646)^(x647<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = -1;
	static uint8_t x651 = UINT8_MAX;
	int8_t x652 = INT8_MIN;

    t162 = ((x649!=x650)^(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 8839LL;
	int32_t x654 = -1;
	uint64_t x655 = 5657863248681534738LLU;
	int16_t x656 = INT16_MIN;
	int32_t t163 = -2581767;

    t163 = ((x653!=x654)^(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -32379491665LL;
	int32_t x658 = 223;
	int8_t x659 = 0;
	static uint8_t x660 = 11U;

    t164 = ((x657!=x658)^(x659<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int8_t x662 = INT8_MIN;
	int32_t x663 = 58;
	static int16_t x664 = INT16_MIN;
	int32_t t165 = 22372240;

    t165 = ((x661!=x662)^(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x665 = INT16_MIN;
	volatile int16_t x668 = INT16_MIN;
	int32_t t166 = 15;

    t166 = ((x665!=x666)^(x667<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x669 = INT64_MAX;
	uint16_t x670 = 40U;
	uint16_t x671 = 2U;
	int32_t t167 = 103578;

    t167 = ((x669!=x670)^(x671<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x674 = -1;
	volatile int64_t x675 = INT64_MIN;
	static volatile int32_t t168 = -23120125;

    t168 = ((x673!=x674)^(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 837921504434LLU;
	int32_t x678 = INT32_MIN;
	int64_t x679 = -1LL;
	int8_t x680 = -28;
	volatile int32_t t169 = 0;

    t169 = ((x677!=x678)^(x679<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	static int16_t x683 = INT16_MIN;
	uint32_t x684 = UINT32_MAX;
	volatile int32_t t170 = 3612;

    t170 = ((x681!=x682)^(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 1U;
	int8_t x686 = -1;
	static volatile uint8_t x687 = 1U;
	static int8_t x688 = 28;
	volatile int32_t t171 = -12433;

    t171 = ((x685!=x686)^(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x690 = UINT32_MAX;
	volatile int32_t x691 = INT32_MIN;
	uint16_t x692 = 9048U;
	static volatile int32_t t172 = 6354205;

    t172 = ((x689!=x690)^(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 70U;
	int64_t x695 = INT64_MAX;
	int32_t x696 = INT32_MIN;
	static int32_t t173 = -5;

    t173 = ((x693!=x694)^(x695<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 1013148347U;
	volatile int32_t x698 = 272536110;
	int64_t x699 = INT64_MAX;
	uint16_t x700 = 13U;

    t174 = ((x697!=x698)^(x699<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = 7582;
	volatile uint8_t x702 = 1U;
	volatile int8_t x703 = -22;
	uint16_t x704 = 1076U;
	volatile int32_t t175 = -204136;

    t175 = ((x701!=x702)^(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	int32_t t176 = -28903272;

    t176 = ((x705!=x706)^(x707<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = INT32_MIN;
	int16_t x711 = INT16_MIN;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t177 = 20926;

    t177 = ((x709!=x710)^(x711<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	int64_t x715 = INT64_MAX;
	volatile uint64_t x716 = UINT64_MAX;

    t178 = ((x713!=x714)^(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 331879676;
	uint64_t x718 = UINT64_MAX;
	int64_t x719 = INT64_MAX;
	static int64_t x720 = -1LL;

    t179 = ((x717!=x718)^(x719<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int64_t x722 = 27034448LL;
	int8_t x723 = INT8_MIN;
	int16_t x724 = INT16_MIN;

    t180 = ((x721!=x722)^(x723<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 8462604195750LLU;
	uint32_t x727 = 939733U;
	uint16_t x728 = UINT16_MAX;
	int32_t t181 = -30;

    t181 = ((x725!=x726)^(x727<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x729 = -2802;
	int16_t x730 = -1;
	static volatile int32_t x731 = INT32_MIN;

    t182 = ((x729!=x730)^(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -18;
	uint64_t x734 = 77527880292580915LLU;
	int16_t x736 = -1;
	volatile int32_t t183 = 25404378;

    t183 = ((x733!=x734)^(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -7;
	int32_t x738 = -32219;
	volatile int8_t x739 = -3;
	volatile int64_t x740 = 26200887LL;
	static volatile int32_t t184 = 1569;

    t184 = ((x737!=x738)^(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 268;
	int32_t x742 = 32488;
	static int64_t x744 = 0LL;
	volatile int32_t t185 = 1;

    t185 = ((x741!=x742)^(x743<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = 0;
	static int16_t x746 = 11308;
	volatile int32_t x747 = -489240;
	static int8_t x748 = -12;
	static int32_t t186 = 28;

    t186 = ((x745!=x746)^(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = -1LL;
	volatile int8_t x750 = 1;
	int8_t x751 = -1;
	uint8_t x752 = 1U;
	static volatile int32_t t187 = 859642;

    t187 = ((x749!=x750)^(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = -1;
	volatile int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MAX;
	int8_t x756 = -1;
	int32_t t188 = 122067;

    t188 = ((x753!=x754)^(x755<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = 113U;
	int64_t x759 = INT64_MIN;
	static uint16_t x760 = 7U;
	volatile int32_t t189 = 1;

    t189 = ((x757!=x758)^(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x761 = 28LLU;
	int16_t x763 = 1473;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = 171600;

    t190 = ((x761!=x762)^(x763<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	volatile int32_t x766 = INT32_MIN;
	volatile int8_t x767 = INT8_MIN;
	uint8_t x768 = 103U;
	int32_t t191 = 2414;

    t191 = ((x765!=x766)^(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -13821LL;
	volatile uint64_t x770 = 1884782077323332LLU;
	uint64_t x771 = UINT64_MAX;
	static volatile uint8_t x772 = UINT8_MAX;
	static int32_t t192 = 0;

    t192 = ((x769!=x770)^(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x774 = INT64_MIN;
	volatile int64_t x775 = INT64_MAX;
	volatile uint8_t x776 = UINT8_MAX;
	int32_t t193 = -105;

    t193 = ((x773!=x774)^(x775<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x777 = 12526402056767692LL;
	volatile int16_t x778 = 1;
	int32_t t194 = -431746532;

    t194 = ((x777!=x778)^(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x782 = 0U;
	int16_t x783 = INT16_MAX;
	static volatile int8_t x784 = 12;
	volatile int32_t t195 = -27912;

    t195 = ((x781!=x782)^(x783<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 2U;
	int32_t x787 = 5;
	static int8_t x788 = -1;

    t196 = ((x785!=x786)^(x787<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 1;
	static uint16_t x790 = 6453U;
	static int32_t x791 = 1;
	int64_t x792 = 45810558LL;
	static volatile int32_t t197 = 167;

    t197 = ((x789!=x790)^(x791<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x793 = INT32_MIN;
	uint16_t x794 = 3U;
	uint16_t x795 = 4U;
	int16_t x796 = -5322;
	int32_t t198 = -1970819;

    t198 = ((x793!=x794)^(x795<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x798 = UINT8_MAX;
	uint32_t x799 = 46183U;
	int16_t x800 = INT16_MIN;
	volatile int32_t t199 = -99;

    t199 = ((x797!=x798)^(x799<=x800));

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

