
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

int32_t x3 = -1;
int8_t x10 = INT8_MIN;
int32_t t2 = 23;
volatile int64_t x13 = -1LL;
static int16_t x15 = INT16_MAX;
volatile int32_t t3 = 124974;
int32_t x18 = INT32_MIN;
uint16_t x21 = 11U;
int16_t x33 = INT16_MAX;
int32_t x37 = INT32_MIN;
uint32_t x41 = 22970U;
static uint32_t x43 = 1563771477U;
uint64_t x49 = UINT64_MAX;
uint16_t x51 = UINT16_MAX;
uint32_t x52 = 41324U;
uint16_t x53 = 2036U;
uint8_t x71 = 12U;
int16_t x78 = INT16_MIN;
int16_t x80 = -252;
int32_t t18 = -121;
int8_t x88 = -1;
int8_t x92 = 52;
int8_t x96 = INT8_MAX;
int32_t t22 = -23728883;
volatile int64_t t23 = INT64_MIN;
int64_t x104 = INT64_MIN;
volatile int32_t t25 = 219653;
static int64_t x112 = INT64_MIN;
int16_t x121 = -1;
volatile uint32_t x134 = 14630U;
volatile int32_t t31 = 83432;
uint64_t x145 = UINT64_MAX;
uint64_t t34 = UINT64_MAX;
int16_t x156 = 11;
int64_t x158 = -1LL;
int32_t x159 = INT32_MIN;
int64_t x169 = -7019980LL;
int16_t x185 = 3808;
volatile int64_t x189 = -109LL;
volatile int32_t x201 = INT32_MAX;
static volatile uint8_t x202 = 18U;
volatile uint32_t t45 = 2174U;
int8_t x225 = 13;
int8_t x231 = INT8_MIN;
int32_t t52 = 11220552;
int16_t x249 = -1;
int16_t x251 = -58;
static int8_t x253 = -1;
volatile int32_t x256 = -461048;
int8_t x261 = INT8_MIN;
int32_t x262 = INT32_MIN;
static volatile int8_t x264 = 2;
int32_t x287 = -31;
uint32_t x288 = 26895596U;
int64_t x293 = INT64_MIN;
int64_t x294 = INT64_MIN;
volatile int8_t x300 = 21;
int8_t x302 = INT8_MAX;
volatile int64_t t66 = 1011012LL;
uint16_t x310 = 6U;
volatile int32_t t67 = -6543839;
int8_t x317 = 0;
volatile int32_t x319 = -4889;
volatile uint16_t x323 = UINT16_MAX;
int8_t x329 = -1;
static int8_t x331 = INT8_MIN;
volatile int32_t t71 = 201;
uint16_t x338 = 26U;
static int16_t x343 = INT16_MIN;
uint64_t x352 = UINT64_MAX;
static volatile int16_t x361 = INT16_MIN;
int8_t x366 = INT8_MAX;
volatile uint8_t x367 = UINT8_MAX;
static uint32_t t79 = 0U;
uint16_t x371 = 52U;
int16_t x372 = 6678;
static int8_t x375 = INT8_MAX;
volatile uint64_t x378 = 410344181257457LLU;
uint8_t x380 = UINT8_MAX;
uint32_t x386 = UINT32_MAX;
int8_t x393 = -1;
static int32_t x400 = -1;
static volatile int32_t t86 = 113046;
int32_t x407 = -1;
volatile int8_t x408 = -1;
volatile int32_t t88 = 117369;
volatile int16_t x415 = INT16_MIN;
int32_t t90 = -130825;
int16_t x418 = 138;
uint64_t x422 = 11213975461556LLU;
int32_t x425 = INT32_MIN;
static uint64_t x426 = UINT64_MAX;
int64_t x429 = 15748831671LL;
int16_t x430 = 4867;
int8_t x433 = INT8_MAX;
volatile int64_t t95 = -159750095013LL;
static uint64_t x450 = 73915992418LLU;
volatile int32_t t97 = -1;
volatile int32_t t98 = 56129;
int16_t x458 = INT16_MIN;
uint16_t x459 = 2U;
volatile int32_t t99 = INT32_MIN;
int32_t x464 = INT32_MIN;
volatile int32_t t100 = INT32_MIN;
static volatile int8_t x465 = -1;
int16_t x466 = -107;
uint64_t t101 = UINT64_MAX;
int8_t x473 = INT8_MAX;
int32_t x480 = 923;
static int32_t x488 = -1;
int32_t t106 = -20;
uint64_t x497 = UINT64_MAX;
volatile int8_t x498 = -3;
uint8_t x499 = 11U;
static int32_t t108 = 33270;
uint64_t x505 = 4471LLU;
volatile int32_t t110 = -265427;
static int64_t t113 = 32842841LL;
static int16_t x527 = INT16_MIN;
uint16_t x529 = UINT16_MAX;
int32_t t115 = 697762377;
volatile uint32_t x536 = UINT32_MAX;
uint64_t x550 = 95256577380015741LLU;
int16_t x558 = INT16_MIN;
uint16_t x561 = 3U;
volatile int32_t x571 = INT32_MAX;
volatile uint8_t x578 = 0U;
int8_t x579 = INT8_MAX;
volatile int16_t x588 = INT16_MIN;
static uint32_t x589 = 3395887U;
uint64_t x593 = 13LLU;
static int64_t x596 = -1576355LL;
int64_t x597 = INT64_MIN;
volatile int8_t x599 = -1;
int8_t x603 = INT8_MIN;
volatile int64_t t131 = 69872149396740LL;
uint64_t t134 = 25LLU;
int16_t x621 = INT16_MAX;
uint64_t x622 = 117872544490997140LLU;
int8_t x623 = 1;
uint32_t x626 = 1356476U;
uint64_t x628 = 5475255LLU;
static int8_t x630 = INT8_MIN;
volatile int32_t t137 = INT32_MIN;
int8_t x636 = -1;
int64_t x645 = -1LL;
static uint32_t x646 = 28571U;
static uint16_t x647 = UINT16_MAX;
int8_t x648 = -1;
volatile int64_t x651 = INT64_MIN;
int64_t t141 = INT64_MIN;
volatile uint8_t x663 = 1U;
uint8_t x666 = 11U;
int16_t x670 = INT16_MIN;
int32_t x672 = INT32_MIN;
volatile uint32_t x673 = UINT32_MAX;
uint8_t x686 = 1U;
static int64_t x687 = INT64_MAX;
volatile int32_t t147 = 16642;
uint8_t x689 = 11U;
int32_t x694 = 10432;
static volatile int32_t x696 = INT32_MIN;
int32_t t149 = 27033134;
volatile int64_t t150 = INT64_MIN;
int32_t t151 = -108701587;
static int8_t x711 = INT8_MIN;
uint32_t t154 = 163866U;
int16_t x729 = INT16_MIN;
int32_t t155 = 721533;
int64_t x742 = -9LL;
volatile uint32_t t159 = 6U;
volatile int8_t x752 = INT8_MIN;
uint64_t x754 = UINT64_MAX;
uint8_t x771 = 3U;
static int32_t t165 = 3;
uint16_t x792 = UINT16_MAX;
int32_t t170 = 3;
int8_t x802 = INT8_MAX;
int8_t x812 = INT8_MIN;
static volatile int32_t t174 = -7722035;
volatile uint64_t x817 = 59304LLU;
uint16_t x821 = UINT16_MAX;
int32_t x826 = -1;
int8_t x837 = 9;
int16_t x841 = INT16_MIN;
int32_t t182 = -402;
static volatile uint32_t t184 = 1U;
static volatile uint32_t x857 = UINT32_MAX;
int32_t x860 = INT32_MIN;
static int32_t x868 = -735069395;
volatile int64_t x871 = -1LL;
int32_t t188 = -10673;
volatile uint8_t x877 = 1U;
static volatile int32_t t190 = -296;
volatile int64_t x886 = -2182161LL;
volatile int32_t x889 = -634919;
static int32_t t192 = 86;
volatile int32_t t193 = -6;
volatile uint32_t x905 = 448162U;
uint64_t x908 = 3507605571LLU;
static volatile uint16_t x910 = 158U;
static int16_t x915 = 891;
static int32_t x916 = INT32_MIN;
static int32_t t199 = 8129;


void f0(void) {
    	int8_t x1 = 1;
	uint16_t x2 = 228U;
	int64_t x4 = -129068572362LL;
	volatile int64_t t0 = -24562913033845LL;

    t0 = (((x1-x2)<=x3)+x4);

    if (t0 != -129068572361LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -8;
	uint16_t x6 = 1226U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -4;

    t1 = (((x5-x6)<=x7)+x8);

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 398U;
	volatile int8_t x11 = 46;
	uint16_t x12 = 4U;

    t2 = (((x9-x10)<=x11)+x12);

    if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	static volatile int16_t x16 = INT16_MAX;

    t3 = (((x13-x14)<=x15)+x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 2276152188464493453LLU;
	volatile uint16_t x19 = 24U;
	volatile int32_t x20 = 27;
	int32_t t4 = 192;

    t4 = (((x17-x18)<=x19)+x20);

    if (t4 != 27) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = -11;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -76132;

    t5 = (((x21-x22)<=x23)+x24);

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -1LL;
	static int64_t x30 = -9799280990LL;
	static int64_t x31 = INT64_MAX;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t6 = -780466;

    t6 = (((x29-x30)<=x31)+x32);

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x34 = 127U;
	int64_t x35 = 3440849718473237297LL;
	uint64_t x36 = 240264LLU;
	static volatile uint64_t t7 = 155LLU;

    t7 = (((x33-x34)<=x35)+x36);

    if (t7 != 240265LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	volatile int32_t x40 = INT32_MAX;
	int32_t t8 = INT32_MAX;

    t8 = (((x37-x38)<=x39)+x40);

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = 9124;
	int32_t x44 = -34431990;
	static volatile int32_t t9 = -37;

    t9 = (((x41-x42)<=x43)+x44);

    if (t9 != -34431989) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = -1LL;
	volatile int32_t x46 = INT32_MIN;
	uint8_t x47 = 2U;
	volatile int64_t x48 = INT64_MIN;
	static volatile int64_t t10 = INT64_MIN;

    t10 = (((x45-x46)<=x47)+x48);

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = -1;
	volatile uint32_t t11 = 806753U;

    t11 = (((x49-x50)<=x51)+x52);

    if (t11 != 41325U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x54 = -1;
	int8_t x55 = 2;
	volatile uint8_t x56 = 7U;
	static volatile int32_t t12 = 1;

    t12 = (((x53-x54)<=x55)+x56);

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = UINT64_MAX;
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 976U;
	static int8_t x60 = -1;
	static int32_t t13 = -32563;

    t13 = (((x57-x58)<=x59)+x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 43438LLU;
	static int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = 15100U;
	uint32_t t14 = 50301706U;

    t14 = (((x61-x62)<=x63)+x64);

    if (t14 != 15101U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 1U;
	static int8_t x66 = 0;
	int64_t x67 = -1LL;
	int32_t x68 = 2;
	volatile int32_t t15 = 6732532;

    t15 = (((x65-x66)<=x67)+x68);

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	static uint16_t x70 = 5449U;
	int16_t x72 = INT16_MAX;
	static int32_t t16 = 50131;

    t16 = (((x69-x70)<=x71)+x72);

    if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 4422LLU;
	int32_t x74 = 13076;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

    t17 = (((x73-x74)<=x75)+x76);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	volatile uint16_t x79 = UINT16_MAX;

    t18 = (((x77-x78)<=x79)+x80);

    if (t18 != -251) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	uint64_t x82 = 11895113311LLU;
	static volatile int64_t x83 = -2227224118815960099LL;
	static uint8_t x84 = 3U;
	volatile int32_t t19 = 282544;

    t19 = (((x81-x82)<=x83)+x84);

    if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	int16_t x86 = INT16_MIN;
	static uint16_t x87 = 33U;
	volatile int32_t t20 = 12393;

    t20 = (((x85-x86)<=x87)+x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = 1747539504109LL;
	volatile uint16_t x90 = 4U;
	int8_t x91 = -1;
	static int32_t t21 = 25591150;

    t21 = (((x89-x90)<=x91)+x92);

    if (t21 != 52) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = INT64_MIN;
	static int32_t x94 = INT32_MIN;
	volatile int16_t x95 = INT16_MAX;

    t22 = (((x93-x94)<=x95)+x96);

    if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -1LL;
	volatile int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static int64_t x100 = INT64_MIN;

    t23 = (((x97-x98)<=x99)+x100);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MIN;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int64_t t24 = INT64_MIN;

    t24 = (((x101-x102)<=x103)+x104);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = 0;
	int8_t x107 = -1;
	volatile uint16_t x108 = UINT16_MAX;

    t25 = (((x105-x106)<=x107)+x108);

    if (t25 != 65536) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = 4388U;
	int32_t x110 = -1;
	int8_t x111 = INT8_MAX;
	volatile int64_t t26 = INT64_MIN;

    t26 = (((x109-x110)<=x111)+x112);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = INT8_MAX;
	int32_t x118 = 153897;
	int8_t x119 = -22;
	int32_t x120 = INT32_MIN;
	static int32_t t27 = 788399;

    t27 = (((x117-x118)<=x119)+x120);

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x122 = 1;
	volatile uint64_t x123 = 21831442229LLU;
	volatile uint16_t x124 = 68U;
	int32_t t28 = 14246846;

    t28 = (((x121-x122)<=x123)+x124);

    if (t28 != 68) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MAX;
	volatile int8_t x126 = 23;
	int64_t x127 = INT64_MAX;
	static volatile uint32_t x128 = 2U;
	static uint32_t t29 = 84486713U;

    t29 = (((x125-x126)<=x127)+x128);

    if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x129 = 8348U;
	volatile uint8_t x130 = 3U;
	int16_t x131 = 1;
	int64_t x132 = 987785LL;
	int64_t t30 = -107845LL;

    t30 = (((x129-x130)<=x131)+x132);

    if (t30 != 987785LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = INT64_MAX;
	int8_t x135 = -1;
	int16_t x136 = -1;

    t31 = (((x133-x134)<=x135)+x136);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = 2U;
	static volatile uint16_t x142 = UINT16_MAX;
	uint64_t x143 = UINT64_MAX;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t32 = 1716;

    t32 = (((x141-x142)<=x143)+x144);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x146 = 236U;
	uint64_t x147 = 126LLU;
	uint64_t x148 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

    t33 = (((x145-x146)<=x147)+x148);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = 76134261448036LL;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 1362LLU;
	uint64_t x152 = UINT64_MAX;

    t34 = (((x149-x150)<=x151)+x152);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x153 = UINT16_MAX;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = -1957;
	int32_t t35 = 1;

    t35 = (((x153-x154)<=x155)+x156);

    if (t35 != 11) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = -1;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

    t36 = (((x157-x158)<=x159)+x160);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = -1;
	int16_t x162 = 1;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	int32_t t37 = -356104;

    t37 = (((x161-x162)<=x163)+x164);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x170 = 597U;
	int16_t x171 = INT16_MAX;
	volatile int16_t x172 = -10;
	volatile int32_t t38 = 1241191;

    t38 = (((x169-x170)<=x171)+x172);

    if (t38 != -9) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x177 = 181983958U;
	static uint64_t x178 = 30998303LLU;
	int64_t x179 = INT64_MAX;
	volatile int16_t x180 = 0;
	int32_t t39 = 115272482;

    t39 = (((x177-x178)<=x179)+x180);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x186 = INT16_MIN;
	uint8_t x187 = 1U;
	int16_t x188 = -1;
	int32_t t40 = -444044;

    t40 = (((x185-x186)<=x187)+x188);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x190 = 13;
	volatile int8_t x191 = -2;
	volatile uint32_t x192 = 0U;
	static uint32_t t41 = 94883146U;

    t41 = (((x189-x190)<=x191)+x192);

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = INT32_MIN;
	int16_t x198 = -1;
	int16_t x199 = 5805;
	volatile uint16_t x200 = 0U;
	volatile int32_t t42 = -8694748;

    t42 = (((x197-x198)<=x199)+x200);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x203 = -1;
	uint16_t x204 = 3342U;
	static volatile int32_t t43 = -5;

    t43 = (((x201-x202)<=x203)+x204);

    if (t43 != 3342) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x205 = 17565U;
	static volatile int64_t x206 = INT64_MAX;
	uint64_t x207 = UINT64_MAX;
	int16_t x208 = INT16_MAX;
	static volatile int32_t t44 = -240341;

    t44 = (((x205-x206)<=x207)+x208);

    if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x213 = -49986767LL;
	uint32_t x214 = UINT32_MAX;
	volatile int8_t x215 = INT8_MIN;
	volatile uint32_t x216 = 667702145U;

    t45 = (((x213-x214)<=x215)+x216);

    if (t45 != 667702146U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = -1;
	int8_t x218 = 28;
	uint8_t x219 = UINT8_MAX;
	int8_t x220 = INT8_MIN;
	volatile int32_t t46 = 352331;

    t46 = (((x217-x218)<=x219)+x220);

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = 2;
	uint32_t x228 = 27717889U;
	static uint32_t t47 = 6U;

    t47 = (((x225-x226)<=x227)+x228);

    if (t47 != 27717890U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MIN;
	int16_t x232 = 1;
	int32_t t48 = 153612;

    t48 = (((x229-x230)<=x231)+x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x233 = UINT32_MAX;
	uint32_t x234 = 761U;
	static int8_t x235 = 19;
	uint16_t x236 = 987U;
	volatile int32_t t49 = -984;

    t49 = (((x233-x234)<=x235)+x236);

    if (t49 != 987) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = 164U;
	uint32_t x238 = 5042U;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t50 = -381;

    t50 = (((x237-x238)<=x239)+x240);

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x241 = 2U;
	static volatile uint64_t x242 = 6395428842075937478LLU;
	static uint32_t x243 = 7199686U;
	static int16_t x244 = -1844;
	static int32_t t51 = 614770677;

    t51 = (((x241-x242)<=x243)+x244);

    if (t51 != -1844) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	int16_t x247 = 120;
	uint16_t x248 = 0U;

    t52 = (((x245-x246)<=x247)+x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x250 = INT8_MIN;
	volatile int64_t x252 = -1LL;
	int64_t t53 = 53406658273LL;

    t53 = (((x249-x250)<=x251)+x252);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x254 = INT64_MIN;
	uint64_t x255 = 164551492568383LLU;
	int32_t t54 = 2;

    t54 = (((x253-x254)<=x255)+x256);

    if (t54 != -461048) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x257 = -195586704;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MAX;
	uint32_t x260 = 111U;
	static uint32_t t55 = 7U;

    t55 = (((x257-x258)<=x259)+x260);

    if (t55 != 112U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x263 = INT32_MIN;
	int32_t t56 = 2503;

    t56 = (((x261-x262)<=x263)+x264);

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x265 = -1;
	uint16_t x266 = 4456U;
	static uint16_t x267 = UINT16_MAX;
	uint16_t x268 = UINT16_MAX;
	int32_t t57 = -4749305;

    t57 = (((x265-x266)<=x267)+x268);

    if (t57 != 65536) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x269 = -23;
	static volatile int64_t x270 = -7365126457LL;
	int32_t x271 = 1064665;
	int16_t x272 = -1;
	int32_t t58 = 393;

    t58 = (((x269-x270)<=x271)+x272);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x273 = 6642430;
	int16_t x274 = 3353;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	static volatile int32_t t59 = 5861;

    t59 = (((x273-x274)<=x275)+x276);

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x277 = 5U;
	uint32_t x278 = 3U;
	int64_t x279 = -1LL;
	uint64_t x280 = 1076149LLU;
	volatile uint64_t t60 = 2527211677LLU;

    t60 = (((x277-x278)<=x279)+x280);

    if (t60 != 1076149LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x281 = 32;
	int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	int8_t x284 = 0;
	volatile int32_t t61 = 578132;

    t61 = (((x281-x282)<=x283)+x284);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = INT8_MIN;
	static int32_t x286 = -1;
	static uint32_t t62 = 22U;

    t62 = (((x285-x286)<=x287)+x288);

    if (t62 != 26895597U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = -1LL;
	int64_t t63 = -19LL;

    t63 = (((x293-x294)<=x295)+x296);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = 0;
	int16_t x298 = INT16_MIN;
	volatile int16_t x299 = -3;
	static volatile int32_t t64 = -11;

    t64 = (((x297-x298)<=x299)+x300);

    if (t64 != 21) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x301 = 16276;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

    t65 = (((x301-x302)<=x303)+x304);

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	static uint8_t x307 = 4U;
	int64_t x308 = -200973193826LL;

    t66 = (((x305-x306)<=x307)+x308);

    if (t66 != -200973193825LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x309 = 7U;
	volatile uint16_t x311 = 29863U;
	int16_t x312 = 63;

    t67 = (((x309-x310)<=x311)+x312);

    if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x313 = 14U;
	static int16_t x314 = INT16_MAX;
	volatile uint32_t x315 = 488U;
	int32_t x316 = -1;
	volatile int32_t t68 = -202;

    t68 = (((x313-x314)<=x315)+x316);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x318 = -15;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t69 = INT32_MIN;

    t69 = (((x317-x318)<=x319)+x320);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MAX;
	uint8_t x324 = 68U;
	volatile int32_t t70 = 4;

    t70 = (((x321-x322)<=x323)+x324);

    if (t70 != 68) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x330 = INT16_MAX;
	uint16_t x332 = 398U;

    t71 = (((x329-x330)<=x331)+x332);

    if (t71 != 399) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x333 = 29LL;
	uint16_t x334 = UINT16_MAX;
	int8_t x335 = INT8_MIN;
	static uint16_t x336 = 1U;
	volatile int32_t t72 = 1773;

    t72 = (((x333-x334)<=x335)+x336);

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x337 = 24722790605229LL;
	volatile int16_t x339 = -210;
	static volatile uint8_t x340 = 1U;
	int32_t t73 = 6;

    t73 = (((x337-x338)<=x339)+x340);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x341 = 5U;
	int32_t x342 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	int32_t t74 = -150;

    t74 = (((x341-x342)<=x343)+x344);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x349 = UINT8_MAX;
	static int64_t x350 = -1332611LL;
	volatile int8_t x351 = INT8_MIN;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (((x349-x350)<=x351)+x352);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x353 = 170969U;
	int8_t x354 = INT8_MAX;
	volatile uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = INT16_MIN;
	static volatile int32_t t76 = -2089;

    t76 = (((x353-x354)<=x355)+x356);

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x357 = -741178;
	int8_t x358 = INT8_MIN;
	volatile int8_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t77 = 440364831;

    t77 = (((x357-x358)<=x359)+x360);

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MAX;
	volatile uint8_t x364 = 1U;
	static int32_t t78 = 0;

    t78 = (((x361-x362)<=x363)+x364);

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x365 = INT8_MIN;
	static uint32_t x368 = 668U;

    t79 = (((x365-x366)<=x367)+x368);

    if (t79 != 669U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x369 = 355361U;
	int64_t x370 = 27172653355LL;
	volatile int32_t t80 = -88;

    t80 = (((x369-x370)<=x371)+x372);

    if (t80 != 6679) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x373 = 3U;
	volatile int8_t x374 = -1;
	int32_t x376 = -203;
	volatile int32_t t81 = 11696996;

    t81 = (((x373-x374)<=x375)+x376);

    if (t81 != -202) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x377 = 4089U;
	int64_t x379 = INT64_MAX;
	volatile int32_t t82 = -76449884;

    t82 = (((x377-x378)<=x379)+x380);

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x385 = -9;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = 2;
	int32_t t83 = 11525490;

    t83 = (((x385-x386)<=x387)+x388);

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x389 = -30583053519641LL;
	static uint8_t x390 = UINT8_MAX;
	int16_t x391 = -1;
	static int64_t x392 = INT64_MIN;
	static int64_t t84 = -7LL;

    t84 = (((x389-x390)<=x391)+x392);

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x394 = INT8_MAX;
	volatile int16_t x395 = INT16_MAX;
	volatile uint16_t x396 = 1U;
	volatile int32_t t85 = 6;

    t85 = (((x393-x394)<=x395)+x396);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x397 = 1;
	volatile int8_t x398 = 0;
	int32_t x399 = 231976;

    t86 = (((x397-x398)<=x399)+x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x401 = INT16_MIN;
	uint32_t x402 = 132U;
	uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1116590934520021LL;
	int64_t t87 = -267508217878453042LL;

    t87 = (((x401-x402)<=x403)+x404);

    if (t87 != -1116590934520021LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x405 = UINT32_MAX;
	static int8_t x406 = -1;

    t88 = (((x405-x406)<=x407)+x408);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MIN;
	static int64_t x411 = -1LL;
	volatile int16_t x412 = -2;
	volatile int32_t t89 = 345;

    t89 = (((x409-x410)<=x411)+x412);

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x413 = -1LL;
	uint16_t x414 = 19448U;
	int16_t x416 = INT16_MIN;

    t90 = (((x413-x414)<=x415)+x416);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = -1;
	volatile uint8_t x419 = 101U;
	volatile uint64_t x420 = UINT64_MAX;
	volatile uint64_t t91 = 136481986521001LLU;

    t91 = (((x417-x418)<=x419)+x420);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x421 = 5U;
	static volatile uint64_t x423 = UINT64_MAX;
	static uint32_t x424 = 548041U;
	static volatile uint32_t t92 = 174U;

    t92 = (((x421-x422)<=x423)+x424);

    if (t92 != 548042U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x427 = 0U;
	int64_t x428 = -12549096LL;
	volatile int64_t t93 = -1LL;

    t93 = (((x425-x426)<=x427)+x428);

    if (t93 != -12549096LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x431 = -497;
	int64_t x432 = INT64_MIN;
	static volatile int64_t t94 = INT64_MIN;

    t94 = (((x429-x430)<=x431)+x432);

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x434 = INT64_MAX;
	static uint8_t x435 = 1U;
	volatile int64_t x436 = INT64_MIN;

    t95 = (((x433-x434)<=x435)+x436);

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x445 = 27906976660LLU;
	int64_t x446 = INT64_MIN;
	volatile int32_t x447 = INT32_MAX;
	static int64_t x448 = INT64_MIN;
	int64_t t96 = INT64_MIN;

    t96 = (((x445-x446)<=x447)+x448);

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint32_t x451 = 270272348U;
	volatile int8_t x452 = 16;

    t97 = (((x449-x450)<=x451)+x452);

    if (t97 != 16) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x453 = -26416;
	static uint8_t x454 = 2U;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = 45U;

    t98 = (((x453-x454)<=x455)+x456);

    if (t98 != 46) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x457 = -1;
	int32_t x460 = INT32_MIN;

    t99 = (((x457-x458)<=x459)+x460);

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = INT16_MAX;
	int64_t x462 = 36485LL;
	static int32_t x463 = INT32_MIN;

    t100 = (((x461-x462)<=x463)+x464);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x467 = INT8_MIN;
	uint64_t x468 = UINT64_MAX;

    t101 = (((x465-x466)<=x467)+x468);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x469 = -1;
	int64_t x470 = INT64_MAX;
	static int32_t x471 = 1633;
	int32_t x472 = -1;
	int32_t t102 = 399616945;

    t102 = (((x469-x470)<=x471)+x472);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x474 = INT8_MAX;
	volatile uint32_t x475 = 880915U;
	int8_t x476 = INT8_MIN;
	volatile int32_t t103 = 1;

    t103 = (((x473-x474)<=x475)+x476);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x477 = UINT32_MAX;
	int8_t x478 = 1;
	uint16_t x479 = UINT16_MAX;
	static volatile int32_t t104 = -259;

    t104 = (((x477-x478)<=x479)+x480);

    if (t104 != 923) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x481 = -1LL;
	uint32_t x482 = UINT32_MAX;
	int32_t x483 = INT32_MAX;
	uint32_t x484 = 96U;
	static volatile uint32_t t105 = 371U;

    t105 = (((x481-x482)<=x483)+x484);

    if (t105 != 97U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x485 = 114;
	uint16_t x486 = 481U;
	int16_t x487 = -1;

    t106 = (((x485-x486)<=x487)+x488);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x489 = 1897609U;
	int16_t x490 = INT16_MIN;
	static int32_t x491 = -1;
	int32_t x492 = INT32_MIN;
	volatile int32_t t107 = 3;

    t107 = (((x489-x490)<=x491)+x492);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x500 = 28;

    t108 = (((x497-x498)<=x499)+x500);

    if (t108 != 29) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x501 = 14U;
	int16_t x502 = 39;
	uint16_t x503 = UINT16_MAX;
	int16_t x504 = -1;
	static int32_t t109 = -104501;

    t109 = (((x501-x502)<=x503)+x504);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x506 = 33U;
	static uint16_t x507 = 15992U;
	int8_t x508 = INT8_MIN;

    t110 = (((x505-x506)<=x507)+x508);

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x509 = INT8_MIN;
	volatile int64_t x510 = 904212660264936LL;
	uint32_t x511 = 1565283U;
	int32_t x512 = -1;
	volatile int32_t t111 = 63;

    t111 = (((x509-x510)<=x511)+x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x513 = UINT16_MAX;
	static int8_t x514 = 0;
	uint8_t x515 = UINT8_MAX;
	uint64_t x516 = 9497666026068593LLU;
	uint64_t t112 = 2044630529LLU;

    t112 = (((x513-x514)<=x515)+x516);

    if (t112 != 9497666026068593LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x521 = UINT8_MAX;
	int8_t x522 = INT8_MIN;
	int8_t x523 = INT8_MIN;
	static int64_t x524 = -12208LL;

    t113 = (((x521-x522)<=x523)+x524);

    if (t113 != -12208LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x525 = UINT8_MAX;
	uint32_t x526 = UINT32_MAX;
	int8_t x528 = INT8_MIN;
	volatile int32_t t114 = -675024;

    t114 = (((x525-x526)<=x527)+x528);

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x530 = INT8_MAX;
	uint64_t x531 = 948191761477146LLU;
	static int8_t x532 = 0;

    t115 = (((x529-x530)<=x531)+x532);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x533 = -2285;
	int64_t x534 = -1LL;
	int8_t x535 = INT8_MAX;
	uint32_t t116 = 1U;

    t116 = (((x533-x534)<=x535)+x536);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x537 = 83164LLU;
	uint32_t x538 = 301U;
	volatile int16_t x539 = 1;
	int8_t x540 = 0;
	int32_t t117 = 13856;

    t117 = (((x537-x538)<=x539)+x540);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x549 = UINT16_MAX;
	int8_t x551 = -28;
	int8_t x552 = -1;
	static volatile int32_t t118 = 1958;

    t118 = (((x549-x550)<=x551)+x552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x553 = 40726LL;
	int32_t x554 = -1;
	int16_t x555 = 1154;
	static int16_t x556 = -28;
	volatile int32_t t119 = -11780;

    t119 = (((x553-x554)<=x555)+x556);

    if (t119 != -28) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x557 = 50;
	uint32_t x559 = 1559U;
	static int16_t x560 = -251;
	volatile int32_t t120 = -629695;

    t120 = (((x557-x558)<=x559)+x560);

    if (t120 != -251) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x562 = UINT16_MAX;
	volatile int64_t x563 = INT64_MIN;
	int16_t x564 = INT16_MAX;
	int32_t t121 = 0;

    t121 = (((x561-x562)<=x563)+x564);

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 3U;
	volatile int32_t x566 = -63676496;
	int8_t x567 = INT8_MIN;
	int32_t x568 = -6817671;
	volatile int32_t t122 = -8376199;

    t122 = (((x565-x566)<=x567)+x568);

    if (t122 != -6817671) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x569 = INT32_MIN;
	uint64_t x570 = UINT64_MAX;
	uint16_t x572 = 250U;
	volatile int32_t t123 = -2076403;

    t123 = (((x569-x570)<=x571)+x572);

    if (t123 != 250) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x577 = INT8_MIN;
	static volatile uint32_t x580 = 3U;
	volatile uint32_t t124 = 481771800U;

    t124 = (((x577-x578)<=x579)+x580);

    if (t124 != 4U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x581 = 1;
	int32_t x582 = -1;
	int64_t x583 = -94106792319364LL;
	static int16_t x584 = -217;
	static int32_t t125 = 246643;

    t125 = (((x581-x582)<=x583)+x584);

    if (t125 != -217) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x585 = UINT64_MAX;
	int32_t x586 = 0;
	int16_t x587 = -1;
	int32_t t126 = 3140842;

    t126 = (((x585-x586)<=x587)+x588);

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x590 = 2469;
	volatile int8_t x591 = INT8_MAX;
	uint32_t x592 = UINT32_MAX;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (((x589-x590)<=x591)+x592);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x594 = 2LLU;
	static int32_t x595 = INT32_MIN;
	volatile int64_t t128 = 9172375338993LL;

    t128 = (((x593-x594)<=x595)+x596);

    if (t128 != -1576354LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x598 = 0;
	int64_t x600 = INT64_MIN;
	volatile int64_t t129 = 15342278LL;

    t129 = (((x597-x598)<=x599)+x600);

    if (t129 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x601 = 1U;
	uint32_t x602 = UINT32_MAX;
	static uint8_t x604 = 3U;
	volatile int32_t t130 = 97927;

    t130 = (((x601-x602)<=x603)+x604);

    if (t130 != 4) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x605 = -1;
	int32_t x606 = INT32_MIN;
	uint64_t x607 = 116098243LLU;
	volatile int64_t x608 = -1LL;

    t131 = (((x605-x606)<=x607)+x608);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x609 = INT16_MAX;
	int64_t x610 = -1LL;
	int64_t x611 = INT64_MIN;
	uint64_t x612 = 5136LLU;
	volatile uint64_t t132 = 230496989LLU;

    t132 = (((x609-x610)<=x611)+x612);

    if (t132 != 5136LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x613 = 1426995959061911879LLU;
	int64_t x614 = -59LL;
	int64_t x615 = 911564207252LL;
	uint16_t x616 = 12U;
	volatile int32_t t133 = -200;

    t133 = (((x613-x614)<=x615)+x616);

    if (t133 != 12) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x617 = -19737334824LL;
	int16_t x618 = INT16_MAX;
	static uint8_t x619 = 7U;
	uint64_t x620 = UINT64_MAX;

    t134 = (((x617-x618)<=x619)+x620);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x624 = UINT16_MAX;
	static int32_t t135 = 1050;

    t135 = (((x621-x622)<=x623)+x624);

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x625 = UINT8_MAX;
	volatile uint16_t x627 = 1U;
	uint64_t t136 = 584379072LLU;

    t136 = (((x625-x626)<=x627)+x628);

    if (t136 != 5475255LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x629 = 91;
	int8_t x631 = INT8_MIN;
	int32_t x632 = INT32_MIN;

    t137 = (((x629-x630)<=x631)+x632);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x633 = 1U;
	uint8_t x634 = UINT8_MAX;
	int16_t x635 = INT16_MIN;
	int32_t t138 = -1;

    t138 = (((x633-x634)<=x635)+x636);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x641 = 72U;
	int8_t x642 = INT8_MIN;
	static int16_t x643 = INT16_MIN;
	int8_t x644 = INT8_MIN;
	volatile int32_t t139 = -6032;

    t139 = (((x641-x642)<=x643)+x644);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t t140 = 1;

    t140 = (((x645-x646)<=x647)+x648);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x650 = UINT16_MAX;
	int64_t x652 = INT64_MIN;

    t141 = (((x649-x650)<=x651)+x652);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x661 = UINT64_MAX;
	static int64_t x662 = INT64_MAX;
	uint8_t x664 = 118U;
	volatile int32_t t142 = -122;

    t142 = (((x661-x662)<=x663)+x664);

    if (t142 != 118) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x665 = 7962LLU;
	int64_t x667 = 434LL;
	volatile int32_t x668 = -1354;
	volatile int32_t t143 = -6225415;

    t143 = (((x665-x666)<=x667)+x668);

    if (t143 != -1354) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x669 = UINT32_MAX;
	uint8_t x671 = UINT8_MAX;
	int32_t t144 = INT32_MIN;

    t144 = (((x669-x670)<=x671)+x672);

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x674 = 397764U;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 179780U;
	static uint32_t t145 = 3510U;

    t145 = (((x673-x674)<=x675)+x676);

    if (t145 != 179780U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x681 = 16378U;
	int8_t x682 = INT8_MIN;
	uint32_t x683 = UINT32_MAX;
	static int32_t x684 = -51052;
	volatile int32_t t146 = 12;

    t146 = (((x681-x682)<=x683)+x684);

    if (t146 != -51051) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x685 = INT16_MAX;
	uint8_t x688 = 21U;

    t147 = (((x685-x686)<=x687)+x688);

    if (t147 != 22) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x690 = INT16_MIN;
	uint32_t x691 = UINT32_MAX;
	volatile int8_t x692 = INT8_MIN;
	volatile int32_t t148 = 31714;

    t148 = (((x689-x690)<=x691)+x692);

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x693 = UINT32_MAX;
	volatile uint64_t x695 = UINT64_MAX;

    t149 = (((x693-x694)<=x695)+x696);

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x701 = -32;
	int32_t x702 = -133392703;
	uint16_t x703 = UINT16_MAX;
	volatile int64_t x704 = INT64_MIN;

    t150 = (((x701-x702)<=x703)+x704);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x705 = INT16_MIN;
	volatile int64_t x706 = -1LL;
	int64_t x707 = -2LL;
	int8_t x708 = 21;

    t151 = (((x705-x706)<=x707)+x708);

    if (t151 != 22) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x709 = -1LL;
	int16_t x710 = -1;
	volatile uint8_t x712 = 10U;
	volatile int32_t t152 = -662;

    t152 = (((x709-x710)<=x711)+x712);

    if (t152 != 10) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x713 = INT16_MAX;
	static int16_t x714 = INT16_MIN;
	int64_t x715 = -1LL;
	int8_t x716 = INT8_MIN;
	volatile int32_t t153 = -11336138;

    t153 = (((x713-x714)<=x715)+x716);

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x725 = 116U;
	int8_t x726 = INT8_MIN;
	int8_t x727 = INT8_MAX;
	uint32_t x728 = 31988U;

    t154 = (((x725-x726)<=x727)+x728);

    if (t154 != 31988U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x730 = UINT16_MAX;
	int64_t x731 = -1LL;
	volatile int32_t x732 = 118182401;

    t155 = (((x729-x730)<=x731)+x732);

    if (t155 != 118182402) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x733 = UINT8_MAX;
	static int16_t x734 = INT16_MAX;
	static uint8_t x735 = 15U;
	int16_t x736 = INT16_MIN;
	volatile int32_t t156 = 186165;

    t156 = (((x733-x734)<=x735)+x736);

    if (t156 != -32767) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x737 = UINT64_MAX;
	static volatile int32_t x738 = 4166;
	int8_t x739 = INT8_MAX;
	volatile uint8_t x740 = UINT8_MAX;
	volatile int32_t t157 = 1893;

    t157 = (((x737-x738)<=x739)+x740);

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x741 = INT16_MIN;
	uint8_t x743 = 7U;
	uint64_t x744 = 0LLU;
	uint64_t t158 = 62LLU;

    t158 = (((x741-x742)<=x743)+x744);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x745 = INT32_MIN;
	int8_t x746 = -1;
	static int32_t x747 = INT32_MIN;
	uint32_t x748 = 191053U;

    t159 = (((x745-x746)<=x747)+x748);

    if (t159 != 191053U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile int16_t x750 = -233;
	int16_t x751 = -1;
	volatile int32_t t160 = -1;

    t160 = (((x749-x750)<=x751)+x752);

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x753 = 74312401396LL;
	uint8_t x755 = 3U;
	int8_t x756 = -1;
	static volatile int32_t t161 = -933;

    t161 = (((x753-x754)<=x755)+x756);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MIN;
	int32_t x759 = -50;
	int64_t x760 = 390791046LL;
	volatile int64_t t162 = 75099074112408LL;

    t162 = (((x757-x758)<=x759)+x760);

    if (t162 != 390791047LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x761 = UINT16_MAX;
	uint16_t x762 = 7U;
	int16_t x763 = -579;
	uint32_t x764 = 4964523U;
	volatile uint32_t t163 = 317U;

    t163 = (((x761-x762)<=x763)+x764);

    if (t163 != 4964523U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x765 = INT64_MIN;
	int32_t x766 = INT32_MIN;
	volatile int8_t x767 = -1;
	int16_t x768 = 3753;
	int32_t t164 = -35922976;

    t164 = (((x765-x766)<=x767)+x768);

    if (t164 != 3754) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x769 = INT64_MIN;
	volatile int64_t x770 = INT64_MIN;
	int32_t x772 = -633;

    t165 = (((x769-x770)<=x771)+x772);

    if (t165 != -632) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x773 = -1LL;
	uint8_t x774 = 1U;
	int32_t x775 = 252;
	int64_t x776 = 2595191926890LL;
	volatile int64_t t166 = -2544715440LL;

    t166 = (((x773-x774)<=x775)+x776);

    if (t166 != 2595191926891LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x777 = INT16_MIN;
	uint16_t x778 = 7U;
	static volatile uint32_t x779 = 710156U;
	uint64_t x780 = 97151530754178LLU;
	uint64_t t167 = 3860778401LLU;

    t167 = (((x777-x778)<=x779)+x780);

    if (t167 != 97151530754178LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	int16_t x782 = INT16_MAX;
	volatile int8_t x783 = -1;
	int8_t x784 = -3;
	int32_t t168 = 258;

    t168 = (((x781-x782)<=x783)+x784);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x786 = -1;
	uint32_t x787 = 27U;
	uint16_t x788 = 11U;
	static volatile int32_t t169 = -25256182;

    t169 = (((x785-x786)<=x787)+x788);

    if (t169 != 11) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x789 = INT8_MAX;
	static int8_t x790 = INT8_MAX;
	int16_t x791 = -1;

    t170 = (((x789-x790)<=x791)+x792);

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = INT16_MIN;
	volatile int16_t x795 = INT16_MIN;
	int8_t x796 = -1;
	volatile int32_t t171 = -4071560;

    t171 = (((x793-x794)<=x795)+x796);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x801 = 3U;
	uint64_t x803 = 119451522940865777LLU;
	int16_t x804 = -1;
	volatile int32_t t172 = 957007740;

    t172 = (((x801-x802)<=x803)+x804);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x805 = -1;
	static volatile uint64_t x806 = 0LLU;
	uint16_t x807 = UINT16_MAX;
	static volatile int32_t x808 = -31;
	volatile int32_t t173 = -304035790;

    t173 = (((x805-x806)<=x807)+x808);

    if (t173 != -31) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x809 = INT16_MAX;
	int64_t x810 = -3218269LL;
	int16_t x811 = INT16_MAX;

    t174 = (((x809-x810)<=x811)+x812);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x813 = 0U;
	volatile int8_t x814 = INT8_MIN;
	volatile int16_t x815 = 70;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t175 = -498689;

    t175 = (((x813-x814)<=x815)+x816);

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x818 = 81U;
	uint8_t x819 = 10U;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t176 = -22921;

    t176 = (((x817-x818)<=x819)+x820);

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x822 = -1;
	int64_t x823 = INT64_MAX;
	int64_t x824 = INT64_MIN;
	int64_t t177 = 260763661307LL;

    t177 = (((x821-x822)<=x823)+x824);

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x825 = 701905063;
	volatile int64_t x827 = INT64_MAX;
	volatile int32_t x828 = -1;
	volatile int32_t t178 = 1;

    t178 = (((x825-x826)<=x827)+x828);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x829 = -1;
	int64_t x830 = INT64_MIN;
	int32_t x831 = 322;
	volatile int32_t x832 = 104793178;
	static volatile int32_t t179 = -3;

    t179 = (((x829-x830)<=x831)+x832);

    if (t179 != 104793178) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x833 = UINT16_MAX;
	volatile int8_t x834 = -1;
	int8_t x835 = 1;
	volatile uint32_t x836 = 27285287U;
	volatile uint32_t t180 = 2361369U;

    t180 = (((x833-x834)<=x835)+x836);

    if (t180 != 27285287U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x838 = UINT8_MAX;
	static int16_t x839 = 195;
	int16_t x840 = INT16_MIN;
	int32_t t181 = -955221;

    t181 = (((x837-x838)<=x839)+x840);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x842 = UINT16_MAX;
	int16_t x843 = -1038;
	static int8_t x844 = INT8_MIN;

    t182 = (((x841-x842)<=x843)+x844);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x845 = UINT32_MAX;
	volatile int8_t x846 = -1;
	volatile uint8_t x847 = UINT8_MAX;
	uint32_t x848 = 309579857U;
	static volatile uint32_t t183 = 216434400U;

    t183 = (((x845-x846)<=x847)+x848);

    if (t183 != 309579858U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x853 = 33;
	uint32_t x854 = 6553284U;
	volatile uint8_t x855 = 126U;
	volatile uint32_t x856 = 30794U;

    t184 = (((x853-x854)<=x855)+x856);

    if (t184 != 30794U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x858 = -1;
	volatile int32_t x859 = INT32_MAX;
	volatile int32_t t185 = -606236950;

    t185 = (((x857-x858)<=x859)+x860);

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x861 = -457;
	uint32_t x862 = 2087U;
	static int32_t x863 = -1;
	static int8_t x864 = -13;
	volatile int32_t t186 = -383144178;

    t186 = (((x861-x862)<=x863)+x864);

    if (t186 != -12) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x865 = UINT8_MAX;
	int32_t x866 = -3;
	int8_t x867 = -2;
	int32_t t187 = -169;

    t187 = (((x865-x866)<=x867)+x868);

    if (t187 != -735069395) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x869 = UINT16_MAX;
	uint64_t x870 = 2231567664242922LLU;
	uint16_t x872 = UINT16_MAX;

    t188 = (((x869-x870)<=x871)+x872);

    if (t188 != 65536) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x873 = INT8_MIN;
	int8_t x874 = -1;
	uint64_t x875 = UINT64_MAX;
	static int32_t x876 = 81133;
	int32_t t189 = 1016628967;

    t189 = (((x873-x874)<=x875)+x876);

    if (t189 != 81134) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x878 = 0U;
	int32_t x879 = INT32_MAX;
	int8_t x880 = INT8_MIN;

    t190 = (((x877-x878)<=x879)+x880);

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x885 = 30U;
	int32_t x887 = -1;
	int8_t x888 = INT8_MIN;
	volatile int32_t t191 = 732636356;

    t191 = (((x885-x886)<=x887)+x888);

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x890 = 1U;
	int8_t x891 = 0;
	static uint16_t x892 = 7U;

    t192 = (((x889-x890)<=x891)+x892);

    if (t192 != 8) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x897 = INT16_MIN;
	int32_t x898 = INT32_MIN;
	uint64_t x899 = 7415433LLU;
	int16_t x900 = -1;

    t193 = (((x897-x898)<=x899)+x900);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x906 = 118U;
	volatile uint8_t x907 = 63U;
	volatile uint64_t t194 = 805086LLU;

    t194 = (((x905-x906)<=x907)+x908);

    if (t194 != 3507605571LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x909 = 90612U;
	int32_t x911 = -1487;
	static int16_t x912 = -1;
	int32_t t195 = -4384250;

    t195 = (((x909-x910)<=x911)+x912);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x913 = -1;
	int16_t x914 = INT16_MIN;
	int32_t t196 = INT32_MIN;

    t196 = (((x913-x914)<=x915)+x916);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x921 = INT8_MIN;
	int32_t x922 = -140521575;
	static int64_t x923 = INT64_MIN;
	uint16_t x924 = 357U;
	int32_t t197 = -321660790;

    t197 = (((x921-x922)<=x923)+x924);

    if (t197 != 357) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x925 = 1040;
	int16_t x926 = 585;
	int32_t x927 = 34;
	static volatile int8_t x928 = 59;
	static volatile int32_t t198 = 9477;

    t198 = (((x925-x926)<=x927)+x928);

    if (t198 != 59) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x929 = 28843496068990LLU;
	int64_t x930 = INT64_MIN;
	static uint16_t x931 = 31824U;
	int16_t x932 = -1;

    t199 = (((x929-x930)<=x931)+x932);

    if (t199 != -1) { NG(); } else { ; }
	
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

