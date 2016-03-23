
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

int32_t t0 = 106;
uint8_t x8 = UINT8_MAX;
volatile uint32_t x10 = UINT32_MAX;
uint32_t x12 = 2100U;
volatile int32_t t5 = 893;
volatile uint32_t x27 = 2741735U;
uint32_t x32 = UINT32_MAX;
static int8_t x41 = INT8_MIN;
static int8_t x43 = -48;
static uint8_t x47 = 21U;
volatile int8_t x69 = 62;
int16_t x84 = INT16_MAX;
volatile int32_t t20 = 10504;
static int32_t x91 = INT32_MIN;
volatile int32_t t22 = 25;
int32_t x98 = 316916;
int64_t x102 = 20305407646430297LL;
int32_t x106 = INT32_MAX;
static volatile uint64_t x107 = 730LLU;
uint64_t t27 = 601656736LLU;
int8_t x121 = INT8_MIN;
int8_t x125 = INT8_MIN;
int32_t x139 = -18576014;
uint32_t t34 = 913101U;
uint64_t x144 = 6359928LLU;
static uint64_t x146 = 2098709850509421LLU;
int16_t x147 = -1;
int32_t x148 = -13845223;
volatile int32_t t36 = -1564;
int64_t x154 = INT64_MAX;
static int64_t x155 = -192954174672LL;
uint16_t x158 = UINT16_MAX;
int16_t x159 = INT16_MIN;
int8_t x161 = -1;
volatile int32_t t43 = -72123;
uint64_t x179 = 3601951LLU;
volatile uint64_t t44 = 1027332518LLU;
volatile uint64_t x181 = 1932LLU;
uint64_t x182 = 76637889355054LLU;
static int32_t x186 = INT32_MIN;
int8_t x187 = INT8_MAX;
uint32_t x188 = UINT32_MAX;
int8_t x194 = INT8_MAX;
int16_t x199 = INT16_MIN;
volatile uint16_t x203 = 1411U;
static int64_t x214 = INT64_MIN;
int8_t x215 = INT8_MAX;
int8_t x219 = -22;
volatile int16_t x221 = INT16_MIN;
volatile int8_t x224 = INT8_MIN;
int32_t t55 = 166780593;
volatile int32_t t56 = -9239;
int64_t x234 = INT64_MAX;
int32_t t59 = 0;
static uint16_t x243 = 5U;
uint64_t x245 = UINT64_MAX;
int16_t x248 = -1;
volatile int32_t t61 = -114362350;
uint64_t x250 = 6LLU;
int16_t x255 = INT16_MIN;
int32_t x263 = 245;
static uint64_t x267 = UINT64_MAX;
volatile int64_t t66 = 29521239114LL;
static int16_t x269 = INT16_MIN;
int32_t x270 = INT32_MIN;
volatile int8_t x284 = INT8_MIN;
static int64_t x287 = INT64_MAX;
static volatile int32_t t73 = 449067799;
int16_t x301 = 14651;
uint8_t x306 = 5U;
int64_t x316 = -1LL;
volatile uint16_t x318 = 83U;
volatile uint16_t x323 = 1U;
volatile int32_t t83 = 2009234;
volatile int32_t t84 = 4846;
uint32_t x349 = 40U;
volatile int32_t x351 = -395;
uint64_t x356 = 7154849LLU;
int8_t x358 = -1;
int32_t x363 = -1;
int32_t t93 = -67048;
uint64_t x377 = 3246801513LLU;
int64_t x380 = -1LL;
uint32_t x386 = 0U;
volatile int32_t t96 = -30562888;
uint64_t x389 = 9LLU;
uint16_t x392 = 3U;
uint16_t x393 = 16780U;
volatile int32_t x395 = INT32_MIN;
int32_t t100 = -27;
static int64_t x405 = INT64_MIN;
int8_t x408 = 43;
uint64_t x411 = 16571111641148LLU;
static int32_t t102 = -194856;
static volatile int8_t x418 = INT8_MIN;
static int8_t x427 = -1;
uint8_t x428 = 0U;
volatile uint32_t x440 = 1576787U;
uint32_t x444 = 2997241U;
int8_t x446 = INT8_MAX;
int64_t x449 = INT64_MIN;
int32_t x451 = 12540;
int32_t x462 = INT32_MIN;
uint64_t x464 = 641876LLU;
uint32_t x471 = 269403U;
static volatile int8_t x474 = INT8_MAX;
static volatile uint16_t x488 = 0U;
int32_t x489 = INT32_MIN;
int32_t t122 = 56;
volatile uint64_t t123 = 1LLU;
uint16_t x502 = 251U;
volatile int8_t x503 = 0;
int16_t x504 = INT16_MIN;
uint16_t x505 = 2U;
int8_t x507 = INT8_MIN;
volatile int64_t t126 = -473673535201687LL;
int16_t x509 = 1;
int8_t x514 = INT8_MAX;
volatile int16_t x516 = INT16_MIN;
int32_t t128 = -418086151;
int32_t t131 = 29;
uint32_t x529 = UINT32_MAX;
volatile uint16_t x535 = 1U;
int8_t x542 = INT8_MIN;
int32_t t137 = -534819452;
int32_t x554 = -17737;
uint64_t x556 = UINT64_MAX;
volatile int8_t x567 = -1;
uint64_t x568 = UINT64_MAX;
uint64_t t141 = UINT64_MAX;
int32_t x579 = -23940;
int32_t x581 = INT32_MIN;
volatile uint64_t x582 = 17093255137736521LLU;
int16_t x583 = -1;
static volatile int32_t t146 = 414;
int8_t x594 = -1;
volatile uint64_t x598 = UINT64_MAX;
volatile int32_t t149 = -1861754;
uint64_t x607 = 183173236501423733LLU;
uint32_t x612 = 73U;
uint32_t t152 = 65069787U;
volatile int32_t x616 = 0;
int64_t x620 = -1LL;
int8_t x637 = 2;
uint8_t x638 = 1U;
uint16_t x640 = 4U;
volatile int32_t t159 = -839184;
int64_t x650 = INT64_MIN;
volatile int32_t t162 = -2;
int32_t x658 = INT32_MIN;
int8_t x663 = INT8_MIN;
int16_t x667 = INT16_MAX;
static volatile int32_t t168 = -2;
int64_t x678 = INT64_MIN;
int8_t x680 = INT8_MIN;
int32_t x683 = INT32_MAX;
int8_t x687 = -1;
static int32_t x693 = -1;
int16_t x696 = -1;
volatile int32_t t173 = -246204;
uint8_t x699 = 1U;
volatile int32_t t175 = -472775;
int32_t x709 = INT32_MIN;
int64_t x715 = -1LL;
int64_t x717 = -26LL;
uint32_t x719 = 60U;
int32_t x720 = INT32_MAX;
uint16_t x722 = 4935U;
static int64_t t180 = -4002657273484LL;
static volatile int8_t x727 = INT8_MIN;
static volatile uint16_t x728 = 28397U;
int8_t x731 = 0;
int8_t x734 = INT8_MIN;
volatile int32_t t183 = -3;
static uint64_t x738 = 221531004LLU;
static volatile int32_t t184 = -1;
int8_t x742 = -1;
int32_t t189 = 1;
int32_t x769 = -1;
int32_t t192 = 31040;
uint16_t x773 = 1U;
int64_t x774 = 45062042LL;
int32_t x778 = INT32_MIN;
int64_t x785 = -38LL;
volatile uint32_t x786 = UINT32_MAX;
uint8_t x787 = 1U;
int32_t x796 = -6628;
uint8_t x799 = 5U;
uint64_t t199 = 1123696LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	uint8_t x3 = UINT8_MAX;
	static int16_t x4 = -1;

    t0 = (((x1^x2)==x3)+x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	static volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t t1 = -4369046;

    t1 = (((x5^x6)==x7)+x8);

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = UINT16_MAX;
	static int64_t x11 = INT64_MIN;
	uint32_t t2 = 1943172209U;

    t2 = (((x9^x10)==x11)+x12);

    if (t2 != 2100U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	static uint16_t x15 = UINT16_MAX;
	uint64_t x16 = 1316378504663114LLU;
	volatile uint64_t t3 = 51442535716271309LLU;

    t3 = (((x13^x14)==x15)+x16);

    if (t3 != 1316378504663114LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MAX;
	static uint32_t x19 = UINT32_MAX;
	static int32_t x20 = -178839057;
	int32_t t4 = 941736;

    t4 = (((x17^x18)==x19)+x20);

    if (t4 != -178839057) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = 3259U;
	uint16_t x22 = 221U;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MAX;

    t5 = (((x21^x22)==x23)+x24);

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = 547093748511LL;
	int64_t x26 = 204997400935783006LL;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -85;

    t6 = (((x25^x26)==x27)+x28);

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x29 = INT8_MIN;
	volatile int32_t x30 = INT32_MAX;
	uint16_t x31 = UINT16_MAX;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (((x29^x30)==x31)+x32);

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 66U;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = 5;
	static int64_t x36 = -1LL;
	int64_t t8 = -1142297821LL;

    t8 = (((x33^x34)==x35)+x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 52;
	uint64_t x38 = 1968LLU;
	uint64_t x39 = 94892408579233269LLU;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

    t9 = (((x37^x38)==x39)+x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 1643U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 0;

    t10 = (((x41^x42)==x43)+x44);

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = -765;
	uint64_t x48 = 432140253924LLU;
	uint64_t t11 = 7770549LLU;

    t11 = (((x45^x46)==x47)+x48);

    if (t11 != 432140253924LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 6446LLU;
	int64_t x50 = -1LL;
	int32_t x51 = INT32_MAX;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = INT64_MAX;

    t12 = (((x49^x50)==x51)+x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	static volatile int16_t x54 = INT16_MIN;
	uint8_t x55 = 10U;
	volatile int32_t x56 = INT32_MAX;
	static int32_t t13 = INT32_MAX;

    t13 = (((x53^x54)==x55)+x56);

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x57 = INT32_MIN;
	static int16_t x58 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = (((x57^x58)==x59)+x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 0;
	int32_t x62 = 376978;
	volatile int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -1;

    t15 = (((x61^x62)==x63)+x64);

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 6366758840570164LL;
	static int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	static int64_t x68 = INT64_MIN;
	int64_t t16 = INT64_MIN;

    t16 = (((x65^x66)==x67)+x68);

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = 24317U;
	static int8_t x71 = INT8_MAX;
	int32_t x72 = INT32_MAX;
	int32_t t17 = INT32_MAX;

    t17 = (((x69^x70)==x71)+x72);

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = -1LL;
	static int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	int32_t x76 = 100728158;
	volatile int32_t t18 = 14;

    t18 = (((x73^x74)==x75)+x76);

    if (t18 != 100728158) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = 28;
	int32_t x78 = 163890;
	int32_t x79 = -15;
	static int16_t x80 = 1;
	volatile int32_t t19 = 0;

    t19 = (((x77^x78)==x79)+x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 812565U;
	int64_t x82 = 4LL;
	int64_t x83 = -1LL;

    t20 = (((x81^x82)==x83)+x84);

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 35U;
	int32_t x86 = -262;
	int16_t x87 = 1947;
	uint32_t x88 = 8305115U;
	volatile uint32_t t21 = 6138U;

    t21 = (((x85^x86)==x87)+x88);

    if (t21 != 8305115U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	static volatile int16_t x92 = INT16_MIN;

    t22 = (((x89^x90)==x91)+x92);

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 41U;
	volatile int32_t x94 = INT32_MAX;
	int32_t x95 = -90031288;
	int32_t x96 = -1;
	volatile int32_t t23 = -22124670;

    t23 = (((x93^x94)==x95)+x96);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 1513U;
	int16_t x99 = -1;
	uint16_t x100 = 5U;
	int32_t t24 = 202572;

    t24 = (((x97^x98)==x99)+x100);

    if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint16_t x103 = UINT16_MAX;
	volatile int32_t x104 = INT32_MIN;
	int32_t t25 = INT32_MIN;

    t25 = (((x101^x102)==x103)+x104);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 17U;
	int64_t x108 = INT64_MIN;
	int64_t t26 = INT64_MIN;

    t26 = (((x105^x106)==x107)+x108);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int8_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	static uint64_t x112 = 1656LLU;

    t27 = (((x109^x110)==x111)+x112);

    if (t27 != 1656LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 236U;
	uint32_t x114 = 88U;
	int32_t x115 = -1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = INT32_MIN;

    t28 = (((x113^x114)==x115)+x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = 0;

    t29 = (((x117^x118)==x119)+x120);

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 28U;
	volatile int16_t x123 = -1;
	int64_t x124 = -15661528288130367LL;
	static volatile int64_t t30 = 1LL;

    t30 = (((x121^x122)==x123)+x124);

    if (t30 != -15661528288130367LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -26;
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	volatile int64_t t31 = INT64_MIN;

    t31 = (((x125^x126)==x127)+x128);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	static int64_t x130 = 42LL;
	int32_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -27;

    t32 = (((x129^x130)==x131)+x132);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 102U;
	uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

    t33 = (((x133^x134)==x135)+x136);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 3;
	volatile int32_t x138 = -1;
	static uint32_t x140 = 44363208U;

    t34 = (((x137^x138)==x139)+x140);

    if (t34 != 44363208U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MAX;
	int32_t x143 = -1;
	volatile uint64_t t35 = 514583401734984760LLU;

    t35 = (((x141^x142)==x143)+x144);

    if (t35 != 6359928LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;

    t36 = (((x145^x146)==x147)+x148);

    if (t36 != -13845223) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	int64_t x150 = -2936879967928682LL;
	int64_t x151 = -1LL;
	uint16_t x152 = 2U;
	static volatile int32_t t37 = 1503092;

    t37 = (((x149^x150)==x151)+x152);

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	uint64_t x156 = 389151834LLU;
	static uint64_t t38 = 52779570LLU;

    t38 = (((x153^x154)==x155)+x156);

    if (t38 != 389151834LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 1684245;
	static int32_t x160 = 323;
	volatile int32_t t39 = -220877;

    t39 = (((x157^x158)==x159)+x160);

    if (t39 != 323) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	int8_t x164 = -1;
	volatile int32_t t40 = -32;

    t40 = (((x161^x162)==x163)+x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 1U;
	static uint8_t x166 = 1U;
	volatile int64_t x167 = INT64_MAX;
	int64_t x168 = -1LL;
	int64_t t41 = -43612639LL;

    t41 = (((x165^x166)==x167)+x168);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	uint16_t x170 = 8U;
	static int16_t x171 = INT16_MIN;
	int16_t x172 = -12244;
	static volatile int32_t t42 = -2;

    t42 = (((x169^x170)==x171)+x172);

    if (t42 != -12244) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	uint8_t x176 = 1U;

    t43 = (((x173^x174)==x175)+x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 438;
	int16_t x178 = INT16_MIN;
	static uint64_t x180 = 6113018LLU;

    t44 = (((x177^x178)==x179)+x180);

    if (t44 != 6113018LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -49651433;

    t45 = (((x181^x182)==x183)+x184);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x185 = 0U;
	static volatile uint32_t t46 = UINT32_MAX;

    t46 = (((x185^x186)==x187)+x188);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 2467LLU;
	int8_t x190 = 25;
	static volatile uint16_t x191 = 30942U;
	static volatile uint16_t x192 = 0U;
	volatile int32_t t47 = 1;

    t47 = (((x189^x190)==x191)+x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 9062U;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = -1;
	static int32_t t48 = 50613;

    t48 = (((x193^x194)==x195)+x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	uint64_t x198 = 2076LLU;
	uint64_t x200 = 57507527834117LLU;
	static uint64_t t49 = 1987426591691LLU;

    t49 = (((x197^x198)==x199)+x200);

    if (t49 != 57507527834117LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint64_t x201 = 1670LLU;
	uint16_t x202 = 0U;
	static uint16_t x204 = 2U;
	static int32_t t50 = 0;

    t50 = (((x201^x202)==x203)+x204);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x205 = INT64_MIN;
	static int8_t x206 = INT8_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = -1;
	volatile int32_t t51 = -1266966;

    t51 = (((x205^x206)==x207)+x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 32822920088340LLU;
	static int32_t x210 = INT32_MIN;
	uint32_t x211 = UINT32_MAX;
	static int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -48;

    t52 = (((x209^x210)==x211)+x212);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = 1;
	volatile int32_t x216 = -1;
	int32_t t53 = 1964;

    t53 = (((x213^x214)==x215)+x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	static int16_t x218 = INT16_MAX;
	volatile int16_t x220 = 2304;
	static volatile int32_t t54 = 3353;

    t54 = (((x217^x218)==x219)+x220);

    if (t54 != 2304) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x222 = -1;
	int8_t x223 = -1;

    t55 = (((x221^x222)==x223)+x224);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = 0U;
	volatile int8_t x226 = INT8_MIN;
	static uint64_t x227 = UINT64_MAX;
	volatile int32_t x228 = -17664071;

    t56 = (((x225^x226)==x227)+x228);

    if (t56 != -17664071) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	static int8_t x230 = INT8_MAX;
	uint8_t x231 = 24U;
	volatile int32_t x232 = -1;
	int32_t t57 = -3087;

    t57 = (((x229^x230)==x231)+x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = 845;
	int8_t x235 = 1;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t58 = INT64_MIN;

    t58 = (((x233^x234)==x235)+x236);

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	int8_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	static uint8_t x240 = 56U;

    t59 = (((x237^x238)==x239)+x240);

    if (t59 != 56) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 59367LL;
	int32_t x242 = INT32_MIN;
	int8_t x244 = -5;
	int32_t t60 = -1;

    t60 = (((x241^x242)==x243)+x244);

    if (t60 != -5) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = 0;
	int16_t x247 = -1;

    t61 = (((x245^x246)==x247)+x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MAX;
	int8_t x251 = -1;
	static volatile uint64_t x252 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

    t62 = (((x249^x250)==x251)+x252);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	uint64_t x254 = 31815160197380064LLU;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = INT64_MIN;

    t63 = (((x253^x254)==x255)+x256);

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -1;
	uint8_t x258 = 0U;
	int8_t x259 = INT8_MAX;
	int16_t x260 = INT16_MAX;
	static volatile int32_t t64 = 1336;

    t64 = (((x257^x258)==x259)+x260);

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static int8_t x262 = 10;
	int64_t x264 = INT64_MIN;
	static int64_t t65 = INT64_MIN;

    t65 = (((x261^x262)==x263)+x264);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 16790033147LL;
	volatile int8_t x266 = INT8_MIN;
	int64_t x268 = -10256LL;

    t66 = (((x265^x266)==x267)+x268);

    if (t66 != -10256LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x271 = 8665680299185LL;
	uint16_t x272 = 4U;
	static volatile int32_t t67 = -6270718;

    t67 = (((x269^x270)==x271)+x272);

    if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	int16_t x275 = -1002;
	static uint8_t x276 = 18U;
	int32_t t68 = -171;

    t68 = (((x273^x274)==x275)+x276);

    if (t68 != 18) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 1U;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = -5;
	uint32_t x280 = 3U;
	static uint32_t t69 = 2445453U;

    t69 = (((x277^x278)==x279)+x280);

    if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = INT8_MAX;
	volatile int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	int32_t t70 = 14422;

    t70 = (((x281^x282)==x283)+x284);

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static uint8_t x286 = 30U;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 87320444;

    t71 = (((x285^x286)==x287)+x288);

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = -3LL;
	uint16_t x290 = 31225U;
	int32_t x291 = INT32_MAX;
	static int8_t x292 = INT8_MAX;
	int32_t t72 = -897106718;

    t72 = (((x289^x290)==x291)+x292);

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x293 = -3;
	static int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MAX;
	uint8_t x296 = 0U;

    t73 = (((x293^x294)==x295)+x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 1;
	int64_t x298 = 126707LL;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

    t74 = (((x297^x298)==x299)+x300);

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x302 = INT8_MIN;
	uint16_t x303 = 2U;
	volatile int32_t x304 = 15;
	volatile int32_t t75 = 116;

    t75 = (((x301^x302)==x303)+x304);

    if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int32_t x305 = INT32_MIN;
	int16_t x307 = -1;
	volatile uint64_t x308 = 11161655614333759LLU;
	static uint64_t t76 = 67604034389758LLU;

    t76 = (((x305^x306)==x307)+x308);

    if (t76 != 11161655614333759LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MAX;
	uint32_t x310 = 1032U;
	int32_t x311 = 0;
	uint16_t x312 = 247U;
	int32_t t77 = 430037937;

    t77 = (((x309^x310)==x311)+x312);

    if (t77 != 247) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 428U;
	int8_t x314 = -47;
	volatile int32_t x315 = 9;
	int64_t t78 = -210213300439LL;

    t78 = (((x313^x314)==x315)+x316);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	uint32_t x319 = 28U;
	uint16_t x320 = 83U;
	static volatile int32_t t79 = -1513333;

    t79 = (((x317^x318)==x319)+x320);

    if (t79 != 83) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MAX;
	static uint64_t x322 = 65161563LLU;
	static int32_t x324 = INT32_MIN;
	static int32_t t80 = INT32_MIN;

    t80 = (((x321^x322)==x323)+x324);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	static int32_t x326 = 115;
	uint8_t x327 = 24U;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 12310;

    t81 = (((x325^x326)==x327)+x328);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	int32_t x330 = 3755177;
	uint64_t x331 = UINT64_MAX;
	static uint16_t x332 = 998U;
	static volatile int32_t t82 = -1;

    t82 = (((x329^x330)==x331)+x332);

    if (t82 != 998) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int64_t x334 = INT64_MIN;
	volatile int64_t x335 = INT64_MAX;
	static int16_t x336 = INT16_MIN;

    t83 = (((x333^x334)==x335)+x336);

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	static int16_t x338 = -1;
	int16_t x339 = -12076;
	int32_t x340 = 24596583;

    t84 = (((x337^x338)==x339)+x340);

    if (t84 != 24596583) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = 1;
	static volatile uint8_t x344 = 15U;
	int32_t t85 = 839696;

    t85 = (((x341^x342)==x343)+x344);

    if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = -1;
	int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 356096;

    t86 = (((x345^x346)==x347)+x348);

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -2560;

    t87 = (((x349^x350)==x351)+x352);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 1;
	static int8_t x354 = 54;
	uint8_t x355 = 1U;
	volatile uint64_t t88 = 186351858900LLU;

    t88 = (((x353^x354)==x355)+x356);

    if (t88 != 7154849LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x357 = -1LL;
	int16_t x359 = -1;
	uint16_t x360 = 1663U;
	static volatile int32_t t89 = 19;

    t89 = (((x357^x358)==x359)+x360);

    if (t89 != 1663) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -657080563;
	volatile int32_t x362 = 0;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t90 = -3;

    t90 = (((x361^x362)==x363)+x364);

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -2;
	volatile uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MAX;
	static int16_t x368 = 1;
	int32_t t91 = 23;

    t91 = (((x365^x366)==x367)+x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 0U;
	int64_t x370 = INT64_MIN;
	uint16_t x371 = 0U;
	int32_t x372 = -13380961;
	volatile int32_t t92 = 18;

    t92 = (((x369^x370)==x371)+x372);

    if (t92 != -13380961) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MIN;
	static int8_t x375 = 4;
	int32_t x376 = 35124;

    t93 = (((x373^x374)==x375)+x376);

    if (t93 != 35124) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x378 = 14;
	int16_t x379 = INT16_MIN;
	int64_t t94 = 1364007LL;

    t94 = (((x377^x378)==x379)+x380);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = INT8_MAX;
	volatile uint64_t x382 = 40282774597LLU;
	int64_t x383 = 414014164494LL;
	volatile uint32_t x384 = UINT32_MAX;
	uint32_t t95 = UINT32_MAX;

    t95 = (((x381^x382)==x383)+x384);

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = 18U;
	static int8_t x387 = INT8_MIN;
	int8_t x388 = 0;

    t96 = (((x385^x386)==x387)+x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x390 = UINT16_MAX;
	static int32_t x391 = -26658742;
	int32_t t97 = 363154784;

    t97 = (((x389^x390)==x391)+x392);

    if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = 63;
	int64_t x396 = INT64_MAX;
	static volatile int64_t t98 = INT64_MAX;

    t98 = (((x393^x394)==x395)+x396);

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint8_t x398 = 19U;
	static int16_t x399 = INT16_MIN;
	uint8_t x400 = 1U;
	static volatile int32_t t99 = 1;

    t99 = (((x397^x398)==x399)+x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = -1;
	uint32_t x402 = 23488253U;
	static int64_t x403 = INT64_MIN;
	volatile int8_t x404 = 20;

    t100 = (((x401^x402)==x403)+x404);

    if (t100 != 20) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = 259;
	int32_t x407 = INT32_MAX;
	static volatile int32_t t101 = -11;

    t101 = (((x405^x406)==x407)+x408);

    if (t101 != 43) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	static int8_t x410 = INT8_MIN;
	volatile int16_t x412 = -1091;

    t102 = (((x409^x410)==x411)+x412);

    if (t102 != -1091) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	volatile uint32_t x414 = 3737U;
	static uint16_t x415 = UINT16_MAX;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t103 = 176;

    t103 = (((x413^x414)==x415)+x416);

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x419 = 25U;
	int16_t x420 = INT16_MAX;
	volatile int32_t t104 = -3670072;

    t104 = (((x417^x418)==x419)+x420);

    if (t104 != 32767) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = 142;
	static volatile int64_t x424 = -1LL;
	volatile int64_t t105 = -1837126925308LL;

    t105 = (((x421^x422)==x423)+x424);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 19549U;
	volatile int32_t x426 = INT32_MIN;
	volatile int32_t t106 = 5501930;

    t106 = (((x425^x426)==x427)+x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x429 = INT8_MIN;
	int64_t x430 = INT64_MAX;
	static int32_t x431 = -1372;
	static uint16_t x432 = 1U;
	static int32_t t107 = -1;

    t107 = (((x429^x430)==x431)+x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	static uint32_t x434 = 128441859U;
	uint64_t x435 = 91720950895557LLU;
	int64_t x436 = -86701805422907LL;
	static int64_t t108 = -16397422044LL;

    t108 = (((x433^x434)==x435)+x436);

    if (t108 != -86701805422907LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int32_t x438 = 508819040;
	int32_t x439 = -74382;
	static volatile uint32_t t109 = 1139U;

    t109 = (((x437^x438)==x439)+x440);

    if (t109 != 1576787U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	volatile uint64_t x442 = 99545612LLU;
	int16_t x443 = INT16_MAX;
	static volatile uint32_t t110 = 3624U;

    t110 = (((x441^x442)==x443)+x444);

    if (t110 != 2997241U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	int32_t x447 = 476360;
	volatile int32_t x448 = 2343375;
	int32_t t111 = -63589546;

    t111 = (((x445^x446)==x447)+x448);

    if (t111 != 2343375) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x450 = 5U;
	volatile int8_t x452 = -1;
	volatile int32_t t112 = -113;

    t112 = (((x449^x450)==x451)+x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 1288;
	volatile uint8_t x454 = 1U;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MIN;
	volatile int32_t t113 = 31;

    t113 = (((x453^x454)==x455)+x456);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = 27334391649366LL;
	int16_t x458 = INT16_MIN;
	volatile uint64_t x459 = 707796260LLU;
	int16_t x460 = -7117;
	volatile int32_t t114 = 19336909;

    t114 = (((x457^x458)==x459)+x460);

    if (t114 != -7117) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	static uint16_t x463 = 91U;
	uint64_t t115 = 225546LLU;

    t115 = (((x461^x462)==x463)+x464);

    if (t115 != 641876LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x465 = 454294384U;
	static uint64_t x466 = 1047LLU;
	volatile uint64_t x467 = 242853LLU;
	uint64_t x468 = UINT64_MAX;
	uint64_t t116 = UINT64_MAX;

    t116 = (((x465^x466)==x467)+x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 23894704;
	int64_t x470 = -350085463LL;
	int8_t x472 = -2;
	volatile int32_t t117 = 85;

    t117 = (((x469^x470)==x471)+x472);

    if (t117 != -2) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 6629692159LLU;
	int32_t x475 = INT32_MIN;
	static uint64_t x476 = UINT64_MAX;
	static uint64_t t118 = UINT64_MAX;

    t118 = (((x473^x474)==x475)+x476);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	int64_t x478 = -667202804673226LL;
	int16_t x479 = INT16_MIN;
	volatile uint64_t x480 = 43518LLU;
	static uint64_t t119 = 2723472577LLU;

    t119 = (((x477^x478)==x479)+x480);

    if (t119 != 43518LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x481 = 29U;
	uint32_t x482 = 157268292U;
	static uint32_t x483 = UINT32_MAX;
	int32_t x484 = INT32_MAX;
	int32_t t120 = INT32_MAX;

    t120 = (((x481^x482)==x483)+x484);

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = 309627321U;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = INT32_MIN;
	static int32_t t121 = 2304;

    t121 = (((x485^x486)==x487)+x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = 52U;
	static volatile int16_t x491 = INT16_MAX;
	volatile int16_t x492 = -1;

    t122 = (((x489^x490)==x491)+x492);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int64_t x493 = INT64_MAX;
	int32_t x494 = -1;
	static volatile int16_t x495 = INT16_MIN;
	volatile uint64_t x496 = 106273279435388LLU;

    t123 = (((x493^x494)==x495)+x496);

    if (t123 != 106273279435388LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = INT8_MIN;
	int32_t x498 = 274;
	uint64_t x499 = 276340064907615LLU;
	static uint32_t x500 = 128871U;
	static uint32_t t124 = 488037U;

    t124 = (((x497^x498)==x499)+x500);

    if (t124 != 128871U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 31623U;
	int32_t t125 = 238793664;

    t125 = (((x501^x502)==x503)+x504);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x506 = INT8_MAX;
	int64_t x508 = -1LL;

    t126 = (((x505^x506)==x507)+x508);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x510 = -1;
	uint16_t x511 = 3U;
	int16_t x512 = INT16_MAX;
	int32_t t127 = -13;

    t127 = (((x509^x510)==x511)+x512);

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	uint16_t x515 = UINT16_MAX;

    t128 = (((x513^x514)==x515)+x516);

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	int64_t x518 = INT64_MIN;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 131744U;
	volatile uint32_t t129 = 98176U;

    t129 = (((x517^x518)==x519)+x520);

    if (t129 != 131744U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x521 = 13U;
	uint16_t x522 = 20U;
	volatile uint64_t x523 = UINT64_MAX;
	int32_t x524 = -1;
	volatile int32_t t130 = -31;

    t130 = (((x521^x522)==x523)+x524);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	uint16_t x526 = 10248U;
	int32_t x527 = INT32_MIN;
	uint8_t x528 = 2U;

    t131 = (((x525^x526)==x527)+x528);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	volatile int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t132 = 8087990;

    t132 = (((x529^x530)==x531)+x532);

    if (t132 != -32768) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MIN;
	int32_t x536 = 0;
	volatile int32_t t133 = 1;

    t133 = (((x533^x534)==x535)+x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 420U;
	uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MIN;
	int32_t x540 = INT32_MAX;
	static volatile int32_t t134 = INT32_MAX;

    t134 = (((x537^x538)==x539)+x540);

    if (t134 != INT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = UINT8_MAX;
	volatile int32_t x543 = -1;
	int16_t x544 = 1694;
	int32_t t135 = -102656122;

    t135 = (((x541^x542)==x543)+x544);

    if (t135 != 1694) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = 1661645471024LLU;
	static volatile int64_t x546 = INT64_MIN;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = 34952445627343555LLU;
	volatile uint64_t t136 = 14791513LLU;

    t136 = (((x545^x546)==x547)+x548);

    if (t136 != 34952445627343555LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	uint32_t x550 = UINT32_MAX;
	volatile int64_t x551 = -1LL;
	uint16_t x552 = UINT16_MAX;

    t137 = (((x549^x550)==x551)+x552);

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = -1;
	uint64_t x555 = 2742986160LLU;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (((x553^x554)==x555)+x556);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	static int32_t x558 = INT32_MIN;
	static int32_t x559 = INT32_MAX;
	int64_t x560 = 226LL;
	int64_t t139 = 209842741482921LL;

    t139 = (((x557^x558)==x559)+x560);

    if (t139 != 226LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 2777U;
	static int16_t x562 = -1;
	int32_t x563 = INT32_MIN;
	volatile uint64_t x564 = UINT64_MAX;
	volatile uint64_t t140 = UINT64_MAX;

    t140 = (((x561^x562)==x563)+x564);

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 3242351;
	int32_t x566 = -1;

    t141 = (((x565^x566)==x567)+x568);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MIN;
	int64_t x570 = -322907596806746005LL;
	static uint64_t x571 = UINT64_MAX;
	static volatile uint16_t x572 = 1U;
	int32_t t142 = 4798685;

    t142 = (((x569^x570)==x571)+x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	volatile uint32_t x574 = UINT32_MAX;
	int16_t x575 = -1;
	volatile uint8_t x576 = 108U;
	volatile int32_t t143 = 127;

    t143 = (((x573^x574)==x575)+x576);

    if (t143 != 108) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	volatile uint64_t x578 = UINT64_MAX;
	int16_t x580 = INT16_MAX;
	static volatile int32_t t144 = -93;

    t144 = (((x577^x578)==x579)+x580);

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x584 = INT32_MAX;
	volatile int32_t t145 = INT32_MAX;

    t145 = (((x581^x582)==x583)+x584);

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x585 = UINT64_MAX;
	int64_t x586 = 20253366315097LL;
	static uint32_t x587 = 855875610U;
	static int8_t x588 = 25;

    t146 = (((x585^x586)==x587)+x588);

    if (t146 != 25) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	uint32_t x590 = 107U;
	int64_t x591 = INT64_MAX;
	int32_t x592 = -8;
	static volatile int32_t t147 = -3;

    t147 = (((x589^x590)==x591)+x592);

    if (t147 != -8) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = -1;
	int32_t x595 = INT32_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -2;

    t148 = (((x593^x594)==x595)+x596);

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x597 = 8U;
	int16_t x599 = INT16_MAX;
	int32_t x600 = -1;

    t149 = (((x597^x598)==x599)+x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = 1018;
	uint64_t x602 = 7832200393LLU;
	static int8_t x603 = 1;
	int32_t x604 = 1998;
	volatile int32_t t150 = 0;

    t150 = (((x601^x602)==x603)+x604);

    if (t150 != 1998) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 1;
	static int64_t x606 = INT64_MAX;
	uint8_t x608 = UINT8_MAX;
	int32_t t151 = 330349619;

    t151 = (((x605^x606)==x607)+x608);

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 1433152;
	volatile int64_t x610 = INT64_MIN;
	uint64_t x611 = 4857466161111LLU;

    t152 = (((x609^x610)==x611)+x612);

    if (t152 != 73U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = UINT16_MAX;
	static volatile uint8_t x614 = 0U;
	int8_t x615 = INT8_MIN;
	int32_t t153 = -15;

    t153 = (((x613^x614)==x615)+x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 0U;
	uint8_t x618 = 4U;
	uint32_t x619 = 8122U;
	volatile int64_t t154 = 63401933831LL;

    t154 = (((x617^x618)==x619)+x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MIN;
	int32_t x622 = 6920;
	volatile uint8_t x623 = 0U;
	int8_t x624 = -1;
	volatile int32_t t155 = 123370;

    t155 = (((x621^x622)==x623)+x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	uint8_t x626 = 78U;
	int64_t x627 = INT64_MAX;
	volatile int64_t x628 = INT64_MIN;
	volatile int64_t t156 = INT64_MIN;

    t156 = (((x625^x626)==x627)+x628);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = -40;
	int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MAX;
	int8_t x632 = -1;
	static int32_t t157 = -1;

    t157 = (((x629^x630)==x631)+x632);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1731;
	uint8_t x634 = 0U;
	volatile int64_t x635 = 167073133770195LL;
	int16_t x636 = INT16_MIN;
	int32_t t158 = 3;

    t158 = (((x633^x634)==x635)+x636);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x639 = 992244U;

    t159 = (((x637^x638)==x639)+x640);

    if (t159 != 4) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x641 = 39U;
	uint16_t x642 = UINT16_MAX;
	int16_t x643 = INT16_MIN;
	int64_t x644 = -1LL;
	static volatile int64_t t160 = -733829LL;

    t160 = (((x641^x642)==x643)+x644);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = 1411452200151813150LLU;
	int32_t x646 = -144236;
	int32_t x647 = INT32_MAX;
	static volatile int64_t x648 = 23LL;
	volatile int64_t t161 = -4729LL;

    t161 = (((x645^x646)==x647)+x648);

    if (t161 != 23LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = INT16_MAX;
	int16_t x651 = -1;
	volatile int8_t x652 = INT8_MAX;

    t162 = (((x649^x650)==x651)+x652);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = -39LL;
	uint8_t x654 = 11U;
	int16_t x655 = -1;
	volatile int16_t x656 = INT16_MIN;
	int32_t t163 = 37613957;

    t163 = (((x653^x654)==x655)+x656);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x657 = INT64_MIN;
	uint32_t x659 = 5710U;
	int8_t x660 = -1;
	volatile int32_t t164 = 10;

    t164 = (((x657^x658)==x659)+x660);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 255U;
	uint32_t x662 = 2327526U;
	uint8_t x664 = UINT8_MAX;
	int32_t t165 = 1471;

    t165 = (((x661^x662)==x663)+x664);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 32393U;
	static volatile uint64_t x666 = 27940676541LLU;
	int32_t x668 = 425;
	volatile int32_t t166 = -11929005;

    t166 = (((x665^x666)==x667)+x668);

    if (t166 != 425) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x669 = 59U;
	static volatile int16_t x670 = INT16_MAX;
	static uint64_t x671 = UINT64_MAX;
	uint32_t x672 = UINT32_MAX;
	uint32_t t167 = UINT32_MAX;

    t167 = (((x669^x670)==x671)+x672);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = 1536U;
	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MAX;
	int16_t x676 = INT16_MIN;

    t168 = (((x673^x674)==x675)+x676);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 170392U;
	volatile int16_t x679 = -1;
	int32_t t169 = -96196734;

    t169 = (((x677^x678)==x679)+x680);

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	int32_t x682 = INT32_MIN;
	static int8_t x684 = -1;
	volatile int32_t t170 = 4923;

    t170 = (((x681^x682)==x683)+x684);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 1U;
	volatile int32_t x686 = INT32_MAX;
	uint16_t x688 = 125U;
	int32_t t171 = 123727;

    t171 = (((x685^x686)==x687)+x688);

    if (t171 != 125) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MIN;
	static volatile uint16_t x690 = 22238U;
	int16_t x691 = INT16_MAX;
	static uint8_t x692 = UINT8_MAX;
	volatile int32_t t172 = -989;

    t172 = (((x689^x690)==x691)+x692);

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x694 = INT8_MIN;
	static uint8_t x695 = 18U;

    t173 = (((x693^x694)==x695)+x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	static volatile uint8_t x698 = UINT8_MAX;
	static int16_t x700 = INT16_MAX;
	int32_t t174 = 798575791;

    t174 = (((x697^x698)==x699)+x700);

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	int64_t x702 = 34159LL;
	int64_t x703 = INT64_MAX;
	static int16_t x704 = 5875;

    t175 = (((x701^x702)==x703)+x704);

    if (t175 != 5875) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = UINT64_MAX;
	static uint64_t x706 = 255572644510431925LLU;
	volatile int8_t x707 = 0;
	static int64_t x708 = 39696LL;
	int64_t t176 = 426305851477072LL;

    t176 = (((x705^x706)==x707)+x708);

    if (t176 != 39696LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MAX;
	static int16_t x712 = -1;
	volatile int32_t t177 = -672031709;

    t177 = (((x709^x710)==x711)+x712);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x713 = -1;
	volatile int32_t x714 = -3;
	static int16_t x716 = 9;
	static volatile int32_t t178 = -148166;

    t178 = (((x713^x714)==x715)+x716);

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x718 = INT8_MIN;
	volatile int32_t t179 = INT32_MAX;

    t179 = (((x717^x718)==x719)+x720);

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = 136023LLU;
	volatile int32_t x723 = -1;
	static int64_t x724 = 2214436LL;

    t180 = (((x721^x722)==x723)+x724);

    if (t180 != 2214436LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = 1;
	int32_t x726 = -1;
	volatile int32_t t181 = -1755074;

    t181 = (((x725^x726)==x727)+x728);

    if (t181 != 28397) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 64263442LL;
	int16_t x730 = 0;
	volatile int64_t x732 = INT64_MAX;
	int64_t t182 = INT64_MAX;

    t182 = (((x729^x730)==x731)+x732);

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = INT8_MIN;
	uint16_t x735 = UINT16_MAX;
	uint16_t x736 = 54U;

    t183 = (((x733^x734)==x735)+x736);

    if (t183 != 54) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = INT16_MAX;
	int32_t x739 = INT32_MIN;
	int8_t x740 = INT8_MIN;

    t184 = (((x737^x738)==x739)+x740);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = 7U;
	int64_t x743 = INT64_MIN;
	int64_t x744 = INT64_MAX;
	int64_t t185 = INT64_MAX;

    t185 = (((x741^x742)==x743)+x744);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = INT32_MAX;
	static uint32_t x747 = UINT32_MAX;
	int16_t x748 = INT16_MIN;
	int32_t t186 = 9969;

    t186 = (((x745^x746)==x747)+x748);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = UINT16_MAX;
	int64_t x750 = -1LL;
	uint8_t x751 = 46U;
	int8_t x752 = 0;
	int32_t t187 = 1922790;

    t187 = (((x749^x750)==x751)+x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x753 = 41548496215877LLU;
	uint8_t x754 = 2U;
	int32_t x755 = 1653415;
	static uint8_t x756 = 1U;
	int32_t t188 = -1;

    t188 = (((x753^x754)==x755)+x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 2851U;
	int8_t x758 = -1;
	volatile int64_t x759 = INT64_MIN;
	static volatile uint8_t x760 = UINT8_MAX;

    t189 = (((x757^x758)==x759)+x760);

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int32_t x762 = INT32_MIN;
	int32_t x763 = INT32_MIN;
	static volatile int16_t x764 = 2091;
	volatile int32_t t190 = 7;

    t190 = (((x761^x762)==x763)+x764);

    if (t190 != 2091) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 54207524652591761LL;
	int8_t x766 = INT8_MAX;
	static int64_t x767 = -1LL;
	int32_t x768 = INT32_MAX;
	int32_t t191 = INT32_MAX;

    t191 = (((x765^x766)==x767)+x768);

    if (t191 != INT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x770 = INT32_MIN;
	static int16_t x771 = INT16_MAX;
	int16_t x772 = INT16_MIN;

    t192 = (((x769^x770)==x771)+x772);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x775 = INT32_MAX;
	int32_t x776 = INT32_MIN;
	static int32_t t193 = INT32_MIN;

    t193 = (((x773^x774)==x775)+x776);

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x777 = -1LL;
	volatile uint8_t x779 = UINT8_MAX;
	volatile int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 46598636;

    t194 = (((x777^x778)==x779)+x780);

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 27U;
	uint32_t x782 = 0U;
	static int16_t x783 = -1;
	uint16_t x784 = 271U;
	int32_t t195 = 0;

    t195 = (((x781^x782)==x783)+x784);

    if (t195 != 271) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x788 = INT16_MAX;
	int32_t t196 = -56;

    t196 = (((x785^x786)==x787)+x788);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -6;
	volatile int16_t x790 = 2135;
	uint32_t x791 = 639071U;
	uint64_t x792 = 1928911097316LLU;
	static volatile uint64_t t197 = 4016250199523952LLU;

    t197 = (((x789^x790)==x791)+x792);

    if (t197 != 1928911097316LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	static int32_t x794 = INT32_MIN;
	volatile int8_t x795 = -1;
	static volatile int32_t t198 = 326900946;

    t198 = (((x793^x794)==x795)+x796);

    if (t198 != -6628) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	int16_t x798 = -1;
	uint64_t x800 = 550119762LLU;

    t199 = (((x797^x798)==x799)+x800);

    if (t199 != 550119762LLU) { NG(); } else { ; }
	
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

