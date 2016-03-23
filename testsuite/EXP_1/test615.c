
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

static int32_t x1 = INT32_MIN;
uint32_t x2 = 4U;
int8_t x5 = 7;
static uint32_t x11 = UINT32_MAX;
static int32_t x19 = 145613;
volatile int8_t x20 = INT8_MIN;
volatile uint16_t x24 = 285U;
volatile uint8_t x25 = UINT8_MAX;
int64_t x28 = -1LL;
volatile uint32_t x30 = 7654479U;
int64_t x38 = -1LL;
uint32_t x43 = 13693U;
static int32_t x44 = 98185472;
volatile int64_t t9 = -53412LL;
static volatile int64_t x60 = 1300367344LL;
static int8_t x64 = -9;
int16_t x75 = INT16_MIN;
volatile int16_t x88 = -1;
static int8_t x100 = INT8_MIN;
volatile int16_t x104 = INT16_MIN;
static uint64_t t20 = 1737366298564944688LLU;
static volatile uint16_t x109 = UINT16_MAX;
int16_t x113 = INT16_MAX;
volatile uint8_t x114 = UINT8_MAX;
int16_t x124 = INT16_MIN;
static int8_t x129 = -43;
static int64_t t26 = 0LL;
uint16_t x141 = UINT16_MAX;
int8_t x143 = INT8_MIN;
volatile uint64_t t29 = 804LLU;
static uint64_t x150 = UINT64_MAX;
int8_t x152 = INT8_MAX;
volatile uint64_t t30 = 587266176LLU;
int64_t x154 = INT64_MIN;
int8_t x156 = INT8_MAX;
int64_t t31 = 2711883LL;
uint32_t t32 = 3305U;
static uint8_t x161 = UINT8_MAX;
int16_t x165 = INT16_MIN;
int32_t x178 = -454;
int8_t x184 = 0;
volatile uint64_t x185 = 560182389926986LLU;
int8_t x186 = INT8_MAX;
int8_t x187 = -1;
int32_t x192 = INT32_MIN;
static int32_t x197 = -143324;
int32_t t41 = 26950140;
int16_t x208 = INT16_MIN;
volatile int16_t x209 = INT16_MIN;
static volatile uint64_t t44 = 25734623LLU;
static uint64_t x218 = 510LLU;
static int8_t x220 = INT8_MAX;
volatile int8_t x225 = 25;
volatile uint64_t x226 = UINT64_MAX;
uint8_t x233 = 1U;
int64_t x241 = 3102042302730LL;
volatile int32_t x243 = INT32_MAX;
uint8_t x246 = 1U;
volatile uint64_t x254 = UINT64_MAX;
int16_t x261 = -1;
int8_t x264 = INT8_MAX;
int32_t x271 = INT32_MIN;
int32_t x274 = INT32_MAX;
static int64_t x277 = INT64_MIN;
int32_t x278 = 79342248;
static volatile int64_t t61 = -599660LL;
static uint64_t t63 = UINT64_MAX;
int16_t x315 = INT16_MAX;
int32_t x318 = -1;
volatile uint64_t t68 = 2049731327437039LLU;
volatile uint64_t t69 = 9291LLU;
volatile int64_t x325 = -1LL;
volatile int64_t x328 = INT64_MIN;
int64_t t70 = -11288835LL;
uint32_t x330 = UINT32_MAX;
static int8_t x331 = INT8_MAX;
uint64_t x333 = 23263673915LLU;
uint16_t x334 = 17773U;
int64_t x337 = 665603LL;
static uint16_t x340 = 5802U;
volatile int64_t t73 = 0LL;
int8_t x353 = INT8_MAX;
static int16_t x357 = INT16_MIN;
static int16_t x358 = -934;
uint64_t x363 = 5388LLU;
int16_t x367 = INT16_MIN;
int32_t x369 = INT32_MIN;
uint32_t t80 = 513706U;
int64_t x374 = -11085568119705835LL;
volatile int16_t x388 = -43;
volatile int64_t t84 = 1LL;
volatile int16_t x389 = INT16_MIN;
static uint64_t x391 = UINT64_MAX;
int64_t t86 = -6099785LL;
int64_t x398 = INT64_MIN;
volatile int16_t x401 = 5917;
uint16_t x406 = UINT16_MAX;
int64_t x414 = INT64_MAX;
uint32_t x420 = 1673658U;
uint64_t t93 = 7707LLU;
int8_t x443 = INT8_MIN;
int16_t x446 = 12643;
int32_t x447 = -1;
int64_t x458 = 5589567105LL;
volatile int64_t x464 = 8118359898LL;
volatile int16_t x466 = INT16_MIN;
volatile int64_t t102 = 4113366682474822LL;
uint16_t x472 = 1274U;
uint64_t t103 = 10005326368108687LLU;
int64_t x474 = INT64_MAX;
static volatile int64_t t105 = 1271166LL;
int32_t x481 = -1;
uint16_t x484 = 85U;
int32_t x486 = INT32_MIN;
int16_t x493 = 3769;
static volatile uint16_t x497 = 346U;
int8_t x499 = -25;
int8_t x502 = INT8_MIN;
uint64_t x504 = UINT64_MAX;
uint8_t x505 = UINT8_MAX;
static int8_t x510 = INT8_MIN;
int64_t t112 = 65235507189695686LL;
volatile uint32_t x523 = UINT32_MAX;
int32_t t115 = -3367043;
int32_t x529 = 878548;
volatile int16_t x531 = -1768;
int16_t x535 = INT16_MIN;
int16_t x538 = -1;
int8_t x547 = 1;
int8_t x549 = 1;
static int64_t t121 = 318671794182271907LL;
static uint16_t x573 = 375U;
int8_t x585 = -1;
int16_t x590 = -1;
int8_t x592 = -1;
static uint32_t x593 = 984902474U;
uint64_t x595 = UINT64_MAX;
int32_t x601 = -1028339250;
uint32_t x621 = UINT32_MAX;
volatile int16_t x627 = -87;
static int64_t x644 = INT64_MIN;
uint64_t t138 = 632972299LLU;
static uint64_t x647 = UINT64_MAX;
static volatile int8_t x652 = INT8_MIN;
volatile int32_t t140 = -52921525;
int32_t x654 = 235079134;
int64_t x658 = INT64_MIN;
volatile int64_t t142 = -1355135210216LL;
static volatile int8_t x663 = INT8_MIN;
volatile int16_t x664 = -1;
volatile uint16_t x666 = UINT16_MAX;
volatile int32_t t144 = -887;
int64_t t145 = 909979073942LL;
uint32_t t147 = 10U;
int8_t x684 = -1;
int16_t x694 = INT16_MIN;
volatile uint64_t t152 = UINT64_MAX;
uint16_t x713 = UINT16_MAX;
int32_t x716 = INT32_MAX;
int32_t x727 = -2;
static int32_t x733 = 9076;
int8_t x738 = 23;
int32_t x743 = -1;
uint64_t t160 = UINT64_MAX;
uint64_t x746 = UINT64_MAX;
int8_t x752 = INT8_MAX;
int64_t x757 = 56855433018287LL;
int32_t x758 = INT32_MIN;
int8_t x759 = INT8_MAX;
static int32_t x761 = -1528;
volatile uint64_t t165 = 2019861746383277284LLU;
uint64_t t166 = 2004891086LLU;
int16_t x777 = -1;
static int64_t x790 = INT64_MIN;
int8_t x795 = INT8_MIN;
static int64_t t172 = -16989772361667743LL;
int8_t x799 = INT8_MAX;
uint64_t x808 = UINT64_MAX;
volatile int16_t x809 = INT16_MAX;
int16_t x821 = -1;
int32_t t178 = 2;
static volatile int32_t x828 = -1;
int16_t x829 = 248;
static uint32_t x837 = 0U;
int8_t x838 = INT8_MIN;
static int16_t x840 = INT16_MAX;
int8_t x843 = -9;
int64_t x848 = -1LL;
int64_t t185 = INT64_MAX;
int64_t x854 = -1LL;
static int64_t t186 = 9537843LL;
uint64_t x857 = UINT64_MAX;
uint8_t x860 = UINT8_MAX;
volatile int32_t x864 = 587;
volatile uint64_t t188 = 13LLU;
volatile int8_t x870 = -2;
int8_t x873 = INT8_MAX;
int16_t x878 = INT16_MAX;
uint16_t x880 = UINT16_MAX;
int32_t t193 = 107654776;
int64_t x886 = -1LL;
int32_t x887 = 1;
volatile uint8_t x891 = 30U;
int64_t t195 = -86LL;
int16_t x894 = INT16_MIN;
static int8_t x900 = INT8_MIN;
static volatile int64_t t199 = 0LL;


void f0(void) {
    	uint16_t x3 = 1U;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = UINT32_MAX;

    t0 = (((x1/x2)-x3)|x4);

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	static uint32_t x7 = 56590U;
	static int32_t x8 = -1;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (((x5/x6)-x7)|x8);

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 4568078179033LLU;
	uint64_t x10 = 268387610964079LLU;
	int8_t x12 = -1;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = (((x9/x10)-x11)|x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = UINT64_MAX;
	uint32_t x18 = 558162148U;
	uint64_t t3 = 1LLU;

    t3 = (((x17/x18)-x19)|x20);

    if (t3 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 4LLU;
	static int64_t x22 = INT64_MIN;
	int64_t x23 = 1081618126379746LL;
	volatile uint64_t t4 = 490016276LLU;

    t4 = (((x21/x22)-x23)|x24);

    if (t4 != 18445662455583171871LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x26 = 3U;
	volatile int16_t x27 = -29;
	int64_t t5 = -10LL;

    t5 = (((x25/x26)-x27)|x28);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = INT16_MIN;
	int64_t t6 = 90878956422246384LL;

    t6 = (((x29/x30)-x31)|x32);

    if (t6 != -20148LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MAX;
	uint64_t x39 = 7025855089497034878LLU;
	uint64_t x40 = 476506155080LLU;
	uint64_t t7 = 247323498LLU;

    t7 = (((x37/x38)-x39)|x40);

    if (t7 != 11420889442445619147LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = 1;
	int16_t x42 = -11582;
	volatile uint32_t t8 = 29095547U;

    t8 = (((x41/x42)-x43)|x44);

    if (t8 != 4294966147U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = 15487LL;
	static uint16_t x50 = 1U;
	uint8_t x51 = 35U;
	volatile int64_t x52 = -557471446131791LL;

    t9 = (((x49/x50)-x51)|x52);

    if (t9 != -557471446122499LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	static volatile int64_t t10 = 6514108179440LL;

    t10 = (((x57/x58)-x59)|x60);

    if (t10 != -72057594037927950LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 57085785LLU;
	int32_t x62 = 69737;
	volatile int32_t x63 = INT32_MIN;
	uint64_t t11 = 6753142007LLU;

    t11 = (((x61/x62)-x63)|x64);

    if (t11 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x65 = -1;
	volatile int16_t x66 = INT16_MIN;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = INT16_MAX;
	volatile uint32_t t12 = 6U;

    t12 = (((x65/x66)-x67)|x68);

    if (t12 != 32767U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = 7329790941LLU;
	uint32_t x70 = UINT32_MAX;
	volatile uint64_t x71 = 255LLU;
	int8_t x72 = INT8_MAX;
	volatile uint64_t t13 = 40838085LLU;

    t13 = (((x69/x70)-x71)|x72);

    if (t13 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x73 = INT16_MIN;
	static volatile int8_t x74 = INT8_MAX;
	uint32_t x76 = 43U;
	uint32_t t14 = 12857344U;

    t14 = (((x73/x74)-x75)|x76);

    if (t14 != 32511U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = -33664167238LL;
	volatile uint8_t x78 = 3U;
	uint64_t x79 = 237LLU;
	int8_t x80 = INT8_MIN;
	uint64_t t15 = 8692301051110256LLU;

    t15 = (((x77/x78)-x79)|x80);

    if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x85 = INT16_MAX;
	volatile int8_t x86 = -1;
	uint8_t x87 = 0U;
	int32_t t16 = 0;

    t16 = (((x85/x86)-x87)|x88);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = 0;
	volatile int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t17 = 133150917;

    t17 = (((x89/x90)-x91)|x92);

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x97 = -144;
	int8_t x98 = INT8_MIN;
	volatile uint8_t x99 = UINT8_MAX;
	volatile int32_t t18 = -7;

    t18 = (((x97/x98)-x99)|x100);

    if (t18 != -126) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = -1LL;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = -214465636;
	static volatile uint64_t t19 = 7556LLU;

    t19 = (((x101/x102)-x103)|x104);

    if (t19 != 18446744073709550693LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x105 = UINT32_MAX;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	uint64_t x108 = 109405LLU;

    t20 = (((x105/x106)-x107)|x108);

    if (t20 != 109407LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = INT8_MAX;
	int8_t x111 = 0;
	int64_t x112 = INT64_MIN;
	int64_t t21 = -263482LL;

    t21 = (((x109/x110)-x111)|x112);

    if (t21 != -9223372036854775292LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x115 = INT16_MAX;
	int64_t x116 = -149568866951LL;
	int64_t t22 = -12481920344LL;

    t22 = (((x113/x114)-x115)|x116);

    if (t22 != -18951LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x121 = UINT32_MAX;
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	volatile uint32_t t23 = 49U;

    t23 = (((x121/x122)-x123)|x124);

    if (t23 != 4294934657U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x125 = UINT8_MAX;
	static volatile uint8_t x126 = 1U;
	int16_t x127 = -378;
	int16_t x128 = -20;
	static volatile int32_t t24 = 19859;

    t24 = (((x125/x126)-x127)|x128);

    if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x130 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	volatile int32_t t25 = 3507;

    t25 = (((x129/x130)-x131)|x132);

    if (t25 != -65409) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x133 = INT64_MAX;
	int64_t x134 = 104035163433110LL;
	int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;

    t26 = (((x133/x134)-x135)|x136);

    if (t26 != -47LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x137 = UINT8_MAX;
	int32_t x138 = 4021067;
	uint64_t x139 = UINT64_MAX;
	uint32_t x140 = 1701964U;
	volatile uint64_t t27 = 125408282033LLU;

    t27 = (((x137/x138)-x139)|x140);

    if (t27 != 1701965LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x142 = -9;
	int32_t x144 = -1;
	int32_t t28 = -63;

    t28 = (((x141/x142)-x143)|x144);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x145 = 5504742U;
	int8_t x146 = INT8_MAX;
	static uint64_t x147 = 8543727418187LLU;
	int32_t x148 = 2;

    t29 = (((x145/x146)-x147)|x148);

    if (t29 != 18446735529982176775LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x149 = 11825638839257017LLU;
	uint32_t x151 = UINT32_MAX;

    t30 = (((x149/x150)-x151)|x152);

    if (t30 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x153 = 11370115;
	int32_t x155 = INT32_MIN;

    t31 = (((x153/x154)-x155)|x156);

    if (t31 != 2147483775LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x157 = 30616U;
	int16_t x158 = INT16_MAX;
	int32_t x159 = INT32_MIN;
	static volatile int8_t x160 = INT8_MIN;

    t32 = (((x157/x158)-x159)|x160);

    if (t32 != 4294967168U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x162 = 895;
	uint32_t x163 = 39254U;
	uint16_t x164 = UINT16_MAX;
	uint32_t t33 = UINT32_MAX;

    t33 = (((x161/x162)-x163)|x164);

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;
	static int8_t x168 = 1;
	int64_t t34 = -107251872860LL;

    t34 = (((x165/x166)-x167)|x168);

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x169 = UINT32_MAX;
	volatile uint16_t x170 = 17U;
	volatile uint32_t x171 = 4U;
	uint16_t x172 = UINT16_MAX;
	uint32_t t35 = 29U;

    t35 = (((x169/x170)-x171)|x172);

    if (t35 != 252706815U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	int8_t x176 = 1;
	static int64_t t36 = 245170822793862142LL;

    t36 = (((x173/x174)-x175)|x176);

    if (t36 != 129LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x177 = 251234338U;
	uint64_t x179 = 15876077270395614LLU;
	uint64_t x180 = 104585LLU;
	static volatile uint64_t t37 = 32444235LLU;

    t37 = (((x177/x178)-x179)|x180);

    if (t37 != 18430867996439190955LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x181 = UINT64_MAX;
	int32_t x182 = -176769125;
	static volatile int32_t x183 = 1062321;
	volatile uint64_t t38 = 14588857750162LLU;

    t38 = (((x181/x182)-x183)|x184);

    if (t38 != 18446744073708489296LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t39 = 220630941494761LLU;

    t39 = (((x185/x186)-x187)|x188);

    if (t39 != 4410884960255LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x189 = 1;
	uint64_t x190 = 215055566822621335LLU;
	uint8_t x191 = 80U;
	static uint64_t t40 = 11956576316320LLU;

    t40 = (((x189/x190)-x191)|x192);

    if (t40 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x198 = 1U;
	int8_t x199 = 22;
	volatile int8_t x200 = -1;

    t41 = (((x197/x198)-x199)|x200);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x201 = UINT8_MAX;
	volatile int32_t x202 = -1;
	volatile uint8_t x203 = UINT8_MAX;
	static int16_t x204 = -1;
	volatile int32_t t42 = 1749359;

    t42 = (((x201/x202)-x203)|x204);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x205 = 26;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t t43 = -252619641;

    t43 = (((x205/x206)-x207)|x208);

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x210 = UINT64_MAX;
	volatile int16_t x211 = 2;
	uint64_t x212 = 12655482LLU;

    t44 = (((x209/x210)-x211)|x212);

    if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x213 = 0U;
	int32_t x214 = -292363632;
	volatile int64_t x215 = INT64_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile int64_t t45 = -10390069LL;

    t45 = (((x213/x214)-x215)|x216);

    if (t45 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x217 = 270;
	volatile int32_t x219 = 0;
	volatile uint64_t t46 = 0LLU;

    t46 = (((x217/x218)-x219)|x220);

    if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = -1;
	volatile int8_t x222 = INT8_MIN;
	volatile uint32_t x223 = 4468592U;
	uint8_t x224 = UINT8_MAX;
	static volatile uint32_t t47 = 36765116U;

    t47 = (((x221/x222)-x223)|x224);

    if (t47 != 4290498815U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x227 = -107651;
	volatile int64_t x228 = INT64_MIN;
	volatile uint64_t t48 = 1958931393LLU;

    t48 = (((x225/x226)-x227)|x228);

    if (t48 != 9223372036854883459LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x229 = 1U;
	uint8_t x230 = 26U;
	volatile int8_t x231 = INT8_MAX;
	uint16_t x232 = 68U;
	int32_t t49 = -1704451;

    t49 = (((x229/x230)-x231)|x232);

    if (t49 != -59) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x234 = 73;
	int8_t x235 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	volatile int32_t t50 = INT32_MAX;

    t50 = (((x233/x234)-x235)|x236);

    if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	int64_t x238 = 13911936342505005LL;
	int64_t x239 = -1LL;
	uint8_t x240 = 1U;
	static volatile uint64_t t51 = 56837188760714558LLU;

    t51 = (((x237/x238)-x239)|x240);

    if (t51 != 1327LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x242 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;
	static int64_t t52 = 0LL;

    t52 = (((x241/x242)-x243)|x244);

    if (t52 != -25769803777LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x245 = 0U;
	volatile int64_t x247 = -1LL;
	int8_t x248 = INT8_MAX;
	static int64_t t53 = 305477LL;

    t53 = (((x245/x246)-x247)|x248);

    if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = -1;
	static int64_t x250 = INT64_MIN;
	uint8_t x251 = 1U;
	int64_t x252 = -1LL;
	int64_t t54 = 2381845LL;

    t54 = (((x249/x250)-x251)|x252);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	int32_t x256 = -1;
	uint64_t t55 = UINT64_MAX;

    t55 = (((x253/x254)-x255)|x256);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x257 = 1;
	static int16_t x258 = 2516;
	static int8_t x259 = INT8_MIN;
	int16_t x260 = 3;
	volatile int32_t t56 = -3;

    t56 = (((x257/x258)-x259)|x260);

    if (t56 != 131) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x262 = INT8_MAX;
	volatile int8_t x263 = 1;
	static int32_t t57 = -953432;

    t57 = (((x261/x262)-x263)|x264);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x265 = -41;
	static volatile int64_t x266 = INT64_MIN;
	uint32_t x267 = 11810U;
	static int8_t x268 = INT8_MIN;
	volatile int64_t t58 = 2241013080915801LL;

    t58 = (((x265/x266)-x267)|x268);

    if (t58 != -34LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x269 = 456U;
	static int8_t x270 = 1;
	uint32_t x272 = 572083378U;
	volatile uint32_t t59 = 105172234U;

    t59 = (((x269/x270)-x271)|x272);

    if (t59 != 2719567354U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = 5U;
	uint64_t x275 = 517347261222582862LLU;
	int16_t x276 = -1;
	uint64_t t60 = UINT64_MAX;

    t60 = (((x273/x274)-x275)|x276);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x279 = 3U;
	uint32_t x280 = UINT32_MAX;

    t61 = (((x277/x278)-x279)|x280);

    if (t61 != -115964116993LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x285 = INT8_MAX;
	uint16_t x286 = 2615U;
	static uint16_t x287 = 4667U;
	int16_t x288 = -3;
	volatile int32_t t62 = -1735;

    t62 = (((x285/x286)-x287)|x288);

    if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x289 = INT64_MIN;
	uint8_t x290 = 36U;
	volatile uint8_t x291 = UINT8_MAX;
	uint64_t x292 = UINT64_MAX;

    t63 = (((x289/x290)-x291)|x292);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x293 = 812285070994998LL;
	static uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	static uint16_t x296 = 361U;
	volatile uint64_t t64 = 13309619348681921LLU;

    t64 = (((x293/x294)-x295)|x296);

    if (t64 != 361LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x297 = 601501889;
	uint32_t x298 = 12U;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MIN;
	int64_t t65 = 0LL;

    t65 = (((x297/x298)-x299)|x300);

    if (t65 != -26LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x305 = 3443U;
	int32_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -1;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = (((x305/x306)-x307)|x308);

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x313 = -1;
	volatile int8_t x314 = -37;
	static int32_t x316 = 10;
	volatile int32_t t67 = 8108944;

    t67 = (((x313/x314)-x315)|x316);

    if (t67 != -32757) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x317 = INT16_MIN;
	static int16_t x319 = INT16_MAX;
	uint64_t x320 = 8494673984502572312LLU;

    t68 = (((x317/x318)-x319)|x320);

    if (t68 != 8494673984502572313LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x321 = -1;
	static int32_t x322 = -1;
	int8_t x323 = -1;
	uint64_t x324 = 41706360663931LLU;

    t69 = (((x321/x322)-x323)|x324);

    if (t69 != 41706360663931LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x326 = INT16_MIN;
	static int64_t x327 = 111LL;

    t70 = (((x325/x326)-x327)|x328);

    if (t70 != -111LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x329 = 2U;
	static uint8_t x332 = UINT8_MAX;
	volatile uint32_t t71 = UINT32_MAX;

    t71 = (((x329/x330)-x331)|x332);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x335 = 28406U;
	static uint32_t x336 = UINT32_MAX;
	uint64_t t72 = 2127101711036LLU;

    t72 = (((x333/x334)-x335)|x336);

    if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x338 = INT64_MAX;
	static uint32_t x339 = 9835U;

    t73 = (((x337/x338)-x339)|x340);

    if (t73 != -8257LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x341 = 5U;
	static volatile int8_t x342 = INT8_MAX;
	int16_t x343 = 568;
	static int16_t x344 = -2;
	static uint32_t t74 = 885U;

    t74 = (((x341/x342)-x343)|x344);

    if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x349 = UINT16_MAX;
	static volatile uint32_t x350 = UINT32_MAX;
	int16_t x351 = 1;
	int8_t x352 = INT8_MIN;
	uint32_t t75 = UINT32_MAX;

    t75 = (((x349/x350)-x351)|x352);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x354 = -1;
	uint16_t x355 = 2276U;
	int64_t x356 = INT64_MIN;
	int64_t t76 = -17LL;

    t76 = (((x353/x354)-x355)|x356);

    if (t76 != -2403LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x359 = 2U;
	volatile int32_t x360 = 554000;
	int32_t t77 = 41109515;

    t77 = (((x357/x358)-x359)|x360);

    if (t77 != 554033) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = -1LL;
	volatile int16_t x362 = INT16_MIN;
	int16_t x364 = -6;
	static uint64_t t78 = 160656771LLU;

    t78 = (((x361/x362)-x363)|x364);

    if (t78 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x365 = -1LL;
	int32_t x366 = -1;
	int8_t x368 = -51;
	static int64_t t79 = -69285942428718903LL;

    t79 = (((x365/x366)-x367)|x368);

    if (t79 != -51LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x370 = 8502U;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;

    t80 = (((x369/x370)-x371)|x372);

    if (t80 != 4294967209U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x373 = 29LLU;
	uint64_t x375 = 1378258703048LLU;
	int32_t x376 = 110100616;
	static uint64_t t81 = 7472174501370795LLU;

    t81 = (((x373/x374)-x375)|x376);

    if (t81 != 18446742695560949176LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x377 = INT8_MIN;
	static int64_t x378 = 1463460675LL;
	int64_t x379 = INT64_MAX;
	int32_t x380 = -28;
	volatile int64_t t82 = 1LL;

    t82 = (((x377/x378)-x379)|x380);

    if (t82 != -27LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x381 = 29;
	volatile uint8_t x382 = 28U;
	volatile int16_t x383 = -1;
	static uint32_t x384 = 184573U;
	static uint32_t t83 = 2222321U;

    t83 = (((x381/x382)-x383)|x384);

    if (t83 != 184575U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x385 = INT16_MIN;
	static uint16_t x386 = 26U;
	static int64_t x387 = INT64_MIN;

    t84 = (((x385/x386)-x387)|x388);

    if (t84 != -43LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x390 = -1;
	int32_t x392 = 195482336;
	uint64_t t85 = 54LLU;

    t85 = (((x389/x390)-x391)|x392);

    if (t85 != 195482337LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = INT16_MIN;
	static int64_t x394 = INT64_MIN;
	static int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MAX;

    t86 = (((x393/x394)-x395)|x396);

    if (t86 != 2147483775LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x397 = INT64_MIN;
	int64_t x399 = -7134433175373844LL;
	static int64_t x400 = -2491117827041359486LL;
	volatile int64_t t87 = 4122328566046478565LL;

    t87 = (((x397/x398)-x399)|x400);

    if (t87 != -2486587624351889001LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x402 = 3U;
	static uint32_t x403 = 3111U;
	int16_t x404 = -1;
	volatile uint32_t t88 = UINT32_MAX;

    t88 = (((x401/x402)-x403)|x404);

    if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x405 = 594U;
	uint16_t x407 = 763U;
	int32_t x408 = -1;
	uint32_t t89 = UINT32_MAX;

    t89 = (((x405/x406)-x407)|x408);

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x409 = UINT64_MAX;
	int64_t x410 = -113182LL;
	int64_t x411 = -10894713210LL;
	int8_t x412 = 1;
	uint64_t t90 = 754561432709756LLU;

    t90 = (((x409/x410)-x411)|x412);

    if (t90 != 10894713211LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x413 = 365226LLU;
	int64_t x415 = -1LL;
	int16_t x416 = 1;
	uint64_t t91 = 719LLU;

    t91 = (((x413/x414)-x415)|x416);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x417 = INT8_MAX;
	uint8_t x418 = 1U;
	uint16_t x419 = 0U;
	uint32_t t92 = 5U;

    t92 = (((x417/x418)-x419)|x420);

    if (t92 != 1673727U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x421 = -29LL;
	uint32_t x422 = 177162U;
	uint32_t x423 = 1317416956U;
	uint64_t x424 = 3748337LLU;

    t93 = (((x421/x422)-x423)|x424);

    if (t93 != 18446744072392143349LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x425 = INT64_MIN;
	static int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;
	volatile int64_t t94 = 1723781635462LL;

    t94 = (((x425/x426)-x427)|x428);

    if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x433 = 22U;
	uint64_t x434 = UINT64_MAX;
	static int32_t x435 = 14566674;
	uint64_t x436 = 418887941752975396LLU;
	volatile uint64_t t95 = 186186513830566493LLU;

    t95 = (((x433/x434)-x435)|x436);

    if (t95 != 18446744073707584238LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x437 = -400619528LL;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	static volatile int64_t x440 = INT64_MAX;
	int64_t t96 = -22588543774428LL;

    t96 = (((x437/x438)-x439)|x440);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	static uint8_t x442 = UINT8_MAX;
	static int16_t x444 = -15;
	volatile uint32_t t97 = 283308U;

    t97 = (((x441/x442)-x443)|x444);

    if (t97 != 4294967281U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x445 = INT64_MIN;
	uint64_t x448 = 488090407635990LLU;
	static uint64_t t98 = 111344LLU;

    t98 = (((x445/x446)-x447)|x448);

    if (t98 != 18446176633233469335LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x449 = INT32_MAX;
	int16_t x450 = 3;
	static int16_t x451 = 1;
	int16_t x452 = 12;
	static int32_t t99 = 1;

    t99 = (((x449/x450)-x451)|x452);

    if (t99 != 715827885) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = INT64_MAX;
	int16_t x459 = -9528;
	int16_t x460 = INT16_MIN;
	int64_t t100 = 11LL;

    t100 = (((x457/x458)-x459)|x460);

    if (t100 != -16522LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x461 = 511240695412172LLU;
	uint64_t x462 = 7179325798LLU;
	volatile uint16_t x463 = 25U;
	volatile uint64_t t101 = 232501LLU;

    t101 = (((x461/x462)-x463)|x464);

    if (t101 != 8118425435LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x465 = INT32_MIN;
	volatile int64_t x467 = -6LL;
	int32_t x468 = INT32_MIN;

    t102 = (((x465/x466)-x467)|x468);

    if (t102 != -2147418106LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x469 = UINT16_MAX;
	uint64_t x470 = 929938157968LLU;
	volatile uint16_t x471 = 47U;

    t103 = (((x469/x470)-x471)|x472);

    if (t103 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x473 = INT64_MIN;
	int64_t x475 = -1LL;
	int8_t x476 = INT8_MIN;
	int64_t t104 = -8969LL;

    t104 = (((x473/x474)-x475)|x476);

    if (t104 != -128LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x477 = 0U;
	int64_t x478 = -1LL;
	static int64_t x479 = 0LL;
	static int8_t x480 = -40;

    t105 = (((x477/x478)-x479)|x480);

    if (t105 != -40LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x482 = INT32_MAX;
	volatile int16_t x483 = -17;
	volatile int32_t t106 = 76;

    t106 = (((x481/x482)-x483)|x484);

    if (t106 != 85) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x485 = 97U;
	int16_t x487 = -1;
	int32_t x488 = -1;
	static int32_t t107 = 107;

    t107 = (((x485/x486)-x487)|x488);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x494 = 7;
	int8_t x495 = -2;
	volatile int64_t x496 = 25988LL;
	int64_t t108 = -203086721395659LL;

    t108 = (((x493/x494)-x495)|x496);

    if (t108 != 26524LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x498 = UINT64_MAX;
	int32_t x500 = -715041764;
	static volatile uint64_t t109 = 2571853892344002174LLU;

    t109 = (((x497/x498)-x499)|x500);

    if (t109 != 18446744072994509853LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x501 = INT32_MIN;
	uint8_t x503 = UINT8_MAX;
	static volatile uint64_t t110 = UINT64_MAX;

    t110 = (((x501/x502)-x503)|x504);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x506 = INT8_MIN;
	int16_t x507 = -1;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (((x505/x506)-x507)|x508);

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	int64_t x511 = -289348LL;
	int64_t x512 = -1LL;

    t112 = (((x509/x510)-x511)|x512);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x517 = UINT16_MAX;
	int64_t x518 = INT64_MIN;
	uint32_t x519 = UINT32_MAX;
	int8_t x520 = 1;
	static int64_t t113 = -3LL;

    t113 = (((x517/x518)-x519)|x520);

    if (t113 != -4294967295LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x521 = 433;
	int16_t x522 = -1;
	int64_t x524 = INT64_MIN;
	int64_t t114 = -613887407881LL;

    t114 = (((x521/x522)-x523)|x524);

    if (t114 != -9223372032559808944LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x525 = 0;
	int16_t x526 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	static volatile int16_t x528 = -1;

    t115 = (((x525/x526)-x527)|x528);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x530 = -7;
	int8_t x532 = -1;
	static volatile int32_t t116 = -351478;

    t116 = (((x529/x530)-x531)|x532);

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = INT32_MAX;
	int32_t x534 = INT32_MIN;
	int8_t x536 = INT8_MIN;
	int32_t t117 = -1414;

    t117 = (((x533/x534)-x535)|x536);

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x537 = -1;
	int16_t x539 = INT16_MIN;
	int8_t x540 = 21;
	int32_t t118 = 9021;

    t118 = (((x537/x538)-x539)|x540);

    if (t118 != 32789) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = INT8_MAX;
	uint16_t x542 = 61U;
	int16_t x543 = INT16_MIN;
	volatile int32_t x544 = INT32_MIN;
	static volatile int32_t t119 = 10753521;

    t119 = (((x541/x542)-x543)|x544);

    if (t119 != -2147450878) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = -1LL;
	uint32_t x546 = 772827268U;
	int8_t x548 = INT8_MIN;
	volatile int64_t t120 = -5LL;

    t120 = (((x545/x546)-x547)|x548);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x550 = INT64_MIN;
	static uint8_t x551 = 2U;
	uint8_t x552 = UINT8_MAX;

    t121 = (((x549/x550)-x551)|x552);

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x553 = 58126267LLU;
	static volatile int8_t x554 = 50;
	int32_t x555 = INT32_MIN;
	static volatile int64_t x556 = -3368245688LL;
	uint64_t t122 = 29825739554LLU;

    t122 = (((x553/x554)-x555)|x556);

    if (t122 != 18446744072488861533LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x557 = -1;
	volatile int64_t x558 = -115387174583860LL;
	int8_t x559 = 32;
	int32_t x560 = INT32_MAX;
	static int64_t t123 = -413532286LL;

    t123 = (((x557/x558)-x559)|x560);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x561 = -13;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = 653U;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t124 = -104;

    t124 = (((x561/x562)-x563)|x564);

    if (t124 != -653) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x565 = 1U;
	int16_t x566 = -6;
	volatile int64_t x567 = -4094224178LL;
	static uint8_t x568 = 11U;
	int64_t t125 = -1187476LL;

    t125 = (((x565/x566)-x567)|x568);

    if (t125 != 4094224187LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x574 = -1;
	int32_t x575 = INT32_MIN;
	volatile int16_t x576 = 1746;
	volatile int32_t t126 = -120651727;

    t126 = (((x573/x574)-x575)|x576);

    if (t126 != 2147483355) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x577 = INT64_MIN;
	int64_t x578 = INT64_MAX;
	int16_t x579 = -97;
	int8_t x580 = INT8_MIN;
	volatile int64_t t127 = -805189507471799736LL;

    t127 = (((x577/x578)-x579)|x580);

    if (t127 != -32LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x581 = 2238171330159LLU;
	volatile uint64_t x582 = UINT64_MAX;
	uint16_t x583 = 41U;
	int8_t x584 = 0;
	uint64_t t128 = 116695340LLU;

    t128 = (((x581/x582)-x583)|x584);

    if (t128 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x586 = -238;
	uint32_t x587 = 220577579U;
	int32_t x588 = 1048215014;
	static volatile uint32_t t129 = 3993U;

    t129 = (((x585/x586)-x587)|x588);

    if (t129 != 4277829111U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x589 = 37U;
	int8_t x591 = INT8_MAX;
	int32_t t130 = 195672;

    t130 = (((x589/x590)-x591)|x592);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x594 = -1;
	volatile int16_t x596 = INT16_MIN;
	volatile uint64_t t131 = 603278012638LLU;

    t131 = (((x593/x594)-x595)|x596);

    if (t131 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x597 = INT8_MIN;
	int32_t x598 = INT32_MIN;
	volatile int32_t x599 = -8244;
	static volatile uint16_t x600 = 580U;
	volatile int32_t t132 = 942;

    t132 = (((x597/x598)-x599)|x600);

    if (t132 != 8820) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x602 = -1;
	int8_t x603 = INT8_MIN;
	int64_t x604 = -1LL;
	static int64_t t133 = -10LL;

    t133 = (((x601/x602)-x603)|x604);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x614 = INT32_MAX;
	uint32_t x615 = UINT32_MAX;
	int8_t x616 = -1;
	int64_t t134 = 67422790870015963LL;

    t134 = (((x613/x614)-x615)|x616);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x622 = 18410;
	uint64_t x623 = 727454LLU;
	int16_t x624 = INT16_MIN;
	static uint64_t t135 = 15309097323371959LLU;

    t135 = (((x621/x622)-x623)|x624);

    if (t135 != 18446744073709548977LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x625 = INT8_MAX;
	static int8_t x626 = -12;
	int32_t x628 = -1;
	static int32_t t136 = -482130462;

    t136 = (((x625/x626)-x627)|x628);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x633 = 1014948;
	volatile int16_t x634 = 982;
	static int16_t x635 = -1;
	int32_t x636 = -1;
	int32_t t137 = -5;

    t137 = (((x633/x634)-x635)|x636);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x641 = 6LLU;
	uint16_t x642 = 302U;
	volatile int64_t x643 = -33474891LL;

    t138 = (((x641/x642)-x643)|x644);

    if (t138 != 9223372036888250699LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x646 = 564936567588484LLU;
	int8_t x648 = INT8_MIN;
	volatile uint64_t t139 = 23689377868LLU;

    t139 = (((x645/x646)-x647)|x648);

    if (t139 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x649 = UINT16_MAX;
	int32_t x650 = -9792;
	int16_t x651 = INT16_MIN;

    t140 = (((x649/x650)-x651)|x652);

    if (t140 != -6) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x653 = 0U;
	volatile int64_t x655 = -1LL;
	volatile uint8_t x656 = 0U;
	volatile int64_t t141 = -64995567LL;

    t141 = (((x653/x654)-x655)|x656);

    if (t141 != 1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x657 = INT32_MAX;
	volatile int8_t x659 = -1;
	uint16_t x660 = UINT16_MAX;

    t142 = (((x657/x658)-x659)|x660);

    if (t142 != 65535LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x661 = 1959;
	volatile int32_t x662 = -37930;
	static int32_t t143 = -4944;

    t143 = (((x661/x662)-x663)|x664);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x665 = 7U;
	uint8_t x667 = 67U;
	volatile int32_t x668 = INT32_MIN;

    t144 = (((x665/x666)-x667)|x668);

    if (t144 != -67) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x669 = UINT32_MAX;
	static volatile int64_t x670 = 11LL;
	static int32_t x671 = -22080;
	volatile uint8_t x672 = 14U;

    t145 = (((x669/x670)-x671)|x672);

    if (t145 != 390473662LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x673 = -724387796630543046LL;
	int16_t x674 = 1;
	static int16_t x675 = -91;
	int8_t x676 = -1;
	int64_t t146 = -60936282279LL;

    t146 = (((x673/x674)-x675)|x676);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x677 = -1;
	int32_t x678 = INT32_MIN;
	uint32_t x679 = 985U;
	uint32_t x680 = 114982U;

    t147 = (((x677/x678)-x679)|x680);

    if (t147 != 4294966567U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MAX;
	int32_t x683 = INT32_MAX;
	int32_t t148 = 615;

    t148 = (((x681/x682)-x683)|x684);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x689 = INT8_MIN;
	uint32_t x690 = 131U;
	volatile int64_t x691 = -98806044012453507LL;
	uint32_t x692 = 26U;
	int64_t t149 = -4525299076645110558LL;

    t149 = (((x689/x690)-x691)|x692);

    if (t149 != 98806044045239515LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x693 = 374526843U;
	int32_t x695 = 2293;
	static int32_t x696 = -1;
	uint32_t t150 = UINT32_MAX;

    t150 = (((x693/x694)-x695)|x696);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x697 = 1;
	static uint16_t x698 = 605U;
	int16_t x699 = INT16_MIN;
	uint8_t x700 = 72U;
	int32_t t151 = 77531308;

    t151 = (((x697/x698)-x699)|x700);

    if (t151 != 32840) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x701 = -1;
	volatile uint64_t x702 = UINT64_MAX;
	static int16_t x703 = 0;
	static int64_t x704 = -1LL;

    t152 = (((x701/x702)-x703)|x704);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x709 = INT8_MAX;
	int16_t x710 = 115;
	static int32_t x711 = 434;
	volatile int32_t x712 = -1;
	static volatile int32_t t153 = -467328;

    t153 = (((x709/x710)-x711)|x712);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x714 = -1;
	int16_t x715 = -1;
	static int32_t t154 = -30;

    t154 = (((x713/x714)-x715)|x716);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x717 = INT8_MIN;
	int16_t x718 = INT16_MIN;
	uint8_t x719 = UINT8_MAX;
	volatile int8_t x720 = -1;
	int32_t t155 = -1038781460;

    t155 = (((x717/x718)-x719)|x720);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x721 = INT8_MIN;
	static int16_t x722 = -1;
	uint64_t x723 = 23171400272LLU;
	int32_t x724 = INT32_MIN;
	static uint64_t t156 = 6991968103310LLU;

    t156 = (((x721/x722)-x723)|x724);

    if (t156 != 18446744072012987952LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x725 = INT32_MIN;
	uint64_t x726 = 9620983884372LLU;
	static uint8_t x728 = 0U;
	volatile uint64_t t157 = 2013324516488680045LLU;

    t157 = (((x725/x726)-x727)|x728);

    if (t157 != 1917346LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x734 = INT8_MIN;
	int16_t x735 = INT16_MAX;
	int32_t x736 = INT32_MIN;
	int32_t t158 = 168497263;

    t158 = (((x733/x734)-x735)|x736);

    if (t158 != -32837) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile uint16_t x739 = UINT16_MAX;
	volatile int32_t x740 = 2601286;
	volatile int32_t t159 = 2;

    t159 = (((x737/x738)-x739)|x740);

    if (t159 != -20146) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x741 = UINT8_MAX;
	static uint8_t x742 = 89U;
	uint64_t x744 = UINT64_MAX;

    t160 = (((x741/x742)-x743)|x744);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x745 = 111;
	uint8_t x747 = 4U;
	volatile int32_t x748 = 1549;
	volatile uint64_t t161 = 394686185452009336LLU;

    t161 = (((x745/x746)-x747)|x748);

    if (t161 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x749 = 55;
	static int16_t x750 = INT16_MAX;
	volatile int16_t x751 = INT16_MIN;
	int32_t t162 = -15;

    t162 = (((x749/x750)-x751)|x752);

    if (t162 != 32895) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x753 = -1;
	uint64_t x754 = 1048714180128320285LLU;
	volatile int8_t x755 = INT8_MIN;
	uint32_t x756 = UINT32_MAX;
	uint64_t t163 = 2191368916900LLU;

    t163 = (((x753/x754)-x755)|x756);

    if (t163 != 4294967295LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x760 = INT8_MIN;
	static volatile int64_t t164 = 429619LL;

    t164 = (((x757/x758)-x759)|x760);

    if (t164 != -106LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x762 = INT8_MAX;
	static uint8_t x763 = 1U;
	static volatile uint64_t x764 = 11503691LLU;

    t165 = (((x761/x762)-x763)|x764);

    if (t165 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x765 = INT64_MIN;
	uint64_t x766 = UINT64_MAX;
	int64_t x767 = 350LL;
	int64_t x768 = -811284LL;

    t166 = (((x765/x766)-x767)|x768);

    if (t166 != 18446744073709551342LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x769 = INT64_MAX;
	uint8_t x770 = 43U;
	static int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	static int64_t t167 = -16577670926801LL;

    t167 = (((x769/x770)-x771)|x772);

    if (t167 != -16766LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x773 = 104U;
	uint64_t x774 = UINT64_MAX;
	uint64_t x775 = 10293844LLU;
	static volatile uint16_t x776 = UINT16_MAX;
	uint64_t t168 = 103868775899LLU;

    t168 = (((x773/x774)-x775)|x776);

    if (t168 != 18446744073699262463LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x778 = -1;
	static volatile int64_t x779 = -1436026052238LL;
	int64_t x780 = 3457721387983241780LL;
	volatile int64_t t169 = 284LL;

    t169 = (((x777/x778)-x779)|x780);

    if (t169 != 3457721413900934847LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x781 = INT16_MIN;
	uint8_t x782 = 19U;
	static int32_t x783 = 3416;
	int16_t x784 = INT16_MIN;
	volatile int32_t t170 = 605;

    t170 = (((x781/x782)-x783)|x784);

    if (t170 != -5140) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x789 = INT16_MAX;
	static int8_t x791 = INT8_MAX;
	uint32_t x792 = 315591U;
	static int64_t t171 = 405941LL;

    t171 = (((x789/x790)-x791)|x792);

    if (t171 != -57LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x793 = 3;
	int64_t x794 = INT64_MIN;
	uint16_t x796 = 33U;

    t172 = (((x793/x794)-x795)|x796);

    if (t172 != 161LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x798 = INT16_MAX;
	int8_t x800 = INT8_MIN;
	int64_t t173 = -343LL;

    t173 = (((x797/x798)-x799)|x800);

    if (t173 != -7LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x801 = INT64_MIN;
	int32_t x802 = INT32_MIN;
	static uint16_t x803 = 2U;
	int16_t x804 = -1;
	volatile int64_t t174 = 35LL;

    t174 = (((x801/x802)-x803)|x804);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x805 = 1766723;
	int8_t x806 = INT8_MIN;
	int16_t x807 = INT16_MIN;
	uint64_t t175 = UINT64_MAX;

    t175 = (((x805/x806)-x807)|x808);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x810 = 736355U;
	uint32_t x811 = 280U;
	volatile uint32_t x812 = 3024U;
	volatile uint32_t t176 = 2392U;

    t176 = (((x809/x810)-x811)|x812);

    if (t176 != 4294967288U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x813 = INT64_MIN;
	volatile int32_t x814 = -22;
	volatile uint32_t x815 = UINT32_MAX;
	int8_t x816 = 23;
	volatile int64_t t177 = 649820778013LL;

    t177 = (((x813/x814)-x815)|x816);

    if (t177 != 419244179198431607LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x822 = INT8_MAX;
	int8_t x823 = INT8_MIN;
	uint16_t x824 = 6U;

    t178 = (((x821/x822)-x823)|x824);

    if (t178 != 134) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x825 = -1;
	static uint64_t x826 = 15723409050368LLU;
	static int16_t x827 = INT16_MAX;
	uint64_t t179 = UINT64_MAX;

    t179 = (((x825/x826)-x827)|x828);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x830 = 10346U;
	int8_t x831 = INT8_MIN;
	int8_t x832 = INT8_MAX;
	volatile int32_t t180 = 2065169;

    t180 = (((x829/x830)-x831)|x832);

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x833 = 1184677789574028LLU;
	uint64_t x834 = 1127406853407048780LLU;
	int32_t x835 = INT32_MIN;
	static int8_t x836 = -1;
	uint64_t t181 = UINT64_MAX;

    t181 = (((x833/x834)-x835)|x836);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x839 = INT32_MIN;
	volatile uint32_t t182 = 1643947613U;

    t182 = (((x837/x838)-x839)|x840);

    if (t182 != 2147516415U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x841 = INT64_MIN;
	volatile uint32_t x842 = UINT32_MAX;
	int8_t x844 = 16;
	static int64_t t183 = -135680LL;

    t183 = (((x841/x842)-x843)|x844);

    if (t183 != -2147483623LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x845 = INT64_MIN;
	uint64_t x846 = UINT64_MAX;
	static int16_t x847 = -54;
	uint64_t t184 = UINT64_MAX;

    t184 = (((x845/x846)-x847)|x848);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = -2039;
	volatile int8_t x850 = INT8_MIN;
	uint8_t x851 = 5U;
	int64_t x852 = INT64_MAX;

    t185 = (((x849/x850)-x851)|x852);

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x853 = INT32_MIN;
	int32_t x855 = 18986;
	static uint8_t x856 = 6U;

    t186 = (((x853/x854)-x855)|x856);

    if (t186 != 2147464662LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x858 = -22;
	int64_t x859 = 48LL;
	static volatile uint64_t t187 = UINT64_MAX;

    t187 = (((x857/x858)-x859)|x860);

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x861 = 111144706889LL;
	int64_t x862 = INT64_MIN;
	uint64_t x863 = UINT64_MAX;

    t188 = (((x861/x862)-x863)|x864);

    if (t188 != 587LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x865 = 1283;
	int16_t x866 = -1;
	static uint8_t x867 = UINT8_MAX;
	volatile int8_t x868 = INT8_MAX;
	volatile int32_t t189 = -59575453;

    t189 = (((x865/x866)-x867)|x868);

    if (t189 != -1537) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int64_t x869 = 20259034LL;
	static volatile uint64_t x871 = 2107297181864494LLU;
	int64_t x872 = INT64_MIN;
	volatile uint64_t t190 = 1901354LLU;

    t190 = (((x869/x870)-x871)|x872);

    if (t190 != 18444636776517557605LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x874 = INT64_MIN;
	uint64_t x875 = 4874482286LLU;
	volatile int16_t x876 = 286;
	uint64_t t191 = 10725924746LLU;

    t191 = (((x873/x874)-x875)|x876);

    if (t191 != 18446744068835069342LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x877 = INT32_MIN;
	int64_t x879 = -198065181607LL;
	int64_t t192 = -56751355LL;

    t192 = (((x877/x878)-x879)|x880);

    if (t192 != 198065127423LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x881 = INT16_MIN;
	int32_t x882 = -1;
	int8_t x883 = 2;
	int16_t x884 = 0;

    t193 = (((x881/x882)-x883)|x884);

    if (t193 != 32766) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x885 = INT8_MIN;
	int64_t x888 = -1LL;
	volatile int64_t t194 = 777063486747966LL;

    t194 = (((x885/x886)-x887)|x888);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x889 = INT8_MIN;
	volatile int32_t x890 = 22128268;
	int64_t x892 = -53201963LL;

    t195 = (((x889/x890)-x891)|x892);

    if (t195 != -9LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x893 = INT16_MIN;
	int8_t x895 = INT8_MIN;
	static int16_t x896 = 1;
	volatile int32_t t196 = 55;

    t196 = (((x893/x894)-x895)|x896);

    if (t196 != 129) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x897 = INT32_MAX;
	static int32_t x898 = 1;
	int64_t x899 = -1LL;
	int64_t t197 = -2830319268847362LL;

    t197 = (((x897/x898)-x899)|x900);

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x901 = -1;
	uint32_t x902 = 7026U;
	int64_t x903 = INT64_MAX;
	static int16_t x904 = INT16_MIN;
	volatile int64_t t198 = 3LL;

    t198 = (((x901/x902)-x903)|x904);

    if (t198 != -11295LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x909 = INT64_MIN;
	int32_t x910 = INT32_MIN;
	int64_t x911 = -28119129LL;
	int16_t x912 = 1;

    t199 = (((x909/x910)-x911)|x912);

    if (t199 != 4323086425LL) { NG(); } else { ; }
	
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

