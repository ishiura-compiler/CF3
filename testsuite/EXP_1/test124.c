
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

int32_t x2 = INT32_MIN;
static int8_t x3 = INT8_MAX;
uint16_t x6 = 5422U;
int16_t x7 = -1;
uint64_t x9 = 26946805LLU;
static int64_t t2 = 1584LL;
static uint32_t x13 = UINT32_MAX;
static int16_t x14 = INT16_MAX;
uint64_t x22 = 27266150780446448LLU;
uint16_t x28 = 48U;
static int64_t x37 = 25889014494LL;
int8_t x38 = 1;
volatile int32_t x43 = INT32_MAX;
uint64_t x48 = 266435258124086LLU;
volatile int32_t x56 = INT32_MIN;
int8_t x57 = -1;
int64_t x58 = INT64_MAX;
int64_t x60 = INT64_MIN;
int16_t x62 = -1;
uint16_t x66 = UINT16_MAX;
int32_t x71 = INT32_MAX;
volatile int16_t x80 = -180;
static volatile int32_t t18 = 1013;
int16_t x93 = -15120;
int8_t x94 = INT8_MAX;
static int64_t x97 = -1LL;
int64_t x99 = INT64_MIN;
volatile int32_t t22 = -189479;
int32_t x112 = INT32_MAX;
volatile int32_t t24 = 33;
int32_t x119 = -64;
int8_t x124 = -1;
int32_t x125 = 10335004;
static uint16_t x133 = 6U;
static uint16_t x137 = 630U;
volatile int8_t x141 = 0;
static uint32_t t32 = 0U;
int16_t x146 = INT16_MIN;
volatile int8_t x150 = 4;
static uint32_t x154 = 18000160U;
volatile int32_t x155 = INT32_MIN;
int16_t x156 = INT16_MIN;
static int8_t x163 = INT8_MIN;
uint64_t x170 = 29913151971031LLU;
int32_t t39 = -18;
int64_t x176 = INT64_MIN;
int32_t x178 = -4867198;
uint64_t x179 = 831987LLU;
uint64_t x184 = 17871065758LLU;
static uint64_t x186 = 1LLU;
static volatile uint16_t x196 = UINT16_MAX;
int16_t x209 = -1;
int8_t x210 = -1;
int16_t x212 = INT16_MIN;
static int8_t x216 = -1;
int64_t x225 = -1LL;
int8_t x227 = INT8_MAX;
static uint32_t x230 = 15792U;
int64_t t52 = -1083896867717606LL;
static int32_t x236 = INT32_MAX;
static volatile int32_t t53 = -20685993;
uint8_t x240 = UINT8_MAX;
static int8_t x242 = INT8_MAX;
static int8_t x248 = -1;
static volatile int32_t t56 = 2;
int32_t x257 = -1;
static int32_t t60 = 216563;
int32_t x272 = 551320;
int64_t x273 = INT64_MIN;
static int32_t x274 = 5;
static int64_t x279 = INT64_MIN;
volatile uint32_t x282 = 729U;
uint16_t x284 = 6528U;
int32_t x287 = -232388;
uint32_t x289 = 0U;
int16_t x291 = -1;
int32_t x292 = INT32_MAX;
volatile uint16_t x298 = 34U;
int64_t x304 = INT64_MAX;
int64_t t73 = 420309219LL;
int8_t x324 = INT8_MIN;
int8_t x327 = INT8_MIN;
static int16_t x328 = -13;
volatile int32_t t76 = -198902;
volatile int32_t t77 = -1;
int8_t x340 = INT8_MIN;
int8_t x341 = -1;
int16_t x343 = -48;
static uint16_t x352 = 5U;
volatile int32_t t81 = 28;
volatile uint8_t x357 = 14U;
uint16_t x360 = 2748U;
static uint32_t x362 = UINT32_MAX;
static volatile int64_t t86 = 130LL;
int32_t t89 = 446;
uint64_t x385 = UINT64_MAX;
uint32_t x390 = 57205636U;
uint8_t x392 = 0U;
volatile int64_t x399 = -1915990097363339100LL;
int8_t x403 = -1;
int32_t x411 = -6500;
static int32_t x412 = -432431446;
volatile uint64_t x432 = 0LLU;
volatile int64_t t100 = 136019LL;
uint32_t x437 = 3U;
uint16_t x442 = UINT16_MAX;
int32_t t102 = -201185843;
int32_t x452 = 0;
int16_t x454 = INT16_MIN;
volatile uint64_t t104 = 70983385428672653LLU;
volatile int16_t x457 = INT16_MIN;
volatile int32_t t105 = 1;
static int16_t x471 = INT16_MIN;
volatile uint32_t x479 = UINT32_MAX;
int8_t x481 = -2;
volatile int32_t t112 = -262271073;
volatile int64_t t114 = 193039LL;
int8_t x504 = -9;
volatile uint16_t x507 = UINT16_MAX;
int16_t x510 = INT16_MIN;
int32_t x512 = INT32_MIN;
int32_t t117 = -2369;
volatile uint16_t x516 = 4998U;
int32_t t118 = -49306842;
volatile int8_t x517 = 45;
static int32_t x519 = 34641076;
int32_t t119 = -35768770;
int32_t x532 = INT32_MIN;
int64_t x534 = 2703205336LL;
int16_t x540 = INT16_MAX;
int32_t t124 = -164227872;
uint16_t x549 = 0U;
static int64_t x550 = INT64_MAX;
volatile int64_t x551 = -1LL;
int8_t x560 = INT8_MAX;
uint8_t x562 = 29U;
volatile int32_t t130 = 29;
static int64_t t132 = -1LL;
volatile int64_t t133 = -6LL;
int32_t t134 = -19749597;
int16_t x594 = -1;
int8_t x601 = -1;
int16_t x608 = -65;
static int64_t x618 = -1LL;
uint32_t x630 = UINT32_MAX;
uint32_t x645 = 7U;
volatile int16_t x663 = INT16_MAX;
int64_t x667 = INT64_MIN;
volatile int32_t t153 = -140841;
int32_t t154 = -2545068;
int32_t t155 = 647592551;
static uint16_t x678 = 20332U;
volatile uint64_t x692 = 418579841149LLU;
uint16_t x693 = 31U;
int32_t x697 = 107;
int16_t x701 = 2;
int8_t x706 = INT8_MIN;
static int64_t x708 = INT64_MAX;
volatile uint64_t t163 = 43266LLU;
int8_t x716 = INT8_MIN;
int64_t x726 = -1LL;
uint64_t x728 = 4009574606LLU;
int8_t x732 = -1;
int32_t x733 = -1;
uint32_t x741 = 23991147U;
int16_t x746 = -1;
static int32_t t172 = -8825;
volatile uint16_t x764 = UINT16_MAX;
int32_t x765 = -1;
static int32_t x770 = INT32_MAX;
int16_t x774 = INT16_MIN;
uint32_t x778 = 7388129U;
static int64_t x787 = -220937LL;
int16_t x788 = 150;
volatile int32_t t182 = -150;
uint32_t x809 = 13U;
int64_t x811 = INT64_MAX;
int8_t x814 = -1;
int8_t x823 = -3;
int8_t x827 = INT8_MAX;
uint64_t x847 = 172409511485590175LLU;
uint64_t x855 = 62LLU;
int16_t x862 = 972;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	int16_t x4 = -227;
	volatile int32_t t0 = -35;

    t0 = (((x1+x2)>x3)&x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint64_t x8 = 0LLU;
	volatile uint64_t t1 = 1605798650059900LLU;

    t1 = (((x5+x6)>x7)&x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x10 = 223209819059382859LLU;
	uint64_t x11 = 4062057371LLU;
	static int64_t x12 = INT64_MIN;

    t2 = (((x9+x10)>x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = -1;
	volatile int16_t x16 = -79;
	int32_t t3 = -7777;

    t3 = (((x13+x14)>x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = 4;
	int64_t x18 = -1LL;
	static volatile int16_t x19 = INT16_MIN;
	int64_t x20 = -236813832812LL;
	int64_t t4 = -180LL;

    t4 = (((x17+x18)>x19)&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -823705065862454087LL;
	int8_t x23 = INT8_MAX;
	static uint64_t x24 = UINT64_MAX;
	uint64_t t5 = 110LLU;

    t5 = (((x21+x22)>x23)&x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile int64_t x27 = INT64_MIN;
	int32_t t6 = 5333;

    t6 = (((x25+x26)>x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	volatile uint16_t x30 = 2125U;
	int16_t x31 = -37;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 3156;

    t7 = (((x29+x30)>x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x39 = UINT64_MAX;
	volatile int8_t x40 = -1;
	static volatile int32_t t8 = -3319077;

    t8 = (((x37+x38)>x39)&x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MAX;
	uint32_t x42 = 54654505U;
	int64_t x44 = -8760803794239LL;
	volatile int64_t t9 = 63LL;

    t9 = (((x41+x42)>x43)&x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MAX;
	static uint16_t x47 = 4U;
	volatile uint64_t t10 = 112350772LLU;

    t10 = (((x45+x46)>x47)&x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -8;
	static volatile uint8_t x50 = 68U;
	int64_t x51 = -124924870904086LL;
	int32_t x52 = -1;
	static volatile int32_t t11 = 563343;

    t11 = (((x49+x50)>x51)&x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = 8061796;
	int16_t x54 = -1933;
	static volatile int16_t x55 = -1;
	int32_t t12 = 6583039;

    t12 = (((x53+x54)>x55)&x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x59 = -1;
	volatile int64_t t13 = 4058883945065636929LL;

    t13 = (((x57+x58)>x59)&x60);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 53U;
	static volatile uint8_t x63 = 2U;
	volatile int32_t x64 = INT32_MIN;
	static volatile int32_t t14 = -10521413;

    t14 = (((x61+x62)>x63)&x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	int16_t x67 = INT16_MIN;
	uint8_t x68 = 17U;
	int32_t t15 = -6160807;

    t15 = (((x65+x66)>x67)&x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = -1;
	volatile int16_t x70 = INT16_MIN;
	int8_t x72 = -4;
	static int32_t t16 = -274238343;

    t16 = (((x69+x70)>x71)&x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 2LLU;
	static int16_t x74 = INT16_MIN;
	static int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -39158218;

    t17 = (((x73+x74)>x75)&x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x77 = 5U;
	static volatile int8_t x78 = -1;
	volatile uint64_t x79 = 417423929174LLU;

    t18 = (((x77+x78)>x79)&x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = INT8_MAX;
	volatile uint32_t x82 = 129923026U;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = 147089019390867998LL;
	int64_t t19 = -178707329765239125LL;

    t19 = (((x81+x82)>x83)&x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x89 = 1U;
	volatile uint32_t x90 = UINT32_MAX;
	uint32_t x91 = 480177711U;
	int64_t x92 = 51798580357360542LL;
	int64_t t20 = 4245333793852LL;

    t20 = (((x89+x90)>x91)&x92);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x95 = 181U;
	static int32_t x96 = -1;
	static int32_t t21 = -1;

    t21 = (((x93+x94)>x95)&x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x98 = UINT32_MAX;
	int32_t x100 = INT32_MIN;

    t22 = (((x97+x98)>x99)&x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MAX;
	int8_t x102 = -4;
	int32_t x103 = -207548146;
	static int16_t x104 = -3;
	static int32_t t23 = 45330201;

    t23 = (((x101+x102)>x103)&x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = INT16_MAX;
	static int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MAX;

    t24 = (((x109+x110)>x111)&x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x113 = 41U;
	uint32_t x114 = 44U;
	static int16_t x115 = -1;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t25 = 1304;

    t25 = (((x113+x114)>x115)&x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x117 = 0;
	int32_t x118 = INT32_MIN;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t26 = -1;

    t26 = (((x117+x118)>x119)&x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = UINT16_MAX;
	static int32_t x123 = 2;
	static volatile int32_t t27 = -75849;

    t27 = (((x121+x122)>x123)&x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x126 = UINT16_MAX;
	int32_t x127 = -1;
	static uint64_t x128 = UINT64_MAX;
	uint64_t t28 = 50813197LLU;

    t28 = (((x125+x126)>x127)&x128);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile uint64_t x130 = UINT64_MAX;
	uint8_t x131 = 38U;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t29 = 212031U;

    t29 = (((x129+x130)>x131)&x132);

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x134 = 4304LLU;
	volatile int8_t x135 = INT8_MAX;
	volatile int8_t x136 = -1;
	static int32_t t30 = 43;

    t30 = (((x133+x134)>x135)&x136);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	volatile int8_t x140 = -1;
	int32_t t31 = -117710263;

    t31 = (((x137+x138)>x139)&x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x142 = INT16_MAX;
	uint8_t x143 = 20U;
	static uint32_t x144 = UINT32_MAX;

    t32 = (((x141+x142)>x143)&x144);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x145 = 2U;
	int64_t x147 = 1LL;
	uint64_t x148 = 3LLU;
	volatile uint64_t t33 = 80320528183LLU;

    t33 = (((x145+x146)>x147)&x148);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = UINT32_MAX;
	volatile uint64_t x151 = 1LLU;
	int8_t x152 = -3;
	volatile int32_t t34 = -1492105;

    t34 = (((x149+x150)>x151)&x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = -3;
	static volatile int32_t t35 = 1;

    t35 = (((x153+x154)>x155)&x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = -110;
	int32_t x160 = INT32_MIN;
	volatile int32_t t36 = -5897459;

    t36 = (((x157+x158)>x159)&x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = -11;
	uint64_t x162 = 14317555503869223LLU;
	static volatile uint8_t x164 = UINT8_MAX;
	static int32_t t37 = 6;

    t37 = (((x161+x162)>x163)&x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = 1U;
	int16_t x168 = INT16_MAX;
	volatile int32_t t38 = -1;

    t38 = (((x165+x166)>x167)&x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x171 = -1;
	int32_t x172 = INT32_MIN;

    t39 = (((x169+x170)>x171)&x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x173 = 15518854468864LL;
	uint32_t x174 = 27598U;
	volatile uint64_t x175 = 377880366133LLU;
	volatile int64_t t40 = 520689068LL;

    t40 = (((x173+x174)>x175)&x176);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x177 = INT8_MAX;
	volatile int16_t x180 = 1;
	volatile int32_t t41 = 1;

    t41 = (((x177+x178)>x179)&x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MIN;
	uint64_t t42 = 23517532861265842LLU;

    t42 = (((x181+x182)>x183)&x184);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint32_t x187 = 6679349U;
	volatile uint8_t x188 = UINT8_MAX;
	volatile int32_t t43 = -112;

    t43 = (((x185+x186)>x187)&x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x189 = 11581458878742995LLU;
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MAX;
	volatile uint64_t x192 = 73195666206048LLU;
	uint64_t t44 = 18788302722LLU;

    t44 = (((x189+x190)>x191)&x192);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x193 = INT32_MAX;
	static uint64_t x194 = UINT64_MAX;
	int32_t x195 = -140;
	int32_t t45 = 98143;

    t45 = (((x193+x194)>x195)&x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x197 = -1;
	int64_t x198 = -1LL;
	static int64_t x199 = 226669995397076521LL;
	int8_t x200 = -1;
	volatile int32_t t46 = -2;

    t46 = (((x197+x198)>x199)&x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x201 = 6;
	uint8_t x202 = 66U;
	static int8_t x203 = INT8_MIN;
	uint16_t x204 = UINT16_MAX;
	int32_t t47 = -845082650;

    t47 = (((x201+x202)>x203)&x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x211 = 194867573U;
	int32_t t48 = -12499437;

    t48 = (((x209+x210)>x211)&x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x213 = -174;
	int32_t x214 = INT32_MAX;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t49 = 122907;

    t49 = (((x213+x214)>x215)&x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = 2879;
	int32_t x222 = INT32_MIN;
	uint16_t x223 = 15661U;
	int16_t x224 = INT16_MIN;
	int32_t t50 = 2784721;

    t50 = (((x221+x222)>x223)&x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x226 = INT32_MIN;
	int64_t x228 = 97333406979317834LL;
	volatile int64_t t51 = -4956058LL;

    t51 = (((x225+x226)>x227)&x228);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x229 = UINT8_MAX;
	int32_t x231 = -345564;
	int64_t x232 = 421853LL;

    t52 = (((x229+x230)>x231)&x232);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint16_t x234 = 4967U;
	int32_t x235 = -1;

    t53 = (((x233+x234)>x235)&x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x237 = 3903U;
	static uint8_t x238 = 15U;
	int32_t x239 = INT32_MIN;
	static int32_t t54 = -219507481;

    t54 = (((x237+x238)>x239)&x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = 90U;
	int64_t x243 = INT64_MIN;
	int64_t x244 = 9889221LL;
	static volatile int64_t t55 = -118144646LL;

    t55 = (((x241+x242)>x243)&x244);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = 3;
	int8_t x246 = -52;
	static int32_t x247 = 1981567;

    t56 = (((x245+x246)>x247)&x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -1;
	int16_t x250 = -4739;
	int32_t x251 = INT32_MIN;
	volatile int16_t x252 = INT16_MIN;
	int32_t t57 = 62;

    t57 = (((x249+x250)>x251)&x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x253 = UINT32_MAX;
	uint32_t x254 = UINT32_MAX;
	volatile int32_t x255 = INT32_MIN;
	int32_t x256 = -9;
	int32_t t58 = 275499;

    t58 = (((x253+x254)>x255)&x256);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x258 = 75746188LLU;
	volatile uint64_t x259 = UINT64_MAX;
	uint32_t x260 = 127935U;
	uint32_t t59 = 146U;

    t59 = (((x257+x258)>x259)&x260);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x261 = 539402204816623280LLU;
	uint32_t x262 = 1745210105U;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = -1;

    t60 = (((x261+x262)>x263)&x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x265 = INT16_MIN;
	uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = -10;
	volatile int32_t x268 = INT32_MAX;
	static int32_t t61 = 24;

    t61 = (((x265+x266)>x267)&x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x269 = INT16_MIN;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MIN;
	int32_t t62 = -2463785;

    t62 = (((x269+x270)>x271)&x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x275 = -6;
	int16_t x276 = 2317;
	int32_t t63 = -46;

    t63 = (((x273+x274)>x275)&x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x277 = INT16_MAX;
	int16_t x278 = -1;
	volatile int8_t x280 = -5;
	static int32_t t64 = -7119340;

    t64 = (((x277+x278)>x279)&x280);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = -13;
	int64_t x283 = 143896950LL;
	int32_t t65 = -21277;

    t65 = (((x281+x282)>x283)&x284);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x285 = 2U;
	uint8_t x286 = 8U;
	int8_t x288 = 3;
	volatile int32_t t66 = 0;

    t66 = (((x285+x286)>x287)&x288);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x290 = 4432405U;
	volatile int32_t t67 = 1859;

    t67 = (((x289+x290)>x291)&x292);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MAX;
	int64_t x295 = INT64_MIN;
	static int32_t x296 = 7;
	volatile int32_t t68 = -22514246;

    t68 = (((x293+x294)>x295)&x296);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x297 = 0;
	int64_t x299 = INT64_MAX;
	uint64_t x300 = UINT64_MAX;
	uint64_t t69 = 3927942875578803345LLU;

    t69 = (((x297+x298)>x299)&x300);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x301 = 2139177882381LLU;
	volatile uint16_t x302 = 699U;
	static volatile int64_t x303 = 0LL;
	static volatile int64_t t70 = 25117992LL;

    t70 = (((x301+x302)>x303)&x304);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MAX;
	int16_t x307 = 9;
	int32_t x308 = -1;
	volatile int32_t t71 = -58087239;

    t71 = (((x305+x306)>x307)&x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x313 = 1U;
	int64_t x314 = 120809106903LL;
	int8_t x315 = -1;
	volatile int8_t x316 = INT8_MIN;
	static int32_t t72 = 52954;

    t72 = (((x313+x314)>x315)&x316);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x317 = UINT8_MAX;
	volatile int64_t x318 = -1LL;
	uint8_t x319 = UINT8_MAX;
	static int64_t x320 = 5192721430LL;

    t73 = (((x317+x318)>x319)&x320);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x321 = INT8_MAX;
	int64_t x322 = 48819054094LL;
	static int64_t x323 = -46057LL;
	int32_t t74 = 92758738;

    t74 = (((x321+x322)>x323)&x324);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = 190463LLU;
	int32_t t75 = -185625334;

    t75 = (((x325+x326)>x327)&x328);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x329 = UINT32_MAX;
	uint32_t x330 = 21U;
	int16_t x331 = 16348;
	volatile int8_t x332 = INT8_MIN;

    t76 = (((x329+x330)>x331)&x332);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x333 = -1;
	volatile int64_t x334 = 0LL;
	int16_t x335 = -61;
	static int32_t x336 = INT32_MIN;

    t77 = (((x333+x334)>x335)&x336);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x337 = 3605955U;
	int16_t x338 = INT16_MAX;
	uint8_t x339 = UINT8_MAX;
	volatile int32_t t78 = 371;

    t78 = (((x337+x338)>x339)&x340);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x342 = -2013;
	uint64_t x344 = 9610351850435LLU;
	uint64_t t79 = 94824211LLU;

    t79 = (((x341+x342)>x343)&x344);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x345 = 36346U;
	static int8_t x346 = INT8_MIN;
	uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 2U;
	volatile int32_t t80 = 11236;

    t80 = (((x345+x346)>x347)&x348);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x349 = -1LL;
	int32_t x350 = -1570942;
	uint64_t x351 = 334406310057448923LLU;

    t81 = (((x349+x350)>x351)&x352);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 4U;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 231654453061187855LLU;
	static uint64_t t82 = 77256LLU;

    t82 = (((x353+x354)>x355)&x356);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x358 = 0;
	volatile int8_t x359 = INT8_MIN;
	volatile int32_t t83 = 476;

    t83 = (((x357+x358)>x359)&x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x361 = 0U;
	volatile uint8_t x363 = 90U;
	int8_t x364 = -1;
	volatile int32_t t84 = -33504475;

    t84 = (((x361+x362)>x363)&x364);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x365 = 710248LL;
	volatile uint16_t x366 = 26U;
	int64_t x367 = INT64_MIN;
	static volatile int32_t x368 = -1;
	int32_t t85 = 510803866;

    t85 = (((x365+x366)>x367)&x368);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = -1LL;
	uint8_t x370 = UINT8_MAX;
	uint8_t x371 = 125U;
	int64_t x372 = INT64_MAX;

    t86 = (((x369+x370)>x371)&x372);

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = -1;
	volatile int16_t x374 = INT16_MIN;
	volatile int64_t x375 = 1652600910929051754LL;
	static int32_t x376 = INT32_MIN;
	static volatile int32_t t87 = -24;

    t87 = (((x373+x374)>x375)&x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x377 = -1;
	uint64_t x378 = 527426794230235516LLU;
	int8_t x379 = INT8_MAX;
	volatile int8_t x380 = INT8_MAX;
	static volatile int32_t t88 = 85271805;

    t88 = (((x377+x378)>x379)&x380);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x381 = INT16_MIN;
	static int16_t x382 = INT16_MAX;
	volatile int8_t x383 = 38;
	int8_t x384 = 38;

    t89 = (((x381+x382)>x383)&x384);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x386 = 2812U;
	static int64_t x387 = INT64_MIN;
	int8_t x388 = 0;
	int32_t t90 = 2;

    t90 = (((x385+x386)>x387)&x388);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x391 = -1LL;
	volatile int32_t t91 = 48;

    t91 = (((x389+x390)>x391)&x392);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x393 = -1;
	int16_t x394 = INT16_MAX;
	int64_t x395 = 9452384LL;
	int8_t x396 = -1;
	volatile int32_t t92 = -65523105;

    t92 = (((x393+x394)>x395)&x396);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x397 = INT16_MAX;
	volatile uint16_t x398 = 824U;
	static uint8_t x400 = UINT8_MAX;
	int32_t t93 = 163;

    t93 = (((x397+x398)>x399)&x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x401 = -209736300622LL;
	int32_t x402 = INT32_MAX;
	static int32_t x404 = -4152222;
	int32_t t94 = -37849353;

    t94 = (((x401+x402)>x403)&x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x409 = INT64_MAX;
	int32_t x410 = -1;
	int32_t t95 = 118691909;

    t95 = (((x409+x410)>x411)&x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x413 = INT8_MIN;
	int32_t x414 = -29639;
	int32_t x415 = 3939507;
	volatile int64_t x416 = INT64_MIN;
	volatile int64_t t96 = -17147LL;

    t96 = (((x413+x414)>x415)&x416);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x417 = UINT8_MAX;
	int16_t x418 = INT16_MIN;
	static int32_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile int64_t t97 = 1156134861656LL;

    t97 = (((x417+x418)>x419)&x420);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = 4414;
	static volatile int64_t x423 = 14481LL;
	int32_t x424 = 27584099;
	int32_t t98 = 13927076;

    t98 = (((x421+x422)>x423)&x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x429 = -1;
	int16_t x430 = INT16_MIN;
	static uint16_t x431 = 3381U;
	volatile uint64_t t99 = 66316LLU;

    t99 = (((x429+x430)>x431)&x432);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x433 = 1;
	int16_t x434 = INT16_MIN;
	uint64_t x435 = 185537383LLU;
	int64_t x436 = INT64_MIN;

    t100 = (((x433+x434)>x435)&x436);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x438 = 26202U;
	int32_t x439 = INT32_MIN;
	uint8_t x440 = 26U;
	volatile int32_t t101 = 1551;

    t101 = (((x437+x438)>x439)&x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x441 = -1;
	int8_t x443 = -29;
	int16_t x444 = -8179;

    t102 = (((x441+x442)>x443)&x444);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x449 = 21425U;
	static uint64_t x450 = 8462064224LLU;
	volatile uint8_t x451 = 90U;
	int32_t t103 = 2507751;

    t103 = (((x449+x450)>x451)&x452);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x453 = UINT64_MAX;
	int32_t x455 = -1;
	static uint64_t x456 = UINT64_MAX;

    t104 = (((x453+x454)>x455)&x456);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x458 = -1;
	volatile int16_t x459 = INT16_MAX;
	int32_t x460 = -15653081;

    t105 = (((x457+x458)>x459)&x460);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x461 = 43497LLU;
	int64_t x462 = INT64_MIN;
	int8_t x463 = -1;
	uint64_t x464 = UINT64_MAX;
	static volatile uint64_t t106 = 8LLU;

    t106 = (((x461+x462)>x463)&x464);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x465 = INT16_MAX;
	volatile int64_t x466 = INT64_MIN;
	int32_t x467 = INT32_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t107 = -142808;

    t107 = (((x465+x466)>x467)&x468);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = INT16_MIN;
	int16_t x472 = INT16_MAX;
	volatile int32_t t108 = -4027;

    t108 = (((x469+x470)>x471)&x472);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x473 = INT32_MIN;
	volatile int64_t x474 = 194254315031LL;
	static int8_t x475 = INT8_MAX;
	int8_t x476 = INT8_MAX;
	volatile int32_t t109 = 8095;

    t109 = (((x473+x474)>x475)&x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x477 = 0U;
	int32_t x478 = INT32_MIN;
	volatile int16_t x480 = INT16_MAX;
	volatile int32_t t110 = 121;

    t110 = (((x477+x478)>x479)&x480);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x482 = -1LL;
	int8_t x483 = INT8_MAX;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t111 = -63631;

    t111 = (((x481+x482)>x483)&x484);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x489 = -11514;
	static int32_t x490 = -25158;
	int32_t x491 = -1;
	volatile int32_t x492 = -6365;

    t112 = (((x489+x490)>x491)&x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x493 = 6U;
	int16_t x494 = INT16_MIN;
	static volatile uint16_t x495 = UINT16_MAX;
	volatile int32_t x496 = INT32_MIN;
	int32_t t113 = -92397;

    t113 = (((x493+x494)>x495)&x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x497 = INT32_MAX;
	int8_t x498 = INT8_MIN;
	int8_t x499 = 27;
	int64_t x500 = INT64_MIN;

    t114 = (((x497+x498)>x499)&x500);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x501 = -1;
	int8_t x502 = INT8_MAX;
	int32_t x503 = INT32_MIN;
	volatile int32_t t115 = -432;

    t115 = (((x501+x502)>x503)&x504);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x505 = UINT8_MAX;
	static uint32_t x506 = 300630657U;
	int8_t x508 = INT8_MIN;
	int32_t t116 = 0;

    t116 = (((x505+x506)>x507)&x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x509 = UINT8_MAX;
	uint32_t x511 = 5570251U;

    t117 = (((x509+x510)>x511)&x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x513 = 7108U;
	int8_t x514 = -1;
	volatile uint32_t x515 = UINT32_MAX;

    t118 = (((x513+x514)>x515)&x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x518 = INT64_MIN;
	volatile uint8_t x520 = 14U;

    t119 = (((x517+x518)>x519)&x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x521 = INT64_MIN;
	uint64_t x522 = 3276002417704129429LLU;
	volatile int8_t x523 = -1;
	static int16_t x524 = INT16_MAX;
	static int32_t t120 = 7;

    t120 = (((x521+x522)>x523)&x524);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = -1;
	uint32_t x526 = 1897U;
	int16_t x527 = -1;
	uint32_t x528 = 6346U;
	volatile uint32_t t121 = 16U;

    t121 = (((x525+x526)>x527)&x528);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = 4;
	volatile int32_t x530 = -1970971;
	uint8_t x531 = UINT8_MAX;
	volatile int32_t t122 = 1319;

    t122 = (((x529+x530)>x531)&x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x533 = 76U;
	int64_t x535 = -1LL;
	uint32_t x536 = 9621307U;
	uint32_t t123 = 183002639U;

    t123 = (((x533+x534)>x535)&x536);

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x537 = 10700U;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;

    t124 = (((x537+x538)>x539)&x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x541 = -16068;
	int64_t x542 = -956220LL;
	uint32_t x543 = 29998424U;
	volatile uint8_t x544 = 0U;
	int32_t t125 = -1013710549;

    t125 = (((x541+x542)>x543)&x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = UINT16_MAX;
	int16_t x547 = INT16_MIN;
	static int64_t x548 = -48375609088035LL;
	int64_t t126 = 3645532805LL;

    t126 = (((x545+x546)>x547)&x548);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x552 = 1U;
	volatile int32_t t127 = 268210808;

    t127 = (((x549+x550)>x551)&x552);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x553 = -1LL;
	int32_t x554 = -1;
	volatile int64_t x555 = 796738622519537494LL;
	static uint16_t x556 = UINT16_MAX;
	int32_t t128 = 107447;

    t128 = (((x553+x554)>x555)&x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	static int16_t x559 = INT16_MAX;
	volatile int32_t t129 = 647413;

    t129 = (((x557+x558)>x559)&x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x561 = 0U;
	static int32_t x563 = -1;
	int32_t x564 = INT32_MAX;

    t130 = (((x561+x562)>x563)&x564);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x565 = UINT32_MAX;
	uint64_t x566 = UINT64_MAX;
	uint32_t x567 = UINT32_MAX;
	static volatile int8_t x568 = INT8_MIN;
	static volatile int32_t t131 = 385375;

    t131 = (((x565+x566)>x567)&x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x569 = INT64_MIN;
	static uint64_t x570 = UINT64_MAX;
	int8_t x571 = INT8_MIN;
	static int64_t x572 = INT64_MAX;

    t132 = (((x569+x570)>x571)&x572);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x573 = 0U;
	uint32_t x574 = 287897U;
	int8_t x575 = INT8_MIN;
	static int64_t x576 = -1LL;

    t133 = (((x573+x574)>x575)&x576);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MIN;
	uint64_t x578 = UINT64_MAX;
	int8_t x579 = 3;
	static int32_t x580 = -1;

    t134 = (((x577+x578)>x579)&x580);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x581 = UINT16_MAX;
	volatile int16_t x582 = INT16_MAX;
	uint8_t x583 = UINT8_MAX;
	volatile uint16_t x584 = 57U;
	int32_t t135 = 8651;

    t135 = (((x581+x582)>x583)&x584);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = -1;
	static int64_t x586 = -663871014363LL;
	int8_t x587 = 28;
	int64_t x588 = INT64_MIN;
	int64_t t136 = -458262512397LL;

    t136 = (((x585+x586)>x587)&x588);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x589 = 107463228695899068LLU;
	uint32_t x590 = 28649U;
	volatile uint16_t x591 = 1U;
	int64_t x592 = 1496110463360LL;
	int64_t t137 = -204977556299046120LL;

    t137 = (((x589+x590)>x591)&x592);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x593 = -1;
	int16_t x595 = -804;
	static int8_t x596 = -1;
	int32_t t138 = 3;

    t138 = (((x593+x594)>x595)&x596);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x598 = 630;
	int8_t x599 = INT8_MIN;
	static volatile int32_t x600 = INT32_MAX;
	volatile int32_t t139 = -114363;

    t139 = (((x597+x598)>x599)&x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x602 = UINT8_MAX;
	int32_t x603 = -1;
	int8_t x604 = INT8_MIN;
	volatile int32_t t140 = 412138413;

    t140 = (((x601+x602)>x603)&x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = -1LL;
	uint32_t x607 = 17497U;
	int32_t t141 = 279;

    t141 = (((x605+x606)>x607)&x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x609 = 1525U;
	int64_t x610 = -1LL;
	int16_t x611 = INT16_MIN;
	int64_t x612 = INT64_MIN;
	int64_t t142 = 15631137031867060LL;

    t142 = (((x609+x610)>x611)&x612);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x613 = INT16_MIN;
	static int64_t x614 = -53735201LL;
	static int64_t x615 = 3488051375208LL;
	int32_t x616 = INT32_MAX;
	int32_t t143 = -8405179;

    t143 = (((x613+x614)>x615)&x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x617 = 51LLU;
	int32_t x619 = -1;
	uint64_t x620 = 141735887650073879LLU;
	volatile uint64_t t144 = 17160LLU;

    t144 = (((x617+x618)>x619)&x620);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x621 = -10;
	uint64_t x622 = 252299520557278200LLU;
	int64_t x623 = 118304LL;
	int64_t x624 = 4448271291776292302LL;
	int64_t t145 = -42LL;

    t145 = (((x621+x622)>x623)&x624);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = -2LL;
	static int16_t x626 = INT16_MAX;
	uint8_t x627 = UINT8_MAX;
	static volatile uint8_t x628 = UINT8_MAX;
	int32_t t146 = 1;

    t146 = (((x625+x626)>x627)&x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x629 = -1;
	static int32_t x631 = INT32_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t147 = 57628974;

    t147 = (((x629+x630)>x631)&x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x633 = 52654LLU;
	volatile int8_t x634 = INT8_MAX;
	volatile int32_t x635 = INT32_MIN;
	int64_t x636 = -1LL;
	volatile int64_t t148 = -528262879665367399LL;

    t148 = (((x633+x634)>x635)&x636);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x637 = UINT8_MAX;
	uint16_t x638 = 5U;
	uint8_t x639 = 46U;
	int8_t x640 = INT8_MAX;
	volatile int32_t t149 = 73594;

    t149 = (((x637+x638)>x639)&x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x641 = 8664198292471LLU;
	static int8_t x642 = INT8_MIN;
	int8_t x643 = -1;
	int8_t x644 = INT8_MIN;
	static int32_t t150 = -2028;

    t150 = (((x641+x642)>x643)&x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x646 = INT16_MAX;
	volatile uint8_t x647 = 2U;
	int16_t x648 = -1;
	volatile int32_t t151 = -66388763;

    t151 = (((x645+x646)>x647)&x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x661 = -1;
	int8_t x662 = INT8_MIN;
	uint32_t x664 = 83412U;
	uint32_t t152 = 1U;

    t152 = (((x661+x662)>x663)&x664);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x665 = 791443297LLU;
	volatile int64_t x666 = -1LL;
	int16_t x668 = -1;

    t153 = (((x665+x666)>x667)&x668);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = 0;
	int32_t x671 = INT32_MIN;
	int16_t x672 = INT16_MIN;

    t154 = (((x669+x670)>x671)&x672);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x673 = -7;
	int16_t x674 = INT16_MIN;
	uint8_t x675 = 2U;
	int8_t x676 = INT8_MAX;

    t155 = (((x673+x674)>x675)&x676);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x677 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	volatile uint8_t x680 = UINT8_MAX;
	static volatile int32_t t156 = 12120882;

    t156 = (((x677+x678)>x679)&x680);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x685 = UINT64_MAX;
	volatile int8_t x686 = INT8_MIN;
	volatile uint8_t x687 = 11U;
	int8_t x688 = 60;
	int32_t t157 = 739984;

    t157 = (((x685+x686)>x687)&x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x689 = INT16_MAX;
	int32_t x690 = -1;
	int32_t x691 = 1950;
	volatile uint64_t t158 = 31LLU;

    t158 = (((x689+x690)>x691)&x692);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x694 = -13;
	int64_t x695 = -228LL;
	int32_t x696 = INT32_MIN;
	volatile int32_t t159 = -2;

    t159 = (((x693+x694)>x695)&x696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x698 = INT8_MIN;
	uint32_t x699 = 0U;
	volatile int64_t x700 = INT64_MIN;
	volatile int64_t t160 = -655294LL;

    t160 = (((x697+x698)>x699)&x700);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x702 = INT8_MIN;
	static int64_t x703 = -94797628LL;
	uint64_t x704 = 3265LLU;
	uint64_t t161 = 12493056712713963LLU;

    t161 = (((x701+x702)>x703)&x704);

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x705 = INT16_MIN;
	uint8_t x707 = 5U;
	static int64_t t162 = -309250344LL;

    t162 = (((x705+x706)>x707)&x708);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x709 = UINT8_MAX;
	int32_t x710 = -7932486;
	int8_t x711 = INT8_MIN;
	uint64_t x712 = UINT64_MAX;

    t163 = (((x709+x710)>x711)&x712);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x713 = -1;
	static int64_t x714 = INT64_MAX;
	uint8_t x715 = 52U;
	volatile int32_t t164 = -12;

    t164 = (((x713+x714)>x715)&x716);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x721 = INT8_MIN;
	static uint32_t x722 = 20807U;
	uint8_t x723 = 2U;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t165 = 2351192;

    t165 = (((x721+x722)>x723)&x724);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x725 = -1;
	int16_t x727 = INT16_MAX;
	static uint64_t t166 = 237270643LLU;

    t166 = (((x725+x726)>x727)&x728);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x729 = 5;
	int32_t x730 = INT32_MIN;
	static int32_t x731 = INT32_MIN;
	volatile int32_t t167 = 24198552;

    t167 = (((x729+x730)>x731)&x732);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint16_t x734 = 26U;
	volatile uint16_t x735 = 2513U;
	volatile int8_t x736 = INT8_MIN;
	static int32_t t168 = -439381;

    t168 = (((x733+x734)>x735)&x736);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x737 = -2;
	volatile uint8_t x738 = UINT8_MAX;
	static int16_t x739 = 678;
	volatile int64_t x740 = INT64_MAX;
	int64_t t169 = 346532LL;

    t169 = (((x737+x738)>x739)&x740);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x742 = 378;
	int64_t x743 = INT64_MIN;
	static volatile int64_t x744 = INT64_MIN;
	volatile int64_t t170 = 561671081LL;

    t170 = (((x741+x742)>x743)&x744);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x745 = 1U;
	static uint64_t x747 = 7957663LLU;
	uint64_t x748 = 117691070937599152LLU;
	uint64_t t171 = 104LLU;

    t171 = (((x745+x746)>x747)&x748);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x749 = 2351418LLU;
	uint64_t x750 = UINT64_MAX;
	uint8_t x751 = UINT8_MAX;
	int32_t x752 = INT32_MAX;

    t172 = (((x749+x750)>x751)&x752);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x753 = -1;
	int32_t x754 = -1;
	static uint8_t x755 = 3U;
	static int16_t x756 = -2063;
	int32_t t173 = 90538;

    t173 = (((x753+x754)>x755)&x756);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x757 = -1;
	volatile int64_t x758 = -1LL;
	int16_t x759 = INT16_MAX;
	uint16_t x760 = 13634U;
	int32_t t174 = 7;

    t174 = (((x757+x758)>x759)&x760);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x761 = 10LLU;
	volatile int32_t x762 = -44860951;
	uint8_t x763 = UINT8_MAX;
	volatile int32_t t175 = -126;

    t175 = (((x761+x762)>x763)&x764);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x766 = INT16_MIN;
	int8_t x767 = INT8_MIN;
	int8_t x768 = 6;
	static int32_t t176 = -282;

    t176 = (((x765+x766)>x767)&x768);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x769 = INT8_MIN;
	volatile uint8_t x771 = 33U;
	int16_t x772 = INT16_MIN;
	int32_t t177 = 402987;

    t177 = (((x769+x770)>x771)&x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x773 = -1;
	uint64_t x775 = 73957LLU;
	static volatile int64_t x776 = INT64_MIN;
	volatile int64_t t178 = -56902LL;

    t178 = (((x773+x774)>x775)&x776);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x777 = 12U;
	static int8_t x779 = INT8_MIN;
	volatile int16_t x780 = 2019;
	volatile int32_t t179 = -43922;

    t179 = (((x777+x778)>x779)&x780);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x781 = 8;
	int8_t x782 = INT8_MAX;
	int32_t x783 = -1;
	static volatile int8_t x784 = INT8_MIN;
	int32_t t180 = 30001;

    t180 = (((x781+x782)>x783)&x784);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x785 = INT64_MIN;
	int32_t x786 = 16;
	static volatile int32_t t181 = 1591128;

    t181 = (((x785+x786)>x787)&x788);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x789 = -1;
	static int32_t x790 = 1146;
	int16_t x791 = INT16_MAX;
	int8_t x792 = 28;

    t182 = (((x789+x790)>x791)&x792);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x793 = -1;
	volatile int8_t x794 = 3;
	uint16_t x795 = 1720U;
	uint32_t x796 = 225934917U;
	uint32_t t183 = 77361716U;

    t183 = (((x793+x794)>x795)&x796);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x801 = -1;
	uint64_t x802 = 11978513286734247LLU;
	int64_t x803 = 233882075825397229LL;
	uint64_t x804 = 470399422918LLU;
	volatile uint64_t t184 = 7642LLU;

    t184 = (((x801+x802)>x803)&x804);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x805 = 1LL;
	static int32_t x806 = -1;
	int16_t x807 = -185;
	uint16_t x808 = UINT16_MAX;
	static int32_t t185 = 12198270;

    t185 = (((x805+x806)>x807)&x808);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x810 = INT32_MAX;
	volatile int32_t x812 = -1;
	volatile int32_t t186 = 28537428;

    t186 = (((x809+x810)>x811)&x812);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x813 = INT8_MIN;
	volatile int8_t x815 = -1;
	uint64_t x816 = 2147154991LLU;
	volatile uint64_t t187 = 2483562862359483LLU;

    t187 = (((x813+x814)>x815)&x816);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x817 = -26923284065905LL;
	uint16_t x818 = UINT16_MAX;
	volatile uint8_t x819 = UINT8_MAX;
	int8_t x820 = INT8_MIN;
	int32_t t188 = -563059677;

    t188 = (((x817+x818)>x819)&x820);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x821 = -1;
	uint16_t x822 = 35U;
	static int64_t x824 = 0LL;
	int64_t t189 = -79959LL;

    t189 = (((x821+x822)>x823)&x824);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x825 = UINT64_MAX;
	static volatile int16_t x826 = -1;
	static int8_t x828 = INT8_MIN;
	volatile int32_t t190 = -924;

    t190 = (((x825+x826)>x827)&x828);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x833 = -133541604268LL;
	static int16_t x834 = -4;
	uint16_t x835 = UINT16_MAX;
	int16_t x836 = INT16_MIN;
	int32_t t191 = -405438968;

    t191 = (((x833+x834)>x835)&x836);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x841 = INT16_MIN;
	volatile int32_t x842 = INT32_MAX;
	uint8_t x843 = 2U;
	static int16_t x844 = INT16_MIN;
	volatile int32_t t192 = 1993419;

    t192 = (((x841+x842)>x843)&x844);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x845 = -1;
	int16_t x846 = 627;
	static int16_t x848 = INT16_MAX;
	int32_t t193 = 3616;

    t193 = (((x845+x846)>x847)&x848);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x849 = UINT64_MAX;
	uint32_t x850 = 55956U;
	uint64_t x851 = 41LLU;
	uint8_t x852 = 1U;
	static volatile int32_t t194 = -627778;

    t194 = (((x849+x850)>x851)&x852);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x853 = INT8_MAX;
	int64_t x854 = INT64_MIN;
	int64_t x856 = 6552LL;
	volatile int64_t t195 = -1LL;

    t195 = (((x853+x854)>x855)&x856);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x857 = 78;
	int16_t x858 = INT16_MAX;
	int32_t x859 = INT32_MIN;
	int8_t x860 = 15;
	volatile int32_t t196 = 1;

    t196 = (((x857+x858)>x859)&x860);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x861 = 84833504;
	static int64_t x863 = INT64_MIN;
	static uint8_t x864 = UINT8_MAX;
	volatile int32_t t197 = 0;

    t197 = (((x861+x862)>x863)&x864);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x865 = INT64_MAX;
	uint64_t x866 = UINT64_MAX;
	static int64_t x867 = INT64_MIN;
	static volatile uint32_t x868 = 63U;
	volatile uint32_t t198 = 13148U;

    t198 = (((x865+x866)>x867)&x868);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x869 = 2;
	static int16_t x870 = -1;
	int8_t x871 = 0;
	static uint16_t x872 = UINT16_MAX;
	int32_t t199 = -408585;

    t199 = (((x869+x870)>x871)&x872);

    if (t199 != 1) { NG(); } else { ; }
	
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

