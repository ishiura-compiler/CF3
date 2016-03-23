
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
int64_t x6 = INT64_MAX;
volatile int32_t t1 = INT32_MAX;
volatile int32_t x12 = 3560;
uint8_t x20 = 63U;
uint8_t x27 = UINT8_MAX;
uint8_t x28 = UINT8_MAX;
uint64_t x30 = 124LLU;
uint16_t x31 = 2967U;
volatile int64_t x34 = INT64_MIN;
volatile uint16_t x48 = 0U;
int8_t x49 = INT8_MIN;
int32_t x50 = 48049;
volatile int64_t x55 = INT64_MIN;
volatile uint32_t x61 = UINT32_MAX;
int8_t x64 = 41;
int16_t x70 = -1;
int64_t x72 = -1LL;
int64_t x75 = INT64_MIN;
uint64_t t19 = 197480384610LLU;
static uint8_t x81 = UINT8_MAX;
static volatile int32_t x85 = -1;
uint64_t x88 = 3314779747574LLU;
volatile uint16_t x89 = 6U;
uint32_t x92 = 13886U;
int32_t x95 = 124901136;
int8_t x99 = INT8_MIN;
uint64_t t24 = UINT64_MAX;
int16_t x102 = INT16_MAX;
static int64_t t25 = -6814749642505LL;
int16_t x106 = 0;
uint16_t x108 = 31U;
static int32_t x110 = INT32_MIN;
volatile int64_t x111 = INT64_MIN;
volatile int64_t x112 = INT64_MIN;
int32_t x115 = -266328589;
uint32_t x116 = 15395812U;
uint64_t t30 = 205843643534777LLU;
volatile int8_t x128 = INT8_MAX;
int16_t x140 = INT16_MIN;
int16_t x141 = 82;
int16_t x148 = -1;
int16_t x150 = INT16_MIN;
volatile int32_t t37 = 886600;
int64_t x154 = INT64_MIN;
uint16_t x161 = 32651U;
int64_t x163 = INT64_MIN;
static volatile int32_t t43 = 3497350;
int32_t x177 = 155374;
uint16_t x183 = 6540U;
int32_t x189 = INT32_MIN;
volatile uint16_t x190 = UINT16_MAX;
volatile uint16_t x196 = 5982U;
int32_t x200 = INT32_MAX;
volatile int64_t x201 = INT64_MAX;
int32_t x203 = 7301493;
int16_t x209 = INT16_MAX;
int16_t x210 = INT16_MIN;
volatile int16_t x213 = INT16_MIN;
int64_t x226 = INT64_MIN;
volatile int32_t t56 = -47;
int16_t x232 = INT16_MIN;
uint32_t x239 = 7244U;
int32_t x242 = INT32_MAX;
volatile int32_t x244 = INT32_MIN;
int32_t x251 = INT32_MAX;
int32_t t63 = 2837;
volatile int8_t x257 = INT8_MIN;
static int8_t x261 = INT8_MIN;
static volatile int64_t x271 = INT64_MAX;
volatile uint32_t x277 = 106U;
volatile int32_t x282 = -114;
static int32_t x286 = 391483;
int64_t x295 = INT64_MIN;
volatile int32_t t73 = INT32_MIN;
int16_t x299 = -1;
int16_t x300 = INT16_MAX;
int16_t x305 = INT16_MIN;
int32_t t76 = -112310;
int32_t t77 = -703;
uint8_t x316 = UINT8_MAX;
static volatile int32_t t79 = 969455188;
volatile int64_t x322 = INT64_MAX;
volatile int32_t t80 = 1;
static int64_t x327 = INT64_MIN;
static uint32_t x329 = 15308U;
uint16_t x331 = UINT16_MAX;
int64_t x338 = -1LL;
int64_t x339 = INT64_MAX;
static volatile int32_t x343 = -1;
volatile int8_t x345 = -1;
int64_t x346 = -21079791124548LL;
static uint8_t x351 = UINT8_MAX;
static int64_t x352 = -445128295634096LL;
int64_t x353 = INT64_MAX;
volatile int8_t x354 = INT8_MIN;
int64_t t88 = INT64_MAX;
volatile int32_t x360 = INT32_MIN;
int16_t x361 = -301;
volatile int32_t x365 = INT32_MAX;
int16_t x367 = INT16_MIN;
volatile uint32_t x371 = 1287U;
uint8_t x380 = 105U;
volatile int32_t t94 = 430891;
uint64_t x388 = 52168142210527LLU;
int64_t x389 = -1LL;
int32_t x396 = -1;
volatile int64_t x397 = INT64_MIN;
static int8_t x398 = -1;
static volatile int64_t t99 = 56163LL;
int64_t x416 = INT64_MIN;
uint32_t x420 = UINT32_MAX;
int8_t x421 = INT8_MIN;
static uint64_t x422 = UINT64_MAX;
uint16_t x423 = 0U;
static uint64_t x425 = 28718803155LLU;
int32_t x429 = -569737460;
int8_t x434 = INT8_MIN;
static int64_t t111 = -20337833487957LL;
int64_t x457 = -1LL;
int64_t t114 = 750206LL;
static int8_t x463 = 32;
volatile int8_t x468 = -6;
volatile uint8_t x470 = 1U;
int8_t x471 = INT8_MIN;
uint64_t x476 = 11181LLU;
volatile uint64_t t118 = 11LLU;
uint64_t x477 = 421LLU;
static int8_t x486 = INT8_MIN;
static uint32_t x496 = UINT32_MAX;
static int8_t x502 = INT8_MAX;
uint32_t x507 = 9U;
uint64_t t126 = 401657836LLU;
int16_t x510 = -84;
int32_t x516 = -1;
int32_t x520 = INT32_MIN;
int32_t x522 = INT32_MAX;
int16_t x524 = -14609;
static int32_t x526 = -1;
volatile int16_t x529 = INT16_MAX;
int16_t x530 = 1;
static int32_t x537 = -1;
volatile int32_t x545 = INT32_MAX;
uint32_t t136 = UINT32_MAX;
int32_t x549 = INT32_MIN;
uint16_t x554 = 29390U;
int32_t x556 = INT32_MAX;
int64_t x557 = -552043772248181683LL;
int32_t t140 = 4139;
int32_t t144 = -3147220;
uint8_t x582 = 10U;
uint32_t x585 = UINT32_MAX;
volatile uint64_t t146 = 17744406159552166LLU;
uint64_t x593 = 1372LLU;
volatile int8_t x598 = INT8_MIN;
int8_t x602 = INT8_MIN;
int64_t x604 = INT64_MIN;
volatile uint32_t x613 = 13U;
int32_t x614 = INT32_MIN;
int16_t x615 = INT16_MAX;
uint32_t t153 = UINT32_MAX;
int32_t x621 = -1;
int64_t x622 = 185519484362114953LL;
int32_t x626 = -1;
int8_t x629 = -1;
volatile int8_t x631 = 0;
static int64_t t157 = 16397595510935LL;
uint16_t x633 = 38U;
volatile int16_t x635 = -1;
int64_t x639 = INT64_MIN;
int16_t x640 = 29;
int64_t x641 = -26715LL;
volatile int64_t t160 = 3542159LL;
int64_t x646 = -4166910945LL;
uint16_t x663 = UINT16_MAX;
int8_t x664 = -1;
volatile int32_t t165 = 75;
volatile int16_t x666 = -1;
uint16_t x668 = UINT16_MAX;
uint16_t x669 = 18U;
int64_t x674 = INT64_MIN;
int16_t x677 = INT16_MIN;
static uint16_t x681 = 16113U;
volatile uint16_t x682 = UINT16_MAX;
static int8_t x697 = INT8_MIN;
int16_t x700 = INT16_MAX;
static int16_t x701 = INT16_MIN;
uint16_t x702 = 1143U;
static uint64_t x704 = 125041LLU;
uint64_t x706 = UINT64_MAX;
static volatile int16_t x710 = INT16_MIN;
int32_t x719 = INT32_MIN;
uint32_t t179 = 1U;
int64_t x722 = INT64_MIN;
int32_t x726 = INT32_MIN;
static int8_t x732 = INT8_MAX;
volatile uint32_t t182 = 20U;
static int16_t x736 = INT16_MAX;
int8_t x738 = INT8_MAX;
int64_t x739 = INT64_MAX;
int32_t t184 = 1970797;
static int16_t x744 = INT16_MAX;
volatile int32_t t185 = -38;
static int8_t x750 = INT8_MIN;
int8_t x752 = -23;
static volatile int32_t t187 = 26;
static int16_t x753 = -1;
volatile int32_t t188 = -1845;
int64_t t190 = INT64_MAX;
volatile int64_t t196 = -279679913505LL;
static int32_t x793 = 193404;


void f0(void) {
    	volatile uint64_t x1 = 6856849LLU;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 74940;
	uint64_t t0 = 21848596568494LLU;

    t0 = ((x1|(x2<=x3))|x4);

    if (t0 != 6923453LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 75U;
	static volatile int8_t x7 = INT8_MAX;
	int32_t x8 = INT32_MAX;

    t1 = ((x5|(x6<=x7))|x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	int32_t t2 = -354;

    t2 = ((x9|(x10<=x11))|x12);

    if (t2 != 3583) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	uint16_t x14 = 46U;
	uint64_t x15 = 0LLU;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -8744165;

    t3 = ((x13|(x14<=x15))|x16);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = INT16_MAX;
	volatile int64_t x18 = INT64_MAX;
	volatile int64_t x19 = -1LL;
	volatile int32_t t4 = 1;

    t4 = ((x17|(x18<=x19))|x20);

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x21 = INT64_MAX;
	static volatile uint64_t x22 = UINT64_MAX;
	uint16_t x23 = 4023U;
	static int32_t x24 = -386090;
	int64_t t5 = -3015811958418LL;

    t5 = ((x21|(x22<=x23))|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 1497981994356047LLU;
	int16_t x26 = 253;
	volatile uint64_t t6 = 325927LLU;

    t6 = ((x25|(x26<=x27))|x28);

    if (t6 != 1497981994356223LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 999U;
	int64_t x32 = -1LL;
	static volatile int64_t t7 = -15380LL;

    t7 = ((x29|(x30<=x31))|x32);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = -1;
	volatile uint8_t x35 = 29U;
	static int16_t x36 = -1;
	volatile int32_t t8 = -1598875;

    t8 = ((x33|(x34<=x35))|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = -1;
	uint16_t x39 = 13U;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -1;

    t9 = ((x37|(x38<=x39))|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 3U;
	int8_t x42 = -1;
	volatile int64_t x43 = INT64_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -60247718771LL;

    t10 = ((x41|(x42<=x43))|x44);

    if (t10 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MIN;
	int16_t x47 = 14009;
	int32_t t11 = -5850;

    t11 = ((x45|(x46<=x47))|x48);

    if (t11 != -127) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x51 = 981219632;
	int8_t x52 = INT8_MIN;
	static int32_t t12 = 202456;

    t12 = ((x49|(x50<=x51))|x52);

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	uint64_t x54 = UINT64_MAX;
	volatile int64_t x56 = INT64_MIN;
	int64_t t13 = 2071738LL;

    t13 = ((x53|(x54<=x55))|x56);

    if (t13 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 3U;
	volatile int16_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	uint8_t x60 = 2U;
	volatile int32_t t14 = -6;

    t14 = ((x57|(x58<=x59))|x60);

    if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = 25609U;
	int16_t x63 = INT16_MAX;
	uint32_t t15 = UINT32_MAX;

    t15 = ((x61|(x62<=x63))|x64);

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MIN;
	static volatile uint64_t x67 = 4018436997LLU;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = ((x65|(x66<=x67))|x68);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	uint64_t x71 = 912592231LLU;
	int64_t t17 = 124762687907992158LL;

    t17 = ((x69|(x70<=x71))|x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 165768U;
	int16_t x74 = -93;
	static int64_t x76 = -3808098LL;
	volatile int64_t t18 = -1398LL;

    t18 = ((x73|(x74<=x75))|x76);

    if (t18 != -3676258LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 53LLU;
	static int32_t x78 = 138994;
	uint8_t x79 = UINT8_MAX;
	uint16_t x80 = UINT16_MAX;

    t19 = ((x77|(x78<=x79))|x80);

    if (t19 != 65535LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -894919;

    t20 = ((x81|(x82<=x83))|x84);

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x86 = 63U;
	static volatile uint64_t x87 = UINT64_MAX;
	uint64_t t21 = UINT64_MAX;

    t21 = ((x85|(x86<=x87))|x88);

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = -1;
	int8_t x91 = 33;
	volatile uint32_t t22 = 440U;

    t22 = ((x89|(x90<=x91))|x92);

    if (t22 != 13887U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = 3U;
	static uint64_t x94 = 3284495073714008LLU;
	uint8_t x96 = 8U;
	uint32_t t23 = 0U;

    t23 = ((x93|(x94<=x95))|x96);

    if (t23 != 11U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = UINT64_MAX;
	static uint8_t x98 = UINT8_MAX;
	int32_t x100 = -239;

    t24 = ((x97|(x98<=x99))|x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int32_t x103 = -22;
	int64_t x104 = INT64_MIN;

    t25 = ((x101|(x102<=x103))|x104);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	static int64_t x107 = 5426779LL;
	uint64_t t26 = UINT64_MAX;

    t26 = ((x105|(x106<=x107))|x108);

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 3;
	int64_t t27 = 21812064009736698LL;

    t27 = ((x109|(x110<=x111))|x112);

    if (t27 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	static uint32_t t28 = UINT32_MAX;

    t28 = ((x113|(x114<=x115))|x116);

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -774411755908366343LL;
	static uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = INT16_MIN;
	static uint8_t x120 = 1U;
	volatile int64_t t29 = 71LL;

    t29 = ((x117|(x118<=x119))|x120);

    if (t29 != -774411755908366343LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = UINT32_MAX;
	int8_t x122 = 0;
	volatile uint32_t x123 = UINT32_MAX;
	uint64_t x124 = 28LLU;

    t30 = ((x121|(x122<=x123))|x124);

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = -1LL;
	uint32_t x126 = 0U;
	static volatile uint16_t x127 = 1U;
	volatile int64_t t31 = -10098298068LL;

    t31 = ((x125|(x126<=x127))|x128);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = 5756;
	int32_t x130 = -1;
	volatile int32_t x131 = 8;
	int8_t x132 = INT8_MAX;
	volatile int32_t t32 = 11;

    t32 = ((x129|(x130<=x131))|x132);

    if (t32 != 5759) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 270LLU;
	int8_t x134 = 4;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 28116LLU;
	volatile uint64_t t33 = 13543012006568LLU;

    t33 = ((x133|(x134<=x135))|x136);

    if (t33 != 28127LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 169LLU;
	int16_t x138 = 1;
	int16_t x139 = INT16_MIN;
	uint64_t t34 = 2201LLU;

    t34 = ((x137|(x138<=x139))|x140);

    if (t34 != 18446744073709519017LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = INT32_MIN;
	static int64_t x143 = INT64_MIN;
	volatile int64_t x144 = INT64_MAX;
	volatile int64_t t35 = INT64_MAX;

    t35 = ((x141|(x142<=x143))|x144);

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	volatile int32_t x146 = -1;
	int64_t x147 = -1LL;
	static volatile int64_t t36 = 0LL;

    t36 = ((x145|(x146<=x147))|x148);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MAX;

    t37 = ((x149|(x150<=x151))|x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 52;
	static uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -4688;

    t38 = ((x153|(x154<=x155))|x156);

    if (t38 != -32715) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 5269424740513359LLU;
	int32_t x158 = -1;
	int32_t x159 = -1;
	int8_t x160 = -53;
	uint64_t t39 = 6893052LLU;

    t39 = ((x157|(x158<=x159))|x160);

    if (t39 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x162 = 81U;
	uint16_t x164 = 128U;
	int32_t t40 = 355061;

    t40 = ((x161|(x162<=x163))|x164);

    if (t40 != 32651) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = 1;
	int8_t x166 = -1;
	int16_t x167 = -1;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t41 = 46275;

    t41 = ((x165|(x166<=x167))|x168);

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	uint8_t x170 = UINT8_MAX;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

    t42 = ((x169|(x170<=x171))|x172);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 122U;
	uint8_t x174 = 0U;
	int16_t x175 = -1;
	uint8_t x176 = 3U;

    t43 = ((x173|(x174<=x175))|x176);

    if (t43 != 123) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = INT16_MIN;
	volatile uint16_t x179 = 8U;
	int16_t x180 = INT16_MAX;
	int32_t t44 = -12988;

    t44 = ((x177|(x178<=x179))|x180);

    if (t44 != 163839) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x181 = INT64_MIN;
	volatile int16_t x182 = INT16_MIN;
	int32_t x184 = -1745166;
	static volatile int64_t t45 = 3LL;

    t45 = ((x181|(x182<=x183))|x184);

    if (t45 != -1745165LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	uint32_t x186 = 31828956U;
	volatile int16_t x187 = 282;
	static int64_t x188 = 29818631966286LL;
	volatile int64_t t46 = 79456275936083LL;

    t46 = ((x185|(x186<=x187))|x188);

    if (t46 != -50LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t47 = -14LL;

    t47 = ((x189|(x190<=x191))|x192);

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 3U;
	static int8_t x194 = INT8_MAX;
	int64_t x195 = -3004LL;
	int32_t t48 = 2009;

    t48 = ((x193|(x194<=x195))|x196);

    if (t48 != 5983) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 23;
	int64_t x198 = -83LL;
	static int32_t x199 = -1;
	int32_t t49 = INT32_MAX;

    t49 = ((x197|(x198<=x199))|x200);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x202 = INT8_MAX;
	volatile uint16_t x204 = 1U;
	int64_t t50 = INT64_MAX;

    t50 = ((x201|(x202<=x203))|x204);

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 1U;
	int64_t x206 = -56972085510440239LL;
	static uint32_t x207 = 232033238U;
	uint8_t x208 = 4U;
	int32_t t51 = 1474864;

    t51 = ((x205|(x206<=x207))|x208);

    if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x211 = -2565LL;
	int8_t x212 = 6;
	int32_t t52 = 3734;

    t52 = ((x209|(x210<=x211))|x212);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x214 = 1U;
	static uint8_t x215 = UINT8_MAX;
	static uint64_t x216 = 908032109763LLU;
	static volatile uint64_t t53 = 237344272344713LLU;

    t53 = ((x213|(x214<=x215))|x216);

    if (t53 != 18446744073709546691LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	int64_t x219 = -6312848649292197LL;
	static int16_t x220 = INT16_MAX;
	int32_t t54 = -10229;

    t54 = ((x217|(x218<=x219))|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -2;
	uint16_t x222 = 2528U;
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	volatile int64_t t55 = -2601638LL;

    t55 = ((x221|(x222<=x223))|x224);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MIN;

    t56 = ((x225|(x226<=x227))|x228);

    if (t56 != -2147450881) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 10;
	uint32_t x230 = 153498093U;
	uint64_t x231 = 316951LLU;
	volatile int32_t t57 = -153771160;

    t57 = ((x229|(x230<=x231))|x232);

    if (t57 != -32758) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	static int16_t x234 = INT16_MIN;
	static volatile int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 507;

    t58 = ((x233|(x234<=x235))|x236);

    if (t58 != -32641) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = 31229U;
	uint64_t x238 = 1028690LLU;
	int16_t x240 = -2;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = ((x237|(x238<=x239))|x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = 0;
	int64_t x243 = INT64_MIN;
	int32_t t60 = INT32_MIN;

    t60 = ((x241|(x242<=x243))|x244);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 15643U;
	uint32_t x246 = UINT32_MAX;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	volatile int32_t t61 = -7457;

    t61 = ((x245|(x246<=x247))|x248);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	volatile uint16_t x250 = 166U;
	static int16_t x252 = INT16_MIN;
	static volatile int64_t t62 = -128585LL;

    t62 = ((x249|(x250<=x251))|x252);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MAX;
	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;

    t63 = ((x253|(x254<=x255))|x256);

    if (t63 != -2147450881) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -1;
	static int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -135246;

    t64 = ((x257|(x258<=x259))|x260);

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x262 = 39U;
	int8_t x263 = 24;
	volatile int32_t x264 = INT32_MIN;
	int32_t t65 = -1;

    t65 = ((x261|(x262<=x263))|x264);

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x265 = -1LL;
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MIN;
	volatile uint8_t x268 = 4U;
	int64_t t66 = 13305186916781569LL;

    t66 = ((x265|(x266<=x267))|x268);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = INT8_MIN;
	uint64_t x270 = 6348403LLU;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t67 = 456;

    t67 = ((x269|(x270<=x271))|x272);

    if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int8_t x274 = -19;
	uint16_t x275 = 4307U;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

    t68 = ((x273|(x274<=x275))|x276);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x278 = 93U;
	int64_t x279 = -757153LL;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t69 = 275642530U;

    t69 = ((x277|(x278<=x279))|x280);

    if (t69 != 4294967274U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -4879;
	uint32_t x283 = 0U;
	uint32_t x284 = 8718U;
	volatile uint32_t t70 = 4U;

    t70 = ((x281|(x282<=x283))|x284);

    if (t70 != 4294962943U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 62U;
	volatile int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	volatile uint32_t t71 = 689U;

    t71 = ((x285|(x286<=x287))|x288);

    if (t71 != 4294967230U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int16_t x291 = INT16_MAX;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = 25995;

    t72 = ((x289|(x290<=x291))|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x294 = 1LL;
	int32_t x296 = INT32_MIN;

    t73 = ((x293|(x294<=x295))|x296);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	uint64_t x298 = UINT64_MAX;
	int32_t t74 = 3422666;

    t74 = ((x297|(x298<=x299))|x300);

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 181;
	uint8_t x302 = UINT8_MAX;
	volatile int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 1877699;

    t75 = ((x301|(x302<=x303))|x304);

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x306 = UINT64_MAX;
	int64_t x307 = -9895255446617LL;
	int16_t x308 = 83;

    t76 = ((x305|(x306<=x307))|x308);

    if (t76 != -32685) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = 703;
	volatile uint8_t x310 = 52U;
	static int32_t x311 = INT32_MAX;
	volatile int8_t x312 = INT8_MIN;

    t77 = ((x309|(x310<=x311))|x312);

    if (t77 != -65) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 15U;
	int64_t x314 = 130048787646297177LL;
	uint8_t x315 = UINT8_MAX;
	int32_t t78 = -188914365;

    t78 = ((x313|(x314<=x315))|x316);

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	int16_t x318 = -3081;
	volatile int32_t x319 = INT32_MIN;
	int8_t x320 = 40;

    t79 = ((x317|(x318<=x319))|x320);

    if (t79 != -32728) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MAX;
	static uint8_t x323 = UINT8_MAX;
	int16_t x324 = -18;

    t80 = ((x321|(x322<=x323))|x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = 3;
	uint64_t x328 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

    t81 = ((x325|(x326<=x327))|x328);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x330 = 4540U;
	int16_t x332 = INT16_MAX;
	volatile uint32_t t82 = 178871U;

    t82 = ((x329|(x330<=x331))|x332);

    if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = -1;
	static int32_t x334 = 3579262;
	static uint16_t x335 = 298U;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 441247790;

    t83 = ((x333|(x334<=x335))|x336);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = INT16_MIN;
	static int8_t x340 = -1;
	int32_t t84 = -1;

    t84 = ((x337|(x338<=x339))|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MIN;
	static uint64_t x342 = 59953065LLU;
	static int16_t x344 = INT16_MIN;
	int32_t t85 = 42278;

    t85 = ((x341|(x342<=x343))|x344);

    if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x347 = 0;
	int32_t x348 = 108;
	static volatile int32_t t86 = 26672285;

    t86 = ((x345|(x346<=x347))|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	volatile int32_t x350 = -25486;
	volatile int64_t t87 = 1075568417815895187LL;

    t87 = ((x349|(x350<=x351))|x352);

    if (t87 != -21679LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x355 = INT32_MAX;
	uint8_t x356 = 37U;

    t88 = ((x353|(x354<=x355))|x356);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	int8_t x359 = 0;
	int64_t t89 = 84006720LL;

    t89 = ((x357|(x358<=x359))|x360);

    if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	int64_t x364 = -2560459LL;
	int64_t t90 = 6684726899LL;

    t90 = ((x361|(x362<=x363))|x364);

    if (t90 != -265LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = INT16_MIN;
	int64_t x368 = -1LL;
	static volatile int64_t t91 = -222775522051716LL;

    t91 = ((x365|(x366<=x367))|x368);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 5816U;
	int64_t x370 = 108282786660735LL;
	int64_t x372 = -8532995046LL;
	volatile int64_t t92 = 2137721846485LL;

    t92 = ((x369|(x370<=x371))|x372);

    if (t92 != -8532994374LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MIN;
	volatile int16_t x376 = -6825;
	int64_t t93 = 19111411LL;

    t93 = ((x373|(x374<=x375))|x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 2U;
	volatile int64_t x378 = -1LL;
	int16_t x379 = -2;

    t94 = ((x377|(x378<=x379))|x380);

    if (t94 != 107) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x381 = INT16_MIN;
	int8_t x382 = 0;
	volatile int16_t x383 = INT16_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -117771959;

    t95 = ((x381|(x382<=x383))|x384);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = -1;
	static int64_t x386 = INT64_MIN;
	int64_t x387 = 895726LL;
	volatile uint64_t t96 = UINT64_MAX;

    t96 = ((x385|(x386<=x387))|x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = INT32_MIN;
	int32_t x391 = -3436388;
	int32_t x392 = INT32_MAX;
	int64_t t97 = -6067851193471578LL;

    t97 = ((x389|(x390<=x391))|x392);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -19961086;
	volatile int16_t x394 = -1;
	static volatile int16_t x395 = INT16_MIN;
	int32_t t98 = 1;

    t98 = ((x393|(x394<=x395))|x396);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x399 = UINT8_MAX;
	int64_t x400 = -7LL;

    t99 = ((x397|(x398<=x399))|x400);

    if (t99 != -7LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	static int8_t x403 = -1;
	int32_t x404 = INT32_MAX;
	static int32_t t100 = 5727;

    t100 = ((x401|(x402<=x403))|x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 14;
	int64_t x406 = INT64_MIN;
	uint8_t x407 = 1U;
	uint64_t x408 = 7931137465132205LLU;
	volatile uint64_t t101 = 28LLU;

    t101 = ((x405|(x406<=x407))|x408);

    if (t101 != 7931137465132207LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	static int64_t x410 = INT64_MIN;
	int64_t x411 = 1971379102845752567LL;
	int64_t x412 = -915452934914LL;
	int64_t t102 = 1098166271747313496LL;

    t102 = ((x409|(x410<=x411))|x412);

    if (t102 != -15105LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MAX;
	static int64_t t103 = -174396489755215LL;

    t103 = ((x413|(x414<=x415))|x416);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = 10126;
	static uint32_t x418 = 218153U;
	int32_t x419 = 15;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x417|(x418<=x419))|x420);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x424 = UINT16_MAX;
	int32_t t105 = 25079092;

    t105 = ((x421|(x422<=x423))|x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x426 = UINT8_MAX;
	int64_t x427 = -26LL;
	static int8_t x428 = -1;
	uint64_t t106 = UINT64_MAX;

    t106 = ((x425|(x426<=x427))|x428);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x430 = UINT32_MAX;
	uint16_t x431 = 20U;
	int32_t x432 = INT32_MAX;
	int32_t t107 = -209059587;

    t107 = ((x429|(x430<=x431))|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x435 = INT64_MAX;
	int16_t x436 = -9;
	volatile int32_t t108 = -2;

    t108 = ((x433|(x434<=x435))|x436);

    if (t108 != -9) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = -1;
	int8_t x438 = -35;
	volatile uint64_t x439 = 13LLU;
	uint64_t x440 = 7599654865819LLU;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x437|(x438<=x439))|x440);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 10;
	int8_t x442 = INT8_MIN;
	uint64_t x443 = 59LLU;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t110 = 1;

    t110 = ((x441|(x442<=x443))|x444);

    if (t110 != -32758) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = 1807950204340LL;
	static uint16_t x446 = 3U;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = -250811LL;

    t111 = ((x445|(x446<=x447))|x448);

    if (t111 != -70155LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 27;
	uint32_t x450 = 89919U;
	int64_t x451 = -199302539036159135LL;
	volatile int64_t x452 = INT64_MIN;
	int64_t t112 = -4487223021783935LL;

    t112 = ((x449|(x450<=x451))|x452);

    if (t112 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = INT64_MIN;
	volatile uint8_t x454 = UINT8_MAX;
	uint16_t x455 = 5479U;
	uint32_t x456 = 984684379U;
	static int64_t t113 = 1289121014663LL;

    t113 = ((x453|(x454<=x455))|x456);

    if (t113 != -9223372035870091429LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = -1LL;
	int16_t x459 = 15;
	int8_t x460 = INT8_MAX;

    t114 = ((x457|(x458<=x459))|x460);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	static int16_t x462 = INT16_MAX;
	uint16_t x464 = 1175U;
	static int64_t t115 = -893LL;

    t115 = ((x461|(x462<=x463))|x464);

    if (t115 != -9223372036854774633LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 171U;
	volatile uint32_t x466 = UINT32_MAX;
	uint16_t x467 = 180U;
	static int32_t t116 = -6533;

    t116 = ((x465|(x466<=x467))|x468);

    if (t116 != -5) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	int8_t x472 = 1;
	static volatile int32_t t117 = -194430967;

    t117 = ((x469|(x470<=x471))|x472);

    if (t117 != -2147483647) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = 22U;
	volatile int16_t x474 = INT16_MIN;
	uint16_t x475 = 5275U;

    t118 = ((x473|(x474<=x475))|x476);

    if (t118 != 11199LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x478 = UINT32_MAX;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = -1LL;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = ((x477|(x478<=x479))|x480);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1191535224278LL;
	uint8_t x482 = UINT8_MAX;
	static int32_t x483 = -1;
	int64_t x484 = INT64_MIN;
	volatile int64_t t120 = -683655226796LL;

    t120 = ((x481|(x482<=x483))|x484);

    if (t120 != -1191535224278LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static int16_t x487 = 2;
	int64_t x488 = INT64_MIN;
	volatile int64_t t121 = 717991341839332090LL;

    t121 = ((x485|(x486<=x487))|x488);

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 0;
	static int32_t x490 = INT32_MIN;
	uint64_t x491 = 7LLU;
	volatile int8_t x492 = INT8_MIN;
	int32_t t122 = 1987;

    t122 = ((x489|(x490<=x491))|x492);

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 7U;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MAX;
	uint32_t t123 = UINT32_MAX;

    t123 = ((x493|(x494<=x495))|x496);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	int64_t x498 = -11LL;
	int32_t x499 = -485978789;
	static uint8_t x500 = 0U;
	int32_t t124 = 1008379;

    t124 = ((x497|(x498<=x499))|x500);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x501 = 23U;
	uint32_t x503 = UINT32_MAX;
	uint32_t x504 = UINT32_MAX;
	static volatile uint32_t t125 = UINT32_MAX;

    t125 = ((x501|(x502<=x503))|x504);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = 31LLU;
	int32_t x506 = INT32_MIN;
	static uint32_t x508 = UINT32_MAX;

    t126 = ((x505|(x506<=x507))|x508);

    if (t126 != 4294967295LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	uint16_t x511 = 9U;
	static int16_t x512 = -61;
	volatile int32_t t127 = 1742553;

    t127 = ((x509|(x510<=x511))|x512);

    if (t127 != -61) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	int8_t x514 = 0;
	uint16_t x515 = 0U;
	uint64_t t128 = UINT64_MAX;

    t128 = ((x513|(x514<=x515))|x516);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile uint64_t x518 = 526408LLU;
	int16_t x519 = 0;
	volatile int32_t t129 = INT32_MIN;

    t129 = ((x517|(x518<=x519))|x520);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 4U;
	static int16_t x523 = INT16_MAX;
	int32_t t130 = -11205002;

    t130 = ((x521|(x522<=x523))|x524);

    if (t130 != -14609) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	uint64_t x527 = UINT64_MAX;
	static uint8_t x528 = 21U;
	static volatile int32_t t131 = 0;

    t131 = ((x525|(x526<=x527))|x528);

    if (t131 != -107) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x531 = 21;
	int32_t x532 = 9028649;
	volatile int32_t t132 = -743597148;

    t132 = ((x529|(x530<=x531))|x532);

    if (t132 != 9043967) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MIN;
	static int32_t x534 = -87598729;
	int32_t x535 = INT32_MIN;
	uint32_t x536 = UINT32_MAX;
	volatile uint32_t t133 = UINT32_MAX;

    t133 = ((x533|(x534<=x535))|x536);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = 201;
	static int32_t x539 = -1;
	int16_t x540 = -1;
	volatile int32_t t134 = -3951512;

    t134 = ((x537|(x538<=x539))|x540);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int16_t x542 = INT16_MIN;
	int32_t x543 = -1;
	volatile int8_t x544 = INT8_MIN;
	int32_t t135 = 11;

    t135 = ((x541|(x542<=x543))|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x546 = -1;
	int16_t x547 = -1;
	static uint32_t x548 = UINT32_MAX;

    t136 = ((x545|(x546<=x547))|x548);

    if (t136 != UINT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x550 = INT32_MIN;
	int16_t x551 = -1;
	static int32_t x552 = 22881661;
	int32_t t137 = -2720;

    t137 = ((x549|(x550<=x551))|x552);

    if (t137 != -2124601987) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MIN;
	static int64_t x555 = INT64_MIN;
	int64_t t138 = 32952914717LL;

    t138 = ((x553|(x554<=x555))|x556);

    if (t138 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = 14;
	uint8_t x559 = 3U;
	volatile int32_t x560 = INT32_MIN;
	int64_t t139 = -11913LL;

    t139 = ((x557|(x558<=x559))|x560);

    if (t139 != -1364315059LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 2;
	uint16_t x562 = 28U;
	int8_t x563 = 31;
	int16_t x564 = -1;

    t140 = ((x561|(x562<=x563))|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 598742361U;
	uint16_t x566 = UINT16_MAX;
	int16_t x567 = 383;
	static int8_t x568 = INT8_MIN;
	volatile uint32_t t141 = 219U;

    t141 = ((x565|(x566<=x567))|x568);

    if (t141 != 4294967257U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 21;
	static uint8_t x570 = 56U;
	int8_t x571 = INT8_MAX;
	int64_t x572 = 13760LL;
	int64_t t142 = 1437854216230LL;

    t142 = ((x569|(x570<=x571))|x572);

    if (t142 != 13781LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 2U;
	int8_t x574 = INT8_MIN;
	volatile int64_t x575 = INT64_MIN;
	int8_t x576 = INT8_MAX;
	uint32_t t143 = 4238U;

    t143 = ((x573|(x574<=x575))|x576);

    if (t143 != 127U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	static uint64_t x578 = 17799502555022LLU;
	volatile int32_t x579 = INT32_MAX;
	int8_t x580 = INT8_MAX;

    t144 = ((x577|(x578<=x579))|x580);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile int64_t x583 = -1144933253333507170LL;
	int64_t x584 = INT64_MAX;
	int64_t t145 = -1LL;

    t145 = ((x581|(x582<=x583))|x584);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = -1;
	static int16_t x587 = -43;
	static uint64_t x588 = 32LLU;

    t146 = ((x585|(x586<=x587))|x588);

    if (t146 != 4294967295LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = -1;
	int8_t x590 = INT8_MIN;
	volatile uint32_t x591 = UINT32_MAX;
	static uint32_t x592 = 23997512U;
	volatile uint32_t t147 = UINT32_MAX;

    t147 = ((x589|(x590<=x591))|x592);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x594 = 15480U;
	uint32_t x595 = 49151U;
	int16_t x596 = INT16_MIN;
	static volatile uint64_t t148 = 501048382LLU;

    t148 = ((x593|(x594<=x595))|x596);

    if (t148 != 18446744073709520221LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 430U;
	static uint64_t x599 = UINT64_MAX;
	uint16_t x600 = 135U;
	uint32_t t149 = 495U;

    t149 = ((x597|(x598<=x599))|x600);

    if (t149 != 431U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = INT8_MIN;
	static uint16_t x603 = UINT16_MAX;
	volatile int64_t t150 = 153996671LL;

    t150 = ((x601|(x602<=x603))|x604);

    if (t150 != -127LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x605 = 2U;
	int8_t x606 = 7;
	uint8_t x607 = UINT8_MAX;
	int32_t x608 = INT32_MIN;
	volatile int32_t t151 = -4;

    t151 = ((x605|(x606<=x607))|x608);

    if (t151 != -2147483645) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	static volatile int8_t x611 = INT8_MIN;
	volatile uint8_t x612 = 42U;
	int32_t t152 = 1885;

    t152 = ((x609|(x610<=x611))|x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x616 = -2;

    t153 = ((x613|(x614<=x615))|x616);

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 14U;
	volatile uint32_t x618 = UINT32_MAX;
	uint64_t x619 = UINT64_MAX;
	int16_t x620 = INT16_MIN;
	static uint32_t t154 = 219820U;

    t154 = ((x617|(x618<=x619))|x620);

    if (t154 != 4294934543U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x623 = 242474830LLU;
	volatile uint64_t x624 = 32LLU;
	uint64_t t155 = UINT64_MAX;

    t155 = ((x621|(x622<=x623))|x624);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = INT64_MIN;
	int16_t x627 = -50;
	int64_t x628 = INT64_MIN;
	volatile int64_t t156 = INT64_MIN;

    t156 = ((x625|(x626<=x627))|x628);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = -1;
	int64_t x632 = 916860LL;

    t157 = ((x629|(x630<=x631))|x632);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x634 = 9974306613619LL;
	int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 10792;

    t158 = ((x633|(x634<=x635))|x636);

    if (t158 != -32730) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	static volatile uint32_t x638 = 1073403U;
	volatile int64_t t159 = -1738901277417070LL;

    t159 = ((x637|(x638<=x639))|x640);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = INT64_MIN;
	int32_t x643 = -1;
	int8_t x644 = 58;

    t160 = ((x641|(x642<=x643))|x644);

    if (t160 != -26689LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 24799829915LL;
	int32_t x647 = 48;
	uint64_t x648 = 1011211891274LLU;
	uint64_t t161 = 5761LLU;

    t161 = ((x645|(x646<=x647))|x648);

    if (t161 != 1030640107483LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x649 = UINT64_MAX;
	int16_t x650 = INT16_MIN;
	uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MAX;
	volatile uint64_t t162 = UINT64_MAX;

    t162 = ((x649|(x650<=x651))|x652);

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = 198;
	int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MIN;
	int64_t x656 = 100968045402LL;
	int64_t t163 = -1889LL;

    t163 = ((x653|(x654<=x655))|x656);

    if (t163 != 100968045535LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = INT16_MIN;
	static uint32_t x658 = 752U;
	static volatile uint64_t x659 = 0LLU;
	volatile uint8_t x660 = 21U;
	volatile int32_t t164 = 939748625;

    t164 = ((x657|(x658<=x659))|x660);

    if (t164 != -32747) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int32_t x662 = 26271567;

    t165 = ((x661|(x662<=x663))|x664);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 486U;
	int32_t x667 = INT32_MAX;
	static volatile int32_t t166 = -175407879;

    t166 = ((x665|(x666<=x667))|x668);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x670 = 6445;
	int32_t x671 = 6224348;
	static int16_t x672 = INT16_MIN;
	volatile int32_t t167 = -4107;

    t167 = ((x669|(x670<=x671))|x672);

    if (t167 != -32749) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = 173244U;
	volatile uint8_t x675 = 3U;
	static int16_t x676 = 10;
	volatile uint32_t t168 = 5697U;

    t168 = ((x673|(x674<=x675))|x676);

    if (t168 != 173247U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x678 = INT32_MAX;
	volatile int8_t x679 = INT8_MIN;
	static uint32_t x680 = 1137360U;
	uint32_t t169 = 31290U;

    t169 = ((x677|(x678<=x679))|x680);

    if (t169 != 4294957776U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x683 = -1LL;
	static int64_t x684 = INT64_MIN;
	static int64_t t170 = 8175613067032LL;

    t170 = ((x681|(x682<=x683))|x684);

    if (t170 != -9223372036854759695LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MIN;
	int16_t x686 = INT16_MIN;
	uint16_t x687 = 156U;
	uint16_t x688 = 7615U;
	int32_t t171 = 1;

    t171 = ((x685|(x686<=x687))|x688);

    if (t171 != -2147476033) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 1;
	int64_t x690 = -4329634253909038327LL;
	uint64_t x691 = 30LLU;
	volatile uint16_t x692 = UINT16_MAX;
	static int32_t t172 = 31601;

    t172 = ((x689|(x690<=x691))|x692);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 5U;
	static uint32_t x694 = UINT32_MAX;
	volatile int16_t x695 = INT16_MIN;
	int16_t x696 = -9;
	int32_t t173 = -1;

    t173 = ((x693|(x694<=x695))|x696);

    if (t173 != -9) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = -1;
	uint16_t x699 = UINT16_MAX;
	int32_t t174 = 0;

    t174 = ((x697|(x698<=x699))|x700);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x703 = 1855810U;
	static volatile uint64_t t175 = 33220744546LLU;

    t175 = ((x701|(x702<=x703))|x704);

    if (t175 != 18446744073709545585LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	static uint64_t x707 = UINT64_MAX;
	int64_t x708 = 12202LL;
	volatile int64_t t176 = 503127951780186275LL;

    t176 = ((x705|(x706<=x707))|x708);

    if (t176 != 65535LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x709 = 201847LLU;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = INT32_MAX;
	uint64_t t177 = 547594821224697LLU;

    t177 = ((x709|(x710<=x711))|x712);

    if (t177 != 2147483647LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -258400345362182LL;
	volatile uint32_t x714 = UINT32_MAX;
	volatile int8_t x715 = 1;
	int16_t x716 = -1483;
	volatile int64_t t178 = 1999218950141197LL;

    t178 = ((x713|(x714<=x715))|x716);

    if (t178 != -1281LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	static volatile int8_t x718 = INT8_MAX;
	uint32_t x720 = 596205673U;

    t179 = ((x717|(x718<=x719))|x720);

    if (t179 != 2147483647U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x721 = UINT8_MAX;
	uint32_t x723 = UINT32_MAX;
	volatile int16_t x724 = -1;
	int32_t t180 = 1217;

    t180 = ((x721|(x722<=x723))|x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = INT32_MIN;
	int32_t x727 = -1;
	int16_t x728 = INT16_MAX;
	int32_t t181 = 35429033;

    t181 = ((x725|(x726<=x727))|x728);

    if (t181 != -2147450881) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 2036797879U;
	static volatile int16_t x730 = -1;
	uint8_t x731 = 33U;

    t182 = ((x729|(x730<=x731))|x732);

    if (t182 != 2036797951U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MAX;
	volatile int32_t x734 = -1;
	static int64_t x735 = -1LL;
	int64_t t183 = INT64_MAX;

    t183 = ((x733|(x734<=x735))|x736);

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 4U;
	int8_t x740 = 19;

    t184 = ((x737|(x738<=x739))|x740);

    if (t184 != 23) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MIN;
	uint16_t x742 = 43U;
	uint32_t x743 = 27799U;

    t185 = ((x741|(x742<=x743))|x744);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	volatile int8_t x746 = INT8_MIN;
	uint8_t x747 = UINT8_MAX;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t186 = -1;

    t186 = ((x745|(x746<=x747))|x748);

    if (t186 != -2147418113) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	volatile int8_t x751 = -1;

    t187 = ((x749|(x750<=x751))|x752);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x754 = UINT32_MAX;
	volatile int16_t x755 = INT16_MIN;
	int32_t x756 = INT32_MIN;

    t188 = ((x753|(x754<=x755))|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 21034U;
	int64_t x758 = -1LL;
	volatile int64_t x759 = INT64_MAX;
	int64_t x760 = 2621471890845191LL;
	int64_t t189 = -93257895737LL;

    t189 = ((x757|(x758<=x759))|x760);

    if (t189 != 2621471890865711LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	uint64_t x762 = 325740556LLU;
	volatile uint64_t x763 = UINT64_MAX;
	volatile int64_t x764 = INT64_MAX;

    t190 = ((x761|(x762<=x763))|x764);

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	int64_t x766 = -1LL;
	uint8_t x767 = 29U;
	uint32_t x768 = UINT32_MAX;
	uint32_t t191 = UINT32_MAX;

    t191 = ((x765|(x766<=x767))|x768);

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x769 = -1;
	volatile int32_t x770 = -1;
	int64_t x771 = -1LL;
	static int32_t x772 = 449;
	int32_t t192 = 102;

    t192 = ((x769|(x770<=x771))|x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	static int64_t x774 = 986891905313LL;
	int64_t x775 = -1LL;
	static int32_t x776 = INT32_MAX;
	int32_t t193 = 8727285;

    t193 = ((x773|(x774<=x775))|x776);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 3591455U;
	volatile uint16_t x778 = 1890U;
	int32_t x779 = INT32_MIN;
	uint16_t x780 = 311U;
	static volatile uint32_t t194 = 15719U;

    t194 = ((x777|(x778<=x779))|x780);

    if (t194 != 3591487U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	static int64_t x782 = INT64_MIN;
	int8_t x783 = INT8_MIN;
	static uint64_t x784 = 64131539666454LLU;
	uint64_t t195 = 151826LLU;

    t195 = ((x781|(x782<=x783))|x784);

    if (t195 != 64132451663871LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MAX;
	static volatile int32_t x786 = 1065175198;
	int16_t x787 = INT16_MIN;
	int64_t x788 = -79583LL;

    t196 = ((x785|(x786<=x787))|x788);

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = 2884;
	volatile int16_t x790 = INT16_MAX;
	int32_t x791 = -316;
	uint64_t x792 = 173002497104339LLU;
	volatile uint64_t t197 = 3098271311379245LLU;

    t197 = ((x789|(x790<=x791))|x792);

    if (t197 != 173002497104855LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = 728;
	int64_t x795 = -249351465976148LL;
	int32_t x796 = INT32_MAX;
	volatile int32_t t198 = INT32_MAX;

    t198 = ((x793|(x794<=x795))|x796);

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = INT64_MAX;
	int8_t x798 = -62;
	uint16_t x799 = 1932U;
	static volatile int64_t x800 = INT64_MIN;
	volatile int64_t t199 = -375LL;

    t199 = ((x797|(x798<=x799))|x800);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

