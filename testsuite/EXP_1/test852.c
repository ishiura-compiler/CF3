
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

int32_t x3 = INT32_MAX;
int8_t x4 = INT8_MIN;
uint64_t x9 = 45862860760LLU;
static int32_t x10 = -1;
static int64_t x13 = INT64_MIN;
int16_t x15 = 15293;
volatile int32_t t5 = -3471;
int8_t x40 = -4;
static int8_t x41 = -1;
static uint32_t x46 = UINT32_MAX;
uint64_t x49 = UINT64_MAX;
int16_t x57 = 9468;
static uint16_t x58 = 1U;
uint32_t t13 = 7U;
uint64_t x67 = UINT64_MAX;
volatile uint64_t t14 = 101818107845111LLU;
volatile int32_t x70 = INT32_MIN;
volatile uint64_t x81 = 487879277989LLU;
int32_t x86 = INT32_MIN;
volatile uint64_t t19 = 446913973610204LLU;
int8_t x89 = -1;
static int32_t x90 = INT32_MAX;
int32_t x91 = 20;
uint8_t x93 = 76U;
int8_t x95 = -1;
static int8_t x98 = INT8_MIN;
uint32_t x100 = 2964515U;
static uint64_t x117 = UINT64_MAX;
int64_t t27 = -15762028719LL;
volatile int64_t x131 = INT64_MIN;
static int64_t x132 = INT64_MIN;
int16_t x135 = INT16_MAX;
static uint64_t t30 = 11035155376LLU;
int32_t x152 = INT32_MIN;
int8_t x154 = -1;
static volatile int64_t t33 = -5843889029054544LL;
uint64_t t34 = 23147286067219LLU;
static int32_t x161 = 111;
int32_t t35 = 7;
int64_t x165 = -1LL;
int16_t x166 = -280;
volatile uint8_t x173 = 1U;
volatile int64_t x181 = INT64_MAX;
uint32_t x182 = 588U;
volatile int64_t t40 = -8011LL;
uint8_t x189 = 20U;
volatile int16_t x193 = -10;
static int32_t x197 = -3;
int16_t x198 = -1;
uint64_t x199 = 11LLU;
int16_t x202 = -3665;
uint64_t x203 = 8191846511824283LLU;
int16_t x208 = INT16_MIN;
uint32_t t45 = 12914U;
static uint32_t x211 = 34U;
volatile uint64_t t47 = 22838175313986LLU;
static uint64_t t48 = 15859308LLU;
int32_t x223 = 247708;
int32_t x231 = -1;
static int8_t x238 = -30;
uint16_t x240 = 215U;
volatile uint32_t x243 = UINT32_MAX;
static int8_t x250 = -24;
int8_t x251 = INT8_MAX;
static volatile uint64_t t56 = 2046832501522191LLU;
int64_t x258 = -1LL;
uint64_t t58 = 472682673281431178LLU;
uint16_t x265 = UINT16_MAX;
volatile uint16_t x282 = 1U;
int32_t x289 = -1;
int8_t x296 = INT8_MAX;
int32_t x302 = INT32_MIN;
int64_t t68 = -1483421975201146954LL;
int16_t x307 = INT16_MIN;
int32_t x312 = INT32_MAX;
uint64_t x314 = 4LLU;
static uint64_t t71 = 500807327789019680LLU;
volatile int32_t t72 = -5512;
uint8_t x322 = UINT8_MAX;
static int64_t t73 = 212LL;
static int64_t x335 = INT64_MAX;
uint8_t x336 = 1U;
uint8_t x349 = 1U;
volatile int64_t t79 = -52600511909660LL;
int64_t x355 = 1LL;
volatile int8_t x360 = INT8_MIN;
uint32_t t82 = 740082U;
static int16_t x365 = INT16_MIN;
int32_t x367 = INT32_MIN;
volatile uint64_t x368 = 511501016401531LLU;
uint32_t x370 = 7714772U;
int32_t x371 = 37091702;
volatile int32_t x372 = INT32_MIN;
int64_t x375 = INT64_MIN;
int64_t x377 = INT64_MAX;
uint32_t x380 = 1046580U;
int32_t x381 = -6;
static int64_t x383 = -1LL;
int64_t t87 = -11147690LL;
uint64_t x388 = 3853LLU;
int16_t x395 = -1;
static uint64_t x397 = UINT64_MAX;
int64_t x398 = -6185209LL;
static int32_t x400 = 2132;
int16_t x405 = INT16_MIN;
static volatile uint16_t x412 = 3U;
static int16_t x414 = INT16_MIN;
static int16_t x417 = -1;
int8_t x432 = INT8_MIN;
int32_t t99 = 54921;
int8_t x438 = INT8_MAX;
uint32_t t101 = 52625371U;
int64_t x445 = -1LL;
uint64_t x448 = 135101279086LLU;
uint8_t x457 = UINT8_MAX;
static uint32_t x462 = 1201945U;
static volatile uint64_t x464 = UINT64_MAX;
int8_t x469 = 4;
int8_t x474 = -19;
static int64_t x476 = INT64_MIN;
static uint64_t t111 = 134643855222266LLU;
static int32_t x491 = -1;
volatile int32_t t113 = 0;
uint8_t x494 = UINT8_MAX;
int64_t t114 = 2436094LL;
int16_t x497 = INT16_MAX;
int64_t x506 = -3646503LL;
int64_t t116 = -3205793LL;
volatile int8_t x512 = INT8_MAX;
int16_t x515 = -1;
int64_t x516 = -636350809819LL;
uint16_t x525 = 10503U;
volatile int8_t x531 = INT8_MAX;
volatile int64_t x533 = INT64_MAX;
volatile int32_t x534 = INT32_MIN;
int16_t x536 = INT16_MIN;
uint64_t t125 = 65LLU;
uint64_t t126 = 26796831924113193LLU;
int8_t x552 = 7;
uint32_t t127 = 1U;
int16_t x554 = INT16_MIN;
uint32_t x560 = 6U;
uint32_t x563 = 1014471U;
static int32_t x566 = INT32_MIN;
uint64_t x568 = 716856804145LLU;
uint64_t t131 = 304LLU;
volatile int64_t t132 = 29441LL;
int16_t x580 = INT16_MIN;
uint64_t x587 = UINT64_MAX;
volatile int16_t x589 = INT16_MIN;
int64_t x592 = INT64_MIN;
int64_t t137 = INT64_MIN;
volatile int32_t t139 = -12921;
int64_t t140 = -22940LL;
volatile uint16_t x608 = UINT16_MAX;
int64_t t141 = 4820LL;
int32_t x612 = INT32_MIN;
static int16_t x614 = INT16_MIN;
int64_t x615 = INT64_MAX;
int64_t x619 = INT64_MIN;
uint32_t x623 = 235880U;
int32_t x626 = -1;
int64_t x628 = -1913163161244LL;
int16_t x630 = INT16_MIN;
static int64_t x632 = INT64_MIN;
uint64_t t147 = 13275565LLU;
int8_t x633 = INT8_MAX;
volatile uint32_t x635 = UINT32_MAX;
static volatile uint16_t x638 = UINT16_MAX;
int32_t x643 = INT32_MIN;
uint16_t x649 = 83U;
uint32_t t152 = 3216016U;
uint32_t x666 = UINT32_MAX;
uint64_t x675 = UINT64_MAX;
int32_t x676 = -38894557;
uint64_t t158 = 116405118LLU;
uint64_t x679 = UINT64_MAX;
volatile uint32_t x687 = UINT32_MAX;
int64_t t161 = 206402870909428414LL;
uint8_t x689 = 6U;
volatile uint64_t x693 = 1501763LLU;
int8_t x694 = -35;
static uint32_t x696 = UINT32_MAX;
volatile uint64_t t163 = 7546420254765231LLU;
volatile int64_t t164 = -128353LL;
int16_t x707 = INT16_MIN;
static uint32_t x712 = 1375708U;
uint8_t x716 = 5U;
int32_t t167 = 7558;
volatile int16_t x720 = 7;
int64_t t168 = 53233755942211LL;
volatile int64_t x722 = INT64_MIN;
int64_t x729 = -1LL;
static int64_t x730 = INT64_MIN;
uint8_t x735 = UINT8_MAX;
uint16_t x739 = 592U;
int64_t x742 = 8182LL;
int16_t x749 = INT16_MIN;
int64_t x750 = -1LL;
static uint16_t x753 = 2873U;
static int8_t x758 = INT8_MIN;
int16_t x764 = -4998;
volatile int64_t t179 = 130LL;
uint32_t x774 = UINT32_MAX;
uint64_t x776 = UINT64_MAX;
static int64_t x782 = INT64_MAX;
volatile uint8_t x801 = 1U;
static uint32_t x805 = 60U;
static uint16_t x809 = 0U;
volatile int64_t t189 = 637045LL;
int16_t x818 = INT16_MAX;
static int16_t x819 = INT16_MIN;
int16_t x829 = INT16_MIN;
volatile int32_t t193 = 38482757;
int16_t x835 = INT16_MIN;
uint64_t x842 = 208151851735779487LLU;
volatile int16_t x843 = INT16_MIN;
volatile uint64_t x846 = 126063646591030552LLU;
int64_t x847 = -1LL;
int32_t x851 = INT32_MIN;
int32_t x855 = INT32_MIN;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	int64_t t0 = 3244430LL;

    t0 = (((x1%x2)%x3)&x4);

    if (t0 != 128LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 43800LL;
	volatile int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = 2054341777899527LL;

    t1 = (((x5%x6)%x7)&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x11 = 130U;
	static int32_t x12 = -8052794;
	uint64_t t2 = 44936642848066LLU;

    t2 = (((x9%x10)%x11)&x12);

    if (t2 != 64LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x14 = 3429;
	int64_t x16 = -285461LL;
	volatile int64_t t3 = -4LL;

    t3 = (((x13%x14)%x15)&x16);

    if (t3 != -285566LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	volatile int64_t x23 = -441475059667517LL;
	int16_t x24 = INT16_MIN;
	static volatile int64_t t4 = -68696985296679123LL;

    t4 = (((x21%x22)%x23)&x24);

    if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 0;
	int32_t x26 = INT32_MIN;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MIN;

    t5 = (((x25%x26)%x27)&x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = -1;
	int64_t x30 = INT64_MAX;
	int32_t x31 = -1;
	int64_t x32 = 2017LL;
	int64_t t6 = 1994439419500609LL;

    t6 = (((x29%x30)%x31)&x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x37 = 7U;
	int16_t x38 = 201;
	static int8_t x39 = 5;
	volatile int32_t t7 = -577880068;

    t7 = (((x37%x38)%x39)&x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MAX;
	uint32_t x43 = 18U;
	uint16_t x44 = UINT16_MAX;
	static volatile uint32_t t8 = 11985890U;

    t8 = (((x41%x42)%x43)&x44);

    if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x45 = 416152LL;
	int32_t x47 = -1;
	volatile uint64_t x48 = 217LLU;
	uint64_t t9 = 32797673LLU;

    t9 = (((x45%x46)%x47)&x48);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x50 = 397U;
	int8_t x51 = INT8_MIN;
	uint64_t x52 = UINT64_MAX;
	uint64_t t10 = 644408681LLU;

    t10 = (((x49%x50)%x51)&x52);

    if (t10 != 98LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x53 = UINT16_MAX;
	uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t11 = 409144382626LLU;

    t11 = (((x53%x54)%x55)&x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x59 = -18486548290LL;
	static int32_t x60 = INT32_MIN;
	volatile int64_t t12 = -833912619117LL;

    t12 = (((x57%x58)%x59)&x60);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x61 = 476104U;
	int32_t x62 = -1523;
	static int32_t x63 = INT32_MIN;
	uint32_t x64 = 45390U;

    t13 = (((x61%x62)%x63)&x64);

    if (t13 != 328U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = INT64_MIN;
	uint64_t x66 = 27589LLU;
	int8_t x68 = -1;

    t14 = (((x65%x66)%x67)&x68);

    if (t14 != 5159LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = 2U;
	int64_t x71 = 2LL;
	int32_t x72 = -4194226;
	static volatile int64_t t15 = 20069LL;

    t15 = (((x69%x70)%x71)&x72);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = -13;
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = -13;
	volatile uint8_t x76 = 1U;
	int32_t t16 = -207727242;

    t16 = (((x73%x74)%x75)&x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x77 = INT64_MIN;
	volatile int16_t x78 = INT16_MAX;
	static int16_t x79 = INT16_MAX;
	static uint16_t x80 = 2U;
	static int64_t t17 = 939759477643LL;

    t17 = (((x77%x78)%x79)&x80);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x82 = INT16_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	int32_t x84 = 1608876;
	uint64_t t18 = 15521061LLU;

    t18 = (((x81%x82)%x83)&x84);

    if (t18 != 3112LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x85 = 2761261920LLU;
	int64_t x87 = -392931036LL;
	volatile int8_t x88 = INT8_MIN;

    t19 = (((x85%x86)%x87)&x88);

    if (t19 != 2761261824LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x92 = 17U;
	volatile uint32_t t20 = 540645352U;

    t20 = (((x89%x90)%x91)&x92);

    if (t20 != 17U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x94 = 39U;
	int16_t x96 = INT16_MIN;
	uint32_t t21 = 24028605U;

    t21 = (((x93%x94)%x95)&x96);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = 24U;
	static int16_t x99 = -1;
	volatile uint32_t t22 = 186U;

    t22 = (((x97%x98)%x99)&x100);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = INT32_MAX;
	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MAX;
	volatile int32_t t23 = -3972284;

    t23 = (((x105%x106)%x107)&x108);

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 4905764790LLU;
	int64_t x110 = -381455269384146LL;
	volatile int16_t x111 = -1;
	int32_t x112 = -402;
	volatile uint64_t t24 = 14504LLU;

    t24 = (((x109%x110)%x111)&x112);

    if (t24 != 4905764390LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	uint16_t x120 = 355U;
	uint64_t t25 = 178388177944516LLU;

    t25 = (((x117%x118)%x119)&x120);

    if (t25 != 355LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = 30U;
	int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	static int64_t t26 = 758059839133915LL;

    t26 = (((x121%x122)%x123)&x124);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	uint32_t x128 = 1793179U;

    t27 = (((x125%x126)%x127)&x128);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MAX;
	int64_t t28 = 125798077LL;

    t28 = (((x129%x130)%x131)&x132);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = 23;
	int8_t x134 = 42;
	int16_t x136 = INT16_MIN;
	volatile int32_t t29 = -5099;

    t29 = (((x133%x134)%x135)&x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x137 = 1U;
	uint32_t x138 = 1U;
	uint64_t x139 = UINT64_MAX;
	volatile uint16_t x140 = 1819U;

    t30 = (((x137%x138)%x139)&x140);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x141 = 6;
	uint64_t x142 = UINT64_MAX;
	volatile int16_t x143 = -1;
	uint8_t x144 = 21U;
	uint64_t t31 = 6114113377329581LLU;

    t31 = (((x141%x142)%x143)&x144);

    if (t31 != 4LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x149 = 11LLU;
	int32_t x150 = INT32_MIN;
	volatile int8_t x151 = INT8_MIN;
	uint64_t t32 = 545055821030102297LLU;

    t32 = (((x149%x150)%x151)&x152);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x153 = -1LL;
	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;

    t33 = (((x153%x154)%x155)&x156);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x157 = 1249044175062647929LLU;
	static int64_t x158 = -420LL;
	volatile int32_t x159 = INT32_MAX;
	int64_t x160 = -1LL;

    t34 = (((x157%x158)%x159)&x160);

    if (t34 != 1577861783LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x162 = -10346;
	int8_t x163 = -1;
	volatile int16_t x164 = -1;

    t35 = (((x161%x162)%x163)&x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x167 = 482805LLU;
	static uint8_t x168 = UINT8_MAX;
	static uint64_t t36 = 120749648614323933LLU;

    t36 = (((x165%x166)%x167)&x168);

    if (t36 != 114LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = 121U;
	int64_t x170 = -1137818759350876LL;
	int16_t x171 = INT16_MAX;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t37 = -100107LL;

    t37 = (((x169%x170)%x171)&x172);

    if (t37 != 121LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x174 = -1LL;
	int8_t x175 = 1;
	int8_t x176 = 0;
	int64_t t38 = -9882103322430LL;

    t38 = (((x173%x174)%x175)&x176);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x177 = -1;
	volatile int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MAX;
	int16_t x180 = 315;
	volatile int32_t t39 = -1094268;

    t39 = (((x177%x178)%x179)&x180);

    if (t39 != 315) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x183 = -1;
	static volatile int32_t x184 = INT32_MIN;

    t40 = (((x181%x182)%x183)&x184);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x190 = INT16_MIN;
	static int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t41 = -4;

    t41 = (((x189%x190)%x191)&x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t42 = -36477904LL;

    t42 = (((x193%x194)%x195)&x196);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x200 = 3U;
	uint64_t t43 = 152926015231227951LLU;

    t43 = (((x197%x198)%x199)&x200);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x201 = INT64_MIN;
	uint16_t x204 = 9U;
	static uint64_t t44 = 341LLU;

    t44 = (((x201%x202)%x203)&x204);

    if (t44 != 9LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MIN;
	uint32_t x206 = 813011U;
	volatile int16_t x207 = INT16_MAX;

    t45 = (((x205%x206)%x207)&x208);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x209 = INT16_MIN;
	uint16_t x210 = 6622U;
	volatile int32_t x212 = INT32_MIN;
	volatile uint32_t t46 = 8638U;

    t46 = (((x209%x210)%x211)&x212);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x213 = 1602490828353031LLU;
	int8_t x214 = INT8_MIN;
	static uint8_t x215 = UINT8_MAX;
	int32_t x216 = -7158125;

    t47 = (((x213%x214)%x215)&x216);

    if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x217 = 13U;
	int16_t x218 = 4076;
	static int8_t x219 = -1;
	uint64_t x220 = 2100244864018LLU;

    t48 = (((x217%x218)%x219)&x220);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	int64_t x224 = INT64_MIN;
	volatile int64_t t49 = -268314382347LL;

    t49 = (((x221%x222)%x223)&x224);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x225 = -1LL;
	uint16_t x226 = 1396U;
	volatile int64_t x227 = INT64_MIN;
	volatile int8_t x228 = 1;
	int64_t t50 = 19LL;

    t50 = (((x225%x226)%x227)&x228);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x229 = 3U;
	int8_t x230 = -1;
	int16_t x232 = INT16_MIN;
	int32_t t51 = -17;

    t51 = (((x229%x230)%x231)&x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x233 = -1;
	int8_t x234 = INT8_MIN;
	static int32_t x235 = -1;
	static uint8_t x236 = 0U;
	volatile int32_t t52 = -104;

    t52 = (((x233%x234)%x235)&x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x237 = 125LL;
	int32_t x239 = -1;
	volatile int64_t t53 = -5754LL;

    t53 = (((x237%x238)%x239)&x240);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MAX;
	int16_t x242 = 31;
	int64_t x244 = INT64_MIN;
	int64_t t54 = -75897233481269544LL;

    t54 = (((x241%x242)%x243)&x244);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x245 = 2102916044U;
	uint32_t x246 = 7260U;
	int8_t x247 = INT8_MIN;
	static volatile int32_t x248 = INT32_MAX;
	uint32_t t55 = 378552840U;

    t55 = (((x245%x246)%x247)&x248);

    if (t55 != 6224U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = UINT64_MAX;
	volatile int32_t x252 = INT32_MIN;

    t56 = (((x249%x250)%x251)&x252);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 18;
	uint32_t x256 = 251221U;
	uint32_t t57 = 384U;

    t57 = (((x253%x254)%x255)&x256);

    if (t57 != 251221U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x257 = 21406LLU;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 3U;

    t58 = (((x257%x258)%x259)&x260);

    if (t58 != 2LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x261 = INT8_MIN;
	volatile uint8_t x262 = UINT8_MAX;
	uint8_t x263 = UINT8_MAX;
	uint32_t x264 = 5265324U;
	volatile uint32_t t59 = 2U;

    t59 = (((x261%x262)%x263)&x264);

    if (t59 != 5265280U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x266 = INT8_MIN;
	volatile int32_t x267 = INT32_MAX;
	volatile uint8_t x268 = 11U;
	int32_t t60 = 0;

    t60 = (((x265%x266)%x267)&x268);

    if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = INT32_MIN;
	int32_t x270 = INT32_MIN;
	volatile uint64_t x271 = 423516023949970987LLU;
	int8_t x272 = INT8_MAX;
	volatile uint64_t t61 = 95LLU;

    t61 = (((x269%x270)%x271)&x272);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = -1;
	static uint16_t x274 = UINT16_MAX;
	int64_t x275 = -261926644298089280LL;
	int32_t x276 = 5228985;
	static int64_t t62 = 5652146818LL;

    t62 = (((x273%x274)%x275)&x276);

    if (t62 != 5228985LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = -3;
	static int8_t x283 = INT8_MAX;
	int8_t x284 = -1;
	volatile int32_t t63 = -45394;

    t63 = (((x281%x282)%x283)&x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 2U;
	static int64_t x288 = INT64_MIN;
	uint64_t t64 = 1591594251090041LLU;

    t64 = (((x285%x286)%x287)&x288);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x290 = 478818336U;
	int64_t x291 = -1LL;
	int16_t x292 = -1;
	static volatile int64_t t65 = -162834678314728LL;

    t65 = (((x289%x290)%x291)&x292);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	volatile uint16_t x295 = 21507U;
	volatile int32_t t66 = -15007524;

    t66 = (((x293%x294)%x295)&x296);

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x297 = INT32_MIN;
	volatile int16_t x298 = -1;
	int8_t x299 = -1;
	volatile int8_t x300 = INT8_MIN;
	static int32_t t67 = -1;

    t67 = (((x297%x298)%x299)&x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x301 = INT8_MAX;
	int64_t x303 = 64104834186058308LL;
	uint8_t x304 = 8U;

    t68 = (((x301%x302)%x303)&x304);

    if (t68 != 8LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -1;
	int16_t x306 = INT16_MIN;
	static volatile uint16_t x308 = 560U;
	volatile int32_t t69 = 25412638;

    t69 = (((x305%x306)%x307)&x308);

    if (t69 != 560) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MIN;
	volatile uint16_t x310 = 7U;
	uint32_t x311 = 5301U;
	int64_t t70 = 3426453378LL;

    t70 = (((x309%x310)%x311)&x312);

    if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x313 = INT32_MIN;
	uint32_t x315 = 1U;
	uint16_t x316 = 30687U;

    t71 = (((x313%x314)%x315)&x316);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = INT8_MIN;
	static int8_t x318 = INT8_MAX;
	int32_t x319 = INT32_MIN;
	volatile int32_t x320 = 8642465;

    t72 = (((x317%x318)%x319)&x320);

    if (t72 != 8642465) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x321 = -27;
	static int8_t x323 = INT8_MIN;
	static int64_t x324 = INT64_MAX;

    t73 = (((x321%x322)%x323)&x324);

    if (t73 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x329 = 662U;
	static uint32_t x330 = 14153U;
	int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = 3861480529LLU;
	uint64_t t74 = 63LLU;

    t74 = (((x329%x330)%x331)&x332);

    if (t74 != 16LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x333 = -1;
	volatile int64_t x334 = 76836521025LL;
	static volatile int64_t t75 = -7809926141405171LL;

    t75 = (((x333%x334)%x335)&x336);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MAX;
	volatile uint64_t x338 = 23973208937780697LLU;
	int16_t x339 = -1;
	int8_t x340 = -1;
	volatile uint64_t t76 = 41358343LLU;

    t76 = (((x337%x338)%x339)&x340);

    if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = -1;
	static volatile uint32_t x342 = 103747465U;
	volatile int8_t x343 = INT8_MAX;
	static uint32_t x344 = 5418545U;
	volatile uint32_t t77 = 3U;

    t77 = (((x341%x342)%x343)&x344);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x345 = INT8_MAX;
	int64_t x346 = INT64_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t78 = 499615544792LLU;

    t78 = (((x345%x346)%x347)&x348);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;

    t79 = (((x349%x350)%x351)&x352);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x353 = 1252728U;
	volatile int8_t x354 = INT8_MIN;
	uint32_t x356 = 352U;
	volatile int64_t t80 = -59925022981LL;

    t80 = (((x353%x354)%x355)&x356);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = INT64_MIN;
	static uint32_t x358 = 17557U;
	static int32_t x359 = INT32_MIN;
	int64_t t81 = -50708778618252LL;

    t81 = (((x357%x358)%x359)&x360);

    if (t81 != -3328LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x361 = -1;
	int8_t x362 = INT8_MAX;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 23799U;

    t82 = (((x361%x362)%x363)&x364);

    if (t82 != 23799U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x366 = 118;
	uint64_t t83 = 499LLU;

    t83 = (((x365%x366)%x367)&x368);

    if (t83 != 511501016401450LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x369 = 6U;
	static volatile uint32_t t84 = 818U;

    t84 = (((x369%x370)%x371)&x372);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x373 = 360890228LLU;
	static int64_t x374 = -1LL;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t85 = 18549050687LLU;

    t85 = (((x373%x374)%x375)&x376);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x378 = -7920662LL;
	uint32_t x379 = 62119140U;
	volatile int64_t t86 = -102601533LL;

    t86 = (((x377%x378)%x379)&x380);

    if (t86 != 952336LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x382 = INT8_MIN;
	int8_t x384 = 0;

    t87 = (((x381%x382)%x383)&x384);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x385 = INT16_MAX;
	volatile int16_t x386 = 39;
	int64_t x387 = -1LL;
	volatile uint64_t t88 = 144393019LLU;

    t88 = (((x385%x386)%x387)&x388);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = -4194959736LL;
	volatile uint16_t x390 = 133U;
	uint64_t x391 = 1380888872LLU;
	uint16_t x392 = UINT16_MAX;
	volatile uint64_t t89 = 16700015LLU;

    t89 = (((x389%x390)%x391)&x392);

    if (t89 != 36306LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x393 = 3051U;
	int16_t x394 = INT16_MIN;
	volatile int32_t x396 = -16098251;
	static int32_t t90 = 688675377;

    t90 = (((x393%x394)%x395)&x396);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x399 = -1;
	volatile uint64_t t91 = 1239303492LLU;

    t91 = (((x397%x398)%x399)&x400);

    if (t91 != 80LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MAX;
	uint64_t x403 = 194LLU;
	int64_t x404 = -1LL;
	volatile uint64_t t92 = 41436492103189LLU;

    t92 = (((x401%x402)%x403)&x404);

    if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 1U;
	int32_t t93 = 15376;

    t93 = (((x405%x406)%x407)&x408);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MAX;
	volatile uint8_t x411 = 1U;
	volatile int32_t t94 = 4;

    t94 = (((x409%x410)%x411)&x412);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x413 = UINT64_MAX;
	int32_t x415 = 1;
	int8_t x416 = INT8_MIN;
	volatile uint64_t t95 = 2859278897LLU;

    t95 = (((x413%x414)%x415)&x416);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x418 = INT32_MIN;
	volatile int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MIN;
	volatile int32_t t96 = -19932090;

    t96 = (((x417%x418)%x419)&x420);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x421 = 28872LL;
	static int16_t x422 = INT16_MAX;
	uint8_t x423 = 2U;
	static int32_t x424 = -1;
	static volatile int64_t t97 = 10LL;

    t97 = (((x421%x422)%x423)&x424);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x425 = UINT8_MAX;
	static volatile int8_t x426 = INT8_MAX;
	uint32_t x427 = 436849U;
	static int8_t x428 = INT8_MAX;
	uint32_t t98 = 13815621U;

    t98 = (((x425%x426)%x427)&x428);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x429 = -1;
	static int8_t x430 = -1;
	volatile uint16_t x431 = 3926U;

    t99 = (((x429%x430)%x431)&x432);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x437 = INT8_MAX;
	volatile int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = UINT32_MAX;
	uint32_t t100 = 22735U;

    t100 = (((x437%x438)%x439)&x440);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x441 = -1;
	static int32_t x442 = 16630987;
	uint32_t x443 = UINT32_MAX;
	volatile uint8_t x444 = 0U;

    t101 = (((x441%x442)%x443)&x444);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x446 = -1;
	int8_t x447 = -1;
	volatile uint64_t t102 = 1517008372827960473LLU;

    t102 = (((x445%x446)%x447)&x448);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x449 = UINT8_MAX;
	static uint8_t x450 = 1U;
	uint32_t x451 = 1762989088U;
	int8_t x452 = -1;
	uint32_t t103 = 447691U;

    t103 = (((x449%x450)%x451)&x452);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	uint64_t x454 = UINT64_MAX;
	uint16_t x455 = 237U;
	volatile uint8_t x456 = UINT8_MAX;
	static uint64_t t104 = 111189058LLU;

    t104 = (((x453%x454)%x455)&x456);

    if (t104 != 123LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x458 = -1LL;
	uint64_t x459 = UINT64_MAX;
	int32_t x460 = INT32_MAX;
	uint64_t t105 = 1283022461657912185LLU;

    t105 = (((x457%x458)%x459)&x460);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x461 = INT32_MIN;
	static int16_t x463 = INT16_MIN;
	volatile uint64_t t106 = 63731379868848LLU;

    t106 = (((x461%x462)%x463)&x464);

    if (t106 != 809878LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x465 = -38;
	int8_t x466 = 9;
	int64_t x467 = INT64_MIN;
	static uint32_t x468 = UINT32_MAX;
	int64_t t107 = 208692183731313LL;

    t107 = (((x465%x466)%x467)&x468);

    if (t107 != 4294967294LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = 12U;
	int64_t t108 = 1LL;

    t108 = (((x469%x470)%x471)&x472);

    if (t108 != 4LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x473 = INT32_MIN;
	static int64_t x475 = 3LL;
	static volatile int64_t t109 = -1848LL;

    t109 = (((x473%x474)%x475)&x476);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x477 = 110U;
	int8_t x478 = 1;
	uint64_t x479 = 2756448763037LLU;
	volatile int16_t x480 = -1019;
	static uint64_t t110 = 8032LLU;

    t110 = (((x477%x478)%x479)&x480);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x481 = 6LLU;
	uint64_t x482 = 7516LLU;
	volatile int64_t x483 = -1LL;
	int16_t x484 = INT16_MIN;

    t111 = (((x481%x482)%x483)&x484);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x485 = INT32_MIN;
	static int64_t x486 = INT64_MAX;
	static int64_t x487 = 227LL;
	static int32_t x488 = INT32_MIN;
	volatile int64_t t112 = -1000215396832276LL;

    t112 = (((x485%x486)%x487)&x488);

    if (t112 != -2147483648LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x490 = 92;
	int16_t x492 = INT16_MIN;

    t113 = (((x489%x490)%x491)&x492);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x493 = 458752798903163810LL;
	uint8_t x495 = UINT8_MAX;
	uint16_t x496 = 24U;

    t114 = (((x493%x494)%x495)&x496);

    if (t114 != 24LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x498 = UINT16_MAX;
	int64_t x499 = 209067991489323LL;
	static int32_t x500 = -1;
	volatile int64_t t115 = -302893181829LL;

    t115 = (((x497%x498)%x499)&x500);

    if (t115 != 32767LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x505 = INT8_MIN;
	static int8_t x507 = 8;
	uint8_t x508 = UINT8_MAX;

    t116 = (((x505%x506)%x507)&x508);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x509 = INT16_MIN;
	int8_t x510 = 7;
	int64_t x511 = -3715054178246859LL;
	int64_t t117 = -285783543603LL;

    t117 = (((x509%x510)%x511)&x512);

    if (t117 != 127LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x513 = -23050620;
	uint16_t x514 = 27231U;
	static volatile int64_t t118 = 3612LL;

    t118 = (((x513%x514)%x515)&x516);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	int8_t x518 = -6;
	volatile int64_t x519 = 1315022728105095LL;
	static volatile int32_t x520 = -1;
	uint64_t t119 = 68154104412481LLU;

    t119 = (((x517%x518)%x519)&x520);

    if (t119 != 5LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x521 = UINT32_MAX;
	uint32_t x522 = UINT32_MAX;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = UINT64_MAX;
	uint64_t t120 = 45LLU;

    t120 = (((x521%x522)%x523)&x524);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MIN;
	uint32_t x528 = 441556250U;
	volatile int64_t t121 = -12676LL;

    t121 = (((x525%x526)%x527)&x528);

    if (t121 != 2306LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = INT8_MAX;
	int32_t x530 = 114;
	uint8_t x532 = UINT8_MAX;
	int32_t t122 = 3284;

    t122 = (((x529%x530)%x531)&x532);

    if (t122 != 13) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x535 = -4590LL;
	volatile int64_t t123 = -352454717297793436LL;

    t123 = (((x533%x534)%x535)&x536);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x537 = -23;
	static int64_t x538 = -1LL;
	uint8_t x539 = UINT8_MAX;
	int8_t x540 = -36;
	volatile int64_t t124 = -53999LL;

    t124 = (((x537%x538)%x539)&x540);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x541 = -1;
	static int8_t x542 = 55;
	uint8_t x543 = UINT8_MAX;
	uint64_t x544 = 47161645836534LLU;

    t125 = (((x541%x542)%x543)&x544);

    if (t125 != 47161645836534LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x545 = 202124LLU;
	int32_t x546 = -1;
	volatile uint32_t x547 = 1681U;
	int16_t x548 = INT16_MIN;

    t126 = (((x545%x546)%x547)&x548);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x549 = 10285U;
	uint8_t x550 = 29U;
	int16_t x551 = 879;

    t127 = (((x549%x550)%x551)&x552);

    if (t127 != 3U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x553 = INT32_MIN;
	int32_t x555 = -1;
	int16_t x556 = INT16_MIN;
	volatile int32_t t128 = 182;

    t128 = (((x553%x554)%x555)&x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = INT8_MIN;
	static int8_t x558 = -1;
	volatile int16_t x559 = INT16_MIN;
	volatile uint32_t t129 = 251U;

    t129 = (((x557%x558)%x559)&x560);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x561 = INT32_MAX;
	int32_t x562 = -1;
	volatile uint32_t x564 = UINT32_MAX;
	static volatile uint32_t t130 = 477U;

    t130 = (((x561%x562)%x563)&x564);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x565 = 3;
	uint16_t x567 = 89U;

    t131 = (((x565%x566)%x567)&x568);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MAX;
	uint16_t x571 = UINT16_MAX;
	int8_t x572 = -1;

    t132 = (((x569%x570)%x571)&x572);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = 49;
	int64_t x574 = INT64_MAX;
	uint16_t x575 = UINT16_MAX;
	volatile int16_t x576 = INT16_MAX;
	volatile int64_t t133 = 0LL;

    t133 = (((x573%x574)%x575)&x576);

    if (t133 != 49LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x577 = UINT32_MAX;
	volatile int64_t x578 = INT64_MIN;
	uint16_t x579 = 12826U;
	int64_t t134 = -1085LL;

    t134 = (((x577%x578)%x579)&x580);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x581 = 1U;
	int64_t x582 = 1LL;
	uint16_t x583 = 1331U;
	static int32_t x584 = -1;
	int64_t t135 = 4661072931725LL;

    t135 = (((x581%x582)%x583)&x584);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = INT8_MIN;
	uint32_t x586 = 13477982U;
	int8_t x588 = -1;
	volatile uint64_t t136 = 136301276358100LLU;

    t136 = (((x585%x586)%x587)&x588);

    if (t136 != 8968892LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x590 = UINT16_MAX;
	int16_t x591 = 244;

    t137 = (((x589%x590)%x591)&x592);

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x593 = -8809947LL;
	int16_t x594 = -1;
	uint64_t x595 = UINT64_MAX;
	int8_t x596 = INT8_MAX;
	static volatile uint64_t t138 = 2LLU;

    t138 = (((x593%x594)%x595)&x596);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x597 = 7033U;
	int32_t x598 = INT32_MAX;
	static int16_t x599 = -1;
	int8_t x600 = -1;

    t139 = (((x597%x598)%x599)&x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = INT64_MIN;
	volatile int8_t x604 = INT8_MIN;

    t140 = (((x601%x602)%x603)&x604);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x605 = UINT8_MAX;
	uint8_t x606 = UINT8_MAX;
	int64_t x607 = INT64_MIN;

    t141 = (((x605%x606)%x607)&x608);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x609 = 32282U;
	uint16_t x610 = 12261U;
	uint32_t x611 = 3690975U;
	volatile uint32_t t142 = 692449252U;

    t142 = (((x609%x610)%x611)&x612);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x613 = 0U;
	volatile int64_t x616 = INT64_MIN;
	int64_t t143 = -413194446LL;

    t143 = (((x613%x614)%x615)&x616);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x617 = 120U;
	int32_t x618 = INT32_MIN;
	volatile int8_t x620 = -1;
	volatile int64_t t144 = -429483586148LL;

    t144 = (((x617%x618)%x619)&x620);

    if (t144 != 120LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x621 = 28U;
	volatile uint64_t x622 = 359LLU;
	static volatile int32_t x624 = INT32_MIN;
	uint64_t t145 = 8695873285933LLU;

    t145 = (((x621%x622)%x623)&x624);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x625 = 427U;
	int8_t x627 = INT8_MIN;
	static volatile int64_t t146 = -3006471377LL;

    t146 = (((x625%x626)%x627)&x628);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x629 = 3913590U;
	static uint64_t x631 = 15095291335852LLU;

    t147 = (((x629%x630)%x631)&x632);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x634 = -1;
	int64_t x636 = -1LL;
	static volatile int64_t t148 = -425121058LL;

    t148 = (((x633%x634)%x635)&x636);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x637 = -1297584;
	int16_t x639 = -2641;
	int64_t x640 = -109254020LL;
	int64_t t149 = 1326870LL;

    t149 = (((x637%x638)%x639)&x640);

    if (t149 != -109256128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x641 = -1LL;
	volatile int16_t x642 = -1;
	int8_t x644 = 2;
	int64_t t150 = -85990300853727LL;

    t150 = (((x641%x642)%x643)&x644);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x645 = INT8_MIN;
	volatile int64_t x646 = 2904LL;
	static volatile int16_t x647 = INT16_MAX;
	static int64_t x648 = -41527321885753LL;
	static int64_t t151 = -438826LL;

    t151 = (((x645%x646)%x647)&x648);

    if (t151 != -41527321885824LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MIN;
	static uint32_t x652 = 6923U;

    t152 = (((x649%x650)%x651)&x652);

    if (t152 != 3U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x653 = UINT64_MAX;
	volatile int32_t x654 = -319890;
	uint16_t x655 = 31750U;
	int64_t x656 = -1731568LL;
	volatile uint64_t t153 = 1047206227014316202LLU;

    t153 = (((x653%x654)%x655)&x656);

    if (t153 != 16LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x657 = UINT64_MAX;
	int8_t x658 = -1;
	volatile int32_t x659 = 100;
	volatile uint8_t x660 = 20U;
	uint64_t t154 = 2962808822LLU;

    t154 = (((x657%x658)%x659)&x660);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x661 = 30727496LLU;
	uint32_t x662 = UINT32_MAX;
	int8_t x663 = 1;
	volatile uint16_t x664 = 7U;
	uint64_t t155 = 30764028918597LLU;

    t155 = (((x661%x662)%x663)&x664);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x665 = 13U;
	int16_t x667 = 12406;
	volatile uint32_t x668 = 46718U;
	static uint32_t t156 = 10801377U;

    t156 = (((x665%x666)%x667)&x668);

    if (t156 != 12U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x669 = 17140243U;
	int64_t x670 = INT64_MIN;
	static int16_t x671 = 8;
	int32_t x672 = INT32_MAX;
	static int64_t t157 = -48466734179380036LL;

    t157 = (((x669%x670)%x671)&x672);

    if (t157 != 3LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = -1;
	static volatile int16_t x674 = INT16_MIN;

    t158 = (((x673%x674)%x675)&x676);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x677 = 34U;
	int32_t x678 = -26;
	static uint8_t x680 = 9U;
	uint64_t t159 = 44554966221576191LLU;

    t159 = (((x677%x678)%x679)&x680);

    if (t159 != 8LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x681 = UINT16_MAX;
	static int32_t x682 = INT32_MAX;
	volatile int16_t x683 = 1;
	volatile int32_t x684 = 2390;
	static volatile int32_t t160 = 62920615;

    t160 = (((x681%x682)%x683)&x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x685 = -1463;
	int64_t x686 = 1LL;
	uint16_t x688 = 43U;

    t161 = (((x685%x686)%x687)&x688);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x690 = -848;
	int64_t x691 = INT64_MIN;
	int8_t x692 = INT8_MIN;
	int64_t t162 = 739339705263LL;

    t162 = (((x689%x690)%x691)&x692);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x695 = INT32_MAX;

    t163 = (((x693%x694)%x695)&x696);

    if (t163 != 1501763LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x697 = INT16_MIN;
	static int64_t x698 = INT64_MIN;
	int64_t x699 = -368LL;
	int32_t x700 = -103992;

    t164 = (((x697%x698)%x699)&x700);

    if (t164 != -104000LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x705 = 81U;
	int64_t x706 = INT64_MAX;
	int8_t x708 = INT8_MIN;
	static int64_t t165 = -9752612778704592LL;

    t165 = (((x705%x706)%x707)&x708);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x709 = -146917135595210779LL;
	uint8_t x710 = 5U;
	int64_t x711 = INT64_MIN;
	volatile int64_t t166 = 2LL;

    t166 = (((x709%x710)%x711)&x712);

    if (t166 != 1375708LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = -1;
	uint16_t x714 = UINT16_MAX;
	static int16_t x715 = -152;

    t167 = (((x713%x714)%x715)&x716);

    if (t167 != 5) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x717 = -1;
	uint16_t x718 = 2516U;
	static int64_t x719 = INT64_MIN;

    t168 = (((x717%x718)%x719)&x720);

    if (t168 != 7LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x721 = INT8_MIN;
	static int64_t x723 = INT64_MIN;
	int16_t x724 = -1;
	volatile int64_t t169 = 1027829796039LL;

    t169 = (((x721%x722)%x723)&x724);

    if (t169 != -128LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x725 = INT32_MIN;
	static uint32_t x726 = 1U;
	volatile uint32_t x727 = 1445044491U;
	volatile uint8_t x728 = 78U;
	uint32_t t170 = 183849714U;

    t170 = (((x725%x726)%x727)&x728);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x731 = 8862U;
	static int32_t x732 = INT32_MIN;
	int64_t t171 = -3726925LL;

    t171 = (((x729%x730)%x731)&x732);

    if (t171 != -2147483648LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x733 = UINT32_MAX;
	int64_t x734 = 137028803783763536LL;
	volatile int8_t x736 = INT8_MIN;
	int64_t t172 = -83LL;

    t172 = (((x733%x734)%x735)&x736);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x737 = INT64_MIN;
	static uint64_t x738 = 1274018957903837912LLU;
	volatile int32_t x740 = INT32_MIN;
	volatile uint64_t t173 = 5LLU;

    t173 = (((x737%x738)%x739)&x740);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x741 = UINT16_MAX;
	static int32_t x743 = INT32_MIN;
	int64_t x744 = -1523978315056151831LL;
	int64_t t174 = -406838871324588206LL;

    t174 = (((x741%x742)%x743)&x744);

    if (t174 != 73LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x745 = INT64_MIN;
	static int8_t x746 = 12;
	volatile int16_t x747 = INT16_MIN;
	static uint32_t x748 = UINT32_MAX;
	int64_t t175 = -168791865589129614LL;

    t175 = (((x745%x746)%x747)&x748);

    if (t175 != 4294967288LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x751 = INT16_MIN;
	static int32_t x752 = -2301;
	static volatile int64_t t176 = 3579994LL;

    t176 = (((x749%x750)%x751)&x752);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x754 = 2962;
	static uint16_t x755 = UINT16_MAX;
	static uint64_t x756 = UINT64_MAX;
	uint64_t t177 = 712376559990LLU;

    t177 = (((x753%x754)%x755)&x756);

    if (t177 != 2873LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x757 = 108U;
	uint32_t x759 = 17695736U;
	static int16_t x760 = INT16_MAX;
	volatile uint32_t t178 = 98452316U;

    t178 = (((x757%x758)%x759)&x760);

    if (t178 != 108U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x761 = INT64_MAX;
	static volatile int16_t x762 = -4;
	volatile uint8_t x763 = 1U;

    t179 = (((x761%x762)%x763)&x764);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x765 = 10846274LLU;
	int64_t x766 = -1319528691505198LL;
	int32_t x767 = -1;
	int64_t x768 = INT64_MAX;
	volatile uint64_t t180 = 5LLU;

    t180 = (((x765%x766)%x767)&x768);

    if (t180 != 10846274LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x770 = -1;
	static int8_t x771 = INT8_MAX;
	int32_t x772 = 7;
	volatile int32_t t181 = 19774;

    t181 = (((x769%x770)%x771)&x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x773 = 26524U;
	uint32_t x775 = UINT32_MAX;
	volatile uint64_t t182 = 11446LLU;

    t182 = (((x773%x774)%x775)&x776);

    if (t182 != 26524LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile int8_t x778 = INT8_MAX;
	volatile uint64_t x779 = 78LLU;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t183 = 25816569393LLU;

    t183 = (((x777%x778)%x779)&x780);

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x781 = INT64_MIN;
	uint32_t x783 = UINT32_MAX;
	uint8_t x784 = 25U;
	static volatile int64_t t184 = -6920370930936LL;

    t184 = (((x781%x782)%x783)&x784);

    if (t184 != 25LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x793 = -256711;
	static uint64_t x794 = 16386045474135475LLU;
	uint16_t x795 = 2897U;
	static int8_t x796 = INT8_MIN;
	volatile uint64_t t185 = 1427214700851420LLU;

    t185 = (((x793%x794)%x795)&x796);

    if (t185 != 896LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x797 = INT32_MIN;
	int8_t x798 = 1;
	volatile int8_t x799 = INT8_MIN;
	volatile int64_t x800 = INT64_MIN;
	static volatile int64_t t186 = 150LL;

    t186 = (((x797%x798)%x799)&x800);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x802 = INT32_MIN;
	uint16_t x803 = 10U;
	int64_t x804 = -1955327LL;
	static volatile int64_t t187 = 6LL;

    t187 = (((x801%x802)%x803)&x804);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x806 = 404048369;
	int64_t x807 = INT64_MIN;
	static volatile int32_t x808 = -1;
	static int64_t t188 = 462LL;

    t188 = (((x805%x806)%x807)&x808);

    if (t188 != 60LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x810 = 1U;
	int32_t x811 = INT32_MAX;
	static volatile int64_t x812 = INT64_MIN;

    t189 = (((x809%x810)%x811)&x812);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x813 = 0;
	uint32_t x814 = 23U;
	int8_t x815 = -61;
	uint8_t x816 = 11U;
	static uint32_t t190 = 904U;

    t190 = (((x813%x814)%x815)&x816);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x817 = INT8_MIN;
	int16_t x820 = 0;
	volatile int32_t t191 = -49996720;

    t191 = (((x817%x818)%x819)&x820);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x825 = -1;
	int8_t x826 = -30;
	int32_t x827 = 1;
	volatile int32_t x828 = 0;
	volatile int32_t t192 = -1;

    t192 = (((x825%x826)%x827)&x828);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x830 = INT8_MIN;
	int8_t x831 = INT8_MIN;
	int32_t x832 = INT32_MIN;

    t193 = (((x829%x830)%x831)&x832);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x833 = 53694479883LL;
	int32_t x834 = -16022335;
	volatile int32_t x836 = -4509616;
	int64_t t194 = 190549703952LL;

    t194 = (((x833%x834)%x835)&x836);

    if (t194 != 12352LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x837 = 109279LL;
	int16_t x838 = -1;
	int16_t x839 = 3530;
	int32_t x840 = -58630277;
	static volatile int64_t t195 = -382086942790803LL;

    t195 = (((x837%x838)%x839)&x840);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = 560550;
	int32_t x844 = INT32_MIN;
	uint64_t t196 = 549550LLU;

    t196 = (((x841%x842)%x843)&x844);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x845 = 26372LL;
	static uint16_t x848 = 42U;
	uint64_t t197 = 90587035294LLU;

    t197 = (((x845%x846)%x847)&x848);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x849 = -1LL;
	int8_t x850 = INT8_MIN;
	static int8_t x852 = INT8_MIN;
	int64_t t198 = 10LL;

    t198 = (((x849%x850)%x851)&x852);

    if (t198 != -128LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x853 = -506048003;
	int8_t x854 = -1;
	int8_t x856 = INT8_MIN;
	static volatile int32_t t199 = 193416586;

    t199 = (((x853%x854)%x855)&x856);

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

