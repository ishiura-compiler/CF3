
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

uint8_t x15 = UINT8_MAX;
int16_t x18 = INT16_MAX;
static uint16_t x21 = 20570U;
uint16_t x30 = 0U;
volatile int32_t t5 = 16;
int64_t x33 = INT64_MIN;
int8_t x36 = INT8_MIN;
static int32_t x40 = -520644419;
int32_t x45 = INT32_MIN;
int64_t x46 = 75346LL;
int64_t x48 = -1LL;
volatile int8_t x52 = -1;
uint16_t x59 = UINT16_MAX;
static int64_t x63 = -97LL;
uint8_t x67 = 0U;
static uint16_t x72 = UINT16_MAX;
int16_t x78 = INT16_MAX;
int8_t x94 = 4;
uint8_t x99 = UINT8_MAX;
int16_t x109 = INT16_MIN;
volatile int64_t t24 = -10797163009257347LL;
int32_t x117 = INT32_MAX;
volatile int32_t t27 = 23304;
volatile int8_t x132 = -3;
uint64_t x140 = 793425951982LLU;
int8_t x142 = INT8_MIN;
int32_t x149 = 59;
int16_t x156 = -135;
static int16_t x161 = -1;
static volatile int32_t x162 = INT32_MAX;
int32_t x178 = -1;
int16_t x179 = -1201;
volatile uint16_t x184 = 1996U;
volatile int32_t x185 = 2;
volatile uint32_t t42 = 68453U;
int8_t x189 = INT8_MAX;
volatile int32_t t43 = -4091777;
int32_t x196 = 342119;
volatile uint64_t t46 = 515629344779949445LLU;
int8_t x215 = -1;
volatile int64_t x216 = -252247188963LL;
volatile int32_t t48 = 2199174;
int8_t x231 = INT8_MAX;
static int16_t x234 = 15;
int64_t x235 = INT64_MIN;
uint8_t x236 = 5U;
volatile int64_t x238 = INT64_MIN;
int8_t x244 = INT8_MAX;
volatile int32_t t52 = 0;
uint16_t x257 = 86U;
uint32_t x259 = 171U;
uint8_t x277 = UINT8_MAX;
int64_t x280 = -1LL;
volatile int64_t t59 = 8266840046695LL;
volatile int64_t t60 = -146572975LL;
uint64_t x286 = UINT64_MAX;
volatile int32_t t61 = 137948;
int64_t x302 = 6LL;
int32_t x309 = INT32_MIN;
int32_t t67 = 431513932;
int16_t x314 = -1;
uint64_t x315 = 91776561LLU;
volatile int16_t x321 = -5;
int64_t x322 = 358094611964453419LL;
int32_t t70 = -1;
int32_t x337 = 1;
static int32_t x338 = -1;
static uint8_t x345 = UINT8_MAX;
static uint64_t x348 = 7633261766LLU;
uint64_t x350 = 342214124741394651LLU;
int64_t x358 = -1LL;
int16_t x365 = -10;
int32_t t79 = -3;
static uint32_t x369 = 15825484U;
static int64_t t81 = -4LL;
int32_t x379 = -1;
int8_t x389 = INT8_MIN;
uint16_t x392 = 8627U;
int32_t t86 = -863708;
uint32_t x398 = UINT32_MAX;
uint64_t x404 = 634353092586686LLU;
uint32_t x414 = 8U;
volatile uint8_t x416 = 20U;
uint64_t x432 = 37173085731467LLU;
int8_t x435 = 1;
uint8_t x439 = 7U;
uint32_t t98 = 39U;
volatile int32_t x453 = -12552927;
int16_t x454 = -1;
static int64_t x466 = INT64_MAX;
static int32_t x472 = 2784169;
volatile int32_t t102 = 29;
uint16_t x476 = UINT16_MAX;
int8_t x477 = -1;
static int64_t x485 = -1LL;
int16_t x487 = -95;
int64_t x495 = 2236404347248LL;
static int32_t x499 = -44570;
static volatile int16_t x500 = -1;
int8_t x503 = -1;
uint32_t x510 = 31287100U;
static uint64_t x516 = UINT64_MAX;
uint64_t x527 = 2492LLU;
uint64_t t113 = 373826LLU;
uint32_t x532 = UINT32_MAX;
int8_t x539 = INT8_MAX;
int64_t x541 = -1LL;
volatile int64_t x544 = INT64_MIN;
uint32_t x546 = 14542U;
volatile int16_t x549 = -1066;
int32_t x550 = 98425061;
uint32_t x557 = 2U;
volatile int64_t t123 = -2948216471LL;
int8_t x572 = INT8_MAX;
volatile int32_t t125 = 48776471;
int8_t x577 = 20;
int64_t t126 = 205LL;
int64_t x589 = 671899411LL;
int16_t x600 = INT16_MIN;
uint16_t x602 = 789U;
volatile uint32_t t131 = 0U;
volatile int8_t x605 = -22;
int8_t x621 = INT8_MIN;
uint16_t x623 = UINT16_MAX;
static uint8_t x625 = 28U;
volatile uint16_t x633 = 16U;
uint32_t x640 = 4919572U;
int64_t x642 = 325862924528606394LL;
int16_t x644 = INT16_MIN;
static uint8_t x650 = 2U;
uint32_t x651 = 1177170U;
static int32_t x654 = INT32_MIN;
uint32_t x663 = 23787U;
static int32_t x664 = INT32_MIN;
int8_t x665 = -14;
uint64_t x666 = 14958488LLU;
volatile int32_t t144 = 27426333;
volatile uint64_t x671 = 1851999852010LLU;
int32_t x673 = INT32_MAX;
uint64_t x675 = 3LLU;
int16_t x681 = -2505;
static volatile int8_t x689 = -1;
volatile int16_t x691 = 3316;
int32_t x692 = INT32_MIN;
int8_t x693 = 1;
int32_t x696 = INT32_MIN;
static uint16_t x697 = UINT16_MAX;
volatile int32_t t152 = 669;
uint32_t x705 = 1143082U;
static int32_t t153 = 13675740;
static volatile uint64_t x719 = 1737004974419286737LLU;
static uint64_t t156 = 12205106LLU;
volatile int16_t x729 = INT16_MIN;
uint32_t x735 = 1134U;
int64_t x736 = 14419818507433602LL;
uint64_t x740 = 5107558338036208LLU;
volatile int64_t x741 = -212440323LL;
int64_t x744 = 28252587516LL;
int8_t x747 = -1;
int32_t x748 = 56;
volatile int16_t x755 = 48;
static volatile int64_t x756 = INT64_MIN;
int32_t x760 = -188;
int8_t x767 = 1;
volatile int8_t x771 = INT8_MAX;
volatile int8_t x781 = -39;
static volatile int8_t x785 = 9;
static int32_t t170 = 3876591;
static int64_t x797 = -56LL;
volatile int8_t x800 = -1;
int64_t x802 = 0LL;
volatile int64_t t173 = 3922457550564179LL;
uint64_t x817 = 5977045LLU;
int32_t t176 = -3;
int8_t x821 = INT8_MIN;
static int32_t x822 = -1;
static volatile uint8_t x823 = 0U;
uint64_t t178 = 921565LLU;
uint64_t x845 = 91LLU;
int16_t x847 = INT16_MIN;
static int8_t x856 = INT8_MAX;
int64_t x860 = 126541167175923955LL;
volatile uint32_t t185 = 2007058584U;
int8_t x881 = -1;
volatile int32_t x882 = -920694537;
volatile uint64_t x884 = UINT64_MAX;
uint32_t x897 = UINT32_MAX;
int16_t x899 = -3;
int32_t t192 = -1;
int8_t x905 = 6;
uint8_t x910 = 3U;
uint32_t x916 = 210036375U;
int8_t x924 = INT8_MIN;
int32_t t196 = -30419;
static volatile int16_t x930 = INT16_MIN;
volatile int32_t x939 = -1;
int32_t t199 = 810587549;


void f0(void) {
    	int32_t x9 = INT32_MIN;
	int8_t x10 = 1;
	volatile int32_t x11 = -1;
	int8_t x12 = INT8_MIN;
	int32_t t0 = 1;

    t0 = ((x9>x10)%(x11+x12));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x13 = -1;
	uint32_t x14 = UINT32_MAX;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t1 = 205;

    t1 = ((x13>x14)%(x15+x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x17 = 1;
	uint16_t x19 = 255U;
	volatile int32_t x20 = INT32_MIN;
	int32_t t2 = 1;

    t2 = ((x17>x18)%(x19+x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 8867947424941474LL;
	int64_t t3 = -48LL;

    t3 = ((x21>x22)%(x23+x24));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = 2977U;
	static uint64_t x26 = UINT64_MAX;
	volatile uint64_t x27 = 133580909489LLU;
	static int32_t x28 = INT32_MAX;
	volatile uint64_t t4 = 21014541098068LLU;

    t4 = ((x25>x26)%(x27+x28));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MAX;
	int32_t x31 = -934955227;
	volatile int32_t x32 = -110;

    t5 = ((x29>x30)%(x31+x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x34 = 4U;
	volatile int16_t x35 = INT16_MIN;
	volatile int32_t t6 = -1;

    t6 = ((x33>x34)%(x35+x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = 2424617350229379608LL;
	uint32_t x38 = 11U;
	static volatile uint32_t x39 = 211U;
	uint32_t t7 = 3197821U;

    t7 = ((x37>x38)%(x39+x40));

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x47 = UINT16_MAX;
	int64_t t8 = -40767024684LL;

    t8 = ((x45>x46)%(x47+x48));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = INT16_MIN;
	static volatile int8_t x50 = INT8_MAX;
	uint8_t x51 = 0U;
	int32_t t9 = -853;

    t9 = ((x49>x50)%(x51+x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = 2U;
	volatile uint8_t x54 = 31U;
	static uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MIN;
	volatile uint64_t t10 = 84350026LLU;

    t10 = ((x53>x54)%(x55+x56));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	static volatile uint64_t x60 = 695024671846540853LLU;
	uint64_t t11 = 4441677632747184357LLU;

    t11 = ((x57>x58)%(x59+x60));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x61 = 1390352122553832LL;
	uint16_t x62 = 3U;
	int8_t x64 = 0;
	static int64_t t12 = -4219LL;

    t12 = ((x61>x62)%(x63+x64));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	uint16_t x68 = 5618U;
	static int32_t t13 = 1;

    t13 = ((x65>x66)%(x67+x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = UINT32_MAX;
	volatile int16_t x70 = -6;
	int64_t x71 = -1LL;
	int64_t t14 = 1118918596810503412LL;

    t14 = ((x69>x70)%(x71+x72));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = 0U;
	static int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint64_t t15 = 1582917381636392LLU;

    t15 = ((x73>x74)%(x75+x76));

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	int8_t x79 = INT8_MIN;
	int16_t x80 = -434;
	static int32_t t16 = -23;

    t16 = ((x77>x78)%(x79+x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = INT64_MIN;
	volatile int32_t x83 = INT32_MAX;
	uint32_t x84 = 1026720107U;
	volatile uint32_t t17 = 4695U;

    t17 = ((x81>x82)%(x83+x84));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x85 = -662593867LL;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	static int64_t t18 = 787127LL;

    t18 = ((x85>x86)%(x87+x88));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x89 = 0U;
	volatile int64_t x90 = INT64_MAX;
	int32_t x91 = -3342;
	volatile int16_t x92 = -301;
	volatile int32_t t19 = -888552;

    t19 = ((x89>x90)%(x91+x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 1LLU;
	int64_t x95 = -7020715470347561LL;
	int64_t x96 = -57361905LL;
	volatile int64_t t20 = -370LL;

    t20 = ((x93>x94)%(x95+x96));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = 6449957493947LL;
	static int16_t x98 = -74;
	volatile uint32_t x100 = 5U;
	volatile uint32_t t21 = 2U;

    t21 = ((x97>x98)%(x99+x100));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 7813LL;
	volatile int64_t x102 = 131723604LL;
	volatile int16_t x103 = -147;
	uint8_t x104 = 82U;
	int32_t t22 = 43;

    t22 = ((x101>x102)%(x103+x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x105 = -3;
	volatile int64_t x106 = INT64_MIN;
	int64_t x107 = -614694LL;
	int32_t x108 = INT32_MIN;
	int64_t t23 = -3733651217444661LL;

    t23 = ((x105>x106)%(x107+x108));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x110 = INT8_MAX;
	int64_t x111 = -72202604024216239LL;
	int32_t x112 = INT32_MAX;

    t24 = ((x109>x110)%(x111+x112));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -698;
	volatile int64_t x114 = -621878640925LL;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MAX;
	int32_t t25 = 14173;

    t25 = ((x113>x114)%(x115+x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x118 = 2979070768039428930LL;
	int16_t x119 = 1;
	static int64_t x120 = 5213648LL;
	volatile int64_t t26 = 7672201LL;

    t26 = ((x117>x118)%(x119+x120));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 8020019621501369LLU;
	int32_t x122 = -1;
	int32_t x123 = -1;
	int8_t x124 = INT8_MIN;

    t27 = ((x121>x122)%(x123+x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x126 = 0;
	uint16_t x127 = 4U;
	int32_t x128 = 2175331;
	int32_t t28 = -3;

    t28 = ((x125>x126)%(x127+x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x129 = INT64_MIN;
	uint8_t x130 = 89U;
	static uint8_t x131 = 26U;
	int32_t t29 = 62346;

    t29 = ((x129>x130)%(x131+x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = 1;
	volatile uint64_t t30 = 58114876003470227LLU;

    t30 = ((x137>x138)%(x139+x140));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x143 = -1619188;
	uint8_t x144 = 4U;
	int32_t t31 = -7541107;

    t31 = ((x141>x142)%(x143+x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x145 = INT16_MAX;
	volatile int8_t x146 = -1;
	int16_t x147 = -10;
	volatile uint32_t x148 = UINT32_MAX;
	uint32_t t32 = 799576U;

    t32 = ((x145>x146)%(x147+x148));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x150 = INT16_MIN;
	volatile uint8_t x151 = 10U;
	uint16_t x152 = 2590U;
	static int32_t t33 = 13023899;

    t33 = ((x149>x150)%(x151+x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = 1;
	volatile int32_t t34 = -1;

    t34 = ((x153>x154)%(x155+x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x157 = 1364;
	uint8_t x158 = 4U;
	volatile uint32_t x159 = 6633U;
	static uint8_t x160 = UINT8_MAX;
	uint32_t t35 = 7991402U;

    t35 = ((x157>x158)%(x159+x160));

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = -122;
	int32_t t36 = -30;

    t36 = ((x161>x162)%(x163+x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = -77062770317LL;
	volatile int64_t x168 = 177898509161938LL;
	int64_t t37 = 561334756LL;

    t37 = ((x165>x166)%(x167+x168));

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MAX;
	static volatile int64_t x172 = -1LL;
	int64_t t38 = 493920641173505LL;

    t38 = ((x169>x170)%(x171+x172));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = INT8_MAX;
	static int8_t x174 = INT8_MIN;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t39 = 15116062088593957LLU;

    t39 = ((x173>x174)%(x175+x176));

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = 9;
	static uint8_t x180 = 60U;
	volatile int32_t t40 = -11796;

    t40 = ((x177>x178)%(x179+x180));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x181 = -17;
	int8_t x182 = INT8_MIN;
	static volatile int64_t x183 = -104LL;
	static volatile int64_t t41 = -3556481LL;

    t41 = ((x181>x182)%(x183+x184));

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x186 = INT64_MAX;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = UINT16_MAX;

    t42 = ((x185>x186)%(x187+x188));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x190 = 51U;
	static int8_t x191 = 6;
	int16_t x192 = -1;

    t43 = ((x189>x190)%(x191+x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x193 = 25U;
	uint8_t x194 = 0U;
	int16_t x195 = INT16_MAX;
	volatile int32_t t44 = -1289856;

    t44 = ((x193>x194)%(x195+x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x201 = 1U;
	volatile uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = 0;
	volatile uint32_t t45 = 646676U;

    t45 = ((x201>x202)%(x203+x204));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x205 = UINT64_MAX;
	static int8_t x206 = -1;
	uint64_t x207 = 3545LLU;
	uint8_t x208 = 1U;

    t46 = ((x205>x206)%(x207+x208));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile uint64_t x214 = 1589662954651055214LLU;
	int64_t t47 = 22LL;

    t47 = ((x213>x214)%(x215+x216));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = INT16_MAX;
	volatile int16_t x227 = INT16_MAX;
	uint16_t x228 = 1450U;

    t48 = ((x225>x226)%(x227+x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x229 = 113677U;
	uint64_t x230 = 21598711846LLU;
	int32_t x232 = 845568;
	volatile int32_t t49 = -3273754;

    t49 = ((x229>x230)%(x231+x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x233 = 668U;
	int64_t t50 = -764LL;

    t50 = ((x233>x234)%(x235+x236));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = INT64_MIN;
	uint64_t x239 = UINT64_MAX;
	static int8_t x240 = 2;
	volatile uint64_t t51 = 6093739844286790339LLU;

    t51 = ((x237>x238)%(x239+x240));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x241 = 4181U;
	volatile int32_t x242 = INT32_MIN;
	volatile int16_t x243 = 65;

    t52 = ((x241>x242)%(x243+x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x245 = 1812U;
	uint16_t x246 = 1705U;
	int32_t x247 = INT32_MIN;
	int8_t x248 = 31;
	volatile int32_t t53 = -41725685;

    t53 = ((x245>x246)%(x247+x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x249 = 15761U;
	static uint32_t x250 = UINT32_MAX;
	volatile int64_t x251 = INT64_MIN;
	int32_t x252 = 4083;
	static volatile int64_t t54 = 1LL;

    t54 = ((x249>x250)%(x251+x252));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x258 = INT8_MIN;
	int64_t x260 = 191007125297326214LL;
	int64_t t55 = 49730018719606LL;

    t55 = ((x257>x258)%(x259+x260));

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x261 = INT16_MIN;
	uint16_t x262 = 6689U;
	int32_t x263 = INT32_MAX;
	int32_t x264 = -19;
	static int32_t t56 = -3269391;

    t56 = ((x261>x262)%(x263+x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x265 = 30044U;
	uint16_t x266 = 160U;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -1;
	volatile int32_t t57 = -100995;

    t57 = ((x265>x266)%(x267+x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x269 = -1;
	int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 584LLU;
	volatile uint64_t t58 = 593173059497LLU;

    t58 = ((x269>x270)%(x271+x272));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = INT16_MIN;
	static volatile int8_t x279 = -1;

    t59 = ((x277>x278)%(x279+x280));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x281 = -1LL;
	volatile uint64_t x282 = 57333921884113799LLU;
	static int64_t x283 = -44885458LL;
	uint32_t x284 = 14383U;

    t60 = ((x281>x282)%(x283+x284));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x285 = UINT32_MAX;
	int16_t x287 = -1;
	volatile int32_t x288 = INT32_MAX;

    t61 = ((x285>x286)%(x287+x288));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = -10918;
	int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	int32_t t62 = 655;

    t62 = ((x289>x290)%(x291+x292));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x293 = 12929U;
	int16_t x294 = 7;
	int32_t x295 = -1;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t63 = -376315;

    t63 = ((x293>x294)%(x295+x296));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x297 = 15611603LL;
	uint16_t x298 = 30790U;
	int8_t x299 = -1;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t64 = -172;

    t64 = ((x297>x298)%(x299+x300));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x303 = -1;
	static int8_t x304 = INT8_MAX;
	volatile int32_t t65 = 418861577;

    t65 = ((x301>x302)%(x303+x304));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = 1271031181051LL;
	volatile uint16_t x306 = 95U;
	int16_t x307 = 13;
	volatile int8_t x308 = 4;
	volatile int32_t t66 = 134705;

    t66 = ((x305>x306)%(x307+x308));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x310 = -1LL;
	volatile int8_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;

    t67 = ((x309>x310)%(x311+x312));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x313 = INT16_MAX;
	uint64_t x316 = 2580946742LLU;
	volatile uint64_t t68 = 1857323022000904940LLU;

    t68 = ((x313>x314)%(x315+x316));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = INT32_MAX;
	int16_t x319 = -9;
	static int64_t x320 = -1LL;
	static int64_t t69 = 1190913490035736792LL;

    t69 = ((x317>x318)%(x319+x320));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;

    t70 = ((x321>x322)%(x323+x324));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = -1;
	volatile int16_t x326 = -1;
	int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	int32_t t71 = 77;

    t71 = ((x325>x326)%(x327+x328));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x339 = UINT8_MAX;
	int8_t x340 = 5;
	static int32_t t72 = 0;

    t72 = ((x337>x338)%(x339+x340));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = INT8_MIN;
	uint16_t x342 = 10U;
	static volatile int16_t x343 = -1;
	volatile uint64_t x344 = 103547174LLU;
	volatile uint64_t t73 = 273625390647711152LLU;

    t73 = ((x341>x342)%(x343+x344));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x346 = INT16_MAX;
	volatile int8_t x347 = INT8_MAX;
	uint64_t t74 = 471886LLU;

    t74 = ((x345>x346)%(x347+x348));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x349 = 15;
	int16_t x351 = 3;
	uint32_t x352 = 46262U;
	uint32_t t75 = 26U;

    t75 = ((x349>x350)%(x351+x352));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x353 = 18064014U;
	int8_t x354 = -1;
	static uint16_t x355 = 10U;
	volatile uint64_t x356 = UINT64_MAX;
	volatile uint64_t t76 = 1100342512844052166LLU;

    t76 = ((x353>x354)%(x355+x356));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x357 = INT64_MIN;
	static int16_t x359 = -1;
	static int32_t x360 = -1;
	static volatile int32_t t77 = -214658;

    t77 = ((x357>x358)%(x359+x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x361 = UINT16_MAX;
	int8_t x362 = -4;
	volatile int32_t x363 = -61;
	int16_t x364 = -1;
	int32_t t78 = -4031;

    t78 = ((x361>x362)%(x363+x364));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x366 = 449089U;
	int32_t x367 = -119;
	int32_t x368 = -1;

    t79 = ((x365>x366)%(x367+x368));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x370 = 207;
	int64_t x371 = 33856986540317LL;
	uint16_t x372 = UINT16_MAX;
	int64_t t80 = -71554781515LL;

    t80 = ((x369>x370)%(x371+x372));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x373 = UINT16_MAX;
	volatile int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	static int16_t x376 = INT16_MIN;

    t81 = ((x373>x374)%(x375+x376));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x377 = INT16_MIN;
	int32_t x378 = 29108101;
	int64_t x380 = -590257356938LL;
	static volatile int64_t t82 = 22843218719LL;

    t82 = ((x377>x378)%(x379+x380));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = -1;
	static uint64_t x382 = 1LLU;
	int16_t x383 = -1;
	int8_t x384 = -1;
	static volatile int32_t t83 = 0;

    t83 = ((x381>x382)%(x383+x384));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x385 = INT16_MAX;
	static int64_t x386 = -1LL;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t84 = -25122632;

    t84 = ((x385>x386)%(x387+x388));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x390 = INT32_MIN;
	int32_t x391 = -1;
	static volatile int32_t t85 = -1;

    t85 = ((x389>x390)%(x391+x392));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = -1;
	int64_t x394 = -1LL;
	int32_t x395 = -13872;
	int16_t x396 = 2;

    t86 = ((x393>x394)%(x395+x396));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x397 = INT64_MIN;
	uint64_t x399 = 8108LLU;
	static int16_t x400 = INT16_MIN;
	uint64_t t87 = 7301635009LLU;

    t87 = ((x397>x398)%(x399+x400));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x401 = -1LL;
	int16_t x402 = -1;
	static int8_t x403 = INT8_MAX;
	volatile uint64_t t88 = 6406612518350LLU;

    t88 = ((x401>x402)%(x403+x404));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x405 = 6174U;
	int8_t x406 = INT8_MAX;
	uint32_t x407 = UINT32_MAX;
	int16_t x408 = -108;
	static volatile uint32_t t89 = 224448993U;

    t89 = ((x405>x406)%(x407+x408));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MIN;
	static int32_t x411 = -4952;
	int64_t x412 = -1LL;
	volatile int64_t t90 = -61470833877LL;

    t90 = ((x409>x410)%(x411+x412));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x413 = INT64_MAX;
	volatile int64_t x415 = INT64_MIN;
	static int64_t t91 = -135306088582LL;

    t91 = ((x413>x414)%(x415+x416));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = INT16_MAX;
	volatile int64_t x418 = -1LL;
	uint32_t x419 = 198998950U;
	int32_t x420 = INT32_MIN;
	static volatile uint32_t t92 = 670029U;

    t92 = ((x417>x418)%(x419+x420));

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x421 = -1;
	int8_t x422 = -1;
	volatile int16_t x423 = 14770;
	uint64_t x424 = UINT64_MAX;
	uint64_t t93 = 214320440225296739LLU;

    t93 = ((x421>x422)%(x423+x424));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x425 = -1;
	uint64_t x426 = 1823LLU;
	volatile uint16_t x427 = UINT16_MAX;
	int64_t x428 = -1LL;
	int64_t t94 = -60059488313LL;

    t94 = ((x425>x426)%(x427+x428));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x429 = 1;
	static volatile int64_t x430 = 2272190868LL;
	static uint16_t x431 = UINT16_MAX;
	volatile uint64_t t95 = 4466802306LLU;

    t95 = ((x429>x430)%(x431+x432));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = INT16_MIN;
	static int8_t x434 = -62;
	volatile int8_t x436 = INT8_MAX;
	volatile int32_t t96 = 261438659;

    t96 = ((x433>x434)%(x435+x436));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x437 = 391U;
	int8_t x438 = INT8_MAX;
	int8_t x440 = -1;
	int32_t t97 = -1359526;

    t97 = ((x437>x438)%(x439+x440));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x441 = 4976;
	uint16_t x442 = UINT16_MAX;
	int8_t x443 = INT8_MAX;
	static uint32_t x444 = 72U;

    t98 = ((x441>x442)%(x443+x444));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x449 = INT32_MAX;
	static int64_t x450 = INT64_MAX;
	int32_t x451 = 1;
	uint8_t x452 = 5U;
	int32_t t99 = 1000;

    t99 = ((x449>x450)%(x451+x452));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x455 = INT32_MIN;
	volatile uint64_t x456 = 11LLU;
	uint64_t t100 = 2646119LLU;

    t100 = ((x453>x454)%(x455+x456));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x465 = INT8_MAX;
	int8_t x467 = 4;
	int64_t x468 = -19LL;
	static int64_t t101 = -1767026336509043662LL;

    t101 = ((x465>x466)%(x467+x468));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x469 = -1;
	uint32_t x470 = 5U;
	int8_t x471 = INT8_MIN;

    t102 = ((x469>x470)%(x471+x472));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	volatile int32_t x474 = -149;
	static uint64_t x475 = 2930LLU;
	volatile uint64_t t103 = 77877LLU;

    t103 = ((x473>x474)%(x475+x476));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x478 = -3LL;
	uint16_t x479 = 2887U;
	int16_t x480 = INT16_MAX;
	static int32_t t104 = 2623892;

    t104 = ((x477>x478)%(x479+x480));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x481 = 51;
	int8_t x482 = INT8_MAX;
	volatile uint16_t x483 = 46U;
	uint16_t x484 = 21720U;
	volatile int32_t t105 = -179279;

    t105 = ((x481>x482)%(x483+x484));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x486 = 1LLU;
	int16_t x488 = -1;
	int32_t t106 = -1;

    t106 = ((x485>x486)%(x487+x488));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = 6899628216237697LL;
	static int32_t x490 = INT32_MAX;
	uint16_t x491 = 2U;
	static int8_t x492 = -1;
	int32_t t107 = -68297775;

    t107 = ((x489>x490)%(x491+x492));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x493 = INT32_MAX;
	uint8_t x494 = 19U;
	volatile int16_t x496 = INT16_MIN;
	volatile int64_t t108 = 38278632978976LL;

    t108 = ((x493>x494)%(x495+x496));

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x497 = 25;
	volatile int64_t x498 = INT64_MIN;
	int32_t t109 = -214038;

    t109 = ((x497>x498)%(x499+x500));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int16_t x502 = INT16_MIN;
	int32_t x504 = 381563;
	int32_t t110 = 0;

    t110 = ((x501>x502)%(x503+x504));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x509 = UINT32_MAX;
	uint16_t x511 = 616U;
	int16_t x512 = 2760;
	int32_t t111 = -120;

    t111 = ((x509>x510)%(x511+x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x513 = 2201U;
	static uint64_t x514 = 758363567176183LLU;
	static uint8_t x515 = UINT8_MAX;
	uint64_t t112 = 612618888LLU;

    t112 = ((x513>x514)%(x515+x516));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x525 = UINT32_MAX;
	int32_t x526 = INT32_MAX;
	int32_t x528 = 25;

    t113 = ((x525>x526)%(x527+x528));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x529 = -252572LL;
	static int16_t x530 = -1;
	int32_t x531 = INT32_MAX;
	volatile uint32_t t114 = 6373U;

    t114 = ((x529>x530)%(x531+x532));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = INT32_MAX;
	volatile int32_t x534 = 20005009;
	volatile int32_t x535 = INT32_MIN;
	volatile uint16_t x536 = 460U;
	static volatile int32_t t115 = -5827172;

    t115 = ((x533>x534)%(x535+x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x537 = 1U;
	int64_t x538 = INT64_MIN;
	volatile int64_t x540 = -1838559999064387LL;
	volatile int64_t t116 = -237122940738682258LL;

    t116 = ((x537>x538)%(x539+x540));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x542 = -57;
	int32_t x543 = INT32_MAX;
	volatile int64_t t117 = -6584484026LL;

    t117 = ((x541>x542)%(x543+x544));

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x545 = 4;
	uint16_t x547 = 5987U;
	int16_t x548 = INT16_MIN;
	static int32_t t118 = -1;

    t118 = ((x545>x546)%(x547+x548));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x551 = 800;
	uint16_t x552 = 4U;
	static volatile int32_t t119 = -3452070;

    t119 = ((x549>x550)%(x551+x552));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x553 = -16691734574205LL;
	int64_t x554 = 352370677230940587LL;
	volatile int16_t x555 = -1;
	static volatile uint8_t x556 = 17U;
	int32_t t120 = -4500;

    t120 = ((x553>x554)%(x555+x556));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x558 = UINT64_MAX;
	volatile int32_t x559 = -1;
	int8_t x560 = INT8_MIN;
	volatile int32_t t121 = -21134919;

    t121 = ((x557>x558)%(x559+x560));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = INT16_MIN;
	uint8_t x562 = UINT8_MAX;
	int16_t x563 = 14;
	volatile int16_t x564 = 80;
	int32_t t122 = 2390;

    t122 = ((x561>x562)%(x563+x564));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x565 = 6U;
	int8_t x566 = INT8_MAX;
	static int64_t x567 = -1LL;
	int16_t x568 = INT16_MIN;

    t123 = ((x565>x566)%(x567+x568));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x569 = -1;
	int32_t x570 = INT32_MIN;
	volatile int32_t x571 = 122564892;
	volatile int32_t t124 = 93068;

    t124 = ((x569>x570)%(x571+x572));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x573 = 0U;
	static int8_t x574 = INT8_MIN;
	volatile int8_t x575 = -8;
	int32_t x576 = INT32_MAX;

    t125 = ((x573>x574)%(x575+x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x578 = -1;
	volatile int64_t x579 = INT64_MIN;
	volatile int32_t x580 = 0;

    t126 = ((x577>x578)%(x579+x580));

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x581 = INT32_MAX;
	volatile int64_t x582 = INT64_MAX;
	volatile int32_t x583 = 18511758;
	uint16_t x584 = 3179U;
	volatile int32_t t127 = -417849;

    t127 = ((x581>x582)%(x583+x584));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x585 = INT8_MAX;
	volatile int16_t x586 = -1;
	int16_t x587 = -895;
	uint16_t x588 = 28U;
	static int32_t t128 = 89453;

    t128 = ((x585>x586)%(x587+x588));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x590 = 12U;
	int8_t x591 = 13;
	uint32_t x592 = 383631198U;
	volatile uint32_t t129 = 106U;

    t129 = ((x589>x590)%(x591+x592));

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x597 = -1;
	int8_t x598 = -2;
	static int32_t x599 = -1;
	volatile int32_t t130 = 303;

    t130 = ((x597>x598)%(x599+x600));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x601 = INT64_MIN;
	volatile int32_t x603 = -1;
	uint32_t x604 = 29050711U;

    t131 = ((x601>x602)%(x603+x604));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x606 = -652LL;
	static uint32_t x607 = 742520286U;
	volatile int8_t x608 = INT8_MIN;
	uint32_t t132 = 131U;

    t132 = ((x605>x606)%(x607+x608));

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x609 = 105952076210388455LL;
	uint8_t x610 = UINT8_MAX;
	static int16_t x611 = INT16_MAX;
	volatile int8_t x612 = -1;
	volatile int32_t t133 = 27968;

    t133 = ((x609>x610)%(x611+x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x622 = INT8_MIN;
	static int16_t x624 = -10454;
	int32_t t134 = -185763;

    t134 = ((x621>x622)%(x623+x624));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x626 = 845LLU;
	int8_t x627 = INT8_MIN;
	static int16_t x628 = -77;
	volatile int32_t t135 = -1;

    t135 = ((x625>x626)%(x627+x628));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x629 = -1;
	static int32_t x630 = INT32_MIN;
	volatile int32_t x631 = INT32_MIN;
	volatile int64_t x632 = -1LL;
	int64_t t136 = -1157070047699104291LL;

    t136 = ((x629>x630)%(x631+x632));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x634 = -166;
	uint64_t x635 = 67LLU;
	volatile uint64_t x636 = UINT64_MAX;
	volatile uint64_t t137 = 75346445844746820LLU;

    t137 = ((x633>x634)%(x635+x636));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x637 = -1;
	uint16_t x638 = UINT16_MAX;
	uint8_t x639 = 15U;
	static uint32_t t138 = 4017691U;

    t138 = ((x637>x638)%(x639+x640));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x641 = 35309962LLU;
	int32_t x643 = -1;
	volatile int32_t t139 = 7831787;

    t139 = ((x641>x642)%(x643+x644));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x652 = -121033165242560721LL;
	volatile int64_t t140 = 222LL;

    t140 = ((x649>x650)%(x651+x652));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x653 = 163;
	uint32_t x655 = 32092724U;
	uint64_t x656 = UINT64_MAX;
	uint64_t t141 = 404328407050LLU;

    t141 = ((x653>x654)%(x655+x656));

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x657 = UINT16_MAX;
	int32_t x658 = -1;
	static uint64_t x659 = UINT64_MAX;
	int32_t x660 = -443451;
	uint64_t t142 = 13LLU;

    t142 = ((x657>x658)%(x659+x660));

    if (t142 != 1LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	int16_t x662 = INT16_MAX;
	volatile uint32_t t143 = 26093U;

    t143 = ((x661>x662)%(x663+x664));

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x667 = INT16_MAX;
	uint8_t x668 = UINT8_MAX;

    t144 = ((x665>x666)%(x667+x668));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x669 = 31U;
	int8_t x670 = INT8_MIN;
	uint8_t x672 = 5U;
	uint64_t t145 = 72LLU;

    t145 = ((x669>x670)%(x671+x672));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x674 = 4916294U;
	uint8_t x676 = UINT8_MAX;
	volatile uint64_t t146 = 595782LLU;

    t146 = ((x673>x674)%(x675+x676));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x677 = -3;
	int8_t x678 = INT8_MIN;
	uint32_t x679 = 3U;
	int64_t x680 = 1863327132269LL;
	volatile int64_t t147 = -3849333LL;

    t147 = ((x677>x678)%(x679+x680));

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x682 = UINT16_MAX;
	uint8_t x683 = 0U;
	uint16_t x684 = 107U;
	int32_t t148 = -25923;

    t148 = ((x681>x682)%(x683+x684));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x685 = INT16_MIN;
	int8_t x686 = INT8_MIN;
	volatile int64_t x687 = INT64_MAX;
	uint8_t x688 = 0U;
	volatile int64_t t149 = 9LL;

    t149 = ((x685>x686)%(x687+x688));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x690 = INT8_MIN;
	int32_t t150 = -23348052;

    t150 = ((x689>x690)%(x691+x692));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x694 = 853996133043881040LLU;
	uint16_t x695 = UINT16_MAX;
	int32_t t151 = 35;

    t151 = ((x693>x694)%(x695+x696));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x698 = INT16_MIN;
	int32_t x699 = INT32_MIN;
	int32_t x700 = 4;

    t152 = ((x697>x698)%(x699+x700));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x706 = INT64_MIN;
	volatile uint16_t x707 = UINT16_MAX;
	static uint8_t x708 = 8U;

    t153 = ((x705>x706)%(x707+x708));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x709 = -1;
	int64_t x710 = 1086761534245413085LL;
	int32_t x711 = -1;
	uint64_t x712 = 3276611608LLU;
	static volatile uint64_t t154 = 35246942142278812LLU;

    t154 = ((x709>x710)%(x711+x712));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x713 = INT64_MAX;
	int16_t x714 = INT16_MIN;
	static int32_t x715 = -1;
	int8_t x716 = INT8_MAX;
	volatile int32_t t155 = -1;

    t155 = ((x713>x714)%(x715+x716));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x717 = 96040LL;
	static volatile int8_t x718 = 5;
	static int8_t x720 = 3;

    t156 = ((x717>x718)%(x719+x720));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x721 = 0;
	int16_t x722 = -1;
	int16_t x723 = 53;
	static int16_t x724 = INT16_MIN;
	volatile int32_t t157 = 803;

    t157 = ((x721>x722)%(x723+x724));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MIN;
	volatile int8_t x727 = -1;
	static uint32_t x728 = 101494062U;
	uint32_t t158 = 8213062U;

    t158 = ((x725>x726)%(x727+x728));

    if (t158 != 1U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x730 = -1;
	int64_t x731 = 411609011793555303LL;
	static int16_t x732 = -1;
	volatile int64_t t159 = -267788441804LL;

    t159 = ((x729>x730)%(x731+x732));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x733 = -1;
	static int8_t x734 = INT8_MIN;
	int64_t t160 = -29732898LL;

    t160 = ((x733>x734)%(x735+x736));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x737 = INT64_MAX;
	static int8_t x738 = INT8_MIN;
	static int32_t x739 = -1;
	static uint64_t t161 = 1173007708409533501LLU;

    t161 = ((x737>x738)%(x739+x740));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x742 = 4U;
	int32_t x743 = INT32_MIN;
	int64_t t162 = -221877842784912LL;

    t162 = ((x741>x742)%(x743+x744));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x745 = 1;
	int32_t x746 = INT32_MIN;
	int32_t t163 = 3698;

    t163 = ((x745>x746)%(x747+x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x753 = INT64_MIN;
	uint8_t x754 = UINT8_MAX;
	int64_t t164 = -470722850LL;

    t164 = ((x753>x754)%(x755+x756));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x757 = INT32_MIN;
	static int16_t x758 = 66;
	int8_t x759 = INT8_MIN;
	static int32_t t165 = -37871;

    t165 = ((x757>x758)%(x759+x760));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x766 = INT8_MIN;
	uint16_t x768 = UINT16_MAX;
	int32_t t166 = -148798;

    t166 = ((x765>x766)%(x767+x768));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x769 = 209334;
	volatile int64_t x770 = INT64_MIN;
	uint32_t x772 = 1U;
	static uint32_t t167 = 10U;

    t167 = ((x769>x770)%(x771+x772));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x782 = INT8_MAX;
	static uint32_t x783 = 213U;
	uint16_t x784 = UINT16_MAX;
	uint32_t t168 = 58974775U;

    t168 = ((x781>x782)%(x783+x784));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x786 = 0U;
	int32_t x787 = -1;
	static int64_t x788 = INT64_MAX;
	int64_t t169 = 475460847565296133LL;

    t169 = ((x785>x786)%(x787+x788));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x793 = 2007U;
	int8_t x794 = INT8_MAX;
	static int32_t x795 = INT32_MIN;
	uint16_t x796 = UINT16_MAX;

    t170 = ((x793>x794)%(x795+x796));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x798 = -6;
	int64_t x799 = INT64_MAX;
	int64_t t171 = -7185451LL;

    t171 = ((x797>x798)%(x799+x800));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x801 = INT8_MIN;
	static uint8_t x803 = 57U;
	int32_t x804 = INT32_MIN;
	volatile int32_t t172 = -294234271;

    t172 = ((x801>x802)%(x803+x804));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x805 = 84648748;
	static int8_t x806 = -24;
	uint8_t x807 = 6U;
	int64_t x808 = -1LL;

    t173 = ((x805>x806)%(x807+x808));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x809 = -1;
	static int8_t x810 = INT8_MAX;
	uint64_t x811 = 3795LLU;
	volatile int16_t x812 = 45;
	volatile uint64_t t174 = 16355LLU;

    t174 = ((x809>x810)%(x811+x812));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x813 = INT32_MAX;
	volatile int64_t x814 = -1LL;
	int64_t x815 = -3478579428LL;
	int16_t x816 = -1;
	volatile int64_t t175 = -1LL;

    t175 = ((x813>x814)%(x815+x816));

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x818 = -1;
	volatile int16_t x819 = 4160;
	uint16_t x820 = UINT16_MAX;

    t176 = ((x817>x818)%(x819+x820));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x824 = 8062;
	int32_t t177 = 47099;

    t177 = ((x821>x822)%(x823+x824));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x829 = 88LL;
	uint8_t x830 = 0U;
	int32_t x831 = INT32_MAX;
	uint64_t x832 = 4LLU;

    t178 = ((x829>x830)%(x831+x832));

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x834 = INT32_MIN;
	uint8_t x835 = 1U;
	uint8_t x836 = 54U;
	int32_t t179 = -12137426;

    t179 = ((x833>x834)%(x835+x836));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x846 = INT32_MAX;
	static volatile int32_t x848 = 40106779;
	volatile int32_t t180 = -1;

    t180 = ((x845>x846)%(x847+x848));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x849 = 46555U;
	int64_t x850 = INT64_MIN;
	int64_t x851 = 5806732LL;
	int8_t x852 = INT8_MIN;
	volatile int64_t t181 = 1LL;

    t181 = ((x849>x850)%(x851+x852));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x853 = INT64_MIN;
	int8_t x854 = 1;
	uint32_t x855 = 30U;
	static uint32_t t182 = 873602U;

    t182 = ((x853>x854)%(x855+x856));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x857 = 102372292U;
	int32_t x858 = -381;
	int64_t x859 = INT64_MIN;
	volatile int64_t t183 = 312173LL;

    t183 = ((x857>x858)%(x859+x860));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x861 = 3;
	static int64_t x862 = INT64_MIN;
	static uint64_t x863 = 9LLU;
	int8_t x864 = INT8_MIN;
	uint64_t t184 = 781125586038729598LLU;

    t184 = ((x861>x862)%(x863+x864));

    if (t184 != 1LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x865 = -23;
	int8_t x866 = 1;
	static int16_t x867 = 3;
	volatile uint32_t x868 = UINT32_MAX;

    t185 = ((x865>x866)%(x867+x868));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x869 = 7921U;
	uint64_t x870 = 98012850416LLU;
	int16_t x871 = 0;
	uint16_t x872 = 114U;
	int32_t t186 = 188788;

    t186 = ((x869>x870)%(x871+x872));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x873 = 16;
	static uint16_t x874 = 0U;
	static uint32_t x875 = UINT32_MAX;
	static int16_t x876 = -1;
	uint32_t t187 = 1922U;

    t187 = ((x873>x874)%(x875+x876));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x877 = 1U;
	static volatile int32_t x878 = INT32_MIN;
	int32_t x879 = INT32_MIN;
	int64_t x880 = -1LL;
	int64_t t188 = 25477106084909LL;

    t188 = ((x877>x878)%(x879+x880));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x883 = 24;
	uint64_t t189 = 48573118269LLU;

    t189 = ((x881>x882)%(x883+x884));

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x889 = INT8_MIN;
	int16_t x890 = 43;
	volatile int8_t x891 = -1;
	int64_t x892 = INT64_MAX;
	volatile int64_t t190 = 5848986686LL;

    t190 = ((x889>x890)%(x891+x892));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x893 = INT16_MIN;
	static volatile int8_t x894 = -5;
	int16_t x895 = -1;
	uint8_t x896 = 32U;
	static int32_t t191 = 96;

    t191 = ((x893>x894)%(x895+x896));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x898 = 1616261U;
	int8_t x900 = INT8_MAX;

    t192 = ((x897>x898)%(x899+x900));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x906 = -1LL;
	int64_t x907 = INT64_MIN;
	uint32_t x908 = 1676174U;
	volatile int64_t t193 = -151273554LL;

    t193 = ((x905>x906)%(x907+x908));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x909 = INT8_MIN;
	int8_t x911 = INT8_MIN;
	static int8_t x912 = INT8_MIN;
	static volatile int32_t t194 = -12317907;

    t194 = ((x909>x910)%(x911+x912));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x913 = INT16_MIN;
	volatile int8_t x914 = -1;
	int64_t x915 = 8373660893LL;
	volatile int64_t t195 = 4623955LL;

    t195 = ((x913>x914)%(x915+x916));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x921 = UINT64_MAX;
	volatile int16_t x922 = INT16_MIN;
	int32_t x923 = 991001488;

    t196 = ((x921>x922)%(x923+x924));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x929 = INT32_MAX;
	int64_t x931 = 905568047325LL;
	uint16_t x932 = 0U;
	volatile int64_t t197 = 63117LL;

    t197 = ((x929>x930)%(x931+x932));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x933 = -28;
	static int16_t x934 = INT16_MIN;
	uint32_t x935 = 710U;
	static uint64_t x936 = 1943224099779583508LLU;
	static volatile uint64_t t198 = 18786LLU;

    t198 = ((x933>x934)%(x935+x936));

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x937 = INT64_MIN;
	int16_t x938 = 1593;
	static volatile int16_t x940 = INT16_MIN;

    t199 = ((x937>x938)%(x939+x940));

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

