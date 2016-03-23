
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

int16_t x4 = -1;
int8_t x10 = INT8_MAX;
int8_t x17 = 1;
uint32_t x22 = 870U;
int64_t x24 = 257472LL;
int8_t x25 = -1;
uint64_t x30 = UINT64_MAX;
volatile uint8_t x32 = 2U;
uint64_t t6 = 238032190217LLU;
volatile int8_t x35 = INT8_MIN;
static int16_t x39 = INT16_MIN;
int16_t x46 = INT16_MIN;
int8_t x47 = INT8_MAX;
volatile uint64_t x51 = 4054823342304015866LLU;
int32_t x64 = INT32_MIN;
uint32_t x69 = UINT32_MAX;
int8_t x70 = INT8_MIN;
static volatile uint32_t t13 = 189U;
int32_t x81 = INT32_MIN;
int16_t x86 = INT16_MIN;
static volatile int32_t x88 = -6;
int32_t t17 = -2571900;
uint32_t t20 = 0U;
volatile uint32_t t22 = 819U;
uint8_t x131 = UINT8_MAX;
int8_t x141 = INT8_MIN;
volatile int16_t x144 = -9;
int32_t x146 = -1;
int32_t x152 = -1;
int16_t x155 = INT16_MAX;
volatile uint64_t t28 = 535536858133659355LLU;
volatile int32_t t29 = 556;
int8_t x173 = 25;
uint8_t x178 = UINT8_MAX;
int32_t x179 = -59774;
int64_t x193 = 17523727767LL;
volatile uint64_t t33 = 15063055112280LLU;
uint8_t x202 = 98U;
int16_t x204 = INT16_MIN;
int32_t x206 = -1;
int32_t x208 = INT32_MIN;
uint64_t x209 = 239737878237250512LLU;
volatile int8_t x212 = INT8_MIN;
static int32_t x217 = -23745;
int8_t x222 = -1;
uint32_t x226 = 309277408U;
int64_t x228 = INT64_MAX;
static int64_t x233 = -580477753LL;
volatile uint8_t x234 = 1U;
static volatile uint32_t x235 = 3926U;
int8_t x241 = INT8_MIN;
int32_t x246 = -24787;
int16_t x256 = INT16_MIN;
static int64_t x258 = INT64_MIN;
int32_t x261 = INT32_MIN;
int32_t x264 = INT32_MIN;
uint16_t x271 = 594U;
uint64_t t49 = 87087526LLU;
int64_t x276 = -2278269LL;
int16_t x292 = INT16_MIN;
int8_t x294 = INT8_MAX;
volatile uint32_t t54 = 69U;
int32_t x312 = INT32_MIN;
uint32_t x314 = UINT32_MAX;
int8_t x317 = -1;
uint32_t x332 = UINT32_MAX;
uint64_t t60 = 1LLU;
static int8_t x334 = -4;
int32_t x336 = -1;
static volatile uint64_t t61 = 12116LLU;
int64_t x340 = -3LL;
uint16_t x364 = 2626U;
int64_t t66 = -16667112413550364LL;
static volatile int8_t x365 = 26;
int16_t x369 = -7;
volatile int16_t x371 = INT16_MAX;
int64_t x383 = INT64_MAX;
static volatile uint64_t t69 = 1397719LLU;
uint64_t t70 = 3853273483589LLU;
uint64_t x389 = UINT64_MAX;
int64_t x392 = INT64_MIN;
volatile uint64_t t72 = 67207210092LLU;
int64_t x401 = -1LL;
int16_t x402 = 902;
static uint32_t x406 = 2U;
int16_t x408 = INT16_MAX;
volatile int32_t x419 = INT32_MAX;
volatile int64_t x424 = -1LL;
uint32_t x432 = UINT32_MAX;
uint32_t t79 = 279487U;
static int16_t x438 = -48;
uint16_t x441 = UINT16_MAX;
int8_t x442 = INT8_MIN;
uint8_t x445 = UINT8_MAX;
uint32_t x448 = 890402U;
uint64_t x453 = 3767798589190834LLU;
volatile int8_t x455 = 7;
int32_t x458 = -1154;
volatile int64_t t85 = 680677LL;
static uint32_t x467 = 16U;
volatile uint32_t t86 = 705136U;
uint8_t x469 = 14U;
static volatile int32_t t88 = -65162;
int32_t x492 = INT32_MIN;
int32_t x515 = -1;
int8_t x516 = INT8_MIN;
static int32_t t94 = 114681;
int32_t x519 = INT32_MIN;
int8_t x520 = 44;
static int8_t x526 = 3;
uint64_t x537 = 2LLU;
int8_t x541 = 0;
volatile int32_t t100 = -48347238;
int32_t x553 = INT32_MIN;
uint64_t x554 = 33338122LLU;
uint64_t t102 = 130978412366706LLU;
int64_t x560 = INT64_MIN;
uint64_t x562 = UINT64_MAX;
int16_t x563 = -1;
static volatile int16_t x571 = 159;
int64_t t105 = -2308055613356852309LL;
int8_t x576 = -1;
int64_t x582 = 1972722LL;
static int32_t x587 = INT32_MIN;
volatile uint64_t x590 = UINT64_MAX;
static int16_t x603 = 1;
int8_t x607 = -13;
int8_t x616 = INT8_MIN;
int32_t x622 = 20361;
int8_t x627 = -9;
volatile uint8_t x631 = 1U;
int16_t x642 = 95;
int16_t x645 = INT16_MIN;
uint32_t x648 = 1U;
static volatile int16_t x650 = 119;
volatile int64_t t122 = -2265943750319LL;
int8_t x653 = INT8_MIN;
uint64_t x654 = 4315751858577068674LLU;
volatile int16_t x658 = -1;
uint16_t x663 = UINT16_MAX;
static uint32_t x672 = UINT32_MAX;
static volatile uint64_t t127 = 116494476LLU;
static uint32_t t129 = 7276548U;
volatile int16_t x692 = INT16_MAX;
volatile int8_t x702 = INT8_MIN;
uint64_t x706 = 3126996359652417082LLU;
int8_t x707 = -31;
uint16_t x712 = UINT16_MAX;
static int8_t x714 = INT8_MIN;
volatile uint8_t x718 = 9U;
int8_t x724 = INT8_MIN;
static uint64_t x726 = UINT64_MAX;
volatile int64_t x727 = 141232LL;
volatile int64_t x728 = 37LL;
volatile int32_t t138 = -16915116;
volatile int64_t t139 = 210LL;
int64_t x744 = -769195LL;
int16_t x752 = INT16_MIN;
int8_t x759 = -1;
int32_t x762 = 1807;
volatile int64_t x763 = INT64_MAX;
int32_t x764 = -1;
volatile int8_t x768 = INT8_MIN;
int16_t x769 = -1;
int32_t t147 = 316843039;
int16_t x774 = INT16_MIN;
int16_t x775 = -98;
int16_t x779 = INT16_MIN;
static uint16_t x785 = 229U;
static volatile uint64_t t151 = 72008552LLU;
volatile int16_t x794 = INT16_MIN;
int32_t x795 = INT32_MIN;
static int16_t x800 = -9;
int16_t x820 = INT16_MIN;
int32_t t158 = 453755;
volatile int32_t x821 = -34123063;
volatile uint64_t t159 = 103067654610245LLU;
volatile uint8_t x837 = 24U;
volatile int64_t x841 = 14407477286649LL;
uint16_t x842 = UINT16_MAX;
int64_t x851 = INT64_MAX;
volatile uint32_t t164 = 344U;
uint8_t x862 = 47U;
int32_t t166 = 16;
uint8_t x866 = 20U;
int64_t t168 = 2LL;
int16_t x876 = INT16_MIN;
volatile int32_t t171 = 1130617;
int8_t x889 = INT8_MAX;
uint64_t x890 = 1344LLU;
uint64_t t172 = 91109LLU;
uint64_t t173 = 185LLU;
static int64_t x897 = INT64_MAX;
int64_t t174 = -1088548325010LL;
uint8_t x901 = UINT8_MAX;
int64_t x902 = -3LL;
int8_t x903 = INT8_MIN;
static uint8_t x908 = UINT8_MAX;
uint64_t x909 = 31LLU;
static volatile int8_t x910 = 14;
static int64_t x913 = 243LL;
int64_t t180 = 2512346362LL;
volatile uint8_t x929 = UINT8_MAX;
static volatile uint32_t x932 = UINT32_MAX;
uint64_t x934 = UINT64_MAX;
static volatile uint16_t x935 = 14658U;
int16_t x936 = INT16_MIN;
uint16_t x952 = 15192U;
uint64_t t186 = 3957159778146539LLU;
uint32_t x953 = 398709U;
int8_t x957 = INT8_MAX;
int32_t x963 = INT32_MIN;
volatile uint16_t x968 = 14U;
static int32_t x970 = -3819061;
int8_t x993 = INT8_MIN;
uint8_t x1016 = UINT8_MAX;
int64_t x1022 = -1LL;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int64_t x2 = 455987559LL;
	static int32_t x3 = INT32_MIN;
	static int64_t t0 = 7LL;

    t0 = (((x1*x2)&x3)/x4);

    if (t0 != -29882234961920LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 61216366422LLU;
	uint8_t x11 = 0U;
	int8_t x12 = -5;
	uint64_t t1 = 476090216LLU;

    t1 = (((x9*x10)&x11)/x12);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	uint16_t x14 = 2U;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	volatile int64_t t2 = 5568LL;

    t2 = (((x13*x14)&x15)/x16);

    if (t2 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x18 = INT64_MIN;
	volatile int32_t x19 = 0;
	static volatile int32_t x20 = INT32_MIN;
	int64_t t3 = 157LL;

    t3 = (((x17*x18)&x19)/x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -1;
	volatile int16_t x23 = INT16_MIN;
	volatile int64_t t4 = -22200LL;

    t4 = (((x21*x22)&x23)/x24);

    if (t4 != 16681LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = UINT64_MAX;
	static int8_t x27 = -2;
	int8_t x28 = -1;
	volatile uint64_t t5 = 89255LLU;

    t5 = (((x25*x26)&x27)/x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x29 = 3627U;
	volatile int32_t x31 = 14336918;

    t6 = (((x29*x30)&x31)/x32);

    if (t6 != 7168202LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = -1LL;
	int32_t x34 = -67995;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t7 = -56067555033087097LL;

    t7 = (((x33*x34)&x35)/x36);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 14;
	volatile int32_t x38 = 821;
	int16_t x40 = -876;
	int32_t t8 = 363782;

    t8 = (((x37*x38)&x39)/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x41 = INT16_MAX;
	static int16_t x42 = INT16_MAX;
	volatile int8_t x43 = 15;
	static volatile int32_t x44 = -2314;
	int32_t t9 = -12342827;

    t9 = (((x41*x42)&x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = -32144;

    t10 = (((x45*x46)&x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MIN;
	volatile uint8_t x50 = 1U;
	volatile int64_t x52 = INT64_MIN;
	volatile uint64_t t11 = 55767694179393215LLU;

    t11 = (((x49*x50)&x51)/x52);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x61 = UINT64_MAX;
	int32_t x62 = 22029;
	static uint32_t x63 = 1530U;
	uint64_t t12 = 77LLU;

    t12 = (((x61*x62)&x63)/x64);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x71 = 1639;
	volatile int8_t x72 = -8;

    t13 = (((x69*x70)&x71)/x72);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x73 = 5648;
	static volatile int32_t x74 = 1;
	int8_t x75 = 1;
	static volatile uint16_t x76 = 1357U;
	int32_t t14 = -700955;

    t14 = (((x73*x74)&x75)/x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x77 = INT64_MAX;
	volatile int8_t x78 = -1;
	int32_t x79 = -438;
	volatile uint16_t x80 = 8551U;
	static volatile int64_t t15 = -7014794507LL;

    t15 = (((x77*x78)&x79)/x80);

    if (t15 != -1078630807724801LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x82 = 144258U;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = UINT64_MAX;
	uint64_t t16 = 7599371522403405273LLU;

    t16 = (((x81*x82)&x83)/x84);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x85 = -1;
	int8_t x87 = 0;

    t17 = (((x85*x86)&x87)/x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x89 = 73U;
	int64_t x90 = 23972473891LL;
	int64_t x91 = 3794LL;
	int16_t x92 = INT16_MAX;
	int64_t t18 = 233381860537504167LL;

    t18 = (((x89*x90)&x91)/x92);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x93 = -1;
	volatile int16_t x94 = 2306;
	int8_t x95 = INT8_MAX;
	static int32_t x96 = 31220572;
	int32_t t19 = -13637221;

    t19 = (((x93*x94)&x95)/x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 2240U;
	volatile int32_t x99 = -1;
	int16_t x100 = -2;

    t20 = (((x97*x98)&x99)/x100);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	static volatile int16_t x115 = 1;
	int16_t x116 = INT16_MAX;
	int32_t t21 = -6;

    t21 = (((x113*x114)&x115)/x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x125 = -1;
	volatile uint32_t x126 = 255888257U;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MIN;

    t22 = (((x125*x126)&x127)/x128);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = -1LL;
	int16_t x130 = INT16_MIN;
	static volatile uint16_t x132 = UINT16_MAX;
	static volatile int64_t t23 = -620980497LL;

    t23 = (((x129*x130)&x131)/x132);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x133 = 0;
	static uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 15U;
	static int8_t x136 = 47;
	static volatile int32_t t24 = 61549;

    t24 = (((x133*x134)&x135)/x136);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x142 = 7U;
	static uint32_t x143 = UINT32_MAX;
	volatile uint32_t t25 = 0U;

    t25 = (((x141*x142)&x143)/x144);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x145 = INT32_MAX;
	uint16_t x147 = UINT16_MAX;
	int64_t x148 = INT64_MIN;
	int64_t t26 = -394965222546923156LL;

    t26 = (((x145*x146)&x147)/x148);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x149 = 58LL;
	static int16_t x150 = -7;
	static volatile int64_t x151 = 298LL;
	volatile int64_t t27 = 14LL;

    t27 = (((x149*x150)&x151)/x152);

    if (t27 != -42LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x153 = 8;
	static int16_t x154 = INT16_MAX;
	volatile uint64_t x156 = 86013212715326715LLU;

    t28 = (((x153*x154)&x155)/x156);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x158 = -2;
	volatile int32_t x159 = -1;
	volatile uint8_t x160 = 116U;

    t29 = (((x157*x158)&x159)/x160);

    if (t29 != 564) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x161 = INT8_MAX;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;
	int64_t x164 = -1LL;
	volatile int64_t t30 = -1LL;

    t30 = (((x161*x162)&x163)/x164);

    if (t30 != 16256LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x174 = -11864;
	int64_t x175 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	int64_t t31 = 49LL;

    t31 = (((x173*x174)&x175)/x176);

    if (t31 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x177 = 6LL;
	int64_t x180 = INT64_MIN;
	int64_t t32 = -659751LL;

    t32 = (((x177*x178)&x179)/x180);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x194 = 2U;
	uint64_t x195 = 310854722981125150LLU;
	uint16_t x196 = 264U;

    t33 = (((x193*x194)&x195)/x196);

    if (t33 != 132694659LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x197 = -269;
	int64_t x198 = -1LL;
	volatile uint8_t x199 = 14U;
	static int8_t x200 = -1;
	volatile int64_t t34 = -4235664296276770719LL;

    t34 = (((x197*x198)&x199)/x200);

    if (t34 != -12LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x201 = 1497U;
	int64_t x203 = INT64_MIN;
	static int64_t t35 = -151728318706LL;

    t35 = (((x201*x202)&x203)/x204);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	uint32_t x207 = 499143U;
	uint32_t t36 = 379903460U;

    t36 = (((x205*x206)&x207)/x208);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x210 = -1LL;
	int32_t x211 = INT32_MIN;
	uint64_t t37 = 169822655797675632LLU;

    t37 = (((x209*x210)&x211)/x212);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MAX;
	uint8_t x220 = 2U;
	int32_t t38 = -2256;

    t38 = (((x217*x218)&x219)/x220);

    if (t38 != 12352) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x221 = 3;
	int8_t x223 = INT8_MAX;
	uint32_t x224 = 1U;
	uint32_t t39 = 26U;

    t39 = (((x221*x222)&x223)/x224);

    if (t39 != 125U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x225 = 24;
	uint64_t x227 = 5017966180155088859LLU;
	uint64_t t40 = 1431706512LLU;

    t40 = (((x225*x226)&x227)/x228);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	static int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	static int16_t x232 = -3078;
	volatile uint32_t t41 = 1157U;

    t41 = (((x229*x230)&x231)/x232);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x236 = INT16_MIN;
	int64_t t42 = 0LL;

    t42 = (((x233*x234)&x235)/x236);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x242 = INT8_MIN;
	static uint8_t x243 = 0U;
	static int32_t x244 = -40443;
	volatile int32_t t43 = -692958;

    t43 = (((x241*x242)&x243)/x244);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x245 = -35591LL;
	uint64_t x247 = 107437774418916LLU;
	static uint16_t x248 = 218U;
	volatile uint64_t t44 = 26529058LLU;

    t44 = (((x245*x246)&x247)/x248);

    if (t44 != 308199LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x253 = 8239329791932LLU;
	int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	static volatile uint64_t t45 = 934831752997703LLU;

    t45 = (((x253*x254)&x255)/x256);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x257 = 1349989633011773218LLU;
	uint64_t x259 = 59023672112LLU;
	uint64_t x260 = 225948313779LLU;
	volatile uint64_t t46 = 11755449849598LLU;

    t46 = (((x257*x258)&x259)/x260);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x262 = 1;
	volatile int32_t x263 = -246797;
	int32_t t47 = 4828325;

    t47 = (((x261*x262)&x263)/x264);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x265 = 0;
	volatile int32_t x266 = INT32_MAX;
	volatile uint8_t x267 = 4U;
	uint16_t x268 = 11303U;
	volatile int32_t t48 = 5357886;

    t48 = (((x265*x266)&x267)/x268);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x269 = 826512420LLU;
	static uint8_t x270 = 0U;
	volatile int8_t x272 = INT8_MIN;

    t49 = (((x269*x270)&x271)/x272);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = -8;
	int64_t t50 = -3470044146503601212LL;

    t50 = (((x273*x274)&x275)/x276);

    if (t50 != -471LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x277 = -1;
	int32_t x278 = INT32_MAX;
	volatile int16_t x279 = INT16_MIN;
	static int8_t x280 = -40;
	int32_t t51 = 3168172;

    t51 = (((x277*x278)&x279)/x280);

    if (t51 != 53687091) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x285 = INT8_MIN;
	int16_t x286 = 6369;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t52 = 2049131225525099LLU;

    t52 = (((x285*x286)&x287)/x288);

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x289 = 3129237LLU;
	int8_t x290 = -11;
	int32_t x291 = INT32_MIN;
	volatile uint64_t t53 = 54168353992713LLU;

    t53 = (((x289*x290)&x291)/x292);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x293 = 1U;
	uint8_t x295 = UINT8_MAX;
	volatile int16_t x296 = -1926;

    t54 = (((x293*x294)&x295)/x296);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	int16_t x299 = 49;
	static volatile int32_t x300 = INT32_MAX;
	volatile int64_t t55 = 3232LL;

    t55 = (((x297*x298)&x299)/x300);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x309 = 27749;
	int16_t x310 = 11;
	int32_t x311 = -6097;
	int32_t t56 = -2;

    t56 = (((x309*x310)&x311)/x312);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x315 = 1659430780U;
	uint64_t x316 = 2908440LLU;
	uint64_t t57 = 10832LLU;

    t57 = (((x313*x314)&x315)/x316);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x318 = 93588066;
	uint64_t x319 = 8317739145594LLU;
	volatile uint16_t x320 = 18U;
	volatile uint64_t t58 = 51LLU;

    t58 = (((x317*x318)&x319)/x320);

    if (t58 != 462091492709LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	static int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	volatile int64_t t59 = 802487750803792300LL;

    t59 = (((x321*x322)&x323)/x324);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x329 = UINT64_MAX;
	uint64_t x330 = 18213413258405019LLU;
	int64_t x331 = INT64_MAX;

    t60 = (((x329*x330)&x331)/x332);

    if (t60 != 2143243007LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x333 = 16110505294LLU;
	uint32_t x335 = 378059809U;

    t61 = (((x333*x334)&x335)/x336);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x337 = 5U;
	uint8_t x338 = 21U;
	volatile int32_t x339 = -363868;
	static int64_t t62 = 140LL;

    t62 = (((x337*x338)&x339)/x340);

    if (t62 != -10LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int64_t x343 = -1353880920847216257LL;
	int16_t x344 = INT16_MAX;
	int64_t t63 = 50865667LL;

    t63 = (((x341*x342)&x343)/x344);

    if (t63 != -41318427712247LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x349 = -1;
	static uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = INT8_MIN;
	volatile uint32_t x352 = UINT32_MAX;
	uint64_t t64 = 26578568556832452LLU;

    t64 = (((x349*x350)&x351)/x352);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x353 = INT16_MIN;
	volatile int8_t x354 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	int32_t x356 = 1570403;
	static uint64_t t65 = 1555307982982LLU;

    t65 = (((x353*x354)&x355)/x356);

    if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x361 = 0U;
	int64_t x362 = INT64_MIN;
	int32_t x363 = INT32_MIN;

    t66 = (((x361*x362)&x363)/x364);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x366 = 4;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = 8383962028959031LL;
	static volatile uint64_t t67 = 3184347994141LLU;

    t67 = (((x365*x366)&x367)/x368);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x370 = 109178023U;
	int16_t x372 = INT16_MIN;
	volatile uint32_t t68 = 91521452U;

    t68 = (((x369*x370)&x371)/x372);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x381 = UINT64_MAX;
	static volatile int32_t x382 = INT32_MIN;
	static volatile int16_t x384 = INT16_MIN;

    t69 = (((x381*x382)&x383)/x384);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x385 = INT16_MIN;
	static int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	static uint64_t x388 = 203299992010LLU;

    t70 = (((x385*x386)&x387)/x388);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x390 = UINT64_MAX;
	int64_t x391 = -783806451690179808LL;
	uint64_t t71 = 833186LLU;

    t71 = (((x389*x390)&x391)/x392);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x397 = UINT64_MAX;
	static int32_t x398 = INT32_MIN;
	int64_t x399 = 976607089994556976LL;
	static volatile uint16_t x400 = 25726U;

    t72 = (((x397*x398)&x399)/x400);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x403 = 0U;
	uint32_t x404 = UINT32_MAX;
	volatile int64_t t73 = -44936LL;

    t73 = (((x401*x402)&x403)/x404);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x405 = 8849U;
	uint32_t x407 = 46557847U;
	uint32_t t74 = 1083U;

    t74 = (((x405*x406)&x407)/x408);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x409 = -40203;
	uint16_t x410 = 546U;
	volatile int64_t x411 = INT64_MIN;
	static uint64_t x412 = UINT64_MAX;
	static volatile uint64_t t75 = 373392817037022760LLU;

    t75 = (((x409*x410)&x411)/x412);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x413 = -1;
	volatile uint8_t x414 = 58U;
	uint32_t x415 = 3890106U;
	uint32_t x416 = 120119199U;
	static volatile uint32_t t76 = 18U;

    t76 = (((x413*x414)&x415)/x416);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x417 = -1;
	int8_t x418 = -1;
	static int32_t x420 = INT32_MIN;
	volatile int32_t t77 = 32519;

    t77 = (((x417*x418)&x419)/x420);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x421 = -1;
	int8_t x422 = INT8_MAX;
	uint32_t x423 = 435975U;
	volatile int64_t t78 = -19624635491908885LL;

    t78 = (((x421*x422)&x423)/x424);

    if (t78 != -435969LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	uint16_t x431 = 73U;

    t79 = (((x429*x430)&x431)/x432);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x433 = 78015144LLU;
	static uint8_t x434 = 6U;
	uint8_t x435 = 1U;
	static int64_t x436 = INT64_MIN;
	volatile uint64_t t80 = 485428118297LLU;

    t80 = (((x433*x434)&x435)/x436);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x437 = 159825164436LLU;
	int8_t x439 = INT8_MAX;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t81 = 13LLU;

    t81 = (((x437*x438)&x439)/x440);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x443 = INT8_MAX;
	static uint8_t x444 = UINT8_MAX;
	volatile int32_t t82 = -396133111;

    t82 = (((x441*x442)&x443)/x444);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x446 = UINT16_MAX;
	int16_t x447 = -1;
	volatile uint32_t t83 = 19083969U;

    t83 = (((x445*x446)&x447)/x448);

    if (t83 != 18U) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x454 = INT16_MIN;
	volatile int64_t x456 = INT64_MIN;
	static volatile uint64_t t84 = 216474553LLU;

    t84 = (((x453*x454)&x455)/x456);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x457 = INT16_MIN;
	static int64_t x459 = INT64_MIN;
	volatile uint16_t x460 = UINT16_MAX;

    t85 = (((x457*x458)&x459)/x460);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x465 = INT32_MAX;
	volatile uint32_t x466 = 42288778U;
	static uint32_t x468 = UINT32_MAX;

    t86 = (((x465*x466)&x467)/x468);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x470 = INT8_MIN;
	uint16_t x471 = UINT16_MAX;
	int32_t x472 = INT32_MAX;
	int32_t t87 = -1;

    t87 = (((x469*x470)&x471)/x472);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x473 = INT32_MAX;
	static int16_t x474 = -1;
	uint8_t x475 = 27U;
	uint8_t x476 = UINT8_MAX;

    t88 = (((x473*x474)&x475)/x476);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x489 = -1;
	int32_t x490 = INT32_MAX;
	static int32_t x491 = INT32_MIN;
	static volatile int32_t t89 = -533170;

    t89 = (((x489*x490)&x491)/x492);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x493 = 0LL;
	uint16_t x494 = UINT16_MAX;
	int64_t x495 = INT64_MAX;
	int16_t x496 = INT16_MIN;
	volatile int64_t t90 = -254862947555441257LL;

    t90 = (((x493*x494)&x495)/x496);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x497 = 1;
	static int8_t x498 = -1;
	uint16_t x499 = UINT16_MAX;
	uint64_t x500 = UINT64_MAX;
	uint64_t t91 = 1120346361LLU;

    t91 = (((x497*x498)&x499)/x500);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x501 = INT32_MIN;
	volatile uint64_t x502 = 9048808281116102LLU;
	int64_t x503 = 1095976591472618LL;
	int8_t x504 = -22;
	uint64_t t92 = 574736497LLU;

    t92 = (((x501*x502)&x503)/x504);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x509 = 2U;
	int16_t x510 = INT16_MIN;
	uint32_t x511 = UINT32_MAX;
	int8_t x512 = INT8_MAX;
	uint32_t t93 = 16553U;

    t93 = (((x509*x510)&x511)/x512);

    if (t93 != 33818124U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x513 = -1;
	int8_t x514 = INT8_MIN;

    t94 = (((x513*x514)&x515)/x516);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x517 = 577LLU;
	int8_t x518 = -17;
	volatile uint64_t t95 = 8010678914287661713LLU;

    t95 = (((x517*x518)&x519)/x520);

    if (t95 != 419244183444592453LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x521 = 0;
	int64_t x522 = -37525746414861LL;
	static uint32_t x523 = 56105U;
	volatile int64_t x524 = INT64_MIN;
	static volatile int64_t t96 = 12381480LL;

    t96 = (((x521*x522)&x523)/x524);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x525 = -1;
	static uint64_t x527 = 833225123553LLU;
	int32_t x528 = INT32_MIN;
	volatile uint64_t t97 = 319422810LLU;

    t97 = (((x525*x526)&x527)/x528);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x533 = INT8_MAX;
	int16_t x534 = -1;
	int64_t x535 = -360649750767LL;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t98 = 28775268890LLU;

    t98 = (((x533*x534)&x535)/x536);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x538 = 7U;
	int64_t x539 = INT64_MIN;
	int8_t x540 = -1;
	uint64_t t99 = 1LLU;

    t99 = (((x537*x538)&x539)/x540);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x542 = INT32_MIN;
	static int8_t x543 = -1;
	int8_t x544 = INT8_MIN;

    t100 = (((x541*x542)&x543)/x544);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x549 = UINT32_MAX;
	uint64_t x550 = 10LLU;
	volatile uint16_t x551 = 101U;
	int8_t x552 = -1;
	volatile uint64_t t101 = 100055898LLU;

    t101 = (((x549*x550)&x551)/x552);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x555 = 3;
	static int8_t x556 = INT8_MIN;

    t102 = (((x553*x554)&x555)/x556);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x557 = -1;
	static int64_t x558 = 7401228948476272LL;
	int8_t x559 = -1;
	int64_t t103 = -1104295353830961LL;

    t103 = (((x557*x558)&x559)/x560);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x561 = 3U;
	int64_t x564 = INT64_MAX;
	uint64_t t104 = 9905524LLU;

    t104 = (((x561*x562)&x563)/x564);

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x569 = -1;
	static int64_t x570 = INT64_MAX;
	int16_t x572 = -1;

    t105 = (((x569*x570)&x571)/x572);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x573 = UINT16_MAX;
	uint8_t x574 = 0U;
	int32_t x575 = INT32_MIN;
	volatile int32_t t106 = -2032;

    t106 = (((x573*x574)&x575)/x576);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x581 = INT8_MIN;
	int64_t x583 = 92820620023LL;
	volatile int32_t x584 = INT32_MIN;
	static volatile int64_t t107 = 47566LL;

    t107 = (((x581*x582)&x583)/x584);

    if (t107 != -43LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	int16_t x586 = INT16_MIN;
	int8_t x588 = INT8_MIN;
	volatile uint64_t t108 = 63LLU;

    t108 = (((x585*x586)&x587)/x588);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x589 = 0U;
	static int64_t x591 = -28686572319LL;
	static uint8_t x592 = UINT8_MAX;
	volatile uint64_t t109 = 3072817211LLU;

    t109 = (((x589*x590)&x591)/x592);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x597 = 1;
	int64_t x598 = INT64_MAX;
	int16_t x599 = INT16_MAX;
	volatile int8_t x600 = 3;
	static volatile int64_t t110 = -1723LL;

    t110 = (((x597*x598)&x599)/x600);

    if (t110 != 10922LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x601 = 693987473;
	volatile uint64_t x602 = 4214322896894018LLU;
	static uint64_t x604 = 3858412076178LLU;
	uint64_t t111 = 150052907811337LLU;

    t111 = (((x601*x602)&x603)/x604);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x605 = 0U;
	uint32_t x606 = 940U;
	volatile int16_t x608 = -27;
	volatile uint32_t t112 = 705U;

    t112 = (((x605*x606)&x607)/x608);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x609 = -1;
	volatile int16_t x610 = INT16_MIN;
	static int8_t x611 = -1;
	static uint32_t x612 = UINT32_MAX;
	uint32_t t113 = 43U;

    t113 = (((x609*x610)&x611)/x612);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x613 = 7817351371LLU;
	int32_t x614 = INT32_MIN;
	volatile int64_t x615 = -1LL;
	volatile uint64_t t114 = 7LLU;

    t114 = (((x613*x614)&x615)/x616);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x617 = 519700LLU;
	volatile int64_t x618 = INT64_MIN;
	uint64_t x619 = UINT64_MAX;
	int16_t x620 = INT16_MAX;
	uint64_t t115 = 10954LLU;

    t115 = (((x617*x618)&x619)/x620);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x621 = INT16_MIN;
	uint32_t x623 = 6410513U;
	volatile uint64_t x624 = 226929LLU;
	volatile uint64_t t116 = 0LLU;

    t116 = (((x621*x622)&x623)/x624);

    if (t116 != 9LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x625 = 11LL;
	static volatile int32_t x626 = INT32_MIN;
	int16_t x628 = INT16_MIN;
	volatile int64_t t117 = -769540292583536LL;

    t117 = (((x625*x626)&x627)/x628);

    if (t117 != 720896LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x629 = 1;
	int64_t x630 = INT64_MIN;
	int32_t x632 = INT32_MIN;
	volatile int64_t t118 = -7348870860099LL;

    t118 = (((x629*x630)&x631)/x632);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x633 = 1LLU;
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	uint32_t x636 = UINT32_MAX;
	volatile uint64_t t119 = 38870448LLU;

    t119 = (((x633*x634)&x635)/x636);

    if (t119 != 4294967296LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x641 = -1;
	int64_t x643 = INT64_MIN;
	int16_t x644 = INT16_MIN;
	static int64_t t120 = 5902304LL;

    t120 = (((x641*x642)&x643)/x644);

    if (t120 != 281474976710656LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x646 = INT16_MIN;
	int16_t x647 = INT16_MIN;
	volatile uint32_t t121 = 6U;

    t121 = (((x645*x646)&x647)/x648);

    if (t121 != 1073741824U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x649 = INT16_MAX;
	static uint8_t x651 = UINT8_MAX;
	int64_t x652 = INT64_MAX;

    t122 = (((x649*x650)&x651)/x652);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x655 = 486881;
	static volatile uint32_t x656 = UINT32_MAX;
	static volatile uint64_t t123 = 44014606550LLU;

    t123 = (((x653*x654)&x655)/x656);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x657 = 56;
	int64_t x659 = 1087703077LL;
	int16_t x660 = INT16_MAX;
	int64_t t124 = -3100182966926939307LL;

    t124 = (((x657*x658)&x659)/x660);

    if (t124 != 33195LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	uint32_t x662 = UINT32_MAX;
	static volatile uint16_t x664 = UINT16_MAX;
	static uint32_t t125 = 75U;

    t125 = (((x661*x662)&x663)/x664);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x665 = -56;
	volatile int64_t x666 = -150176LL;
	int32_t x667 = -1;
	volatile uint16_t x668 = 29U;
	volatile int64_t t126 = -11419522862LL;

    t126 = (((x665*x666)&x667)/x668);

    if (t126 != 289995LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x669 = 261864895589LLU;
	int8_t x670 = INT8_MAX;
	static uint32_t x671 = UINT32_MAX;

    t127 = (((x669*x670)&x671)/x672);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x677 = 1852466U;
	volatile int16_t x678 = -6223;
	uint32_t x679 = UINT32_MAX;
	int8_t x680 = -1;
	volatile uint32_t t128 = 41917U;

    t128 = (((x677*x678)&x679)/x680);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x681 = 3U;
	static uint32_t x682 = UINT32_MAX;
	int16_t x683 = INT16_MIN;
	uint8_t x684 = UINT8_MAX;

    t129 = (((x681*x682)&x683)/x684);

    if (t129 != 16842880U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x689 = 46235LLU;
	int32_t x690 = INT32_MIN;
	static int8_t x691 = 1;
	volatile uint64_t t130 = 20694LLU;

    t130 = (((x689*x690)&x691)/x692);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x701 = -188;
	int32_t x703 = INT32_MIN;
	int64_t x704 = -492799396274959999LL;
	volatile int64_t t131 = -237463920892LL;

    t131 = (((x701*x702)&x703)/x704);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x705 = INT64_MIN;
	int32_t x708 = -413174;
	static uint64_t t132 = 5093513323788927LLU;

    t132 = (((x705*x706)&x707)/x708);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x709 = INT8_MAX;
	int8_t x710 = 24;
	int8_t x711 = INT8_MIN;
	volatile int32_t t133 = -29;

    t133 = (((x709*x710)&x711)/x712);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x713 = -26;
	int16_t x715 = INT16_MAX;
	int32_t x716 = INT32_MIN;
	static int32_t t134 = -11493;

    t134 = (((x713*x714)&x715)/x716);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x717 = -391;
	volatile int32_t x719 = INT32_MAX;
	int8_t x720 = 1;
	int32_t t135 = -63284340;

    t135 = (((x717*x718)&x719)/x720);

    if (t135 != 2147480129) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x721 = -718;
	int8_t x722 = -1;
	static volatile uint64_t x723 = 2870937530551795674LLU;
	volatile uint64_t t136 = 5564534990551LLU;

    t136 = (((x721*x722)&x723)/x724);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x725 = 968LL;
	static uint64_t t137 = 531LLU;

    t137 = (((x725*x726)&x727)/x728);

    if (t137 != 3792LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x733 = 90U;
	int8_t x734 = -1;
	volatile uint16_t x735 = 26259U;
	int16_t x736 = -1;

    t138 = (((x733*x734)&x735)/x736);

    if (t138 != -26242) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x737 = 69;
	int64_t x738 = -698LL;
	uint8_t x739 = UINT8_MAX;
	int16_t x740 = -1;

    t139 = (((x737*x738)&x739)/x740);

    if (t139 != -222LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x741 = 65U;
	uint8_t x742 = 25U;
	int16_t x743 = INT16_MAX;
	static int64_t t140 = -10158LL;

    t140 = (((x741*x742)&x743)/x744);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x745 = UINT8_MAX;
	int8_t x746 = -18;
	uint64_t x747 = 1105723323782863LLU;
	int64_t x748 = -93783LL;
	volatile uint64_t t141 = 3689782657LLU;

    t141 = (((x745*x746)&x747)/x748);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x749 = 15383;
	int64_t x750 = 750LL;
	static uint32_t x751 = UINT32_MAX;
	int64_t t142 = -13683921605LL;

    t142 = (((x749*x750)&x751)/x752);

    if (t142 != -352LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x753 = 12454U;
	uint8_t x754 = 3U;
	uint64_t x755 = UINT64_MAX;
	uint64_t x756 = 1284LLU;
	uint64_t t143 = 2799756LLU;

    t143 = (((x753*x754)&x755)/x756);

    if (t143 != 29LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x757 = -1;
	static uint16_t x758 = UINT16_MAX;
	int8_t x760 = INT8_MIN;
	int32_t t144 = 87;

    t144 = (((x757*x758)&x759)/x760);

    if (t144 != 511) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x761 = 1482LLU;
	uint64_t t145 = 95384LLU;

    t145 = (((x761*x762)&x763)/x764);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x765 = 30;
	int16_t x766 = INT16_MIN;
	uint32_t x767 = UINT32_MAX;
	volatile uint32_t t146 = 410520524U;

    t146 = (((x765*x766)&x767)/x768);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x770 = UINT8_MAX;
	int16_t x771 = 129;
	volatile int32_t x772 = INT32_MIN;

    t147 = (((x769*x770)&x771)/x772);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x773 = INT8_MAX;
	uint32_t x776 = 1698U;
	uint32_t t148 = 1446323U;

    t148 = (((x773*x774)&x775)/x776);

    if (t148 != 2526976U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x777 = INT16_MIN;
	int32_t x778 = -1;
	static int16_t x780 = INT16_MIN;
	int32_t t149 = 527427027;

    t149 = (((x777*x778)&x779)/x780);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x782 = -1;
	int32_t x783 = INT32_MIN;
	static int64_t x784 = INT64_MAX;
	static volatile int64_t t150 = -151660956063615LL;

    t150 = (((x781*x782)&x783)/x784);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x786 = -1LL;
	static volatile uint64_t x787 = 174856765639552LLU;
	uint64_t x788 = UINT64_MAX;

    t151 = (((x785*x786)&x787)/x788);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x789 = INT8_MAX;
	int8_t x790 = INT8_MIN;
	int64_t x791 = 2767163LL;
	int8_t x792 = INT8_MIN;
	int64_t t152 = 24267263352LL;

    t152 = (((x789*x790)&x791)/x792);

    if (t152 != -21504LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x793 = UINT64_MAX;
	int8_t x796 = INT8_MIN;
	static uint64_t t153 = 2013750113272LLU;

    t153 = (((x793*x794)&x795)/x796);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x797 = 1872255U;
	int16_t x798 = -1;
	uint64_t x799 = 41271858LLU;
	static uint64_t t154 = 25087741LLU;

    t154 = (((x797*x798)&x799)/x800);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x801 = 3778320588614LL;
	static volatile uint32_t x802 = 213U;
	int16_t x803 = -1;
	int64_t x804 = -52435453LL;
	volatile int64_t t155 = -12733550388879056LL;

    t155 = (((x801*x802)&x803)/x804);

    if (t155 != -15348056LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x809 = -1;
	volatile uint8_t x810 = 8U;
	int8_t x811 = INT8_MIN;
	volatile int32_t x812 = INT32_MIN;
	int32_t t156 = -3431;

    t156 = (((x809*x810)&x811)/x812);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x813 = -2;
	int8_t x814 = -12;
	int64_t x815 = INT64_MIN;
	int16_t x816 = 8357;
	static volatile int64_t t157 = 0LL;

    t157 = (((x813*x814)&x815)/x816);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x817 = 15U;
	int32_t x818 = -1;
	int32_t x819 = INT32_MIN;

    t158 = (((x817*x818)&x819)/x820);

    if (t158 != 65536) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x822 = 0;
	uint64_t x823 = UINT64_MAX;
	int64_t x824 = -491LL;

    t159 = (((x821*x822)&x823)/x824);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = -1;
	int16_t x831 = INT16_MIN;
	static int16_t x832 = INT16_MIN;
	int32_t t160 = 8788;

    t160 = (((x829*x830)&x831)/x832);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x838 = 23;
	uint8_t x839 = 13U;
	int16_t x840 = -1;
	static volatile int32_t t161 = 5978239;

    t161 = (((x837*x838)&x839)/x840);

    if (t161 != -8) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x843 = INT32_MIN;
	uint8_t x844 = 21U;
	static volatile int64_t t162 = -865LL;

    t162 = (((x841*x842)&x843)/x844);

    if (t162 != 44961620120517875LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x849 = -1LL;
	int64_t x850 = INT64_MAX;
	int32_t x852 = -1784904;
	int64_t t163 = -19087445LL;

    t163 = (((x849*x850)&x851)/x852);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x853 = INT16_MIN;
	volatile int32_t x854 = -1;
	uint16_t x855 = 17U;
	uint32_t x856 = 25378U;

    t164 = (((x853*x854)&x855)/x856);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x857 = 682317957890807LLU;
	volatile int8_t x858 = INT8_MIN;
	int8_t x859 = -1;
	static int16_t x860 = -68;
	volatile uint64_t t165 = 15511214LLU;

    t165 = (((x857*x858)&x859)/x860);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x861 = UINT16_MAX;
	static int8_t x863 = INT8_MAX;
	static int32_t x864 = 1;

    t166 = (((x861*x862)&x863)/x864);

    if (t166 != 81) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x865 = 3841U;
	volatile int64_t x867 = INT64_MAX;
	volatile int64_t x868 = -453623802353579799LL;
	volatile int64_t t167 = -1321237042LL;

    t167 = (((x865*x866)&x867)/x868);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x869 = 6;
	static uint32_t x870 = 684U;
	int64_t x871 = -11LL;
	int64_t x872 = 975347154264831LL;

    t168 = (((x869*x870)&x871)/x872);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x873 = 56757U;
	int16_t x874 = INT16_MIN;
	static uint8_t x875 = UINT8_MAX;
	volatile uint32_t t169 = 814911620U;

    t169 = (((x873*x874)&x875)/x876);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x881 = -2;
	int32_t x882 = 496652713;
	volatile int32_t x883 = -1;
	int8_t x884 = INT8_MIN;
	volatile int32_t t170 = 20047764;

    t170 = (((x881*x882)&x883)/x884);

    if (t170 != 7760198) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x885 = INT8_MIN;
	uint8_t x886 = UINT8_MAX;
	int8_t x887 = -1;
	int8_t x888 = -1;

    t171 = (((x885*x886)&x887)/x888);

    if (t171 != 32640) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x891 = 506U;
	static int8_t x892 = -1;

    t172 = (((x889*x890)&x891)/x892);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x893 = UINT64_MAX;
	volatile uint64_t x894 = UINT64_MAX;
	volatile int32_t x895 = -2707;
	uint32_t x896 = 16U;

    t173 = (((x893*x894)&x895)/x896);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x898 = -1;
	static int32_t x899 = -1;
	volatile int32_t x900 = INT32_MIN;

    t174 = (((x897*x898)&x899)/x900);

    if (t174 != 4294967295LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x904 = UINT32_MAX;
	int64_t t175 = 15LL;

    t175 = (((x901*x902)&x903)/x904);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x905 = UINT32_MAX;
	uint64_t x906 = 544118175LLU;
	volatile int16_t x907 = INT16_MAX;
	uint64_t t176 = 193192LLU;

    t176 = (((x905*x906)&x907)/x908);

    if (t176 != 106LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x911 = -1;
	uint8_t x912 = UINT8_MAX;
	static uint64_t t177 = 112828793LLU;

    t177 = (((x909*x910)&x911)/x912);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x914 = 124;
	int8_t x915 = INT8_MIN;
	uint32_t x916 = 25U;
	int64_t t178 = -859887863707152522LL;

    t178 = (((x913*x914)&x915)/x916);

    if (t178 != 1203LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x917 = 60U;
	static volatile uint32_t x918 = 4811U;
	volatile uint16_t x919 = UINT16_MAX;
	volatile int8_t x920 = -1;
	volatile uint32_t t179 = 23160887U;

    t179 = (((x917*x918)&x919)/x920);

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x921 = -1;
	uint8_t x922 = 0U;
	static int64_t x923 = 988344524892173LL;
	uint16_t x924 = 5593U;

    t180 = (((x921*x922)&x923)/x924);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x925 = UINT8_MAX;
	static int16_t x926 = INT16_MIN;
	int16_t x927 = 0;
	static uint16_t x928 = 1064U;
	int32_t t181 = -537815;

    t181 = (((x925*x926)&x927)/x928);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x930 = -1;
	int8_t x931 = INT8_MAX;
	uint32_t t182 = 33030783U;

    t182 = (((x929*x930)&x931)/x932);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x933 = 13U;
	uint64_t t183 = 13490656311009LLU;

    t183 = (((x933*x934)&x935)/x936);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x937 = 1;
	static int8_t x938 = INT8_MIN;
	int32_t x939 = INT32_MIN;
	int32_t x940 = INT32_MIN;
	int32_t t184 = 3148;

    t184 = (((x937*x938)&x939)/x940);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x945 = -13686;
	int8_t x946 = INT8_MIN;
	uint64_t x947 = 361313448LLU;
	static int16_t x948 = INT16_MAX;
	uint64_t t185 = 4572740059444005LLU;

    t185 = (((x945*x946)&x947)/x948);

    if (t185 != 16LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x949 = 24812278382819817LLU;
	uint8_t x950 = 2U;
	static int64_t x951 = INT64_MAX;

    t186 = (((x949*x950)&x951)/x952);

    if (t186 != 3266492678096LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x954 = 29603992U;
	int8_t x955 = INT8_MIN;
	int64_t x956 = -1LL;
	volatile int64_t t187 = 691385235LL;

    t187 = (((x953*x954)&x955)/x956);

    if (t187 != -807916800LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x958 = 71U;
	int64_t x959 = 7080659LL;
	static int64_t x960 = INT64_MIN;
	int64_t t188 = 671536701227LL;

    t188 = (((x957*x958)&x959)/x960);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x961 = 28U;
	volatile uint16_t x962 = UINT16_MAX;
	static uint64_t x964 = 6173LLU;
	volatile uint64_t t189 = 12237741340LLU;

    t189 = (((x961*x962)&x963)/x964);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x965 = 1U;
	static int32_t x966 = 441;
	int32_t x967 = -25045;
	volatile int32_t t190 = 65613469;

    t190 = (((x965*x966)&x967)/x968);

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x969 = 16U;
	uint64_t x971 = UINT64_MAX;
	int8_t x972 = 3;
	uint64_t t191 = 221827722846LLU;

    t191 = (((x969*x970)&x971)/x972);

    if (t191 != 6148914691216148880LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x973 = INT32_MIN;
	static uint64_t x974 = 20764904043LLU;
	volatile int8_t x975 = -1;
	static int64_t x976 = INT64_MAX;
	static volatile uint64_t t192 = 1352812LLU;

    t192 = (((x973*x974)&x975)/x976);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x977 = 192773143U;
	uint64_t x978 = UINT64_MAX;
	static uint32_t x979 = UINT32_MAX;
	int32_t x980 = INT32_MIN;
	volatile uint64_t t193 = 49LLU;

    t193 = (((x977*x978)&x979)/x980);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x985 = 49;
	int16_t x986 = -1;
	int32_t x987 = -1;
	int64_t x988 = INT64_MAX;
	volatile int64_t t194 = 13365156497LL;

    t194 = (((x985*x986)&x987)/x988);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x989 = 0U;
	int16_t x990 = INT16_MIN;
	volatile int8_t x991 = INT8_MIN;
	static int32_t x992 = INT32_MIN;
	volatile int32_t t195 = 66591976;

    t195 = (((x989*x990)&x991)/x992);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x994 = INT8_MIN;
	volatile uint64_t x995 = 29234298822LLU;
	uint32_t x996 = 104064296U;
	uint64_t t196 = 244226274LLU;

    t196 = (((x993*x994)&x995)/x996);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1001 = 0U;
	volatile int64_t x1002 = INT64_MIN;
	static int8_t x1003 = 3;
	int64_t x1004 = INT64_MAX;
	int64_t t197 = 1LL;

    t197 = (((x1001*x1002)&x1003)/x1004);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1013 = -1LL;
	volatile uint64_t x1014 = 1535809LLU;
	volatile int16_t x1015 = INT16_MIN;
	uint64_t t198 = 3107024983049LLU;

    t198 = (((x1013*x1014)&x1015)/x1016);

    if (t198 != 72340172838070633LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x1021 = 7U;
	volatile int32_t x1023 = -1;
	int32_t x1024 = INT32_MIN;
	int64_t t199 = -15399403729597LL;

    t199 = (((x1021*x1022)&x1023)/x1024);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

