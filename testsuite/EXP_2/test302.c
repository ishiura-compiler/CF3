
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

int16_t x1 = INT16_MIN;
int16_t x6 = INT16_MIN;
int32_t t2 = -1644;
int16_t x13 = -31;
int32_t x14 = 14;
volatile int32_t t3 = 14471138;
uint8_t x24 = 27U;
volatile int8_t x32 = INT8_MAX;
int16_t x41 = -1;
volatile int32_t x46 = -1;
int32_t t9 = -7;
volatile uint32_t x56 = UINT32_MAX;
volatile uint8_t x63 = UINT8_MAX;
int8_t x68 = -1;
volatile int32_t t16 = 3188722;
volatile int32_t x92 = INT32_MAX;
uint16_t x98 = UINT16_MAX;
uint8_t x105 = 22U;
static uint16_t x111 = 0U;
static uint8_t x124 = UINT8_MAX;
static int32_t t26 = -192161;
uint64_t x147 = UINT64_MAX;
uint64_t x153 = 4494309534LLU;
volatile int32_t t30 = -57;
int16_t x160 = INT16_MIN;
static volatile int32_t t31 = 827436433;
int16_t x162 = 2399;
int32_t t32 = 470525602;
int8_t x172 = -1;
int16_t x185 = -1;
volatile int16_t x187 = INT16_MIN;
uint64_t x193 = UINT64_MAX;
volatile int32_t t40 = -247081783;
static volatile int32_t t42 = 13;
int8_t x207 = INT8_MIN;
int32_t t43 = -1;
int8_t x217 = INT8_MIN;
uint64_t x223 = 23066485217LLU;
int32_t x224 = -5576748;
volatile int32_t t48 = 5;
int32_t x233 = -1618;
volatile int16_t x234 = -1;
int8_t x235 = INT8_MIN;
uint16_t x244 = 501U;
int64_t x249 = -1LL;
volatile int32_t x251 = -688867;
int64_t x254 = INT64_MIN;
uint16_t x259 = 0U;
int64_t x260 = INT64_MIN;
volatile int64_t x261 = -7LL;
static uint16_t x262 = UINT16_MAX;
int16_t x278 = 60;
static int8_t x282 = -1;
static volatile int32_t t61 = -228;
volatile int16_t x303 = INT16_MIN;
volatile int64_t x304 = -2235529319683099863LL;
int32_t x306 = 78454;
static int16_t x308 = INT16_MIN;
uint16_t x309 = 1553U;
uint8_t x311 = UINT8_MAX;
uint32_t x312 = UINT32_MAX;
int64_t x321 = 15097053727LL;
uint64_t x325 = 0LLU;
volatile int64_t x327 = 223235023422LL;
volatile int32_t t74 = -947226131;
volatile int64_t x341 = INT64_MIN;
static volatile int32_t t78 = -54334;
int8_t x373 = -1;
int16_t x381 = -1;
static uint16_t x383 = 3255U;
volatile int32_t t85 = -264539520;
uint32_t x390 = 16087751U;
static int64_t x404 = 75583LL;
volatile int32_t t88 = -250;
static uint16_t x409 = UINT16_MAX;
int8_t x424 = INT8_MIN;
volatile int32_t t93 = 1472026;
int8_t x428 = 1;
int8_t x435 = -1;
int32_t x438 = INT32_MAX;
static int8_t x440 = -3;
int64_t x444 = -1LL;
uint32_t x447 = 1U;
int64_t x448 = INT64_MAX;
static int64_t x449 = INT64_MAX;
static volatile uint8_t x453 = 8U;
int16_t x469 = INT16_MAX;
int8_t x470 = -1;
volatile int8_t x481 = 22;
volatile int16_t x488 = INT16_MIN;
uint8_t x491 = UINT8_MAX;
int32_t x509 = -2001;
int32_t t111 = -6594;
volatile int64_t x519 = 204300545479530LL;
uint16_t x526 = 3U;
int64_t x527 = -1LL;
static uint32_t x528 = UINT32_MAX;
volatile int32_t t118 = 0;
int32_t x545 = INT32_MIN;
int8_t x547 = INT8_MIN;
uint16_t x560 = 12898U;
int16_t x563 = INT16_MIN;
volatile int16_t x566 = 13;
int32_t x568 = INT32_MIN;
uint16_t x570 = 253U;
uint8_t x572 = 26U;
int32_t x573 = INT32_MIN;
static volatile uint64_t x575 = UINT64_MAX;
uint16_t x576 = 459U;
uint16_t x579 = 22U;
volatile uint16_t x586 = UINT16_MAX;
uint8_t x589 = UINT8_MAX;
int32_t x591 = INT32_MAX;
uint64_t x592 = 128407544LLU;
uint16_t x606 = 1U;
uint64_t x612 = 2LLU;
int8_t x618 = INT8_MIN;
volatile int32_t t135 = 14640038;
static volatile int64_t x621 = 7548479LL;
int16_t x631 = INT16_MIN;
uint8_t x632 = 0U;
static uint16_t x653 = 0U;
int32_t x654 = INT32_MAX;
int32_t x656 = 47042;
volatile int32_t t143 = 0;
uint16_t x657 = UINT16_MAX;
int8_t x663 = INT8_MIN;
int32_t x664 = -508251800;
static int8_t x671 = INT8_MIN;
uint16_t x711 = UINT16_MAX;
static volatile int64_t x713 = INT64_MIN;
uint8_t x715 = UINT8_MAX;
int32_t x716 = INT32_MAX;
int32_t t155 = -1;
static int16_t x718 = -1;
volatile int8_t x719 = 1;
static int32_t t156 = 212587;
uint32_t x729 = 0U;
volatile int32_t t160 = 28950838;
static volatile uint64_t x749 = 150805081884321066LLU;
volatile uint8_t x751 = UINT8_MAX;
int8_t x762 = INT8_MAX;
uint32_t x766 = 70U;
static uint16_t x768 = 130U;
int8_t x770 = -1;
int64_t x774 = -1LL;
static volatile int32_t x778 = INT32_MIN;
volatile int16_t x784 = INT16_MAX;
int64_t x786 = -26243LL;
volatile uint32_t x788 = 1151U;
volatile int32_t t173 = -3;
uint64_t x796 = 85341606408932LLU;
int16_t x800 = INT16_MAX;
static int64_t x803 = INT64_MAX;
static volatile uint8_t x809 = UINT8_MAX;
volatile uint8_t x812 = 15U;
int64_t x815 = 621LL;
int16_t x818 = INT16_MIN;
int32_t x835 = INT32_MIN;
uint8_t x840 = 6U;
uint64_t x846 = 6LLU;
int64_t x848 = INT64_MIN;
static int16_t x851 = INT16_MIN;
static int32_t x856 = -534629758;
static volatile int64_t x858 = INT64_MAX;
static int16_t x865 = INT16_MAX;
int32_t x875 = 24045;
static uint8_t x876 = UINT8_MAX;
volatile int32_t t195 = 1481210;
volatile uint8_t x905 = UINT8_MAX;
int32_t x907 = INT32_MAX;
int32_t x908 = INT32_MAX;


void f0(void) {
    	uint64_t x2 = 59LLU;
	static int32_t x3 = INT32_MIN;
	uint32_t x4 = 340U;
	int32_t t0 = -1266322;

    t0 = ((x1==(x2-x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint16_t x7 = 7U;
	static uint16_t x8 = 2856U;
	static volatile int32_t t1 = 2885;

    t1 = ((x5==(x6-x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 30U;
	int8_t x10 = -1;
	int64_t x11 = INT64_MAX;
	uint8_t x12 = UINT8_MAX;

    t2 = ((x9==(x10-x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = INT8_MAX;
	int64_t x16 = -1LL;

    t3 = ((x13==(x14-x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	uint32_t x23 = 184U;
	volatile int32_t t4 = -35035196;

    t4 = ((x21==(x22-x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = 44;
	uint64_t x26 = 749799221261031LLU;
	volatile int8_t x27 = -1;
	int8_t x28 = INT8_MAX;
	static int32_t t5 = 1;

    t5 = ((x25==(x26-x27))==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	int32_t t6 = 1127017;

    t6 = ((x29==(x30-x31))==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = UINT32_MAX;
	uint64_t x38 = UINT64_MAX;
	static int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	int32_t t7 = 898216;

    t7 = ((x37==(x38-x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MIN;
	static uint8_t x43 = UINT8_MAX;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t8 = 317843;

    t8 = ((x41==(x42-x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MAX;
	static int8_t x47 = INT8_MAX;
	int16_t x48 = -1;

    t9 = ((x45==(x46-x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	int32_t t10 = -36231;

    t10 = ((x53==(x54-x55))==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 26LLU;
	volatile uint32_t x62 = 3335U;
	int64_t x64 = INT64_MIN;
	int32_t t11 = -41602;

    t11 = ((x61==(x62-x63))==x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = -1;
	int16_t x66 = 176;
	int8_t x67 = 2;
	int32_t t12 = -596;

    t12 = ((x65==(x66-x67))==x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	static uint8_t x71 = 43U;
	int16_t x72 = INT16_MAX;
	int32_t t13 = 1289744;

    t13 = ((x69==(x70-x71))==x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = -1;
	volatile int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	static int32_t x76 = INT32_MIN;
	int32_t t14 = -1;

    t14 = ((x73==(x74-x75))==x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = -49569LL;
	int64_t x82 = INT64_MIN;
	static int8_t x83 = INT8_MIN;
	uint8_t x84 = 1U;
	int32_t t15 = 31730039;

    t15 = ((x81==(x82-x83))==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 31239U;
	static int64_t x87 = 19272389742604564LL;
	static int64_t x88 = INT64_MIN;

    t16 = ((x85==(x86-x87))==x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x89 = 226;
	volatile int64_t x90 = INT64_MAX;
	static uint32_t x91 = UINT32_MAX;
	int32_t t17 = -1;

    t17 = ((x89==(x90-x91))==x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = 8;
	int32_t x94 = 69;
	int8_t x95 = -12;
	uint64_t x96 = UINT64_MAX;
	int32_t t18 = -4326601;

    t18 = ((x93==(x94-x95))==x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x97 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t19 = 1507;

    t19 = ((x97==(x98-x99))==x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x106 = -1LL;
	static uint64_t x107 = 329227318532LLU;
	int16_t x108 = -3;
	int32_t t20 = -1;

    t20 = ((x105==(x106-x107))==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	volatile int32_t t21 = 280300;

    t21 = ((x109==(x110-x111))==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x113 = -158828417;
	static uint16_t x114 = 21U;
	uint16_t x115 = 5U;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t22 = 488541288;

    t22 = ((x113==(x114-x115))==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x117 = INT8_MIN;
	int32_t x118 = -103;
	static volatile int64_t x119 = -1LL;
	int32_t x120 = -1;
	volatile int32_t t23 = -584046534;

    t23 = ((x117==(x118-x119))==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x121 = 3503093U;
	static int16_t x122 = -219;
	int8_t x123 = -1;
	volatile int32_t t24 = -332679084;

    t24 = ((x121==(x122-x123))==x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	volatile int8_t x127 = INT8_MIN;
	int16_t x128 = INT16_MIN;
	static volatile int32_t t25 = 537159758;

    t25 = ((x125==(x126-x127))==x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x129 = UINT64_MAX;
	int16_t x130 = INT16_MIN;
	int16_t x131 = -1;
	uint64_t x132 = UINT64_MAX;

    t26 = ((x129==(x130-x131))==x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = 1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t27 = -124;

    t27 = ((x133==(x134-x135))==x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x141 = INT64_MAX;
	volatile int32_t x142 = -1;
	int32_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t28 = -82161;

    t28 = ((x141==(x142-x143))==x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 22U;
	uint32_t x148 = 167466024U;
	volatile int32_t t29 = 33988;

    t29 = ((x145==(x146-x147))==x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x154 = UINT16_MAX;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = UINT64_MAX;

    t30 = ((x153==(x154-x155))==x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = 680U;
	int32_t x159 = -1017701;

    t31 = ((x157==(x158-x159))==x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x161 = 7;
	uint16_t x163 = 81U;
	int8_t x164 = INT8_MAX;

    t32 = ((x161==(x162-x163))==x164);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x165 = 3612U;
	volatile int8_t x166 = 50;
	uint16_t x167 = 28U;
	uint16_t x168 = 19U;
	volatile int32_t t33 = -1202122;

    t33 = ((x165==(x166-x167))==x168);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = 50453180;
	volatile uint32_t x170 = 2884U;
	volatile int32_t x171 = -70;
	int32_t t34 = 4;

    t34 = ((x169==(x170-x171))==x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = 4855;
	int8_t x175 = INT8_MIN;
	static volatile int16_t x176 = -1;
	int32_t t35 = 17525;

    t35 = ((x173==(x174-x175))==x176);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x177 = 263302447;
	volatile int64_t x178 = 3200884790LL;
	int16_t x179 = -74;
	int32_t x180 = 12753856;
	int32_t t36 = -111545408;

    t36 = ((x177==(x178-x179))==x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x181 = 0U;
	volatile int32_t x182 = -3008822;
	static int64_t x183 = 0LL;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t37 = 791;

    t37 = ((x181==(x182-x183))==x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x186 = INT8_MIN;
	int32_t x188 = -1;
	static int32_t t38 = 1010130;

    t38 = ((x185==(x186-x187))==x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x189 = UINT16_MAX;
	int8_t x190 = -1;
	uint64_t x191 = 665854497517768608LLU;
	int32_t x192 = INT32_MIN;
	static int32_t t39 = 1;

    t39 = ((x189==(x190-x191))==x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x194 = UINT16_MAX;
	volatile int8_t x195 = INT8_MAX;
	int16_t x196 = 7406;

    t40 = ((x193==(x194-x195))==x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x197 = -1;
	static uint16_t x198 = 146U;
	int8_t x199 = -51;
	int32_t x200 = INT32_MIN;
	int32_t t41 = -11301;

    t41 = ((x197==(x198-x199))==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = INT8_MIN;
	static int16_t x202 = 860;
	volatile int32_t x203 = 28008;
	uint16_t x204 = 1961U;

    t42 = ((x201==(x202-x203))==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	int8_t x208 = -1;

    t43 = ((x205==(x206-x207))==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = -312316133575865LL;
	int16_t x210 = 7;
	int16_t x211 = INT16_MAX;
	volatile uint32_t x212 = 1145114179U;
	int32_t t44 = 0;

    t44 = ((x209==(x210-x211))==x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x213 = -52;
	int64_t x214 = INT64_MAX;
	uint8_t x215 = UINT8_MAX;
	static uint32_t x216 = 1829U;
	int32_t t45 = -12182840;

    t45 = ((x213==(x214-x215))==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x218 = -9;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = 71U;
	static volatile int32_t t46 = -3234286;

    t46 = ((x217==(x218-x219))==x220);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x221 = 29;
	uint8_t x222 = UINT8_MAX;
	volatile int32_t t47 = 4663283;

    t47 = ((x221==(x222-x223))==x224);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x229 = 6;
	int16_t x230 = -19;
	int16_t x231 = -1977;
	static volatile int16_t x232 = INT16_MAX;

    t48 = ((x229==(x230-x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x236 = INT32_MIN;
	static int32_t t49 = 226716;

    t49 = ((x233==(x234-x235))==x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x237 = 728633741U;
	volatile uint16_t x238 = 99U;
	uint32_t x239 = 32U;
	uint32_t x240 = 6267443U;
	volatile int32_t t50 = 1703;

    t50 = ((x237==(x238-x239))==x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 2U;
	int32_t x242 = 4;
	int16_t x243 = -1;
	volatile int32_t t51 = 765;

    t51 = ((x241==(x242-x243))==x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x245 = -2;
	volatile int8_t x246 = -37;
	int16_t x247 = INT16_MIN;
	int64_t x248 = INT64_MIN;
	int32_t t52 = -1057186517;

    t52 = ((x245==(x246-x247))==x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x250 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t53 = 124;

    t53 = ((x249==(x250-x251))==x252);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = -295659555478LL;
	static volatile int32_t x255 = INT32_MIN;
	uint8_t x256 = 1U;
	static int32_t t54 = -686;

    t54 = ((x253==(x254-x255))==x256);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x257 = 1U;
	static int8_t x258 = 48;
	volatile int32_t t55 = 1555843;

    t55 = ((x257==(x258-x259))==x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x263 = 2726315982158037LLU;
	int8_t x264 = -1;
	int32_t t56 = 89283;

    t56 = ((x261==(x262-x263))==x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = -1006686;
	uint16_t x266 = 40U;
	uint64_t x267 = 8338652291659738140LLU;
	uint32_t x268 = 125760U;
	int32_t t57 = 4251;

    t57 = ((x265==(x266-x267))==x268);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x269 = 116U;
	volatile uint16_t x270 = 61U;
	static volatile int8_t x271 = 61;
	static volatile int16_t x272 = 3619;
	int32_t t58 = 31;

    t58 = ((x269==(x270-x271))==x272);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x273 = INT16_MIN;
	uint64_t x274 = 45512141LLU;
	uint8_t x275 = UINT8_MAX;
	static uint64_t x276 = UINT64_MAX;
	int32_t t59 = 356304;

    t59 = ((x273==(x274-x275))==x276);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x277 = 11914266186245LL;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = 1339;
	volatile int32_t t60 = 923889944;

    t60 = ((x277==(x278-x279))==x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x281 = UINT8_MAX;
	int32_t x283 = 4;
	static int64_t x284 = INT64_MAX;

    t61 = ((x281==(x282-x283))==x284);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = 4;
	int8_t x286 = -1;
	uint32_t x287 = 1825510104U;
	int32_t x288 = 17101236;
	int32_t t62 = 55433211;

    t62 = ((x285==(x286-x287))==x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x289 = 891362915575LLU;
	uint32_t x290 = UINT32_MAX;
	static volatile int64_t x291 = -1LL;
	uint32_t x292 = 192U;
	static volatile int32_t t63 = -106117;

    t63 = ((x289==(x290-x291))==x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x293 = 0U;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = -404687;
	uint64_t x296 = UINT64_MAX;
	static int32_t t64 = -7;

    t64 = ((x293==(x294-x295))==x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x301 = -1517;
	static uint8_t x302 = 46U;
	volatile int32_t t65 = -928169606;

    t65 = ((x301==(x302-x303))==x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x305 = 4375U;
	static uint8_t x307 = 11U;
	int32_t t66 = 0;

    t66 = ((x305==(x306-x307))==x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x310 = 111525U;
	static volatile int32_t t67 = 2;

    t67 = ((x309==(x310-x311))==x312);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x313 = 4;
	uint16_t x314 = 0U;
	static int8_t x315 = -1;
	volatile int32_t x316 = INT32_MAX;
	volatile int32_t t68 = -11258499;

    t68 = ((x313==(x314-x315))==x316);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 5165787650638755336LLU;
	int64_t x320 = -1LL;
	volatile int32_t t69 = -27;

    t69 = ((x317==(x318-x319))==x320);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x322 = 6017823092227642809LLU;
	int32_t x323 = -1;
	static uint64_t x324 = 21266352015LLU;
	volatile int32_t t70 = 416989276;

    t70 = ((x321==(x322-x323))==x324);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x326 = INT32_MIN;
	volatile int8_t x328 = -6;
	int32_t t71 = -90553992;

    t71 = ((x325==(x326-x327))==x328);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x329 = INT64_MAX;
	uint32_t x330 = 3412450U;
	static volatile uint8_t x331 = 3U;
	int16_t x332 = INT16_MAX;
	static volatile int32_t t72 = 1670734;

    t72 = ((x329==(x330-x331))==x332);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x333 = INT32_MIN;
	uint16_t x334 = 7U;
	static volatile int8_t x335 = -1;
	int8_t x336 = 1;
	volatile int32_t t73 = 82;

    t73 = ((x333==(x334-x335))==x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -10;
	uint64_t x340 = 233096108860848LLU;

    t74 = ((x337==(x338-x339))==x340);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x342 = 9610494LLU;
	static int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int32_t t75 = 3138600;

    t75 = ((x341==(x342-x343))==x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x345 = -1LL;
	uint64_t x346 = 0LLU;
	int8_t x347 = 7;
	static int64_t x348 = -17701957LL;
	int32_t t76 = -697346;

    t76 = ((x345==(x346-x347))==x348);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;
	uint64_t x352 = 836952075847118601LLU;
	static int32_t t77 = 3185520;

    t77 = ((x349==(x350-x351))==x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = INT8_MIN;
	uint16_t x354 = 371U;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;

    t78 = ((x353==(x354-x355))==x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x357 = -1;
	uint64_t x358 = 2288950882169LLU;
	volatile int32_t x359 = -1;
	volatile int64_t x360 = -2LL;
	int32_t t79 = 135187454;

    t79 = ((x357==(x358-x359))==x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = 3622309;
	static volatile int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t80 = -533;

    t80 = ((x361==(x362-x363))==x364);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x365 = -1;
	int16_t x366 = 56;
	static volatile int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	int32_t t81 = -982785516;

    t81 = ((x365==(x366-x367))==x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x369 = 15599;
	uint16_t x370 = 3U;
	static int16_t x371 = INT16_MAX;
	volatile uint16_t x372 = 41U;
	volatile int32_t t82 = -157896302;

    t82 = ((x369==(x370-x371))==x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	volatile int32_t t83 = -8996670;

    t83 = ((x373==(x374-x375))==x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x382 = -1;
	static int16_t x384 = -14;
	volatile int32_t t84 = 516310;

    t84 = ((x381==(x382-x383))==x384);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	volatile int16_t x388 = INT16_MIN;

    t85 = ((x385==(x386-x387))==x388);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = INT32_MAX;
	static uint32_t x391 = UINT32_MAX;
	static int8_t x392 = INT8_MAX;
	int32_t t86 = -230542313;

    t86 = ((x389==(x390-x391))==x392);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x393 = 259723958U;
	static int32_t x394 = 0;
	static volatile int8_t x395 = 1;
	int32_t x396 = INT32_MAX;
	static volatile int32_t t87 = -1039634301;

    t87 = ((x393==(x394-x395))==x396);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x401 = UINT64_MAX;
	uint16_t x402 = 53U;
	uint8_t x403 = UINT8_MAX;

    t88 = ((x401==(x402-x403))==x404);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x405 = INT8_MIN;
	int64_t x406 = -9379202268LL;
	int32_t x407 = 299329034;
	int8_t x408 = -1;
	static volatile int32_t t89 = -3;

    t89 = ((x405==(x406-x407))==x408);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x410 = 49LLU;
	int8_t x411 = -1;
	volatile int16_t x412 = 9362;
	int32_t t90 = -1230517;

    t90 = ((x409==(x410-x411))==x412);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x413 = 18U;
	static int16_t x414 = 1898;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = 30;
	int32_t t91 = 132830445;

    t91 = ((x413==(x414-x415))==x416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = -16;
	int8_t x418 = -1;
	int32_t x419 = 1065361;
	uint32_t x420 = 21U;
	int32_t t92 = -2623990;

    t92 = ((x417==(x418-x419))==x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x421 = INT8_MIN;
	int8_t x422 = -4;
	static int32_t x423 = -93;

    t93 = ((x421==(x422-x423))==x424);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x425 = 1;
	int64_t x426 = INT64_MIN;
	int32_t x427 = INT32_MIN;
	volatile int32_t t94 = -5457;

    t94 = ((x425==(x426-x427))==x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x429 = -1;
	volatile int64_t x430 = INT64_MIN;
	int8_t x431 = -46;
	int16_t x432 = -351;
	volatile int32_t t95 = 3;

    t95 = ((x429==(x430-x431))==x432);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x433 = 0LL;
	uint16_t x434 = UINT16_MAX;
	int8_t x436 = INT8_MIN;
	int32_t t96 = -10985;

    t96 = ((x433==(x434-x435))==x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x437 = 99U;
	uint16_t x439 = 0U;
	volatile int32_t t97 = 2879;

    t97 = ((x437==(x438-x439))==x440);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x441 = INT64_MIN;
	int16_t x442 = INT16_MIN;
	volatile int8_t x443 = INT8_MAX;
	volatile int32_t t98 = -1029453205;

    t98 = ((x441==(x442-x443))==x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x445 = INT8_MIN;
	int64_t x446 = -1LL;
	int32_t t99 = 14;

    t99 = ((x445==(x446-x447))==x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t100 = -1;

    t100 = ((x449==(x450-x451))==x452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x454 = INT8_MAX;
	volatile uint8_t x455 = UINT8_MAX;
	static uint8_t x456 = UINT8_MAX;
	static volatile int32_t t101 = -1;

    t101 = ((x453==(x454-x455))==x456);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x461 = 2U;
	static int32_t x462 = -1;
	volatile int32_t x463 = -1;
	int32_t x464 = INT32_MIN;
	volatile int32_t t102 = 6;

    t102 = ((x461==(x462-x463))==x464);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x471 = 40;
	int32_t x472 = -1;
	int32_t t103 = -1;

    t103 = ((x469==(x470-x471))==x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x473 = UINT16_MAX;
	static int32_t x474 = 1;
	int64_t x475 = INT64_MAX;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t104 = -3069;

    t104 = ((x473==(x474-x475))==x476);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x482 = INT64_MIN;
	uint64_t x483 = UINT64_MAX;
	int16_t x484 = INT16_MIN;
	volatile int32_t t105 = 43;

    t105 = ((x481==(x482-x483))==x484);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x485 = UINT8_MAX;
	int64_t x486 = -30444058LL;
	volatile int64_t x487 = -1LL;
	volatile int32_t t106 = -50397;

    t106 = ((x485==(x486-x487))==x488);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x489 = 10711U;
	static uint64_t x490 = 29LLU;
	int32_t x492 = INT32_MAX;
	volatile int32_t t107 = 2331296;

    t107 = ((x489==(x490-x491))==x492);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x493 = 7718;
	uint64_t x494 = UINT64_MAX;
	uint32_t x495 = 136890U;
	static int64_t x496 = INT64_MIN;
	volatile int32_t t108 = 894004533;

    t108 = ((x493==(x494-x495))==x496);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x497 = 160811286;
	volatile int32_t x498 = -1;
	int8_t x499 = -30;
	static uint16_t x500 = UINT16_MAX;
	volatile int32_t t109 = -27073929;

    t109 = ((x497==(x498-x499))==x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x501 = 244U;
	uint64_t x502 = UINT64_MAX;
	int8_t x503 = -1;
	static int32_t x504 = -1;
	int32_t t110 = 0;

    t110 = ((x501==(x502-x503))==x504);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x510 = -1;
	volatile int16_t x511 = INT16_MIN;
	volatile uint64_t x512 = 172229186487LLU;

    t111 = ((x509==(x510-x511))==x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x517 = -1;
	int16_t x518 = INT16_MIN;
	int32_t x520 = INT32_MAX;
	int32_t t112 = -115294;

    t112 = ((x517==(x518-x519))==x520);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x521 = -2;
	uint8_t x522 = 32U;
	uint16_t x523 = 3816U;
	volatile uint8_t x524 = UINT8_MAX;
	static volatile int32_t t113 = 1;

    t113 = ((x521==(x522-x523))==x524);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x525 = -11682204;
	volatile int32_t t114 = -956;

    t114 = ((x525==(x526-x527))==x528);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x529 = -1;
	uint16_t x530 = 1U;
	static uint16_t x531 = UINT16_MAX;
	static int16_t x532 = -22;
	volatile int32_t t115 = 20314;

    t115 = ((x529==(x530-x531))==x532);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = -23;
	int16_t x534 = 132;
	int64_t x535 = -1LL;
	static uint64_t x536 = UINT64_MAX;
	static volatile int32_t t116 = 15793168;

    t116 = ((x533==(x534-x535))==x536);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x537 = 5;
	int16_t x538 = INT16_MAX;
	int8_t x539 = -1;
	int64_t x540 = 793268890887131731LL;
	int32_t t117 = 235861877;

    t117 = ((x537==(x538-x539))==x540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x541 = 11U;
	int32_t x542 = -14;
	int16_t x543 = INT16_MAX;
	int8_t x544 = INT8_MAX;

    t118 = ((x541==(x542-x543))==x544);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x546 = -1;
	volatile int32_t x548 = INT32_MIN;
	volatile int32_t t119 = 122683;

    t119 = ((x545==(x546-x547))==x548);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x557 = -16082611895LL;
	static int8_t x558 = 1;
	int32_t x559 = 514494;
	static volatile int32_t t120 = -100;

    t120 = ((x557==(x558-x559))==x560);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x561 = 29U;
	uint8_t x562 = 102U;
	int32_t x564 = -1;
	int32_t t121 = -372311;

    t121 = ((x561==(x562-x563))==x564);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x565 = 3622041LLU;
	static int32_t x567 = -1;
	volatile int32_t t122 = 5923;

    t122 = ((x565==(x566-x567))==x568);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x569 = 38U;
	uint8_t x571 = 0U;
	int32_t t123 = 2;

    t123 = ((x569==(x570-x571))==x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x574 = -1LL;
	static volatile int32_t t124 = 1;

    t124 = ((x573==(x574-x575))==x576);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x577 = 7335U;
	int32_t x578 = INT32_MAX;
	int8_t x580 = INT8_MIN;
	static int32_t t125 = -7492299;

    t125 = ((x577==(x578-x579))==x580);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = -57;
	uint8_t x582 = 1U;
	volatile int16_t x583 = -1;
	int16_t x584 = -15;
	static int32_t t126 = 22;

    t126 = ((x581==(x582-x583))==x584);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x585 = -1;
	volatile int64_t x587 = INT64_MAX;
	int8_t x588 = INT8_MIN;
	int32_t t127 = 4;

    t127 = ((x585==(x586-x587))==x588);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x590 = 17726;
	volatile int32_t t128 = 55664;

    t128 = ((x589==(x590-x591))==x592);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x593 = -1;
	volatile int16_t x594 = -1;
	static int8_t x595 = -6;
	static int8_t x596 = -1;
	volatile int32_t t129 = 280;

    t129 = ((x593==(x594-x595))==x596);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x597 = 6905;
	int32_t x598 = INT32_MIN;
	int16_t x599 = -1;
	volatile uint16_t x600 = 707U;
	volatile int32_t t130 = -12845;

    t130 = ((x597==(x598-x599))==x600);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x601 = INT64_MAX;
	int8_t x602 = -1;
	int8_t x603 = INT8_MAX;
	int8_t x604 = INT8_MIN;
	int32_t t131 = 36549030;

    t131 = ((x601==(x602-x603))==x604);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x605 = -1;
	static int32_t x607 = -1;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t132 = 61843;

    t132 = ((x605==(x606-x607))==x608);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x609 = UINT32_MAX;
	uint64_t x610 = 41402655LLU;
	int32_t x611 = 11;
	int32_t t133 = 222667731;

    t133 = ((x609==(x610-x611))==x612);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x613 = INT16_MIN;
	volatile int32_t x614 = INT32_MIN;
	int64_t x615 = -14LL;
	uint64_t x616 = 0LLU;
	int32_t t134 = -28333;

    t134 = ((x613==(x614-x615))==x616);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x617 = INT16_MAX;
	uint8_t x619 = 53U;
	int32_t x620 = -1;

    t135 = ((x617==(x618-x619))==x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x622 = -1;
	volatile int8_t x623 = INT8_MAX;
	volatile int64_t x624 = INT64_MAX;
	volatile int32_t t136 = -13;

    t136 = ((x621==(x622-x623))==x624);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x625 = -1;
	uint64_t x626 = UINT64_MAX;
	uint32_t x627 = UINT32_MAX;
	uint32_t x628 = 7U;
	int32_t t137 = 1;

    t137 = ((x625==(x626-x627))==x628);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x629 = 19999324U;
	int32_t x630 = INT32_MIN;
	volatile int32_t t138 = -21275;

    t138 = ((x629==(x630-x631))==x632);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x633 = INT32_MIN;
	volatile int64_t x634 = INT64_MAX;
	static uint64_t x635 = 7510453326060LLU;
	uint8_t x636 = 16U;
	volatile int32_t t139 = 17;

    t139 = ((x633==(x634-x635))==x636);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MIN;
	uint32_t x638 = 1U;
	uint64_t x639 = 1419032442489LLU;
	static int16_t x640 = -1;
	int32_t t140 = -1236;

    t140 = ((x637==(x638-x639))==x640);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = UINT64_MAX;
	static uint8_t x647 = 91U;
	int32_t x648 = 238;
	volatile int32_t t141 = -182431347;

    t141 = ((x645==(x646-x647))==x648);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x649 = UINT16_MAX;
	uint32_t x650 = UINT32_MAX;
	int8_t x651 = -1;
	static volatile int64_t x652 = INT64_MAX;
	int32_t t142 = 11;

    t142 = ((x649==(x650-x651))==x652);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x655 = UINT64_MAX;

    t143 = ((x653==(x654-x655))==x656);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x658 = 58U;
	int8_t x659 = -1;
	int64_t x660 = INT64_MIN;
	int32_t t144 = -8291161;

    t144 = ((x657==(x658-x659))==x660);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x661 = INT8_MAX;
	uint8_t x662 = 96U;
	volatile int32_t t145 = -1;

    t145 = ((x661==(x662-x663))==x664);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x665 = UINT8_MAX;
	uint32_t x666 = 4418U;
	int32_t x667 = INT32_MAX;
	static int8_t x668 = 14;
	int32_t t146 = 3108515;

    t146 = ((x665==(x666-x667))==x668);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x669 = -228;
	static int8_t x670 = 14;
	static int32_t x672 = -1;
	int32_t t147 = 142;

    t147 = ((x669==(x670-x671))==x672);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x677 = INT32_MIN;
	volatile int64_t x678 = -512139632430096LL;
	int64_t x679 = 21990394LL;
	uint32_t x680 = 0U;
	int32_t t148 = 51902;

    t148 = ((x677==(x678-x679))==x680);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x681 = 0;
	uint8_t x682 = 0U;
	static uint32_t x683 = 45680352U;
	uint8_t x684 = 48U;
	volatile int32_t t149 = -203856256;

    t149 = ((x681==(x682-x683))==x684);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x685 = UINT64_MAX;
	volatile int64_t x686 = INT64_MAX;
	static int64_t x687 = 814934LL;
	volatile int8_t x688 = -1;
	volatile int32_t t150 = -14443;

    t150 = ((x685==(x686-x687))==x688);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x689 = INT32_MIN;
	int32_t x690 = 3635;
	uint32_t x691 = 1809162U;
	volatile int64_t x692 = INT64_MIN;
	volatile int32_t t151 = 1;

    t151 = ((x689==(x690-x691))==x692);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = -1LL;
	int8_t x695 = INT8_MAX;
	int64_t x696 = -1LL;
	volatile int32_t t152 = -198072395;

    t152 = ((x693==(x694-x695))==x696);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x701 = 1LLU;
	uint8_t x702 = UINT8_MAX;
	static int16_t x703 = INT16_MIN;
	uint32_t x704 = UINT32_MAX;
	volatile int32_t t153 = 5572;

    t153 = ((x701==(x702-x703))==x704);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x709 = 8318700743067874661LLU;
	volatile int64_t x710 = -4LL;
	int8_t x712 = -7;
	volatile int32_t t154 = 766;

    t154 = ((x709==(x710-x711))==x712);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x714 = 13;

    t155 = ((x713==(x714-x715))==x716);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x717 = UINT8_MAX;
	static int64_t x720 = INT64_MIN;

    t156 = ((x717==(x718-x719))==x720);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x721 = INT64_MIN;
	uint32_t x722 = 1152U;
	static volatile uint16_t x723 = UINT16_MAX;
	uint64_t x724 = UINT64_MAX;
	static volatile int32_t t157 = -131;

    t157 = ((x721==(x722-x723))==x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x725 = 19U;
	uint32_t x726 = UINT32_MAX;
	static volatile int64_t x727 = -1LL;
	static volatile int64_t x728 = INT64_MIN;
	int32_t t158 = -42;

    t158 = ((x725==(x726-x727))==x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x730 = INT32_MAX;
	uint8_t x731 = 3U;
	int64_t x732 = 822310812267LL;
	int32_t t159 = 42896;

    t159 = ((x729==(x730-x731))==x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x733 = INT32_MAX;
	volatile int8_t x734 = INT8_MIN;
	uint32_t x735 = UINT32_MAX;
	uint8_t x736 = UINT8_MAX;

    t160 = ((x733==(x734-x735))==x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x737 = -1;
	uint32_t x738 = 15179522U;
	static int32_t x739 = INT32_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t161 = -3761424;

    t161 = ((x737==(x738-x739))==x740);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x741 = 3U;
	uint8_t x742 = 1U;
	int16_t x743 = INT16_MAX;
	int32_t x744 = -4708;
	volatile int32_t t162 = -2343327;

    t162 = ((x741==(x742-x743))==x744);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x745 = 1LLU;
	static int32_t x746 = 1562480;
	uint64_t x747 = UINT64_MAX;
	int64_t x748 = 573252375961945612LL;
	volatile int32_t t163 = -196046556;

    t163 = ((x745==(x746-x747))==x748);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x750 = 1U;
	static volatile int64_t x752 = INT64_MAX;
	int32_t t164 = -922738312;

    t164 = ((x749==(x750-x751))==x752);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x753 = INT16_MIN;
	volatile int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MIN;
	uint32_t x756 = 15U;
	static int32_t t165 = -483;

    t165 = ((x753==(x754-x755))==x756);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = -1LL;
	int8_t x763 = -12;
	uint64_t x764 = 2824241095896LLU;
	volatile int32_t t166 = 997892;

    t166 = ((x761==(x762-x763))==x764);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = 836031;
	volatile int32_t x767 = INT32_MIN;
	volatile int32_t t167 = 270218;

    t167 = ((x765==(x766-x767))==x768);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x769 = INT64_MIN;
	int16_t x771 = -1;
	int16_t x772 = 1;
	volatile int32_t t168 = -526459168;

    t168 = ((x769==(x770-x771))==x772);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x773 = 13U;
	volatile int8_t x775 = INT8_MIN;
	int16_t x776 = -1;
	int32_t t169 = 887576;

    t169 = ((x773==(x774-x775))==x776);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x777 = INT64_MAX;
	int64_t x779 = INT64_MIN;
	static uint8_t x780 = 2U;
	volatile int32_t t170 = -1;

    t170 = ((x777==(x778-x779))==x780);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x781 = INT8_MIN;
	volatile int16_t x782 = INT16_MAX;
	int8_t x783 = -1;
	int32_t t171 = 251;

    t171 = ((x781==(x782-x783))==x784);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x785 = 2966;
	static volatile int32_t x787 = INT32_MIN;
	volatile int32_t t172 = 24714150;

    t172 = ((x785==(x786-x787))==x788);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x789 = -1;
	int8_t x790 = -1;
	uint16_t x791 = UINT16_MAX;
	int8_t x792 = 40;

    t173 = ((x789==(x790-x791))==x792);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x793 = INT32_MAX;
	uint8_t x794 = 0U;
	int16_t x795 = -1;
	volatile int32_t t174 = -68;

    t174 = ((x793==(x794-x795))==x796);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x797 = -1;
	static int64_t x798 = 4423349089665LL;
	int32_t x799 = 16245;
	volatile int32_t t175 = 315846;

    t175 = ((x797==(x798-x799))==x800);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x801 = -20;
	int32_t x802 = INT32_MAX;
	int64_t x804 = -39988063880LL;
	int32_t t176 = 143;

    t176 = ((x801==(x802-x803))==x804);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x805 = 1;
	static volatile uint32_t x806 = 1565191964U;
	int32_t x807 = -1;
	uint32_t x808 = UINT32_MAX;
	int32_t t177 = -428011;

    t177 = ((x805==(x806-x807))==x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x810 = 36415540836616LLU;
	int8_t x811 = -1;
	volatile int32_t t178 = 393;

    t178 = ((x809==(x810-x811))==x812);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x813 = 12785U;
	int8_t x814 = -53;
	static int16_t x816 = -1;
	int32_t t179 = 58952;

    t179 = ((x813==(x814-x815))==x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x817 = INT32_MAX;
	volatile uint64_t x819 = UINT64_MAX;
	uint32_t x820 = 1U;
	static int32_t t180 = -55146066;

    t180 = ((x817==(x818-x819))==x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x825 = INT16_MIN;
	uint8_t x826 = 27U;
	uint32_t x827 = 443037219U;
	static int64_t x828 = INT64_MIN;
	int32_t t181 = 194321;

    t181 = ((x825==(x826-x827))==x828);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x829 = INT8_MIN;
	int16_t x830 = 984;
	uint16_t x831 = 27U;
	static uint16_t x832 = 7U;
	volatile int32_t t182 = 250180;

    t182 = ((x829==(x830-x831))==x832);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x833 = INT8_MIN;
	int16_t x834 = INT16_MIN;
	volatile uint8_t x836 = UINT8_MAX;
	int32_t t183 = 132308512;

    t183 = ((x833==(x834-x835))==x836);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	volatile int32_t x838 = INT32_MIN;
	static int64_t x839 = INT64_MIN;
	volatile int32_t t184 = -2768;

    t184 = ((x837==(x838-x839))==x840);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x841 = UINT8_MAX;
	volatile uint8_t x842 = UINT8_MAX;
	int64_t x843 = -1LL;
	uint16_t x844 = 29U;
	static volatile int32_t t185 = -115573;

    t185 = ((x841==(x842-x843))==x844);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x845 = INT64_MIN;
	int16_t x847 = -1;
	volatile int32_t t186 = 0;

    t186 = ((x845==(x846-x847))==x848);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x849 = INT64_MIN;
	int32_t x850 = INT32_MIN;
	static int32_t x852 = INT32_MIN;
	int32_t t187 = 255;

    t187 = ((x849==(x850-x851))==x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x853 = 10103U;
	static int64_t x854 = INT64_MIN;
	int32_t x855 = -1;
	int32_t t188 = -553;

    t188 = ((x853==(x854-x855))==x856);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x857 = INT16_MAX;
	int8_t x859 = INT8_MAX;
	uint64_t x860 = UINT64_MAX;
	static int32_t t189 = 110;

    t189 = ((x857==(x858-x859))==x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x861 = UINT32_MAX;
	uint32_t x862 = UINT32_MAX;
	volatile uint32_t x863 = UINT32_MAX;
	static int8_t x864 = -62;
	volatile int32_t t190 = -431100;

    t190 = ((x861==(x862-x863))==x864);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x866 = INT8_MAX;
	int8_t x867 = -3;
	int64_t x868 = INT64_MAX;
	static int32_t t191 = -14706;

    t191 = ((x865==(x866-x867))==x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x869 = INT8_MIN;
	static volatile int32_t x870 = 4103406;
	static int32_t x871 = -783871940;
	int16_t x872 = INT16_MIN;
	static volatile int32_t t192 = -29322;

    t192 = ((x869==(x870-x871))==x872);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x873 = 13U;
	int64_t x874 = -194679LL;
	volatile int32_t t193 = -506477;

    t193 = ((x873==(x874-x875))==x876);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x877 = -1;
	int64_t x878 = 1LL;
	uint32_t x879 = UINT32_MAX;
	int64_t x880 = INT64_MIN;
	volatile int32_t t194 = -21;

    t194 = ((x877==(x878-x879))==x880);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x889 = 250555LL;
	uint64_t x890 = 23LLU;
	static uint32_t x891 = UINT32_MAX;
	volatile uint32_t x892 = UINT32_MAX;

    t195 = ((x889==(x890-x891))==x892);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x897 = INT64_MAX;
	int32_t x898 = 1300493;
	int64_t x899 = -11831735294LL;
	volatile int64_t x900 = 74LL;
	int32_t t196 = -2890;

    t196 = ((x897==(x898-x899))==x900);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x901 = 3;
	int64_t x902 = 155292736298LL;
	static int16_t x903 = -2054;
	volatile uint16_t x904 = 20489U;
	volatile int32_t t197 = -1786;

    t197 = ((x901==(x902-x903))==x904);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x906 = UINT8_MAX;
	int32_t t198 = -15;

    t198 = ((x905==(x906-x907))==x908);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x909 = UINT64_MAX;
	uint16_t x910 = UINT16_MAX;
	int32_t x911 = -1;
	int64_t x912 = 1557417852LL;
	int32_t t199 = 3;

    t199 = ((x909==(x910-x911))==x912);

    if (t199 != 0) { NG(); } else { ; }
	
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

