
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

int16_t x3 = 0;
uint16_t x11 = 2586U;
uint64_t x13 = 216038845289LLU;
uint64_t x16 = 22164756336619LLU;
static volatile int32_t x24 = INT32_MIN;
uint32_t x41 = 16007U;
volatile int32_t t11 = 797457170;
volatile int64_t x56 = 1524423850835621LL;
int16_t x60 = -4;
static volatile int32_t t14 = 34313;
uint32_t x65 = 488058U;
static int64_t x69 = INT64_MIN;
int16_t x74 = -1;
volatile int32_t t17 = -928254443;
uint64_t x78 = 0LLU;
uint32_t t18 = 90657764U;
int32_t x81 = -197;
static int32_t x94 = -250;
int64_t x96 = INT64_MIN;
int32_t x103 = 32997508;
int32_t x104 = INT32_MIN;
volatile int32_t x116 = -1;
static int8_t x117 = INT8_MIN;
volatile int64_t x120 = INT64_MIN;
int16_t x126 = -8269;
int32_t t30 = -1;
volatile int64_t t31 = -1LL;
int32_t x138 = -32510;
int64_t x140 = -151017438772761629LL;
volatile int64_t x145 = INT64_MIN;
int32_t t34 = -532014;
volatile uint16_t x149 = 75U;
int32_t x150 = INT32_MIN;
static uint64_t x158 = 3213220933182LLU;
uint16_t x159 = UINT16_MAX;
volatile int32_t t39 = -244870291;
uint8_t x172 = UINT8_MAX;
int32_t x180 = INT32_MIN;
int32_t t43 = 4905790;
int64_t x191 = INT64_MAX;
int16_t x192 = INT16_MAX;
int64_t x193 = INT64_MAX;
static int8_t x195 = -1;
int64_t x200 = 496254673LL;
uint64_t x205 = 103723165023LLU;
int64_t x211 = -23937642LL;
int32_t x216 = INT32_MAX;
int8_t x222 = 0;
uint32_t x226 = 6143025U;
int32_t x227 = INT32_MIN;
int32_t t54 = 145103;
uint32_t x230 = 23U;
int64_t x231 = -229632975LL;
int32_t x235 = INT32_MIN;
int32_t x242 = INT32_MIN;
int32_t t62 = -42730;
int16_t x262 = -444;
int32_t t64 = 459;
int16_t x272 = -2;
uint32_t x284 = UINT32_MAX;
volatile uint32_t t68 = 2516472U;
int32_t x285 = 21879;
uint32_t x288 = UINT32_MAX;
uint32_t t69 = 3U;
int16_t x292 = -1;
volatile int32_t t70 = -579723903;
volatile int32_t t72 = 790;
volatile uint16_t x302 = 3511U;
int16_t x317 = -649;
int32_t t77 = 5531852;
int64_t x322 = INT64_MIN;
static uint16_t x323 = 27U;
int32_t t78 = -327;
uint16_t x325 = UINT16_MAX;
volatile int32_t t79 = 13052;
int8_t x329 = INT8_MIN;
int16_t x334 = INT16_MIN;
int8_t x343 = INT8_MIN;
volatile int32_t t83 = -1;
int32_t t84 = -219310;
volatile uint8_t x349 = UINT8_MAX;
static int16_t x351 = INT16_MAX;
int32_t x352 = INT32_MIN;
int16_t x362 = -57;
int32_t x366 = -1;
volatile int32_t t89 = -2155;
int64_t x370 = INT64_MIN;
volatile int64_t x375 = INT64_MAX;
static uint32_t x382 = 627007U;
volatile int64_t x392 = -1LL;
int64_t x395 = INT64_MAX;
int8_t x408 = -9;
int64_t t100 = 9871322LL;
volatile int8_t x415 = INT8_MAX;
int16_t x416 = INT16_MIN;
static volatile int32_t t103 = 37;
int64_t x426 = INT64_MIN;
volatile int32_t x440 = INT32_MIN;
int32_t x442 = -1;
int64_t x447 = 1637915686150855623LL;
int32_t t109 = -231;
volatile int64_t x452 = -141586281984672860LL;
int16_t x454 = INT16_MIN;
static volatile int32_t t113 = 243519549;
volatile int32_t x465 = INT32_MAX;
int8_t x466 = INT8_MAX;
uint32_t x469 = UINT32_MAX;
uint16_t x477 = UINT16_MAX;
uint8_t x484 = 2U;
int16_t x489 = INT16_MIN;
int64_t x499 = 1LL;
volatile int32_t t124 = 20215;
volatile uint64_t x512 = 946901523779LLU;
volatile int16_t x514 = INT16_MIN;
int64_t x515 = 372714710859LL;
int32_t x523 = INT32_MAX;
static int8_t x525 = INT8_MIN;
static uint16_t x531 = 15216U;
uint64_t x534 = 5987LLU;
int16_t x539 = INT16_MIN;
int32_t t133 = -1215199;
int16_t x553 = INT16_MAX;
int32_t x554 = INT32_MIN;
volatile uint64_t t137 = 41351430LLU;
int64_t t140 = 2862215LL;
uint8_t x575 = UINT8_MAX;
int8_t x579 = 1;
int16_t x580 = 1;
int32_t t143 = 196;
int64_t x588 = -1LL;
int8_t x592 = -1;
int16_t x593 = -1;
int32_t x600 = -13;
volatile int8_t x604 = INT8_MAX;
static int32_t t148 = 37507203;
int8_t x618 = INT8_MAX;
uint32_t x619 = UINT32_MAX;
static int8_t x623 = INT8_MAX;
uint32_t x625 = UINT32_MAX;
static volatile int32_t t153 = -3676;
uint64_t x639 = 877LLU;
uint64_t x642 = 33LLU;
int32_t t158 = 972047209;
int64_t x661 = 31491679LL;
int16_t x667 = -1;
volatile int64_t x672 = -169093111861LL;
int64_t x674 = -1LL;
volatile int32_t t165 = 32650953;
int64_t x688 = -1LL;
volatile uint64_t t170 = 534612925904LLU;
uint32_t x704 = UINT32_MAX;
int32_t t174 = -1;
int16_t x719 = INT16_MIN;
static volatile int16_t x723 = -1;
static int16_t x724 = INT16_MAX;
uint64_t x728 = 260073167735LLU;
uint8_t x731 = 3U;
static int64_t x739 = INT64_MIN;
int8_t x743 = -1;
uint32_t x751 = 1969519U;
uint64_t x752 = 990LLU;
volatile int32_t x760 = -70353;
int64_t x761 = INT64_MAX;
int32_t x765 = -89245837;
uint32_t t187 = 2375532U;
volatile int64_t x775 = -2786898804315858LL;
uint64_t t191 = 21369LLU;
int32_t t192 = -5929249;
int8_t x790 = INT8_MAX;
int16_t x794 = -1;
int16_t x798 = -4;
int64_t x807 = -1LL;
uint8_t x808 = 9U;
volatile int32_t t197 = -29287310;
volatile uint32_t x815 = UINT32_MAX;
static uint64_t x816 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int64_t x2 = 109313151377742790LL;
	volatile int64_t x4 = 1671595LL;
	int64_t t0 = 797032189892821619LL;

    t0 = (((x1!=x2)>x3)/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 47201LLU;
	int16_t x7 = -1;
	int16_t x8 = -1;
	int32_t t1 = -261836;

    t1 = (((x5!=x6)>x7)/x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 709447365LLU;
	uint32_t x10 = 14207237U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -3114797;

    t2 = (((x9!=x10)>x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = -165LL;
	int8_t x15 = INT8_MIN;
	volatile uint64_t t3 = 31171832LLU;

    t3 = (((x13!=x14)>x15)/x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -5481210;
	int64_t x18 = -1LL;
	static int8_t x19 = -1;
	static uint32_t x20 = 43U;
	volatile uint32_t t4 = 141U;

    t4 = (((x17!=x18)>x19)/x20);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	uint64_t x22 = 53270500568604LLU;
	int32_t x23 = 548;
	static volatile int32_t t5 = -3;

    t5 = (((x21!=x22)>x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -12;
	int64_t x26 = -40LL;
	int64_t x27 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 8;

    t6 = (((x25!=x26)>x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int64_t x30 = 2068427966LL;
	volatile int8_t x31 = INT8_MAX;
	int64_t x32 = -1LL;
	int64_t t7 = 61806715000097236LL;

    t7 = (((x29!=x30)>x31)/x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x37 = INT32_MIN;
	static int16_t x38 = -6436;
	uint8_t x39 = 1U;
	int16_t x40 = -1;
	static int32_t t8 = -18350;

    t8 = (((x37!=x38)>x39)/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = 0;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 4039868;

    t9 = (((x41!=x42)>x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 20LLU;
	int64_t x46 = 544991838LL;
	volatile int32_t x47 = INT32_MAX;
	static uint16_t x48 = 25455U;
	volatile int32_t t10 = -1;

    t10 = (((x45!=x46)>x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	uint16_t x50 = UINT16_MAX;
	int8_t x51 = -1;
	volatile int32_t x52 = -1;

    t11 = (((x49!=x50)>x51)/x52);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x54 = 251686LL;
	volatile int16_t x55 = INT16_MIN;
	int64_t t12 = 1211445908020390504LL;

    t12 = (((x53!=x54)>x55)/x56);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	volatile int32_t t13 = -1485;

    t13 = (((x57!=x58)>x59)/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 1;
	int8_t x62 = -49;
	uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;

    t14 = (((x61!=x62)>x63)/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = -3;
	volatile uint64_t x67 = 55882056721LLU;
	volatile int8_t x68 = INT8_MIN;
	static int32_t t15 = -3810275;

    t15 = (((x65!=x66)>x67)/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x70 = 1559LLU;
	uint8_t x71 = 0U;
	volatile int64_t x72 = -1LL;
	int64_t t16 = 1502169042685082004LL;

    t16 = (((x69!=x70)>x71)/x72);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = -31;
	volatile int64_t x75 = INT64_MAX;
	static int8_t x76 = INT8_MIN;

    t17 = (((x73!=x74)>x75)/x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = 1990;
	int8_t x79 = INT8_MAX;
	static uint32_t x80 = 666209689U;

    t18 = (((x77!=x78)>x79)/x80);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	static int64_t x84 = 50313426277173505LL;
	int64_t t19 = 79732625484059LL;

    t19 = (((x81!=x82)>x83)/x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	uint32_t x86 = 1585U;
	static uint16_t x87 = 15518U;
	int32_t x88 = -1;
	int32_t t20 = -2;

    t20 = (((x85!=x86)>x87)/x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = -4015483536LL;
	uint8_t x90 = 5U;
	volatile uint32_t x91 = 3908U;
	uint64_t x92 = 18783050807781710LLU;
	volatile uint64_t t21 = 5919868117416LLU;

    t21 = (((x89!=x90)>x91)/x92);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x93 = -1;
	volatile int32_t x95 = -363752;
	static volatile int64_t t22 = -1LL;

    t22 = (((x93!=x94)>x95)/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = 181332751763LL;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 3LLU;
	int16_t x100 = INT16_MIN;
	volatile int32_t t23 = -49512569;

    t23 = (((x97!=x98)>x99)/x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = 2LL;
	static uint32_t x102 = UINT32_MAX;
	static volatile int32_t t24 = -4031716;

    t24 = (((x101!=x102)>x103)/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = UINT32_MAX;
	int32_t x106 = 2102;
	int64_t x107 = INT64_MAX;
	static int64_t x108 = -1LL;
	int64_t t25 = -383671071LL;

    t25 = (((x105!=x106)>x107)/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x109 = INT64_MIN;
	static int64_t x110 = -15033LL;
	uint64_t x111 = 3684LLU;
	int64_t x112 = INT64_MIN;
	int64_t t26 = -1865299507691062LL;

    t26 = (((x109!=x110)>x111)/x112);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 1U;
	uint32_t x114 = 1806272U;
	uint64_t x115 = 3362981284LLU;
	static int32_t t27 = -272809313;

    t27 = (((x113!=x114)>x115)/x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = INT64_MIN;
	volatile uint32_t x119 = 17089692U;
	int64_t t28 = 1868832531282LL;

    t28 = (((x117!=x118)>x119)/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	int64_t x123 = -943532585108LL;
	static int16_t x124 = -3964;
	static int32_t t29 = -20879597;

    t29 = (((x121!=x122)>x123)/x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = INT8_MIN;

    t30 = (((x125!=x126)>x127)/x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	volatile int8_t x130 = INT8_MAX;
	static int8_t x131 = INT8_MIN;
	int64_t x132 = -1LL;

    t31 = (((x129!=x130)>x131)/x132);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 568049342U;
	static uint16_t x139 = 20U;
	int64_t t32 = -2LL;

    t32 = (((x137!=x138)>x139)/x140);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 950266906180LLU;
	uint64_t x143 = 185037995110636833LLU;
	int64_t x144 = INT64_MIN;
	int64_t t33 = -136LL;

    t33 = (((x141!=x142)>x143)/x144);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x146 = 9369406270946LL;
	uint32_t x147 = 24459U;
	int32_t x148 = INT32_MAX;

    t34 = (((x145!=x146)>x147)/x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x151 = 561410356941LL;
	int64_t x152 = -1LL;
	volatile int64_t t35 = 2645841296125000LL;

    t35 = (((x149!=x150)>x151)/x152);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x153 = 1U;
	int64_t x154 = INT64_MAX;
	static volatile uint8_t x155 = UINT8_MAX;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t36 = 249461;

    t36 = (((x153!=x154)>x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x157 = INT16_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t37 = -13;

    t37 = (((x157!=x158)>x159)/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	int8_t x162 = -1;
	static volatile int8_t x163 = INT8_MAX;
	int16_t x164 = -1;
	int32_t t38 = 5486;

    t38 = (((x161!=x162)>x163)/x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = 31;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = 2188U;

    t39 = (((x165!=x166)>x167)/x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = 229238LL;
	static volatile int8_t x170 = -1;
	volatile uint64_t x171 = 483LLU;
	int32_t t40 = 327653;

    t40 = (((x169!=x170)>x171)/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = INT32_MAX;
	static int32_t x174 = 3693941;
	int16_t x175 = INT16_MAX;
	int16_t x176 = INT16_MAX;
	static volatile int32_t t41 = -2403759;

    t41 = (((x173!=x174)>x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = -1;
	int64_t x179 = INT64_MIN;
	volatile int32_t t42 = -1158013;

    t42 = (((x177!=x178)>x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = -255699420692646998LL;
	int8_t x182 = -31;
	int8_t x183 = -3;
	int32_t x184 = INT32_MAX;

    t43 = (((x181!=x182)>x183)/x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x185 = UINT8_MAX;
	static uint16_t x186 = 102U;
	static int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	int64_t t44 = 29931LL;

    t44 = (((x185!=x186)>x187)/x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 21178U;
	int32_t x190 = -1418;
	int32_t t45 = 92039964;

    t45 = (((x189!=x190)>x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x194 = -1;
	uint8_t x196 = 2U;
	int32_t t46 = -3753064;

    t46 = (((x193!=x194)>x195)/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x197 = INT8_MIN;
	static int32_t x198 = 27;
	volatile int32_t x199 = 1788375;
	volatile int64_t t47 = -500LL;

    t47 = (((x197!=x198)>x199)/x200);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x201 = 16116U;
	static int8_t x202 = 1;
	static int16_t x203 = -89;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t48 = -727051;

    t48 = (((x201!=x202)>x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x206 = 6U;
	int16_t x207 = -1;
	int32_t x208 = -1;
	int32_t t49 = 938414;

    t49 = (((x205!=x206)>x207)/x208);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x209 = INT64_MIN;
	int64_t x210 = 506205LL;
	uint8_t x212 = UINT8_MAX;
	static int32_t t50 = 141794637;

    t50 = (((x209!=x210)>x211)/x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = 0;
	int64_t x214 = INT64_MIN;
	volatile int64_t x215 = -322583858446LL;
	int32_t t51 = 758100670;

    t51 = (((x213!=x214)>x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = 35;
	int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	uint8_t x220 = 54U;
	volatile int32_t t52 = 44;

    t52 = (((x217!=x218)>x219)/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x221 = 172U;
	int64_t x223 = INT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	volatile int64_t t53 = -2693857129799691LL;

    t53 = (((x221!=x222)>x223)/x224);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x228 = -1;

    t54 = (((x225!=x226)>x227)/x228);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x229 = INT8_MAX;
	int8_t x232 = 3;
	volatile int32_t t55 = -2937434;

    t55 = (((x229!=x230)>x231)/x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	uint8_t x234 = 7U;
	uint16_t x236 = 141U;
	int32_t t56 = -40;

    t56 = (((x233!=x234)>x235)/x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 1U;
	int16_t x238 = -1;
	uint16_t x239 = 13U;
	int16_t x240 = -1196;
	volatile int32_t t57 = 2069775;

    t57 = (((x237!=x238)>x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MIN;
	int64_t x243 = -433942117LL;
	volatile int8_t x244 = -1;
	volatile int32_t t58 = 7522;

    t58 = (((x241!=x242)>x243)/x244);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	int8_t x247 = -14;
	uint32_t x248 = 5670516U;
	uint32_t t59 = 0U;

    t59 = (((x245!=x246)>x247)/x248);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x249 = UINT8_MAX;
	int16_t x250 = -40;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -4;
	int32_t t60 = 613320;

    t60 = (((x249!=x250)>x251)/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x253 = 6U;
	volatile int64_t x254 = INT64_MIN;
	uint32_t x255 = UINT32_MAX;
	uint64_t x256 = 779LLU;
	uint64_t t61 = 8028437844993391644LLU;

    t61 = (((x253!=x254)>x255)/x256);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = 121380;
	int8_t x258 = 14;
	static int8_t x259 = INT8_MIN;
	volatile int16_t x260 = INT16_MIN;

    t62 = (((x257!=x258)>x259)/x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = -104;
	static int64_t x263 = -7112LL;
	int32_t x264 = -12387163;
	static volatile int32_t t63 = 6674;

    t63 = (((x261!=x262)>x263)/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 2015181636555666534LLU;
	int64_t x267 = 1LL;
	static volatile int32_t x268 = 348;

    t64 = (((x265!=x266)>x267)/x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x269 = INT16_MAX;
	static volatile uint16_t x270 = 2U;
	static int8_t x271 = INT8_MIN;
	volatile int32_t t65 = 10950459;

    t65 = (((x269!=x270)>x271)/x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 12U;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = 5799U;
	int64_t x276 = INT64_MIN;
	static int64_t t66 = -1LL;

    t66 = (((x273!=x274)>x275)/x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MAX;
	volatile uint32_t x279 = 15474U;
	int64_t x280 = -1LL;
	int64_t t67 = -2606175298LL;

    t67 = (((x277!=x278)>x279)/x280);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = INT8_MAX;
	int16_t x282 = INT16_MIN;
	static volatile int32_t x283 = -1;

    t68 = (((x281!=x282)>x283)/x284);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x286 = INT16_MAX;
	int16_t x287 = INT16_MIN;

    t69 = (((x285!=x286)>x287)/x288);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = -62742622;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = -1;

    t70 = (((x289!=x290)>x291)/x292);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x293 = INT8_MAX;
	static int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = 123783204636009588LLU;
	static int64_t x296 = -1LL;
	int64_t t71 = 10205099690176LL;

    t71 = (((x293!=x294)>x295)/x296);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x297 = 28U;
	int64_t x298 = INT64_MAX;
	volatile uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;

    t72 = (((x297!=x298)>x299)/x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x301 = 3;
	volatile int32_t x303 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	static int32_t t73 = 12948794;

    t73 = (((x301!=x302)>x303)/x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = 5049697864063904LL;
	volatile int64_t x306 = -1LL;
	int16_t x307 = INT16_MAX;
	int16_t x308 = -2999;
	static volatile int32_t t74 = -323286;

    t74 = (((x305!=x306)>x307)/x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x309 = 62U;
	int32_t x310 = INT32_MAX;
	int16_t x311 = INT16_MAX;
	int64_t x312 = 882749086LL;
	int64_t t75 = -106379LL;

    t75 = (((x309!=x310)>x311)/x312);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = -1;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 126U;
	int64_t x316 = INT64_MIN;
	int64_t t76 = 194253011LL;

    t76 = (((x313!=x314)>x315)/x316);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x318 = INT32_MAX;
	uint16_t x319 = 424U;
	int32_t x320 = -3609;

    t77 = (((x317!=x318)>x319)/x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x321 = -58099406;
	int8_t x324 = -10;

    t78 = (((x321!=x322)>x323)/x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x326 = -31;
	int64_t x327 = INT64_MIN;
	volatile int8_t x328 = INT8_MAX;

    t79 = (((x325!=x326)>x327)/x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x330 = 19720722712LLU;
	int16_t x331 = 41;
	uint32_t x332 = 147319828U;
	uint32_t t80 = 3U;

    t80 = (((x329!=x330)>x331)/x332);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = -1;
	int32_t x335 = -149397;
	int8_t x336 = -1;
	int32_t t81 = -3;

    t81 = (((x333!=x334)>x335)/x336);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = -10221766LL;
	static volatile int32_t x339 = -1;
	int64_t x340 = 5620802169LL;
	volatile int64_t t82 = 336530918477078LL;

    t82 = (((x337!=x338)>x339)/x340);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x341 = 3U;
	int64_t x342 = INT64_MIN;
	int16_t x344 = -6;

    t83 = (((x341!=x342)>x343)/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = INT32_MIN;
	uint32_t x346 = 125296U;
	volatile int16_t x347 = 223;
	int8_t x348 = INT8_MAX;

    t84 = (((x345!=x346)>x347)/x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x350 = INT16_MAX;
	static int32_t t85 = 30262087;

    t85 = (((x349!=x350)>x351)/x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x353 = INT16_MAX;
	volatile int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	static int32_t x356 = -451;
	int32_t t86 = -672751;

    t86 = (((x353!=x354)>x355)/x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MIN;
	volatile uint16_t x360 = 13025U;
	int32_t t87 = -4369757;

    t87 = (((x357!=x358)>x359)/x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x361 = INT32_MIN;
	uint32_t x363 = 25027759U;
	static int32_t x364 = -1;
	volatile int32_t t88 = -255907508;

    t88 = (((x361!=x362)>x363)/x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x365 = 7146U;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = -1;

    t89 = (((x365!=x366)>x367)/x368);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = 1256;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MAX;
	volatile int32_t t90 = 1601;

    t90 = (((x369!=x370)>x371)/x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x373 = INT8_MAX;
	static int16_t x374 = 2;
	uint8_t x376 = UINT8_MAX;
	int32_t t91 = 320290;

    t91 = (((x373!=x374)>x375)/x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x377 = 4481783LL;
	volatile int8_t x378 = INT8_MIN;
	static int64_t x379 = -1LL;
	volatile int32_t x380 = INT32_MIN;
	static volatile int32_t t92 = -7251;

    t92 = (((x377!=x378)>x379)/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x381 = INT16_MIN;
	int64_t x383 = 995017774795183LL;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t93 = -2211554;

    t93 = (((x381!=x382)>x383)/x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = INT8_MIN;
	uint8_t x386 = 1U;
	int32_t x387 = INT32_MAX;
	int32_t x388 = INT32_MAX;
	static int32_t t94 = 529;

    t94 = (((x385!=x386)>x387)/x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x389 = -229630189648209LL;
	volatile int8_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	volatile int64_t t95 = 46274000010478LL;

    t95 = (((x389!=x390)>x391)/x392);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = -1;
	volatile int32_t x394 = 3527418;
	int64_t x396 = INT64_MIN;
	int64_t t96 = 100708532388439LL;

    t96 = (((x393!=x394)>x395)/x396);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = INT64_MIN;
	uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = 1074U;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t97 = -1142177;

    t97 = (((x397!=x398)>x399)/x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = INT8_MIN;
	uint64_t x402 = UINT64_MAX;
	uint64_t x403 = 21340498727294LLU;
	volatile uint32_t x404 = 833U;
	uint32_t t98 = 17655U;

    t98 = (((x401!=x402)>x403)/x404);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x405 = INT16_MAX;
	int16_t x406 = -1;
	int32_t x407 = 265;
	volatile int32_t t99 = 226935710;

    t99 = (((x405!=x406)>x407)/x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x409 = -1LL;
	static uint8_t x410 = UINT8_MAX;
	volatile int8_t x411 = -1;
	int64_t x412 = 2556212990835261364LL;

    t100 = (((x409!=x410)>x411)/x412);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = 0;
	int8_t x414 = INT8_MIN;
	int32_t t101 = 28;

    t101 = (((x413!=x414)>x415)/x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x417 = 23309;
	uint8_t x418 = 85U;
	uint32_t x419 = 211174U;
	int8_t x420 = -1;
	int32_t t102 = -395075;

    t102 = (((x417!=x418)>x419)/x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x421 = INT16_MIN;
	int16_t x422 = -23;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;

    t103 = (((x421!=x422)>x423)/x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x425 = INT16_MAX;
	int16_t x427 = INT16_MIN;
	int32_t x428 = -1;
	int32_t t104 = 27;

    t104 = (((x425!=x426)>x427)/x428);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = INT64_MIN;
	static volatile int8_t x430 = INT8_MAX;
	int16_t x431 = -240;
	volatile int32_t x432 = 290839137;
	volatile int32_t t105 = 27;

    t105 = (((x429!=x430)>x431)/x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = -5711;
	int16_t x434 = -1;
	int64_t x435 = 2222332527LL;
	int8_t x436 = -1;
	static int32_t t106 = 20509;

    t106 = (((x433!=x434)>x435)/x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x437 = 0U;
	uint32_t x438 = UINT32_MAX;
	int32_t x439 = 970256282;
	volatile int32_t t107 = -30857739;

    t107 = (((x437!=x438)>x439)/x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x441 = 170U;
	volatile int64_t x443 = INT64_MAX;
	static int16_t x444 = INT16_MIN;
	volatile int32_t t108 = -30822737;

    t108 = (((x441!=x442)>x443)/x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = INT8_MIN;
	uint64_t x446 = 221701634222LLU;
	int16_t x448 = INT16_MIN;

    t109 = (((x445!=x446)>x447)/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x449 = 2025U;
	int16_t x450 = INT16_MAX;
	static uint16_t x451 = 2315U;
	volatile int64_t t110 = 1149275395180945051LL;

    t110 = (((x449!=x450)>x451)/x452);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x453 = INT8_MIN;
	static volatile int32_t x455 = -1;
	int64_t x456 = INT64_MIN;
	static int64_t t111 = -6341701666089455LL;

    t111 = (((x453!=x454)>x455)/x456);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MIN;
	uint16_t x459 = 716U;
	static volatile int64_t x460 = INT64_MAX;
	static int64_t t112 = 19395LL;

    t112 = (((x457!=x458)>x459)/x460);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	static int64_t x463 = -1LL;
	static int16_t x464 = -1891;

    t113 = (((x461!=x462)>x463)/x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x467 = 6314561397687LLU;
	int32_t x468 = INT32_MAX;
	int32_t t114 = -896324218;

    t114 = (((x465!=x466)>x467)/x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x470 = -1;
	uint16_t x471 = 1U;
	volatile uint32_t x472 = UINT32_MAX;
	uint32_t t115 = 1983390U;

    t115 = (((x469!=x470)>x471)/x472);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = 84722LL;
	volatile uint8_t x474 = 13U;
	int64_t x475 = 204987997948LL;
	uint64_t x476 = 774660369975227800LLU;
	static volatile uint64_t t116 = 116262LLU;

    t116 = (((x473!=x474)>x475)/x476);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x478 = 88U;
	int8_t x479 = INT8_MAX;
	int32_t x480 = 29194019;
	volatile int32_t t117 = 771531;

    t117 = (((x477!=x478)>x479)/x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x481 = -2174;
	int64_t x482 = 452473LL;
	volatile uint32_t x483 = 13981806U;
	int32_t t118 = -23609684;

    t118 = (((x481!=x482)>x483)/x484);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x485 = -285;
	int8_t x486 = INT8_MIN;
	static int64_t x487 = 3LL;
	uint16_t x488 = UINT16_MAX;
	volatile int32_t t119 = 17;

    t119 = (((x485!=x486)>x487)/x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x490 = 1U;
	int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t120 = 0;

    t120 = (((x489!=x490)>x491)/x492);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MIN;
	uint64_t x494 = 4201828224319LLU;
	uint8_t x495 = 7U;
	uint16_t x496 = 1U;
	volatile int32_t t121 = -4556;

    t121 = (((x493!=x494)>x495)/x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x498 = 15622U;
	int64_t x500 = INT64_MAX;
	int64_t t122 = -1495LL;

    t122 = (((x497!=x498)>x499)/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x501 = INT16_MAX;
	int8_t x502 = -1;
	uint8_t x503 = 108U;
	int32_t x504 = INT32_MIN;
	volatile int32_t t123 = 1;

    t123 = (((x501!=x502)>x503)/x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x505 = -48;
	int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MAX;

    t124 = (((x505!=x506)>x507)/x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MAX;
	uint64_t x511 = 11689350483062429LLU;
	uint64_t t125 = 64265LLU;

    t125 = (((x509!=x510)>x511)/x512);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x513 = 221U;
	int32_t x516 = 18;
	volatile int32_t t126 = -9579152;

    t126 = (((x513!=x514)>x515)/x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x517 = 0U;
	int8_t x518 = INT8_MAX;
	static int64_t x519 = 604663765753208LL;
	static uint64_t x520 = UINT64_MAX;
	uint64_t t127 = 94889835184LLU;

    t127 = (((x517!=x518)>x519)/x520);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x521 = UINT32_MAX;
	int8_t x522 = -2;
	int8_t x524 = -5;
	static volatile int32_t t128 = 461490;

    t128 = (((x521!=x522)>x523)/x524);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x526 = -545;
	uint32_t x527 = 493515U;
	uint8_t x528 = UINT8_MAX;
	int32_t t129 = 133895;

    t129 = (((x525!=x526)>x527)/x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	uint64_t x532 = 15LLU;
	uint64_t t130 = 2019396LLU;

    t130 = (((x529!=x530)>x531)/x532);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x533 = UINT16_MAX;
	static int8_t x535 = INT8_MIN;
	volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t131 = -932831356;

    t131 = (((x533!=x534)>x535)/x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x537 = INT16_MIN;
	static volatile int8_t x538 = -1;
	int64_t x540 = INT64_MIN;
	int64_t t132 = 205022012LL;

    t132 = (((x537!=x538)>x539)/x540);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x541 = INT32_MIN;
	int32_t x542 = -1;
	int32_t x543 = INT32_MIN;
	int32_t x544 = -2604696;

    t133 = (((x541!=x542)>x543)/x544);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x545 = INT32_MIN;
	uint64_t x546 = UINT64_MAX;
	uint32_t x547 = 1826150343U;
	int64_t x548 = INT64_MAX;
	int64_t t134 = -12301146LL;

    t134 = (((x545!=x546)>x547)/x548);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = 802U;
	static int8_t x550 = INT8_MAX;
	volatile uint32_t x551 = 11U;
	uint16_t x552 = UINT16_MAX;
	int32_t t135 = 112584;

    t135 = (((x549!=x550)>x551)/x552);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x555 = INT8_MAX;
	uint8_t x556 = 1U;
	static volatile int32_t t136 = -42626;

    t136 = (((x553!=x554)>x555)/x556);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x557 = INT16_MIN;
	int16_t x558 = INT16_MIN;
	int8_t x559 = 8;
	uint64_t x560 = UINT64_MAX;

    t137 = (((x557!=x558)>x559)/x560);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x561 = 185LL;
	int8_t x562 = -1;
	static int16_t x563 = -143;
	uint32_t x564 = 983013U;
	uint32_t t138 = 18218380U;

    t138 = (((x561!=x562)>x563)/x564);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint64_t x566 = 29658930246LLU;
	uint8_t x567 = 22U;
	int16_t x568 = INT16_MIN;
	int32_t t139 = -617567883;

    t139 = (((x565!=x566)>x567)/x568);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x569 = UINT16_MAX;
	volatile int8_t x570 = INT8_MAX;
	uint16_t x571 = 3109U;
	int64_t x572 = INT64_MIN;

    t140 = (((x569!=x570)>x571)/x572);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x573 = -27737;
	int32_t x574 = INT32_MIN;
	volatile int16_t x576 = -1652;
	static volatile int32_t t141 = -92;

    t141 = (((x573!=x574)>x575)/x576);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x577 = INT32_MIN;
	int16_t x578 = INT16_MIN;
	volatile int32_t t142 = 358;

    t142 = (((x577!=x578)>x579)/x580);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x581 = 7755LLU;
	int8_t x582 = INT8_MAX;
	uint16_t x583 = 0U;
	int8_t x584 = INT8_MIN;

    t143 = (((x581!=x582)>x583)/x584);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x585 = 0U;
	static int64_t x586 = INT64_MAX;
	volatile int16_t x587 = INT16_MIN;
	static int64_t t144 = -1184300808987023020LL;

    t144 = (((x585!=x586)>x587)/x588);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x589 = 3;
	int64_t x590 = 138763968198607641LL;
	volatile uint32_t x591 = 235U;
	int32_t t145 = 0;

    t145 = (((x589!=x590)>x591)/x592);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x594 = INT16_MIN;
	volatile uint8_t x595 = 14U;
	int8_t x596 = INT8_MIN;
	volatile int32_t t146 = 851698;

    t146 = (((x593!=x594)>x595)/x596);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x597 = 179449297454LLU;
	static int64_t x598 = -1LL;
	static uint8_t x599 = 13U;
	volatile int32_t t147 = -1061278;

    t147 = (((x597!=x598)>x599)/x600);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x601 = -77293LL;
	int16_t x602 = INT16_MIN;
	volatile uint64_t x603 = UINT64_MAX;

    t148 = (((x601!=x602)>x603)/x604);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x605 = 36450831;
	static uint8_t x606 = 1U;
	int32_t x607 = INT32_MAX;
	int64_t x608 = INT64_MIN;
	int64_t t149 = -3342884998643106LL;

    t149 = (((x605!=x606)>x607)/x608);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x609 = INT8_MIN;
	volatile int64_t x610 = INT64_MIN;
	volatile int16_t x611 = INT16_MAX;
	volatile int8_t x612 = INT8_MIN;
	int32_t t150 = -43821;

    t150 = (((x609!=x610)>x611)/x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x617 = 0U;
	int64_t x620 = -1LL;
	static volatile int64_t t151 = 12296557135167LL;

    t151 = (((x617!=x618)>x619)/x620);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x621 = -1;
	uint8_t x622 = 26U;
	int16_t x624 = -1;
	static volatile int32_t t152 = -110;

    t152 = (((x621!=x622)>x623)/x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x626 = -1;
	volatile uint32_t x627 = 94U;
	int32_t x628 = INT32_MIN;

    t153 = (((x625!=x626)>x627)/x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x629 = 42181948LL;
	static int8_t x630 = 1;
	volatile uint16_t x631 = 9686U;
	uint16_t x632 = 58U;
	int32_t t154 = 15755173;

    t154 = (((x629!=x630)>x631)/x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x633 = 7LLU;
	volatile int8_t x634 = -1;
	int16_t x635 = INT16_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t155 = 125107;

    t155 = (((x633!=x634)>x635)/x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = 271993874897618795LLU;
	int64_t x638 = INT64_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile uint32_t t156 = 304828U;

    t156 = (((x637!=x638)>x639)/x640);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x641 = 839U;
	static volatile int64_t x643 = INT64_MIN;
	int16_t x644 = INT16_MIN;
	volatile int32_t t157 = 214875457;

    t157 = (((x641!=x642)>x643)/x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x645 = 0;
	volatile int64_t x646 = INT64_MIN;
	static uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MAX;

    t158 = (((x645!=x646)>x647)/x648);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x649 = 0U;
	int32_t x650 = INT32_MIN;
	int8_t x651 = 5;
	static int8_t x652 = INT8_MIN;
	volatile int32_t t159 = -1765;

    t159 = (((x649!=x650)>x651)/x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x653 = -2;
	int64_t x654 = 8803LL;
	volatile uint32_t x655 = 129U;
	uint64_t x656 = 31899566900406539LLU;
	volatile uint64_t t160 = 1425041919904384LLU;

    t160 = (((x653!=x654)>x655)/x656);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x657 = 2U;
	int32_t x658 = INT32_MAX;
	int16_t x659 = INT16_MAX;
	static int32_t x660 = -1002490331;
	volatile int32_t t161 = -43353727;

    t161 = (((x657!=x658)>x659)/x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x662 = INT64_MIN;
	int32_t x663 = INT32_MIN;
	int16_t x664 = INT16_MIN;
	volatile int32_t t162 = -304925;

    t162 = (((x661!=x662)>x663)/x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x665 = 1490749221LLU;
	uint32_t x666 = UINT32_MAX;
	static int8_t x668 = 28;
	int32_t t163 = 942;

    t163 = (((x665!=x666)>x667)/x668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = 26U;
	volatile int8_t x670 = INT8_MIN;
	int64_t x671 = 11575LL;
	int64_t t164 = 4149191LL;

    t164 = (((x669!=x670)>x671)/x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x673 = -261268372LL;
	int16_t x675 = -1;
	int8_t x676 = -1;

    t165 = (((x673!=x674)>x675)/x676);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x677 = UINT32_MAX;
	uint32_t x678 = UINT32_MAX;
	static int32_t x679 = INT32_MAX;
	volatile uint16_t x680 = 19U;
	volatile int32_t t166 = 366;

    t166 = (((x677!=x678)>x679)/x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x681 = -1LL;
	uint8_t x682 = 0U;
	int8_t x683 = -1;
	int32_t x684 = -1;
	static volatile int32_t t167 = 693254;

    t167 = (((x681!=x682)>x683)/x684);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x685 = 2797362LLU;
	uint32_t x686 = 1U;
	uint32_t x687 = 47776423U;
	int64_t t168 = 40270LL;

    t168 = (((x685!=x686)>x687)/x688);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x689 = 1U;
	int16_t x690 = INT16_MIN;
	int64_t x691 = -1297126260561225522LL;
	static int64_t x692 = INT64_MAX;
	static volatile int64_t t169 = 153LL;

    t169 = (((x689!=x690)>x691)/x692);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x693 = -57457113497LL;
	int64_t x694 = 2LL;
	uint32_t x695 = 18046U;
	uint64_t x696 = UINT64_MAX;

    t170 = (((x693!=x694)>x695)/x696);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x697 = 6980;
	int16_t x698 = INT16_MAX;
	int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MIN;
	int64_t t171 = -469669229666LL;

    t171 = (((x697!=x698)>x699)/x700);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = INT16_MAX;
	int32_t x703 = INT32_MAX;
	volatile uint32_t t172 = 3288231U;

    t172 = (((x701!=x702)>x703)/x704);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MIN;
	volatile int16_t x711 = -1;
	int8_t x712 = -1;
	volatile int32_t t173 = 239220992;

    t173 = (((x709!=x710)>x711)/x712);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x713 = UINT8_MAX;
	int8_t x714 = -1;
	int16_t x715 = -1;
	static int16_t x716 = INT16_MIN;

    t174 = (((x713!=x714)>x715)/x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = -118194921;
	static volatile int16_t x718 = INT16_MIN;
	int8_t x720 = -1;
	volatile int32_t t175 = -236176;

    t175 = (((x717!=x718)>x719)/x720);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x721 = UINT64_MAX;
	uint8_t x722 = UINT8_MAX;
	static volatile int32_t t176 = -814996925;

    t176 = (((x721!=x722)>x723)/x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x725 = UINT64_MAX;
	int32_t x726 = INT32_MAX;
	uint32_t x727 = 1390U;
	static uint64_t t177 = 112936574399617LLU;

    t177 = (((x725!=x726)>x727)/x728);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x729 = UINT16_MAX;
	int8_t x730 = INT8_MIN;
	volatile int8_t x732 = INT8_MIN;
	int32_t t178 = -60;

    t178 = (((x729!=x730)>x731)/x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x733 = 275862249LLU;
	uint8_t x734 = 15U;
	static int8_t x735 = -1;
	volatile int16_t x736 = INT16_MAX;
	volatile int32_t t179 = 3569;

    t179 = (((x733!=x734)>x735)/x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x737 = 17278498U;
	uint8_t x738 = UINT8_MAX;
	volatile int64_t x740 = -1LL;
	volatile int64_t t180 = 3LL;

    t180 = (((x737!=x738)>x739)/x740);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x741 = 4000U;
	int64_t x742 = INT64_MAX;
	int64_t x744 = -1LL;
	static volatile int64_t t181 = 320140515405096LL;

    t181 = (((x741!=x742)>x743)/x744);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x745 = UINT32_MAX;
	uint32_t x746 = 28U;
	volatile int16_t x747 = 218;
	volatile int32_t x748 = INT32_MAX;
	volatile int32_t t182 = 74616752;

    t182 = (((x745!=x746)>x747)/x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x749 = 133860832;
	int64_t x750 = INT64_MIN;
	uint64_t t183 = 30LLU;

    t183 = (((x749!=x750)>x751)/x752);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x753 = UINT8_MAX;
	int32_t x754 = INT32_MIN;
	int64_t x755 = INT64_MIN;
	static int32_t x756 = INT32_MIN;
	volatile int32_t t184 = 12;

    t184 = (((x753!=x754)>x755)/x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x757 = -1LL;
	uint8_t x758 = 14U;
	uint16_t x759 = 23395U;
	volatile int32_t t185 = 520156;

    t185 = (((x757!=x758)>x759)/x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x762 = INT64_MAX;
	static uint16_t x763 = 31213U;
	static int16_t x764 = INT16_MAX;
	volatile int32_t t186 = 6123;

    t186 = (((x761!=x762)>x763)/x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x766 = 10230U;
	static volatile int32_t x767 = -8;
	uint32_t x768 = 1576U;

    t187 = (((x765!=x766)>x767)/x768);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x769 = 258105379386LL;
	volatile uint8_t x770 = 3U;
	static volatile int64_t x771 = 3LL;
	int8_t x772 = INT8_MAX;
	volatile int32_t t188 = 216446982;

    t188 = (((x769!=x770)>x771)/x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x773 = 96778LLU;
	static volatile int64_t x774 = INT64_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t189 = -79063224;

    t189 = (((x773!=x774)>x775)/x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = 0;
	static int64_t x778 = -341933761277027752LL;
	int8_t x779 = 0;
	volatile uint64_t x780 = 6195LLU;
	uint64_t t190 = 3760934007567260163LLU;

    t190 = (((x777!=x778)>x779)/x780);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x781 = INT8_MAX;
	volatile uint32_t x782 = 129758599U;
	volatile int8_t x783 = INT8_MIN;
	static uint64_t x784 = 55704731572LLU;

    t191 = (((x781!=x782)>x783)/x784);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = -1;
	int16_t x786 = 48;
	int8_t x787 = -1;
	int8_t x788 = -11;

    t192 = (((x785!=x786)>x787)/x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x789 = 255U;
	static uint32_t x791 = 21338U;
	uint64_t x792 = 11487LLU;
	static volatile uint64_t t193 = 2665170556LLU;

    t193 = (((x789!=x790)>x791)/x792);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x793 = -1LL;
	int16_t x795 = -39;
	uint8_t x796 = 1U;
	int32_t t194 = -4;

    t194 = (((x793!=x794)>x795)/x796);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x797 = INT8_MAX;
	int64_t x799 = -1LL;
	volatile uint64_t x800 = UINT64_MAX;
	volatile uint64_t t195 = 2054858732789LLU;

    t195 = (((x797!=x798)>x799)/x800);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = INT64_MIN;
	static int8_t x802 = -1;
	int32_t x803 = 38423;
	int16_t x804 = 1;
	int32_t t196 = -385341;

    t196 = (((x801!=x802)>x803)/x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x805 = 77534100484997LLU;
	int64_t x806 = INT64_MIN;

    t197 = (((x805!=x806)>x807)/x808);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = INT8_MAX;
	int64_t x810 = INT64_MIN;
	int8_t x811 = -1;
	uint32_t x812 = 471340529U;
	volatile uint32_t t198 = 0U;

    t198 = (((x809!=x810)>x811)/x812);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x813 = UINT8_MAX;
	int32_t x814 = INT32_MAX;
	volatile uint64_t t199 = 288471695LLU;

    t199 = (((x813!=x814)>x815)/x816);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

