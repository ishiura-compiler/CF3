
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

int8_t x5 = INT8_MAX;
int64_t x6 = INT64_MIN;
static int16_t x10 = -15;
static int32_t t4 = -1;
uint32_t x22 = UINT32_MAX;
int8_t x25 = INT8_MIN;
static uint64_t t8 = 3861LLU;
int32_t x43 = INT32_MIN;
int16_t x51 = 15133;
int8_t x52 = -5;
volatile int32_t x55 = INT32_MIN;
int64_t x63 = INT64_MIN;
uint32_t t15 = 240961U;
uint16_t x77 = 7448U;
int32_t x79 = 1453043;
int32_t x90 = -2;
int32_t t20 = 10507825;
int64_t x104 = INT64_MAX;
int64_t x111 = INT64_MIN;
int32_t t24 = -13509778;
int64_t x113 = INT64_MAX;
volatile uint32_t x115 = 5004U;
static volatile uint32_t x116 = 3U;
int8_t x124 = INT8_MAX;
int64_t x128 = -72671013212432971LL;
int8_t x135 = INT8_MAX;
volatile int32_t t30 = 79267084;
uint32_t t33 = 164U;
volatile int32_t t35 = -393914;
int32_t x173 = INT32_MIN;
static uint32_t t38 = 339U;
static int32_t t39 = 789960902;
int32_t x183 = INT32_MIN;
int32_t x185 = 200;
static int32_t x187 = -186885;
uint32_t t41 = 1419933U;
int64_t x193 = -1087952126700LL;
uint32_t x198 = 1U;
int32_t x216 = -1;
int32_t t49 = 112952;
volatile uint64_t x223 = 4623LLU;
uint64_t x226 = UINT64_MAX;
volatile int32_t x227 = -1;
volatile uint64_t t51 = 517336331474LLU;
uint64_t x229 = UINT64_MAX;
volatile int64_t t55 = -10306426739LL;
uint8_t x245 = UINT8_MAX;
int16_t x247 = -1;
int64_t x249 = INT64_MAX;
volatile uint32_t x256 = 11137933U;
volatile uint32_t t58 = 28649U;
int64_t x257 = -1462167851LL;
volatile uint16_t x261 = UINT16_MAX;
static volatile int32_t t60 = 860;
volatile int32_t t61 = 8;
int8_t x274 = INT8_MAX;
int64_t x277 = INT64_MAX;
int16_t x279 = INT16_MIN;
volatile uint32_t x280 = 48U;
volatile uint8_t x281 = UINT8_MAX;
volatile int8_t x294 = INT8_MAX;
int32_t x296 = 50;
volatile int32_t t67 = -12097382;
volatile int16_t x298 = INT16_MAX;
volatile int32_t x300 = INT32_MIN;
uint32_t t68 = 5723090U;
int8_t x302 = INT8_MAX;
static int32_t t70 = -532129185;
volatile int16_t x309 = INT16_MAX;
uint16_t x311 = 227U;
int64_t x312 = 16696218628068LL;
uint32_t x317 = UINT32_MAX;
uint64_t x322 = 4795750496LLU;
static int8_t x330 = -6;
volatile int8_t x332 = INT8_MIN;
int32_t t75 = -218;
uint64_t x333 = 28204LLU;
int8_t x341 = -1;
uint32_t x342 = UINT32_MAX;
uint32_t t78 = 13U;
int64_t x347 = INT64_MAX;
static volatile int16_t x348 = -1;
int32_t x353 = INT32_MAX;
int64_t t83 = -5372131647LL;
volatile int32_t t84 = -3290468;
int8_t x378 = 50;
uint8_t x390 = UINT8_MAX;
int16_t x394 = -4;
uint16_t x397 = 1U;
static volatile int32_t t91 = 12;
int8_t x409 = -1;
int8_t x424 = -1;
uint64_t t96 = 551377215216179696LLU;
volatile int64_t x433 = INT64_MIN;
int64_t x438 = INT64_MIN;
int8_t x439 = INT8_MIN;
int16_t x440 = -505;
volatile int64_t t99 = 5404507787376451LL;
volatile int64_t x441 = -1LL;
uint32_t x448 = 3447U;
static int64_t x455 = 451LL;
int16_t x458 = 182;
int8_t x463 = INT8_MIN;
int32_t t104 = -146175972;
uint32_t x468 = 14356U;
uint16_t x470 = 32701U;
volatile uint32_t x480 = UINT32_MAX;
int16_t x481 = INT16_MIN;
int64_t x483 = INT64_MIN;
int8_t x484 = -1;
int64_t x487 = 148LL;
int8_t x490 = -1;
uint64_t x493 = 295036240893756LLU;
static volatile int32_t x495 = 1101954;
volatile uint64_t t111 = 1914732985LLU;
uint16_t x500 = 7319U;
int32_t x504 = INT32_MIN;
uint32_t x510 = 142055U;
int64_t x516 = INT64_MIN;
volatile uint32_t x525 = UINT32_MAX;
int8_t x528 = -3;
int32_t x530 = INT32_MIN;
uint8_t x540 = 0U;
uint64_t x541 = UINT64_MAX;
uint16_t x545 = 28253U;
int64_t x553 = INT64_MAX;
int64_t t125 = 1229388296409513LL;
int16_t x559 = 6965;
int64_t x560 = 20784081LL;
int8_t x561 = INT8_MIN;
int64_t x564 = 646187148701658LL;
uint16_t x566 = UINT16_MAX;
static volatile int64_t t128 = 35096LL;
uint16_t x571 = 1U;
uint32_t x578 = UINT32_MAX;
uint16_t x580 = UINT16_MAX;
static int16_t x582 = -62;
volatile int64_t t131 = 3LL;
int8_t x590 = INT8_MIN;
volatile int8_t x599 = INT8_MIN;
int64_t x600 = -1LL;
int32_t t135 = -154;
uint16_t x607 = 2U;
volatile uint32_t t137 = 497U;
int32_t x609 = -23;
static uint8_t x611 = UINT8_MAX;
volatile uint8_t x615 = 1U;
volatile uint16_t x620 = UINT16_MAX;
int64_t x624 = -1LL;
uint64_t x629 = 1337412435LLU;
int32_t t145 = -1638584;
uint64_t x655 = 17242482548693LLU;
static int8_t x680 = 1;
static int32_t x682 = INT32_MIN;
uint64_t x687 = 15019299106383138LLU;
uint64_t x695 = 1103206122301082414LLU;
volatile int16_t x702 = -65;
volatile uint64_t x705 = 9888LLU;
volatile int8_t x712 = INT8_MIN;
volatile int32_t t161 = 50242;
int16_t x716 = -1;
static int32_t t163 = 179262;
int64_t x721 = -1LL;
uint32_t x722 = UINT32_MAX;
volatile int64_t x725 = 11256860317LL;
uint32_t x728 = 17U;
static int64_t t165 = 3646925927203660906LL;
static uint32_t x737 = 395580U;
static uint16_t x738 = 2748U;
volatile int8_t x744 = -13;
volatile int8_t x749 = INT8_MIN;
int8_t x752 = 36;
volatile int32_t t171 = 330589;
int32_t t172 = 247950228;
volatile uint32_t x761 = 5526U;
int16_t x763 = INT16_MAX;
static uint32_t x765 = UINT32_MAX;
static volatile int32_t x771 = 42138431;
volatile uint32_t t176 = 0U;
volatile int8_t x775 = -57;
int8_t x778 = -1;
static int8_t x781 = INT8_MAX;
uint32_t x783 = 60633U;
static uint16_t x784 = UINT16_MAX;
int16_t x791 = INT16_MIN;
volatile int64_t x794 = INT64_MAX;
uint16_t x798 = 2096U;
static volatile int64_t x800 = INT64_MIN;
int64_t x801 = -1LL;
int64_t t185 = 20317LL;
static int16_t x819 = INT16_MAX;
static uint64_t x820 = 284801LLU;
int64_t x821 = 2169LL;
uint8_t x823 = UINT8_MAX;
volatile uint16_t x828 = UINT16_MAX;
uint32_t t191 = 1840U;
static int16_t x839 = INT16_MIN;
int64_t x841 = -152690138LL;
int64_t x843 = INT64_MIN;
int16_t x850 = 107;
int16_t x856 = -1;
uint64_t x857 = 15516256LLU;
int32_t x860 = INT32_MIN;
int8_t x861 = INT8_MAX;


void f0(void) {
    	int8_t x1 = -1;
	int64_t x2 = INT64_MIN;
	volatile int32_t x3 = -13722;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = -28453972LL;

    t0 = ((x1|x2)%(x3!=x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x7 = INT32_MIN;
	int8_t x8 = 0;
	int64_t t1 = -51043274373LL;

    t1 = ((x5|x6)%(x7!=x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 20U;
	int64_t x11 = INT64_MAX;
	volatile int32_t x12 = 97115908;
	volatile int32_t t2 = -27476722;

    t2 = ((x9|x10)%(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	static volatile int16_t x14 = INT16_MAX;
	uint16_t x15 = 9303U;
	int32_t x16 = INT32_MAX;
	int64_t t3 = 4751411LL;

    t3 = ((x13|x14)%(x15!=x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -233196;
	uint8_t x18 = 59U;
	int64_t x19 = -1LL;
	int8_t x20 = -29;

    t4 = ((x17|x18)%(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 16310LLU;
	static volatile int8_t x23 = 1;
	uint8_t x24 = 9U;
	uint64_t t5 = 6090961996LLU;

    t5 = ((x21|x22)%(x23!=x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	int32_t x27 = -14;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 13620616;

    t6 = ((x25|x26)%(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 470U;
	static int64_t x30 = INT64_MAX;
	volatile int32_t x31 = INT32_MIN;
	volatile int16_t x32 = INT16_MAX;
	static volatile int64_t t7 = 12923868344592LL;

    t7 = ((x29|x30)%(x31!=x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 7237467939LLU;
	uint32_t x34 = 1853823U;
	volatile int8_t x35 = INT8_MIN;
	static int8_t x36 = INT8_MAX;

    t8 = ((x33|x34)%(x35!=x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 1123283894050LL;
	volatile uint16_t x38 = UINT16_MAX;
	int64_t x39 = -1LL;
	int64_t x40 = INT64_MIN;
	int64_t t9 = -71833612030097563LL;

    t9 = ((x37|x38)%(x39!=x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 6;
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x44 = INT8_MIN;
	static volatile uint64_t t10 = 34628227LLU;

    t10 = ((x41|x42)%(x43!=x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	static int64_t x46 = -1174770986LL;
	static uint16_t x47 = 939U;
	int16_t x48 = 1;
	volatile int64_t t11 = -744346495LL;

    t11 = ((x45|x46)%(x47!=x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int64_t x50 = -1LL;
	volatile int64_t t12 = 8372751661393050LL;

    t12 = ((x49|x50)%(x51!=x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -23311265;
	static int8_t x54 = INT8_MAX;
	int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = -42021305;

    t13 = ((x53|x54)%(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x61 = 13U;
	int8_t x62 = INT8_MIN;
	uint32_t x64 = 345U;
	volatile int32_t t14 = 1436;

    t14 = ((x61|x62)%(x63!=x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x69 = UINT32_MAX;
	static volatile uint8_t x70 = 1U;
	uint64_t x71 = 626LLU;
	int16_t x72 = 6025;

    t15 = ((x69|x70)%(x71!=x72));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	static uint64_t x75 = UINT64_MAX;
	static int16_t x76 = -25;
	static volatile int32_t t16 = -1638;

    t16 = ((x73|x74)%(x75!=x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x78 = UINT32_MAX;
	uint8_t x80 = 14U;
	static uint32_t t17 = 56162U;

    t17 = ((x77|x78)%(x79!=x80));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 10U;
	int32_t x82 = INT32_MAX;
	volatile int64_t x83 = INT64_MAX;
	volatile int32_t x84 = 18;
	volatile int32_t t18 = 564802;

    t18 = ((x81|x82)%(x83!=x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = UINT64_MAX;
	static int8_t x86 = -1;
	int16_t x87 = INT16_MAX;
	uint16_t x88 = UINT16_MAX;
	static uint64_t t19 = 2647738155301168336LLU;

    t19 = ((x85|x86)%(x87!=x88));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;

    t20 = ((x89|x90)%(x91!=x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 2U;
	static int64_t x94 = INT64_MAX;
	static int64_t x95 = -768593LL;
	volatile int16_t x96 = INT16_MAX;
	volatile int64_t t21 = 918403831583994LL;

    t21 = ((x93|x94)%(x95!=x96));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -1;
	static uint16_t x102 = 59U;
	int64_t x103 = -1LL;
	int32_t t22 = 45805702;

    t22 = ((x101|x102)%(x103!=x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x105 = INT8_MIN;
	static uint8_t x106 = UINT8_MAX;
	uint8_t x107 = 126U;
	volatile int32_t x108 = -839933698;
	volatile int32_t t23 = -2884418;

    t23 = ((x105|x106)%(x107!=x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x109 = 5;
	uint8_t x110 = 57U;
	volatile int16_t x112 = 1;

    t24 = ((x109|x110)%(x111!=x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x114 = 961U;
	int64_t t25 = 430609072695029868LL;

    t25 = ((x113|x114)%(x115!=x116));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint16_t x118 = 227U;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t x120 = 3878;
	int64_t t26 = -3777914190084LL;

    t26 = ((x117|x118)%(x119!=x120));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x121 = 14LLU;
	int16_t x122 = -329;
	uint8_t x123 = 4U;
	uint64_t t27 = 16932161384060LLU;

    t27 = ((x121|x122)%(x123!=x124));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = 114776517LL;
	int32_t x126 = INT32_MIN;
	uint64_t x127 = UINT64_MAX;
	int64_t t28 = 171762117028860265LL;

    t28 = ((x125|x126)%(x127!=x128));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	int64_t x132 = INT64_MAX;
	static int64_t t29 = 1LL;

    t29 = ((x129|x130)%(x131!=x132));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	int32_t x136 = 8117664;

    t30 = ((x133|x134)%(x135!=x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MAX;
	uint8_t x138 = UINT8_MAX;
	static uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 99U;
	volatile int64_t t31 = -70441LL;

    t31 = ((x137|x138)%(x139!=x140));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MAX;
	static int32_t x146 = INT32_MIN;
	int8_t x147 = 1;
	uint16_t x148 = 389U;
	static int64_t t32 = -249187354633037LL;

    t32 = ((x145|x146)%(x147!=x148));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = INT16_MAX;
	uint32_t x150 = 35U;
	int32_t x151 = 1726520;
	uint64_t x152 = 54818795483197975LLU;

    t33 = ((x149|x150)%(x151!=x152));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x153 = 973868796514661976LLU;
	int32_t x154 = -1;
	static int16_t x155 = INT16_MAX;
	static uint8_t x156 = UINT8_MAX;
	static uint64_t t34 = 1185495LLU;

    t34 = ((x153|x154)%(x155!=x156));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x161 = 17U;
	volatile int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	static volatile int64_t x164 = 49LL;

    t35 = ((x161|x162)%(x163!=x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = -16255;
	int8_t x166 = 1;
	uint16_t x167 = 10U;
	int32_t x168 = 5702;
	int32_t t36 = 2;

    t36 = ((x165|x166)%(x167!=x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x169 = INT64_MAX;
	int16_t x170 = -1;
	uint8_t x171 = 0U;
	static int32_t x172 = -1571955;
	volatile int64_t t37 = 40508294254041LL;

    t37 = ((x169|x170)%(x171!=x172));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x174 = 1525U;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = UINT64_MAX;

    t38 = ((x173|x174)%(x175!=x176));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x177 = -1;
	int8_t x178 = -1;
	static uint32_t x179 = 4540U;
	volatile int16_t x180 = INT16_MIN;

    t39 = ((x177|x178)%(x179!=x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = 0;
	int16_t x182 = -499;
	static uint16_t x184 = 2174U;
	volatile int32_t t40 = 113543751;

    t40 = ((x181|x182)%(x183!=x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x186 = 94U;
	static int64_t x188 = INT64_MIN;

    t41 = ((x185|x186)%(x187!=x188));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x189 = 32U;
	int8_t x190 = INT8_MAX;
	uint8_t x191 = 109U;
	uint32_t x192 = 28U;
	volatile uint32_t t42 = 131189094U;

    t42 = ((x189|x190)%(x191!=x192));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x194 = -1;
	int32_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int64_t t43 = -534791991673783119LL;

    t43 = ((x193|x194)%(x195!=x196));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x197 = 10281443U;
	int16_t x199 = -204;
	int8_t x200 = 7;
	uint32_t t44 = 4157381U;

    t44 = ((x197|x198)%(x199!=x200));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = 100U;
	int16_t x202 = -118;
	uint32_t x203 = 84266356U;
	int32_t x204 = -816544711;
	volatile int32_t t45 = 4880;

    t45 = ((x201|x202)%(x203!=x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = -440922LL;
	uint32_t x207 = 70734624U;
	int16_t x208 = INT16_MIN;
	int64_t t46 = -3704959231LL;

    t46 = ((x205|x206)%(x207!=x208));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = -3128;
	int16_t x212 = INT16_MAX;
	int32_t t47 = -1627;

    t47 = ((x209|x210)%(x211!=x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x213 = 161063250U;
	uint64_t x214 = 235028816232286261LLU;
	int32_t x215 = 1;
	uint64_t t48 = 118LLU;

    t48 = ((x213|x214)%(x215!=x216));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	static volatile int16_t x218 = INT16_MAX;
	volatile int16_t x219 = INT16_MIN;
	uint32_t x220 = 61487096U;

    t49 = ((x217|x218)%(x219!=x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x221 = 513425727LLU;
	static uint8_t x222 = 84U;
	volatile int16_t x224 = INT16_MAX;
	volatile uint64_t t50 = 796LLU;

    t50 = ((x221|x222)%(x223!=x224));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x225 = -1;
	static uint8_t x228 = 2U;

    t51 = ((x225|x226)%(x227!=x228));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x230 = -114254LL;
	int64_t x231 = INT64_MIN;
	int64_t x232 = -1LL;
	uint64_t t52 = 2LLU;

    t52 = ((x229|x230)%(x231!=x232));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x233 = 4678244465LLU;
	int32_t x234 = INT32_MAX;
	int64_t x235 = -22420292LL;
	int32_t x236 = 50210;
	volatile uint64_t t53 = 11482021LLU;

    t53 = ((x233|x234)%(x235!=x236));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MAX;
	volatile uint32_t x238 = 791U;
	static volatile int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	volatile uint32_t t54 = 9370U;

    t54 = ((x237|x238)%(x239!=x240));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = INT16_MIN;
	static int64_t x242 = -31336956003227LL;
	static int32_t x243 = INT32_MAX;
	static int16_t x244 = 27;

    t55 = ((x241|x242)%(x243!=x244));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x246 = -48577730;
	int32_t x248 = 2148;
	int32_t t56 = 4;

    t56 = ((x245|x246)%(x247!=x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -378;
	static int64_t t57 = 1LL;

    t57 = ((x249|x250)%(x251!=x252));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x253 = 55029312U;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -27911096;

    t58 = ((x253|x254)%(x255!=x256));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x258 = -1;
	static int64_t x259 = INT64_MAX;
	static int32_t x260 = INT32_MAX;
	static int64_t t59 = -26LL;

    t59 = ((x257|x258)%(x259!=x260));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x262 = 7U;
	uint16_t x263 = 58U;
	volatile uint64_t x264 = 2609034LLU;

    t60 = ((x261|x262)%(x263!=x264));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x265 = -14863;
	static int32_t x266 = -118;
	int8_t x267 = -1;
	int16_t x268 = -2;

    t61 = ((x265|x266)%(x267!=x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x273 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = -427585342909003184LL;
	volatile int64_t t62 = -3652923LL;

    t62 = ((x273|x274)%(x275!=x276));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x278 = 1;
	volatile int64_t t63 = 65LL;

    t63 = ((x277|x278)%(x279!=x280));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = INT16_MAX;
	int8_t x284 = 37;
	int32_t t64 = -92711565;

    t64 = ((x281|x282)%(x283!=x284));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	uint32_t x287 = 32119096U;
	int16_t x288 = INT16_MAX;
	int32_t t65 = 701428780;

    t65 = ((x285|x286)%(x287!=x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MAX;
	uint16_t x290 = 3U;
	int8_t x291 = 23;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t66 = 0;

    t66 = ((x289|x290)%(x291!=x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x293 = INT8_MAX;
	volatile int32_t x295 = -171;

    t67 = ((x293|x294)%(x295!=x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x297 = 2085818U;
	volatile int8_t x299 = -1;

    t68 = ((x297|x298)%(x299!=x300));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x301 = 468U;
	int8_t x303 = INT8_MIN;
	int64_t x304 = 2641LL;
	volatile int32_t t69 = 709;

    t69 = ((x301|x302)%(x303!=x304));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x305 = -1;
	volatile uint16_t x306 = 48U;
	int32_t x307 = 3307;
	int16_t x308 = INT16_MIN;

    t70 = ((x305|x306)%(x307!=x308));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x310 = 93U;
	int32_t t71 = 49022;

    t71 = ((x309|x310)%(x311!=x312));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x318 = UINT8_MAX;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 227U;
	uint32_t t72 = 1U;

    t72 = ((x317|x318)%(x319!=x320));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x321 = -1;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -606719726702LL;
	uint64_t t73 = 109LLU;

    t73 = ((x321|x322)%(x323!=x324));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x325 = 580643995U;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	volatile uint32_t t74 = 65871466U;

    t74 = ((x325|x326)%(x327!=x328));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x329 = 64U;
	int8_t x331 = -1;

    t75 = ((x329|x330)%(x331!=x332));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x334 = INT16_MAX;
	static int64_t x335 = INT64_MIN;
	int8_t x336 = 14;
	static uint64_t t76 = 1892684198508535315LLU;

    t76 = ((x333|x334)%(x335!=x336));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x337 = 3;
	volatile uint8_t x338 = UINT8_MAX;
	volatile int32_t x339 = 27045031;
	static int8_t x340 = -1;
	volatile int32_t t77 = -172789394;

    t77 = ((x337|x338)%(x339!=x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x343 = 69976601119735LLU;
	int32_t x344 = INT32_MIN;

    t78 = ((x341|x342)%(x343!=x344));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x345 = UINT64_MAX;
	volatile int8_t x346 = 4;
	volatile uint64_t t79 = 572LLU;

    t79 = ((x345|x346)%(x347!=x348));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x349 = 291098LL;
	int8_t x350 = -7;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	int64_t t80 = -244LL;

    t80 = ((x349|x350)%(x351!=x352));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x354 = 657U;
	static int64_t x355 = 15405229LL;
	uint32_t x356 = 7U;
	static int32_t t81 = -395852;

    t81 = ((x353|x354)%(x355!=x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x357 = 30U;
	int16_t x358 = 5;
	int8_t x359 = INT8_MAX;
	volatile int16_t x360 = 3;
	volatile int32_t t82 = -122167;

    t82 = ((x357|x358)%(x359!=x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	static int64_t x363 = 125LL;
	int64_t x364 = INT64_MAX;

    t83 = ((x361|x362)%(x363!=x364));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static volatile int8_t x367 = -10;
	volatile int16_t x368 = INT16_MIN;

    t84 = ((x365|x366)%(x367!=x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = -1;
	int16_t x370 = -4;
	static int8_t x371 = 10;
	static int16_t x372 = INT16_MIN;
	int32_t t85 = -1;

    t85 = ((x369|x370)%(x371!=x372));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x373 = 178478173U;
	uint32_t x374 = 1115U;
	volatile uint8_t x375 = 3U;
	volatile int8_t x376 = -1;
	uint32_t t86 = 861U;

    t86 = ((x373|x374)%(x375!=x376));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = -1;
	uint16_t x379 = 5766U;
	volatile uint8_t x380 = 110U;
	volatile int32_t t87 = 2;

    t87 = ((x377|x378)%(x379!=x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x385 = -1LL;
	static int32_t x386 = -1;
	static int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MAX;
	volatile int64_t t88 = 58763608606101LL;

    t88 = ((x385|x386)%(x387!=x388));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x389 = -518335;
	volatile int64_t x391 = INT64_MIN;
	int64_t x392 = -1LL;
	static volatile int32_t t89 = 14634588;

    t89 = ((x389|x390)%(x391!=x392));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x393 = INT8_MIN;
	static int16_t x395 = -1;
	uint64_t x396 = 77153953046LLU;
	int32_t t90 = 26;

    t90 = ((x393|x394)%(x395!=x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MAX;

    t91 = ((x397|x398)%(x399!=x400));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x405 = INT8_MIN;
	uint8_t x406 = 1U;
	static volatile int64_t x407 = INT64_MIN;
	uint8_t x408 = 1U;
	static volatile int32_t t92 = -3220;

    t92 = ((x405|x406)%(x407!=x408));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x410 = 3708U;
	uint64_t x411 = 458734637953LLU;
	int16_t x412 = -146;
	volatile int32_t t93 = -63254;

    t93 = ((x409|x410)%(x411!=x412));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x417 = INT32_MIN;
	int16_t x418 = -1;
	uint64_t x419 = 230002647455LLU;
	volatile int16_t x420 = -36;
	volatile int32_t t94 = 11468;

    t94 = ((x417|x418)%(x419!=x420));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x421 = -1;
	uint64_t x422 = 1126053154LLU;
	int64_t x423 = INT64_MIN;
	uint64_t t95 = 81102535961LLU;

    t95 = ((x421|x422)%(x423!=x424));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = -47;
	uint64_t x426 = 4593LLU;
	volatile int16_t x427 = -1;
	static uint32_t x428 = 800U;

    t96 = ((x425|x426)%(x427!=x428));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	int64_t x430 = -1LL;
	static uint32_t x431 = 115523U;
	volatile int64_t x432 = INT64_MAX;
	static int64_t t97 = -15063811LL;

    t97 = ((x429|x430)%(x431!=x432));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x434 = 250040LL;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = 1;
	volatile int64_t t98 = 3523844711127902LL;

    t98 = ((x433|x434)%(x435!=x436));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = INT32_MIN;

    t99 = ((x437|x438)%(x439!=x440));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x442 = 163;
	int64_t x443 = 34947703156150219LL;
	static int8_t x444 = 0;
	volatile int64_t t100 = -157302055565734LL;

    t100 = ((x441|x442)%(x443!=x444));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = 75910823LL;
	uint64_t x446 = UINT64_MAX;
	volatile int64_t x447 = -9LL;
	static volatile uint64_t t101 = 1862863489LLU;

    t101 = ((x445|x446)%(x447!=x448));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x453 = -1LL;
	int64_t x454 = INT64_MAX;
	int64_t x456 = INT64_MAX;
	int64_t t102 = 831499770476LL;

    t102 = ((x453|x454)%(x455!=x456));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x457 = 441U;
	volatile int16_t x459 = 3284;
	static int16_t x460 = INT16_MAX;
	volatile int32_t t103 = -16269;

    t103 = ((x457|x458)%(x459!=x460));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x461 = INT16_MAX;
	static int16_t x462 = INT16_MIN;
	volatile uint64_t x464 = UINT64_MAX;

    t104 = ((x461|x462)%(x463!=x464));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = INT64_MAX;
	static int8_t x467 = INT8_MIN;
	volatile int64_t t105 = -89575226041LL;

    t105 = ((x465|x466)%(x467!=x468));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x469 = 1U;
	uint32_t x471 = 6221U;
	static volatile int32_t x472 = 0;
	int32_t t106 = 5200;

    t106 = ((x469|x470)%(x471!=x472));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x477 = -40;
	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MIN;
	volatile int32_t t107 = 0;

    t107 = ((x477|x478)%(x479!=x480));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x482 = -418706532381373LL;
	volatile int64_t t108 = -20461800LL;

    t108 = ((x481|x482)%(x483!=x484));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = -1;
	int32_t x486 = -9;
	static int64_t x488 = INT64_MIN;
	static int32_t t109 = -421949;

    t109 = ((x485|x486)%(x487!=x488));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x489 = 1;
	volatile int64_t x491 = INT64_MAX;
	int16_t x492 = -1;
	static int32_t t110 = 619082778;

    t110 = ((x489|x490)%(x491!=x492));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x494 = UINT32_MAX;
	static int32_t x496 = -1;

    t111 = ((x493|x494)%(x495!=x496));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x497 = INT32_MIN;
	volatile int64_t x498 = -3920028073LL;
	int32_t x499 = 762;
	volatile int64_t t112 = 1LL;

    t112 = ((x497|x498)%(x499!=x500));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x501 = 0U;
	volatile int64_t x502 = INT64_MIN;
	volatile uint16_t x503 = 2552U;
	int64_t t113 = 813229LL;

    t113 = ((x501|x502)%(x503!=x504));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x505 = UINT64_MAX;
	int32_t x506 = -3;
	int16_t x507 = INT16_MIN;
	int8_t x508 = -1;
	uint64_t t114 = 17011558702737556LLU;

    t114 = ((x505|x506)%(x507!=x508));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x509 = 519592143;
	static int8_t x511 = -42;
	int64_t x512 = INT64_MAX;
	volatile uint32_t t115 = 12776U;

    t115 = ((x509|x510)%(x511!=x512));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	int64_t x515 = 32LL;
	volatile int32_t t116 = 8;

    t116 = ((x513|x514)%(x515!=x516));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x517 = INT8_MAX;
	uint64_t x518 = UINT64_MAX;
	uint8_t x519 = 43U;
	uint32_t x520 = 18850677U;
	uint64_t t117 = 340LLU;

    t117 = ((x517|x518)%(x519!=x520));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x526 = 62202199U;
	uint32_t x527 = 276U;
	volatile uint32_t t118 = 2U;

    t118 = ((x525|x526)%(x527!=x528));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x529 = INT64_MIN;
	int8_t x531 = -35;
	int8_t x532 = INT8_MAX;
	volatile int64_t t119 = 9LL;

    t119 = ((x529|x530)%(x531!=x532));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = 0;
	static int8_t x534 = 1;
	volatile uint16_t x535 = UINT16_MAX;
	int16_t x536 = 1428;
	static int32_t t120 = -202564;

    t120 = ((x533|x534)%(x535!=x536));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x537 = 2;
	volatile int64_t x538 = INT64_MAX;
	uint16_t x539 = 1U;
	int64_t t121 = -2292963984176LL;

    t121 = ((x537|x538)%(x539!=x540));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x542 = INT8_MAX;
	static uint32_t x543 = 482U;
	uint64_t x544 = 362934891457535LLU;
	static volatile uint64_t t122 = 313304941447LLU;

    t122 = ((x541|x542)%(x543!=x544));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x546 = 1U;
	int16_t x547 = INT16_MIN;
	static int64_t x548 = INT64_MIN;
	static volatile int32_t t123 = 74;

    t123 = ((x545|x546)%(x547!=x548));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x549 = INT64_MAX;
	volatile int64_t x550 = -271424777065LL;
	uint16_t x551 = UINT16_MAX;
	static uint64_t x552 = 328722677418842029LLU;
	static int64_t t124 = -225LL;

    t124 = ((x549|x550)%(x551!=x552));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x554 = -1;
	int16_t x555 = 417;
	volatile int16_t x556 = INT16_MAX;

    t125 = ((x553|x554)%(x555!=x556));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x557 = 47441568U;
	volatile uint16_t x558 = UINT16_MAX;
	uint32_t t126 = 2067U;

    t126 = ((x557|x558)%(x559!=x560));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x562 = INT32_MAX;
	volatile uint8_t x563 = UINT8_MAX;
	int32_t t127 = 91601;

    t127 = ((x561|x562)%(x563!=x564));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x565 = -1LL;
	static uint32_t x567 = 0U;
	static volatile uint32_t x568 = UINT32_MAX;

    t128 = ((x565|x566)%(x567!=x568));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x569 = 8U;
	volatile int64_t x570 = 58048966LL;
	uint64_t x572 = 703146544394957LLU;
	volatile int64_t t129 = -1976096581256078489LL;

    t129 = ((x569|x570)%(x571!=x572));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x577 = 1077787385U;
	volatile int64_t x579 = INT64_MAX;
	uint32_t t130 = 572U;

    t130 = ((x577|x578)%(x579!=x580));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x581 = INT64_MIN;
	uint8_t x583 = UINT8_MAX;
	static uint16_t x584 = UINT16_MAX;

    t131 = ((x581|x582)%(x583!=x584));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x585 = 3816LL;
	int64_t x586 = INT64_MAX;
	uint16_t x587 = UINT16_MAX;
	static int16_t x588 = INT16_MIN;
	int64_t t132 = 3783LL;

    t132 = ((x585|x586)%(x587!=x588));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x589 = 849156694253509LLU;
	static int64_t x591 = INT64_MAX;
	uint64_t x592 = 3262078525314159LLU;
	uint64_t t133 = 33292837076090237LLU;

    t133 = ((x589|x590)%(x591!=x592));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = INT32_MIN;
	int8_t x594 = -1;
	static volatile int64_t x595 = INT64_MIN;
	static uint32_t x596 = UINT32_MAX;
	volatile int32_t t134 = -1;

    t134 = ((x593|x594)%(x595!=x596));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x597 = 0;
	uint8_t x598 = 126U;

    t135 = ((x597|x598)%(x599!=x600));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x601 = -1;
	int16_t x602 = 90;
	int64_t x603 = INT64_MIN;
	uint32_t x604 = 5U;
	static int32_t t136 = -360814;

    t136 = ((x601|x602)%(x603!=x604));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x605 = 3U;
	uint16_t x606 = 79U;
	uint16_t x608 = 6U;

    t137 = ((x605|x606)%(x607!=x608));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x610 = INT16_MAX;
	static int32_t x612 = -6028;
	int32_t t138 = -25843151;

    t138 = ((x609|x610)%(x611!=x612));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x613 = INT16_MIN;
	static int64_t x614 = -1846832405428178640LL;
	int64_t x616 = 2790931181LL;
	volatile int64_t t139 = 1LL;

    t139 = ((x613|x614)%(x615!=x616));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile uint8_t x618 = 1U;
	int32_t x619 = -14986;
	int32_t t140 = -6;

    t140 = ((x617|x618)%(x619!=x620));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x621 = -1;
	static uint64_t x622 = 23183305867386910LLU;
	int64_t x623 = INT64_MIN;
	volatile uint64_t t141 = 252443315244536LLU;

    t141 = ((x621|x622)%(x623!=x624));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x625 = INT8_MIN;
	volatile int8_t x626 = 0;
	uint8_t x627 = 2U;
	static int8_t x628 = -1;
	int32_t t142 = 27;

    t142 = ((x625|x626)%(x627!=x628));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x630 = 19U;
	int16_t x631 = -1;
	int32_t x632 = INT32_MIN;
	uint64_t t143 = 15301LLU;

    t143 = ((x629|x630)%(x631!=x632));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = 1;
	int32_t x635 = 69302597;
	static int32_t x636 = -1;
	static int32_t t144 = -1;

    t144 = ((x633|x634)%(x635!=x636));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x637 = -62;
	int8_t x638 = INT8_MIN;
	int8_t x639 = -13;
	int16_t x640 = -1;

    t145 = ((x637|x638)%(x639!=x640));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x641 = UINT16_MAX;
	int8_t x642 = INT8_MIN;
	volatile uint16_t x643 = UINT16_MAX;
	uint32_t x644 = 3U;
	volatile int32_t t146 = -7;

    t146 = ((x641|x642)%(x643!=x644));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x645 = INT8_MIN;
	int32_t x646 = -1;
	int32_t x647 = -1;
	int16_t x648 = 0;
	volatile int32_t t147 = -1265842;

    t147 = ((x645|x646)%(x647!=x648));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x649 = 138U;
	volatile uint64_t x650 = UINT64_MAX;
	uint64_t x651 = UINT64_MAX;
	volatile int32_t x652 = 2;
	volatile uint64_t t148 = 108LLU;

    t148 = ((x649|x650)%(x651!=x652));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x653 = 2745992U;
	uint64_t x654 = 188361189389600LLU;
	uint32_t x656 = 8483U;
	volatile uint64_t t149 = 1169439213630352LLU;

    t149 = ((x653|x654)%(x655!=x656));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x665 = 61U;
	int32_t x666 = INT32_MIN;
	int8_t x667 = 1;
	int32_t x668 = INT32_MIN;
	static volatile int32_t t150 = -882;

    t150 = ((x665|x666)%(x667!=x668));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x669 = 0U;
	volatile uint8_t x670 = UINT8_MAX;
	int32_t x671 = -32;
	int32_t x672 = INT32_MAX;
	static volatile int32_t t151 = 3210543;

    t151 = ((x669|x670)%(x671!=x672));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x673 = -1745LL;
	volatile int8_t x674 = INT8_MAX;
	static int64_t x675 = 32752922592769LL;
	int32_t x676 = -1;
	int64_t t152 = 1LL;

    t152 = ((x673|x674)%(x675!=x676));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x677 = 8925221;
	volatile int8_t x678 = 0;
	static uint32_t x679 = 15547U;
	int32_t t153 = -177;

    t153 = ((x677|x678)%(x679!=x680));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x681 = INT32_MIN;
	volatile int64_t x683 = 5609744255525LL;
	static int64_t x684 = INT64_MIN;
	static volatile int32_t t154 = 81960458;

    t154 = ((x681|x682)%(x683!=x684));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x685 = INT32_MAX;
	volatile uint8_t x686 = UINT8_MAX;
	static int8_t x688 = INT8_MIN;
	volatile int32_t t155 = 225900;

    t155 = ((x685|x686)%(x687!=x688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x689 = 4142U;
	int32_t x690 = INT32_MIN;
	int64_t x691 = INT64_MIN;
	uint64_t x692 = UINT64_MAX;
	volatile int32_t t156 = 6847;

    t156 = ((x689|x690)%(x691!=x692));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x693 = -1;
	uint32_t x694 = 358460U;
	int64_t x696 = INT64_MIN;
	volatile uint32_t t157 = 0U;

    t157 = ((x693|x694)%(x695!=x696));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = -5;
	volatile int8_t x699 = -28;
	volatile int64_t x700 = -3851914793839LL;
	static volatile uint32_t t158 = 0U;

    t158 = ((x697|x698)%(x699!=x700));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x701 = 2LLU;
	int16_t x703 = -1;
	uint32_t x704 = 2461U;
	uint64_t t159 = 317LLU;

    t159 = ((x701|x702)%(x703!=x704));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x706 = UINT16_MAX;
	volatile int64_t x707 = INT64_MIN;
	uint64_t x708 = 192LLU;
	uint64_t t160 = 24677652215045088LLU;

    t160 = ((x705|x706)%(x707!=x708));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x709 = -1710;
	int32_t x710 = 15313;
	int64_t x711 = INT64_MIN;

    t161 = ((x709|x710)%(x711!=x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x713 = 63669LL;
	int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MIN;
	volatile int64_t t162 = 397716LL;

    t162 = ((x713|x714)%(x715!=x716));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x717 = INT32_MAX;
	int32_t x718 = INT32_MIN;
	static int8_t x719 = INT8_MIN;
	static int16_t x720 = -1;

    t163 = ((x717|x718)%(x719!=x720));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x723 = -1LL;
	static int16_t x724 = INT16_MIN;
	volatile int64_t t164 = 6323008959906LL;

    t164 = ((x721|x722)%(x723!=x724));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x726 = UINT8_MAX;
	int32_t x727 = 7956;

    t165 = ((x725|x726)%(x727!=x728));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x729 = -1LL;
	int32_t x730 = INT32_MIN;
	int64_t x731 = -9LL;
	uint32_t x732 = 1350198U;
	volatile int64_t t166 = 2337640881LL;

    t166 = ((x729|x730)%(x731!=x732));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x733 = UINT8_MAX;
	uint8_t x734 = UINT8_MAX;
	static volatile int16_t x735 = -1;
	volatile uint32_t x736 = 792799U;
	int32_t t167 = -245212027;

    t167 = ((x733|x734)%(x735!=x736));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MIN;
	volatile uint32_t t168 = 1816241227U;

    t168 = ((x737|x738)%(x739!=x740));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = -1LL;
	int16_t x742 = -1;
	int16_t x743 = 29;
	static volatile int64_t t169 = 10291543LL;

    t169 = ((x741|x742)%(x743!=x744));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x745 = INT16_MIN;
	uint32_t x746 = UINT32_MAX;
	uint64_t x747 = 31234665190615LLU;
	volatile int16_t x748 = INT16_MAX;
	volatile uint32_t t170 = 9795266U;

    t170 = ((x745|x746)%(x747!=x748));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x750 = -106867;
	int64_t x751 = -4361064146074LL;

    t171 = ((x749|x750)%(x751!=x752));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x753 = 13;
	static uint8_t x754 = 31U;
	int32_t x755 = 88;
	volatile int32_t x756 = -1;

    t172 = ((x753|x754)%(x755!=x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x757 = -1;
	static int64_t x758 = 63052078015LL;
	uint32_t x759 = 54U;
	int16_t x760 = INT16_MIN;
	int64_t t173 = 88981976966195195LL;

    t173 = ((x757|x758)%(x759!=x760));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x762 = 3U;
	int64_t x764 = 24LL;
	static uint32_t t174 = 0U;

    t174 = ((x761|x762)%(x763!=x764));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x766 = UINT8_MAX;
	uint16_t x767 = 2U;
	uint16_t x768 = UINT16_MAX;
	uint32_t t175 = 244172U;

    t175 = ((x765|x766)%(x767!=x768));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x769 = 1U;
	volatile int16_t x770 = 26;
	static volatile uint8_t x772 = UINT8_MAX;

    t176 = ((x769|x770)%(x771!=x772));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x773 = INT8_MIN;
	int16_t x774 = -1;
	static int32_t x776 = 27762933;
	int32_t t177 = -244308680;

    t177 = ((x773|x774)%(x775!=x776));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x777 = -654;
	int8_t x779 = 3;
	int32_t x780 = INT32_MAX;
	volatile int32_t t178 = 7;

    t178 = ((x777|x778)%(x779!=x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x782 = 4747U;
	int32_t t179 = 4947599;

    t179 = ((x781|x782)%(x783!=x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x785 = INT64_MIN;
	uint8_t x786 = 8U;
	int8_t x787 = 1;
	uint64_t x788 = UINT64_MAX;
	int64_t t180 = 1694356262625LL;

    t180 = ((x785|x786)%(x787!=x788));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x789 = -526817023LL;
	volatile int8_t x790 = -1;
	uint16_t x792 = 34U;
	int64_t t181 = 50416LL;

    t181 = ((x789|x790)%(x791!=x792));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x793 = 39464432640747LLU;
	int8_t x795 = 1;
	int32_t x796 = INT32_MIN;
	static uint64_t t182 = 113449986541533693LLU;

    t182 = ((x793|x794)%(x795!=x796));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x797 = UINT8_MAX;
	int16_t x799 = INT16_MIN;
	volatile int32_t t183 = -190969;

    t183 = ((x797|x798)%(x799!=x800));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x802 = INT8_MIN;
	int64_t x803 = 6145761682481328LL;
	uint16_t x804 = 1234U;
	static volatile int64_t t184 = 7645LL;

    t184 = ((x801|x802)%(x803!=x804));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x805 = INT64_MAX;
	volatile int8_t x806 = 30;
	int32_t x807 = 9583798;
	int32_t x808 = -1086406;

    t185 = ((x805|x806)%(x807!=x808));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x809 = INT8_MIN;
	uint16_t x810 = UINT16_MAX;
	static uint8_t x811 = 7U;
	int64_t x812 = INT64_MAX;
	int32_t t186 = 2;

    t186 = ((x809|x810)%(x811!=x812));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x813 = -6880;
	int16_t x814 = -477;
	static volatile int16_t x815 = INT16_MIN;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t187 = 59551492;

    t187 = ((x813|x814)%(x815!=x816));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x817 = INT16_MIN;
	static int8_t x818 = -13;
	volatile int32_t t188 = -173;

    t188 = ((x817|x818)%(x819!=x820));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x822 = INT64_MAX;
	int32_t x824 = INT32_MIN;
	static volatile int64_t t189 = -14304273LL;

    t189 = ((x821|x822)%(x823!=x824));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x825 = -1598787071LL;
	volatile int16_t x826 = INT16_MIN;
	static int32_t x827 = INT32_MIN;
	volatile int64_t t190 = -5LL;

    t190 = ((x825|x826)%(x827!=x828));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x829 = UINT32_MAX;
	int32_t x830 = INT32_MIN;
	volatile int16_t x831 = INT16_MAX;
	int8_t x832 = -1;

    t191 = ((x829|x830)%(x831!=x832));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	int8_t x834 = INT8_MAX;
	volatile uint16_t x835 = 5651U;
	volatile int8_t x836 = 0;
	static uint64_t t192 = 676LLU;

    t192 = ((x833|x834)%(x835!=x836));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x837 = INT32_MAX;
	static uint16_t x838 = UINT16_MAX;
	uint32_t x840 = 1U;
	int32_t t193 = -22461136;

    t193 = ((x837|x838)%(x839!=x840));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x842 = 0;
	int32_t x844 = INT32_MIN;
	int64_t t194 = 1888101LL;

    t194 = ((x841|x842)%(x843!=x844));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x845 = 978U;
	uint64_t x846 = UINT64_MAX;
	volatile uint8_t x847 = 0U;
	int8_t x848 = -5;
	uint64_t t195 = 0LLU;

    t195 = ((x845|x846)%(x847!=x848));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x849 = 27904LL;
	volatile uint32_t x851 = UINT32_MAX;
	int64_t x852 = INT64_MAX;
	int64_t t196 = -159506648148752015LL;

    t196 = ((x849|x850)%(x851!=x852));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x853 = -1;
	uint64_t x854 = 15001791350928436LLU;
	int16_t x855 = 2;
	uint64_t t197 = 225509264LLU;

    t197 = ((x853|x854)%(x855!=x856));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x858 = -13;
	uint8_t x859 = 36U;
	volatile uint64_t t198 = 1617933649976786LLU;

    t198 = ((x857|x858)%(x859!=x860));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x862 = -1;
	volatile uint64_t x863 = 850754692364277LLU;
	volatile int32_t x864 = -1;
	volatile int32_t t199 = -4;

    t199 = ((x861|x862)%(x863!=x864));

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

