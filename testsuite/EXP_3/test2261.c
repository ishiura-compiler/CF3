
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

int64_t x2 = INT64_MIN;
int64_t x3 = INT64_MAX;
uint16_t x5 = 1U;
volatile uint16_t x8 = 43U;
int64_t x11 = INT64_MIN;
volatile int32_t t2 = -1986;
volatile int16_t x20 = -1;
int32_t t5 = 124165720;
int16_t x28 = INT16_MIN;
volatile int32_t t6 = -196090608;
int16_t x29 = INT16_MIN;
volatile uint8_t x32 = 84U;
int32_t t7 = -3902456;
int32_t x34 = -1;
volatile int32_t t9 = -682839780;
int64_t x41 = 1LL;
int8_t x49 = 23;
int64_t x54 = 319751174809413LL;
volatile uint64_t x56 = 234640LLU;
int32_t t13 = -3011;
int8_t x60 = INT8_MIN;
int16_t x64 = INT16_MAX;
volatile uint64_t x66 = 1252756LLU;
int8_t x68 = -1;
static uint8_t x71 = 11U;
int32_t x73 = -1;
int64_t x81 = 28057267242LL;
int32_t t20 = 26880809;
static volatile uint32_t x99 = 0U;
uint16_t x104 = UINT16_MAX;
int8_t x105 = INT8_MAX;
volatile int16_t x109 = INT16_MIN;
static int16_t x115 = INT16_MIN;
static int32_t t28 = -142;
int8_t x118 = INT8_MIN;
uint64_t x123 = 80656LLU;
int8_t x126 = INT8_MIN;
volatile int32_t t31 = -3;
int8_t x136 = -1;
static volatile int32_t t33 = 172;
static int32_t t34 = -859491;
int8_t x141 = INT8_MAX;
int32_t x146 = INT32_MIN;
static volatile int32_t t36 = 4110625;
int8_t x150 = INT8_MIN;
int32_t x151 = -12;
static volatile uint8_t x152 = UINT8_MAX;
int32_t x161 = -1;
uint64_t x167 = UINT64_MAX;
int32_t x168 = 3073140;
volatile int32_t t41 = 201;
int16_t x175 = 6;
int64_t x176 = 70LL;
static volatile int8_t x177 = INT8_MAX;
static int16_t x185 = INT16_MIN;
static int32_t x190 = 2;
int8_t x194 = INT8_MAX;
volatile uint64_t x196 = 122340586LLU;
int8_t x197 = -25;
uint16_t x201 = UINT16_MAX;
volatile int32_t x202 = INT32_MAX;
volatile int64_t x203 = INT64_MIN;
int32_t t51 = 1;
int16_t x210 = -1;
static int16_t x215 = INT16_MAX;
volatile int64_t x226 = INT64_MIN;
int16_t x230 = 169;
int8_t x242 = INT8_MIN;
uint32_t x249 = 0U;
uint16_t x252 = UINT16_MAX;
static int32_t t62 = 6703623;
int32_t x256 = INT32_MIN;
static volatile int32_t t63 = 0;
volatile int64_t x261 = 14393LL;
uint32_t x262 = UINT32_MAX;
int64_t x270 = -20856037408209500LL;
int32_t t67 = -640473833;
uint8_t x279 = 27U;
int32_t x280 = INT32_MIN;
static uint64_t x283 = 319717090952940LLU;
static volatile uint32_t x284 = UINT32_MAX;
static uint16_t x292 = 331U;
int8_t x295 = 0;
uint8_t x297 = 38U;
int32_t t74 = 2139799;
volatile int32_t x302 = INT32_MAX;
int8_t x304 = -1;
volatile int64_t x306 = INT64_MIN;
int32_t t76 = -2025611;
uint32_t x318 = 1U;
int8_t x321 = INT8_MIN;
uint32_t x322 = UINT32_MAX;
uint64_t x338 = 54LLU;
volatile int8_t x344 = -1;
static int8_t x345 = INT8_MIN;
volatile int32_t t86 = 11;
int16_t x353 = 1;
static uint32_t x354 = 1145U;
int16_t x356 = -5;
uint64_t x362 = 16703963310872LLU;
static volatile int32_t t91 = 15590967;
static volatile int64_t x369 = -1076851918LL;
static int8_t x375 = -45;
uint8_t x378 = 2U;
int32_t x383 = INT32_MIN;
int32_t x384 = -1;
uint16_t x386 = 0U;
volatile int32_t t96 = 63;
static volatile uint8_t x406 = 52U;
volatile int32_t t101 = -317839897;
uint32_t x412 = 952U;
int32_t t102 = -894144374;
static int64_t x415 = INT64_MIN;
volatile int8_t x422 = 1;
volatile int32_t t106 = -30175063;
int64_t x430 = -1LL;
int64_t x431 = INT64_MIN;
int64_t x434 = INT64_MAX;
static int64_t x436 = -2154401333007LL;
static int32_t x440 = 479042;
volatile int32_t x442 = -1;
int32_t x443 = INT32_MIN;
int32_t t110 = -3627;
volatile int64_t x451 = -300819970785238LL;
volatile int32_t t113 = -3790;
volatile int32_t t115 = -964555195;
static volatile int32_t t116 = -981;
uint64_t x471 = UINT64_MAX;
volatile int64_t x476 = INT64_MIN;
uint64_t x483 = UINT64_MAX;
volatile int8_t x484 = INT8_MIN;
volatile int32_t t120 = -20821;
uint32_t x485 = 98873U;
int16_t x489 = INT16_MAX;
volatile int64_t x493 = 13583741LL;
int8_t x499 = 2;
int32_t x500 = -1;
int16_t x510 = INT16_MAX;
static int16_t x524 = INT16_MAX;
volatile int32_t t130 = 2464;
static volatile uint8_t x535 = 69U;
int64_t x542 = -394LL;
int16_t x544 = 42;
volatile int16_t x546 = -128;
uint16_t x552 = 32564U;
static int32_t x553 = INT32_MIN;
int32_t t138 = -4;
uint32_t x558 = 251U;
uint8_t x560 = UINT8_MAX;
volatile int8_t x565 = -10;
int16_t x570 = INT16_MIN;
static int64_t x576 = INT64_MIN;
static volatile int32_t t146 = -617677;
uint64_t x589 = 73693388561344011LLU;
static uint8_t x591 = UINT8_MAX;
volatile int32_t t147 = -32608;
int32_t x598 = -12433;
int8_t x604 = -1;
volatile int32_t t153 = -4;
static int16_t x620 = 4;
static uint64_t x624 = 1800859569914784848LLU;
int32_t x630 = INT32_MIN;
volatile int32_t t157 = 1;
int8_t x633 = INT8_MAX;
uint64_t x640 = UINT64_MAX;
uint8_t x642 = 16U;
int32_t t164 = 17;
int64_t x661 = INT64_MAX;
uint8_t x665 = UINT8_MAX;
uint64_t x667 = 1229504278825LLU;
volatile int32_t t171 = 148832426;
volatile int32_t x690 = -89387461;
volatile int8_t x693 = -29;
static volatile int32_t t173 = 20;
int16_t x697 = INT16_MIN;
volatile int32_t t175 = 1;
uint16_t x706 = 3713U;
int32_t x708 = INT32_MIN;
int32_t t177 = 589187;
int32_t x714 = INT32_MIN;
int8_t x720 = -1;
int8_t x721 = -6;
uint8_t x722 = 37U;
int8_t x725 = INT8_MAX;
int64_t x726 = INT64_MIN;
int8_t x728 = INT8_MAX;
volatile uint8_t x734 = 8U;
volatile uint64_t x740 = UINT64_MAX;
volatile int32_t t184 = -477329;
int16_t x747 = INT16_MAX;
static int8_t x749 = INT8_MIN;
int16_t x750 = INT16_MIN;
volatile uint32_t x751 = 0U;
int8_t x753 = -1;
int32_t t188 = -4780486;
int8_t x757 = INT8_MAX;
volatile uint64_t x758 = 159371114161LLU;
volatile int32_t t189 = 2720553;
static int32_t t190 = -269365;
volatile int8_t x766 = -1;
int32_t t191 = -5;
uint32_t x771 = UINT32_MAX;
volatile uint64_t x772 = 139936742786LLU;
int16_t x776 = 10;
int64_t x780 = -9680026LL;
static volatile int32_t t196 = -3174;
volatile int64_t x792 = -31LL;
static volatile uint8_t x795 = UINT8_MAX;
int32_t t198 = -25730702;
uint16_t x797 = 2U;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -112670;

    t0 = ((x1==x2)!=(x3&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	volatile uint64_t x7 = 33668205406810LLU;
	static volatile int32_t t1 = -5112956;

    t1 = ((x5==x6)!=(x7&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 3;
	int8_t x10 = -1;
	volatile int32_t x12 = -6678241;

    t2 = ((x9==x10)!=(x11&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 64103799LL;
	uint16_t x14 = 180U;
	int16_t x15 = INT16_MIN;
	volatile uint8_t x16 = 16U;
	volatile int32_t t3 = -948512;

    t3 = ((x13==x14)!=(x15&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = UINT8_MAX;
	volatile int16_t x18 = INT16_MAX;
	uint64_t x19 = UINT64_MAX;
	static int32_t t4 = 302;

    t4 = ((x17==x18)!=(x19&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = 1U;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = -1;

    t5 = ((x21==x22)!=(x23&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 1;
	volatile uint8_t x26 = 92U;
	int16_t x27 = -7796;

    t6 = ((x25==x26)!=(x27&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = -1;
	int32_t x31 = -1;

    t7 = ((x29==x30)!=(x31&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int64_t x35 = INT64_MIN;
	int32_t x36 = -1;
	volatile int32_t t8 = 2808;

    t8 = ((x33==x34)!=(x35&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MAX;
	uint32_t x39 = UINT32_MAX;
	int32_t x40 = INT32_MAX;

    t9 = ((x37==x38)!=(x39&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x42 = UINT16_MAX;
	uint32_t x43 = UINT32_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -4;

    t10 = ((x41==x42)!=(x43&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint8_t x46 = 0U;
	int16_t x47 = INT16_MAX;
	int64_t x48 = -1LL;
	int32_t t11 = -10;

    t11 = ((x45==x46)!=(x47&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x50 = 64576171679673678LLU;
	static uint8_t x51 = UINT8_MAX;
	int64_t x52 = 1227034811891124588LL;
	volatile int32_t t12 = -387493;

    t12 = ((x49==x50)!=(x51&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 1913636U;
	volatile uint8_t x55 = 8U;

    t13 = ((x53==x54)!=(x55&x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -65901178508852397LL;
	uint64_t x58 = 7558407445174078LLU;
	volatile int64_t x59 = -1LL;
	int32_t t14 = -3893584;

    t14 = ((x57==x58)!=(x59&x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 24U;
	int8_t x62 = -1;
	uint64_t x63 = 1944342558978LLU;
	static int32_t t15 = -178759336;

    t15 = ((x61==x62)!=(x63&x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = 0U;
	int8_t x67 = INT8_MIN;
	int32_t t16 = 110;

    t16 = ((x65==x66)!=(x67&x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int32_t x70 = 102210426;
	static int64_t x72 = INT64_MIN;
	int32_t t17 = 12870034;

    t17 = ((x69==x70)!=(x71&x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -918;
	volatile int32_t x75 = INT32_MIN;
	volatile int32_t x76 = -263484015;
	volatile int32_t t18 = -750719;

    t18 = ((x73==x74)!=(x75&x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 1;
	int8_t x78 = 0;
	int32_t x79 = INT32_MAX;
	static volatile uint64_t x80 = 3245490016433135LLU;
	static volatile int32_t t19 = 40311;

    t19 = ((x77==x78)!=(x79&x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -1;
	int8_t x83 = -1;
	int64_t x84 = INT64_MIN;

    t20 = ((x81==x82)!=(x83&x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = INT16_MIN;
	uint32_t x87 = 2U;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = -1;

    t21 = ((x85==x86)!=(x87&x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	uint16_t x90 = 1046U;
	int16_t x91 = -1;
	volatile int16_t x92 = 5;
	volatile int32_t t22 = -109010530;

    t22 = ((x89==x90)!=(x91&x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 0;
	uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 1105U;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -1;

    t23 = ((x93==x94)!=(x95&x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	static uint8_t x98 = 2U;
	uint8_t x100 = 26U;
	int32_t t24 = -1445;

    t24 = ((x97==x98)!=(x99&x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = 1613;
	int16_t x102 = -1;
	int64_t x103 = INT64_MAX;
	volatile int32_t t25 = -4;

    t25 = ((x101==x102)!=(x103&x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x106 = 3U;
	int64_t x107 = INT64_MIN;
	volatile int64_t x108 = -3189922613943LL;
	static int32_t t26 = -3;

    t26 = ((x105==x106)!=(x107&x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = INT16_MAX;
	int64_t x111 = 16LL;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 16822;

    t27 = ((x109==x110)!=(x111&x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = 512758346607LLU;
	int8_t x114 = INT8_MIN;
	volatile uint16_t x116 = 47U;

    t28 = ((x113==x114)!=(x115&x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	int8_t x119 = INT8_MAX;
	static uint32_t x120 = 1645721U;
	int32_t t29 = 27;

    t29 = ((x117==x118)!=(x119&x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	uint8_t x122 = 1U;
	uint32_t x124 = 72U;
	volatile int32_t t30 = 1;

    t30 = ((x121==x122)!=(x123&x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x125 = UINT32_MAX;
	int32_t x127 = 104645;
	int32_t x128 = INT32_MIN;

    t31 = ((x125==x126)!=(x127&x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	static int8_t x130 = -1;
	int64_t x131 = INT64_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 47827;

    t32 = ((x129==x130)!=(x131&x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = -5;
	int32_t x135 = 14443340;

    t33 = ((x133==x134)!=(x135&x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = -1LL;
	static int64_t x138 = INT64_MIN;
	uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MAX;

    t34 = ((x137==x138)!=(x139&x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x142 = 2345325;
	int16_t x143 = 7940;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t35 = -5038844;

    t35 = ((x141==x142)!=(x143&x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	int64_t x147 = -2231055304286LL;
	uint16_t x148 = 63U;

    t36 = ((x145==x146)!=(x147&x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	static int32_t t37 = -1;

    t37 = ((x149==x150)!=(x151&x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 1;
	static volatile int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t38 = -252;

    t38 = ((x153==x154)!=(x155&x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	uint64_t x159 = 281805653157468LLU;
	int32_t x160 = -554738045;
	volatile int32_t t39 = 673706342;

    t39 = ((x157==x158)!=(x159&x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x162 = 3U;
	volatile uint32_t x163 = 150U;
	volatile uint64_t x164 = 4099232869132LLU;
	int32_t t40 = 1756;

    t40 = ((x161==x162)!=(x163&x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MAX;
	int8_t x166 = 0;

    t41 = ((x165==x166)!=(x167&x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -302LL;
	static int8_t x170 = 18;
	static uint32_t x171 = 0U;
	int16_t x172 = -28;
	volatile int32_t t42 = -998134480;

    t42 = ((x169==x170)!=(x171&x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -1LL;
	volatile int32_t x174 = -1;
	int32_t t43 = -89;

    t43 = ((x173==x174)!=(x175&x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x178 = INT64_MIN;
	uint32_t x179 = 25290U;
	static uint16_t x180 = 3501U;
	int32_t t44 = -15204227;

    t44 = ((x177==x178)!=(x179&x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint8_t x182 = 62U;
	static int64_t x183 = -1LL;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 8;

    t45 = ((x181==x182)!=(x183&x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x186 = -1;
	int8_t x187 = 1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 2820;

    t46 = ((x185==x186)!=(x187&x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 17370669;

    t47 = ((x189==x190)!=(x191&x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 1266686632544167040LLU;
	int64_t x195 = INT64_MIN;
	volatile int32_t t48 = 0;

    t48 = ((x193==x194)!=(x195&x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MAX;
	volatile int32_t x199 = -1;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = 13687686;

    t49 = ((x197==x198)!=(x199&x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x204 = INT32_MIN;
	int32_t t50 = -13434969;

    t50 = ((x201==x202)!=(x203&x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = 25937;
	uint64_t x206 = UINT64_MAX;
	uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;

    t51 = ((x205==x206)!=(x207&x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = -1;
	static int32_t t52 = 5;

    t52 = ((x209==x210)!=(x211&x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 0U;
	static int32_t x214 = INT32_MIN;
	uint64_t x216 = 325097033866914403LLU;
	static int32_t t53 = 0;

    t53 = ((x213==x214)!=(x215&x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	static volatile uint32_t x218 = UINT32_MAX;
	int16_t x219 = 1;
	static uint16_t x220 = UINT16_MAX;
	static volatile int32_t t54 = -81;

    t54 = ((x217==x218)!=(x219&x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 3849U;
	int8_t x222 = 0;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = 6;
	volatile int32_t t55 = 32;

    t55 = ((x221==x222)!=(x223&x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 1U;
	int8_t x227 = -1;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = -24;

    t56 = ((x225==x226)!=(x227&x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MIN;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 2457701;

    t57 = ((x229==x230)!=(x231&x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = 6042698;
	static int8_t x234 = INT8_MAX;
	volatile int16_t x235 = -2825;
	uint8_t x236 = 3U;
	volatile int32_t t58 = -31224434;

    t58 = ((x233==x234)!=(x235&x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = 1649;
	volatile uint32_t x238 = UINT32_MAX;
	static uint32_t x239 = 130643404U;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -14284;

    t59 = ((x237==x238)!=(x239&x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	uint32_t x243 = UINT32_MAX;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = -11341326;

    t60 = ((x241==x242)!=(x243&x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 52U;
	int8_t x246 = -1;
	int16_t x247 = -3382;
	int64_t x248 = 1789473LL;
	int32_t t61 = 160;

    t61 = ((x245==x246)!=(x247&x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x250 = 4109U;
	static int32_t x251 = -1;

    t62 = ((x249==x250)!=(x251&x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 27398U;
	int64_t x254 = 1634930325905151376LL;
	static uint16_t x255 = UINT16_MAX;

    t63 = ((x253==x254)!=(x255&x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -6;
	volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	int16_t x260 = INT16_MIN;
	static int32_t t64 = 82;

    t64 = ((x257==x258)!=(x259&x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = -1;
	int32_t t65 = -5967;

    t65 = ((x261==x262)!=(x263&x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 28U;
	int16_t x266 = 4392;
	static volatile int64_t x267 = INT64_MIN;
	int32_t x268 = -1;
	volatile int32_t t66 = -32599856;

    t66 = ((x265==x266)!=(x267&x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -21;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 18U;

    t67 = ((x269==x270)!=(x271&x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 0;
	int16_t x274 = -1;
	static int16_t x275 = 0;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -356;

    t68 = ((x273==x274)!=(x275&x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	int64_t x278 = INT64_MIN;
	volatile int32_t t69 = 21522;

    t69 = ((x277==x278)!=(x279&x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 65087865545LLU;
	int32_t x282 = INT32_MAX;
	static int32_t t70 = -21;

    t70 = ((x281==x282)!=(x283&x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -1;
	volatile int8_t x286 = INT8_MAX;
	volatile int8_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;
	static int32_t t71 = 1362;

    t71 = ((x285==x286)!=(x287&x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	volatile int8_t x290 = INT8_MIN;
	static uint32_t x291 = 122457U;
	int32_t t72 = 181428;

    t72 = ((x289==x290)!=(x291&x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	volatile int8_t x294 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	static int32_t t73 = 16;

    t73 = ((x293==x294)!=(x295&x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	volatile int8_t x300 = INT8_MIN;

    t74 = ((x297==x298)!=(x299&x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 2U;
	int8_t x303 = -1;
	static volatile int32_t t75 = -39595;

    t75 = ((x301==x302)!=(x303&x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	int16_t x307 = -1;
	int8_t x308 = INT8_MAX;

    t76 = ((x305==x306)!=(x307&x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	static volatile uint8_t x310 = 30U;
	static uint8_t x311 = UINT8_MAX;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t77 = 1546108;

    t77 = ((x309==x310)!=(x311&x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = -1;
	volatile int8_t x314 = INT8_MIN;
	int8_t x315 = 13;
	int32_t x316 = -13;
	int32_t t78 = -1;

    t78 = ((x313==x314)!=(x315&x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	volatile int64_t x319 = INT64_MIN;
	volatile int64_t x320 = 1445193597262762453LL;
	volatile int32_t t79 = 2145;

    t79 = ((x317==x318)!=(x319&x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x323 = INT32_MAX;
	volatile int64_t x324 = -5716531020LL;
	volatile int32_t t80 = 2741731;

    t80 = ((x321==x322)!=(x323&x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -26;
	int8_t x326 = -1;
	static int8_t x327 = -1;
	int64_t x328 = -126041448732LL;
	int32_t t81 = 55;

    t81 = ((x325==x326)!=(x327&x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MAX;
	int64_t x331 = 98294795989360LL;
	uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -16615770;

    t82 = ((x329==x330)!=(x331&x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = 68;
	uint8_t x334 = 29U;
	uint8_t x335 = UINT8_MAX;
	volatile int64_t x336 = 22354250LL;
	static int32_t t83 = 925944653;

    t83 = ((x333==x334)!=(x335&x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 17U;
	int8_t x339 = -1;
	static int64_t x340 = 4LL;
	volatile int32_t t84 = -105;

    t84 = ((x337==x338)!=(x339&x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = 3;
	int8_t x342 = INT8_MIN;
	int8_t x343 = -7;
	int32_t t85 = 452;

    t85 = ((x341==x342)!=(x343&x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MIN;
	static uint64_t x347 = UINT64_MAX;
	uint32_t x348 = UINT32_MAX;

    t86 = ((x345==x346)!=(x347&x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	static int32_t x350 = INT32_MAX;
	volatile int16_t x351 = INT16_MIN;
	volatile int64_t x352 = INT64_MAX;
	int32_t t87 = -3504791;

    t87 = ((x349==x350)!=(x351&x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x355 = -33;
	static int32_t t88 = -1;

    t88 = ((x353==x354)!=(x355&x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x357 = 30767U;
	uint16_t x358 = 365U;
	static uint16_t x359 = 8433U;
	volatile int8_t x360 = -5;
	int32_t t89 = 1370733;

    t89 = ((x357==x358)!=(x359&x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x363 = -1;
	int64_t x364 = -50453754471881LL;
	volatile int32_t t90 = -1;

    t90 = ((x361==x362)!=(x363&x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	int32_t x366 = 0;
	int64_t x367 = -8386237014931408LL;
	uint64_t x368 = 49312274LLU;

    t91 = ((x365==x366)!=(x367&x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x370 = -1LL;
	uint16_t x371 = 1326U;
	uint64_t x372 = 12414790842241LLU;
	int32_t t92 = 754126;

    t92 = ((x369==x370)!=(x371&x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	volatile int16_t x376 = -1;
	volatile int32_t t93 = 1;

    t93 = ((x373==x374)!=(x375&x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	int16_t x379 = 0;
	int32_t x380 = -545236727;
	int32_t t94 = -183;

    t94 = ((x377==x378)!=(x379&x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	static int16_t x382 = INT16_MIN;
	volatile int32_t t95 = 52768990;

    t95 = ((x381==x382)!=(x383&x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 247528730;
	int64_t x387 = INT64_MIN;
	int8_t x388 = INT8_MIN;

    t96 = ((x385==x386)!=(x387&x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	int64_t x392 = 7886579524015493LL;
	volatile int32_t t97 = 3;

    t97 = ((x389==x390)!=(x391&x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	static int32_t x395 = INT32_MIN;
	int16_t x396 = -40;
	volatile int32_t t98 = 15;

    t98 = ((x393==x394)!=(x395&x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	int16_t x400 = -59;
	int32_t t99 = -586882007;

    t99 = ((x397==x398)!=(x399&x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	int16_t x402 = 3;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 126;

    t100 = ((x401==x402)!=(x403&x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 1096U;
	static volatile uint8_t x407 = 1U;
	int8_t x408 = INT8_MAX;

    t101 = ((x405==x406)!=(x407&x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	uint32_t x410 = 28307960U;
	uint32_t x411 = 1239U;

    t102 = ((x409==x410)!=(x411&x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	static int32_t x414 = INT32_MIN;
	static int16_t x416 = 14;
	static int32_t t103 = 434671;

    t103 = ((x413==x414)!=(x415&x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 91U;
	int8_t x418 = 5;
	volatile int16_t x419 = 0;
	int64_t x420 = 33959310329184LL;
	volatile int32_t t104 = -665931;

    t104 = ((x417==x418)!=(x419&x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x421 = 130516353;
	uint16_t x423 = 2575U;
	uint32_t x424 = UINT32_MAX;
	int32_t t105 = 204;

    t105 = ((x421==x422)!=(x423&x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 131869112653LL;
	volatile uint64_t x426 = 3958LLU;
	uint64_t x427 = UINT64_MAX;
	volatile uint32_t x428 = UINT32_MAX;

    t106 = ((x425==x426)!=(x427&x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 8811U;
	int8_t x432 = -1;
	int32_t t107 = 40206;

    t107 = ((x429==x430)!=(x431&x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MAX;
	int64_t x435 = INT64_MIN;
	int32_t t108 = 1232220;

    t108 = ((x433==x434)!=(x435&x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x437 = 124U;
	int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	int32_t t109 = 9430;

    t109 = ((x437==x438)!=(x439&x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = 6;
	volatile int64_t x444 = INT64_MAX;

    t110 = ((x441==x442)!=(x443&x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = -3289;
	uint64_t x446 = UINT64_MAX;
	static uint64_t x447 = 9LLU;
	static volatile int8_t x448 = INT8_MAX;
	volatile int32_t t111 = 62;

    t111 = ((x445==x446)!=(x447&x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 1U;
	int8_t x450 = INT8_MAX;
	uint32_t x452 = UINT32_MAX;
	volatile int32_t t112 = 159066292;

    t112 = ((x449==x450)!=(x451&x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x453 = UINT64_MAX;
	int64_t x454 = -31921928678859240LL;
	int8_t x455 = INT8_MIN;
	int16_t x456 = INT16_MIN;

    t113 = ((x453==x454)!=(x455&x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	volatile int32_t x458 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	int64_t x460 = 2298961248051854358LL;
	int32_t t114 = 788310818;

    t114 = ((x457==x458)!=(x459&x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x461 = -2210;
	int16_t x462 = -1;
	int16_t x463 = -2754;
	int16_t x464 = 3;

    t115 = ((x461==x462)!=(x463&x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = INT8_MAX;
	int32_t x467 = INT32_MAX;
	volatile uint32_t x468 = 1158408U;

    t116 = ((x465==x466)!=(x467&x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = 10257;
	volatile uint8_t x470 = 3U;
	static volatile uint64_t x472 = 160142098464934300LLU;
	int32_t t117 = 16139;

    t117 = ((x469==x470)!=(x471&x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	static int16_t x474 = 2525;
	uint16_t x475 = UINT16_MAX;
	int32_t t118 = 1;

    t118 = ((x473==x474)!=(x475&x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	volatile uint32_t x478 = UINT32_MAX;
	int8_t x479 = 27;
	uint16_t x480 = 6U;
	volatile int32_t t119 = 60;

    t119 = ((x477==x478)!=(x479&x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = INT64_MIN;
	volatile uint8_t x482 = 13U;

    t120 = ((x481==x482)!=(x483&x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = INT16_MIN;
	int32_t x487 = -1;
	static int32_t x488 = INT32_MAX;
	volatile int32_t t121 = -114161;

    t121 = ((x485==x486)!=(x487&x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = 2;
	static int8_t x491 = INT8_MIN;
	uint8_t x492 = 53U;
	static volatile int32_t t122 = -1;

    t122 = ((x489==x490)!=(x491&x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x494 = 2U;
	int16_t x495 = 79;
	volatile int8_t x496 = -1;
	volatile int32_t t123 = -139560;

    t123 = ((x493==x494)!=(x495&x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 105U;
	int32_t x498 = -1061;
	int32_t t124 = 19350249;

    t124 = ((x497==x498)!=(x499&x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MIN;
	volatile uint64_t x502 = 3149689778862917LLU;
	int16_t x503 = INT16_MIN;
	uint16_t x504 = UINT16_MAX;
	int32_t t125 = -214072;

    t125 = ((x501==x502)!=(x503&x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int64_t x506 = -1LL;
	uint16_t x507 = 12U;
	int32_t x508 = -117;
	volatile int32_t t126 = -314229;

    t126 = ((x505==x506)!=(x507&x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 180LL;
	static int16_t x511 = -1;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = -1234;

    t127 = ((x509==x510)!=(x511&x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = 1U;
	volatile uint8_t x514 = 0U;
	uint8_t x515 = 11U;
	int32_t x516 = INT32_MIN;
	volatile int32_t t128 = -23;

    t128 = ((x513==x514)!=(x515&x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = -1;
	int8_t x519 = -48;
	static volatile int64_t x520 = -3343LL;
	static int32_t t129 = 707;

    t129 = ((x517==x518)!=(x519&x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = UINT32_MAX;

    t130 = ((x521==x522)!=(x523&x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint8_t x526 = 91U;
	volatile int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MAX;
	int32_t t131 = 8;

    t131 = ((x525==x526)!=(x527&x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	int16_t x530 = 11;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -1;
	int32_t t132 = -39905236;

    t132 = ((x529==x530)!=(x531&x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 73U;
	int32_t x534 = 8;
	int16_t x536 = INT16_MIN;
	int32_t t133 = 0;

    t133 = ((x533==x534)!=(x535&x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MIN;
	static volatile int64_t x539 = 7093876425799LL;
	int64_t x540 = INT64_MIN;
	int32_t t134 = -1666145;

    t134 = ((x537==x538)!=(x539&x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x543 = -1;
	int32_t t135 = -704;

    t135 = ((x541==x542)!=(x543&x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	static volatile int32_t x547 = -1;
	uint64_t x548 = 1509391853100930214LLU;
	int32_t t136 = 78450;

    t136 = ((x545==x546)!=(x547&x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	int32_t x550 = -1;
	int16_t x551 = -5;
	static int32_t t137 = -133633905;

    t137 = ((x549==x550)!=(x551&x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x554 = INT64_MIN;
	int8_t x555 = -2;
	static uint64_t x556 = UINT64_MAX;

    t138 = ((x553==x554)!=(x555&x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = -5;
	int8_t x559 = -1;
	static int32_t t139 = -444;

    t139 = ((x557==x558)!=(x559&x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = 6;
	volatile int64_t x562 = INT64_MAX;
	volatile int64_t x563 = -4072612116815LL;
	volatile int64_t x564 = INT64_MAX;
	int32_t t140 = -285692;

    t140 = ((x561==x562)!=(x563&x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x566 = UINT16_MAX;
	int64_t x567 = INT64_MIN;
	int16_t x568 = 155;
	int32_t t141 = -880242;

    t141 = ((x565==x566)!=(x567&x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x571 = 112;
	int16_t x572 = INT16_MAX;
	int32_t t142 = 5;

    t142 = ((x569==x570)!=(x571&x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	static int64_t x574 = INT64_MAX;
	static int64_t x575 = 7727267LL;
	int32_t t143 = 31619433;

    t143 = ((x573==x574)!=(x575&x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x577 = -1LL;
	static int64_t x578 = 1398779LL;
	static volatile int16_t x579 = -147;
	volatile uint16_t x580 = 0U;
	volatile int32_t t144 = -112066200;

    t144 = ((x577==x578)!=(x579&x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile uint32_t x582 = 742939395U;
	volatile int32_t x583 = -325851;
	int8_t x584 = INT8_MAX;
	int32_t t145 = -1654741;

    t145 = ((x581==x582)!=(x583&x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 3U;
	int16_t x586 = 1571;
	uint32_t x587 = 36U;
	int8_t x588 = INT8_MIN;

    t146 = ((x585==x586)!=(x587&x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x590 = UINT16_MAX;
	int64_t x592 = INT64_MIN;

    t147 = ((x589==x590)!=(x591&x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -702982104LL;
	static int16_t x594 = 45;
	uint64_t x595 = 25850513LLU;
	static int64_t x596 = INT64_MAX;
	volatile int32_t t148 = -37701227;

    t148 = ((x593==x594)!=(x595&x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	static uint32_t x599 = UINT32_MAX;
	volatile int8_t x600 = INT8_MAX;
	int32_t t149 = 135;

    t149 = ((x597==x598)!=(x599&x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = -1;
	static uint64_t x602 = UINT64_MAX;
	int64_t x603 = INT64_MIN;
	volatile int32_t t150 = -100;

    t150 = ((x601==x602)!=(x603&x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MAX;
	uint8_t x606 = 5U;
	int8_t x607 = -1;
	int8_t x608 = 1;
	int32_t t151 = 635;

    t151 = ((x605==x606)!=(x607&x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = -1;
	static int16_t x610 = INT16_MAX;
	int32_t x611 = INT32_MIN;
	int64_t x612 = 87091801LL;
	static int32_t t152 = -496627;

    t152 = ((x609==x610)!=(x611&x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = INT32_MAX;
	int8_t x614 = -1;
	int16_t x615 = INT16_MIN;
	uint64_t x616 = 5803829619324572275LLU;

    t153 = ((x613==x614)!=(x615&x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = 71;
	int32_t x618 = -88592;
	int32_t x619 = -1;
	int32_t t154 = 192766254;

    t154 = ((x617==x618)!=(x619&x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 55U;
	static uint32_t x622 = UINT32_MAX;
	volatile int8_t x623 = 3;
	int32_t t155 = 1783127;

    t155 = ((x621==x622)!=(x623&x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	int32_t x626 = INT32_MIN;
	uint8_t x627 = UINT8_MAX;
	int16_t x628 = INT16_MIN;
	static int32_t t156 = -13;

    t156 = ((x625==x626)!=(x627&x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = -1LL;
	uint8_t x631 = 100U;
	int8_t x632 = -11;

    t157 = ((x629==x630)!=(x631&x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = -54234;
	static volatile int64_t x635 = INT64_MIN;
	volatile int64_t x636 = INT64_MIN;
	volatile int32_t t158 = -3678477;

    t158 = ((x633==x634)!=(x635&x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MIN;
	volatile uint16_t x638 = 29U;
	volatile int16_t x639 = 23;
	int32_t t159 = 15908;

    t159 = ((x637==x638)!=(x639&x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 4392U;
	volatile int8_t x643 = INT8_MAX;
	static uint64_t x644 = UINT64_MAX;
	volatile int32_t t160 = -130840;

    t160 = ((x641==x642)!=(x643&x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 70U;
	static int32_t x646 = -481;
	int32_t x647 = 693244721;
	uint64_t x648 = UINT64_MAX;
	volatile int32_t t161 = 203281378;

    t161 = ((x645==x646)!=(x647&x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -4;
	volatile int64_t x650 = INT64_MIN;
	int16_t x651 = INT16_MIN;
	int8_t x652 = INT8_MIN;
	int32_t t162 = -1;

    t162 = ((x649==x650)!=(x651&x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	int8_t x654 = -1;
	volatile int32_t x655 = -1;
	volatile int64_t x656 = INT64_MAX;
	int32_t t163 = 34542;

    t163 = ((x653==x654)!=(x655&x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = INT32_MAX;
	int32_t x658 = INT32_MIN;
	int32_t x659 = INT32_MAX;
	static int32_t x660 = INT32_MAX;

    t164 = ((x657==x658)!=(x659&x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = INT8_MAX;
	int64_t x663 = INT64_MAX;
	int64_t x664 = 128683063920LL;
	static int32_t t165 = 22;

    t165 = ((x661==x662)!=(x663&x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = UINT16_MAX;
	static volatile int64_t x668 = -1LL;
	volatile int32_t t166 = -36242;

    t166 = ((x665==x666)!=(x667&x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	volatile int16_t x670 = -1;
	volatile int32_t x671 = -3729441;
	int32_t x672 = INT32_MAX;
	int32_t t167 = -495;

    t167 = ((x669==x670)!=(x671&x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -3;
	volatile int8_t x674 = INT8_MAX;
	int8_t x675 = 1;
	volatile int64_t x676 = INT64_MIN;
	volatile int32_t t168 = -86642;

    t168 = ((x673==x674)!=(x675&x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	uint64_t x680 = UINT64_MAX;
	static volatile int32_t t169 = 181541;

    t169 = ((x677==x678)!=(x679&x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x681 = -121;
	static int8_t x682 = INT8_MIN;
	int64_t x683 = -1LL;
	volatile int32_t x684 = 1;
	volatile int32_t t170 = 0;

    t170 = ((x681==x682)!=(x683&x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = 105;
	static int64_t x686 = INT64_MIN;
	static volatile uint8_t x687 = 1U;
	static volatile int64_t x688 = INT64_MIN;

    t171 = ((x685==x686)!=(x687&x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = 3794396LL;
	int8_t x691 = INT8_MIN;
	static int8_t x692 = -6;
	int32_t t172 = 6;

    t172 = ((x689==x690)!=(x691&x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = UINT8_MAX;
	uint64_t x695 = 97807224LLU;
	int64_t x696 = -1021LL;

    t173 = ((x693==x694)!=(x695&x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = INT16_MIN;
	int64_t x699 = INT64_MIN;
	int32_t x700 = 1076689;
	volatile int32_t t174 = 214646;

    t174 = ((x697==x698)!=(x699&x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = 2U;
	uint64_t x702 = 85294088292284LLU;
	volatile int64_t x703 = -55838425894180LL;
	volatile int64_t x704 = 21768600624LL;

    t175 = ((x701==x702)!=(x703&x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 17709U;
	int64_t x707 = INT64_MIN;
	int32_t t176 = 15604;

    t176 = ((x705==x706)!=(x707&x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 89610U;
	uint8_t x710 = 8U;
	int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MIN;

    t177 = ((x709==x710)!=(x711&x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -2893866;
	volatile int32_t x715 = 489;
	int8_t x716 = -1;
	volatile int32_t t178 = 3127625;

    t178 = ((x713==x714)!=(x715&x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = -1;
	volatile int8_t x718 = -1;
	static volatile uint8_t x719 = 5U;
	volatile int32_t t179 = -136932407;

    t179 = ((x717==x718)!=(x719&x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x723 = -15;
	volatile uint8_t x724 = 1U;
	volatile int32_t t180 = -965059838;

    t180 = ((x721==x722)!=(x723&x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x727 = INT16_MAX;
	static volatile int32_t t181 = -1906;

    t181 = ((x725==x726)!=(x727&x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	static uint32_t x730 = UINT32_MAX;
	volatile int32_t x731 = 0;
	int16_t x732 = INT16_MIN;
	int32_t t182 = 210753795;

    t182 = ((x729==x730)!=(x731&x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	uint32_t x735 = 506U;
	static int64_t x736 = INT64_MIN;
	int32_t t183 = -12628;

    t183 = ((x733==x734)!=(x735&x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = 117;
	int32_t x738 = -772;
	int16_t x739 = 64;

    t184 = ((x737==x738)!=(x739&x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 245691935;
	int32_t x742 = INT32_MAX;
	int8_t x743 = INT8_MIN;
	int32_t x744 = 1;
	volatile int32_t t185 = 14723979;

    t185 = ((x741==x742)!=(x743&x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 80873509U;
	int8_t x746 = INT8_MIN;
	volatile int64_t x748 = 13858115LL;
	volatile int32_t t186 = 51252;

    t186 = ((x745==x746)!=(x747&x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x752 = UINT8_MAX;
	volatile int32_t t187 = 7062;

    t187 = ((x749==x750)!=(x751&x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = -372127;
	uint32_t x755 = UINT32_MAX;
	int32_t x756 = INT32_MIN;

    t188 = ((x753==x754)!=(x755&x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x759 = INT64_MIN;
	int64_t x760 = INT64_MAX;

    t189 = ((x757==x758)!=(x759&x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	uint16_t x762 = 29987U;
	volatile int32_t x763 = INT32_MIN;
	volatile uint32_t x764 = 36U;

    t190 = ((x761==x762)!=(x763&x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	int32_t x767 = -834717961;
	int32_t x768 = INT32_MIN;

    t191 = ((x765==x766)!=(x767&x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	volatile int16_t x770 = -1;
	int32_t t192 = 3;

    t192 = ((x769==x770)!=(x771&x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = 29LL;
	static int8_t x774 = 1;
	uint8_t x775 = UINT8_MAX;
	static int32_t t193 = -204;

    t193 = ((x773==x774)!=(x775&x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint16_t x777 = 70U;
	static int8_t x778 = 0;
	volatile int16_t x779 = INT16_MIN;
	volatile int32_t t194 = 221;

    t194 = ((x777==x778)!=(x779&x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	volatile int8_t x782 = -3;
	static int16_t x783 = -6;
	uint8_t x784 = 108U;
	int32_t t195 = 18;

    t195 = ((x781==x782)!=(x783&x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 9;
	int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	int8_t x788 = -23;

    t196 = ((x785==x786)!=(x787&x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 28U;
	int32_t x790 = -40508;
	volatile int8_t x791 = -1;
	int32_t t197 = 2;

    t197 = ((x789==x790)!=(x791&x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	uint32_t x794 = 64737149U;
	int32_t x796 = -1;

    t198 = ((x793==x794)!=(x795&x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MIN;
	static volatile int8_t x799 = -1;
	int64_t x800 = INT64_MAX;
	static int32_t t199 = 54705217;

    t199 = ((x797==x798)!=(x799&x800));

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

