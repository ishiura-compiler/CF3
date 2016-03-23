
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

static int8_t x1 = INT8_MIN;
int8_t x4 = INT8_MAX;
int64_t x9 = -52LL;
uint64_t x10 = 45737331367LLU;
static uint16_t x11 = UINT16_MAX;
volatile int32_t x12 = INT32_MAX;
int64_t x15 = INT64_MIN;
int32_t t3 = -106;
volatile int8_t x22 = INT8_MIN;
int32_t t5 = -376;
volatile int32_t x29 = -839739;
int16_t x30 = -1;
int16_t x33 = INT16_MIN;
uint16_t x54 = 46U;
uint16_t x55 = 33U;
int16_t x58 = -1;
int8_t x60 = 28;
uint16_t x70 = 50U;
static uint32_t x100 = UINT32_MAX;
volatile int32_t t17 = -1288;
volatile uint32_t x104 = 83U;
int32_t x105 = INT32_MIN;
int32_t x112 = 891;
int32_t x114 = INT32_MAX;
volatile int32_t t21 = 94;
volatile uint16_t x123 = 6U;
uint8_t x124 = 37U;
uint16_t x125 = UINT16_MAX;
int8_t x127 = -1;
static int8_t x128 = -1;
int64_t x137 = INT64_MIN;
uint8_t x140 = UINT8_MAX;
volatile int16_t x141 = INT16_MAX;
int64_t x146 = -1LL;
int32_t t28 = 0;
static volatile uint32_t x162 = UINT32_MAX;
uint8_t x164 = UINT8_MAX;
int32_t t30 = 6418030;
int64_t x166 = 47856748213120LL;
volatile int8_t x167 = INT8_MIN;
uint8_t x172 = UINT8_MAX;
int32_t t33 = 2;
int8_t x179 = -1;
uint8_t x181 = 98U;
int64_t x185 = INT64_MIN;
uint32_t x188 = UINT32_MAX;
uint32_t x189 = 24077286U;
uint64_t x191 = UINT64_MAX;
int8_t x199 = INT8_MAX;
int16_t x200 = -3761;
int16_t x204 = -1;
volatile int32_t t40 = 3354;
int32_t t46 = 83050706;
uint16_t x257 = UINT16_MAX;
int16_t x259 = -1;
uint64_t x273 = 20065494214817443LLU;
static uint64_t x275 = UINT64_MAX;
volatile int8_t x282 = INT8_MAX;
int8_t x284 = INT8_MIN;
static volatile int32_t t52 = 3;
static uint64_t x290 = 54213321LLU;
int64_t x306 = 1077136537LL;
volatile int32_t t58 = -13493;
uint64_t x342 = 3890LLU;
volatile int32_t x343 = INT32_MIN;
static uint32_t x352 = UINT32_MAX;
int16_t x357 = -39;
int16_t x363 = INT16_MIN;
int32_t t63 = 1;
int16_t x370 = INT16_MIN;
int32_t t65 = 2;
uint64_t x384 = UINT64_MAX;
int32_t t66 = -2;
int32_t x385 = -7686;
int64_t x387 = 4501803555224517545LL;
int64_t x389 = -1LL;
uint32_t x392 = 60U;
static int8_t x402 = INT8_MAX;
volatile int32_t t71 = 2;
volatile int8_t x407 = 9;
uint64_t x412 = 165780534191288995LLU;
static int64_t x418 = -5454750LL;
volatile uint8_t x420 = UINT8_MAX;
int64_t x421 = -672LL;
uint16_t x423 = UINT16_MAX;
volatile int32_t t78 = -1;
int32_t x443 = 4;
volatile int32_t t79 = 642;
int32_t t83 = 24049;
int64_t x484 = 855120LL;
uint64_t x489 = 4LLU;
volatile int32_t t88 = -24;
int8_t x495 = INT8_MIN;
volatile int16_t x497 = -1;
int8_t x500 = INT8_MIN;
int32_t t90 = -5377;
static int32_t x505 = -1;
int64_t x507 = INT64_MIN;
static uint32_t x512 = 8132767U;
uint32_t x517 = 11927U;
int32_t t95 = 1;
int32_t x529 = 6996276;
volatile int16_t x531 = INT16_MIN;
int32_t x540 = INT32_MIN;
volatile int16_t x542 = -1;
int16_t x543 = INT16_MIN;
int16_t x554 = INT16_MIN;
volatile uint16_t x556 = 625U;
int32_t t102 = 871;
uint8_t x558 = 9U;
int16_t x560 = -5;
int32_t t103 = 14;
static volatile uint16_t x565 = UINT16_MAX;
volatile int8_t x570 = -1;
int64_t x571 = INT64_MIN;
int64_t x572 = -66858LL;
uint64_t x573 = UINT64_MAX;
int32_t t106 = 7;
static int32_t t107 = 2;
int32_t x582 = 104370748;
int64_t x583 = INT64_MIN;
static int64_t x586 = 732635866513LL;
int8_t x599 = 0;
int32_t x602 = -37462420;
int8_t x603 = INT8_MIN;
static int8_t x608 = INT8_MAX;
int8_t x613 = INT8_MAX;
int8_t x614 = INT8_MIN;
volatile int32_t x615 = -768708;
uint8_t x616 = 6U;
volatile int32_t t114 = 4935;
int64_t x622 = -1LL;
volatile uint32_t x630 = 501867U;
int8_t x633 = -2;
uint8_t x634 = 1U;
int64_t x646 = INT64_MIN;
static int32_t x661 = -1;
int8_t x665 = INT8_MIN;
uint8_t x672 = 2U;
static int32_t x678 = 7254;
uint32_t x690 = 108U;
int8_t x692 = INT8_MIN;
static volatile int8_t x693 = INT8_MIN;
static volatile uint32_t x722 = 27634U;
int16_t x726 = INT16_MAX;
int16_t x735 = -420;
volatile int32_t x741 = INT32_MIN;
uint32_t x742 = 32U;
static int8_t x746 = INT8_MAX;
uint32_t x755 = 315009U;
volatile int32_t t137 = 13442969;
int8_t x757 = -1;
uint32_t x758 = UINT32_MAX;
static uint32_t x761 = UINT32_MAX;
volatile int16_t x763 = -1;
uint64_t x765 = UINT64_MAX;
static volatile int64_t x766 = 69677721232779LL;
int32_t t141 = 1408;
uint8_t x775 = UINT8_MAX;
int64_t x786 = 45385200LL;
uint16_t x787 = 0U;
int32_t t144 = 942859264;
uint16_t x789 = 19045U;
int32_t t145 = -403395;
volatile int16_t x813 = 19;
int16_t x827 = INT16_MIN;
static volatile int32_t t151 = -255153406;
static uint8_t x854 = 3U;
int8_t x856 = 0;
int32_t t157 = 732;
uint64_t x867 = 3079079219LLU;
volatile int64_t x869 = INT64_MAX;
static uint64_t x872 = 16791435508391649LLU;
volatile int32_t t159 = -2690;
uint16_t x896 = 2268U;
static int16_t x914 = INT16_MAX;
int16_t x915 = INT16_MIN;
volatile uint8_t x926 = 81U;
int16_t x931 = INT16_MIN;
int16_t x934 = -1;
int32_t x953 = INT32_MAX;
static int32_t t174 = 0;
static volatile uint64_t x961 = 1170444LLU;
static int16_t x968 = 52;
int16_t x970 = INT16_MIN;
volatile int32_t t178 = -246624;
static uint64_t x980 = 627202738518060693LLU;
int16_t x983 = INT16_MIN;
volatile int32_t t181 = 30823570;
int64_t x989 = -260766LL;
static int8_t x990 = -1;
int8_t x996 = -1;
int32_t x1003 = 134673;
int64_t x1005 = -12606752643724147LL;
uint8_t x1006 = 13U;
uint8_t x1012 = UINT8_MAX;
volatile int32_t t187 = 50662013;
uint32_t x1026 = UINT32_MAX;
uint8_t x1058 = 47U;
uint32_t x1080 = UINT32_MAX;
int32_t x1081 = 303383214;
volatile int32_t x1087 = INT32_MIN;
uint32_t x1088 = 195U;


void f0(void) {
    	volatile uint32_t x2 = 2141321892U;
	int32_t x3 = 301422397;
	static volatile int32_t t0 = 138989;

    t0 = ((x1-x2)>(x3-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t t1 = -14187072;

    t1 = ((x9-x10)>(x11-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = 664482494;
	int16_t x14 = 2;
	int8_t x16 = INT8_MIN;
	int32_t t2 = -572261562;

    t2 = ((x13-x14)>(x15-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 330510U;
	int8_t x18 = INT8_MAX;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = -1;

    t3 = ((x17-x18)>(x19-x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	int64_t x23 = -1LL;
	int64_t x24 = 34500977LL;
	volatile int32_t t4 = -12;

    t4 = ((x21-x22)>(x23-x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = UINT64_MAX;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 358508310588LLU;

    t5 = ((x25-x26)>(x27-x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x31 = 1060949265715LLU;
	int64_t x32 = 5773873644LL;
	volatile int32_t t6 = -23226;

    t6 = ((x29-x30)>(x31-x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = -1;
	volatile uint8_t x35 = 13U;
	volatile uint8_t x36 = UINT8_MAX;
	int32_t t7 = -110;

    t7 = ((x33-x34)>(x35-x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = 1397;
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	uint16_t x44 = 0U;
	int32_t t8 = -3;

    t8 = ((x41-x42)>(x43-x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = 16669391;
	uint8_t x46 = 7U;
	uint64_t x47 = 221569LLU;
	static int8_t x48 = -1;
	volatile int32_t t9 = 999;

    t9 = ((x45-x46)>(x47-x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 0U;
	volatile int64_t x50 = -1LL;
	volatile int16_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;
	int32_t t10 = -17;

    t10 = ((x49-x50)>(x51-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 56;
	int64_t x56 = INT64_MAX;
	int32_t t11 = -964;

    t11 = ((x53-x54)>(x55-x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -5;
	int64_t x59 = -1LL;
	volatile int32_t t12 = -375804;

    t12 = ((x57-x58)>(x59-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = INT64_MAX;
	static int64_t x71 = INT64_MIN;
	static int16_t x72 = INT16_MIN;
	int32_t t13 = -3;

    t13 = ((x69-x70)>(x71-x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x73 = 208;
	int32_t x74 = -1;
	int8_t x75 = -1;
	int8_t x76 = -1;
	static volatile int32_t t14 = 53;

    t14 = ((x73-x74)>(x75-x76));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = INT16_MIN;
	static int64_t x78 = 762203LL;
	int64_t x79 = -4322436843017LL;
	uint8_t x80 = 2U;
	volatile int32_t t15 = 1467;

    t15 = ((x77-x78)>(x79-x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = 839;
	int8_t x86 = 31;
	int32_t x87 = -1;
	int8_t x88 = -1;
	int32_t t16 = 111199428;

    t16 = ((x85-x86)>(x87-x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x97 = INT8_MAX;
	uint64_t x98 = 47882290377379LLU;
	uint32_t x99 = UINT32_MAX;

    t17 = ((x97-x98)>(x99-x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x101 = 4728895669LLU;
	static int8_t x102 = INT8_MIN;
	int64_t x103 = -89506441LL;
	volatile int32_t t18 = -2;

    t18 = ((x101-x102)>(x103-x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x106 = -350421832;
	volatile uint32_t x107 = UINT32_MAX;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t19 = 1;

    t19 = ((x105-x106)>(x107-x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = 143;
	int8_t x110 = INT8_MAX;
	static uint32_t x111 = 2618084U;
	int32_t t20 = 0;

    t20 = ((x109-x110)>(x111-x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x113 = UINT32_MAX;
	int64_t x115 = INT64_MAX;
	uint16_t x116 = 248U;

    t21 = ((x113-x114)>(x115-x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x121 = 33180U;
	volatile uint32_t x122 = UINT32_MAX;
	int32_t t22 = 1;

    t22 = ((x121-x122)>(x123-x124));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x126 = -1;
	volatile int32_t t23 = -2;

    t23 = ((x125-x126)>(x127-x128));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x129 = 63U;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = 1;
	int64_t x132 = 14093754831LL;
	int32_t t24 = -12393710;

    t24 = ((x129-x130)>(x131-x132));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	volatile int32_t t25 = -184;

    t25 = ((x137-x138)>(x139-x140));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t26 = 314534527;

    t26 = ((x141-x142)>(x143-x144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x145 = 778161496LLU;
	volatile int16_t x147 = INT16_MAX;
	int32_t x148 = -1;
	volatile int32_t t27 = 827;

    t27 = ((x145-x146)>(x147-x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x149 = -1;
	static volatile int16_t x150 = -2;
	static uint16_t x151 = 6748U;
	int64_t x152 = 1LL;

    t28 = ((x149-x150)>(x151-x152));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x153 = -1;
	int16_t x154 = -1;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t29 = 4339261;

    t29 = ((x153-x154)>(x155-x156));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x161 = UINT16_MAX;
	uint8_t x163 = UINT8_MAX;

    t30 = ((x161-x162)>(x163-x164));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x165 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t31 = 1495283;

    t31 = ((x165-x166)>(x167-x168));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -61058543501LL;
	volatile int32_t t32 = 231703719;

    t32 = ((x169-x170)>(x171-x172));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x173 = -1;
	int16_t x174 = -23;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;

    t33 = ((x173-x174)>(x175-x176));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x177 = INT64_MIN;
	int64_t x178 = INT64_MIN;
	int64_t x180 = 100988LL;
	int32_t t34 = -567;

    t34 = ((x177-x178)>(x179-x180));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x182 = UINT64_MAX;
	int32_t x183 = -967988;
	static uint16_t x184 = 90U;
	volatile int32_t t35 = 0;

    t35 = ((x181-x182)>(x183-x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x186 = -1LL;
	static volatile int64_t x187 = -10985577LL;
	volatile int32_t t36 = -28498;

    t36 = ((x185-x186)>(x187-x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x190 = 1U;
	static int16_t x192 = INT16_MAX;
	int32_t t37 = 1;

    t37 = ((x189-x190)>(x191-x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile uint32_t x198 = 207648505U;
	int32_t t38 = 15034;

    t38 = ((x197-x198)>(x199-x200));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x201 = UINT8_MAX;
	int16_t x202 = -1;
	volatile uint64_t x203 = 2729696679475168LLU;
	volatile int32_t t39 = 30942;

    t39 = ((x201-x202)>(x203-x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x205 = INT8_MIN;
	int16_t x206 = 28;
	uint32_t x207 = 192713057U;
	int32_t x208 = INT32_MAX;

    t40 = ((x205-x206)>(x207-x208));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x209 = 0;
	int8_t x210 = 5;
	uint16_t x211 = 0U;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t41 = -17597551;

    t41 = ((x209-x210)>(x211-x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x213 = 58U;
	int64_t x214 = -16301297396167553LL;
	volatile uint16_t x215 = UINT16_MAX;
	uint32_t x216 = UINT32_MAX;
	int32_t t42 = -134569764;

    t42 = ((x213-x214)>(x215-x216));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x225 = -1;
	uint16_t x226 = 7078U;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t43 = 408610;

    t43 = ((x225-x226)>(x227-x228));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x229 = -1LL;
	static int8_t x230 = INT8_MAX;
	uint64_t x231 = 22415489394947LLU;
	int16_t x232 = -3;
	volatile int32_t t44 = 49;

    t44 = ((x229-x230)>(x231-x232));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x241 = 3991607413LLU;
	int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;
	int32_t t45 = -2198;

    t45 = ((x241-x242)>(x243-x244));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 1976LLU;
	volatile int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MIN;

    t46 = ((x249-x250)>(x251-x252));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x258 = INT64_MAX;
	static int64_t x260 = INT64_MIN;
	volatile int32_t t47 = 10912562;

    t47 = ((x257-x258)>(x259-x260));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x265 = INT8_MIN;
	volatile uint64_t x266 = 262901950177104LLU;
	static int16_t x267 = -1;
	static uint32_t x268 = UINT32_MAX;
	int32_t t48 = -714240;

    t48 = ((x265-x266)>(x267-x268));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x269 = 226721U;
	int8_t x270 = 0;
	volatile int64_t x271 = INT64_MIN;
	static volatile int8_t x272 = -1;
	volatile int32_t t49 = 254561;

    t49 = ((x269-x270)>(x271-x272));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x274 = 2;
	volatile int64_t x276 = -1LL;
	volatile int32_t t50 = -53285752;

    t50 = ((x273-x274)>(x275-x276));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x277 = INT8_MIN;
	volatile int64_t x278 = -1LL;
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 813U;
	int32_t t51 = -3;

    t51 = ((x277-x278)>(x279-x280));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x281 = INT8_MIN;
	uint8_t x283 = 0U;

    t52 = ((x281-x282)>(x283-x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x289 = 204LLU;
	uint64_t x291 = 10898843LLU;
	int32_t x292 = 26250;
	volatile int32_t t53 = 2050891;

    t53 = ((x289-x290)>(x291-x292));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x293 = INT64_MIN;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = -17;
	uint16_t x296 = 1663U;
	volatile int32_t t54 = 40;

    t54 = ((x293-x294)>(x295-x296));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x297 = -281345368761719406LL;
	volatile int32_t x298 = -1;
	int32_t x299 = INT32_MIN;
	volatile int64_t x300 = 11117962534159558LL;
	int32_t t55 = -14;

    t55 = ((x297-x298)>(x299-x300));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x305 = UINT32_MAX;
	static int64_t x307 = -7610025371554579LL;
	int64_t x308 = 776858779LL;
	volatile int32_t t56 = -29338157;

    t56 = ((x305-x306)>(x307-x308));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x309 = INT8_MIN;
	int16_t x310 = -23;
	uint16_t x311 = 258U;
	volatile int64_t x312 = 12061LL;
	int32_t t57 = -874446;

    t57 = ((x309-x310)>(x311-x312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x329 = INT64_MIN;
	uint64_t x330 = UINT64_MAX;
	static int16_t x331 = 1;
	static uint16_t x332 = UINT16_MAX;

    t58 = ((x329-x330)>(x331-x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x341 = -7;
	static volatile int16_t x344 = 0;
	volatile int32_t t59 = 184012;

    t59 = ((x341-x342)>(x343-x344));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int32_t t60 = 2293;

    t60 = ((x349-x350)>(x351-x352));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x358 = 6U;
	uint8_t x359 = 123U;
	int32_t x360 = INT32_MAX;
	int32_t t61 = -1;

    t61 = ((x357-x358)>(x359-x360));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x361 = UINT32_MAX;
	int8_t x362 = -1;
	int16_t x364 = 2;
	static int32_t t62 = 6196011;

    t62 = ((x361-x362)>(x363-x364));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x365 = -1787636041089799LL;
	uint32_t x366 = 26U;
	uint8_t x367 = 62U;
	int8_t x368 = INT8_MIN;

    t63 = ((x365-x366)>(x367-x368));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	volatile int16_t x372 = -7;
	int32_t t64 = 2713071;

    t64 = ((x369-x370)>(x371-x372));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x377 = 28;
	uint8_t x378 = 3U;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = -7912332LL;

    t65 = ((x377-x378)>(x379-x380));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x381 = UINT32_MAX;
	uint16_t x382 = UINT16_MAX;
	static int32_t x383 = -1;

    t66 = ((x381-x382)>(x383-x384));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x386 = INT8_MIN;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t67 = 3;

    t67 = ((x385-x386)>(x387-x388));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x390 = -1;
	static volatile int8_t x391 = INT8_MAX;
	int32_t t68 = -180868997;

    t68 = ((x389-x390)>(x391-x392));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x393 = INT32_MAX;
	int8_t x394 = 1;
	int16_t x395 = -1;
	int64_t x396 = INT64_MIN;
	int32_t t69 = -18730;

    t69 = ((x393-x394)>(x395-x396));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x397 = 7899303179LLU;
	int64_t x398 = 8LL;
	uint16_t x399 = 1U;
	volatile int16_t x400 = -1;
	int32_t t70 = -3340;

    t70 = ((x397-x398)>(x399-x400));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x401 = 0;
	int8_t x403 = INT8_MAX;
	int16_t x404 = -1;

    t71 = ((x401-x402)>(x403-x404));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x405 = INT8_MIN;
	static int8_t x406 = INT8_MAX;
	int32_t x408 = -138862913;
	volatile int32_t t72 = -36970;

    t72 = ((x405-x406)>(x407-x408));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x409 = INT32_MIN;
	volatile uint64_t x410 = 509979523LLU;
	int32_t x411 = INT32_MIN;
	int32_t t73 = 2152;

    t73 = ((x409-x410)>(x411-x412));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x413 = 74481402973317LLU;
	volatile uint32_t x414 = 234U;
	uint8_t x415 = UINT8_MAX;
	uint16_t x416 = 31U;
	volatile int32_t t74 = -1491198;

    t74 = ((x413-x414)>(x415-x416));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x417 = UINT32_MAX;
	int64_t x419 = INT64_MAX;
	int32_t t75 = 25941497;

    t75 = ((x417-x418)>(x419-x420));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x422 = 387LLU;
	uint16_t x424 = 0U;
	int32_t t76 = 134042;

    t76 = ((x421-x422)>(x423-x424));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x429 = 3329134521816338861LLU;
	static volatile uint8_t x430 = 0U;
	static uint16_t x431 = UINT16_MAX;
	volatile int64_t x432 = -1LL;
	static volatile int32_t t77 = 10668968;

    t77 = ((x429-x430)>(x431-x432));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x433 = INT16_MIN;
	int16_t x434 = -7268;
	uint64_t x435 = 985LLU;
	int16_t x436 = INT16_MIN;

    t78 = ((x433-x434)>(x435-x436));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x441 = INT8_MIN;
	volatile int16_t x442 = -1;
	int16_t x444 = -24;

    t79 = ((x441-x442)>(x443-x444));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x445 = -26663189;
	int64_t x446 = INT64_MIN;
	int64_t x447 = 245LL;
	int8_t x448 = -1;
	int32_t t80 = -128;

    t80 = ((x445-x446)>(x447-x448));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x449 = INT16_MAX;
	uint64_t x450 = UINT64_MAX;
	uint32_t x451 = 78U;
	int64_t x452 = INT64_MAX;
	volatile int32_t t81 = -131;

    t81 = ((x449-x450)>(x451-x452));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x457 = -1;
	static volatile int64_t x458 = INT64_MAX;
	uint16_t x459 = 2U;
	int16_t x460 = -1746;
	volatile int32_t t82 = 18621;

    t82 = ((x457-x458)>(x459-x460));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x461 = UINT16_MAX;
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	int16_t x464 = -1;

    t83 = ((x461-x462)>(x463-x464));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x465 = -19319915LL;
	static int64_t x466 = -1LL;
	volatile int16_t x467 = INT16_MIN;
	static volatile uint16_t x468 = UINT16_MAX;
	volatile int32_t t84 = 14930237;

    t84 = ((x465-x466)>(x467-x468));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x469 = INT16_MIN;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = 7751;
	uint16_t x472 = 5277U;
	static volatile int32_t t85 = -683457683;

    t85 = ((x469-x470)>(x471-x472));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x481 = 1086U;
	volatile int16_t x482 = INT16_MIN;
	volatile int8_t x483 = 2;
	volatile int32_t t86 = -1;

    t86 = ((x481-x482)>(x483-x484));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x485 = -1LL;
	uint16_t x486 = 781U;
	uint64_t x487 = UINT64_MAX;
	int64_t x488 = -2699606LL;
	volatile int32_t t87 = -1697;

    t87 = ((x485-x486)>(x487-x488));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x490 = INT32_MAX;
	volatile int16_t x491 = -4;
	volatile int64_t x492 = -1LL;

    t88 = ((x489-x490)>(x491-x492));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x493 = UINT8_MAX;
	int8_t x494 = INT8_MAX;
	volatile int32_t x496 = INT32_MIN;
	int32_t t89 = 14804;

    t89 = ((x493-x494)>(x495-x496));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x498 = 2U;
	volatile int8_t x499 = 1;

    t90 = ((x497-x498)>(x499-x500));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x506 = 75U;
	int64_t x508 = -1LL;
	int32_t t91 = 9781925;

    t91 = ((x505-x506)>(x507-x508));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x509 = INT64_MAX;
	static volatile int32_t x510 = INT32_MAX;
	int8_t x511 = 2;
	static int32_t t92 = -55801233;

    t92 = ((x509-x510)>(x511-x512));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x513 = 508LLU;
	static uint64_t x514 = 16961266LLU;
	int8_t x515 = 4;
	uint32_t x516 = 116U;
	int32_t t93 = -7913415;

    t93 = ((x513-x514)>(x515-x516));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x518 = 14672U;
	volatile int8_t x519 = INT8_MAX;
	static int8_t x520 = INT8_MAX;
	int32_t t94 = -94;

    t94 = ((x517-x518)>(x519-x520));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x521 = 13U;
	uint32_t x522 = 15U;
	int32_t x523 = -1;
	volatile int8_t x524 = INT8_MIN;

    t95 = ((x521-x522)>(x523-x524));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x525 = -470108LL;
	volatile uint8_t x526 = 43U;
	static uint8_t x527 = UINT8_MAX;
	int64_t x528 = -1LL;
	int32_t t96 = -408271115;

    t96 = ((x525-x526)>(x527-x528));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x530 = UINT64_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t97 = -72;

    t97 = ((x529-x530)>(x531-x532));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x533 = -560456364LL;
	int8_t x534 = -1;
	int16_t x535 = 2922;
	volatile int8_t x536 = 23;
	volatile int32_t t98 = 61968022;

    t98 = ((x533-x534)>(x535-x536));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x537 = INT64_MAX;
	uint64_t x538 = UINT64_MAX;
	static int32_t x539 = INT32_MIN;
	volatile int32_t t99 = -15696;

    t99 = ((x537-x538)>(x539-x540));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x541 = UINT16_MAX;
	int64_t x544 = INT64_MIN;
	int32_t t100 = 0;

    t100 = ((x541-x542)>(x543-x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x549 = INT64_MIN;
	volatile int8_t x550 = INT8_MIN;
	volatile uint16_t x551 = UINT16_MAX;
	static int64_t x552 = 2757321117103002LL;
	int32_t t101 = 50577;

    t101 = ((x549-x550)>(x551-x552));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x553 = INT16_MAX;
	int32_t x555 = 1052423536;

    t102 = ((x553-x554)>(x555-x556));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x557 = -1;
	uint16_t x559 = 42U;

    t103 = ((x557-x558)>(x559-x560));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x566 = INT64_MAX;
	int8_t x567 = -3;
	int16_t x568 = INT16_MAX;
	volatile int32_t t104 = -504529114;

    t104 = ((x565-x566)>(x567-x568));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x569 = 1458;
	volatile int32_t t105 = 314;

    t105 = ((x569-x570)>(x571-x572));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x574 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	volatile int16_t x576 = -12;

    t106 = ((x573-x574)>(x575-x576));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x577 = 0U;
	int32_t x578 = 997640429;
	static int64_t x579 = 275847224LL;
	int8_t x580 = INT8_MIN;

    t107 = ((x577-x578)>(x579-x580));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x581 = 3U;
	int8_t x584 = -1;
	int32_t t108 = -529443250;

    t108 = ((x581-x582)>(x583-x584));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	volatile uint8_t x587 = 90U;
	int64_t x588 = -1LL;
	int32_t t109 = -301351924;

    t109 = ((x585-x586)>(x587-x588));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x597 = INT64_MAX;
	uint8_t x598 = 7U;
	int16_t x600 = -1;
	volatile int32_t t110 = 1108802;

    t110 = ((x597-x598)>(x599-x600));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x601 = 422208817;
	volatile int8_t x604 = 1;
	int32_t t111 = 3;

    t111 = ((x601-x602)>(x603-x604));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x605 = UINT64_MAX;
	int16_t x606 = -66;
	volatile int32_t x607 = -1;
	volatile int32_t t112 = 119155;

    t112 = ((x605-x606)>(x607-x608));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x609 = 46U;
	uint64_t x610 = UINT64_MAX;
	uint64_t x611 = 228175LLU;
	int16_t x612 = -10139;
	static volatile int32_t t113 = -9694402;

    t113 = ((x609-x610)>(x611-x612));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    

    t114 = ((x613-x614)>(x615-x616));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x617 = -900;
	int16_t x618 = INT16_MIN;
	uint8_t x619 = 2U;
	volatile int8_t x620 = -1;
	volatile int32_t t115 = 50;

    t115 = ((x617-x618)>(x619-x620));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x621 = 109U;
	int32_t x623 = 6356711;
	volatile int32_t x624 = INT32_MAX;
	static volatile int32_t t116 = 667147;

    t116 = ((x621-x622)>(x623-x624));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x629 = -456770894846LL;
	volatile int16_t x631 = -23;
	static int8_t x632 = INT8_MAX;
	int32_t t117 = -525;

    t117 = ((x629-x630)>(x631-x632));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x635 = 10U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t118 = 630;

    t118 = ((x633-x634)>(x635-x636));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x645 = INT8_MIN;
	int8_t x647 = 0;
	int16_t x648 = 1;
	int32_t t119 = 605792;

    t119 = ((x645-x646)>(x647-x648));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x653 = -365662683876900181LL;
	int32_t x654 = -76295790;
	uint16_t x655 = UINT16_MAX;
	uint16_t x656 = 7257U;
	volatile int32_t t120 = 1;

    t120 = ((x653-x654)>(x655-x656));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x657 = 175232581LLU;
	int32_t x658 = -1;
	volatile int64_t x659 = -1LL;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t121 = -6955021;

    t121 = ((x657-x658)>(x659-x660));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x662 = INT8_MAX;
	uint32_t x663 = 209U;
	uint16_t x664 = UINT16_MAX;
	int32_t t122 = -456447;

    t122 = ((x661-x662)>(x663-x664));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x666 = INT8_MIN;
	int16_t x667 = INT16_MAX;
	static volatile int8_t x668 = INT8_MAX;
	static int32_t t123 = 80;

    t123 = ((x665-x666)>(x667-x668));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x669 = 49639975LLU;
	volatile uint8_t x670 = 47U;
	int64_t x671 = -111099524392724LL;
	volatile int32_t t124 = -1;

    t124 = ((x669-x670)>(x671-x672));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x673 = -1013482060306921LL;
	int16_t x674 = INT16_MAX;
	static int8_t x675 = INT8_MAX;
	int64_t x676 = 279945224413357LL;
	int32_t t125 = -3147;

    t125 = ((x673-x674)>(x675-x676));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x677 = INT32_MAX;
	volatile int16_t x679 = INT16_MIN;
	volatile int8_t x680 = INT8_MIN;
	static int32_t t126 = -8028;

    t126 = ((x677-x678)>(x679-x680));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x681 = 149LLU;
	uint8_t x682 = 0U;
	static uint32_t x683 = UINT32_MAX;
	int16_t x684 = 1534;
	int32_t t127 = 44439;

    t127 = ((x681-x682)>(x683-x684));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x689 = 3U;
	uint16_t x691 = 31518U;
	static volatile int32_t t128 = -19209;

    t128 = ((x689-x690)>(x691-x692));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x694 = UINT8_MAX;
	int64_t x695 = INT64_MAX;
	static int8_t x696 = INT8_MAX;
	volatile int32_t t129 = 13570;

    t129 = ((x693-x694)>(x695-x696));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x705 = INT8_MAX;
	static int64_t x706 = -49791138LL;
	int8_t x707 = -1;
	static uint64_t x708 = 0LLU;
	static int32_t t130 = -23258;

    t130 = ((x705-x706)>(x707-x708));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x721 = INT16_MIN;
	uint64_t x723 = 160LLU;
	int64_t x724 = 1029462727598731LL;
	static int32_t t131 = -957705243;

    t131 = ((x721-x722)>(x723-x724));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x725 = 25596U;
	volatile uint32_t x727 = 13U;
	uint16_t x728 = 4U;
	volatile int32_t t132 = -130097752;

    t132 = ((x725-x726)>(x727-x728));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x730 = 1790027976114816LLU;
	int64_t x731 = -1LL;
	static uint16_t x732 = 812U;
	volatile int32_t t133 = -659;

    t133 = ((x729-x730)>(x731-x732));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x733 = 1;
	int8_t x734 = INT8_MIN;
	int32_t x736 = 6;
	int32_t t134 = -13238829;

    t134 = ((x733-x734)>(x735-x736));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x743 = -1;
	uint32_t x744 = UINT32_MAX;
	int32_t t135 = -366919;

    t135 = ((x741-x742)>(x743-x744));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x745 = -13665103LL;
	int32_t x747 = 0;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t136 = 83203266;

    t136 = ((x745-x746)>(x747-x748));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x753 = -1LL;
	int16_t x754 = 14961;
	volatile int32_t x756 = INT32_MAX;

    t137 = ((x753-x754)>(x755-x756));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x759 = 128232002376651132LLU;
	int64_t x760 = 521564053LL;
	static int32_t t138 = -625593;

    t138 = ((x757-x758)>(x759-x760));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x762 = 120U;
	uint8_t x764 = 56U;
	static volatile int32_t t139 = -435584382;

    t139 = ((x761-x762)>(x763-x764));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x767 = UINT64_MAX;
	static uint16_t x768 = 3U;
	int32_t t140 = -47;

    t140 = ((x765-x766)>(x767-x768));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x769 = 1331663225LLU;
	volatile int16_t x770 = INT16_MIN;
	uint32_t x771 = 821U;
	static uint16_t x772 = UINT16_MAX;

    t141 = ((x769-x770)>(x771-x772));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x773 = INT16_MIN;
	static volatile int64_t x774 = INT64_MIN;
	static int32_t x776 = 1;
	volatile int32_t t142 = -26377639;

    t142 = ((x773-x774)>(x775-x776));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x781 = INT16_MAX;
	volatile int16_t x782 = INT16_MAX;
	int8_t x783 = -1;
	int16_t x784 = -1;
	int32_t t143 = -14371;

    t143 = ((x781-x782)>(x783-x784));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x785 = INT8_MIN;
	static int32_t x788 = -5199380;

    t144 = ((x785-x786)>(x787-x788));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x790 = -740;
	static int8_t x791 = INT8_MIN;
	uint8_t x792 = 2U;

    t145 = ((x789-x790)>(x791-x792));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x797 = INT32_MAX;
	int64_t x798 = -1LL;
	int16_t x799 = -1;
	uint64_t x800 = 224143457814456959LLU;
	int32_t t146 = 7642;

    t146 = ((x797-x798)>(x799-x800));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x809 = INT8_MIN;
	uint8_t x810 = 11U;
	volatile int16_t x811 = INT16_MIN;
	static uint16_t x812 = 984U;
	static int32_t t147 = 27;

    t147 = ((x809-x810)>(x811-x812));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x814 = INT8_MIN;
	volatile int16_t x815 = -1;
	uint32_t x816 = UINT32_MAX;
	volatile int32_t t148 = -1;

    t148 = ((x813-x814)>(x815-x816));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x817 = INT8_MIN;
	uint8_t x818 = 54U;
	static volatile int8_t x819 = -49;
	volatile uint16_t x820 = 6U;
	int32_t t149 = -14;

    t149 = ((x817-x818)>(x819-x820));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x821 = 0U;
	int32_t x822 = -45;
	static int16_t x823 = -1;
	uint16_t x824 = 25078U;
	volatile int32_t t150 = 246493714;

    t150 = ((x821-x822)>(x823-x824));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x825 = 449335672007145LLU;
	static int32_t x826 = 251368;
	int8_t x828 = -30;

    t151 = ((x825-x826)>(x827-x828));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x829 = INT16_MAX;
	static volatile uint64_t x830 = 362900723021491LLU;
	int32_t x831 = 73320975;
	int8_t x832 = -2;
	int32_t t152 = 13882628;

    t152 = ((x829-x830)>(x831-x832));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x837 = INT16_MIN;
	int16_t x838 = INT16_MIN;
	static volatile uint32_t x839 = 571444U;
	uint64_t x840 = 52918763052LLU;
	int32_t t153 = -167360;

    t153 = ((x837-x838)>(x839-x840));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x845 = INT16_MAX;
	int32_t x846 = -11359470;
	uint64_t x847 = 71252LLU;
	uint64_t x848 = 7577469LLU;
	int32_t t154 = 131620;

    t154 = ((x845-x846)>(x847-x848));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x849 = INT64_MIN;
	static int16_t x850 = -1;
	int16_t x851 = INT16_MIN;
	int16_t x852 = -5635;
	volatile int32_t t155 = 3;

    t155 = ((x849-x850)>(x851-x852));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x853 = 809;
	int8_t x855 = INT8_MIN;
	static volatile int32_t t156 = -3956216;

    t156 = ((x853-x854)>(x855-x856));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x861 = INT8_MIN;
	int16_t x862 = -1;
	int32_t x863 = 32026;
	static int16_t x864 = -1;

    t157 = ((x861-x862)>(x863-x864));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x865 = -336LL;
	static uint16_t x866 = 6U;
	static int32_t x868 = -118691463;
	static int32_t t158 = -44509;

    t158 = ((x865-x866)>(x867-x868));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x870 = UINT8_MAX;
	static uint8_t x871 = 7U;

    t159 = ((x869-x870)>(x871-x872));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x873 = 21790667U;
	int8_t x874 = INT8_MIN;
	int64_t x875 = INT64_MIN;
	static int32_t x876 = INT32_MIN;
	static int32_t t160 = 24988500;

    t160 = ((x873-x874)>(x875-x876));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x877 = UINT8_MAX;
	int8_t x878 = INT8_MIN;
	volatile int16_t x879 = INT16_MIN;
	uint32_t x880 = 517509602U;
	volatile int32_t t161 = -87895;

    t161 = ((x877-x878)>(x879-x880));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x885 = 53377;
	int16_t x886 = INT16_MAX;
	int16_t x887 = 0;
	volatile int16_t x888 = 1185;
	volatile int32_t t162 = -448;

    t162 = ((x885-x886)>(x887-x888));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x889 = 1U;
	int32_t x890 = -1;
	volatile uint64_t x891 = UINT64_MAX;
	int8_t x892 = INT8_MAX;
	int32_t t163 = 154;

    t163 = ((x889-x890)>(x891-x892));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x893 = INT8_MAX;
	static uint16_t x894 = 2384U;
	int8_t x895 = 16;
	volatile int32_t t164 = -223;

    t164 = ((x893-x894)>(x895-x896));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x897 = 164U;
	uint16_t x898 = 922U;
	uint64_t x899 = UINT64_MAX;
	static volatile int32_t x900 = INT32_MIN;
	static volatile int32_t t165 = 254873020;

    t165 = ((x897-x898)>(x899-x900));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x905 = INT16_MIN;
	int8_t x906 = INT8_MIN;
	static int16_t x907 = INT16_MAX;
	int16_t x908 = -1415;
	volatile int32_t t166 = 140;

    t166 = ((x905-x906)>(x907-x908));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x913 = 11;
	int16_t x916 = -154;
	volatile int32_t t167 = -86368702;

    t167 = ((x913-x914)>(x915-x916));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x917 = 2;
	int32_t x918 = INT32_MAX;
	uint64_t x919 = 6864615455468241078LLU;
	uint16_t x920 = 898U;
	static volatile int32_t t168 = -14352390;

    t168 = ((x917-x918)>(x919-x920));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x925 = 10U;
	int16_t x927 = INT16_MAX;
	int16_t x928 = INT16_MAX;
	int32_t t169 = -46629;

    t169 = ((x925-x926)>(x927-x928));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x929 = INT16_MIN;
	int16_t x930 = INT16_MIN;
	volatile int16_t x932 = INT16_MAX;
	static int32_t t170 = -10;

    t170 = ((x929-x930)>(x931-x932));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x933 = 1U;
	uint8_t x935 = UINT8_MAX;
	uint16_t x936 = 19276U;
	volatile int32_t t171 = 6000621;

    t171 = ((x933-x934)>(x935-x936));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x945 = UINT8_MAX;
	int16_t x946 = INT16_MAX;
	static int32_t x947 = 0;
	uint64_t x948 = UINT64_MAX;
	volatile int32_t t172 = 101;

    t172 = ((x945-x946)>(x947-x948));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x954 = UINT64_MAX;
	volatile int16_t x955 = INT16_MIN;
	int8_t x956 = INT8_MAX;
	static int32_t t173 = -1;

    t173 = ((x953-x954)>(x955-x956));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x957 = UINT64_MAX;
	int8_t x958 = INT8_MIN;
	int16_t x959 = INT16_MIN;
	static volatile int16_t x960 = INT16_MAX;

    t174 = ((x957-x958)>(x959-x960));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x962 = -1;
	uint16_t x963 = UINT16_MAX;
	uint16_t x964 = UINT16_MAX;
	static int32_t t175 = -6;

    t175 = ((x961-x962)>(x963-x964));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x965 = INT8_MIN;
	static int32_t x966 = INT32_MIN;
	int64_t x967 = -1LL;
	int32_t t176 = 443072719;

    t176 = ((x965-x966)>(x967-x968));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x969 = INT8_MAX;
	int16_t x971 = INT16_MAX;
	uint64_t x972 = 104943743210LLU;
	volatile int32_t t177 = 321862927;

    t177 = ((x969-x970)>(x971-x972));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x973 = -1;
	uint16_t x974 = 1U;
	int8_t x975 = INT8_MIN;
	static volatile uint8_t x976 = 6U;

    t178 = ((x973-x974)>(x975-x976));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x977 = 1U;
	int16_t x978 = 10;
	int8_t x979 = -1;
	static int32_t t179 = -1781;

    t179 = ((x977-x978)>(x979-x980));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x981 = 203140812104LLU;
	static int64_t x982 = INT64_MIN;
	int64_t x984 = 720887351LL;
	int32_t t180 = -212788085;

    t180 = ((x981-x982)>(x983-x984));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x985 = -1LL;
	int16_t x986 = INT16_MIN;
	static int64_t x987 = INT64_MAX;
	static volatile uint64_t x988 = 77589044263LLU;

    t181 = ((x985-x986)>(x987-x988));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x991 = 379031505U;
	static int64_t x992 = 55358254LL;
	int32_t t182 = 23;

    t182 = ((x989-x990)>(x991-x992));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x993 = INT64_MIN;
	int32_t x994 = INT32_MIN;
	volatile uint8_t x995 = 5U;
	volatile int32_t t183 = -1582;

    t183 = ((x993-x994)>(x995-x996));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1001 = INT8_MIN;
	int16_t x1002 = INT16_MAX;
	volatile int16_t x1004 = -1;
	int32_t t184 = 4997678;

    t184 = ((x1001-x1002)>(x1003-x1004));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1007 = INT16_MIN;
	uint64_t x1008 = 10614169581832LLU;
	int32_t t185 = -18417;

    t185 = ((x1005-x1006)>(x1007-x1008));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1009 = -1;
	int32_t x1010 = INT32_MIN;
	volatile uint16_t x1011 = 199U;
	static int32_t t186 = 52811;

    t186 = ((x1009-x1010)>(x1011-x1012));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1017 = -1LL;
	uint16_t x1018 = 116U;
	static volatile int32_t x1019 = INT32_MAX;
	int32_t x1020 = INT32_MAX;

    t187 = ((x1017-x1018)>(x1019-x1020));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1021 = -1721916309661718570LL;
	static int32_t x1022 = INT32_MIN;
	int32_t x1023 = 23295;
	static int8_t x1024 = 1;
	int32_t t188 = 61020;

    t188 = ((x1021-x1022)>(x1023-x1024));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1025 = -1;
	int16_t x1027 = -38;
	int64_t x1028 = INT64_MIN;
	static volatile int32_t t189 = -8;

    t189 = ((x1025-x1026)>(x1027-x1028));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1041 = INT8_MIN;
	int8_t x1042 = 18;
	static volatile int8_t x1043 = INT8_MIN;
	int16_t x1044 = INT16_MIN;
	int32_t t190 = -326;

    t190 = ((x1041-x1042)>(x1043-x1044));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x1045 = UINT32_MAX;
	uint8_t x1046 = 87U;
	static uint16_t x1047 = 3987U;
	uint32_t x1048 = 3695U;
	int32_t t191 = -7661026;

    t191 = ((x1045-x1046)>(x1047-x1048));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1049 = UINT16_MAX;
	int8_t x1050 = -7;
	uint64_t x1051 = UINT64_MAX;
	volatile int32_t x1052 = INT32_MIN;
	volatile int32_t t192 = -9;

    t192 = ((x1049-x1050)>(x1051-x1052));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1057 = UINT16_MAX;
	volatile int16_t x1059 = INT16_MAX;
	volatile int64_t x1060 = -1LL;
	static volatile int32_t t193 = 1;

    t193 = ((x1057-x1058)>(x1059-x1060));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1061 = 7U;
	int8_t x1062 = INT8_MIN;
	volatile int64_t x1063 = 314848LL;
	int64_t x1064 = INT64_MAX;
	volatile int32_t t194 = 0;

    t194 = ((x1061-x1062)>(x1063-x1064));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x1069 = INT8_MAX;
	uint32_t x1070 = 310U;
	volatile int64_t x1071 = 5LL;
	int16_t x1072 = INT16_MIN;
	int32_t t195 = -14638;

    t195 = ((x1069-x1070)>(x1071-x1072));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1077 = INT8_MIN;
	int32_t x1078 = -1;
	int32_t x1079 = -11;
	static int32_t t196 = -184570719;

    t196 = ((x1077-x1078)>(x1079-x1080));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1082 = 937;
	uint64_t x1083 = UINT64_MAX;
	int32_t x1084 = INT32_MIN;
	static volatile int32_t t197 = 10884;

    t197 = ((x1081-x1082)>(x1083-x1084));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1085 = INT32_MIN;
	int64_t x1086 = -112488002388475LL;
	int32_t t198 = 722530;

    t198 = ((x1085-x1086)>(x1087-x1088));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1089 = -200858079283343980LL;
	uint16_t x1090 = UINT16_MAX;
	int64_t x1091 = -1LL;
	volatile uint64_t x1092 = 785349813535073LLU;
	static int32_t t199 = 10;

    t199 = ((x1089-x1090)>(x1091-x1092));

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

