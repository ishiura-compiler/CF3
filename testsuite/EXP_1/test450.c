
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

int8_t x8 = 0;
int16_t x9 = -5;
volatile int16_t x11 = INT16_MIN;
uint16_t x30 = 26U;
uint32_t x45 = 79127990U;
static int16_t x46 = INT16_MIN;
uint32_t x48 = 5475U;
static int32_t x50 = 195716232;
volatile int16_t x51 = INT16_MIN;
static int64_t t7 = 17288869729172110LL;
volatile int16_t x66 = -1;
uint8_t x73 = 34U;
static uint16_t x75 = UINT16_MAX;
volatile uint32_t t11 = 1U;
int32_t x87 = INT32_MIN;
static uint8_t x101 = 34U;
int8_t x107 = -1;
uint64_t t17 = 55916235984LLU;
volatile int16_t x116 = -7948;
int64_t x122 = 377060286785LL;
volatile uint16_t x137 = 224U;
uint32_t x155 = 8706281U;
uint64_t x159 = UINT64_MAX;
volatile uint64_t t25 = 100LLU;
uint32_t t27 = 0U;
int64_t x180 = INT64_MIN;
int64_t x185 = -1LL;
int32_t x191 = INT32_MAX;
uint32_t x192 = 363203U;
static uint64_t t32 = 256LLU;
uint64_t x193 = 43LLU;
volatile int16_t x201 = INT16_MAX;
static int32_t x204 = -110183;
uint8_t x217 = UINT8_MAX;
static int8_t x225 = INT8_MIN;
int8_t x239 = INT8_MIN;
static volatile int32_t t39 = -1;
int8_t x244 = INT8_MIN;
uint64_t x247 = 3799680566LLU;
volatile uint32_t x251 = 90802502U;
int64_t x263 = INT64_MAX;
int8_t x269 = INT8_MIN;
int8_t x273 = -6;
uint64_t x281 = 16195066300366LLU;
volatile uint32_t t51 = 271745302U;
int64_t x317 = -1LL;
int64_t x320 = -865546318248458723LL;
uint32_t t55 = 470U;
static int8_t x328 = INT8_MIN;
int16_t x332 = -1914;
uint8_t x333 = UINT8_MAX;
int16_t x337 = 0;
int32_t x339 = INT32_MIN;
static volatile int32_t t59 = -2029;
int8_t x345 = INT8_MAX;
static int16_t x347 = INT16_MIN;
volatile int32_t t61 = -595116417;
static int64_t x349 = 56672LL;
static int64_t x354 = 0LL;
volatile int64_t t63 = -22932LL;
int8_t x360 = INT8_MIN;
static volatile uint16_t x362 = 7637U;
volatile int64_t t66 = 893LL;
static volatile uint64_t t67 = 104LLU;
volatile uint64_t t68 = 15461295624441471LLU;
int8_t x395 = -1;
volatile int32_t x422 = INT32_MAX;
int8_t x430 = INT8_MAX;
volatile int32_t t74 = 4324;
static uint16_t x433 = 6U;
static volatile uint32_t x434 = 108U;
static uint64_t x435 = UINT64_MAX;
uint64_t x446 = 11LLU;
static uint8_t x449 = 1U;
static int16_t x453 = -18;
volatile int64_t x455 = -1LL;
volatile int8_t x459 = 13;
static uint64_t t81 = 280329318LLU;
int32_t x482 = INT32_MIN;
static int32_t x483 = INT32_MAX;
int32_t x490 = 102;
static uint64_t x501 = UINT64_MAX;
uint64_t t85 = 833128928226423LLU;
uint64_t t86 = 12259518LLU;
int8_t x513 = INT8_MAX;
uint64_t t89 = 147374191546LLU;
volatile uint16_t x526 = 87U;
volatile int16_t x530 = INT16_MAX;
int8_t x540 = INT8_MAX;
static volatile uint64_t t93 = 6LLU;
volatile int16_t x548 = -1;
int32_t x552 = -1;
int16_t x553 = INT16_MIN;
volatile int64_t x555 = INT64_MIN;
int16_t x580 = INT16_MIN;
volatile uint64_t x584 = 234583067LLU;
int16_t x592 = INT16_MAX;
volatile uint64_t x601 = 3466662333813LLU;
int16_t x602 = -1;
static volatile int64_t x603 = INT64_MIN;
static int32_t x613 = INT32_MIN;
int8_t x614 = 1;
uint16_t x619 = 1279U;
int16_t x625 = INT16_MIN;
static uint8_t x628 = 0U;
int8_t x638 = INT8_MIN;
uint8_t x644 = 107U;
uint64_t t112 = 16524452687263LLU;
volatile uint32_t x654 = 160101U;
uint8_t x656 = UINT8_MAX;
int16_t x660 = 0;
volatile int16_t x661 = -1;
uint64_t x667 = UINT64_MAX;
uint64_t t116 = 180092229073995790LLU;
static int16_t x733 = INT16_MIN;
volatile int16_t x737 = 1157;
static uint8_t x740 = 0U;
int64_t x741 = 895LL;
uint32_t t129 = 782U;
uint32_t x763 = 994277U;
uint16_t x772 = 104U;
int8_t x774 = -12;
int8_t x775 = INT8_MAX;
uint64_t t134 = 792665771481160LLU;
int8_t x807 = INT8_MAX;
uint64_t t140 = 4306084052226LLU;
volatile int16_t x833 = 2;
int32_t x834 = -363;
int32_t t142 = -2793090;
uint16_t x847 = 2U;
static uint32_t x848 = 4862U;
int32_t x849 = -5;
int16_t x853 = INT16_MIN;
static uint8_t x854 = 56U;
int32_t x855 = INT32_MAX;
int32_t t145 = -6119201;
volatile int16_t x865 = -208;
uint32_t x870 = 36746U;
uint16_t x871 = 3U;
int64_t x872 = -1LL;
static int32_t x882 = -1;
static int32_t x883 = -265952806;
int16_t x886 = -911;
volatile int8_t x888 = 0;
int8_t x894 = INT8_MIN;
uint64_t x897 = UINT64_MAX;
static volatile int32_t x902 = -1;
int8_t x919 = -1;
volatile uint64_t t155 = 6LLU;
int32_t x930 = -1;
int64_t x931 = INT64_MIN;
int16_t x937 = INT16_MIN;
uint16_t x939 = 1491U;
volatile int64_t x945 = 990554844LL;
static int8_t x950 = 0;
volatile int64_t t162 = 7544420112LL;
volatile int8_t x966 = INT8_MIN;
int16_t x968 = INT16_MAX;
volatile int32_t t164 = 0;
int8_t x977 = INT8_MAX;
uint64_t x978 = 0LLU;
int8_t x985 = 1;
uint64_t x996 = UINT64_MAX;
volatile uint64_t t169 = 889409870076393054LLU;
int16_t x1001 = -1;
volatile int32_t x1002 = 240894691;
static uint16_t x1003 = UINT16_MAX;
uint64_t x1012 = 284620682503020LLU;
static int32_t x1014 = -1;
int32_t x1028 = -1;
int32_t x1039 = 15843;
static int32_t x1041 = INT32_MIN;
int32_t x1051 = INT32_MIN;
uint16_t x1053 = UINT16_MAX;
static int16_t x1055 = -5788;
int8_t x1056 = INT8_MIN;
static int32_t x1070 = 37083;
volatile int32_t x1071 = INT32_MIN;
static volatile int8_t x1074 = INT8_MIN;
static uint64_t x1079 = 5805908652262321863LLU;
int16_t x1088 = INT16_MAX;
int16_t x1091 = -7;
uint16_t x1098 = 614U;
volatile int16_t x1101 = INT16_MIN;
int64_t x1111 = 398572589LL;
static uint64_t x1120 = 513561365955LLU;
volatile uint64_t t188 = 11363028LLU;
static int16_t x1121 = 242;
uint8_t x1122 = 2U;
int32_t x1124 = INT32_MAX;
volatile int32_t t189 = -2382;
int32_t x1129 = -1;
static int8_t x1130 = INT8_MIN;
int8_t x1139 = INT8_MIN;
static int8_t x1148 = INT8_MAX;
int16_t x1154 = -88;
uint16_t x1157 = 286U;
int64_t x1162 = 99094271LL;
static int64_t t196 = -540712637857591108LL;
int8_t x1167 = -31;
uint16_t x1168 = UINT16_MAX;


void f0(void) {
    	uint16_t x5 = 99U;
	uint8_t x6 = 36U;
	volatile int16_t x7 = INT16_MIN;
	int32_t t0 = 28954;

    t0 = (((x5*x6)%x7)-x8);

    if (t0 != 3564) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = INT8_MAX;
	int64_t x12 = -1LL;
	int64_t t1 = -8724072120997LL;

    t1 = (((x9*x10)%x11)-x12);

    if (t1 != -634LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = INT64_MIN;
	static volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	static uint32_t x20 = UINT32_MAX;
	uint64_t t2 = 469LLU;

    t2 = (((x17*x18)%x19)-x20);

    if (t2 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x29 = -1887;
	volatile uint64_t x31 = 515LLU;
	uint16_t x32 = UINT16_MAX;
	static volatile uint64_t t3 = 747184050119LLU;

    t3 = (((x29*x30)%x31)-x32);

    if (t3 != 18446744073709486205LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x33 = 104U;
	int16_t x34 = INT16_MAX;
	int16_t x35 = -1;
	int32_t x36 = INT32_MIN;
	uint32_t t4 = 871609542U;

    t4 = (((x33*x34)%x35)-x36);

    if (t4 != 2150891416U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x47 = UINT16_MAX;
	volatile uint32_t t5 = 8027U;

    t5 = (((x45*x46)%x47)-x48);

    if (t5 != 14274U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x49 = -1;
	uint8_t x52 = 52U;
	volatile int32_t t6 = -11;

    t6 = (((x49*x50)%x51)-x52);

    if (t6 != -25788) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x61 = INT8_MAX;
	static volatile int8_t x62 = INT8_MAX;
	int16_t x63 = -78;
	int64_t x64 = 36411216129619117LL;

    t7 = (((x61*x62)%x63)-x64);

    if (t7 != -36411216129619056LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x65 = -1;
	volatile uint16_t x67 = 150U;
	int16_t x68 = INT16_MAX;
	volatile int32_t t8 = 6;

    t8 = (((x65*x66)%x67)-x68);

    if (t8 != -32766) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x69 = INT16_MAX;
	uint32_t x70 = 2097290802U;
	int8_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t9 = 1900353930280418LLU;

    t9 = (((x69*x70)%x71)-x72);

    if (t9 != 2450973135LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x74 = UINT32_MAX;
	int16_t x76 = -1;
	uint32_t t10 = 34U;

    t10 = (((x73*x74)%x75)-x76);

    if (t10 != 65503U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x77 = 1062561491U;
	uint32_t x78 = 31815466U;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = INT8_MIN;

    t11 = (((x77*x78)%x79)-x80);

    if (t11 != 239U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x81 = 0U;
	uint32_t x82 = 248394974U;
	uint64_t x83 = 13419039531646LLU;
	uint16_t x84 = 111U;
	static volatile uint64_t t12 = 14335LLU;

    t12 = (((x81*x82)%x83)-x84);

    if (t12 != 18446744073709551505LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x85 = 0LLU;
	int8_t x86 = 1;
	int64_t x88 = INT64_MAX;
	volatile uint64_t t13 = 5760039519305LLU;

    t13 = (((x85*x86)%x87)-x88);

    if (t13 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x93 = INT32_MAX;
	int16_t x94 = -1;
	int32_t x95 = 10969687;
	static volatile int64_t x96 = -14818188455293268LL;
	volatile int64_t t14 = 187LL;

    t14 = (((x93*x94)%x95)-x96);

    if (t14 != 14818188446898586LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x97 = 202626U;
	static int8_t x98 = INT8_MIN;
	static int64_t x99 = -1LL;
	uint64_t x100 = 6482475235411LLU;
	volatile uint64_t t15 = 112996032566507LLU;

    t15 = (((x97*x98)%x99)-x100);

    if (t15 != 18446737591234316205LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x102 = -1;
	uint16_t x103 = 23U;
	int16_t x104 = INT16_MAX;
	volatile int32_t t16 = -223;

    t16 = (((x101*x102)%x103)-x104);

    if (t16 != -32778) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MAX;
	uint64_t x108 = 20553632953394942LLU;

    t17 = (((x105*x106)%x107)-x108);

    if (t17 != 18426190440756156674LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x113 = 1LL;
	volatile uint8_t x114 = UINT8_MAX;
	volatile int32_t x115 = -1;
	int64_t t18 = -59824246599771LL;

    t18 = (((x113*x114)%x115)-x116);

    if (t18 != 7948LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x121 = -82;
	int64_t x123 = INT64_MIN;
	int16_t x124 = INT16_MAX;
	int64_t t19 = 62521231691171728LL;

    t19 = (((x121*x122)%x123)-x124);

    if (t19 != -30918943549137LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 23U;
	uint32_t x128 = 6997U;
	static uint32_t t20 = 11U;

    t20 = (((x125*x126)%x127)-x128);

    if (t20 != 4294960316U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x129 = 0U;
	static int8_t x130 = 7;
	int16_t x131 = -1;
	int16_t x132 = 0;
	int32_t t21 = 5253;

    t21 = (((x129*x130)%x131)-x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x138 = 41U;
	volatile int16_t x139 = INT16_MAX;
	int8_t x140 = 33;
	static volatile int32_t t22 = 171;

    t22 = (((x137*x138)%x139)-x140);

    if (t22 != 9151) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x145 = INT64_MAX;
	int32_t x146 = -1;
	int16_t x147 = 17;
	int32_t x148 = INT32_MIN;
	volatile int64_t t23 = -1197436333LL;

    t23 = (((x145*x146)%x147)-x148);

    if (t23 != 2147483640LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x153 = -4513LL;
	static volatile uint8_t x154 = UINT8_MAX;
	int32_t x156 = -1;
	volatile int64_t t24 = -4103762251LL;

    t24 = (((x153*x154)%x155)-x156);

    if (t24 != -1150814LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x157 = 0;
	uint8_t x158 = 1U;
	int64_t x160 = -1LL;

    t25 = (((x157*x158)%x159)-x160);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x165 = -1;
	int64_t x166 = -1LL;
	int8_t x167 = 1;
	int32_t x168 = 2;
	volatile int64_t t26 = -2477LL;

    t26 = (((x165*x166)%x167)-x168);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x169 = 13290956U;
	int8_t x170 = -7;
	uint16_t x171 = UINT16_MAX;
	uint8_t x172 = UINT8_MAX;

    t27 = (((x169*x170)%x171)-x172);

    if (t27 != 22754U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x173 = -1LL;
	volatile int16_t x174 = INT16_MIN;
	static int64_t x175 = INT64_MIN;
	uint32_t x176 = 2345U;
	int64_t t28 = -6904892858464LL;

    t28 = (((x173*x174)%x175)-x176);

    if (t28 != 30423LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MAX;
	volatile uint64_t t29 = 82431197LLU;

    t29 = (((x177*x178)%x179)-x180);

    if (t29 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x181 = INT16_MAX;
	uint16_t x182 = 3655U;
	int8_t x183 = -41;
	volatile int16_t x184 = 3906;
	volatile int32_t t30 = -10076199;

    t30 = (((x181*x182)%x183)-x184);

    if (t30 != -3899) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = 27910U;
	volatile int64_t t31 = 3216861LL;

    t31 = (((x185*x186)%x187)-x188);

    if (t31 != -27782LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x189 = -5928;
	uint64_t x190 = UINT64_MAX;

    t32 = (((x189*x190)%x191)-x192);

    if (t32 != 18446744073709194341LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x194 = 13764;
	int8_t x195 = INT8_MAX;
	int8_t x196 = -17;
	static uint64_t t33 = 464991860787LLU;

    t33 = (((x193*x194)%x195)-x196);

    if (t33 != 49LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x202 = -37;
	uint64_t x203 = 28251849LLU;
	uint64_t t34 = 2130287378674158317LLU;

    t34 = (((x201*x202)%x203)-x204);

    if (t34 != 5144327LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x205 = 223;
	int8_t x206 = INT8_MIN;
	volatile int64_t x207 = INT64_MIN;
	volatile int64_t x208 = -1270998018LL;
	static volatile int64_t t35 = -672048802595LL;

    t35 = (((x205*x206)%x207)-x208);

    if (t35 != 1270969474LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x218 = INT8_MAX;
	int16_t x219 = -1;
	static int16_t x220 = INT16_MAX;
	int32_t t36 = 61687;

    t36 = (((x217*x218)%x219)-x220);

    if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int16_t x221 = -490;
	int16_t x222 = 14085;
	int8_t x223 = -1;
	uint32_t x224 = 15387711U;
	volatile uint32_t t37 = 177259651U;

    t37 = (((x221*x222)%x223)-x224);

    if (t37 != 4279579585U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x226 = 922820LLU;
	int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	static uint64_t t38 = 140966190375307LLU;

    t38 = (((x225*x226)%x227)-x228);

    if (t38 != 18446744073591430784LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x237 = -80490;
	int32_t x238 = -1;
	volatile int32_t x240 = 4;

    t39 = (((x237*x238)%x239)-x240);

    if (t39 != 102) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x241 = INT16_MIN;
	static int8_t x242 = -1;
	int64_t x243 = -4156836046101455LL;
	static int64_t t40 = 22363283060084729LL;

    t40 = (((x241*x242)%x243)-x244);

    if (t40 != 32896LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x245 = 82346427LLU;
	uint16_t x246 = 1U;
	static volatile uint8_t x248 = UINT8_MAX;
	static volatile uint64_t t41 = 50LLU;

    t41 = (((x245*x246)%x247)-x248);

    if (t41 != 82346172LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x249 = INT32_MAX;
	uint64_t x250 = UINT64_MAX;
	uint64_t x252 = 6513492LLU;
	volatile uint64_t t42 = 13263LLU;

    t42 = (((x249*x250)%x251)-x252);

    if (t42 != 16404019LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x257 = -7;
	static int8_t x258 = INT8_MAX;
	int64_t x259 = -1LL;
	uint16_t x260 = 37U;
	volatile int64_t t43 = -15100593LL;

    t43 = (((x257*x258)%x259)-x260);

    if (t43 != -37LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MIN;
	uint8_t x264 = 0U;
	int64_t t44 = 50LL;

    t44 = (((x261*x262)%x263)-x264);

    if (t44 != 4194304LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x265 = -1;
	static uint32_t x266 = UINT32_MAX;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = INT64_MAX;
	volatile int64_t t45 = -1LL;

    t45 = (((x265*x266)%x267)-x268);

    if (t45 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x270 = UINT16_MAX;
	static uint16_t x271 = 709U;
	uint8_t x272 = 34U;
	int32_t t46 = -177275369;

    t46 = (((x269*x270)%x271)-x272);

    if (t46 != -335) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x274 = 2850;
	static int16_t x275 = INT16_MAX;
	uint32_t x276 = 1U;
	volatile uint32_t t47 = 4U;

    t47 = (((x273*x274)%x275)-x276);

    if (t47 != 4294950195U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x282 = 17257;
	int8_t x283 = -40;
	int32_t x284 = INT32_MIN;
	uint64_t t48 = 223463740709LLU;

    t48 = (((x281*x282)%x283)-x284);

    if (t48 != 279478261292899710LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x285 = 1;
	static int32_t x286 = INT32_MIN;
	uint16_t x287 = 5U;
	static volatile int16_t x288 = 1;
	volatile int32_t t49 = 432939946;

    t49 = (((x285*x286)%x287)-x288);

    if (t49 != -4) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x289 = -8;
	int8_t x290 = -4;
	static int32_t x291 = INT32_MIN;
	volatile uint16_t x292 = 441U;
	int32_t t50 = -54;

    t50 = (((x289*x290)%x291)-x292);

    if (t50 != -409) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x293 = UINT16_MAX;
	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = UINT32_MAX;
	uint32_t x296 = 193158744U;

    t51 = (((x293*x294)%x295)-x296);

    if (t51 != 4101743017U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x309 = INT64_MIN;
	uint16_t x310 = 0U;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 3871349LL;
	static volatile int64_t t52 = 59727284LL;

    t52 = (((x309*x310)%x311)-x312);

    if (t52 != -3871349LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x313 = 0U;
	volatile int64_t x314 = -10313LL;
	int32_t x315 = INT32_MAX;
	int64_t x316 = -2166012974778079524LL;
	static volatile int64_t t53 = 3093LL;

    t53 = (((x313*x314)%x315)-x316);

    if (t53 != 2166012974778079524LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x318 = INT8_MIN;
	int64_t x319 = 70017013355752355LL;
	volatile int64_t t54 = 446LL;

    t54 = (((x317*x318)%x319)-x320);

    if (t54 != 865546318248458851LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x321 = INT8_MIN;
	uint8_t x322 = 1U;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = 12060955U;

    t55 = (((x321*x322)%x323)-x324);

    if (t55 != 4282906213U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	int8_t x327 = -1;
	static int32_t t56 = 13;

    t56 = (((x325*x326)%x327)-x328);

    if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x329 = INT8_MIN;
	volatile uint64_t x330 = 1LLU;
	static int16_t x331 = 318;
	static volatile uint64_t t57 = 8154158550LLU;

    t57 = (((x329*x330)%x331)-x332);

    if (t57 != 2066LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x334 = 0U;
	volatile uint8_t x335 = 56U;
	int16_t x336 = -1;
	static int32_t t58 = -2595301;

    t58 = (((x333*x334)%x335)-x336);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x338 = INT8_MAX;
	uint8_t x340 = UINT8_MAX;

    t59 = (((x337*x338)%x339)-x340);

    if (t59 != -255) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x341 = UINT32_MAX;
	static int32_t x342 = INT32_MAX;
	int16_t x343 = INT16_MIN;
	int32_t x344 = 0;
	uint32_t t60 = 0U;

    t60 = (((x341*x342)%x343)-x344);

    if (t60 != 2147483649U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x346 = -809438;
	int16_t x348 = 480;

    t61 = (((x345*x346)%x347)-x348);

    if (t61 != -5890) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x350 = 3U;
	uint8_t x351 = 11U;
	int8_t x352 = INT8_MIN;
	volatile int64_t t62 = -2359620619323440463LL;

    t62 = (((x349*x350)%x351)-x352);

    if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x353 = INT8_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	static int64_t x356 = 31000850046780068LL;

    t63 = (((x353*x354)%x355)-x356);

    if (t63 != -31000850046780068LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x357 = 2144327LLU;
	static int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	uint64_t t64 = 494978LLU;

    t64 = (((x357*x358)%x359)-x360);

    if (t64 != 128LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x361 = INT16_MIN;
	static volatile int32_t x363 = -2813;
	volatile int16_t x364 = INT16_MIN;
	int32_t t65 = 19668;

    t65 = (((x361*x362)%x363)-x364);

    if (t65 != 30845) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x369 = -1;
	uint32_t x370 = 21U;
	volatile int64_t x371 = -1LL;
	int32_t x372 = INT32_MIN;

    t66 = (((x369*x370)%x371)-x372);

    if (t66 != 2147483648LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x373 = 63U;
	volatile int16_t x374 = INT16_MIN;
	uint16_t x375 = 3267U;
	uint64_t x376 = UINT64_MAX;

    t67 = (((x373*x374)%x375)-x376);

    if (t67 != 18446744073709548710LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x381 = 11321315352813LLU;
	static int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = 5U;

    t68 = (((x381*x382)%x383)-x384);

    if (t68 != 18075767212228575227LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x389 = -1;
	int16_t x390 = INT16_MAX;
	uint8_t x391 = 13U;
	uint64_t x392 = 1273829379029740571LLU;
	static uint64_t t69 = 102111617178LLU;

    t69 = (((x389*x390)%x391)-x392);

    if (t69 != 17172914694679811038LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x393 = -1LL;
	int64_t x394 = -282245581843LL;
	uint8_t x396 = 25U;
	volatile int64_t t70 = 989LL;

    t70 = (((x393*x394)%x395)-x396);

    if (t70 != -25LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x397 = -51;
	uint64_t x398 = 2118172953524558LLU;
	uint32_t x399 = 133958739U;
	volatile int16_t x400 = -1;
	volatile uint64_t t71 = 151136557665365444LLU;

    t71 = (((x397*x398)%x399)-x400);

    if (t71 != 51063506LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x413 = 142U;
	int8_t x414 = INT8_MIN;
	volatile int8_t x415 = INT8_MIN;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t72 = -49579;

    t72 = (((x413*x414)%x415)-x416);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x423 = INT32_MAX;
	int64_t x424 = -1LL;
	volatile int64_t t73 = 2062949773375957LL;

    t73 = (((x421*x422)%x423)-x424);

    if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x429 = 2;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;

    t74 = (((x429*x430)%x431)-x432);

    if (t74 != 32894) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x436 = 17009517U;
	volatile uint64_t t75 = 152474211651179LLU;

    t75 = (((x433*x434)%x435)-x436);

    if (t75 != 18446744073692542747LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x445 = 115U;
	uint16_t x447 = UINT16_MAX;
	int32_t x448 = 20374;
	uint64_t t76 = 416412556304LLU;

    t76 = (((x445*x446)%x447)-x448);

    if (t76 != 18446744073709532507LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x450 = INT64_MIN;
	uint16_t x451 = 23U;
	volatile int8_t x452 = INT8_MIN;
	volatile int64_t t77 = 58781013821472689LL;

    t77 = (((x449*x450)%x451)-x452);

    if (t77 != 125LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int16_t x454 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	int64_t t78 = 16121783848431449LL;

    t78 = (((x453*x454)%x455)-x456);

    if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x458 = -1;
	int8_t x460 = INT8_MIN;
	int64_t t79 = -13716LL;

    t79 = (((x457*x458)%x459)-x460);

    if (t79 != 121LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x465 = UINT8_MAX;
	int64_t x466 = -1LL;
	static int8_t x467 = INT8_MAX;
	uint32_t x468 = 8158087U;
	volatile int64_t t80 = 861433745LL;

    t80 = (((x465*x466)%x467)-x468);

    if (t80 != -8158088LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	int16_t x479 = -1;
	static int64_t x480 = INT64_MAX;

    t81 = (((x477*x478)%x479)-x480);

    if (t81 != 9223372036854808577LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x481 = UINT32_MAX;
	uint8_t x484 = 72U;
	volatile uint32_t t82 = 11685U;

    t82 = (((x481*x482)%x483)-x484);

    if (t82 != 4294967225U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x489 = -1;
	volatile uint8_t x491 = 1U;
	volatile uint8_t x492 = UINT8_MAX;
	volatile int32_t t83 = -5;

    t83 = (((x489*x490)%x491)-x492);

    if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x493 = 14U;
	int8_t x494 = -1;
	int64_t x495 = INT64_MIN;
	int8_t x496 = -5;
	volatile int64_t t84 = 212612366152647488LL;

    t84 = (((x493*x494)%x495)-x496);

    if (t84 != -9LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x502 = 64794530U;
	volatile uint16_t x503 = UINT16_MAX;
	int32_t x504 = INT32_MAX;

    t85 = (((x501*x502)%x503)-x504);

    if (t85 != 18446744071562087555LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x509 = 4382922765593LLU;
	int64_t x510 = INT64_MIN;
	int32_t x511 = -1497;
	int32_t x512 = INT32_MIN;

    t86 = (((x509*x510)%x511)-x512);

    if (t86 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x514 = -1;
	int32_t x515 = INT32_MAX;
	volatile int64_t x516 = 19189LL;
	volatile int64_t t87 = 0LL;

    t87 = (((x513*x514)%x515)-x516);

    if (t87 != -19316LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x517 = INT16_MIN;
	volatile uint64_t x518 = 26568017288LLU;
	int32_t x519 = INT32_MAX;
	volatile uint64_t x520 = 72190947038072287LLU;
	uint64_t t88 = 4151026996929658LLU;

    t88 = (((x517*x518)%x519)-x520);

    if (t88 != 18374553127161545361LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x521 = INT8_MIN;
	uint16_t x522 = 380U;
	static uint64_t x523 = 6778837987018LLU;
	volatile int16_t x524 = INT16_MAX;

    t89 = (((x521*x522)%x523)-x524);

    if (t89 != 672486413159LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x525 = 39U;
	int64_t x527 = -1151041LL;
	uint8_t x528 = 53U;
	int64_t t90 = 96637109LL;

    t90 = (((x525*x526)%x527)-x528);

    if (t90 != 3340LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x531 = 1;
	volatile int8_t x532 = 6;
	static volatile int32_t t91 = 86883516;

    t91 = (((x529*x530)%x531)-x532);

    if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x533 = -39;
	volatile uint32_t x534 = 0U;
	static int64_t x535 = -453322261LL;
	volatile uint64_t x536 = 13010739584LLU;
	uint64_t t92 = 449103499567485LLU;

    t92 = (((x533*x534)%x535)-x536);

    if (t92 != 18446744060698812032LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x537 = 33473407485308261LLU;
	int8_t x538 = INT8_MIN;
	uint32_t x539 = 360811765U;

    t93 = (((x537*x538)%x539)-x540);

    if (t93 != 95543186LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x545 = -111;
	int8_t x546 = INT8_MIN;
	uint16_t x547 = 4U;
	int32_t t94 = -1005;

    t94 = (((x545*x546)%x547)-x548);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 26LLU;
	int32_t x551 = 13;
	uint64_t t95 = 3LLU;

    t95 = (((x549*x550)%x551)-x552);

    if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x554 = 123064443120LLU;
	static volatile uint8_t x556 = 1U;
	uint64_t t96 = 42436351897LLU;

    t96 = (((x553*x554)%x555)-x556);

    if (t96 != 9219339461182619647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x561 = 30;
	uint8_t x562 = 0U;
	int16_t x563 = 193;
	volatile uint8_t x564 = UINT8_MAX;
	volatile int32_t t97 = 238441;

    t97 = (((x561*x562)%x563)-x564);

    if (t97 != -255) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x577 = INT8_MAX;
	uint16_t x578 = UINT16_MAX;
	int8_t x579 = 10;
	volatile int32_t t98 = -82674029;

    t98 = (((x577*x578)%x579)-x580);

    if (t98 != 32773) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x581 = 10U;
	int16_t x582 = 341;
	volatile int16_t x583 = -13067;
	volatile uint64_t t99 = 1706572752LLU;

    t99 = (((x581*x582)%x583)-x584);

    if (t99 != 18446744073474971959LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x585 = -1;
	static volatile int8_t x586 = -1;
	int8_t x587 = INT8_MAX;
	int8_t x588 = INT8_MIN;
	int32_t t100 = 7018835;

    t100 = (((x585*x586)%x587)-x588);

    if (t100 != 129) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x589 = INT16_MIN;
	static int16_t x590 = -30;
	uint64_t x591 = UINT64_MAX;
	volatile uint64_t t101 = 403574596417LLU;

    t101 = (((x589*x590)%x591)-x592);

    if (t101 != 950273LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x597 = INT8_MAX;
	volatile int16_t x598 = 0;
	int32_t x599 = INT32_MIN;
	int8_t x600 = 1;
	int32_t t102 = -33315219;

    t102 = (((x597*x598)%x599)-x600);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x604 = UINT16_MAX;
	uint64_t t103 = 112820LLU;

    t103 = (((x601*x602)%x603)-x604);

    if (t103 != 9223368570192376460LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x605 = INT32_MAX;
	uint64_t x606 = UINT64_MAX;
	static volatile int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MAX;
	static volatile uint64_t t104 = 208125810552203LLU;

    t104 = (((x605*x606)%x607)-x608);

    if (t104 != 9223372034707259394LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x609 = 10553725LLU;
	uint8_t x610 = 59U;
	volatile uint64_t x611 = 3576906868101424LLU;
	int32_t x612 = INT32_MIN;
	uint64_t t105 = 0LLU;

    t105 = (((x609*x610)%x611)-x612);

    if (t105 != 2770153423LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x615 = UINT64_MAX;
	int32_t x616 = -102;
	uint64_t t106 = 3932040150084781521LLU;

    t106 = (((x613*x614)%x615)-x616);

    if (t106 != 18446744071562068070LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x617 = -1LL;
	uint16_t x618 = 1U;
	volatile int16_t x620 = INT16_MIN;
	volatile int64_t t107 = -1880441316663LL;

    t107 = (((x617*x618)%x619)-x620);

    if (t107 != 32767LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x621 = -1LL;
	volatile int32_t x622 = INT32_MIN;
	int64_t x623 = 6338898866862124LL;
	int16_t x624 = -1232;
	int64_t t108 = -67773908600LL;

    t108 = (((x621*x622)%x623)-x624);

    if (t108 != 2147484880LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x626 = UINT32_MAX;
	int32_t x627 = 513;
	volatile uint32_t t109 = 11466U;

    t109 = (((x625*x626)%x627)-x628);

    if (t109 != 449U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x629 = 447LL;
	int32_t x630 = 61426;
	int64_t x631 = INT64_MIN;
	uint16_t x632 = UINT16_MAX;
	volatile int64_t t110 = 120433LL;

    t110 = (((x629*x630)%x631)-x632);

    if (t110 != 27391887LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x637 = -1;
	static uint16_t x639 = 4841U;
	volatile int32_t x640 = -64;
	int32_t t111 = -4139;

    t111 = (((x637*x638)%x639)-x640);

    if (t111 != 192) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x641 = UINT64_MAX;
	static int64_t x642 = INT64_MIN;
	int32_t x643 = INT32_MIN;

    t112 = (((x641*x642)%x643)-x644);

    if (t112 != 9223372036854775701LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	uint32_t x655 = 213628U;
	volatile uint32_t t113 = 59367651U;

    t113 = (((x653*x654)%x655)-x656);

    if (t113 != 29628U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x657 = UINT64_MAX;
	volatile int16_t x658 = INT16_MAX;
	int64_t x659 = -1LL;
	volatile uint64_t t114 = 0LLU;

    t114 = (((x657*x658)%x659)-x660);

    if (t114 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x662 = -1LL;
	volatile int8_t x663 = -6;
	int32_t x664 = INT32_MAX;
	int64_t t115 = -12076LL;

    t115 = (((x661*x662)%x663)-x664);

    if (t115 != -2147483646LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x665 = 19;
	int16_t x666 = INT16_MAX;
	uint16_t x668 = 31306U;

    t116 = (((x665*x666)%x667)-x668);

    if (t116 != 591267LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x673 = UINT8_MAX;
	static volatile uint8_t x674 = 34U;
	uint16_t x675 = 20U;
	int64_t x676 = -1LL;
	static volatile int64_t t117 = -124LL;

    t117 = (((x673*x674)%x675)-x676);

    if (t117 != 11LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x689 = INT8_MIN;
	volatile uint16_t x690 = 3299U;
	uint8_t x691 = UINT8_MAX;
	uint8_t x692 = UINT8_MAX;
	static volatile int32_t t118 = 189807;

    t118 = (((x689*x690)%x691)-x692);

    if (t118 != -502) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x693 = 203876606046735LLU;
	static int64_t x694 = -1LL;
	volatile int64_t x695 = 134003LL;
	static int32_t x696 = -13;
	volatile uint64_t t119 = 3072114408LLU;

    t119 = (((x693*x694)%x695)-x696);

    if (t119 != 126286LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x705 = -1;
	uint32_t x706 = 14545U;
	int16_t x707 = INT16_MIN;
	static uint64_t x708 = UINT64_MAX;
	uint64_t t120 = 6215405LLU;

    t120 = (((x705*x706)%x707)-x708);

    if (t120 != 18224LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x709 = 92U;
	int16_t x710 = INT16_MIN;
	int16_t x711 = INT16_MAX;
	static uint32_t x712 = UINT32_MAX;
	static volatile uint32_t t121 = 967448353U;

    t121 = (((x709*x710)%x711)-x712);

    if (t121 != 4294967205U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x717 = 0;
	int32_t x718 = INT32_MIN;
	uint8_t x719 = UINT8_MAX;
	int32_t x720 = -220091799;
	int32_t t122 = 0;

    t122 = (((x717*x718)%x719)-x720);

    if (t122 != 220091799) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x721 = INT16_MIN;
	volatile int64_t x722 = -1LL;
	int16_t x723 = 4;
	int16_t x724 = INT16_MIN;
	int64_t t123 = -6272230528LL;

    t123 = (((x721*x722)%x723)-x724);

    if (t123 != 32768LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x734 = UINT16_MAX;
	uint16_t x735 = 113U;
	int32_t x736 = -1;
	volatile int32_t t124 = 25100;

    t124 = (((x733*x734)%x735)-x736);

    if (t124 != -9) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x738 = 1971U;
	uint32_t x739 = 533868622U;
	volatile uint32_t t125 = 265542U;

    t125 = (((x737*x738)%x739)-x740);

    if (t125 != 2280447U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x742 = 37U;
	int8_t x743 = INT8_MIN;
	volatile int8_t x744 = INT8_MIN;
	volatile int64_t t126 = 15380598LL;

    t126 = (((x741*x742)%x743)-x744);

    if (t126 != 219LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x749 = -1;
	static uint8_t x750 = UINT8_MAX;
	int16_t x751 = 1;
	uint64_t x752 = 19946LLU;
	static volatile uint64_t t127 = 5497247162908095714LLU;

    t127 = (((x749*x750)%x751)-x752);

    if (t127 != 18446744073709531670LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x753 = 0;
	uint32_t x754 = 30106U;
	static volatile int16_t x755 = -2165;
	uint64_t x756 = UINT64_MAX;
	uint64_t t128 = 551026850349043697LLU;

    t128 = (((x753*x754)%x755)-x756);

    if (t128 != 1LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x757 = UINT32_MAX;
	uint8_t x758 = 1U;
	int16_t x759 = -48;
	int8_t x760 = 1;

    t129 = (((x757*x758)%x759)-x760);

    if (t129 != 46U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x761 = 27U;
	int64_t x762 = -1LL;
	int8_t x764 = INT8_MIN;
	int64_t t130 = -153LL;

    t130 = (((x761*x762)%x763)-x764);

    if (t130 != 101LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x769 = -483;
	uint32_t x770 = UINT32_MAX;
	volatile uint64_t x771 = 19338209381LLU;
	volatile uint64_t t131 = 542LLU;

    t131 = (((x769*x770)%x771)-x772);

    if (t131 != 379LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x773 = 137871922U;
	int64_t x776 = -3522LL;
	int64_t t132 = 192326LL;

    t132 = (((x773*x774)%x775)-x776);

    if (t132 != 3637LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x777 = 92043958286LL;
	int32_t x778 = -1;
	uint16_t x779 = 101U;
	static uint16_t x780 = UINT16_MAX;
	volatile int64_t t133 = -1690LL;

    t133 = (((x777*x778)%x779)-x780);

    if (t133 != -65602LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x781 = 2987257675LL;
	static uint16_t x782 = UINT16_MAX;
	uint64_t x783 = 68383687507549LLU;
	int16_t x784 = -1;

    t134 = (((x781*x782)%x783)-x784);

    if (t134 != 59002556716028LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x793 = -2622;
	uint8_t x794 = 2U;
	volatile uint32_t x795 = UINT32_MAX;
	static uint8_t x796 = UINT8_MAX;
	uint32_t t135 = 44380U;

    t135 = (((x793*x794)%x795)-x796);

    if (t135 != 4294961797U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x805 = INT8_MIN;
	uint16_t x806 = 0U;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t136 = 34086;

    t136 = (((x805*x806)%x807)-x808);

    if (t136 != -255) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x809 = UINT64_MAX;
	static int64_t x810 = INT64_MAX;
	int32_t x811 = INT32_MAX;
	uint64_t x812 = 4323917258LLU;
	uint64_t t137 = 3529416349453LLU;

    t137 = (((x809*x810)%x811)-x812);

    if (t137 != 18446744069385634361LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x813 = 4067090506652LLU;
	int32_t x814 = INT32_MIN;
	uint32_t x815 = UINT32_MAX;
	int8_t x816 = INT8_MIN;
	static uint64_t t138 = 459675499970725254LLU;

    t138 = (((x813*x814)%x815)-x816);

    if (t138 != 2269245106LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x825 = 330456;
	static uint32_t x826 = 2609U;
	volatile int32_t x827 = 324313351;
	int32_t x828 = INT32_MAX;
	uint32_t t139 = 2736U;

    t139 = (((x825*x826)%x827)-x828);

    if (t139 != 2361016651U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x829 = INT16_MIN;
	volatile uint64_t x830 = 240034810LLU;
	static int8_t x831 = INT8_MAX;
	int8_t x832 = -7;

    t140 = (((x829*x830)%x831)-x832);

    if (t140 != 41LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x835 = UINT32_MAX;
	int8_t x836 = INT8_MIN;
	uint32_t t141 = 1945U;

    t141 = (((x833*x834)%x835)-x836);

    if (t141 != 4294966698U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x837 = -1;
	int16_t x838 = INT16_MIN;
	static int16_t x839 = -1;
	int8_t x840 = 6;

    t142 = (((x837*x838)%x839)-x840);

    if (t142 != -6) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x845 = 96U;
	uint64_t x846 = 2940LLU;
	uint64_t t143 = 6843962604LLU;

    t143 = (((x845*x846)%x847)-x848);

    if (t143 != 18446744073709546754LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x850 = 1318663LLU;
	volatile int16_t x851 = INT16_MIN;
	volatile int8_t x852 = -1;
	uint64_t t144 = 9LLU;

    t144 = (((x849*x850)%x851)-x852);

    if (t144 != 18446744073702958302LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x856 = 77U;

    t145 = (((x853*x854)%x855)-x856);

    if (t145 != -1835085) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x866 = 16LL;
	uint32_t x867 = 10361417U;
	int8_t x868 = -1;
	int64_t t146 = 3906927221431203LL;

    t146 = (((x865*x866)%x867)-x868);

    if (t146 != -3327LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x869 = INT32_MIN;
	int64_t t147 = 35031962228282964LL;

    t147 = (((x869*x870)%x871)-x872);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x873 = INT64_MIN;
	static uint64_t x874 = UINT64_MAX;
	static int8_t x875 = INT8_MIN;
	static uint16_t x876 = UINT16_MAX;
	uint64_t t148 = 3789392968LLU;

    t148 = (((x873*x874)%x875)-x876);

    if (t148 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x881 = 373U;
	int32_t x884 = INT32_MIN;
	static uint32_t t149 = 12021811U;

    t149 = (((x881*x882)%x883)-x884);

    if (t149 != 2413436081U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x885 = 47660LL;
	int8_t x887 = INT8_MAX;
	int64_t t150 = -237190100224252706LL;

    t150 = (((x885*x886)%x887)-x888);

    if (t150 != -8LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x893 = UINT8_MAX;
	int32_t x895 = -19;
	static uint64_t x896 = UINT64_MAX;
	static uint64_t t151 = 1300321994604LLU;

    t151 = (((x893*x894)%x895)-x896);

    if (t151 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x898 = -421671392;
	static int64_t x899 = -1LL;
	uint64_t x900 = UINT64_MAX;
	volatile uint64_t t152 = 911128365876562512LLU;

    t152 = (((x897*x898)%x899)-x900);

    if (t152 != 421671393LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x901 = INT64_MAX;
	int8_t x903 = INT8_MIN;
	int8_t x904 = -1;
	static volatile int64_t t153 = -10LL;

    t153 = (((x901*x902)%x903)-x904);

    if (t153 != -126LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x905 = 7413316472751LLU;
	int8_t x906 = INT8_MAX;
	int8_t x907 = 6;
	volatile int16_t x908 = 19;
	volatile uint64_t t154 = 5912248215452781LLU;

    t154 = (((x905*x906)%x907)-x908);

    if (t154 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x917 = 6701225LL;
	static uint32_t x918 = 145U;
	uint64_t x920 = 1812378365528946441LLU;

    t155 = (((x917*x918)%x919)-x920);

    if (t155 != 16634365708180605175LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x925 = UINT16_MAX;
	uint16_t x926 = 385U;
	volatile uint64_t x927 = 3048482LLU;
	int64_t x928 = -1LL;
	uint64_t t156 = 2LLU;

    t156 = (((x925*x926)%x927)-x928);

    if (t156 != 843120LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x929 = -1LL;
	int16_t x932 = INT16_MAX;
	volatile int64_t t157 = -555654308516681LL;

    t157 = (((x929*x930)%x931)-x932);

    if (t157 != -32766LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x933 = 28908498U;
	volatile int32_t x934 = INT32_MIN;
	int16_t x935 = -2374;
	uint16_t x936 = 3U;
	static uint32_t t158 = 764534U;

    t158 = (((x933*x934)%x935)-x936);

    if (t158 != 4294967293U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x938 = 1LLU;
	int8_t x940 = -9;
	uint64_t t159 = 4765906264156188690LLU;

    t159 = (((x937*x938)%x939)-x940);

    if (t159 != 479LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x941 = 1U;
	static volatile uint8_t x942 = 99U;
	int16_t x943 = INT16_MAX;
	int8_t x944 = -1;
	static volatile int32_t t160 = 54032117;

    t160 = (((x941*x942)%x943)-x944);

    if (t160 != 100) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x946 = 8LLU;
	int8_t x947 = INT8_MAX;
	int8_t x948 = -30;
	uint64_t t161 = 4521746204150626LLU;

    t161 = (((x945*x946)%x947)-x948);

    if (t161 != 97LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x949 = INT16_MIN;
	int8_t x951 = -1;
	int64_t x952 = 153056461338LL;

    t162 = (((x949*x950)%x951)-x952);

    if (t162 != -153056461338LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x953 = UINT16_MAX;
	static volatile int64_t x954 = -1LL;
	uint32_t x955 = 52429541U;
	int16_t x956 = INT16_MIN;
	static volatile int64_t t163 = -2914LL;

    t163 = (((x953*x954)%x955)-x956);

    if (t163 != -32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x965 = INT16_MAX;
	static uint16_t x967 = UINT16_MAX;

    t164 = (((x965*x966)%x967)-x968);

    if (t164 != -98238) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x979 = 261433LLU;
	static int16_t x980 = 205;
	volatile uint64_t t165 = 9252158LLU;

    t165 = (((x977*x978)%x979)-x980);

    if (t165 != 18446744073709551411LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x981 = INT16_MIN;
	volatile uint32_t x982 = UINT32_MAX;
	int32_t x983 = -13476229;
	volatile int32_t x984 = INT32_MIN;
	uint32_t t166 = 114792U;

    t166 = (((x981*x982)%x983)-x984);

    if (t166 != 2147516416U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x986 = UINT8_MAX;
	uint16_t x987 = 47U;
	int16_t x988 = 1;
	int32_t t167 = -23479;

    t167 = (((x985*x986)%x987)-x988);

    if (t167 != 19) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x989 = INT32_MIN;
	volatile uint32_t x990 = 10U;
	uint64_t x991 = UINT64_MAX;
	int16_t x992 = 3322;
	static volatile uint64_t t168 = 226950286177057LLU;

    t168 = (((x989*x990)%x991)-x992);

    if (t168 != 18446744073709548294LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x993 = -1;
	volatile int16_t x994 = -1;
	uint16_t x995 = 6072U;

    t169 = (((x993*x994)%x995)-x996);

    if (t169 != 2LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1004 = 44U;
	uint32_t t170 = 183577285U;

    t170 = (((x1001*x1002)%x1003)-x1004);

    if (t170 != 4294913686U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1005 = 5U;
	int32_t x1006 = -1;
	volatile int16_t x1007 = INT16_MIN;
	uint64_t x1008 = 6011635277117210806LLU;
	uint64_t t171 = 9LLU;

    t171 = (((x1005*x1006)%x1007)-x1008);

    if (t171 != 12435108796592340805LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x1009 = 363378424U;
	static uint8_t x1010 = 22U;
	int64_t x1011 = -781LL;
	static volatile uint64_t t172 = 26781913819124294LLU;

    t172 = (((x1009*x1010)%x1011)-x1012);

    if (t172 != 18446459453027048614LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1013 = 52U;
	int32_t x1015 = INT32_MIN;
	uint32_t x1016 = UINT32_MAX;
	static uint32_t t173 = 4776U;

    t173 = (((x1013*x1014)%x1015)-x1016);

    if (t173 != 4294967245U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1021 = -1;
	uint32_t x1022 = 2U;
	static int32_t x1023 = INT32_MAX;
	static int64_t x1024 = 137294268424868527LL;
	static int64_t t174 = 285LL;

    t174 = (((x1021*x1022)%x1023)-x1024);

    if (t174 != -137294268424868527LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x1025 = -1;
	int64_t x1026 = INT64_MAX;
	volatile uint32_t x1027 = 1639076054U;
	int64_t t175 = 7970945LL;

    t175 = (((x1025*x1026)%x1027)-x1028);

    if (t175 != -758498054LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1037 = 11851U;
	uint16_t x1038 = 16082U;
	uint32_t x1040 = 19894711U;
	volatile uint32_t t176 = 10U;

    t176 = (((x1037*x1038)%x1039)-x1040);

    if (t176 != 4275084920U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1042 = 337525U;
	int32_t x1043 = 982369;
	int8_t x1044 = INT8_MIN;
	volatile uint32_t t177 = 0U;

    t177 = (((x1041*x1042)%x1043)-x1044);

    if (t177 != 25142U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1049 = 86U;
	static uint32_t x1050 = 207U;
	volatile int64_t x1052 = 42487LL;
	volatile int64_t t178 = 39946956574707325LL;

    t178 = (((x1049*x1050)%x1051)-x1052);

    if (t178 != -24685LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1054 = UINT32_MAX;
	static volatile uint32_t t179 = 141U;

    t179 = (((x1053*x1054)%x1055)-x1056);

    if (t179 != 4294901889U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1069 = 0;
	volatile int16_t x1072 = INT16_MIN;
	int32_t t180 = 50;

    t180 = (((x1069*x1070)%x1071)-x1072);

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1073 = INT16_MIN;
	static int64_t x1075 = INT64_MAX;
	int32_t x1076 = INT32_MIN;
	volatile int64_t t181 = 64LL;

    t181 = (((x1073*x1074)%x1075)-x1076);

    if (t181 != 2151677952LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1077 = 0;
	static uint32_t x1078 = 2652U;
	static uint16_t x1080 = 1U;
	uint64_t t182 = UINT64_MAX;

    t182 = (((x1077*x1078)%x1079)-x1080);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1085 = 286545LLU;
	uint8_t x1086 = 1U;
	volatile int16_t x1087 = -1;
	volatile uint64_t t183 = 273558919607LLU;

    t183 = (((x1085*x1086)%x1087)-x1088);

    if (t183 != 253778LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1089 = INT32_MIN;
	volatile int64_t x1090 = -1LL;
	static int8_t x1092 = -1;
	volatile int64_t t184 = 263643751121LL;

    t184 = (((x1089*x1090)%x1091)-x1092);

    if (t184 != 3LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x1097 = UINT32_MAX;
	int64_t x1099 = INT64_MAX;
	int8_t x1100 = 0;
	volatile int64_t t185 = 11LL;

    t185 = (((x1097*x1098)%x1099)-x1100);

    if (t185 != 4294966682LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1102 = INT8_MIN;
	volatile uint8_t x1103 = UINT8_MAX;
	int32_t x1104 = 11092;
	volatile int32_t t186 = 483214512;

    t186 = (((x1101*x1102)%x1103)-x1104);

    if (t186 != -11028) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x1109 = -1;
	int32_t x1110 = -3;
	int16_t x1112 = -1;
	volatile int64_t t187 = 36712900089273562LL;

    t187 = (((x1109*x1110)%x1111)-x1112);

    if (t187 != 4LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1117 = 24757625342LLU;
	uint32_t x1118 = 428U;
	uint32_t x1119 = 777617U;

    t188 = (((x1117*x1118)%x1119)-x1120);

    if (t188 != 18446743560148461709LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1123 = 2U;

    t189 = (((x1121*x1122)%x1123)-x1124);

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1131 = 1;
	static volatile uint16_t x1132 = UINT16_MAX;
	static int32_t t190 = 122885;

    t190 = (((x1129*x1130)%x1131)-x1132);

    if (t190 != -65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1137 = INT16_MIN;
	static int16_t x1138 = 12428;
	int8_t x1140 = INT8_MIN;
	int32_t t191 = 513;

    t191 = (((x1137*x1138)%x1139)-x1140);

    if (t191 != 128) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1141 = 98245111LLU;
	int64_t x1142 = -1059112708LL;
	int16_t x1143 = 219;
	uint64_t x1144 = 15319161153LLU;
	uint64_t t192 = 1965033LLU;

    t192 = (((x1141*x1142)%x1143)-x1144);

    if (t192 != 18446744058390390514LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1145 = -1;
	static uint64_t x1146 = 7518115871743LLU;
	uint16_t x1147 = 29U;
	uint64_t t193 = 21527329642LLU;

    t193 = (((x1145*x1146)%x1147)-x1148);

    if (t193 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1153 = UINT32_MAX;
	static int32_t x1155 = -1;
	static volatile uint8_t x1156 = 0U;
	static volatile uint32_t t194 = 27308138U;

    t194 = (((x1153*x1154)%x1155)-x1156);

    if (t194 != 88U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1158 = -446;
	int32_t x1159 = INT32_MIN;
	static volatile int64_t x1160 = INT64_MIN;
	volatile int64_t t195 = -2LL;

    t195 = (((x1157*x1158)%x1159)-x1160);

    if (t195 != 9223372036854648252LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1161 = 0U;
	int8_t x1163 = INT8_MIN;
	uint16_t x1164 = 8214U;

    t196 = (((x1161*x1162)%x1163)-x1164);

    if (t196 != -8214LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1165 = INT16_MIN;
	uint32_t x1166 = 19397996U;
	volatile uint32_t t197 = 861U;

    t197 = (((x1165*x1166)%x1167)-x1168);

    if (t197 != 21561345U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1169 = INT8_MAX;
	volatile uint8_t x1170 = 77U;
	int64_t x1171 = INT64_MIN;
	static volatile int64_t x1172 = -1LL;
	volatile int64_t t198 = -4481774715936058785LL;

    t198 = (((x1169*x1170)%x1171)-x1172);

    if (t198 != 9780LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1173 = -62;
	uint64_t x1174 = UINT64_MAX;
	static volatile int64_t x1175 = -167788391544321LL;
	int64_t x1176 = 2744898675150441LL;
	volatile uint64_t t199 = 8307836LLU;

    t199 = (((x1173*x1174)%x1175)-x1176);

    if (t199 != 18443999175034401237LLU) { NG(); } else { ; }
	
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

