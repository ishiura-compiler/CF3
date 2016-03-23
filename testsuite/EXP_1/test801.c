
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

static int8_t x10 = -1;
int8_t x13 = INT8_MIN;
int32_t x15 = -1;
uint8_t x17 = UINT8_MAX;
static uint64_t t4 = 2556LLU;
uint16_t x25 = UINT16_MAX;
volatile uint8_t x30 = 32U;
volatile int16_t x34 = INT16_MIN;
int32_t x37 = INT32_MAX;
volatile int16_t x43 = INT16_MIN;
static int32_t x47 = INT32_MIN;
int8_t x61 = -1;
volatile int64_t t14 = -6253018LL;
volatile uint64_t t16 = 5160238426LLU;
static volatile int16_t x87 = INT16_MIN;
int16_t x94 = 190;
volatile int8_t x101 = INT8_MIN;
volatile int32_t x105 = -9396300;
int16_t x108 = -12364;
uint64_t x109 = UINT64_MAX;
static uint32_t x122 = UINT32_MAX;
volatile int8_t x124 = INT8_MAX;
static int16_t x132 = INT16_MIN;
int8_t x135 = INT8_MAX;
int16_t x138 = -884;
volatile uint16_t x159 = 1U;
volatile int64_t t35 = 1832LL;
uint16_t x179 = 4953U;
volatile uint8_t x185 = 89U;
volatile uint32_t t38 = 63168U;
volatile int32_t x190 = -3;
int8_t x191 = -1;
static volatile uint32_t t40 = 64537U;
int16_t x201 = -222;
int32_t x202 = INT32_MIN;
static int16_t x206 = -1;
volatile int32_t x214 = -380;
volatile uint16_t x215 = 21U;
static int64_t x218 = 11LL;
int16_t x223 = -1;
static uint64_t x226 = UINT64_MAX;
volatile int32_t x227 = -1;
int64_t t48 = 1101LL;
volatile uint16_t x235 = 169U;
uint16_t x236 = 23665U;
uint32_t x237 = UINT32_MAX;
static uint8_t x238 = UINT8_MAX;
int16_t x239 = INT16_MIN;
static volatile uint32_t t50 = 963U;
int32_t t51 = 970580;
int32_t x249 = -1;
volatile uint32_t t52 = 2135U;
int8_t x263 = INT8_MAX;
static int64_t x265 = INT64_MIN;
int32_t x272 = 798697831;
int16_t x274 = INT16_MAX;
int32_t x280 = 5;
volatile int32_t t58 = -615;
int8_t x288 = INT8_MIN;
volatile int32_t t59 = 23580;
static int32_t t60 = 7;
int16_t x303 = -3;
uint64_t t62 = 8810095955LLU;
int64_t x311 = -1LL;
volatile int8_t x323 = -2;
int16_t x326 = -1;
static uint16_t x331 = 6U;
int32_t t69 = 41088;
int64_t x350 = 90918551978018LL;
int64_t x358 = 1751LL;
uint32_t x359 = 20795U;
volatile uint32_t x391 = 36609U;
int16_t x393 = INT16_MIN;
static uint64_t x394 = 8116906198130581311LLU;
uint64_t t80 = 104639117LLU;
uint16_t x409 = UINT16_MAX;
int64_t x413 = INT64_MIN;
int16_t x431 = -6;
uint64_t t86 = 187802019409480LLU;
uint16_t x434 = 11U;
uint64_t x436 = 582212742705310018LLU;
static volatile int32_t t88 = 1356;
uint64_t x449 = 4LLU;
uint32_t x451 = 199914U;
int64_t x452 = 53484LL;
int64_t x454 = -1182LL;
int8_t x455 = INT8_MAX;
static volatile int16_t x469 = -1;
int32_t x472 = INT32_MAX;
uint64_t t95 = 215433587714LLU;
static uint64_t t96 = 3976758924580471LLU;
static int32_t x497 = -61809945;
int16_t x498 = -60;
static uint64_t x519 = UINT64_MAX;
uint64_t x522 = UINT64_MAX;
int16_t x523 = -1;
int8_t x528 = INT8_MIN;
volatile int64_t t104 = -4016411901762933LL;
int8_t x556 = 5;
int64_t x558 = INT64_MIN;
volatile int64_t t108 = 1128016251079923LL;
int8_t x562 = INT8_MIN;
volatile uint16_t x563 = 3692U;
uint32_t t109 = 2289543U;
int16_t x574 = INT16_MIN;
int8_t x575 = -2;
uint32_t x577 = 210457U;
uint8_t x582 = 41U;
uint64_t t114 = 35437994LLU;
int8_t x586 = 12;
int64_t x590 = -7353800220LL;
uint16_t x592 = 9U;
uint16_t x596 = 2348U;
uint8_t x599 = UINT8_MAX;
volatile int16_t x600 = INT16_MIN;
uint32_t t119 = 45250U;
int8_t x605 = INT8_MIN;
uint16_t x608 = UINT16_MAX;
int16_t x615 = -5;
uint8_t x624 = 1U;
volatile int32_t t124 = -116674;
int32_t x645 = INT32_MIN;
uint64_t t126 = 146572LLU;
volatile int64_t t127 = 40792890399680LL;
volatile int8_t x656 = -28;
int8_t x659 = -1;
uint64_t t129 = 3858LLU;
int16_t x662 = INT16_MAX;
int8_t x667 = INT8_MIN;
uint64_t x678 = 1183LLU;
uint64_t x682 = 10852203LLU;
static volatile uint64_t t134 = 6156238578483LLU;
uint32_t x686 = 73517U;
uint32_t x690 = UINT32_MAX;
static int16_t x692 = -5;
volatile uint64_t t138 = 127764792878167LLU;
static uint16_t x702 = UINT16_MAX;
int16_t x704 = INT16_MIN;
volatile int64_t t139 = -50756761252LL;
volatile uint64_t t141 = 31548428LLU;
volatile uint64_t x723 = 41LLU;
uint16_t x724 = UINT16_MAX;
static int16_t x727 = INT16_MIN;
int16_t x735 = 8;
static uint8_t x745 = 3U;
volatile int16_t x748 = INT16_MIN;
volatile uint32_t t147 = 78575650U;
volatile uint8_t x753 = 26U;
uint32_t x755 = UINT32_MAX;
volatile uint8_t x765 = UINT8_MAX;
int64_t x771 = -1LL;
volatile uint64_t t152 = 1620LLU;
int16_t x780 = -58;
static uint16_t x781 = UINT16_MAX;
int16_t x782 = -2033;
int16_t x788 = INT16_MIN;
int64_t x793 = -1LL;
uint64_t x794 = UINT64_MAX;
static uint64_t t158 = 33219003LLU;
uint32_t t159 = 1539U;
int32_t x806 = INT32_MIN;
uint32_t x820 = 1U;
static int8_t x825 = 0;
uint16_t x828 = 195U;
int64_t x837 = 173213141461829LL;
static uint16_t x838 = UINT16_MAX;
int64_t x842 = -280155846550405LL;
int16_t x851 = -262;
int64_t x853 = INT64_MIN;
int64_t x854 = INT64_MIN;
int8_t x857 = -1;
static volatile int32_t t172 = 1856;
int32_t x870 = INT32_MIN;
static int64_t x873 = INT64_MIN;
int64_t x909 = INT64_MIN;
volatile uint8_t x913 = 50U;
volatile uint8_t x915 = 54U;
volatile int16_t x916 = INT16_MAX;
uint16_t x925 = 21491U;
uint64_t x927 = 320765221614999474LLU;
int64_t x929 = INT64_MIN;
uint16_t x937 = 30U;
int64_t t182 = 43060229864LL;
volatile uint64_t t183 = 27395634LLU;
volatile uint8_t x946 = UINT8_MAX;
uint64_t x947 = UINT64_MAX;
volatile uint64_t t184 = 1767161878806899LLU;
volatile uint64_t x949 = 7103794733169633279LLU;
volatile uint64_t x957 = UINT64_MAX;
static volatile uint16_t x959 = UINT16_MAX;
int64_t t187 = -397268909882LL;
int8_t x970 = -1;
uint8_t x971 = UINT8_MAX;
static int64_t x972 = 436336LL;
int64_t x975 = -1LL;
volatile int8_t x983 = 0;
int16_t x985 = 14129;
uint8_t x986 = 78U;
int16_t x989 = INT16_MAX;
int16_t x990 = -1;
int8_t x991 = INT8_MAX;
int32_t x993 = -31359;
int64_t x994 = -1LL;
int32_t x996 = -4388;
volatile int32_t x1014 = INT32_MIN;
static volatile int32_t t198 = -878677;


void f0(void) {
    	static volatile uint64_t x1 = UINT64_MAX;
	static int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	int32_t x4 = 14;
	volatile uint64_t t0 = 3LLU;

    t0 = (((x1%x2)-x3)*x4);

    if (t0 != 458752LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = INT16_MAX;
	uint8_t x11 = 15U;
	int32_t x12 = -1;
	volatile int32_t t1 = 387;

    t1 = (((x9%x10)-x11)*x12);

    if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x14 = 2U;
	static int16_t x16 = INT16_MAX;
	volatile int32_t t2 = 540947;

    t2 = (((x13%x14)-x15)*x16);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = INT32_MIN;
	static uint16_t x19 = UINT16_MAX;
	int32_t x20 = 278;
	int32_t t3 = 43;

    t3 = (((x17%x18)-x19)*x20);

    if (t3 != -18147840) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	volatile uint64_t x23 = 3024379004069LLU;
	int16_t x24 = -45;

    t4 = (((x21%x22)-x23)*x24);

    if (t4 != 136097055183105LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = -10;
	int8_t x27 = INT8_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = 33;

    t5 = (((x25%x26)-x27)*x28);

    if (t5 != 33915) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	uint64_t x31 = 45204LLU;
	static int64_t x32 = INT64_MIN;
	uint64_t t6 = 29800739505137LLU;

    t6 = (((x29%x30)-x31)*x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	int16_t x35 = 0;
	int16_t x36 = -13;
	static int64_t t7 = -345538092LL;

    t7 = (((x33%x34)-x35)*x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x38 = -1;
	uint64_t x39 = 1739LLU;
	int64_t x40 = INT64_MAX;
	uint64_t t8 = 10208406239022272LLU;

    t8 = (((x37%x38)-x39)*x40);

    if (t8 != 9223372036854777547LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -761860;
	uint8_t x42 = 1U;
	int16_t x44 = INT16_MAX;
	volatile int32_t t9 = 21729581;

    t9 = (((x41%x42)-x43)*x44);

    if (t9 != 1073709056) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 269511651850LL;
	uint16_t x46 = 3U;
	int32_t x48 = INT32_MAX;
	static int64_t t10 = -494784005112612030LL;

    t10 = (((x45%x46)-x47)*x48);

    if (t10 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 3U;
	static volatile int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	uint8_t x52 = 29U;
	volatile int32_t t11 = -325;

    t11 = (((x49%x50)-x51)*x52);

    if (t11 != 116) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x57 = -9186;
	uint16_t x58 = 124U;
	uint8_t x59 = 28U;
	uint32_t x60 = 503224127U;
	volatile uint32_t t12 = 379U;

    t12 = (((x57%x58)-x59)*x60);

    if (t12 != 2352319654U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x62 = -46573837;
	volatile int16_t x63 = -1;
	int32_t x64 = INT32_MAX;
	static volatile int32_t t13 = 0;

    t13 = (((x61%x62)-x63)*x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1LL;
	int16_t x70 = -12;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -36;

    t14 = (((x69%x70)-x71)*x72);

    if (t14 != -1179612LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	volatile int64_t x74 = INT64_MAX;
	static uint16_t x75 = UINT16_MAX;
	volatile uint32_t x76 = 123896U;
	int64_t t15 = 458516LL;

    t15 = (((x73%x74)-x75)*x76);

    if (t15 != -8119648256LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -1;
	static int8_t x78 = INT8_MAX;
	volatile int64_t x79 = INT64_MIN;
	uint64_t x80 = UINT64_MAX;

    t16 = (((x77%x78)-x79)*x80);

    if (t16 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	static uint32_t x86 = UINT32_MAX;
	int8_t x88 = INT8_MAX;
	uint32_t t17 = 809752U;

    t17 = (((x85%x86)-x87)*x88);

    if (t17 != 4161536U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x93 = INT16_MIN;
	int16_t x95 = INT16_MAX;
	int32_t x96 = -103;
	int32_t t18 = 20052490;

    t18 = (((x93%x94)-x95)*x96);

    if (t18 != 3384065) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = 6;
	uint8_t x99 = 5U;
	int32_t x100 = 8488;
	uint64_t t19 = 1095086231101754258LLU;

    t19 = (((x97%x98)-x99)*x100);

    if (t19 != 18446744073709534640LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x102 = 16U;
	static int16_t x103 = INT16_MIN;
	static int64_t x104 = 65246578176LL;
	volatile int64_t t20 = 2300140161090870493LL;

    t20 = (((x101%x102)-x103)*x104);

    if (t20 != 2137999873671168LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x106 = 3146591632151077LLU;
	static volatile int32_t x107 = INT32_MIN;
	uint64_t t21 = 994307417793030LLU;

    t21 = (((x105%x106)-x107)*x108);

    if (t21 != 841296080601156856LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x110 = 11030U;
	volatile uint32_t x111 = 140815264U;
	volatile int32_t x112 = INT32_MAX;
	uint64_t t22 = 170514326701798LLU;

    t22 = (((x109%x110)-x111)*x112);

    if (t22 != 18144355207010884133LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = -3615447LL;
	volatile int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	volatile int64_t t23 = 3114LL;

    t23 = (((x113%x114)-x115)*x116);

    if (t23 != -70368744177664LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = -758LL;
	int32_t x118 = INT32_MIN;
	int16_t x119 = 1;
	static uint32_t x120 = 1221U;
	int64_t t24 = -16092LL;

    t24 = (((x117%x118)-x119)*x120);

    if (t24 != -926739LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x121 = 6218;
	int16_t x123 = 3918;
	uint32_t t25 = 5641U;

    t25 = (((x121%x122)-x123)*x124);

    if (t25 != 292100U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = 1512711U;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = 6546687U;
	volatile int64_t t26 = 19625658128609LL;

    t26 = (((x129%x130)-x131)*x132);

    if (t26 != 164953325568LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x133 = UINT64_MAX;
	int64_t x134 = INT64_MIN;
	static int32_t x136 = 0;
	volatile uint64_t t27 = 156979LLU;

    t27 = (((x133%x134)-x135)*x136);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x137 = INT8_MAX;
	volatile uint16_t x139 = 26940U;
	int16_t x140 = -1;
	int32_t t28 = -264611211;

    t28 = (((x137%x138)-x139)*x140);

    if (t28 != 26813) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x141 = 39U;
	static uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;
	static volatile int32_t x144 = INT32_MAX;
	uint64_t t29 = 271055627744LLU;

    t29 = (((x141%x142)-x143)*x144);

    if (t29 != 4611686100031766489LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = INT32_MIN;
	static int8_t x146 = -3;
	static int16_t x147 = INT16_MIN;
	volatile int64_t x148 = -1LL;
	volatile int64_t t30 = 1083808183571LL;

    t30 = (((x145%x146)-x147)*x148);

    if (t30 != -32766LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = 901U;
	static volatile uint16_t x150 = 1509U;
	int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int64_t t31 = -213588LL;

    t31 = (((x149%x150)-x151)*x152);

    if (t31 != -2147484549LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x153 = UINT8_MAX;
	int64_t x154 = INT64_MIN;
	uint8_t x155 = 1U;
	volatile uint16_t x156 = 31718U;
	int64_t t32 = 2702752402240192LL;

    t32 = (((x153%x154)-x155)*x156);

    if (t32 != 8056372LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x157 = -110698;
	int64_t x158 = INT64_MIN;
	int8_t x160 = INT8_MAX;
	volatile int64_t t33 = 241626056099LL;

    t33 = (((x157%x158)-x159)*x160);

    if (t33 != -14058773LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	uint64_t x168 = 444LLU;
	volatile uint64_t t34 = 437LLU;

    t34 = (((x165%x166)-x167)*x168);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = 1114463567LL;
	int64_t x170 = INT64_MIN;
	int16_t x171 = -1;
	int32_t x172 = INT32_MIN;

    t35 = (((x169%x170)-x171)*x172);

    if (t35 != -2393292288571736064LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x173 = 211;
	static int16_t x174 = -17;
	static int8_t x175 = 1;
	int64_t x176 = -21307164071167487LL;
	volatile int64_t t36 = 2803264297060LL;

    t36 = (((x173%x174)-x175)*x176);

    if (t36 != -127842984427004922LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x177 = 1059LLU;
	uint64_t x178 = 969664LLU;
	volatile int16_t x180 = -1;
	uint64_t t37 = 43558LLU;

    t37 = (((x177%x178)-x179)*x180);

    if (t37 != 3894LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x186 = INT32_MIN;
	uint32_t x187 = 1932740352U;
	int8_t x188 = -1;

    t38 = (((x185%x186)-x187)*x188);

    if (t38 != 1932740263U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x192 = INT16_MAX;
	static int64_t t39 = 73323289359590LL;

    t39 = (((x189%x190)-x191)*x192);

    if (t39 != -32767LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x193 = 1567U;
	uint8_t x194 = UINT8_MAX;
	uint16_t x195 = 923U;
	volatile uint8_t x196 = UINT8_MAX;

    t40 = (((x193%x194)-x195)*x196);

    if (t40 != 4294741366U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x197 = 7U;
	int32_t x198 = INT32_MIN;
	static int16_t x199 = INT16_MIN;
	volatile int8_t x200 = -8;
	int32_t t41 = -220025;

    t41 = (((x197%x198)-x199)*x200);

    if (t41 != -262200) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x203 = 25;
	volatile uint64_t x204 = UINT64_MAX;
	uint64_t t42 = 4060312174572763061LLU;

    t42 = (((x201%x202)-x203)*x204);

    if (t42 != 247LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = 4;
	int16_t x207 = -1;
	uint32_t x208 = 781U;
	volatile uint32_t t43 = 68698240U;

    t43 = (((x205%x206)-x207)*x208);

    if (t43 != 781U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x213 = 63861371602LL;
	int32_t x216 = INT32_MAX;
	volatile int64_t t44 = 925427628783LL;

    t44 = (((x213%x214)-x215)*x216);

    if (t44 != 2147483647LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x217 = UINT32_MAX;
	int8_t x219 = -1;
	int64_t x220 = -1LL;
	volatile int64_t t45 = 1851591112640767LL;

    t45 = (((x217%x218)-x219)*x220);

    if (t45 != -4LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = 2630;
	uint64_t x224 = 29730903347371LLU;
	volatile uint64_t t46 = 232576014587776798LLU;

    t46 = (((x221%x222)-x223)*x224);

    if (t46 != 18391533786193483669LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x225 = -1;
	uint32_t x228 = UINT32_MAX;
	volatile uint64_t t47 = 20646397957LLU;

    t47 = (((x225%x226)-x227)*x228);

    if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x229 = 2;
	int64_t x230 = INT64_MIN;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = -31;

    t48 = (((x229%x230)-x231)*x232);

    if (t48 != 133143986083LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	int64_t x234 = INT64_MAX;
	volatile int64_t t49 = 134543628LL;

    t49 = (((x233%x234)-x235)*x236);

    if (t49 != 1546886390LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x240 = INT16_MIN;

    t50 = (((x237%x238)-x239)*x240);

    if (t50 != 3221225472U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 3U;
	int32_t x242 = INT32_MAX;
	static uint8_t x243 = 8U;
	int16_t x244 = INT16_MAX;

    t51 = (((x241%x242)-x243)*x244);

    if (t51 != -163835) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x250 = -15135;
	volatile uint32_t x251 = UINT32_MAX;
	static int32_t x252 = INT32_MAX;

    t52 = (((x249%x250)-x251)*x252);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x253 = UINT32_MAX;
	static int8_t x254 = 3;
	int64_t x255 = -16071044144LL;
	static uint8_t x256 = 0U;
	volatile int64_t t53 = -422426337995373LL;

    t53 = (((x253%x254)-x255)*x256);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x261 = -3875;
	int32_t x262 = -32925028;
	uint16_t x264 = 98U;
	volatile int32_t t54 = 0;

    t54 = (((x261%x262)-x263)*x264);

    if (t54 != -392196) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x266 = INT8_MIN;
	uint64_t x267 = 843442336923807LLU;
	uint32_t x268 = 17U;
	uint64_t t55 = 1865950515956987LLU;

    t55 = (((x265%x266)-x267)*x268);

    if (t55 != 18432405553981846897LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = INT64_MAX;
	volatile uint8_t x270 = 61U;
	uint8_t x271 = UINT8_MAX;
	int64_t t56 = 260566LL;

    t56 = (((x269%x270)-x271)*x272);

    if (t56 != -198077062088LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x273 = INT16_MIN;
	static uint32_t x275 = 7122223U;
	int32_t x276 = INT32_MIN;
	uint32_t t57 = 15U;

    t57 = (((x273%x274)-x275)*x276);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x278 = 13480;
	volatile int32_t x279 = -1;

    t58 = (((x277%x278)-x279)*x280);

    if (t58 != -59035) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x285 = INT32_MAX;
	static int32_t x286 = 1;
	uint16_t x287 = UINT16_MAX;

    t59 = (((x285%x286)-x287)*x288);

    if (t59 != 8388480) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x293 = 30;
	volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = 1U;
	int16_t x296 = -1;

    t60 = (((x293%x294)-x295)*x296);

    if (t60 != -29) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x304 = INT16_MIN;
	volatile int32_t t61 = -3;

    t61 = (((x301%x302)-x303)*x304);

    if (t61 != 4096000) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x305 = 448LLU;
	int16_t x306 = INT16_MIN;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = -1LL;

    t62 = (((x305%x306)-x307)*x308);

    if (t62 != 18446744071562067520LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x309 = UINT8_MAX;
	static uint8_t x310 = 110U;
	volatile int16_t x312 = -1;
	static volatile int64_t t63 = 930625629065LL;

    t63 = (((x309%x310)-x311)*x312);

    if (t63 != -36LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MAX;
	uint16_t x314 = 693U;
	volatile int16_t x315 = -1103;
	int16_t x316 = -6779;
	int32_t t64 = 219;

    t64 = (((x313%x314)-x315)*x316);

    if (t64 != -8338170) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x317 = INT8_MIN;
	volatile int8_t x318 = 3;
	volatile int16_t x319 = INT16_MAX;
	int16_t x320 = -1;
	volatile int32_t t65 = 172;

    t65 = (((x317%x318)-x319)*x320);

    if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x321 = 15702;
	uint16_t x322 = 7401U;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t66 = 1;

    t66 = (((x321%x322)-x323)*x324);

    if (t66 != 59112570) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x325 = 7;
	int8_t x327 = INT8_MAX;
	volatile uint64_t x328 = 4666858670449671LLU;
	volatile uint64_t t67 = 4LLU;

    t67 = (((x325%x326)-x327)*x328);

    if (t67 != 17854053022562443399LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x329 = -1;
	static int32_t x330 = -1;
	uint16_t x332 = 16986U;
	volatile int32_t t68 = 1;

    t68 = (((x329%x330)-x331)*x332);

    if (t68 != -101916) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	static int32_t x335 = 0;
	volatile uint8_t x336 = 4U;

    t69 = (((x333%x334)-x335)*x336);

    if (t69 != -32) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t70 = 32076;

    t70 = (((x337%x338)-x339)*x340);

    if (t70 != -4210560) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x341 = -22;
	int16_t x342 = -9;
	uint32_t x343 = UINT32_MAX;
	volatile uint8_t x344 = 0U;
	uint32_t t71 = 38U;

    t71 = (((x341%x342)-x343)*x344);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x349 = INT64_MAX;
	volatile int8_t x351 = -1;
	uint16_t x352 = 22U;
	int64_t t72 = -91095322583088LL;

    t72 = (((x349%x350)-x351)*x352);

    if (t72 != 1069483640759160LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x357 = -20;
	uint64_t x360 = 13012224924010090LLU;
	uint64_t t73 = 1362404371018LLU;

    t73 = (((x357%x358)-x359)*x360);

    if (t73 != 5851699312373250890LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x361 = -5;
	int32_t x362 = 6921;
	uint64_t x363 = 798424LLU;
	int8_t x364 = INT8_MIN;
	uint64_t t74 = 275738050504626633LLU;

    t74 = (((x361%x362)-x363)*x364);

    if (t74 != 102198912LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x369 = INT16_MIN;
	uint32_t x370 = 884504U;
	static volatile int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MAX;
	volatile uint32_t t75 = 309U;

    t75 = (((x369%x370)-x371)*x372);

    if (t75 != 84770087U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MAX;
	int32_t x375 = INT32_MAX;
	int64_t x376 = 0LL;
	volatile int64_t t76 = -534565386135LL;

    t76 = (((x373%x374)-x375)*x376);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x381 = -2035355;
	uint64_t x382 = UINT64_MAX;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = -92;
	uint64_t t77 = 186535474507LLU;

    t77 = (((x381%x382)-x383)*x384);

    if (t77 != 187240884LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x389 = 530;
	int64_t x390 = INT64_MIN;
	static int8_t x392 = INT8_MIN;
	int64_t t78 = -311911603789917943LL;

    t78 = (((x389%x390)-x391)*x392);

    if (t78 != 4618112LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x395 = 57279882089LLU;
	volatile int16_t x396 = INT16_MIN;
	volatile uint64_t t79 = 0LLU;

    t79 = (((x393%x394)-x395)*x396);

    if (t79 != 807624071686881280LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x397 = UINT16_MAX;
	int64_t x398 = 121LL;
	uint32_t x399 = 61U;
	static volatile uint64_t x400 = 20447636803977LLU;

    t80 = (((x397%x398)-x399)*x400);

    if (t80 != 265819278451701LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x401 = 45U;
	uint8_t x402 = 69U;
	static volatile int64_t x403 = INT64_MAX;
	int16_t x404 = -1;
	int64_t t81 = 693148969067LL;

    t81 = (((x401%x402)-x403)*x404);

    if (t81 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x405 = 5715U;
	int8_t x406 = INT8_MAX;
	uint16_t x407 = 0U;
	int32_t x408 = 22784;
	int32_t t82 = -15;

    t82 = (((x405%x406)-x407)*x408);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x410 = 201LL;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = 1623;
	static volatile int64_t t83 = -87100686813LL;

    t83 = (((x409%x410)-x411)*x412);

    if (t83 != -106348698LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x414 = INT16_MIN;
	static int16_t x415 = INT16_MIN;
	int16_t x416 = -1;
	int64_t t84 = 824694536407242LL;

    t84 = (((x413%x414)-x415)*x416);

    if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x425 = -18489;
	uint16_t x426 = 12443U;
	int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t85 = -2268;

    t85 = (((x425%x426)-x427)*x428);

    if (t85 != -783971) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x429 = INT64_MAX;
	int32_t x430 = 9446;
	static uint64_t x432 = 7526278914LLU;

    t86 = (((x429%x430)-x431)*x432);

    if (t86 != 35110091133810LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x433 = INT8_MIN;
	volatile int8_t x435 = -1;
	uint64_t t87 = 7637131977LLU;

    t87 = (((x433%x434)-x435)*x436);

    if (t87 != 14953467617477691508LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x437 = 4U;
	int32_t x438 = INT32_MAX;
	volatile int8_t x439 = -1;
	volatile int16_t x440 = -1;

    t88 = (((x437%x438)-x439)*x440);

    if (t88 != -5) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x450 = UINT8_MAX;
	uint64_t t89 = 1133LLU;

    t89 = (((x449%x450)-x451)*x452);

    if (t89 != 18446744063017565176LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x453 = -127386666420765623LL;
	static uint16_t x456 = 8U;
	int64_t t90 = -428796924960738LL;

    t90 = (((x453%x454)-x455)*x456);

    if (t90 != -3360LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x457 = INT64_MAX;
	int16_t x458 = -196;
	uint32_t x459 = UINT32_MAX;
	volatile uint16_t x460 = UINT16_MAX;
	int64_t t91 = -1LL;

    t91 = (((x457%x458)-x459)*x460);

    if (t91 != -281470672044180LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x461 = INT16_MIN;
	int64_t x462 = INT64_MIN;
	int16_t x463 = INT16_MAX;
	int16_t x464 = INT16_MAX;
	int64_t t92 = 12523690LL;

    t92 = (((x461%x462)-x463)*x464);

    if (t92 != -2147385345LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x465 = INT32_MIN;
	static int8_t x466 = INT8_MIN;
	static volatile int8_t x467 = -1;
	int8_t x468 = 0;
	int32_t t93 = -4;

    t93 = (((x465%x466)-x467)*x468);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x470 = 8U;
	int32_t x471 = INT32_MAX;
	uint32_t t94 = 33337203U;

    t94 = (((x469%x470)-x471)*x472);

    if (t94 != 2147483640U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x481 = 3U;
	uint32_t x482 = 4U;
	int8_t x483 = INT8_MIN;
	static uint64_t x484 = UINT64_MAX;

    t95 = (((x481%x482)-x483)*x484);

    if (t95 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x485 = 1935242647631508LLU;
	int32_t x486 = -52;
	uint64_t x487 = UINT64_MAX;
	volatile uint64_t x488 = UINT64_MAX;

    t96 = (((x485%x486)-x487)*x488);

    if (t96 != 18444808831061920107LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = -33;
	static int32_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	static volatile int64_t t97 = 338782521129LL;

    t97 = (((x489%x490)-x491)*x492);

    if (t97 != -30064771065LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x499 = 7U;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t98 = 7941943801678207870LLU;

    t98 = (((x497%x498)-x499)*x500);

    if (t98 != 18446744069414584372LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x505 = UINT64_MAX;
	static int16_t x506 = INT16_MAX;
	static uint32_t x507 = UINT32_MAX;
	static uint64_t x508 = UINT64_MAX;
	volatile uint64_t t99 = 8331209LLU;

    t99 = (((x505%x506)-x507)*x508);

    if (t99 != 4294967280LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x509 = 6;
	static uint64_t x510 = 5213478LLU;
	int32_t x511 = 1;
	static int16_t x512 = -55;
	uint64_t t100 = 84050814529538143LLU;

    t100 = (((x509%x510)-x511)*x512);

    if (t100 != 18446744073709551341LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x513 = 328514581;
	volatile uint8_t x514 = 7U;
	static int8_t x515 = 1;
	uint16_t x516 = UINT16_MAX;
	static volatile int32_t t101 = -142587130;

    t101 = (((x513%x514)-x515)*x516);

    if (t101 != 131070) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x517 = INT16_MAX;
	static int16_t x518 = INT16_MAX;
	int64_t x520 = INT64_MIN;
	volatile uint64_t t102 = 833216761232951266LLU;

    t102 = (((x517%x518)-x519)*x520);

    if (t102 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x521 = INT32_MIN;
	int8_t x524 = INT8_MIN;
	uint64_t t103 = 20013394067989542LLU;

    t103 = (((x521%x522)-x523)*x524);

    if (t103 != 274877906816LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x525 = -1LL;
	int16_t x526 = INT16_MIN;
	int64_t x527 = 630991314644064LL;

    t104 = (((x525%x526)-x527)*x528);

    if (t104 != 80766888274440320LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x529 = -1;
	int64_t x530 = INT64_MIN;
	static volatile int64_t x531 = -1LL;
	volatile int16_t x532 = INT16_MIN;
	int64_t t105 = 1013278689713LL;

    t105 = (((x529%x530)-x531)*x532);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x533 = INT64_MIN;
	uint16_t x534 = 1423U;
	uint64_t x535 = UINT64_MAX;
	int8_t x536 = INT8_MAX;
	volatile uint64_t t106 = 534465222447LLU;

    t106 = (((x533%x534)-x535)*x536);

    if (t106 != 18446744073709372292LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x553 = UINT16_MAX;
	int8_t x554 = -1;
	int32_t x555 = 518;
	static int32_t t107 = -95555314;

    t107 = (((x553%x554)-x555)*x556);

    if (t107 != -2590) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x557 = INT64_MIN;
	int16_t x559 = -1;
	int16_t x560 = -116;

    t108 = (((x557%x558)-x559)*x560);

    if (t108 != -116LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x561 = UINT8_MAX;
	uint32_t x564 = UINT32_MAX;

    t109 = (((x561%x562)-x563)*x564);

    if (t109 != 3565U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MIN;
	int8_t x568 = 3;
	static uint64_t t110 = 98LLU;

    t110 = (((x565%x566)-x567)*x568);

    if (t110 != 12884901885LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x569 = -1;
	uint32_t x570 = 5367830U;
	int32_t x571 = INT32_MIN;
	int8_t x572 = 2;
	volatile uint32_t t111 = 47715U;

    t111 = (((x569%x570)-x571)*x572);

    if (t111 != 1406590U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x573 = 703245222LLU;
	volatile int8_t x576 = -1;
	volatile uint64_t t112 = 128142936780741LLU;

    t112 = (((x573%x574)-x575)*x576);

    if (t112 != 18446744073006306392LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x578 = INT16_MIN;
	uint8_t x579 = 1U;
	volatile uint16_t x580 = UINT16_MAX;
	static volatile uint32_t t113 = 61U;

    t113 = (((x577%x578)-x579)*x580);

    if (t113 != 907332072U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x581 = -1;
	uint64_t x583 = 81873892LLU;
	uint8_t x584 = UINT8_MAX;

    t114 = (((x581%x582)-x583)*x584);

    if (t114 != 18446744052831708901LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x587 = INT64_MIN;
	static int8_t x588 = INT8_MIN;
	volatile uint64_t t115 = 20952096915201LLU;

    t115 = (((x585%x586)-x587)*x588);

    if (t115 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x589 = 202384107LLU;
	uint16_t x591 = UINT16_MAX;
	uint64_t t116 = 16781397569LLU;

    t116 = (((x589%x590)-x591)*x592);

    if (t116 != 1820867148LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x593 = 108087863728954LLU;
	int64_t x594 = -1LL;
	int64_t x595 = 85374724580LL;
	volatile uint64_t t117 = 2248113954LLU;

    t117 = (((x593%x594)-x595)*x596);

    if (t117 != 253589844182270152LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x597 = UINT16_MAX;
	static int32_t x598 = 57195872;
	volatile int32_t t118 = 450576784;

    t118 = (((x597%x598)-x599)*x600);

    if (t118 != -2139095040) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x601 = 16U;
	int8_t x602 = INT8_MAX;
	int32_t x603 = INT32_MIN;
	uint16_t x604 = 120U;

    t119 = (((x601%x602)-x603)*x604);

    if (t119 != 1920U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x606 = UINT64_MAX;
	int8_t x607 = -1;
	uint64_t t120 = 83901LLU;

    t120 = (((x605%x606)-x607)*x608);

    if (t120 != 18446744073701228671LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x609 = INT16_MIN;
	int8_t x610 = -26;
	volatile int16_t x611 = 0;
	uint32_t x612 = UINT32_MAX;
	uint32_t t121 = 141U;

    t121 = (((x609%x610)-x611)*x612);

    if (t121 != 8U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x613 = 1685172086LLU;
	uint8_t x614 = UINT8_MAX;
	int16_t x616 = -3623;
	static uint64_t t122 = 5LLU;

    t122 = (((x613%x614)-x615)*x616);

    if (t122 != 18446744073708624128LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x617 = 6U;
	uint64_t x618 = 18067538LLU;
	static int8_t x619 = INT8_MIN;
	static uint32_t x620 = UINT32_MAX;
	uint64_t t123 = 8070451LLU;

    t123 = (((x617%x618)-x619)*x620);

    if (t123 != 575525617530LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x622 = INT8_MAX;
	int32_t x623 = -1;

    t124 = (((x621%x622)-x623)*x624);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x625 = -1LL;
	volatile int32_t x626 = -1;
	uint16_t x627 = 222U;
	volatile int32_t x628 = -1;
	volatile int64_t t125 = -33478312LL;

    t125 = (((x625%x626)-x627)*x628);

    if (t125 != 222LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x646 = 34;
	static uint64_t x647 = 466061LLU;
	static volatile int64_t x648 = INT64_MIN;

    t126 = (((x645%x646)-x647)*x648);

    if (t126 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x649 = 25U;
	int64_t x650 = 143039346LL;
	volatile uint8_t x651 = UINT8_MAX;
	static int8_t x652 = INT8_MAX;

    t127 = (((x649%x650)-x651)*x652);

    if (t127 != -29210LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x653 = -59;
	int64_t x654 = -1LL;
	int16_t x655 = -1;
	volatile int64_t t128 = -1051958960979289LL;

    t128 = (((x653%x654)-x655)*x656);

    if (t128 != -28LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x657 = -1;
	uint32_t x658 = 141036U;
	uint64_t x660 = 129721446517LLU;

    t129 = (((x657%x658)-x659)*x660);

    if (t129 != 18034394380579408LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x661 = INT32_MAX;
	static uint64_t x663 = 55394997334725LLU;
	int8_t x664 = -1;
	volatile uint64_t t130 = 10992021LLU;

    t130 = (((x661%x662)-x663)*x664);

    if (t130 != 55394997334724LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x665 = 3333061884649LL;
	int8_t x666 = -13;
	int8_t x668 = INT8_MIN;
	volatile int64_t t131 = 513LL;

    t131 = (((x665%x666)-x667)*x668);

    if (t131 != -16768LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x669 = UINT64_MAX;
	volatile uint64_t x670 = 7LLU;
	volatile int16_t x671 = INT16_MIN;
	static volatile int8_t x672 = INT8_MIN;
	static uint64_t t132 = 466433LLU;

    t132 = (((x669%x670)-x671)*x672);

    if (t132 != 18446744073705357184LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x677 = INT32_MAX;
	int16_t x679 = INT16_MAX;
	uint16_t x680 = UINT16_MAX;
	uint64_t t133 = 248807660542353LLU;

    t133 = (((x677%x678)-x679)*x680);

    if (t133 != 18446744071582416586LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x681 = INT32_MIN;
	int32_t x683 = 2868;
	uint8_t x684 = UINT8_MAX;

    t134 = (((x681%x682)-x683)*x684);

    if (t134 != 1390703190LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x685 = INT32_MAX;
	uint64_t x687 = UINT64_MAX;
	int8_t x688 = 15;
	static volatile uint64_t t135 = 24037454LLU;

    t135 = (((x685%x686)-x687)*x688);

    if (t135 != 781170LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x689 = INT32_MAX;
	uint32_t x691 = UINT32_MAX;
	uint32_t t136 = 105491U;

    t136 = (((x689%x690)-x691)*x692);

    if (t136 != 2147483648U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x693 = INT64_MIN;
	int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MIN;
	static int16_t x696 = INT16_MIN;
	int64_t t137 = 207725442LL;

    t137 = (((x693%x694)-x695)*x696);

    if (t137 != -1073741824LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x697 = 661338480780426LLU;
	volatile int64_t x698 = 26602629508730791LL;
	int32_t x699 = INT32_MIN;
	int16_t x700 = INT16_MAX;

    t138 = (((x697%x698)-x699)*x700);

    if (t138 != 3223404292619361142LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x701 = INT64_MIN;
	int8_t x703 = 0;

    t139 = (((x701%x702)-x703)*x704);

    if (t139 != 1073741824LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x705 = -1;
	int32_t x706 = INT32_MAX;
	int32_t x707 = -1;
	uint16_t x708 = 29877U;
	int32_t t140 = -21154315;

    t140 = (((x705%x706)-x707)*x708);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x709 = 57181410410919662LLU;
	volatile uint8_t x710 = 39U;
	int32_t x711 = -299043368;
	int64_t x712 = -1LL;

    t141 = (((x709%x710)-x711)*x712);

    if (t141 != 18446744073410508225LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x721 = -27;
	int16_t x722 = -660;
	volatile uint64_t t142 = 1410955940792354318LLU;

    t142 = (((x721%x722)-x723)*x724);

    if (t142 != 18446744073705095236LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x725 = INT16_MAX;
	int16_t x726 = 4415;
	uint8_t x728 = 9U;
	volatile int32_t t143 = 31;

    t143 = (((x725%x726)-x727)*x728);

    if (t143 != 311670) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x733 = INT64_MAX;
	static int64_t x734 = INT64_MIN;
	uint16_t x736 = 1U;
	int64_t t144 = -1445LL;

    t144 = (((x733%x734)-x735)*x736);

    if (t144 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x741 = -1;
	int32_t x742 = INT32_MIN;
	static volatile uint64_t x743 = 2712867404741768383LLU;
	int32_t x744 = -107648;
	volatile uint64_t t145 = 266682461043383670LLU;

    t145 = (((x741%x742)-x743)*x744);

    if (t145 != 4344954745971367936LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x746 = INT8_MIN;
	uint32_t x747 = 3804U;
	static uint32_t t146 = 250135U;

    t146 = (((x745%x746)-x747)*x748);

    if (t146 != 124551168U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	int16_t x750 = 507;
	static int32_t x751 = INT32_MAX;
	uint32_t x752 = UINT32_MAX;

    t147 = (((x749%x750)-x751)*x752);

    if (t147 != 2147483392U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x754 = INT8_MAX;
	uint32_t x756 = 16694U;
	static uint32_t t148 = 798358U;

    t148 = (((x753%x754)-x755)*x756);

    if (t148 != 450738U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x757 = 7;
	int32_t x758 = INT32_MIN;
	volatile int8_t x759 = INT8_MAX;
	uint64_t x760 = 4137000460LLU;
	static volatile uint64_t t149 = 3LLU;

    t149 = (((x757%x758)-x759)*x760);

    if (t149 != 18446743577269496416LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x761 = -1030232771LL;
	int8_t x762 = INT8_MAX;
	volatile int8_t x763 = INT8_MAX;
	int8_t x764 = INT8_MIN;
	volatile int64_t t150 = 19503LL;

    t150 = (((x761%x762)-x763)*x764);

    if (t150 != 17280LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x766 = INT32_MIN;
	volatile int16_t x767 = -1842;
	static uint16_t x768 = UINT16_MAX;
	volatile int32_t t151 = 1026626540;

    t151 = (((x765%x766)-x767)*x768);

    if (t151 != 137426895) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x769 = UINT64_MAX;
	int8_t x770 = INT8_MIN;
	static volatile int16_t x772 = -1;

    t152 = (((x769%x770)-x771)*x772);

    if (t152 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x773 = 26977227368591465LL;
	volatile int16_t x774 = -1;
	int64_t x775 = -124475LL;
	int32_t x776 = -396504;
	static int64_t t153 = -18263LL;

    t153 = (((x773%x774)-x775)*x776);

    if (t153 != -49354835400LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	int32_t x778 = 28;
	int64_t x779 = -1LL;
	volatile int64_t t154 = 1015687581164705493LL;

    t154 = (((x777%x778)-x779)*x780);

    if (t154 != -928LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x783 = INT16_MIN;
	int8_t x784 = INT8_MIN;
	volatile int32_t t155 = 363079;

    t155 = (((x781%x782)-x783)*x784);

    if (t155 != -4255616) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x785 = 6184595256252313LLU;
	static uint64_t x786 = 4LLU;
	volatile uint16_t x787 = UINT16_MAX;
	volatile uint64_t t156 = 39891LLU;

    t156 = (((x785%x786)-x787)*x788);

    if (t156 != 2147418112LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x789 = INT32_MAX;
	int8_t x790 = INT8_MIN;
	uint32_t x791 = 15099405U;
	volatile int16_t x792 = INT16_MIN;
	static uint32_t t157 = 568130217U;

    t157 = (((x789%x790)-x791)*x792);

    if (t157 != 851902464U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x795 = -1662008;
	uint64_t x796 = UINT64_MAX;

    t158 = (((x793%x794)-x795)*x796);

    if (t158 != 18446744073707889608LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x801 = 589U;
	static volatile int8_t x802 = INT8_MIN;
	uint32_t x803 = UINT32_MAX;
	volatile int32_t x804 = INT32_MIN;

    t159 = (((x801%x802)-x803)*x804);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x805 = -29146977LL;
	static int16_t x807 = INT16_MIN;
	uint32_t x808 = UINT32_MAX;
	static int64_t t160 = -329161141LL;

    t160 = (((x805%x806)-x807)*x808);

    if (t160 != -125044575474794655LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x809 = INT16_MIN;
	volatile int64_t x810 = INT64_MIN;
	static volatile int8_t x811 = 8;
	volatile int32_t x812 = INT32_MIN;
	int64_t t161 = -914201LL;

    t161 = (((x809%x810)-x811)*x812);

    if (t161 != 70385924046848LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x817 = INT32_MAX;
	uint16_t x818 = 19917U;
	int8_t x819 = INT8_MIN;
	uint32_t t162 = 46142U;

    t162 = (((x817%x818)-x819)*x820);

    if (t162 != 12918U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x826 = UINT8_MAX;
	static int8_t x827 = 30;
	volatile int32_t t163 = -449426486;

    t163 = (((x825%x826)-x827)*x828);

    if (t163 != -5850) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x829 = UINT8_MAX;
	static int64_t x830 = INT64_MIN;
	volatile int64_t x831 = 292341LL;
	int32_t x832 = -10234;
	volatile int64_t t164 = -2870304739822LL;

    t164 = (((x829%x830)-x831)*x832);

    if (t164 != 2989208124LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x833 = 4U;
	int32_t x834 = -1;
	uint8_t x835 = 3U;
	int8_t x836 = INT8_MIN;
	volatile int32_t t165 = 0;

    t165 = (((x833%x834)-x835)*x836);

    if (t165 != 384) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x839 = 123U;
	int32_t x840 = -28195;
	volatile int64_t t166 = 3LL;

    t166 = (((x837%x838)-x839)*x840);

    if (t166 != -664725320LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x841 = 749237U;
	uint8_t x843 = 5U;
	static uint16_t x844 = 3U;
	volatile int64_t t167 = 343LL;

    t167 = (((x841%x842)-x843)*x844);

    if (t167 != 2247696LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x849 = 1LLU;
	int32_t x850 = 4640139;
	static int32_t x852 = INT32_MIN;
	uint64_t t168 = 51050LLU;

    t168 = (((x849%x850)-x851)*x852);

    if (t168 != 18446743508921352192LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x855 = -14;
	uint64_t x856 = 311595128146420LLU;
	uint64_t t169 = 3243LLU;

    t169 = (((x853%x854)-x855)*x856);

    if (t169 != 4362331794049880LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x858 = -2;
	int16_t x859 = 45;
	static int8_t x860 = 1;
	static int32_t t170 = -33538343;

    t170 = (((x857%x858)-x859)*x860);

    if (t170 != -46) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x861 = 63797221923LLU;
	int8_t x862 = INT8_MIN;
	uint32_t x863 = 1750U;
	int16_t x864 = -1810;
	volatile uint64_t t171 = 3LLU;

    t171 = (((x861%x862)-x863)*x864);

    if (t171 != 18446628600741038486LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x865 = UINT8_MAX;
	int32_t x866 = INT32_MIN;
	static volatile int16_t x867 = INT16_MIN;
	int8_t x868 = -46;

    t172 = (((x865%x866)-x867)*x868);

    if (t172 != -1519058) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x869 = -1;
	int16_t x871 = INT16_MIN;
	volatile uint32_t x872 = 835074184U;
	uint32_t t173 = 491778U;

    t173 = (((x869%x870)-x871)*x872);

    if (t173 != 3934111608U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x874 = -1178;
	uint64_t x875 = UINT64_MAX;
	uint32_t x876 = 1U;
	uint64_t t174 = 259155443209449455LLU;

    t174 = (((x873%x874)-x875)*x876);

    if (t174 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x881 = 2317905U;
	uint16_t x882 = UINT16_MAX;
	uint16_t x883 = 83U;
	static int64_t x884 = -435LL;
	volatile int64_t t175 = -9332912LL;

    t175 = (((x881%x882)-x883)*x884);

    if (t175 != -10482195LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x893 = 541311U;
	int16_t x894 = -3721;
	int16_t x895 = INT16_MAX;
	uint16_t x896 = 5U;
	uint32_t t176 = 2625U;

    t176 = (((x893%x894)-x895)*x896);

    if (t176 != 2542720U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x910 = INT32_MAX;
	uint16_t x911 = 1495U;
	int8_t x912 = INT8_MIN;
	volatile int64_t t177 = 111LL;

    t177 = (((x909%x910)-x911)*x912);

    if (t177 != 191616LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x914 = INT16_MIN;
	int32_t t178 = 785531;

    t178 = (((x913%x914)-x915)*x916);

    if (t178 != -131068) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x921 = INT32_MIN;
	int16_t x922 = INT16_MIN;
	volatile int8_t x923 = 1;
	int8_t x924 = -1;
	int32_t t179 = -120385;

    t179 = (((x921%x922)-x923)*x924);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x926 = UINT8_MAX;
	uint32_t x928 = 1364071151U;
	volatile uint64_t t180 = 58084115LLU;

    t180 = (((x925%x926)-x927)*x928);

    if (t180 != 1776519562144505115LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x930 = -361922438762738408LL;
	uint64_t x931 = 34690888386LLU;
	uint16_t x932 = UINT16_MAX;
	volatile uint64_t t181 = 57415412461379LLU;

    t181 = (((x929%x930)-x931)*x932);

    if (t181 != 3308457077486909978LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x938 = INT64_MAX;
	static volatile uint16_t x939 = 9U;
	int32_t x940 = INT32_MAX;

    t182 = (((x937%x938)-x939)*x940);

    if (t182 != 45097156587LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x941 = -1;
	volatile uint64_t x942 = 125493LLU;
	int16_t x943 = -1;
	int8_t x944 = -1;

    t183 = (((x941%x942)-x943)*x944);

    if (t183 != 18446744073709476150LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x945 = -1129685273406LL;
	static int8_t x948 = -1;

    t184 = (((x945%x946)-x947)*x948);

    if (t184 != 20LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x950 = UINT8_MAX;
	volatile int8_t x951 = INT8_MIN;
	int64_t x952 = -555567704791389LL;
	uint64_t t185 = 13LLU;

    t185 = (((x949%x950)-x951)*x952);

    if (t185 != 18337297235865647983LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x958 = -1;
	int8_t x960 = 0;
	volatile uint64_t t186 = 30100067900249LLU;

    t186 = (((x957%x958)-x959)*x960);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x965 = 889017;
	volatile int8_t x966 = INT8_MIN;
	uint32_t x967 = UINT32_MAX;
	int64_t x968 = -1LL;

    t187 = (((x965%x966)-x967)*x968);

    if (t187 != -58LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x969 = INT32_MAX;
	int64_t t188 = -52LL;

    t188 = (((x969%x970)-x971)*x972);

    if (t188 != -111265680LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x973 = -6;
	uint16_t x974 = 72U;
	int8_t x976 = -1;
	static int64_t t189 = -222531676803LL;

    t189 = (((x973%x974)-x975)*x976);

    if (t189 != 5LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x981 = INT32_MIN;
	int8_t x982 = -10;
	int16_t x984 = INT16_MAX;
	volatile int32_t t190 = -318;

    t190 = (((x981%x982)-x983)*x984);

    if (t190 != -262136) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x987 = 26469424LL;
	int16_t x988 = -62;
	static int64_t t191 = 17548394867LL;

    t191 = (((x985%x986)-x987)*x988);

    if (t191 != 1641103606LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x992 = 13;
	static int32_t t192 = -2;

    t192 = (((x989%x990)-x991)*x992);

    if (t192 != -1651) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x995 = INT8_MAX;
	volatile int64_t t193 = -1599019LL;

    t193 = (((x993%x994)-x995)*x996);

    if (t193 != 557276LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x997 = INT32_MAX;
	int32_t x998 = INT32_MAX;
	static int16_t x999 = 14;
	uint32_t x1000 = 5U;
	volatile uint32_t t194 = 1448336880U;

    t194 = (((x997%x998)-x999)*x1000);

    if (t194 != 4294967226U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1001 = INT32_MIN;
	int16_t x1002 = -3336;
	int32_t x1003 = INT32_MIN;
	uint64_t x1004 = 13033263792184112LLU;
	volatile uint64_t t195 = 13379LLU;

    t195 = (((x1001%x1002)-x1003)*x1004);

    if (t195 != 6250083410111687424LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1005 = 1994334682245442848LLU;
	int32_t x1006 = INT32_MAX;
	int64_t x1007 = 132084244LL;
	static volatile int16_t x1008 = -6099;
	uint64_t t196 = 28LLU;

    t196 = (((x1005%x1006)-x1007)*x1008);

    if (t196 != 18446733231204866935LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1013 = 6U;
	int32_t x1015 = INT32_MIN;
	static uint32_t x1016 = 4637619U;
	volatile uint32_t t197 = 2045289890U;

    t197 = (((x1013%x1014)-x1015)*x1016);

    if (t197 != 2175309362U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1017 = -27153;
	static int8_t x1018 = INT8_MAX;
	int8_t x1019 = -1;
	static int16_t x1020 = INT16_MIN;

    t198 = (((x1017%x1018)-x1019)*x1020);

    if (t198 != 3309568) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1021 = -1LL;
	int16_t x1022 = 15;
	int16_t x1023 = -1;
	int8_t x1024 = INT8_MIN;
	int64_t t199 = -2032669760944LL;

    t199 = (((x1021%x1022)-x1023)*x1024);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

