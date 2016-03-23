
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

volatile int8_t x2 = -1;
volatile int8_t x3 = INT8_MIN;
int8_t x11 = 3;
int16_t x19 = INT16_MAX;
int8_t x25 = INT8_MIN;
volatile int32_t t6 = -2413;
int32_t x29 = INT32_MAX;
uint32_t x51 = UINT32_MAX;
int32_t x52 = -1;
static uint64_t x54 = UINT64_MAX;
static int64_t x59 = -1LL;
int64_t x63 = 0LL;
uint16_t x64 = 86U;
volatile int32_t t15 = 228770681;
uint32_t x66 = 49695369U;
int64_t x68 = -1LL;
volatile int32_t t16 = 883691;
int64_t x71 = INT64_MIN;
int16_t x72 = INT16_MIN;
static int16_t x75 = -7052;
volatile uint8_t x77 = UINT8_MAX;
uint8_t x81 = UINT8_MAX;
int32_t x91 = INT32_MIN;
volatile int32_t t22 = -257691;
volatile int32_t t23 = -6;
int64_t x97 = 25796005943965509LL;
uint8_t x102 = 0U;
int8_t x108 = INT8_MIN;
volatile uint64_t x109 = 2060275304LLU;
uint64_t x112 = 3381590LLU;
int32_t t27 = 263;
volatile int32_t t29 = -195445698;
int8_t x123 = 0;
int16_t x124 = INT16_MIN;
uint64_t x128 = UINT64_MAX;
int32_t t31 = 145995;
int32_t x135 = 949283;
int32_t t33 = -9538866;
int8_t x137 = -5;
static int32_t x138 = INT32_MAX;
volatile int32_t t37 = -1;
uint64_t x156 = 42432858LLU;
static uint8_t x164 = UINT8_MAX;
static volatile int32_t t40 = 152;
static int32_t x166 = 121;
volatile int8_t x168 = INT8_MIN;
int32_t x182 = INT32_MAX;
volatile int32_t t49 = -227484;
uint8_t x206 = 90U;
static volatile int32_t t50 = -151858;
uint32_t x210 = 9840318U;
int32_t x211 = -9;
volatile int64_t x217 = INT64_MIN;
int64_t x219 = -2LL;
int32_t t53 = -1;
int32_t x221 = -12536977;
uint32_t x222 = 215U;
uint32_t x223 = UINT32_MAX;
static int32_t t54 = 1;
volatile uint16_t x225 = 3U;
int64_t x227 = INT64_MIN;
int32_t t55 = 96700993;
int32_t x233 = INT32_MIN;
static volatile int32_t t57 = 261642929;
volatile int32_t x250 = INT32_MIN;
volatile int8_t x252 = -1;
int16_t x256 = INT16_MAX;
uint16_t x262 = UINT16_MAX;
volatile int32_t t64 = 20027779;
static int32_t x270 = INT32_MAX;
int64_t x275 = 6LL;
volatile int32_t x277 = -7;
static volatile int8_t x289 = INT8_MIN;
uint32_t x292 = UINT32_MAX;
int32_t t71 = -15983;
volatile uint8_t x294 = UINT8_MAX;
volatile int32_t t74 = -4351250;
static uint32_t x310 = UINT32_MAX;
static uint32_t x311 = 26593201U;
static volatile int32_t x315 = INT32_MIN;
volatile int32_t t78 = -10098;
int32_t t79 = -89;
int16_t x325 = INT16_MIN;
int32_t t80 = -4;
static volatile int32_t t81 = 256417517;
int16_t x336 = INT16_MIN;
int64_t x339 = 3778LL;
uint64_t x341 = 0LLU;
volatile int32_t t84 = -693254;
int16_t x352 = -10;
int16_t x358 = 11;
static uint16_t x365 = 4U;
int16_t x369 = 2834;
volatile int64_t x377 = 2963LL;
uint32_t x379 = 14972964U;
volatile int16_t x385 = 3741;
uint64_t x391 = UINT64_MAX;
int16_t x392 = 6;
int32_t t96 = 122373262;
uint8_t x397 = 3U;
volatile uint64_t x398 = UINT64_MAX;
static volatile uint32_t x399 = 162U;
volatile int16_t x401 = -1;
uint64_t x407 = 31415125186LLU;
uint8_t x410 = 25U;
int32_t t101 = -17;
volatile uint32_t x420 = 20U;
int16_t x425 = INT16_MAX;
int64_t x436 = -1LL;
int64_t x439 = INT64_MAX;
int16_t x442 = 0;
volatile uint32_t x445 = 21448U;
uint16_t x451 = UINT16_MAX;
int32_t x452 = INT32_MIN;
int64_t x458 = INT64_MIN;
int64_t x460 = INT64_MIN;
int8_t x462 = -1;
uint64_t x463 = 96076744049LLU;
static int8_t x467 = -1;
static int32_t x473 = INT32_MIN;
volatile int64_t x476 = -1LL;
volatile int64_t x483 = INT64_MAX;
int32_t x484 = INT32_MIN;
static uint16_t x494 = 2U;
static int64_t x495 = INT64_MIN;
int32_t x499 = -159428830;
static int32_t x500 = -23483569;
int32_t t124 = -201692;
static volatile int32_t t125 = 468455;
uint32_t x509 = 256036U;
int8_t x511 = INT8_MIN;
int64_t x512 = INT64_MAX;
int32_t t126 = 86914;
static int64_t x513 = INT64_MAX;
uint16_t x514 = UINT16_MAX;
static int64_t x517 = INT64_MAX;
int16_t x521 = -1;
volatile int8_t x527 = -1;
volatile uint32_t x536 = UINT32_MAX;
static volatile int8_t x540 = 2;
volatile int32_t t133 = 895;
int32_t x548 = INT32_MIN;
volatile int32_t t135 = 1;
int32_t x549 = -1;
int64_t x551 = -1LL;
int64_t x552 = -82LL;
int64_t x556 = -32721618LL;
int32_t t138 = -2;
static int16_t x562 = -760;
uint64_t x565 = 437836637LLU;
volatile int32_t t140 = 166464567;
int32_t x576 = 61;
static int64_t x579 = -1LL;
uint16_t x582 = 96U;
int32_t x585 = INT32_MIN;
int16_t x586 = 10;
volatile int32_t t146 = -181;
int8_t x596 = INT8_MAX;
volatile uint16_t x597 = 5U;
static int64_t x600 = INT64_MAX;
int16_t x602 = -1;
int64_t x606 = INT64_MAX;
int32_t x607 = INT32_MIN;
int8_t x608 = 0;
static volatile int16_t x609 = -5882;
static int32_t t151 = 2063404;
static uint32_t x616 = 112U;
int8_t x617 = -28;
static volatile int32_t x618 = INT32_MAX;
volatile int64_t x624 = 116LL;
static uint16_t x630 = UINT16_MAX;
int64_t x634 = INT64_MAX;
int8_t x638 = 58;
int16_t x643 = INT16_MIN;
int8_t x651 = -1;
int64_t x660 = -1043LL;
static volatile int32_t t165 = 48854156;
int16_t x671 = -944;
int32_t t166 = -507868846;
uint16_t x674 = 0U;
uint8_t x675 = 2U;
int32_t t167 = 592637;
static int32_t t169 = -77986;
int64_t x697 = -1LL;
static int32_t x709 = INT32_MIN;
int16_t x710 = INT16_MIN;
int64_t x712 = -1LL;
int32_t x714 = -1;
volatile int32_t t178 = -1210696;
static int8_t x722 = -1;
int64_t x723 = INT64_MIN;
int8_t x726 = -1;
int16_t x728 = -1;
volatile int32_t t181 = -2021;
volatile uint8_t x735 = UINT8_MAX;
int32_t t182 = -106;
volatile int64_t x738 = -1LL;
volatile int32_t t183 = -1611192;
int64_t x741 = INT64_MIN;
static int64_t x744 = -1LL;
int32_t x745 = INT32_MIN;
int64_t x746 = INT64_MIN;
int16_t x748 = INT16_MIN;
volatile int32_t t186 = 2433017;
int32_t x759 = INT32_MIN;
volatile uint16_t x767 = UINT16_MAX;
uint8_t x772 = UINT8_MAX;
static int32_t t194 = 288387049;
volatile int32_t t195 = -13380;
int8_t x792 = INT8_MIN;
int64_t x796 = INT64_MIN;
int8_t x799 = -1;
int64_t x801 = INT64_MIN;
int64_t x803 = INT64_MIN;


void f0(void) {
    	volatile uint32_t x1 = 532033U;
	int64_t x4 = -1LL;
	int32_t t0 = 73157791;

    t0 = (((x1==x2)+x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	static int16_t x6 = 50;
	int64_t x7 = -1LL;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 475712065;

    t1 = (((x5==x6)+x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	uint8_t x12 = 61U;
	static volatile int32_t t2 = 852;

    t2 = (((x9==x10)+x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	static int64_t x14 = -4009699892033080673LL;
	uint8_t x15 = 32U;
	uint32_t x16 = 161267982U;
	static int32_t t3 = 6457418;

    t3 = (((x13==x14)+x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MIN;
	volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 155495;

    t4 = (((x17==x18)+x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x21 = -43458763;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -251322;

    t5 = (((x21==x22)+x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	uint8_t x27 = 6U;
	int32_t x28 = -5000;

    t6 = (((x25==x26)+x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 160750U;
	int32_t x31 = 60939;
	uint64_t x32 = 7684505895LLU;
	int32_t t7 = 1510232;

    t7 = (((x29==x30)+x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 77U;
	volatile uint64_t x36 = UINT64_MAX;
	static volatile int32_t t8 = -13858;

    t8 = (((x33==x34)+x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 11549;
	int64_t x38 = 284417996152866LL;
	uint8_t x39 = UINT8_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 2912243;

    t9 = (((x37==x38)+x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = -1LL;
	int64_t x43 = 245554718867459545LL;
	uint8_t x44 = UINT8_MAX;
	static int32_t t10 = -73;

    t10 = (((x41==x42)+x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x45 = INT32_MIN;
	static int32_t x46 = INT32_MIN;
	int32_t x47 = 1563;
	uint8_t x48 = 5U;
	volatile int32_t t11 = -1000;

    t11 = (((x45==x46)+x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	uint16_t x50 = 16288U;
	static volatile int32_t t12 = -3323432;

    t12 = (((x49==x50)+x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	static int8_t x56 = -1;
	int32_t t13 = -807;

    t13 = (((x53==x54)+x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MAX;
	uint32_t x60 = UINT32_MAX;
	int32_t t14 = 79275392;

    t14 = (((x57==x58)+x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = 2;
	volatile uint8_t x62 = UINT8_MAX;

    t15 = (((x61==x62)+x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	uint16_t x67 = 1033U;

    t16 = (((x65==x66)+x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -528557403663632LL;
	uint64_t x70 = 237207722248LLU;
	static volatile int32_t t17 = 89;

    t17 = (((x69==x70)+x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -55;
	uint8_t x74 = 0U;
	volatile uint8_t x76 = 46U;
	int32_t t18 = 1;

    t18 = (((x73==x74)+x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x78 = UINT32_MAX;
	static uint32_t x79 = 8333693U;
	static int32_t x80 = 2960026;
	int32_t t19 = 3029941;

    t19 = (((x77==x78)+x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = -974522902LL;
	int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	volatile int32_t t20 = 5059517;

    t20 = (((x81==x82)+x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	uint16_t x86 = 47U;
	static uint64_t x87 = 1731006779123637LLU;
	int64_t x88 = INT64_MAX;
	static int32_t t21 = -48362891;

    t21 = (((x85==x86)+x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	volatile uint64_t x90 = UINT64_MAX;
	static uint16_t x92 = UINT16_MAX;

    t22 = (((x89==x90)+x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = 166U;
	int64_t x96 = INT64_MAX;

    t23 = (((x93==x94)+x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = -1;
	static int32_t x99 = 8;
	static int32_t x100 = -1;
	int32_t t24 = -5;

    t24 = (((x97==x98)+x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = INT8_MIN;
	static int32_t x103 = 1;
	static volatile int8_t x104 = INT8_MAX;
	int32_t t25 = -6510;

    t25 = (((x101==x102)+x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	int32_t t26 = -2;

    t26 = (((x105==x106)+x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = -1;
	volatile uint8_t x111 = 25U;

    t27 = (((x109==x110)+x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 259U;
	volatile int16_t x114 = -1;
	static int16_t x115 = -1;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = 22;

    t28 = (((x113==x114)+x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = 12161;
	static int32_t x118 = -30130;
	int64_t x119 = 53920216203402869LL;
	int32_t x120 = INT32_MAX;

    t29 = (((x117==x118)+x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	uint8_t x122 = 110U;
	int32_t t30 = 18772546;

    t30 = (((x121==x122)+x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MIN;

    t31 = (((x125==x126)+x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	volatile int8_t x131 = INT8_MIN;
	uint16_t x132 = 6658U;
	static volatile int32_t t32 = 465;

    t32 = (((x129==x130)+x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 60303636366LL;
	int8_t x134 = -1;
	int16_t x136 = 22;

    t33 = (((x133==x134)+x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x139 = INT16_MAX;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = 540;

    t34 = (((x137==x138)+x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 265676319788548LLU;
	uint32_t x144 = 423069U;
	volatile int32_t t35 = 55022;

    t35 = (((x141==x142)+x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = -4;
	volatile uint8_t x147 = 14U;
	volatile int8_t x148 = -3;
	int32_t t36 = 15;

    t36 = (((x145==x146)+x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 646157388U;
	uint16_t x150 = 267U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;

    t37 = (((x149==x150)+x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = INT64_MIN;
	uint16_t x154 = 25U;
	int16_t x155 = INT16_MAX;
	int32_t t38 = -6205006;

    t38 = (((x153==x154)+x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 2U;
	int32_t x158 = -1;
	int8_t x159 = -1;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -85759;

    t39 = (((x157==x158)+x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	int8_t x162 = -1;
	uint8_t x163 = UINT8_MAX;

    t40 = (((x161==x162)+x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -1LL;
	volatile int16_t x167 = -1;
	int32_t t41 = -55372454;

    t41 = (((x165==x166)+x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = -52;
	volatile int32_t x170 = INT32_MIN;
	volatile uint16_t x171 = 1572U;
	int64_t x172 = -1LL;
	volatile int32_t t42 = 4;

    t42 = (((x169==x170)+x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = -45603468386LL;
	volatile int64_t x175 = INT64_MIN;
	static int16_t x176 = INT16_MAX;
	int32_t t43 = 1592903;

    t43 = (((x173==x174)+x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x181 = 2;
	int32_t x183 = -1;
	int64_t x184 = -1LL;
	int32_t t44 = 38477996;

    t44 = (((x181==x182)+x183)>x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x185 = INT32_MIN;
	volatile int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	volatile int32_t t45 = -15227;

    t45 = (((x185==x186)+x187)>x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	volatile int16_t x190 = INT16_MIN;
	uint16_t x191 = 4259U;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t46 = 230;

    t46 = (((x189==x190)+x191)>x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = 52;
	int8_t x194 = INT8_MIN;
	int64_t x195 = 46718718079737453LL;
	uint8_t x196 = UINT8_MAX;
	int32_t t47 = 188082;

    t47 = (((x193==x194)+x195)>x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	volatile int8_t x198 = 26;
	uint64_t x199 = 1578067290279853784LLU;
	volatile int16_t x200 = -49;
	volatile int32_t t48 = -576;

    t48 = (((x197==x198)+x199)>x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	int32_t x204 = -58;

    t49 = (((x201==x202)+x203)>x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MIN;
	uint16_t x207 = 0U;
	int64_t x208 = INT64_MIN;

    t50 = (((x205==x206)+x207)>x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x209 = 153663756U;
	static volatile int16_t x212 = 0;
	int32_t t51 = -1;

    t51 = (((x209==x210)+x211)>x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = 87172058908LLU;
	uint32_t x214 = 1U;
	uint8_t x215 = 2U;
	uint16_t x216 = 28598U;
	volatile int32_t t52 = 468982186;

    t52 = (((x213==x214)+x215)>x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x218 = 23942U;
	int8_t x220 = INT8_MIN;

    t53 = (((x217==x218)+x219)>x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x224 = 10049U;

    t54 = (((x221==x222)+x223)>x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x226 = INT8_MIN;
	int16_t x228 = INT16_MAX;

    t55 = (((x225==x226)+x227)>x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x229 = -3;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MAX;
	int32_t x232 = -257972;
	static int32_t t56 = 1562;

    t56 = (((x229==x230)+x231)>x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x234 = -252;
	uint64_t x235 = 106LLU;
	static volatile uint32_t x236 = 1170U;

    t57 = (((x233==x234)+x235)>x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x237 = 3930861335LL;
	uint16_t x238 = 10U;
	static int64_t x239 = INT64_MAX;
	uint64_t x240 = 151993481LLU;
	static int32_t t58 = -135059760;

    t58 = (((x237==x238)+x239)>x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x241 = INT8_MAX;
	volatile uint8_t x242 = 9U;
	int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t59 = -1;

    t59 = (((x241==x242)+x243)>x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x245 = 1U;
	int32_t x246 = -126830;
	int64_t x247 = INT64_MAX;
	static uint32_t x248 = 13346147U;
	static volatile int32_t t60 = -3440861;

    t60 = (((x245==x246)+x247)>x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = UINT64_MAX;
	int32_t x251 = 24291105;
	volatile int32_t t61 = -13837;

    t61 = (((x249==x250)+x251)>x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x253 = INT32_MIN;
	int16_t x254 = -219;
	uint16_t x255 = UINT16_MAX;
	int32_t t62 = 54;

    t62 = (((x253==x254)+x255)>x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	volatile uint16_t x258 = 257U;
	static int32_t x259 = 16881;
	int16_t x260 = 6750;
	static volatile int32_t t63 = -47631;

    t63 = (((x257==x258)+x259)>x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = 2U;

    t64 = (((x261==x262)+x263)>x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x265 = INT64_MIN;
	int8_t x266 = 30;
	int16_t x267 = -1;
	uint64_t x268 = 5784156LLU;
	static int32_t t65 = 13;

    t65 = (((x265==x266)+x267)>x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	volatile int32_t x271 = INT32_MIN;
	uint64_t x272 = 3LLU;
	int32_t t66 = -5252;

    t66 = (((x269==x270)+x271)>x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x273 = INT64_MIN;
	volatile int8_t x274 = INT8_MAX;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t67 = -305;

    t67 = (((x273==x274)+x275)>x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	uint64_t x280 = 20530846LLU;
	volatile int32_t t68 = 21239;

    t68 = (((x277==x278)+x279)>x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	static uint8_t x282 = 97U;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = -1;
	static volatile int32_t t69 = -50;

    t69 = (((x281==x282)+x283)>x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x285 = -2068;
	int64_t x286 = 1LL;
	volatile int32_t x287 = INT32_MIN;
	uint8_t x288 = 1U;
	volatile int32_t t70 = -3;

    t70 = (((x285==x286)+x287)>x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x290 = 54U;
	uint8_t x291 = 38U;

    t71 = (((x289==x290)+x291)>x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x293 = INT8_MAX;
	int32_t x295 = -3;
	volatile int16_t x296 = INT16_MIN;
	static int32_t t72 = -40724482;

    t72 = (((x293==x294)+x295)>x296);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MAX;
	int8_t x298 = 1;
	int16_t x299 = -1;
	static int8_t x300 = -29;
	int32_t t73 = 1719821;

    t73 = (((x297==x298)+x299)>x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = INT64_MAX;
	int64_t x302 = -1LL;
	static uint32_t x303 = UINT32_MAX;
	volatile int8_t x304 = INT8_MAX;

    t74 = (((x301==x302)+x303)>x304);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MIN;
	uint32_t x306 = 22783293U;
	static volatile int64_t x307 = -1LL;
	int64_t x308 = -11438314783LL;
	static volatile int32_t t75 = 1;

    t75 = (((x305==x306)+x307)>x308);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x309 = INT32_MAX;
	static uint32_t x312 = 0U;
	volatile int32_t t76 = -3564;

    t76 = (((x309==x310)+x311)>x312);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x313 = -1LL;
	static volatile uint16_t x314 = UINT16_MAX;
	volatile uint64_t x316 = UINT64_MAX;
	volatile int32_t t77 = 64;

    t77 = (((x313==x314)+x315)>x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 85113U;
	int32_t x318 = INT32_MAX;
	uint64_t x319 = 50744LLU;
	uint8_t x320 = 1U;

    t78 = (((x317==x318)+x319)>x320);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x321 = UINT8_MAX;
	static volatile int16_t x322 = INT16_MIN;
	static uint8_t x323 = 1U;
	volatile int64_t x324 = INT64_MIN;

    t79 = (((x321==x322)+x323)>x324);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x326 = UINT16_MAX;
	volatile uint64_t x327 = 14701685845642762LLU;
	volatile int64_t x328 = INT64_MAX;

    t80 = (((x325==x326)+x327)>x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x329 = 0U;
	volatile int64_t x330 = INT64_MAX;
	volatile uint8_t x331 = 45U;
	int32_t x332 = INT32_MIN;

    t81 = (((x329==x330)+x331)>x332);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x333 = -1;
	static volatile uint64_t x334 = UINT64_MAX;
	int64_t x335 = 54079353746677099LL;
	volatile int32_t t82 = 68989744;

    t82 = (((x333==x334)+x335)>x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = -11694094LL;
	int64_t x338 = INT64_MIN;
	int8_t x340 = -2;
	int32_t t83 = 125570014;

    t83 = (((x337==x338)+x339)>x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x342 = INT32_MIN;
	volatile uint32_t x343 = UINT32_MAX;
	int16_t x344 = -612;

    t84 = (((x341==x342)+x343)>x344);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x345 = INT64_MIN;
	volatile int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	volatile int32_t x348 = INT32_MAX;
	int32_t t85 = 679982307;

    t85 = (((x345==x346)+x347)>x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	static int32_t t86 = -1;

    t86 = (((x349==x350)+x351)>x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -3LL;
	static uint32_t x356 = 38072434U;
	volatile int32_t t87 = 55636;

    t87 = (((x353==x354)+x355)>x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x357 = 32806239208LL;
	int16_t x359 = -454;
	int64_t x360 = -372023833733LL;
	int32_t t88 = -67;

    t88 = (((x357==x358)+x359)>x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = INT16_MIN;
	uint32_t x362 = 1591863U;
	int32_t x363 = INT32_MAX;
	int8_t x364 = -1;
	volatile int32_t t89 = -5485809;

    t89 = (((x361==x362)+x363)>x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x366 = 0U;
	int8_t x367 = INT8_MAX;
	volatile int32_t x368 = -1;
	volatile int32_t t90 = 25595517;

    t90 = (((x365==x366)+x367)>x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x370 = 21U;
	static uint16_t x371 = 0U;
	int32_t x372 = INT32_MIN;
	volatile int32_t t91 = 199958;

    t91 = (((x369==x370)+x371)>x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 894292224LLU;
	uint16_t x376 = 3U;
	volatile int32_t t92 = -2539;

    t92 = (((x373==x374)+x375)>x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x378 = -42;
	int8_t x380 = INT8_MIN;
	int32_t t93 = -3;

    t93 = (((x377==x378)+x379)>x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MIN;
	uint64_t x383 = 20312696609LLU;
	static volatile int64_t x384 = INT64_MIN;
	int32_t t94 = -4536;

    t94 = (((x381==x382)+x383)>x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MAX;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t95 = 30325184;

    t95 = (((x385==x386)+x387)>x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x389 = 118LLU;
	volatile int64_t x390 = INT64_MAX;

    t96 = (((x389==x390)+x391)>x392);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x393 = 62U;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	static int8_t x396 = INT8_MAX;
	int32_t t97 = 132836006;

    t97 = (((x393==x394)+x395)>x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x400 = -1;
	int32_t t98 = 470816;

    t98 = (((x397==x398)+x399)>x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x402 = -1LL;
	static int64_t x403 = -244970328544LL;
	uint32_t x404 = 1U;
	volatile int32_t t99 = 1;

    t99 = (((x401==x402)+x403)>x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MAX;
	uint32_t x408 = 2443U;
	volatile int32_t t100 = 178775;

    t100 = (((x405==x406)+x407)>x408);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = 357U;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -1;

    t101 = (((x409==x410)+x411)>x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x413 = 15058U;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -2;
	static volatile int32_t t102 = 619;

    t102 = (((x413==x414)+x415)>x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x417 = INT32_MAX;
	uint16_t x418 = 92U;
	uint32_t x419 = 140462U;
	volatile int32_t t103 = 1;

    t103 = (((x417==x418)+x419)>x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = -3;
	volatile int16_t x422 = 102;
	static uint32_t x423 = 30776602U;
	static int16_t x424 = -1;
	int32_t t104 = 300511579;

    t104 = (((x421==x422)+x423)>x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x426 = INT32_MAX;
	volatile int8_t x427 = -1;
	int8_t x428 = 31;
	int32_t t105 = -28509;

    t105 = (((x425==x426)+x427)>x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x429 = -1696951366LL;
	volatile uint8_t x430 = UINT8_MAX;
	static uint16_t x431 = UINT16_MAX;
	int64_t x432 = 7232840280336260LL;
	int32_t t106 = -147;

    t106 = (((x429==x430)+x431)>x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	int64_t x434 = -3254LL;
	int8_t x435 = 0;
	volatile int32_t t107 = 61;

    t107 = (((x433==x434)+x435)>x436);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x437 = 15808;
	uint16_t x438 = UINT16_MAX;
	int64_t x440 = INT64_MAX;
	static volatile int32_t t108 = -417732;

    t108 = (((x437==x438)+x439)>x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = 0;
	static int16_t x443 = 0;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t109 = 8186;

    t109 = (((x441==x442)+x443)>x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = INT64_MAX;
	uint32_t x447 = UINT32_MAX;
	static int16_t x448 = INT16_MAX;
	static volatile int32_t t110 = 9136432;

    t110 = (((x445==x446)+x447)>x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x450 = INT16_MAX;
	volatile int32_t t111 = 1270;

    t111 = (((x449==x450)+x451)>x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x453 = INT32_MIN;
	uint64_t x454 = 10343490514214549LLU;
	int32_t x455 = -559790923;
	volatile int32_t x456 = 3346910;
	int32_t t112 = 3;

    t112 = (((x453==x454)+x455)>x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x457 = 3236;
	uint8_t x459 = 12U;
	int32_t t113 = 15;

    t113 = (((x457==x458)+x459)>x460);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x461 = -200800753LL;
	int32_t x464 = INT32_MIN;
	volatile int32_t t114 = 0;

    t114 = (((x461==x462)+x463)>x464);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	int8_t x468 = -7;
	int32_t t115 = -28913;

    t115 = (((x465==x466)+x467)>x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x469 = INT16_MAX;
	uint64_t x470 = 184711859LLU;
	int16_t x471 = 3;
	uint16_t x472 = 25042U;
	int32_t t116 = -2;

    t116 = (((x469==x470)+x471)>x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x474 = 477U;
	volatile int8_t x475 = 23;
	int32_t t117 = -19731;

    t117 = (((x473==x474)+x475)>x476);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = -1;
	volatile int8_t x478 = INT8_MIN;
	uint16_t x479 = 23581U;
	int64_t x480 = -1LL;
	int32_t t118 = -6499340;

    t118 = (((x477==x478)+x479)>x480);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x481 = INT32_MAX;
	uint16_t x482 = 48U;
	int32_t t119 = 1537;

    t119 = (((x481==x482)+x483)>x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MIN;
	volatile int32_t x486 = INT32_MIN;
	uint64_t x487 = 43376900LLU;
	int64_t x488 = INT64_MIN;
	int32_t t120 = -1;

    t120 = (((x485==x486)+x487)>x488);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x489 = 21U;
	int16_t x490 = INT16_MIN;
	static int8_t x491 = 0;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t121 = 8545698;

    t121 = (((x489==x490)+x491)>x492);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x493 = -1;
	uint16_t x496 = 4U;
	volatile int32_t t122 = -3;

    t122 = (((x493==x494)+x495)>x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = -1006583;
	volatile uint8_t x498 = UINT8_MAX;
	volatile int32_t t123 = 605;

    t123 = (((x497==x498)+x499)>x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x501 = 807145715698LLU;
	static int16_t x502 = -5;
	int16_t x503 = INT16_MAX;
	int16_t x504 = 1321;

    t124 = (((x501==x502)+x503)>x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x505 = INT8_MIN;
	volatile uint8_t x506 = 0U;
	int16_t x507 = 1112;
	uint64_t x508 = 2099205609537314022LLU;

    t125 = (((x505==x506)+x507)>x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x510 = INT64_MAX;

    t126 = (((x509==x510)+x511)>x512);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x515 = 265460205LLU;
	int32_t x516 = INT32_MIN;
	volatile int32_t t127 = -97071;

    t127 = (((x513==x514)+x515)>x516);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x518 = -3;
	uint16_t x519 = UINT16_MAX;
	uint32_t x520 = 1067942364U;
	volatile int32_t t128 = -139467;

    t128 = (((x517==x518)+x519)>x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x522 = 6112077473LL;
	int32_t x523 = 11456;
	int8_t x524 = -1;
	int32_t t129 = 1;

    t129 = (((x521==x522)+x523)>x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile int16_t x526 = 833;
	volatile uint32_t x528 = UINT32_MAX;
	volatile int32_t t130 = -6;

    t130 = (((x525==x526)+x527)>x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x529 = 0;
	int8_t x530 = INT8_MAX;
	uint32_t x531 = 494U;
	uint32_t x532 = 5376U;
	static int32_t t131 = 45385158;

    t131 = (((x529==x530)+x531)>x532);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x533 = INT64_MAX;
	static uint32_t x534 = UINT32_MAX;
	int32_t x535 = INT32_MAX;
	volatile int32_t t132 = 257824510;

    t132 = (((x533==x534)+x535)>x536);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x537 = 18201LLU;
	int16_t x538 = INT16_MIN;
	uint16_t x539 = 1532U;

    t133 = (((x537==x538)+x539)>x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x541 = -1LL;
	static uint64_t x542 = 2064823766LLU;
	int16_t x543 = INT16_MAX;
	int32_t x544 = -80435;
	static int32_t t134 = 143847409;

    t134 = (((x541==x542)+x543)>x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x545 = INT16_MAX;
	int64_t x546 = -1LL;
	static volatile int16_t x547 = INT16_MIN;

    t135 = (((x545==x546)+x547)>x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x550 = 138;
	int32_t t136 = -477152;

    t136 = (((x549==x550)+x551)>x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x553 = 57635549439503251LLU;
	static int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MIN;
	static volatile int32_t t137 = -670963281;

    t137 = (((x553==x554)+x555)>x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = INT32_MAX;
	int64_t x558 = INT64_MAX;
	int16_t x559 = INT16_MIN;
	uint32_t x560 = UINT32_MAX;

    t138 = (((x557==x558)+x559)>x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x561 = INT8_MIN;
	int64_t x563 = 548222869534LL;
	int64_t x564 = -1LL;
	int32_t t139 = -5483;

    t139 = (((x561==x562)+x563)>x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x566 = INT32_MIN;
	uint32_t x567 = 369559U;
	uint64_t x568 = UINT64_MAX;

    t140 = (((x565==x566)+x567)>x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x569 = 6U;
	int8_t x570 = INT8_MAX;
	int8_t x571 = -1;
	uint8_t x572 = 2U;
	static volatile int32_t t141 = -956406;

    t141 = (((x569==x570)+x571)>x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x573 = 155220754449280727LLU;
	uint16_t x574 = UINT16_MAX;
	int32_t x575 = 11004698;
	int32_t t142 = -99734621;

    t142 = (((x573==x574)+x575)>x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x577 = 12U;
	int8_t x578 = 3;
	uint32_t x580 = 927517343U;
	volatile int32_t t143 = -1;

    t143 = (((x577==x578)+x579)>x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x581 = -1;
	uint32_t x583 = 6U;
	volatile int16_t x584 = INT16_MIN;
	int32_t t144 = -1879;

    t144 = (((x581==x582)+x583)>x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x587 = 5LL;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t145 = 1;

    t145 = (((x585==x586)+x587)>x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = INT64_MIN;
	int16_t x590 = -6;
	static int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MIN;

    t146 = (((x589==x590)+x591)>x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x593 = 10;
	int64_t x594 = INT64_MIN;
	int8_t x595 = -1;
	int32_t t147 = -1513;

    t147 = (((x593==x594)+x595)>x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x598 = INT32_MIN;
	int32_t x599 = -9;
	static volatile int32_t t148 = -1;

    t148 = (((x597==x598)+x599)>x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x601 = 60503576952343156LLU;
	int64_t x603 = INT64_MIN;
	int64_t x604 = 3689666736132841200LL;
	volatile int32_t t149 = 52326856;

    t149 = (((x601==x602)+x603)>x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x605 = INT32_MIN;
	int32_t t150 = -3;

    t150 = (((x605==x606)+x607)>x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x610 = 7U;
	volatile int32_t x611 = INT32_MIN;
	int16_t x612 = INT16_MIN;

    t151 = (((x609==x610)+x611)>x612);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x613 = 1U;
	volatile uint32_t x614 = UINT32_MAX;
	static int16_t x615 = INT16_MAX;
	volatile int32_t t152 = -4976;

    t152 = (((x613==x614)+x615)>x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x619 = INT64_MAX;
	uint16_t x620 = 29U;
	int32_t t153 = -59649;

    t153 = (((x617==x618)+x619)>x620);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x621 = INT16_MIN;
	volatile int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MIN;
	volatile int32_t t154 = -6;

    t154 = (((x621==x622)+x623)>x624);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x625 = 88LL;
	uint16_t x626 = UINT16_MAX;
	uint8_t x627 = 39U;
	volatile int64_t x628 = -1LL;
	int32_t t155 = 407970815;

    t155 = (((x625==x626)+x627)>x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x629 = INT64_MIN;
	volatile int8_t x631 = INT8_MIN;
	uint32_t x632 = 140013187U;
	static volatile int32_t t156 = 1835;

    t156 = (((x629==x630)+x631)>x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x633 = UINT16_MAX;
	int32_t x635 = INT32_MIN;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t157 = 1;

    t157 = (((x633==x634)+x635)>x636);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x637 = INT8_MIN;
	volatile int64_t x639 = -1LL;
	int64_t x640 = INT64_MAX;
	static int32_t t158 = 14;

    t158 = (((x637==x638)+x639)>x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x641 = -5842794;
	static int64_t x642 = INT64_MIN;
	int32_t x644 = INT32_MIN;
	volatile int32_t t159 = -1764;

    t159 = (((x641==x642)+x643)>x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x645 = INT8_MIN;
	volatile int64_t x646 = -1LL;
	uint8_t x647 = 26U;
	int8_t x648 = 0;
	int32_t t160 = -15970;

    t160 = (((x645==x646)+x647)>x648);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = -1;
	volatile uint64_t x652 = UINT64_MAX;
	int32_t t161 = 2630;

    t161 = (((x649==x650)+x651)>x652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x653 = INT16_MAX;
	uint16_t x654 = UINT16_MAX;
	volatile int64_t x655 = -1804251102033219140LL;
	volatile uint8_t x656 = 17U;
	volatile int32_t t162 = -1509402;

    t162 = (((x653==x654)+x655)>x656);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x657 = UINT32_MAX;
	static int32_t x658 = INT32_MIN;
	int64_t x659 = INT64_MAX;
	int32_t t163 = 0;

    t163 = (((x657==x658)+x659)>x660);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x661 = -7745;
	static uint32_t x662 = UINT32_MAX;
	int8_t x663 = INT8_MIN;
	volatile int64_t x664 = INT64_MIN;
	int32_t t164 = -424886432;

    t164 = (((x661==x662)+x663)>x664);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x665 = INT32_MAX;
	int16_t x666 = INT16_MIN;
	static uint64_t x667 = 1486685LLU;
	static volatile int8_t x668 = INT8_MAX;

    t165 = (((x665==x666)+x667)>x668);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x669 = INT64_MIN;
	int16_t x670 = INT16_MIN;
	int8_t x672 = -7;

    t166 = (((x669==x670)+x671)>x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x673 = -1;
	volatile int64_t x676 = INT64_MIN;

    t167 = (((x673==x674)+x675)>x676);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x677 = 21U;
	int8_t x678 = 0;
	uint16_t x679 = 809U;
	int16_t x680 = INT16_MIN;
	volatile int32_t t168 = 954;

    t168 = (((x677==x678)+x679)>x680);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x681 = INT8_MAX;
	uint8_t x682 = UINT8_MAX;
	static int16_t x683 = INT16_MIN;
	int32_t x684 = INT32_MIN;

    t169 = (((x681==x682)+x683)>x684);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x685 = 58U;
	volatile int32_t x686 = -14891;
	static int32_t x687 = -140703258;
	uint64_t x688 = 0LLU;
	volatile int32_t t170 = -95;

    t170 = (((x685==x686)+x687)>x688);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x689 = -19;
	int8_t x690 = -1;
	uint64_t x691 = UINT64_MAX;
	static uint64_t x692 = UINT64_MAX;
	volatile int32_t t171 = -1;

    t171 = (((x689==x690)+x691)>x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x693 = UINT16_MAX;
	int32_t x694 = INT32_MAX;
	int32_t x695 = INT32_MIN;
	int16_t x696 = -1;
	static int32_t t172 = 7189831;

    t172 = (((x693==x694)+x695)>x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x698 = INT8_MAX;
	uint8_t x699 = UINT8_MAX;
	int64_t x700 = -4376513836357887773LL;
	volatile int32_t t173 = -4515129;

    t173 = (((x697==x698)+x699)>x700);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x701 = 14426U;
	int16_t x702 = 0;
	static volatile uint8_t x703 = 38U;
	uint32_t x704 = 16U;
	static int32_t t174 = 1605833;

    t174 = (((x701==x702)+x703)>x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x705 = 62U;
	int16_t x706 = 35;
	static int32_t x707 = 37710738;
	int16_t x708 = -125;
	volatile int32_t t175 = 9;

    t175 = (((x705==x706)+x707)>x708);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x711 = -7627544;
	volatile int32_t t176 = -51845;

    t176 = (((x709==x710)+x711)>x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x713 = UINT8_MAX;
	int8_t x715 = 0;
	int32_t x716 = -1;
	volatile int32_t t177 = 280;

    t177 = (((x713==x714)+x715)>x716);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x717 = 0;
	volatile uint16_t x718 = 99U;
	static uint64_t x719 = 91815LLU;
	static int16_t x720 = 427;

    t178 = (((x717==x718)+x719)>x720);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x721 = 224518983LL;
	static uint32_t x724 = 14707U;
	int32_t t179 = 1;

    t179 = (((x721==x722)+x723)>x724);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x725 = 14LLU;
	volatile int64_t x727 = INT64_MAX;
	int32_t t180 = 0;

    t180 = (((x725==x726)+x727)>x728);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x729 = 1;
	int64_t x730 = INT64_MAX;
	volatile int16_t x731 = -2;
	uint32_t x732 = 10302561U;

    t181 = (((x729==x730)+x731)>x732);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x733 = 228556197;
	int64_t x734 = INT64_MAX;
	int64_t x736 = -1LL;

    t182 = (((x733==x734)+x735)>x736);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x737 = 5090993048LL;
	int32_t x739 = INT32_MAX;
	volatile int16_t x740 = INT16_MIN;

    t183 = (((x737==x738)+x739)>x740);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x742 = INT32_MIN;
	int8_t x743 = INT8_MAX;
	int32_t t184 = 3058;

    t184 = (((x741==x742)+x743)>x744);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x747 = INT64_MIN;
	int32_t t185 = 5;

    t185 = (((x745==x746)+x747)>x748);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x749 = INT32_MIN;
	int16_t x750 = -1;
	int32_t x751 = INT32_MIN;
	static int8_t x752 = INT8_MIN;

    t186 = (((x749==x750)+x751)>x752);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x753 = -1;
	int8_t x754 = -2;
	uint64_t x755 = UINT64_MAX;
	int64_t x756 = INT64_MAX;
	int32_t t187 = -186209451;

    t187 = (((x753==x754)+x755)>x756);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x757 = INT16_MIN;
	static int32_t x758 = -1;
	uint16_t x760 = 130U;
	volatile int32_t t188 = -15525662;

    t188 = (((x757==x758)+x759)>x760);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x761 = 673048400LLU;
	volatile uint8_t x762 = 47U;
	int64_t x763 = 16941772038830558LL;
	volatile int32_t x764 = -214;
	int32_t t189 = 3019;

    t189 = (((x761==x762)+x763)>x764);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x765 = 99U;
	int16_t x766 = 7;
	uint64_t x768 = 44124LLU;
	static volatile int32_t t190 = -873678;

    t190 = (((x765==x766)+x767)>x768);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x769 = UINT8_MAX;
	int16_t x770 = 1;
	uint64_t x771 = UINT64_MAX;
	int32_t t191 = 2962;

    t191 = (((x769==x770)+x771)>x772);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x773 = 171960215699594LLU;
	int16_t x774 = -1;
	volatile uint32_t x775 = UINT32_MAX;
	uint8_t x776 = 0U;
	volatile int32_t t192 = -215;

    t192 = (((x773==x774)+x775)>x776);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MIN;
	uint64_t x779 = 2LLU;
	int64_t x780 = INT64_MIN;
	static int32_t t193 = 1607869;

    t193 = (((x777==x778)+x779)>x780);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x781 = INT16_MIN;
	uint64_t x782 = 2295136931LLU;
	uint64_t x783 = 1070149902604LLU;
	int16_t x784 = INT16_MIN;

    t194 = (((x781==x782)+x783)>x784);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x785 = 2814813469674779751LLU;
	volatile uint16_t x786 = 8U;
	int8_t x787 = -1;
	int64_t x788 = INT64_MAX;

    t195 = (((x785==x786)+x787)>x788);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x789 = INT64_MIN;
	static volatile uint64_t x790 = UINT64_MAX;
	int32_t x791 = -1;
	static int32_t t196 = -26859388;

    t196 = (((x789==x790)+x791)>x792);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x793 = -1;
	uint8_t x794 = 9U;
	static int64_t x795 = INT64_MIN;
	static int32_t t197 = -36986;

    t197 = (((x793==x794)+x795)>x796);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x797 = 3U;
	static volatile int8_t x798 = -1;
	uint64_t x800 = 63034160619183LLU;
	static volatile int32_t t198 = 4430;

    t198 = (((x797==x798)+x799)>x800);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x802 = UINT16_MAX;
	volatile uint64_t x804 = 74262613958724LLU;
	volatile int32_t t199 = 8;

    t199 = (((x801==x802)+x803)>x804);

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

