
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

static int32_t t1 = 10660;
static int32_t t3 = 3;
int32_t t5 = 132;
int8_t x26 = -21;
int8_t x28 = INT8_MAX;
uint16_t x32 = 31U;
static volatile int8_t x33 = INT8_MIN;
volatile int32_t t8 = 1041052;
uint32_t x37 = 8038U;
volatile int32_t t9 = -24000;
volatile int32_t x44 = INT32_MAX;
static int16_t x45 = 6966;
int32_t x47 = -210;
uint32_t x48 = UINT32_MAX;
static uint8_t x49 = 4U;
static uint64_t x50 = UINT64_MAX;
static int64_t x55 = INT64_MAX;
int32_t x62 = INT32_MIN;
int16_t x73 = -7572;
static int8_t x82 = 15;
int16_t x84 = INT16_MAX;
volatile int8_t x86 = INT8_MAX;
volatile int32_t x87 = INT32_MIN;
volatile int8_t x96 = -2;
uint16_t x98 = 25U;
int16_t x106 = INT16_MIN;
static int32_t x124 = 5;
static volatile int64_t x129 = -82436122807153040LL;
volatile uint16_t x136 = 18846U;
uint32_t x137 = UINT32_MAX;
int32_t t31 = 2699793;
static volatile uint16_t x147 = 260U;
int16_t x148 = 235;
int32_t t35 = -2;
static int32_t x168 = 411474;
volatile int32_t t37 = -12914;
int64_t x172 = INT64_MIN;
int32_t t38 = -47664;
static uint32_t x174 = 2515739U;
int32_t t39 = -1;
int16_t x178 = 8;
volatile int32_t t40 = -827261;
uint32_t x193 = 289131U;
int32_t x195 = -7;
static uint32_t x205 = UINT32_MAX;
volatile uint16_t x206 = 3U;
int8_t x210 = -55;
volatile int32_t t47 = 24710;
int32_t x220 = -1;
uint8_t x221 = UINT8_MAX;
int64_t x222 = INT64_MIN;
uint16_t x228 = 69U;
int32_t x229 = 4071868;
int8_t x232 = INT8_MIN;
static int32_t x235 = -75334;
static int32_t t54 = 34676;
int16_t x243 = INT16_MAX;
static volatile int32_t t56 = -1634;
volatile uint16_t x252 = UINT16_MAX;
uint32_t x253 = 938U;
int32_t x254 = INT32_MIN;
static int64_t x256 = INT64_MAX;
int8_t x257 = -4;
uint32_t x258 = UINT32_MAX;
static int32_t x267 = INT32_MIN;
int16_t x271 = INT16_MAX;
int32_t x272 = 2;
int32_t x274 = -1;
int32_t t63 = -937810710;
int16_t x278 = -671;
uint8_t x279 = 0U;
int16_t x281 = -10;
int32_t x282 = -932;
static int8_t x284 = 53;
volatile int16_t x285 = INT16_MAX;
static int32_t x291 = 29;
uint16_t x293 = 236U;
static int64_t x295 = -1LL;
volatile int64_t x299 = -5156LL;
int32_t t69 = 655964054;
volatile int64_t x302 = 404LL;
volatile int32_t t70 = -5657970;
int16_t x306 = INT16_MIN;
uint8_t x311 = 1U;
volatile int32_t t72 = 1;
int32_t x317 = -1;
volatile int32_t t74 = -239;
volatile int32_t t76 = -2;
int16_t x336 = INT16_MIN;
int64_t x340 = INT64_MAX;
uint16_t x349 = 81U;
static uint16_t x350 = 15737U;
int32_t x361 = 126;
static int64_t x370 = INT64_MAX;
int32_t t87 = -32170;
int16_t x385 = 890;
volatile uint32_t x392 = UINT32_MAX;
static int32_t t90 = 9413444;
int8_t x393 = -1;
uint16_t x395 = UINT16_MAX;
int32_t x396 = -1;
uint32_t x421 = UINT32_MAX;
uint16_t x422 = 12U;
int16_t x426 = INT16_MAX;
uint8_t x428 = 1U;
int64_t x431 = -5319933716105893LL;
static volatile int64_t x433 = INT64_MIN;
int16_t x447 = INT16_MIN;
volatile uint64_t x454 = 384152LLU;
volatile uint16_t x459 = 1861U;
int32_t x462 = INT32_MIN;
volatile int32_t t107 = -8;
int16_t x465 = -1;
volatile int64_t x468 = -1LL;
int64_t x471 = INT64_MAX;
int8_t x473 = INT8_MAX;
uint8_t x475 = UINT8_MAX;
static int8_t x476 = INT8_MIN;
int64_t x482 = -100129118LL;
uint16_t x488 = UINT16_MAX;
static uint32_t x491 = 1716017321U;
static uint16_t x503 = UINT16_MAX;
int16_t x505 = 2648;
int32_t x508 = INT32_MIN;
int32_t x519 = -1;
int32_t t120 = 1928795;
int16_t x523 = INT16_MIN;
int32_t t121 = -131505497;
static volatile int32_t t123 = -10903;
int8_t x535 = -1;
volatile uint32_t x536 = 4495506U;
static volatile int32_t t124 = -301;
int64_t x537 = INT64_MAX;
int8_t x538 = -1;
int32_t x541 = -1;
uint32_t x542 = 6830U;
volatile int32_t t127 = 4421;
int64_t x554 = -3LL;
int16_t x557 = -1;
int16_t x559 = INT16_MAX;
int64_t x569 = 792044814382076LL;
volatile int32_t t131 = 0;
uint32_t x575 = 666027831U;
int32_t t132 = -2068864;
uint16_t x586 = 1U;
static int32_t x596 = -1;
volatile int32_t x598 = INT32_MAX;
volatile uint64_t x600 = 2003072728208154466LLU;
int32_t t137 = -1;
int8_t x601 = INT8_MIN;
uint32_t x604 = UINT32_MAX;
int64_t x607 = -1LL;
static volatile int32_t x608 = INT32_MAX;
volatile int8_t x621 = INT8_MIN;
static int8_t x622 = INT8_MIN;
static int8_t x624 = -17;
volatile int8_t x632 = INT8_MAX;
int32_t x636 = INT32_MIN;
static uint64_t x640 = 637106LLU;
int8_t x650 = INT8_MIN;
volatile int32_t t148 = 3301;
uint64_t x653 = 200LLU;
int32_t x677 = INT32_MIN;
int16_t x683 = INT16_MAX;
static int8_t x684 = INT8_MAX;
int8_t x694 = -1;
static int16_t x702 = -1;
volatile int32_t x706 = INT32_MAX;
int16_t x710 = -541;
int16_t x711 = -343;
volatile int64_t x714 = INT64_MAX;
int32_t t163 = -1964065;
int32_t x719 = -1;
volatile int64_t x723 = INT64_MIN;
uint8_t x724 = 45U;
static volatile int32_t t165 = 1460;
static uint64_t x741 = 42LLU;
int32_t t167 = -10;
uint64_t x754 = 57154843313LLU;
uint32_t x757 = UINT32_MAX;
int64_t x760 = 37770077476LL;
volatile int32_t t171 = 29600;
int16_t x762 = INT16_MIN;
volatile int32_t t172 = -659066;
static int8_t x765 = 1;
uint32_t x772 = 12607U;
int32_t x775 = -192;
int64_t x776 = INT64_MIN;
volatile int8_t x784 = -21;
volatile int32_t x785 = INT32_MIN;
static int64_t x793 = 8060787595295043LL;
uint32_t x795 = UINT32_MAX;
int16_t x807 = INT16_MIN;
uint32_t x808 = UINT32_MAX;
volatile int32_t x823 = -14;
uint64_t x826 = 616792908LLU;
static int16_t x831 = INT16_MIN;
uint32_t x835 = UINT32_MAX;
volatile int8_t x838 = -22;
int16_t x841 = INT16_MIN;
int64_t x843 = -1LL;
int8_t x845 = -1;
volatile int16_t x851 = -14123;
volatile int32_t t199 = -311781;


void f0(void) {
    	int64_t x1 = -1LL;
	int32_t x2 = INT32_MIN;
	volatile int8_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -1565;

    t0 = (x1==(x2-(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 1U;
	uint32_t x6 = 41U;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;

    t1 = (x5==(x6-(x7/x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 723090217LLU;
	int16_t x10 = -14930;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -1;
	int32_t t2 = -1;

    t2 = (x9==(x10-(x11/x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	static volatile int64_t x14 = -1LL;
	int8_t x15 = -1;
	static volatile int32_t x16 = -16592;

    t3 = (x13==(x14-(x15/x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x17 = 1U;
	int8_t x18 = -1;
	static volatile int64_t x19 = INT64_MAX;
	volatile int32_t x20 = INT32_MAX;
	volatile int32_t t4 = -15278271;

    t4 = (x17==(x18-(x19/x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile int32_t x22 = 874024;
	static volatile uint8_t x23 = UINT8_MAX;
	int64_t x24 = 1LL;

    t5 = (x21==(x22-(x23/x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 10068U;
	int8_t x27 = -1;
	volatile int32_t t6 = -8586111;

    t6 = (x25==(x26-(x27/x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x30 = -408740;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -2;

    t7 = (x29==(x30-(x31/x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;

    t8 = (x33==(x34-(x35/x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 15;
	int8_t x39 = INT8_MIN;
	static uint32_t x40 = 82U;

    t9 = (x37==(x38-(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MAX;
	static uint64_t x42 = UINT64_MAX;
	int64_t x43 = -301664369797LL;
	int32_t t10 = 134444;

    t10 = (x41==(x42-(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	static int32_t t11 = 283163;

    t11 = (x45==(x46-(x47/x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -42330;

    t12 = (x49==(x50-(x51/x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 20248;
	volatile uint8_t x54 = 1U;
	volatile int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -426180651;

    t13 = (x53==(x54-(x55/x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 25U;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 751U;
	volatile uint32_t x60 = 185393956U;
	static int32_t t14 = -337;

    t14 = (x57==(x58-(x59/x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 21;
	static int8_t x63 = 1;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 34939;

    t15 = (x61==(x62-(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 9U;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = 66257283898955LLU;
	static int64_t x68 = -415246949LL;
	volatile int32_t t16 = -5820;

    t16 = (x65==(x66-(x67/x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	static int16_t x70 = 8738;
	volatile int64_t x71 = INT64_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 0;

    t17 = (x69==(x70-(x71/x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 1U;
	static int64_t x75 = -7LL;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = 0;

    t18 = (x73==(x74-(x75/x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -909095805;
	int32_t x83 = INT32_MIN;
	int32_t t19 = 620;

    t19 = (x81==(x82-(x83/x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = 2720445LL;
	int32_t x88 = -277806;
	int32_t t20 = 383256;

    t20 = (x85==(x86-(x87/x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	static uint8_t x91 = UINT8_MAX;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t21 = -11;

    t21 = (x89==(x90-(x91/x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 29U;
	volatile uint32_t x94 = 438082461U;
	static int16_t x95 = INT16_MIN;
	int32_t t22 = 26947;

    t22 = (x93==(x94-(x95/x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MAX;
	volatile int16_t x99 = -5;
	int32_t x100 = 8452;
	static int32_t t23 = 6611;

    t23 = (x97==(x98-(x99/x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x101 = 6609U;
	int64_t x102 = INT64_MIN;
	int16_t x103 = -1;
	int64_t x104 = 16347752LL;
	int32_t t24 = -1474308;

    t24 = (x101==(x102-(x103/x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = UINT8_MAX;
	uint16_t x107 = 6896U;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = 803;

    t25 = (x105==(x106-(x107/x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = UINT32_MAX;
	static int8_t x110 = -1;
	int32_t x111 = -11;
	int64_t x112 = -1LL;
	volatile int32_t t26 = 1845;

    t26 = (x109==(x110-(x111/x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = UINT16_MAX;
	volatile uint8_t x122 = 8U;
	uint64_t x123 = 288458172493816LLU;
	int32_t t27 = -16389;

    t27 = (x121==(x122-(x123/x124)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x125 = -2152180;
	static int32_t x126 = INT32_MIN;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = -1LL;
	int32_t t28 = 185;

    t28 = (x125==(x126-(x127/x128)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x130 = INT8_MAX;
	int32_t x131 = -145;
	static int8_t x132 = INT8_MAX;
	int32_t t29 = 112696;

    t29 = (x129==(x130-(x131/x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x133 = UINT32_MAX;
	int32_t x134 = -6;
	uint16_t x135 = 7553U;
	volatile int32_t t30 = 836413;

    t30 = (x133==(x134-(x135/x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x138 = INT64_MIN;
	uint64_t x139 = 839984542949LLU;
	volatile uint64_t x140 = 108914017570LLU;

    t31 = (x137==(x138-(x139/x140)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -41;
	int32_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t32 = -56603;

    t32 = (x141==(x142-(x143/x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = 1LL;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t t33 = -2501461;

    t33 = (x145==(x146-(x147/x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = 12146U;
	int8_t x150 = 49;
	uint16_t x151 = 156U;
	volatile int32_t x152 = INT32_MIN;
	volatile int32_t t34 = -5718;

    t34 = (x149==(x150-(x151/x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	static int16_t x154 = -474;
	uint8_t x155 = UINT8_MAX;
	static uint64_t x156 = 501LLU;

    t35 = (x153==(x154-(x155/x156)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 2715U;
	static volatile int32_t t36 = 31160;

    t36 = (x157==(x158-(x159/x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x165 = 74U;
	static int8_t x166 = 1;
	int32_t x167 = -19;

    t37 = (x165==(x166-(x167/x168)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = -1;
	static volatile int32_t x170 = INT32_MIN;
	int16_t x171 = -1;

    t38 = (x169==(x170-(x171/x172)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x173 = INT32_MIN;
	static int16_t x175 = -1;
	int64_t x176 = -3LL;

    t39 = (x173==(x174-(x175/x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x177 = INT8_MIN;
	int8_t x179 = 7;
	int8_t x180 = -3;

    t40 = (x177==(x178-(x179/x180)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	static int32_t x183 = -1;
	volatile int8_t x184 = INT8_MAX;
	int32_t t41 = -676502082;

    t41 = (x181==(x182-(x183/x184)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x185 = 17100232756760865LLU;
	int32_t x186 = -1;
	uint64_t x187 = 3682055769883565376LLU;
	int64_t x188 = INT64_MAX;
	static volatile int32_t t42 = 52908453;

    t42 = (x185==(x186-(x187/x188)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x194 = UINT64_MAX;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t43 = 25268;

    t43 = (x193==(x194-(x195/x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x197 = INT8_MIN;
	int8_t x198 = 1;
	int8_t x199 = 28;
	static uint32_t x200 = 15768514U;
	volatile int32_t t44 = 64082;

    t44 = (x197==(x198-(x199/x200)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = INT16_MAX;
	uint32_t x202 = 567346605U;
	volatile int32_t x203 = INT32_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t45 = 1172;

    t45 = (x201==(x202-(x203/x204)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x207 = 417349501;
	int64_t x208 = 738LL;
	static int32_t t46 = 494725511;

    t46 = (x205==(x206-(x207/x208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -1200;
	int8_t x211 = INT8_MAX;
	int16_t x212 = 76;

    t47 = (x209==(x210-(x211/x212)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 134671464U;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = UINT32_MAX;
	volatile int32_t t48 = -1;

    t48 = (x213==(x214-(x215/x216)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = INT64_MAX;
	volatile int16_t x218 = -983;
	int16_t x219 = INT16_MAX;
	int32_t t49 = -3406519;

    t49 = (x217==(x218-(x219/x220)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x223 = 93236109755525LLU;
	int32_t x224 = -1;
	int32_t t50 = 164;

    t50 = (x221==(x222-(x223/x224)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = INT32_MAX;
	int64_t x226 = INT64_MIN;
	int64_t x227 = -1LL;
	volatile int32_t t51 = -235386595;

    t51 = (x225==(x226-(x227/x228)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x230 = 0U;
	int32_t x231 = INT32_MAX;
	int32_t t52 = 5112;

    t52 = (x229==(x230-(x231/x232)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = 0;
	static volatile int8_t x234 = INT8_MIN;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t53 = 1;

    t53 = (x233==(x234-(x235/x236)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = -1;
	uint8_t x238 = 38U;
	int32_t x239 = -1;
	uint16_t x240 = UINT16_MAX;

    t54 = (x237==(x238-(x239/x240)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t55 = 0;

    t55 = (x241==(x242-(x243/x244)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = -20;
	volatile int32_t x246 = -1;
	static volatile int16_t x247 = -1;
	int8_t x248 = INT8_MAX;

    t56 = (x245==(x246-(x247/x248)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = 0;
	volatile int32_t x250 = 0;
	uint8_t x251 = UINT8_MAX;
	volatile int32_t t57 = -2783;

    t57 = (x249==(x250-(x251/x252)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x255 = 0U;
	volatile int32_t t58 = 1;

    t58 = (x253==(x254-(x255/x256)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t59 = 23;

    t59 = (x257==(x258-(x259/x260)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x261 = -9;
	volatile int64_t x262 = -1LL;
	int8_t x263 = 7;
	int32_t x264 = 19;
	int32_t t60 = 0;

    t60 = (x261==(x262-(x263/x264)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	int8_t x268 = 6;
	volatile int32_t t61 = 73524710;

    t61 = (x265==(x266-(x267/x268)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x269 = UINT64_MAX;
	static volatile uint64_t x270 = 5214418LLU;
	volatile int32_t t62 = 1;

    t62 = (x269==(x270-(x271/x272)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x273 = -43;
	static int16_t x275 = INT16_MIN;
	static uint32_t x276 = 1U;

    t63 = (x273==(x274-(x275/x276)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x277 = INT32_MIN;
	int32_t x280 = -3582543;
	volatile int32_t t64 = -41472604;

    t64 = (x277==(x278-(x279/x280)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x283 = 6921;
	volatile int32_t t65 = 2238386;

    t65 = (x281==(x282-(x283/x284)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x286 = 219029493559LLU;
	uint16_t x287 = 937U;
	volatile int8_t x288 = -1;
	volatile int32_t t66 = -46;

    t66 = (x285==(x286-(x287/x288)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	uint16_t x292 = 252U;
	int32_t t67 = 77030801;

    t67 = (x289==(x290-(x291/x292)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x294 = -1133;
	int32_t x296 = INT32_MAX;
	volatile int32_t t68 = -266;

    t68 = (x293==(x294-(x295/x296)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	static int32_t x300 = -1184799;

    t69 = (x297==(x298-(x299/x300)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x301 = 28U;
	static int16_t x303 = -1;
	volatile uint32_t x304 = UINT32_MAX;

    t70 = (x301==(x302-(x303/x304)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x305 = UINT64_MAX;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;
	volatile int32_t t71 = 875624;

    t71 = (x305==(x306-(x307/x308)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MIN;
	uint64_t x310 = 830391561LLU;
	volatile int32_t x312 = -2529;

    t72 = (x309==(x310-(x311/x312)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x313 = -9LL;
	uint8_t x314 = 43U;
	static uint64_t x315 = 15LLU;
	int16_t x316 = -1;
	volatile int32_t t73 = 3798310;

    t73 = (x313==(x314-(x315/x316)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x318 = 7402912U;
	static uint64_t x319 = 60056390867LLU;
	uint32_t x320 = 43U;

    t74 = (x317==(x318-(x319/x320)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = -134543;
	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MAX;
	volatile uint32_t x324 = 1930180065U;
	volatile int32_t t75 = 484220433;

    t75 = (x321==(x322-(x323/x324)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x325 = INT64_MIN;
	uint32_t x326 = UINT32_MAX;
	uint16_t x327 = 2U;
	static volatile int16_t x328 = -1;

    t76 = (x325==(x326-(x327/x328)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x329 = UINT8_MAX;
	int8_t x330 = -1;
	volatile int16_t x331 = -174;
	int8_t x332 = 1;
	volatile int32_t t77 = 185787375;

    t77 = (x329==(x330-(x331/x332)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = INT8_MAX;
	volatile int64_t x334 = -414586LL;
	static int32_t x335 = INT32_MIN;
	int32_t t78 = 390388759;

    t78 = (x333==(x334-(x335/x336)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	int32_t t79 = -3;

    t79 = (x337==(x338-(x339/x340)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x341 = -1;
	static int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	uint8_t x344 = 31U;
	volatile int32_t t80 = -6544;

    t80 = (x341==(x342-(x343/x344)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = -15267009293000073LL;
	uint16_t x346 = 15808U;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t81 = -15;

    t81 = (x345==(x346-(x347/x348)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x351 = 2;
	uint8_t x352 = 63U;
	static int32_t t82 = -201;

    t82 = (x349==(x350-(x351/x352)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x362 = -15488LL;
	volatile uint32_t x363 = UINT32_MAX;
	int64_t x364 = INT64_MAX;
	int32_t t83 = 3230934;

    t83 = (x361==(x362-(x363/x364)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = 0LL;
	int32_t x367 = -1;
	int64_t x368 = -1LL;
	volatile int32_t t84 = 6;

    t84 = (x365==(x366-(x367/x368)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MIN;
	int8_t x371 = -13;
	static volatile int8_t x372 = INT8_MIN;
	int32_t t85 = 3;

    t85 = (x369==(x370-(x371/x372)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = -1;
	int32_t x374 = INT32_MAX;
	int64_t x375 = -1LL;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t86 = 8376633;

    t86 = (x373==(x374-(x375/x376)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = -1;
	uint32_t x378 = 197343U;
	static uint8_t x379 = UINT8_MAX;
	static int8_t x380 = 2;

    t87 = (x377==(x378-(x379/x380)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x381 = INT64_MIN;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MAX;
	volatile int16_t x384 = 110;
	static int32_t t88 = -3406;

    t88 = (x381==(x382-(x383/x384)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x386 = 1961208;
	volatile int8_t x387 = 30;
	uint64_t x388 = UINT64_MAX;
	int32_t t89 = 4;

    t89 = (x385==(x386-(x387/x388)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = INT16_MIN;
	static uint64_t x390 = 14165LLU;
	int32_t x391 = -1;

    t90 = (x389==(x390-(x391/x392)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x394 = 582U;
	volatile int32_t t91 = -5;

    t91 = (x393==(x394-(x395/x396)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x397 = INT8_MAX;
	volatile int16_t x398 = -1;
	int16_t x399 = -1;
	uint8_t x400 = UINT8_MAX;
	static int32_t t92 = -520;

    t92 = (x397==(x398-(x399/x400)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x405 = 1U;
	int64_t x406 = -259156438025487LL;
	volatile uint64_t x407 = 1LLU;
	static volatile int8_t x408 = INT8_MIN;
	int32_t t93 = -608298295;

    t93 = (x405==(x406-(x407/x408)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x409 = INT32_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = 14;
	static volatile int64_t x412 = INT64_MAX;
	volatile int32_t t94 = 1153;

    t94 = (x409==(x410-(x411/x412)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x413 = -1;
	int16_t x414 = -3722;
	int32_t x415 = -1;
	volatile int64_t x416 = -1LL;
	int32_t t95 = 4;

    t95 = (x413==(x414-(x415/x416)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x417 = -206;
	int8_t x418 = -2;
	uint32_t x419 = 254652U;
	uint32_t x420 = 5580U;
	volatile int32_t t96 = 20102579;

    t96 = (x417==(x418-(x419/x420)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x423 = 1208432981771115LLU;
	int8_t x424 = INT8_MIN;
	volatile int32_t t97 = -7319;

    t97 = (x421==(x422-(x423/x424)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = 1;
	static int16_t x427 = INT16_MIN;
	static volatile int32_t t98 = -1303;

    t98 = (x425==(x426-(x427/x428)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x429 = -13104;
	int32_t x430 = -13;
	int8_t x432 = -4;
	int32_t t99 = 119648186;

    t99 = (x429==(x430-(x431/x432)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x434 = UINT64_MAX;
	static uint32_t x435 = 219735U;
	int64_t x436 = 369024777640LL;
	volatile int32_t t100 = -194330;

    t100 = (x433==(x434-(x435/x436)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x437 = 16U;
	int8_t x438 = -62;
	uint16_t x439 = 1U;
	int32_t x440 = INT32_MIN;
	int32_t t101 = 19586368;

    t101 = (x437==(x438-(x439/x440)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x441 = 64367779511505083LLU;
	uint32_t x442 = 165547428U;
	int64_t x443 = -4841905602385121LL;
	int32_t x444 = INT32_MIN;
	int32_t t102 = -815;

    t102 = (x441==(x442-(x443/x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x446 = 4976;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t103 = -1066588;

    t103 = (x445==(x446-(x447/x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x449 = 1125789LLU;
	int8_t x450 = -2;
	int32_t x451 = INT32_MIN;
	static int16_t x452 = INT16_MIN;
	volatile int32_t t104 = -92166884;

    t104 = (x449==(x450-(x451/x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x453 = 1U;
	volatile int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	volatile int32_t t105 = -18666147;

    t105 = (x453==(x454-(x455/x456)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = INT16_MIN;
	volatile int16_t x458 = INT16_MAX;
	int32_t x460 = INT32_MIN;
	volatile int32_t t106 = 3;

    t106 = (x457==(x458-(x459/x460)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x461 = 30965LLU;
	uint32_t x463 = UINT32_MAX;
	static int8_t x464 = INT8_MIN;

    t107 = (x461==(x462-(x463/x464)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x466 = -5;
	uint64_t x467 = 1140606415496LLU;
	int32_t t108 = -383946710;

    t108 = (x465==(x466-(x467/x468)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x469 = 47;
	volatile int16_t x470 = -1;
	uint64_t x472 = UINT64_MAX;
	int32_t t109 = -3278723;

    t109 = (x469==(x470-(x471/x472)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x474 = INT32_MIN;
	int32_t t110 = 325;

    t110 = (x473==(x474-(x475/x476)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x477 = -949264068460945140LL;
	volatile uint64_t x478 = 127674545926142LLU;
	int16_t x479 = INT16_MIN;
	int8_t x480 = INT8_MAX;
	static int32_t t111 = -3;

    t111 = (x477==(x478-(x479/x480)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x481 = -10;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 19U;
	volatile int32_t t112 = 2;

    t112 = (x481==(x482-(x483/x484)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x485 = 232U;
	uint8_t x486 = 127U;
	int32_t x487 = INT32_MIN;
	volatile int32_t t113 = 34520631;

    t113 = (x485==(x486-(x487/x488)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x489 = INT32_MIN;
	volatile int64_t x490 = INT64_MIN;
	int16_t x492 = INT16_MIN;
	volatile int32_t t114 = 359;

    t114 = (x489==(x490-(x491/x492)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x494 = 5456;
	static uint16_t x495 = UINT16_MAX;
	static int8_t x496 = 4;
	volatile int32_t t115 = -526187;

    t115 = (x493==(x494-(x495/x496)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x497 = INT16_MAX;
	volatile uint16_t x498 = UINT16_MAX;
	static uint64_t x499 = UINT64_MAX;
	int8_t x500 = -1;
	int32_t t116 = -52218;

    t116 = (x497==(x498-(x499/x500)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x501 = 1757001LL;
	volatile int16_t x502 = 261;
	int32_t x504 = INT32_MAX;
	volatile int32_t t117 = -1;

    t117 = (x501==(x502-(x503/x504)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x506 = 210;
	int16_t x507 = INT16_MIN;
	int32_t t118 = 4803739;

    t118 = (x505==(x506-(x507/x508)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x509 = INT64_MIN;
	static int64_t x510 = -1LL;
	uint64_t x511 = 6LLU;
	volatile int16_t x512 = -1;
	volatile int32_t t119 = 2044190;

    t119 = (x509==(x510-(x511/x512)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x518 = INT8_MIN;
	int8_t x520 = -1;

    t120 = (x517==(x518-(x519/x520)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x521 = 16U;
	int8_t x522 = INT8_MIN;
	static volatile int16_t x524 = -1;

    t121 = (x521==(x522-(x523/x524)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x525 = UINT32_MAX;
	uint64_t x526 = 335999547855LLU;
	int64_t x527 = INT64_MAX;
	int8_t x528 = 28;
	int32_t t122 = -43;

    t122 = (x525==(x526-(x527/x528)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x529 = -2046;
	int64_t x530 = INT64_MIN;
	volatile int32_t x531 = 7964691;
	int16_t x532 = -1;

    t123 = (x529==(x530-(x531/x532)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x533 = 265612U;
	volatile int16_t x534 = INT16_MIN;

    t124 = (x533==(x534-(x535/x536)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x539 = 15;
	volatile int64_t x540 = INT64_MIN;
	int32_t t125 = -59954;

    t125 = (x537==(x538-(x539/x540)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x543 = INT16_MIN;
	uint16_t x544 = 28462U;
	volatile int32_t t126 = -507826;

    t126 = (x541==(x542-(x543/x544)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x545 = UINT32_MAX;
	static volatile uint64_t x546 = 440LLU;
	int8_t x547 = INT8_MIN;
	int8_t x548 = -1;

    t127 = (x545==(x546-(x547/x548)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x549 = 3826;
	int64_t x550 = INT64_MIN;
	volatile int32_t x551 = INT32_MAX;
	int64_t x552 = -14LL;
	int32_t t128 = 2;

    t128 = (x549==(x550-(x551/x552)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x553 = INT64_MIN;
	uint32_t x555 = 60768578U;
	volatile int8_t x556 = -1;
	int32_t t129 = 489236127;

    t129 = (x553==(x554-(x555/x556)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x558 = INT8_MAX;
	int8_t x560 = INT8_MIN;
	int32_t t130 = -718;

    t130 = (x557==(x558-(x559/x560)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x570 = INT64_MIN;
	volatile int32_t x571 = 87056;
	uint64_t x572 = 430310LLU;

    t131 = (x569==(x570-(x571/x572)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x573 = UINT8_MAX;
	int16_t x574 = -1;
	uint64_t x576 = 483294576LLU;

    t132 = (x573==(x574-(x575/x576)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x577 = -1;
	volatile uint64_t x578 = UINT64_MAX;
	int16_t x579 = INT16_MIN;
	int64_t x580 = INT64_MAX;
	volatile int32_t t133 = -23;

    t133 = (x577==(x578-(x579/x580)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	uint16_t x587 = 15292U;
	int32_t x588 = 20466;
	int32_t t134 = 966509;

    t134 = (x585==(x586-(x587/x588)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x589 = -1;
	int32_t x590 = -1;
	volatile int64_t x591 = INT64_MIN;
	int64_t x592 = 93576816346LL;
	int32_t t135 = 10158179;

    t135 = (x589==(x590-(x591/x592)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x593 = UINT16_MAX;
	static volatile int8_t x594 = INT8_MIN;
	int64_t x595 = -1LL;
	volatile int32_t t136 = -258;

    t136 = (x593==(x594-(x595/x596)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x597 = INT8_MAX;
	int8_t x599 = INT8_MIN;

    t137 = (x597==(x598-(x599/x600)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x602 = 5261410;
	uint32_t x603 = UINT32_MAX;
	static volatile int32_t t138 = -23;

    t138 = (x601==(x602-(x603/x604)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x605 = 4024507646974360LL;
	int16_t x606 = 14;
	int32_t t139 = 12361473;

    t139 = (x605==(x606-(x607/x608)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x613 = INT32_MIN;
	static int64_t x614 = -3846LL;
	volatile uint32_t x615 = 7U;
	uint64_t x616 = 21LLU;
	volatile int32_t t140 = -808;

    t140 = (x613==(x614-(x615/x616)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x617 = INT8_MIN;
	static uint16_t x618 = UINT16_MAX;
	static int16_t x619 = -731;
	volatile int64_t x620 = -1LL;
	volatile int32_t t141 = 4741836;

    t141 = (x617==(x618-(x619/x620)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x623 = -4;
	volatile int32_t t142 = 1672;

    t142 = (x621==(x622-(x623/x624)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x625 = 2U;
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MAX;
	int16_t x628 = INT16_MIN;
	static int32_t t143 = 57636;

    t143 = (x625==(x626-(x627/x628)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x629 = -1;
	static uint64_t x630 = UINT64_MAX;
	static int16_t x631 = -1;
	volatile int32_t t144 = 29697;

    t144 = (x629==(x630-(x631/x632)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = 0;
	static volatile int32_t x634 = -1;
	uint8_t x635 = UINT8_MAX;
	volatile int32_t t145 = -4901;

    t145 = (x633==(x634-(x635/x636)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x637 = 1005729976231721362LL;
	int8_t x638 = -22;
	static int64_t x639 = INT64_MIN;
	volatile int32_t t146 = -11859631;

    t146 = (x637==(x638-(x639/x640)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x645 = INT8_MAX;
	volatile uint16_t x646 = 8U;
	static uint64_t x647 = 44378LLU;
	static int32_t x648 = INT32_MAX;
	volatile int32_t t147 = -97465;

    t147 = (x645==(x646-(x647/x648)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x649 = 1415U;
	uint8_t x651 = 0U;
	int64_t x652 = INT64_MIN;

    t148 = (x649==(x650-(x651/x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x654 = 227;
	uint8_t x655 = UINT8_MAX;
	int16_t x656 = INT16_MIN;
	volatile int32_t t149 = -7;

    t149 = (x653==(x654-(x655/x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x657 = 1;
	int8_t x658 = INT8_MIN;
	int8_t x659 = -1;
	uint8_t x660 = 113U;
	volatile int32_t t150 = -228518095;

    t150 = (x657==(x658-(x659/x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x661 = 18;
	volatile uint16_t x662 = 48U;
	volatile int16_t x663 = INT16_MIN;
	static volatile uint64_t x664 = UINT64_MAX;
	volatile int32_t t151 = 109737;

    t151 = (x661==(x662-(x663/x664)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x665 = -1LL;
	int32_t x666 = 621;
	volatile uint64_t x667 = 2053LLU;
	int16_t x668 = INT16_MIN;
	int32_t t152 = -104603;

    t152 = (x665==(x666-(x667/x668)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x669 = INT8_MIN;
	int64_t x670 = 704LL;
	volatile int64_t x671 = INT64_MAX;
	int16_t x672 = 1;
	static volatile int32_t t153 = 1;

    t153 = (x669==(x670-(x671/x672)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x673 = 19U;
	static volatile int8_t x674 = 3;
	uint8_t x675 = 5U;
	uint16_t x676 = 254U;
	int32_t t154 = -59;

    t154 = (x673==(x674-(x675/x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;
	int64_t x680 = -61060939120246587LL;
	volatile int32_t t155 = -15208;

    t155 = (x677==(x678-(x679/x680)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x681 = INT64_MIN;
	static int64_t x682 = -209727188558897LL;
	int32_t t156 = -4455;

    t156 = (x681==(x682-(x683/x684)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x689 = 171327;
	static volatile int64_t x690 = INT64_MIN;
	int8_t x691 = -1;
	volatile uint64_t x692 = 405077046812013LLU;
	int32_t t157 = -3943425;

    t157 = (x689==(x690-(x691/x692)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x695 = INT8_MIN;
	volatile int32_t x696 = 56013898;
	volatile int32_t t158 = 2217782;

    t158 = (x693==(x694-(x695/x696)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x697 = UINT32_MAX;
	volatile int8_t x698 = 0;
	static int32_t x699 = -1;
	int8_t x700 = -1;
	int32_t t159 = 304055122;

    t159 = (x697==(x698-(x699/x700)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x701 = INT64_MIN;
	volatile int32_t x703 = INT32_MIN;
	uint64_t x704 = 102609743933LLU;
	volatile int32_t t160 = 22;

    t160 = (x701==(x702-(x703/x704)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x705 = INT32_MIN;
	int32_t x707 = 80908481;
	int32_t x708 = INT32_MIN;
	int32_t t161 = -1098;

    t161 = (x705==(x706-(x707/x708)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x709 = -125;
	int8_t x712 = INT8_MAX;
	volatile int32_t t162 = 8007058;

    t162 = (x709==(x710-(x711/x712)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x713 = 54U;
	uint8_t x715 = 1U;
	uint8_t x716 = UINT8_MAX;

    t163 = (x713==(x714-(x715/x716)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x717 = 11094LLU;
	int64_t x718 = INT64_MAX;
	static volatile int64_t x720 = INT64_MAX;
	volatile int32_t t164 = 1299460;

    t164 = (x717==(x718-(x719/x720)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x721 = -20;
	uint64_t x722 = 6777871338LLU;

    t165 = (x721==(x722-(x723/x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x737 = INT32_MIN;
	int64_t x738 = -10234133402210204LL;
	int64_t x739 = INT64_MIN;
	static int16_t x740 = INT16_MIN;
	int32_t t166 = -244;

    t166 = (x737==(x738-(x739/x740)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x742 = 42U;
	int8_t x743 = INT8_MIN;
	uint32_t x744 = 3U;

    t167 = (x741==(x742-(x743/x744)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x745 = -17;
	static uint8_t x746 = UINT8_MAX;
	volatile int8_t x747 = -1;
	int16_t x748 = -1;
	static volatile int32_t t168 = 133399820;

    t168 = (x745==(x746-(x747/x748)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x749 = 11U;
	uint32_t x750 = 95U;
	int16_t x751 = INT16_MAX;
	static int8_t x752 = -1;
	volatile int32_t t169 = 38898;

    t169 = (x749==(x750-(x751/x752)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x753 = 65354891480300717LLU;
	volatile int8_t x755 = -45;
	static int64_t x756 = INT64_MAX;
	static int32_t t170 = 2747040;

    t170 = (x753==(x754-(x755/x756)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x758 = 11571U;
	int8_t x759 = -1;

    t171 = (x757==(x758-(x759/x760)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x761 = INT8_MIN;
	static uint8_t x763 = 4U;
	int16_t x764 = INT16_MIN;

    t172 = (x761==(x762-(x763/x764)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x766 = -1;
	int32_t x767 = -1;
	volatile uint16_t x768 = UINT16_MAX;
	volatile int32_t t173 = 64682345;

    t173 = (x765==(x766-(x767/x768)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x769 = -1649944429329137683LL;
	uint8_t x770 = 28U;
	int8_t x771 = -1;
	volatile int32_t t174 = 96875;

    t174 = (x769==(x770-(x771/x772)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x773 = 150368LL;
	uint32_t x774 = 1062937U;
	int32_t t175 = 302;

    t175 = (x773==(x774-(x775/x776)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x777 = INT8_MAX;
	uint32_t x778 = 60U;
	uint64_t x779 = 11450894890214757LLU;
	uint8_t x780 = 13U;
	int32_t t176 = -202;

    t176 = (x777==(x778-(x779/x780)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x781 = INT8_MIN;
	volatile int32_t x782 = INT32_MIN;
	int32_t x783 = 36;
	int32_t t177 = 184;

    t177 = (x781==(x782-(x783/x784)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x786 = INT64_MAX;
	int32_t x787 = INT32_MAX;
	uint64_t x788 = UINT64_MAX;
	volatile int32_t t178 = 2;

    t178 = (x785==(x786-(x787/x788)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x789 = INT32_MIN;
	int64_t x790 = INT64_MIN;
	volatile int8_t x791 = 30;
	int16_t x792 = -4;
	int32_t t179 = 448074;

    t179 = (x789==(x790-(x791/x792)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x794 = -1;
	int8_t x796 = -1;
	int32_t t180 = 1051019;

    t180 = (x793==(x794-(x795/x796)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x797 = INT64_MIN;
	static uint8_t x798 = 17U;
	uint32_t x799 = 660U;
	uint8_t x800 = UINT8_MAX;
	volatile int32_t t181 = -314850;

    t181 = (x797==(x798-(x799/x800)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x801 = INT8_MAX;
	int64_t x802 = 110884055578442LL;
	int64_t x803 = INT64_MAX;
	int64_t x804 = INT64_MIN;
	int32_t t182 = -261924540;

    t182 = (x801==(x802-(x803/x804)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x805 = 482869;
	volatile int8_t x806 = -1;
	static volatile int32_t t183 = -21;

    t183 = (x805==(x806-(x807/x808)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x809 = 3305U;
	uint8_t x810 = 61U;
	volatile uint64_t x811 = UINT64_MAX;
	uint8_t x812 = UINT8_MAX;
	int32_t t184 = 15;

    t184 = (x809==(x810-(x811/x812)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x813 = 20075U;
	uint16_t x814 = UINT16_MAX;
	int32_t x815 = INT32_MIN;
	uint16_t x816 = 6U;
	int32_t t185 = -8;

    t185 = (x813==(x814-(x815/x816)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x817 = -429703979;
	uint64_t x818 = 6135849614128LLU;
	static int32_t x819 = INT32_MAX;
	volatile uint8_t x820 = 11U;
	int32_t t186 = -109;

    t186 = (x817==(x818-(x819/x820)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x821 = INT16_MIN;
	static int64_t x822 = INT64_MIN;
	int16_t x824 = INT16_MIN;
	static int32_t t187 = 93166232;

    t187 = (x821==(x822-(x823/x824)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x825 = INT16_MAX;
	volatile int32_t x827 = -10;
	volatile int8_t x828 = INT8_MIN;
	volatile int32_t t188 = -1;

    t188 = (x825==(x826-(x827/x828)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x829 = INT8_MIN;
	uint32_t x830 = 1146978U;
	static volatile int32_t x832 = -130987;
	int32_t t189 = 2;

    t189 = (x829==(x830-(x831/x832)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x833 = -1;
	static volatile int32_t x834 = INT32_MAX;
	int8_t x836 = INT8_MIN;
	int32_t t190 = -553429265;

    t190 = (x833==(x834-(x835/x836)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x837 = -1;
	volatile int8_t x839 = -1;
	uint8_t x840 = 71U;
	int32_t t191 = 30471063;

    t191 = (x837==(x838-(x839/x840)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x842 = INT16_MIN;
	volatile int16_t x844 = 11258;
	int32_t t192 = 16;

    t192 = (x841==(x842-(x843/x844)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x846 = 5;
	int16_t x847 = INT16_MIN;
	int8_t x848 = -1;
	volatile int32_t t193 = -2031;

    t193 = (x845==(x846-(x847/x848)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x849 = INT8_MIN;
	int16_t x850 = -13;
	static int64_t x852 = INT64_MAX;
	int32_t t194 = 65001;

    t194 = (x849==(x850-(x851/x852)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x853 = 65654;
	volatile int8_t x854 = -1;
	static int64_t x855 = -1LL;
	int32_t x856 = 2054959;
	int32_t t195 = -25541365;

    t195 = (x853==(x854-(x855/x856)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x857 = UINT8_MAX;
	volatile int8_t x858 = INT8_MAX;
	int8_t x859 = INT8_MIN;
	int32_t x860 = INT32_MIN;
	volatile int32_t t196 = -49751;

    t196 = (x857==(x858-(x859/x860)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x861 = 3U;
	int16_t x862 = -1;
	int16_t x863 = -4;
	volatile int8_t x864 = 21;
	volatile int32_t t197 = -119;

    t197 = (x861==(x862-(x863/x864)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x865 = 236848;
	int32_t x866 = INT32_MAX;
	int8_t x867 = INT8_MIN;
	uint16_t x868 = 6913U;
	static volatile int32_t t198 = -1406;

    t198 = (x865==(x866-(x867/x868)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x869 = UINT64_MAX;
	int8_t x870 = 63;
	uint32_t x871 = UINT32_MAX;
	uint64_t x872 = 210LLU;

    t199 = (x869==(x870-(x871/x872)));

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

