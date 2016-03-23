
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

int32_t t1 = 0;
int64_t x10 = INT64_MIN;
uint32_t x11 = 112304203U;
int8_t x12 = INT8_MIN;
uint32_t t2 = 1U;
int64_t x17 = INT64_MIN;
static uint8_t x20 = UINT8_MAX;
volatile int64_t t4 = 231323280LL;
int64_t x22 = -1LL;
volatile uint8_t x23 = 0U;
static volatile int16_t x30 = INT16_MAX;
volatile uint64_t t7 = 491LLU;
int64_t x34 = INT64_MAX;
static volatile int32_t t8 = -10394645;
volatile int64_t x38 = -29LL;
volatile int64_t t9 = -2LL;
uint8_t x53 = UINT8_MAX;
int64_t t13 = -60623784036647806LL;
static volatile int8_t x60 = 5;
volatile int64_t t14 = 668655150LL;
static int16_t x73 = -1;
int16_t x81 = 1;
int64_t x82 = -5076LL;
volatile int64_t t22 = -4279352887372LL;
uint16_t x93 = 490U;
uint64_t t23 = 13498337812LLU;
int16_t x99 = INT16_MIN;
int32_t x104 = -1;
uint32_t x105 = UINT32_MAX;
static int16_t x112 = INT16_MAX;
volatile uint32_t t31 = 934765U;
uint32_t x129 = 834307U;
uint32_t x147 = 54291U;
int16_t x153 = INT16_MIN;
int32_t x158 = 831009;
int32_t x159 = INT32_MAX;
static volatile int32_t t40 = 363011;
int16_t x168 = INT16_MIN;
int8_t x170 = -10;
int32_t x172 = -1;
uint64_t x175 = 118392361691443242LLU;
uint8_t x177 = 8U;
uint64_t x179 = 109405089333909248LLU;
volatile uint32_t x182 = 116382800U;
int64_t x184 = INT64_MAX;
int8_t x185 = -3;
static uint8_t x193 = 123U;
static int32_t x194 = -1;
volatile int32_t t49 = -1673;
volatile int32_t x210 = INT32_MIN;
volatile int64_t t53 = 567LL;
volatile uint32_t x219 = UINT32_MAX;
uint16_t x221 = 1U;
static int16_t x223 = INT16_MIN;
uint64_t x230 = 30822526097374LLU;
uint8_t x231 = 98U;
volatile int16_t x236 = INT16_MIN;
int64_t t58 = 73955LL;
volatile uint16_t x238 = 26423U;
uint16_t x241 = 14243U;
volatile uint32_t t60 = UINT32_MAX;
int16_t x247 = INT16_MIN;
int16_t x250 = INT16_MAX;
int8_t x256 = INT8_MIN;
int32_t x258 = INT32_MAX;
static uint8_t x265 = UINT8_MAX;
volatile int8_t x267 = INT8_MAX;
int8_t x271 = 18;
uint8_t x272 = 0U;
uint16_t x274 = UINT16_MAX;
int64_t x275 = INT64_MIN;
uint32_t x276 = 2334U;
static volatile int64_t t68 = 27036206144LL;
volatile uint64_t x278 = 7176471986104LLU;
static uint64_t t70 = 66155230966LLU;
static volatile int32_t t73 = -31166;
int64_t x311 = -1LL;
static int64_t x321 = -149261221233710254LL;
volatile int8_t x334 = 5;
uint64_t x337 = 270LLU;
static volatile int64_t t86 = -531333001LL;
int64_t x349 = INT64_MIN;
int64_t x350 = INT64_MIN;
uint8_t x369 = UINT8_MAX;
uint32_t x370 = 960U;
uint64_t x374 = 13346589069LLU;
int8_t x384 = -31;
volatile int32_t t95 = 7618;
uint32_t x386 = UINT32_MAX;
int64_t x387 = INT64_MIN;
int64_t x389 = INT64_MIN;
volatile int8_t x391 = -1;
volatile int64_t t98 = -444922493LL;
int16_t x400 = INT16_MAX;
volatile int32_t t99 = 0;
static int64_t x401 = 220557LL;
int32_t x405 = INT32_MIN;
int16_t x412 = 814;
static int16_t x413 = -1;
int32_t x414 = INT32_MIN;
int32_t t106 = 128193388;
static uint8_t x429 = 59U;
uint64_t x434 = 148568LLU;
int16_t x441 = INT16_MIN;
int32_t x450 = -1;
int8_t x451 = -1;
uint8_t x455 = UINT8_MAX;
static int32_t x456 = -4468;
int64_t x458 = -27844665LL;
static uint16_t x464 = 3824U;
uint8_t x466 = 1U;
volatile int16_t x471 = INT16_MAX;
static int8_t x477 = INT8_MAX;
int16_t x485 = INT16_MIN;
int8_t x486 = INT8_MIN;
int64_t x496 = INT64_MIN;
volatile int64_t t124 = 44LL;
uint16_t x503 = UINT16_MAX;
volatile uint64_t t126 = 25LLU;
int32_t x509 = INT32_MIN;
volatile uint16_t x511 = 963U;
int32_t x512 = INT32_MAX;
int32_t x514 = INT32_MAX;
static int32_t x521 = INT32_MIN;
volatile int32_t x529 = 12668079;
uint32_t x531 = 1U;
volatile uint64_t x533 = 238607LLU;
int64_t x536 = -1LL;
volatile uint32_t x537 = UINT32_MAX;
uint64_t x540 = 240647206445632490LLU;
int8_t x542 = INT8_MIN;
static int32_t t135 = 1043427873;
int16_t x550 = 3;
int32_t t140 = 606532609;
uint16_t x567 = 7U;
volatile uint64_t t142 = 1770117LLU;
uint32_t t143 = 3508U;
int64_t x577 = -1LL;
int16_t x578 = INT16_MIN;
int16_t x579 = INT16_MAX;
uint16_t x584 = 29614U;
int32_t t145 = -707263803;
int8_t x593 = INT8_MAX;
static uint8_t x595 = 0U;
static int32_t x596 = INT32_MAX;
int16_t x599 = INT16_MIN;
static int32_t t150 = 256266;
uint32_t x605 = 2018954U;
int8_t x608 = 22;
static int32_t t151 = -316;
uint32_t x618 = 11860987U;
static int16_t x647 = INT16_MIN;
volatile int64_t x649 = -1LL;
int8_t x652 = INT8_MIN;
static int64_t t163 = -10LL;
volatile uint16_t x658 = 15U;
int8_t x659 = -13;
uint8_t x661 = 14U;
int16_t x663 = INT16_MIN;
static int16_t x666 = INT16_MAX;
int32_t x669 = INT32_MIN;
int64_t x670 = -292000LL;
uint64_t x671 = 1046543240184LLU;
uint32_t x673 = 63412556U;
volatile int8_t x679 = 3;
volatile int8_t x680 = -2;
int16_t x681 = INT16_MAX;
int16_t x682 = 114;
volatile int8_t x683 = -3;
int32_t t170 = 3;
int8_t x698 = INT8_MIN;
int32_t x701 = -1;
int32_t t175 = -9019078;
int64_t t179 = 5445052810314LL;
int8_t x731 = -1;
int64_t x732 = -6LL;
int8_t x747 = -2;
volatile uint64_t t186 = 2518820615925LLU;
static uint64_t x755 = UINT64_MAX;
int32_t t189 = -575198083;
static volatile int16_t x765 = 72;
int32_t x771 = 131;
volatile uint32_t x778 = 56739U;
int8_t x779 = INT8_MIN;
static int16_t x781 = 35;
int16_t x784 = 12;
int8_t x785 = INT8_MAX;
volatile int32_t x786 = -917632;
volatile uint32_t x792 = 9U;
uint32_t t197 = 8043U;
int8_t x795 = -1;
static volatile int16_t x796 = INT16_MAX;
int32_t x799 = INT32_MIN;
volatile uint16_t x800 = 863U;


void f0(void) {
    	volatile uint16_t x1 = 0U;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 6LL;

    t0 = ((x1>x2)|(x3^x4));

    if (t0 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int64_t x6 = -1LL;
	int8_t x7 = 10;
	int8_t x8 = -60;

    t1 = ((x5>x6)|(x7^x8));

    if (t1 != -50) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;

    t2 = ((x9>x10)|(x11^x12));

    if (t2 != 4182663115U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	static int16_t x14 = -1;
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = -1LL;
	volatile int64_t t3 = -1385889LL;

    t3 = ((x13>x14)|(x15^x16));

    if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = 76;
	static int64_t x19 = 17838433LL;

    t4 = ((x17>x18)|(x19^x20));

    if (t4 != 17838494LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x21 = INT64_MIN;
	volatile int32_t x24 = -2412021;
	volatile int32_t t5 = -2837766;

    t5 = ((x21>x22)|(x23^x24));

    if (t5 != -2412021) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -1;
	int8_t x27 = -10;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 9;

    t6 = ((x25>x26)|(x27^x28));

    if (t6 != -247) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 1589062402177LL;
	volatile int32_t x31 = -1;
	uint64_t x32 = 495162797818LLU;

    t7 = ((x29>x30)|(x31^x32));

    if (t7 != 18446743578546753797LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -2;
	int32_t x35 = 1209;
	volatile int32_t x36 = -1;

    t8 = ((x33>x34)|(x35^x36));

    if (t8 != -1210) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 6797855063388314LLU;
	static int16_t x39 = INT16_MIN;
	static volatile int64_t x40 = 129365730340LL;

    t9 = ((x37>x38)|(x39^x40));

    if (t9 != -129365711836LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 120040408500580LLU;
	volatile uint16_t x42 = 758U;
	int64_t x43 = INT64_MIN;
	int16_t x44 = -57;
	int64_t t10 = -856889338835LL;

    t10 = ((x41>x42)|(x43^x44));

    if (t10 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -423;
	int32_t x46 = INT32_MAX;
	uint64_t x47 = 1009997641734LLU;
	int32_t x48 = INT32_MIN;
	uint64_t t11 = 12905921765752387LLU;

    t11 = ((x45>x46)|(x47^x48));

    if (t11 != 18446743062925080582LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	int32_t x50 = -143845331;
	int64_t x51 = -1LL;
	volatile uint8_t x52 = UINT8_MAX;
	int64_t t12 = -457956LL;

    t12 = ((x49>x50)|(x51^x52));

    if (t12 != -255LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x54 = INT16_MAX;
	static int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MIN;

    t13 = ((x53>x54)|(x55^x56));

    if (t13 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 173;
	uint16_t x58 = UINT16_MAX;
	static int64_t x59 = -136736575346750LL;

    t14 = ((x57>x58)|(x59^x60));

    if (t14 != -136736575346745LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	volatile int32_t x62 = -518;
	int64_t x63 = -1581497012LL;
	int16_t x64 = INT16_MIN;
	int64_t t15 = 2813131LL;

    t15 = ((x61>x62)|(x63^x64));

    if (t15 != 1581499725LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	int32_t x66 = INT32_MAX;
	int64_t x67 = -2446766919814LL;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t16 = -12645759LL;

    t16 = ((x65>x66)|(x67^x68));

    if (t16 != -2446766944123LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MIN;
	volatile int64_t x70 = -3460740864741317935LL;
	uint16_t x71 = 17U;
	static int32_t x72 = 984387;
	int32_t t17 = 6510;

    t17 = ((x69>x70)|(x71^x72));

    if (t17 != 984402) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x74 = -9;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 1819020;

    t18 = ((x73>x74)|(x75^x76));

    if (t18 != -32641) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = 57090191U;
	int8_t x79 = -1;
	int8_t x80 = -40;
	volatile int32_t t19 = -843150;

    t19 = ((x77>x78)|(x79^x80));

    if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x83 = -1LL;
	int8_t x84 = 0;
	volatile int64_t t20 = 2LL;

    t20 = ((x81>x82)|(x83^x84));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 28269825512436LLU;
	volatile int8_t x86 = -39;
	volatile int64_t x87 = INT64_MIN;
	static int32_t x88 = INT32_MIN;
	static int64_t t21 = 23647085938677LL;

    t21 = ((x85>x86)|(x87^x88));

    if (t21 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	static int8_t x90 = -5;
	int64_t x91 = INT64_MIN;
	volatile uint16_t x92 = UINT16_MAX;

    t22 = ((x89>x90)|(x91^x92));

    if (t22 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = 8U;
	int32_t x95 = INT32_MIN;
	volatile uint64_t x96 = UINT64_MAX;

    t23 = ((x93>x94)|(x95^x96));

    if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 2485U;
	uint8_t x100 = 25U;
	static volatile int32_t t24 = -675902;

    t24 = ((x97>x98)|(x99^x100));

    if (t24 != -32743) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 0U;
	int8_t x102 = 3;
	int8_t x103 = -1;
	int32_t t25 = -760;

    t25 = ((x101>x102)|(x103^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MAX;
	int8_t x107 = 1;
	static int16_t x108 = -1;
	volatile int32_t t26 = 47;

    t26 = ((x105>x106)|(x107^x108));

    if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int64_t x110 = INT64_MAX;
	static int16_t x111 = -231;
	int32_t t27 = -40;

    t27 = ((x109>x110)|(x111^x112));

    if (t27 != -32538) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	volatile uint64_t x114 = 964LLU;
	uint64_t x115 = UINT64_MAX;
	int16_t x116 = 21;
	volatile uint64_t t28 = 13701674215960LLU;

    t28 = ((x113>x114)|(x115^x116));

    if (t28 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = 7969U;
	uint32_t x118 = 1344317U;
	int16_t x119 = INT16_MIN;
	volatile uint64_t x120 = 1659622297821045891LLU;
	volatile uint64_t t29 = 5227LLU;

    t29 = ((x117>x118)|(x119^x120));

    if (t29 != 16787121775888524419LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	int16_t x122 = INT16_MAX;
	int16_t x123 = INT16_MIN;
	int32_t x124 = INT32_MIN;
	static int32_t t30 = -48;

    t30 = ((x121>x122)|(x123^x124));

    if (t30 != 2147450880) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static uint64_t x126 = 31314LLU;
	int32_t x127 = 19;
	uint32_t x128 = 49941119U;

    t31 = ((x125>x126)|(x127^x128));

    if (t31 != 49941101U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x130 = 19U;
	uint32_t x131 = 55438U;
	int32_t x132 = INT32_MIN;
	volatile uint32_t t32 = 24386U;

    t32 = ((x129>x130)|(x131^x132));

    if (t32 != 2147539087U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 30;
	int64_t x134 = 609730369610101LL;
	static int32_t x135 = -120;
	uint16_t x136 = 6598U;
	static int32_t t33 = -51753;

    t33 = ((x133>x134)|(x135^x136));

    if (t33 != -6578) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	volatile int64_t x139 = INT64_MIN;
	static int32_t x140 = INT32_MAX;
	static volatile int64_t t34 = 520520332059LL;

    t34 = ((x137>x138)|(x139^x140));

    if (t34 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x141 = 1U;
	volatile int16_t x142 = 680;
	uint32_t x143 = 40984U;
	uint64_t x144 = 1372652855238885741LLU;
	static volatile uint64_t t35 = 272776268LLU;

    t35 = ((x141>x142)|(x143^x144));

    if (t35 != 1372652855238861173LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	static volatile uint32_t x146 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t36 = 112422797U;

    t36 = ((x145>x146)|(x147^x148));

    if (t36 != 4294913004U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	volatile int16_t x150 = INT16_MIN;
	int32_t x151 = -381;
	uint32_t x152 = 456U;
	uint32_t t37 = 814284U;

    t37 = ((x149>x150)|(x151^x152));

    if (t37 != 4294967115U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x154 = 98U;
	uint8_t x155 = 51U;
	uint8_t x156 = UINT8_MAX;
	int32_t t38 = -137827;

    t38 = ((x153>x154)|(x155^x156));

    if (t38 != 204) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 156;
	uint64_t x160 = 3LLU;
	static volatile uint64_t t39 = 1061967051377716049LLU;

    t39 = ((x157>x158)|(x159^x160));

    if (t39 != 2147483644LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	volatile int32_t x162 = INT32_MAX;
	volatile int8_t x163 = 1;
	static int32_t x164 = INT32_MIN;

    t40 = ((x161>x162)|(x163^x164));

    if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -13119;
	int64_t x166 = -1LL;
	int64_t x167 = -1LL;
	int64_t t41 = 6LL;

    t41 = ((x165>x166)|(x167^x168));

    if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MAX;
	int16_t x171 = INT16_MIN;
	volatile int32_t t42 = 28;

    t42 = ((x169>x170)|(x171^x172));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = -31;
	int8_t x174 = INT8_MIN;
	uint8_t x176 = UINT8_MAX;
	static volatile uint64_t t43 = 3LLU;

    t43 = ((x173>x174)|(x175^x176));

    if (t43 != 118392361691443413LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -13693180571801862LL;
	uint64_t x180 = 54LLU;
	volatile uint64_t t44 = 83291709LLU;

    t44 = ((x177>x178)|(x179^x180));

    if (t44 != 109405089333909303LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 2236212915818705LLU;
	int32_t x183 = 29931;
	volatile int64_t t45 = -325LL;

    t45 = ((x181>x182)|(x183^x184));

    if (t45 != 9223372036854745877LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x186 = 0;
	int16_t x187 = -1;
	static int16_t x188 = -1;
	volatile int32_t t46 = 11380;

    t46 = ((x185>x186)|(x187^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	int64_t x192 = -442538166100336243LL;
	int64_t t47 = 309640791LL;

    t47 = ((x189>x190)|(x191^x192));

    if (t47 != 442538167779287437LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x195 = -1;
	uint16_t x196 = 4786U;
	int32_t t48 = 122;

    t48 = ((x193>x194)|(x195^x196));

    if (t48 != -4787) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = 2;
	static volatile uint8_t x199 = 1U;
	int8_t x200 = INT8_MIN;

    t49 = ((x197>x198)|(x199^x200));

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	uint16_t x202 = 0U;
	uint8_t x203 = 84U;
	volatile uint16_t x204 = 1020U;
	int32_t t50 = 0;

    t50 = ((x201>x202)|(x203^x204));

    if (t50 != 936) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x205 = 3;
	int16_t x206 = -1211;
	static uint16_t x207 = 7U;
	int32_t x208 = -10704;
	int32_t t51 = 2817;

    t51 = ((x205>x206)|(x207^x208));

    if (t51 != -10697) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 8195529636150384LLU;
	uint32_t x211 = 78202U;
	int8_t x212 = INT8_MIN;
	uint32_t t52 = 93U;

    t52 = ((x209>x210)|(x211^x212));

    if (t52 != 4294889210U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 3961025;
	uint64_t x214 = 147LLU;
	int32_t x215 = -25692;
	int64_t x216 = INT64_MAX;

    t53 = ((x213>x214)|(x215^x216));

    if (t53 != -9223372036854750117LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	uint8_t x218 = 2U;
	int8_t x220 = -1;
	uint32_t t54 = 378721U;

    t54 = ((x217>x218)|(x219^x220));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = -1;
	uint8_t x224 = 2U;
	int32_t t55 = 25226578;

    t55 = ((x221>x222)|(x223^x224));

    if (t55 != -32765) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -5;
	int64_t x226 = 11482125LL;
	uint64_t x227 = UINT64_MAX;
	volatile int64_t x228 = INT64_MIN;
	uint64_t t56 = 4163247300941969298LLU;

    t56 = ((x225>x226)|(x227^x228));

    if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	volatile int16_t x232 = -1;
	volatile int32_t t57 = 24;

    t57 = ((x229>x230)|(x231^x232));

    if (t57 != -99) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	volatile uint16_t x234 = 140U;
	int64_t x235 = -1LL;

    t58 = ((x233>x234)|(x235^x236));

    if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = 504782292466465195LL;
	static int8_t x239 = INT8_MAX;
	int64_t x240 = -650797969LL;
	int64_t t59 = 14203LL;

    t59 = ((x237>x238)|(x239^x240));

    if (t59 != -650798063LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x242 = -1;
	static uint32_t x243 = 0U;
	int32_t x244 = -1;

    t60 = ((x241>x242)|(x243^x244));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 852288701U;
	static int8_t x246 = -1;
	int8_t x248 = 6;
	int32_t t61 = -259028902;

    t61 = ((x245>x246)|(x247^x248));

    if (t61 != -32762) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MIN;
	int32_t x251 = 883;
	uint32_t x252 = UINT32_MAX;
	uint32_t t62 = 1U;

    t62 = ((x249>x250)|(x251^x252));

    if (t62 != 4294966412U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x253 = 8189806607599LLU;
	int64_t x254 = -1LL;
	int64_t x255 = -67011753763LL;
	int64_t t63 = 631LL;

    t63 = ((x253>x254)|(x255^x256));

    if (t63 != 67011753821LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x257 = 43475758877008995LLU;
	volatile int8_t x259 = -3;
	int64_t x260 = INT64_MAX;
	static int64_t t64 = 1418792051032694LL;

    t64 = ((x257>x258)|(x259^x260));

    if (t64 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = 1;
	uint32_t x262 = 3097U;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = INT16_MIN;
	uint64_t t65 = 62139932483LLU;

    t65 = ((x261>x262)|(x263^x264));

    if (t65 != 32767LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = 465742;
	static int8_t x268 = INT8_MIN;
	int32_t t66 = 8118882;

    t66 = ((x265>x266)|(x267^x268));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 86;
	int32_t x270 = -1;
	volatile int32_t t67 = -13;

    t67 = ((x269>x270)|(x271^x272));

    if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;

    t68 = ((x273>x274)|(x275^x276));

    if (t68 != -9223372036854773474LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	uint16_t x279 = UINT16_MAX;
	uint8_t x280 = 5U;
	static int32_t t69 = -30;

    t69 = ((x277>x278)|(x279^x280));

    if (t69 != 65531) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MAX;
	volatile uint64_t x283 = 29LLU;
	volatile int64_t x284 = INT64_MIN;

    t70 = ((x281>x282)|(x283^x284));

    if (t70 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = UINT32_MAX;
	static volatile int8_t x286 = 6;
	uint32_t x287 = 7U;
	int32_t x288 = -239739;
	uint32_t t71 = 3U;

    t71 = ((x285>x286)|(x287^x288));

    if (t71 != 4294727555U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = 2412;
	uint16_t x290 = 1404U;
	volatile int16_t x291 = INT16_MIN;
	uint8_t x292 = 1U;
	volatile int32_t t72 = -207;

    t72 = ((x289>x290)|(x291^x292));

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 25U;
	uint16_t x294 = 37U;
	int8_t x295 = 1;
	int8_t x296 = INT8_MAX;

    t73 = ((x293>x294)|(x295^x296));

    if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = INT8_MIN;
	int64_t x298 = -23873LL;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = -33;

    t74 = ((x297>x298)|(x299^x300));

    if (t74 != 2147418113) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 10LLU;
	static volatile uint16_t x302 = 12U;
	int8_t x303 = -9;
	int32_t x304 = -1;
	static volatile int32_t t75 = -23428;

    t75 = ((x301>x302)|(x303^x304));

    if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 1;
	int8_t x306 = INT8_MAX;
	int32_t x307 = INT32_MIN;
	static int64_t x308 = -90422632151549LL;
	static int64_t t76 = -7215223821037824LL;

    t76 = ((x305>x306)|(x307^x308));

    if (t76 != 90423408297475LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -11345614;
	int64_t x310 = 35081719256LL;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t77 = -26701LL;

    t77 = ((x309>x310)|(x311^x312));

    if (t77 != -65536LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 11304073721775LLU;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t78 = 7628382066926LLU;

    t78 = ((x313>x314)|(x315^x316));

    if (t78 != 18446732769635829807LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 45U;
	uint64_t x318 = 174703969649LLU;
	int64_t x319 = -6461465711LL;
	int32_t x320 = -1;
	volatile int64_t t79 = 95881LL;

    t79 = ((x317>x318)|(x319^x320));

    if (t79 != 6461465710LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 0U;
	int8_t x323 = INT8_MIN;
	static uint32_t x324 = 39750U;
	static uint32_t t80 = 1244422U;

    t80 = ((x321>x322)|(x323^x324));

    if (t80 != 4294927558U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MAX;
	int64_t x326 = INT64_MIN;
	volatile int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	int32_t t81 = 3241250;

    t81 = ((x325>x326)|(x327^x328));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x329 = UINT32_MAX;
	volatile int16_t x330 = INT16_MAX;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	int32_t t82 = -1;

    t82 = ((x329>x330)|(x331^x332));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MIN;
	uint32_t x335 = 1821827U;
	static uint8_t x336 = UINT8_MAX;
	uint32_t t83 = 495U;

    t83 = ((x333>x334)|(x335^x336));

    if (t83 != 1821820U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x338 = -497;
	volatile uint8_t x339 = 36U;
	uint32_t x340 = 0U;
	static uint32_t t84 = 90706276U;

    t84 = ((x337>x338)|(x339^x340));

    if (t84 != 36U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 2142;

    t85 = ((x341>x342)|(x343^x344));

    if (t85 != 2147450881) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	volatile int64_t x347 = -1LL;
	int32_t x348 = INT32_MIN;

    t86 = ((x345>x346)|(x347^x348));

    if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x351 = INT16_MIN;
	int8_t x352 = -1;
	int32_t t87 = -38;

    t87 = ((x349>x350)|(x351^x352));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = -3551125;
	static int16_t x355 = INT16_MIN;
	volatile uint8_t x356 = 4U;
	volatile int32_t t88 = -1940;

    t88 = ((x353>x354)|(x355^x356));

    if (t88 != -32763) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -1;
	static uint64_t x358 = 94457LLU;
	static uint8_t x359 = 60U;
	uint32_t x360 = 2755U;
	volatile uint32_t t89 = 5U;

    t89 = ((x357>x358)|(x359^x360));

    if (t89 != 2815U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MAX;
	static volatile int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	static volatile int64_t x364 = INT64_MIN;
	int64_t t90 = 2992420843699036LL;

    t90 = ((x361>x362)|(x363^x364));

    if (t90 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = 33LLU;
	int64_t x366 = 5290973198727LL;
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -60405;

    t91 = ((x365>x366)|(x367^x368));

    if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x371 = INT64_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	static volatile int64_t t92 = 16089LL;

    t92 = ((x369>x370)|(x371^x372));

    if (t92 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MAX;
	uint8_t x375 = UINT8_MAX;
	int64_t x376 = INT64_MIN;
	int64_t t93 = 5128486702927016LL;

    t93 = ((x373>x374)|(x375^x376));

    if (t93 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -25809LL;
	int8_t x378 = -1;
	static uint16_t x379 = 773U;
	volatile int8_t x380 = -60;
	int32_t t94 = 3924190;

    t94 = ((x377>x378)|(x379^x380));

    if (t94 != -831) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	uint16_t x382 = 0U;
	volatile int32_t x383 = INT32_MIN;

    t95 = ((x381>x382)|(x383^x384));

    if (t95 != 2147483617) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 92;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t96 = 36866LLU;

    t96 = ((x385>x386)|(x387^x388));

    if (t96 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = -1;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t97 = 96097178;

    t97 = ((x389>x390)|(x391^x392));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = -1;
	volatile int64_t x395 = INT64_MAX;
	uint16_t x396 = 36U;

    t98 = ((x393>x394)|(x395^x396));

    if (t98 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 1U;
	uint64_t x398 = UINT64_MAX;
	int16_t x399 = 3835;

    t99 = ((x397>x398)|(x399^x400));

    if (t99 != 28932) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x402 = INT16_MAX;
	static uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;
	volatile int32_t t100 = -13567335;

    t100 = ((x401>x402)|(x403^x404));

    if (t100 != -129) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x406 = UINT64_MAX;
	static int64_t x407 = -9LL;
	int32_t x408 = INT32_MIN;
	volatile int64_t t101 = 402348855LL;

    t101 = ((x405>x406)|(x407^x408));

    if (t101 != 2147483639LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	static uint16_t x410 = 11512U;
	int64_t x411 = INT64_MAX;
	volatile int64_t t102 = 34062280097497LL;

    t102 = ((x409>x410)|(x411^x412));

    if (t102 != 9223372036854774993LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x415 = INT32_MIN;
	uint64_t x416 = 279922736979653LLU;
	static uint64_t t103 = 104LLU;

    t103 = ((x413>x414)|(x415^x416));

    if (t103 != 18446464149606981317LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = UINT32_MAX;
	volatile int8_t x419 = -1;
	int16_t x420 = INT16_MIN;
	volatile int32_t t104 = 71329;

    t104 = ((x417>x418)|(x419^x420));

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = 3U;
	int16_t x422 = 179;
	int8_t x423 = -3;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t105 = -45960040;

    t105 = ((x421>x422)|(x423^x424));

    if (t105 != 125) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 18;
	volatile uint16_t x426 = UINT16_MAX;
	int32_t x427 = -23621384;
	int32_t x428 = -13508;

    t106 = ((x425>x426)|(x427^x428));

    if (t106 != 23616452) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = 0;
	volatile uint8_t x431 = 98U;
	int64_t x432 = INT64_MIN;
	volatile int64_t t107 = 4485033190917438LL;

    t107 = ((x429>x430)|(x431^x432));

    if (t107 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 514179834U;
	volatile uint8_t x435 = UINT8_MAX;
	int8_t x436 = -5;
	static int32_t t108 = -84007;

    t108 = ((x433>x434)|(x435^x436));

    if (t108 != -251) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x437 = 23;
	volatile uint32_t x438 = 720082329U;
	int64_t x439 = INT64_MIN;
	int8_t x440 = -1;
	volatile int64_t t109 = INT64_MAX;

    t109 = ((x437>x438)|(x439^x440));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x442 = UINT32_MAX;
	static uint8_t x443 = 0U;
	int64_t x444 = 416LL;
	volatile int64_t t110 = 410707741524513224LL;

    t110 = ((x441>x442)|(x443^x444));

    if (t110 != 416LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x446 = 14;
	uint64_t x447 = 69626762664922835LLU;
	static volatile int8_t x448 = 9;
	volatile uint64_t t111 = 16492279064417LLU;

    t111 = ((x445>x446)|(x447^x448));

    if (t111 != 69626762664922842LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	static int32_t x452 = -6049;
	volatile int32_t t112 = -344;

    t112 = ((x449>x450)|(x451^x452));

    if (t112 != 6049) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	int8_t x454 = INT8_MAX;
	static int32_t t113 = 694112;

    t113 = ((x453>x454)|(x455^x456));

    if (t113 != -4493) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 12233LLU;
	uint8_t x459 = 3U;
	int32_t x460 = -1;
	volatile int32_t t114 = -44;

    t114 = ((x457>x458)|(x459^x460));

    if (t114 != -4) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	int32_t x462 = INT32_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	uint64_t t115 = 14527LLU;

    t115 = ((x461>x462)|(x463^x464));

    if (t115 != 18446744073709547791LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -448;
	static uint64_t x467 = 6325430721260015676LLU;
	int32_t x468 = INT32_MAX;
	volatile uint64_t t116 = 831LLU;

    t116 = ((x465>x466)|(x467^x468));

    if (t116 != 6325430721526902723LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	static volatile int32_t x472 = -27;
	int32_t t117 = 2005;

    t117 = ((x469>x470)|(x471^x472));

    if (t117 != -32741) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	static uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	int32_t t118 = -822124;

    t118 = ((x473>x474)|(x475^x476));

    if (t118 != -32769) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MIN;
	uint8_t x479 = UINT8_MAX;
	uint16_t x480 = UINT16_MAX;
	int32_t t119 = 17;

    t119 = ((x477>x478)|(x479^x480));

    if (t119 != 65281) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 1U;
	int32_t x482 = 61;
	static uint64_t x483 = 0LLU;
	uint8_t x484 = 30U;
	uint64_t t120 = 15370794730LLU;

    t120 = ((x481>x482)|(x483^x484));

    if (t120 != 30LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x487 = -1LL;
	int16_t x488 = -1;
	volatile int64_t t121 = 1230596655466268LL;

    t121 = ((x485>x486)|(x487^x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -3049394LL;
	int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	int64_t x492 = -1LL;
	int64_t t122 = INT64_MAX;

    t122 = ((x489>x490)|(x491^x492));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 20U;
	int32_t x494 = 65223877;
	uint64_t x495 = 105612LLU;
	volatile uint64_t t123 = 4686234LLU;

    t123 = ((x493>x494)|(x495^x496));

    if (t123 != 9223372036854881420LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	uint32_t x498 = 4471U;
	int64_t x499 = INT64_MIN;
	int16_t x500 = INT16_MIN;

    t124 = ((x497>x498)|(x499^x500));

    if (t124 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -29466;
	static int8_t x502 = INT8_MIN;
	volatile int64_t x504 = INT64_MIN;
	static int64_t t125 = -125564LL;

    t125 = ((x501>x502)|(x503^x504));

    if (t125 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = -2065LL;
	int64_t x506 = 2570974921738681LL;
	static uint64_t x507 = 786LLU;
	volatile int64_t x508 = -1LL;

    t126 = ((x505>x506)|(x507^x508));

    if (t126 != 18446744073709550829LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MAX;
	int32_t t127 = 1;

    t127 = ((x509>x510)|(x511^x512));

    if (t127 != 2147482684) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 1295LLU;
	static volatile uint32_t x515 = UINT32_MAX;
	static uint64_t x516 = UINT64_MAX;
	uint64_t t128 = 630LLU;

    t128 = ((x513>x514)|(x515^x516));

    if (t128 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	int16_t x518 = -1;
	volatile int32_t x519 = -1;
	int8_t x520 = 60;
	volatile int32_t t129 = -21;

    t129 = ((x517>x518)|(x519^x520));

    if (t129 != -61) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	volatile int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MAX;
	volatile int32_t t130 = 17520;

    t130 = ((x521>x522)|(x523^x524));

    if (t130 != -32641) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	volatile int16_t x526 = INT16_MIN;
	static int16_t x527 = -1;
	uint32_t x528 = UINT32_MAX;
	volatile uint32_t t131 = 4406880U;

    t131 = ((x525>x526)|(x527^x528));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = 29U;
	static volatile int64_t x532 = INT64_MAX;
	int64_t t132 = INT64_MAX;

    t132 = ((x529>x530)|(x531^x532));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = -12;
	static volatile uint8_t x535 = 0U;
	volatile int64_t t133 = 7168044899229169LL;

    t133 = ((x533>x534)|(x535^x536));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x538 = INT64_MAX;
	int64_t x539 = INT64_MIN;
	uint64_t t134 = 8214107260139380LLU;

    t134 = ((x537>x538)|(x539^x540));

    if (t134 != 9464019243300408298LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MAX;
	int32_t x543 = -1;
	int16_t x544 = INT16_MIN;

    t135 = ((x541>x542)|(x543^x544));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	static int16_t x546 = INT16_MIN;
	uint16_t x547 = 6U;
	static int8_t x548 = -9;
	volatile int32_t t136 = -349478912;

    t136 = ((x545>x546)|(x547^x548));

    if (t136 != -15) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	int32_t x551 = -1;
	int16_t x552 = -4683;
	volatile int32_t t137 = -3189;

    t137 = ((x549>x550)|(x551^x552));

    if (t137 != 4682) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 1234U;
	uint16_t x554 = 244U;
	int16_t x555 = -1;
	static volatile uint64_t x556 = UINT64_MAX;
	uint64_t t138 = 50LLU;

    t138 = ((x553>x554)|(x555^x556));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	int32_t x559 = 195;
	int64_t x560 = INT64_MIN;
	volatile int64_t t139 = -4846536823451506LL;

    t139 = ((x557>x558)|(x559^x560));

    if (t139 != -9223372036854775613LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MAX;
	uint64_t x562 = UINT64_MAX;
	volatile int8_t x563 = 3;
	int16_t x564 = -1;

    t140 = ((x561>x562)|(x563^x564));

    if (t140 != -4) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = UINT16_MAX;
	int8_t x568 = INT8_MAX;
	int32_t t141 = 24673;

    t141 = ((x565>x566)|(x567^x568));

    if (t141 != 120) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MIN;
	uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MAX;

    t142 = ((x569>x570)|(x571^x572));

    if (t142 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint16_t x574 = UINT16_MAX;
	volatile uint32_t x575 = UINT32_MAX;
	int16_t x576 = -31;

    t143 = ((x573>x574)|(x575^x576));

    if (t143 != 30U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x580 = UINT32_MAX;
	volatile uint32_t t144 = 1712231U;

    t144 = ((x577>x578)|(x579^x580));

    if (t144 != 4294934529U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 868064435LLU;
	static int16_t x582 = INT16_MIN;
	static int16_t x583 = -1171;

    t145 = ((x581>x582)|(x583^x584));

    if (t145 != -30525) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x585 = 0LL;
	volatile uint64_t x586 = 258544LLU;
	volatile int32_t x587 = -29379029;
	static int8_t x588 = INT8_MIN;
	static volatile int32_t t146 = 1630454;

    t146 = ((x585>x586)|(x587^x588));

    if (t146 != 29378987) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x589 = 69989574;
	int64_t x590 = INT64_MIN;
	int32_t x591 = INT32_MIN;
	volatile int64_t x592 = INT64_MIN;
	int64_t t147 = -48281LL;

    t147 = ((x589>x590)|(x591^x592));

    if (t147 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = -6789;
	int32_t t148 = INT32_MAX;

    t148 = ((x593>x594)|(x595^x596));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = -1LL;
	int8_t x598 = -1;
	int64_t x600 = INT64_MIN;
	int64_t t149 = -25592LL;

    t149 = ((x597>x598)|(x599^x600));

    if (t149 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MAX;
	int8_t x603 = INT8_MIN;
	int32_t x604 = -1;

    t150 = ((x601>x602)|(x603^x604));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x606 = -1;
	static int16_t x607 = INT16_MIN;

    t151 = ((x605>x606)|(x607^x608));

    if (t151 != -32746) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	volatile int64_t x610 = INT64_MIN;
	int16_t x611 = INT16_MIN;
	int8_t x612 = -1;
	volatile int32_t t152 = -1618;

    t152 = ((x609>x610)|(x611^x612));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = -1;
	volatile int32_t x615 = INT32_MIN;
	volatile int8_t x616 = -1;
	static int32_t t153 = INT32_MAX;

    t153 = ((x613>x614)|(x615^x616));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 7266;
	volatile int32_t x619 = -1;
	int64_t x620 = 117880066525169429LL;
	static volatile int64_t t154 = 107010765511918LL;

    t154 = ((x617>x618)|(x619^x620));

    if (t154 != -117880066525169430LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	uint16_t x622 = 12360U;
	static uint32_t x623 = UINT32_MAX;
	int16_t x624 = INT16_MAX;
	uint32_t t155 = 194586U;

    t155 = ((x621>x622)|(x623^x624));

    if (t155 != 4294934528U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	volatile int32_t x626 = INT32_MAX;
	static volatile int32_t x627 = INT32_MIN;
	int64_t x628 = -21855329LL;
	int64_t t156 = 1LL;

    t156 = ((x625>x626)|(x627^x628));

    if (t156 != 2125628319LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = -1LL;
	int64_t x630 = -1562106765LL;
	uint32_t x631 = UINT32_MAX;
	uint32_t x632 = 405428U;
	volatile uint32_t t157 = 1603U;

    t157 = ((x629>x630)|(x631^x632));

    if (t157 != 4294561867U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = -1;
	uint32_t x634 = UINT32_MAX;
	static int16_t x635 = 0;
	uint16_t x636 = UINT16_MAX;
	int32_t t158 = 506331481;

    t158 = ((x633>x634)|(x635^x636));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	static uint16_t x638 = 0U;
	uint32_t x639 = 291U;
	uint8_t x640 = UINT8_MAX;
	static uint32_t t159 = 5500926U;

    t159 = ((x637>x638)|(x639^x640));

    if (t159 != 476U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MAX;
	int8_t x642 = -9;
	uint32_t x643 = UINT32_MAX;
	int64_t x644 = 43575049150954012LL;
	volatile int64_t t160 = -6847459317LL;

    t160 = ((x641>x642)|(x643^x644));

    if (t160 != 43575047080216035LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int32_t x646 = 1;
	volatile int32_t x648 = INT32_MIN;
	volatile int32_t t161 = 2;

    t161 = ((x645>x646)|(x647^x648));

    if (t161 != 2147450881) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x650 = 14U;
	int32_t x651 = -12266;
	static volatile int32_t t162 = 45781362;

    t162 = ((x649>x650)|(x651^x652));

    if (t162 != 12182) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 223848063568522LLU;
	static uint16_t x654 = 67U;
	static int64_t x655 = -1LL;
	int32_t x656 = INT32_MAX;

    t163 = ((x653>x654)|(x655^x656));

    if (t163 != -2147483647LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -3;
	int64_t x660 = 5LL;
	int64_t t164 = 29361169737771LL;

    t164 = ((x657>x658)|(x659^x660));

    if (t164 != -10LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x662 = -1;
	volatile int32_t x664 = INT32_MIN;
	volatile int32_t t165 = 3885;

    t165 = ((x661>x662)|(x663^x664));

    if (t165 != 2147450881) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = -1;
	int16_t x667 = INT16_MAX;
	int32_t x668 = -1;
	int32_t t166 = 310;

    t166 = ((x665>x666)|(x667^x668));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x672 = UINT8_MAX;
	static volatile uint64_t t167 = 172111LLU;

    t167 = ((x669>x670)|(x671^x672));

    if (t167 != 1046543239943LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x674 = 3256151U;
	int64_t x675 = INT64_MIN;
	static volatile int32_t x676 = INT32_MIN;
	int64_t t168 = -579LL;

    t168 = ((x673>x674)|(x675^x676));

    if (t168 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = INT64_MAX;
	static volatile int32_t t169 = -1075;

    t169 = ((x677>x678)|(x679^x680));

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x684 = UINT16_MAX;

    t170 = ((x681>x682)|(x683^x684));

    if (t170 != -65533) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int16_t x686 = INT16_MIN;
	uint32_t x687 = 358540931U;
	int64_t x688 = INT64_MIN;
	volatile int64_t t171 = -85272LL;

    t171 = ((x685>x686)|(x687^x688));

    if (t171 != -9223372036496234877LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	int32_t x690 = INT32_MIN;
	int32_t x691 = 22858;
	int16_t x692 = 1;
	int32_t t172 = -1;

    t172 = ((x689>x690)|(x691^x692));

    if (t172 != 22859) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = 2118U;
	int64_t x694 = -51559877061994LL;
	uint16_t x695 = 101U;
	int32_t x696 = INT32_MAX;
	static volatile int32_t t173 = 15655;

    t173 = ((x693>x694)|(x695^x696));

    if (t173 != 2147483547) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	uint16_t x699 = 5U;
	uint64_t x700 = UINT64_MAX;
	static volatile uint64_t t174 = 478LLU;

    t174 = ((x697>x698)|(x699^x700));

    if (t174 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x702 = 1LL;
	int8_t x703 = 0;
	int16_t x704 = 1;

    t175 = ((x701>x702)|(x703^x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 588945073281288LLU;
	uint16_t x706 = UINT16_MAX;
	static uint8_t x707 = 29U;
	int16_t x708 = -183;
	int32_t t176 = 137405;

    t176 = ((x705>x706)|(x707^x708));

    if (t176 != -171) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	uint16_t x710 = UINT16_MAX;
	uint8_t x711 = 1U;
	int16_t x712 = -1;
	static int32_t t177 = 1300466;

    t177 = ((x709>x710)|(x711^x712));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1;
	int8_t x714 = INT8_MIN;
	static int16_t x715 = -1;
	volatile int32_t x716 = -1;
	volatile int32_t t178 = -4141600;

    t178 = ((x713>x714)|(x715^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = INT32_MAX;
	volatile int64_t x718 = INT64_MIN;
	int64_t x719 = INT64_MIN;
	int64_t x720 = -165LL;

    t179 = ((x717>x718)|(x719^x720));

    if (t179 != 9223372036854775643LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = INT16_MAX;
	volatile int8_t x722 = 9;
	static volatile int64_t x723 = 1LL;
	int64_t x724 = INT64_MAX;
	volatile int64_t t180 = INT64_MAX;

    t180 = ((x721>x722)|(x723^x724));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	static int32_t x726 = -35086755;
	int32_t x727 = INT32_MIN;
	int16_t x728 = -104;
	volatile int32_t t181 = 9;

    t181 = ((x725>x726)|(x727^x728));

    if (t181 != 2147483545) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 649595787648989516LLU;
	int64_t x730 = -1LL;
	volatile int64_t t182 = 1LL;

    t182 = ((x729>x730)|(x731^x732));

    if (t182 != 5LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	static uint16_t x734 = 0U;
	int16_t x735 = -1;
	static uint8_t x736 = 17U;
	int32_t t183 = -253986710;

    t183 = ((x733>x734)|(x735^x736));

    if (t183 != -18) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = 59161608;
	static int32_t x738 = INT32_MIN;
	static volatile int32_t x739 = -1;
	int64_t x740 = INT64_MAX;
	volatile int64_t t184 = 95LL;

    t184 = ((x737>x738)|(x739^x740));

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 59637786;
	int32_t x742 = INT32_MIN;
	int32_t x743 = INT32_MIN;
	uint32_t x744 = 511114786U;
	static volatile uint32_t t185 = 427446U;

    t185 = ((x741>x742)|(x743^x744));

    if (t185 != 2658598435U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 23114524343480731LLU;
	int64_t x746 = INT64_MAX;
	static uint64_t x748 = UINT64_MAX;

    t186 = ((x745>x746)|(x747^x748));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 658U;
	uint64_t x750 = 464LLU;
	uint32_t x751 = UINT32_MAX;
	static uint64_t x752 = UINT64_MAX;
	uint64_t t187 = 132919878770363514LLU;

    t187 = ((x749>x750)|(x751^x752));

    if (t187 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	volatile uint64_t x754 = 3017229LLU;
	int8_t x756 = 1;
	static volatile uint64_t t188 = UINT64_MAX;

    t188 = ((x753>x754)|(x755^x756));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x757 = UINT64_MAX;
	int8_t x758 = INT8_MIN;
	int32_t x759 = -1;
	static int8_t x760 = -1;

    t189 = ((x757>x758)|(x759^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = 3LL;
	uint16_t x762 = 12U;
	int8_t x763 = 1;
	int8_t x764 = 32;
	volatile int32_t t190 = 209;

    t190 = ((x761>x762)|(x763^x764));

    if (t190 != 33) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = 0;
	int64_t x767 = INT64_MIN;
	int32_t x768 = -111;
	static int64_t t191 = 117775LL;

    t191 = ((x765>x766)|(x767^x768));

    if (t191 != 9223372036854775697LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MIN;
	uint64_t x770 = UINT64_MAX;
	int32_t x772 = 6335;
	volatile int32_t t192 = -5142;

    t192 = ((x769>x770)|(x771^x772));

    if (t192 != 6204) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	int64_t x774 = 20671LL;
	uint16_t x775 = 19U;
	int32_t x776 = INT32_MIN;
	static int32_t t193 = -465733029;

    t193 = ((x773>x774)|(x775^x776));

    if (t193 != -2147483629) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	static volatile int32_t x780 = 301088277;
	int32_t t194 = -1;

    t194 = ((x777>x778)|(x779^x780));

    if (t194 != -301088363) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MIN;
	int8_t x783 = INT8_MIN;
	int32_t t195 = 26474661;

    t195 = ((x781>x782)|(x783^x784));

    if (t195 != -115) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x787 = -7600931737290844LL;
	uint16_t x788 = 624U;
	static volatile int64_t t196 = -52064199LL;

    t196 = ((x785>x786)|(x787^x788));

    if (t196 != -7600931737291307LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	int64_t x790 = 206997LL;
	uint16_t x791 = UINT16_MAX;

    t197 = ((x789>x790)|(x791^x792));

    if (t197 != 65526U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 1583;
	uint64_t x794 = 44220796838482LLU;
	int32_t t198 = 1;

    t198 = ((x793>x794)|(x795^x796));

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	static int32_t x798 = -2;
	int32_t t199 = 382393828;

    t199 = ((x797>x798)|(x799^x800));

    if (t199 != -2147482785) { NG(); } else { ; }
	
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

