
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

static int32_t x6 = INT32_MIN;
uint64_t x9 = UINT64_MAX;
int32_t x32 = INT32_MIN;
uint8_t x50 = 2U;
static int16_t x57 = 10893;
int16_t x60 = -103;
uint8_t x61 = 60U;
static int32_t x63 = INT32_MAX;
uint8_t x71 = 24U;
volatile int32_t t8 = -52824;
int16_t x74 = -1;
volatile int32_t t9 = 0;
volatile int32_t x87 = -67;
uint8_t x93 = UINT8_MAX;
int8_t x95 = INT8_MIN;
static volatile int32_t t12 = -48;
static int8_t x97 = 27;
volatile int16_t x100 = -215;
uint64_t x113 = UINT64_MAX;
volatile int32_t x114 = -2;
static int64_t x115 = INT64_MIN;
static volatile int32_t t15 = 67840599;
int16_t x119 = INT16_MAX;
int32_t x120 = INT32_MIN;
int32_t t16 = 7789;
int32_t t17 = -1;
uint32_t x141 = 596429176U;
int32_t t19 = 14270591;
static uint16_t x146 = 2139U;
int32_t t21 = 19116470;
uint8_t x154 = 0U;
uint32_t x169 = 10988573U;
static int32_t t24 = 3294;
int32_t t25 = -171;
int16_t x199 = -1;
static int32_t x202 = -1;
uint16_t x203 = UINT16_MAX;
uint32_t x205 = 2518U;
static int64_t x206 = INT64_MIN;
int8_t x208 = -20;
uint32_t x211 = 6219U;
int32_t t30 = 69878;
uint64_t x219 = UINT64_MAX;
uint8_t x220 = 3U;
volatile int64_t x223 = INT64_MAX;
static volatile uint64_t x237 = 815891680LLU;
volatile uint32_t x239 = 457U;
uint32_t x242 = UINT32_MAX;
static int16_t x259 = 30;
volatile uint32_t x265 = 53U;
uint32_t x277 = 2945494U;
int8_t x286 = INT8_MIN;
volatile int32_t x287 = 77972;
int32_t x295 = -1;
volatile uint32_t x296 = UINT32_MAX;
uint32_t x300 = 365745548U;
static volatile int32_t x301 = INT32_MAX;
static int32_t x319 = -1;
static volatile int32_t t49 = -75450638;
static int32_t t50 = -1862809;
volatile int32_t x338 = -1;
static int8_t x344 = INT8_MAX;
volatile int8_t x359 = 0;
uint64_t x365 = 39220530LLU;
volatile int64_t x379 = INT64_MIN;
int16_t x386 = 2301;
volatile int16_t x395 = 0;
uint16_t x397 = 3U;
uint8_t x405 = 0U;
uint64_t x408 = UINT64_MAX;
static uint8_t x413 = UINT8_MAX;
volatile int32_t x414 = -399583172;
int64_t x417 = INT64_MAX;
static uint32_t x437 = UINT32_MAX;
int32_t x440 = INT32_MAX;
volatile int32_t t67 = -216620500;
static int8_t x461 = 25;
int32_t x477 = INT32_MAX;
volatile uint8_t x478 = 90U;
int32_t x497 = INT32_MAX;
volatile uint64_t x505 = 15465735312LLU;
int32_t x506 = INT32_MIN;
int8_t x514 = INT8_MIN;
volatile int32_t t75 = 7312;
static int16_t x521 = 263;
volatile uint32_t x522 = 21U;
static int32_t x526 = INT32_MIN;
static int8_t x539 = INT8_MAX;
uint8_t x540 = UINT8_MAX;
int16_t x547 = INT16_MIN;
volatile int32_t t80 = 2967;
uint64_t x565 = 400473348357LLU;
int16_t x568 = -1;
volatile int32_t t82 = -5699674;
int32_t t83 = -166;
uint8_t x585 = 116U;
int32_t t86 = -2;
volatile int32_t t88 = -1850;
uint8_t x621 = 17U;
int8_t x622 = INT8_MIN;
int8_t x623 = INT8_MIN;
static int16_t x624 = -112;
uint64_t x625 = 64703339919LLU;
uint8_t x628 = 3U;
volatile int32_t t91 = 1;
int8_t x666 = 15;
volatile int8_t x669 = 30;
static int8_t x671 = -61;
int32_t t94 = 847074862;
uint8_t x676 = 1U;
uint64_t x712 = UINT64_MAX;
int64_t x716 = -1LL;
static int8_t x741 = INT8_MAX;
uint8_t x743 = 3U;
volatile int32_t t102 = 414397736;
int16_t x761 = INT16_MAX;
int32_t t105 = -124616;
static volatile int8_t x779 = -5;
uint16_t x782 = 185U;
uint64_t x790 = 17460127887LLU;
uint8_t x792 = 1U;
volatile int8_t x805 = 3;
int8_t x806 = 22;
int32_t t109 = -6;
uint32_t x816 = 1U;
int16_t x820 = -1;
static int32_t t112 = 23656945;
static uint8_t x827 = 42U;
int64_t x830 = 4551560419044LL;
volatile int32_t x831 = -16492829;
int32_t t114 = -43857;
uint16_t x833 = UINT16_MAX;
int16_t x834 = -1;
volatile int8_t x836 = -1;
static int16_t x876 = 0;
static int32_t t117 = -17797009;
static uint64_t x877 = UINT64_MAX;
uint8_t x878 = UINT8_MAX;
int32_t x879 = INT32_MAX;
int16_t x885 = INT16_MAX;
int32_t x899 = 1216038;
static int32_t t122 = 369821;
uint16_t x919 = 1230U;
int8_t x923 = INT8_MIN;
static volatile int32_t t125 = -8160;
uint8_t x953 = 0U;
static int32_t x954 = -1;
static int16_t x957 = INT16_MAX;
uint16_t x964 = 0U;
static uint8_t x965 = 8U;
int8_t x968 = INT8_MIN;
volatile int32_t t134 = -2513;
volatile uint8_t x996 = 3U;
volatile uint8_t x999 = 82U;
uint64_t x1001 = UINT64_MAX;
int64_t x1004 = 28196420268663LL;
int16_t x1014 = INT16_MIN;
int8_t x1031 = INT8_MIN;
volatile int32_t t142 = 162209;
uint32_t x1034 = UINT32_MAX;
volatile int8_t x1038 = 18;
volatile int32_t t144 = -2;
int32_t t145 = -248540601;
int32_t x1050 = INT32_MIN;
int16_t x1052 = INT16_MIN;
static int16_t x1068 = -1;
int64_t x1070 = -5045545530014LL;
uint64_t x1073 = 40LLU;
uint64_t x1093 = 90434LLU;
int64_t x1094 = INT64_MIN;
static int8_t x1097 = 1;
uint64_t x1101 = UINT64_MAX;
int16_t x1106 = INT16_MIN;
int8_t x1108 = INT8_MIN;
static volatile int32_t t158 = 833695;
volatile uint32_t x1157 = UINT32_MAX;
int8_t x1158 = 3;
static int32_t x1160 = -1;
volatile int32_t x1162 = 19372386;
volatile int8_t x1182 = INT8_MIN;
uint64_t x1185 = UINT64_MAX;
static volatile int32_t t163 = -16994;
uint32_t x1189 = UINT32_MAX;
int16_t x1190 = INT16_MIN;
int16_t x1191 = INT16_MAX;
volatile int32_t x1194 = 91050404;
uint64_t x1195 = 248350104376084LLU;
static int8_t x1196 = INT8_MIN;
uint64_t x1205 = UINT64_MAX;
static int16_t x1207 = INT16_MIN;
volatile int32_t t170 = -1546;
int8_t x1233 = 1;
int8_t x1239 = 1;
int8_t x1252 = -8;
int64_t x1284 = INT64_MIN;
volatile int32_t t180 = 5322;
volatile int64_t x1304 = INT64_MAX;
int32_t t181 = -103339;
int32_t x1308 = -12545089;
int8_t x1312 = INT8_MIN;
uint8_t x1313 = 14U;
volatile uint32_t x1317 = 21770372U;
uint8_t x1324 = UINT8_MAX;
uint16_t x1352 = 84U;
uint32_t x1357 = 210897U;
static int8_t x1415 = INT8_MAX;
static volatile uint16_t x1443 = UINT16_MAX;
volatile int32_t t199 = -136;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile uint32_t x4 = 3642306U;
	volatile int32_t t0 = -43;

    t0 = ((x1<<(x2<=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 41U;
	static int32_t x7 = 321859479;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -9121;

    t1 = ((x5<<(x6<=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -6;
	static volatile int16_t x11 = INT16_MAX;
	int16_t x12 = 1;
	int32_t t2 = 5446611;

    t2 = ((x9<<(x10<=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x29 = 5815U;
	uint8_t x30 = 69U;
	static int8_t x31 = INT8_MIN;
	int32_t t3 = -1;

    t3 = ((x29<<(x30<=x31))!=x32);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x49 = INT16_MAX;
	uint64_t x51 = 8734LLU;
	volatile int64_t x52 = INT64_MIN;
	int32_t t4 = -124590707;

    t4 = ((x49<<(x50<=x51))!=x52);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x53 = INT64_MAX;
	uint8_t x54 = 75U;
	static int8_t x55 = INT8_MIN;
	int16_t x56 = -5;
	int32_t t5 = -11;

    t5 = ((x53<<(x54<=x55))!=x56);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x58 = -100;
	uint64_t x59 = UINT64_MAX;
	static volatile int32_t t6 = 508739536;

    t6 = ((x57<<(x58<=x59))!=x60);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x62 = UINT32_MAX;
	static int32_t x64 = 124;
	volatile int32_t t7 = -879213110;

    t7 = ((x61<<(x62<=x63))!=x64);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x69 = 135970010505030LLU;
	uint64_t x70 = UINT64_MAX;
	int8_t x72 = -8;

    t8 = ((x69<<(x70<=x71))!=x72);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x73 = INT32_MAX;
	volatile uint64_t x75 = 1148672286LLU;
	uint8_t x76 = UINT8_MAX;

    t9 = ((x73<<(x74<=x75))!=x76);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x85 = 0U;
	int16_t x86 = INT16_MIN;
	volatile int64_t x88 = 35410964750029105LL;
	volatile int32_t t10 = -54;

    t10 = ((x85<<(x86<=x87))!=x88);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	static int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MAX;
	volatile int64_t x92 = INT64_MIN;
	volatile int32_t t11 = -29;

    t11 = ((x89<<(x90<=x91))!=x92);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x94 = INT16_MIN;
	volatile uint32_t x96 = 1001433U;

    t12 = ((x93<<(x94<=x95))!=x96);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x98 = -3;
	int32_t x99 = 7;
	int32_t t13 = 5604148;

    t13 = ((x97<<(x98<=x99))!=x100);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x101 = UINT64_MAX;
	volatile int32_t x102 = 197;
	uint16_t x103 = UINT16_MAX;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t14 = 206317;

    t14 = ((x101<<(x102<=x103))!=x104);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x116 = INT64_MAX;

    t15 = ((x113<<(x114<=x115))!=x116);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x117 = INT16_MAX;
	static uint32_t x118 = 109U;

    t16 = ((x117<<(x118<=x119))!=x120);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x121 = 99360965U;
	static int16_t x122 = 6040;
	static volatile int16_t x123 = INT16_MIN;
	int32_t x124 = -1;

    t17 = ((x121<<(x122<=x123))!=x124);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x125 = UINT64_MAX;
	uint32_t x126 = 866176273U;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = 0U;
	volatile int32_t t18 = 7;

    t18 = ((x125<<(x126<=x127))!=x128);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;

    t19 = ((x141<<(x142<=x143))!=x144);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x145 = 3584749LLU;
	int32_t x147 = 1;
	int8_t x148 = INT8_MAX;
	int32_t t20 = 15973076;

    t20 = ((x145<<(x146<=x147))!=x148);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x149 = INT16_MAX;
	int64_t x150 = -848834LL;
	static int16_t x151 = -1;
	uint8_t x152 = UINT8_MAX;

    t21 = ((x149<<(x150<=x151))!=x152);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x153 = 7910659U;
	volatile uint32_t x155 = 27877U;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t22 = -3527;

    t22 = ((x153<<(x154<=x155))!=x156);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t23 = -145;

    t23 = ((x169<<(x170<=x171))!=x172);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MAX;
	volatile uint32_t x175 = 819196349U;
	volatile int8_t x176 = INT8_MIN;

    t24 = ((x173<<(x174<=x175))!=x176);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x177 = 21;
	int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	static int16_t x180 = 1;

    t25 = ((x177<<(x178<=x179))!=x180);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x193 = 2425315663697022790LL;
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = INT32_MIN;
	uint16_t x196 = 629U;
	volatile int32_t t26 = 678452;

    t26 = ((x193<<(x194<=x195))!=x196);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x197 = 3130957247919994065LLU;
	int64_t x198 = 18130LL;
	int64_t x200 = INT64_MAX;
	static int32_t t27 = 293049;

    t27 = ((x197<<(x198<=x199))!=x200);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x201 = 415LL;
	int32_t x204 = 4104;
	volatile int32_t t28 = -101088;

    t28 = ((x201<<(x202<=x203))!=x204);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x207 = INT8_MAX;
	volatile int32_t t29 = -1236;

    t29 = ((x205<<(x206<=x207))!=x208);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x209 = INT64_MAX;
	uint64_t x210 = UINT64_MAX;
	int8_t x212 = INT8_MIN;

    t30 = ((x209<<(x210<=x211))!=x212);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x217 = 1LL;
	int32_t x218 = INT32_MAX;
	int32_t t31 = -29563328;

    t31 = ((x217<<(x218<=x219))!=x220);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = 479;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t32 = -933026;

    t32 = ((x221<<(x222<=x223))!=x224);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 120097769U;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = 14455482;
	volatile int32_t t33 = -974;

    t33 = ((x225<<(x226<=x227))!=x228);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x238 = INT16_MIN;
	int64_t x240 = -43148343363415164LL;
	static int32_t t34 = -90987423;

    t34 = ((x237<<(x238<=x239))!=x240);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	static uint32_t x243 = UINT32_MAX;
	static volatile int32_t x244 = -1;
	volatile int32_t t35 = -1636180;

    t35 = ((x241<<(x242<=x243))!=x244);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x245 = 23909U;
	int8_t x246 = INT8_MAX;
	static uint32_t x247 = 219U;
	int8_t x248 = 5;
	volatile int32_t t36 = -1;

    t36 = ((x245<<(x246<=x247))!=x248);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	uint32_t x254 = 1U;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = 158;
	volatile int32_t t37 = -4055374;

    t37 = ((x253<<(x254<=x255))!=x256);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x257 = 168LL;
	uint32_t x258 = 9524984U;
	int8_t x260 = INT8_MAX;
	volatile int32_t t38 = -1;

    t38 = ((x257<<(x258<=x259))!=x260);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x266 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MAX;
	volatile int32_t t39 = 6314705;

    t39 = ((x265<<(x266<=x267))!=x268);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x269 = 11264493U;
	static int64_t x270 = 13465503045011397LL;
	static volatile int32_t x271 = INT32_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t40 = -2867;

    t40 = ((x269<<(x270<=x271))!=x272);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x278 = -1;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t41 = 197850751;

    t41 = ((x277<<(x278<=x279))!=x280);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x285 = 78U;
	static volatile uint32_t x288 = 63U;
	int32_t t42 = -191;

    t42 = ((x285<<(x286<=x287))!=x288);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x289 = 0;
	uint16_t x290 = UINT16_MAX;
	uint8_t x291 = 44U;
	static uint32_t x292 = 134127717U;
	static int32_t t43 = 220121;

    t43 = ((x289<<(x290<=x291))!=x292);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x293 = INT32_MAX;
	static uint8_t x294 = 0U;
	static volatile int32_t t44 = -2582792;

    t44 = ((x293<<(x294<=x295))!=x296);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x297 = 3U;
	static uint8_t x298 = 8U;
	uint32_t x299 = UINT32_MAX;
	int32_t t45 = -424;

    t45 = ((x297<<(x298<=x299))!=x300);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x302 = 3U;
	static int8_t x303 = INT8_MIN;
	uint16_t x304 = 2512U;
	int32_t t46 = 1;

    t46 = ((x301<<(x302<=x303))!=x304);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	uint8_t x306 = UINT8_MAX;
	static int16_t x307 = INT16_MAX;
	int16_t x308 = -1;
	int32_t t47 = -347601162;

    t47 = ((x305<<(x306<=x307))!=x308);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x309 = 2329023982231393627LLU;
	uint64_t x310 = 114225652366LLU;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	volatile int32_t t48 = 44;

    t48 = ((x309<<(x310<=x311))!=x312);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	static uint64_t x318 = 9489LLU;
	int32_t x320 = -1;

    t49 = ((x317<<(x318<=x319))!=x320);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x325 = 669699170;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = 0U;
	int8_t x328 = 1;

    t50 = ((x325<<(x326<=x327))!=x328);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x333 = 5U;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = -23;
	int64_t x336 = INT64_MAX;
	static int32_t t51 = 91;

    t51 = ((x333<<(x334<=x335))!=x336);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x337 = 142681096914486052LLU;
	int64_t x339 = 103977228092344LL;
	int64_t x340 = INT64_MIN;
	volatile int32_t t52 = 34583;

    t52 = ((x337<<(x338<=x339))!=x340);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x341 = 141U;
	int16_t x342 = 0;
	volatile uint64_t x343 = UINT64_MAX;
	volatile int32_t t53 = 63715931;

    t53 = ((x341<<(x342<=x343))!=x344);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	int32_t t54 = -1;

    t54 = ((x357<<(x358<=x359))!=x360);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x361 = 79U;
	int8_t x362 = -2;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	volatile int32_t t55 = -138278145;

    t55 = ((x361<<(x362<=x363))!=x364);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x366 = UINT8_MAX;
	int64_t x367 = -21717878548LL;
	static volatile int16_t x368 = 12;
	int32_t t56 = -1;

    t56 = ((x365<<(x366<=x367))!=x368);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x373 = 5312496144252212LLU;
	int16_t x374 = 1693;
	int16_t x375 = 1;
	uint32_t x376 = 67911U;
	int32_t t57 = -12861;

    t57 = ((x373<<(x374<=x375))!=x376);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x377 = UINT32_MAX;
	static int64_t x378 = INT64_MAX;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t58 = -22041;

    t58 = ((x377<<(x378<=x379))!=x380);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x385 = UINT32_MAX;
	int64_t x387 = INT64_MIN;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t59 = 7979660;

    t59 = ((x385<<(x386<=x387))!=x388);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x393 = 96U;
	volatile int16_t x394 = INT16_MAX;
	static int16_t x396 = 0;
	volatile int32_t t60 = -3;

    t60 = ((x393<<(x394<=x395))!=x396);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x398 = -1;
	int16_t x399 = -1;
	int16_t x400 = 3562;
	volatile int32_t t61 = -633557;

    t61 = ((x397<<(x398<=x399))!=x400);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x406 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	static int32_t t62 = 7063;

    t62 = ((x405<<(x406<=x407))!=x408);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x415 = INT16_MAX;
	uint32_t x416 = 1551153542U;
	volatile int32_t t63 = -37;

    t63 = ((x413<<(x414<=x415))!=x416);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x418 = 193778U;
	int64_t x419 = INT64_MIN;
	static uint32_t x420 = 7039183U;
	volatile int32_t t64 = -58;

    t64 = ((x417<<(x418<=x419))!=x420);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x425 = 894889U;
	volatile int16_t x426 = -10813;
	uint8_t x427 = 26U;
	static int8_t x428 = INT8_MIN;
	static int32_t t65 = -504543834;

    t65 = ((x425<<(x426<=x427))!=x428);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x438 = 3990U;
	uint64_t x439 = UINT64_MAX;
	int32_t t66 = -55;

    t66 = ((x437<<(x438<=x439))!=x440);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x445 = UINT32_MAX;
	static volatile uint32_t x446 = UINT32_MAX;
	int32_t x447 = 2801061;
	static uint64_t x448 = 2583LLU;

    t67 = ((x445<<(x446<=x447))!=x448);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x453 = UINT64_MAX;
	int8_t x454 = INT8_MIN;
	uint16_t x455 = 29U;
	int16_t x456 = INT16_MAX;
	int32_t t68 = -161;

    t68 = ((x453<<(x454<=x455))!=x456);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x462 = INT16_MIN;
	int32_t x463 = 1;
	volatile int16_t x464 = -737;
	int32_t t69 = -9561699;

    t69 = ((x461<<(x462<=x463))!=x464);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x479 = -1;
	volatile int64_t x480 = -1LL;
	static int32_t t70 = -42482;

    t70 = ((x477<<(x478<=x479))!=x480);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x493 = 0U;
	static uint8_t x494 = UINT8_MAX;
	int16_t x495 = 0;
	int32_t x496 = -12680;
	static int32_t t71 = 28756022;

    t71 = ((x493<<(x494<=x495))!=x496);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x498 = 1;
	static int64_t x499 = -1LL;
	static volatile int8_t x500 = -27;
	static int32_t t72 = 480498370;

    t72 = ((x497<<(x498<=x499))!=x500);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x507 = UINT32_MAX;
	int32_t x508 = -742;
	int32_t t73 = -3;

    t73 = ((x505<<(x506<=x507))!=x508);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x509 = 0U;
	static uint64_t x510 = 30876259LLU;
	volatile int32_t x511 = -286910473;
	static int32_t x512 = -4317;
	static volatile int32_t t74 = 52;

    t74 = ((x509<<(x510<=x511))!=x512);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x513 = 4095U;
	volatile uint8_t x515 = 0U;
	uint32_t x516 = 119877U;

    t75 = ((x513<<(x514<=x515))!=x516);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x523 = 0U;
	volatile uint64_t x524 = UINT64_MAX;
	int32_t t76 = -31470913;

    t76 = ((x521<<(x522<=x523))!=x524);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x525 = 710585U;
	uint32_t x527 = 6840751U;
	int32_t x528 = -1;
	int32_t t77 = 183;

    t77 = ((x525<<(x526<=x527))!=x528);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x529 = 5U;
	int32_t x530 = INT32_MIN;
	uint16_t x531 = 1U;
	static volatile int32_t x532 = 43681;
	volatile int32_t t78 = -14;

    t78 = ((x529<<(x530<=x531))!=x532);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x537 = UINT64_MAX;
	int8_t x538 = INT8_MAX;
	int32_t t79 = -54;

    t79 = ((x537<<(x538<=x539))!=x540);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x545 = 329571188LL;
	uint16_t x546 = 4U;
	volatile int16_t x548 = INT16_MIN;

    t80 = ((x545<<(x546<=x547))!=x548);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x561 = 2983U;
	int16_t x562 = -1;
	uint64_t x563 = 1848227003LLU;
	uint16_t x564 = 41U;
	volatile int32_t t81 = -1642;

    t81 = ((x561<<(x562<=x563))!=x564);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x566 = INT16_MIN;
	volatile uint8_t x567 = 38U;

    t82 = ((x565<<(x566<=x567))!=x568);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = INT8_MIN;
	int32_t x571 = INT32_MIN;
	static uint32_t x572 = 9249597U;

    t83 = ((x569<<(x570<=x571))!=x572);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x573 = 20;
	int64_t x574 = INT64_MIN;
	uint32_t x575 = 0U;
	int16_t x576 = INT16_MIN;
	int32_t t84 = 88425464;

    t84 = ((x573<<(x574<=x575))!=x576);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x577 = 15564779U;
	static volatile uint8_t x578 = 120U;
	int8_t x579 = -56;
	static uint8_t x580 = 50U;
	static int32_t t85 = -843977;

    t85 = ((x577<<(x578<=x579))!=x580);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x586 = 18;
	volatile int16_t x587 = INT16_MAX;
	int8_t x588 = INT8_MIN;

    t86 = ((x585<<(x586<=x587))!=x588);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x589 = 51U;
	int32_t x590 = 203;
	volatile uint64_t x591 = 1485191LLU;
	volatile uint16_t x592 = 40U;
	volatile int32_t t87 = 59367291;

    t87 = ((x589<<(x590<=x591))!=x592);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile uint64_t x602 = UINT64_MAX;
	uint16_t x603 = 1U;
	static int32_t x604 = INT32_MAX;

    t88 = ((x601<<(x602<=x603))!=x604);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t t89 = -5049344;

    t89 = ((x621<<(x622<=x623))!=x624);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x626 = 4U;
	uint8_t x627 = 10U;
	int32_t t90 = -292;

    t90 = ((x625<<(x626<=x627))!=x628);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x637 = 39824211LLU;
	uint64_t x638 = UINT64_MAX;
	volatile int64_t x639 = 3447832816LL;
	uint64_t x640 = UINT64_MAX;

    t91 = ((x637<<(x638<=x639))!=x640);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x641 = UINT64_MAX;
	static int32_t x642 = 47338;
	uint64_t x643 = 707729LLU;
	int16_t x644 = -1;
	int32_t t92 = 1377119;

    t92 = ((x641<<(x642<=x643))!=x644);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x665 = 2033204203068252863LLU;
	int64_t x667 = 52239568908575LL;
	int32_t x668 = -79821198;
	volatile int32_t t93 = 15;

    t93 = ((x665<<(x666<=x667))!=x668);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x670 = -2;
	uint16_t x672 = 1U;

    t94 = ((x669<<(x670<=x671))!=x672);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x673 = UINT16_MAX;
	volatile int8_t x674 = INT8_MIN;
	int32_t x675 = 12200;
	int32_t t95 = 88;

    t95 = ((x673<<(x674<=x675))!=x676);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x681 = INT64_MAX;
	volatile uint32_t x682 = 19651309U;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = 0U;
	volatile int32_t t96 = -172;

    t96 = ((x681<<(x682<=x683))!=x684);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x705 = 50718337LLU;
	int64_t x706 = INT64_MIN;
	static volatile uint32_t x707 = 7668U;
	int16_t x708 = INT16_MIN;
	int32_t t97 = 831434;

    t97 = ((x705<<(x706<=x707))!=x708);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x709 = INT16_MAX;
	uint8_t x710 = 13U;
	int16_t x711 = 0;
	int32_t t98 = 153;

    t98 = ((x709<<(x710<=x711))!=x712);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x713 = 127;
	int64_t x714 = INT64_MIN;
	static int32_t x715 = INT32_MAX;
	static int32_t t99 = 40;

    t99 = ((x713<<(x714<=x715))!=x716);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x729 = 1U;
	int8_t x730 = -1;
	int16_t x731 = 9974;
	uint8_t x732 = 0U;
	volatile int32_t t100 = -2271387;

    t100 = ((x729<<(x730<=x731))!=x732);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x742 = -5136LL;
	uint8_t x744 = 11U;
	volatile int32_t t101 = 15575;

    t101 = ((x741<<(x742<=x743))!=x744);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x749 = INT16_MAX;
	static uint32_t x750 = 738U;
	uint16_t x751 = UINT16_MAX;
	uint8_t x752 = 0U;

    t102 = ((x749<<(x750<=x751))!=x752);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x757 = 418881226LL;
	volatile int16_t x758 = -1;
	uint8_t x759 = UINT8_MAX;
	uint32_t x760 = 1052U;
	int32_t t103 = 8318127;

    t103 = ((x757<<(x758<=x759))!=x760);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x762 = -1;
	uint32_t x763 = UINT32_MAX;
	int8_t x764 = 1;
	volatile int32_t t104 = 2779269;

    t104 = ((x761<<(x762<=x763))!=x764);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x773 = UINT16_MAX;
	static int8_t x774 = INT8_MAX;
	uint64_t x775 = 14LLU;
	int64_t x776 = INT64_MIN;

    t105 = ((x773<<(x774<=x775))!=x776);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x777 = 10;
	static int8_t x778 = -1;
	int32_t x780 = 387;
	volatile int32_t t106 = 7;

    t106 = ((x777<<(x778<=x779))!=x780);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x781 = 13;
	int32_t x783 = INT32_MIN;
	int32_t x784 = -4978170;
	int32_t t107 = -19128;

    t107 = ((x781<<(x782<=x783))!=x784);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x789 = 42U;
	int8_t x791 = 1;
	volatile int32_t t108 = 374;

    t108 = ((x789<<(x790<=x791))!=x792);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x807 = -1;
	static int16_t x808 = 477;

    t109 = ((x805<<(x806<=x807))!=x808);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x813 = 1758032U;
	static int16_t x814 = INT16_MIN;
	int64_t x815 = INT64_MAX;
	int32_t t110 = 53296444;

    t110 = ((x813<<(x814<=x815))!=x816);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x817 = 28LLU;
	static int16_t x818 = 8926;
	static uint16_t x819 = 6U;
	static int32_t t111 = -7716;

    t111 = ((x817<<(x818<=x819))!=x820);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x821 = 667U;
	int64_t x822 = INT64_MIN;
	static int8_t x823 = 1;
	int32_t x824 = INT32_MAX;

    t112 = ((x821<<(x822<=x823))!=x824);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x825 = 88090LLU;
	uint64_t x826 = 29501134111LLU;
	int32_t x828 = 96;
	volatile int32_t t113 = 30;

    t113 = ((x825<<(x826<=x827))!=x828);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x829 = INT32_MAX;
	uint8_t x832 = 11U;

    t114 = ((x829<<(x830<=x831))!=x832);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x835 = INT64_MIN;
	int32_t t115 = 481;

    t115 = ((x833<<(x834<=x835))!=x836);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x865 = INT64_MAX;
	volatile int64_t x866 = -1LL;
	static int16_t x867 = INT16_MIN;
	uint64_t x868 = 52177238761914706LLU;
	int32_t t116 = -545573680;

    t116 = ((x865<<(x866<=x867))!=x868);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x873 = 45;
	uint32_t x874 = 0U;
	uint16_t x875 = 1371U;

    t117 = ((x873<<(x874<=x875))!=x876);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x880 = -295875488LL;
	int32_t t118 = -60;

    t118 = ((x877<<(x878<=x879))!=x880);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x881 = 241039;
	static int64_t x882 = INT64_MAX;
	int64_t x883 = INT64_MIN;
	uint32_t x884 = UINT32_MAX;
	int32_t t119 = 1;

    t119 = ((x881<<(x882<=x883))!=x884);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x886 = UINT8_MAX;
	static int64_t x887 = INT64_MIN;
	uint32_t x888 = UINT32_MAX;
	int32_t t120 = -28337854;

    t120 = ((x885<<(x886<=x887))!=x888);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x897 = UINT8_MAX;
	int16_t x898 = INT16_MAX;
	int32_t x900 = -1;
	int32_t t121 = -1683;

    t121 = ((x897<<(x898<=x899))!=x900);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x909 = 7328U;
	uint8_t x910 = 0U;
	int8_t x911 = -1;
	int8_t x912 = 5;

    t122 = ((x909<<(x910<=x911))!=x912);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x913 = INT8_MAX;
	int16_t x914 = INT16_MIN;
	int32_t x915 = -1;
	static int8_t x916 = -1;
	static volatile int32_t t123 = 154817767;

    t123 = ((x913<<(x914<=x915))!=x916);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x917 = 2477950965682LL;
	static uint8_t x918 = 6U;
	int32_t x920 = INT32_MIN;
	int32_t t124 = 13904347;

    t124 = ((x917<<(x918<=x919))!=x920);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x921 = INT64_MAX;
	volatile uint16_t x922 = UINT16_MAX;
	static volatile uint64_t x924 = 65818769588LLU;

    t125 = ((x921<<(x922<=x923))!=x924);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x933 = INT16_MAX;
	int64_t x934 = INT64_MIN;
	int8_t x935 = INT8_MIN;
	uint64_t x936 = 1381LLU;
	int32_t t126 = 702;

    t126 = ((x933<<(x934<=x935))!=x936);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x937 = 9759695379693513LLU;
	int64_t x938 = INT64_MIN;
	uint8_t x939 = 2U;
	volatile int32_t x940 = INT32_MAX;
	volatile int32_t t127 = -15;

    t127 = ((x937<<(x938<=x939))!=x940);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x949 = UINT64_MAX;
	volatile int16_t x950 = 458;
	volatile int8_t x951 = INT8_MIN;
	uint8_t x952 = UINT8_MAX;
	int32_t t128 = -129338838;

    t128 = ((x949<<(x950<=x951))!=x952);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x955 = 3U;
	int8_t x956 = -1;
	volatile int32_t t129 = 6;

    t129 = ((x953<<(x954<=x955))!=x956);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x958 = -51;
	uint64_t x959 = 4005876197LLU;
	volatile int32_t x960 = INT32_MIN;
	volatile int32_t t130 = -150580;

    t130 = ((x957<<(x958<=x959))!=x960);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x961 = 2U;
	int32_t x962 = -1;
	int64_t x963 = INT64_MIN;
	static int32_t t131 = -125656;

    t131 = ((x961<<(x962<=x963))!=x964);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x966 = INT32_MIN;
	int8_t x967 = INT8_MIN;
	volatile int32_t t132 = -573758;

    t132 = ((x965<<(x966<=x967))!=x968);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x969 = 28870135127882835LLU;
	static int16_t x970 = -11;
	volatile int8_t x971 = -3;
	int32_t x972 = INT32_MIN;
	volatile int32_t t133 = -47180717;

    t133 = ((x969<<(x970<=x971))!=x972);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x977 = INT64_MAX;
	uint32_t x978 = 88U;
	volatile int8_t x979 = 62;
	int32_t x980 = INT32_MAX;

    t134 = ((x977<<(x978<=x979))!=x980);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x981 = 21;
	int32_t x982 = INT32_MIN;
	uint8_t x983 = 29U;
	uint64_t x984 = 4506LLU;
	int32_t t135 = -822;

    t135 = ((x981<<(x982<=x983))!=x984);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x985 = 352;
	uint64_t x986 = 46366LLU;
	int32_t x987 = INT32_MIN;
	uint8_t x988 = 127U;
	int32_t t136 = -1;

    t136 = ((x985<<(x986<=x987))!=x988);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x993 = 5156U;
	volatile int8_t x994 = INT8_MAX;
	int8_t x995 = -1;
	volatile int32_t t137 = 352;

    t137 = ((x993<<(x994<=x995))!=x996);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x997 = 264;
	volatile int64_t x998 = -2LL;
	int8_t x1000 = INT8_MAX;
	int32_t t138 = -472844;

    t138 = ((x997<<(x998<=x999))!=x1000);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x1002 = UINT32_MAX;
	int16_t x1003 = INT16_MAX;
	int32_t t139 = 23;

    t139 = ((x1001<<(x1002<=x1003))!=x1004);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1013 = UINT32_MAX;
	int32_t x1015 = INT32_MIN;
	volatile int16_t x1016 = 252;
	volatile int32_t t140 = -2;

    t140 = ((x1013<<(x1014<=x1015))!=x1016);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1017 = 2U;
	volatile uint16_t x1018 = 60U;
	static uint64_t x1019 = 24LLU;
	uint16_t x1020 = 3U;
	volatile int32_t t141 = 22845;

    t141 = ((x1017<<(x1018<=x1019))!=x1020);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1029 = 53380915327LLU;
	uint16_t x1030 = 7U;
	volatile int16_t x1032 = -1;

    t142 = ((x1029<<(x1030<=x1031))!=x1032);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1033 = INT32_MAX;
	uint8_t x1035 = UINT8_MAX;
	int32_t x1036 = INT32_MAX;
	volatile int32_t t143 = -541;

    t143 = ((x1033<<(x1034<=x1035))!=x1036);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1037 = 2314U;
	int16_t x1039 = 533;
	int64_t x1040 = INT64_MIN;

    t144 = ((x1037<<(x1038<=x1039))!=x1040);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x1041 = UINT8_MAX;
	int32_t x1042 = -1;
	int8_t x1043 = -1;
	static int64_t x1044 = INT64_MAX;

    t145 = ((x1041<<(x1042<=x1043))!=x1044);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1049 = 13U;
	static uint32_t x1051 = 14744291U;
	static volatile int32_t t146 = -1;

    t146 = ((x1049<<(x1050<=x1051))!=x1052);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1053 = INT8_MAX;
	uint8_t x1054 = UINT8_MAX;
	uint32_t x1055 = 115U;
	uint8_t x1056 = 23U;
	int32_t t147 = -1;

    t147 = ((x1053<<(x1054<=x1055))!=x1056);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1065 = INT16_MAX;
	int8_t x1066 = INT8_MIN;
	int16_t x1067 = INT16_MAX;
	int32_t t148 = 3565;

    t148 = ((x1065<<(x1066<=x1067))!=x1068);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x1069 = 7021U;
	static int64_t x1071 = INT64_MAX;
	int16_t x1072 = INT16_MAX;
	int32_t t149 = -336;

    t149 = ((x1069<<(x1070<=x1071))!=x1072);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1074 = -1;
	uint16_t x1075 = 3U;
	int8_t x1076 = -2;
	int32_t t150 = -2;

    t150 = ((x1073<<(x1074<=x1075))!=x1076);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1077 = 11500696LLU;
	uint32_t x1078 = 402298U;
	int32_t x1079 = INT32_MIN;
	int16_t x1080 = -1;
	volatile int32_t t151 = -1;

    t151 = ((x1077<<(x1078<=x1079))!=x1080);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1085 = 55804283521LL;
	static uint64_t x1086 = 117071884127554LLU;
	static int32_t x1087 = -1;
	uint16_t x1088 = UINT16_MAX;
	volatile int32_t t152 = 1507;

    t152 = ((x1085<<(x1086<=x1087))!=x1088);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1095 = -1;
	int32_t x1096 = -1;
	int32_t t153 = 2493363;

    t153 = ((x1093<<(x1094<=x1095))!=x1096);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x1098 = UINT8_MAX;
	int16_t x1099 = 2427;
	int16_t x1100 = -1;
	volatile int32_t t154 = 0;

    t154 = ((x1097<<(x1098<=x1099))!=x1100);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x1102 = INT16_MIN;
	volatile int16_t x1103 = INT16_MIN;
	volatile int8_t x1104 = -1;
	static int32_t t155 = -2289;

    t155 = ((x1101<<(x1102<=x1103))!=x1104);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1105 = 652007518U;
	volatile int16_t x1107 = INT16_MAX;
	volatile int32_t t156 = 10085236;

    t156 = ((x1105<<(x1106<=x1107))!=x1108);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1109 = UINT8_MAX;
	int32_t x1110 = INT32_MIN;
	int32_t x1111 = INT32_MIN;
	static volatile uint32_t x1112 = 466835381U;
	volatile int32_t t157 = -41;

    t157 = ((x1109<<(x1110<=x1111))!=x1112);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x1117 = 42311LL;
	int8_t x1118 = -1;
	int8_t x1119 = INT8_MIN;
	volatile int8_t x1120 = INT8_MIN;

    t158 = ((x1117<<(x1118<=x1119))!=x1120);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x1137 = 31U;
	static uint32_t x1138 = 40101419U;
	uint64_t x1139 = UINT64_MAX;
	int64_t x1140 = -1LL;
	volatile int32_t t159 = -204;

    t159 = ((x1137<<(x1138<=x1139))!=x1140);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1159 = INT32_MIN;
	volatile int32_t t160 = 41067594;

    t160 = ((x1157<<(x1158<=x1159))!=x1160);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1161 = 6LL;
	static int16_t x1163 = INT16_MAX;
	uint16_t x1164 = 8846U;
	int32_t t161 = 118384;

    t161 = ((x1161<<(x1162<=x1163))!=x1164);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1181 = UINT8_MAX;
	static int64_t x1183 = INT64_MAX;
	static int8_t x1184 = INT8_MIN;
	static volatile int32_t t162 = -4;

    t162 = ((x1181<<(x1182<=x1183))!=x1184);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x1186 = -1;
	uint16_t x1187 = UINT16_MAX;
	volatile int8_t x1188 = -53;

    t163 = ((x1185<<(x1186<=x1187))!=x1188);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1192 = -1;
	volatile int32_t t164 = 46914353;

    t164 = ((x1189<<(x1190<=x1191))!=x1192);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1193 = INT8_MAX;
	volatile int32_t t165 = -105;

    t165 = ((x1193<<(x1194<=x1195))!=x1196);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x1206 = 122LL;
	int16_t x1208 = -1;
	volatile int32_t t166 = -11001;

    t166 = ((x1205<<(x1206<=x1207))!=x1208);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1213 = 42;
	static uint64_t x1214 = UINT64_MAX;
	int64_t x1215 = INT64_MAX;
	uint32_t x1216 = 17U;
	volatile int32_t t167 = -62877;

    t167 = ((x1213<<(x1214<=x1215))!=x1216);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x1217 = UINT64_MAX;
	uint32_t x1218 = UINT32_MAX;
	volatile int8_t x1219 = INT8_MAX;
	int8_t x1220 = 20;
	volatile int32_t t168 = 3;

    t168 = ((x1217<<(x1218<=x1219))!=x1220);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1221 = 305U;
	static uint8_t x1222 = 9U;
	static uint16_t x1223 = UINT16_MAX;
	volatile int16_t x1224 = -4;
	int32_t t169 = 45;

    t169 = ((x1221<<(x1222<=x1223))!=x1224);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1225 = 26U;
	uint32_t x1226 = 185391U;
	uint64_t x1227 = 1153548192644040309LLU;
	int16_t x1228 = INT16_MIN;

    t170 = ((x1225<<(x1226<=x1227))!=x1228);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1229 = UINT8_MAX;
	int64_t x1230 = -339773024001LL;
	int16_t x1231 = INT16_MIN;
	int64_t x1232 = INT64_MAX;
	volatile int32_t t171 = -308;

    t171 = ((x1229<<(x1230<=x1231))!=x1232);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1234 = UINT8_MAX;
	int64_t x1235 = INT64_MAX;
	volatile int32_t x1236 = -1;
	int32_t t172 = 647;

    t172 = ((x1233<<(x1234<=x1235))!=x1236);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1237 = 119U;
	int64_t x1238 = 14LL;
	uint32_t x1240 = UINT32_MAX;
	static int32_t t173 = 27557015;

    t173 = ((x1237<<(x1238<=x1239))!=x1240);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1241 = 1759120;
	uint8_t x1242 = UINT8_MAX;
	volatile uint32_t x1243 = UINT32_MAX;
	static int64_t x1244 = INT64_MAX;
	volatile int32_t t174 = 4805;

    t174 = ((x1241<<(x1242<=x1243))!=x1244);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x1249 = 23U;
	static int8_t x1250 = -1;
	static volatile int8_t x1251 = -1;
	volatile int32_t t175 = -237;

    t175 = ((x1249<<(x1250<=x1251))!=x1252);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1265 = INT16_MAX;
	volatile int16_t x1266 = INT16_MIN;
	int64_t x1267 = INT64_MAX;
	int8_t x1268 = -1;
	int32_t t176 = -2719968;

    t176 = ((x1265<<(x1266<=x1267))!=x1268);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1273 = UINT8_MAX;
	volatile uint16_t x1274 = 1702U;
	volatile uint32_t x1275 = UINT32_MAX;
	volatile uint16_t x1276 = 1U;
	volatile int32_t t177 = -12;

    t177 = ((x1273<<(x1274<=x1275))!=x1276);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint8_t x1281 = 19U;
	uint8_t x1282 = UINT8_MAX;
	volatile uint16_t x1283 = 6U;
	int32_t t178 = 3506;

    t178 = ((x1281<<(x1282<=x1283))!=x1284);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x1285 = 3901U;
	volatile int32_t x1286 = -1;
	volatile int32_t x1287 = INT32_MAX;
	int16_t x1288 = INT16_MAX;
	int32_t t179 = 29120396;

    t179 = ((x1285<<(x1286<=x1287))!=x1288);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1293 = 216075369U;
	int64_t x1294 = INT64_MIN;
	int64_t x1295 = 129298527830906LL;
	static int32_t x1296 = -1;

    t180 = ((x1293<<(x1294<=x1295))!=x1296);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1301 = 623868069209685LLU;
	int8_t x1302 = -1;
	static int16_t x1303 = -1;

    t181 = ((x1301<<(x1302<=x1303))!=x1304);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1305 = 93U;
	int32_t x1306 = INT32_MAX;
	uint64_t x1307 = 26LLU;
	volatile int32_t t182 = -204;

    t182 = ((x1305<<(x1306<=x1307))!=x1308);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1309 = 44U;
	uint64_t x1310 = UINT64_MAX;
	int16_t x1311 = INT16_MIN;
	volatile int32_t t183 = 50;

    t183 = ((x1309<<(x1310<=x1311))!=x1312);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1314 = 1532LLU;
	uint16_t x1315 = 19553U;
	int64_t x1316 = -1LL;
	static volatile int32_t t184 = -299923150;

    t184 = ((x1313<<(x1314<=x1315))!=x1316);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1318 = UINT64_MAX;
	int8_t x1319 = INT8_MAX;
	int32_t x1320 = -109670346;
	volatile int32_t t185 = 1170;

    t185 = ((x1317<<(x1318<=x1319))!=x1320);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1321 = UINT64_MAX;
	int16_t x1322 = INT16_MIN;
	int32_t x1323 = INT32_MIN;
	int32_t t186 = 2715;

    t186 = ((x1321<<(x1322<=x1323))!=x1324);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1349 = 7619U;
	volatile int8_t x1350 = INT8_MAX;
	uint16_t x1351 = 101U;
	static int32_t t187 = -1560354;

    t187 = ((x1349<<(x1350<=x1351))!=x1352);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1358 = INT32_MIN;
	static volatile int64_t x1359 = -242459LL;
	uint32_t x1360 = 1634U;
	int32_t t188 = 495;

    t188 = ((x1357<<(x1358<=x1359))!=x1360);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1373 = UINT64_MAX;
	uint16_t x1374 = 79U;
	int8_t x1375 = 0;
	int64_t x1376 = INT64_MAX;
	int32_t t189 = 5;

    t189 = ((x1373<<(x1374<=x1375))!=x1376);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1381 = INT16_MAX;
	static uint16_t x1382 = 186U;
	int16_t x1383 = INT16_MIN;
	static int8_t x1384 = INT8_MIN;
	volatile int32_t t190 = -1;

    t190 = ((x1381<<(x1382<=x1383))!=x1384);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x1389 = 25594U;
	int32_t x1390 = -1;
	int64_t x1391 = INT64_MIN;
	int16_t x1392 = INT16_MIN;
	volatile int32_t t191 = 3322;

    t191 = ((x1389<<(x1390<=x1391))!=x1392);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1413 = 703593577299994LLU;
	int32_t x1414 = INT32_MAX;
	int64_t x1416 = INT64_MIN;
	volatile int32_t t192 = -7;

    t192 = ((x1413<<(x1414<=x1415))!=x1416);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1425 = 7U;
	static volatile int32_t x1426 = INT32_MAX;
	static volatile uint64_t x1427 = UINT64_MAX;
	static uint8_t x1428 = 31U;
	static int32_t t193 = -47598730;

    t193 = ((x1425<<(x1426<=x1427))!=x1428);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1441 = UINT16_MAX;
	int32_t x1442 = -1;
	uint32_t x1444 = UINT32_MAX;
	volatile int32_t t194 = -911764;

    t194 = ((x1441<<(x1442<=x1443))!=x1444);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1445 = INT16_MAX;
	volatile int32_t x1446 = -1;
	int32_t x1447 = -1;
	static int64_t x1448 = -1LL;
	volatile int32_t t195 = -19544;

    t195 = ((x1445<<(x1446<=x1447))!=x1448);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1461 = 48529878U;
	volatile int32_t x1462 = -7;
	volatile uint32_t x1463 = 7644U;
	int64_t x1464 = INT64_MIN;
	static volatile int32_t t196 = 15142;

    t196 = ((x1461<<(x1462<=x1463))!=x1464);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1473 = 611291658U;
	volatile int64_t x1474 = -1LL;
	static int8_t x1475 = -1;
	volatile int64_t x1476 = INT64_MIN;
	volatile int32_t t197 = -5091514;

    t197 = ((x1473<<(x1474<=x1475))!=x1476);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x1481 = 754U;
	int16_t x1482 = 160;
	volatile int32_t x1483 = 5230174;
	uint64_t x1484 = 89159658737085LLU;
	volatile int32_t t198 = -123;

    t198 = ((x1481<<(x1482<=x1483))!=x1484);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1485 = 17972U;
	int32_t x1486 = INT32_MIN;
	int16_t x1487 = -1;
	uint64_t x1488 = UINT64_MAX;

    t199 = ((x1485<<(x1486<=x1487))!=x1488);

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

