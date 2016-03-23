
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

static uint64_t x1 = 3637077669LLU;
uint64_t x3 = UINT64_MAX;
int32_t x4 = INT32_MIN;
int16_t x7 = INT16_MIN;
int64_t x8 = INT64_MAX;
int32_t t2 = -2067;
volatile uint8_t x15 = UINT8_MAX;
int16_t x16 = INT16_MAX;
volatile int32_t x19 = -1;
int32_t x24 = INT32_MIN;
int32_t x33 = -769012;
uint32_t x34 = UINT32_MAX;
volatile int32_t t9 = -511238429;
volatile int32_t t11 = -160584;
uint64_t x64 = 56293514824413LLU;
uint64_t x70 = 84LLU;
int8_t x80 = INT8_MIN;
int64_t x83 = 730989LL;
volatile int32_t x90 = INT32_MIN;
static int8_t x109 = 0;
uint64_t x110 = UINT64_MAX;
int32_t x137 = -1;
uint8_t x140 = 2U;
int32_t x142 = INT32_MIN;
volatile uint32_t x143 = 54117234U;
int64_t x144 = 0LL;
static volatile int16_t x148 = -3467;
int64_t x153 = -1LL;
volatile int64_t x163 = -1LL;
int32_t t29 = 84;
static int16_t x166 = -1;
uint64_t x167 = 3LLU;
volatile int64_t x168 = INT64_MIN;
int16_t x187 = 5;
uint8_t x196 = UINT8_MAX;
int32_t x201 = INT32_MIN;
uint8_t x218 = 82U;
int8_t x237 = INT8_MIN;
static int32_t x238 = 453001;
int16_t x240 = -1;
int64_t x242 = INT64_MIN;
uint32_t x247 = UINT32_MAX;
volatile uint16_t x262 = 83U;
int32_t t45 = -246397;
static int64_t x277 = INT64_MAX;
uint32_t x279 = 14120U;
static uint16_t x287 = UINT16_MAX;
volatile int32_t x288 = INT32_MAX;
static volatile int32_t t48 = -58447;
int32_t x297 = INT32_MIN;
uint16_t x300 = 2U;
volatile uint64_t x303 = 10389979473735475LLU;
int32_t t50 = 90935181;
uint16_t x312 = 33U;
int64_t x326 = 7532433LL;
uint32_t x340 = UINT32_MAX;
uint16_t x344 = 58U;
static volatile int32_t t58 = -112125730;
uint16_t x345 = 5826U;
uint16_t x350 = UINT16_MAX;
int16_t x352 = -191;
static volatile uint8_t x353 = 32U;
uint64_t x356 = 208878923LLU;
int8_t x377 = 22;
int32_t x378 = -1;
uint16_t x381 = 10392U;
uint64_t x390 = 11660648055029037LLU;
uint32_t x392 = UINT32_MAX;
static volatile uint16_t x395 = UINT16_MAX;
int32_t t67 = 28810286;
uint32_t x398 = 57U;
uint64_t x402 = 10751485841LLU;
static int16_t x414 = INT16_MIN;
int64_t x437 = 11658263302414821LL;
int32_t x440 = 320298;
int64_t x443 = -8978LL;
int32_t x451 = 0;
static int32_t t76 = 2821147;
static int8_t x459 = 61;
int16_t x471 = INT16_MAX;
uint32_t x473 = 570U;
static volatile uint8_t x476 = 46U;
int8_t x477 = INT8_MIN;
int16_t x486 = -1;
uint8_t x491 = 29U;
static uint32_t x497 = 50340315U;
volatile int32_t t86 = -562299;
uint32_t x508 = 108200857U;
volatile int32_t t88 = -11204756;
int32_t t89 = -3;
volatile int8_t x519 = -1;
static volatile int32_t t90 = 5079;
int32_t x521 = INT32_MAX;
static int32_t t91 = -1340256;
int32_t x535 = 4236;
volatile int32_t t93 = 25797062;
uint16_t x538 = UINT16_MAX;
static uint64_t x543 = 2052576916LLU;
volatile int32_t t95 = 45462;
int64_t x554 = -1LL;
int32_t x560 = INT32_MIN;
int32_t t100 = 13;
int32_t x583 = 329;
int32_t x615 = -1;
int64_t x618 = 7372343447664LL;
int64_t x623 = INT64_MIN;
static uint64_t x630 = 393358LLU;
static int8_t x631 = -1;
volatile int32_t t111 = -1;
int32_t x640 = INT32_MIN;
int16_t x647 = INT16_MAX;
static volatile int16_t x653 = -15;
int32_t t117 = 44576901;
volatile int16_t x657 = INT16_MAX;
int16_t x658 = INT16_MIN;
uint32_t x663 = 2127364626U;
static uint8_t x677 = UINT8_MAX;
int16_t x680 = -1;
volatile int32_t t123 = -5368156;
uint64_t x684 = 1803650389261429LLU;
volatile int32_t x685 = 62402;
int8_t x686 = INT8_MAX;
uint64_t x698 = 1202871867478LLU;
volatile int32_t t127 = -286;
int32_t x720 = -1;
int32_t x723 = -2064;
static int8_t x724 = 1;
volatile int32_t t131 = -4;
int32_t x737 = INT32_MAX;
static uint32_t x749 = 250005348U;
static int16_t x752 = -1;
static int32_t t136 = -5701373;
volatile int16_t x764 = -1;
volatile int32_t x778 = INT32_MIN;
int16_t x779 = INT16_MIN;
uint64_t x780 = 2834335902632LLU;
int16_t x784 = INT16_MIN;
int8_t x786 = INT8_MIN;
volatile int8_t x790 = -1;
volatile int8_t x794 = 38;
uint64_t x797 = UINT64_MAX;
int32_t x807 = INT32_MIN;
int8_t x809 = 1;
volatile uint64_t x811 = 204631LLU;
uint32_t x815 = UINT32_MAX;
int64_t x819 = 965658253842LL;
int64_t x826 = -1LL;
uint16_t x830 = 13211U;
int16_t x831 = 5;
volatile int32_t t150 = -406828;
int64_t x833 = INT64_MIN;
int16_t x836 = -83;
uint32_t x839 = 325U;
uint32_t x840 = 3255435U;
static uint8_t x854 = 1U;
int8_t x862 = -45;
uint32_t x864 = 4U;
volatile uint8_t x871 = 47U;
static uint64_t x880 = UINT64_MAX;
volatile int32_t x887 = INT32_MIN;
int64_t x894 = INT64_MAX;
uint8_t x904 = 117U;
int16_t x917 = -1;
volatile int32_t t166 = 42084;
static int16_t x924 = 3;
int64_t x930 = 15LL;
volatile int16_t x944 = INT16_MAX;
int64_t x946 = -80042261030713714LL;
static int8_t x948 = 1;
static int32_t t172 = -77;
int16_t x959 = INT16_MAX;
int64_t x965 = -618LL;
int32_t x969 = INT32_MIN;
int8_t x985 = INT8_MAX;
static int32_t x986 = 38418;
static volatile int32_t x993 = INT32_MIN;
volatile int64_t x995 = INT64_MAX;
static int64_t x996 = INT64_MAX;
volatile uint64_t x997 = UINT64_MAX;
uint8_t x999 = UINT8_MAX;
int32_t t179 = 296;
uint16_t x1004 = UINT16_MAX;
volatile uint64_t x1007 = 265602094628423487LLU;
uint64_t x1013 = 195233055876744LLU;
volatile uint64_t x1029 = 718782774385829LLU;
static volatile int32_t t184 = -97348;
int64_t x1033 = 2694LL;
static int8_t x1036 = INT8_MIN;
int16_t x1046 = 1;
uint64_t x1052 = UINT64_MAX;
int8_t x1055 = 0;
int8_t x1056 = -9;
int32_t t188 = -74;
volatile int32_t x1057 = INT32_MIN;
uint64_t x1059 = 127423686232345126LLU;
static volatile uint8_t x1060 = UINT8_MAX;
volatile int32_t t189 = -4552;
volatile int32_t t190 = 1;
uint32_t x1077 = 1996792U;
volatile int8_t x1078 = INT8_MAX;
int64_t x1083 = -1LL;
volatile int32_t x1089 = -1;
static int8_t x1092 = 1;
uint16_t x1095 = 2U;
volatile int32_t t198 = -1671676;
volatile int16_t x1119 = INT16_MIN;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	int32_t t0 = -39;

    t0 = (x1<=(x2*(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int64_t x6 = -1LL;
	volatile int32_t t1 = -18303;

    t1 = (x5<=(x6*(x7^x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 6552692932812959LL;
	uint16_t x10 = 449U;
	static int16_t x11 = -1;
	int16_t x12 = INT16_MAX;

    t2 = (x9<=(x10*(x11^x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = 0;
	int32_t x14 = -1;
	static int32_t t3 = -6662;

    t3 = (x13<=(x14*(x15^x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -520920665;

    t4 = (x17<=(x18*(x19^x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 0;
	volatile uint64_t x22 = 11640731748LLU;
	volatile int32_t x23 = -8027;
	static int32_t t5 = -3;

    t5 = (x21<=(x22*(x23^x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int16_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	int16_t x28 = -1;
	volatile int32_t t6 = 1;

    t6 = (x25<=(x26*(x27^x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint64_t x30 = 1LLU;
	int8_t x31 = -1;
	int64_t x32 = INT64_MAX;
	static volatile int32_t t7 = -20051;

    t7 = (x29<=(x30*(x31^x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = 137;

    t8 = (x33<=(x34*(x35^x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 1973U;
	static int32_t x38 = -18;
	uint32_t x39 = 177280U;
	int32_t x40 = INT32_MAX;

    t9 = (x37<=(x38*(x39^x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 5U;
	uint8_t x46 = 54U;
	uint64_t x47 = 3305509622819LLU;
	static int64_t x48 = INT64_MIN;
	volatile int32_t t10 = -17;

    t10 = (x45<=(x46*(x47^x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -1;
	int8_t x50 = -1;
	volatile int32_t x51 = 8891636;
	int16_t x52 = -1;

    t11 = (x49<=(x50*(x51^x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = 32;
	static volatile int64_t x62 = -4881279474390580LL;
	int64_t x63 = 13LL;
	volatile int32_t t12 = -67134;

    t12 = (x61<=(x62*(x63^x64)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = -1;
	int32_t t13 = 833643412;

    t13 = (x65<=(x66*(x67^x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x69 = 846U;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	volatile int32_t t14 = 132032124;

    t14 = (x69<=(x70*(x71^x72)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x77 = 583751100U;
	volatile uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = 2LL;
	int32_t t15 = -799156331;

    t15 = (x77<=(x78*(x79^x80)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t16 = 0;

    t16 = (x81<=(x82*(x83^x84)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x89 = INT8_MAX;
	volatile uint32_t x91 = UINT32_MAX;
	int64_t x92 = -31323LL;
	int32_t t17 = 3974;

    t17 = (x89<=(x90*(x91^x92)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x93 = -1;
	volatile uint8_t x94 = UINT8_MAX;
	int8_t x95 = 1;
	int8_t x96 = INT8_MAX;
	volatile int32_t t18 = -7564;

    t18 = (x93<=(x94*(x95^x96)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x111 = 22U;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t19 = -23;

    t19 = (x109<=(x110*(x111^x112)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	int32_t t20 = -4243481;

    t20 = (x117<=(x118*(x119^x120)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x121 = -7;
	volatile int32_t x122 = 141;
	static volatile int32_t x123 = INT32_MIN;
	int64_t x124 = -1LL;
	volatile int32_t t21 = 10;

    t21 = (x121<=(x122*(x123^x124)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x125 = 15211;
	uint32_t x126 = 14553782U;
	int8_t x127 = INT8_MAX;
	uint64_t x128 = 6518571LLU;
	int32_t t22 = 70;

    t22 = (x125<=(x126*(x127^x128)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x129 = INT8_MAX;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = 1;
	static int16_t x132 = -2118;
	static int32_t t23 = 1;

    t23 = (x129<=(x130*(x131^x132)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x138 = UINT64_MAX;
	static uint8_t x139 = UINT8_MAX;
	int32_t t24 = 33059;

    t24 = (x137<=(x138*(x139^x140)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x141 = -72618823108288848LL;
	volatile int32_t t25 = -40953;

    t25 = (x141<=(x142*(x143^x144)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = -3;
	int32_t x146 = -1;
	static uint16_t x147 = 185U;
	volatile int32_t t26 = -634;

    t26 = (x145<=(x146*(x147^x148)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x154 = INT32_MIN;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t27 = -101;

    t27 = (x153<=(x154*(x155^x156)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x157 = -1LL;
	uint16_t x158 = UINT16_MAX;
	static int8_t x159 = INT8_MIN;
	volatile uint64_t x160 = 461223167095055LLU;
	static int32_t t28 = 175304;

    t28 = (x157<=(x158*(x159^x160)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = -1;
	int8_t x164 = INT8_MIN;

    t29 = (x161<=(x162*(x163^x164)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x165 = -1;
	int32_t t30 = -131922627;

    t30 = (x165<=(x166*(x167^x168)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x169 = -7;
	volatile int64_t x170 = 23670LL;
	volatile int8_t x171 = INT8_MAX;
	int32_t x172 = INT32_MAX;
	volatile int32_t t31 = -53239900;

    t31 = (x169<=(x170*(x171^x172)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x173 = -1;
	int32_t x174 = -41299009;
	static uint16_t x175 = 232U;
	uint64_t x176 = 61857156074665LLU;
	static volatile int32_t t32 = -65302382;

    t32 = (x173<=(x174*(x175^x176)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	static uint16_t x188 = 53U;
	static volatile int32_t t33 = 280;

    t33 = (x185<=(x186*(x187^x188)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x193 = INT64_MIN;
	static uint32_t x194 = 204U;
	uint8_t x195 = 0U;
	volatile int32_t t34 = 16;

    t34 = (x193<=(x194*(x195^x196)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x197 = 3U;
	int8_t x198 = INT8_MAX;
	int16_t x199 = -1;
	int32_t x200 = 12010896;
	int32_t t35 = 13662946;

    t35 = (x197<=(x198*(x199^x200)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MAX;
	int64_t x204 = -1LL;
	volatile int32_t t36 = -340;

    t36 = (x201<=(x202*(x203^x204)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x205 = 1U;
	int8_t x206 = -1;
	uint8_t x207 = 15U;
	uint32_t x208 = 174680829U;
	volatile int32_t t37 = -2039948;

    t37 = (x205<=(x206*(x207^x208)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x217 = 6806U;
	volatile int8_t x219 = INT8_MIN;
	volatile uint32_t x220 = UINT32_MAX;
	static int32_t t38 = 156615839;

    t38 = (x217<=(x218*(x219^x220)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x229 = 43U;
	int8_t x230 = INT8_MIN;
	static uint32_t x231 = 1661273U;
	uint16_t x232 = 1689U;
	volatile int32_t t39 = 82;

    t39 = (x229<=(x230*(x231^x232)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x239 = 6278LL;
	volatile int32_t t40 = 2;

    t40 = (x237<=(x238*(x239^x240)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = INT16_MIN;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t41 = 110;

    t41 = (x241<=(x242*(x243^x244)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 23U;
	uint8_t x248 = 107U;
	int32_t t42 = -169990708;

    t42 = (x245<=(x246*(x247^x248)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x261 = INT64_MAX;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -14;
	volatile int32_t t43 = 13;

    t43 = (x261<=(x262*(x263^x264)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int64_t x267 = INT64_MAX;
	static uint16_t x268 = UINT16_MAX;
	int32_t t44 = -36;

    t44 = (x265<=(x266*(x267^x268)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x269 = -1;
	volatile int16_t x270 = -1;
	static volatile uint8_t x271 = UINT8_MAX;
	static volatile uint16_t x272 = 11928U;

    t45 = (x269<=(x270*(x271^x272)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x278 = 171202U;
	volatile int64_t x280 = 146925LL;
	volatile int32_t t46 = 238075363;

    t46 = (x277<=(x278*(x279^x280)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x285 = INT64_MAX;
	int64_t x286 = -1LL;
	int32_t t47 = 3;

    t47 = (x285<=(x286*(x287^x288)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x289 = INT64_MAX;
	int64_t x290 = 596299270046LL;
	static volatile int64_t x291 = 7LL;
	uint16_t x292 = 58U;

    t48 = (x289<=(x290*(x291^x292)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	volatile int32_t t49 = -142;

    t49 = (x297<=(x298*(x299^x300)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x301 = -6980;
	int8_t x302 = -1;
	static int16_t x304 = INT16_MIN;

    t50 = (x301<=(x302*(x303^x304)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x309 = -1LL;
	int64_t x310 = -78464635260922408LL;
	static int8_t x311 = -1;
	int32_t t51 = 2;

    t51 = (x309<=(x310*(x311^x312)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x317 = -1;
	int8_t x318 = INT8_MIN;
	static uint64_t x319 = 470LLU;
	static int64_t x320 = 46LL;
	volatile int32_t t52 = -2681339;

    t52 = (x317<=(x318*(x319^x320)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x321 = INT32_MIN;
	int8_t x322 = 43;
	static uint32_t x323 = 94U;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t53 = 1665;

    t53 = (x321<=(x322*(x323^x324)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x325 = 9973U;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t54 = -66545;

    t54 = (x325<=(x326*(x327^x328)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x329 = 0;
	uint64_t x330 = 835976178LLU;
	int16_t x331 = INT16_MIN;
	static uint16_t x332 = UINT16_MAX;
	volatile int32_t t55 = 81928212;

    t55 = (x329<=(x330*(x331^x332)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x333 = INT8_MIN;
	uint32_t x334 = 118934U;
	int16_t x335 = 2;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t56 = 0;

    t56 = (x333<=(x334*(x335^x336)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int8_t x339 = INT8_MAX;
	int32_t t57 = 25983036;

    t57 = (x337<=(x338*(x339^x340)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x341 = INT32_MIN;
	volatile uint8_t x342 = 1U;
	static int16_t x343 = INT16_MIN;

    t58 = (x341<=(x342*(x343^x344)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x346 = INT64_MAX;
	int16_t x347 = -1;
	volatile int8_t x348 = -1;
	static int32_t t59 = -2888;

    t59 = (x345<=(x346*(x347^x348)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x349 = INT8_MIN;
	int16_t x351 = -1557;
	static int32_t t60 = 4140;

    t60 = (x349<=(x350*(x351^x352)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x354 = 0U;
	int64_t x355 = -485405LL;
	int32_t t61 = -1495;

    t61 = (x353<=(x354*(x355^x356)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x365 = 231;
	uint16_t x366 = 1068U;
	uint8_t x367 = 31U;
	int16_t x368 = INT16_MIN;
	volatile int32_t t62 = 116307416;

    t62 = (x365<=(x366*(x367^x368)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x379 = 2U;
	static int16_t x380 = -106;
	int32_t t63 = -947309;

    t63 = (x377<=(x378*(x379^x380)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x382 = INT8_MIN;
	int16_t x383 = -617;
	int8_t x384 = -1;
	int32_t t64 = -35364;

    t64 = (x381<=(x382*(x383^x384)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x385 = 2U;
	int32_t x386 = -1;
	static int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile int32_t t65 = -36500;

    t65 = (x385<=(x386*(x387^x388)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x389 = 698U;
	uint32_t x391 = 2474U;
	volatile int32_t t66 = 200186;

    t66 = (x389<=(x390*(x391^x392)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	static int16_t x396 = INT16_MIN;

    t67 = (x393<=(x394*(x395^x396)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x397 = INT16_MAX;
	volatile int16_t x399 = -1352;
	volatile int64_t x400 = 1LL;
	static int32_t t68 = -432;

    t68 = (x397<=(x398*(x399^x400)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x401 = 51;
	static uint64_t x403 = 3056093700797LLU;
	volatile int64_t x404 = INT64_MIN;
	static volatile int32_t t69 = -978086203;

    t69 = (x401<=(x402*(x403^x404)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x405 = UINT32_MAX;
	uint32_t x406 = 7U;
	static int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	int32_t t70 = 5272;

    t70 = (x405<=(x406*(x407^x408)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x413 = 2U;
	int64_t x415 = -1LL;
	int16_t x416 = INT16_MIN;
	volatile int32_t t71 = 4427972;

    t71 = (x413<=(x414*(x415^x416)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x417 = 137LLU;
	int8_t x418 = -6;
	int16_t x419 = -2;
	static int16_t x420 = INT16_MAX;
	int32_t t72 = -5214;

    t72 = (x417<=(x418*(x419^x420)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x421 = 29U;
	uint8_t x422 = 0U;
	static int32_t x423 = INT32_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t73 = -323943;

    t73 = (x421<=(x422*(x423^x424)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x438 = -1798456033LL;
	static uint64_t x439 = 28556573317LLU;
	int32_t t74 = 988599;

    t74 = (x437<=(x438*(x439^x440)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x441 = 25395591547LLU;
	static int32_t x442 = -15;
	volatile int64_t x444 = -752331050632LL;
	volatile int32_t t75 = -72901105;

    t75 = (x441<=(x442*(x443^x444)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x449 = INT64_MAX;
	int8_t x450 = -29;
	int16_t x452 = -292;

    t76 = (x449<=(x450*(x451^x452)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x453 = -1LL;
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = 0;
	static int16_t x456 = -1;
	int32_t t77 = 3264134;

    t77 = (x453<=(x454*(x455^x456)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x457 = 1U;
	volatile int16_t x458 = INT16_MAX;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t78 = 306;

    t78 = (x457<=(x458*(x459^x460)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	static uint32_t x470 = UINT32_MAX;
	int8_t x472 = 10;
	int32_t t79 = 4836;

    t79 = (x469<=(x470*(x471^x472)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x474 = INT8_MIN;
	volatile uint32_t x475 = 155523U;
	volatile int32_t t80 = 46;

    t80 = (x473<=(x474*(x475^x476)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x478 = 79339LL;
	int32_t x479 = -858151971;
	uint32_t x480 = 386363633U;
	int32_t t81 = 1249;

    t81 = (x477<=(x478*(x479^x480)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x481 = 2860044281709758169LLU;
	static volatile int64_t x482 = -743155LL;
	volatile uint16_t x483 = 1U;
	static int64_t x484 = -1LL;
	volatile int32_t t82 = 10865187;

    t82 = (x481<=(x482*(x483^x484)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x485 = 3807571471692369892LLU;
	int16_t x487 = -1;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t83 = -432380;

    t83 = (x485<=(x486*(x487^x488)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x489 = 1LLU;
	int64_t x490 = -1673156263427689LL;
	static volatile int8_t x492 = INT8_MIN;
	volatile int32_t t84 = -27405484;

    t84 = (x489<=(x490*(x491^x492)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x493 = 7566LLU;
	int64_t x494 = -1LL;
	static int64_t x495 = -18635LL;
	int16_t x496 = 53;
	static int32_t t85 = 885;

    t85 = (x493<=(x494*(x495^x496)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x498 = INT32_MAX;
	volatile uint8_t x499 = 27U;
	uint64_t x500 = UINT64_MAX;

    t86 = (x497<=(x498*(x499^x500)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x505 = INT64_MIN;
	int64_t x506 = 47LL;
	int64_t x507 = -1LL;
	int32_t t87 = 1549111;

    t87 = (x505<=(x506*(x507^x508)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x509 = 0U;
	int64_t x510 = -787165745LL;
	static int32_t x511 = 6442;
	int8_t x512 = 2;

    t88 = (x509<=(x510*(x511^x512)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x513 = -1;
	static uint8_t x514 = 5U;
	uint8_t x515 = UINT8_MAX;
	static volatile int8_t x516 = INT8_MAX;

    t89 = (x513<=(x514*(x515^x516)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x517 = -1LL;
	int8_t x518 = INT8_MIN;
	static volatile int8_t x520 = -1;

    t90 = (x517<=(x518*(x519^x520)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x522 = INT16_MIN;
	int16_t x523 = -1;
	uint64_t x524 = UINT64_MAX;

    t91 = (x521<=(x522*(x523^x524)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x525 = INT8_MAX;
	volatile uint16_t x526 = 2U;
	volatile uint64_t x527 = 63241083039LLU;
	int64_t x528 = 976LL;
	static volatile int32_t t92 = -900064;

    t92 = (x525<=(x526*(x527^x528)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x533 = UINT8_MAX;
	uint8_t x534 = 9U;
	volatile uint64_t x536 = 9690400363903302LLU;

    t93 = (x533<=(x534*(x535^x536)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x537 = INT16_MIN;
	int8_t x539 = -1;
	volatile int16_t x540 = -1;
	volatile int32_t t94 = 874576;

    t94 = (x537<=(x538*(x539^x540)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x541 = 323;
	int64_t x542 = INT64_MIN;
	uint8_t x544 = 1U;

    t95 = (x541<=(x542*(x543^x544)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x549 = INT64_MIN;
	int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MIN;
	uint64_t x552 = 10416403LLU;
	int32_t t96 = -410478;

    t96 = (x549<=(x550*(x551^x552)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x553 = INT16_MAX;
	int8_t x555 = 5;
	volatile int8_t x556 = INT8_MIN;
	static int32_t t97 = 1;

    t97 = (x553<=(x554*(x555^x556)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x557 = -1;
	volatile uint8_t x558 = UINT8_MAX;
	static int64_t x559 = -1LL;
	volatile int32_t t98 = 404858283;

    t98 = (x557<=(x558*(x559^x560)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x561 = 913854U;
	static uint8_t x562 = 2U;
	volatile int8_t x563 = INT8_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t99 = -31378961;

    t99 = (x561<=(x562*(x563^x564)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x569 = 24U;
	volatile uint64_t x570 = 4840676700054956LLU;
	int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;

    t100 = (x569<=(x570*(x571^x572)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x577 = UINT64_MAX;
	volatile uint32_t x578 = 1783902744U;
	volatile int64_t x579 = -4LL;
	int8_t x580 = INT8_MAX;
	int32_t t101 = 3;

    t101 = (x577<=(x578*(x579^x580)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x581 = -248LL;
	volatile int16_t x582 = INT16_MIN;
	uint16_t x584 = UINT16_MAX;
	int32_t t102 = 309708236;

    t102 = (x581<=(x582*(x583^x584)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x589 = 33884780LLU;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MAX;
	uint16_t x592 = UINT16_MAX;
	int32_t t103 = 149;

    t103 = (x589<=(x590*(x591^x592)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x597 = -1;
	volatile int16_t x598 = 0;
	static int32_t x599 = INT32_MIN;
	int32_t x600 = -63641502;
	int32_t t104 = -52;

    t104 = (x597<=(x598*(x599^x600)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint16_t x602 = 4939U;
	uint32_t x603 = 26U;
	volatile int32_t x604 = -1;
	int32_t t105 = 1;

    t105 = (x601<=(x602*(x603^x604)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x605 = 1755;
	int8_t x606 = 31;
	int32_t x607 = 0;
	int8_t x608 = INT8_MIN;
	volatile int32_t t106 = 5225;

    t106 = (x605<=(x606*(x607^x608)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x613 = UINT32_MAX;
	int16_t x614 = -8;
	int8_t x616 = 0;
	volatile int32_t t107 = 508;

    t107 = (x613<=(x614*(x615^x616)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x617 = UINT8_MAX;
	static int16_t x619 = INT16_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t108 = 8;

    t108 = (x617<=(x618*(x619^x620)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x621 = UINT16_MAX;
	int64_t x622 = -1LL;
	int8_t x624 = INT8_MAX;
	int32_t t109 = -6623;

    t109 = (x621<=(x622*(x623^x624)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	uint64_t x626 = 13921711511379LLU;
	static int16_t x627 = -1;
	volatile int32_t x628 = -1;
	volatile int32_t t110 = -29011262;

    t110 = (x625<=(x626*(x627^x628)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x629 = -1;
	static volatile uint8_t x632 = 94U;

    t111 = (x629<=(x630*(x631^x632)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x633 = 24U;
	int32_t x634 = -1;
	int32_t x635 = -11;
	uint32_t x636 = 20193938U;
	volatile int32_t t112 = 214279;

    t112 = (x633<=(x634*(x635^x636)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x637 = -1;
	static uint32_t x638 = 31U;
	int16_t x639 = INT16_MIN;
	volatile int32_t t113 = 112951;

    t113 = (x637<=(x638*(x639^x640)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x641 = -4;
	static int16_t x642 = 1;
	volatile int32_t x643 = -1;
	int64_t x644 = INT64_MAX;
	volatile int32_t t114 = -358352907;

    t114 = (x641<=(x642*(x643^x644)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x645 = 2U;
	int32_t x646 = INT32_MIN;
	uint32_t x648 = 659U;
	static int32_t t115 = 18408;

    t115 = (x645<=(x646*(x647^x648)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x649 = INT64_MIN;
	int64_t x650 = 0LL;
	uint8_t x651 = 1U;
	int64_t x652 = INT64_MIN;
	int32_t t116 = -1;

    t116 = (x649<=(x650*(x651^x652)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x654 = -1;
	int16_t x655 = INT16_MIN;
	int16_t x656 = -2992;

    t117 = (x653<=(x654*(x655^x656)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x659 = 83114LLU;
	static uint16_t x660 = 1532U;
	int32_t t118 = -895673;

    t118 = (x657<=(x658*(x659^x660)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x661 = INT32_MIN;
	int8_t x662 = -1;
	int32_t x664 = 1;
	int32_t t119 = -527623378;

    t119 = (x661<=(x662*(x663^x664)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MAX;
	static int32_t x667 = INT32_MAX;
	int32_t x668 = INT32_MIN;
	volatile int32_t t120 = 436651230;

    t120 = (x665<=(x666*(x667^x668)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x670 = INT8_MIN;
	uint8_t x671 = UINT8_MAX;
	int16_t x672 = INT16_MIN;
	volatile int32_t t121 = -23;

    t121 = (x669<=(x670*(x671^x672)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x673 = INT16_MIN;
	volatile int16_t x674 = -478;
	static int16_t x675 = -1;
	static int8_t x676 = INT8_MIN;
	volatile int32_t t122 = -215301729;

    t122 = (x673<=(x674*(x675^x676)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x678 = 378743329U;
	int8_t x679 = INT8_MIN;

    t123 = (x677<=(x678*(x679^x680)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x681 = -1;
	uint32_t x682 = 42899U;
	int8_t x683 = -13;
	volatile int32_t t124 = 79315172;

    t124 = (x681<=(x682*(x683^x684)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x687 = INT16_MIN;
	volatile uint64_t x688 = 9596286607LLU;
	static int32_t t125 = 986614723;

    t125 = (x685<=(x686*(x687^x688)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x697 = 3535659U;
	uint16_t x699 = 19U;
	int8_t x700 = INT8_MAX;
	int32_t t126 = 26;

    t126 = (x697<=(x698*(x699^x700)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x701 = 8930;
	int8_t x702 = -1;
	int32_t x703 = INT32_MAX;
	static int8_t x704 = INT8_MAX;

    t127 = (x701<=(x702*(x703^x704)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x705 = INT16_MAX;
	static uint16_t x706 = 594U;
	int8_t x707 = -2;
	uint64_t x708 = 15196916822975LLU;
	static int32_t t128 = -55;

    t128 = (x705<=(x706*(x707^x708)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x709 = -15;
	uint32_t x710 = 965911808U;
	int16_t x711 = INT16_MAX;
	volatile int8_t x712 = INT8_MIN;
	static volatile int32_t t129 = -12;

    t129 = (x709<=(x710*(x711^x712)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x717 = 1U;
	static volatile uint8_t x718 = UINT8_MAX;
	uint32_t x719 = UINT32_MAX;
	static int32_t t130 = -60;

    t130 = (x717<=(x718*(x719^x720)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x721 = -220848088;
	int64_t x722 = -435756LL;

    t131 = (x721<=(x722*(x723^x724)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x729 = 571;
	uint32_t x730 = 588851393U;
	uint64_t x731 = 4977397LLU;
	int32_t x732 = -52807136;
	static int32_t t132 = 0;

    t132 = (x729<=(x730*(x731^x732)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x738 = 3040434029720LL;
	uint64_t x739 = 285075LLU;
	int32_t x740 = 261888723;
	volatile int32_t t133 = -11;

    t133 = (x737<=(x738*(x739^x740)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x745 = INT32_MAX;
	int8_t x746 = -35;
	static volatile int8_t x747 = INT8_MIN;
	int16_t x748 = INT16_MAX;
	volatile int32_t t134 = 254168599;

    t134 = (x745<=(x746*(x747^x748)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x750 = 1;
	int8_t x751 = 5;
	int32_t t135 = -22;

    t135 = (x749<=(x750*(x751^x752)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x757 = -1;
	static int64_t x758 = 717LL;
	volatile int16_t x759 = -2;
	int16_t x760 = INT16_MIN;

    t136 = (x757<=(x758*(x759^x760)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x761 = -1;
	static uint32_t x762 = UINT32_MAX;
	static int32_t x763 = 24116381;
	static int32_t t137 = 156832155;

    t137 = (x761<=(x762*(x763^x764)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x765 = INT16_MIN;
	int16_t x766 = -1;
	int64_t x767 = INT64_MIN;
	int8_t x768 = -1;
	int32_t t138 = 2;

    t138 = (x765<=(x766*(x767^x768)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x777 = -1LL;
	volatile int32_t t139 = -510610;

    t139 = (x777<=(x778*(x779^x780)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x781 = 17332;
	int8_t x782 = -7;
	volatile uint16_t x783 = 33U;
	int32_t t140 = 1;

    t140 = (x781<=(x782*(x783^x784)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x785 = 1LLU;
	static int32_t x787 = 192;
	static uint64_t x788 = 69LLU;
	volatile int32_t t141 = 66987237;

    t141 = (x785<=(x786*(x787^x788)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	int16_t x791 = -1;
	volatile int8_t x792 = INT8_MAX;
	volatile int32_t t142 = -11456;

    t142 = (x789<=(x790*(x791^x792)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x793 = INT16_MIN;
	uint16_t x795 = 1353U;
	uint16_t x796 = UINT16_MAX;
	int32_t t143 = 3046;

    t143 = (x793<=(x794*(x795^x796)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x798 = -1;
	uint64_t x799 = 441386LLU;
	static int32_t x800 = 2;
	static int32_t t144 = -964947799;

    t144 = (x797<=(x798*(x799^x800)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x805 = 4855636;
	static uint8_t x806 = 43U;
	int32_t x808 = INT32_MIN;
	volatile int32_t t145 = -1255844;

    t145 = (x805<=(x806*(x807^x808)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x810 = INT8_MAX;
	int16_t x812 = INT16_MIN;
	int32_t t146 = 15;

    t146 = (x809<=(x810*(x811^x812)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x813 = 63;
	volatile int16_t x814 = -66;
	uint8_t x816 = 40U;
	int32_t t147 = -1303;

    t147 = (x813<=(x814*(x815^x816)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	uint8_t x818 = UINT8_MAX;
	volatile int16_t x820 = INT16_MIN;
	volatile int32_t t148 = 72700136;

    t148 = (x817<=(x818*(x819^x820)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x825 = -1LL;
	uint16_t x827 = 5U;
	int16_t x828 = 918;
	volatile int32_t t149 = 23;

    t149 = (x825<=(x826*(x827^x828)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x829 = 2U;
	int16_t x832 = 21;

    t150 = (x829<=(x830*(x831^x832)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x834 = INT32_MAX;
	static uint32_t x835 = 35U;
	int32_t t151 = -56;

    t151 = (x833<=(x834*(x835^x836)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x837 = -1LL;
	int8_t x838 = INT8_MIN;
	int32_t t152 = 15062157;

    t152 = (x837<=(x838*(x839^x840)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x841 = INT32_MIN;
	uint8_t x842 = UINT8_MAX;
	static int64_t x843 = -1LL;
	int32_t x844 = INT32_MIN;
	volatile int32_t t153 = -742;

    t153 = (x841<=(x842*(x843^x844)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x853 = -7124;
	int16_t x855 = INT16_MIN;
	uint16_t x856 = UINT16_MAX;
	static int32_t t154 = 21;

    t154 = (x853<=(x854*(x855^x856)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x857 = UINT32_MAX;
	uint32_t x858 = 41U;
	static int8_t x859 = INT8_MAX;
	int32_t x860 = INT32_MIN;
	volatile int32_t t155 = 59664;

    t155 = (x857<=(x858*(x859^x860)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x861 = -1;
	int64_t x863 = -805339340282512LL;
	volatile int32_t t156 = -2312;

    t156 = (x861<=(x862*(x863^x864)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x865 = -10;
	int16_t x866 = INT16_MIN;
	volatile uint64_t x867 = UINT64_MAX;
	static int32_t x868 = INT32_MIN;
	int32_t t157 = -24500;

    t157 = (x865<=(x866*(x867^x868)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x869 = 3720;
	uint32_t x870 = 641663U;
	int32_t x872 = INT32_MIN;
	int32_t t158 = 17170562;

    t158 = (x869<=(x870*(x871^x872)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x877 = -27596053;
	uint16_t x878 = 0U;
	volatile uint8_t x879 = 6U;
	int32_t t159 = 2369;

    t159 = (x877<=(x878*(x879^x880)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x881 = INT8_MIN;
	volatile uint64_t x882 = UINT64_MAX;
	int64_t x883 = 80233898992LL;
	uint32_t x884 = 80344U;
	int32_t t160 = -1;

    t160 = (x881<=(x882*(x883^x884)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x885 = UINT8_MAX;
	static uint64_t x886 = UINT64_MAX;
	int32_t x888 = INT32_MAX;
	volatile int32_t t161 = 3550687;

    t161 = (x885<=(x886*(x887^x888)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x889 = INT32_MAX;
	int16_t x890 = -1;
	int32_t x891 = -1;
	static int16_t x892 = INT16_MAX;
	volatile int32_t t162 = 3;

    t162 = (x889<=(x890*(x891^x892)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x893 = 91U;
	volatile int64_t x895 = -953189LL;
	static volatile uint64_t x896 = 4895925820LLU;
	volatile int32_t t163 = 1001207874;

    t163 = (x893<=(x894*(x895^x896)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x897 = UINT16_MAX;
	int32_t x898 = INT32_MIN;
	int16_t x899 = -1;
	static uint64_t x900 = UINT64_MAX;
	volatile int32_t t164 = -880;

    t164 = (x897<=(x898*(x899^x900)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x901 = UINT64_MAX;
	uint16_t x902 = 689U;
	int16_t x903 = -1;
	volatile int32_t t165 = 6515150;

    t165 = (x901<=(x902*(x903^x904)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x918 = INT32_MAX;
	int16_t x919 = INT16_MIN;
	uint32_t x920 = 202U;

    t166 = (x917<=(x918*(x919^x920)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x921 = UINT32_MAX;
	int16_t x922 = INT16_MIN;
	uint16_t x923 = UINT16_MAX;
	int32_t t167 = -189883;

    t167 = (x921<=(x922*(x923^x924)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x925 = -3234;
	int32_t x926 = INT32_MIN;
	uint64_t x927 = 58LLU;
	volatile uint32_t x928 = 267842716U;
	int32_t t168 = -21583;

    t168 = (x925<=(x926*(x927^x928)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x929 = -17;
	uint16_t x931 = UINT16_MAX;
	static int8_t x932 = INT8_MAX;
	volatile int32_t t169 = 623696;

    t169 = (x929<=(x930*(x931^x932)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x941 = 12U;
	int32_t x942 = -8666;
	volatile int32_t x943 = -71574;
	int32_t t170 = -20790;

    t170 = (x941<=(x942*(x943^x944)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x945 = INT16_MAX;
	uint8_t x947 = 7U;
	int32_t t171 = 7452085;

    t171 = (x945<=(x946*(x947^x948)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x949 = -268331;
	uint64_t x950 = UINT64_MAX;
	int8_t x951 = INT8_MAX;
	int16_t x952 = INT16_MIN;

    t172 = (x949<=(x950*(x951^x952)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x957 = 0;
	volatile int16_t x958 = INT16_MIN;
	int16_t x960 = INT16_MAX;
	int32_t t173 = 2;

    t173 = (x957<=(x958*(x959^x960)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x966 = INT32_MAX;
	volatile uint64_t x967 = 1459LLU;
	int16_t x968 = INT16_MIN;
	int32_t t174 = -48655563;

    t174 = (x965<=(x966*(x967^x968)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x970 = INT16_MAX;
	volatile int64_t x971 = -1LL;
	int32_t x972 = -1;
	volatile int32_t t175 = -20728;

    t175 = (x969<=(x970*(x971^x972)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x977 = INT16_MAX;
	volatile int32_t x978 = INT32_MAX;
	int8_t x979 = INT8_MIN;
	static uint64_t x980 = UINT64_MAX;
	static volatile int32_t t176 = -3;

    t176 = (x977<=(x978*(x979^x980)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x987 = INT64_MAX;
	uint64_t x988 = 623787681088LLU;
	int32_t t177 = 3;

    t177 = (x985<=(x986*(x987^x988)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x994 = -1LL;
	int32_t t178 = -1416415;

    t178 = (x993<=(x994*(x995^x996)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x998 = 0U;
	volatile int32_t x1000 = INT32_MIN;

    t179 = (x997<=(x998*(x999^x1000)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1001 = INT8_MIN;
	volatile int64_t x1002 = -1LL;
	uint16_t x1003 = 5U;
	volatile int32_t t180 = 82601571;

    t180 = (x1001<=(x1002*(x1003^x1004)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1005 = INT32_MIN;
	int32_t x1006 = INT32_MIN;
	static volatile int16_t x1008 = INT16_MAX;
	int32_t t181 = -16;

    t181 = (x1005<=(x1006*(x1007^x1008)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1009 = INT32_MAX;
	int32_t x1010 = 80;
	static uint64_t x1011 = UINT64_MAX;
	static int32_t x1012 = INT32_MIN;
	volatile int32_t t182 = 13780783;

    t182 = (x1009<=(x1010*(x1011^x1012)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1014 = 1903;
	static int8_t x1015 = INT8_MIN;
	uint64_t x1016 = 7LLU;
	volatile int32_t t183 = -22;

    t183 = (x1013<=(x1014*(x1015^x1016)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1030 = -6533LL;
	int32_t x1031 = INT32_MIN;
	int16_t x1032 = 25;

    t184 = (x1029<=(x1030*(x1031^x1032)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x1034 = 511479188865664317LLU;
	static int64_t x1035 = -1LL;
	int32_t t185 = -9;

    t185 = (x1033<=(x1034*(x1035^x1036)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1045 = INT64_MAX;
	int64_t x1047 = -239821901830LL;
	uint64_t x1048 = 3835005375527495LLU;
	int32_t t186 = 679;

    t186 = (x1045<=(x1046*(x1047^x1048)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1049 = -7343;
	uint64_t x1050 = 160050906341276LLU;
	static int16_t x1051 = INT16_MIN;
	int32_t t187 = 12489997;

    t187 = (x1049<=(x1050*(x1051^x1052)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1053 = -31090253;
	uint32_t x1054 = UINT32_MAX;

    t188 = (x1053<=(x1054*(x1055^x1056)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1058 = INT64_MIN;

    t189 = (x1057<=(x1058*(x1059^x1060)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1073 = 76U;
	int16_t x1074 = INT16_MIN;
	volatile uint8_t x1075 = UINT8_MAX;
	volatile int32_t x1076 = -1;

    t190 = (x1073<=(x1074*(x1075^x1076)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1079 = 127;
	static uint8_t x1080 = UINT8_MAX;
	int32_t t191 = 5;

    t191 = (x1077<=(x1078*(x1079^x1080)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1081 = -1;
	int16_t x1082 = INT16_MAX;
	static int8_t x1084 = -1;
	int32_t t192 = -1;

    t192 = (x1081<=(x1082*(x1083^x1084)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1085 = INT32_MAX;
	int16_t x1086 = -120;
	int16_t x1087 = -2295;
	uint64_t x1088 = UINT64_MAX;
	int32_t t193 = -16230;

    t193 = (x1085<=(x1086*(x1087^x1088)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x1090 = 2U;
	int8_t x1091 = INT8_MIN;
	int32_t t194 = -1959;

    t194 = (x1089<=(x1090*(x1091^x1092)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1093 = 7827041016597689LL;
	volatile int8_t x1094 = -9;
	static volatile int16_t x1096 = 238;
	volatile int32_t t195 = 22223010;

    t195 = (x1093<=(x1094*(x1095^x1096)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1101 = 1LL;
	static int32_t x1102 = 90959;
	uint8_t x1103 = 0U;
	volatile uint32_t x1104 = UINT32_MAX;
	volatile int32_t t196 = -10039;

    t196 = (x1101<=(x1102*(x1103^x1104)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x1105 = 29538956;
	int32_t x1106 = -1;
	int32_t x1107 = 26;
	int8_t x1108 = 22;
	volatile int32_t t197 = -1;

    t197 = (x1105<=(x1106*(x1107^x1108)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1113 = -2017;
	volatile uint16_t x1114 = 965U;
	volatile uint64_t x1115 = 4689646946687LLU;
	int8_t x1116 = -1;

    t198 = (x1113<=(x1114*(x1115^x1116)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1117 = 14;
	static int16_t x1118 = INT16_MIN;
	static int16_t x1120 = INT16_MIN;
	int32_t t199 = -178992121;

    t199 = (x1117<=(x1118*(x1119^x1120)));

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

