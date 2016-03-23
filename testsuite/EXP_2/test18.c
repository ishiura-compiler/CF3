
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

static int32_t x5 = -1;
int64_t x6 = 976318757038947LL;
volatile uint64_t x10 = UINT64_MAX;
uint8_t x13 = 1U;
uint8_t x15 = 8U;
volatile int32_t x32 = -1;
int16_t x39 = INT16_MAX;
volatile int32_t t6 = 6;
int8_t x41 = INT8_MAX;
static volatile uint8_t x51 = 44U;
static uint16_t x53 = UINT16_MAX;
static int64_t x54 = -1LL;
int8_t x63 = -1;
static uint16_t x64 = 828U;
static uint8_t x70 = 1U;
int16_t x72 = INT16_MIN;
int32_t x76 = -63386709;
int32_t t14 = -682360;
uint32_t x79 = 292896282U;
volatile int64_t x83 = INT64_MIN;
int64_t x84 = INT64_MIN;
uint64_t t16 = 42895844638LLU;
static uint32_t x85 = UINT32_MAX;
uint32_t x86 = 160115003U;
int8_t x88 = INT8_MAX;
int8_t x89 = 2;
int8_t x93 = INT8_MAX;
uint64_t x94 = 2596584800LLU;
uint16_t x102 = UINT16_MAX;
uint8_t x104 = 107U;
int32_t x105 = INT32_MAX;
int16_t x114 = INT16_MIN;
static int32_t x115 = -1;
volatile int64_t t22 = 6786392LL;
uint32_t x122 = UINT32_MAX;
volatile uint64_t x133 = UINT64_MAX;
int32_t x135 = 2848;
volatile int64_t x146 = INT64_MAX;
uint64_t x153 = 122848237LLU;
uint16_t x156 = UINT16_MAX;
uint64_t x167 = 7622484459894LLU;
uint32_t x176 = 56892540U;
static int8_t x178 = INT8_MAX;
int64_t x182 = INT64_MAX;
int64_t x189 = INT64_MAX;
volatile int16_t x192 = INT16_MAX;
int64_t x196 = INT64_MIN;
int64_t x200 = -1LL;
uint64_t x201 = 4290728650LLU;
static int16_t x213 = -1;
uint8_t x234 = UINT8_MAX;
volatile uint64_t t44 = 64LLU;
int64_t x240 = INT64_MIN;
uint32_t t46 = 162013U;
volatile int32_t t48 = 5797;
static int16_t x261 = -1533;
uint32_t x273 = 1607834135U;
static int64_t x274 = 5049132859051367LL;
static int32_t x287 = INT32_MAX;
int64_t t55 = -1314310493243LL;
static uint32_t x289 = UINT32_MAX;
int8_t x310 = 1;
uint32_t x313 = UINT32_MAX;
volatile int8_t x324 = -1;
uint32_t t64 = 1U;
volatile uint64_t x329 = UINT64_MAX;
volatile int32_t x342 = 2011;
volatile int16_t x348 = 1;
static uint16_t x349 = 30130U;
static int16_t x351 = INT16_MAX;
int16_t x352 = INT16_MIN;
volatile uint32_t x353 = 3590U;
int8_t x366 = INT8_MIN;
volatile int16_t x378 = 721;
int8_t x380 = INT8_MAX;
static int8_t x382 = -1;
int8_t x383 = 1;
static uint32_t x384 = 51535354U;
static uint32_t t74 = 522951U;
static volatile int32_t x409 = 7;
int64_t x413 = INT64_MAX;
int16_t x426 = -1;
volatile int64_t t83 = -722129LL;
int64_t x430 = 257571LL;
volatile int32_t x432 = -4371245;
volatile int64_t t84 = 50253046421LL;
int64_t x433 = INT64_MIN;
static int32_t x436 = -32640701;
uint64_t t85 = 651281739343899862LLU;
uint16_t x438 = 219U;
uint16_t x447 = UINT16_MAX;
uint64_t t88 = 0LLU;
static int16_t x457 = INT16_MIN;
uint32_t x460 = UINT32_MAX;
volatile uint32_t t90 = 20110U;
volatile int64_t t91 = 1LL;
uint16_t x477 = 711U;
int64_t t95 = 463LL;
static uint32_t x486 = 20727843U;
int32_t x500 = -126550715;
volatile int32_t x505 = INT32_MIN;
int32_t x508 = 22691531;
uint8_t x514 = UINT8_MAX;
int64_t x518 = INT64_MIN;
volatile int64_t t102 = 1313611LL;
volatile int16_t x522 = INT16_MIN;
int64_t t103 = 19399297692LL;
int64_t x531 = -1LL;
volatile int8_t x532 = INT8_MIN;
int16_t x536 = 433;
volatile int64_t t106 = 888158698162187LL;
uint64_t x538 = 430LLU;
int16_t x540 = INT16_MIN;
uint64_t t107 = 20LLU;
static volatile uint64_t t109 = 16532924285639797LLU;
uint32_t x550 = 15723444U;
static volatile int8_t x552 = INT8_MAX;
uint16_t x554 = UINT16_MAX;
int32_t x563 = 3;
volatile int64_t t113 = 259613LL;
int32_t x572 = INT32_MIN;
int16_t x573 = INT16_MIN;
volatile uint16_t x574 = 0U;
int16_t x580 = -247;
static int16_t x610 = INT16_MIN;
int16_t x612 = INT16_MIN;
volatile int32_t t120 = 1;
uint32_t x618 = 2570789U;
static uint16_t x620 = 9U;
static uint64_t t123 = 937226545319359271LLU;
int8_t x629 = INT8_MIN;
volatile int32_t t124 = 3263977;
int64_t x634 = -1LL;
uint8_t x640 = UINT8_MAX;
volatile int32_t t126 = -13645088;
int8_t x651 = 31;
int8_t x657 = -3;
int64_t t130 = 287131369394862251LL;
volatile int16_t x670 = INT16_MAX;
uint16_t x678 = UINT16_MAX;
static int16_t x681 = INT16_MIN;
volatile uint64_t t137 = 18LLU;
static volatile uint64_t t140 = 162142LLU;
static int64_t x701 = -1LL;
int8_t x703 = INT8_MIN;
uint64_t x721 = 178805937206LLU;
int8_t x723 = -2;
int16_t x726 = -584;
int16_t x728 = INT16_MIN;
volatile int64_t t148 = -16LL;
int64_t x746 = INT64_MIN;
static volatile int64_t t151 = 83772481450427LL;
uint16_t x754 = 4367U;
uint64_t x762 = UINT64_MAX;
int16_t x764 = INT16_MIN;
static int16_t x771 = INT16_MIN;
uint16_t x772 = 4556U;
volatile int32_t t155 = -41743766;
int16_t x774 = INT16_MIN;
int64_t x783 = 1LL;
static uint16_t x789 = UINT16_MAX;
static volatile uint16_t x804 = UINT16_MAX;
int32_t t166 = -164506;
static int64_t x829 = 208366LL;
volatile int16_t x848 = 701;
int32_t t170 = 555;
int32_t x855 = INT32_MIN;
static uint8_t x856 = 10U;
uint64_t t172 = 100798LLU;
int8_t x862 = 7;
volatile int32_t x864 = -11900889;
volatile uint32_t x881 = UINT32_MAX;
volatile int16_t x898 = INT16_MIN;
uint64_t x904 = UINT64_MAX;
int32_t x908 = INT32_MIN;
int32_t x909 = 140;
uint32_t x910 = 149657410U;
uint8_t x914 = UINT8_MAX;
volatile uint16_t x917 = 1U;
uint64_t x937 = UINT64_MAX;
static uint64_t x938 = 4115803254189447LLU;
uint32_t x940 = UINT32_MAX;
uint32_t t188 = 776848808U;
uint64_t x945 = 0LLU;
uint64_t x946 = 67473860502469LLU;
int64_t x948 = INT64_MIN;
volatile uint16_t x952 = UINT16_MAX;
int32_t x957 = -1;
uint32_t x960 = UINT32_MAX;
uint32_t t191 = 1029659983U;
static int32_t x965 = 1769930;
int64_t x971 = 3LL;
int32_t x972 = 284;
int64_t x980 = INT64_MAX;
uint64_t t198 = 2776582LLU;
static volatile int64_t x999 = INT64_MIN;


void f0(void) {
    	uint8_t x1 = 43U;
	int16_t x2 = INT16_MIN;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = -1LL;
	int64_t t0 = -1017113192LL;

    t0 = ((x1-(x2+x3))/x4);

    if (t0 != -32939LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x7 = UINT16_MAX;
	static int64_t x8 = 208LL;
	int64_t t1 = 674LL;

    t1 = ((x5-(x6+x7))/x8);

    if (t1 != -4693840178386LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	volatile int8_t x11 = INT8_MAX;
	volatile int16_t x12 = -1;
	volatile uint64_t t2 = 25246871LLU;

    t2 = ((x9-(x10+x11))/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 14U;
	static int64_t x16 = -1LL;
	volatile int64_t t3 = 63448035635453890LL;

    t3 = ((x13-(x14+x15))/x16);

    if (t3 != 21LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = 4U;
	int8_t x22 = INT8_MAX;
	uint32_t x23 = 848216U;
	int32_t x24 = -267317;
	uint32_t t4 = 1U;

    t4 = ((x21-(x22+x23))/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = -36313;
	int32_t t5 = -4017770;

    t5 = ((x29-(x30+x31))/x32);

    if (t5 != -69208) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x37 = -2666;
	static int16_t x38 = -1;
	int16_t x40 = 1583;

    t6 = ((x37-(x38+x39))/x40);

    if (t6 != -22) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x42 = -1;
	volatile uint16_t x43 = UINT16_MAX;
	int8_t x44 = -1;
	static volatile int32_t t7 = 51530080;

    t7 = ((x41-(x42+x43))/x44);

    if (t7 != 65407) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x45 = -1LL;
	volatile uint16_t x46 = UINT16_MAX;
	int64_t x47 = -941546204556738805LL;
	volatile uint32_t x48 = 30598U;
	int64_t t8 = -447107657LL;

    t8 = ((x45-(x46+x47))/x48);

    if (t8 != 30771495017866LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x49 = -1;
	uint8_t x50 = 1U;
	volatile uint32_t x52 = UINT32_MAX;
	static volatile uint32_t t9 = 340U;

    t9 = ((x49-(x50+x51))/x52);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x55 = 19511834579213LLU;
	static volatile uint16_t x56 = 30507U;
	volatile uint64_t t10 = 31378LLU;

    t10 = ((x53-(x54+x55))/x56);

    if (t10 != 604671864223785LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	int64_t x58 = -1LL;
	int32_t x59 = -135;
	int16_t x60 = INT16_MIN;
	volatile int64_t t11 = -7453989LL;

    t11 = ((x57-(x58+x59))/x60);

    if (t11 != -2LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x61 = 3524U;
	uint16_t x62 = UINT16_MAX;
	volatile uint32_t t12 = 5750U;

    t12 = ((x61-(x62+x63))/x64);

    if (t12 != 5187083U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 117078025U;
	static int32_t x71 = -334982;
	uint32_t t13 = 34236U;

    t13 = ((x69-(x70+x71))/x72);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x73 = INT32_MIN;
	int16_t x74 = -1;
	int32_t x75 = -1822509;

    t14 = ((x73-(x74+x75))/x76);

    if (t14 != 33) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x77 = 17927U;
	static int32_t x78 = 6843;
	int32_t x80 = 14804;
	volatile uint32_t t15 = 6141U;

    t15 = ((x77-(x78+x79))/x80);

    if (t15 != 270337U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 1LLU;
	volatile uint8_t x82 = UINT8_MAX;

    t16 = ((x81-(x82+x83))/x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x87 = 115;
	volatile uint32_t t17 = 144385U;

    t17 = ((x85-(x86+x87))/x88);

    if (t17 != 32557891U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x90 = -54;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = 1455;
	volatile uint32_t t18 = 1279316483U;

    t18 = ((x89-(x90+x91))/x92);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t19 = 5122761LLU;

    t19 = ((x93-(x94+x95))/x96);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x101 = 0;
	int16_t x103 = INT16_MIN;
	int32_t t20 = 808954;

    t20 = ((x101-(x102+x103))/x104);

    if (t20 != -306) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x106 = 40197178803163620LLU;
	static int16_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t21 = 1769477811260LLU;

    t21 = ((x105-(x106+x107))/x108);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x113 = 91U;
	static int64_t x116 = INT64_MIN;

    t22 = ((x113-(x114+x115))/x116);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x123 = 6918169;
	int32_t x124 = 126497;
	volatile uint32_t t23 = 10U;

    t23 = ((x121-(x122+x123))/x124);

    if (t23 != 33898U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x129 = UINT32_MAX;
	static uint8_t x130 = UINT8_MAX;
	uint8_t x131 = 1U;
	volatile int64_t x132 = 1870130LL;
	volatile int64_t t24 = 260306413107439LL;

    t24 = ((x129-(x130+x131))/x132);

    if (t24 != 2296LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x134 = INT64_MIN;
	uint32_t x136 = UINT32_MAX;
	static uint64_t t25 = 1829LLU;

    t25 = ((x133-(x134+x135))/x136);

    if (t25 != 2147483648LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	int8_t x139 = 1;
	int16_t x140 = 783;
	static volatile int32_t t26 = -48177914;

    t26 = ((x137-(x138+x139))/x140);

    if (t26 != 2742635) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x145 = 35528332;
	static volatile int64_t x147 = -156145484277187718LL;
	int16_t x148 = -1;
	volatile int64_t t27 = 13824758388044967LL;

    t27 = ((x145-(x146+x147))/x148);

    if (t27 != 9067226552542059757LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x149 = -1LL;
	volatile uint64_t x150 = 531822911323373830LLU;
	uint8_t x151 = 1U;
	int16_t x152 = 100;
	volatile uint64_t t28 = 178027LLU;

    t28 = ((x149-(x150+x151))/x152);

    if (t28 != 179149211623861777LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x154 = UINT8_MAX;
	static uint16_t x155 = 6U;
	volatile uint64_t t29 = 4107806026707LLU;

    t29 = ((x153-(x154+x155))/x156);

    if (t29 != 1874LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x157 = INT16_MIN;
	static int64_t x158 = -33LL;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;
	volatile int64_t t30 = 2068582099LL;

    t30 = ((x157-(x158+x159))/x160);

    if (t30 != -2147450913LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = 132577U;
	static uint8_t x162 = 10U;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MIN;
	uint32_t t31 = 50U;

    t31 = ((x161-(x162+x163))/x164);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x165 = 3967;
	uint16_t x166 = UINT16_MAX;
	static int64_t x168 = 250LL;
	uint64_t t32 = 8667LLU;

    t32 = ((x165-(x166+x167))/x168);

    if (t32 != 73786945804900120LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x169 = -1LL;
	int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int8_t x172 = -45;
	volatile int64_t t33 = -1864431831009941114LL;

    t33 = ((x169-(x170+x171))/x172);

    if (t33 != 204963823041216512LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x173 = INT16_MIN;
	static volatile int64_t x174 = 633748LL;
	static int16_t x175 = INT16_MAX;
	int64_t t34 = -528132054426LL;

    t34 = ((x173-(x174+x175))/x176);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x177 = 6539U;
	uint16_t x179 = UINT16_MAX;
	volatile int64_t x180 = INT64_MAX;
	static volatile int64_t t35 = -1994LL;

    t35 = ((x177-(x178+x179))/x180);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x181 = 1672931LLU;
	int64_t x183 = -2526LL;
	uint8_t x184 = 15U;
	static volatile uint64_t t36 = 153469997449LLU;

    t36 = ((x181-(x182+x183))/x184);

    if (t36 != 614891469123763417LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x185 = 17;
	int64_t x186 = -281023475825200471LL;
	int64_t x187 = -7LL;
	int32_t x188 = 725749;
	int64_t t37 = -313LL;

    t37 = ((x185-(x186+x187))/x188);

    if (t37 != 387218550525LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x190 = 406;
	volatile uint16_t x191 = UINT16_MAX;
	volatile int64_t t38 = 49221342131LL;

    t38 = ((x189-(x190+x191))/x192);

    if (t38 != 281483566907397LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x193 = INT8_MAX;
	uint64_t x194 = 22LLU;
	static int64_t x195 = INT64_MAX;
	uint64_t t39 = 1LLU;

    t39 = ((x193-(x194+x195))/x196);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x197 = 6U;
	int64_t x198 = 253911838LL;
	int32_t x199 = INT32_MIN;
	int64_t t40 = -135908920628LL;

    t40 = ((x197-(x198+x199))/x200);

    if (t40 != -1893571816LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x202 = 93;
	uint16_t x203 = 551U;
	int64_t x204 = -1LL;
	uint64_t t41 = 686220784026029LLU;

    t41 = ((x201-(x202+x203))/x204);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x209 = -32555747;
	int64_t x210 = -1LL;
	uint8_t x211 = 48U;
	static uint8_t x212 = 1U;
	int64_t t42 = 18802535LL;

    t42 = ((x209-(x210+x211))/x212);

    if (t42 != -32555794LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x214 = 10U;
	int64_t x215 = -110915LL;
	int32_t x216 = INT32_MIN;
	int64_t t43 = -3809LL;

    t43 = ((x213-(x214+x215))/x216);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x233 = INT16_MIN;
	static uint64_t x235 = 224758LLU;
	uint16_t x236 = 4U;

    t44 = ((x233-(x234+x235))/x236);

    if (t44 != 4611686018427323458LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x237 = INT8_MAX;
	uint64_t x238 = 499LLU;
	int8_t x239 = -3;
	uint64_t t45 = 99328965001273785LLU;

    t45 = ((x237-(x238+x239))/x240);

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x245 = INT32_MAX;
	volatile uint32_t x246 = 3346U;
	int32_t x247 = INT32_MIN;
	int8_t x248 = 14;

    t46 = ((x245-(x246+x247))/x248);

    if (t46 != 306783139U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x253 = 648U;
	int8_t x254 = -14;
	int16_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int32_t t47 = -40417;

    t47 = ((x253-(x254+x255))/x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x257 = INT8_MIN;
	static uint8_t x258 = 14U;
	static int32_t x259 = -1;
	int16_t x260 = 78;

    t48 = ((x257-(x258+x259))/x260);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x262 = 163U;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t49 = 0;

    t49 = ((x261-(x262+x263))/x264);

    if (t49 != -6) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	uint32_t x266 = UINT32_MAX;
	static int16_t x267 = INT16_MIN;
	uint32_t x268 = 854U;
	volatile uint32_t t50 = 195084U;

    t50 = ((x265-(x266+x267))/x268);

    if (t50 != 38U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x269 = -4;
	uint16_t x270 = 15U;
	uint32_t x271 = 1U;
	uint8_t x272 = UINT8_MAX;
	volatile uint32_t t51 = 234U;

    t51 = ((x269-(x270+x271))/x272);

    if (t51 != 16843008U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x275 = 1253U;
	int32_t x276 = INT32_MAX;
	int64_t t52 = 471112570599788515LL;

    t52 = ((x273-(x274+x275))/x276);

    if (t52 != -2351184LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x277 = 10466574U;
	int32_t x278 = 25;
	uint8_t x279 = 5U;
	static int16_t x280 = INT16_MIN;
	uint32_t t53 = 12742869U;

    t53 = ((x277-(x278+x279))/x280);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x281 = -1;
	uint32_t x282 = 188088206U;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = -1;
	uint32_t t54 = 51042693U;

    t54 = ((x281-(x282+x283))/x284);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	static int64_t x286 = INT64_MIN;
	volatile uint16_t x288 = UINT16_MAX;

    t55 = ((x285-(x286+x287))/x288);

    if (t55 != 140739635838977LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x290 = -1;
	static int64_t x291 = -46LL;
	int8_t x292 = -2;
	static int64_t t56 = 31LL;

    t56 = ((x289-(x290+x291))/x292);

    if (t56 != -2147483671LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x293 = UINT8_MAX;
	uint8_t x294 = 8U;
	int64_t x295 = 2103LL;
	uint16_t x296 = UINT16_MAX;
	int64_t t57 = 879LL;

    t57 = ((x293-(x294+x295))/x296);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x297 = -1LL;
	int8_t x298 = 0;
	uint64_t x299 = 80497018590884216LLU;
	volatile int64_t x300 = INT64_MIN;
	volatile uint64_t t58 = 368232LLU;

    t58 = ((x297-(x298+x299))/x300);

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 45U;
	uint64_t x303 = UINT64_MAX;
	static uint64_t x304 = 57602690966899LLU;
	uint64_t t59 = 1456566828LLU;

    t59 = ((x301-(x302+x303))/x304);

    if (t59 != 320241LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x305 = 19748U;
	uint8_t x306 = 14U;
	uint8_t x307 = 41U;
	int64_t x308 = INT64_MAX;
	volatile int64_t t60 = -464980372LL;

    t60 = ((x305-(x306+x307))/x308);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x311 = -3378447LL;
	volatile uint8_t x312 = UINT8_MAX;
	static volatile int64_t t61 = -43288634LL;

    t61 = ((x309-(x310+x311))/x312);

    if (t61 != 13248LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x314 = INT32_MIN;
	uint8_t x315 = 2U;
	static int8_t x316 = INT8_MIN;
	static volatile uint32_t t62 = 4334U;

    t62 = ((x313-(x314+x315))/x316);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x317 = UINT8_MAX;
	volatile int8_t x318 = INT8_MIN;
	static uint16_t x319 = UINT16_MAX;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t63 = -298319411;

    t63 = ((x317-(x318+x319))/x320);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x321 = INT32_MIN;
	volatile int32_t x322 = INT32_MIN;
	uint32_t x323 = 1342U;

    t64 = ((x321-(x322+x323))/x324);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x330 = UINT8_MAX;
	volatile int8_t x331 = INT8_MIN;
	uint8_t x332 = 2U;
	volatile uint64_t t65 = 2482233LLU;

    t65 = ((x329-(x330+x331))/x332);

    if (t65 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x333 = INT16_MIN;
	uint16_t x334 = 1U;
	int8_t x335 = INT8_MIN;
	volatile uint8_t x336 = 2U;
	int32_t t66 = 1088;

    t66 = ((x333-(x334+x335))/x336);

    if (t66 != -16320) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x341 = 28U;
	int32_t x343 = INT32_MIN;
	static int64_t x344 = 63885591526012LL;
	int64_t t67 = 536302890841291985LL;

    t67 = ((x341-(x342+x343))/x344);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x345 = -870;
	int32_t x346 = INT32_MAX;
	int16_t x347 = -1325;
	int32_t t68 = -30907879;

    t68 = ((x345-(x346+x347))/x348);

    if (t68 != -2147483192) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x350 = -1LL;
	volatile int64_t t69 = 61610340362109070LL;

    t69 = ((x349-(x350+x351))/x352);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x354 = 1963515717900LL;
	volatile int32_t x355 = -1;
	volatile uint16_t x356 = 1202U;
	volatile int64_t t70 = 6763256999100LL;

    t70 = ((x353-(x354+x355))/x356);

    if (t70 != -1633540527LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x367 = INT16_MIN;
	int8_t x368 = -8;
	int32_t t71 = 111961652;

    t71 = ((x365-(x366+x367))/x368);

    if (t71 != -16) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = -1;
	volatile uint8_t x371 = 4U;
	int8_t x372 = -1;
	volatile int32_t t72 = 22;

    t72 = ((x369-(x370+x371))/x372);

    if (t72 != -65532) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x377 = 7400637988852LL;
	volatile int32_t x379 = INT32_MIN;
	volatile int64_t t73 = -66870800290832LL;

    t73 = ((x377-(x378+x379))/x380);

    if (t73 != 58289649384LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x381 = -43548710;

    t74 = ((x381-(x382+x383))/x384);

    if (t74 != 82U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x385 = INT8_MAX;
	int32_t x386 = INT32_MIN;
	static int64_t x387 = -1LL;
	int8_t x388 = -28;
	int64_t t75 = 213737432056158375LL;

    t75 = ((x385-(x386+x387))/x388);

    if (t75 != -76695849LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x389 = 377386U;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -6;
	uint8_t x392 = 4U;
	volatile uint32_t t76 = 1U;

    t76 = ((x389-(x390+x391))/x392);

    if (t76 != 77964U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x393 = INT8_MIN;
	int32_t x394 = 209;
	int32_t x395 = -1;
	int64_t x396 = INT64_MAX;
	volatile int64_t t77 = 7573816LL;

    t77 = ((x393-(x394+x395))/x396);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x397 = -1LL;
	static int64_t x398 = -524289048411046LL;
	uint32_t x399 = 2U;
	int32_t x400 = INT32_MIN;
	volatile int64_t t78 = -15LL;

    t78 = ((x397-(x398+x399))/x400);

    if (t78 != -244141LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x401 = -162052771;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -1LL;
	int16_t x404 = -1;
	static int64_t t79 = -450LL;

    t79 = ((x401-(x402+x403))/x404);

    if (t79 != -1985430878LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x410 = -2208058699738979LL;
	int64_t x411 = INT64_MAX;
	static uint16_t x412 = 608U;
	int64_t t80 = 954420903LL;

    t80 = ((x409-(x410+x411))/x412);

    if (t80 != -15166388121965521LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x414 = 3406567U;
	volatile int32_t x415 = 243233563;
	uint32_t x416 = 888476U;
	int64_t t81 = -27910910LL;

    t81 = ((x413-(x414+x415))/x416);

    if (t81 != 10381115569366LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x421 = INT16_MIN;
	static volatile int8_t x422 = -1;
	int8_t x423 = 1;
	int32_t x424 = -1;
	static volatile int32_t t82 = 260002063;

    t82 = ((x421-(x422+x423))/x424);

    if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x425 = -768717298846243LL;
	int8_t x427 = 0;
	int32_t x428 = -1;

    t83 = ((x425-(x426+x427))/x428);

    if (t83 != 768717298846242LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x429 = 97U;
	int32_t x431 = 565424341;

    t84 = ((x429-(x430+x431))/x432);

    if (t84 != 129LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x434 = 2347027198838612215LLU;
	static volatile int32_t x435 = -1;

    t85 = ((x433-(x434+x435))/x436);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x437 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MIN;
	int64_t t86 = 5215044LL;

    t86 = ((x437-(x438+x439))/x440);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x441 = INT8_MIN;
	int32_t x442 = INT32_MAX;
	int64_t x443 = -1LL;
	int32_t x444 = INT32_MIN;
	int64_t t87 = 47895808603737388LL;

    t87 = ((x441-(x442+x443))/x444);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x445 = INT32_MIN;
	static uint64_t x446 = UINT64_MAX;
	volatile uint8_t x448 = 60U;

    t88 = ((x445-(x446+x447))/x448);

    if (t88 != 307445734526033373LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x449 = -1;
	volatile uint8_t x450 = 23U;
	int32_t x451 = -43;
	int8_t x452 = INT8_MIN;
	int32_t t89 = -555373837;

    t89 = ((x449-(x450+x451))/x452);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x458 = INT32_MIN;
	int32_t x459 = 3;

    t90 = ((x457-(x458+x459))/x460);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x461 = 102;
	static int32_t x462 = -1;
	int16_t x463 = -1;
	static int64_t x464 = -1LL;

    t91 = ((x461-(x462+x463))/x464);

    if (t91 != -104LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x465 = 26247U;
	volatile uint8_t x466 = 23U;
	int8_t x467 = -1;
	uint32_t x468 = 17845U;
	uint32_t t92 = 747U;

    t92 = ((x465-(x466+x467))/x468);

    if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x469 = -3;
	static int16_t x470 = INT16_MIN;
	static uint16_t x471 = UINT16_MAX;
	int32_t x472 = -1;
	int32_t t93 = 333088974;

    t93 = ((x469-(x470+x471))/x472);

    if (t93 != 32770) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int64_t x474 = 8712946473983LL;
	volatile int32_t x475 = 32109;
	int32_t x476 = -1;
	volatile int64_t t94 = -30LL;

    t94 = ((x473-(x474+x475))/x476);

    if (t94 != 8708651538797LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x478 = INT8_MAX;
	volatile int64_t x479 = -1LL;
	uint8_t x480 = UINT8_MAX;

    t95 = ((x477-(x478+x479))/x480);

    if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x485 = UINT8_MAX;
	uint16_t x487 = UINT16_MAX;
	volatile uint64_t x488 = 594552497836955106LLU;
	volatile uint64_t t96 = 134LLU;

    t96 = ((x485-(x486+x487))/x488);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x489 = INT32_MIN;
	volatile int16_t x490 = INT16_MIN;
	static int16_t x491 = 1814;
	static int64_t x492 = -72014456LL;
	int64_t t97 = -278743128LL;

    t97 = ((x489-(x490+x491))/x492);

    if (t97 != 29LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x493 = INT8_MIN;
	static int16_t x494 = 33;
	static volatile uint8_t x495 = UINT8_MAX;
	volatile int8_t x496 = INT8_MAX;
	static int32_t t98 = -31;

    t98 = ((x493-(x494+x495))/x496);

    if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x497 = -1;
	uint8_t x498 = 6U;
	volatile int64_t x499 = -1LL;
	volatile int64_t t99 = -1359LL;

    t99 = ((x497-(x498+x499))/x500);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x506 = -328;
	volatile int8_t x507 = INT8_MIN;
	int32_t t100 = -1;

    t100 = ((x505-(x506+x507))/x508);

    if (t100 != -94) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x513 = -1;
	uint16_t x515 = 0U;
	int32_t x516 = -1;
	volatile int32_t t101 = -4891270;

    t101 = ((x513-(x514+x515))/x516);

    if (t101 != 256) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x517 = INT32_MIN;
	uint8_t x519 = 30U;
	volatile uint32_t x520 = 5734U;

    t102 = ((x517-(x518+x519))/x520);

    if (t102 != 1608540640862799LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x521 = -126;
	static int8_t x523 = 29;
	int64_t x524 = 2299008588LL;

    t103 = ((x521-(x522+x523))/x524);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x525 = -17;
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = -1;
	int8_t x528 = INT8_MIN;
	volatile int32_t t104 = 22711834;

    t104 = ((x525-(x526+x527))/x528);

    if (t104 != 512) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x529 = -19635;
	int64_t x530 = -1LL;
	volatile int64_t t105 = 1346721858008LL;

    t105 = ((x529-(x530+x531))/x532);

    if (t105 != 153LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x533 = -1;
	int64_t x534 = -48LL;
	static uint16_t x535 = 2883U;

    t106 = ((x533-(x534+x535))/x536);

    if (t106 != -6LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x537 = 579434894814955LLU;
	int32_t x539 = INT32_MIN;

    t107 = ((x537-(x538+x539))/x540);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x541 = UINT8_MAX;
	int32_t x542 = -1;
	volatile int64_t x543 = INT64_MAX;
	int64_t x544 = 6000LL;
	static volatile int64_t t108 = 695903555LL;

    t108 = ((x541-(x542+x543))/x544);

    if (t108 != -1537228672809129LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x545 = INT16_MIN;
	uint64_t x546 = 115433934778281LLU;
	volatile uint32_t x547 = UINT32_MAX;
	static int8_t x548 = INT8_MAX;

    t109 = ((x545-(x546+x547))/x548);

    if (t109 != 145249044373856482LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x549 = -1LL;
	volatile uint16_t x551 = 3U;
	volatile int64_t t110 = 60LL;

    t110 = ((x549-(x550+x551))/x552);

    if (t110 != -123806LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x553 = 6175U;
	uint8_t x555 = UINT8_MAX;
	static int8_t x556 = -1;
	volatile uint32_t t111 = 2U;

    t111 = ((x553-(x554+x555))/x556);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x557 = 962578094333555LL;
	static uint8_t x558 = 10U;
	static int16_t x559 = 0;
	int16_t x560 = INT16_MIN;
	int64_t t112 = -25445385993219LL;

    t112 = ((x557-(x558+x559))/x560);

    if (t112 != -29375552195LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x561 = 318;
	int64_t x562 = -9473LL;
	static int16_t x564 = INT16_MIN;

    t113 = ((x561-(x562+x563))/x564);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x569 = INT8_MIN;
	int32_t x570 = -1;
	int8_t x571 = 7;
	volatile int32_t t114 = 11158;

    t114 = ((x569-(x570+x571))/x572);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x575 = 5303236;
	int16_t x576 = 679;
	int32_t t115 = 3478248;

    t115 = ((x573-(x574+x575))/x576);

    if (t115 != -7858) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x577 = 5000104865LLU;
	uint16_t x578 = 645U;
	int32_t x579 = 14477;
	volatile uint64_t t116 = 5LLU;

    t116 = ((x577-(x578+x579))/x580);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x585 = INT16_MIN;
	uint16_t x586 = 1U;
	static int16_t x587 = INT16_MIN;
	int16_t x588 = INT16_MIN;
	volatile int32_t t117 = 1560;

    t117 = ((x585-(x586+x587))/x588);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x593 = -1;
	uint16_t x594 = 6U;
	uint64_t x595 = 70888671738LLU;
	int16_t x596 = INT16_MAX;
	uint64_t t118 = 7LLU;

    t118 = ((x593-(x594+x595))/x596);

    if (t118 != 562967131651383LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x597 = INT32_MAX;
	int16_t x598 = INT16_MAX;
	uint8_t x599 = 1U;
	static uint64_t x600 = 200526977LLU;
	static uint64_t t119 = 32941088153004680LLU;

    t119 = ((x597-(x598+x599))/x600);

    if (t119 != 10LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x609 = 44U;
	static int16_t x611 = -1;

    t120 = ((x609-(x610+x611))/x612);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x613 = 80872U;
	static int16_t x614 = -1;
	static uint16_t x615 = UINT16_MAX;
	volatile int16_t x616 = INT16_MIN;
	volatile uint32_t t121 = 53477134U;

    t121 = ((x613-(x614+x615))/x616);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x617 = INT16_MIN;
	int32_t x619 = -1399;
	uint32_t t122 = 82298U;

    t122 = ((x617-(x618+x619))/x620);

    if (t122 != 476929459U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x625 = -2295LL;
	static uint64_t x626 = UINT64_MAX;
	int16_t x627 = INT16_MIN;
	volatile int8_t x628 = 4;

    t123 = ((x625-(x626+x627))/x628);

    if (t123 != 7618LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x630 = INT16_MIN;
	int8_t x631 = -1;
	volatile int8_t x632 = INT8_MIN;

    t124 = ((x629-(x630+x631))/x632);

    if (t124 != -255) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x633 = INT16_MIN;
	static uint64_t x635 = 682546LLU;
	uint32_t x636 = 249U;
	uint64_t t125 = 3778LLU;

    t125 = ((x633-(x634+x635))/x636);

    if (t125 != 74083309532967214LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x637 = -1;
	int16_t x638 = INT16_MIN;
	int32_t x639 = -1;

    t126 = ((x637-(x638+x639))/x640);

    if (t126 != 128) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x641 = 165551LLU;
	static int32_t x642 = INT32_MIN;
	volatile uint64_t x643 = UINT64_MAX;
	uint16_t x644 = UINT16_MAX;
	volatile uint64_t t127 = 14854012643206242LLU;

    t127 = ((x641-(x642+x643))/x644);

    if (t127 != 32771LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x649 = -1;
	volatile int8_t x650 = -1;
	uint8_t x652 = UINT8_MAX;
	int32_t t128 = -2946;

    t128 = ((x649-(x650+x651))/x652);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x653 = -2;
	int32_t x654 = 2;
	int16_t x655 = -1;
	uint32_t x656 = UINT32_MAX;
	uint32_t t129 = 752U;

    t129 = ((x653-(x654+x655))/x656);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x658 = INT64_MIN;
	uint8_t x659 = 4U;
	int8_t x660 = -1;

    t130 = ((x657-(x658+x659))/x660);

    if (t130 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x661 = INT8_MIN;
	int8_t x662 = INT8_MIN;
	int32_t x663 = -124575588;
	uint16_t x664 = 1979U;
	volatile int32_t t131 = 54465;

    t131 = ((x661-(x662+x663))/x664);

    if (t131 != 62948) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x665 = -6868709625974738LL;
	volatile int16_t x666 = INT16_MIN;
	uint8_t x667 = UINT8_MAX;
	int64_t x668 = INT64_MAX;
	static volatile int64_t t132 = -1LL;

    t132 = ((x665-(x666+x667))/x668);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x669 = -106750608025201LL;
	uint32_t x671 = 333512697U;
	uint16_t x672 = 15U;
	volatile int64_t t133 = 100652538061557LL;

    t133 = ((x669-(x670+x671))/x672);

    if (t133 != -7116729438044LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = INT8_MIN;
	int16_t x675 = 5;
	static int16_t x676 = INT16_MIN;
	int32_t t134 = -55762746;

    t134 = ((x673-(x674+x675))/x676);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x677 = -1LL;
	int8_t x679 = 1;
	volatile int64_t x680 = INT64_MIN;
	int64_t t135 = -436LL;

    t135 = ((x677-(x678+x679))/x680);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x682 = INT16_MIN;
	int8_t x683 = -1;
	int64_t x684 = 5374798863LL;
	volatile int64_t t136 = -4162556499LL;

    t136 = ((x681-(x682+x683))/x684);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x685 = 3U;
	uint32_t x686 = UINT32_MAX;
	uint64_t x687 = 57403LLU;
	int8_t x688 = INT8_MIN;

    t137 = ((x685-(x686+x687))/x688);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x689 = INT16_MAX;
	static uint32_t x690 = UINT32_MAX;
	int32_t x691 = INT32_MIN;
	int8_t x692 = INT8_MIN;
	uint32_t t138 = 11604U;

    t138 = ((x689-(x690+x691))/x692);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x693 = INT32_MIN;
	int32_t x694 = -140307;
	static uint64_t x695 = UINT64_MAX;
	volatile int16_t x696 = -1;
	volatile uint64_t t139 = 167279900731435LLU;

    t139 = ((x693-(x694+x695))/x696);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x697 = 24;
	int16_t x698 = INT16_MIN;
	static volatile uint8_t x699 = 111U;
	uint64_t x700 = UINT64_MAX;

    t140 = ((x697-(x698+x699))/x700);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x702 = 1936U;
	volatile uint64_t x704 = UINT64_MAX;
	uint64_t t141 = 2053866349004667LLU;

    t141 = ((x701-(x702+x703))/x704);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x705 = 2U;
	uint16_t x706 = UINT16_MAX;
	static int16_t x707 = 2806;
	int32_t x708 = -1;
	static volatile int32_t t142 = -7874;

    t142 = ((x705-(x706+x707))/x708);

    if (t142 != 68339) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x709 = 15639490;
	int16_t x710 = 3;
	uint16_t x711 = UINT16_MAX;
	static volatile int8_t x712 = -1;
	volatile int32_t t143 = -38;

    t143 = ((x709-(x710+x711))/x712);

    if (t143 != -15573952) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x713 = UINT64_MAX;
	int8_t x714 = 0;
	int16_t x715 = 8345;
	int32_t x716 = -1;
	volatile uint64_t t144 = 3LLU;

    t144 = ((x713-(x714+x715))/x716);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x717 = 120918;
	int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MAX;
	static int16_t x720 = -44;
	int64_t t145 = -62134512138797731LL;

    t145 = ((x717-(x718+x719))/x720);

    if (t145 != 209622091697890255LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x722 = 5284LLU;
	uint16_t x724 = 24002U;
	volatile uint64_t t146 = 9784928924748773LLU;

    t146 = ((x721-(x722+x723))/x724);

    if (t146 != 7449626LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x725 = 580902U;
	uint64_t x727 = 136630391765009023LLU;
	uint64_t t147 = 3671894851315LLU;

    t147 = ((x725-(x726+x727))/x728);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x733 = 1594U;
	static uint16_t x734 = UINT16_MAX;
	int32_t x735 = -61780;
	int64_t x736 = -94974887LL;

    t148 = ((x733-(x734+x735))/x736);

    if (t148 != -45LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x737 = UINT16_MAX;
	uint16_t x738 = UINT16_MAX;
	int16_t x739 = INT16_MIN;
	uint16_t x740 = 8538U;
	volatile int32_t t149 = -96349;

    t149 = ((x737-(x738+x739))/x740);

    if (t149 != 3) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x741 = -12757907;
	int8_t x742 = INT8_MAX;
	static uint16_t x743 = UINT16_MAX;
	static uint16_t x744 = UINT16_MAX;
	static int32_t t150 = -3;

    t150 = ((x741-(x742+x743))/x744);

    if (t150 != -195) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x745 = UINT32_MAX;
	int64_t x747 = 3834405699934294429LL;
	volatile uint16_t x748 = 177U;

    t151 = ((x745-(x746+x747))/x748);

    if (t151 != 30446137520991235LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x749 = INT16_MAX;
	int64_t x750 = -2LL;
	int16_t x751 = -13;
	volatile uint8_t x752 = 11U;
	volatile int64_t t152 = 1245796211744623LL;

    t152 = ((x749-(x750+x751))/x752);

    if (t152 != 2980LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x753 = 30325131751559729LLU;
	volatile uint8_t x755 = UINT8_MAX;
	int8_t x756 = -1;
	uint64_t t153 = 5464990355304LLU;

    t153 = ((x753-(x754+x755))/x756);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x761 = -1;
	int32_t x763 = 138;
	uint64_t t154 = 1929153LLU;

    t154 = ((x761-(x762+x763))/x764);

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x769 = 1;
	int16_t x770 = INT16_MIN;

    t155 = ((x769-(x770+x771))/x772);

    if (t155 != 14) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x773 = UINT16_MAX;
	uint16_t x775 = 14U;
	int64_t x776 = INT64_MAX;
	static volatile int64_t t156 = 0LL;

    t156 = ((x773-(x774+x775))/x776);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x781 = 1;
	uint64_t x782 = 10158LLU;
	volatile uint32_t x784 = 2259U;
	volatile uint64_t t157 = 210507432308904869LLU;

    t157 = ((x781-(x782+x783))/x784);

    if (t157 != 8165889364191917LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x785 = 156020459813202LLU;
	int8_t x786 = -1;
	int64_t x787 = -1LL;
	volatile uint64_t x788 = 4991733LLU;
	volatile uint64_t t158 = 190225498595698LLU;

    t158 = ((x785-(x786+x787))/x788);

    if (t158 != 31255770LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x790 = 1;
	int64_t x791 = 21289967LL;
	int16_t x792 = -1;
	int64_t t159 = 30128959802079648LL;

    t159 = ((x789-(x790+x791))/x792);

    if (t159 != 21224433LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x793 = -1;
	int64_t x794 = INT64_MAX;
	int64_t x795 = -1LL;
	static uint32_t x796 = UINT32_MAX;
	int64_t t160 = -49LL;

    t160 = ((x793-(x794+x795))/x796);

    if (t160 != -2147483648LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x797 = INT8_MIN;
	uint32_t x798 = UINT32_MAX;
	int8_t x799 = INT8_MAX;
	static volatile int16_t x800 = INT16_MIN;
	uint32_t t161 = 2282U;

    t161 = ((x797-(x798+x799))/x800);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x801 = 2612318LL;
	static int16_t x802 = -1;
	uint8_t x803 = UINT8_MAX;
	volatile int64_t t162 = -3LL;

    t162 = ((x801-(x802+x803))/x804);

    if (t162 != 39LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x805 = UINT64_MAX;
	int8_t x806 = INT8_MAX;
	uint64_t x807 = 17246055797435946LLU;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t163 = 4LLU;

    t163 = ((x805-(x806+x807))/x808);

    if (t163 != 4290951886LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x809 = INT32_MIN;
	static int64_t x810 = -1LL;
	int64_t x811 = 4336831852654LL;
	int16_t x812 = INT16_MIN;
	static int64_t t164 = 11115792LL;

    t164 = ((x809-(x810+x811))/x812);

    if (t164 != 132415140LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x821 = INT8_MAX;
	static uint32_t x822 = UINT32_MAX;
	static int32_t x823 = INT32_MAX;
	int16_t x824 = INT16_MIN;
	volatile uint32_t t165 = 428940U;

    t165 = ((x821-(x822+x823))/x824);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x825 = INT32_MAX;
	uint8_t x826 = UINT8_MAX;
	uint8_t x827 = 36U;
	volatile int32_t x828 = -1;

    t166 = ((x825-(x826+x827))/x828);

    if (t166 != -2147483356) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x830 = 228276983;
	int8_t x831 = 37;
	volatile int16_t x832 = INT16_MAX;
	static volatile int64_t t167 = -31109178794LL;

    t167 = ((x829-(x830+x831))/x832);

    if (t167 != -6960LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x833 = -1;
	int16_t x834 = -61;
	volatile int32_t x835 = INT32_MAX;
	int8_t x836 = -2;
	int32_t t168 = -259904;

    t168 = ((x833-(x834+x835))/x836);

    if (t168 != 1073741793) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x837 = -19591LL;
	int32_t x838 = -294;
	volatile uint64_t x839 = 418LLU;
	static int32_t x840 = INT32_MIN;
	uint64_t t169 = 1079553244558058016LLU;

    t169 = ((x837-(x838+x839))/x840);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x845 = INT32_MAX;
	uint8_t x846 = 53U;
	volatile uint16_t x847 = 26515U;

    t170 = ((x845-(x846+x847))/x848);

    if (t170 != 3063419) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x853 = INT64_MAX;
	int64_t x854 = 2356138452279254651LL;
	static int64_t t171 = -4035500000321765924LL;

    t171 = ((x853-(x854+x855))/x856);

    if (t171 != 686723358672300480LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x857 = UINT32_MAX;
	static uint64_t x858 = 3211910387275749931LLU;
	uint16_t x859 = 905U;
	int16_t x860 = 108;

    t172 = ((x857-(x858+x859))/x860);

    if (t172 != 141063274914155259LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x861 = -1LL;
	int32_t x863 = -243649529;
	volatile int64_t t173 = -1292655571989714712LL;

    t173 = ((x861-(x862+x863))/x864);

    if (t173 != -20LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x873 = -570;
	volatile int8_t x874 = -1;
	int8_t x875 = -23;
	volatile uint16_t x876 = 200U;
	volatile int32_t t174 = 503527691;

    t174 = ((x873-(x874+x875))/x876);

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x877 = 15429U;
	int64_t x878 = 0LL;
	static uint32_t x879 = 98833U;
	static uint64_t x880 = UINT64_MAX;
	uint64_t t175 = 35771898LLU;

    t175 = ((x877-(x878+x879))/x880);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x882 = -1LL;
	int16_t x883 = 1961;
	volatile int64_t x884 = INT64_MIN;
	int64_t t176 = -4322352732200LL;

    t176 = ((x881-(x882+x883))/x884);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x885 = -2LL;
	volatile int16_t x886 = 100;
	volatile uint32_t x887 = 307751U;
	int32_t x888 = INT32_MIN;
	int64_t t177 = -77460773LL;

    t177 = ((x885-(x886+x887))/x888);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x897 = INT8_MAX;
	int8_t x899 = INT8_MIN;
	static int8_t x900 = INT8_MIN;
	static int32_t t178 = 121;

    t178 = ((x897-(x898+x899))/x900);

    if (t178 != -257) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x901 = 69922U;
	uint16_t x902 = 30U;
	static volatile int8_t x903 = INT8_MIN;
	volatile uint64_t t179 = 6110416578LLU;

    t179 = ((x901-(x902+x903))/x904);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x905 = -1;
	volatile int64_t x906 = 259405431328420739LL;
	int32_t x907 = INT32_MIN;
	volatile int64_t t180 = 42025759967LL;

    t180 = ((x905-(x906+x907))/x908);

    if (t180 != 120795066LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x911 = -109830;
	static volatile int16_t x912 = INT16_MIN;
	uint32_t t181 = 6U;

    t181 = ((x909-(x910+x911))/x912);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x913 = UINT16_MAX;
	int16_t x915 = -4668;
	uint64_t x916 = 112054392767LLU;
	static volatile uint64_t t182 = 21542LLU;

    t182 = ((x913-(x914+x915))/x916);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x918 = -868540050642LL;
	static volatile int16_t x919 = 42;
	int32_t x920 = INT32_MAX;
	int64_t t183 = 6923605677444888LL;

    t183 = ((x917-(x918+x919))/x920);

    if (t183 != 404LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x921 = INT64_MIN;
	uint16_t x922 = 4262U;
	int16_t x923 = INT16_MIN;
	int8_t x924 = -15;
	volatile int64_t t184 = 4189882764712LL;

    t184 = ((x921-(x922+x923))/x924);

    if (t184 != 614891469123649820LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x929 = 89U;
	int16_t x930 = 5;
	int32_t x931 = -16894680;
	int32_t x932 = INT32_MAX;
	int32_t t185 = 1;

    t185 = ((x929-(x930+x931))/x932);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x933 = 233903436402680LLU;
	int32_t x934 = INT32_MAX;
	int16_t x935 = -52;
	uint64_t x936 = UINT64_MAX;
	static volatile uint64_t t186 = 6925227LLU;

    t186 = ((x933-(x934+x935))/x936);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x939 = INT16_MAX;
	static uint64_t t187 = 46382120439092514LLU;

    t187 = ((x937-(x938+x939))/x940);

    if (t187 != 4294009011LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x941 = -1;
	uint32_t x942 = UINT32_MAX;
	volatile int16_t x943 = INT16_MAX;
	volatile int32_t x944 = 131040;

    t188 = ((x941-(x942+x943))/x944);

    if (t188 != 32775U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x947 = INT16_MAX;
	uint64_t t189 = 491LLU;

    t189 = ((x945-(x946+x947))/x948);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x949 = -1;
	uint64_t x950 = 175246LLU;
	int64_t x951 = INT64_MIN;
	volatile uint64_t t190 = 449547311LLU;

    t190 = ((x949-(x950+x951))/x952);

    if (t190 != 140739635871741LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x958 = 0U;
	volatile uint32_t x959 = 3173148U;

    t191 = ((x957-(x958+x959))/x960);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x961 = 0U;
	int64_t x962 = 963LL;
	int16_t x963 = INT16_MIN;
	volatile int16_t x964 = 780;
	int64_t t192 = 95157323034LL;

    t192 = ((x961-(x962+x963))/x964);

    if (t192 != 40LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x966 = INT32_MAX;
	uint64_t x967 = 17921559406LLU;
	volatile int64_t x968 = INT64_MAX;
	uint64_t t193 = 1671202529644230LLU;

    t193 = ((x965-(x966+x967))/x968);

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x969 = 762268027984107499LLU;
	volatile int16_t x970 = -7396;
	volatile uint64_t t194 = 82LLU;

    t194 = ((x969-(x970+x971))/x972);

    if (t194 != 2684042352056742LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x973 = INT16_MAX;
	uint32_t x974 = UINT32_MAX;
	int64_t x975 = 354949467119697338LL;
	static int64_t x976 = INT64_MIN;
	int64_t t195 = 2344LL;

    t195 = ((x973-(x974+x975))/x976);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x977 = 0U;
	static int64_t x978 = 13LL;
	int16_t x979 = -1;
	static int64_t t196 = -1LL;

    t196 = ((x977-(x978+x979))/x980);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x981 = 8506379741346672LLU;
	volatile uint64_t x982 = UINT64_MAX;
	int64_t x983 = 3402436550825620LL;
	int64_t x984 = INT64_MIN;
	volatile uint64_t t197 = 191079439585504303LLU;

    t197 = ((x981-(x982+x983))/x984);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x985 = UINT32_MAX;
	int16_t x986 = INT16_MIN;
	uint64_t x987 = 22474421LLU;
	static uint16_t x988 = UINT16_MAX;

    t198 = ((x985-(x986+x987))/x988);

    if (t198 != 65194LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x997 = INT64_MIN;
	uint64_t x998 = UINT64_MAX;
	volatile int8_t x1000 = -1;
	static volatile uint64_t t199 = 96951821361273675LLU;

    t199 = ((x997-(x998+x999))/x1000);

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

