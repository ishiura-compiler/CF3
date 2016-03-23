
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

uint8_t x5 = 0U;
static uint8_t x16 = 58U;
volatile uint8_t x21 = 3U;
static int8_t x23 = INT8_MIN;
int32_t t5 = 1;
static uint16_t x29 = 0U;
volatile uint16_t x30 = 3563U;
int64_t x31 = INT64_MAX;
static int8_t x32 = 21;
static int32_t x44 = 1;
int32_t t9 = 390348592;
volatile int32_t t10 = 0;
int32_t x54 = -1;
int32_t x58 = INT32_MIN;
volatile int32_t t13 = 0;
int8_t x62 = INT8_MIN;
uint16_t x66 = 7U;
uint8_t x72 = 12U;
uint8_t x74 = 1U;
uint64_t x79 = UINT64_MAX;
int32_t t18 = 638448806;
uint64_t x101 = UINT64_MAX;
int32_t x103 = -1;
uint16_t x109 = 1366U;
int64_t x110 = -1LL;
static uint64_t x112 = 414895991615LLU;
uint64_t t24 = 942705732919017472LLU;
int16_t x114 = INT16_MAX;
int64_t x122 = -14747LL;
volatile int32_t x123 = INT32_MIN;
int32_t t27 = 114904;
volatile uint8_t x126 = UINT8_MAX;
static int64_t x134 = 835227191264LL;
static int8_t x142 = INT8_MIN;
static int8_t x144 = -1;
static int16_t x147 = INT16_MIN;
int64_t x149 = INT64_MIN;
uint32_t x155 = 407811754U;
volatile int16_t x161 = INT16_MAX;
int8_t x165 = -1;
static int64_t x172 = -1LL;
static uint32_t x176 = 387517153U;
int32_t x177 = 203327;
static int16_t x180 = INT16_MAX;
int8_t x181 = -1;
static volatile int16_t x187 = -1;
int32_t t43 = 66476910;
int32_t x206 = INT32_MIN;
int64_t t47 = 213995LL;
static uint8_t x225 = UINT8_MAX;
volatile uint32_t x226 = 1830268U;
static volatile int16_t x227 = INT16_MIN;
int16_t x229 = INT16_MAX;
int64_t x231 = -1LL;
int32_t t52 = -238;
uint64_t x235 = 14293141LLU;
volatile int64_t x238 = 435765LL;
static volatile int32_t t58 = -13;
uint64_t x270 = UINT64_MAX;
int8_t x273 = -1;
uint16_t x275 = UINT16_MAX;
volatile int32_t t64 = -4713;
static int8_t x285 = -3;
int64_t x301 = 0LL;
static int64_t x303 = -829646431LL;
int32_t t72 = -48648647;
uint32_t x328 = 86217274U;
static int32_t x334 = -1;
int32_t x337 = -192861;
int16_t x340 = INT16_MIN;
int8_t x345 = INT8_MAX;
volatile int64_t x346 = INT64_MIN;
volatile int32_t t78 = -106347;
uint16_t x349 = UINT16_MAX;
int64_t x352 = 8059LL;
volatile int64_t t79 = -228LL;
volatile int32_t t80 = 21;
int8_t x357 = -1;
static int16_t x358 = 1157;
int64_t x359 = -1LL;
int32_t x365 = INT32_MAX;
int32_t t84 = 399322;
int16_t x373 = 14;
int16_t x374 = INT16_MIN;
int8_t x389 = -2;
static int16_t x390 = 706;
int64_t x392 = -409897920399855964LL;
static volatile uint64_t x393 = 267518079268LLU;
uint16_t x395 = UINT16_MAX;
uint8_t x398 = 126U;
int16_t x399 = -29;
int32_t x402 = 1816;
int8_t x419 = 2;
int16_t x423 = 6262;
int32_t x427 = -66216556;
int16_t x432 = 6;
int16_t x434 = INT16_MIN;
uint64_t x435 = 5963771LLU;
volatile uint64_t t100 = 284581222LLU;
static int32_t x446 = 5;
int32_t x450 = INT32_MIN;
static int16_t x459 = -1;
static uint16_t x460 = UINT16_MAX;
int8_t x463 = -1;
static volatile int8_t x465 = -3;
uint64_t t107 = 366288105621LLU;
int8_t x473 = 13;
uint32_t x475 = UINT32_MAX;
static int64_t x479 = -281433699676114LL;
int64_t x480 = 1636453LL;
static int64_t t109 = -1684963LL;
uint8_t x481 = 121U;
static uint32_t x502 = 698999002U;
static volatile uint32_t x509 = 67113U;
int32_t x515 = INT32_MAX;
volatile int8_t x521 = 0;
int8_t x523 = INT8_MIN;
uint8_t x537 = UINT8_MAX;
int64_t x544 = INT64_MAX;
uint8_t x549 = UINT8_MAX;
int64_t x559 = INT64_MAX;
int16_t x560 = -2;
volatile int32_t t128 = 11835;
volatile int64_t x568 = -1LL;
int32_t x571 = 148;
int32_t x574 = INT32_MAX;
volatile int32_t t132 = -1823802;
int64_t x582 = INT64_MIN;
volatile uint8_t x585 = 32U;
int8_t x587 = INT8_MIN;
int16_t x588 = INT16_MIN;
static volatile int32_t t134 = 47;
static uint8_t x591 = 38U;
static int32_t x595 = INT32_MIN;
uint8_t x598 = 2U;
uint16_t x599 = 1U;
volatile uint64_t x604 = UINT64_MAX;
uint32_t x618 = 1308U;
int8_t x620 = 0;
static volatile int8_t x623 = -1;
int32_t x626 = INT32_MAX;
volatile int8_t x634 = INT8_MIN;
volatile int32_t t145 = -886;
int16_t x640 = -1;
int64_t x646 = -1LL;
uint32_t t149 = 106188730U;
int64_t x655 = -1LL;
static int32_t t150 = -213377299;
int32_t x659 = INT32_MIN;
int16_t x660 = INT16_MIN;
int32_t x661 = INT32_MAX;
uint64_t x670 = 39419139292225555LLU;
static int32_t x674 = -1;
static int32_t x676 = -1;
int32_t x679 = INT32_MIN;
uint64_t x680 = 6318757246720107LLU;
int8_t x686 = INT8_MIN;
int8_t x688 = -1;
int32_t t158 = -211;
int8_t x694 = 14;
int16_t x700 = INT16_MAX;
static volatile int32_t t160 = -2264267;
uint32_t x704 = UINT32_MAX;
int8_t x720 = 0;
volatile int32_t t166 = 106;
volatile uint16_t x726 = 11484U;
uint64_t x730 = 25520LLU;
volatile int32_t t168 = 28140;
int8_t x746 = INT8_MIN;
volatile uint8_t x749 = 77U;
int16_t x751 = INT16_MAX;
int16_t x761 = 3;
int32_t x770 = 3;
uint64_t x774 = UINT64_MAX;
uint32_t x776 = 233889U;
volatile int8_t x779 = -1;
int8_t x786 = INT8_MAX;
uint32_t x791 = 0U;
int32_t x798 = -223402;
static int32_t x802 = INT32_MIN;
int64_t x819 = 5622LL;
volatile uint32_t x821 = 61U;
int16_t x824 = -1;
uint32_t x838 = 500866897U;
volatile int32_t t191 = 8;
uint32_t x848 = 26008U;
int16_t x850 = 55;
volatile int16_t x851 = -2;
static uint32_t x852 = UINT32_MAX;
uint8_t x856 = 3U;
static int32_t t194 = 12157;
uint16_t x857 = 7003U;
int16_t x858 = -1;
static int8_t x863 = INT8_MAX;
volatile int32_t x864 = -1;
uint32_t x866 = UINT32_MAX;
volatile int32_t x868 = -1;
static int16_t x872 = INT16_MIN;
uint64_t x874 = UINT64_MAX;


void f0(void) {
    	volatile int32_t x6 = INT32_MIN;
	volatile int16_t x7 = INT16_MIN;
	volatile uint8_t x8 = 1U;
	volatile int32_t t0 = 32;

    t0 = ((x5>(x6!=x7))-x8);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	int64_t x10 = 2896427400254387370LL;
	volatile uint16_t x11 = 3U;
	int8_t x12 = 1;
	volatile int32_t t1 = -16347;

    t1 = ((x9>(x10!=x11))-x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x13 = -1LL;
	int8_t x14 = -1;
	uint64_t x15 = 6930817808455644420LLU;
	volatile int32_t t2 = 42328;

    t2 = ((x13>(x14!=x15))-x16);

    if (t2 != -58) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	uint8_t x18 = 1U;
	int16_t x19 = 0;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t3 = -116859681;

    t3 = ((x17>(x18!=x19))-x20);

    if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x22 = INT8_MIN;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 398162;

    t4 = ((x21>(x22!=x23))-x24);

    if (t4 != 129) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -226;
	volatile int16_t x26 = 1;
	int16_t x27 = INT16_MAX;
	int8_t x28 = -1;

    t5 = ((x25>(x26!=x27))-x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t t6 = -185870866;

    t6 = ((x29>(x30!=x31))-x32);

    if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int8_t x34 = 6;
	volatile int64_t x35 = -1LL;
	int16_t x36 = -1956;
	int32_t t7 = 1424292;

    t7 = ((x33>(x34!=x35))-x36);

    if (t7 != 1957) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -1;
	int32_t x38 = -48;
	int16_t x39 = INT16_MIN;
	int16_t x40 = -1;
	int32_t t8 = -8;

    t8 = ((x37>(x38!=x39))-x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	static int64_t x42 = -1LL;
	int64_t x43 = INT64_MIN;

    t9 = ((x41>(x42!=x43))-x44);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MAX;
	uint16_t x46 = 7U;
	uint32_t x47 = UINT32_MAX;
	int16_t x48 = INT16_MIN;

    t10 = ((x45>(x46!=x47))-x48);

    if (t10 != 32769) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 61716072424911LLU;
	int64_t x50 = INT64_MAX;
	uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 22034U;
	int32_t t11 = 0;

    t11 = ((x49>(x50!=x51))-x52);

    if (t11 != -22033) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	int64_t x55 = INT64_MAX;
	int16_t x56 = -1;
	int32_t t12 = -9824;

    t12 = ((x53>(x54!=x55))-x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 1745U;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = -1;

    t13 = ((x57>(x58!=x59))-x60);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 685U;
	volatile int64_t x63 = INT64_MIN;
	uint16_t x64 = 6363U;
	volatile int32_t t14 = -1675307;

    t14 = ((x61>(x62!=x63))-x64);

    if (t14 != -6362) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 120718;
	int64_t x67 = INT64_MAX;
	volatile int8_t x68 = INT8_MAX;
	static int32_t t15 = -2921;

    t15 = ((x65>(x66!=x67))-x68);

    if (t15 != -126) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = 797;
	int8_t x70 = -1;
	volatile uint16_t x71 = 191U;
	volatile int32_t t16 = -183;

    t16 = ((x69>(x70!=x71))-x72);

    if (t16 != -11) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = 357542;
	volatile int32_t x75 = 8093476;
	int64_t x76 = 50LL;
	int64_t t17 = -1753303909237067LL;

    t17 = ((x73>(x74!=x75))-x76);

    if (t17 != -49LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MIN;
	uint16_t x78 = 231U;
	uint16_t x80 = 3435U;

    t18 = ((x77>(x78!=x79))-x80);

    if (t18 != -3435) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x85 = -1;
	int16_t x86 = INT16_MIN;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	static int32_t t19 = -2879;

    t19 = ((x85>(x86!=x87))-x88);

    if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x89 = -25;
	int32_t x90 = INT32_MIN;
	static int16_t x91 = INT16_MAX;
	uint16_t x92 = UINT16_MAX;
	static int32_t t20 = 0;

    t20 = ((x89>(x90!=x91))-x92);

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = -395;
	uint64_t x94 = 1059208333076062LLU;
	static volatile int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	volatile int32_t t21 = -272157248;

    t21 = ((x93>(x94!=x95))-x96);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = 124055;
	int32_t x98 = INT32_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile int16_t x100 = INT16_MIN;
	static volatile int32_t t22 = -16799455;

    t22 = ((x97>(x98!=x99))-x100);

    if (t22 != 32769) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x102 = 347U;
	int64_t x104 = -1LL;
	volatile int64_t t23 = 34189600459LL;

    t23 = ((x101>(x102!=x103))-x104);

    if (t23 != 2LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x111 = INT16_MIN;

    t24 = ((x109>(x110!=x111))-x112);

    if (t24 != 18446743658813560002LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = 713990463LL;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = -1;
	int32_t t25 = 90958049;

    t25 = ((x113>(x114!=x115))-x116);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = INT8_MAX;
	static uint64_t x118 = UINT64_MAX;
	static uint64_t x119 = 133999243869LLU;
	volatile int8_t x120 = INT8_MIN;
	volatile int32_t t26 = 6271270;

    t26 = ((x117>(x118!=x119))-x120);

    if (t26 != 129) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 43709218LLU;
	uint8_t x124 = 9U;

    t27 = ((x121>(x122!=x123))-x124);

    if (t27 != -8) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MAX;
	int32_t x127 = INT32_MAX;
	volatile uint8_t x128 = 13U;
	int32_t t28 = 26505485;

    t28 = ((x125>(x126!=x127))-x128);

    if (t28 != -12) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	volatile int32_t x131 = 129077;
	int64_t x132 = -107938338763596350LL;
	int64_t t29 = -145242441151547117LL;

    t29 = ((x129>(x130!=x131))-x132);

    if (t29 != 107938338763596350LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	int64_t x136 = -1LL;
	volatile int64_t t30 = 176000617874LL;

    t30 = ((x133>(x134!=x135))-x136);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x137 = 169058688U;
	int16_t x138 = -2986;
	int64_t x139 = INT64_MIN;
	int32_t x140 = -1;
	volatile int32_t t31 = 1;

    t31 = ((x137>(x138!=x139))-x140);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x141 = INT16_MIN;
	int64_t x143 = -1LL;
	static volatile int32_t t32 = -236;

    t32 = ((x141>(x142!=x143))-x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x145 = INT32_MAX;
	volatile int16_t x146 = -19;
	uint16_t x148 = UINT16_MAX;
	static volatile int32_t t33 = 1915;

    t33 = ((x145>(x146!=x147))-x148);

    if (t33 != -65534) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x150 = -1;
	volatile int64_t x151 = 7531856243991LL;
	int64_t x152 = -1LL;
	static volatile int64_t t34 = -2822484751241LL;

    t34 = ((x149>(x150!=x151))-x152);

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x153 = INT16_MIN;
	volatile int64_t x154 = -1LL;
	uint8_t x156 = 2U;
	volatile int32_t t35 = 482392080;

    t35 = ((x153>(x154!=x155))-x156);

    if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x157 = 65U;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 7U;
	uint32_t x160 = 1320U;
	uint32_t t36 = 7704U;

    t36 = ((x157>(x158!=x159))-x160);

    if (t36 != 4294965977U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x162 = UINT8_MAX;
	volatile uint64_t x163 = 26LLU;
	uint32_t x164 = UINT32_MAX;
	uint32_t t37 = 193589U;

    t37 = ((x161>(x162!=x163))-x164);

    if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x166 = 667338LL;
	int32_t x167 = -51;
	int32_t x168 = -1;
	static volatile int32_t t38 = 379;

    t38 = ((x165>(x166!=x167))-x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 46457U;
	int32_t x171 = -1875;
	volatile int64_t t39 = 6409421LL;

    t39 = ((x169>(x170!=x171))-x172);

    if (t39 != 2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int8_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	volatile uint32_t t40 = 2085465U;

    t40 = ((x173>(x174!=x175))-x176);

    if (t40 != 3907450143U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	volatile int32_t t41 = -34922;

    t41 = ((x177>(x178!=x179))-x180);

    if (t41 != -32766) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = -1;
	int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t42 = -26;

    t42 = ((x181>(x182!=x183))-x184);

    if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x185 = -1;
	static int32_t x186 = INT32_MIN;
	int32_t x188 = -1;

    t43 = ((x185>(x186!=x187))-x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x197 = 7LLU;
	int8_t x198 = -1;
	volatile int32_t x199 = 1;
	uint16_t x200 = UINT16_MAX;
	static int32_t t44 = -666881;

    t44 = ((x197>(x198!=x199))-x200);

    if (t44 != -65534) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x201 = 211LLU;
	volatile int32_t x202 = 1;
	int8_t x203 = 1;
	int8_t x204 = INT8_MIN;
	int32_t t45 = 0;

    t45 = ((x201>(x202!=x203))-x204);

    if (t45 != 129) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x205 = 61806906071LLU;
	static uint16_t x207 = 0U;
	static volatile int16_t x208 = 871;
	int32_t t46 = 34835224;

    t46 = ((x205>(x206!=x207))-x208);

    if (t46 != -870) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MIN;
	static volatile uint16_t x211 = UINT16_MAX;
	int64_t x212 = -31510424LL;

    t47 = ((x209>(x210!=x211))-x212);

    if (t47 != 31510424LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x213 = 8320967U;
	volatile uint32_t x214 = UINT32_MAX;
	static int32_t x215 = INT32_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t48 = 16U;

    t48 = ((x213>(x214!=x215))-x216);

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = -1;
	int8_t x218 = 1;
	volatile int16_t x219 = INT16_MIN;
	static int16_t x220 = INT16_MIN;
	int32_t t49 = 1400;

    t49 = ((x217>(x218!=x219))-x220);

    if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = -1;
	int32_t x222 = -1;
	int64_t x223 = INT64_MAX;
	int16_t x224 = 10403;
	volatile int32_t t50 = 15;

    t50 = ((x221>(x222!=x223))-x224);

    if (t50 != -10403) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x228 = 277315368489119789LLU;
	uint64_t t51 = 93603690575LLU;

    t51 = ((x225>(x226!=x227))-x228);

    if (t51 != 18169428705220431828LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x230 = INT16_MAX;
	int8_t x232 = 0;

    t52 = ((x229>(x230!=x231))-x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = 0;
	static int8_t x234 = -1;
	volatile int64_t x236 = -25872LL;
	int64_t t53 = -4524828760LL;

    t53 = ((x233>(x234!=x235))-x236);

    if (t53 != 25872LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = UINT64_MAX;
	static volatile uint32_t x239 = UINT32_MAX;
	static uint32_t x240 = 1741009213U;
	static volatile uint32_t t54 = 217659107U;

    t54 = ((x237>(x238!=x239))-x240);

    if (t54 != 2553958084U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	int32_t x243 = INT32_MIN;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t55 = 65243100;

    t55 = ((x241>(x242!=x243))-x244);

    if (t55 != -65535) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = -844502512;
	int64_t x246 = INT64_MIN;
	static uint64_t x247 = UINT64_MAX;
	static uint16_t x248 = UINT16_MAX;
	volatile int32_t t56 = -289612568;

    t56 = ((x245>(x246!=x247))-x248);

    if (t56 != -65535) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 7U;
	static int32_t t57 = -1;

    t57 = ((x249>(x250!=x251))-x252);

    if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x253 = 72U;
	volatile int16_t x254 = -45;
	int8_t x255 = -1;
	static uint8_t x256 = UINT8_MAX;

    t58 = ((x253>(x254!=x255))-x256);

    if (t58 != -254) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = -83;
	uint8_t x258 = 117U;
	int32_t x259 = INT32_MAX;
	uint32_t x260 = 200U;
	static uint32_t t59 = 59U;

    t59 = ((x257>(x258!=x259))-x260);

    if (t59 != 4294967096U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x261 = 13;
	static int32_t x262 = INT32_MAX;
	int32_t x263 = 1;
	uint32_t x264 = 524278876U;
	volatile uint32_t t60 = 271U;

    t60 = ((x261>(x262!=x263))-x264);

    if (t60 != 3770688421U) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x265 = 78025LLU;
	int16_t x266 = INT16_MAX;
	int16_t x267 = -32;
	static int64_t x268 = -1LL;
	static int64_t t61 = -6LL;

    t61 = ((x265>(x266!=x267))-x268);

    if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x269 = INT64_MIN;
	volatile int8_t x271 = -1;
	int8_t x272 = -1;
	volatile int32_t t62 = 24;

    t62 = ((x269>(x270!=x271))-x272);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x274 = -1;
	static uint32_t x276 = 411585U;
	volatile uint32_t t63 = 91345879U;

    t63 = ((x273>(x274!=x275))-x276);

    if (t63 != 4294555711U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	uint8_t x280 = UINT8_MAX;

    t64 = ((x277>(x278!=x279))-x280);

    if (t64 != -254) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 0U;
	int64_t x283 = 461981777501971LL;
	int8_t x284 = INT8_MIN;
	int32_t t65 = 424561626;

    t65 = ((x281>(x282!=x283))-x284);

    if (t65 != 129) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x286 = UINT64_MAX;
	volatile uint32_t x287 = 507660701U;
	int64_t x288 = -2012405898954026138LL;
	int64_t t66 = 438230LL;

    t66 = ((x285>(x286!=x287))-x288);

    if (t66 != 2012405898954026138LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x293 = 1073U;
	volatile int16_t x294 = 0;
	uint64_t x295 = 503811302861LLU;
	int64_t x296 = INT64_MAX;
	int64_t t67 = -449922036965LL;

    t67 = ((x293>(x294!=x295))-x296);

    if (t67 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x297 = 30U;
	volatile int64_t x298 = 175163948080303649LL;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = -5166468;
	int32_t t68 = -136119;

    t68 = ((x297>(x298!=x299))-x300);

    if (t68 != 5166469) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x302 = INT32_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t69 = 83643;

    t69 = ((x301>(x302!=x303))-x304);

    if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x305 = -254615469399583671LL;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -1;
	int8_t x308 = INT8_MIN;
	int32_t t70 = 1912;

    t70 = ((x305>(x306!=x307))-x308);

    if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = INT32_MIN;
	int32_t x316 = 1;
	volatile int32_t t71 = -480578715;

    t71 = ((x313>(x314!=x315))-x316);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MIN;
	volatile int8_t x318 = -1;
	int32_t x319 = INT32_MIN;
	uint8_t x320 = 0U;

    t72 = ((x317>(x318!=x319))-x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x321 = 107475LLU;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t x323 = -1LL;
	int8_t x324 = INT8_MIN;
	int32_t t73 = 45350;

    t73 = ((x321>(x322!=x323))-x324);

    if (t73 != 129) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MAX;
	int64_t x327 = -1679523515066551374LL;
	uint32_t t74 = 3458U;

    t74 = ((x325>(x326!=x327))-x328);

    if (t74 != 4208750022U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	int16_t x330 = INT16_MAX;
	volatile uint16_t x331 = 0U;
	volatile uint16_t x332 = 6263U;
	int32_t t75 = 233153;

    t75 = ((x329>(x330!=x331))-x332);

    if (t75 != -6262) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x333 = 102249;
	int32_t x335 = INT32_MIN;
	static volatile int64_t x336 = -2243405358172793105LL;
	int64_t t76 = 874060237960LL;

    t76 = ((x333>(x334!=x335))-x336);

    if (t76 != 2243405358172793106LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x338 = UINT32_MAX;
	static int8_t x339 = -1;
	int32_t t77 = -97884852;

    t77 = ((x337>(x338!=x339))-x340);

    if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x347 = -1;
	int32_t x348 = INT32_MAX;

    t78 = ((x345>(x346!=x347))-x348);

    if (t78 != -2147483646) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x350 = INT16_MIN;
	uint16_t x351 = 30U;

    t79 = ((x349>(x350!=x351))-x352);

    if (t79 != -8058LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x353 = 0U;
	int32_t x354 = 100712;
	int32_t x355 = -1;
	int8_t x356 = -1;

    t80 = ((x353>(x354!=x355))-x356);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x360 = INT8_MAX;
	int32_t t81 = 0;

    t81 = ((x357>(x358!=x359))-x360);

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x361 = UINT8_MAX;
	int32_t x362 = INT32_MIN;
	int64_t x363 = -1914750209792209LL;
	int32_t x364 = -6;
	volatile int32_t t82 = 221958;

    t82 = ((x361>(x362!=x363))-x364);

    if (t82 != 7) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x366 = 0U;
	static volatile int64_t x367 = INT64_MAX;
	static volatile uint64_t x368 = 41213985925863LLU;
	uint64_t t83 = 470586966230LLU;

    t83 = ((x365>(x366!=x367))-x368);

    if (t83 != 18446702859723625754LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = -3624715094177LL;
	int32_t x370 = -5129329;
	int8_t x371 = 1;
	volatile int32_t x372 = -1;

    t84 = ((x369>(x370!=x371))-x372);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x375 = INT64_MIN;
	int64_t x376 = -32668467044401004LL;
	volatile int64_t t85 = 3683898LL;

    t85 = ((x373>(x374!=x375))-x376);

    if (t85 != 32668467044401005LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x381 = INT16_MAX;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = 7575U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t86 = 11;

    t86 = ((x381>(x382!=x383))-x384);

    if (t86 != -65534) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MIN;
	volatile uint32_t x386 = 9067768U;
	int16_t x387 = INT16_MIN;
	static int32_t x388 = -10828431;
	volatile int32_t t87 = -2008496;

    t87 = ((x385>(x386!=x387))-x388);

    if (t87 != 10828431) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x391 = 0U;
	int64_t t88 = 42070775989783LL;

    t88 = ((x389>(x390!=x391))-x392);

    if (t88 != 409897920399855964LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x394 = 26;
	uint32_t x396 = UINT32_MAX;
	uint32_t t89 = 170504161U;

    t89 = ((x393>(x394!=x395))-x396);

    if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x397 = 0U;
	volatile uint8_t x400 = 1U;
	volatile int32_t t90 = -7415623;

    t90 = ((x397>(x398!=x399))-x400);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x401 = INT64_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	static int16_t x404 = INT16_MIN;
	int32_t t91 = -390447;

    t91 = ((x401>(x402!=x403))-x404);

    if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x405 = 10U;
	int8_t x406 = -3;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = 27;
	volatile int32_t t92 = -15633;

    t92 = ((x405>(x406!=x407))-x408);

    if (t92 != -26) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x409 = -10336821714346966LL;
	volatile uint64_t x410 = 5920LLU;
	static uint16_t x411 = 46U;
	int8_t x412 = INT8_MAX;
	int32_t t93 = -1891;

    t93 = ((x409>(x410!=x411))-x412);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x413 = -63;
	int16_t x414 = 177;
	static uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MAX;
	volatile int32_t t94 = -304;

    t94 = ((x413>(x414!=x415))-x416);

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x417 = -48;
	int64_t x418 = -1LL;
	volatile int16_t x420 = 5348;
	volatile int32_t t95 = 28292374;

    t95 = ((x417>(x418!=x419))-x420);

    if (t95 != -5348) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x421 = 500U;
	int16_t x422 = -1;
	int8_t x424 = -1;
	volatile int32_t t96 = 13;

    t96 = ((x421>(x422!=x423))-x424);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x425 = -1;
	uint64_t x426 = 30000672905LLU;
	int8_t x428 = INT8_MAX;
	int32_t t97 = 15355723;

    t97 = ((x425>(x426!=x427))-x428);

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x429 = -5512;
	int32_t x430 = INT32_MAX;
	int64_t x431 = -1LL;
	int32_t t98 = -3335;

    t98 = ((x429>(x430!=x431))-x432);

    if (t98 != -6) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x433 = 26575U;
	int32_t x436 = -2364869;
	int32_t t99 = 0;

    t99 = ((x433>(x434!=x435))-x436);

    if (t99 != 2364870) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x437 = INT64_MAX;
	uint16_t x438 = 430U;
	int8_t x439 = -1;
	uint64_t x440 = UINT64_MAX;

    t100 = ((x437>(x438!=x439))-x440);

    if (t100 != 2LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MAX;
	int64_t x443 = -11408LL;
	static int16_t x444 = 1978;
	volatile int32_t t101 = -209709174;

    t101 = ((x441>(x442!=x443))-x444);

    if (t101 != -1978) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x445 = INT8_MAX;
	volatile int8_t x447 = INT8_MAX;
	volatile int16_t x448 = -1;
	volatile int32_t t102 = 0;

    t102 = ((x445>(x446!=x447))-x448);

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x449 = 437U;
	static int64_t x451 = 586620LL;
	int16_t x452 = -1;
	volatile int32_t t103 = 9902336;

    t103 = ((x449>(x450!=x451))-x452);

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x457 = 234120068062LLU;
	static int64_t x458 = INT64_MAX;
	int32_t t104 = -263467;

    t104 = ((x457>(x458!=x459))-x460);

    if (t104 != -65534) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = -1LL;
	int8_t x462 = 9;
	static volatile int64_t x464 = -1LL;
	int64_t t105 = -4292006873453498LL;

    t105 = ((x461>(x462!=x463))-x464);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x466 = 28U;
	volatile int64_t x467 = INT64_MAX;
	uint32_t x468 = 47U;
	uint32_t t106 = 516326169U;

    t106 = ((x465>(x466!=x467))-x468);

    if (t106 != 4294967249U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = -492429;
	int16_t x470 = INT16_MAX;
	static int8_t x471 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;

    t107 = ((x469>(x470!=x471))-x472);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x474 = INT8_MIN;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t108 = 17629571207416LLU;

    t108 = ((x473>(x474!=x475))-x476);

    if (t108 != 2LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = -13025;
	volatile uint16_t x478 = UINT16_MAX;

    t109 = ((x477>(x478!=x479))-x480);

    if (t109 != -1636453LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x482 = 25592860U;
	volatile int8_t x483 = INT8_MAX;
	static int16_t x484 = -54;
	static volatile int32_t t110 = -247111;

    t110 = ((x481>(x482!=x483))-x484);

    if (t110 != 55) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x485 = UINT16_MAX;
	volatile uint64_t x486 = 1888025LLU;
	uint32_t x487 = 283U;
	int8_t x488 = INT8_MAX;
	int32_t t111 = 1586;

    t111 = ((x485>(x486!=x487))-x488);

    if (t111 != -126) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x489 = 633656U;
	uint8_t x490 = 42U;
	static int16_t x491 = INT16_MIN;
	static int64_t x492 = 738553510793652354LL;
	volatile int64_t t112 = 6677LL;

    t112 = ((x489>(x490!=x491))-x492);

    if (t112 != -738553510793652353LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x493 = 77298690;
	static int64_t x494 = INT64_MIN;
	static uint32_t x495 = UINT32_MAX;
	uint64_t x496 = 56307LLU;
	volatile uint64_t t113 = 113054280666721LLU;

    t113 = ((x493>(x494!=x495))-x496);

    if (t113 != 18446744073709495310LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x497 = -1;
	volatile uint16_t x498 = UINT16_MAX;
	int64_t x499 = -33766967141089LL;
	volatile int32_t x500 = INT32_MAX;
	int32_t t114 = 8964682;

    t114 = ((x497>(x498!=x499))-x500);

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	volatile uint32_t x503 = UINT32_MAX;
	int16_t x504 = -1;
	static int32_t t115 = 551983;

    t115 = ((x501>(x502!=x503))-x504);

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x510 = -23465777;
	static int64_t x511 = -1LL;
	int32_t x512 = 9715078;
	static volatile int32_t t116 = -30509866;

    t116 = ((x509>(x510!=x511))-x512);

    if (t116 != -9715077) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x513 = 253785197;
	static uint32_t x514 = UINT32_MAX;
	int16_t x516 = -1;
	volatile int32_t t117 = 2732911;

    t117 = ((x513>(x514!=x515))-x516);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x517 = INT8_MAX;
	int16_t x518 = -1130;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = -1LL;
	volatile int64_t t118 = -11258LL;

    t118 = ((x517>(x518!=x519))-x520);

    if (t118 != 2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x522 = INT64_MIN;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t119 = 1971;

    t119 = ((x521>(x522!=x523))-x524);

    if (t119 != 32768) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x525 = 60U;
	uint64_t x526 = 23LLU;
	volatile int32_t x527 = 241408;
	int16_t x528 = -1;
	int32_t t120 = 12;

    t120 = ((x525>(x526!=x527))-x528);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = INT8_MIN;
	static int16_t x534 = -91;
	static int8_t x535 = INT8_MIN;
	static uint8_t x536 = 1U;
	int32_t t121 = -26083011;

    t121 = ((x533>(x534!=x535))-x536);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x538 = UINT64_MAX;
	static int16_t x539 = INT16_MAX;
	volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t122 = 193;

    t122 = ((x537>(x538!=x539))-x540);

    if (t122 != 129) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x541 = UINT16_MAX;
	uint16_t x542 = 12U;
	volatile int8_t x543 = 2;
	int64_t t123 = 40575121441414LL;

    t123 = ((x541>(x542!=x543))-x544);

    if (t123 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x545 = INT32_MIN;
	int64_t x546 = -1LL;
	int16_t x547 = INT16_MIN;
	int64_t x548 = INT64_MAX;
	volatile int64_t t124 = -13LL;

    t124 = ((x545>(x546!=x547))-x548);

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x550 = 60637;
	uint64_t x551 = 2LLU;
	int8_t x552 = INT8_MIN;
	volatile int32_t t125 = -40;

    t125 = ((x549>(x550!=x551))-x552);

    if (t125 != 129) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = INT64_MAX;
	static int32_t x554 = -395278;
	int16_t x555 = INT16_MAX;
	int64_t x556 = INT64_MAX;
	volatile int64_t t126 = -982LL;

    t126 = ((x553>(x554!=x555))-x556);

    if (t126 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = -16377413089971LL;
	int32_t x558 = INT32_MIN;
	volatile int32_t t127 = -30;

    t127 = ((x557>(x558!=x559))-x560);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x561 = -1;
	static int64_t x562 = 11550045697803LL;
	static int8_t x563 = 1;
	int32_t x564 = INT32_MAX;

    t128 = ((x561>(x562!=x563))-x564);

    if (t128 != -2147483647) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x565 = 37U;
	static uint8_t x566 = 22U;
	static volatile int64_t x567 = INT64_MIN;
	static int64_t t129 = 1044414596543LL;

    t129 = ((x565>(x566!=x567))-x568);

    if (t129 != 2LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x569 = 547108U;
	static uint8_t x570 = 18U;
	static uint8_t x572 = UINT8_MAX;
	int32_t t130 = -182547;

    t130 = ((x569>(x570!=x571))-x572);

    if (t130 != -254) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x573 = -409928;
	uint16_t x575 = 7U;
	uint64_t x576 = 6673512477670169LLU;
	uint64_t t131 = 2653785207342127251LLU;

    t131 = ((x573>(x574!=x575))-x576);

    if (t131 != 18440070561231881447LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x577 = -13;
	uint64_t x578 = 27LLU;
	volatile uint16_t x579 = UINT16_MAX;
	int16_t x580 = INT16_MIN;

    t132 = ((x577>(x578!=x579))-x580);

    if (t132 != 32768) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x581 = 50;
	volatile uint8_t x583 = UINT8_MAX;
	uint64_t x584 = UINT64_MAX;
	uint64_t t133 = 1LLU;

    t133 = ((x581>(x582!=x583))-x584);

    if (t133 != 2LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x586 = UINT8_MAX;

    t134 = ((x585>(x586!=x587))-x588);

    if (t134 != 32769) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x589 = INT32_MIN;
	volatile uint8_t x590 = 2U;
	int64_t x592 = -1LL;
	volatile int64_t t135 = 13LL;

    t135 = ((x589>(x590!=x591))-x592);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x593 = -1LL;
	uint8_t x594 = 3U;
	static int8_t x596 = -1;
	volatile int32_t t136 = -618;

    t136 = ((x593>(x594!=x595))-x596);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	uint32_t x600 = UINT32_MAX;
	uint32_t t137 = 0U;

    t137 = ((x597>(x598!=x599))-x600);

    if (t137 != 2U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x601 = INT16_MIN;
	int64_t x602 = INT64_MIN;
	static int8_t x603 = INT8_MIN;
	volatile uint64_t t138 = 99249186593316104LLU;

    t138 = ((x601>(x602!=x603))-x604);

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = -1LL;
	uint16_t x607 = UINT16_MAX;
	static int16_t x608 = 1167;
	volatile int32_t t139 = -3378;

    t139 = ((x605>(x606!=x607))-x608);

    if (t139 != -1167) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x609 = 2898348;
	int32_t x610 = INT32_MIN;
	static uint16_t x611 = 507U;
	uint64_t x612 = 4178954484875857LLU;
	uint64_t t140 = 64440485220447613LLU;

    t140 = ((x609>(x610!=x611))-x612);

    if (t140 != 18442565119224675760LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x613 = INT8_MIN;
	static volatile int64_t x614 = INT64_MIN;
	int64_t x615 = INT64_MIN;
	uint64_t x616 = 58818701559747LLU;
	uint64_t t141 = 319044304970385675LLU;

    t141 = ((x613>(x614!=x615))-x616);

    if (t141 != 18446685255007991869LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x617 = 82;
	volatile int8_t x619 = 1;
	static volatile int32_t t142 = 161379865;

    t142 = ((x617>(x618!=x619))-x620);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x621 = 324725556LLU;
	int32_t x622 = -1;
	static int16_t x624 = INT16_MIN;
	static int32_t t143 = -83;

    t143 = ((x621>(x622!=x623))-x624);

    if (t143 != 32769) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x625 = INT8_MIN;
	uint8_t x627 = UINT8_MAX;
	volatile int8_t x628 = 55;
	volatile int32_t t144 = -2560485;

    t144 = ((x625>(x626!=x627))-x628);

    if (t144 != -55) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x633 = 100U;
	uint64_t x635 = 512613820330905171LLU;
	int16_t x636 = -1;

    t145 = ((x633>(x634!=x635))-x636);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x637 = -8068;
	static uint8_t x638 = 4U;
	volatile uint64_t x639 = UINT64_MAX;
	static int32_t t146 = -37014;

    t146 = ((x637>(x638!=x639))-x640);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x641 = INT16_MAX;
	static int32_t x642 = -1;
	volatile uint16_t x643 = UINT16_MAX;
	volatile int16_t x644 = INT16_MAX;
	volatile int32_t t147 = -1;

    t147 = ((x641>(x642!=x643))-x644);

    if (t147 != -32766) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x645 = 0;
	int32_t x647 = INT32_MIN;
	int64_t x648 = -1LL;
	volatile int64_t t148 = -9413LL;

    t148 = ((x645>(x646!=x647))-x648);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x649 = UINT32_MAX;
	volatile int64_t x650 = INT64_MAX;
	static int16_t x651 = INT16_MAX;
	uint32_t x652 = UINT32_MAX;

    t149 = ((x649>(x650!=x651))-x652);

    if (t149 != 2U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x653 = UINT64_MAX;
	int64_t x654 = 1030696252439LL;
	int16_t x656 = INT16_MIN;

    t150 = ((x653>(x654!=x655))-x656);

    if (t150 != 32769) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x658 = INT16_MIN;
	volatile int32_t t151 = 436663;

    t151 = ((x657>(x658!=x659))-x660);

    if (t151 != 32768) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x662 = -1;
	int16_t x663 = INT16_MIN;
	volatile uint16_t x664 = 17U;
	int32_t t152 = 1;

    t152 = ((x661>(x662!=x663))-x664);

    if (t152 != -16) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x669 = 5167U;
	int16_t x671 = -13340;
	static int64_t x672 = -1LL;
	int64_t t153 = -15353336470LL;

    t153 = ((x669>(x670!=x671))-x672);

    if (t153 != 2LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x673 = 31U;
	static int64_t x675 = 23407LL;
	volatile int32_t t154 = -873;

    t154 = ((x673>(x674!=x675))-x676);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x677 = INT64_MIN;
	static volatile int16_t x678 = INT16_MIN;
	uint64_t t155 = 627897LLU;

    t155 = ((x677>(x678!=x679))-x680);

    if (t155 != 18440425316462831509LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x681 = INT8_MAX;
	static uint16_t x682 = 8U;
	static uint64_t x683 = 20371340908419045LLU;
	int32_t x684 = -1;
	volatile int32_t t156 = -4754596;

    t156 = ((x681>(x682!=x683))-x684);

    if (t156 != 2) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x685 = INT32_MIN;
	uint64_t x687 = 26LLU;
	volatile int32_t t157 = -1;

    t157 = ((x685>(x686!=x687))-x688);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x689 = INT32_MAX;
	volatile int32_t x690 = INT32_MIN;
	int16_t x691 = 25;
	volatile uint16_t x692 = 7U;

    t158 = ((x689>(x690!=x691))-x692);

    if (t158 != -6) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x693 = INT8_MIN;
	volatile int16_t x695 = INT16_MIN;
	static volatile int8_t x696 = -2;
	int32_t t159 = 4325603;

    t159 = ((x693>(x694!=x695))-x696);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x697 = 0;
	int8_t x698 = INT8_MIN;
	int64_t x699 = INT64_MIN;

    t160 = ((x697>(x698!=x699))-x700);

    if (t160 != -32767) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x701 = -1LL;
	uint16_t x702 = UINT16_MAX;
	static uint32_t x703 = UINT32_MAX;
	uint32_t t161 = 5U;

    t161 = ((x701>(x702!=x703))-x704);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x705 = -1;
	int8_t x706 = -60;
	int8_t x707 = INT8_MIN;
	int32_t x708 = -1;
	static volatile int32_t t162 = 21;

    t162 = ((x705>(x706!=x707))-x708);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x709 = INT32_MIN;
	int32_t x710 = INT32_MIN;
	int8_t x711 = 27;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t163 = 94;

    t163 = ((x709>(x710!=x711))-x712);

    if (t163 != -255) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	int16_t x714 = INT16_MIN;
	static int32_t x715 = INT32_MIN;
	uint32_t x716 = 9505133U;
	uint32_t t164 = 74612U;

    t164 = ((x713>(x714!=x715))-x716);

    if (t164 != 4285462164U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 8U;
	int16_t x719 = INT16_MAX;
	volatile int32_t t165 = 21625;

    t165 = ((x717>(x718!=x719))-x720);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x721 = INT16_MAX;
	static int16_t x722 = INT16_MIN;
	int8_t x723 = INT8_MAX;
	int8_t x724 = INT8_MIN;

    t166 = ((x721>(x722!=x723))-x724);

    if (t166 != 129) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x725 = -13;
	int8_t x727 = -1;
	int16_t x728 = -9;
	volatile int32_t t167 = 1;

    t167 = ((x725>(x726!=x727))-x728);

    if (t167 != 9) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x729 = -1LL;
	uint32_t x731 = 2853U;
	int8_t x732 = -3;

    t168 = ((x729>(x730!=x731))-x732);

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	static int16_t x734 = INT16_MIN;
	static int32_t x735 = INT32_MAX;
	volatile uint64_t x736 = 3LLU;
	volatile uint64_t t169 = 526036793LLU;

    t169 = ((x733>(x734!=x735))-x736);

    if (t169 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x737 = 4603341;
	int8_t x738 = -28;
	uint64_t x739 = 12LLU;
	int8_t x740 = -1;
	int32_t t170 = 4020021;

    t170 = ((x737>(x738!=x739))-x740);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x741 = UINT8_MAX;
	static int32_t x742 = INT32_MIN;
	uint16_t x743 = 7U;
	int16_t x744 = 18;
	static int32_t t171 = 363;

    t171 = ((x741>(x742!=x743))-x744);

    if (t171 != -17) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x745 = INT64_MAX;
	int16_t x747 = 9958;
	static int16_t x748 = -13;
	int32_t t172 = -41254502;

    t172 = ((x745>(x746!=x747))-x748);

    if (t172 != 14) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x750 = INT16_MIN;
	volatile int16_t x752 = INT16_MIN;
	int32_t t173 = 2891;

    t173 = ((x749>(x750!=x751))-x752);

    if (t173 != 32769) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x753 = 5868;
	volatile uint32_t x754 = 464U;
	static int8_t x755 = INT8_MAX;
	uint64_t x756 = 490LLU;
	uint64_t t174 = 140LLU;

    t174 = ((x753>(x754!=x755))-x756);

    if (t174 != 18446744073709551127LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x757 = INT8_MAX;
	volatile int16_t x758 = 17;
	int64_t x759 = 7191140406424623LL;
	int16_t x760 = 0;
	static int32_t t175 = 0;

    t175 = ((x757>(x758!=x759))-x760);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x762 = INT64_MAX;
	uint8_t x763 = 1U;
	uint64_t x764 = 4466558LLU;
	volatile uint64_t t176 = 1165685938476926LLU;

    t176 = ((x761>(x762!=x763))-x764);

    if (t176 != 18446744073705085059LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x769 = INT32_MIN;
	volatile int16_t x771 = INT16_MAX;
	int8_t x772 = INT8_MAX;
	volatile int32_t t177 = 30978696;

    t177 = ((x769>(x770!=x771))-x772);

    if (t177 != -127) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x773 = 12;
	uint8_t x775 = 3U;
	volatile uint32_t t178 = 2627062U;

    t178 = ((x773>(x774!=x775))-x776);

    if (t178 != 4294733408U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x777 = 43U;
	static uint16_t x778 = UINT16_MAX;
	static volatile int8_t x780 = -1;
	static int32_t t179 = 4;

    t179 = ((x777>(x778!=x779))-x780);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = INT16_MIN;
	static int8_t x787 = INT8_MIN;
	static volatile int16_t x788 = INT16_MIN;
	int32_t t180 = 689;

    t180 = ((x785>(x786!=x787))-x788);

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x789 = INT64_MIN;
	int16_t x790 = INT16_MAX;
	int16_t x792 = 37;
	int32_t t181 = 1818510;

    t181 = ((x789>(x790!=x791))-x792);

    if (t181 != -37) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x793 = INT16_MIN;
	static int8_t x794 = INT8_MIN;
	int32_t x795 = INT32_MIN;
	static volatile int32_t x796 = INT32_MAX;
	volatile int32_t t182 = 11840919;

    t182 = ((x793>(x794!=x795))-x796);

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x797 = -1;
	uint8_t x799 = UINT8_MAX;
	static volatile int32_t x800 = -1;
	volatile int32_t t183 = -2257519;

    t183 = ((x797>(x798!=x799))-x800);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x801 = INT16_MAX;
	int64_t x803 = -1LL;
	static int64_t x804 = -1LL;
	int64_t t184 = -521995716208LL;

    t184 = ((x801>(x802!=x803))-x804);

    if (t184 != 2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x805 = 935U;
	int16_t x806 = INT16_MAX;
	int16_t x807 = INT16_MIN;
	int32_t x808 = -1;
	int32_t t185 = 30294575;

    t185 = ((x805>(x806!=x807))-x808);

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x809 = -230LL;
	int64_t x810 = INT64_MAX;
	int8_t x811 = INT8_MIN;
	uint16_t x812 = 117U;
	volatile int32_t t186 = -14941394;

    t186 = ((x809>(x810!=x811))-x812);

    if (t186 != -117) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x813 = INT32_MAX;
	int16_t x814 = -6867;
	int16_t x815 = INT16_MIN;
	uint64_t x816 = 5144LLU;
	static uint64_t t187 = 39039LLU;

    t187 = ((x813>(x814!=x815))-x816);

    if (t187 != 18446744073709546473LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x817 = INT32_MIN;
	int32_t x818 = INT32_MIN;
	uint64_t x820 = 6LLU;
	uint64_t t188 = 1872612LLU;

    t188 = ((x817>(x818!=x819))-x820);

    if (t188 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x822 = -1;
	volatile int64_t x823 = INT64_MIN;
	volatile int32_t t189 = 225332;

    t189 = ((x821>(x822!=x823))-x824);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x825 = INT16_MIN;
	int64_t x826 = INT64_MIN;
	int16_t x827 = -5448;
	int8_t x828 = INT8_MAX;
	int32_t t190 = -3171080;

    t190 = ((x825>(x826!=x827))-x828);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x837 = 6680306554102272LLU;
	int32_t x839 = 203078;
	uint8_t x840 = UINT8_MAX;

    t191 = ((x837>(x838!=x839))-x840);

    if (t191 != -254) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x845 = -1;
	int64_t x846 = 18683703LL;
	static volatile int8_t x847 = INT8_MIN;
	uint32_t t192 = 7883233U;

    t192 = ((x845>(x846!=x847))-x848);

    if (t192 != 4294941288U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x849 = 1U;
	uint32_t t193 = 8486090U;

    t193 = ((x849>(x850!=x851))-x852);

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x853 = INT8_MAX;
	int32_t x854 = 193;
	uint8_t x855 = 112U;

    t194 = ((x853>(x854!=x855))-x856);

    if (t194 != -2) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x859 = UINT16_MAX;
	int32_t x860 = INT32_MAX;
	static volatile int32_t t195 = -152;

    t195 = ((x857>(x858!=x859))-x860);

    if (t195 != -2147483646) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x861 = -1;
	uint8_t x862 = UINT8_MAX;
	int32_t t196 = -11;

    t196 = ((x861>(x862!=x863))-x864);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int16_t x865 = INT16_MIN;
	uint32_t x867 = UINT32_MAX;
	volatile int32_t t197 = -956429879;

    t197 = ((x865>(x866!=x867))-x868);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x869 = -1;
	volatile uint16_t x870 = UINT16_MAX;
	int32_t x871 = -1;
	int32_t t198 = -14;

    t198 = ((x869>(x870!=x871))-x872);

    if (t198 != 32768) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x873 = 12U;
	volatile uint64_t x875 = UINT64_MAX;
	static uint8_t x876 = UINT8_MAX;
	int32_t t199 = 0;

    t199 = ((x873>(x874!=x875))-x876);

    if (t199 != -254) { NG(); } else { ; }
	
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

