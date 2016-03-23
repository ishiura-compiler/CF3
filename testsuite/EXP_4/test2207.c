
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

uint64_t x3 = 195185901LLU;
static volatile uint8_t x8 = 99U;
uint32_t x27 = 52U;
volatile uint32_t x28 = UINT32_MAX;
volatile int8_t x31 = -1;
int16_t x33 = INT16_MIN;
int32_t x52 = -881912082;
int8_t x56 = INT8_MAX;
volatile int32_t t11 = -2;
int8_t x64 = -30;
int16_t x68 = -1;
static uint16_t x73 = 4060U;
uint16_t x74 = 5101U;
uint32_t x76 = 889381370U;
volatile uint16_t x77 = UINT16_MAX;
uint8_t x81 = UINT8_MAX;
uint16_t x83 = 102U;
volatile int32_t t16 = 1;
static int16_t x89 = INT16_MAX;
volatile int32_t t18 = -387753592;
static uint8_t x97 = 5U;
static uint16_t x104 = UINT16_MAX;
volatile int32_t t22 = -117191344;
int16_t x135 = INT16_MAX;
int16_t x141 = -11944;
int32_t x142 = -1;
int64_t x151 = -1LL;
uint64_t x152 = 998863265LLU;
static volatile int32_t t27 = 0;
int64_t x154 = INT64_MAX;
int64_t x174 = INT64_MAX;
uint64_t x176 = 9241LLU;
static int8_t x193 = INT8_MIN;
int16_t x198 = -702;
int8_t x220 = -1;
int16_t x226 = 18;
volatile int32_t t42 = 930322824;
volatile uint16_t x233 = 10704U;
int8_t x244 = -1;
int32_t t45 = -6500818;
volatile int32_t x251 = -97553;
static int16_t x255 = 1;
static volatile int64_t x270 = INT64_MIN;
uint16_t x273 = 2U;
static int32_t x277 = INT32_MIN;
uint32_t x285 = 2617U;
int8_t x289 = -1;
int32_t x290 = 659529942;
int8_t x294 = INT8_MIN;
int32_t x296 = INT32_MIN;
volatile int32_t t58 = -26782;
int64_t x306 = -123LL;
int64_t x307 = -1LL;
static int64_t x309 = -1LL;
volatile int16_t x310 = -1;
int16_t x312 = INT16_MIN;
volatile int32_t t62 = 24884;
int64_t x320 = 61001222177643077LL;
int32_t t63 = -1119732;
static int64_t x321 = -1LL;
volatile int32_t t64 = 64551;
static int64_t x338 = -1LL;
int64_t x353 = INT64_MIN;
uint32_t x360 = UINT32_MAX;
volatile uint8_t x363 = 3U;
int64_t x378 = INT64_MAX;
int64_t x380 = 14614098LL;
volatile int8_t x389 = INT8_MIN;
int16_t x392 = INT16_MAX;
int64_t x395 = 7836691100636LL;
int32_t x397 = 123;
uint32_t x400 = 1952996U;
volatile int32_t t77 = 388162448;
volatile int32_t t78 = -4003682;
int16_t x406 = INT16_MAX;
static uint32_t x412 = 115358U;
volatile int8_t x416 = 1;
volatile int32_t x417 = INT32_MIN;
int32_t x421 = -1;
uint16_t x422 = 0U;
int8_t x426 = INT8_MAX;
static int32_t t85 = 2274191;
int32_t t86 = 2090652;
int64_t x450 = INT64_MIN;
volatile int64_t x455 = -750LL;
int8_t x461 = -1;
uint16_t x465 = 12U;
uint32_t x477 = 475185U;
volatile uint16_t x481 = 17U;
volatile int8_t x482 = 1;
static volatile int32_t t94 = 178003;
uint64_t x488 = UINT64_MAX;
uint8_t x494 = UINT8_MAX;
uint32_t x500 = 2394170U;
int32_t x504 = -17109;
int32_t x510 = INT32_MAX;
int32_t t101 = 1;
static volatile int32_t t102 = -62667072;
volatile uint32_t x531 = UINT32_MAX;
int8_t x537 = -1;
uint8_t x540 = 6U;
volatile int32_t t106 = -49855318;
int8_t x552 = INT8_MAX;
static int64_t x557 = 10760LL;
static uint8_t x562 = 3U;
int8_t x567 = INT8_MIN;
volatile int32_t t111 = -1;
int64_t x569 = INT64_MAX;
volatile int16_t x573 = INT16_MAX;
volatile int32_t x576 = INT32_MIN;
int32_t x583 = -3635;
uint64_t x589 = UINT64_MAX;
static int32_t x605 = INT32_MIN;
int8_t x606 = INT8_MAX;
volatile int32_t t118 = 18218163;
int32_t t119 = 14125237;
uint8_t x627 = 43U;
static int64_t x637 = -1LL;
static int32_t x639 = INT32_MIN;
uint16_t x647 = 50U;
uint32_t x648 = UINT32_MAX;
volatile int32_t t125 = 66880046;
int32_t x653 = INT32_MIN;
volatile int8_t x654 = -1;
static int32_t t126 = -1960;
volatile int8_t x658 = 1;
static uint16_t x660 = 1288U;
int32_t t128 = -102346;
int32_t x666 = INT32_MIN;
uint32_t x680 = 1091U;
int16_t x685 = INT16_MAX;
volatile int32_t x701 = INT32_MIN;
int64_t x704 = 4394094255355436LL;
uint8_t x713 = 60U;
int8_t x726 = INT8_MIN;
int8_t x737 = INT8_MIN;
uint32_t x742 = UINT32_MAX;
uint64_t x752 = 45467765833358103LLU;
static int32_t x757 = INT32_MIN;
uint64_t x766 = UINT64_MAX;
uint32_t x767 = 175865U;
int8_t x770 = -2;
int32_t t148 = 15979219;
int8_t x774 = -1;
uint16_t x778 = UINT16_MAX;
int8_t x783 = INT8_MAX;
static int32_t x786 = INT32_MIN;
int64_t x788 = INT64_MAX;
static volatile int32_t t152 = -3;
int16_t x808 = INT16_MIN;
volatile int32_t t157 = 382411;
volatile int32_t x812 = INT32_MIN;
volatile int32_t x818 = -1;
int8_t x819 = -12;
static int16_t x828 = -514;
int64_t x831 = 5441715377066852LL;
volatile int8_t x832 = INT8_MIN;
int16_t x833 = 2781;
static int32_t t163 = -19475;
static uint16_t x865 = 0U;
int64_t x868 = INT64_MIN;
static uint16_t x869 = UINT16_MAX;
static uint8_t x871 = 32U;
int32_t x872 = INT32_MAX;
volatile int64_t x876 = -1LL;
volatile int32_t t170 = 1052425371;
static volatile int8_t x887 = -1;
volatile int16_t x889 = -1;
static int8_t x894 = -1;
volatile int32_t t173 = -2;
int32_t x911 = -671310;
static int32_t x913 = INT32_MIN;
volatile int32_t t177 = -291711216;
int32_t t178 = -618321;
int16_t x922 = INT16_MIN;
uint32_t x927 = 67598U;
int8_t x930 = INT8_MIN;
static uint64_t x932 = 23LLU;
int64_t x935 = -487857991866LL;
int32_t t182 = -1;
static int32_t x947 = 54;
int16_t x948 = -1;
int32_t t185 = 684;
int32_t x954 = INT32_MAX;
int32_t x956 = -1141957;
volatile int32_t t186 = -93170902;
int16_t x958 = -24;
int8_t x960 = INT8_MIN;
volatile int16_t x962 = INT16_MIN;
int32_t x964 = INT32_MAX;
int16_t x966 = -6051;
int32_t t191 = -61405994;
int16_t x978 = 1;
static int8_t x979 = INT8_MAX;
uint8_t x985 = 16U;
int32_t t193 = -183437;
int8_t x990 = INT8_MAX;
uint64_t x992 = UINT64_MAX;
volatile uint64_t x993 = 603LLU;
int16_t x996 = 121;
volatile int32_t t195 = -29447;
int32_t x998 = -1;
int16_t x1000 = 4;
static int32_t t196 = 5;
int32_t x1011 = 10624441;
uint64_t x1012 = 4424753674309036636LLU;
static int32_t x1016 = -138589899;


void f0(void) {
    	uint32_t x1 = 762150549U;
	volatile uint64_t x2 = 30696566LLU;
	static int8_t x4 = INT8_MAX;
	int32_t t0 = -863434042;

    t0 = (x1>(x2/(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	static int16_t x6 = 29;
	int16_t x7 = -1;
	static int32_t t1 = 750485;

    t1 = (x5>(x6/(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	static volatile int32_t x11 = INT32_MIN;
	volatile int16_t x12 = -1;
	int32_t t2 = 0;

    t2 = (x9>(x10/(x11&x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	uint8_t x14 = 3U;
	int64_t x15 = 56217115507971LL;
	int8_t x16 = -1;
	volatile int32_t t3 = 0;

    t3 = (x13>(x14/(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -1;
	volatile uint8_t x22 = 20U;
	int16_t x23 = INT16_MAX;
	volatile int32_t x24 = -382361849;
	int32_t t4 = -243852498;

    t4 = (x21>(x22/(x23&x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	uint8_t x26 = UINT8_MAX;
	static int32_t t5 = 426020;

    t5 = (x25>(x26/(x27&x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	int64_t x30 = INT64_MAX;
	volatile uint16_t x32 = UINT16_MAX;
	static volatile int32_t t6 = 668035502;

    t6 = (x29>(x30/(x31&x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x34 = INT32_MIN;
	volatile uint64_t x35 = 7845226794LLU;
	int8_t x36 = INT8_MAX;
	volatile int32_t t7 = -74630940;

    t7 = (x33>(x34/(x35&x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = 1001;
	static int16_t x38 = -471;
	volatile int8_t x39 = INT8_MAX;
	static volatile uint64_t x40 = UINT64_MAX;
	volatile int32_t t8 = 614675663;

    t8 = (x37>(x38/(x39&x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static int8_t x42 = INT8_MAX;
	int64_t x43 = -60439775LL;
	uint8_t x44 = 120U;
	int32_t t9 = 22;

    t9 = (x41>(x42/(x43&x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = -1LL;
	static volatile int16_t x51 = INT16_MAX;
	int32_t t10 = 4;

    t10 = (x49>(x50/(x51&x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x53 = -35;
	uint8_t x54 = 58U;
	int16_t x55 = INT16_MAX;

    t11 = (x53>(x54/(x55&x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x62 = -1LL;
	static volatile uint16_t x63 = UINT16_MAX;
	static int32_t t12 = -19;

    t12 = (x61>(x62/(x63&x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x66 = 6242641;
	volatile int32_t x67 = INT32_MIN;
	int32_t t13 = -23742;

    t13 = (x65>(x66/(x67&x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x75 = 2U;
	int32_t t14 = 716425871;

    t14 = (x73>(x74/(x75&x76)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x78 = 189805224200LLU;
	uint8_t x79 = UINT8_MAX;
	int8_t x80 = -1;
	int32_t t15 = -6;

    t15 = (x77>(x78/(x79&x80)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x82 = -1;
	volatile uint32_t x84 = 3315U;

    t16 = (x81>(x82/(x83&x84)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x85 = -1LL;
	int16_t x86 = 1;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	volatile int32_t t17 = 13;

    t17 = (x85>(x86/(x87&x88)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x90 = 5570073896169LLU;
	int64_t x91 = 102721762672848LL;
	static uint8_t x92 = 96U;

    t18 = (x89>(x90/(x91&x92)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x98 = INT32_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	uint16_t x100 = 1U;
	int32_t t19 = 6955955;

    t19 = (x97>(x98/(x99&x100)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x101 = INT16_MAX;
	int32_t x102 = INT32_MAX;
	static uint32_t x103 = 4015U;
	int32_t t20 = 1372209;

    t20 = (x101>(x102/(x103&x104)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x110 = 6151;
	int8_t x111 = 19;
	uint8_t x112 = UINT8_MAX;
	static int32_t t21 = 27005;

    t21 = (x109>(x110/(x111&x112)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	static int64_t x122 = -1LL;
	int8_t x123 = -1;
	uint64_t x124 = 80173388LLU;

    t22 = (x121>(x122/(x123&x124)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x129 = 25690U;
	int8_t x130 = INT8_MAX;
	uint8_t x131 = 3U;
	static uint16_t x132 = 107U;
	int32_t t23 = 4064184;

    t23 = (x129>(x130/(x131&x132)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x133 = 2;
	static uint64_t x134 = 27LLU;
	int16_t x136 = -1;
	int32_t t24 = -192111;

    t24 = (x133>(x134/(x135&x136)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x137 = -1LL;
	static uint32_t x138 = 743U;
	int64_t x139 = INT64_MAX;
	static int16_t x140 = -1;
	int32_t t25 = 1;

    t25 = (x137>(x138/(x139&x140)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x143 = INT32_MAX;
	uint16_t x144 = 4U;
	static int32_t t26 = 18;

    t26 = (x141>(x142/(x143&x144)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x149 = 785;
	int32_t x150 = 0;

    t27 = (x149>(x150/(x151&x152)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = 590U;
	int8_t x155 = INT8_MAX;
	int64_t x156 = -370851LL;
	volatile int32_t t28 = -520892;

    t28 = (x153>(x154/(x155&x156)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x157 = 156569LLU;
	uint8_t x158 = 11U;
	int8_t x159 = -1;
	int16_t x160 = INT16_MIN;
	static int32_t t29 = 3995;

    t29 = (x157>(x158/(x159&x160)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x169 = INT64_MAX;
	volatile uint16_t x170 = 2U;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = -1LL;
	volatile int32_t t30 = 311;

    t30 = (x169>(x170/(x171&x172)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	int32_t t31 = 21;

    t31 = (x173>(x174/(x175&x176)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x177 = INT16_MIN;
	uint32_t x178 = 7235679U;
	int8_t x179 = INT8_MIN;
	volatile uint64_t x180 = 212381670323LLU;
	static volatile int32_t t32 = 32042;

    t32 = (x177>(x178/(x179&x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x181 = -1;
	int64_t x182 = INT64_MAX;
	volatile int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t33 = 6595;

    t33 = (x181>(x182/(x183&x184)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x189 = 286U;
	volatile uint16_t x190 = 1U;
	static volatile int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MIN;
	volatile int32_t t34 = 65743589;

    t34 = (x189>(x190/(x191&x192)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x194 = -1;
	int32_t x195 = INT32_MAX;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t35 = 512281028;

    t35 = (x193>(x194/(x195&x196)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x197 = 166;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	volatile int32_t t36 = -6223135;

    t36 = (x197>(x198/(x199&x200)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x201 = INT64_MAX;
	int8_t x202 = 4;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = -14155658858341174LL;
	int32_t t37 = -1444;

    t37 = (x201>(x202/(x203&x204)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = UINT32_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t38 = -17630;

    t38 = (x209>(x210/(x211&x212)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x213 = 97;
	int16_t x214 = 1682;
	int16_t x215 = -1;
	uint64_t x216 = 239LLU;
	int32_t t39 = -110905;

    t39 = (x213>(x214/(x215&x216)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x217 = -54;
	int8_t x218 = -1;
	int32_t x219 = -1;
	static volatile int32_t t40 = 1203;

    t40 = (x217>(x218/(x219&x220)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x221 = 308U;
	uint8_t x222 = 16U;
	volatile int32_t x223 = 177;
	int16_t x224 = -1;
	volatile int32_t t41 = -475;

    t41 = (x221>(x222/(x223&x224)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x225 = 845U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

    t42 = (x225>(x226/(x227&x228)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x229 = -1;
	int32_t x230 = 0;
	static int64_t x231 = 15906549209778LL;
	int8_t x232 = INT8_MAX;
	static volatile int32_t t43 = -39979;

    t43 = (x229>(x230/(x231&x232)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	int32_t t44 = 390612320;

    t44 = (x233>(x234/(x235&x236)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x241 = UINT32_MAX;
	static volatile uint32_t x242 = 17U;
	int32_t x243 = -1;

    t45 = (x241>(x242/(x243&x244)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x249 = UINT16_MAX;
	static int8_t x250 = 15;
	static int16_t x252 = INT16_MIN;
	int32_t t46 = 9686215;

    t46 = (x249>(x250/(x251&x252)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x253 = 1;
	int32_t x254 = INT32_MIN;
	static uint16_t x256 = 1U;
	volatile int32_t t47 = -197553;

    t47 = (x253>(x254/(x255&x256)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x257 = -176LL;
	uint16_t x258 = UINT16_MAX;
	static int32_t x259 = -1;
	int32_t x260 = 2874;
	volatile int32_t t48 = -2527;

    t48 = (x257>(x258/(x259&x260)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MAX;
	static int32_t x263 = -36064;
	static uint64_t x264 = 423125766237455828LLU;
	volatile int32_t t49 = 0;

    t49 = (x261>(x262/(x263&x264)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint8_t x265 = 25U;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	static int16_t x268 = -1;
	volatile int32_t t50 = 51783;

    t50 = (x265>(x266/(x267&x268)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x269 = 408U;
	int16_t x271 = INT16_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t51 = 180343;

    t51 = (x269>(x270/(x271&x272)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x274 = 63;
	int32_t x275 = -1;
	uint8_t x276 = UINT8_MAX;
	int32_t t52 = -345899;

    t52 = (x273>(x274/(x275&x276)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x278 = -1;
	int32_t x279 = -129382344;
	uint64_t x280 = 16393018LLU;
	volatile int32_t t53 = 28901;

    t53 = (x277>(x278/(x279&x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x281 = 3U;
	int32_t x282 = -7;
	int16_t x283 = 40;
	uint16_t x284 = 2861U;
	int32_t t54 = 431068383;

    t54 = (x281>(x282/(x283&x284)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x286 = 6U;
	int64_t x287 = -1LL;
	volatile int32_t x288 = -26;
	volatile int32_t t55 = 140477;

    t55 = (x285>(x286/(x287&x288)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x291 = 1015U;
	static int64_t x292 = -1LL;
	int32_t t56 = -191;

    t56 = (x289>(x290/(x291&x292)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x293 = UINT16_MAX;
	int8_t x295 = -1;
	volatile int32_t t57 = -78;

    t57 = (x293>(x294/(x295&x296)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x297 = -1LL;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	static uint32_t x300 = UINT32_MAX;

    t58 = (x297>(x298/(x299&x300)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x301 = 46U;
	int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int8_t x304 = -1;
	int32_t t59 = -2820;

    t59 = (x301>(x302/(x303&x304)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x305 = 3716U;
	static int32_t x308 = 39;
	int32_t t60 = 503014;

    t60 = (x305>(x306/(x307&x308)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x311 = INT64_MIN;
	volatile int32_t t61 = -4051;

    t61 = (x309>(x310/(x311&x312)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x313 = UINT32_MAX;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;

    t62 = (x313>(x314/(x315&x316)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x317 = INT64_MIN;
	static uint64_t x318 = UINT64_MAX;
	static volatile int64_t x319 = -14LL;

    t63 = (x317>(x318/(x319&x320)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile uint16_t x324 = UINT16_MAX;

    t64 = (x321>(x322/(x323&x324)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x325 = INT16_MIN;
	static volatile int16_t x326 = INT16_MIN;
	volatile int64_t x327 = -462512866796188LL;
	uint16_t x328 = 836U;
	static int32_t t65 = 119;

    t65 = (x325>(x326/(x327&x328)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x337 = 94736213LL;
	int32_t x339 = INT32_MAX;
	int32_t x340 = -1;
	int32_t t66 = -7423;

    t66 = (x337>(x338/(x339&x340)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x345 = -1;
	uint64_t x346 = 547409871178244LLU;
	volatile int16_t x347 = -1;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t67 = -62;

    t67 = (x345>(x346/(x347&x348)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x349 = -2738LL;
	static volatile uint8_t x350 = 0U;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 28U;
	volatile int32_t t68 = 162;

    t68 = (x349>(x350/(x351&x352)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x354 = UINT8_MAX;
	volatile int64_t x355 = INT64_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t69 = 73944858;

    t69 = (x353>(x354/(x355&x356)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x357 = -2176327162LL;
	int32_t x358 = INT32_MAX;
	int32_t x359 = -1;
	int32_t t70 = -6708405;

    t70 = (x357>(x358/(x359&x360)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x361 = INT32_MIN;
	int32_t x362 = -6;
	int64_t x364 = -1LL;
	int32_t t71 = -3463822;

    t71 = (x361>(x362/(x363&x364)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x369 = 6949969488981LL;
	uint16_t x370 = 8969U;
	static uint16_t x371 = 517U;
	int8_t x372 = -1;
	volatile int32_t t72 = -795;

    t72 = (x369>(x370/(x371&x372)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x373 = -3177;
	int16_t x374 = INT16_MIN;
	int16_t x375 = INT16_MAX;
	uint32_t x376 = 5889427U;
	int32_t t73 = -425;

    t73 = (x373>(x374/(x375&x376)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x377 = 3U;
	uint32_t x379 = 103U;
	volatile int32_t t74 = 446;

    t74 = (x377>(x378/(x379&x380)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x390 = 61U;
	int64_t x391 = -1LL;
	static volatile int32_t t75 = 682;

    t75 = (x389>(x390/(x391&x392)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x393 = INT32_MAX;
	int16_t x394 = INT16_MAX;
	static volatile uint64_t x396 = 3583814437LLU;
	volatile int32_t t76 = 26905689;

    t76 = (x393>(x394/(x395&x396)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x398 = 446872LLU;
	volatile int8_t x399 = -1;

    t77 = (x397>(x398/(x399&x400)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x401 = 6152;
	int8_t x402 = INT8_MIN;
	int32_t x403 = -1;
	volatile int64_t x404 = INT64_MIN;

    t78 = (x401>(x402/(x403&x404)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x405 = 1;
	uint8_t x407 = UINT8_MAX;
	static volatile int32_t x408 = 456661;
	static volatile int32_t t79 = -63;

    t79 = (x405>(x406/(x407&x408)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x409 = 900LLU;
	static int32_t x410 = 15;
	volatile int16_t x411 = -2327;
	static int32_t t80 = 27;

    t80 = (x409>(x410/(x411&x412)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x413 = 130066LLU;
	uint64_t x414 = 34203181763LLU;
	int8_t x415 = -15;
	volatile int32_t t81 = -1565;

    t81 = (x413>(x414/(x415&x416)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	int64_t x420 = 454116498761LL;
	int32_t t82 = -14188;

    t82 = (x417>(x418/(x419&x420)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x423 = INT16_MIN;
	static int32_t x424 = -767826256;
	volatile int32_t t83 = 195572854;

    t83 = (x421>(x422/(x423&x424)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x425 = 3;
	uint64_t x427 = 323731LLU;
	uint32_t x428 = 967516U;
	static int32_t t84 = 391004935;

    t84 = (x425>(x426/(x427&x428)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x429 = INT64_MIN;
	int64_t x430 = INT64_MAX;
	int64_t x431 = -9883117936LL;
	volatile uint32_t x432 = UINT32_MAX;

    t85 = (x429>(x430/(x431&x432)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x441 = -1;
	int8_t x442 = -57;
	static int64_t x443 = INT64_MIN;
	int8_t x444 = INT8_MIN;

    t86 = (x441>(x442/(x443&x444)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x449 = INT8_MAX;
	uint16_t x451 = 6743U;
	uint64_t x452 = 8120950398LLU;
	int32_t t87 = -9660;

    t87 = (x449>(x450/(x451&x452)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x453 = 43840348LLU;
	int64_t x454 = INT64_MIN;
	int64_t x456 = INT64_MIN;
	volatile int32_t t88 = 1321;

    t88 = (x453>(x454/(x455&x456)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x457 = -1LL;
	uint8_t x458 = 3U;
	int16_t x459 = -1;
	int32_t x460 = -1;
	int32_t t89 = -120;

    t89 = (x457>(x458/(x459&x460)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x462 = INT16_MAX;
	volatile uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MAX;
	volatile int32_t t90 = 10517613;

    t90 = (x461>(x462/(x463&x464)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x466 = 1U;
	volatile int16_t x467 = -1;
	volatile int8_t x468 = -1;
	int32_t t91 = 1;

    t91 = (x465>(x466/(x467&x468)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x469 = -30924;
	volatile int32_t x470 = -118422193;
	volatile int32_t x471 = INT32_MIN;
	int16_t x472 = -1;
	volatile int32_t t92 = -424886;

    t92 = (x469>(x470/(x471&x472)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x478 = INT16_MIN;
	uint16_t x479 = UINT16_MAX;
	int32_t x480 = 1;
	int32_t t93 = -10;

    t93 = (x477>(x478/(x479&x480)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x483 = UINT16_MAX;
	volatile int16_t x484 = -1;

    t94 = (x481>(x482/(x483&x484)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x485 = -1;
	uint64_t x486 = 121956LLU;
	uint16_t x487 = UINT16_MAX;
	static volatile int32_t t95 = 100343;

    t95 = (x485>(x486/(x487&x488)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x493 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	int64_t x496 = -6198855052813LL;
	volatile int32_t t96 = 252855;

    t96 = (x493>(x494/(x495&x496)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x497 = INT16_MIN;
	int64_t x498 = -1LL;
	volatile int16_t x499 = 3;
	volatile int32_t t97 = -36353;

    t97 = (x497>(x498/(x499&x500)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x501 = UINT64_MAX;
	uint16_t x502 = UINT16_MAX;
	uint32_t x503 = 518083568U;
	int32_t t98 = -83;

    t98 = (x501>(x502/(x503&x504)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x509 = -1;
	uint64_t x511 = 228527137LLU;
	int32_t x512 = -1288;
	int32_t t99 = -2606722;

    t99 = (x509>(x510/(x511&x512)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x513 = 0;
	uint64_t x514 = UINT64_MAX;
	volatile int16_t x515 = 905;
	int16_t x516 = -1;
	volatile int32_t t100 = 15;

    t100 = (x513>(x514/(x515&x516)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x517 = 4U;
	volatile uint16_t x518 = 0U;
	uint32_t x519 = 226885U;
	static int16_t x520 = -1;

    t101 = (x517>(x518/(x519&x520)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x521 = INT16_MAX;
	int64_t x522 = -1LL;
	int16_t x523 = -1;
	static volatile int8_t x524 = INT8_MIN;

    t102 = (x521>(x522/(x523&x524)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x529 = INT32_MIN;
	uint8_t x530 = 11U;
	int16_t x532 = INT16_MAX;
	int32_t t103 = 602;

    t103 = (x529>(x530/(x531&x532)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x538 = INT8_MIN;
	static uint16_t x539 = 237U;
	volatile int32_t t104 = 0;

    t104 = (x537>(x538/(x539&x540)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x541 = 1;
	static uint32_t x542 = 1U;
	int64_t x543 = -2769060293720LL;
	int64_t x544 = INT64_MIN;
	volatile int32_t t105 = 4159324;

    t105 = (x541>(x542/(x543&x544)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x545 = INT16_MIN;
	volatile int32_t x546 = INT32_MIN;
	int8_t x547 = -10;
	int8_t x548 = -26;

    t106 = (x545>(x546/(x547&x548)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x549 = -1LL;
	uint8_t x550 = 55U;
	volatile int32_t x551 = 58445452;
	volatile int32_t t107 = -3972945;

    t107 = (x549>(x550/(x551&x552)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x553 = 834508U;
	static uint32_t x554 = 1U;
	static uint64_t x555 = UINT64_MAX;
	static uint8_t x556 = 2U;
	int32_t t108 = -1;

    t108 = (x553>(x554/(x555&x556)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x558 = 276234;
	uint16_t x559 = UINT16_MAX;
	static int32_t x560 = -1;
	static int32_t t109 = -1;

    t109 = (x557>(x558/(x559&x560)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x561 = UINT32_MAX;
	static uint8_t x563 = UINT8_MAX;
	static int16_t x564 = 150;
	volatile int32_t t110 = 11;

    t110 = (x561>(x562/(x563&x564)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x565 = -1LL;
	int32_t x566 = -1;
	uint32_t x568 = 69751U;

    t111 = (x565>(x566/(x567&x568)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x570 = 70;
	uint32_t x571 = 7412433U;
	int16_t x572 = 1;
	int32_t t112 = -27118;

    t112 = (x569>(x570/(x571&x572)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MIN;
	int32_t t113 = -7129560;

    t113 = (x573>(x574/(x575&x576)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x577 = -1;
	static int32_t x578 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	int64_t x580 = 3803515789240LL;
	volatile int32_t t114 = -73786;

    t114 = (x577>(x578/(x579&x580)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x581 = -1;
	int16_t x582 = 7;
	uint16_t x584 = 75U;
	int32_t t115 = 16500773;

    t115 = (x581>(x582/(x583&x584)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x590 = UINT64_MAX;
	int32_t x591 = INT32_MAX;
	volatile int16_t x592 = INT16_MIN;
	int32_t t116 = -360;

    t116 = (x589>(x590/(x591&x592)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x607 = 939730018617LLU;
	volatile int32_t x608 = -241852;
	int32_t t117 = 6;

    t117 = (x605>(x606/(x607&x608)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x609 = 1U;
	uint8_t x610 = 13U;
	int64_t x611 = INT64_MAX;
	int16_t x612 = INT16_MAX;

    t118 = (x609>(x610/(x611&x612)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x613 = INT16_MIN;
	int32_t x614 = -1;
	int32_t x615 = INT32_MAX;
	static int16_t x616 = INT16_MAX;

    t119 = (x613>(x614/(x615&x616)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x621 = INT16_MIN;
	static volatile uint8_t x622 = UINT8_MAX;
	uint32_t x623 = 44821U;
	uint16_t x624 = UINT16_MAX;
	int32_t t120 = -29;

    t120 = (x621>(x622/(x623&x624)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x625 = 4204535586017462251LLU;
	uint64_t x626 = 1738864266LLU;
	static uint32_t x628 = UINT32_MAX;
	volatile int32_t t121 = 929704;

    t121 = (x625>(x626/(x627&x628)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x629 = INT16_MIN;
	static uint32_t x630 = 21U;
	static int8_t x631 = INT8_MIN;
	uint64_t x632 = 257720656422386515LLU;
	int32_t t122 = 2296;

    t122 = (x629>(x630/(x631&x632)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x638 = 75U;
	static int16_t x640 = -5;
	int32_t t123 = -89499573;

    t123 = (x637>(x638/(x639&x640)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x641 = 13U;
	volatile int64_t x642 = INT64_MAX;
	uint32_t x643 = 5U;
	volatile int64_t x644 = -2983808336866336007LL;
	volatile int32_t t124 = 6954364;

    t124 = (x641>(x642/(x643&x644)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x645 = 6;
	int64_t x646 = INT64_MIN;

    t125 = (x645>(x646/(x647&x648)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x655 = UINT64_MAX;
	volatile uint32_t x656 = UINT32_MAX;

    t126 = (x653>(x654/(x655&x656)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x657 = -4;
	uint32_t x659 = 28038U;
	int32_t t127 = -481;

    t127 = (x657>(x658/(x659&x660)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x661 = 1804663330542LLU;
	volatile int16_t x662 = -117;
	int64_t x663 = 53953222798393823LL;
	int8_t x664 = INT8_MIN;

    t128 = (x661>(x662/(x663&x664)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x665 = 26U;
	int32_t x667 = -1;
	uint32_t x668 = 1281157114U;
	int32_t t129 = 103093;

    t129 = (x665>(x666/(x667&x668)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x673 = 402953U;
	static int32_t x674 = -46972776;
	int64_t x675 = 16289553482LL;
	int16_t x676 = INT16_MAX;
	int32_t t130 = -43;

    t130 = (x673>(x674/(x675&x676)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x677 = INT16_MIN;
	uint64_t x678 = 10111178229291LLU;
	static volatile uint16_t x679 = 29U;
	int32_t t131 = 3;

    t131 = (x677>(x678/(x679&x680)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x686 = UINT8_MAX;
	static int32_t x687 = INT32_MIN;
	int32_t x688 = INT32_MIN;
	volatile int32_t t132 = -4397797;

    t132 = (x685>(x686/(x687&x688)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x689 = INT8_MIN;
	static int8_t x690 = INT8_MIN;
	volatile int16_t x691 = INT16_MAX;
	uint16_t x692 = 19312U;
	volatile int32_t t133 = -9;

    t133 = (x689>(x690/(x691&x692)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x702 = 11;
	int8_t x703 = INT8_MIN;
	int32_t t134 = 157406300;

    t134 = (x701>(x702/(x703&x704)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x705 = INT32_MAX;
	int32_t x706 = INT32_MIN;
	int16_t x707 = INT16_MIN;
	int8_t x708 = INT8_MIN;
	static volatile int32_t t135 = 23765;

    t135 = (x705>(x706/(x707&x708)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x714 = INT32_MIN;
	volatile int64_t x715 = INT64_MAX;
	int8_t x716 = INT8_MIN;
	int32_t t136 = -3;

    t136 = (x713>(x714/(x715&x716)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x725 = 72858U;
	int16_t x727 = INT16_MIN;
	volatile uint16_t x728 = UINT16_MAX;
	int32_t t137 = 14;

    t137 = (x725>(x726/(x727&x728)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x729 = 0;
	uint32_t x730 = 972U;
	uint64_t x731 = UINT64_MAX;
	int32_t x732 = -1;
	static volatile int32_t t138 = 2898419;

    t138 = (x729>(x730/(x731&x732)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x733 = INT32_MIN;
	static volatile uint64_t x734 = 23615663560886428LLU;
	int8_t x735 = -30;
	volatile int8_t x736 = -1;
	volatile int32_t t139 = -235;

    t139 = (x733>(x734/(x735&x736)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x738 = UINT16_MAX;
	int32_t x739 = -1;
	int8_t x740 = -1;
	volatile int32_t t140 = -93259;

    t140 = (x737>(x738/(x739&x740)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x741 = 68363447300973LLU;
	uint64_t x743 = 2734382849490LLU;
	static uint8_t x744 = 20U;
	int32_t t141 = -53;

    t141 = (x741>(x742/(x743&x744)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MIN;
	int32_t x747 = -1;
	int8_t x748 = INT8_MAX;
	volatile int32_t t142 = 65;

    t142 = (x745>(x746/(x747&x748)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x749 = INT32_MIN;
	uint8_t x750 = 63U;
	int32_t x751 = INT32_MIN;
	int32_t t143 = 253698;

    t143 = (x749>(x750/(x751&x752)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x753 = INT16_MIN;
	uint32_t x754 = 63U;
	int32_t x755 = -5146830;
	int64_t x756 = -1LL;
	volatile int32_t t144 = -21;

    t144 = (x753>(x754/(x755&x756)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x758 = -53;
	int64_t x759 = 8096675787LL;
	static int32_t x760 = INT32_MAX;
	volatile int32_t t145 = -671893;

    t145 = (x757>(x758/(x759&x760)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MAX;
	uint8_t x763 = 2U;
	uint32_t x764 = UINT32_MAX;
	int32_t t146 = -158541824;

    t146 = (x761>(x762/(x763&x764)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x768 = -6;
	int32_t t147 = -210774044;

    t147 = (x765>(x766/(x767&x768)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x769 = INT64_MIN;
	static volatile int32_t x771 = -1;
	uint8_t x772 = 1U;

    t148 = (x769>(x770/(x771&x772)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x773 = 22928461311792LL;
	volatile int8_t x775 = -5;
	volatile uint64_t x776 = 57684549LLU;
	static volatile int32_t t149 = -1727159;

    t149 = (x773>(x774/(x775&x776)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x777 = INT64_MIN;
	volatile uint32_t x779 = 2712021U;
	int8_t x780 = -1;
	static int32_t t150 = -1800113;

    t150 = (x777>(x778/(x779&x780)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x781 = 51U;
	int32_t x782 = INT32_MIN;
	int32_t x784 = -1;
	volatile int32_t t151 = 0;

    t151 = (x781>(x782/(x783&x784)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x785 = -1LL;
	static uint16_t x787 = 32092U;

    t152 = (x785>(x786/(x787&x788)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x789 = -1;
	volatile int32_t x790 = INT32_MIN;
	volatile int8_t x791 = INT8_MIN;
	int8_t x792 = -5;
	int32_t t153 = 0;

    t153 = (x789>(x790/(x791&x792)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x793 = UINT64_MAX;
	volatile int64_t x794 = -1LL;
	static int64_t x795 = INT64_MAX;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t154 = 352;

    t154 = (x793>(x794/(x795&x796)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x797 = INT8_MIN;
	static int8_t x798 = 49;
	volatile uint32_t x799 = 957226279U;
	uint16_t x800 = UINT16_MAX;
	static int32_t t155 = 1762138;

    t155 = (x797>(x798/(x799&x800)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x801 = 243;
	int32_t x802 = INT32_MIN;
	int8_t x803 = -1;
	uint32_t x804 = 103588361U;
	volatile int32_t t156 = 5691;

    t156 = (x801>(x802/(x803&x804)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x805 = INT64_MAX;
	uint16_t x806 = 13U;
	static int64_t x807 = -27038682LL;

    t157 = (x805>(x806/(x807&x808)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x809 = INT16_MIN;
	int64_t x810 = -9389386486066LL;
	int8_t x811 = -1;
	int32_t t158 = 344151614;

    t158 = (x809>(x810/(x811&x812)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x817 = INT32_MIN;
	volatile int16_t x820 = INT16_MIN;
	int32_t t159 = -29;

    t159 = (x817>(x818/(x819&x820)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x825 = 499;
	static int64_t x826 = 365LL;
	volatile int8_t x827 = -1;
	int32_t t160 = -1;

    t160 = (x825>(x826/(x827&x828)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x829 = INT32_MIN;
	int64_t x830 = INT64_MAX;
	volatile int32_t t161 = 235026;

    t161 = (x829>(x830/(x831&x832)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x834 = 9229U;
	uint8_t x835 = UINT8_MAX;
	int32_t x836 = -1;
	int32_t t162 = 1450204;

    t162 = (x833>(x834/(x835&x836)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x845 = 2141423655U;
	static uint8_t x846 = UINT8_MAX;
	uint16_t x847 = UINT16_MAX;
	uint16_t x848 = 2U;

    t163 = (x845>(x846/(x847&x848)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x849 = UINT8_MAX;
	volatile int16_t x850 = 404;
	int16_t x851 = 2;
	static uint8_t x852 = UINT8_MAX;
	int32_t t164 = -147748;

    t164 = (x849>(x850/(x851&x852)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x853 = UINT64_MAX;
	volatile uint64_t x854 = UINT64_MAX;
	volatile uint8_t x855 = UINT8_MAX;
	volatile int8_t x856 = INT8_MIN;
	static volatile int32_t t165 = 1247499;

    t165 = (x853>(x854/(x855&x856)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x861 = 7U;
	static int8_t x862 = INT8_MIN;
	int32_t x863 = 165;
	static uint16_t x864 = 5995U;
	volatile int32_t t166 = -247;

    t166 = (x861>(x862/(x863&x864)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x866 = UINT8_MAX;
	int8_t x867 = INT8_MIN;
	volatile int32_t t167 = -1;

    t167 = (x865>(x866/(x867&x868)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x870 = 0U;
	int32_t t168 = 88;

    t168 = (x869>(x870/(x871&x872)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x873 = -1;
	static int8_t x874 = 12;
	int64_t x875 = -119952LL;
	int32_t t169 = 477;

    t169 = (x873>(x874/(x875&x876)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x877 = -1;
	uint64_t x878 = UINT64_MAX;
	static uint64_t x879 = UINT64_MAX;
	int8_t x880 = INT8_MIN;

    t170 = (x877>(x878/(x879&x880)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x885 = 11U;
	uint64_t x886 = 3LLU;
	static int8_t x888 = INT8_MIN;
	volatile int32_t t171 = -7680860;

    t171 = (x885>(x886/(x887&x888)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x890 = INT32_MAX;
	int8_t x891 = -1;
	static int8_t x892 = -1;
	int32_t t172 = 66094127;

    t172 = (x889>(x890/(x891&x892)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x893 = INT32_MIN;
	uint16_t x895 = 20358U;
	uint64_t x896 = UINT64_MAX;

    t173 = (x893>(x894/(x895&x896)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x897 = INT64_MIN;
	int16_t x898 = INT16_MIN;
	uint64_t x899 = 241LLU;
	static volatile int8_t x900 = -33;
	int32_t t174 = -9933130;

    t174 = (x897>(x898/(x899&x900)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x905 = 775585138361LLU;
	uint8_t x906 = UINT8_MAX;
	int8_t x907 = INT8_MIN;
	uint16_t x908 = 6396U;
	volatile int32_t t175 = 1;

    t175 = (x905>(x906/(x907&x908)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x909 = -6348062;
	uint64_t x910 = 237488367LLU;
	static int64_t x912 = 7506865983839003LL;
	int32_t t176 = -57;

    t176 = (x909>(x910/(x911&x912)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x914 = INT64_MIN;
	uint64_t x915 = UINT64_MAX;
	int32_t x916 = -199571834;

    t177 = (x913>(x914/(x915&x916)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x917 = INT64_MIN;
	int16_t x918 = INT16_MAX;
	int64_t x919 = INT64_MIN;
	uint64_t x920 = UINT64_MAX;

    t178 = (x917>(x918/(x919&x920)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x921 = 39U;
	static uint8_t x923 = UINT8_MAX;
	uint64_t x924 = 29198274148970430LLU;
	static int32_t t179 = -249734;

    t179 = (x921>(x922/(x923&x924)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x925 = -1;
	int8_t x926 = INT8_MIN;
	int32_t x928 = -1;
	volatile int32_t t180 = 1;

    t180 = (x925>(x926/(x927&x928)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x929 = 557112220802LLU;
	uint64_t x931 = 25196453LLU;
	static int32_t t181 = -964;

    t181 = (x929>(x930/(x931&x932)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x933 = INT32_MIN;
	uint8_t x934 = UINT8_MAX;
	int8_t x936 = -1;

    t182 = (x933>(x934/(x935&x936)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x937 = -1470;
	volatile int32_t x938 = INT32_MIN;
	volatile uint64_t x939 = UINT64_MAX;
	int8_t x940 = INT8_MIN;
	int32_t t183 = -11421;

    t183 = (x937>(x938/(x939&x940)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x945 = 0;
	static uint64_t x946 = UINT64_MAX;
	static int32_t t184 = -143852;

    t184 = (x945>(x946/(x947&x948)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x949 = -1;
	uint32_t x950 = UINT32_MAX;
	int16_t x951 = -1;
	static int32_t x952 = INT32_MIN;

    t185 = (x949>(x950/(x951&x952)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x953 = -1;
	int8_t x955 = -1;

    t186 = (x953>(x954/(x955&x956)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x957 = 20U;
	int16_t x959 = INT16_MAX;
	volatile int32_t t187 = -16964555;

    t187 = (x957>(x958/(x959&x960)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x961 = 293;
	uint64_t x963 = UINT64_MAX;
	volatile int32_t t188 = -60;

    t188 = (x961>(x962/(x963&x964)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x965 = 170858U;
	static int8_t x967 = INT8_MAX;
	uint8_t x968 = 9U;
	static int32_t t189 = -298974940;

    t189 = (x965>(x966/(x967&x968)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x969 = -1;
	volatile int64_t x970 = 52LL;
	uint8_t x971 = 4U;
	int32_t x972 = -1;
	volatile int32_t t190 = 1;

    t190 = (x969>(x970/(x971&x972)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x973 = INT32_MAX;
	volatile uint16_t x974 = 331U;
	static uint32_t x975 = UINT32_MAX;
	int16_t x976 = INT16_MAX;

    t191 = (x973>(x974/(x975&x976)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x977 = 193656971LLU;
	uint16_t x980 = 1341U;
	int32_t t192 = 20501;

    t192 = (x977>(x978/(x979&x980)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x986 = 5795670074077107LLU;
	int64_t x987 = -1LL;
	int8_t x988 = -1;

    t193 = (x985>(x986/(x987&x988)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x989 = 36U;
	uint8_t x991 = UINT8_MAX;
	volatile int32_t t194 = 10473814;

    t194 = (x989>(x990/(x991&x992)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x994 = 17205;
	static int8_t x995 = 9;

    t195 = (x993>(x994/(x995&x996)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x997 = 12690U;
	static volatile int16_t x999 = INT16_MAX;

    t196 = (x997>(x998/(x999&x1000)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1005 = -1LL;
	int32_t x1006 = 75;
	int64_t x1007 = 7027225226411LL;
	uint16_t x1008 = 3U;
	static volatile int32_t t197 = 1;

    t197 = (x1005>(x1006/(x1007&x1008)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1009 = -624;
	volatile int16_t x1010 = -1;
	static int32_t t198 = 2;

    t198 = (x1009>(x1010/(x1011&x1012)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1013 = 2U;
	uint32_t x1014 = 1545U;
	int64_t x1015 = -23058615091604LL;
	int32_t t199 = -54;

    t199 = (x1013>(x1014/(x1015&x1016)));

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

