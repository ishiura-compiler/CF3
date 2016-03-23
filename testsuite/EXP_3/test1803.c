
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

uint16_t x3 = UINT16_MAX;
uint16_t x4 = 797U;
int16_t x5 = INT16_MIN;
int16_t x6 = -774;
int32_t t1 = -103;
uint16_t x11 = 296U;
static int64_t t2 = -345LL;
uint32_t x20 = UINT32_MAX;
int64_t x30 = 860639LL;
static int8_t x31 = INT8_MAX;
int32_t x39 = -1;
int64_t x40 = INT64_MAX;
volatile uint8_t x54 = 7U;
int8_t x60 = INT8_MIN;
static int16_t x63 = -1;
static int16_t x99 = -1;
static uint8_t x100 = UINT8_MAX;
uint64_t x102 = UINT64_MAX;
volatile uint64_t t17 = 316498195LLU;
static uint64_t x126 = 2382747LLU;
static uint8_t x127 = UINT8_MAX;
int32_t x137 = -21;
uint8_t x142 = 76U;
int8_t x144 = -1;
int16_t x145 = INT16_MIN;
int32_t x148 = 3246581;
static uint32_t x158 = 2541U;
uint16_t x163 = 1170U;
int32_t x193 = -1;
int64_t x194 = -618051LL;
static uint8_t x210 = 71U;
int64_t x211 = INT64_MIN;
uint64_t x212 = UINT64_MAX;
uint8_t x213 = 1U;
uint64_t x215 = UINT64_MAX;
volatile int32_t x216 = -913535;
static int32_t t32 = -3;
uint64_t x230 = 1782LLU;
static uint64_t x232 = UINT64_MAX;
int32_t t36 = 31372;
uint32_t x266 = UINT32_MAX;
volatile int8_t x276 = -2;
int32_t t40 = 528360553;
int16_t x281 = -1053;
volatile int8_t x282 = -24;
volatile int32_t t41 = 534;
static volatile int32_t t42 = -991;
volatile uint64_t x294 = 57679841278LLU;
static int16_t x295 = INT16_MIN;
uint8_t x297 = 0U;
static volatile uint8_t x300 = 37U;
int32_t x307 = INT32_MAX;
uint64_t t46 = 30577LLU;
uint64_t x310 = UINT64_MAX;
static uint16_t x311 = UINT16_MAX;
static uint64_t x319 = UINT64_MAX;
volatile uint16_t x368 = UINT16_MAX;
uint32_t x370 = 494U;
int64_t x376 = -1LL;
int32_t x377 = INT32_MIN;
int8_t x383 = INT8_MIN;
int8_t x386 = -1;
uint8_t x387 = 24U;
int32_t x388 = 16342;
int32_t x393 = -1;
volatile int64_t x399 = INT64_MIN;
static volatile int8_t x405 = -1;
int16_t x406 = -45;
int32_t x407 = INT32_MIN;
int32_t t61 = -20685;
int16_t x414 = -1;
volatile uint16_t x415 = 358U;
static int64_t x424 = INT64_MAX;
static volatile uint32_t t64 = 142357U;
int16_t x432 = INT16_MIN;
int16_t x484 = INT16_MIN;
int32_t t69 = -22633;
int8_t x490 = INT8_MAX;
volatile uint8_t x495 = 0U;
int8_t x496 = INT8_MAX;
volatile int64_t t71 = 77LL;
static volatile int64_t x502 = -190LL;
volatile uint64_t t72 = 848LLU;
int16_t x537 = INT16_MAX;
volatile int16_t x539 = 864;
volatile uint64_t t75 = 2073417690175LLU;
int32_t x553 = 86504095;
volatile uint64_t x556 = UINT64_MAX;
int16_t x561 = -1;
static uint16_t x566 = 1886U;
int8_t x582 = INT8_MIN;
int64_t t82 = 7923833LL;
int8_t x592 = INT8_MIN;
uint64_t x597 = 2861211811778517LLU;
uint64_t x600 = 318LLU;
static volatile int8_t x602 = -1;
static uint64_t x614 = UINT64_MAX;
int64_t t87 = 2136103649548323LL;
static int8_t x628 = -3;
uint64_t x633 = UINT64_MAX;
int16_t x635 = INT16_MAX;
volatile uint64_t t89 = 4880421402479LLU;
uint64_t x642 = 21543LLU;
static int8_t x644 = -1;
uint8_t x649 = UINT8_MAX;
static volatile int16_t x651 = 12;
int8_t x655 = INT8_MIN;
int16_t x656 = INT16_MIN;
static int32_t t95 = -1;
int16_t x662 = -31;
int32_t t96 = -256268;
int64_t x673 = -1LL;
volatile int64_t t97 = 117014311LL;
uint64_t x682 = UINT64_MAX;
uint32_t x698 = UINT32_MAX;
int8_t x699 = -1;
int16_t x701 = -859;
volatile int8_t x708 = INT8_MIN;
volatile int16_t x719 = 105;
uint32_t t104 = 3825U;
volatile uint64_t x729 = UINT64_MAX;
int64_t x762 = INT64_MIN;
uint8_t x765 = UINT8_MAX;
static uint16_t x782 = 0U;
uint8_t x783 = UINT8_MAX;
int16_t x790 = INT16_MIN;
int8_t x800 = -29;
uint16_t x808 = UINT16_MAX;
uint64_t t115 = 60232484LLU;
volatile uint32_t x833 = 29U;
uint16_t x836 = UINT16_MAX;
int64_t x838 = INT64_MAX;
uint8_t x843 = 74U;
uint16_t x844 = 136U;
volatile int16_t x851 = INT16_MIN;
uint64_t x857 = 68191LLU;
int32_t x859 = 2976;
uint16_t x863 = 24868U;
volatile int32_t t124 = 39;
uint32_t x866 = 3812724U;
volatile int8_t x871 = 23;
static uint32_t x877 = 18105663U;
static uint32_t x898 = UINT32_MAX;
int16_t x928 = INT16_MIN;
static int8_t x934 = INT8_MAX;
volatile int64_t t134 = 1LL;
int8_t x946 = -1;
int32_t x958 = -1;
volatile int32_t t138 = -4493;
int16_t x1002 = -1;
uint8_t x1010 = UINT8_MAX;
int32_t x1014 = 725;
int16_t x1033 = INT16_MIN;
volatile uint64_t t146 = 244267004719325499LLU;
volatile uint32_t x1037 = 62070U;
int8_t x1038 = 1;
volatile uint32_t t147 = 997368U;
uint64_t x1043 = UINT64_MAX;
uint64_t t148 = 24936500170LLU;
int16_t x1046 = INT16_MIN;
uint16_t x1048 = 4862U;
int64_t x1052 = INT64_MIN;
volatile int16_t x1068 = INT16_MIN;
volatile uint32_t t151 = 132569630U;
static volatile uint64_t x1082 = 700LLU;
uint32_t t155 = 25U;
static int32_t x1110 = INT32_MIN;
uint64_t x1111 = 0LLU;
uint16_t x1112 = UINT16_MAX;
uint16_t x1118 = 0U;
static int32_t x1121 = 3738473;
volatile int32_t t162 = -98255942;
int32_t t163 = 2287278;
int8_t x1147 = INT8_MIN;
int8_t x1159 = INT8_MIN;
volatile int32_t t167 = 1;
int8_t x1170 = INT8_MIN;
volatile int32_t t169 = -7;
volatile int16_t x1174 = 8992;
volatile int16_t x1175 = INT16_MIN;
uint8_t x1176 = UINT8_MAX;
int16_t x1178 = 3;
uint64_t x1190 = 805223555LLU;
uint16_t x1229 = UINT16_MAX;
volatile uint16_t x1244 = 685U;
int32_t x1245 = INT32_MAX;
static volatile uint64_t t178 = 2413LLU;
static volatile uint64_t t179 = 141320324647236029LLU;
volatile uint8_t x1258 = UINT8_MAX;
int32_t x1260 = 1;
int64_t x1281 = 57156LL;
volatile int64_t x1283 = 20092014331667149LL;
int32_t x1288 = 510483021;
int8_t x1297 = 0;
static int8_t x1298 = INT8_MIN;
int32_t t186 = 1;
volatile uint16_t x1331 = 2801U;
volatile uint64_t t188 = 388421925LLU;
static uint32_t x1344 = 5U;
int64_t t190 = -3206759516092LL;
uint32_t x1359 = UINT32_MAX;
int32_t t192 = -69433;
uint32_t t193 = 162970U;
uint64_t x1374 = 702611LLU;
volatile uint32_t x1381 = 5607U;
int16_t x1382 = 522;
uint32_t x1398 = 2U;
volatile int64_t x1403 = INT64_MIN;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	volatile int8_t x2 = INT8_MAX;
	volatile int32_t t0 = -1;

    t0 = ((x1*x2)>>(x3<=x4));

    if (t0 != 16129) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = -1;
	volatile uint8_t x8 = 2U;

    t1 = ((x5*x6)>>(x7<=x8));

    if (t1 != 12681216) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	volatile int64_t x10 = -1LL;
	int16_t x12 = INT16_MAX;

    t2 = ((x9*x10)>>(x11<=x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 0;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MAX;
	int32_t t3 = -257877484;

    t3 = ((x17*x18)>>(x19<=x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x25 = -9529588496851052LL;
	static int16_t x26 = 0;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile int64_t t4 = 1408345230321069872LL;

    t4 = ((x25*x26)>>(x27<=x28));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MAX;
	static uint16_t x32 = 248U;
	volatile int64_t t5 = -51397921970178076LL;

    t5 = ((x29*x30)>>(x31<=x32));

    if (t5 != 924104089235216LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = -1;
	int64_t x34 = -1148534667812336402LL;
	int16_t x35 = INT16_MAX;
	int64_t x36 = 202LL;
	int64_t t6 = 58886LL;

    t6 = ((x33*x34)>>(x35<=x36));

    if (t6 != 1148534667812336402LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x37 = INT32_MIN;
	int8_t x38 = 0;
	volatile int32_t t7 = 322;

    t7 = ((x37*x38)>>(x39<=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x41 = -1;
	int8_t x42 = -1;
	volatile int32_t x43 = 27198;
	int32_t x44 = INT32_MIN;
	int32_t t8 = -243;

    t8 = ((x41*x42)>>(x43<=x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x49 = -220948060;
	int16_t x50 = -1;
	uint16_t x51 = 7331U;
	volatile int64_t x52 = -1LL;
	int32_t t9 = -1209;

    t9 = ((x49*x50)>>(x51<=x52));

    if (t9 != 220948060) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = 1U;
	int16_t x55 = -1;
	volatile int8_t x56 = INT8_MIN;
	static volatile uint32_t t10 = 205595U;

    t10 = ((x53*x54)>>(x55<=x56));

    if (t10 != 7U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = 13U;
	volatile uint16_t x58 = UINT16_MAX;
	uint16_t x59 = 18U;
	int32_t t11 = 8;

    t11 = ((x57*x58)>>(x59<=x60));

    if (t11 != 851955) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x61 = -1;
	volatile uint32_t x62 = 53769466U;
	uint32_t x64 = 1732852288U;
	volatile uint32_t t12 = 3846U;

    t12 = ((x61*x62)>>(x63<=x64));

    if (t12 != 4241197830U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x85 = 1651U;
	volatile int32_t x86 = INT32_MAX;
	int16_t x87 = -1;
	int32_t x88 = INT32_MIN;
	volatile uint32_t t13 = 4U;

    t13 = ((x85*x86)>>(x87<=x88));

    if (t13 != 2147481997U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = -1LL;
	int64_t x90 = -1LL;
	static int32_t x91 = 60336674;
	volatile int16_t x92 = -1;
	static int64_t t14 = 46318LL;

    t14 = ((x89*x90)>>(x91<=x92));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x97 = -5;
	static uint64_t x98 = 12580742340LLU;
	volatile uint64_t t15 = 10LLU;

    t15 = ((x97*x98)>>(x99<=x100));

    if (t15 != 9223372005402919958LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x101 = INT64_MAX;
	uint32_t x103 = UINT32_MAX;
	static int8_t x104 = 45;
	uint64_t t16 = 956279546LLU;

    t16 = ((x101*x102)>>(x103<=x104));

    if (t16 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = UINT8_MAX;
	static int64_t x111 = INT64_MAX;
	static int64_t x112 = INT64_MAX;

    t17 = ((x109*x110)>>(x111<=x112));

    if (t17 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x113 = INT8_MIN;
	static int16_t x114 = INT16_MIN;
	int64_t x115 = -1LL;
	uint8_t x116 = 74U;
	int32_t t18 = -47;

    t18 = ((x113*x114)>>(x115<=x116));

    if (t18 != 2097152) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x117 = 1;
	int64_t x118 = INT64_MAX;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = INT32_MIN;
	int64_t t19 = INT64_MAX;

    t19 = ((x117*x118)>>(x119<=x120));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x125 = INT64_MAX;
	volatile int16_t x128 = INT16_MIN;
	uint64_t t20 = 237LLU;

    t20 = ((x125*x126)>>(x127<=x128));

    if (t20 != 9223372036852393061LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x138 = -2344;
	uint8_t x139 = 7U;
	static uint32_t x140 = UINT32_MAX;
	volatile int32_t t21 = 507947606;

    t21 = ((x137*x138)>>(x139<=x140));

    if (t21 != 24612) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x141 = 1011894385505LL;
	static int32_t x143 = INT32_MIN;
	int64_t t22 = -1LL;

    t22 = ((x141*x142)>>(x143<=x144));

    if (t22 != 38451986649190LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x146 = -1;
	int32_t x147 = -564344860;
	int32_t t23 = -237724859;

    t23 = ((x145*x146)>>(x147<=x148));

    if (t23 != 16384) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x157 = INT16_MIN;
	static int32_t x159 = INT32_MAX;
	static volatile uint16_t x160 = UINT16_MAX;
	static volatile uint32_t t24 = 1580832896U;

    t24 = ((x157*x158)>>(x159<=x160));

    if (t24 != 4211703808U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	uint8_t x164 = 0U;
	static int32_t t25 = 50186726;

    t25 = ((x161*x162)>>(x163<=x164));

    if (t25 != 4194304) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = INT8_MAX;
	volatile int8_t x180 = 14;
	uint32_t t26 = 2347U;

    t26 = ((x177*x178)>>(x179<=x180));

    if (t26 != 4294901761U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x185 = UINT64_MAX;
	int64_t x186 = -1LL;
	static uint32_t x187 = 78320331U;
	volatile uint8_t x188 = UINT8_MAX;
	uint64_t t27 = 73793249879LLU;

    t27 = ((x185*x186)>>(x187<=x188));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x189 = 0;
	static uint16_t x190 = 1U;
	volatile uint8_t x191 = 126U;
	int32_t x192 = INT32_MIN;
	static int32_t t28 = 146962937;

    t28 = ((x189*x190)>>(x191<=x192));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x195 = 358104941139042187LLU;
	volatile int32_t x196 = -1;
	int64_t t29 = 1354900LL;

    t29 = ((x193*x194)>>(x195<=x196));

    if (t29 != 309025LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x197 = 1;
	static int16_t x198 = 1;
	static uint32_t x199 = 12U;
	volatile int16_t x200 = -1;
	volatile int32_t t30 = 795;

    t30 = ((x197*x198)>>(x199<=x200));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x209 = 596456LLU;
	volatile uint64_t t31 = 262035015LLU;

    t31 = ((x209*x210)>>(x211<=x212));

    if (t31 != 21174188LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x214 = 8U;

    t32 = ((x213*x214)>>(x215<=x216));

    if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x217 = 2925060U;
	uint64_t x218 = 3402516LLU;
	uint64_t x219 = 159LLU;
	int64_t x220 = INT64_MIN;
	uint64_t t33 = 2674011267179696LLU;

    t33 = ((x217*x218)>>(x219<=x220));

    if (t33 != 4976281725480LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x229 = UINT16_MAX;
	static int32_t x231 = INT32_MAX;
	volatile uint64_t t34 = 128938270768123LLU;

    t34 = ((x229*x230)>>(x231<=x232));

    if (t34 != 58391685LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x233 = 0U;
	int16_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int32_t x236 = INT32_MAX;
	static int32_t t35 = 815126027;

    t35 = ((x233*x234)>>(x235<=x236));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	volatile uint8_t x238 = 80U;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MIN;

    t36 = ((x237*x238)>>(x239<=x240));

    if (t36 != 10200) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x241 = UINT64_MAX;
	int16_t x242 = 21;
	uint32_t x243 = 673233U;
	int16_t x244 = INT16_MIN;
	static volatile uint64_t t37 = 5929553386281LLU;

    t37 = ((x241*x242)>>(x243<=x244));

    if (t37 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x245 = 944LL;
	uint64_t x246 = 449166031116442043LLU;
	int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	uint64_t t38 = 140881LLU;

    t38 = ((x245*x246)>>(x247<=x248));

    if (t38 != 18184363752311153040LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x265 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	static volatile uint32_t t39 = 1U;

    t39 = ((x265*x266)>>(x267<=x268));

    if (t39 != 16384U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x273 = 57U;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = -1104796808935LL;

    t40 = ((x273*x274)>>(x275<=x276));

    if (t40 != 1867747) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x283 = -1;
	int64_t x284 = INT64_MIN;

    t41 = ((x281*x282)>>(x283<=x284));

    if (t41 != 25272) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	static uint16_t x287 = 28U;
	int16_t x288 = INT16_MAX;

    t42 = ((x285*x286)>>(x287<=x288));

    if (t42 != 2097152) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x289 = 67U;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MAX;
	uint16_t x292 = UINT16_MAX;
	int32_t t43 = 33808029;

    t43 = ((x289*x290)>>(x291<=x292));

    if (t43 != 4390845) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x293 = UINT8_MAX;
	int8_t x296 = -1;
	volatile uint64_t t44 = 186975497487122LLU;

    t44 = ((x293*x294)>>(x295<=x296));

    if (t44 != 7354179762945LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x298 = INT16_MIN;
	static int8_t x299 = INT8_MIN;
	volatile int32_t t45 = 1;

    t45 = ((x297*x298)>>(x299<=x300));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x305 = 134127128770LLU;
	int16_t x306 = -16353;
	int64_t x308 = INT64_MAX;

    t46 = ((x305*x306)>>(x307<=x308));

    if (t46 != 9222275346386387903LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x309 = UINT32_MAX;
	uint64_t x312 = 67571113195LLU;
	static volatile uint64_t t47 = 18LLU;

    t47 = ((x309*x310)>>(x311<=x312));

    if (t47 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x317 = -1;
	volatile uint64_t x318 = 485996584309LLU;
	uint64_t x320 = UINT64_MAX;
	static uint64_t t48 = 7161330446404921LLU;

    t48 = ((x317*x318)>>(x319<=x320));

    if (t48 != 9223371793856483653LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x325 = UINT64_MAX;
	volatile int64_t x326 = 221623854580021LL;
	int16_t x327 = 3720;
	static int32_t x328 = -293177;
	uint64_t t49 = 5838LLU;

    t49 = ((x325*x326)>>(x327<=x328));

    if (t49 != 18446522449854971595LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x349 = 4LL;
	volatile int16_t x350 = 5;
	static int64_t x351 = -36808467008528LL;
	volatile int8_t x352 = INT8_MIN;
	volatile int64_t t50 = -232167321438LL;

    t50 = ((x349*x350)>>(x351<=x352));

    if (t50 != 10LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x365 = 92385LLU;
	int32_t x366 = 197841;
	int8_t x367 = INT8_MIN;
	static uint64_t t51 = 46370383990776LLU;

    t51 = ((x365*x366)>>(x367<=x368));

    if (t51 != 9138770392LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x369 = INT16_MIN;
	volatile uint64_t x371 = UINT64_MAX;
	static int16_t x372 = INT16_MIN;
	volatile uint32_t t52 = 4606106U;

    t52 = ((x369*x370)>>(x371<=x372));

    if (t52 != 4278779904U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x373 = -1;
	volatile int16_t x374 = -8;
	static int16_t x375 = -342;
	int32_t t53 = 103683;

    t53 = ((x373*x374)>>(x375<=x376));

    if (t53 != 4) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x378 = 25136218639LLU;
	int8_t x379 = 3;
	int64_t x380 = -88530718616LL;
	uint64_t t54 = 963105LLU;

    t54 = ((x377*x378)>>(x379<=x380));

    if (t54 != 1360613721323339776LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x381 = 503;
	volatile uint16_t x382 = 5U;
	int32_t x384 = INT32_MIN;
	int32_t t55 = 2884322;

    t55 = ((x381*x382)>>(x383<=x384));

    if (t55 != 2515) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x385 = -12803;
	int32_t t56 = -6083;

    t56 = ((x385*x386)>>(x387<=x388));

    if (t56 != 6401) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x389 = UINT32_MAX;
	volatile uint32_t x390 = 19170U;
	int64_t x391 = -1998603LL;
	static int8_t x392 = -1;
	static volatile uint32_t t57 = 102U;

    t57 = ((x389*x390)>>(x391<=x392));

    if (t57 != 2147474063U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x394 = -3069;
	uint32_t x395 = 1765494570U;
	uint32_t x396 = 127U;
	volatile int32_t t58 = 326745;

    t58 = ((x393*x394)>>(x395<=x396));

    if (t58 != 3069) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	static volatile uint8_t x398 = 5U;
	int64_t x400 = INT64_MAX;
	int32_t t59 = 125920524;

    t59 = ((x397*x398)>>(x399<=x400));

    if (t59 != 637) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x401 = 310U;
	int8_t x402 = 8;
	static int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t60 = -322478;

    t60 = ((x401*x402)>>(x403<=x404));

    if (t60 != 1240) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x408 = 1U;

    t61 = ((x405*x406)>>(x407<=x408));

    if (t61 != 22) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	volatile int64_t x411 = 67151LL;
	int64_t x412 = 14495908558875987LL;
	int32_t t62 = 19592799;

    t62 = ((x409*x410)>>(x411<=x412));

    if (t62 != 8192) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x413 = 3U;
	volatile int64_t x416 = 5128352596LL;
	volatile uint32_t t63 = 707306U;

    t63 = ((x413*x414)>>(x415<=x416));

    if (t63 != 2147483646U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x421 = 50U;
	static volatile int16_t x422 = -1;
	uint32_t x423 = 671196820U;

    t64 = ((x421*x422)>>(x423<=x424));

    if (t64 != 2147483623U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x429 = 1;
	uint32_t x430 = 3U;
	static int32_t x431 = 389;
	uint32_t t65 = 4622U;

    t65 = ((x429*x430)>>(x431<=x432));

    if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x445 = UINT8_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	static int16_t x447 = INT16_MAX;
	uint32_t x448 = UINT32_MAX;
	int32_t t66 = 23274;

    t66 = ((x445*x446)>>(x447<=x448));

    if (t66 != 32512) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x449 = 59U;
	volatile int64_t x450 = 10766971547808938LL;
	int32_t x451 = INT32_MAX;
	static uint8_t x452 = UINT8_MAX;
	static volatile int64_t t67 = -11327LL;

    t67 = ((x449*x450)>>(x451<=x452));

    if (t67 != 635251321320727342LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x461 = 105U;
	uint64_t x462 = UINT64_MAX;
	int8_t x463 = 0;
	int8_t x464 = 7;
	static uint64_t t68 = 1LLU;

    t68 = ((x461*x462)>>(x463<=x464));

    if (t68 != 9223372036854775755LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x481 = -1;
	int16_t x482 = INT16_MIN;
	volatile int16_t x483 = -247;

    t69 = ((x481*x482)>>(x483<=x484));

    if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x489 = 13U;
	int8_t x491 = 0;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t70 = -5840;

    t70 = ((x489*x490)>>(x491<=x492));

    if (t70 != 825) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x493 = -1LL;
	int64_t x494 = -1LL;

    t71 = ((x493*x494)>>(x495<=x496));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x501 = 29918653046LLU;
	int16_t x503 = INT16_MIN;
	uint64_t x504 = 1LLU;

    t72 = ((x501*x502)>>(x503<=x504));

    if (t72 != 18446738389165472876LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x533 = 253U;
	uint16_t x534 = 7U;
	int64_t x535 = INT64_MIN;
	int32_t x536 = INT32_MIN;
	static volatile uint32_t t73 = 836U;

    t73 = ((x533*x534)>>(x535<=x536));

    if (t73 != 885U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x538 = 2108U;
	uint16_t x540 = UINT16_MAX;
	uint32_t t74 = 149952U;

    t74 = ((x537*x538)>>(x539<=x540));

    if (t74 != 34536418U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x541 = UINT64_MAX;
	static int8_t x542 = INT8_MIN;
	static int64_t x543 = -1LL;
	static int32_t x544 = 542256;

    t75 = ((x541*x542)>>(x543<=x544));

    if (t75 != 64LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x545 = INT32_MAX;
	volatile uint32_t x546 = 183470U;
	int16_t x547 = -7861;
	uint32_t x548 = 1011U;
	static volatile uint32_t t76 = 213305761U;

    t76 = ((x545*x546)>>(x547<=x548));

    if (t76 != 4294783826U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x554 = 24LL;
	static uint32_t x555 = UINT32_MAX;
	volatile int64_t t77 = 1726978466869371972LL;

    t77 = ((x553*x554)>>(x555<=x556));

    if (t77 != 1038049140LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x562 = 386138094U;
	int32_t x563 = 1716;
	uint16_t x564 = UINT16_MAX;
	volatile uint32_t t78 = 23U;

    t78 = ((x561*x562)>>(x563<=x564));

    if (t78 != 1954414601U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x565 = 1U;
	int64_t x567 = -1LL;
	volatile int64_t x568 = -1LL;
	volatile int32_t t79 = 312790;

    t79 = ((x565*x566)>>(x567<=x568));

    if (t79 != 943) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x573 = 40893619;
	uint64_t x574 = UINT64_MAX;
	int32_t x575 = INT32_MIN;
	int8_t x576 = INT8_MIN;
	static volatile uint64_t t80 = 78147LLU;

    t80 = ((x573*x574)>>(x575<=x576));

    if (t80 != 9223372036834328998LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile int8_t x583 = INT8_MIN;
	static uint32_t x584 = 5637396U;
	int32_t t81 = 2619;

    t81 = ((x581*x582)>>(x583<=x584));

    if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x585 = -72048;
	int64_t x586 = -1LL;
	static volatile int32_t x587 = INT32_MIN;
	volatile uint16_t x588 = 3U;

    t82 = ((x585*x586)>>(x587<=x588));

    if (t82 != 36024LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x589 = INT8_MIN;
	uint32_t x590 = 64U;
	uint32_t x591 = 4U;
	static volatile uint32_t t83 = 759436U;

    t83 = ((x589*x590)>>(x591<=x592));

    if (t83 != 2147479552U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x598 = 1879160328LLU;
	int8_t x599 = -1;
	uint64_t t84 = 2521515LLU;

    t84 = ((x597*x598)>>(x599<=x600));

    if (t84 != 3231535069259558056LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x601 = -30659754368656LL;
	uint8_t x603 = 13U;
	static uint32_t x604 = 3325793U;
	int64_t t85 = 1418344829725972LL;

    t85 = ((x601*x602)>>(x603<=x604));

    if (t85 != 15329877184328LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x615 = -13;
	int16_t x616 = INT16_MAX;
	volatile uint64_t t86 = 7106360581598LLU;

    t86 = ((x613*x614)>>(x615<=x616));

    if (t86 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x621 = 2645850LL;
	uint32_t x622 = 571U;
	volatile uint16_t x623 = UINT16_MAX;
	int16_t x624 = INT16_MIN;

    t87 = ((x621*x622)>>(x623<=x624));

    if (t87 != 1510780350LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x625 = 32;
	static uint32_t x626 = 5U;
	int16_t x627 = INT16_MIN;
	volatile uint32_t t88 = 436914934U;

    t88 = ((x625*x626)>>(x627<=x628));

    if (t88 != 80U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x634 = 5284U;
	int32_t x636 = INT32_MIN;

    t89 = ((x633*x634)>>(x635<=x636));

    if (t89 != 18446744073709546332LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x637 = -1;
	int32_t x638 = -3730;
	uint32_t x639 = 4085529U;
	int16_t x640 = INT16_MAX;
	int32_t t90 = -2942;

    t90 = ((x637*x638)>>(x639<=x640));

    if (t90 != 3730) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x641 = 2U;
	int8_t x643 = INT8_MIN;
	uint64_t t91 = 1638356790587LLU;

    t91 = ((x641*x642)>>(x643<=x644));

    if (t91 != 21543LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x645 = -15679;
	volatile uint64_t x646 = UINT64_MAX;
	volatile int64_t x647 = -93612308962984LL;
	int32_t x648 = INT32_MIN;
	static volatile uint64_t t92 = 8455771341LLU;

    t92 = ((x645*x646)>>(x647<=x648));

    if (t92 != 7839LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x650 = 9962U;
	uint16_t x652 = 6714U;
	volatile uint32_t t93 = 7448U;

    t93 = ((x649*x650)>>(x651<=x652));

    if (t93 != 1270155U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x653 = 42474740LLU;
	int8_t x654 = INT8_MIN;
	static volatile uint64_t t94 = 673477256186LLU;

    t94 = ((x653*x654)>>(x655<=x656));

    if (t94 != 18446744068272784896LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x657 = -9;
	int32_t x658 = -3140;
	int64_t x659 = 13LL;
	volatile int32_t x660 = -7964775;

    t95 = ((x657*x658)>>(x659<=x660));

    if (t95 != 28260) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x661 = INT8_MIN;
	volatile uint32_t x663 = UINT32_MAX;
	volatile int16_t x664 = INT16_MIN;

    t96 = ((x661*x662)>>(x663<=x664));

    if (t96 != 3968) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MIN;

    t97 = ((x673*x674)>>(x675<=x676));

    if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x681 = INT8_MAX;
	volatile int32_t x683 = 27;
	uint64_t x684 = 28150054LLU;
	uint64_t t98 = 806617LLU;

    t98 = ((x681*x682)>>(x683<=x684));

    if (t98 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x693 = 29243U;
	static uint64_t x694 = 515148515094765862LLU;
	static int16_t x695 = 1343;
	int16_t x696 = -1;
	volatile uint64_t t99 = 431463613781889LLU;

    t99 = ((x693*x694)>>(x695<=x696));

    if (t99 != 11944862769243983810LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x697 = 25343316LLU;
	static int32_t x700 = INT32_MIN;
	volatile uint64_t t100 = 43363079271LLU;

    t100 = ((x697*x698)>>(x699<=x700));

    if (t100 != 108848713366850220LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x702 = -1;
	int64_t x703 = INT64_MAX;
	int16_t x704 = 1;
	int32_t t101 = 1;

    t101 = ((x701*x702)>>(x703<=x704));

    if (t101 != 859) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x705 = -8;
	static int8_t x706 = INT8_MIN;
	static int32_t x707 = INT32_MIN;
	volatile int32_t t102 = 15;

    t102 = ((x705*x706)>>(x707<=x708));

    if (t102 != 512) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x709 = 0;
	int32_t x710 = -4924;
	uint8_t x711 = UINT8_MAX;
	static uint16_t x712 = 1U;
	static int32_t t103 = 3878655;

    t103 = ((x709*x710)>>(x711<=x712));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x717 = -28;
	volatile uint32_t x718 = 99389U;
	static volatile int32_t x720 = 23838;

    t104 = ((x717*x718)>>(x719<=x720));

    if (t104 != 2146092202U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x725 = 86U;
	uint8_t x726 = 2U;
	static int8_t x727 = 1;
	static int16_t x728 = INT16_MIN;
	int32_t t105 = 95036;

    t105 = ((x725*x726)>>(x727<=x728));

    if (t105 != 172) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x730 = 754044293497831622LLU;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile uint64_t t106 = 332206735177363LLU;

    t106 = ((x729*x730)>>(x731<=x732));

    if (t106 != 8846349890105859997LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x761 = 629034217466LLU;
	int64_t x763 = -1LL;
	int32_t x764 = 1399519;
	static uint64_t t107 = 1LLU;

    t107 = ((x761*x762)>>(x763<=x764));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint8_t x766 = 0U;
	uint64_t x767 = 73380828LLU;
	int32_t x768 = -901264;
	volatile int32_t t108 = -17;

    t108 = ((x765*x766)>>(x767<=x768));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x781 = -4;
	int64_t x784 = INT64_MIN;
	volatile int32_t t109 = -1376599;

    t109 = ((x781*x782)>>(x783<=x784));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x789 = INT16_MIN;
	int64_t x791 = INT64_MAX;
	int64_t x792 = 906609407532828883LL;
	volatile int32_t t110 = -945;

    t110 = ((x789*x790)>>(x791<=x792));

    if (t110 != 1073741824) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x793 = -1LL;
	static uint16_t x794 = 0U;
	int64_t x795 = INT64_MAX;
	int64_t x796 = INT64_MAX;
	static int64_t t111 = -10384858281293LL;

    t111 = ((x793*x794)>>(x795<=x796));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	int32_t x798 = -1;
	int8_t x799 = INT8_MIN;
	volatile uint64_t t112 = 122789277LLU;

    t112 = ((x797*x798)>>(x799<=x800));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x801 = INT16_MAX;
	static uint16_t x802 = 845U;
	uint8_t x803 = 6U;
	int32_t x804 = INT32_MIN;
	int32_t t113 = -992;

    t113 = ((x801*x802)>>(x803<=x804));

    if (t113 != 27688115) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x805 = 50866037;
	uint8_t x806 = 0U;
	uint16_t x807 = 179U;
	static int32_t t114 = -55555;

    t114 = ((x805*x806)>>(x807<=x808));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x813 = 4565214908950925017LLU;
	volatile uint16_t x814 = 0U;
	uint8_t x815 = UINT8_MAX;
	int64_t x816 = INT64_MIN;

    t115 = ((x813*x814)>>(x815<=x816));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	int64_t x818 = INT64_MIN;
	uint8_t x819 = UINT8_MAX;
	static volatile int8_t x820 = -22;
	volatile uint64_t t116 = 19481335937LLU;

    t116 = ((x817*x818)>>(x819<=x820));

    if (t116 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x825 = UINT64_MAX;
	volatile int16_t x826 = -1;
	int8_t x827 = -1;
	int64_t x828 = INT64_MAX;
	static uint64_t t117 = 206LLU;

    t117 = ((x825*x826)>>(x827<=x828));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x834 = INT8_MIN;
	volatile uint8_t x835 = UINT8_MAX;
	static volatile uint32_t t118 = 181717548U;

    t118 = ((x833*x834)>>(x835<=x836));

    if (t118 != 2147481792U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x837 = 1U;
	int16_t x839 = 1;
	uint16_t x840 = 158U;
	volatile int64_t t119 = 11396415LL;

    t119 = ((x837*x838)>>(x839<=x840));

    if (t119 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x841 = INT16_MIN;
	volatile int16_t x842 = -1;
	int32_t t120 = -1;

    t120 = ((x841*x842)>>(x843<=x844));

    if (t120 != 16384) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x849 = 0U;
	int32_t x850 = -42;
	volatile uint64_t x852 = 65666185LLU;
	volatile int32_t t121 = -18;

    t121 = ((x849*x850)>>(x851<=x852));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x853 = INT8_MIN;
	int8_t x854 = INT8_MIN;
	int8_t x855 = INT8_MIN;
	static int16_t x856 = INT16_MIN;
	int32_t t122 = 48642;

    t122 = ((x853*x854)>>(x855<=x856));

    if (t122 != 16384) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x858 = INT8_MAX;
	int8_t x860 = INT8_MIN;
	uint64_t t123 = 4184726307977151831LLU;

    t123 = ((x857*x858)>>(x859<=x860));

    if (t123 != 8660257LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x861 = INT16_MAX;
	uint16_t x862 = 460U;
	int64_t x864 = INT64_MIN;

    t124 = ((x861*x862)>>(x863<=x864));

    if (t124 != 15072820) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x865 = 13U;
	int16_t x867 = -954;
	static volatile int64_t x868 = 0LL;
	uint32_t t125 = 53151U;

    t125 = ((x865*x866)>>(x867<=x868));

    if (t125 != 24782706U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x869 = 2464U;
	uint16_t x870 = 1U;
	uint32_t x872 = 120U;
	volatile int32_t t126 = 1;

    t126 = ((x869*x870)>>(x871<=x872));

    if (t126 != 1232) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x878 = INT32_MAX;
	static uint16_t x879 = UINT16_MAX;
	volatile int8_t x880 = 1;
	volatile uint32_t t127 = 3178U;

    t127 = ((x877*x878)>>(x879<=x880));

    if (t127 != 2129377985U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x881 = -4907322LL;
	int32_t x882 = INT32_MIN;
	static int8_t x883 = 3;
	uint16_t x884 = 12436U;
	static volatile int64_t t128 = -7334471727LL;

    t128 = ((x881*x882)>>(x883<=x884));

    if (t128 != 5269196875235328LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x889 = 208U;
	volatile int16_t x890 = INT16_MIN;
	volatile int64_t x891 = -604761373846LL;
	int8_t x892 = 1;
	volatile uint32_t t129 = 39U;

    t129 = ((x889*x890)>>(x891<=x892));

    if (t129 != 2144075776U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x897 = -1;
	volatile int32_t x899 = INT32_MIN;
	uint16_t x900 = 14065U;
	volatile uint32_t t130 = 17442U;

    t130 = ((x897*x898)>>(x899<=x900));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x901 = INT16_MIN;
	static int16_t x902 = -251;
	static uint8_t x903 = 0U;
	uint64_t x904 = 273234526LLU;
	int32_t t131 = 0;

    t131 = ((x901*x902)>>(x903<=x904));

    if (t131 != 4112384) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x905 = -1LL;
	uint64_t x906 = UINT64_MAX;
	int8_t x907 = INT8_MAX;
	int32_t x908 = INT32_MIN;
	uint64_t t132 = 1LLU;

    t132 = ((x905*x906)>>(x907<=x908));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x925 = INT16_MIN;
	int16_t x926 = -1;
	int16_t x927 = INT16_MAX;
	int32_t t133 = -116;

    t133 = ((x925*x926)>>(x927<=x928));

    if (t133 != 32768) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x933 = 2644239287220385LL;
	static volatile int8_t x935 = INT8_MIN;
	int8_t x936 = INT8_MIN;

    t134 = ((x933*x934)>>(x935<=x936));

    if (t134 != 167909194738494447LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x945 = INT16_MIN;
	uint32_t x947 = 90953888U;
	uint8_t x948 = 0U;
	volatile int32_t t135 = -19291;

    t135 = ((x945*x946)>>(x947<=x948));

    if (t135 != 32768) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x949 = 819U;
	volatile uint32_t x950 = 2770353U;
	int16_t x951 = 12301;
	volatile uint16_t x952 = 31743U;
	uint32_t t136 = 736U;

    t136 = ((x949*x950)>>(x951<=x952));

    if (t136 != 1134459553U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x953 = 991526322LLU;
	uint16_t x954 = 12565U;
	uint64_t x955 = UINT64_MAX;
	int8_t x956 = INT8_MAX;
	volatile uint64_t t137 = 74438LLU;

    t137 = ((x953*x954)>>(x955<=x956));

    if (t137 != 12458528235930LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x957 = -128908563;
	int32_t x959 = INT32_MIN;
	int32_t x960 = -1;

    t138 = ((x957*x958)>>(x959<=x960));

    if (t138 != 64454281) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x973 = -1LL;
	int16_t x974 = 0;
	uint64_t x975 = UINT64_MAX;
	static int32_t x976 = -1;
	int64_t t139 = -246LL;

    t139 = ((x973*x974)>>(x975<=x976));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x985 = 58LLU;
	int32_t x986 = -65318756;
	volatile int8_t x987 = INT8_MIN;
	volatile int32_t x988 = 914497028;
	uint64_t t140 = 19LLU;

    t140 = ((x985*x986)>>(x987<=x988));

    if (t140 != 9223372034960531884LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x989 = -1;
	volatile uint64_t x990 = 58904504LLU;
	uint16_t x991 = 1U;
	int32_t x992 = 3621593;
	volatile uint64_t t141 = 13215LLU;

    t141 = ((x989*x990)>>(x991<=x992));

    if (t141 != 9223372036825323556LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x1001 = -1;
	int16_t x1003 = -1;
	static int8_t x1004 = INT8_MIN;
	volatile int32_t t142 = -82297;

    t142 = ((x1001*x1002)>>(x1003<=x1004));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1005 = 228U;
	volatile uint64_t x1006 = 3595745023LLU;
	int16_t x1007 = INT16_MIN;
	volatile int8_t x1008 = INT8_MAX;
	static volatile uint64_t t143 = 483LLU;

    t143 = ((x1005*x1006)>>(x1007<=x1008));

    if (t143 != 409914932622LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x1009 = 0;
	uint8_t x1011 = 10U;
	static int64_t x1012 = INT64_MAX;
	volatile int32_t t144 = -1816;

    t144 = ((x1009*x1010)>>(x1011<=x1012));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x1013 = 0U;
	int16_t x1015 = 26;
	volatile int16_t x1016 = 308;
	uint32_t t145 = 28421U;

    t145 = ((x1013*x1014)>>(x1015<=x1016));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1034 = 1LLU;
	int8_t x1035 = INT8_MIN;
	volatile uint16_t x1036 = 548U;

    t146 = ((x1033*x1034)>>(x1035<=x1036));

    if (t146 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x1039 = 46U;
	static volatile int64_t x1040 = -33372766177102LL;

    t147 = ((x1037*x1038)>>(x1039<=x1040));

    if (t147 != 62070U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1041 = -1;
	volatile uint64_t x1042 = UINT64_MAX;
	int8_t x1044 = INT8_MIN;

    t148 = ((x1041*x1042)>>(x1043<=x1044));

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1045 = 5003979385267392LLU;
	int8_t x1047 = 0;
	volatile uint64_t t149 = 1709LLU;

    t149 = ((x1045*x1046)>>(x1047<=x1048));

    if (t149 != 1025150083472031744LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1049 = 481929LLU;
	static uint64_t x1050 = 197204318331969186LLU;
	uint64_t x1051 = UINT64_MAX;
	volatile uint64_t t150 = 93093598069LLU;

    t150 = ((x1049*x1050)>>(x1051<=x1052));

    if (t150 != 854461655967914162LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1065 = UINT32_MAX;
	int32_t x1066 = -1;
	uint8_t x1067 = 0U;

    t151 = ((x1065*x1066)>>(x1067<=x1068));

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x1073 = UINT8_MAX;
	static uint16_t x1074 = UINT16_MAX;
	int32_t x1075 = INT32_MIN;
	static int8_t x1076 = INT8_MIN;
	static volatile int32_t t152 = 2023487;

    t152 = ((x1073*x1074)>>(x1075<=x1076));

    if (t152 != 8355712) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1081 = 522948960U;
	static int8_t x1083 = INT8_MIN;
	int16_t x1084 = INT16_MIN;
	volatile uint64_t t153 = 0LLU;

    t153 = ((x1081*x1082)>>(x1083<=x1084));

    if (t153 != 366064272000LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1085 = -1;
	uint16_t x1086 = 0U;
	volatile int8_t x1087 = -2;
	volatile int32_t x1088 = INT32_MAX;
	volatile int32_t t154 = -243;

    t154 = ((x1085*x1086)>>(x1087<=x1088));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1089 = INT16_MAX;
	uint32_t x1090 = UINT32_MAX;
	volatile int64_t x1091 = 15LL;
	static volatile int16_t x1092 = INT16_MIN;

    t155 = ((x1089*x1090)>>(x1091<=x1092));

    if (t155 != 4294934529U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x1097 = 1U;
	uint32_t x1098 = 735478U;
	int32_t x1099 = INT32_MIN;
	static uint64_t x1100 = 35946LLU;
	uint32_t t156 = 246503U;

    t156 = ((x1097*x1098)>>(x1099<=x1100));

    if (t156 != 735478U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x1101 = 0U;
	int64_t x1102 = INT64_MIN;
	static int8_t x1103 = INT8_MAX;
	int64_t x1104 = 15LL;
	int64_t t157 = 604LL;

    t157 = ((x1101*x1102)>>(x1103<=x1104));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x1105 = UINT16_MAX;
	static int8_t x1106 = 0;
	uint16_t x1107 = 0U;
	int16_t x1108 = -7439;
	int32_t t158 = 228;

    t158 = ((x1105*x1106)>>(x1107<=x1108));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1109 = 641U;
	uint32_t t159 = 126713U;

    t159 = ((x1109*x1110)>>(x1111<=x1112));

    if (t159 != 1073741824U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x1117 = 1U;
	int32_t x1119 = -1;
	static uint32_t x1120 = 19106U;
	volatile int32_t t160 = -2;

    t160 = ((x1117*x1118)>>(x1119<=x1120));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x1122 = 1;
	int32_t x1123 = 0;
	int32_t x1124 = 73;
	int32_t t161 = 0;

    t161 = ((x1121*x1122)>>(x1123<=x1124));

    if (t161 != 1869236) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1137 = UINT8_MAX;
	int32_t x1138 = 919081;
	int64_t x1139 = INT64_MIN;
	volatile int64_t x1140 = INT64_MIN;

    t162 = ((x1137*x1138)>>(x1139<=x1140));

    if (t162 != 117182827) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1141 = -2;
	static volatile int16_t x1142 = -1;
	volatile int16_t x1143 = INT16_MIN;
	volatile int8_t x1144 = -1;

    t163 = ((x1141*x1142)>>(x1143<=x1144));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1145 = 6;
	uint8_t x1146 = 1U;
	uint8_t x1148 = 51U;
	int32_t t164 = 123183501;

    t164 = ((x1145*x1146)>>(x1147<=x1148));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1153 = INT64_MAX;
	static uint64_t x1154 = 36181535LLU;
	int32_t x1155 = -31115559;
	int8_t x1156 = -1;
	uint64_t t165 = 95284LLU;

    t165 = ((x1153*x1154)>>(x1155<=x1156));

    if (t165 != 4611686018409297136LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1157 = -17564181582818LL;
	static int32_t x1158 = -236;
	volatile int64_t x1160 = -8LL;
	volatile int64_t t166 = 114099663422093805LL;

    t166 = ((x1157*x1158)>>(x1159<=x1160));

    if (t166 != 2072573426772524LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1161 = 1U;
	uint16_t x1162 = UINT16_MAX;
	uint64_t x1163 = 230330257LLU;
	static int8_t x1164 = -1;

    t167 = ((x1161*x1162)>>(x1163<=x1164));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1165 = UINT64_MAX;
	int8_t x1166 = 3;
	int32_t x1167 = INT32_MIN;
	int16_t x1168 = INT16_MAX;
	volatile uint64_t t168 = 166LLU;

    t168 = ((x1165*x1166)>>(x1167<=x1168));

    if (t168 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1169 = -1;
	static uint64_t x1171 = UINT64_MAX;
	static int8_t x1172 = INT8_MIN;

    t169 = ((x1169*x1170)>>(x1171<=x1172));

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1173 = 0U;
	int32_t t170 = 52341986;

    t170 = ((x1173*x1174)>>(x1175<=x1176));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1177 = UINT8_MAX;
	int32_t x1179 = 0;
	int32_t x1180 = -169721116;
	int32_t t171 = 537008;

    t171 = ((x1177*x1178)>>(x1179<=x1180));

    if (t171 != 765) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1181 = INT8_MIN;
	uint64_t x1182 = 5639562LLU;
	int64_t x1183 = INT64_MIN;
	uint8_t x1184 = 60U;
	uint64_t t172 = 16658550LLU;

    t172 = ((x1181*x1182)>>(x1183<=x1184));

    if (t172 != 9223372036493843840LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1189 = 1;
	int16_t x1191 = 29;
	uint16_t x1192 = 145U;
	uint64_t t173 = 5781311947LLU;

    t173 = ((x1189*x1190)>>(x1191<=x1192));

    if (t173 != 402611777LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1217 = -1;
	int8_t x1218 = -1;
	static uint16_t x1219 = 33U;
	int32_t x1220 = -1;
	volatile int32_t t174 = -932;

    t174 = ((x1217*x1218)>>(x1219<=x1220));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1225 = -29;
	volatile uint64_t x1226 = 7LLU;
	int8_t x1227 = -1;
	volatile int64_t x1228 = -1356050631684016LL;
	uint64_t t175 = 2183920657179143LLU;

    t175 = ((x1225*x1226)>>(x1227<=x1228));

    if (t175 != 18446744073709551413LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1230 = 1397205827U;
	volatile int16_t x1231 = -2009;
	int64_t x1232 = INT64_MIN;
	volatile uint32_t t176 = 3082909U;

    t176 = ((x1229*x1230)>>(x1231<=x1232));

    if (t176 != 1476089021U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1241 = -1;
	uint64_t x1242 = 348773745871236LLU;
	int8_t x1243 = INT8_MAX;
	uint64_t t177 = 15760LLU;

    t177 = ((x1241*x1242)>>(x1243<=x1244));

    if (t177 != 9223197649981840190LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1246 = UINT64_MAX;
	int8_t x1247 = 12;
	uint32_t x1248 = 22853U;

    t178 = ((x1245*x1246)>>(x1247<=x1248));

    if (t178 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1253 = UINT64_MAX;
	static uint32_t x1254 = UINT32_MAX;
	static uint64_t x1255 = 27478937377LLU;
	static int32_t x1256 = 836815;

    t179 = ((x1253*x1254)>>(x1255<=x1256));

    if (t179 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1257 = 4U;
	volatile uint64_t x1259 = UINT64_MAX;
	int32_t t180 = -7;

    t180 = ((x1257*x1258)>>(x1259<=x1260));

    if (t180 != 1020) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1269 = -71;
	int8_t x1270 = -1;
	int16_t x1271 = -1;
	uint32_t x1272 = 5202U;
	int32_t t181 = -173;

    t181 = ((x1269*x1270)>>(x1271<=x1272));

    if (t181 != 71) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1282 = INT32_MAX;
	volatile int8_t x1284 = INT8_MIN;
	static volatile int64_t t182 = 37820220423LL;

    t182 = ((x1281*x1282)>>(x1283<=x1284));

    if (t182 != 122741575327932LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x1285 = INT8_MAX;
	int16_t x1286 = INT16_MAX;
	static uint64_t x1287 = UINT64_MAX;
	volatile int32_t t183 = 0;

    t183 = ((x1285*x1286)>>(x1287<=x1288));

    if (t183 != 4161409) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1289 = 596301628345LLU;
	volatile uint16_t x1290 = UINT16_MAX;
	int16_t x1291 = INT16_MIN;
	static int8_t x1292 = 0;
	volatile uint64_t t184 = 320771697LLU;

    t184 = ((x1289*x1290)>>(x1291<=x1292));

    if (t184 != 19539313606794787LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1293 = 0U;
	static uint8_t x1294 = 0U;
	volatile uint64_t x1295 = UINT64_MAX;
	static uint64_t x1296 = UINT64_MAX;
	static volatile int32_t t185 = 13734370;

    t185 = ((x1293*x1294)>>(x1295<=x1296));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x1299 = 1U;
	int64_t x1300 = INT64_MIN;

    t186 = ((x1297*x1298)>>(x1299<=x1300));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1317 = 409350246461LLU;
	int16_t x1318 = INT16_MIN;
	int32_t x1319 = -1;
	int32_t x1320 = -28216084;
	volatile uint64_t t187 = 83146075LLU;

    t187 = ((x1317*x1318)>>(x1319<=x1320));

    if (t187 != 18433330484833517568LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1329 = 1374218943LLU;
	static int16_t x1330 = 82;
	static volatile int16_t x1332 = INT16_MAX;

    t188 = ((x1329*x1330)>>(x1331<=x1332));

    if (t188 != 56342976663LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x1333 = 51U;
	int16_t x1334 = 6720;
	static volatile int16_t x1335 = 5188;
	int64_t x1336 = 12644344144509LL;
	static volatile int32_t t189 = -20564022;

    t189 = ((x1333*x1334)>>(x1335<=x1336));

    if (t189 != 171360) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1341 = -563078LL;
	int32_t x1342 = -18010344;
	uint32_t x1343 = 14499996U;

    t190 = ((x1341*x1342)>>(x1343<=x1344));

    if (t190 != 10141228478832LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1345 = 439U;
	static int32_t x1346 = INT32_MAX;
	uint8_t x1347 = 0U;
	static uint8_t x1348 = 1U;
	static volatile uint32_t t191 = 348246827U;

    t191 = ((x1345*x1346)>>(x1347<=x1348));

    if (t191 != 1073741604U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1357 = INT32_MIN;
	int8_t x1358 = 0;
	volatile int32_t x1360 = 126677;

    t192 = ((x1357*x1358)>>(x1359<=x1360));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1361 = 31;
	uint32_t x1362 = 24877U;
	static uint32_t x1363 = UINT32_MAX;
	static int32_t x1364 = 615797;

    t193 = ((x1361*x1362)>>(x1363<=x1364));

    if (t193 != 771187U) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x1365 = 0U;
	volatile int8_t x1366 = -1;
	uint32_t x1367 = 0U;
	static int8_t x1368 = 1;
	int32_t t194 = 6;

    t194 = ((x1365*x1366)>>(x1367<=x1368));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1373 = INT16_MIN;
	int16_t x1375 = 1994;
	int16_t x1376 = 0;
	volatile uint64_t t195 = 4105465604345918981LLU;

    t195 = ((x1373*x1374)>>(x1375<=x1376));

    if (t195 != 18446744050686394368LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1383 = INT64_MAX;
	int8_t x1384 = INT8_MAX;
	volatile uint32_t t196 = 7531377U;

    t196 = ((x1381*x1382)>>(x1383<=x1384));

    if (t196 != 2926854U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1393 = 4U;
	int16_t x1394 = 71;
	uint8_t x1395 = UINT8_MAX;
	volatile uint16_t x1396 = 537U;
	int32_t t197 = 16606518;

    t197 = ((x1393*x1394)>>(x1395<=x1396));

    if (t197 != 142) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1397 = 2113777754395923LL;
	static int16_t x1399 = INT16_MIN;
	volatile uint64_t x1400 = UINT64_MAX;
	static volatile int64_t t198 = -279231985021112LL;

    t198 = ((x1397*x1398)>>(x1399<=x1400));

    if (t198 != 2113777754395923LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x1401 = INT32_MIN;
	uint64_t x1402 = UINT64_MAX;
	uint32_t x1404 = 91U;
	volatile uint64_t t199 = 25616766LLU;

    t199 = ((x1401*x1402)>>(x1403<=x1404));

    if (t199 != 1073741824LLU) { NG(); } else { ; }
	
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

