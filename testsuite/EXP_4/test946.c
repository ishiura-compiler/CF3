
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

static uint64_t x1 = UINT64_MAX;
volatile uint16_t x2 = 2U;
static volatile uint8_t x5 = 11U;
static uint16_t x7 = UINT16_MAX;
static int32_t x8 = INT32_MAX;
uint32_t x11 = UINT32_MAX;
static int64_t x28 = -1LL;
int64_t x57 = INT64_MAX;
int64_t x58 = -31LL;
static int8_t x59 = -33;
static volatile uint16_t x60 = UINT16_MAX;
uint32_t x67 = 8022954U;
volatile uint32_t x69 = 28396U;
int64_t x70 = INT64_MIN;
int32_t x73 = -17;
volatile int32_t x82 = 4178;
volatile int32_t x88 = INT32_MIN;
static int8_t x91 = 21;
int32_t x98 = INT32_MAX;
uint16_t x102 = UINT16_MAX;
volatile int16_t x104 = -13374;
volatile int32_t t23 = -151083615;
volatile int64_t x106 = 602241808LL;
int32_t x108 = 5;
static int8_t x111 = -36;
int64_t x118 = -1LL;
int32_t t28 = 219;
volatile uint32_t x132 = UINT32_MAX;
static int32_t t30 = 6;
int32_t x139 = INT32_MIN;
static uint32_t x143 = 896U;
int64_t x147 = INT64_MIN;
int64_t x153 = INT64_MAX;
int32_t x156 = INT32_MIN;
int32_t x157 = 108048;
uint64_t x162 = 348LLU;
static int8_t x165 = 3;
uint8_t x169 = 55U;
static uint64_t x188 = 836140098LLU;
uint32_t x192 = UINT32_MAX;
int32_t t46 = 1018510149;
int32_t x202 = -1;
int32_t x207 = INT32_MIN;
uint32_t x208 = 50408658U;
volatile uint16_t x209 = 29099U;
int8_t x216 = INT8_MIN;
static volatile uint8_t x220 = 75U;
int64_t x221 = 3917734244802802157LL;
volatile int32_t t52 = -54520;
int8_t x235 = INT8_MIN;
int32_t t55 = -583487671;
int64_t x246 = INT64_MIN;
uint32_t x253 = UINT32_MAX;
int32_t t60 = 1683;
int16_t x266 = 0;
volatile int32_t t63 = 279642055;
int32_t x272 = 4;
int64_t x278 = INT64_MAX;
volatile uint16_t x280 = UINT16_MAX;
static int64_t x285 = -1LL;
int8_t x291 = 8;
static int16_t x293 = -1149;
volatile int32_t t70 = -1;
uint8_t x304 = UINT8_MAX;
static volatile int64_t x312 = -1LL;
volatile int32_t t76 = 6915704;
volatile int32_t x322 = INT32_MAX;
int32_t t77 = 17;
int16_t x327 = INT16_MIN;
volatile int32_t t78 = 1;
volatile int32_t x329 = INT32_MIN;
static int32_t t79 = -429061;
int64_t x337 = -4137534LL;
int16_t x344 = 10711;
int8_t x346 = 4;
static int16_t x347 = -1;
uint16_t x348 = 6U;
volatile uint16_t x353 = 476U;
volatile int64_t x355 = INT64_MIN;
static uint64_t x361 = 25561244404821LLU;
int32_t x365 = -1;
int64_t x368 = INT64_MIN;
volatile int16_t x371 = 84;
int8_t x378 = 1;
static uint64_t x381 = 82666987743387110LLU;
int8_t x389 = INT8_MIN;
int32_t t92 = -104493693;
uint32_t x397 = 973U;
static volatile uint32_t x399 = 2445034U;
volatile int32_t t94 = 0;
int64_t x408 = INT64_MIN;
volatile int32_t t96 = 115975511;
uint32_t x409 = 17730U;
static volatile int32_t t97 = -3459460;
int32_t x415 = -1;
int32_t t98 = 735717149;
volatile uint32_t x417 = 19574U;
volatile int32_t x419 = INT32_MAX;
static uint32_t x420 = 23178818U;
static int16_t x440 = INT16_MIN;
int16_t x442 = -1;
static uint64_t x455 = 4088838507043575182LLU;
int8_t x458 = -1;
uint32_t x459 = 5U;
int8_t x467 = 39;
uint8_t x476 = UINT8_MAX;
int8_t x500 = INT8_MIN;
int32_t t118 = 1270193;
int8_t x503 = -7;
uint16_t x504 = 1U;
int64_t x510 = -2660276LL;
int64_t x511 = -494139270207LL;
int8_t x518 = 0;
int64_t x523 = INT64_MIN;
static int16_t x526 = -340;
int32_t x535 = -620576;
volatile int32_t t128 = 65577670;
volatile int32_t t132 = 283398;
volatile int64_t x569 = -1LL;
int16_t x571 = -6;
static volatile int32_t t136 = 422793;
int8_t x574 = INT8_MIN;
int32_t x579 = INT32_MAX;
static uint64_t x580 = 1037010501022054LLU;
int16_t x583 = INT16_MIN;
static volatile int16_t x584 = 8930;
int16_t x590 = -3;
volatile uint8_t x591 = UINT8_MAX;
uint64_t x593 = UINT64_MAX;
int32_t t142 = -11;
volatile int32_t t146 = 20989;
int8_t x614 = 1;
uint32_t x621 = 172337313U;
uint64_t x627 = 1199314246LLU;
static uint32_t x634 = UINT32_MAX;
uint32_t x641 = 11683468U;
static volatile int8_t x642 = -1;
static volatile int64_t x644 = 252170834923LL;
volatile int64_t x645 = -27512076561614LL;
int16_t x655 = INT16_MIN;
int16_t x656 = 163;
int16_t x657 = -3304;
int8_t x659 = INT8_MIN;
static volatile uint16_t x660 = UINT16_MAX;
static volatile int32_t t158 = -20443;
uint32_t x669 = UINT32_MAX;
static int8_t x670 = INT8_MAX;
static int32_t x676 = 1297;
volatile int32_t t162 = 3163993;
volatile int32_t t163 = 22134315;
int32_t t164 = 43721;
uint16_t x688 = 1804U;
volatile int32_t x689 = INT32_MIN;
volatile int32_t t167 = 2495959;
volatile int32_t t168 = -57;
volatile uint8_t x703 = UINT8_MAX;
int32_t t169 = -9842637;
int8_t x707 = -16;
static volatile int16_t x714 = 1;
int16_t x715 = INT16_MIN;
uint8_t x716 = UINT8_MAX;
volatile int64_t x717 = INT64_MIN;
int32_t x724 = 4774;
int16_t x726 = 134;
static volatile uint32_t x741 = 31U;
volatile int8_t x746 = INT8_MAX;
uint8_t x751 = 0U;
int16_t x758 = INT16_MIN;
uint16_t x760 = UINT16_MAX;
int32_t x763 = -1;
static int32_t x764 = INT32_MAX;
volatile int32_t t184 = 10772;
int16_t x766 = INT16_MIN;
int32_t t185 = -172219;
static int32_t x777 = -1;
int16_t x786 = INT16_MAX;
int32_t x800 = INT32_MIN;
int32_t x802 = -1;
volatile int64_t x806 = INT64_MIN;
volatile uint32_t x813 = 1U;
uint64_t x817 = 6070780551LLU;
int16_t x818 = 480;
volatile int32_t x820 = 2079099;
static int64_t x822 = -1LL;


void f0(void) {
    	int32_t x3 = INT32_MAX;
	static int64_t x4 = INT64_MAX;
	int32_t t0 = -4625;

    t0 = (x1==(x2&(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	static volatile int32_t t1 = -11;

    t1 = (x5==(x6&(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 7U;
	uint64_t x12 = 246727791818616LLU;
	volatile int32_t t2 = 3241;

    t2 = (x9==(x10&(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	uint8_t x14 = 0U;
	uint8_t x15 = 12U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 6011;

    t3 = (x13==(x14&(x15%x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 0U;
	int8_t x18 = -1;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 4;

    t4 = (x17==(x18&(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	int16_t x23 = -1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -21391;

    t5 = (x21==(x22&(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	static int32_t x26 = -1;
	int8_t x27 = -1;
	int32_t t6 = 4008978;

    t6 = (x25==(x26&(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -13;
	volatile int8_t x30 = INT8_MAX;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 1;

    t7 = (x29==(x30&(x31%x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int32_t x34 = INT32_MIN;
	volatile int64_t x35 = INT64_MIN;
	volatile uint32_t x36 = 19452248U;
	int32_t t8 = 112639;

    t8 = (x33==(x34&(x35%x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = INT8_MAX;
	static uint8_t x42 = 1U;
	volatile uint64_t x43 = 730687LLU;
	int8_t x44 = -1;
	int32_t t9 = -6;

    t9 = (x41==(x42&(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	uint16_t x46 = 38U;
	uint8_t x47 = UINT8_MAX;
	int8_t x48 = -1;
	int32_t t10 = -445;

    t10 = (x45==(x46&(x47%x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x49 = -1;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t11 = -719980;

    t11 = (x49==(x50&(x51%x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = -10982107692LL;
	volatile int8_t x54 = -7;
	int16_t x55 = -12285;
	int64_t x56 = INT64_MIN;
	volatile int32_t t12 = 85110;

    t12 = (x53==(x54&(x55%x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t t13 = -11224;

    t13 = (x57==(x58&(x59%x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	int32_t x62 = INT32_MAX;
	volatile uint8_t x63 = 6U;
	volatile int8_t x64 = -1;
	static int32_t t14 = -1;

    t14 = (x61==(x62&(x63%x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = 231226394;
	volatile int64_t x66 = INT64_MIN;
	static uint16_t x68 = 1U;
	int32_t t15 = -628651038;

    t15 = (x65==(x66&(x67%x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x71 = 31254;
	int32_t x72 = -1;
	int32_t t16 = -67;

    t16 = (x69==(x70&(x71%x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x74 = UINT32_MAX;
	static int8_t x75 = 10;
	int16_t x76 = INT16_MIN;
	int32_t t17 = -577890;

    t17 = (x73==(x74&(x75%x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = INT8_MIN;
	volatile int16_t x83 = -1;
	int16_t x84 = 1;
	volatile int32_t t18 = 974428922;

    t18 = (x81==(x82&(x83%x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x85 = -13935;
	int64_t x86 = INT64_MAX;
	uint8_t x87 = 5U;
	static volatile int32_t t19 = 765;

    t19 = (x85==(x86&(x87%x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x89 = 1U;
	volatile int16_t x90 = INT16_MIN;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 47;

    t20 = (x89==(x90&(x91%x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = INT8_MIN;
	int16_t x94 = 301;
	int16_t x95 = INT16_MAX;
	int32_t x96 = -1;
	static volatile int32_t t21 = 131;

    t21 = (x93==(x94&(x95%x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MIN;
	uint32_t x99 = 5511015U;
	int8_t x100 = 4;
	volatile int32_t t22 = -1;

    t22 = (x97==(x98&(x99%x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x101 = 1U;
	uint64_t x103 = UINT64_MAX;

    t23 = (x101==(x102&(x103%x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x105 = INT16_MIN;
	volatile int8_t x107 = -20;
	static volatile int32_t t24 = -785565887;

    t24 = (x105==(x106&(x107%x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = -31;
	int16_t x110 = -1;
	int64_t x112 = INT64_MIN;
	int32_t t25 = -1;

    t25 = (x109==(x110&(x111%x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x113 = 1LLU;
	uint64_t x114 = UINT64_MAX;
	static uint64_t x115 = 521510157452284LLU;
	static uint32_t x116 = 16204U;
	volatile int32_t t26 = 117;

    t26 = (x113==(x114&(x115%x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x117 = INT32_MIN;
	static uint8_t x119 = 107U;
	volatile int16_t x120 = INT16_MIN;
	int32_t t27 = 157419;

    t27 = (x117==(x118&(x119%x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MIN;
	static int64_t x122 = INT64_MAX;
	int32_t x123 = 322425425;
	int8_t x124 = INT8_MIN;

    t28 = (x121==(x122&(x123%x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 13U;
	static int8_t x126 = INT8_MIN;
	static uint64_t x127 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t29 = 6781;

    t29 = (x125==(x126&(x127%x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = 25899967LL;
	int64_t x130 = -1LL;
	static volatile uint32_t x131 = 2U;

    t30 = (x129==(x130&(x131%x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = INT8_MIN;
	int8_t x134 = 31;
	volatile int32_t x135 = INT32_MIN;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t31 = 58843;

    t31 = (x133==(x134&(x135%x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = -1;
	int64_t x138 = 1385290LL;
	static int16_t x140 = -1;
	static int32_t t32 = -414;

    t32 = (x137==(x138&(x139%x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x141 = 31241U;
	int64_t x142 = 5LL;
	int8_t x144 = -1;
	volatile int32_t t33 = 64;

    t33 = (x141==(x142&(x143%x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x145 = INT64_MAX;
	int8_t x146 = -1;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t34 = -5;

    t34 = (x145==(x146&(x147%x148)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = -2;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MAX;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = 871627;

    t35 = (x149==(x150&(x151%x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = 3;
	uint32_t x155 = 76U;
	int32_t t36 = 150577867;

    t36 = (x153==(x154&(x155%x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x158 = -1;
	int64_t x159 = INT64_MAX;
	int64_t x160 = INT64_MIN;
	int32_t t37 = 22847685;

    t37 = (x157==(x158&(x159%x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = INT8_MIN;
	int32_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	static int32_t t38 = 5;

    t38 = (x161==(x162&(x163%x164)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x166 = INT16_MIN;
	static uint64_t x167 = 1769095725469LLU;
	int64_t x168 = 3350844726529051LL;
	static volatile int32_t t39 = 21302956;

    t39 = (x165==(x166&(x167%x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	static uint16_t x172 = 7933U;
	volatile int32_t t40 = 4213975;

    t40 = (x169==(x170&(x171%x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -1;
	volatile uint64_t x174 = 42LLU;
	volatile uint16_t x175 = 10756U;
	static int32_t x176 = -1;
	static volatile int32_t t41 = 145511558;

    t41 = (x173==(x174&(x175%x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = 224U;
	static int32_t x179 = INT32_MIN;
	volatile uint64_t x180 = 18043764720LLU;
	volatile int32_t t42 = 34286841;

    t42 = (x177==(x178&(x179%x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x181 = INT8_MIN;
	static uint8_t x182 = UINT8_MAX;
	static uint16_t x183 = UINT16_MAX;
	int64_t x184 = 13645LL;
	volatile int32_t t43 = 9749;

    t43 = (x181==(x182&(x183%x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	int32_t t44 = 27;

    t44 = (x185==(x186&(x187%x188)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x189 = INT32_MAX;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = 1740;
	volatile int32_t t45 = -1;

    t45 = (x189==(x190&(x191%x192)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MIN;
	static volatile uint32_t x194 = 61U;
	uint16_t x195 = 188U;
	volatile int64_t x196 = INT64_MIN;

    t46 = (x193==(x194&(x195%x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = 47;
	int8_t x203 = INT8_MIN;
	volatile uint8_t x204 = 3U;
	volatile int32_t t47 = 3973253;

    t47 = (x201==(x202&(x203%x204)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x205 = 34386LLU;
	int8_t x206 = -40;
	volatile int32_t t48 = 15;

    t48 = (x205==(x206&(x207%x208)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x210 = INT16_MIN;
	volatile int16_t x211 = -3226;
	int16_t x212 = 91;
	static volatile int32_t t49 = 3;

    t49 = (x209==(x210&(x211%x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MIN;
	int16_t x215 = -1;
	volatile int32_t t50 = 66509000;

    t50 = (x213==(x214&(x215%x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x217 = 36;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;
	int32_t t51 = 106598;

    t51 = (x217==(x218&(x219%x220)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = -1;
	uint8_t x223 = 1U;
	uint32_t x224 = UINT32_MAX;

    t52 = (x221==(x222&(x223%x224)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x225 = 4601U;
	int32_t x226 = 13;
	volatile uint8_t x227 = UINT8_MAX;
	uint8_t x228 = 2U;
	volatile int32_t t53 = 4613;

    t53 = (x225==(x226&(x227%x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x229 = 7958707U;
	uint32_t x230 = 821331854U;
	uint8_t x231 = UINT8_MAX;
	int32_t x232 = -56;
	volatile int32_t t54 = 2662888;

    t54 = (x229==(x230&(x231%x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x233 = 4693U;
	int32_t x234 = INT32_MAX;
	int16_t x236 = -1;

    t55 = (x233==(x234&(x235%x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	uint8_t x238 = UINT8_MAX;
	static volatile int32_t x239 = -1;
	int32_t x240 = -1;
	int32_t t56 = -36324;

    t56 = (x237==(x238&(x239%x240)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x241 = -1;
	static int32_t x242 = -1;
	uint16_t x243 = 0U;
	volatile int32_t x244 = -1;
	static int32_t t57 = 59411568;

    t57 = (x241==(x242&(x243%x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x245 = 6450LLU;
	int8_t x247 = -1;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t58 = -30;

    t58 = (x245==(x246&(x247%x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = UINT64_MAX;
	volatile int32_t x250 = -1;
	int16_t x251 = -1;
	int64_t x252 = INT64_MAX;
	volatile int32_t t59 = 20222810;

    t59 = (x249==(x250&(x251%x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x254 = 2;
	volatile int16_t x255 = -1;
	static uint32_t x256 = UINT32_MAX;

    t60 = (x253==(x254&(x255%x256)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x257 = 51U;
	uint8_t x258 = 2U;
	volatile int16_t x259 = INT16_MIN;
	volatile int16_t x260 = -171;
	int32_t t61 = 20397;

    t61 = (x257==(x258&(x259%x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = 0;
	uint32_t x262 = 1084U;
	uint16_t x263 = 2811U;
	int16_t x264 = INT16_MAX;
	volatile int32_t t62 = 33300365;

    t62 = (x261==(x262&(x263%x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x265 = -1;
	int16_t x267 = -1;
	uint8_t x268 = 1U;

    t63 = (x265==(x266&(x267%x268)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = INT16_MIN;
	int64_t x270 = -974466419450126615LL;
	static int64_t x271 = -1LL;
	int32_t t64 = -433294;

    t64 = (x269==(x270&(x271%x272)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 19U;
	int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MAX;
	int32_t x276 = 62961;
	volatile int32_t t65 = -36886;

    t65 = (x273==(x274&(x275%x276)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x277 = UINT16_MAX;
	int16_t x279 = INT16_MIN;
	int32_t t66 = 1;

    t66 = (x277==(x278&(x279%x280)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MIN;
	volatile int64_t x283 = -1LL;
	static int32_t x284 = -30952522;
	int32_t t67 = -2;

    t67 = (x281==(x282&(x283%x284)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x286 = INT64_MIN;
	volatile int8_t x287 = -1;
	int64_t x288 = INT64_MAX;
	int32_t t68 = 29;

    t68 = (x285==(x286&(x287%x288)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x289 = UINT64_MAX;
	int8_t x290 = 2;
	uint8_t x292 = 71U;
	int32_t t69 = -23842;

    t69 = (x289==(x290&(x291%x292)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x294 = INT32_MIN;
	volatile int8_t x295 = -1;
	uint64_t x296 = UINT64_MAX;

    t70 = (x293==(x294&(x295%x296)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x297 = -573319918LL;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = 6495U;
	static uint64_t x300 = 1LLU;
	int32_t t71 = -1144386;

    t71 = (x297==(x298&(x299%x300)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x301 = 3956474885LL;
	int8_t x302 = INT8_MIN;
	int16_t x303 = 3;
	volatile int32_t t72 = -8355618;

    t72 = (x301==(x302&(x303%x304)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x305 = 2U;
	int32_t x306 = 20219209;
	int8_t x307 = INT8_MAX;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -239;

    t73 = (x305==(x306&(x307%x308)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = INT64_MIN;
	int32_t x310 = 1;
	volatile uint32_t x311 = 7096U;
	volatile int32_t t74 = -205458887;

    t74 = (x309==(x310&(x311%x312)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x313 = -14;
	uint16_t x314 = 96U;
	uint64_t x315 = 66218334922480LLU;
	uint64_t x316 = UINT64_MAX;
	int32_t t75 = -300255467;

    t75 = (x313==(x314&(x315%x316)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = -997LL;
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = 88;
	static uint16_t x320 = UINT16_MAX;

    t76 = (x317==(x318&(x319%x320)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = -15204530939527015LL;
	uint8_t x323 = UINT8_MAX;
	volatile int64_t x324 = INT64_MAX;

    t77 = (x321==(x322&(x323%x324)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = UINT64_MAX;
	uint16_t x328 = 40U;

    t78 = (x325==(x326&(x327%x328)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x330 = -7816;
	static uint16_t x331 = UINT16_MAX;
	volatile int16_t x332 = INT16_MAX;

    t79 = (x329==(x330&(x331%x332)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x338 = -1;
	uint16_t x339 = 90U;
	int8_t x340 = -8;
	volatile int32_t t80 = -29109;

    t80 = (x337==(x338&(x339%x340)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x341 = 3505U;
	int64_t x342 = INT64_MAX;
	static int16_t x343 = 10425;
	static volatile int32_t t81 = -428723;

    t81 = (x341==(x342&(x343%x344)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = -10239;
	int32_t t82 = 349;

    t82 = (x345==(x346&(x347%x348)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = INT64_MAX;
	static int64_t x350 = INT64_MAX;
	volatile int32_t x351 = -1;
	int32_t x352 = -1;
	volatile int32_t t83 = 75639;

    t83 = (x349==(x350&(x351%x352)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x354 = UINT16_MAX;
	int16_t x356 = -1;
	volatile int32_t t84 = -500161946;

    t84 = (x353==(x354&(x355%x356)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x362 = 63;
	int16_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	static int32_t t85 = -931;

    t85 = (x361==(x362&(x363%x364)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x366 = INT32_MAX;
	static int32_t x367 = 1004862;
	int32_t t86 = 0;

    t86 = (x365==(x366&(x367%x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x369 = 47;
	int8_t x370 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t87 = 30;

    t87 = (x369==(x370&(x371%x372)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = INT8_MAX;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MIN;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t88 = -987;

    t88 = (x373==(x374&(x375%x376)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x377 = INT64_MAX;
	int32_t x379 = -1;
	uint8_t x380 = 2U;
	static volatile int32_t t89 = -105176;

    t89 = (x377==(x378&(x379%x380)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x382 = -1LL;
	static volatile int16_t x383 = 0;
	volatile uint8_t x384 = 1U;
	volatile int32_t t90 = 186;

    t90 = (x381==(x382&(x383%x384)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x385 = 2114551;
	static volatile int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 4600370LLU;
	static int32_t t91 = 55748633;

    t91 = (x385==(x386&(x387%x388)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x390 = 1811381931518LLU;
	volatile int8_t x391 = -1;
	int8_t x392 = INT8_MIN;

    t92 = (x389==(x390&(x391%x392)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = INT8_MIN;
	int16_t x394 = -1;
	int8_t x395 = -1;
	int32_t x396 = INT32_MIN;
	int32_t t93 = 14;

    t93 = (x393==(x394&(x395%x396)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x398 = -1LL;
	volatile uint32_t x400 = UINT32_MAX;

    t94 = (x397==(x398&(x399%x400)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = 3LL;
	volatile uint8_t x403 = 32U;
	int32_t x404 = -1;
	int32_t t95 = -293;

    t95 = (x401==(x402&(x403%x404)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x405 = 4593U;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = 981779574LL;

    t96 = (x405==(x406&(x407%x408)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x410 = -1;
	uint64_t x411 = 0LLU;
	static int32_t x412 = -1;

    t97 = (x409==(x410&(x411%x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x413 = INT8_MIN;
	volatile int16_t x414 = INT16_MIN;
	uint16_t x416 = 8U;

    t98 = (x413==(x414&(x415%x416)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x418 = INT64_MIN;
	volatile int32_t t99 = -151;

    t99 = (x417==(x418&(x419%x420)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x421 = 2991;
	static int64_t x422 = INT64_MAX;
	int8_t x423 = 0;
	int8_t x424 = INT8_MIN;
	volatile int32_t t100 = 1;

    t100 = (x421==(x422&(x423%x424)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x425 = -304LL;
	int16_t x426 = INT16_MIN;
	int32_t x427 = INT32_MIN;
	int64_t x428 = 2147LL;
	volatile int32_t t101 = -1;

    t101 = (x425==(x426&(x427%x428)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x429 = -1LL;
	static int16_t x430 = INT16_MAX;
	volatile int8_t x431 = 1;
	uint64_t x432 = 62707103410LLU;
	int32_t t102 = -5;

    t102 = (x429==(x430&(x431%x432)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = INT64_MAX;
	uint64_t x434 = 702771561754449120LLU;
	volatile int16_t x435 = INT16_MIN;
	int64_t x436 = 36463772685LL;
	int32_t t103 = 0;

    t103 = (x433==(x434&(x435%x436)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x437 = UINT8_MAX;
	int8_t x438 = INT8_MIN;
	uint64_t x439 = 1875634293LLU;
	int32_t t104 = 6062;

    t104 = (x437==(x438&(x439%x440)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = -1;
	volatile int8_t x443 = INT8_MIN;
	int16_t x444 = 1150;
	int32_t t105 = -33813343;

    t105 = (x441==(x442&(x443%x444)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x445 = -1;
	static uint16_t x446 = 18U;
	uint8_t x447 = 1U;
	int64_t x448 = -1LL;
	volatile int32_t t106 = 443860;

    t106 = (x445==(x446&(x447%x448)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x449 = 123U;
	int32_t x450 = -1;
	volatile int64_t x451 = -3761254580526LL;
	static int8_t x452 = 4;
	volatile int32_t t107 = -19461;

    t107 = (x449==(x450&(x451%x452)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = 0;
	volatile int8_t x454 = INT8_MAX;
	int32_t x456 = -1;
	static volatile int32_t t108 = 1;

    t108 = (x453==(x454&(x455%x456)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = 6;
	uint64_t x460 = 1887665974707378930LLU;
	static int32_t t109 = -75021;

    t109 = (x457==(x458&(x459%x460)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = 44064LL;
	volatile uint64_t x462 = UINT64_MAX;
	static int64_t x463 = INT64_MIN;
	volatile int8_t x464 = 13;
	volatile int32_t t110 = 628;

    t110 = (x461==(x462&(x463%x464)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x465 = INT64_MIN;
	volatile int8_t x466 = INT8_MIN;
	uint8_t x468 = 8U;
	volatile int32_t t111 = 775645844;

    t111 = (x465==(x466&(x467%x468)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = -5;
	int8_t x470 = INT8_MIN;
	static int32_t x471 = -175;
	uint8_t x472 = 3U;
	static int32_t t112 = 4;

    t112 = (x469==(x470&(x471%x472)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x473 = -42;
	volatile uint16_t x474 = 12U;
	int32_t x475 = INT32_MAX;
	static int32_t t113 = 0;

    t113 = (x473==(x474&(x475%x476)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x477 = UINT64_MAX;
	uint8_t x478 = UINT8_MAX;
	static volatile uint32_t x479 = UINT32_MAX;
	volatile uint16_t x480 = 4035U;
	volatile int32_t t114 = -500;

    t114 = (x477==(x478&(x479%x480)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	volatile int64_t x488 = INT64_MIN;
	static volatile int32_t t115 = 203614;

    t115 = (x485==(x486&(x487%x488)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x489 = INT64_MAX;
	int32_t x490 = INT32_MIN;
	static uint32_t x491 = 416598046U;
	int64_t x492 = -9LL;
	volatile int32_t t116 = -2727;

    t116 = (x489==(x490&(x491%x492)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x493 = -1;
	static uint8_t x494 = UINT8_MAX;
	int32_t x495 = -733;
	volatile int32_t x496 = -1;
	volatile int32_t t117 = 1;

    t117 = (x493==(x494&(x495%x496)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = 1LL;
	volatile int32_t x498 = INT32_MIN;
	int16_t x499 = INT16_MAX;

    t118 = (x497==(x498&(x499%x500)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x501 = -1;
	int32_t x502 = 12952;
	volatile int32_t t119 = -53;

    t119 = (x501==(x502&(x503%x504)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x505 = INT8_MIN;
	volatile int8_t x506 = -1;
	volatile int8_t x507 = INT8_MIN;
	uint16_t x508 = 42U;
	int32_t t120 = 67879;

    t120 = (x505==(x506&(x507%x508)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x509 = 2U;
	uint64_t x512 = 19140868431886LLU;
	static int32_t t121 = 362;

    t121 = (x509==(x510&(x511%x512)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x513 = UINT8_MAX;
	int8_t x514 = INT8_MAX;
	uint16_t x515 = 154U;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t122 = -410;

    t122 = (x513==(x514&(x515%x516)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x517 = INT16_MIN;
	volatile int8_t x519 = -1;
	int8_t x520 = INT8_MAX;
	int32_t t123 = 1579625;

    t123 = (x517==(x518&(x519%x520)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x521 = -554;
	static volatile int64_t x522 = INT64_MIN;
	int64_t x524 = INT64_MAX;
	int32_t t124 = 460824;

    t124 = (x521==(x522&(x523%x524)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x525 = 23299;
	static uint32_t x527 = 59634U;
	static uint32_t x528 = 1288818U;
	int32_t t125 = -6;

    t125 = (x525==(x526&(x527%x528)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x529 = UINT32_MAX;
	volatile int64_t x530 = INT64_MIN;
	static uint16_t x531 = 9U;
	uint8_t x532 = 32U;
	volatile int32_t t126 = 2;

    t126 = (x529==(x530&(x531%x532)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = INT32_MIN;
	static int8_t x534 = INT8_MAX;
	static int16_t x536 = INT16_MIN;
	int32_t t127 = 6;

    t127 = (x533==(x534&(x535%x536)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MAX;
	static int64_t x538 = 1901877169833836LL;
	uint16_t x539 = 5711U;
	int16_t x540 = 37;

    t128 = (x537==(x538&(x539%x540)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x541 = INT64_MAX;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = 0U;
	int32_t x544 = INT32_MIN;
	volatile int32_t t129 = -2235;

    t129 = (x541==(x542&(x543%x544)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = INT32_MIN;
	uint16_t x546 = UINT16_MAX;
	uint32_t x547 = 41U;
	uint32_t x548 = 1032607964U;
	volatile int32_t t130 = 6878;

    t130 = (x545==(x546&(x547%x548)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x549 = INT16_MIN;
	static int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MAX;
	static int8_t x552 = INT8_MAX;
	volatile int32_t t131 = 8146;

    t131 = (x549==(x550&(x551%x552)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x553 = 1;
	static volatile uint32_t x554 = 487635625U;
	int8_t x555 = -1;
	int16_t x556 = INT16_MIN;

    t132 = (x553==(x554&(x555%x556)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = INT32_MAX;
	int64_t x558 = -2LL;
	static uint64_t x559 = UINT64_MAX;
	int64_t x560 = -3446506LL;
	volatile int32_t t133 = 707605425;

    t133 = (x557==(x558&(x559%x560)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = INT64_MIN;
	volatile int32_t x562 = -1;
	int8_t x563 = 10;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t134 = -22268038;

    t134 = (x561==(x562&(x563%x564)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x565 = 1;
	volatile uint32_t x566 = 11U;
	uint16_t x567 = 4024U;
	uint64_t x568 = 48LLU;
	static int32_t t135 = 1;

    t135 = (x565==(x566&(x567%x568)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x570 = -47;
	uint64_t x572 = 305751LLU;

    t136 = (x569==(x570&(x571%x572)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x573 = INT32_MAX;
	volatile int32_t x575 = INT32_MAX;
	uint32_t x576 = UINT32_MAX;
	volatile int32_t t137 = -8587;

    t137 = (x573==(x574&(x575%x576)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x577 = -905058986418LL;
	volatile int32_t x578 = INT32_MAX;
	volatile int32_t t138 = 98271;

    t138 = (x577==(x578&(x579%x580)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x581 = -110434;
	static int16_t x582 = INT16_MIN;
	int32_t t139 = 151;

    t139 = (x581==(x582&(x583%x584)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MIN;
	static int8_t x587 = -2;
	int64_t x588 = INT64_MAX;
	static volatile int32_t t140 = 7397062;

    t140 = (x585==(x586&(x587%x588)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = -1LL;
	uint8_t x592 = UINT8_MAX;
	static int32_t t141 = -5096895;

    t141 = (x589==(x590&(x591%x592)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x594 = INT8_MAX;
	int16_t x595 = INT16_MAX;
	uint16_t x596 = 6U;

    t142 = (x593==(x594&(x595%x596)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x597 = INT16_MAX;
	uint64_t x598 = 494LLU;
	int16_t x599 = INT16_MIN;
	int16_t x600 = INT16_MIN;
	int32_t t143 = -1;

    t143 = (x597==(x598&(x599%x600)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x601 = INT32_MIN;
	static int8_t x602 = INT8_MAX;
	static int64_t x603 = INT64_MIN;
	int8_t x604 = INT8_MIN;
	static volatile int32_t t144 = 1;

    t144 = (x601==(x602&(x603%x604)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x605 = 7344LLU;
	int32_t x606 = INT32_MIN;
	static volatile int8_t x607 = INT8_MIN;
	uint8_t x608 = 64U;
	volatile int32_t t145 = -2044845;

    t145 = (x605==(x606&(x607%x608)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x609 = INT16_MIN;
	volatile uint8_t x610 = 4U;
	static uint16_t x611 = 11861U;
	volatile int16_t x612 = INT16_MIN;

    t146 = (x609==(x610&(x611%x612)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x613 = 119U;
	uint16_t x615 = 1094U;
	uint32_t x616 = 1714248U;
	static volatile int32_t t147 = 331163688;

    t147 = (x613==(x614&(x615%x616)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x617 = 19LLU;
	int32_t x618 = INT32_MIN;
	uint16_t x619 = 1U;
	int8_t x620 = INT8_MAX;
	volatile int32_t t148 = -57731977;

    t148 = (x617==(x618&(x619%x620)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x622 = INT64_MIN;
	uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 2U;
	int32_t t149 = -398;

    t149 = (x621==(x622&(x623%x624)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x626 = -1;
	static volatile int32_t x628 = INT32_MIN;
	int32_t t150 = 0;

    t150 = (x625==(x626&(x627%x628)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x629 = INT32_MAX;
	int64_t x630 = -25052604LL;
	uint8_t x631 = UINT8_MAX;
	uint8_t x632 = 1U;
	volatile int32_t t151 = 462553;

    t151 = (x629==(x630&(x631%x632)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = -1;
	static volatile uint64_t x635 = 823218651874683582LLU;
	volatile int32_t x636 = 44953037;
	int32_t t152 = 1375323;

    t152 = (x633==(x634&(x635%x636)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x637 = INT64_MIN;
	static int16_t x638 = -1;
	uint64_t x639 = UINT64_MAX;
	static int8_t x640 = INT8_MIN;
	volatile int32_t t153 = 6;

    t153 = (x637==(x638&(x639%x640)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x643 = INT16_MAX;
	volatile int32_t t154 = 106310524;

    t154 = (x641==(x642&(x643%x644)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x646 = INT16_MIN;
	volatile uint32_t x647 = 13U;
	int16_t x648 = INT16_MIN;
	int32_t t155 = -20;

    t155 = (x645==(x646&(x647%x648)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x650 = -6888LL;
	volatile int64_t x651 = -1LL;
	volatile int64_t x652 = INT64_MIN;
	int32_t t156 = -385;

    t156 = (x649==(x650&(x651%x652)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x653 = INT64_MAX;
	int16_t x654 = INT16_MAX;
	int32_t t157 = -3139888;

    t157 = (x653==(x654&(x655%x656)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x658 = INT32_MIN;

    t158 = (x657==(x658&(x659%x660)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x661 = 388U;
	int16_t x662 = INT16_MIN;
	static uint8_t x663 = 4U;
	int8_t x664 = -3;
	volatile int32_t t159 = -1;

    t159 = (x661==(x662&(x663%x664)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x665 = INT8_MAX;
	uint8_t x666 = 14U;
	volatile int32_t x667 = -1;
	int16_t x668 = -13;
	volatile int32_t t160 = 227336947;

    t160 = (x665==(x666&(x667%x668)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x671 = -1;
	int8_t x672 = 49;
	int32_t t161 = 3643;

    t161 = (x669==(x670&(x671%x672)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x673 = 71U;
	int64_t x674 = 25LL;
	volatile int64_t x675 = -1LL;

    t162 = (x673==(x674&(x675%x676)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x677 = 2113401715759LLU;
	int32_t x678 = INT32_MAX;
	static uint64_t x679 = UINT64_MAX;
	static uint32_t x680 = 29U;

    t163 = (x677==(x678&(x679%x680)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = UINT16_MAX;
	volatile uint32_t x683 = UINT32_MAX;
	int64_t x684 = -1LL;

    t164 = (x681==(x682&(x683%x684)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x685 = UINT32_MAX;
	uint16_t x686 = UINT16_MAX;
	uint16_t x687 = UINT16_MAX;
	int32_t t165 = -967358523;

    t165 = (x685==(x686&(x687%x688)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x690 = 127U;
	static volatile int32_t x691 = INT32_MIN;
	int64_t x692 = -18953077LL;
	volatile int32_t t166 = 51336;

    t166 = (x689==(x690&(x691%x692)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x693 = INT8_MIN;
	uint32_t x694 = 11U;
	uint32_t x695 = 73816U;
	volatile uint32_t x696 = 418948U;

    t167 = (x693==(x694&(x695%x696)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = -5965;
	volatile int32_t x698 = INT32_MIN;
	uint32_t x699 = UINT32_MAX;
	volatile int32_t x700 = -237222414;

    t168 = (x697==(x698&(x699%x700)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x701 = 66LLU;
	int16_t x702 = INT16_MAX;
	int32_t x704 = INT32_MAX;

    t169 = (x701==(x702&(x703%x704)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x705 = 8497523U;
	int8_t x706 = -1;
	volatile uint32_t x708 = UINT32_MAX;
	int32_t t170 = -488;

    t170 = (x705==(x706&(x707%x708)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x709 = INT8_MIN;
	int16_t x710 = -1;
	static int64_t x711 = -1LL;
	volatile uint32_t x712 = UINT32_MAX;
	int32_t t171 = -28719103;

    t171 = (x709==(x710&(x711%x712)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x713 = UINT64_MAX;
	int32_t t172 = -790;

    t172 = (x713==(x714&(x715%x716)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x718 = INT32_MIN;
	volatile int16_t x719 = -30;
	int32_t x720 = INT32_MIN;
	int32_t t173 = 1518;

    t173 = (x717==(x718&(x719%x720)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x721 = -3892;
	static volatile uint64_t x722 = 1480LLU;
	volatile int16_t x723 = INT16_MIN;
	int32_t t174 = 8395;

    t174 = (x721==(x722&(x723%x724)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = INT64_MAX;
	static volatile int64_t x727 = INT64_MAX;
	uint64_t x728 = 19893520LLU;
	int32_t t175 = 32261;

    t175 = (x725==(x726&(x727%x728)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x729 = 273U;
	volatile int8_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int64_t x732 = 214LL;
	volatile int32_t t176 = -32979383;

    t176 = (x729==(x730&(x731%x732)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x733 = UINT32_MAX;
	int8_t x734 = -43;
	int16_t x735 = INT16_MAX;
	int16_t x736 = INT16_MIN;
	volatile int32_t t177 = 18718;

    t177 = (x733==(x734&(x735%x736)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x737 = -719;
	uint64_t x738 = UINT64_MAX;
	uint32_t x739 = 11U;
	static int64_t x740 = INT64_MAX;
	static int32_t t178 = 3335124;

    t178 = (x737==(x738&(x739%x740)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x742 = -30;
	uint8_t x743 = UINT8_MAX;
	static int64_t x744 = -61887666467577546LL;
	int32_t t179 = -6802;

    t179 = (x741==(x742&(x743%x744)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = -1;
	uint64_t x747 = 9697544493156LLU;
	volatile uint8_t x748 = 89U;
	int32_t t180 = -14189;

    t180 = (x745==(x746&(x747%x748)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x749 = INT8_MIN;
	int16_t x750 = INT16_MIN;
	uint64_t x752 = UINT64_MAX;
	int32_t t181 = -107631365;

    t181 = (x749==(x750&(x751%x752)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x753 = -2522;
	int8_t x754 = 14;
	int32_t x755 = INT32_MIN;
	volatile int16_t x756 = -1;
	volatile int32_t t182 = 185073;

    t182 = (x753==(x754&(x755%x756)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x757 = UINT64_MAX;
	volatile uint32_t x759 = 105204727U;
	static int32_t t183 = 61164;

    t183 = (x757==(x758&(x759%x760)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x761 = INT64_MIN;
	volatile int64_t x762 = 1409284427546989789LL;

    t184 = (x761==(x762&(x763%x764)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x765 = 0U;
	static int16_t x767 = -1;
	uint64_t x768 = UINT64_MAX;

    t185 = (x765==(x766&(x767%x768)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x769 = 0U;
	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MAX;
	int32_t x772 = INT32_MIN;
	static volatile int32_t t186 = 544;

    t186 = (x769==(x770&(x771%x772)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x773 = INT32_MAX;
	volatile int32_t x774 = INT32_MAX;
	volatile uint64_t x775 = 0LLU;
	uint16_t x776 = UINT16_MAX;
	static int32_t t187 = 436990;

    t187 = (x773==(x774&(x775%x776)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MIN;
	volatile uint16_t x780 = 4770U;
	volatile int32_t t188 = 0;

    t188 = (x777==(x778&(x779%x780)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x781 = 0U;
	uint8_t x782 = 74U;
	volatile int16_t x783 = -1;
	static int64_t x784 = INT64_MAX;
	volatile int32_t t189 = -67;

    t189 = (x781==(x782&(x783%x784)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x785 = 0;
	static int8_t x787 = 14;
	int16_t x788 = INT16_MAX;
	volatile int32_t t190 = -3229643;

    t190 = (x785==(x786&(x787%x788)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x789 = 1;
	uint8_t x790 = 70U;
	static int8_t x791 = -57;
	int64_t x792 = INT64_MIN;
	volatile int32_t t191 = -370;

    t191 = (x789==(x790&(x791%x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x793 = -50;
	uint64_t x794 = 16130LLU;
	uint8_t x795 = 14U;
	int8_t x796 = -1;
	static int32_t t192 = 208;

    t192 = (x793==(x794&(x795%x796)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = 11;
	int32_t x798 = INT32_MIN;
	static uint32_t x799 = 37U;
	static int32_t t193 = -61;

    t193 = (x797==(x798&(x799%x800)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = INT32_MIN;
	int8_t x803 = -1;
	static int8_t x804 = INT8_MIN;
	static volatile int32_t t194 = -162467254;

    t194 = (x801==(x802&(x803%x804)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x805 = INT32_MIN;
	static volatile int64_t x807 = -53627LL;
	int8_t x808 = -1;
	static int32_t t195 = -27933;

    t195 = (x805==(x806&(x807%x808)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x809 = UINT64_MAX;
	volatile uint16_t x810 = 2077U;
	volatile int16_t x811 = -2;
	static int64_t x812 = -8LL;
	int32_t t196 = 0;

    t196 = (x809==(x810&(x811%x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x814 = INT64_MIN;
	volatile uint32_t x815 = 4870U;
	static int16_t x816 = -1;
	volatile int32_t t197 = -1645;

    t197 = (x813==(x814&(x815%x816)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x819 = 11927302LLU;
	volatile int32_t t198 = 2251;

    t198 = (x817==(x818&(x819%x820)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = 1;
	int8_t x823 = 12;
	int16_t x824 = 14;
	volatile int32_t t199 = -49455;

    t199 = (x821==(x822&(x823%x824)));

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

