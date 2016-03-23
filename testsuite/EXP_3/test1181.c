
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

static volatile int32_t t0 = 25;
uint32_t x8 = 2069956U;
uint32_t x11 = 44242U;
int8_t x20 = INT8_MIN;
int8_t x22 = -1;
int64_t x24 = -56551081762873932LL;
volatile int32_t t5 = -62;
int8_t x29 = -1;
int8_t x30 = -1;
int32_t t6 = 2770180;
int8_t x33 = INT8_MIN;
uint32_t x34 = 46U;
int64_t x35 = -1LL;
static int16_t x36 = INT16_MAX;
int32_t x40 = INT32_MAX;
uint32_t x51 = 3U;
volatile int32_t t10 = 28;
int8_t x53 = -1;
static uint8_t x54 = UINT8_MAX;
static int8_t x55 = 8;
volatile int64_t t13 = -1842714485576920435LL;
uint8_t x65 = UINT8_MAX;
int32_t t14 = 0;
volatile int64_t x75 = -1LL;
uint64_t t15 = 20195363844959LLU;
int16_t x82 = -740;
static volatile int32_t x95 = -1;
int32_t x101 = INT32_MAX;
int16_t x107 = INT16_MAX;
volatile int32_t t23 = 0;
int32_t x118 = -3163679;
int64_t x119 = INT64_MIN;
static volatile uint64_t t26 = 0LLU;
static uint8_t x129 = 1U;
uint16_t x133 = 0U;
int16_t x134 = -3392;
static volatile uint32_t x136 = 955046U;
static uint8_t x140 = 84U;
int8_t x147 = INT8_MIN;
int8_t x154 = INT8_MAX;
int8_t x158 = INT8_MIN;
volatile int64_t x166 = -1LL;
int64_t x168 = INT64_MIN;
int64_t x170 = 1275958LL;
static volatile int64_t x177 = INT64_MIN;
int32_t x193 = INT32_MIN;
volatile int32_t t42 = -3479462;
int16_t x209 = INT16_MAX;
uint64_t t45 = 112896472071LLU;
uint64_t t47 = 1124989792LLU;
static int16_t x224 = -1;
int16_t x226 = INT16_MIN;
static volatile int16_t x230 = INT16_MAX;
static int32_t x246 = INT32_MIN;
int32_t x264 = 7;
int8_t x266 = 0;
uint32_t x273 = 82713932U;
static int16_t x280 = INT16_MAX;
uint8_t x284 = UINT8_MAX;
int8_t x285 = INT8_MIN;
int64_t x294 = -15337028133LL;
volatile int64_t t64 = -77235220552137LL;
uint32_t x303 = UINT32_MAX;
int32_t t66 = 46;
int8_t x307 = INT8_MIN;
volatile int64_t t67 = -3LL;
int64_t x311 = INT64_MAX;
static int8_t x319 = -2;
int32_t t69 = -39779961;
static int8_t x324 = INT8_MIN;
uint16_t x325 = UINT16_MAX;
int64_t t71 = 10649188961369LL;
static uint16_t x329 = 8U;
int32_t t72 = -281;
static int32_t x340 = INT32_MAX;
static uint16_t x352 = 15436U;
int64_t t76 = 522641LL;
uint64_t t77 = 3004650LLU;
static int16_t x373 = INT16_MAX;
static volatile uint16_t x402 = 1U;
uint32_t x408 = 472507953U;
uint16_t x410 = UINT16_MAX;
volatile int32_t x415 = -165;
static uint32_t x416 = 261906U;
int64_t x417 = -505322215616770087LL;
volatile int32_t x418 = INT32_MIN;
int32_t x419 = -1;
uint32_t x422 = 1106780440U;
int32_t x430 = INT32_MAX;
volatile int32_t x432 = -7109;
volatile int32_t t94 = -316;
static int8_t x434 = INT8_MIN;
int32_t x436 = INT32_MIN;
static int64_t x440 = INT64_MAX;
int32_t x443 = INT32_MIN;
uint64_t x445 = 822788122329597LLU;
int64_t x446 = INT64_MIN;
int32_t x455 = INT32_MIN;
volatile int64_t t100 = 55239655286043LL;
volatile int32_t t101 = 2104055;
volatile int8_t x463 = INT8_MAX;
static volatile int64_t t102 = 15406296041LL;
int64_t x468 = -28600083451LL;
int64_t x471 = -30258123LL;
int64_t t104 = -496915365730684269LL;
int32_t x478 = 3;
int32_t t105 = -27866190;
int8_t x482 = INT8_MAX;
volatile int64_t x486 = 152LL;
int64_t x489 = 12LL;
int64_t t108 = -100073074LL;
uint64_t x493 = 478785LLU;
uint8_t x495 = UINT8_MAX;
volatile uint8_t x499 = 0U;
volatile uint16_t x500 = 6160U;
uint32_t t110 = 895373U;
static uint64_t t112 = 12244565959LLU;
uint16_t x512 = 2668U;
static int64_t x540 = -1LL;
int8_t x544 = INT8_MIN;
int64_t t122 = 11602295LL;
int8_t x558 = INT8_MIN;
static int32_t x566 = INT32_MIN;
uint64_t x569 = UINT64_MAX;
static volatile int8_t x574 = INT8_MIN;
static int8_t x575 = INT8_MAX;
int64_t x578 = -228LL;
int64_t x593 = INT64_MIN;
volatile int16_t x598 = -833;
static volatile int64_t x604 = INT64_MIN;
uint32_t x613 = 22650235U;
static uint8_t x620 = 29U;
volatile int8_t x623 = 2;
static int16_t x629 = -9428;
uint16_t x633 = 744U;
volatile int8_t x636 = -6;
int8_t x641 = -14;
uint16_t x643 = 2U;
int32_t t141 = 214232;
int16_t x645 = -1310;
uint64_t x665 = 1259056LLU;
static uint64_t x684 = 117710107LLU;
int64_t x697 = INT64_MAX;
int8_t x700 = INT8_MIN;
int32_t t150 = -51934;
int32_t x713 = 0;
static uint16_t x715 = UINT16_MAX;
volatile uint8_t x718 = UINT8_MAX;
int32_t x732 = INT32_MIN;
volatile int32_t t155 = 2662;
uint16_t x733 = 4471U;
volatile uint64_t x742 = 72822LLU;
int32_t x744 = -1;
uint32_t t159 = 7U;
volatile uint16_t x759 = 4915U;
int8_t x760 = -1;
int32_t t160 = 1;
int64_t x772 = 20LL;
volatile int16_t x776 = -210;
int32_t x784 = INT32_MAX;
volatile int8_t x786 = -1;
int32_t x788 = -24260;
volatile int32_t t167 = 373246;
volatile uint64_t x797 = UINT64_MAX;
int32_t x799 = -23139;
uint32_t x800 = 15U;
static uint32_t x801 = 6876U;
static int16_t x809 = -1;
uint32_t x815 = 80097745U;
volatile uint8_t x818 = 20U;
static int32_t t174 = 45;
int64_t x826 = INT64_MAX;
uint32_t x832 = 381925522U;
static uint16_t x839 = 2732U;
int64_t x840 = INT64_MIN;
int16_t x842 = INT16_MAX;
static uint8_t x851 = 58U;
volatile uint64_t t181 = 236360497543839507LLU;
int32_t x856 = 1;
uint16_t x861 = 7U;
int8_t x862 = INT8_MAX;
uint8_t x864 = UINT8_MAX;
static int32_t t184 = 492132273;
int8_t x866 = -18;
volatile int16_t x867 = INT16_MAX;
uint32_t x869 = 158U;
uint32_t x870 = 3U;
uint64_t x873 = 394821634498LLU;
volatile int16_t x875 = -3572;
volatile uint64_t t187 = 15892LLU;
int16_t x885 = -1;
int32_t x893 = 14;
int64_t x894 = 3319653972LL;
int32_t x895 = -1;
int16_t x903 = INT16_MAX;
uint16_t x906 = UINT16_MAX;
int32_t t195 = -13852345;
volatile int16_t x934 = INT16_MIN;
int32_t x937 = INT32_MIN;


void f0(void) {
    	static uint8_t x1 = 10U;
	int32_t x2 = 47;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = 2U;

    t0 = ((x1+x2)%(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = 19597538LL;
	int8_t x7 = -15;
	volatile int64_t t1 = -10395539612LL;

    t1 = ((x5+x6)%(x7!=x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 3U;
	int16_t x10 = INT16_MIN;
	volatile uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = 1;

    t2 = ((x9+x10)%(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = -27726291LL;
	static int16_t x18 = INT16_MIN;
	uint8_t x19 = 92U;
	volatile int64_t t3 = -713581164LL;

    t3 = ((x17+x18)%(x19!=x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = -10946378;
	int8_t x23 = INT8_MIN;
	int32_t t4 = -812;

    t4 = ((x21+x22)%(x23!=x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 1;
	volatile uint16_t x26 = 2U;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = 32439859U;

    t5 = ((x25+x26)%(x27!=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;

    t6 = ((x29+x30)%(x31!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t t7 = 7678694U;

    t7 = ((x33+x34)%(x35!=x36));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -2221311;
	int8_t x38 = 0;
	int16_t x39 = INT16_MAX;
	volatile int32_t t8 = 0;

    t8 = ((x37+x38)%(x39!=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MAX;
	int32_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int8_t x44 = -1;
	volatile int32_t t9 = -310;

    t9 = ((x41+x42)%(x43!=x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -1;
	uint8_t x50 = 25U;
	volatile int8_t x52 = 6;

    t10 = ((x49+x50)%(x51!=x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x56 = UINT16_MAX;
	volatile int32_t t11 = -7;

    t11 = ((x53+x54)%(x55!=x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x57 = -24;
	int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	static int32_t t12 = 396;

    t12 = ((x57+x58)%(x59!=x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = -1LL;
	static int8_t x62 = INT8_MAX;
	static int8_t x63 = -1;
	volatile int8_t x64 = INT8_MIN;

    t13 = ((x61+x62)%(x63!=x64));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x66 = 6U;
	volatile int16_t x67 = INT16_MIN;
	volatile int8_t x68 = 0;

    t14 = ((x65+x66)%(x67!=x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static uint16_t x76 = UINT16_MAX;

    t15 = ((x73+x74)%(x75!=x76));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x77 = -372583149LL;
	uint16_t x78 = 3871U;
	uint32_t x79 = 283U;
	int64_t x80 = 25LL;
	int64_t t16 = -98658LL;

    t16 = ((x77+x78)%(x79!=x80));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MAX;
	volatile int32_t x83 = 105195;
	uint64_t x84 = 40040791850364297LLU;
	int32_t t17 = -20295;

    t17 = ((x81+x82)%(x83!=x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	uint8_t x86 = 31U;
	int32_t x87 = INT32_MIN;
	static int8_t x88 = -1;
	volatile uint64_t t18 = 153288042LLU;

    t18 = ((x85+x86)%(x87!=x88));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 28U;
	uint32_t x94 = UINT32_MAX;
	int32_t x96 = -775;
	uint32_t t19 = 236494U;

    t19 = ((x93+x94)%(x95!=x96));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = -371166687;
	int32_t x98 = 1;
	volatile uint8_t x99 = 3U;
	int64_t x100 = 31233585065LL;
	volatile int32_t t20 = -8644087;

    t20 = ((x97+x98)%(x99!=x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x102 = -8337134976LL;
	static volatile uint64_t x103 = 3LLU;
	int16_t x104 = INT16_MIN;
	int64_t t21 = 618410786LL;

    t21 = ((x101+x102)%(x103!=x104));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = UINT16_MAX;
	uint16_t x106 = UINT16_MAX;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t22 = -2;

    t22 = ((x105+x106)%(x107!=x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = 7;
	int16_t x110 = INT16_MAX;
	static int16_t x111 = -610;
	volatile uint16_t x112 = 74U;

    t23 = ((x109+x110)%(x111!=x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = 7;
	volatile uint64_t x114 = 1917274LLU;
	static uint32_t x115 = 0U;
	uint8_t x116 = 7U;
	volatile uint64_t t24 = 14450439932145467LLU;

    t24 = ((x113+x114)%(x115!=x116));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 143U;
	int16_t x120 = INT16_MIN;
	uint32_t t25 = 54672539U;

    t25 = ((x117+x118)%(x119!=x120));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x125 = UINT16_MAX;
	uint64_t x126 = UINT64_MAX;
	int8_t x127 = 3;
	int32_t x128 = 172;

    t26 = ((x125+x126)%(x127!=x128));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x130 = 27929465U;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	uint32_t t27 = 1840953U;

    t27 = ((x129+x130)%(x131!=x132));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x135 = INT8_MAX;
	volatile int32_t t28 = -4734;

    t28 = ((x133+x134)%(x135!=x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x137 = 7U;
	int8_t x138 = 1;
	int16_t x139 = -1;
	volatile int32_t t29 = 2265;

    t29 = ((x137+x138)%(x139!=x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = -1;
	int64_t x142 = 1258459916792LL;
	static int8_t x143 = INT8_MIN;
	static volatile int64_t x144 = -1474170726203909LL;
	int64_t t30 = -1984251198486772LL;

    t30 = ((x141+x142)%(x143!=x144));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MIN;
	static int32_t x146 = INT32_MAX;
	uint64_t x148 = 77387116838554517LLU;
	int32_t t31 = 3900;

    t31 = ((x145+x146)%(x147!=x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x153 = INT8_MAX;
	static int16_t x155 = INT16_MAX;
	static int16_t x156 = -1;
	static int32_t t32 = -3371512;

    t32 = ((x153+x154)%(x155!=x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = -930547418;
	int32_t x159 = -1;
	int8_t x160 = INT8_MIN;
	volatile int32_t t33 = 31481;

    t33 = ((x157+x158)%(x159!=x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = -24112;
	static int16_t x162 = INT16_MAX;
	int16_t x163 = INT16_MIN;
	static uint32_t x164 = UINT32_MAX;
	int32_t t34 = 1;

    t34 = ((x161+x162)%(x163!=x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = 0U;
	uint8_t x167 = 70U;
	volatile int64_t t35 = 65005570LL;

    t35 = ((x165+x166)%(x167!=x168));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = 48;
	volatile uint8_t x171 = UINT8_MAX;
	int32_t x172 = -174602;
	int64_t t36 = -676852LL;

    t36 = ((x169+x170)%(x171!=x172));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	int32_t x174 = INT32_MIN;
	static uint16_t x175 = 20U;
	static int16_t x176 = 75;
	int32_t t37 = 778163;

    t37 = ((x173+x174)%(x175!=x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x178 = UINT8_MAX;
	static int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t38 = 218198398263281LL;

    t38 = ((x177+x178)%(x179!=x180));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x181 = INT8_MAX;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	static volatile int16_t x184 = INT16_MIN;
	static volatile int64_t t39 = 211411753379962LL;

    t39 = ((x181+x182)%(x183!=x184));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x185 = -94;
	static uint8_t x186 = 122U;
	static uint16_t x187 = 3U;
	static uint16_t x188 = 59U;
	static int32_t t40 = 1082546;

    t40 = ((x185+x186)%(x187!=x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	int32_t x190 = -3;
	uint16_t x191 = 0U;
	volatile int64_t x192 = -295648067LL;
	volatile int32_t t41 = -162610800;

    t41 = ((x189+x190)%(x191!=x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x194 = 18417;
	volatile int32_t x195 = INT32_MIN;
	static uint8_t x196 = 38U;

    t42 = ((x193+x194)%(x195!=x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x197 = 249696LLU;
	uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	volatile uint64_t t43 = 3113252157841329LLU;

    t43 = ((x197+x198)%(x199!=x200));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x205 = 16163;
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	int32_t x208 = -17;
	int32_t t44 = -53;

    t44 = ((x205+x206)%(x207!=x208));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x210 = 874043182LLU;
	volatile int16_t x211 = INT16_MAX;
	static volatile int16_t x212 = -365;

    t45 = ((x209+x210)%(x211!=x212));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x213 = 1U;
	static uint16_t x214 = 2U;
	volatile int16_t x215 = INT16_MIN;
	uint8_t x216 = 24U;
	int32_t t46 = 86;

    t46 = ((x213+x214)%(x215!=x216));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 27360838725650LLU;
	int8_t x218 = -1;
	uint32_t x219 = 18834119U;
	static uint16_t x220 = UINT16_MAX;

    t47 = ((x217+x218)%(x219!=x220));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MAX;
	uint16_t x223 = 3U;
	uint32_t t48 = 50U;

    t48 = ((x221+x222)%(x223!=x224));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x225 = 4;
	int32_t x227 = INT32_MIN;
	volatile uint32_t x228 = 149178U;
	int32_t t49 = 3682;

    t49 = ((x225+x226)%(x227!=x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x229 = 458;
	uint32_t x231 = 45U;
	static uint32_t x232 = UINT32_MAX;
	static volatile int32_t t50 = 1;

    t50 = ((x229+x230)%(x231!=x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = -1;
	static volatile int16_t x235 = INT16_MIN;
	static int64_t x236 = INT64_MAX;
	int32_t t51 = 1;

    t51 = ((x233+x234)%(x235!=x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x241 = UINT16_MAX;
	int32_t x242 = -458;
	int8_t x243 = 11;
	int32_t x244 = INT32_MAX;
	volatile int32_t t52 = -14885597;

    t52 = ((x241+x242)%(x243!=x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	int32_t x247 = -1;
	int64_t x248 = INT64_MIN;
	int32_t t53 = 0;

    t53 = ((x245+x246)%(x247!=x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x249 = UINT64_MAX;
	int16_t x250 = -1;
	int16_t x251 = INT16_MAX;
	int8_t x252 = 0;
	volatile uint64_t t54 = 3LLU;

    t54 = ((x249+x250)%(x251!=x252));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = INT32_MAX;
	uint8_t x254 = 0U;
	int32_t x255 = INT32_MIN;
	int16_t x256 = 14781;
	int32_t t55 = -25657;

    t55 = ((x253+x254)%(x255!=x256));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x257 = 1;
	int16_t x258 = 6756;
	int64_t x259 = INT64_MIN;
	static int16_t x260 = -1;
	int32_t t56 = 445869816;

    t56 = ((x257+x258)%(x259!=x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x261 = 33U;
	static int64_t x262 = -1LL;
	int64_t x263 = -1LL;
	int64_t t57 = -773LL;

    t57 = ((x261+x262)%(x263!=x264));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x265 = INT32_MIN;
	int64_t x267 = -2909737LL;
	static int32_t x268 = 1;
	volatile int32_t t58 = -13404501;

    t58 = ((x265+x266)%(x267!=x268));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x274 = INT16_MAX;
	volatile int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	uint32_t t59 = 13U;

    t59 = ((x273+x274)%(x275!=x276));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x277 = 7U;
	volatile uint8_t x278 = 29U;
	volatile uint16_t x279 = 5272U;
	int32_t t60 = 2144913;

    t60 = ((x277+x278)%(x279!=x280));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x281 = 3;
	static int64_t x282 = 139866400763341LL;
	static int8_t x283 = INT8_MIN;
	static volatile int64_t t61 = 55296754168224029LL;

    t61 = ((x281+x282)%(x283!=x284));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t62 = -164807;

    t62 = ((x285+x286)%(x287!=x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x289 = 52U;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = -4;
	int64_t x292 = INT64_MIN;
	int32_t t63 = -4;

    t63 = ((x289+x290)%(x291!=x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x293 = -3;
	static uint64_t x295 = 1025244LLU;
	uint32_t x296 = 624464U;

    t64 = ((x293+x294)%(x295!=x296));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x297 = -5;
	uint64_t x298 = 360LLU;
	volatile uint8_t x299 = 0U;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint64_t t65 = 6556LLU;

    t65 = ((x297+x298)%(x299!=x300));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = -3;
	int16_t x302 = -1201;
	uint64_t x304 = UINT64_MAX;

    t66 = ((x301+x302)%(x303!=x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = -1LL;
	volatile int32_t x306 = INT32_MAX;
	volatile int64_t x308 = -43691430513LL;

    t67 = ((x305+x306)%(x307!=x308));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x309 = 143597361LLU;
	uint32_t x310 = 14116821U;
	uint8_t x312 = UINT8_MAX;
	volatile uint64_t t68 = 328LLU;

    t68 = ((x309+x310)%(x311!=x312));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MIN;
	uint16_t x318 = 0U;
	int8_t x320 = INT8_MIN;

    t69 = ((x317+x318)%(x319!=x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = 41640211492059051LLU;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 13735085LL;
	volatile uint64_t t70 = 2746310716149342LLU;

    t70 = ((x321+x322)%(x323!=x324));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x326 = 2LL;
	int32_t x327 = INT32_MIN;
	static int8_t x328 = 0;

    t71 = ((x325+x326)%(x327!=x328));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x330 = INT32_MIN;
	uint32_t x331 = 14U;
	volatile int16_t x332 = INT16_MIN;

    t72 = ((x329+x330)%(x331!=x332));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x333 = -46;
	uint64_t x334 = 220985521394741LLU;
	uint16_t x335 = 33U;
	int8_t x336 = -1;
	uint64_t t73 = 7089037215143LLU;

    t73 = ((x333+x334)%(x335!=x336));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x337 = INT8_MAX;
	int64_t x338 = -1LL;
	static int8_t x339 = 1;
	int64_t t74 = 604839226LL;

    t74 = ((x337+x338)%(x339!=x340));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = INT64_MAX;
	int32_t x342 = INT32_MIN;
	uint64_t x343 = 20683945505LLU;
	int64_t x344 = -189602LL;
	int64_t t75 = -2615985615LL;

    t75 = ((x341+x342)%(x343!=x344));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = 409;
	int64_t x350 = INT64_MIN;
	int64_t x351 = 3173110LL;

    t76 = ((x349+x350)%(x351!=x352));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MAX;
	static int8_t x356 = 1;

    t77 = ((x353+x354)%(x355!=x356));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x361 = -5;
	int16_t x362 = -3;
	uint8_t x363 = 4U;
	static volatile uint8_t x364 = UINT8_MAX;
	int32_t t78 = 28;

    t78 = ((x361+x362)%(x363!=x364));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x365 = 16;
	int64_t x366 = INT64_MIN;
	static int16_t x367 = -1;
	int32_t x368 = -55;
	volatile int64_t t79 = -249LL;

    t79 = ((x365+x366)%(x367!=x368));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x369 = -57;
	int8_t x370 = -18;
	static int64_t x371 = -4146965813033LL;
	volatile int16_t x372 = -22;
	volatile int32_t t80 = 174993570;

    t80 = ((x369+x370)%(x371!=x372));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x374 = -1;
	int8_t x375 = INT8_MIN;
	volatile uint64_t x376 = 50LLU;
	int32_t t81 = -8;

    t81 = ((x373+x374)%(x375!=x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 205U;
	int8_t x384 = -1;
	static int32_t t82 = 7;

    t82 = ((x381+x382)%(x383!=x384));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = 134341LL;
	uint64_t x386 = 562LLU;
	uint64_t x387 = 1313379884395LLU;
	uint32_t x388 = 60198U;
	uint64_t t83 = 16LLU;

    t83 = ((x385+x386)%(x387!=x388));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x389 = INT32_MIN;
	uint16_t x390 = 5243U;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MAX;
	int32_t t84 = -450488;

    t84 = ((x389+x390)%(x391!=x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MAX;
	int8_t x395 = 7;
	static int32_t x396 = -1;
	volatile int32_t t85 = -1860512;

    t85 = ((x393+x394)%(x395!=x396));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MAX;
	volatile int32_t t86 = -1194413;

    t86 = ((x397+x398)%(x399!=x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = 0;
	int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	volatile int32_t t87 = 352;

    t87 = ((x401+x402)%(x403!=x404));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x405 = UINT32_MAX;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = INT32_MIN;
	volatile uint32_t t88 = 13U;

    t88 = ((x405+x406)%(x407!=x408));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x409 = 11U;
	volatile uint64_t x411 = 1597649751352807LLU;
	volatile int64_t x412 = 20647983921LL;
	int32_t t89 = -6037521;

    t89 = ((x409+x410)%(x411!=x412));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MIN;
	int32_t t90 = -241;

    t90 = ((x413+x414)%(x415!=x416));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x420 = 4;
	int64_t t91 = 23697442LL;

    t91 = ((x417+x418)%(x419!=x420));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x421 = UINT16_MAX;
	int8_t x423 = INT8_MAX;
	uint16_t x424 = UINT16_MAX;
	volatile uint32_t t92 = 11U;

    t92 = ((x421+x422)%(x423!=x424));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x425 = 388U;
	volatile int8_t x426 = INT8_MIN;
	static int32_t x427 = 536064018;
	int16_t x428 = 4405;
	uint32_t t93 = 110285103U;

    t93 = ((x425+x426)%(x427!=x428));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x429 = -2;
	int16_t x431 = INT16_MAX;

    t94 = ((x429+x430)%(x431!=x432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x433 = INT16_MAX;
	static uint64_t x435 = UINT64_MAX;
	static int32_t t95 = -8;

    t95 = ((x433+x434)%(x435!=x436));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x437 = 0U;
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	uint32_t t96 = 953667662U;

    t96 = ((x437+x438)%(x439!=x440));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x441 = 848LLU;
	uint64_t x442 = 8163433817LLU;
	uint8_t x444 = 11U;
	static volatile uint64_t t97 = 454060015827395LLU;

    t97 = ((x441+x442)%(x443!=x444));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MIN;
	uint64_t t98 = 31391851LLU;

    t98 = ((x445+x446)%(x447!=x448));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x449 = 14;
	uint32_t x450 = UINT32_MAX;
	static int8_t x451 = -1;
	int8_t x452 = 22;
	uint32_t t99 = 232U;

    t99 = ((x449+x450)%(x451!=x452));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x453 = 294898460198741LL;
	static int16_t x454 = -1;
	static int64_t x456 = INT64_MAX;

    t100 = ((x453+x454)%(x455!=x456));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x457 = INT8_MIN;
	uint16_t x458 = UINT16_MAX;
	int8_t x459 = 0;
	int8_t x460 = 6;

    t101 = ((x457+x458)%(x459!=x460));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x461 = INT8_MIN;
	static int64_t x462 = -26LL;
	uint16_t x464 = 313U;

    t102 = ((x461+x462)%(x463!=x464));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x465 = -4;
	int64_t x466 = -633804850101193LL;
	static int8_t x467 = INT8_MIN;
	int64_t t103 = 75LL;

    t103 = ((x465+x466)%(x467!=x468));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = INT64_MIN;
	volatile uint32_t x470 = 53U;
	int8_t x472 = INT8_MIN;

    t104 = ((x469+x470)%(x471!=x472));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x477 = 22;
	int16_t x479 = INT16_MIN;
	volatile uint32_t x480 = 2U;

    t105 = ((x477+x478)%(x479!=x480));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x481 = INT16_MIN;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 44U;
	volatile int32_t t106 = 985727880;

    t106 = ((x481+x482)%(x483!=x484));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	uint16_t x488 = UINT16_MAX;
	int64_t t107 = -2349219720LL;

    t107 = ((x485+x486)%(x487!=x488));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x490 = 48U;
	volatile int32_t x491 = INT32_MIN;
	uint32_t x492 = 1547809854U;

    t108 = ((x489+x490)%(x491!=x492));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x494 = 17U;
	uint64_t x496 = 964LLU;
	static volatile uint64_t t109 = 85041740267358LLU;

    t109 = ((x493+x494)%(x495!=x496));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x497 = 4U;
	int32_t x498 = -4744;

    t110 = ((x497+x498)%(x499!=x500));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x501 = INT8_MIN;
	uint32_t x502 = 15U;
	int64_t x503 = 452566953LL;
	uint64_t x504 = UINT64_MAX;
	volatile uint32_t t111 = 64224U;

    t111 = ((x501+x502)%(x503!=x504));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x505 = INT32_MIN;
	static uint64_t x506 = UINT64_MAX;
	uint16_t x507 = UINT16_MAX;
	volatile uint32_t x508 = UINT32_MAX;

    t112 = ((x505+x506)%(x507!=x508));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 505881063993122259LLU;
	uint32_t x511 = 1U;
	volatile uint64_t t113 = 8053571649LLU;

    t113 = ((x509+x510)%(x511!=x512));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x513 = INT64_MIN;
	uint16_t x514 = 219U;
	int8_t x515 = INT8_MAX;
	int64_t x516 = 57254866319LL;
	int64_t t114 = 17060980877069LL;

    t114 = ((x513+x514)%(x515!=x516));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x517 = 1;
	int32_t x518 = INT32_MIN;
	static volatile int64_t x519 = -7475941764021LL;
	uint8_t x520 = 18U;
	volatile int32_t t115 = 60;

    t115 = ((x517+x518)%(x519!=x520));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = INT16_MIN;
	uint8_t x522 = 38U;
	int16_t x523 = -463;
	uint64_t x524 = 55147LLU;
	volatile int32_t t116 = 44806588;

    t116 = ((x521+x522)%(x523!=x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x525 = 13964572871798438LL;
	int8_t x526 = INT8_MIN;
	uint8_t x527 = 2U;
	int8_t x528 = -1;
	volatile int64_t t117 = 1277916585743412497LL;

    t117 = ((x525+x526)%(x527!=x528));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x533 = INT16_MAX;
	uint32_t x534 = 3042945U;
	int16_t x535 = INT16_MAX;
	int16_t x536 = 559;
	volatile uint32_t t118 = 38U;

    t118 = ((x533+x534)%(x535!=x536));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x537 = 103U;
	uint64_t x538 = 96774959243LLU;
	volatile int16_t x539 = -5803;
	volatile uint64_t t119 = 169464286366389LLU;

    t119 = ((x537+x538)%(x539!=x540));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x541 = -1;
	uint32_t x542 = UINT32_MAX;
	int64_t x543 = INT64_MAX;
	uint32_t t120 = 43682U;

    t120 = ((x541+x542)%(x543!=x544));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = -1LL;
	int64_t x546 = -1LL;
	int32_t x547 = 63375;
	static int8_t x548 = INT8_MAX;
	int64_t t121 = 1070956579085LL;

    t121 = ((x545+x546)%(x547!=x548));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x549 = INT16_MAX;
	int64_t x550 = -421LL;
	static int32_t x551 = -1;
	int64_t x552 = -234399LL;

    t122 = ((x549+x550)%(x551!=x552));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = INT8_MIN;
	static volatile uint8_t x554 = 1U;
	uint16_t x555 = UINT16_MAX;
	int64_t x556 = INT64_MIN;
	static volatile int32_t t123 = -77;

    t123 = ((x553+x554)%(x555!=x556));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x557 = 11U;
	volatile int64_t x559 = INT64_MIN;
	int16_t x560 = -1;
	volatile int32_t t124 = 0;

    t124 = ((x557+x558)%(x559!=x560));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = 2969U;
	uint8_t x567 = UINT8_MAX;
	static int8_t x568 = 0;
	static int32_t t125 = 1;

    t125 = ((x565+x566)%(x567!=x568));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;
	volatile uint64_t t126 = 45505553731796LLU;

    t126 = ((x569+x570)%(x571!=x572));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x573 = -1;
	int16_t x576 = -1;
	volatile int32_t t127 = -12411;

    t127 = ((x573+x574)%(x575!=x576));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x577 = UINT8_MAX;
	int64_t x579 = 6546721093LL;
	volatile int64_t x580 = INT64_MIN;
	volatile int64_t t128 = 1281148LL;

    t128 = ((x577+x578)%(x579!=x580));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x581 = 38U;
	uint16_t x582 = 5U;
	uint8_t x583 = 28U;
	static volatile uint32_t x584 = UINT32_MAX;
	volatile uint32_t t129 = 458832U;

    t129 = ((x581+x582)%(x583!=x584));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = -1LL;
	int16_t x586 = -11078;
	int32_t x587 = INT32_MIN;
	int8_t x588 = -1;
	static volatile int64_t t130 = 31018096341281LL;

    t130 = ((x585+x586)%(x587!=x588));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x594 = INT32_MAX;
	volatile uint64_t x595 = 43752861621047536LLU;
	uint8_t x596 = 4U;
	static int64_t t131 = 2090587LL;

    t131 = ((x593+x594)%(x595!=x596));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x597 = INT8_MAX;
	volatile uint8_t x599 = 5U;
	volatile int64_t x600 = -1975567025385LL;
	volatile int32_t t132 = 10;

    t132 = ((x597+x598)%(x599!=x600));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x601 = 712723128879742761LLU;
	int32_t x602 = -3298875;
	uint32_t x603 = 2U;
	static volatile uint64_t t133 = 29200LLU;

    t133 = ((x601+x602)%(x603!=x604));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x605 = -1;
	uint32_t x606 = UINT32_MAX;
	volatile uint16_t x607 = 30756U;
	int16_t x608 = INT16_MIN;
	volatile uint32_t t134 = 279U;

    t134 = ((x605+x606)%(x607!=x608));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x609 = 2U;
	int16_t x610 = INT16_MIN;
	uint8_t x611 = UINT8_MAX;
	volatile uint16_t x612 = UINT16_MAX;
	volatile int32_t t135 = -260;

    t135 = ((x609+x610)%(x611!=x612));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MIN;
	volatile int32_t x616 = -39;
	volatile uint32_t t136 = 33395751U;

    t136 = ((x613+x614)%(x615!=x616));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x617 = 60666419002474LLU;
	static uint32_t x618 = 10U;
	int32_t x619 = 0;
	volatile uint64_t t137 = 1412983706983LLU;

    t137 = ((x617+x618)%(x619!=x620));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x621 = UINT8_MAX;
	uint8_t x622 = 14U;
	int16_t x624 = INT16_MIN;
	int32_t t138 = -4;

    t138 = ((x621+x622)%(x623!=x624));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x630 = INT16_MIN;
	int8_t x631 = INT8_MIN;
	int64_t x632 = -1LL;
	int32_t t139 = 2488;

    t139 = ((x629+x630)%(x631!=x632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x634 = 6362U;
	int64_t x635 = INT64_MIN;
	volatile int32_t t140 = 100564349;

    t140 = ((x633+x634)%(x635!=x636));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x642 = -1;
	uint32_t x644 = 46375U;

    t141 = ((x641+x642)%(x643!=x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x646 = INT8_MAX;
	volatile uint32_t x647 = UINT32_MAX;
	volatile int8_t x648 = 15;
	volatile int32_t t142 = 6;

    t142 = ((x645+x646)%(x647!=x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x649 = -5;
	uint8_t x650 = UINT8_MAX;
	int64_t x651 = -1LL;
	static int64_t x652 = 612707251360LL;
	int32_t t143 = -19346;

    t143 = ((x649+x650)%(x651!=x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = -1;
	static int8_t x658 = INT8_MAX;
	int64_t x659 = -1LL;
	volatile uint8_t x660 = 4U;
	volatile int32_t t144 = 15;

    t144 = ((x657+x658)%(x659!=x660));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x661 = 12032U;
	int64_t x662 = 1200641327892369028LL;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = 7U;
	int64_t t145 = -823731840246089LL;

    t145 = ((x661+x662)%(x663!=x664));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x666 = INT32_MIN;
	int64_t x667 = INT64_MIN;
	int16_t x668 = INT16_MAX;
	volatile uint64_t t146 = 226LLU;

    t146 = ((x665+x666)%(x667!=x668));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x681 = 1839754U;
	int32_t x682 = -1;
	volatile uint64_t x683 = 33689LLU;
	volatile uint32_t t147 = 1U;

    t147 = ((x681+x682)%(x683!=x684));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x685 = 809192LLU;
	static uint8_t x686 = 92U;
	static uint32_t x687 = 10785U;
	uint16_t x688 = UINT16_MAX;
	volatile uint64_t t148 = 14684LLU;

    t148 = ((x685+x686)%(x687!=x688));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x698 = INT16_MIN;
	int16_t x699 = 5;
	volatile int64_t t149 = 197871540045080918LL;

    t149 = ((x697+x698)%(x699!=x700));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x709 = UINT8_MAX;
	volatile int8_t x710 = -1;
	static int8_t x711 = INT8_MIN;
	int8_t x712 = -1;

    t150 = ((x709+x710)%(x711!=x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x714 = INT16_MIN;
	volatile uint32_t x716 = 2151967U;
	int32_t t151 = -239470289;

    t151 = ((x713+x714)%(x715!=x716));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x717 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	volatile int32_t x720 = INT32_MIN;
	int32_t t152 = -240;

    t152 = ((x717+x718)%(x719!=x720));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x721 = UINT64_MAX;
	uint16_t x722 = 1U;
	int64_t x723 = -238172LL;
	static int16_t x724 = INT16_MIN;
	uint64_t t153 = 178694605172226LLU;

    t153 = ((x721+x722)%(x723!=x724));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x725 = UINT8_MAX;
	static uint16_t x726 = 936U;
	static uint16_t x727 = UINT16_MAX;
	int64_t x728 = INT64_MIN;
	int32_t t154 = 109325;

    t154 = ((x725+x726)%(x727!=x728));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x729 = INT16_MIN;
	uint8_t x730 = 84U;
	int32_t x731 = -1;

    t155 = ((x729+x730)%(x731!=x732));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x734 = INT8_MIN;
	int32_t x735 = INT32_MIN;
	uint64_t x736 = UINT64_MAX;
	static volatile int32_t t156 = -15;

    t156 = ((x733+x734)%(x735!=x736));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x741 = -247LL;
	int32_t x743 = INT32_MIN;
	volatile uint64_t t157 = 50559LLU;

    t157 = ((x741+x742)%(x743!=x744));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x745 = 21;
	int32_t x746 = INT32_MIN;
	int64_t x747 = INT64_MIN;
	int32_t x748 = INT32_MIN;
	int32_t t158 = -58637081;

    t158 = ((x745+x746)%(x747!=x748));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x749 = 224U;
	int8_t x750 = INT8_MIN;
	static volatile int32_t x751 = -1895;
	uint64_t x752 = 15790LLU;

    t159 = ((x749+x750)%(x751!=x752));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x757 = UINT8_MAX;
	int32_t x758 = 843767741;

    t160 = ((x757+x758)%(x759!=x760));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x761 = UINT16_MAX;
	static uint32_t x762 = 736U;
	static volatile int64_t x763 = -1LL;
	uint32_t x764 = 1765787758U;
	volatile uint32_t t161 = 2029701U;

    t161 = ((x761+x762)%(x763!=x764));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int16_t x765 = INT16_MIN;
	volatile uint8_t x766 = 0U;
	uint16_t x767 = 8732U;
	int64_t x768 = INT64_MIN;
	int32_t t162 = -82609840;

    t162 = ((x765+x766)%(x767!=x768));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x769 = UINT8_MAX;
	uint8_t x770 = 15U;
	volatile uint32_t x771 = 6U;
	int32_t t163 = -55293389;

    t163 = ((x769+x770)%(x771!=x772));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x773 = 119U;
	int16_t x774 = -1;
	int8_t x775 = INT8_MIN;
	volatile int32_t t164 = -1277423;

    t164 = ((x773+x774)%(x775!=x776));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x777 = UINT32_MAX;
	int16_t x778 = 1;
	static uint64_t x779 = 1897829LLU;
	uint16_t x780 = UINT16_MAX;
	uint32_t t165 = 263U;

    t165 = ((x777+x778)%(x779!=x780));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x781 = INT16_MIN;
	static int16_t x782 = INT16_MIN;
	int16_t x783 = INT16_MIN;
	volatile int32_t t166 = 370230786;

    t166 = ((x781+x782)%(x783!=x784));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x785 = -1;
	volatile uint64_t x787 = 12362522691586010LLU;

    t167 = ((x785+x786)%(x787!=x788));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x789 = -1;
	uint8_t x790 = 42U;
	static volatile int32_t x791 = -1;
	int8_t x792 = INT8_MIN;
	static volatile int32_t t168 = -131938;

    t168 = ((x789+x790)%(x791!=x792));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x793 = UINT32_MAX;
	static uint64_t x794 = 1292270589LLU;
	int64_t x795 = INT64_MIN;
	uint32_t x796 = UINT32_MAX;
	static uint64_t t169 = 10765842LLU;

    t169 = ((x793+x794)%(x795!=x796));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x798 = -842367LL;
	volatile uint64_t t170 = 5396548651LLU;

    t170 = ((x797+x798)%(x799!=x800));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x802 = -1;
	static int16_t x803 = INT16_MAX;
	uint8_t x804 = 9U;
	uint32_t t171 = 24526525U;

    t171 = ((x801+x802)%(x803!=x804));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x810 = UINT64_MAX;
	static int32_t x811 = INT32_MIN;
	volatile uint8_t x812 = 15U;
	static uint64_t t172 = 1391276952949202LLU;

    t172 = ((x809+x810)%(x811!=x812));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x813 = 88;
	uint16_t x814 = 826U;
	int64_t x816 = -53790480756037899LL;
	volatile int32_t t173 = 15018;

    t173 = ((x813+x814)%(x815!=x816));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x817 = INT8_MIN;
	volatile int32_t x819 = INT32_MIN;
	uint8_t x820 = UINT8_MAX;

    t174 = ((x817+x818)%(x819!=x820));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x825 = INT32_MIN;
	int64_t x827 = INT64_MAX;
	volatile int16_t x828 = INT16_MIN;
	static volatile int64_t t175 = 7LL;

    t175 = ((x825+x826)%(x827!=x828));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x829 = 0;
	uint64_t x830 = 45744LLU;
	static int16_t x831 = INT16_MIN;
	volatile uint64_t t176 = 93LLU;

    t176 = ((x829+x830)%(x831!=x832));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x833 = 101U;
	volatile int64_t x834 = -1LL;
	int64_t x835 = 1738243LL;
	uint8_t x836 = UINT8_MAX;
	volatile int64_t t177 = 922141591129361LL;

    t177 = ((x833+x834)%(x835!=x836));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x837 = INT32_MIN;
	uint64_t x838 = UINT64_MAX;
	static volatile uint64_t t178 = 8062LLU;

    t178 = ((x837+x838)%(x839!=x840));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x841 = -2;
	uint32_t x843 = UINT32_MAX;
	volatile int8_t x844 = -28;
	static int32_t t179 = 923;

    t179 = ((x841+x842)%(x843!=x844));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x845 = INT64_MAX;
	int16_t x846 = -942;
	int64_t x847 = INT64_MIN;
	volatile uint64_t x848 = UINT64_MAX;
	volatile int64_t t180 = -2551089868146LL;

    t180 = ((x845+x846)%(x847!=x848));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x849 = UINT64_MAX;
	int16_t x850 = INT16_MAX;
	int8_t x852 = -23;

    t181 = ((x849+x850)%(x851!=x852));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x853 = INT64_MAX;
	uint64_t x854 = 6078LLU;
	uint16_t x855 = 562U;
	volatile uint64_t t182 = 5256364838849LLU;

    t182 = ((x853+x854)%(x855!=x856));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x857 = -264896;
	int16_t x858 = INT16_MIN;
	volatile int32_t x859 = INT32_MIN;
	uint16_t x860 = UINT16_MAX;
	int32_t t183 = -158454;

    t183 = ((x857+x858)%(x859!=x860));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x863 = -1;

    t184 = ((x861+x862)%(x863!=x864));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x865 = 20578702LLU;
	int64_t x868 = INT64_MIN;
	uint64_t t185 = 103749LLU;

    t185 = ((x865+x866)%(x867!=x868));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x871 = INT64_MIN;
	int16_t x872 = -1;
	uint32_t t186 = 4860889U;

    t186 = ((x869+x870)%(x871!=x872));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x874 = INT64_MIN;
	uint8_t x876 = 10U;

    t187 = ((x873+x874)%(x875!=x876));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x886 = -1;
	static int32_t x887 = -819837623;
	int32_t x888 = -1;
	static volatile int32_t t188 = 173;

    t188 = ((x885+x886)%(x887!=x888));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x889 = 5065;
	static int16_t x890 = -185;
	uint16_t x891 = 589U;
	static int32_t x892 = 1464;
	volatile int32_t t189 = -9145618;

    t189 = ((x889+x890)%(x891!=x892));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x896 = INT16_MIN;
	int64_t t190 = -3854LL;

    t190 = ((x893+x894)%(x895!=x896));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x897 = INT8_MIN;
	int8_t x898 = -1;
	static int64_t x899 = INT64_MAX;
	int8_t x900 = INT8_MIN;
	volatile int32_t t191 = 15;

    t191 = ((x897+x898)%(x899!=x900));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x901 = INT64_MIN;
	uint8_t x902 = UINT8_MAX;
	static volatile int64_t x904 = INT64_MIN;
	int64_t t192 = -39933670125110159LL;

    t192 = ((x901+x902)%(x903!=x904));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x905 = 2;
	int8_t x907 = -8;
	int16_t x908 = INT16_MAX;
	int32_t t193 = -1;

    t193 = ((x905+x906)%(x907!=x908));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x913 = -1;
	volatile int64_t x914 = INT64_MAX;
	int32_t x915 = INT32_MIN;
	int64_t x916 = -124LL;
	int64_t t194 = -1267528674LL;

    t194 = ((x913+x914)%(x915!=x916));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x917 = -1;
	static volatile int16_t x918 = INT16_MIN;
	int16_t x919 = 8113;
	int64_t x920 = INT64_MAX;

    t195 = ((x917+x918)%(x919!=x920));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x925 = -1;
	int8_t x926 = -1;
	static uint64_t x927 = 56LLU;
	volatile int8_t x928 = INT8_MAX;
	int32_t t196 = 35675305;

    t196 = ((x925+x926)%(x927!=x928));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x933 = INT8_MIN;
	uint32_t x935 = UINT32_MAX;
	volatile int32_t x936 = INT32_MIN;
	int32_t t197 = 3273978;

    t197 = ((x933+x934)%(x935!=x936));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x938 = 20U;
	uint8_t x939 = 0U;
	static int16_t x940 = -4;
	int32_t t198 = -1918439;

    t198 = ((x937+x938)%(x939!=x940));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x941 = INT8_MIN;
	uint32_t x942 = 1051213632U;
	uint64_t x943 = 460791LLU;
	static uint32_t x944 = 77U;
	static volatile uint32_t t199 = 368496U;

    t199 = ((x941+x942)%(x943!=x944));

    if (t199 != 0U) { NG(); } else { ; }
	
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

