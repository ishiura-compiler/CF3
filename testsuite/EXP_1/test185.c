
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

int8_t x1 = INT8_MIN;
int32_t x5 = -1;
uint16_t x11 = 15U;
int16_t x12 = -924;
int8_t x28 = 4;
int64_t t5 = 56401889LL;
volatile uint64_t t6 = 1759LLU;
int32_t x35 = INT32_MIN;
int16_t x36 = -1;
volatile int64_t t8 = -1042746LL;
uint16_t x44 = 5890U;
static int16_t x45 = -832;
static volatile uint16_t x53 = UINT16_MAX;
volatile int16_t x58 = INT16_MIN;
volatile int64_t t15 = 29014525LL;
int32_t t17 = -11999060;
uint8_t x86 = 54U;
int32_t t18 = 81;
volatile int8_t x107 = INT8_MIN;
int64_t x108 = INT64_MIN;
uint8_t x122 = UINT8_MAX;
int8_t x126 = 2;
int32_t x133 = INT32_MAX;
int32_t x136 = 441419496;
uint64_t t24 = 5930LLU;
int64_t x155 = INT64_MIN;
int16_t x157 = INT16_MIN;
uint32_t x158 = 198944U;
int32_t x174 = INT32_MIN;
int8_t x175 = -11;
static volatile int8_t x182 = -1;
volatile uint64_t t30 = 29664614LLU;
int64_t x186 = -15529403LL;
volatile uint64_t t31 = 883LLU;
volatile uint64_t x193 = 889LLU;
int16_t x196 = 226;
uint64_t x204 = UINT64_MAX;
int16_t x205 = INT16_MAX;
volatile int64_t x211 = 277836969826728628LL;
int8_t x214 = INT8_MAX;
int64_t x221 = -1LL;
int32_t x226 = INT32_MIN;
static int64_t x234 = -24LL;
int64_t t40 = 329182LL;
int32_t x251 = INT32_MIN;
int64_t t43 = 11974491LL;
volatile uint32_t x259 = 1600990U;
int8_t x270 = -7;
volatile int8_t x272 = INT8_MAX;
static int64_t x273 = -1LL;
int64_t t47 = 1622479964LL;
int64_t x281 = INT64_MIN;
int64_t x289 = -1LL;
static int64_t x291 = INT64_MIN;
int32_t x300 = INT32_MIN;
volatile uint64_t t50 = 2016509786782LLU;
static uint64_t x309 = UINT64_MAX;
int64_t t52 = -231804171335LL;
volatile int16_t x336 = -6389;
static int8_t x338 = INT8_MAX;
int32_t x340 = -2601;
uint32_t t54 = 260693U;
uint64_t x342 = 40LLU;
uint32_t x349 = 69U;
int32_t x352 = -1;
int8_t x361 = 1;
int64_t x366 = -2047LL;
volatile int64_t x367 = -442945187607LL;
static int16_t x373 = -1;
uint8_t x394 = UINT8_MAX;
int8_t x395 = INT8_MIN;
volatile int64_t x405 = INT64_MAX;
volatile uint16_t x408 = UINT16_MAX;
volatile uint32_t t65 = 915U;
int16_t x438 = -1;
static int32_t t67 = -265722176;
static int64_t x441 = 12155661LL;
int32_t x447 = -1;
volatile uint16_t x450 = 15U;
uint32_t x461 = UINT32_MAX;
int8_t x464 = 1;
uint16_t x466 = UINT16_MAX;
int16_t x467 = 383;
static uint64_t x475 = UINT64_MAX;
int32_t x480 = INT32_MAX;
static int64_t x483 = INT64_MIN;
uint64_t x488 = UINT64_MAX;
static volatile int32_t x492 = 96381186;
int64_t t77 = 1LL;
uint64_t x499 = UINT64_MAX;
uint16_t x524 = 2U;
volatile uint32_t t82 = 41026U;
int32_t x526 = INT32_MIN;
static int16_t x528 = 13;
int8_t x539 = -2;
static uint8_t x540 = UINT8_MAX;
int16_t x546 = INT16_MIN;
int8_t x553 = 1;
volatile uint64_t t89 = 12058LLU;
int64_t t92 = -69191726LL;
static volatile uint32_t x574 = 648851U;
int16_t x576 = -444;
volatile uint8_t x577 = 3U;
uint16_t x578 = UINT16_MAX;
int64_t t95 = 232426750971483259LL;
int32_t x591 = INT32_MIN;
uint32_t x609 = UINT32_MAX;
volatile uint8_t x648 = 1U;
static uint32_t x650 = UINT32_MAX;
volatile int64_t t102 = 6LL;
int16_t x657 = INT16_MAX;
uint64_t t105 = 3587109453501LLU;
int8_t x666 = -1;
int16_t x669 = INT16_MIN;
volatile int32_t t107 = 23201;
volatile uint64_t t108 = 8560067091488113LLU;
volatile uint64_t t109 = 547067408432821LLU;
volatile int64_t x681 = INT64_MAX;
int64_t x690 = -481905LL;
int16_t x707 = INT16_MIN;
uint16_t x752 = 2U;
int16_t x776 = -1;
volatile uint64_t t121 = 11147LLU;
int64_t x784 = -1LL;
uint64_t x790 = 710214846LLU;
static uint64_t t124 = 201301LLU;
uint64_t t128 = 202476306471996LLU;
int16_t x841 = INT16_MIN;
uint64_t x854 = 20966LLU;
volatile uint64_t t136 = 3797107594570LLU;
int8_t x863 = -45;
int8_t x871 = INT8_MIN;
int16_t x883 = INT16_MAX;
volatile int64_t x884 = INT64_MIN;
volatile int64_t x909 = INT64_MIN;
uint16_t x914 = 4411U;
int16_t x918 = INT16_MIN;
int8_t x919 = INT8_MIN;
int32_t t146 = -15709;
uint64_t x921 = 1579276270LLU;
static int64_t x922 = INT64_MIN;
int8_t x923 = 17;
uint64_t t147 = 1100105081LLU;
int8_t x925 = INT8_MAX;
int32_t t149 = 106751;
int64_t x934 = INT64_MAX;
uint64_t x936 = UINT64_MAX;
int8_t x945 = INT8_MIN;
uint8_t x947 = 15U;
int8_t x954 = -1;
uint32_t t152 = 866U;
volatile uint32_t t153 = 634733696U;
int8_t x965 = -1;
int64_t t154 = -8929384LL;
uint32_t x970 = UINT32_MAX;
int16_t x975 = -1;
int32_t x990 = -59455837;
uint64_t x993 = 1560023678LLU;
uint8_t x994 = UINT8_MAX;
uint8_t x995 = 1U;
int8_t x1004 = INT8_MIN;
int32_t x1010 = 659182247;
uint32_t x1012 = 7155U;
int8_t x1014 = -5;
int8_t x1017 = INT8_MIN;
volatile int32_t x1019 = INT32_MIN;
uint8_t x1024 = UINT8_MAX;
volatile int8_t x1034 = 3;
int32_t x1035 = -73212;
static int32_t t166 = 3554090;
static uint32_t x1040 = UINT32_MAX;
uint32_t t167 = 624184053U;
volatile uint32_t t168 = 849U;
uint16_t x1051 = 7462U;
static uint64_t x1060 = UINT64_MAX;
volatile int8_t x1064 = INT8_MIN;
int16_t x1067 = -628;
uint64_t x1069 = 32723274864LLU;
int64_t x1072 = INT64_MAX;
uint64_t t174 = 223720283065902939LLU;
int64_t x1081 = -1LL;
int64_t x1095 = -707LL;
int32_t x1096 = -1;
uint8_t x1101 = UINT8_MAX;
int16_t x1103 = -46;
static int16_t x1106 = -61;
static volatile int16_t x1107 = -1;
uint32_t x1128 = 2509U;
uint32_t t182 = 109U;
volatile uint32_t t183 = 1786557684U;
int64_t x1144 = -1LL;
uint32_t x1150 = UINT32_MAX;
uint8_t x1151 = 0U;
int8_t x1168 = INT8_MAX;
uint64_t t190 = 211019695LLU;
static int64_t x1174 = -1LL;
static int32_t x1193 = -1;
uint32_t x1194 = UINT32_MAX;
uint64_t x1198 = 33402615413169LLU;
static int16_t x1213 = INT16_MAX;
static int32_t x1216 = INT32_MIN;
static int8_t x1217 = INT8_MIN;
volatile int16_t x1235 = 1483;


void f0(void) {
    	uint64_t x2 = 80800698LLU;
	int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MAX;
	uint64_t t0 = 16672833875LLU;

    t0 = (((x1+x2)^x3)*x4);

    if (t0 != 18446743811240800710LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x6 = -92321LL;
	uint8_t x7 = 19U;
	uint32_t x8 = 1443826078U;
	volatile int64_t t1 = -137969702612374329LL;

    t1 = (((x5+x6)^x7)*x8);

    if (t1 != -133321456216442LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 5163786556LLU;
	uint32_t x10 = UINT32_MAX;
	volatile uint64_t t2 = 95805447LLU;

    t2 = (((x9+x10)^x11)*x12);

    if (t2 != 18446735333820999760LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	volatile int16_t x14 = -1;
	int8_t x15 = 20;
	static int8_t x16 = -2;
	int32_t t3 = -464531;

    t3 = (((x13+x14)^x15)*x16);

    if (t3 != 65578) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = INT64_MIN;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MAX;
	volatile uint64_t t4 = 27521467843387LLU;

    t4 = (((x17+x18)^x19)*x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -11825LL;
	volatile uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = INT8_MIN;

    t5 = (((x25+x26)^x27)*x28);

    if (t5 != -17179821768LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = INT32_MAX;
	static uint64_t x30 = UINT64_MAX;
	static int64_t x31 = 8LL;
	int16_t x32 = INT16_MIN;

    t6 = (((x29+x30)^x31)*x32);

    if (t6 != 18446673704965701632LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 4U;
	int64_t t7 = -271316273480034892LL;

    t7 = (((x33+x34)^x35)*x36);

    if (t7 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	volatile int64_t x38 = -1LL;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = 8U;

    t8 = (((x37+x38)^x39)*x40);

    if (t8 != 8LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 1;
	uint8_t x42 = 11U;
	static volatile uint8_t x43 = 5U;
	static int32_t t9 = -7;

    t9 = (((x41+x42)^x43)*x44);

    if (t9 != 53010) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x46 = 13018512U;
	uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = INT8_MIN;
	volatile uint64_t t10 = 2558092774064LLU;

    t10 = (((x45+x46)^x47)*x48);

    if (t10 != 1666263168LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 2U;
	int32_t x50 = -3081002;
	uint16_t x51 = UINT16_MAX;
	uint32_t x52 = 29U;
	volatile uint32_t t11 = 27398U;

    t11 = (((x49+x50)^x51)*x52);

    if (t11 != 4203764587U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 401015064U;
	volatile int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MIN;
	volatile uint32_t t12 = 455550U;

    t12 = (((x53+x54)^x55)*x56);

    if (t12 != 201290880U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = -1;
	uint64_t x59 = 5824283187961LLU;
	uint64_t x60 = 699066832LLU;
	volatile uint64_t t13 = 22913809LLU;

    t13 = (((x57+x58)^x59)*x60);

    if (t13 != 5167266317376981728LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 190U;
	uint8_t x66 = UINT8_MAX;
	volatile uint16_t x67 = 413U;
	uint16_t x68 = 27867U;
	int32_t t14 = 1;

    t14 = (((x65+x66)^x67)*x68);

    if (t14 != 891744) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = 1994U;
	int64_t x74 = -1LL;
	int64_t x75 = 2038839764735417888LL;
	static uint16_t x76 = 0U;

    t15 = (((x73+x74)^x75)*x76);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 13U;
	int16_t x78 = INT16_MIN;
	int8_t x79 = 1;
	int64_t x80 = -1LL;
	int64_t t16 = 5324600422413312LL;

    t16 = (((x77+x78)^x79)*x80);

    if (t16 != 32756LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = 946U;
	int8_t x84 = -1;

    t17 = (((x81+x82)^x83)*x84);

    if (t17 != 33742) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = UINT8_MAX;
	static int16_t x87 = -1;
	int8_t x88 = INT8_MIN;

    t18 = (((x85+x86)^x87)*x88);

    if (t18 != 39680) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 300603U;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = -1;
	int64_t x92 = -1LL;
	volatile int64_t t19 = 674002393173523987LL;

    t19 = (((x89+x90)^x91)*x92);

    if (t19 != -4294601157LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x105 = INT64_MIN;
	static uint64_t x106 = 41570778237389061LLU;
	volatile uint64_t t20 = 52645187261567LLU;

    t20 = (((x105+x106)^x107)*x108);

    if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x121 = -1;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t21 = 288095383217421LLU;

    t21 = (((x121+x122)^x123)*x124);

    if (t21 != 32640LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x125 = 1;
	int32_t x127 = -2506456;
	uint8_t x128 = 17U;
	static volatile int32_t t22 = -61725;

    t22 = (((x125+x126)^x127)*x128);

    if (t22 != -42609701) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x134 = -1;
	uint64_t x135 = 585514003LLU;
	uint64_t t23 = 783LLU;

    t23 = (((x133+x134)^x135)*x136);

    if (t23 != 689483853463198920LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x141 = 560U;
	uint64_t x142 = 15763LLU;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = UINT8_MAX;

    t24 = (((x141+x142)^x143)*x144);

    if (t24 != 18446743526105383741LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x153 = 1U;
	int32_t x154 = -197834;
	int8_t x156 = -1;
	int64_t t25 = 196LL;

    t25 = (((x153+x154)^x155)*x156);

    if (t25 != -9223372036854577975LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x159 = 61822LL;
	volatile int16_t x160 = INT16_MIN;
	static volatile int64_t t26 = 6124444570LL;

    t26 = (((x157+x158)^x159)*x160);

    if (t26 != -5304680448LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 7U;
	volatile int32_t t27 = 2;

    t27 = (((x169+x170)^x171)*x172);

    if (t27 != 896) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x173 = -1LL;
	volatile int32_t x176 = 1062779801;
	volatile int64_t t28 = 152728276764557285LL;

    t28 = (((x173+x174)^x175)*x176);

    if (t28 != 2282302254699992058LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x177 = 1U;
	int8_t x178 = -1;
	int8_t x179 = -1;
	static volatile int8_t x180 = -2;
	int32_t t29 = -15313376;

    t29 = (((x177+x178)^x179)*x180);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x181 = 665LLU;
	int8_t x183 = -29;
	volatile int8_t x184 = -49;

    t30 = (((x181+x182)^x183)*x184);

    if (t30 != 31605LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x185 = 102U;
	static int8_t x187 = INT8_MIN;
	static uint64_t x188 = 111LLU;

    t31 = (((x185+x186)^x187)*x188);

    if (t31 != 1723747749LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x194 = 44U;
	uint16_t x195 = 6244U;
	uint64_t t32 = 23356LLU;

    t32 = (((x193+x194)^x195)*x196);

    if (t32 != 1605730LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x201 = 0U;
	static uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 7U;
	uint64_t t33 = 806175705062LLU;

    t33 = (((x201+x202)^x203)*x204);

    if (t33 != 18446744073709551368LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x206 = 216672U;
	volatile int16_t x207 = -1;
	int8_t x208 = INT8_MIN;
	uint32_t t34 = 2815U;

    t34 = (((x205+x206)^x207)*x208);

    if (t34 != 31928320U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x209 = -1;
	uint32_t x210 = 204450U;
	volatile int16_t x212 = -1;
	static int64_t t35 = -12573882989180443LL;

    t35 = (((x209+x210)^x211)*x212);

    if (t35 != -277836969826657301LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x213 = 24U;
	int8_t x215 = INT8_MIN;
	int64_t x216 = -48210LL;
	volatile int64_t t36 = 14716530443145893LL;

    t36 = (((x213+x214)^x215)*x216);

    if (t36 != 11232930LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x217 = 0LLU;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = 8U;
	volatile int8_t x220 = INT8_MAX;
	static uint64_t t37 = 165485548LLU;

    t37 = (((x217+x218)^x219)*x220);

    if (t37 != 9223372036854776824LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x222 = INT8_MAX;
	static uint16_t x223 = 212U;
	volatile int32_t x224 = -6;
	volatile int64_t t38 = 87LL;

    t38 = (((x221+x222)^x223)*x224);

    if (t38 != -1020LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint32_t x227 = 77996443U;
	uint16_t x228 = 2735U;
	uint32_t t39 = 181774U;

    t39 = (((x225+x226)^x227)*x228);

    if (t39 != 761949788U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x233 = INT8_MIN;
	static uint8_t x235 = UINT8_MAX;
	volatile uint32_t x236 = 7980596U;

    t40 = (((x233+x234)^x235)*x236);

    if (t40 != -837962580LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x237 = 1;
	int16_t x238 = INT16_MIN;
	static uint32_t x239 = 4U;
	int16_t x240 = INT16_MIN;
	uint32_t t41 = 11U;

    t41 = (((x237+x238)^x239)*x240);

    if (t41 != 1073577984U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x241 = 0;
	volatile int32_t x242 = -1;
	static uint64_t x243 = 1746708378LLU;
	int64_t x244 = INT64_MIN;
	uint64_t t42 = 1LLU;

    t42 = (((x241+x242)^x243)*x244);

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x249 = 0;
	int8_t x250 = 31;
	int64_t x252 = 3804054LL;

    t43 = (((x249+x250)^x251)*x252);

    if (t43 != -8169143643183318LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x257 = -125636218;
	int8_t x258 = -1;
	uint64_t x260 = 1877LLU;
	uint64_t t44 = 684017534815070646LLU;

    t44 = (((x257+x258)^x259)*x260);

    if (t44 != 7828745774903LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x265 = INT8_MAX;
	uint64_t x266 = 331514LLU;
	uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = INT16_MAX;
	volatile uint64_t t45 = 14455272LLU;

    t45 = (((x265+x266)^x267)*x268);

    if (t45 != 12754685818LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x269 = 123U;
	int8_t x271 = INT8_MIN;
	int32_t t46 = -3499927;

    t46 = (((x269+x270)^x271)*x272);

    if (t46 != -1524) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 1179U;
	int16_t x276 = INT16_MIN;

    t47 = (((x273+x274)^x275)*x276);

    if (t47 != -140737449721856LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x282 = 2164564645LLU;
	uint8_t x283 = 5U;
	uint32_t x284 = UINT32_MAX;
	uint64_t t48 = 7602LLU;

    t48 = (((x281+x282)^x283)*x284);

    if (t48 != 73362299858672992LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x290 = INT16_MIN;
	int64_t x292 = -1LL;
	int64_t t49 = 18675166007925070LL;

    t49 = (((x289+x290)^x291)*x292);

    if (t49 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	static int16_t x298 = INT16_MAX;
	static int16_t x299 = INT16_MIN;

    t50 = (((x297+x298)^x299)*x300);

    if (t50 != 4294967296LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x310 = INT32_MAX;
	volatile uint32_t x311 = 25263523U;
	volatile int64_t x312 = -6417LL;
	volatile uint64_t t51 = 46357952326433543LLU;

    t51 = (((x309+x310)^x311)*x312);

    if (t51 != 18446730455423009491LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x313 = 7U;
	static uint32_t x314 = 351U;
	int64_t x315 = 4053514LL;
	static int8_t x316 = INT8_MAX;

    t52 = (((x313+x314)^x315)*x316);

    if (t52 != 514841236LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x333 = -1;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	volatile int32_t t53 = 13859;

    t53 = (((x333+x334)^x335)*x336);

    if (t53 != -805014) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x337 = 287891U;
	static volatile int8_t x339 = INT8_MAX;

    t54 = (((x337+x338)^x339)*x340);

    if (t54 != 3545595787U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x341 = 6608878116875102LL;
	int8_t x343 = INT8_MIN;
	static int16_t x344 = INT16_MAX;
	static volatile uint64_t t55 = 42961247289361417LLU;

    t55 = (((x341+x342)^x343)*x344);

    if (t55 != 4807819628863040506LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x350 = 25582949408613LL;
	static int32_t x351 = -126;
	volatile int64_t t56 = 447969867264870LL;

    t56 = (((x349+x350)^x351)*x352);

    if (t56 != 25582949408728LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x353 = -307;
	uint32_t x354 = UINT32_MAX;
	int8_t x355 = INT8_MIN;
	volatile uint64_t x356 = 382833647230702LLU;
	static volatile uint64_t t57 = 15564431449LLU;

    t57 = (((x353+x354)^x355)*x356);

    if (t57 != 127100770880593064LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = 4U;
	int8_t x359 = -1;
	static int16_t x360 = -1;
	int32_t t58 = -7;

    t58 = (((x357+x358)^x359)*x360);

    if (t58 != -123) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x362 = -576857;
	volatile int16_t x363 = 13575;
	int16_t x364 = -1;
	int32_t t59 = 1295729;

    t59 = (((x361+x362)^x363)*x364);

    if (t59 != 587857) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x365 = 280U;
	static volatile uint16_t x368 = 2794U;
	static int64_t t60 = -25LL;

    t60 = (((x365+x366)^x367)*x368);

    if (t60 != 1237588850488672LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MAX;
	uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t61 = 4136750497LLU;

    t61 = (((x373+x374)^x375)*x376);

    if (t61 != 32640LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x393 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	uint32_t t62 = 56U;

    t62 = (((x393+x394)^x395)*x396);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x397 = INT16_MIN;
	static uint8_t x398 = 73U;
	uint8_t x399 = 1U;
	int8_t x400 = INT8_MAX;
	volatile int32_t t63 = 991381145;

    t63 = (((x397+x398)^x399)*x400);

    if (t63 != -4152392) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x406 = 26112774181301476LLU;
	volatile int64_t x407 = INT64_MAX;
	volatile uint64_t t64 = 8696875959266657LLU;

    t64 = (((x405+x406)^x407)*x408);

    if (t64 != 4246542883396070628LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x413 = UINT32_MAX;
	static int16_t x414 = -1;
	int8_t x415 = 0;
	static uint16_t x416 = 245U;

    t65 = (((x413+x414)^x415)*x416);

    if (t65 != 4294966806U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x421 = 12U;
	uint32_t x422 = 2369U;
	int64_t x423 = -1LL;
	uint64_t x424 = 3183055390671LLU;
	volatile uint64_t t66 = 12LLU;

    t66 = (((x421+x422)^x423)*x424);

    if (t66 != 18439162035768973294LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	int16_t x440 = -1;

    t67 = (((x437+x438)^x439)*x440);

    if (t67 != 65536) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x442 = 3665U;
	static int8_t x443 = -5;
	int16_t x444 = 29;
	volatile int64_t t68 = 1262681LL;

    t68 = (((x441+x442)^x443)*x444);

    if (t68 != -352620367LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x445 = INT16_MAX;
	static int16_t x446 = -1;
	int16_t x448 = INT16_MAX;
	volatile int32_t t69 = -987;

    t69 = (((x445+x446)^x447)*x448);

    if (t69 != -1073676289) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x449 = 11514653460LL;
	int32_t x451 = -1;
	volatile int8_t x452 = INT8_MIN;
	int64_t t70 = -897LL;

    t70 = (((x449+x450)^x451)*x452);

    if (t70 != 1473875644928LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x462 = 75788862;
	static int32_t x463 = INT32_MIN;
	static uint32_t t71 = 1017244141U;

    t71 = (((x461+x462)^x463)*x464);

    if (t71 != 2223272509U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x465 = -2;
	uint16_t x468 = 1626U;
	static volatile int32_t t72 = 0;

    t72 = (((x465+x466)^x467)*x468);

    if (t72 != 105940404) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x473 = 108029090;
	uint8_t x474 = UINT8_MAX;
	static uint16_t x476 = 18U;
	uint64_t t73 = 110427391929607LLU;

    t73 = (((x473+x474)^x475)*x476);

    if (t73 != 18446744071765023388LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x477 = 3;
	int16_t x478 = INT16_MIN;
	int64_t x479 = 4433LL;
	int64_t t74 = 1346410LL;

    t74 = (((x477+x478)^x479)*x480);

    if (t74 != -60846801654098LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x481 = INT64_MIN;
	uint64_t x482 = 72942078116616LLU;
	volatile uint32_t x484 = 254898U;
	volatile uint64_t t75 = 3443371848877LLU;

    t75 = (((x481+x482)^x483)*x484);

    if (t75 != 146045754059633552LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x485 = 11711164698178561LLU;
	uint64_t x486 = UINT64_MAX;
	int8_t x487 = INT8_MAX;
	volatile uint64_t t76 = 8955880833LLU;

    t76 = (((x485+x486)^x487)*x488);

    if (t76 != 18435032909011372929LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x489 = 8597;
	int64_t x490 = -1467310LL;
	uint16_t x491 = UINT16_MAX;

    t77 = (((x489+x490)^x491)*x492);

    if (t77 != -143647290663888LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x493 = -1LL;
	uint16_t x494 = 6177U;
	static int32_t x495 = INT32_MAX;
	int8_t x496 = -3;
	volatile int64_t t78 = 14691342667573379LL;

    t78 = (((x493+x494)^x495)*x496);

    if (t78 != -6442432413LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x497 = INT32_MIN;
	uint32_t x498 = 11U;
	int8_t x500 = INT8_MAX;
	uint64_t t79 = 286263066389579LLU;

    t79 = (((x497+x498)^x499)*x500);

    if (t79 != 18446743800979126796LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x509 = UINT16_MAX;
	int32_t x510 = 55;
	uint32_t x511 = 1018U;
	int8_t x512 = 0;
	uint32_t t80 = 585624U;

    t80 = (((x509+x510)^x511)*x512);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x517 = UINT8_MAX;
	static volatile int16_t x518 = -226;
	int32_t x519 = 15223699;
	uint64_t x520 = 744359650LLU;
	uint64_t t81 = 96199685522LLU;

    t81 = (((x517+x518)^x519)*x520);

    if (t81 != 11331903537547100LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x521 = -4;
	uint8_t x522 = UINT8_MAX;
	uint32_t x523 = UINT32_MAX;

    t82 = (((x521+x522)^x523)*x524);

    if (t82 != 4294966792U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x525 = 4920;
	uint32_t x527 = 670126405U;
	volatile uint32_t t83 = 27U;

    t83 = (((x525+x526)^x527)*x528);

    if (t83 != 2269143129U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x537 = 150U;
	int8_t x538 = -1;
	volatile int32_t t84 = 35;

    t84 = (((x537+x538)^x539)*x540);

    if (t84 != -37995) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = 38677;
	volatile uint16_t x543 = UINT16_MAX;
	uint16_t x544 = 1U;
	int32_t t85 = -29564;

    t85 = (((x541+x542)^x543)*x544);

    if (t85 != -2147456790) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x545 = 194272U;
	int16_t x547 = -4;
	uint8_t x548 = 0U;
	volatile uint32_t t86 = 6U;

    t86 = (((x545+x546)^x547)*x548);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x549 = 1U;
	static int16_t x550 = 272;
	uint16_t x551 = 588U;
	uint64_t x552 = 2127681653LLU;
	volatile uint64_t t87 = 243LLU;

    t87 = (((x549+x550)^x551)*x552);

    if (t87 != 1831933903233LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x554 = INT32_MIN;
	static uint64_t x555 = UINT64_MAX;
	int8_t x556 = -1;
	volatile uint64_t t88 = 496967791039284LLU;

    t88 = (((x553+x554)^x555)*x556);

    if (t88 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x557 = 6LLU;
	int32_t x558 = 1;
	static int32_t x559 = INT32_MAX;
	int8_t x560 = -1;

    t89 = (((x557+x558)^x559)*x560);

    if (t89 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x561 = UINT16_MAX;
	uint8_t x562 = UINT8_MAX;
	static volatile int16_t x563 = INT16_MAX;
	int8_t x564 = 25;
	static int32_t t90 = -396745;

    t90 = (((x561+x562)^x563)*x564);

    if (t90 != 2451225) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x565 = INT32_MIN;
	static int64_t x566 = -1LL;
	uint32_t x567 = 43U;
	int32_t x568 = -1;
	volatile int64_t t91 = -1805886917544446045LL;

    t91 = (((x565+x566)^x567)*x568);

    if (t91 != 2147483692LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x569 = INT64_MIN;
	uint8_t x570 = UINT8_MAX;
	static int8_t x571 = 57;
	static uint16_t x572 = 0U;

    t92 = (((x569+x570)^x571)*x572);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	int8_t x575 = INT8_MIN;
	static uint64_t t93 = 69931329770LLU;

    t93 = (((x573+x574)^x575)*x576);

    if (t93 != 288130248LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x579 = 29457800289342245LL;
	static int8_t x580 = INT8_MIN;
	static int64_t t94 = 334LL;

    t94 = (((x577+x578)^x579)*x580);

    if (t94 != -3770598437044196224LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x581 = 1016251451LL;
	int16_t x582 = -484;
	int64_t x583 = -2042034387LL;
	int32_t x584 = 1;

    t95 = (((x581+x582)^x583)*x584);

    if (t95 != -1160002182LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x589 = -1;
	int64_t x590 = -1LL;
	uint16_t x592 = UINT16_MAX;
	volatile int64_t t96 = -5LL;

    t96 = (((x589+x590)^x591)*x592);

    if (t96 != 140735340740610LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x597 = UINT16_MAX;
	volatile uint64_t x598 = UINT64_MAX;
	static volatile uint16_t x599 = 1426U;
	static int64_t x600 = -41122816LL;
	uint64_t t97 = 3439677LLU;

    t97 = (((x597+x598)^x599)*x600);

    if (t97 != 18446741437408063488LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x610 = 1;
	uint8_t x611 = UINT8_MAX;
	int8_t x612 = -1;
	volatile uint32_t t98 = 29U;

    t98 = (((x609+x610)^x611)*x612);

    if (t98 != 4294967041U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	volatile uint16_t x618 = 31U;
	volatile int8_t x619 = 0;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t99 = 7679515000615012975LLU;

    t99 = (((x617+x618)^x619)*x620);

    if (t99 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x641 = 9;
	static int8_t x642 = INT8_MAX;
	int32_t x643 = -1;
	uint8_t x644 = UINT8_MAX;
	static int32_t t100 = 7535;

    t100 = (((x641+x642)^x643)*x644);

    if (t100 != -34935) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x645 = UINT32_MAX;
	uint16_t x646 = 460U;
	int8_t x647 = -1;
	uint32_t t101 = 32614U;

    t101 = (((x645+x646)^x647)*x648);

    if (t101 != 4294966836U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x649 = -1LL;
	uint8_t x651 = UINT8_MAX;
	volatile int16_t x652 = 15027;

    t102 = (((x649+x650)^x651)*x652);

    if (t102 != 64540469725107LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x653 = -1;
	static int16_t x654 = -1;
	int64_t x655 = -1LL;
	int8_t x656 = 1;
	volatile int64_t t103 = -20704514LL;

    t103 = (((x653+x654)^x655)*x656);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x658 = UINT8_MAX;
	int32_t x659 = INT32_MIN;
	static volatile int32_t x660 = -1;
	static int32_t t104 = -12905;

    t104 = (((x657+x658)^x659)*x660);

    if (t104 != 2147450626) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x661 = INT8_MIN;
	uint64_t x662 = 120LLU;
	int32_t x663 = INT32_MIN;
	int16_t x664 = INT16_MIN;

    t105 = (((x661+x662)^x663)*x664);

    if (t105 != 18446673704965636096LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x665 = 55U;
	uint64_t x667 = UINT64_MAX;
	volatile int16_t x668 = -223;
	uint64_t t106 = 1725442800992316LLU;

    t106 = (((x665+x666)^x667)*x668);

    if (t106 != 12265LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x670 = INT16_MAX;
	volatile int16_t x671 = -57;
	int8_t x672 = 55;

    t107 = (((x669+x670)^x671)*x672);

    if (t107 != 3080) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x673 = INT32_MAX;
	uint64_t x674 = 6003488544652055216LLU;
	uint8_t x675 = 9U;
	uint64_t x676 = UINT64_MAX;

    t108 = (((x673+x674)^x675)*x676);

    if (t108 != 12443255526910012762LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x677 = -1444295;
	int8_t x678 = INT8_MAX;
	static uint64_t x679 = 88814668059237LLU;
	uint64_t x680 = 312821LLU;

    t109 = (((x677+x678)^x679)*x680);

    if (t109 != 9110395238779099265LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x682 = INT8_MIN;
	uint16_t x683 = UINT16_MAX;
	volatile uint8_t x684 = 0U;
	int64_t t110 = 4547269725756LL;

    t110 = (((x681+x682)^x683)*x684);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x685 = 49;
	int8_t x686 = INT8_MIN;
	int16_t x687 = -1;
	int8_t x688 = INT8_MIN;
	int32_t t111 = 916070828;

    t111 = (((x685+x686)^x687)*x688);

    if (t111 != -9984) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x689 = UINT16_MAX;
	int8_t x691 = -3;
	int16_t x692 = -1;
	volatile int64_t t112 = 35885LL;

    t112 = (((x689+x690)^x691)*x692);

    if (t112 != -416371LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x705 = -685;
	int8_t x706 = INT8_MAX;
	int32_t x708 = -1;
	static int32_t t113 = -806604;

    t113 = (((x705+x706)^x707)*x708);

    if (t113 != -32210) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x725 = 20;
	uint64_t x726 = 97344199970887033LLU;
	uint8_t x727 = 1U;
	static int32_t x728 = INT32_MIN;
	static volatile uint64_t t114 = 7809766460088LLU;

    t114 = (((x725+x726)^x727)*x728);

    if (t114 != 11665788932997513216LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x745 = 947239LLU;
	uint32_t x746 = 52U;
	volatile uint32_t x747 = 622U;
	static volatile int16_t x748 = 6192;
	static volatile uint64_t t115 = 1058065494784020346LLU;

    t115 = (((x745+x746)^x747)*x748);

    if (t115 != 5868560880LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x749 = INT8_MAX;
	static uint64_t x750 = 7200846LLU;
	static uint32_t x751 = UINT32_MAX;
	uint64_t t116 = 233881LLU;

    t116 = (((x749+x750)^x751)*x752);

    if (t116 != 8575532644LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x757 = UINT16_MAX;
	int64_t x758 = 23861146504801LL;
	volatile int32_t x759 = INT32_MAX;
	uint8_t x760 = 28U;
	int64_t t117 = -30083216454585435LL;

    t117 = (((x757+x758)^x759)*x760);

    if (t117 != 668146711096676LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x761 = UINT32_MAX;
	int16_t x762 = -1;
	int16_t x763 = 1;
	volatile int16_t x764 = INT16_MIN;
	uint32_t t118 = 861537538U;

    t118 = (((x761+x762)^x763)*x764);

    if (t118 != 32768U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x765 = 19U;
	int32_t x766 = INT32_MIN;
	int64_t x767 = -1LL;
	int16_t x768 = INT16_MIN;
	int64_t t119 = 1450LL;

    t119 = (((x765+x766)^x767)*x768);

    if (t119 != -70368743522304LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x769 = INT32_MAX;
	int32_t x770 = INT32_MIN;
	volatile uint64_t x771 = UINT64_MAX;
	int16_t x772 = INT16_MAX;
	uint64_t t120 = 13022201644450LLU;

    t120 = (((x769+x770)^x771)*x772);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x773 = UINT64_MAX;
	int64_t x774 = -20LL;
	volatile int8_t x775 = -4;

    t121 = (((x773+x774)^x775)*x776);

    if (t121 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x781 = -1;
	static int32_t x782 = -1;
	int16_t x783 = INT16_MIN;
	volatile int64_t t122 = -116648769259448032LL;

    t122 = (((x781+x782)^x783)*x784);

    if (t122 != -32766LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x785 = INT64_MIN;
	static uint16_t x786 = 321U;
	volatile int32_t x787 = INT32_MAX;
	int64_t x788 = -1LL;
	int64_t t123 = -6091834547572567LL;

    t123 = (((x785+x786)^x787)*x788);

    if (t123 != 9223372034707292482LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x789 = -4782418;
	int64_t x791 = INT64_MIN;
	int32_t x792 = -1;

    t124 = (((x789+x790)^x791)*x792);

    if (t124 != 9223372036149343380LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x793 = 27613328082LLU;
	int8_t x794 = -1;
	static int8_t x795 = -1;
	uint64_t x796 = 8139387430664970545LLU;
	volatile uint64_t t125 = 2LLU;

    t125 = (((x793+x794)^x795)*x796);

    if (t125 != 13295370849288352718LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 19995829LLU;
	static uint32_t x799 = UINT32_MAX;
	static uint8_t x800 = UINT8_MAX;
	volatile uint64_t t126 = 1146420LLU;

    t126 = (((x797+x798)^x799)*x800);

    if (t126 != 1090117756470LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x801 = INT8_MIN;
	int32_t x802 = 206;
	int8_t x803 = 3;
	int16_t x804 = INT16_MAX;
	volatile int32_t t127 = 96;

    t127 = (((x801+x802)^x803)*x804);

    if (t127 != 2523059) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x805 = 0LLU;
	int32_t x806 = -43811;
	int16_t x807 = -9666;
	int32_t x808 = -1;

    t128 = (((x805+x806)^x807)*x808);

    if (t128 != 18446744073709515037LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	int8_t x810 = INT8_MIN;
	uint64_t x811 = 302170LLU;
	int8_t x812 = INT8_MAX;
	static uint64_t t129 = 207347093563LLU;

    t129 = (((x809+x810)^x811)*x812);

    if (t129 != 38368859LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x817 = INT32_MIN;
	volatile uint16_t x818 = 40U;
	uint32_t x819 = 2486436U;
	int16_t x820 = INT16_MIN;
	volatile uint32_t t130 = 105320U;

    t130 = (((x817+x818)^x819)*x820);

    if (t130 != 129630208U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x829 = -20923;
	uint8_t x830 = 63U;
	int16_t x831 = -1;
	static uint8_t x832 = UINT8_MAX;
	volatile int32_t t131 = 6890619;

    t131 = (((x829+x830)^x831)*x832);

    if (t131 != 5319045) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x837 = 25136U;
	int32_t x838 = -1868170;
	uint32_t x839 = 67479U;
	uint64_t x840 = UINT64_MAX;
	uint64_t t132 = 23580306136539635LLU;

    t132 = (((x837+x838)^x839)*x840);

    if (t132 != 18446744069416491215LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x842 = -6;
	int64_t x843 = 421127876900304LL;
	uint16_t x844 = 5U;
	static int64_t t133 = 29781687310262LL;

    t133 = (((x841+x842)^x843)*x844);

    if (t133 != -2105639384337710LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x845 = 0;
	int16_t x846 = INT16_MIN;
	int16_t x847 = -1;
	volatile uint64_t x848 = 3249527807687699LLU;
	uint64_t t134 = 43767601129061792LLU;

    t134 = (((x845+x846)^x847)*x848);

    if (t134 != 14243557305955075053LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x849 = -1;
	static volatile int16_t x850 = INT16_MIN;
	volatile uint64_t x851 = UINT64_MAX;
	uint64_t x852 = 81455615LLU;
	uint64_t t135 = 57LLU;

    t135 = (((x849+x850)^x851)*x852);

    if (t135 != 2669137592320LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x853 = -1;
	uint32_t x855 = 944U;
	int16_t x856 = 110;

    t136 = (((x853+x854)^x855)*x856);

    if (t136 != 2318470LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x861 = 4LLU;
	int64_t x862 = 17354576LL;
	uint32_t x864 = 240043120U;
	uint64_t t137 = 145888732LLU;

    t137 = (((x861+x862)^x863)*x864);

    if (t137 != 18442578217298466576LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x865 = -7958LL;
	static int8_t x866 = 0;
	uint64_t x867 = 3333529LLU;
	int8_t x868 = INT8_MAX;
	uint64_t t138 = 60029207658762486LLU;

    t138 = (((x865+x866)^x867)*x868);

    if (t138 != 18446744073287072781LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x869 = INT8_MIN;
	static volatile int64_t x870 = INT64_MAX;
	uint64_t x872 = 12344177LLU;
	uint64_t t139 = 343328007090304LLU;

    t139 = (((x869+x870)^x871)*x872);

    if (t139 != 9223372040002540943LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x873 = 271U;
	static int8_t x874 = -1;
	uint8_t x875 = UINT8_MAX;
	volatile uint32_t x876 = 360925U;
	static uint32_t t140 = 8U;

    t140 = (((x873+x874)^x875)*x876);

    if (t140 != 179379725U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x881 = INT16_MAX;
	uint32_t x882 = UINT32_MAX;
	volatile int64_t t141 = INT64_MIN;

    t141 = (((x881+x882)^x883)*x884);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x901 = UINT32_MAX;
	int32_t x902 = -3;
	volatile uint64_t x903 = UINT64_MAX;
	volatile uint16_t x904 = 7222U;
	volatile uint64_t t142 = 61380LLU;

    t142 = (((x901+x902)^x903)*x904);

    if (t142 != 18446713055455761570LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x905 = 455U;
	int16_t x906 = INT16_MAX;
	static uint8_t x907 = 6U;
	static uint8_t x908 = 25U;
	static int32_t t143 = 0;

    t143 = (((x905+x906)^x907)*x908);

    if (t143 != 830400) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x910 = INT32_MAX;
	uint8_t x911 = 26U;
	int8_t x912 = -1;
	static volatile int64_t t144 = -1485LL;

    t144 = (((x909+x910)^x911)*x912);

    if (t144 != 9223372034707292187LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x913 = -5970792LL;
	uint64_t x915 = UINT64_MAX;
	uint8_t x916 = 5U;
	uint64_t t145 = 98137976307400LLU;

    t145 = (((x913+x914)^x915)*x916);

    if (t145 != 29831900LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x917 = 14U;
	uint8_t x920 = UINT8_MAX;

    t146 = (((x917+x918)^x919)*x920);

    if (t146 != 8326770) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x924 = 3993;

    t147 = (((x921+x922)^x923)*x924);

    if (t147 != 9223378342904989799LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x926 = 27385U;
	static uint32_t x927 = 14957U;
	int64_t x928 = -1LL;
	int64_t t148 = -1042624086316LL;

    t148 = (((x925+x926)^x927)*x928);

    if (t148 != -20757LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x929 = INT16_MIN;
	uint16_t x930 = 148U;
	static volatile int8_t x931 = INT8_MIN;
	int32_t x932 = -1;

    t149 = (((x929+x930)^x931)*x932);

    if (t149 != -32532) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x933 = INT8_MIN;
	int64_t x935 = -63144855LL;
	volatile uint64_t t150 = 477LLU;

    t150 = (((x933+x934)^x935)*x936);

    if (t150 != 9223372036791631082LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x946 = 1;
	int16_t x948 = -1;
	int32_t t151 = -4982;

    t151 = (((x945+x946)^x947)*x948);

    if (t151 != 114) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x953 = 3U;
	uint16_t x955 = UINT16_MAX;
	static volatile int16_t x956 = INT16_MIN;

    t152 = (((x953+x954)^x955)*x956);

    if (t152 != 2147581952U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x961 = 0;
	volatile uint32_t x962 = UINT32_MAX;
	int8_t x963 = 2;
	static int32_t x964 = INT32_MIN;

    t153 = (((x961+x962)^x963)*x964);

    if (t153 != 2147483648U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x966 = INT16_MIN;
	static int64_t x967 = -1LL;
	int32_t x968 = INT32_MAX;

    t154 = (((x965+x966)^x967)*x968);

    if (t154 != 70368744144896LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x969 = INT16_MAX;
	volatile int8_t x971 = -38;
	static int16_t x972 = INT16_MIN;
	static uint32_t t155 = 56148U;

    t155 = (((x969+x970)^x971)*x972);

    if (t155 != 1072562176U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x973 = UINT16_MAX;
	int64_t x974 = -494301120213LL;
	static uint64_t x976 = 19LLU;
	static uint64_t t156 = 2136342151990316LLU;

    t156 = (((x973+x974)^x975)*x976);

    if (t156 != 9391720038863LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x977 = UINT16_MAX;
	int32_t x978 = 2194424;
	static int8_t x979 = -1;
	static int64_t x980 = -9742509LL;
	int64_t t157 = 587896643562161413LL;

    t157 = (((x977+x978)^x979)*x980);

    if (t157 != 22017680639640LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x989 = 5U;
	volatile uint64_t x991 = 682589839LLU;
	uint32_t x992 = UINT32_MAX;
	static uint64_t t158 = 53624662LLU;

    t158 = (((x989+x990)^x991)*x992);

    if (t158 != 15338055434307389401LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x996 = -1;
	volatile uint64_t t159 = 10058520804LLU;

    t159 = (((x993+x994)^x995)*x996);

    if (t159 != 18446744072149527684LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x1001 = 18501458;
	int16_t x1002 = -1;
	static uint32_t x1003 = 5166478U;
	volatile uint32_t t160 = 1238261U;

    t160 = (((x1001+x1002)^x1003)*x1004);

    if (t160 != 1437765760U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x1009 = 771300572LLU;
	int8_t x1011 = INT8_MAX;
	volatile uint64_t t161 = 79098528047028LLU;

    t161 = (((x1009+x1010)^x1011)*x1012);

    if (t161 != 10235105435700LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x1013 = 17U;
	volatile int16_t x1015 = INT16_MIN;
	uint32_t x1016 = 364196U;
	static volatile uint32_t t162 = 10199U;

    t162 = (((x1013+x1014)^x1015)*x1016);

    if (t162 != 955297712U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1018 = 2012938542U;
	static volatile uint32_t x1020 = UINT32_MAX;
	uint32_t t163 = 19784759U;

    t163 = (((x1017+x1018)^x1019)*x1020);

    if (t163 != 134545234U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x1021 = INT8_MIN;
	volatile uint16_t x1022 = 1U;
	static int64_t x1023 = 71440764629082LL;
	volatile int64_t t164 = 90132178195707LL;

    t164 = (((x1021+x1022)^x1023)*x1024);

    if (t164 != -18217394980402395LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x1025 = UINT64_MAX;
	int64_t x1026 = -1124232718992LL;
	int32_t x1027 = INT32_MAX;
	int16_t x1028 = INT16_MIN;
	static uint64_t t165 = 42676028170184LLU;

    t165 = (((x1025+x1026)^x1027)*x1028);

    if (t165 != 36837217418084352LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1033 = 1;
	uint8_t x1036 = UINT8_MAX;

    t166 = (((x1033+x1034)^x1035)*x1036);

    if (t166 != -18670080) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1037 = -11689662;
	static int8_t x1038 = INT8_MIN;
	static volatile int32_t x1039 = -1;

    t167 = (((x1037+x1038)^x1039)*x1040);

    if (t167 != 4283277507U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1041 = -58;
	int8_t x1042 = 0;
	static uint32_t x1043 = UINT32_MAX;
	int32_t x1044 = -1;

    t168 = (((x1041+x1042)^x1043)*x1044);

    if (t168 != 4294967239U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1049 = -5407;
	uint8_t x1050 = 27U;
	static int8_t x1052 = INT8_MAX;
	int32_t t169 = -19405874;

    t169 = (((x1049+x1050)^x1051)*x1052);

    if (t169 != -264922) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1057 = -1;
	volatile int8_t x1058 = -15;
	static int8_t x1059 = INT8_MIN;
	volatile uint64_t t170 = 684347033LLU;

    t170 = (((x1057+x1058)^x1059)*x1060);

    if (t170 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1061 = -1;
	static int64_t x1062 = 564269LL;
	volatile int64_t x1063 = -147LL;
	int64_t t171 = -501902006912769LL;

    t171 = (((x1061+x1062)^x1063)*x1064);

    if (t171 != 72245120LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1065 = INT8_MIN;
	volatile int16_t x1066 = INT16_MIN;
	int64_t x1068 = 1LL;
	volatile int64_t t172 = 5820981645LL;

    t172 = (((x1065+x1066)^x1067)*x1068);

    if (t172 != 33292LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1070 = UINT32_MAX;
	int64_t x1071 = INT64_MIN;
	uint64_t t173 = 9537296229544095LLU;

    t173 = (((x1069+x1070)^x1071)*x1072);

    if (t173 != 18446744036691309457LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1077 = INT32_MAX;
	uint64_t x1078 = 1LLU;
	int32_t x1079 = -10448439;
	int64_t x1080 = INT64_MIN;

    t174 = (((x1077+x1078)^x1079)*x1080);

    if (t174 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1082 = INT16_MAX;
	uint8_t x1083 = 1U;
	static uint8_t x1084 = UINT8_MAX;
	volatile int64_t t175 = 2225861325326921LL;

    t175 = (((x1081+x1082)^x1083)*x1084);

    if (t175 != 8355585LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1085 = 10216249U;
	static int64_t x1086 = INT64_MIN;
	static int64_t x1087 = INT64_MIN;
	static volatile uint32_t x1088 = 5U;
	static int64_t t176 = 0LL;

    t176 = (((x1085+x1086)^x1087)*x1088);

    if (t176 != 51081245LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1093 = INT8_MAX;
	int16_t x1094 = INT16_MIN;
	int64_t t177 = 507620283995LL;

    t177 = (((x1093+x1094)^x1095)*x1096);

    if (t177 != -32066LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1102 = -1;
	static uint8_t x1104 = 30U;
	int32_t t178 = 885770023;

    t178 = (((x1101+x1102)^x1103)*x1104);

    if (t178 != -6360) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1105 = UINT32_MAX;
	volatile uint16_t x1108 = 98U;
	volatile uint32_t t179 = 0U;

    t179 = (((x1105+x1106)^x1107)*x1108);

    if (t179 != 5978U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x1109 = 71593024LLU;
	uint8_t x1110 = 27U;
	static int8_t x1111 = INT8_MAX;
	volatile int64_t x1112 = -12116628LL;
	volatile uint64_t t180 = 123075038536LLU;

    t180 = (((x1109+x1110)^x1111)*x1112);

    if (t180 != 18445876608009614128LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1121 = INT16_MIN;
	static volatile uint32_t x1122 = UINT32_MAX;
	int32_t x1123 = INT32_MAX;
	int16_t x1124 = -13;
	uint32_t t181 = 446713037U;

    t181 = (((x1121+x1122)^x1123)*x1124);

    if (t181 != 2147057664U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1125 = UINT8_MAX;
	int16_t x1126 = 7547;
	volatile int16_t x1127 = INT16_MAX;

    t182 = (((x1125+x1126)^x1127)*x1128);

    if (t182 != 62637185U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint32_t x1133 = 1U;
	volatile int16_t x1134 = -290;
	static int32_t x1135 = INT32_MIN;
	int8_t x1136 = INT8_MIN;

    t183 = (((x1133+x1134)^x1135)*x1136);

    if (t183 != 36992U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x1137 = 51358LLU;
	uint32_t x1138 = 261571727U;
	int16_t x1139 = 6;
	static int8_t x1140 = INT8_MIN;
	volatile uint64_t t184 = 24639047715223LLU;

    t184 = (((x1137+x1138)^x1139)*x1140);

    if (t184 != 18446744040221796992LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1141 = INT16_MAX;
	static int8_t x1142 = INT8_MAX;
	static volatile int64_t x1143 = 27LL;
	volatile int64_t t185 = 59533979952865LL;

    t185 = (((x1141+x1142)^x1143)*x1144);

    if (t185 != -32869LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1145 = 54;
	int64_t x1146 = 0LL;
	int8_t x1147 = INT8_MIN;
	int64_t x1148 = -40725LL;
	int64_t t186 = 267203LL;

    t186 = (((x1145+x1146)^x1147)*x1148);

    if (t186 != 3013650LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x1149 = UINT64_MAX;
	static int16_t x1152 = INT16_MAX;
	static uint64_t t187 = 34152958922775LLU;

    t187 = (((x1149+x1150)^x1151)*x1152);

    if (t187 != 140733193322498LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1153 = 3635671663908491621LLU;
	uint64_t x1154 = UINT64_MAX;
	static volatile uint16_t x1155 = 222U;
	int64_t x1156 = -3LL;
	volatile uint64_t t188 = 3618LLU;

    t188 = (((x1153+x1154)^x1155)*x1156);

    if (t188 != 7539729081984076498LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1165 = INT16_MIN;
	uint32_t x1166 = UINT32_MAX;
	static uint16_t x1167 = 29776U;
	uint32_t t189 = 2U;

    t189 = (((x1165+x1166)^x1167)*x1168);

    if (t189 != 4287024081U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1169 = INT16_MIN;
	uint64_t x1170 = 25497268860856LLU;
	static int8_t x1171 = 5;
	int32_t x1172 = -29;

    t190 = (((x1169+x1170)^x1171)*x1172);

    if (t190 != 18446004652913536919LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1173 = 5LL;
	int8_t x1175 = INT8_MIN;
	uint32_t x1176 = 2U;
	static volatile int64_t t191 = -1051LL;

    t191 = (((x1173+x1174)^x1175)*x1176);

    if (t191 != -248LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1181 = UINT8_MAX;
	static uint64_t x1182 = UINT64_MAX;
	uint64_t x1183 = UINT64_MAX;
	int16_t x1184 = INT16_MIN;
	uint64_t t192 = 66300LLU;

    t192 = (((x1181+x1182)^x1183)*x1184);

    if (t192 != 8355840LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1189 = INT8_MIN;
	int16_t x1190 = -1;
	uint8_t x1191 = 43U;
	volatile int8_t x1192 = INT8_MAX;
	int32_t t193 = 0;

    t193 = (((x1189+x1190)^x1191)*x1192);

    if (t193 != -21844) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1195 = 1626163635646200042LL;
	int8_t x1196 = 1;
	volatile int64_t t194 = 443464133737LL;

    t194 = (((x1193+x1194)^x1195)*x1196);

    if (t194 != 1626163631574386452LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1197 = 133;
	static uint32_t x1199 = UINT32_MAX;
	static uint8_t x1200 = 13U;
	volatile uint64_t t195 = 1096976233910659LLU;

    t195 = (((x1197+x1198)^x1199)*x1200);

    if (t195 != 434272811387701LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1214 = 10U;
	uint32_t x1215 = 45U;
	static volatile uint32_t t196 = 85U;

    t196 = (((x1213+x1214)^x1215)*x1216);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x1218 = INT16_MIN;
	volatile uint64_t x1219 = 96785118747911LLU;
	volatile int64_t x1220 = INT64_MIN;
	volatile uint64_t t197 = 256860585655LLU;

    t197 = (((x1217+x1218)^x1219)*x1220);

    if (t197 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1233 = UINT64_MAX;
	int32_t x1234 = INT32_MIN;
	int8_t x1236 = 5;
	static uint64_t t198 = 1921LLU;

    t198 = (((x1233+x1234)^x1235)*x1236);

    if (t198 != 18446744062972125956LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x1237 = -1;
	uint16_t x1238 = 181U;
	uint64_t x1239 = 5434479030LLU;
	int32_t x1240 = 0;
	static volatile uint64_t t199 = 392217141239422LLU;

    t199 = (((x1237+x1238)^x1239)*x1240);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

