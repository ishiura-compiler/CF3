
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

static int8_t x3 = INT8_MAX;
int64_t x9 = INT64_MIN;
int8_t x10 = INT8_MAX;
volatile int64_t x24 = INT64_MIN;
int32_t x26 = INT32_MAX;
int32_t t5 = 12141;
int16_t x31 = -1;
int8_t x32 = INT8_MIN;
int16_t x33 = -5;
int8_t x39 = 6;
int32_t t8 = -79297;
uint64_t x41 = 993LLU;
uint8_t x49 = 29U;
static volatile uint64_t x50 = 3865590324522180775LLU;
int16_t x52 = -119;
int32_t x54 = INT32_MIN;
uint32_t x60 = 1372417508U;
volatile int32_t t13 = 14249;
static int32_t t14 = -901466128;
volatile int32_t t15 = -2654797;
static int64_t x73 = INT64_MIN;
uint32_t x79 = UINT32_MAX;
volatile int32_t x88 = -1;
static int32_t t19 = -189849428;
int32_t x92 = -1;
static volatile int8_t x95 = INT8_MIN;
int8_t x96 = INT8_MIN;
uint8_t x105 = UINT8_MAX;
uint16_t x106 = 174U;
int8_t x109 = INT8_MIN;
int16_t x119 = -878;
uint8_t x122 = 1U;
volatile uint8_t x126 = UINT8_MAX;
static int32_t x137 = INT32_MIN;
int8_t x142 = INT8_MAX;
int64_t x143 = -69713533136281LL;
volatile int32_t t32 = -15137594;
int32_t t33 = 237676589;
int64_t x155 = INT64_MIN;
uint8_t x157 = 121U;
uint16_t x160 = UINT16_MAX;
volatile uint64_t x176 = UINT64_MAX;
static int32_t t42 = -87962;
volatile int32_t t50 = -243530956;
int8_t x229 = 10;
int8_t x230 = INT8_MIN;
volatile int8_t x235 = -1;
uint8_t x242 = UINT8_MAX;
int16_t x243 = INT16_MIN;
static int32_t x253 = 7;
uint64_t x256 = UINT64_MAX;
int32_t t57 = -27723;
uint8_t x257 = UINT8_MAX;
uint16_t x263 = 51U;
uint32_t x275 = UINT32_MAX;
volatile uint8_t x277 = UINT8_MAX;
volatile int32_t x281 = INT32_MIN;
volatile int32_t x283 = INT32_MAX;
volatile uint16_t x288 = 1679U;
int32_t t64 = 30011;
uint8_t x290 = 4U;
int16_t x295 = INT16_MAX;
uint32_t x301 = 558007U;
static int16_t x304 = 1270;
volatile int32_t t69 = -280558;
static int64_t x312 = INT64_MIN;
uint8_t x315 = 3U;
int32_t x328 = 690;
int32_t t74 = 2391;
static uint64_t x329 = UINT64_MAX;
volatile int32_t x333 = INT32_MIN;
volatile int32_t t76 = -3;
static uint16_t x337 = 747U;
volatile int32_t t77 = 4973;
int16_t x344 = 3594;
int32_t x350 = INT32_MAX;
int8_t x351 = INT8_MIN;
int32_t t81 = -2545;
uint16_t x357 = 1U;
uint32_t x358 = UINT32_MAX;
volatile int32_t t86 = 3642350;
uint16_t x395 = UINT16_MAX;
static int64_t x397 = INT64_MIN;
static uint16_t x398 = UINT16_MAX;
volatile uint8_t x405 = UINT8_MAX;
int32_t x408 = INT32_MIN;
int8_t x411 = -1;
int32_t t90 = 14609865;
int32_t x414 = -1;
volatile int16_t x423 = 1684;
int8_t x424 = INT8_MIN;
static int16_t x428 = -9;
volatile int32_t t94 = 22381;
static int8_t x430 = INT8_MIN;
int16_t x433 = INT16_MAX;
uint16_t x435 = UINT16_MAX;
uint16_t x439 = UINT16_MAX;
int32_t x440 = -1;
volatile uint64_t x443 = 43339804457LLU;
static volatile int32_t x449 = INT32_MIN;
int16_t x453 = INT16_MIN;
int16_t x455 = INT16_MIN;
volatile int32_t t101 = -2;
volatile int32_t x468 = -7;
static int32_t t103 = 802;
uint64_t x479 = 1551714835LLU;
uint64_t x486 = UINT64_MAX;
int8_t x487 = INT8_MIN;
int64_t x491 = 13325LL;
uint16_t x498 = 17861U;
uint32_t x501 = UINT32_MAX;
uint8_t x503 = 15U;
int16_t x508 = INT16_MIN;
int16_t x512 = INT16_MIN;
int8_t x517 = INT8_MIN;
uint16_t x522 = UINT16_MAX;
int16_t x525 = -24;
int16_t x527 = INT16_MIN;
volatile int16_t x535 = -1;
static int32_t x541 = INT32_MAX;
int8_t x544 = -1;
int32_t x545 = 49;
int64_t x548 = 43622661755980LL;
uint32_t x560 = UINT32_MAX;
uint16_t x563 = 14648U;
static int32_t t126 = 1;
int8_t x572 = INT8_MAX;
int64_t x575 = -516556143834578404LL;
int16_t x579 = INT16_MIN;
uint8_t x585 = 20U;
volatile uint8_t x587 = 28U;
int64_t x589 = -56037118736993LL;
uint32_t x590 = UINT32_MAX;
static uint16_t x595 = 14U;
int16_t x597 = INT16_MAX;
volatile int32_t t136 = 0;
uint32_t x611 = 518298U;
int8_t x613 = INT8_MAX;
int32_t x623 = INT32_MAX;
int32_t t140 = 21;
volatile int8_t x626 = -1;
static int64_t x629 = INT64_MIN;
static int16_t x631 = INT16_MAX;
volatile int32_t t142 = -299666247;
static uint32_t x639 = UINT32_MAX;
volatile int32_t t144 = 44291;
int16_t x645 = 208;
static int8_t x652 = INT8_MIN;
static int32_t t146 = 3;
int64_t x653 = -1LL;
static int32_t t148 = -104454420;
volatile uint8_t x662 = 1U;
int64_t x671 = -1LL;
static uint16_t x686 = UINT16_MAX;
int8_t x694 = -2;
int8_t x696 = -1;
volatile int32_t t156 = -7554;
int16_t x708 = 2;
int64_t x711 = INT64_MAX;
int8_t x719 = -1;
static uint16_t x721 = UINT16_MAX;
volatile int32_t x722 = -1;
int8_t x724 = 1;
volatile int8_t x725 = -5;
volatile int16_t x729 = -1;
uint32_t x733 = UINT32_MAX;
uint32_t x734 = 15U;
int8_t x744 = -1;
int64_t x745 = INT64_MIN;
volatile int16_t x754 = INT16_MAX;
volatile int8_t x757 = -14;
static int8_t x760 = 8;
static uint32_t x768 = 83461076U;
int32_t t175 = -651203;
int8_t x781 = 10;
int64_t x783 = INT64_MIN;
volatile int32_t t178 = -253117698;
int32_t x785 = INT32_MAX;
uint16_t x794 = 30878U;
int64_t x797 = -1LL;
uint16_t x802 = 21U;
int16_t x803 = INT16_MIN;
int8_t x806 = -3;
int16_t x809 = INT16_MIN;
uint32_t x810 = UINT32_MAX;
int8_t x811 = INT8_MAX;
volatile int8_t x814 = 1;
uint32_t x815 = 3210U;
int16_t x818 = INT16_MAX;
static uint8_t x819 = UINT8_MAX;
int16_t x826 = -1;
uint16_t x833 = 9302U;
volatile uint16_t x836 = 12U;
int32_t t193 = -996136979;
volatile uint16_t x845 = UINT16_MAX;
static int8_t x856 = -1;
int32_t x858 = INT32_MIN;
int16_t x863 = INT16_MAX;
volatile int32_t x868 = 1357;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MIN;
	volatile uint16_t x4 = UINT16_MAX;
	int32_t t0 = -331;

    t0 = (x1<=(x2!=(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x11 = -1LL;
	int8_t x12 = -1;
	int32_t t1 = 47722910;

    t1 = (x9<=(x10!=(x11-x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint16_t x14 = 19640U;
	uint16_t x15 = 1758U;
	int64_t x16 = 1LL;
	volatile int32_t t2 = 567207;

    t2 = (x13<=(x14!=(x15-x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -21064;
	uint32_t x18 = 11708U;
	int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t3 = 122;

    t3 = (x17<=(x18!=(x19-x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = -3491;
	static int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MIN;
	volatile int32_t t4 = -4977;

    t4 = (x21<=(x22!=(x23-x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 55U;
	int64_t x27 = -23092315126LL;
	uint8_t x28 = UINT8_MAX;

    t5 = (x25<=(x26!=(x27-x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	volatile int32_t t6 = -16087817;

    t6 = (x29<=(x30!=(x31-x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x34 = 1847U;
	int32_t x35 = 676197245;
	uint64_t x36 = UINT64_MAX;
	static int32_t t7 = 1;

    t7 = (x33<=(x34!=(x35-x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = 42;
	static int16_t x38 = INT16_MIN;
	int16_t x40 = 0;

    t8 = (x37<=(x38!=(x39-x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x42 = UINT32_MAX;
	volatile int8_t x43 = INT8_MIN;
	static volatile int64_t x44 = -1LL;
	int32_t t9 = -7845019;

    t9 = (x41<=(x42!=(x43-x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x45 = INT32_MAX;
	uint8_t x46 = 7U;
	volatile int16_t x47 = INT16_MIN;
	uint8_t x48 = 62U;
	volatile int32_t t10 = 19;

    t10 = (x45<=(x46!=(x47-x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x51 = 12;
	int32_t t11 = -20;

    t11 = (x49<=(x50!=(x51-x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	volatile int8_t x56 = INT8_MIN;
	static int32_t t12 = -2026;

    t12 = (x53<=(x54!=(x55-x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	static int32_t x58 = -53603;
	uint32_t x59 = UINT32_MAX;

    t13 = (x57<=(x58!=(x59-x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	uint32_t x62 = 15048724U;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = UINT32_MAX;

    t14 = (x61<=(x62!=(x63-x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	static int32_t x66 = INT32_MAX;
	int32_t x67 = -156735;
	int64_t x68 = 29138984550812LL;

    t15 = (x65<=(x66!=(x67-x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = -538;
	static int32_t x70 = 482110;
	static volatile int32_t x71 = INT32_MIN;
	uint8_t x72 = 0U;
	volatile int32_t t16 = -255395375;

    t16 = (x69<=(x70!=(x71-x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = INT8_MIN;
	volatile int16_t x75 = INT16_MIN;
	int64_t x76 = 264LL;
	static int32_t t17 = -257635201;

    t17 = (x73<=(x74!=(x75-x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = 0;
	static int16_t x78 = INT16_MIN;
	int64_t x80 = -559338448399616LL;
	int32_t t18 = -10728;

    t18 = (x77<=(x78!=(x79-x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = UINT16_MAX;
	int64_t x86 = INT64_MAX;
	int64_t x87 = INT64_MIN;

    t19 = (x85<=(x86!=(x87-x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = -1;
	static int32_t t20 = -1894943;

    t20 = (x89<=(x90!=(x91-x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 13LLU;
	uint32_t x94 = UINT32_MAX;
	volatile int32_t t21 = 239;

    t21 = (x93<=(x94!=(x95-x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 0U;
	static int8_t x98 = 0;
	int16_t x99 = INT16_MIN;
	static uint16_t x100 = 0U;
	volatile int32_t t22 = 0;

    t22 = (x97<=(x98!=(x99-x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x107 = UINT32_MAX;
	uint64_t x108 = UINT64_MAX;
	int32_t t23 = 1;

    t23 = (x105<=(x106!=(x107-x108)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x110 = -57;
	uint16_t x111 = 3946U;
	volatile int16_t x112 = -1;
	volatile int32_t t24 = -36838;

    t24 = (x109<=(x110!=(x111-x112)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x113 = 1227557043849LLU;
	int64_t x114 = 917333245404556LL;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = 219068U;
	static volatile int32_t t25 = 358;

    t25 = (x113<=(x114!=(x115-x116)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x117 = 31U;
	uint32_t x118 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	int32_t t26 = 0;

    t26 = (x117<=(x118!=(x119-x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x121 = -1;
	int8_t x123 = 21;
	volatile int64_t x124 = 14674195719LL;
	static volatile int32_t t27 = -4509;

    t27 = (x121<=(x122!=(x123-x124)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MIN;
	int64_t x127 = -168LL;
	uint8_t x128 = 126U;
	static volatile int32_t t28 = 6342;

    t28 = (x125<=(x126!=(x127-x128)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MAX;
	static int64_t x131 = 1790410215077LL;
	int8_t x132 = -1;
	volatile int32_t t29 = 43611055;

    t29 = (x129<=(x130!=(x131-x132)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = 2578336298949999294LL;
	uint32_t x134 = UINT32_MAX;
	static volatile int16_t x135 = -1;
	int32_t x136 = 21068;
	volatile int32_t t30 = 736984439;

    t30 = (x133<=(x134!=(x135-x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x138 = UINT8_MAX;
	int8_t x139 = INT8_MAX;
	static uint16_t x140 = UINT16_MAX;
	volatile int32_t t31 = 1;

    t31 = (x137<=(x138!=(x139-x140)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MIN;
	uint8_t x144 = UINT8_MAX;

    t32 = (x141<=(x142!=(x143-x144)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = INT8_MAX;
	int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = UINT64_MAX;

    t33 = (x145<=(x146!=(x147-x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = -562;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1;
	volatile int8_t x152 = INT8_MIN;
	int32_t t34 = 444598;

    t34 = (x149<=(x150!=(x151-x152)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = 0;
	uint16_t x154 = 6U;
	static volatile uint64_t x156 = UINT64_MAX;
	static volatile int32_t t35 = -731;

    t35 = (x153<=(x154!=(x155-x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x158 = UINT8_MAX;
	volatile uint32_t x159 = 403592637U;
	volatile int32_t t36 = -5;

    t36 = (x157<=(x158!=(x159-x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x161 = 292;
	int64_t x162 = INT64_MIN;
	int64_t x163 = 61147347860LL;
	int32_t x164 = -5664871;
	int32_t t37 = -7873974;

    t37 = (x161<=(x162!=(x163-x164)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MAX;
	uint64_t x166 = 1043251263950730166LLU;
	int64_t x167 = -99LL;
	static int64_t x168 = INT64_MIN;
	static int32_t t38 = -948;

    t38 = (x165<=(x166!=(x167-x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x173 = 2441U;
	uint16_t x174 = 77U;
	static int16_t x175 = -1;
	int32_t t39 = -211;

    t39 = (x173<=(x174!=(x175-x176)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = 1791;
	static int64_t x182 = INT64_MAX;
	int32_t x183 = -496;
	volatile int8_t x184 = INT8_MAX;
	int32_t t40 = 850432;

    t40 = (x181<=(x182!=(x183-x184)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x185 = INT64_MIN;
	volatile int64_t x186 = -1LL;
	static uint64_t x187 = UINT64_MAX;
	uint8_t x188 = UINT8_MAX;
	int32_t t41 = 1;

    t41 = (x185<=(x186!=(x187-x188)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MAX;
	int32_t x190 = -1;
	uint8_t x191 = 22U;
	static int64_t x192 = -1LL;

    t42 = (x189<=(x190!=(x191-x192)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t43 = -79721;

    t43 = (x193<=(x194!=(x195-x196)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = 0U;
	static uint8_t x198 = UINT8_MAX;
	int32_t x199 = -1;
	int32_t x200 = INT32_MAX;
	volatile int32_t t44 = 31;

    t44 = (x197<=(x198!=(x199-x200)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = 668U;
	volatile int32_t t45 = -11;

    t45 = (x201<=(x202!=(x203-x204)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x205 = INT64_MAX;
	int64_t x206 = 94587195414072LL;
	uint32_t x207 = 3U;
	int16_t x208 = 3326;
	volatile int32_t t46 = -3189;

    t46 = (x205<=(x206!=(x207-x208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = -102874472;
	static uint32_t x210 = 270U;
	int16_t x211 = INT16_MIN;
	int8_t x212 = -1;
	int32_t t47 = 22;

    t47 = (x209<=(x210!=(x211-x212)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x213 = 30750997457652117LLU;
	static volatile uint32_t x214 = UINT32_MAX;
	static uint16_t x215 = 1U;
	int64_t x216 = -1LL;
	int32_t t48 = 73;

    t48 = (x213<=(x214!=(x215-x216)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x217 = INT32_MAX;
	uint16_t x218 = 9U;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t49 = 1011;

    t49 = (x217<=(x218!=(x219-x220)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x225 = -1;
	int32_t x226 = INT32_MIN;
	static int64_t x227 = 3817865674LL;
	volatile int8_t x228 = -1;

    t50 = (x225<=(x226!=(x227-x228)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x231 = 50856000095LLU;
	int16_t x232 = 84;
	volatile int32_t t51 = -831722361;

    t51 = (x229<=(x230!=(x231-x232)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x233 = UINT64_MAX;
	static int32_t x234 = -1;
	volatile uint16_t x236 = UINT16_MAX;
	static volatile int32_t t52 = 919804;

    t52 = (x233<=(x234!=(x235-x236)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;
	static int32_t t53 = -4157629;

    t53 = (x237<=(x238!=(x239-x240)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x241 = 3U;
	int32_t x244 = -884036558;
	volatile int32_t t54 = -1;

    t54 = (x241<=(x242!=(x243-x244)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x245 = UINT16_MAX;
	uint16_t x246 = 3974U;
	static int32_t x247 = -1;
	uint64_t x248 = 149LLU;
	volatile int32_t t55 = 110930859;

    t55 = (x245<=(x246!=(x247-x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t56 = -11;

    t56 = (x249<=(x250!=(x251-x252)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x254 = 31136723350LLU;
	int16_t x255 = -1;

    t57 = (x253<=(x254!=(x255-x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MAX;
	uint64_t x260 = UINT64_MAX;
	static int32_t t58 = 272;

    t58 = (x257<=(x258!=(x259-x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x261 = INT8_MIN;
	uint64_t x262 = 96379125744602434LLU;
	uint32_t x264 = UINT32_MAX;
	int32_t t59 = -5067595;

    t59 = (x261<=(x262!=(x263-x264)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x269 = 1;
	volatile uint32_t x270 = 63U;
	int64_t x271 = INT64_MAX;
	static int16_t x272 = INT16_MAX;
	volatile int32_t t60 = 90;

    t60 = (x269<=(x270!=(x271-x272)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = INT64_MAX;
	int8_t x274 = 0;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t61 = -12425;

    t61 = (x273<=(x274!=(x275-x276)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x278 = INT64_MIN;
	static int8_t x279 = -1;
	int32_t x280 = -1;
	volatile int32_t t62 = 23669;

    t62 = (x277<=(x278!=(x279-x280)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x282 = -1;
	int64_t x284 = 99177LL;
	volatile int32_t t63 = -49;

    t63 = (x281<=(x282!=(x283-x284)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = 1535LL;
	int16_t x286 = INT16_MIN;
	int16_t x287 = -7;

    t64 = (x285<=(x286!=(x287-x288)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = -1;
	int64_t x291 = -2746LL;
	volatile int64_t x292 = INT64_MIN;
	volatile int32_t t65 = -306;

    t65 = (x289<=(x290!=(x291-x292)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x293 = -1LL;
	static int64_t x294 = INT64_MAX;
	uint32_t x296 = 9511U;
	int32_t t66 = -311796603;

    t66 = (x293<=(x294!=(x295-x296)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = -63;
	int32_t x298 = INT32_MIN;
	int16_t x299 = -1;
	uint8_t x300 = 2U;
	volatile int32_t t67 = 75;

    t67 = (x297<=(x298!=(x299-x300)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x302 = -1;
	int32_t x303 = -1;
	int32_t t68 = 37882;

    t68 = (x301<=(x302!=(x303-x304)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x305 = -788;
	static int32_t x306 = 3074;
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;

    t69 = (x305<=(x306!=(x307-x308)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MAX;
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = -3;
	static int32_t t70 = 5154984;

    t70 = (x309<=(x310!=(x311-x312)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = -15448396;
	static uint16_t x314 = 0U;
	uint32_t x316 = 774U;
	volatile int32_t t71 = -863367;

    t71 = (x313<=(x314!=(x315-x316)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x317 = 47U;
	int32_t x318 = -1;
	volatile uint64_t x319 = 2LLU;
	volatile int32_t x320 = -98;
	int32_t t72 = 1008230063;

    t72 = (x317<=(x318!=(x319-x320)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x321 = INT64_MIN;
	static uint32_t x322 = UINT32_MAX;
	int8_t x323 = -1;
	uint8_t x324 = 8U;
	int32_t t73 = -131146439;

    t73 = (x321<=(x322!=(x323-x324)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x325 = -14;
	static uint64_t x326 = 39185466869LLU;
	static volatile int64_t x327 = INT64_MAX;

    t74 = (x325<=(x326!=(x327-x328)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MAX;
	uint16_t x332 = 150U;
	volatile int32_t t75 = 960462416;

    t75 = (x329<=(x330!=(x331-x332)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x334 = UINT16_MAX;
	volatile int8_t x335 = INT8_MIN;
	volatile int64_t x336 = -70426636372054LL;

    t76 = (x333<=(x334!=(x335-x336)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x338 = 2LLU;
	volatile int8_t x339 = -1;
	uint64_t x340 = 2005451237830478LLU;

    t77 = (x337<=(x338!=(x339-x340)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x341 = 641536226U;
	uint8_t x342 = 12U;
	int16_t x343 = INT16_MAX;
	volatile int32_t t78 = -1506;

    t78 = (x341<=(x342!=(x343-x344)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x345 = 17U;
	int64_t x346 = INT64_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	int64_t x348 = -52LL;
	int32_t t79 = 19;

    t79 = (x345<=(x346!=(x347-x348)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x349 = INT16_MIN;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t80 = -1;

    t80 = (x349<=(x350!=(x351-x352)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x353 = 22U;
	uint16_t x354 = 19868U;
	volatile uint8_t x355 = 21U;
	int64_t x356 = -2982399110LL;

    t81 = (x353<=(x354!=(x355-x356)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	static volatile int32_t t82 = 0;

    t82 = (x357<=(x358!=(x359-x360)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x361 = INT8_MAX;
	static int32_t x362 = -61396686;
	volatile int32_t x363 = INT32_MIN;
	int64_t x364 = -125975856LL;
	static int32_t t83 = -966;

    t83 = (x361<=(x362!=(x363-x364)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x365 = UINT64_MAX;
	int32_t x366 = -23;
	uint16_t x367 = 41U;
	uint64_t x368 = 932660LLU;
	static volatile int32_t t84 = -357650;

    t84 = (x365<=(x366!=(x367-x368)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x377 = INT16_MIN;
	uint32_t x378 = 29442U;
	volatile int64_t x379 = -1LL;
	int32_t x380 = INT32_MAX;
	int32_t t85 = -186509;

    t85 = (x377<=(x378!=(x379-x380)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MAX;

    t86 = (x389<=(x390!=(x391-x392)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x393 = -1;
	int32_t x394 = -1;
	uint32_t x396 = 1599U;
	volatile int32_t t87 = 92153474;

    t87 = (x393<=(x394!=(x395-x396)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x399 = -62;
	volatile int32_t x400 = -1;
	int32_t t88 = 4216;

    t88 = (x397<=(x398!=(x399-x400)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x406 = INT32_MIN;
	static int16_t x407 = INT16_MIN;
	volatile int32_t t89 = -6056669;

    t89 = (x405<=(x406!=(x407-x408)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x409 = 258LL;
	volatile int8_t x410 = 0;
	int64_t x412 = INT64_MAX;

    t90 = (x409<=(x410!=(x411-x412)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x413 = 1973LLU;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MIN;
	static int32_t t91 = 6;

    t91 = (x413<=(x414!=(x415-x416)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = INT16_MIN;
	volatile uint64_t x418 = UINT64_MAX;
	uint32_t x419 = 259721197U;
	static int8_t x420 = 29;
	volatile int32_t t92 = -160469032;

    t92 = (x417<=(x418!=(x419-x420)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x421 = 11U;
	static int8_t x422 = -1;
	volatile int32_t t93 = 0;

    t93 = (x421<=(x422!=(x423-x424)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x425 = -1LL;
	static volatile int32_t x426 = -19133781;
	int32_t x427 = INT32_MIN;

    t94 = (x425<=(x426!=(x427-x428)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x429 = -1476403;
	static volatile int32_t x431 = -1;
	volatile int64_t x432 = -207LL;
	volatile int32_t t95 = 190;

    t95 = (x429<=(x430!=(x431-x432)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x434 = 10465U;
	int16_t x436 = 3;
	int32_t t96 = -32591965;

    t96 = (x433<=(x434!=(x435-x436)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x437 = -497645236LL;
	int64_t x438 = -89909284039561567LL;
	int32_t t97 = -1113;

    t97 = (x437<=(x438!=(x439-x440)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x441 = UINT8_MAX;
	int8_t x442 = INT8_MIN;
	volatile int8_t x444 = -1;
	int32_t t98 = -9;

    t98 = (x441<=(x442!=(x443-x444)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = -231;
	int64_t x446 = -905683939LL;
	static int64_t x447 = -1LL;
	int64_t x448 = -538415420976LL;
	volatile int32_t t99 = 109;

    t99 = (x445<=(x446!=(x447-x448)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = -1;
	int32_t t100 = 4;

    t100 = (x449<=(x450!=(x451-x452)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x454 = INT32_MAX;
	uint64_t x456 = UINT64_MAX;

    t101 = (x453<=(x454!=(x455-x456)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = INT16_MIN;
	volatile uint16_t x458 = UINT16_MAX;
	int16_t x459 = INT16_MIN;
	volatile uint16_t x460 = 25U;
	volatile int32_t t102 = 0;

    t102 = (x457<=(x458!=(x459-x460)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x465 = -1LL;
	int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MIN;

    t103 = (x465<=(x466!=(x467-x468)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x469 = INT16_MIN;
	volatile uint32_t x470 = 1U;
	static uint64_t x471 = 190429171329752LLU;
	volatile int32_t x472 = -1;
	static int32_t t104 = -2019344;

    t104 = (x469<=(x470!=(x471-x472)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	int32_t x475 = INT32_MAX;
	volatile int8_t x476 = 10;
	int32_t t105 = -8923;

    t105 = (x473<=(x474!=(x475-x476)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x477 = 227168440112446435LLU;
	int64_t x478 = -1LL;
	int8_t x480 = INT8_MIN;
	int32_t t106 = 31310209;

    t106 = (x477<=(x478!=(x479-x480)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = 175857;
	int64_t x482 = -1LL;
	int16_t x483 = -1;
	static int8_t x484 = 0;
	int32_t t107 = 358086287;

    t107 = (x481<=(x482!=(x483-x484)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x485 = INT8_MIN;
	uint16_t x488 = 4835U;
	int32_t t108 = 388842121;

    t108 = (x485<=(x486!=(x487-x488)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = INT64_MIN;
	static int8_t x490 = -30;
	volatile uint8_t x492 = 3U;
	volatile int32_t t109 = -118560;

    t109 = (x489<=(x490!=(x491-x492)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = INT16_MIN;
	int16_t x494 = -1;
	static volatile int8_t x495 = -14;
	int16_t x496 = 1;
	static int32_t t110 = 4;

    t110 = (x493<=(x494!=(x495-x496)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x497 = 0;
	int8_t x499 = 2;
	int8_t x500 = INT8_MIN;
	volatile int32_t t111 = -1;

    t111 = (x497<=(x498!=(x499-x500)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x502 = 15;
	int16_t x504 = -1;
	volatile int32_t t112 = 63471;

    t112 = (x501<=(x502!=(x503-x504)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = 1850;
	volatile int8_t x506 = -1;
	int64_t x507 = -1LL;
	volatile int32_t t113 = -1919;

    t113 = (x505<=(x506!=(x507-x508)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = 34;
	uint64_t x510 = 8290LLU;
	static volatile int16_t x511 = INT16_MIN;
	volatile int32_t t114 = 9409;

    t114 = (x509<=(x510!=(x511-x512)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x513 = INT16_MAX;
	int16_t x514 = INT16_MAX;
	uint32_t x515 = 27U;
	int64_t x516 = -1LL;
	int32_t t115 = -217;

    t115 = (x513<=(x514!=(x515-x516)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x518 = 226;
	static int32_t x519 = -4;
	static uint8_t x520 = 11U;
	int32_t t116 = 13264;

    t116 = (x517<=(x518!=(x519-x520)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x521 = 29U;
	static uint32_t x523 = 150U;
	int64_t x524 = -431168979720792LL;
	int32_t t117 = 1865;

    t117 = (x521<=(x522!=(x523-x524)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x526 = INT8_MIN;
	int32_t x528 = 89059328;
	volatile int32_t t118 = -311742958;

    t118 = (x525<=(x526!=(x527-x528)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x534 = INT32_MAX;
	uint64_t x536 = 193146066013183LLU;
	static int32_t t119 = -179516567;

    t119 = (x533<=(x534!=(x535-x536)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x537 = INT32_MIN;
	static int64_t x538 = 4395075LL;
	volatile int16_t x539 = 4190;
	int8_t x540 = INT8_MAX;
	static int32_t t120 = 8291768;

    t120 = (x537<=(x538!=(x539-x540)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x542 = INT64_MAX;
	uint16_t x543 = UINT16_MAX;
	int32_t t121 = 4;

    t121 = (x541<=(x542!=(x543-x544)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x546 = UINT16_MAX;
	int16_t x547 = INT16_MAX;
	int32_t t122 = 994522876;

    t122 = (x545<=(x546!=(x547-x548)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x550 = 1U;
	volatile uint32_t x551 = 37U;
	int32_t x552 = -3;
	int32_t t123 = -37427224;

    t123 = (x549<=(x550!=(x551-x552)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x553 = INT8_MAX;
	static int32_t x554 = -1;
	static uint16_t x555 = 48U;
	volatile uint8_t x556 = 7U;
	int32_t t124 = -633;

    t124 = (x553<=(x554!=(x555-x556)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x557 = UINT8_MAX;
	volatile int16_t x558 = -1716;
	int64_t x559 = -7103519380398475LL;
	volatile int32_t t125 = 14;

    t125 = (x557<=(x558!=(x559-x560)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x561 = INT8_MIN;
	int32_t x562 = INT32_MIN;
	static int32_t x564 = -39418;

    t126 = (x561<=(x562!=(x563-x564)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MAX;
	int16_t x567 = INT16_MIN;
	volatile uint16_t x568 = 1026U;
	volatile int32_t t127 = 1;

    t127 = (x565<=(x566!=(x567-x568)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x569 = 8;
	uint16_t x570 = 22237U;
	uint64_t x571 = 0LLU;
	volatile int32_t t128 = 81482;

    t128 = (x569<=(x570!=(x571-x572)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x573 = 35U;
	int16_t x574 = -1;
	volatile uint8_t x576 = 22U;
	volatile int32_t t129 = 1055064502;

    t129 = (x573<=(x574!=(x575-x576)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x577 = 229690613464LLU;
	int16_t x578 = INT16_MIN;
	static int64_t x580 = 2055748836LL;
	int32_t t130 = 9602769;

    t130 = (x577<=(x578!=(x579-x580)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x586 = 5U;
	uint64_t x588 = 22LLU;
	volatile int32_t t131 = 2687547;

    t131 = (x585<=(x586!=(x587-x588)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x591 = 26375876LLU;
	int64_t x592 = 3457775079276358337LL;
	int32_t t132 = -27;

    t132 = (x589<=(x590!=(x591-x592)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x594 = INT8_MIN;
	int32_t x596 = -18316;
	volatile int32_t t133 = 3976086;

    t133 = (x593<=(x594!=(x595-x596)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MIN;
	uint64_t x600 = 31666LLU;
	static volatile int32_t t134 = -8702418;

    t134 = (x597<=(x598!=(x599-x600)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x601 = -43053472LL;
	static int64_t x602 = -1LL;
	volatile int32_t x603 = -1;
	int8_t x604 = -1;
	int32_t t135 = -244307;

    t135 = (x601<=(x602!=(x603-x604)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x605 = 44;
	int8_t x606 = 3;
	int8_t x607 = INT8_MIN;
	volatile int16_t x608 = 1;

    t136 = (x605<=(x606!=(x607-x608)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x609 = INT8_MAX;
	static int32_t x610 = -1;
	uint32_t x612 = 1607405U;
	int32_t t137 = -2563;

    t137 = (x609<=(x610!=(x611-x612)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x614 = 13870U;
	volatile uint8_t x615 = 5U;
	volatile int8_t x616 = INT8_MIN;
	int32_t t138 = -3;

    t138 = (x613<=(x614!=(x615-x616)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	int8_t x618 = INT8_MAX;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = -66203;
	volatile int32_t t139 = 458672425;

    t139 = (x617<=(x618!=(x619-x620)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x621 = INT8_MAX;
	uint64_t x622 = 8717168128019407514LLU;
	static int32_t x624 = 17456660;

    t140 = (x621<=(x622!=(x623-x624)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x625 = 41;
	int64_t x627 = 547737611847LL;
	volatile uint16_t x628 = 11U;
	int32_t t141 = -5;

    t141 = (x625<=(x626!=(x627-x628)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x630 = INT8_MAX;
	volatile uint64_t x632 = 495498960869LLU;

    t142 = (x629<=(x630!=(x631-x632)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x637 = 47U;
	static int16_t x638 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	volatile int32_t t143 = -1270;

    t143 = (x637<=(x638!=(x639-x640)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x642 = INT64_MIN;
	static int8_t x643 = 51;
	volatile int8_t x644 = INT8_MAX;

    t144 = (x641<=(x642!=(x643-x644)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x646 = INT8_MIN;
	static int8_t x647 = 22;
	uint8_t x648 = UINT8_MAX;
	int32_t t145 = 98928;

    t145 = (x645<=(x646!=(x647-x648)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x649 = -1;
	int32_t x650 = INT32_MAX;
	int16_t x651 = INT16_MIN;

    t146 = (x649<=(x650!=(x651-x652)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x654 = 55U;
	int32_t x655 = 1627;
	static uint32_t x656 = 429029037U;
	volatile int32_t t147 = -4596487;

    t147 = (x653<=(x654!=(x655-x656)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x657 = UINT64_MAX;
	static volatile uint64_t x658 = UINT64_MAX;
	uint32_t x659 = 1U;
	volatile int16_t x660 = -1;

    t148 = (x657<=(x658!=(x659-x660)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x661 = -1;
	volatile uint16_t x663 = 2U;
	uint16_t x664 = 129U;
	int32_t t149 = -191196773;

    t149 = (x661<=(x662!=(x663-x664)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x665 = 255565076465807LLU;
	volatile int64_t x666 = 123173544477642453LL;
	int8_t x667 = 57;
	static uint32_t x668 = UINT32_MAX;
	int32_t t150 = -359042;

    t150 = (x665<=(x666!=(x667-x668)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = INT16_MAX;
	uint16_t x670 = 17U;
	uint8_t x672 = 15U;
	int32_t t151 = -1777;

    t151 = (x669<=(x670!=(x671-x672)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x673 = INT8_MAX;
	static int64_t x674 = -1LL;
	static int64_t x675 = INT64_MAX;
	int8_t x676 = 28;
	int32_t t152 = 38;

    t152 = (x673<=(x674!=(x675-x676)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x677 = INT64_MIN;
	static int16_t x678 = -1;
	int8_t x679 = INT8_MIN;
	int64_t x680 = INT64_MIN;
	volatile int32_t t153 = 35097379;

    t153 = (x677<=(x678!=(x679-x680)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	uint64_t x682 = UINT64_MAX;
	int16_t x683 = -1;
	int8_t x684 = -5;
	int32_t t154 = 493;

    t154 = (x681<=(x682!=(x683-x684)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = -1;
	uint64_t x687 = UINT64_MAX;
	uint8_t x688 = UINT8_MAX;
	static int32_t t155 = -162393;

    t155 = (x685<=(x686!=(x687-x688)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x693 = 216255U;
	uint64_t x695 = UINT64_MAX;

    t156 = (x693<=(x694!=(x695-x696)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x697 = INT64_MIN;
	int16_t x698 = INT16_MIN;
	int64_t x699 = -1LL;
	uint8_t x700 = UINT8_MAX;
	int32_t t157 = -6647;

    t157 = (x697<=(x698!=(x699-x700)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x701 = 1;
	static int16_t x702 = 10169;
	int16_t x703 = -1;
	volatile int16_t x704 = INT16_MIN;
	int32_t t158 = 97074;

    t158 = (x701<=(x702!=(x703-x704)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x705 = -257;
	volatile int8_t x706 = 0;
	int8_t x707 = INT8_MIN;
	volatile int32_t t159 = -3321;

    t159 = (x705<=(x706!=(x707-x708)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x709 = 130166338LLU;
	int8_t x710 = INT8_MIN;
	int8_t x712 = 0;
	static int32_t t160 = 12;

    t160 = (x709<=(x710!=(x711-x712)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x713 = 46U;
	int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MAX;
	uint8_t x716 = 48U;
	static int32_t t161 = -30536;

    t161 = (x713<=(x714!=(x715-x716)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x717 = UINT16_MAX;
	int8_t x718 = INT8_MAX;
	volatile int32_t x720 = -427;
	int32_t t162 = -78;

    t162 = (x717<=(x718!=(x719-x720)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x723 = -5;
	static int32_t t163 = -100;

    t163 = (x721<=(x722!=(x723-x724)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x726 = UINT8_MAX;
	uint32_t x727 = UINT32_MAX;
	static uint16_t x728 = 0U;
	int32_t t164 = -1;

    t164 = (x725<=(x726!=(x727-x728)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x730 = 7971001875LLU;
	int8_t x731 = -14;
	int64_t x732 = INT64_MIN;
	static int32_t t165 = -2170;

    t165 = (x729<=(x730!=(x731-x732)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x735 = INT8_MAX;
	int64_t x736 = -1LL;
	int32_t t166 = 1077717;

    t166 = (x733<=(x734!=(x735-x736)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x737 = INT32_MAX;
	int32_t x738 = INT32_MIN;
	uint8_t x739 = 47U;
	int8_t x740 = -6;
	volatile int32_t t167 = -39;

    t167 = (x737<=(x738!=(x739-x740)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x741 = UINT64_MAX;
	int64_t x742 = 63291428688LL;
	int32_t x743 = 98623098;
	static volatile int32_t t168 = 454087750;

    t168 = (x741<=(x742!=(x743-x744)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x746 = INT64_MAX;
	static volatile int8_t x747 = INT8_MIN;
	int8_t x748 = -1;
	int32_t t169 = 1;

    t169 = (x745<=(x746!=(x747-x748)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x749 = UINT16_MAX;
	int16_t x750 = INT16_MAX;
	int32_t x751 = -1;
	int8_t x752 = INT8_MAX;
	int32_t t170 = -497021;

    t170 = (x749<=(x750!=(x751-x752)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x753 = -887;
	static uint64_t x755 = UINT64_MAX;
	int8_t x756 = INT8_MIN;
	volatile int32_t t171 = 101312692;

    t171 = (x753<=(x754!=(x755-x756)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x758 = UINT16_MAX;
	volatile int16_t x759 = -1;
	volatile int32_t t172 = -15163;

    t172 = (x757<=(x758!=(x759-x760)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MIN;
	static int8_t x763 = 0;
	static uint8_t x764 = 1U;
	volatile int32_t t173 = 5860456;

    t173 = (x761<=(x762!=(x763-x764)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x765 = -19749580146911876LL;
	uint8_t x766 = 1U;
	uint16_t x767 = 127U;
	int32_t t174 = -3355;

    t174 = (x765<=(x766!=(x767-x768)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x769 = UINT8_MAX;
	volatile int64_t x770 = INT64_MIN;
	static int32_t x771 = -9876;
	int16_t x772 = INT16_MIN;

    t175 = (x769<=(x770!=(x771-x772)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = INT8_MAX;
	static int16_t x774 = INT16_MAX;
	int16_t x775 = 634;
	int8_t x776 = 31;
	int32_t t176 = 156;

    t176 = (x773<=(x774!=(x775-x776)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x777 = -80;
	int8_t x778 = 7;
	int8_t x779 = INT8_MIN;
	int8_t x780 = -1;
	volatile int32_t t177 = -1;

    t177 = (x777<=(x778!=(x779-x780)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x782 = UINT64_MAX;
	int16_t x784 = -1;

    t178 = (x781<=(x782!=(x783-x784)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x786 = -1LL;
	volatile int16_t x787 = INT16_MAX;
	uint16_t x788 = UINT16_MAX;
	int32_t t179 = -1255203;

    t179 = (x785<=(x786!=(x787-x788)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = -610985;
	static volatile int16_t x790 = INT16_MIN;
	int64_t x791 = INT64_MIN;
	uint64_t x792 = 577862522453547LLU;
	int32_t t180 = -26;

    t180 = (x789<=(x790!=(x791-x792)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x795 = INT16_MAX;
	uint32_t x796 = 50319076U;
	volatile int32_t t181 = 248278280;

    t181 = (x793<=(x794!=(x795-x796)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x798 = INT64_MIN;
	uint8_t x799 = 2U;
	int64_t x800 = INT64_MAX;
	static volatile int32_t t182 = 74;

    t182 = (x797<=(x798!=(x799-x800)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x801 = INT8_MIN;
	int64_t x804 = INT64_MIN;
	volatile int32_t t183 = -21;

    t183 = (x801<=(x802!=(x803-x804)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x805 = -1;
	uint8_t x807 = 1U;
	int64_t x808 = -1LL;
	static volatile int32_t t184 = -33299173;

    t184 = (x805<=(x806!=(x807-x808)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x812 = 26718696219LLU;
	static int32_t t185 = 0;

    t185 = (x809<=(x810!=(x811-x812)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x813 = INT16_MIN;
	volatile uint64_t x816 = UINT64_MAX;
	volatile int32_t t186 = -46177098;

    t186 = (x813<=(x814!=(x815-x816)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x817 = 88U;
	uint8_t x820 = UINT8_MAX;
	static int32_t t187 = -15286;

    t187 = (x817<=(x818!=(x819-x820)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = -10;
	int32_t x822 = 234;
	uint8_t x823 = 85U;
	static volatile int8_t x824 = INT8_MIN;
	int32_t t188 = -62594;

    t188 = (x821<=(x822!=(x823-x824)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x827 = -1;
	int32_t x828 = -1;
	int32_t t189 = -25922;

    t189 = (x825<=(x826!=(x827-x828)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x829 = -1;
	int32_t x830 = -1;
	int8_t x831 = INT8_MIN;
	volatile uint32_t x832 = 5932U;
	int32_t t190 = -2;

    t190 = (x829<=(x830!=(x831-x832)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x834 = 0U;
	uint16_t x835 = UINT16_MAX;
	int32_t t191 = 25;

    t191 = (x833<=(x834!=(x835-x836)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x837 = 61LLU;
	uint16_t x838 = 2634U;
	static uint64_t x839 = 2780918015LLU;
	int16_t x840 = INT16_MIN;
	int32_t t192 = -1500146;

    t192 = (x837<=(x838!=(x839-x840)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x841 = INT16_MIN;
	uint16_t x842 = 16324U;
	int32_t x843 = INT32_MAX;
	static uint64_t x844 = UINT64_MAX;

    t193 = (x841<=(x842!=(x843-x844)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x846 = 7U;
	int16_t x847 = INT16_MAX;
	int8_t x848 = INT8_MAX;
	static volatile int32_t t194 = -7;

    t194 = (x845<=(x846!=(x847-x848)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = INT32_MIN;
	int16_t x850 = INT16_MIN;
	uint32_t x851 = 1293876U;
	static uint8_t x852 = 1U;
	volatile int32_t t195 = -124608;

    t195 = (x849<=(x850!=(x851-x852)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x853 = INT8_MIN;
	int16_t x854 = -1;
	static uint64_t x855 = UINT64_MAX;
	volatile int32_t t196 = -248;

    t196 = (x853<=(x854!=(x855-x856)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x857 = 29337838U;
	int32_t x859 = INT32_MAX;
	volatile int8_t x860 = INT8_MAX;
	int32_t t197 = 4425945;

    t197 = (x857<=(x858!=(x859-x860)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x861 = 1143258697U;
	static int64_t x862 = INT64_MAX;
	static uint16_t x864 = 123U;
	int32_t t198 = -5764;

    t198 = (x861<=(x862!=(x863-x864)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x865 = INT32_MIN;
	int64_t x866 = 119261586680191LL;
	static int8_t x867 = -1;
	volatile int32_t t199 = -102;

    t199 = (x865<=(x866!=(x867-x868)));

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

