
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

int32_t x1 = INT32_MIN;
volatile int32_t x5 = INT32_MIN;
int32_t x8 = -1;
int32_t x9 = INT32_MAX;
int16_t x14 = -2;
int32_t x15 = -1;
static int32_t x19 = INT32_MIN;
int16_t x21 = 259;
static uint64_t t5 = 57020LLU;
int8_t x27 = INT8_MIN;
int32_t t6 = -17746544;
volatile int8_t x42 = -1;
volatile uint8_t x54 = 47U;
volatile int64_t x63 = -403460162578090LL;
int32_t t16 = 29807924;
uint64_t t17 = 8613186117161LLU;
int16_t x73 = -1;
int16_t x74 = INT16_MAX;
int64_t x77 = INT64_MIN;
volatile int8_t x82 = -1;
int32_t t21 = -1;
int64_t x91 = INT64_MIN;
volatile int64_t x92 = INT64_MIN;
uint32_t x95 = UINT32_MAX;
volatile uint16_t x100 = UINT16_MAX;
int8_t x104 = INT8_MIN;
int32_t t25 = 810151979;
static int32_t x105 = INT32_MAX;
static uint8_t x107 = 67U;
int64_t x108 = 4189766736910LL;
int64_t x115 = INT64_MIN;
static int32_t t28 = 0;
int16_t x119 = 13514;
int8_t x123 = 11;
volatile int32_t t30 = 0;
static uint64_t t32 = 12LLU;
volatile int64_t t33 = 70646846LL;
int32_t x141 = INT32_MIN;
int8_t x147 = INT8_MIN;
uint64_t x152 = UINT64_MAX;
uint16_t x153 = 0U;
int16_t x155 = INT16_MIN;
static int32_t t40 = -508502319;
int64_t x172 = -90750532575LL;
volatile int16_t x174 = -2729;
int16_t x175 = INT16_MIN;
int32_t x180 = -4;
int32_t t44 = -3;
volatile uint32_t t45 = 944311592U;
int64_t t47 = 11LL;
volatile int64_t x193 = 122327774003LL;
volatile uint64_t t49 = 945LLU;
volatile uint64_t t50 = 11LLU;
uint8_t x205 = 1U;
int16_t x209 = 1;
static volatile int32_t t52 = -49707;
int32_t x226 = 599;
volatile int32_t t56 = 94016;
static int32_t x229 = -5007;
volatile int32_t x231 = -1;
static int16_t x233 = 6;
int32_t t58 = 1837;
static uint32_t x237 = UINT32_MAX;
volatile uint32_t t60 = 906U;
uint32_t x257 = UINT32_MAX;
volatile int64_t x262 = -71411LL;
volatile int16_t x264 = 2;
volatile int32_t t65 = -25;
uint64_t x276 = 38792136343LLU;
uint8_t x277 = 20U;
volatile int16_t x278 = 0;
int32_t x283 = INT32_MIN;
static int32_t x284 = INT32_MAX;
volatile int32_t t71 = -21;
int16_t x289 = -1;
volatile int8_t x302 = INT8_MAX;
volatile uint64_t x306 = UINT64_MAX;
uint16_t x312 = 73U;
int32_t t77 = 9486629;
volatile uint8_t x317 = 5U;
volatile uint8_t x320 = 7U;
uint64_t x321 = 26LLU;
int8_t x326 = -1;
int8_t x334 = 29;
int16_t x336 = -12739;
static int8_t x345 = INT8_MIN;
static int16_t x347 = INT16_MAX;
int64_t x351 = INT64_MIN;
int16_t x364 = INT16_MIN;
int64_t x370 = INT64_MIN;
uint8_t x371 = 2U;
int16_t x372 = -1;
int8_t x373 = INT8_MIN;
int32_t t93 = -600701;
int16_t x379 = INT16_MAX;
uint8_t x384 = 20U;
volatile int32_t t95 = 0;
static uint64_t t96 = 710007638832LLU;
volatile uint8_t x390 = UINT8_MAX;
uint64_t x396 = 144375169280LLU;
uint64_t t98 = 40618612LLU;
uint64_t x397 = UINT64_MAX;
volatile uint64_t x405 = 0LLU;
uint64_t x408 = UINT64_MAX;
int64_t x414 = -145168792480655LL;
uint32_t x417 = 1627573064U;
volatile int64_t x418 = INT64_MAX;
uint32_t x419 = 12U;
volatile int64_t x423 = -3312461426572LL;
int32_t x425 = -1;
int16_t x439 = INT16_MIN;
int64_t x441 = INT64_MIN;
volatile int64_t x447 = INT64_MIN;
volatile uint64_t t111 = 134493741599895415LLU;
int64_t x449 = -592321235486461LL;
uint16_t x455 = UINT16_MAX;
volatile int32_t t113 = -74049424;
volatile uint32_t x457 = 317864U;
static int16_t x461 = 3863;
volatile int32_t t115 = 58896533;
int32_t t116 = 26256897;
int16_t x469 = INT16_MAX;
int64_t x472 = INT64_MAX;
volatile int64_t t117 = -79431718346LL;
volatile int64_t x474 = INT64_MAX;
static int64_t x480 = INT64_MIN;
volatile int64_t t120 = 195545503766289LL;
int64_t x485 = -1LL;
static uint64_t x487 = UINT64_MAX;
int8_t x488 = -1;
static int8_t x489 = INT8_MIN;
static volatile int32_t x491 = INT32_MIN;
volatile uint8_t x493 = 1U;
int32_t x495 = INT32_MAX;
volatile int64_t t123 = -29599356476000998LL;
uint64_t x498 = UINT64_MAX;
int64_t x500 = -1942519LL;
int64_t t124 = 5LL;
uint8_t x505 = 7U;
static uint64_t x508 = 916591069153LLU;
volatile uint64_t t126 = 260640728LLU;
static int16_t x513 = -1;
uint32_t t128 = 12491U;
static uint64_t x518 = 2784544958LLU;
volatile int64_t t129 = -427464018104912LL;
int32_t x529 = INT32_MIN;
volatile int32_t x536 = -6207;
uint64_t t134 = 1056484013742LLU;
uint32_t x544 = 5U;
static int32_t x551 = -1;
volatile int32_t x562 = -1;
volatile int16_t x566 = -1;
int32_t t141 = -73879;
volatile int32_t x573 = INT32_MIN;
uint32_t x576 = UINT32_MAX;
uint32_t t142 = 707368757U;
uint16_t x577 = 0U;
int32_t t145 = -2997921;
volatile int64_t t146 = 4662579LL;
static int32_t x604 = -49345;
uint32_t x605 = UINT32_MAX;
static volatile int64_t t149 = 2310252745189042060LL;
volatile int16_t x609 = -85;
int32_t x610 = INT32_MAX;
int16_t x613 = INT16_MIN;
int32_t x624 = -120688;
static int32_t x625 = 656259666;
int32_t x630 = INT32_MIN;
static volatile uint32_t x635 = 497214U;
int64_t x642 = -2229707328467674389LL;
uint16_t x651 = UINT16_MAX;
volatile int32_t t160 = -110;
volatile uint32_t t161 = 7273U;
int32_t x657 = INT32_MAX;
int16_t x658 = INT16_MIN;
int32_t t162 = -52;
volatile int32_t x664 = INT32_MAX;
static volatile int32_t t163 = 3124148;
int8_t x668 = INT8_MIN;
volatile uint64_t t166 = 8LLU;
int16_t x679 = -1;
volatile int32_t t167 = 2041500;
static int32_t t168 = -127505682;
uint32_t x687 = 58U;
volatile int32_t t169 = 43866;
int16_t x689 = INT16_MIN;
volatile int32_t t170 = -388230606;
int64_t x696 = INT64_MIN;
volatile int64_t t171 = 27683745642860145LL;
int16_t x698 = 1;
uint8_t x706 = 37U;
static uint8_t x710 = 64U;
uint16_t x711 = 20U;
volatile int32_t t175 = -3;
uint16_t x713 = 23U;
int16_t x714 = INT16_MIN;
static int8_t x716 = INT8_MAX;
volatile int32_t t176 = 5;
static volatile int64_t x726 = -282LL;
uint16_t x734 = 2U;
volatile uint16_t x737 = 431U;
uint64_t x738 = UINT64_MAX;
volatile int32_t x739 = -1;
static int32_t t182 = -761079919;
int16_t x744 = 6113;
volatile int8_t x745 = INT8_MIN;
volatile int8_t x748 = 1;
uint16_t x752 = 3769U;
int64_t x754 = INT64_MAX;
uint8_t x773 = 3U;
uint32_t x774 = 270U;
int8_t x776 = INT8_MIN;
volatile uint32_t x778 = 2349U;
volatile uint8_t x782 = 43U;
uint32_t x789 = 2730966U;
volatile uint64_t t195 = 1353501237660LLU;
uint64_t x801 = 69595659612193LLU;
int32_t t198 = -687893466;
int64_t x808 = -659773LL;


void f0(void) {
    	volatile uint64_t x2 = 159925685242521LLU;
	uint64_t x3 = 3641399124873LLU;
	int32_t x4 = 20869267;
	volatile int32_t t0 = -94944715;

    t0 = ((x1>(x2!=x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	int32_t t1 = -51626679;

    t1 = ((x5>(x6!=x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 0;
	static int8_t x11 = -2;
	uint8_t x12 = 88U;
	static volatile int32_t t2 = 16212;

    t2 = ((x9>(x10!=x11))%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 1763;

    t3 = ((x13>(x14!=x15))%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static uint8_t x18 = UINT8_MAX;
	int64_t x20 = 3275923080867LL;
	int64_t t4 = 1063543471293LL;

    t4 = ((x17>(x18!=x19))%x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	uint64_t x23 = 7578LLU;
	uint64_t x24 = 38444090641129LLU;

    t5 = ((x21>(x22!=x23))%x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int32_t x26 = INT32_MIN;
	uint16_t x28 = 3U;

    t6 = ((x25>(x26!=x27))%x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 48U;
	int8_t x30 = 1;
	volatile int32_t x31 = -1405358;
	volatile uint32_t x32 = 893U;
	uint32_t t7 = 2419U;

    t7 = ((x29>(x30!=x31))%x32);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -42411079251156308LL;

    t8 = ((x33>(x34!=x35))%x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	static int32_t x38 = INT32_MIN;
	uint64_t x39 = 1LLU;
	static uint16_t x40 = 341U;
	volatile int32_t t9 = 329204;

    t9 = ((x37>(x38!=x39))%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	uint16_t x43 = 79U;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -1415470;

    t10 = ((x41>(x42!=x43))%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = 0U;
	int64_t x46 = -1LL;
	static volatile uint8_t x47 = 2U;
	uint64_t x48 = 10412750041LLU;
	static volatile uint64_t t11 = 87LLU;

    t11 = ((x45>(x46!=x47))%x48);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	static int16_t x50 = -2712;
	int64_t x51 = -1LL;
	volatile int16_t x52 = -1;
	int32_t t12 = 46;

    t12 = ((x49>(x50!=x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MAX;
	int32_t x55 = -36;
	uint8_t x56 = 115U;
	int32_t t13 = 1341632;

    t13 = ((x53>(x54!=x55))%x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MAX;
	int16_t x58 = 164;
	volatile int32_t x59 = INT32_MIN;
	uint8_t x60 = 6U;
	volatile int32_t t14 = 1062751;

    t14 = ((x57>(x58!=x59))%x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	static volatile uint32_t x62 = 70277U;
	uint32_t x64 = 17268U;
	volatile uint32_t t15 = 1U;

    t15 = ((x61>(x62!=x63))%x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 14LL;
	int32_t x66 = INT32_MAX;
	int64_t x67 = 2078LL;
	int32_t x68 = -4;

    t16 = ((x65>(x66!=x67))%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MIN;
	int32_t x70 = -4016;
	int16_t x71 = INT16_MAX;
	static uint64_t x72 = 27720973LLU;

    t17 = ((x69>(x70!=x71))%x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -23;

    t18 = ((x73>(x74!=x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -695348;

    t19 = ((x77>(x78!=x79))%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	int64_t x83 = 1270633435718LL;
	uint16_t x84 = 1U;
	int32_t t20 = -15624;

    t20 = ((x81>(x82!=x83))%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MIN;
	int8_t x86 = -3;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -986338802;

    t21 = ((x85>(x86!=x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int64_t x90 = -1LL;
	static volatile int64_t t22 = 0LL;

    t22 = ((x89>(x90!=x91))%x92);

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	int8_t x96 = 1;
	volatile int32_t t23 = 367;

    t23 = ((x93>(x94!=x95))%x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	int16_t x98 = -6065;
	static int8_t x99 = -1;
	volatile int32_t t24 = -27810127;

    t24 = ((x97>(x98!=x99))%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static uint32_t x102 = UINT32_MAX;
	uint32_t x103 = UINT32_MAX;

    t25 = ((x101>(x102!=x103))%x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x106 = INT32_MAX;
	static int64_t t26 = 68832796209LL;

    t26 = ((x105>(x106!=x107))%x108);

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 642U;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MAX;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -485481333;

    t27 = ((x109>(x110!=x111))%x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -4LL;
	uint32_t x114 = 242507U;
	static volatile int32_t x116 = -140;

    t28 = ((x113>(x114!=x115))%x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 51658338418112LLU;
	uint8_t x118 = 13U;
	volatile int8_t x120 = INT8_MAX;
	int32_t t29 = 527142271;

    t29 = ((x117>(x118!=x119))%x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	static volatile uint64_t x122 = 13024616317LLU;
	static int32_t x124 = -1;

    t30 = ((x121>(x122!=x123))%x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -7060;
	static int16_t x126 = INT16_MAX;
	int16_t x127 = -1;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = 433027;

    t31 = ((x125>(x126!=x127))%x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	static uint64_t x130 = 27292244LLU;
	static uint8_t x131 = 14U;
	volatile uint64_t x132 = 4283384308087727369LLU;

    t32 = ((x129>(x130!=x131))%x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x133 = 28647693124751835LLU;
	volatile int8_t x134 = INT8_MAX;
	volatile int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;

    t33 = ((x133>(x134!=x135))%x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = -1LL;
	int64_t x138 = -1LL;
	int64_t x139 = INT64_MIN;
	volatile int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = 9LL;

    t34 = ((x137>(x138!=x139))%x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = -1;
	uint64_t x143 = 977498LLU;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t35 = -49908409;

    t35 = ((x141>(x142!=x143))%x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int64_t x146 = -132191557533153097LL;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 263362646;

    t36 = ((x145>(x146!=x147))%x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1;
	uint64_t x150 = 43070183799576LLU;
	volatile int64_t x151 = -1LL;
	uint64_t t37 = 2509650987LLU;

    t37 = ((x149>(x150!=x151))%x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x154 = INT32_MAX;
	uint8_t x156 = 2U;
	static int32_t t38 = 56;

    t38 = ((x153>(x154!=x155))%x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = 4U;
	uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t39 = -4573361789024090884LL;

    t39 = ((x157>(x158!=x159))%x160);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	int16_t x164 = 2;

    t40 = ((x161>(x162!=x163))%x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 5U;
	static int64_t x166 = INT64_MIN;
	volatile int32_t x167 = INT32_MIN;
	int32_t x168 = -18268131;
	volatile int32_t t41 = -4866;

    t41 = ((x165>(x166!=x167))%x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint64_t x170 = 2148644388272LLU;
	int64_t x171 = INT64_MIN;
	static int64_t t42 = 428073LL;

    t42 = ((x169>(x170!=x171))%x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	static volatile uint16_t x176 = UINT16_MAX;
	int32_t t43 = 0;

    t43 = ((x173>(x174!=x175))%x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 7U;
	int32_t x178 = -829563;
	uint64_t x179 = 24278090382343857LLU;

    t44 = ((x177>(x178!=x179))%x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int8_t x182 = 0;
	uint64_t x183 = 2870608LLU;
	uint32_t x184 = 4U;

    t45 = ((x181>(x182!=x183))%x184);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	volatile int64_t x186 = -237936959593LL;
	static int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 514;

    t46 = ((x185>(x186!=x187))%x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 60U;
	uint8_t x190 = 13U;
	static volatile int64_t x191 = -6551956925LL;
	volatile int64_t x192 = -6LL;

    t47 = ((x189>(x190!=x191))%x192);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = 39741225155945335LL;

    t48 = ((x193>(x194!=x195))%x196);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -511;
	uint32_t x198 = UINT32_MAX;
	volatile int32_t x199 = -1;
	static uint64_t x200 = 129935LLU;

    t49 = ((x197>(x198!=x199))%x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 31U;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -3464778LL;
	uint64_t x204 = 29340284005683LLU;

    t50 = ((x201>(x202!=x203))%x204);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x206 = 254;
	volatile int8_t x207 = -63;
	uint8_t x208 = 1U;
	static int32_t t51 = -1;

    t51 = ((x205>(x206!=x207))%x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x210 = -1;
	static uint8_t x211 = 2U;
	uint16_t x212 = 614U;

    t52 = ((x209>(x210!=x211))%x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 1525U;
	volatile int8_t x214 = INT8_MIN;
	uint16_t x215 = 1544U;
	int8_t x216 = -9;
	static volatile int32_t t53 = -7363240;

    t53 = ((x213>(x214!=x215))%x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 427019157246LLU;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MIN;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = 102;

    t54 = ((x217>(x218!=x219))%x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 10;
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = -7642;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 33308206174797LLU;

    t55 = ((x221>(x222!=x223))%x224);

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	static volatile int64_t x227 = INT64_MIN;
	static uint16_t x228 = 366U;

    t56 = ((x225>(x226!=x227))%x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x230 = 9394865987LLU;
	int32_t x232 = -1;
	static volatile int32_t t57 = -104;

    t57 = ((x229>(x230!=x231))%x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 56529804LLU;
	int8_t x236 = -1;

    t58 = ((x233>(x234!=x235))%x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = 32264757;
	int8_t x239 = INT8_MIN;
	int64_t x240 = INT64_MIN;
	int64_t t59 = 13LL;

    t59 = ((x237>(x238!=x239))%x240);

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 4U;
	uint32_t x244 = 105393U;

    t60 = ((x241>(x242!=x243))%x244);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = INT64_MAX;
	uint8_t x246 = UINT8_MAX;
	static int16_t x247 = -1932;
	int64_t x248 = INT64_MAX;
	int64_t t61 = -32238426LL;

    t61 = ((x245>(x246!=x247))%x248);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = UINT8_MAX;
	volatile int64_t x250 = 1254053LL;
	int8_t x251 = INT8_MAX;
	static uint8_t x252 = 97U;
	int32_t t62 = -31;

    t62 = ((x249>(x250!=x251))%x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x253 = 60U;
	int8_t x254 = INT8_MIN;
	int32_t x255 = 50887525;
	uint64_t x256 = 398216814945LLU;
	volatile uint64_t t63 = 117554136883389LLU;

    t63 = ((x253>(x254!=x255))%x256);

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 12341608717LLU;
	int16_t x259 = INT16_MAX;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = -550415;

    t64 = ((x257>(x258!=x259))%x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = 3060;
	static volatile uint8_t x263 = 3U;

    t65 = ((x261>(x262!=x263))%x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -12679185;
	uint64_t x266 = 155444616672099LLU;
	volatile uint8_t x267 = 10U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -31282;

    t66 = ((x265>(x266!=x267))%x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -122;
	static volatile int8_t x270 = -1;
	int16_t x271 = -3;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -7003;

    t67 = ((x269>(x270!=x271))%x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = 0;
	int64_t x274 = INT64_MAX;
	int64_t x275 = -494055332678929LL;
	static volatile uint64_t t68 = 113406250679228LLU;

    t68 = ((x273>(x274!=x275))%x276);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x279 = 59U;
	uint8_t x280 = 1U;
	int32_t t69 = -2;

    t69 = ((x277>(x278!=x279))%x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -266305825LL;
	int32_t x282 = -1;
	volatile int32_t t70 = 214543;

    t70 = ((x281>(x282!=x283))%x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -5;
	static int64_t x286 = -264240415LL;
	int8_t x287 = INT8_MAX;
	int32_t x288 = 13026138;

    t71 = ((x285>(x286!=x287))%x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MAX;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 104U;
	int32_t t72 = 100116454;

    t72 = ((x289>(x290!=x291))%x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	volatile int8_t x294 = -1;
	int64_t x295 = INT64_MIN;
	static int8_t x296 = 3;
	volatile int32_t t73 = -465;

    t73 = ((x293>(x294!=x295))%x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	uint16_t x298 = 11032U;
	uint8_t x299 = 46U;
	volatile int64_t x300 = 7262769923LL;
	int64_t t74 = -1LL;

    t74 = ((x297>(x298!=x299))%x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 1003U;
	int64_t x303 = -1831428805158LL;
	int64_t x304 = -1LL;
	int64_t t75 = 161079422LL;

    t75 = ((x301>(x302!=x303))%x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = 0U;
	int32_t x307 = INT32_MIN;
	int64_t x308 = 120672147192LL;
	static volatile int64_t t76 = -30290347938355LL;

    t76 = ((x305>(x306!=x307))%x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	static int16_t x310 = INT16_MAX;
	uint64_t x311 = UINT64_MAX;

    t77 = ((x309>(x310!=x311))%x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MIN;
	volatile int32_t x314 = -1;
	int16_t x315 = 4645;
	volatile uint64_t x316 = UINT64_MAX;
	uint64_t t78 = 134126631952LLU;

    t78 = ((x313>(x314!=x315))%x316);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x318 = -1;
	volatile int32_t x319 = -476186480;
	int32_t t79 = -420;

    t79 = ((x317>(x318!=x319))%x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = 3053042074250LLU;
	volatile int8_t x323 = INT8_MIN;
	volatile int32_t x324 = -381281;
	int32_t t80 = 55922;

    t80 = ((x321>(x322!=x323))%x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = UINT16_MAX;
	static volatile int64_t x327 = -5590995631LL;
	volatile uint32_t x328 = 33264U;
	volatile uint32_t t81 = 418734693U;

    t81 = ((x325>(x326!=x327))%x328);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	volatile int32_t x330 = -1;
	uint8_t x331 = 124U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -405151676;

    t82 = ((x329>(x330!=x331))%x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	static volatile int8_t x335 = INT8_MAX;
	int32_t t83 = -26184929;

    t83 = ((x333>(x334!=x335))%x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x338 = 10;
	int32_t x339 = -1;
	volatile int32_t x340 = INT32_MAX;
	volatile int32_t t84 = 4;

    t84 = ((x337>(x338!=x339))%x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 0U;
	static int64_t x342 = 375985LL;
	int16_t x343 = 21;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = 0;

    t85 = ((x341>(x342!=x343))%x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x346 = 6LLU;
	int8_t x348 = -1;
	static volatile int32_t t86 = 6241;

    t86 = ((x345>(x346!=x347))%x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	int64_t x350 = INT64_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t87 = 224687396844LLU;

    t87 = ((x349>(x350!=x351))%x352);

    if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x354 = 48299246486352LLU;
	int16_t x355 = INT16_MIN;
	uint16_t x356 = 8073U;
	volatile int32_t t88 = -11874;

    t88 = ((x353>(x354!=x355))%x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -9;
	int8_t x358 = INT8_MIN;
	uint64_t x359 = 92LLU;
	uint8_t x360 = 120U;
	volatile int32_t t89 = -11489301;

    t89 = ((x357>(x358!=x359))%x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	static uint32_t x362 = 78361065U;
	uint8_t x363 = 1U;
	int32_t t90 = -107;

    t90 = ((x361>(x362!=x363))%x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 50U;
	int16_t x366 = INT16_MAX;
	static volatile int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	int32_t t91 = 211781;

    t91 = ((x365>(x366!=x367))%x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	int32_t t92 = 1;

    t92 = ((x369>(x370!=x371))%x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	volatile uint8_t x376 = 4U;

    t93 = ((x373>(x374!=x375))%x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 1061U;
	int8_t x378 = -1;
	uint16_t x380 = 281U;
	volatile int32_t t94 = -129055988;

    t94 = ((x377>(x378!=x379))%x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x381 = 71U;
	volatile int8_t x382 = -1;
	int16_t x383 = -1;

    t95 = ((x381>(x382!=x383))%x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MAX;
	int16_t x387 = 16103;
	volatile uint64_t x388 = UINT64_MAX;

    t96 = ((x385>(x386!=x387))%x388);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = INT16_MAX;
	int32_t t97 = -114013;

    t97 = ((x389>(x390!=x391))%x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	uint16_t x394 = 3U;
	volatile int64_t x395 = -1LL;

    t98 = ((x393>(x394!=x395))%x396);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x398 = -1LL;
	int16_t x399 = -54;
	int32_t x400 = -1;
	volatile int32_t t99 = -757971827;

    t99 = ((x397>(x398!=x399))%x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = 48;
	uint16_t x402 = UINT16_MAX;
	uint8_t x403 = 102U;
	int64_t x404 = INT64_MAX;
	volatile int64_t t100 = -124316797969818634LL;

    t100 = ((x401>(x402!=x403))%x404);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x406 = -7;
	static uint64_t x407 = 8109LLU;
	volatile uint64_t t101 = 17034039909737781LLU;

    t101 = ((x405>(x406!=x407))%x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	static volatile uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 1472LLU;
	static int8_t x412 = INT8_MIN;
	int32_t t102 = -30366;

    t102 = ((x409>(x410!=x411))%x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -6689;
	uint8_t x415 = 47U;
	int16_t x416 = INT16_MAX;
	volatile int32_t t103 = -169;

    t103 = ((x413>(x414!=x415))%x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x420 = -434169724023960938LL;
	int64_t t104 = 64686LL;

    t104 = ((x417>(x418!=x419))%x420);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = 12;
	static int64_t x424 = 31LL;
	volatile int64_t t105 = 1LL;

    t105 = ((x421>(x422!=x423))%x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x426 = 3U;
	uint16_t x427 = 844U;
	uint64_t x428 = 817668132684LLU;
	volatile uint64_t t106 = 295690994223897419LLU;

    t106 = ((x425>(x426!=x427))%x428);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	int32_t x430 = 91;
	volatile int8_t x431 = 0;
	static int16_t x432 = 4495;
	volatile int32_t t107 = 459;

    t107 = ((x429>(x430!=x431))%x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int64_t x434 = 86284883042502030LL;
	int32_t x435 = -1;
	uint32_t x436 = 24U;
	static uint32_t t108 = 16058U;

    t108 = ((x433>(x434!=x435))%x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x438 = 1;
	int32_t x440 = -5376321;
	volatile int32_t t109 = -12067;

    t109 = ((x437>(x438!=x439))%x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x442 = 124851LLU;
	static uint64_t x443 = 109303384500238LLU;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t110 = 0LLU;

    t110 = ((x441>(x442!=x443))%x444);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x445 = 102U;
	int16_t x446 = 1;
	uint64_t x448 = 942963678843154562LLU;

    t111 = ((x445>(x446!=x447))%x448);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x450 = UINT64_MAX;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t112 = 290501506;

    t112 = ((x449>(x450!=x451))%x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = INT32_MIN;
	volatile int64_t x454 = INT64_MIN;
	int8_t x456 = -1;

    t113 = ((x453>(x454!=x455))%x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x458 = 13488U;
	volatile uint64_t x459 = 16105LLU;
	static volatile int32_t x460 = -5840;
	volatile int32_t t114 = -3;

    t114 = ((x457>(x458!=x459))%x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x462 = UINT8_MAX;
	uint16_t x463 = UINT16_MAX;
	int16_t x464 = 13;

    t115 = ((x461>(x462!=x463))%x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -6;
	static int16_t x466 = -1861;
	static volatile uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MAX;

    t116 = ((x465>(x466!=x467))%x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x470 = INT8_MAX;
	int32_t x471 = INT32_MIN;

    t117 = ((x469>(x470!=x471))%x472);

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x473 = INT8_MIN;
	uint64_t x475 = 45619857LLU;
	uint16_t x476 = 268U;
	static volatile int32_t t118 = -990091169;

    t118 = ((x473>(x474!=x475))%x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -221238307491LL;
	int16_t x478 = -430;
	volatile int64_t x479 = -1LL;
	static volatile int64_t t119 = 4451079514398936840LL;

    t119 = ((x477>(x478!=x479))%x480);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = -1LL;
	int32_t x482 = 0;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MAX;

    t120 = ((x481>(x482!=x483))%x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x486 = UINT64_MAX;
	volatile int32_t t121 = 163597;

    t121 = ((x485>(x486!=x487))%x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x490 = UINT8_MAX;
	uint8_t x492 = UINT8_MAX;
	int32_t t122 = -19495;

    t122 = ((x489>(x490!=x491))%x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x494 = -12LL;
	static int64_t x496 = INT64_MIN;

    t123 = ((x493>(x494!=x495))%x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	int32_t x499 = INT32_MIN;

    t124 = ((x497>(x498!=x499))%x500);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -1;
	int8_t x502 = INT8_MIN;
	int16_t x503 = -7;
	uint8_t x504 = 19U;
	volatile int32_t t125 = 2;

    t125 = ((x501>(x502!=x503))%x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 275769572127LLU;
	uint32_t x507 = 1281001064U;

    t126 = ((x505>(x506!=x507))%x508);

    if (t126 != 1LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 9333U;
	int64_t x510 = INT64_MIN;
	int32_t x511 = INT32_MIN;
	uint64_t x512 = 179707LLU;
	volatile uint64_t t127 = 7LLU;

    t127 = ((x509>(x510!=x511))%x512);

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MAX;
	int8_t x515 = -1;
	uint32_t x516 = 62U;

    t128 = ((x513>(x514!=x515))%x516);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	static uint8_t x519 = 6U;
	int64_t x520 = INT64_MIN;

    t129 = ((x517>(x518!=x519))%x520);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = INT8_MAX;
	int8_t x522 = INT8_MIN;
	uint8_t x523 = UINT8_MAX;
	volatile int32_t x524 = INT32_MIN;
	int32_t t130 = 123803;

    t130 = ((x521>(x522!=x523))%x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x525 = 435529U;
	static uint8_t x526 = UINT8_MAX;
	static volatile uint32_t x527 = 79268U;
	int64_t x528 = -8097170041LL;
	int64_t t131 = -334072448LL;

    t131 = ((x525>(x526!=x527))%x528);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x530 = INT16_MIN;
	static int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MAX;
	static volatile int32_t t132 = -113636124;

    t132 = ((x529>(x530!=x531))%x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = -1;
	uint8_t x534 = 3U;
	uint64_t x535 = 220849013717288252LLU;
	int32_t t133 = 1;

    t133 = ((x533>(x534!=x535))%x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 0U;
	volatile int8_t x538 = INT8_MIN;
	volatile int16_t x539 = 2;
	static uint64_t x540 = 502021537705LLU;

    t134 = ((x537>(x538!=x539))%x540);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x542 = -266;
	uint32_t x543 = 149100280U;
	volatile uint32_t t135 = 19U;

    t135 = ((x541>(x542!=x543))%x544);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 1;
	int32_t x546 = 6;
	int64_t x547 = INT64_MAX;
	uint8_t x548 = 23U;
	volatile int32_t t136 = -425692;

    t136 = ((x545>(x546!=x547))%x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	uint8_t x550 = UINT8_MAX;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t137 = 283582U;

    t137 = ((x549>(x550!=x551))%x552);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	int64_t x554 = INT64_MIN;
	uint16_t x555 = UINT16_MAX;
	int32_t x556 = INT32_MAX;
	volatile int32_t t138 = -374131;

    t138 = ((x553>(x554!=x555))%x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = -3694;
	static volatile int8_t x558 = 0;
	int8_t x559 = 0;
	volatile int32_t x560 = -3041;
	volatile int32_t t139 = -31146893;

    t139 = ((x557>(x558!=x559))%x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MAX;
	uint8_t x563 = 8U;
	int16_t x564 = INT16_MIN;
	int32_t t140 = -281841;

    t140 = ((x561>(x562!=x563))%x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	uint16_t x567 = UINT16_MAX;
	static int32_t x568 = -125922077;

    t141 = ((x565>(x566!=x567))%x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x574 = INT16_MIN;
	volatile int16_t x575 = INT16_MIN;

    t142 = ((x573>(x574!=x575))%x576);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x578 = 8;
	uint8_t x579 = 1U;
	volatile int8_t x580 = -39;
	int32_t t143 = 15272;

    t143 = ((x577>(x578!=x579))%x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = INT32_MIN;
	static uint16_t x582 = 1276U;
	int16_t x583 = INT16_MIN;
	int64_t x584 = -1LL;
	static volatile int64_t t144 = 1492061414LL;

    t144 = ((x581>(x582!=x583))%x584);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x585 = INT64_MAX;
	int16_t x586 = INT16_MIN;
	int16_t x587 = -1;
	static volatile int16_t x588 = INT16_MAX;

    t145 = ((x585>(x586!=x587))%x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = INT32_MAX;
	int8_t x590 = 0;
	int16_t x591 = INT16_MIN;
	volatile int64_t x592 = 1132769684096243840LL;

    t146 = ((x589>(x590!=x591))%x592);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x597 = 2440918330235960LL;
	int64_t x598 = INT64_MIN;
	static volatile int32_t x599 = INT32_MIN;
	uint64_t x600 = 51379LLU;
	static uint64_t t147 = 1859128917LLU;

    t147 = ((x597>(x598!=x599))%x600);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = INT32_MIN;
	uint8_t x602 = 0U;
	uint64_t x603 = UINT64_MAX;
	int32_t t148 = -9824258;

    t148 = ((x601>(x602!=x603))%x604);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x606 = INT32_MAX;
	int64_t x607 = INT64_MIN;
	int64_t x608 = INT64_MIN;

    t149 = ((x605>(x606!=x607))%x608);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x611 = UINT8_MAX;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t150 = -775135;

    t150 = ((x609>(x610!=x611))%x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x614 = INT16_MIN;
	int16_t x615 = 110;
	int8_t x616 = INT8_MAX;
	volatile int32_t t151 = -1;

    t151 = ((x613>(x614!=x615))%x616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x617 = -1;
	static int32_t x618 = INT32_MIN;
	uint64_t x619 = 1743179LLU;
	volatile uint64_t x620 = UINT64_MAX;
	uint64_t t152 = 6LLU;

    t152 = ((x617>(x618!=x619))%x620);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x621 = 3;
	static int8_t x622 = INT8_MIN;
	volatile uint32_t x623 = 9U;
	int32_t t153 = 199658738;

    t153 = ((x621>(x622!=x623))%x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x626 = 210889U;
	static int64_t x627 = INT64_MAX;
	uint64_t x628 = 6735LLU;
	volatile uint64_t t154 = 25166458358LLU;

    t154 = ((x625>(x626!=x627))%x628);

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = -480298LL;
	static volatile int64_t x631 = INT64_MIN;
	volatile int16_t x632 = -1188;
	volatile int32_t t155 = -116;

    t155 = ((x629>(x630!=x631))%x632);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x633 = -1;
	uint64_t x634 = UINT64_MAX;
	volatile int32_t x636 = INT32_MIN;
	static int32_t t156 = -22;

    t156 = ((x633>(x634!=x635))%x636);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x637 = -1LL;
	uint64_t x638 = UINT64_MAX;
	int16_t x639 = 3252;
	static int64_t x640 = INT64_MIN;
	volatile int64_t t157 = 1105259735004987LL;

    t157 = ((x637>(x638!=x639))%x640);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x641 = 5U;
	uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MIN;
	volatile int32_t t158 = 0;

    t158 = ((x641>(x642!=x643))%x644);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x645 = INT64_MIN;
	volatile int8_t x646 = INT8_MAX;
	volatile uint64_t x647 = UINT64_MAX;
	uint32_t x648 = 76073U;
	static volatile uint32_t t159 = 307912U;

    t159 = ((x645>(x646!=x647))%x648);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x649 = 59425U;
	int32_t x650 = INT32_MAX;
	int16_t x652 = INT16_MIN;

    t160 = ((x649>(x650!=x651))%x652);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x653 = INT64_MIN;
	int8_t x654 = 8;
	int16_t x655 = INT16_MIN;
	uint32_t x656 = 397552504U;

    t161 = ((x653>(x654!=x655))%x656);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x659 = INT32_MIN;
	uint16_t x660 = 4U;

    t162 = ((x657>(x658!=x659))%x660);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x661 = -1;
	int64_t x662 = -1LL;
	static uint8_t x663 = 2U;

    t163 = ((x661>(x662!=x663))%x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = -1;
	int32_t t164 = 6773;

    t164 = ((x665>(x666!=x667))%x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x669 = INT32_MAX;
	uint32_t x670 = 42593077U;
	volatile int64_t x671 = -1LL;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t165 = 20458077610LLU;

    t165 = ((x669>(x670!=x671))%x672);

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x673 = INT16_MAX;
	int64_t x674 = -4013123608542198899LL;
	static int8_t x675 = -9;
	uint64_t x676 = UINT64_MAX;

    t166 = ((x673>(x674!=x675))%x676);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x677 = 30;
	int8_t x678 = INT8_MAX;
	static int16_t x680 = 3;

    t167 = ((x677>(x678!=x679))%x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x681 = -229526933;
	uint16_t x682 = UINT16_MAX;
	static int16_t x683 = INT16_MIN;
	int16_t x684 = 8934;

    t168 = ((x681>(x682!=x683))%x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x685 = UINT32_MAX;
	uint16_t x686 = 0U;
	volatile int8_t x688 = INT8_MIN;

    t169 = ((x685>(x686!=x687))%x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x690 = -1;
	uint64_t x691 = 121LLU;
	int16_t x692 = -68;

    t170 = ((x689>(x690!=x691))%x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x693 = -1LL;
	int32_t x694 = INT32_MIN;
	static int16_t x695 = INT16_MIN;

    t171 = ((x693>(x694!=x695))%x696);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x697 = -1;
	int16_t x699 = INT16_MIN;
	uint16_t x700 = 9238U;
	volatile int32_t t172 = -27041;

    t172 = ((x697>(x698!=x699))%x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x701 = 11265U;
	volatile int64_t x702 = INT64_MIN;
	int64_t x703 = 1715605LL;
	int16_t x704 = -8;
	volatile int32_t t173 = 26883;

    t173 = ((x701>(x702!=x703))%x704);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x705 = UINT32_MAX;
	int64_t x707 = 16433430867920LL;
	static uint64_t x708 = 13368019LLU;
	uint64_t t174 = 826590472LLU;

    t174 = ((x705>(x706!=x707))%x708);

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x709 = -2;
	static int32_t x712 = -1753;

    t175 = ((x709>(x710!=x711))%x712);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x715 = UINT32_MAX;

    t176 = ((x713>(x714!=x715))%x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x717 = 29888353;
	uint16_t x718 = 0U;
	volatile uint32_t x719 = UINT32_MAX;
	volatile int8_t x720 = 1;
	static volatile int32_t t177 = -71381;

    t177 = ((x717>(x718!=x719))%x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x721 = 72084;
	static volatile int64_t x722 = INT64_MIN;
	uint8_t x723 = 74U;
	int16_t x724 = -1;
	int32_t t178 = 10109;

    t178 = ((x721>(x722!=x723))%x724);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x725 = 21U;
	volatile uint64_t x727 = 574LLU;
	int16_t x728 = 66;
	static int32_t t179 = 694;

    t179 = ((x725>(x726!=x727))%x728);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x729 = INT64_MIN;
	int32_t x730 = INT32_MIN;
	volatile uint64_t x731 = 768LLU;
	int16_t x732 = INT16_MAX;
	volatile int32_t t180 = -58;

    t180 = ((x729>(x730!=x731))%x732);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x733 = 130LL;
	uint8_t x735 = 55U;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t181 = -345;

    t181 = ((x733>(x734!=x735))%x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x740 = INT16_MIN;

    t182 = ((x737>(x738!=x739))%x740);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x741 = INT32_MIN;
	volatile int64_t x742 = INT64_MIN;
	int16_t x743 = INT16_MIN;
	static int32_t t183 = 992410;

    t183 = ((x741>(x742!=x743))%x744);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x746 = -13193;
	volatile int64_t x747 = 3597970216897LL;
	static int32_t t184 = 25;

    t184 = ((x745>(x746!=x747))%x748);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x749 = -1LL;
	int32_t x750 = -9805;
	uint16_t x751 = 2U;
	volatile int32_t t185 = -28335751;

    t185 = ((x749>(x750!=x751))%x752);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x753 = -1;
	uint64_t x755 = 27061LLU;
	volatile int64_t x756 = 20LL;
	volatile int64_t t186 = 2420084627LL;

    t186 = ((x753>(x754!=x755))%x756);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x757 = INT8_MAX;
	int64_t x758 = INT64_MIN;
	static volatile int8_t x759 = INT8_MIN;
	static uint64_t x760 = UINT64_MAX;
	volatile uint64_t t187 = 411266916249LLU;

    t187 = ((x757>(x758!=x759))%x760);

    if (t187 != 1LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x761 = UINT8_MAX;
	uint16_t x762 = 243U;
	int32_t x763 = 52;
	int64_t x764 = -2903709137LL;
	volatile int64_t t188 = 1LL;

    t188 = ((x761>(x762!=x763))%x764);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x765 = INT16_MAX;
	volatile int16_t x766 = 16;
	int8_t x767 = INT8_MAX;
	uint8_t x768 = 7U;
	static volatile int32_t t189 = 13335;

    t189 = ((x765>(x766!=x767))%x768);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x769 = -1;
	uint64_t x770 = 1840942960LLU;
	uint32_t x771 = 1U;
	uint16_t x772 = UINT16_MAX;
	int32_t t190 = -56;

    t190 = ((x769>(x770!=x771))%x772);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x775 = -526;
	volatile int32_t t191 = 231793;

    t191 = ((x773>(x774!=x775))%x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x777 = INT32_MIN;
	volatile int16_t x779 = INT16_MAX;
	static uint32_t x780 = 21208U;
	volatile uint32_t t192 = 379U;

    t192 = ((x777>(x778!=x779))%x780);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x781 = UINT16_MAX;
	uint32_t x783 = 1131794777U;
	volatile int8_t x784 = -24;
	int32_t t193 = -715955;

    t193 = ((x781>(x782!=x783))%x784);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x785 = -1;
	int32_t x786 = INT32_MIN;
	volatile int16_t x787 = 68;
	int32_t x788 = -1;
	static volatile int32_t t194 = 372047;

    t194 = ((x785>(x786!=x787))%x788);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x790 = 1689U;
	int64_t x791 = INT64_MAX;
	uint64_t x792 = 543842LLU;

    t195 = ((x789>(x790!=x791))%x792);

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x793 = INT32_MIN;
	int32_t x794 = INT32_MAX;
	int32_t x795 = INT32_MIN;
	uint64_t x796 = 2447284541086LLU;
	uint64_t t196 = 3333403457591LLU;

    t196 = ((x793>(x794!=x795))%x796);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x797 = 2097U;
	uint16_t x798 = 618U;
	uint8_t x799 = UINT8_MAX;
	volatile uint64_t x800 = 465641566LLU;
	volatile uint64_t t197 = 3878748012975521265LLU;

    t197 = ((x797>(x798!=x799))%x800);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x802 = 11U;
	volatile uint8_t x803 = 3U;
	static int8_t x804 = INT8_MIN;

    t198 = ((x801>(x802!=x803))%x804);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x805 = 1U;
	int8_t x806 = -34;
	static uint8_t x807 = 1U;
	volatile int64_t t199 = -15535226071LL;

    t199 = ((x805>(x806!=x807))%x808);

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

