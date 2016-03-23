
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

static volatile int8_t x1 = INT8_MAX;
int32_t x9 = INT32_MIN;
int64_t t3 = INT64_MAX;
static int8_t x20 = INT8_MIN;
volatile int16_t x23 = INT16_MIN;
uint32_t x25 = 1032196U;
uint32_t x27 = 87U;
uint32_t t7 = UINT32_MAX;
int8_t x46 = INT8_MIN;
uint8_t x51 = 4U;
int32_t t12 = -3655749;
int64_t x56 = 1167250575317745LL;
int64_t t13 = -1LL;
static volatile int16_t x57 = -238;
static uint64_t x64 = 219026586745LLU;
volatile uint64_t t15 = 845289942110LLU;
static int64_t x65 = INT64_MIN;
volatile uint64_t x77 = 179LLU;
int64_t x94 = INT64_MAX;
int32_t t23 = 247;
uint8_t x108 = UINT8_MAX;
uint64_t x118 = UINT64_MAX;
int32_t x130 = 13;
int8_t x131 = INT8_MIN;
static int16_t x138 = 20;
int32_t x141 = INT32_MIN;
volatile int16_t x143 = -1595;
static volatile uint16_t x153 = 90U;
int64_t x157 = INT64_MIN;
int64_t x161 = INT64_MIN;
int64_t x166 = INT64_MIN;
int32_t x175 = 110820;
uint64_t x177 = 87664652372509LLU;
volatile int32_t t38 = -259800406;
static int16_t x196 = INT16_MAX;
uint32_t x198 = UINT32_MAX;
static uint64_t x202 = 242145LLU;
uint16_t x203 = 979U;
int32_t x204 = INT32_MIN;
int32_t x207 = -1;
volatile int64_t t45 = -4090489414529901LL;
int64_t x214 = -889773213LL;
int32_t x217 = -325;
volatile int8_t x222 = 0;
volatile int32_t t49 = 1141;
int64_t x225 = INT64_MIN;
static volatile uint8_t x226 = 19U;
volatile int16_t x236 = 325;
volatile int64_t t52 = 1LL;
int8_t x241 = INT8_MIN;
volatile uint16_t x242 = UINT16_MAX;
int8_t x243 = INT8_MIN;
uint8_t x250 = 0U;
int64_t x254 = INT64_MIN;
int64_t x257 = -70314050LL;
int32_t x260 = -2;
static uint8_t x273 = 23U;
uint8_t x278 = 41U;
uint32_t x280 = UINT32_MAX;
uint8_t x285 = 41U;
uint16_t x292 = UINT16_MAX;
static uint64_t x296 = 25744046718LLU;
int64_t x297 = INT64_MAX;
int64_t x304 = -1LL;
int64_t t68 = 6453869654LL;
int16_t x313 = INT16_MAX;
volatile uint16_t x324 = 4604U;
static int64_t x325 = -1LL;
int32_t t73 = -149639;
uint32_t x331 = 4U;
int16_t x339 = INT16_MIN;
uint8_t x343 = 6U;
int32_t t79 = -1;
uint64_t x353 = 413842042345455836LLU;
int32_t x365 = 2;
static int8_t x369 = -1;
uint32_t t85 = 1668983029U;
volatile int32_t t87 = -162;
uint64_t t88 = 380303778LLU;
int16_t x392 = INT16_MAX;
uint8_t x406 = UINT8_MAX;
static volatile int64_t t93 = 6LL;
uint8_t x409 = 30U;
int16_t x411 = INT16_MIN;
int16_t x413 = INT16_MIN;
int8_t x416 = -1;
volatile int32_t t95 = 61093510;
int32_t x418 = INT32_MIN;
int64_t x420 = INT64_MAX;
volatile int64_t t96 = 0LL;
uint16_t x421 = UINT16_MAX;
int8_t x423 = INT8_MAX;
uint32_t x424 = 201U;
int32_t x426 = -95437;
volatile int32_t t98 = 47;
volatile uint32_t x438 = 63924485U;
int16_t x453 = -92;
static int64_t x457 = INT64_MIN;
int64_t x462 = INT64_MIN;
int32_t x467 = -1;
int8_t x473 = INT8_MIN;
static uint8_t x488 = 53U;
int32_t x492 = 12;
uint8_t x494 = UINT8_MAX;
static int8_t x499 = -1;
int32_t x500 = -1;
uint8_t x502 = 44U;
int32_t x506 = INT32_MIN;
volatile int32_t t114 = -13222991;
static uint8_t x513 = UINT8_MAX;
uint64_t x514 = 21174LLU;
volatile int32_t t115 = -1;
volatile int64_t x524 = 1LL;
int8_t x527 = INT8_MIN;
int8_t x533 = INT8_MIN;
static volatile int8_t x535 = INT8_MAX;
int8_t x536 = INT8_MAX;
volatile uint32_t t122 = 55255642U;
volatile int64_t x545 = 5816487138544279LL;
int32_t x548 = INT32_MAX;
volatile int32_t t123 = -1;
int16_t x550 = 4;
static volatile uint16_t x551 = 2U;
static uint64_t t124 = UINT64_MAX;
uint32_t x556 = UINT32_MAX;
static int64_t x557 = INT64_MIN;
int32_t x560 = -1;
int32_t t126 = -2764977;
int32_t x563 = -1;
int32_t t127 = -234969002;
static int64_t x567 = INT64_MAX;
int32_t x568 = -1;
volatile uint32_t x570 = 12827882U;
volatile int64_t x572 = -1LL;
int32_t x577 = -187808655;
uint8_t x586 = UINT8_MAX;
int64_t x590 = INT64_MAX;
uint16_t x608 = 5U;
int16_t x619 = INT16_MAX;
int16_t x623 = 981;
volatile int32_t t141 = 9355681;
volatile int32_t t142 = 4;
volatile int8_t x638 = INT8_MAX;
int8_t x641 = INT8_MIN;
uint32_t x643 = UINT32_MAX;
uint64_t t149 = 41595636298551847LLU;
static int32_t t150 = 1;
uint8_t x661 = 43U;
static uint8_t x669 = 40U;
int64_t x673 = -1LL;
volatile int32_t t154 = -46127174;
static volatile uint8_t x677 = 15U;
int64_t x683 = -45LL;
int64_t x684 = INT64_MIN;
static int32_t x686 = INT32_MAX;
volatile uint32_t x689 = UINT32_MAX;
int64_t x692 = -1LL;
uint8_t x696 = UINT8_MAX;
int16_t x700 = INT16_MIN;
int64_t t160 = -19503494440646LL;
static uint16_t x710 = 3U;
int8_t x712 = 24;
volatile uint32_t x716 = 787U;
static int64_t t164 = 13636333LL;
volatile int32_t t165 = 4464820;
int8_t x725 = -1;
int8_t x728 = INT8_MIN;
int32_t t167 = 6;
int8_t x735 = -1;
int32_t x740 = -76408461;
uint32_t x758 = 11U;
volatile int16_t x760 = -201;
uint32_t x774 = UINT32_MAX;
uint64_t x775 = 1LLU;
int16_t x776 = 1568;
volatile int16_t x778 = INT16_MIN;
volatile uint32_t x779 = 39146355U;
static uint32_t x787 = 175U;
volatile uint32_t t181 = 2730648U;
int64_t x795 = -27722345056807LL;
volatile uint64_t t184 = 248381LLU;
static uint8_t x804 = 121U;
int16_t x814 = INT16_MIN;
static uint32_t x816 = UINT32_MAX;
int32_t x817 = -1;
uint32_t x818 = 6U;
volatile int32_t x826 = 4062;
static volatile int16_t x829 = 1665;
int8_t x836 = 3;
int16_t x842 = INT16_MIN;
int64_t x844 = INT64_MAX;
int8_t x849 = INT8_MAX;
int8_t x853 = -12;
uint64_t x854 = 1150148LLU;
uint64_t x857 = 1690354998LLU;
int32_t x863 = 113;


void f0(void) {
    	uint64_t x2 = 4049383256LLU;
	uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 325353721LLU;
	uint64_t t0 = 288795835257946301LLU;

    t0 = (((x1==x2)-x3)|x4);

    if (t0 != 325353721LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	static volatile int16_t x6 = INT16_MAX;
	static volatile uint8_t x7 = 12U;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 26237843;

    t1 = (((x5==x6)-x7)|x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -12;
	uint16_t x11 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

    t2 = (((x9==x10)-x11)|x12);

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	int16_t x14 = 243;
	static int16_t x15 = -1;
	int64_t x16 = INT64_MAX;

    t3 = (((x13==x14)-x15)|x16);

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	static uint16_t x18 = 1213U;
	uint64_t x19 = 36503599563749669LLU;
	uint64_t t4 = 28868787341077LLU;

    t4 = (((x17==x18)-x19)|x20);

    if (t4 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MIN;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -5370774LL;

    t5 = (((x21==x22)-x23)|x24);

    if (t5 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x26 = 40U;
	int64_t x28 = INT64_MAX;
	int64_t t6 = INT64_MAX;

    t6 = (((x25==x26)-x27)|x28);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 559;
	volatile uint8_t x30 = 104U;
	static uint32_t x31 = 24951U;
	static volatile uint16_t x32 = UINT16_MAX;

    t7 = (((x29==x30)-x31)|x32);

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = 25;
	int16_t x35 = 1;
	int16_t x36 = -1;
	int32_t t8 = 26431168;

    t8 = (((x33==x34)-x35)|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MAX;
	volatile uint32_t x39 = 1U;
	uint64_t x40 = 42LLU;
	uint64_t t9 = 244711797827LLU;

    t9 = (((x37==x38)-x39)|x40);

    if (t9 != 4294967295LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 666U;
	uint64_t x42 = 232LLU;
	int32_t x43 = 228;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = UINT64_MAX;

    t10 = (((x41==x42)-x43)|x44);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int16_t x47 = -1;
	volatile int8_t x48 = INT8_MAX;
	int32_t t11 = 275708957;

    t11 = (((x45==x46)-x47)|x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = -314LL;
	int32_t x50 = 10818;
	static int32_t x52 = INT32_MAX;

    t12 = (((x49==x50)-x51)|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -6616526;
	volatile int64_t x54 = INT64_MIN;
	static volatile int32_t x55 = 12590;

    t13 = (((x53==x54)-x55)|x56);

    if (t13 != -8461LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x58 = INT16_MIN;
	static volatile int16_t x59 = INT16_MIN;
	uint64_t x60 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

    t14 = (((x57==x58)-x59)|x60);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = 1;
	static uint32_t x62 = 1780965U;
	static volatile int32_t x63 = -1;

    t15 = (((x61==x62)-x63)|x64);

    if (t15 != 219026586745LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x66 = UINT16_MAX;
	volatile int8_t x67 = -1;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = -9552;

    t16 = (((x65==x66)-x67)|x68);

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 4U;
	int8_t x70 = 1;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = -1;
	volatile int32_t t17 = 506;

    t17 = (((x69==x70)-x71)|x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x73 = -14;
	static int8_t x74 = 49;
	int32_t x75 = -1;
	int64_t x76 = -1LL;
	int64_t t18 = 2442045495669041906LL;

    t18 = (((x73==x74)-x75)|x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MAX;
	uint32_t x80 = 0U;
	uint32_t t19 = 332U;

    t19 = (((x77==x78)-x79)|x80);

    if (t19 != 4294967169U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	volatile uint16_t x82 = 3195U;
	static int8_t x83 = 4;
	static uint8_t x84 = 13U;
	int32_t t20 = 27572;

    t20 = (((x81==x82)-x83)|x84);

    if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 122694LLU;
	volatile int8_t x86 = 1;
	int16_t x87 = INT16_MAX;
	volatile uint8_t x88 = 1U;
	volatile int32_t t21 = -1;

    t21 = (((x85==x86)-x87)|x88);

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x95 = -11;
	static int16_t x96 = 451;
	int32_t t22 = -32231;

    t22 = (((x93==x94)-x95)|x96);

    if (t22 != 459) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 1242627U;
	static int8_t x102 = INT8_MAX;
	int16_t x103 = -8922;
	int16_t x104 = INT16_MAX;

    t23 = (((x101==x102)-x103)|x104);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = -4;
	int16_t x107 = -1;
	static int32_t t24 = 4064122;

    t24 = (((x105==x106)-x107)|x108);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = -1LL;
	uint32_t x111 = 83U;
	volatile int32_t x112 = -1;
	uint32_t t25 = UINT32_MAX;

    t25 = (((x109==x110)-x111)|x112);

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x117 = 69471U;
	int16_t x119 = -1;
	volatile int8_t x120 = 11;
	int32_t t26 = -1640;

    t26 = (((x117==x118)-x119)|x120);

    if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MAX;
	uint8_t x122 = UINT8_MAX;
	uint64_t x123 = 446088118139LLU;
	static int32_t x124 = INT32_MIN;
	volatile uint64_t t27 = 209924877959LLU;

    t27 = (((x121==x122)-x123)|x124);

    if (t27 != 18446744072150548613LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x129 = 10396035604LL;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t28 = 0;

    t28 = (((x129==x130)-x131)|x132);

    if (t28 != -32640) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int64_t t29 = 423LL;

    t29 = (((x137==x138)-x139)|x140);

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x142 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t30 = 38;

    t30 = (((x141==x142)-x143)|x144);

    if (t30 != -69) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = INT8_MAX;
	static int64_t x146 = INT64_MIN;
	uint64_t x147 = UINT64_MAX;
	volatile int64_t x148 = -1LL;
	static volatile uint64_t t31 = UINT64_MAX;

    t31 = (((x145==x146)-x147)|x148);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x154 = 1496147U;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = -1;
	static uint32_t t32 = UINT32_MAX;

    t32 = (((x153==x154)-x155)|x156);

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x158 = 1297;
	uint64_t x159 = UINT64_MAX;
	int64_t x160 = -1LL;
	uint64_t t33 = UINT64_MAX;

    t33 = (((x157==x158)-x159)|x160);

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x162 = -1;
	static int64_t x163 = -91199728LL;
	int16_t x164 = INT16_MIN;
	volatile int64_t t34 = 3362995LL;

    t34 = (((x161==x162)-x163)|x164);

    if (t34 != -26384LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x165 = 1U;
	int64_t x167 = 20544283310LL;
	volatile int32_t x168 = -1;
	int64_t t35 = 771049418724410357LL;

    t35 = (((x165==x166)-x167)|x168);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x169 = 48214621901234LLU;
	uint32_t x170 = 73919326U;
	int8_t x171 = 30;
	volatile int8_t x172 = INT8_MIN;
	int32_t t36 = 749872;

    t36 = (((x169==x170)-x171)|x172);

    if (t36 != -30) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = -1LL;
	static int16_t x174 = INT16_MIN;
	uint16_t x176 = 1355U;
	static int32_t t37 = 27445;

    t37 = (((x173==x174)-x175)|x176);

    if (t37 != -110753) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x178 = 43;
	volatile int8_t x179 = 23;
	int32_t x180 = -1;

    t38 = (((x177==x178)-x179)|x180);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = 815;
	volatile int32_t x182 = -1;
	static volatile int8_t x183 = -1;
	int64_t x184 = INT64_MIN;
	volatile int64_t t39 = 389LL;

    t39 = (((x181==x182)-x183)|x184);

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = UINT32_MAX;
	int16_t x186 = 11;
	static volatile int16_t x187 = 0;
	int8_t x188 = INT8_MIN;
	static int32_t t40 = -102950;

    t40 = (((x185==x186)-x187)|x188);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = -11;
	int16_t x190 = -1;
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = -1LL;
	int64_t t41 = -39450274727657LL;

    t41 = (((x189==x190)-x191)|x192);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x193 = 1063220573LLU;
	uint64_t x194 = UINT64_MAX;
	static int16_t x195 = 4;
	volatile int32_t t42 = -228;

    t42 = (((x193==x194)-x195)|x196);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x199 = -14;
	uint16_t x200 = UINT16_MAX;
	static int32_t t43 = -1546;

    t43 = (((x197==x198)-x199)|x200);

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = -4;
	static int32_t t44 = -20;

    t44 = (((x201==x202)-x203)|x204);

    if (t44 != -979) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = 7914732LL;
	volatile int32_t x206 = 358;
	static int64_t x208 = 509280188537839660LL;

    t45 = (((x205==x206)-x207)|x208);

    if (t45 != 509280188537839661LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = -1;
	int64_t x210 = -1LL;
	volatile int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	volatile int64_t t46 = INT64_MAX;

    t46 = (((x209==x210)-x211)|x212);

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x213 = 32U;
	int16_t x215 = -1;
	int8_t x216 = -2;
	int32_t t47 = -52684;

    t47 = (((x213==x214)-x215)|x216);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x218 = 48U;
	int64_t x219 = -6310277740561097LL;
	static int64_t x220 = 333517529086976541LL;
	volatile int64_t t48 = -15121LL;

    t48 = (((x217==x218)-x219)|x220);

    if (t48 != 339722081794613981LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MAX;
	static int16_t x223 = 100;
	int8_t x224 = -1;

    t49 = (((x221==x222)-x223)|x224);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x227 = 156U;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t50 = 0U;

    t50 = (((x225==x226)-x227)|x228);

    if (t50 != 4294967140U) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x229 = -1;
	uint64_t x230 = 94117370599540LLU;
	int16_t x231 = INT16_MAX;
	int8_t x232 = -3;
	volatile int32_t t51 = -12182;

    t51 = (((x229==x230)-x231)|x232);

    if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = 144520U;
	static volatile int8_t x234 = -1;
	volatile int64_t x235 = 0LL;

    t52 = (((x233==x234)-x235)|x236);

    if (t52 != 325LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = 614;
	static volatile int8_t x238 = INT8_MAX;
	int8_t x239 = -1;
	uint8_t x240 = 13U;
	static int32_t t53 = -2748971;

    t53 = (((x237==x238)-x239)|x240);

    if (t53 != 13) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x244 = INT8_MAX;
	int32_t t54 = 27;

    t54 = (((x241==x242)-x243)|x244);

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x245 = 1496LL;
	uint16_t x246 = 13U;
	static int64_t x247 = -1LL;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t55 = -315540LL;

    t55 = (((x245==x246)-x247)|x248);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x249 = 6243U;
	int32_t x251 = -1;
	int32_t x252 = 2730;
	volatile int32_t t56 = -778448;

    t56 = (((x249==x250)-x251)|x252);

    if (t56 != 2731) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = INT8_MIN;
	uint8_t x255 = UINT8_MAX;
	static int64_t x256 = 1911LL;
	int64_t t57 = -1664043239LL;

    t57 = (((x253==x254)-x255)|x256);

    if (t57 != -137LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x258 = 2;
	int32_t x259 = -1;
	volatile int32_t t58 = 824628;

    t58 = (((x257==x258)-x259)|x260);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = INT64_MIN;
	int32_t x262 = INT32_MIN;
	static uint8_t x263 = 102U;
	int64_t x264 = -354765139LL;
	volatile int64_t t59 = 10LL;

    t59 = (((x261==x262)-x263)|x264);

    if (t59 != -65LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	int16_t x267 = -1;
	uint16_t x268 = 15U;
	volatile int32_t t60 = -1;

    t60 = (((x265==x266)-x267)|x268);

    if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x274 = -5468171348065LL;
	static volatile uint64_t x275 = 804879LLU;
	static int32_t x276 = INT32_MIN;
	static volatile uint64_t t61 = 71102538259415LLU;

    t61 = (((x273==x274)-x275)|x276);

    if (t61 != 18446744073708746737LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x277 = UINT8_MAX;
	static int16_t x279 = INT16_MIN;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = (((x277==x278)-x279)|x280);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x281 = 0;
	int32_t x282 = -1290781;
	volatile int16_t x283 = 0;
	static int32_t x284 = 145786201;
	int32_t t63 = -10023292;

    t63 = (((x281==x282)-x283)|x284);

    if (t63 != 145786201) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	uint16_t x288 = 4196U;
	static volatile int32_t t64 = -399183538;

    t64 = (((x285==x286)-x287)|x288);

    if (t64 != -155) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x289 = -1LL;
	volatile int16_t x290 = INT16_MAX;
	static int16_t x291 = 8117;
	static int32_t t65 = -168;

    t65 = (((x289==x290)-x291)|x292);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x293 = 7409U;
	int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	volatile uint64_t t66 = 27926269287318LLU;

    t66 = (((x293==x294)-x295)|x296);

    if (t66 != 25744046718LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x298 = 164381;
	static volatile uint32_t x299 = UINT32_MAX;
	int32_t x300 = -1;
	uint32_t t67 = UINT32_MAX;

    t67 = (((x297==x298)-x299)|x300);

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x301 = 0U;
	uint16_t x302 = UINT16_MAX;
	volatile int64_t x303 = 1LL;

    t68 = (((x301==x302)-x303)|x304);

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = 7LL;
	int16_t x310 = 1274;
	uint32_t x311 = 20U;
	int32_t x312 = INT32_MIN;
	uint32_t t69 = 31382U;

    t69 = (((x309==x310)-x311)|x312);

    if (t69 != 4294967276U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x314 = UINT16_MAX;
	uint32_t x315 = 17303U;
	int8_t x316 = 22;
	volatile uint32_t t70 = 1640693600U;

    t70 = (((x313==x314)-x315)|x316);

    if (t70 != 4294950015U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x317 = -1761;
	static volatile int8_t x318 = INT8_MIN;
	static volatile int64_t x319 = 21143115983LL;
	int32_t x320 = 11;
	int64_t t71 = -394796596589LL;

    t71 = (((x317==x318)-x319)|x320);

    if (t71 != -21143115973LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = -1;
	int8_t x322 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	uint64_t t72 = 1651380LLU;

    t72 = (((x321==x322)-x323)|x324);

    if (t72 != 4606LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x326 = -1;
	volatile uint16_t x327 = 2U;
	int16_t x328 = INT16_MIN;

    t73 = (((x325==x326)-x327)|x328);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = INT64_MAX;
	int16_t x330 = -2728;
	int16_t x332 = INT16_MIN;
	static volatile uint32_t t74 = 168362U;

    t74 = (((x329==x330)-x331)|x332);

    if (t74 != 4294967292U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x333 = INT32_MIN;
	int32_t x334 = -481;
	uint32_t x335 = 1157805389U;
	int32_t x336 = -1;
	volatile uint32_t t75 = UINT32_MAX;

    t75 = (((x333==x334)-x335)|x336);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MAX;
	int32_t x338 = 7249;
	static volatile int64_t x340 = -19LL;
	int64_t t76 = -6487747139574250LL;

    t76 = (((x337==x338)-x339)|x340);

    if (t76 != -19LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x341 = -1;
	volatile uint8_t x342 = 7U;
	uint32_t x344 = 59158U;
	static uint32_t t77 = 2U;

    t77 = (((x341==x342)-x343)|x344);

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x345 = -1;
	uint16_t x346 = 496U;
	int32_t x347 = -17784;
	int32_t x348 = -982687281;
	static int32_t t78 = 240223;

    t78 = (((x345==x346)-x347)|x348);

    if (t78 != -982686209) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x349 = UINT8_MAX;
	int8_t x350 = -1;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = 4;

    t79 = (((x349==x350)-x351)|x352);

    if (t79 != 32772) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x354 = -10;
	volatile int8_t x355 = 4;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t80 = -1;

    t80 = (((x353==x354)-x355)|x356);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x357 = 47;
	volatile int64_t x358 = -1LL;
	int16_t x359 = INT16_MAX;
	static volatile int8_t x360 = INT8_MAX;
	volatile int32_t t81 = -164206885;

    t81 = (((x357==x358)-x359)|x360);

    if (t81 != -32641) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x361 = 12U;
	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 35U;
	volatile int32_t t82 = -4061;

    t82 = (((x361==x362)-x363)|x364);

    if (t82 != -2147483613) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x366 = 483939830U;
	int64_t x367 = -2688824663001839714LL;
	volatile int16_t x368 = INT16_MIN;
	int64_t t83 = -2090916349LL;

    t83 = (((x365==x366)-x367)|x368);

    if (t83 != -18334LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t84 = -374962561;

    t84 = (((x369==x370)-x371)|x372);

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x373 = -7801LL;
	uint64_t x374 = 362LLU;
	uint32_t x375 = 123662586U;
	uint32_t x376 = 356929U;

    t85 = (((x373==x374)-x375)|x376);

    if (t85 != 4171595591U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x377 = 13537;
	static uint16_t x378 = 53U;
	int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MAX;
	int64_t t86 = -474LL;

    t86 = (((x377==x378)-x379)|x380);

    if (t86 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x381 = 8U;
	int64_t x382 = INT64_MAX;
	static volatile int8_t x383 = -1;
	volatile uint16_t x384 = 68U;

    t87 = (((x381==x382)-x383)|x384);

    if (t87 != 69) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x385 = -1;
	int16_t x386 = INT16_MIN;
	static uint64_t x387 = 95810LLU;
	int16_t x388 = INT16_MIN;

    t88 = (((x385==x386)-x387)|x388);

    if (t88 != 18446744073709521342LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = -1;
	uint8_t x390 = 9U;
	int16_t x391 = INT16_MIN;
	volatile int32_t t89 = -36908857;

    t89 = (((x389==x390)-x391)|x392);

    if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = UINT32_MAX;
	uint8_t x394 = 6U;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -14825;
	int32_t t90 = -1731;

    t90 = (((x393==x394)-x395)|x396);

    if (t90 != -14697) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	static uint8_t x398 = 32U;
	uint32_t x399 = 0U;
	static volatile int64_t x400 = -1LL;
	int64_t t91 = 403586908LL;

    t91 = (((x397==x398)-x399)|x400);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = -94;
	volatile uint32_t x402 = UINT32_MAX;
	int32_t x403 = -1;
	uint8_t x404 = 0U;
	int32_t t92 = -3097211;

    t92 = (((x401==x402)-x403)|x404);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x405 = 2U;
	volatile int16_t x407 = INT16_MAX;
	int64_t x408 = INT64_MAX;

    t93 = (((x405==x406)-x407)|x408);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x410 = 2U;
	int32_t x412 = 13137562;
	volatile int32_t t94 = 39423884;

    t94 = (((x409==x410)-x411)|x412);

    if (t94 != 13170330) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x414 = 114982LLU;
	int8_t x415 = -1;

    t95 = (((x413==x414)-x415)|x416);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x417 = 1359724LLU;
	static int32_t x419 = INT32_MAX;

    t96 = (((x417==x418)-x419)|x420);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x422 = -1;
	uint32_t t97 = 0U;

    t97 = (((x421==x422)-x423)|x424);

    if (t97 != 4294967241U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = -1;
	volatile int16_t x427 = 0;
	static int32_t x428 = -2093630;

    t98 = (((x425==x426)-x427)|x428);

    if (t98 != -2093630) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x429 = -1721;
	volatile int8_t x430 = INT8_MAX;
	int64_t x431 = 1LL;
	int64_t x432 = INT64_MAX;
	int64_t t99 = -1037057117629LL;

    t99 = (((x429==x430)-x431)|x432);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x433 = -11636738;
	int32_t x434 = INT32_MIN;
	uint64_t x435 = 123187020182283094LLU;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t100 = UINT64_MAX;

    t100 = (((x433==x434)-x435)|x436);

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x437 = 13436627235LLU;
	int64_t x439 = INT64_MAX;
	volatile uint8_t x440 = 55U;
	volatile int64_t t101 = -51679LL;

    t101 = (((x437==x438)-x439)|x440);

    if (t101 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x454 = -1LL;
	static uint32_t x455 = 166U;
	static int16_t x456 = INT16_MAX;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = (((x453==x454)-x455)|x456);

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x458 = INT32_MIN;
	uint64_t x459 = 19LLU;
	int8_t x460 = INT8_MIN;
	uint64_t t103 = 10935993LLU;

    t103 = (((x457==x458)-x459)|x460);

    if (t103 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x461 = INT64_MIN;
	int8_t x463 = INT8_MIN;
	int32_t x464 = INT32_MIN;
	int32_t t104 = 15765;

    t104 = (((x461==x462)-x463)|x464);

    if (t104 != -2147483519) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = INT16_MAX;
	int8_t x466 = 9;
	int32_t x468 = INT32_MIN;
	int32_t t105 = -2;

    t105 = (((x465==x466)-x467)|x468);

    if (t105 != -2147483647) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x469 = 22403600U;
	volatile int64_t x470 = 2LL;
	int32_t x471 = -1276;
	int32_t x472 = INT32_MIN;
	int32_t t106 = -13788;

    t106 = (((x469==x470)-x471)|x472);

    if (t106 != -2147482372) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x474 = -221710;
	int32_t x475 = INT32_MAX;
	int64_t x476 = -5LL;
	static volatile int64_t t107 = 62137574256506LL;

    t107 = (((x473==x474)-x475)|x476);

    if (t107 != -5LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int64_t x486 = -1LL;
	int64_t x487 = INT64_MAX;
	volatile int64_t t108 = 10716050439748LL;

    t108 = (((x485==x486)-x487)|x488);

    if (t108 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = INT64_MIN;
	static uint8_t x490 = 0U;
	uint16_t x491 = UINT16_MAX;
	static int32_t t109 = 78898171;

    t109 = (((x489==x490)-x491)|x492);

    if (t109 != -65523) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x493 = -26819;
	static int32_t x495 = 46;
	uint8_t x496 = 2U;
	int32_t t110 = 2;

    t110 = (((x493==x494)-x495)|x496);

    if (t110 != -46) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int16_t x498 = -1;
	volatile int32_t t111 = -14007917;

    t111 = (((x497==x498)-x499)|x500);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x501 = 15099461U;
	static uint16_t x503 = 33U;
	volatile int16_t x504 = -1;
	int32_t t112 = -5621;

    t112 = (((x501==x502)-x503)|x504);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x505 = INT64_MIN;
	int16_t x507 = INT16_MAX;
	static int16_t x508 = 2;
	int32_t t113 = -69936;

    t113 = (((x505==x506)-x507)|x508);

    if (t113 != -32765) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x509 = 7112;
	volatile uint64_t x510 = UINT64_MAX;
	int16_t x511 = INT16_MIN;
	int16_t x512 = -219;

    t114 = (((x509==x510)-x511)|x512);

    if (t114 != -219) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x515 = -1;
	int32_t x516 = INT32_MIN;

    t115 = (((x513==x514)-x515)|x516);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = INT32_MIN;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = INT16_MIN;
	volatile uint16_t x520 = 41U;
	int32_t t116 = -16638;

    t116 = (((x517==x518)-x519)|x520);

    if (t116 != 32809) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x521 = INT64_MIN;
	static int16_t x522 = 3;
	volatile int16_t x523 = 2;
	volatile int64_t t117 = 11385875032LL;

    t117 = (((x521==x522)-x523)|x524);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x525 = -1;
	volatile int8_t x526 = INT8_MIN;
	static int8_t x528 = INT8_MAX;
	int32_t t118 = -7731724;

    t118 = (((x525==x526)-x527)|x528);

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x529 = INT16_MAX;
	int64_t x530 = INT64_MIN;
	volatile int8_t x531 = -1;
	static int64_t x532 = -1LL;
	volatile int64_t t119 = -12286LL;

    t119 = (((x529==x530)-x531)|x532);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x534 = INT64_MIN;
	static int32_t t120 = -510219;

    t120 = (((x533==x534)-x535)|x536);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x537 = 1;
	int32_t x538 = 924043457;
	static int8_t x539 = INT8_MIN;
	int64_t x540 = 0LL;
	int64_t t121 = 1632LL;

    t121 = (((x537==x538)-x539)|x540);

    if (t121 != 128LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x541 = UINT8_MAX;
	static uint32_t x542 = 13U;
	uint32_t x543 = 243499U;
	int16_t x544 = INT16_MIN;

    t122 = (((x541==x542)-x543)|x544);

    if (t122 != 4294953173U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x546 = INT32_MIN;
	uint8_t x547 = 6U;

    t123 = (((x545==x546)-x547)|x548);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x549 = INT32_MIN;
	static uint64_t x552 = UINT64_MAX;

    t124 = (((x549==x550)-x551)|x552);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x553 = -637163382302284LL;
	int64_t x554 = 4LL;
	uint32_t x555 = 6391U;
	uint32_t t125 = UINT32_MAX;

    t125 = (((x553==x554)-x555)|x556);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x558 = 4U;
	int8_t x559 = -1;

    t126 = (((x557==x558)-x559)|x560);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	int32_t x564 = INT32_MIN;

    t127 = (((x561==x562)-x563)|x564);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x565 = INT16_MIN;
	static volatile int64_t x566 = 14133074310613LL;
	volatile int64_t t128 = -6921342444480569LL;

    t128 = (((x565==x566)-x567)|x568);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x569 = INT32_MAX;
	int64_t x571 = INT64_MAX;
	static volatile int64_t t129 = 392LL;

    t129 = (((x569==x570)-x571)|x572);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x573 = 184LL;
	int64_t x574 = INT64_MIN;
	int8_t x575 = -7;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t130 = -690916;

    t130 = (((x573==x574)-x575)|x576);

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x578 = -1;
	int16_t x579 = -1;
	uint16_t x580 = 1565U;
	volatile int32_t t131 = 121109206;

    t131 = (((x577==x578)-x579)|x580);

    if (t131 != 1565) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x581 = 13U;
	static int16_t x582 = INT16_MIN;
	uint64_t x583 = 16LLU;
	int64_t x584 = -1LL;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (((x581==x582)-x583)|x584);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint64_t x585 = 128677819LLU;
	uint64_t x587 = 32464962101019LLU;
	int8_t x588 = -1;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (((x585==x586)-x587)|x588);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x589 = 13U;
	uint16_t x591 = 12249U;
	static uint16_t x592 = 462U;
	volatile int32_t t134 = 23069;

    t134 = (((x589==x590)-x591)|x592);

    if (t134 != -11793) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MIN;
	int32_t x595 = -1;
	int64_t x596 = -1LL;
	volatile int64_t t135 = -230754LL;

    t135 = (((x593==x594)-x595)|x596);

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x597 = UINT64_MAX;
	static int8_t x598 = INT8_MIN;
	uint8_t x599 = 6U;
	volatile int16_t x600 = -2;
	volatile int32_t t136 = 852820;

    t136 = (((x597==x598)-x599)|x600);

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x601 = 75211207;
	int8_t x602 = -1;
	int16_t x603 = INT16_MIN;
	static int64_t x604 = INT64_MAX;
	int64_t t137 = INT64_MAX;

    t137 = (((x601==x602)-x603)|x604);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x605 = INT64_MIN;
	int8_t x606 = -1;
	volatile uint16_t x607 = 4U;
	static int32_t t138 = 4741164;

    t138 = (((x605==x606)-x607)|x608);

    if (t138 != -3) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x613 = INT16_MAX;
	static int32_t x614 = -1;
	static uint64_t x615 = UINT64_MAX;
	static int32_t x616 = -1;
	static volatile uint64_t t139 = UINT64_MAX;

    t139 = (((x613==x614)-x615)|x616);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x617 = INT16_MIN;
	static int8_t x618 = INT8_MIN;
	uint64_t x620 = 2753900LLU;
	uint64_t t140 = 502576LLU;

    t140 = (((x617==x618)-x619)|x620);

    if (t140 != 18446744073709520237LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x621 = INT16_MIN;
	int64_t x622 = INT64_MIN;
	uint16_t x624 = 6273U;

    t141 = (((x621==x622)-x623)|x624);

    if (t141 != -853) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x625 = INT32_MIN;
	volatile int8_t x626 = INT8_MIN;
	int8_t x627 = -1;
	volatile int16_t x628 = INT16_MIN;

    t142 = (((x625==x626)-x627)|x628);

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x629 = 428U;
	uint64_t x630 = 35075LLU;
	uint64_t x631 = UINT64_MAX;
	volatile int16_t x632 = -3593;
	static uint64_t t143 = 6275LLU;

    t143 = (((x629==x630)-x631)|x632);

    if (t143 != 18446744073709548023LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x633 = INT64_MIN;
	uint16_t x634 = 26U;
	int16_t x635 = INT16_MIN;
	static int16_t x636 = INT16_MIN;
	int32_t t144 = 87;

    t144 = (((x633==x634)-x635)|x636);

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x637 = -1;
	static uint64_t x639 = 40593382022LLU;
	int8_t x640 = -1;
	uint64_t t145 = UINT64_MAX;

    t145 = (((x637==x638)-x639)|x640);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x642 = INT64_MAX;
	uint16_t x644 = 14899U;
	static uint32_t t146 = 6978U;

    t146 = (((x641==x642)-x643)|x644);

    if (t146 != 14899U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x645 = 15;
	int16_t x646 = INT16_MIN;
	int8_t x647 = -1;
	uint16_t x648 = 843U;
	volatile int32_t t147 = 1001;

    t147 = (((x645==x646)-x647)|x648);

    if (t147 != 843) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x649 = -60;
	int16_t x650 = -10004;
	uint32_t x651 = UINT32_MAX;
	volatile uint64_t x652 = 29617588567182602LLU;
	uint64_t t148 = 7205703621620LLU;

    t148 = (((x649==x650)-x651)|x652);

    if (t148 != 29617588567182603LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x653 = INT8_MIN;
	uint16_t x654 = 3U;
	static uint64_t x655 = 3233435775LLU;
	int16_t x656 = 14;

    t149 = (((x653==x654)-x655)|x656);

    if (t149 != 18446744070476115855LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x657 = 6329941LLU;
	int32_t x658 = INT32_MIN;
	int32_t x659 = -1;
	int32_t x660 = INT32_MIN;

    t150 = (((x657==x658)-x659)|x660);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x662 = -1;
	int16_t x663 = INT16_MIN;
	static int8_t x664 = -3;
	int32_t t151 = 43;

    t151 = (((x661==x662)-x663)|x664);

    if (t151 != -3) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x665 = UINT32_MAX;
	volatile int64_t x666 = INT64_MIN;
	volatile int16_t x667 = INT16_MAX;
	static uint8_t x668 = UINT8_MAX;
	static int32_t t152 = 1257455;

    t152 = (((x665==x666)-x667)|x668);

    if (t152 != -32513) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x670 = 20103LLU;
	uint64_t x671 = UINT64_MAX;
	int64_t x672 = INT64_MAX;
	uint64_t t153 = 3224163935LLU;

    t153 = (((x669==x670)-x671)|x672);

    if (t153 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x674 = INT32_MIN;
	int16_t x675 = 6;
	int32_t x676 = -1;

    t154 = (((x673==x674)-x675)|x676);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x678 = -1;
	int8_t x679 = -1;
	volatile int16_t x680 = INT16_MIN;
	int32_t t155 = 134;

    t155 = (((x677==x678)-x679)|x680);

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x681 = INT16_MIN;
	volatile int32_t x682 = 1;
	int64_t t156 = -74467543LL;

    t156 = (((x681==x682)-x683)|x684);

    if (t156 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x685 = INT8_MIN;
	volatile uint16_t x687 = 1525U;
	static int32_t x688 = -2294067;
	static int32_t t157 = -24;

    t157 = (((x685==x686)-x687)|x688);

    if (t157 != -305) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x690 = 1;
	static volatile int16_t x691 = -129;
	volatile int64_t t158 = 295LL;

    t158 = (((x689==x690)-x691)|x692);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x693 = INT8_MAX;
	int32_t x694 = INT32_MAX;
	uint16_t x695 = UINT16_MAX;
	int32_t t159 = -16111;

    t159 = (((x693==x694)-x695)|x696);

    if (t159 != -65281) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x697 = -1LL;
	int16_t x698 = INT16_MIN;
	int64_t x699 = -1LL;

    t160 = (((x697==x698)-x699)|x700);

    if (t160 != -32767LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x701 = INT16_MIN;
	static int8_t x702 = -2;
	uint16_t x703 = 2U;
	uint8_t x704 = 56U;
	volatile int32_t t161 = 8495;

    t161 = (((x701==x702)-x703)|x704);

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x709 = 0;
	int32_t x711 = INT32_MAX;
	volatile int32_t t162 = -11166;

    t162 = (((x709==x710)-x711)|x712);

    if (t162 != -2147483623) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x713 = 117U;
	uint16_t x714 = 180U;
	volatile uint64_t x715 = 25LLU;
	uint64_t t163 = 183205216LLU;

    t163 = (((x713==x714)-x715)|x716);

    if (t163 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x717 = INT64_MIN;
	int16_t x718 = INT16_MIN;
	volatile int64_t x719 = -6626055980570649LL;
	int64_t x720 = INT64_MIN;

    t164 = (((x717==x718)-x719)|x720);

    if (t164 != -9216745980874205159LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x721 = UINT16_MAX;
	static uint32_t x722 = UINT32_MAX;
	int16_t x723 = INT16_MIN;
	uint8_t x724 = 13U;

    t165 = (((x721==x722)-x723)|x724);

    if (t165 != 32781) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x726 = 1158;
	int32_t x727 = -1;
	int32_t t166 = 38546;

    t166 = (((x725==x726)-x727)|x728);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x729 = 0LL;
	volatile int32_t x730 = INT32_MAX;
	int32_t x731 = -1;
	uint8_t x732 = UINT8_MAX;

    t167 = (((x729==x730)-x731)|x732);

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x733 = -52;
	int16_t x734 = INT16_MIN;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t168 = UINT64_MAX;

    t168 = (((x733==x734)-x735)|x736);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MIN;
	uint16_t x738 = 61U;
	int32_t x739 = -1;
	int32_t t169 = 46;

    t169 = (((x737==x738)-x739)|x740);

    if (t169 != -76408461) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x741 = 111U;
	volatile uint8_t x742 = UINT8_MAX;
	volatile uint8_t x743 = 7U;
	int8_t x744 = -55;
	volatile int32_t t170 = 37417069;

    t170 = (((x741==x742)-x743)|x744);

    if (t170 != -7) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x745 = INT64_MIN;
	int8_t x746 = INT8_MAX;
	uint32_t x747 = UINT32_MAX;
	static volatile int32_t x748 = INT32_MIN;
	volatile uint32_t t171 = 120U;

    t171 = (((x745==x746)-x747)|x748);

    if (t171 != 2147483649U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x749 = INT64_MAX;
	int32_t x750 = 101;
	int64_t x751 = -7938594LL;
	uint8_t x752 = 40U;
	volatile int64_t t172 = -7319203455263LL;

    t172 = (((x749==x750)-x751)|x752);

    if (t172 != 7938602LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x753 = -13;
	uint64_t x754 = 30388390937LLU;
	int64_t x755 = 143884LL;
	int16_t x756 = 3;
	int64_t t173 = -1267517394LL;

    t173 = (((x753==x754)-x755)|x756);

    if (t173 != -143881LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x757 = INT8_MIN;
	static int32_t x759 = 17479762;
	volatile int32_t t174 = -2830;

    t174 = (((x757==x758)-x759)|x760);

    if (t174 != -65) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x761 = INT8_MAX;
	static volatile int32_t x762 = -1;
	static int16_t x763 = -434;
	int32_t x764 = -144155;
	volatile int32_t t175 = -575941829;

    t175 = (((x761==x762)-x763)|x764);

    if (t175 != -143881) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x765 = 2485U;
	int8_t x766 = -1;
	int8_t x767 = -1;
	int16_t x768 = INT16_MIN;
	int32_t t176 = 172;

    t176 = (((x765==x766)-x767)|x768);

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x770 = -1;
	int8_t x771 = INT8_MAX;
	volatile uint32_t x772 = UINT32_MAX;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = (((x769==x770)-x771)|x772);

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x773 = INT64_MIN;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (((x773==x774)-x775)|x776);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x777 = 0U;
	int16_t x780 = -1;
	static uint32_t t179 = UINT32_MAX;

    t179 = (((x777==x778)-x779)|x780);

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x781 = -35364337LL;
	int64_t x782 = -2260635064495LL;
	int32_t x783 = 0;
	int64_t x784 = INT64_MIN;
	static int64_t t180 = INT64_MIN;

    t180 = (((x781==x782)-x783)|x784);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x785 = 1;
	uint16_t x786 = 81U;
	volatile int32_t x788 = INT32_MIN;

    t181 = (((x785==x786)-x787)|x788);

    if (t181 != 4294967121U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x789 = UINT32_MAX;
	int64_t x790 = -134325528576LL;
	volatile int8_t x791 = 0;
	volatile int16_t x792 = INT16_MAX;
	int32_t t182 = 3177;

    t182 = (((x789==x790)-x791)|x792);

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x793 = INT64_MIN;
	int16_t x794 = -12;
	volatile int64_t x796 = INT64_MIN;
	volatile int64_t t183 = 718701515831950LL;

    t183 = (((x793==x794)-x795)|x796);

    if (t183 != -9223344314509719001LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x797 = INT8_MAX;
	int64_t x798 = -179613611LL;
	uint64_t x799 = UINT64_MAX;
	uint8_t x800 = 7U;

    t184 = (((x797==x798)-x799)|x800);

    if (t184 != 7LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x801 = 0;
	int64_t x802 = INT64_MAX;
	uint64_t x803 = UINT64_MAX;
	volatile uint64_t t185 = 123767LLU;

    t185 = (((x801==x802)-x803)|x804);

    if (t185 != 121LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x805 = 2015757596U;
	int32_t x806 = -1;
	int8_t x807 = -1;
	volatile int8_t x808 = -34;
	static int32_t t186 = 138;

    t186 = (((x805==x806)-x807)|x808);

    if (t186 != -33) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x809 = INT32_MAX;
	uint64_t x810 = UINT64_MAX;
	static uint16_t x811 = 482U;
	int64_t x812 = -1LL;
	int64_t t187 = -437126LL;

    t187 = (((x809==x810)-x811)|x812);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x813 = -1LL;
	int8_t x815 = INT8_MAX;
	volatile uint32_t t188 = UINT32_MAX;

    t188 = (((x813==x814)-x815)|x816);

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x819 = 157U;
	int64_t x820 = 606339LL;
	static int64_t t189 = -2107313LL;

    t189 = (((x817==x818)-x819)|x820);

    if (t189 != 4294967267LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x821 = 938060LL;
	int32_t x822 = INT32_MIN;
	int16_t x823 = INT16_MIN;
	volatile int64_t x824 = 0LL;
	static volatile int64_t t190 = -1LL;

    t190 = (((x821==x822)-x823)|x824);

    if (t190 != 32768LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x825 = UINT32_MAX;
	int64_t x827 = -1LL;
	int16_t x828 = -1;
	volatile int64_t t191 = 524067211392825235LL;

    t191 = (((x825==x826)-x827)|x828);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x830 = 1;
	uint16_t x831 = 113U;
	volatile uint16_t x832 = UINT16_MAX;
	volatile int32_t t192 = -68331;

    t192 = (((x829==x830)-x831)|x832);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x833 = -544073029553651133LL;
	int8_t x834 = -1;
	uint8_t x835 = UINT8_MAX;
	int32_t t193 = 49;

    t193 = (((x833==x834)-x835)|x836);

    if (t193 != -253) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x841 = INT64_MIN;
	int8_t x843 = INT8_MIN;
	static volatile int64_t t194 = INT64_MAX;

    t194 = (((x841==x842)-x843)|x844);

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x845 = 7705U;
	volatile int32_t x846 = 921520;
	int32_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int32_t t195 = -853799705;

    t195 = (((x845==x846)-x847)|x848);

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x850 = -27579;
	uint16_t x851 = 18U;
	volatile int32_t x852 = 150803;
	static volatile int32_t t196 = -1240;

    t196 = (((x849==x850)-x851)|x852);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x855 = -1;
	int8_t x856 = -1;
	volatile int32_t t197 = 111954143;

    t197 = (((x853==x854)-x855)|x856);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x858 = 8LLU;
	uint32_t x859 = UINT32_MAX;
	uint32_t x860 = 106084393U;
	volatile uint32_t t198 = 51U;

    t198 = (((x857==x858)-x859)|x860);

    if (t198 != 106084393U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x861 = -1;
	static uint64_t x862 = 32LLU;
	static volatile uint64_t x864 = 7940LLU;
	uint64_t t199 = 1283571937415797LLU;

    t199 = (((x861==x862)-x863)|x864);

    if (t199 != 18446744073709551503LLU) { NG(); } else { ; }
	
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

