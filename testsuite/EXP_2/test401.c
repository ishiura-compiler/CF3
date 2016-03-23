
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

int16_t x2 = INT16_MIN;
int64_t x4 = INT64_MIN;
int16_t x8 = 18;
int32_t x10 = 107;
uint32_t x13 = 105U;
static int64_t x15 = -4801LL;
int32_t t3 = 3182552;
uint64_t x17 = UINT64_MAX;
static volatile int64_t x35 = -1LL;
volatile int32_t t7 = 265750350;
static int16_t x50 = INT16_MAX;
volatile uint32_t x56 = 15U;
volatile uint8_t x61 = 0U;
int32_t x62 = -1;
static uint32_t x63 = UINT32_MAX;
volatile int64_t x74 = -824524569025091LL;
int64_t x76 = INT64_MIN;
static uint16_t x77 = 487U;
int64_t x78 = INT64_MAX;
static int16_t x79 = -1;
int32_t t12 = -33901;
volatile uint8_t x82 = 0U;
volatile int8_t x83 = -62;
uint16_t x114 = 5U;
int16_t x118 = INT16_MIN;
static volatile int32_t t18 = 14797351;
uint64_t x130 = 4599006637LLU;
uint32_t x132 = 5U;
volatile int32_t t20 = -36474668;
int32_t t22 = 168882966;
int8_t x146 = -1;
int32_t x148 = -1;
volatile int32_t t23 = 2017;
int16_t x150 = -3;
int64_t x153 = INT64_MAX;
static volatile int32_t x156 = INT32_MAX;
uint64_t x173 = 2081021998095297LLU;
int16_t x177 = -1;
volatile int32_t t27 = 399086;
uint8_t x193 = 55U;
int32_t x196 = INT32_MIN;
int32_t t29 = 0;
volatile int8_t x202 = -1;
int64_t x205 = -13403312884712938LL;
volatile uint16_t x220 = 481U;
int32_t t33 = -44195;
int16_t x234 = INT16_MIN;
static int64_t x241 = INT64_MAX;
int16_t x243 = INT16_MIN;
volatile int16_t x249 = -8044;
int32_t t40 = 0;
static volatile uint8_t x270 = 58U;
static volatile uint16_t x274 = UINT16_MAX;
uint16_t x275 = 12181U;
volatile int32_t t45 = 2;
uint32_t x287 = 236115538U;
volatile uint32_t x288 = 365338203U;
int16_t x296 = 8500;
int32_t t48 = -4;
int32_t x303 = INT32_MAX;
int32_t t49 = 7;
int64_t x308 = -1LL;
uint32_t x309 = 38U;
uint64_t x318 = UINT64_MAX;
static int32_t t53 = 15048882;
static uint16_t x325 = 433U;
uint32_t x327 = 25139U;
volatile int32_t x337 = INT32_MIN;
int64_t x338 = -1LL;
uint16_t x340 = UINT16_MAX;
volatile int32_t t56 = 94003;
static uint16_t x342 = UINT16_MAX;
volatile uint16_t x343 = 53U;
volatile int32_t t58 = -10712;
static uint16_t x350 = 9U;
int8_t x361 = -1;
int32_t x362 = -1;
int32_t x364 = -1764497;
volatile int32_t t61 = -1659;
int16_t x369 = INT16_MIN;
uint16_t x374 = 616U;
static uint32_t x375 = 1U;
int32_t t64 = 43;
uint16_t x392 = 3U;
int8_t x395 = INT8_MAX;
volatile int16_t x402 = INT16_MIN;
static int32_t x404 = -40797;
uint8_t x406 = UINT8_MAX;
uint8_t x407 = 1U;
uint64_t x411 = 4521491706418214597LLU;
uint8_t x412 = 2U;
uint64_t x419 = 355135952233478LLU;
int8_t x420 = INT8_MAX;
int64_t x423 = -1LL;
uint8_t x430 = 5U;
uint16_t x437 = 56U;
int8_t x438 = INT8_MIN;
static int64_t x444 = INT64_MIN;
uint16_t x448 = UINT16_MAX;
uint16_t x465 = UINT16_MAX;
int16_t x469 = INT16_MIN;
int32_t x484 = 3509341;
int16_t x485 = INT16_MAX;
int32_t t83 = 460159;
uint64_t x498 = UINT64_MAX;
volatile int32_t t86 = 125933;
static int16_t x513 = INT16_MIN;
static int16_t x515 = INT16_MIN;
static uint8_t x516 = 1U;
int32_t t88 = 946561;
static int16_t x519 = -13;
int32_t x536 = -1;
uint64_t x537 = 916LLU;
int8_t x543 = -1;
static int64_t x573 = INT64_MIN;
int16_t x576 = INT16_MIN;
volatile int32_t t94 = -45444240;
uint16_t x607 = UINT16_MAX;
volatile int32_t t103 = 446;
int64_t x636 = INT64_MIN;
int32_t t104 = -254754450;
volatile uint8_t x644 = 1U;
static volatile int32_t t106 = 115484671;
int32_t x647 = 25;
static int16_t x648 = -1;
static volatile int32_t t109 = 535017007;
uint16_t x661 = UINT16_MAX;
static uint64_t x663 = UINT64_MAX;
int32_t t110 = -7501;
uint8_t x667 = 1U;
int8_t x699 = -4;
int64_t x729 = 0LL;
int16_t x734 = INT16_MIN;
int8_t x735 = 1;
int8_t x738 = INT8_MIN;
volatile int8_t x748 = INT8_MAX;
static volatile int32_t t125 = -1923;
volatile uint64_t x760 = 168334359691310550LLU;
static volatile int16_t x773 = INT16_MIN;
int32_t t127 = 10414782;
int64_t x789 = -1780938594LL;
volatile uint64_t x791 = 1LLU;
int32_t t128 = 494886;
volatile int16_t x804 = -310;
uint8_t x810 = 1U;
int32_t t130 = 0;
int32_t x814 = -895468915;
volatile int32_t t133 = 4145474;
uint32_t x834 = UINT32_MAX;
int32_t t134 = 1708933;
volatile uint64_t x839 = UINT64_MAX;
static volatile int8_t x846 = 0;
static int64_t x847 = INT64_MIN;
int32_t x848 = -25964;
int8_t x872 = INT8_MIN;
volatile uint32_t x880 = 3U;
static volatile int32_t x899 = -1761135;
int32_t t148 = 11910;
volatile int64_t x916 = -1LL;
int8_t x921 = 14;
int32_t t151 = 43023692;
uint8_t x942 = 0U;
uint16_t x959 = UINT16_MAX;
uint8_t x968 = 2U;
uint8_t x976 = UINT8_MAX;
int32_t t158 = -6;
static volatile int8_t x979 = INT8_MIN;
int8_t x981 = INT8_MIN;
uint8_t x982 = 57U;
static uint8_t x986 = 1U;
int64_t x992 = INT64_MIN;
volatile uint32_t x1012 = UINT32_MAX;
int16_t x1015 = 15024;
int32_t x1023 = 582349192;
volatile int32_t t167 = 39555070;
uint8_t x1029 = UINT8_MAX;
static int32_t t169 = 28181976;
uint16_t x1034 = UINT16_MAX;
static volatile uint8_t x1039 = UINT8_MAX;
int64_t x1049 = INT64_MIN;
uint16_t x1052 = UINT16_MAX;
int16_t x1053 = 0;
uint64_t x1056 = 2178LLU;
uint8_t x1058 = UINT8_MAX;
int8_t x1060 = INT8_MAX;
int32_t x1070 = -1;
int32_t x1086 = -1855679;
static int64_t x1090 = 9120185844149159LL;
int8_t x1127 = -28;
static int8_t x1128 = INT8_MIN;
int64_t x1137 = -172174LL;
volatile int32_t t185 = 0;
static uint16_t x1149 = UINT16_MAX;
static int16_t x1171 = -1;
uint64_t x1190 = 30700LLU;
int16_t x1205 = INT16_MIN;
int32_t t195 = -29;
uint8_t x1209 = 4U;
int16_t x1218 = INT16_MIN;
volatile uint64_t x1224 = 6700716227628134LLU;
uint32_t x1238 = 24587U;
volatile int8_t x1239 = INT8_MIN;


void f0(void) {
    	uint64_t x1 = 4866LLU;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 2;

    t0 = ((x1+(x2*x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -1472123;
	volatile int16_t x6 = 182;
	int32_t x7 = 3333458;
	int32_t t1 = 6388;

    t1 = ((x5+(x6*x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 0;
	static uint16_t x11 = 10886U;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 406415;

    t2 = ((x9+(x10*x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x14 = INT16_MAX;
	volatile int8_t x16 = 6;

    t3 = ((x13+(x14*x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = INT16_MIN;
	uint8_t x19 = 2U;
	uint32_t x20 = 1639U;
	int32_t t4 = 123858710;

    t4 = ((x17+(x18*x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	int8_t x26 = INT8_MAX;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;
	int32_t t5 = -125798;

    t5 = ((x25+(x26*x27))>x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	int64_t x30 = 1042805090239689LL;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t6 = 65748243;

    t6 = ((x29+(x30*x31))>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = 11;
	int8_t x34 = 7;
	volatile int16_t x36 = -1;

    t7 = ((x33+(x34*x35))>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x49 = 4;
	volatile int32_t x51 = -1;
	uint16_t x52 = 251U;
	static int32_t t8 = -44884235;

    t8 = ((x49+(x50*x51))>x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x53 = -252;
	static uint16_t x54 = 360U;
	int64_t x55 = -1LL;
	volatile int32_t t9 = 3;

    t9 = ((x53+(x54*x55))>x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x64 = -50243633193766270LL;
	volatile int32_t t10 = -191897047;

    t10 = ((x61+(x62*x63))>x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x73 = -1;
	volatile int8_t x75 = INT8_MIN;
	static volatile int32_t t11 = -11;

    t11 = ((x73+(x74*x75))>x76);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x80 = -1LL;

    t12 = ((x77+(x78*x79))>x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x81 = -1LL;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t13 = -616;

    t13 = ((x81+(x82*x83))>x84);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = 6U;
	uint16_t x91 = 56U;
	int32_t x92 = 759;
	int32_t t14 = -8043;

    t14 = ((x89+(x90*x91))>x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x105 = -11581;
	static int16_t x106 = -152;
	uint64_t x107 = 860943620LLU;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t15 = -118147879;

    t15 = ((x105+(x106*x107))>x108);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x109 = 204U;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = -12;
	volatile int32_t x112 = 4;
	volatile int32_t t16 = -1;

    t16 = ((x109+(x110*x111))>x112);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x113 = -1LL;
	uint16_t x115 = 14431U;
	volatile int16_t x116 = INT16_MAX;
	static volatile int32_t t17 = -27;

    t17 = ((x113+(x114*x115))>x116);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x117 = 36582937U;
	uint64_t x119 = 1016786535733949495LLU;
	int32_t x120 = -977;

    t18 = ((x117+(x118*x119))>x120);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MAX;
	static volatile int64_t x123 = 22459LL;
	static int64_t x124 = -1LL;
	volatile int32_t t19 = 221;

    t19 = ((x121+(x122*x123))>x124);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x129 = 123U;
	int64_t x131 = INT64_MIN;

    t20 = ((x129+(x130*x131))>x132);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = 1;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t21 = -14;

    t21 = ((x133+(x134*x135))>x136);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x137 = UINT32_MAX;
	uint16_t x138 = UINT16_MAX;
	static volatile int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MIN;

    t22 = ((x137+(x138*x139))>x140);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x145 = 42U;
	uint32_t x147 = 2U;

    t23 = ((x145+(x146*x147))>x148);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x149 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	int16_t x152 = -124;
	volatile int32_t t24 = 5;

    t24 = ((x149+(x150*x151))>x152);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x154 = 0;
	int16_t x155 = -1;
	volatile int32_t t25 = 21689;

    t25 = ((x153+(x154*x155))>x156);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x174 = 1U;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	int32_t t26 = 12761652;

    t26 = ((x173+(x174*x175))>x176);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x178 = INT8_MAX;
	static uint8_t x179 = UINT8_MAX;
	static uint64_t x180 = 115372440616092212LLU;

    t27 = ((x177+(x178*x179))>x180);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x185 = -1;
	int16_t x186 = -1450;
	volatile int16_t x187 = INT16_MIN;
	volatile int64_t x188 = INT64_MIN;
	int32_t t28 = 7;

    t28 = ((x185+(x186*x187))>x188);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x194 = -1;
	int16_t x195 = -1;

    t29 = ((x193+(x194*x195))>x196);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x201 = 1;
	static int64_t x203 = -1LL;
	uint64_t x204 = 407637052LLU;
	volatile int32_t t30 = 1616;

    t30 = ((x201+(x202*x203))>x204);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x206 = 3375U;
	static uint16_t x207 = 69U;
	int16_t x208 = -176;
	int32_t t31 = 74768102;

    t31 = ((x205+(x206*x207))>x208);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x209 = 19U;
	int16_t x210 = INT16_MAX;
	uint64_t x211 = 412581555601197326LLU;
	uint64_t x212 = UINT64_MAX;
	int32_t t32 = -1;

    t32 = ((x209+(x210*x211))>x212);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x217 = 74423266885LLU;
	static volatile int32_t x218 = 3081;
	static int64_t x219 = -1LL;

    t33 = ((x217+(x218*x219))>x220);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x221 = 101;
	int32_t x222 = -7;
	volatile uint32_t x223 = 111831U;
	volatile uint64_t x224 = 15LLU;
	volatile int32_t t34 = -859519944;

    t34 = ((x221+(x222*x223))>x224);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x233 = INT16_MIN;
	static volatile int16_t x235 = -1;
	int64_t x236 = 803916LL;
	volatile int32_t t35 = -64223743;

    t35 = ((x233+(x234*x235))>x236);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x237 = -36751343100148170LL;
	volatile uint32_t x238 = 25567U;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 35U;
	volatile int32_t t36 = 1;

    t36 = ((x237+(x238*x239))>x240);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x242 = UINT64_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t37 = -47717108;

    t37 = ((x241+(x242*x243))>x244);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x245 = -1LL;
	volatile int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t38 = 15;

    t38 = ((x245+(x246*x247))>x248);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x250 = 6;
	volatile uint16_t x251 = 111U;
	int8_t x252 = INT8_MAX;
	volatile int32_t t39 = 2353;

    t39 = ((x249+(x250*x251))>x252);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x253 = 104U;
	volatile int8_t x254 = -41;
	int8_t x255 = 0;
	uint16_t x256 = UINT16_MAX;

    t40 = ((x253+(x254*x255))>x256);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x261 = -1;
	static uint32_t x262 = UINT32_MAX;
	static int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t41 = -7025;

    t41 = ((x261+(x262*x263))>x264);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint32_t x269 = 505819263U;
	int16_t x271 = INT16_MIN;
	volatile uint8_t x272 = 1U;
	volatile int32_t t42 = 2755122;

    t42 = ((x269+(x270*x271))>x272);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x276 = -1;
	volatile int32_t t43 = -173;

    t43 = ((x273+(x274*x275))>x276);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint32_t x278 = UINT32_MAX;
	int64_t x279 = -1LL;
	static int16_t x280 = -2982;
	int32_t t44 = 1;

    t44 = ((x277+(x278*x279))>x280);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x281 = INT32_MAX;
	static int64_t x282 = -1700778675187129LL;
	int16_t x283 = -1;
	static int32_t x284 = INT32_MIN;

    t45 = ((x281+(x282*x283))>x284);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x285 = 704215671U;
	static uint32_t x286 = 16U;
	int32_t t46 = 227787;

    t46 = ((x285+(x286*x287))>x288);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x289 = 7U;
	uint32_t x290 = UINT32_MAX;
	int8_t x291 = -1;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t47 = 2;

    t47 = ((x289+(x290*x291))>x292);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x293 = UINT32_MAX;
	uint32_t x294 = 389545U;
	int32_t x295 = INT32_MAX;

    t48 = ((x293+(x294*x295))>x296);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x301 = -1;
	uint64_t x302 = 455010925806189860LLU;
	uint32_t x304 = 102U;

    t49 = ((x301+(x302*x303))>x304);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x305 = 11939716404543LLU;
	int16_t x306 = INT16_MAX;
	int8_t x307 = -13;
	int32_t t50 = 13028188;

    t50 = ((x305+(x306*x307))>x308);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 8837490639384574370LLU;
	static int16_t x312 = 167;
	volatile int32_t t51 = 23534094;

    t51 = ((x309+(x310*x311))>x312);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x313 = -1LL;
	int8_t x314 = INT8_MAX;
	static uint64_t x315 = 16880LLU;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t52 = 863531;

    t52 = ((x313+(x314*x315))>x316);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x317 = -1LL;
	static int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MIN;

    t53 = ((x317+(x318*x319))>x320);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x326 = -1LL;
	static int16_t x328 = INT16_MAX;
	int32_t t54 = -1;

    t54 = ((x325+(x326*x327))>x328);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x329 = -1;
	static int16_t x330 = INT16_MIN;
	static int32_t x331 = -1;
	int64_t x332 = 2373851850445515LL;
	int32_t t55 = -48361;

    t55 = ((x329+(x330*x331))>x332);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x339 = INT32_MIN;

    t56 = ((x337+(x338*x339))>x340);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x341 = UINT16_MAX;
	int8_t x344 = 10;
	volatile int32_t t57 = -1;

    t57 = ((x341+(x342*x343))>x344);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x345 = 183776936U;
	uint8_t x346 = 7U;
	static int8_t x347 = 0;
	int16_t x348 = -5;

    t58 = ((x345+(x346*x347))>x348);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x349 = 145LLU;
	int64_t x351 = 4308922LL;
	int16_t x352 = INT16_MIN;
	static int32_t t59 = -108273;

    t59 = ((x349+(x350*x351))>x352);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x363 = 1U;
	volatile int32_t t60 = 109482897;

    t60 = ((x361+(x362*x363))>x364);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x365 = 46;
	volatile int64_t x366 = -30358068426LL;
	int8_t x367 = INT8_MIN;
	int16_t x368 = -1;

    t61 = ((x365+(x366*x367))>x368);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x370 = 7603LLU;
	static int8_t x371 = 7;
	volatile int32_t x372 = INT32_MIN;
	int32_t t62 = -229565;

    t62 = ((x369+(x370*x371))>x372);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x373 = 13;
	uint64_t x376 = 818960198LLU;
	int32_t t63 = -4877;

    t63 = ((x373+(x374*x375))>x376);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x377 = INT64_MAX;
	uint16_t x378 = 1939U;
	static int16_t x379 = -3255;
	uint8_t x380 = 2U;

    t64 = ((x377+(x378*x379))>x380);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x381 = INT16_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = -153;
	int32_t x384 = -1;
	volatile int32_t t65 = 11798309;

    t65 = ((x381+(x382*x383))>x384);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x389 = 10U;
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	volatile int32_t t66 = -21196686;

    t66 = ((x389+(x390*x391))>x392);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	static int32_t x396 = INT32_MAX;
	int32_t t67 = 1;

    t67 = ((x393+(x394*x395))>x396);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x401 = INT16_MAX;
	uint16_t x403 = 1U;
	static volatile int32_t t68 = -246605848;

    t68 = ((x401+(x402*x403))>x404);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x405 = -1;
	int64_t x408 = 138844857293442LL;
	int32_t t69 = 490920136;

    t69 = ((x405+(x406*x407))>x408);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x409 = 10U;
	int8_t x410 = -1;
	volatile int32_t t70 = 94;

    t70 = ((x409+(x410*x411))>x412);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x413 = 175;
	volatile int16_t x414 = -1;
	static int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t71 = 15;

    t71 = ((x413+(x414*x415))>x416);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x417 = 427569442;
	int8_t x418 = INT8_MIN;
	volatile int32_t t72 = 1701502;

    t72 = ((x417+(x418*x419))>x420);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x421 = 282U;
	int8_t x422 = INT8_MAX;
	static int8_t x424 = INT8_MAX;
	static volatile int32_t t73 = -2672;

    t73 = ((x421+(x422*x423))>x424);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = -24;
	volatile uint64_t x427 = UINT64_MAX;
	static volatile int64_t x428 = -182555703289LL;
	volatile int32_t t74 = 157;

    t74 = ((x425+(x426*x427))>x428);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x429 = INT8_MIN;
	int8_t x431 = -4;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t75 = 28;

    t75 = ((x429+(x430*x431))>x432);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x439 = INT8_MIN;
	uint32_t x440 = 699779U;
	static volatile int32_t t76 = -77;

    t76 = ((x437+(x438*x439))>x440);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x441 = INT64_MAX;
	uint64_t x442 = UINT64_MAX;
	int32_t x443 = 100100;
	int32_t t77 = 506;

    t77 = ((x441+(x442*x443))>x444);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x445 = INT64_MAX;
	volatile uint16_t x446 = 8U;
	int32_t x447 = -1;
	static int32_t t78 = -9104313;

    t78 = ((x445+(x446*x447))>x448);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x457 = 0U;
	int64_t x458 = -2573705097776640LL;
	volatile uint8_t x459 = 18U;
	static int32_t x460 = -1;
	static int32_t t79 = -6478;

    t79 = ((x457+(x458*x459))>x460);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x466 = 897;
	int16_t x467 = INT16_MIN;
	volatile uint32_t x468 = 1U;
	volatile int32_t t80 = -1489296;

    t80 = ((x465+(x466*x467))>x468);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x470 = INT16_MAX;
	uint32_t x471 = 1145597748U;
	uint64_t x472 = 377546518553LLU;
	volatile int32_t t81 = -13;

    t81 = ((x469+(x470*x471))>x472);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x481 = 12U;
	int8_t x482 = INT8_MIN;
	int16_t x483 = 168;
	int32_t t82 = 210220451;

    t82 = ((x481+(x482*x483))>x484);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x486 = INT16_MAX;
	uint8_t x487 = 1U;
	uint64_t x488 = UINT64_MAX;

    t83 = ((x485+(x486*x487))>x488);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x489 = -1;
	uint64_t x490 = 298LLU;
	uint16_t x491 = UINT16_MAX;
	int64_t x492 = -616101LL;
	volatile int32_t t84 = -1;

    t84 = ((x489+(x490*x491))>x492);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x497 = INT32_MAX;
	int64_t x499 = 0LL;
	int16_t x500 = INT16_MIN;
	int32_t t85 = -43;

    t85 = ((x497+(x498*x499))>x500);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x505 = 68440338LLU;
	int64_t x506 = -539944022LL;
	uint16_t x507 = 1556U;
	static uint8_t x508 = UINT8_MAX;

    t86 = ((x505+(x506*x507))>x508);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x509 = INT16_MAX;
	static int8_t x510 = INT8_MAX;
	int32_t x511 = -1;
	int64_t x512 = INT64_MIN;
	int32_t t87 = 156;

    t87 = ((x509+(x510*x511))>x512);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x514 = 1;

    t88 = ((x513+(x514*x515))>x516);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x517 = INT8_MIN;
	uint16_t x518 = 1670U;
	static int32_t x520 = -1;
	volatile int32_t t89 = 0;

    t89 = ((x517+(x518*x519))>x520);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x533 = 59LLU;
	int8_t x534 = INT8_MIN;
	static volatile int32_t x535 = -29;
	int32_t t90 = -676327;

    t90 = ((x533+(x534*x535))>x536);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x538 = 6447099U;
	int16_t x539 = 4601;
	uint16_t x540 = 33U;
	int32_t t91 = -1;

    t91 = ((x537+(x538*x539))>x540);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x541 = 992U;
	volatile int64_t x542 = -163705800237158214LL;
	uint32_t x544 = 383U;
	int32_t t92 = -124;

    t92 = ((x541+(x542*x543))>x544);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x569 = -1LL;
	static int16_t x570 = 32;
	int16_t x571 = -12423;
	volatile int64_t x572 = INT64_MIN;
	volatile int32_t t93 = 391;

    t93 = ((x569+(x570*x571))>x572);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x574 = 362090U;
	int8_t x575 = 0;

    t94 = ((x573+(x574*x575))>x576);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x577 = INT16_MAX;
	static uint32_t x578 = 2549U;
	static uint8_t x579 = 0U;
	static volatile uint64_t x580 = 107LLU;
	int32_t t95 = 6708156;

    t95 = ((x577+(x578*x579))>x580);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x581 = UINT16_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	volatile uint16_t x583 = 1668U;
	int32_t x584 = INT32_MIN;
	volatile int32_t t96 = -15;

    t96 = ((x581+(x582*x583))>x584);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x585 = INT32_MIN;
	int64_t x586 = -1LL;
	uint8_t x587 = 33U;
	static uint8_t x588 = UINT8_MAX;
	int32_t t97 = -2857;

    t97 = ((x585+(x586*x587))>x588);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x593 = INT8_MIN;
	uint16_t x594 = UINT16_MAX;
	int16_t x595 = INT16_MAX;
	uint32_t x596 = 2187U;
	static int32_t t98 = 1703;

    t98 = ((x593+(x594*x595))>x596);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x597 = -2;
	int16_t x598 = 3;
	int16_t x599 = INT16_MIN;
	int8_t x600 = 23;
	volatile int32_t t99 = 0;

    t99 = ((x597+(x598*x599))>x600);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x605 = UINT32_MAX;
	static int8_t x606 = INT8_MIN;
	int64_t x608 = -1LL;
	volatile int32_t t100 = -48606469;

    t100 = ((x605+(x606*x607))>x608);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x609 = INT8_MIN;
	volatile uint32_t x610 = UINT32_MAX;
	static uint64_t x611 = 1008628234LLU;
	static uint8_t x612 = 58U;
	volatile int32_t t101 = -1;

    t101 = ((x609+(x610*x611))>x612);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x617 = 1U;
	int8_t x618 = 15;
	uint8_t x619 = 80U;
	int32_t x620 = 502;
	int32_t t102 = 4375531;

    t102 = ((x617+(x618*x619))>x620);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x629 = INT8_MIN;
	int16_t x630 = INT16_MIN;
	uint32_t x631 = 6806U;
	volatile uint8_t x632 = 11U;

    t103 = ((x629+(x630*x631))>x632);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x633 = 7732LLU;
	volatile int64_t x634 = INT64_MIN;
	volatile int16_t x635 = 1;

    t104 = ((x633+(x634*x635))>x636);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x637 = 1786LLU;
	uint16_t x638 = 1U;
	static volatile int32_t x639 = INT32_MIN;
	static int8_t x640 = INT8_MIN;
	volatile int32_t t105 = 251614;

    t105 = ((x637+(x638*x639))>x640);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x641 = INT16_MAX;
	int32_t x642 = -710;
	volatile int8_t x643 = INT8_MIN;

    t106 = ((x641+(x642*x643))>x644);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x645 = 1U;
	int64_t x646 = 50197355904308LL;
	volatile int32_t t107 = -3;

    t107 = ((x645+(x646*x647))>x648);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x649 = 1U;
	static uint16_t x650 = UINT16_MAX;
	int8_t x651 = -1;
	int16_t x652 = -1;
	volatile int32_t t108 = 632;

    t108 = ((x649+(x650*x651))>x652);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x653 = UINT64_MAX;
	volatile uint16_t x654 = 6904U;
	uint32_t x655 = 381U;
	static volatile int32_t x656 = -65251;

    t109 = ((x653+(x654*x655))>x656);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x662 = INT64_MIN;
	int32_t x664 = INT32_MIN;

    t110 = ((x661+(x662*x663))>x664);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x665 = 7U;
	int32_t x666 = 8994830;
	static uint64_t x668 = UINT64_MAX;
	int32_t t111 = 5957885;

    t111 = ((x665+(x666*x667))>x668);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x677 = 43090;
	static uint8_t x678 = 62U;
	uint64_t x679 = 2826535369162458363LLU;
	int32_t x680 = -1;
	static int32_t t112 = -6226256;

    t112 = ((x677+(x678*x679))>x680);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x685 = 119U;
	int16_t x686 = INT16_MAX;
	int16_t x687 = INT16_MIN;
	int64_t x688 = INT64_MIN;
	static int32_t t113 = -6;

    t113 = ((x685+(x686*x687))>x688);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x698 = -70070222582259844LL;
	volatile uint8_t x700 = UINT8_MAX;
	int32_t t114 = 352;

    t114 = ((x697+(x698*x699))>x700);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x701 = -736514;
	int16_t x702 = 125;
	int64_t x703 = -8955310895LL;
	uint64_t x704 = 97127LLU;
	volatile int32_t t115 = 602150;

    t115 = ((x701+(x702*x703))>x704);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x709 = 107U;
	int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MAX;
	int32_t x712 = INT32_MAX;
	volatile int32_t t116 = -13315964;

    t116 = ((x709+(x710*x711))>x712);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x713 = 33U;
	volatile int16_t x714 = INT16_MIN;
	volatile uint8_t x715 = UINT8_MAX;
	uint32_t x716 = UINT32_MAX;
	volatile int32_t t117 = 89416097;

    t117 = ((x713+(x714*x715))>x716);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x717 = -1;
	static uint64_t x718 = 22525065LLU;
	int32_t x719 = 1;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t118 = 229856839;

    t118 = ((x717+(x718*x719))>x720);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x721 = INT16_MAX;
	uint64_t x722 = 13997LLU;
	static uint16_t x723 = UINT16_MAX;
	int16_t x724 = 31;
	int32_t t119 = 7808;

    t119 = ((x721+(x722*x723))>x724);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x730 = UINT16_MAX;
	volatile int64_t x731 = -128606195LL;
	int16_t x732 = INT16_MIN;
	volatile int32_t t120 = -181;

    t120 = ((x729+(x730*x731))>x732);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x733 = UINT16_MAX;
	static volatile uint64_t x736 = 3189650416188LLU;
	int32_t t121 = 12233;

    t121 = ((x733+(x734*x735))>x736);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x737 = 42;
	uint8_t x739 = UINT8_MAX;
	uint8_t x740 = 0U;
	volatile int32_t t122 = -404156002;

    t122 = ((x737+(x738*x739))>x740);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x741 = UINT16_MAX;
	volatile int64_t x742 = 6173156LL;
	uint16_t x743 = 12U;
	int16_t x744 = -1;
	static volatile int32_t t123 = 273541034;

    t123 = ((x741+(x742*x743))>x744);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = -929663LL;
	static volatile uint16_t x747 = 3167U;
	int32_t t124 = 9;

    t124 = ((x745+(x746*x747))>x748);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x753 = -1LL;
	int64_t x754 = INT64_MAX;
	volatile uint8_t x755 = 1U;
	static uint8_t x756 = 0U;

    t125 = ((x753+(x754*x755))>x756);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x757 = -1LL;
	static int64_t x758 = -1LL;
	volatile int16_t x759 = -255;
	static int32_t t126 = 599;

    t126 = ((x757+(x758*x759))>x760);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x774 = INT16_MIN;
	int8_t x775 = -1;
	uint8_t x776 = 94U;

    t127 = ((x773+(x774*x775))>x776);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x790 = 46;
	static int16_t x792 = -1;

    t128 = ((x789+(x790*x791))>x792);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x801 = 1U;
	int32_t x802 = -1;
	static volatile uint8_t x803 = 15U;
	static int32_t t129 = -50548;

    t129 = ((x801+(x802*x803))>x804);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x809 = 1U;
	int32_t x811 = INT32_MIN;
	static int64_t x812 = INT64_MIN;

    t130 = ((x809+(x810*x811))>x812);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x813 = 0U;
	uint32_t x815 = 16U;
	int16_t x816 = -1;
	int32_t t131 = -2707;

    t131 = ((x813+(x814*x815))>x816);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x821 = INT8_MAX;
	int64_t x822 = -1LL;
	int32_t x823 = INT32_MAX;
	int64_t x824 = INT64_MAX;
	int32_t t132 = -17;

    t132 = ((x821+(x822*x823))>x824);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x829 = 0;
	int16_t x830 = INT16_MAX;
	static int8_t x831 = INT8_MAX;
	static uint64_t x832 = 4285247LLU;

    t133 = ((x829+(x830*x831))>x832);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x833 = UINT8_MAX;
	int64_t x835 = -1LL;
	uint32_t x836 = 3061U;

    t134 = ((x833+(x834*x835))>x836);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x837 = -1;
	int32_t x838 = -889548;
	int16_t x840 = INT16_MIN;
	int32_t t135 = -8;

    t135 = ((x837+(x838*x839))>x840);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x845 = -2;
	int32_t t136 = 1818;

    t136 = ((x845+(x846*x847))>x848);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x849 = 1U;
	static int64_t x850 = 7818031012020969LL;
	int64_t x851 = -1LL;
	int64_t x852 = INT64_MIN;
	static int32_t t137 = -24764881;

    t137 = ((x849+(x850*x851))>x852);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x857 = INT64_MIN;
	int64_t x858 = INT64_MAX;
	uint16_t x859 = 1U;
	int16_t x860 = 0;
	int32_t t138 = -1;

    t138 = ((x857+(x858*x859))>x860);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x861 = 2154;
	static uint32_t x862 = UINT32_MAX;
	int32_t x863 = -1;
	int8_t x864 = INT8_MIN;
	int32_t t139 = 0;

    t139 = ((x861+(x862*x863))>x864);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x865 = -7;
	int32_t x866 = -1;
	static volatile uint64_t x867 = 100723LLU;
	int16_t x868 = INT16_MIN;
	volatile int32_t t140 = 9461708;

    t140 = ((x865+(x866*x867))>x868);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x869 = 118342;
	volatile int8_t x870 = INT8_MAX;
	volatile uint16_t x871 = UINT16_MAX;
	volatile int32_t t141 = 0;

    t141 = ((x869+(x870*x871))>x872);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x873 = UINT8_MAX;
	static int8_t x874 = INT8_MAX;
	volatile uint64_t x875 = UINT64_MAX;
	static int16_t x876 = INT16_MIN;
	volatile int32_t t142 = 0;

    t142 = ((x873+(x874*x875))>x876);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x877 = 12LL;
	volatile int16_t x878 = INT16_MAX;
	volatile int8_t x879 = INT8_MAX;
	static volatile int32_t t143 = -40479;

    t143 = ((x877+(x878*x879))>x880);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x881 = 12;
	uint64_t x882 = UINT64_MAX;
	uint16_t x883 = 15U;
	int16_t x884 = INT16_MIN;
	volatile int32_t t144 = -1756522;

    t144 = ((x881+(x882*x883))>x884);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x885 = 0U;
	int8_t x886 = INT8_MIN;
	uint8_t x887 = 74U;
	static int32_t x888 = INT32_MIN;
	static int32_t t145 = -406856;

    t145 = ((x885+(x886*x887))>x888);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x897 = INT16_MIN;
	volatile int8_t x898 = INT8_MAX;
	volatile int32_t x900 = INT32_MIN;
	static int32_t t146 = -62129027;

    t146 = ((x897+(x898*x899))>x900);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x905 = -7;
	static uint64_t x906 = 583380482097LLU;
	volatile int64_t x907 = INT64_MIN;
	int8_t x908 = INT8_MIN;
	int32_t t147 = -731;

    t147 = ((x905+(x906*x907))>x908);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x909 = -1;
	int16_t x910 = 0;
	static volatile int16_t x911 = INT16_MAX;
	int8_t x912 = INT8_MIN;

    t148 = ((x909+(x910*x911))>x912);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x913 = 18560U;
	static volatile int16_t x914 = -1;
	uint64_t x915 = 20158353004120966LLU;
	volatile int32_t t149 = -2465;

    t149 = ((x913+(x914*x915))>x916);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x922 = INT16_MIN;
	int16_t x923 = 0;
	int16_t x924 = INT16_MAX;
	volatile int32_t t150 = 0;

    t150 = ((x921+(x922*x923))>x924);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x925 = INT32_MAX;
	static int16_t x926 = 0;
	static uint32_t x927 = 17U;
	int16_t x928 = INT16_MAX;

    t151 = ((x925+(x926*x927))>x928);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x933 = -1LL;
	static int8_t x934 = INT8_MIN;
	uint8_t x935 = 24U;
	int16_t x936 = 14977;
	int32_t t152 = 3227;

    t152 = ((x933+(x934*x935))>x936);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x937 = UINT64_MAX;
	volatile uint32_t x938 = 519489U;
	int64_t x939 = -1LL;
	int64_t x940 = INT64_MIN;
	int32_t t153 = -24085;

    t153 = ((x937+(x938*x939))>x940);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x941 = UINT16_MAX;
	uint64_t x943 = 2207816LLU;
	int32_t x944 = 79;
	static int32_t t154 = 5777178;

    t154 = ((x941+(x942*x943))>x944);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x957 = 15009190U;
	uint16_t x958 = 6685U;
	static int64_t x960 = INT64_MIN;
	int32_t t155 = -346;

    t155 = ((x957+(x958*x959))>x960);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x965 = 321523411290LLU;
	uint32_t x966 = 2211687U;
	static int32_t x967 = -1;
	int32_t t156 = -6;

    t156 = ((x965+(x966*x967))>x968);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x969 = 44099673;
	int16_t x970 = 25;
	uint64_t x971 = 2423058670LLU;
	int32_t x972 = -1;
	int32_t t157 = 259736;

    t157 = ((x969+(x970*x971))>x972);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x973 = -1;
	int8_t x974 = -1;
	int32_t x975 = INT32_MAX;

    t158 = ((x973+(x974*x975))>x976);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x977 = 28U;
	static volatile int16_t x978 = -6;
	volatile uint32_t x980 = 32603631U;
	int32_t t159 = -223439219;

    t159 = ((x977+(x978*x979))>x980);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x983 = 7;
	static int32_t x984 = -1;
	int32_t t160 = 179505594;

    t160 = ((x981+(x982*x983))>x984);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x985 = UINT8_MAX;
	uint64_t x987 = 16890325LLU;
	volatile int64_t x988 = INT64_MAX;
	int32_t t161 = 334480355;

    t161 = ((x985+(x986*x987))>x988);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x989 = -1;
	static volatile int32_t x990 = INT32_MAX;
	volatile uint8_t x991 = 1U;
	int32_t t162 = -567;

    t162 = ((x989+(x990*x991))>x992);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x997 = -12747621LL;
	volatile uint16_t x998 = 76U;
	static volatile uint64_t x999 = UINT64_MAX;
	uint64_t x1000 = 9566923668096LLU;
	static int32_t t163 = -189803802;

    t163 = ((x997+(x998*x999))>x1000);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1001 = 8U;
	static int8_t x1002 = INT8_MIN;
	int16_t x1003 = -1;
	static volatile int32_t x1004 = INT32_MAX;
	volatile int32_t t164 = -52085;

    t164 = ((x1001+(x1002*x1003))>x1004);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x1009 = -33;
	static uint8_t x1010 = 45U;
	static int64_t x1011 = -1LL;
	static int32_t t165 = 31864419;

    t165 = ((x1009+(x1010*x1011))>x1012);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1013 = INT8_MIN;
	int16_t x1014 = INT16_MIN;
	int16_t x1016 = -1;
	static int32_t t166 = -868155;

    t166 = ((x1013+(x1014*x1015))>x1016);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1021 = -12;
	volatile uint8_t x1022 = 1U;
	int64_t x1024 = INT64_MIN;

    t167 = ((x1021+(x1022*x1023))>x1024);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1025 = INT64_MAX;
	volatile int8_t x1026 = 0;
	volatile int8_t x1027 = INT8_MAX;
	int32_t x1028 = -1;
	volatile int32_t t168 = -829945;

    t168 = ((x1025+(x1026*x1027))>x1028);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1030 = -1;
	uint64_t x1031 = 5319977996453LLU;
	static volatile int8_t x1032 = -9;

    t169 = ((x1029+(x1030*x1031))>x1032);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x1033 = -1;
	uint64_t x1035 = 25812523324738LLU;
	int8_t x1036 = INT8_MIN;
	volatile int32_t t170 = 930980067;

    t170 = ((x1033+(x1034*x1035))>x1036);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1037 = 15;
	volatile uint16_t x1038 = UINT16_MAX;
	static int64_t x1040 = INT64_MAX;
	int32_t t171 = -555052362;

    t171 = ((x1037+(x1038*x1039))>x1040);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1050 = 1523998813LL;
	uint8_t x1051 = 5U;
	volatile int32_t t172 = 20432;

    t172 = ((x1049+(x1050*x1051))>x1052);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1054 = INT8_MIN;
	volatile uint32_t x1055 = 19734U;
	volatile int32_t t173 = -25;

    t173 = ((x1053+(x1054*x1055))>x1056);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1057 = -1LL;
	volatile int8_t x1059 = INT8_MAX;
	volatile int32_t t174 = -1;

    t174 = ((x1057+(x1058*x1059))>x1060);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1065 = 1U;
	int32_t x1066 = INT32_MAX;
	uint32_t x1067 = 21898U;
	int64_t x1068 = INT64_MAX;
	int32_t t175 = -1;

    t175 = ((x1065+(x1066*x1067))>x1068);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1069 = INT32_MIN;
	int64_t x1071 = -1LL;
	static int16_t x1072 = INT16_MIN;
	volatile int32_t t176 = -2;

    t176 = ((x1069+(x1070*x1071))>x1072);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1085 = -1;
	volatile uint8_t x1087 = 2U;
	volatile int16_t x1088 = 14;
	int32_t t177 = -87336507;

    t177 = ((x1085+(x1086*x1087))>x1088);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1089 = -1;
	int8_t x1091 = -1;
	volatile uint32_t x1092 = 132U;
	static int32_t t178 = 254608417;

    t178 = ((x1089+(x1090*x1091))>x1092);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1097 = 7905U;
	volatile int16_t x1098 = 375;
	uint16_t x1099 = UINT16_MAX;
	static uint16_t x1100 = 146U;
	static int32_t t179 = 1967;

    t179 = ((x1097+(x1098*x1099))>x1100);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1113 = -1;
	uint8_t x1114 = 1U;
	static int16_t x1115 = INT16_MIN;
	int32_t x1116 = INT32_MAX;
	static int32_t t180 = -11981;

    t180 = ((x1113+(x1114*x1115))>x1116);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1117 = INT16_MAX;
	int32_t x1118 = INT32_MIN;
	volatile int64_t x1119 = 37512LL;
	static uint32_t x1120 = UINT32_MAX;
	volatile int32_t t181 = -296;

    t181 = ((x1117+(x1118*x1119))>x1120);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1121 = INT8_MIN;
	volatile int8_t x1122 = -40;
	static int16_t x1123 = -1;
	uint32_t x1124 = 993114U;
	static volatile int32_t t182 = 10;

    t182 = ((x1121+(x1122*x1123))>x1124);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1125 = 4184080008822LLU;
	int16_t x1126 = 1;
	static int32_t t183 = 44;

    t183 = ((x1125+(x1126*x1127))>x1128);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1138 = -1;
	int32_t x1139 = INT32_MAX;
	volatile int32_t x1140 = INT32_MIN;
	volatile int32_t t184 = -2;

    t184 = ((x1137+(x1138*x1139))>x1140);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1145 = -1;
	static int64_t x1146 = 6929721914406957LL;
	uint32_t x1147 = 96U;
	static volatile int8_t x1148 = INT8_MIN;

    t185 = ((x1145+(x1146*x1147))>x1148);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1150 = 9161;
	int16_t x1151 = INT16_MIN;
	uint32_t x1152 = 96U;
	static int32_t t186 = 38;

    t186 = ((x1149+(x1150*x1151))>x1152);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1153 = -855861403238LL;
	int32_t x1154 = INT32_MIN;
	static uint64_t x1155 = UINT64_MAX;
	int8_t x1156 = 24;
	volatile int32_t t187 = 91689;

    t187 = ((x1153+(x1154*x1155))>x1156);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1157 = UINT16_MAX;
	static volatile uint64_t x1158 = 84228481775119LLU;
	int64_t x1159 = INT64_MIN;
	int16_t x1160 = 58;
	int32_t t188 = 980725867;

    t188 = ((x1157+(x1158*x1159))>x1160);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1161 = 22U;
	volatile int64_t x1162 = INT64_MIN;
	uint64_t x1163 = 393912297LLU;
	volatile int16_t x1164 = INT16_MAX;
	static int32_t t189 = 29861917;

    t189 = ((x1161+(x1162*x1163))>x1164);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1169 = 113;
	uint16_t x1170 = 15U;
	static int32_t x1172 = 82;
	volatile int32_t t190 = 5;

    t190 = ((x1169+(x1170*x1171))>x1172);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1173 = -22;
	int8_t x1174 = -41;
	volatile uint8_t x1175 = 23U;
	volatile uint16_t x1176 = 7064U;
	volatile int32_t t191 = 25525;

    t191 = ((x1173+(x1174*x1175))>x1176);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x1181 = UINT32_MAX;
	static volatile uint64_t x1182 = 22084814LLU;
	static int32_t x1183 = INT32_MIN;
	volatile int8_t x1184 = INT8_MIN;
	static int32_t t192 = -77993;

    t192 = ((x1181+(x1182*x1183))>x1184);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1185 = UINT16_MAX;
	uint64_t x1186 = 4047803273LLU;
	static uint16_t x1187 = 1641U;
	volatile int32_t x1188 = -388523;
	int32_t t193 = -19;

    t193 = ((x1185+(x1186*x1187))>x1188);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1189 = INT64_MIN;
	static int64_t x1191 = -1LL;
	int64_t x1192 = -27653LL;
	volatile int32_t t194 = 739342983;

    t194 = ((x1189+(x1190*x1191))>x1192);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1206 = 324930487U;
	int16_t x1207 = INT16_MAX;
	int32_t x1208 = -193440489;

    t195 = ((x1205+(x1206*x1207))>x1208);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1210 = 84108217798873903LLU;
	int32_t x1211 = INT32_MIN;
	volatile uint32_t x1212 = 221170868U;
	volatile int32_t t196 = -12585;

    t196 = ((x1209+(x1210*x1211))>x1212);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1217 = INT32_MIN;
	int8_t x1219 = -21;
	static volatile int64_t x1220 = -1LL;
	int32_t t197 = 33561;

    t197 = ((x1217+(x1218*x1219))>x1220);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1221 = UINT64_MAX;
	int16_t x1222 = -3027;
	volatile int8_t x1223 = INT8_MIN;
	int32_t t198 = 1;

    t198 = ((x1221+(x1222*x1223))>x1224);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1237 = 1;
	uint64_t x1240 = 16175818LLU;
	int32_t t199 = 41;

    t199 = ((x1237+(x1238*x1239))>x1240);

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

