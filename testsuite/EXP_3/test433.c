
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
volatile uint8_t x26 = 80U;
uint16_t x27 = 242U;
int32_t x45 = INT32_MIN;
volatile int8_t x51 = INT8_MIN;
static volatile int8_t x60 = 1;
int64_t x64 = -217013894675LL;
uint32_t x68 = 52U;
int64_t t11 = -114260560LL;
int32_t t13 = 15;
uint32_t x120 = 376183672U;
int32_t t17 = 3148073;
int64_t x130 = -3106LL;
static volatile uint64_t t18 = 1011545215818LLU;
static int8_t x141 = -1;
int64_t t19 = 40902300853290LL;
uint64_t t21 = UINT64_MAX;
int32_t x158 = -2;
volatile int32_t x159 = INT32_MIN;
volatile int64_t t22 = -2132071498321LL;
uint8_t x170 = 12U;
int32_t x174 = INT32_MIN;
int32_t x182 = -1;
uint16_t x204 = 13U;
uint16_t x219 = UINT16_MAX;
int64_t x220 = 7129321519LL;
uint32_t x221 = 4174744U;
static int16_t x229 = -1;
uint32_t t35 = 24237U;
int8_t x237 = 2;
uint64_t t37 = 820409262LLU;
volatile uint16_t x246 = UINT16_MAX;
int32_t t38 = 1741250;
uint32_t x278 = UINT32_MAX;
uint16_t x279 = 46U;
int32_t x280 = 0;
uint64_t x290 = UINT64_MAX;
int32_t x291 = -1;
volatile uint64_t x309 = UINT64_MAX;
uint32_t x318 = 30958U;
uint16_t x319 = 77U;
static int16_t x330 = INT16_MIN;
volatile uint8_t x332 = 4U;
int8_t x333 = -1;
static volatile uint16_t x336 = UINT16_MAX;
uint8_t x338 = 7U;
static int16_t x339 = INT16_MIN;
uint64_t x341 = 8427414527LLU;
uint32_t x342 = 29664852U;
volatile uint64_t t51 = 635LLU;
uint32_t x349 = UINT32_MAX;
int32_t x359 = -1;
int64_t x360 = -183410994LL;
int64_t t53 = -42221372352883LL;
static uint16_t x370 = 195U;
static uint8_t x373 = 118U;
int16_t x376 = 2483;
volatile int64_t x389 = 1805734638352LL;
volatile int64_t t57 = -133192910LL;
volatile int8_t x402 = -1;
int16_t x411 = -1;
int8_t x412 = INT8_MAX;
int64_t x413 = INT64_MIN;
int16_t x439 = INT16_MIN;
volatile uint32_t t62 = UINT32_MAX;
static int64_t x450 = -1LL;
static uint16_t x452 = UINT16_MAX;
int64_t t64 = -13549397538641LL;
static int16_t x457 = -1452;
int64_t x462 = -6LL;
uint16_t x484 = 6049U;
int8_t x508 = 0;
uint8_t x509 = 3U;
static uint8_t x510 = 10U;
int16_t x511 = INT16_MIN;
int64_t x512 = -236826048621179LL;
int8_t x515 = -1;
volatile uint8_t x528 = 73U;
int32_t x566 = -85;
int32_t x587 = INT32_MIN;
volatile int8_t x593 = INT8_MIN;
volatile uint32_t x596 = 265195195U;
int16_t x602 = INT16_MIN;
static uint32_t x614 = 55779U;
volatile uint16_t x626 = 3U;
int32_t x627 = 4034978;
volatile int32_t t94 = -258929519;
static uint16_t x667 = 95U;
uint64_t t96 = 3143318LLU;
static volatile int32_t x685 = 0;
static volatile int16_t x690 = -50;
volatile uint64_t t99 = 4160894237843488LLU;
uint64_t x701 = UINT64_MAX;
uint16_t x703 = 14U;
volatile int8_t x704 = INT8_MIN;
int16_t x708 = -1;
static volatile int64_t t103 = -253744LL;
uint16_t x713 = 13U;
uint32_t x718 = UINT32_MAX;
uint32_t x729 = 5324U;
int16_t x731 = INT16_MIN;
int8_t x737 = INT8_MIN;
uint64_t t107 = 254733LLU;
static uint16_t x749 = UINT16_MAX;
int64_t t109 = 272420739LL;
uint8_t x767 = 47U;
int16_t x772 = -1;
volatile uint32_t t112 = 197924268U;
volatile int32_t x784 = -1;
uint64_t t114 = 125987204LLU;
uint16_t x793 = UINT16_MAX;
uint64_t x794 = 456620011709LLU;
volatile uint64_t x797 = UINT64_MAX;
int64_t x800 = -1LL;
uint16_t x805 = UINT16_MAX;
int64_t x807 = -2461258755191LL;
static int8_t x811 = -1;
volatile uint32_t t118 = 33716U;
volatile uint16_t x813 = 1U;
uint8_t x816 = 2U;
int8_t x818 = INT8_MIN;
volatile int32_t t120 = 585;
int16_t x823 = -7;
volatile uint64_t x831 = 421789196895LLU;
static int64_t x832 = INT64_MAX;
uint32_t x840 = 16U;
volatile uint64_t x850 = UINT64_MAX;
int64_t t127 = -15457300294709LL;
uint32_t x862 = 531391U;
volatile uint64_t t130 = 66010854LLU;
int16_t x882 = -1;
volatile uint32_t t135 = 5148U;
static uint32_t x911 = UINT32_MAX;
volatile int32_t t141 = -7027;
int32_t t142 = 37819935;
int64_t x972 = -748554458LL;
uint16_t x986 = UINT16_MAX;
static int32_t x1001 = -1;
int32_t x1003 = 559858;
uint64_t t147 = 24959158294290LLU;
int64_t x1041 = 1788LL;
int32_t x1042 = INT32_MIN;
static uint32_t x1045 = 38U;
int64_t x1047 = INT64_MIN;
volatile uint8_t x1048 = 1U;
static uint64_t t154 = 25587485064416LLU;
uint64_t x1059 = 107008840117751LLU;
int64_t x1076 = 9942307895LL;
static volatile int64_t t158 = 2791112LL;
int16_t x1099 = -331;
static volatile uint64_t t161 = 20813LLU;
int8_t x1111 = -1;
int16_t x1115 = -6367;
uint64_t x1121 = 13348004486LLU;
uint64_t x1138 = UINT64_MAX;
static uint64_t x1140 = 36299612350411056LLU;
volatile uint64_t t166 = 571LLU;
uint64_t x1141 = 52580759077466456LLU;
uint64_t t167 = 420111612754LLU;
volatile int8_t x1156 = -1;
volatile int32_t t168 = 939;
volatile int64_t t171 = -334710504875LL;
int8_t x1189 = INT8_MIN;
volatile int32_t x1193 = -1;
int32_t x1195 = 1318;
int64_t x1207 = 215174664LL;
static uint64_t t177 = 6523889876LLU;
int64_t x1234 = 44066LL;
volatile int64_t x1238 = -1LL;
volatile uint64_t t179 = 12LLU;
static uint64_t x1246 = UINT64_MAX;
volatile uint64_t t180 = UINT64_MAX;
uint16_t x1249 = 1U;
int16_t x1261 = 9;
volatile uint64_t t182 = 1909611600LLU;
static int32_t x1282 = -1;
static int8_t x1284 = INT8_MIN;
int32_t t185 = -932;
static int16_t x1290 = 253;
volatile int64_t t187 = 13833279347951LL;
static int32_t x1313 = INT32_MAX;
volatile int8_t x1315 = INT8_MIN;
static int8_t x1326 = INT8_MIN;
uint32_t x1334 = UINT32_MAX;
volatile int32_t t193 = -104;
int32_t x1357 = INT32_MIN;
uint32_t x1358 = 1665441612U;
int64_t t196 = -1LL;
int8_t x1379 = INT8_MIN;
uint32_t x1382 = 1684U;
volatile uint16_t x1383 = 0U;


void f0(void) {
    	static uint64_t x6 = UINT64_MAX;
	int32_t x7 = 362564;
	volatile uint32_t x8 = UINT32_MAX;
	volatile uint64_t t0 = 1241141LLU;

    t0 = ((x5*x6)|(x7*x8));

    if (t0 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x13 = -1;
	volatile int32_t x14 = -1;
	uint16_t x15 = 60U;
	volatile int8_t x16 = 1;
	int32_t t1 = 0;

    t1 = ((x13*x14)|(x15*x16));

    if (t1 != 61) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = 2424827LLU;
	uint16_t x18 = UINT16_MAX;
	static uint64_t x19 = 1105321390151LLU;
	static uint64_t x20 = 595LLU;
	uint64_t t2 = 2795661857266492LLU;

    t2 = ((x17*x18)|(x19*x20));

    if (t2 != 657666865067269LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x25 = INT16_MIN;
	volatile uint8_t x28 = UINT8_MAX;
	volatile int32_t t3 = 70873252;

    t3 = ((x25*x26)|(x27*x28));

    if (t3 != -2559730) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x46 = -1LL;
	volatile int16_t x47 = INT16_MAX;
	uint16_t x48 = UINT16_MAX;
	int64_t t4 = -49LL;

    t4 = ((x45*x46)|(x47*x48));

    if (t4 != 4294868993LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x49 = 402LL;
	int8_t x50 = -2;
	uint8_t x52 = 18U;
	static int64_t t5 = -4807164LL;

    t5 = ((x49*x50)|(x51*x52));

    if (t5 != -36LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x53 = 512U;
	uint32_t x54 = 70212379U;
	uint64_t x55 = 12LLU;
	uint16_t x56 = 230U;
	volatile uint64_t t6 = 4288093579052LLU;

    t6 = ((x53*x54)|(x55*x56));

    if (t6 != 1589001928LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x57 = 20U;
	volatile int64_t x58 = -102218382131LL;
	uint8_t x59 = UINT8_MAX;
	volatile int64_t t7 = 2022240547LL;

    t7 = ((x57*x58)|(x59*x60));

    if (t7 != -2044367642369LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x61 = 298854LLU;
	uint8_t x62 = 9U;
	volatile uint64_t x63 = 6541557499536LLU;
	uint64_t t8 = 9185216156676006LLU;

    t8 = ((x61*x62)|(x63*x64));

    if (t8 != 15660209777810582486LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x65 = -1;
	volatile uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MIN;
	volatile uint64_t t9 = 298LLU;

    t9 = ((x65*x66)|(x67*x68));

    if (t9 != 4294960641LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x69 = INT64_MIN;
	static uint64_t x70 = 95652745853864LLU;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = 123U;
	uint64_t t10 = 276032LLU;

    t10 = ((x69*x70)|(x71*x72));

    if (t10 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x77 = 3;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -1;
	volatile int64_t x80 = -1LL;

    t11 = ((x77*x78)|(x79*x80));

    if (t11 != -383LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x89 = INT8_MIN;
	uint16_t x90 = 6856U;
	volatile int8_t x91 = 31;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t12 = -23640;

    t12 = ((x89*x90)|(x91*x92));

    if (t12 != -877568) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x93 = 0U;
	static int16_t x94 = INT16_MIN;
	int16_t x95 = -1;
	int16_t x96 = INT16_MIN;

    t13 = ((x93*x94)|(x95*x96));

    if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x109 = 1U;
	int16_t x110 = -1;
	static int8_t x111 = INT8_MIN;
	static uint16_t x112 = UINT16_MAX;
	int32_t t14 = 189;

    t14 = ((x109*x110)|(x111*x112));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x113 = INT32_MIN;
	static int64_t x114 = -1LL;
	int8_t x115 = INT8_MIN;
	uint8_t x116 = 3U;
	int64_t t15 = -1LL;

    t15 = ((x113*x114)|(x115*x116));

    if (t15 != -384LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x117 = -2363;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 30850U;
	volatile uint32_t t16 = 356U;

    t16 = ((x117*x118)|(x119*x120));

    if (t16 != 266318576U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MAX;
	int16_t x123 = -1;
	int16_t x124 = 322;

    t17 = ((x121*x122)|(x123*x124));

    if (t17 != -322) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x129 = -1;
	uint64_t x131 = UINT64_MAX;
	static uint64_t x132 = 88742499602584241LLU;

    t18 = ((x129*x130)|(x131*x132));

    if (t18 != 18358001574106967407LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x142 = INT16_MAX;
	uint32_t x143 = 2102U;
	int64_t x144 = 1384545303627LL;

    t19 = ((x141*x142)|(x143*x144));

    if (t19 != -28717LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x145 = -1;
	uint16_t x146 = 3031U;
	int8_t x147 = -1;
	static volatile uint8_t x148 = 31U;
	volatile int32_t t20 = 28838552;

    t20 = ((x145*x146)|(x147*x148));

    if (t20 != -23) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x149 = -1;
	uint8_t x150 = 3U;
	static volatile int16_t x151 = 7017;
	volatile uint64_t x152 = 165668518843430LLU;

    t21 = ((x149*x150)|(x151*x152));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile int64_t x160 = -1LL;

    t22 = ((x157*x158)|(x159*x160));

    if (t22 != -131070LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x161 = 394105U;
	static int16_t x162 = -15995;
	static uint32_t x163 = 12479U;
	volatile uint32_t x164 = 1U;
	uint32_t t23 = 19511U;

    t23 = ((x161*x162)|(x163*x164));

    if (t23 != 2286237439U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x169 = -1;
	static int32_t x171 = INT32_MAX;
	int8_t x172 = -1;
	volatile int32_t t24 = -1270;

    t24 = ((x169*x170)|(x171*x172));

    if (t24 != -11) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x173 = 115431U;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 4482606482295565LLU;
	static uint64_t t25 = 49458508805178LLU;

    t25 = ((x173*x174)|(x175*x176));

    if (t25 != 17039996433622630400LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x177 = -12961;
	static uint32_t x178 = 5086U;
	volatile int8_t x179 = 0;
	int16_t x180 = -1;
	uint32_t t26 = 5135U;

    t26 = ((x177*x178)|(x179*x180));

    if (t26 != 4229047650U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x181 = INT16_MIN;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	uint32_t t27 = 94593153U;

    t27 = ((x181*x182)|(x183*x184));

    if (t27 != 32896U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x197 = INT16_MAX;
	uint16_t x198 = UINT16_MAX;
	volatile uint32_t x199 = 109444011U;
	int16_t x200 = INT16_MAX;
	volatile uint32_t t28 = 10U;

    t28 = ((x197*x198)|(x199*x200));

    if (t28 != 4294935637U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x201 = 39657727791138947LLU;
	int16_t x202 = INT16_MAX;
	static int8_t x203 = INT8_MIN;
	static uint64_t t29 = 17137138632461LLU;

    t29 = ((x201*x202)|(x203*x204));

    if (t29 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x205 = UINT8_MAX;
	static volatile uint16_t x206 = UINT16_MAX;
	static uint64_t x207 = UINT64_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile uint64_t t30 = 5399112875982492743LLU;

    t30 = ((x205*x206)|(x207*x208));

    if (t30 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x217 = INT16_MIN;
	uint16_t x218 = UINT16_MAX;
	volatile int64_t t31 = -18193LL;

    t31 = ((x217*x218)|(x219*x220));

    if (t31 != -1489063983LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x222 = -81015890810LL;
	uint8_t x223 = 6U;
	static volatile int64_t x224 = -1LL;
	int64_t t32 = -812522746157LL;

    t32 = ((x221*x222)|(x223*x224));

    if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x225 = INT8_MIN;
	static int16_t x226 = 9569;
	int16_t x227 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t33 = 773893036LLU;

    t33 = ((x225*x226)|(x227*x228));

    if (t33 != 18446744073708359552LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x230 = UINT64_MAX;
	int8_t x231 = 4;
	volatile int64_t x232 = -218386663534075420LL;
	volatile uint64_t t34 = 26709395LLU;

    t34 = ((x229*x230)|(x231*x232));

    if (t34 != 17573197419573249937LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x233 = 20U;
	static volatile int16_t x234 = INT16_MAX;
	uint32_t x235 = 10237U;
	uint32_t x236 = 668U;

    t35 = ((x233*x234)|(x235*x236));

    if (t35 != 6946796U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x238 = 1666307;
	static uint8_t x239 = UINT8_MAX;
	static int8_t x240 = -1;
	volatile int32_t t36 = 4340285;

    t36 = ((x237*x238)|(x239*x240));

    if (t36 != -249) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x241 = UINT16_MAX;
	static uint64_t x242 = 71034591LLU;
	int16_t x243 = INT16_MAX;
	int8_t x244 = -1;

    t37 = ((x241*x242)|(x243*x244));

    if (t37 != 18446744073709525281LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x245 = 9U;
	int16_t x247 = 902;
	int8_t x248 = INT8_MIN;

    t38 = ((x245*x246)|(x247*x248));

    if (t38 != -65545) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = 118458324LLU;
	uint64_t x251 = 1149984102211087632LLU;
	static int16_t x252 = -656;
	uint64_t t39 = 19LLU;

    t39 = ((x249*x250)|(x251*x252));

    if (t39 != 18446744069368223488LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x257 = UINT64_MAX;
	static int16_t x258 = INT16_MAX;
	uint8_t x259 = 106U;
	int8_t x260 = INT8_MIN;
	static uint64_t t40 = 117922LLU;

    t40 = ((x257*x258)|(x259*x260));

    if (t40 != 18446744073709538049LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x265 = INT16_MAX;
	volatile int32_t x266 = 1;
	uint8_t x267 = 26U;
	int16_t x268 = 349;
	static int32_t t41 = 3734;

    t41 = ((x265*x266)|(x267*x268));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x277 = 9455U;
	uint32_t t42 = 488U;

    t42 = ((x277*x278)|(x279*x280));

    if (t42 != 4294957841U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x281 = -4;
	uint16_t x282 = 171U;
	int16_t x283 = -849;
	int64_t x284 = -282145889LL;
	static volatile int64_t t43 = 144311060808092527LL;

    t43 = ((x281*x282)|(x283*x284));

    if (t43 != -523LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x289 = -1;
	volatile int32_t x292 = -1;
	uint64_t t44 = 13LLU;

    t44 = ((x289*x290)|(x291*x292));

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x305 = -2;
	volatile uint8_t x306 = 10U;
	volatile int16_t x307 = INT16_MIN;
	static uint32_t x308 = 36669U;
	uint32_t t45 = 46837688U;

    t45 = ((x305*x306)|(x307*x308));

    if (t45 != 4294967276U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x310 = -113LL;
	int16_t x311 = -1;
	int8_t x312 = INT8_MAX;
	static volatile uint64_t t46 = 3724312596275872853LLU;

    t46 = ((x309*x310)|(x311*x312));

    if (t46 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x317 = INT32_MIN;
	static uint16_t x320 = 1889U;
	volatile uint32_t t47 = 3071898U;

    t47 = ((x317*x318)|(x319*x320));

    if (t47 != 145453U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x329 = INT8_MIN;
	int8_t x331 = 6;
	int32_t t48 = -1528;

    t48 = ((x329*x330)|(x331*x332));

    if (t48 != 4194328) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x334 = -1;
	uint32_t x335 = 444194U;
	static volatile uint32_t t49 = 6473U;

    t49 = ((x333*x334)|(x335*x336));

    if (t49 != 3340450015U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x337 = 95U;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint32_t t50 = 25954208U;

    t50 = ((x337*x338)|(x339*x340));

    if (t50 != 33433U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x343 = UINT32_MAX;
	static int16_t x344 = INT16_MIN;

    t51 = ((x341*x342)|(x343*x344));

    if (t51 != 249998004686137772LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x350 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	static int64_t x352 = -1LL;
	volatile int64_t t52 = -14139194056LL;

    t52 = ((x349*x350)|(x351*x352));

    if (t52 != -65535LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = 112;

    t53 = ((x357*x358)|(x359*x360));

    if (t53 != 183431090LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x365 = 3;
	int8_t x366 = 0;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = -1;
	uint32_t t54 = 7228U;

    t54 = ((x365*x366)|(x367*x368));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x369 = -1924;
	volatile uint16_t x371 = 809U;
	int64_t x372 = -1LL;
	volatile int64_t t55 = -238LL;

    t55 = ((x369*x370)|(x371*x372));

    if (t55 != -265LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x374 = 941901544432LLU;
	uint32_t x375 = 456U;
	static volatile uint64_t t56 = 69234320442955LLU;

    t56 = ((x373*x374)|(x375*x376));

    if (t56 != 111144383375096LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x390 = INT16_MIN;
	static uint32_t x391 = UINT32_MAX;
	static uint16_t x392 = 16U;

    t57 = ((x389*x390)|(x391*x392));

    if (t57 != -59170308443078672LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x401 = -11;
	volatile int32_t x403 = 3750;
	static volatile int16_t x404 = 1;
	int32_t t58 = -23730094;

    t58 = ((x401*x402)|(x403*x404));

    if (t58 != 3759) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x405 = INT8_MAX;
	uint8_t x406 = 27U;
	volatile int16_t x407 = -1;
	static int32_t x408 = 2034688;
	int32_t t59 = 11;

    t59 = ((x405*x406)|(x407*x408));

    if (t59 != -2032283) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x409 = 141895U;
	static int8_t x410 = INT8_MIN;
	uint32_t t60 = 3966956U;

    t60 = ((x409*x410)|(x411*x412));

    if (t60 != 4294967169U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x414 = UINT64_MAX;
	uint32_t x415 = 198U;
	int16_t x416 = -5813;
	uint64_t t61 = 497241755LLU;

    t61 = ((x413*x414)|(x415*x416));

    if (t61 != 9223372041148592130LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x437 = 1;
	uint32_t x438 = UINT32_MAX;
	int32_t x440 = -46;

    t62 = ((x437*x438)|(x439*x440));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x445 = -1;
	static uint64_t x446 = 3LLU;
	static volatile int16_t x447 = INT16_MIN;
	static volatile int32_t x448 = -1;
	uint64_t t63 = 45810371187574LLU;

    t63 = ((x445*x446)|(x447*x448));

    if (t63 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x449 = UINT16_MAX;
	volatile int16_t x451 = INT16_MIN;

    t64 = ((x449*x450)|(x451*x452));

    if (t64 != -32767LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x458 = INT16_MIN;
	static uint32_t x459 = 298U;
	static int16_t x460 = INT16_MAX;
	volatile uint32_t t65 = 67291U;

    t65 = ((x457*x458)|(x459*x460));

    if (t65 != 47644374U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x461 = 63U;
	uint8_t x463 = 4U;
	uint16_t x464 = 235U;
	volatile int64_t t66 = -22500400LL;

    t66 = ((x461*x462)|(x463*x464));

    if (t66 != -82LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x473 = 119122072513225826LL;
	volatile int64_t x474 = -1LL;
	volatile int64_t x475 = -7171122538LL;
	static volatile int8_t x476 = -1;
	int64_t t67 = -866335977574480425LL;

    t67 = ((x473*x474)|(x475*x476));

    if (t67 != -119122070348038146LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x481 = UINT16_MAX;
	uint64_t x482 = 92LLU;
	uint8_t x483 = 74U;
	uint64_t t68 = 2947467LLU;

    t68 = ((x481*x482)|(x483*x484));

    if (t68 != 6291374LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x501 = INT16_MIN;
	uint8_t x502 = 7U;
	uint16_t x503 = 0U;
	uint32_t x504 = 24248573U;
	uint32_t t69 = 537595U;

    t69 = ((x501*x502)|(x503*x504));

    if (t69 != 4294737920U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x505 = -95;
	uint32_t x506 = 184146932U;
	static uint32_t x507 = UINT32_MAX;
	volatile uint32_t t70 = 3104982U;

    t70 = ((x505*x506)|(x507*x508));

    if (t70 != 3980877940U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t t71 = 3056621564798249LL;

    t71 = ((x509*x510)|(x511*x512));

    if (t71 != 7760315961218793502LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x513 = INT64_MAX;
	uint64_t x514 = 805149256LLU;
	volatile uint8_t x516 = 17U;
	uint64_t t72 = UINT64_MAX;

    t72 = ((x513*x514)|(x515*x516));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x521 = 18LLU;
	int32_t x522 = -1;
	int8_t x523 = INT8_MAX;
	int32_t x524 = -1;
	static volatile uint64_t t73 = 38285802320901588LLU;

    t73 = ((x521*x522)|(x523*x524));

    if (t73 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x525 = 41U;
	static volatile uint8_t x526 = 6U;
	static int16_t x527 = INT16_MAX;
	static volatile int32_t t74 = -75923;

    t74 = ((x525*x526)|(x527*x528));

    if (t74 != 2392055) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x529 = INT16_MAX;
	int8_t x530 = 0;
	uint64_t x531 = 1017607402688808LLU;
	uint64_t x532 = 248LLU;
	volatile uint64_t t75 = 2141201961LLU;

    t75 = ((x529*x530)|(x531*x532));

    if (t75 != 252366635866824384LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x533 = UINT32_MAX;
	uint32_t x534 = 1U;
	volatile uint32_t x535 = UINT32_MAX;
	uint16_t x536 = UINT16_MAX;
	static uint32_t t76 = UINT32_MAX;

    t76 = ((x533*x534)|(x535*x536));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x537 = INT8_MAX;
	int8_t x538 = 7;
	uint8_t x539 = 2U;
	int16_t x540 = 4080;
	volatile int32_t t77 = 509348;

    t77 = ((x537*x538)|(x539*x540));

    if (t77 != 8185) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x557 = 383LLU;
	int16_t x558 = INT16_MAX;
	uint16_t x559 = 260U;
	volatile uint32_t x560 = 69800733U;
	uint64_t t78 = 1LLU;

    t78 = ((x557*x558)|(x559*x560));

    if (t78 != 968851445LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	int16_t x567 = INT16_MIN;
	int16_t x568 = 13;
	volatile uint32_t t79 = 16298336U;

    t79 = ((x565*x566)|(x567*x568));

    if (t79 != 4294541397U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x569 = 710953LL;
	int32_t x570 = INT32_MAX;
	volatile int16_t x571 = INT16_MIN;
	uint8_t x572 = 0U;
	int64_t t80 = -1LL;

    t80 = ((x569*x570)|(x571*x572));

    if (t80 != 1526759941285591LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x573 = 3LLU;
	uint16_t x574 = 6992U;
	uint64_t x575 = 20621283689601828LLU;
	static int16_t x576 = INT16_MIN;
	volatile uint64_t t81 = 230283LLU;

    t81 = ((x573*x574)|(x575*x576));

    if (t81 != 6811306786380730864LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x577 = -1LL;
	volatile uint16_t x578 = 7047U;
	static volatile int8_t x579 = INT8_MAX;
	uint16_t x580 = 927U;
	int64_t t82 = 2LL;

    t82 = ((x577*x578)|(x579*x580));

    if (t82 != -4103LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x581 = -1;
	int16_t x582 = INT16_MAX;
	static uint64_t x583 = 1277381300LLU;
	int8_t x584 = INT8_MIN;
	volatile uint64_t t83 = 9059826902LLU;

    t83 = ((x581*x582)|(x583*x584));

    if (t83 != 18446744073709528577LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x585 = 1;
	int8_t x586 = INT8_MIN;
	volatile uint32_t x588 = 65U;
	static volatile uint32_t t84 = 3008569U;

    t84 = ((x585*x586)|(x587*x588));

    if (t84 != 4294967168U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x594 = 3662U;
	uint16_t x595 = 167U;
	uint32_t t85 = 28493717U;

    t85 = ((x593*x594)|(x595*x596));

    if (t85 != 4294958077U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x597 = INT8_MIN;
	uint32_t x598 = UINT32_MAX;
	uint64_t x599 = 160122796924LLU;
	volatile int32_t x600 = INT32_MIN;
	volatile uint64_t t86 = 2211791743546LLU;

    t86 = ((x597*x598)|(x599*x600));

    if (t86 != 6627049334166782080LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x603 = UINT32_MAX;
	static int16_t x604 = -3150;
	volatile uint32_t t87 = 7U;

    t87 = ((x601*x602)|(x603*x604));

    if (t87 != 1073744974U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x605 = 18837U;
	static uint32_t x606 = UINT32_MAX;
	static uint64_t x607 = 5296039LLU;
	int16_t x608 = INT16_MIN;
	volatile uint64_t t88 = 1238583190742492959LLU;

    t88 = ((x605*x606)|(x607*x608));

    if (t88 != 18446743901910840939LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x609 = -1;
	int8_t x610 = INT8_MAX;
	int16_t x611 = -54;
	volatile uint32_t x612 = 14158917U;
	static uint32_t t89 = 96504514U;

    t89 = ((x609*x610)|(x611*x612));

    if (t89 != 4294967283U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x613 = -1;
	int8_t x615 = INT8_MIN;
	uint16_t x616 = UINT16_MAX;
	uint32_t t90 = 98301U;

    t90 = ((x613*x614)|(x615*x616));

    if (t90 != 4294911645U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x617 = -1;
	volatile uint8_t x618 = UINT8_MAX;
	static int8_t x619 = -7;
	uint16_t x620 = UINT16_MAX;
	int32_t t91 = -5860;

    t91 = ((x617*x618)|(x619*x620));

    if (t91 != -249) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x625 = 37472519235654LLU;
	int32_t x628 = -1;
	static uint64_t t92 = 100315306568083LLU;

    t92 = ((x625*x626)|(x627*x628));

    if (t92 != 18446744073706929886LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MIN;
	static uint8_t x635 = 4U;
	volatile uint16_t x636 = 20U;
	volatile int32_t t93 = 147996928;

    t93 = ((x633*x634)|(x635*x636));

    if (t93 != 4194384) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x661 = -1;
	uint16_t x662 = 4U;
	int8_t x663 = -1;
	uint16_t x664 = 85U;

    t94 = ((x661*x662)|(x663*x664));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x665 = -13167;
	int16_t x666 = INT16_MAX;
	volatile uint32_t x668 = UINT32_MAX;
	uint32_t t95 = 10088469U;

    t95 = ((x665*x666)|(x667*x668));

    if (t95 != 4294967279U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint16_t x678 = 2603U;
	static uint16_t x679 = 1U;
	uint8_t x680 = 6U;

    t96 = ((x677*x678)|(x679*x680));

    if (t96 != 18446744073709549015LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x681 = 1;
	uint16_t x682 = UINT16_MAX;
	static uint64_t x683 = 35961487LLU;
	uint8_t x684 = 28U;
	uint64_t t97 = 798333428894299166LLU;

    t97 = ((x681*x682)|(x683*x684));

    if (t97 != 1006960639LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x686 = INT64_MIN;
	volatile uint32_t x687 = 622447U;
	static volatile int8_t x688 = INT8_MIN;
	static volatile int64_t t98 = 10596604304LL;

    t98 = ((x685*x686)|(x687*x688));

    if (t98 != 4215294080LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x689 = UINT64_MAX;
	int16_t x691 = INT16_MIN;
	volatile uint64_t x692 = UINT64_MAX;

    t99 = ((x689*x690)|(x691*x692));

    if (t99 != 32818LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x697 = INT8_MAX;
	static int8_t x698 = 0;
	static int64_t x699 = 101032084LL;
	int8_t x700 = INT8_MIN;
	int64_t t100 = 1774451240140135786LL;

    t100 = ((x697*x698)|(x699*x700));

    if (t100 != -12932106752LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x702 = 455629553483LLU;
	uint64_t t101 = 80117938LLU;

    t101 = ((x701*x702)|(x703*x704));

    if (t101 != 18446744073709550005LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x705 = -15;
	int8_t x706 = INT8_MIN;
	int32_t x707 = -1;
	volatile int32_t t102 = 1711;

    t102 = ((x705*x706)|(x707*x708));

    if (t102 != 1921) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x709 = -22523039LL;
	int16_t x710 = 2;
	int8_t x711 = -9;
	int16_t x712 = INT16_MIN;

    t103 = ((x709*x710)|(x711*x712));

    if (t103 != -44783934LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x714 = UINT64_MAX;
	static int16_t x715 = INT16_MAX;
	uint32_t x716 = 1U;
	uint64_t t104 = UINT64_MAX;

    t104 = ((x713*x714)|(x715*x716));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	int16_t x719 = 67;
	uint16_t x720 = UINT16_MAX;
	volatile uint32_t t105 = 274U;

    t105 = ((x717*x718)|(x719*x720));

    if (t105 != 4390845U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x730 = -1LL;
	uint8_t x732 = 10U;
	volatile int64_t t106 = 409860380LL;

    t106 = ((x729*x730)|(x731*x732));

    if (t106 != -5324LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x738 = INT16_MIN;
	uint64_t x739 = 6460875LLU;
	uint32_t x740 = 183928709U;

    t107 = ((x737*x738)|(x739*x740));

    if (t107 != 1188340397760375LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x750 = INT8_MIN;
	volatile int16_t x751 = INT16_MIN;
	volatile int32_t x752 = -1;
	int32_t t108 = 3253;

    t108 = ((x749*x750)|(x751*x752));

    if (t108 != -8355712) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x753 = INT8_MIN;
	int64_t x754 = -14168299667147290LL;
	uint32_t x755 = 8476621U;
	uint16_t x756 = UINT16_MAX;

    t109 = ((x753*x754)|(x755*x756));

    if (t109 != 1813542357433298227LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x761 = -1;
	static uint32_t x762 = UINT32_MAX;
	int64_t x763 = -3003861LL;
	int16_t x764 = INT16_MIN;
	int64_t t110 = 13598990323LL;

    t110 = ((x761*x762)|(x763*x764));

    if (t110 != 98430517249LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x765 = -1LL;
	volatile int16_t x766 = INT16_MAX;
	uint64_t x768 = 1235693342920LLU;
	volatile uint64_t t111 = 393431571LLU;

    t111 = ((x765*x766)|(x767*x768));

    if (t111 != 18446744073709524153LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x769 = 2732630U;
	uint8_t x770 = 11U;
	int8_t x771 = INT8_MIN;

    t112 = ((x769*x770)|(x771*x772));

    if (t112 != 30058930U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x777 = -1;
	static uint32_t x778 = 110705679U;
	int16_t x779 = -1155;
	static int8_t x780 = INT8_MIN;
	static volatile uint32_t t113 = 28797967U;

    t113 = ((x777*x778)|(x779*x780));

    if (t113 != 4184261617U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x781 = UINT64_MAX;
	int8_t x782 = INT8_MIN;
	volatile uint8_t x783 = 15U;

    t114 = ((x781*x782)|(x783*x784));

    if (t114 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x795 = INT16_MAX;
	volatile uint8_t x796 = UINT8_MAX;
	uint64_t t115 = 522494LLU;

    t115 = ((x793*x794)|(x795*x796));

    if (t115 != 29924592474652483LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x798 = -426908138422769LL;
	uint64_t x799 = 8522LLU;
	static volatile uint64_t t116 = 1868LLU;

    t116 = ((x797*x798)|(x799*x800));

    if (t116 != 18446744073709543415LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x806 = -1LL;
	uint32_t x808 = 682U;
	int64_t t117 = 24LL;

    t117 = ((x805*x806)|(x807*x808));

    if (t117 != -29957LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x809 = -2;
	int8_t x810 = INT8_MIN;
	uint32_t x812 = 148290U;

    t118 = ((x809*x810)|(x811*x812));

    if (t118 != 4294819262U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x814 = -1;
	int32_t x815 = -11;
	int32_t t119 = -4980;

    t119 = ((x813*x814)|(x815*x816));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x817 = -1;
	volatile int32_t x819 = 3146;
	int32_t x820 = -1;

    t120 = ((x817*x818)|(x819*x820));

    if (t120 != -3146) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x821 = -1;
	int8_t x822 = -7;
	int64_t x824 = 27273047LL;
	int64_t t121 = -34LL;

    t121 = ((x821*x822)|(x823*x824));

    if (t121 != -190911329LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x829 = -48;
	volatile uint8_t x830 = UINT8_MAX;
	uint64_t t122 = 717LLU;

    t122 = ((x829*x830)|(x831*x832));

    if (t122 != 18446744073709542833LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x833 = 1;
	int64_t x834 = -1LL;
	int64_t x835 = -3133604035571480LL;
	volatile uint64_t x836 = UINT64_MAX;
	static volatile uint64_t t123 = UINT64_MAX;

    t123 = ((x833*x834)|(x835*x836));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x837 = UINT32_MAX;
	uint16_t x838 = 7U;
	int16_t x839 = 4087;
	static volatile uint32_t t124 = 74393019U;

    t124 = ((x837*x838)|(x839*x840));

    if (t124 != 4294967289U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x845 = UINT64_MAX;
	uint16_t x846 = UINT16_MAX;
	static volatile uint8_t x847 = 0U;
	static volatile int32_t x848 = -1;
	static uint64_t t125 = 258229373410557LLU;

    t125 = ((x845*x846)|(x847*x848));

    if (t125 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x849 = 7392446151703714LLU;
	int8_t x851 = INT8_MIN;
	static int8_t x852 = 33;
	volatile uint64_t t126 = 2009553536555559535LLU;

    t126 = ((x849*x850)|(x851*x852));

    if (t126 != 18446744073709547486LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x853 = -834824;
	int64_t x854 = 13350229LL;
	static uint8_t x855 = 6U;
	int16_t x856 = INT16_MAX;

    t127 = ((x853*x854)|(x855*x856));

    if (t127 != -11145091547142LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x857 = 173964311U;
	int8_t x858 = INT8_MIN;
	uint64_t x859 = UINT64_MAX;
	int64_t x860 = 51LL;
	static uint64_t t128 = 2187780963083LLU;

    t128 = ((x857*x858)|(x859*x860));

    if (t128 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x861 = 147005061LLU;
	static uint64_t x863 = 159971810LLU;
	int8_t x864 = -1;
	static volatile uint64_t t129 = 106037469LLU;

    t129 = ((x861*x862)|(x863*x864));

    if (t129 != 18446744073574796863LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x865 = 99U;
	volatile uint32_t x866 = 8U;
	int32_t x867 = INT32_MAX;
	static uint64_t x868 = 6364768624LLU;

    t130 = ((x865*x866)|(x867*x868));

    if (t130 != 13668236536978691992LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x869 = 1U;
	volatile int16_t x870 = INT16_MIN;
	int8_t x871 = 0;
	static volatile int32_t x872 = INT32_MIN;
	int32_t t131 = 108125;

    t131 = ((x869*x870)|(x871*x872));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x873 = 1000281;
	static volatile int64_t x874 = 2137500319LL;
	volatile int32_t x875 = -12;
	static volatile int8_t x876 = INT8_MIN;
	int64_t t132 = 225920943459116LL;

    t132 = ((x873*x874)|(x875*x876));

    if (t132 != 2138100956589639LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x881 = -1;
	volatile uint32_t x883 = UINT32_MAX;
	int16_t x884 = -1;
	volatile uint32_t t133 = 121U;

    t133 = ((x881*x882)|(x883*x884));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x885 = -51;
	volatile uint32_t x886 = 113U;
	static int16_t x887 = INT16_MIN;
	static int16_t x888 = 2;
	uint32_t t134 = 5U;

    t134 = ((x885*x886)|(x887*x888));

    if (t134 != 4294961533U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x893 = 1998287U;
	volatile uint32_t x894 = UINT32_MAX;
	uint8_t x895 = UINT8_MAX;
	static int8_t x896 = -1;

    t135 = ((x893*x894)|(x895*x896));

    if (t135 != 4294967089U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x897 = 27U;
	volatile uint16_t x898 = 15019U;
	volatile uint16_t x899 = 14038U;
	int16_t x900 = INT16_MIN;
	uint32_t t136 = 12519U;

    t136 = ((x897*x898)|(x899*x900));

    if (t136 != 3835113481U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x909 = INT32_MIN;
	static uint64_t x910 = 1433212138LLU;
	int8_t x912 = -1;
	uint64_t t137 = 48849831562460LLU;

    t137 = ((x909*x910)|(x911*x912));

    if (t137 != 15368944443239432193LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x913 = -1LL;
	int32_t x914 = -1;
	volatile int16_t x915 = INT16_MIN;
	volatile int8_t x916 = -35;
	int64_t t138 = -278450306564763LL;

    t138 = ((x913*x914)|(x915*x916));

    if (t138 != 1146881LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x921 = INT16_MAX;
	static uint32_t x922 = 164882U;
	int32_t x923 = -1;
	int64_t x924 = INT64_MAX;
	int64_t t139 = -83080382891293LL;

    t139 = ((x921*x922)|(x923*x924));

    if (t139 != -9223372035747054609LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x929 = 13U;
	int32_t x930 = -37;
	static volatile int16_t x931 = INT16_MIN;
	uint16_t x932 = 54U;
	volatile int32_t t140 = 3494;

    t140 = ((x929*x930)|(x931*x932));

    if (t140 != -481) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x933 = UINT16_MAX;
	int8_t x934 = INT8_MAX;
	uint8_t x935 = 30U;
	uint8_t x936 = 6U;

    t141 = ((x933*x934)|(x935*x936));

    if (t141 != 8322997) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x957 = 6U;
	static volatile int32_t x958 = 84134987;
	uint16_t x959 = 6966U;
	uint16_t x960 = 4U;

    t142 = ((x957*x958)|(x959*x960));

    if (t142 != 504819162) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x969 = 1514864;
	int8_t x970 = INT8_MIN;
	uint64_t x971 = UINT64_MAX;
	volatile uint64_t t143 = 64399113LLU;

    t143 = ((x969*x970)|(x971*x972));

    if (t143 != 18446744073659173082LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x973 = -29061231;
	uint64_t x974 = 2432663869917LLU;
	int16_t x975 = INT16_MIN;
	uint64_t x976 = 2491383267499659048LLU;
	volatile uint64_t t144 = 64411049208255LLU;

    t144 = ((x973*x974)|(x975*x976));

    if (t144 != 7705552015027198253LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x977 = INT16_MIN;
	int8_t x978 = INT8_MIN;
	volatile int64_t x979 = -1LL;
	static volatile uint8_t x980 = 1U;
	static volatile int64_t t145 = -2151777895010998LL;

    t145 = ((x977*x978)|(x979*x980));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x985 = 0;
	uint64_t x987 = 209LLU;
	int64_t x988 = INT64_MIN;
	uint64_t t146 = 7998249484LLU;

    t146 = ((x985*x986)|(x987*x988));

    if (t146 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x1002 = 0U;
	uint64_t x1004 = UINT64_MAX;

    t147 = ((x1001*x1002)|(x1003*x1004));

    if (t147 != 18446744073708991758LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x1009 = INT8_MIN;
	uint32_t x1010 = UINT32_MAX;
	int64_t x1011 = -476255769489LL;
	int64_t x1012 = -13517450LL;
	int64_t t148 = -2517774797274LL;

    t148 = ((x1009*x1010)|(x1011*x1012));

    if (t148 != 6437763551279083178LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1021 = UINT64_MAX;
	uint8_t x1022 = 0U;
	volatile int32_t x1023 = INT32_MIN;
	uint8_t x1024 = 1U;
	volatile uint64_t t149 = 1146950062643827LLU;

    t149 = ((x1021*x1022)|(x1023*x1024));

    if (t149 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1025 = 1697961567155603LL;
	volatile uint8_t x1026 = 112U;
	uint64_t x1027 = 506810232LLU;
	int32_t x1028 = -1;
	volatile uint64_t t150 = 13626536704208LLU;

    t150 = ((x1025*x1026)|(x1027*x1028));

    if (t150 != 18446744073272029400LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x1029 = INT16_MAX;
	volatile uint8_t x1030 = 7U;
	volatile int8_t x1031 = -7;
	static int16_t x1032 = 2;
	volatile int32_t t151 = 56738;

    t151 = ((x1029*x1030)|(x1031*x1032));

    if (t151 != -5) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1043 = -48;
	int16_t x1044 = 1;
	int64_t t152 = -2726781399567913369LL;

    t152 = ((x1041*x1042)|(x1043*x1044));

    if (t152 != -48LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1046 = UINT16_MAX;
	volatile int64_t t153 = -13760129601840LL;

    t153 = ((x1045*x1046)|(x1047*x1048));

    if (t153 != -9223372036852285478LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1049 = -59;
	static uint16_t x1050 = 2U;
	uint64_t x1051 = 22726311476079LLU;
	int32_t x1052 = INT32_MIN;

    t154 = ((x1049*x1050)|(x1051*x1052));

    if (t154 != 18446744073709551498LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x1057 = 49LLU;
	volatile int8_t x1058 = INT8_MIN;
	int64_t x1060 = INT64_MIN;
	static uint64_t t155 = 11203552493241727LLU;

    t155 = ((x1057*x1058)|(x1059*x1060));

    if (t155 != 18446744073709545344LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1065 = -1;
	volatile int8_t x1066 = -22;
	int64_t x1067 = -1LL;
	uint8_t x1068 = 2U;
	volatile int64_t t156 = 13629469777LL;

    t156 = ((x1065*x1066)|(x1067*x1068));

    if (t156 != -2LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1069 = 527;
	uint8_t x1070 = 6U;
	int32_t x1071 = INT32_MIN;
	static uint64_t x1072 = 25313324904132528LLU;
	static volatile uint64_t t157 = 15920207485933LLU;

    t157 = ((x1069*x1070)|(x1071*x1072));

    if (t157 != 2486171884060675162LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1073 = 60U;
	static uint32_t x1074 = 25185940U;
	int32_t x1075 = -308;

    t158 = ((x1073*x1074)|(x1075*x1076));

    if (t158 != -3060720734220LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1085 = UINT64_MAX;
	uint64_t x1086 = 17178834179578623LLU;
	int16_t x1087 = INT16_MIN;
	int16_t x1088 = -1;
	uint64_t t159 = 3121LLU;

    t159 = ((x1085*x1086)|(x1087*x1088));

    if (t159 != 18429565239530005761LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1093 = 24123185698735914LLU;
	int64_t x1094 = -118416720096LL;
	int8_t x1095 = 1;
	volatile int16_t x1096 = INT16_MIN;
	volatile uint64_t t160 = 78337545279119LLU;

    t160 = ((x1093*x1094)|(x1095*x1096));

    if (t160 != 18446744073709534016LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1097 = -54206112LL;
	uint64_t x1098 = UINT64_MAX;
	int32_t x1100 = -1;

    t161 = ((x1097*x1098)|(x1099*x1100));

    if (t161 != 54206443LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1109 = 12556U;
	volatile int16_t x1110 = INT16_MIN;
	int16_t x1112 = INT16_MAX;
	volatile int32_t t162 = 155957565;

    t162 = ((x1109*x1110)|(x1111*x1112));

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1113 = UINT32_MAX;
	int8_t x1114 = -1;
	volatile uint64_t x1116 = 883779467488LLU;
	uint64_t t163 = 4159940259933LLU;

    t163 = ((x1113*x1114)|(x1115*x1116));

    if (t163 != 18441117049840055521LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1122 = INT8_MAX;
	static uint32_t x1123 = 130357U;
	uint32_t x1124 = 3U;
	volatile uint64_t t164 = 90LLU;

    t164 = ((x1121*x1122)|(x1123*x1124));

    if (t164 != 1695196641279LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x1125 = UINT16_MAX;
	static int8_t x1126 = -1;
	static int8_t x1127 = INT8_MAX;
	uint8_t x1128 = 10U;
	volatile int32_t t165 = 10267;

    t165 = ((x1125*x1126)|(x1127*x1128));

    if (t165 != -64265) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1137 = INT64_MIN;
	uint8_t x1139 = 12U;

    t166 = ((x1137*x1138)|(x1139*x1140));

    if (t166 != 9658967385059708480LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1142 = 211;
	int64_t x1143 = -1LL;
	uint8_t x1144 = UINT8_MAX;

    t167 = ((x1141*x1142)|(x1143*x1144));

    if (t167 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x1153 = 1U;
	static int32_t x1154 = -11803;
	volatile int8_t x1155 = INT8_MAX;

    t168 = ((x1153*x1154)|(x1155*x1156));

    if (t168 != -27) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1165 = 29796728U;
	int8_t x1166 = -1;
	static uint32_t x1167 = 500090333U;
	volatile uint8_t x1168 = 3U;
	uint32_t t169 = 4U;

    t169 = ((x1165*x1166)|(x1167*x1168));

    if (t169 != 4286404511U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1169 = 1U;
	volatile int16_t x1170 = -1095;
	int8_t x1171 = INT8_MAX;
	int32_t x1172 = -259;
	volatile int32_t t170 = 1;

    t170 = ((x1169*x1170)|(x1171*x1172));

    if (t170 != -69) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1177 = INT16_MIN;
	static volatile int64_t x1178 = -1LL;
	volatile uint32_t x1179 = 241148305U;
	int16_t x1180 = -1;

    t171 = ((x1177*x1178)|(x1179*x1180));

    if (t171 != 4053851759LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1181 = INT32_MAX;
	int8_t x1182 = 0;
	uint8_t x1183 = 23U;
	uint32_t x1184 = 443254U;
	volatile uint32_t t172 = 579972823U;

    t172 = ((x1181*x1182)|(x1183*x1184));

    if (t172 != 10194842U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1190 = INT16_MAX;
	static volatile int64_t x1191 = -6671252LL;
	int32_t x1192 = -904;
	int64_t t173 = -551LL;

    t173 = ((x1189*x1190)|(x1191*x1192));

    if (t173 != -597344LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1194 = 1LL;
	volatile int64_t x1196 = 866LL;
	int64_t t174 = 1446851248680LL;

    t174 = ((x1193*x1194)|(x1195*x1196));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1201 = 3103LL;
	volatile int16_t x1202 = 21;
	int8_t x1203 = 0;
	volatile int16_t x1204 = -201;
	volatile int64_t t175 = -3747939152LL;

    t175 = ((x1201*x1202)|(x1203*x1204));

    if (t175 != 65163LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1205 = UINT16_MAX;
	int16_t x1206 = 3411;
	int8_t x1208 = 63;
	int64_t t176 = 8252385884242LL;

    t176 = ((x1205*x1206)|(x1207*x1208));

    if (t176 != 13645313021LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x1221 = 161U;
	uint64_t x1222 = 9318709175582LLU;
	static int32_t x1223 = -5534;
	int64_t x1224 = -1LL;

    t177 = ((x1221*x1222)|(x1223*x1224));

    if (t177 != 1500312177268702LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1233 = INT32_MIN;
	uint8_t x1235 = 1U;
	volatile int16_t x1236 = INT16_MIN;
	volatile int64_t t178 = 11980499890440542LL;

    t178 = ((x1233*x1234)|(x1235*x1236));

    if (t178 != -32768LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1237 = 1997LLU;
	static volatile int8_t x1239 = 2;
	static int64_t x1240 = -659438385LL;

    t179 = ((x1237*x1238)|(x1239*x1240));

    if (t179 != 18446744073709550015LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1245 = 2U;
	volatile int8_t x1247 = 1;
	static int16_t x1248 = INT16_MAX;

    t180 = ((x1245*x1246)|(x1247*x1248));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1250 = INT8_MAX;
	static int8_t x1251 = 4;
	int16_t x1252 = -980;
	static int32_t t181 = -6;

    t181 = ((x1249*x1250)|(x1251*x1252));

    if (t181 != -3841) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x1262 = UINT64_MAX;
	int16_t x1263 = -17;
	int16_t x1264 = -1;

    t182 = ((x1261*x1262)|(x1263*x1264));

    if (t182 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1269 = -1;
	int8_t x1270 = 1;
	uint8_t x1271 = 30U;
	uint32_t x1272 = 2430U;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = ((x1269*x1270)|(x1271*x1272));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1277 = 87U;
	int16_t x1278 = INT16_MIN;
	uint16_t x1279 = UINT16_MAX;
	uint64_t x1280 = 125908055LLU;
	volatile uint64_t t184 = 12259854713207890LLU;

    t184 = ((x1277*x1278)|(x1279*x1280));

    if (t184 != 18446744073706785705LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1281 = 7397;
	uint8_t x1283 = 2U;

    t185 = ((x1281*x1282)|(x1283*x1284));

    if (t185 != -229) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1289 = INT8_MIN;
	int16_t x1291 = INT16_MAX;
	uint32_t x1292 = 2092034994U;
	uint32_t t186 = 484330930U;

    t186 = ((x1289*x1290)|(x1291*x1292));

    if (t186 != 4294940110U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x1293 = 1992U;
	int8_t x1294 = 1;
	static volatile int64_t x1295 = -107025745853LL;
	int8_t x1296 = 2;

    t187 = ((x1293*x1294)|(x1295*x1296));

    if (t187 != -214051489842LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1305 = INT16_MAX;
	int8_t x1306 = -1;
	int16_t x1307 = INT16_MAX;
	int8_t x1308 = INT8_MIN;
	volatile int32_t t188 = -7311078;

    t188 = ((x1305*x1306)|(x1307*x1308));

    if (t188 != -32639) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1309 = 5649558200278652LL;
	uint8_t x1310 = 11U;
	int16_t x1311 = INT16_MIN;
	static uint16_t x1312 = 108U;
	static volatile int64_t t189 = 2204249757390674628LL;

    t189 = ((x1309*x1310)|(x1311*x1312));

    if (t189 != -2486444LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1314 = -1;
	int16_t x1316 = -1;
	volatile int32_t t190 = 14439514;

    t190 = ((x1313*x1314)|(x1315*x1316));

    if (t190 != -2147483519) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1325 = INT16_MIN;
	int8_t x1327 = INT8_MIN;
	int32_t x1328 = 3;
	static volatile int32_t t191 = -5;

    t191 = ((x1325*x1326)|(x1327*x1328));

    if (t191 != -384) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1333 = INT8_MAX;
	uint16_t x1335 = UINT16_MAX;
	static volatile uint8_t x1336 = 2U;
	uint32_t t192 = UINT32_MAX;

    t192 = ((x1333*x1334)|(x1335*x1336));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1349 = 1U;
	int32_t x1350 = -161;
	uint16_t x1351 = 250U;
	int16_t x1352 = INT16_MAX;

    t193 = ((x1349*x1350)|(x1351*x1352));

    if (t193 != -161) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint64_t x1359 = 127LLU;
	int16_t x1360 = INT16_MAX;
	uint64_t t194 = 281555533832020LLU;

    t194 = ((x1357*x1358)|(x1359*x1360));

    if (t194 != 4161409LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1361 = 12;
	volatile uint8_t x1362 = UINT8_MAX;
	uint64_t x1363 = 4521812910LLU;
	int32_t x1364 = INT32_MAX;
	volatile uint64_t t195 = 3208015212742687LLU;

    t195 = ((x1361*x1362)|(x1363*x1364));

    if (t195 != 9710519279018483702LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1373 = INT32_MAX;
	volatile int64_t x1374 = -1LL;
	uint16_t x1375 = 19U;
	int64_t x1376 = 219939LL;

    t196 = ((x1373*x1374)|(x1375*x1376));

    if (t196 != -2143304807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1377 = INT8_MIN;
	int64_t x1378 = -1LL;
	volatile int8_t x1380 = INT8_MIN;
	int64_t t197 = -27848159541475297LL;

    t197 = ((x1377*x1378)|(x1379*x1380));

    if (t197 != 16512LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1381 = INT32_MIN;
	uint8_t x1384 = 5U;
	static volatile uint32_t t198 = 110U;

    t198 = ((x1381*x1382)|(x1383*x1384));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1389 = UINT8_MAX;
	uint32_t x1390 = 1952U;
	int64_t x1391 = -1LL;
	uint32_t x1392 = UINT32_MAX;
	volatile int64_t t199 = 8779268LL;

    t199 = ((x1389*x1390)|(x1391*x1392));

    if (t199 != -4294469535LL) { NG(); } else { ; }
	
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

