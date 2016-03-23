
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

static int8_t x2 = 11;
uint8_t x17 = 0U;
int32_t t5 = 115708;
uint16_t x32 = 160U;
volatile int32_t t7 = 11968349;
int8_t x36 = -1;
static uint8_t x39 = 4U;
volatile int32_t t10 = 1;
uint64_t x52 = UINT64_MAX;
uint8_t x53 = UINT8_MAX;
static uint64_t x55 = UINT64_MAX;
volatile int32_t x61 = 93014567;
int16_t x63 = -24;
int16_t x65 = INT16_MAX;
volatile uint32_t x69 = UINT32_MAX;
volatile int32_t t18 = 2012;
int32_t x87 = INT32_MIN;
int8_t x93 = INT8_MIN;
static int64_t x101 = -1LL;
static int8_t x102 = INT8_MIN;
int32_t t26 = 104781;
int8_t x114 = 0;
int64_t x116 = -1LL;
int32_t t28 = -7233474;
static uint16_t x119 = UINT16_MAX;
volatile uint64_t x121 = 25LLU;
int16_t x136 = -11;
volatile int8_t x140 = INT8_MIN;
volatile int16_t x147 = -13909;
uint64_t x152 = UINT64_MAX;
static volatile int16_t x156 = INT16_MAX;
static int32_t t38 = 20101369;
int8_t x160 = -1;
volatile int8_t x162 = -15;
static int32_t x166 = 105;
int64_t x174 = 119680708LL;
static int32_t x176 = -11796;
uint64_t x178 = UINT64_MAX;
uint16_t x179 = 24U;
uint16_t x181 = 30177U;
volatile int32_t t45 = -98;
int8_t x185 = -2;
int16_t x190 = INT16_MIN;
int32_t t47 = -591;
uint32_t x196 = UINT32_MAX;
volatile int32_t t48 = 578;
int16_t x197 = 0;
int32_t x200 = INT32_MIN;
volatile int64_t x205 = -299867791113104264LL;
int64_t x206 = -1LL;
static volatile int32_t t51 = 0;
static uint32_t x209 = UINT32_MAX;
volatile int16_t x212 = -71;
int64_t x221 = 471LL;
volatile int16_t x222 = INT16_MAX;
uint32_t x223 = 864U;
static int16_t x233 = INT16_MIN;
int16_t x241 = INT16_MIN;
int8_t x245 = INT8_MIN;
uint32_t x260 = UINT32_MAX;
static int32_t t65 = 31530390;
uint8_t x265 = 40U;
static int16_t x268 = 358;
static uint8_t x270 = UINT8_MAX;
static volatile int8_t x274 = 1;
int8_t x276 = INT8_MAX;
int16_t x280 = 325;
uint32_t x281 = UINT32_MAX;
uint32_t x286 = 61988760U;
volatile int64_t x288 = INT64_MIN;
volatile int32_t t71 = 405;
uint16_t x289 = 9U;
static uint16_t x292 = 47U;
uint16_t x295 = UINT16_MAX;
static volatile int8_t x296 = -1;
uint64_t x305 = 10940537560348LLU;
volatile int8_t x308 = INT8_MIN;
static uint32_t x310 = 301454700U;
int8_t x312 = -9;
int32_t x317 = -56109;
uint16_t x323 = 16U;
uint8_t x331 = 5U;
uint64_t x334 = 86LLU;
int8_t x335 = -1;
int32_t x336 = -147;
static volatile int32_t t85 = -165980348;
int32_t x345 = INT32_MAX;
int64_t x350 = 358858218379426LL;
static int16_t x359 = INT16_MIN;
int16_t x360 = INT16_MAX;
volatile int32_t t91 = -1479;
int32_t t92 = 61;
int16_t x375 = -6800;
int8_t x377 = INT8_MIN;
static uint32_t x380 = 8170U;
int32_t t94 = 619477217;
uint8_t x382 = UINT8_MAX;
int32_t x390 = 14531406;
volatile int32_t t98 = 5;
volatile int16_t x402 = INT16_MAX;
volatile uint8_t x404 = UINT8_MAX;
uint32_t x405 = 197338549U;
int64_t x409 = -67512633607498LL;
uint32_t x412 = UINT32_MAX;
int16_t x415 = 5671;
uint16_t x416 = 4444U;
volatile int32_t t105 = 3315259;
int8_t x426 = INT8_MAX;
uint16_t x445 = 369U;
static int16_t x455 = INT16_MIN;
static int64_t x456 = INT64_MAX;
static volatile int32_t t113 = -833847151;
int16_t x458 = INT16_MIN;
volatile uint16_t x464 = UINT16_MAX;
static volatile int32_t t115 = 134772;
int32_t x472 = -8984097;
static int32_t x475 = INT32_MAX;
uint32_t x479 = 464197860U;
static volatile int8_t x480 = -3;
uint32_t x486 = 2U;
static volatile int8_t x494 = INT8_MIN;
volatile int8_t x498 = INT8_MIN;
volatile int32_t t125 = 7385;
int16_t x515 = -1;
int32_t x518 = INT32_MAX;
uint16_t x521 = UINT16_MAX;
static int64_t x530 = INT64_MIN;
uint16_t x531 = 8U;
uint32_t x536 = 265464U;
int32_t x542 = INT32_MAX;
uint16_t x546 = 40U;
int16_t x547 = -1;
static volatile uint8_t x549 = 0U;
volatile int32_t t138 = 1586;
int64_t x565 = -38175113754LL;
int16_t x567 = -1;
int64_t x580 = INT64_MIN;
static uint16_t x585 = UINT16_MAX;
volatile int32_t x593 = INT32_MAX;
volatile int64_t x594 = -1LL;
int32_t x596 = INT32_MIN;
int32_t x601 = 29972680;
uint16_t x605 = 14U;
int64_t x607 = -1LL;
volatile int32_t x609 = -1;
int16_t x612 = -3216;
int32_t x615 = 95;
static int32_t t155 = -376069;
static int8_t x625 = INT8_MAX;
volatile int64_t x626 = 6023685174355778LL;
volatile uint32_t x641 = 187U;
int32_t t160 = 8578526;
uint32_t x647 = 1U;
int64_t x651 = INT64_MIN;
static int32_t t162 = -1671;
int32_t t163 = 4346630;
static uint8_t x670 = 0U;
int8_t x671 = -1;
uint32_t x675 = 60645403U;
int64_t x676 = INT64_MAX;
int16_t x690 = INT16_MIN;
int16_t x696 = INT16_MIN;
int32_t x698 = -1;
int32_t t174 = -1;
int8_t x702 = INT8_MIN;
static volatile int64_t x706 = INT64_MAX;
int32_t t176 = 13921;
int32_t x710 = -1;
int32_t x717 = -1;
volatile uint64_t x720 = UINT64_MAX;
volatile uint8_t x723 = 3U;
uint8_t x725 = 3U;
int8_t x727 = -1;
int64_t x732 = -997628LL;
int64_t x736 = -1LL;
static uint8_t x741 = UINT8_MAX;
volatile int64_t x742 = -1LL;
int8_t x743 = INT8_MIN;
static int64_t x744 = INT64_MAX;
static volatile int32_t t186 = -21;
uint32_t x755 = 1309570596U;
volatile int32_t t188 = 2564;
volatile int32_t t189 = 495314;
uint64_t x762 = 6059LLU;
uint8_t x769 = 8U;
volatile int32_t t192 = -3971;
int16_t x778 = INT16_MIN;
static uint8_t x781 = 11U;
static uint8_t x784 = UINT8_MAX;
uint16_t x786 = 4U;
int8_t x798 = -2;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int8_t x3 = 0;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 267227701;

    t0 = (((x1^x2)<=x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 1;
	int64_t x6 = INT64_MIN;
	uint16_t x7 = 7977U;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -45890504;

    t1 = (((x5^x6)<=x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x9 = 1U;
	int8_t x10 = 31;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -2474061;
	volatile int32_t t2 = -102400;

    t2 = (((x9^x10)<=x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int16_t x14 = -1;
	int8_t x15 = 4;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 12157;

    t3 = (((x13^x14)<=x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = UINT32_MAX;
	static uint32_t x19 = 198U;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t4 = -192257;

    t4 = (((x17^x18)<=x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	volatile int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MAX;
	static int32_t x24 = -1;

    t5 = (((x21^x22)<=x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 0LLU;
	int8_t x26 = INT8_MIN;
	static int64_t x27 = INT64_MAX;
	int16_t x28 = -1347;
	int32_t t6 = 0;

    t6 = (((x25^x26)<=x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = 16U;
	volatile uint16_t x31 = 19711U;

    t7 = (((x29^x30)<=x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int64_t x34 = 4898263LL;
	uint8_t x35 = 1U;
	static volatile int32_t t8 = -28234921;

    t8 = (((x33^x34)<=x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	uint64_t x40 = 247295720565LLU;
	volatile int32_t t9 = 1044080172;

    t9 = (((x37^x38)<=x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 91U;
	int16_t x42 = -1;
	static int32_t x43 = -1;
	int16_t x44 = INT16_MIN;

    t10 = (((x41^x42)<=x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -4588722719508LL;
	uint32_t x47 = 14U;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -353605517;

    t11 = (((x45^x46)<=x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 12226U;
	int8_t x50 = -1;
	volatile uint8_t x51 = 102U;
	static volatile int32_t t12 = 39172130;

    t12 = (((x49^x50)<=x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x54 = 4U;
	int16_t x56 = -1;
	volatile int32_t t13 = 29185;

    t13 = (((x53^x54)<=x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 8U;
	int8_t x58 = -7;
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -8;

    t14 = (((x57^x58)<=x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x62 = 26934LL;
	static int16_t x64 = INT16_MAX;
	static volatile int32_t t15 = 66174664;

    t15 = (((x61^x62)<=x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 141803;

    t16 = (((x65^x66)<=x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = 6;
	static uint32_t x72 = 3670U;
	volatile int32_t t17 = 173;

    t17 = (((x69^x70)<=x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	static volatile int64_t x74 = INT64_MIN;
	int32_t x75 = -1;
	volatile uint8_t x76 = 2U;

    t18 = (((x73^x74)<=x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 378LLU;
	int16_t x78 = INT16_MAX;
	static volatile int32_t x79 = -124;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 0;

    t19 = (((x77^x78)<=x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	int64_t x82 = -1LL;
	int8_t x83 = 0;
	volatile int16_t x84 = 165;
	int32_t t20 = -61751;

    t20 = (((x81^x82)<=x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	uint16_t x86 = 5131U;
	volatile uint16_t x88 = 7U;
	int32_t t21 = -406;

    t21 = (((x85^x86)<=x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	volatile int64_t x90 = -1LL;
	volatile int64_t x91 = -1LL;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -74391;

    t22 = (((x89^x90)<=x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	static int64_t x95 = INT64_MIN;
	int64_t x96 = 134207794471380735LL;
	int32_t t23 = -1;

    t23 = (((x93^x94)<=x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 6484LL;
	volatile uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MAX;
	static volatile int64_t x100 = -429459884136144341LL;
	volatile int32_t t24 = 37019;

    t24 = (((x97^x98)<=x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x103 = -12;
	int8_t x104 = -1;
	int32_t t25 = 6738;

    t25 = (((x101^x102)<=x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	static int8_t x106 = INT8_MAX;
	volatile uint32_t x107 = 1U;
	static int32_t x108 = INT32_MAX;

    t26 = (((x105^x106)<=x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 229;
	int64_t x110 = INT64_MIN;
	uint32_t x111 = 588546U;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -125516;

    t27 = (((x109^x110)<=x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 3U;
	volatile int16_t x115 = INT16_MAX;

    t28 = (((x113^x114)<=x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = 41;
	static int16_t x118 = -30;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -50789714;

    t29 = (((x117^x118)<=x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	static int64_t x124 = INT64_MIN;
	int32_t t30 = -5967;

    t30 = (((x121^x122)<=x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	static uint16_t x126 = UINT16_MAX;
	volatile uint8_t x127 = 1U;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = 6955062;

    t31 = (((x125^x126)<=x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = 71376180978774LL;
	volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -84629652282369792LL;
	volatile int32_t t32 = -1;

    t32 = (((x129^x130)<=x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	static uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MAX;
	static int32_t t33 = -114;

    t33 = (((x133^x134)<=x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	uint32_t x138 = 2749U;
	int8_t x139 = INT8_MIN;
	int32_t t34 = -1570944;

    t34 = (((x137^x138)<=x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 82033731922LLU;
	int64_t x142 = 31927965LL;
	static int64_t x143 = INT64_MIN;
	uint64_t x144 = 5956943178564LLU;
	int32_t t35 = 161;

    t35 = (((x141^x142)<=x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 155U;
	volatile int32_t x146 = -1;
	uint64_t x148 = 13LLU;
	volatile int32_t t36 = -3;

    t36 = (((x145^x146)<=x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 498U;
	volatile int32_t x150 = 1;
	uint32_t x151 = 566996559U;
	static int32_t t37 = -139;

    t37 = (((x149^x150)<=x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MIN;
	int64_t x154 = 8388731401339009LL;
	static int8_t x155 = INT8_MIN;

    t38 = (((x153^x154)<=x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -16872LL;
	volatile int8_t x158 = 0;
	volatile int64_t x159 = 133549802673385713LL;
	int32_t t39 = -689;

    t39 = (((x157^x158)<=x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x161 = 50U;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 6014U;
	int32_t t40 = 7113333;

    t40 = (((x161^x162)<=x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -1;

    t41 = (((x165^x166)<=x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 79710353U;
	int16_t x170 = INT16_MIN;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -1;
	int32_t t42 = -229;

    t42 = (((x169^x170)<=x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MAX;
	int64_t x175 = 29615517072537929LL;
	volatile int32_t t43 = -3;

    t43 = (((x173^x174)<=x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 216;

    t44 = (((x177^x178)<=x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x182 = UINT64_MAX;
	uint8_t x183 = 6U;
	int32_t x184 = INT32_MIN;

    t45 = (((x181^x182)<=x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = 1U;
	int16_t x187 = -1;
	int16_t x188 = -1;
	volatile int32_t t46 = 113659300;

    t46 = (((x185^x186)<=x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;

    t47 = (((x189^x190)<=x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 43289LLU;
	static int16_t x194 = INT16_MAX;
	int8_t x195 = -1;

    t48 = (((x193^x194)<=x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x198 = 1U;
	uint16_t x199 = 29540U;
	volatile int32_t t49 = -8038;

    t49 = (((x197^x198)<=x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -112LL;
	int32_t x202 = INT32_MIN;
	int16_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t50 = 0;

    t50 = (((x201^x202)<=x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x207 = 28559LL;
	uint32_t x208 = 3122U;

    t51 = (((x205^x206)<=x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = 373;
	volatile int32_t x211 = INT32_MIN;
	volatile int32_t t52 = 1;

    t52 = (((x209^x210)<=x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	volatile int16_t x214 = 5;
	int64_t x215 = 18870563917LL;
	int16_t x216 = -1;
	int32_t t53 = -388898;

    t53 = (((x213^x214)<=x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 76488529912LL;
	volatile uint32_t x218 = UINT32_MAX;
	int64_t x219 = -1LL;
	uint32_t x220 = 1235770U;
	static int32_t t54 = 17;

    t54 = (((x217^x218)<=x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x224 = -16;
	int32_t t55 = 80523943;

    t55 = (((x221^x222)<=x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -28;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 1276;

    t56 = (((x225^x226)<=x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	int16_t x231 = 7991;
	static uint64_t x232 = 158LLU;
	volatile int32_t t57 = 18;

    t57 = (((x229^x230)<=x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 1;

    t58 = (((x233^x234)<=x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 1;
	volatile int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MAX;
	static int32_t x240 = -55795;
	volatile int32_t t59 = 142504900;

    t59 = (((x237^x238)<=x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = -17995;
	static int8_t x243 = -2;
	static int64_t x244 = -1LL;
	static int32_t t60 = 2;

    t60 = (((x241^x242)<=x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x246 = 133467642707869LLU;
	int8_t x247 = INT8_MAX;
	static int8_t x248 = INT8_MIN;
	static int32_t t61 = -520389853;

    t61 = (((x245^x246)<=x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MIN;
	int32_t x250 = -946914;
	uint32_t x251 = 69069815U;
	volatile int64_t x252 = INT64_MAX;
	int32_t t62 = 206408;

    t62 = (((x249^x250)<=x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = -1;
	volatile int8_t x254 = -13;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 0U;
	static volatile int32_t t63 = 102666781;

    t63 = (((x253^x254)<=x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x257 = 46U;
	uint32_t x258 = UINT32_MAX;
	volatile uint16_t x259 = 174U;
	volatile int32_t t64 = -426134;

    t64 = (((x257^x258)<=x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x261 = -1;
	int16_t x262 = -1;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = -1;

    t65 = (((x261^x262)<=x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x266 = -147450LL;
	uint32_t x267 = 434660U;
	static volatile int32_t t66 = -11885;

    t66 = (((x265^x266)<=x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = INT8_MIN;
	volatile int16_t x271 = 25;
	uint32_t x272 = UINT32_MAX;
	static volatile int32_t t67 = -359683;

    t67 = (((x269^x270)<=x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MIN;
	static int32_t x275 = -1;
	int32_t t68 = -16796729;

    t68 = (((x273^x274)<=x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	volatile int16_t x278 = INT16_MIN;
	uint64_t x279 = 455462LLU;
	int32_t t69 = 34535516;

    t69 = (((x277^x278)<=x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = -1;
	volatile int16_t x283 = INT16_MAX;
	uint8_t x284 = 103U;
	int32_t t70 = 68858436;

    t70 = (((x281^x282)<=x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 13U;
	uint16_t x287 = 3911U;

    t71 = (((x285^x286)<=x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;
	static int32_t x291 = INT32_MIN;
	volatile int32_t t72 = -49;

    t72 = (((x289^x290)<=x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	uint8_t x294 = 14U;
	static volatile int32_t t73 = 37101;

    t73 = (((x293^x294)<=x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	static volatile int32_t x298 = 1;
	uint16_t x299 = 124U;
	int16_t x300 = INT16_MAX;
	static int32_t t74 = 12;

    t74 = (((x297^x298)<=x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static uint64_t x302 = UINT64_MAX;
	volatile uint64_t x303 = 1069538700LLU;
	int8_t x304 = 5;
	volatile int32_t t75 = 316;

    t75 = (((x301^x302)<=x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = 1637;
	int32_t t76 = -267;

    t76 = (((x305^x306)<=x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = 9;
	int32_t x311 = INT32_MAX;
	int32_t t77 = -57;

    t77 = (((x309^x310)<=x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = 50U;
	static int8_t x314 = INT8_MAX;
	int32_t x315 = 11;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -7704;

    t78 = (((x313^x314)<=x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -1;
	static volatile uint64_t x319 = 70878398286191LLU;
	int64_t x320 = -628103625696715711LL;
	int32_t t79 = 9305757;

    t79 = (((x317^x318)<=x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 1U;
	static int8_t x322 = INT8_MIN;
	uint64_t x324 = 57LLU;
	int32_t t80 = -22908006;

    t80 = (((x321^x322)<=x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 26U;
	volatile uint16_t x326 = 2U;
	static volatile uint16_t x327 = UINT16_MAX;
	static int32_t x328 = 15927750;
	static volatile int32_t t81 = 19;

    t81 = (((x325^x326)<=x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = -1;
	volatile uint32_t x330 = 552496U;
	static int32_t x332 = INT32_MAX;
	int32_t t82 = 968108573;

    t82 = (((x329^x330)<=x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 0U;
	volatile int32_t t83 = 1279;

    t83 = (((x333^x334)<=x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	volatile uint32_t x338 = 13488U;
	volatile uint16_t x339 = 1U;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = 0;

    t84 = (((x337^x338)<=x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 26683U;
	int32_t x342 = 20854;
	volatile uint32_t x343 = 22049U;
	volatile uint64_t x344 = 6403668093632LLU;

    t85 = (((x341^x342)<=x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MAX;
	volatile uint32_t x347 = 11226309U;
	int8_t x348 = 9;
	static volatile int32_t t86 = -6507616;

    t86 = (((x345^x346)<=x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	int64_t x351 = -1LL;
	uint32_t x352 = 7U;
	volatile int32_t t87 = 11;

    t87 = (((x349^x350)<=x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -5;
	volatile int64_t x354 = INT64_MIN;
	int16_t x355 = -1563;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t88 = -5919;

    t88 = (((x353^x354)<=x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MAX;
	int32_t t89 = 337;

    t89 = (((x357^x358)<=x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = UINT32_MAX;
	static int16_t x362 = -1;
	int64_t x363 = 38367892093LL;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t90 = 3959165;

    t90 = (((x361^x362)<=x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MIN;
	static uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MAX;

    t91 = (((x365^x366)<=x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	uint8_t x370 = 1U;
	volatile int32_t x371 = -1;
	volatile int16_t x372 = 611;

    t92 = (((x369^x370)<=x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	volatile int32_t x374 = -1;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 3;

    t93 = (((x373^x374)<=x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -2382424792LL;
	volatile int32_t x379 = INT32_MAX;

    t94 = (((x377^x378)<=x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 215284841;
	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = INT16_MIN;
	int32_t t95 = -1;

    t95 = (((x381^x382)<=x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 7;
	int16_t x386 = INT16_MAX;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = 196;
	volatile int32_t t96 = 3790539;

    t96 = (((x385^x386)<=x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -8;
	int16_t x391 = -1;
	static uint32_t x392 = UINT32_MAX;
	int32_t t97 = 515569265;

    t97 = (((x389^x390)<=x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	uint16_t x394 = UINT16_MAX;
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;

    t98 = (((x393^x394)<=x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x397 = 6U;
	uint64_t x398 = UINT64_MAX;
	int64_t x399 = INT64_MAX;
	int64_t x400 = -1LL;
	volatile int32_t t99 = -7607875;

    t99 = (((x397^x398)<=x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	int8_t x403 = INT8_MIN;
	int32_t t100 = -10652;

    t100 = (((x401^x402)<=x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x406 = 52376476U;
	int32_t x407 = INT32_MAX;
	uint32_t x408 = 29U;
	static int32_t t101 = 64061877;

    t101 = (((x405^x406)<=x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x410 = UINT64_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	int32_t t102 = 233972;

    t102 = (((x409^x410)<=x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = UINT16_MAX;
	volatile int32_t x414 = -467673768;
	int32_t t103 = -3;

    t103 = (((x413^x414)<=x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	static uint8_t x418 = UINT8_MAX;
	static volatile int32_t x419 = -1;
	uint16_t x420 = 302U;
	volatile int32_t t104 = -6129572;

    t104 = (((x417^x418)<=x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x421 = UINT16_MAX;
	static int32_t x422 = -29673040;
	volatile uint8_t x423 = UINT8_MAX;
	int32_t x424 = -1;

    t105 = (((x421^x422)<=x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -107;
	uint32_t x427 = 607717940U;
	uint8_t x428 = 0U;
	int32_t t106 = 1;

    t106 = (((x425^x426)<=x427)!=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = INT64_MIN;
	static int8_t x430 = INT8_MIN;
	static volatile int32_t x431 = INT32_MAX;
	uint64_t x432 = 1514LLU;
	int32_t t107 = -465574;

    t107 = (((x429^x430)<=x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MAX;
	uint64_t x434 = UINT64_MAX;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t108 = -19;

    t108 = (((x433^x434)<=x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile int8_t x438 = 29;
	int8_t x439 = INT8_MIN;
	int64_t x440 = 8324190768984LL;
	int32_t t109 = 2112490;

    t109 = (((x437^x438)<=x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 106U;
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = INT8_MAX;
	static int16_t x444 = -1;
	static int32_t t110 = 6902840;

    t110 = (((x441^x442)<=x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = -1;
	volatile uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MIN;
	volatile int32_t t111 = 1945;

    t111 = (((x445^x446)<=x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x449 = UINT16_MAX;
	int8_t x450 = -1;
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = 844;
	int32_t t112 = -12533498;

    t112 = (((x449^x450)<=x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MAX;

    t113 = (((x453^x454)<=x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MAX;
	int64_t x459 = 47561716609032LL;
	static uint8_t x460 = 1U;
	volatile int32_t t114 = 747253;

    t114 = (((x457^x458)<=x459)!=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 30LLU;
	volatile uint64_t x462 = UINT64_MAX;
	static volatile int16_t x463 = INT16_MIN;

    t115 = (((x461^x462)<=x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x466 = -661;
	uint8_t x467 = 0U;
	static int32_t x468 = INT32_MAX;
	volatile int32_t t116 = -176;

    t116 = (((x465^x466)<=x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x470 = INT64_MIN;
	int16_t x471 = -308;
	int32_t t117 = 2252721;

    t117 = (((x469^x470)<=x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MIN;
	uint32_t x476 = 922U;
	int32_t t118 = 346268626;

    t118 = (((x473^x474)<=x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = INT16_MIN;
	int8_t x478 = INT8_MIN;
	volatile int32_t t119 = 1;

    t119 = (((x477^x478)<=x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 5308U;
	int64_t x482 = 1544525549249098LL;
	int32_t x483 = 941;
	static volatile int64_t x484 = -2LL;
	int32_t t120 = -433303643;

    t120 = (((x481^x482)<=x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	uint16_t x487 = 6U;
	volatile int64_t x488 = 1086687327LL;
	volatile int32_t t121 = -96690;

    t121 = (((x485^x486)<=x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MIN;
	static int16_t x490 = -1;
	int8_t x491 = 45;
	int64_t x492 = INT64_MIN;
	volatile int32_t t122 = -165;

    t122 = (((x489^x490)<=x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -1;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = 68995LLU;
	volatile int32_t t123 = -27641960;

    t123 = (((x493^x494)<=x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x499 = -535;
	int16_t x500 = INT16_MIN;
	int32_t t124 = 2054983;

    t124 = (((x497^x498)<=x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = INT16_MAX;
	int32_t x503 = -1;
	int16_t x504 = -19;

    t125 = (((x501^x502)<=x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MIN;
	static int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	static uint16_t x508 = 165U;
	int32_t t126 = -45514404;

    t126 = (((x505^x506)<=x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 0U;
	int64_t x510 = -1LL;
	static int8_t x511 = 0;
	int32_t x512 = INT32_MIN;
	static int32_t t127 = -1;

    t127 = (((x509^x510)<=x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int32_t x514 = -1;
	uint32_t x516 = 2U;
	int32_t t128 = -1447;

    t128 = (((x513^x514)<=x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	volatile int8_t x519 = -18;
	static int32_t x520 = INT32_MAX;
	volatile int32_t t129 = 0;

    t129 = (((x517^x518)<=x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = INT32_MAX;
	int64_t x523 = INT64_MIN;
	int16_t x524 = INT16_MAX;
	volatile int32_t t130 = -48;

    t130 = (((x521^x522)<=x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x525 = -1;
	uint32_t x526 = UINT32_MAX;
	volatile uint32_t x527 = 14318U;
	int16_t x528 = INT16_MAX;
	volatile int32_t t131 = 84;

    t131 = (((x525^x526)<=x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int8_t x532 = INT8_MAX;
	volatile int32_t t132 = -388;

    t132 = (((x529^x530)<=x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -153;
	static int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MIN;
	int32_t t133 = 0;

    t133 = (((x533^x534)<=x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x537 = INT8_MAX;
	int64_t x538 = -1LL;
	int16_t x539 = 42;
	static int64_t x540 = -2741LL;
	volatile int32_t t134 = 204;

    t134 = (((x537^x538)<=x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint64_t x541 = UINT64_MAX;
	volatile int16_t x543 = INT16_MAX;
	volatile uint16_t x544 = 8U;
	volatile int32_t t135 = -512023;

    t135 = (((x541^x542)<=x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int16_t x548 = 3754;
	volatile int32_t t136 = -81;

    t136 = (((x545^x546)<=x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x550 = -36;
	int8_t x551 = 5;
	uint8_t x552 = 1U;
	volatile int32_t t137 = -528;

    t137 = (((x549^x550)<=x551)!=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 469U;
	volatile int64_t x554 = -1LL;
	int16_t x555 = INT16_MAX;
	volatile int32_t x556 = INT32_MIN;

    t138 = (((x553^x554)<=x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = UINT64_MAX;
	volatile int8_t x558 = -33;
	int8_t x559 = 2;
	uint16_t x560 = 47U;
	static volatile int32_t t139 = -130;

    t139 = (((x557^x558)<=x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = UINT64_MAX;
	volatile uint16_t x562 = UINT16_MAX;
	uint64_t x563 = 461375604109099781LLU;
	int64_t x564 = -23767484LL;
	volatile int32_t t140 = 785;

    t140 = (((x561^x562)<=x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -1;
	static int32_t x568 = -1;
	volatile int32_t t141 = -27;

    t141 = (((x565^x566)<=x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = INT8_MAX;
	volatile int64_t x570 = 51264543630LL;
	int32_t x571 = -30224;
	static volatile uint16_t x572 = 6U;
	volatile int32_t t142 = 9030;

    t142 = (((x569^x570)<=x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	uint16_t x574 = 657U;
	uint16_t x575 = UINT16_MAX;
	int64_t x576 = -1LL;
	volatile int32_t t143 = -59;

    t143 = (((x573^x574)<=x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -5519;
	volatile int32_t x578 = INT32_MAX;
	int32_t x579 = INT32_MAX;
	static int32_t t144 = -6941405;

    t144 = (((x577^x578)<=x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	int16_t x582 = 1457;
	static volatile uint16_t x583 = 490U;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = 10982;

    t145 = (((x581^x582)<=x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MIN;
	int64_t x588 = 119547311044LL;
	int32_t t146 = -546325971;

    t146 = (((x585^x586)<=x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 547349513U;
	int64_t x590 = -2493556200759516LL;
	uint64_t x591 = 9LLU;
	int16_t x592 = -5369;
	volatile int32_t t147 = 166448;

    t147 = (((x589^x590)<=x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x595 = 2LLU;
	volatile int32_t t148 = 0;

    t148 = (((x593^x594)<=x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 9307847309609910LL;
	static volatile int16_t x598 = 8694;
	uint32_t x599 = 2706698U;
	int8_t x600 = INT8_MIN;
	int32_t t149 = 438;

    t149 = (((x597^x598)<=x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = INT16_MIN;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = 34482;

    t150 = (((x601^x602)<=x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = INT64_MIN;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t151 = 8168047;

    t151 = (((x605^x606)<=x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x610 = 50246LLU;
	volatile uint32_t x611 = UINT32_MAX;
	static int32_t t152 = -12198;

    t152 = (((x609^x610)<=x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	int16_t x614 = INT16_MIN;
	static int16_t x616 = -1;
	int32_t t153 = -5058;

    t153 = (((x613^x614)<=x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -26655;
	int32_t x618 = -85443;
	int16_t x619 = INT16_MIN;
	int64_t x620 = 541162512720702811LL;
	int32_t t154 = 19;

    t154 = (((x617^x618)<=x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 40383434;
	static volatile int32_t x622 = INT32_MAX;
	uint64_t x623 = 2LLU;
	int64_t x624 = 29924156LL;

    t155 = (((x621^x622)<=x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x627 = INT8_MIN;
	volatile uint64_t x628 = UINT64_MAX;
	volatile int32_t t156 = 181589560;

    t156 = (((x625^x626)<=x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	static uint64_t x630 = UINT64_MAX;
	volatile int16_t x631 = 2257;
	int32_t x632 = -1;
	volatile int32_t t157 = 17209083;

    t157 = (((x629^x630)<=x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = 5;
	uint32_t x634 = 548794U;
	int32_t x635 = INT32_MIN;
	int64_t x636 = INT64_MIN;
	static volatile int32_t t158 = 121068238;

    t158 = (((x633^x634)<=x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -14;
	volatile uint64_t x638 = 61272647315LLU;
	uint32_t x639 = UINT32_MAX;
	static volatile int16_t x640 = -2193;
	int32_t t159 = 130990841;

    t159 = (((x637^x638)<=x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = 271U;
	static int32_t x643 = INT32_MAX;
	int16_t x644 = INT16_MAX;

    t160 = (((x641^x642)<=x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 33U;
	int16_t x646 = INT16_MIN;
	volatile uint64_t x648 = UINT64_MAX;
	int32_t t161 = 19625320;

    t161 = (((x645^x646)<=x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -621215152LL;
	int32_t x650 = -2722394;
	int64_t x652 = -3479LL;

    t162 = (((x649^x650)<=x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = 3624465U;
	int64_t x656 = INT64_MIN;

    t163 = (((x653^x654)<=x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 32934U;
	static volatile uint8_t x658 = 3U;
	static int16_t x659 = -394;
	static int8_t x660 = INT8_MIN;
	int32_t t164 = 792;

    t164 = (((x657^x658)<=x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 9183960296074LLU;
	static volatile int8_t x662 = -1;
	uint32_t x663 = 1599U;
	uint16_t x664 = 3107U;
	volatile int32_t t165 = 9;

    t165 = (((x661^x662)<=x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	int64_t x666 = INT64_MIN;
	int32_t x667 = INT32_MIN;
	volatile uint64_t x668 = 251LLU;
	volatile int32_t t166 = 92408955;

    t166 = (((x665^x666)<=x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x669 = INT8_MIN;
	int8_t x672 = -1;
	volatile int32_t t167 = 1;

    t167 = (((x669^x670)<=x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = INT16_MAX;
	int16_t x674 = -668;
	volatile int32_t t168 = 45006451;

    t168 = (((x673^x674)<=x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 174U;
	int8_t x678 = -1;
	uint64_t x679 = UINT64_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -58239545;

    t169 = (((x677^x678)<=x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 485187343155279065LLU;
	uint16_t x682 = 10684U;
	int8_t x683 = -1;
	static int64_t x684 = INT64_MIN;
	int32_t t170 = -4462;

    t170 = (((x681^x682)<=x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	int64_t x686 = INT64_MAX;
	int16_t x687 = INT16_MAX;
	volatile int16_t x688 = -1;
	int32_t t171 = 4;

    t171 = (((x685^x686)<=x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -3LL;
	volatile int64_t x691 = INT64_MIN;
	int8_t x692 = -1;
	volatile int32_t t172 = -794193;

    t172 = (((x689^x690)<=x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	int16_t x694 = INT16_MIN;
	int64_t x695 = 405947LL;
	static volatile int32_t t173 = 36;

    t173 = (((x693^x694)<=x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x697 = INT16_MIN;
	static int16_t x699 = 641;
	uint8_t x700 = 9U;

    t174 = (((x697^x698)<=x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 0U;
	int16_t x703 = INT16_MIN;
	uint64_t x704 = 372174388LLU;
	volatile int32_t t175 = 29;

    t175 = (((x701^x702)<=x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = INT8_MIN;
	uint32_t x707 = 2347U;
	int8_t x708 = 2;

    t176 = (((x705^x706)<=x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = 52794U;
	int8_t x711 = -1;
	uint64_t x712 = 21648LLU;
	volatile int32_t t177 = -15265475;

    t177 = (((x709^x710)<=x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MAX;
	volatile int64_t x715 = 453760LL;
	volatile int8_t x716 = INT8_MIN;
	static volatile int32_t t178 = 216021;

    t178 = (((x713^x714)<=x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x718 = UINT16_MAX;
	volatile int16_t x719 = INT16_MIN;
	static int32_t t179 = 1;

    t179 = (((x717^x718)<=x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	static uint32_t x722 = 22451U;
	static uint8_t x724 = 3U;
	volatile int32_t t180 = 1376;

    t180 = (((x721^x722)<=x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = 1;
	int32_t x728 = INT32_MIN;
	volatile int32_t t181 = -26957;

    t181 = (((x725^x726)<=x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -51;
	uint8_t x730 = 8U;
	int64_t x731 = INT64_MIN;
	static int32_t t182 = -1898748;

    t182 = (((x729^x730)<=x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -5;
	static uint32_t x734 = 1445658690U;
	int8_t x735 = 7;
	volatile int32_t t183 = -2;

    t183 = (((x733^x734)<=x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 251997913LLU;
	int8_t x738 = -1;
	static int64_t x739 = 65086498882LL;
	static volatile int32_t x740 = INT32_MAX;
	int32_t t184 = 239312;

    t184 = (((x737^x738)<=x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t t185 = -1;

    t185 = (((x741^x742)<=x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	volatile uint8_t x746 = 0U;
	volatile int32_t x747 = 1212;
	int8_t x748 = INT8_MIN;

    t186 = (((x745^x746)<=x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	volatile int16_t x750 = INT16_MAX;
	int8_t x751 = INT8_MIN;
	int64_t x752 = INT64_MIN;
	volatile int32_t t187 = 41611002;

    t187 = (((x749^x750)<=x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 3U;
	int16_t x754 = INT16_MAX;
	volatile int16_t x756 = 9214;

    t188 = (((x753^x754)<=x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x757 = -3;
	uint64_t x758 = 125092176046063LLU;
	uint32_t x759 = UINT32_MAX;
	int64_t x760 = INT64_MIN;

    t189 = (((x757^x758)<=x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	uint64_t x763 = 27249LLU;
	static volatile int8_t x764 = -14;
	volatile int32_t t190 = -7820633;

    t190 = (((x761^x762)<=x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MIN;
	static int8_t x766 = -1;
	uint8_t x767 = 0U;
	int64_t x768 = 1255421361667605LL;
	volatile int32_t t191 = -12;

    t191 = (((x765^x766)<=x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = 5U;
	static uint64_t x771 = 43703697817285LLU;
	static int32_t x772 = 354;

    t192 = (((x769^x770)<=x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x773 = 894413;
	static uint32_t x774 = 3U;
	int64_t x775 = -7631947702LL;
	int8_t x776 = INT8_MAX;
	int32_t t193 = -1833;

    t193 = (((x773^x774)<=x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	static int8_t x779 = 2;
	volatile uint8_t x780 = 27U;
	volatile int32_t t194 = -1;

    t194 = (((x777^x778)<=x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x782 = INT8_MIN;
	volatile int8_t x783 = INT8_MIN;
	int32_t t195 = 67;

    t195 = (((x781^x782)<=x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = INT16_MIN;
	int32_t x787 = -1;
	int16_t x788 = 1;
	int32_t t196 = 19347891;

    t196 = (((x785^x786)<=x787)!=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint32_t x790 = 10030653U;
	static volatile int64_t x791 = INT64_MIN;
	int16_t x792 = INT16_MIN;
	volatile int32_t t197 = 159122988;

    t197 = (((x789^x790)<=x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = -31;
	volatile int64_t x795 = -249645609LL;
	static uint8_t x796 = 4U;
	int32_t t198 = 81472;

    t198 = (((x793^x794)<=x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	uint32_t x799 = UINT32_MAX;
	static uint32_t x800 = 58055240U;
	int32_t t199 = -4631645;

    t199 = (((x797^x798)<=x799)!=x800);

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

