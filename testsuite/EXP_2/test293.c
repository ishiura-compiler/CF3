
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

volatile uint16_t x2 = 0U;
int32_t x3 = 2;
uint16_t x4 = UINT16_MAX;
volatile int32_t t1 = 1;
uint32_t x10 = 3U;
static int8_t x22 = 22;
int8_t x24 = INT8_MIN;
uint32_t x26 = UINT32_MAX;
uint64_t t6 = 4083LLU;
uint64_t x35 = 969362775544819LLU;
volatile int8_t x54 = -6;
int32_t x63 = 173;
volatile int64_t t12 = -1940303219147319LL;
static int8_t x88 = -1;
volatile int64_t x90 = 150310263260002LL;
int32_t t19 = 11017;
int16_t x98 = -1;
int32_t t21 = 17004273;
uint32_t x115 = 907943918U;
int64_t x124 = -1LL;
static volatile int64_t t24 = 301231877833LL;
uint32_t x130 = 976507747U;
uint8_t x136 = 0U;
int8_t x137 = INT8_MAX;
uint32_t x139 = 300932927U;
int32_t t28 = -106322916;
int32_t x151 = 7;
uint8_t x152 = UINT8_MAX;
volatile int32_t t30 = -576115;
volatile uint32_t x156 = 91181012U;
volatile int64_t t32 = 9998767LL;
volatile int8_t x174 = INT8_MIN;
static uint16_t x175 = 1705U;
int16_t x177 = 2026;
uint64_t x182 = 399LLU;
int16_t x185 = -1;
volatile int64_t x188 = -1LL;
int32_t x192 = INT32_MIN;
static int64_t x194 = INT64_MIN;
static int16_t x202 = INT16_MAX;
uint8_t x203 = UINT8_MAX;
int32_t t42 = INT32_MAX;
uint64_t x227 = 188LLU;
int64_t x232 = 203563LL;
int16_t x234 = -1;
static int8_t x240 = INT8_MIN;
static int64_t x241 = INT64_MIN;
int32_t t52 = -5089710;
static int64_t x248 = INT64_MAX;
int64_t x249 = -1LL;
uint8_t x250 = 1U;
volatile int64_t x252 = -1LL;
uint32_t x261 = 930780701U;
uint32_t x280 = 212U;
uint8_t x285 = 2U;
int8_t x287 = INT8_MIN;
static uint16_t x305 = 67U;
int8_t x325 = -1;
volatile uint32_t t69 = 13218053U;
uint16_t x334 = 23U;
volatile uint8_t x336 = 25U;
int8_t x342 = -9;
uint64_t x343 = 7LLU;
volatile int64_t x344 = 404LL;
int64_t x345 = INT64_MAX;
static int16_t x348 = INT16_MAX;
int32_t t73 = 96966;
uint8_t x351 = 0U;
volatile int32_t t74 = -2664;
uint16_t x355 = UINT16_MAX;
int16_t x356 = INT16_MIN;
int64_t x358 = INT64_MIN;
uint16_t x362 = 30372U;
volatile int16_t x369 = -1;
volatile int8_t x370 = INT8_MIN;
uint64_t x372 = 8698669672633103LLU;
uint8_t x377 = 1U;
int32_t x383 = INT32_MAX;
static uint8_t x391 = 0U;
uint32_t x393 = 348U;
int16_t x394 = INT16_MIN;
int64_t x400 = INT64_MIN;
uint16_t x401 = 3U;
int64_t x418 = -732LL;
int8_t x420 = -1;
static volatile int32_t t93 = 35595;
uint32_t x434 = 356U;
int16_t x440 = 12;
volatile int32_t t95 = -9200;
int32_t x447 = -1;
static volatile int64_t x450 = -67118683672213133LL;
int8_t x451 = -1;
static int8_t x455 = 5;
int32_t x457 = -64814399;
uint32_t x466 = 1U;
uint8_t x474 = UINT8_MAX;
volatile int32_t x475 = -1;
int16_t x484 = INT16_MIN;
int32_t t108 = -249;
volatile uint32_t x494 = UINT32_MAX;
int8_t x505 = INT8_MAX;
static int32_t t111 = 127615943;
int8_t x509 = -1;
int32_t x511 = INT32_MIN;
static uint8_t x512 = UINT8_MAX;
uint8_t x519 = UINT8_MAX;
int32_t t113 = INT32_MAX;
volatile uint64_t t114 = 64030LLU;
int16_t x525 = INT16_MIN;
int32_t x527 = -1;
static volatile int64_t x531 = INT64_MIN;
int16_t x533 = INT16_MAX;
volatile uint8_t x535 = 44U;
static int32_t t118 = -28;
volatile int32_t t120 = 5290;
static int8_t x550 = INT8_MAX;
uint32_t x556 = 26829U;
uint32_t x565 = UINT32_MAX;
volatile int32_t t125 = 123610651;
int8_t x590 = 2;
static volatile int8_t x592 = INT8_MIN;
volatile int8_t x596 = INT8_MAX;
int64_t x598 = 339876150352702780LL;
int32_t x600 = INT32_MIN;
int16_t x602 = -1;
volatile uint8_t x603 = 83U;
int32_t x607 = INT32_MIN;
int64_t t135 = 1166107LL;
uint8_t x617 = 0U;
uint8_t x624 = 0U;
int32_t x625 = INT32_MAX;
volatile int32_t t141 = -371;
uint64_t x640 = 28847742746538205LLU;
static int32_t t143 = -16;
int32_t x647 = INT32_MIN;
uint32_t x655 = UINT32_MAX;
int64_t t146 = 7476008352LL;
uint16_t x673 = UINT16_MAX;
int32_t x677 = -81777569;
volatile int64_t t148 = 8606529221002595LL;
uint32_t x684 = UINT32_MAX;
static uint64_t x685 = 90434953672696922LLU;
int8_t x693 = 0;
volatile int32_t t151 = 89;
int64_t x716 = -1LL;
static uint64_t x725 = 192602615886643LLU;
int8_t x726 = INT8_MIN;
uint8_t x727 = 93U;
static int16_t x732 = -1;
uint32_t x737 = 1714U;
uint64_t x751 = 15309010220435LLU;
int32_t t163 = 1931660;
static int16_t x757 = 635;
int32_t t164 = -1029253811;
uint64_t x764 = UINT64_MAX;
static volatile uint64_t t165 = UINT64_MAX;
int16_t x770 = -1;
uint32_t x772 = 192414168U;
static uint32_t x775 = 665U;
static volatile int32_t t168 = 29451;
int8_t x784 = 0;
int64_t x786 = INT64_MIN;
volatile int32_t t171 = -4;
volatile int16_t x795 = 12;
static uint16_t x800 = 7U;
int32_t x803 = -1;
volatile int16_t x806 = INT16_MIN;
int16_t x808 = INT16_MIN;
int32_t x812 = INT32_MIN;
int32_t t177 = 5273220;
volatile int32_t t181 = -126;
int8_t x839 = INT8_MAX;
volatile int64_t x848 = INT64_MIN;
volatile int64_t t184 = -8059776744232571LL;
volatile int32_t x849 = INT32_MIN;
int32_t x850 = -75;
volatile int16_t x853 = INT16_MAX;
int32_t x857 = 2;
int16_t x860 = INT16_MIN;
int8_t x871 = INT8_MIN;
static int32_t x872 = INT32_MIN;
static volatile int32_t t190 = -24;
int8_t x877 = 4;
volatile uint16_t x879 = UINT16_MAX;
uint64_t x887 = UINT64_MAX;
static int32_t x890 = INT32_MIN;
uint64_t x894 = 44084LLU;
volatile uint32_t x900 = 2104U;
uint32_t t196 = 18796U;
int64_t x907 = INT64_MAX;
int64_t t198 = -525407099913357161LL;
static volatile int16_t x912 = INT16_MAX;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static int32_t t0 = -57031;

    t0 = ((x1!=(x2-x3))|x4);

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static volatile int8_t x6 = INT8_MIN;
	int16_t x7 = 2;
	int32_t x8 = -1;

    t1 = ((x5!=(x6-x7))|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	static int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	volatile int32_t t2 = 8534;

    t2 = ((x9!=(x10-x11))|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -3839559077LL;
	uint8_t x14 = UINT8_MAX;
	uint32_t x15 = 22U;
	uint32_t x16 = UINT32_MAX;
	volatile uint32_t t3 = UINT32_MAX;

    t3 = ((x13!=(x14-x15))|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int8_t x18 = -1;
	int16_t x19 = 3;
	int32_t x20 = 128976346;
	volatile int32_t t4 = 1;

    t4 = ((x17!=(x18-x19))|x20);

    if (t4 != 128976347) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	int64_t x23 = INT64_MAX;
	int32_t t5 = 1;

    t5 = ((x21!=(x22-x23))|x24);

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = UINT32_MAX;
	uint64_t x27 = 13887370346LLU;
	static volatile uint64_t x28 = 5254321LLU;

    t6 = ((x25!=(x26-x27))|x28);

    if (t6 != 5254321LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -69154660;
	int32_t x30 = 223;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = 1U;
	int32_t t7 = -20656;

    t7 = ((x29!=(x30-x31))|x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -272351;

    t8 = ((x33!=(x34-x35))|x36);

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 10U;
	int16_t x50 = INT16_MAX;
	int64_t x51 = -1LL;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t9 = 1462;

    t9 = ((x49!=(x50-x51))|x52);

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x53 = 1;
	static uint64_t x55 = 5666269LLU;
	volatile int64_t x56 = -1079056836080042188LL;
	static volatile int64_t t10 = -14554LL;

    t10 = ((x53!=(x54-x55))|x56);

    if (t10 != -1079056836080042187LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MAX;
	static uint16_t x62 = 3U;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t11 = -5;

    t11 = ((x61!=(x62-x63))|x64);

    if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x65 = UINT16_MAX;
	static volatile uint32_t x66 = UINT32_MAX;
	int8_t x67 = 0;
	int64_t x68 = -1LL;

    t12 = ((x65!=(x66-x67))|x68);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x69 = 77U;
	static uint64_t x70 = 4045477362609LLU;
	volatile int16_t x71 = -1;
	int64_t x72 = INT64_MIN;
	volatile int64_t t13 = -109LL;

    t13 = ((x69!=(x70-x71))|x72);

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = -6068487LL;
	uint32_t x74 = 125U;
	int32_t x75 = -788255;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

    t14 = ((x73!=(x74-x75))|x76);

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x77 = 251925963LLU;
	int16_t x78 = INT16_MIN;
	static int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;
	int64_t t15 = 215LL;

    t15 = ((x77!=(x78-x79))|x80);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 331689638786627LLU;
	static int8_t x82 = 0;
	uint32_t x83 = 820151U;
	static int16_t x84 = INT16_MAX;
	int32_t t16 = -492052;

    t16 = ((x81!=(x82-x83))|x84);

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = 777LL;
	int32_t t17 = 29;

    t17 = ((x85!=(x86-x87))|x88);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -77;
	uint32_t x91 = UINT32_MAX;
	static uint16_t x92 = 0U;
	int32_t t18 = 15;

    t18 = ((x89!=(x90-x91))|x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = UINT32_MAX;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;

    t19 = ((x93!=(x94-x95))|x96);

    if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 6936U;
	int16_t x99 = INT16_MIN;
	static int16_t x100 = -1;
	volatile int32_t t20 = 54;

    t20 = ((x97!=(x98-x99))|x100);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x101 = 14690;
	uint64_t x102 = 1LLU;
	int8_t x103 = INT8_MIN;
	static volatile int32_t x104 = -1;

    t21 = ((x101!=(x102-x103))|x104);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x105 = 0;
	int8_t x106 = INT8_MIN;
	static volatile int8_t x107 = 0;
	static volatile uint64_t x108 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

    t22 = ((x105!=(x106-x107))|x108);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x113 = INT64_MAX;
	uint64_t x114 = 841053678472263427LLU;
	int16_t x116 = -7096;
	volatile int32_t t23 = -39;

    t23 = ((x113!=(x114-x115))|x116);

    if (t23 != -7095) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MAX;
	int64_t x123 = -1LL;

    t24 = ((x121!=(x122-x123))|x124);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x125 = 16;
	int8_t x126 = -1;
	volatile int8_t x127 = -1;
	int64_t x128 = -1LL;
	static volatile int64_t t25 = 180LL;

    t25 = ((x125!=(x126-x127))|x128);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x129 = 535923247;
	uint64_t x131 = UINT64_MAX;
	int32_t x132 = -1;
	int32_t t26 = 5044;

    t26 = ((x129!=(x130-x131))|x132);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x133 = INT32_MAX;
	static int8_t x134 = -1;
	int64_t x135 = INT64_MAX;
	volatile int32_t t27 = 12;

    t27 = ((x133!=(x134-x135))|x136);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x138 = 66U;
	static uint16_t x140 = 25302U;

    t28 = ((x137!=(x138-x139))|x140);

    if (t28 != 25303) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int64_t x142 = 35072825878789029LL;
	static uint16_t x143 = 30U;
	int64_t x144 = INT64_MIN;
	static int64_t t29 = 1046972359863799028LL;

    t29 = ((x141!=(x142-x143))|x144);

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x149 = 39;
	uint8_t x150 = UINT8_MAX;

    t30 = ((x149!=(x150-x151))|x152);

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x153 = 3;
	int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	volatile uint32_t t31 = 59U;

    t31 = ((x153!=(x154-x155))|x156);

    if (t31 != 91181013U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = -1;
	uint64_t x159 = 5LLU;
	int64_t x160 = INT64_MIN;

    t32 = ((x157!=(x158-x159))|x160);

    if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x161 = INT16_MAX;
	static uint8_t x162 = 36U;
	volatile int8_t x163 = INT8_MAX;
	int64_t x164 = 2284517650459LL;
	int64_t t33 = -603LL;

    t33 = ((x161!=(x162-x163))|x164);

    if (t33 != 2284517650459LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x165 = INT8_MIN;
	uint32_t x166 = 12674295U;
	static int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	volatile int64_t t34 = -32064619300653LL;

    t34 = ((x165!=(x166-x167))|x168);

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x173 = INT32_MIN;
	int32_t x176 = -1;
	int32_t t35 = 27;

    t35 = ((x173!=(x174-x175))|x176);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = INT64_MIN;
	int64_t t36 = -11LL;

    t36 = ((x177!=(x178-x179))|x180);

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x181 = 23U;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	static int32_t t37 = -63;

    t37 = ((x181!=(x182-x183))|x184);

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x186 = 3813U;
	int32_t x187 = -1;
	int64_t t38 = -415789605525LL;

    t38 = ((x185!=(x186-x187))|x188);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x189 = 57;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -2;
	static volatile int32_t t39 = -1;

    t39 = ((x189!=(x190-x191))|x192);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = 7;
	static int8_t x195 = INT8_MIN;
	uint8_t x196 = 121U;
	int32_t t40 = 938;

    t40 = ((x193!=(x194-x195))|x196);

    if (t40 != 121) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = 14241325LLU;
	static uint64_t x198 = 68076422249946LLU;
	int8_t x199 = INT8_MIN;
	uint32_t x200 = UINT32_MAX;
	uint32_t t41 = UINT32_MAX;

    t41 = ((x197!=(x198-x199))|x200);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = -13;
	int32_t x204 = INT32_MAX;

    t42 = ((x201!=(x202-x203))|x204);

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -10408034476252LL;
	int32_t x206 = INT32_MIN;
	int8_t x207 = 0;
	int16_t x208 = INT16_MAX;
	int32_t t43 = -180;

    t43 = ((x205!=(x206-x207))|x208);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x209 = INT8_MAX;
	int64_t x210 = 3069706345LL;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t44 = -6290712LL;

    t44 = ((x209!=(x210-x211))|x212);

    if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x213 = 310;
	static int16_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t45 = INT32_MAX;

    t45 = ((x213!=(x214-x215))|x216);

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = 1;
	static volatile uint64_t x218 = UINT64_MAX;
	int64_t x219 = 46935LL;
	int64_t x220 = 440365691769LL;
	int64_t t46 = -183901073467LL;

    t46 = ((x217!=(x218-x219))|x220);

    if (t46 != 440365691769LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint64_t x221 = UINT64_MAX;
	static volatile int64_t x222 = 1991229742578LL;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = 1899901509440112LLU;
	uint64_t t47 = 3816483LLU;

    t47 = ((x221!=(x222-x223))|x224);

    if (t47 != 1899901509440113LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t48 = -25843;

    t48 = ((x225!=(x226-x227))|x228);

    if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x229 = INT64_MIN;
	uint32_t x230 = 356586U;
	uint64_t x231 = UINT64_MAX;
	int64_t t49 = 120689642328625450LL;

    t49 = ((x229!=(x230-x231))|x232);

    if (t49 != 203563LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x233 = INT32_MIN;
	static uint8_t x235 = 1U;
	static uint64_t x236 = 655361752478LLU;
	uint64_t t50 = 491122780984426LLU;

    t50 = ((x233!=(x234-x235))|x236);

    if (t50 != 655361752479LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x237 = 110U;
	volatile int8_t x238 = -13;
	volatile uint64_t x239 = 28833LLU;
	int32_t t51 = -123762;

    t51 = ((x237!=(x238-x239))|x240);

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x242 = UINT32_MAX;
	volatile int16_t x243 = INT16_MAX;
	int16_t x244 = INT16_MAX;

    t52 = ((x241!=(x242-x243))|x244);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = -7647161685LL;
	int8_t x246 = INT8_MIN;
	static int8_t x247 = -7;
	static volatile int64_t t53 = INT64_MAX;

    t53 = ((x245!=(x246-x247))|x248);

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x251 = -1;
	volatile int64_t t54 = 1130442037377707755LL;

    t54 = ((x249!=(x250-x251))|x252);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x257 = 17644;
	uint64_t x258 = 7301122543117LLU;
	static int16_t x259 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t55 = UINT64_MAX;

    t55 = ((x257!=(x258-x259))|x260);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x262 = UINT32_MAX;
	static int8_t x263 = INT8_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t56 = 498861401;

    t56 = ((x261!=(x262-x263))|x264);

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x269 = 17;
	int64_t x270 = -1LL;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;
	volatile int32_t t57 = 8;

    t57 = ((x269!=(x270-x271))|x272);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = INT16_MIN;
	int16_t x278 = -1;
	static volatile int8_t x279 = INT8_MIN;
	uint32_t t58 = 1001868921U;

    t58 = ((x277!=(x278-x279))|x280);

    if (t58 != 213U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x281 = 101355LLU;
	static volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int32_t x284 = 0;
	static int32_t t59 = 10;

    t59 = ((x281!=(x282-x283))|x284);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x286 = INT8_MIN;
	uint32_t x288 = 7U;
	static uint32_t t60 = 511457412U;

    t60 = ((x285!=(x286-x287))|x288);

    if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x289 = 8U;
	int64_t x290 = 71544471423864LL;
	static volatile int16_t x291 = -249;
	uint16_t x292 = 118U;
	int32_t t61 = -531683;

    t61 = ((x289!=(x290-x291))|x292);

    if (t61 != 119) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MAX;
	int64_t x295 = 6565LL;
	uint8_t x296 = 4U;
	volatile int32_t t62 = -1;

    t62 = ((x293!=(x294-x295))|x296);

    if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x297 = -38;
	static int64_t x298 = INT64_MAX;
	static int32_t x299 = 691026;
	int32_t x300 = INT32_MIN;
	volatile int32_t t63 = 187256693;

    t63 = ((x297!=(x298-x299))|x300);

    if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x301 = -1;
	static uint16_t x302 = 0U;
	int32_t x303 = -1;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t64 = -56483;

    t64 = ((x301!=(x302-x303))|x304);

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint16_t x308 = 3U;
	volatile int32_t t65 = 327;

    t65 = ((x305!=(x306-x307))|x308);

    if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x309 = INT32_MIN;
	uint32_t x310 = 123307U;
	int16_t x311 = INT16_MIN;
	volatile int8_t x312 = INT8_MAX;
	static volatile int32_t t66 = 698838550;

    t66 = ((x309!=(x310-x311))|x312);

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MAX;
	volatile int16_t x315 = INT16_MAX;
	int16_t x316 = -1;
	static int32_t t67 = 13;

    t67 = ((x313!=(x314-x315))|x316);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x321 = 6;
	static int16_t x322 = -400;
	int16_t x323 = -505;
	static int32_t x324 = -1;
	volatile int32_t t68 = 5;

    t68 = ((x321!=(x322-x323))|x324);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x326 = INT16_MIN;
	static int16_t x327 = INT16_MIN;
	uint32_t x328 = 186430234U;

    t69 = ((x325!=(x326-x327))|x328);

    if (t69 != 186430235U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x333 = 83U;
	uint8_t x335 = 0U;
	volatile int32_t t70 = -1;

    t70 = ((x333!=(x334-x335))|x336);

    if (t70 != 25) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = -1LL;
	volatile int8_t x338 = -1;
	int64_t x339 = INT64_MIN;
	int16_t x340 = -2865;
	volatile int32_t t71 = 10364769;

    t71 = ((x337!=(x338-x339))|x340);

    if (t71 != -2865) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x341 = INT64_MAX;
	static int64_t t72 = -11065588875162LL;

    t72 = ((x341!=(x342-x343))|x344);

    if (t72 != 405LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x346 = -26;
	int32_t x347 = INT32_MIN;

    t73 = ((x345!=(x346-x347))|x348);

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = 6;
	static int64_t x350 = INT64_MIN;
	static uint8_t x352 = UINT8_MAX;

    t74 = ((x349!=(x350-x351))|x352);

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x353 = 3U;
	int64_t x354 = -1LL;
	int32_t t75 = 997010132;

    t75 = ((x353!=(x354-x355))|x356);

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x357 = INT16_MAX;
	uint64_t x359 = 127LLU;
	int32_t x360 = 4543230;
	volatile int32_t t76 = 0;

    t76 = ((x357!=(x358-x359))|x360);

    if (t76 != 4543231) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x361 = 4U;
	uint16_t x363 = 4U;
	static int32_t x364 = -1;
	volatile int32_t t77 = -24;

    t77 = ((x361!=(x362-x363))|x364);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = -1;
	static int8_t x367 = 23;
	volatile int64_t x368 = INT64_MAX;
	volatile int64_t t78 = INT64_MAX;

    t78 = ((x365!=(x366-x367))|x368);

    if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x371 = -1;
	volatile uint64_t t79 = 44819604LLU;

    t79 = ((x369!=(x370-x371))|x372);

    if (t79 != 8698669672633103LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x373 = 1606U;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = 844193205U;
	static uint32_t t80 = 30061161U;

    t80 = ((x373!=(x374-x375))|x376);

    if (t80 != 844193205U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x378 = -1143684006130456257LL;
	int16_t x379 = INT16_MIN;
	int8_t x380 = -1;
	static volatile int32_t t81 = 1;

    t81 = ((x377!=(x378-x379))|x380);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x381 = UINT16_MAX;
	int32_t x382 = 18;
	static int64_t x384 = INT64_MIN;
	int64_t t82 = 1735734308LL;

    t82 = ((x381!=(x382-x383))|x384);

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MAX;
	volatile int64_t x387 = INT64_MAX;
	int8_t x388 = -1;
	int32_t t83 = 841;

    t83 = ((x385!=(x386-x387))|x388);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x389 = -1;
	int32_t x390 = -773;
	static int16_t x392 = -8;
	volatile int32_t t84 = -9968;

    t84 = ((x389!=(x390-x391))|x392);

    if (t84 != -7) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MIN;
	int32_t t85 = 172;

    t85 = ((x393!=(x394-x395))|x396);

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = INT64_MIN;
	uint32_t x398 = 1858U;
	uint64_t x399 = 72783LLU;
	volatile int64_t t86 = -84048347LL;

    t86 = ((x397!=(x398-x399))|x400);

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x402 = 8;
	volatile int16_t x403 = 3086;
	uint8_t x404 = 52U;
	int32_t t87 = 2;

    t87 = ((x401!=(x402-x403))|x404);

    if (t87 != 53) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x409 = 21U;
	volatile uint16_t x410 = UINT16_MAX;
	static volatile int32_t x411 = -755;
	static uint8_t x412 = 0U;
	static int32_t t88 = -820897001;

    t88 = ((x409!=(x410-x411))|x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x413 = INT32_MIN;
	uint16_t x414 = 10170U;
	static int8_t x415 = INT8_MIN;
	uint32_t x416 = 202346U;
	uint32_t t89 = 177194U;

    t89 = ((x413!=(x414-x415))|x416);

    if (t89 != 202347U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x417 = -1;
	int32_t x419 = INT32_MIN;
	volatile int32_t t90 = 35986618;

    t90 = ((x417!=(x418-x419))|x420);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = INT8_MAX;
	volatile int16_t x422 = -1;
	static int16_t x423 = INT16_MAX;
	static uint16_t x424 = 7U;
	int32_t t91 = -78;

    t91 = ((x421!=(x422-x423))|x424);

    if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x425 = INT32_MIN;
	static int64_t x426 = -55LL;
	int8_t x427 = 2;
	static int32_t x428 = INT32_MAX;
	volatile int32_t t92 = INT32_MAX;

    t92 = ((x425!=(x426-x427))|x428);

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x430 = -10;
	int8_t x431 = INT8_MIN;
	int16_t x432 = -1;

    t93 = ((x429!=(x430-x431))|x432);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x433 = 1215U;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t94 = -4030331;

    t94 = ((x433!=(x434-x435))|x436);

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x437 = -1LL;
	static volatile int8_t x438 = INT8_MIN;
	static int64_t x439 = INT64_MIN;

    t95 = ((x437!=(x438-x439))|x440);

    if (t95 != 13) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x441 = 0LL;
	int32_t x442 = INT32_MIN;
	static int64_t x443 = INT64_MIN;
	uint16_t x444 = UINT16_MAX;
	int32_t t96 = -86;

    t96 = ((x441!=(x442-x443))|x444);

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x445 = 25262U;
	static int64_t x446 = -1LL;
	volatile int32_t x448 = -1;
	volatile int32_t t97 = -213967;

    t97 = ((x445!=(x446-x447))|x448);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x449 = 863U;
	uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = ((x449!=(x450-x451))|x452);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x453 = INT16_MAX;
	uint32_t x454 = UINT32_MAX;
	int8_t x456 = INT8_MIN;
	int32_t t99 = -1556;

    t99 = ((x453!=(x454-x455))|x456);

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x458 = 397936U;
	static uint8_t x459 = UINT8_MAX;
	int8_t x460 = -1;
	int32_t t100 = 284682;

    t100 = ((x457!=(x458-x459))|x460);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x461 = -11934225LL;
	uint8_t x462 = 46U;
	static uint8_t x463 = 23U;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = ((x461!=(x462-x463))|x464);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x465 = 0U;
	volatile uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MIN;
	static int32_t t102 = -494;

    t102 = ((x465!=(x466-x467))|x468);

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x469 = -1LL;
	int32_t x470 = 82;
	int16_t x471 = -27;
	int8_t x472 = 2;
	static volatile int32_t t103 = 158;

    t103 = ((x469!=(x470-x471))|x472);

    if (t103 != 3) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x473 = -1LL;
	static int32_t x476 = -2;
	int32_t t104 = 791534;

    t104 = ((x473!=(x474-x475))|x476);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x477 = 2103756707LL;
	int64_t x478 = INT64_MIN;
	volatile int16_t x479 = -1;
	static volatile uint32_t x480 = 505332945U;
	static volatile uint32_t t105 = 102727042U;

    t105 = ((x477!=(x478-x479))|x480);

    if (t105 != 505332945U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x481 = -225134;
	int16_t x482 = INT16_MIN;
	static uint32_t x483 = UINT32_MAX;
	int32_t t106 = -855201470;

    t106 = ((x481!=(x482-x483))|x484);

    if (t106 != -32767) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x485 = INT64_MIN;
	static int8_t x486 = INT8_MIN;
	int64_t x487 = -1LL;
	static volatile int8_t x488 = -1;
	static int32_t t107 = 325284786;

    t107 = ((x485!=(x486-x487))|x488);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x489 = INT8_MIN;
	volatile uint8_t x490 = 1U;
	int32_t x491 = INT32_MAX;
	int16_t x492 = -1;

    t108 = ((x489!=(x490-x491))|x492);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x493 = INT16_MAX;
	static uint32_t x495 = 0U;
	int64_t x496 = INT64_MIN;
	volatile int64_t t109 = -1898901688403586004LL;

    t109 = ((x493!=(x494-x495))|x496);

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x497 = 432U;
	volatile int32_t x498 = -1;
	static volatile int16_t x499 = -1;
	uint64_t x500 = 110344901LLU;
	volatile uint64_t t110 = 29402046LLU;

    t110 = ((x497!=(x498-x499))|x500);

    if (t110 != 110344901LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x506 = 218U;
	uint64_t x507 = 1834LLU;
	int32_t x508 = 873;

    t111 = ((x505!=(x506-x507))|x508);

    if (t111 != 873) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x510 = INT32_MIN;
	volatile int32_t t112 = 17308;

    t112 = ((x509!=(x510-x511))|x512);

    if (t112 != 255) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x517 = 2125109766LLU;
	int8_t x518 = INT8_MIN;
	int32_t x520 = INT32_MAX;

    t113 = ((x517!=(x518-x519))|x520);

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x521 = INT16_MIN;
	static uint16_t x522 = 0U;
	int16_t x523 = INT16_MIN;
	uint64_t x524 = 4256427396509688462LLU;

    t114 = ((x521!=(x522-x523))|x524);

    if (t114 != 4256427396509688463LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x526 = -28441208;
	volatile uint64_t x528 = 20283LLU;
	static volatile uint64_t t115 = 258893174795LLU;

    t115 = ((x525!=(x526-x527))|x528);

    if (t115 != 20283LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = -2341027LL;
	int8_t x530 = INT8_MIN;
	int64_t x532 = INT64_MIN;
	static volatile int64_t t116 = 50406516280LL;

    t116 = ((x529!=(x530-x531))|x532);

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x534 = 162;
	static uint32_t x536 = 462114549U;
	uint32_t t117 = 123210958U;

    t117 = ((x533!=(x534-x535))|x536);

    if (t117 != 462114549U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = INT64_MAX;
	static int64_t x538 = 0LL;
	uint64_t x539 = 637663483076LLU;
	int32_t x540 = INT32_MIN;

    t118 = ((x537!=(x538-x539))|x540);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x541 = INT64_MIN;
	static int8_t x542 = 7;
	uint16_t x543 = 17U;
	uint32_t x544 = UINT32_MAX;
	static uint32_t t119 = UINT32_MAX;

    t119 = ((x541!=(x542-x543))|x544);

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x545 = 0;
	int8_t x546 = INT8_MIN;
	int16_t x547 = INT16_MIN;
	uint16_t x548 = UINT16_MAX;

    t120 = ((x545!=(x546-x547))|x548);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x549 = 1;
	volatile int16_t x551 = -1;
	static uint32_t x552 = 3U;
	static volatile uint32_t t121 = 874051971U;

    t121 = ((x549!=(x550-x551))|x552);

    if (t121 != 3U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = INT64_MIN;
	static int16_t x554 = -1;
	int8_t x555 = 0;
	uint32_t t122 = 87097U;

    t122 = ((x553!=(x554-x555))|x556);

    if (t122 != 26829U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x557 = -3;
	int64_t x558 = 1LL;
	volatile int16_t x559 = -109;
	volatile int32_t x560 = -1;
	volatile int32_t t123 = -15;

    t123 = ((x557!=(x558-x559))|x560);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x561 = -13;
	uint64_t x562 = 193276LLU;
	volatile int64_t x563 = -30216975261557LL;
	int32_t x564 = 1812174;
	volatile int32_t t124 = -93;

    t124 = ((x561!=(x562-x563))|x564);

    if (t124 != 1812175) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x566 = -113728419978806LL;
	volatile int8_t x567 = INT8_MIN;
	volatile int16_t x568 = INT16_MIN;

    t125 = ((x565!=(x566-x567))|x568);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	uint16_t x570 = 61U;
	static int8_t x571 = 2;
	int64_t x572 = -647382969242441LL;
	int64_t t126 = -5624031254LL;

    t126 = ((x569!=(x570-x571))|x572);

    if (t126 != -647382969242441LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = -894824;
	uint32_t x579 = UINT32_MAX;
	int64_t x580 = INT64_MIN;
	volatile int64_t t127 = -51953LL;

    t127 = ((x577!=(x578-x579))|x580);

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x581 = -11880;
	static int32_t x582 = INT32_MIN;
	static uint32_t x583 = 2U;
	static int32_t x584 = INT32_MAX;
	volatile int32_t t128 = INT32_MAX;

    t128 = ((x581!=(x582-x583))|x584);

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = 1;
	int8_t x587 = -1;
	int64_t x588 = INT64_MIN;
	volatile int64_t t129 = -9391LL;

    t129 = ((x585!=(x586-x587))|x588);

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = -1;
	static volatile int32_t x591 = INT32_MAX;
	int32_t t130 = 112704;

    t130 = ((x589!=(x590-x591))|x592);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x593 = UINT16_MAX;
	int64_t x594 = 19830722LL;
	int32_t x595 = 1785;
	volatile int32_t t131 = 4;

    t131 = ((x593!=(x594-x595))|x596);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = INT16_MIN;
	static int32_t x599 = INT32_MIN;
	volatile int32_t t132 = -1089;

    t132 = ((x597!=(x598-x599))|x600);

    if (t132 != -2147483647) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x601 = INT64_MIN;
	int64_t x604 = INT64_MAX;
	int64_t t133 = INT64_MAX;

    t133 = ((x601!=(x602-x603))|x604);

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = -6;
	volatile int32_t x606 = INT32_MIN;
	static volatile int8_t x608 = INT8_MIN;
	int32_t t134 = -1662;

    t134 = ((x605!=(x606-x607))|x608);

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x609 = 77U;
	int8_t x610 = INT8_MIN;
	uint32_t x611 = UINT32_MAX;
	int64_t x612 = -2744759570627LL;

    t135 = ((x609!=(x610-x611))|x612);

    if (t135 != -2744759570627LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x613 = -30741493;
	int8_t x614 = INT8_MIN;
	int64_t x615 = 453LL;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t136 = 35105;

    t136 = ((x613!=(x614-x615))|x616);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x618 = -1179;
	static volatile int8_t x619 = INT8_MAX;
	int8_t x620 = 15;
	int32_t t137 = -200;

    t137 = ((x617!=(x618-x619))|x620);

    if (t137 != 15) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x621 = INT16_MIN;
	static uint16_t x622 = UINT16_MAX;
	static int16_t x623 = INT16_MAX;
	volatile int32_t t138 = -167038;

    t138 = ((x621!=(x622-x623))|x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x626 = -1;
	int8_t x627 = INT8_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t139 = 1545908;

    t139 = ((x625!=(x626-x627))|x628);

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x629 = INT32_MIN;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 8366518632588292877LLU;
	static int64_t x632 = INT64_MAX;
	volatile int64_t t140 = INT64_MAX;

    t140 = ((x629!=(x630-x631))|x632);

    if (t140 != INT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x633 = 23U;
	volatile int16_t x634 = -1;
	uint8_t x635 = 6U;
	int8_t x636 = INT8_MIN;

    t141 = ((x633!=(x634-x635))|x636);

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = -301;
	static volatile int16_t x638 = INT16_MIN;
	uint8_t x639 = UINT8_MAX;
	volatile uint64_t t142 = 674781154215317622LLU;

    t142 = ((x637!=(x638-x639))|x640);

    if (t142 != 28847742746538205LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x641 = -2215;
	int8_t x642 = -2;
	uint32_t x643 = UINT32_MAX;
	static int16_t x644 = INT16_MIN;

    t143 = ((x641!=(x642-x643))|x644);

    if (t143 != -32767) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x645 = 57U;
	int64_t x646 = INT64_MIN;
	uint32_t x648 = 26034390U;
	uint32_t t144 = 764672U;

    t144 = ((x645!=(x646-x647))|x648);

    if (t144 != 26034391U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x649 = INT16_MAX;
	static uint64_t x650 = 735104139171LLU;
	uint8_t x651 = UINT8_MAX;
	int64_t x652 = INT64_MIN;
	static int64_t t145 = -42900427LL;

    t145 = ((x649!=(x650-x651))|x652);

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x653 = INT64_MAX;
	uint16_t x654 = 5U;
	static int64_t x656 = INT64_MIN;

    t146 = ((x653!=(x654-x655))|x656);

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x674 = -1LL;
	uint32_t x675 = 2U;
	static volatile int32_t x676 = INT32_MIN;
	int32_t t147 = -8724;

    t147 = ((x673!=(x674-x675))|x676);

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x678 = 1826140U;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = -356241200949566LL;

    t148 = ((x677!=(x678-x679))|x680);

    if (t148 != -356241200949565LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x681 = 1783160822U;
	int32_t x682 = INT32_MAX;
	int64_t x683 = INT64_MAX;
	static uint32_t t149 = UINT32_MAX;

    t149 = ((x681!=(x682-x683))|x684);

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x686 = UINT16_MAX;
	volatile int16_t x687 = INT16_MAX;
	int32_t x688 = -95;
	volatile int32_t t150 = 3647953;

    t150 = ((x685!=(x686-x687))|x688);

    if (t150 != -95) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x694 = 8629095;
	int16_t x695 = -1;
	static uint8_t x696 = 6U;

    t151 = ((x693!=(x694-x695))|x696);

    if (t151 != 7) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x705 = 32405U;
	int32_t x706 = -1;
	int16_t x707 = 444;
	uint64_t x708 = UINT64_MAX;
	uint64_t t152 = UINT64_MAX;

    t152 = ((x705!=(x706-x707))|x708);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x709 = INT64_MIN;
	volatile int16_t x710 = 3821;
	int8_t x711 = 0;
	uint16_t x712 = 10U;
	static int32_t t153 = -123772279;

    t153 = ((x709!=(x710-x711))|x712);

    if (t153 != 11) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x713 = INT16_MIN;
	uint32_t x714 = UINT32_MAX;
	int64_t x715 = INT64_MAX;
	static volatile int64_t t154 = -1424687LL;

    t154 = ((x713!=(x714-x715))|x716);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x717 = UINT8_MAX;
	uint8_t x718 = UINT8_MAX;
	uint32_t x719 = UINT32_MAX;
	uint32_t x720 = 5775U;
	volatile uint32_t t155 = 18U;

    t155 = ((x717!=(x718-x719))|x720);

    if (t155 != 5775U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x728 = 55U;
	volatile int32_t t156 = 61;

    t156 = ((x725!=(x726-x727))|x728);

    if (t156 != 55) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x729 = 594141548U;
	static int32_t x730 = -1;
	volatile int8_t x731 = 7;
	int32_t t157 = 401;

    t157 = ((x729!=(x730-x731))|x732);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x733 = -32530;
	int16_t x734 = -400;
	int16_t x735 = 83;
	int8_t x736 = 9;
	volatile int32_t t158 = 3;

    t158 = ((x733!=(x734-x735))|x736);

    if (t158 != 9) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x738 = 0U;
	int16_t x739 = INT16_MIN;
	uint16_t x740 = 484U;
	volatile int32_t t159 = 1;

    t159 = ((x737!=(x738-x739))|x740);

    if (t159 != 485) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x741 = INT8_MIN;
	volatile uint64_t x742 = 28464080LLU;
	volatile uint32_t x743 = 30U;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t160 = -1847668;

    t160 = ((x741!=(x742-x743))|x744);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x745 = INT64_MIN;
	uint16_t x746 = 12916U;
	int64_t x747 = INT64_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t161 = -1;

    t161 = ((x745!=(x746-x747))|x748);

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = -1LL;
	int64_t x752 = INT64_MAX;
	volatile int64_t t162 = INT64_MAX;

    t162 = ((x749!=(x750-x751))|x752);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x753 = 101U;
	volatile uint32_t x754 = UINT32_MAX;
	uint32_t x755 = UINT32_MAX;
	static uint16_t x756 = UINT16_MAX;

    t163 = ((x753!=(x754-x755))|x756);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x758 = INT8_MIN;
	uint64_t x759 = 5688LLU;
	static int16_t x760 = INT16_MIN;

    t164 = ((x757!=(x758-x759))|x760);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x761 = -1;
	int16_t x762 = -404;
	static uint8_t x763 = 0U;

    t165 = ((x761!=(x762-x763))|x764);

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x766 = INT16_MIN;
	static int8_t x767 = 34;
	uint64_t x768 = 31031590142867293LLU;
	static uint64_t t166 = 979083899462715LLU;

    t166 = ((x765!=(x766-x767))|x768);

    if (t166 != 31031590142867293LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x769 = -735;
	int64_t x771 = -1LL;
	uint32_t t167 = 170367190U;

    t167 = ((x769!=(x770-x771))|x772);

    if (t167 != 192414169U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x773 = -28;
	volatile uint16_t x774 = 2446U;
	int8_t x776 = INT8_MAX;

    t168 = ((x773!=(x774-x775))|x776);

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x777 = UINT16_MAX;
	int16_t x778 = -1;
	int32_t x779 = INT32_MAX;
	static int16_t x780 = -1;
	volatile int32_t t169 = -8;

    t169 = ((x777!=(x778-x779))|x780);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x781 = 0;
	int32_t x782 = -759326334;
	int64_t x783 = -1LL;
	volatile int32_t t170 = 106259;

    t170 = ((x781!=(x782-x783))|x784);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x785 = 103U;
	volatile int16_t x787 = INT16_MIN;
	int32_t x788 = 16163300;

    t171 = ((x785!=(x786-x787))|x788);

    if (t171 != 16163301) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x789 = -1;
	int8_t x790 = -1;
	int8_t x791 = 3;
	volatile uint32_t x792 = 162241U;
	volatile uint32_t t172 = 82290U;

    t172 = ((x789!=(x790-x791))|x792);

    if (t172 != 162241U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x793 = INT32_MAX;
	uint8_t x794 = 14U;
	static int8_t x796 = 63;
	int32_t t173 = -2;

    t173 = ((x793!=(x794-x795))|x796);

    if (t173 != 63) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MIN;
	uint8_t x799 = 1U;
	volatile int32_t t174 = -391441966;

    t174 = ((x797!=(x798-x799))|x800);

    if (t174 != 7) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x801 = 1251359256058770722LL;
	int8_t x802 = -51;
	int64_t x804 = INT64_MIN;
	static int64_t t175 = -11895378775LL;

    t175 = ((x801!=(x802-x803))|x804);

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x805 = -926844027917366LL;
	uint32_t x807 = UINT32_MAX;
	volatile int32_t t176 = -814;

    t176 = ((x805!=(x806-x807))|x808);

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x809 = INT64_MAX;
	int16_t x810 = 1;
	uint32_t x811 = 1043827735U;

    t177 = ((x809!=(x810-x811))|x812);

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x813 = 690188LL;
	int16_t x814 = 1;
	volatile int8_t x815 = INT8_MIN;
	int32_t x816 = -1;
	volatile int32_t t178 = 6305;

    t178 = ((x813!=(x814-x815))|x816);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x825 = -2434548524878745415LL;
	int8_t x826 = 1;
	uint32_t x827 = 914036041U;
	volatile int8_t x828 = INT8_MIN;
	volatile int32_t t179 = 26;

    t179 = ((x825!=(x826-x827))|x828);

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x829 = UINT64_MAX;
	static volatile int16_t x830 = INT16_MAX;
	uint32_t x831 = 1424833U;
	int8_t x832 = INT8_MIN;
	volatile int32_t t180 = 1;

    t180 = ((x829!=(x830-x831))|x832);

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x833 = -1;
	int8_t x834 = -7;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;

    t181 = ((x833!=(x834-x835))|x836);

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x837 = 115074U;
	static int16_t x838 = INT16_MIN;
	static uint8_t x840 = 9U;
	volatile int32_t t182 = 176630;

    t182 = ((x837!=(x838-x839))|x840);

    if (t182 != 9) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x841 = 15960U;
	int16_t x842 = INT16_MIN;
	int32_t x843 = -2;
	static uint64_t x844 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = ((x841!=(x842-x843))|x844);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x845 = INT16_MIN;
	volatile uint8_t x846 = 58U;
	uint64_t x847 = 7547693871850LLU;

    t184 = ((x845!=(x846-x847))|x848);

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x851 = -471;
	static int32_t x852 = -1;
	static volatile int32_t t185 = -873311151;

    t185 = ((x849!=(x850-x851))|x852);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x854 = 30;
	uint32_t x855 = 19U;
	uint8_t x856 = 1U;
	static int32_t t186 = -15747984;

    t186 = ((x853!=(x854-x855))|x856);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x858 = INT32_MIN;
	static int8_t x859 = INT8_MIN;
	volatile int32_t t187 = 81125448;

    t187 = ((x857!=(x858-x859))|x860);

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x861 = -6;
	volatile int16_t x862 = INT16_MIN;
	int32_t x863 = INT32_MIN;
	int16_t x864 = INT16_MIN;
	int32_t t188 = 0;

    t188 = ((x861!=(x862-x863))|x864);

    if (t188 != -32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x865 = -6204400LL;
	volatile int32_t x866 = INT32_MIN;
	uint32_t x867 = UINT32_MAX;
	static int32_t x868 = -178471;
	volatile int32_t t189 = 6947;

    t189 = ((x865!=(x866-x867))|x868);

    if (t189 != -178471) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x869 = UINT8_MAX;
	int64_t x870 = INT64_MIN;

    t190 = ((x869!=(x870-x871))|x872);

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x873 = INT16_MAX;
	int32_t x874 = 168712503;
	int8_t x875 = INT8_MIN;
	int64_t x876 = INT64_MAX;
	int64_t t191 = INT64_MAX;

    t191 = ((x873!=(x874-x875))|x876);

    if (t191 != INT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x878 = INT8_MIN;
	int64_t x880 = INT64_MIN;
	static volatile int64_t t192 = 54524LL;

    t192 = ((x877!=(x878-x879))|x880);

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x885 = 58;
	static volatile int16_t x886 = INT16_MIN;
	uint64_t x888 = UINT64_MAX;
	static volatile uint64_t t193 = UINT64_MAX;

    t193 = ((x885!=(x886-x887))|x888);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x889 = INT16_MIN;
	int8_t x891 = 0;
	int8_t x892 = INT8_MAX;
	volatile int32_t t194 = -591;

    t194 = ((x889!=(x890-x891))|x892);

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x893 = INT16_MAX;
	static int8_t x895 = INT8_MIN;
	volatile uint32_t x896 = 3052U;
	uint32_t t195 = 17019U;

    t195 = ((x893!=(x894-x895))|x896);

    if (t195 != 3053U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x897 = 4901467606469362347LLU;
	static int32_t x898 = -1;
	int16_t x899 = -298;

    t196 = ((x897!=(x898-x899))|x900);

    if (t196 != 2105U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x901 = 2040U;
	volatile int32_t x902 = -1;
	volatile uint8_t x903 = 4U;
	int64_t x904 = INT64_MIN;
	volatile int64_t t197 = -176086966845LL;

    t197 = ((x901!=(x902-x903))|x904);

    if (t197 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x905 = 437137287959687LL;
	int32_t x906 = -1;
	int64_t x908 = INT64_MIN;

    t198 = ((x905!=(x906-x907))|x908);

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x909 = -1;
	uint32_t x910 = 23U;
	int8_t x911 = INT8_MIN;
	static volatile int32_t t199 = -6006396;

    t199 = ((x909!=(x910-x911))|x912);

    if (t199 != 32767) { NG(); } else { ; }
	
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

