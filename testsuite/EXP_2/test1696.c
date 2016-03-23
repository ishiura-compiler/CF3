
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

int64_t x4 = -1LL;
int64_t t0 = 3LL;
int16_t x12 = -1;
int8_t x17 = -19;
volatile uint16_t x18 = 329U;
uint32_t x51 = 2827035U;
volatile uint64_t x52 = 1071394LLU;
volatile int16_t x60 = -1;
uint64_t x61 = 70573920980169938LLU;
volatile int32_t t14 = 917533;
static int8_t x65 = INT8_MIN;
uint16_t x70 = 208U;
int16_t x74 = INT16_MAX;
uint16_t x76 = 204U;
int32_t x80 = -1;
volatile uint32_t t19 = 44009U;
static uint32_t x89 = 7U;
int16_t x94 = 0;
int64_t t22 = -474242901LL;
int8_t x110 = INT8_MIN;
static int16_t x111 = INT16_MAX;
volatile uint8_t x119 = 6U;
int64_t x120 = -1LL;
int64_t t25 = -577LL;
int16_t x121 = INT16_MIN;
static int8_t x122 = 51;
int64_t x129 = INT64_MAX;
int32_t t27 = 475568;
uint8_t x133 = 16U;
volatile int32_t x139 = 9929;
static volatile uint32_t x141 = UINT32_MAX;
int16_t x143 = INT16_MIN;
int64_t x156 = -1LL;
static int32_t x159 = INT32_MAX;
volatile uint64_t x163 = 154599LLU;
uint16_t x166 = 171U;
volatile int32_t t35 = -49795985;
static int8_t x170 = INT8_MIN;
uint64_t t36 = 680266490LLU;
int16_t x176 = -11;
int32_t x193 = -1696;
int32_t x200 = INT32_MAX;
volatile int32_t t43 = 31224403;
static volatile int16_t x214 = INT16_MAX;
static int8_t x218 = INT8_MIN;
int64_t x226 = INT64_MIN;
uint32_t x232 = UINT32_MAX;
volatile int32_t t50 = -148122970;
int8_t x250 = -19;
uint16_t x251 = 1U;
int16_t x253 = INT16_MIN;
int16_t x254 = INT16_MAX;
static int64_t t54 = 32843372792898034LL;
volatile int64_t x272 = -1LL;
int64_t x278 = INT64_MAX;
int64_t x288 = 41LL;
uint64_t x292 = 369693LLU;
uint16_t x293 = UINT16_MAX;
static uint16_t x300 = 6U;
volatile int8_t x303 = -57;
int32_t t63 = -744;
static uint64_t x309 = 859836615LLU;
int64_t x312 = -107118618LL;
int8_t x313 = INT8_MAX;
int8_t x324 = 2;
int32_t t66 = 820;
int32_t x327 = -1;
static int16_t x328 = INT16_MIN;
volatile int16_t x336 = 54;
int32_t x341 = 15600;
int8_t x350 = 0;
uint8_t x353 = UINT8_MAX;
uint64_t x361 = UINT64_MAX;
int64_t x362 = 2220405149661363LL;
int8_t x364 = INT8_MAX;
int8_t x365 = -1;
uint8_t x366 = UINT8_MAX;
int32_t t73 = -28;
static int16_t x372 = INT16_MIN;
int32_t x373 = -1;
volatile uint64_t t75 = 30992777840024LLU;
static int8_t x377 = 1;
int32_t x379 = 494590464;
uint64_t t77 = 33360974LLU;
int8_t x386 = INT8_MAX;
int8_t x388 = INT8_MIN;
static int32_t t78 = 9373;
volatile int16_t x391 = INT16_MIN;
uint8_t x397 = 2U;
int8_t x398 = INT8_MIN;
int32_t t80 = 246937;
volatile int32_t x408 = -16058217;
static int16_t x413 = INT16_MIN;
uint32_t x414 = 15352061U;
int32_t t86 = -110888;
int32_t x426 = 8658;
uint32_t x435 = UINT32_MAX;
int16_t x440 = INT16_MIN;
volatile uint8_t x445 = 31U;
int32_t x450 = INT32_MIN;
uint8_t x458 = 3U;
volatile int8_t x465 = INT8_MIN;
int16_t x471 = INT16_MIN;
int32_t t96 = 973;
uint16_t x477 = 121U;
static volatile int64_t x479 = INT64_MAX;
volatile int32_t t98 = -5294211;
volatile uint8_t x486 = UINT8_MAX;
int64_t t99 = -1679641714367592LL;
uint16_t x491 = 8U;
volatile int64_t t100 = -2248LL;
int16_t x496 = INT16_MIN;
volatile int16_t x498 = INT16_MIN;
uint64_t x502 = 255004LLU;
volatile int32_t t103 = 0;
uint16_t x508 = UINT16_MAX;
uint64_t x509 = UINT64_MAX;
uint16_t x512 = UINT16_MAX;
static volatile int16_t x514 = INT16_MIN;
volatile uint16_t x515 = 31994U;
int32_t x534 = -1;
int8_t x545 = -1;
int16_t x550 = INT16_MAX;
int32_t x551 = INT32_MIN;
static volatile int32_t t115 = -608924963;
uint16_t x560 = 5U;
static volatile int32_t t118 = 763692;
int32_t x572 = 1;
static uint16_t x575 = 72U;
uint32_t x584 = 1466U;
uint32_t t123 = 3U;
uint64_t x586 = 3116200970384293LLU;
int64_t t127 = -3194752730LL;
int8_t x606 = INT8_MIN;
uint8_t x608 = 3U;
int32_t t128 = 88;
int32_t x609 = INT32_MAX;
int64_t x611 = INT64_MIN;
int16_t x612 = INT16_MIN;
volatile int8_t x616 = INT8_MIN;
volatile int16_t x617 = INT16_MIN;
int8_t x626 = INT8_MIN;
volatile int32_t x629 = INT32_MIN;
int8_t x648 = INT8_MIN;
uint16_t x659 = 7U;
int64_t x663 = INT64_MIN;
int16_t x668 = INT16_MAX;
volatile uint8_t x672 = UINT8_MAX;
uint32_t x685 = UINT32_MAX;
int32_t x686 = INT32_MAX;
uint8_t x687 = 5U;
uint64_t x690 = 72405943LLU;
int64_t x691 = INT64_MAX;
int8_t x695 = INT8_MIN;
int8_t x702 = -1;
uint16_t x707 = 26482U;
volatile int16_t x711 = INT16_MAX;
static uint8_t x722 = UINT8_MAX;
int32_t x723 = 3027603;
uint64_t x743 = 19541LLU;
static volatile int16_t x744 = -13;
static volatile int16_t x749 = INT16_MIN;
uint16_t x751 = UINT16_MAX;
int16_t x753 = 744;
int8_t x758 = INT8_MAX;
int32_t t162 = -89337020;
static int8_t x773 = 7;
int16_t x775 = INT16_MIN;
int16_t x780 = -30;
int32_t t164 = 916301;
int16_t x787 = 0;
static int32_t t166 = -5;
int8_t x790 = INT8_MIN;
uint32_t x795 = UINT32_MAX;
volatile int64_t x799 = INT64_MIN;
volatile uint16_t x801 = 52U;
int32_t x803 = -300;
int8_t x805 = 1;
int16_t x807 = INT16_MIN;
uint16_t x808 = 22217U;
volatile int32_t t171 = 475;
int8_t x811 = 1;
static volatile uint16_t x813 = 7U;
volatile int64_t t173 = -3LL;
int32_t x817 = INT32_MIN;
volatile int32_t t174 = 0;
int64_t x821 = INT64_MAX;
int32_t x825 = -1;
static volatile int8_t x832 = -1;
static int32_t t177 = 793;
int32_t x837 = 2963;
volatile int8_t x845 = 4;
static int32_t x846 = 252;
uint8_t x853 = 4U;
uint16_t x862 = 9U;
int16_t x866 = INT16_MIN;
int8_t x874 = -1;
volatile uint64_t t186 = 446LLU;
volatile int64_t x879 = INT64_MIN;
int8_t x880 = INT8_MIN;
static int8_t x885 = 0;
int16_t x896 = -1;
volatile int16_t x898 = INT16_MIN;
volatile int16_t x906 = INT16_MIN;
uint64_t x908 = 8052479024119LLU;
uint64_t t193 = 139550694606204LLU;
volatile int16_t x912 = 0;
uint64_t x916 = UINT64_MAX;
int64_t x917 = 136491LL;
static volatile int8_t x922 = -7;
static int64_t x923 = 387571417809LL;
int64_t x929 = INT64_MAX;


void f0(void) {
    	int16_t x1 = 119;
	static volatile int32_t x2 = INT32_MAX;
	static int64_t x3 = INT64_MIN;

    t0 = ((x1<=(x2>x3))-x4);

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1115509313945LL;
	int16_t x6 = 73;
	static int64_t x7 = -689936847481LL;
	uint32_t x8 = 4838U;
	volatile uint32_t t1 = 1U;

    t1 = ((x5<=(x6>x7))-x8);

    if (t1 != 4294962459U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 2;
	volatile uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 1444641U;
	int32_t t2 = 3;

    t2 = ((x9<=(x10>x11))-x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = 0;
	volatile int16_t x14 = INT16_MIN;
	volatile int8_t x15 = INT8_MIN;
	uint8_t x16 = 1U;
	volatile int32_t t3 = 326460323;

    t3 = ((x13<=(x14>x15))-x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x19 = -768730;
	uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = -1613271;

    t4 = ((x17<=(x18>x19))-x20);

    if (t4 != -254) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	volatile int8_t x24 = -1;
	int32_t t5 = -586140;

    t5 = ((x21<=(x22>x23))-x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MAX;
	static int32_t x26 = -3;
	uint32_t x27 = 3752U;
	uint32_t x28 = 377U;
	uint32_t t6 = 59703126U;

    t6 = ((x25<=(x26>x27))-x28);

    if (t6 != 4294966919U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = UINT64_MAX;
	uint64_t x35 = 63024LLU;
	volatile int64_t x36 = 117371739LL;
	static volatile int64_t t7 = 2512414LL;

    t7 = ((x33<=(x34>x35))-x36);

    if (t7 != -117371739LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -1;
	static int16_t x38 = 2679;
	int64_t x39 = INT64_MAX;
	volatile int64_t x40 = -1LL;
	volatile int64_t t8 = -175624948847LL;

    t8 = ((x37<=(x38>x39))-x40);

    if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	static uint8_t x42 = 1U;
	uint64_t x43 = 318424113078564LLU;
	int64_t x44 = -347200939046031LL;
	int64_t t9 = -10LL;

    t9 = ((x41<=(x42>x43))-x44);

    if (t9 != 347200939046031LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	static int16_t x48 = 1;
	int32_t t10 = 22903493;

    t10 = ((x45<=(x46>x47))-x48);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = INT64_MAX;
	int8_t x50 = -1;
	static uint64_t t11 = 52206459961827732LLU;

    t11 = ((x49<=(x50>x51))-x52);

    if (t11 != 18446744073708480222LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = 0;
	uint32_t x54 = 16226U;
	static int64_t x55 = INT64_MIN;
	static int16_t x56 = -1;
	int32_t t12 = -299;

    t12 = ((x53<=(x54>x55))-x56);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 0;
	static volatile int32_t x58 = -341;
	uint64_t x59 = 4232998942LLU;
	int32_t t13 = 202294;

    t13 = ((x57<=(x58>x59))-x60);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x62 = 62149225920713LLU;
	int32_t x63 = INT32_MAX;
	uint8_t x64 = 69U;

    t14 = ((x61<=(x62>x63))-x64);

    if (t14 != -69) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x66 = -1LL;
	static uint16_t x67 = 24553U;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t15 = 17659;

    t15 = ((x65<=(x66>x67))-x68);

    if (t15 != 129) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -1LL;
	volatile uint64_t x71 = UINT64_MAX;
	int32_t x72 = INT32_MAX;
	int32_t t16 = 8187;

    t16 = ((x69<=(x70>x71))-x72);

    if (t16 != -2147483646) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = 28;
	static int8_t x75 = INT8_MAX;
	static int32_t t17 = 220521290;

    t17 = ((x73<=(x74>x75))-x76);

    if (t17 != -204) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = 57;
	volatile int64_t x78 = INT64_MIN;
	static int32_t x79 = -3;
	int32_t t18 = 3;

    t18 = ((x77<=(x78>x79))-x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = -1;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 2045U;
	uint32_t x88 = 65U;

    t19 = ((x85<=(x86>x87))-x88);

    if (t19 != 4294967232U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x90 = UINT16_MAX;
	static int16_t x91 = -798;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t20 = -3;

    t20 = ((x89<=(x90>x91))-x92);

    if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x93 = 4U;
	uint64_t x95 = UINT64_MAX;
	volatile int8_t x96 = INT8_MAX;
	int32_t t21 = 10975;

    t21 = ((x93<=(x94>x95))-x96);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = -788207;
	uint8_t x102 = 1U;
	int64_t x103 = 11371810404897LL;
	static int64_t x104 = INT64_MAX;

    t22 = ((x101<=(x102>x103))-x104);

    if (t22 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = -112181375;
	int32_t x106 = 8858402;
	uint32_t x107 = 1000935U;
	uint32_t x108 = 354064U;
	uint32_t t23 = 46109U;

    t23 = ((x105<=(x106>x107))-x108);

    if (t23 != 4294613233U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MAX;
	static uint64_t x112 = 7898LLU;
	uint64_t t24 = 387LLU;

    t24 = ((x109<=(x110>x111))-x112);

    if (t24 != 18446744073709543718LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x117 = INT32_MAX;
	volatile uint8_t x118 = 62U;

    t25 = ((x117<=(x118>x119))-x120);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x123 = -1;
	uint16_t x124 = 751U;
	static volatile int32_t t26 = 1013125919;

    t26 = ((x121<=(x122>x123))-x124);

    if (t26 != -750) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	uint8_t x132 = 1U;

    t27 = ((x129<=(x130>x131))-x132);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x134 = INT8_MIN;
	int64_t x135 = -201491LL;
	int64_t x136 = -1LL;
	volatile int64_t t28 = 126127028234729LL;

    t28 = ((x133<=(x134>x135))-x136);

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = -1;
	int64_t x138 = -1LL;
	int16_t x140 = INT16_MAX;
	static int32_t t29 = -679327;

    t29 = ((x137<=(x138>x139))-x140);

    if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x142 = -1LL;
	int32_t x144 = -796;
	int32_t t30 = -26876;

    t30 = ((x141<=(x142>x143))-x144);

    if (t30 != 796) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x145 = 2043969U;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = INT64_MAX;
	int64_t x148 = -1LL;
	int64_t t31 = 252LL;

    t31 = ((x145<=(x146>x147))-x148);

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x153 = -41;
	static volatile int64_t x154 = INT64_MAX;
	static uint16_t x155 = UINT16_MAX;
	volatile int64_t t32 = 212102153658969320LL;

    t32 = ((x153<=(x154>x155))-x156);

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = INT64_MIN;
	volatile int8_t x158 = -1;
	volatile int32_t x160 = 90537;
	static volatile int32_t t33 = 931736859;

    t33 = ((x157<=(x158>x159))-x160);

    if (t33 != -90536) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = 115083780034554LLU;
	int64_t x162 = INT64_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t34 = -3;

    t34 = ((x161<=(x162>x163))-x164);

    if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x165 = 0;
	uint8_t x167 = 12U;
	static int8_t x168 = -42;

    t35 = ((x165<=(x166>x167))-x168);

    if (t35 != 43) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x169 = INT16_MIN;
	volatile int64_t x171 = INT64_MIN;
	uint64_t x172 = 1661LLU;

    t36 = ((x169<=(x170>x171))-x172);

    if (t36 != 18446744073709549956LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x173 = INT32_MAX;
	int64_t x174 = 2002452331288LL;
	uint32_t x175 = 10471950U;
	int32_t t37 = -2763;

    t37 = ((x173<=(x174>x175))-x176);

    if (t37 != 11) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = 4952181287775689203LLU;
	uint64_t x178 = 1809494600LLU;
	int16_t x179 = INT16_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t38 = 155292;

    t38 = ((x177<=(x178>x179))-x180);

    if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x181 = 1028684829274LLU;
	volatile int16_t x182 = 1;
	static int64_t x183 = 1643031272128LL;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t39 = 1132460;

    t39 = ((x181<=(x182>x183))-x184);

    if (t39 != 32768) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x189 = -11210;
	volatile uint32_t x190 = 15U;
	static volatile uint8_t x191 = 3U;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t40 = 10U;

    t40 = ((x189<=(x190>x191))-x192);

    if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x194 = -1;
	static uint32_t x195 = 2880U;
	int16_t x196 = INT16_MIN;
	volatile int32_t t41 = 0;

    t41 = ((x193<=(x194>x195))-x196);

    if (t41 != 32769) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x197 = INT16_MIN;
	volatile int16_t x198 = INT16_MAX;
	uint16_t x199 = 26122U;
	volatile int32_t t42 = -277861;

    t42 = ((x197<=(x198>x199))-x200);

    if (t42 != -2147483646) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -7;
	int64_t x203 = -5776LL;
	int8_t x204 = INT8_MIN;

    t43 = ((x201<=(x202>x203))-x204);

    if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = 226LLU;
	uint64_t x208 = 6835755LLU;
	uint64_t t44 = 158818LLU;

    t44 = ((x205<=(x206>x207))-x208);

    if (t44 != 18446744073702715861LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MAX;
	volatile uint32_t x215 = 5213379U;
	static uint16_t x216 = 37U;
	int32_t t45 = 58313;

    t45 = ((x213<=(x214>x215))-x216);

    if (t45 != -37) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x217 = -41;
	int8_t x219 = 14;
	uint8_t x220 = UINT8_MAX;
	int32_t t46 = -18;

    t46 = ((x217<=(x218>x219))-x220);

    if (t46 != -254) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x225 = -5;
	static uint8_t x227 = 73U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t47 = 5525850;

    t47 = ((x225<=(x226>x227))-x228);

    if (t47 != -254) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x229 = -1;
	int64_t x230 = INT64_MIN;
	volatile uint16_t x231 = 162U;
	uint32_t t48 = 350130U;

    t48 = ((x229<=(x230>x231))-x232);

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x241 = 4U;
	static int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	volatile int32_t t49 = 442541;

    t49 = ((x241<=(x242>x243))-x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x245 = -1;
	static volatile int64_t x246 = INT64_MIN;
	static int32_t x247 = INT32_MAX;
	int32_t x248 = -1;

    t50 = ((x245<=(x246>x247))-x248);

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x249 = 130026475U;
	int16_t x252 = -4;
	int32_t t51 = 349132523;

    t51 = ((x249<=(x250>x251))-x252);

    if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x255 = UINT64_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t52 = -8;

    t52 = ((x253<=(x254>x255))-x256);

    if (t52 != -65534) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x257 = UINT32_MAX;
	uint16_t x258 = 40U;
	int64_t x259 = -1LL;
	volatile int16_t x260 = -1;
	volatile int32_t t53 = -66703169;

    t53 = ((x257<=(x258>x259))-x260);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x265 = -1;
	static int32_t x266 = INT32_MIN;
	int32_t x267 = 132;
	int64_t x268 = 414LL;

    t54 = ((x265<=(x266>x267))-x268);

    if (t54 != -413LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = -1;
	int16_t x270 = INT16_MAX;
	int64_t x271 = -3440493971513419LL;
	int64_t t55 = -807768926150702LL;

    t55 = ((x269<=(x270>x271))-x272);

    if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x273 = 6;
	uint8_t x274 = 51U;
	int32_t x275 = -216555;
	uint64_t x276 = 1097LLU;
	volatile uint64_t t56 = 388387586296LLU;

    t56 = ((x273<=(x274>x275))-x276);

    if (t56 != 18446744073709550519LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x277 = -120217977762LL;
	int32_t x279 = INT32_MIN;
	uint64_t x280 = UINT64_MAX;
	uint64_t t57 = 11020733859033LLU;

    t57 = ((x277<=(x278>x279))-x280);

    if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x285 = -1;
	int32_t x286 = INT32_MIN;
	int64_t x287 = -1LL;
	static volatile int64_t t58 = -1923086211LL;

    t58 = ((x285<=(x286>x287))-x288);

    if (t58 != -40LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x289 = -1;
	int16_t x290 = INT16_MAX;
	static int64_t x291 = -1LL;
	volatile uint64_t t59 = 1060045657237LLU;

    t59 = ((x289<=(x290>x291))-x292);

    if (t59 != 18446744073709181924LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x294 = UINT32_MAX;
	static volatile int16_t x295 = INT16_MAX;
	int8_t x296 = -1;
	int32_t t60 = -38666888;

    t60 = ((x293<=(x294>x295))-x296);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x297 = -1;
	static int64_t x298 = 3114720768662177LL;
	static uint8_t x299 = 56U;
	int32_t t61 = 57775918;

    t61 = ((x297<=(x298>x299))-x300);

    if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x301 = 4005U;
	volatile uint8_t x302 = 47U;
	volatile uint32_t x304 = 5U;
	uint32_t t62 = 351769U;

    t62 = ((x301<=(x302>x303))-x304);

    if (t62 != 4294967291U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x305 = 1974LLU;
	int8_t x306 = 1;
	uint32_t x307 = UINT32_MAX;
	volatile int16_t x308 = -10607;

    t63 = ((x305<=(x306>x307))-x308);

    if (t63 != 10607) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	static volatile int64_t t64 = -884957309361LL;

    t64 = ((x309<=(x310>x311))-x312);

    if (t64 != 107118618LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x314 = -1;
	int8_t x315 = 0;
	uint16_t x316 = 5U;
	volatile int32_t t65 = 0;

    t65 = ((x313<=(x314>x315))-x316);

    if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	volatile uint32_t x323 = 28639359U;

    t66 = ((x321<=(x322>x323))-x324);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x325 = 40U;
	uint8_t x326 = 10U;
	volatile int32_t t67 = -240;

    t67 = ((x325<=(x326>x327))-x328);

    if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x333 = -819;
	int64_t x334 = -99LL;
	int32_t x335 = -1;
	static volatile int32_t t68 = -2116728;

    t68 = ((x333<=(x334>x335))-x336);

    if (t68 != -53) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x342 = UINT8_MAX;
	int64_t x343 = -1LL;
	int8_t x344 = INT8_MIN;
	int32_t t69 = -17;

    t69 = ((x341<=(x342>x343))-x344);

    if (t69 != 128) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x349 = -1144069861175661LL;
	volatile int32_t x351 = 0;
	static int32_t x352 = INT32_MAX;
	static volatile int32_t t70 = 1029787275;

    t70 = ((x349<=(x350>x351))-x352);

    if (t70 != -2147483646) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x354 = 3U;
	int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;
	static int32_t t71 = 15063728;

    t71 = ((x353<=(x354>x355))-x356);

    if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x363 = UINT8_MAX;
	volatile int32_t t72 = -901;

    t72 = ((x361<=(x362>x363))-x364);

    if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = -1;

    t73 = ((x365<=(x366>x367))-x368);

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x369 = -28156LL;
	int64_t x370 = INT64_MAX;
	int32_t x371 = 29528697;
	volatile int32_t t74 = 16282;

    t74 = ((x369<=(x370>x371))-x372);

    if (t74 != 32769) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x374 = 14732U;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 13041242LLU;

    t75 = ((x373<=(x374>x375))-x376);

    if (t75 != 18446744073696510375LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x378 = UINT16_MAX;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t76 = 37623U;

    t76 = ((x377<=(x378>x379))-x380);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x381 = INT16_MAX;
	volatile uint8_t x382 = 10U;
	int64_t x383 = INT64_MIN;
	static uint64_t x384 = 7285476414444LLU;

    t77 = ((x381<=(x382>x383))-x384);

    if (t77 != 18446736788233137172LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x385 = 61U;
	volatile int64_t x387 = -1LL;

    t78 = ((x385<=(x386>x387))-x388);

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x389 = INT8_MIN;
	volatile int8_t x390 = INT8_MIN;
	static uint64_t x392 = 10LLU;
	volatile uint64_t t79 = 6247225LLU;

    t79 = ((x389<=(x390>x391))-x392);

    if (t79 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x399 = INT8_MIN;
	static int32_t x400 = -3285701;

    t80 = ((x397<=(x398>x399))-x400);

    if (t80 != 3285701) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	static uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MAX;
	int16_t x404 = INT16_MIN;
	volatile int32_t t81 = -125;

    t81 = ((x401<=(x402>x403))-x404);

    if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x406 = -561LL;
	int8_t x407 = INT8_MIN;
	volatile int32_t t82 = -88709;

    t82 = ((x405<=(x406>x407))-x408);

    if (t82 != 16058217) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x409 = UINT32_MAX;
	uint8_t x410 = 26U;
	static int8_t x411 = INT8_MAX;
	int32_t x412 = INT32_MAX;
	volatile int32_t t83 = -508;

    t83 = ((x409<=(x410>x411))-x412);

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x415 = -1;
	uint16_t x416 = 11U;
	volatile int32_t t84 = -15147687;

    t84 = ((x413<=(x414>x415))-x416);

    if (t84 != -10) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x417 = -1;
	int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t85 = 6U;

    t85 = ((x417<=(x418>x419))-x420);

    if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x421 = INT8_MIN;
	volatile int64_t x422 = INT64_MIN;
	uint8_t x423 = 2U;
	uint16_t x424 = UINT16_MAX;

    t86 = ((x421<=(x422>x423))-x424);

    if (t86 != -65534) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x425 = -31;
	int64_t x427 = INT64_MIN;
	int8_t x428 = INT8_MAX;
	volatile int32_t t87 = 12128584;

    t87 = ((x425<=(x426>x427))-x428);

    if (t87 != -126) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = -10;
	int16_t x431 = 11;
	volatile int16_t x432 = -1;
	int32_t t88 = 23994949;

    t88 = ((x429<=(x430>x431))-x432);

    if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x433 = -1;
	int16_t x434 = INT16_MIN;
	static int32_t x436 = -7294;
	volatile int32_t t89 = -107;

    t89 = ((x433<=(x434>x435))-x436);

    if (t89 != 7295) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x437 = -49LL;
	int8_t x438 = INT8_MIN;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t t90 = -4;

    t90 = ((x437<=(x438>x439))-x440);

    if (t90 != 32769) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x446 = -1;
	static uint64_t x447 = 44LLU;
	int32_t x448 = -1;
	static volatile int32_t t91 = -216;

    t91 = ((x445<=(x446>x447))-x448);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x449 = 39LLU;
	int32_t x451 = INT32_MAX;
	int16_t x452 = 16;
	volatile int32_t t92 = -45;

    t92 = ((x449<=(x450>x451))-x452);

    if (t92 != -16) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x457 = -1LL;
	volatile uint32_t x459 = 1461946U;
	volatile int8_t x460 = INT8_MAX;
	int32_t t93 = -11;

    t93 = ((x457<=(x458>x459))-x460);

    if (t93 != -126) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x461 = INT8_MIN;
	volatile int8_t x462 = -1;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 259U;
	static volatile uint32_t t94 = 30U;

    t94 = ((x461<=(x462>x463))-x464);

    if (t94 != 4294967038U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x466 = 528697826U;
	int64_t x467 = INT64_MIN;
	uint8_t x468 = UINT8_MAX;
	int32_t t95 = 1306;

    t95 = ((x465<=(x466>x467))-x468);

    if (t95 != -254) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x469 = -4114496626165232708LL;
	static int64_t x470 = 3876804LL;
	uint8_t x472 = 1U;

    t96 = ((x469<=(x470>x471))-x472);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x478 = INT8_MAX;
	int16_t x480 = -1;
	int32_t t97 = 1;

    t97 = ((x477<=(x478>x479))-x480);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x481 = 1U;
	static uint64_t x482 = 456113LLU;
	volatile uint8_t x483 = 52U;
	volatile int16_t x484 = 18;

    t98 = ((x481<=(x482>x483))-x484);

    if (t98 != -17) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x485 = -1;
	static volatile uint32_t x487 = 389597745U;
	int64_t x488 = INT64_MAX;

    t99 = ((x485<=(x486>x487))-x488);

    if (t99 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x489 = INT64_MIN;
	uint32_t x490 = 1U;
	int64_t x492 = 1002539798052LL;

    t100 = ((x489<=(x490>x491))-x492);

    if (t100 != -1002539798051LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x493 = 100U;
	static int8_t x494 = INT8_MIN;
	int64_t x495 = 1501023029361LL;
	static int32_t t101 = -4050;

    t101 = ((x493<=(x494>x495))-x496);

    if (t101 != 32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x497 = INT32_MIN;
	uint64_t x499 = 502421082197LLU;
	int32_t x500 = -13042;
	volatile int32_t t102 = 9748491;

    t102 = ((x497<=(x498>x499))-x500);

    if (t102 != 13043) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x501 = -13916646179554475LL;
	volatile int8_t x503 = INT8_MAX;
	uint16_t x504 = 2U;

    t103 = ((x501<=(x502>x503))-x504);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x505 = INT32_MIN;
	uint8_t x506 = UINT8_MAX;
	int32_t x507 = INT32_MIN;
	volatile int32_t t104 = 238654;

    t104 = ((x505<=(x506>x507))-x508);

    if (t104 != -65534) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x510 = -1;
	uint8_t x511 = 76U;
	int32_t t105 = -136360;

    t105 = ((x509<=(x510>x511))-x512);

    if (t105 != -65535) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = -25;
	uint16_t x516 = 31176U;
	int32_t t106 = 879028897;

    t106 = ((x513<=(x514>x515))-x516);

    if (t106 != -31175) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x517 = UINT32_MAX;
	volatile int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	volatile int32_t t107 = -2;

    t107 = ((x517<=(x518>x519))-x520);

    if (t107 != 128) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x521 = 363088850LL;
	int32_t x522 = INT32_MIN;
	int8_t x523 = -42;
	int64_t x524 = -505064079LL;
	int64_t t108 = 694LL;

    t108 = ((x521<=(x522>x523))-x524);

    if (t108 != 505064079LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x525 = -460;
	static int8_t x526 = -1;
	uint16_t x527 = 2U;
	int16_t x528 = INT16_MIN;
	int32_t t109 = -1;

    t109 = ((x525<=(x526>x527))-x528);

    if (t109 != 32769) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x529 = 79;
	static int8_t x530 = INT8_MIN;
	static int8_t x531 = INT8_MIN;
	static volatile uint16_t x532 = 4U;
	int32_t t110 = 7433744;

    t110 = ((x529<=(x530>x531))-x532);

    if (t110 != -4) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x533 = 52U;
	static int64_t x535 = 5LL;
	int16_t x536 = -1;
	int32_t t111 = 3929;

    t111 = ((x533<=(x534>x535))-x536);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x537 = -1LL;
	int64_t x538 = INT64_MAX;
	static volatile uint16_t x539 = 6406U;
	uint32_t x540 = 26274198U;
	uint32_t t112 = 59395U;

    t112 = ((x537<=(x538>x539))-x540);

    if (t112 != 4268693099U) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x541 = INT16_MIN;
	uint16_t x542 = UINT16_MAX;
	int64_t x543 = 6545544745LL;
	uint16_t x544 = 82U;
	volatile int32_t t113 = -100099;

    t113 = ((x541<=(x542>x543))-x544);

    if (t113 != -81) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x546 = -100470169986824640LL;
	int16_t x547 = -1;
	static volatile uint64_t x548 = 59258LLU;
	uint64_t t114 = 485695560728LLU;

    t114 = ((x545<=(x546>x547))-x548);

    if (t114 != 18446744073709492359LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x549 = INT64_MIN;
	static int16_t x552 = -13;

    t115 = ((x549<=(x550>x551))-x552);

    if (t115 != 14) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x553 = 135;
	int64_t x554 = -10032174721697053LL;
	volatile int32_t x555 = INT32_MIN;
	uint64_t x556 = UINT64_MAX;
	static uint64_t t116 = 43666629194595829LLU;

    t116 = ((x553<=(x554>x555))-x556);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x557 = 4;
	int64_t x558 = INT64_MAX;
	int32_t x559 = -50305;
	int32_t t117 = -665;

    t117 = ((x557<=(x558>x559))-x560);

    if (t117 != -5) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x561 = 15;
	volatile uint64_t x562 = UINT64_MAX;
	int32_t x563 = 12537425;
	int16_t x564 = INT16_MIN;

    t118 = ((x561<=(x562>x563))-x564);

    if (t118 != 32768) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x565 = -13900;
	volatile int64_t x566 = -1LL;
	volatile int16_t x567 = -1;
	int8_t x568 = -1;
	volatile int32_t t119 = -4290;

    t119 = ((x565<=(x566>x567))-x568);

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x570 = -173584916;
	int8_t x571 = -1;
	int32_t t120 = -13724023;

    t120 = ((x569<=(x570>x571))-x572);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x573 = -61;
	static uint16_t x574 = 2472U;
	volatile int16_t x576 = INT16_MAX;
	static volatile int32_t t121 = 1;

    t121 = ((x573<=(x574>x575))-x576);

    if (t121 != -32766) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x577 = INT32_MAX;
	int64_t x578 = -5LL;
	static uint32_t x579 = 3771089U;
	uint16_t x580 = 3U;
	volatile int32_t t122 = -70322;

    t122 = ((x577<=(x578>x579))-x580);

    if (t122 != -3) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x581 = -75502632;
	int8_t x582 = INT8_MIN;
	int64_t x583 = -616LL;

    t123 = ((x581<=(x582>x583))-x584);

    if (t123 != 4294965831U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x585 = -1;
	int32_t x587 = 1386;
	int8_t x588 = INT8_MIN;
	int32_t t124 = 359890490;

    t124 = ((x585<=(x586>x587))-x588);

    if (t124 != 129) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x589 = 1;
	uint32_t x590 = 14U;
	int16_t x591 = 3389;
	int8_t x592 = INT8_MAX;
	int32_t t125 = -1360976;

    t125 = ((x589<=(x590>x591))-x592);

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x593 = 1;
	int32_t x594 = INT32_MAX;
	int16_t x595 = -83;
	int8_t x596 = INT8_MAX;
	int32_t t126 = -31;

    t126 = ((x593<=(x594>x595))-x596);

    if (t126 != -126) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x597 = 30LLU;
	uint16_t x598 = UINT16_MAX;
	uint8_t x599 = 18U;
	volatile int64_t x600 = INT64_MAX;

    t127 = ((x597<=(x598>x599))-x600);

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x605 = INT8_MIN;
	volatile int8_t x607 = 4;

    t128 = ((x605<=(x606>x607))-x608);

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x610 = INT8_MAX;
	int32_t t129 = -1;

    t129 = ((x609<=(x610>x611))-x612);

    if (t129 != 32768) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MAX;
	int32_t x615 = -189349;
	volatile int32_t t130 = 508482007;

    t130 = ((x613<=(x614>x615))-x616);

    if (t130 != 129) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x618 = 1706397928746286083LLU;
	static int64_t x619 = INT64_MIN;
	static volatile uint64_t x620 = 1015578845521523531LLU;
	uint64_t t131 = 8087604LLU;

    t131 = ((x617<=(x618>x619))-x620);

    if (t131 != 17431165228188028086LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x621 = -3156558;
	int8_t x622 = INT8_MIN;
	uint64_t x623 = 624993932469060795LLU;
	int16_t x624 = 347;
	static int32_t t132 = -1675102;

    t132 = ((x621<=(x622>x623))-x624);

    if (t132 != -346) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x625 = INT8_MIN;
	static int64_t x627 = 65892594968723LL;
	uint8_t x628 = 2U;
	int32_t t133 = 22832;

    t133 = ((x625<=(x626>x627))-x628);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x630 = 169U;
	uint64_t x631 = 5368049659855LLU;
	static uint8_t x632 = 0U;
	int32_t t134 = -93;

    t134 = ((x629<=(x630>x631))-x632);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x633 = 1063U;
	static volatile uint16_t x634 = 0U;
	volatile int32_t x635 = -1;
	int8_t x636 = -13;
	static int32_t t135 = -37599191;

    t135 = ((x633<=(x634>x635))-x636);

    if (t135 != 13) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -6;
	int32_t t136 = 218;

    t136 = ((x645<=(x646>x647))-x648);

    if (t136 != 129) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x649 = INT8_MAX;
	int8_t x650 = 15;
	volatile int16_t x651 = INT16_MIN;
	uint16_t x652 = UINT16_MAX;
	static volatile int32_t t137 = -939636109;

    t137 = ((x649<=(x650>x651))-x652);

    if (t137 != -65535) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x657 = -1;
	uint16_t x658 = 29U;
	int8_t x660 = 27;
	volatile int32_t t138 = -5;

    t138 = ((x657<=(x658>x659))-x660);

    if (t138 != -26) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x661 = 1;
	static int8_t x662 = 6;
	volatile int16_t x664 = INT16_MAX;
	volatile int32_t t139 = 74541;

    t139 = ((x661<=(x662>x663))-x664);

    if (t139 != -32766) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x665 = UINT64_MAX;
	uint16_t x666 = 186U;
	static int32_t x667 = -3792;
	int32_t t140 = 12342023;

    t140 = ((x665<=(x666>x667))-x668);

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x669 = INT8_MIN;
	int8_t x670 = INT8_MAX;
	uint16_t x671 = UINT16_MAX;
	volatile int32_t t141 = -1;

    t141 = ((x669<=(x670>x671))-x672);

    if (t141 != -254) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x673 = INT64_MIN;
	int16_t x674 = INT16_MAX;
	int32_t x675 = INT32_MAX;
	int32_t x676 = 53360;
	static int32_t t142 = 1406;

    t142 = ((x673<=(x674>x675))-x676);

    if (t142 != -53359) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x681 = UINT16_MAX;
	static int8_t x682 = 0;
	int32_t x683 = INT32_MAX;
	uint64_t x684 = 821909791898LLU;
	volatile uint64_t t143 = 17095739964604LLU;

    t143 = ((x681<=(x682>x683))-x684);

    if (t143 != 18446743251799759718LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x688 = 1;
	volatile int32_t t144 = -438;

    t144 = ((x685<=(x686>x687))-x688);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x689 = INT32_MIN;
	int16_t x692 = -1;
	volatile int32_t t145 = -8526566;

    t145 = ((x689<=(x690>x691))-x692);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x693 = INT8_MIN;
	int32_t x694 = -1;
	volatile int32_t x696 = 140;
	volatile int32_t t146 = 11137336;

    t146 = ((x693<=(x694>x695))-x696);

    if (t146 != -139) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x697 = 1;
	static uint32_t x698 = UINT32_MAX;
	int16_t x699 = INT16_MIN;
	int16_t x700 = 1;
	volatile int32_t t147 = -281268;

    t147 = ((x697<=(x698>x699))-x700);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x701 = 896583LLU;
	uint32_t x703 = 2003858677U;
	uint64_t x704 = 503518542425LLU;
	volatile uint64_t t148 = 499626LLU;

    t148 = ((x701<=(x702>x703))-x704);

    if (t148 != 18446743570191009191LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x705 = -1;
	int32_t x706 = -245745497;
	int16_t x708 = -1;
	volatile int32_t t149 = -3;

    t149 = ((x705<=(x706>x707))-x708);

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x709 = 28U;
	static volatile uint8_t x710 = UINT8_MAX;
	volatile int64_t x712 = 19394LL;
	static int64_t t150 = 1131566543772314LL;

    t150 = ((x709<=(x710>x711))-x712);

    if (t150 != -19394LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x713 = 306LL;
	int32_t x714 = INT32_MIN;
	static int64_t x715 = INT64_MAX;
	int32_t x716 = -1;
	volatile int32_t t151 = 1190256;

    t151 = ((x713<=(x714>x715))-x716);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x717 = 34;
	int16_t x718 = 80;
	int64_t x719 = 2657753010009213557LL;
	int64_t x720 = 227143495LL;
	static volatile int64_t t152 = -28900470LL;

    t152 = ((x717<=(x718>x719))-x720);

    if (t152 != -227143495LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x721 = INT64_MAX;
	int32_t x724 = -1;
	int32_t t153 = -264578650;

    t153 = ((x721<=(x722>x723))-x724);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x725 = INT32_MAX;
	static int32_t x726 = -5509525;
	int8_t x727 = 1;
	volatile int8_t x728 = INT8_MAX;
	int32_t t154 = -1;

    t154 = ((x725<=(x726>x727))-x728);

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x729 = 0U;
	uint16_t x730 = UINT16_MAX;
	volatile int64_t x731 = 1661474132857184LL;
	volatile int8_t x732 = INT8_MIN;
	volatile int32_t t155 = 14151102;

    t155 = ((x729<=(x730>x731))-x732);

    if (t155 != 129) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x737 = -1;
	volatile int32_t x738 = INT32_MAX;
	uint32_t x739 = 243U;
	static int32_t x740 = INT32_MAX;
	volatile int32_t t156 = -213;

    t156 = ((x737<=(x738>x739))-x740);

    if (t156 != -2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x741 = -1;
	static int8_t x742 = INT8_MIN;
	int32_t t157 = -777275181;

    t157 = ((x741<=(x742>x743))-x744);

    if (t157 != 14) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x750 = UINT32_MAX;
	int64_t x752 = INT64_MAX;
	int64_t t158 = -3455033LL;

    t158 = ((x749<=(x750>x751))-x752);

    if (t158 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x754 = 33U;
	uint64_t x755 = 1449083448474LLU;
	volatile int8_t x756 = INT8_MIN;
	volatile int32_t t159 = 13;

    t159 = ((x753<=(x754>x755))-x756);

    if (t159 != 128) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x757 = -1;
	int8_t x759 = 13;
	uint64_t x760 = UINT64_MAX;
	volatile uint64_t t160 = 118746777LLU;

    t160 = ((x757<=(x758>x759))-x760);

    if (t160 != 2LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x761 = INT16_MIN;
	uint64_t x762 = 70054LLU;
	uint64_t x763 = 51193464996LLU;
	int32_t x764 = INT32_MAX;
	volatile int32_t t161 = -2;

    t161 = ((x761<=(x762>x763))-x764);

    if (t161 != -2147483646) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x765 = INT64_MIN;
	uint8_t x766 = 118U;
	int16_t x767 = INT16_MAX;
	int16_t x768 = -3637;

    t162 = ((x765<=(x766>x767))-x768);

    if (t162 != 3638) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x774 = UINT16_MAX;
	volatile uint32_t x776 = 1224U;
	volatile uint32_t t163 = 1176829709U;

    t163 = ((x773<=(x774>x775))-x776);

    if (t163 != 4294966072U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x777 = INT8_MAX;
	volatile int32_t x778 = -2407;
	volatile int16_t x779 = INT16_MIN;

    t164 = ((x777<=(x778>x779))-x780);

    if (t164 != 30) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x781 = 1U;
	int32_t x782 = -1;
	uint16_t x783 = 781U;
	int8_t x784 = INT8_MAX;
	volatile int32_t t165 = -3;

    t165 = ((x781<=(x782>x783))-x784);

    if (t165 != -127) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x785 = -29;
	static int8_t x786 = INT8_MIN;
	int16_t x788 = INT16_MIN;

    t166 = ((x785<=(x786>x787))-x788);

    if (t166 != 32769) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x789 = INT32_MAX;
	uint16_t x791 = 9775U;
	uint16_t x792 = 43U;
	int32_t t167 = -133294514;

    t167 = ((x789<=(x790>x791))-x792);

    if (t167 != -43) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x793 = -954;
	static volatile uint64_t x794 = UINT64_MAX;
	uint64_t x796 = 255830048459LLU;
	uint64_t t168 = 194541901LLU;

    t168 = ((x793<=(x794>x795))-x796);

    if (t168 != 18446743817879503158LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x797 = INT32_MIN;
	uint16_t x798 = UINT16_MAX;
	int64_t x800 = INT64_MAX;
	int64_t t169 = 8234432000894LL;

    t169 = ((x797<=(x798>x799))-x800);

    if (t169 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x802 = 6373363U;
	volatile int16_t x804 = INT16_MAX;
	int32_t t170 = -61;

    t170 = ((x801<=(x802>x803))-x804);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x806 = 23U;

    t171 = ((x805<=(x806>x807))-x808);

    if (t171 != -22216) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x809 = -1;
	int64_t x810 = INT64_MIN;
	uint16_t x812 = 216U;
	int32_t t172 = -7605;

    t172 = ((x809<=(x810>x811))-x812);

    if (t172 != -215) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x814 = INT64_MAX;
	int16_t x815 = 177;
	int64_t x816 = -1LL;

    t173 = ((x813<=(x814>x815))-x816);

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x818 = 1758183686273083LLU;
	int8_t x819 = -1;
	volatile int16_t x820 = INT16_MAX;

    t174 = ((x817<=(x818>x819))-x820);

    if (t174 != -32766) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x822 = 31598282512644LL;
	int16_t x823 = -57;
	static int32_t x824 = -26;
	volatile int32_t t175 = 326;

    t175 = ((x821<=(x822>x823))-x824);

    if (t175 != 26) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x826 = -182208151;
	int64_t x827 = 4303769742890684012LL;
	int64_t x828 = 3667LL;
	static int64_t t176 = -1LL;

    t176 = ((x825<=(x826>x827))-x828);

    if (t176 != -3666LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x829 = INT16_MIN;
	uint8_t x830 = 2U;
	static int8_t x831 = INT8_MIN;

    t177 = ((x829<=(x830>x831))-x832);

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x838 = -1;
	volatile int32_t x839 = INT32_MIN;
	int64_t x840 = -1LL;
	static int64_t t178 = 48LL;

    t178 = ((x837<=(x838>x839))-x840);

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x847 = UINT32_MAX;
	volatile int32_t x848 = -1863514;
	static int32_t t179 = 29;

    t179 = ((x845<=(x846>x847))-x848);

    if (t179 != 1863514) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x849 = 57192LL;
	int8_t x850 = INT8_MIN;
	volatile uint16_t x851 = 30U;
	volatile uint8_t x852 = 14U;
	volatile int32_t t180 = -1740;

    t180 = ((x849<=(x850>x851))-x852);

    if (t180 != -14) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x854 = INT32_MIN;
	int64_t x855 = INT64_MIN;
	int32_t x856 = -1;
	volatile int32_t t181 = -81036278;

    t181 = ((x853<=(x854>x855))-x856);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x857 = -1;
	int8_t x858 = INT8_MAX;
	int16_t x859 = INT16_MAX;
	int32_t x860 = -3844;
	static int32_t t182 = -130494706;

    t182 = ((x857<=(x858>x859))-x860);

    if (t182 != 3845) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x861 = INT64_MAX;
	int16_t x863 = INT16_MIN;
	volatile uint8_t x864 = 1U;
	volatile int32_t t183 = -3684;

    t183 = ((x861<=(x862>x863))-x864);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x865 = -1;
	int32_t x867 = -1;
	static int8_t x868 = INT8_MAX;
	static volatile int32_t t184 = -1499843;

    t184 = ((x865<=(x866>x867))-x868);

    if (t184 != -126) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x869 = -146;
	volatile int16_t x870 = -1;
	static int32_t x871 = INT32_MIN;
	uint32_t x872 = 283U;
	volatile uint32_t t185 = 7213U;

    t185 = ((x869<=(x870>x871))-x872);

    if (t185 != 4294967014U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x873 = 117092404U;
	volatile int16_t x875 = INT16_MIN;
	static uint64_t x876 = UINT64_MAX;

    t186 = ((x873<=(x874>x875))-x876);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x877 = INT16_MIN;
	static uint8_t x878 = 9U;
	volatile int32_t t187 = -445;

    t187 = ((x877<=(x878>x879))-x880);

    if (t187 != 129) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x886 = 8181LL;
	static int64_t x887 = 419333945318LL;
	int64_t x888 = -590941966LL;
	static volatile int64_t t188 = -37995903318LL;

    t188 = ((x885<=(x886>x887))-x888);

    if (t188 != 590941967LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x889 = INT8_MIN;
	volatile int64_t x890 = 2391849404LL;
	volatile int64_t x891 = 33526946LL;
	int8_t x892 = INT8_MIN;
	int32_t t189 = 667;

    t189 = ((x889<=(x890>x891))-x892);

    if (t189 != 129) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x893 = INT16_MIN;
	int8_t x894 = INT8_MIN;
	int64_t x895 = INT64_MIN;
	int32_t t190 = -10289305;

    t190 = ((x893<=(x894>x895))-x896);

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x897 = INT16_MAX;
	static volatile int16_t x899 = INT16_MAX;
	int32_t x900 = INT32_MAX;
	int32_t t191 = 1003674480;

    t191 = ((x897<=(x898>x899))-x900);

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x901 = 894738143U;
	volatile uint16_t x902 = 33U;
	uint16_t x903 = UINT16_MAX;
	int64_t x904 = -6985316184LL;
	int64_t t192 = 0LL;

    t192 = ((x901<=(x902>x903))-x904);

    if (t192 != 6985316184LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x905 = 12;
	volatile int16_t x907 = INT16_MIN;

    t193 = ((x905<=(x906>x907))-x908);

    if (t193 != 18446736021230527497LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x909 = 29U;
	volatile int64_t x910 = -1LL;
	uint64_t x911 = UINT64_MAX;
	int32_t t194 = 55;

    t194 = ((x909<=(x910>x911))-x912);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x913 = 3691;
	volatile int8_t x914 = 25;
	int64_t x915 = -49488824777LL;
	uint64_t t195 = 4679204480853535830LLU;

    t195 = ((x913<=(x914>x915))-x916);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x918 = INT8_MAX;
	uint16_t x919 = 4U;
	uint16_t x920 = 14121U;
	int32_t t196 = -46;

    t196 = ((x917<=(x918>x919))-x920);

    if (t196 != -14121) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x921 = UINT16_MAX;
	uint32_t x924 = 49865457U;
	uint32_t t197 = 122152392U;

    t197 = ((x921<=(x922>x923))-x924);

    if (t197 != 4245101839U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x925 = INT16_MAX;
	int32_t x926 = INT32_MIN;
	static int64_t x927 = INT64_MIN;
	int32_t x928 = 0;
	static volatile int32_t t198 = -23;

    t198 = ((x925<=(x926>x927))-x928);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x930 = 0;
	volatile int16_t x931 = INT16_MIN;
	int8_t x932 = -1;
	static int32_t t199 = 21576183;

    t199 = ((x929<=(x930>x931))-x932);

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

