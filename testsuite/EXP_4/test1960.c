
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

int8_t x1 = -1;
volatile int8_t x6 = INT8_MAX;
int32_t x11 = 111072;
volatile int32_t x14 = -23;
int32_t x16 = INT32_MIN;
uint16_t x25 = 30U;
int64_t x26 = INT64_MAX;
int64_t t6 = -44810LL;
volatile int16_t x41 = -1;
volatile uint32_t x45 = 132277519U;
int8_t x62 = 22;
int64_t x64 = INT64_MIN;
int64_t x66 = INT64_MIN;
volatile int32_t x69 = 3245;
int8_t x70 = INT8_MIN;
int32_t x71 = 2294315;
int16_t x78 = INT16_MIN;
volatile int32_t x80 = INT32_MAX;
static volatile int64_t t19 = -984880058131LL;
static uint16_t x82 = 22U;
uint8_t x89 = 1U;
uint16_t x91 = 197U;
volatile int64_t t22 = -18989LL;
static uint8_t x95 = 0U;
int16_t x96 = INT16_MIN;
static volatile uint64_t t23 = 4032902LLU;
volatile uint64_t t25 = 2644876174721LLU;
int32_t x107 = INT32_MIN;
int64_t x108 = -8179145557117693LL;
uint64_t t26 = 703LLU;
volatile uint64_t x109 = 1543307LLU;
volatile int16_t x115 = -62;
int64_t t28 = 11615231620843LL;
uint64_t x118 = UINT64_MAX;
uint32_t x119 = 2095U;
volatile uint64_t t29 = 470625905107281675LLU;
volatile int64_t t30 = -4194834800959681598LL;
int16_t x126 = INT16_MIN;
int8_t x127 = -1;
int16_t x128 = INT16_MIN;
int64_t t34 = 4377177156483LL;
static int8_t x145 = INT8_MIN;
int64_t x147 = INT64_MIN;
uint64_t x154 = 5381309634632LLU;
int16_t x160 = INT16_MAX;
volatile int32_t x169 = INT32_MIN;
static int64_t x173 = INT64_MAX;
static uint32_t t44 = 521911264U;
static uint8_t x192 = 1U;
volatile int32_t t48 = 42;
int32_t x199 = 130041;
static uint8_t x200 = UINT8_MAX;
int32_t x208 = -21122518;
int32_t x214 = 2222;
static int32_t x218 = -1;
uint64_t x229 = 7051819665723773LLU;
int32_t x231 = 15458832;
uint8_t x235 = 16U;
int32_t x236 = INT32_MIN;
int8_t x237 = INT8_MAX;
int32_t x238 = INT32_MAX;
int8_t x242 = 38;
uint16_t x254 = UINT16_MAX;
volatile int16_t x256 = INT16_MAX;
uint32_t x257 = UINT32_MAX;
int16_t x272 = INT16_MIN;
static volatile int32_t t68 = -8347322;
int32_t x280 = 120;
volatile int32_t t69 = -250;
uint32_t x283 = 859880U;
int16_t x294 = INT16_MAX;
volatile int64_t t74 = 586580744LL;
int32_t x301 = 368857650;
uint64_t t75 = 1LLU;
int8_t x305 = -1;
int32_t x306 = INT32_MIN;
static volatile int16_t x314 = -1;
static uint16_t x324 = UINT16_MAX;
int32_t t80 = -480620311;
int16_t x327 = 19;
uint32_t x328 = 231968474U;
uint8_t x333 = 5U;
volatile int16_t x336 = -77;
int8_t x337 = -1;
volatile int32_t x344 = INT32_MAX;
volatile int64_t t86 = -12281530LL;
uint32_t x350 = UINT32_MAX;
int32_t x352 = 41779;
uint8_t x358 = 45U;
static uint64_t x359 = 9886902LLU;
static int8_t x362 = INT8_MIN;
uint16_t x368 = 328U;
int32_t t91 = 64688;
uint16_t x371 = 1U;
volatile int32_t t92 = -29069;
int16_t x374 = INT16_MAX;
uint8_t x376 = 10U;
uint16_t x377 = 1623U;
uint32_t x381 = 31846U;
int32_t x383 = 0;
volatile int64_t t96 = 2177157602737LL;
uint64_t t97 = 127193865495LLU;
uint64_t t98 = 46039709466LLU;
int64_t x401 = INT64_MIN;
volatile int8_t x404 = -1;
volatile int64_t t100 = 6893866807574LL;
volatile uint8_t x408 = 0U;
static int64_t x409 = INT64_MAX;
int64_t t102 = -694381769762251LL;
uint16_t x417 = 18473U;
int16_t x419 = -3780;
volatile uint64_t x420 = 2LLU;
volatile int32_t t104 = 0;
int64_t x424 = -1LL;
int64_t x430 = -1LL;
volatile uint64_t t108 = 64513745943448LLU;
int8_t x441 = -1;
volatile int8_t x445 = -1;
uint16_t x447 = UINT16_MAX;
int16_t x452 = INT16_MAX;
int32_t x455 = INT32_MAX;
uint64_t x457 = 34LLU;
static volatile int64_t x461 = -149991LL;
int32_t x463 = 1477;
int64_t x468 = 34090488090145134LL;
uint16_t x471 = 219U;
volatile int32_t t117 = 5;
volatile int16_t x473 = -1;
int32_t x490 = INT32_MIN;
int64_t x504 = INT64_MIN;
int16_t x507 = -1;
int64_t x510 = INT64_MIN;
uint32_t x512 = UINT32_MAX;
int16_t x513 = INT16_MAX;
uint64_t t129 = 640062097272376426LLU;
uint16_t x521 = UINT16_MAX;
int16_t x523 = INT16_MAX;
uint8_t x524 = UINT8_MAX;
volatile int64_t t133 = 1652279441753LL;
int64_t x537 = 0LL;
int64_t x545 = INT64_MIN;
volatile int64_t t137 = -124942575337LL;
static int64_t t139 = 622617852336LL;
static volatile int16_t x571 = INT16_MIN;
static uint64_t x575 = UINT64_MAX;
static int8_t x576 = INT8_MIN;
int8_t x579 = -5;
int8_t x584 = INT8_MAX;
int8_t x586 = INT8_MIN;
uint8_t x588 = 8U;
volatile int32_t t146 = -7;
volatile int64_t x596 = 12530055498LL;
int32_t t149 = 16209;
uint16_t x602 = 41U;
volatile int64_t t152 = -6039989998LL;
int8_t x615 = 1;
volatile int8_t x617 = INT8_MIN;
volatile int64_t x619 = INT64_MAX;
volatile int16_t x625 = -1;
int16_t x639 = -7;
uint16_t x640 = 18U;
uint8_t x646 = UINT8_MAX;
static int64_t x650 = INT64_MAX;
static volatile uint32_t x657 = UINT32_MAX;
uint16_t x658 = 64U;
int64_t t168 = -254LL;
int32_t x679 = 10118435;
static volatile int32_t x689 = 5552983;
static int16_t x693 = INT16_MIN;
int32_t t173 = 194847890;
volatile uint32_t x707 = 32494U;
volatile int32_t t176 = -182;
uint64_t x709 = 166675061LLU;
static uint8_t x710 = 0U;
volatile int32_t x718 = INT32_MIN;
int32_t t179 = -63356;
static uint32_t x725 = UINT32_MAX;
volatile int32_t t184 = 8;
volatile uint8_t x741 = UINT8_MAX;
int64_t t187 = -136372682297387LL;
static int64_t x756 = -541549495623LL;
int32_t x758 = INT32_MIN;
volatile uint64_t x766 = 16268096902668562LLU;
uint64_t x768 = 2LLU;
volatile int32_t t192 = 2273956;
int64_t x777 = 5489541460LL;
static int8_t x781 = INT8_MIN;
uint64_t x782 = UINT64_MAX;
int32_t x792 = -1;
volatile int16_t x794 = INT16_MAX;
static int32_t t198 = 13;
int32_t x797 = INT32_MAX;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	volatile uint8_t x4 = 4U;
	static volatile int64_t t0 = -1462122343011431LL;

    t0 = (x1^(x2^(x3<=x4)));

    if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = INT8_MIN;
	uint16_t x7 = 2798U;
	volatile int8_t x8 = 1;
	static volatile int32_t t1 = -722324;

    t1 = (x5^(x6^(x7<=x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MIN;
	volatile int32_t x12 = -37;
	int32_t t2 = -12;

    t2 = (x9^(x10^(x11<=x12)));

    if (t2 != 2147483520) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 5923LLU;
	int16_t x15 = INT16_MIN;
	static volatile uint64_t t3 = 485571LLU;

    t3 = (x13^(x14^(x15<=x16)));

    if (t3 != 18446744073709545674LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 16U;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -1;
	static int16_t x20 = 1;
	uint64_t t4 = 35LLU;

    t4 = (x17^(x18^(x19<=x20)));

    if (t4 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 0;
	int32_t x22 = INT32_MIN;
	int16_t x23 = INT16_MAX;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 3648;

    t5 = (x21^(x22^(x23<=x24)));

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = 2104200707LLU;

    t6 = (x25^(x26^(x27<=x28)));

    if (t6 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MIN;
	int8_t x30 = 2;
	int64_t x31 = 609611678860152754LL;
	int16_t x32 = -1;
	volatile int32_t t7 = 20680325;

    t7 = (x29^(x30^(x31<=x32)));

    if (t7 != -2147483646) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 70514647LLU;
	int64_t x36 = INT64_MIN;
	volatile uint32_t t8 = 1940U;

    t8 = (x33^(x34^(x35<=x36)));

    if (t8 != 32766U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	volatile int32_t x39 = -175157160;
	int8_t x40 = INT8_MIN;
	int64_t t9 = -34996413698235759LL;

    t9 = (x37^(x38^(x39<=x40)));

    if (t9 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = 12U;
	static int8_t x43 = 3;
	static uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 3966402;

    t10 = (x41^(x42^(x43<=x44)));

    if (t10 != -14) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x46 = INT16_MAX;
	int8_t x47 = 3;
	uint8_t x48 = UINT8_MAX;
	static volatile uint32_t t11 = 47637U;

    t11 = (x45^(x46^(x47<=x48)));

    if (t11 != 132258545U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MIN;
	uint32_t x50 = 31531U;
	static int8_t x51 = INT8_MIN;
	static volatile int64_t x52 = -4460656138026620704LL;
	int64_t t12 = -427365714LL;

    t12 = (x49^(x50^(x51<=x52)));

    if (t12 != -9223372036854744277LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	volatile int32_t x54 = -3540353;
	int64_t x55 = INT64_MIN;
	volatile int32_t x56 = -1;
	int32_t t13 = -76769;

    t13 = (x53^(x54^(x55<=x56)));

    if (t13 != 3540353) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = UINT32_MAX;
	int8_t x58 = INT8_MAX;
	static volatile int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 455075047U;

    t14 = (x57^(x58^(x59<=x60)));

    if (t14 != 4294967169U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	static int8_t x63 = INT8_MIN;
	int32_t t15 = -43828;

    t15 = (x61^(x62^(x63<=x64)));

    if (t15 != 105) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 406548550;
	static uint32_t x67 = 7688U;
	int8_t x68 = INT8_MIN;
	int64_t t16 = 31712940592286LL;

    t16 = (x65^(x66^(x67<=x68)));

    if (t16 != -9223372036448227257LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x72 = 1810150;
	static int32_t t17 = 4017651;

    t17 = (x69^(x70^(x71<=x72)));

    if (t17 != -3283) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 5354;
	int32_t x74 = -8295926;
	int8_t x75 = 20;
	static int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -68951;

    t18 = (x73^(x74^(x75<=x76)));

    if (t18 != -8290591) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = 1457225368024690LL;
	int8_t x79 = INT8_MAX;

    t19 = (x77^(x78^(x79<=x80)));

    if (t19 != -1457225368029581LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	static uint16_t x83 = 27638U;
	static volatile int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = 261410732;

    t20 = (x81^(x82^(x83<=x84)));

    if (t20 != -23) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile uint32_t x86 = 10335U;
	int16_t x87 = 95;
	static uint32_t x88 = UINT32_MAX;
	uint32_t t21 = 22156U;

    t21 = (x85^(x86^(x87<=x88)));

    if (t21 != 10401U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = INT64_MIN;
	int8_t x92 = -1;

    t22 = (x89^(x90^(x91<=x92)));

    if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;

    t23 = (x93^(x94^(x95<=x96)));

    if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 3992LLU;
	uint8_t x98 = 7U;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MAX;
	volatile uint64_t t24 = 89168LLU;

    t24 = (x97^(x98^(x99<=x100)));

    if (t24 != 3998LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 5800253598809427LLU;
	static volatile int32_t x102 = -96019;
	static int64_t x103 = 4091LL;
	uint32_t x104 = 1564930685U;

    t25 = (x101^(x102^(x103<=x104)));

    if (t25 != 18440943820110804415LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x105 = 7086320349023614LLU;
	int8_t x106 = -1;

    t26 = (x105^(x106^(x107<=x108)));

    if (t26 != 18439657753360528001LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x110 = 975922845663229LLU;
	int64_t x111 = INT64_MAX;
	uint16_t x112 = UINT16_MAX;
	uint64_t t27 = 2451634665898LLU;

    t27 = (x109^(x110^(x111<=x112)));

    if (t27 != 975922846806902LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint32_t x114 = 707U;
	static int8_t x116 = 17;

    t28 = (x113^(x114^(x115<=x116)));

    if (t28 != -9223372036854775102LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	uint64_t x120 = UINT64_MAX;

    t29 = (x117^(x118^(x119<=x120)));

    if (t29 != 2147483646LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint16_t x122 = UINT16_MAX;
	uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 15611U;

    t30 = (x121^(x122^(x123<=x124)));

    if (t30 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	static volatile int32_t t31 = -11500940;

    t31 = (x125^(x126^(x127<=x128)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	uint8_t x130 = UINT8_MAX;
	volatile int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MAX;
	volatile int64_t t32 = 6144847429361177LL;

    t32 = (x129^(x130^(x131<=x132)));

    if (t32 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	volatile uint64_t x134 = 2344396209LLU;
	int8_t x135 = INT8_MAX;
	uint16_t x136 = UINT16_MAX;
	static volatile uint64_t t33 = 9628031173566441LLU;

    t33 = (x133^(x134^(x135<=x136)));

    if (t33 != 18446744071365141936LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = -400845LL;
	static uint32_t x139 = UINT32_MAX;
	volatile int8_t x140 = INT8_MIN;

    t34 = (x137^(x138^(x139<=x140)));

    if (t34 != 2147082803LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -529358;
	static int8_t x142 = 1;
	int16_t x143 = -1;
	int32_t x144 = -287078;
	static volatile int32_t t35 = 1;

    t35 = (x141^(x142^(x143<=x144)));

    if (t35 != -529357) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x146 = UINT16_MAX;
	volatile int32_t x148 = -1;
	int32_t t36 = -792367;

    t36 = (x145^(x146^(x147<=x148)));

    if (t36 != -65410) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = -1;
	static int32_t x150 = INT32_MIN;
	int16_t x151 = -7;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = -755;

    t37 = (x149^(x150^(x151<=x152)));

    if (t37 != 2147483646) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 220;
	int16_t x155 = -1;
	static int64_t x156 = -1LL;
	volatile uint64_t t38 = 1233660138LLU;

    t38 = (x153^(x154^(x155<=x156)));

    if (t38 != 5381309634709LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MIN;
	int8_t x158 = 0;
	volatile int32_t x159 = INT32_MIN;
	int64_t t39 = -178873217762LL;

    t39 = (x157^(x158^(x159<=x160)));

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	volatile int32_t x162 = -192363;
	volatile int32_t x163 = INT32_MIN;
	int32_t x164 = -1;
	static volatile int32_t t40 = -219392642;

    t40 = (x161^(x162^(x163<=x164)));

    if (t40 != 192276) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 59196LLU;
	uint64_t x166 = 7308851149569512379LLU;
	int8_t x167 = -1;
	int64_t x168 = -2408166942407LL;
	uint64_t t41 = 190791642LLU;

    t41 = (x165^(x166^(x167<=x168)));

    if (t41 != 7308851149569471623LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MIN;
	volatile int64_t x171 = 707219030429310LL;
	uint8_t x172 = UINT8_MAX;
	int32_t t42 = 7031;

    t42 = (x169^(x170^(x171<=x172)));

    if (t42 != 2147483520) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x174 = INT32_MAX;
	uint8_t x175 = 2U;
	volatile int32_t x176 = INT32_MIN;
	int64_t t43 = -2425613379LL;

    t43 = (x173^(x174^(x175<=x176)));

    if (t43 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 60U;
	int8_t x178 = 1;
	int8_t x179 = -1;
	int64_t x180 = -1LL;

    t44 = (x177^(x178^(x179<=x180)));

    if (t44 != 60U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -1;
	int64_t x182 = -1LL;
	uint16_t x183 = 2556U;
	static int8_t x184 = -1;
	volatile int64_t t45 = -48233928LL;

    t45 = (x181^(x182^(x183<=x184)));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = UINT64_MAX;
	volatile int16_t x186 = -481;
	static volatile uint16_t x187 = UINT16_MAX;
	int32_t x188 = -1;
	uint64_t t46 = 308472921LLU;

    t46 = (x185^(x186^(x187<=x188)));

    if (t46 != 480LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	static uint32_t x190 = UINT32_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile uint32_t t47 = 512U;

    t47 = (x189^(x190^(x191<=x192)));

    if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	static int32_t x195 = 466;
	volatile uint64_t x196 = 839710157158644075LLU;

    t48 = (x193^(x194^(x195<=x196)));

    if (t48 != 2147450881) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	int8_t x198 = INT8_MIN;
	int32_t t49 = -389622;

    t49 = (x197^(x198^(x199<=x200)));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x201 = 191354199U;
	int8_t x202 = 0;
	int8_t x203 = -15;
	uint8_t x204 = 0U;
	volatile uint32_t t50 = 4447692U;

    t50 = (x201^(x202^(x203<=x204)));

    if (t50 != 191354198U) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = UINT16_MAX;
	int64_t x206 = INT64_MIN;
	static uint16_t x207 = 1007U;
	static volatile int64_t t51 = -67350LL;

    t51 = (x205^(x206^(x207<=x208)));

    if (t51 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	volatile int16_t x210 = 29;
	volatile int16_t x211 = -1;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 2407;

    t52 = (x209^(x210^(x211<=x212)));

    if (t52 != -30) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x213 = 14343U;
	static uint32_t x215 = UINT32_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile uint32_t t53 = 378764498U;

    t53 = (x213^(x214^(x215<=x216)));

    if (t53 != 12457U) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	uint32_t x219 = 92U;
	int64_t x220 = -1LL;
	volatile int32_t t54 = -55;

    t54 = (x217^(x218^(x219<=x220)));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = 5;
	int16_t x222 = 106;
	static int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -120079;

    t55 = (x221^(x222^(x223<=x224)));

    if (t55 != 111) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = INT64_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -1;
	static int64_t x228 = INT64_MIN;
	int64_t t56 = -241540LL;

    t56 = (x225^(x226^(x227<=x228)));

    if (t56 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = INT32_MAX;
	static int32_t x232 = 1;
	volatile uint64_t t57 = 2987LLU;

    t57 = (x229^(x230^(x231<=x232)));

    if (t57 != 7051819994705538LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 2120056U;
	uint32_t x234 = 84U;
	volatile uint32_t t58 = 15U;

    t58 = (x233^(x234^(x235<=x236)));

    if (t58 != 2119980U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x239 = 1934U;
	int64_t x240 = 4486266316892236LL;
	int32_t t59 = 84556565;

    t59 = (x237^(x238^(x239<=x240)));

    if (t59 != 2147483521) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	static volatile uint16_t x243 = 6U;
	volatile uint8_t x244 = 20U;
	volatile uint64_t t60 = 43888011LLU;

    t60 = (x241^(x242^(x243<=x244)));

    if (t60 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 2433186U;
	volatile uint16_t x246 = 16873U;
	int64_t x247 = INT64_MIN;
	static volatile uint16_t x248 = 98U;
	volatile uint32_t t61 = 24538U;

    t61 = (x245^(x246^(x247<=x248)));

    if (t61 != 2449738U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	static int64_t x252 = -1926734352278669015LL;
	volatile uint32_t t62 = 2U;

    t62 = (x249^(x250^(x251<=x252)));

    if (t62 != 4294901760U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	volatile int8_t x255 = INT8_MAX;
	volatile int32_t t63 = 1033127515;

    t63 = (x253^(x254^(x255<=x256)));

    if (t63 != -2147418114) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x258 = UINT32_MAX;
	uint16_t x259 = 0U;
	static int16_t x260 = INT16_MIN;
	volatile uint32_t t64 = 3U;

    t64 = (x257^(x258^(x259<=x260)));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int16_t x262 = INT16_MIN;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = -1LL;
	int32_t t65 = -119350153;

    t65 = (x261^(x262^(x263<=x264)));

    if (t65 != -2147450882) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x265 = INT16_MAX;
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	int16_t x268 = INT16_MIN;
	volatile int64_t t66 = -203304806539946334LL;

    t66 = (x265^(x266^(x267<=x268)));

    if (t66 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	volatile int64_t x270 = INT64_MIN;
	int16_t x271 = -1;
	static volatile int64_t t67 = 2301LL;

    t67 = (x269^(x270^(x271<=x272)));

    if (t67 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = UINT8_MAX;
	uint16_t x274 = 1224U;
	uint16_t x275 = 21U;
	uint64_t x276 = 223980334594818024LLU;

    t68 = (x273^(x274^(x275<=x276)));

    if (t68 != 1078) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 6U;
	int8_t x278 = -18;
	uint8_t x279 = 58U;

    t69 = (x277^(x278^(x279<=x280)));

    if (t69 != -23) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x281 = -1;
	static int16_t x282 = -1;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 1897717;

    t70 = (x281^(x282^(x283<=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 87152205U;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = -1;
	volatile int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = 258858LLU;

    t71 = (x285^(x286^(x287<=x288)));

    if (t71 != 18446744073622399410LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -1;
	static uint32_t x290 = UINT32_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;
	uint32_t t72 = 432584458U;

    t72 = (x289^(x290^(x291<=x292)));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	uint64_t x295 = 1021LLU;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 118;

    t73 = (x293^(x294^(x295<=x296)));

    if (t73 != 2147450881) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -1;

    t74 = (x297^(x298^(x299<=x300)));

    if (t74 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x302 = 1153232747182305497LLU;
	int32_t x303 = 148085;
	static int16_t x304 = 405;

    t75 = (x301^(x302^(x303<=x304)));

    if (t75 != 1153232747378664171LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x307 = 34;
	static uint32_t x308 = UINT32_MAX;
	static volatile int32_t t76 = -2;

    t76 = (x305^(x306^(x307<=x308)));

    if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	int8_t x310 = -47;
	int16_t x311 = INT16_MIN;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t77 = -1250615;

    t77 = (x309^(x310^(x311<=x312)));

    if (t77 != -2147483601) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 117688032053LLU;
	int8_t x315 = 4;
	int64_t x316 = 1158907620929090LL;
	uint64_t t78 = 42589926670771325LLU;

    t78 = (x313^(x314^(x315<=x316)));

    if (t78 != 18446743956021519563LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	volatile int16_t x318 = INT16_MAX;
	volatile int16_t x319 = -1810;
	int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -232547790;

    t79 = (x317^(x318^(x319<=x320)));

    if (t79 != -32642) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = -46;
	int8_t x322 = 2;
	uint64_t x323 = UINT64_MAX;

    t80 = (x321^(x322^(x323<=x324)));

    if (t80 != -48) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	volatile uint32_t t81 = 46127U;

    t81 = (x325^(x326^(x327<=x328)));

    if (t81 != 2147483646U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = 196640587;
	static int64_t x330 = 6217LL;
	static int8_t x331 = -1;
	int8_t x332 = 1;
	int64_t t82 = -33866259738616454LL;

    t82 = (x329^(x330^(x331<=x332)));

    if (t82 != 196634371LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -1;
	static int8_t x335 = -1;
	int32_t t83 = -19525;

    t83 = (x333^(x334^(x335<=x336)));

    if (t83 != -6) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MIN;
	int32_t x339 = -13137;
	int64_t x340 = 261391993769252618LL;
	volatile int32_t t84 = -46861954;

    t84 = (x337^(x338^(x339<=x340)));

    if (t84 != 32766) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x342 = 57LL;
	int64_t x343 = -1LL;
	static volatile int64_t t85 = -170403944845LL;

    t85 = (x341^(x342^(x343<=x344)));

    if (t85 != -32712LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 237U;
	int64_t x346 = -1LL;
	static int64_t x347 = -157702629966549325LL;
	static int32_t x348 = INT32_MAX;

    t86 = (x345^(x346^(x347<=x348)));

    if (t86 != -237LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = 1;
	static uint32_t x351 = 64268U;
	volatile uint32_t t87 = 2011872687U;

    t87 = (x349^(x350^(x351<=x352)));

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 2;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int32_t x356 = 473346087;
	int32_t t88 = -158;

    t88 = (x353^(x354^(x355<=x356)));

    if (t88 != -125) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	volatile int64_t x360 = -1595LL;
	int32_t t89 = 96328;

    t89 = (x357^(x358^(x359<=x360)));

    if (t89 != -45) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = INT8_MIN;
	int16_t x363 = 449;
	int64_t x364 = -1247919LL;
	int32_t t90 = 5;

    t90 = (x361^(x362^(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 1U;
	volatile int8_t x366 = INT8_MAX;
	int64_t x367 = 652814LL;

    t91 = (x365^(x366^(x367<=x368)));

    if (t91 != 126) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 0U;
	int32_t x370 = -1;
	uint16_t x372 = 1610U;

    t92 = (x369^(x370^(x371<=x372)));

    if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x373 = INT8_MIN;
	volatile int64_t x375 = INT64_MIN;
	static volatile int32_t t93 = 411;

    t93 = (x373^(x374^(x375<=x376)));

    if (t93 != -32642) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x378 = -1LL;
	int8_t x379 = -1;
	uint32_t x380 = 1909231U;
	int64_t t94 = -7675244753705LL;

    t94 = (x377^(x378^(x379<=x380)));

    if (t94 != -1624LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MIN;
	volatile uint32_t x384 = 685U;
	int64_t t95 = -91993842490523830LL;

    t95 = (x381^(x382^(x383<=x384)));

    if (t95 != -9223372036854743961LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = -14LL;
	static uint8_t x386 = UINT8_MAX;
	uint32_t x387 = UINT32_MAX;
	uint8_t x388 = 22U;

    t96 = (x385^(x386^(x387<=x388)));

    if (t96 != -243LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x389 = UINT64_MAX;
	int32_t x390 = -124;
	int8_t x391 = 7;
	volatile uint16_t x392 = 56U;

    t97 = (x389^(x390^(x391<=x392)));

    if (t97 != 122LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 760LLU;
	uint64_t x394 = 17900789654981627LLU;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;

    t98 = (x393^(x394^(x395<=x396)));

    if (t98 != 17900789654980867LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	uint8_t x398 = 1U;
	static int8_t x399 = INT8_MAX;
	static volatile int32_t x400 = INT32_MAX;
	static int32_t t99 = INT32_MIN;

    t99 = (x397^(x398^(x399<=x400)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x402 = 13U;
	volatile int64_t x403 = INT64_MAX;

    t100 = (x401^(x402^(x403<=x404)));

    if (t100 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = 674739U;
	static int32_t x407 = 21168;
	uint32_t t101 = 427067934U;

    t101 = (x405^(x406^(x407<=x408)));

    if (t101 != 4294298547U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MAX;
	int64_t x412 = INT64_MIN;

    t102 = (x409^(x410^(x411<=x412)));

    if (t102 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -1;
	uint32_t x414 = 525904957U;
	volatile int8_t x415 = 14;
	int32_t x416 = 1;
	uint32_t t103 = 421792U;

    t103 = (x413^(x414^(x415<=x416)));

    if (t103 != 3769062338U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x418 = 1733;

    t104 = (x417^(x418^(x419<=x420)));

    if (t104 != 20204) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 1;
	int8_t x422 = 1;
	uint16_t x423 = 29U;
	int32_t t105 = 6764;

    t105 = (x421^(x422^(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	static int16_t x426 = 3735;
	int16_t x427 = INT16_MAX;
	uint8_t x428 = 1U;
	volatile int32_t t106 = -15;

    t106 = (x425^(x426^(x427<=x428)));

    if (t106 != -29033) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	int32_t x431 = -4863933;
	volatile int8_t x432 = INT8_MIN;
	static int64_t t107 = 1102755LL;

    t107 = (x429^(x430^(x431<=x432)));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	uint64_t x434 = UINT64_MAX;
	int64_t x435 = INT64_MIN;
	static volatile int64_t x436 = INT64_MAX;

    t108 = (x433^(x434^(x435<=x436)));

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	static volatile int16_t x438 = INT16_MIN;
	int64_t x439 = -1LL;
	volatile uint32_t x440 = UINT32_MAX;
	int32_t t109 = -3851014;

    t109 = (x437^(x438^(x439<=x440)));

    if (t109 != 32766) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 1204U;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MAX;
	volatile uint32_t t110 = 503U;

    t110 = (x441^(x442^(x443<=x444)));

    if (t110 != 4294966090U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x446 = -1;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t111 = 1;

    t111 = (x445^(x446^(x447<=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -1LL;
	int8_t x450 = INT8_MAX;
	uint16_t x451 = 1452U;
	volatile int64_t t112 = 3718683LL;

    t112 = (x449^(x450^(x451<=x452)));

    if (t112 != -127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MIN;
	static uint32_t x454 = 105960U;
	int64_t x456 = INT64_MIN;
	volatile uint32_t t113 = 21427U;

    t113 = (x453^(x454^(x455<=x456)));

    if (t113 != 4294843880U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x458 = 11112U;
	static int32_t x459 = INT32_MIN;
	int64_t x460 = -8359554061161LL;
	uint64_t t114 = 820361774LLU;

    t114 = (x457^(x458^(x459<=x460)));

    if (t114 != 11082LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = -40;
	static int16_t x464 = -1;
	volatile int64_t t115 = -6LL;

    t115 = (x461^(x462^(x463<=x464)));

    if (t115 != 149953LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int64_t x466 = 222LL;
	int16_t x467 = INT16_MIN;
	volatile int64_t t116 = -32648361LL;

    t116 = (x465^(x466^(x467<=x468)));

    if (t116 != -161LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	static int16_t x470 = INT16_MIN;
	uint16_t x472 = UINT16_MAX;

    t117 = (x469^(x470^(x471<=x472)));

    if (t117 != 32766) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = 11164375LL;
	int64_t x475 = INT64_MIN;
	volatile int8_t x476 = INT8_MAX;
	volatile int64_t t118 = 218LL;

    t118 = (x473^(x474^(x475<=x476)));

    if (t118 != -11164375LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	volatile int16_t x478 = INT16_MAX;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = INT64_MAX;
	volatile int32_t t119 = 1324;

    t119 = (x477^(x478^(x479<=x480)));

    if (t119 != -32642) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 3;
	int8_t x482 = 1;
	int32_t x483 = INT32_MIN;
	int8_t x484 = 56;
	int32_t t120 = 2450;

    t120 = (x481^(x482^(x483<=x484)));

    if (t120 != 3) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 27711U;
	uint16_t x486 = 1U;
	volatile int16_t x487 = -171;
	int32_t x488 = INT32_MIN;
	int32_t t121 = -5;

    t121 = (x485^(x486^(x487<=x488)));

    if (t121 != 27710) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 3;
	uint16_t x491 = 70U;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = -457686624;

    t122 = (x489^(x490^(x491<=x492)));

    if (t122 != -2147483646) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -3575870;
	volatile int8_t x494 = INT8_MAX;
	int8_t x495 = -1;
	uint16_t x496 = 24817U;
	volatile int32_t t123 = 1866;

    t123 = (x493^(x494^(x495<=x496)));

    if (t123 != -3575876) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile int64_t x498 = 302661869374LL;
	static int8_t x499 = -13;
	volatile int32_t x500 = 48;
	volatile uint64_t t124 = 1793LLU;

    t124 = (x497^(x498^(x499<=x500)));

    if (t124 != 18446743771047682240LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	volatile int32_t t125 = 111;

    t125 = (x501^(x502^(x503<=x504)));

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -381914115;
	int8_t x506 = -1;
	uint32_t x508 = 1938U;
	volatile int32_t t126 = -516417;

    t126 = (x505^(x506^(x507<=x508)));

    if (t126 != 381914114) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	int16_t x511 = -1;
	int64_t t127 = 238160LL;

    t127 = (x509^(x510^(x511<=x512)));

    if (t127 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = -1;
	uint64_t x515 = 2789523123984442LLU;
	int16_t x516 = -1;
	static volatile int32_t t128 = 18862;

    t128 = (x513^(x514^(x515<=x516)));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	uint64_t x518 = 3858947404975634LLU;
	static int16_t x519 = INT16_MIN;
	static int64_t x520 = 4357923077054LL;

    t129 = (x517^(x518^(x519<=x520)));

    if (t129 != 9227230984259751443LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = -1;
	volatile int32_t t130 = -1;

    t130 = (x521^(x522^(x523<=x524)));

    if (t130 != -65536) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	uint8_t x526 = 105U;
	static uint64_t x527 = 150205100761834LLU;
	uint64_t x528 = 3976562893965LLU;
	static volatile int32_t t131 = -24555104;

    t131 = (x525^(x526^(x527<=x528)));

    if (t131 != 150) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 2060;
	uint8_t x530 = UINT8_MAX;
	int16_t x531 = INT16_MAX;
	int8_t x532 = INT8_MIN;
	static int32_t t132 = 132716;

    t132 = (x529^(x530^(x531<=x532)));

    if (t132 != 2291) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 12569U;
	static int64_t x534 = 145849062LL;
	int16_t x535 = INT16_MAX;
	int8_t x536 = 0;

    t133 = (x533^(x534^(x535<=x536)));

    if (t133 != 145837055LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = INT64_MIN;
	static int32_t x539 = -33;
	volatile int32_t x540 = 1649;
	int64_t t134 = -8373831797560701LL;

    t134 = (x537^(x538^(x539<=x540)));

    if (t134 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x542 = -1;
	int16_t x543 = -5806;
	int32_t x544 = INT32_MIN;
	volatile int32_t t135 = 228;

    t135 = (x541^(x542^(x543<=x544)));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MIN;
	int16_t x547 = 351;
	int16_t x548 = INT16_MAX;
	volatile int64_t t136 = -9045082112726LL;

    t136 = (x545^(x546^(x547<=x548)));

    if (t136 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	static uint32_t x550 = 45984682U;
	static int8_t x551 = INT8_MIN;
	int32_t x552 = -1;

    t137 = (x549^(x550^(x551<=x552)));

    if (t137 != 9223372036808791124LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 466901606351159LLU;
	static volatile int16_t x554 = 6;
	int8_t x555 = INT8_MIN;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t138 = 504223979433LLU;

    t138 = (x553^(x554^(x555<=x556)));

    if (t138 != 466901606351153LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = -1LL;
	uint32_t x558 = UINT32_MAX;
	int64_t x559 = 4662169LL;
	int8_t x560 = 6;

    t139 = (x557^(x558^(x559<=x560)));

    if (t139 != -4294967296LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 1;
	int8_t x562 = INT8_MAX;
	static int8_t x563 = -1;
	volatile int16_t x564 = -1;
	volatile int32_t t140 = -1;

    t140 = (x561^(x562^(x563<=x564)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	static int8_t x566 = 0;
	volatile int64_t x567 = INT64_MIN;
	uint64_t x568 = 5LLU;
	int32_t t141 = -93;

    t141 = (x565^(x566^(x567<=x568)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	static int64_t x570 = -58178203LL;
	int32_t x572 = -526027132;
	volatile int64_t t142 = -494107LL;

    t142 = (x569^(x570^(x571<=x572)));

    if (t142 != -58178150LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	static int32_t x574 = INT32_MIN;
	int32_t t143 = -166;

    t143 = (x573^(x574^(x575<=x576)));

    if (t143 != 2147483520) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x577 = 50U;
	int64_t x578 = -1LL;
	uint8_t x580 = UINT8_MAX;
	int64_t t144 = -6313LL;

    t144 = (x577^(x578^(x579<=x580)));

    if (t144 != -52LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	volatile uint8_t x582 = UINT8_MAX;
	volatile int32_t x583 = -4;
	int32_t t145 = 81;

    t145 = (x581^(x582^(x583<=x584)));

    if (t145 != -255) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	int64_t x587 = INT64_MAX;

    t146 = (x585^(x586^(x587<=x588)));

    if (t146 != 2147483520) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = -1;
	uint32_t x590 = UINT32_MAX;
	volatile uint8_t x591 = 73U;
	int32_t x592 = INT32_MAX;
	volatile uint32_t t147 = 15U;

    t147 = (x589^(x590^(x591<=x592)));

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = 14048;
	int32_t x594 = -1;
	int16_t x595 = INT16_MAX;
	int32_t t148 = 440;

    t148 = (x593^(x594^(x595<=x596)));

    if (t148 != -14050) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MAX;
	volatile int32_t x598 = -1;
	int16_t x599 = INT16_MIN;
	int8_t x600 = INT8_MIN;

    t149 = (x597^(x598^(x599<=x600)));

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x601 = 1263734U;
	static int8_t x603 = 0;
	uint16_t x604 = UINT16_MAX;
	uint32_t t150 = 2004505206U;

    t150 = (x601^(x602^(x603<=x604)));

    if (t150 != 1263710U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 238754024757405LLU;
	volatile int8_t x606 = 25;
	uint16_t x607 = 3U;
	int64_t x608 = 1521234LL;
	uint64_t t151 = 35760852558137790LLU;

    t151 = (x605^(x606^(x607<=x608)));

    if (t151 != 238754024757381LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1970556536534816LL;
	int32_t x610 = -22847528;
	int16_t x611 = INT16_MIN;
	int16_t x612 = -23;

    t152 = (x609^(x610^(x611<=x612)));

    if (t152 != 1970556547241785LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 91U;
	int32_t x614 = -624109;
	volatile int64_t x616 = -1981631394261LL;
	volatile int32_t t153 = -3;

    t153 = (x613^(x614^(x615<=x616)));

    if (t153 != -624056) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x618 = 62;
	uint16_t x620 = 929U;
	volatile int32_t t154 = 142;

    t154 = (x617^(x618^(x619<=x620)));

    if (t154 != -66) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int32_t x622 = -131835404;
	volatile int32_t x623 = INT32_MAX;
	static uint16_t x624 = UINT16_MAX;
	volatile int32_t t155 = -12363;

    t155 = (x621^(x622^(x623<=x624)));

    if (t155 != 131835403) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x626 = -1;
	volatile uint32_t x627 = 4865U;
	int16_t x628 = INT16_MIN;
	volatile int32_t t156 = 4071515;

    t156 = (x625^(x626^(x627<=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = -1;
	int32_t x630 = -3731;
	int8_t x631 = -1;
	static uint64_t x632 = 385420LLU;
	static int32_t t157 = 0;

    t157 = (x629^(x630^(x631<=x632)));

    if (t157 != 3730) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 38246U;
	uint32_t x634 = UINT32_MAX;
	volatile int16_t x635 = -1;
	static int16_t x636 = 7;
	uint32_t t158 = 24779U;

    t158 = (x633^(x634^(x635<=x636)));

    if (t158 != 4294929048U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 2U;
	uint64_t x638 = 847350373198LLU;
	volatile uint64_t t159 = 1800548971613354138LLU;

    t159 = (x637^(x638^(x639<=x640)));

    if (t159 != 847350373197LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 78;
	volatile int8_t x642 = -1;
	int32_t x643 = INT32_MIN;
	volatile uint32_t x644 = 260667U;
	static int32_t t160 = -124;

    t160 = (x641^(x642^(x643<=x644)));

    if (t160 != -79) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x645 = INT32_MIN;
	volatile int16_t x647 = -1;
	int16_t x648 = -1;
	static volatile int32_t t161 = -180678;

    t161 = (x645^(x646^(x647<=x648)));

    if (t161 != -2147483394) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x651 = 4U;
	uint32_t x652 = UINT32_MAX;
	int64_t t162 = -3930588LL;

    t162 = (x649^(x650^(x651<=x652)));

    if (t162 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = 26580U;
	int8_t x654 = 2;
	uint8_t x655 = 1U;
	int8_t x656 = 0;
	static int32_t t163 = -16336;

    t163 = (x653^(x654^(x655<=x656)));

    if (t163 != 26582) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x659 = 3U;
	int16_t x660 = INT16_MIN;
	volatile uint32_t t164 = 111952661U;

    t164 = (x657^(x658^(x659<=x660)));

    if (t164 != 4294967231U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	uint8_t x662 = 56U;
	int16_t x663 = -48;
	int16_t x664 = INT16_MIN;
	static int64_t t165 = -29245680457560980LL;

    t165 = (x661^(x662^(x663<=x664)));

    if (t165 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 3U;
	int16_t x666 = -1;
	int32_t x667 = -1;
	int8_t x668 = -23;
	static int32_t t166 = 2;

    t166 = (x665^(x666^(x667<=x668)));

    if (t166 != -4) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 86LLU;
	static uint16_t x670 = 180U;
	uint64_t x671 = 4020LLU;
	volatile uint8_t x672 = 0U;
	uint64_t t167 = 112440189LLU;

    t167 = (x669^(x670^(x671<=x672)));

    if (t167 != 226LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -8LL;
	volatile int64_t x674 = INT64_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = -1;

    t168 = (x673^(x674^(x675<=x676)));

    if (t168 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	static int32_t x678 = -1;
	int32_t x680 = INT32_MIN;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x677^(x678^(x679<=x680)));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x681 = INT64_MIN;
	int16_t x682 = -1;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = UINT64_MAX;
	static volatile int64_t t170 = -13454265427LL;

    t170 = (x681^(x682^(x683<=x684)));

    if (t170 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -15575;
	int8_t x686 = INT8_MIN;
	int32_t x687 = -1;
	volatile int32_t x688 = 1;
	volatile int32_t t171 = -25776150;

    t171 = (x685^(x686^(x687<=x688)));

    if (t171 != 15528) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x690 = -1449466064LL;
	int64_t x691 = -1LL;
	int64_t x692 = -1LL;
	volatile int64_t t172 = 332567287179633378LL;

    t172 = (x689^(x690^(x691<=x692)));

    if (t172 != -1446093722LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = UINT16_MAX;
	uint16_t x695 = UINT16_MAX;
	static int64_t x696 = -1LL;

    t173 = (x693^(x694^(x695<=x696)));

    if (t173 != -32769) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MAX;
	int16_t x698 = INT16_MIN;
	volatile int8_t x699 = INT8_MIN;
	int8_t x700 = -5;
	volatile int32_t t174 = 126;

    t174 = (x697^(x698^(x699<=x700)));

    if (t174 != -2147450882) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	static int8_t x702 = -3;
	int8_t x703 = INT8_MIN;
	static int32_t x704 = INT32_MAX;
	int64_t t175 = -14500135750LL;

    t175 = (x701^(x702^(x703<=x704)));

    if (t175 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	int8_t x706 = -1;
	int32_t x708 = -1;

    t176 = (x705^(x706^(x707<=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x711 = INT64_MAX;
	int32_t x712 = INT32_MAX;
	volatile uint64_t t177 = 3429935510992388552LLU;

    t177 = (x709^(x710^(x711<=x712)));

    if (t177 != 166675061LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = 55U;
	int64_t x714 = INT64_MAX;
	int32_t x715 = INT32_MAX;
	uint64_t x716 = 9993463971LLU;
	volatile int64_t t178 = -3477238463446LL;

    t178 = (x713^(x714^(x715<=x716)));

    if (t178 != 9223372036854775753LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	volatile int64_t x719 = INT64_MAX;
	uint64_t x720 = 1LLU;

    t179 = (x717^(x718^(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MAX;
	static int8_t x722 = -1;
	uint8_t x723 = 0U;
	int32_t x724 = INT32_MAX;
	int64_t t180 = -149716032000LL;

    t180 = (x721^(x722^(x723<=x724)));

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	int8_t x727 = -4;
	uint16_t x728 = 6U;
	uint32_t t181 = 11271613U;

    t181 = (x725^(x726^(x727<=x728)));

    if (t181 != 32766U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	volatile int32_t x730 = -249138;
	uint32_t x731 = 385U;
	int16_t x732 = -1;
	volatile uint64_t t182 = 38207189LLU;

    t182 = (x729^(x730^(x731<=x732)));

    if (t182 != 249136LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int8_t x734 = -1;
	volatile int32_t x735 = 0;
	int16_t x736 = 2080;
	volatile int32_t t183 = 21;

    t183 = (x733^(x734^(x735<=x736)));

    if (t183 != -127) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = -1;
	static int16_t x738 = INT16_MAX;
	static int64_t x739 = INT64_MIN;
	uint8_t x740 = UINT8_MAX;

    t184 = (x737^(x738^(x739<=x740)));

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x742 = 67048LLU;
	int16_t x743 = -2898;
	int64_t x744 = INT64_MIN;
	volatile uint64_t t185 = 94637LLU;

    t185 = (x741^(x742^(x743<=x744)));

    if (t185 != 66839LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = 16;
	static int64_t x746 = -1LL;
	uint64_t x747 = UINT64_MAX;
	static int32_t x748 = INT32_MIN;
	int64_t t186 = -1LL;

    t186 = (x745^(x746^(x747<=x748)));

    if (t186 != -17LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	int32_t x750 = 3;
	volatile int32_t x751 = -1;
	int64_t x752 = 7391356475083949LL;

    t187 = (x749^(x750^(x751<=x752)));

    if (t187 != -3LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = -319236LL;
	uint32_t t188 = 13761040U;

    t188 = (x753^(x754^(x755<=x756)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x757 = INT64_MIN;
	uint64_t x759 = 1127981461294989LLU;
	volatile uint8_t x760 = 44U;
	volatile int64_t t189 = 910498823LL;

    t189 = (x757^(x758^(x759<=x760)));

    if (t189 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 2376;
	uint16_t x762 = UINT16_MAX;
	int64_t x763 = -1017843755657LL;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t190 = -220757;

    t190 = (x761^(x762^(x763<=x764)));

    if (t190 != 63158) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	volatile int32_t x767 = INT32_MIN;
	uint64_t t191 = 825332583528659024LLU;

    t191 = (x765^(x766^(x767<=x768)));

    if (t191 != 18430475976806867218LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 1U;
	int8_t x770 = 11;
	static uint32_t x771 = 16768281U;
	volatile int8_t x772 = 1;

    t192 = (x769^(x770^(x771<=x772)));

    if (t192 != 10) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x773 = 15980804329327874LLU;
	int64_t x774 = -1LL;
	int32_t x775 = -359;
	uint64_t x776 = UINT64_MAX;
	uint64_t t193 = 260046094082LLU;

    t193 = (x773^(x774^(x775<=x776)));

    if (t193 != 18430763269380223740LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x778 = 3;
	uint32_t x779 = 10U;
	int32_t x780 = INT32_MIN;
	volatile int64_t t194 = -25LL;

    t194 = (x777^(x778^(x779<=x780)));

    if (t194 != 5489541462LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x783 = INT16_MAX;
	int64_t x784 = -1LL;
	static uint64_t t195 = 18178881325662LLU;

    t195 = (x781^(x782^(x783<=x784)));

    if (t195 != 127LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 866;
	int8_t x786 = -1;
	int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	static volatile int32_t t196 = -215626;

    t196 = (x785^(x786^(x787<=x788)));

    if (t196 != -868) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MIN;
	int16_t x790 = INT16_MAX;
	int16_t x791 = INT16_MIN;
	static volatile int32_t t197 = -5344;

    t197 = (x789^(x790^(x791<=x792)));

    if (t197 != -32642) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	int32_t x795 = 2914;
	int64_t x796 = -1LL;

    t198 = (x793^(x794^(x795<=x796)));

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -11;
	int8_t x799 = -1;
	int8_t x800 = 5;
	int32_t t199 = -2092450;

    t199 = (x797^(x798^(x799<=x800)));

    if (t199 != -2147483637) { NG(); } else { ; }
	
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

