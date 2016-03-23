
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

static int16_t x1 = INT16_MAX;
int16_t x3 = -1;
static uint16_t x26 = 6U;
int32_t x29 = INT32_MIN;
uint8_t x31 = 2U;
int16_t x32 = 2069;
static uint32_t x33 = UINT32_MAX;
volatile int64_t x40 = INT64_MAX;
uint64_t x42 = 238223325747164752LLU;
static int8_t x47 = INT8_MIN;
int32_t x49 = INT32_MIN;
int64_t t12 = 0LL;
int8_t x55 = 10;
int16_t x57 = -1;
static int32_t x59 = INT32_MIN;
static volatile int32_t t14 = 76;
int8_t x61 = INT8_MAX;
volatile int64_t x67 = INT64_MIN;
uint64_t x70 = UINT64_MAX;
int8_t x79 = INT8_MIN;
int16_t x81 = -162;
int64_t t20 = -4688LL;
volatile int8_t x86 = INT8_MAX;
static int32_t x87 = -27;
volatile int64_t t22 = -999427LL;
int64_t t23 = -12809024LL;
uint16_t x106 = 7574U;
int8_t x107 = INT8_MAX;
uint16_t x113 = 44U;
uint64_t t28 = 105883LLU;
int64_t x121 = INT64_MIN;
static int8_t x123 = -34;
static uint8_t x125 = 7U;
int64_t x126 = 1300293193083665LL;
int64_t t31 = 34659101LL;
uint16_t x135 = UINT16_MAX;
int8_t x140 = INT8_MIN;
static int8_t x142 = INT8_MIN;
uint64_t t37 = 486886LLU;
volatile int64_t x156 = 127979588LL;
int8_t x160 = -2;
int16_t x161 = INT16_MAX;
int8_t x167 = -26;
int64_t x170 = 51716549LL;
int32_t x173 = INT32_MIN;
int32_t x180 = INT32_MAX;
volatile int64_t t44 = 0LL;
int16_t x195 = INT16_MIN;
uint16_t x203 = 4U;
uint64_t x207 = 4539217991435LLU;
int32_t x209 = 152;
int32_t t52 = 523144;
static int32_t x213 = -1;
int64_t x214 = INT64_MIN;
int32_t t54 = 54022811;
int64_t x225 = INT64_MIN;
volatile int16_t x228 = INT16_MIN;
volatile int16_t x234 = INT16_MIN;
uint8_t x246 = UINT8_MAX;
static volatile uint32_t x251 = 29377843U;
int64_t t61 = 1LL;
uint16_t x253 = 1072U;
int16_t x255 = INT16_MIN;
uint64_t t62 = 12279LLU;
int16_t x264 = -1;
volatile int32_t t64 = 2037632;
uint32_t x267 = UINT32_MAX;
volatile uint32_t t65 = 17U;
int64_t t66 = 151300539015LL;
volatile uint16_t x274 = 1851U;
volatile int16_t x279 = INT16_MAX;
volatile int64_t x285 = INT64_MIN;
int64_t x287 = INT64_MAX;
int64_t t70 = -226148328945350378LL;
uint32_t x290 = 57380U;
int64_t x291 = INT64_MIN;
static volatile int32_t t75 = 393111006;
int64_t x310 = INT64_MIN;
int16_t x312 = -11077;
int32_t x326 = INT32_MIN;
uint32_t t80 = 40U;
static uint32_t x333 = 1380736781U;
static uint32_t x335 = 23346300U;
uint16_t x336 = UINT16_MAX;
int32_t x345 = 20744;
int16_t x348 = INT16_MIN;
volatile int64_t t85 = -640889016LL;
uint64_t x351 = UINT64_MAX;
int32_t x353 = INT32_MIN;
int32_t x358 = -1;
volatile uint32_t t88 = 2005737237U;
int8_t x368 = INT8_MAX;
uint8_t x371 = 37U;
volatile uint8_t x373 = 121U;
static uint16_t x376 = 3U;
static int32_t t92 = 405164769;
int32_t x383 = INT32_MIN;
static volatile uint64_t t94 = 3352811712755LLU;
int16_t x385 = INT16_MIN;
volatile int64_t t96 = 67359821LL;
static int16_t x397 = 0;
int32_t x408 = -1;
static volatile int64_t x413 = 781820LL;
uint8_t x414 = 98U;
volatile uint32_t x417 = 72U;
int64_t x435 = 96LL;
int16_t x439 = INT16_MIN;
volatile int32_t t108 = -12;
int64_t x448 = INT64_MIN;
static volatile uint64_t t109 = 883778717LLU;
uint8_t x449 = 3U;
static int64_t x454 = INT64_MIN;
uint8_t x457 = 51U;
uint8_t x472 = 125U;
static volatile uint32_t t115 = 0U;
uint8_t x482 = 7U;
uint64_t t118 = 4202854125LLU;
static int64_t x488 = INT64_MAX;
static volatile int64_t t119 = 5265983022382577LL;
int8_t x491 = INT8_MIN;
static volatile int16_t x492 = 12329;
uint32_t x512 = 1U;
int64_t t125 = -263861LL;
volatile int64_t t126 = -488739134LL;
int8_t x517 = INT8_MAX;
int16_t x523 = 15372;
uint16_t x525 = UINT16_MAX;
uint16_t x528 = 19809U;
int64_t x532 = INT64_MIN;
static int64_t t130 = -29133796LL;
uint16_t x534 = 6934U;
uint8_t x538 = UINT8_MAX;
int32_t x540 = INT32_MIN;
volatile int32_t t133 = 160;
uint16_t x546 = 6110U;
uint8_t x554 = 2U;
volatile int64_t x563 = -1LL;
uint64_t x568 = 304864134242970LLU;
int64_t x571 = INT64_MIN;
int64_t t139 = -9611LL;
volatile int32_t x578 = 588617;
int8_t x580 = -2;
uint32_t x581 = 47U;
int32_t x583 = -1;
volatile uint32_t t142 = 58271U;
volatile int32_t t143 = -28;
int16_t x592 = -1;
uint64_t x593 = UINT64_MAX;
static uint32_t x601 = UINT32_MAX;
int8_t x604 = -1;
volatile int32_t x606 = -9576;
uint32_t x609 = 89U;
static int8_t x616 = INT8_MIN;
uint16_t x623 = 0U;
static int8_t x627 = -1;
volatile int16_t x632 = INT16_MAX;
volatile int64_t t154 = -27802226162454958LL;
volatile int16_t x636 = -1;
static int16_t x641 = INT16_MIN;
int8_t x651 = INT8_MIN;
uint8_t x653 = 30U;
uint64_t x657 = 161294738LLU;
uint32_t x658 = 3U;
uint32_t x664 = 1835U;
int32_t x665 = -35051;
uint16_t x669 = 22354U;
int8_t x672 = INT8_MIN;
static int8_t x674 = INT8_MAX;
uint8_t x675 = 3U;
int32_t x676 = 238257993;
static int16_t x677 = -1;
uint64_t t166 = 8238750LLU;
volatile int64_t t170 = 26LL;
int8_t x699 = 1;
static uint64_t x711 = UINT64_MAX;
int32_t t174 = -16687070;
uint32_t x718 = UINT32_MAX;
volatile uint32_t x720 = 1428595787U;
static int32_t x729 = -66737;
int64_t x731 = -1LL;
static uint16_t x739 = 1607U;
uint32_t x741 = 912204903U;
int64_t x744 = 328LL;
static int64_t x747 = 3597722LL;
volatile int64_t t182 = 46753357008873LL;
static int32_t x766 = -24602;
uint64_t x767 = 4LLU;
int64_t x773 = 890683LL;
volatile int16_t x775 = 0;
static uint64_t t189 = 217663339LLU;
volatile uint64_t t190 = 179900LLU;
volatile uint8_t x787 = UINT8_MAX;
uint64_t x800 = UINT64_MAX;
int32_t x801 = -1;
uint8_t x803 = 32U;
uint8_t x805 = UINT8_MAX;
uint16_t x807 = 0U;
int8_t x815 = INT8_MIN;
volatile int16_t x817 = 5048;
uint32_t x820 = 5087U;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int16_t x4 = -86;
	volatile int64_t t0 = -7168328231LL;

    t0 = (((x1|x2)&x3)%x4);

    if (t0 != -41LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x5 = INT64_MIN;
	int64_t x6 = 148LL;
	int8_t x7 = INT8_MAX;
	uint8_t x8 = 4U;
	volatile int64_t t1 = -329526637LL;

    t1 = (((x5|x6)&x7)%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = -21960195742541476LL;
	int8_t x12 = INT8_MIN;
	static int64_t t2 = -320292646725833132LL;

    t2 = (((x9|x10)&x11)%x12);

    if (t2 != 92LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 24310166U;
	volatile uint16_t x15 = 1U;
	int64_t x16 = 2LL;
	uint64_t t3 = 334LLU;

    t3 = (((x13|x14)&x15)%x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint32_t x18 = 244103670U;
	static int64_t x19 = INT64_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t4 = 9209159LL;

    t4 = (((x17|x18)&x19)%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -5;
	static int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	volatile int64_t t5 = 147LL;

    t5 = (((x21|x22)&x23)%x24);

    if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	uint64_t x27 = 1248337533143373LLU;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 77756644997156LLU;

    t6 = (((x25|x26)&x27)%x28);

    if (t6 != 1248337533143373LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 122U;
	int32_t t7 = 1;

    t7 = (((x29|x30)&x31)%x32);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x34 = 121U;
	volatile uint64_t x35 = 255506473686373LLU;
	uint32_t x36 = UINT32_MAX;
	volatile uint64_t t8 = 137596383013781226LLU;

    t8 = (((x33|x34)&x35)%x36);

    if (t8 != 3164214629LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	static int32_t x38 = INT32_MIN;
	uint64_t x39 = 5338LLU;
	uint64_t t9 = 2509799516857347LLU;

    t9 = (((x37|x38)&x39)%x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -4331380;
	int64_t x43 = -23515873284280LL;
	uint8_t x44 = UINT8_MAX;
	uint64_t t10 = 1418LLU;

    t10 = (((x41|x42)&x43)%x44);

    if (t10 != 65LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = -2533462;
	int16_t x46 = INT16_MIN;
	int8_t x48 = 2;
	volatile int32_t t11 = -99847;

    t11 = (((x45|x46)&x47)%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = 2136041301LL;
	int16_t x51 = -606;
	int8_t x52 = 5;

    t12 = (((x49|x50)&x51)%x52);

    if (t12 != -4LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 11U;
	int16_t x54 = INT16_MAX;
	uint8_t x56 = 97U;
	volatile int32_t t13 = -156;

    t13 = (((x53|x54)&x55)%x56);

    if (t13 != 10) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x58 = INT16_MIN;
	uint16_t x60 = 225U;

    t14 = (((x57|x58)&x59)%x60);

    if (t14 != -173) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = INT8_MAX;
	int64_t x63 = -1087443310359LL;
	uint32_t x64 = 85656342U;
	int64_t t15 = 12598662LL;

    t15 = (((x61|x62)&x63)%x64);

    if (t15 != 105LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 64U;
	int8_t x66 = -1;
	static volatile int8_t x68 = -1;
	int64_t t16 = 928LL;

    t16 = (((x65|x66)&x67)%x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 190766757326LL;
	static int64_t x71 = INT64_MAX;
	uint8_t x72 = UINT8_MAX;
	uint64_t t17 = 409813762751LLU;

    t17 = (((x69|x70)&x71)%x72);

    if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x74 = 20;
	static int32_t x75 = INT32_MIN;
	uint64_t x76 = 2197781656805LLU;
	static uint64_t t18 = 597424766875649LLU;

    t18 = (((x73|x74)&x75)%x76);

    if (t18 != 2193544448438LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 6612U;
	int8_t x78 = INT8_MIN;
	int16_t x80 = -97;
	volatile int32_t t19 = 0;

    t19 = (((x77|x78)&x79)%x80);

    if (t19 != -31) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = 767257LL;
	uint8_t x83 = 1U;
	static uint16_t x84 = UINT16_MAX;

    t20 = (((x81|x82)&x83)%x84);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = -1;
	uint32_t x88 = 16U;
	volatile uint32_t t21 = 1561U;

    t21 = (((x85|x86)&x87)%x88);

    if (t21 != 5U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = 1;
	int64_t x91 = 3LL;
	int8_t x92 = 7;

    t22 = (((x89|x90)&x91)%x92);

    if (t22 != 3LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x93 = UINT8_MAX;
	int64_t x94 = INT64_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;

    t23 = (((x93|x94)&x95)%x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x97 = 28U;
	int32_t x98 = -1;
	static uint32_t x99 = UINT32_MAX;
	int16_t x100 = 1;
	volatile uint32_t t24 = 32347849U;

    t24 = (((x97|x98)&x99)%x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = UINT16_MAX;
	int32_t x102 = -26878366;
	volatile int64_t x103 = INT64_MIN;
	int64_t x104 = -120506057LL;
	int64_t t25 = 378246LL;

    t25 = (((x101|x102)&x103)%x104);

    if (t25 != -40071361LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 2U;
	static uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 240163640U;

    t26 = (((x105|x106)&x107)%x108);

    if (t26 != 22U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 1965323U;
	static int64_t x110 = INT64_MAX;
	uint32_t x111 = 58751U;
	int16_t x112 = INT16_MIN;
	int64_t t27 = -27195987LL;

    t27 = (((x109|x110)&x111)%x112);

    if (t27 != 25983LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = 261703554U;
	int8_t x115 = 0;
	uint64_t x116 = 196808114LLU;

    t28 = (((x113|x114)&x115)%x116);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	int32_t x118 = -109345561;
	uint32_t x119 = UINT32_MAX;
	static uint64_t x120 = 2LLU;
	uint64_t t29 = 514483835376834LLU;

    t29 = (((x117|x118)&x119)%x120);

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x122 = UINT8_MAX;
	static int32_t x124 = -1;
	volatile int64_t t30 = -2LL;

    t30 = (((x121|x122)&x123)%x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x127 = -7;
	static int32_t x128 = -1;

    t31 = (((x125|x126)&x127)%x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -77LL;
	uint64_t x130 = 25796452LLU;
	int8_t x131 = INT8_MIN;
	static uint8_t x132 = UINT8_MAX;
	static uint64_t t32 = 120158998311810LLU;

    t32 = (((x129|x130)&x131)%x132);

    if (t32 != 128LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	uint32_t x136 = 79383U;
	volatile uint32_t t33 = 743213863U;

    t33 = (((x133|x134)&x135)%x136);

    if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint8_t x138 = 1U;
	int64_t x139 = -384832258818LL;
	volatile int64_t t34 = 4279278626526692LL;

    t34 = (((x137|x138)&x139)%x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 14613625550899414LL;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = 56832LLU;
	volatile uint64_t t35 = 42631247LLU;

    t35 = (((x141|x142)&x143)%x144);

    if (t35 != 32726LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x145 = INT32_MIN;
	volatile int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	static uint32_t x148 = 26U;
	volatile uint32_t t36 = 26765182U;

    t36 = (((x145|x146)&x147)%x148);

    if (t36 != 24U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1;
	int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;

    t37 = (((x149|x150)&x151)%x152);

    if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 11U;
	int16_t x154 = -1;
	int64_t x155 = -2096617959782LL;
	int64_t t38 = 143097421LL;

    t38 = (((x153|x154)&x155)%x156);

    if (t38 != -56349166LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = 326092179LLU;
	uint8_t x158 = 14U;
	uint64_t x159 = 2432584856973879856LLU;
	uint64_t t39 = 15484394837295LLU;

    t39 = (((x157|x158)&x159)%x160);

    if (t39 != 292290576LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x162 = INT64_MIN;
	uint8_t x163 = 3U;
	static int32_t x164 = -959978383;
	static int64_t t40 = -39LL;

    t40 = (((x161|x162)&x163)%x164);

    if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	static volatile uint16_t x166 = 2U;
	uint32_t x168 = 3116U;
	volatile int64_t t41 = -159080662LL;

    t41 = (((x165|x166)&x167)%x168);

    if (t41 != -26LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = UINT64_MAX;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = -1;
	volatile uint64_t t42 = 56005LLU;

    t42 = (((x169|x170)&x171)%x172);

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = -1;
	static volatile int64_t x175 = INT64_MIN;
	uint32_t x176 = 7U;
	volatile int64_t t43 = 20697351517LL;

    t43 = (((x173|x174)&x175)%x176);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MAX;
	int64_t x178 = -1LL;
	static volatile int16_t x179 = 0;

    t44 = (((x177|x178)&x179)%x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = 119245321762LL;
	uint64_t x183 = 103772335241872464LLU;
	int32_t x184 = -1;
	volatile uint64_t t45 = 50857660LLU;

    t45 = (((x181|x182)&x183)%x184);

    if (t45 != 103772335241872384LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -1;
	static int16_t x186 = -4;
	static uint64_t x187 = 626951560LLU;
	volatile int8_t x188 = INT8_MAX;
	volatile uint64_t t46 = 1132907585871567671LLU;

    t46 = (((x185|x186)&x187)%x188);

    if (t46 != 58LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = 171444;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -1;
	int32_t x192 = -30086937;
	int32_t t47 = 170531454;

    t47 = (((x189|x190)&x191)%x192);

    if (t47 != 196607) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	static uint64_t x194 = 229119979LLU;
	uint8_t x196 = 3U;
	static uint64_t t48 = 283347LLU;

    t48 = (((x193|x194)&x195)%x196);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = UINT16_MAX;
	int8_t x198 = -1;
	int8_t x199 = 8;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 9;

    t49 = (((x197|x198)&x199)%x200);

    if (t49 != 8) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 736LLU;
	int32_t x202 = -79213;
	int64_t x204 = INT64_MIN;
	uint64_t t50 = 25919433352065464LLU;

    t50 = (((x201|x202)&x203)%x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -30;
	volatile int16_t x206 = 1817;
	uint8_t x208 = 1U;
	uint64_t t51 = 2107870916749LLU;

    t51 = (((x205|x206)&x207)%x208);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x210 = INT16_MIN;
	volatile int16_t x211 = INT16_MIN;
	volatile uint16_t x212 = 21U;

    t52 = (((x209|x210)&x211)%x212);

    if (t52 != -8) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MAX;
	volatile int64_t t53 = -23LL;

    t53 = (((x213|x214)&x215)%x216);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = -16;
	int32_t x222 = 15863;
	static int8_t x223 = 7;
	int8_t x224 = INT8_MAX;

    t54 = (((x221|x222)&x223)%x224);

    if (t54 != 7) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x226 = UINT64_MAX;
	int8_t x227 = -1;
	uint64_t t55 = 54635LLU;

    t55 = (((x225|x226)&x227)%x228);

    if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	int64_t t56 = 29615588267376LL;

    t56 = (((x229|x230)&x231)%x232);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = 2;
	uint8_t x235 = 24U;
	int8_t x236 = -43;
	int32_t t57 = -1;

    t57 = (((x233|x234)&x235)%x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x237 = 0;
	static int32_t x238 = -617;
	static int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t58 = 409;

    t58 = (((x237|x238)&x239)%x240);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	volatile int32_t x242 = -1;
	uint32_t x243 = 46556U;
	uint32_t x244 = 1518U;
	uint64_t t59 = 10307041LLU;

    t59 = (((x241|x242)&x243)%x244);

    if (t59 != 1016LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x245 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	int16_t x248 = INT16_MIN;
	volatile int32_t t60 = -266535;

    t60 = (((x245|x246)&x247)%x248);

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = 3138578LL;
	uint32_t x250 = UINT32_MAX;
	int16_t x252 = 234;

    t61 = (((x249|x250)&x251)%x252);

    if (t61 != 79LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x254 = -3;
	uint64_t x256 = UINT64_MAX;

    t62 = (((x253|x254)&x255)%x256);

    if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x257 = 277847506LLU;
	int8_t x258 = INT8_MIN;
	static int16_t x259 = 15;
	static int32_t x260 = INT32_MIN;
	volatile uint64_t t63 = 5175045756LLU;

    t63 = (((x257|x258)&x259)%x260);

    if (t63 != 2LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x261 = INT16_MIN;
	uint16_t x262 = 332U;
	int32_t x263 = 2;

    t64 = (((x261|x262)&x263)%x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x265 = UINT32_MAX;
	uint8_t x266 = UINT8_MAX;
	uint8_t x268 = UINT8_MAX;

    t65 = (((x265|x266)&x267)%x268);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = 61;
	uint8_t x270 = 83U;
	int64_t x271 = INT64_MIN;
	static volatile int64_t x272 = INT64_MAX;

    t66 = (((x269|x270)&x271)%x272);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x273 = UINT8_MAX;
	int32_t x275 = -1;
	int8_t x276 = INT8_MIN;
	int32_t t67 = -91;

    t67 = (((x273|x274)&x275)%x276);

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = -672459299388158330LL;
	uint32_t x278 = 52U;
	int32_t x280 = INT32_MAX;
	volatile int64_t t68 = 1LL;

    t68 = (((x277|x278)&x279)%x280);

    if (t68 != 3766LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = -1LL;
	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = 17;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t69 = -537132132941LL;

    t69 = (((x281|x282)&x283)%x284);

    if (t69 != 17LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x286 = 5U;
	int8_t x288 = -42;

    t70 = (((x285|x286)&x287)%x288);

    if (t70 != 5LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -1;
	volatile int8_t x292 = INT8_MAX;
	volatile int64_t t71 = 35687521835LL;

    t71 = (((x289|x290)&x291)%x292);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x293 = INT32_MAX;
	int64_t x294 = 4285746173LL;
	volatile int32_t x295 = INT32_MAX;
	volatile int8_t x296 = -6;
	int64_t t72 = 40489174750LL;

    t72 = (((x293|x294)&x295)%x296);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = -1;
	volatile int16_t x299 = INT16_MIN;
	static uint64_t x300 = 926273145687LLU;
	volatile uint64_t t73 = 969406119925LLU;

    t73 = (((x297|x298)&x299)%x300);

    if (t73 != 483255728543LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x301 = 2U;
	int16_t x302 = -1;
	volatile int64_t x303 = -34234240255803LL;
	int16_t x304 = INT16_MAX;
	static int64_t t74 = -7LL;

    t74 = (((x301|x302)&x303)%x304);

    if (t74 != -21308LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x305 = -1;
	volatile int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MAX;
	int8_t x308 = -25;

    t75 = (((x305|x306)&x307)%x308);

    if (t75 != 22) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x309 = INT32_MIN;
	volatile int16_t x311 = INT16_MIN;
	volatile int64_t t76 = -743945823244LL;

    t76 = (((x309|x310)&x311)%x312);

    if (t76 != -7812LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = 250552459;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	static volatile int32_t t77 = -541;

    t77 = (((x313|x314)&x315)%x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x317 = 38582293599LLU;
	int8_t x318 = -1;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = INT32_MIN;
	volatile uint64_t t78 = 10127178609LLU;

    t78 = (((x317|x318)&x319)%x320);

    if (t78 != 2147450880LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x321 = 9U;
	static int64_t x322 = 82726248535686LL;
	uint16_t x323 = 27U;
	int32_t x324 = 7;
	int64_t t79 = 8048897LL;

    t79 = (((x321|x322)&x323)%x324);

    if (t79 != 4LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x325 = UINT32_MAX;
	int32_t x327 = 0;
	volatile uint8_t x328 = 1U;

    t80 = (((x325|x326)&x327)%x328);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -1;
	int64_t x330 = 200077784771LL;
	static volatile int16_t x331 = 1;
	uint8_t x332 = 7U;
	int64_t t81 = -201657321LL;

    t81 = (((x329|x330)&x331)%x332);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x334 = 27768U;
	uint32_t t82 = 0U;

    t82 = (((x333|x334)&x335)%x336);

    if (t82 != 15552U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MIN;
	static int32_t x338 = -231853;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = 3;
	static volatile int64_t t83 = 229409276326951278LL;

    t83 = (((x337|x338)&x339)%x340);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = 12U;
	static volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = 3U;
	int64_t t84 = 120LL;

    t84 = (((x341|x342)&x343)%x344);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x346 = -1;
	static int64_t x347 = -141985425166162250LL;

    t85 = (((x345|x346)&x347)%x348);

    if (t85 != -22858LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = 448346U;
	uint64_t x350 = UINT64_MAX;
	int64_t x352 = 34263LL;
	uint64_t t86 = 7708331014LLU;

    t86 = (((x349|x350)&x351)%x352);

    if (t86 != 25404LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x354 = -15;
	int16_t x355 = INT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	int32_t t87 = 3049;

    t87 = (((x353|x354)&x355)%x356);

    if (t87 != 32753) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = -1;
	int8_t x359 = 27;
	static uint32_t x360 = 992912U;

    t88 = (((x357|x358)&x359)%x360);

    if (t88 != 27U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x361 = INT32_MIN;
	volatile int8_t x362 = -1;
	uint8_t x363 = 1U;
	uint8_t x364 = 112U;
	static int32_t t89 = -15;

    t89 = (((x361|x362)&x363)%x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = -1;
	static int8_t x366 = -1;
	int32_t x367 = 212;
	static int32_t t90 = -37614151;

    t90 = (((x365|x366)&x367)%x368);

    if (t90 != 85) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	volatile uint16_t x372 = 7606U;
	volatile int32_t t91 = -217583;

    t91 = (((x369|x370)&x371)%x372);

    if (t91 != 37) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x374 = 2U;
	volatile int8_t x375 = INT8_MAX;

    t92 = (((x373|x374)&x375)%x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x377 = 10073U;
	volatile int64_t x378 = -100250624454724113LL;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = 15286927687782098LLU;
	volatile uint64_t t93 = 10182693621LLU;

    t93 = (((x377|x378)&x379)%x380);

    if (t93 != 30719LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x381 = 94542039616LLU;
	uint32_t x382 = 24615U;
	int32_t x384 = INT32_MIN;

    t94 = (((x381|x382)&x383)%x384);

    if (t94 != 94489280512LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x386 = 1U;
	volatile int64_t x387 = INT64_MAX;
	int16_t x388 = -32;
	volatile int64_t t95 = 1942466652865880LL;

    t95 = (((x385|x386)&x387)%x388);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x389 = 152;
	int64_t x390 = 72865265928010LL;
	uint16_t x391 = 432U;
	volatile int8_t x392 = -1;

    t96 = (((x389|x390)&x391)%x392);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = INT32_MAX;
	int16_t x394 = 647;
	int8_t x395 = -1;
	uint32_t x396 = 43158U;
	volatile uint32_t t97 = 4697721U;

    t97 = (((x393|x394)&x395)%x396);

    if (t97 != 27883U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x398 = INT8_MAX;
	volatile int8_t x399 = -1;
	int8_t x400 = -58;
	int32_t t98 = 1;

    t98 = (((x397|x398)&x399)%x400);

    if (t98 != 11) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x401 = INT32_MIN;
	static int32_t x402 = INT32_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t99 = -23469;

    t99 = (((x401|x402)&x403)%x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	int16_t x407 = -1;
	volatile int32_t t100 = 35;

    t100 = (((x405|x406)&x407)%x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x410 = -3;
	static int8_t x411 = 2;
	uint8_t x412 = UINT8_MAX;
	int32_t t101 = -120189;

    t101 = (((x409|x410)&x411)%x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x415 = 18988U;
	uint32_t x416 = UINT32_MAX;
	volatile int64_t t102 = -196079185659LL;

    t102 = (((x413|x414)&x415)%x416);

    if (t102 != 18476LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x418 = INT8_MIN;
	int16_t x419 = -19;
	uint64_t x420 = 3LLU;
	static volatile uint64_t t103 = 16337364188LLU;

    t103 = (((x417|x418)&x419)%x420);

    if (t103 != 2LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = 41;
	int32_t x422 = -1;
	volatile uint32_t x423 = UINT32_MAX;
	volatile int8_t x424 = 8;
	static uint32_t t104 = 166352370U;

    t104 = (((x421|x422)&x423)%x424);

    if (t104 != 7U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MIN;
	static volatile int64_t x427 = -1LL;
	static volatile int8_t x428 = INT8_MAX;
	volatile int64_t t105 = -1521350LL;

    t105 = (((x425|x426)&x427)%x428);

    if (t105 != -2LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x429 = -3815;
	int64_t x430 = -65188477099LL;
	uint64_t x431 = 444176LLU;
	int8_t x432 = INT8_MIN;
	volatile uint64_t t106 = 2809520255211835LLU;

    t106 = (((x429|x430)&x431)%x432);

    if (t106 != 444176LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = UINT32_MAX;
	int64_t x434 = INT64_MIN;
	volatile int8_t x436 = -23;
	int64_t t107 = -2692538386230970LL;

    t107 = (((x433|x434)&x435)%x436);

    if (t107 != 4LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x437 = UINT8_MAX;
	int32_t x438 = INT32_MIN;
	int16_t x440 = -1;

    t108 = (((x437|x438)&x439)%x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x445 = 1832826LLU;
	volatile int32_t x446 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;

    t109 = (((x445|x446)&x447)%x448);

    if (t109 != 9223372034709124986LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x450 = -1;
	volatile uint8_t x451 = 0U;
	int8_t x452 = 16;
	static volatile int32_t t110 = 29141;

    t110 = (((x449|x450)&x451)%x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x453 = INT64_MIN;
	volatile int64_t x455 = INT64_MAX;
	int8_t x456 = -1;
	int64_t t111 = 26801797398234LL;

    t111 = (((x453|x454)&x455)%x456);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x458 = 6U;
	uint32_t x459 = 3125353U;
	static int16_t x460 = -83;
	uint32_t t112 = 4240679U;

    t112 = (((x457|x458)&x459)%x460);

    if (t112 != 33U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MAX;
	uint16_t x462 = 1230U;
	uint8_t x463 = 14U;
	int64_t x464 = -23LL;
	int64_t t113 = 472078LL;

    t113 = (((x461|x462)&x463)%x464);

    if (t113 != 14LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = -1;
	static int32_t x466 = 77022337;
	int64_t x467 = INT64_MIN;
	static int16_t x468 = 2;
	int64_t t114 = 1086620188607LL;

    t114 = (((x465|x466)&x467)%x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x469 = 112U;
	int16_t x470 = INT16_MIN;
	int8_t x471 = 0;

    t115 = (((x469|x470)&x471)%x472);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x473 = 6089329637LLU;
	int64_t x474 = -506301569545789530LL;
	int32_t x475 = INT32_MIN;
	volatile int8_t x476 = 7;
	uint64_t t116 = 17548LLU;

    t116 = (((x473|x474)&x475)%x476);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x477 = 277U;
	int32_t x478 = INT32_MAX;
	int16_t x479 = INT16_MIN;
	int16_t x480 = 3;
	volatile int32_t t117 = -5;

    t117 = (((x477|x478)&x479)%x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x481 = 554896527339074LLU;
	static uint32_t x483 = 111472765U;
	int64_t x484 = INT64_MIN;

    t118 = (((x481|x482)&x483)%x484);

    if (t118 != 35921989LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x485 = 1948947U;
	int32_t x486 = -1;
	int8_t x487 = -1;

    t119 = (((x485|x486)&x487)%x488);

    if (t119 != 4294967295LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x489 = INT16_MIN;
	uint64_t x490 = 11353102625473LLU;
	volatile uint64_t t120 = 4786230LLU;

    t120 = (((x489|x490)&x491)%x492);

    if (t120 != 7602LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x493 = 12082338U;
	int32_t x494 = INT32_MIN;
	uint8_t x495 = 59U;
	int64_t x496 = INT64_MAX;
	volatile int64_t t121 = -467LL;

    t121 = (((x493|x494)&x495)%x496);

    if (t121 != 34LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x497 = UINT64_MAX;
	int16_t x498 = -6149;
	int8_t x499 = 2;
	static int8_t x500 = INT8_MIN;
	volatile uint64_t t122 = 179LLU;

    t122 = (((x497|x498)&x499)%x500);

    if (t122 != 2LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = -747406290226152LL;
	int16_t x502 = 2704;
	int8_t x503 = INT8_MIN;
	static int64_t x504 = -1LL;
	volatile int64_t t123 = 2094LL;

    t123 = (((x501|x502)&x503)%x504);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x505 = 2004U;
	uint16_t x506 = 1U;
	int64_t x507 = -1LL;
	int8_t x508 = INT8_MIN;
	static volatile int64_t t124 = -26002030LL;

    t124 = (((x505|x506)&x507)%x508);

    if (t124 != 85LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x509 = 3U;
	int64_t x510 = -1LL;
	static int16_t x511 = -1;

    t125 = (((x509|x510)&x511)%x512);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x514 = -1;
	uint16_t x515 = 0U;
	static volatile int64_t x516 = INT64_MIN;

    t126 = (((x513|x514)&x515)%x516);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x518 = -1;
	int64_t x519 = INT64_MIN;
	int8_t x520 = -1;
	int64_t t127 = -908923LL;

    t127 = (((x517|x518)&x519)%x520);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x521 = -177;
	static int32_t x522 = INT32_MIN;
	uint8_t x524 = UINT8_MAX;
	static int32_t t128 = 65434480;

    t128 = (((x521|x522)&x523)%x524);

    if (t128 != 72) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x526 = 13025LL;
	int16_t x527 = 4;
	volatile int64_t t129 = -927036420947LL;

    t129 = (((x525|x526)&x527)%x528);

    if (t129 != 4LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x529 = -10;
	uint16_t x530 = 88U;
	volatile int16_t x531 = -1;

    t130 = (((x529|x530)&x531)%x532);

    if (t130 != -2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x535 = INT32_MAX;
	volatile int16_t x536 = -1;
	volatile int64_t t131 = -251362774393748755LL;

    t131 = (((x533|x534)&x535)%x536);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x537 = INT64_MIN;
	uint16_t x539 = UINT16_MAX;
	volatile int64_t t132 = -153502705763389LL;

    t132 = (((x537|x538)&x539)%x540);

    if (t132 != 255LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = UINT16_MAX;
	static volatile uint16_t x542 = UINT16_MAX;
	static volatile uint8_t x543 = 120U;
	uint16_t x544 = 2128U;

    t133 = (((x541|x542)&x543)%x544);

    if (t133 != 120) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x547 = INT16_MAX;
	volatile uint8_t x548 = 2U;
	int32_t t134 = -4344;

    t134 = (((x545|x546)&x547)%x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x549 = 226;
	volatile int16_t x550 = INT16_MAX;
	volatile int8_t x551 = INT8_MAX;
	int8_t x552 = -1;
	int32_t t135 = -18080123;

    t135 = (((x549|x550)&x551)%x552);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MIN;
	int32_t x555 = INT32_MIN;
	int32_t x556 = 239618131;
	volatile int32_t t136 = 14;

    t136 = (((x553|x554)&x555)%x556);

    if (t136 != -230538600) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = 9LL;
	static uint8_t x562 = 15U;
	int32_t x564 = INT32_MIN;
	volatile int64_t t137 = 369454897598411387LL;

    t137 = (((x561|x562)&x563)%x564);

    if (t137 != 15LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MIN;
	int32_t x567 = INT32_MIN;
	uint64_t t138 = 2853473493000LLU;

    t138 = (((x565|x566)&x567)%x568);

    if (t138 != 25036788439208LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = INT8_MAX;
	int16_t x570 = -9;
	int8_t x572 = 1;

    t139 = (((x569|x570)&x571)%x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = 3U;
	uint64_t x574 = 1523870096657248977LLU;
	volatile int8_t x575 = INT8_MAX;
	int16_t x576 = -1;
	uint64_t t140 = 416276056935502LLU;

    t140 = (((x573|x574)&x575)%x576);

    if (t140 != 83LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x577 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	volatile int64_t t141 = 0LL;

    t141 = (((x577|x578)&x579)%x580);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x582 = UINT32_MAX;
	int8_t x584 = -1;

    t142 = (((x581|x582)&x583)%x584);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x585 = -1;
	uint8_t x586 = 91U;
	int8_t x587 = 1;
	static int32_t x588 = -1808195;

    t143 = (((x585|x586)&x587)%x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = 47;
	uint32_t x590 = 124U;
	int16_t x591 = INT16_MIN;
	uint32_t t144 = 981570U;

    t144 = (((x589|x590)&x591)%x592);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x594 = -1;
	volatile int16_t x595 = INT16_MIN;
	uint64_t x596 = 31LLU;
	uint64_t t145 = 663636LLU;

    t145 = (((x593|x594)&x595)%x596);

    if (t145 != 15LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = -1LL;
	int8_t x599 = INT8_MIN;
	int64_t x600 = 24847405LL;
	int64_t t146 = 517352294833567LL;

    t146 = (((x597|x598)&x599)%x600);

    if (t146 != -128LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x602 = UINT16_MAX;
	int32_t x603 = 95845565;
	volatile uint32_t t147 = 9225U;

    t147 = (((x601|x602)&x603)%x604);

    if (t147 != 95845565U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x605 = -1;
	volatile int8_t x607 = INT8_MIN;
	int16_t x608 = -1;
	volatile int32_t t148 = -17290563;

    t148 = (((x605|x606)&x607)%x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x610 = INT8_MAX;
	int16_t x611 = INT16_MAX;
	volatile uint8_t x612 = UINT8_MAX;
	volatile uint32_t t149 = 648949U;

    t149 = (((x609|x610)&x611)%x612);

    if (t149 != 127U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint8_t x614 = UINT8_MAX;
	int8_t x615 = 1;
	volatile int64_t t150 = 5LL;

    t150 = (((x613|x614)&x615)%x616);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x617 = -1;
	uint32_t x618 = 325U;
	int64_t x619 = INT64_MAX;
	int64_t x620 = 927199696330549938LL;
	volatile int64_t t151 = -238385287719507LL;

    t151 = (((x617|x618)&x619)%x620);

    if (t151 != 4294967295LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = INT8_MIN;
	static uint8_t x622 = UINT8_MAX;
	volatile uint16_t x624 = UINT16_MAX;
	int32_t t152 = 165830;

    t152 = (((x621|x622)&x623)%x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = 21U;
	int8_t x626 = -1;
	uint16_t x628 = 3U;
	volatile int32_t t153 = 1403149;

    t153 = (((x625|x626)&x627)%x628);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x629 = INT64_MIN;
	static int16_t x630 = INT16_MIN;
	int8_t x631 = INT8_MAX;

    t154 = (((x629|x630)&x631)%x632);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x633 = UINT8_MAX;
	int16_t x634 = 39;
	static int32_t x635 = -150;
	int32_t t155 = 519570;

    t155 = (((x633|x634)&x635)%x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x637 = UINT8_MAX;
	uint16_t x638 = 102U;
	uint32_t x639 = 13723U;
	volatile int32_t x640 = 3184143;
	static volatile uint32_t t156 = 5U;

    t156 = (((x637|x638)&x639)%x640);

    if (t156 != 155U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x642 = 6U;
	int16_t x643 = -6740;
	static int32_t x644 = INT32_MIN;
	static volatile int32_t t157 = -6;

    t157 = (((x641|x642)&x643)%x644);

    if (t157 != -32764) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = -1;
	int8_t x646 = 1;
	int32_t x647 = -3;
	int64_t x648 = 7765LL;
	volatile int64_t t158 = 10876271909639LL;

    t158 = (((x645|x646)&x647)%x648);

    if (t158 != -3LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x649 = 4594796985914434LL;
	int8_t x650 = INT8_MIN;
	static uint16_t x652 = UINT16_MAX;
	volatile int64_t t159 = 46928468717LL;

    t159 = (((x649|x650)&x651)%x652);

    if (t159 != -128LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x654 = UINT16_MAX;
	static volatile int32_t x655 = INT32_MIN;
	int64_t x656 = INT64_MIN;
	int64_t t160 = -833484810LL;

    t160 = (((x653|x654)&x655)%x656);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x659 = 1;
	uint32_t x660 = 29U;
	uint64_t t161 = 69231492338351LLU;

    t161 = (((x657|x658)&x659)%x660);

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x661 = 19905819785153LLU;
	volatile uint16_t x662 = 14318U;
	static uint16_t x663 = 5U;
	uint64_t t162 = 3LLU;

    t162 = (((x661|x662)&x663)%x664);

    if (t162 != 5LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x666 = -1;
	volatile uint32_t x667 = 36254U;
	static int16_t x668 = INT16_MIN;
	uint32_t t163 = 29968826U;

    t163 = (((x665|x666)&x667)%x668);

    if (t163 != 36254U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x670 = INT32_MIN;
	static uint32_t x671 = UINT32_MAX;
	static uint32_t t164 = 38142331U;

    t164 = (((x669|x670)&x671)%x672);

    if (t164 != 2147506002U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x673 = INT64_MIN;
	int64_t t165 = -315657686770421516LL;

    t165 = (((x673|x674)&x675)%x676);

    if (t165 != 3LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x678 = INT32_MIN;
	uint64_t x679 = UINT64_MAX;
	int16_t x680 = INT16_MIN;

    t166 = (((x677|x678)&x679)%x680);

    if (t166 != 32767LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x681 = INT32_MIN;
	static uint32_t x682 = 36U;
	int16_t x683 = INT16_MAX;
	int16_t x684 = INT16_MIN;
	uint32_t t167 = 0U;

    t167 = (((x681|x682)&x683)%x684);

    if (t167 != 36U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x685 = INT32_MIN;
	int8_t x686 = -7;
	int64_t x687 = INT64_MIN;
	uint64_t x688 = UINT64_MAX;
	uint64_t t168 = 44192822688693LLU;

    t168 = (((x685|x686)&x687)%x688);

    if (t168 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = -8731LL;
	static uint64_t x690 = 54LLU;
	static int16_t x691 = INT16_MIN;
	int32_t x692 = INT32_MIN;
	volatile uint64_t t169 = 2139LLU;

    t169 = (((x689|x690)&x691)%x692);

    if (t169 != 2147450880LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x693 = UINT32_MAX;
	uint32_t x694 = UINT32_MAX;
	static volatile int64_t x695 = -1LL;
	int8_t x696 = 2;

    t170 = (((x693|x694)&x695)%x696);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MAX;
	int8_t x698 = INT8_MAX;
	static int8_t x700 = INT8_MIN;
	volatile int64_t t171 = 71548872868766LL;

    t171 = (((x697|x698)&x699)%x700);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x701 = 1398698LLU;
	int64_t x702 = INT64_MAX;
	int8_t x703 = INT8_MIN;
	int8_t x704 = -1;
	volatile uint64_t t172 = 228LLU;

    t172 = (((x701|x702)&x703)%x704);

    if (t172 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x709 = INT16_MIN;
	volatile int8_t x710 = 3;
	int8_t x712 = INT8_MIN;
	volatile uint64_t t173 = 913560188551941734LLU;

    t173 = (((x709|x710)&x711)%x712);

    if (t173 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x713 = 115870;
	int8_t x714 = INT8_MAX;
	static int8_t x715 = 1;
	int16_t x716 = INT16_MIN;

    t174 = (((x713|x714)&x715)%x716);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x717 = INT16_MIN;
	uint8_t x719 = 18U;
	uint32_t t175 = 689U;

    t175 = (((x717|x718)&x719)%x720);

    if (t175 != 18U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x721 = INT32_MAX;
	int64_t x722 = -8257695793LL;
	int8_t x723 = INT8_MIN;
	volatile uint64_t x724 = 11LLU;
	uint64_t t176 = 314290731297886304LLU;

    t176 = (((x721|x722)&x723)%x724);

    if (t176 != 3LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x725 = 6U;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = INT16_MIN;
	volatile int32_t x728 = -1;
	static uint64_t t177 = 1760163095870LLU;

    t177 = (((x725|x726)&x727)%x728);

    if (t177 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x730 = 62858710510LL;
	int16_t x732 = INT16_MAX;
	int64_t t178 = -103570798282LL;

    t178 = (((x729|x730)&x731)%x732);

    if (t178 != -17LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x733 = INT16_MIN;
	static int16_t x734 = 59;
	int16_t x735 = INT16_MIN;
	volatile int32_t x736 = -50657;
	volatile int32_t t179 = 6;

    t179 = (((x733|x734)&x735)%x736);

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = 0;
	int64_t x738 = INT64_MAX;
	static int8_t x740 = 54;
	static int64_t t180 = 1167475400LL;

    t180 = (((x737|x738)&x739)%x740);

    if (t180 != 41LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x742 = UINT8_MAX;
	uint16_t x743 = 155U;
	int64_t t181 = -10151424LL;

    t181 = (((x741|x742)&x743)%x744);

    if (t181 != 155LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x745 = 26U;
	static volatile int64_t x746 = -1LL;
	int32_t x748 = -585;

    t182 = (((x745|x746)&x747)%x748);

    if (t182 != 557LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = INT32_MIN;
	uint8_t x754 = 15U;
	int16_t x755 = -699;
	int8_t x756 = INT8_MIN;
	int32_t t183 = 68;

    t183 = (((x753|x754)&x755)%x756);

    if (t183 != -123) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x757 = 12;
	int64_t x758 = 1LL;
	uint16_t x759 = 61U;
	uint16_t x760 = UINT16_MAX;
	int64_t t184 = 16922268LL;

    t184 = (((x757|x758)&x759)%x760);

    if (t184 != 13LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x762 = INT8_MIN;
	static int8_t x763 = INT8_MAX;
	int8_t x764 = -26;
	uint64_t t185 = 1LLU;

    t185 = (((x761|x762)&x763)%x764);

    if (t185 != 127LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x765 = INT8_MIN;
	int16_t x768 = INT16_MIN;
	uint64_t t186 = 47275498291032LLU;

    t186 = (((x765|x766)&x767)%x768);

    if (t186 != 4LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x769 = 4;
	int8_t x770 = INT8_MIN;
	int8_t x771 = 7;
	static int32_t x772 = INT32_MIN;
	volatile int32_t t187 = 38179;

    t187 = (((x769|x770)&x771)%x772);

    if (t187 != 4) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x774 = INT64_MIN;
	int8_t x776 = -1;
	static volatile int64_t t188 = -1127320LL;

    t188 = (((x773|x774)&x775)%x776);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x777 = 921138LLU;
	int16_t x778 = -1;
	volatile int64_t x779 = INT64_MIN;
	int16_t x780 = INT16_MAX;

    t189 = (((x777|x778)&x779)%x780);

    if (t189 != 8LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x781 = INT32_MAX;
	volatile uint64_t x782 = 718202400LLU;
	static volatile int8_t x783 = INT8_MIN;
	int8_t x784 = 7;

    t190 = (((x781|x782)&x783)%x784);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = 3;
	int32_t x786 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t191 = -473706485;

    t191 = (((x785|x786)&x787)%x788);

    if (t191 != 3) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x789 = 29;
	int64_t x790 = -1LL;
	int32_t x791 = INT32_MIN;
	static volatile uint16_t x792 = UINT16_MAX;
	static int64_t t192 = 55440736LL;

    t192 = (((x789|x790)&x791)%x792);

    if (t192 != -32768LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MAX;
	int64_t x794 = -1239302569LL;
	uint32_t x795 = 4U;
	int16_t x796 = INT16_MAX;
	static volatile int64_t t193 = 2184761335268075472LL;

    t193 = (((x793|x794)&x795)%x796);

    if (t193 != 4LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x797 = INT32_MIN;
	int32_t x798 = INT32_MIN;
	volatile int64_t x799 = 0LL;
	uint64_t t194 = 1519149LLU;

    t194 = (((x797|x798)&x799)%x800);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x802 = INT16_MIN;
	int64_t x804 = INT64_MIN;
	volatile int64_t t195 = 298073591LL;

    t195 = (((x801|x802)&x803)%x804);

    if (t195 != 32LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x806 = INT16_MIN;
	int8_t x808 = -1;
	int32_t t196 = 52;

    t196 = (((x805|x806)&x807)%x808);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x809 = 14;
	int32_t x810 = INT32_MAX;
	static volatile uint16_t x811 = 0U;
	int32_t x812 = INT32_MIN;
	int32_t t197 = 5960931;

    t197 = (((x809|x810)&x811)%x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x813 = 7U;
	uint32_t x814 = UINT32_MAX;
	uint32_t x816 = 497400859U;
	uint32_t t198 = 209399892U;

    t198 = (((x813|x814)&x815)%x816);

    if (t198 != 315760296U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x818 = 877471U;
	int32_t x819 = -833;
	volatile uint32_t t199 = 5235724U;

    t199 = (((x817|x818)&x819)%x820);

    if (t199 != 780U) { NG(); } else { ; }
	
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

