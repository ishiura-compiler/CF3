
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

int32_t x3 = INT32_MIN;
volatile int64_t x5 = INT64_MIN;
int8_t x8 = INT8_MIN;
static int16_t x12 = -1;
static int64_t x13 = -111482626LL;
int16_t x19 = INT16_MIN;
volatile uint32_t x21 = UINT32_MAX;
int16_t x36 = INT16_MAX;
static int32_t t8 = 12;
static int64_t x37 = INT64_MAX;
uint16_t x39 = 862U;
static int32_t t10 = -30;
static volatile int8_t x45 = INT8_MIN;
static volatile int32_t t11 = 137967707;
volatile uint16_t x57 = 1U;
int32_t x58 = -1;
uint32_t x62 = UINT32_MAX;
int8_t x65 = -1;
int64_t x66 = INT64_MIN;
int64_t x72 = -1LL;
int32_t x83 = INT32_MAX;
volatile int32_t t20 = 22;
uint32_t x96 = 83674U;
int64_t x97 = INT64_MIN;
volatile int32_t t24 = 4;
volatile int16_t x103 = -473;
int8_t x112 = -1;
volatile int8_t x117 = INT8_MIN;
volatile int32_t t28 = -9;
static volatile int32_t t29 = 11;
int32_t x126 = -1;
volatile int64_t x128 = INT64_MIN;
int64_t x136 = INT64_MIN;
volatile int8_t x141 = INT8_MIN;
int64_t x142 = -62548119996473744LL;
int64_t x145 = 2715954LL;
static volatile uint32_t x149 = 6819671U;
int32_t x150 = -1;
int16_t x151 = INT16_MIN;
volatile int8_t x152 = INT8_MIN;
static volatile uint64_t t37 = 234LLU;
uint64_t x158 = UINT64_MAX;
int64_t x162 = 494389LL;
int8_t x168 = 2;
int8_t x173 = -1;
uint32_t t43 = 240115U;
int8_t x182 = 1;
int8_t x183 = INT8_MAX;
static int64_t x189 = -1LL;
uint32_t x206 = 127157412U;
static volatile int64_t t50 = 15808611LL;
int64_t x211 = 190330916943496885LL;
int8_t x212 = INT8_MIN;
static volatile uint8_t x226 = UINT8_MAX;
int32_t x230 = -1;
volatile int16_t x246 = INT16_MIN;
uint16_t x252 = UINT16_MAX;
uint8_t x262 = 6U;
volatile int64_t x277 = INT64_MIN;
volatile int64_t x281 = INT64_MAX;
volatile int8_t x283 = -1;
uint32_t x285 = 6U;
static int32_t x288 = -98070;
uint8_t x297 = 0U;
int64_t x298 = INT64_MIN;
volatile int16_t x300 = INT16_MIN;
int8_t x301 = -1;
int32_t x306 = INT32_MAX;
static int64_t x312 = -1LL;
static uint16_t x313 = UINT16_MAX;
volatile int8_t x316 = INT8_MAX;
uint64_t x318 = UINT64_MAX;
uint64_t x321 = 5594282LLU;
volatile int32_t t78 = -3;
volatile uint8_t x330 = 1U;
int32_t t81 = 1577;
int8_t x340 = INT8_MAX;
int32_t x342 = -1;
uint32_t x344 = 55408U;
int32_t x347 = INT32_MIN;
volatile int32_t x349 = -1;
uint32_t t85 = 78139U;
int32_t x360 = INT32_MIN;
int32_t x362 = INT32_MAX;
int16_t x365 = -4;
uint16_t x368 = UINT16_MAX;
int16_t x373 = -218;
int64_t x387 = -32049LL;
int32_t t93 = 7625;
int16_t x395 = INT16_MAX;
uint8_t x402 = 60U;
static volatile int64_t t96 = -3144LL;
uint32_t x406 = 758166565U;
int32_t t97 = 107956605;
static uint32_t t98 = 29U;
volatile uint32_t x422 = 7U;
volatile int16_t x434 = INT16_MIN;
int32_t x436 = 7;
volatile int32_t t104 = 3228072;
static uint64_t x438 = UINT64_MAX;
uint64_t x442 = UINT64_MAX;
static int64_t x450 = INT64_MAX;
volatile uint16_t x454 = 142U;
static volatile uint16_t x461 = 1166U;
static volatile int32_t t110 = -25344182;
volatile int64_t x467 = 40980795513198LL;
int16_t x476 = INT16_MIN;
int32_t t112 = -985210151;
static volatile int32_t t113 = 1414460;
int32_t x484 = 55247;
volatile int32_t t114 = 314;
static int8_t x489 = 2;
uint64_t x492 = 6434011147LLU;
int32_t t119 = -956478;
volatile int64_t x507 = -1128169LL;
static int32_t t120 = -53;
int64_t x510 = INT64_MIN;
int32_t t122 = 15476;
int32_t t123 = 1;
int32_t x522 = -1;
uint32_t x527 = 0U;
int32_t x529 = -1;
static volatile int8_t x530 = 1;
uint32_t x531 = 101284U;
int16_t x534 = INT16_MIN;
int16_t x536 = INT16_MIN;
volatile int8_t x545 = INT8_MAX;
uint16_t x546 = UINT16_MAX;
int32_t t130 = 127;
static volatile int32_t t132 = 10664023;
int64_t x558 = -1LL;
uint32_t x560 = 4132019U;
volatile uint32_t t133 = 368255U;
uint8_t x562 = 114U;
volatile int64_t t134 = 3037761088139LL;
int64_t x570 = -1LL;
static uint64_t x571 = 81067096LLU;
uint8_t x575 = 3U;
int16_t x578 = INT16_MAX;
volatile int32_t x584 = INT32_MIN;
int8_t x588 = INT8_MIN;
volatile uint16_t x589 = 1432U;
int64_t x591 = -18236443821566LL;
int8_t x594 = 0;
volatile uint8_t x597 = 20U;
int8_t x606 = INT8_MAX;
uint16_t x611 = UINT16_MAX;
volatile int64_t x612 = INT64_MAX;
uint64_t x616 = 58875298691LLU;
volatile int16_t x620 = 59;
uint16_t x627 = 2961U;
static uint8_t x629 = 28U;
uint8_t x631 = UINT8_MAX;
volatile int64_t x632 = INT64_MAX;
uint32_t x640 = 3169U;
volatile uint16_t x644 = 15369U;
volatile uint64_t x649 = 1864086LLU;
volatile int8_t x650 = INT8_MIN;
static volatile int32_t x651 = -1718144;
static uint16_t x653 = UINT16_MAX;
int16_t x658 = -1;
static int32_t x662 = INT32_MAX;
uint16_t x669 = 0U;
int64_t x671 = -1LL;
static int8_t x672 = INT8_MIN;
volatile int32_t x676 = INT32_MAX;
static int32_t t161 = -636191275;
uint8_t x679 = 4U;
volatile int32_t t162 = 135;
volatile int8_t x684 = -1;
volatile int64_t x689 = INT64_MIN;
volatile int32_t t168 = -747904;
uint8_t x713 = 35U;
static volatile int32_t x727 = -1;
int32_t x729 = 432634768;
volatile int64_t x731 = INT64_MIN;
uint64_t x734 = 8459822253090129LLU;
uint32_t x735 = UINT32_MAX;
int16_t x736 = INT16_MIN;
int32_t x738 = 1872;
int64_t x746 = -16983478LL;
int64_t x749 = INT64_MIN;
int64_t x751 = INT64_MIN;
int64_t x752 = INT64_MAX;
uint32_t x759 = UINT32_MAX;
int8_t x761 = INT8_MIN;
volatile int16_t x763 = 0;
int16_t x766 = -1;
int16_t x769 = 1;
int32_t x774 = INT32_MAX;
volatile uint8_t x777 = 10U;
static volatile int32_t x779 = 430;
uint16_t x780 = 40U;
int32_t t187 = -4985;
static int32_t x787 = -1;
int64_t x793 = INT64_MAX;
uint8_t x798 = 3U;
int32_t t191 = 29401;
int16_t x801 = INT16_MIN;
int64_t x803 = INT64_MIN;
static int32_t x804 = INT32_MAX;
volatile int16_t x805 = INT16_MIN;
int32_t x812 = 8349799;
volatile int64_t x816 = INT64_MIN;
volatile int64_t t195 = 973283423253879662LL;
uint64_t x819 = 9514422924009055LLU;
volatile int32_t t196 = 33610117;
volatile uint8_t x824 = 36U;
volatile int64_t x825 = 114790029427LL;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	uint8_t x2 = UINT8_MAX;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = 71;

    t0 = ((x1==(x2&x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = 54890087;
	static int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -1;

    t1 = ((x5==(x6&x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int64_t x10 = INT64_MIN;
	static volatile int16_t x11 = INT16_MIN;
	static int32_t t2 = -2822742;

    t2 = ((x9==(x10&x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MAX;
	int64_t x15 = -4993229LL;
	int32_t x16 = -14280;
	int32_t t3 = 13497740;

    t3 = ((x13==(x14&x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MAX;
	volatile uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t4 = 3266LLU;

    t4 = ((x17==(x18&x19))%x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -873457LL;
	int64_t x23 = -1LL;
	int8_t x24 = 5;
	int32_t t5 = 0;

    t5 = ((x21==(x22&x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 44189463LLU;
	static uint32_t x26 = 80954U;
	int32_t x27 = -1;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 30143;

    t6 = ((x25==(x26&x27))%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = -1LL;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MAX;
	volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = 861;

    t7 = ((x29==(x30&x31))%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	uint8_t x34 = 1U;
	int8_t x35 = 22;

    t8 = ((x33==(x34&x35))%x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = INT64_MIN;
	volatile int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 20280999;

    t9 = ((x37==(x38&x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = UINT16_MAX;
	volatile int16_t x42 = INT16_MIN;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MAX;

    t10 = ((x41==(x42&x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x46 = 7;
	int8_t x47 = INT8_MAX;
	static uint8_t x48 = 85U;

    t11 = ((x45==(x46&x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int8_t x50 = INT8_MIN;
	int16_t x51 = 14;
	volatile uint64_t x52 = 8301747894520LLU;
	static uint64_t t12 = 804LLU;

    t12 = ((x49==(x50&x51))%x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 54514221983132387LLU;
	int16_t x54 = 5;
	volatile uint64_t x55 = 18279322939LLU;
	int16_t x56 = 442;
	static volatile int32_t t13 = -43713;

    t13 = ((x53==(x54&x55))%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = -11;
	int32_t x60 = INT32_MIN;
	static volatile int32_t t14 = -113248998;

    t14 = ((x57==(x58&x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 19484863856336LLU;
	int8_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 1549265289164809637LLU;

    t15 = ((x61==(x62&x63))%x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x67 = INT8_MIN;
	int8_t x68 = 1;
	int32_t t16 = -2;

    t16 = ((x65==(x66&x67))%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -47;
	volatile uint64_t x70 = UINT64_MAX;
	int8_t x71 = INT8_MAX;
	volatile int64_t t17 = 14101LL;

    t17 = ((x69==(x70&x71))%x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 1629366;
	volatile uint64_t x74 = 1LLU;
	static int8_t x75 = -1;
	int64_t x76 = -74283229652203438LL;
	int64_t t18 = -314669927208503008LL;

    t18 = ((x73==(x74&x75))%x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = 266409442;
	uint16_t x78 = 16208U;
	static uint8_t x79 = UINT8_MAX;
	volatile int64_t x80 = INT64_MAX;
	static volatile int64_t t19 = -3157654259059785LL;

    t19 = ((x77==(x78&x79))%x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	uint8_t x82 = 5U;
	int32_t x84 = -1;

    t20 = ((x81==(x82&x83))%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 1579U;
	volatile uint32_t x86 = UINT32_MAX;
	static int8_t x87 = INT8_MAX;
	volatile int32_t x88 = -21;
	volatile int32_t t21 = -6;

    t21 = ((x85==(x86&x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = -16;
	static int8_t x92 = INT8_MAX;
	int32_t t22 = 111968696;

    t22 = ((x89==(x90&x91))%x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = UINT8_MAX;
	static volatile int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	volatile uint32_t t23 = 1349U;

    t23 = ((x93==(x94&x95))%x96);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x98 = 144;
	volatile uint8_t x99 = 33U;
	volatile uint8_t x100 = 23U;

    t24 = ((x97==(x98&x99))%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = UINT16_MAX;
	static int64_t x102 = -1LL;
	uint32_t x104 = 6949237U;
	static volatile uint32_t t25 = 2037U;

    t25 = ((x101==(x102&x103))%x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = 6U;
	uint64_t x110 = 1567LLU;
	int64_t x111 = INT64_MIN;
	volatile int32_t t26 = -209677091;

    t26 = ((x109==(x110&x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	int64_t x115 = INT64_MIN;
	static int64_t x116 = INT64_MAX;
	static volatile int64_t t27 = -162253216401290392LL;

    t27 = ((x113==(x114&x115))%x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint32_t x118 = 2463U;
	static volatile int64_t x119 = -14027009169430949LL;
	int8_t x120 = -4;

    t28 = ((x117==(x118&x119))%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x121 = 427;
	int32_t x122 = 489;
	int64_t x123 = 21834LL;
	volatile int32_t x124 = INT32_MIN;

    t29 = ((x121==(x122&x123))%x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x125 = 466;
	volatile int16_t x127 = INT16_MIN;
	volatile int64_t t30 = 29801885014LL;

    t30 = ((x125==(x126&x127))%x128);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -1;
	uint32_t x130 = 0U;
	volatile int64_t x131 = INT64_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t31 = 41996195;

    t31 = ((x129==(x130&x131))%x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = INT64_MAX;
	volatile uint32_t x134 = UINT32_MAX;
	uint16_t x135 = 12U;
	int64_t t32 = -60916LL;

    t32 = ((x133==(x134&x135))%x136);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = INT64_MAX;
	volatile int16_t x138 = INT16_MIN;
	uint8_t x139 = 10U;
	int16_t x140 = -1;
	volatile int32_t t33 = -236;

    t33 = ((x137==(x138&x139))%x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x143 = 251U;
	uint16_t x144 = 99U;
	volatile int32_t t34 = -235761910;

    t34 = ((x141==(x142&x143))%x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x146 = -1;
	int8_t x147 = -41;
	uint8_t x148 = 1U;
	static volatile int32_t t35 = -1;

    t35 = ((x145==(x146&x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t t36 = 160079;

    t36 = ((x149==(x150&x151))%x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = 436646605995135LL;
	int64_t x154 = -474812147400LL;
	int64_t x155 = -1LL;
	static uint64_t x156 = UINT64_MAX;

    t37 = ((x153==(x154&x155))%x156);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -2310;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	int64_t t38 = -445429972935LL;

    t38 = ((x157==(x158&x159))%x160);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	int8_t x163 = 3;
	uint16_t x164 = 10U;
	volatile int32_t t39 = 48;

    t39 = ((x161==(x162&x163))%x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	volatile int8_t x167 = -1;
	volatile int32_t t40 = -4257;

    t40 = ((x165==(x166&x167))%x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 786U;
	int16_t x170 = INT16_MIN;
	volatile int64_t x171 = INT64_MIN;
	static volatile int16_t x172 = INT16_MAX;
	volatile int32_t t41 = -686119;

    t41 = ((x169==(x170&x171))%x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x174 = 1U;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t42 = -582282;

    t42 = ((x173==(x174&x175))%x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = -15816;
	volatile int8_t x178 = INT8_MAX;
	static volatile int64_t x179 = -1LL;
	uint32_t x180 = 32659U;

    t43 = ((x177==(x178&x179))%x180);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = 76;
	static uint64_t x184 = 1885953528633396933LLU;
	volatile uint64_t t44 = 10LLU;

    t44 = ((x181==(x182&x183))%x184);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MAX;
	int8_t x186 = -52;
	int16_t x187 = -1;
	volatile uint64_t x188 = 4258340131532070499LLU;
	static volatile uint64_t t45 = 13107854326832LLU;

    t45 = ((x185==(x186&x187))%x188);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x190 = -50400666329238LL;
	int32_t x191 = INT32_MAX;
	uint8_t x192 = 92U;
	int32_t t46 = 93;

    t46 = ((x189==(x190&x191))%x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = 5438822932LL;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t47 = 1961489U;

    t47 = ((x193==(x194&x195))%x196);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = -4592108373057LL;
	static uint16_t x200 = 3611U;
	volatile int32_t t48 = 1;

    t48 = ((x197==(x198&x199))%x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x201 = INT16_MIN;
	int16_t x202 = 1;
	uint8_t x203 = UINT8_MAX;
	static volatile int64_t x204 = -1LL;
	volatile int64_t t49 = 675638916577LL;

    t49 = ((x201==(x202&x203))%x204);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x205 = INT64_MIN;
	int32_t x207 = INT32_MIN;
	volatile int64_t x208 = INT64_MIN;

    t50 = ((x205==(x206&x207))%x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x209 = 0;
	int8_t x210 = INT8_MIN;
	int32_t t51 = 370410;

    t51 = ((x209==(x210&x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MAX;
	uint16_t x218 = UINT16_MAX;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 15U;
	int32_t t52 = 73917;

    t52 = ((x217==(x218&x219))%x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x221 = INT32_MAX;
	volatile int64_t x222 = INT64_MIN;
	static uint8_t x223 = UINT8_MAX;
	int32_t x224 = -499784095;
	volatile int32_t t53 = -118968047;

    t53 = ((x221==(x222&x223))%x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x225 = INT8_MIN;
	int64_t x227 = -1LL;
	uint16_t x228 = 3U;
	volatile int32_t t54 = -1;

    t54 = ((x225==(x226&x227))%x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x229 = INT8_MIN;
	int64_t x231 = -109389169504439LL;
	volatile uint16_t x232 = 15U;
	int32_t t55 = 175;

    t55 = ((x229==(x230&x231))%x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x233 = -1;
	int16_t x234 = -1;
	uint16_t x235 = 3U;
	uint64_t x236 = 464653LLU;
	uint64_t t56 = 152935LLU;

    t56 = ((x233==(x234&x235))%x236);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = INT32_MAX;
	uint32_t x238 = 509062154U;
	int16_t x239 = 9865;
	int8_t x240 = -2;
	volatile int32_t t57 = 22;

    t57 = ((x237==(x238&x239))%x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MIN;
	int8_t x242 = 31;
	uint32_t x243 = UINT32_MAX;
	static int8_t x244 = INT8_MAX;
	static volatile int32_t t58 = -121784984;

    t58 = ((x241==(x242&x243))%x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = INT32_MIN;
	uint64_t x247 = 857871862LLU;
	static volatile int64_t x248 = -1LL;
	int64_t t59 = -958LL;

    t59 = ((x245==(x246&x247))%x248);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MIN;
	static int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t t60 = -9139105;

    t60 = ((x249==(x250&x251))%x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x253 = INT64_MIN;
	uint8_t x254 = 0U;
	uint32_t x255 = UINT32_MAX;
	static int32_t x256 = INT32_MAX;
	static volatile int32_t t61 = 9857577;

    t61 = ((x253==(x254&x255))%x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x257 = 11423U;
	volatile int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	static int8_t x260 = INT8_MIN;
	static volatile int32_t t62 = 40721;

    t62 = ((x257==(x258&x259))%x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x261 = 1U;
	int8_t x263 = -1;
	int8_t x264 = 1;
	volatile int32_t t63 = 1513037;

    t63 = ((x261==(x262&x263))%x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MAX;
	volatile int8_t x266 = INT8_MIN;
	static int16_t x267 = INT16_MAX;
	static int8_t x268 = INT8_MAX;
	int32_t t64 = 115;

    t64 = ((x265==(x266&x267))%x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x269 = 3;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	static volatile int64_t t65 = -144919531129343266LL;

    t65 = ((x269==(x270&x271))%x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x273 = 1;
	uint8_t x274 = 0U;
	uint16_t x275 = 0U;
	int32_t x276 = 1;
	volatile int32_t t66 = 33445767;

    t66 = ((x273==(x274&x275))%x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x278 = UINT16_MAX;
	static int32_t x279 = 8596;
	int32_t x280 = -571981033;
	volatile int32_t t67 = 496530;

    t67 = ((x277==(x278&x279))%x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x282 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	uint32_t t68 = 11U;

    t68 = ((x281==(x282&x283))%x284);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x286 = 8220;
	int8_t x287 = INT8_MAX;
	volatile int32_t t69 = 19216313;

    t69 = ((x285==(x286&x287))%x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	static uint8_t x290 = UINT8_MAX;
	volatile int64_t x291 = -1LL;
	int64_t x292 = -40031LL;
	int64_t t70 = 2703333709551155LL;

    t70 = ((x289==(x290&x291))%x292);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	static int32_t x296 = INT32_MAX;
	volatile int32_t t71 = 728609164;

    t71 = ((x293==(x294&x295))%x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x299 = 12259113;
	volatile int32_t t72 = 13;

    t72 = ((x297==(x298&x299))%x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x302 = 555548209U;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = -82362;

    t73 = ((x301==(x302&x303))%x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 1395U;
	int32_t t74 = -17;

    t74 = ((x305==(x306&x307))%x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = 153429;
	uint8_t x310 = 2U;
	uint8_t x311 = 1U;
	volatile int64_t t75 = 1302438196587085695LL;

    t75 = ((x309==(x310&x311))%x312);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x314 = -1;
	int16_t x315 = INT16_MAX;
	volatile int32_t t76 = 657205;

    t76 = ((x313==(x314&x315))%x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x317 = -1;
	volatile int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t77 = 133674;

    t77 = ((x317==(x318&x319))%x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x322 = -1;
	volatile int16_t x323 = INT16_MIN;
	volatile uint16_t x324 = UINT16_MAX;

    t78 = ((x321==(x322&x323))%x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x325 = 111U;
	volatile int64_t x326 = INT64_MIN;
	uint32_t x327 = 29084225U;
	int8_t x328 = -1;
	static int32_t t79 = -1252;

    t79 = ((x325==(x326&x327))%x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x329 = -1LL;
	int32_t x331 = 142370;
	int8_t x332 = INT8_MIN;
	int32_t t80 = 291;

    t80 = ((x329==(x330&x331))%x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x333 = 775080452LLU;
	int8_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	static int8_t x336 = -1;

    t81 = ((x333==(x334&x335))%x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x337 = UINT32_MAX;
	uint32_t x338 = 131692U;
	static uint8_t x339 = UINT8_MAX;
	static int32_t t82 = -97663;

    t82 = ((x337==(x338&x339))%x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x341 = 5534361622LLU;
	uint64_t x343 = 861132325354645LLU;
	volatile uint32_t t83 = 20573U;

    t83 = ((x341==(x342&x343))%x344);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = INT32_MAX;
	volatile uint8_t x346 = 57U;
	int32_t x348 = INT32_MIN;
	int32_t t84 = 211980;

    t84 = ((x345==(x346&x347))%x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = INT16_MAX;
	static int32_t x351 = -1;
	uint32_t x352 = UINT32_MAX;

    t85 = ((x349==(x350&x351))%x352);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x353 = UINT16_MAX;
	volatile int16_t x354 = INT16_MIN;
	static volatile uint16_t x355 = UINT16_MAX;
	volatile int64_t x356 = INT64_MIN;
	int64_t t86 = -10451LL;

    t86 = ((x353==(x354&x355))%x356);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 0U;
	volatile int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile int32_t t87 = 49852;

    t87 = ((x357==(x358&x359))%x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = INT8_MAX;
	int32_t x363 = INT32_MIN;
	int8_t x364 = -1;
	int32_t t88 = -5743;

    t88 = ((x361==(x362&x363))%x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x366 = 7537193534632684LLU;
	uint32_t x367 = 4883805U;
	volatile int32_t t89 = -197555992;

    t89 = ((x365==(x366&x367))%x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x374 = INT16_MIN;
	volatile uint8_t x375 = 0U;
	int16_t x376 = -3;
	static volatile int32_t t90 = -62;

    t90 = ((x373==(x374&x375))%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x381 = 3LLU;
	int16_t x382 = INT16_MIN;
	static int64_t x383 = INT64_MIN;
	uint32_t x384 = 2298U;
	volatile uint32_t t91 = 3035U;

    t91 = ((x381==(x382&x383))%x384);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = 2;
	uint16_t x386 = 13U;
	uint64_t x388 = 3516473333413756667LLU;
	volatile uint64_t t92 = 14LLU;

    t92 = ((x385==(x386&x387))%x388);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x389 = 1623379U;
	uint16_t x390 = 2U;
	int16_t x391 = 9061;
	static int8_t x392 = -1;

    t93 = ((x389==(x390&x391))%x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -127;
	uint8_t x394 = 98U;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t94 = 12199;

    t94 = ((x393==(x394&x395))%x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x397 = 1493U;
	volatile uint32_t x398 = 2980912U;
	uint16_t x399 = 1U;
	volatile uint32_t x400 = 71U;
	uint32_t t95 = 3116U;

    t95 = ((x397==(x398&x399))%x400);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x401 = INT32_MAX;
	int8_t x403 = -1;
	volatile int64_t x404 = INT64_MIN;

    t96 = ((x401==(x402&x403))%x404);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x405 = INT32_MAX;
	int8_t x407 = INT8_MAX;
	int16_t x408 = -1;

    t97 = ((x405==(x406&x407))%x408);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x409 = 2180540914669964161LLU;
	int32_t x410 = -1;
	int16_t x411 = -1;
	static uint32_t x412 = UINT32_MAX;

    t98 = ((x409==(x410&x411))%x412);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = -1LL;
	int64_t x414 = -27485579LL;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MAX;
	int32_t t99 = -592974;

    t99 = ((x413==(x414&x415))%x416);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = -1;
	static int64_t x418 = -1LL;
	static uint16_t x419 = 0U;
	int8_t x420 = 9;
	int32_t t100 = -209290551;

    t100 = ((x417==(x418&x419))%x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = 58567273241805LL;
	int64_t x423 = 375441731550LL;
	int16_t x424 = INT16_MIN;
	int32_t t101 = 1;

    t101 = ((x421==(x422&x423))%x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x425 = 7367LLU;
	int64_t x426 = 357LL;
	int16_t x427 = -62;
	uint32_t x428 = 331U;
	static uint32_t t102 = 323759321U;

    t102 = ((x425==(x426&x427))%x428);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x429 = INT64_MIN;
	volatile int64_t x430 = 844671547374899779LL;
	volatile int64_t x431 = 104LL;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t103 = 50;

    t103 = ((x429==(x430&x431))%x432);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x433 = 151407LLU;
	volatile uint32_t x435 = 767985299U;

    t104 = ((x433==(x434&x435))%x436);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x437 = INT16_MIN;
	uint8_t x439 = 82U;
	volatile uint16_t x440 = 6U;
	volatile int32_t t105 = -6;

    t105 = ((x437==(x438&x439))%x440);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x441 = UINT8_MAX;
	uint8_t x443 = 14U;
	uint16_t x444 = 3U;
	static volatile int32_t t106 = 409667420;

    t106 = ((x441==(x442&x443))%x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x449 = -7700LL;
	uint64_t x451 = 36550LLU;
	uint16_t x452 = 1U;
	int32_t t107 = 194;

    t107 = ((x449==(x450&x451))%x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x453 = INT8_MIN;
	int8_t x455 = INT8_MAX;
	static volatile int8_t x456 = 10;
	int32_t t108 = -2;

    t108 = ((x453==(x454&x455))%x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x457 = 45U;
	uint16_t x458 = UINT16_MAX;
	uint8_t x459 = UINT8_MAX;
	uint64_t x460 = UINT64_MAX;
	uint64_t t109 = 543550691603302LLU;

    t109 = ((x457==(x458&x459))%x460);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x462 = -1;
	uint32_t x463 = 42U;
	volatile int8_t x464 = INT8_MAX;

    t110 = ((x461==(x462&x463))%x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = INT64_MAX;
	int32_t x466 = 42645671;
	int8_t x468 = INT8_MAX;
	volatile int32_t t111 = -3;

    t111 = ((x465==(x466&x467))%x468);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MAX;
	static int64_t x475 = 118368LL;

    t112 = ((x473==(x474&x475))%x476);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x477 = 362556660;
	static uint64_t x478 = UINT64_MAX;
	volatile int8_t x479 = 28;
	int32_t x480 = INT32_MIN;

    t113 = ((x477==(x478&x479))%x480);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = -1540621LL;
	int8_t x483 = -1;

    t114 = ((x481==(x482&x483))%x484);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x485 = 12;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MIN;
	int32_t t115 = -29;

    t115 = ((x485==(x486&x487))%x488);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	volatile uint64_t t116 = 232LLU;

    t116 = ((x489==(x490&x491))%x492);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = INT16_MAX;
	int16_t x494 = INT16_MAX;
	int64_t x495 = -4011283103023063LL;
	int64_t x496 = INT64_MIN;
	int64_t t117 = 55711253741018LL;

    t117 = ((x493==(x494&x495))%x496);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x497 = INT64_MAX;
	int8_t x498 = -1;
	static int16_t x499 = INT16_MAX;
	uint32_t x500 = 2U;
	static volatile uint32_t t118 = 2U;

    t118 = ((x497==(x498&x499))%x500);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = INT16_MIN;
	uint64_t x502 = UINT64_MAX;
	volatile int32_t x503 = INT32_MIN;
	static int32_t x504 = INT32_MIN;

    t119 = ((x501==(x502&x503))%x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = -1;
	uint64_t x506 = 22644067184LLU;
	int8_t x508 = -1;

    t120 = ((x505==(x506&x507))%x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x509 = 66U;
	uint32_t x511 = 19075U;
	int16_t x512 = -1;
	int32_t t121 = 140;

    t121 = ((x509==(x510&x511))%x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x513 = -3752;
	static int16_t x514 = INT16_MIN;
	int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MAX;

    t122 = ((x513==(x514&x515))%x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x517 = -3216559043746LL;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 72U;
	int16_t x520 = INT16_MAX;

    t123 = ((x517==(x518&x519))%x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x521 = INT8_MIN;
	int32_t x523 = 21844819;
	int16_t x524 = INT16_MIN;
	volatile int32_t t124 = 3274893;

    t124 = ((x521==(x522&x523))%x524);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x525 = 3U;
	volatile uint64_t x526 = UINT64_MAX;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t125 = -839;

    t125 = ((x525==(x526&x527))%x528);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t126 = 3330366U;

    t126 = ((x529==(x530&x531))%x532);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x533 = INT64_MAX;
	int32_t x535 = 0;
	volatile int32_t t127 = -983458557;

    t127 = ((x533==(x534&x535))%x536);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = -1;
	int32_t x538 = INT32_MIN;
	volatile int64_t x539 = -901709431776594LL;
	int64_t x540 = INT64_MIN;
	static int64_t t128 = 5LL;

    t128 = ((x537==(x538&x539))%x540);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x541 = 1U;
	static uint64_t x542 = 3LLU;
	static int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t129 = 9;

    t129 = ((x541==(x542&x543))%x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x547 = INT8_MAX;
	static int8_t x548 = -7;

    t130 = ((x545==(x546&x547))%x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = INT8_MIN;
	uint16_t x550 = 12509U;
	static int64_t x551 = -8820003LL;
	uint32_t x552 = 1U;
	static volatile uint32_t t131 = 0U;

    t131 = ((x549==(x550&x551))%x552);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x553 = INT8_MIN;
	static int16_t x554 = -1;
	int64_t x555 = -1LL;
	int8_t x556 = INT8_MAX;

    t132 = ((x553==(x554&x555))%x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = INT32_MIN;
	uint16_t x559 = 8175U;

    t133 = ((x557==(x558&x559))%x560);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x561 = 199LLU;
	static int16_t x563 = INT16_MAX;
	static int64_t x564 = -1LL;

    t134 = ((x561==(x562&x563))%x564);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x565 = UINT64_MAX;
	static volatile uint8_t x566 = 53U;
	int8_t x567 = 0;
	int8_t x568 = -1;
	int32_t t135 = 0;

    t135 = ((x565==(x566&x567))%x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x569 = -1LL;
	uint32_t x572 = 839528413U;
	uint32_t t136 = 7U;

    t136 = ((x569==(x570&x571))%x572);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x573 = 1;
	static int64_t x574 = INT64_MIN;
	static int32_t x576 = -1;
	int32_t t137 = 29799463;

    t137 = ((x573==(x574&x575))%x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x577 = INT64_MAX;
	int64_t x579 = INT64_MIN;
	volatile uint16_t x580 = 22899U;
	volatile int32_t t138 = -3;

    t138 = ((x577==(x578&x579))%x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x581 = -4;
	int16_t x582 = INT16_MIN;
	uint64_t x583 = 825400310LLU;
	static int32_t t139 = 258484835;

    t139 = ((x581==(x582&x583))%x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x585 = -1;
	uint16_t x586 = 19U;
	int8_t x587 = INT8_MIN;
	int32_t t140 = -364976985;

    t140 = ((x585==(x586&x587))%x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x590 = INT8_MIN;
	int8_t x592 = -13;
	volatile int32_t t141 = -81;

    t141 = ((x589==(x590&x591))%x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x593 = 27;
	uint16_t x595 = UINT16_MAX;
	volatile uint64_t x596 = 11443451609272566LLU;
	static volatile uint64_t t142 = 114831945924794LLU;

    t142 = ((x593==(x594&x595))%x596);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x598 = INT64_MIN;
	uint32_t x599 = UINT32_MAX;
	int32_t x600 = INT32_MIN;
	volatile int32_t t143 = 27;

    t143 = ((x597==(x598&x599))%x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = -1LL;
	uint8_t x602 = 14U;
	uint32_t x603 = 294841982U;
	int8_t x604 = -6;
	int32_t t144 = 21101679;

    t144 = ((x601==(x602&x603))%x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x605 = UINT32_MAX;
	uint8_t x607 = 25U;
	int8_t x608 = INT8_MIN;
	int32_t t145 = 1897268;

    t145 = ((x605==(x606&x607))%x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x609 = 14;
	static uint8_t x610 = 1U;
	int64_t t146 = 902770131848LL;

    t146 = ((x609==(x610&x611))%x612);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x613 = -539238LL;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = 16908714978392093LLU;
	volatile uint64_t t147 = 42630LLU;

    t147 = ((x613==(x614&x615))%x616);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x618 = INT16_MAX;
	volatile int64_t x619 = INT64_MIN;
	volatile int32_t t148 = 855008766;

    t148 = ((x617==(x618&x619))%x620);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = -1;
	uint32_t x622 = 909875U;
	uint64_t x623 = 459990LLU;
	volatile uint16_t x624 = 491U;
	static volatile int32_t t149 = -31;

    t149 = ((x621==(x622&x623))%x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x625 = -1;
	int16_t x626 = -8236;
	volatile uint32_t x628 = 118629U;
	volatile uint32_t t150 = 417353U;

    t150 = ((x625==(x626&x627))%x628);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x630 = 9443114009114LLU;
	int64_t t151 = 183LL;

    t151 = ((x629==(x630&x631))%x632);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = -20029093;
	int8_t x634 = -3;
	static int16_t x635 = -1116;
	int32_t x636 = 1;
	volatile int32_t t152 = -216;

    t152 = ((x633==(x634&x635))%x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x637 = INT64_MIN;
	uint64_t x638 = UINT64_MAX;
	static int32_t x639 = INT32_MIN;
	static volatile uint32_t t153 = 12U;

    t153 = ((x637==(x638&x639))%x640);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x641 = 7U;
	volatile int64_t x642 = -1LL;
	static int8_t x643 = INT8_MIN;
	int32_t t154 = 1;

    t154 = ((x641==(x642&x643))%x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x652 = INT8_MAX;
	volatile int32_t t155 = 9;

    t155 = ((x649==(x650&x651))%x652);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x654 = -1942484LL;
	int8_t x655 = INT8_MIN;
	volatile int8_t x656 = 5;
	volatile int32_t t156 = -222743;

    t156 = ((x653==(x654&x655))%x656);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x657 = 14U;
	uint64_t x659 = 13553592LLU;
	uint8_t x660 = 9U;
	int32_t t157 = -120;

    t157 = ((x657==(x658&x659))%x660);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x661 = 22U;
	int32_t x663 = INT32_MIN;
	int32_t x664 = INT32_MAX;
	int32_t t158 = 251;

    t158 = ((x661==(x662&x663))%x664);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x665 = INT16_MAX;
	volatile int16_t x666 = -1;
	uint32_t x667 = 27819U;
	volatile int8_t x668 = INT8_MAX;
	static volatile int32_t t159 = 1034586456;

    t159 = ((x665==(x666&x667))%x668);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x670 = -20;
	int32_t t160 = 21609;

    t160 = ((x669==(x670&x671))%x672);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = INT8_MIN;
	volatile int64_t x674 = 4107763039356LL;
	volatile int64_t x675 = INT64_MIN;

    t161 = ((x673==(x674&x675))%x676);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = INT64_MAX;
	uint16_t x678 = 10U;
	int16_t x680 = -97;

    t162 = ((x677==(x678&x679))%x680);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = 2509LL;
	uint32_t x682 = 299U;
	uint32_t x683 = UINT32_MAX;
	static volatile int32_t t163 = 605594;

    t163 = ((x681==(x682&x683))%x684);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x685 = UINT64_MAX;
	uint32_t x686 = 465U;
	int8_t x687 = INT8_MIN;
	volatile int32_t x688 = INT32_MIN;
	int32_t t164 = -170588;

    t164 = ((x685==(x686&x687))%x688);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x690 = INT8_MIN;
	static volatile uint16_t x691 = 4657U;
	volatile int8_t x692 = -1;
	volatile int32_t t165 = -1067236;

    t165 = ((x689==(x690&x691))%x692);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x693 = UINT16_MAX;
	uint32_t x694 = 318U;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = 194502276620LL;
	static volatile int64_t t166 = 637LL;

    t166 = ((x693==(x694&x695))%x696);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = INT64_MIN;
	uint32_t x698 = 32054U;
	int32_t x699 = INT32_MIN;
	uint8_t x700 = 70U;
	volatile int32_t t167 = 7977;

    t167 = ((x697==(x698&x699))%x700);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x705 = INT16_MAX;
	uint32_t x706 = 0U;
	static int64_t x707 = -1LL;
	uint16_t x708 = 1421U;

    t168 = ((x705==(x706&x707))%x708);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x709 = -1;
	uint8_t x710 = 21U;
	static uint64_t x711 = 90518LLU;
	static int8_t x712 = 6;
	volatile int32_t t169 = -234630;

    t169 = ((x709==(x710&x711))%x712);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x714 = -1;
	volatile uint16_t x715 = UINT16_MAX;
	int64_t x716 = INT64_MIN;
	int64_t t170 = -1892619112LL;

    t170 = ((x713==(x714&x715))%x716);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x717 = 4U;
	uint64_t x718 = 108LLU;
	volatile int64_t x719 = 3522063LL;
	volatile int16_t x720 = -1;
	int32_t t171 = 20172;

    t171 = ((x717==(x718&x719))%x720);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x721 = 43U;
	int32_t x722 = 1742823;
	volatile int8_t x723 = INT8_MIN;
	int32_t x724 = INT32_MAX;
	static volatile int32_t t172 = -1439510;

    t172 = ((x721==(x722&x723))%x724);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x725 = UINT16_MAX;
	int64_t x726 = -1LL;
	volatile int32_t x728 = -38;
	int32_t t173 = -173;

    t173 = ((x725==(x726&x727))%x728);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x730 = INT32_MIN;
	int16_t x732 = INT16_MAX;
	static volatile int32_t t174 = 118709;

    t174 = ((x729==(x730&x731))%x732);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x733 = 1882626LLU;
	volatile int32_t t175 = 715;

    t175 = ((x733==(x734&x735))%x736);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x737 = UINT32_MAX;
	int64_t x739 = INT64_MAX;
	static volatile int16_t x740 = INT16_MIN;
	volatile int32_t t176 = -1137738;

    t176 = ((x737==(x738&x739))%x740);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	static uint32_t x743 = 1668821U;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t177 = -222281;

    t177 = ((x741==(x742&x743))%x744);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x745 = 5U;
	static uint32_t x747 = 110161197U;
	int64_t x748 = INT64_MIN;
	int64_t t178 = -16767883LL;

    t178 = ((x745==(x746&x747))%x748);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x750 = 18002115798923832LLU;
	static int64_t t179 = 900646898264794LL;

    t179 = ((x749==(x750&x751))%x752);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x753 = -1LL;
	int8_t x754 = INT8_MIN;
	int32_t x755 = INT32_MIN;
	int64_t x756 = -878522969212145101LL;
	int64_t t180 = -1711239LL;

    t180 = ((x753==(x754&x755))%x756);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x757 = -14;
	int16_t x758 = INT16_MAX;
	volatile int32_t x760 = INT32_MAX;
	volatile int32_t t181 = -2622;

    t181 = ((x757==(x758&x759))%x760);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x762 = INT8_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t182 = 40109794;

    t182 = ((x761==(x762&x763))%x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x765 = -846873515;
	uint32_t x767 = 6559U;
	int16_t x768 = -1;
	static volatile int32_t t183 = -17439;

    t183 = ((x765==(x766&x767))%x768);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x770 = -5;
	uint16_t x771 = UINT16_MAX;
	int64_t x772 = INT64_MIN;
	int64_t t184 = -4035569LL;

    t184 = ((x769==(x770&x771))%x772);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x775 = -1LL;
	int8_t x776 = INT8_MAX;
	int32_t t185 = -101724386;

    t185 = ((x773==(x774&x775))%x776);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x778 = 0;
	volatile int32_t t186 = 102;

    t186 = ((x777==(x778&x779))%x780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x781 = 27U;
	int16_t x782 = INT16_MAX;
	int64_t x783 = INT64_MAX;
	int32_t x784 = 1234470;

    t187 = ((x781==(x782&x783))%x784);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x785 = 2;
	uint32_t x786 = UINT32_MAX;
	uint32_t x788 = 762475U;
	volatile uint32_t t188 = 6U;

    t188 = ((x785==(x786&x787))%x788);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x789 = -351;
	int8_t x790 = -1;
	static int64_t x791 = -1LL;
	static int64_t x792 = INT64_MIN;
	int64_t t189 = 14841426588680LL;

    t189 = ((x789==(x790&x791))%x792);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x794 = 17821930532LLU;
	static volatile int8_t x795 = -1;
	volatile int8_t x796 = -1;
	int32_t t190 = 30;

    t190 = ((x793==(x794&x795))%x796);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x797 = -1;
	static uint32_t x799 = UINT32_MAX;
	int32_t x800 = INT32_MIN;

    t191 = ((x797==(x798&x799))%x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x802 = 1478;
	volatile int32_t t192 = -1;

    t192 = ((x801==(x802&x803))%x804);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x806 = 7153U;
	int8_t x807 = 6;
	uint16_t x808 = UINT16_MAX;
	volatile int32_t t193 = -31157423;

    t193 = ((x805==(x806&x807))%x808);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x809 = INT8_MIN;
	int32_t x810 = 339428691;
	int16_t x811 = -1;
	static int32_t t194 = -518650143;

    t194 = ((x809==(x810&x811))%x812);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MIN;
	uint64_t x814 = 2876333316159709LLU;
	static uint8_t x815 = 94U;

    t195 = ((x813==(x814&x815))%x816);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x817 = -1;
	int32_t x818 = 5;
	uint16_t x820 = 33U;

    t196 = ((x817==(x818&x819))%x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x821 = -455;
	static volatile uint8_t x822 = UINT8_MAX;
	uint32_t x823 = UINT32_MAX;
	int32_t t197 = 638;

    t197 = ((x821==(x822&x823))%x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x826 = INT8_MIN;
	volatile int64_t x827 = INT64_MAX;
	uint8_t x828 = UINT8_MAX;
	volatile int32_t t198 = 9469307;

    t198 = ((x825==(x826&x827))%x828);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x829 = 0;
	volatile int32_t x830 = -1;
	uint64_t x831 = UINT64_MAX;
	volatile uint16_t x832 = UINT16_MAX;
	int32_t t199 = -184;

    t199 = ((x829==(x830&x831))%x832);

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

