
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

int32_t x1 = 408;
volatile int8_t x6 = INT8_MAX;
uint32_t x7 = UINT32_MAX;
volatile int64_t t1 = 125LL;
int64_t x9 = INT64_MIN;
uint32_t x13 = 922976585U;
static int32_t x18 = 7843;
int32_t x20 = -1;
int16_t x24 = 1;
int8_t x25 = 1;
uint32_t x34 = 59U;
static uint32_t x36 = 793U;
static int64_t x42 = INT64_MAX;
volatile int8_t x43 = 1;
int64_t t10 = -108936510LL;
volatile int32_t x46 = -523652350;
int32_t x47 = INT32_MIN;
int16_t x49 = INT16_MIN;
static int8_t x53 = -1;
int32_t t13 = -105015744;
uint64_t x57 = UINT64_MAX;
uint16_t x58 = 7645U;
int16_t x59 = -1;
uint8_t x60 = 19U;
volatile int32_t t14 = 5;
uint16_t x63 = 232U;
int8_t x64 = INT8_MIN;
int32_t t15 = -16104646;
uint32_t x70 = 9U;
static int32_t x73 = -1;
uint32_t t18 = 268115661U;
uint16_t x96 = UINT16_MAX;
volatile int32_t t23 = -1869540;
int32_t t24 = 136;
int64_t x106 = 794LL;
int32_t x107 = INT32_MIN;
int16_t x110 = INT16_MIN;
static uint16_t x112 = UINT16_MAX;
int16_t x120 = INT16_MIN;
volatile int32_t t29 = -27076;
volatile uint8_t x121 = 7U;
int32_t x123 = -1;
int16_t x125 = 14548;
uint8_t x129 = UINT8_MAX;
int64_t x135 = -2569943251720LL;
uint16_t x138 = 29U;
volatile uint64_t t34 = 30761541372183416LLU;
uint32_t x152 = 36U;
int16_t x157 = 0;
int16_t x158 = INT16_MIN;
int16_t x161 = INT16_MIN;
volatile uint64_t x163 = 43432639LLU;
int64_t x168 = 915121LL;
int16_t x170 = 3949;
int64_t x171 = INT64_MIN;
int32_t t41 = -1581912;
int16_t x180 = INT16_MIN;
static int32_t x191 = 46230198;
int16_t x203 = INT16_MAX;
int16_t x204 = INT16_MIN;
int16_t x208 = 43;
int16_t x209 = 5955;
volatile int16_t x210 = INT16_MAX;
int32_t x215 = -106;
uint64_t x222 = 5220393891670LLU;
uint64_t x232 = 576082180692LLU;
uint32_t x250 = UINT32_MAX;
uint32_t x253 = UINT32_MAX;
int64_t x259 = 3369701264LL;
static int16_t x261 = 19;
uint32_t x262 = 707906362U;
volatile int32_t t60 = -84914;
int8_t x274 = -1;
uint64_t x276 = UINT64_MAX;
volatile int32_t t62 = 18;
static int32_t x283 = -913737;
volatile int64_t t63 = -4364037592161414LL;
volatile int16_t x285 = 419;
volatile int32_t t65 = 0;
static volatile int16_t x302 = INT16_MIN;
int64_t t68 = -19055LL;
volatile int16_t x311 = INT16_MIN;
static uint32_t x313 = 1319U;
uint8_t x314 = UINT8_MAX;
int8_t x316 = INT8_MIN;
volatile int32_t x319 = INT32_MIN;
static int8_t x321 = -1;
int32_t x324 = 15175925;
uint8_t x325 = UINT8_MAX;
int8_t x328 = INT8_MIN;
int8_t x332 = -1;
volatile int32_t t75 = -420230;
uint32_t x336 = UINT32_MAX;
volatile uint32_t x346 = UINT32_MAX;
volatile int32_t x349 = -1;
uint64_t x350 = 25LLU;
int16_t x351 = -1;
uint32_t x352 = 681672375U;
static int16_t x357 = -7752;
int64_t x365 = -174LL;
static volatile uint32_t x368 = 1U;
static uint64_t x369 = 40206773211LLU;
int32_t t85 = -1;
int32_t t86 = -1;
uint64_t x397 = 1143534464513LLU;
int16_t x401 = INT16_MIN;
static uint16_t x404 = UINT16_MAX;
int64_t x417 = -822756151LL;
uint64_t x420 = 2721LLU;
static volatile int64_t x421 = INT64_MAX;
static uint32_t x423 = 7201U;
uint16_t x424 = 7023U;
volatile uint64_t t98 = 525578975029LLU;
uint8_t x433 = 4U;
static uint16_t x446 = UINT16_MAX;
volatile uint8_t x448 = 6U;
static int32_t t102 = 0;
static int8_t x453 = INT8_MIN;
int16_t x454 = 1799;
int16_t x459 = 57;
uint8_t x461 = 42U;
volatile int32_t t105 = -53;
static int8_t x466 = INT8_MAX;
int8_t x483 = -1;
int8_t x485 = -37;
volatile int32_t t110 = 29173;
uint8_t x490 = 0U;
uint64_t x494 = 5218339023226761LLU;
int8_t x496 = 1;
volatile uint8_t x497 = UINT8_MAX;
static int32_t x499 = INT32_MAX;
static uint8_t x502 = 15U;
int32_t x503 = INT32_MIN;
volatile uint64_t t117 = 18LLU;
volatile int32_t x530 = INT32_MIN;
static volatile int32_t x531 = INT32_MIN;
volatile int8_t x540 = -28;
int32_t x543 = INT32_MAX;
volatile uint32_t x544 = 129U;
uint32_t t124 = 1U;
int64_t x554 = INT64_MIN;
static int8_t x556 = 2;
int8_t x557 = 37;
static uint8_t x565 = UINT8_MAX;
static int16_t x566 = 108;
int8_t x573 = INT8_MIN;
int32_t t132 = 9;
volatile uint64_t t133 = 4857203812LLU;
int64_t x582 = INT64_MAX;
volatile int8_t x594 = -1;
uint8_t x597 = 109U;
int32_t x600 = INT32_MAX;
volatile int64_t x603 = INT64_MIN;
int32_t t139 = 1022467931;
volatile uint8_t x605 = UINT8_MAX;
int32_t x607 = -1;
int64_t t140 = 0LL;
uint8_t x614 = UINT8_MAX;
volatile int16_t x625 = -1;
int64_t x631 = -118743264LL;
uint8_t x637 = UINT8_MAX;
int16_t x639 = INT16_MIN;
int8_t x641 = INT8_MIN;
int16_t x655 = -1;
int8_t x656 = 24;
int16_t x660 = 2;
int16_t x662 = -1;
int32_t t153 = 1;
uint32_t x667 = UINT32_MAX;
int16_t x678 = INT16_MIN;
static int16_t x683 = 1;
int16_t x687 = 157;
int8_t x688 = INT8_MIN;
static volatile int64_t x689 = -142172LL;
volatile int32_t t160 = 1497007;
static uint64_t x704 = UINT64_MAX;
int16_t x705 = 18;
uint64_t x707 = UINT64_MAX;
volatile int16_t x712 = INT16_MAX;
int32_t x722 = -1;
int64_t x728 = -1LL;
int16_t x734 = -1;
int16_t x736 = INT16_MIN;
static int64_t x737 = INT64_MAX;
int8_t x742 = INT8_MIN;
volatile uint16_t x744 = 4U;
int32_t x748 = 296112;
static int32_t t170 = -89521806;
uint8_t x749 = 1U;
uint64_t x753 = 14LLU;
volatile uint32_t x757 = UINT32_MAX;
static int8_t x771 = INT8_MIN;
int16_t x775 = INT16_MAX;
int8_t x780 = 2;
uint16_t x783 = 103U;
static int8_t x784 = INT8_MIN;
volatile int8_t x791 = -1;
uint64_t x798 = 4609182365LLU;
int32_t t183 = 486;
uint8_t x801 = UINT8_MAX;
uint32_t x802 = 14U;
uint32_t x807 = 51292U;
volatile int64_t x808 = 957LL;
uint8_t x809 = UINT8_MAX;
uint32_t x813 = 384397U;
int16_t x818 = -1560;
uint64_t x820 = UINT64_MAX;
volatile uint64_t t188 = 116253109640728LLU;
int32_t x822 = INT32_MAX;
volatile int8_t x825 = INT8_MIN;
int8_t x827 = -7;
volatile uint16_t x832 = 10557U;
volatile int32_t t191 = 249;
int8_t x834 = INT8_MAX;
static int16_t x835 = -11;
uint64_t x836 = 59709314771412LLU;
uint64_t t192 = 122394245604LLU;
static uint16_t x843 = 13222U;
int32_t x844 = INT32_MAX;
static int8_t x847 = INT8_MIN;
volatile int64_t t196 = 15611913090190178LL;
int32_t x861 = INT32_MAX;
volatile uint32_t x863 = 13082U;
volatile int32_t t197 = 3;


void f0(void) {
    	int8_t x2 = 8;
	int64_t x3 = -129832LL;
	volatile int8_t x4 = 4;
	static int32_t t0 = 166163;

    t0 = ((x1>(x2|x3))-x4);

    if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	volatile int64_t x8 = 325795370900453278LL;

    t1 = ((x5>(x6|x7))-x8);

    if (t1 != -325795370900453278LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	int64_t x11 = -28794999LL;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 63751;

    t2 = ((x9>(x10|x11))-x12);

    if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = UINT32_MAX;
	volatile uint32_t x15 = 187U;
	uint16_t x16 = 4485U;
	static int32_t t3 = 5775;

    t3 = ((x13>(x14|x15))-x16);

    if (t3 != -4485) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	static uint32_t x19 = 20672451U;
	volatile int32_t t4 = -136298437;

    t4 = ((x17>(x18|x19))-x20);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 3U;
	static int16_t x22 = INT16_MIN;
	int16_t x23 = -191;
	static volatile int32_t t5 = 14;

    t5 = ((x21>(x22|x23))-x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MAX;
	static uint16_t x28 = 2790U;
	volatile int32_t t6 = -8984907;

    t6 = ((x25>(x26|x27))-x28);

    if (t6 != -2789) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	static int16_t x30 = -1;
	static volatile int16_t x31 = INT16_MIN;
	volatile uint64_t x32 = 67LLU;
	static volatile uint64_t t7 = 4LLU;

    t7 = ((x29>(x30|x31))-x32);

    if (t7 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	static uint64_t x35 = 567042787038986857LLU;
	volatile uint32_t t8 = 15443767U;

    t8 = ((x33>(x34|x35))-x36);

    if (t8 != 4294966504U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	volatile uint64_t x39 = 10994173068568LLU;
	volatile int8_t x40 = INT8_MIN;
	int32_t t9 = 28;

    t9 = ((x37>(x38|x39))-x40);

    if (t9 != 129) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int64_t x44 = -94597909004541638LL;

    t10 = ((x41>(x42|x43))-x44);

    if (t10 != 94597909004541638LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 1;

    t11 = ((x45>(x46|x47))-x48);

    if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MIN;
	static int8_t x51 = INT8_MAX;
	volatile uint16_t x52 = 624U;
	int32_t t12 = -6892;

    t12 = ((x49>(x50|x51))-x52);

    if (t12 != -623) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x54 = INT16_MIN;
	uint64_t x55 = 248810337LLU;
	static int16_t x56 = INT16_MIN;

    t13 = ((x53>(x54|x55))-x56);

    if (t13 != 32769) { NG(); } else { ; }
	
}

void f14(void) {
    

    t14 = ((x57>(x58|x59))-x60);

    if (t14 != -19) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 3;
	uint32_t x62 = 44410442U;

    t15 = ((x61>(x62|x63))-x64);

    if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = INT64_MIN;
	volatile int8_t x66 = 6;
	uint8_t x67 = 1U;
	int8_t x68 = 1;
	volatile int32_t t16 = 870675296;

    t16 = ((x65>(x66|x67))-x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = 42LL;
	int64_t t17 = -3827948517132824268LL;

    t17 = ((x69>(x70|x71))-x72);

    if (t17 != -41LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x74 = 135U;
	uint8_t x75 = 65U;
	uint32_t x76 = UINT32_MAX;

    t18 = ((x73>(x74|x75))-x76);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = UINT64_MAX;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = -68230844;
	int32_t x80 = 342637826;
	static volatile int32_t t19 = 331;

    t19 = ((x77>(x78|x79))-x80);

    if (t19 != -342637825) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	volatile int32_t x82 = -1;
	uint64_t x83 = 24LLU;
	volatile uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 21180430U;

    t20 = ((x81>(x82|x83))-x84);

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 22U;
	int32_t x86 = INT32_MIN;
	uint64_t x87 = 72816LLU;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 286412946;

    t21 = ((x85>(x86|x87))-x88);

    if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 59707362477LLU;
	int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = 8U;
	int16_t x92 = -1;
	volatile int32_t t22 = 1;

    t22 = ((x89>(x90|x91))-x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -1;
	volatile int64_t x94 = -1LL;
	int16_t x95 = INT16_MIN;

    t23 = ((x93>(x94|x95))-x96);

    if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int16_t x98 = -1;
	uint64_t x99 = 8238589372LLU;
	uint8_t x100 = UINT8_MAX;

    t24 = ((x97>(x98|x99))-x100);

    if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int64_t x102 = INT64_MIN;
	uint32_t x103 = 88564U;
	int32_t x104 = -1;
	int32_t t25 = 829;

    t25 = ((x101>(x102|x103))-x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x108 = INT64_MAX;
	int64_t t26 = -270560044834110738LL;

    t26 = ((x105>(x106|x107))-x108);

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x109 = 123U;
	int8_t x111 = 1;
	volatile int32_t t27 = 1909;

    t27 = ((x109>(x110|x111))-x112);

    if (t27 != -65534) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 1351U;
	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	int16_t x116 = 1;
	static int32_t t28 = -2;

    t28 = ((x113>(x114|x115))-x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = 55590U;

    t29 = ((x117>(x118|x119))-x120);

    if (t29 != 32769) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x122 = UINT16_MAX;
	static uint64_t x124 = UINT64_MAX;
	volatile uint64_t t30 = 254951141667LLU;

    t30 = ((x121>(x122|x123))-x124);

    if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x126 = UINT32_MAX;
	uint8_t x127 = 38U;
	uint64_t x128 = UINT64_MAX;
	static uint64_t t31 = 5LLU;

    t31 = ((x125>(x126|x127))-x128);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	static volatile int64_t x132 = -1LL;
	int64_t t32 = 95064992970878834LL;

    t32 = ((x129>(x130|x131))-x132);

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = UINT16_MAX;
	int32_t x136 = 5;
	volatile int32_t t33 = 4458477;

    t33 = ((x133>(x134|x135))-x136);

    if (t33 != -4) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 0U;
	uint64_t x139 = 699323LLU;
	uint64_t x140 = 216754860051LLU;

    t34 = ((x137>(x138|x139))-x140);

    if (t34 != 18446743856954691565LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 3876LLU;
	static uint64_t x142 = 903270880247887LLU;
	int16_t x143 = -1;
	int16_t x144 = INT16_MAX;
	static int32_t t35 = -230;

    t35 = ((x141>(x142|x143))-x144);

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int16_t x146 = 30;
	int64_t x147 = 42742LL;
	static int8_t x148 = -1;
	volatile int32_t t36 = -1643341;

    t36 = ((x145>(x146|x147))-x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = UINT32_MAX;
	uint32_t t37 = 86386U;

    t37 = ((x149>(x150|x151))-x152);

    if (t37 != 4294967261U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x159 = -5670740LL;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t38 = 5U;

    t38 = ((x157>(x158|x159))-x160);

    if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x162 = INT32_MAX;
	volatile int8_t x164 = -1;
	volatile int32_t t39 = -2;

    t39 = ((x161>(x162|x163))-x164);

    if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 5U;
	int64_t x166 = -1LL;
	static uint8_t x167 = 0U;
	volatile int64_t t40 = 218LL;

    t40 = ((x165>(x166|x167))-x168);

    if (t40 != -915120LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x169 = UINT32_MAX;
	static uint16_t x172 = 309U;

    t41 = ((x169>(x170|x171))-x172);

    if (t41 != -308) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = UINT16_MAX;
	volatile int16_t x174 = INT16_MAX;
	static int16_t x175 = INT16_MIN;
	int16_t x176 = -1;
	int32_t t42 = -10733;

    t42 = ((x173>(x174|x175))-x176);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int16_t x178 = 1;
	int64_t x179 = 99692LL;
	volatile int32_t t43 = 7;

    t43 = ((x177>(x178|x179))-x180);

    if (t43 != 32769) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile uint64_t x190 = 394810704248LLU;
	int8_t x192 = INT8_MAX;
	volatile int32_t t44 = 2314;

    t44 = ((x189>(x190|x191))-x192);

    if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x201 = INT32_MAX;
	int32_t x202 = INT32_MIN;
	int32_t t45 = -8183642;

    t45 = ((x201>(x202|x203))-x204);

    if (t45 != 32769) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = -4;
	static int8_t x206 = INT8_MAX;
	uint16_t x207 = 400U;
	volatile int32_t t46 = -577901142;

    t46 = ((x205>(x206|x207))-x208);

    if (t46 != -43) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x211 = 26130U;
	uint8_t x212 = 3U;
	int32_t t47 = -24040331;

    t47 = ((x209>(x210|x211))-x212);

    if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x213 = UINT32_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x216 = -1;
	int32_t t48 = -4221;

    t48 = ((x213>(x214|x215))-x216);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = UINT16_MAX;
	uint16_t x223 = UINT16_MAX;
	int32_t x224 = -1;
	int32_t t49 = -12;

    t49 = ((x221>(x222|x223))-x224);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = 78505754439404LLU;
	static uint16_t x226 = 3987U;
	uint32_t x227 = 1026522U;
	uint8_t x228 = 11U;
	int32_t t50 = 1816794;

    t50 = ((x225>(x226|x227))-x228);

    if (t50 != -10) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = 19756603;
	uint8_t x230 = 94U;
	int32_t x231 = INT32_MAX;
	volatile uint64_t t51 = 2903521930712LLU;

    t51 = ((x229>(x230|x231))-x232);

    if (t51 != 18446743497627370924LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = INT8_MIN;
	uint16_t x238 = 62U;
	uint8_t x239 = 3U;
	volatile int16_t x240 = INT16_MAX;
	volatile int32_t t52 = 29856120;

    t52 = ((x237>(x238|x239))-x240);

    if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MAX;
	uint8_t x243 = 0U;
	uint64_t x244 = UINT64_MAX;
	uint64_t t53 = 1597347LLU;

    t53 = ((x241>(x242|x243))-x244);

    if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x245 = -120;
	int8_t x246 = -1;
	int16_t x247 = INT16_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t54 = -43;

    t54 = ((x245>(x246|x247))-x248);

    if (t54 != -65535) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x249 = 35553;
	int8_t x251 = -1;
	int8_t x252 = INT8_MAX;
	int32_t t55 = -447;

    t55 = ((x249>(x250|x251))-x252);

    if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x254 = UINT32_MAX;
	int32_t x255 = -5992745;
	uint16_t x256 = 3U;
	volatile int32_t t56 = 12588;

    t56 = ((x253>(x254|x255))-x256);

    if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x258 = -247786;
	int8_t x260 = INT8_MIN;
	int32_t t57 = 255600477;

    t57 = ((x257>(x258|x259))-x260);

    if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x263 = INT8_MAX;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t58 = -215511298;

    t58 = ((x261>(x262|x263))-x264);

    if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = INT16_MAX;
	int16_t x266 = 329;
	static int32_t x267 = -8380289;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t59 = -29;

    t59 = ((x265>(x266|x267))-x268);

    if (t59 != -65534) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MAX;
	volatile int16_t x272 = -1571;

    t60 = ((x269>(x270|x271))-x272);

    if (t60 != 1572) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = 41;
	static volatile int8_t x275 = INT8_MIN;
	static uint64_t t61 = 69LLU;

    t61 = ((x273>(x274|x275))-x276);

    if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = -1;
	int32_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	static int32_t x280 = -893;

    t62 = ((x277>(x278|x279))-x280);

    if (t62 != 893) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x281 = 2LL;
	int32_t x282 = -1;
	int64_t x284 = -1LL;

    t63 = ((x281>(x282|x283))-x284);

    if (t63 != 2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x286 = INT8_MAX;
	uint32_t x287 = 574U;
	static uint64_t x288 = 1393894602804881LLU;
	uint64_t t64 = 12633LLU;

    t64 = ((x285>(x286|x287))-x288);

    if (t64 != 18445350179106746735LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x289 = -4520;
	uint32_t x290 = 6U;
	int8_t x291 = INT8_MAX;
	uint8_t x292 = 13U;

    t65 = ((x289>(x290|x291))-x292);

    if (t65 != -12) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x293 = 16U;
	volatile int32_t x294 = INT32_MIN;
	static int64_t x295 = INT64_MAX;
	volatile int16_t x296 = -1;
	volatile int32_t t66 = 5980;

    t66 = ((x293>(x294|x295))-x296);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 722U;
	static int32_t x298 = INT32_MIN;
	static int32_t x299 = INT32_MIN;
	volatile int16_t x300 = 13;
	volatile int32_t t67 = -29089101;

    t67 = ((x297>(x298|x299))-x300);

    if (t67 != -12) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = INT32_MAX;
	int32_t x303 = INT32_MIN;
	int64_t x304 = -1LL;

    t68 = ((x301>(x302|x303))-x304);

    if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	int32_t x306 = -1;
	int16_t x307 = INT16_MAX;
	static int32_t x308 = -1;
	int32_t t69 = 32;

    t69 = ((x305>(x306|x307))-x308);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile uint8_t x310 = 0U;
	uint8_t x312 = 3U;
	volatile int32_t t70 = 11;

    t70 = ((x309>(x310|x311))-x312);

    if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x315 = INT8_MIN;
	int32_t t71 = -1587;

    t71 = ((x313>(x314|x315))-x316);

    if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = 39004413;
	static uint16_t x318 = UINT16_MAX;
	volatile int16_t x320 = -1;
	static volatile int32_t t72 = 1671507;

    t72 = ((x317>(x318|x319))-x320);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x322 = 772LL;
	uint32_t x323 = UINT32_MAX;
	int32_t t73 = 1342740;

    t73 = ((x321>(x322|x323))-x324);

    if (t73 != -15175925) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x326 = UINT64_MAX;
	static uint8_t x327 = UINT8_MAX;
	static int32_t t74 = 3250;

    t74 = ((x325>(x326|x327))-x328);

    if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MIN;
	static uint64_t x330 = UINT64_MAX;
	uint32_t x331 = 19373710U;

    t75 = ((x329>(x330|x331))-x332);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x333 = 10416LLU;
	int16_t x334 = -26;
	volatile uint64_t x335 = UINT64_MAX;
	volatile uint32_t t76 = 10346440U;

    t76 = ((x333>(x334|x335))-x336);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x337 = 140103924;
	int8_t x338 = INT8_MAX;
	static volatile uint16_t x339 = UINT16_MAX;
	int16_t x340 = -1;
	static volatile int32_t t77 = -743;

    t77 = ((x337>(x338|x339))-x340);

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	static volatile int64_t x343 = -1LL;
	static int64_t x344 = -25LL;
	static int64_t t78 = -8640LL;

    t78 = ((x341>(x342|x343))-x344);

    if (t78 != 25LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = -1;
	uint8_t x347 = 102U;
	uint32_t x348 = 470U;
	uint32_t t79 = 2034064841U;

    t79 = ((x345>(x346|x347))-x348);

    if (t79 != 4294966826U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t t80 = 413997U;

    t80 = ((x349>(x350|x351))-x352);

    if (t80 != 3613294921U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x358 = 6U;
	uint64_t x359 = UINT64_MAX;
	uint32_t x360 = 122124392U;
	uint32_t t81 = 1U;

    t81 = ((x357>(x358|x359))-x360);

    if (t81 != 4172842904U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x361 = -1;
	int32_t x362 = 0;
	static int16_t x363 = INT16_MAX;
	uint64_t x364 = 3413568151889035918LLU;
	volatile uint64_t t82 = 123644067611659LLU;

    t82 = ((x361>(x362|x363))-x364);

    if (t82 != 15033175921820515698LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x366 = INT32_MIN;
	uint16_t x367 = UINT16_MAX;
	static volatile uint32_t t83 = 693648U;

    t83 = ((x365>(x366|x367))-x368);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x370 = UINT32_MAX;
	static uint32_t x371 = 3710U;
	static int32_t x372 = INT32_MAX;
	int32_t t84 = -970;

    t84 = ((x369>(x370|x371))-x372);

    if (t84 != -2147483646) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x373 = 1U;
	uint16_t x374 = 3181U;
	int16_t x375 = INT16_MAX;
	volatile int16_t x376 = INT16_MIN;

    t85 = ((x373>(x374|x375))-x376);

    if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1;
	int16_t x379 = 0;
	uint16_t x380 = 5422U;

    t86 = ((x377>(x378|x379))-x380);

    if (t86 != -5422) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = -22;
	int16_t x386 = -9960;
	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 1U;
	volatile int32_t t87 = 1217200;

    t87 = ((x385>(x386|x387))-x388);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x389 = -3619267629LL;
	int8_t x390 = 0;
	int32_t x391 = INT32_MAX;
	int64_t x392 = INT64_MAX;
	static volatile int64_t t88 = 1243453796LL;

    t88 = ((x389>(x390|x391))-x392);

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x393 = 81606;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	uint32_t x396 = 49U;
	volatile uint32_t t89 = 1881U;

    t89 = ((x393>(x394|x395))-x396);

    if (t89 != 4294967248U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x398 = 20U;
	volatile int8_t x399 = -46;
	int64_t x400 = -1LL;
	int64_t t90 = 8100568802576LL;

    t90 = ((x397>(x398|x399))-x400);

    if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x402 = INT8_MIN;
	static uint8_t x403 = 0U;
	volatile int32_t t91 = -23725;

    t91 = ((x401>(x402|x403))-x404);

    if (t91 != -65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x405 = INT16_MIN;
	int16_t x406 = -506;
	int64_t x407 = INT64_MIN;
	volatile int32_t x408 = 88077599;
	int32_t t92 = -365210850;

    t92 = ((x405>(x406|x407))-x408);

    if (t92 != -88077599) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x409 = INT32_MIN;
	int64_t x410 = 1697522978415LL;
	int32_t x411 = 3606994;
	uint16_t x412 = UINT16_MAX;
	int32_t t93 = 39998;

    t93 = ((x409>(x410|x411))-x412);

    if (t93 != -65535) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	static int64_t x415 = -1LL;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t94 = 1LLU;

    t94 = ((x413>(x414|x415))-x416);

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x418 = 9U;
	int64_t x419 = -1LL;
	volatile uint64_t t95 = 256210627103162LLU;

    t95 = ((x417>(x418|x419))-x420);

    if (t95 != 18446744073709548895LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x422 = INT8_MAX;
	int32_t t96 = 0;

    t96 = ((x421>(x422|x423))-x424);

    if (t96 != -7022) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x425 = 35;
	int16_t x426 = INT16_MIN;
	volatile uint16_t x427 = 9083U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t97 = -46522;

    t97 = ((x425>(x426|x427))-x428);

    if (t97 != -254) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x429 = INT16_MIN;
	int32_t x430 = 7494798;
	volatile int64_t x431 = -167560LL;
	uint64_t x432 = UINT64_MAX;

    t98 = ((x429>(x430|x431))-x432);

    if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x434 = -472544009;
	int8_t x435 = 3;
	static volatile int32_t x436 = -1;
	int32_t t99 = -3754217;

    t99 = ((x433>(x434|x435))-x436);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint32_t x438 = 194U;
	volatile uint8_t x439 = UINT8_MAX;
	uint64_t x440 = 14275LLU;
	static uint64_t t100 = 14127089854014LLU;

    t100 = ((x437>(x438|x439))-x440);

    if (t100 != 18446744073709537342LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x441 = 44912U;
	int32_t x442 = -76718040;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t101 = 8735;

    t101 = ((x441>(x442|x443))-x444);

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x445 = -3101LL;
	volatile int32_t x447 = -1;

    t102 = ((x445>(x446|x447))-x448);

    if (t102 != -6) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x455 = 13U;
	static int8_t x456 = INT8_MIN;
	int32_t t103 = 2219681;

    t103 = ((x453>(x454|x455))-x456);

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x457 = INT32_MAX;
	static uint64_t x458 = 9798469111196LLU;
	int16_t x460 = INT16_MIN;
	int32_t t104 = 12887;

    t104 = ((x457>(x458|x459))-x460);

    if (t104 != 32768) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x462 = -1;
	uint64_t x463 = UINT64_MAX;
	int8_t x464 = INT8_MIN;

    t105 = ((x461>(x462|x463))-x464);

    if (t105 != 128) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x465 = 1960785U;
	int64_t x467 = INT64_MIN;
	static volatile int16_t x468 = 8;
	int32_t t106 = -1;

    t106 = ((x465>(x466|x467))-x468);

    if (t106 != -7) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x473 = -1;
	static int16_t x474 = INT16_MAX;
	int32_t x475 = -8442;
	volatile uint8_t x476 = 56U;
	volatile int32_t t107 = -729495099;

    t107 = ((x473>(x474|x475))-x476);

    if (t107 != -56) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x477 = -1;
	int8_t x478 = INT8_MAX;
	int32_t x479 = 1534423;
	int8_t x480 = INT8_MIN;
	int32_t t108 = 8868310;

    t108 = ((x477>(x478|x479))-x480);

    if (t108 != 128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x481 = UINT8_MAX;
	uint32_t x482 = 37U;
	uint64_t x484 = UINT64_MAX;
	uint64_t t109 = 981388911016099785LLU;

    t109 = ((x481>(x482|x483))-x484);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x486 = INT32_MIN;
	static uint8_t x487 = 2U;
	int16_t x488 = INT16_MIN;

    t110 = ((x485>(x486|x487))-x488);

    if (t110 != 32769) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x489 = INT8_MIN;
	int8_t x491 = 1;
	int32_t x492 = -1;
	static int32_t t111 = 3164126;

    t111 = ((x489>(x490|x491))-x492);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x493 = 917364856U;
	int8_t x495 = INT8_MIN;
	volatile int32_t t112 = 26;

    t112 = ((x493>(x494|x495))-x496);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x498 = 10;
	static uint16_t x500 = 183U;
	volatile int32_t t113 = 1004719;

    t113 = ((x497>(x498|x499))-x500);

    if (t113 != -183) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x501 = 32611381U;
	static uint16_t x504 = UINT16_MAX;
	static int32_t t114 = 3472337;

    t114 = ((x501>(x502|x503))-x504);

    if (t114 != -65535) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x505 = 755U;
	int16_t x506 = -7;
	int64_t x507 = -1LL;
	volatile int64_t x508 = -3LL;
	volatile int64_t t115 = -8099263557038436LL;

    t115 = ((x505>(x506|x507))-x508);

    if (t115 != 4LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = -4890753;
	int8_t x511 = INT8_MAX;
	static int16_t x512 = INT16_MIN;
	volatile int32_t t116 = -7;

    t116 = ((x509>(x510|x511))-x512);

    if (t116 != 32769) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x513 = -6;
	int16_t x514 = INT16_MIN;
	int32_t x515 = -618;
	uint64_t x516 = UINT64_MAX;

    t117 = ((x513>(x514|x515))-x516);

    if (t117 != 2LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x517 = INT16_MIN;
	volatile int32_t x518 = -1;
	int64_t x519 = INT64_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t118 = 7251275;

    t118 = ((x517>(x518|x519))-x520);

    if (t118 != 32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x521 = -1;
	uint8_t x522 = 5U;
	uint64_t x523 = 40444167LLU;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t119 = 28LLU;

    t119 = ((x521>(x522|x523))-x524);

    if (t119 != 2LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = -1;
	uint64_t x527 = UINT64_MAX;
	uint16_t x528 = 578U;
	volatile int32_t t120 = 2;

    t120 = ((x525>(x526|x527))-x528);

    if (t120 != -578) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint32_t x529 = 16561781U;
	uint8_t x532 = 6U;
	int32_t t121 = -11187;

    t121 = ((x529>(x530|x531))-x532);

    if (t121 != -6) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x533 = INT16_MIN;
	uint32_t x534 = 421441U;
	int8_t x535 = INT8_MIN;
	int32_t x536 = -1;
	volatile int32_t t122 = -211;

    t122 = ((x533>(x534|x535))-x536);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = 16001U;
	int8_t x538 = -3;
	int32_t x539 = INT32_MAX;
	volatile int32_t t123 = 411;

    t123 = ((x537>(x538|x539))-x540);

    if (t123 != 29) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x541 = 11;
	int32_t x542 = -1;

    t124 = ((x541>(x542|x543))-x544);

    if (t124 != 4294967168U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x545 = 14521;
	volatile int8_t x546 = -12;
	volatile int8_t x547 = -1;
	int32_t x548 = INT32_MAX;
	static volatile int32_t t125 = -6824;

    t125 = ((x545>(x546|x547))-x548);

    if (t125 != -2147483646) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x549 = -3;
	int32_t x550 = INT32_MIN;
	uint16_t x551 = 222U;
	int32_t x552 = 206343212;
	volatile int32_t t126 = 66;

    t126 = ((x549>(x550|x551))-x552);

    if (t126 != -206343211) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x553 = 37;
	int8_t x555 = 51;
	int32_t t127 = 44;

    t127 = ((x553>(x554|x555))-x556);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x558 = 0;
	int64_t x559 = INT64_MIN;
	uint16_t x560 = 4U;
	int32_t t128 = 353;

    t128 = ((x557>(x558|x559))-x560);

    if (t128 != -3) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x561 = 77LLU;
	volatile int64_t x562 = INT64_MIN;
	uint64_t x563 = 251945235LLU;
	static uint32_t x564 = UINT32_MAX;
	uint32_t t129 = 849741879U;

    t129 = ((x561>(x562|x563))-x564);

    if (t129 != 1U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x567 = 0;
	uint16_t x568 = 51U;
	int32_t t130 = 1097;

    t130 = ((x565>(x566|x567))-x568);

    if (t130 != -50) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	static uint16_t x570 = 16382U;
	volatile uint64_t x571 = 1777405356240LLU;
	uint64_t x572 = 2LLU;
	volatile uint64_t t131 = 1678467398LLU;

    t131 = ((x569>(x570|x571))-x572);

    if (t131 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x574 = INT32_MIN;
	int32_t x575 = -1;
	int8_t x576 = 13;

    t132 = ((x573>(x574|x575))-x576);

    if (t132 != -13) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x577 = INT16_MAX;
	int16_t x578 = 177;
	int32_t x579 = -1;
	uint64_t x580 = 3LLU;

    t133 = ((x577>(x578|x579))-x580);

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x581 = INT64_MIN;
	volatile uint16_t x583 = 1U;
	int32_t x584 = 7;
	volatile int32_t t134 = -845619968;

    t134 = ((x581>(x582|x583))-x584);

    if (t134 != -7) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x585 = 49U;
	volatile int8_t x586 = INT8_MAX;
	int64_t x587 = INT64_MIN;
	volatile int32_t x588 = 0;
	int32_t t135 = -1758;

    t135 = ((x585>(x586|x587))-x588);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x589 = INT32_MAX;
	static int16_t x590 = -1;
	int16_t x591 = INT16_MAX;
	volatile int64_t x592 = INT64_MAX;
	volatile int64_t t136 = -18158861592187LL;

    t136 = ((x589>(x590|x591))-x592);

    if (t136 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x593 = INT64_MIN;
	int32_t x595 = INT32_MIN;
	volatile uint32_t x596 = 747426451U;
	volatile uint32_t t137 = 40891U;

    t137 = ((x593>(x594|x595))-x596);

    if (t137 != 3547540845U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x598 = INT16_MAX;
	uint32_t x599 = 7848U;
	volatile int32_t t138 = -972;

    t138 = ((x597>(x598|x599))-x600);

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x601 = 7962U;
	int32_t x602 = INT32_MAX;
	int16_t x604 = INT16_MIN;

    t139 = ((x601>(x602|x603))-x604);

    if (t139 != 32769) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x606 = INT8_MIN;
	volatile int64_t x608 = -11LL;

    t140 = ((x605>(x606|x607))-x608);

    if (t140 != 12LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x609 = UINT16_MAX;
	static volatile int8_t x610 = INT8_MIN;
	static int8_t x611 = INT8_MAX;
	static uint16_t x612 = 1193U;
	int32_t t141 = -3510;

    t141 = ((x609>(x610|x611))-x612);

    if (t141 != -1192) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x613 = INT32_MIN;
	static volatile int32_t x615 = -58480083;
	uint16_t x616 = UINT16_MAX;
	int32_t t142 = -11;

    t142 = ((x613>(x614|x615))-x616);

    if (t142 != -65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = -1;
	int32_t x618 = 53597;
	int8_t x619 = INT8_MAX;
	static volatile int8_t x620 = INT8_MIN;
	static int32_t t143 = 46996894;

    t143 = ((x617>(x618|x619))-x620);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x621 = -1;
	volatile uint64_t x622 = 7304053LLU;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -253620LL;
	volatile int64_t t144 = -7538872412321LL;

    t144 = ((x621>(x622|x623))-x624);

    if (t144 != 253621LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x626 = INT16_MIN;
	int64_t x627 = INT64_MIN;
	uint64_t x628 = 700796552816LLU;
	volatile uint64_t t145 = 2244345190239255102LLU;

    t145 = ((x625>(x626|x627))-x628);

    if (t145 != 18446743372912998801LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x629 = INT64_MIN;
	uint8_t x630 = 18U;
	static int64_t x632 = INT64_MAX;
	volatile int64_t t146 = -183210LL;

    t146 = ((x629>(x630|x631))-x632);

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = INT64_MIN;
	uint8_t x634 = 3U;
	int64_t x635 = INT64_MIN;
	static uint32_t x636 = 230644U;
	volatile uint32_t t147 = 296U;

    t147 = ((x633>(x634|x635))-x636);

    if (t147 != 4294736652U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x638 = INT8_MIN;
	int8_t x640 = 1;
	static int32_t t148 = -889;

    t148 = ((x637>(x638|x639))-x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x642 = 0LLU;
	static int8_t x643 = INT8_MAX;
	static volatile int32_t x644 = -1;
	static int32_t t149 = -1414264;

    t149 = ((x641>(x642|x643))-x644);

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x645 = INT8_MIN;
	int64_t x646 = 4087192437529548LL;
	volatile uint64_t x647 = 344LLU;
	static uint64_t x648 = UINT64_MAX;
	volatile uint64_t t150 = 2LLU;

    t150 = ((x645>(x646|x647))-x648);

    if (t150 != 2LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x653 = INT16_MAX;
	volatile int32_t x654 = INT32_MAX;
	volatile int32_t t151 = 0;

    t151 = ((x653>(x654|x655))-x656);

    if (t151 != -23) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x657 = INT32_MAX;
	uint16_t x658 = 81U;
	uint8_t x659 = 1U;
	int32_t t152 = 3;

    t152 = ((x657>(x658|x659))-x660);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x661 = INT8_MIN;
	static uint32_t x663 = 465U;
	static volatile int8_t x664 = INT8_MIN;

    t153 = ((x661>(x662|x663))-x664);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x665 = -1612;
	int32_t x666 = -1283832;
	static volatile uint16_t x668 = UINT16_MAX;
	static int32_t t154 = -963969913;

    t154 = ((x665>(x666|x667))-x668);

    if (t154 != -65535) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x673 = UINT64_MAX;
	volatile int32_t x674 = 240;
	int8_t x675 = INT8_MIN;
	int8_t x676 = 1;
	int32_t t155 = 956123467;

    t155 = ((x673>(x674|x675))-x676);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x677 = 1U;
	static volatile int8_t x679 = -7;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t156 = 493000;

    t156 = ((x677>(x678|x679))-x680);

    if (t156 != 128) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x681 = 75;
	static uint8_t x682 = UINT8_MAX;
	volatile uint64_t x684 = 4790851LLU;
	static volatile uint64_t t157 = 1LLU;

    t157 = ((x681>(x682|x683))-x684);

    if (t157 != 18446744073704760765LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x685 = 1U;
	int64_t x686 = INT64_MIN;
	volatile int32_t t158 = -2089595;

    t158 = ((x685>(x686|x687))-x688);

    if (t158 != 129) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x690 = -725780627;
	int64_t x691 = INT64_MIN;
	volatile int32_t x692 = 105313871;
	int32_t t159 = -796569;

    t159 = ((x689>(x690|x691))-x692);

    if (t159 != -105313870) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x693 = INT64_MIN;
	volatile int16_t x694 = INT16_MAX;
	static volatile int16_t x695 = INT16_MIN;
	int8_t x696 = INT8_MAX;

    t160 = ((x693>(x694|x695))-x696);

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x701 = 0LL;
	volatile int32_t x702 = INT32_MAX;
	volatile int16_t x703 = INT16_MIN;
	volatile uint64_t t161 = 4226988287LLU;

    t161 = ((x701>(x702|x703))-x704);

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x706 = -1;
	uint8_t x708 = 1U;
	int32_t t162 = 752430;

    t162 = ((x705>(x706|x707))-x708);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x709 = INT16_MIN;
	volatile int8_t x710 = -1;
	uint32_t x711 = 3391U;
	int32_t t163 = 9925;

    t163 = ((x709>(x710|x711))-x712);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x718 = -1;
	volatile int32_t x719 = 814643311;
	volatile uint8_t x720 = 7U;
	volatile int32_t t164 = -3097;

    t164 = ((x717>(x718|x719))-x720);

    if (t164 != -7) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x721 = INT8_MIN;
	static int32_t x723 = INT32_MIN;
	int32_t x724 = 285;
	volatile int32_t t165 = 844032;

    t165 = ((x721>(x722|x723))-x724);

    if (t165 != -285) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MAX;
	static volatile int64_t x727 = INT64_MIN;
	volatile int64_t t166 = 1LL;

    t166 = ((x725>(x726|x727))-x728);

    if (t166 != 2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = 3;
	int16_t x735 = -1;
	int32_t t167 = -124326;

    t167 = ((x733>(x734|x735))-x736);

    if (t167 != 32769) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x738 = 3U;
	static int32_t x739 = 57393282;
	int8_t x740 = INT8_MIN;
	volatile int32_t t168 = -912550;

    t168 = ((x737>(x738|x739))-x740);

    if (t168 != 129) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = 13198485LL;
	static uint16_t x743 = 9U;
	int32_t t169 = 1553152;

    t169 = ((x741>(x742|x743))-x744);

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x745 = INT16_MAX;
	static uint32_t x746 = 88248138U;
	int8_t x747 = 50;

    t170 = ((x745>(x746|x747))-x748);

    if (t170 != -296112) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x750 = 549U;
	static int8_t x751 = 1;
	uint8_t x752 = 52U;
	volatile int32_t t171 = -315470;

    t171 = ((x749>(x750|x751))-x752);

    if (t171 != -52) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x754 = -1;
	int8_t x755 = -1;
	int8_t x756 = -1;
	int32_t t172 = 3480364;

    t172 = ((x753>(x754|x755))-x756);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x758 = INT32_MIN;
	uint64_t x759 = 108489LLU;
	uint64_t x760 = 16LLU;
	volatile uint64_t t173 = 133049316396116LLU;

    t173 = ((x757>(x758|x759))-x760);

    if (t173 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x761 = -1;
	static uint8_t x762 = UINT8_MAX;
	int32_t x763 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile uint32_t t174 = 12871646U;

    t174 = ((x761>(x762|x763))-x764);

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x765 = INT32_MIN;
	static volatile int64_t x766 = INT64_MAX;
	static int64_t x767 = INT64_MIN;
	uint32_t x768 = 14471U;
	volatile uint32_t t175 = 82244U;

    t175 = ((x765>(x766|x767))-x768);

    if (t175 != 4294952825U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x769 = 29U;
	uint16_t x770 = 3973U;
	volatile int64_t x772 = 183699911290953096LL;
	static int64_t t176 = 1323LL;

    t176 = ((x769>(x770|x771))-x772);

    if (t176 != -183699911290953095LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x773 = 51U;
	volatile uint32_t x774 = 499U;
	int8_t x776 = -1;
	static int32_t t177 = 24399;

    t177 = ((x773>(x774|x775))-x776);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x777 = -341;
	static uint64_t x778 = UINT64_MAX;
	static int16_t x779 = INT16_MAX;
	int32_t t178 = 13945871;

    t178 = ((x777>(x778|x779))-x780);

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x781 = 92U;
	int32_t x782 = INT32_MIN;
	volatile int32_t t179 = -199362;

    t179 = ((x781>(x782|x783))-x784);

    if (t179 != 129) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x785 = UINT16_MAX;
	uint64_t x786 = 720LLU;
	int16_t x787 = -1;
	int8_t x788 = -1;
	int32_t t180 = -1;

    t180 = ((x785>(x786|x787))-x788);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x789 = UINT8_MAX;
	static uint64_t x790 = 809538LLU;
	uint8_t x792 = 11U;
	volatile int32_t t181 = 1;

    t181 = ((x789>(x790|x791))-x792);

    if (t181 != -11) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x793 = 50;
	volatile uint8_t x794 = 0U;
	static int64_t x795 = 3627LL;
	int16_t x796 = 84;
	volatile int32_t t182 = -558672988;

    t182 = ((x793>(x794|x795))-x796);

    if (t182 != -84) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x797 = 7292U;
	static int8_t x799 = -1;
	int32_t x800 = -1;

    t183 = ((x797>(x798|x799))-x800);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x803 = 47;
	int8_t x804 = 0;
	static volatile int32_t t184 = 200205782;

    t184 = ((x801>(x802|x803))-x804);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x805 = UINT64_MAX;
	static int16_t x806 = INT16_MIN;
	int64_t t185 = 4086606344825509436LL;

    t185 = ((x805>(x806|x807))-x808);

    if (t185 != -956LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x810 = 14;
	int8_t x811 = -1;
	int8_t x812 = 27;
	volatile int32_t t186 = -517340277;

    t186 = ((x809>(x810|x811))-x812);

    if (t186 != -26) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x814 = -1633;
	static int16_t x815 = 2;
	uint16_t x816 = 127U;
	static volatile int32_t t187 = 0;

    t187 = ((x813>(x814|x815))-x816);

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x817 = -15;
	static uint8_t x819 = 7U;

    t188 = ((x817>(x818|x819))-x820);

    if (t188 != 2LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x821 = INT16_MAX;
	int16_t x823 = INT16_MAX;
	uint64_t x824 = UINT64_MAX;
	uint64_t t189 = 25LLU;

    t189 = ((x821>(x822|x823))-x824);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x826 = UINT64_MAX;
	static int8_t x828 = INT8_MIN;
	volatile int32_t t190 = -74270;

    t190 = ((x825>(x826|x827))-x828);

    if (t190 != 128) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x829 = INT64_MIN;
	uint64_t x830 = UINT64_MAX;
	uint8_t x831 = 107U;

    t191 = ((x829>(x830|x831))-x832);

    if (t191 != -10557) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x833 = UINT16_MAX;

    t192 = ((x833>(x834|x835))-x836);

    if (t192 != 18446684364394780205LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x837 = 36648U;
	int8_t x838 = 27;
	static uint8_t x839 = UINT8_MAX;
	int32_t x840 = 0;
	static volatile int32_t t193 = -909691384;

    t193 = ((x837>(x838|x839))-x840);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x841 = 70U;
	int8_t x842 = INT8_MIN;
	int32_t t194 = 16;

    t194 = ((x841>(x842|x843))-x844);

    if (t194 != -2147483646) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x845 = 1;
	volatile uint32_t x846 = 1586032U;
	int16_t x848 = 17;
	int32_t t195 = 21861739;

    t195 = ((x845>(x846|x847))-x848);

    if (t195 != -17) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x857 = 8;
	uint64_t x858 = 7LLU;
	volatile int8_t x859 = INT8_MAX;
	int64_t x860 = 144LL;

    t196 = ((x857>(x858|x859))-x860);

    if (t196 != -144LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x862 = INT64_MIN;
	volatile int32_t x864 = -2;

    t197 = ((x861>(x862|x863))-x864);

    if (t197 != 3) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x869 = INT64_MIN;
	uint8_t x870 = 2U;
	volatile int32_t x871 = -1;
	int64_t x872 = INT64_MAX;
	int64_t t198 = 11313427652283251LL;

    t198 = ((x869>(x870|x871))-x872);

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x873 = 120745716LL;
	static int8_t x874 = INT8_MIN;
	int16_t x875 = 0;
	int32_t x876 = 32954;
	int32_t t199 = 9;

    t199 = ((x873>(x874|x875))-x876);

    if (t199 != -32953) { NG(); } else { ; }
	
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

