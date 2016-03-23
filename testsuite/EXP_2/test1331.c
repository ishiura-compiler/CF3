
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

static int8_t x2 = -1;
int32_t x4 = INT32_MAX;
volatile int32_t t0 = INT32_MAX;
uint64_t t1 = 22124976098749365LLU;
volatile uint8_t x13 = 60U;
static int32_t x19 = INT32_MIN;
static int8_t x24 = INT8_MIN;
volatile uint32_t x31 = 319U;
static int32_t t7 = -1015417;
static int64_t x37 = -76575818930LL;
volatile uint32_t x38 = 489004989U;
static volatile uint32_t x44 = UINT32_MAX;
uint16_t x46 = 4176U;
volatile int16_t x48 = -25;
volatile int32_t t12 = 251496163;
uint32_t t13 = 93168U;
static int8_t x57 = -3;
volatile int16_t x59 = -1;
static int16_t x80 = INT16_MAX;
static uint16_t x90 = 441U;
int64_t x93 = -4128LL;
int16_t x94 = INT16_MIN;
int16_t x96 = INT16_MIN;
volatile int64_t t23 = -365205148509761LL;
int8_t x102 = INT8_MIN;
int16_t x109 = INT16_MAX;
static int8_t x111 = -1;
volatile uint64_t t29 = 7570473504457LLU;
static int32_t t33 = 127;
static volatile int64_t t34 = 322LL;
static volatile uint64_t x148 = 21186861194047374LLU;
int8_t x149 = -3;
static int16_t x150 = -103;
int64_t x157 = INT64_MIN;
int32_t x164 = INT32_MIN;
uint32_t x166 = 6157U;
int16_t x170 = INT16_MIN;
static int32_t t42 = -48;
volatile int64_t t43 = -275855058266520LL;
int64_t x184 = 113012395200288173LL;
static int32_t x186 = INT32_MIN;
int16_t x187 = INT16_MIN;
static volatile int32_t t45 = 3;
volatile uint32_t x193 = 6969U;
uint16_t x194 = UINT16_MAX;
int8_t x195 = -3;
int32_t x204 = INT32_MAX;
uint16_t x205 = UINT16_MAX;
int32_t t50 = 60429;
static volatile int16_t x211 = -1836;
volatile int32_t t51 = 68;
int16_t x216 = -5881;
volatile int64_t x220 = INT64_MIN;
int64_t t53 = INT64_MIN;
static volatile int8_t x223 = -1;
int8_t x226 = INT8_MAX;
int32_t t56 = -14205;
int8_t x257 = INT8_MAX;
int16_t x259 = -1;
volatile int8_t x271 = INT8_MAX;
uint32_t x277 = 12424U;
int32_t x283 = INT32_MIN;
static int32_t x285 = INT32_MAX;
static int8_t x286 = 5;
uint64_t x292 = UINT64_MAX;
int32_t x294 = INT32_MIN;
int8_t x296 = INT8_MIN;
uint32_t t73 = 63932648U;
int32_t x303 = -1;
volatile uint32_t t74 = 2U;
uint32_t x313 = 1358349U;
uint32_t t77 = 397367631U;
uint32_t x320 = 8103995U;
uint8_t x326 = 1U;
static volatile int16_t x328 = 4909;
uint16_t x332 = UINT16_MAX;
volatile int32_t t81 = -27282;
static volatile uint32_t x333 = 121593447U;
uint32_t t82 = 2734U;
volatile int32_t t86 = -13496;
int32_t x360 = INT32_MIN;
int8_t x362 = 24;
uint8_t x377 = UINT8_MAX;
uint32_t x378 = UINT32_MAX;
int64_t x381 = 3363200463592LL;
static int8_t x384 = INT8_MIN;
static volatile int16_t x388 = INT16_MIN;
int32_t x389 = 1;
static uint8_t x391 = UINT8_MAX;
uint64_t x393 = UINT64_MAX;
uint8_t x396 = UINT8_MAX;
volatile int32_t x408 = INT32_MIN;
int16_t x416 = INT16_MIN;
int16_t x417 = 76;
int32_t x423 = -103121453;
volatile int32_t x431 = INT32_MIN;
uint16_t x441 = 4477U;
int8_t x443 = INT8_MIN;
static uint32_t t110 = UINT32_MAX;
static uint32_t x456 = 0U;
volatile uint32_t t113 = 267929U;
int64_t x462 = -3099LL;
int8_t x464 = -1;
static volatile uint8_t x467 = 7U;
uint32_t x477 = 707197U;
int8_t x481 = -1;
volatile int8_t x489 = INT8_MIN;
uint64_t x492 = 0LLU;
static uint32_t x496 = 1163021679U;
uint16_t x498 = UINT16_MAX;
int16_t x507 = 13734;
int32_t t125 = 16367812;
uint64_t x514 = 10148467031LLU;
int32_t t127 = -1;
int64_t x525 = INT64_MIN;
uint64_t x527 = UINT64_MAX;
volatile uint64_t x529 = 538726675LLU;
static volatile uint64_t x531 = 6954008444808804LLU;
volatile int32_t x532 = INT32_MIN;
int16_t x533 = INT16_MIN;
int16_t x534 = -11;
int32_t x541 = -1;
static int8_t x543 = INT8_MIN;
int8_t x544 = -1;
static volatile int32_t t132 = -5931921;
int16_t x545 = INT16_MIN;
volatile int32_t x550 = INT32_MIN;
uint32_t x554 = UINT32_MAX;
volatile uint8_t x556 = 0U;
int16_t x561 = INT16_MAX;
static int64_t x562 = 3LL;
volatile int64_t x567 = INT64_MAX;
int64_t x570 = INT64_MIN;
volatile int16_t x577 = INT16_MAX;
static int8_t x579 = 1;
int16_t x581 = 1;
volatile int64_t t141 = -280841LL;
int32_t x590 = INT32_MIN;
int8_t x591 = -1;
volatile uint64_t t143 = UINT64_MAX;
int16_t x598 = -1;
uint16_t x607 = 1593U;
static int64_t x610 = 0LL;
static volatile uint16_t x614 = 7702U;
int32_t x615 = 193276467;
static int32_t x616 = -34754358;
int32_t x622 = -1;
static volatile int32_t t152 = 32962;
int8_t x638 = INT8_MIN;
static int16_t x639 = INT16_MIN;
int32_t x642 = INT32_MIN;
uint16_t x664 = UINT16_MAX;
int8_t x666 = INT8_MAX;
int8_t x667 = INT8_MIN;
int64_t x673 = INT64_MIN;
volatile int64_t x676 = INT64_MIN;
uint64_t x677 = 5LLU;
int16_t x679 = -132;
uint8_t x681 = UINT8_MAX;
uint8_t x682 = 5U;
static int32_t x683 = -1;
int32_t t164 = -1;
static int32_t x686 = INT32_MIN;
static int64_t x688 = INT64_MIN;
int16_t x689 = INT16_MIN;
static volatile int32_t t168 = -117;
static volatile int16_t x703 = 1151;
volatile int64_t t169 = 105502530210795971LL;
static volatile uint32_t x707 = UINT32_MAX;
static volatile uint64_t t170 = UINT64_MAX;
int64_t x710 = -1LL;
int64_t t171 = 60267LL;
volatile uint64_t t172 = UINT64_MAX;
int8_t x718 = -1;
int8_t x720 = INT8_MIN;
volatile int64_t t173 = 455283LL;
static int64_t x722 = -1LL;
uint64_t x723 = UINT64_MAX;
uint16_t x727 = 1U;
volatile int16_t x729 = INT16_MAX;
static uint32_t x738 = UINT32_MAX;
int16_t x750 = INT16_MAX;
int16_t x759 = INT16_MAX;
int32_t t183 = INT32_MIN;
int16_t x763 = INT16_MAX;
static int64_t x769 = INT64_MAX;
volatile int64_t x770 = -827104176500LL;
volatile int8_t x771 = INT8_MIN;
static uint64_t x774 = 861936340492433088LLU;
uint8_t x775 = 0U;
volatile uint32_t x783 = 10902102U;
int16_t x787 = -22;
int8_t x793 = INT8_MIN;
static int32_t t191 = 64673624;
int64_t x798 = INT64_MIN;
static int32_t x799 = INT32_MIN;
volatile int8_t x804 = INT8_MIN;
uint32_t x805 = 85964U;
volatile uint64_t t195 = 920876675190151702LLU;
int32_t x813 = -597322;
volatile uint64_t x814 = 161LLU;
int16_t x815 = -1;
int16_t x816 = 473;
int32_t x817 = INT32_MAX;
volatile uint64_t x826 = 209262573370478814LLU;


void f0(void) {
    	int8_t x1 = 44;
	int16_t x3 = INT16_MIN;

    t0 = ((x1&(x2!=x3))+x4);

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 102U;
	int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MAX;

    t1 = ((x5&(x6!=x7))+x8);

    if (t1 != 2147483648LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 4628283488079LLU;
	static volatile uint64_t x11 = 145835LLU;
	volatile int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = 0;

    t2 = ((x9&(x10!=x11))+x12);

    if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MIN;
	uint32_t x15 = 856885U;
	int64_t x16 = -1LL;
	volatile int64_t t3 = 60455244LL;

    t3 = ((x13&(x14!=x15))+x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int32_t x18 = INT32_MIN;
	static int8_t x20 = 3;
	int32_t t4 = -2715;

    t4 = ((x17&(x18!=x19))+x20);

    if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int32_t x22 = -16606478;
	int32_t x23 = 4402;
	int32_t t5 = -724886;

    t5 = ((x21&(x22!=x23))+x24);

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = INT32_MAX;
	volatile int64_t x27 = -48008551773250LL;
	uint16_t x28 = 1U;
	static volatile int32_t t6 = -1574780;

    t6 = ((x25&(x26!=x27))+x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MIN;
	int8_t x32 = INT8_MAX;

    t7 = ((x29&(x30!=x31))+x32);

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 878;
	int8_t x34 = -11;
	uint8_t x35 = UINT8_MAX;
	static volatile int64_t x36 = INT64_MIN;
	static int64_t t8 = INT64_MIN;

    t8 = ((x33&(x34!=x35))+x36);

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x39 = INT64_MIN;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = INT64_MIN;

    t9 = ((x37&(x38!=x39))+x40);

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	static uint64_t x42 = UINT64_MAX;
	int8_t x43 = 0;
	int64_t t10 = -18772128328286LL;

    t10 = ((x41&(x42!=x43))+x44);

    if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 74U;
	int8_t x47 = INT8_MAX;
	volatile int32_t t11 = -52370;

    t11 = ((x45&(x46!=x47))+x48);

    if (t11 != -25) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = 3U;

    t12 = ((x49&(x50!=x51))+x52);

    if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 75U;
	int32_t x54 = -1;
	uint16_t x55 = 1909U;
	static int32_t x56 = INT32_MIN;

    t13 = ((x53&(x54!=x55))+x56);

    if (t13 != 2147483649U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = UINT8_MAX;
	uint64_t x60 = 618576373LLU;
	uint64_t t14 = 47518221963LLU;

    t14 = ((x57&(x58!=x59))+x60);

    if (t14 != 618576374LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MAX;
	int32_t t15 = 79;

    t15 = ((x61&(x62!=x63))+x64);

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 33U;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 3776643625342830826LLU;
	uint8_t x68 = 6U;
	volatile int32_t t16 = -1830706;

    t16 = ((x65&(x66!=x67))+x68);

    if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = -50;
	uint32_t x70 = 59695U;
	uint16_t x71 = 875U;
	int16_t x72 = -49;
	int32_t t17 = -4507;

    t17 = ((x69&(x70!=x71))+x72);

    if (t17 != -49) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 5243847512LLU;
	int32_t x76 = -1;
	volatile int32_t t18 = -7;

    t18 = ((x73&(x74!=x75))+x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = INT8_MIN;
	uint32_t x78 = 4789013U;
	volatile int32_t x79 = -1;
	volatile int32_t t19 = 256060;

    t19 = ((x77&(x78!=x79))+x80);

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MAX;
	static int16_t x83 = 3442;
	int16_t x84 = -1;
	volatile uint64_t t20 = 2015325LLU;

    t20 = ((x81&(x82!=x83))+x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x85 = 659U;
	static uint8_t x86 = 0U;
	uint64_t x87 = UINT64_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	static uint32_t t21 = 5U;

    t21 = ((x85&(x86!=x87))+x88);

    if (t21 != 65536U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 569320;
	volatile int32_t x91 = -259669207;
	static int16_t x92 = -1;
	int32_t t22 = 800;

    t22 = ((x89&(x90!=x91))+x92);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x95 = 29U;

    t23 = ((x93&(x94!=x95))+x96);

    if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	volatile int16_t x98 = INT16_MAX;
	static int32_t x99 = INT32_MAX;
	int8_t x100 = -26;
	int32_t t24 = -1931820;

    t24 = ((x97&(x98!=x99))+x100);

    if (t24 != -26) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 3098LLU;
	static int16_t x103 = INT16_MIN;
	uint8_t x104 = 10U;
	volatile uint64_t t25 = 2LLU;

    t25 = ((x101&(x102!=x103))+x104);

    if (t25 != 10LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = 65U;
	int32_t t26 = -7;

    t26 = ((x105&(x106!=x107))+x108);

    if (t26 != 65) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MAX;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t27 = 3;

    t27 = ((x109&(x110!=x111))+x112);

    if (t27 != 65536) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x113 = 5U;
	static volatile int32_t x114 = -1;
	int32_t x115 = INT32_MIN;
	int64_t x116 = -1LL;
	static volatile int64_t t28 = 30915289579648LL;

    t28 = ((x113&(x114!=x115))+x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	volatile int16_t x118 = -1498;
	int8_t x119 = INT8_MAX;
	static volatile int16_t x120 = 127;

    t29 = ((x117&(x118!=x119))+x120);

    if (t29 != 128LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	int16_t x122 = -1;
	int16_t x123 = 6249;
	volatile uint16_t x124 = 22U;
	int32_t t30 = -279493206;

    t30 = ((x121&(x122!=x123))+x124);

    if (t30 != 23) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MAX;
	int64_t x126 = 537377520873288LL;
	int32_t x127 = 100290;
	int32_t x128 = INT32_MIN;
	static int64_t t31 = 3911532LL;

    t31 = ((x125&(x126!=x127))+x128);

    if (t31 != -2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = -1;
	int8_t x130 = INT8_MAX;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -1;

    t32 = ((x129&(x130!=x131))+x132);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = -1;
	uint16_t x138 = 488U;
	static volatile int32_t x139 = INT32_MAX;
	int32_t x140 = 8757;

    t33 = ((x137&(x138!=x139))+x140);

    if (t33 != 8758) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	static int8_t x143 = 7;
	int64_t x144 = -1LL;

    t34 = ((x141&(x142!=x143))+x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 1837038578LLU;
	uint8_t x146 = 1U;
	int8_t x147 = -1;
	volatile uint64_t t35 = 129881343869LLU;

    t35 = ((x145&(x146!=x147))+x148);

    if (t35 != 21186861194047374LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x151 = 129516534533520608LLU;
	uint16_t x152 = 1207U;
	int32_t t36 = -1;

    t36 = ((x149&(x150!=x151))+x152);

    if (t36 != 1208) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = INT64_MAX;
	static int16_t x154 = INT16_MIN;
	static volatile int8_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	static int64_t t37 = -81464276128LL;

    t37 = ((x153&(x154!=x155))+x156);

    if (t37 != 65536LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x158 = 12705U;
	int16_t x159 = 1;
	int32_t x160 = -1;
	volatile int64_t t38 = 93730637687333LL;

    t38 = ((x157&(x158!=x159))+x160);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = 28;
	int16_t x162 = 2643;
	int8_t x163 = -1;
	volatile int32_t t39 = INT32_MIN;

    t39 = ((x161&(x162!=x163))+x164);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = 16690071401966LL;
	static volatile int64_t x167 = -1LL;
	int32_t x168 = INT32_MIN;
	volatile int64_t t40 = -3635704779274LL;

    t40 = ((x165&(x166!=x167))+x168);

    if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 902675LLU;
	int64_t x171 = INT64_MAX;
	static uint16_t x172 = 13U;
	uint64_t t41 = 24210LLU;

    t41 = ((x169&(x170!=x171))+x172);

    if (t41 != 14LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x173 = 3U;
	volatile int16_t x174 = -1;
	int16_t x175 = -929;
	static volatile uint8_t x176 = 9U;

    t42 = ((x173&(x174!=x175))+x176);

    if (t42 != 10) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x177 = INT64_MIN;
	uint32_t x178 = 471U;
	int64_t x179 = 386LL;
	uint16_t x180 = UINT16_MAX;

    t43 = ((x177&(x178!=x179))+x180);

    if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x181 = INT8_MIN;
	int32_t x182 = -6291318;
	int32_t x183 = INT32_MIN;
	int64_t t44 = 79483LL;

    t44 = ((x181&(x182!=x183))+x184);

    if (t44 != 113012395200288173LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = UINT16_MAX;
	int16_t x188 = INT16_MAX;

    t45 = ((x185&(x186!=x187))+x188);

    if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	volatile uint32_t x191 = UINT32_MAX;
	static uint8_t x192 = 25U;
	volatile int32_t t46 = 369664;

    t46 = ((x189&(x190!=x191))+x192);

    if (t46 != 25) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x196 = 223U;
	uint32_t t47 = 157026U;

    t47 = ((x193&(x194!=x195))+x196);

    if (t47 != 224U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	volatile uint8_t x200 = UINT8_MAX;
	volatile uint32_t t48 = 2067886U;

    t48 = ((x197&(x198!=x199))+x200);

    if (t48 != 256U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = 2;
	int64_t x202 = INT64_MIN;
	static uint32_t x203 = 58U;
	volatile int32_t t49 = INT32_MAX;

    t49 = ((x201&(x202!=x203))+x204);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x206 = 2062532U;
	int8_t x207 = 2;
	int8_t x208 = -57;

    t50 = ((x205&(x206!=x207))+x208);

    if (t50 != -56) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MAX;
	uint32_t x210 = 370056373U;
	volatile uint8_t x212 = 1U;

    t51 = ((x209&(x210!=x211))+x212);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x213 = 109215818936609LL;
	volatile uint16_t x214 = 23U;
	volatile int16_t x215 = INT16_MIN;
	static int64_t t52 = -8305526982625389LL;

    t52 = ((x213&(x214!=x215))+x216);

    if (t52 != -5880LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x217 = 412U;
	uint8_t x218 = 27U;
	int16_t x219 = -1803;

    t53 = ((x217&(x218!=x219))+x220);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -29;
	int64_t x222 = 8LL;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t54 = 108137;

    t54 = ((x221&(x222!=x223))+x224);

    if (t54 != 65536) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = 3809LL;
	int64_t x227 = -136116959779399LL;
	int64_t x228 = 1275104447338591391LL;
	volatile int64_t t55 = 63925270265186722LL;

    t55 = ((x225&(x226!=x227))+x228);

    if (t55 != 1275104447338591392LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = INT32_MIN;
	volatile int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MAX;
	static int8_t x232 = 0;

    t56 = ((x229&(x230!=x231))+x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x233 = 499892U;
	volatile uint32_t x234 = 49U;
	static volatile int64_t x235 = -1LL;
	static int32_t x236 = -1;
	uint32_t t57 = UINT32_MAX;

    t57 = ((x233&(x234!=x235))+x236);

    if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = 8U;
	volatile int8_t x238 = INT8_MAX;
	int32_t x239 = -26554689;
	static volatile uint8_t x240 = 19U;
	int32_t t58 = 15938754;

    t58 = ((x237&(x238!=x239))+x240);

    if (t58 != 19) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = 0;
	volatile int32_t x242 = INT32_MIN;
	uint16_t x243 = 826U;
	static int64_t x244 = -17LL;
	volatile int64_t t59 = 1990805541LL;

    t59 = ((x241&(x242!=x243))+x244);

    if (t59 != -17LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = UINT64_MAX;
	static int16_t x246 = INT16_MAX;
	static int32_t x247 = INT32_MIN;
	volatile int64_t x248 = -1LL;
	uint64_t t60 = 20627711LLU;

    t60 = ((x245&(x246!=x247))+x248);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	static volatile int32_t x251 = 11248;
	uint8_t x252 = UINT8_MAX;
	int64_t t61 = 609842761518855493LL;

    t61 = ((x249&(x250!=x251))+x252);

    if (t61 != 256LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = INT64_MIN;
	volatile int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 254987164922LLU;
	uint64_t t62 = 44531961LLU;

    t62 = ((x253&(x254!=x255))+x256);

    if (t62 != 254987164922LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x258 = 193563117571283LLU;
	int64_t x260 = 2269996519882268LL;
	volatile int64_t t63 = 2809220684141LL;

    t63 = ((x257&(x258!=x259))+x260);

    if (t63 != 2269996519882269LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -1;
	volatile int64_t x262 = -1LL;
	uint8_t x263 = UINT8_MAX;
	int64_t x264 = -549345631998197LL;
	volatile int64_t t64 = -3873546033267LL;

    t64 = ((x261&(x262!=x263))+x264);

    if (t64 != -549345631998196LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = -1;
	int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MAX;
	int64_t t65 = INT64_MAX;

    t65 = ((x265&(x266!=x267))+x268);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x269 = INT32_MAX;
	int16_t x270 = -315;
	uint16_t x272 = 6U;
	static volatile int32_t t66 = -2152258;

    t66 = ((x269&(x270!=x271))+x272);

    if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = UINT32_MAX;
	int64_t x275 = -1LL;
	static int8_t x276 = INT8_MIN;
	int32_t t67 = -169239248;

    t67 = ((x273&(x274!=x275))+x276);

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x278 = INT32_MAX;
	volatile int8_t x279 = 1;
	uint8_t x280 = 9U;
	static uint32_t t68 = 30233U;

    t68 = ((x277&(x278!=x279))+x280);

    if (t68 != 9U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	volatile int64_t x284 = -79057496680463532LL;
	static volatile int64_t t69 = -1168404729LL;

    t69 = ((x281&(x282!=x283))+x284);

    if (t69 != -79057496680463531LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x287 = 0LL;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t70 = -1;

    t70 = ((x285&(x286!=x287))+x288);

    if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = ((x289&(x290!=x291))+x292);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x293 = 2904882LLU;
	uint32_t x295 = UINT32_MAX;
	volatile uint64_t t72 = 108760381370915LLU;

    t72 = ((x293&(x294!=x295))+x296);

    if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x297 = -31792;
	static volatile int8_t x298 = -1;
	static uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 7415401U;

    t73 = ((x297&(x298!=x299))+x300);

    if (t73 != 7415401U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	volatile uint32_t x304 = 61102U;

    t74 = ((x301&(x302!=x303))+x304);

    if (t74 != 61102U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = 35971543795683788LL;
	int8_t x306 = INT8_MAX;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = -1;
	volatile int64_t t75 = 37713737LL;

    t75 = ((x305&(x306!=x307))+x308);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = INT64_MIN;
	static int8_t x310 = 2;
	int32_t x311 = INT32_MIN;
	int64_t x312 = -1300122297991680955LL;
	static volatile int64_t t76 = 917814104738861LL;

    t76 = ((x309&(x310!=x311))+x312);

    if (t76 != -1300122297991680955LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x314 = 61096;
	int32_t x315 = -6067;
	int16_t x316 = 15;

    t77 = ((x313&(x314!=x315))+x316);

    if (t77 != 16U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x317 = INT64_MAX;
	uint16_t x318 = 0U;
	uint64_t x319 = UINT64_MAX;
	int64_t t78 = -16LL;

    t78 = ((x317&(x318!=x319))+x320);

    if (t78 != 8103996LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = 1100443074U;
	static uint8_t x322 = UINT8_MAX;
	static uint8_t x323 = 78U;
	int64_t x324 = -1LL;
	volatile int64_t t79 = -3611939LL;

    t79 = ((x321&(x322!=x323))+x324);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	int32_t t80 = -4009;

    t80 = ((x325&(x326!=x327))+x328);

    if (t80 != 4910) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = -48;
	int64_t x330 = -731693958018595LL;
	uint64_t x331 = 2671182634565059LLU;

    t81 = ((x329&(x330!=x331))+x332);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x334 = -2;
	volatile int16_t x335 = 32;
	int16_t x336 = INT16_MAX;

    t82 = ((x333&(x334!=x335))+x336);

    if (t82 != 32768U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 135500372U;
	uint16_t x340 = 4946U;
	static volatile int32_t t83 = 93;

    t83 = ((x337&(x338!=x339))+x340);

    if (t83 != 4947) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x341 = -198128407565LL;
	static int16_t x342 = 3185;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = INT64_MIN;
	int64_t t84 = -2516LL;

    t84 = ((x341&(x342!=x343))+x344);

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = INT16_MAX;
	static volatile int16_t x346 = -1343;
	uint64_t x347 = 2921017647033LLU;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t85 = 2;

    t85 = ((x345&(x346!=x347))+x348);

    if (t85 != 65536) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = -1;
	int8_t x352 = 19;

    t86 = ((x349&(x350!=x351))+x352);

    if (t86 != 19) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 79U;
	uint16_t x356 = 2U;
	volatile int32_t t87 = 27;

    t87 = ((x353&(x354!=x355))+x356);

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 23662577U;
	volatile int32_t t88 = 88772;

    t88 = ((x357&(x358!=x359))+x360);

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MAX;
	int64_t x363 = INT64_MAX;
	volatile int8_t x364 = INT8_MAX;
	volatile int64_t t89 = -4756054579164LL;

    t89 = ((x361&(x362!=x363))+x364);

    if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = INT8_MAX;
	uint64_t x366 = 7866991220636255LLU;
	int32_t x367 = -21801;
	int8_t x368 = 6;
	int32_t t90 = 147;

    t90 = ((x365&(x366!=x367))+x368);

    if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	static int32_t x371 = INT32_MIN;
	uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t91 = UINT64_MAX;

    t91 = ((x369&(x370!=x371))+x372);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x373 = 0U;
	static int8_t x374 = -2;
	volatile int16_t x375 = INT16_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t92 = 502462;

    t92 = ((x373&(x374!=x375))+x376);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x379 = 722;
	static int16_t x380 = INT16_MIN;
	int32_t t93 = 516718754;

    t93 = ((x377&(x378!=x379))+x380);

    if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x382 = UINT32_MAX;
	uint64_t x383 = UINT64_MAX;
	static volatile int64_t t94 = -118327569246255LL;

    t94 = ((x381&(x382!=x383))+x384);

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x385 = INT64_MIN;
	volatile uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MIN;
	static int64_t t95 = -4472849876065576111LL;

    t95 = ((x385&(x386!=x387))+x388);

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x390 = INT16_MIN;
	int16_t x392 = 25;
	int32_t t96 = -919011;

    t96 = ((x389&(x390!=x391))+x392);

    if (t96 != 26) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x394 = 837;
	volatile int16_t x395 = -1;
	uint64_t t97 = 6271945979130103017LLU;

    t97 = ((x393&(x394!=x395))+x396);

    if (t97 != 256LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x397 = 17335217U;
	int8_t x398 = -1;
	int32_t x399 = -1;
	volatile int32_t x400 = INT32_MIN;
	uint32_t t98 = 2423U;

    t98 = ((x397&(x398!=x399))+x400);

    if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x401 = 38527373U;
	volatile int8_t x402 = -1;
	int32_t x403 = 64970687;
	int8_t x404 = 0;
	uint32_t t99 = 596906539U;

    t99 = ((x401&(x402!=x403))+x404);

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x405 = 991U;
	int16_t x406 = 9;
	int8_t x407 = INT8_MAX;
	volatile int32_t t100 = -25;

    t100 = ((x405&(x406!=x407))+x408);

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = INT64_MIN;
	int32_t x410 = -124469;
	static volatile int32_t x411 = INT32_MIN;
	volatile int16_t x412 = -1;
	int64_t t101 = 12166419448899821LL;

    t101 = ((x409&(x410!=x411))+x412);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x413 = UINT8_MAX;
	uint64_t x414 = 1134597116102802944LLU;
	uint32_t x415 = 730U;
	volatile int32_t t102 = 36;

    t102 = ((x413&(x414!=x415))+x416);

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x418 = INT8_MIN;
	static uint64_t x419 = 1586861516913LLU;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t103 = -890796;

    t103 = ((x417&(x418!=x419))+x420);

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile int64_t x422 = INT64_MIN;
	uint64_t x424 = UINT64_MAX;
	uint64_t t104 = 8013348LLU;

    t104 = ((x421&(x422!=x423))+x424);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	volatile int32_t x426 = INT32_MIN;
	static int16_t x427 = -1;
	int16_t x428 = INT16_MIN;
	volatile int32_t t105 = -772;

    t105 = ((x425&(x426!=x427))+x428);

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x429 = INT16_MIN;
	uint8_t x430 = UINT8_MAX;
	volatile uint8_t x432 = 0U;
	volatile int32_t t106 = 2611992;

    t106 = ((x429&(x430!=x431))+x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = 0;
	static int32_t x434 = 28581;
	int8_t x435 = INT8_MAX;
	volatile uint64_t x436 = 24LLU;
	uint64_t t107 = 414992885273LLU;

    t107 = ((x433&(x434!=x435))+x436);

    if (t107 != 24LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x437 = INT16_MAX;
	volatile uint64_t x438 = 571LLU;
	uint8_t x439 = 63U;
	static uint32_t x440 = 0U;
	volatile uint32_t t108 = 1688144U;

    t108 = ((x437&(x438!=x439))+x440);

    if (t108 != 1U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x442 = -30;
	static int32_t x444 = 1769;
	int32_t t109 = 24602;

    t109 = ((x441&(x442!=x443))+x444);

    if (t109 != 1770) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x445 = 23331U;
	uint32_t x446 = 90483412U;
	static int8_t x447 = 7;
	int8_t x448 = -2;

    t110 = ((x445&(x446!=x447))+x448);

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x449 = -1;
	int64_t x450 = INT64_MAX;
	int8_t x451 = -1;
	int8_t x452 = -1;
	int32_t t111 = -32734;

    t111 = ((x449&(x450!=x451))+x452);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x453 = -1;
	static int16_t x454 = INT16_MAX;
	int32_t x455 = 12346;
	volatile uint32_t t112 = 0U;

    t112 = ((x453&(x454!=x455))+x456);

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x457 = 0U;
	static volatile int8_t x458 = 1;
	static int32_t x459 = 1840175;
	uint16_t x460 = 1U;

    t113 = ((x457&(x458!=x459))+x460);

    if (t113 != 1U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x463 = INT16_MAX;
	static volatile int32_t t114 = 114;

    t114 = ((x461&(x462!=x463))+x464);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x465 = -1LL;
	int8_t x466 = INT8_MIN;
	volatile uint64_t x468 = 2045LLU;
	uint64_t t115 = 48846608685LLU;

    t115 = ((x465&(x466!=x467))+x468);

    if (t115 != 2046LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = 50196293;
	static int16_t x470 = -1;
	int16_t x471 = INT16_MIN;
	int32_t x472 = -1;
	volatile int32_t t116 = -75823127;

    t116 = ((x469&(x470!=x471))+x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x473 = 540585U;
	int64_t x474 = -887070LL;
	int32_t x475 = -370064;
	int8_t x476 = INT8_MAX;
	uint32_t t117 = 214323U;

    t117 = ((x473&(x474!=x475))+x476);

    if (t117 != 128U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x478 = -1;
	uint32_t x479 = 0U;
	int32_t x480 = -1;
	uint32_t t118 = 697613037U;

    t118 = ((x477&(x478!=x479))+x480);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x482 = 105799U;
	int16_t x483 = -2;
	static uint64_t x484 = 46533342LLU;
	volatile uint64_t t119 = 1127LLU;

    t119 = ((x481&(x482!=x483))+x484);

    if (t119 != 46533343LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x485 = 583533091969LLU;
	int16_t x486 = INT16_MAX;
	int16_t x487 = -1;
	static uint64_t x488 = UINT64_MAX;
	volatile uint64_t t120 = 0LLU;

    t120 = ((x485&(x486!=x487))+x488);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x490 = INT8_MIN;
	volatile int64_t x491 = 313067557LL;
	uint64_t t121 = 8912218063591130LLU;

    t121 = ((x489&(x490!=x491))+x492);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x493 = UINT8_MAX;
	int8_t x494 = -1;
	int16_t x495 = -1;
	volatile uint32_t t122 = 699225U;

    t122 = ((x493&(x494!=x495))+x496);

    if (t122 != 1163021679U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = -1;
	int8_t x499 = INT8_MIN;
	uint32_t x500 = 7985U;
	uint32_t t123 = 4139136U;

    t123 = ((x497&(x498!=x499))+x500);

    if (t123 != 7986U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	int8_t x502 = INT8_MAX;
	static uint16_t x503 = UINT16_MAX;
	int16_t x504 = -2431;
	volatile uint32_t t124 = 8219469U;

    t124 = ((x501&(x502!=x503))+x504);

    if (t124 != 4294964866U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x505 = -181;
	int16_t x506 = -1;
	uint16_t x508 = 6919U;

    t125 = ((x505&(x506!=x507))+x508);

    if (t125 != 6920) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x509 = 6;
	int32_t x510 = INT32_MIN;
	uint64_t x511 = 16869005619264LLU;
	int64_t x512 = INT64_MIN;
	volatile int64_t t126 = INT64_MIN;

    t126 = ((x509&(x510!=x511))+x512);

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x513 = INT8_MAX;
	int8_t x515 = 9;
	uint16_t x516 = 16U;

    t127 = ((x513&(x514!=x515))+x516);

    if (t127 != 17) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x526 = UINT16_MAX;
	uint64_t x528 = 1491LLU;
	volatile uint64_t t128 = 270LLU;

    t128 = ((x525&(x526!=x527))+x528);

    if (t128 != 1491LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x530 = -12729;
	static volatile uint64_t t129 = 197LLU;

    t129 = ((x529&(x530!=x531))+x532);

    if (t129 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x535 = 88155U;
	int64_t x536 = INT64_MIN;
	int64_t t130 = INT64_MIN;

    t130 = ((x533&(x534!=x535))+x536);

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x537 = 1699340U;
	volatile uint32_t x538 = 285140841U;
	int64_t x539 = INT64_MIN;
	int16_t x540 = -1;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = ((x537&(x538!=x539))+x540);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x542 = INT16_MIN;

    t132 = ((x541&(x542!=x543))+x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x546 = INT16_MIN;
	uint8_t x547 = UINT8_MAX;
	volatile int8_t x548 = 1;
	volatile int32_t t133 = 897448;

    t133 = ((x545&(x546!=x547))+x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x549 = 47586736U;
	int32_t x551 = -10184228;
	static int32_t x552 = INT32_MIN;
	volatile uint32_t t134 = 441U;

    t134 = ((x549&(x550!=x551))+x552);

    if (t134 != 2147483648U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	volatile int32_t x555 = 4412572;
	int32_t t135 = 964;

    t135 = ((x553&(x554!=x555))+x556);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x557 = -1;
	volatile int32_t x558 = INT32_MAX;
	static int64_t x559 = INT64_MIN;
	volatile int32_t x560 = 15;
	static int32_t t136 = 300619822;

    t136 = ((x557&(x558!=x559))+x560);

    if (t136 != 16) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x563 = INT8_MIN;
	uint64_t x564 = UINT64_MAX;
	volatile uint64_t t137 = 1284164LLU;

    t137 = ((x561&(x562!=x563))+x564);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x565 = 81767605213860LLU;
	volatile uint64_t x566 = 1650598393280LLU;
	static uint16_t x568 = UINT16_MAX;
	uint64_t t138 = 11241393956LLU;

    t138 = ((x565&(x566!=x567))+x568);

    if (t138 != 65535LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = -1;
	static int16_t x571 = INT16_MIN;
	int32_t x572 = -1060138;
	volatile int32_t t139 = 451;

    t139 = ((x569&(x570!=x571))+x572);

    if (t139 != -1060137) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x578 = 9U;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t140 = 1;

    t140 = ((x577&(x578!=x579))+x580);

    if (t140 != 256) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int32_t x582 = -20466166;
	int8_t x583 = -1;
	volatile int64_t x584 = -1LL;

    t141 = ((x581&(x582!=x583))+x584);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -60820812257686LL;
	volatile uint32_t x586 = 1673U;
	int64_t x587 = 7758387271092LL;
	volatile int64_t x588 = INT64_MIN;
	int64_t t142 = INT64_MIN;

    t142 = ((x585&(x586!=x587))+x588);

    if (t142 != INT64_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x589 = 188989559472LLU;
	int8_t x592 = -1;

    t143 = ((x589&(x590!=x591))+x592);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = UINT32_MAX;
	int8_t x594 = -1;
	int32_t x595 = INT32_MIN;
	int32_t x596 = INT32_MIN;
	static uint32_t t144 = 1U;

    t144 = ((x593&(x594!=x595))+x596);

    if (t144 != 2147483649U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x597 = 0;
	int8_t x599 = INT8_MAX;
	int16_t x600 = -477;
	volatile int32_t t145 = 1439624;

    t145 = ((x597&(x598!=x599))+x600);

    if (t145 != -477) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = UINT8_MAX;
	uint16_t x602 = 17669U;
	static int16_t x603 = -63;
	uint8_t x604 = 7U;
	int32_t t146 = 37304;

    t146 = ((x601&(x602!=x603))+x604);

    if (t146 != 8) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x605 = -1;
	uint64_t x606 = 334324LLU;
	static volatile int8_t x608 = INT8_MIN;
	static volatile int32_t t147 = -7306535;

    t147 = ((x605&(x606!=x607))+x608);

    if (t147 != -127) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x609 = INT32_MAX;
	uint64_t x611 = UINT64_MAX;
	uint8_t x612 = 21U;
	int32_t t148 = 20851717;

    t148 = ((x609&(x610!=x611))+x612);

    if (t148 != 22) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x613 = INT16_MAX;
	volatile int32_t t149 = 7745;

    t149 = ((x613&(x614!=x615))+x616);

    if (t149 != -34754357) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x617 = 6;
	volatile int64_t x618 = INT64_MIN;
	int16_t x619 = -1;
	int64_t x620 = -1LL;
	int64_t t150 = -13041LL;

    t150 = ((x617&(x618!=x619))+x620);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = -1;
	uint16_t x623 = UINT16_MAX;
	volatile uint8_t x624 = 0U;
	int32_t t151 = 830268;

    t151 = ((x621&(x622!=x623))+x624);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = -1;
	int8_t x626 = INT8_MIN;
	int16_t x627 = 5;
	static volatile uint16_t x628 = 2073U;

    t152 = ((x625&(x626!=x627))+x628);

    if (t152 != 2074) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x637 = -1;
	volatile int16_t x640 = 428;
	static volatile int32_t t153 = 29250327;

    t153 = ((x637&(x638!=x639))+x640);

    if (t153 != 429) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x641 = 1U;
	uint8_t x643 = 2U;
	int8_t x644 = INT8_MIN;
	static int32_t t154 = -1782674;

    t154 = ((x641&(x642!=x643))+x644);

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x645 = 2;
	static int32_t x646 = INT32_MIN;
	int64_t x647 = 4637639LL;
	int16_t x648 = -157;
	int32_t t155 = 2;

    t155 = ((x645&(x646!=x647))+x648);

    if (t155 != -157) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x649 = INT32_MIN;
	volatile int8_t x650 = 54;
	int8_t x651 = INT8_MIN;
	static uint64_t x652 = UINT64_MAX;
	uint64_t t156 = UINT64_MAX;

    t156 = ((x649&(x650!=x651))+x652);

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x653 = INT64_MIN;
	static int8_t x654 = 45;
	static uint64_t x655 = 212545130306724LLU;
	uint32_t x656 = 13523U;
	int64_t t157 = -6LL;

    t157 = ((x653&(x654!=x655))+x656);

    if (t157 != 13523LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x657 = -1;
	static int8_t x658 = INT8_MIN;
	static volatile uint16_t x659 = UINT16_MAX;
	uint8_t x660 = 97U;
	int32_t t158 = -848039;

    t158 = ((x657&(x658!=x659))+x660);

    if (t158 != 98) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x661 = -1;
	int64_t x662 = INT64_MIN;
	static uint32_t x663 = 782883370U;
	int32_t t159 = -710639;

    t159 = ((x661&(x662!=x663))+x664);

    if (t159 != 65536) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x665 = -107965604;
	static int16_t x668 = INT16_MIN;
	int32_t t160 = 36;

    t160 = ((x665&(x666!=x667))+x668);

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x669 = INT32_MAX;
	int32_t x670 = 405686;
	static volatile uint64_t x671 = UINT64_MAX;
	int32_t x672 = -1335093;
	volatile int32_t t161 = 234;

    t161 = ((x669&(x670!=x671))+x672);

    if (t161 != -1335092) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MAX;
	int64_t t162 = INT64_MIN;

    t162 = ((x673&(x674!=x675))+x676);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x678 = 11U;
	int16_t x680 = INT16_MIN;
	volatile uint64_t t163 = 1051789767021976LLU;

    t163 = ((x677&(x678!=x679))+x680);

    if (t163 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x684 = 36;

    t164 = ((x681&(x682!=x683))+x684);

    if (t164 != 37) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x685 = -1LL;
	static volatile int32_t x687 = -2359818;
	volatile int64_t t165 = -65455LL;

    t165 = ((x685&(x686!=x687))+x688);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x690 = -3509904008157519LL;
	int32_t x691 = -1891837;
	static volatile int16_t x692 = INT16_MAX;
	static volatile int32_t t166 = -1;

    t166 = ((x689&(x690!=x691))+x692);

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x693 = 2U;
	uint8_t x694 = 62U;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = INT64_MAX;
	static int64_t t167 = INT64_MAX;

    t167 = ((x693&(x694!=x695))+x696);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x697 = 3;
	int32_t x698 = INT32_MIN;
	uint32_t x699 = 23U;
	int8_t x700 = 0;

    t168 = ((x697&(x698!=x699))+x700);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x701 = INT64_MAX;
	int32_t x702 = INT32_MIN;
	uint8_t x704 = 15U;

    t169 = ((x701&(x702!=x703))+x704);

    if (t169 != 16LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x705 = 31357892LLU;
	int32_t x706 = INT32_MIN;
	int32_t x708 = -1;

    t170 = ((x705&(x706!=x707))+x708);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x709 = INT32_MIN;
	static volatile int32_t x711 = -685;
	volatile int64_t x712 = -2092277046LL;

    t171 = ((x709&(x710!=x711))+x712);

    if (t171 != -2092277046LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = 20U;
	int8_t x714 = -1;
	static volatile uint8_t x715 = 12U;
	uint64_t x716 = UINT64_MAX;

    t172 = ((x713&(x714!=x715))+x716);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = 64711626291LL;
	uint32_t x719 = 191160940U;

    t173 = ((x717&(x718!=x719))+x720);

    if (t173 != -127LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x721 = INT32_MIN;
	uint16_t x724 = UINT16_MAX;
	int32_t t174 = -1312;

    t174 = ((x721&(x722!=x723))+x724);

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x725 = INT8_MAX;
	int16_t x726 = INT16_MAX;
	uint32_t x728 = 115203368U;
	volatile uint32_t t175 = 2556U;

    t175 = ((x725&(x726!=x727))+x728);

    if (t175 != 115203369U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint8_t x730 = 62U;
	int64_t x731 = 425473763083LL;
	static uint64_t x732 = 154056352045LLU;
	uint64_t t176 = 1029837563720LLU;

    t176 = ((x729&(x730!=x731))+x732);

    if (t176 != 154056352046LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x733 = UINT8_MAX;
	volatile int64_t x734 = INT64_MIN;
	int8_t x735 = INT8_MIN;
	volatile int64_t x736 = 174701LL;
	int64_t t177 = -59735481647736990LL;

    t177 = ((x733&(x734!=x735))+x736);

    if (t177 != 174702LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x737 = UINT64_MAX;
	static int32_t x739 = -1;
	int8_t x740 = -1;
	static volatile uint64_t t178 = UINT64_MAX;

    t178 = ((x737&(x738!=x739))+x740);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x741 = 100U;
	static int32_t x742 = INT32_MAX;
	static int64_t x743 = INT64_MIN;
	int8_t x744 = INT8_MIN;
	volatile int32_t t179 = 0;

    t179 = ((x741&(x742!=x743))+x744);

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x745 = -7;
	static int16_t x746 = -1;
	int32_t x747 = INT32_MAX;
	uint16_t x748 = UINT16_MAX;
	int32_t t180 = -2;

    t180 = ((x745&(x746!=x747))+x748);

    if (t180 != 65536) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = -1;
	int32_t x751 = -1;
	int32_t x752 = INT32_MIN;
	int32_t t181 = 220783455;

    t181 = ((x749&(x750!=x751))+x752);

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x753 = -1657896;
	volatile uint16_t x754 = 598U;
	uint8_t x755 = UINT8_MAX;
	uint32_t x756 = 93840U;
	static volatile uint32_t t182 = 1681807193U;

    t182 = ((x753&(x754!=x755))+x756);

    if (t182 != 93840U) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x757 = -15160890;
	uint8_t x758 = 26U;
	static int32_t x760 = INT32_MIN;

    t183 = ((x757&(x758!=x759))+x760);

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x761 = INT16_MAX;
	int16_t x762 = INT16_MAX;
	volatile uint16_t x764 = 188U;
	int32_t t184 = 13420;

    t184 = ((x761&(x762!=x763))+x764);

    if (t184 != 188) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x772 = INT8_MIN;
	volatile int64_t t185 = 341509LL;

    t185 = ((x769&(x770!=x771))+x772);

    if (t185 != -127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x773 = 18U;
	int8_t x776 = 3;
	static volatile int32_t t186 = 17649358;

    t186 = ((x773&(x774!=x775))+x776);

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x777 = INT64_MIN;
	static int32_t x778 = -1;
	uint64_t x779 = 8116457085117061114LLU;
	int32_t x780 = INT32_MIN;
	int64_t t187 = 227260378699639304LL;

    t187 = ((x777&(x778!=x779))+x780);

    if (t187 != -2147483648LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x781 = INT8_MIN;
	volatile int64_t x782 = 10LL;
	int64_t x784 = INT64_MIN;
	volatile int64_t t188 = INT64_MIN;

    t188 = ((x781&(x782!=x783))+x784);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	int8_t x786 = -1;
	uint16_t x788 = UINT16_MAX;
	int32_t t189 = -1057038;

    t189 = ((x785&(x786!=x787))+x788);

    if (t189 != 65536) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x789 = INT8_MIN;
	uint32_t x790 = 16825U;
	uint16_t x791 = 118U;
	int64_t x792 = 4097403610455LL;
	volatile int64_t t190 = -18259728539329453LL;

    t190 = ((x789&(x790!=x791))+x792);

    if (t190 != 4097403610455LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x794 = INT8_MIN;
	int64_t x795 = INT64_MAX;
	uint8_t x796 = 51U;

    t191 = ((x793&(x794!=x795))+x796);

    if (t191 != 51) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x797 = 4;
	static int32_t x800 = -1;
	int32_t t192 = 29;

    t192 = ((x797&(x798!=x799))+x800);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x801 = INT32_MIN;
	uint64_t x802 = 873217761005LLU;
	volatile int16_t x803 = INT16_MIN;
	int32_t t193 = -1087;

    t193 = ((x801&(x802!=x803))+x804);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x806 = UINT16_MAX;
	volatile int32_t x807 = 198;
	int32_t x808 = -1;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = ((x805&(x806!=x807))+x808);

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x809 = 3137LLU;
	int64_t x810 = -589069861LL;
	int32_t x811 = -129752;
	int8_t x812 = -1;

    t195 = ((x809&(x810!=x811))+x812);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t t196 = 3066;

    t196 = ((x813&(x814!=x815))+x816);

    if (t196 != 473) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x818 = UINT8_MAX;
	static uint8_t x819 = UINT8_MAX;
	volatile uint32_t x820 = 9835730U;
	uint32_t t197 = 144655939U;

    t197 = ((x817&(x818!=x819))+x820);

    if (t197 != 9835730U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x821 = INT64_MIN;
	uint32_t x822 = UINT32_MAX;
	uint32_t x823 = 58286U;
	int16_t x824 = INT16_MIN;
	volatile int64_t t198 = -18LL;

    t198 = ((x821&(x822!=x823))+x824);

    if (t198 != -32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = 2354021152830LL;
	int64_t x827 = -20039980756717214LL;
	volatile int64_t x828 = INT64_MAX;
	int64_t t199 = INT64_MAX;

    t199 = ((x825&(x826!=x827))+x828);

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

