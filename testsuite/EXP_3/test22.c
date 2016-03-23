
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

int16_t x36 = 0;
int32_t t3 = 134;
int64_t x64 = INT64_MIN;
volatile uint16_t x65 = UINT16_MAX;
int32_t x66 = -1;
volatile int32_t x70 = -25790532;
uint32_t x72 = 285242872U;
volatile int32_t t8 = -34350360;
int32_t t9 = -81899;
volatile uint32_t x89 = 4548U;
volatile int32_t x94 = -13;
static uint8_t x108 = UINT8_MAX;
uint32_t x110 = 23923U;
uint64_t x112 = UINT64_MAX;
int32_t t17 = -497411609;
int32_t x126 = 112;
static volatile int32_t t19 = 46491;
volatile int16_t x130 = INT16_MAX;
volatile int32_t t20 = 159075;
uint64_t x133 = UINT64_MAX;
volatile uint8_t x135 = 1U;
volatile int32_t t21 = -785014452;
int32_t x142 = -7;
int32_t x144 = 616;
int8_t x152 = INT8_MIN;
uint64_t x165 = 72969266LLU;
static int32_t x171 = INT32_MIN;
uint32_t x186 = 78983478U;
int16_t x191 = -1032;
volatile int32_t x196 = -1;
int32_t t32 = -2912;
volatile uint16_t x205 = 27U;
volatile int32_t x208 = INT32_MIN;
uint16_t x225 = 15U;
uint64_t x233 = UINT64_MAX;
volatile uint64_t x238 = UINT64_MAX;
int32_t x242 = -1;
uint16_t x243 = UINT16_MAX;
int64_t x244 = -4376LL;
uint16_t x254 = 226U;
static int8_t x262 = INT8_MAX;
int32_t x263 = INT32_MAX;
int64_t x266 = INT64_MIN;
volatile int32_t x269 = -1;
volatile int32_t t49 = 8123;
uint64_t x282 = 85252LLU;
uint16_t x286 = UINT16_MAX;
int32_t x288 = -1;
int16_t x307 = INT16_MAX;
int32_t x311 = -6014829;
volatile int32_t t56 = -82032470;
static uint16_t x319 = 21002U;
uint32_t x343 = 83U;
int32_t x351 = 1174;
int32_t x352 = INT32_MIN;
uint32_t x356 = 4575127U;
static int32_t t64 = -19276114;
static int64_t x366 = INT64_MIN;
volatile int64_t x368 = -1LL;
volatile int32_t t66 = -1;
int16_t x369 = -1;
volatile uint64_t x370 = 4585045629473145790LLU;
int64_t x371 = -106LL;
int32_t t68 = -2;
uint32_t x377 = UINT32_MAX;
int32_t t69 = 26;
int64_t x394 = 8103389837LL;
int8_t x396 = INT8_MIN;
int32_t t71 = -1;
volatile int32_t x398 = 370647;
int16_t x403 = -1557;
int8_t x404 = INT8_MAX;
int32_t t73 = -4;
int32_t x407 = INT32_MIN;
int8_t x417 = -36;
volatile int32_t t79 = 1582;
int16_t x430 = INT16_MIN;
volatile uint16_t x434 = 50U;
int16_t x437 = INT16_MIN;
int32_t x438 = -14;
int32_t t82 = -703676771;
int16_t x446 = INT16_MIN;
volatile uint16_t x454 = UINT16_MAX;
static int64_t x458 = -1LL;
volatile int32_t t92 = -220;
int8_t x498 = -5;
static volatile int16_t x506 = 3;
static int8_t x512 = INT8_MIN;
uint16_t x520 = 1799U;
static int32_t t99 = 48434;
int8_t x527 = INT8_MIN;
int8_t x528 = INT8_MAX;
int32_t t101 = 829726742;
int16_t x537 = INT16_MAX;
int16_t x541 = -1;
int8_t x543 = INT8_MIN;
int32_t x547 = -29;
int16_t x551 = -1;
volatile uint8_t x557 = 1U;
volatile int32_t t109 = -4787;
int64_t x575 = 4003407544522083623LL;
static uint64_t x576 = UINT64_MAX;
int64_t x578 = INT64_MIN;
uint16_t x580 = 13U;
volatile int32_t t112 = 16;
int32_t x585 = -1;
volatile int16_t x586 = -1;
int32_t x589 = 6902;
static uint32_t x593 = UINT32_MAX;
int16_t x595 = -1;
int16_t x598 = INT16_MAX;
int64_t x600 = INT64_MIN;
volatile int32_t t116 = 42242657;
volatile int32_t t117 = 0;
int8_t x621 = -61;
int64_t x630 = INT64_MAX;
uint64_t x632 = 3364468120LLU;
int32_t t122 = -28366213;
int32_t x633 = -5;
static volatile uint16_t x635 = 6U;
static int32_t x642 = -1;
volatile int32_t x643 = -1;
uint16_t x644 = UINT16_MAX;
int32_t t124 = -3;
uint16_t x652 = UINT16_MAX;
int32_t t126 = 278433;
static int8_t x654 = 4;
uint16_t x661 = 91U;
int64_t x673 = INT64_MIN;
int8_t x684 = INT8_MAX;
uint16_t x689 = 19884U;
int64_t x690 = -1LL;
static int32_t t135 = -940327;
uint16_t x702 = UINT16_MAX;
int16_t x708 = -226;
volatile int64_t x709 = 238536597183LL;
int8_t x712 = INT8_MAX;
uint16_t x716 = UINT16_MAX;
static int8_t x735 = INT8_MAX;
uint8_t x736 = UINT8_MAX;
int16_t x744 = -61;
int32_t x752 = INT32_MAX;
volatile int8_t x759 = 29;
int8_t x763 = INT8_MAX;
int16_t x764 = -1;
int32_t t149 = -2361276;
uint8_t x779 = 2U;
uint64_t x788 = 1546448362556656LLU;
static int32_t x789 = 528840;
uint32_t x790 = 0U;
int8_t x794 = -1;
uint64_t x796 = UINT64_MAX;
static int64_t x799 = -1163383001252194149LL;
int64_t x808 = 2315LL;
int32_t t157 = 117988955;
uint32_t x811 = UINT32_MAX;
int8_t x820 = INT8_MAX;
volatile int32_t x821 = -1;
uint8_t x822 = UINT8_MAX;
int32_t t161 = 96;
int32_t x830 = INT32_MAX;
int64_t x832 = 19435269413210LL;
uint32_t x836 = 39604U;
uint16_t x841 = 2197U;
static int32_t x849 = 101700901;
static int64_t x856 = 213983630895121843LL;
volatile int32_t t167 = -1;
int16_t x870 = INT16_MIN;
int16_t x871 = INT16_MAX;
volatile int32_t x883 = -1;
volatile int32_t t172 = -1;
int32_t x886 = -769417;
int32_t t174 = 480;
int32_t x899 = INT32_MIN;
int64_t x900 = -93LL;
uint64_t x901 = UINT64_MAX;
static uint8_t x902 = 78U;
volatile int8_t x903 = 9;
int16_t x922 = INT16_MIN;
volatile uint16_t x923 = UINT16_MAX;
volatile int32_t t182 = -600;
int32_t x929 = -1;
int16_t x938 = -1;
static int8_t x939 = 1;
int16_t x941 = INT16_MAX;
static volatile int32_t t186 = -22440744;
int32_t x951 = INT32_MIN;
uint16_t x952 = 70U;
int16_t x971 = INT16_MAX;
static volatile int32_t t192 = 1;
int32_t x977 = -2057;
uint16_t x980 = 517U;
uint8_t x983 = 25U;
int64_t x985 = -207922572387LL;
int16_t x1014 = INT16_MAX;


void f0(void) {
    	static uint16_t x13 = 5U;
	int8_t x14 = INT8_MIN;
	static int32_t x15 = INT32_MIN;
	volatile uint64_t x16 = 22216602LLU;
	volatile int32_t t0 = -421;

    t0 = ((x13-x14)==(x15+x16));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = INT64_MIN;
	static volatile int64_t x22 = -1LL;
	volatile int8_t x23 = -1;
	static int16_t x24 = 1;
	int32_t t1 = 1;

    t1 = ((x21-x22)==(x23+x24));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x33 = 2U;
	int8_t x34 = INT8_MIN;
	volatile uint8_t x35 = UINT8_MAX;
	static int32_t t2 = -1;

    t2 = ((x33-x34)==(x35+x36));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x38 = -1LL;
	static int16_t x39 = 0;
	int32_t x40 = INT32_MIN;

    t3 = ((x37-x38)==(x39+x40));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x53 = UINT32_MAX;
	volatile int8_t x54 = INT8_MAX;
	volatile int32_t x55 = -1;
	volatile uint8_t x56 = 9U;
	int32_t t4 = 1632;

    t4 = ((x53-x54)==(x55+x56));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MAX;
	uint8_t x63 = UINT8_MAX;
	static volatile int32_t t5 = 68350544;

    t5 = ((x61-x62)==(x63+x64));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x67 = 436LLU;
	volatile int64_t x68 = INT64_MIN;
	static volatile int32_t t6 = -5660216;

    t6 = ((x65-x66)==(x67+x68));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x69 = INT8_MIN;
	int32_t x71 = -801;
	int32_t t7 = 3;

    t7 = ((x69-x70)==(x71+x72));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x73 = INT16_MAX;
	volatile int8_t x74 = -1;
	static int16_t x75 = INT16_MIN;
	volatile uint64_t x76 = UINT64_MAX;

    t8 = ((x73-x74)==(x75+x76));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x77 = 11U;
	int64_t x78 = INT64_MAX;
	volatile int8_t x79 = -1;
	int64_t x80 = -1LL;

    t9 = ((x77-x78)==(x79+x80));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x81 = 18694U;
	int64_t x82 = INT64_MAX;
	int16_t x83 = 1;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t10 = 1;

    t10 = ((x81-x82)==(x83+x84));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x85 = -1;
	uint16_t x86 = 1U;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 2104158157074LLU;
	int32_t t11 = -1;

    t11 = ((x85-x86)==(x87+x88));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x90 = 8U;
	uint8_t x91 = UINT8_MAX;
	volatile uint64_t x92 = 3731113504795LLU;
	int32_t t12 = 1;

    t12 = ((x89-x90)==(x91+x92));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x93 = -113LL;
	volatile int32_t x95 = -20;
	int16_t x96 = INT16_MIN;
	int32_t t13 = -7;

    t13 = ((x93-x94)==(x95+x96));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x101 = -1;
	int16_t x102 = 1;
	volatile uint32_t x103 = 63658251U;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t14 = 6388;

    t14 = ((x101-x102)==(x103+x104));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x105 = INT16_MAX;
	uint8_t x106 = 43U;
	static uint16_t x107 = UINT16_MAX;
	volatile int32_t t15 = -601008101;

    t15 = ((x105-x106)==(x107+x108));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x109 = INT8_MIN;
	volatile int8_t x111 = INT8_MIN;
	static volatile int32_t t16 = 15936564;

    t16 = ((x109-x110)==(x111+x112));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x117 = -437;
	int32_t x118 = 288;
	uint32_t x119 = 15193745U;
	int32_t x120 = INT32_MAX;

    t17 = ((x117-x118)==(x119+x120));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t18 = -258592;

    t18 = ((x121-x122)==(x123+x124));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x125 = -1;
	int8_t x127 = -1;
	uint8_t x128 = UINT8_MAX;

    t19 = ((x125-x126)==(x127+x128));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x129 = -1;
	static int8_t x131 = 0;
	int8_t x132 = INT8_MIN;

    t20 = ((x129-x130)==(x131+x132));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x134 = INT16_MAX;
	uint32_t x136 = 988U;

    t21 = ((x133-x134)==(x135+x136));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	int8_t x138 = -1;
	int16_t x139 = -1;
	int32_t x140 = -1;
	volatile int32_t t22 = -4;

    t22 = ((x137-x138)==(x139+x140));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x141 = INT32_MIN;
	int32_t x143 = 1;
	int32_t t23 = -144651;

    t23 = ((x141-x142)==(x143+x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x145 = INT8_MIN;
	static int16_t x146 = INT16_MIN;
	int8_t x147 = 2;
	int64_t x148 = INT64_MIN;
	int32_t t24 = 796126073;

    t24 = ((x145-x146)==(x147+x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x149 = 1;
	static uint8_t x150 = 0U;
	static int16_t x151 = INT16_MAX;
	int32_t t25 = 118475682;

    t25 = ((x149-x150)==(x151+x152));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x161 = -1;
	uint64_t x162 = 232267695901706LLU;
	int8_t x163 = -1;
	int8_t x164 = -13;
	volatile int32_t t26 = 124455207;

    t26 = ((x161-x162)==(x163+x164));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x166 = -268;
	uint64_t x167 = 641750992062985LLU;
	int32_t x168 = INT32_MAX;
	static int32_t t27 = 1165489;

    t27 = ((x165-x166)==(x167+x168));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x169 = 11;
	int8_t x170 = INT8_MIN;
	uint64_t x172 = 4176457LLU;
	static int32_t t28 = 4;

    t28 = ((x169-x170)==(x171+x172));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x173 = -1LL;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -45899120;
	volatile uint32_t x176 = 191142910U;
	volatile int32_t t29 = 0;

    t29 = ((x173-x174)==(x175+x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x185 = -1;
	uint16_t x187 = 38U;
	volatile uint8_t x188 = 1U;
	int32_t t30 = -35541;

    t30 = ((x185-x186)==(x187+x188));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x189 = -1LL;
	int16_t x190 = -39;
	volatile int16_t x192 = INT16_MAX;
	static int32_t t31 = -379236294;

    t31 = ((x189-x190)==(x191+x192));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x193 = UINT8_MAX;
	int8_t x194 = -1;
	static volatile int16_t x195 = INT16_MAX;

    t32 = ((x193-x194)==(x195+x196));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x197 = 19U;
	uint8_t x198 = 65U;
	int64_t x199 = INT64_MIN;
	int16_t x200 = 205;
	volatile int32_t t33 = -2051962;

    t33 = ((x197-x198)==(x199+x200));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x206 = 152219LLU;
	volatile uint64_t x207 = UINT64_MAX;
	volatile int32_t t34 = 9;

    t34 = ((x205-x206)==(x207+x208));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x209 = UINT64_MAX;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MIN;
	uint8_t x212 = UINT8_MAX;
	int32_t t35 = -333372327;

    t35 = ((x209-x210)==(x211+x212));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x213 = -1;
	int64_t x214 = -1LL;
	int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MAX;
	volatile int32_t t36 = -1;

    t36 = ((x213-x214)==(x215+x216));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = 2679U;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -59;
	static volatile int32_t t37 = -448;

    t37 = ((x221-x222)==(x223+x224));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x226 = UINT32_MAX;
	uint32_t x227 = 54127U;
	static int32_t x228 = INT32_MIN;
	static int32_t t38 = 14289;

    t38 = ((x225-x226)==(x227+x228));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x229 = -1LL;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = UINT32_MAX;
	volatile int16_t x232 = -1;
	static int32_t t39 = -16;

    t39 = ((x229-x230)==(x231+x232));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x234 = -1;
	int16_t x235 = 7;
	volatile uint32_t x236 = 1249925U;
	volatile int32_t t40 = -200298272;

    t40 = ((x233-x234)==(x235+x236));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = -97835;
	uint16_t x239 = 496U;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t41 = 26;

    t41 = ((x237-x238)==(x239+x240));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x241 = 2541;
	volatile int32_t t42 = 3;

    t42 = ((x241-x242)==(x243+x244));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x249 = UINT32_MAX;
	static uint16_t x250 = UINT16_MAX;
	uint16_t x251 = UINT16_MAX;
	static int32_t x252 = -321141;
	static volatile int32_t t43 = 1476;

    t43 = ((x249-x250)==(x251+x252));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x255 = 371572045879LL;
	int64_t x256 = INT64_MIN;
	int32_t t44 = -2979;

    t44 = ((x253-x254)==(x255+x256));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x257 = 635;
	uint32_t x258 = UINT32_MAX;
	uint64_t x259 = 0LLU;
	int64_t x260 = -1LL;
	int32_t t45 = 4633555;

    t45 = ((x257-x258)==(x259+x260));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x261 = 61LL;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t46 = -789252;

    t46 = ((x261-x262)==(x263+x264));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x265 = 41LLU;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = 8;
	static int32_t t47 = 14819301;

    t47 = ((x265-x266)==(x267+x268));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t48 = -113;

    t48 = ((x269-x270)==(x271+x272));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x273 = INT8_MAX;
	int16_t x274 = INT16_MAX;
	static int8_t x275 = -1;
	int32_t x276 = 32126472;

    t49 = ((x273-x274)==(x275+x276));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x277 = -1;
	uint32_t x278 = 88U;
	volatile uint64_t x279 = 329292296464566LLU;
	static volatile int64_t x280 = INT64_MIN;
	volatile int32_t t50 = 1739;

    t50 = ((x277-x278)==(x279+x280));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x281 = 13653522LLU;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = -9;
	int32_t t51 = 164388;

    t51 = ((x281-x282)==(x283+x284));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x285 = 9186875728000098294LLU;
	volatile uint8_t x287 = 9U;
	volatile int32_t t52 = -22;

    t52 = ((x285-x286)==(x287+x288));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x289 = 26U;
	uint32_t x290 = 1734791U;
	uint32_t x291 = UINT32_MAX;
	volatile int8_t x292 = -1;
	volatile int32_t t53 = -119;

    t53 = ((x289-x290)==(x291+x292));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MAX;
	int32_t x308 = -1;
	volatile int32_t t54 = -9717490;

    t54 = ((x305-x306)==(x307+x308));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x309 = 28042434LL;
	uint64_t x310 = 92409315238343LLU;
	volatile int32_t x312 = -6179549;
	int32_t t55 = -226127;

    t55 = ((x309-x310)==(x311+x312));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = -12;
	int64_t x315 = -1LL;
	uint16_t x316 = UINT16_MAX;

    t56 = ((x313-x314)==(x315+x316));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x317 = 953086LLU;
	int16_t x318 = -1;
	int8_t x320 = 57;
	volatile int32_t t57 = -103;

    t57 = ((x317-x318)==(x319+x320));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x321 = 22973U;
	static int32_t x322 = INT32_MIN;
	volatile int8_t x323 = INT8_MAX;
	static int64_t x324 = -38036187783401172LL;
	int32_t t58 = -1;

    t58 = ((x321-x322)==(x323+x324));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x329 = -31;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 1U;
	static int16_t x332 = 10;
	volatile int32_t t59 = 17546437;

    t59 = ((x329-x330)==(x331+x332));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x338 = -482;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;
	int32_t t60 = 0;

    t60 = ((x337-x338)==(x339+x340));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x341 = UINT64_MAX;
	static int16_t x342 = -1;
	uint64_t x344 = 125744336LLU;
	int32_t t61 = -13589;

    t61 = ((x341-x342)==(x343+x344));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x345 = INT8_MAX;
	volatile int16_t x346 = 1;
	static int16_t x347 = INT16_MAX;
	volatile int32_t x348 = 534;
	int32_t t62 = 8281;

    t62 = ((x345-x346)==(x347+x348));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x349 = INT8_MIN;
	volatile uint8_t x350 = 1U;
	int32_t t63 = -13202;

    t63 = ((x349-x350)==(x351+x352));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x353 = INT64_MAX;
	uint64_t x354 = UINT64_MAX;
	uint64_t x355 = 10253415LLU;

    t64 = ((x353-x354)==(x355+x356));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x357 = 0;
	volatile uint8_t x358 = 10U;
	static int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t65 = -1;

    t65 = ((x357-x358)==(x359+x360));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x367 = INT32_MAX;

    t66 = ((x365-x366)==(x367+x368));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x372 = -3114;
	volatile int32_t t67 = -50;

    t67 = ((x369-x370)==(x371+x372));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x373 = 3U;
	static int64_t x374 = -1LL;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = INT16_MIN;

    t68 = ((x373-x374)==(x375+x376));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x378 = UINT16_MAX;
	volatile int8_t x379 = INT8_MIN;
	volatile int64_t x380 = 61460LL;

    t69 = ((x377-x378)==(x379+x380));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x381 = 24U;
	static volatile uint8_t x382 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t70 = -60731169;

    t70 = ((x381-x382)==(x383+x384));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x393 = 3216U;
	uint8_t x395 = 4U;

    t71 = ((x393-x394)==(x395+x396));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x397 = 1399001175U;
	volatile int32_t x399 = INT32_MIN;
	volatile int16_t x400 = 2;
	int32_t t72 = -23861384;

    t72 = ((x397-x398)==(x399+x400));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x401 = INT8_MIN;
	static uint16_t x402 = 1234U;

    t73 = ((x401-x402)==(x403+x404));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x405 = 967645181U;
	int32_t x406 = INT32_MIN;
	int32_t x408 = INT32_MAX;
	static volatile int32_t t74 = 1685224;

    t74 = ((x405-x406)==(x407+x408));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x409 = INT8_MIN;
	static uint8_t x410 = UINT8_MAX;
	volatile int8_t x411 = 7;
	uint32_t x412 = 7904U;
	int32_t t75 = 65056277;

    t75 = ((x409-x410)==(x411+x412));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x413 = INT8_MAX;
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t76 = 15;

    t76 = ((x413-x414)==(x415+x416));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x418 = 16042U;
	uint32_t x419 = 156636U;
	int16_t x420 = 134;
	volatile int32_t t77 = 99;

    t77 = ((x417-x418)==(x419+x420));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x421 = 3590955930LLU;
	int64_t x422 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	volatile int8_t x424 = INT8_MIN;
	static int32_t t78 = -107;

    t78 = ((x421-x422)==(x423+x424));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x425 = 177U;
	uint32_t x426 = 1915715372U;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MIN;

    t79 = ((x425-x426)==(x427+x428));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x429 = 42U;
	static int32_t x431 = -13;
	volatile int16_t x432 = 243;
	volatile int32_t t80 = -187811361;

    t80 = ((x429-x430)==(x431+x432));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x433 = 620;
	static int32_t x435 = -41;
	volatile uint64_t x436 = 265580LLU;
	int32_t t81 = -55524076;

    t81 = ((x433-x434)==(x435+x436));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x439 = -1836;
	volatile int8_t x440 = 30;

    t82 = ((x437-x438)==(x439+x440));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x445 = 137;
	volatile int64_t x447 = INT64_MAX;
	int8_t x448 = -1;
	int32_t t83 = 11765;

    t83 = ((x445-x446)==(x447+x448));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x453 = UINT8_MAX;
	int16_t x455 = -1;
	int8_t x456 = INT8_MIN;
	static int32_t t84 = 24220;

    t84 = ((x453-x454)==(x455+x456));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x457 = INT16_MIN;
	uint64_t x459 = 2LLU;
	static uint64_t x460 = UINT64_MAX;
	volatile int32_t t85 = 1992588;

    t85 = ((x457-x458)==(x459+x460));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x461 = 61;
	volatile uint16_t x462 = 23U;
	static volatile int64_t x463 = -1LL;
	volatile int16_t x464 = INT16_MAX;
	volatile int32_t t86 = -1962111;

    t86 = ((x461-x462)==(x463+x464));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x465 = INT8_MAX;
	volatile uint16_t x466 = 0U;
	int8_t x467 = INT8_MIN;
	int32_t x468 = -6;
	int32_t t87 = -1;

    t87 = ((x465-x466)==(x467+x468));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x469 = UINT64_MAX;
	static int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	volatile uint16_t x472 = 10U;
	volatile int32_t t88 = 1;

    t88 = ((x469-x470)==(x471+x472));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x473 = -1LL;
	int32_t x474 = INT32_MIN;
	volatile uint16_t x475 = UINT16_MAX;
	volatile int16_t x476 = -1;
	volatile int32_t t89 = 3;

    t89 = ((x473-x474)==(x475+x476));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x477 = INT8_MAX;
	int32_t x478 = -1;
	static volatile int64_t x479 = 1LL;
	int16_t x480 = 45;
	volatile int32_t t90 = 59;

    t90 = ((x477-x478)==(x479+x480));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x481 = INT8_MAX;
	int8_t x482 = INT8_MIN;
	uint64_t x483 = 1927LLU;
	uint8_t x484 = 44U;
	int32_t t91 = -1;

    t91 = ((x481-x482)==(x483+x484));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x489 = 57300453395874LL;
	int16_t x490 = -3;
	static int32_t x491 = INT32_MIN;
	uint16_t x492 = 14U;

    t92 = ((x489-x490)==(x491+x492));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	uint32_t x495 = 6626U;
	uint8_t x496 = UINT8_MAX;
	int32_t t93 = 1414;

    t93 = ((x493-x494)==(x495+x496));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x497 = -1;
	int8_t x499 = -3;
	static int32_t x500 = 21;
	volatile int32_t t94 = 7091260;

    t94 = ((x497-x498)==(x499+x500));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x501 = INT8_MAX;
	volatile uint16_t x502 = 0U;
	static int8_t x503 = 8;
	volatile int32_t x504 = INT32_MIN;
	int32_t t95 = 142163092;

    t95 = ((x501-x502)==(x503+x504));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x505 = INT8_MAX;
	volatile uint16_t x507 = UINT16_MAX;
	uint32_t x508 = 13487U;
	int32_t t96 = -3529;

    t96 = ((x505-x506)==(x507+x508));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x509 = 1020U;
	volatile int64_t x510 = -1LL;
	int64_t x511 = -1LL;
	int32_t t97 = 1974;

    t97 = ((x509-x510)==(x511+x512));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x513 = INT16_MAX;
	volatile int16_t x514 = INT16_MIN;
	int8_t x515 = -1;
	int64_t x516 = 121LL;
	int32_t t98 = 7157132;

    t98 = ((x513-x514)==(x515+x516));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x517 = INT16_MIN;
	uint64_t x518 = 9419682609658640LLU;
	uint32_t x519 = 7327163U;

    t99 = ((x517-x518)==(x519+x520));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile uint16_t x526 = UINT16_MAX;
	int32_t t100 = 1;

    t100 = ((x525-x526)==(x527+x528));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x529 = 5U;
	int8_t x530 = INT8_MAX;
	int64_t x531 = 32908584734LL;
	volatile int32_t x532 = -2;

    t101 = ((x529-x530)==(x531+x532));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x533 = 58;
	static int8_t x534 = INT8_MIN;
	static uint32_t x535 = UINT32_MAX;
	int16_t x536 = -1491;
	int32_t t102 = -118733;

    t102 = ((x533-x534)==(x535+x536));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x538 = 2U;
	uint16_t x539 = 4608U;
	static int64_t x540 = INT64_MIN;
	volatile int32_t t103 = -657613;

    t103 = ((x537-x538)==(x539+x540));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x542 = INT16_MIN;
	int32_t x544 = -1;
	volatile int32_t t104 = -27697;

    t104 = ((x541-x542)==(x543+x544));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x545 = -1LL;
	int8_t x546 = INT8_MIN;
	uint64_t x548 = 978185853245938LLU;
	static volatile int32_t t105 = 18;

    t105 = ((x545-x546)==(x547+x548));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x549 = -1;
	static int64_t x550 = INT64_MIN;
	int16_t x552 = INT16_MAX;
	volatile int32_t t106 = 0;

    t106 = ((x549-x550)==(x551+x552));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MAX;
	int8_t x556 = INT8_MIN;
	int32_t t107 = 2;

    t107 = ((x553-x554)==(x555+x556));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x558 = -1LL;
	static uint32_t x559 = UINT32_MAX;
	int32_t x560 = 1;
	int32_t t108 = 1819627;

    t108 = ((x557-x558)==(x559+x560));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = -1LL;
	uint64_t x571 = UINT64_MAX;
	static int64_t x572 = 120539717576LL;

    t109 = ((x569-x570)==(x571+x572));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x573 = INT8_MIN;
	int8_t x574 = INT8_MAX;
	int32_t t110 = -239078;

    t110 = ((x573-x574)==(x575+x576));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	int8_t x579 = INT8_MIN;
	volatile int32_t t111 = 87;

    t111 = ((x577-x578)==(x579+x580));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x581 = -1;
	int16_t x582 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	volatile uint32_t x584 = 136998U;

    t112 = ((x581-x582)==(x583+x584));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x587 = INT64_MIN;
	volatile uint16_t x588 = UINT16_MAX;
	volatile int32_t t113 = -173736292;

    t113 = ((x585-x586)==(x587+x588));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x590 = 3619U;
	uint8_t x591 = 0U;
	uint8_t x592 = 7U;
	static volatile int32_t t114 = 757;

    t114 = ((x589-x590)==(x591+x592));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x594 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	int32_t t115 = -5;

    t115 = ((x593-x594)==(x595+x596));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x597 = UINT32_MAX;
	uint64_t x599 = UINT64_MAX;

    t116 = ((x597-x598)==(x599+x600));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x605 = -1LL;
	volatile int64_t x606 = INT64_MIN;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = 33;

    t117 = ((x605-x606)==(x607+x608));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x609 = 397LL;
	static volatile int16_t x610 = -3790;
	int8_t x611 = 0;
	volatile int16_t x612 = 1151;
	static int32_t t118 = 42;

    t118 = ((x609-x610)==(x611+x612));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x613 = UINT32_MAX;
	static int16_t x614 = INT16_MIN;
	static int16_t x615 = INT16_MAX;
	int16_t x616 = -4;
	int32_t t119 = 1252813;

    t119 = ((x613-x614)==(x615+x616));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x617 = -1;
	int8_t x618 = 9;
	static int16_t x619 = INT16_MIN;
	int32_t x620 = INT32_MAX;
	int32_t t120 = 1;

    t120 = ((x617-x618)==(x619+x620));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x622 = 0;
	volatile uint64_t x623 = 5LLU;
	int8_t x624 = INT8_MIN;
	volatile int32_t t121 = -30053;

    t121 = ((x621-x622)==(x623+x624));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x629 = 1000U;
	uint64_t x631 = 40798406502LLU;

    t122 = ((x629-x630)==(x631+x632));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x634 = -1;
	static uint8_t x636 = UINT8_MAX;
	int32_t t123 = -124129;

    t123 = ((x633-x634)==(x635+x636));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x641 = -1;

    t124 = ((x641-x642)==(x643+x644));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile int32_t x646 = 338663166;
	uint64_t x647 = 1827504677LLU;
	static int16_t x648 = 1;
	static int32_t t125 = 82536334;

    t125 = ((x645-x646)==(x647+x648));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x649 = 1316901U;
	static int8_t x650 = INT8_MAX;
	static uint64_t x651 = 1904LLU;

    t126 = ((x649-x650)==(x651+x652));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x653 = 131201381U;
	int32_t x655 = 0;
	uint64_t x656 = UINT64_MAX;
	int32_t t127 = -2653;

    t127 = ((x653-x654)==(x655+x656));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x662 = -1;
	int8_t x663 = INT8_MIN;
	static uint16_t x664 = UINT16_MAX;
	volatile int32_t t128 = -47440428;

    t128 = ((x661-x662)==(x663+x664));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x669 = UINT8_MAX;
	int16_t x670 = 1;
	int64_t x671 = INT64_MIN;
	int16_t x672 = INT16_MAX;
	int32_t t129 = 18400;

    t129 = ((x669-x670)==(x671+x672));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x674 = -224790972407LL;
	volatile int32_t x675 = 402732;
	volatile int16_t x676 = -1;
	int32_t t130 = -2;

    t130 = ((x673-x674)==(x675+x676));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x677 = INT32_MIN;
	uint64_t x678 = UINT64_MAX;
	int16_t x679 = INT16_MIN;
	int8_t x680 = 10;
	volatile int32_t t131 = 57197;

    t131 = ((x677-x678)==(x679+x680));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x681 = -13720;
	int32_t x682 = 13916;
	static uint16_t x683 = 15U;
	static int32_t t132 = 734150538;

    t132 = ((x681-x682)==(x683+x684));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x685 = 35U;
	uint32_t x686 = UINT32_MAX;
	volatile int8_t x687 = -2;
	static int8_t x688 = INT8_MIN;
	int32_t t133 = 264645496;

    t133 = ((x685-x686)==(x687+x688));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x691 = 4U;
	int8_t x692 = -7;
	static int32_t t134 = 22952;

    t134 = ((x689-x690)==(x691+x692));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x693 = 30U;
	static uint8_t x694 = UINT8_MAX;
	static int8_t x695 = 1;
	int64_t x696 = 2974587459LL;

    t135 = ((x693-x694)==(x695+x696));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x697 = 1U;
	uint32_t x698 = 0U;
	int16_t x699 = INT16_MIN;
	int8_t x700 = INT8_MIN;
	int32_t t136 = 0;

    t136 = ((x697-x698)==(x699+x700));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x701 = -902659582;
	uint16_t x703 = UINT16_MAX;
	int64_t x704 = 1LL;
	int32_t t137 = 842;

    t137 = ((x701-x702)==(x703+x704));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x705 = -8702;
	static int8_t x706 = 0;
	int16_t x707 = INT16_MIN;
	volatile int32_t t138 = 19836514;

    t138 = ((x705-x706)==(x707+x708));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	volatile int32_t t139 = 2992109;

    t139 = ((x709-x710)==(x711+x712));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x713 = 2LLU;
	uint64_t x714 = 3587LLU;
	uint8_t x715 = 7U;
	volatile int32_t t140 = 102;

    t140 = ((x713-x714)==(x715+x716));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x726 = 56562;
	volatile uint64_t x727 = 21496715309788257LLU;
	volatile int64_t x728 = INT64_MIN;
	static volatile int32_t t141 = -502142;

    t141 = ((x725-x726)==(x727+x728));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x729 = INT64_MIN;
	int64_t x730 = INT64_MIN;
	uint64_t x731 = 1LLU;
	uint8_t x732 = 32U;
	int32_t t142 = 17753;

    t142 = ((x729-x730)==(x731+x732));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x733 = 1053387495LLU;
	int64_t x734 = INT64_MIN;
	volatile int32_t t143 = -4722331;

    t143 = ((x733-x734)==(x735+x736));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x737 = UINT8_MAX;
	int8_t x738 = -1;
	uint32_t x739 = 112U;
	volatile uint32_t x740 = 245U;
	volatile int32_t t144 = -11;

    t144 = ((x737-x738)==(x739+x740));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x741 = -6;
	int16_t x742 = -1;
	static int64_t x743 = INT64_MAX;
	volatile int32_t t145 = -55094;

    t145 = ((x741-x742)==(x743+x744));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x745 = 13;
	int64_t x746 = -1LL;
	int64_t x747 = INT64_MIN;
	volatile uint32_t x748 = 20302155U;
	static volatile int32_t t146 = 49072215;

    t146 = ((x745-x746)==(x747+x748));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x749 = 383;
	int8_t x750 = -12;
	static int8_t x751 = INT8_MIN;
	int32_t t147 = -1;

    t147 = ((x749-x750)==(x751+x752));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x757 = 6146;
	uint32_t x758 = 37955U;
	uint32_t x760 = UINT32_MAX;
	static volatile int32_t t148 = 13;

    t148 = ((x757-x758)==(x759+x760));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x761 = 3U;
	uint64_t x762 = 42846254954LLU;

    t149 = ((x761-x762)==(x763+x764));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x773 = 0U;
	int16_t x774 = INT16_MIN;
	int32_t x775 = INT32_MAX;
	int8_t x776 = INT8_MIN;
	int32_t t150 = 22498789;

    t150 = ((x773-x774)==(x775+x776));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = 33;
	uint32_t x780 = 387U;
	static int32_t t151 = 8710;

    t151 = ((x777-x778)==(x779+x780));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x785 = -93510852;
	int16_t x786 = INT16_MIN;
	uint8_t x787 = UINT8_MAX;
	int32_t t152 = 9661717;

    t152 = ((x785-x786)==(x787+x788));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x791 = INT8_MAX;
	volatile uint16_t x792 = 128U;
	static int32_t t153 = -245;

    t153 = ((x789-x790)==(x791+x792));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x793 = INT64_MIN;
	int64_t x795 = 909712867553297947LL;
	int32_t t154 = 93;

    t154 = ((x793-x794)==(x795+x796));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x797 = 3653U;
	int64_t x798 = INT64_MAX;
	static uint8_t x800 = 1U;
	int32_t t155 = -46;

    t155 = ((x797-x798)==(x799+x800));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x801 = 60;
	static uint64_t x802 = UINT64_MAX;
	int8_t x803 = INT8_MIN;
	uint8_t x804 = 96U;
	static volatile int32_t t156 = -28;

    t156 = ((x801-x802)==(x803+x804));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x805 = INT8_MIN;
	uint64_t x806 = UINT64_MAX;
	volatile int16_t x807 = -1;

    t157 = ((x805-x806)==(x807+x808));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x809 = INT8_MIN;
	int16_t x810 = INT16_MIN;
	int32_t x812 = INT32_MIN;
	static int32_t t158 = -218730;

    t158 = ((x809-x810)==(x811+x812));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x817 = -1LL;
	int64_t x818 = -2505830663155LL;
	static volatile uint64_t x819 = 245502098451LLU;
	volatile int32_t t159 = -698988;

    t159 = ((x817-x818)==(x819+x820));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x823 = INT32_MAX;
	volatile int64_t x824 = INT64_MIN;
	int32_t t160 = -1;

    t160 = ((x821-x822)==(x823+x824));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x825 = 3357LL;
	volatile uint16_t x826 = 29680U;
	uint32_t x827 = 14U;
	static volatile int64_t x828 = -1300279051LL;

    t161 = ((x825-x826)==(x827+x828));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x829 = 106;
	int8_t x831 = INT8_MIN;
	static int32_t t162 = -3;

    t162 = ((x829-x830)==(x831+x832));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x833 = INT8_MIN;
	volatile int32_t x834 = -403;
	uint64_t x835 = 3320LLU;
	static int32_t t163 = 5722;

    t163 = ((x833-x834)==(x835+x836));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x837 = -1;
	static uint32_t x838 = 45713404U;
	static uint8_t x839 = 17U;
	static uint64_t x840 = 0LLU;
	int32_t t164 = -81497;

    t164 = ((x837-x838)==(x839+x840));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x842 = INT64_MAX;
	uint8_t x843 = 3U;
	int32_t x844 = -1;
	int32_t t165 = -1;

    t165 = ((x841-x842)==(x843+x844));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x850 = INT64_MAX;
	uint64_t x851 = 161436162LLU;
	int64_t x852 = -1LL;
	static volatile int32_t t166 = -121872;

    t166 = ((x849-x850)==(x851+x852));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x853 = -1;
	uint16_t x854 = 4U;
	uint64_t x855 = 354LLU;

    t167 = ((x853-x854)==(x855+x856));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x865 = -1;
	int16_t x866 = INT16_MAX;
	int8_t x867 = 1;
	uint16_t x868 = UINT16_MAX;
	volatile int32_t t168 = 187;

    t168 = ((x865-x866)==(x867+x868));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x869 = UINT64_MAX;
	static int8_t x872 = INT8_MIN;
	static int32_t t169 = 722;

    t169 = ((x869-x870)==(x871+x872));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x873 = -1;
	int32_t x874 = 461539505;
	int32_t x875 = INT32_MAX;
	static volatile int8_t x876 = INT8_MIN;
	volatile int32_t t170 = 97424;

    t170 = ((x873-x874)==(x875+x876));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x877 = INT16_MIN;
	int8_t x878 = 1;
	volatile int32_t x879 = INT32_MIN;
	uint32_t x880 = 189762U;
	static volatile int32_t t171 = -615605696;

    t171 = ((x877-x878)==(x879+x880));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x881 = 0;
	uint32_t x882 = 246578315U;
	uint64_t x884 = 754215767116728LLU;

    t172 = ((x881-x882)==(x883+x884));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x887 = -895290449LL;
	int16_t x888 = -444;
	static volatile int32_t t173 = 31239;

    t173 = ((x885-x886)==(x887+x888));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x889 = -1;
	static uint8_t x890 = 5U;
	int16_t x891 = INT16_MIN;
	volatile int8_t x892 = -1;

    t174 = ((x889-x890)==(x891+x892));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x893 = UINT16_MAX;
	int16_t x894 = INT16_MIN;
	static uint8_t x895 = UINT8_MAX;
	int16_t x896 = INT16_MAX;
	volatile int32_t t175 = -307144546;

    t175 = ((x893-x894)==(x895+x896));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x897 = -1;
	uint64_t x898 = 3LLU;
	int32_t t176 = 6;

    t176 = ((x897-x898)==(x899+x900));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x904 = 12930697U;
	volatile int32_t t177 = -6231244;

    t177 = ((x901-x902)==(x903+x904));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x909 = 106U;
	static uint32_t x910 = UINT32_MAX;
	volatile int8_t x911 = 17;
	uint8_t x912 = 80U;
	volatile int32_t t178 = 1;

    t178 = ((x909-x910)==(x911+x912));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x913 = 765591759LLU;
	static uint64_t x914 = 221313656334LLU;
	uint32_t x915 = 1494279U;
	static uint32_t x916 = 15932911U;
	int32_t t179 = 335152;

    t179 = ((x913-x914)==(x915+x916));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x917 = UINT64_MAX;
	static int8_t x918 = -1;
	volatile uint64_t x919 = 61089LLU;
	int8_t x920 = INT8_MAX;
	int32_t t180 = 0;

    t180 = ((x917-x918)==(x919+x920));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x921 = INT16_MIN;
	int32_t x924 = -1;
	volatile int32_t t181 = 116;

    t181 = ((x921-x922)==(x923+x924));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x925 = -107;
	int16_t x926 = -252;
	volatile int16_t x927 = INT16_MIN;
	int16_t x928 = INT16_MIN;

    t182 = ((x925-x926)==(x927+x928));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x930 = -1;
	int64_t x931 = -1LL;
	uint32_t x932 = 1417762922U;
	volatile int32_t t183 = -5991;

    t183 = ((x929-x930)==(x931+x932));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x937 = -1;
	int8_t x940 = -1;
	int32_t t184 = 23487948;

    t184 = ((x937-x938)==(x939+x940));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x942 = INT8_MAX;
	int8_t x943 = INT8_MAX;
	volatile int16_t x944 = 9688;
	volatile int32_t t185 = 0;

    t185 = ((x941-x942)==(x943+x944));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x945 = 110135U;
	volatile int8_t x946 = INT8_MAX;
	int32_t x947 = -60083;
	int16_t x948 = -1978;

    t186 = ((x945-x946)==(x947+x948));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x949 = UINT64_MAX;
	uint16_t x950 = 1U;
	volatile int32_t t187 = -12;

    t187 = ((x949-x950)==(x951+x952));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x953 = 1;
	uint8_t x954 = 34U;
	int16_t x955 = INT16_MIN;
	volatile int16_t x956 = 2;
	volatile int32_t t188 = -1;

    t188 = ((x953-x954)==(x955+x956));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x957 = -3;
	volatile int8_t x958 = 5;
	static int32_t x959 = INT32_MAX;
	volatile uint32_t x960 = UINT32_MAX;
	volatile int32_t t189 = -113;

    t189 = ((x957-x958)==(x959+x960));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x961 = INT16_MAX;
	volatile int64_t x962 = INT64_MAX;
	int8_t x963 = 16;
	int32_t x964 = -1;
	int32_t t190 = 11;

    t190 = ((x961-x962)==(x963+x964));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x965 = 116133693LLU;
	int16_t x966 = -1;
	uint8_t x967 = 1U;
	int8_t x968 = INT8_MIN;
	int32_t t191 = -3747;

    t191 = ((x965-x966)==(x967+x968));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x969 = 26U;
	int16_t x970 = -1;
	uint32_t x972 = 93342698U;

    t192 = ((x969-x970)==(x971+x972));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x978 = INT64_MIN;
	static uint64_t x979 = 18685306LLU;
	volatile int32_t t193 = 3;

    t193 = ((x977-x978)==(x979+x980));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x981 = 3017U;
	int8_t x982 = INT8_MIN;
	int16_t x984 = INT16_MIN;
	int32_t t194 = 1060005770;

    t194 = ((x981-x982)==(x983+x984));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x986 = 2041003814LLU;
	int64_t x987 = INT64_MIN;
	uint8_t x988 = 7U;
	volatile int32_t t195 = 2489;

    t195 = ((x985-x986)==(x987+x988));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x989 = -1;
	uint32_t x990 = 829308U;
	int32_t x991 = INT32_MIN;
	static int16_t x992 = 638;
	static int32_t t196 = 150;

    t196 = ((x989-x990)==(x991+x992));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x997 = INT8_MAX;
	uint8_t x998 = UINT8_MAX;
	uint16_t x999 = 13U;
	volatile int16_t x1000 = INT16_MIN;
	volatile int32_t t197 = -7899;

    t197 = ((x997-x998)==(x999+x1000));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1009 = 5187648LLU;
	int16_t x1010 = INT16_MIN;
	int32_t x1011 = -13706322;
	volatile uint16_t x1012 = 30861U;
	volatile int32_t t198 = -1;

    t198 = ((x1009-x1010)==(x1011+x1012));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1013 = 3663U;
	volatile int8_t x1015 = 0;
	uint8_t x1016 = 2U;
	static volatile int32_t t199 = 399139386;

    t199 = ((x1013-x1014)==(x1015+x1016));

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

