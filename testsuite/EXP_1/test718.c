
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

int16_t x3 = 0;
volatile int32_t x10 = INT32_MIN;
uint64_t x11 = 970221168LLU;
static uint16_t x14 = 926U;
int16_t x19 = -172;
static int32_t x20 = INT32_MAX;
int32_t t3 = -1;
static volatile int32_t x22 = INT32_MIN;
static int32_t t4 = 113072;
volatile int64_t t5 = -911025LL;
int64_t x29 = 748159LL;
volatile int32_t t6 = 836379;
static int16_t x36 = INT16_MAX;
volatile uint32_t t8 = 80563981U;
int8_t x45 = INT8_MAX;
int32_t t10 = -1458;
volatile uint16_t x55 = UINT16_MAX;
int32_t x62 = INT32_MIN;
static volatile int8_t x69 = INT8_MIN;
static int16_t x70 = 39;
volatile int32_t t16 = 1;
int8_t x80 = INT8_MAX;
volatile int8_t x81 = -1;
int64_t x82 = -1LL;
static volatile int16_t x83 = 1;
int16_t x84 = -263;
int32_t t18 = 271147;
uint16_t x89 = 513U;
static volatile int64_t t21 = -4354LL;
uint64_t x103 = 5LLU;
int8_t x110 = -1;
int32_t x119 = 1;
volatile int32_t t28 = -47473;
volatile uint8_t x145 = 0U;
volatile int64_t x149 = -9160199522282LL;
volatile uint32_t x151 = 188705U;
int64_t t33 = -163LL;
int16_t x154 = INT16_MAX;
int32_t x157 = INT32_MIN;
static int8_t x158 = 42;
int32_t x162 = -450050;
volatile uint32_t x165 = UINT32_MAX;
static uint32_t x176 = 3798U;
static volatile uint32_t t39 = 13714U;
volatile uint32_t t40 = 37U;
volatile int16_t x181 = -1;
uint32_t x187 = 281565U;
static int8_t x193 = 63;
int32_t x201 = INT32_MAX;
uint32_t x208 = 540368741U;
uint32_t x209 = 14101300U;
uint32_t x214 = 108350507U;
int32_t x229 = -1;
static volatile int32_t t52 = 43;
static volatile uint8_t x234 = UINT8_MAX;
uint32_t x238 = UINT32_MAX;
int32_t t54 = 392356;
static uint32_t x241 = 439U;
int64_t x243 = 2027791096298573LL;
static int8_t x247 = INT8_MIN;
volatile uint64_t x261 = 1009LLU;
static int64_t x265 = INT64_MAX;
static volatile uint64_t x272 = 3700574963671359177LLU;
volatile int8_t x274 = -14;
static uint8_t x277 = UINT8_MAX;
static volatile uint32_t x280 = UINT32_MAX;
static int32_t x283 = INT32_MAX;
uint32_t x284 = UINT32_MAX;
static int8_t x286 = INT8_MIN;
static int32_t t64 = 10425762;
int16_t x292 = -30;
int32_t x294 = 1;
volatile uint8_t x303 = 6U;
volatile uint8_t x310 = 1U;
int8_t x334 = 11;
static volatile int8_t x344 = INT8_MIN;
uint16_t x349 = 1U;
volatile int8_t x353 = -1;
int64_t x361 = 1274LL;
uint32_t x364 = 28U;
static int32_t x368 = 314573;
int32_t t81 = -7201;
uint32_t t84 = 763765963U;
static uint32_t x383 = UINT32_MAX;
volatile int8_t x387 = -1;
volatile int32_t t86 = -39467;
int8_t x402 = -25;
uint32_t x405 = 213U;
uint64_t x411 = 505766362328LLU;
volatile int16_t x412 = INT16_MAX;
static int32_t t91 = 25289;
int32_t t92 = -36752226;
volatile uint64_t t93 = 29971035523292286LLU;
int32_t x423 = -427935129;
int64_t x425 = 118LL;
volatile int32_t x430 = INT32_MAX;
int32_t x443 = 475;
static int32_t x444 = INT32_MIN;
int16_t x448 = -1349;
int32_t t99 = -308207;
int8_t x450 = -4;
uint16_t x451 = UINT16_MAX;
volatile uint32_t t102 = 63696405U;
uint64_t x466 = 1630350LLU;
int64_t x474 = -1LL;
uint32_t x477 = 990554863U;
volatile int8_t x482 = -1;
volatile int32_t t107 = 25;
volatile int32_t t108 = -16349944;
uint32_t x489 = UINT32_MAX;
static volatile int32_t t110 = -40802620;
uint8_t x502 = 96U;
uint16_t x508 = UINT16_MAX;
volatile int32_t t113 = 1793;
int16_t x513 = 2004;
volatile int8_t x519 = INT8_MIN;
int8_t x524 = -1;
volatile int32_t t117 = 5;
int32_t x530 = -1;
int64_t x531 = INT64_MIN;
static volatile int32_t t120 = -225684;
uint64_t t121 = 30748LLU;
volatile int32_t x558 = INT32_MIN;
static int32_t t123 = -13;
int32_t t125 = -60508214;
int32_t t126 = 22253453;
int32_t x573 = INT32_MIN;
volatile int8_t x576 = -1;
int8_t x581 = 2;
static uint32_t x583 = UINT32_MAX;
static int64_t x590 = INT64_MIN;
uint16_t x594 = UINT16_MAX;
int8_t x596 = 7;
int8_t x607 = INT8_MIN;
uint16_t x610 = 1645U;
static int8_t x619 = 1;
int8_t x623 = -1;
volatile int16_t x630 = INT16_MIN;
volatile int64_t t140 = -1LL;
uint64_t x633 = 568162635230390328LLU;
uint64_t x634 = 35638466LLU;
uint32_t x635 = UINT32_MAX;
volatile uint64_t x636 = 680678593606277LLU;
uint64_t t141 = 1LLU;
int32_t x640 = -810856445;
static int16_t x641 = -1;
uint64_t x644 = 320934838029637941LLU;
int32_t t144 = -1;
uint32_t x654 = 190540U;
int32_t x661 = INT32_MIN;
uint32_t x662 = 3U;
volatile uint32_t t148 = 1855U;
uint32_t x668 = UINT32_MAX;
static int32_t x676 = 1703;
static int16_t x683 = INT16_MAX;
volatile int32_t t152 = 184;
int8_t x685 = INT8_MIN;
uint16_t x698 = 13796U;
volatile int32_t x702 = 7805477;
int16_t x706 = INT16_MAX;
int64_t x711 = INT64_MIN;
static int32_t x715 = 43448;
int64_t t161 = -156LL;
int8_t x723 = INT8_MIN;
static int64_t x725 = -4174LL;
volatile int64_t x731 = INT64_MIN;
uint16_t x732 = 8U;
int64_t x734 = INT64_MAX;
uint16_t x736 = UINT16_MAX;
static uint32_t x737 = UINT32_MAX;
volatile int32_t t166 = -34409;
static int16_t x741 = INT16_MAX;
uint8_t x750 = 3U;
static int16_t x751 = -14947;
volatile int64_t x752 = INT64_MIN;
volatile int8_t x754 = -1;
uint64_t x755 = 54214173180365LLU;
int32_t t171 = 1;
int32_t x775 = -259620;
static int32_t t174 = -6855;
volatile int64_t x781 = 16807825827004LL;
int8_t x784 = INT8_MIN;
uint16_t x785 = UINT16_MAX;
static int32_t x796 = INT32_MAX;
uint16_t x799 = 5389U;
int32_t x803 = -397863832;
int16_t x808 = INT16_MIN;
static int64_t x809 = INT64_MAX;
int32_t x812 = INT32_MIN;
uint32_t x817 = UINT32_MAX;
uint64_t x819 = 44LLU;
int32_t t185 = -29042;
int8_t x822 = INT8_MIN;
uint8_t x824 = UINT8_MAX;
uint16_t x827 = 17U;
int16_t x831 = 23;
uint8_t x832 = 96U;
static int16_t x842 = 1;
uint16_t x848 = 9U;
int32_t x849 = INT32_MAX;
static int32_t x851 = 242935;
int32_t x862 = INT32_MIN;
int8_t x863 = 1;
int8_t x875 = INT8_MIN;
int16_t x877 = INT16_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint32_t x2 = 197519145U;
	int32_t x4 = -4735010;
	int32_t t0 = -22800;

    t0 = (((x1/x2)<=x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 78U;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t1 = 12275142138920LLU;

    t1 = (((x9/x10)<=x11)/x12);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -11;
	int32_t t2 = 448300285;

    t2 = (((x13/x14)<=x15)/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	int32_t x18 = -17504182;

    t3 = (((x17/x18)<=x19)/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = 247LLU;
	int16_t x23 = INT16_MAX;
	int32_t x24 = 365052101;

    t4 = (((x21/x22)<=x23)/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x25 = 35;
	volatile uint32_t x26 = 1710442274U;
	static uint8_t x27 = 118U;
	int64_t x28 = 1955700835086LL;

    t5 = (((x25/x26)<=x27)/x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x30 = 22U;
	int16_t x31 = -504;
	int8_t x32 = INT8_MIN;

    t6 = (((x29/x30)<=x31)/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x34 = INT16_MIN;
	int32_t x35 = -63345916;
	static volatile int32_t t7 = 236982;

    t7 = (((x33/x34)<=x35)/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 30304479U;
	static int64_t x38 = -1LL;
	static volatile int64_t x39 = INT64_MAX;
	uint32_t x40 = 678U;

    t8 = (((x37/x38)<=x39)/x40);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 816401714633513LLU;
	static int8_t x43 = INT8_MAX;
	uint32_t x44 = 6368U;
	uint32_t t9 = 1U;

    t9 = (((x41/x42)<=x43)/x44);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = 1LL;
	int16_t x47 = INT16_MIN;
	static int8_t x48 = -1;

    t10 = (((x45/x46)<=x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = -1LL;
	int64_t x50 = -11389LL;
	static int64_t x51 = 1430307LL;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t11 = 9;

    t11 = (((x49/x50)<=x51)/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MAX;
	volatile uint32_t x54 = 1521493U;
	int8_t x56 = INT8_MAX;
	int32_t t12 = 0;

    t12 = (((x53/x54)<=x55)/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 1U;
	int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	static int32_t x60 = 173;
	static int32_t t13 = -16657202;

    t13 = (((x57/x58)<=x59)/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	static int64_t x63 = -2083028607LL;
	int64_t x64 = 10070458731692LL;
	int64_t t14 = 5068009175509272LL;

    t14 = (((x61/x62)<=x63)/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 604U;
	volatile int64_t x66 = -88842884313593416LL;
	int64_t x67 = INT64_MIN;
	volatile int64_t x68 = 498694073014LL;
	static int64_t t15 = 255465LL;

    t15 = (((x65/x66)<=x67)/x68);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x71 = 866U;
	uint8_t x72 = UINT8_MAX;

    t16 = (((x69/x70)<=x71)/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = -1;
	static uint16_t x78 = 240U;
	int32_t x79 = -144996;
	static volatile int32_t t17 = -21981;

    t17 = (((x77/x78)<=x79)/x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    

    t18 = (((x81/x82)<=x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x90 = INT64_MIN;
	static int64_t x91 = INT64_MIN;
	static int16_t x92 = -3;
	int32_t t19 = -2;

    t19 = (((x89/x90)<=x91)/x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = -1;
	static uint32_t x94 = 8428U;
	static uint16_t x95 = 384U;
	static int32_t x96 = INT32_MIN;
	int32_t t20 = -1;

    t20 = (((x93/x94)<=x95)/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x97 = INT8_MIN;
	int64_t x98 = -1LL;
	int8_t x99 = INT8_MAX;
	volatile int64_t x100 = INT64_MIN;

    t21 = (((x97/x98)<=x99)/x100);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = INT32_MAX;
	int32_t x102 = INT32_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t22 = 54;

    t22 = (((x101/x102)<=x103)/x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = -1;
	int32_t x106 = INT32_MAX;
	uint64_t x107 = 2679505649496LLU;
	static int64_t x108 = 420LL;
	volatile int64_t t23 = 122990890385287311LL;

    t23 = (((x105/x106)<=x107)/x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x109 = -1LL;
	int16_t x111 = -1;
	uint16_t x112 = 8U;
	int32_t t24 = 1001;

    t24 = (((x109/x110)<=x111)/x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 18U;
	int16_t x115 = -26;
	int8_t x116 = -1;
	volatile int32_t t25 = 9;

    t25 = (((x113/x114)<=x115)/x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 0;
	volatile uint32_t x118 = 519U;
	volatile uint64_t x120 = 245987699LLU;
	uint64_t t26 = 238LLU;

    t26 = (((x117/x118)<=x119)/x120);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x125 = INT32_MIN;
	uint32_t x126 = 1779U;
	int32_t x127 = -238567764;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t27 = -3LL;

    t27 = (((x125/x126)<=x127)/x128);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;

    t28 = (((x129/x130)<=x131)/x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = INT64_MAX;
	volatile int64_t x134 = INT64_MAX;
	volatile uint16_t x135 = 497U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t29 = 413268135LLU;

    t29 = (((x133/x134)<=x135)/x136);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = -85;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 219U;
	volatile int16_t x140 = -121;
	int32_t t30 = 18648;

    t30 = (((x137/x138)<=x139)/x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = -1LL;
	int32_t x143 = -1;
	int8_t x144 = -1;
	volatile int32_t t31 = -4;

    t31 = (((x141/x142)<=x143)/x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = 118307617LLU;
	uint64_t t32 = 45932347LLU;

    t32 = (((x145/x146)<=x147)/x148);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x150 = 91;
	int64_t x152 = INT64_MIN;

    t33 = (((x149/x150)<=x151)/x152);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x153 = -3602;
	int64_t x155 = INT64_MIN;
	int32_t x156 = 3994253;
	int32_t t34 = 894445;

    t34 = (((x153/x154)<=x155)/x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x159 = INT32_MIN;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t35 = -108;

    t35 = (((x157/x158)<=x159)/x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int16_t x164 = -677;
	int32_t t36 = 14;

    t36 = (((x161/x162)<=x163)/x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x166 = 28U;
	int8_t x167 = 4;
	int16_t x168 = INT16_MIN;
	volatile int32_t t37 = -382091;

    t37 = (((x165/x166)<=x167)/x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = -1;
	static uint8_t x170 = UINT8_MAX;
	volatile int8_t x171 = INT8_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t38 = 169820721LLU;

    t38 = (((x169/x170)<=x171)/x172);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x173 = 11U;
	int64_t x174 = -1861230148LL;
	volatile int8_t x175 = INT8_MIN;

    t39 = (((x173/x174)<=x175)/x176);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = 355;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

    t40 = (((x177/x178)<=x179)/x180);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x182 = -1;
	uint32_t x183 = 333U;
	uint16_t x184 = 3U;
	volatile int32_t t41 = 1433194;

    t41 = (((x181/x182)<=x183)/x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 3787LLU;
	int64_t x188 = -1LL;
	int64_t t42 = 230796168538LL;

    t42 = (((x185/x186)<=x187)/x188);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x189 = 5415U;
	int64_t x190 = -4152939071154LL;
	int32_t x191 = -1;
	int8_t x192 = -11;
	volatile int32_t t43 = 9086975;

    t43 = (((x189/x190)<=x191)/x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x194 = 59;
	static int64_t x195 = INT64_MIN;
	volatile int8_t x196 = -1;
	volatile int32_t t44 = -9740340;

    t44 = (((x193/x194)<=x195)/x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x197 = INT64_MAX;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 465;
	int16_t x200 = INT16_MAX;
	int32_t t45 = -12079;

    t45 = (((x197/x198)<=x199)/x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x202 = 13;
	int64_t x203 = INT64_MIN;
	uint32_t x204 = 2U;
	volatile uint32_t t46 = 159U;

    t46 = (((x201/x202)<=x203)/x204);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x205 = 176;
	uint32_t x206 = 619U;
	static int64_t x207 = INT64_MAX;
	uint32_t t47 = 13507257U;

    t47 = (((x205/x206)<=x207)/x208);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	volatile int32_t x212 = -1;
	static volatile int32_t t48 = 6001542;

    t48 = (((x209/x210)<=x211)/x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x213 = 4U;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t49 = 1751025LLU;

    t49 = (((x213/x214)<=x215)/x216);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 11LLU;
	static int64_t x220 = INT64_MAX;
	int64_t t50 = 99696321752LL;

    t50 = (((x217/x218)<=x219)/x220);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x225 = 188649U;
	volatile int64_t x226 = -212412LL;
	volatile int32_t x227 = 3985697;
	int8_t x228 = INT8_MAX;
	static int32_t t51 = -1067402;

    t51 = (((x225/x226)<=x227)/x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x230 = 15;
	uint32_t x231 = 133U;
	int16_t x232 = INT16_MAX;

    t52 = (((x229/x230)<=x231)/x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = -1;
	int32_t x235 = INT32_MIN;
	int32_t x236 = 1306078;
	int32_t t53 = -47001;

    t53 = (((x233/x234)<=x235)/x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = INT32_MIN;
	static uint64_t x239 = 127983LLU;
	static int16_t x240 = INT16_MIN;

    t54 = (((x237/x238)<=x239)/x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x242 = INT8_MIN;
	static volatile int64_t x244 = INT64_MIN;
	volatile int64_t t55 = -198286790491208261LL;

    t55 = (((x241/x242)<=x243)/x244);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x245 = -1LL;
	uint64_t x246 = 10420407LLU;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t56 = 6330;

    t56 = (((x245/x246)<=x247)/x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x253 = UINT32_MAX;
	int16_t x254 = -301;
	static int16_t x255 = INT16_MAX;
	uint32_t x256 = 201233697U;
	uint32_t t57 = 233U;

    t57 = (((x253/x254)<=x255)/x256);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x262 = INT8_MAX;
	int32_t x263 = -122309;
	int32_t x264 = INT32_MIN;
	volatile int32_t t58 = -325315520;

    t58 = (((x261/x262)<=x263)/x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x266 = -10091;
	volatile uint8_t x267 = 12U;
	int64_t x268 = INT64_MIN;
	int64_t t59 = -264LL;

    t59 = (((x265/x266)<=x267)/x268);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x269 = 5U;
	uint32_t x270 = 174U;
	int8_t x271 = -4;
	volatile uint64_t t60 = 16513LLU;

    t60 = (((x269/x270)<=x271)/x272);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x273 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MAX;
	int64_t t61 = -2850515LL;

    t61 = (((x273/x274)<=x275)/x276);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x278 = 7U;
	int16_t x279 = -14000;
	volatile uint32_t t62 = 11893U;

    t62 = (((x277/x278)<=x279)/x280);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x281 = 2007U;
	int16_t x282 = INT16_MIN;
	volatile uint32_t t63 = 58543428U;

    t63 = (((x281/x282)<=x283)/x284);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = 1;
	int16_t x287 = -7;
	uint16_t x288 = UINT16_MAX;

    t64 = (((x285/x286)<=x287)/x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = -1;
	int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	volatile int32_t t65 = 1250718;

    t65 = (((x289/x290)<=x291)/x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = -1LL;
	uint64_t x295 = 1557674070LLU;
	static uint8_t x296 = 38U;
	volatile int32_t t66 = -379010;

    t66 = (((x293/x294)<=x295)/x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = 48;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t67 = 391746;

    t67 = (((x297/x298)<=x299)/x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x301 = 54U;
	uint64_t x302 = UINT64_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t68 = 1532;

    t68 = (((x301/x302)<=x303)/x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = 59U;
	int32_t x306 = INT32_MIN;
	static volatile uint16_t x307 = UINT16_MAX;
	static int32_t x308 = 45;
	volatile int32_t t69 = -12054422;

    t69 = (((x305/x306)<=x307)/x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x309 = INT64_MIN;
	uint16_t x311 = 70U;
	int32_t x312 = -1;
	int32_t t70 = -5;

    t70 = (((x309/x310)<=x311)/x312);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x313 = INT64_MIN;
	volatile uint32_t x314 = 1794U;
	int32_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t71 = 2475U;

    t71 = (((x313/x314)<=x315)/x316);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x317 = INT64_MIN;
	volatile int64_t x318 = -14649783560LL;
	int64_t x319 = INT64_MIN;
	static int64_t x320 = -686034153105184LL;
	int64_t t72 = -6LL;

    t72 = (((x317/x318)<=x319)/x320);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	static int32_t x323 = 3227;
	static int64_t x324 = 5LL;
	volatile int64_t t73 = -325796042923161LL;

    t73 = (((x321/x322)<=x323)/x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = -1774;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t74 = -4735409;

    t74 = (((x333/x334)<=x335)/x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = 526U;
	volatile uint16_t x339 = UINT16_MAX;
	int64_t x340 = 39534900968LL;
	volatile int64_t t75 = -5LL;

    t75 = (((x337/x338)<=x339)/x340);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = -6;
	volatile int32_t x342 = INT32_MIN;
	static volatile uint64_t x343 = UINT64_MAX;
	volatile int32_t t76 = 279241447;

    t76 = (((x341/x342)<=x343)/x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x345 = INT8_MAX;
	uint8_t x346 = 5U;
	int16_t x347 = -1;
	int8_t x348 = -1;
	int32_t t77 = 591734;

    t77 = (((x345/x346)<=x347)/x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x350 = -8285859939263LL;
	static volatile uint8_t x351 = 1U;
	int16_t x352 = -1;
	int32_t t78 = -157291;

    t78 = (((x349/x350)<=x351)/x352);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x354 = 12092LL;
	int32_t x355 = INT32_MIN;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t79 = 1;

    t79 = (((x353/x354)<=x355)/x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	volatile uint32_t t80 = 176285U;

    t80 = (((x361/x362)<=x363)/x364);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x365 = -1;
	volatile int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MIN;

    t81 = (((x365/x366)<=x367)/x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x369 = -1LL;
	int16_t x370 = 2547;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t82 = 318;

    t82 = (((x369/x370)<=x371)/x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x373 = INT16_MIN;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = 237610U;
	uint16_t x376 = 388U;
	int32_t t83 = -67167;

    t83 = (((x373/x374)<=x375)/x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	uint32_t x380 = 28U;

    t84 = (((x377/x378)<=x379)/x380);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = INT8_MAX;
	uint16_t x382 = 26U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t85 = 9;

    t85 = (((x381/x382)<=x383)/x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x385 = 0;
	static int16_t x386 = -1;
	int8_t x388 = -10;

    t86 = (((x385/x386)<=x387)/x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MIN;
	volatile int8_t x391 = 1;
	static int64_t x392 = -1LL;
	int64_t t87 = 1686775LL;

    t87 = (((x389/x390)<=x391)/x392);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x393 = 23142U;
	int32_t x394 = -30787;
	int64_t x395 = -12841782564535LL;
	volatile int64_t x396 = -1LL;
	static int64_t t88 = 75284334718697027LL;

    t88 = (((x393/x394)<=x395)/x396);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x401 = INT16_MAX;
	volatile int8_t x403 = INT8_MIN;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t89 = -318714800;

    t89 = (((x401/x402)<=x403)/x404);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x406 = INT8_MIN;
	static int32_t x407 = -1184;
	int64_t x408 = 230LL;
	volatile int64_t t90 = -5LL;

    t90 = (((x405/x406)<=x407)/x408);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x409 = 2LLU;
	uint32_t x410 = 193382U;

    t91 = (((x409/x410)<=x411)/x412);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x413 = 98001U;
	int64_t x414 = INT64_MIN;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t x416 = INT32_MAX;

    t92 = (((x413/x414)<=x415)/x416);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x417 = 15358211129780613LL;
	static int64_t x418 = -1LL;
	int64_t x419 = INT64_MIN;
	uint64_t x420 = 156LLU;

    t93 = (((x417/x418)<=x419)/x420);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x421 = 0U;
	static uint16_t x422 = 6595U;
	static uint64_t x424 = 154249LLU;
	uint64_t t94 = 874LLU;

    t94 = (((x421/x422)<=x423)/x424);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x426 = 10770011304LLU;
	int64_t x427 = INT64_MIN;
	int64_t x428 = -1LL;
	static volatile int64_t t95 = -84LL;

    t95 = (((x425/x426)<=x427)/x428);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x429 = 665U;
	volatile uint32_t x431 = 1392487366U;
	int16_t x432 = INT16_MIN;
	int32_t t96 = 124;

    t96 = (((x429/x430)<=x431)/x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x433 = INT8_MIN;
	volatile uint32_t x434 = 47420531U;
	uint64_t x435 = 232LLU;
	int32_t x436 = INT32_MIN;
	volatile int32_t t97 = 614156;

    t97 = (((x433/x434)<=x435)/x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MIN;
	volatile uint8_t x442 = 3U;
	volatile int32_t t98 = -296;

    t98 = (((x441/x442)<=x443)/x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x445 = UINT32_MAX;
	static int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MAX;

    t99 = (((x445/x446)<=x447)/x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x449 = 206404LL;
	int16_t x452 = 1235;
	int32_t t100 = -1;

    t100 = (((x449/x450)<=x451)/x452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x453 = INT64_MIN;
	static int32_t x454 = 31315893;
	uint64_t x455 = 6167797927LLU;
	uint16_t x456 = UINT16_MAX;
	static volatile int32_t t101 = -3098881;

    t101 = (((x453/x454)<=x455)/x456);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x457 = 9044384;
	uint64_t x458 = 30LLU;
	uint8_t x459 = 39U;
	uint32_t x460 = 22553874U;

    t102 = (((x457/x458)<=x459)/x460);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x461 = 489U;
	int32_t x462 = INT32_MAX;
	volatile int64_t x463 = INT64_MAX;
	uint8_t x464 = 1U;
	int32_t t103 = 855219;

    t103 = (((x461/x462)<=x463)/x464);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x467 = 1LL;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t104 = -65980929;

    t104 = (((x465/x466)<=x467)/x468);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x473 = 1564;
	int64_t x475 = -256902539362LL;
	int64_t x476 = INT64_MIN;
	int64_t t105 = -1015658203838574LL;

    t105 = (((x473/x474)<=x475)/x476);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x478 = 11236474U;
	uint8_t x479 = 2U;
	uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t106 = 7LLU;

    t106 = (((x477/x478)<=x479)/x480);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x481 = -13337;
	volatile int8_t x483 = INT8_MIN;
	int16_t x484 = 453;

    t107 = (((x481/x482)<=x483)/x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x485 = UINT16_MAX;
	volatile uint32_t x486 = 5965U;
	int64_t x487 = -3822140622214LL;
	uint16_t x488 = UINT16_MAX;

    t108 = (((x485/x486)<=x487)/x488);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int64_t x490 = INT64_MIN;
	uint16_t x491 = UINT16_MAX;
	uint64_t x492 = 144043401LLU;
	uint64_t t109 = 29180687958228LLU;

    t109 = (((x489/x490)<=x491)/x492);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x493 = INT64_MAX;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = 103541061592679063LLU;
	int32_t x496 = 52;

    t110 = (((x493/x494)<=x495)/x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x497 = 79363;
	int8_t x498 = -46;
	int16_t x499 = INT16_MAX;
	static uint32_t x500 = 1U;
	uint32_t t111 = 8299885U;

    t111 = (((x497/x498)<=x499)/x500);

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x501 = INT16_MAX;
	int64_t x503 = 24190014780788LL;
	int8_t x504 = INT8_MIN;
	volatile int32_t t112 = -3262;

    t112 = (((x501/x502)<=x503)/x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x505 = UINT64_MAX;
	uint64_t x506 = 430LLU;
	uint32_t x507 = UINT32_MAX;

    t113 = (((x505/x506)<=x507)/x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x509 = UINT16_MAX;
	static uint64_t x510 = UINT64_MAX;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = -1;
	int32_t t114 = 54;

    t114 = (((x509/x510)<=x511)/x512);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x514 = INT32_MIN;
	static int16_t x515 = INT16_MAX;
	static uint32_t x516 = 16180U;
	volatile uint32_t t115 = 5561035U;

    t115 = (((x513/x514)<=x515)/x516);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x517 = UINT32_MAX;
	uint32_t x518 = 50176U;
	int16_t x520 = INT16_MAX;
	static int32_t t116 = 638463;

    t116 = (((x517/x518)<=x519)/x520);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x521 = INT16_MIN;
	int32_t x522 = INT32_MIN;
	volatile uint16_t x523 = 1U;

    t117 = (((x521/x522)<=x523)/x524);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x529 = 1496U;
	volatile int8_t x532 = 59;
	volatile int32_t t118 = 23957;

    t118 = (((x529/x530)<=x531)/x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x533 = INT32_MIN;
	volatile int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MIN;
	volatile int16_t x536 = 27;
	static int32_t t119 = -199;

    t119 = (((x533/x534)<=x535)/x536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MAX;
	volatile uint64_t x543 = 265463877LLU;
	int16_t x544 = INT16_MIN;

    t120 = (((x541/x542)<=x543)/x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x549 = 105U;
	int16_t x550 = INT16_MIN;
	int16_t x551 = -1;
	uint64_t x552 = UINT64_MAX;

    t121 = (((x549/x550)<=x551)/x552);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MAX;
	int64_t x554 = -2045636067LL;
	uint8_t x555 = 35U;
	int64_t x556 = INT64_MIN;
	volatile int64_t t122 = -47412775582453LL;

    t122 = (((x553/x554)<=x555)/x556);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x557 = 929537582225489513LL;
	volatile int64_t x559 = -1LL;
	static volatile uint8_t x560 = 48U;

    t123 = (((x557/x558)<=x559)/x560);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x561 = 14562U;
	static int64_t x562 = INT64_MIN;
	int32_t x563 = INT32_MIN;
	static int32_t x564 = -5;
	int32_t t124 = 456584;

    t124 = (((x561/x562)<=x563)/x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x565 = -57678247814905052LL;
	uint64_t x566 = UINT64_MAX;
	int64_t x567 = INT64_MIN;
	static uint16_t x568 = 10U;

    t125 = (((x565/x566)<=x567)/x568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x569 = -1;
	volatile int8_t x570 = 4;
	uint16_t x571 = 5U;
	int32_t x572 = -107228518;

    t126 = (((x569/x570)<=x571)/x572);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x574 = 5U;
	int64_t x575 = -1LL;
	int32_t t127 = -85;

    t127 = (((x573/x574)<=x575)/x576);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x577 = 2450LLU;
	int16_t x578 = 3;
	volatile uint8_t x579 = UINT8_MAX;
	static int64_t x580 = -3262LL;
	static volatile int64_t t128 = 41587639890824987LL;

    t128 = (((x577/x578)<=x579)/x580);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x582 = UINT16_MAX;
	int8_t x584 = INT8_MAX;
	volatile int32_t t129 = -80189481;

    t129 = (((x581/x582)<=x583)/x584);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x589 = 444LLU;
	int16_t x591 = -1;
	int32_t x592 = -1;
	int32_t t130 = 27;

    t130 = (((x589/x590)<=x591)/x592);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x595 = INT8_MAX;
	int32_t t131 = 0;

    t131 = (((x593/x594)<=x595)/x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = -918;
	uint16_t x598 = 2U;
	int32_t x599 = -1;
	uint8_t x600 = 1U;
	int32_t t132 = 0;

    t132 = (((x597/x598)<=x599)/x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x601 = UINT16_MAX;
	uint32_t x602 = 14662864U;
	int64_t x603 = -1LL;
	int16_t x604 = INT16_MIN;
	volatile int32_t t133 = -45019774;

    t133 = (((x601/x602)<=x603)/x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x605 = INT64_MIN;
	int8_t x606 = INT8_MIN;
	int8_t x608 = INT8_MIN;
	int32_t t134 = 1;

    t134 = (((x605/x606)<=x607)/x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x609 = -793472;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = UINT8_MAX;
	static int32_t t135 = 2542009;

    t135 = (((x609/x610)<=x611)/x612);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = -16;
	volatile int64_t x614 = -1LL;
	uint32_t x615 = 882U;
	int64_t x616 = INT64_MIN;
	int64_t t136 = -39504178712503978LL;

    t136 = (((x613/x614)<=x615)/x616);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x617 = INT64_MAX;
	int32_t x618 = INT32_MAX;
	int16_t x620 = -1;
	static volatile int32_t t137 = 224;

    t137 = (((x617/x618)<=x619)/x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x621 = 49U;
	int8_t x622 = INT8_MIN;
	uint8_t x624 = 79U;
	static volatile int32_t t138 = -24657;

    t138 = (((x621/x622)<=x623)/x624);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x625 = 0;
	volatile uint16_t x626 = 136U;
	uint64_t x627 = UINT64_MAX;
	uint64_t x628 = UINT64_MAX;
	uint64_t t139 = 3382384542576560LLU;

    t139 = (((x625/x626)<=x627)/x628);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x629 = -1;
	static int8_t x631 = -1;
	static int64_t x632 = INT64_MIN;

    t140 = (((x629/x630)<=x631)/x632);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    

    t141 = (((x633/x634)<=x635)/x636);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x637 = INT64_MAX;
	volatile int16_t x638 = -1;
	int32_t x639 = INT32_MAX;
	static int32_t t142 = -28;

    t142 = (((x637/x638)<=x639)/x640);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x642 = 397U;
	int16_t x643 = -1;
	volatile uint64_t t143 = 17216272LLU;

    t143 = (((x641/x642)<=x643)/x644);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x645 = -1;
	int8_t x646 = INT8_MIN;
	int64_t x647 = -28442208107065000LL;
	int8_t x648 = 1;

    t144 = (((x645/x646)<=x647)/x648);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x649 = UINT16_MAX;
	int8_t x650 = INT8_MAX;
	int8_t x651 = 13;
	static uint8_t x652 = 11U;
	static volatile int32_t t145 = -7849549;

    t145 = (((x649/x650)<=x651)/x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x653 = 0U;
	volatile int16_t x655 = INT16_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t146 = -5306;

    t146 = (((x653/x654)<=x655)/x656);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x657 = INT32_MIN;
	volatile int64_t x658 = INT64_MIN;
	int32_t x659 = -1;
	int32_t x660 = INT32_MIN;
	int32_t t147 = -3654;

    t147 = (((x657/x658)<=x659)/x660);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x663 = 446;
	uint32_t x664 = UINT32_MAX;

    t148 = (((x661/x662)<=x663)/x664);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint64_t x666 = UINT64_MAX;
	int16_t x667 = 96;
	static volatile uint32_t t149 = 5650U;

    t149 = (((x665/x666)<=x667)/x668);

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x673 = INT64_MAX;
	static uint32_t x674 = UINT32_MAX;
	int8_t x675 = INT8_MAX;
	volatile int32_t t150 = 1;

    t150 = (((x673/x674)<=x675)/x676);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x677 = INT16_MAX;
	volatile int32_t x678 = INT32_MIN;
	int64_t x679 = 29072LL;
	int16_t x680 = INT16_MAX;
	int32_t t151 = 204787196;

    t151 = (((x677/x678)<=x679)/x680);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x681 = UINT16_MAX;
	static volatile uint8_t x682 = 11U;
	int8_t x684 = -1;

    t152 = (((x681/x682)<=x683)/x684);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x686 = -1;
	uint64_t x687 = UINT64_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t153 = 16853;

    t153 = (((x685/x686)<=x687)/x688);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MAX;
	static int64_t x692 = 17596336689981168LL;
	int64_t t154 = 4193472079443484806LL;

    t154 = (((x689/x690)<=x691)/x692);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x693 = INT8_MAX;
	uint16_t x694 = 13U;
	int8_t x695 = INT8_MIN;
	int64_t x696 = 31LL;
	int64_t t155 = -2705302249478707339LL;

    t155 = (((x693/x694)<=x695)/x696);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x697 = 5167;
	volatile int32_t x699 = -1;
	int8_t x700 = INT8_MIN;
	static volatile int32_t t156 = -836;

    t156 = (((x697/x698)<=x699)/x700);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x701 = -1;
	uint16_t x703 = 32U;
	static int8_t x704 = INT8_MIN;
	volatile int32_t t157 = 974;

    t157 = (((x701/x702)<=x703)/x704);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MIN;
	volatile int32_t t158 = -32;

    t158 = (((x705/x706)<=x707)/x708);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x709 = INT16_MAX;
	int16_t x710 = INT16_MIN;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t159 = -15393;

    t159 = (((x709/x710)<=x711)/x712);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x713 = -1;
	int16_t x714 = 38;
	volatile uint8_t x716 = 13U;
	int32_t t160 = -23525;

    t160 = (((x713/x714)<=x715)/x716);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x717 = UINT32_MAX;
	int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MAX;
	int64_t x720 = INT64_MIN;

    t161 = (((x717/x718)<=x719)/x720);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x721 = INT8_MIN;
	int8_t x722 = 1;
	volatile int32_t x724 = -1;
	int32_t t162 = 59;

    t162 = (((x721/x722)<=x723)/x724);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x726 = 4U;
	volatile int16_t x727 = INT16_MAX;
	volatile uint32_t x728 = 7849295U;
	volatile uint32_t t163 = 14728U;

    t163 = (((x725/x726)<=x727)/x728);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x729 = 14114LLU;
	int16_t x730 = -3136;
	volatile int32_t t164 = 3243130;

    t164 = (((x729/x730)<=x731)/x732);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x733 = 5U;
	int8_t x735 = INT8_MAX;
	volatile int32_t t165 = 239;

    t165 = (((x733/x734)<=x735)/x736);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x738 = INT16_MIN;
	int8_t x739 = INT8_MIN;
	static int8_t x740 = INT8_MIN;

    t166 = (((x737/x738)<=x739)/x740);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x742 = UINT8_MAX;
	uint64_t x743 = 53311LLU;
	static uint16_t x744 = 10596U;
	volatile int32_t t167 = 2781327;

    t167 = (((x741/x742)<=x743)/x744);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x749 = -1;
	int64_t t168 = -92047111458518127LL;

    t168 = (((x749/x750)<=x751)/x752);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x753 = -1;
	uint64_t x756 = 87267577138LLU;
	static uint64_t t169 = 1063246LLU;

    t169 = (((x753/x754)<=x755)/x756);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x757 = INT32_MAX;
	int8_t x758 = INT8_MAX;
	static uint32_t x759 = 499168447U;
	static uint64_t x760 = UINT64_MAX;
	uint64_t t170 = 1LLU;

    t170 = (((x757/x758)<=x759)/x760);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x761 = 1U;
	int8_t x762 = -1;
	uint16_t x763 = 51U;
	volatile int16_t x764 = -1;

    t171 = (((x761/x762)<=x763)/x764);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x765 = UINT64_MAX;
	volatile int8_t x766 = 24;
	uint64_t x767 = 1882075LLU;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t172 = 553;

    t172 = (((x765/x766)<=x767)/x768);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x769 = 95U;
	volatile int16_t x770 = INT16_MAX;
	int8_t x771 = INT8_MIN;
	volatile int32_t x772 = -33909;
	static int32_t t173 = -4;

    t173 = (((x769/x770)<=x771)/x772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x773 = -8364;
	uint32_t x774 = 273824942U;
	volatile int16_t x776 = -1;

    t174 = (((x773/x774)<=x775)/x776);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x777 = 1550U;
	int32_t x778 = 6610;
	int64_t x779 = -1794675LL;
	uint64_t x780 = 109591902525LLU;
	volatile uint64_t t175 = 438454761LLU;

    t175 = (((x777/x778)<=x779)/x780);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x782 = 7U;
	int64_t x783 = INT64_MAX;
	static int32_t t176 = -1794543;

    t176 = (((x781/x782)<=x783)/x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x786 = 1U;
	int8_t x787 = INT8_MIN;
	uint8_t x788 = 4U;
	int32_t t177 = 1;

    t177 = (((x785/x786)<=x787)/x788);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x789 = -1LL;
	uint64_t x790 = UINT64_MAX;
	int16_t x791 = -1;
	int32_t x792 = 3;
	static int32_t t178 = 66819089;

    t178 = (((x789/x790)<=x791)/x792);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x793 = 1LLU;
	static int32_t x794 = 333;
	static int8_t x795 = 0;
	volatile int32_t t179 = -7945245;

    t179 = (((x793/x794)<=x795)/x796);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x797 = INT8_MIN;
	uint8_t x798 = 1U;
	int32_t x800 = INT32_MIN;
	volatile int32_t t180 = 2161;

    t180 = (((x797/x798)<=x799)/x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = INT16_MIN;
	int64_t x804 = -1LL;
	int64_t t181 = -1LL;

    t181 = (((x801/x802)<=x803)/x804);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x805 = 9833516065LL;
	static int64_t x806 = INT64_MAX;
	int64_t x807 = INT64_MIN;
	int32_t t182 = 15;

    t182 = (((x805/x806)<=x807)/x808);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x810 = INT64_MAX;
	int64_t x811 = -1LL;
	int32_t t183 = 697549088;

    t183 = (((x809/x810)<=x811)/x812);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x813 = 982083259U;
	int32_t x814 = INT32_MIN;
	uint64_t x815 = 699LLU;
	static int32_t x816 = -1;
	volatile int32_t t184 = -1;

    t184 = (((x813/x814)<=x815)/x816);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x818 = INT64_MIN;
	volatile uint16_t x820 = 2386U;

    t185 = (((x817/x818)<=x819)/x820);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x821 = 7U;
	int8_t x823 = -1;
	int32_t t186 = 463951;

    t186 = (((x821/x822)<=x823)/x824);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x825 = 37912;
	volatile int8_t x826 = INT8_MAX;
	volatile int8_t x828 = INT8_MIN;
	volatile int32_t t187 = -721;

    t187 = (((x825/x826)<=x827)/x828);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x829 = 6750U;
	int64_t x830 = INT64_MIN;
	static volatile int32_t t188 = -9068;

    t188 = (((x829/x830)<=x831)/x832);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x833 = 59326812434LLU;
	uint16_t x834 = UINT16_MAX;
	int8_t x835 = -1;
	int16_t x836 = INT16_MAX;
	volatile int32_t t189 = 0;

    t189 = (((x833/x834)<=x835)/x836);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x841 = INT8_MAX;
	int32_t x843 = INT32_MAX;
	volatile int16_t x844 = -1;
	int32_t t190 = 810;

    t190 = (((x841/x842)<=x843)/x844);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x845 = 14U;
	uint64_t x846 = 18LLU;
	volatile int32_t x847 = 164564296;
	static volatile int32_t t191 = 1;

    t191 = (((x845/x846)<=x847)/x848);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x850 = -1;
	int8_t x852 = 7;
	int32_t t192 = -4835;

    t192 = (((x849/x850)<=x851)/x852);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x853 = UINT8_MAX;
	volatile uint8_t x854 = 15U;
	int8_t x855 = 1;
	int8_t x856 = INT8_MIN;
	int32_t t193 = -6879593;

    t193 = (((x853/x854)<=x855)/x856);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x857 = 1U;
	int64_t x858 = -125514275061162LL;
	uint32_t x859 = 4797U;
	int32_t x860 = -1;
	volatile int32_t t194 = -450483;

    t194 = (((x857/x858)<=x859)/x860);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x861 = UINT32_MAX;
	int8_t x864 = INT8_MAX;
	volatile int32_t t195 = 807741316;

    t195 = (((x861/x862)<=x863)/x864);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x865 = -245;
	static volatile int16_t x866 = INT16_MIN;
	volatile int64_t x867 = INT64_MIN;
	int8_t x868 = -57;
	static int32_t t196 = 0;

    t196 = (((x865/x866)<=x867)/x868);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x869 = -523;
	uint8_t x870 = UINT8_MAX;
	uint16_t x871 = 2U;
	uint32_t x872 = 14U;
	static volatile uint32_t t197 = 0U;

    t197 = (((x869/x870)<=x871)/x872);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x873 = UINT8_MAX;
	volatile int8_t x874 = INT8_MAX;
	int16_t x876 = 130;
	volatile int32_t t198 = 450987358;

    t198 = (((x873/x874)<=x875)/x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x878 = 4U;
	static volatile int16_t x879 = INT16_MAX;
	int64_t x880 = INT64_MIN;
	static int64_t t199 = 411639815473985894LL;

    t199 = (((x877/x878)<=x879)/x880);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

