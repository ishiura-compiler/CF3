
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

int16_t x10 = -1;
uint32_t x14 = 2125637628U;
int32_t x16 = INT32_MAX;
volatile int32_t x18 = 452318;
volatile uint8_t x19 = 1U;
uint64_t t4 = 635012702281LLU;
int8_t x21 = -1;
int32_t t5 = 1;
int16_t x29 = -1;
int32_t x30 = 57762505;
volatile int16_t x31 = -1;
int16_t x32 = 102;
volatile uint32_t x39 = 0U;
uint64_t x42 = UINT64_MAX;
volatile int8_t x43 = INT8_MIN;
volatile int64_t x45 = INT64_MIN;
uint16_t x53 = 0U;
volatile uint32_t x63 = 11U;
volatile int16_t x65 = INT16_MIN;
volatile uint32_t t16 = 8678692U;
volatile uint32_t t18 = 10794U;
int8_t x81 = -1;
volatile uint64_t x84 = UINT64_MAX;
uint64_t t21 = 124820317568091LLU;
volatile int32_t x94 = 3489;
volatile int16_t x100 = INT16_MAX;
uint8_t x101 = UINT8_MAX;
static int16_t x104 = INT16_MIN;
static int64_t t25 = -1355LL;
volatile int16_t x110 = INT16_MIN;
uint16_t x113 = 7U;
uint64_t x114 = UINT64_MAX;
uint16_t x120 = 17U;
uint32_t x124 = UINT32_MAX;
static uint32_t t29 = 817712U;
volatile int32_t x135 = -2711;
static uint64_t t33 = 3217513515591LLU;
uint8_t x154 = 115U;
static volatile int64_t t37 = -876494LL;
volatile int32_t x161 = INT32_MIN;
static int64_t x175 = INT64_MIN;
static int64_t x183 = -1404094LL;
uint16_t x186 = 101U;
int64_t t48 = 33232272854LL;
int16_t x210 = -6554;
int32_t x211 = 27147;
uint64_t t51 = 1661588713LLU;
uint16_t x214 = 245U;
uint64_t t52 = 5452785468834324LLU;
uint64_t t53 = 41504817LLU;
int8_t x221 = -31;
int32_t t54 = -814486;
volatile uint8_t x232 = UINT8_MAX;
uint16_t x237 = 25U;
int16_t x245 = INT16_MIN;
uint8_t x259 = 55U;
static volatile int32_t t63 = 860850958;
int8_t x277 = INT8_MIN;
volatile int8_t x283 = INT8_MAX;
int8_t x284 = -1;
volatile int32_t x287 = -1;
int64_t x295 = INT64_MIN;
volatile int64_t t71 = -438408234LL;
static volatile int16_t x299 = -1;
int64_t x308 = INT64_MAX;
int16_t x309 = -1;
int16_t x312 = -7392;
volatile int8_t x317 = -20;
int64_t x320 = -1LL;
int64_t x329 = -1LL;
volatile int32_t t81 = -3;
uint64_t x343 = UINT64_MAX;
static uint64_t t83 = 858166431LLU;
volatile uint64_t x350 = UINT64_MAX;
int16_t x351 = -1;
int32_t t86 = 11;
int8_t x359 = INT8_MAX;
int64_t x360 = -33806LL;
static volatile int64_t t88 = -7494LL;
static uint16_t x366 = 137U;
volatile uint8_t x379 = UINT8_MAX;
uint32_t x383 = 59U;
uint8_t x389 = 20U;
uint64_t x394 = 577827LLU;
int16_t x398 = INT16_MIN;
volatile int64_t t98 = -92895167676407LL;
int32_t x412 = INT32_MIN;
uint64_t x417 = 29730477034LLU;
static volatile int8_t x439 = -1;
uint8_t x448 = 8U;
static uint64_t x451 = 11211LLU;
int32_t x453 = INT32_MIN;
int64_t x457 = -36LL;
uint64_t x462 = UINT64_MAX;
int64_t x464 = INT64_MAX;
volatile uint64_t t113 = 42237850876254LLU;
int16_t x469 = -1;
uint64_t x474 = UINT64_MAX;
volatile uint32_t x476 = UINT32_MAX;
volatile uint64_t t115 = 2370614812147LLU;
int64_t x482 = 5662LL;
static int32_t x484 = -9;
int8_t x487 = INT8_MIN;
volatile uint16_t x489 = UINT16_MAX;
volatile int32_t x494 = INT32_MIN;
int32_t x507 = -1;
int64_t x511 = INT64_MIN;
uint16_t x521 = 97U;
volatile uint64_t t126 = 1848LLU;
int32_t x527 = -521873;
int16_t x530 = INT16_MAX;
static uint16_t x535 = 2U;
volatile int64_t t129 = 1581855083704022LL;
volatile int8_t x555 = INT8_MIN;
static int32_t x556 = INT32_MAX;
int8_t x566 = -45;
int8_t x568 = -1;
volatile int32_t x569 = INT32_MIN;
int32_t t138 = -59;
static uint32_t x576 = 9U;
int64_t t139 = -116LL;
int8_t x586 = 1;
int16_t x589 = -1992;
int16_t x590 = -9445;
static volatile int16_t x591 = -1;
uint32_t x592 = UINT32_MAX;
uint32_t t143 = 707331U;
static uint32_t x595 = UINT32_MAX;
int32_t x599 = -1507;
int32_t x601 = -41;
volatile int64_t x602 = -292191996481LL;
static volatile uint32_t x607 = 16028291U;
volatile uint32_t t147 = 33209495U;
static uint32_t x610 = UINT32_MAX;
uint8_t x613 = 6U;
int32_t x626 = -47;
volatile int16_t x627 = -199;
volatile int16_t x629 = -599;
volatile uint32_t x630 = UINT32_MAX;
volatile int64_t t159 = 1288760750235LL;
volatile int16_t x659 = -1;
int16_t x662 = -1;
static int32_t x672 = INT32_MAX;
int32_t x676 = 1047321308;
uint32_t x681 = UINT32_MAX;
volatile uint32_t t166 = 1978290751U;
static int8_t x688 = -1;
static uint64_t t167 = 143LLU;
static int32_t x689 = -46420;
int8_t x691 = INT8_MIN;
int8_t x692 = INT8_MIN;
volatile int16_t x693 = -32;
static volatile uint16_t x694 = UINT16_MAX;
uint16_t x705 = 1U;
int16_t x709 = -1;
static volatile int8_t x714 = -1;
static int16_t x720 = -1;
volatile uint64_t t175 = 3LLU;
static int64_t x728 = -1LL;
int64_t x729 = INT64_MIN;
int32_t x735 = 6259938;
static uint32_t x737 = 1809U;
static uint64_t t180 = 7LLU;
int64_t x741 = INT64_MIN;
static int64_t x744 = -1LL;
static uint64_t x749 = UINT64_MAX;
volatile int32_t x750 = INT32_MAX;
int8_t x758 = -45;
uint32_t x763 = 501948U;
uint8_t x766 = UINT8_MAX;
int16_t x775 = INT16_MIN;
static int16_t x778 = -1;
volatile uint32_t x782 = UINT32_MAX;
uint32_t x783 = 43918U;
uint8_t x788 = 5U;
int32_t x789 = INT32_MAX;
uint16_t x796 = 119U;
static volatile uint16_t x797 = 385U;
volatile int64_t x798 = INT64_MAX;
uint16_t x800 = UINT16_MAX;
int32_t x802 = INT32_MIN;
int8_t x804 = -1;
volatile int32_t t196 = 252951077;
int32_t t198 = -172625;


void f0(void) {
    	volatile uint16_t x1 = 12942U;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = 7U;
	uint32_t x4 = 966815878U;
	uint32_t t0 = 472516084U;

    t0 = ((x1%(x2|x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = UINT64_MAX;
	volatile int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MIN;
	uint32_t x8 = 47U;
	uint64_t t1 = 5272100451LLU;

    t1 = ((x5%(x6|x7))/x8);

    if (t1 != 196241958230952676LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	static int32_t x11 = INT32_MIN;
	static int64_t x12 = INT64_MIN;
	int64_t t2 = 4574087433075342333LL;

    t2 = ((x9%(x10|x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x15 = -10845;
	int64_t t3 = 268316753132059LL;

    t3 = ((x13%(x14|x15))/x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 18940716799LLU;
	static volatile uint8_t x20 = UINT8_MAX;

    t4 = ((x17%(x18|x19))/x20);

    if (t4 != 1219LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 3440U;
	uint16_t x23 = 0U;
	int32_t x24 = INT32_MIN;

    t5 = ((x21%(x22|x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 258145322U;
	static int8_t x26 = INT8_MIN;
	volatile int8_t x27 = INT8_MAX;
	uint16_t x28 = 2U;
	volatile uint32_t t6 = 4525U;

    t6 = ((x25%(x26|x27))/x28);

    if (t6 != 129072661U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t t7 = -30358;

    t7 = ((x29%(x30|x31))/x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MAX;
	int8_t x34 = 13;
	volatile int8_t x35 = INT8_MIN;
	uint32_t x36 = 18639U;
	static volatile int64_t t8 = 267421LL;

    t8 = ((x33%(x34|x35))/x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t9 = 294220LLU;

    t9 = ((x37%(x38|x39))/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	static uint8_t x44 = 31U;
	static uint64_t t10 = 31LLU;

    t10 = ((x41%(x42|x43))/x44);

    if (t10 != 595056260442242543LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 17658931503859803LLU;
	int64_t x47 = 1913018121419LL;
	static int8_t x48 = -26;
	uint64_t t11 = 105880620006215LLU;

    t11 = ((x45%(x46|x47))/x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MIN;
	uint16_t x50 = UINT16_MAX;
	static int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = 1U;
	int32_t t12 = 3153236;

    t12 = ((x49%(x50|x51))/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	int16_t x55 = INT16_MAX;
	uint16_t x56 = 60U;
	uint32_t t13 = 3833U;

    t13 = ((x53%(x54|x55))/x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 137U;
	static int64_t x58 = INT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t14 = 1459946925502189221LLU;

    t14 = ((x57%(x58|x59))/x60);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = 86533525;
	int32_t x62 = -2;
	static int8_t x64 = -1;
	volatile uint32_t t15 = 25U;

    t15 = ((x61%(x62|x63))/x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x66 = 12;
	uint16_t x67 = 4U;
	uint32_t x68 = 16437U;

    t16 = ((x65%(x66|x67))/x68);

    if (t16 != 261298U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = 43;
	static int8_t x70 = -3;
	static volatile int16_t x71 = -1;
	static int32_t x72 = INT32_MIN;
	int32_t t17 = 240844157;

    t17 = ((x69%(x70|x71))/x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 4;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 138U;

    t18 = ((x73%(x74|x75))/x76);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int8_t x78 = -1;
	int64_t x79 = 35160063LL;
	static int16_t x80 = INT16_MIN;
	int64_t t19 = -147LL;

    t19 = ((x77%(x78|x79))/x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 47U;
	int32_t x83 = -1;
	uint64_t t20 = 3640461699050301LLU;

    t20 = ((x81%(x82|x83))/x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	uint64_t x86 = 1097325122177LLU;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;

    t21 = ((x85%(x86|x87))/x88);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	int8_t x95 = -1;
	int64_t x96 = -1LL;
	int64_t t22 = 1LL;

    t22 = ((x93%(x94|x95))/x96);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = 14;
	int32_t x98 = -1;
	uint16_t x99 = 406U;
	volatile int32_t t23 = -12;

    t23 = ((x97%(x98|x99))/x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x102 = 65LLU;
	uint16_t x103 = UINT16_MAX;
	static volatile uint64_t t24 = 126287LLU;

    t24 = ((x101%(x102|x103))/x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = 1208166395410026LL;
	static int64_t x106 = 7597LL;
	int8_t x107 = -15;
	int32_t x108 = INT32_MIN;

    t25 = ((x105%(x106|x107))/x108);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	uint16_t x111 = 189U;
	volatile int8_t x112 = -1;
	volatile int32_t t26 = 0;

    t26 = ((x109%(x110|x111))/x112);

    if (t26 != 6284) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x115 = 63915983U;
	volatile int32_t x116 = -1;
	volatile uint64_t t27 = 24LLU;

    t27 = ((x113%(x114|x115))/x116);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = -64381821397LL;
	int16_t x118 = INT16_MIN;
	volatile int16_t x119 = -1;
	volatile int64_t t28 = -10983112902473432LL;

    t28 = ((x117%(x118|x119))/x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	static int16_t x122 = INT16_MIN;
	int32_t x123 = 18157694;

    t29 = ((x121%(x122|x123))/x124);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -55936505LL;
	volatile int16_t x126 = INT16_MAX;
	static uint64_t x127 = 3030066061557LLU;
	int32_t x128 = -1;
	volatile uint64_t t30 = 930917LLU;

    t30 = ((x125%(x126|x127))/x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x129 = 120714817U;
	int32_t x130 = 202240;
	volatile int32_t x131 = -289867141;
	uint32_t x132 = 14U;
	volatile uint32_t t31 = 66867708U;

    t31 = ((x129%(x130|x131))/x132);

    if (t31 != 8622486U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 16656428843414176LLU;
	static int16_t x134 = 661;
	int64_t x136 = INT64_MIN;
	uint64_t t32 = 6671471646LLU;

    t32 = ((x133%(x134|x135))/x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = 936580571LL;
	uint64_t x139 = 413383932196865LLU;
	int64_t x140 = -95612668760LL;

    t33 = ((x137%(x138|x139))/x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	static uint32_t x142 = 154411U;
	int64_t x143 = INT64_MAX;
	uint32_t x144 = 198U;
	static int64_t t34 = 429286967078418LL;

    t34 = ((x141%(x142|x143))/x144);

    if (t34 != -10845877LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = UINT32_MAX;
	static int64_t x146 = -715930546052711950LL;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = 496U;
	volatile int64_t t35 = 1395645137LL;

    t35 = ((x145%(x146|x147))/x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x149 = 1293;
	int32_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	static int16_t x152 = INT16_MIN;
	volatile uint32_t t36 = 1768U;

    t36 = ((x149%(x150|x151))/x152);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = -1;
	static int64_t x155 = INT64_MAX;
	int64_t x156 = -1LL;

    t37 = ((x153%(x154|x155))/x156);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 17;
	volatile uint32_t x158 = 16566310U;
	uint32_t x159 = UINT32_MAX;
	static uint16_t x160 = 1U;
	uint32_t t38 = 649951059U;

    t38 = ((x157%(x158|x159))/x160);

    if (t38 != 17U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x162 = 0U;
	volatile uint8_t x163 = 5U;
	int32_t x164 = INT32_MAX;
	volatile int32_t t39 = 1909230;

    t39 = ((x161%(x162|x163))/x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MAX;
	uint8_t x166 = UINT8_MAX;
	volatile int32_t x167 = 12299786;
	int8_t x168 = -1;
	volatile int32_t t40 = 3;

    t40 = ((x165%(x166|x167))/x168);

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -1;
	static int16_t x170 = -1;
	static int64_t x171 = INT64_MAX;
	uint32_t x172 = 30328523U;
	static int64_t t41 = 32168LL;

    t41 = ((x169%(x170|x171))/x172);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	uint8_t x176 = 126U;
	int64_t t42 = 72293954356594LL;

    t42 = ((x173%(x174|x175))/x176);

    if (t42 != -17043521LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x177 = INT32_MIN;
	static int32_t x178 = 152667;
	int64_t x179 = -8429060714743LL;
	int64_t x180 = INT64_MAX;
	int64_t t43 = 1975314314802622565LL;

    t43 = ((x177%(x178|x179))/x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x181 = 1U;
	static uint8_t x182 = UINT8_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t44 = 858080336861LL;

    t44 = ((x181%(x182|x183))/x184);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x185 = 341;
	int8_t x187 = 1;
	static int32_t x188 = INT32_MIN;
	static volatile int32_t t45 = -2;

    t45 = ((x185%(x186|x187))/x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = 2066U;
	int32_t x190 = INT32_MIN;
	int16_t x191 = 4;
	int16_t x192 = INT16_MIN;
	volatile int32_t t46 = 60811427;

    t46 = ((x189%(x190|x191))/x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = 12U;
	static uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MIN;
	volatile uint16_t x196 = UINT16_MAX;
	volatile uint64_t t47 = 10004548LLU;

    t47 = ((x193%(x194|x195))/x196);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = UINT16_MAX;
	int64_t x198 = INT64_MIN;
	static int16_t x199 = INT16_MAX;
	volatile int16_t x200 = INT16_MAX;

    t48 = ((x197%(x198|x199))/x200);

    if (t48 != 2LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -1;
	volatile uint64_t x202 = UINT64_MAX;
	static int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	uint64_t t49 = 342058882LLU;

    t49 = ((x201%(x202|x203))/x204);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = -1;
	volatile int16_t x206 = INT16_MIN;
	static volatile int16_t x207 = INT16_MIN;
	static volatile int8_t x208 = 1;
	int32_t t50 = 3778819;

    t50 = ((x205%(x206|x207))/x208);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x209 = UINT32_MAX;
	volatile uint64_t x212 = 32589051042176LLU;

    t51 = ((x209%(x210|x211))/x212);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = -979522977;
	volatile int64_t x215 = INT64_MIN;
	static uint64_t x216 = 32LLU;

    t52 = ((x213%(x214|x215))/x216);

    if (t52 != 576460752272813394LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = UINT32_MAX;
	int32_t x218 = 47247201;
	volatile uint64_t x219 = 701035872227LLU;
	int16_t x220 = -1;

    t53 = ((x217%(x218|x219))/x220);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x222 = INT8_MAX;
	int8_t x223 = 0;
	int32_t x224 = INT32_MAX;

    t54 = ((x221%(x222|x223))/x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x225 = 103U;
	uint32_t x226 = 40428U;
	int32_t x227 = -66;
	int64_t x228 = -1LL;
	volatile int64_t t55 = -179272534341357675LL;

    t55 = ((x225%(x226|x227))/x228);

    if (t55 != -103LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x229 = -313041114807LL;
	int16_t x230 = INT16_MIN;
	int8_t x231 = -21;
	int64_t t56 = 984051263LL;

    t56 = ((x229%(x230|x231))/x232);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	volatile int16_t x235 = -2331;
	uint64_t x236 = 2002165LLU;
	static uint64_t t57 = 3702187983288796192LLU;

    t57 = ((x233%(x234|x235))/x236);

    if (t57 != 9213398532942LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x238 = 101085U;
	int16_t x239 = -1;
	static volatile uint16_t x240 = UINT16_MAX;
	volatile uint32_t t58 = 876518U;

    t58 = ((x237%(x238|x239))/x240);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = -1LL;
	static uint8_t x242 = 22U;
	int8_t x243 = INT8_MIN;
	int32_t x244 = INT32_MIN;
	volatile int64_t t59 = -3940355055698221306LL;

    t59 = ((x241%(x242|x243))/x244);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x246 = -11;
	int32_t x247 = 26876;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t60 = 360;

    t60 = ((x245%(x246|x247))/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x253 = -1LL;
	int64_t x254 = INT64_MAX;
	volatile int64_t x255 = INT64_MIN;
	volatile int64_t x256 = INT64_MAX;
	volatile int64_t t61 = 1064021334097609349LL;

    t61 = ((x253%(x254|x255))/x256);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x257 = 63U;
	uint8_t x258 = 1U;
	static int16_t x260 = -1;
	volatile int32_t t62 = 17552;

    t62 = ((x257%(x258|x259))/x260);

    if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = INT16_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	static uint16_t x264 = 1U;

    t63 = ((x261%(x262|x263))/x264);

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x265 = 17;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t64 = 789915441;

    t64 = ((x265%(x266|x267))/x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int8_t x271 = -41;
	volatile int32_t x272 = -11307;
	int32_t t65 = -400;

    t65 = ((x269%(x270|x271))/x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x273 = 0;
	volatile int8_t x274 = -1;
	int64_t x275 = INT64_MIN;
	int64_t x276 = -1LL;
	int64_t t66 = -3LL;

    t66 = ((x273%(x274|x275))/x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x278 = 48U;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MIN;
	int64_t t67 = -31476691LL;

    t67 = ((x277%(x278|x279))/x280);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MAX;
	volatile int32_t t68 = -438;

    t68 = ((x281%(x282|x283))/x284);

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = 28302689;
	static uint8_t x288 = 25U;
	static int32_t t69 = 608;

    t69 = ((x285%(x286|x287))/x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x289 = 1U;
	int8_t x290 = INT8_MIN;
	static volatile int64_t x291 = INT64_MIN;
	uint8_t x292 = 19U;
	int64_t t70 = -31069LL;

    t70 = ((x289%(x290|x291))/x292);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x294 = -1;
	int32_t x296 = INT32_MIN;

    t71 = ((x293%(x294|x295))/x296);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	static uint64_t x300 = 725445LLU;
	volatile uint64_t t72 = 1009LLU;

    t72 = ((x297%(x298|x299))/x300);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MIN;
	uint64_t x302 = 896102661712520LLU;
	int32_t x303 = INT32_MIN;
	static int32_t x304 = -1;
	volatile uint64_t t73 = 3388094LLU;

    t73 = ((x301%(x302|x303))/x304);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MIN;
	volatile int32_t x307 = INT32_MIN;
	int64_t t74 = -970102779LL;

    t74 = ((x305%(x306|x307))/x308);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	int32_t t75 = 1825;

    t75 = ((x309%(x310|x311))/x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = INT64_MIN;
	int16_t x314 = -546;
	int32_t x315 = INT32_MAX;
	static volatile uint16_t x316 = UINT16_MAX;
	volatile int64_t t76 = -2403948443214030280LL;

    t76 = ((x313%(x314|x315))/x316);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x318 = 47157808063765LLU;
	int16_t x319 = 3425;
	uint64_t t77 = 179814774303568LLU;

    t77 = ((x317%(x318|x319))/x320);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x321 = 53869;
	uint64_t x322 = 4167367380194524092LLU;
	int32_t x323 = -1;
	uint32_t x324 = 18U;
	uint64_t t78 = 114796996674LLU;

    t78 = ((x321%(x322|x323))/x324);

    if (t78 != 2992LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = UINT16_MAX;
	int8_t x326 = 2;
	int8_t x327 = INT8_MIN;
	int16_t x328 = 2;
	int32_t t79 = -781;

    t79 = ((x325%(x326|x327))/x328);

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile int64_t t80 = 0LL;

    t80 = ((x329%(x330|x331))/x332);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = INT32_MIN;
	uint8_t x334 = 26U;
	static uint8_t x335 = 0U;
	volatile int32_t x336 = -1;

    t81 = ((x333%(x334|x335))/x336);

    if (t81 != 24) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MAX;
	volatile int8_t x339 = INT8_MAX;
	int32_t x340 = -1;
	static int64_t t82 = -15197503661780162LL;

    t82 = ((x337%(x338|x339))/x340);

    if (t82 != 32768LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -1;
	static uint64_t x342 = 35203436400LLU;
	static int16_t x344 = INT16_MIN;

    t83 = ((x341%(x342|x343))/x344);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x345 = 1481976741U;
	uint16_t x346 = 2U;
	int16_t x347 = 2056;
	uint64_t x348 = 17910579366895867LLU;
	static uint64_t t84 = 393531520610870LLU;

    t84 = ((x345%(x346|x347))/x348);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x349 = INT8_MAX;
	int64_t x352 = INT64_MAX;
	static volatile uint64_t t85 = 1056733209298LLU;

    t85 = ((x349%(x350|x351))/x352);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x353 = INT16_MAX;
	volatile int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;

    t86 = ((x353%(x354|x355))/x356);

    if (t86 != -255) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = -1;
	volatile int32_t x358 = INT32_MIN;
	int64_t t87 = -12313LL;

    t87 = ((x357%(x358|x359))/x360);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = INT32_MIN;
	int16_t x362 = -8592;
	int64_t x363 = -1LL;
	int64_t x364 = INT64_MAX;

    t88 = ((x361%(x362|x363))/x364);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = INT16_MIN;
	volatile uint8_t x367 = 4U;
	volatile uint32_t x368 = 12U;
	static volatile uint32_t t89 = 3990501U;

    t89 = ((x365%(x366|x367))/x368);

    if (t89 != 357913936U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x369 = INT64_MAX;
	volatile int8_t x370 = 0;
	volatile int64_t x371 = INT64_MAX;
	volatile uint16_t x372 = 1463U;
	int64_t t90 = -8LL;

    t90 = ((x369%(x370|x371))/x372);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = UINT32_MAX;
	uint64_t x374 = 127301678956461LLU;
	int32_t x375 = -38019203;
	uint8_t x376 = UINT8_MAX;
	static volatile uint64_t t91 = 194132235LLU;

    t91 = ((x373%(x374|x375))/x376);

    if (t91 != 16843009LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = 1;
	int16_t x378 = -1;
	volatile int32_t x380 = INT32_MIN;
	int32_t t92 = -816425751;

    t92 = ((x377%(x378|x379))/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x381 = 3U;
	static int32_t x382 = INT32_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t93 = 235LLU;

    t93 = ((x381%(x382|x383))/x384);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = 122U;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	uint64_t x388 = 1303604850628233796LLU;
	volatile uint64_t t94 = 28661899444285187LLU;

    t94 = ((x385%(x386|x387))/x388);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x390 = 0U;
	int8_t x391 = INT8_MAX;
	int8_t x392 = -1;
	int32_t t95 = 912;

    t95 = ((x389%(x390|x391))/x392);

    if (t95 != -20) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -1;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	static volatile uint64_t t96 = 59LLU;

    t96 = ((x393%(x394|x395))/x396);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x397 = 5586;
	static int8_t x399 = 4;
	int16_t x400 = -1;
	volatile int32_t t97 = 1;

    t97 = ((x397%(x398|x399))/x400);

    if (t97 != -5586) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x401 = 7U;
	static int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	static int64_t x404 = -304911LL;

    t98 = ((x401%(x402|x403))/x404);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = INT8_MAX;
	int64_t x406 = 5166952LL;
	uint32_t x407 = 4612262U;
	static int64_t x408 = INT64_MIN;
	volatile int64_t t99 = 0LL;

    t99 = ((x405%(x406|x407))/x408);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x410 = INT32_MIN;
	static uint16_t x411 = 5714U;
	int32_t t100 = 1192970;

    t100 = ((x409%(x410|x411))/x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x413 = UINT64_MAX;
	uint8_t x414 = UINT8_MAX;
	static uint8_t x415 = 42U;
	volatile uint32_t x416 = 415U;
	static volatile uint64_t t101 = 8201435770LLU;

    t101 = ((x413%(x414|x415))/x416);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x418 = INT16_MAX;
	uint32_t x419 = UINT32_MAX;
	volatile int32_t x420 = -893638019;
	volatile uint64_t t102 = 1010381560066267578LLU;

    t102 = ((x417%(x418|x419))/x420);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x421 = 25U;
	uint32_t x422 = UINT32_MAX;
	volatile int16_t x423 = INT16_MIN;
	volatile uint16_t x424 = 1013U;
	volatile uint32_t t103 = 27250324U;

    t103 = ((x421%(x422|x423))/x424);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x425 = INT8_MAX;
	uint16_t x426 = 19U;
	uint64_t x427 = 516740447032566LLU;
	int64_t x428 = 44661940LL;
	volatile uint64_t t104 = 121820457672071586LLU;

    t104 = ((x425%(x426|x427))/x428);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int16_t x430 = -1;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MAX;
	volatile int64_t t105 = -22623901143LL;

    t105 = ((x429%(x430|x431))/x432);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	int64_t x434 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	static int8_t x436 = INT8_MIN;
	int64_t t106 = 420578LL;

    t106 = ((x433%(x434|x435))/x436);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = -1;
	uint64_t x438 = UINT64_MAX;
	uint64_t x440 = 1828026LLU;
	volatile uint64_t t107 = 573LLU;

    t107 = ((x437%(x438|x439))/x440);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = INT32_MAX;
	static uint16_t x446 = 29U;
	int8_t x447 = -1;
	volatile int32_t t108 = -18;

    t108 = ((x445%(x446|x447))/x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x449 = 56U;
	static int8_t x450 = -8;
	int16_t x452 = INT16_MAX;
	volatile uint64_t t109 = 481732738968LLU;

    t109 = ((x449%(x450|x451))/x452);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x454 = INT16_MAX;
	volatile int64_t x455 = 108206310834LL;
	volatile int16_t x456 = -761;
	volatile int64_t t110 = -1665LL;

    t110 = ((x453%(x454|x455))/x456);

    if (t110 != 2821923LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x458 = 2;
	volatile int64_t x459 = -1LL;
	uint8_t x460 = 2U;
	int64_t t111 = 334671917888750294LL;

    t111 = ((x457%(x458|x459))/x460);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x461 = 6U;
	int32_t x463 = INT32_MIN;
	volatile uint64_t t112 = 1085165588888258312LLU;

    t112 = ((x461%(x462|x463))/x464);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x465 = -1;
	int32_t x466 = INT32_MAX;
	volatile int64_t x467 = 2153017076391LL;
	uint64_t x468 = 120544312419095696LLU;

    t113 = ((x465%(x466|x467))/x468);

    if (t113 != 153LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x470 = -1;
	int16_t x471 = -1;
	uint64_t x472 = UINT64_MAX;
	uint64_t t114 = 25963564295LLU;

    t114 = ((x469%(x470|x471))/x472);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x473 = 1U;
	uint8_t x475 = 66U;

    t115 = ((x473%(x474|x475))/x476);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x477 = 0;
	int8_t x478 = INT8_MAX;
	int64_t x479 = 56LL;
	int32_t x480 = 292;
	static int64_t t116 = 77343564LL;

    t116 = ((x477%(x478|x479))/x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x483 = INT16_MAX;
	volatile int64_t t117 = -127660408776LL;

    t117 = ((x481%(x482|x483))/x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x485 = -2476867;
	int16_t x486 = INT16_MIN;
	volatile uint32_t x488 = UINT32_MAX;
	volatile uint32_t t118 = 1732U;

    t118 = ((x485%(x486|x487))/x488);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x490 = INT8_MIN;
	volatile int64_t x491 = INT64_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t119 = -4814482809LL;

    t119 = ((x489%(x490|x491))/x492);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x493 = 33686806LL;
	static uint64_t x495 = 208289147683LLU;
	int32_t x496 = INT32_MIN;
	uint64_t t120 = 36154LLU;

    t120 = ((x493%(x494|x495))/x496);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x497 = UINT64_MAX;
	int8_t x498 = -12;
	int8_t x499 = 1;
	int32_t x500 = INT32_MIN;
	volatile uint64_t t121 = 54689LLU;

    t121 = ((x497%(x498|x499))/x500);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x501 = 1U;
	static int64_t x502 = INT64_MIN;
	int8_t x503 = -4;
	static uint8_t x504 = UINT8_MAX;
	volatile int64_t t122 = -101649748LL;

    t122 = ((x501%(x502|x503))/x504);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x505 = 22624030862306175LLU;
	uint16_t x506 = 413U;
	uint8_t x508 = 5U;
	static volatile uint64_t t123 = 6335511226981094278LLU;

    t123 = ((x505%(x506|x507))/x508);

    if (t123 != 4524806172461235LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = -204;
	int16_t x510 = INT16_MIN;
	int16_t x512 = 184;
	volatile int64_t t124 = 224LL;

    t124 = ((x509%(x510|x511))/x512);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = 229U;
	int16_t x518 = INT16_MAX;
	volatile int16_t x519 = 1;
	int64_t x520 = INT64_MIN;
	volatile int64_t t125 = 45226734LL;

    t125 = ((x517%(x518|x519))/x520);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x522 = 4933LLU;
	int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;

    t126 = ((x521%(x522|x523))/x524);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = -1;
	int32_t x528 = INT32_MIN;
	int32_t t127 = -2328;

    t127 = ((x525%(x526|x527))/x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = INT64_MAX;
	volatile int8_t x531 = INT8_MAX;
	volatile int32_t x532 = INT32_MIN;
	int64_t t128 = -1014884207782LL;

    t128 = ((x529%(x530|x531))/x532);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x533 = 413U;
	volatile int8_t x534 = INT8_MIN;
	static int64_t x536 = -65350LL;

    t129 = ((x533%(x534|x535))/x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = -67;
	static int8_t x538 = -5;
	int16_t x539 = -1;
	static volatile int8_t x540 = -1;
	static volatile int32_t t130 = -93123;

    t130 = ((x537%(x538|x539))/x540);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x541 = INT64_MAX;
	uint8_t x542 = 6U;
	int8_t x543 = INT8_MAX;
	uint16_t x544 = UINT16_MAX;
	static volatile int64_t t131 = 18935061LL;

    t131 = ((x541%(x542|x543))/x544);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x545 = -1309938948544LL;
	int32_t x546 = INT32_MAX;
	static int8_t x547 = INT8_MAX;
	uint32_t x548 = 2109945509U;
	int64_t t132 = 2328674803LL;

    t132 = ((x545%(x546|x547))/x548);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x549 = 1U;
	volatile int16_t x550 = INT16_MIN;
	uint16_t x551 = 1U;
	int32_t x552 = INT32_MIN;
	volatile int32_t t133 = 143;

    t133 = ((x549%(x550|x551))/x552);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x554 = INT32_MAX;
	volatile int64_t t134 = 2154083LL;

    t134 = ((x553%(x554|x555))/x556);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x557 = 0U;
	int32_t x558 = INT32_MIN;
	volatile int32_t x559 = INT32_MIN;
	volatile int8_t x560 = INT8_MAX;
	int32_t t135 = -8203;

    t135 = ((x557%(x558|x559))/x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = UINT64_MAX;
	static uint16_t x562 = 6U;
	uint16_t x563 = 3U;
	int64_t x564 = 61941008478LL;
	uint64_t t136 = 2454136037LLU;

    t136 = ((x561%(x562|x563))/x564);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x565 = UINT32_MAX;
	volatile int16_t x567 = -2;
	uint32_t t137 = 211761885U;

    t137 = ((x565%(x566|x567))/x568);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x570 = -1;
	int32_t x571 = 365590;
	volatile uint8_t x572 = UINT8_MAX;

    t138 = ((x569%(x570|x571))/x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x573 = -1;
	volatile uint32_t x574 = UINT32_MAX;
	int64_t x575 = 876330LL;

    t139 = ((x573%(x574|x575))/x576);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x577 = 237U;
	int32_t x578 = -1;
	uint8_t x579 = UINT8_MAX;
	int16_t x580 = INT16_MAX;
	volatile int32_t t140 = 0;

    t140 = ((x577%(x578|x579))/x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = -1;
	static int8_t x582 = INT8_MAX;
	uint8_t x583 = UINT8_MAX;
	uint32_t x584 = 6U;
	uint32_t t141 = 1570U;

    t141 = ((x581%(x582|x583))/x584);

    if (t141 != 715827882U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x585 = 1U;
	uint64_t x587 = 774952550702774683LLU;
	uint16_t x588 = 1528U;
	volatile uint64_t t142 = 154487LLU;

    t142 = ((x585%(x586|x587))/x588);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    

    t143 = ((x589%(x590|x591))/x592);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x593 = -1;
	static uint16_t x594 = 31046U;
	uint32_t x596 = UINT32_MAX;
	uint32_t t144 = 815U;

    t144 = ((x593%(x594|x595))/x596);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x597 = 1;
	static int16_t x598 = INT16_MIN;
	uint64_t x600 = 408247191573297043LLU;
	static volatile uint64_t t145 = 9389947LLU;

    t145 = ((x597%(x598|x599))/x600);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x603 = -1;
	int32_t x604 = INT32_MAX;
	int64_t t146 = 785190071LL;

    t146 = ((x601%(x602|x603))/x604);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x605 = -1;
	static int16_t x606 = INT16_MAX;
	int32_t x608 = 4589941;

    t147 = ((x605%(x606|x607))/x608);

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x609 = 6LLU;
	int16_t x611 = -8;
	int64_t x612 = -431264609222LL;
	uint64_t t148 = 1206LLU;

    t148 = ((x609%(x610|x611))/x612);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x614 = 4649758534403864LLU;
	int32_t x615 = INT32_MAX;
	volatile int16_t x616 = 2;
	volatile uint64_t t149 = 64930553LLU;

    t149 = ((x613%(x614|x615))/x616);

    if (t149 != 3LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = 22LL;
	int64_t x618 = 12LL;
	int32_t x619 = 0;
	uint16_t x620 = 105U;
	int64_t t150 = 192635374265958937LL;

    t150 = ((x617%(x618|x619))/x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x621 = UINT64_MAX;
	static uint64_t x622 = 20561613727680578LLU;
	int64_t x623 = -136038756275LL;
	static uint8_t x624 = 6U;
	static volatile uint64_t t151 = 250791305LLU;

    t151 = ((x621%(x622|x623))/x624);

    if (t151 != 13009340061LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x625 = 7U;
	uint32_t x628 = 4220873U;
	volatile uint32_t t152 = 23U;

    t152 = ((x625%(x626|x627))/x628);

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x631 = INT64_MIN;
	static uint16_t x632 = 218U;
	volatile int64_t t153 = -1810806091404LL;

    t153 = ((x629%(x630|x631))/x632);

    if (t153 != -2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = -1;
	volatile uint16_t x634 = 3U;
	uint8_t x635 = UINT8_MAX;
	static int16_t x636 = INT16_MIN;
	int32_t t154 = 56;

    t154 = ((x633%(x634|x635))/x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x637 = UINT32_MAX;
	int16_t x638 = INT16_MAX;
	uint32_t x639 = UINT32_MAX;
	static int8_t x640 = -1;
	volatile uint32_t t155 = 662613U;

    t155 = ((x637%(x638|x639))/x640);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x641 = UINT64_MAX;
	uint16_t x642 = 0U;
	static int8_t x643 = -1;
	static uint32_t x644 = 31774U;
	volatile uint64_t t156 = 29122LLU;

    t156 = ((x641%(x642|x643))/x644);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x645 = INT8_MIN;
	int16_t x646 = INT16_MIN;
	static volatile uint8_t x647 = UINT8_MAX;
	uint32_t x648 = 58844176U;
	uint32_t t157 = 28247817U;

    t157 = ((x645%(x646|x647))/x648);

    if (t157 != 72U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x649 = 17U;
	static uint32_t x650 = 1500U;
	int8_t x651 = INT8_MAX;
	int8_t x652 = INT8_MAX;
	static uint32_t t158 = 4750592U;

    t158 = ((x649%(x650|x651))/x652);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x653 = INT64_MIN;
	int16_t x654 = 1345;
	int32_t x655 = -1;
	volatile int8_t x656 = -26;

    t159 = ((x653%(x654|x655))/x656);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x657 = 253658039910019LLU;
	static int32_t x658 = INT32_MAX;
	int32_t x660 = INT32_MAX;
	volatile uint64_t t160 = 753964LLU;

    t160 = ((x657%(x658|x659))/x660);

    if (t160 != 118118LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x661 = -20351103;
	volatile uint32_t x663 = 7462753U;
	static int32_t x664 = -2;
	volatile uint32_t t161 = 6126U;

    t161 = ((x661%(x662|x663))/x664);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x665 = -1;
	int32_t x666 = -1;
	static int16_t x667 = -1;
	static int16_t x668 = -1;
	static volatile int32_t t162 = -109016;

    t162 = ((x665%(x666|x667))/x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = INT64_MAX;
	static int32_t x670 = INT32_MAX;
	volatile uint16_t x671 = 1U;
	int64_t t163 = 1200207LL;

    t163 = ((x669%(x670|x671))/x672);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x673 = -1LL;
	uint32_t x674 = UINT32_MAX;
	int32_t x675 = -1;
	int64_t t164 = 26935992925028LL;

    t164 = ((x673%(x674|x675))/x676);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x677 = INT8_MIN;
	uint8_t x678 = 18U;
	volatile int8_t x679 = INT8_MIN;
	int8_t x680 = -1;
	int32_t t165 = -2710;

    t165 = ((x677%(x678|x679))/x680);

    if (t165 != 18) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x682 = 0U;
	static uint16_t x683 = 23U;
	static int32_t x684 = -4122095;

    t166 = ((x681%(x682|x683))/x684);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x685 = UINT64_MAX;
	int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MIN;

    t167 = ((x685%(x686|x687))/x688);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x690 = INT64_MAX;
	static volatile int64_t t168 = 5433703030LL;

    t168 = ((x689%(x690|x691))/x692);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x695 = 536990;
	static volatile uint64_t x696 = 317167837LLU;
	static uint64_t t169 = 20814159822212LLU;

    t169 = ((x693%(x694|x695))/x696);

    if (t169 != 58160828185LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x697 = 51U;
	uint8_t x698 = 10U;
	int16_t x699 = 777;
	volatile int8_t x700 = -1;
	int32_t t170 = -1671177;

    t170 = ((x697%(x698|x699))/x700);

    if (t170 != -51) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 91U;
	uint8_t x702 = 14U;
	int8_t x703 = INT8_MAX;
	int8_t x704 = -41;
	volatile int32_t t171 = -7099;

    t171 = ((x701%(x702|x703))/x704);

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x706 = INT64_MAX;
	int16_t x707 = 0;
	volatile int8_t x708 = INT8_MIN;
	int64_t t172 = 3LL;

    t172 = ((x705%(x706|x707))/x708);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x710 = -1LL;
	volatile int32_t x711 = 1955547;
	uint64_t x712 = 879LLU;
	static volatile uint64_t t173 = 28130650LLU;

    t173 = ((x709%(x710|x711))/x712);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x713 = 274337854263605LLU;
	static volatile int16_t x715 = INT16_MIN;
	volatile uint8_t x716 = 51U;
	uint64_t t174 = 13596519342867LLU;

    t174 = ((x713%(x714|x715))/x716);

    if (t174 != 5379173613011LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x717 = 3593608442490712261LLU;
	int16_t x718 = INT16_MIN;
	int32_t x719 = 6398756;

    t175 = ((x717%(x718|x719))/x720);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x721 = 4505U;
	uint64_t x722 = 20220901165784278LLU;
	int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	uint64_t t176 = 654LLU;

    t176 = ((x721%(x722|x723))/x724);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x725 = INT32_MIN;
	static int16_t x726 = INT16_MAX;
	uint16_t x727 = 41U;
	int64_t t177 = -5112LL;

    t177 = ((x725%(x726|x727))/x728);

    if (t177 != 2LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x730 = -3592;
	int16_t x731 = INT16_MIN;
	static int16_t x732 = INT16_MAX;
	static volatile int64_t t178 = 956000LL;

    t178 = ((x729%(x730|x731))/x732);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x733 = -8235;
	int8_t x734 = -1;
	int16_t x736 = INT16_MIN;
	static volatile int32_t t179 = 913802;

    t179 = ((x733%(x734|x735))/x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x738 = INT16_MIN;
	static volatile int8_t x739 = 1;
	uint64_t x740 = 129245LLU;

    t180 = ((x737%(x738|x739))/x740);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x742 = UINT32_MAX;
	int16_t x743 = -1545;
	int64_t t181 = -15520LL;

    t181 = ((x741%(x742|x743))/x744);

    if (t181 != 2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x745 = 7U;
	static uint16_t x746 = UINT16_MAX;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 1U;
	volatile int32_t t182 = -1;

    t182 = ((x745%(x746|x747))/x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x751 = -1;
	volatile int8_t x752 = -1;
	static uint64_t t183 = 2918763883LLU;

    t183 = ((x749%(x750|x751))/x752);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x753 = -1;
	int64_t x754 = INT64_MAX;
	uint16_t x755 = 125U;
	int64_t x756 = INT64_MIN;
	int64_t t184 = -9998472LL;

    t184 = ((x753%(x754|x755))/x756);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x757 = 51U;
	static int16_t x759 = -1;
	uint32_t x760 = 630U;
	uint32_t t185 = 2894U;

    t185 = ((x757%(x758|x759))/x760);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x761 = UINT64_MAX;
	static uint64_t x762 = 17LLU;
	static volatile uint64_t x764 = 45429134156025LLU;
	volatile uint64_t t186 = 595480897057637636LLU;

    t186 = ((x761%(x762|x763))/x764);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x765 = 559675431897771LLU;
	volatile uint8_t x767 = 126U;
	volatile uint8_t x768 = 4U;
	static uint64_t t187 = 361375801867040LLU;

    t187 = ((x765%(x766|x767))/x768);

    if (t187 != 24LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x769 = INT64_MIN;
	int32_t x770 = INT32_MIN;
	volatile int64_t x771 = 8674712549964LL;
	uint32_t x772 = UINT32_MAX;
	volatile int64_t t188 = 167LL;

    t188 = ((x769%(x770|x771))/x772);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x773 = 0U;
	int8_t x774 = INT8_MIN;
	volatile uint64_t x776 = 8159718LLU;
	volatile uint64_t t189 = 8347LLU;

    t189 = ((x773%(x774|x775))/x776);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x777 = UINT64_MAX;
	int32_t x779 = INT32_MIN;
	int32_t x780 = -1;
	volatile uint64_t t190 = 950395144270126LLU;

    t190 = ((x777%(x778|x779))/x780);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x781 = 15;
	int32_t x784 = -1;
	static uint32_t t191 = 382409616U;

    t191 = ((x781%(x782|x783))/x784);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x785 = INT32_MIN;
	uint64_t x786 = UINT64_MAX;
	volatile int32_t x787 = -1;
	volatile uint64_t t192 = 30157884431346673LLU;

    t192 = ((x785%(x786|x787))/x788);

    if (t192 != 3689348814312413593LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x790 = INT64_MIN;
	uint32_t x791 = UINT32_MAX;
	static int32_t x792 = -1;
	int64_t t193 = 6LL;

    t193 = ((x789%(x790|x791))/x792);

    if (t193 != -2147483647LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x793 = -149383;
	int8_t x794 = 0;
	volatile uint64_t x795 = 234244919616835LLU;
	uint64_t t194 = 8507954034779LLU;

    t194 = ((x793%(x794|x795))/x796);

    if (t194 != 1604191624057LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x799 = -1;
	int64_t t195 = -199859658788057LL;

    t195 = ((x797%(x798|x799))/x800);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x801 = -1;
	int8_t x803 = 0;

    t196 = ((x801%(x802|x803))/x804);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x805 = INT32_MIN;
	static int64_t x806 = INT64_MIN;
	int16_t x807 = INT16_MIN;
	static int32_t x808 = -27978228;
	int64_t t197 = -4094863138562464379LL;

    t197 = ((x805%(x806|x807))/x808);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x809 = INT32_MAX;
	int8_t x810 = -10;
	volatile int32_t x811 = -1;
	volatile int8_t x812 = INT8_MAX;

    t198 = ((x809%(x810|x811))/x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x813 = 1LL;
	volatile uint16_t x814 = 95U;
	int8_t x815 = INT8_MAX;
	uint16_t x816 = 39U;
	int64_t t199 = -6304975038993LL;

    t199 = ((x813%(x814|x815))/x816);

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

