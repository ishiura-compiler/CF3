
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

static int8_t x1 = INT8_MIN;
uint16_t x4 = 36U;
uint32_t x7 = 134243U;
static int32_t x8 = INT32_MIN;
volatile uint8_t x9 = 75U;
static volatile int32_t t3 = 50;
volatile uint64_t x18 = 7938695232966945645LLU;
volatile uint32_t x23 = 154U;
volatile int32_t t6 = 200687;
int8_t x31 = 2;
static volatile int32_t t9 = -129033;
static uint8_t x48 = UINT8_MAX;
int32_t t11 = -354823;
static volatile int32_t t13 = -74;
uint32_t x71 = 1923U;
uint8_t x73 = 1U;
volatile int64_t x77 = INT64_MIN;
int64_t x79 = 206261LL;
int32_t x80 = -496;
volatile uint16_t x86 = UINT16_MAX;
int16_t x93 = 46;
int32_t t23 = 1409;
int32_t x99 = INT32_MIN;
volatile int8_t x100 = INT8_MAX;
uint8_t x101 = UINT8_MAX;
volatile int32_t t26 = -816866;
static uint64_t x110 = 2970230465682LLU;
int32_t t27 = -117121;
int8_t x116 = INT8_MAX;
int8_t x117 = 3;
static int32_t x118 = 638672805;
int16_t x125 = INT16_MIN;
uint64_t x129 = 11237205739LLU;
volatile int32_t t32 = -1900708;
uint16_t x134 = UINT16_MAX;
uint64_t x175 = 52162952LLU;
volatile uint64_t x177 = 945099799267342LLU;
volatile int64_t x185 = INT64_MIN;
volatile int32_t x193 = INT32_MIN;
uint8_t x194 = 54U;
int64_t x203 = INT64_MIN;
static uint16_t x205 = 1632U;
static volatile int32_t t51 = -30435465;
uint16_t x210 = 17U;
int32_t x215 = -3078;
uint32_t x217 = 130635U;
static int64_t x220 = INT64_MIN;
int8_t x225 = 4;
int64_t x234 = -3232556LL;
static uint16_t x237 = UINT16_MAX;
int64_t x239 = -532958720288737LL;
uint8_t x241 = UINT8_MAX;
volatile int32_t t60 = 12857;
static uint32_t x248 = 3U;
int32_t x253 = INT32_MIN;
uint32_t x257 = 83U;
int8_t x263 = INT8_MIN;
int16_t x271 = -1;
volatile uint64_t x272 = 12405974303573460LLU;
volatile uint16_t x274 = 937U;
volatile int32_t t68 = 27515;
int32_t x277 = INT32_MIN;
volatile uint16_t x280 = UINT16_MAX;
static volatile int32_t t69 = -23631;
volatile int32_t t70 = 10407722;
int32_t t71 = -180147;
volatile int32_t t72 = -3;
uint64_t x299 = 653LLU;
int16_t x304 = -1;
int16_t x307 = 1;
volatile uint16_t x308 = 155U;
uint8_t x312 = UINT8_MAX;
volatile int32_t t78 = 6853121;
int32_t t79 = -7178;
volatile int32_t t80 = -426210;
volatile int32_t t84 = -33531697;
static int8_t x341 = INT8_MIN;
static int32_t x342 = INT32_MIN;
static volatile int32_t x343 = -1;
int32_t t85 = -8920;
uint16_t x347 = UINT16_MAX;
int64_t x348 = 445293LL;
int64_t x350 = INT64_MIN;
int32_t t87 = 31678038;
int64_t x353 = -999665150317948LL;
int8_t x355 = -1;
volatile int64_t x361 = -1LL;
uint64_t x369 = 85283369196735885LLU;
uint8_t x373 = UINT8_MAX;
static volatile int64_t x375 = 2144185992532049LL;
uint32_t x376 = UINT32_MAX;
uint64_t x384 = 12550145842181203LLU;
uint8_t x385 = UINT8_MAX;
int16_t x387 = -3;
int32_t x394 = 54;
volatile uint64_t x395 = UINT64_MAX;
static volatile int32_t x400 = 19;
uint16_t x401 = UINT16_MAX;
uint8_t x404 = 4U;
int32_t t100 = -129470;
static int16_t x408 = INT16_MIN;
int8_t x414 = -1;
volatile uint16_t x416 = UINT16_MAX;
int32_t x417 = -15063;
uint8_t x419 = 2U;
static volatile int32_t t107 = -197928169;
int8_t x436 = INT8_MIN;
uint64_t x441 = 1969951645034619701LLU;
static int32_t t110 = -49061;
static uint32_t x445 = UINT32_MAX;
volatile int32_t x447 = -1;
int64_t x452 = -1LL;
int8_t x460 = -1;
int8_t x465 = INT8_MIN;
static volatile int32_t t117 = 2282205;
volatile int32_t x477 = -2533458;
int8_t x478 = INT8_MAX;
static int16_t x479 = INT16_MAX;
int8_t x486 = INT8_MIN;
int8_t x488 = INT8_MIN;
int64_t x489 = -229LL;
uint32_t x497 = 5213U;
int8_t x504 = INT8_MAX;
volatile int32_t t125 = -7;
volatile int64_t x513 = -1LL;
volatile uint16_t x521 = UINT16_MAX;
uint8_t x527 = UINT8_MAX;
int32_t x528 = INT32_MIN;
volatile uint64_t x533 = 631772LLU;
int32_t x534 = -1067;
volatile int32_t x537 = -1;
int32_t x538 = INT32_MIN;
volatile int8_t x539 = INT8_MIN;
int32_t x543 = -1;
uint16_t x545 = UINT16_MAX;
int8_t x552 = -1;
static volatile int64_t x554 = INT64_MAX;
int64_t x555 = 747LL;
volatile int64_t x560 = INT64_MIN;
int64_t x564 = 34075036302348LL;
uint16_t x565 = 11810U;
int8_t x570 = -1;
static int32_t x572 = INT32_MAX;
int32_t t142 = 209;
uint16_t x576 = 142U;
volatile int8_t x577 = -17;
int32_t t146 = -774010771;
int32_t t147 = 7;
volatile int32_t x595 = INT32_MIN;
volatile uint64_t x602 = 271241208846700LLU;
int32_t x607 = INT32_MIN;
uint8_t x612 = 31U;
static int64_t x613 = 269562LL;
volatile int16_t x616 = INT16_MAX;
uint32_t x623 = 26041U;
uint8_t x624 = 12U;
int32_t x625 = INT32_MAX;
int32_t x626 = -1;
volatile int64_t x627 = -24633982365189LL;
int16_t x630 = -3;
static volatile int32_t t157 = -2987951;
uint32_t x636 = 84781U;
int8_t x646 = INT8_MIN;
static volatile int16_t x652 = 3273;
int16_t x654 = INT16_MIN;
uint16_t x655 = 3697U;
static volatile int32_t x657 = INT32_MIN;
static int32_t t164 = 6215682;
static volatile int32_t t165 = 402;
static int16_t x669 = INT16_MIN;
int64_t x672 = -39786269LL;
static volatile int32_t t167 = 0;
static uint8_t x674 = UINT8_MAX;
static uint16_t x679 = 11U;
volatile uint8_t x682 = UINT8_MAX;
uint8_t x683 = UINT8_MAX;
volatile uint32_t x687 = 66486U;
int64_t x693 = -3558LL;
int8_t x700 = INT8_MIN;
int32_t t174 = 607;
static int32_t x704 = INT32_MIN;
uint8_t x706 = 1U;
int64_t x709 = INT64_MIN;
int8_t x710 = -1;
static uint16_t x711 = 30U;
volatile int32_t t177 = -29645449;
volatile int32_t x715 = INT32_MAX;
volatile int32_t t179 = 56584;
int64_t x731 = -1LL;
volatile int32_t t184 = -20347151;
volatile int16_t x741 = -1;
volatile uint32_t x744 = 330718583U;
uint64_t x747 = UINT64_MAX;
volatile int32_t t186 = 50106;
int64_t x750 = -1LL;
int32_t x754 = INT32_MAX;
int8_t x759 = -6;
uint64_t x762 = 8200103244092LLU;
volatile int64_t x764 = INT64_MAX;
static volatile uint16_t x767 = 16U;
uint16_t x774 = 24207U;
volatile uint16_t x777 = 1U;
uint32_t x787 = UINT32_MAX;
static int64_t x788 = INT64_MAX;
uint32_t x797 = 84U;
uint16_t x799 = UINT16_MAX;
int32_t t199 = 2;


void f0(void) {
    	int8_t x2 = -61;
	int8_t x3 = 8;
	int32_t t0 = 0;

    t0 = (x1==(x2|(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 6;
	uint64_t x6 = UINT64_MAX;
	volatile int32_t t1 = 115099;

    t1 = (x5==(x6|(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	int32_t x11 = -2532323;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 262;

    t2 = (x9==(x10|(x11!=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = -651;
	static int32_t x14 = 633;
	volatile uint64_t x15 = 8785168832046LLU;
	int16_t x16 = -1;

    t3 = (x13==(x14|(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 25;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 0;

    t4 = (x17==(x18|(x19!=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	uint16_t x24 = 0U;
	int32_t t5 = 131059;

    t5 = (x21==(x22|(x23!=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	volatile uint16_t x26 = UINT16_MAX;
	volatile uint64_t x27 = UINT64_MAX;
	int32_t x28 = 2065245;

    t6 = (x25==(x26|(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	volatile uint32_t x30 = 1U;
	volatile uint16_t x32 = 1567U;
	static int32_t t7 = 4756789;

    t7 = (x29==(x30|(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	uint8_t x34 = UINT8_MAX;
	static uint64_t x35 = 44666400827357371LLU;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -207;

    t8 = (x33==(x34|(x35!=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -1;
	static volatile int16_t x38 = -44;
	int32_t x39 = 563469311;
	int64_t x40 = INT64_MAX;

    t9 = (x37==(x38|(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x42 = 0;
	volatile int32_t x43 = -1;
	int64_t x44 = -1LL;
	volatile int32_t t10 = 7141;

    t10 = (x41==(x42|(x43!=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 252821573LL;
	volatile int64_t x46 = INT64_MIN;
	int32_t x47 = -933783;

    t11 = (x45==(x46|(x47!=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 7U;
	static volatile int64_t x50 = -418554LL;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = 1U;
	int32_t t12 = 1928221;

    t12 = (x49==(x50|(x51!=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MAX;
	volatile int16_t x54 = INT16_MIN;
	static int32_t x55 = 474372275;
	uint64_t x56 = UINT64_MAX;

    t13 = (x53==(x54|(x55!=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = UINT8_MAX;
	static int32_t x58 = -7022535;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = 1LL;
	static int32_t t14 = -225537688;

    t14 = (x57==(x58|(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 2308367;
	int32_t x62 = 3106;
	uint16_t x63 = 3301U;
	volatile int64_t x64 = -1LL;
	volatile int32_t t15 = 764084;

    t15 = (x61==(x62|(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 127U;
	int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 56;

    t16 = (x65==(x66|(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 519374637114LLU;
	uint8_t x70 = 69U;
	uint64_t x72 = 41792668389366656LLU;
	volatile int32_t t17 = 0;

    t17 = (x69==(x70|(x71!=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -1;
	uint64_t x75 = 13LLU;
	uint8_t x76 = 90U;
	int32_t t18 = -1;

    t18 = (x73==(x74|(x75!=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x78 = INT16_MAX;
	int32_t t19 = 0;

    t19 = (x77==(x78|(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 241257U;
	int16_t x82 = 6276;
	volatile int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t20 = 8;

    t20 = (x81==(x82|(x83!=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = -14542;
	volatile int32_t t21 = -3714766;

    t21 = (x85==(x86|(x87!=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MAX;
	int16_t x90 = 0;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	static int32_t t22 = 676176251;

    t22 = (x89==(x90|(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = 3704358635226965470LLU;
	int64_t x95 = INT64_MIN;
	uint64_t x96 = 331LLU;

    t23 = (x93==(x94|(x95!=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	uint8_t x98 = 0U;
	volatile int32_t t24 = 0;

    t24 = (x97==(x98|(x99!=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x102 = 45U;
	int64_t x103 = -1LL;
	volatile int16_t x104 = -1;
	volatile int32_t t25 = -125454874;

    t25 = (x101==(x102|(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	static int8_t x106 = 24;
	static int8_t x107 = INT8_MIN;
	static int64_t x108 = INT64_MIN;

    t26 = (x105==(x106|(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x109 = 9868U;
	static int64_t x111 = -25142430680231LL;
	volatile uint8_t x112 = 2U;

    t27 = (x109==(x110|(x111!=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = INT8_MIN;
	volatile uint32_t x114 = UINT32_MAX;
	int32_t x115 = -1;
	volatile int32_t t28 = 1019818;

    t28 = (x113==(x114|(x115!=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x119 = UINT64_MAX;
	static int8_t x120 = INT8_MIN;
	int32_t t29 = 235590;

    t29 = (x117==(x118|(x119!=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 282U;
	uint8_t x122 = 17U;
	int8_t x123 = INT8_MIN;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -1;

    t30 = (x121==(x122|(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = -1;
	volatile uint8_t x127 = 97U;
	static uint8_t x128 = 5U;
	static volatile int32_t t31 = 6;

    t31 = (x125==(x126|(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x130 = INT64_MAX;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -5642LL;

    t32 = (x129==(x130|(x131!=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 1168;
	uint16_t x135 = 32689U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 2221310;

    t33 = (x133==(x134|(x135!=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	static int16_t x138 = INT16_MIN;
	volatile uint8_t x139 = UINT8_MAX;
	uint64_t x140 = 458928021LLU;
	static volatile int32_t t34 = -66179583;

    t34 = (x137==(x138|(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 11933251U;
	int16_t x142 = INT16_MAX;
	volatile int32_t x143 = INT32_MIN;
	static volatile uint16_t x144 = 6U;
	int32_t t35 = 13637;

    t35 = (x141==(x142|(x143!=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	volatile uint32_t x148 = UINT32_MAX;
	static int32_t t36 = -1013;

    t36 = (x145==(x146|(x147!=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static int8_t x150 = INT8_MAX;
	static volatile uint16_t x151 = 32U;
	int16_t x152 = 214;
	static int32_t t37 = 1325;

    t37 = (x149==(x150|(x151!=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = UINT16_MAX;
	volatile int64_t x154 = -1LL;
	static int8_t x155 = INT8_MAX;
	int64_t x156 = -43112241LL;
	volatile int32_t t38 = -429662;

    t38 = (x153==(x154|(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MIN;
	volatile int32_t x158 = INT32_MIN;
	uint16_t x159 = 27U;
	uint64_t x160 = UINT64_MAX;
	static int32_t t39 = 0;

    t39 = (x157==(x158|(x159!=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x161 = 0U;
	int64_t x162 = -1775799LL;
	static int8_t x163 = INT8_MIN;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = -64397;

    t40 = (x161==(x162|(x163!=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 64928LL;
	static uint32_t x166 = 30007861U;
	uint16_t x167 = 230U;
	int32_t x168 = 6233;
	int32_t t41 = -1;

    t41 = (x165==(x166|(x167!=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	static uint8_t x171 = UINT8_MAX;
	static uint32_t x172 = UINT32_MAX;
	static int32_t t42 = -72364;

    t42 = (x169==(x170|(x171!=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 1508607495712943447LLU;
	static volatile uint32_t x174 = UINT32_MAX;
	int64_t x176 = INT64_MIN;
	static int32_t t43 = 60984248;

    t43 = (x173==(x174|(x175!=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = INT64_MIN;
	int16_t x179 = -1;
	int8_t x180 = 0;
	volatile int32_t t44 = -9914;

    t44 = (x177==(x178|(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 1U;
	int16_t x182 = 364;
	volatile uint16_t x183 = UINT16_MAX;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t45 = -1;

    t45 = (x181==(x182|(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = UINT8_MAX;
	static int64_t x187 = INT64_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 30590147;

    t46 = (x185==(x186|(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MIN;
	static volatile uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -62454234;

    t47 = (x189==(x190|(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x195 = 1;
	int8_t x196 = 4;
	volatile int32_t t48 = -75023;

    t48 = (x193==(x194|(x195!=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -1LL;
	volatile int8_t x198 = INT8_MAX;
	volatile int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -14;

    t49 = (x197==(x198|(x199!=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	volatile uint16_t x202 = UINT16_MAX;
	static volatile uint32_t x204 = 104593481U;
	volatile int32_t t50 = 31962;

    t50 = (x201==(x202|(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = -5;
	static int8_t x207 = -1;
	static volatile uint16_t x208 = UINT16_MAX;

    t51 = (x205==(x206|(x207!=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = UINT64_MAX;
	int16_t x211 = -101;
	static uint64_t x212 = UINT64_MAX;
	int32_t t52 = 1;

    t52 = (x209==(x210|(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -257;
	int8_t x214 = 1;
	int64_t x216 = 274997840124241LL;
	volatile int32_t t53 = -1;

    t53 = (x213==(x214|(x215!=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MAX;
	static uint64_t x219 = UINT64_MAX;
	static int32_t t54 = -1;

    t54 = (x217==(x218|(x219!=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = UINT16_MAX;
	int32_t x222 = -602240891;
	static int16_t x223 = 5;
	int8_t x224 = 5;
	volatile int32_t t55 = -66225;

    t55 = (x221==(x222|(x223!=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = 0U;
	uint16_t x227 = 641U;
	static volatile int64_t x228 = INT64_MIN;
	static volatile int32_t t56 = -2;

    t56 = (x225==(x226|(x227!=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MAX;
	volatile int16_t x232 = INT16_MIN;
	int32_t t57 = 15024343;

    t57 = (x229==(x230|(x231!=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = 12399;
	int32_t t58 = 4836862;

    t58 = (x233==(x234|(x235!=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x238 = -1LL;
	int64_t x240 = INT64_MIN;
	int32_t t59 = -50;

    t59 = (x237==(x238|(x239!=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x242 = 31U;
	uint8_t x243 = 2U;
	int32_t x244 = 1;

    t60 = (x241==(x242|(x243!=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = 3420U;
	volatile uint64_t x246 = 364539LLU;
	uint32_t x247 = 342U;
	volatile int32_t t61 = 670603;

    t61 = (x245==(x246|(x247!=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 4146;
	volatile int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MIN;
	int32_t x252 = 277170;
	int32_t t62 = -49;

    t62 = (x249==(x250|(x251!=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x254 = 32092U;
	int8_t x255 = -4;
	uint8_t x256 = 1U;
	int32_t t63 = -3817;

    t63 = (x253==(x254|(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x258 = 15U;
	int64_t x259 = INT64_MIN;
	volatile int32_t x260 = 8;
	static volatile int32_t t64 = -35331;

    t64 = (x257==(x258|(x259!=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x261 = UINT32_MAX;
	static volatile int16_t x262 = INT16_MAX;
	int64_t x264 = 1571669345044106892LL;
	int32_t t65 = 37068;

    t65 = (x261==(x262|(x263!=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 1;
	uint16_t x266 = 69U;
	static volatile uint32_t x267 = UINT32_MAX;
	static int32_t x268 = INT32_MIN;
	int32_t t66 = -14;

    t66 = (x265==(x266|(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	int64_t x270 = INT64_MAX;
	volatile int32_t t67 = 3;

    t67 = (x269==(x270|(x271!=x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -96168737;
	static volatile int64_t x275 = 6031LL;
	int8_t x276 = INT8_MIN;

    t68 = (x273==(x274|(x275!=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x278 = 1U;
	volatile int64_t x279 = INT64_MIN;

    t69 = (x277==(x278|(x279!=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = 0U;
	static int8_t x283 = INT8_MIN;
	uint64_t x284 = 5879663301836LLU;

    t70 = (x281==(x282|(x283!=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -63;
	uint32_t x286 = 45U;
	uint32_t x287 = UINT32_MAX;
	volatile int64_t x288 = INT64_MIN;

    t71 = (x285==(x286|(x287!=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	static int8_t x290 = -1;
	volatile uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 11U;

    t72 = (x289==(x290|(x291!=x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 12315;
	uint8_t x294 = 3U;
	int8_t x295 = -12;
	int64_t x296 = INT64_MIN;
	static volatile int32_t t73 = -209661802;

    t73 = (x293==(x294|(x295!=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	int8_t x298 = 1;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t74 = 663179;

    t74 = (x297==(x298|(x299!=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x301 = 1336490614091034567LLU;
	int64_t x302 = INT64_MIN;
	int64_t x303 = -1LL;
	int32_t t75 = 2196;

    t75 = (x301==(x302|(x303!=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 49U;
	uint64_t x306 = 15LLU;
	volatile int32_t t76 = 2;

    t76 = (x305==(x306|(x307!=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	static int16_t x310 = INT16_MAX;
	static int64_t x311 = INT64_MIN;
	volatile int32_t t77 = -1;

    t77 = (x309==(x310|(x311!=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	volatile int8_t x314 = -1;
	int64_t x315 = -1LL;
	static int16_t x316 = 1;

    t78 = (x313==(x314|(x315!=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	int16_t x318 = 28;
	static uint64_t x319 = UINT64_MAX;
	int64_t x320 = -1LL;

    t79 = (x317==(x318|(x319!=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MAX;
	uint8_t x323 = 0U;
	int8_t x324 = -1;

    t80 = (x321==(x322|(x323!=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x325 = -15289;
	int16_t x326 = 53;
	uint64_t x327 = UINT64_MAX;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 0;

    t81 = (x325==(x326|(x327!=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 1106592714LL;
	int16_t x330 = 1005;
	uint64_t x331 = 3782LLU;
	int32_t x332 = INT32_MAX;
	volatile int32_t t82 = 2853939;

    t82 = (x329==(x330|(x331!=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MAX;
	static int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	int8_t x336 = -1;
	int32_t t83 = 955;

    t83 = (x333==(x334|(x335!=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 648;
	static int32_t x338 = -496240059;
	int8_t x339 = -1;
	int64_t x340 = -9075462600499LL;

    t84 = (x337==(x338|(x339!=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x344 = -4674;

    t85 = (x341==(x342|(x343!=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 61900252233181LLU;
	volatile uint32_t x346 = 14122193U;
	volatile int32_t t86 = 421459698;

    t86 = (x345==(x346|(x347!=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x349 = 1636;
	int8_t x351 = INT8_MIN;
	static int8_t x352 = -1;

    t87 = (x349==(x350|(x351!=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = 546472135166LLU;
	uint32_t x356 = 228499648U;
	static volatile int32_t t88 = 5;

    t88 = (x353==(x354|(x355!=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	uint16_t x358 = 48U;
	int64_t x359 = 68LL;
	volatile uint16_t x360 = 27U;
	int32_t t89 = -7;

    t89 = (x357==(x358|(x359!=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x362 = 3;
	int32_t x363 = INT32_MIN;
	static uint64_t x364 = UINT64_MAX;
	static volatile int32_t t90 = 1;

    t90 = (x361==(x362|(x363!=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x365 = -208754;
	int32_t x366 = -1;
	volatile int8_t x367 = 0;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = -1;

    t91 = (x365==(x366|(x367!=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x370 = UINT8_MAX;
	int64_t x371 = -1LL;
	uint64_t x372 = UINT64_MAX;
	static int32_t t92 = -1076;

    t92 = (x369==(x370|(x371!=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x374 = 636;
	volatile int32_t t93 = 10618405;

    t93 = (x373==(x374|(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MAX;
	static int64_t x379 = -1LL;
	int8_t x380 = -55;
	volatile int32_t t94 = 24935816;

    t94 = (x377==(x378|(x379!=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	int8_t x382 = INT8_MAX;
	int8_t x383 = -1;
	int32_t t95 = -28281425;

    t95 = (x381==(x382|(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x386 = INT32_MAX;
	uint64_t x388 = 941356669498445873LLU;
	volatile int32_t t96 = -7;

    t96 = (x385==(x386|(x387!=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int64_t x391 = 22150819903560435LL;
	static uint64_t x392 = 12LLU;
	volatile int32_t t97 = 14971409;

    t97 = (x389==(x390|(x391!=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	volatile int16_t x396 = INT16_MIN;
	int32_t t98 = 450852779;

    t98 = (x393==(x394|(x395!=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = INT64_MIN;
	int32_t x398 = -1;
	uint32_t x399 = 5155U;
	int32_t t99 = 22999;

    t99 = (x397==(x398|(x399!=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = INT32_MIN;
	int32_t x403 = -5;

    t100 = (x401==(x402|(x403!=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = 39U;
	uint32_t x406 = UINT32_MAX;
	static volatile uint8_t x407 = 30U;
	volatile int32_t t101 = -7758;

    t101 = (x405==(x406|(x407!=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -2930475715LL;
	uint8_t x410 = UINT8_MAX;
	int8_t x411 = -1;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t102 = 2175;

    t102 = (x409==(x410|(x411!=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	uint8_t x415 = 20U;
	int32_t t103 = 186282928;

    t103 = (x413==(x414|(x415!=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x418 = INT32_MIN;
	uint16_t x420 = UINT16_MAX;
	int32_t t104 = 833;

    t104 = (x417==(x418|(x419!=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = -1;
	int8_t x423 = INT8_MIN;
	volatile int64_t x424 = -18LL;
	volatile int32_t t105 = -12537;

    t105 = (x421==(x422|(x423!=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x425 = -1514587630720043166LL;
	int64_t x426 = INT64_MIN;
	static volatile uint32_t x427 = 0U;
	volatile uint8_t x428 = 85U;
	static volatile int32_t t106 = -2498;

    t106 = (x425==(x426|(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MAX;
	uint8_t x430 = 4U;
	volatile uint32_t x431 = UINT32_MAX;
	int64_t x432 = INT64_MIN;

    t107 = (x429==(x430|(x431!=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 480675874646335LLU;
	volatile uint64_t x434 = UINT64_MAX;
	uint64_t x435 = 209134346LLU;
	volatile int32_t t108 = 3;

    t108 = (x433==(x434|(x435!=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 3;
	static int16_t x438 = INT16_MIN;
	int16_t x439 = -1;
	static uint64_t x440 = 1962LLU;
	int32_t t109 = 228;

    t109 = (x437==(x438|(x439!=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x442 = -1;
	static uint32_t x443 = 950667793U;
	static int64_t x444 = -903143LL;

    t110 = (x441==(x442|(x443!=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x446 = 46U;
	int64_t x448 = 401870678LL;
	static volatile int32_t t111 = 77;

    t111 = (x445==(x446|(x447!=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = 2;
	int8_t x450 = -1;
	static uint8_t x451 = UINT8_MAX;
	static volatile int32_t t112 = 926;

    t112 = (x449==(x450|(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	static volatile int8_t x454 = -1;
	static volatile int64_t x455 = -2512948453533005LL;
	static int32_t x456 = INT32_MIN;
	volatile int32_t t113 = -12484;

    t113 = (x453==(x454|(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MIN;
	static int8_t x459 = -61;
	int32_t t114 = 5157084;

    t114 = (x457==(x458|(x459!=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	uint16_t x462 = 3U;
	static int8_t x463 = INT8_MIN;
	volatile int32_t x464 = INT32_MIN;
	static int32_t t115 = -31312;

    t115 = (x461==(x462|(x463!=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = 0U;
	static int8_t x467 = INT8_MAX;
	int32_t x468 = -14132;
	int32_t t116 = 708018;

    t116 = (x465==(x466|(x467!=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	volatile uint16_t x470 = 5935U;
	int8_t x471 = -1;
	int32_t x472 = INT32_MAX;

    t117 = (x469==(x470|(x471!=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 27U;
	volatile int8_t x474 = INT8_MIN;
	int64_t x475 = INT64_MAX;
	static int16_t x476 = -125;
	volatile int32_t t118 = 22939;

    t118 = (x473==(x474|(x475!=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x480 = -27;
	volatile int32_t t119 = 1705;

    t119 = (x477==(x478|(x479!=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 28492U;
	int64_t x482 = INT64_MAX;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = 1;
	volatile int32_t t120 = -180;

    t120 = (x481==(x482|(x483!=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 4683;
	int64_t x487 = INT64_MIN;
	volatile int32_t t121 = 6212;

    t121 = (x485==(x486|(x487!=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = UINT8_MAX;
	volatile int8_t x491 = INT8_MIN;
	static int64_t x492 = -1LL;
	int32_t t122 = -20140;

    t122 = (x489==(x490|(x491!=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = 0;
	uint32_t x494 = UINT32_MAX;
	static int8_t x495 = 1;
	volatile int8_t x496 = -25;
	static int32_t t123 = -32;

    t123 = (x493==(x494|(x495!=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x498 = 2708U;
	int64_t x499 = -43891160LL;
	uint32_t x500 = UINT32_MAX;
	volatile int32_t t124 = -108;

    t124 = (x497==(x498|(x499!=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 312219409U;
	int64_t x502 = INT64_MIN;
	int16_t x503 = -1;

    t125 = (x501==(x502|(x503!=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	int16_t x506 = -1;
	uint8_t x507 = 11U;
	int32_t x508 = INT32_MIN;
	int32_t t126 = 20139;

    t126 = (x505==(x506|(x507!=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -77;
	volatile int8_t x510 = INT8_MIN;
	int64_t x511 = -1LL;
	volatile int64_t x512 = INT64_MIN;
	int32_t t127 = -38180368;

    t127 = (x509==(x510|(x511!=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x514 = UINT8_MAX;
	int8_t x515 = INT8_MAX;
	uint64_t x516 = UINT64_MAX;
	volatile int32_t t128 = -1117304;

    t128 = (x513==(x514|(x515!=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MAX;
	int32_t x518 = -30288;
	volatile int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t129 = -1375573;

    t129 = (x517==(x518|(x519!=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	int32_t x523 = 42;
	int8_t x524 = INT8_MAX;
	static int32_t t130 = -5424036;

    t130 = (x521==(x522|(x523!=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = INT32_MIN;
	static int8_t x526 = -11;
	int32_t t131 = 521544189;

    t131 = (x525==(x526|(x527!=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 1009;
	volatile int64_t x530 = -1LL;
	uint32_t x531 = UINT32_MAX;
	static volatile int64_t x532 = -20345048884249191LL;
	volatile int32_t t132 = -46575731;

    t132 = (x529==(x530|(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MIN;
	int32_t x536 = 30;
	volatile int32_t t133 = 38339;

    t133 = (x533==(x534|(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x540 = INT16_MAX;
	volatile int32_t t134 = -127883205;

    t134 = (x537==(x538|(x539!=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = INT8_MIN;
	volatile uint16_t x542 = 74U;
	static int8_t x544 = INT8_MIN;
	int32_t t135 = 23509962;

    t135 = (x541==(x542|(x543!=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x546 = INT16_MIN;
	uint32_t x547 = 773U;
	uint16_t x548 = UINT16_MAX;
	int32_t t136 = 17;

    t136 = (x545==(x546|(x547!=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -1;
	int32_t x550 = INT32_MIN;
	uint8_t x551 = 34U;
	volatile int32_t t137 = -17347186;

    t137 = (x549==(x550|(x551!=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 91200U;
	static uint32_t x556 = 6231514U;
	volatile int32_t t138 = 285907;

    t138 = (x553==(x554|(x555!=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 52U;
	int32_t x558 = -3014;
	int64_t x559 = INT64_MAX;
	volatile int32_t t139 = 3;

    t139 = (x557==(x558|(x559!=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	volatile int32_t x562 = 1622;
	static uint16_t x563 = 69U;
	int32_t t140 = 16;

    t140 = (x561==(x562|(x563!=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x566 = -9015262;
	int16_t x567 = INT16_MIN;
	int8_t x568 = -24;
	static int32_t t141 = -1;

    t141 = (x565==(x566|(x567!=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 436384;
	uint32_t x571 = 352449U;

    t142 = (x569==(x570|(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint64_t x574 = 946707460973LLU;
	uint8_t x575 = 0U;
	int32_t t143 = 0;

    t143 = (x573==(x574|(x575!=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = UINT16_MAX;
	volatile int32_t x579 = -1;
	uint64_t x580 = UINT64_MAX;
	volatile int32_t t144 = 1;

    t144 = (x577==(x578|(x579!=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	uint8_t x582 = 24U;
	volatile uint64_t x583 = 6LLU;
	uint16_t x584 = UINT16_MAX;
	static volatile int32_t t145 = 294509295;

    t145 = (x581==(x582|(x583!=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	static int64_t x586 = 40187434LL;
	volatile int32_t x587 = INT32_MAX;
	static int8_t x588 = -53;

    t146 = (x585==(x586|(x587!=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x590 = 1U;
	volatile int8_t x591 = -1;
	volatile int8_t x592 = 7;

    t147 = (x589==(x590|(x591!=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	static int32_t x594 = INT32_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -611601;

    t148 = (x593==(x594|(x595!=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x598 = 8849371;
	int64_t x599 = INT64_MAX;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t149 = 365;

    t149 = (x597==(x598|(x599!=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x603 = INT8_MIN;
	uint32_t x604 = 6495U;
	volatile int32_t t150 = 0;

    t150 = (x601==(x602|(x603!=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int16_t x606 = INT16_MIN;
	uint16_t x608 = 59U;
	static int32_t t151 = -11;

    t151 = (x605==(x606|(x607!=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -1;
	static int64_t x610 = -1LL;
	volatile int32_t x611 = INT32_MIN;
	int32_t t152 = -29;

    t152 = (x609==(x610|(x611!=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x614 = INT8_MIN;
	uint16_t x615 = UINT16_MAX;
	int32_t t153 = -5;

    t153 = (x613==(x614|(x615!=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x618 = INT8_MIN;
	uint32_t x619 = 52999U;
	uint32_t x620 = UINT32_MAX;
	int32_t t154 = 28;

    t154 = (x617==(x618|(x619!=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	int8_t x622 = INT8_MIN;
	volatile int32_t t155 = 26729;

    t155 = (x621==(x622|(x623!=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x628 = 3U;
	int32_t t156 = -79898798;

    t156 = (x625==(x626|(x627!=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = -7857;
	static int32_t x631 = -1483050;
	uint16_t x632 = UINT16_MAX;

    t157 = (x629==(x630|(x631!=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	int64_t x634 = INT64_MIN;
	int32_t x635 = INT32_MIN;
	int32_t t158 = 144;

    t158 = (x633==(x634|(x635!=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	int16_t x638 = 6;
	volatile int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MAX;
	volatile int32_t t159 = -2;

    t159 = (x637==(x638|(x639!=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	static int8_t x642 = INT8_MIN;
	volatile int16_t x643 = INT16_MIN;
	uint8_t x644 = 47U;
	volatile int32_t t160 = -6823;

    t160 = (x641==(x642|(x643!=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x645 = -1LL;
	int32_t x647 = INT32_MIN;
	uint8_t x648 = 55U;
	static int32_t t161 = -74;

    t161 = (x645==(x646|(x647!=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint8_t x650 = 1U;
	int32_t x651 = -180177;
	int32_t t162 = -259258776;

    t162 = (x649==(x650|(x651!=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	uint16_t x656 = 44U;
	volatile int32_t t163 = 4735444;

    t163 = (x653==(x654|(x655!=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = -1;
	volatile int8_t x659 = INT8_MIN;
	int8_t x660 = 6;

    t164 = (x657==(x658|(x659!=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MAX;
	int16_t x662 = -1;
	int32_t x663 = INT32_MAX;
	int8_t x664 = -1;

    t165 = (x661==(x662|(x663!=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x665 = -1;
	uint16_t x666 = 984U;
	volatile int32_t x667 = INT32_MIN;
	int32_t x668 = INT32_MIN;
	volatile int32_t t166 = -7961;

    t166 = (x665==(x666|(x667!=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = INT32_MAX;
	volatile int64_t x671 = -235391LL;

    t167 = (x669==(x670|(x671!=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	static int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MIN;
	volatile int32_t t168 = 220;

    t168 = (x673==(x674|(x675!=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 45019989609LLU;
	static int32_t x678 = 1765;
	volatile int64_t x680 = INT64_MAX;
	int32_t t169 = 20357365;

    t169 = (x677==(x678|(x679!=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -56;
	uint16_t x684 = 792U;
	static int32_t t170 = -26;

    t170 = (x681==(x682|(x683!=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 6056U;
	uint32_t x686 = 164U;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 95;

    t171 = (x685==(x686|(x687!=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 4087;
	int32_t x690 = 1580353;
	int16_t x691 = -1;
	volatile int8_t x692 = INT8_MAX;
	volatile int32_t t172 = 160;

    t172 = (x689==(x690|(x691!=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MAX;
	int64_t x695 = -1LL;
	uint8_t x696 = 18U;
	int32_t t173 = 508211627;

    t173 = (x693==(x694|(x695!=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x697 = INT16_MIN;
	int32_t x698 = -1115128;
	static int8_t x699 = INT8_MIN;

    t174 = (x697==(x698|(x699!=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = 28996172;
	volatile int16_t x702 = INT16_MIN;
	static volatile int16_t x703 = -1;
	int32_t t175 = 3222;

    t175 = (x701==(x702|(x703!=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 11U;
	volatile int16_t x707 = -121;
	static uint32_t x708 = UINT32_MAX;
	volatile int32_t t176 = -283778;

    t176 = (x705==(x706|(x707!=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x712 = INT32_MAX;

    t177 = (x709==(x710|(x711!=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	uint64_t x714 = UINT64_MAX;
	uint16_t x716 = 2538U;
	static int32_t t178 = 2791046;

    t178 = (x713==(x714|(x715!=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = -14;
	int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MAX;
	volatile uint32_t x720 = 1013405U;

    t179 = (x717==(x718|(x719!=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	volatile uint16_t x722 = 5468U;
	volatile uint8_t x723 = 2U;
	int64_t x724 = INT64_MAX;
	int32_t t180 = 489;

    t180 = (x721==(x722|(x723!=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = 1;
	int32_t x726 = -71477;
	volatile int32_t x727 = 61;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = -943170;

    t181 = (x725==(x726|(x727!=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	volatile int64_t x730 = -1LL;
	int64_t x732 = -1LL;
	int32_t t182 = 48318893;

    t182 = (x729==(x730|(x731!=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	uint16_t x734 = UINT16_MAX;
	uint16_t x735 = 2U;
	int8_t x736 = -3;
	int32_t t183 = -226;

    t183 = (x733==(x734|(x735!=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x737 = INT64_MAX;
	volatile int32_t x738 = -1;
	volatile int32_t x739 = INT32_MIN;
	int8_t x740 = INT8_MIN;

    t184 = (x737==(x738|(x739!=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x742 = INT64_MAX;
	int32_t x743 = 1145;
	volatile int32_t t185 = 31;

    t185 = (x741==(x742|(x743!=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 11;
	int32_t x746 = -21339;
	uint16_t x748 = 125U;

    t186 = (x745==(x746|(x747!=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static int16_t x751 = INT16_MAX;
	uint64_t x752 = 100950766584LLU;
	int32_t t187 = -35818;

    t187 = (x749==(x750|(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	uint16_t x755 = 29280U;
	static int8_t x756 = -7;
	int32_t t188 = -260982670;

    t188 = (x753==(x754|(x755!=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -14;
	int64_t x758 = INT64_MIN;
	volatile int8_t x760 = -2;
	volatile int32_t t189 = -266;

    t189 = (x757==(x758|(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 3;
	uint32_t x763 = 265611917U;
	static volatile int32_t t190 = -49329143;

    t190 = (x761==(x762|(x763!=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = 1783LLU;
	int32_t x766 = -125;
	uint8_t x768 = UINT8_MAX;
	volatile int32_t t191 = 74280;

    t191 = (x765==(x766|(x767!=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	volatile uint64_t x770 = 21097847817LLU;
	int16_t x771 = -1;
	int64_t x772 = -1LL;
	volatile int32_t t192 = -14566007;

    t192 = (x769==(x770|(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	int8_t x775 = INT8_MAX;
	volatile int16_t x776 = INT16_MIN;
	volatile int32_t t193 = 1171;

    t193 = (x773==(x774|(x775!=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x778 = -13375768LL;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MAX;
	int32_t t194 = -10;

    t194 = (x777==(x778|(x779!=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = -2;
	static uint64_t x782 = 1698LLU;
	int16_t x783 = -7;
	volatile int32_t x784 = INT32_MIN;
	static int32_t t195 = 4295944;

    t195 = (x781==(x782|(x783!=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 6;
	uint64_t x786 = 1812LLU;
	int32_t t196 = -90;

    t196 = (x785==(x786|(x787!=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	int32_t x790 = INT32_MIN;
	static volatile int8_t x791 = INT8_MIN;
	volatile int8_t x792 = INT8_MIN;
	static volatile int32_t t197 = -1;

    t197 = (x789==(x790|(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 58613277900745150LLU;
	int16_t x794 = INT16_MIN;
	volatile uint16_t x795 = 0U;
	uint64_t x796 = 6880798634360520LLU;
	volatile int32_t t198 = 280841;

    t198 = (x793==(x794|(x795!=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x798 = UINT16_MAX;
	int32_t x800 = 6;

    t199 = (x797==(x798|(x799!=x800)));

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

