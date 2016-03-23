
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

volatile int16_t x4 = 14;
int8_t x9 = INT8_MAX;
int8_t x10 = -1;
volatile int16_t x15 = 5;
int8_t x21 = -1;
int64_t x24 = -242LL;
static uint32_t x31 = 86U;
uint32_t t6 = 61U;
static int32_t x34 = 55;
int64_t x39 = 9794966580LL;
static int64_t x47 = INT64_MIN;
volatile int64_t t10 = -465182995413569885LL;
int64_t x49 = -247305LL;
static int16_t x58 = 27;
volatile uint8_t x59 = 20U;
uint64_t t13 = 1933767202LLU;
uint16_t x68 = UINT16_MAX;
static int32_t x71 = INT32_MIN;
int32_t x80 = -1;
static volatile int32_t t19 = 2010877;
volatile int16_t x89 = 2;
volatile uint32_t x97 = UINT32_MAX;
uint64_t x99 = UINT64_MAX;
uint8_t x104 = UINT8_MAX;
static volatile uint16_t x113 = UINT16_MAX;
int64_t x114 = INT64_MIN;
static int64_t x115 = INT64_MAX;
static int64_t x125 = -35530LL;
int8_t x126 = INT8_MIN;
volatile int32_t x129 = 15344;
uint8_t x130 = 107U;
volatile int16_t x139 = INT16_MIN;
volatile int32_t t32 = 88643694;
int32_t x141 = 212847179;
int8_t x148 = INT8_MAX;
volatile int64_t x152 = INT64_MIN;
int64_t t35 = 132283LL;
int16_t x154 = INT16_MAX;
volatile int32_t t36 = -18530062;
uint8_t x158 = UINT8_MAX;
int16_t x170 = 8;
volatile int64_t t40 = -1618279934596LL;
static volatile int64_t t43 = -150198841468077389LL;
uint64_t x185 = UINT64_MAX;
static volatile uint64_t t44 = 6416LLU;
uint64_t x189 = 12857703178LLU;
int8_t x191 = -18;
int8_t x202 = INT8_MAX;
volatile int32_t x204 = INT32_MAX;
uint32_t x205 = 36027886U;
volatile int64_t x210 = INT64_MIN;
volatile uint64_t t50 = 12980952LLU;
int8_t x216 = INT8_MAX;
int64_t x218 = -1LL;
volatile uint16_t x223 = 7U;
static int32_t t53 = 10274;
volatile int32_t x227 = INT32_MAX;
int64_t t56 = 6LL;
int32_t x239 = -1;
int16_t x241 = INT16_MIN;
static uint32_t x253 = 462U;
static volatile int32_t t61 = 87573766;
static int32_t t63 = 758119;
volatile uint16_t x266 = 10963U;
volatile int8_t x277 = 1;
static volatile int16_t x279 = -7;
int64_t x280 = INT64_MAX;
int64_t t67 = -39065LL;
int64_t t69 = 3201238LL;
volatile int8_t x289 = -2;
int16_t x293 = -1;
int32_t x295 = 30;
static volatile uint64_t x301 = 277844282419LLU;
volatile uint64_t t72 = 11490146631025508LLU;
static int32_t x312 = -63362153;
volatile int64_t x316 = -56567430515619LL;
static int64_t t75 = -1294401558945LL;
uint32_t x323 = UINT32_MAX;
static uint8_t x327 = 31U;
volatile uint8_t x329 = UINT8_MAX;
int32_t x335 = INT32_MIN;
int32_t x340 = 2871;
uint8_t x352 = 9U;
int64_t x356 = INT64_MIN;
static int32_t x375 = -58;
static int8_t x378 = INT8_MIN;
int8_t x400 = -33;
volatile int64_t t96 = 34069LL;
static int16_t x408 = INT16_MAX;
int16_t x413 = INT16_MAX;
int8_t x417 = INT8_MAX;
static int8_t x420 = INT8_MIN;
int32_t t100 = -854;
int16_t x436 = INT16_MAX;
static uint64_t t105 = 106368905087LLU;
uint8_t x441 = UINT8_MAX;
static int32_t x443 = -40648;
static volatile int16_t x444 = INT16_MIN;
static int64_t x449 = INT64_MIN;
static int32_t x450 = INT32_MIN;
volatile int16_t x452 = INT16_MAX;
volatile int32_t x461 = 1;
volatile uint32_t t111 = 54388344U;
uint32_t x466 = 17390676U;
volatile int32_t t112 = 13;
int8_t x469 = -1;
volatile int32_t t113 = -11;
uint64_t x476 = 2545225LLU;
uint8_t x477 = 4U;
int16_t x490 = INT16_MIN;
volatile int32_t x493 = INT32_MAX;
static int32_t x498 = INT32_MIN;
uint8_t x501 = 21U;
int32_t x505 = -1;
static volatile uint64_t t124 = 3282LLU;
int32_t x520 = 169450;
volatile int64_t x525 = INT64_MIN;
static int32_t t126 = 116099492;
int64_t x532 = -34923LL;
volatile uint32_t x534 = 290504U;
static int32_t t128 = -1350;
int16_t x555 = INT16_MAX;
int8_t x564 = -1;
int32_t x570 = INT32_MIN;
int16_t x573 = -1;
uint32_t x578 = 43U;
int8_t x579 = INT8_MIN;
static int32_t x583 = INT32_MIN;
static volatile int16_t x584 = INT16_MIN;
volatile uint16_t x590 = 84U;
volatile int32_t t141 = 4;
int64_t x609 = -1LL;
volatile int32_t t146 = 14442872;
int32_t x618 = -16332782;
uint32_t x620 = 25897291U;
int64_t t149 = -4566LL;
volatile uint64_t x638 = UINT64_MAX;
int32_t x650 = INT32_MIN;
static int8_t x652 = 12;
uint64_t x672 = 3290857145618LLU;
uint64_t t156 = 231197458300LLU;
uint64_t x678 = UINT64_MAX;
volatile int64_t x690 = INT64_MAX;
volatile int64_t t161 = 15064LL;
volatile int64_t t162 = -7LL;
volatile uint64_t t164 = 317182965131455821LLU;
uint8_t x710 = UINT8_MAX;
volatile int64_t t165 = -7123493653LL;
static int32_t x716 = INT32_MIN;
volatile uint64_t t171 = 374269552672LLU;
static int32_t t173 = -200205;
static int32_t x756 = -1;
int64_t x757 = INT64_MAX;
volatile uint32_t x758 = 393283U;
int32_t t177 = 164801;
int32_t x769 = INT32_MIN;
int16_t x783 = INT16_MIN;
int16_t x785 = INT16_MIN;
static int64_t x787 = 68459977542776LL;
volatile int64_t t183 = -101132148299LL;
volatile int8_t x792 = INT8_MAX;
volatile int32_t t184 = -240483715;
static uint32_t x802 = UINT32_MAX;
volatile uint64_t t188 = 6396455410905442LLU;
int32_t x813 = INT32_MIN;
int8_t x822 = INT8_MAX;
int8_t x823 = INT8_MAX;
int64_t x826 = INT64_MIN;
volatile int32_t x829 = -422977689;
static int16_t x831 = -273;
int16_t x835 = INT16_MIN;
int16_t x849 = INT16_MIN;
static volatile int64_t x856 = INT64_MIN;
int64_t t199 = -16095497022421LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile int8_t x2 = INT8_MIN;
	volatile int32_t x3 = -1;
	int32_t t0 = 95;

    t0 = (((x1!=x2)%x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	volatile int64_t x6 = -1LL;
	static int32_t x7 = INT32_MAX;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 42197203838034LLU;

    t1 = (((x5!=x6)%x7)/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x11 = 91;
	uint16_t x12 = UINT16_MAX;
	static int32_t t2 = -228449398;

    t2 = (((x9!=x10)%x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint64_t x14 = UINT64_MAX;
	uint8_t x16 = 7U;
	int32_t t3 = 0;

    t3 = (((x13!=x14)%x15)/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = 59;
	int32_t x18 = -1;
	static int16_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t4 = -541;

    t4 = (((x17!=x18)%x19)/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = -1831;
	volatile int32_t x23 = -986266598;
	int64_t t5 = 25867734223LL;

    t5 = (((x21!=x22)%x23)/x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	static int8_t x30 = -1;
	static uint16_t x32 = UINT16_MAX;

    t6 = (((x29!=x30)%x31)/x32);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 14U;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = -1;
	static volatile int32_t t7 = -655;

    t7 = (((x33!=x34)%x35)/x36);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	static int32_t x38 = INT32_MAX;
	uint8_t x40 = 11U;
	static int64_t t8 = -1856725974LL;

    t8 = (((x37!=x38)%x39)/x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x41 = INT32_MAX;
	static int32_t x42 = INT32_MIN;
	int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	static int32_t t9 = -92;

    t9 = (((x41!=x42)%x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = INT8_MIN;
	uint64_t x46 = UINT64_MAX;
	int64_t x48 = INT64_MAX;

    t10 = (((x45!=x46)%x47)/x48);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x50 = INT32_MIN;
	static int64_t x51 = INT64_MIN;
	static int32_t x52 = 60424182;
	int64_t t11 = 0LL;

    t11 = (((x49!=x50)%x51)/x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = 88U;
	uint8_t x55 = 12U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 45LLU;

    t12 = (((x53!=x54)%x55)/x56);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 0U;
	static uint64_t x60 = UINT64_MAX;

    t13 = (((x57!=x58)%x59)/x60);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = -842372LL;
	int16_t x62 = 4621;
	int32_t x63 = 1423702;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = 4032;

    t14 = (((x61!=x62)%x63)/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = INT32_MIN;
	static volatile int32_t x66 = INT32_MAX;
	static int8_t x67 = INT8_MIN;
	volatile int32_t t15 = -422984;

    t15 = (((x65!=x66)%x67)/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	int64_t x70 = 1413031064LL;
	int32_t x72 = INT32_MIN;
	volatile int32_t t16 = 73006460;

    t16 = (((x69!=x70)%x71)/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 0;
	uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -1728964612661889934LL;

    t17 = (((x73!=x74)%x75)/x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	static int64_t x78 = -1154213342LL;
	int64_t x79 = INT64_MIN;
	volatile int64_t t18 = 93304097LL;

    t18 = (((x77!=x78)%x79)/x80);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;

    t19 = (((x81!=x82)%x83)/x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 11877402U;
	int64_t x86 = -1LL;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MAX;
	static volatile int32_t t20 = 53;

    t20 = (((x85!=x86)%x87)/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x90 = INT64_MAX;
	volatile int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	int64_t t21 = 7261983871268LL;

    t21 = (((x89!=x90)%x91)/x92);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 91U;
	int32_t x94 = INT32_MIN;
	static uint16_t x95 = UINT16_MAX;
	uint32_t x96 = 16882U;
	volatile uint32_t t22 = 0U;

    t22 = (((x93!=x94)%x95)/x96);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x98 = 3673124856LLU;
	static int32_t x100 = -1;
	static volatile uint64_t t23 = 154527LLU;

    t23 = (((x97!=x98)%x99)/x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = INT16_MIN;
	int16_t x102 = 205;
	int8_t x103 = -1;
	volatile int32_t t24 = -80732851;

    t24 = (((x101!=x102)%x103)/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -122112LL;
	uint8_t x106 = 1U;
	int32_t x107 = -1009876;
	int64_t x108 = 30LL;
	int64_t t25 = -1257004576654653883LL;

    t25 = (((x105!=x106)%x107)/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 15919U;
	int32_t x110 = INT32_MAX;
	uint32_t x111 = 220242U;
	int32_t x112 = -1;
	uint32_t t26 = 100U;

    t26 = (((x109!=x110)%x111)/x112);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x116 = INT64_MAX;
	int64_t t27 = -15LL;

    t27 = (((x113!=x114)%x115)/x116);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MAX;
	uint64_t x122 = 54940481LLU;
	static int32_t x123 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	uint32_t t28 = 6U;

    t28 = (((x121!=x122)%x123)/x124);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x127 = 125355990U;
	int16_t x128 = 2;
	uint32_t t29 = 1U;

    t29 = (((x125!=x126)%x127)/x128);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x131 = UINT32_MAX;
	static int16_t x132 = -1;
	volatile uint32_t t30 = 1386895U;

    t30 = (((x129!=x130)%x131)/x132);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MAX;
	uint32_t x134 = 21319U;
	static int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int64_t t31 = -766981645LL;

    t31 = (((x133!=x134)%x135)/x136);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;
	uint8_t x140 = 14U;

    t32 = (((x137!=x138)%x139)/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x142 = -1;
	volatile int32_t x143 = INT32_MAX;
	volatile int64_t x144 = INT64_MIN;
	int64_t t33 = -29153936LL;

    t33 = (((x141!=x142)%x143)/x144);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = 24;
	int32_t x146 = -1;
	int64_t x147 = INT64_MAX;
	static int64_t t34 = 111164060825812321LL;

    t34 = (((x145!=x146)%x147)/x148);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = 4;
	static uint64_t x150 = UINT64_MAX;
	static volatile uint16_t x151 = UINT16_MAX;

    t35 = (((x149!=x150)%x151)/x152);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x153 = UINT32_MAX;
	uint16_t x155 = UINT16_MAX;
	static int8_t x156 = INT8_MIN;

    t36 = (((x153!=x154)%x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = INT32_MIN;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -5;
	static uint64_t t37 = 6719803LLU;

    t37 = (((x157!=x158)%x159)/x160);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 179;
	int8_t x162 = -8;
	int16_t x163 = INT16_MIN;
	int64_t x164 = -108407588127LL;
	volatile int64_t t38 = 211815LL;

    t38 = (((x161!=x162)%x163)/x164);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	int32_t x166 = -1;
	static uint32_t x167 = 198U;
	volatile int32_t x168 = INT32_MIN;
	volatile uint32_t t39 = 310391U;

    t39 = (((x165!=x166)%x167)/x168);

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x169 = 41U;
	int64_t x171 = 116037964115422362LL;
	volatile int8_t x172 = -59;

    t40 = (((x169!=x170)%x171)/x172);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = -7198;
	uint8_t x174 = 0U;
	int32_t x175 = INT32_MIN;
	volatile int8_t x176 = -6;
	volatile int32_t t41 = -294979378;

    t41 = (((x173!=x174)%x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	uint16_t x178 = 1U;
	volatile int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t42 = 22722LL;

    t42 = (((x177!=x178)%x179)/x180);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x181 = UINT64_MAX;
	int64_t x182 = -826LL;
	volatile int32_t x183 = INT32_MAX;
	int64_t x184 = 1LL;

    t43 = (((x181!=x182)%x183)/x184);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x186 = INT64_MAX;
	static uint64_t x187 = 851980085322379928LLU;
	int32_t x188 = INT32_MIN;

    t44 = (((x185!=x186)%x187)/x188);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x190 = INT32_MAX;
	volatile uint16_t x192 = UINT16_MAX;
	int32_t t45 = 1;

    t45 = (((x189!=x190)%x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x193 = -1LL;
	static uint32_t x194 = 6U;
	int64_t x195 = INT64_MIN;
	static int32_t x196 = -1;
	int64_t t46 = -447486353842746430LL;

    t46 = (((x193!=x194)%x195)/x196);

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MIN;
	static int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t47 = 228095721545735LL;

    t47 = (((x197!=x198)%x199)/x200);

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 67U;
	uint32_t x203 = UINT32_MAX;
	volatile uint32_t t48 = 83U;

    t48 = (((x201!=x202)%x203)/x204);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x206 = INT16_MIN;
	volatile int16_t x207 = -10;
	int8_t x208 = INT8_MIN;
	int32_t t49 = -69498;

    t49 = (((x205!=x206)%x207)/x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x209 = 4;
	static uint64_t x211 = UINT64_MAX;
	uint32_t x212 = UINT32_MAX;

    t50 = (((x209!=x210)%x211)/x212);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t51 = -160594686;

    t51 = (((x213!=x214)%x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -1;
	int32_t x219 = 313;
	int32_t x220 = -429;
	static int32_t t52 = -93741197;

    t52 = (((x217!=x218)%x219)/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = UINT32_MAX;
	int16_t x222 = -25;
	volatile int16_t x224 = INT16_MIN;

    t53 = (((x221!=x222)%x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = -1;
	static uint8_t x226 = 1U;
	static uint64_t x228 = 8143528368983669223LLU;
	volatile uint64_t t54 = 1447017LLU;

    t54 = (((x225!=x226)%x227)/x228);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MAX;
	volatile int32_t x231 = -39638790;
	uint32_t x232 = 124891789U;
	uint32_t t55 = 16272U;

    t55 = (((x229!=x230)%x231)/x232);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = 0;
	int64_t x234 = -1LL;
	uint16_t x235 = UINT16_MAX;
	static volatile int64_t x236 = INT64_MAX;

    t56 = (((x233!=x234)%x235)/x236);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x237 = 1U;
	int8_t x238 = -9;
	int16_t x240 = -423;
	volatile int32_t t57 = 16;

    t57 = (((x237!=x238)%x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x242 = 1289619861309LL;
	static int16_t x243 = INT16_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t58 = 122082452;

    t58 = (((x241!=x242)%x243)/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x245 = 6U;
	static int8_t x246 = -8;
	uint16_t x247 = 244U;
	int16_t x248 = -1;
	volatile int32_t t59 = 781;

    t59 = (((x245!=x246)%x247)/x248);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = -1;
	int32_t x250 = 905033;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;
	static int32_t t60 = -5368706;

    t60 = (((x249!=x250)%x251)/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x254 = 7U;
	int16_t x255 = -1;
	int32_t x256 = 13820;

    t61 = (((x253!=x254)%x255)/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;
	volatile int64_t t62 = -3944LL;

    t62 = (((x257!=x258)%x259)/x260);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = 419199385921LLU;
	static volatile int32_t x262 = 163262223;
	uint16_t x263 = UINT16_MAX;
	uint16_t x264 = 166U;

    t63 = (((x261!=x262)%x263)/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = INT64_MIN;
	uint8_t x267 = 7U;
	int64_t x268 = INT64_MAX;
	volatile int64_t t64 = 2471917LL;

    t64 = (((x265!=x266)%x267)/x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MIN;
	int64_t x270 = 10771LL;
	static int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	int64_t t65 = -131750410639419LL;

    t65 = (((x269!=x270)%x271)/x272);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x273 = 6068126805782425LL;
	static int32_t x274 = INT32_MAX;
	int8_t x275 = INT8_MAX;
	uint64_t x276 = 219530573027LLU;
	uint64_t t66 = 2716LLU;

    t66 = (((x273!=x274)%x275)/x276);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x278 = UINT8_MAX;

    t67 = (((x277!=x278)%x279)/x280);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x281 = -48;
	int64_t x282 = -1LL;
	static volatile uint8_t x283 = 1U;
	static volatile uint64_t x284 = UINT64_MAX;
	static volatile uint64_t t68 = 1415LLU;

    t68 = (((x281!=x282)%x283)/x284);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x285 = INT64_MAX;
	static int8_t x286 = 0;
	uint32_t x287 = 3U;
	int64_t x288 = INT64_MAX;

    t69 = (((x285!=x286)%x287)/x288);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	static int32_t x292 = -1;
	volatile int32_t t70 = 128;

    t70 = (((x289!=x290)%x291)/x292);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x294 = INT16_MIN;
	volatile int64_t x296 = 27759122LL;
	static volatile int64_t t71 = 18616819LL;

    t71 = (((x293!=x294)%x295)/x296);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x302 = 75U;
	volatile int16_t x303 = INT16_MIN;
	uint64_t x304 = 576204LLU;

    t72 = (((x301!=x302)%x303)/x304);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = 835LL;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = UINT32_MAX;
	uint32_t t73 = 1016145U;

    t73 = (((x305!=x306)%x307)/x308);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x309 = -500;
	int64_t x310 = -4433851569557441254LL;
	uint8_t x311 = 72U;
	int32_t t74 = 7406;

    t74 = (((x309!=x310)%x311)/x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	static int8_t x315 = INT8_MIN;

    t75 = (((x313!=x314)%x315)/x316);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x317 = -461;
	static int64_t x318 = -1LL;
	static volatile int8_t x319 = INT8_MIN;
	int32_t x320 = 63;
	static int32_t t76 = -18957;

    t76 = (((x317!=x318)%x319)/x320);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = 35U;
	volatile uint8_t x322 = UINT8_MAX;
	uint8_t x324 = 24U;
	uint32_t t77 = 5714U;

    t77 = (((x321!=x322)%x323)/x324);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x325 = -1;
	volatile int64_t x326 = -1LL;
	uint16_t x328 = 485U;
	int32_t t78 = -2;

    t78 = (((x325!=x326)%x327)/x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x330 = -1;
	static volatile int64_t x331 = INT64_MAX;
	int32_t x332 = INT32_MIN;
	int64_t t79 = -82520040451LL;

    t79 = (((x329!=x330)%x331)/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x333 = 0U;
	int64_t x334 = -1LL;
	int64_t x336 = 32837999LL;
	int64_t t80 = 33LL;

    t80 = (((x333!=x334)%x335)/x336);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x337 = 24U;
	int32_t x338 = -1;
	uint8_t x339 = 31U;
	static int32_t t81 = 1155;

    t81 = (((x337!=x338)%x339)/x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MAX;
	int32_t x342 = INT32_MIN;
	static int64_t x343 = -5506706695183251LL;
	uint8_t x344 = UINT8_MAX;
	int64_t t82 = -37LL;

    t82 = (((x341!=x342)%x343)/x344);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = 1557486625LL;
	uint64_t x351 = 2LLU;
	volatile uint64_t t83 = 53060LLU;

    t83 = (((x349!=x350)%x351)/x352);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x353 = 15142U;
	int64_t x354 = -298381744LL;
	int32_t x355 = -3;
	static volatile int64_t t84 = 5817LL;

    t84 = (((x353!=x354)%x355)/x356);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x357 = -1;
	int64_t x358 = INT64_MAX;
	int8_t x359 = 1;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t85 = 264797839;

    t85 = (((x357!=x358)%x359)/x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x361 = -63983563297999943LL;
	uint16_t x362 = 18U;
	int32_t x363 = INT32_MAX;
	int32_t x364 = -14;
	volatile int32_t t86 = 70069;

    t86 = (((x361!=x362)%x363)/x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x365 = UINT64_MAX;
	static uint32_t x366 = 9922340U;
	static int16_t x367 = -1;
	volatile uint64_t x368 = 297LLU;
	volatile uint64_t t87 = 303391247784690LLU;

    t87 = (((x365!=x366)%x367)/x368);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x369 = 41U;
	static int32_t x370 = -1;
	volatile int64_t x371 = -606503LL;
	int32_t x372 = -45;
	int64_t t88 = 54998462254216LL;

    t88 = (((x369!=x370)%x371)/x372);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 291U;
	int64_t x374 = INT64_MAX;
	int16_t x376 = -7;
	int32_t t89 = -50086;

    t89 = (((x373!=x374)%x375)/x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x377 = -1274784302LL;
	int8_t x379 = -1;
	static int32_t x380 = 3253;
	volatile int32_t t90 = 3435;

    t90 = (((x377!=x378)%x379)/x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x381 = 52U;
	uint8_t x382 = 4U;
	static volatile int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;
	int32_t t91 = -47400991;

    t91 = (((x381!=x382)%x383)/x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x385 = INT32_MAX;
	static volatile int32_t x386 = INT32_MIN;
	int16_t x387 = -6;
	int8_t x388 = INT8_MIN;
	static int32_t t92 = 422580;

    t92 = (((x385!=x386)%x387)/x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MAX;
	static int8_t x392 = INT8_MIN;
	volatile int64_t t93 = 72758395320481LL;

    t93 = (((x389!=x390)%x391)/x392);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = 10;
	volatile uint32_t x394 = 191182224U;
	volatile int8_t x395 = INT8_MIN;
	volatile uint32_t x396 = 6949U;
	uint32_t t94 = 3688032U;

    t94 = (((x393!=x394)%x395)/x396);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x397 = INT16_MIN;
	static volatile uint8_t x398 = 34U;
	int32_t x399 = INT32_MIN;
	int32_t t95 = 48770;

    t95 = (((x397!=x398)%x399)/x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MIN;
	static int64_t x403 = INT64_MIN;
	static volatile int64_t x404 = INT64_MAX;

    t96 = (((x401!=x402)%x403)/x404);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x405 = 22243U;
	volatile int64_t x406 = -1LL;
	static uint32_t x407 = UINT32_MAX;
	static volatile uint32_t t97 = 2140U;

    t97 = (((x405!=x406)%x407)/x408);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x409 = UINT64_MAX;
	static uint64_t x410 = UINT64_MAX;
	int8_t x411 = 1;
	int32_t x412 = INT32_MAX;
	static volatile int32_t t98 = -225453720;

    t98 = (((x409!=x410)%x411)/x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x414 = -13LL;
	volatile uint8_t x415 = 4U;
	int16_t x416 = -1;
	static volatile int32_t t99 = -1;

    t99 = (((x413!=x414)%x415)/x416);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x418 = UINT64_MAX;
	int32_t x419 = INT32_MAX;

    t100 = (((x417!=x418)%x419)/x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x421 = 3U;
	static int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MAX;
	static int8_t x424 = 2;
	int32_t t101 = -11;

    t101 = (((x421!=x422)%x423)/x424);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MIN;
	int64_t x426 = INT64_MAX;
	int16_t x427 = INT16_MAX;
	uint32_t x428 = 1156617U;
	uint32_t t102 = 3U;

    t102 = (((x425!=x426)%x427)/x428);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = INT16_MAX;
	static int8_t x430 = -1;
	volatile int32_t x431 = -7046751;
	int16_t x432 = -1;
	int32_t t103 = -1;

    t103 = (((x429!=x430)%x431)/x432);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = -1;
	int32_t x434 = -1;
	volatile int64_t x435 = -1LL;
	static int64_t t104 = 510380LL;

    t104 = (((x433!=x434)%x435)/x436);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x437 = INT32_MIN;
	int32_t x438 = 0;
	static uint64_t x439 = 1124014164773825767LLU;
	int16_t x440 = -1;

    t105 = (((x437!=x438)%x439)/x440);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x442 = UINT32_MAX;
	volatile int32_t t106 = 1;

    t106 = (((x441!=x442)%x443)/x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = 24;
	uint64_t x446 = 10527LLU;
	int64_t x447 = INT64_MIN;
	uint16_t x448 = 10666U;
	volatile int64_t t107 = -6175739830860LL;

    t107 = (((x445!=x446)%x447)/x448);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x451 = INT8_MIN;
	static volatile int32_t t108 = 50;

    t108 = (((x449!=x450)%x451)/x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x453 = 2;
	uint8_t x454 = 116U;
	static volatile int16_t x455 = -1;
	int16_t x456 = INT16_MAX;
	static int32_t t109 = -511214;

    t109 = (((x453!=x454)%x455)/x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x457 = 2900LLU;
	volatile int8_t x458 = INT8_MAX;
	int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	volatile int64_t t110 = 22LL;

    t110 = (((x457!=x458)%x459)/x460);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x462 = -1LL;
	int8_t x463 = INT8_MAX;
	uint32_t x464 = UINT32_MAX;

    t111 = (((x461!=x462)%x463)/x464);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x465 = 2028343LLU;
	static volatile uint16_t x467 = UINT16_MAX;
	int16_t x468 = -6610;

    t112 = (((x465!=x466)%x467)/x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x470 = UINT32_MAX;
	volatile int16_t x471 = -1;
	int8_t x472 = 1;

    t113 = (((x469!=x470)%x471)/x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x473 = UINT32_MAX;
	int64_t x474 = -88154968LL;
	int32_t x475 = -1585;
	volatile uint64_t t114 = 120178549161364426LLU;

    t114 = (((x473!=x474)%x475)/x476);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x478 = 1526941U;
	uint32_t x479 = 182668U;
	uint32_t x480 = 1532U;
	uint32_t t115 = 6571U;

    t115 = (((x477!=x478)%x479)/x480);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x481 = INT8_MIN;
	int64_t x482 = -1LL;
	int64_t x483 = INT64_MIN;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t116 = 32531785LL;

    t116 = (((x481!=x482)%x483)/x484);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x485 = UINT16_MAX;
	static uint32_t x486 = UINT32_MAX;
	int64_t x487 = INT64_MIN;
	int16_t x488 = INT16_MAX;
	volatile int64_t t117 = -3507374399916945LL;

    t117 = (((x485!=x486)%x487)/x488);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x489 = UINT64_MAX;
	uint8_t x491 = 7U;
	int32_t x492 = INT32_MAX;
	int32_t t118 = 473;

    t118 = (((x489!=x490)%x491)/x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x494 = INT64_MAX;
	int8_t x495 = 19;
	uint32_t x496 = UINT32_MAX;
	volatile uint32_t t119 = 16361293U;

    t119 = (((x493!=x494)%x495)/x496);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x497 = -1;
	uint64_t x499 = 3756031LLU;
	uint64_t x500 = 580897381LLU;
	static uint64_t t120 = 998559894LLU;

    t120 = (((x497!=x498)%x499)/x500);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x502 = 2008;
	static int32_t x503 = -1;
	int8_t x504 = INT8_MIN;
	int32_t t121 = -7660691;

    t121 = (((x501!=x502)%x503)/x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x506 = -1;
	int8_t x507 = -13;
	uint8_t x508 = 1U;
	int32_t t122 = 0;

    t122 = (((x505!=x506)%x507)/x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x509 = -11679;
	uint64_t x510 = UINT64_MAX;
	uint32_t x511 = 389821625U;
	uint64_t x512 = 662708730124LLU;
	uint64_t t123 = 1005080254LLU;

    t123 = (((x509!=x510)%x511)/x512);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x513 = INT16_MIN;
	static int8_t x514 = 0;
	uint64_t x515 = 5487981LLU;
	int32_t x516 = INT32_MIN;

    t124 = (((x513!=x514)%x515)/x516);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x517 = -21LL;
	uint16_t x518 = 1U;
	volatile int32_t x519 = -143147;
	volatile int32_t t125 = -8884;

    t125 = (((x517!=x518)%x519)/x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x526 = 106U;
	volatile int32_t x527 = INT32_MIN;
	volatile int32_t x528 = -1;

    t126 = (((x525!=x526)%x527)/x528);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = 28U;
	uint64_t x530 = 66504349LLU;
	int32_t x531 = INT32_MAX;
	volatile int64_t t127 = 110688835567796LL;

    t127 = (((x529!=x530)%x531)/x532);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = -1;
	int16_t x535 = 5116;
	int8_t x536 = INT8_MIN;

    t128 = (((x533!=x534)%x535)/x536);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x537 = 13U;
	uint16_t x538 = UINT16_MAX;
	int32_t x539 = INT32_MIN;
	int32_t x540 = INT32_MIN;
	int32_t t129 = -28;

    t129 = (((x537!=x538)%x539)/x540);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	int8_t x543 = INT8_MIN;
	int16_t x544 = -34;
	int32_t t130 = -17481;

    t130 = (((x541!=x542)%x543)/x544);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	volatile uint16_t x546 = 113U;
	int8_t x547 = -8;
	int16_t x548 = INT16_MIN;
	int32_t t131 = 501265;

    t131 = (((x545!=x546)%x547)/x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x549 = INT8_MIN;
	int64_t x550 = INT64_MAX;
	int8_t x551 = INT8_MAX;
	uint64_t x552 = 2067581484154344LLU;
	uint64_t t132 = 10LLU;

    t132 = (((x549!=x550)%x551)/x552);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x553 = -1;
	volatile int8_t x554 = INT8_MAX;
	int32_t x556 = INT32_MAX;
	static volatile int32_t t133 = 29853608;

    t133 = (((x553!=x554)%x555)/x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = 23361552;
	int64_t x558 = -1LL;
	static volatile int16_t x559 = INT16_MIN;
	uint8_t x560 = 41U;
	volatile int32_t t134 = 123789;

    t134 = (((x557!=x558)%x559)/x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x561 = 11U;
	int8_t x562 = -7;
	int32_t x563 = INT32_MIN;
	volatile int32_t t135 = -142450;

    t135 = (((x561!=x562)%x563)/x564);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x571 = -1;
	volatile int8_t x572 = INT8_MIN;
	volatile int32_t t136 = 1488;

    t136 = (((x569!=x570)%x571)/x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MIN;
	volatile int32_t x576 = -2019211;
	int32_t t137 = 113664542;

    t137 = (((x573!=x574)%x575)/x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = -1;
	volatile uint64_t x580 = UINT64_MAX;
	static uint64_t t138 = 106943410LLU;

    t138 = (((x577!=x578)%x579)/x580);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x581 = 1470312101916745500LLU;
	static volatile int32_t x582 = 42870;
	volatile int32_t t139 = 70096363;

    t139 = (((x581!=x582)%x583)/x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x585 = -1LL;
	static volatile int64_t x586 = INT64_MIN;
	uint8_t x587 = UINT8_MAX;
	static volatile uint8_t x588 = 61U;
	int32_t t140 = 241488;

    t140 = (((x585!=x586)%x587)/x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x589 = 4U;
	int8_t x591 = -1;
	static int8_t x592 = -1;

    t141 = (((x589!=x590)%x591)/x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x597 = -1;
	uint8_t x598 = 20U;
	int8_t x599 = -4;
	int8_t x600 = INT8_MIN;
	volatile int32_t t142 = 3241818;

    t142 = (((x597!=x598)%x599)/x600);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x601 = INT16_MAX;
	int32_t x602 = 32564;
	int16_t x603 = 3;
	int16_t x604 = -1;
	volatile int32_t t143 = -404086;

    t143 = (((x601!=x602)%x603)/x604);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x605 = 1;
	int16_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	int64_t x608 = -1LL;
	int64_t t144 = 2877430LL;

    t144 = (((x605!=x606)%x607)/x608);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x610 = 23;
	int64_t x611 = -12983LL;
	uint64_t x612 = 900482447325870LLU;
	static volatile uint64_t t145 = 74558208965759LLU;

    t145 = (((x609!=x610)%x611)/x612);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x613 = UINT64_MAX;
	uint32_t x614 = 26718997U;
	volatile int32_t x615 = INT32_MAX;
	uint8_t x616 = UINT8_MAX;

    t146 = (((x613!=x614)%x615)/x616);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x617 = -47LL;
	uint32_t x619 = 357100U;
	volatile uint32_t t147 = 1125U;

    t147 = (((x617!=x618)%x619)/x620);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x621 = UINT16_MAX;
	volatile int8_t x622 = 11;
	int64_t x623 = INT64_MAX;
	int64_t x624 = INT64_MIN;
	int64_t t148 = 173517878631057666LL;

    t148 = (((x621!=x622)%x623)/x624);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x633 = -1LL;
	static volatile uint8_t x634 = 52U;
	int64_t x635 = INT64_MIN;
	int16_t x636 = 3;

    t149 = (((x633!=x634)%x635)/x636);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x637 = INT8_MAX;
	int16_t x639 = -4;
	static uint16_t x640 = UINT16_MAX;
	int32_t t150 = 190834;

    t150 = (((x637!=x638)%x639)/x640);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x641 = 17U;
	uint64_t x642 = 9664560LLU;
	static uint64_t x643 = 2LLU;
	static int16_t x644 = INT16_MIN;
	volatile uint64_t t151 = 16044897962653LLU;

    t151 = (((x641!=x642)%x643)/x644);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x645 = INT64_MIN;
	int16_t x646 = INT16_MAX;
	static int32_t x647 = INT32_MIN;
	int64_t x648 = INT64_MIN;
	int64_t t152 = 8589528795440306LL;

    t152 = (((x645!=x646)%x647)/x648);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x649 = 12U;
	int64_t x651 = INT64_MIN;
	int64_t t153 = 3LL;

    t153 = (((x649!=x650)%x651)/x652);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x653 = 1;
	volatile uint32_t x654 = 0U;
	int64_t x655 = INT64_MAX;
	int32_t x656 = -5981;
	int64_t t154 = 120282LL;

    t154 = (((x653!=x654)%x655)/x656);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x657 = -1;
	int16_t x658 = -1;
	int64_t x659 = 277LL;
	uint8_t x660 = 1U;
	volatile int64_t t155 = -10LL;

    t155 = (((x657!=x658)%x659)/x660);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x669 = 1157U;
	int16_t x670 = INT16_MIN;
	volatile uint64_t x671 = UINT64_MAX;

    t156 = (((x669!=x670)%x671)/x672);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x673 = -1;
	static int32_t x674 = -12;
	int16_t x675 = INT16_MAX;
	uint64_t x676 = 2LLU;
	uint64_t t157 = 12095904622873606LLU;

    t157 = (((x673!=x674)%x675)/x676);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x677 = 1165;
	int8_t x679 = INT8_MAX;
	volatile uint64_t x680 = 6315642LLU;
	static volatile uint64_t t158 = 242580375607553LLU;

    t158 = (((x677!=x678)%x679)/x680);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x681 = UINT16_MAX;
	int64_t x682 = INT64_MAX;
	uint16_t x683 = 1880U;
	static int32_t x684 = INT32_MIN;
	volatile int32_t t159 = -22;

    t159 = (((x681!=x682)%x683)/x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x685 = -1;
	int32_t x686 = INT32_MIN;
	int32_t x687 = -1;
	uint8_t x688 = 114U;
	int32_t t160 = 390;

    t160 = (((x685!=x686)%x687)/x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x689 = -1LL;
	static int64_t x691 = -1706015LL;
	static volatile int16_t x692 = -518;

    t161 = (((x689!=x690)%x691)/x692);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x693 = INT8_MAX;
	uint32_t x694 = UINT32_MAX;
	uint8_t x695 = 3U;
	int64_t x696 = -19634271087613781LL;

    t162 = (((x693!=x694)%x695)/x696);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x697 = INT64_MAX;
	static volatile int64_t x698 = INT64_MIN;
	uint32_t x699 = 277U;
	volatile int8_t x700 = INT8_MIN;
	static volatile uint32_t t163 = 29U;

    t163 = (((x697!=x698)%x699)/x700);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x705 = UINT64_MAX;
	uint64_t x706 = 333759564117080271LLU;
	uint64_t x707 = 520459747084019447LLU;
	static uint64_t x708 = 212014688024503LLU;

    t164 = (((x705!=x706)%x707)/x708);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x709 = INT64_MIN;
	static int16_t x711 = INT16_MIN;
	int64_t x712 = -1LL;

    t165 = (((x709!=x710)%x711)/x712);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x713 = -2;
	uint32_t x714 = 178043972U;
	int64_t x715 = -1LL;
	volatile int64_t t166 = -1LL;

    t166 = (((x713!=x714)%x715)/x716);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x717 = -1;
	static int16_t x718 = 504;
	int32_t x719 = -106;
	uint32_t x720 = 42656U;
	volatile uint32_t t167 = 26603U;

    t167 = (((x717!=x718)%x719)/x720);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x721 = 23U;
	int32_t x722 = INT32_MIN;
	int32_t x723 = -5433;
	volatile int64_t x724 = 51LL;
	int64_t t168 = 2621489LL;

    t168 = (((x721!=x722)%x723)/x724);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x725 = INT32_MIN;
	uint64_t x726 = 26798178487529280LLU;
	static volatile int8_t x727 = INT8_MIN;
	uint64_t x728 = 42999426896LLU;
	static uint64_t t169 = 5109310LLU;

    t169 = (((x725!=x726)%x727)/x728);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x729 = INT64_MAX;
	volatile int16_t x730 = INT16_MIN;
	int16_t x731 = 37;
	uint64_t x732 = UINT64_MAX;
	uint64_t t170 = 4868089736703LLU;

    t170 = (((x729!=x730)%x731)/x732);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x734 = -16;
	volatile int16_t x735 = -1;
	volatile uint64_t x736 = 272199852LLU;

    t171 = (((x733!=x734)%x735)/x736);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x741 = -1;
	static uint64_t x742 = 3078532LLU;
	uint16_t x743 = 29107U;
	int64_t x744 = -3LL;
	volatile int64_t t172 = -1569LL;

    t172 = (((x741!=x742)%x743)/x744);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x745 = INT64_MIN;
	int32_t x746 = INT32_MIN;
	int32_t x747 = INT32_MIN;
	int8_t x748 = -1;

    t173 = (((x745!=x746)%x747)/x748);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x749 = INT16_MAX;
	static uint16_t x750 = 14U;
	uint64_t x751 = 81066273LLU;
	uint16_t x752 = 163U;
	volatile uint64_t t174 = 611LLU;

    t174 = (((x749!=x750)%x751)/x752);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x753 = 799245357LLU;
	int32_t x754 = INT32_MIN;
	static int32_t x755 = INT32_MIN;
	int32_t t175 = 995901221;

    t175 = (((x753!=x754)%x755)/x756);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x759 = INT16_MIN;
	static int8_t x760 = 1;
	static int32_t t176 = 5;

    t176 = (((x757!=x758)%x759)/x760);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint16_t x761 = UINT16_MAX;
	int16_t x762 = INT16_MAX;
	static uint16_t x763 = 189U;
	volatile uint16_t x764 = 18452U;

    t177 = (((x761!=x762)%x763)/x764);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x765 = UINT64_MAX;
	int16_t x766 = INT16_MAX;
	int16_t x767 = INT16_MIN;
	int64_t x768 = -1LL;
	static volatile int64_t t178 = 1LL;

    t178 = (((x765!=x766)%x767)/x768);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x770 = 1;
	uint32_t x771 = 6017794U;
	volatile int8_t x772 = INT8_MIN;
	uint32_t t179 = 654646U;

    t179 = (((x769!=x770)%x771)/x772);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x773 = INT16_MAX;
	volatile int16_t x774 = INT16_MIN;
	int8_t x775 = 27;
	uint32_t x776 = 79996233U;
	volatile uint32_t t180 = 245937339U;

    t180 = (((x773!=x774)%x775)/x776);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x777 = -11010674829LL;
	uint8_t x778 = 15U;
	int32_t x779 = INT32_MIN;
	static int64_t x780 = INT64_MIN;
	volatile int64_t t181 = -734419114337LL;

    t181 = (((x777!=x778)%x779)/x780);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x781 = -1;
	volatile uint32_t x782 = UINT32_MAX;
	int8_t x784 = -49;
	int32_t t182 = 191456920;

    t182 = (((x781!=x782)%x783)/x784);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x786 = -1;
	uint32_t x788 = 2349858U;

    t183 = (((x785!=x786)%x787)/x788);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = UINT16_MAX;
	static int16_t x791 = -1;

    t184 = (((x789!=x790)%x791)/x792);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x797 = -3;
	int32_t x798 = INT32_MAX;
	int16_t x799 = INT16_MIN;
	volatile int32_t x800 = -1;
	int32_t t185 = 23177;

    t185 = (((x797!=x798)%x799)/x800);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x801 = UINT16_MAX;
	static uint16_t x803 = UINT16_MAX;
	volatile int8_t x804 = INT8_MIN;
	int32_t t186 = 25623526;

    t186 = (((x801!=x802)%x803)/x804);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x805 = 114U;
	int32_t x806 = 14414;
	volatile int8_t x807 = INT8_MIN;
	static uint64_t x808 = 360343379624981LLU;
	volatile uint64_t t187 = 1991005805054805LLU;

    t187 = (((x805!=x806)%x807)/x808);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x809 = INT64_MIN;
	int64_t x810 = -1LL;
	static int32_t x811 = INT32_MIN;
	uint64_t x812 = 18LLU;

    t188 = (((x809!=x810)%x811)/x812);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x814 = INT8_MIN;
	uint16_t x815 = 924U;
	int64_t x816 = 366286386323701419LL;
	int64_t t189 = -6LL;

    t189 = (((x813!=x814)%x815)/x816);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x817 = INT16_MIN;
	volatile int64_t x818 = -1LL;
	int32_t x819 = 344;
	volatile int64_t x820 = INT64_MIN;
	int64_t t190 = 1LL;

    t190 = (((x817!=x818)%x819)/x820);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x821 = 6;
	static uint16_t x824 = 136U;
	int32_t t191 = -11843031;

    t191 = (((x821!=x822)%x823)/x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x827 = 10421;
	static int64_t x828 = INT64_MAX;
	int64_t t192 = -1996271292301603LL;

    t192 = (((x825!=x826)%x827)/x828);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x830 = INT64_MIN;
	volatile uint32_t x832 = UINT32_MAX;
	volatile uint32_t t193 = 8U;

    t193 = (((x829!=x830)%x831)/x832);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x833 = -7692;
	uint32_t x834 = UINT32_MAX;
	uint32_t x836 = 5U;
	uint32_t t194 = 42500658U;

    t194 = (((x833!=x834)%x835)/x836);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x837 = INT16_MAX;
	int32_t x838 = -1;
	static volatile uint64_t x839 = UINT64_MAX;
	int64_t x840 = -172046673246LL;
	static uint64_t t195 = 8796467974237451585LLU;

    t195 = (((x837!=x838)%x839)/x840);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x841 = -4;
	static int8_t x842 = -1;
	int64_t x843 = INT64_MAX;
	int64_t x844 = 131863881021590LL;
	int64_t t196 = 321333LL;

    t196 = (((x841!=x842)%x843)/x844);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x845 = INT8_MAX;
	uint64_t x846 = 4263924237311511LLU;
	static int64_t x847 = -809543378LL;
	static int32_t x848 = INT32_MIN;
	static volatile int64_t t197 = -4LL;

    t197 = (((x845!=x846)%x847)/x848);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x850 = INT8_MAX;
	int64_t x851 = -1LL;
	int16_t x852 = INT16_MIN;
	static volatile int64_t t198 = -196LL;

    t198 = (((x849!=x850)%x851)/x852);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x853 = -107992479079695LL;
	int64_t x854 = INT64_MIN;
	int16_t x855 = INT16_MIN;

    t199 = (((x853!=x854)%x855)/x856);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

