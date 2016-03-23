
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

int8_t x5 = INT8_MAX;
int32_t x16 = -13595504;
int8_t x27 = 1;
volatile int8_t x48 = -1;
int32_t x64 = -1;
int32_t t12 = -190;
static uint64_t x70 = 23494328LLU;
static uint32_t x72 = 5208U;
int8_t x78 = INT8_MIN;
uint32_t x79 = 1U;
int64_t x80 = INT64_MIN;
int16_t x82 = -1;
uint32_t x83 = 80501033U;
uint32_t x86 = UINT32_MAX;
int8_t x87 = -1;
uint8_t x94 = 35U;
volatile uint64_t t18 = 135LLU;
static uint8_t x103 = 3U;
static int32_t t19 = -381;
uint32_t t20 = 10292U;
volatile int64_t x119 = -705467033811948229LL;
static int64_t x138 = INT64_MIN;
int64_t x139 = -1LL;
int64_t x140 = INT64_MIN;
volatile uint64_t t27 = 423LLU;
int8_t x151 = -3;
volatile uint8_t x159 = 7U;
uint32_t x166 = UINT32_MAX;
static int32_t x173 = -222624984;
uint8_t x177 = UINT8_MAX;
int64_t t34 = 27979LL;
int16_t x193 = 219;
uint16_t x201 = 1U;
int16_t x222 = 7208;
int8_t x233 = INT8_MIN;
volatile int16_t x241 = INT16_MIN;
int16_t x250 = INT16_MIN;
int8_t x251 = 1;
static int32_t x260 = -1;
static uint64_t x285 = 12LLU;
int8_t x286 = INT8_MIN;
int16_t x288 = INT16_MIN;
int16_t x292 = -1;
uint64_t x296 = UINT64_MAX;
uint64_t t58 = 883869LLU;
volatile uint32_t t60 = 2138705624U;
int32_t x307 = -1;
int16_t x310 = INT16_MIN;
static int32_t x318 = INT32_MIN;
int64_t x329 = -1LL;
int32_t x332 = INT32_MIN;
volatile int64_t t65 = -9816166165LL;
uint8_t x345 = 5U;
int64_t x351 = 32952230567LL;
int8_t x353 = -1;
int16_t x354 = -1;
int16_t x358 = INT16_MIN;
static int16_t x361 = INT16_MIN;
static uint64_t x363 = 45LLU;
volatile uint64_t t71 = 288058330279986LLU;
static int32_t x365 = INT32_MAX;
int64_t x367 = -1LL;
uint64_t x373 = 2468807215151LLU;
volatile uint32_t x375 = 10026910U;
int64_t x380 = INT64_MIN;
volatile int16_t x384 = -1;
static int8_t x387 = -1;
uint64_t x388 = 38574540520828LLU;
static volatile uint64_t t77 = 11873LLU;
volatile uint32_t x399 = UINT32_MAX;
int64_t x400 = INT64_MIN;
uint64_t x402 = 2229309596518984008LLU;
static int64_t x434 = 222LL;
uint32_t x439 = 2U;
static int64_t t85 = -10219515058788LL;
uint64_t x442 = 3440218565LLU;
int64_t x443 = INT64_MIN;
uint64_t t86 = 134115705826161659LLU;
volatile uint32_t t87 = 598809822U;
int8_t x458 = -1;
int64_t x460 = -17154495503569498LL;
int64_t t88 = -1038403143342LL;
int32_t x468 = INT32_MAX;
int8_t x483 = -48;
int64_t x489 = -1LL;
volatile int64_t t93 = 46156324989357LL;
int16_t x498 = INT16_MIN;
int16_t x500 = INT16_MIN;
uint64_t x511 = UINT64_MAX;
int32_t x515 = -1;
int8_t x516 = -1;
uint64_t x521 = UINT64_MAX;
static int16_t x524 = INT16_MIN;
uint64_t x528 = UINT64_MAX;
int32_t x548 = -1;
int32_t x571 = -237244;
uint16_t x573 = 1505U;
int32_t x575 = 109;
int16_t x578 = 0;
int32_t x579 = 1;
int16_t x581 = 6772;
volatile uint64_t x584 = UINT64_MAX;
int32_t x591 = INT32_MIN;
volatile int8_t x604 = -1;
volatile uint64_t t115 = 54LLU;
int16_t x620 = INT16_MAX;
int16_t x632 = INT16_MIN;
int64_t x633 = -1LL;
static volatile int64_t x635 = -280922922209LL;
volatile int64_t t119 = -1212928743975LL;
volatile uint16_t x637 = 6U;
int32_t x649 = INT32_MAX;
volatile uint64_t x651 = UINT64_MAX;
static volatile int32_t x653 = INT32_MIN;
int64_t t125 = 2701478929378LL;
uint32_t x675 = 165154U;
volatile int16_t x683 = INT16_MIN;
int64_t x707 = -1LL;
int64_t x711 = 1546891613180LL;
uint32_t x717 = 100U;
int32_t x720 = -1;
int32_t x728 = 842469882;
uint32_t t135 = 33579016U;
volatile int64_t t137 = -279136980LL;
int8_t x756 = INT8_MAX;
static volatile uint64_t t140 = 16682LLU;
int64_t x774 = INT64_MIN;
static volatile uint64_t x779 = 8189398360364555076LLU;
volatile uint32_t x780 = 68U;
int16_t x786 = 7211;
int8_t x798 = -1;
int8_t x799 = -1;
static uint16_t x813 = 3080U;
volatile int64_t x815 = -118550408732178LL;
int16_t x831 = -1;
uint8_t x834 = 23U;
int64_t x836 = INT64_MIN;
volatile uint32_t t154 = 307U;
int8_t x858 = INT8_MIN;
int16_t x859 = INT16_MIN;
int8_t x864 = INT8_MIN;
static volatile int16_t x866 = 3;
int8_t x867 = -1;
static int64_t x871 = -1LL;
volatile int16_t x872 = -41;
int8_t x877 = -1;
uint32_t x887 = 452040707U;
int16_t x897 = 9;
int16_t x905 = INT16_MAX;
static uint16_t x906 = 116U;
volatile uint64_t x908 = 27510018518LLU;
volatile uint64_t t169 = 205715942060271LLU;
int32_t x928 = -6273193;
static uint64_t t170 = 18568LLU;
int64_t x931 = 1511243117LL;
uint8_t x936 = UINT8_MAX;
int64_t x937 = 857LL;
volatile int32_t x940 = INT32_MAX;
static uint64_t t173 = 200452990880810LLU;
int64_t t174 = 127LL;
volatile int64_t t175 = 16267852071320422LL;
uint16_t x969 = 373U;
int32_t x972 = -1;
int16_t x995 = 830;
volatile uint64_t x999 = UINT64_MAX;
int16_t x1000 = INT16_MIN;
int64_t x1001 = 61LL;
int16_t x1013 = INT16_MIN;
static uint16_t x1014 = 342U;
int8_t x1017 = -1;
int32_t x1020 = INT32_MIN;
int8_t x1027 = INT8_MIN;
int8_t x1037 = INT8_MIN;
int16_t x1042 = INT16_MAX;
int8_t x1043 = 32;
static volatile int64_t x1054 = INT64_MIN;
volatile int64_t t193 = 529423795LL;
uint8_t x1067 = 9U;
int16_t x1075 = 261;


void f0(void) {
    	int32_t x1 = -99206832;
	static uint32_t x2 = UINT32_MAX;
	uint32_t x3 = 1889810U;
	static uint16_t x4 = UINT16_MAX;
	static volatile uint32_t t0 = 583755339U;

    t0 = ((x1*(x2-x3))%x4);

    if (t0 != 30401U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = -2141;

    t1 = ((x5*(x6-x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 1U;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	volatile int32_t t2 = 93048;

    t2 = ((x13*(x14-x15))%x16);

    if (t2 != -32640) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x21 = -2;
	int16_t x22 = INT16_MAX;
	int32_t x23 = 15745754;
	static volatile int32_t x24 = -1;
	int32_t t3 = 24;

    t3 = ((x21*(x22-x23))%x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MAX;
	static uint16_t x26 = 50U;
	volatile int64_t x28 = INT64_MAX;
	int64_t t4 = -1036099LL;

    t4 = ((x25*(x26-x27))%x28);

    if (t4 != 1605583LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x29 = -133754980;
	static volatile uint8_t x30 = 11U;
	uint32_t x31 = 20U;
	int32_t x32 = -1;
	uint32_t t5 = 4U;

    t5 = ((x29*(x30-x31))%x32);

    if (t5 != 1203794820U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	volatile int64_t x34 = 1LL;
	volatile int64_t x35 = -1LL;
	static uint16_t x36 = UINT16_MAX;
	volatile int64_t t6 = -13418068LL;

    t6 = ((x33*(x34-x35))%x36);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 611U;
	static int8_t x38 = -1;
	uint8_t x39 = 110U;
	int8_t x40 = INT8_MIN;
	uint32_t t7 = 91381184U;

    t7 = ((x37*(x38-x39))%x40);

    if (t7 != 4294899475U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MAX;
	static uint32_t x42 = 404771215U;
	int32_t x43 = INT32_MIN;
	static volatile int64_t x44 = INT64_MIN;
	int64_t t8 = 2950830LL;

    t8 = ((x41*(x42-x43))%x44);

    if (t8 != 2426875505LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = 101;
	int8_t x46 = 0;
	volatile int32_t x47 = -1;
	int32_t t9 = 1616;

    t9 = ((x45*(x46-x47))%x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 1U;
	volatile int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MAX;
	int16_t x52 = 3312;
	volatile uint32_t t10 = 8U;

    t10 = ((x49*(x50-x51))%x52);

    if (t10 != 2848U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MIN;
	static uint32_t x62 = 678U;
	static int16_t x63 = INT16_MAX;
	uint32_t t11 = 30179403U;

    t11 = ((x61*(x62-x63))%x64);

    if (t11 != 1051492352U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = 6315099;
	int16_t x68 = -1;

    t12 = ((x65*(x66-x67))%x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = 0;
	int16_t x71 = INT16_MIN;
	uint64_t t13 = 1546570841235159940LLU;

    t13 = ((x69*(x70-x71))%x72);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x73 = INT32_MAX;
	int64_t x74 = -1LL;
	static int8_t x75 = 40;
	static volatile int8_t x76 = INT8_MIN;
	int64_t t14 = 9158612131LL;

    t14 = ((x73*(x74-x75))%x76);

    if (t14 != -87LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = -301;
	int64_t t15 = -221LL;

    t15 = ((x77*(x78-x79))%x80);

    if (t15 != 38829LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x81 = UINT16_MAX;
	static int16_t x84 = INT16_MIN;
	uint32_t t16 = 48553130U;

    t16 = ((x81*(x82-x83))%x84);

    if (t16 != 2879543594U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x85 = -1;
	volatile int8_t x88 = -1;
	uint32_t t17 = 15246486U;

    t17 = ((x85*(x86-x87))%x88);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = -4;
	static uint16_t x95 = 13U;
	uint64_t x96 = UINT64_MAX;

    t18 = ((x93*(x94-x95))%x96);

    if (t18 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = 2191;
	int8_t x102 = -1;
	uint16_t x104 = 17U;

    t19 = ((x101*(x102-x103))%x104);

    if (t19 != -9) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x105 = 2U;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = 0;
	int8_t x108 = INT8_MIN;

    t20 = ((x105*(x106-x107))%x108);

    if (t20 != 126U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -1;
	int16_t x112 = INT16_MIN;
	int32_t t21 = -8066035;

    t21 = ((x109*(x110-x111))%x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x113 = -1LL;
	int32_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = 96U;
	volatile int64_t t22 = -491827LL;

    t22 = ((x113*(x114-x115))%x116);

    if (t22 != -31LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x117 = 27681U;
	uint64_t x118 = 70823LLU;
	uint32_t x120 = 409069601U;
	uint64_t t23 = 507497LLU;

    t23 = ((x117*(x118-x119))%x120);

    if (t23 != 228245430LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x125 = -1;
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	static uint16_t x128 = 2004U;
	volatile int32_t t24 = 638378;

    t24 = ((x125*(x126-x127))%x128);

    if (t24 != -703) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x129 = 8U;
	uint64_t x130 = UINT64_MAX;
	int32_t x131 = 1189997;
	int32_t x132 = -1;
	uint64_t t25 = 271020995825LLU;

    t25 = ((x129*(x130-x131))%x132);

    if (t25 != 18446744073700031632LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x137 = 10599LLU;
	uint64_t t26 = 734214990310615LLU;

    t26 = ((x137*(x138-x139))%x140);

    if (t26 != 10599LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x141 = 9LLU;
	uint64_t x142 = 79333373LLU;
	int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;

    t27 = ((x141*(x142-x143))%x144);

    if (t27 != 714295269LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x149 = -1LL;
	int8_t x150 = INT8_MAX;
	int8_t x152 = 2;
	int64_t t28 = 362911LL;

    t28 = ((x149*(x150-x151))%x152);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x153 = 47636961803769298LL;
	int16_t x154 = INT16_MAX;
	int16_t x155 = INT16_MAX;
	uint16_t x156 = 196U;
	volatile int64_t t29 = 1LL;

    t29 = ((x153*(x154-x155))%x156);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x157 = -1;
	volatile uint32_t x158 = 49366622U;
	int32_t x160 = -1;
	uint32_t t30 = 180814U;

    t30 = ((x157*(x158-x159))%x160);

    if (t30 != 4245600681U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = UINT32_MAX;
	uint8_t x162 = 6U;
	uint8_t x163 = 3U;
	static volatile int8_t x164 = INT8_MAX;
	static uint32_t t31 = 16744253U;

    t31 = ((x161*(x162-x163))%x164);

    if (t31 != 13U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x165 = INT64_MAX;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = -189041;
	volatile int64_t t32 = -10LL;

    t32 = ((x165*(x166-x167))%x168);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x174 = 0;
	volatile uint32_t x175 = 116085610U;
	int16_t x176 = INT16_MIN;
	uint32_t t33 = 1310792696U;

    t33 = ((x173*(x174-x175))%x176);

    if (t33 != 114473328U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x178 = -1;
	volatile int8_t x179 = -2;
	int64_t x180 = INT64_MAX;

    t34 = ((x177*(x178-x179))%x180);

    if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x185 = 30644U;
	uint16_t x186 = 276U;
	uint32_t x187 = 1U;
	volatile uint8_t x188 = 2U;
	uint32_t t35 = 47U;

    t35 = ((x185*(x186-x187))%x188);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = -7;
	uint32_t x190 = 106U;
	int16_t x191 = INT16_MIN;
	static uint16_t x192 = 359U;
	volatile uint32_t t36 = 51U;

    t36 = ((x189*(x190-x191))%x192);

    if (t36 != 74U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x194 = 610U;
	int16_t x195 = -1;
	volatile int64_t x196 = INT64_MIN;
	int64_t t37 = 1592566131927757LL;

    t37 = ((x193*(x194-x195))%x196);

    if (t37 != 133809LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x197 = UINT32_MAX;
	uint32_t x198 = UINT32_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	int64_t x200 = 10398676LL;
	static volatile uint64_t t38 = 1195814758LLU;

    t38 = ((x197*(x198-x199))%x200);

    if (t38 != 883668LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x202 = 0U;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	static int32_t t39 = 35086;

    t39 = ((x201*(x202-x203))%x204);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = -1;
	volatile int8_t x206 = 57;
	int16_t x207 = INT16_MIN;
	volatile int32_t x208 = 82849;
	int32_t t40 = 424277295;

    t40 = ((x205*(x206-x207))%x208);

    if (t40 != -32825) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	uint8_t x211 = 1U;
	int16_t x212 = INT16_MAX;
	static volatile int32_t t41 = 52;

    t41 = ((x209*(x210-x211))%x212);

    if (t41 != 16512) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 100872030U;
	static uint16_t x220 = 477U;
	uint64_t t42 = 12412434735LLU;

    t42 = ((x217*(x218-x219))%x220);

    if (t42 != 251LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x221 = -23424647;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	uint32_t t43 = 44735U;

    t43 = ((x221*(x222-x223))%x224);

    if (t43 != 2930411617U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x229 = -1;
	int64_t x230 = 29955535192LL;
	static volatile uint32_t x231 = 5391U;
	volatile uint16_t x232 = 11U;
	volatile int64_t t44 = 126048040305375LL;

    t44 = ((x229*(x230-x231))%x232);

    if (t44 != -10LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x234 = 22939597710LL;
	static volatile uint8_t x235 = 61U;
	int64_t x236 = INT64_MAX;
	int64_t t45 = 674476808463828LL;

    t45 = ((x233*(x234-x235))%x236);

    if (t45 != -2936268499072LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x237 = 204U;
	int32_t x238 = -648799770;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile uint32_t t46 = 145736241U;

    t46 = ((x237*(x238-x239))%x240);

    if (t46 != 788807188U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x242 = INT64_MAX;
	uint64_t x243 = 1740288LLU;
	int64_t x244 = -551768336740LL;
	uint64_t t47 = 5965334317152705786LLU;

    t47 = ((x241*(x242-x243))%x244);

    if (t47 != 57025789952LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x245 = -1;
	static int32_t x246 = INT32_MIN;
	int32_t x247 = -1103;
	uint8_t x248 = 1U;
	volatile int32_t t48 = 718;

    t48 = ((x245*(x246-x247))%x248);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x249 = 103U;
	int16_t x252 = INT16_MIN;
	volatile int32_t t49 = -13283;

    t49 = ((x249*(x250-x251))%x252);

    if (t49 != -103) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x253 = INT16_MIN;
	static uint64_t x254 = UINT64_MAX;
	static uint8_t x255 = 59U;
	static volatile uint32_t x256 = 483296U;
	volatile uint64_t t50 = 3067186218261078LLU;

    t50 = ((x253*(x254-x255))%x256);

    if (t50 != 32896LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x257 = -1;
	uint64_t x258 = 7183351LLU;
	int64_t x259 = INT64_MIN;
	uint64_t t51 = 3960192LLU;

    t51 = ((x257*(x258-x259))%x260);

    if (t51 != 9223372036847592457LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x261 = -1;
	volatile int32_t x262 = 26904;
	static int8_t x263 = INT8_MAX;
	static volatile int32_t x264 = INT32_MIN;
	volatile int32_t t52 = 3133;

    t52 = ((x261*(x262-x263))%x264);

    if (t52 != -26777) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x265 = 832;
	uint16_t x266 = 0U;
	int32_t x267 = 346821;
	int16_t x268 = INT16_MIN;
	int32_t t53 = 213;

    t53 = ((x265*(x266-x267))%x268);

    if (t53 != -64) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x269 = 29U;
	volatile uint32_t x270 = 2U;
	static int64_t x271 = -1LL;
	int16_t x272 = -595;
	int64_t t54 = -15LL;

    t54 = ((x269*(x270-x271))%x272);

    if (t54 != 87LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x277 = -1LL;
	static int8_t x278 = INT8_MAX;
	volatile uint32_t x279 = 19U;
	int16_t x280 = INT16_MIN;
	volatile int64_t t55 = -61411LL;

    t55 = ((x277*(x278-x279))%x280);

    if (t55 != -108LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x287 = INT16_MIN;
	uint64_t t56 = 83LLU;

    t56 = ((x285*(x286-x287))%x288);

    if (t56 != 391680LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x289 = -1;
	volatile int8_t x290 = 3;
	volatile int8_t x291 = INT8_MIN;
	static int32_t t57 = -4700232;

    t57 = ((x289*(x290-x291))%x292);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x293 = 1635LL;
	volatile uint8_t x294 = 0U;
	int64_t x295 = -173LL;

    t58 = ((x293*(x294-x295))%x296);

    if (t58 != 282855LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x297 = 410486U;
	int8_t x298 = -1;
	int32_t x299 = 2;
	uint32_t x300 = 79U;
	uint32_t t59 = 294U;

    t59 = ((x297*(x298-x299))%x300);

    if (t59 != 44U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x301 = 296U;
	static int16_t x302 = -1;
	int8_t x303 = -1;
	int16_t x304 = 57;

    t60 = ((x301*(x302-x303))%x304);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x305 = 4;
	int8_t x306 = 3;
	int64_t x308 = INT64_MAX;
	volatile int64_t t61 = -574LL;

    t61 = ((x305*(x306-x307))%x308);

    if (t61 != 16LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x309 = -43422237LL;
	uint64_t x311 = 7LLU;
	uint32_t x312 = 7682815U;
	volatile uint64_t t62 = 691216LLU;

    t62 = ((x309*(x310-x311))%x312);

    if (t62 != 6849890LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x317 = UINT64_MAX;
	volatile int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t63 = 13LLU;

    t63 = ((x317*(x318-x319))%x320);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x325 = -1;
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = -1;
	int32_t x328 = -1;
	volatile int32_t t64 = 658712;

    t64 = ((x325*(x326-x327))%x328);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x330 = -1;
	int32_t x331 = 63278996;

    t65 = ((x329*(x330-x331))%x332);

    if (t65 != 63278997LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x337 = 93U;
	volatile int8_t x338 = INT8_MAX;
	volatile uint64_t x339 = 2LLU;
	uint32_t x340 = 32432228U;
	volatile uint64_t t66 = 1214049169321238LLU;

    t66 = ((x337*(x338-x339))%x340);

    if (t66 != 11625LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x346 = 903U;
	uint32_t x347 = 116767078U;
	static uint16_t x348 = UINT16_MAX;
	uint32_t t67 = 2752108U;

    t67 = ((x345*(x346-x347))%x348);

    if (t67 != 20441U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x349 = 0;
	int8_t x350 = 5;
	static uint64_t x352 = 2185892835LLU;
	volatile uint64_t t68 = 14943986930LLU;

    t68 = ((x349*(x350-x351))%x352);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x355 = -1;
	volatile int32_t x356 = INT32_MAX;
	int32_t t69 = -51;

    t69 = ((x353*(x354-x355))%x356);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x357 = 5092845887476LL;
	static int32_t x359 = -1;
	static volatile int16_t x360 = 1;
	volatile int64_t t70 = 21LL;

    t70 = ((x357*(x358-x359))%x360);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x362 = 1;
	int16_t x364 = -28;

    t71 = ((x361*(x362-x363))%x364);

    if (t71 != 1441792LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x366 = 11;
	uint8_t x368 = 18U;
	volatile int64_t t72 = -44594423LL;

    t72 = ((x365*(x366-x367))%x368);

    if (t72 != 12LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x374 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	uint64_t t73 = 59073596746961174LLU;

    t73 = ((x373*(x374-x375))%x376);

    if (t73 != 43507LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x377 = INT8_MAX;
	static volatile uint16_t x378 = UINT16_MAX;
	static int16_t x379 = 4006;
	volatile int64_t t74 = -48717922472LL;

    t74 = ((x377*(x378-x379))%x380);

    if (t74 != 7814183LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = 2U;
	static volatile int16_t x383 = INT16_MIN;
	volatile int32_t t75 = -505035732;

    t75 = ((x381*(x382-x383))%x384);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x385 = 41556U;
	uint32_t x386 = UINT32_MAX;
	volatile uint64_t t76 = 10383897LLU;

    t76 = ((x385*(x386-x387))%x388);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x389 = 26015078798LLU;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = -5839957669LL;

    t77 = ((x389*(x390-x391))%x392);

    if (t77 != 18445035845590438542LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x393 = -1;
	volatile int16_t x394 = 9;
	static uint16_t x395 = 510U;
	int16_t x396 = -3388;
	int32_t t78 = -60;

    t78 = ((x393*(x394-x395))%x396);

    if (t78 != 501) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x397 = 59U;
	static int32_t x398 = INT32_MAX;
	int64_t t79 = -873361263165950856LL;

    t79 = ((x397*(x398-x399))%x400);

    if (t79 != 2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x401 = -1;
	volatile int64_t x403 = -6572LL;
	uint8_t x404 = UINT8_MAX;
	uint64_t t80 = 1643810939851099LLU;

    t80 = ((x401*(x402-x403))%x404);

    if (t80 != 56LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x409 = INT8_MAX;
	int32_t x410 = -921162;
	int32_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	uint32_t t81 = 0U;

    t81 = ((x409*(x410-x411))%x412);

    if (t81 != 4177979849U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x421 = INT16_MIN;
	static uint8_t x422 = 1U;
	uint8_t x423 = 76U;
	static volatile int16_t x424 = -497;
	volatile int32_t t82 = -8874;

    t82 = ((x421*(x422-x423))%x424);

    if (t82 != 432) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	int32_t x426 = -1;
	static int16_t x427 = -3;
	static int16_t x428 = -1;
	int32_t t83 = 24;

    t83 = ((x425*(x426-x427))%x428);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x433 = 18;
	volatile int8_t x435 = -1;
	static int32_t x436 = INT32_MIN;
	int64_t t84 = 1102037538175642952LL;

    t84 = ((x433*(x434-x435))%x436);

    if (t84 != 4014LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x437 = INT16_MIN;
	int32_t x438 = -1;
	volatile int64_t x440 = INT64_MAX;

    t85 = ((x437*(x438-x439))%x440);

    if (t85 != 98304LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x441 = 219U;
	int64_t x444 = -1LL;

    t86 = ((x441*(x442-x443))%x444);

    if (t86 != 9223372790262641543LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x445 = 1U;
	int8_t x446 = 26;
	int16_t x447 = INT16_MIN;
	static uint16_t x448 = UINT16_MAX;

    t87 = ((x445*(x446-x447))%x448);

    if (t87 != 32794U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x457 = INT8_MIN;
	static volatile uint32_t x459 = 1444U;

    t88 = ((x457*(x458-x459))%x460);

    if (t88 != 184960LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	int32_t x462 = INT32_MAX;
	uint32_t x463 = 513081468U;
	uint8_t x464 = 8U;
	static volatile uint32_t t89 = 130689U;

    t89 = ((x461*(x462-x463))%x464);

    if (t89 != 5U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x465 = -1;
	int16_t x466 = -1;
	uint16_t x467 = 16780U;
	static int32_t t90 = -1914943;

    t90 = ((x465*(x466-x467))%x468);

    if (t90 != 16781) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x481 = UINT64_MAX;
	int64_t x482 = -1LL;
	uint8_t x484 = UINT8_MAX;
	uint64_t t91 = 8528109425470LLU;

    t91 = ((x481*(x482-x483))%x484);

    if (t91 != 209LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x485 = UINT16_MAX;
	static uint64_t x486 = 115LLU;
	int64_t x487 = -12467295652LL;
	static uint64_t x488 = 437302LLU;
	volatile uint64_t t92 = 17465LLU;

    t92 = ((x485*(x486-x487))%x488);

    if (t92 != 199771LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x490 = 1471691195024373LL;
	static int8_t x491 = INT8_MIN;
	int64_t x492 = -1LL;

    t93 = ((x489*(x490-x491))%x492);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x497 = 259LLU;
	int8_t x499 = -9;
	uint64_t t94 = 10LLU;

    t94 = ((x497*(x498-x499))%x500);

    if (t94 != 18446744073701067035LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x501 = -49798348LL;
	uint64_t x502 = UINT64_MAX;
	volatile uint8_t x503 = UINT8_MAX;
	static int8_t x504 = -1;
	uint64_t t95 = 6062080727485LLU;

    t95 = ((x501*(x502-x503))%x504);

    if (t95 != 12748377088LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x505 = -424609858LL;
	volatile int8_t x506 = 20;
	int64_t x507 = -1LL;
	int64_t x508 = INT64_MIN;
	int64_t t96 = -40363010178773LL;

    t96 = ((x505*(x506-x507))%x508);

    if (t96 != -8916807018LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x509 = -46570231841LL;
	int16_t x510 = INT16_MIN;
	uint32_t x512 = 500U;
	uint64_t t97 = 73045576157844374LLU;

    t97 = ((x509*(x510-x511))%x512);

    if (t97 != 47LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x513 = 23LLU;
	static uint64_t x514 = 162470985336061483LLU;
	uint64_t t98 = 1991942985LLU;

    t98 = ((x513*(x514-x515))%x516);

    if (t98 != 3736832662729414132LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x517 = UINT8_MAX;
	static int64_t x518 = -1LL;
	int32_t x519 = -977978851;
	static uint8_t x520 = 1U;
	volatile int64_t t99 = -759020695816682LL;

    t99 = ((x517*(x518-x519))%x520);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x522 = UINT8_MAX;
	int32_t x523 = -39;
	volatile uint64_t t100 = 16183902656LLU;

    t100 = ((x521*(x522-x523))%x524);

    if (t100 != 32474LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x525 = -1;
	static int32_t x526 = -428455;
	volatile int16_t x527 = -28;
	static volatile uint64_t t101 = 371LLU;

    t101 = ((x525*(x526-x527))%x528);

    if (t101 != 428427LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x529 = 889618557U;
	static int32_t x530 = 180171717;
	volatile int32_t x531 = -2080;
	volatile int64_t x532 = INT64_MAX;
	static volatile int64_t t102 = 13064203443LL;

    t102 = ((x529*(x530-x531))%x532);

    if (t102 != 2897657553LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x533 = INT64_MIN;
	static uint32_t x534 = UINT32_MAX;
	static int16_t x535 = -1;
	static int16_t x536 = INT16_MAX;
	volatile int64_t t103 = -806204098715LL;

    t103 = ((x533*(x534-x535))%x536);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x545 = -26367181;
	volatile uint8_t x546 = 13U;
	int16_t x547 = -1;
	volatile int32_t t104 = -249641;

    t104 = ((x545*(x546-x547))%x548);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x549 = -1;
	volatile int8_t x550 = -1;
	int16_t x551 = -1;
	uint8_t x552 = 1U;
	int32_t t105 = 46;

    t105 = ((x549*(x550-x551))%x552);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x565 = -12;
	int32_t x566 = -1;
	uint32_t x567 = UINT32_MAX;
	static volatile int32_t x568 = 1;
	uint32_t t106 = 152169U;

    t106 = ((x565*(x566-x567))%x568);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x569 = -4642;
	static int8_t x570 = 0;
	uint8_t x572 = 3U;
	int32_t t107 = -351605;

    t107 = ((x569*(x570-x571))%x572);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x574 = INT16_MIN;
	int32_t x576 = INT32_MAX;
	int32_t t108 = 60979;

    t108 = ((x573*(x574-x575))%x576);

    if (t108 != -49479885) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x577 = -1;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t109 = 234261;

    t109 = ((x577*(x578-x579))%x580);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x582 = -1LL;
	uint8_t x583 = 28U;
	volatile uint64_t t110 = 1554278935675LLU;

    t110 = ((x581*(x582-x583))%x584);

    if (t110 != 18446744073709355228LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x585 = 773U;
	volatile uint16_t x586 = UINT16_MAX;
	int32_t x587 = INT32_MAX;
	uint16_t x588 = 26U;
	volatile uint32_t t111 = 449712077U;

    t111 = ((x585*(x586-x587))%x588);

    if (t111 != 16U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x589 = -1LL;
	volatile int64_t x590 = -1LL;
	int8_t x592 = -1;
	static int64_t t112 = 261472LL;

    t112 = ((x589*(x590-x591))%x592);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x597 = 302611U;
	int8_t x598 = INT8_MIN;
	uint8_t x599 = 11U;
	static uint32_t x600 = UINT32_MAX;
	static uint32_t t113 = 854U;

    t113 = ((x597*(x598-x599))%x600);

    if (t113 != 4252904367U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x601 = 1191U;
	volatile int32_t x602 = INT32_MIN;
	static volatile int16_t x603 = -1;
	static uint32_t t114 = 1010983086U;

    t114 = ((x601*(x602-x603))%x604);

    if (t114 != 2147484839U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x609 = UINT64_MAX;
	int16_t x610 = INT16_MIN;
	int8_t x611 = INT8_MAX;
	uint64_t x612 = 321485LLU;

    t115 = ((x609*(x610-x611))%x612);

    if (t115 != 32895LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x613 = -684;
	int16_t x614 = -9;
	uint8_t x615 = 40U;
	uint16_t x616 = 298U;
	volatile int32_t t116 = -77203;

    t116 = ((x613*(x614-x615))%x616);

    if (t116 != 140) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x617 = INT16_MAX;
	uint8_t x618 = 63U;
	volatile int32_t x619 = -44;
	static volatile int32_t t117 = 707;

    t117 = ((x617*(x618-x619))%x620);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x629 = -1;
	int8_t x630 = 7;
	uint32_t x631 = 0U;
	uint32_t t118 = 528108535U;

    t118 = ((x629*(x630-x631))%x632);

    if (t118 != 32761U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x634 = -2;
	volatile int16_t x636 = INT16_MAX;

    t119 = ((x633*(x634-x635))%x636);

    if (t119 != -28291LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x638 = 82U;
	int8_t x639 = INT8_MAX;
	static volatile int64_t x640 = INT64_MIN;
	volatile int64_t t120 = -306628443LL;

    t120 = ((x637*(x638-x639))%x640);

    if (t120 != -270LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x641 = UINT8_MAX;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = UINT64_MAX;
	int64_t x644 = INT64_MIN;
	volatile uint64_t t121 = 90622361302LLU;

    t121 = ((x641*(x642-x643))%x644);

    if (t121 != 255LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x650 = UINT32_MAX;
	volatile int16_t x652 = -737;
	volatile uint64_t t122 = 2062LLU;

    t122 = ((x649*(x650-x651))%x652);

    if (t122 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x654 = -1;
	static uint32_t x655 = 70262762U;
	int64_t x656 = -5LL;
	static volatile int64_t t123 = -23LL;

    t123 = ((x653*(x654-x655))%x656);

    if (t123 != 3LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x657 = INT8_MAX;
	static int16_t x658 = -6;
	int8_t x659 = INT8_MAX;
	int16_t x660 = INT16_MIN;
	volatile int32_t t124 = 191;

    t124 = ((x657*(x658-x659))%x660);

    if (t124 != -16891) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x665 = UINT16_MAX;
	int64_t x666 = -433373164177LL;
	int8_t x667 = INT8_MIN;
	int32_t x668 = INT32_MIN;

    t125 = ((x665*(x666-x667))%x668);

    if (t125 != -1258507759LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x673 = -1;
	int32_t x674 = -11731621;
	int8_t x676 = -29;
	uint32_t t126 = 419739U;

    t126 = ((x673*(x674-x675))%x676);

    if (t126 != 11896775U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x677 = INT16_MAX;
	volatile uint16_t x678 = UINT16_MAX;
	int32_t x679 = -1;
	uint64_t x680 = UINT64_MAX;
	volatile uint64_t t127 = 449LLU;

    t127 = ((x677*(x678-x679))%x680);

    if (t127 != 2147418112LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	int8_t x682 = INT8_MIN;
	int32_t x684 = INT32_MIN;
	int32_t t128 = -91;

    t128 = ((x681*(x682-x683))%x684);

    if (t128 != 8323200) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x685 = UINT32_MAX;
	int32_t x686 = 77905;
	volatile uint64_t x687 = 4264LLU;
	static int16_t x688 = INT16_MAX;
	volatile uint64_t t129 = 582403110787885LLU;

    t129 = ((x685*(x686-x687))%x688);

    if (t129 != 24321LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x705 = INT8_MAX;
	volatile uint8_t x706 = UINT8_MAX;
	uint64_t x708 = 541182415325113LLU;
	volatile uint64_t t130 = 2210LLU;

    t130 = ((x705*(x706-x707))%x708);

    if (t130 != 32512LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x709 = 141U;
	volatile uint32_t x710 = 95980075U;
	static int16_t x712 = INT16_MIN;
	volatile int64_t t131 = 1382917961LL;

    t131 = ((x709*(x710-x711))%x712);

    if (t131 != -10269LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x713 = UINT8_MAX;
	int16_t x714 = 219;
	uint64_t x715 = 118797910163992054LLU;
	static int32_t x716 = -1;
	uint64_t t132 = 123724612122608LLU;

    t132 = ((x713*(x714-x715))%x716);

    if (t132 != 6600021055601185307LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x718 = -1LL;
	uint8_t x719 = UINT8_MAX;
	volatile int64_t t133 = 25LL;

    t133 = ((x717*(x718-x719))%x720);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x725 = -1;
	uint64_t x726 = 6138572126652250LLU;
	uint8_t x727 = UINT8_MAX;
	volatile uint64_t t134 = 16140059928LLU;

    t134 = ((x725*(x726-x727))%x728);

    if (t134 != 93071223LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x729 = -1;
	int32_t x730 = INT32_MAX;
	int32_t x731 = 243;
	static volatile uint32_t x732 = 1122U;

    t135 = ((x729*(x730-x731))%x732);

    if (t135 != 576U) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x737 = INT8_MAX;
	volatile uint32_t x738 = 56574377U;
	uint16_t x739 = UINT16_MAX;
	int8_t x740 = -21;
	volatile uint32_t t136 = 0U;

    t136 = ((x737*(x738-x739))%x740);

    if (t136 != 2881655638U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x745 = INT64_MIN;
	static volatile int16_t x746 = -1;
	int8_t x747 = -1;
	static int32_t x748 = 181016984;

    t137 = ((x745*(x746-x747))%x748);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile uint8_t x750 = 28U;
	static int32_t x751 = -8847412;
	uint8_t x752 = 44U;
	uint32_t t138 = 90U;

    t138 = ((x749*(x750-x751))%x752);

    if (t138 != 40U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x753 = -1;
	uint8_t x754 = 3U;
	int16_t x755 = 101;
	int32_t t139 = 8403251;

    t139 = ((x753*(x754-x755))%x756);

    if (t139 != 98) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x757 = 40099544LLU;
	static int16_t x758 = 6;
	int8_t x759 = 26;
	uint32_t x760 = UINT32_MAX;

    t140 = ((x757*(x758-x759))%x760);

    if (t140 != 3492976416LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x761 = -712713591;
	int8_t x762 = INT8_MAX;
	static uint64_t x763 = 0LLU;
	static int16_t x764 = -1;
	uint64_t t141 = 81926155847LLU;

    t141 = ((x761*(x762-x763))%x764);

    if (t141 != 18446743983194925559LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x769 = -1;
	int32_t x770 = 2271786;
	uint64_t x771 = 7807608288LLU;
	uint8_t x772 = UINT8_MAX;
	uint64_t t142 = 11LLU;

    t142 = ((x769*(x770-x771))%x772);

    if (t142 != 192LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x773 = -12;
	int64_t x775 = INT64_MIN;
	int32_t x776 = -1;
	static volatile int64_t t143 = 10301067638LL;

    t143 = ((x773*(x774-x775))%x776);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x777 = -26782932519174LL;
	uint16_t x778 = UINT16_MAX;
	volatile uint64_t t144 = 336991LLU;

    t144 = ((x777*(x778-x779))%x780);

    if (t144 != 66LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x785 = INT8_MAX;
	static int8_t x787 = -1;
	int8_t x788 = -1;
	int32_t t145 = 9;

    t145 = ((x785*(x786-x787))%x788);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MIN;
	volatile uint64_t x791 = UINT64_MAX;
	uint64_t x792 = UINT64_MAX;
	uint64_t t146 = 6LLU;

    t146 = ((x789*(x790-x791))%x792);

    if (t146 != 16256LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x797 = -1;
	volatile int64_t x800 = INT64_MIN;
	int64_t t147 = -45569460977LL;

    t147 = ((x797*(x798-x799))%x800);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x809 = INT8_MIN;
	volatile int8_t x810 = -1;
	int32_t x811 = -51;
	int8_t x812 = INT8_MAX;
	volatile int32_t t148 = 27647644;

    t148 = ((x809*(x810-x811))%x812);

    if (t148 != -50) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x814 = 15U;
	int8_t x816 = INT8_MAX;
	volatile int64_t t149 = 14383LL;

    t149 = ((x813*(x814-x815))%x816);

    if (t149 != 59LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x821 = 28704U;
	uint8_t x822 = 0U;
	int8_t x823 = INT8_MIN;
	int32_t x824 = -23607247;
	volatile int32_t t150 = -971577;

    t150 = ((x821*(x822-x823))%x824);

    if (t150 != 3674112) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x825 = 1U;
	int32_t x826 = -827902;
	int16_t x827 = INT16_MAX;
	int64_t x828 = -547967298LL;
	volatile int64_t t151 = -116144666818926LL;

    t151 = ((x825*(x826-x827))%x828);

    if (t151 != -860669LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x829 = -1;
	uint64_t x830 = 1790593LLU;
	volatile int16_t x832 = -69;
	volatile uint64_t t152 = 6LLU;

    t152 = ((x829*(x830-x831))%x832);

    if (t152 != 18446744073707761022LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x833 = 0;
	int16_t x835 = -1;
	volatile int64_t t153 = 52LL;

    t153 = ((x833*(x834-x835))%x836);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x837 = 33U;
	int8_t x838 = -1;
	uint32_t x839 = 5421935U;
	uint8_t x840 = 23U;

    t154 = ((x837*(x838-x839))%x840);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x841 = 1;
	int32_t x842 = INT32_MIN;
	uint64_t x843 = 155723014211LLU;
	int8_t x844 = INT8_MAX;
	uint64_t t155 = 91LLU;

    t155 = ((x841*(x842-x843))%x844);

    if (t155 != 92LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x853 = 810LLU;
	uint8_t x854 = 4U;
	volatile uint32_t x855 = 25846U;
	int32_t x856 = 3646381;
	volatile uint64_t t156 = 8032455LLU;

    t156 = ((x853*(x854-x855))%x856);

    if (t156 != 3503451LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x857 = 24U;
	uint16_t x860 = 10U;
	volatile int32_t t157 = -200;

    t157 = ((x857*(x858-x859))%x860);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x861 = 29948031U;
	uint16_t x862 = UINT16_MAX;
	volatile uint16_t x863 = UINT16_MAX;
	volatile uint32_t t158 = 52U;

    t158 = ((x861*(x862-x863))%x864);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x865 = UINT32_MAX;
	volatile int64_t x868 = INT64_MIN;
	volatile int64_t t159 = -89638935336569537LL;

    t159 = ((x865*(x866-x867))%x868);

    if (t159 != 4294967292LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x869 = INT16_MIN;
	uint8_t x870 = 29U;
	int64_t t160 = 164022718LL;

    t160 = ((x869*(x870-x871))%x872);

    if (t160 != -24LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x878 = INT32_MIN;
	static volatile int8_t x879 = -1;
	uint8_t x880 = 10U;
	static int32_t t161 = -49;

    t161 = ((x877*(x878-x879))%x880);

    if (t161 != 7) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x881 = 23U;
	volatile uint8_t x882 = 1U;
	static int16_t x883 = INT16_MIN;
	int64_t x884 = -450022182565544637LL;
	static volatile int64_t t162 = 5148517092LL;

    t162 = ((x881*(x882-x883))%x884);

    if (t162 != 753687LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x885 = 68U;
	int16_t x886 = -1;
	static int16_t x888 = INT16_MAX;
	uint32_t t163 = 646143U;

    t163 = ((x885*(x886-x887))%x888);

    if (t163 != 20122U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x889 = INT8_MIN;
	static uint64_t x890 = 2LLU;
	static int32_t x891 = INT32_MIN;
	uint64_t x892 = 2194920026256LLU;
	uint64_t t164 = 232115317604LLU;

    t164 = ((x889*(x890-x891))%x892);

    if (t164 != 1566288632432LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x893 = INT8_MAX;
	static int16_t x894 = INT16_MAX;
	int16_t x895 = INT16_MIN;
	uint32_t x896 = 989U;
	static volatile uint32_t t165 = 18U;

    t165 = ((x893*(x894-x895))%x896);

    if (t165 != 510U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x898 = 0;
	int8_t x899 = 0;
	int8_t x900 = -19;
	static int32_t t166 = 36430;

    t166 = ((x897*(x898-x899))%x900);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x907 = 3U;
	uint64_t t167 = 2472LLU;

    t167 = ((x905*(x906-x907))%x908);

    if (t167 != 3702671LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x913 = UINT8_MAX;
	int64_t x914 = -659333113691LL;
	int16_t x915 = INT16_MAX;
	int16_t x916 = 3;
	static int64_t t168 = 10167588059878LL;

    t168 = ((x913*(x914-x915))%x916);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x921 = INT64_MIN;
	uint16_t x922 = 3877U;
	uint64_t x923 = 107623LLU;
	uint64_t x924 = 1257142460067LLU;

    t169 = ((x921*(x922-x923))%x924);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x925 = 0U;
	volatile uint16_t x926 = UINT16_MAX;
	volatile uint64_t x927 = 135303691041781349LLU;

    t170 = ((x925*(x926-x927))%x928);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x929 = 27078U;
	int32_t x930 = INT32_MAX;
	int32_t x932 = 536;
	int64_t t171 = 33572018329997375LL;

    t171 = ((x929*(x930-x931))%x932);

    if (t171 != 76LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x933 = INT16_MAX;
	int16_t x934 = INT16_MAX;
	int64_t x935 = 540507LL;
	static int64_t t172 = 12990888346678LL;

    t172 = ((x933*(x934-x935))%x936);

    if (t172 != -110LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x938 = -1LL;
	uint64_t x939 = 9346LLU;

    t173 = ((x937*(x938-x939))%x940);

    if (t173 != 2139473272LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x941 = 1;
	uint16_t x942 = UINT16_MAX;
	int16_t x943 = INT16_MIN;
	int64_t x944 = INT64_MAX;

    t174 = ((x941*(x942-x943))%x944);

    if (t174 != 98303LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x957 = -879LL;
	volatile uint16_t x958 = 2708U;
	static int16_t x959 = INT16_MIN;
	int64_t x960 = -1LL;

    t175 = ((x957*(x958-x959))%x960);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x961 = 6U;
	uint64_t x962 = UINT64_MAX;
	uint64_t x963 = 595191581421793405LLU;
	int64_t x964 = 7139930442181414LL;
	uint64_t t176 = 1948312LLU;

    t176 = ((x961*(x962-x963))%x964);

    if (t176 != 3119474114905818LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x965 = 115LLU;
	int16_t x966 = INT16_MIN;
	uint32_t x967 = UINT32_MAX;
	int32_t x968 = -1;
	static uint64_t t177 = 0LLU;

    t177 = ((x965*(x966-x967))%x968);

    if (t177 != 493917470835LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x970 = INT32_MIN;
	static int32_t x971 = INT32_MIN;
	volatile int32_t t178 = 1342087;

    t178 = ((x969*(x970-x971))%x972);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x973 = INT16_MIN;
	int8_t x974 = -7;
	static uint8_t x975 = UINT8_MAX;
	int32_t x976 = INT32_MIN;
	int32_t t179 = 30489255;

    t179 = ((x973*(x974-x975))%x976);

    if (t179 != 8585216) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x985 = -7;
	static volatile uint16_t x986 = 169U;
	static int8_t x987 = -1;
	int64_t x988 = INT64_MIN;
	volatile int64_t t180 = -3902268LL;

    t180 = ((x985*(x986-x987))%x988);

    if (t180 != -1190LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x989 = 1U;
	uint32_t x990 = 174940U;
	int16_t x991 = -1;
	static int32_t x992 = -25;
	static volatile uint32_t t181 = 490U;

    t181 = ((x989*(x990-x991))%x992);

    if (t181 != 174941U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x993 = -29164954LL;
	int16_t x994 = INT16_MIN;
	volatile uint16_t x996 = 1263U;
	static int64_t t182 = 48596669733LL;

    t182 = ((x993*(x994-x995))%x996);

    if (t182 != 478LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x997 = 539747U;
	int8_t x998 = INT8_MIN;
	uint64_t t183 = 1421LLU;

    t183 = ((x997*(x998-x999))%x1000);

    if (t183 != 18446744073641003747LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1002 = 28;
	static int32_t x1003 = 8551;
	volatile int64_t x1004 = 4129854120LL;
	int64_t t184 = 0LL;

    t184 = ((x1001*(x1002-x1003))%x1004);

    if (t184 != -519903LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1009 = -1;
	uint16_t x1010 = 10964U;
	int16_t x1011 = -1;
	static volatile uint64_t x1012 = 478176008175735817LLU;
	static volatile uint64_t t185 = 7512418541LLU;

    t185 = ((x1009*(x1010-x1011))%x1012);

    if (t185 != 276055763031579605LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1015 = -20;
	int8_t x1016 = INT8_MAX;
	int32_t t186 = 17654;

    t186 = ((x1013*(x1014-x1015))%x1016);

    if (t186 != -89) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1018 = 38574584935608LLU;
	volatile uint32_t x1019 = 423U;
	uint64_t t187 = 79LLU;

    t187 = ((x1017*(x1018-x1019))%x1020);

    if (t187 != 18446705499124616431LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1021 = INT16_MIN;
	static int8_t x1022 = INT8_MIN;
	int16_t x1023 = INT16_MIN;
	uint32_t x1024 = UINT32_MAX;
	uint32_t t188 = 17U;

    t188 = ((x1021*(x1022-x1023))%x1024);

    if (t188 != 3225419776U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1025 = UINT32_MAX;
	volatile uint8_t x1026 = UINT8_MAX;
	uint32_t x1028 = 2108814175U;
	uint32_t t189 = 261U;

    t189 = ((x1025*(x1026-x1027))%x1028);

    if (t189 != 77338563U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1029 = INT16_MIN;
	int16_t x1030 = -1;
	volatile uint8_t x1031 = 1U;
	uint32_t x1032 = 214066U;
	volatile uint32_t t190 = 56U;

    t190 = ((x1029*(x1030-x1031))%x1032);

    if (t190 != 65536U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1038 = -1;
	static volatile int16_t x1039 = 2518;
	int64_t x1040 = -3919938LL;
	volatile int64_t t191 = 769872704573696LL;

    t191 = ((x1037*(x1038-x1039))%x1040);

    if (t191 != 322432LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x1041 = UINT32_MAX;
	int64_t x1044 = 307906139LL;
	int64_t t192 = -174958630580784436LL;

    t192 = ((x1041*(x1042-x1043))%x1044);

    if (t192 != 292154754LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1053 = -1;
	static int8_t x1055 = INT8_MIN;
	static volatile uint16_t x1056 = 1U;

    t193 = ((x1053*(x1054-x1055))%x1056);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1057 = 13719;
	int8_t x1058 = INT8_MAX;
	volatile uint32_t x1059 = 87556U;
	volatile uint64_t x1060 = 229LLU;
	uint64_t t194 = 61282LLU;

    t194 = ((x1057*(x1058-x1059))%x1060);

    if (t194 != 48LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1061 = 1U;
	int32_t x1062 = -1;
	int32_t x1063 = INT32_MAX;
	volatile int16_t x1064 = 1;
	static volatile int32_t t195 = 14;

    t195 = ((x1061*(x1062-x1063))%x1064);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1065 = 27631U;
	uint32_t x1066 = 895250U;
	uint8_t x1068 = 3U;
	uint32_t t196 = 1U;

    t196 = ((x1065*(x1066-x1067))%x1068);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1073 = -104;
	volatile uint64_t x1074 = 308LLU;
	volatile int32_t x1076 = INT32_MIN;
	static volatile uint64_t t197 = 953531520926LLU;

    t197 = ((x1073*(x1074-x1075))%x1076);

    if (t197 != 2147478760LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1081 = 498;
	int32_t x1082 = INT32_MIN;
	uint64_t x1083 = UINT64_MAX;
	int32_t x1084 = -3039;
	uint64_t t198 = 21224461049743LLU;

    t198 = ((x1081*(x1082-x1083))%x1084);

    if (t198 != 18446743004262695410LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1085 = 3U;
	uint64_t x1086 = 4533684330241686LLU;
	int8_t x1087 = INT8_MIN;
	int8_t x1088 = INT8_MIN;
	uint64_t t199 = 22794652683051LLU;

    t199 = ((x1085*(x1086-x1087))%x1088);

    if (t199 != 13601052990725442LLU) { NG(); } else { ; }
	
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

