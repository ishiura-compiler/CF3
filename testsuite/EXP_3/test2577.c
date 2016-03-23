
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

static int8_t x16 = INT8_MAX;
uint16_t x28 = 246U;
int16_t x33 = -1;
static volatile int64_t t6 = 42161615960LL;
uint16_t x74 = 5633U;
int8_t x75 = INT8_MIN;
int8_t x77 = INT8_MAX;
uint16_t x78 = 366U;
int32_t x82 = INT32_MAX;
static int64_t t12 = -1583274858882LL;
static int8_t x86 = INT8_MAX;
volatile int64_t x93 = -1LL;
volatile uint64_t t16 = 17804LLU;
int16_t x105 = INT16_MAX;
volatile int8_t x106 = INT8_MIN;
static int32_t t17 = 41;
volatile uint8_t x144 = 0U;
int16_t x148 = INT16_MIN;
volatile uint32_t t24 = 327U;
int8_t x153 = 10;
volatile uint64_t t27 = 2541LLU;
uint32_t x162 = 92404U;
int16_t x178 = -8172;
int16_t x187 = INT16_MAX;
volatile int16_t x188 = -380;
int32_t t32 = 2667906;
int16_t x193 = INT16_MIN;
int16_t x194 = INT16_MIN;
static volatile uint32_t x195 = 580U;
volatile int32_t t34 = 731881279;
int8_t x202 = -1;
volatile int32_t x211 = 486006;
uint8_t x226 = UINT8_MAX;
volatile int64_t x227 = -1LL;
volatile uint64_t t38 = 8509790875517LLU;
volatile int16_t x231 = -1;
volatile int32_t x232 = 2377078;
int32_t t39 = -346;
int64_t x239 = INT64_MIN;
uint8_t x240 = UINT8_MAX;
volatile uint16_t x251 = 30U;
int32_t x255 = -31371;
uint8_t x260 = UINT8_MAX;
volatile int64_t x262 = -229813334545LL;
volatile uint8_t x270 = UINT8_MAX;
int8_t x281 = -1;
int16_t x285 = INT16_MIN;
int32_t x287 = INT32_MAX;
volatile int32_t x295 = 34464;
uint64_t x297 = 5879021LLU;
uint64_t x300 = 0LLU;
volatile int64_t x306 = INT64_MIN;
volatile int32_t x309 = INT32_MAX;
uint16_t x337 = 15U;
volatile int16_t x339 = -1;
int32_t x344 = INT32_MIN;
static uint32_t x346 = 27791433U;
int64_t x350 = -19LL;
uint16_t x355 = 27U;
volatile uint8_t x357 = UINT8_MAX;
int32_t x359 = -1;
static int64_t x360 = 21LL;
int8_t x364 = INT8_MIN;
uint16_t x369 = 0U;
static uint16_t x370 = 69U;
int64_t t64 = 179LL;
static uint16_t x373 = UINT16_MAX;
int8_t x380 = -1;
static int32_t t66 = -165659;
uint8_t x388 = 1U;
uint64_t t71 = 8099816942840345LLU;
uint64_t x414 = 906457589249114884LLU;
uint64_t x422 = 2688LLU;
uint64_t x433 = 5528205657236LLU;
static int8_t x434 = 4;
static int8_t x436 = 1;
uint32_t x443 = UINT32_MAX;
volatile int8_t x447 = -1;
uint64_t t78 = 704557LLU;
uint64_t x468 = 2974018LLU;
volatile uint32_t x474 = 6U;
uint32_t t82 = 73U;
int64_t x480 = INT64_MAX;
uint64_t x490 = 267173506738LLU;
uint16_t x494 = UINT16_MAX;
int64_t x496 = -34LL;
volatile int64_t x497 = -14209835568785LL;
volatile uint64_t x498 = UINT64_MAX;
static uint16_t x514 = UINT16_MAX;
int64_t x523 = 409361183479LL;
int16_t x524 = INT16_MAX;
int64_t t90 = -3872503939LL;
static int32_t x534 = 891;
volatile int32_t t92 = -1984071;
uint64_t x538 = 106856428931175LLU;
uint32_t x549 = 14719U;
volatile int16_t x551 = -1;
uint64_t x552 = 26LLU;
uint8_t x564 = 6U;
volatile uint32_t t98 = 1037304U;
int16_t x583 = -3;
uint32_t t100 = 46U;
int32_t x587 = INT32_MIN;
volatile int32_t x588 = -1;
volatile uint64_t t103 = 140LLU;
static uint16_t x609 = UINT16_MAX;
uint64_t x620 = 280111868802239259LLU;
volatile uint64_t t106 = 8326216510LLU;
volatile int32_t x628 = INT32_MIN;
volatile int32_t t111 = -9486988;
static uint8_t x648 = 1U;
uint32_t x652 = UINT32_MAX;
static int64_t t114 = -3513889732238528LL;
int16_t x663 = 25;
int16_t x664 = INT16_MIN;
int32_t t116 = 2540;
static volatile int32_t x679 = INT32_MIN;
int16_t x686 = 4;
int16_t x687 = INT16_MIN;
uint32_t x689 = 35668486U;
int16_t x691 = -1;
uint32_t x701 = 102U;
int32_t x702 = INT32_MIN;
static volatile int64_t x703 = -1LL;
static uint8_t x705 = 1U;
volatile int8_t x707 = -1;
uint16_t x727 = 0U;
volatile int8_t x728 = INT8_MIN;
uint16_t x731 = 15530U;
volatile int32_t t128 = -60216982;
uint8_t x736 = 4U;
volatile int32_t x741 = 1;
int8_t x742 = -3;
volatile uint16_t x747 = UINT16_MAX;
volatile int16_t x749 = INT16_MIN;
int8_t x751 = INT8_MIN;
int32_t x767 = INT32_MIN;
uint64_t x770 = UINT64_MAX;
static volatile uint16_t x773 = UINT16_MAX;
volatile int32_t t137 = 1;
uint64_t x786 = 83156564816696483LLU;
uint32_t x790 = 46365U;
int16_t x792 = -1;
uint8_t x801 = UINT8_MAX;
uint16_t x804 = 935U;
static volatile int64_t t141 = 752691552419LL;
uint32_t x809 = 124U;
int64_t t142 = 38911LL;
volatile int16_t x814 = INT16_MAX;
static int32_t x823 = -1;
static uint32_t t145 = 18315U;
uint64_t t149 = 29408165840LLU;
static int64_t x859 = 8481210010LL;
int8_t x860 = 0;
volatile int8_t x863 = -51;
volatile int8_t x865 = INT8_MIN;
static uint16_t x870 = 33U;
static volatile int32_t x892 = INT32_MIN;
static volatile int64_t x895 = INT64_MIN;
int64_t x902 = 356673LL;
static int32_t x916 = -508163594;
uint64_t x918 = 8940334298156588468LLU;
static uint16_t x930 = 1U;
volatile int16_t x932 = INT16_MAX;
int64_t t163 = -38541621855499LL;
volatile int32_t x935 = INT32_MAX;
int16_t x942 = INT16_MIN;
int32_t x949 = -1;
static int16_t x957 = 102;
static volatile int32_t t170 = 22583;
volatile int8_t x969 = INT8_MIN;
volatile uint8_t x970 = UINT8_MAX;
int8_t x971 = INT8_MAX;
int32_t x980 = -449965;
uint8_t x988 = UINT8_MAX;
volatile int16_t x990 = INT16_MIN;
volatile int32_t t174 = 219734406;
int16_t x993 = 322;
int8_t x995 = -43;
volatile uint32_t x999 = UINT32_MAX;
static uint8_t x1000 = 3U;
int64_t x1002 = INT64_MIN;
int32_t x1003 = -1;
uint32_t x1007 = UINT32_MAX;
volatile uint32_t x1014 = 93551356U;
int16_t x1021 = INT16_MAX;
volatile int16_t x1032 = -1;
uint8_t x1042 = 63U;
uint64_t t186 = 791762367665LLU;
static int16_t x1048 = INT16_MAX;
uint32_t x1052 = 2U;
static int8_t x1066 = INT8_MAX;
static int16_t x1073 = -1;
int64_t x1079 = -1LL;
volatile int32_t x1088 = INT32_MIN;
int8_t x1092 = -13;
volatile uint64_t t195 = 1LLU;
volatile int8_t x1119 = 8;
uint64_t x1125 = 52558296712813LLU;
volatile uint64_t t198 = 1664119652867237388LLU;
uint32_t x1132 = UINT32_MAX;


void f0(void) {
    	static uint64_t x5 = 4018460669345LLU;
	static int16_t x6 = 1290;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t0 = 6044693LLU;

    t0 = ((x5*x6)+(x7^x8));

    if (t0 != 9228555848970747210LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x10 = 902347;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 62264917876657LLU;
	volatile uint64_t t1 = 2449913309236LLU;

    t1 = ((x9*x10)+(x11^x12));

    if (t1 != 18446681808676174513LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = UINT64_MAX;
	static uint16_t x14 = UINT16_MAX;
	int16_t x15 = 1;
	uint64_t t2 = 1049984994168LLU;

    t2 = ((x13*x14)+(x15^x16));

    if (t2 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = -1;
	static int16_t x18 = 119;
	int32_t x19 = -68887;
	int8_t x20 = -1;
	static int32_t t3 = 3781626;

    t3 = ((x17*x18)+(x19^x20));

    if (t3 != 68767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = -1;
	int64_t x26 = -1LL;
	volatile int8_t x27 = 7;
	volatile int64_t t4 = -60476080172135LL;

    t4 = ((x25*x26)+(x27^x28));

    if (t4 != 242LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = -1;
	int16_t x30 = -1;
	uint32_t x31 = 2133U;
	static uint8_t x32 = 0U;
	volatile uint32_t t5 = 3U;

    t5 = ((x29*x30)+(x31^x32));

    if (t5 != 2134U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x34 = UINT32_MAX;
	static volatile int64_t x35 = 3130377192345942775LL;
	volatile int8_t x36 = INT8_MIN;

    t6 = ((x33*x34)+(x35^x36));

    if (t6 != -3130377192345942664LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = UINT8_MAX;
	volatile uint32_t x46 = 1391U;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = 505584U;
	int64_t t7 = -245LL;

    t7 = ((x45*x46)+(x47^x48));

    if (t7 != -9223372036853915519LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x49 = UINT16_MAX;
	static uint32_t x50 = 11U;
	int8_t x51 = INT8_MAX;
	int8_t x52 = INT8_MAX;
	volatile uint32_t t8 = 24672U;

    t8 = ((x49*x50)+(x51^x52));

    if (t8 != 720885U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x69 = UINT16_MAX;
	volatile int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MAX;
	static int64_t x72 = -1LL;
	volatile int64_t t9 = 1952841972361LL;

    t9 = ((x69*x70)+(x71^x72));

    if (t9 != -2155872128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x73 = -1268;
	volatile int16_t x76 = 5339;
	volatile int32_t t10 = 2958741;

    t10 = ((x73*x74)+(x75^x76));

    if (t10 != -7147929) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint16_t x79 = 3U;
	int16_t x80 = 1;
	volatile int32_t t11 = -8009;

    t11 = ((x77*x78)+(x79^x80));

    if (t11 != 46484) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x81 = -1;
	int64_t x83 = -1LL;
	int32_t x84 = 34749;

    t12 = ((x81*x82)+(x83^x84));

    if (t12 != -2147518397LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x85 = 25700599968LLU;
	uint16_t x87 = UINT16_MAX;
	volatile int16_t x88 = INT16_MIN;
	static uint64_t t13 = 106065891618401069LLU;

    t13 = ((x85*x86)+(x87^x88));

    if (t13 != 3263976163167LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x89 = -1;
	uint16_t x90 = 85U;
	uint8_t x91 = UINT8_MAX;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t14 = -10130819472597LL;

    t14 = ((x89*x90)+(x91^x92));

    if (t14 != 9223372036854775467LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x94 = UINT8_MAX;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	volatile int64_t t15 = -281553LL;

    t15 = ((x93*x94)+(x95^x96));

    if (t15 != 2147483265LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x101 = 34U;
	uint64_t x102 = 2580027LLU;
	static volatile int8_t x103 = 0;
	static int16_t x104 = -1;

    t16 = ((x101*x102)+(x103^x104));

    if (t16 != 87720917LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x107 = 38U;
	int16_t x108 = 82;

    t17 = ((x105*x106)+(x107^x108));

    if (t17 != -4194060) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x109 = -1LL;
	volatile uint32_t x110 = 74268U;
	uint8_t x111 = UINT8_MAX;
	uint64_t x112 = 136158938671956534LLU;
	uint64_t t18 = 433267986LLU;

    t18 = ((x109*x110)+(x111^x112));

    if (t18 != 136158938671882413LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x121 = 399226;
	uint64_t x122 = 1LLU;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = 262;
	volatile uint64_t t19 = 14359198719016LLU;

    t19 = ((x121*x122)+(x123^x124));

    if (t19 != 399731LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x125 = 11U;
	uint32_t x126 = 4660134U;
	int64_t x127 = -1LL;
	static int8_t x128 = INT8_MAX;
	int64_t t20 = -2193383050LL;

    t20 = ((x125*x126)+(x127^x128));

    if (t20 != 51261346LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x129 = -1LL;
	int8_t x130 = INT8_MAX;
	static uint64_t x131 = UINT64_MAX;
	static int8_t x132 = INT8_MAX;
	volatile uint64_t t21 = 1336717085LLU;

    t21 = ((x129*x130)+(x131^x132));

    if (t21 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x133 = 3U;
	static int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 65381039U;
	static volatile int64_t t22 = 1890438LL;

    t22 = ((x133*x134)+(x135^x136));

    if (t22 != -9223372036789394772LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x141 = -35;
	int8_t x142 = INT8_MIN;
	uint32_t x143 = 2032U;
	uint32_t t23 = 149946621U;

    t23 = ((x141*x142)+(x143^x144));

    if (t23 != 6512U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x145 = 13U;
	volatile uint16_t x146 = 49U;
	uint32_t x147 = 116U;

    t24 = ((x145*x146)+(x147^x148));

    if (t24 != 4294935281U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x149 = 2295503042366169976LLU;
	uint32_t x150 = UINT32_MAX;
	volatile uint32_t x151 = 2020U;
	int32_t x152 = INT32_MIN;
	uint64_t t25 = 120122669679935LLU;

    t25 = ((x149*x150)+(x151^x152));

    if (t25 != 13633838208837985388LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x154 = UINT64_MAX;
	volatile int64_t x155 = -16351965616LL;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t26 = 3415768LLU;

    t26 = ((x153*x154)+(x155^x156));

    if (t26 != 16351965638LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x157 = INT16_MIN;
	uint32_t x158 = UINT32_MAX;
	static uint64_t x159 = 1700LLU;
	static int64_t x160 = 233090LL;

    t27 = ((x157*x158)+(x159^x160));

    if (t27 != 264230LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x161 = 196U;
	int64_t x163 = -1LL;
	int8_t x164 = INT8_MAX;
	int64_t t28 = -5644501657LL;

    t28 = ((x161*x162)+(x163^x164));

    if (t28 != 18111056LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x173 = -1;
	int32_t x174 = -7597510;
	static int16_t x175 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;
	uint32_t t29 = 19878U;

    t29 = ((x173*x174)+(x175^x176));

    if (t29 != 7630277U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x177 = -1;
	uint32_t x179 = 1603804U;
	uint8_t x180 = 2U;
	uint32_t t30 = 0U;

    t30 = ((x177*x178)+(x179^x180));

    if (t30 != 1611978U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x181 = UINT16_MAX;
	volatile int8_t x182 = INT8_MAX;
	int16_t x183 = INT16_MAX;
	uint8_t x184 = 7U;
	int32_t t31 = -29;

    t31 = ((x181*x182)+(x183^x184));

    if (t31 != 8355705) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x185 = UINT8_MAX;
	int16_t x186 = -15;

    t32 = ((x185*x186)+(x187^x188));

    if (t32 != -36214) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x196 = 3;
	volatile uint32_t t33 = 1991U;

    t33 = ((x193*x194)+(x195^x196));

    if (t33 != 1073742407U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x197 = -1;
	volatile uint16_t x198 = UINT16_MAX;
	static int32_t x199 = 8931667;
	int32_t x200 = INT32_MAX;

    t34 = ((x197*x198)+(x199^x200));

    if (t34 != 2138486445) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x201 = -808;
	int8_t x203 = 1;
	volatile int16_t x204 = 8756;
	int32_t t35 = 0;

    t35 = ((x201*x202)+(x203^x204));

    if (t35 != 9565) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x205 = -1;
	volatile int16_t x206 = INT16_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = INT8_MIN;
	uint32_t t36 = 75810U;

    t36 = ((x205*x206)+(x207^x208));

    if (t36 != 4294934656U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x209 = 19535834612207LL;
	uint8_t x210 = 3U;
	volatile int8_t x212 = INT8_MIN;
	int64_t t37 = -234191LL;

    t37 = ((x209*x210)+(x211^x212));

    if (t37 != 58607503350723LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x225 = INT8_MIN;
	uint64_t x228 = 1131724LLU;

    t38 = ((x225*x226)+(x227^x228));

    if (t38 != 18446744073708387251LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x229 = -1;
	uint16_t x230 = 0U;

    t39 = ((x229*x230)+(x231^x232));

    if (t39 != -2377079) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x233 = INT32_MIN;
	uint64_t x234 = UINT64_MAX;
	uint8_t x235 = 11U;
	int16_t x236 = INT16_MAX;
	volatile uint64_t t40 = 4LLU;

    t40 = ((x233*x234)+(x235^x236));

    if (t40 != 2147516404LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x237 = UINT8_MAX;
	static int8_t x238 = 22;
	static volatile int64_t t41 = 8493585LL;

    t41 = ((x237*x238)+(x239^x240));

    if (t41 != -9223372036854769943LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x249 = INT8_MAX;
	static int16_t x250 = -1;
	int64_t x252 = -1306439LL;
	volatile int64_t t42 = -2065844654174041LL;

    t42 = ((x249*x250)+(x251^x252));

    if (t42 != -1306584LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	int64_t x256 = -1LL;
	int64_t t43 = -76400985732994LL;

    t43 = ((x253*x254)+(x255^x256));

    if (t43 != 64138LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x257 = 56326048194910925LLU;
	uint32_t x258 = 57U;
	static volatile int64_t x259 = INT64_MIN;
	volatile uint64_t t44 = 1009LLU;

    t44 = ((x257*x258)+(x259^x260));

    if (t44 != 12433956783964698788LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x261 = 1141U;
	int32_t x263 = INT32_MAX;
	static uint32_t x264 = 10098U;
	static volatile int64_t t45 = -486755241928777656LL;

    t45 = ((x261*x262)+(x263^x264));

    if (t45 != -262214867242296LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x265 = INT16_MIN;
	uint16_t x266 = UINT16_MAX;
	uint32_t x267 = 8179807U;
	int64_t x268 = -200774255LL;
	volatile int64_t t46 = -185301LL;

    t46 = ((x265*x266)+(x267^x268));

    if (t46 != -2341126706LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x269 = UINT8_MAX;
	int8_t x271 = -1;
	volatile uint64_t x272 = 237378955LLU;
	uint64_t t47 = 78849LLU;

    t47 = ((x269*x270)+(x271^x272));

    if (t47 != 18446744073472237685LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x282 = 525;
	int64_t x283 = 2LL;
	uint16_t x284 = 6U;
	volatile int64_t t48 = 5011057977LL;

    t48 = ((x281*x282)+(x283^x284));

    if (t48 != -521LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x286 = 7U;
	int8_t x288 = 2;
	static volatile int32_t t49 = 1918;

    t49 = ((x285*x286)+(x287^x288));

    if (t49 != 2147254269) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x293 = -1;
	uint32_t x294 = 8428U;
	volatile int16_t x296 = INT16_MAX;
	uint32_t t50 = 93U;

    t50 = ((x293*x294)+(x295^x296));

    if (t50 != 55411U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x298 = -44;
	static int8_t x299 = -1;
	volatile uint64_t t51 = 515138289LLU;

    t51 = ((x297*x298)+(x299^x300));

    if (t51 != 18446744073450874691LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x305 = 256942587930557644LLU;
	static int32_t x307 = 252794;
	int64_t x308 = -1LL;
	uint64_t t52 = 6994051836LLU;

    t52 = ((x305*x306)+(x307^x308));

    if (t52 != 18446744073709298821LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x310 = 109U;
	uint64_t x311 = 4421156940317645764LLU;
	volatile int8_t x312 = -1;
	static uint64_t t53 = 1044200456602010412LLU;

    t53 = ((x309*x310)+(x311^x312));

    if (t53 != 14025587135539389390LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x313 = -35;
	uint64_t x314 = UINT64_MAX;
	volatile int64_t x315 = -197995233948913LL;
	int16_t x316 = INT16_MAX;
	static volatile uint64_t t54 = 169115733186343045LLU;

    t54 = ((x313*x314)+(x315^x316));

    if (t54 != 18446546078475597075LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x329 = 0;
	static volatile uint16_t x330 = 200U;
	static uint64_t x331 = 1553287659LLU;
	static volatile int32_t x332 = -1;
	uint64_t t55 = 36899639LLU;

    t55 = ((x329*x330)+(x331^x332));

    if (t55 != 18446744072156263956LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	volatile int8_t x335 = INT8_MAX;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t56 = 205730454961039704LLU;

    t56 = ((x333*x334)+(x335^x336));

    if (t56 != 4194176LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x338 = UINT8_MAX;
	int32_t x340 = -1;
	int32_t t57 = 349241240;

    t57 = ((x337*x338)+(x339^x340));

    if (t57 != 3825) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x341 = 6811640LLU;
	int16_t x342 = 1;
	volatile int16_t x343 = INT16_MIN;
	volatile uint64_t t58 = 993332474833LLU;

    t58 = ((x341*x342)+(x343^x344));

    if (t58 != 2154262520LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x345 = -1;
	volatile int32_t x347 = -637277;
	volatile uint8_t x348 = 42U;
	uint32_t t59 = 1U;

    t59 = ((x345*x346)+(x347^x348));

    if (t59 != 4266538560U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x349 = 1;
	uint32_t x351 = 7473U;
	int32_t x352 = -1;
	static int64_t t60 = 434145691LL;

    t60 = ((x349*x350)+(x351^x352));

    if (t60 != 4294959803LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	uint16_t x356 = 9U;
	static volatile int32_t t61 = 84863;

    t61 = ((x353*x354)+(x355^x356));

    if (t61 != -4161518) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x358 = 781U;
	volatile int64_t t62 = -72628046LL;

    t62 = ((x357*x358)+(x359^x360));

    if (t62 != 199133LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = INT64_MIN;
	uint64_t t63 = 2569LLU;

    t63 = ((x361*x362)+(x363^x364));

    if (t63 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x371 = -3378214142876597LL;
	volatile int32_t x372 = -16562;

    t64 = ((x369*x370)+(x371^x372));

    if (t64 != 3378214142892805LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x374 = 1837U;
	uint64_t x375 = UINT64_MAX;
	static uint32_t x376 = UINT32_MAX;
	static volatile uint64_t t65 = 17704298825LLU;

    t65 = ((x373*x374)+(x375^x376));

    if (t65 != 18446744069534972115LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x377 = INT16_MAX;
	int8_t x378 = -1;
	int8_t x379 = -1;

    t66 = ((x377*x378)+(x379^x380));

    if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x385 = 1333470121LLU;
	uint64_t x386 = UINT64_MAX;
	uint16_t x387 = 1748U;
	volatile uint64_t t67 = 2768429LLU;

    t67 = ((x385*x386)+(x387^x388));

    if (t67 != 18446744072376083244LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x393 = 25U;
	int16_t x394 = INT16_MAX;
	static volatile int8_t x395 = -1;
	static uint64_t x396 = 53LLU;
	uint64_t t68 = 1550LLU;

    t68 = ((x393*x394)+(x395^x396));

    if (t68 != 819121LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x397 = INT8_MIN;
	static int8_t x398 = -1;
	int16_t x399 = 890;
	static int64_t x400 = -1LL;
	volatile int64_t t69 = -7LL;

    t69 = ((x397*x398)+(x399^x400));

    if (t69 != -763LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile uint32_t x406 = 149U;
	uint32_t x407 = 235U;
	int8_t x408 = -1;
	volatile uint32_t t70 = 464U;

    t70 = ((x405*x406)+(x407^x408));

    if (t70 != 4294966911U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x409 = 17484LLU;
	static uint8_t x410 = 3U;
	static int8_t x411 = INT8_MIN;
	uint8_t x412 = 38U;

    t71 = ((x409*x410)+(x411^x412));

    if (t71 != 52362LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x413 = -1;
	int32_t x415 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	static uint64_t t72 = 62081466LLU;

    t72 = ((x413*x414)+(x415^x416));

    if (t72 != 8316914445458177276LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x421 = -987;
	int16_t x423 = INT16_MIN;
	int16_t x424 = -1;
	volatile uint64_t t73 = 0LLU;

    t73 = ((x421*x422)+(x423^x424));

    if (t73 != 18446744073706931327LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x425 = 11U;
	volatile int16_t x426 = 1;
	int8_t x427 = -1;
	int8_t x428 = INT8_MAX;
	volatile int32_t t74 = -30147521;

    t74 = ((x425*x426)+(x427^x428));

    if (t74 != -117) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x435 = INT64_MIN;
	uint64_t t75 = 51LLU;

    t75 = ((x433*x434)+(x435^x436));

    if (t75 != 9223394149677404753LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x441 = -1904411LL;
	int16_t x442 = INT16_MAX;
	int8_t x444 = INT8_MAX;
	int64_t t76 = 2651790733342LL;

    t76 = ((x441*x442)+(x443^x444));

    if (t76 != -58106868069LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x445 = -1LL;
	static int64_t x446 = -10054737LL;
	static int8_t x448 = 14;
	int64_t t77 = -1557729LL;

    t77 = ((x445*x446)+(x447^x448));

    if (t77 != 10054722LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x449 = UINT16_MAX;
	uint64_t x450 = UINT64_MAX;
	int32_t x451 = -111;
	uint64_t x452 = 1869173257698405161LLU;

    t78 = ((x449*x450)+(x451^x452));

    if (t78 != 16577570816011080889LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x461 = 594U;
	uint8_t x462 = 24U;
	static volatile uint16_t x463 = 131U;
	uint64_t x464 = 3800LLU;
	volatile uint64_t t79 = 8020823013171928LLU;

    t79 = ((x461*x462)+(x463^x464));

    if (t79 != 17931LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x465 = 4;
	static int8_t x466 = -5;
	int16_t x467 = INT16_MIN;
	volatile uint64_t t80 = 21LLU;

    t80 = ((x465*x466)+(x467^x468));

    if (t80 != 18446744073706594606LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x469 = -1;
	volatile int16_t x470 = INT16_MIN;
	static int16_t x471 = INT16_MIN;
	int8_t x472 = -1;
	static int32_t t81 = -772382;

    t81 = ((x469*x470)+(x471^x472));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x473 = -3;
	uint8_t x475 = 56U;
	volatile int8_t x476 = -1;

    t82 = ((x473*x474)+(x475^x476));

    if (t82 != 4294967221U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x477 = INT16_MIN;
	static volatile uint64_t x478 = 659881260885087LLU;
	static volatile uint16_t x479 = 21U;
	volatile uint64_t t83 = 4905853LLU;

    t83 = ((x477*x478)+(x479^x480));

    if (t83 != 6047126953881796586LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x489 = 1451U;
	int64_t x491 = INT64_MIN;
	uint8_t x492 = 1U;
	volatile uint64_t t84 = 136LLU;

    t84 = ((x489*x490)+(x491^x492));

    if (t84 != 9223759705613052647LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x493 = 110LLU;
	volatile uint16_t x495 = 2850U;
	uint64_t t85 = 103437LLU;

    t85 = ((x493*x494)+(x495^x496));

    if (t85 != 7206030LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x499 = UINT64_MAX;
	static volatile int8_t x500 = -9;
	volatile uint64_t t86 = 120747561627LLU;

    t86 = ((x497*x498)+(x499^x500));

    if (t86 != 14209835568793LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x502 = 14381576LL;
	int8_t x503 = -2;
	uint32_t x504 = 3239U;
	volatile int64_t t87 = 2961509901393LL;

    t87 = ((x501*x502)+(x503^x504));

    if (t87 != -466960518311LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x513 = -1;
	volatile int32_t x515 = INT32_MIN;
	volatile int32_t x516 = INT32_MAX;
	volatile int32_t t88 = 0;

    t88 = ((x513*x514)+(x515^x516));

    if (t88 != -65536) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x517 = INT16_MIN;
	volatile uint64_t x518 = 233532243389629413LLU;
	int8_t x519 = INT8_MIN;
	static int8_t x520 = INT8_MIN;
	static volatile uint64_t t89 = 120201495672848LLU;

    t89 = ((x517*x518)+(x519^x520));

    if (t89 != 3014239198087315456LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x521 = UINT16_MAX;
	uint8_t x522 = UINT8_MAX;

    t90 = ((x521*x522)+(x523^x524));

    if (t90 != 409377868809LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x525 = INT64_MAX;
	uint64_t x526 = UINT64_MAX;
	static uint32_t x527 = 51796U;
	uint8_t x528 = UINT8_MAX;
	volatile uint64_t t91 = 761197103273297LLU;

    t91 = ((x525*x526)+(x527^x528));

    if (t91 != 9223372036854827692LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x533 = 1;
	int8_t x535 = 0;
	int8_t x536 = INT8_MIN;

    t92 = ((x533*x534)+(x535^x536));

    if (t92 != 763) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x537 = INT64_MIN;
	uint16_t x539 = UINT16_MAX;
	int8_t x540 = -1;
	uint64_t t93 = 1831831971999LLU;

    t93 = ((x537*x538)+(x539^x540));

    if (t93 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x545 = 1601330;
	int64_t x546 = -68006030813LL;
	static volatile int8_t x547 = INT8_MIN;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t94 = 134LLU;

    t94 = ((x545*x546)+(x547^x548));

    if (t94 != 18337843976387770453LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x550 = INT16_MAX;
	static uint64_t t95 = 7286456872726518LLU;

    t95 = ((x549*x550)+(x551^x552));

    if (t95 != 482297446LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x557 = -49663LL;
	int64_t x558 = -16770051LL;
	int64_t x559 = -1LL;
	static int32_t x560 = INT32_MAX;
	int64_t t96 = 841162613699076LL;

    t96 = ((x557*x558)+(x559^x560));

    if (t96 != 830703559165LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x561 = 29429U;
	uint16_t x562 = 11075U;
	static int64_t x563 = INT64_MIN;
	static volatile int64_t t97 = -612824320842863034LL;

    t97 = ((x561*x562)+(x563^x564));

    if (t97 != -9223372036528849627LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x569 = 6U;
	uint32_t x570 = UINT32_MAX;
	int16_t x571 = INT16_MIN;
	int16_t x572 = INT16_MIN;

    t98 = ((x569*x570)+(x571^x572));

    if (t98 != 4294967290U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x577 = 1;
	int16_t x578 = -85;
	int64_t x579 = 3572943LL;
	volatile uint8_t x580 = 1U;
	volatile int64_t t99 = 1LL;

    t99 = ((x577*x578)+(x579^x580));

    if (t99 != 3572857LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = INT8_MAX;
	uint32_t x584 = 16025856U;

    t100 = ((x581*x582)+(x583^x584));

    if (t100 != 4278925181U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x585 = 80U;
	int64_t x586 = -1LL;
	int64_t t101 = 22887212032LL;

    t101 = ((x585*x586)+(x587^x588));

    if (t101 != 2147483567LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x589 = -1019339773649980904LL;
	static int16_t x590 = -1;
	volatile int32_t x591 = 1814175;
	int64_t x592 = -2090LL;
	volatile int64_t t102 = 71482LL;

    t102 = ((x589*x590)+(x591^x592));

    if (t102 != 1019339773648168753LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x593 = 3768511367059LL;
	uint32_t x594 = 681862U;
	volatile uint64_t x595 = UINT64_MAX;
	uint32_t x596 = 127669568U;

    t103 = ((x593*x594)+(x595^x596));

    if (t103 != 2569604697637914289LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x601 = UINT16_MAX;
	volatile uint64_t x602 = UINT64_MAX;
	static int32_t x603 = -1;
	uint32_t x604 = 6345U;
	volatile uint64_t t104 = 11LLU;

    t104 = ((x601*x602)+(x603^x604));

    if (t104 != 4294895415LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x610 = 24808U;
	uint8_t x611 = 3U;
	int32_t x612 = INT32_MIN;
	volatile int32_t t105 = -4424;

    t105 = ((x609*x610)+(x611^x612));

    if (t105 != -521691365) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x617 = UINT32_MAX;
	volatile int16_t x618 = -1;
	int16_t x619 = -1;

    t106 = ((x617*x618)+(x619^x620));

    if (t106 != 18166632204907312357LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x621 = UINT16_MAX;
	uint32_t x622 = 0U;
	static int64_t x623 = INT64_MIN;
	uint32_t x624 = 2071521U;
	volatile int64_t t107 = -786537608117898LL;

    t107 = ((x621*x622)+(x623^x624));

    if (t107 != -9223372036852704287LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x625 = INT32_MAX;
	int64_t x626 = -1LL;
	int32_t x627 = -1001994763;
	int64_t t108 = 13939LL;

    t108 = ((x625*x626)+(x627^x628));

    if (t108 != -1001994762LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x633 = 3U;
	uint8_t x634 = 72U;
	int64_t x635 = 231809040788LL;
	static volatile int16_t x636 = -1;
	int64_t t109 = 346910LL;

    t109 = ((x633*x634)+(x635^x636));

    if (t109 != -231809040573LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x637 = INT64_MAX;
	volatile uint64_t x638 = 1731385LLU;
	int8_t x639 = INT8_MIN;
	static uint64_t x640 = UINT64_MAX;
	uint64_t t110 = 2950671984286LLU;

    t110 = ((x637*x638)+(x639^x640));

    if (t110 != 9223372036853044550LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x641 = INT8_MIN;
	int16_t x642 = -1;
	static volatile int16_t x643 = INT16_MAX;
	volatile int8_t x644 = -1;

    t111 = ((x641*x642)+(x643^x644));

    if (t111 != -32640) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x645 = -43;
	static int16_t x646 = INT16_MAX;
	uint32_t x647 = UINT32_MAX;
	volatile uint32_t t112 = 16038297U;

    t112 = ((x645*x646)+(x647^x648));

    if (t112 != 4293558313U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x649 = 40U;
	int16_t x650 = INT16_MAX;
	uint64_t x651 = 1528214822660468LLU;
	volatile uint64_t t113 = 29LLU;

    t113 = ((x649*x650)+(x651^x652));

    if (t113 != 1528217050469987LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x653 = 2U;
	int8_t x654 = 7;
	uint32_t x655 = 983345593U;
	int64_t x656 = -1LL;

    t114 = ((x653*x654)+(x655^x656));

    if (t114 != -983345580LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x661 = 84440714U;
	int8_t x662 = INT8_MIN;
	uint32_t t115 = 7U;

    t115 = ((x661*x662)+(x663^x664));

    if (t115 != 2076457753U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x669 = 1472U;
	int8_t x670 = INT8_MAX;
	volatile int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MAX;

    t116 = ((x669*x670)+(x671^x672));

    if (t116 != -2147296577) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int16_t x674 = INT16_MIN;
	int8_t x675 = INT8_MAX;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t117 = 45259836LLU;

    t117 = ((x673*x674)+(x675^x676));

    if (t117 != 32640LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x677 = -1LL;
	int16_t x678 = INT16_MIN;
	static int32_t x680 = INT32_MAX;
	volatile int64_t t118 = -43LL;

    t118 = ((x677*x678)+(x679^x680));

    if (t118 != 32767LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x681 = INT8_MIN;
	int8_t x682 = -1;
	int8_t x683 = INT8_MAX;
	int32_t x684 = -11619;
	int32_t t119 = -481913;

    t119 = ((x681*x682)+(x683^x684));

    if (t119 != -11422) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x685 = 842233609004684263LLU;
	volatile int8_t x688 = 0;
	uint64_t t120 = 1005392114676255LLU;

    t120 = ((x685*x686)+(x687^x688));

    if (t120 != 3368934436018704284LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x690 = INT16_MAX;
	uint32_t x692 = UINT32_MAX;
	volatile uint32_t t121 = 1U;

    t121 = ((x689*x690)+(x691^x692));

    if (t121 != 518176250U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x693 = -1;
	int32_t x694 = -1;
	uint16_t x695 = 7U;
	int64_t x696 = INT64_MIN;
	volatile int64_t t122 = 838LL;

    t122 = ((x693*x694)+(x695^x696));

    if (t122 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x697 = 312477U;
	volatile int8_t x698 = -9;
	int64_t x699 = -1LL;
	int8_t x700 = INT8_MIN;
	volatile int64_t t123 = 183021316745542045LL;

    t123 = ((x697*x698)+(x699^x700));

    if (t123 != 4292155130LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x704 = 47U;
	volatile int64_t t124 = 7071217LL;

    t124 = ((x701*x702)+(x703^x704));

    if (t124 != -48LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x706 = -15;
	int64_t x708 = -1LL;
	volatile int64_t t125 = -24816993LL;

    t125 = ((x705*x706)+(x707^x708));

    if (t125 != -15LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x713 = 302240280605826LLU;
	static uint16_t x714 = 101U;
	int16_t x715 = INT16_MIN;
	uint16_t x716 = 19U;
	uint64_t t126 = 503661LLU;

    t126 = ((x713*x714)+(x715^x716));

    if (t126 != 30526268341155677LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile int64_t x726 = -4837LL;
	int64_t t127 = 1LL;

    t127 = ((x725*x726)+(x727^x728));

    if (t127 != -20774756806043LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x729 = INT8_MIN;
	volatile int8_t x730 = INT8_MIN;
	volatile uint8_t x732 = 43U;

    t128 = ((x729*x730)+(x731^x732));

    if (t128 != 31873) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x733 = 28;
	int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	uint32_t t129 = 1708920185U;

    t129 = ((x733*x734)+(x735^x736));

    if (t129 != 4294049787U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x737 = 4105LLU;
	int64_t x738 = -1LL;
	static int64_t x739 = INT64_MIN;
	int64_t x740 = INT64_MIN;
	volatile uint64_t t130 = 1004575LLU;

    t130 = ((x737*x738)+(x739^x740));

    if (t130 != 18446744073709547511LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x743 = 1U;
	volatile uint8_t x744 = UINT8_MAX;
	static int32_t t131 = 5808;

    t131 = ((x741*x742)+(x743^x744));

    if (t131 != 251) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x745 = 770586U;
	static uint32_t x746 = 3552262U;
	int32_t x748 = INT32_MAX;
	volatile uint32_t t132 = 44U;

    t132 = ((x745*x746)+(x747^x748));

    if (t132 != 3576616092U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x750 = 413U;
	uint32_t x752 = 0U;
	volatile uint32_t t133 = 3U;

    t133 = ((x749*x750)+(x751^x752));

    if (t133 != 4281433984U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x761 = -1;
	uint32_t x762 = 202U;
	uint8_t x763 = 78U;
	uint64_t x764 = 40273561984465112LLU;
	volatile uint64_t t134 = 216973495LLU;

    t134 = ((x761*x762)+(x763^x764));

    if (t134 != 40273566279432140LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x765 = 405040U;
	static int16_t x766 = INT16_MIN;
	int16_t x768 = -9414;
	uint32_t t135 = 12559U;

    t135 = ((x765*x766)+(x767^x768));

    if (t135 != 1760025402U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x769 = 3;
	uint32_t x771 = UINT32_MAX;
	int32_t x772 = INT32_MIN;
	volatile uint64_t t136 = 223313LLU;

    t136 = ((x769*x770)+(x771^x772));

    if (t136 != 2147483644LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x774 = INT8_MIN;
	volatile int8_t x775 = -1;
	uint16_t x776 = 453U;

    t137 = ((x773*x774)+(x775^x776));

    if (t137 != -8388934) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x785 = INT8_MIN;
	int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	static volatile uint64_t t138 = 135618LLU;

    t138 = ((x785*x786)+(x787^x788));

    if (t138 != 7802703777172401792LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x789 = UINT16_MAX;
	static volatile int8_t x791 = INT8_MIN;
	volatile uint32_t t139 = 54032385U;

    t139 = ((x789*x790)+(x791^x792));

    if (t139 != 3038530402U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = 198;
	volatile int32_t x795 = -87478431;
	int64_t x796 = INT64_MIN;
	volatile int64_t t140 = 113588856914LL;

    t140 = ((x793*x794)+(x795^x796));

    if (t140 != 9223372036767272033LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x802 = -1LL;
	int16_t x803 = -1;

    t141 = ((x801*x802)+(x803^x804));

    if (t141 != -1191LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x810 = -1LL;
	uint32_t x811 = 3883297U;
	int32_t x812 = INT32_MIN;

    t142 = ((x809*x810)+(x811^x812));

    if (t142 != 2151366821LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x813 = UINT64_MAX;
	int32_t x815 = -1;
	static uint32_t x816 = 5144U;
	volatile uint64_t t143 = 1294224LLU;

    t143 = ((x813*x814)+(x815^x816));

    if (t143 != 4294929384LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x821 = -32907LL;
	int8_t x822 = 17;
	int32_t x824 = -1;
	volatile int64_t t144 = 18329650199LL;

    t144 = ((x821*x822)+(x823^x824));

    if (t144 != -559419LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x825 = 19731U;
	int32_t x826 = 120676290;
	static int32_t x827 = 4173288;
	int8_t x828 = INT8_MIN;

    t145 = ((x825*x826)+(x827^x828));

    if (t145 != 1647822798U) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint16_t x829 = 9U;
	volatile int16_t x830 = -3;
	int16_t x831 = 4884;
	uint32_t x832 = 205U;
	static volatile uint32_t t146 = 44U;

    t146 = ((x829*x830)+(x831^x832));

    if (t146 != 5054U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x837 = -1;
	static int64_t x838 = 17820LL;
	int16_t x839 = -12;
	int8_t x840 = -2;
	int64_t t147 = 48LL;

    t147 = ((x837*x838)+(x839^x840));

    if (t147 != -17810LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x849 = -1;
	uint8_t x850 = 27U;
	static int16_t x851 = INT16_MIN;
	int16_t x852 = INT16_MIN;
	int32_t t148 = 5125;

    t148 = ((x849*x850)+(x851^x852));

    if (t148 != -27) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x853 = INT32_MIN;
	volatile uint64_t x854 = 69LLU;
	uint64_t x855 = 249267151756273LLU;
	volatile int8_t x856 = INT8_MIN;

    t149 = ((x853*x854)+(x855^x856));

    if (t149 != 18446494658381423729LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x857 = INT8_MIN;
	int8_t x858 = INT8_MIN;
	static int64_t t150 = 51366855985800464LL;

    t150 = ((x857*x858)+(x859^x860));

    if (t150 != 8481226394LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x861 = 0U;
	int8_t x862 = INT8_MAX;
	int8_t x864 = INT8_MAX;
	int32_t t151 = 4152;

    t151 = ((x861*x862)+(x863^x864));

    if (t151 != -78) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x866 = 6;
	int8_t x867 = INT8_MAX;
	uint64_t x868 = 451107601970034623LLU;
	uint64_t t152 = 28756458177LLU;

    t152 = ((x865*x866)+(x867^x868));

    if (t152 != 451107601970033856LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x869 = INT16_MIN;
	volatile int32_t x871 = INT32_MIN;
	uint64_t x872 = UINT64_MAX;
	uint64_t t153 = 7650LLU;

    t153 = ((x869*x870)+(x871^x872));

    if (t153 != 2146402303LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x877 = INT32_MIN;
	uint8_t x878 = 1U;
	uint64_t x879 = 465250262349675LLU;
	int32_t x880 = INT32_MIN;
	uint64_t t154 = 111552078667LLU;

    t154 = ((x877*x878)+(x879^x880));

    if (t154 != 18446278819307222891LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x881 = 10737U;
	volatile uint16_t x882 = 0U;
	int8_t x883 = -1;
	int64_t x884 = -323414506LL;
	int64_t t155 = 16020209LL;

    t155 = ((x881*x882)+(x883^x884));

    if (t155 != 323414505LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x889 = 1U;
	static int64_t x890 = INT64_MIN;
	int32_t x891 = INT32_MIN;
	volatile int64_t t156 = INT64_MIN;

    t156 = ((x889*x890)+(x891^x892));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x893 = INT16_MIN;
	uint8_t x894 = 12U;
	int8_t x896 = -5;
	int64_t t157 = 37736209738645LL;

    t157 = ((x893*x894)+(x895^x896));

    if (t157 != 9223372036854382587LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x901 = 4002U;
	static int64_t x903 = INT64_MAX;
	static volatile int64_t x904 = -1LL;
	int64_t t158 = 118361526LL;

    t158 = ((x901*x902)+(x903^x904));

    if (t158 != -9223372035427370462LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x905 = INT8_MIN;
	uint16_t x906 = 6591U;
	int16_t x907 = INT16_MIN;
	uint32_t x908 = 1161428154U;
	uint32_t t159 = 11344479U;

    t159 = ((x905*x906)+(x907^x908));

    if (t159 != 3132726586U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x913 = -2055248LL;
	int32_t x914 = INT32_MIN;
	volatile int32_t x915 = INT32_MAX;
	static int64_t t160 = 1LL;

    t160 = ((x913*x914)+(x915^x916));

    if (t160 != 4413609833264649LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x917 = 1;
	int16_t x919 = -1;
	static volatile uint32_t x920 = 941849370U;
	uint64_t t161 = 22LLU;

    t161 = ((x917*x918)+(x919^x920));

    if (t161 != 8940334301509706393LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x921 = INT16_MIN;
	uint8_t x922 = UINT8_MAX;
	static uint32_t x923 = UINT32_MAX;
	int64_t x924 = -8767208838158LL;
	volatile int64_t t162 = -57LL;

    t162 = ((x921*x922)+(x923^x924));

    if (t162 != -8769150987251LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x929 = 206270LL;
	static uint32_t x931 = 127602U;

    t163 = ((x929*x930)+(x931^x932));

    if (t163 != 308043LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x933 = 34U;
	static int32_t x934 = -1;
	volatile int8_t x936 = 12;
	int32_t t164 = -105698468;

    t164 = ((x933*x934)+(x935^x936));

    if (t164 != 2147483601) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x937 = 1;
	uint64_t x938 = 6519162LLU;
	static int8_t x939 = INT8_MAX;
	int64_t x940 = -1LL;
	uint64_t t165 = 18502859LLU;

    t165 = ((x937*x938)+(x939^x940));

    if (t165 != 6519034LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x941 = 107U;
	uint16_t x943 = UINT16_MAX;
	uint64_t x944 = 172LLU;
	uint64_t t166 = 81772535275468LLU;

    t166 = ((x941*x942)+(x943^x944));

    if (t166 != 18446744073706110803LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x950 = -11699499LL;
	int64_t x951 = INT64_MIN;
	uint64_t x952 = UINT64_MAX;
	uint64_t t167 = 30454371LLU;

    t167 = ((x949*x950)+(x951^x952));

    if (t167 != 9223372036866475306LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x953 = 97U;
	static uint64_t x954 = 119994310449373LLU;
	static uint8_t x955 = 1U;
	uint8_t x956 = 106U;
	static uint64_t t168 = 2868301416599193381LLU;

    t168 = ((x953*x954)+(x955^x956));

    if (t168 != 11639448113589288LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x958 = -1;
	int64_t x959 = 1113404956646256LL;
	uint16_t x960 = UINT16_MAX;
	volatile int64_t t169 = 39521381495509316LL;

    t169 = ((x957*x958)+(x959^x960));

    if (t169 != 1113404956632105LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x965 = 2;
	static uint8_t x966 = UINT8_MAX;
	static volatile uint8_t x967 = UINT8_MAX;
	int8_t x968 = INT8_MAX;

    t170 = ((x965*x966)+(x967^x968));

    if (t170 != 638) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x972 = 492;
	volatile int32_t t171 = 339009837;

    t171 = ((x969*x970)+(x971^x972));

    if (t171 != -32237) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x977 = -1;
	int8_t x978 = INT8_MAX;
	static uint64_t x979 = 330296860771487295LLU;
	static uint64_t t172 = 172244LLU;

    t172 = ((x977*x978)+(x979^x980));

    if (t172 != 18116447212938406893LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x985 = 12;
	int8_t x986 = INT8_MAX;
	volatile int32_t x987 = -15914;
	int32_t t173 = -218900;

    t173 = ((x985*x986)+(x987^x988));

    if (t173 != -14563) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x989 = -1;
	volatile int32_t x991 = -1;
	volatile int16_t x992 = 12747;

    t174 = ((x989*x990)+(x991^x992));

    if (t174 != 20020) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x994 = UINT8_MAX;
	int8_t x996 = -1;
	int32_t t175 = 9;

    t175 = ((x993*x994)+(x995^x996));

    if (t175 != 82152) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x997 = 168U;
	uint16_t x998 = 56U;
	uint32_t t176 = 19017808U;

    t176 = ((x997*x998)+(x999^x1000));

    if (t176 != 9404U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1001 = 23046383LLU;
	int16_t x1004 = INT16_MIN;
	uint64_t t177 = 2724788135379505LLU;

    t177 = ((x1001*x1002)+(x1003^x1004));

    if (t177 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1005 = UINT16_MAX;
	int16_t x1006 = -2;
	int64_t x1008 = INT64_MIN;
	volatile int64_t t178 = -393315LL;

    t178 = ((x1005*x1006)+(x1007^x1008));

    if (t178 != -9223372032559939583LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x1013 = INT32_MAX;
	static volatile uint16_t x1015 = 160U;
	volatile int32_t x1016 = 4723;
	uint32_t t179 = 2U;

    t179 = ((x1013*x1014)+(x1015^x1016));

    if (t179 != 4201420759U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1017 = -87045;
	uint64_t x1018 = 1698839491603981LLU;
	int16_t x1019 = -1;
	int64_t x1020 = INT64_MAX;
	uint64_t t180 = 1279LLU;

    t180 = ((x1017*x1018)+(x1019^x1020));

    if (t180 != 8921841079862662591LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1022 = 3U;
	int16_t x1023 = -1;
	uint16_t x1024 = 785U;
	volatile int32_t t181 = -1492;

    t181 = ((x1021*x1022)+(x1023^x1024));

    if (t181 != 97515) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1025 = 0;
	static int8_t x1026 = -1;
	uint16_t x1027 = 3813U;
	volatile int8_t x1028 = INT8_MAX;
	int32_t t182 = 128345042;

    t182 = ((x1025*x1026)+(x1027^x1028));

    if (t182 != 3738) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1029 = -1;
	volatile int64_t x1030 = INT64_MAX;
	int16_t x1031 = -846;
	volatile int64_t t183 = -115155LL;

    t183 = ((x1029*x1030)+(x1031^x1032));

    if (t183 != -9223372036854774962LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1033 = -1;
	int64_t x1034 = -29166834754LL;
	uint8_t x1035 = 5U;
	static int16_t x1036 = INT16_MAX;
	volatile int64_t t184 = -538LL;

    t184 = ((x1033*x1034)+(x1035^x1036));

    if (t184 != 29166867516LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1037 = INT8_MAX;
	uint16_t x1038 = UINT16_MAX;
	static volatile int16_t x1039 = 57;
	int32_t x1040 = INT32_MIN;
	volatile int32_t t185 = 6141556;

    t185 = ((x1037*x1038)+(x1039^x1040));

    if (t185 != -2139160646) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x1041 = UINT64_MAX;
	volatile int16_t x1043 = INT16_MIN;
	int8_t x1044 = 0;

    t186 = ((x1041*x1042)+(x1043^x1044));

    if (t186 != 18446744073709518785LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint8_t x1045 = UINT8_MAX;
	int16_t x1046 = INT16_MIN;
	int8_t x1047 = INT8_MIN;
	volatile int32_t t187 = -250;

    t187 = ((x1045*x1046)+(x1047^x1048));

    if (t187 != -8388481) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1049 = 272983066900126117LLU;
	uint64_t x1050 = UINT64_MAX;
	int8_t x1051 = INT8_MIN;
	uint64_t t188 = 16565773LLU;

    t188 = ((x1049*x1050)+(x1051^x1052));

    if (t188 != 18173761011104392669LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1057 = INT8_MIN;
	int16_t x1058 = -1;
	int16_t x1059 = INT16_MAX;
	uint8_t x1060 = 0U;
	int32_t t189 = 139290346;

    t189 = ((x1057*x1058)+(x1059^x1060));

    if (t189 != 32895) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x1065 = 423U;
	static volatile uint8_t x1067 = 1U;
	static int32_t x1068 = INT32_MIN;
	int32_t t190 = 223213679;

    t190 = ((x1065*x1066)+(x1067^x1068));

    if (t190 != -2147429926) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1069 = -1;
	static int32_t x1070 = -3704;
	static int32_t x1071 = -27;
	volatile int8_t x1072 = INT8_MIN;
	int32_t t191 = 24281;

    t191 = ((x1069*x1070)+(x1071^x1072));

    if (t191 != 3805) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1074 = 3837U;
	static uint64_t x1075 = 580165LLU;
	volatile int16_t x1076 = 322;
	uint64_t t192 = 3724365477900073575LLU;

    t192 = ((x1073*x1074)+(x1075^x1076));

    if (t192 != 576522LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1077 = 23U;
	uint16_t x1078 = 1U;
	volatile uint32_t x1080 = UINT32_MAX;
	volatile int64_t t193 = 3650316LL;

    t193 = ((x1077*x1078)+(x1079^x1080));

    if (t193 != -4294967273LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1085 = 102U;
	static volatile int16_t x1086 = INT16_MAX;
	volatile int32_t x1087 = INT32_MAX;
	static volatile int32_t t194 = -1177838;

    t194 = ((x1085*x1086)+(x1087^x1088));

    if (t194 != 3342233) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1089 = UINT32_MAX;
	uint64_t x1090 = 652LLU;
	uint16_t x1091 = 5U;

    t195 = ((x1089*x1090)+(x1091^x1092));

    if (t195 != 2800318676330LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1117 = UINT32_MAX;
	int16_t x1118 = INT16_MIN;
	uint32_t x1120 = UINT32_MAX;
	volatile uint32_t t196 = 94558U;

    t196 = ((x1117*x1118)+(x1119^x1120));

    if (t196 != 32759U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1121 = 4484115895197634LLU;
	uint64_t x1122 = 8643374545662304LLU;
	static int8_t x1123 = INT8_MIN;
	int32_t x1124 = INT32_MAX;
	volatile uint64_t t197 = 95LLU;

    t197 = ((x1121*x1122)+(x1123^x1124));

    if (t197 != 10376967295307647807LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1126 = -1LL;
	uint8_t x1127 = 3U;
	int8_t x1128 = -1;

    t198 = ((x1125*x1126)+(x1127^x1128));

    if (t198 != 18446691515412838799LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1129 = INT64_MIN;
	uint16_t x1130 = 1U;
	int16_t x1131 = -29;
	int64_t t199 = -16168002731712LL;

    t199 = ((x1129*x1130)+(x1131^x1132));

    if (t199 != -9223372036854775780LL) { NG(); } else { ; }
	
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

