
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

volatile int8_t x8 = INT8_MIN;
static uint32_t x25 = 63199U;
uint32_t x28 = UINT32_MAX;
int32_t x39 = INT32_MIN;
int64_t x41 = -1LL;
static int32_t x45 = -6034;
static volatile uint64_t x48 = 13LLU;
volatile uint64_t x56 = 88293326LLU;
static uint16_t x61 = 24U;
volatile int8_t x62 = INT8_MIN;
volatile int32_t t12 = -122363038;
int8_t x65 = INT8_MIN;
uint32_t t16 = 14U;
uint64_t t18 = 20330002522592309LLU;
int64_t x93 = 72763165LL;
int8_t x100 = 6;
int8_t x110 = INT8_MAX;
uint8_t x112 = UINT8_MAX;
uint8_t x118 = 1U;
static int64_t x121 = -1LL;
volatile int16_t x129 = INT16_MAX;
static int64_t x130 = 1872791LL;
uint16_t x131 = 3874U;
uint64_t t29 = 86LLU;
uint64_t x144 = 4892LLU;
volatile uint64_t t31 = 44LLU;
int8_t x145 = INT8_MIN;
uint32_t x151 = 5817004U;
volatile int32_t x154 = -1;
int8_t x164 = 31;
uint8_t x170 = 12U;
int32_t x176 = INT32_MIN;
int32_t x179 = INT32_MAX;
int8_t x180 = 43;
int32_t t39 = -1992178;
static int8_t x190 = INT8_MIN;
int8_t x193 = 1;
uint32_t x195 = 31327100U;
uint64_t t43 = 26088872942LLU;
volatile uint16_t x216 = UINT16_MAX;
int32_t x217 = -1;
static int64_t x220 = INT64_MIN;
volatile int16_t x221 = INT16_MIN;
static int64_t x226 = INT64_MIN;
volatile uint64_t t47 = 1321802975540LLU;
volatile uint8_t x230 = UINT8_MAX;
int16_t x231 = INT16_MAX;
uint16_t x233 = UINT16_MAX;
int8_t x235 = -1;
uint16_t x249 = UINT16_MAX;
uint64_t x250 = 13LLU;
static uint64_t t52 = 14190216408LLU;
volatile int32_t t53 = -56344969;
static volatile int32_t x260 = -99614599;
uint16_t x263 = UINT16_MAX;
int32_t x264 = 1;
int16_t x267 = -1;
static uint64_t x281 = UINT64_MAX;
static uint16_t x285 = 6418U;
static volatile int16_t x287 = -406;
volatile int8_t x294 = 0;
uint8_t x300 = 3U;
int64_t x301 = 0LL;
volatile uint32_t x304 = UINT32_MAX;
int64_t t65 = 60069916473329978LL;
static volatile int64_t x305 = 7798351356LL;
int64_t t66 = 340LL;
volatile uint64_t x309 = 38003LLU;
int32_t t68 = 11805312;
volatile int64_t x322 = -10LL;
volatile int64_t x327 = INT64_MAX;
volatile int8_t x328 = INT8_MAX;
volatile uint64_t t71 = 2551279625573LLU;
volatile int64_t x337 = 74025741840853741LL;
static uint16_t x340 = 4069U;
volatile int16_t x343 = 1;
int32_t t75 = -101;
int64_t x355 = 8544737894LL;
uint64_t t78 = 519584359139LLU;
volatile int64_t t80 = 2LL;
int16_t x383 = INT16_MAX;
int64_t x393 = INT64_MAX;
uint64_t x396 = UINT64_MAX;
int64_t x397 = -1LL;
uint32_t x405 = 831U;
int8_t x406 = -6;
int64_t x416 = INT64_MIN;
static int64_t t87 = 19888LL;
static uint8_t x430 = UINT8_MAX;
uint32_t x432 = 10U;
volatile int64_t t90 = 2470LL;
volatile uint32_t x437 = 2508U;
static int64_t x439 = -1LL;
uint8_t x451 = 0U;
volatile uint64_t t93 = 8870LLU;
uint64_t x453 = 1LLU;
static volatile int8_t x465 = INT8_MIN;
static volatile int32_t x466 = INT32_MIN;
volatile int8_t x471 = -1;
static uint32_t x475 = 20261U;
int32_t x478 = INT32_MIN;
uint64_t t102 = 839LLU;
uint64_t x498 = 797865829LLU;
int32_t x506 = -447;
int64_t x508 = -1LL;
int32_t x513 = INT32_MAX;
volatile int64_t x518 = -1LL;
int8_t x520 = INT8_MIN;
int16_t x530 = -1;
volatile int64_t t110 = -3485LL;
int64_t x539 = -215666LL;
int16_t x553 = INT16_MIN;
uint64_t t114 = 58LLU;
int16_t x559 = INT16_MIN;
uint16_t x573 = UINT16_MAX;
volatile int64_t x575 = INT64_MIN;
int64_t t120 = -256776885278182703LL;
static volatile uint64_t t122 = 3876067130794341LLU;
uint64_t t124 = 3884052373101000LLU;
static volatile int8_t x601 = INT8_MAX;
int8_t x614 = 1;
int32_t x615 = 0;
volatile uint64_t x617 = 2169011788255LLU;
int16_t x623 = -106;
int32_t x627 = -1;
volatile int32_t t130 = 10464878;
static int32_t x635 = -1;
uint64_t x636 = 40550LLU;
volatile int8_t x639 = INT8_MIN;
int32_t t133 = 1;
uint16_t x641 = 3262U;
int8_t x643 = INT8_MIN;
int32_t t134 = -26;
int16_t x663 = INT16_MIN;
int64_t x664 = INT64_MAX;
static uint64_t x669 = UINT64_MAX;
int16_t x670 = -1891;
static volatile int64_t x674 = INT64_MIN;
int32_t x677 = 13247043;
int8_t x679 = INT8_MIN;
static volatile uint8_t x680 = UINT8_MAX;
int32_t t141 = 3735;
static int8_t x684 = INT8_MIN;
uint8_t x698 = 3U;
int32_t x716 = INT32_MIN;
static uint64_t x717 = 115234LLU;
int32_t x721 = -39;
volatile uint64_t t149 = 1052294597712308022LLU;
uint8_t x727 = UINT8_MAX;
static int16_t x730 = -47;
uint8_t x753 = 1U;
int16_t x757 = INT16_MIN;
volatile uint64_t t156 = 13173461474685800LLU;
uint32_t x770 = UINT32_MAX;
uint16_t x772 = 12U;
uint32_t t157 = 21684092U;
static int16_t x778 = -1;
int16_t x793 = INT16_MIN;
int16_t x795 = INT16_MIN;
static int32_t x815 = -1;
int64_t x817 = 13022LL;
int64_t x818 = -1LL;
volatile int32_t x819 = -47847;
volatile int64_t t162 = 23350LL;
static int64_t x844 = 734282967967421LL;
volatile uint32_t t167 = 1816229912U;
int8_t x865 = INT8_MAX;
static uint64_t t172 = 825LLU;
volatile uint64_t x873 = UINT64_MAX;
int32_t x876 = INT32_MAX;
uint64_t x881 = 55LLU;
int8_t x882 = INT8_MIN;
static volatile int64_t x885 = -10885576938374979LL;
uint64_t x892 = 782123911908LLU;
uint8_t x896 = 12U;
int8_t x900 = INT8_MIN;
static int64_t t180 = -5303834941314148LL;
static int16_t x917 = 3361;
volatile uint64_t x918 = 66687LLU;
volatile uint64_t t183 = 7643886843LLU;
uint8_t x937 = UINT8_MAX;
volatile int8_t x944 = INT8_MIN;
static uint8_t x946 = 7U;
uint32_t t190 = 2U;
static uint64_t t191 = 1LLU;
volatile int64_t t192 = 3821635LL;
volatile uint8_t x962 = 108U;
int8_t x966 = -1;
volatile uint64_t x967 = UINT64_MAX;
int16_t x978 = -1;
volatile int64_t t197 = 24LL;
int32_t x981 = INT32_MAX;
static uint8_t x984 = UINT8_MAX;


void f0(void) {
    	uint16_t x1 = 33U;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MAX;
	uint32_t x4 = 72U;
	volatile uint32_t t0 = 1731348U;

    t0 = ((x1*(x2|x3))%x4);

    if (t0 != 7U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 46238380734LLU;
	uint64_t t1 = 5646211LLU;

    t1 = ((x5*(x6|x7))%x8);

    if (t1 != 2160925869139296256LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MIN;
	volatile int32_t x11 = -1;
	static volatile int64_t x12 = INT64_MAX;
	static volatile uint64_t t2 = 1LLU;

    t2 = ((x9*(x10|x11))%x12);

    if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int32_t x14 = -1;
	int64_t x15 = -1LL;
	static int16_t x16 = -1;
	volatile uint64_t t3 = 305820293986LLU;

    t3 = ((x13*(x14|x15))%x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = UINT8_MAX;
	int8_t x18 = -21;
	volatile int16_t x19 = -50;
	static int8_t x20 = INT8_MIN;
	static int32_t t4 = 5773825;

    t4 = ((x17*(x18|x19))%x20);

    if (t4 != -111) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MIN;
	int64_t x23 = 3053795285540LL;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 60392337401107409LLU;

    t5 = ((x21*(x22|x23))%x24);

    if (t5 != 26076LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	int64_t t6 = 12LL;

    t6 = ((x25*(x26|x27))%x28);

    if (t6 != -8089472LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = 7643;
	int64_t x34 = INT64_MAX;
	static int32_t x35 = -178483503;
	volatile uint64_t x36 = 2230LLU;
	volatile uint64_t t7 = 4817456096LLU;

    t7 = ((x33*(x34|x35))%x36);

    if (t7 != 1103LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 5021067005892680LLU;
	int8_t x38 = INT8_MIN;
	uint16_t x40 = UINT16_MAX;
	uint64_t t8 = 34475408294044LLU;

    t8 = ((x37*(x38|x39))%x40);

    if (t8 != 56871LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	volatile int32_t x44 = INT32_MIN;
	volatile int64_t t9 = -14LL;

    t9 = ((x41*(x42|x43))%x44);

    if (t9 != 128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x46 = 1802784U;
	int8_t x47 = -1;
	volatile uint64_t t10 = 573666LLU;

    t10 = ((x45*(x46|x47))%x48);

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MIN;
	int32_t x55 = -188864682;
	volatile uint64_t t11 = 1LLU;

    t11 = ((x53*(x54|x55))%x56);

    if (t11 != 39774244LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x63 = INT32_MIN;
	int32_t x64 = 121267168;

    t12 = ((x61*(x62|x63))%x64);

    if (t12 != -3072) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x66 = INT16_MIN;
	int8_t x67 = 54;
	int64_t x68 = -57946634134205348LL;
	volatile int64_t t13 = 1053498983LL;

    t13 = ((x65*(x66|x67))%x68);

    if (t13 != 4187392LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = 8;
	int32_t x70 = -1;
	volatile int64_t x71 = -1LL;
	int16_t x72 = -16;
	static int64_t t14 = -2432454887333LL;

    t14 = ((x69*(x70|x71))%x72);

    if (t14 != -8LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MIN;
	uint32_t x74 = 14416U;
	int64_t x75 = -291LL;
	uint16_t x76 = 1668U;
	int64_t t15 = -419506LL;

    t15 = ((x73*(x74|x75))%x76);

    if (t15 != 1200LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = -25;
	int16_t x78 = -1;
	uint16_t x79 = 12U;
	uint32_t x80 = UINT32_MAX;

    t16 = ((x77*(x78|x79))%x80);

    if (t16 != 25U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 26513620;
	uint16_t x82 = 62U;
	int64_t x83 = -36LL;
	static volatile uint8_t x84 = 4U;
	int64_t t17 = -3265LL;

    t17 = ((x81*(x82|x83))%x84);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x85 = UINT32_MAX;
	uint16_t x86 = 4248U;
	volatile uint16_t x87 = 10U;
	uint64_t x88 = UINT64_MAX;

    t18 = ((x85*(x86|x87))%x88);

    if (t18 != 4294963046LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = INT8_MIN;
	volatile int64_t x90 = -2906127LL;
	static int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int64_t t19 = -1528940466556069732LL;

    t19 = ((x89*(x90|x91))%x92);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x94 = INT64_MIN;
	volatile int64_t x95 = INT64_MAX;
	int64_t x96 = 1314874LL;
	volatile int64_t t20 = 9412160936546LL;

    t20 = ((x93*(x94|x95))%x96);

    if (t20 != -445095LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = -13;
	int64_t x98 = -1LL;
	int32_t x99 = 24;
	volatile int64_t t21 = -218741452921489019LL;

    t21 = ((x97*(x98|x99))%x100);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = -1LL;
	int8_t x102 = 28;
	uint64_t x103 = 131645873182540197LLU;
	uint32_t x104 = UINT32_MAX;
	static uint64_t t22 = 4389LLU;

    t22 = ((x101*(x102|x103))%x104);

    if (t22 != 2600160010LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = -1;
	int16_t x106 = INT16_MAX;
	static volatile uint32_t x107 = UINT32_MAX;
	static int32_t x108 = INT32_MIN;
	uint32_t t23 = 1U;

    t23 = ((x105*(x106|x107))%x108);

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = -1;
	int64_t x111 = -1LL;
	volatile int64_t t24 = -1583715024998657LL;

    t24 = ((x109*(x110|x111))%x112);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x117 = 1U;
	int16_t x119 = -146;
	int16_t x120 = -4250;
	volatile int32_t t25 = 7;

    t25 = ((x117*(x118|x119))%x120);

    if (t25 != -145) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x122 = -1;
	uint32_t x123 = 1U;
	static volatile uint64_t x124 = UINT64_MAX;
	volatile uint64_t t26 = 153207LLU;

    t26 = ((x121*(x122|x123))%x124);

    if (t26 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x125 = INT64_MAX;
	int32_t x126 = INT32_MAX;
	volatile int16_t x127 = -1;
	static uint8_t x128 = 6U;
	int64_t t27 = 1537274200575LL;

    t27 = ((x125*(x126|x127))%x128);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x132 = INT16_MAX;
	volatile int64_t t28 = 42639LL;

    t28 = ((x129*(x130|x131))%x132);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x133 = 84014582260111LLU;
	static int32_t x134 = -779447695;
	static int64_t x135 = -1LL;
	int16_t x136 = INT16_MIN;

    t29 = ((x133*(x134|x135))%x136);

    if (t29 != 18446660059127291505LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x138 = 13;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MIN;
	static int64_t t30 = 462228498357140LL;

    t30 = ((x137*(x138|x139))%x140);

    if (t30 != 3768320LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x141 = INT16_MAX;
	uint16_t x142 = UINT16_MAX;
	uint8_t x143 = UINT8_MAX;

    t31 = ((x141*(x142|x143))%x144);

    if (t31 != 2809LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x146 = -3722;
	static int32_t x147 = 46959897;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t32 = -1962;

    t32 = ((x145*(x146|x147))%x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	volatile int32_t x152 = -1;
	volatile uint32_t t33 = 1392861302U;

    t33 = ((x149*(x150|x151))%x152);

    if (t33 != 2141666644U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MAX;
	uint32_t x155 = 97168U;
	static int32_t x156 = -3360;
	uint32_t t34 = 24719969U;

    t34 = ((x153*(x154|x155))%x156);

    if (t34 != 3233U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x157 = 2U;
	volatile int8_t x158 = INT8_MIN;
	uint16_t x159 = 0U;
	static int16_t x160 = 2;
	volatile int32_t t35 = 162794110;

    t35 = ((x157*(x158|x159))%x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MAX;
	static volatile uint8_t x162 = UINT8_MAX;
	static volatile uint8_t x163 = 1U;
	static volatile int32_t t36 = 5;

    t36 = ((x161*(x162|x163))%x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = 24U;
	volatile uint32_t x171 = 103U;
	uint32_t x172 = 491449860U;
	uint32_t t37 = 41605U;

    t37 = ((x169*(x170|x171))%x172);

    if (t37 != 2664U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = -1;
	int8_t x174 = 1;
	int8_t x175 = INT8_MIN;
	int32_t t38 = 4008370;

    t38 = ((x173*(x174|x175))%x176);

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x177 = UINT8_MAX;
	int8_t x178 = -1;

    t39 = ((x177*(x178|x179))%x180);

    if (t39 != -40) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x181 = UINT32_MAX;
	int8_t x182 = 6;
	uint32_t x183 = UINT32_MAX;
	uint64_t x184 = 3777840542104025926LLU;
	uint64_t t40 = 99508010411LLU;

    t40 = ((x181*(x182|x183))%x184);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x189 = INT16_MIN;
	volatile uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t41 = -1670LL;

    t41 = ((x189*(x190|x191))%x192);

    if (t41 != 32768LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x194 = INT16_MIN;
	static uint64_t x196 = UINT64_MAX;
	uint64_t t42 = 1982640358152890916LLU;

    t42 = ((x193*(x194|x195))%x196);

    if (t42 != 4294935420LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x201 = -1;
	volatile int8_t x202 = 18;
	uint64_t x203 = 157348419LLU;
	volatile int64_t x204 = INT64_MIN;

    t43 = ((x201*(x202|x203))%x204);

    if (t43 != 9223372036697427373LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = -235;
	uint16_t x214 = UINT16_MAX;
	int32_t x215 = 63;
	volatile int32_t t44 = -287872382;

    t44 = ((x213*(x214|x215))%x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x218 = -1;
	static uint32_t x219 = UINT32_MAX;
	static volatile int64_t t45 = 850LL;

    t45 = ((x217*(x218|x219))%x220);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x222 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	volatile int16_t x224 = -358;
	int32_t t46 = -501577;

    t46 = ((x221*(x222|x223))%x224);

    if (t46 != 190) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	uint64_t x227 = 1366592513583LLU;
	static uint64_t x228 = 277938501921313182LLU;

    t47 = ((x225*(x226|x227))%x228);

    if (t47 != 140961113829102707LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x229 = -2LL;
	volatile uint64_t x232 = 171304472897896LLU;
	uint64_t t48 = 3334445060318782532LLU;

    t48 = ((x229*(x230|x231))%x232);

    if (t48 != 164518645351114LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x234 = 0;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t49 = -3475;

    t49 = ((x233*(x234|x235))%x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x241 = 1283U;
	static int16_t x242 = 2414;
	uint8_t x243 = 102U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t50 = 59342847;

    t50 = ((x241*(x242|x243))%x244);

    if (t50 != 13) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x245 = 0;
	static volatile int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	static uint8_t x248 = 121U;
	int64_t t51 = -18354965493LL;

    t51 = ((x245*(x246|x247))%x248);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x251 = INT32_MIN;
	volatile int32_t x252 = -1;

    t52 = ((x249*(x250|x251))%x252);

    if (t52 != 18446603338369531891LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x253 = -1;
	int32_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t x256 = -1;

    t53 = ((x253*(x254|x255))%x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = 14;
	static int8_t x258 = INT8_MIN;
	uint64_t x259 = UINT64_MAX;
	volatile uint64_t t54 = 3100997LLU;

    t54 = ((x257*(x258|x259))%x260);

    if (t54 != 99614585LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x261 = UINT8_MAX;
	uint32_t x262 = 90U;
	volatile uint32_t t55 = 4794391U;

    t55 = ((x261*(x262|x263))%x264);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = 0;
	uint64_t x266 = 476800185581LLU;
	int8_t x268 = INT8_MIN;
	uint64_t t56 = 161480315527694LLU;

    t56 = ((x265*(x266|x267))%x268);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x269 = INT16_MIN;
	static uint8_t x270 = 33U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = -1;
	uint64_t t57 = 282092LLU;

    t57 = ((x269*(x270|x271))%x272);

    if (t57 != 32768LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x273 = -122;
	volatile int64_t x274 = 122205780266173545LL;
	uint64_t x275 = 56583LLU;
	int64_t x276 = -16352082LL;
	uint64_t t58 = 606LLU;

    t58 = ((x273*(x274|x275))%x276);

    if (t58 != 3537638881235597594LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = 387;
	volatile uint16_t x279 = 27187U;
	uint64_t x280 = 3843LLU;
	volatile uint64_t t59 = 3202486847661096LLU;

    t59 = ((x277*(x278|x279))%x280);

    if (t59 != 2645LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x282 = -12;
	int64_t x283 = INT64_MIN;
	static int16_t x284 = INT16_MIN;
	volatile uint64_t t60 = 24562252LLU;

    t60 = ((x281*(x282|x283))%x284);

    if (t60 != 12LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x286 = -1;
	int32_t x288 = 627008864;
	int32_t t61 = 236988168;

    t61 = ((x285*(x286|x287))%x288);

    if (t61 != -6418) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x289 = 351U;
	uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MAX;
	int64_t x292 = 191807224060LL;
	uint64_t t62 = 6821206490LLU;

    t62 = ((x289*(x290|x291))%x292);

    if (t62 != 14429854025LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	uint32_t x295 = 7869U;
	static uint16_t x296 = 226U;
	uint32_t t63 = 838U;

    t63 = ((x293*(x294|x295))%x296);

    if (t63 != 167U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x297 = 10709U;
	static int64_t x298 = INT64_MAX;
	volatile int32_t x299 = INT32_MIN;
	volatile int64_t t64 = 489766207LL;

    t64 = ((x297*(x298|x299))%x300);

    if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x302 = INT64_MIN;
	int32_t x303 = -29700894;

    t65 = ((x301*(x302|x303))%x304);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x306 = 2;
	int32_t x307 = -1;
	int32_t x308 = -106;

    t66 = ((x305*(x306|x307))%x308);

    if (t66 != -44LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x310 = 1012LL;
	static int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MAX;
	volatile uint64_t t67 = 2939101935305461247LLU;

    t67 = ((x309*(x310|x311))%x312);

    if (t67 != 2147027615LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x313 = -1890;
	int32_t x314 = 978;
	int8_t x315 = INT8_MAX;
	int8_t x316 = -30;

    t68 = ((x313*(x314|x315))%x316);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x321 = 351779913;
	static uint64_t x323 = 24571803818937858LLU;
	uint16_t x324 = 6U;
	volatile uint64_t t69 = 490706228314474024LLU;

    t69 = ((x321*(x322|x323))%x324);

    if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int32_t x325 = -1;
	volatile int8_t x326 = INT8_MIN;
	static int64_t t70 = -7LL;

    t70 = ((x325*(x326|x327))%x328);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x329 = -12;
	static int8_t x330 = INT8_MAX;
	uint64_t x331 = 198675544106783078LLU;
	int16_t x332 = -7;

    t71 = ((x329*(x330|x331))%x332);

    if (t71 != 16062637544428154380LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x338 = INT64_MIN;
	int16_t x339 = -1;
	static int64_t t72 = -19668431561862152LL;

    t72 = ((x337*(x338|x339))%x340);

    if (t72 != -848LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = INT8_MIN;
	int32_t x342 = 624;
	static int64_t x344 = INT64_MIN;
	int64_t t73 = -484917888835751LL;

    t73 = ((x341*(x342|x343))%x344);

    if (t73 != -80000LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x345 = INT16_MIN;
	static uint32_t x346 = 7294U;
	int8_t x347 = INT8_MIN;
	static int64_t x348 = -1LL;
	static int64_t t74 = 89170506LL;

    t74 = ((x345*(x346|x347))%x348);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = -11405816;
	uint16_t x350 = 25U;
	int16_t x351 = 120;
	int32_t x352 = INT32_MAX;

    t75 = ((x349*(x350|x351))%x352);

    if (t75 != -1380103736) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x353 = INT16_MAX;
	static int16_t x354 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	int64_t t76 = 46943093728806LL;

    t76 = ((x353*(x354|x355))%x356);

    if (t76 != 1118896129LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	int8_t x362 = INT8_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile int64_t x364 = -127170975LL;
	volatile uint64_t t77 = 789821474113645344LLU;

    t77 = ((x361*(x362|x363))%x364);

    if (t77 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x365 = 7938LLU;
	volatile int64_t x366 = INT64_MAX;
	static int8_t x367 = -12;
	uint8_t x368 = 2U;

    t78 = ((x365*(x366|x367))%x368);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	int8_t x371 = -4;
	uint64_t x372 = 44031LLU;
	volatile uint64_t t79 = 40744870766LLU;

    t79 = ((x369*(x370|x371))%x372);

    if (t79 != 16035LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x373 = INT64_MAX;
	int8_t x374 = INT8_MAX;
	static int32_t x375 = -1;
	volatile int16_t x376 = -1;

    t80 = ((x373*(x374|x375))%x376);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x381 = -521338LL;
	volatile uint16_t x382 = 4809U;
	uint8_t x384 = UINT8_MAX;
	static volatile int64_t t81 = -231LL;

    t81 = ((x381*(x382|x383))%x384);

    if (t81 != -196LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x385 = INT16_MAX;
	static uint64_t x386 = 67570LLU;
	int32_t x387 = 2898132;
	uint64_t x388 = UINT64_MAX;
	uint64_t t82 = 125564015LLU;

    t82 = ((x385*(x386|x387))%x388);

    if (t82 != 97170341898LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x394 = -1;
	volatile int16_t x395 = -425;
	volatile uint64_t t83 = 9805289LLU;

    t83 = ((x393*(x394|x395))%x396);

    if (t83 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x398 = INT32_MIN;
	uint8_t x399 = 0U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t84 = 11612LLU;

    t84 = ((x397*(x398|x399))%x400);

    if (t84 != 2147483648LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = -496381;
	int16_t x402 = -1;
	volatile int8_t x403 = 5;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t85 = 91U;

    t85 = ((x401*(x402|x403))%x404);

    if (t85 != 496381U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x407 = 313U;
	volatile int16_t x408 = -993;
	uint32_t t86 = 219U;

    t86 = ((x405*(x406|x407))%x408);

    if (t86 != 4294963141U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x413 = UINT32_MAX;
	static uint16_t x414 = 8866U;
	uint32_t x415 = UINT32_MAX;

    t87 = ((x413*(x414|x415))%x416);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x421 = -1LL;
	volatile int32_t x422 = -1;
	uint32_t x423 = 233U;
	uint16_t x424 = 335U;
	int64_t t88 = 31771LL;

    t88 = ((x421*(x422|x423))%x424);

    if (t88 != -300LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x429 = 9U;
	volatile uint16_t x431 = UINT16_MAX;
	uint32_t t89 = 414486U;

    t89 = ((x429*(x430|x431))%x432);

    if (t89 != 5U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = INT8_MAX;
	int8_t x435 = -1;
	int64_t x436 = -1LL;

    t90 = ((x433*(x434|x435))%x436);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x438 = INT64_MIN;
	uint64_t x440 = 350727432294LLU;
	volatile uint64_t t91 = 183170375803LLU;

    t91 = ((x437*(x438|x439))%x440);

    if (t91 != 135554414422LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 178306558981421LLU;
	volatile uint32_t x443 = UINT32_MAX;
	static volatile int16_t x444 = INT16_MAX;
	volatile uint64_t t92 = 180563195893501463LLU;

    t92 = ((x441*(x442|x443))%x444);

    if (t92 != 30555LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x449 = INT8_MIN;
	int64_t x450 = 94289383926707LL;
	uint64_t x452 = 1165433440677331217LLU;

    t93 = ((x449*(x450|x451))%x452);

    if (t93 != 953173422406964865LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x454 = -1;
	int16_t x455 = -2638;
	int16_t x456 = INT16_MAX;
	uint64_t t94 = 81669990424770799LLU;

    t94 = ((x453*(x454|x455))%x456);

    if (t94 != 15LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x457 = -1LL;
	uint8_t x458 = 4U;
	uint32_t x459 = 62543U;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t95 = 2LLU;

    t95 = ((x457*(x458|x459))%x460);

    if (t95 != 18446744073709489073LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x461 = -1;
	int8_t x462 = 1;
	int32_t x463 = INT32_MAX;
	int32_t x464 = -82;
	static int32_t t96 = 4764;

    t96 = ((x461*(x462|x463))%x464);

    if (t96 != -79) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x467 = -1;
	int64_t x468 = INT64_MIN;
	static volatile int64_t t97 = 397693257563LL;

    t97 = ((x465*(x466|x467))%x468);

    if (t97 != 128LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = -205;
	uint16_t x470 = 411U;
	int8_t x472 = 1;
	volatile int32_t t98 = 259524458;

    t98 = ((x469*(x470|x471))%x472);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x473 = -1;
	int16_t x474 = INT16_MIN;
	uint64_t x476 = 126LLU;
	uint64_t t99 = 2030387LLU;

    t99 = ((x473*(x474|x475))%x476);

    if (t99 != 33LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = -32;
	int8_t x479 = -7;
	int8_t x480 = INT8_MIN;
	int32_t t100 = 2202;

    t100 = ((x477*(x478|x479))%x480);

    if (t100 != 96) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x485 = INT32_MIN;
	volatile int8_t x486 = 26;
	uint64_t x487 = 271371LLU;
	volatile int16_t x488 = -1;
	volatile uint64_t t101 = 346490894718670663LLU;

    t101 = ((x485*(x486|x487))%x488);

    if (t101 != 18446161274564771840LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x489 = UINT64_MAX;
	int32_t x490 = INT32_MIN;
	volatile int16_t x491 = -64;
	uint32_t x492 = 5U;

    t102 = ((x489*(x490|x491))%x492);

    if (t102 != 4LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x493 = UINT64_MAX;
	uint16_t x494 = 14347U;
	static int32_t x495 = 219;
	uint32_t x496 = 429U;
	uint64_t t103 = 463989496LLU;

    t103 = ((x493*(x494|x495))%x496);

    if (t103 != 47LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile uint64_t x499 = UINT64_MAX;
	int64_t x500 = -143908767346517628LL;
	volatile uint64_t t104 = 509586645709303706LLU;

    t104 = ((x497*(x498|x499))%x500);

    if (t104 != 143908763051550333LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x501 = 1;
	uint32_t x502 = 194870531U;
	int64_t x503 = -1LL;
	int16_t x504 = INT16_MIN;
	int64_t t105 = 327066464LL;

    t105 = ((x501*(x502|x503))%x504);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x505 = 712U;
	static int16_t x507 = 14331;
	volatile int64_t t106 = -158043165LL;

    t106 = ((x505*(x506|x507))%x508);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x514 = INT16_MIN;
	uint64_t x515 = UINT64_MAX;
	static uint64_t x516 = UINT64_MAX;
	uint64_t t107 = 1LLU;

    t107 = ((x513*(x514|x515))%x516);

    if (t107 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x517 = INT8_MAX;
	int32_t x519 = INT32_MAX;
	static volatile int64_t t108 = -682634LL;

    t108 = ((x517*(x518|x519))%x520);

    if (t108 != -127LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x525 = 796U;
	volatile int32_t x526 = INT32_MIN;
	int64_t x527 = INT64_MAX;
	int16_t x528 = 22;
	static volatile int64_t t109 = -1LL;

    t109 = ((x525*(x526|x527))%x528);

    if (t109 != -4LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x529 = 1945U;
	int16_t x531 = 7;
	int64_t x532 = 66382204400LL;

    t110 = ((x529*(x530|x531))%x532);

    if (t110 != 4294965351LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x537 = INT32_MIN;
	static volatile int16_t x538 = 6751;
	volatile int16_t x540 = -1;
	int64_t t111 = 9LL;

    t111 = ((x537*(x538|x539))%x540);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x545 = -6;
	volatile int8_t x546 = INT8_MIN;
	int16_t x547 = INT16_MAX;
	static uint8_t x548 = 59U;
	static volatile int32_t t112 = 155870636;

    t112 = ((x545*(x546|x547))%x548);

    if (t112 != 6) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x549 = UINT64_MAX;
	volatile int8_t x550 = INT8_MIN;
	uint8_t x551 = 30U;
	uint32_t x552 = 748392U;
	volatile uint64_t t113 = 11714753378LLU;

    t113 = ((x549*(x550|x551))%x552);

    if (t113 != 98LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x554 = 1066072;
	static volatile uint64_t x555 = 62769079LLU;
	static int32_t x556 = -1;

    t114 = ((x553*(x554|x555))%x556);

    if (t114 != 18446742016890011648LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x557 = -1;
	uint64_t x558 = 22LLU;
	volatile int32_t x560 = -32;
	uint64_t t115 = 411305185682098556LLU;

    t115 = ((x557*(x558|x559))%x560);

    if (t115 != 32746LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x561 = 26LLU;
	uint64_t x562 = 184798035981507127LLU;
	int64_t x563 = 136812LL;
	int32_t x564 = INT32_MAX;
	volatile uint64_t t116 = 4LLU;

    t116 = ((x561*(x562|x563))%x564);

    if (t116 != 1173021773LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x565 = INT16_MAX;
	int8_t x566 = -1;
	volatile uint64_t x567 = 1LLU;
	int16_t x568 = 2712;
	volatile uint64_t t117 = 2451116319LLU;

    t117 = ((x565*(x566|x567))%x568);

    if (t117 != 33LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x569 = 9U;
	static int16_t x570 = INT16_MIN;
	int32_t x571 = INT32_MAX;
	int8_t x572 = INT8_MIN;
	volatile int32_t t118 = -1429612;

    t118 = ((x569*(x570|x571))%x572);

    if (t118 != -9) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x574 = INT8_MIN;
	uint64_t x576 = UINT64_MAX;
	uint64_t t119 = 21507LLU;

    t119 = ((x573*(x574|x575))%x576);

    if (t119 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x581 = 8079;
	static int64_t x582 = INT64_MAX;
	volatile int64_t x583 = -209LL;
	int64_t x584 = INT64_MIN;

    t120 = ((x581*(x582|x583))%x584);

    if (t120 != -8079LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x585 = -1;
	int32_t x586 = -1;
	uint64_t x587 = 31LLU;
	static uint64_t x588 = UINT64_MAX;
	volatile uint64_t t121 = 444988779644220029LLU;

    t121 = ((x585*(x586|x587))%x588);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x589 = 21U;
	int16_t x590 = INT16_MIN;
	uint16_t x591 = UINT16_MAX;
	uint64_t x592 = 8LLU;

    t122 = ((x589*(x590|x591))%x592);

    if (t122 != 3LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x593 = INT16_MAX;
	uint16_t x594 = UINT16_MAX;
	uint64_t x595 = UINT64_MAX;
	int32_t x596 = INT32_MIN;
	uint64_t t123 = 4001LLU;

    t123 = ((x593*(x594|x595))%x596);

    if (t123 != 2147450881LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x597 = UINT16_MAX;
	uint64_t x598 = UINT64_MAX;
	int32_t x599 = 11046;
	int64_t x600 = -117LL;

    t124 = ((x597*(x598|x599))%x600);

    if (t124 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x602 = 1251005U;
	uint64_t x603 = 735LLU;
	uint64_t x604 = 1248LLU;
	volatile uint64_t t125 = 1969288595659LLU;

    t125 = ((x601*(x602|x603))%x604);

    if (t125 != 641LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x605 = 773U;
	static uint32_t x606 = UINT32_MAX;
	volatile int32_t x607 = INT32_MIN;
	uint8_t x608 = UINT8_MAX;
	uint32_t t126 = 1460461119U;

    t126 = ((x605*(x606|x607))%x608);

    if (t126 != 248U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x613 = 7275LL;
	int64_t x616 = -1LL;
	volatile int64_t t127 = -109425247368LL;

    t127 = ((x613*(x614|x615))%x616);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x618 = -43696125;
	static int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MIN;
	volatile uint64_t t128 = 662194436266272LLU;

    t128 = ((x617*(x618|x619))%x620);

    if (t128 != 18446472947236019741LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x621 = 796U;
	uint32_t x622 = 15U;
	static uint8_t x624 = 17U;
	static uint32_t t129 = 313U;

    t129 = ((x621*(x622|x623))%x624);

    if (t129 != 3U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MAX;
	int16_t x628 = INT16_MIN;

    t130 = ((x625*(x626|x627))%x628);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x629 = UINT16_MAX;
	uint16_t x630 = 18U;
	int8_t x631 = 0;
	uint8_t x632 = UINT8_MAX;
	int32_t t131 = 0;

    t131 = ((x629*(x630|x631))%x632);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x633 = UINT64_MAX;
	static volatile int32_t x634 = INT32_MIN;
	uint64_t t132 = 250193601934369333LLU;

    t132 = ((x633*(x634|x635))%x636);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x637 = 1;
	static int32_t x638 = INT32_MIN;
	static int8_t x640 = INT8_MIN;

    t133 = ((x637*(x638|x639))%x640);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x642 = 2U;
	uint16_t x644 = 11U;

    t134 = ((x641*(x642|x643))%x644);

    if (t134 != -8) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x645 = 833508137U;
	int64_t x646 = 255583LL;
	volatile int32_t x647 = INT32_MIN;
	uint16_t x648 = UINT16_MAX;
	volatile int64_t t135 = 321036498030891624LL;

    t135 = ((x645*(x646|x647))%x648);

    if (t135 != -18065LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x649 = -1;
	static volatile int16_t x650 = -23;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = 6;
	uint32_t t136 = 82683576U;

    t136 = ((x649*(x650|x651))%x652);

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x661 = UINT16_MAX;
	uint8_t x662 = 2U;
	volatile int64_t t137 = 119252045LL;

    t137 = ((x661*(x662|x663))%x664);

    if (t137 != -2147319810LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x665 = INT32_MIN;
	uint64_t x666 = UINT64_MAX;
	int16_t x667 = INT16_MIN;
	volatile uint32_t x668 = 1U;
	static uint64_t t138 = 12648064473035406LLU;

    t138 = ((x665*(x666|x667))%x668);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x671 = -1;
	uint8_t x672 = 112U;
	uint64_t t139 = 67217LLU;

    t139 = ((x669*(x670|x671))%x672);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x675 = INT32_MIN;
	int16_t x676 = -1977;
	static volatile int64_t t140 = -1243790302555142LL;

    t140 = ((x673*(x674|x675))%x676);

    if (t140 != -1485LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x678 = 5U;

    t141 = ((x677*(x678|x679))%x680);

    if (t141 != -39) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x681 = -739;
	int8_t x682 = -1;
	int8_t x683 = INT8_MIN;
	volatile int32_t t142 = -14783799;

    t142 = ((x681*(x682|x683))%x684);

    if (t142 != 99) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x685 = INT16_MAX;
	uint32_t x686 = 139293U;
	static int8_t x687 = INT8_MAX;
	int64_t x688 = INT64_MIN;
	static int64_t t143 = -77935478LL;

    t143 = ((x685*(x686|x687))%x688);

    if (t143 != 272457601LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x697 = 124U;
	uint16_t x699 = 996U;
	static uint64_t x700 = UINT64_MAX;
	uint64_t t144 = 29541647103441763LLU;

    t144 = ((x697*(x698|x699))%x700);

    if (t144 != 123876LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x705 = UINT8_MAX;
	int8_t x706 = INT8_MIN;
	uint8_t x707 = UINT8_MAX;
	int16_t x708 = 21;
	volatile int32_t t145 = 789661083;

    t145 = ((x705*(x706|x707))%x708);

    if (t145 != -3) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x709 = 1;
	static int64_t x710 = -192342142284102LL;
	uint64_t x711 = 63LLU;
	int8_t x712 = -1;
	volatile uint64_t t146 = 26812119294LLU;

    t146 = ((x709*(x710|x711))%x712);

    if (t146 != 18446551731567267519LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x713 = 2676;
	int8_t x714 = -30;
	int32_t x715 = -1;
	volatile int32_t t147 = 330146;

    t147 = ((x713*(x714|x715))%x716);

    if (t147 != -2676) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x718 = -1LL;
	static int64_t x719 = -1LL;
	int16_t x720 = -1;
	static uint64_t t148 = 387LLU;

    t148 = ((x717*(x718|x719))%x720);

    if (t148 != 18446744073709436382LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x722 = 0U;
	uint64_t x723 = 156LLU;
	int8_t x724 = -8;

    t149 = ((x721*(x722|x723))%x724);

    if (t149 != 18446744073709545532LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x725 = -1;
	int8_t x726 = -1;
	uint8_t x728 = 19U;
	int32_t t150 = -1969833;

    t150 = ((x725*(x726|x727))%x728);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x729 = 77210237LLU;
	int32_t x731 = -224297;
	int8_t x732 = INT8_MIN;
	uint64_t t151 = 133900841LLU;

    t151 = ((x729*(x730|x731))%x732);

    if (t151 != 18446744070543931899LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x733 = INT16_MAX;
	uint64_t x734 = 8594298158LLU;
	int32_t x735 = INT32_MIN;
	uint16_t x736 = 6082U;
	uint64_t t152 = 3567LLU;

    t152 = ((x733*(x734|x735))%x736);

    if (t152 != 4154LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x749 = 0LLU;
	volatile uint64_t x750 = UINT64_MAX;
	uint8_t x751 = 101U;
	uint8_t x752 = 35U;
	static uint64_t t153 = 4491817LLU;

    t153 = ((x749*(x750|x751))%x752);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x754 = INT64_MIN;
	uint8_t x755 = 5U;
	int8_t x756 = INT8_MIN;
	volatile int64_t t154 = 223LL;

    t154 = ((x753*(x754|x755))%x756);

    if (t154 != -123LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x758 = 60U;
	static int16_t x759 = INT16_MIN;
	uint8_t x760 = 1U;
	volatile int32_t t155 = 85134;

    t155 = ((x757*(x758|x759))%x760);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x765 = UINT64_MAX;
	int8_t x766 = 0;
	volatile int32_t x767 = INT32_MIN;
	volatile uint64_t x768 = 224364LLU;

    t156 = ((x765*(x766|x767))%x768);

    if (t156 != 95804LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x769 = 0U;
	int8_t x771 = INT8_MAX;

    t157 = ((x769*(x770|x771))%x772);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x773 = 137U;
	int8_t x774 = INT8_MIN;
	int64_t x775 = -1LL;
	static uint32_t x776 = 5903U;
	static volatile int64_t t158 = 204390819735744548LL;

    t158 = ((x773*(x774|x775))%x776);

    if (t158 != -137LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x777 = 16754375027337LLU;
	static int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	static uint64_t t159 = 431652736LLU;

    t159 = ((x777*(x778|x779))%x780);

    if (t159 != 18446727319334524279LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x794 = 10U;
	volatile uint16_t x796 = UINT16_MAX;
	int32_t t160 = 0;

    t160 = ((x793*(x794|x795))%x796);

    if (t160 != 16379) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x813 = INT32_MIN;
	int64_t x814 = INT64_MAX;
	uint8_t x816 = 2U;
	volatile int64_t t161 = 52LL;

    t161 = ((x813*(x814|x815))%x816);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x820 = -1LL;

    t162 = ((x817*(x818|x819))%x820);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x821 = 5416U;
	static uint8_t x822 = UINT8_MAX;
	int16_t x823 = -5010;
	int64_t x824 = 756LL;
	volatile int64_t t163 = 28036716955945LL;

    t163 = ((x821*(x822|x823))%x824);

    if (t163 != -728LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x825 = INT64_MAX;
	volatile uint64_t x826 = 583330378LLU;
	static int32_t x827 = INT32_MAX;
	int32_t x828 = -23821;
	volatile uint64_t t164 = 3623338916645LLU;

    t164 = ((x825*(x826|x827))%x828);

    if (t164 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x833 = INT8_MAX;
	int8_t x834 = INT8_MIN;
	uint32_t x835 = 534184574U;
	volatile uint64_t x836 = 42676LLU;
	uint64_t t165 = 1LLU;

    t165 = ((x833*(x834|x835))%x836);

    if (t165 != 11726LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x841 = INT64_MAX;
	uint64_t x842 = UINT64_MAX;
	uint32_t x843 = 178U;
	uint64_t t166 = 12740LLU;

    t166 = ((x841*(x842|x843))%x844);

    if (t166 != 43676216000628LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x845 = UINT16_MAX;
	uint16_t x846 = 342U;
	static uint32_t x847 = UINT32_MAX;
	int32_t x848 = INT32_MAX;

    t167 = ((x845*(x846|x847))%x848);

    if (t167 != 2147418114U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x849 = UINT32_MAX;
	volatile int16_t x850 = INT16_MAX;
	uint64_t x851 = 202643923241086LLU;
	int64_t x852 = -1LL;
	uint64_t t168 = 32726503054284LLU;

    t168 = ((x849*(x850|x851))%x852);

    if (t168 != 13190840660349943809LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x857 = 1;
	volatile int8_t x858 = INT8_MAX;
	volatile int64_t x859 = INT64_MAX;
	int64_t x860 = INT64_MAX;
	volatile int64_t t169 = 21171673396681295LL;

    t169 = ((x857*(x858|x859))%x860);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x861 = UINT64_MAX;
	uint8_t x862 = 1U;
	static int32_t x863 = INT32_MIN;
	int32_t x864 = -1;
	uint64_t t170 = 56962500172972156LLU;

    t170 = ((x861*(x862|x863))%x864);

    if (t170 != 2147483647LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x866 = UINT64_MAX;
	int16_t x867 = 1022;
	uint32_t x868 = UINT32_MAX;
	volatile uint64_t t171 = 59094673386085LLU;

    t171 = ((x865*(x866|x867))%x868);

    if (t171 != 4294967169LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x869 = -1;
	uint64_t x870 = 128873LLU;
	static int64_t x871 = INT64_MAX;
	uint32_t x872 = 1364U;

    t172 = ((x869*(x870|x871))%x872);

    if (t172 != 9LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x874 = -1;
	volatile int64_t x875 = 4305624944LL;
	volatile uint64_t t173 = 1889110600594LLU;

    t173 = ((x873*(x874|x875))%x876);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x877 = -86;
	int8_t x878 = INT8_MIN;
	uint16_t x879 = UINT16_MAX;
	static uint64_t x880 = 4219512LLU;
	static volatile uint64_t t174 = 2LLU;

    t174 = ((x877*(x878|x879))%x880);

    if (t174 != 86LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x883 = UINT8_MAX;
	volatile uint8_t x884 = UINT8_MAX;
	static volatile uint64_t t175 = 15785594731301LLU;

    t175 = ((x881*(x882|x883))%x884);

    if (t175 != 201LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x886 = 2;
	int8_t x887 = 44;
	static volatile uint64_t x888 = UINT64_MAX;
	volatile uint64_t t176 = 1112227501774375LLU;

    t176 = ((x885*(x886|x887))%x888);

    if (t176 != 17946007534544302582LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x889 = INT16_MAX;
	int32_t x890 = INT32_MIN;
	uint32_t x891 = 2011330U;
	static volatile uint64_t t177 = 8520783LLU;

    t177 = ((x889*(x890|x891))%x892);

    if (t177 != 3628224318LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x893 = UINT16_MAX;
	static volatile int16_t x894 = INT16_MIN;
	static int16_t x895 = -1;
	volatile int32_t t178 = -2931548;

    t178 = ((x893*(x894|x895))%x896);

    if (t178 != -3) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x897 = UINT16_MAX;
	static volatile int32_t x898 = INT32_MIN;
	static int64_t x899 = 57868LL;
	static volatile int64_t t179 = -97276LL;

    t179 = ((x897*(x898|x899))%x900);

    if (t179 != -12LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x901 = -387206LL;
	static uint32_t x902 = 3702U;
	int8_t x903 = INT8_MIN;
	int8_t x904 = INT8_MAX;

    t180 = ((x901*(x902|x903))%x904);

    if (t180 != -25LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x905 = INT16_MIN;
	volatile int16_t x906 = INT16_MIN;
	uint8_t x907 = UINT8_MAX;
	int16_t x908 = INT16_MIN;
	int32_t t181 = -21;

    t181 = ((x905*(x906|x907))%x908);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x913 = 581163161852869260LLU;
	int32_t x914 = INT32_MIN;
	int8_t x915 = -1;
	int16_t x916 = INT16_MAX;
	uint64_t t182 = 29008651395289418LLU;

    t182 = ((x913*(x914|x915))%x916);

    if (t182 != 23592LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x919 = UINT8_MAX;
	static uint32_t x920 = 2340U;

    t183 = ((x917*(x918|x919))%x920);

    if (t183 != 95LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x925 = 22576;
	int8_t x926 = 0;
	static int8_t x927 = INT8_MAX;
	static uint64_t x928 = UINT64_MAX;
	uint64_t t184 = 12883273760LLU;

    t184 = ((x925*(x926|x927))%x928);

    if (t184 != 2867152LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x929 = INT16_MIN;
	static int32_t x930 = 24503;
	volatile uint64_t x931 = 50LLU;
	int64_t x932 = INT64_MIN;
	static volatile uint64_t t185 = 35806767918766LLU;

    t185 = ((x929*(x930|x931))%x932);

    if (t185 != 9223372036051861504LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x933 = -1;
	int32_t x934 = -1;
	int64_t x935 = INT64_MIN;
	uint16_t x936 = UINT16_MAX;
	volatile int64_t t186 = 265722998946LL;

    t186 = ((x933*(x934|x935))%x936);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x938 = 3U;
	volatile int8_t x939 = 12;
	volatile int16_t x940 = INT16_MIN;
	volatile int32_t t187 = -65205893;

    t187 = ((x937*(x938|x939))%x940);

    if (t187 != 3825) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x941 = -4068;
	static volatile int32_t x942 = 2;
	int8_t x943 = -1;
	int32_t t188 = 1;

    t188 = ((x941*(x942|x943))%x944);

    if (t188 != 100) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x945 = INT8_MIN;
	volatile int32_t x947 = -1;
	int32_t x948 = -3660;
	volatile int32_t t189 = 49246350;

    t189 = ((x945*(x946|x947))%x948);

    if (t189 != 128) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x949 = 505736459U;
	int32_t x950 = INT32_MIN;
	uint8_t x951 = 39U;
	int32_t x952 = -1;

    t190 = ((x949*(x950|x951))%x952);

    if (t190 != 396369069U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x953 = -856;
	int8_t x954 = INT8_MIN;
	uint64_t x955 = 8679602816702416LLU;
	volatile int32_t x956 = INT32_MIN;

    t191 = ((x953*(x954|x955))%x956);

    if (t191 != 41088LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x957 = -90316;
	int8_t x958 = INT8_MIN;
	int64_t x959 = INT64_MIN;
	static volatile uint32_t x960 = UINT32_MAX;

    t192 = ((x957*(x958|x959))%x960);

    if (t192 != 11560448LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x961 = -1LL;
	int64_t x963 = INT64_MAX;
	int8_t x964 = -3;
	volatile int64_t t193 = 135383283439195346LL;

    t193 = ((x961*(x962|x963))%x964);

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x965 = -62;
	int32_t x968 = INT32_MAX;
	volatile uint64_t t194 = 0LLU;

    t194 = ((x965*(x966|x967))%x968);

    if (t194 != 62LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x969 = INT32_MAX;
	static uint16_t x970 = UINT16_MAX;
	static int16_t x971 = INT16_MIN;
	uint32_t x972 = 1U;
	uint32_t t195 = 23U;

    t195 = ((x969*(x970|x971))%x972);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x973 = INT64_MIN;
	volatile int8_t x974 = -1;
	volatile uint64_t x975 = 1862986690466974712LLU;
	int16_t x976 = INT16_MIN;
	static uint64_t t196 = 1865734230856840LLU;

    t196 = ((x973*(x974|x975))%x976);

    if (t196 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x977 = INT8_MAX;
	int32_t x979 = -430176;
	static int64_t x980 = 1LL;

    t197 = ((x977*(x978|x979))%x980);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x982 = -1;
	int8_t x983 = INT8_MIN;
	int32_t t198 = 92408;

    t198 = ((x981*(x982|x983))%x984);

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x985 = INT16_MIN;
	static int16_t x986 = INT16_MAX;
	static int16_t x987 = INT16_MAX;
	static uint8_t x988 = 10U;
	int32_t t199 = -49500;

    t199 = ((x985*(x986|x987))%x988);

    if (t199 != -6) { NG(); } else { ; }
	
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

