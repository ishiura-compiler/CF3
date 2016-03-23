
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

static int16_t x2 = -598;
int64_t x6 = INT64_MIN;
int16_t x14 = -13711;
int32_t t3 = 523118;
int8_t x23 = INT8_MIN;
uint64_t x28 = UINT64_MAX;
int64_t x32 = INT64_MIN;
uint32_t x35 = 1U;
uint64_t x36 = UINT64_MAX;
volatile uint64_t x41 = UINT64_MAX;
static int16_t x44 = INT16_MAX;
uint64_t t10 = 466495575902335LLU;
volatile int16_t x46 = 5454;
int8_t x48 = 49;
int8_t x53 = -1;
volatile uint64_t x54 = 22214121834LLU;
int32_t x55 = INT32_MIN;
volatile uint64_t t13 = 159900131515007LLU;
uint32_t x60 = 122U;
static int32_t x62 = -652868;
uint64_t x76 = UINT64_MAX;
static volatile uint64_t t17 = 226888339846018LLU;
int32_t x78 = 3619;
uint64_t x79 = 28464LLU;
int64_t x80 = 72139046099LL;
static volatile uint64_t t18 = 60670LLU;
int8_t x83 = INT8_MIN;
static volatile int64_t t19 = 36730917995LL;
int16_t x86 = -14;
uint8_t x104 = UINT8_MAX;
int8_t x107 = 0;
static int32_t x116 = -133131;
int32_t x117 = INT32_MAX;
uint32_t x124 = 3034840U;
static uint8_t x131 = UINT8_MAX;
static volatile int32_t t27 = -158634822;
static volatile int64_t t28 = -2245881LL;
volatile int32_t x155 = -53432;
static int64_t t32 = 7376883503LL;
uint16_t x159 = UINT16_MAX;
volatile uint64_t t33 = 109LLU;
uint64_t x162 = UINT64_MAX;
volatile uint64_t t34 = 437947LLU;
uint8_t x167 = 28U;
volatile int16_t x172 = INT16_MAX;
volatile uint8_t x174 = 5U;
static uint32_t x178 = 30550294U;
volatile uint16_t x183 = 3U;
volatile uint64_t x211 = 47701356725LLU;
volatile int32_t x212 = INT32_MIN;
static uint64_t t44 = 1LLU;
int8_t x213 = INT8_MIN;
volatile int8_t x221 = INT8_MIN;
int16_t x224 = INT16_MAX;
uint32_t x226 = 14U;
int64_t t48 = -2107LL;
uint32_t x234 = UINT32_MAX;
static int8_t x235 = 52;
static uint64_t x239 = 20197LLU;
uint64_t x240 = UINT64_MAX;
int32_t x242 = -1;
int16_t x253 = INT16_MIN;
int64_t x262 = -1LL;
int16_t x265 = INT16_MIN;
int16_t x266 = INT16_MAX;
int16_t x274 = 28;
volatile uint8_t x275 = 79U;
static int64_t x276 = -302883LL;
volatile uint8_t x277 = UINT8_MAX;
volatile int32_t t60 = 332467371;
uint16_t x282 = UINT16_MAX;
int64_t t61 = -3462854773602310671LL;
volatile int64_t t62 = -3591254562034628LL;
volatile int64_t t63 = 1458354234811LL;
volatile int8_t x295 = INT8_MIN;
int8_t x303 = INT8_MIN;
int64_t x313 = INT64_MIN;
static uint32_t x315 = UINT32_MAX;
uint64_t t69 = 499119LLU;
static uint64_t t71 = 221LLU;
volatile int16_t x337 = INT16_MIN;
int16_t x342 = INT16_MAX;
uint8_t x343 = 2U;
int32_t t73 = 100069981;
int64_t x354 = -370847LL;
volatile int16_t x371 = INT16_MAX;
int32_t x372 = INT32_MIN;
int64_t x375 = INT64_MAX;
static uint8_t x387 = 1U;
uint32_t x391 = 1575U;
uint32_t x414 = 2933U;
static volatile int32_t t88 = -198;
int8_t x448 = INT8_MIN;
static uint32_t x452 = 475U;
volatile int64_t t92 = 31312LL;
int32_t x453 = 265983813;
uint64_t x454 = 1LLU;
uint64_t x456 = 756930579790855391LLU;
volatile int64_t t94 = -79380357814423LL;
volatile int32_t x463 = INT32_MIN;
volatile int8_t x469 = INT8_MAX;
int64_t x470 = INT64_MIN;
uint64_t x473 = 33582026660927LLU;
uint16_t x475 = 8642U;
static volatile int32_t x476 = 32;
int16_t x479 = 7072;
static uint32_t x480 = 30506419U;
int16_t x485 = INT16_MIN;
uint8_t x488 = 38U;
uint16_t x498 = 130U;
static volatile int32_t x505 = -1;
static int32_t x510 = -238616;
int32_t x511 = INT32_MIN;
volatile uint8_t x522 = UINT8_MAX;
int32_t x524 = -1031;
int16_t x526 = -2585;
static int8_t x548 = -2;
static int8_t x550 = INT8_MIN;
volatile int32_t t112 = 17077249;
int8_t x561 = -30;
static int8_t x574 = 28;
volatile int64_t x583 = 2283LL;
uint32_t t119 = 25137U;
volatile uint32_t x590 = 424U;
uint32_t x593 = UINT32_MAX;
uint8_t x607 = 1U;
uint8_t x608 = UINT8_MAX;
volatile uint64_t t123 = 108004LLU;
int32_t x615 = INT32_MIN;
static int32_t x618 = INT32_MAX;
static int32_t x622 = -1722;
int32_t x624 = INT32_MAX;
int8_t x637 = -1;
int32_t x648 = -2;
int32_t t129 = 2877745;
volatile int64_t x650 = INT64_MAX;
int8_t x654 = INT8_MAX;
volatile uint64_t x656 = 3LLU;
uint64_t t131 = 2742981750044164541LLU;
uint8_t x663 = 2U;
int32_t x664 = 1793;
uint32_t t133 = 1322360U;
static volatile int8_t x666 = INT8_MAX;
int64_t x678 = INT64_MAX;
static uint32_t x685 = 3903829U;
static int64_t t138 = -382763LL;
uint8_t x709 = UINT8_MAX;
uint64_t x712 = 217LLU;
static int16_t x717 = -1;
int16_t x718 = INT16_MAX;
int64_t t143 = -8163LL;
static volatile int32_t x727 = -19479850;
volatile int64_t t145 = -5742490919350LL;
volatile int16_t x732 = -14070;
volatile uint16_t x744 = 715U;
int64_t t148 = 6943327825LL;
int32_t x747 = INT32_MIN;
static uint32_t x753 = UINT32_MAX;
uint64_t x754 = UINT64_MAX;
static uint16_t x762 = UINT16_MAX;
volatile uint8_t x764 = 41U;
int16_t x766 = INT16_MIN;
uint8_t x768 = 0U;
static volatile int8_t x769 = INT8_MAX;
uint16_t x782 = 5964U;
volatile uint8_t x796 = UINT8_MAX;
static int32_t x798 = -1;
int16_t x799 = INT16_MIN;
uint8_t x800 = UINT8_MAX;
volatile int64_t t158 = 926939108069340LL;
int16_t x808 = -9;
static volatile int32_t t159 = -13;
uint16_t x811 = 1806U;
volatile int64_t t161 = 749541101347967LL;
int64_t x818 = -1LL;
static uint32_t x830 = 0U;
uint16_t x832 = UINT16_MAX;
uint16_t x834 = 63U;
volatile int64_t t165 = 42576934195459867LL;
int32_t x840 = -14;
volatile uint32_t t168 = 14432485U;
static int64_t x854 = INT64_MIN;
uint8_t x870 = 26U;
volatile int32_t x873 = -22614698;
volatile int32_t x879 = 51;
volatile uint64_t x881 = UINT64_MAX;
volatile int16_t x895 = INT16_MAX;
int64_t t180 = 2094785468LL;
int16_t x911 = -1;
int64_t x913 = -1LL;
uint16_t x920 = 2904U;
uint8_t x925 = 1U;
int32_t x927 = INT32_MAX;
static volatile uint64_t t186 = 100682LLU;
int64_t x941 = INT64_MIN;
uint16_t x944 = 263U;
uint16_t x961 = 15258U;
int16_t x967 = INT16_MAX;
uint64_t x971 = 3LLU;
static int32_t x972 = 0;
volatile int64_t t194 = -4749698657404LL;
int32_t x990 = -182;
volatile int64_t t197 = 11628994188LL;
uint32_t x995 = UINT32_MAX;


void f0(void) {
    	static uint16_t x1 = 22U;
	volatile uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;
	static int32_t t0 = -200;

    t0 = ((x1|(x2-x3))+x4);

    if (t0 != -834) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 4U;
	volatile int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MAX;
	volatile int64_t t1 = 42260615614LL;

    t1 = ((x5|(x6-x7))+x8);

    if (t1 != -9223372036854710269LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -4260;
	int8_t x12 = -1;
	static volatile int64_t t2 = -1349LL;

    t2 = ((x9|(x10-x11))+x12);

    if (t2 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint16_t x15 = 21U;
	uint8_t x16 = 0U;

    t3 = ((x13|(x14-x15))+x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -1;
	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = 12;
	int64_t x20 = -1LL;
	static volatile uint64_t t4 = 889LLU;

    t4 = ((x17|(x18-x19))+x20);

    if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -3;
	int16_t x22 = 772;
	int32_t x24 = -1;
	volatile int32_t t5 = 15094;

    t5 = ((x21|(x22-x23))+x24);

    if (t5 != -4) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	int16_t x26 = 5;
	volatile uint64_t x27 = UINT64_MAX;
	static uint64_t t6 = 6589153925655087LLU;

    t6 = ((x25|(x26-x27))+x28);

    if (t6 != 254LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MAX;
	static volatile uint32_t x31 = 1U;
	int64_t t7 = -260682845429545245LL;

    t7 = ((x29|(x30-x31))+x32);

    if (t7 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int16_t x34 = INT16_MIN;
	uint64_t t8 = 445592572991452LLU;

    t8 = ((x33|(x34-x35))+x36);

    if (t8 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	int64_t x39 = 3072447LL;
	uint32_t x40 = 2U;
	static volatile int64_t t9 = 1682426896027194280LL;

    t9 = ((x37|(x38-x39))+x40);

    if (t9 != -2150556093LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	int16_t x43 = -1;

    t10 = ((x41|(x42-x43))+x44);

    if (t10 != 32766LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 2773;
	volatile int64_t x47 = -1LL;
	volatile int64_t t11 = 1972125LL;

    t11 = ((x45|(x46-x47))+x48);

    if (t11 != 8208LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 10580610U;
	int32_t x50 = INT32_MIN;
	volatile int16_t x51 = -7580;
	int16_t x52 = INT16_MAX;
	uint32_t t12 = 28960132U;

    t12 = ((x49|(x50-x51))+x52);

    if (t12 != 2158100381U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x56 = -1LL;

    t13 = ((x53|(x54-x55))+x56);

    if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MAX;
	static uint16_t x59 = UINT16_MAX;
	int64_t t14 = 161971117LL;

    t14 = ((x57|(x58-x59))+x60);

    if (t14 != -9223372034707357574LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 6U;
	int8_t x63 = INT8_MIN;
	int16_t x64 = -1;
	uint32_t t15 = 4996232U;

    t15 = ((x61|(x62-x63))+x64);

    if (t15 != 4294314557U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 0LLU;
	int16_t x66 = -1;
	int32_t x67 = -1;
	int64_t x68 = INT64_MAX;
	volatile uint64_t t16 = 4376149011237LLU;

    t16 = ((x65|(x66-x67))+x68);

    if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MIN;
	volatile int16_t x74 = -3;
	int8_t x75 = INT8_MIN;

    t17 = ((x73|(x74-x75))+x76);

    if (t17 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = 14;

    t18 = ((x77|(x78-x79))+x80);

    if (t18 != 72139021266LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 2666LL;
	int8_t x82 = -1;
	volatile int32_t x84 = 2310809;

    t19 = ((x81|(x82-x83))+x84);

    if (t19 != 2313496LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	static int8_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t20 = -1050113869;

    t20 = ((x85|(x86-x87))+x88);

    if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = 1;
	int8_t x94 = -53;
	int16_t x95 = INT16_MIN;
	static int16_t x96 = -1;
	volatile int32_t t21 = -50666;

    t21 = ((x93|(x94-x95))+x96);

    if (t21 != 32714) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MAX;
	static int8_t x102 = INT8_MAX;
	static int8_t x103 = 40;
	int32_t t22 = 366368;

    t22 = ((x101|(x102-x103))+x104);

    if (t22 != 33022) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = INT8_MIN;
	static int64_t x106 = -1LL;
	volatile int16_t x108 = -645;
	int64_t t23 = -1057LL;

    t23 = ((x105|(x106-x107))+x108);

    if (t23 != -646LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int64_t x114 = -1LL;
	volatile int64_t x115 = INT64_MIN;
	static int64_t t24 = 484025462361543LL;

    t24 = ((x113|(x114-x115))+x116);

    if (t24 != 9223372036854642676LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = -1;
	int64_t x120 = INT64_MAX;
	static volatile uint64_t t25 = 125193580LLU;

    t25 = ((x117|(x118-x119))+x120);

    if (t25 != 9223372039002259454LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = UINT16_MAX;
	static int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 371U;
	uint32_t t26 = 182211U;

    t26 = ((x121|(x122-x123))+x124);

    if (t26 != 3034839U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	volatile int16_t x132 = -1;

    t27 = ((x129|(x130-x131))+x132);

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x133 = UINT16_MAX;
	volatile int64_t x134 = 68027418240025LL;
	static uint32_t x135 = 2U;
	static int8_t x136 = INT8_MAX;

    t28 = ((x133|(x134-x135))+x136);

    if (t28 != 68027418280062LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x137 = UINT64_MAX;
	static int16_t x138 = INT16_MAX;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = INT32_MIN;
	volatile uint64_t t29 = 24037392280LLU;

    t29 = ((x137|(x138-x139))+x140);

    if (t29 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = INT64_MAX;
	uint64_t x142 = 19536257318243450LLU;
	int64_t x143 = INT64_MIN;
	int64_t x144 = 61442367LL;
	static volatile uint64_t t30 = 7477894033983798LLU;

    t30 = ((x141|(x142-x143))+x144);

    if (t30 != 61442366LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x145 = -1;
	int8_t x146 = -1;
	static int8_t x147 = 0;
	int32_t x148 = -516368361;
	int32_t t31 = 33;

    t31 = ((x145|(x146-x147))+x148);

    if (t31 != -516368362) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	int8_t x156 = 3;

    t32 = ((x153|(x154-x155))+x156);

    if (t32 != -9223372036854722374LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x157 = 53925635042727LLU;
	static uint64_t x158 = 571287689622044344LLU;
	static uint32_t x160 = 3438061U;

    t33 = ((x157|(x158-x159))+x160);

    if (t33 != 571322923423315372LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x161 = -36271209095331LL;
	int16_t x163 = 5905;
	int32_t x164 = INT32_MIN;

    t34 = ((x161|(x162-x163))+x164);

    if (t34 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x165 = INT8_MIN;
	uint8_t x166 = 15U;
	volatile uint32_t x168 = 1641495153U;
	volatile uint32_t t35 = 980U;

    t35 = ((x165|(x166-x167))+x168);

    if (t35 != 1641495140U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x169 = 772U;
	int32_t x170 = 1240;
	int64_t x171 = 31756118159489LL;
	int64_t t36 = -9627LL;

    t36 = ((x169|(x170-x171))+x172);

    if (t36 != -31756118124714LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = UINT32_MAX;
	uint16_t x175 = 213U;
	static int8_t x176 = INT8_MAX;
	volatile uint32_t t37 = 7U;

    t37 = ((x173|(x174-x175))+x176);

    if (t37 != 126U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x177 = -1;
	int8_t x179 = 41;
	int32_t x180 = INT32_MIN;
	uint32_t t38 = 116866009U;

    t38 = ((x177|(x178-x179))+x180);

    if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = INT64_MIN;
	uint8_t x182 = 1U;
	int16_t x184 = INT16_MIN;
	volatile int64_t t39 = 15LL;

    t39 = ((x181|(x182-x183))+x184);

    if (t39 != -32770LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x185 = 73U;
	int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t40 = -9376267759823061LL;

    t40 = ((x185|(x186-x187))+x188);

    if (t40 != -55LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x197 = UINT16_MAX;
	int32_t x198 = -1;
	int32_t x199 = INT32_MAX;
	volatile int64_t x200 = 329LL;
	volatile int64_t t41 = -12634383494LL;

    t41 = ((x197|(x198-x199))+x200);

    if (t41 != -2147417784LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = INT32_MAX;
	int16_t x202 = 1;
	int8_t x203 = INT8_MIN;
	int8_t x204 = 0;
	volatile int32_t t42 = INT32_MAX;

    t42 = ((x201|(x202-x203))+x204);

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	volatile int64_t x207 = INT64_MIN;
	static int32_t x208 = INT32_MIN;
	int64_t t43 = -1987382835LL;

    t43 = ((x205|(x206-x207))+x208);

    if (t43 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = INT8_MAX;

    t44 = ((x209|(x210-x211))+x212);

    if (t44 != 18446744024317427711LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x214 = INT64_MIN;
	static int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MAX;
	int64_t t45 = 92627806LL;

    t45 = ((x213|(x214-x215))+x216);

    if (t45 != 2147483519LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x217 = 33566071714286819LL;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = 5773990LLU;
	static int8_t x220 = 53;
	uint64_t t46 = 19LLU;

    t46 = ((x217|(x218-x219))+x220);

    if (t46 != 18446744073704304176LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x222 = 361;
	volatile uint32_t x223 = 18U;
	volatile uint32_t t47 = 74544U;

    t47 = ((x221|(x222-x223))+x224);

    if (t47 != 32726U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = INT16_MIN;
	volatile int64_t x227 = -177756LL;
	static int64_t x228 = -1LL;

    t48 = ((x225|(x226-x227))+x228);

    if (t48 != -18839LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x229 = INT32_MIN;
	uint8_t x230 = UINT8_MAX;
	static int64_t x231 = 3560LL;
	uint16_t x232 = UINT16_MAX;
	int64_t t49 = -43749231843LL;

    t49 = ((x229|(x230-x231))+x232);

    if (t49 != 62230LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x233 = INT8_MIN;
	static uint32_t x236 = 1176U;
	volatile uint32_t t50 = 111462U;

    t50 = ((x233|(x234-x235))+x236);

    if (t50 != 1123U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x237 = INT64_MIN;
	static uint8_t x238 = 42U;
	uint64_t t51 = 161824LLU;

    t51 = ((x237|(x238-x239))+x240);

    if (t51 != 18446744073709531460LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x241 = INT8_MIN;
	static int32_t x243 = INT32_MIN;
	uint8_t x244 = 40U;
	int32_t t52 = -114079120;

    t52 = ((x241|(x242-x243))+x244);

    if (t52 != 39) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x249 = -1;
	int8_t x250 = 0;
	static int16_t x251 = 2;
	uint16_t x252 = 9U;
	int32_t t53 = 1;

    t53 = ((x249|(x250-x251))+x252);

    if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x254 = INT16_MIN;
	int32_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int32_t t54 = -943254;

    t54 = ((x253|(x254-x255))+x256);

    if (t54 != -32895) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x257 = -14;
	static uint16_t x258 = 443U;
	volatile int16_t x259 = INT16_MIN;
	volatile uint16_t x260 = UINT16_MAX;
	static volatile int32_t t55 = -46;

    t55 = ((x257|(x258-x259))+x260);

    if (t55 != 65530) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x261 = -7;
	int8_t x263 = 2;
	uint32_t x264 = UINT32_MAX;
	volatile int64_t t56 = -251951024LL;

    t56 = ((x261|(x262-x263))+x264);

    if (t56 != 4294967292LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x267 = INT16_MAX;
	int16_t x268 = INT16_MIN;
	static int32_t t57 = -643608195;

    t57 = ((x265|(x266-x267))+x268);

    if (t57 != -65536) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x269 = INT64_MIN;
	uint32_t x270 = 37U;
	int16_t x271 = 3137;
	volatile int64_t x272 = INT64_MAX;
	static int64_t t58 = 266339325060LL;

    t58 = ((x269|(x270-x271))+x272);

    if (t58 != 4294964195LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = INT64_MIN;
	static volatile int64_t t59 = 6LL;

    t59 = ((x273|(x274-x275))+x276);

    if (t59 != -302934LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static int16_t x280 = 5;

    t60 = ((x277|(x278-x279))+x280);

    if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x281 = -1LL;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = UINT8_MAX;

    t61 = ((x281|(x282-x283))+x284);

    if (t61 != 254LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x285 = 14U;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = INT16_MAX;
	static volatile int64_t x288 = -1LL;

    t62 = ((x285|(x286-x287))+x288);

    if (t62 != -32882LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x289 = -1LL;
	int16_t x290 = INT16_MIN;
	int64_t x291 = 145647LL;
	int8_t x292 = -1;

    t63 = ((x289|(x290-x291))+x292);

    if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = INT16_MAX;
	static uint64_t x294 = 771899065LLU;
	uint32_t x296 = UINT32_MAX;
	volatile uint64_t t64 = 8772480LLU;

    t64 = ((x293|(x294-x295))+x296);

    if (t64 != 5066883070LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x297 = 4240667LL;
	volatile uint32_t x298 = 8U;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	volatile int64_t t65 = -27203825141LL;

    t65 = ((x297|(x298-x299))+x300);

    if (t65 != 4273562LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x301 = 44U;
	volatile int8_t x302 = -1;
	int32_t x304 = -225790;
	static int32_t t66 = -111437142;

    t66 = ((x301|(x302-x303))+x304);

    if (t66 != -225663) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 40427U;
	uint64_t t67 = 456124338463LLU;

    t67 = ((x309|(x310-x311))+x312);

    if (t67 != 40426LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x314 = INT64_MAX;
	uint16_t x316 = 16511U;
	volatile int64_t t68 = 2272LL;

    t68 = ((x313|(x314-x315))+x316);

    if (t68 != -4294950785LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x317 = 6;
	volatile uint64_t x318 = 303324LLU;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = 17U;

    t69 = ((x317|(x318-x319))+x320);

    if (t69 != 303088LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x321 = -1;
	int8_t x322 = 26;
	int32_t x323 = INT32_MAX;
	int64_t x324 = -67885368232433LL;
	int64_t t70 = -23009725LL;

    t70 = ((x321|(x322-x323))+x324);

    if (t70 != -67885368232434LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x333 = 224437209298480LLU;
	int8_t x334 = -1;
	uint64_t x335 = 2243386LLU;
	int16_t x336 = -212;

    t71 = ((x333|(x334-x335))+x336);

    if (t71 != 18446744073709549089LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = -1;
	static uint16_t x340 = 1173U;
	volatile int32_t t72 = 1618;

    t72 = ((x337|(x338-x339))+x340);

    if (t72 != -31594) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x341 = 12U;
	int16_t x344 = INT16_MAX;

    t73 = ((x341|(x342-x343))+x344);

    if (t73 != 65532) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x345 = INT64_MIN;
	volatile int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	int64_t t74 = 25846302720708LL;

    t74 = ((x345|(x346-x347))+x348);

    if (t74 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x349 = 15U;
	volatile int64_t x350 = 1483563LL;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t75 = -476405160LL;

    t75 = ((x349|(x350-x351))+x352);

    if (t75 != -9223372034705808593LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x353 = UINT8_MAX;
	volatile uint16_t x355 = 45U;
	volatile int16_t x356 = -1726;
	int64_t t76 = -4095960177LL;

    t76 = ((x353|(x354-x355))+x356);

    if (t76 != -372415LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x357 = 3767402U;
	int8_t x358 = -1;
	int16_t x359 = 1506;
	static uint64_t x360 = 205643LLU;
	static uint64_t t77 = 241LLU;

    t77 = ((x357|(x358-x359))+x360);

    if (t77 != 4295172554LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x369 = -197515242652868LL;
	uint32_t x370 = 1770U;
	int64_t t78 = -3934128208960870831LL;

    t78 = ((x369|(x370-x371))+x372);

    if (t78 != -197514808541185LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x373 = -1;
	volatile uint64_t x374 = 137827624783436LLU;
	int64_t x376 = INT64_MAX;
	volatile uint64_t t79 = 1784767155LLU;

    t79 = ((x373|(x374-x375))+x376);

    if (t79 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x385 = INT32_MAX;
	int64_t x386 = -1LL;
	int64_t x388 = INT64_MAX;
	static volatile int64_t t80 = -35841900186628629LL;

    t80 = ((x385|(x386-x387))+x388);

    if (t80 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x389 = 9049035735433LLU;
	int8_t x390 = INT8_MAX;
	static volatile int16_t x392 = INT16_MIN;
	uint64_t t81 = 117408358892021LLU;

    t81 = ((x389|(x390-x391))+x392);

    if (t81 != 9049496058841LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = 1;
	volatile int64_t x395 = INT64_MAX;
	static int16_t x396 = 5377;
	volatile int64_t t82 = -473589190937144LL;

    t82 = ((x393|(x394-x395))+x396);

    if (t82 != -27389LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x397 = INT64_MAX;
	uint64_t x398 = 149711820395908LLU;
	int32_t x399 = 1207;
	static int8_t x400 = INT8_MIN;
	uint64_t t83 = 199LLU;

    t83 = ((x397|(x398-x399))+x400);

    if (t83 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x405 = 1;
	int16_t x406 = -1;
	int64_t x407 = INT64_MAX;
	uint16_t x408 = 47U;
	volatile int64_t t84 = 20975778LL;

    t84 = ((x405|(x406-x407))+x408);

    if (t84 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x409 = UINT64_MAX;
	uint64_t x410 = 30LLU;
	volatile int8_t x411 = INT8_MIN;
	int8_t x412 = -1;
	volatile uint64_t t85 = 3693770099488846598LLU;

    t85 = ((x409|(x410-x411))+x412);

    if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x413 = 180;
	int8_t x415 = INT8_MAX;
	static int64_t x416 = -1LL;
	volatile int64_t t86 = -5475508LL;

    t86 = ((x413|(x414-x415))+x416);

    if (t86 != 2805LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x417 = -4;
	uint32_t x418 = 191U;
	int64_t x419 = -1LL;
	uint16_t x420 = 102U;
	int64_t t87 = 686579253089217LL;

    t87 = ((x417|(x418-x419))+x420);

    if (t87 != 98LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x433 = INT32_MIN;
	uint8_t x434 = 51U;
	int16_t x435 = -199;
	int16_t x436 = -1;

    t88 = ((x433|(x434-x435))+x436);

    if (t88 != -2147483399) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x437 = INT16_MAX;
	static int32_t x438 = INT32_MAX;
	uint32_t x439 = 2551051U;
	int8_t x440 = 6;
	uint32_t t89 = 29247007U;

    t89 = ((x437|(x438-x439))+x440);

    if (t89 != 2144960517U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x441 = 5U;
	volatile uint64_t x442 = 2902272050426682LLU;
	uint16_t x443 = UINT16_MAX;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t90 = 5865136185LLU;

    t90 = ((x441|(x442-x443))+x444);

    if (t90 != 9226274308905136959LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x445 = 111U;
	uint64_t x446 = UINT64_MAX;
	int64_t x447 = -215655847LL;
	volatile uint64_t t91 = 3596452292081LLU;

    t91 = ((x445|(x446-x447))+x448);

    if (t91 != 215655791LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x449 = -1LL;
	int32_t x450 = -34696;
	static uint16_t x451 = UINT16_MAX;

    t92 = ((x449|(x450-x451))+x452);

    if (t92 != 474LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x455 = INT32_MAX;
	volatile uint64_t t93 = 18810LLU;

    t93 = ((x453|(x454-x455))+x456);

    if (t93 != 756930577909355558LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	int64_t x459 = -1LL;
	int64_t x460 = INT64_MAX;

    t94 = ((x457|(x458-x459))+x460);

    if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x461 = -1;
	static int32_t x462 = -1;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t95 = 8808634U;

    t95 = ((x461|(x462-x463))+x464);

    if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x465 = 15;
	int16_t x466 = INT16_MIN;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = -1;
	int32_t t96 = 59512154;

    t96 = ((x465|(x466-x467))+x468);

    if (t96 != -98290) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x471 = 0U;
	static volatile int16_t x472 = -1;
	volatile int64_t t97 = 1LL;

    t97 = ((x469|(x470-x471))+x472);

    if (t97 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x474 = UINT32_MAX;
	uint64_t t98 = 2770101LLU;

    t98 = ((x473|(x474-x475))+x476);

    if (t98 != 33582349278815LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 1U;
	uint16_t x478 = UINT16_MAX;
	uint32_t t99 = 8090U;

    t99 = ((x477|(x478-x479))+x480);

    if (t99 != 30564882U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x486 = -1;
	static volatile uint8_t x487 = 17U;
	volatile int32_t t100 = 48285;

    t100 = ((x485|(x486-x487))+x488);

    if (t100 != 20) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x493 = INT64_MIN;
	int16_t x494 = -1;
	volatile uint64_t x495 = 195054LLU;
	int32_t x496 = INT32_MIN;
	static volatile uint64_t t101 = 195LLU;

    t101 = ((x493|(x494-x495))+x496);

    if (t101 != 18446744071561872913LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x497 = INT8_MIN;
	static int16_t x499 = -1;
	static uint64_t x500 = 237563821806275096LLU;
	uint64_t t102 = 1LLU;

    t102 = ((x497|(x498-x499))+x500);

    if (t102 != 237563821806274971LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x506 = UINT8_MAX;
	volatile int16_t x507 = -7741;
	uint64_t x508 = 2489627938575514LLU;
	static uint64_t t103 = 4361757716754LLU;

    t103 = ((x505|(x506-x507))+x508);

    if (t103 != 2489627938575513LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x509 = 8LLU;
	int32_t x512 = INT32_MIN;
	volatile uint64_t t104 = 1435341840LLU;

    t104 = ((x509|(x510-x511))+x512);

    if (t104 != 18446744073709313000LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = -206014LL;
	static int16_t x518 = INT16_MIN;
	static uint32_t x519 = 3U;
	volatile uint32_t x520 = 29643947U;
	static int64_t t105 = 141390LL;

    t105 = ((x517|(x518-x519))+x520);

    if (t105 != 29643946LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x521 = 3U;
	volatile int16_t x523 = INT16_MIN;
	volatile int32_t t106 = 14;

    t106 = ((x521|(x522-x523))+x524);

    if (t106 != 31992) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x525 = -119694;
	int64_t x527 = INT64_MIN;
	int8_t x528 = 0;
	volatile int64_t t107 = -995140935620061857LL;

    t107 = ((x525|(x526-x527))+x528);

    if (t107 != -521LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = -1;
	uint32_t x531 = UINT32_MAX;
	static int16_t x532 = INT16_MAX;
	int64_t t108 = 7LL;

    t108 = ((x529|(x530-x531))+x532);

    if (t108 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x533 = 2;
	int32_t x534 = INT32_MAX;
	uint64_t x535 = UINT64_MAX;
	int64_t x536 = INT64_MIN;
	uint64_t t109 = 1702092LLU;

    t109 = ((x533|(x534-x535))+x536);

    if (t109 != 9223372039002259458LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x537 = -1;
	uint64_t x538 = 99LLU;
	static int64_t x539 = INT64_MIN;
	volatile int8_t x540 = -1;
	volatile uint64_t t110 = 1732473662682765787LLU;

    t110 = ((x537|(x538-x539))+x540);

    if (t110 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x545 = INT64_MAX;
	uint8_t x546 = UINT8_MAX;
	uint16_t x547 = UINT16_MAX;
	int64_t t111 = 2483116448LL;

    t111 = ((x545|(x546-x547))+x548);

    if (t111 != -3LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x549 = INT8_MIN;
	static int16_t x551 = 13837;
	int16_t x552 = INT16_MAX;

    t112 = ((x549|(x550-x551))+x552);

    if (t112 != 32754) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x557 = -1;
	uint8_t x558 = 29U;
	int8_t x559 = 0;
	volatile uint8_t x560 = 9U;
	volatile int32_t t113 = -242911833;

    t113 = ((x557|(x558-x559))+x560);

    if (t113 != 8) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x562 = UINT16_MAX;
	static int32_t x563 = -1;
	uint64_t x564 = 138521248079164LLU;
	uint64_t t114 = 2136648538LLU;

    t114 = ((x561|(x562-x563))+x564);

    if (t114 != 138521248079134LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x565 = 2451813U;
	int64_t x566 = 99687LL;
	volatile int8_t x567 = -1;
	volatile uint16_t x568 = 7U;
	volatile int64_t t115 = 70609986495602611LL;

    t115 = ((x565|(x566-x567))+x568);

    if (t115 != 2485620LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x573 = INT8_MAX;
	int16_t x575 = INT16_MIN;
	uint8_t x576 = 49U;
	int32_t t116 = 8066;

    t116 = ((x573|(x574-x575))+x576);

    if (t116 != 32944) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x577 = -4180;
	volatile int16_t x578 = INT16_MIN;
	uint16_t x579 = UINT16_MAX;
	int32_t x580 = INT32_MAX;
	int32_t t117 = 5917639;

    t117 = ((x577|(x578-x579))+x580);

    if (t117 != 2147479468) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x581 = 1033417183U;
	static volatile int16_t x582 = 7;
	static int32_t x584 = INT32_MIN;
	static int64_t t118 = 4943LL;

    t118 = ((x581|(x582-x583))+x584);

    if (t118 != -2147485729LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x585 = 1121;
	volatile uint32_t x586 = UINT32_MAX;
	volatile int32_t x587 = 1155;
	volatile int32_t x588 = -1;

    t119 = ((x585|(x586-x587))+x588);

    if (t119 != 4294967164U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x589 = 898;
	volatile int32_t x591 = -11145443;
	int8_t x592 = INT8_MIN;
	volatile uint32_t t120 = 16U;

    t120 = ((x589|(x590-x591))+x592);

    if (t120 != 11145995U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x594 = INT8_MIN;
	uint32_t x595 = 211467U;
	int16_t x596 = INT16_MIN;
	static volatile uint32_t t121 = 801U;

    t121 = ((x593|(x594-x595))+x596);

    if (t121 != 4294934527U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x605 = -1;
	static int8_t x606 = 1;
	int32_t t122 = 633659225;

    t122 = ((x605|(x606-x607))+x608);

    if (t122 != 254) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x609 = -246793236;
	static volatile int32_t x610 = -23;
	uint64_t x611 = 978552927262LLU;
	int64_t x612 = 785969005154979297LL;

    t123 = ((x609|(x610-x611))+x612);

    if (t123 != 785969005054020048LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x613 = INT8_MIN;
	int64_t x614 = -195018073833251823LL;
	int32_t x616 = INT32_MIN;
	volatile int64_t t124 = -118120824840LL;

    t124 = ((x613|(x614-x615))+x616);

    if (t124 != -2147483759LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x617 = 31640289;
	uint32_t x619 = 1165714U;
	int32_t x620 = INT32_MAX;
	volatile uint32_t t125 = 7680U;

    t125 = ((x617|(x618-x619))+x620);

    if (t125 != 4293852908U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x621 = 33738949974LLU;
	static int32_t x623 = 504699904;
	volatile uint64_t t126 = 47858949LLU;

    t126 = ((x621|(x622-x623))+x624);

    if (t126 != 2080365909LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x629 = 42;
	static uint16_t x630 = UINT16_MAX;
	int16_t x631 = -1;
	volatile int64_t x632 = INT64_MIN;
	int64_t t127 = 4064611015064LL;

    t127 = ((x629|(x630-x631))+x632);

    if (t127 != -9223372036854710230LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x638 = 0;
	int8_t x639 = -1;
	int16_t x640 = INT16_MAX;
	int32_t t128 = -8023352;

    t128 = ((x637|(x638-x639))+x640);

    if (t128 != 32766) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x645 = INT32_MIN;
	volatile int8_t x646 = INT8_MIN;
	int32_t x647 = INT32_MIN;

    t129 = ((x645|(x646-x647))+x648);

    if (t129 != -130) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x649 = 8368;
	volatile uint32_t x651 = 170U;
	static uint64_t x652 = 1787LLU;
	uint64_t t130 = 54428668333800514LLU;

    t130 = ((x649|(x650-x651))+x652);

    if (t130 != 9223372036854777584LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x653 = INT8_MAX;
	uint32_t x655 = UINT32_MAX;

    t131 = ((x653|(x654-x655))+x656);

    if (t131 != 258LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x657 = 1;
	int64_t x658 = INT64_MIN;
	int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;
	volatile int64_t t132 = -72256644836719039LL;

    t132 = ((x657|(x658-x659))+x660);

    if (t132 != -9223372036854743167LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x661 = -702;
	uint32_t x662 = 13707569U;

    t133 = ((x661|(x662-x663))+x664);

    if (t133 != 1136U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x665 = INT8_MAX;
	uint64_t x667 = UINT64_MAX;
	uint64_t x668 = UINT64_MAX;
	volatile uint64_t t134 = 27388LLU;

    t134 = ((x665|(x666-x667))+x668);

    if (t134 != 254LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x677 = 34563501296611LLU;
	int32_t x679 = 585018209;
	volatile int64_t x680 = -1LL;
	static volatile uint64_t t135 = 1LLU;

    t135 = ((x677|(x678-x679))+x680);

    if (t135 != 9223372036808105982LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MAX;
	uint16_t x683 = 86U;
	static volatile uint32_t x684 = 0U;
	uint32_t t136 = 501U;

    t136 = ((x681|(x682-x683))+x684);

    if (t136 != 2147516329U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x686 = INT64_MIN;
	int64_t x687 = INT64_MIN;
	uint64_t x688 = 60083681LLU;
	uint64_t t137 = 1LLU;

    t137 = ((x685|(x686-x687))+x688);

    if (t137 != 63987510LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x689 = -367359950836809LL;
	int8_t x690 = INT8_MAX;
	int8_t x691 = -1;
	volatile uint8_t x692 = 1U;

    t138 = ((x689|(x690-x691))+x692);

    if (t138 != -367359950836808LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x697 = INT32_MIN;
	uint64_t x698 = 6538688LLU;
	volatile uint16_t x699 = 461U;
	int8_t x700 = -1;
	uint64_t t139 = 2795248LLU;

    t139 = ((x697|(x698-x699))+x700);

    if (t139 != 18446744071568606194LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x705 = 81741215438LLU;
	volatile int8_t x706 = INT8_MIN;
	static uint8_t x707 = 70U;
	uint8_t x708 = 83U;
	static uint64_t t140 = 216464531664705567LLU;

    t140 = ((x705|(x706-x707))+x708);

    if (t140 != 81LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x710 = 14931201LLU;
	volatile int32_t x711 = INT32_MIN;
	static uint64_t t141 = 70727285LLU;

    t141 = ((x709|(x710-x711))+x712);

    if (t141 != 2162415320LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x713 = -1;
	int8_t x714 = INT8_MAX;
	uint64_t x715 = 4654LLU;
	static uint64_t x716 = UINT64_MAX;
	uint64_t t142 = 3LLU;

    t142 = ((x713|(x714-x715))+x716);

    if (t142 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x719 = INT32_MAX;
	int64_t x720 = -1LL;

    t143 = ((x717|(x718-x719))+x720);

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x721 = -25593053;
	int32_t x722 = INT32_MIN;
	static int32_t x723 = -495065;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t144 = -306;

    t144 = ((x721|(x722-x723))+x724);

    if (t144 != -25165574) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x725 = INT8_MIN;
	int64_t x726 = -1077165038369428LL;
	uint32_t x728 = 328U;

    t145 = ((x725|(x726-x727))+x728);

    if (t145 != 222LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x729 = 78U;
	static int8_t x730 = INT8_MAX;
	int16_t x731 = -50;
	volatile uint32_t t146 = 1367229724U;

    t146 = ((x729|(x730-x731))+x732);

    if (t146 != 4294953481U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x733 = 32740848LLU;
	int16_t x734 = INT16_MIN;
	volatile int32_t x735 = 436;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t147 = 134534LLU;

    t147 = ((x733|(x734-x735))+x736);

    if (t147 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x741 = 11U;
	volatile uint32_t x742 = 152532U;
	int64_t x743 = -1LL;

    t148 = ((x741|(x742-x743))+x744);

    if (t148 != 153258LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x745 = -15398;
	uint64_t x746 = UINT64_MAX;
	int16_t x748 = -1;
	uint64_t t149 = 526283LLU;

    t149 = ((x745|(x746-x747))+x748);

    if (t149 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x755 = 1U;
	uint8_t x756 = UINT8_MAX;
	static volatile uint64_t t150 = 3456LLU;

    t150 = ((x753|(x754-x755))+x756);

    if (t150 != 254LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x761 = -1;
	uint32_t x763 = 238649U;
	volatile uint32_t t151 = 26U;

    t151 = ((x761|(x762-x763))+x764);

    if (t151 != 40U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x765 = 2084;
	static uint8_t x767 = 7U;
	static volatile int32_t t152 = 1065578;

    t152 = ((x765|(x766-x767))+x768);

    if (t152 != -32771) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x770 = UINT64_MAX;
	int16_t x771 = 103;
	int32_t x772 = -828095644;
	uint64_t t153 = 131013084010583LLU;

    t153 = ((x769|(x770-x771))+x772);

    if (t153 != 18446744072881455971LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x777 = 205U;
	int8_t x778 = INT8_MAX;
	uint64_t x779 = UINT64_MAX;
	uint64_t x780 = UINT64_MAX;
	uint64_t t154 = 40542090145201378LLU;

    t154 = ((x777|(x778-x779))+x780);

    if (t154 != 204LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x781 = INT64_MIN;
	int32_t x783 = -2132;
	int8_t x784 = 0;
	volatile int64_t t155 = -65241310LL;

    t155 = ((x781|(x782-x783))+x784);

    if (t155 != -9223372036854767712LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x789 = 122U;
	int8_t x790 = INT8_MAX;
	uint64_t x791 = 46470LLU;
	int8_t x792 = INT8_MIN;
	uint64_t t156 = 32940167LLU;

    t156 = ((x789|(x790-x791))+x792);

    if (t156 != 18446744073709505147LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x793 = UINT32_MAX;
	volatile int16_t x794 = 107;
	int8_t x795 = -1;
	uint32_t t157 = 448203435U;

    t157 = ((x793|(x794-x795))+x796);

    if (t157 != 254U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x797 = INT64_MIN;

    t158 = ((x797|(x798-x799))+x800);

    if (t158 != -9223372036854742786LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x805 = -1;
	uint16_t x806 = 71U;
	static int8_t x807 = INT8_MAX;

    t159 = ((x805|(x806-x807))+x808);

    if (t159 != -10) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x809 = 10285;
	int16_t x810 = INT16_MIN;
	static uint8_t x812 = 73U;
	static int32_t t160 = -1637538;

    t160 = ((x809|(x810-x811))+x812);

    if (t160 != -34488) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x813 = 0U;
	volatile int8_t x814 = 25;
	int64_t x815 = INT64_MAX;
	static volatile int8_t x816 = 49;

    t161 = ((x813|(x814-x815))+x816);

    if (t161 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x817 = -12839;
	uint8_t x819 = 18U;
	uint32_t x820 = UINT32_MAX;
	static volatile int64_t t162 = -7693478035221LL;

    t162 = ((x817|(x818-x819))+x820);

    if (t162 != 4294967292LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x821 = INT8_MAX;
	uint64_t x822 = 1582046698155053LLU;
	static int64_t x823 = 13546LL;
	static int64_t x824 = 73483360LL;
	volatile uint64_t t163 = 664065482LLU;

    t163 = ((x821|(x822-x823))+x824);

    if (t163 != 1582046771624927LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x831 = INT16_MAX;
	uint32_t t164 = 1709641U;

    t164 = ((x829|(x830-x831))+x832);

    if (t164 != 32768U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x833 = UINT16_MAX;
	int16_t x835 = 1;
	int64_t x836 = INT64_MIN;

    t165 = ((x833|(x834-x835))+x836);

    if (t165 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x837 = INT16_MIN;
	volatile int16_t x838 = INT16_MAX;
	static volatile uint16_t x839 = 883U;
	volatile int32_t t166 = 292;

    t166 = ((x837|(x838-x839))+x840);

    if (t166 != -898) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x841 = -1LL;
	volatile uint8_t x842 = 27U;
	uint16_t x843 = 461U;
	volatile uint16_t x844 = UINT16_MAX;
	int64_t t167 = 4538035LL;

    t167 = ((x841|(x842-x843))+x844);

    if (t167 != 65534LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x845 = 1625U;
	static int32_t x846 = -17342;
	uint32_t x847 = 1092U;
	uint16_t x848 = 677U;

    t168 = ((x845|(x846-x847))+x848);

    if (t168 != 4294949540U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x849 = -1;
	int64_t x850 = -345705LL;
	uint8_t x851 = 67U;
	static uint8_t x852 = 0U;
	volatile int64_t t169 = 18313125149LL;

    t169 = ((x849|(x850-x851))+x852);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x853 = -168454LL;
	uint64_t x855 = 65799LLU;
	volatile int32_t x856 = -1;
	volatile uint64_t t170 = 32117804084961LLU;

    t170 = ((x853|(x854-x855))+x856);

    if (t170 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x857 = -220;
	static volatile int8_t x858 = -60;
	uint8_t x859 = 29U;
	int32_t x860 = -1;
	int32_t t171 = 2574;

    t171 = ((x857|(x858-x859))+x860);

    if (t171 != -90) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x861 = -40;
	uint8_t x862 = 16U;
	uint16_t x863 = UINT16_MAX;
	uint64_t x864 = 632099049705316058LLU;
	uint64_t t172 = 14374735456LLU;

    t172 = ((x861|(x862-x863))+x864);

    if (t172 != 632099049705316019LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x869 = -1;
	int16_t x871 = INT16_MAX;
	int64_t x872 = 23417692LL;
	volatile int64_t t173 = 326539817LL;

    t173 = ((x869|(x870-x871))+x872);

    if (t173 != 23417691LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x874 = 28792845735230LLU;
	uint16_t x875 = 8U;
	static volatile uint64_t x876 = 2703901361122LLU;
	volatile uint64_t t174 = 32244494090338LLU;

    t174 = ((x873|(x874-x875))+x876);

    if (t174 != 2703900836184LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x877 = -1;
	uint16_t x878 = 5U;
	static uint32_t x880 = 1U;
	volatile uint32_t t175 = 1182977U;

    t175 = ((x877|(x878-x879))+x880);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x882 = INT32_MIN;
	int64_t x883 = 59573033LL;
	static uint8_t x884 = 0U;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x881|(x882-x883))+x884);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x885 = 63052U;
	static int64_t x886 = INT64_MIN;
	int32_t x887 = -5985506;
	volatile uint8_t x888 = UINT8_MAX;
	int64_t t177 = 1893871104611589236LL;

    t177 = ((x885|(x886-x887))+x888);

    if (t177 != -9223372036848748563LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x889 = UINT8_MAX;
	uint16_t x890 = UINT16_MAX;
	static int32_t x891 = -1;
	volatile uint8_t x892 = 25U;
	volatile int32_t t178 = 220612740;

    t178 = ((x889|(x890-x891))+x892);

    if (t178 != 65816) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x893 = -1;
	uint64_t x894 = 266910998321648646LLU;
	uint32_t x896 = 12981313U;
	uint64_t t179 = 4925297707LLU;

    t179 = ((x893|(x894-x895))+x896);

    if (t179 != 12981312LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x897 = INT64_MIN;
	int16_t x898 = INT16_MIN;
	uint16_t x899 = UINT16_MAX;
	int32_t x900 = INT32_MIN;

    t180 = ((x897|(x898-x899))+x900);

    if (t180 != -2147581951LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x909 = 12609050U;
	uint16_t x910 = 398U;
	int64_t x912 = -929443269084LL;
	volatile int64_t t181 = 1530139506907LL;

    t181 = ((x909|(x910-x911))+x912);

    if (t181 != -929430659645LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x914 = 1U;
	static uint16_t x915 = 1U;
	int16_t x916 = INT16_MAX;
	volatile int64_t t182 = 3653LL;

    t182 = ((x913|(x914-x915))+x916);

    if (t182 != 32766LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x917 = INT64_MIN;
	uint16_t x918 = UINT16_MAX;
	uint8_t x919 = 1U;
	int64_t t183 = 482216949820917450LL;

    t183 = ((x917|(x918-x919))+x920);

    if (t183 != -9223372036854707370LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x921 = INT32_MIN;
	uint16_t x922 = 2U;
	uint8_t x923 = 42U;
	static int32_t x924 = -571866859;
	static volatile int32_t t184 = 177;

    t184 = ((x921|(x922-x923))+x924);

    if (t184 != -571866899) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x926 = 1014483LLU;
	static volatile int64_t x928 = 51449769983LL;
	uint64_t t185 = 154532LLU;

    t185 = ((x925|(x926-x927))+x928);

    if (t185 != 49303300820LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x929 = 306664LLU;
	uint8_t x930 = 1U;
	int16_t x931 = INT16_MAX;
	static volatile uint8_t x932 = 38U;

    t186 = ((x929|(x930-x931))+x932);

    if (t186 != 18446744073709530640LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x933 = INT32_MIN;
	int64_t x934 = INT64_MIN;
	static int32_t x935 = INT32_MIN;
	static int8_t x936 = -1;
	int64_t t187 = 861831LL;

    t187 = ((x933|(x934-x935))+x936);

    if (t187 != -2147483649LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x937 = INT8_MIN;
	volatile int8_t x938 = 5;
	uint8_t x939 = 8U;
	int32_t x940 = -1;
	volatile int32_t t188 = 115382;

    t188 = ((x937|(x938-x939))+x940);

    if (t188 != -4) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x942 = UINT16_MAX;
	int16_t x943 = -1;
	volatile int64_t t189 = -14448LL;

    t189 = ((x941|(x942-x943))+x944);

    if (t189 != -9223372036854710009LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x953 = INT32_MIN;
	volatile uint16_t x954 = UINT16_MAX;
	uint64_t x955 = UINT64_MAX;
	static int8_t x956 = INT8_MIN;
	static volatile uint64_t t190 = 5655317968445LLU;

    t190 = ((x953|(x954-x955))+x956);

    if (t190 != 18446744071562133376LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x962 = 9790114312967LLU;
	int16_t x963 = -1806;
	static uint16_t x964 = 8993U;
	uint64_t t191 = 253030252020719858LLU;

    t191 = ((x961|(x962-x963))+x964);

    if (t191 != 9790114324160LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x965 = UINT64_MAX;
	uint64_t x966 = 950270777623370644LLU;
	uint32_t x968 = UINT32_MAX;
	volatile uint64_t t192 = 24589847LLU;

    t192 = ((x965|(x966-x967))+x968);

    if (t192 != 4294967294LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x969 = INT64_MIN;
	int8_t x970 = INT8_MIN;
	uint64_t t193 = 232692476001752LLU;

    t193 = ((x969|(x970-x971))+x972);

    if (t193 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x973 = INT64_MIN;
	int16_t x974 = INT16_MIN;
	uint16_t x975 = 7U;
	static volatile uint16_t x976 = UINT16_MAX;

    t194 = ((x973|(x974-x975))+x976);

    if (t194 != 32760LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x977 = INT64_MIN;
	int8_t x978 = INT8_MAX;
	int32_t x979 = -1;
	int32_t x980 = -1;
	int64_t t195 = 15367143138131LL;

    t195 = ((x977|(x978-x979))+x980);

    if (t195 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x985 = 1206LL;
	int8_t x986 = INT8_MIN;
	uint16_t x987 = UINT16_MAX;
	int8_t x988 = 63;
	static volatile int64_t t196 = 0LL;

    t196 = ((x985|(x986-x987))+x988);

    if (t196 != -65546LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x989 = -1LL;
	volatile int16_t x991 = INT16_MAX;
	uint8_t x992 = 3U;

    t197 = ((x989|(x990-x991))+x992);

    if (t197 != 2LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x993 = 3;
	static volatile uint16_t x994 = 3U;
	int8_t x996 = 3;
	static volatile uint32_t t198 = 298699U;

    t198 = ((x993|(x994-x995))+x996);

    if (t198 != 10U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x997 = UINT8_MAX;
	static volatile uint64_t x998 = 514890659455LLU;
	int32_t x999 = INT32_MIN;
	int64_t x1000 = -1LL;
	static volatile uint64_t t199 = 3487437073LLU;

    t199 = ((x997|(x998-x999))+x1000);

    if (t199 != 517038143230LLU) { NG(); } else { ; }
	
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

