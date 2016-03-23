
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

int32_t x1 = -1;
int32_t t0 = -30381;
volatile int8_t x11 = INT8_MIN;
static volatile int32_t t2 = -40652970;
uint32_t x13 = 1684728596U;
static int8_t x20 = INT8_MIN;
int32_t t4 = -274800;
int8_t x24 = INT8_MAX;
uint8_t x32 = 8U;
int32_t t7 = -1811805;
static int16_t x42 = -1;
int32_t x45 = -1;
static uint16_t x48 = 791U;
static int8_t x49 = -1;
static int16_t x59 = -1;
static volatile int16_t x61 = -2;
int8_t x67 = 8;
volatile int32_t t18 = -3337;
uint16_t x77 = 0U;
int16_t x79 = INT16_MAX;
int32_t x83 = -19565;
uint32_t x88 = 38713362U;
static uint32_t x90 = UINT32_MAX;
static uint16_t x96 = UINT16_MAX;
int8_t x104 = INT8_MAX;
static volatile uint16_t x105 = 81U;
int32_t t26 = 56374557;
int16_t x112 = INT16_MAX;
static uint32_t x113 = 53433665U;
int16_t x115 = 66;
uint8_t x116 = UINT8_MAX;
static int32_t x121 = INT32_MAX;
volatile uint64_t x127 = 36LLU;
int16_t x131 = -1;
int64_t x134 = INT64_MAX;
uint64_t x140 = 30853451058596LLU;
int32_t t34 = -26338;
uint32_t x141 = 472U;
volatile int8_t x146 = -10;
int16_t x148 = -11992;
int32_t t36 = -413;
uint32_t x151 = 12473U;
int8_t x155 = INT8_MAX;
int32_t x156 = INT32_MIN;
volatile uint32_t x160 = UINT32_MAX;
uint8_t x161 = 61U;
uint8_t x165 = 9U;
uint8_t x166 = 6U;
int32_t x171 = INT32_MIN;
volatile int32_t t42 = 48;
static int8_t x173 = -1;
volatile uint32_t x176 = 769U;
static int8_t x177 = 51;
static volatile int32_t t48 = -10;
int64_t x200 = 1850LL;
int32_t x201 = INT32_MAX;
volatile int32_t x202 = INT32_MIN;
int64_t x205 = -1LL;
static volatile int8_t x206 = INT8_MIN;
static int16_t x208 = INT16_MAX;
volatile int32_t x210 = -1;
static int16_t x214 = INT16_MIN;
uint16_t x218 = 22930U;
int64_t x219 = INT64_MIN;
int8_t x223 = INT8_MIN;
static uint16_t x227 = UINT16_MAX;
uint32_t x229 = 934219544U;
static uint8_t x241 = 2U;
static uint64_t x243 = 922469LLU;
int16_t x244 = INT16_MAX;
volatile uint64_t x250 = UINT64_MAX;
static uint64_t x253 = UINT64_MAX;
int16_t x254 = INT16_MIN;
int32_t t63 = -149919573;
int16_t x260 = -1;
uint16_t x264 = UINT16_MAX;
int8_t x268 = 17;
uint64_t x270 = 1076001584980LLU;
int16_t x275 = -3008;
uint8_t x279 = 12U;
volatile int32_t t72 = 15488;
int32_t x296 = INT32_MIN;
uint64_t x311 = UINT64_MAX;
int64_t x316 = -15803736747907LL;
volatile int32_t t78 = -1429585;
volatile uint32_t x320 = 3812276U;
volatile int32_t t79 = -229466360;
int32_t x335 = -1;
int32_t t83 = -13;
volatile uint8_t x340 = 10U;
static int64_t x341 = -403047738LL;
volatile int32_t t85 = 20225495;
int8_t x345 = -1;
uint8_t x347 = 1U;
volatile int32_t t88 = 31164727;
static volatile int8_t x358 = 2;
static uint32_t x360 = UINT32_MAX;
volatile int32_t t90 = 109;
uint8_t x366 = 4U;
int32_t t91 = -1;
volatile int16_t x370 = 2527;
volatile int32_t t92 = 200269;
uint8_t x382 = UINT8_MAX;
static uint8_t x384 = 4U;
int32_t t95 = -121363;
static int32_t x395 = INT32_MAX;
volatile int16_t x396 = 638;
int64_t x403 = INT64_MIN;
int8_t x404 = INT8_MAX;
static uint64_t x409 = UINT64_MAX;
static int64_t x415 = -1LL;
int64_t x416 = 43LL;
static volatile int32_t x417 = INT32_MAX;
static volatile int8_t x424 = INT8_MAX;
static volatile int32_t t106 = 1;
int16_t x430 = INT16_MIN;
int32_t x431 = INT32_MAX;
int32_t t107 = -197;
int64_t x436 = INT64_MAX;
int32_t t108 = -5941319;
volatile int32_t x438 = INT32_MIN;
int8_t x442 = INT8_MAX;
volatile int64_t x447 = 26LL;
int32_t t111 = -11583801;
uint32_t x451 = UINT32_MAX;
static int32_t x457 = INT32_MIN;
int8_t x462 = -2;
int32_t t117 = 80;
int32_t t119 = -516259344;
static volatile int32_t x484 = INT32_MAX;
static uint32_t x485 = 907074U;
uint8_t x495 = UINT8_MAX;
volatile int16_t x498 = INT16_MAX;
int64_t x508 = -1LL;
int64_t x511 = INT64_MIN;
volatile int32_t t127 = 12;
int32_t x513 = INT32_MIN;
static int8_t x515 = 24;
uint64_t x517 = 168601914LLU;
static volatile int16_t x523 = INT16_MIN;
static uint8_t x525 = UINT8_MAX;
uint64_t x528 = UINT64_MAX;
int16_t x542 = INT16_MAX;
int32_t t135 = 6955891;
int8_t x550 = INT8_MIN;
int32_t t137 = 111414;
volatile int32_t t138 = -40847;
static volatile uint32_t x560 = UINT32_MAX;
int32_t x567 = -1;
int32_t x575 = 5287172;
int32_t t144 = 894296758;
volatile int32_t t145 = -2949698;
int32_t x585 = 0;
int8_t x593 = -1;
int64_t x599 = -58911LL;
volatile int32_t t149 = 0;
int8_t x604 = INT8_MIN;
int32_t t151 = 510353;
uint32_t x609 = 65480773U;
volatile int64_t x612 = -1LL;
int8_t x615 = 2;
int32_t x616 = 68;
uint8_t x618 = 4U;
uint16_t x628 = 3145U;
static int8_t x642 = -1;
static int8_t x643 = -1;
int32_t t160 = 1084887;
int8_t x645 = -1;
volatile int8_t x650 = INT8_MAX;
int8_t x658 = INT8_MIN;
uint64_t x661 = UINT64_MAX;
volatile uint64_t x663 = UINT64_MAX;
static int64_t x666 = -122303135832899593LL;
int16_t x675 = INT16_MIN;
static uint32_t x678 = UINT32_MAX;
volatile int32_t t170 = -907;
int8_t x685 = -14;
int16_t x690 = 1751;
int8_t x695 = -1;
int32_t t175 = -31459;
int8_t x715 = -1;
int32_t x716 = 97509;
uint8_t x717 = 6U;
volatile int32_t t180 = -6830;
static int16_t x726 = INT16_MAX;
static int32_t x728 = -1;
int8_t x729 = 22;
uint8_t x732 = 2U;
int64_t x736 = INT64_MAX;
int32_t t183 = -509966533;
static volatile uint32_t x741 = 21072U;
volatile uint8_t x752 = 0U;
volatile int32_t t188 = 766999;
uint8_t x760 = 1U;
static int8_t x761 = 0;
int64_t x762 = INT64_MIN;
uint32_t x777 = 3123119U;
int32_t t195 = 875950;
volatile int16_t x786 = -270;
static int32_t x787 = INT32_MIN;
volatile int32_t t196 = -6602712;
uint32_t x791 = 5570876U;
int32_t t197 = -347012;
int64_t x795 = INT64_MIN;


void f0(void) {
    	uint64_t x2 = UINT64_MAX;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;

    t0 = ((x1^(x2==x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 1U;
	int8_t x6 = -1;
	static int64_t x7 = -12643884LL;
	int64_t x8 = -1LL;
	int32_t t1 = 71013;

    t1 = ((x5^(x6==x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 6696405314411LLU;
	int8_t x10 = INT8_MIN;
	uint16_t x12 = 15463U;

    t2 = ((x9^(x10==x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = 6;
	int64_t x15 = INT64_MAX;
	volatile int8_t x16 = INT8_MAX;
	int32_t t3 = 26834;

    t3 = ((x13^(x14==x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 6790833147165190LL;
	static int8_t x18 = INT8_MIN;
	uint64_t x19 = 96169403410184138LLU;

    t4 = ((x17^(x18==x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	volatile int64_t x23 = -1LL;
	static volatile int32_t t5 = -1684;

    t5 = ((x21^(x22==x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	static int16_t x26 = -7;
	uint64_t x27 = 315390638828974LLU;
	volatile uint64_t x28 = 2272242LLU;
	int32_t t6 = -20;

    t6 = ((x25^(x26==x27))>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = 119061457345LLU;
	int16_t x31 = -1;

    t7 = ((x29^(x30==x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 324;
	static int64_t x34 = 255373417775LL;
	int64_t x35 = -1LL;
	uint8_t x36 = 2U;
	volatile int32_t t8 = 0;

    t8 = ((x33^(x34==x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 3LL;
	int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MAX;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -28;

    t9 = ((x37^(x38==x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 71765008066014337LLU;
	int16_t x43 = -1;
	int32_t x44 = -284;
	int32_t t10 = 804;

    t10 = ((x41^(x42==x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	static int64_t x47 = INT64_MIN;
	static volatile int32_t t11 = -93093;

    t11 = ((x45^(x46==x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x50 = 7U;
	volatile int64_t x51 = INT64_MIN;
	int64_t x52 = 347421276801LL;
	static int32_t t12 = 92270;

    t12 = ((x49^(x50==x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	uint32_t x54 = 145702029U;
	int16_t x55 = INT16_MAX;
	uint8_t x56 = 123U;
	volatile int32_t t13 = -263673044;

    t13 = ((x53^(x54==x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int64_t x58 = -186624960125LL;
	volatile int32_t x60 = -1;
	int32_t t14 = -3617;

    t14 = ((x57^(x58==x59))>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = -1;
	volatile int32_t x63 = 105717081;
	int32_t x64 = 99621;
	static volatile int32_t t15 = -1052141635;

    t15 = ((x61^(x62==x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 948U;
	uint16_t x66 = 2U;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = 1;

    t16 = ((x65^(x66==x67))>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 8U;
	uint16_t x70 = 31464U;
	static uint32_t x71 = 71U;
	uint16_t x72 = 462U;
	static volatile int32_t t17 = -1;

    t17 = ((x69^(x70==x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MIN;
	static uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 10060U;

    t18 = ((x73^(x74==x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MAX;
	int32_t x80 = INT32_MAX;
	int32_t t19 = -2700;

    t19 = ((x77^(x78==x79))>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x81 = 219748087U;
	static volatile int16_t x82 = -7010;
	static int8_t x84 = INT8_MAX;
	int32_t t20 = 0;

    t20 = ((x81^(x82==x83))>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -3;
	int8_t x86 = -1;
	int8_t x87 = -1;
	int32_t t21 = 113261494;

    t21 = ((x85^(x86==x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 42U;
	int8_t x91 = 0;
	uint16_t x92 = 0U;
	int32_t t22 = -48;

    t22 = ((x89^(x90==x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	int64_t x94 = 2841593754420493LL;
	uint64_t x95 = 19019143531142248LLU;
	volatile int32_t t23 = 261074;

    t23 = ((x93^(x94==x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MAX;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = 0LL;
	int32_t t24 = 197;

    t24 = ((x97^(x98==x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 10U;
	uint16_t x102 = 5U;
	int8_t x103 = -1;
	int32_t t25 = -2443068;

    t25 = ((x101^(x102==x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x106 = -1;
	static volatile int64_t x107 = -1LL;
	static int8_t x108 = INT8_MAX;

    t26 = ((x105^(x106==x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x109 = 0U;
	int16_t x110 = 0;
	int8_t x111 = 1;
	volatile int32_t t27 = 985435938;

    t27 = ((x109^(x110==x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x114 = 0U;
	static int32_t t28 = 267099195;

    t28 = ((x113^(x114==x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 29410913LLU;
	uint16_t x118 = 1904U;
	int32_t x119 = -1;
	uint64_t x120 = 0LLU;
	volatile int32_t t29 = -1;

    t29 = ((x117^(x118==x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 62660866U;
	static int64_t x124 = -55761621987192LL;
	volatile int32_t t30 = 443548982;

    t30 = ((x121^(x122==x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 0U;
	uint64_t x126 = 479394905446936931LLU;
	static int32_t x128 = -1;
	int32_t t31 = 14;

    t31 = ((x125^(x126==x127))>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = 129U;
	uint8_t x130 = 9U;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = 297193;

    t32 = ((x129^(x130==x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	volatile uint32_t x135 = UINT32_MAX;
	int32_t x136 = 4293;
	int32_t t33 = -3974841;

    t33 = ((x133^(x134==x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	uint16_t x138 = UINT16_MAX;
	static int32_t x139 = -1;

    t34 = ((x137^(x138==x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x142 = 707963653U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t35 = -107316619;

    t35 = ((x141^(x142==x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = -1;
	uint16_t x147 = 17986U;

    t36 = ((x145^(x146==x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	static int8_t x150 = INT8_MIN;
	volatile int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -18177077;

    t37 = ((x149^(x150==x151))>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 15;
	volatile int64_t x154 = -226763791929541LL;
	int32_t t38 = 19;

    t38 = ((x153^(x154==x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MAX;
	uint64_t x158 = UINT64_MAX;
	static uint32_t x159 = UINT32_MAX;
	static int32_t t39 = -1;

    t39 = ((x157^(x158==x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MAX;
	int32_t x163 = 209580;
	uint64_t x164 = 141231LLU;
	int32_t t40 = -57652;

    t40 = ((x161^(x162==x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x167 = INT64_MAX;
	uint16_t x168 = 83U;
	volatile int32_t t41 = -4;

    t41 = ((x165^(x166==x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x170 = -56;
	static int8_t x172 = INT8_MAX;

    t42 = ((x169^(x170==x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 4715U;
	static int64_t x175 = 106LL;
	volatile int32_t t43 = -20610;

    t43 = ((x173^(x174==x175))>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x178 = 56U;
	int64_t x179 = INT64_MAX;
	int8_t x180 = 2;
	static volatile int32_t t44 = -46;

    t44 = ((x177^(x178==x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MAX;
	int16_t x184 = -1;
	volatile int32_t t45 = -1693559;

    t45 = ((x181^(x182==x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	uint64_t x186 = 1734483577548021LLU;
	int32_t x187 = 2;
	static int64_t x188 = -22563382469095116LL;
	int32_t t46 = -115;

    t46 = ((x185^(x186==x187))>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	static volatile int8_t x191 = 35;
	uint32_t x192 = 13563673U;
	static volatile int32_t t47 = 8;

    t47 = ((x189^(x190==x191))>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int16_t x194 = 1;
	static int16_t x195 = INT16_MIN;
	uint32_t x196 = UINT32_MAX;

    t48 = ((x193^(x194==x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	int64_t x199 = 19157603326LL;
	volatile int32_t t49 = 1;

    t49 = ((x197^(x198==x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x203 = 1458780178852350962LLU;
	uint16_t x204 = 17U;
	static volatile int32_t t50 = -10;

    t50 = ((x201^(x202==x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x207 = -297967877;
	volatile int32_t t51 = -1020481;

    t51 = ((x205^(x206==x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	static int8_t x211 = -1;
	static int64_t x212 = -153845595801LL;
	volatile int32_t t52 = -1;

    t52 = ((x209^(x210==x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = UINT32_MAX;
	uint32_t x215 = 404U;
	static int16_t x216 = INT16_MAX;
	int32_t t53 = -8295;

    t53 = ((x213^(x214==x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 17;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 178;

    t54 = ((x217^(x218==x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	uint8_t x222 = 3U;
	int32_t x224 = -1;
	volatile int32_t t55 = -1;

    t55 = ((x221^(x222==x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	uint64_t x226 = 80328683170LLU;
	volatile int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -311;

    t56 = ((x225^(x226==x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x230 = 1U;
	static uint16_t x231 = 20676U;
	uint64_t x232 = 19485553313LLU;
	volatile int32_t t57 = 7;

    t57 = ((x229^(x230==x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	static uint8_t x235 = 29U;
	uint32_t x236 = UINT32_MAX;
	static volatile int32_t t58 = -197370790;

    t58 = ((x233^(x234==x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 284572395176512348LLU;
	int8_t x239 = -9;
	int64_t x240 = INT64_MIN;
	volatile int32_t t59 = 1;

    t59 = ((x237^(x238==x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x242 = INT64_MAX;
	int32_t t60 = 1003;

    t60 = ((x241^(x242==x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MIN;
	int64_t x246 = -7LL;
	volatile int64_t x247 = 959815412964LL;
	int8_t x248 = INT8_MAX;
	int32_t t61 = -262679603;

    t61 = ((x245^(x246==x247))>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 202U;
	int16_t x251 = INT16_MAX;
	static uint8_t x252 = UINT8_MAX;
	int32_t t62 = 1961;

    t62 = ((x249^(x250==x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x255 = -1;
	int16_t x256 = INT16_MIN;

    t63 = ((x253^(x254==x255))>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MAX;
	int32_t t64 = 554437908;

    t64 = ((x257^(x258==x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 0;
	static int8_t x262 = INT8_MIN;
	volatile uint32_t x263 = UINT32_MAX;
	int32_t t65 = 4;

    t65 = ((x261^(x262==x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	static int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MIN;
	volatile int32_t t66 = 90427;

    t66 = ((x265^(x266==x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	static int16_t x271 = INT16_MIN;
	volatile uint32_t x272 = UINT32_MAX;
	int32_t t67 = -205938261;

    t67 = ((x269^(x270==x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	volatile int64_t x274 = INT64_MIN;
	int64_t x276 = -1LL;
	volatile int32_t t68 = -7149;

    t68 = ((x273^(x274==x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MIN;
	int8_t x280 = -1;
	volatile int32_t t69 = -261940;

    t69 = ((x277^(x278==x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 15U;
	static int16_t x282 = INT16_MIN;
	volatile uint64_t x283 = 13LLU;
	int8_t x284 = -1;
	static volatile int32_t t70 = 1;

    t70 = ((x281^(x282==x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 1062469299U;
	uint8_t x286 = UINT8_MAX;
	static int8_t x287 = 15;
	int32_t x288 = -104874;
	int32_t t71 = 182501;

    t71 = ((x285^(x286==x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 1424438360LLU;
	uint16_t x290 = 49U;
	int16_t x291 = -1;
	int32_t x292 = -1;

    t72 = ((x289^(x290==x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 29U;
	int16_t x294 = -1;
	static int64_t x295 = INT64_MIN;
	int32_t t73 = 0;

    t73 = ((x293^(x294==x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MAX;
	static int8_t x298 = -9;
	int16_t x299 = INT16_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t74 = -564205;

    t74 = ((x297^(x298==x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x301 = 2;
	static int8_t x302 = 0;
	int16_t x303 = INT16_MAX;
	static volatile int8_t x304 = -1;
	static int32_t t75 = -868;

    t75 = ((x301^(x302==x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int32_t x306 = -1;
	int8_t x307 = INT8_MIN;
	static int64_t x308 = INT64_MIN;
	static volatile int32_t t76 = -766443947;

    t76 = ((x305^(x306==x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 3620520LLU;
	static volatile uint64_t x310 = UINT64_MAX;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 15812643;

    t77 = ((x309^(x310==x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 0;
	uint32_t x314 = 26179884U;
	uint8_t x315 = UINT8_MAX;

    t78 = ((x313^(x314==x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	uint8_t x318 = 54U;
	int64_t x319 = -70618LL;

    t79 = ((x317^(x318==x319))>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	volatile int16_t x322 = -15016;
	volatile uint64_t x323 = 472LLU;
	static volatile int64_t x324 = INT64_MIN;
	volatile int32_t t80 = 1;

    t80 = ((x321^(x322==x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 67U;
	int8_t x326 = INT8_MIN;
	int32_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = 19692550;

    t81 = ((x325^(x326==x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	static volatile uint32_t x331 = 34U;
	static int64_t x332 = INT64_MIN;
	int32_t t82 = 25957;

    t82 = ((x329^(x330==x331))>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 5U;
	int16_t x334 = INT16_MIN;
	int32_t x336 = 0;

    t83 = ((x333^(x334==x335))>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	uint8_t x339 = 12U;
	static int32_t t84 = 2052861;

    t84 = ((x337^(x338==x339))>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x342 = 65741186U;
	volatile int64_t x343 = INT64_MIN;
	static int16_t x344 = 0;

    t85 = ((x341^(x342==x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 339992073331675LLU;
	uint8_t x348 = 27U;
	volatile int32_t t86 = 109;

    t86 = ((x345^(x346==x347))>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = 2;
	volatile int32_t x350 = INT32_MIN;
	int16_t x351 = -18;
	int64_t x352 = 1116489103141356LL;
	static volatile int32_t t87 = 6067;

    t87 = ((x349^(x350==x351))>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = 29;
	volatile uint64_t x354 = 8123065602558LLU;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 47547U;

    t88 = ((x353^(x354==x355))>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -1LL;
	uint32_t x359 = 4836U;
	int32_t t89 = -12253;

    t89 = ((x357^(x358==x359))>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x361 = 5U;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = -1;
	uint8_t x364 = 0U;

    t90 = ((x361^(x362==x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	volatile int8_t x367 = -6;
	static int64_t x368 = INT64_MIN;

    t91 = ((x365^(x366==x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = 16037LL;
	int16_t x371 = 11724;
	int32_t x372 = INT32_MAX;

    t92 = ((x369^(x370==x371))>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 25268U;
	volatile uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 152436782LLU;
	static uint8_t x376 = 10U;
	volatile int32_t t93 = 2;

    t93 = ((x373^(x374==x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	uint32_t x378 = 30377U;
	volatile uint16_t x379 = UINT16_MAX;
	static int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 8693;

    t94 = ((x377^(x378==x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MIN;
	uint32_t x383 = 73U;

    t95 = ((x381^(x382==x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	volatile int16_t x386 = 7853;
	volatile int16_t x387 = -1;
	static int8_t x388 = -1;
	volatile int32_t t96 = 3;

    t96 = ((x385^(x386==x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 479LLU;
	volatile uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = 0;
	volatile int32_t t97 = 827200;

    t97 = ((x389^(x390==x391))>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 433366265544027LLU;
	int16_t x394 = INT16_MIN;
	int32_t t98 = 10254;

    t98 = ((x393^(x394==x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int16_t x398 = -14542;
	static int64_t x399 = 5108322LL;
	int16_t x400 = -1;
	static int32_t t99 = 950816065;

    t99 = ((x397^(x398==x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	uint32_t x402 = 51U;
	volatile int32_t t100 = -8173;

    t100 = ((x401^(x402==x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 20498U;
	int8_t x406 = 4;
	uint64_t x407 = 16659379448LLU;
	static uint64_t x408 = UINT64_MAX;
	int32_t t101 = 0;

    t101 = ((x405^(x406==x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MIN;
	uint64_t x411 = 275660005339990495LLU;
	int64_t x412 = -1LL;
	int32_t t102 = 55766899;

    t102 = ((x409^(x410==x411))>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 26384206U;
	uint8_t x414 = UINT8_MAX;
	volatile int32_t t103 = -6548;

    t103 = ((x413^(x414==x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	int16_t x420 = INT16_MIN;
	static int32_t t104 = -10;

    t104 = ((x417^(x418==x419))>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MIN;
	static uint16_t x422 = 2U;
	uint8_t x423 = 2U;
	int32_t t105 = 252917673;

    t105 = ((x421^(x422==x423))>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	static uint64_t x426 = UINT64_MAX;
	static int32_t x427 = INT32_MIN;
	int16_t x428 = INT16_MAX;

    t106 = ((x425^(x426==x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 61411618U;
	int8_t x432 = -1;

    t107 = ((x429^(x430==x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 0U;
	static volatile int8_t x434 = -2;
	int32_t x435 = -1;

    t108 = ((x433^(x434==x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x437 = INT64_MIN;
	volatile int16_t x439 = INT16_MIN;
	static volatile int8_t x440 = INT8_MIN;
	int32_t t109 = -1134;

    t109 = ((x437^(x438==x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	static int8_t x443 = -60;
	uint64_t x444 = UINT64_MAX;
	int32_t t110 = 589;

    t110 = ((x441^(x442==x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	volatile int16_t x446 = INT16_MIN;
	uint16_t x448 = 232U;

    t111 = ((x445^(x446==x447))>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MAX;
	static uint64_t x450 = UINT64_MAX;
	uint8_t x452 = 10U;
	volatile int32_t t112 = -3;

    t112 = ((x449^(x450==x451))>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	static volatile int8_t x454 = INT8_MIN;
	int64_t x455 = -1LL;
	static int32_t x456 = 448926028;
	volatile int32_t t113 = -3489;

    t113 = ((x453^(x454==x455))>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x458 = INT32_MAX;
	int64_t x459 = -1LL;
	int16_t x460 = -1;
	volatile int32_t t114 = -498990;

    t114 = ((x457^(x458==x459))>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MAX;
	int8_t x463 = -13;
	static int32_t x464 = -1;
	int32_t t115 = -572866;

    t115 = ((x461^(x462==x463))>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	uint8_t x466 = 2U;
	static uint8_t x467 = 0U;
	int16_t x468 = -1;
	volatile int32_t t116 = 14550202;

    t116 = ((x465^(x466==x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = -229065622923LL;
	static int32_t x470 = -41536827;
	int32_t x471 = INT32_MIN;
	uint8_t x472 = 100U;

    t117 = ((x469^(x470==x471))>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 17244979627532706LLU;
	int32_t x474 = INT32_MIN;
	volatile int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MAX;
	int32_t t118 = 429;

    t118 = ((x473^(x474==x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 22LL;
	uint32_t x478 = 5450972U;
	static volatile int16_t x479 = -1;
	uint64_t x480 = UINT64_MAX;

    t119 = ((x477^(x478==x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	volatile int64_t x482 = -1LL;
	int8_t x483 = -1;
	volatile int32_t t120 = 72642;

    t120 = ((x481^(x482==x483))>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x486 = 1;
	int8_t x487 = 40;
	int16_t x488 = -2;
	int32_t t121 = -26757187;

    t121 = ((x485^(x486==x487))>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 918309LLU;
	static volatile int64_t x490 = -47LL;
	int8_t x491 = INT8_MAX;
	int32_t x492 = INT32_MAX;
	int32_t t122 = -12101508;

    t122 = ((x489^(x490==x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 6U;
	static int64_t x494 = 8015130LL;
	int64_t x496 = 277250314772982LL;
	int32_t t123 = 691;

    t123 = ((x493^(x494==x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int8_t x499 = 28;
	volatile uint16_t x500 = UINT16_MAX;
	int32_t t124 = 0;

    t124 = ((x497^(x498==x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x502 = 0;
	int32_t x503 = -1;
	uint32_t x504 = UINT32_MAX;
	static volatile int32_t t125 = -1;

    t125 = ((x501^(x502==x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 120U;
	uint16_t x506 = 1U;
	int32_t x507 = -1688;
	int32_t t126 = 3851074;

    t126 = ((x505^(x506==x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	int8_t x510 = -1;
	int16_t x512 = 52;

    t127 = ((x509^(x510==x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x514 = UINT32_MAX;
	static int8_t x516 = -1;
	volatile int32_t t128 = -1;

    t128 = ((x513^(x514==x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x518 = UINT16_MAX;
	int16_t x519 = INT16_MIN;
	int64_t x520 = 0LL;
	int32_t t129 = 40074;

    t129 = ((x517^(x518==x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	static volatile uint64_t x522 = 6800LLU;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 470289;

    t130 = ((x521^(x522==x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	int32_t t131 = -195065898;

    t131 = ((x525^(x526==x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MIN;
	uint8_t x530 = 2U;
	volatile int64_t x531 = -6134LL;
	int32_t x532 = 5595899;
	volatile int32_t t132 = -3;

    t132 = ((x529^(x530==x531))>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = -1;
	static int16_t x534 = INT16_MAX;
	int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MAX;
	int32_t t133 = 1;

    t133 = ((x533^(x534==x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = 6;
	uint64_t x538 = 45482827LLU;
	static uint32_t x539 = UINT32_MAX;
	volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t134 = 130;

    t134 = ((x537^(x538==x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 760892LLU;
	int64_t x543 = -1LL;
	static int8_t x544 = INT8_MAX;

    t135 = ((x541^(x542==x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MAX;
	int16_t x546 = 103;
	static int8_t x547 = INT8_MAX;
	uint16_t x548 = UINT16_MAX;
	static volatile int32_t t136 = 3804405;

    t136 = ((x545^(x546==x547))>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x551 = 2360865;
	uint32_t x552 = 350U;

    t137 = ((x549^(x550==x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = UINT32_MAX;
	volatile int64_t x554 = INT64_MIN;
	volatile uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MIN;

    t138 = ((x553^(x554==x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = 4;
	volatile int8_t x558 = 21;
	volatile uint32_t x559 = 1054771780U;
	volatile int32_t t139 = -3;

    t139 = ((x557^(x558==x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x562 = INT32_MAX;
	int32_t x563 = INT32_MIN;
	volatile uint8_t x564 = UINT8_MAX;
	int32_t t140 = -6;

    t140 = ((x561^(x562==x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 6920U;
	int32_t x566 = -1;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -16050511;

    t141 = ((x565^(x566==x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -195;
	int8_t x570 = 2;
	volatile uint8_t x571 = 11U;
	int64_t x572 = -2245094787765214LL;
	volatile int32_t t142 = -83;

    t142 = ((x569^(x570==x571))>x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = -1;
	int64_t x574 = INT64_MIN;
	uint64_t x576 = 0LLU;
	int32_t t143 = -12988772;

    t143 = ((x573^(x574==x575))>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 1340500964590151LLU;
	static int8_t x578 = INT8_MIN;
	int32_t x579 = -1166;
	static int64_t x580 = -1LL;

    t144 = ((x577^(x578==x579))>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	uint64_t x582 = 68612795LLU;
	volatile int16_t x583 = INT16_MIN;
	volatile int16_t x584 = -70;

    t145 = ((x581^(x582==x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = UINT32_MAX;
	int16_t x587 = INT16_MAX;
	volatile int64_t x588 = -5330503616371165LL;
	static volatile int32_t t146 = -93740595;

    t146 = ((x585^(x586==x587))>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 60405890LLU;
	int16_t x590 = INT16_MAX;
	int32_t x591 = -1;
	uint64_t x592 = 912850453171LLU;
	static int32_t t147 = 1014;

    t147 = ((x589^(x590==x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x594 = 1991U;
	static volatile int16_t x595 = -1;
	int32_t x596 = INT32_MIN;
	static int32_t t148 = 2286035;

    t148 = ((x593^(x594==x595))>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = -1;
	static int64_t x598 = INT64_MAX;
	uint8_t x600 = 23U;

    t149 = ((x597^(x598==x599))>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x601 = INT64_MIN;
	static int16_t x602 = INT16_MIN;
	volatile int64_t x603 = INT64_MIN;
	volatile int32_t t150 = 9729430;

    t150 = ((x601^(x602==x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = 2499284;
	int16_t x607 = -1;
	volatile int8_t x608 = 1;

    t151 = ((x605^(x606==x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = -86;
	int32_t x611 = INT32_MIN;
	int32_t t152 = -3;

    t152 = ((x609^(x610==x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 2U;
	uint64_t x614 = 812848777314850LLU;
	int32_t t153 = -5680204;

    t153 = ((x613^(x614==x615))>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = INT32_MAX;
	int64_t x619 = INT64_MAX;
	volatile uint32_t x620 = UINT32_MAX;
	int32_t t154 = 13865;

    t154 = ((x617^(x618==x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MIN;
	int8_t x622 = 2;
	int16_t x623 = -1825;
	int32_t x624 = -1;
	volatile int32_t t155 = -816;

    t155 = ((x621^(x622==x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x625 = 1874378LL;
	int16_t x626 = INT16_MAX;
	uint32_t x627 = 1753782453U;
	int32_t t156 = 127469851;

    t156 = ((x625^(x626==x627))>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	static uint32_t x632 = UINT32_MAX;
	volatile int32_t t157 = 7207808;

    t157 = ((x629^(x630==x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	int64_t x634 = -21778360160LL;
	static int32_t x635 = INT32_MIN;
	volatile uint16_t x636 = UINT16_MAX;
	int32_t t158 = -113;

    t158 = ((x633^(x634==x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	uint64_t x638 = 393249571561774LLU;
	static int32_t x639 = INT32_MAX;
	volatile int32_t x640 = 923278;
	volatile int32_t t159 = -6759;

    t159 = ((x637^(x638==x639))>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	static uint32_t x644 = UINT32_MAX;

    t160 = ((x641^(x642==x643))>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = INT32_MIN;
	volatile int8_t x647 = INT8_MAX;
	volatile int16_t x648 = INT16_MIN;
	int32_t t161 = -97672;

    t161 = ((x645^(x646==x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	static uint64_t x651 = 7902752741706LLU;
	static uint16_t x652 = UINT16_MAX;
	int32_t t162 = 807151;

    t162 = ((x649^(x650==x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = 54727LLU;
	int32_t x656 = -1;
	volatile int32_t t163 = 253;

    t163 = ((x653^(x654==x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 335U;
	int16_t x659 = -1;
	uint16_t x660 = 2085U;
	volatile int32_t t164 = -1260830;

    t164 = ((x657^(x658==x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x662 = 85U;
	volatile int32_t x664 = INT32_MAX;
	volatile int32_t t165 = -870;

    t165 = ((x661^(x662==x663))>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 1440U;
	int16_t x667 = -1;
	static int32_t x668 = -7188;
	int32_t t166 = -162697382;

    t166 = ((x665^(x666==x667))>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x669 = INT64_MAX;
	uint64_t x670 = UINT64_MAX;
	uint16_t x671 = 50U;
	int64_t x672 = INT64_MIN;
	volatile int32_t t167 = 0;

    t167 = ((x669^(x670==x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MAX;
	static volatile int16_t x674 = INT16_MAX;
	uint32_t x676 = 30575919U;
	static volatile int32_t t168 = -1;

    t168 = ((x673^(x674==x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	uint64_t x679 = 177872893LLU;
	int32_t x680 = INT32_MAX;
	static int32_t t169 = -317194119;

    t169 = ((x677^(x678==x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int32_t x682 = -1;
	uint8_t x683 = 19U;
	uint8_t x684 = UINT8_MAX;

    t170 = ((x681^(x682==x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x686 = INT8_MIN;
	int64_t x687 = 29824LL;
	uint8_t x688 = UINT8_MAX;
	volatile int32_t t171 = 65599705;

    t171 = ((x685^(x686==x687))>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	int32_t x691 = -1;
	static volatile uint8_t x692 = UINT8_MAX;
	int32_t t172 = -206644;

    t172 = ((x689^(x690==x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	int64_t x694 = INT64_MIN;
	uint8_t x696 = 1U;
	volatile int32_t t173 = 821064;

    t173 = ((x693^(x694==x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 8U;
	volatile uint16_t x698 = 3U;
	int32_t x699 = -1;
	uint64_t x700 = 78LLU;
	int32_t t174 = 6319;

    t174 = ((x697^(x698==x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = -1;
	static int16_t x702 = -1;
	int64_t x703 = 28788976261LL;
	int32_t x704 = -1;

    t175 = ((x701^(x702==x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = INT32_MIN;
	static uint64_t x706 = 2496738700993099446LLU;
	static int64_t x707 = 50303548468LL;
	volatile int16_t x708 = -6;
	volatile int32_t t176 = -8917;

    t176 = ((x705^(x706==x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	uint64_t x710 = 1383893LLU;
	static int16_t x711 = 1006;
	volatile int32_t x712 = -10743;
	static int32_t t177 = 484976311;

    t177 = ((x709^(x710==x711))>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -1;
	int32_t x714 = -1;
	static int32_t t178 = 38;

    t178 = ((x713^(x714==x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	volatile int8_t x720 = -1;
	static int32_t t179 = 27;

    t179 = ((x717^(x718==x719))>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	int8_t x722 = INT8_MIN;
	int64_t x723 = INT64_MAX;
	static int32_t x724 = -1;

    t180 = ((x721^(x722==x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 349641308740LLU;
	int32_t x727 = INT32_MAX;
	volatile int32_t t181 = -219;

    t181 = ((x725^(x726==x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x730 = INT32_MAX;
	int16_t x731 = 22;
	int32_t t182 = -47949897;

    t182 = ((x729^(x730==x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 0;
	uint64_t x734 = 38107797454LLU;
	int8_t x735 = INT8_MIN;

    t183 = ((x733^(x734==x735))>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 19652U;
	uint16_t x738 = UINT16_MAX;
	uint16_t x739 = 2U;
	int64_t x740 = INT64_MIN;
	volatile int32_t t184 = 370;

    t184 = ((x737^(x738==x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = 11;
	int8_t x743 = INT8_MIN;
	static int8_t x744 = INT8_MIN;
	volatile int32_t t185 = 40674376;

    t185 = ((x741^(x742==x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = 217382266LL;
	uint64_t x746 = 131169LLU;
	static uint64_t x747 = 9LLU;
	int32_t x748 = INT32_MIN;
	volatile int32_t t186 = -114;

    t186 = ((x745^(x746==x747))>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = -1;
	static int32_t x751 = INT32_MIN;
	int32_t t187 = 766498;

    t187 = ((x749^(x750==x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 20U;
	static uint16_t x754 = UINT16_MAX;
	uint64_t x755 = 16883761329LLU;
	int32_t x756 = -1;

    t188 = ((x753^(x754==x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	int64_t x758 = INT64_MIN;
	static int64_t x759 = -222326744594LL;
	volatile int32_t t189 = -1;

    t189 = ((x757^(x758==x759))>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x763 = -11;
	int16_t x764 = INT16_MAX;
	int32_t t190 = 117513364;

    t190 = ((x761^(x762==x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MAX;
	static int32_t x766 = INT32_MIN;
	int32_t x767 = -1;
	uint32_t x768 = 584646U;
	volatile int32_t t191 = -10;

    t191 = ((x765^(x766==x767))>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = -1;
	int64_t x770 = INT64_MAX;
	volatile uint8_t x771 = 5U;
	volatile int16_t x772 = 1;
	volatile int32_t t192 = -37571;

    t192 = ((x769^(x770==x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = 9;
	static uint8_t x774 = UINT8_MAX;
	int32_t x775 = INT32_MIN;
	int32_t x776 = INT32_MIN;
	volatile int32_t t193 = -81111590;

    t193 = ((x773^(x774==x775))>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x778 = 57484LLU;
	int32_t x779 = 3460;
	int64_t x780 = INT64_MIN;
	int32_t t194 = 37226941;

    t194 = ((x777^(x778==x779))>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = INT32_MIN;
	int32_t x783 = -1;
	volatile uint32_t x784 = UINT32_MAX;

    t195 = ((x781^(x782==x783))>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 185710U;
	int8_t x788 = -1;

    t196 = ((x785^(x786==x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	int64_t x790 = INT64_MAX;
	static int64_t x792 = -73198LL;

    t197 = ((x789^(x790==x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	static int32_t x794 = INT32_MAX;
	int16_t x796 = 3;
	int32_t t198 = 375408;

    t198 = ((x793^(x794==x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -66350;
	volatile int64_t x798 = 78517900LL;
	int32_t x799 = -1;
	int8_t x800 = 7;
	int32_t t199 = 47;

    t199 = ((x797^(x798==x799))>x800);

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

