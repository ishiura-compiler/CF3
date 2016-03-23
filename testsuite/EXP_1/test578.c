
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
int32_t x12 = -1;
volatile uint32_t t2 = 4782511U;
int8_t x14 = INT8_MIN;
volatile uint8_t x15 = UINT8_MAX;
volatile int64_t t3 = 776111037536LL;
uint16_t x18 = 1690U;
volatile int64_t t4 = -35523884056990447LL;
uint8_t x21 = 50U;
uint64_t x24 = 53277850LLU;
int8_t x25 = -1;
volatile int32_t t6 = -6480884;
int32_t x29 = INT32_MAX;
uint64_t x30 = 740655661LLU;
int64_t x31 = INT64_MIN;
volatile int64_t x50 = -1LL;
int64_t x51 = -5035101LL;
static int64_t x67 = -1LL;
volatile int8_t x77 = 7;
static uint32_t x78 = UINT32_MAX;
uint32_t x85 = UINT32_MAX;
volatile int8_t x89 = INT8_MAX;
int32_t x91 = INT32_MIN;
uint32_t x98 = 170216U;
volatile int64_t t19 = 1298426328394797060LL;
int8_t x110 = -1;
static uint8_t x113 = UINT8_MAX;
volatile int8_t x123 = INT8_MIN;
uint32_t x124 = 392607U;
int32_t x131 = INT32_MIN;
int32_t x137 = -1;
static uint8_t x138 = 79U;
int8_t x139 = INT8_MIN;
uint32_t x141 = UINT32_MAX;
static volatile uint32_t x146 = UINT32_MAX;
volatile int16_t x148 = -2691;
volatile uint32_t t27 = 15112U;
volatile uint8_t x156 = 8U;
uint64_t t30 = 1LLU;
uint16_t x169 = 201U;
volatile int32_t x172 = INT32_MIN;
static int8_t x178 = INT8_MIN;
int16_t x187 = -640;
static uint16_t x188 = 6380U;
int32_t t35 = -4023068;
int64_t x193 = 54LL;
uint8_t x195 = UINT8_MAX;
volatile int64_t x202 = -1LL;
volatile int64_t x203 = 110859030787386889LL;
int16_t x208 = INT16_MIN;
uint8_t x209 = 3U;
volatile uint64_t t39 = 266LLU;
int8_t x224 = -1;
volatile int32_t t41 = -928607972;
uint32_t x238 = 12041817U;
int8_t x239 = INT8_MAX;
uint8_t x240 = UINT8_MAX;
uint32_t x242 = 53280U;
volatile int64_t x243 = 35656049221571LL;
static uint64_t x257 = UINT64_MAX;
uint32_t x260 = 1467U;
uint64_t t45 = 563LLU;
volatile int8_t x267 = -1;
int32_t t46 = -61602101;
int64_t x269 = -29003581391235LL;
int16_t x273 = -1;
int64_t x276 = INT64_MIN;
int16_t x278 = 0;
static volatile uint32_t x281 = 1U;
volatile int16_t x286 = INT16_MIN;
static int64_t t51 = 464905507978LL;
int64_t x301 = -1LL;
int8_t x307 = INT8_MIN;
int64_t x315 = INT64_MAX;
uint8_t x333 = 5U;
int64_t t59 = 43014LL;
static volatile int16_t x343 = INT16_MIN;
uint64_t t60 = 56176866LLU;
uint64_t t63 = 3331585564312508LLU;
uint64_t x360 = UINT64_MAX;
volatile int32_t x361 = INT32_MAX;
int64_t x362 = -1LL;
int64_t x367 = INT64_MAX;
int32_t x372 = INT32_MIN;
int32_t x376 = INT32_MIN;
uint8_t x379 = UINT8_MAX;
int64_t x382 = -1LL;
volatile int64_t t70 = -6768415805LL;
int8_t x391 = -25;
static volatile int32_t t73 = -1;
volatile int16_t x400 = -1;
int32_t x401 = INT32_MIN;
volatile int64_t x403 = INT64_MAX;
uint64_t x407 = 26LLU;
volatile int32_t x413 = -1;
uint32_t t79 = 77U;
int8_t x430 = -3;
int64_t t80 = -742626203630LL;
uint32_t x434 = UINT32_MAX;
int8_t x436 = INT8_MIN;
volatile uint32_t x442 = 266588U;
volatile int32_t x447 = -9;
static volatile int32_t t83 = 109185;
int32_t x452 = 65138348;
int32_t x458 = -1;
static int8_t x462 = INT8_MIN;
int16_t x463 = -1;
volatile int64_t x468 = INT64_MAX;
static int64_t x484 = -55261LL;
volatile int16_t x487 = INT16_MIN;
volatile int32_t x488 = -1;
int64_t x509 = -172250769572LL;
uint32_t x524 = 44U;
int64_t x536 = INT64_MAX;
int32_t x540 = 1;
int8_t x544 = 1;
int32_t t104 = -3466895;
volatile int64_t t106 = -1LL;
int8_t x553 = INT8_MIN;
uint32_t t107 = 124096U;
static volatile int64_t x584 = -1LL;
uint16_t x598 = 3959U;
int64_t t118 = -1084947895364851340LL;
uint64_t x607 = 124514474172107078LLU;
int16_t x611 = INT16_MIN;
static int16_t x612 = -1;
uint32_t x620 = 60311U;
volatile int16_t x631 = 4243;
uint64_t x634 = UINT64_MAX;
int64_t x635 = 4790826LL;
static volatile int8_t x639 = -1;
uint32_t x643 = UINT32_MAX;
volatile uint64_t x649 = UINT64_MAX;
int16_t x656 = INT16_MAX;
int8_t x666 = INT8_MAX;
int32_t x668 = INT32_MIN;
int64_t x669 = INT64_MAX;
uint8_t x671 = 58U;
int8_t x672 = INT8_MIN;
volatile int64_t t130 = 68677LL;
int16_t x678 = INT16_MIN;
int64_t x679 = INT64_MAX;
static uint32_t x691 = UINT32_MAX;
int16_t x696 = -1;
static int16_t x702 = -1;
uint64_t x719 = 9943LLU;
int16_t x723 = -1;
int8_t x730 = -1;
volatile uint16_t x736 = 6U;
int8_t x739 = -1;
static int64_t x740 = -1LL;
volatile uint64_t t144 = 26652LLU;
volatile uint8_t x741 = 11U;
static int8_t x743 = -1;
uint16_t x747 = 4550U;
static int16_t x772 = INT16_MIN;
int32_t t150 = -21625620;
int16_t x780 = INT16_MAX;
int64_t x782 = -16055LL;
uint64_t x784 = 4359073602487LLU;
int64_t x787 = INT64_MIN;
volatile int16_t x791 = -95;
static uint64_t t157 = 11512059180LLU;
static volatile int8_t x816 = INT8_MIN;
volatile uint64_t t159 = 1855519698624653703LLU;
uint64_t x842 = 1239038712272167390LLU;
uint16_t x843 = 195U;
int32_t t168 = -11;
uint32_t x857 = 157509806U;
int16_t x858 = -1;
int64_t t169 = 121682139979184314LL;
static uint32_t x863 = 129U;
volatile int64_t t170 = 5LL;
int16_t x868 = INT16_MAX;
int8_t x871 = -1;
int64_t x880 = -1LL;
int64_t t173 = -67617LL;
int16_t x883 = INT16_MAX;
int64_t x887 = INT64_MIN;
uint32_t x891 = 986452U;
uint16_t x913 = 11U;
uint16_t x914 = 416U;
int16_t x915 = INT16_MAX;
uint32_t t182 = 71243U;
volatile int16_t x946 = INT16_MIN;
static volatile uint64_t t186 = 134114411147LLU;
int8_t x960 = -1;
uint64_t t188 = 1357355LLU;
volatile uint64_t t190 = 18723550409LLU;
volatile int32_t x988 = -1;
static volatile int16_t x996 = INT16_MIN;
static volatile int32_t t194 = -439;
uint8_t x1022 = 1U;
int32_t t196 = 10141045;
volatile int32_t x1032 = INT32_MIN;
static volatile uint32_t x1038 = 6818894U;
int32_t x1039 = -1;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int64_t x2 = -4060270477361774380LL;
	volatile uint64_t x3 = 7763229LLU;
	static int16_t x4 = -15635;
	uint64_t t0 = 2252061387LLU;

    t0 = (((x1*x2)^x3)/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int8_t x6 = 1;
	uint16_t x7 = UINT16_MAX;
	int64_t x8 = -8596551648341LL;
	int64_t t1 = 716215512193440LL;

    t1 = (((x5*x6)^x7)/x8);

    if (t1 != -1072915LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 13044880U;
	int16_t x11 = INT16_MIN;

    t2 = (((x9*x10)^x11)/x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	int64_t x16 = INT64_MAX;

    t3 = (((x13*x14)^x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -2;
	static int64_t x19 = -1LL;
	volatile int8_t x20 = 52;

    t4 = (((x17*x18)^x19)/x20);

    if (t4 != 64LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = -160756;
	volatile uint8_t x23 = UINT8_MAX;
	uint64_t t5 = 90476851LLU;

    t5 = (((x21*x22)^x23)/x24);

    if (t5 != 346236645692LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = UINT8_MAX;

    t6 = (((x25*x26)^x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 0LLU;

    t7 = (((x29*x30)^x31)/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -40916798LL;
	uint32_t x34 = 3U;
	uint8_t x35 = UINT8_MAX;
	uint64_t x36 = 14031599LLU;
	uint64_t t8 = 2267392143578871070LLU;

    t8 = (((x33*x34)^x35)/x36);

    if (t8 != 1314657301251LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 92798U;
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = INT64_MAX;
	int64_t x48 = INT64_MAX;
	int64_t t9 = 9858051LL;

    t9 = (((x45*x46)^x47)/x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = 3;
	int16_t x52 = INT16_MAX;
	volatile int64_t t10 = 1101129780963614477LL;

    t10 = (((x49*x50)^x51)/x52);

    if (t10 != 153LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x57 = 46U;
	uint64_t x58 = UINT64_MAX;
	volatile int64_t x59 = 3739181LL;
	static int64_t x60 = INT64_MIN;
	volatile uint64_t t11 = 411538849214LLU;

    t11 = (((x57*x58)^x59)/x60);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x65 = 2205U;
	uint64_t x66 = 2062LLU;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t12 = 1098LLU;

    t12 = (((x65*x66)^x67)/x68);

    if (t12 != 145249953336259881LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = 153127761673555876LLU;
	static int32_t x70 = INT32_MIN;
	uint8_t x71 = 31U;
	int64_t x72 = -1LL;
	volatile uint64_t t13 = 137815787705019LLU;

    t13 = (((x69*x70)^x71)/x72);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	static int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	volatile uint32_t x76 = 2021542682U;
	static volatile uint64_t t14 = 869629931731219872LLU;

    t14 = (((x73*x74)^x75)/x76);

    if (t14 != 9125082659LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x79 = -1;
	uint32_t x80 = 8U;
	uint32_t t15 = 14247U;

    t15 = (((x77*x78)^x79)/x80);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	uint64_t x88 = 513749051776501LLU;
	volatile uint64_t t16 = 1751756330753816LLU;

    t16 = (((x85*x86)^x87)/x88);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x90 = 108U;
	static volatile int8_t x92 = -1;
	static volatile int32_t t17 = -87987;

    t17 = (((x89*x90)^x91)/x92);

    if (t17 != 2147469932) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x97 = UINT16_MAX;
	int16_t x99 = -154;
	uint8_t x100 = 15U;
	static uint32_t t18 = 27196971U;

    t18 = (((x97*x98)^x99)/x100);

    if (t18 != 115319748U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = -1LL;
	uint8_t x102 = UINT8_MAX;
	volatile int64_t x103 = INT64_MIN;
	volatile uint8_t x104 = 49U;

    t19 = (((x101*x102)^x103)/x104);

    if (t19 != 188232082384791337LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = -1;
	static uint32_t x111 = 443405633U;
	int32_t x112 = INT32_MAX;
	static uint32_t t20 = 72U;

    t20 = (((x109*x110)^x111)/x112);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x114 = UINT16_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 253112547869873535LLU;
	static uint64_t t21 = 206100LLU;

    t21 = (((x113*x114)^x115)/x116);

    if (t21 != 72LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x117 = -1;
	static uint8_t x118 = 0U;
	uint16_t x119 = 1U;
	int16_t x120 = INT16_MIN;
	int32_t t22 = -27055;

    t22 = (((x117*x118)^x119)/x120);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x121 = -8;
	int8_t x122 = INT8_MIN;
	volatile uint32_t t23 = 1U;

    t23 = (((x121*x122)^x123)/x124);

    if (t23 != 10939U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x129 = -1;
	static int8_t x130 = INT8_MIN;
	int32_t x132 = -15662083;
	static volatile int32_t t24 = 21920906;

    t24 = (((x129*x130)^x131)/x132);

    if (t24 != 137) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x140 = 121U;
	static int32_t t25 = 114;

    t25 = (((x137*x138)^x139)/x140);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x142 = INT8_MAX;
	static int32_t x143 = 4001;
	volatile uint16_t x144 = UINT16_MAX;
	volatile uint32_t t26 = 531983U;

    t26 = (((x141*x142)^x143)/x144);

    if (t26 != 65536U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x145 = -1;
	uint8_t x147 = 15U;

    t27 = (((x145*x146)^x147)/x148);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x149 = 7LL;
	uint64_t x150 = 2747401045557170LLU;
	volatile int16_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t28 = 103103066LLU;

    t28 = (((x149*x150)^x151)/x152);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = 12;
	volatile int16_t x154 = INT16_MIN;
	static volatile int16_t x155 = INT16_MAX;
	static int32_t t29 = 1;

    t29 = (((x153*x154)^x155)/x156);

    if (t29 != -45056) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x157 = 262023730784968706LLU;
	static int32_t x158 = INT32_MIN;
	uint64_t x159 = 1122494181803LLU;
	int16_t x160 = INT16_MIN;

    t30 = (((x157*x158)^x159)/x160);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x170 = -1LL;
	uint64_t x171 = 290138LLU;
	volatile uint64_t t31 = 65772786751781LLU;

    t31 = (((x169*x170)^x171)/x172);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x177 = -1;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;
	static volatile uint64_t t32 = 848101114254293982LLU;

    t32 = (((x177*x178)^x179)/x180);

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x181 = 58U;
	int64_t x182 = -1LL;
	static uint64_t x183 = 175LLU;
	static int8_t x184 = 2;
	uint64_t t33 = 235648032453294995LLU;

    t33 = (((x181*x182)^x183)/x184);

    if (t33 != 9223372036854775732LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x185 = INT16_MAX;
	uint64_t x186 = 0LLU;
	volatile uint64_t t34 = 2404563LLU;

    t34 = (((x185*x186)^x187)/x188);

    if (t34 != 2891339196506199LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x189 = INT16_MAX;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = -1;

    t35 = (((x189*x190)^x191)/x192);

    if (t35 != 1073709055) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x194 = 299U;
	int8_t x196 = -3;
	static int64_t t36 = -11090142940LL;

    t36 = (((x193*x194)^x195)/x196);

    if (t36 != -5455LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x201 = INT64_MAX;
	uint64_t x204 = 2725346912284828573LLU;
	volatile uint64_t t37 = 61268615LLU;

    t37 = (((x201*x202)^x203)/x204);

    if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x205 = -1;
	uint8_t x206 = 62U;
	int8_t x207 = -1;
	int32_t t38 = 0;

    t38 = (((x205*x206)^x207)/x208);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x210 = INT16_MAX;
	static uint8_t x211 = UINT8_MAX;
	uint64_t x212 = UINT64_MAX;

    t39 = (((x209*x210)^x211)/x212);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x213 = 0;
	int16_t x214 = INT16_MAX;
	int64_t x215 = INT64_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t40 = -1096500205426291395LL;

    t40 = (((x213*x214)^x215)/x216);

    if (t40 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = UINT16_MAX;
	int8_t x223 = -1;

    t41 = (((x221*x222)^x223)/x224);

    if (t41 != -8388479) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x237 = INT32_MAX;
	static volatile uint32_t t42 = 12666U;

    t42 = (((x237*x238)^x239)/x240);

    if (t42 != 8374281U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x241 = -1;
	uint32_t x244 = 1120U;
	int64_t t43 = 2546124140473928613LL;

    t43 = (((x241*x242)^x243)/x244);

    if (t43 != 31833297184LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x253 = -1;
	static int8_t x254 = INT8_MIN;
	static volatile uint32_t x255 = 474U;
	uint32_t x256 = 205850U;
	static volatile uint32_t t44 = 1U;

    t44 = (((x253*x254)^x255)/x256);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x258 = 1U;
	int16_t x259 = 7776;

    t45 = (((x257*x258)^x259)/x260);

    if (t45 != 12574467671240316LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x265 = 4U;
	int8_t x266 = INT8_MAX;
	int8_t x268 = INT8_MIN;

    t46 = (((x265*x266)^x267)/x268);

    if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	static int32_t x272 = -1;
	volatile int64_t t47 = 6146034498LL;

    t47 = (((x269*x270)^x271)/x272);

    if (t47 != 29003581391357LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x274 = 946821017LL;
	int8_t x275 = INT8_MIN;
	static volatile int64_t t48 = 3044LL;

    t48 = (((x273*x274)^x275)/x276);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x277 = -1;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t49 = 260;

    t49 = (((x277*x278)^x279)/x280);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x282 = INT16_MIN;
	static int32_t x283 = -1;
	int64_t x284 = -119663331976727335LL;
	volatile int64_t t50 = -192792043450LL;

    t50 = (((x281*x282)^x283)/x284);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x285 = 3U;
	static int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;

    t51 = (((x285*x286)^x287)/x288);

    if (t51 != -65536LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x289 = 0;
	int16_t x290 = -1;
	int16_t x291 = -215;
	int64_t x292 = INT64_MIN;
	int64_t t52 = 4568LL;

    t52 = (((x289*x290)^x291)/x292);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x297 = -1;
	uint32_t x298 = 5320U;
	uint64_t x299 = 95267LLU;
	uint32_t x300 = 296641U;
	volatile uint64_t t53 = 21LLU;

    t53 = (((x297*x298)^x299)/x300);

    if (t53 != 14478LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 995U;
	static volatile int64_t t54 = 7002856147LL;

    t54 = (((x301*x302)^x303)/x304);

    if (t54 != -65LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x305 = INT64_MIN;
	uint64_t x306 = 1020104LLU;
	int64_t x308 = INT64_MIN;
	static volatile uint64_t t55 = 1445LLU;

    t55 = (((x305*x306)^x307)/x308);

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x309 = UINT32_MAX;
	static volatile uint16_t x310 = UINT16_MAX;
	int32_t x311 = -1;
	static volatile int64_t x312 = INT64_MAX;
	int64_t t56 = -3261LL;

    t56 = (((x309*x310)^x311)/x312);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x313 = INT32_MIN;
	static volatile int64_t x314 = -1LL;
	uint32_t x316 = 22066299U;
	int64_t t57 = -49206291017LL;

    t57 = (((x313*x314)^x315)/x316);

    if (t57 != 417984548958LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x334 = INT16_MIN;
	static int16_t x335 = 3830;
	uint64_t x336 = UINT64_MAX;
	static uint64_t t58 = 7392LLU;

    t58 = (((x333*x334)^x335)/x336);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x337 = UINT8_MAX;
	static uint32_t x338 = 158U;
	uint8_t x339 = 2U;
	int64_t x340 = -1LL;

    t59 = (((x337*x338)^x339)/x340);

    if (t59 != -40288LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x341 = 572906LLU;
	int32_t x342 = INT32_MIN;
	int16_t x344 = INT16_MIN;

    t60 = (((x341*x342)^x343)/x344);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x345 = 25;
	uint8_t x346 = UINT8_MAX;
	static uint16_t x347 = 4U;
	uint32_t x348 = 2U;
	volatile uint32_t t61 = 3814408U;

    t61 = (((x345*x346)^x347)/x348);

    if (t61 != 3185U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x349 = INT16_MAX;
	static uint8_t x350 = UINT8_MAX;
	int8_t x351 = -20;
	int16_t x352 = INT16_MIN;
	volatile int32_t t62 = 3742203;

    t62 = (((x349*x350)^x351)/x352);

    if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x353 = 27046306;
	static uint64_t x354 = 4LLU;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;

    t63 = (((x353*x354)^x355)/x356);

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x357 = UINT32_MAX;
	volatile int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	volatile uint64_t t64 = 68118497482LLU;

    t64 = (((x357*x358)^x359)/x360);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x363 = 7236021049853536LLU;
	volatile int32_t x364 = INT32_MIN;
	uint64_t t65 = 15LLU;

    t65 = (((x361*x362)^x363)/x364);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x365 = 0U;
	int16_t x366 = INT16_MAX;
	int32_t x368 = INT32_MIN;
	volatile int64_t t66 = 9914146LL;

    t66 = (((x365*x366)^x367)/x368);

    if (t66 != -4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x369 = -3;
	int16_t x370 = INT16_MAX;
	static int8_t x371 = INT8_MAX;
	volatile int32_t t67 = 2316;

    t67 = (((x369*x370)^x371)/x372);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x373 = UINT8_MAX;
	volatile int64_t x374 = 1548177974006LL;
	int32_t x375 = -46;
	int64_t t68 = -1524347361289LL;

    t68 = (((x373*x374)^x375)/x376);

    if (t68 != 183836LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x377 = -3804;
	int16_t x378 = INT16_MIN;
	int16_t x380 = -1;
	volatile int32_t t69 = -242078730;

    t69 = (((x377*x378)^x379)/x380);

    if (t69 != -124649727) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x381 = 51118LL;
	int64_t x383 = INT64_MAX;
	int32_t x384 = -869864487;

    t70 = (((x381*x382)^x383)/x384);

    if (t70 != 10603228634LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x385 = 871976462U;
	uint8_t x386 = UINT8_MAX;
	int32_t x387 = -5551;
	int32_t x388 = INT32_MAX;
	volatile uint32_t t71 = 1193491912U;

    t71 = (((x385*x386)^x387)/x388);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x389 = -18;
	volatile uint16_t x390 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t72 = -69600065702941LL;

    t72 = (((x389*x390)^x391)/x392);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MAX;

    t73 = (((x393*x394)^x395)/x396);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = INT8_MIN;
	uint8_t x398 = 121U;
	int16_t x399 = INT16_MAX;
	volatile int32_t t74 = -4;

    t74 = (((x397*x398)^x399)/x400);

    if (t74 != 17281) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x402 = UINT32_MAX;
	uint32_t x404 = UINT32_MAX;
	static volatile int64_t t75 = 933130LL;

    t75 = (((x401*x402)^x403)/x404);

    if (t75 != 2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x405 = UINT8_MAX;
	volatile int16_t x406 = INT16_MIN;
	uint16_t x408 = 12478U;
	static volatile uint64_t t76 = 51062878LLU;

    t76 = (((x405*x406)^x407)/x408);

    if (t76 != 1478341406772014LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int8_t x411 = 1;
	static volatile int32_t x412 = INT32_MIN;
	int32_t t77 = -194;

    t77 = (((x409*x410)^x411)/x412);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x414 = 54081LL;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	static volatile int64_t t78 = -5306302LL;

    t78 = (((x413*x414)^x415)/x416);

    if (t78 != -65534LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x421 = 6U;
	volatile int8_t x422 = 1;
	static volatile int16_t x423 = -1;
	uint32_t x424 = 996U;

    t79 = (((x421*x422)^x423)/x424);

    if (t79 != 4312216U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x429 = 20U;
	uint8_t x431 = 1U;
	int64_t x432 = 26769444756LL;

    t80 = (((x429*x430)^x431)/x432);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x433 = INT32_MIN;
	uint16_t x435 = 25717U;
	volatile uint32_t t81 = 401655U;

    t81 = (((x433*x434)^x435)/x436);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x441 = UINT64_MAX;
	static volatile int16_t x443 = -367;
	static int8_t x444 = INT8_MAX;
	volatile uint64_t t82 = 205962687088638425LLU;

    t82 = (((x441*x442)^x443)/x444);

    if (t82 != 2096LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x445 = 20258U;
	uint8_t x446 = 1U;
	volatile int8_t x448 = INT8_MAX;

    t83 = (((x445*x446)^x447)/x448);

    if (t83 != -159) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x449 = INT8_MAX;
	int32_t x450 = 30;
	volatile int8_t x451 = INT8_MAX;
	volatile int32_t t84 = 21141161;

    t84 = (((x449*x450)^x451)/x452);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x453 = -1;
	static int16_t x454 = INT16_MIN;
	static int64_t x455 = INT64_MIN;
	int8_t x456 = 34;
	volatile int64_t t85 = -61637296783LL;

    t85 = (((x453*x454)^x455)/x456);

    if (t85 != -271275648142786560LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x457 = 1630502799030LL;
	volatile int32_t x459 = INT32_MAX;
	static int64_t x460 = -1LL;
	int64_t t86 = 694256335252LL;

    t86 = (((x457*x458)^x459)/x460);

    if (t86 != 1631524862283LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x461 = UINT16_MAX;
	int64_t x464 = -1267813011LL;
	volatile int64_t t87 = 197629LL;

    t87 = (((x461*x462)^x463)/x464);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x465 = UINT8_MAX;
	uint8_t x466 = 25U;
	int8_t x467 = INT8_MIN;
	int64_t t88 = 2154537473903581165LL;

    t88 = (((x465*x466)^x467)/x468);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x469 = 0U;
	volatile int16_t x470 = INT16_MIN;
	volatile int32_t x471 = -1;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t89 = 167;

    t89 = (((x469*x470)^x471)/x472);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x473 = -1;
	static int16_t x474 = INT16_MIN;
	static uint16_t x475 = UINT16_MAX;
	static int16_t x476 = -1;
	static volatile int32_t t90 = 4147825;

    t90 = (((x473*x474)^x475)/x476);

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x477 = INT8_MAX;
	uint64_t x478 = UINT64_MAX;
	int8_t x479 = -3;
	uint16_t x480 = 204U;
	volatile uint64_t t91 = 106981443715LLU;

    t91 = (((x477*x478)^x479)/x480);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x481 = -1LL;
	int32_t x482 = INT32_MIN;
	static volatile uint32_t x483 = 740857355U;
	int64_t t92 = 723325703636274127LL;

    t92 = (((x481*x482)^x483)/x484);

    if (t92 != -52267LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x485 = 1;
	uint32_t x486 = 26029U;
	volatile uint32_t t93 = 4618990U;

    t93 = (((x485*x486)^x487)/x488);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x497 = 55;
	static uint32_t x498 = UINT32_MAX;
	uint64_t x499 = 6839716LLU;
	static int16_t x500 = INT16_MIN;
	static uint64_t t94 = 24LLU;

    t94 = (((x497*x498)^x499)/x500);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x501 = 539432748U;
	volatile int32_t x502 = -577417;
	uint8_t x503 = 4U;
	int32_t x504 = INT32_MAX;
	static volatile uint32_t t95 = 42U;

    t95 = (((x501*x502)^x503)/x504);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x505 = 5;
	volatile uint16_t x506 = 297U;
	static int16_t x507 = 3;
	int32_t x508 = INT32_MIN;
	int32_t t96 = 29351760;

    t96 = (((x505*x506)^x507)/x508);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x510 = 16978U;
	uint32_t x511 = 144450U;
	volatile int64_t x512 = INT64_MIN;
	volatile int64_t t97 = 4564188263362419LL;

    t97 = (((x509*x510)^x511)/x512);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x513 = UINT32_MAX;
	int8_t x514 = -15;
	static volatile int16_t x515 = INT16_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t98 = 221U;

    t98 = (((x513*x514)^x515)/x516);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x517 = 147704707LL;
	int16_t x518 = -1;
	int32_t x519 = INT32_MIN;
	uint64_t x520 = UINT64_MAX;
	static volatile uint64_t t99 = 181542LLU;

    t99 = (((x517*x518)^x519)/x520);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x521 = INT64_MAX;
	int8_t x522 = 1;
	int16_t x523 = -11457;
	int64_t t100 = -12940360908LL;

    t100 = (((x521*x522)^x523)/x524);

    if (t100 != -209622091746699189LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x525 = 0U;
	uint8_t x526 = UINT8_MAX;
	volatile int8_t x527 = INT8_MIN;
	int64_t x528 = INT64_MIN;
	volatile int64_t t101 = -7916858LL;

    t101 = (((x525*x526)^x527)/x528);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x533 = UINT64_MAX;
	volatile int8_t x534 = INT8_MIN;
	int32_t x535 = INT32_MAX;
	static volatile uint64_t t102 = 2920804925LLU;

    t102 = (((x533*x534)^x535)/x536);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x537 = -4912465LL;
	int8_t x538 = -1;
	static int8_t x539 = INT8_MIN;
	int64_t t103 = -46496191091449LL;

    t103 = (((x537*x538)^x539)/x540);

    if (t103 != -4912431LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x541 = 79;
	uint16_t x542 = 13U;
	int16_t x543 = INT16_MAX;

    t104 = (((x541*x542)^x543)/x544);

    if (t104 != 31740) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x545 = INT16_MAX;
	int8_t x546 = -1;
	static volatile int8_t x547 = INT8_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t105 = -63;

    t105 = (((x545*x546)^x547)/x548);

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x549 = -1;
	uint8_t x550 = 5U;
	uint32_t x551 = 10U;
	volatile int64_t x552 = INT64_MIN;

    t106 = (((x549*x550)^x551)/x552);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x554 = 95174U;
	volatile uint8_t x555 = 0U;
	uint16_t x556 = UINT16_MAX;

    t107 = (((x553*x554)^x555)/x556);

    if (t107 != 65351U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x557 = -1;
	int16_t x558 = INT16_MIN;
	volatile int16_t x559 = -10;
	int8_t x560 = -62;
	int32_t t108 = 1;

    t108 = (((x557*x558)^x559)/x560);

    if (t108 != 528) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = INT16_MAX;
	volatile int16_t x563 = -4403;
	volatile int64_t x564 = -1LL;
	int64_t t109 = 3223LL;

    t109 = (((x561*x562)^x563)/x564);

    if (t109 != -4189773LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = -4;
	uint32_t x566 = 21453255U;
	uint16_t x567 = 23U;
	static int32_t x568 = 466;
	static volatile uint32_t t110 = 1182907739U;

    t110 = (((x565*x566)^x567)/x568);

    if (t110 != 9032519U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x569 = INT16_MIN;
	uint32_t x570 = UINT32_MAX;
	volatile int64_t x571 = 543850084LL;
	uint32_t x572 = 60U;
	int64_t t111 = 348488LL;

    t111 = (((x569*x570)^x571)/x572);

    if (t111 != 9064714LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x573 = 61787077453603LLU;
	uint32_t x574 = 22U;
	uint16_t x575 = 897U;
	int16_t x576 = -111;
	static uint64_t t112 = 1244707907228144LLU;

    t112 = (((x573*x574)^x575)/x576);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x577 = 9U;
	static int8_t x578 = INT8_MAX;
	uint64_t x579 = 403601LLU;
	int32_t x580 = -237;
	uint64_t t113 = 109581769391524866LLU;

    t113 = (((x577*x578)^x579)/x580);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x581 = 18U;
	int8_t x582 = -12;
	static int64_t x583 = 802LL;
	volatile int64_t t114 = 31380225111LL;

    t114 = (((x581*x582)^x583)/x584);

    if (t114 != 1014LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x589 = 13U;
	volatile uint64_t x590 = 2LLU;
	volatile int32_t x591 = -1;
	int16_t x592 = -1;
	uint64_t t115 = 411408LLU;

    t115 = (((x589*x590)^x591)/x592);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x593 = 32U;
	int8_t x594 = 1;
	volatile uint32_t x595 = 16146U;
	static uint64_t x596 = 119141485889550LLU;
	uint64_t t116 = 65374889444LLU;

    t116 = (((x593*x594)^x595)/x596);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x597 = INT16_MIN;
	uint8_t x599 = UINT8_MAX;
	static uint8_t x600 = UINT8_MAX;
	static volatile int32_t t117 = -527906151;

    t117 = (((x597*x598)^x599)/x600);

    if (t117 != -508738) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x601 = UINT32_MAX;
	uint8_t x602 = UINT8_MAX;
	int64_t x603 = INT64_MAX;
	int64_t x604 = -1LL;

    t118 = (((x601*x602)^x603)/x604);

    if (t118 != -9223372032559808766LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x605 = -1LL;
	static int32_t x606 = 1;
	int8_t x608 = -1;
	volatile uint64_t t119 = 2104758907168238LLU;

    t119 = (((x605*x606)^x607)/x608);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x609 = UINT64_MAX;
	volatile int64_t x610 = INT64_MIN;
	volatile uint64_t t120 = 409337420633146589LLU;

    t120 = (((x609*x610)^x611)/x612);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x617 = 1U;
	uint32_t x618 = UINT32_MAX;
	static int64_t x619 = -1698457LL;
	volatile int64_t t121 = -12584984735048943LL;

    t121 = (((x617*x618)^x619)/x620);

    if (t121 != -71185LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x629 = -1;
	static int16_t x630 = 58;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t122 = 129;

    t122 = (((x629*x630)^x631)/x632);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x633 = INT64_MIN;
	int32_t x636 = -1;
	uint64_t t123 = 30461310162044LLU;

    t123 = (((x633*x634)^x635)/x636);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x637 = 0U;
	int32_t x638 = INT32_MAX;
	int8_t x640 = -10;
	volatile int32_t t124 = -4;

    t124 = (((x637*x638)^x639)/x640);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x641 = INT16_MAX;
	volatile int16_t x642 = INT16_MIN;
	uint8_t x644 = 119U;
	volatile uint32_t t125 = 223628U;

    t125 = (((x641*x642)^x643)/x644);

    if (t125 != 9022765U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x650 = INT64_MIN;
	uint8_t x651 = 104U;
	volatile int8_t x652 = INT8_MIN;
	volatile uint64_t t126 = 2968LLU;

    t126 = (((x649*x650)^x651)/x652);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x653 = 21U;
	uint8_t x654 = UINT8_MAX;
	int64_t x655 = INT64_MIN;
	volatile int64_t t127 = -17341972206588603LL;

    t127 = (((x653*x654)^x655)/x656);

    if (t127 != -281483566907399LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x661 = -714181;
	volatile int8_t x662 = INT8_MIN;
	int64_t x663 = -1LL;
	uint32_t x664 = UINT32_MAX;
	volatile int64_t t128 = -134258LL;

    t128 = (((x661*x662)^x663)/x664);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x665 = 3213U;
	volatile int64_t x667 = 419611LL;
	volatile int64_t t129 = 25565166199LL;

    t129 = (((x665*x666)^x667)/x668);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x670 = -1LL;

    t130 = (((x669*x670)^x671)/x672);

    if (t130 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x677 = -1;
	int32_t x680 = -1;
	static volatile int64_t t131 = -12502LL;

    t131 = (((x677*x678)^x679)/x680);

    if (t131 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x681 = UINT16_MAX;
	int8_t x682 = INT8_MIN;
	uint16_t x683 = 3616U;
	int64_t x684 = -1LL;
	static int64_t t132 = 50669LL;

    t132 = (((x681*x682)^x683)/x684);

    if (t132 != 8384864LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x689 = -20158220;
	volatile uint32_t x690 = 360077074U;
	uint8_t x692 = 1U;
	uint32_t t133 = 1212U;

    t133 = (((x689*x690)^x691)/x692);

    if (t133 != 964539095U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x693 = 2583;
	int8_t x694 = 19;
	uint16_t x695 = 1172U;
	int32_t t134 = 14;

    t134 = (((x693*x694)^x695)/x696);

    if (t134 != -47905) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x701 = 1539615695256LLU;
	int16_t x703 = -1;
	volatile int32_t x704 = -12896;
	volatile uint64_t t135 = 1569171831591LLU;

    t135 = (((x701*x702)^x703)/x704);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x705 = 121271;
	int8_t x706 = 0;
	static uint16_t x707 = UINT16_MAX;
	int16_t x708 = -46;
	int32_t t136 = -27634454;

    t136 = (((x705*x706)^x707)/x708);

    if (t136 != -1424) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x709 = UINT16_MAX;
	int8_t x710 = INT8_MAX;
	int16_t x711 = INT16_MAX;
	int32_t x712 = INT32_MIN;
	int32_t t137 = 1;

    t137 = (((x709*x710)^x711)/x712);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x713 = 105270951U;
	static uint64_t x714 = 116077661957LLU;
	int8_t x715 = -26;
	uint16_t x716 = UINT16_MAX;
	volatile uint64_t t138 = 12LLU;

    t138 = (((x713*x714)^x715)/x716);

    if (t138 != 95020038294646LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x717 = UINT16_MAX;
	int8_t x718 = -12;
	uint8_t x720 = 12U;
	volatile uint64_t t139 = 324611651LLU;

    t139 = (((x717*x718)^x719)/x720);

    if (t139 != 1537228672809064594LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x721 = -1LL;
	int64_t x722 = -1LL;
	static int8_t x724 = -13;
	volatile int64_t t140 = -22217288LL;

    t140 = (((x721*x722)^x723)/x724);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x725 = INT16_MIN;
	int64_t x726 = 2174625765LL;
	static volatile int64_t x727 = 236907LL;
	int32_t x728 = INT32_MIN;
	volatile int64_t t141 = -176LL;

    t141 = (((x725*x726)^x727)/x728);

    if (t141 != 33182LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x729 = INT8_MIN;
	static int16_t x731 = INT16_MAX;
	volatile uint64_t x732 = UINT64_MAX;
	uint64_t t142 = 312552832534825106LLU;

    t142 = (((x729*x730)^x731)/x732);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x733 = -1;
	uint32_t x734 = 183824993U;
	int16_t x735 = -1;
	static volatile uint32_t t143 = 1U;

    t143 = (((x733*x734)^x735)/x736);

    if (t143 != 30637498U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x737 = 24LLU;
	uint64_t x738 = 1154025066422883LLU;

    t144 = (((x737*x738)^x739)/x740);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x742 = 22818477120477LLU;
	static uint16_t x744 = 3U;
	volatile uint64_t t145 = 28136835LLU;

    t145 = (((x741*x742)^x743)/x744);

    if (t145 != 6148831023487075456LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x745 = -1;
	int32_t x746 = 4486;
	volatile uint64_t x748 = 6972133027372LLU;
	uint64_t t146 = 857336772632878571LLU;

    t146 = (((x745*x746)^x747)/x748);

    if (t146 != 2645782LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x749 = UINT64_MAX;
	int16_t x750 = -61;
	volatile uint64_t x751 = 15LLU;
	int32_t x752 = INT32_MAX;
	static uint64_t t147 = 22131696LLU;

    t147 = (((x749*x750)^x751)/x752);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x757 = UINT32_MAX;
	int8_t x758 = INT8_MAX;
	int64_t x759 = -29LL;
	int16_t x760 = -1;
	volatile int64_t t148 = -477660031723LL;

    t148 = (((x757*x758)^x759)/x760);

    if (t148 != 4294967198LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x761 = -1LL;
	int16_t x762 = INT16_MAX;
	int16_t x763 = 196;
	volatile int32_t x764 = -3454;
	int64_t t149 = -260LL;

    t149 = (((x761*x762)^x763)/x764);

    if (t149 != 9LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = INT16_MIN;
	static uint8_t x771 = 3U;

    t150 = (((x769*x770)^x771)/x772);

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x777 = UINT8_MAX;
	uint64_t x778 = 3315326LLU;
	uint64_t x779 = 2011731491161926LLU;
	uint64_t t151 = 55544855176694524LLU;

    t151 = (((x777*x778)^x779)/x780);

    if (t151 != 61395022831LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x781 = UINT8_MAX;
	static int32_t x783 = INT32_MAX;
	static volatile uint64_t t152 = 1111843883057786LLU;

    t152 = (((x781*x782)^x783)/x784);

    if (t152 != 4231803LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x785 = UINT32_MAX;
	int8_t x786 = -1;
	volatile uint8_t x788 = UINT8_MAX;
	volatile int64_t t153 = -4656994020386LL;

    t153 = (((x785*x786)^x787)/x788);

    if (t153 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x789 = INT16_MIN;
	int16_t x790 = 243;
	int64_t x792 = -1LL;
	int64_t t154 = -12324LL;

    t154 = (((x789*x790)^x791)/x792);

    if (t154 != -7962529LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x793 = 2932U;
	int8_t x794 = 13;
	uint32_t x795 = 98023U;
	volatile int16_t x796 = -1936;
	volatile uint32_t t155 = 2127925U;

    t155 = (((x793*x794)^x795)/x796);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x797 = 3513U;
	int8_t x798 = -18;
	static volatile uint8_t x799 = 95U;
	uint32_t x800 = 50040U;
	volatile uint32_t t156 = 607307489U;

    t156 = (((x797*x798)^x799)/x800);

    if (t156 != 85829U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x801 = INT64_MIN;
	uint64_t x802 = UINT64_MAX;
	static int32_t x803 = -1;
	int32_t x804 = INT32_MIN;

    t157 = (((x801*x802)^x803)/x804);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x809 = 50903146343LLU;
	static int8_t x810 = -13;
	uint64_t x811 = 541LLU;
	int32_t x812 = 3;
	uint64_t t158 = 444LLU;

    t158 = (((x809*x810)^x811)/x812);

    if (t158 != 6148914470656216221LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x813 = INT8_MIN;
	uint64_t x814 = UINT64_MAX;
	static volatile int8_t x815 = 11;

    t159 = (((x813*x814)^x815)/x816);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x817 = 54542929U;
	int16_t x818 = INT16_MAX;
	static int16_t x819 = INT16_MIN;
	uint16_t x820 = UINT16_MAX;
	uint32_t t160 = 62348U;

    t160 = (((x817*x818)^x819)/x820);

    if (t160 != 57880U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x821 = INT32_MIN;
	volatile int8_t x822 = 1;
	static int32_t x823 = -795866;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t161 = -7465478;

    t161 = (((x821*x822)^x823)/x824);

    if (t161 != 32756) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x825 = 24U;
	uint32_t x826 = UINT32_MAX;
	uint8_t x827 = 21U;
	static uint32_t x828 = UINT32_MAX;
	uint32_t t162 = 3373648U;

    t162 = (((x825*x826)^x827)/x828);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x829 = -1LL;
	volatile int16_t x830 = INT16_MAX;
	int8_t x831 = INT8_MIN;
	volatile uint8_t x832 = UINT8_MAX;
	int64_t t163 = 413348094134LL;

    t163 = (((x829*x830)^x831)/x832);

    if (t163 != 128LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x833 = 1748U;
	volatile uint8_t x834 = UINT8_MAX;
	static int32_t x835 = INT32_MIN;
	uint64_t x836 = UINT64_MAX;
	volatile uint64_t t164 = 1660695999438242LLU;

    t164 = (((x833*x834)^x835)/x836);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x837 = INT8_MIN;
	static int8_t x838 = INT8_MIN;
	static int64_t x839 = INT64_MIN;
	int8_t x840 = INT8_MIN;
	volatile int64_t t165 = 1148743401768220464LL;

    t165 = (((x837*x838)^x839)/x840);

    if (t165 != 72057594037927808LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x841 = INT32_MIN;
	uint8_t x844 = UINT8_MAX;
	uint64_t t166 = 1423587LLU;

    t166 = (((x841*x842)^x843)/x844);

    if (t166 != 40134671238321751LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x845 = 0U;
	uint8_t x846 = UINT8_MAX;
	int16_t x847 = INT16_MIN;
	int64_t x848 = INT64_MIN;
	volatile int64_t t167 = 428460614LL;

    t167 = (((x845*x846)^x847)/x848);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x853 = INT8_MIN;
	static int16_t x854 = INT16_MIN;
	int32_t x855 = INT32_MIN;
	uint16_t x856 = 252U;

    t168 = (((x853*x854)^x855)/x856);

    if (t168 != -8505116) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x859 = -1;
	static int64_t x860 = -1LL;

    t169 = (((x857*x858)^x859)/x860);

    if (t169 != -157509805LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x861 = -11;
	int64_t x862 = -1LL;
	volatile uint32_t x864 = 15093751U;

    t170 = (((x861*x862)^x863)/x864);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x865 = 3972204522780123LLU;
	int32_t x866 = -1;
	volatile uint32_t x867 = 62437U;
	static volatile uint64_t t171 = 3LLU;

    t171 = (((x865*x866)^x867)/x868);

    if (t171 != 562845908053429LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x869 = 0U;
	static int64_t x870 = INT64_MIN;
	int8_t x872 = -1;
	int64_t t172 = -8LL;

    t172 = (((x869*x870)^x871)/x872);

    if (t172 != 1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x877 = -1;
	static int16_t x878 = INT16_MIN;
	uint16_t x879 = UINT16_MAX;

    t173 = (((x877*x878)^x879)/x880);

    if (t173 != -32767LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x881 = -14;
	volatile int16_t x882 = INT16_MIN;
	int32_t x884 = INT32_MIN;
	int32_t t174 = 7338;

    t174 = (((x881*x882)^x883)/x884);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x885 = INT16_MAX;
	int8_t x886 = 26;
	int32_t x888 = INT32_MAX;
	static volatile int64_t t175 = 27646430LL;

    t175 = (((x885*x886)^x887)/x888);

    if (t175 != -4294967297LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x889 = -1;
	static int32_t x890 = -1;
	int64_t x892 = -7270846LL;
	volatile int64_t t176 = 263025111574336LL;

    t176 = (((x889*x890)^x891)/x892);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x893 = 7748U;
	volatile int64_t x894 = -1LL;
	int64_t x895 = INT64_MAX;
	int8_t x896 = 46;
	static int64_t t177 = 48LL;

    t177 = (((x893*x894)^x895)/x896);

    if (t177 != -200508087757712349LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x897 = INT64_MIN;
	int8_t x898 = 0;
	static volatile uint8_t x899 = UINT8_MAX;
	static volatile uint64_t x900 = 1182451463LLU;
	uint64_t t178 = 491600LLU;

    t178 = (((x897*x898)^x899)/x900);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x916 = -18;
	volatile int32_t t179 = -4;

    t179 = (((x913*x914)^x915)/x916);

    if (t179 != -1566) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x917 = 123U;
	volatile int16_t x918 = -1;
	static int16_t x919 = INT16_MAX;
	int64_t x920 = INT64_MAX;
	int64_t t180 = 24525066779602106LL;

    t180 = (((x917*x918)^x919)/x920);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x921 = INT16_MIN;
	volatile int16_t x922 = INT16_MIN;
	uint32_t x923 = 496244U;
	int64_t x924 = 21LL;
	volatile int64_t t181 = 3830066912LL;

    t181 = (((x921*x922)^x923)/x924);

    if (t181 != 51154193LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x925 = 4U;
	int16_t x926 = 4;
	uint32_t x927 = 167U;
	int8_t x928 = -1;

    t182 = (((x925*x926)^x927)/x928);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x929 = 71U;
	uint64_t x930 = 298LLU;
	int32_t x931 = -228047022;
	uint64_t x932 = 7587448LLU;
	uint64_t t183 = 775604766994282LLU;

    t183 = (((x929*x930)^x931)/x932);

    if (t183 != 2431218516882LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x937 = 4505U;
	uint16_t x938 = UINT16_MAX;
	static uint8_t x939 = UINT8_MAX;
	uint16_t x940 = 15173U;
	static uint32_t t184 = 0U;

    t184 = (((x937*x938)^x939)/x940);

    if (t184 != 19457U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x945 = INT8_MIN;
	int64_t x947 = -1LL;
	uint8_t x948 = UINT8_MAX;
	static int64_t t185 = -374335LL;

    t185 = (((x945*x946)^x947)/x948);

    if (t185 != -16448LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x949 = 928U;
	uint64_t x950 = 323283397259LLU;
	static volatile uint8_t x951 = 10U;
	uint16_t x952 = UINT16_MAX;

    t186 = (((x949*x950)^x951)/x952);

    if (t186 != 4577813270LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x957 = -1;
	int8_t x958 = -1;
	static uint8_t x959 = UINT8_MAX;
	static int32_t t187 = 254609;

    t187 = (((x957*x958)^x959)/x960);

    if (t187 != -254) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x961 = INT64_MIN;
	uint64_t x962 = UINT64_MAX;
	int32_t x963 = INT32_MIN;
	int16_t x964 = INT16_MIN;

    t188 = (((x961*x962)^x963)/x964);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x969 = INT16_MIN;
	int8_t x970 = 1;
	uint32_t x971 = 952U;
	int32_t x972 = INT32_MIN;
	volatile uint32_t t189 = 62U;

    t189 = (((x969*x970)^x971)/x972);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x977 = INT8_MIN;
	uint64_t x978 = 1042LLU;
	int64_t x979 = INT64_MIN;
	int32_t x980 = INT32_MIN;

    t190 = (((x977*x978)^x979)/x980);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x981 = 209;
	volatile uint16_t x982 = 10U;
	int16_t x983 = -1;
	int64_t x984 = INT64_MAX;
	int64_t t191 = -2544253327235418LL;

    t191 = (((x981*x982)^x983)/x984);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x985 = -58801991LL;
	int8_t x986 = -1;
	int64_t x987 = -1LL;
	int64_t t192 = 57LL;

    t192 = (((x985*x986)^x987)/x988);

    if (t192 != 58801992LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x989 = INT8_MIN;
	static uint64_t x990 = UINT64_MAX;
	static int8_t x991 = INT8_MAX;
	static int8_t x992 = -11;
	static volatile uint64_t t193 = 32437LLU;

    t193 = (((x989*x990)^x991)/x992);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x993 = INT8_MAX;
	volatile int32_t x994 = 6951;
	uint16_t x995 = 1U;

    t194 = (((x993*x994)^x995)/x996);

    if (t194 != -26) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1017 = -1;
	static int32_t x1018 = 4325;
	volatile uint64_t x1019 = UINT64_MAX;
	uint32_t x1020 = UINT32_MAX;
	uint64_t t195 = 1431541900949978745LLU;

    t195 = (((x1017*x1018)^x1019)/x1020);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1021 = INT32_MAX;
	static volatile int8_t x1023 = -1;
	int16_t x1024 = 20;

    t196 = (((x1021*x1022)^x1023)/x1024);

    if (t196 != -107374182) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1029 = -1LL;
	static int64_t x1030 = -258781465LL;
	uint32_t x1031 = 518U;
	volatile int64_t t197 = -29719581LL;

    t197 = (((x1029*x1030)^x1031)/x1032);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1037 = INT16_MIN;
	uint16_t x1040 = 391U;
	uint32_t t198 = 59U;

    t198 = (((x1037*x1038)^x1039)/x1040);

    if (t198 != 263987U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1041 = 0LLU;
	volatile int8_t x1042 = 1;
	int64_t x1043 = -511950191437869169LL;
	static int16_t x1044 = INT16_MIN;
	static uint64_t t199 = 27321183332077LLU;

    t199 = (((x1041*x1042)^x1043)/x1044);

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

