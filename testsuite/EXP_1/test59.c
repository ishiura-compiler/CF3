
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

static volatile uint8_t x2 = 126U;
int8_t x10 = INT8_MAX;
volatile int32_t t1 = 0;
int16_t x16 = -4639;
int64_t t2 = 128263673944LL;
int8_t x18 = -1;
int64_t x19 = -1LL;
int64_t x26 = 230858062LL;
volatile int8_t x33 = -1;
static int32_t x34 = INT32_MAX;
uint64_t x45 = 27LLU;
volatile int16_t x48 = 1300;
int32_t x51 = INT32_MIN;
uint8_t x65 = UINT8_MAX;
volatile uint64_t t13 = 52LLU;
static int8_t x73 = INT8_MAX;
int32_t t14 = -480603310;
int8_t x85 = INT8_MIN;
int8_t x113 = INT8_MIN;
volatile uint16_t x115 = 341U;
uint32_t t24 = 7642U;
static uint8_t x118 = UINT8_MAX;
static int16_t x125 = INT16_MIN;
int32_t x126 = -1;
uint8_t x128 = 22U;
static int32_t t27 = 1;
uint16_t x130 = UINT16_MAX;
int16_t x131 = -937;
static volatile uint8_t x138 = 31U;
static uint8_t x139 = UINT8_MAX;
uint8_t x143 = UINT8_MAX;
int32_t x158 = -1;
static uint16_t x159 = 16U;
volatile int8_t x160 = -2;
int16_t x161 = INT16_MIN;
uint32_t x179 = UINT32_MAX;
uint64_t x180 = 5144481066934LLU;
volatile int32_t t38 = -410;
int16_t x194 = 50;
int16_t x195 = INT16_MIN;
int16_t x196 = 4673;
static volatile uint64_t x201 = 171309LLU;
int64_t x209 = -3046LL;
volatile int16_t x217 = -1;
uint64_t x227 = 1570293LLU;
static int32_t x231 = -1;
static int16_t x232 = INT16_MIN;
volatile uint16_t x234 = 6U;
volatile int64_t t49 = 269847731083452377LL;
int64_t x237 = INT64_MAX;
static int64_t t50 = -1550883331LL;
static volatile uint16_t x250 = 882U;
int32_t x252 = -1;
int8_t x256 = INT8_MIN;
static int32_t t53 = 1272;
int32_t x261 = -1;
uint16_t x264 = 3U;
uint8_t x268 = 0U;
int64_t x273 = INT64_MIN;
int16_t x274 = 63;
int32_t x276 = 330;
uint16_t x279 = 1169U;
static int8_t x283 = INT8_MAX;
uint16_t x290 = 3237U;
int16_t x297 = INT16_MIN;
int16_t x301 = -51;
volatile uint64_t x327 = 774448394789912501LLU;
uint32_t x331 = UINT32_MAX;
int32_t x337 = INT32_MIN;
int16_t x338 = 5780;
int32_t t68 = -26;
static uint32_t x342 = 273653U;
int16_t x346 = 109;
volatile int64_t x351 = INT64_MIN;
volatile uint64_t t72 = 337560996996630LLU;
volatile uint16_t x359 = 3U;
uint16_t x366 = 7023U;
volatile int64_t x375 = INT64_MIN;
uint8_t x380 = UINT8_MAX;
int8_t x381 = 62;
int64_t t79 = 31LL;
static volatile int8_t x395 = INT8_MAX;
volatile uint8_t x398 = 1U;
int32_t t83 = 3271073;
int8_t x404 = INT8_MIN;
volatile int32_t t85 = -692245;
volatile int16_t x409 = INT16_MAX;
uint64_t x422 = 1459709680601514883LLU;
int32_t x427 = -842849;
volatile uint64_t x430 = UINT64_MAX;
static int16_t x441 = INT16_MIN;
int32_t x444 = 51;
int32_t x446 = -10;
volatile int16_t x454 = INT16_MIN;
static int64_t x456 = INT64_MIN;
volatile uint64_t t95 = 1633890LLU;
int64_t t98 = -25639227273899LL;
static volatile uint16_t x473 = UINT16_MAX;
uint16_t x474 = 4U;
volatile int64_t t100 = 1323LL;
volatile int32_t t101 = 547022;
uint64_t t102 = 38LLU;
static int16_t x502 = -1;
int64_t x503 = -1031742782860LL;
volatile int8_t x504 = INT8_MIN;
static int16_t x510 = -1;
int64_t x538 = 33709968755478896LL;
volatile uint64_t t112 = 286912667462555534LLU;
int64_t x551 = INT64_MAX;
volatile int64_t t113 = 102360550407LL;
int8_t x553 = INT8_MAX;
volatile int64_t t114 = -57735035154LL;
uint64_t x559 = UINT64_MAX;
int32_t t116 = 31543584;
volatile int8_t x570 = INT8_MIN;
int64_t t118 = 13LL;
uint32_t x580 = 44209U;
int16_t x587 = 7;
int32_t t120 = 9;
static uint64_t x590 = 792LLU;
uint8_t x591 = 2U;
static int64_t x598 = -1LL;
volatile int64_t t123 = 1LL;
volatile int64_t t125 = -3002022822LL;
volatile int32_t x636 = -24;
uint32_t t129 = 4U;
int32_t x642 = -1;
static volatile int16_t x643 = INT16_MIN;
static int16_t x644 = INT16_MAX;
int16_t x648 = -93;
volatile int64_t t131 = -21680779LL;
static int8_t x650 = 6;
uint8_t x680 = 0U;
volatile uint64_t x683 = 1887LLU;
int8_t x685 = INT8_MIN;
static int64_t x687 = INT64_MIN;
uint16_t x691 = UINT16_MAX;
static uint32_t x698 = 22296181U;
static volatile uint32_t t141 = 24925U;
volatile int8_t x703 = INT8_MAX;
volatile uint16_t x706 = 55U;
static int32_t x707 = -189;
int32_t x708 = -155;
uint8_t x709 = 60U;
volatile int32_t x721 = INT32_MAX;
uint64_t x722 = 3740LLU;
volatile int16_t x724 = -403;
uint8_t x756 = UINT8_MAX;
uint16_t x757 = 21U;
int8_t x758 = -1;
volatile uint64_t t152 = 179752128422LLU;
static uint8_t x777 = UINT8_MAX;
int32_t x779 = INT32_MIN;
static int16_t x788 = INT16_MIN;
volatile int32_t t156 = -200875;
uint16_t x796 = 1U;
int32_t x800 = INT32_MIN;
int32_t x810 = INT32_MIN;
static uint8_t x814 = 0U;
uint32_t x819 = 385494198U;
int64_t x823 = -1LL;
uint32_t x832 = UINT32_MAX;
volatile int64_t t165 = 574LL;
volatile int16_t x840 = INT16_MAX;
uint64_t x849 = 22021163LLU;
int32_t t170 = 607;
static int8_t x876 = -1;
static volatile int32_t t172 = 24169735;
static volatile uint64_t x886 = 30629695264605LLU;
int32_t x887 = 1397;
volatile uint32_t x888 = 1005682U;
uint32_t x892 = 271U;
static int16_t x895 = INT16_MAX;
uint64_t x903 = 54591295141LLU;
uint8_t x907 = UINT8_MAX;
uint16_t x916 = UINT16_MAX;
int16_t x918 = INT16_MIN;
int32_t t182 = -285;
uint64_t t183 = 695937946133843LLU;
int8_t x928 = -1;
uint32_t t185 = 2U;
uint8_t x949 = UINT8_MAX;
int8_t x951 = -5;
int32_t t188 = 24;
int16_t x967 = 8152;
volatile uint8_t x975 = UINT8_MAX;
volatile int64_t t191 = -15920944151057LL;
volatile uint8_t x979 = UINT8_MAX;
static uint32_t x987 = 52093636U;
int32_t x988 = INT32_MIN;
uint64_t x1000 = 89191723980250756LLU;
static int32_t t197 = -643483373;


void f0(void) {
    	int8_t x1 = -28;
	int8_t x3 = -27;
	static int8_t x4 = 52;
	int32_t t0 = 3610967;

    t0 = (((x1+x2)%x3)*x4);

    if (t0 != 884) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = 26956305;
	static int8_t x11 = 1;
	int16_t x12 = -3;

    t1 = (((x9+x10)%x11)*x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -11;
	uint8_t x14 = 3U;
	int64_t x15 = -1LL;

    t2 = (((x13+x14)%x15)*x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 2LLU;
	uint32_t x20 = 8512418U;
	volatile uint64_t t3 = 26426336015236LLU;

    t3 = (((x17+x18)%x19)*x20);

    if (t3 != 8512418LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = UINT64_MAX;
	uint8_t x27 = UINT8_MAX;
	int32_t x28 = -1;
	volatile uint64_t t4 = 57LLU;

    t4 = (((x25+x26)%x27)*x28);

    if (t4 != 18446744073709551430LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x35 = -1;
	uint8_t x36 = 103U;
	int32_t t5 = -457;

    t5 = (((x33+x34)%x35)*x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x37 = 1015LLU;
	int8_t x38 = INT8_MAX;
	uint64_t x39 = 23877LLU;
	static volatile uint64_t x40 = 4934439152514450LLU;
	uint64_t t6 = 462847334845636562LLU;

    t6 = (((x37+x38)%x39)*x40);

    if (t6 != 5635129512171501900LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 132977LLU;
	int16_t x42 = -2163;
	static int16_t x43 = -1989;
	int32_t x44 = INT32_MAX;
	static volatile uint64_t t7 = 2LLU;

    t7 = (((x41+x42)%x43)*x44);

    if (t7 != 280920925798658LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	volatile uint64_t t8 = 2444788720674103LLU;

    t8 = (((x45+x46)%x47)*x48);

    if (t8 != 33800LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = -2410989875712LL;
	int32_t x52 = INT32_MAX;
	volatile int64_t t9 = -255LL;

    t9 = (((x49+x50)%x51)*x52);

    if (t9 != 1362065106102514177LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = 432828029801550LL;
	static uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	int64_t t10 = -17504397783136LL;

    t10 = (((x53+x54)%x55)*x56);

    if (t10 != -55401987822986880LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x62 = -1;
	int8_t x63 = 49;
	static int16_t x64 = -1;
	volatile int32_t t11 = -1;

    t11 = (((x61+x62)%x63)*x64);

    if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x66 = 942;
	static uint32_t x67 = 21086U;
	uint8_t x68 = 9U;
	volatile uint32_t t12 = 461U;

    t12 = (((x65+x66)%x67)*x68);

    if (t12 != 10773U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x69 = 13U;
	uint64_t x70 = 8274762380656495LLU;
	static volatile int32_t x71 = 63505441;
	int8_t x72 = INT8_MIN;

    t13 = (((x69+x70)%x71)*x72);

    if (t13 != 18446744066980830336LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x74 = -7;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;

    t14 = (((x73+x74)%x75)*x76);

    if (t14 != 15240) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x77 = 6230U;
	int16_t x78 = -6870;
	volatile int64_t x79 = INT64_MIN;
	int8_t x80 = -1;
	int64_t t15 = 55LL;

    t15 = (((x77+x78)%x79)*x80);

    if (t15 != 640LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 216396727492099LLU;
	int64_t x82 = -1LL;
	uint8_t x83 = 1U;
	uint16_t x84 = 16166U;
	uint64_t t16 = 0LLU;

    t16 = (((x81+x82)%x83)*x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x86 = 394U;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t17 = -8;

    t17 = (((x85+x86)%x87)*x88);

    if (t17 != -8716288) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static volatile int64_t x91 = -957910918262LL;
	static int8_t x92 = 0;
	volatile int64_t t18 = -1054447408458LL;

    t18 = (((x89+x90)%x91)*x92);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x93 = -3;
	int16_t x94 = INT16_MIN;
	int8_t x95 = -10;
	int8_t x96 = 26;
	volatile int32_t t19 = 15327504;

    t19 = (((x93+x94)%x95)*x96);

    if (t19 != -26) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x97 = 31616U;
	static int32_t x98 = INT32_MAX;
	int64_t x99 = -1LL;
	int16_t x100 = 6747;
	int64_t t20 = 1LL;

    t20 = (((x97+x98)%x99)*x100);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x101 = UINT16_MAX;
	int16_t x102 = 12;
	uint32_t x103 = 116U;
	uint32_t x104 = 2376U;
	volatile uint32_t t21 = 52U;

    t21 = (((x101+x102)%x103)*x104);

    if (t21 != 16632U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x105 = INT64_MIN;
	static int8_t x106 = INT8_MAX;
	uint32_t x107 = 17U;
	static int32_t x108 = -1;
	volatile int64_t t22 = -10465514516LL;

    t22 = (((x105+x106)%x107)*x108);

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	volatile int32_t x111 = INT32_MAX;
	uint16_t x112 = 140U;
	int64_t t23 = -92993622460910545LL;

    t23 = (((x109+x110)%x111)*x112);

    if (t23 != 300647710440LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x114 = 31U;
	uint32_t x116 = 2078712250U;

    t24 = (((x113+x114)%x115)*x116);

    if (t24 != 228374662U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = -1;
	int8_t x119 = 1;
	volatile int16_t x120 = INT16_MIN;
	volatile int32_t t25 = 22257542;

    t25 = (((x117+x118)%x119)*x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x121 = 130251439U;
	static int64_t x122 = INT64_MIN;
	volatile int8_t x123 = -1;
	volatile int64_t x124 = -22136LL;
	int64_t t26 = 2373331471821LL;

    t26 = (((x121+x122)%x123)*x124);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x127 = 1178U;

    t27 = (((x125+x126)%x127)*x128);

    if (t27 != -21186) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x129 = 238U;
	int16_t x132 = 487;
	volatile int32_t t28 = -71349;

    t28 = (((x129+x130)%x131)*x132);

    if (t28 != 89121) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x133 = 4799742LLU;
	int16_t x134 = 384;
	volatile int16_t x135 = INT16_MAX;
	uint32_t x136 = 32538U;
	volatile uint64_t t29 = 4742564816786155LLU;

    t29 = (((x133+x134)%x135)*x136);

    if (t29 != 525293472LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x137 = -1;
	uint64_t x140 = 633635888125055192LLU;
	volatile uint64_t t30 = 114LLU;

    t30 = (((x137+x138)%x139)*x140);

    if (t30 != 562332570042104144LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = -437307166;
	int16_t x142 = INT16_MIN;
	static int8_t x144 = -3;
	int32_t t31 = 2;

    t31 = (((x141+x142)%x143)*x144);

    if (t31 != 432) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = 1;
	static volatile uint16_t x155 = 223U;
	uint16_t x156 = 17U;
	int32_t t32 = 1930;

    t32 = (((x153+x154)%x155)*x156);

    if (t32 != -3553) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x157 = 0;
	volatile int32_t t33 = 46852801;

    t33 = (((x157+x158)%x159)*x160);

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = INT32_MAX;
	volatile uint32_t t34 = 35931595U;

    t34 = (((x161+x162)%x163)*x164);

    if (t34 != 2147516417U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	int32_t x168 = INT32_MAX;
	volatile uint64_t t35 = 7542622LLU;

    t35 = (((x165+x166)%x167)*x168);

    if (t35 != 18446673702817923073LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x173 = -6;
	int64_t x174 = INT64_MAX;
	static volatile int32_t x175 = INT32_MAX;
	volatile int32_t x176 = INT32_MIN;
	volatile int64_t t36 = 90LL;

    t36 = (((x173+x174)%x175)*x176);

    if (t36 != -4611686005542486016LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	uint64_t t37 = 146132LLU;

    t37 = (((x177+x178)%x179)*x180);

    if (t37 != 14456701642301345866LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MAX;
	volatile int16_t x182 = INT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile int16_t x184 = INT16_MAX;

    t38 = (((x181+x182)%x183)*x184);

    if (t38 != 4128642) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = -15893;
	int8_t x186 = INT8_MAX;
	static int64_t x187 = INT64_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t39 = 133962536LLU;

    t39 = (((x185+x186)%x187)*x188);

    if (t39 != 15766LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x193 = INT8_MAX;
	int32_t t40 = -206;

    t40 = (((x193+x194)%x195)*x196);

    if (t40 != 827121) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = INT16_MIN;
	static uint32_t x198 = 42611U;
	volatile int64_t x199 = -1LL;
	int8_t x200 = INT8_MAX;
	static int64_t t41 = -1LL;

    t41 = (((x197+x198)%x199)*x200);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x202 = 69U;
	uint32_t x203 = UINT32_MAX;
	uint16_t x204 = 481U;
	static uint64_t t42 = 4346208112626040LLU;

    t42 = (((x201+x202)%x203)*x204);

    if (t42 != 82432818LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = -5422;
	uint16_t x206 = 206U;
	int64_t x207 = INT64_MAX;
	uint8_t x208 = 1U;
	volatile int64_t t43 = 33119489581LL;

    t43 = (((x205+x206)%x207)*x208);

    if (t43 != -5216LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x210 = -1LL;
	int64_t x211 = INT64_MAX;
	int16_t x212 = -1;
	int64_t t44 = -4770310946862LL;

    t44 = (((x209+x210)%x211)*x212);

    if (t44 != 3047LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x218 = -398940809626LL;
	int64_t x219 = 432498LL;
	int16_t x220 = INT16_MAX;
	static volatile int64_t t45 = -200179294026LL;

    t45 = (((x217+x218)%x219)*x220);

    if (t45 != -10794989849LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = 0;
	int16_t x222 = INT16_MIN;
	volatile uint32_t x223 = UINT32_MAX;
	static int64_t x224 = -2530LL;
	int64_t t46 = -767425203LL;

    t46 = (((x221+x222)%x223)*x224);

    if (t46 != -10866184355840LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x225 = INT64_MIN;
	uint8_t x226 = UINT8_MAX;
	static volatile uint64_t x228 = 165537363018LLU;
	static uint64_t t47 = 684283382LLU;

    t47 = (((x225+x226)%x227)*x228);

    if (t47 != 55070638854102204LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x229 = 0U;
	int64_t x230 = 2385341957991791LL;
	volatile int64_t t48 = -1431156127LL;

    t48 = (((x229+x230)%x231)*x232);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x235 = -3581197381763853LL;
	int32_t x236 = -2418;

    t49 = (((x233+x234)%x235)*x236);

    if (t49 != 5192615446356LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x238 = -2223;
	int32_t x239 = INT32_MIN;
	volatile int32_t x240 = 230;

    t50 = (((x237+x238)%x239)*x240);

    if (t50 != 493920727520LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x245 = UINT8_MAX;
	int64_t x246 = -1LL;
	int8_t x247 = 3;
	uint64_t x248 = 5LLU;
	uint64_t t51 = 1336257395LLU;

    t51 = (((x245+x246)%x247)*x248);

    if (t51 != 10LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x249 = 47U;
	int64_t x251 = -3327864706LL;
	int64_t t52 = -60998503962568083LL;

    t52 = (((x249+x250)%x251)*x252);

    if (t52 != -929LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -12;

    t53 = (((x253+x254)%x255)*x256);

    if (t53 != -1408) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x262 = -1LL;
	static int64_t x263 = INT64_MIN;
	static volatile int64_t t54 = -2866724LL;

    t54 = (((x261+x262)%x263)*x264);

    if (t54 != -6LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	static volatile int64_t t55 = 258435213585668059LL;

    t55 = (((x265+x266)%x267)*x268);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = -2105;
	static int32_t x270 = -1;
	volatile uint16_t x271 = 105U;
	uint8_t x272 = 78U;
	static int32_t t56 = 38136;

    t56 = (((x269+x270)%x271)*x272);

    if (t56 != -468) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x275 = -1011933869343035LL;
	int64_t t57 = -2263956063LL;

    t57 = (((x273+x274)%x275)*x276);

    if (t57 != -200228048577069150LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x277 = INT8_MAX;
	int32_t x278 = -1;
	int16_t x280 = INT16_MIN;
	int32_t t58 = -8852;

    t58 = (((x277+x278)%x279)*x280);

    if (t58 != -4128768) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x281 = 0;
	int8_t x282 = INT8_MIN;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t59 = 26;

    t59 = (((x281+x282)%x283)*x284);

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = INT8_MIN;
	static int16_t x291 = INT16_MIN;
	uint64_t x292 = 7293358754170780796LLU;
	uint64_t t60 = 2LLU;

    t60 = (((x289+x290)%x291)*x292);

    if (t60 != 4003900127918558700LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x293 = -1LL;
	volatile int8_t x294 = INT8_MIN;
	uint8_t x295 = 44U;
	int32_t x296 = 284;
	int64_t t61 = -31774LL;

    t61 = (((x293+x294)%x295)*x296);

    if (t61 != -11644LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x298 = INT16_MIN;
	uint16_t x299 = 32U;
	int8_t x300 = -1;
	volatile int32_t t62 = -201994449;

    t62 = (((x297+x298)%x299)*x300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x302 = 5926604U;
	static volatile int8_t x303 = INT8_MIN;
	int64_t x304 = -1LL;
	int64_t t63 = 133030991064LL;

    t63 = (((x301+x302)%x303)*x304);

    if (t63 != -5926553LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x305 = -1;
	uint8_t x306 = 8U;
	uint16_t x307 = 1U;
	int64_t x308 = -974362775877547238LL;
	int64_t t64 = -10628102218884LL;

    t64 = (((x305+x306)%x307)*x308);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x313 = 0;
	static uint32_t x314 = UINT32_MAX;
	uint8_t x315 = 5U;
	uint8_t x316 = 2U;
	static volatile uint32_t t65 = 10U;

    t65 = (((x313+x314)%x315)*x316);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x325 = 826306770421LLU;
	int8_t x326 = -1;
	uint16_t x328 = UINT16_MAX;
	uint64_t t66 = 60667834LLU;

    t66 = (((x325+x326)%x327)*x328);

    if (t66 != 54152014199474700LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x329 = UINT64_MAX;
	static uint8_t x330 = 11U;
	int32_t x332 = -1;
	static volatile uint64_t t67 = 64923757968380LLU;

    t67 = (((x329+x330)%x331)*x332);

    if (t67 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x339 = INT8_MIN;
	int16_t x340 = INT16_MIN;

    t68 = (((x337+x338)%x339)*x340);

    if (t68 != 3538944) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x341 = -1LL;
	volatile uint32_t x343 = 1U;
	int32_t x344 = 3540248;
	int64_t t69 = 20LL;

    t69 = (((x341+x342)%x343)*x344);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x345 = UINT16_MAX;
	volatile uint32_t x347 = 60535U;
	static uint16_t x348 = UINT16_MAX;
	volatile uint32_t t70 = 11U;

    t70 = (((x345+x346)%x347)*x348);

    if (t70 != 334818315U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x349 = INT32_MIN;
	static uint8_t x350 = 3U;
	volatile int16_t x352 = -1;
	volatile int64_t t71 = -1434930913533773LL;

    t71 = (((x349+x350)%x351)*x352);

    if (t71 != 2147483645LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x353 = -96785487;
	volatile int16_t x354 = INT16_MIN;
	uint8_t x355 = 49U;
	static uint64_t x356 = 1914420LLU;

    t72 = (((x353+x354)%x355)*x356);

    if (t72 != 18446744073638718076LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x357 = INT32_MAX;
	int64_t x358 = 400023382138LL;
	uint64_t x360 = 13995LLU;
	volatile uint64_t t73 = 36LLU;

    t73 = (((x357+x358)%x359)*x360);

    if (t73 != 27990LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x361 = 38441276766682LL;
	uint8_t x362 = UINT8_MAX;
	uint16_t x363 = 47U;
	volatile int16_t x364 = -1;
	static int64_t t74 = 31842LL;

    t74 = (((x361+x362)%x363)*x364);

    if (t74 != -24LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static int32_t t75 = -16340;

    t75 = (((x365+x366)%x367)*x368);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x369 = INT16_MIN;
	volatile int32_t x370 = INT32_MAX;
	uint16_t x371 = 1U;
	uint32_t x372 = UINT32_MAX;
	static volatile uint32_t t76 = 7675U;

    t76 = (((x369+x370)%x371)*x372);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x373 = INT8_MIN;
	static uint32_t x374 = 37U;
	uint8_t x376 = 0U;
	static int64_t t77 = 73733322513698LL;

    t77 = (((x373+x374)%x375)*x376);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x377 = 7U;
	int64_t x378 = INT64_MIN;
	static volatile uint64_t x379 = 72LLU;
	uint64_t t78 = 907548194954451646LLU;

    t78 = (((x377+x378)%x379)*x380);

    if (t78 != 3825LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x382 = INT32_MIN;
	int64_t x383 = -390569652LL;
	static uint32_t x384 = 35798256U;

    t79 = (((x381+x382)%x383)*x384);

    if (t79 != -6967605226791456LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t80 = 292565889U;

    t80 = (((x385+x386)%x387)*x388);

    if (t80 != 65536U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x389 = UINT32_MAX;
	static int32_t x390 = -1;
	int32_t x391 = -1;
	uint16_t x392 = 300U;
	volatile uint32_t t81 = 26U;

    t81 = (((x389+x390)%x391)*x392);

    if (t81 != 4294966696U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = 1008628U;
	uint32_t t82 = 20279U;

    t82 = (((x393+x394)%x395)*x396);

    if (t82 != 4286898272U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x397 = 2985U;
	uint16_t x399 = 41U;
	int16_t x400 = INT16_MIN;

    t83 = (((x397+x398)%x399)*x400);

    if (t83 != -1114112) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x401 = 56;
	static int64_t x402 = 191LL;
	volatile int8_t x403 = INT8_MAX;
	static int64_t t84 = 56488LL;

    t84 = (((x401+x402)%x403)*x404);

    if (t84 != -15360LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x405 = 73U;
	volatile uint16_t x406 = 15U;
	uint16_t x407 = 18U;
	int16_t x408 = INT16_MAX;

    t85 = (((x405+x406)%x407)*x408);

    if (t85 != 524272) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x410 = UINT16_MAX;
	static uint64_t x411 = 370255589666737LLU;
	int32_t x412 = -7075;
	static uint64_t t86 = 415LLU;

    t86 = (((x409+x410)%x411)*x412);

    if (t86 != 18446744073014064966LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x421 = INT8_MIN;
	int32_t x423 = -1;
	static int64_t x424 = -1LL;
	uint64_t t87 = 21619LLU;

    t87 = (((x421+x422)%x423)*x424);

    if (t87 != 16987034393108036861LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x425 = -3945006572586673053LL;
	int32_t x426 = -1661282;
	int32_t x428 = -1;
	int64_t t88 = 8783774609621954LL;

    t88 = (((x425+x426)%x427)*x428);

    if (t88 != 279781LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x429 = -4LL;
	uint64_t x431 = UINT64_MAX;
	static int16_t x432 = -1;
	uint64_t t89 = 31588691886LLU;

    t89 = (((x429+x430)%x431)*x432);

    if (t89 != 5LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x433 = 1U;
	volatile int64_t x434 = 932473LL;
	int64_t x435 = INT64_MIN;
	uint8_t x436 = UINT8_MAX;
	int64_t t90 = 73734161342LL;

    t90 = (((x433+x434)%x435)*x436);

    if (t90 != 237780870LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x437 = -1;
	static int16_t x438 = -11;
	volatile int8_t x439 = -1;
	static int16_t x440 = 6;
	volatile int32_t t91 = 1997252;

    t91 = (((x437+x438)%x439)*x440);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x442 = 25;
	uint8_t x443 = 35U;
	int32_t t92 = 660909888;

    t92 = (((x441+x442)%x443)*x444);

    if (t92 != -918) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x445 = INT16_MAX;
	volatile int16_t x447 = 478;
	uint64_t x448 = 11LLU;
	volatile uint64_t t93 = 37143586169030511LLU;

    t93 = (((x445+x446)%x447)*x448);

    if (t93 != 2783LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x449 = -213;
	int32_t x450 = -1;
	static int64_t x451 = -1LL;
	int16_t x452 = -1;
	volatile int64_t t94 = 913418858LL;

    t94 = (((x449+x450)%x451)*x452);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x453 = 21;
	uint64_t x455 = UINT64_MAX;

    t95 = (((x453+x454)%x455)*x456);

    if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x457 = INT8_MIN;
	int64_t x458 = -1LL;
	int64_t x459 = INT64_MIN;
	int32_t x460 = -1;
	volatile int64_t t96 = 3762344581013608263LL;

    t96 = (((x457+x458)%x459)*x460);

    if (t96 != 129LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x461 = -1;
	uint64_t x462 = 3517093LLU;
	uint16_t x463 = 1U;
	volatile int8_t x464 = 46;
	volatile uint64_t t97 = 4LLU;

    t97 = (((x461+x462)%x463)*x464);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x469 = INT64_MAX;
	int64_t x470 = INT64_MIN;
	static int32_t x471 = 101943803;
	int64_t x472 = 495929099686863162LL;

    t98 = (((x469+x470)%x471)*x472);

    if (t98 != -495929099686863162LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x475 = INT16_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t99 = 37600715712394955LLU;

    t99 = (((x473+x474)%x475)*x476);

    if (t99 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x477 = -26192260559173160LL;
	int8_t x478 = 0;
	uint8_t x479 = 1U;
	uint32_t x480 = UINT32_MAX;

    t100 = (((x477+x478)%x479)*x480);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x489 = INT8_MIN;
	uint8_t x490 = UINT8_MAX;
	int16_t x491 = 1;
	int8_t x492 = INT8_MAX;

    t101 = (((x489+x490)%x491)*x492);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x497 = -1;
	static volatile uint64_t x498 = 2802809LLU;
	static int16_t x499 = INT16_MAX;
	int32_t x500 = -368513;

    t102 = (((x497+x498)%x499)*x500);

    if (t102 != 18446744067218932147LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t t103 = 1344521LL;

    t103 = (((x501+x502)%x503)*x504);

    if (t103 != -32512LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x505 = 6;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	volatile uint32_t t104 = 32155556U;

    t104 = (((x505+x506)%x507)*x508);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x509 = INT32_MAX;
	int16_t x511 = -1;
	static uint8_t x512 = 17U;
	volatile int32_t t105 = 58923;

    t105 = (((x509+x510)%x511)*x512);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = INT16_MIN;
	static int8_t x514 = 4;
	int16_t x515 = -1;
	volatile int32_t x516 = 160672068;
	int32_t t106 = 93;

    t106 = (((x513+x514)%x515)*x516);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x517 = INT16_MIN;
	volatile int8_t x518 = INT8_MIN;
	static int8_t x519 = -1;
	int16_t x520 = INT16_MIN;
	volatile int32_t t107 = -3584113;

    t107 = (((x517+x518)%x519)*x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x521 = 2U;
	volatile uint8_t x522 = UINT8_MAX;
	int8_t x523 = INT8_MAX;
	volatile int8_t x524 = INT8_MIN;
	int32_t t108 = -12;

    t108 = (((x521+x522)%x523)*x524);

    if (t108 != -384) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x525 = -1LL;
	int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	static uint64_t x528 = 29569590296628421LLU;
	volatile uint64_t t109 = 6239906212928652LLU;

    t109 = (((x525+x526)%x527)*x528);

    if (t109 != 18387604893116294774LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x529 = INT8_MAX;
	static int64_t x530 = INT64_MIN;
	volatile uint16_t x531 = UINT16_MAX;
	volatile int16_t x532 = -4093;
	static int64_t t110 = 1706LL;

    t110 = (((x529+x530)%x531)*x532);

    if (t110 != 133599613LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x537 = UINT16_MAX;
	int16_t x539 = -1;
	uint8_t x540 = 6U;
	volatile int64_t t111 = 2067063LL;

    t111 = (((x537+x538)%x539)*x540);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x541 = UINT64_MAX;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -512;
	int16_t x544 = INT16_MIN;

    t112 = (((x541+x542)%x543)*x544);

    if (t112 != 18446744072635875328LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x549 = 1668032999125LL;
	int8_t x550 = INT8_MAX;
	static int16_t x552 = -1;

    t113 = (((x549+x550)%x551)*x552);

    if (t113 != -1668032999252LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x554 = INT32_MIN;
	static int64_t x555 = INT64_MAX;
	volatile int16_t x556 = INT16_MAX;

    t114 = (((x553+x554)%x555)*x556);

    if (t114 != -70366592532607LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x557 = 15096U;
	volatile int32_t x558 = -1;
	static uint8_t x560 = 0U;
	volatile uint64_t t115 = 442432085LLU;

    t115 = (((x557+x558)%x559)*x560);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x565 = -13;
	int32_t x566 = 120;
	int32_t x567 = 1;
	int16_t x568 = 8657;

    t116 = (((x565+x566)%x567)*x568);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x569 = 3886U;
	int8_t x571 = -1;
	uint64_t x572 = UINT64_MAX;
	static volatile uint64_t t117 = 1LLU;

    t117 = (((x569+x570)%x571)*x572);

    if (t117 != 18446744073709547858LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x573 = INT32_MAX;
	static int64_t x574 = -1018970733811601471LL;
	int8_t x575 = INT8_MAX;
	volatile uint16_t x576 = 84U;

    t118 = (((x573+x574)%x575)*x576);

    if (t118 != -5964LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x577 = -250636LL;
	uint16_t x578 = UINT16_MAX;
	uint64_t x579 = UINT64_MAX;
	uint64_t t119 = 398811LLU;

    t119 = (((x577+x578)%x579)*x580);

    if (t119 != 18446744065526421507LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x585 = INT8_MIN;
	static int8_t x586 = -1;
	int16_t x588 = INT16_MIN;

    t120 = (((x585+x586)%x587)*x588);

    if (t120 != 98304) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x589 = INT8_MIN;
	uint16_t x592 = 1U;
	static volatile uint64_t t121 = 330357371LLU;

    t121 = (((x589+x590)%x591)*x592);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x597 = INT32_MAX;
	static int16_t x599 = INT16_MIN;
	uint64_t x600 = 5976LLU;
	volatile uint64_t t122 = 3LLU;

    t122 = (((x597+x598)%x599)*x600);

    if (t122 != 195809616LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x609 = 16U;
	int8_t x610 = 39;
	volatile int64_t x611 = -1LL;
	uint16_t x612 = 2941U;

    t123 = (((x609+x610)%x611)*x612);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x613 = INT32_MAX;
	static int8_t x614 = -26;
	int64_t x615 = INT64_MAX;
	int16_t x616 = -1;
	int64_t t124 = 5646982862989430LL;

    t124 = (((x613+x614)%x615)*x616);

    if (t124 != -2147483621LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x617 = 7187;
	static int8_t x618 = 0;
	static int64_t x619 = INT64_MAX;
	int64_t x620 = 4089135274LL;

    t125 = (((x617+x618)%x619)*x620);

    if (t125 != 29388615214238LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x621 = INT16_MIN;
	static uint64_t x622 = 240801LLU;
	volatile uint64_t x623 = UINT64_MAX;
	int16_t x624 = INT16_MAX;
	uint64_t t126 = 224LLU;

    t126 = (((x621+x622)%x623)*x624);

    if (t126 != 6816617311LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x625 = 108616314U;
	int64_t x626 = -4875162429437678LL;
	int8_t x627 = INT8_MIN;
	int8_t x628 = -1;
	static int64_t t127 = 301LL;

    t127 = (((x625+x626)%x627)*x628);

    if (t127 != 116LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x633 = 942U;
	static volatile int16_t x634 = INT16_MAX;
	volatile int8_t x635 = INT8_MIN;
	int32_t t128 = 1210;

    t128 = (((x633+x634)%x635)*x636);

    if (t128 != -1080) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint32_t x637 = 12U;
	uint16_t x638 = 0U;
	static uint16_t x639 = 1U;
	static uint16_t x640 = 0U;

    t129 = (((x637+x638)%x639)*x640);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x641 = 31809585U;
	static uint32_t t130 = 17333776U;

    t130 = (((x641+x642)%x643)*x644);

    if (t130 != 2922553296U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MAX;
	uint8_t x647 = 31U;

    t131 = (((x645+x646)%x647)*x648);

    if (t131 != -465LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x649 = 2110087597930LL;
	int32_t x651 = INT32_MAX;
	volatile int16_t x652 = 3;
	volatile int64_t t132 = 7LL;

    t132 = (((x649+x650)%x651)*x652);

    if (t132 != 3775969746LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x661 = -1;
	static uint8_t x662 = 1U;
	volatile uint32_t x663 = 5U;
	static volatile uint8_t x664 = 49U;
	uint32_t t133 = 120583489U;

    t133 = (((x661+x662)%x663)*x664);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x665 = INT8_MAX;
	int8_t x666 = 0;
	static uint16_t x667 = UINT16_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t134 = -292232797;

    t134 = (((x665+x666)%x667)*x668);

    if (t134 != 32385) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x669 = -1;
	static uint64_t x670 = 10852LLU;
	volatile int16_t x671 = INT16_MIN;
	int64_t x672 = INT64_MAX;
	static volatile uint64_t t135 = 168066690318LLU;

    t135 = (((x669+x670)%x671)*x672);

    if (t135 != 9223372036854764957LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x677 = INT16_MIN;
	uint16_t x678 = 1199U;
	volatile int16_t x679 = 9825;
	volatile int32_t t136 = 41578;

    t136 = (((x677+x678)%x679)*x680);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x681 = -200;
	uint8_t x682 = 84U;
	uint32_t x684 = 35722869U;
	uint64_t t137 = 22420525026880190LLU;

    t137 = (((x681+x682)%x683)*x684);

    if (t137 != 21397998531LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x686 = INT32_MAX;
	int64_t x688 = -204079LL;
	volatile int64_t t138 = -2864722060734LL;

    t138 = (((x685+x686)%x687)*x688);

    if (t138 != -438256289074001LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x689 = 206981957U;
	uint8_t x690 = 1U;
	int16_t x692 = INT16_MAX;
	volatile uint32_t t139 = 14671064U;

    t139 = (((x689+x690)%x691)*x692);

    if (t139 != 734898276U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x694 = 32;
	volatile uint8_t x695 = 38U;
	static int8_t x696 = INT8_MIN;
	static int32_t t140 = 203612;

    t140 = (((x693+x694)%x695)*x696);

    if (t140 != 2560) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x697 = -1;
	static uint32_t x699 = 2093U;
	static int32_t x700 = INT32_MIN;

    t141 = (((x697+x698)%x699)*x700);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x701 = INT16_MIN;
	volatile int8_t x702 = INT8_MAX;
	static int64_t x704 = -1242LL;
	volatile int64_t t142 = -3455016995063LL;

    t142 = (((x701+x702)%x703)*x704);

    if (t142 != 2484LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x705 = 29U;
	volatile int32_t t143 = -35;

    t143 = (((x705+x706)%x707)*x708);

    if (t143 != -13020) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x710 = UINT32_MAX;
	int32_t x711 = -1;
	int64_t x712 = -1LL;
	int64_t t144 = -1515LL;

    t144 = (((x709+x710)%x711)*x712);

    if (t144 != -59LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x717 = 11;
	uint64_t x718 = 50LLU;
	static volatile int32_t x719 = 14;
	uint64_t x720 = 146LLU;
	volatile uint64_t t145 = 1609702429317LLU;

    t145 = (((x717+x718)%x719)*x720);

    if (t145 != 730LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x723 = 56U;
	uint64_t t146 = 188548054847006897LLU;

    t146 = (((x721+x722)%x723)*x724);

    if (t146 != 18446744073709550407LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x733 = INT32_MIN;
	static uint32_t x734 = UINT32_MAX;
	int64_t x735 = -4071029802LL;
	volatile int8_t x736 = INT8_MIN;
	volatile int64_t t147 = 123261862625LL;

    t147 = (((x733+x734)%x735)*x736);

    if (t147 != -274877906816LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x737 = 107U;
	int8_t x738 = -18;
	static uint32_t x739 = UINT32_MAX;
	int32_t x740 = -3;
	volatile uint32_t t148 = 54U;

    t148 = (((x737+x738)%x739)*x740);

    if (t148 != 4294967029U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x741 = 0U;
	uint64_t x742 = 440729LLU;
	static int32_t x743 = INT32_MIN;
	uint8_t x744 = UINT8_MAX;
	volatile uint64_t t149 = 17805LLU;

    t149 = (((x741+x742)%x743)*x744);

    if (t149 != 112385895LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	static int64_t x754 = -7707734792LL;
	int64_t x755 = INT64_MAX;
	uint64_t t150 = 3738680021801199LLU;

    t150 = (((x753+x754)%x755)*x756);

    if (t150 != 9223370071382403848LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x759 = -1;
	int64_t x760 = -59628160567LL;
	int64_t t151 = -1873614LL;

    t151 = (((x757+x758)%x759)*x760);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint64_t x762 = 16468LLU;
	int32_t x763 = -26453466;
	uint8_t x764 = 0U;

    t152 = (((x761+x762)%x763)*x764);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x765 = 0U;
	volatile uint16_t x766 = 77U;
	static int64_t x767 = INT64_MIN;
	int32_t x768 = -1;
	int64_t t153 = -3134915778LL;

    t153 = (((x765+x766)%x767)*x768);

    if (t153 != -77LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x778 = INT64_MIN;
	uint16_t x780 = UINT16_MAX;
	static volatile int64_t t154 = 826759828LL;

    t154 = (((x777+x778)%x779)*x780);

    if (t154 != -140735324160255LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x785 = UINT8_MAX;
	static uint16_t x786 = 93U;
	int32_t x787 = INT32_MIN;
	int32_t t155 = -826;

    t155 = (((x785+x786)%x787)*x788);

    if (t155 != -11403264) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x789 = INT16_MAX;
	volatile int8_t x790 = -1;
	volatile int32_t x791 = -574705405;
	volatile int8_t x792 = -1;

    t156 = (((x789+x790)%x791)*x792);

    if (t156 != -32766) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x793 = INT64_MIN;
	volatile int32_t x794 = 209358;
	uint32_t x795 = 497753U;
	volatile int64_t t157 = -246496507524LL;

    t157 = (((x793+x794)%x795)*x796);

    if (t157 != -236492LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x797 = INT64_MIN;
	static uint64_t x798 = UINT64_MAX;
	uint32_t x799 = 1414089047U;
	uint64_t t158 = 7708207LLU;

    t158 = (((x797+x798)%x799)*x800);

    if (t158 != 18343138888320548864LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x801 = -7474;
	int8_t x802 = INT8_MAX;
	int16_t x803 = -1;
	static volatile int64_t x804 = 48010489307LL;
	int64_t t159 = -31986398LL;

    t159 = (((x801+x802)%x803)*x804);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x805 = INT16_MAX;
	static volatile int32_t x806 = -1;
	int8_t x807 = INT8_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t160 = -1145;

    t160 = (((x805+x806)%x807)*x808);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x809 = -1LL;
	static volatile int64_t x811 = INT64_MAX;
	int32_t x812 = -1;
	volatile int64_t t161 = -1386437326502377664LL;

    t161 = (((x809+x810)%x811)*x812);

    if (t161 != 2147483649LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x813 = -1;
	static int64_t x815 = INT64_MAX;
	int8_t x816 = 1;
	int64_t t162 = -107LL;

    t162 = (((x813+x814)%x815)*x816);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x817 = INT8_MIN;
	uint16_t x818 = UINT16_MAX;
	int8_t x820 = 0;
	volatile uint32_t t163 = 3895U;

    t163 = (((x817+x818)%x819)*x820);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x821 = 1;
	static int32_t x822 = INT32_MIN;
	volatile int16_t x824 = 677;
	int64_t t164 = 80399114711636741LL;

    t164 = (((x821+x822)%x823)*x824);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x829 = -1LL;
	static int8_t x830 = INT8_MIN;
	int32_t x831 = INT32_MIN;

    t165 = (((x829+x830)%x831)*x832);

    if (t165 != -554050781055LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x833 = UINT32_MAX;
	int32_t x834 = 222159959;
	volatile int32_t x835 = INT32_MIN;
	volatile int16_t x836 = INT16_MAX;
	static volatile uint32_t t166 = 57179317U;

    t166 = (((x833+x834)%x835)*x836);

    if (t166 != 3840744362U) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x837 = UINT32_MAX;
	volatile int64_t x838 = -10794003525758LL;
	int16_t x839 = INT16_MAX;
	int64_t t167 = -7185699739953681LL;

    t167 = (((x837+x838)%x839)*x840);

    if (t167 != -949882563LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x850 = 28271U;
	uint8_t x851 = UINT8_MAX;
	int64_t x852 = -1LL;
	uint64_t t168 = 10842914747LLU;

    t168 = (((x849+x850)%x851)*x852);

    if (t168 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x861 = INT16_MAX;
	static int64_t x862 = -1LL;
	int32_t x863 = -160;
	uint64_t x864 = 140320LLU;
	uint64_t t169 = 11LLU;

    t169 = (((x861+x862)%x863)*x864);

    if (t169 != 17680320LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x865 = 102016922;
	int32_t x866 = -1;
	static int32_t x867 = -1163;
	int32_t x868 = -1;

    t170 = (((x865+x866)%x867)*x868);

    if (t170 != -887) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x869 = INT16_MAX;
	static volatile uint64_t x870 = UINT64_MAX;
	int16_t x871 = 1253;
	uint64_t x872 = UINT64_MAX;
	static uint64_t t171 = 495818LLU;

    t171 = (((x869+x870)%x871)*x872);

    if (t171 != 18446744073709551428LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x873 = INT8_MIN;
	static uint8_t x874 = 2U;
	int32_t x875 = -1;

    t172 = (((x873+x874)%x875)*x876);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x881 = INT8_MIN;
	uint64_t x882 = 52LLU;
	volatile int64_t x883 = -380515364731LL;
	static int64_t x884 = -3484515LL;
	uint64_t t173 = 209453011167LLU;

    t173 = (((x881+x882)%x883)*x884);

    if (t173 != 17120832577838734291LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x885 = 3040267837582454LLU;
	volatile uint64_t t174 = 63508LLU;

    t174 = (((x885+x886)%x887)*x888);

    if (t174 != 1253079772LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x889 = -5104;
	uint16_t x890 = 73U;
	int16_t x891 = INT16_MIN;
	uint32_t t175 = 494514999U;

    t175 = (((x889+x890)%x891)*x892);

    if (t175 != 4293603895U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x893 = -1;
	int8_t x894 = INT8_MIN;
	int16_t x896 = -1;
	volatile int32_t t176 = 3;

    t176 = (((x893+x894)%x895)*x896);

    if (t176 != 129) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x897 = -1;
	static int16_t x898 = INT16_MIN;
	uint8_t x899 = UINT8_MAX;
	int16_t x900 = -1;
	volatile int32_t t177 = -7323943;

    t177 = (((x897+x898)%x899)*x900);

    if (t177 != 129) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x901 = INT64_MIN;
	int64_t x902 = INT64_MAX;
	int32_t x904 = INT32_MIN;
	static volatile uint64_t t178 = 1117622195774428LLU;

    t178 = (((x901+x902)%x903)*x904);

    if (t178 != 10948543894375104512LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x905 = UINT32_MAX;
	volatile uint64_t x906 = 488768842LLU;
	volatile int16_t x908 = INT16_MIN;
	uint64_t t179 = 6112LLU;

    t179 = (((x905+x906)%x907)*x908);

    if (t179 != 18446744073704898560LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x909 = UINT8_MAX;
	int8_t x910 = INT8_MAX;
	int32_t x911 = -51;
	static int8_t x912 = INT8_MAX;
	volatile int32_t t180 = 826;

    t180 = (((x909+x910)%x911)*x912);

    if (t180 != 3175) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x913 = 3U;
	volatile int32_t x914 = INT32_MIN;
	int8_t x915 = INT8_MAX;
	volatile int32_t t181 = -6478;

    t181 = (((x913+x914)%x915)*x916);

    if (t181 != -327675) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x917 = -1;
	int16_t x919 = INT16_MIN;
	static int16_t x920 = 29;

    t182 = (((x917+x918)%x919)*x920);

    if (t182 != -29) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x921 = UINT8_MAX;
	volatile int8_t x922 = INT8_MIN;
	uint16_t x923 = UINT16_MAX;
	static volatile uint64_t x924 = 2089087523921567LLU;

    t183 = (((x921+x922)%x923)*x924);

    if (t183 != 265314115538039009LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x925 = UINT16_MAX;
	volatile uint16_t x926 = 3U;
	uint8_t x927 = UINT8_MAX;
	int32_t t184 = 489593808;

    t184 = (((x925+x926)%x927)*x928);

    if (t184 != -3) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x929 = 9U;
	uint32_t x930 = 2U;
	static int8_t x931 = 31;
	static volatile int16_t x932 = INT16_MIN;

    t185 = (((x929+x930)%x931)*x932);

    if (t185 != 4294606848U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x937 = -1;
	volatile int64_t x938 = INT64_MAX;
	static uint16_t x939 = 3615U;
	int8_t x940 = -1;
	int64_t t186 = -14193361686492586LL;

    t186 = (((x937+x938)%x939)*x940);

    if (t186 != -231LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x941 = 1772U;
	static uint32_t x942 = 0U;
	uint16_t x943 = 1463U;
	static uint8_t x944 = 18U;
	static volatile uint32_t t187 = 476U;

    t187 = (((x941+x942)%x943)*x944);

    if (t187 != 5562U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x950 = INT8_MIN;
	uint16_t x952 = 3U;

    t188 = (((x949+x950)%x951)*x952);

    if (t188 != 6) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x953 = 184U;
	uint32_t x954 = 3968806U;
	uint16_t x955 = UINT16_MAX;
	int8_t x956 = 0;
	uint32_t t189 = 3228726U;

    t189 = (((x953+x954)%x955)*x956);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x965 = 1;
	int16_t x966 = 45;
	static int64_t x968 = 3864LL;
	int64_t t190 = 3016LL;

    t190 = (((x965+x966)%x967)*x968);

    if (t190 != 177744LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x973 = -150676821599LL;
	int32_t x974 = -913;
	int8_t x976 = -1;

    t191 = (((x973+x974)%x975)*x976);

    if (t191 != 12LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x977 = INT16_MAX;
	int8_t x978 = -20;
	uint64_t x980 = 975462390435874355LLU;
	volatile uint64_t t192 = 3114LLU;

    t192 = (((x977+x978)%x979)*x980);

    if (t192 != 12140755408090797905LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x985 = -1866;
	int32_t x986 = -1;
	volatile uint32_t t193 = 4U;

    t193 = (((x985+x986)%x987)*x988);

    if (t193 != 2147483648U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x989 = INT64_MIN;
	int64_t x990 = INT64_MAX;
	int16_t x991 = 60;
	int8_t x992 = -1;
	static int64_t t194 = 54091082282902LL;

    t194 = (((x989+x990)%x991)*x992);

    if (t194 != 1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x993 = UINT8_MAX;
	static uint8_t x994 = 1U;
	uint16_t x995 = UINT16_MAX;
	static int8_t x996 = INT8_MIN;
	int32_t t195 = -1303694;

    t195 = (((x993+x994)%x995)*x996);

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x997 = -87;
	int64_t x998 = -1LL;
	uint16_t x999 = UINT16_MAX;
	uint64_t t196 = 7957LLU;

    t196 = (((x997+x998)%x999)*x1000);

    if (t196 != 10597872363447485088LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1009 = 141947209;
	int8_t x1010 = INT8_MAX;
	volatile int16_t x1011 = -1;
	int16_t x1012 = -6;

    t197 = (((x1009+x1010)%x1011)*x1012);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1013 = INT32_MAX;
	int8_t x1014 = -1;
	int32_t x1015 = INT32_MAX;
	volatile uint64_t x1016 = UINT64_MAX;
	volatile uint64_t t198 = 2LLU;

    t198 = (((x1013+x1014)%x1015)*x1016);

    if (t198 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1017 = 128;
	int32_t x1018 = -1;
	int8_t x1019 = INT8_MIN;
	volatile int16_t x1020 = -1;
	static volatile int32_t t199 = -1;

    t199 = (((x1017+x1018)%x1019)*x1020);

    if (t199 != -127) { NG(); } else { ; }
	
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

