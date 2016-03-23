
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

int8_t x4 = INT8_MAX;
int8_t x7 = INT8_MIN;
int16_t x13 = INT16_MIN;
int16_t x14 = INT16_MAX;
int8_t x16 = -14;
int16_t x28 = INT16_MAX;
static volatile uint32_t x32 = UINT32_MAX;
volatile int16_t x41 = -1;
int16_t x45 = INT16_MAX;
volatile int16_t x47 = INT16_MIN;
uint16_t x57 = 62U;
volatile int8_t x60 = -62;
volatile int32_t t14 = 932551442;
static uint8_t x61 = 3U;
int8_t x69 = INT8_MIN;
uint64_t x74 = 999920784508737LLU;
int64_t x75 = -1LL;
static int64_t x76 = INT64_MIN;
volatile int8_t x78 = -1;
int32_t t23 = 719254166;
int16_t x98 = INT16_MAX;
volatile int32_t x100 = -492366;
static volatile int32_t t24 = -585805;
volatile int64_t t25 = -96092LL;
int32_t x108 = INT32_MIN;
int16_t x110 = 5848;
uint64_t x112 = 59950LLU;
volatile uint64_t t27 = 1424826613676446LLU;
int8_t x114 = 5;
int64_t x115 = INT64_MIN;
uint32_t x116 = 5U;
static volatile int16_t x122 = INT16_MIN;
int8_t x132 = 53;
int32_t t32 = -218;
int8_t x134 = INT8_MIN;
int64_t x137 = -9LL;
int16_t x139 = INT16_MIN;
int32_t x140 = INT32_MAX;
int8_t x144 = -1;
volatile int8_t x153 = INT8_MAX;
uint16_t x154 = 789U;
int8_t x156 = 0;
volatile uint8_t x168 = 2U;
int8_t x169 = INT8_MIN;
int64_t t45 = -23566LL;
static int64_t x186 = -1LL;
static volatile int32_t t46 = 2563;
int32_t x190 = INT32_MAX;
uint64_t x192 = 1110907233974503LLU;
int32_t t52 = 16195;
int16_t x214 = INT16_MIN;
volatile int32_t x218 = -1;
uint64_t x221 = 676407184072461244LLU;
volatile int8_t x226 = 13;
int64_t x227 = INT64_MIN;
volatile int64_t t57 = -55587545848LL;
volatile uint64_t x237 = 15088810713103LLU;
volatile uint64_t t59 = 184093976LLU;
int32_t t60 = -28685;
static uint8_t x247 = UINT8_MAX;
int16_t x250 = -1;
volatile int32_t t62 = -1;
int16_t x256 = 6;
volatile int64_t x261 = INT64_MIN;
static int32_t t65 = 562;
int8_t x269 = INT8_MAX;
uint8_t x282 = 111U;
int32_t x283 = INT32_MIN;
volatile uint64_t t71 = 13356581247425554LLU;
uint64_t x293 = 1039LLU;
int8_t x296 = INT8_MIN;
int32_t t73 = 286624;
static uint16_t x302 = 44U;
volatile uint32_t x317 = 4U;
int32_t t79 = -112220;
int32_t x321 = INT32_MIN;
uint16_t x324 = UINT16_MAX;
int64_t x330 = INT64_MIN;
int8_t x341 = 26;
int8_t x345 = INT8_MAX;
uint32_t x348 = UINT32_MAX;
static int64_t x349 = -1LL;
int32_t x353 = INT32_MIN;
uint8_t x368 = 0U;
int8_t x394 = INT8_MIN;
uint32_t x397 = 130383U;
volatile int32_t t99 = -26045;
int8_t x408 = 1;
int32_t t101 = 267;
static int16_t x413 = -115;
int16_t x415 = INT16_MIN;
uint64_t x417 = 30736164820014368LLU;
uint32_t x438 = UINT32_MAX;
int16_t x440 = INT16_MIN;
int32_t x447 = INT32_MIN;
int32_t t111 = -491;
volatile uint32_t x453 = UINT32_MAX;
volatile uint64_t x454 = 57226LLU;
int8_t x455 = -4;
int8_t x456 = INT8_MAX;
static int32_t t113 = -4;
volatile int8_t x461 = -3;
int32_t x464 = -1;
uint16_t x469 = 29U;
uint8_t x470 = UINT8_MAX;
int64_t x474 = INT64_MAX;
volatile int32_t t119 = 5904935;
int16_t x483 = 11168;
uint32_t x488 = 122478037U;
int16_t x494 = -528;
int16_t x499 = INT16_MAX;
static volatile int32_t t125 = -331078;
int16_t x507 = INT16_MIN;
volatile int32_t t127 = 32158;
int64_t x515 = -1LL;
volatile int32_t t128 = -52684;
int64_t x518 = -1LL;
int32_t x521 = -1;
int16_t x525 = INT16_MAX;
volatile int64_t t131 = 265108291351094LL;
int64_t x541 = 4481558738554982LL;
uint64_t x550 = UINT64_MAX;
volatile uint16_t x552 = 29296U;
volatile int32_t t137 = 7345;
int32_t x556 = -721962;
int16_t x560 = 3;
uint8_t x563 = UINT8_MAX;
int64_t x566 = INT64_MIN;
int64_t x570 = INT64_MIN;
volatile int8_t x578 = -1;
static volatile int32_t t144 = 239602580;
int32_t x582 = -2;
int8_t x600 = 1;
int16_t x603 = INT16_MAX;
uint8_t x604 = 59U;
uint16_t x613 = UINT16_MAX;
uint16_t x614 = 114U;
int16_t x618 = 1;
int16_t x620 = INT16_MIN;
int32_t x621 = -7787;
int32_t t155 = -1933;
int32_t t156 = 188;
static int64_t x635 = INT64_MAX;
uint64_t x637 = 7443LLU;
int8_t x641 = -5;
uint32_t x644 = UINT32_MAX;
int64_t x648 = INT64_MIN;
volatile int64_t t161 = 4473639LL;
int8_t x651 = -1;
int16_t x656 = -1;
int32_t t164 = -15;
volatile uint64_t x664 = UINT64_MAX;
int8_t x666 = INT8_MIN;
int32_t t167 = 472791583;
uint64_t x673 = UINT64_MAX;
int64_t x675 = INT64_MIN;
int8_t x683 = 4;
int16_t x691 = INT16_MIN;
volatile int64_t x699 = -1LL;
volatile int8_t x701 = -1;
uint16_t x702 = 0U;
static uint8_t x710 = UINT8_MAX;
volatile int8_t x716 = -1;
uint8_t x718 = UINT8_MAX;
uint16_t x725 = 2817U;
int64_t x732 = 4021020374710378LL;
volatile uint8_t x734 = 4U;
int16_t x735 = 0;
static int32_t x738 = INT32_MIN;
static int64_t x749 = -1LL;
int8_t x752 = -7;
int32_t t187 = 967737;
volatile int16_t x758 = INT16_MIN;
int32_t x759 = INT32_MAX;
uint64_t x763 = UINT64_MAX;
static int16_t x764 = INT16_MIN;
uint8_t x766 = 9U;
static int8_t x767 = INT8_MIN;
static uint64_t x770 = 112LLU;
static uint32_t x771 = 133775413U;
static uint8_t x773 = 3U;
int32_t x791 = 1455415;
int64_t x792 = INT64_MIN;
static int32_t t199 = 1806;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int32_t x2 = -1;
	static int8_t x3 = INT8_MAX;
	int32_t t0 = -1850484;

    t0 = ((x1==(x2==x3))*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 2204LL;
	volatile int32_t x6 = -26693;
	int8_t x8 = -1;
	volatile int32_t t1 = 5;

    t1 = ((x5==(x6==x7))*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = UINT16_MAX;
	int16_t x10 = -55;
	volatile int16_t x11 = INT16_MIN;
	volatile int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = 1782539LL;

    t2 = ((x9==(x10==x11))*x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x15 = -14;
	volatile int32_t t3 = -412;

    t3 = ((x13==(x14==x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int64_t x18 = -2406047383362205LL;
	int16_t x19 = -1;
	uint8_t x20 = 36U;
	int32_t t4 = -81;

    t4 = ((x17==(x18==x19))*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int64_t x22 = INT64_MAX;
	int64_t x23 = 2LL;
	int16_t x24 = -4;
	volatile int32_t t5 = 98557;

    t5 = ((x21==(x22==x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 3;
	int64_t x26 = -1LL;
	uint16_t x27 = 13275U;
	volatile int32_t t6 = 10;

    t6 = ((x25==(x26==x27))*x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -1;
	volatile int64_t x30 = -775LL;
	volatile int64_t x31 = -1LL;
	uint32_t t7 = 59727499U;

    t7 = ((x29==(x30==x31))*x32);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 1559U;
	volatile int32_t x34 = INT32_MIN;
	int16_t x35 = -126;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 62LL;

    t8 = ((x33==(x34==x35))*x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int32_t x38 = -215408760;
	int8_t x39 = -58;
	static uint32_t x40 = UINT32_MAX;
	uint32_t t9 = 27U;

    t9 = ((x37==(x38==x39))*x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 0;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 153346;

    t10 = ((x41==(x42==x43))*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 404506505LLU;
	int32_t x48 = -1;
	volatile int32_t t11 = 1;

    t11 = ((x45==(x46==x47))*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 45;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 339776444;

    t12 = ((x49==(x50==x51))*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int32_t x54 = -1;
	int16_t x55 = -2856;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = -1;

    t13 = ((x53==(x54==x55))*x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	uint16_t x59 = UINT16_MAX;

    t14 = ((x57==(x58==x59))*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x62 = -21;
	static int32_t x63 = INT32_MIN;
	int32_t x64 = 585;
	int32_t t15 = 13231;

    t15 = ((x61==(x62==x63))*x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 12U;
	static uint8_t x66 = 55U;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -59032;

    t16 = ((x65==(x66==x67))*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x70 = INT8_MIN;
	volatile int32_t x71 = INT32_MIN;
	uint8_t x72 = 0U;
	static volatile int32_t t17 = 3;

    t17 = ((x69==(x70==x71))*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x73 = -1;
	volatile int64_t t18 = 126341848LL;

    t18 = ((x73==(x74==x75))*x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	int64_t x79 = INT64_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -230;

    t19 = ((x77==(x78==x79))*x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = 6787135015LLU;
	uint16_t x82 = UINT16_MAX;
	static int32_t x83 = -43;
	volatile uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 0U;

    t20 = ((x81==(x82==x83))*x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x85 = -1;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = 31U;
	static uint64_t x88 = 498926767LLU;
	uint64_t t21 = 1466149590744LLU;

    t21 = ((x85==(x86==x87))*x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile int16_t x90 = INT16_MAX;
	static uint8_t x91 = 22U;
	volatile int16_t x92 = INT16_MIN;
	static int32_t t22 = -496456055;

    t22 = ((x89==(x90==x91))*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 1;
	static int16_t x94 = INT16_MAX;
	uint32_t x95 = 23024306U;
	int16_t x96 = INT16_MIN;

    t23 = ((x93==(x94==x95))*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 6273112101LLU;
	int64_t x99 = INT64_MAX;

    t24 = ((x97==(x98==x99))*x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;

    t25 = ((x101==(x102==x103))*x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 0;
	static int8_t x106 = INT8_MIN;
	volatile int16_t x107 = -1;
	int32_t t26 = INT32_MIN;

    t26 = ((x105==(x106==x107))*x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	int64_t x111 = INT64_MIN;

    t27 = ((x109==(x110==x111))*x112);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 1681;
	static volatile uint32_t t28 = 115U;

    t28 = ((x113==(x114==x115))*x116);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 756587764U;
	int16_t x118 = -1;
	static uint16_t x119 = 2U;
	int8_t x120 = -2;
	int32_t t29 = 2843156;

    t29 = ((x117==(x118==x119))*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 80150;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = 107;
	int32_t t30 = -311193556;

    t30 = ((x121==(x122==x123))*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 26176U;
	int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	volatile int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 20723;

    t31 = ((x125==(x126==x127))*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	int32_t x131 = -5331;

    t32 = ((x129==(x130==x131))*x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 6U;
	int8_t x135 = -1;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -36;

    t33 = ((x133==(x134==x135))*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = 1567;
	int32_t t34 = 418325;

    t34 = ((x137==(x138==x139))*x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MIN;
	static int64_t x142 = 6108LL;
	static uint64_t x143 = UINT64_MAX;
	static volatile int32_t t35 = -7838;

    t35 = ((x141==(x142==x143))*x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	static uint32_t x146 = 3U;
	int8_t x147 = INT8_MAX;
	static uint16_t x148 = 346U;
	int32_t t36 = -2734;

    t36 = ((x145==(x146==x147))*x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	static int8_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	static volatile uint32_t x152 = UINT32_MAX;
	volatile uint32_t t37 = 897U;

    t37 = ((x149==(x150==x151))*x152);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x155 = 1796U;
	volatile int32_t t38 = -361154250;

    t38 = ((x153==(x154==x155))*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	static volatile int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t39 = 2133LLU;

    t39 = ((x157==(x158==x159))*x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = INT64_MIN;
	uint32_t x162 = 4535U;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = 71;
	int32_t t40 = -3657165;

    t40 = ((x161==(x162==x163))*x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = -1;
	int32_t x166 = -2147493;
	int32_t x167 = INT32_MIN;
	int32_t t41 = -7249;

    t41 = ((x165==(x166==x167))*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = -2;
	int16_t x171 = 2769;
	int32_t x172 = 7470;
	volatile int32_t t42 = 98;

    t42 = ((x169==(x170==x171))*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	static int8_t x174 = INT8_MAX;
	int16_t x175 = -43;
	uint8_t x176 = 58U;
	int32_t t43 = -11;

    t43 = ((x173==(x174==x175))*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 1;
	static int64_t x178 = INT64_MIN;
	volatile uint8_t x179 = 7U;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 464372625;

    t44 = ((x177==(x178==x179))*x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 6652328365163327LLU;
	volatile int8_t x182 = 9;
	volatile int8_t x183 = -10;
	volatile int64_t x184 = INT64_MIN;

    t45 = ((x181==(x182==x183))*x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	static volatile uint8_t x187 = UINT8_MAX;
	int8_t x188 = INT8_MIN;

    t46 = ((x185==(x186==x187))*x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = 7;
	int8_t x191 = INT8_MAX;
	uint64_t t47 = 510252557LLU;

    t47 = ((x189==(x190==x191))*x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 2302724U;
	volatile int8_t x194 = INT8_MIN;
	volatile int64_t x195 = INT64_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t48 = 65686U;

    t48 = ((x193==(x194==x195))*x196);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x198 = -17LL;
	volatile int64_t x199 = -199110309LL;
	static int8_t x200 = -28;
	int32_t t49 = 911;

    t49 = ((x197==(x198==x199))*x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	volatile int16_t x202 = -1;
	int64_t x203 = INT64_MIN;
	int8_t x204 = -15;
	static volatile int32_t t50 = 13904677;

    t50 = ((x201==(x202==x203))*x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 11U;
	uint32_t x206 = 10200U;
	int64_t x207 = 46366470359839LL;
	int64_t x208 = -1LL;
	int64_t t51 = -10603889588088LL;

    t51 = ((x205==(x206==x207))*x208);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 25078200U;
	static volatile int16_t x210 = INT16_MIN;
	volatile int16_t x211 = INT16_MIN;
	volatile int8_t x212 = 10;

    t52 = ((x209==(x210==x211))*x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = 89340U;
	volatile uint32_t t53 = 31465678U;

    t53 = ((x213==(x214==x215))*x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x217 = 30;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = 13354244673970LLU;
	uint64_t t54 = 142LLU;

    t54 = ((x217==(x218==x219))*x220);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x222 = 18123244452989LLU;
	int64_t x223 = 1170655073039898342LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = -1;

    t55 = ((x221==(x222==x223))*x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	static volatile int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -35;

    t56 = ((x225==(x226==x227))*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	static uint16_t x230 = 17599U;
	int64_t x231 = -1LL;
	int64_t x232 = INT64_MAX;

    t57 = ((x229==(x230==x231))*x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	uint32_t x235 = 67068950U;
	int64_t x236 = -1LL;
	volatile int64_t t58 = -133361104LL;

    t58 = ((x233==(x234==x235))*x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = -1;
	uint16_t x239 = 26U;
	uint64_t x240 = UINT64_MAX;

    t59 = ((x237==(x238==x239))*x240);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	uint32_t x242 = UINT32_MAX;
	static int32_t x243 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;

    t60 = ((x241==(x242==x243))*x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 1;
	int32_t x246 = -3;
	uint64_t x248 = 24LLU;
	volatile uint64_t t61 = 23934592884466352LLU;

    t61 = ((x245==(x246==x247))*x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 700478609;
	int8_t x251 = INT8_MIN;
	uint8_t x252 = UINT8_MAX;

    t62 = ((x249==(x250==x251))*x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = -1LL;
	volatile int32_t x254 = -1;
	static int16_t x255 = -1;
	int32_t t63 = 515;

    t63 = ((x253==(x254==x255))*x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = 106006668;
	static int16_t x259 = INT16_MAX;
	static int8_t x260 = INT8_MIN;
	int32_t t64 = -3;

    t64 = ((x257==(x258==x259))*x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = -2;

    t65 = ((x261==(x262==x263))*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x265 = 9297U;
	int32_t x266 = INT32_MIN;
	uint8_t x267 = 6U;
	uint64_t x268 = 50986766751798LLU;
	uint64_t t66 = 974013390783073958LLU;

    t66 = ((x265==(x266==x267))*x268);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MIN;
	uint64_t x271 = 267373941948183232LLU;
	static uint64_t x272 = 252230929534031670LLU;
	static uint64_t t67 = 212376728110LLU;

    t67 = ((x269==(x270==x271))*x272);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x273 = 4U;
	int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -1;
	volatile int32_t t68 = -29022;

    t68 = ((x273==(x274==x275))*x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MAX;
	uint16_t x279 = 3U;
	volatile int64_t x280 = 1830980352825590403LL;
	static int64_t t69 = -500618727686LL;

    t69 = ((x277==(x278==x279))*x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -6LL;
	int32_t x284 = -3;
	int32_t t70 = -5;

    t70 = ((x281==(x282==x283))*x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = -1381;
	uint64_t x288 = 5147978161LLU;

    t71 = ((x285==(x286==x287))*x288);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	uint32_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -2;

    t72 = ((x289==(x290==x291))*x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x294 = 33;
	int16_t x295 = INT16_MIN;

    t73 = ((x293==(x294==x295))*x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = 227492LLU;
	int8_t x299 = -2;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t74 = 251U;

    t74 = ((x297==(x298==x299))*x300);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 0U;
	volatile int16_t x303 = 733;
	static volatile uint64_t x304 = 8513654826326LLU;
	volatile uint64_t t75 = 11231629518LLU;

    t75 = ((x301==(x302==x303))*x304);

    if (t75 != 8513654826326LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 6U;
	volatile int16_t x306 = 0;
	volatile int64_t x307 = -227526440316472LL;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -15240;

    t76 = ((x305==(x306==x307))*x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	uint64_t x311 = 496014918585493652LLU;
	int16_t x312 = INT16_MIN;
	int32_t t77 = 14641001;

    t77 = ((x309==(x310==x311))*x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -253326087LL;
	volatile int64_t x314 = -1019749LL;
	static volatile int64_t x315 = INT64_MAX;
	static uint16_t x316 = 137U;
	static volatile int32_t t78 = -1;

    t78 = ((x313==(x314==x315))*x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -4;
	static int16_t x319 = 1;
	int32_t x320 = INT32_MIN;

    t79 = ((x317==(x318==x319))*x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = 24005154183LL;
	int8_t x323 = INT8_MAX;
	volatile int32_t t80 = 56;

    t80 = ((x321==(x322==x323))*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 424895;
	static int32_t x326 = -1;
	int64_t x327 = INT64_MIN;
	static uint8_t x328 = 2U;
	volatile int32_t t81 = -1016511;

    t81 = ((x325==(x326==x327))*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int8_t x331 = -1;
	int64_t x332 = 64883217805599LL;
	int64_t t82 = 475322674188852354LL;

    t82 = ((x329==(x330==x331))*x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	uint16_t x334 = 213U;
	int8_t x335 = -1;
	static uint32_t x336 = UINT32_MAX;
	volatile uint32_t t83 = 460790931U;

    t83 = ((x333==(x334==x335))*x336);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x337 = 1015911U;
	volatile uint64_t x338 = 7LLU;
	int8_t x339 = -1;
	int64_t x340 = -1LL;
	volatile int64_t t84 = 27505401836859LL;

    t84 = ((x337==(x338==x339))*x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = UINT32_MAX;
	static volatile int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -360024;

    t85 = ((x341==(x342==x343))*x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MIN;
	volatile int16_t x347 = INT16_MAX;
	volatile uint32_t t86 = 871U;

    t86 = ((x345==(x346==x347))*x348);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = 537164507104866019LL;
	int8_t x351 = -1;
	uint64_t x352 = 2LLU;
	uint64_t t87 = 8930116035691666LLU;

    t87 = ((x349==(x350==x351))*x352);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = 21855063876330LL;
	int64_t x356 = 45644LL;
	int64_t t88 = -3262589293484578LL;

    t88 = ((x353==(x354==x355))*x356);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 0U;
	int8_t x358 = INT8_MAX;
	static uint32_t x359 = UINT32_MAX;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

    t89 = ((x357==(x358==x359))*x360);

    if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	volatile int16_t x362 = 0;
	int8_t x363 = INT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	int64_t t90 = 1LL;

    t90 = ((x361==(x362==x363))*x364);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = -13;
	uint64_t x367 = UINT64_MAX;
	int32_t t91 = -189;

    t91 = ((x365==(x366==x367))*x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = 0;
	int32_t x370 = -1;
	int32_t x371 = INT32_MIN;
	int32_t x372 = 360684688;
	int32_t t92 = -92731;

    t92 = ((x369==(x370==x371))*x372);

    if (t92 != 360684688) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int64_t x374 = INT64_MIN;
	uint32_t x375 = 1607014U;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t93 = -23;

    t93 = ((x373==(x374==x375))*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = 1U;
	static uint64_t x378 = 121748519LLU;
	uint64_t x379 = 151325351234252LLU;
	static volatile int64_t x380 = INT64_MIN;
	volatile int64_t t94 = -37978464246LL;

    t94 = ((x377==(x378==x379))*x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	static volatile int64_t x382 = INT64_MAX;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 1855404;

    t95 = ((x381==(x382==x383))*x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t96 = 3632LLU;

    t96 = ((x385==(x386==x387))*x388);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 964415058932602451LLU;
	uint8_t x390 = 3U;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 13U;
	volatile int32_t t97 = -21;

    t97 = ((x389==(x390==x391))*x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = INT8_MAX;
	uint8_t x395 = UINT8_MAX;
	static volatile uint64_t x396 = 3LLU;
	uint64_t t98 = 458954853LLU;

    t98 = ((x393==(x394==x395))*x396);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x398 = -1;
	uint64_t x399 = 1424095327350975038LLU;
	static int8_t x400 = 0;

    t99 = ((x397==(x398==x399))*x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 1;
	static uint32_t x402 = 3126839U;
	int32_t x403 = 817077;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t100 = -21382371;

    t100 = ((x401==(x402==x403))*x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = -1;
	static int64_t x406 = INT64_MIN;
	int32_t x407 = -503067;

    t101 = ((x405==(x406==x407))*x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	uint32_t x410 = 232960100U;
	static int16_t x411 = INT16_MIN;
	int16_t x412 = -1;
	int32_t t102 = 105;

    t102 = ((x409==(x410==x411))*x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MIN;
	int8_t x416 = -40;
	volatile int32_t t103 = 1;

    t103 = ((x413==(x414==x415))*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = 123;
	volatile int32_t x419 = INT32_MIN;
	uint8_t x420 = 0U;
	volatile int32_t t104 = 3700;

    t104 = ((x417==(x418==x419))*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 1767;
	static volatile int64_t x422 = INT64_MAX;
	static uint16_t x423 = 100U;
	uint8_t x424 = 34U;
	static volatile int32_t t105 = 5899258;

    t105 = ((x421==(x422==x423))*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 14958388LLU;
	int16_t x426 = INT16_MIN;
	uint64_t x427 = 433084589567662274LLU;
	volatile uint8_t x428 = 126U;
	int32_t t106 = -78;

    t106 = ((x425==(x426==x427))*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	static uint8_t x430 = 59U;
	int32_t x431 = INT32_MIN;
	static int8_t x432 = INT8_MAX;
	int32_t t107 = -1025;

    t107 = ((x429==(x430==x431))*x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	static volatile int16_t x434 = -1;
	uint64_t x435 = 689348843855LLU;
	uint16_t x436 = 131U;
	volatile int32_t t108 = -18852638;

    t108 = ((x433==(x434==x435))*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = -4;
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t t109 = 533657026;

    t109 = ((x437==(x438==x439))*x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x441 = INT64_MIN;
	uint8_t x442 = 0U;
	volatile int8_t x443 = INT8_MIN;
	uint8_t x444 = 1U;
	int32_t t110 = -577998863;

    t110 = ((x441==(x442==x443))*x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -13432;
	volatile int64_t x446 = -2670948770487768LL;
	static int16_t x448 = -1;

    t111 = ((x445==(x446==x447))*x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 0U;
	volatile uint64_t x450 = UINT64_MAX;
	int32_t x451 = INT32_MIN;
	int8_t x452 = INT8_MIN;
	int32_t t112 = 3329;

    t112 = ((x449==(x450==x451))*x452);

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    

    t113 = ((x453==(x454==x455))*x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -24;
	int8_t x458 = -1;
	static volatile int16_t x459 = 54;
	int64_t x460 = -1LL;
	volatile int64_t t114 = 31LL;

    t114 = ((x457==(x458==x459))*x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x462 = 10;
	int8_t x463 = INT8_MAX;
	int32_t t115 = -87;

    t115 = ((x461==(x462==x463))*x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile uint64_t x466 = 3183657908685926261LLU;
	uint16_t x467 = 31879U;
	int8_t x468 = INT8_MAX;
	volatile int32_t t116 = 6;

    t116 = ((x465==(x466==x467))*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x471 = -1;
	int32_t x472 = 2941763;
	static int32_t t117 = -55;

    t117 = ((x469==(x470==x471))*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	int16_t x475 = 1;
	uint64_t x476 = 14432LLU;
	volatile uint64_t t118 = 99826367122367223LLU;

    t118 = ((x473==(x474==x475))*x476);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	int8_t x478 = 11;
	int8_t x479 = -1;
	volatile uint8_t x480 = 35U;

    t119 = ((x477==(x478==x479))*x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	int64_t x482 = INT64_MAX;
	volatile int32_t x484 = INT32_MIN;
	int32_t t120 = 536911597;

    t120 = ((x481==(x482==x483))*x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static int16_t x486 = INT16_MIN;
	int32_t x487 = 366;
	uint32_t t121 = 5636369U;

    t121 = ((x485==(x486==x487))*x488);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1094;
	static int64_t x490 = INT64_MAX;
	uint16_t x491 = UINT16_MAX;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -9114330;

    t122 = ((x489==(x490==x491))*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MAX;
	uint16_t x495 = 61U;
	uint8_t x496 = 5U;
	volatile int32_t t123 = 57;

    t123 = ((x493==(x494==x495))*x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 1LLU;
	uint32_t x498 = 3536U;
	static int32_t x500 = INT32_MIN;
	static volatile int32_t t124 = -13;

    t124 = ((x497==(x498==x499))*x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 55;
	uint8_t x502 = 6U;
	volatile int64_t x503 = -1LL;
	int8_t x504 = -1;

    t125 = ((x501==(x502==x503))*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint8_t x505 = 0U;
	uint16_t x506 = UINT16_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 1;

    t126 = ((x505==(x506==x507))*x508);

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = 26408U;
	static uint8_t x510 = 45U;
	int16_t x511 = INT16_MIN;
	int32_t x512 = INT32_MAX;

    t127 = ((x509==(x510==x511))*x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 19U;
	uint16_t x514 = UINT16_MAX;
	uint8_t x516 = UINT8_MAX;

    t128 = ((x513==(x514==x515))*x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x519 = INT8_MIN;
	int32_t x520 = 235505408;
	int32_t t129 = -14747;

    t129 = ((x517==(x518==x519))*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x522 = -1;
	uint16_t x523 = 28559U;
	int32_t x524 = INT32_MAX;
	int32_t t130 = 5;

    t130 = ((x521==(x522==x523))*x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = -1;
	static int8_t x527 = INT8_MAX;
	int64_t x528 = -1LL;

    t131 = ((x525==(x526==x527))*x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = -1;
	int32_t x530 = INT32_MIN;
	static int16_t x531 = INT16_MAX;
	volatile int64_t x532 = -13LL;
	volatile int64_t t132 = -1395621623047LL;

    t132 = ((x529==(x530==x531))*x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	uint64_t x534 = 771788749255LLU;
	int64_t x535 = INT64_MIN;
	uint16_t x536 = 2U;
	int32_t t133 = 924450;

    t133 = ((x533==(x534==x535))*x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = 4055087;
	volatile int8_t x538 = INT8_MIN;
	uint32_t x539 = 7U;
	int8_t x540 = -27;
	static volatile int32_t t134 = -252206240;

    t134 = ((x537==(x538==x539))*x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = 0;
	static int32_t x543 = -1;
	volatile int64_t x544 = -4484743882882LL;
	int64_t t135 = -3120LL;

    t135 = ((x541==(x542==x543))*x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint8_t x546 = 65U;
	int16_t x547 = INT16_MAX;
	uint32_t x548 = UINT32_MAX;
	uint32_t t136 = 312804U;

    t136 = ((x545==(x546==x547))*x548);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MAX;
	static uint16_t x551 = UINT16_MAX;

    t137 = ((x549==(x550==x551))*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = UINT64_MAX;
	static int64_t x554 = -1LL;
	int64_t x555 = 6LL;
	volatile int32_t t138 = -229973045;

    t138 = ((x553==(x554==x555))*x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = INT32_MIN;
	volatile int64_t x558 = -48297LL;
	int32_t x559 = -550;
	static volatile int32_t t139 = 1357;

    t139 = ((x557==(x558==x559))*x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 78;
	int64_t x562 = -1LL;
	int16_t x564 = -1;
	int32_t t140 = -6;

    t140 = ((x561==(x562==x563))*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 1U;
	int8_t x567 = 1;
	int16_t x568 = -1;
	int32_t t141 = -5476389;

    t141 = ((x565==(x566==x567))*x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -3941236134683LL;
	volatile int64_t x571 = INT64_MIN;
	int32_t x572 = -1;
	volatile int32_t t142 = -16367203;

    t142 = ((x569==(x570==x571))*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = INT32_MIN;
	int32_t x574 = INT32_MAX;
	int32_t x575 = INT32_MIN;
	static int32_t x576 = INT32_MAX;
	int32_t t143 = 358434625;

    t143 = ((x573==(x574==x575))*x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x579 = -1;
	volatile int32_t x580 = INT32_MIN;

    t144 = ((x577==(x578==x579))*x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = -28;
	int16_t x583 = INT16_MAX;
	int8_t x584 = INT8_MAX;
	volatile int32_t t145 = -8357;

    t145 = ((x581==(x582==x583))*x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x585 = INT8_MIN;
	volatile int64_t x586 = -302LL;
	int16_t x587 = INT16_MIN;
	volatile int32_t x588 = -1;
	static int32_t t146 = 0;

    t146 = ((x585==(x586==x587))*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 137225590176LLU;
	int32_t x590 = -1;
	volatile uint16_t x591 = UINT16_MAX;
	static int64_t x592 = INT64_MIN;
	volatile int64_t t147 = -2574538943LL;

    t147 = ((x589==(x590==x591))*x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int32_t x594 = INT32_MIN;
	int64_t x595 = 3453121409LL;
	int64_t x596 = -1LL;
	int64_t t148 = -1063189067133327LL;

    t148 = ((x593==(x594==x595))*x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 0U;
	uint8_t x598 = UINT8_MAX;
	int8_t x599 = INT8_MAX;
	int32_t t149 = 359660720;

    t149 = ((x597==(x598==x599))*x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x601 = -426063019305774565LL;
	static int32_t x602 = -1;
	int32_t t150 = -96692749;

    t150 = ((x601==(x602==x603))*x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -1;
	int16_t x606 = INT16_MIN;
	int16_t x607 = INT16_MAX;
	int32_t x608 = -1;
	int32_t t151 = 87524897;

    t151 = ((x605==(x606==x607))*x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = UINT64_MAX;
	int8_t x610 = -1;
	uint16_t x611 = 200U;
	int8_t x612 = -16;
	int32_t t152 = -51724764;

    t152 = ((x609==(x610==x611))*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x615 = 3U;
	volatile uint16_t x616 = 463U;
	int32_t t153 = 5092686;

    t153 = ((x613==(x614==x615))*x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	static uint16_t x619 = 1U;
	volatile int32_t t154 = -1466;

    t154 = ((x617==(x618==x619))*x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MAX;
	int8_t x623 = -1;
	uint8_t x624 = UINT8_MAX;

    t155 = ((x621==(x622==x623))*x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	static int64_t x626 = INT64_MIN;
	int32_t x627 = INT32_MIN;
	int16_t x628 = -1;

    t156 = ((x625==(x626==x627))*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 420;
	uint8_t x630 = UINT8_MAX;
	int16_t x631 = 1;
	uint16_t x632 = 7U;
	volatile int32_t t157 = -3900962;

    t157 = ((x629==(x630==x631))*x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	int16_t x634 = INT16_MAX;
	static int8_t x636 = INT8_MIN;
	int32_t t158 = 927;

    t158 = ((x633==(x634==x635))*x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MAX;
	uint16_t x639 = 1003U;
	volatile int16_t x640 = -15;
	volatile int32_t t159 = -6181390;

    t159 = ((x637==(x638==x639))*x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x642 = 5LLU;
	int16_t x643 = -1;
	volatile uint32_t t160 = 0U;

    t160 = ((x641==(x642==x643))*x644);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = INT16_MAX;
	uint16_t x646 = 61U;
	volatile uint64_t x647 = 208118LLU;

    t161 = ((x645==(x646==x647))*x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	int16_t x650 = INT16_MIN;
	int32_t x652 = -1;
	int32_t t162 = -233;

    t162 = ((x649==(x650==x651))*x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = -2;
	static volatile uint32_t x654 = UINT32_MAX;
	int64_t x655 = INT64_MIN;
	volatile int32_t t163 = -799906;

    t163 = ((x653==(x654==x655))*x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 311915;
	uint8_t x658 = UINT8_MAX;
	uint64_t x659 = 32979059974278LLU;
	uint16_t x660 = UINT16_MAX;

    t164 = ((x657==(x658==x659))*x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x661 = 358522673U;
	static volatile int32_t x662 = -1;
	int32_t x663 = INT32_MIN;
	volatile uint64_t t165 = 40211941423LLU;

    t165 = ((x661==(x662==x663))*x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 157U;
	volatile int32_t x667 = INT32_MIN;
	uint16_t x668 = 14517U;
	static volatile int32_t t166 = -16482;

    t166 = ((x665==(x666==x667))*x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MIN;
	static int16_t x670 = INT16_MIN;
	static int16_t x671 = INT16_MAX;
	volatile int16_t x672 = 3199;

    t167 = ((x669==(x670==x671))*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x674 = INT32_MAX;
	int16_t x676 = INT16_MIN;
	int32_t t168 = 0;

    t168 = ((x673==(x674==x675))*x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int32_t x678 = -612;
	int16_t x679 = INT16_MIN;
	int8_t x680 = 7;
	int32_t t169 = 1;

    t169 = ((x677==(x678==x679))*x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = -1;
	int32_t x682 = INT32_MAX;
	uint32_t x684 = 96763U;
	volatile uint32_t t170 = 52355U;

    t170 = ((x681==(x682==x683))*x684);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x685 = 2210807285LLU;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = -1;
	static int32_t x688 = INT32_MAX;
	volatile int32_t t171 = -17;

    t171 = ((x685==(x686==x687))*x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 15405698821LLU;
	int16_t x690 = INT16_MIN;
	int16_t x692 = -1;
	volatile int32_t t172 = -176756;

    t172 = ((x689==(x690==x691))*x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = 0U;
	volatile int64_t x694 = INT64_MIN;
	int64_t x695 = 8224127588649362LL;
	static int64_t x696 = -28LL;
	volatile int64_t t173 = 34793100LL;

    t173 = ((x693==(x694==x695))*x696);

    if (t173 != -28LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 345399836978892LL;
	uint32_t x698 = 13U;
	uint8_t x700 = UINT8_MAX;
	int32_t t174 = -527899596;

    t174 = ((x697==(x698==x699))*x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x703 = INT16_MIN;
	int64_t x704 = INT64_MIN;
	int64_t t175 = 12LL;

    t175 = ((x701==(x702==x703))*x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = -1;
	int16_t x706 = -33;
	int16_t x707 = INT16_MIN;
	uint32_t x708 = UINT32_MAX;
	volatile uint32_t t176 = 28655U;

    t176 = ((x705==(x706==x707))*x708);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	uint32_t x711 = 91897228U;
	static int64_t x712 = -1LL;
	int64_t t177 = -5009662303LL;

    t177 = ((x709==(x710==x711))*x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -549LL;
	int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MIN;
	volatile int32_t t178 = 12888;

    t178 = ((x713==(x714==x715))*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -25198541288438LL;
	volatile int8_t x719 = -1;
	int16_t x720 = -1;
	static int32_t t179 = -8;

    t179 = ((x717==(x718==x719))*x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 6U;
	int32_t x722 = INT32_MIN;
	static volatile int64_t x723 = INT64_MIN;
	int16_t x724 = INT16_MIN;
	static int32_t t180 = -330673;

    t180 = ((x721==(x722==x723))*x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	static volatile uint8_t x727 = 0U;
	int8_t x728 = -3;
	static int32_t t181 = -846;

    t181 = ((x725==(x726==x727))*x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MIN;
	static uint32_t x730 = UINT32_MAX;
	uint16_t x731 = UINT16_MAX;
	volatile int64_t t182 = -35905LL;

    t182 = ((x729==(x730==x731))*x732);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 314;
	static int32_t x736 = INT32_MAX;
	int32_t t183 = -29833;

    t183 = ((x733==(x734==x735))*x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -12163;
	static int64_t x739 = -1LL;
	int64_t x740 = -1LL;
	volatile int64_t t184 = -4997954LL;

    t184 = ((x737==(x738==x739))*x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -494633245587422281LL;
	volatile int16_t x742 = -1;
	uint8_t x743 = 84U;
	volatile int32_t x744 = INT32_MIN;
	volatile int32_t t185 = -498;

    t185 = ((x741==(x742==x743))*x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x745 = 162U;
	volatile uint32_t x746 = 24178261U;
	uint8_t x747 = UINT8_MAX;
	int64_t x748 = INT64_MIN;
	static int64_t t186 = -52843LL;

    t186 = ((x745==(x746==x747))*x748);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x750 = INT16_MIN;
	uint8_t x751 = 10U;

    t187 = ((x749==(x750==x751))*x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	volatile uint32_t x754 = 34233U;
	uint64_t x755 = 2LLU;
	static volatile int32_t x756 = INT32_MIN;
	int32_t t188 = -195240892;

    t188 = ((x753==(x754==x755))*x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	int64_t x760 = INT64_MAX;
	int64_t t189 = 203138031839LL;

    t189 = ((x757==(x758==x759))*x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 1U;
	int8_t x762 = INT8_MIN;
	volatile int32_t t190 = -8;

    t190 = ((x761==(x762==x763))*x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -59;
	static volatile uint64_t x768 = 200649LLU;
	uint64_t t191 = 1798LLU;

    t191 = ((x765==(x766==x767))*x768);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	static volatile int64_t x772 = INT64_MAX;
	static int64_t t192 = -591540336133LL;

    t192 = ((x769==(x770==x771))*x772);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = INT64_MAX;
	int64_t x775 = -1LL;
	int16_t x776 = INT16_MIN;
	int32_t t193 = -130022;

    t193 = ((x773==(x774==x775))*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 24442U;
	int8_t x778 = 6;
	int64_t x779 = INT64_MAX;
	volatile uint16_t x780 = 0U;
	volatile int32_t t194 = -228611000;

    t194 = ((x777==(x778==x779))*x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 541752499531215LL;
	uint64_t x782 = 2814205452LLU;
	int64_t x783 = INT64_MIN;
	static int8_t x784 = 3;
	static int32_t t195 = 759928679;

    t195 = ((x781==(x782==x783))*x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 61886244LLU;
	static volatile int16_t x786 = 3850;
	uint16_t x787 = UINT16_MAX;
	static volatile int32_t x788 = INT32_MIN;
	int32_t t196 = -305339;

    t196 = ((x785==(x786==x787))*x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	static int16_t x790 = -1;
	volatile int64_t t197 = -60LL;

    t197 = ((x789==(x790==x791))*x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -733702489LL;
	static uint64_t x794 = UINT64_MAX;
	int32_t x795 = INT32_MIN;
	static int8_t x796 = INT8_MAX;
	int32_t t198 = 10;

    t198 = ((x793==(x794==x795))*x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 0LLU;
	volatile int8_t x798 = -1;
	int8_t x799 = INT8_MAX;
	static uint16_t x800 = 11660U;

    t199 = ((x797==(x798==x799))*x800);

    if (t199 != 11660) { NG(); } else { ; }
	
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

