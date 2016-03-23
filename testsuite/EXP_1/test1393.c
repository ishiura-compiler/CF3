
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

int8_t x11 = INT8_MAX;
int64_t x14 = INT64_MAX;
int16_t x16 = -1;
int32_t x21 = INT32_MIN;
uint8_t x22 = UINT8_MAX;
int64_t x24 = INT64_MIN;
volatile int64_t x26 = 11LL;
volatile int32_t t6 = 6843503;
static int32_t t8 = -1;
uint64_t x39 = UINT64_MAX;
static uint64_t x40 = UINT64_MAX;
uint8_t x53 = 44U;
int8_t x57 = INT8_MAX;
int16_t x61 = INT16_MAX;
static int16_t x63 = -1;
int16_t x65 = INT16_MAX;
int32_t t14 = -1589;
uint64_t x76 = 83446788LLU;
int16_t x82 = -1;
static int16_t x88 = INT16_MIN;
volatile int32_t t19 = 452;
int32_t x93 = 46;
int64_t x96 = INT64_MIN;
volatile int64_t x99 = 135062269563158129LL;
int8_t x102 = -1;
int8_t x105 = -1;
static volatile int64_t x107 = INT64_MAX;
volatile int64_t x111 = -1LL;
volatile int64_t x114 = 2639LL;
uint16_t x119 = UINT16_MAX;
int16_t x125 = INT16_MAX;
uint64_t x126 = UINT64_MAX;
static int32_t x128 = INT32_MIN;
volatile uint16_t x129 = UINT16_MAX;
static int8_t x134 = INT8_MIN;
int8_t x139 = -11;
int32_t x142 = 591788942;
int32_t t33 = 24498;
static uint16_t x149 = 7580U;
uint64_t x154 = 8298041LLU;
static volatile int32_t x160 = INT32_MIN;
uint8_t x161 = 56U;
static uint8_t x163 = 45U;
int32_t x168 = INT32_MIN;
volatile int32_t t39 = 0;
int64_t x179 = INT64_MAX;
uint16_t x182 = UINT16_MAX;
static volatile uint64_t x189 = 95LLU;
volatile uint64_t x201 = 5545LLU;
int8_t x222 = 2;
int32_t x234 = 6;
int16_t x238 = 0;
volatile uint8_t x241 = UINT8_MAX;
int8_t x248 = 5;
int32_t x251 = -319267153;
static volatile int32_t t58 = -3525609;
static int8_t x257 = -1;
volatile uint16_t x279 = UINT16_MAX;
int32_t t63 = 7417;
int8_t x297 = INT8_MIN;
int32_t x298 = INT32_MIN;
int32_t t66 = 966;
static int8_t x303 = 1;
int64_t x306 = INT64_MAX;
int32_t t68 = -2044794;
int64_t x313 = INT64_MIN;
int32_t x318 = -45184;
int32_t t71 = 420826427;
static int8_t x321 = INT8_MIN;
int32_t t72 = -68198920;
static int64_t x327 = INT64_MAX;
int8_t x335 = 3;
static uint64_t x336 = UINT64_MAX;
int64_t x348 = -12246827370325LL;
int16_t x349 = INT16_MAX;
uint16_t x350 = 0U;
uint32_t x353 = 520U;
uint32_t x354 = UINT32_MAX;
int32_t x359 = -147;
int32_t x363 = INT32_MAX;
volatile int64_t x365 = -103062379418346LL;
int16_t x368 = 1080;
int32_t t81 = -904783;
uint8_t x379 = 0U;
uint8_t x390 = 90U;
uint32_t x396 = 3112542U;
int32_t x399 = INT32_MAX;
int16_t x400 = -1438;
volatile int32_t t90 = -4068;
volatile int32_t t92 = -21727;
uint16_t x415 = 3139U;
int16_t x418 = INT16_MIN;
volatile int32_t t95 = 22;
int16_t x427 = INT16_MIN;
static uint32_t x433 = 47867003U;
uint8_t x439 = UINT8_MAX;
volatile int32_t t98 = 8205315;
uint16_t x456 = UINT16_MAX;
uint64_t x457 = UINT64_MAX;
static int64_t x462 = INT64_MAX;
uint32_t x464 = UINT32_MAX;
int8_t x468 = 2;
static volatile int8_t x469 = 9;
static int64_t x471 = 18649722228882351LL;
volatile uint16_t x473 = UINT16_MAX;
static volatile uint32_t x476 = UINT32_MAX;
int32_t x479 = INT32_MAX;
volatile int32_t t106 = -12869;
static volatile int32_t t107 = -235151;
int16_t x489 = INT16_MIN;
static int32_t t108 = 27779;
int8_t x507 = -3;
volatile uint32_t x515 = UINT32_MAX;
volatile int16_t x521 = INT16_MAX;
uint16_t x524 = 7758U;
volatile int32_t t113 = -70898214;
static int32_t x532 = -1;
static int32_t x542 = -25;
int16_t x544 = INT16_MIN;
static uint32_t x547 = UINT32_MAX;
static int16_t x553 = -1;
int32_t x555 = -1;
static volatile int32_t t122 = 17848;
int32_t x561 = 51401324;
int32_t x570 = INT32_MIN;
volatile uint8_t x572 = 1U;
uint8_t x584 = UINT8_MAX;
int8_t x591 = 13;
int16_t x602 = INT16_MIN;
int16_t x605 = 1509;
uint16_t x606 = UINT16_MAX;
static uint32_t x608 = UINT32_MAX;
int32_t x619 = INT32_MAX;
static int16_t x629 = -1;
uint32_t x630 = 46U;
uint64_t x632 = 805226903LLU;
int64_t x634 = -1LL;
volatile int8_t x638 = INT8_MIN;
static uint8_t x640 = 125U;
int8_t x644 = INT8_MAX;
int32_t t144 = 106965;
uint64_t x658 = UINT64_MAX;
int32_t x659 = INT32_MAX;
int16_t x662 = INT16_MAX;
uint8_t x663 = UINT8_MAX;
int32_t t146 = 5051209;
int32_t x667 = -29548930;
int8_t x668 = INT8_MAX;
int32_t x672 = -258;
int8_t x675 = 1;
int32_t x682 = INT32_MIN;
int8_t x686 = -1;
volatile int32_t t151 = 146;
uint8_t x692 = 3U;
volatile int32_t t153 = -2425;
int8_t x699 = INT8_MIN;
uint16_t x709 = 110U;
volatile int32_t x712 = INT32_MAX;
int64_t x715 = -7843188888928LL;
int32_t x727 = -1;
int32_t t160 = -245108;
int16_t x730 = INT16_MIN;
static volatile int32_t t162 = -3120779;
int8_t x742 = -1;
int32_t x744 = -1;
uint32_t x747 = 9413U;
int32_t x748 = INT32_MIN;
volatile uint16_t x749 = 63U;
int32_t t165 = -2604310;
uint8_t x755 = UINT8_MAX;
int16_t x761 = INT16_MIN;
static volatile int32_t t167 = -9;
volatile uint64_t x766 = UINT64_MAX;
uint32_t x767 = UINT32_MAX;
volatile int32_t t169 = 91588;
static uint32_t x778 = 302653U;
static volatile int16_t x781 = INT16_MAX;
int32_t t172 = 41447864;
int64_t x786 = 803326077349681LL;
volatile int16_t x788 = -1;
static int32_t x795 = -1;
static int8_t x798 = -2;
uint32_t x799 = 12339217U;
int32_t x801 = -1631;
volatile int8_t x803 = INT8_MIN;
volatile int32_t t176 = 1;
int32_t t177 = -3;
int64_t x810 = INT64_MIN;
int8_t x816 = INT8_MAX;
static int32_t x817 = INT32_MIN;
static volatile int8_t x818 = INT8_MIN;
uint8_t x819 = UINT8_MAX;
uint8_t x824 = 0U;
int32_t t181 = 10176162;
uint16_t x829 = 52U;
int8_t x835 = INT8_MAX;
static int32_t t184 = -467843712;
int64_t x860 = INT64_MIN;
static volatile int32_t t190 = 2787;
int8_t x865 = INT8_MIN;
uint8_t x866 = 49U;
volatile int8_t x868 = 19;
volatile int32_t t191 = 416375;
uint8_t x870 = 111U;
int16_t x880 = -1;
static uint64_t x895 = 243183179777894LLU;
volatile int32_t t196 = 19130;
volatile int16_t x898 = 1;
uint64_t x900 = 11134197233378LLU;
int32_t x902 = -107800992;
int16_t x906 = 26;
static volatile int32_t t199 = -235;


void f0(void) {
    	int16_t x1 = -252;
	int16_t x2 = INT16_MAX;
	volatile uint8_t x3 = 16U;
	int32_t x4 = -1;
	volatile int32_t t0 = -22827764;

    t0 = (((x1==x2)-x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static uint32_t x6 = 1168U;
	int8_t x7 = INT8_MIN;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 177126;

    t1 = (((x5==x6)-x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 758077887;
	int8_t x10 = -1;
	int64_t x12 = -66454792666LL;
	volatile int32_t t2 = 0;

    t2 = (((x9==x10)-x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 52LL;
	uint64_t x15 = 49907137LLU;
	volatile int32_t t3 = 30823345;

    t3 = (((x13==x14)-x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 1891677012783LLU;
	int64_t x18 = INT64_MAX;
	int8_t x19 = INT8_MIN;
	static int64_t x20 = 4306531LL;
	int32_t t4 = 4;

    t4 = (((x17==x18)-x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x23 = UINT64_MAX;
	int32_t t5 = -2944934;

    t5 = (((x21==x22)-x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	volatile int32_t x27 = INT32_MAX;
	uint8_t x28 = 0U;

    t6 = (((x25==x26)-x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 5287636222LLU;
	int64_t x30 = -1LL;
	int16_t x31 = INT16_MIN;
	volatile uint16_t x32 = 21621U;
	int32_t t7 = 1774913;

    t7 = (((x29==x30)-x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = 955U;
	uint8_t x36 = UINT8_MAX;

    t8 = (((x33==x34)-x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 0;
	int8_t x38 = 1;
	int32_t t9 = -478028904;

    t9 = (((x37==x38)-x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x45 = INT32_MIN;
	int32_t x46 = -1;
	uint64_t x47 = 48174LLU;
	int16_t x48 = -141;
	volatile int32_t t10 = -1373;

    t10 = (((x45==x46)-x47)!=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x54 = INT64_MAX;
	static volatile uint8_t x55 = UINT8_MAX;
	static int8_t x56 = -5;
	int32_t t11 = -754;

    t11 = (((x53==x54)-x55)!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x58 = -767407;
	volatile int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;
	int32_t t12 = 1;

    t12 = (((x57==x58)-x59)!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x62 = -1;
	static volatile int16_t x64 = INT16_MIN;
	volatile int32_t t13 = 20970796;

    t13 = (((x61==x62)-x63)!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = -1;
	static volatile int16_t x67 = -35;
	static uint16_t x68 = UINT16_MAX;

    t14 = (((x65==x66)-x67)!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = UINT16_MAX;
	static int64_t x72 = -538705LL;
	volatile int32_t t15 = -330;

    t15 = (((x69==x70)-x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MIN;
	uint64_t x74 = 18074LLU;
	uint64_t x75 = 2043195555LLU;
	volatile int32_t t16 = 26;

    t16 = (((x73==x74)-x75)!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MIN;
	int64_t x78 = INT64_MAX;
	static int8_t x79 = -1;
	int64_t x80 = -1LL;
	volatile int32_t t17 = 2;

    t17 = (((x77==x78)-x79)!=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x81 = -122703239968830369LL;
	int8_t x83 = -1;
	volatile int32_t x84 = -1;
	int32_t t18 = 404;

    t18 = (((x81==x82)-x83)!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x85 = UINT16_MAX;
	volatile int64_t x86 = INT64_MAX;
	int16_t x87 = INT16_MIN;

    t19 = (((x85==x86)-x87)!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x89 = 2U;
	int8_t x90 = -1;
	uint8_t x91 = 3U;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t20 = -38779;

    t20 = (((x89==x90)-x91)!=x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x94 = 967871515527LLU;
	volatile uint32_t x95 = 20644844U;
	int32_t t21 = 2540374;

    t21 = (((x93==x94)-x95)!=x96);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	int64_t x98 = 54887464710LL;
	int16_t x100 = -1;
	volatile int32_t t22 = -8153;

    t22 = (((x97==x98)-x99)!=x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = INT64_MIN;
	int64_t x103 = -98762208403533LL;
	static int16_t x104 = 3476;
	int32_t t23 = -2701543;

    t23 = (((x101==x102)-x103)!=x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x106 = -1;
	uint32_t x108 = 271946U;
	int32_t t24 = -103;

    t24 = (((x105==x106)-x107)!=x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x109 = 32741U;
	int64_t x110 = INT64_MAX;
	volatile int64_t x112 = -900544676LL;
	int32_t t25 = 10616118;

    t25 = (((x109==x110)-x111)!=x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -1LL;
	static uint64_t x115 = 16687857558633899LLU;
	uint64_t x116 = 1359052236LLU;
	volatile int32_t t26 = -2507;

    t26 = (((x113==x114)-x115)!=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x117 = -1LL;
	int8_t x118 = -1;
	int32_t x120 = -1;
	volatile int32_t t27 = 2080625;

    t27 = (((x117==x118)-x119)!=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -45;
	static volatile int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = -97;

    t28 = (((x121==x122)-x123)!=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x127 = 13U;
	volatile int32_t t29 = -14344;

    t29 = (((x125==x126)-x127)!=x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x130 = INT8_MIN;
	static uint64_t x131 = 12054813705651LLU;
	volatile uint8_t x132 = 13U;
	volatile int32_t t30 = -31;

    t30 = (((x129==x130)-x131)!=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MAX;
	int8_t x135 = INT8_MAX;
	int64_t x136 = -1LL;
	volatile int32_t t31 = -6278;

    t31 = (((x133==x134)-x135)!=x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile uint8_t x138 = UINT8_MAX;
	int64_t x140 = -1LL;
	volatile int32_t t32 = 258588452;

    t32 = (((x137==x138)-x139)!=x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = 3419;
	int64_t x143 = 1325914699565333LL;
	int8_t x144 = -25;

    t33 = (((x141==x142)-x143)!=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = 5U;
	uint8_t x146 = 12U;
	int64_t x147 = 6530705LL;
	int64_t x148 = 845LL;
	volatile int32_t t34 = 19457;

    t34 = (((x145==x146)-x147)!=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x150 = 734U;
	int64_t x151 = -1LL;
	int32_t x152 = -31;
	volatile int32_t t35 = -9;

    t35 = (((x149==x150)-x151)!=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x153 = 110900036U;
	uint32_t x155 = 0U;
	static int64_t x156 = INT64_MIN;
	int32_t t36 = -1505;

    t36 = (((x153==x154)-x155)!=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = -1;
	volatile uint32_t x158 = UINT32_MAX;
	static int16_t x159 = -1;
	volatile int32_t t37 = 22092;

    t37 = (((x157==x158)-x159)!=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x162 = 8487;
	static int64_t x164 = INT64_MIN;
	int32_t t38 = -1520;

    t38 = (((x161==x162)-x163)!=x164);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = -3;
	uint8_t x167 = UINT8_MAX;

    t39 = (((x165==x166)-x167)!=x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = 224885950LLU;
	int32_t x170 = -1;
	static int8_t x171 = INT8_MAX;
	static int32_t x172 = 411;
	int32_t t40 = -382621;

    t40 = (((x169==x170)-x171)!=x172);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MAX;
	static int32_t x178 = INT32_MIN;
	int8_t x180 = INT8_MAX;
	int32_t t41 = -20;

    t41 = (((x177==x178)-x179)!=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MIN;
	uint16_t x183 = 2U;
	int64_t x184 = INT64_MIN;
	int32_t t42 = 12901;

    t42 = (((x181==x182)-x183)!=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -1;
	volatile int64_t x186 = 41035002476668786LL;
	int64_t x187 = 492613978922LL;
	uint64_t x188 = 16754388LLU;
	static int32_t t43 = -1;

    t43 = (((x185==x186)-x187)!=x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x190 = INT16_MIN;
	int16_t x191 = -127;
	static int8_t x192 = -1;
	volatile int32_t t44 = -83097;

    t44 = (((x189==x190)-x191)!=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = -1LL;
	int32_t x194 = 5946797;
	int64_t x195 = -1LL;
	static int8_t x196 = -1;
	volatile int32_t t45 = -1575;

    t45 = (((x193==x194)-x195)!=x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x202 = 1021708054238LLU;
	uint16_t x203 = 23550U;
	static volatile int8_t x204 = -1;
	int32_t t46 = -7315655;

    t46 = (((x201==x202)-x203)!=x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	uint16_t x207 = 6534U;
	volatile int8_t x208 = -1;
	int32_t t47 = 1;

    t47 = (((x205==x206)-x207)!=x208);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x209 = -1612479724036823861LL;
	int64_t x210 = -24811LL;
	uint16_t x211 = 2U;
	static int64_t x212 = INT64_MAX;
	int32_t t48 = -175;

    t48 = (((x209==x210)-x211)!=x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x217 = -1;
	volatile uint8_t x218 = 44U;
	uint8_t x219 = 22U;
	int32_t x220 = INT32_MAX;
	int32_t t49 = 281515;

    t49 = (((x217==x218)-x219)!=x220);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x221 = 14770U;
	uint8_t x223 = 28U;
	volatile int32_t x224 = -3429322;
	int32_t t50 = -710;

    t50 = (((x221==x222)-x223)!=x224);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = 21LL;
	volatile int32_t t51 = -55490;

    t51 = (((x225==x226)-x227)!=x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = -184826315513551LL;
	static volatile int8_t x230 = 1;
	int16_t x231 = -3447;
	volatile uint32_t x232 = 1361909674U;
	int32_t t52 = -263594351;

    t52 = (((x229==x230)-x231)!=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x233 = INT64_MAX;
	static int32_t x235 = -1;
	volatile int64_t x236 = 882094560352LL;
	volatile int32_t t53 = -782905778;

    t53 = (((x233==x234)-x235)!=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x237 = 1386291186U;
	int8_t x239 = INT8_MAX;
	uint64_t x240 = 1432905182454994241LLU;
	static volatile int32_t t54 = 1653;

    t54 = (((x237==x238)-x239)!=x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x242 = 949788795058343LL;
	uint64_t x243 = 112251298000295LLU;
	static int8_t x244 = INT8_MIN;
	volatile int32_t t55 = 38714773;

    t55 = (((x241==x242)-x243)!=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = INT64_MAX;
	uint64_t x246 = 25LLU;
	uint64_t x247 = 182815LLU;
	int32_t t56 = -437456;

    t56 = (((x245==x246)-x247)!=x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	int8_t x250 = INT8_MIN;
	static uint64_t x252 = UINT64_MAX;
	volatile int32_t t57 = -859;

    t57 = (((x249==x250)-x251)!=x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x253 = 670433804257949022LLU;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 5U;
	uint16_t x256 = 1995U;

    t58 = (((x253==x254)-x255)!=x256);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x258 = INT8_MAX;
	int16_t x259 = INT16_MIN;
	static volatile uint64_t x260 = 8066741LLU;
	static int32_t t59 = 1827175;

    t59 = (((x257==x258)-x259)!=x260);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x261 = INT32_MIN;
	static uint32_t x262 = 1U;
	int8_t x263 = -1;
	volatile uint32_t x264 = 1U;
	static int32_t t60 = 1;

    t60 = (((x261==x262)-x263)!=x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x265 = 97U;
	int64_t x266 = INT64_MIN;
	uint8_t x267 = 1U;
	int64_t x268 = -5130603314313LL;
	int32_t t61 = 21;

    t61 = (((x265==x266)-x267)!=x268);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x273 = 240U;
	uint32_t x274 = UINT32_MAX;
	uint64_t x275 = UINT64_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t62 = 387404787;

    t62 = (((x273==x274)-x275)!=x276);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x277 = -1LL;
	int8_t x278 = INT8_MIN;
	volatile int32_t x280 = INT32_MAX;

    t63 = (((x277==x278)-x279)!=x280);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x281 = INT8_MIN;
	static int16_t x282 = -1;
	int32_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t64 = 10344;

    t64 = (((x281==x282)-x283)!=x284);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x293 = -55;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t65 = 15115;

    t65 = (((x293==x294)-x295)!=x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x299 = 7U;
	int32_t x300 = INT32_MIN;

    t66 = (((x297==x298)-x299)!=x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x301 = INT64_MIN;
	volatile int32_t x302 = INT32_MIN;
	int16_t x304 = 35;
	volatile int32_t t67 = -91787195;

    t67 = (((x301==x302)-x303)!=x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = INT16_MIN;
	static uint16_t x307 = 1747U;
	static int64_t x308 = INT64_MIN;

    t68 = (((x305==x306)-x307)!=x308);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = INT8_MAX;
	int32_t x310 = INT32_MIN;
	volatile int16_t x311 = 1;
	volatile int32_t x312 = -1;
	int32_t t69 = 3299895;

    t69 = (((x309==x310)-x311)!=x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x314 = 25812623381725LL;
	int64_t x315 = -495499809LL;
	static int64_t x316 = 3556LL;
	static volatile int32_t t70 = -14722346;

    t70 = (((x313==x314)-x315)!=x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x317 = -86375630LL;
	int64_t x319 = INT64_MAX;
	uint16_t x320 = 4U;

    t71 = (((x317==x318)-x319)!=x320);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = 5;
	int8_t x324 = INT8_MIN;

    t72 = (((x321==x322)-x323)!=x324);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x325 = INT64_MIN;
	uint64_t x326 = 5191LLU;
	uint64_t x328 = UINT64_MAX;
	static int32_t t73 = -504328026;

    t73 = (((x325==x326)-x327)!=x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x329 = 8750041827375392LLU;
	volatile int8_t x330 = -1;
	volatile int64_t x331 = 0LL;
	uint8_t x332 = 3U;
	int32_t t74 = -1;

    t74 = (((x329==x330)-x331)!=x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = -5425;
	int32_t x334 = INT32_MIN;
	static volatile int32_t t75 = -490762;

    t75 = (((x333==x334)-x335)!=x336);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = INT32_MIN;
	int64_t x346 = 382218LL;
	int32_t x347 = -1;
	static int32_t t76 = 114511525;

    t76 = (((x345==x346)-x347)!=x348);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x351 = 7;
	static int8_t x352 = INT8_MIN;
	int32_t t77 = 548;

    t77 = (((x349==x350)-x351)!=x352);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x355 = -3880;
	int32_t x356 = INT32_MIN;
	static int32_t t78 = -45;

    t78 = (((x353==x354)-x355)!=x356);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x357 = INT64_MAX;
	static uint64_t x358 = 1LLU;
	volatile uint32_t x360 = 314143348U;
	int32_t t79 = -153896;

    t79 = (((x357==x358)-x359)!=x360);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x361 = 111121775LLU;
	int8_t x362 = -1;
	static uint8_t x364 = 97U;
	int32_t t80 = -203;

    t80 = (((x361==x362)-x363)!=x364);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x366 = -1;
	static int16_t x367 = -63;

    t81 = (((x365==x366)-x367)!=x368);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = -1;
	uint64_t x371 = 0LLU;
	int8_t x372 = INT8_MAX;
	int32_t t82 = 24569;

    t82 = (((x369==x370)-x371)!=x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x373 = 0U;
	int32_t x374 = -402;
	int16_t x375 = -682;
	static uint64_t x376 = UINT64_MAX;
	volatile int32_t t83 = 3;

    t83 = (((x373==x374)-x375)!=x376);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x377 = 77U;
	uint64_t x378 = 31011939788683LLU;
	int16_t x380 = INT16_MIN;
	volatile int32_t t84 = -4469;

    t84 = (((x377==x378)-x379)!=x380);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x381 = -1;
	volatile uint32_t x382 = 1441U;
	volatile uint16_t x383 = 0U;
	uint8_t x384 = 20U;
	int32_t t85 = -14;

    t85 = (((x381==x382)-x383)!=x384);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	int64_t x386 = 787LL;
	static uint64_t x387 = UINT64_MAX;
	static int32_t x388 = -384708;
	volatile int32_t t86 = -5;

    t86 = (((x385==x386)-x387)!=x388);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x389 = 0;
	static int16_t x391 = -1;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t87 = -1798246;

    t87 = (((x389==x390)-x391)!=x392);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x393 = UINT64_MAX;
	static uint8_t x394 = 3U;
	static int64_t x395 = INT64_MAX;
	int32_t t88 = -43;

    t88 = (((x393==x394)-x395)!=x396);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x397 = INT64_MAX;
	uint8_t x398 = 5U;
	static int32_t t89 = -40701492;

    t89 = (((x397==x398)-x399)!=x400);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	uint64_t x403 = 54618479319109LLU;
	volatile int32_t x404 = INT32_MIN;

    t90 = (((x401==x402)-x403)!=x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x405 = 44U;
	volatile int32_t x406 = -1;
	uint32_t x407 = 6415561U;
	uint64_t x408 = 1054642374205016009LLU;
	int32_t t91 = 31;

    t91 = (((x405==x406)-x407)!=x408);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x409 = 1520473U;
	int32_t x410 = INT32_MIN;
	int16_t x411 = -30;
	int16_t x412 = INT16_MIN;

    t92 = (((x409==x410)-x411)!=x412);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = INT16_MAX;
	static int32_t x414 = INT32_MIN;
	volatile uint8_t x416 = 102U;
	volatile int32_t t93 = 17;

    t93 = (((x413==x414)-x415)!=x416);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = -1;
	int32_t t94 = -25;

    t94 = (((x417==x418)-x419)!=x420);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x421 = 20692LLU;
	uint64_t x422 = 337730539205LLU;
	uint8_t x423 = 3U;
	int32_t x424 = 0;

    t95 = (((x421==x422)-x423)!=x424);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = INT16_MIN;
	static int8_t x426 = INT8_MAX;
	uint8_t x428 = 16U;
	volatile int32_t t96 = 211035926;

    t96 = (((x425==x426)-x427)!=x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x434 = 1;
	int16_t x435 = INT16_MAX;
	uint8_t x436 = 7U;
	int32_t t97 = 151;

    t97 = (((x433==x434)-x435)!=x436);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x437 = INT64_MAX;
	volatile int8_t x438 = -1;
	int32_t x440 = INT32_MAX;

    t98 = (((x437==x438)-x439)!=x440);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x445 = -2;
	int64_t x446 = -1409LL;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = 0U;
	int32_t t99 = 205;

    t99 = (((x445==x446)-x447)!=x448);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x453 = INT32_MIN;
	int64_t x454 = INT64_MIN;
	static uint16_t x455 = UINT16_MAX;
	volatile int32_t t100 = 507720770;

    t100 = (((x453==x454)-x455)!=x456);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x458 = -106LL;
	static volatile int32_t x459 = 5131271;
	volatile int32_t x460 = 453;
	int32_t t101 = 1668897;

    t101 = (((x457==x458)-x459)!=x460);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x461 = -1;
	uint8_t x463 = UINT8_MAX;
	volatile int32_t t102 = 0;

    t102 = (((x461==x462)-x463)!=x464);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x466 = -1;
	static int64_t x467 = 197015690231376LL;
	int32_t t103 = 139390;

    t103 = (((x465==x466)-x467)!=x468);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x470 = UINT64_MAX;
	volatile int32_t x472 = INT32_MAX;
	int32_t t104 = -11068;

    t104 = (((x469==x470)-x471)!=x472);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x474 = INT16_MAX;
	volatile uint16_t x475 = 3617U;
	static volatile int32_t t105 = -5;

    t105 = (((x473==x474)-x475)!=x476);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x477 = INT64_MAX;
	static int8_t x478 = -1;
	volatile int16_t x480 = INT16_MIN;

    t106 = (((x477==x478)-x479)!=x480);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x481 = INT16_MAX;
	uint32_t x482 = UINT32_MAX;
	uint8_t x483 = 1U;
	volatile int8_t x484 = 31;

    t107 = (((x481==x482)-x483)!=x484);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x490 = INT32_MIN;
	static uint16_t x491 = 5690U;
	int16_t x492 = 322;

    t108 = (((x489==x490)-x491)!=x492);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x493 = 0U;
	int64_t x494 = INT64_MIN;
	static uint32_t x495 = 49149U;
	int32_t x496 = INT32_MIN;
	int32_t t109 = -9208;

    t109 = (((x493==x494)-x495)!=x496);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x501 = 28710U;
	int32_t x502 = INT32_MAX;
	static uint16_t x503 = UINT16_MAX;
	int16_t x504 = INT16_MIN;
	int32_t t110 = -1484;

    t110 = (((x501==x502)-x503)!=x504);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x505 = 10U;
	int32_t x506 = -1;
	volatile int64_t x508 = -467667032331220540LL;
	volatile int32_t t111 = -3344;

    t111 = (((x505==x506)-x507)!=x508);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x513 = 4370892LLU;
	int16_t x514 = INT16_MAX;
	static int8_t x516 = 0;
	int32_t t112 = -86117;

    t112 = (((x513==x514)-x515)!=x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x522 = 515432945777LL;
	int8_t x523 = INT8_MIN;

    t113 = (((x521==x522)-x523)!=x524);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x525 = 66;
	static int8_t x526 = -11;
	uint64_t x527 = 262769594LLU;
	uint16_t x528 = 219U;
	static int32_t t114 = -15;

    t114 = (((x525==x526)-x527)!=x528);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x529 = INT32_MIN;
	static int32_t x530 = -40829;
	int32_t x531 = -1;
	int32_t t115 = 3760196;

    t115 = (((x529==x530)-x531)!=x532);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x533 = 26;
	uint8_t x534 = 36U;
	int16_t x535 = -1;
	int16_t x536 = INT16_MIN;
	static int32_t t116 = 92526;

    t116 = (((x533==x534)-x535)!=x536);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x537 = 25U;
	uint16_t x538 = 88U;
	int32_t x539 = 1;
	int16_t x540 = 7273;
	volatile int32_t t117 = 3237985;

    t117 = (((x537==x538)-x539)!=x540);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x541 = 28074580LLU;
	int8_t x543 = 3;
	int32_t t118 = 559782;

    t118 = (((x541==x542)-x543)!=x544);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x545 = -1LL;
	int8_t x546 = INT8_MIN;
	int8_t x548 = INT8_MAX;
	int32_t t119 = 108042;

    t119 = (((x545==x546)-x547)!=x548);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x549 = -48989;
	int16_t x550 = -1;
	volatile uint64_t x551 = 21869457715809793LLU;
	uint16_t x552 = UINT16_MAX;
	int32_t t120 = -25165274;

    t120 = (((x549==x550)-x551)!=x552);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x554 = 37U;
	uint8_t x556 = 62U;
	int32_t t121 = -681517897;

    t121 = (((x553==x554)-x555)!=x556);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x557 = -10092;
	int64_t x558 = INT64_MIN;
	volatile int32_t x559 = -1;
	int64_t x560 = -736LL;

    t122 = (((x557==x558)-x559)!=x560);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x562 = -1;
	static int8_t x563 = INT8_MAX;
	uint64_t x564 = 28159LLU;
	int32_t t123 = 877299;

    t123 = (((x561==x562)-x563)!=x564);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x565 = 1154942979729707241LLU;
	int32_t x566 = -1978;
	int16_t x567 = INT16_MAX;
	static uint64_t x568 = 115098476269558124LLU;
	static volatile int32_t t124 = 2;

    t124 = (((x565==x566)-x567)!=x568);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x569 = INT32_MIN;
	int8_t x571 = -1;
	volatile int32_t t125 = 28;

    t125 = (((x569==x570)-x571)!=x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x573 = 2457LLU;
	int16_t x574 = -93;
	uint64_t x575 = 137872765LLU;
	int64_t x576 = INT64_MIN;
	volatile int32_t t126 = 0;

    t126 = (((x573==x574)-x575)!=x576);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x577 = -1;
	uint8_t x578 = UINT8_MAX;
	int8_t x579 = 36;
	volatile int64_t x580 = INT64_MIN;
	volatile int32_t t127 = -11750853;

    t127 = (((x577==x578)-x579)!=x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x581 = 46U;
	int32_t x582 = INT32_MAX;
	uint16_t x583 = 115U;
	volatile int32_t t128 = -124;

    t128 = (((x581==x582)-x583)!=x584);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int32_t x586 = 7988149;
	uint64_t x587 = UINT64_MAX;
	int16_t x588 = -1;
	static volatile int32_t t129 = 624007;

    t129 = (((x585==x586)-x587)!=x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x589 = 5204U;
	int16_t x590 = INT16_MIN;
	uint32_t x592 = UINT32_MAX;
	volatile int32_t t130 = -3425;

    t130 = (((x589==x590)-x591)!=x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x593 = 122U;
	volatile int32_t x594 = INT32_MAX;
	volatile uint32_t x595 = UINT32_MAX;
	uint8_t x596 = 60U;
	static int32_t t131 = 149247;

    t131 = (((x593==x594)-x595)!=x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x597 = -221910965158804542LL;
	uint16_t x598 = 2U;
	uint64_t x599 = UINT64_MAX;
	int16_t x600 = -1491;
	static int32_t t132 = 1371;

    t132 = (((x597==x598)-x599)!=x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x601 = 78957186U;
	uint16_t x603 = UINT16_MAX;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t133 = 789976;

    t133 = (((x601==x602)-x603)!=x604);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x607 = INT16_MAX;
	volatile int32_t t134 = 1527;

    t134 = (((x605==x606)-x607)!=x608);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x609 = INT64_MIN;
	int8_t x610 = INT8_MAX;
	uint64_t x611 = 5LLU;
	int32_t x612 = -1;
	volatile int32_t t135 = 101605006;

    t135 = (((x609==x610)-x611)!=x612);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x613 = 1U;
	int8_t x614 = INT8_MAX;
	volatile int64_t x615 = 52825LL;
	int64_t x616 = INT64_MIN;
	int32_t t136 = 336174018;

    t136 = (((x613==x614)-x615)!=x616);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x617 = 769326U;
	static uint16_t x618 = 167U;
	static uint64_t x620 = 1871459447030LLU;
	volatile int32_t t137 = 1;

    t137 = (((x617==x618)-x619)!=x620);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x621 = 1;
	int64_t x622 = -1926878288314340455LL;
	int64_t x623 = -1LL;
	volatile int64_t x624 = INT64_MAX;
	int32_t t138 = 511420311;

    t138 = (((x621==x622)-x623)!=x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x631 = UINT8_MAX;
	volatile int32_t t139 = 32267;

    t139 = (((x629==x630)-x631)!=x632);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x633 = UINT64_MAX;
	int8_t x635 = -13;
	uint16_t x636 = UINT16_MAX;
	volatile int32_t t140 = -1036211123;

    t140 = (((x633==x634)-x635)!=x636);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x637 = -2;
	int8_t x639 = INT8_MIN;
	static int32_t t141 = 7590894;

    t141 = (((x637==x638)-x639)!=x640);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x641 = 23511U;
	int64_t x642 = INT64_MIN;
	int64_t x643 = 7441LL;
	static volatile int32_t t142 = 860;

    t142 = (((x641==x642)-x643)!=x644);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x649 = INT64_MAX;
	int32_t x650 = INT32_MIN;
	volatile int8_t x651 = INT8_MAX;
	int8_t x652 = 14;
	int32_t t143 = 28436225;

    t143 = (((x649==x650)-x651)!=x652);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x653 = 936851228LLU;
	static uint16_t x654 = 108U;
	volatile int16_t x655 = 13373;
	static uint32_t x656 = UINT32_MAX;

    t144 = (((x653==x654)-x655)!=x656);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x657 = INT16_MAX;
	int32_t x660 = INT32_MIN;
	int32_t t145 = -1;

    t145 = (((x657==x658)-x659)!=x660);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x661 = INT16_MIN;
	uint8_t x664 = UINT8_MAX;

    t146 = (((x661==x662)-x663)!=x664);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x665 = 14559U;
	int16_t x666 = -11;
	volatile int32_t t147 = 5909;

    t147 = (((x665==x666)-x667)!=x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x669 = INT32_MIN;
	static volatile uint8_t x670 = 25U;
	int16_t x671 = INT16_MIN;
	int32_t t148 = -1;

    t148 = (((x669==x670)-x671)!=x672);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x673 = INT8_MAX;
	int8_t x674 = 0;
	int8_t x676 = 12;
	volatile int32_t t149 = 2788031;

    t149 = (((x673==x674)-x675)!=x676);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x681 = INT32_MIN;
	int64_t x683 = 257557213264760LL;
	static int64_t x684 = INT64_MAX;
	volatile int32_t t150 = -101;

    t150 = (((x681==x682)-x683)!=x684);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x685 = -1;
	int16_t x687 = 14961;
	uint32_t x688 = 2U;

    t151 = (((x685==x686)-x687)!=x688);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x689 = 976254219873LLU;
	static int8_t x690 = INT8_MIN;
	uint64_t x691 = 3294109LLU;
	static int32_t t152 = -3542339;

    t152 = (((x689==x690)-x691)!=x692);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x693 = -1LL;
	static int32_t x694 = -66571479;
	static uint16_t x695 = 1683U;
	uint32_t x696 = 55596335U;

    t153 = (((x693==x694)-x695)!=x696);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x697 = 1721620U;
	int8_t x698 = -25;
	static volatile uint32_t x700 = 5U;
	static int32_t t154 = 3010580;

    t154 = (((x697==x698)-x699)!=x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x702 = INT64_MIN;
	int32_t x703 = INT32_MAX;
	uint32_t x704 = UINT32_MAX;
	volatile int32_t t155 = -2;

    t155 = (((x701==x702)-x703)!=x704);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x706 = INT32_MIN;
	uint8_t x707 = 1U;
	int16_t x708 = INT16_MIN;
	int32_t t156 = -2;

    t156 = (((x705==x706)-x707)!=x708);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x710 = INT8_MAX;
	int16_t x711 = INT16_MAX;
	static int32_t t157 = 0;

    t157 = (((x709==x710)-x711)!=x712);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x713 = 19U;
	static uint16_t x714 = 10599U;
	uint8_t x716 = 57U;
	volatile int32_t t158 = -1;

    t158 = (((x713==x714)-x715)!=x716);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x721 = UINT8_MAX;
	static uint32_t x722 = 650U;
	int32_t x723 = 24626;
	static int64_t x724 = INT64_MAX;
	int32_t t159 = -117638;

    t159 = (((x721==x722)-x723)!=x724);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x725 = INT16_MIN;
	volatile int32_t x726 = 430792254;
	uint64_t x728 = 4LLU;

    t160 = (((x725==x726)-x727)!=x728);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x729 = 27121819LL;
	volatile int16_t x731 = INT16_MIN;
	int32_t x732 = 1012844;
	static int32_t t161 = 0;

    t161 = (((x729==x730)-x731)!=x732);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x733 = -9;
	uint64_t x734 = 1067061816493LLU;
	uint64_t x735 = UINT64_MAX;
	int16_t x736 = INT16_MIN;

    t162 = (((x733==x734)-x735)!=x736);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x741 = -10125439LL;
	static volatile int16_t x743 = INT16_MAX;
	static int32_t t163 = 1;

    t163 = (((x741==x742)-x743)!=x744);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x745 = INT16_MIN;
	int8_t x746 = -1;
	int32_t t164 = -1;

    t164 = (((x745==x746)-x747)!=x748);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x750 = UINT64_MAX;
	int16_t x751 = INT16_MAX;
	int32_t x752 = 1131648;

    t165 = (((x749==x750)-x751)!=x752);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x753 = 92543237LLU;
	uint64_t x754 = UINT64_MAX;
	uint16_t x756 = 1U;
	int32_t t166 = -2577582;

    t166 = (((x753==x754)-x755)!=x756);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x762 = 2U;
	uint32_t x763 = UINT32_MAX;
	int8_t x764 = -24;

    t167 = (((x761==x762)-x763)!=x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x765 = 119U;
	int64_t x768 = 0LL;
	static int32_t t168 = 12;

    t168 = (((x765==x766)-x767)!=x768);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x769 = INT64_MAX;
	static uint16_t x770 = 13998U;
	int8_t x771 = INT8_MAX;
	uint8_t x772 = 0U;

    t169 = (((x769==x770)-x771)!=x772);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x773 = -1LL;
	int32_t x774 = INT32_MIN;
	uint8_t x775 = 21U;
	static volatile int32_t x776 = INT32_MIN;
	int32_t t170 = 57;

    t170 = (((x773==x774)-x775)!=x776);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x777 = 59U;
	static uint16_t x779 = 6020U;
	static uint64_t x780 = UINT64_MAX;
	int32_t t171 = -2;

    t171 = (((x777==x778)-x779)!=x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x782 = INT32_MIN;
	volatile int64_t x783 = INT64_MAX;
	int32_t x784 = INT32_MIN;

    t172 = (((x781==x782)-x783)!=x784);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x785 = INT16_MAX;
	static int64_t x787 = INT64_MAX;
	static int32_t t173 = -2199501;

    t173 = (((x785==x786)-x787)!=x788);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x794 = -52;
	int16_t x796 = -1;
	volatile int32_t t174 = 623;

    t174 = (((x793==x794)-x795)!=x796);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x797 = INT8_MIN;
	int64_t x800 = -4786926553118LL;
	volatile int32_t t175 = 0;

    t175 = (((x797==x798)-x799)!=x800);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x802 = UINT64_MAX;
	static int8_t x804 = INT8_MIN;

    t176 = (((x801==x802)-x803)!=x804);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x805 = UINT32_MAX;
	int64_t x806 = -39LL;
	static int8_t x807 = INT8_MIN;
	int16_t x808 = INT16_MIN;

    t177 = (((x805==x806)-x807)!=x808);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x809 = INT8_MIN;
	static uint64_t x811 = UINT64_MAX;
	int32_t x812 = 503557219;
	int32_t t178 = -1782916;

    t178 = (((x809==x810)-x811)!=x812);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x813 = INT8_MAX;
	uint32_t x814 = UINT32_MAX;
	int64_t x815 = 11124373343LL;
	int32_t t179 = 6688;

    t179 = (((x813==x814)-x815)!=x816);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x820 = INT16_MAX;
	int32_t t180 = -10;

    t180 = (((x817==x818)-x819)!=x820);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x821 = INT32_MIN;
	uint8_t x822 = 0U;
	static int16_t x823 = INT16_MAX;

    t181 = (((x821==x822)-x823)!=x824);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x825 = UINT16_MAX;
	uint16_t x826 = UINT16_MAX;
	uint64_t x827 = 6503788935045LLU;
	uint64_t x828 = 1697444392289LLU;
	int32_t t182 = -65962609;

    t182 = (((x825==x826)-x827)!=x828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x830 = 525;
	static int64_t x831 = -49367831LL;
	uint16_t x832 = 22088U;
	volatile int32_t t183 = 7;

    t183 = (((x829==x830)-x831)!=x832);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x833 = 15548299LLU;
	volatile uint32_t x834 = 450U;
	volatile int8_t x836 = INT8_MIN;

    t184 = (((x833==x834)-x835)!=x836);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x837 = UINT32_MAX;
	static int32_t x838 = INT32_MAX;
	static volatile uint16_t x839 = UINT16_MAX;
	int64_t x840 = 1375LL;
	static volatile int32_t t185 = 3;

    t185 = (((x837==x838)-x839)!=x840);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x841 = -1;
	int32_t x842 = -1;
	static uint32_t x843 = UINT32_MAX;
	static int16_t x844 = -1;
	int32_t t186 = 92691;

    t186 = (((x841==x842)-x843)!=x844);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x845 = 67U;
	int64_t x846 = -1LL;
	volatile int8_t x847 = 14;
	static int8_t x848 = INT8_MAX;
	static volatile int32_t t187 = -1083;

    t187 = (((x845==x846)-x847)!=x848);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x849 = 449870U;
	static int32_t x850 = INT32_MIN;
	int64_t x851 = 84004845047186LL;
	uint32_t x852 = UINT32_MAX;
	volatile int32_t t188 = 0;

    t188 = (((x849==x850)-x851)!=x852);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = 316381;
	static int64_t x858 = INT64_MAX;
	int32_t x859 = 0;
	int32_t t189 = -149514;

    t189 = (((x857==x858)-x859)!=x860);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x861 = INT8_MIN;
	int8_t x862 = INT8_MAX;
	uint16_t x863 = UINT16_MAX;
	volatile int64_t x864 = INT64_MAX;

    t190 = (((x861==x862)-x863)!=x864);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x867 = 436185;

    t191 = (((x865==x866)-x867)!=x868);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x869 = 24U;
	int16_t x871 = 52;
	volatile uint64_t x872 = 15LLU;
	static volatile int32_t t192 = -41;

    t192 = (((x869==x870)-x871)!=x872);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x877 = -1;
	static int8_t x878 = -1;
	static int64_t x879 = -1LL;
	volatile int32_t t193 = -8316412;

    t193 = (((x877==x878)-x879)!=x880);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x881 = INT32_MIN;
	int8_t x882 = INT8_MIN;
	volatile int16_t x883 = INT16_MAX;
	int8_t x884 = 9;
	volatile int32_t t194 = 471801997;

    t194 = (((x881==x882)-x883)!=x884);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x885 = INT8_MIN;
	int64_t x886 = 446LL;
	int64_t x887 = -1298017420LL;
	int32_t x888 = INT32_MIN;
	int32_t t195 = 60529588;

    t195 = (((x885==x886)-x887)!=x888);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x893 = 5658LLU;
	static uint8_t x894 = 11U;
	int64_t x896 = INT64_MIN;

    t196 = (((x893==x894)-x895)!=x896);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x897 = 34283201706368LLU;
	volatile uint32_t x899 = 57436U;
	volatile int32_t t197 = -6771;

    t197 = (((x897==x898)-x899)!=x900);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x901 = 1459U;
	int64_t x903 = -1LL;
	volatile int16_t x904 = INT16_MAX;
	volatile int32_t t198 = -25536843;

    t198 = (((x901==x902)-x903)!=x904);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x905 = INT64_MIN;
	int64_t x907 = -151318366414LL;
	static volatile int8_t x908 = 17;

    t199 = (((x905==x906)-x907)!=x908);

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

