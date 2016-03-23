
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

int16_t x5 = 1;
volatile int16_t x13 = INT16_MIN;
int64_t x14 = INT64_MIN;
int16_t x18 = INT16_MIN;
int64_t x19 = -7LL;
uint8_t x24 = 4U;
int32_t x25 = INT32_MIN;
int8_t x32 = INT8_MIN;
uint32_t t7 = 13001300U;
int8_t x34 = -28;
volatile uint64_t x38 = 321LLU;
uint64_t t10 = 4070060451346LLU;
int16_t x51 = 11;
int8_t x54 = -1;
static int8_t x61 = INT8_MIN;
volatile int64_t x62 = -1LL;
int64_t x67 = 2406767070924193LL;
int32_t x70 = INT32_MIN;
volatile int64_t x79 = -1LL;
int64_t t19 = 34025620LL;
static volatile int8_t x87 = INT8_MAX;
int64_t x94 = 11389916098868559LL;
static int16_t x95 = INT16_MIN;
static int32_t x106 = -1;
static volatile uint8_t x110 = 0U;
volatile int64_t x113 = -1968LL;
volatile int8_t x117 = INT8_MIN;
int16_t x119 = INT16_MIN;
volatile uint32_t t30 = 1U;
volatile uint32_t x129 = UINT32_MAX;
static int32_t x155 = INT32_MIN;
int32_t x157 = -119;
volatile int8_t x163 = INT8_MAX;
static uint8_t x164 = 28U;
volatile uint8_t x170 = UINT8_MAX;
int16_t x171 = -63;
volatile int32_t x172 = -61;
volatile int32_t t40 = 105477374;
int32_t x182 = 3481;
int32_t x184 = INT32_MIN;
uint32_t x185 = 1037263068U;
volatile int16_t x196 = INT16_MAX;
int8_t x198 = -27;
static uint32_t x200 = UINT32_MAX;
static volatile uint64_t t46 = 246305LLU;
volatile uint64_t t47 = 3982925004924LLU;
int8_t x210 = -1;
uint8_t x211 = 14U;
uint8_t x213 = 1U;
static uint16_t x215 = 5205U;
volatile int32_t t50 = 1127957;
int16_t x217 = -7665;
static int8_t x234 = INT8_MIN;
int8_t x238 = INT8_MIN;
static uint64_t t62 = 7LLU;
int16_t x269 = INT16_MAX;
static int64_t x273 = INT64_MAX;
int64_t x286 = -44712651888229421LL;
int32_t x293 = -1;
int64_t x294 = -1LL;
static uint16_t x296 = UINT16_MAX;
int64_t t68 = 104175LL;
int32_t t69 = -180;
volatile uint64_t x307 = 1902610655LLU;
int8_t x310 = 3;
int32_t x313 = 173975218;
int8_t x314 = INT8_MIN;
int32_t x316 = INT32_MIN;
uint64_t x321 = UINT64_MAX;
static int32_t x322 = INT32_MAX;
uint64_t t74 = 129468LLU;
static volatile uint8_t x334 = 88U;
volatile int32_t t76 = -105988;
int16_t x337 = INT16_MIN;
int64_t x340 = 1493016448994559LL;
volatile int8_t x341 = INT8_MIN;
volatile int32_t x342 = INT32_MIN;
static volatile uint8_t x343 = 3U;
volatile uint64_t x344 = UINT64_MAX;
uint64_t t78 = 1134LLU;
volatile int32_t x356 = INT32_MIN;
uint32_t x357 = UINT32_MAX;
static uint8_t x358 = UINT8_MAX;
static uint8_t x360 = 1U;
uint32_t t82 = 1960258U;
int32_t x364 = INT32_MIN;
volatile int32_t t83 = -130;
volatile uint64_t t84 = 14LLU;
static uint32_t x377 = 9386U;
int8_t x378 = -2;
uint32_t x380 = 12169U;
volatile uint32_t t87 = 53970990U;
volatile uint64_t t88 = 11077520913LLU;
volatile int16_t x401 = INT16_MIN;
static uint8_t x402 = UINT8_MAX;
volatile uint16_t x414 = UINT16_MAX;
uint32_t x416 = 1U;
int32_t x418 = INT32_MIN;
int8_t x424 = INT8_MAX;
int8_t x430 = INT8_MIN;
uint16_t x432 = UINT16_MAX;
volatile int32_t t97 = 1;
volatile int16_t x433 = 223;
static int32_t x448 = INT32_MAX;
volatile uint32_t t100 = 75875905U;
int8_t x450 = -47;
static volatile uint32_t x451 = 163850U;
volatile int64_t t101 = 0LL;
int16_t x454 = INT16_MIN;
static int32_t x456 = INT32_MIN;
int32_t x459 = -1;
int32_t x469 = INT32_MIN;
int32_t x470 = 1;
volatile int64_t t105 = -709484686912LL;
volatile uint32_t t106 = 176U;
int64_t x481 = INT64_MIN;
int64_t x484 = INT64_MIN;
volatile int8_t x485 = INT8_MIN;
int64_t x494 = INT64_MIN;
int16_t x500 = 13521;
volatile int32_t t112 = 173067597;
uint64_t x505 = 33494645277149LLU;
volatile int8_t x507 = INT8_MIN;
uint16_t x509 = 573U;
int8_t x521 = INT8_MAX;
uint8_t x528 = UINT8_MAX;
int16_t x529 = INT16_MIN;
int64_t x531 = 396939LL;
volatile int32_t x533 = 4932;
uint32_t x534 = 417929614U;
uint64_t t120 = 516456196097LLU;
int32_t x538 = 14287;
uint16_t x540 = 3U;
static uint16_t x542 = 111U;
static volatile uint32_t t122 = 17752U;
static int16_t x546 = INT16_MIN;
int16_t x551 = -1;
int32_t x554 = INT32_MIN;
uint32_t x555 = UINT32_MAX;
uint32_t x561 = 58420U;
int8_t x570 = -1;
volatile int64_t x587 = INT64_MIN;
int64_t t132 = -82744563748562785LL;
static int32_t x590 = INT32_MAX;
int64_t x591 = INT64_MIN;
int64_t t133 = -3114072LL;
uint8_t x599 = 36U;
volatile int16_t x604 = INT16_MIN;
int32_t x606 = 285723;
int32_t x613 = INT32_MIN;
volatile uint8_t x625 = 37U;
volatile int32_t t142 = -97404456;
uint16_t x629 = 3560U;
int8_t x637 = INT8_MIN;
int16_t x639 = -68;
static int8_t x646 = -1;
uint32_t x648 = 11880876U;
int64_t x649 = -1LL;
static int32_t x651 = -5468840;
volatile int16_t x653 = INT16_MIN;
static int32_t x655 = INT32_MIN;
int32_t t148 = 499781;
static int64_t x660 = INT64_MIN;
volatile int64_t t149 = -482743398355967LL;
int32_t x662 = INT32_MIN;
uint32_t x663 = 2063592U;
int8_t x664 = -1;
uint16_t x665 = 22274U;
int32_t x670 = INT32_MAX;
uint32_t x674 = 34U;
static volatile int8_t x678 = INT8_MAX;
uint16_t x684 = 1094U;
uint16_t x689 = 11091U;
uint8_t x692 = UINT8_MAX;
int64_t t159 = -4840320LL;
uint32_t x706 = 23872U;
static int16_t x712 = -1;
int8_t x715 = INT8_MAX;
uint8_t x723 = 127U;
volatile int64_t x730 = INT64_MIN;
static int8_t x732 = -1;
int32_t x733 = INT32_MIN;
static int64_t x739 = 51572LL;
volatile int8_t x740 = 1;
volatile int32_t x745 = -1;
uint8_t x770 = 2U;
static int32_t x772 = INT32_MIN;
volatile int32_t t178 = -11;
uint64_t x783 = UINT64_MAX;
int16_t x788 = -1;
static volatile int32_t x794 = INT32_MIN;
int16_t x797 = INT16_MIN;
int64_t x801 = INT64_MIN;
int8_t x804 = 12;
uint32_t x806 = 7U;
uint8_t x809 = UINT8_MAX;
volatile int64_t x823 = INT64_MIN;
static volatile int64_t t189 = -8757035123LL;
uint64_t x825 = UINT64_MAX;
int64_t x828 = -1LL;
static uint16_t x829 = UINT16_MAX;
static int64_t x838 = INT64_MAX;
static int32_t x839 = INT32_MIN;
volatile int64_t t193 = 84LL;
uint64_t x850 = 1083422139588LLU;
uint8_t x851 = 33U;
uint64_t t196 = 71852612288LLU;
int8_t x860 = -1;


void f0(void) {
    	int64_t x1 = -20112854LL;
	int8_t x2 = -1;
	uint8_t x3 = 2U;
	static uint16_t x4 = UINT16_MAX;
	static int64_t t0 = -7592764219867LL;

    t0 = (((x1^x2)^x3)+x4);

    if (t0 != 20178390LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 67U;
	int8_t x7 = INT8_MAX;
	volatile int32_t x8 = -1;
	int32_t t1 = -176;

    t1 = (((x5^x6)^x7)+x8);

    if (t1 != 60) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int16_t x10 = -1;
	int32_t x11 = INT32_MAX;
	int16_t x12 = 0;
	int32_t t2 = 6256;

    t2 = (((x9^x10)^x11)+x12);

    if (t2 != 2147450880) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x15 = INT64_MAX;
	static int32_t x16 = INT32_MIN;
	int64_t t3 = 90865740831360LL;

    t3 = (((x13^x14)^x15)+x16);

    if (t3 != -2147450881LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 598U;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 4067199157846044LL;

    t4 = (((x17^x18)^x19)+x20);

    if (t4 != -2147451473LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static volatile uint16_t x22 = 184U;
	volatile int64_t x23 = -14267833490734LL;
	volatile int64_t t5 = -169325517320LL;

    t5 = (((x21^x22)^x23)+x24);

    if (t5 != 9223357769021284974LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = -1;
	volatile int32_t x27 = 1;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -30637;

    t6 = (((x25^x26)^x27)+x28);

    if (t6 != 2147450878) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -76407995;
	uint32_t x30 = 1330U;
	static volatile uint32_t x31 = 25U;

    t7 = (((x29^x30)^x31)+x32);

    if (t7 != 4218559982U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	int32_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = 388024908036LLU;

    t8 = (((x33^x34)^x35)+x36);

    if (t8 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	volatile int32_t x39 = INT32_MAX;
	static int16_t x40 = INT16_MAX;
	uint64_t t9 = 1005LLU;

    t9 = (((x37^x38)^x39)+x40);

    if (t9 != 9223372034707325248LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	static uint64_t x42 = 381991814280180LLU;
	static int8_t x43 = 4;
	int8_t x44 = -1;

    t10 = (((x41^x42)^x43)+x44);

    if (t10 != 9222990045040495630LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = -550746332804460LL;

    t11 = (((x45^x46)^x47)+x48);

    if (t11 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 2U;
	int16_t x50 = INT16_MIN;
	uint64_t x52 = 66994880711LLU;
	volatile uint64_t t12 = 255886937735645LLU;

    t12 = (((x49^x50)^x51)+x52);

    if (t12 != 66994847952LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	volatile uint32_t x55 = 3070106U;
	int32_t x56 = 20717;
	uint32_t t13 = 1U;

    t13 = (((x53^x54)^x55)+x56);

    if (t13 != 3090823U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 874;
	static uint32_t x58 = 11637U;
	int16_t x59 = -1648;
	static volatile uint32_t x60 = 7U;
	volatile uint32_t t14 = 7928U;

    t14 = (((x57^x58)^x59)+x60);

    if (t14 != 4294956950U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	volatile int64_t t15 = -19317LL;

    t15 = (((x61^x62)^x63)+x64);

    if (t15 != 126LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 8U;
	static int8_t x66 = -1;
	int8_t x68 = -1;
	volatile int64_t t16 = 533864LL;

    t16 = (((x65^x66)^x67)+x68);

    if (t16 != -2406767070924203LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -181658;
	int32_t x71 = INT32_MIN;
	volatile uint32_t x72 = 28186617U;
	static volatile uint32_t t17 = 295215U;

    t17 = (((x69^x70)^x71)+x72);

    if (t17 != 28004959U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint8_t x73 = 1U;
	uint8_t x74 = 19U;
	static uint16_t x75 = UINT16_MAX;
	int16_t x76 = 0;
	int32_t t18 = -58027;

    t18 = (((x73^x74)^x75)+x76);

    if (t18 != 65517) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x78 = INT8_MIN;
	int8_t x80 = -13;

    t19 = (((x77^x78)^x79)+x80);

    if (t19 != -2147483534LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = UINT16_MAX;
	uint8_t x86 = 59U;
	static int32_t x88 = -27;
	volatile int32_t t20 = -7;

    t20 = (((x85^x86)^x87)+x88);

    if (t20 != 65440) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = 43;
	uint8_t x90 = UINT8_MAX;
	int64_t x91 = 203292084LL;
	static volatile int16_t x92 = -389;
	int64_t t21 = -5909911516LL;

    t21 = (((x89^x90)^x91)+x92);

    if (t21 != 203291611LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -1;
	int32_t x96 = 34150815;
	int64_t t22 = -90217593001LL;

    t22 = (((x93^x94)^x95)+x96);

    if (t22 != 11389916133024847LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x97 = 56U;
	volatile int16_t x98 = INT16_MIN;
	uint32_t x99 = 41U;
	volatile uint8_t x100 = 4U;
	volatile uint32_t t23 = 375186U;

    t23 = (((x97^x98)^x99)+x100);

    if (t23 != 4294934549U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 560001U;
	uint64_t x102 = 5527LLU;
	int16_t x103 = 0;
	uint16_t x104 = UINT16_MAX;
	uint64_t t24 = 1228637600166LLU;

    t24 = (((x101^x102)^x103)+x104);

    if (t24 != 630293LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x105 = -1;
	static uint16_t x107 = 28U;
	uint16_t x108 = 240U;
	static int32_t t25 = -11546177;

    t25 = (((x105^x106)^x107)+x108);

    if (t25 != 268) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x109 = -7155187;
	int64_t x111 = -1LL;
	int16_t x112 = INT16_MAX;
	volatile int64_t t26 = -4260224112225076395LL;

    t26 = (((x109^x110)^x111)+x112);

    if (t26 != 7187953LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x114 = -1;
	int64_t x115 = -1LL;
	volatile uint32_t x116 = 15175967U;
	static volatile int64_t t27 = -2025237545369945123LL;

    t27 = (((x113^x114)^x115)+x116);

    if (t27 != 15173999LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x118 = -1;
	int8_t x120 = -44;
	int32_t t28 = 26;

    t28 = (((x117^x118)^x119)+x120);

    if (t28 != -32685) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MAX;
	volatile int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;
	volatile int64_t t29 = -273644773760LL;

    t29 = (((x121^x122)^x123)+x124);

    if (t29 != -32769LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MAX;
	uint8_t x126 = 11U;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = -1;

    t30 = (((x125^x126)^x127)+x128);

    if (t30 != 4294967178U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x130 = -1;
	int64_t x131 = -1LL;
	volatile uint64_t x132 = 609101LLU;
	uint64_t t31 = 97163115LLU;

    t31 = (((x129^x130)^x131)+x132);

    if (t31 != 609100LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = INT8_MAX;
	int32_t x134 = INT32_MIN;
	uint64_t x135 = UINT64_MAX;
	static int32_t x136 = INT32_MIN;
	volatile uint64_t t32 = 1907621627212767LLU;

    t32 = (((x133^x134)^x135)+x136);

    if (t32 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	int32_t x138 = 31032;
	static volatile int64_t x139 = INT64_MAX;
	uint16_t x140 = 0U;
	int64_t t33 = -37LL;

    t33 = (((x137^x138)^x139)+x140);

    if (t33 != -31033LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x141 = 5;
	static volatile uint64_t x142 = 902479720446LLU;
	static uint8_t x143 = 5U;
	int8_t x144 = INT8_MAX;
	volatile uint64_t t34 = 41303LLU;

    t34 = (((x141^x142)^x143)+x144);

    if (t34 != 902479720573LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = UINT16_MAX;
	volatile int32_t x150 = -1;
	uint64_t x151 = 145534603425431427LLU;
	int8_t x152 = -1;
	uint64_t t35 = 14159336086720LLU;

    t35 = (((x149^x150)^x151)+x152);

    if (t35 != 18301209470284087170LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = 11U;
	int8_t x154 = -4;
	int16_t x156 = INT16_MIN;
	volatile int32_t t36 = 466;

    t36 = (((x153^x154)^x155)+x156);

    if (t36 != 2147450871) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x158 = 23U;
	static volatile int64_t x159 = -1307LL;
	volatile int16_t x160 = INT16_MAX;
	volatile int64_t t37 = 18LL;

    t37 = (((x157^x158)^x159)+x160);

    if (t37 != 34170LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x161 = 35;
	uint16_t x162 = UINT16_MAX;
	int32_t t38 = -41557561;

    t38 = (((x161^x162)^x163)+x164);

    if (t38 != 65471) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = -1;
	volatile uint32_t x166 = 361357U;
	int32_t x167 = -1;
	int16_t x168 = INT16_MAX;
	uint32_t t39 = 2131186051U;

    t39 = (((x165^x166)^x167)+x168);

    if (t39 != 394124U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = 6380;

    t40 = (((x169^x170)^x171)+x172);

    if (t40 != -6251) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = 25;
	int64_t x174 = -680812816966LL;
	volatile uint16_t x175 = 11803U;
	uint8_t x176 = 15U;
	volatile int64_t t41 = 1043127154267637LL;

    t41 = (((x173^x174)^x175)+x176);

    if (t41 != -680812807225LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MIN;
	static int64_t x179 = -320956952LL;
	uint16_t x180 = 1U;
	volatile int64_t t42 = 1LL;

    t42 = (((x177^x178)^x179)+x180);

    if (t42 != -320956951LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x181 = 69U;
	int64_t x183 = INT64_MAX;
	static int64_t t43 = -4319183LL;

    t43 = (((x181^x182)^x183)+x184);

    if (t43 != 9223372034707288611LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x186 = 5U;
	static int64_t x187 = INT64_MIN;
	int16_t x188 = -52;
	volatile int64_t t44 = -42616595055178333LL;

    t44 = (((x185^x186)^x187)+x188);

    if (t44 != -9223372035817512795LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x193 = -1LL;
	uint16_t x194 = 2U;
	static int32_t x195 = -1;
	int64_t t45 = -20580102121LL;

    t45 = (((x193^x194)^x195)+x196);

    if (t45 != 32769LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 15LLU;
	static uint16_t x199 = 205U;

    t46 = (((x197^x198)^x199)+x200);

    if (t46 != 4294967078LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	static uint64_t x202 = UINT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	static uint64_t x204 = UINT64_MAX;

    t47 = (((x201^x202)^x203)+x204);

    if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 0U;
	int8_t x206 = INT8_MAX;
	int16_t x207 = INT16_MAX;
	int64_t x208 = -1LL;
	volatile int64_t t48 = -112884LL;

    t48 = (((x205^x206)^x207)+x208);

    if (t48 != 32639LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t49 = 1;

    t49 = (((x209^x210)^x211)+x212);

    if (t49 != -15) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x214 = 0;
	static int16_t x216 = -6;

    t50 = (((x213^x214)^x215)+x216);

    if (t50 != 5198) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x218 = INT32_MIN;
	static uint32_t x219 = 7U;
	static int8_t x220 = INT8_MIN;
	uint32_t t51 = 18462929U;

    t51 = (((x217^x218)^x219)+x220);

    if (t51 != 2147475848U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x221 = 116344LLU;
	volatile int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	volatile int16_t x224 = INT16_MAX;
	static volatile uint64_t t52 = 1298115549577041836LLU;

    t52 = (((x221^x222)^x223)+x224);

    if (t52 != 9223372036854692343LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x225 = INT64_MAX;
	static uint32_t x226 = 136U;
	uint32_t x227 = 1U;
	int16_t x228 = 26;
	volatile int64_t t53 = -17891229050142546LL;

    t53 = (((x225^x226)^x227)+x228);

    if (t53 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = -14;
	int64_t x230 = -1LL;
	uint64_t x231 = 88611945369LLU;
	int16_t x232 = 3974;
	uint64_t t54 = 302447267694LLU;

    t54 = (((x229^x230)^x231)+x232);

    if (t54 != 88611949338LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -28911161045LL;
	static volatile int32_t x235 = -500737357;
	int8_t x236 = INT8_MIN;
	volatile int64_t t55 = 4959606781LL;

    t55 = (((x233^x234)^x235)+x236);

    if (t55 != -28569889896LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x237 = INT32_MAX;
	uint8_t x239 = UINT8_MAX;
	volatile int64_t x240 = -1LL;
	volatile int64_t t56 = -953526690424916LL;

    t56 = (((x237^x238)^x239)+x240);

    if (t56 != -2147483521LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x241 = -1;
	int8_t x242 = -1;
	static int32_t x243 = 2690408;
	int64_t x244 = INT64_MIN;
	volatile int64_t t57 = -1016005537617194LL;

    t57 = (((x241^x242)^x243)+x244);

    if (t57 != -9223372036852085400LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x245 = 54U;
	static uint64_t x246 = 3426375487529LLU;
	volatile int32_t x247 = 115897;
	volatile int16_t x248 = 90;
	static volatile uint64_t t58 = 82871833511823067LLU;

    t58 = (((x245^x246)^x247)+x248);

    if (t58 != 3426375505152LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x249 = INT32_MAX;
	int32_t x250 = 1;
	uint16_t x251 = 943U;
	static uint8_t x252 = 14U;
	int32_t t59 = -54372;

    t59 = (((x249^x250)^x251)+x252);

    if (t59 != 2147482719) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x253 = 12LLU;
	int32_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	uint64_t t60 = 23862LLU;

    t60 = (((x253^x254)^x255)+x256);

    if (t60 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = -362;
	static int8_t x262 = -1;
	uint64_t x263 = 8145132079505604LLU;
	uint64_t x264 = UINT64_MAX;
	uint64_t t61 = 2061853218592287LLU;

    t61 = (((x261^x262)^x263)+x264);

    if (t61 != 8145132079505836LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x265 = 482426LLU;
	uint16_t x266 = 2U;
	uint64_t x267 = 2124LLU;
	int8_t x268 = -1;

    t62 = (((x265^x266)^x267)+x268);

    if (t62 != 480307LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x270 = -1;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MAX;
	int32_t t63 = -48197446;

    t63 = (((x269^x270)^x271)+x272);

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x274 = 4;
	int64_t x275 = INT64_MIN;
	volatile int32_t x276 = INT32_MAX;
	static volatile int64_t t64 = -55612453697LL;

    t64 = (((x273^x274)^x275)+x276);

    if (t64 != 2147483642LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = 2;
	int16_t x278 = 1;
	static int64_t x279 = 475630137667456LL;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t65 = 77464812250823LLU;

    t65 = (((x277^x278)^x279)+x280);

    if (t65 != 475630137667458LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = -1;
	uint32_t x287 = 844917321U;
	int64_t x288 = 127707LL;
	volatile int64_t t66 = 345LL;

    t66 = (((x285^x286)^x287)+x288);

    if (t66 != 44712652724832576LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x289 = -3;
	static int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MIN;
	int64_t x292 = -157867905LL;
	int64_t t67 = 316945LL;

    t67 = (((x289^x290)^x291)+x292);

    if (t67 != -2305351428LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x295 = 1651041562554625LL;

    t68 = (((x293^x294)^x295)+x296);

    if (t68 != 1651041562620160LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 47U;
	static uint16_t x299 = 8U;
	uint8_t x300 = UINT8_MAX;

    t69 = (((x297^x298)^x299)+x300);

    if (t69 != 471) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x305 = 23442792LLU;
	uint32_t x306 = 45170U;
	int16_t x308 = -40;
	uint64_t t70 = 311803246LLU;

    t70 = (((x305^x306)^x307)+x308);

    if (t70 != 1879215517LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x309 = UINT8_MAX;
	uint32_t x311 = 240659883U;
	int16_t x312 = -1197;
	static uint32_t t71 = 4U;

    t71 = (((x309^x310)^x311)+x312);

    if (t71 != 240658602U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x315 = -1LL;
	static volatile int64_t t72 = -2379583064879LL;

    t72 = (((x313^x314)^x315)+x316);

    if (t72 != -1973508403LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = INT16_MIN;
	uint16_t x318 = UINT16_MAX;
	static uint32_t x319 = 127U;
	static int16_t x320 = INT16_MIN;
	volatile uint32_t t73 = 29832U;

    t73 = (((x317^x318)^x319)+x320);

    if (t73 != 4294901632U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x323 = INT8_MIN;
	int64_t x324 = -1LL;

    t74 = (((x321^x322)^x323)+x324);

    if (t74 != 2147483519LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MAX;
	uint32_t x331 = 40778304U;
	volatile uint32_t x332 = UINT32_MAX;
	int64_t t75 = -68992481751791LL;

    t75 = (((x329^x330)^x331)+x332);

    if (t75 != -9223372032519027266LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x333 = UINT8_MAX;
	volatile int16_t x335 = 16135;
	static int32_t x336 = -168353;

    t76 = (((x333^x334)^x335)+x336);

    if (t76 != -152065) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x338 = INT64_MIN;
	int64_t x339 = -4LL;
	volatile int64_t t77 = -8118294356316981LL;

    t77 = (((x337^x338)^x339)+x340);

    if (t77 != -9221879020405748485LL) { NG(); } else { ; }
	
}

void f78(void) {
    

    t78 = (((x341^x342)^x343)+x344);

    if (t78 != 2147483522LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x345 = INT8_MAX;
	volatile int32_t x346 = -1;
	int16_t x347 = 0;
	uint16_t x348 = 927U;
	int32_t t79 = -20919718;

    t79 = (((x345^x346)^x347)+x348);

    if (t79 != 799) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x349 = 35;
	static int64_t x350 = INT64_MIN;
	static volatile uint64_t x351 = UINT64_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile uint64_t t80 = 4244290044664408563LLU;

    t80 = (((x349^x350)^x351)+x352);

    if (t80 != 9223372036854841307LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -1;
	int64_t x354 = -56756252516LL;
	static int8_t x355 = -15;
	volatile int64_t t81 = 399LL;

    t81 = (((x353^x354)^x355)+x356);

    if (t81 != -58903736174LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x359 = INT8_MAX;

    t82 = (((x357^x358)^x359)+x360);

    if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x361 = 4U;
	int16_t x362 = 1937;
	int8_t x363 = 1;

    t83 = (((x361^x362)^x363)+x364);

    if (t83 != -2147481708) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x365 = 16U;
	static volatile int64_t x366 = -1LL;
	volatile uint32_t x367 = UINT32_MAX;
	uint64_t x368 = 24979803820LLU;

    t84 = (((x365^x366)^x367)+x368);

    if (t84 != 20684836540LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = 454;
	volatile uint8_t x370 = 44U;
	static int64_t x371 = INT64_MIN;
	uint64_t x372 = 6LLU;
	static volatile uint64_t t85 = 120024273250368512LLU;

    t85 = (((x369^x370)^x371)+x372);

    if (t85 != 9223372036854776304LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x373 = 12U;
	int16_t x374 = -475;
	volatile int64_t x375 = 1723LL;
	int8_t x376 = INT8_MIN;
	volatile int64_t t86 = 3342017008341LL;

    t86 = (((x373^x374)^x375)+x376);

    if (t86 != -2030LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x379 = 1143078;

    t87 = (((x377^x378)^x379)+x380);

    if (t87 != 4293843451U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 206LLU;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	volatile int32_t x384 = -529947410;

    t88 = (((x381^x382)^x383)+x384);

    if (t88 != 18446744068884669471LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x389 = 3527LLU;
	static int64_t x390 = 1594533832399391LL;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = UINT64_MAX;
	uint64_t t89 = 8441483236LLU;

    t89 = (((x389^x390)^x391)+x392);

    if (t89 != 18445149540637579223LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x393 = INT16_MIN;
	int16_t x394 = -1;
	int64_t x395 = -47LL;
	int8_t x396 = 1;
	int64_t t90 = 3156668459686LL;

    t90 = (((x393^x394)^x395)+x396);

    if (t90 != -32721LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x397 = INT8_MAX;
	int16_t x398 = -1;
	volatile int8_t x399 = 0;
	uint8_t x400 = UINT8_MAX;
	static volatile int32_t t91 = 3205;

    t91 = (((x397^x398)^x399)+x400);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -369017906556LL;
	int64_t t92 = -248LL;

    t92 = (((x401^x402)^x403)+x404);

    if (t92 != -369017939580LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x413 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	uint32_t t93 = 45U;

    t93 = (((x413^x414)^x415)+x416);

    if (t93 != 4294934401U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = 1;
	volatile uint32_t t94 = 3U;

    t94 = (((x417^x418)^x419)+x420);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x421 = 45;
	int16_t x422 = INT16_MIN;
	static int16_t x423 = INT16_MAX;
	int32_t t95 = 446094812;

    t95 = (((x421^x422)^x423)+x424);

    if (t95 != 81) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = INT32_MIN;
	uint16_t x426 = 1964U;
	volatile int32_t x427 = 10677299;
	uint32_t x428 = 7543U;
	static volatile uint32_t t96 = 30027228U;

    t96 = (((x425^x426)^x427)+x428);

    if (t96 != 2158168342U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x429 = 1576U;
	uint16_t x431 = 113U;

    t97 = (((x429^x430)^x431)+x432);

    if (t97 != 63960) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x434 = 7U;
	static volatile uint16_t x435 = 1682U;
	int16_t x436 = -1012;
	int32_t t98 = -613;

    t98 = (((x433^x434)^x435)+x436);

    if (t98 != 598) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x441 = -29720719;
	uint32_t x442 = 4655U;
	int64_t x443 = -12LL;
	int16_t x444 = INT16_MIN;
	volatile int64_t t99 = 392578264375LL;

    t99 = (((x441^x442)^x443)+x444);

    if (t99 != -4265274710LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x445 = -1;
	static uint32_t x446 = 4008U;
	int32_t x447 = INT32_MAX;

    t100 = (((x445^x446)^x447)+x448);

    if (t100 != 4007U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x449 = -1LL;
	int8_t x452 = 1;

    t101 = (((x449^x450)^x451)+x452);

    if (t101 != 163877LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x453 = UINT64_MAX;
	int64_t x455 = 15808566882LL;
	uint64_t t102 = 323666735863001LLU;

    t102 = (((x453^x454)^x455)+x456);

    if (t102 != 13661104541LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x457 = 10796U;
	uint64_t x458 = UINT64_MAX;
	volatile int64_t x460 = 865082843808LL;
	uint64_t t103 = 17140832963728LLU;

    t103 = (((x457^x458)^x459)+x460);

    if (t103 != 865082854604LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x466 = 34611297338336LLU;
	uint32_t x467 = 10275789U;
	int64_t x468 = -1LL;
	uint64_t t104 = 40LLU;

    t104 = (((x465^x466)^x467)+x468);

    if (t104 != 18446709462404565036LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x471 = INT64_MAX;
	volatile int32_t x472 = -1;

    t105 = (((x469^x470)^x471)+x472);

    if (t105 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x473 = 716206932U;
	static uint32_t x474 = 1463625U;
	int16_t x475 = -10742;
	volatile uint8_t x476 = 120U;

    t106 = (((x473^x474)^x475)+x476);

    if (t106 != 3579441295U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x477 = 17915676051526LLU;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	int64_t x480 = -16562243396LL;
	uint64_t t107 = 451881LLU;

    t107 = (((x477^x478)^x479)+x480);

    if (t107 != 18446726141471256565LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x482 = 1;
	int64_t x483 = -1LL;
	volatile int64_t t108 = -1946187LL;

    t108 = (((x481^x482)^x483)+x484);

    if (t108 != -2LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x486 = INT16_MIN;
	uint32_t x487 = UINT32_MAX;
	static int16_t x488 = INT16_MAX;
	static uint32_t t109 = 3321U;

    t109 = (((x485^x486)^x487)+x488);

    if (t109 != 126U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = INT32_MAX;
	int32_t x491 = INT32_MIN;
	int8_t x492 = -1;
	volatile int64_t t110 = 509889983015543699LL;

    t110 = (((x489^x490)^x491)+x492);

    if (t110 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = -6;
	volatile int32_t x495 = -16108353;
	static int8_t x496 = INT8_MAX;
	volatile int64_t t111 = 3376038460791664LL;

    t111 = (((x493^x494)^x495)+x496);

    if (t111 != -9223372036838667324LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = INT8_MAX;
	static int16_t x498 = 115;
	volatile int8_t x499 = -5;

    t112 = (((x497^x498)^x499)+x500);

    if (t112 != 13512) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x506 = UINT32_MAX;
	int8_t x508 = -7;
	volatile uint64_t t113 = 40994LLU;

    t113 = (((x505^x506)^x507)+x508);

    if (t113 != 18446710579749912987LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x510 = 2506U;
	int16_t x511 = 134;
	static volatile uint8_t x512 = 1U;
	int32_t t114 = 3922502;

    t114 = (((x509^x510)^x511)+x512);

    if (t114 != 2930) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x513 = -5647719LL;
	int8_t x514 = -1;
	int32_t x515 = INT32_MIN;
	int32_t x516 = INT32_MIN;
	static volatile int64_t t115 = -827626125239351LL;

    t115 = (((x513^x514)^x515)+x516);

    if (t115 != -4289319578LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x517 = 622863310LLU;
	volatile uint64_t x518 = 205632507588044413LLU;
	static int64_t x519 = -407907374948LL;
	uint64_t x520 = 6871238096LLU;
	volatile uint64_t t116 = 6085879331LLU;

    t116 = (((x517^x518)^x519)+x520);

    if (t116 != 18241111269460177663LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x522 = UINT64_MAX;
	int32_t x523 = -474586026;
	static volatile int32_t x524 = 1;
	static volatile uint64_t t117 = 114921797LLU;

    t117 = (((x521^x522)^x523)+x524);

    if (t117 != 474586071LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x525 = 206971192U;
	volatile int16_t x526 = INT16_MIN;
	volatile uint16_t x527 = 3331U;
	volatile uint32_t t118 = 51325245U;

    t118 = (((x525^x526)^x527)+x528);

    if (t118 != 4087983418U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x530 = INT16_MAX;
	int16_t x532 = INT16_MIN;
	volatile int64_t t119 = -56202063025857LL;

    t119 = (((x529^x530)^x531)+x532);

    if (t119 != -429708LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x535 = INT16_MAX;
	volatile uint64_t x536 = UINT64_MAX;

    t120 = (((x533^x534)^x535)+x536);

    if (t120 != 417953076LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x537 = INT32_MAX;
	volatile uint8_t x539 = 1U;
	int32_t t121 = -1;

    t121 = (((x537^x538)^x539)+x540);

    if (t121 != 2147469364) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x541 = 66582401;
	uint32_t x543 = 2U;
	volatile int32_t x544 = 140;

    t122 = (((x541^x542)^x543)+x544);

    if (t122 != 66582648U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x545 = 31890U;
	static volatile int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	volatile uint32_t t123 = 8788U;

    t123 = (((x545^x546)^x547)+x548);

    if (t123 != 2147484433U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x549 = INT32_MIN;
	static uint8_t x550 = 6U;
	volatile uint64_t x552 = 2358795LLU;
	uint64_t t124 = 13139995LLU;

    t124 = (((x549^x550)^x551)+x552);

    if (t124 != 2149842436LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x556 = INT16_MIN;
	uint32_t t125 = 0U;

    t125 = (((x553^x554)^x555)+x556);

    if (t125 != 2147451007U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x557 = 62623454LLU;
	uint64_t x558 = 115LLU;
	int32_t x559 = INT32_MIN;
	volatile uint16_t x560 = 4634U;
	static volatile uint64_t t126 = 104LLU;

    t126 = (((x557^x558)^x559)+x560);

    if (t126 != 18446744071624696007LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x562 = INT16_MIN;
	int64_t x563 = INT64_MIN;
	int32_t x564 = INT32_MAX;
	volatile int64_t t127 = -128066LL;

    t127 = (((x561^x562)^x563)+x564);

    if (t127 != -9223372030412364749LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x565 = INT16_MIN;
	uint8_t x566 = 29U;
	uint8_t x567 = 2U;
	int32_t x568 = INT32_MAX;
	int32_t t128 = -5051;

    t128 = (((x565^x566)^x567)+x568);

    if (t128 != 2147450910) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = -1;
	volatile int8_t x571 = -31;
	uint8_t x572 = UINT8_MAX;
	int32_t t129 = -73744717;

    t129 = (((x569^x570)^x571)+x572);

    if (t129 != 224) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x573 = 0;
	int32_t x574 = -51954;
	volatile int32_t x575 = -11214738;
	uint32_t x576 = 1016111127U;
	uint32_t t130 = 37U;

    t130 = (((x573^x574)^x575)+x576);

    if (t130 != 1027372407U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x581 = INT64_MIN;
	volatile int8_t x582 = INT8_MAX;
	volatile uint64_t x583 = 28668205557726317LLU;
	volatile int16_t x584 = -11;
	volatile uint64_t t131 = 231656576360LLU;

    t131 = (((x581^x582)^x583)+x584);

    if (t131 != 9252040242412502023LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x585 = -772;
	uint32_t x586 = 13433030U;
	static int8_t x588 = -1;

    t132 = (((x585^x586)^x587)+x588);

    if (t132 != -9223372032573242311LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x589 = 12;
	uint32_t x592 = UINT32_MAX;

    t133 = (((x589^x590)^x591)+x592);

    if (t133 != -9223372030412324878LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x593 = 103U;
	uint64_t x594 = UINT64_MAX;
	int16_t x595 = INT16_MAX;
	uint32_t x596 = 3291764U;
	volatile uint64_t t134 = 536614299LLU;

    t134 = (((x593^x594)^x595)+x596);

    if (t134 != 3259099LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x597 = -1;
	uint16_t x598 = 0U;
	int8_t x600 = INT8_MIN;
	int32_t t135 = 48;

    t135 = (((x597^x598)^x599)+x600);

    if (t135 != -165) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x601 = INT32_MAX;
	int8_t x602 = 60;
	int64_t x603 = INT64_MAX;
	volatile int64_t t136 = 138209223637329181LL;

    t136 = (((x601^x602)^x603)+x604);

    if (t136 != 9223372034707259452LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x605 = INT8_MAX;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = 5U;
	int32_t t137 = -857;

    t137 = (((x605^x606)^x607)+x608);

    if (t137 != -2147197847) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x609 = UINT32_MAX;
	volatile int16_t x610 = -1;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MIN;
	volatile uint32_t t138 = 248575906U;

    t138 = (((x609^x610)^x611)+x612);

    if (t138 != 2147483520U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x614 = 68013668121145123LL;
	static int64_t x615 = -1LL;
	static int64_t x616 = INT64_MIN;
	static volatile int64_t t139 = 64372605759073885LL;

    t139 = (((x613^x614)^x615)+x616);

    if (t139 != -9155358367667679012LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x617 = INT16_MIN;
	int32_t x618 = 16847;
	int16_t x619 = -2088;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t140 = 789588784727527003LLU;

    t140 = (((x617^x618)^x619)+x620);

    if (t140 != 13846LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x621 = 6643U;
	static int32_t x622 = 946;
	static volatile uint8_t x623 = 60U;
	volatile uint8_t x624 = 0U;
	static uint32_t t141 = 208U;

    t141 = (((x621^x622)^x623)+x624);

    if (t141 != 6781U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x626 = INT8_MIN;
	static int8_t x627 = -1;
	static uint8_t x628 = 5U;

    t142 = (((x625^x626)^x627)+x628);

    if (t142 != 95) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x630 = -1LL;
	uint32_t x631 = UINT32_MAX;
	static uint64_t x632 = 6214812964631483914LLU;
	uint64_t t143 = 15623060232037LLU;

    t143 = (((x629^x630)^x631)+x632);

    if (t143 != 6214812960336520178LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x633 = INT64_MIN;
	static volatile int16_t x634 = INT16_MIN;
	uint16_t x635 = UINT16_MAX;
	uint64_t x636 = UINT64_MAX;
	uint64_t t144 = 1665276651LLU;

    t144 = (((x633^x634)^x635)+x636);

    if (t144 != 9223372036854743038LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x638 = 49U;
	uint16_t x640 = 1U;
	int32_t t145 = -7;

    t145 = (((x637^x638)^x639)+x640);

    if (t145 != 14) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = INT8_MIN;
	uint64_t x647 = 284981LLU;
	volatile uint64_t t146 = 89146047LLU;

    t146 = (((x645^x646)^x647)+x648);

    if (t146 != 12165878LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x650 = INT8_MIN;
	int32_t x652 = INT32_MIN;
	volatile int64_t t147 = -3LL;

    t147 = (((x649^x650)^x651)+x652);

    if (t147 != -2152952537LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x654 = 63;
	int8_t x656 = -7;

    t148 = (((x653^x654)^x655)+x656);

    if (t148 != 2147450936) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x657 = 6U;
	volatile uint16_t x658 = 475U;
	int8_t x659 = INT8_MAX;

    t149 = (((x657^x658)^x659)+x660);

    if (t149 != -9223372036854775390LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x661 = INT16_MIN;
	uint32_t t150 = 1069245U;

    t150 = (((x661^x662)^x663)+x664);

    if (t150 != 2145451239U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x666 = UINT64_MAX;
	int64_t x667 = INT64_MIN;
	int32_t x668 = -2350;
	uint64_t t151 = 1492825776LLU;

    t151 = (((x665^x666)^x667)+x668);

    if (t151 != 9223372036854751183LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x669 = -1LL;
	uint32_t x671 = 99U;
	uint16_t x672 = UINT16_MAX;
	int64_t t152 = -219LL;

    t152 = (((x669^x670)^x671)+x672);

    if (t152 != -2147418014LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x673 = 1799408552771425299LLU;
	int64_t x675 = 1480333326668504LL;
	static uint8_t x676 = 13U;
	volatile uint64_t t153 = 185738907523018756LLU;

    t153 = (((x673^x674)^x675)+x676);

    if (t153 != 1800748058412599030LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = 17179451438462LLU;
	static int8_t x679 = -1;
	static volatile int8_t x680 = INT8_MAX;
	volatile uint64_t t154 = 464935628LLU;

    t154 = (((x677^x678)^x679)+x680);

    if (t154 != 18446726894258113405LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x681 = 13741LLU;
	uint32_t x682 = 22422588U;
	uint64_t x683 = 62605979660629LLU;
	static uint64_t t155 = 2938865212LLU;

    t155 = (((x681^x682)^x683)+x684);

    if (t155 != 62605967992074LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x690 = 43664692LLU;
	int16_t x691 = INT16_MIN;
	static volatile uint64_t t156 = 111876338090150588LLU;

    t156 = (((x689^x690)^x691)+x692);

    if (t156 != 18446744073665900390LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x693 = 252U;
	int32_t x694 = INT32_MIN;
	uint32_t x695 = UINT32_MAX;
	uint32_t x696 = UINT32_MAX;
	volatile uint32_t t157 = 45U;

    t157 = (((x693^x694)^x695)+x696);

    if (t157 != 2147483394U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x697 = UINT32_MAX;
	uint16_t x698 = 21U;
	int64_t x699 = INT64_MIN;
	uint64_t x700 = 237115LLU;
	static volatile uint64_t t158 = 1306611LLU;

    t158 = (((x697^x698)^x699)+x700);

    if (t158 != 9223372041149980197LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x701 = -1LL;
	int8_t x702 = 1;
	int64_t x703 = -1LL;
	int64_t x704 = INT64_MIN;

    t159 = (((x701^x702)^x703)+x704);

    if (t159 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x705 = INT8_MIN;
	volatile int16_t x707 = INT16_MIN;
	int64_t x708 = -1LL;
	int64_t t160 = 48672461975166016LL;

    t160 = (((x705^x706)^x707)+x708);

    if (t160 != 8895LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x709 = -1;
	static int32_t x710 = INT32_MIN;
	int32_t x711 = INT32_MIN;
	int32_t t161 = -827827035;

    t161 = (((x709^x710)^x711)+x712);

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x713 = 10LLU;
	uint64_t x714 = 57LLU;
	uint64_t x716 = 247859458804462LLU;
	uint64_t t162 = 5757346257LLU;

    t162 = (((x713^x714)^x715)+x716);

    if (t162 != 247859458804538LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x717 = UINT16_MAX;
	int32_t x718 = 6768317;
	volatile int16_t x719 = INT16_MIN;
	int32_t x720 = -522767175;
	volatile int32_t t163 = 0;

    t163 = (((x717^x718)^x719)+x720);

    if (t163 != -529568261) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x721 = 430;
	int64_t x722 = -5LL;
	int16_t x724 = -1;
	volatile int64_t t164 = 338388838995705LL;

    t164 = (((x721^x722)^x723)+x724);

    if (t164 != -471LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x725 = 45U;
	int32_t x726 = INT32_MIN;
	volatile int64_t x727 = INT64_MAX;
	volatile uint32_t x728 = 113204517U;
	int64_t t165 = -141730188208393010LL;

    t165 = (((x725^x726)^x727)+x728);

    if (t165 != -9223372034594087689LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x729 = INT16_MIN;
	int64_t x731 = -1LL;
	static int64_t t166 = -8113948041LL;

    t166 = (((x729^x730)^x731)+x732);

    if (t166 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x734 = -2;
	int8_t x735 = INT8_MAX;
	static int32_t x736 = INT32_MIN;
	int32_t t167 = -2790925;

    t167 = (((x733^x734)^x735)+x736);

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x737 = 181952U;
	uint32_t x738 = 220545813U;
	int64_t t168 = -4170063715895LL;

    t168 = (((x737^x738)^x739)+x740);

    if (t168 != 220679330LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x741 = UINT64_MAX;
	volatile int32_t x742 = -1;
	uint64_t x743 = UINT64_MAX;
	volatile uint16_t x744 = UINT16_MAX;
	volatile uint64_t t169 = 6641830726LLU;

    t169 = (((x741^x742)^x743)+x744);

    if (t169 != 65534LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x746 = UINT8_MAX;
	volatile int8_t x747 = INT8_MIN;
	int32_t x748 = -363;
	volatile int32_t t170 = -27562947;

    t170 = (((x745^x746)^x747)+x748);

    if (t170 != -235) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x749 = 208041827U;
	uint16_t x750 = 3024U;
	static uint64_t x751 = 905446428086LLU;
	int32_t x752 = INT32_MIN;
	static uint64_t t171 = 40390251949734536LLU;

    t171 = (((x749^x750)^x751)+x752);

    if (t171 != 903498592517LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x753 = -1LL;
	uint16_t x754 = UINT16_MAX;
	uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 1U;
	int64_t t172 = 1361331194948938LL;

    t172 = (((x753^x754)^x755)+x756);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x757 = -1;
	static uint32_t x758 = 1U;
	static volatile int16_t x759 = -1;
	static int16_t x760 = -1;
	uint32_t t173 = 45812U;

    t173 = (((x757^x758)^x759)+x760);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x761 = 2U;
	uint32_t x762 = UINT32_MAX;
	static uint32_t x763 = 11878U;
	static int32_t x764 = 499507;
	static volatile uint32_t t174 = 669U;

    t174 = (((x761^x762)^x763)+x764);

    if (t174 != 487630U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x765 = UINT32_MAX;
	static uint32_t x766 = 621194U;
	volatile int8_t x767 = INT8_MAX;
	int8_t x768 = INT8_MIN;
	volatile uint32_t t175 = 130U;

    t175 = (((x765^x766)^x767)+x768);

    if (t175 != 4294345866U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x769 = INT64_MAX;
	int32_t x771 = INT32_MAX;
	volatile int64_t t176 = 384507122875LL;

    t176 = (((x769^x770)^x771)+x772);

    if (t176 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x773 = 29;
	int16_t x774 = INT16_MIN;
	static int8_t x775 = INT8_MIN;
	static int32_t x776 = INT32_MIN;
	volatile int32_t t177 = -40036;

    t177 = (((x773^x774)^x775)+x776);

    if (t177 != -2147450979) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x777 = 7;
	int32_t x778 = INT32_MAX;
	static uint16_t x779 = UINT16_MAX;
	volatile int32_t x780 = 61;

    t178 = (((x777^x778)^x779)+x780);

    if (t178 != 2147418180) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x781 = 30;
	int8_t x782 = -1;
	static volatile int16_t x784 = 4;
	volatile uint64_t t179 = 10LLU;

    t179 = (((x781^x782)^x783)+x784);

    if (t179 != 34LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x785 = -20;
	uint16_t x786 = 123U;
	volatile uint32_t x787 = 6U;
	static uint32_t t180 = 20U;

    t180 = (((x785^x786)^x787)+x788);

    if (t180 != 4294967184U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = INT64_MIN;
	static uint16_t x790 = 2U;
	int64_t x791 = -41389596LL;
	int8_t x792 = -13;
	static volatile int64_t t181 = -985038LL;

    t181 = (((x789^x790)^x791)+x792);

    if (t181 != 9223372036813386201LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x793 = INT32_MIN;
	int8_t x795 = INT8_MIN;
	int16_t x796 = 1291;
	static int32_t t182 = 260243;

    t182 = (((x793^x794)^x795)+x796);

    if (t182 != 1163) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x798 = INT16_MIN;
	uint8_t x799 = 2U;
	int64_t x800 = -2992545844LL;
	volatile int64_t t183 = -180LL;

    t183 = (((x797^x798)^x799)+x800);

    if (t183 != -2992545842LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x802 = INT32_MIN;
	volatile int8_t x803 = INT8_MAX;
	int64_t t184 = -1967329LL;

    t184 = (((x801^x802)^x803)+x804);

    if (t184 != 9223372034707292299LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x805 = -1;
	int16_t x807 = INT16_MAX;
	uint64_t x808 = 2729LLU;
	static uint64_t t185 = 218333117149627311LLU;

    t185 = (((x805^x806)^x807)+x808);

    if (t185 != 4294937264LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x810 = -33657151;
	uint64_t x811 = UINT64_MAX;
	int64_t x812 = INT64_MIN;
	volatile uint64_t t186 = 945433273443LLU;

    t186 = (((x809^x810)^x811)+x812);

    if (t186 != 9223372036888433089LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x813 = -14;
	int8_t x814 = INT8_MAX;
	uint16_t x815 = 1U;
	volatile int16_t x816 = INT16_MAX;
	volatile int32_t t187 = -79432;

    t187 = (((x813^x814)^x815)+x816);

    if (t187 != 32651) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x817 = 0;
	int32_t x818 = INT32_MIN;
	int16_t x819 = INT16_MIN;
	int16_t x820 = -1;
	volatile int32_t t188 = 155669350;

    t188 = (((x817^x818)^x819)+x820);

    if (t188 != 2147450879) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x821 = -1;
	int64_t x822 = -103148LL;
	volatile uint16_t x824 = UINT16_MAX;

    t189 = (((x821^x822)^x823)+x824);

    if (t189 != -9223372036854607126LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x826 = 14592181U;
	int32_t x827 = INT32_MIN;
	volatile uint64_t t190 = 3771949229862826575LLU;

    t190 = (((x825^x826)^x827)+x828);

    if (t190 != 2132891465LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x830 = 3374U;
	int32_t x831 = INT32_MIN;
	static uint16_t x832 = 0U;
	static int32_t t191 = -316245202;

    t191 = (((x829^x830)^x831)+x832);

    if (t191 != -2147421487) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x833 = 760173104LLU;
	uint8_t x834 = UINT8_MAX;
	int16_t x835 = -1;
	int32_t x836 = 123;
	uint64_t t192 = 1329407924LLU;

    t192 = (((x833^x834)^x835)+x836);

    if (t192 != 18446744072949378475LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x837 = -4403;
	int16_t x840 = INT16_MIN;

    t193 = (((x837^x838)^x839)+x840);

    if (t193 != 9223372034707263794LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x841 = -1;
	int32_t x842 = INT32_MAX;
	int16_t x843 = 261;
	static int8_t x844 = INT8_MIN;
	int32_t t194 = -15;

    t194 = (((x841^x842)^x843)+x844);

    if (t194 != -2147483515) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	static uint8_t x846 = 3U;
	int16_t x847 = INT16_MAX;
	volatile uint8_t x848 = 0U;
	volatile int32_t t195 = -6406187;

    t195 = (((x845^x846)^x847)+x848);

    if (t195 != 32515) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x849 = -590;
	volatile int16_t x852 = INT16_MIN;

    t196 = (((x849^x850)^x851)+x852);

    if (t196 != 18446742990287378775LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x853 = -36;
	int16_t x854 = INT16_MIN;
	int64_t x855 = -52LL;
	uint8_t x856 = UINT8_MAX;
	volatile int64_t t197 = 992753909262710LL;

    t197 = (((x853^x854)^x855)+x856);

    if (t197 != -32497LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x857 = 0;
	static int32_t x858 = -1;
	volatile uint16_t x859 = 29066U;
	volatile int32_t t198 = -6552420;

    t198 = (((x857^x858)^x859)+x860);

    if (t198 != -29068) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x861 = 1;
	volatile int64_t x862 = -1LL;
	int32_t x863 = -1;
	static volatile int64_t x864 = INT64_MIN;
	volatile int64_t t199 = 987694LL;

    t199 = (((x861^x862)^x863)+x864);

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

