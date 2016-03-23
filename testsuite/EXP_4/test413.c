
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

static int16_t x2 = -1;
int32_t x24 = -1;
int16_t x50 = 53;
int16_t x51 = -2936;
static int32_t t4 = -9;
int8_t x54 = INT8_MIN;
uint64_t x57 = 544014635399641475LLU;
int16_t x64 = INT16_MIN;
static int8_t x75 = 13;
static volatile int32_t t9 = 71546;
int32_t t10 = 244;
uint16_t x84 = 3U;
int8_t x89 = 0;
uint64_t x91 = 817262915LLU;
volatile int32_t t12 = -192812;
int32_t t13 = 26502540;
int16_t x102 = 98;
static int32_t t14 = -79;
uint64_t x114 = 5197621172LLU;
int32_t t16 = 12;
uint32_t x122 = UINT32_MAX;
uint64_t x123 = UINT64_MAX;
static int8_t x124 = INT8_MIN;
volatile int16_t x126 = INT16_MAX;
int8_t x127 = -1;
uint64_t x141 = UINT64_MAX;
int8_t x144 = INT8_MIN;
static int8_t x162 = -2;
volatile int32_t t27 = -28134;
volatile uint8_t x179 = UINT8_MAX;
uint8_t x183 = 12U;
int32_t t29 = 43;
int64_t x197 = -2876045LL;
volatile uint8_t x198 = UINT8_MAX;
static volatile int32_t t32 = 107;
static volatile int64_t x218 = INT64_MAX;
int32_t x224 = -121;
static int64_t x229 = -3328820850931103LL;
int64_t x237 = INT64_MAX;
int8_t x245 = -1;
int32_t x246 = -1;
uint64_t x247 = UINT64_MAX;
int8_t x248 = 1;
int16_t x252 = -48;
int32_t t39 = -233475;
uint8_t x257 = 2U;
volatile int16_t x258 = INT16_MIN;
static volatile int32_t t40 = 9009;
int32_t x265 = INT32_MAX;
volatile int32_t t43 = -1820573;
volatile int16_t x277 = INT16_MAX;
static volatile int16_t x279 = INT16_MIN;
static int16_t x282 = INT16_MIN;
volatile uint64_t x298 = UINT64_MAX;
uint8_t x304 = 3U;
volatile int32_t t50 = 5;
volatile uint16_t x310 = 15378U;
uint64_t x311 = 69652092972687576LLU;
uint64_t x313 = 3641328647258393968LLU;
int16_t x321 = -1;
static int64_t x324 = -1LL;
uint32_t x325 = 1U;
int8_t x326 = -1;
int64_t x345 = -6916827611150LL;
int32_t t56 = 32;
uint16_t x354 = 2764U;
static int8_t x361 = 0;
volatile int32_t t58 = -29;
uint32_t x379 = 673936671U;
static volatile int64_t x381 = -1LL;
int32_t t60 = 89;
int8_t x385 = -1;
static volatile int64_t x386 = INT64_MAX;
volatile uint64_t x387 = 17351785LLU;
volatile int32_t t63 = -66198221;
volatile uint16_t x417 = 604U;
int8_t x427 = INT8_MIN;
int16_t x428 = INT16_MAX;
int8_t x429 = INT8_MIN;
int8_t x430 = INT8_MAX;
uint32_t x431 = 22U;
static uint64_t x437 = UINT64_MAX;
int8_t x441 = -1;
int16_t x443 = INT16_MIN;
int32_t t71 = 4896354;
volatile int32_t t72 = 0;
uint32_t x460 = 147414U;
volatile int32_t t75 = 1214300;
int16_t x475 = 908;
static volatile int32_t t77 = -9348112;
int16_t x486 = -1;
int32_t x488 = 309;
int64_t x490 = INT64_MAX;
int8_t x491 = 46;
int8_t x496 = 1;
uint64_t x506 = UINT64_MAX;
int8_t x507 = INT8_MIN;
static int16_t x508 = INT16_MIN;
int16_t x510 = 2;
static volatile int32_t t86 = 12;
int64_t x531 = -1LL;
uint8_t x535 = UINT8_MAX;
int32_t x536 = -1;
volatile int32_t t88 = 181;
int16_t x537 = INT16_MIN;
int16_t x553 = INT16_MAX;
volatile int32_t t93 = 2;
int8_t x559 = 0;
static volatile int32_t t94 = -91752;
uint16_t x577 = 342U;
volatile int32_t t97 = -25745;
int32_t x590 = INT32_MIN;
static int8_t x592 = -1;
uint8_t x614 = 44U;
static volatile int64_t x616 = -1LL;
uint16_t x624 = UINT16_MAX;
volatile int32_t t104 = 206;
int16_t x627 = -1;
volatile int32_t t106 = 22861;
int32_t x634 = INT32_MAX;
uint32_t x642 = 71U;
uint32_t x643 = 6342U;
int8_t x644 = -5;
static int32_t x659 = INT32_MIN;
uint64_t x671 = 10LLU;
static int8_t x674 = INT8_MIN;
int8_t x675 = INT8_MIN;
int32_t t117 = 216735;
int32_t x679 = 0;
int8_t x680 = INT8_MIN;
volatile int32_t t118 = -3315218;
static int32_t t119 = -5;
static volatile int8_t x690 = -7;
static uint64_t x691 = 14038663163LLU;
int32_t t120 = -224640;
uint32_t x707 = 188U;
int32_t t122 = -1;
static volatile int32_t t125 = 119;
int8_t x732 = INT8_MIN;
volatile int8_t x747 = 31;
uint8_t x748 = 2U;
int16_t x752 = INT16_MAX;
int16_t x756 = INT16_MAX;
int32_t x757 = INT32_MIN;
int16_t x759 = INT16_MIN;
static int16_t x775 = 2;
int16_t x786 = -15;
int64_t x788 = 9103477170LL;
static uint32_t x790 = 1805U;
int8_t x794 = INT8_MIN;
int8_t x802 = -1;
int16_t x804 = 13483;
int32_t x811 = -123195;
static uint8_t x812 = 0U;
uint64_t x818 = 3236109927343285LLU;
static int8_t x819 = INT8_MAX;
static int32_t t141 = -822;
volatile int32_t t142 = -12657559;
int8_t x836 = 5;
int16_t x839 = -1;
int8_t x841 = INT8_MAX;
static int16_t x845 = -1;
static uint32_t x847 = 196U;
int64_t x853 = INT64_MAX;
static uint32_t x855 = 101719022U;
uint32_t x858 = 0U;
uint8_t x859 = UINT8_MAX;
int32_t t151 = 815;
int8_t x866 = INT8_MIN;
int16_t x868 = INT16_MIN;
volatile int32_t t152 = -3;
int64_t x874 = INT64_MIN;
static int32_t t154 = 2;
uint8_t x883 = 28U;
volatile int8_t x889 = INT8_MIN;
int8_t x892 = 0;
volatile int32_t t158 = 0;
uint8_t x901 = 15U;
volatile int32_t x905 = INT32_MIN;
uint16_t x909 = UINT16_MAX;
int32_t x910 = INT32_MAX;
uint16_t x919 = 1669U;
int16_t x923 = -1;
int16_t x932 = 23;
volatile int8_t x947 = INT8_MAX;
int16_t x956 = INT16_MAX;
static int16_t x966 = INT16_MIN;
volatile uint16_t x972 = 527U;
uint64_t x976 = 1016215472122929479LLU;
int32_t t172 = -1676;
int8_t x979 = INT8_MIN;
volatile int32_t t173 = 779442871;
static volatile uint64_t x987 = 1024067370878LLU;
uint16_t x992 = 4296U;
volatile int32_t t177 = 22841055;
volatile int64_t x1010 = INT64_MIN;
volatile int32_t t178 = 7;
static volatile int32_t t179 = 169364;
int64_t x1021 = INT64_MIN;
int16_t x1027 = INT16_MIN;
static volatile int16_t x1034 = INT16_MAX;
int32_t t182 = 15;
static uint8_t x1040 = UINT8_MAX;
uint32_t x1057 = UINT32_MAX;
uint64_t x1059 = 8101666810LLU;
static int32_t t187 = 2;
int8_t x1076 = INT8_MIN;
volatile uint32_t x1080 = 315712498U;
static uint32_t x1084 = UINT32_MAX;
int16_t x1086 = INT16_MAX;
uint32_t x1095 = UINT32_MAX;
volatile int32_t t193 = -41267021;
static volatile int32_t t196 = -144141895;
volatile int64_t x1115 = INT64_MAX;
int16_t x1119 = -4765;
int16_t x1122 = INT16_MIN;
int32_t t199 = 47;


void f0(void) {
    	static int64_t x1 = -220228364710LL;
	static int32_t x3 = -130;
	static int16_t x4 = -1;
	int32_t t0 = -109377;

    t0 = (x1!=(x2-(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = 7;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 128503LLU;
	int32_t x12 = -30502052;
	volatile int32_t t1 = 2172;

    t1 = (x9!=(x10-(x11*x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x21 = -1;
	uint64_t x22 = 8287843LLU;
	int16_t x23 = INT16_MAX;
	volatile int32_t t2 = -112930554;

    t2 = (x21!=(x22-(x23*x24)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x45 = 32414301U;
	int32_t x46 = INT32_MIN;
	uint32_t x47 = 132294U;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t3 = 2;

    t3 = (x45!=(x46-(x47*x48)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x49 = INT64_MAX;
	int8_t x52 = -1;

    t4 = (x49!=(x50-(x51*x52)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x53 = -1LL;
	int16_t x55 = -1;
	int32_t x56 = INT32_MAX;
	int32_t t5 = 748973642;

    t5 = (x53!=(x54-(x55*x56)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x58 = INT8_MIN;
	volatile int8_t x59 = INT8_MIN;
	int32_t x60 = 5561;
	int32_t t6 = 1600;

    t6 = (x57!=(x58-(x59*x60)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x61 = -484242017LL;
	int64_t x62 = 1842351LL;
	static uint16_t x63 = UINT16_MAX;
	int32_t t7 = 483;

    t7 = (x61!=(x62-(x63*x64)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x65 = 482;
	uint8_t x66 = 83U;
	volatile int8_t x67 = INT8_MAX;
	uint32_t x68 = 62U;
	int32_t t8 = -93728;

    t8 = (x65!=(x66-(x67*x68)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x73 = -1;
	uint64_t x74 = 110420676909LLU;
	int16_t x76 = INT16_MIN;

    t9 = (x73!=(x74-(x75*x76)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = 0;
	uint8_t x78 = 5U;
	uint32_t x79 = 16203089U;
	uint32_t x80 = 1900471U;

    t10 = (x77!=(x78-(x79*x80)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x81 = 3;
	int32_t x82 = INT32_MIN;
	static int8_t x83 = -5;
	int32_t t11 = -4156;

    t11 = (x81!=(x82-(x83*x84)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x90 = -6455310252LL;
	uint16_t x92 = 49U;

    t12 = (x89!=(x90-(x91*x92)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x93 = -1;
	int16_t x94 = 247;
	volatile int8_t x95 = -1;
	int64_t x96 = -1LL;

    t13 = (x93!=(x94-(x95*x96)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;

    t14 = (x101!=(x102-(x103*x104)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x105 = 5411U;
	static int8_t x106 = -1;
	int32_t x107 = -1;
	static uint32_t x108 = 4055U;
	static int32_t t15 = -744460561;

    t15 = (x105!=(x106-(x107*x108)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	volatile int32_t x115 = 682334109;
	volatile uint8_t x116 = 0U;

    t16 = (x113!=(x114-(x115*x116)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x117 = INT16_MIN;
	uint16_t x118 = 37U;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 334595982LLU;
	int32_t t17 = 1;

    t17 = (x117!=(x118-(x119*x120)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x121 = 7U;
	int32_t t18 = -114237;

    t18 = (x121!=(x122-(x123*x124)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x125 = -1;
	uint8_t x128 = 127U;
	volatile int32_t t19 = -190;

    t19 = (x125!=(x126-(x127*x128)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x133 = -8;
	static volatile int32_t x134 = -39739;
	uint16_t x135 = 918U;
	volatile int16_t x136 = -443;
	volatile int32_t t20 = 173075560;

    t20 = (x133!=(x134-(x135*x136)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x137 = UINT64_MAX;
	uint32_t x138 = UINT32_MAX;
	int32_t x139 = 52;
	int8_t x140 = 19;
	static volatile int32_t t21 = -88;

    t21 = (x137!=(x138-(x139*x140)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x142 = 10714U;
	static uint8_t x143 = UINT8_MAX;
	volatile int32_t t22 = -8;

    t22 = (x141!=(x142-(x143*x144)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x145 = INT8_MAX;
	uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int32_t t23 = 87378671;

    t23 = (x145!=(x146-(x147*x148)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x149 = INT32_MIN;
	int64_t x150 = INT64_MIN;
	uint8_t x151 = 10U;
	volatile int8_t x152 = -1;
	volatile int32_t t24 = -1;

    t24 = (x149!=(x150-(x151*x152)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x153 = 16U;
	static int32_t x154 = INT32_MIN;
	static uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 327U;
	static int32_t t25 = 1803854;

    t25 = (x153!=(x154-(x155*x156)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x157 = INT8_MAX;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MAX;
	uint64_t x160 = UINT64_MAX;
	int32_t t26 = 11242;

    t26 = (x157!=(x158-(x159*x160)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x161 = INT32_MIN;
	int32_t x163 = -2746329;
	uint8_t x164 = UINT8_MAX;

    t27 = (x161!=(x162-(x163*x164)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x177 = INT16_MIN;
	uint64_t x178 = UINT64_MAX;
	volatile int8_t x180 = -1;
	int32_t t28 = 836;

    t28 = (x177!=(x178-(x179*x180)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x181 = INT64_MIN;
	int16_t x182 = 35;
	static int16_t x184 = -1;

    t29 = (x181!=(x182-(x183*x184)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x185 = 1;
	volatile uint32_t x186 = UINT32_MAX;
	int8_t x187 = -1;
	volatile int16_t x188 = INT16_MAX;
	static volatile int32_t t30 = -53008;

    t30 = (x185!=(x186-(x187*x188)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x199 = 0;
	uint32_t x200 = 1220921470U;
	int32_t t31 = 162;

    t31 = (x197!=(x198-(x199*x200)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x201 = 1269038404617199949LLU;
	volatile uint16_t x202 = 41U;
	volatile uint16_t x203 = UINT16_MAX;
	static int8_t x204 = -1;

    t32 = (x201!=(x202-(x203*x204)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x217 = INT16_MAX;
	volatile uint64_t x219 = 31068225273LLU;
	static uint8_t x220 = 33U;
	int32_t t33 = -59211984;

    t33 = (x217!=(x218-(x219*x220)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x221 = 227U;
	uint64_t x222 = 33199041LLU;
	int8_t x223 = INT8_MIN;
	volatile int32_t t34 = 193842;

    t34 = (x221!=(x222-(x223*x224)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x225 = 84;
	static uint32_t x226 = UINT32_MAX;
	volatile int64_t x227 = 380518LL;
	int64_t x228 = -1LL;
	static volatile int32_t t35 = -820268;

    t35 = (x225!=(x226-(x227*x228)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x230 = UINT8_MAX;
	uint32_t x231 = 57U;
	int32_t x232 = 5724127;
	int32_t t36 = 5;

    t36 = (x229!=(x230-(x231*x232)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = 172808119259328654LLU;
	int32_t x240 = INT32_MIN;
	volatile int32_t t37 = 237669353;

    t37 = (x237!=(x238-(x239*x240)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t t38 = -626757;

    t38 = (x245!=(x246-(x247*x248)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x249 = 5;
	static uint32_t x250 = 464U;
	static volatile uint16_t x251 = 187U;

    t39 = (x249!=(x250-(x251*x252)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x259 = 54;
	static int16_t x260 = INT16_MIN;

    t40 = (x257!=(x258-(x259*x260)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x261 = -1LL;
	uint64_t x262 = UINT64_MAX;
	static uint16_t x263 = UINT16_MAX;
	int32_t x264 = -1;
	volatile int32_t t41 = 107;

    t41 = (x261!=(x262-(x263*x264)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x266 = INT16_MAX;
	static uint64_t x267 = 7LLU;
	int16_t x268 = INT16_MIN;
	volatile int32_t t42 = 15270510;

    t42 = (x265!=(x266-(x267*x268)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	int16_t x270 = INT16_MIN;
	static uint64_t x271 = UINT64_MAX;
	int16_t x272 = -1;

    t43 = (x269!=(x270-(x271*x272)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x273 = INT16_MIN;
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	int8_t x276 = -1;
	int32_t t44 = -340204;

    t44 = (x273!=(x274-(x275*x276)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x278 = INT16_MIN;
	static int16_t x280 = INT16_MIN;
	int32_t t45 = 1699;

    t45 = (x277!=(x278-(x279*x280)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x281 = -1LL;
	int8_t x283 = -1;
	int32_t x284 = -1;
	int32_t t46 = 6;

    t46 = (x281!=(x282-(x283*x284)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x285 = INT64_MIN;
	int8_t x286 = 1;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 27967U;
	volatile int32_t t47 = 89;

    t47 = (x285!=(x286-(x287*x288)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x289 = 213441569LLU;
	int8_t x290 = -11;
	uint8_t x291 = 0U;
	static uint16_t x292 = UINT16_MAX;
	volatile int32_t t48 = 4;

    t48 = (x289!=(x290-(x291*x292)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x297 = UINT32_MAX;
	static int64_t x299 = -84LL;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t49 = 349665569;

    t49 = (x297!=(x298-(x299*x300)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x301 = 5U;
	static uint8_t x302 = 42U;
	uint64_t x303 = 183999190743833235LLU;

    t50 = (x301!=(x302-(x303*x304)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x309 = -1LL;
	static int8_t x312 = INT8_MIN;
	int32_t t51 = -3358;

    t51 = (x309!=(x310-(x311*x312)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x314 = -887379;
	int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MAX;
	int32_t t52 = 60345327;

    t52 = (x313!=(x314-(x315*x316)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x322 = -8;
	uint8_t x323 = 1U;
	volatile int32_t t53 = 44264;

    t53 = (x321!=(x322-(x323*x324)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x327 = 10;
	uint32_t x328 = 60697494U;
	int32_t t54 = 3;

    t54 = (x325!=(x326-(x327*x328)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x333 = 1LLU;
	int64_t x334 = 4237782948176165LL;
	int8_t x335 = INT8_MAX;
	int64_t x336 = 22666033281773LL;
	int32_t t55 = 2062101;

    t55 = (x333!=(x334-(x335*x336)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x346 = UINT16_MAX;
	static uint32_t x347 = UINT32_MAX;
	static int16_t x348 = 13283;

    t56 = (x345!=(x346-(x347*x348)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x353 = 25979U;
	static int16_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t57 = 463662193;

    t57 = (x353!=(x354-(x355*x356)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x362 = INT64_MIN;
	int16_t x363 = INT16_MIN;
	int64_t x364 = 18491369896734LL;

    t58 = (x361!=(x362-(x363*x364)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x377 = -157061;
	static uint8_t x378 = 68U;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t59 = 11;

    t59 = (x377!=(x378-(x379*x380)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x382 = UINT64_MAX;
	static int32_t x383 = 36;
	uint32_t x384 = 232203U;

    t60 = (x381!=(x382-(x383*x384)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x388 = 180877;
	int32_t t61 = 331513414;

    t61 = (x385!=(x386-(x387*x388)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = 1181LL;
	int16_t x399 = -7043;
	uint32_t x400 = 623309U;
	volatile int32_t t62 = 47645597;

    t62 = (x397!=(x398-(x399*x400)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x401 = INT16_MAX;
	volatile int16_t x402 = -127;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = UINT32_MAX;

    t63 = (x401!=(x402-(x403*x404)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x405 = 7U;
	uint8_t x406 = 5U;
	int16_t x407 = 1422;
	int64_t x408 = -858568602064065LL;
	static volatile int32_t t64 = -26;

    t64 = (x405!=(x406-(x407*x408)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x409 = INT8_MIN;
	uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MAX;
	int32_t x412 = 780208;
	int32_t t65 = -27432;

    t65 = (x409!=(x410-(x411*x412)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x418 = -1LL;
	uint64_t x419 = 485044673771LLU;
	int8_t x420 = -2;
	volatile int32_t t66 = -239647113;

    t66 = (x417!=(x418-(x419*x420)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x421 = INT64_MIN;
	volatile int8_t x422 = -1;
	int8_t x423 = -1;
	static volatile uint64_t x424 = 2067834791108679959LLU;
	int32_t t67 = -24;

    t67 = (x421!=(x422-(x423*x424)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x425 = 1;
	volatile uint64_t x426 = UINT64_MAX;
	volatile int32_t t68 = -1;

    t68 = (x425!=(x426-(x427*x428)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x432 = INT16_MIN;
	volatile int32_t t69 = -18663;

    t69 = (x429!=(x430-(x431*x432)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x438 = -32;
	int16_t x439 = -1;
	volatile int16_t x440 = 0;
	volatile int32_t t70 = 12965;

    t70 = (x437!=(x438-(x439*x440)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x442 = 53U;
	volatile uint8_t x444 = 28U;

    t71 = (x441!=(x442-(x443*x444)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x449 = 26U;
	int16_t x450 = 2;
	int16_t x451 = 2;
	volatile uint64_t x452 = 1798036261258850842LLU;

    t72 = (x449!=(x450-(x451*x452)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x453 = -1;
	int16_t x454 = INT16_MAX;
	static int64_t x455 = -1LL;
	int16_t x456 = -1;
	volatile int32_t t73 = -2138;

    t73 = (x453!=(x454-(x455*x456)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x457 = -1;
	int8_t x458 = INT8_MIN;
	uint64_t x459 = 7309567967792677LLU;
	static int32_t t74 = -3;

    t74 = (x457!=(x458-(x459*x460)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x461 = 126U;
	int8_t x462 = INT8_MIN;
	int32_t x463 = 1103;
	volatile int8_t x464 = INT8_MIN;

    t75 = (x461!=(x462-(x463*x464)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x469 = -1;
	volatile uint8_t x470 = 14U;
	uint64_t x471 = UINT64_MAX;
	int32_t x472 = -48289;
	volatile int32_t t76 = 23407;

    t76 = (x469!=(x470-(x471*x472)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x473 = INT8_MIN;
	int8_t x474 = 3;
	uint16_t x476 = 11060U;

    t77 = (x473!=(x474-(x475*x476)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x477 = INT32_MIN;
	uint16_t x478 = 144U;
	static uint8_t x479 = 75U;
	uint16_t x480 = 17544U;
	static int32_t t78 = 28590010;

    t78 = (x477!=(x478-(x479*x480)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x485 = 0;
	uint32_t x487 = 1098285U;
	int32_t t79 = -926909385;

    t79 = (x485!=(x486-(x487*x488)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x489 = 6U;
	static uint8_t x492 = UINT8_MAX;
	int32_t t80 = -17;

    t80 = (x489!=(x490-(x491*x492)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x493 = -483784150857345LL;
	int8_t x494 = 0;
	volatile int32_t x495 = INT32_MAX;
	static volatile int32_t t81 = -3;

    t81 = (x493!=(x494-(x495*x496)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x497 = 10326U;
	int16_t x498 = INT16_MAX;
	int16_t x499 = -69;
	static int16_t x500 = -3104;
	int32_t t82 = 0;

    t82 = (x497!=(x498-(x499*x500)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x505 = -15964;
	int32_t t83 = 692;

    t83 = (x505!=(x506-(x507*x508)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x509 = INT32_MIN;
	static int8_t x511 = -1;
	int16_t x512 = 52;
	volatile int32_t t84 = 923;

    t84 = (x509!=(x510-(x511*x512)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x517 = 25107U;
	static uint16_t x518 = UINT16_MAX;
	int16_t x519 = -491;
	uint32_t x520 = UINT32_MAX;
	int32_t t85 = -19572;

    t85 = (x517!=(x518-(x519*x520)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x525 = -1;
	static int64_t x526 = INT64_MAX;
	int16_t x527 = INT16_MAX;
	uint64_t x528 = 49851593574796480LLU;

    t86 = (x525!=(x526-(x527*x528)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x529 = UINT32_MAX;
	int64_t x530 = 1101747923709250LL;
	static volatile int64_t x532 = 3310LL;
	static volatile int32_t t87 = 15;

    t87 = (x529!=(x530-(x531*x532)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x533 = INT32_MIN;
	volatile uint8_t x534 = UINT8_MAX;

    t88 = (x533!=(x534-(x535*x536)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x538 = 6971576LLU;
	static volatile uint32_t x539 = UINT32_MAX;
	uint16_t x540 = 7U;
	int32_t t89 = -17497422;

    t89 = (x537!=(x538-(x539*x540)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x541 = 1;
	uint16_t x542 = 1U;
	int16_t x543 = INT16_MIN;
	int16_t x544 = 14;
	static int32_t t90 = -1946247;

    t90 = (x541!=(x542-(x543*x544)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x545 = -1;
	int32_t x546 = -1;
	volatile int64_t x547 = INT64_MAX;
	uint64_t x548 = 11LLU;
	int32_t t91 = 35134;

    t91 = (x545!=(x546-(x547*x548)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x549 = 77U;
	int16_t x550 = -805;
	static int16_t x551 = -1;
	uint32_t x552 = UINT32_MAX;
	static volatile int32_t t92 = -415109749;

    t92 = (x549!=(x550-(x551*x552)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x554 = INT8_MIN;
	static uint16_t x555 = UINT16_MAX;
	static int16_t x556 = -1;

    t93 = (x553!=(x554-(x555*x556)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x557 = INT64_MAX;
	uint16_t x558 = UINT16_MAX;
	uint8_t x560 = UINT8_MAX;

    t94 = (x557!=(x558-(x559*x560)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x561 = 2319LLU;
	int16_t x562 = -15;
	int64_t x563 = -1LL;
	static int64_t x564 = INT64_MAX;
	volatile int32_t t95 = -1014524;

    t95 = (x561!=(x562-(x563*x564)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x565 = 0;
	volatile int8_t x566 = -1;
	int16_t x567 = 3;
	static int16_t x568 = INT16_MIN;
	volatile int32_t t96 = 2033;

    t96 = (x565!=(x566-(x567*x568)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x578 = 105U;
	int32_t x579 = -36;
	int32_t x580 = 2246;

    t97 = (x577!=(x578-(x579*x580)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x589 = INT64_MIN;
	volatile uint64_t x591 = 233699112LLU;
	static volatile int32_t t98 = -1370720;

    t98 = (x589!=(x590-(x591*x592)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x593 = -1LL;
	static uint64_t x594 = 436830470609LLU;
	int8_t x595 = 0;
	int16_t x596 = INT16_MIN;
	int32_t t99 = -1306699;

    t99 = (x593!=(x594-(x595*x596)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x597 = 2;
	uint32_t x598 = UINT32_MAX;
	static uint32_t x599 = 75347U;
	volatile int32_t x600 = INT32_MIN;
	int32_t t100 = 0;

    t100 = (x597!=(x598-(x599*x600)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x605 = 4U;
	uint64_t x606 = 40844605838554LLU;
	volatile int16_t x607 = INT16_MIN;
	static uint32_t x608 = 8739U;
	static int32_t t101 = -10970;

    t101 = (x605!=(x606-(x607*x608)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x609 = 916104U;
	int32_t x610 = -1;
	uint64_t x611 = 2096LLU;
	uint64_t x612 = 9305LLU;
	int32_t t102 = 1348980;

    t102 = (x609!=(x610-(x611*x612)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x613 = 374750LL;
	volatile int16_t x615 = INT16_MAX;
	volatile int32_t t103 = 63;

    t103 = (x613!=(x614-(x615*x616)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x621 = -2;
	uint64_t x622 = 395370LLU;
	static int16_t x623 = 412;

    t104 = (x621!=(x622-(x623*x624)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x625 = 669;
	volatile int64_t x626 = -1LL;
	uint32_t x628 = UINT32_MAX;
	int32_t t105 = 359938380;

    t105 = (x625!=(x626-(x627*x628)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x629 = INT64_MIN;
	int16_t x630 = INT16_MAX;
	uint64_t x631 = 29236LLU;
	uint16_t x632 = 424U;

    t106 = (x629!=(x630-(x631*x632)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x633 = -1;
	static int64_t x635 = 10832229LL;
	uint32_t x636 = UINT32_MAX;
	volatile int32_t t107 = -5916605;

    t107 = (x633!=(x634-(x635*x636)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x637 = 6883U;
	volatile int8_t x638 = -1;
	static uint16_t x639 = UINT16_MAX;
	uint8_t x640 = 1U;
	volatile int32_t t108 = 1972617;

    t108 = (x637!=(x638-(x639*x640)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x641 = -1;
	int32_t t109 = 99632863;

    t109 = (x641!=(x642-(x643*x644)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x645 = 48U;
	int8_t x646 = INT8_MIN;
	static uint32_t x647 = UINT32_MAX;
	int8_t x648 = -1;
	int32_t t110 = 376961;

    t110 = (x645!=(x646-(x647*x648)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x649 = 14;
	int8_t x650 = -51;
	int8_t x651 = INT8_MIN;
	int16_t x652 = 288;
	volatile int32_t t111 = -27;

    t111 = (x649!=(x650-(x651*x652)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x653 = INT64_MAX;
	uint8_t x654 = 27U;
	volatile int64_t x655 = 3053791887597LL;
	static int64_t x656 = -1LL;
	static int32_t t112 = 1;

    t112 = (x653!=(x654-(x655*x656)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x657 = INT8_MIN;
	static int8_t x658 = -3;
	int64_t x660 = 937LL;
	static volatile int32_t t113 = -110698;

    t113 = (x657!=(x658-(x659*x660)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x661 = 0;
	int64_t x662 = -1LL;
	int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MAX;
	int32_t t114 = 369226469;

    t114 = (x661!=(x662-(x663*x664)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x665 = UINT16_MAX;
	static uint32_t x666 = UINT32_MAX;
	int32_t x667 = INT32_MIN;
	int8_t x668 = 0;
	int32_t t115 = 238296458;

    t115 = (x665!=(x666-(x667*x668)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x669 = INT16_MIN;
	int8_t x670 = INT8_MIN;
	int8_t x672 = -1;
	int32_t t116 = -9473181;

    t116 = (x669!=(x670-(x671*x672)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x673 = -1;
	int32_t x676 = 1;

    t117 = (x673!=(x674-(x675*x676)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = -14;

    t118 = (x677!=(x678-(x679*x680)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x685 = 1;
	int32_t x686 = INT32_MIN;
	uint16_t x687 = 6238U;
	int8_t x688 = INT8_MIN;

    t119 = (x685!=(x686-(x687*x688)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x689 = -1LL;
	static int64_t x692 = INT64_MIN;

    t120 = (x689!=(x690-(x691*x692)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x693 = -1LL;
	int16_t x694 = -1;
	int64_t x695 = -3075085LL;
	int8_t x696 = -23;
	int32_t t121 = -12;

    t121 = (x693!=(x694-(x695*x696)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x705 = INT16_MIN;
	int64_t x706 = INT64_MIN;
	uint16_t x708 = 0U;

    t122 = (x705!=(x706-(x707*x708)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = -12;
	uint64_t x711 = 1859764096819403065LLU;
	int64_t x712 = INT64_MIN;
	volatile int32_t t123 = 9928;

    t123 = (x709!=(x710-(x711*x712)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x713 = INT64_MIN;
	volatile uint8_t x714 = 1U;
	int8_t x715 = 1;
	int16_t x716 = -188;
	int32_t t124 = 23444043;

    t124 = (x713!=(x714-(x715*x716)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x722 = -1;
	static int64_t x723 = -1LL;
	int16_t x724 = -985;

    t125 = (x721!=(x722-(x723*x724)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x729 = INT64_MIN;
	uint8_t x730 = 1U;
	int64_t x731 = -1LL;
	volatile int32_t t126 = 47092493;

    t126 = (x729!=(x730-(x731*x732)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x733 = 0U;
	uint32_t x734 = UINT32_MAX;
	int8_t x735 = -1;
	uint32_t x736 = 1343285U;
	volatile int32_t t127 = -4274646;

    t127 = (x733!=(x734-(x735*x736)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x745 = 334013601745286088LLU;
	static volatile uint16_t x746 = 32265U;
	int32_t t128 = 3;

    t128 = (x745!=(x746-(x747*x748)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x749 = 2;
	int16_t x750 = INT16_MAX;
	int16_t x751 = INT16_MIN;
	int32_t t129 = -232;

    t129 = (x749!=(x750-(x751*x752)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x753 = INT64_MAX;
	static int8_t x754 = -1;
	uint8_t x755 = UINT8_MAX;
	volatile int32_t t130 = 24576903;

    t130 = (x753!=(x754-(x755*x756)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x758 = -56;
	volatile int8_t x760 = -38;
	static int32_t t131 = 47;

    t131 = (x757!=(x758-(x759*x760)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x769 = 6;
	int64_t x770 = -923945178360430096LL;
	int32_t x771 = -480111;
	static uint32_t x772 = 5685936U;
	int32_t t132 = 1;

    t132 = (x769!=(x770-(x771*x772)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x773 = 48206U;
	int32_t x774 = -1;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t133 = -369450151;

    t133 = (x773!=(x774-(x775*x776)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x777 = 6U;
	int32_t x778 = INT32_MIN;
	uint64_t x779 = 154LLU;
	int32_t x780 = INT32_MIN;
	int32_t t134 = 1530;

    t134 = (x777!=(x778-(x779*x780)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x785 = UINT64_MAX;
	uint16_t x787 = 328U;
	volatile int32_t t135 = 612256;

    t135 = (x785!=(x786-(x787*x788)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x789 = 7892U;
	int64_t x791 = -1LL;
	volatile int64_t x792 = -1LL;
	static volatile int32_t t136 = -3953569;

    t136 = (x789!=(x790-(x791*x792)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x793 = INT64_MAX;
	int16_t x795 = 1;
	uint16_t x796 = 13U;
	int32_t t137 = -45663415;

    t137 = (x793!=(x794-(x795*x796)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x797 = 3180082393LL;
	int16_t x798 = 971;
	static uint8_t x799 = 0U;
	int16_t x800 = INT16_MIN;
	int32_t t138 = -807778;

    t138 = (x797!=(x798-(x799*x800)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x801 = 235799742U;
	volatile uint8_t x803 = UINT8_MAX;
	int32_t t139 = 0;

    t139 = (x801!=(x802-(x803*x804)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x809 = INT8_MAX;
	static int32_t x810 = INT32_MAX;
	int32_t t140 = -109820;

    t140 = (x809!=(x810-(x811*x812)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x817 = 7789713LL;
	int8_t x820 = INT8_MIN;

    t141 = (x817!=(x818-(x819*x820)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x821 = UINT32_MAX;
	int16_t x822 = INT16_MAX;
	int32_t x823 = INT32_MAX;
	volatile uint32_t x824 = 571197231U;

    t142 = (x821!=(x822-(x823*x824)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x825 = -1;
	volatile uint64_t x826 = UINT64_MAX;
	volatile int64_t x827 = -87107714LL;
	volatile uint16_t x828 = 3U;
	static int32_t t143 = 67378281;

    t143 = (x825!=(x826-(x827*x828)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x829 = UINT16_MAX;
	volatile uint8_t x830 = 0U;
	int8_t x831 = INT8_MIN;
	uint8_t x832 = 21U;
	int32_t t144 = 4613;

    t144 = (x829!=(x830-(x831*x832)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x833 = INT8_MIN;
	uint16_t x834 = 56U;
	volatile uint64_t x835 = 38642270940256LLU;
	int32_t t145 = 0;

    t145 = (x833!=(x834-(x835*x836)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x837 = INT16_MIN;
	static int64_t x838 = 528LL;
	int64_t x840 = -1LL;
	int32_t t146 = -787817677;

    t146 = (x837!=(x838-(x839*x840)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x842 = -1;
	int32_t x843 = INT32_MIN;
	uint64_t x844 = 256903LLU;
	volatile int32_t t147 = 2015355;

    t147 = (x841!=(x842-(x843*x844)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x846 = 73;
	int16_t x848 = INT16_MIN;
	volatile int32_t t148 = -26508324;

    t148 = (x845!=(x846-(x847*x848)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x849 = INT32_MIN;
	uint16_t x850 = UINT16_MAX;
	static uint8_t x851 = UINT8_MAX;
	static uint16_t x852 = UINT16_MAX;
	static volatile int32_t t149 = 0;

    t149 = (x849!=(x850-(x851*x852)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x854 = INT32_MIN;
	uint32_t x856 = 2946393U;
	volatile int32_t t150 = 223056;

    t150 = (x853!=(x854-(x855*x856)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x857 = INT16_MIN;
	static uint16_t x860 = 139U;

    t151 = (x857!=(x858-(x859*x860)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x865 = -1;
	volatile uint64_t x867 = 2593827910955LLU;

    t152 = (x865!=(x866-(x867*x868)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x873 = UINT32_MAX;
	int8_t x875 = INT8_MIN;
	static int16_t x876 = INT16_MAX;
	static volatile int32_t t153 = 12533;

    t153 = (x873!=(x874-(x875*x876)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x877 = INT32_MAX;
	int8_t x878 = INT8_MAX;
	int64_t x879 = -1LL;
	uint64_t x880 = 5072330548240079794LLU;

    t154 = (x877!=(x878-(x879*x880)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x881 = UINT16_MAX;
	volatile uint64_t x882 = 5LLU;
	int16_t x884 = -1;
	volatile int32_t t155 = -6;

    t155 = (x881!=(x882-(x883*x884)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x885 = INT8_MAX;
	int64_t x886 = 5067725723LL;
	int64_t x887 = -1LL;
	static uint8_t x888 = UINT8_MAX;
	int32_t t156 = 557021;

    t156 = (x885!=(x886-(x887*x888)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x890 = 69;
	uint32_t x891 = 989974U;
	int32_t t157 = 13413;

    t157 = (x889!=(x890-(x891*x892)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x893 = -1;
	int8_t x894 = -1;
	volatile uint64_t x895 = 33605LLU;
	uint32_t x896 = UINT32_MAX;

    t158 = (x893!=(x894-(x895*x896)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x897 = -1LL;
	int8_t x898 = 12;
	volatile uint32_t x899 = UINT32_MAX;
	static int8_t x900 = INT8_MIN;
	static int32_t t159 = 89996938;

    t159 = (x897!=(x898-(x899*x900)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x902 = 324671LLU;
	int32_t x903 = -1;
	int32_t x904 = -1;
	int32_t t160 = -1486;

    t160 = (x901!=(x902-(x903*x904)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x906 = 197617LL;
	static int16_t x907 = 5;
	static uint16_t x908 = UINT16_MAX;
	volatile int32_t t161 = -11;

    t161 = (x905!=(x906-(x907*x908)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x911 = INT16_MIN;
	int8_t x912 = -1;
	volatile int32_t t162 = 255;

    t162 = (x909!=(x910-(x911*x912)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x917 = 0;
	int16_t x918 = -14;
	volatile int8_t x920 = -1;
	int32_t t163 = -30285;

    t163 = (x917!=(x918-(x919*x920)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x921 = -1;
	int32_t x922 = -1;
	int8_t x924 = INT8_MIN;
	volatile int32_t t164 = 2;

    t164 = (x921!=(x922-(x923*x924)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x925 = -1;
	int8_t x926 = INT8_MIN;
	int32_t x927 = INT32_MAX;
	uint64_t x928 = 66LLU;
	volatile int32_t t165 = 2134;

    t165 = (x925!=(x926-(x927*x928)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x929 = INT8_MIN;
	volatile int8_t x930 = INT8_MAX;
	uint16_t x931 = UINT16_MAX;
	volatile int32_t t166 = 47316723;

    t166 = (x929!=(x930-(x931*x932)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x945 = INT8_MIN;
	volatile int8_t x946 = INT8_MIN;
	uint64_t x948 = 40613937534097642LLU;
	int32_t t167 = 24;

    t167 = (x945!=(x946-(x947*x948)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x953 = -614427786;
	int64_t x954 = -40775541LL;
	uint64_t x955 = UINT64_MAX;
	int32_t t168 = 11;

    t168 = (x953!=(x954-(x955*x956)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x957 = INT32_MIN;
	int64_t x958 = 3288534126034LL;
	static uint16_t x959 = UINT16_MAX;
	int16_t x960 = INT16_MAX;
	int32_t t169 = 243811;

    t169 = (x957!=(x958-(x959*x960)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x965 = -449;
	int16_t x967 = -1;
	uint16_t x968 = UINT16_MAX;
	volatile int32_t t170 = -1591714;

    t170 = (x965!=(x966-(x967*x968)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x969 = 979U;
	uint64_t x970 = 386438345667LLU;
	static volatile int16_t x971 = INT16_MIN;
	int32_t t171 = -794138555;

    t171 = (x969!=(x970-(x971*x972)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x973 = 406U;
	volatile int8_t x974 = 0;
	int64_t x975 = 493508566LL;

    t172 = (x973!=(x974-(x975*x976)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x977 = INT16_MIN;
	uint8_t x978 = 5U;
	uint16_t x980 = 6U;

    t173 = (x977!=(x978-(x979*x980)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x981 = 27718LLU;
	int64_t x982 = 4964436344412LL;
	uint16_t x983 = 47U;
	static volatile int64_t x984 = -899570539LL;
	volatile int32_t t174 = -390934;

    t174 = (x981!=(x982-(x983*x984)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x985 = INT8_MIN;
	static volatile int32_t x986 = INT32_MIN;
	uint8_t x988 = 14U;
	static int32_t t175 = 2;

    t175 = (x985!=(x986-(x987*x988)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x989 = 179147793;
	int16_t x990 = INT16_MIN;
	int32_t x991 = 234592;
	volatile int32_t t176 = 4470666;

    t176 = (x989!=(x990-(x991*x992)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x997 = UINT16_MAX;
	static int16_t x998 = -6;
	uint64_t x999 = UINT64_MAX;
	volatile int8_t x1000 = 4;

    t177 = (x997!=(x998-(x999*x1000)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1009 = INT64_MAX;
	uint64_t x1011 = 25350LLU;
	int32_t x1012 = INT32_MAX;

    t178 = (x1009!=(x1010-(x1011*x1012)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1017 = -2244959772660555LL;
	int8_t x1018 = INT8_MIN;
	static uint32_t x1019 = UINT32_MAX;
	int32_t x1020 = INT32_MAX;

    t179 = (x1017!=(x1018-(x1019*x1020)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1022 = 23U;
	int16_t x1023 = 76;
	uint64_t x1024 = UINT64_MAX;
	volatile int32_t t180 = 60;

    t180 = (x1021!=(x1022-(x1023*x1024)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1025 = -513901;
	volatile int8_t x1026 = INT8_MIN;
	int16_t x1028 = INT16_MIN;
	int32_t t181 = 1534672;

    t181 = (x1025!=(x1026-(x1027*x1028)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1033 = UINT64_MAX;
	static uint32_t x1035 = UINT32_MAX;
	int32_t x1036 = INT32_MIN;

    t182 = (x1033!=(x1034-(x1035*x1036)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1037 = INT8_MIN;
	volatile int16_t x1038 = INT16_MIN;
	int8_t x1039 = INT8_MAX;
	static volatile int32_t t183 = 0;

    t183 = (x1037!=(x1038-(x1039*x1040)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1041 = -1;
	int32_t x1042 = 80550;
	uint32_t x1043 = UINT32_MAX;
	static int32_t x1044 = -1;
	volatile int32_t t184 = 33652;

    t184 = (x1041!=(x1042-(x1043*x1044)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1045 = 104U;
	static uint32_t x1046 = UINT32_MAX;
	int64_t x1047 = -1LL;
	int32_t x1048 = -53061;
	volatile int32_t t185 = -6575448;

    t185 = (x1045!=(x1046-(x1047*x1048)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1058 = 9;
	int32_t x1060 = INT32_MIN;
	volatile int32_t t186 = 520483578;

    t186 = (x1057!=(x1058-(x1059*x1060)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1065 = 1U;
	uint8_t x1066 = 1U;
	int32_t x1067 = INT32_MIN;
	volatile uint64_t x1068 = UINT64_MAX;

    t187 = (x1065!=(x1066-(x1067*x1068)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1069 = 39623;
	volatile int8_t x1070 = -1;
	int8_t x1071 = -1;
	static uint16_t x1072 = 14U;
	int32_t t188 = -38;

    t188 = (x1069!=(x1070-(x1071*x1072)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1073 = INT64_MAX;
	volatile int16_t x1074 = INT16_MIN;
	static uint64_t x1075 = 2003LLU;
	volatile int32_t t189 = -1;

    t189 = (x1073!=(x1074-(x1075*x1076)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1077 = -1LL;
	int16_t x1078 = -46;
	int16_t x1079 = -1;
	static volatile int32_t t190 = -667299;

    t190 = (x1077!=(x1078-(x1079*x1080)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1081 = -69646520971LL;
	int8_t x1082 = -1;
	uint8_t x1083 = 7U;
	int32_t t191 = -324;

    t191 = (x1081!=(x1082-(x1083*x1084)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1085 = INT16_MAX;
	int32_t x1087 = 9;
	int64_t x1088 = -30717672LL;
	volatile int32_t t192 = 435;

    t192 = (x1085!=(x1086-(x1087*x1088)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1093 = INT8_MIN;
	static uint16_t x1094 = 26048U;
	static uint8_t x1096 = UINT8_MAX;

    t193 = (x1093!=(x1094-(x1095*x1096)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1101 = INT8_MAX;
	int64_t x1102 = INT64_MAX;
	int32_t x1103 = 731591;
	int8_t x1104 = 61;
	volatile int32_t t194 = -168643299;

    t194 = (x1101!=(x1102-(x1103*x1104)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1105 = -23000563406938436LL;
	uint32_t x1106 = 42481U;
	volatile uint64_t x1107 = 3584985225LLU;
	volatile int64_t x1108 = INT64_MAX;
	volatile int32_t t195 = 0;

    t195 = (x1105!=(x1106-(x1107*x1108)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1109 = INT16_MIN;
	volatile uint64_t x1110 = UINT64_MAX;
	volatile int8_t x1111 = -13;
	uint64_t x1112 = 8LLU;

    t196 = (x1109!=(x1110-(x1111*x1112)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x1113 = UINT8_MAX;
	int8_t x1114 = INT8_MAX;
	uint64_t x1116 = 39582097LLU;
	int32_t t197 = -353;

    t197 = (x1113!=(x1114-(x1115*x1116)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1117 = -11;
	int32_t x1118 = INT32_MIN;
	static volatile uint16_t x1120 = 56U;
	volatile int32_t t198 = -949126715;

    t198 = (x1117!=(x1118-(x1119*x1120)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x1121 = 177U;
	volatile uint8_t x1123 = UINT8_MAX;
	static volatile int8_t x1124 = INT8_MAX;

    t199 = (x1121!=(x1122-(x1123*x1124)));

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

