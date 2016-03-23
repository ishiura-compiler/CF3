
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

int16_t x2 = -3;
uint32_t x6 = UINT32_MAX;
volatile int32_t x8 = -7;
static int16_t x9 = -45;
volatile uint64_t x14 = UINT64_MAX;
volatile int64_t x26 = INT64_MIN;
uint8_t x30 = 1U;
int16_t x34 = -1;
int64_t x45 = -546575231953102535LL;
int32_t x49 = 22699318;
int32_t x53 = 565;
int64_t x58 = -1LL;
static int16_t x65 = 0;
static int16_t x68 = INT16_MIN;
int8_t x69 = 1;
volatile int8_t x71 = INT8_MIN;
static int8_t x80 = INT8_MIN;
volatile int32_t t19 = 45;
int32_t t24 = -6839;
static int64_t x105 = INT64_MAX;
int16_t x108 = INT16_MAX;
uint8_t x111 = UINT8_MAX;
int64_t x116 = 2458643530984018590LL;
int8_t x117 = -17;
int32_t t28 = 376926;
uint16_t x139 = UINT16_MAX;
volatile uint64_t x144 = 314117004283595LLU;
int64_t x159 = INT64_MIN;
volatile int32_t t40 = -63682;
int8_t x178 = INT8_MAX;
static int8_t x180 = INT8_MIN;
int64_t x181 = INT64_MIN;
uint64_t x189 = 9471LLU;
volatile int32_t t46 = -1401;
int32_t x200 = -374;
volatile int32_t t47 = -44;
int32_t t48 = 5;
volatile int32_t x208 = INT32_MIN;
static uint16_t x220 = 2397U;
int32_t x236 = INT32_MIN;
volatile int32_t t56 = 15532706;
int8_t x237 = -1;
static int64_t x239 = INT64_MIN;
static int16_t x242 = INT16_MIN;
static volatile int32_t t59 = 169;
volatile uint8_t x253 = 52U;
uint16_t x259 = UINT16_MAX;
volatile int32_t x260 = -238;
int32_t t62 = 424;
volatile int32_t t64 = 90877;
static int32_t x270 = -1;
int32_t t65 = -6970;
static int8_t x273 = -1;
int8_t x274 = -6;
int16_t x277 = INT16_MIN;
static volatile int64_t x278 = -1LL;
int32_t t69 = -2;
int32_t t72 = -8687;
int16_t x311 = -1;
int32_t t75 = -74;
static int32_t t77 = -132;
static volatile int8_t x321 = -2;
static uint16_t x326 = UINT16_MAX;
volatile int32_t t79 = -81;
int16_t x334 = -1;
int32_t x339 = -3;
int32_t x345 = INT32_MIN;
int16_t x350 = -1;
int32_t t86 = -92949;
int64_t x371 = -1LL;
int32_t t90 = -58;
static int16_t x378 = INT16_MIN;
uint64_t x382 = 7LLU;
int64_t x386 = INT64_MIN;
volatile int32_t t93 = 1079406;
int32_t x389 = -1;
uint16_t x392 = 503U;
volatile int64_t x396 = INT64_MIN;
volatile int64_t x401 = INT64_MAX;
int32_t x405 = -1;
int64_t x410 = -1LL;
int32_t x415 = INT32_MAX;
static int32_t x416 = INT32_MIN;
static int64_t x422 = -1LL;
static volatile int16_t x423 = INT16_MIN;
int32_t x435 = -1;
uint64_t x439 = 3LLU;
int32_t t106 = 804825;
volatile int64_t x445 = 1044571148327092LL;
static int32_t t108 = 2149409;
static uint16_t x449 = 30548U;
volatile int16_t x454 = INT16_MAX;
volatile int16_t x455 = -2282;
int32_t x457 = INT32_MIN;
int64_t x459 = -1LL;
volatile uint32_t x464 = 8838972U;
int64_t x465 = 28260385LL;
volatile uint32_t x470 = 30U;
int8_t x474 = INT8_MIN;
int32_t t115 = 250422;
static int16_t x482 = 537;
int16_t x484 = 79;
volatile int32_t x487 = INT32_MIN;
int8_t x489 = INT8_MIN;
uint64_t x491 = 1674763362LLU;
static volatile int32_t t119 = 61427;
static int8_t x494 = INT8_MIN;
volatile int32_t t120 = 707024;
uint32_t x502 = 1368U;
static int32_t t124 = 25;
uint8_t x518 = UINT8_MAX;
static int8_t x524 = INT8_MIN;
int32_t t126 = 135;
int64_t x525 = INT64_MIN;
int64_t x538 = -1LL;
int8_t x542 = INT8_MIN;
uint16_t x543 = 6U;
static uint16_t x546 = 6477U;
int64_t x549 = INT64_MAX;
int64_t x556 = 9369LL;
static int16_t x562 = INT16_MIN;
static volatile int16_t x563 = -206;
uint8_t x567 = UINT8_MAX;
int8_t x576 = INT8_MIN;
int32_t t139 = -290358699;
uint16_t x582 = 171U;
static uint64_t x583 = 80262LLU;
int8_t x590 = INT8_MAX;
int32_t t145 = -28;
static volatile int32_t t146 = -18460880;
static uint16_t x618 = UINT16_MAX;
uint64_t x619 = UINT64_MAX;
int32_t x621 = -1;
volatile int8_t x627 = -1;
int32_t t151 = -5182;
volatile int32_t x630 = INT32_MIN;
int8_t x631 = INT8_MIN;
int8_t x637 = -1;
volatile int64_t x647 = -1LL;
int16_t x648 = INT16_MIN;
static volatile int32_t t156 = 1;
static int8_t x658 = INT8_MIN;
static int16_t x666 = INT16_MAX;
int8_t x671 = 5;
uint32_t x673 = UINT32_MAX;
int32_t t163 = 272;
uint16_t x682 = UINT16_MAX;
int32_t x683 = 3492580;
volatile int16_t x687 = -1;
int32_t t170 = -721518;
volatile int32_t t171 = -420;
uint16_t x718 = 0U;
uint16_t x720 = 1435U;
static uint64_t x724 = 21LLU;
int64_t x733 = 521356063180LL;
volatile int8_t x736 = INT8_MAX;
static int64_t x742 = INT64_MAX;
int8_t x744 = INT8_MIN;
int64_t x748 = -38030227006340509LL;
int16_t x760 = INT16_MAX;
int8_t x763 = INT8_MIN;
int64_t x765 = -104575788827952494LL;
int32_t t185 = -704434;
volatile int64_t x772 = INT64_MIN;
volatile int32_t t186 = -26;
int32_t x775 = 2;
int64_t x777 = INT64_MAX;
int32_t x781 = 0;
int8_t x790 = -1;
static volatile int32_t t192 = 1808;
static volatile int8_t x799 = INT8_MIN;
volatile int32_t t193 = 3;
int16_t x802 = 2042;
int64_t x808 = INT64_MIN;
int32_t t195 = 2059525;
static int16_t x809 = INT16_MIN;
static volatile int32_t t196 = -71;
int32_t x817 = INT32_MAX;
volatile int32_t t198 = 42025267;
uint16_t x823 = 3U;


void f0(void) {
    	int64_t x1 = -1LL;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = 25;
	static volatile int32_t t0 = -135817326;

    t0 = (x1<=(x2!=(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -43;
	uint64_t x7 = 146242396LLU;
	volatile int32_t t1 = 27492;

    t1 = (x5<=(x6!=(x7%x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = INT64_MAX;
	volatile uint64_t x11 = 7LLU;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 371433910;

    t2 = (x9<=(x10!=(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static volatile int64_t x15 = INT64_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = 81335;

    t3 = (x13<=(x14!=(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	volatile int32_t x18 = INT32_MIN;
	uint64_t x19 = 43180LLU;
	uint32_t x20 = 24345602U;
	volatile int32_t t4 = 112319;

    t4 = (x17<=(x18!=(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;
	volatile uint8_t x23 = 17U;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = -67982934;

    t5 = (x21<=(x22!=(x23%x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x27 = 2273259068486456319LL;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -447483859;

    t6 = (x25<=(x26!=(x27%x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 61U;
	int64_t x31 = INT64_MAX;
	uint16_t x32 = 2U;
	static int32_t t7 = 13928;

    t7 = (x29<=(x30!=(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 60U;
	static int8_t x35 = INT8_MAX;
	uint8_t x36 = 123U;
	volatile int32_t t8 = -128457903;

    t8 = (x33<=(x34!=(x35%x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -374;
	int64_t x38 = -450549979467LL;
	static uint8_t x39 = 1U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -368;

    t9 = (x37<=(x38!=(x39%x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	static int16_t x42 = INT16_MIN;
	static volatile int8_t x43 = INT8_MAX;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 3221275;

    t10 = (x41<=(x42!=(x43%x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -993;
	static volatile uint32_t x47 = UINT32_MAX;
	int16_t x48 = -2;
	int32_t t11 = 0;

    t11 = (x45<=(x46!=(x47%x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MAX;
	int64_t x52 = 972521772LL;
	static int32_t t12 = -5;

    t12 = (x49<=(x50!=(x51%x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x54 = -1665;
	volatile int32_t x55 = 9552583;
	int16_t x56 = -1;
	int32_t t13 = -900;

    t13 = (x53<=(x54!=(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 129987011LL;
	volatile int32_t x59 = 650389;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -17;

    t14 = (x57<=(x58!=(x59%x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = -1;
	volatile int32_t t15 = -665694;

    t15 = (x61<=(x62!=(x63%x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 1U;
	int64_t x67 = INT64_MAX;
	int32_t t16 = -2668;

    t16 = (x65<=(x66!=(x67%x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = UINT32_MAX;
	volatile int64_t x72 = INT64_MAX;
	static volatile int32_t t17 = 6802;

    t17 = (x69<=(x70!=(x71%x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MAX;
	static int16_t x78 = -1;
	int8_t x79 = 31;
	volatile int32_t t18 = -10;

    t18 = (x77<=(x78!=(x79%x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	static uint16_t x82 = 15U;
	volatile int8_t x83 = -1;
	int64_t x84 = INT64_MAX;

    t19 = (x81<=(x82!=(x83%x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MAX;
	volatile int32_t x86 = 373344671;
	volatile uint64_t x87 = 320759600071842428LLU;
	int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 1;

    t20 = (x85<=(x86!=(x87%x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x89 = -1LL;
	uint64_t x90 = UINT64_MAX;
	uint64_t x91 = UINT64_MAX;
	static volatile int32_t x92 = -1;
	int32_t t21 = -448651478;

    t21 = (x89<=(x90!=(x91%x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 196U;
	uint8_t x94 = UINT8_MAX;
	volatile int8_t x95 = INT8_MIN;
	volatile uint16_t x96 = 759U;
	volatile int32_t t22 = -876481;

    t22 = (x93<=(x94!=(x95%x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 182867LLU;
	int64_t x98 = 1598403LL;
	static uint64_t x99 = 474024491572827LLU;
	uint16_t x100 = 51U;
	int32_t t23 = 10246068;

    t23 = (x97<=(x98!=(x99%x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = 2040078792090513557LL;
	volatile uint8_t x102 = 28U;
	uint32_t x103 = 38U;
	uint16_t x104 = UINT16_MAX;

    t24 = (x101<=(x102!=(x103%x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x106 = INT32_MIN;
	uint8_t x107 = UINT8_MAX;
	static volatile int32_t t25 = 6;

    t25 = (x105<=(x106!=(x107%x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MIN;
	uint16_t x110 = 119U;
	int32_t x112 = -1;
	int32_t t26 = -581;

    t26 = (x109<=(x110!=(x111%x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = UINT8_MAX;
	uint64_t x114 = 3592450910LLU;
	volatile int16_t x115 = -131;
	volatile int32_t t27 = -342;

    t27 = (x113<=(x114!=(x115%x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = -2065262256LL;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;

    t28 = (x117<=(x118!=(x119%x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -5944670303263177LL;
	int16_t x122 = INT16_MIN;
	int64_t x123 = 6359LL;
	int64_t x124 = 268050LL;
	static volatile int32_t t29 = 1;

    t29 = (x121<=(x122!=(x123%x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = 2275639895864LL;
	int16_t x126 = INT16_MIN;
	static volatile int16_t x127 = INT16_MIN;
	int64_t x128 = -14520512069817565LL;
	int32_t t30 = 28;

    t30 = (x125<=(x126!=(x127%x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = INT8_MIN;
	int64_t x130 = -44235483LL;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = 1U;
	static volatile int32_t t31 = 279029071;

    t31 = (x129<=(x130!=(x131%x132)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = 2136LLU;
	volatile int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1537LL;
	int32_t t32 = -511849358;

    t32 = (x133<=(x134!=(x135%x136)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 5LLU;
	int16_t x140 = INT16_MAX;
	volatile int32_t t33 = -4442414;

    t33 = (x137<=(x138!=(x139%x140)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = UINT32_MAX;
	int16_t x142 = -3730;
	volatile uint64_t x143 = 28739LLU;
	volatile int32_t t34 = 417291842;

    t34 = (x141<=(x142!=(x143%x144)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	int16_t x147 = 1770;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 8787;

    t35 = (x145<=(x146!=(x147%x148)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -100613LL;
	int8_t x154 = INT8_MIN;
	volatile int64_t x155 = -1LL;
	int32_t x156 = INT32_MAX;
	int32_t t36 = 65365;

    t36 = (x153<=(x154!=(x155%x156)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = INT8_MAX;
	int8_t x158 = 29;
	static uint64_t x160 = 2562554552611LLU;
	volatile int32_t t37 = 20839155;

    t37 = (x157<=(x158!=(x159%x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = INT64_MIN;
	uint32_t x162 = 58816U;
	uint8_t x163 = 68U;
	int64_t x164 = -1LL;
	volatile int32_t t38 = 6235490;

    t38 = (x161<=(x162!=(x163%x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x165 = INT32_MIN;
	int8_t x166 = -48;
	static uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 112U;
	int32_t t39 = -16520440;

    t39 = (x165<=(x166!=(x167%x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x169 = 25686325U;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;

    t40 = (x169<=(x170!=(x171%x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = 5922477;
	uint8_t x174 = UINT8_MAX;
	static uint16_t x175 = UINT16_MAX;
	int32_t x176 = 786;
	static int32_t t41 = -13;

    t41 = (x173<=(x174!=(x175%x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x177 = 0;
	int32_t x179 = 12359238;
	static int32_t t42 = 111;

    t42 = (x177<=(x178!=(x179%x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x182 = UINT16_MAX;
	static volatile int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	static int32_t t43 = 80737;

    t43 = (x181<=(x182!=(x183%x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x187 = -1;
	volatile int32_t x188 = INT32_MAX;
	volatile int32_t t44 = -496477;

    t44 = (x185<=(x186!=(x187%x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x190 = INT64_MIN;
	int64_t x191 = 752785LL;
	volatile uint16_t x192 = 4066U;
	volatile int32_t t45 = -215;

    t45 = (x189<=(x190!=(x191%x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x193 = UINT16_MAX;
	static volatile int8_t x194 = -1;
	volatile uint16_t x195 = 25U;
	static volatile int32_t x196 = INT32_MAX;

    t46 = (x193<=(x194!=(x195%x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	uint64_t x198 = 1020764320801221806LLU;
	int64_t x199 = -1LL;

    t47 = (x197<=(x198!=(x199%x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	int64_t x202 = -138484870320408LL;
	uint64_t x203 = 314052973LLU;
	static int64_t x204 = -182675202798324LL;

    t48 = (x201<=(x202!=(x203%x204)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MAX;
	volatile int32_t t49 = -5677;

    t49 = (x205<=(x206!=(x207%x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = 1;
	int8_t x210 = INT8_MAX;
	int16_t x211 = 40;
	uint8_t x212 = 8U;
	volatile int32_t t50 = -4;

    t50 = (x209<=(x210!=(x211%x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = -1;
	static int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int32_t t51 = 4;

    t51 = (x213<=(x214!=(x215%x216)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x217 = UINT16_MAX;
	uint32_t x218 = 62197255U;
	volatile uint32_t x219 = 171505U;
	int32_t t52 = 2259;

    t52 = (x217<=(x218!=(x219%x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = 25U;
	static uint32_t x223 = 13U;
	volatile int32_t x224 = INT32_MIN;
	int32_t t53 = 32324684;

    t53 = (x221<=(x222!=(x223%x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	static int8_t x226 = 42;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = 5U;
	volatile int32_t t54 = 23;

    t54 = (x225<=(x226!=(x227%x228)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = INT16_MAX;
	volatile int8_t x230 = 61;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = 114U;
	int32_t t55 = 64890;

    t55 = (x229<=(x230!=(x231%x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -409;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MIN;

    t56 = (x233<=(x234!=(x235%x236)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x238 = 893700357907248740LLU;
	int32_t x240 = INT32_MAX;
	int32_t t57 = 43100919;

    t57 = (x237<=(x238!=(x239%x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = -250LL;
	int16_t x243 = -1;
	volatile int64_t x244 = -1963765LL;
	volatile int32_t t58 = -1;

    t58 = (x241<=(x242!=(x243%x244)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 3470U;
	static int8_t x248 = 17;

    t59 = (x245<=(x246!=(x247%x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x249 = 416612LLU;
	int8_t x250 = INT8_MAX;
	volatile uint32_t x251 = 56685838U;
	uint16_t x252 = 580U;
	int32_t t60 = -48431904;

    t60 = (x249<=(x250!=(x251%x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	static int8_t x256 = -13;
	static volatile int32_t t61 = -1974;

    t61 = (x253<=(x254!=(x255%x256)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = 11492U;
	int32_t x258 = INT32_MAX;

    t62 = (x257<=(x258!=(x259%x260)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x261 = UINT64_MAX;
	static int16_t x262 = INT16_MIN;
	static int32_t x263 = INT32_MIN;
	int64_t x264 = 20342743537250618LL;
	int32_t t63 = -64790;

    t63 = (x261<=(x262!=(x263%x264)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = 30;
	static volatile int8_t x266 = -7;
	int8_t x267 = -1;
	int16_t x268 = 7737;

    t64 = (x265<=(x266!=(x267%x268)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;

    t65 = (x269<=(x270!=(x271%x272)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x275 = UINT16_MAX;
	uint64_t x276 = 747381961702LLU;
	int32_t t66 = -156;

    t66 = (x273<=(x274!=(x275%x276)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x279 = 7U;
	static int16_t x280 = -1899;
	volatile int32_t t67 = 113244;

    t67 = (x277<=(x278!=(x279%x280)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x281 = 1938446617963332679LLU;
	uint16_t x282 = 3778U;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -26962LL;
	int32_t t68 = 20;

    t68 = (x281<=(x282!=(x283%x284)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x285 = INT32_MAX;
	volatile int64_t x286 = -1LL;
	uint64_t x287 = 12686763182LLU;
	int8_t x288 = INT8_MAX;

    t69 = (x285<=(x286!=(x287%x288)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MAX;
	volatile uint8_t x290 = 59U;
	int32_t x291 = INT32_MIN;
	volatile int64_t x292 = -1LL;
	int32_t t70 = 63497280;

    t70 = (x289<=(x290!=(x291%x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x293 = 29;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 36U;
	int16_t x296 = 15;
	int32_t t71 = 14990081;

    t71 = (x293<=(x294!=(x295%x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = UINT32_MAX;
	static int8_t x299 = INT8_MIN;
	volatile int64_t x300 = -1LL;

    t72 = (x297<=(x298!=(x299%x300)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x301 = 15;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t73 = 0;

    t73 = (x301<=(x302!=(x303%x304)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x305 = UINT64_MAX;
	uint16_t x306 = UINT16_MAX;
	static uint64_t x307 = 1LLU;
	int64_t x308 = 2164670LL;
	int32_t t74 = 2702;

    t74 = (x305<=(x306!=(x307%x308)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile uint16_t x310 = UINT16_MAX;
	int16_t x312 = INT16_MIN;

    t75 = (x309<=(x310!=(x311%x312)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = UINT32_MAX;
	uint64_t x314 = 112857LLU;
	int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = 51817739094419LLU;
	volatile int32_t t76 = 562240868;

    t76 = (x313<=(x314!=(x315%x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x317 = -9;
	volatile uint8_t x318 = 0U;
	int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;

    t77 = (x317<=(x318!=(x319%x320)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x322 = INT8_MIN;
	uint64_t x323 = 11LLU;
	static uint32_t x324 = 24050356U;
	int32_t t78 = -1933;

    t78 = (x321<=(x322!=(x323%x324)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = UINT64_MAX;
	int32_t x327 = 9226262;
	volatile uint8_t x328 = 4U;

    t79 = (x325<=(x326!=(x327%x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x333 = -1;
	int16_t x335 = 4454;
	static volatile int32_t x336 = -5;
	int32_t t80 = -404821711;

    t80 = (x333<=(x334!=(x335%x336)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = -1;
	static volatile int32_t x338 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	int32_t t81 = 822396490;

    t81 = (x337<=(x338!=(x339%x340)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x341 = UINT32_MAX;
	uint8_t x342 = 21U;
	static uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t82 = 8626;

    t82 = (x341<=(x342!=(x343%x344)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x346 = -457;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t83 = 919890264;

    t83 = (x345<=(x346!=(x347%x348)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = 15;
	static volatile int32_t x351 = -1;
	static uint8_t x352 = 6U;
	int32_t t84 = 517547784;

    t84 = (x349<=(x350!=(x351%x352)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x353 = -1;
	int8_t x354 = INT8_MIN;
	static uint64_t x355 = 1851716058596LLU;
	uint64_t x356 = UINT64_MAX;
	int32_t t85 = -63761;

    t85 = (x353<=(x354!=(x355%x356)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x357 = 1U;
	int32_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile uint16_t x360 = 894U;

    t86 = (x357<=(x358!=(x359%x360)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x361 = INT32_MIN;
	static int64_t x362 = INT64_MIN;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = -1LL;
	volatile int32_t t87 = 34;

    t87 = (x361<=(x362!=(x363%x364)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MAX;
	uint16_t x367 = 407U;
	uint64_t x368 = UINT64_MAX;
	volatile int32_t t88 = 10099153;

    t88 = (x365<=(x366!=(x367%x368)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -3LL;
	int32_t x370 = INT32_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	volatile int32_t t89 = -2848829;

    t89 = (x369<=(x370!=(x371%x372)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x373 = 3046746923776119036LLU;
	static int64_t x374 = INT64_MIN;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = 3963201729LL;

    t90 = (x373<=(x374!=(x375%x376)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x377 = INT8_MIN;
	volatile int16_t x379 = 0;
	uint16_t x380 = 485U;
	volatile int32_t t91 = 78;

    t91 = (x377<=(x378!=(x379%x380)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x381 = 685019;
	int16_t x383 = 1890;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t92 = -130858520;

    t92 = (x381<=(x382!=(x383%x384)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint32_t x387 = 137U;
	int8_t x388 = INT8_MIN;

    t93 = (x385<=(x386!=(x387%x388)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x390 = -18LL;
	volatile int8_t x391 = 32;
	volatile int32_t t94 = 768;

    t94 = (x389<=(x390!=(x391%x392)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x393 = INT32_MIN;
	uint8_t x394 = 0U;
	int64_t x395 = INT64_MIN;
	volatile int32_t t95 = -1110766;

    t95 = (x393<=(x394!=(x395%x396)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x397 = 10144;
	uint32_t x398 = 98236U;
	int16_t x399 = INT16_MIN;
	static int32_t x400 = INT32_MIN;
	int32_t t96 = 253094;

    t96 = (x397<=(x398!=(x399%x400)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x402 = 1128737948204231677LLU;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t97 = -9006053;

    t97 = (x401<=(x402!=(x403%x404)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x406 = UINT8_MAX;
	volatile int64_t x407 = INT64_MIN;
	uint64_t x408 = 30LLU;
	volatile int32_t t98 = 106993;

    t98 = (x405<=(x406!=(x407%x408)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = -1;
	volatile int32_t x411 = INT32_MAX;
	uint64_t x412 = 224892LLU;
	int32_t t99 = 1057;

    t99 = (x409<=(x410!=(x411%x412)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = 6;
	uint16_t x414 = 17426U;
	static volatile int32_t t100 = 257958098;

    t100 = (x413<=(x414!=(x415%x416)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x417 = -1;
	int8_t x418 = 0;
	static int16_t x419 = INT16_MAX;
	uint64_t x420 = UINT64_MAX;
	int32_t t101 = -2;

    t101 = (x417<=(x418!=(x419%x420)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x421 = -876351;
	static volatile uint8_t x424 = UINT8_MAX;
	volatile int32_t t102 = 6;

    t102 = (x421<=(x422!=(x423%x424)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = INT16_MAX;
	uint64_t x426 = UINT64_MAX;
	volatile uint64_t x427 = 254787616LLU;
	volatile int64_t x428 = 35LL;
	volatile int32_t t103 = -12;

    t103 = (x425<=(x426!=(x427%x428)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x429 = INT8_MIN;
	int8_t x430 = -1;
	int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MAX;
	volatile int32_t t104 = -3290322;

    t104 = (x429<=(x430!=(x431%x432)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	int64_t x436 = -292006474927602LL;
	volatile int32_t t105 = 38654640;

    t105 = (x433<=(x434!=(x435%x436)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x437 = INT64_MAX;
	uint16_t x438 = 11270U;
	int32_t x440 = -1;

    t106 = (x437<=(x438!=(x439%x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x441 = INT32_MIN;
	int32_t x442 = -1;
	uint64_t x443 = UINT64_MAX;
	static volatile int16_t x444 = INT16_MIN;
	int32_t t107 = -25;

    t107 = (x441<=(x442!=(x443%x444)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x446 = 13625916U;
	int16_t x447 = INT16_MAX;
	static uint8_t x448 = UINT8_MAX;

    t108 = (x445<=(x446!=(x447%x448)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x450 = INT32_MAX;
	int64_t x451 = 13146095239088LL;
	int32_t x452 = INT32_MIN;
	int32_t t109 = 33;

    t109 = (x449<=(x450!=(x451%x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x453 = -1;
	int16_t x456 = INT16_MIN;
	volatile int32_t t110 = 16229816;

    t110 = (x453<=(x454!=(x455%x456)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x458 = 843984;
	int64_t x460 = -1LL;
	volatile int32_t t111 = 7689582;

    t111 = (x457<=(x458!=(x459%x460)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = -2LL;
	int64_t x463 = -1LL;
	int32_t t112 = -614986950;

    t112 = (x461<=(x462!=(x463%x464)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x466 = -3563823;
	uint64_t x467 = UINT64_MAX;
	uint8_t x468 = 2U;
	volatile int32_t t113 = 502142214;

    t113 = (x465<=(x466!=(x467%x468)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x469 = 58U;
	static uint8_t x471 = 81U;
	uint16_t x472 = UINT16_MAX;
	int32_t t114 = 211;

    t114 = (x469<=(x470!=(x471%x472)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	int32_t x476 = -3500556;

    t115 = (x473<=(x474!=(x475%x476)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = 0;
	int16_t x478 = -27;
	volatile int32_t x479 = INT32_MAX;
	uint64_t x480 = UINT64_MAX;
	volatile int32_t t116 = 14;

    t116 = (x477<=(x478!=(x479%x480)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x481 = UINT64_MAX;
	volatile uint8_t x483 = UINT8_MAX;
	volatile int32_t t117 = 59;

    t117 = (x481<=(x482!=(x483%x484)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x485 = 3203U;
	int32_t x486 = INT32_MIN;
	uint8_t x488 = UINT8_MAX;
	int32_t t118 = -1;

    t118 = (x485<=(x486!=(x487%x488)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x490 = UINT16_MAX;
	static int16_t x492 = 137;

    t119 = (x489<=(x490!=(x491%x492)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x493 = -1LL;
	int32_t x495 = 3532;
	int16_t x496 = INT16_MIN;

    t120 = (x493<=(x494!=(x495%x496)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x497 = INT16_MAX;
	int8_t x498 = INT8_MIN;
	uint8_t x499 = 84U;
	int16_t x500 = -1;
	int32_t t121 = 655433093;

    t121 = (x497<=(x498!=(x499%x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = INT16_MAX;
	static volatile int64_t x503 = INT64_MIN;
	static int64_t x504 = 448220LL;
	volatile int32_t t122 = 43860035;

    t122 = (x501<=(x502!=(x503%x504)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x505 = -1LL;
	volatile int16_t x506 = INT16_MAX;
	uint8_t x507 = 0U;
	uint64_t x508 = 5806570LLU;
	int32_t t123 = 160454678;

    t123 = (x505<=(x506!=(x507%x508)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x513 = -1LL;
	int8_t x514 = INT8_MIN;
	uint64_t x515 = UINT64_MAX;
	uint8_t x516 = 28U;

    t124 = (x513<=(x514!=(x515%x516)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MIN;
	static uint32_t x519 = 3035031U;
	int8_t x520 = INT8_MAX;
	volatile int32_t t125 = 4410;

    t125 = (x517<=(x518!=(x519%x520)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = -1;
	volatile uint32_t x522 = 729374U;
	uint32_t x523 = 889919U;

    t126 = (x521<=(x522!=(x523%x524)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x526 = 70398216762LLU;
	static uint8_t x527 = 4U;
	static uint32_t x528 = UINT32_MAX;
	int32_t t127 = -627;

    t127 = (x525<=(x526!=(x527%x528)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x529 = 50U;
	int32_t x530 = INT32_MIN;
	static int64_t x531 = INT64_MIN;
	static volatile int16_t x532 = -1;
	static int32_t t128 = 4349826;

    t128 = (x529<=(x530!=(x531%x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x533 = INT8_MIN;
	volatile int16_t x534 = INT16_MAX;
	uint8_t x535 = 2U;
	int8_t x536 = 20;
	int32_t t129 = -405938;

    t129 = (x533<=(x534!=(x535%x536)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	uint64_t x539 = UINT64_MAX;
	volatile int8_t x540 = INT8_MAX;
	int32_t t130 = -99488;

    t130 = (x537<=(x538!=(x539%x540)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x541 = -1;
	static int8_t x544 = -1;
	int32_t t131 = 266317224;

    t131 = (x541<=(x542!=(x543%x544)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x545 = UINT16_MAX;
	uint64_t x547 = 1LLU;
	volatile int8_t x548 = 48;
	static volatile int32_t t132 = 1664;

    t132 = (x545<=(x546!=(x547%x548)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x550 = -14;
	static int16_t x551 = INT16_MAX;
	int64_t x552 = INT64_MIN;
	volatile int32_t t133 = 1283;

    t133 = (x549<=(x550!=(x551%x552)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x553 = -8;
	uint64_t x554 = UINT64_MAX;
	int64_t x555 = -1LL;
	volatile int32_t t134 = -84;

    t134 = (x553<=(x554!=(x555%x556)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x557 = -15216222;
	static uint16_t x558 = UINT16_MAX;
	int32_t x559 = -1;
	volatile uint64_t x560 = 735645241169932731LLU;
	volatile int32_t t135 = 3911492;

    t135 = (x557<=(x558!=(x559%x560)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x561 = INT32_MIN;
	static int8_t x564 = INT8_MAX;
	volatile int32_t t136 = 2960;

    t136 = (x561<=(x562!=(x563%x564)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = UINT8_MAX;
	int32_t x568 = INT32_MIN;
	volatile int32_t t137 = 0;

    t137 = (x565<=(x566!=(x567%x568)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x569 = UINT8_MAX;
	volatile uint32_t x570 = 93713563U;
	int8_t x571 = INT8_MIN;
	uint64_t x572 = 383217898LLU;
	int32_t t138 = -310028;

    t138 = (x569<=(x570!=(x571%x572)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x573 = -296LL;
	static int64_t x574 = INT64_MAX;
	volatile uint32_t x575 = 11535U;

    t139 = (x573<=(x574!=(x575%x576)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x577 = INT16_MIN;
	static int8_t x578 = INT8_MIN;
	int32_t x579 = 2845058;
	uint64_t x580 = 1503692401834324LLU;
	volatile int32_t t140 = -801068;

    t140 = (x577<=(x578!=(x579%x580)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x581 = 3097293028LL;
	int64_t x584 = INT64_MAX;
	int32_t t141 = 39;

    t141 = (x581<=(x582!=(x583%x584)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x585 = INT16_MIN;
	uint8_t x586 = 6U;
	int16_t x587 = 7;
	int32_t x588 = -1;
	static int32_t t142 = 13208;

    t142 = (x585<=(x586!=(x587%x588)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x589 = UINT8_MAX;
	int16_t x591 = INT16_MIN;
	volatile uint64_t x592 = UINT64_MAX;
	int32_t t143 = -1;

    t143 = (x589<=(x590!=(x591%x592)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x593 = INT16_MIN;
	int64_t x594 = INT64_MIN;
	int32_t x595 = INT32_MIN;
	volatile uint64_t x596 = 64LLU;
	volatile int32_t t144 = -3100343;

    t144 = (x593<=(x594!=(x595%x596)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x597 = 14027973U;
	uint16_t x598 = 6U;
	static volatile uint32_t x599 = 76458U;
	static int8_t x600 = 23;

    t145 = (x597<=(x598!=(x599%x600)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x601 = -2LL;
	volatile int16_t x602 = INT16_MIN;
	uint8_t x603 = 73U;
	volatile int32_t x604 = INT32_MAX;

    t146 = (x601<=(x602!=(x603%x604)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x605 = 49U;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = UINT16_MAX;
	volatile int64_t x608 = -1093313LL;
	volatile int32_t t147 = -25261;

    t147 = (x605<=(x606!=(x607%x608)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = -59912124110276518LL;
	int32_t x611 = INT32_MIN;
	static uint8_t x612 = UINT8_MAX;
	int32_t t148 = -157468273;

    t148 = (x609<=(x610!=(x611%x612)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x620 = 4LL;
	volatile int32_t t149 = -137907;

    t149 = (x617<=(x618!=(x619%x620)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x622 = 3515827572525855LL;
	int8_t x623 = -1;
	volatile int8_t x624 = -1;
	int32_t t150 = -832641;

    t150 = (x621<=(x622!=(x623%x624)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x625 = 9;
	int32_t x626 = INT32_MIN;
	int16_t x628 = INT16_MIN;

    t151 = (x625<=(x626!=(x627%x628)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x629 = INT16_MIN;
	static int16_t x632 = -1;
	int32_t t152 = -15451652;

    t152 = (x629<=(x630!=(x631%x632)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x638 = 5;
	uint32_t x639 = UINT32_MAX;
	uint32_t x640 = UINT32_MAX;
	static int32_t t153 = 9;

    t153 = (x637<=(x638!=(x639%x640)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x641 = INT8_MIN;
	uint16_t x642 = 5U;
	int16_t x643 = INT16_MAX;
	int8_t x644 = INT8_MIN;
	static int32_t t154 = -1045308922;

    t154 = (x641<=(x642!=(x643%x644)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x645 = UINT64_MAX;
	volatile int32_t x646 = 10;
	int32_t t155 = -4444356;

    t155 = (x645<=(x646!=(x647%x648)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x649 = 8U;
	volatile int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MIN;
	int8_t x652 = INT8_MIN;

    t156 = (x649<=(x650!=(x651%x652)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x653 = INT32_MAX;
	int64_t x654 = 59LL;
	static int16_t x655 = INT16_MIN;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t157 = 4694;

    t157 = (x653<=(x654!=(x655%x656)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x657 = INT32_MAX;
	uint64_t x659 = 829546062LLU;
	uint8_t x660 = 9U;
	volatile int32_t t158 = 4970;

    t158 = (x657<=(x658!=(x659%x660)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x661 = INT64_MIN;
	uint32_t x662 = UINT32_MAX;
	uint32_t x663 = 114441301U;
	uint8_t x664 = UINT8_MAX;
	int32_t t159 = 12627405;

    t159 = (x661<=(x662!=(x663%x664)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x665 = 2U;
	volatile int16_t x667 = -1;
	int16_t x668 = 268;
	static volatile int32_t t160 = -388529;

    t160 = (x665<=(x666!=(x667%x668)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x669 = INT64_MIN;
	volatile uint64_t x670 = 8107922975984514039LLU;
	volatile int8_t x672 = INT8_MAX;
	int32_t t161 = -411958;

    t161 = (x669<=(x670!=(x671%x672)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x674 = INT32_MAX;
	static int8_t x675 = -3;
	int16_t x676 = 38;
	int32_t t162 = -27894;

    t162 = (x673<=(x674!=(x675%x676)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x677 = 6;
	static volatile uint16_t x678 = UINT16_MAX;
	volatile int8_t x679 = INT8_MIN;
	int64_t x680 = INT64_MAX;

    t163 = (x677<=(x678!=(x679%x680)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = -27596;
	int8_t x684 = INT8_MIN;
	volatile int32_t t164 = 8719;

    t164 = (x681<=(x682!=(x683%x684)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x685 = INT16_MIN;
	volatile int8_t x686 = INT8_MIN;
	volatile int64_t x688 = INT64_MAX;
	volatile int32_t t165 = -873395;

    t165 = (x685<=(x686!=(x687%x688)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x689 = INT16_MIN;
	int64_t x690 = 1694450117057166523LL;
	uint64_t x691 = UINT64_MAX;
	int16_t x692 = 16;
	volatile int32_t t166 = -1974;

    t166 = (x689<=(x690!=(x691%x692)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = INT32_MAX;
	uint64_t x694 = UINT64_MAX;
	volatile uint32_t x695 = UINT32_MAX;
	int64_t x696 = INT64_MAX;
	int32_t t167 = -80;

    t167 = (x693<=(x694!=(x695%x696)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x697 = 831037603U;
	int64_t x698 = INT64_MAX;
	int16_t x699 = INT16_MAX;
	int64_t x700 = INT64_MIN;
	volatile int32_t t168 = -14876;

    t168 = (x697<=(x698!=(x699%x700)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = INT32_MAX;
	uint16_t x702 = UINT16_MAX;
	volatile int32_t x703 = -1;
	static int16_t x704 = INT16_MIN;
	volatile int32_t t169 = 380269;

    t169 = (x701<=(x702!=(x703%x704)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = -1;
	static int64_t x706 = INT64_MIN;
	static int8_t x707 = INT8_MIN;
	int8_t x708 = 3;

    t170 = (x705<=(x706!=(x707%x708)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MAX;
	static int64_t x712 = 4493260011877558754LL;

    t171 = (x709<=(x710!=(x711%x712)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x713 = UINT64_MAX;
	uint8_t x714 = 4U;
	static int64_t x715 = 790742404LL;
	int64_t x716 = INT64_MIN;
	volatile int32_t t172 = 6734;

    t172 = (x713<=(x714!=(x715%x716)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x717 = INT32_MIN;
	int8_t x719 = 14;
	int32_t t173 = 871854;

    t173 = (x717<=(x718!=(x719%x720)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = 32U;
	uint16_t x722 = 3U;
	uint16_t x723 = 86U;
	static int32_t t174 = -371171283;

    t174 = (x721<=(x722!=(x723%x724)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x725 = 8251U;
	int32_t x726 = INT32_MAX;
	static int32_t x727 = INT32_MIN;
	int8_t x728 = -1;
	volatile int32_t t175 = -256;

    t175 = (x725<=(x726!=(x727%x728)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = 411798289571404013LL;
	static uint32_t x730 = UINT32_MAX;
	uint32_t x731 = 9804570U;
	int64_t x732 = INT64_MIN;
	volatile int32_t t176 = 12426167;

    t176 = (x729<=(x730!=(x731%x732)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x734 = -1;
	volatile int16_t x735 = INT16_MIN;
	volatile int32_t t177 = -197298;

    t177 = (x733<=(x734!=(x735%x736)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x737 = -1;
	volatile uint8_t x738 = UINT8_MAX;
	int32_t x739 = -174;
	static volatile uint16_t x740 = UINT16_MAX;
	int32_t t178 = 0;

    t178 = (x737<=(x738!=(x739%x740)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x741 = UINT16_MAX;
	uint8_t x743 = UINT8_MAX;
	int32_t t179 = 1834;

    t179 = (x741<=(x742!=(x743%x744)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	uint16_t x746 = 0U;
	int8_t x747 = -1;
	static int32_t t180 = -427;

    t180 = (x745<=(x746!=(x747%x748)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = -1;
	volatile int16_t x751 = INT16_MIN;
	int8_t x752 = -1;
	int32_t t181 = -5;

    t181 = (x749<=(x750!=(x751%x752)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x753 = INT16_MIN;
	uint32_t x754 = 15831U;
	uint8_t x755 = UINT8_MAX;
	int32_t x756 = INT32_MIN;
	int32_t t182 = -11129528;

    t182 = (x753<=(x754!=(x755%x756)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x757 = INT32_MIN;
	static int16_t x758 = 0;
	volatile int8_t x759 = -43;
	volatile int32_t t183 = 35;

    t183 = (x757<=(x758!=(x759%x760)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x762 = -1;
	uint32_t x764 = 1088983873U;
	int32_t t184 = 170079;

    t184 = (x761<=(x762!=(x763%x764)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x766 = INT64_MIN;
	static int16_t x767 = 4779;
	int64_t x768 = -34142689067208441LL;

    t185 = (x765<=(x766!=(x767%x768)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x769 = 304222U;
	static uint32_t x770 = UINT32_MAX;
	static int32_t x771 = INT32_MAX;

    t186 = (x769<=(x770!=(x771%x772)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x773 = 38618445653152LLU;
	static int8_t x774 = INT8_MIN;
	static int8_t x776 = -3;
	int32_t t187 = -123940;

    t187 = (x773<=(x774!=(x775%x776)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = INT64_MIN;
	static volatile int8_t x779 = INT8_MAX;
	int8_t x780 = INT8_MAX;
	static volatile int32_t t188 = -86507;

    t188 = (x777<=(x778!=(x779%x780)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x782 = 14;
	volatile uint8_t x783 = 3U;
	int16_t x784 = -1833;
	int32_t t189 = -496;

    t189 = (x781<=(x782!=(x783%x784)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = 7126LL;
	uint64_t x786 = UINT64_MAX;
	uint32_t x787 = UINT32_MAX;
	static int64_t x788 = 1549279LL;
	int32_t t190 = 82;

    t190 = (x785<=(x786!=(x787%x788)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -1;
	int32_t x791 = -363;
	int16_t x792 = INT16_MAX;
	int32_t t191 = -97273;

    t191 = (x789<=(x790!=(x791%x792)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x793 = 52U;
	static int16_t x794 = -74;
	uint16_t x795 = 7614U;
	static int16_t x796 = -1;

    t192 = (x793<=(x794!=(x795%x796)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = 11;
	static uint16_t x798 = 126U;
	int16_t x800 = -1;

    t193 = (x797<=(x798!=(x799%x800)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = -3LL;
	uint8_t x803 = 127U;
	uint8_t x804 = 78U;
	int32_t t194 = 4019102;

    t194 = (x801<=(x802!=(x803%x804)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x805 = 23560U;
	uint16_t x806 = 23763U;
	uint32_t x807 = 4419U;

    t195 = (x805<=(x806!=(x807%x808)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x810 = 9178498172LLU;
	uint8_t x811 = UINT8_MAX;
	int16_t x812 = -1;

    t196 = (x809<=(x810!=(x811%x812)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = 0;
	int64_t x814 = 9556LL;
	static uint32_t x815 = 66U;
	uint32_t x816 = UINT32_MAX;
	volatile int32_t t197 = 4393;

    t197 = (x813<=(x814!=(x815%x816)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x818 = 40867577744LL;
	uint64_t x819 = 117134360744LLU;
	static int16_t x820 = INT16_MAX;

    t198 = (x817<=(x818!=(x819%x820)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x821 = 127U;
	uint8_t x822 = 83U;
	int8_t x824 = INT8_MAX;
	int32_t t199 = 1;

    t199 = (x821<=(x822!=(x823%x824)));

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

