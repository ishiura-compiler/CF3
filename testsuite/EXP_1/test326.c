
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

static int32_t x4 = INT32_MIN;
int16_t x8 = INT16_MAX;
uint32_t x17 = 17986384U;
int32_t x19 = INT32_MAX;
volatile int32_t t3 = -134;
int32_t x35 = INT32_MIN;
static uint16_t x41 = 0U;
uint16_t x50 = 718U;
static volatile int32_t t12 = 110193;
int16_t x61 = INT16_MAX;
uint8_t x63 = 33U;
int64_t t13 = -1331LL;
static volatile uint64_t t15 = 27967640LLU;
int16_t x75 = -1;
uint8_t x79 = 13U;
volatile int16_t x89 = 1;
int32_t x91 = INT32_MAX;
volatile uint64_t x95 = UINT64_MAX;
volatile int64_t t22 = 66535131648151630LL;
static int32_t x121 = INT32_MIN;
int64_t x122 = INT64_MIN;
volatile uint8_t x123 = 1U;
uint64_t x127 = UINT64_MAX;
int64_t x130 = -105092117404600860LL;
static volatile int8_t x145 = -7;
volatile uint32_t t28 = 762U;
int64_t x149 = -1243LL;
uint32_t x150 = UINT32_MAX;
uint64_t x151 = UINT64_MAX;
volatile int32_t x158 = -105837284;
uint32_t x166 = 66648161U;
static int8_t x167 = INT8_MIN;
int16_t x169 = INT16_MAX;
static int8_t x182 = -1;
volatile int32_t x183 = -1;
int16_t x186 = INT16_MIN;
uint64_t x188 = 7753344072636375LLU;
int64_t x217 = INT64_MIN;
int64_t x218 = -1LL;
volatile int32_t t42 = -2013247;
int16_t x222 = 6;
static uint32_t x227 = 1796923301U;
int32_t x229 = -1;
int64_t x230 = INT64_MIN;
volatile int32_t x235 = -105934;
volatile int32_t t46 = -6036;
volatile uint32_t t47 = 29212U;
int64_t x241 = 126412166LL;
int64_t t48 = 1430684LL;
static int8_t x250 = 15;
int32_t t50 = -67630764;
static volatile uint32_t t51 = 12783363U;
int64_t x263 = 34641310059LL;
volatile int32_t t52 = -4039278;
int32_t x268 = 817117638;
int64_t x281 = -344565057576LL;
volatile int64_t x282 = INT64_MIN;
static int64_t t56 = 28736LL;
int32_t x291 = 241833579;
volatile uint64_t t57 = 123987LLU;
uint8_t x294 = 15U;
static volatile uint32_t x295 = UINT32_MAX;
int32_t t58 = -1244160;
volatile int16_t x298 = -1;
int8_t x299 = INT8_MIN;
int64_t x307 = INT64_MIN;
volatile int64_t t61 = 2649LL;
int32_t x312 = -264;
volatile uint8_t x314 = UINT8_MAX;
uint8_t x329 = 14U;
volatile int32_t t67 = -3443;
int32_t x337 = INT32_MAX;
volatile int64_t t68 = -25945929LL;
volatile int32_t t70 = 216;
int32_t t71 = -39904;
uint32_t x355 = UINT32_MAX;
uint32_t x358 = 45U;
uint16_t x360 = 1U;
int8_t x364 = -1;
volatile int32_t t76 = -3758350;
int32_t t78 = 0;
int64_t x385 = 42LL;
int64_t x392 = INT64_MAX;
static uint64_t x398 = 13666104508LLU;
static int16_t x399 = INT16_MIN;
static volatile int32_t t81 = 14831;
static volatile int32_t t82 = 216;
volatile int16_t x410 = INT16_MIN;
static volatile int32_t t83 = -1;
int16_t x425 = -59;
uint8_t x432 = UINT8_MAX;
int32_t x435 = -1;
static volatile int32_t x449 = 5205299;
int16_t x451 = INT16_MIN;
volatile uint32_t t89 = 1U;
int64_t x453 = -1LL;
volatile int32_t t90 = 97;
int16_t x457 = INT16_MIN;
int64_t x458 = -1LL;
static volatile int64_t t91 = 11LL;
static int32_t t92 = -11980238;
int16_t x471 = -468;
uint8_t x477 = 6U;
static uint8_t x478 = 29U;
int32_t t96 = 0;
uint16_t x484 = 901U;
int8_t x485 = 7;
volatile int32_t t98 = 83;
static uint8_t x491 = 28U;
uint64_t t100 = 3206670774488406LLU;
uint16_t x497 = 652U;
volatile int16_t x500 = -1;
int32_t t101 = 1075974;
int64_t t103 = 17570758295953LL;
uint64_t x518 = UINT64_MAX;
int32_t x520 = INT32_MAX;
int64_t x528 = INT64_MIN;
int8_t x537 = INT8_MIN;
uint32_t x543 = UINT32_MAX;
int32_t t113 = -4009;
volatile int8_t x555 = INT8_MIN;
int32_t x556 = INT32_MIN;
static int8_t x559 = INT8_MIN;
volatile int32_t x561 = INT32_MIN;
int32_t x562 = -1;
int16_t x563 = 1;
int32_t x567 = 36;
int16_t x573 = 137;
int16_t x576 = 15149;
uint64_t x577 = 16457359555765504LLU;
int8_t x580 = INT8_MAX;
static uint8_t x583 = UINT8_MAX;
static int16_t x585 = INT16_MAX;
static volatile int16_t x589 = INT16_MIN;
static int64_t x603 = INT64_MIN;
static volatile int16_t x610 = -1;
volatile uint64_t x621 = UINT64_MAX;
int32_t x623 = INT32_MIN;
int64_t t127 = -7211LL;
int32_t x645 = INT32_MIN;
volatile uint64_t t129 = 137857106LLU;
static uint16_t x655 = 1895U;
int32_t x660 = -158;
static int64_t x669 = -1LL;
uint8_t x675 = UINT8_MAX;
static uint64_t x676 = 22587268227994LLU;
static int32_t x681 = INT32_MIN;
volatile int16_t x682 = -1;
int64_t x687 = INT64_MIN;
static uint64_t x709 = 52LLU;
int64_t x715 = INT64_MIN;
uint32_t x716 = 3830855U;
int64_t x729 = INT64_MIN;
volatile uint8_t x735 = 68U;
int16_t x743 = INT16_MIN;
uint8_t x748 = UINT8_MAX;
volatile int16_t x751 = INT16_MIN;
int32_t x760 = INT32_MIN;
static volatile int32_t x763 = INT32_MIN;
uint16_t x764 = UINT16_MAX;
int8_t x770 = INT8_MAX;
uint8_t x779 = UINT8_MAX;
volatile int32_t t157 = 72564;
static uint16_t x783 = UINT16_MAX;
int32_t x786 = 0;
int64_t x789 = INT64_MIN;
static int8_t x790 = INT8_MIN;
static volatile int64_t t160 = -21681062040463449LL;
int64_t x796 = -1LL;
int64_t t161 = 737084592835901LL;
volatile int16_t x798 = 20;
int32_t x800 = -366190;
volatile uint32_t x803 = UINT32_MAX;
volatile int32_t t163 = 0;
int64_t x817 = INT64_MIN;
int8_t x834 = -2;
int32_t x843 = INT32_MIN;
int64_t t172 = -135LL;
uint8_t x850 = 20U;
int32_t x855 = INT32_MAX;
int64_t x856 = -1981648721515721025LL;
uint32_t x857 = 8014U;
int16_t x861 = INT16_MIN;
uint32_t x863 = 81188U;
static volatile int8_t x866 = INT8_MIN;
int32_t x870 = INT32_MIN;
int32_t x871 = INT32_MIN;
int32_t t178 = -11;
uint16_t x883 = UINT16_MAX;
int32_t x884 = -1;
static volatile int32_t t181 = -50706;
int32_t x886 = -37;
uint64_t x890 = UINT64_MAX;
int16_t x891 = INT16_MIN;
uint8_t x897 = UINT8_MAX;
static uint32_t x898 = 1250054294U;
int16_t x912 = INT16_MIN;
int64_t x915 = INT64_MAX;
uint32_t x916 = 1744U;
int32_t x919 = -1;
uint32_t t190 = 5690489U;
volatile int8_t x955 = -1;
int32_t x960 = INT32_MAX;
uint16_t x961 = UINT16_MAX;


void f0(void) {
    	static int16_t x1 = 826;
	uint64_t x2 = 0LLU;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = 20967;

    t0 = (((x1-x2)<=x3)/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	volatile uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MIN;
	int32_t t1 = -19;

    t1 = (((x5-x6)<=x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1797782002614LL;
	static int64_t x14 = -17071425305710967LL;
	int64_t x15 = INT64_MIN;
	volatile int32_t x16 = 3023;
	static int32_t t2 = -25;

    t2 = (((x13-x14)<=x15)/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = UINT32_MAX;
	int8_t x20 = -1;

    t3 = (((x17-x18)<=x19)/x20);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	uint8_t x22 = UINT8_MAX;
	static volatile int32_t x23 = INT32_MAX;
	uint32_t x24 = 59U;
	volatile uint32_t t4 = 283284316U;

    t4 = (((x21-x22)<=x23)/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = UINT64_MAX;
	int16_t x26 = -4;
	static int64_t x27 = -503530679532655LL;
	int64_t x28 = INT64_MAX;
	int64_t t5 = 1215344429140809296LL;

    t5 = (((x25-x26)<=x27)/x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 5U;
	uint32_t x30 = UINT32_MAX;
	static uint64_t x31 = 7369062959LLU;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -8051177;

    t6 = (((x29-x30)<=x31)/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x34 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 1664805639342777706LLU;

    t7 = (((x33-x34)<=x35)/x36);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MAX;
	static uint64_t x38 = 19012688LLU;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 6LLU;
	volatile uint64_t t8 = 806356527LLU;

    t8 = (((x37-x38)<=x39)/x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x42 = 41796183669451368LLU;
	int8_t x43 = 43;
	int16_t x44 = INT16_MIN;
	int32_t t9 = -1031044060;

    t9 = (((x41-x42)<=x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -52441340518LL;
	volatile int64_t x46 = -2655513114LL;
	uint64_t x47 = 10223157208296LLU;
	int16_t x48 = -1;
	int32_t t10 = 477175;

    t10 = (((x45-x46)<=x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	volatile int8_t x51 = -1;
	int32_t x52 = -1;
	int32_t t11 = -72163;

    t11 = (((x49-x50)<=x51)/x52);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x57 = 17U;
	uint64_t x58 = 543960182LLU;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 5429U;

    t12 = (((x57-x58)<=x59)/x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x62 = -536176145;
	int64_t x64 = -17LL;

    t13 = (((x61-x62)<=x63)/x64);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = 41;
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MAX;
	volatile uint32_t x68 = 172006U;
	uint32_t t14 = 3910034U;

    t14 = (((x65-x66)<=x67)/x68);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = INT64_MAX;
	static volatile uint32_t x70 = 1191963111U;
	uint8_t x71 = 124U;
	volatile uint64_t x72 = UINT64_MAX;

    t15 = (((x69-x70)<=x71)/x72);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = INT32_MIN;
	static int32_t x74 = -647550;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t16 = -2;

    t16 = (((x73-x74)<=x75)/x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = INT16_MIN;
	volatile int16_t x78 = -7;
	uint64_t x80 = 180681796309LLU;
	uint64_t t17 = 1108062534586LLU;

    t17 = (((x77-x78)<=x79)/x80);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MIN;
	int16_t x88 = 957;
	volatile int32_t t18 = -450;

    t18 = (((x85-x86)<=x87)/x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x90 = INT8_MIN;
	int64_t x92 = -15411676228LL;
	static int64_t t19 = -412445663LL;

    t19 = (((x89-x90)<=x91)/x92);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x93 = 61272374U;
	uint8_t x94 = 0U;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t20 = 4932LLU;

    t20 = (((x93-x94)<=x95)/x96);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x101 = 0U;
	int16_t x102 = -1;
	static int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MAX;
	static volatile int32_t t21 = -18920;

    t21 = (((x101-x102)<=x103)/x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	uint64_t x111 = 118039277308817252LLU;
	int64_t x112 = INT64_MIN;

    t22 = (((x109-x110)<=x111)/x112);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x124 = INT16_MAX;
	int32_t t23 = 1590;

    t23 = (((x121-x122)<=x123)/x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = -1;
	static uint32_t x126 = 6U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t24 = -1998;

    t24 = (((x125-x126)<=x127)/x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x129 = 1970906016LLU;
	int64_t x131 = -115655910LL;
	int16_t x132 = INT16_MIN;
	volatile int32_t t25 = 0;

    t25 = (((x129-x130)<=x131)/x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x134 = 252031LL;
	static volatile uint32_t x135 = 641411U;
	uint32_t x136 = 514U;
	volatile uint32_t t26 = 10392842U;

    t26 = (((x133-x134)<=x135)/x136);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MAX;
	int64_t t27 = -2779326LL;

    t27 = (((x141-x142)<=x143)/x144);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x146 = -1;
	int16_t x147 = INT16_MIN;
	static volatile uint32_t x148 = UINT32_MAX;

    t28 = (((x145-x146)<=x147)/x148);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x152 = -1;
	int32_t t29 = 14;

    t29 = (((x149-x150)<=x151)/x152);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = UINT32_MAX;
	static uint32_t x154 = UINT32_MAX;
	static uint64_t x155 = 124455117133907LLU;
	int16_t x156 = INT16_MIN;
	int32_t t30 = -215851;

    t30 = (((x153-x154)<=x155)/x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x157 = 318441;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = -1;
	static volatile int32_t t31 = -1469;

    t31 = (((x157-x158)<=x159)/x160);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x165 = UINT64_MAX;
	int32_t x168 = -1;
	volatile int32_t t32 = -17;

    t32 = (((x165-x166)<=x167)/x168);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x170 = 3;
	volatile int32_t x171 = INT32_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t33 = 14942984LLU;

    t33 = (((x169-x170)<=x171)/x172);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x177 = 8U;
	uint16_t x178 = 162U;
	uint32_t x179 = 2782526U;
	int32_t x180 = -1;
	static volatile int32_t t34 = -210836989;

    t34 = (((x177-x178)<=x179)/x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x181 = INT8_MIN;
	int32_t x184 = 368;
	static volatile int32_t t35 = 31;

    t35 = (((x181-x182)<=x183)/x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x185 = -3;
	volatile int16_t x187 = INT16_MIN;
	volatile uint64_t t36 = 14076LLU;

    t36 = (((x185-x186)<=x187)/x188);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = -1;
	volatile int8_t x190 = INT8_MIN;
	uint8_t x191 = 7U;
	uint16_t x192 = 22U;
	volatile int32_t t37 = 15;

    t37 = (((x189-x190)<=x191)/x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = INT16_MAX;
	int16_t x198 = -436;
	static int64_t x199 = INT64_MIN;
	uint16_t x200 = 474U;
	int32_t t38 = 14179332;

    t38 = (((x197-x198)<=x199)/x200);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x201 = 3LLU;
	volatile int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t39 = 28520;

    t39 = (((x201-x202)<=x203)/x204);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x205 = UINT32_MAX;
	int8_t x206 = -18;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = -2459284;
	static volatile int32_t t40 = -1711;

    t40 = (((x205-x206)<=x207)/x208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x209 = 0U;
	volatile int64_t x210 = -1LL;
	volatile uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 2U;
	int32_t t41 = 1;

    t41 = (((x209-x210)<=x211)/x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;

    t42 = (((x217-x218)<=x219)/x220);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x221 = 2007;
	volatile uint16_t x223 = 98U;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t43 = 24314859278724LLU;

    t43 = (((x221-x222)<=x223)/x224);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	uint16_t x228 = 1858U;
	static volatile int32_t t44 = 15;

    t44 = (((x225-x226)<=x227)/x228);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t45 = 0;

    t45 = (((x229-x230)<=x231)/x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x233 = 34062LL;
	static int64_t x234 = -1LL;
	int16_t x236 = 64;

    t46 = (((x233-x234)<=x235)/x236);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x237 = INT32_MIN;
	uint32_t x238 = 3330U;
	static volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = 3426346U;

    t47 = (((x237-x238)<=x239)/x240);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x242 = 19004365;
	int32_t x243 = INT32_MIN;
	volatile int64_t x244 = INT64_MIN;

    t48 = (((x241-x242)<=x243)/x244);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x245 = INT8_MAX;
	static volatile uint64_t x246 = 40954569765LLU;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	int64_t t49 = 3096665801537025609LL;

    t49 = (((x245-x246)<=x247)/x248);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x249 = -1LL;
	int64_t x251 = -1LL;
	int32_t x252 = -86223;

    t50 = (((x249-x250)<=x251)/x252);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x257 = 20U;
	int32_t x258 = 3160;
	volatile int8_t x259 = -11;
	uint32_t x260 = 777U;

    t51 = (((x257-x258)<=x259)/x260);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x264 = -1;

    t52 = (((x261-x262)<=x263)/x264);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x265 = 20616LLU;
	volatile uint32_t x266 = UINT32_MAX;
	volatile int64_t x267 = INT64_MAX;
	int32_t t53 = -234;

    t53 = (((x265-x266)<=x267)/x268);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x277 = INT16_MAX;
	static int8_t x278 = INT8_MIN;
	uint8_t x279 = 7U;
	static int64_t x280 = -1LL;
	static volatile int64_t t54 = -127LL;

    t54 = (((x277-x278)<=x279)/x280);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x283 = 0;
	uint16_t x284 = UINT16_MAX;
	int32_t t55 = -60697670;

    t55 = (((x281-x282)<=x283)/x284);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x285 = -1;
	static volatile int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	volatile int64_t x288 = INT64_MIN;

    t56 = (((x285-x286)<=x287)/x288);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x289 = INT16_MIN;
	volatile int64_t x290 = INT64_MIN;
	volatile uint64_t x292 = 836884557LLU;

    t57 = (((x289-x290)<=x291)/x292);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x293 = INT16_MIN;
	static int32_t x296 = -122093;

    t58 = (((x293-x294)<=x295)/x296);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x297 = UINT16_MAX;
	int64_t x300 = 128223160231376LL;
	static int64_t t59 = -571985366637056685LL;

    t59 = (((x297-x298)<=x299)/x300);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x301 = 52U;
	uint16_t x302 = 42U;
	int64_t x303 = INT64_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t60 = -1;

    t60 = (((x301-x302)<=x303)/x304);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x305 = 158192731LLU;
	static volatile int64_t x306 = -296LL;
	int64_t x308 = INT64_MIN;

    t61 = (((x305-x306)<=x307)/x308);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x309 = 59U;
	uint32_t x310 = 2249220U;
	int32_t x311 = -1;
	volatile int32_t t62 = 857625098;

    t62 = (((x309-x310)<=x311)/x312);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x313 = -1;
	uint16_t x315 = 330U;
	int8_t x316 = INT8_MIN;
	int32_t t63 = -8;

    t63 = (((x313-x314)<=x315)/x316);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x321 = INT8_MIN;
	int64_t x322 = -95LL;
	static volatile uint16_t x323 = 926U;
	int32_t x324 = 12883971;
	int32_t t64 = -27698;

    t64 = (((x321-x322)<=x323)/x324);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x325 = -3335616308LL;
	int32_t x326 = 4;
	int64_t x327 = INT64_MIN;
	int16_t x328 = -11001;
	int32_t t65 = 1524575;

    t65 = (((x325-x326)<=x327)/x328);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x330 = -66942971LL;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int8_t x332 = INT8_MIN;
	int32_t t66 = -99663;

    t66 = (((x329-x330)<=x331)/x332);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MAX;
	int32_t x335 = -4255;
	uint8_t x336 = 16U;

    t67 = (((x333-x334)<=x335)/x336);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x338 = 84588U;
	volatile uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;

    t68 = (((x337-x338)<=x339)/x340);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x341 = INT8_MIN;
	volatile int8_t x342 = 3;
	int16_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t69 = -476;

    t69 = (((x341-x342)<=x343)/x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x345 = 727829475432742LLU;
	int64_t x346 = INT64_MIN;
	static uint16_t x347 = 410U;
	static volatile int32_t x348 = 1240;

    t70 = (((x345-x346)<=x347)/x348);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x349 = -1;
	uint32_t x350 = 0U;
	uint32_t x351 = 16U;
	volatile uint8_t x352 = UINT8_MAX;

    t71 = (((x349-x350)<=x351)/x352);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x353 = 53;
	volatile int8_t x354 = INT8_MAX;
	uint8_t x356 = 30U;
	volatile int32_t t72 = 1816;

    t72 = (((x353-x354)<=x355)/x356);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x357 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t73 = 216;

    t73 = (((x357-x358)<=x359)/x360);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x361 = -1LL;
	int8_t x362 = 27;
	static volatile uint16_t x363 = 7470U;
	int32_t t74 = -3117;

    t74 = (((x361-x362)<=x363)/x364);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x365 = INT64_MAX;
	int64_t x366 = 1LL;
	static int64_t x367 = 208LL;
	int32_t x368 = -1;
	int32_t t75 = -3312;

    t75 = (((x365-x366)<=x367)/x368);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = -284;
	int64_t x371 = 106LL;
	static int8_t x372 = INT8_MIN;

    t76 = (((x369-x370)<=x371)/x372);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x373 = INT8_MAX;
	uint8_t x374 = 10U;
	int64_t x375 = INT64_MAX;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t77 = 0;

    t77 = (((x373-x374)<=x375)/x376);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x381 = INT64_MAX;
	int8_t x382 = 33;
	static volatile uint16_t x383 = 34U;
	uint8_t x384 = UINT8_MAX;

    t78 = (((x381-x382)<=x383)/x384);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x386 = INT16_MAX;
	uint8_t x387 = 21U;
	static int16_t x388 = 6672;
	volatile int32_t t79 = -372;

    t79 = (((x385-x386)<=x387)/x388);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x389 = 28;
	volatile uint8_t x390 = 38U;
	int16_t x391 = 3910;
	int64_t t80 = -102055713376934LL;

    t80 = (((x389-x390)<=x391)/x392);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x397 = UINT8_MAX;
	int32_t x400 = -4;

    t81 = (((x397-x398)<=x399)/x400);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x401 = 871423393118LL;
	uint64_t x402 = 6LLU;
	uint8_t x403 = 1U;
	int32_t x404 = INT32_MIN;

    t82 = (((x401-x402)<=x403)/x404);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x409 = -5239613386LL;
	volatile int32_t x411 = INT32_MIN;
	uint16_t x412 = 11387U;

    t83 = (((x409-x410)<=x411)/x412);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x417 = 23U;
	int64_t x418 = INT64_MAX;
	int16_t x419 = INT16_MIN;
	volatile int32_t x420 = INT32_MAX;
	volatile int32_t t84 = 224201750;

    t84 = (((x417-x418)<=x419)/x420);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x421 = 27U;
	volatile int64_t x422 = -625354LL;
	int32_t x423 = -1;
	volatile int64_t x424 = INT64_MIN;
	static volatile int64_t t85 = -6LL;

    t85 = (((x421-x422)<=x423)/x424);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x426 = INT16_MIN;
	int64_t x427 = -1LL;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t86 = -410927397;

    t86 = (((x425-x426)<=x427)/x428);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x429 = -1;
	static int16_t x430 = -755;
	static int8_t x431 = INT8_MIN;
	static int32_t t87 = -468614937;

    t87 = (((x429-x430)<=x431)/x432);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x433 = 37U;
	uint32_t x434 = UINT32_MAX;
	volatile int8_t x436 = -1;
	volatile int32_t t88 = 112;

    t88 = (((x433-x434)<=x435)/x436);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x450 = 20U;
	static uint32_t x452 = 67540096U;

    t89 = (((x449-x450)<=x451)/x452);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x454 = 36U;
	int8_t x455 = INT8_MIN;
	static uint8_t x456 = UINT8_MAX;

    t90 = (((x453-x454)<=x455)/x456);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x459 = INT8_MIN;
	static int64_t x460 = -970690271LL;

    t91 = (((x457-x458)<=x459)/x460);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x461 = -93665;
	int8_t x462 = INT8_MIN;
	static int32_t x463 = -1;
	int32_t x464 = -1;

    t92 = (((x461-x462)<=x463)/x464);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x465 = INT8_MAX;
	uint8_t x466 = 4U;
	int64_t x467 = 175656054243LL;
	static volatile int8_t x468 = -1;
	volatile int32_t t93 = 13;

    t93 = (((x465-x466)<=x467)/x468);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x469 = 43LLU;
	int8_t x470 = -1;
	static volatile int16_t x472 = -1;
	volatile int32_t t94 = -21684;

    t94 = (((x469-x470)<=x471)/x472);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x473 = INT16_MIN;
	static int64_t x474 = -1LL;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = 10269817380492LLU;
	uint64_t t95 = 3899067331647LLU;

    t95 = (((x473-x474)<=x475)/x476);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x479 = 0;
	static int8_t x480 = 62;

    t96 = (((x477-x478)<=x479)/x480);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x481 = -1;
	uint32_t x482 = UINT32_MAX;
	volatile uint32_t x483 = 4U;
	volatile int32_t t97 = 14949977;

    t97 = (((x481-x482)<=x483)/x484);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x486 = 0;
	uint32_t x487 = UINT32_MAX;
	volatile int16_t x488 = 10;

    t98 = (((x485-x486)<=x487)/x488);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x489 = 3U;
	int8_t x490 = INT8_MAX;
	int16_t x492 = -2;
	int32_t t99 = -4674929;

    t99 = (((x489-x490)<=x491)/x492);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x493 = 26;
	volatile int32_t x494 = -232;
	int32_t x495 = INT32_MIN;
	uint64_t x496 = 18311100929LLU;

    t100 = (((x493-x494)<=x495)/x496);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x498 = -1;
	int32_t x499 = INT32_MAX;

    t101 = (((x497-x498)<=x499)/x500);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x505 = -1;
	volatile int8_t x506 = INT8_MAX;
	volatile int8_t x507 = INT8_MIN;
	volatile uint16_t x508 = 48U;
	volatile int32_t t102 = 8705;

    t102 = (((x505-x506)<=x507)/x508);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MIN;
	uint16_t x511 = 3U;
	int64_t x512 = INT64_MIN;

    t103 = (((x509-x510)<=x511)/x512);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x513 = UINT16_MAX;
	int16_t x514 = INT16_MIN;
	int32_t x515 = 3930;
	int8_t x516 = INT8_MIN;
	int32_t t104 = 14;

    t104 = (((x513-x514)<=x515)/x516);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x517 = UINT64_MAX;
	uint16_t x519 = UINT16_MAX;
	static int32_t t105 = -1794132;

    t105 = (((x517-x518)<=x519)/x520);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x521 = -1;
	volatile int32_t x522 = -1;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = 472483U;
	uint32_t t106 = 2381654U;

    t106 = (((x521-x522)<=x523)/x524);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x525 = INT32_MAX;
	uint32_t x526 = 110341120U;
	uint64_t x527 = 112682541355011912LLU;
	int64_t t107 = -2202LL;

    t107 = (((x525-x526)<=x527)/x528);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x529 = UINT64_MAX;
	uint16_t x530 = 50U;
	static int32_t x531 = INT32_MAX;
	static uint16_t x532 = 31U;
	static volatile int32_t t108 = 396431734;

    t108 = (((x529-x530)<=x531)/x532);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x533 = 76U;
	int32_t x534 = 1743191;
	int32_t x535 = INT32_MAX;
	volatile uint32_t x536 = 151777U;
	volatile uint32_t t109 = 449U;

    t109 = (((x533-x534)<=x535)/x536);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x538 = -1;
	volatile int8_t x539 = 1;
	uint64_t x540 = 12LLU;
	uint64_t t110 = 49480LLU;

    t110 = (((x537-x538)<=x539)/x540);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x541 = INT32_MIN;
	int64_t x542 = INT64_MIN;
	int8_t x544 = 1;
	volatile int32_t t111 = 1;

    t111 = (((x541-x542)<=x543)/x544);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x545 = UINT8_MAX;
	static uint32_t x546 = 87074U;
	int8_t x547 = 1;
	int64_t x548 = -45LL;
	static int64_t t112 = -2159097506880LL;

    t112 = (((x545-x546)<=x547)/x548);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x549 = INT32_MAX;
	uint8_t x550 = UINT8_MAX;
	uint64_t x551 = 4142886687LLU;
	static int16_t x552 = INT16_MAX;

    t113 = (((x549-x550)<=x551)/x552);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x553 = UINT64_MAX;
	static int16_t x554 = -55;
	int32_t t114 = 16;

    t114 = (((x553-x554)<=x555)/x556);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x557 = UINT64_MAX;
	uint8_t x558 = 1U;
	volatile int32_t x560 = INT32_MIN;
	volatile int32_t t115 = -102440;

    t115 = (((x557-x558)<=x559)/x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x564 = INT16_MIN;
	int32_t t116 = 1;

    t116 = (((x561-x562)<=x563)/x564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x565 = UINT32_MAX;
	int32_t x566 = INT32_MIN;
	static int64_t x568 = INT64_MIN;
	int64_t t117 = 1249502417460859LL;

    t117 = (((x565-x566)<=x567)/x568);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x569 = INT8_MAX;
	uint16_t x570 = 232U;
	static int32_t x571 = -1;
	int8_t x572 = INT8_MIN;
	int32_t t118 = -492288365;

    t118 = (((x569-x570)<=x571)/x572);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x574 = INT8_MIN;
	uint32_t x575 = UINT32_MAX;
	static int32_t t119 = 8110220;

    t119 = (((x573-x574)<=x575)/x576);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x578 = UINT64_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	static int32_t t120 = 0;

    t120 = (((x577-x578)<=x579)/x580);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x581 = 771331649U;
	int64_t x582 = INT64_MAX;
	int32_t x584 = INT32_MIN;
	int32_t t121 = 33;

    t121 = (((x581-x582)<=x583)/x584);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x586 = 1U;
	static uint8_t x587 = UINT8_MAX;
	static uint64_t x588 = 563053271LLU;
	volatile uint64_t t122 = 15898671302993LLU;

    t122 = (((x585-x586)<=x587)/x588);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x590 = INT8_MAX;
	volatile int32_t x591 = INT32_MIN;
	int8_t x592 = 4;
	int32_t t123 = 59;

    t123 = (((x589-x590)<=x591)/x592);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x601 = -60;
	int16_t x602 = -1;
	static uint64_t x604 = 83557963225370LLU;
	volatile uint64_t t124 = 1943964LLU;

    t124 = (((x601-x602)<=x603)/x604);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x609 = 6;
	uint16_t x611 = 86U;
	uint64_t x612 = UINT64_MAX;
	uint64_t t125 = 323990602248LLU;

    t125 = (((x609-x610)<=x611)/x612);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x617 = INT64_MIN;
	static int64_t x618 = -2101362LL;
	int64_t x619 = 31917LL;
	uint64_t x620 = 4144694985239LLU;
	volatile uint64_t t126 = 4593303253958742867LLU;

    t126 = (((x617-x618)<=x619)/x620);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x622 = 6373366888LLU;
	int64_t x624 = -1LL;

    t127 = (((x621-x622)<=x623)/x624);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x625 = 686350229U;
	volatile int8_t x626 = 1;
	int64_t x627 = 441LL;
	uint32_t x628 = UINT32_MAX;
	uint32_t t128 = 177U;

    t128 = (((x625-x626)<=x627)/x628);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x646 = 38LLU;
	uint16_t x647 = 5622U;
	uint64_t x648 = UINT64_MAX;

    t129 = (((x645-x646)<=x647)/x648);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = 1LL;
	uint8_t x656 = 27U;
	volatile int32_t t130 = -1915785;

    t130 = (((x653-x654)<=x655)/x656);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x657 = INT64_MIN;
	int8_t x658 = INT8_MIN;
	uint32_t x659 = UINT32_MAX;
	volatile int32_t t131 = -491720;

    t131 = (((x657-x658)<=x659)/x660);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x661 = 1;
	uint8_t x662 = 0U;
	uint32_t x663 = 876U;
	uint64_t x664 = UINT64_MAX;
	static uint64_t t132 = 21LLU;

    t132 = (((x661-x662)<=x663)/x664);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x665 = -24;
	static uint8_t x666 = 2U;
	uint8_t x667 = 5U;
	static volatile int32_t x668 = INT32_MIN;
	volatile int32_t t133 = -97822;

    t133 = (((x665-x666)<=x667)/x668);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x670 = UINT32_MAX;
	volatile int8_t x671 = INT8_MIN;
	int64_t x672 = -500088471726982LL;
	volatile int64_t t134 = -2LL;

    t134 = (((x669-x670)<=x671)/x672);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x673 = UINT8_MAX;
	int16_t x674 = INT16_MAX;
	uint64_t t135 = 240524LLU;

    t135 = (((x673-x674)<=x675)/x676);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x677 = 51U;
	int8_t x678 = INT8_MIN;
	int64_t x679 = INT64_MAX;
	uint8_t x680 = 83U;
	int32_t t136 = -209183;

    t136 = (((x677-x678)<=x679)/x680);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x683 = 339;
	volatile uint8_t x684 = 3U;
	int32_t t137 = 1381549;

    t137 = (((x681-x682)<=x683)/x684);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x685 = 162344125;
	int16_t x686 = INT16_MAX;
	int16_t x688 = -1;
	volatile int32_t t138 = -11154;

    t138 = (((x685-x686)<=x687)/x688);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x689 = -1;
	int16_t x690 = INT16_MIN;
	volatile int32_t x691 = INT32_MIN;
	int32_t x692 = INT32_MIN;
	volatile int32_t t139 = -55474530;

    t139 = (((x689-x690)<=x691)/x692);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x693 = INT64_MIN;
	static int32_t x694 = -1;
	uint64_t x695 = 469LLU;
	static volatile uint16_t x696 = 44U;
	volatile int32_t t140 = -3;

    t140 = (((x693-x694)<=x695)/x696);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x701 = INT16_MIN;
	static uint8_t x702 = 35U;
	static uint16_t x703 = 1639U;
	volatile int16_t x704 = INT16_MIN;
	int32_t t141 = 1723;

    t141 = (((x701-x702)<=x703)/x704);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x710 = 31U;
	volatile int8_t x711 = INT8_MIN;
	int8_t x712 = -1;
	volatile int32_t t142 = 1659226;

    t142 = (((x709-x710)<=x711)/x712);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x713 = 115LL;
	volatile int16_t x714 = INT16_MAX;
	uint32_t t143 = 249744U;

    t143 = (((x713-x714)<=x715)/x716);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x717 = INT16_MAX;
	uint8_t x718 = UINT8_MAX;
	int16_t x719 = -625;
	int16_t x720 = INT16_MAX;
	volatile int32_t t144 = 278178738;

    t144 = (((x717-x718)<=x719)/x720);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x730 = -55600;
	int64_t x731 = 39745932916LL;
	int64_t x732 = -1LL;
	int64_t t145 = -5888083694LL;

    t145 = (((x729-x730)<=x731)/x732);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x733 = INT32_MAX;
	uint16_t x734 = 0U;
	static int8_t x736 = INT8_MIN;
	static volatile int32_t t146 = -271114;

    t146 = (((x733-x734)<=x735)/x736);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x737 = 89U;
	static uint16_t x738 = 12U;
	int8_t x739 = INT8_MAX;
	static int32_t x740 = INT32_MAX;
	int32_t t147 = 3596623;

    t147 = (((x737-x738)<=x739)/x740);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x741 = UINT8_MAX;
	uint64_t x742 = UINT64_MAX;
	volatile int16_t x744 = -1;
	volatile int32_t t148 = -1;

    t148 = (((x741-x742)<=x743)/x744);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x745 = INT8_MIN;
	uint64_t x746 = 5859124837010011LLU;
	volatile int16_t x747 = INT16_MIN;
	int32_t t149 = 19029565;

    t149 = (((x745-x746)<=x747)/x748);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = INT8_MAX;
	uint32_t x752 = UINT32_MAX;
	uint32_t t150 = 0U;

    t150 = (((x749-x750)<=x751)/x752);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x753 = INT32_MIN;
	static uint64_t x754 = UINT64_MAX;
	static int16_t x755 = -1;
	int16_t x756 = -1;
	volatile int32_t t151 = -518966;

    t151 = (((x753-x754)<=x755)/x756);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = 16U;
	int32_t t152 = -2754;

    t152 = (((x757-x758)<=x759)/x760);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x761 = 3;
	uint32_t x762 = UINT32_MAX;
	static volatile int32_t t153 = 0;

    t153 = (((x761-x762)<=x763)/x764);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x765 = INT64_MAX;
	volatile uint64_t x766 = 11319LLU;
	int8_t x767 = INT8_MAX;
	uint8_t x768 = 14U;
	int32_t t154 = 5803;

    t154 = (((x765-x766)<=x767)/x768);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x769 = 30;
	static volatile uint16_t x771 = 608U;
	static int16_t x772 = -4;
	int32_t t155 = -417774450;

    t155 = (((x769-x770)<=x771)/x772);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x773 = 0U;
	int16_t x774 = INT16_MIN;
	int8_t x775 = 0;
	int16_t x776 = INT16_MIN;
	static int32_t t156 = 6612416;

    t156 = (((x773-x774)<=x775)/x776);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x777 = 1018U;
	static int32_t x778 = -1;
	uint8_t x780 = UINT8_MAX;

    t157 = (((x777-x778)<=x779)/x780);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x781 = 101U;
	int8_t x782 = INT8_MIN;
	int64_t x784 = 6800LL;
	volatile int64_t t158 = 185041036LL;

    t158 = (((x781-x782)<=x783)/x784);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x785 = -1;
	static volatile int32_t x787 = INT32_MAX;
	uint64_t x788 = 1666909813814410932LLU;
	volatile uint64_t t159 = 19783521LLU;

    t159 = (((x785-x786)<=x787)/x788);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x791 = INT32_MIN;
	volatile int64_t x792 = -1LL;

    t160 = (((x789-x790)<=x791)/x792);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x793 = UINT16_MAX;
	int16_t x794 = -1;
	uint8_t x795 = 0U;

    t161 = (((x793-x794)<=x795)/x796);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x797 = -1;
	static int8_t x799 = INT8_MIN;
	int32_t t162 = 1310;

    t162 = (((x797-x798)<=x799)/x800);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x801 = 5002971LLU;
	int8_t x802 = -1;
	int32_t x804 = INT32_MIN;

    t163 = (((x801-x802)<=x803)/x804);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x813 = 52;
	uint64_t x814 = 1814LLU;
	int64_t x815 = INT64_MIN;
	int8_t x816 = -1;
	int32_t t164 = -29409;

    t164 = (((x813-x814)<=x815)/x816);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x818 = 1LLU;
	int16_t x819 = -7635;
	volatile uint16_t x820 = UINT16_MAX;
	static volatile int32_t t165 = -399822;

    t165 = (((x817-x818)<=x819)/x820);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x821 = -1;
	int64_t x822 = INT64_MIN;
	static uint32_t x823 = 2068742U;
	uint16_t x824 = 188U;
	static int32_t t166 = -82;

    t166 = (((x821-x822)<=x823)/x824);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x825 = INT16_MIN;
	volatile int16_t x826 = INT16_MAX;
	static volatile uint16_t x827 = 2U;
	static int64_t x828 = INT64_MAX;
	volatile int64_t t167 = 27276787859LL;

    t167 = (((x825-x826)<=x827)/x828);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x829 = INT8_MIN;
	volatile int16_t x830 = 187;
	uint64_t x831 = UINT64_MAX;
	uint64_t x832 = 3665778LLU;
	volatile uint64_t t168 = 452772LLU;

    t168 = (((x829-x830)<=x831)/x832);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x833 = INT32_MIN;
	int16_t x835 = INT16_MAX;
	static int16_t x836 = INT16_MAX;
	volatile int32_t t169 = 0;

    t169 = (((x833-x834)<=x835)/x836);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x837 = 777461LLU;
	static uint8_t x838 = UINT8_MAX;
	int32_t x839 = INT32_MIN;
	int16_t x840 = -2;
	volatile int32_t t170 = 45307056;

    t170 = (((x837-x838)<=x839)/x840);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	static int8_t x842 = -31;
	volatile int64_t x844 = 138437LL;
	int64_t t171 = -1654874131517393349LL;

    t171 = (((x841-x842)<=x843)/x844);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x846 = -1;
	volatile int8_t x847 = INT8_MAX;
	volatile int64_t x848 = INT64_MIN;

    t172 = (((x845-x846)<=x847)/x848);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x849 = 5227;
	int16_t x851 = INT16_MIN;
	int32_t x852 = -6470322;
	volatile int32_t t173 = 1;

    t173 = (((x849-x850)<=x851)/x852);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x853 = UINT32_MAX;
	volatile int32_t x854 = 2306668;
	static volatile int64_t t174 = -56203980319534233LL;

    t174 = (((x853-x854)<=x855)/x856);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x858 = 3646901252LL;
	volatile uint16_t x859 = UINT16_MAX;
	static uint32_t x860 = UINT32_MAX;
	uint32_t t175 = 850833U;

    t175 = (((x857-x858)<=x859)/x860);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x862 = INT64_MIN;
	uint16_t x864 = 1022U;
	volatile int32_t t176 = -25767214;

    t176 = (((x861-x862)<=x863)/x864);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x865 = 15U;
	uint32_t x867 = 133748U;
	uint64_t x868 = UINT64_MAX;
	static uint64_t t177 = 12712149188LLU;

    t177 = (((x865-x866)<=x867)/x868);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x869 = -1LL;
	volatile int8_t x872 = INT8_MIN;

    t178 = (((x869-x870)<=x871)/x872);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x873 = INT16_MIN;
	volatile uint64_t x874 = UINT64_MAX;
	int16_t x875 = INT16_MAX;
	int8_t x876 = INT8_MAX;
	volatile int32_t t179 = 55023396;

    t179 = (((x873-x874)<=x875)/x876);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x877 = -1LL;
	uint16_t x878 = UINT16_MAX;
	static int16_t x879 = -13583;
	static int64_t x880 = -1LL;
	int64_t t180 = 51756008LL;

    t180 = (((x877-x878)<=x879)/x880);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x881 = 2;
	uint16_t x882 = 101U;

    t181 = (((x881-x882)<=x883)/x884);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x885 = INT64_MIN;
	int8_t x887 = INT8_MAX;
	int64_t x888 = INT64_MAX;
	static int64_t t182 = 855923053LL;

    t182 = (((x885-x886)<=x887)/x888);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x889 = INT16_MIN;
	int32_t x892 = INT32_MIN;
	static int32_t t183 = 325472145;

    t183 = (((x889-x890)<=x891)/x892);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x899 = -2;
	int16_t x900 = 1721;
	volatile int32_t t184 = 3687;

    t184 = (((x897-x898)<=x899)/x900);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x901 = 52U;
	uint8_t x902 = 78U;
	volatile int32_t x903 = INT32_MAX;
	int8_t x904 = -1;
	int32_t t185 = -28230;

    t185 = (((x901-x902)<=x903)/x904);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x905 = INT64_MIN;
	volatile int32_t x906 = INT32_MIN;
	static int64_t x907 = INT64_MIN;
	uint64_t x908 = UINT64_MAX;
	volatile uint64_t t186 = 5LLU;

    t186 = (((x905-x906)<=x907)/x908);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x909 = 26632LLU;
	int64_t x910 = INT64_MIN;
	int32_t x911 = INT32_MIN;
	volatile int32_t t187 = 498018304;

    t187 = (((x909-x910)<=x911)/x912);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x913 = INT16_MIN;
	uint8_t x914 = 33U;
	volatile uint32_t t188 = 2026697U;

    t188 = (((x913-x914)<=x915)/x916);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x917 = INT8_MAX;
	int16_t x918 = 25;
	static uint8_t x920 = 6U;
	volatile int32_t t189 = -746051;

    t189 = (((x917-x918)<=x919)/x920);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x925 = INT32_MIN;
	volatile int8_t x926 = -1;
	volatile int16_t x927 = INT16_MAX;
	volatile uint32_t x928 = 8154U;

    t190 = (((x925-x926)<=x927)/x928);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x929 = -1;
	int16_t x930 = INT16_MAX;
	uint64_t x931 = 20268058LLU;
	volatile int16_t x932 = INT16_MIN;
	volatile int32_t t191 = -1;

    t191 = (((x929-x930)<=x931)/x932);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x933 = UINT16_MAX;
	static int32_t x934 = 491;
	static int16_t x935 = INT16_MAX;
	int8_t x936 = INT8_MIN;
	int32_t t192 = -13668459;

    t192 = (((x933-x934)<=x935)/x936);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x937 = INT64_MIN;
	int64_t x938 = INT64_MIN;
	volatile int8_t x939 = INT8_MAX;
	uint64_t x940 = UINT64_MAX;
	volatile uint64_t t193 = 165LLU;

    t193 = (((x937-x938)<=x939)/x940);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x941 = INT8_MIN;
	uint8_t x942 = UINT8_MAX;
	int64_t x943 = INT64_MIN;
	uint32_t x944 = 518643U;
	uint32_t t194 = 189423260U;

    t194 = (((x941-x942)<=x943)/x944);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x945 = INT16_MIN;
	static int16_t x946 = INT16_MIN;
	static int64_t x947 = -39999571455LL;
	int32_t x948 = -1;
	volatile int32_t t195 = -146865506;

    t195 = (((x945-x946)<=x947)/x948);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x949 = INT32_MIN;
	uint64_t x950 = 542238821804540899LLU;
	volatile int32_t x951 = -1;
	volatile uint16_t x952 = 133U;
	volatile int32_t t196 = -113507;

    t196 = (((x949-x950)<=x951)/x952);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x953 = UINT32_MAX;
	int8_t x954 = INT8_MIN;
	volatile int16_t x956 = -242;
	static volatile int32_t t197 = -47747;

    t197 = (((x953-x954)<=x955)/x956);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x957 = 11U;
	static int8_t x958 = INT8_MIN;
	uint16_t x959 = 40U;
	int32_t t198 = -2593;

    t198 = (((x957-x958)<=x959)/x960);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x962 = 32;
	int16_t x963 = -1;
	int32_t x964 = INT32_MAX;
	int32_t t199 = -43842;

    t199 = (((x961-x962)<=x963)/x964);

    if (t199 != 0) { NG(); } else { ; }
	
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

