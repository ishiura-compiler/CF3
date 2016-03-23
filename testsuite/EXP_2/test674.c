
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

static uint32_t x7 = UINT32_MAX;
int64_t x11 = -22583673015144LL;
uint32_t x16 = 1141267U;
int32_t x17 = INT32_MIN;
static int64_t x21 = INT64_MAX;
int64_t x28 = -1LL;
int32_t t8 = -496611;
volatile int64_t x43 = INT64_MIN;
int64_t x44 = 26392291973LL;
volatile int32_t t10 = 6070303;
static int8_t x53 = -1;
uint64_t x69 = 21354LLU;
uint16_t x73 = UINT16_MAX;
volatile int64_t x75 = -1LL;
uint8_t x76 = 2U;
static uint64_t x88 = 18782999629856LLU;
uint64_t x91 = 59671742259087574LLU;
volatile uint64_t t20 = 1607165974313LLU;
volatile uint32_t t21 = 121U;
volatile int16_t x100 = -3;
uint16_t x102 = 35U;
static uint32_t x104 = 353695U;
uint64_t x110 = 30314LLU;
int64_t x114 = -1LL;
static volatile int32_t t28 = 0;
uint8_t x127 = 1U;
uint32_t x133 = 6U;
int32_t x134 = INT32_MAX;
volatile uint64_t x139 = UINT64_MAX;
int16_t x140 = -5545;
uint16_t x141 = 198U;
int8_t x144 = INT8_MAX;
int16_t x146 = -1;
static int32_t x149 = INT32_MAX;
volatile int32_t t36 = 426153;
uint64_t x166 = UINT64_MAX;
int64_t x169 = INT64_MAX;
int8_t x174 = INT8_MAX;
int32_t x182 = INT32_MIN;
int64_t x190 = INT64_MAX;
static int64_t x193 = INT64_MIN;
int32_t x196 = -1;
volatile uint8_t x202 = UINT8_MAX;
int64_t x206 = INT64_MAX;
int64_t t47 = 0LL;
volatile int64_t x210 = INT64_MAX;
uint32_t x213 = 6U;
int64_t x214 = 53228419309618LL;
int64_t x219 = -1LL;
int32_t x221 = 13241;
int8_t x225 = INT8_MAX;
int64_t x226 = INT64_MIN;
volatile uint16_t x236 = UINT16_MAX;
int64_t x237 = -2567LL;
int8_t x248 = INT8_MIN;
volatile int32_t t58 = 51143146;
int16_t x253 = INT16_MIN;
static int16_t x274 = INT16_MIN;
uint64_t x285 = 6959LLU;
uint8_t x286 = 2U;
volatile uint32_t x290 = 5392U;
uint32_t x291 = 30106U;
uint64_t x298 = 2967574843273LLU;
static uint64_t x301 = 476391619343148928LLU;
uint64_t x312 = 2807945271230944360LLU;
int64_t x316 = -1LL;
uint16_t x324 = 2U;
static int64_t x338 = INT64_MAX;
static int8_t x342 = INT8_MAX;
static volatile uint32_t x351 = 121U;
volatile uint32_t x352 = 1008012U;
uint64_t x354 = 8851058935967120001LLU;
volatile int64_t x358 = 68089832600100LL;
int16_t x362 = -3731;
int64_t x367 = 2944307230017956LL;
int64_t x374 = -1LL;
volatile int16_t x376 = INT16_MIN;
int16_t x386 = INT16_MIN;
int8_t x387 = INT8_MIN;
int8_t x388 = INT8_MIN;
int32_t t86 = -43438616;
int32_t x389 = -57456;
int64_t x390 = INT64_MAX;
int32_t x400 = -21807039;
int32_t x408 = -1;
volatile int32_t x413 = INT32_MIN;
int8_t x420 = INT8_MAX;
int32_t x430 = INT32_MIN;
static int8_t x434 = -1;
uint64_t x435 = UINT64_MAX;
int64_t x445 = -1LL;
int64_t x450 = INT64_MIN;
int64_t x453 = 242883706604924712LL;
int16_t x456 = INT16_MIN;
int32_t t100 = -50;
volatile int8_t x466 = INT8_MIN;
volatile int64_t t102 = -38244LL;
int32_t x497 = 1892507;
static int8_t x500 = -1;
static int8_t x502 = -6;
int8_t x507 = -1;
volatile int32_t x518 = -660199;
uint64_t x519 = UINT64_MAX;
int8_t x522 = INT8_MIN;
volatile int32_t t114 = 2;
volatile uint8_t x533 = 2U;
int32_t t116 = 2269;
uint8_t x542 = 7U;
int64_t x543 = INT64_MIN;
static int32_t x551 = -1;
int32_t t120 = -861;
uint16_t x558 = 7006U;
int64_t x576 = INT64_MAX;
uint32_t x581 = UINT32_MAX;
uint64_t x584 = 2105556LLU;
static volatile uint64_t t126 = 156342596LLU;
volatile int32_t t127 = -203;
int16_t x594 = 1;
int32_t t128 = -226;
static int16_t x597 = INT16_MAX;
volatile int16_t x600 = 1849;
uint16_t x602 = 497U;
int16_t x606 = INT16_MIN;
int16_t x608 = INT16_MIN;
uint8_t x622 = 5U;
volatile int32_t x624 = -553529;
volatile int32_t t134 = -1582;
volatile uint64_t t137 = 1881044263829160627LLU;
uint8_t x642 = 1U;
int32_t t138 = 47676;
static int64_t x650 = -1108472395564829LL;
uint64_t x653 = 136038522770LLU;
int64_t x654 = 13285164793LL;
int8_t x655 = INT8_MAX;
uint8_t x656 = 0U;
static int32_t x662 = 12;
uint64_t t143 = 352791031486343222LLU;
uint32_t x665 = 450U;
volatile uint16_t x668 = UINT16_MAX;
int32_t x672 = -1;
int8_t x690 = 7;
int64_t x693 = 670595826873836LL;
uint32_t t152 = 13389U;
volatile uint16_t x708 = 9861U;
volatile int32_t t153 = 20;
static uint8_t x713 = 80U;
int64_t x715 = -1LL;
int16_t x726 = -1;
int32_t x739 = -628729927;
int16_t x740 = 6;
static int64_t x748 = INT64_MAX;
volatile uint32_t x751 = 29U;
static volatile int64_t t162 = -3001LL;
volatile uint8_t x753 = 0U;
int8_t x758 = INT8_MAX;
volatile uint32_t x776 = UINT32_MAX;
volatile int16_t x777 = -1;
int64_t x779 = INT64_MIN;
static int32_t t168 = 51;
int32_t x782 = INT32_MIN;
int32_t t169 = 2531778;
int32_t x789 = INT32_MIN;
uint16_t x795 = 77U;
volatile uint8_t x804 = 1U;
int64_t x806 = -1LL;
uint32_t x807 = UINT32_MAX;
volatile uint32_t t174 = 1U;
volatile int32_t x810 = INT32_MIN;
volatile int32_t t175 = -7;
uint16_t x822 = 3U;
volatile uint64_t x834 = 15867334765259303LLU;
int8_t x845 = -1;
volatile int64_t t182 = -115606749LL;
volatile int64_t t183 = 1691864LL;
int64_t x856 = 6LL;
static int32_t x861 = INT32_MIN;
static int32_t t186 = 482497163;
static int16_t x890 = INT16_MIN;
int64_t x891 = INT64_MAX;
static volatile int16_t x900 = 2;
int64_t x906 = 7765398485LL;
int32_t t193 = 1;
uint64_t x912 = 2752435484777552145LLU;
uint32_t x917 = UINT32_MAX;
uint64_t x922 = UINT64_MAX;
volatile uint32_t x928 = UINT32_MAX;
volatile uint32_t t198 = 2322140U;
volatile int8_t x931 = INT8_MIN;


void f0(void) {
    	uint16_t x5 = 1U;
	int16_t x6 = -5048;
	volatile uint32_t x8 = 0U;
	volatile uint32_t t0 = 219542U;

    t0 = ((x5!=(x6/x7))-x8);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	uint8_t x10 = 0U;
	int8_t x12 = INT8_MIN;
	int32_t t1 = 249;

    t1 = ((x9!=(x10/x11))-x12);

    if (t1 != 129) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 125U;
	uint64_t x14 = 1384777576412LLU;
	uint32_t x15 = 166541U;
	uint32_t t2 = 3105U;

    t2 = ((x13!=(x14/x15))-x16);

    if (t2 != 4293826030U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = 3;
	int32_t t3 = -238794;

    t3 = ((x17!=(x18/x19))-x20);

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MIN;
	int64_t x23 = 16374086267LL;
	uint16_t x24 = 41U;
	volatile int32_t t4 = 61056;

    t4 = ((x21!=(x22/x23))-x24);

    if (t4 != -40) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x25 = UINT16_MAX;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = INT8_MIN;
	int64_t t5 = 3157403906760333LL;

    t5 = ((x25!=(x26/x27))-x28);

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 4U;
	uint32_t x30 = 37U;
	uint8_t x31 = 10U;
	static uint8_t x32 = 14U;
	volatile int32_t t6 = 1050;

    t6 = ((x29!=(x30/x31))-x32);

    if (t6 != -13) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	uint8_t x34 = 12U;
	static int8_t x35 = INT8_MAX;
	uint64_t x36 = 3524LLU;
	static uint64_t t7 = 116039661569842LLU;

    t7 = ((x33!=(x34/x35))-x36);

    if (t7 != 18446744073709548093LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 116U;
	int8_t x38 = INT8_MAX;
	static int64_t x39 = -1LL;
	int8_t x40 = -1;

    t8 = ((x37!=(x38/x39))-x40);

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x42 = 0;
	volatile int64_t t9 = -1LL;

    t9 = ((x41!=(x42/x43))-x44);

    if (t9 != -26392291972LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	volatile uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MAX;

    t10 = ((x45!=(x46/x47))-x48);

    if (t10 != -2147483646) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	uint8_t x52 = 1U;
	int32_t t11 = 290;

    t11 = ((x49!=(x50/x51))-x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x54 = 3;
	static int8_t x55 = -13;
	uint16_t x56 = 10U;
	volatile int32_t t12 = 17183;

    t12 = ((x53!=(x54/x55))-x56);

    if (t12 != -9) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MAX;
	int32_t x58 = INT32_MIN;
	int16_t x59 = -3872;
	uint16_t x60 = 39U;
	int32_t t13 = 3;

    t13 = ((x57!=(x58/x59))-x60);

    if (t13 != -38) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	int32_t x63 = 11037227;
	int32_t x64 = -21485;
	int32_t t14 = 1647903;

    t14 = ((x61!=(x62/x63))-x64);

    if (t14 != 21486) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint32_t x65 = 1448817137U;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t15 = -229063;

    t15 = ((x65!=(x66/x67))-x68);

    if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x70 = 2914U;
	volatile int8_t x71 = -1;
	int8_t x72 = INT8_MAX;
	int32_t t16 = -426350717;

    t16 = ((x69!=(x70/x71))-x72);

    if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x74 = INT64_MAX;
	volatile int32_t t17 = 122726;

    t17 = ((x73!=(x74/x75))-x76);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 7705786U;
	int64_t x78 = -1LL;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = 2U;
	int32_t t18 = 8682;

    t18 = ((x77!=(x78/x79))-x80);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 30;
	static uint8_t x86 = 7U;
	uint16_t x87 = 1U;
	static uint64_t t19 = 44LLU;

    t19 = ((x85!=(x86/x87))-x88);

    if (t19 != 18446725290709921761LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = INT8_MIN;
	static uint8_t x90 = UINT8_MAX;
	uint64_t x92 = 96LLU;

    t20 = ((x89!=(x90/x91))-x92);

    if (t20 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = -3348127147949685069LL;
	uint8_t x94 = 5U;
	int32_t x95 = -8090;
	volatile uint32_t x96 = 268972U;

    t21 = ((x93!=(x94/x95))-x96);

    if (t21 != 4294698325U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x97 = UINT64_MAX;
	int64_t x98 = INT64_MIN;
	static uint8_t x99 = 1U;
	int32_t t22 = 173050759;

    t22 = ((x97!=(x98/x99))-x100);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x101 = UINT16_MAX;
	static uint8_t x103 = 55U;
	uint32_t t23 = 192329028U;

    t23 = ((x101!=(x102/x103))-x104);

    if (t23 != 4294613602U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = INT64_MIN;
	static volatile int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	int8_t x108 = -55;
	static volatile int32_t t24 = 199682;

    t24 = ((x105!=(x106/x107))-x108);

    if (t24 != 56) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x111 = -1LL;
	static uint64_t x112 = UINT64_MAX;
	uint64_t t25 = 5526495431989754LLU;

    t25 = ((x109!=(x110/x111))-x112);

    if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x113 = -1;
	int32_t x115 = 598632614;
	uint16_t x116 = 296U;
	int32_t t26 = 2729;

    t26 = ((x113!=(x114/x115))-x116);

    if (t26 != -295) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x117 = UINT64_MAX;
	static int16_t x118 = INT16_MIN;
	static int64_t x119 = 14068547461145201LL;
	int64_t x120 = -50963224208LL;
	int64_t t27 = -208473563686692LL;

    t27 = ((x117!=(x118/x119))-x120);

    if (t27 != 50963224209LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x123 = -1;
	int8_t x124 = INT8_MIN;

    t28 = ((x121!=(x122/x123))-x124);

    if (t28 != 129) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	static int8_t x126 = INT8_MAX;
	static uint8_t x128 = 107U;
	volatile int32_t t29 = 377987379;

    t29 = ((x125!=(x126/x127))-x128);

    if (t29 != -106) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x135 = INT8_MIN;
	volatile uint32_t x136 = 25201U;
	volatile uint32_t t30 = 14581460U;

    t30 = ((x133!=(x134/x135))-x136);

    if (t30 != 4294942096U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MIN;
	volatile int32_t t31 = 14;

    t31 = ((x137!=(x138/x139))-x140);

    if (t31 != 5546) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x142 = 7650;
	static volatile uint16_t x143 = UINT16_MAX;
	volatile int32_t t32 = -523237044;

    t32 = ((x141!=(x142/x143))-x144);

    if (t32 != -126) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	volatile int8_t x147 = 1;
	static volatile uint64_t x148 = UINT64_MAX;
	static uint64_t t33 = 15737320627336113LLU;

    t33 = ((x145!=(x146/x147))-x148);

    if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x150 = INT8_MIN;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = 36496938161369LLU;
	static volatile uint64_t t34 = 146764LLU;

    t34 = ((x149!=(x150/x151))-x152);

    if (t34 != 18446707576771390248LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x153 = INT16_MAX;
	static int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	static uint64_t x156 = 344LLU;
	uint64_t t35 = 66525626LLU;

    t35 = ((x153!=(x154/x155))-x156);

    if (t35 != 18446744073709551273LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x161 = 52U;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MAX;

    t36 = ((x161!=(x162/x163))-x164);

    if (t36 != -126) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = -1;
	int64_t x167 = INT64_MIN;
	int64_t x168 = -34319LL;
	volatile int64_t t37 = 87216177860543761LL;

    t37 = ((x165!=(x166/x167))-x168);

    if (t37 != 34320LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x170 = 11;
	static int32_t x171 = -1;
	static volatile uint8_t x172 = 6U;
	volatile int32_t t38 = -38975336;

    t38 = ((x169!=(x170/x171))-x172);

    if (t38 != -5) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x173 = -1LL;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 1U;
	volatile int32_t t39 = -5;

    t39 = ((x173!=(x174/x175))-x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = 1536;
	uint8_t x178 = 33U;
	int16_t x179 = INT16_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	static int32_t t40 = -3;

    t40 = ((x177!=(x178/x179))-x180);

    if (t40 != -254) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = -1;
	volatile int16_t x183 = -22;
	uint8_t x184 = UINT8_MAX;
	int32_t t41 = -7323;

    t41 = ((x181!=(x182/x183))-x184);

    if (t41 != -254) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x185 = -1;
	int32_t x186 = -73825052;
	volatile uint64_t x187 = 609564350792LLU;
	int16_t x188 = -1;
	volatile int32_t t42 = 1309;

    t42 = ((x185!=(x186/x187))-x188);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x189 = UINT64_MAX;
	static volatile int32_t x191 = -122;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t43 = 13785107LLU;

    t43 = ((x189!=(x190/x191))-x192);

    if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x194 = INT16_MIN;
	static int8_t x195 = -1;
	volatile int32_t t44 = -39;

    t44 = ((x193!=(x194/x195))-x196);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x197 = INT8_MAX;
	uint16_t x198 = UINT16_MAX;
	int64_t x199 = 5514550LL;
	static volatile int16_t x200 = -1;
	int32_t t45 = 92;

    t45 = ((x197!=(x198/x199))-x200);

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 14082886U;
	static int64_t x203 = 63270LL;
	volatile int16_t x204 = INT16_MAX;
	int32_t t46 = -14;

    t46 = ((x201!=(x202/x203))-x204);

    if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x205 = 2;
	volatile int8_t x207 = -1;
	int64_t x208 = -26165LL;

    t47 = ((x205!=(x206/x207))-x208);

    if (t47 != 26166LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = -18522118;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = 1U;
	static volatile uint32_t t48 = 271U;

    t48 = ((x209!=(x210/x211))-x212);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t49 = -2;

    t49 = ((x213!=(x214/x215))-x216);

    if (t49 != 32769) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = 3U;
	static volatile int16_t x218 = INT16_MIN;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t50 = -86481159;

    t50 = ((x217!=(x218/x219))-x220);

    if (t50 != 129) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MAX;
	int64_t x224 = -1LL;
	int64_t t51 = -12645641758LL;

    t51 = ((x221!=(x222/x223))-x224);

    if (t51 != 2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x227 = 36;
	int64_t x228 = 1418927215207821281LL;
	int64_t t52 = -326LL;

    t52 = ((x225!=(x226/x227))-x228);

    if (t52 != -1418927215207821280LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x229 = UINT8_MAX;
	static int64_t x230 = 35748129300LL;
	int64_t x231 = INT64_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t53 = 85;

    t53 = ((x229!=(x230/x231))-x232);

    if (t53 != 32769) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x233 = INT32_MIN;
	static int32_t x234 = INT32_MAX;
	static int32_t x235 = 7180;
	int32_t t54 = -5;

    t54 = ((x233!=(x234/x235))-x236);

    if (t54 != -65534) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = -1;
	int32_t t55 = 1716909;

    t55 = ((x237!=(x238/x239))-x240);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x241 = 0U;
	int64_t x242 = -44711002913LL;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t56 = 350522158U;

    t56 = ((x241!=(x242/x243))-x244);

    if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x245 = INT64_MAX;
	int16_t x246 = -444;
	int32_t x247 = 22860;
	volatile int32_t t57 = 153327;

    t57 = ((x245!=(x246/x247))-x248);

    if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x249 = 2983U;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -27;
	uint8_t x252 = 11U;

    t58 = ((x249!=(x250/x251))-x252);

    if (t58 != -10) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x254 = INT16_MAX;
	int16_t x255 = 3376;
	uint8_t x256 = 6U;
	int32_t t59 = 15208;

    t59 = ((x253!=(x254/x255))-x256);

    if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x257 = 172U;
	static uint8_t x258 = 8U;
	static volatile int32_t x259 = -1292809;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t60 = 1311;

    t60 = ((x257!=(x258/x259))-x260);

    if (t60 != -254) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x265 = -1LL;
	static uint64_t x266 = 1466060431LLU;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;
	int32_t t61 = 144522;

    t61 = ((x265!=(x266/x267))-x268);

    if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MAX;
	uint32_t x271 = 147047U;
	int64_t x272 = 454392729887LL;
	static volatile int64_t t62 = -7LL;

    t62 = ((x269!=(x270/x271))-x272);

    if (t62 != -454392729886LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x273 = INT16_MIN;
	uint32_t x275 = 494855U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t63 = 92;

    t63 = ((x273!=(x274/x275))-x276);

    if (t63 != -126) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x278 = 582121389494347255LLU;
	uint8_t x279 = UINT8_MAX;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t64 = 1860U;

    t64 = ((x277!=(x278/x279))-x280);

    if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x287 = INT64_MAX;
	static int8_t x288 = INT8_MAX;
	volatile int32_t t65 = 233141;

    t65 = ((x285!=(x286/x287))-x288);

    if (t65 != -126) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x289 = 453074354938LLU;
	uint32_t x292 = 108415651U;
	volatile uint32_t t66 = 53565U;

    t66 = ((x289!=(x290/x291))-x292);

    if (t66 != 4186551646U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x293 = 99U;
	int64_t x294 = INT64_MIN;
	static uint32_t x295 = UINT32_MAX;
	int16_t x296 = 0;
	static volatile int32_t t67 = -9;

    t67 = ((x293!=(x294/x295))-x296);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x297 = UINT8_MAX;
	int32_t x299 = -395658305;
	volatile uint32_t x300 = 2U;
	volatile uint32_t t68 = UINT32_MAX;

    t68 = ((x297!=(x298/x299))-x300);

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x302 = UINT8_MAX;
	static int8_t x303 = -3;
	volatile int8_t x304 = 0;
	int32_t t69 = -18189;

    t69 = ((x301!=(x302/x303))-x304);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = INT32_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t70 = -12785944;

    t70 = ((x305!=(x306/x307))-x308);

    if (t70 != 129) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x309 = UINT8_MAX;
	int32_t x310 = INT32_MAX;
	static int8_t x311 = 62;
	uint64_t t71 = 3279LLU;

    t71 = ((x309!=(x310/x311))-x312);

    if (t71 != 15638798802478607257LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x313 = -2;
	uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = 27U;
	volatile int64_t t72 = -6393311836748LL;

    t72 = ((x313!=(x314/x315))-x316);

    if (t72 != 2LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = INT32_MIN;
	int8_t x318 = 0;
	int16_t x319 = 29;
	int8_t x320 = -1;
	static volatile int32_t t73 = 59;

    t73 = ((x317!=(x318/x319))-x320);

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x321 = INT64_MIN;
	static int16_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	int32_t t74 = -261;

    t74 = ((x321!=(x322/x323))-x324);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x337 = 0U;
	int16_t x339 = INT16_MIN;
	volatile uint32_t x340 = 60557768U;
	volatile uint32_t t75 = 8141195U;

    t75 = ((x337!=(x338/x339))-x340);

    if (t75 != 4234409529U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x341 = 23U;
	int16_t x343 = INT16_MIN;
	static volatile int32_t x344 = -1;
	int32_t t76 = -916216466;

    t76 = ((x341!=(x342/x343))-x344);

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x345 = INT16_MIN;
	volatile int64_t x346 = 5613991243LL;
	int8_t x347 = 1;
	uint8_t x348 = UINT8_MAX;
	static volatile int32_t t77 = 88;

    t77 = ((x345!=(x346/x347))-x348);

    if (t77 != -254) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x349 = 156601LLU;
	int64_t x350 = INT64_MAX;
	uint32_t t78 = 1992685U;

    t78 = ((x349!=(x350/x351))-x352);

    if (t78 != 4293959285U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x353 = INT8_MAX;
	volatile int8_t x355 = INT8_MIN;
	int8_t x356 = 0;
	int32_t t79 = 5434;

    t79 = ((x353!=(x354/x355))-x356);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x357 = -2;
	int16_t x359 = INT16_MIN;
	static uint64_t x360 = 859LLU;
	uint64_t t80 = 5549692740989LLU;

    t80 = ((x357!=(x358/x359))-x360);

    if (t80 != 18446744073709550758LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x361 = -1;
	volatile int16_t x363 = INT16_MIN;
	static int32_t x364 = INT32_MAX;
	int32_t t81 = -23052;

    t81 = ((x361!=(x362/x363))-x364);

    if (t81 != -2147483646) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	static uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t82 = 1158787219656892910LLU;

    t82 = ((x365!=(x366/x367))-x368);

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 49U;
	int16_t x371 = -1;
	volatile uint64_t x372 = 159LLU;
	static volatile uint64_t t83 = 278138LLU;

    t83 = ((x369!=(x370/x371))-x372);

    if (t83 != 18446744073709551458LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x373 = INT64_MAX;
	volatile int64_t x375 = INT64_MIN;
	volatile int32_t t84 = -32328522;

    t84 = ((x373!=(x374/x375))-x376);

    if (t84 != 32769) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = -654;
	volatile int32_t x380 = -1;
	volatile int32_t t85 = 187;

    t85 = ((x377!=(x378/x379))-x380);

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = -1;

    t86 = ((x385!=(x386/x387))-x388);

    if (t86 != 129) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x391 = 3053634U;
	uint64_t x392 = UINT64_MAX;
	volatile uint64_t t87 = 68456817690488887LLU;

    t87 = ((x389!=(x390/x391))-x392);

    if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x397 = 5787U;
	uint16_t x398 = 0U;
	int64_t x399 = -1LL;
	volatile int32_t t88 = -216169016;

    t88 = ((x397!=(x398/x399))-x400);

    if (t88 != 21807040) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x405 = 2;
	static int8_t x406 = INT8_MAX;
	int64_t x407 = INT64_MAX;
	volatile int32_t t89 = 8;

    t89 = ((x405!=(x406/x407))-x408);

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x414 = -1;
	uint32_t x415 = UINT32_MAX;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t90 = -500522907;

    t90 = ((x413!=(x414/x415))-x416);

    if (t90 != -254) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x417 = 406650107228LLU;
	volatile int64_t x418 = -1LL;
	static int8_t x419 = INT8_MIN;
	volatile int32_t t91 = -2422;

    t91 = ((x417!=(x418/x419))-x420);

    if (t91 != -126) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x421 = 1;
	int16_t x422 = -1;
	uint64_t x423 = 442755LLU;
	int64_t x424 = 5133278666574LL;
	int64_t t92 = 321558719LL;

    t92 = ((x421!=(x422/x423))-x424);

    if (t92 != -5133278666573LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x429 = 13498828LL;
	static int64_t x431 = 8232138040607169LL;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t93 = 6245U;

    t93 = ((x429!=(x430/x431))-x432);

    if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x433 = 9150636908241LL;
	volatile uint32_t x436 = 0U;
	uint32_t t94 = 8764403U;

    t94 = ((x433!=(x434/x435))-x436);

    if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x437 = UINT64_MAX;
	static uint16_t x438 = 41U;
	static int8_t x439 = INT8_MIN;
	int8_t x440 = 7;
	static volatile int32_t t95 = 244170837;

    t95 = ((x437!=(x438/x439))-x440);

    if (t95 != -6) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x441 = INT32_MIN;
	uint8_t x442 = UINT8_MAX;
	static uint32_t x443 = 6425212U;
	uint16_t x444 = UINT16_MAX;
	static volatile int32_t t96 = 59933;

    t96 = ((x441!=(x442/x443))-x444);

    if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x446 = -1LL;
	static uint8_t x447 = UINT8_MAX;
	static int16_t x448 = INT16_MIN;
	int32_t t97 = 42035503;

    t97 = ((x445!=(x446/x447))-x448);

    if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x449 = UINT32_MAX;
	volatile int8_t x451 = 2;
	uint32_t x452 = 5201U;
	volatile uint32_t t98 = 6904882U;

    t98 = ((x449!=(x450/x451))-x452);

    if (t98 != 4294962096U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x454 = 6092;
	int8_t x455 = -1;
	int32_t t99 = -5414;

    t99 = ((x453!=(x454/x455))-x456);

    if (t99 != 32769) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x461 = 6;
	uint64_t x462 = UINT64_MAX;
	volatile uint16_t x463 = UINT16_MAX;
	volatile int8_t x464 = INT8_MAX;

    t100 = ((x461!=(x462/x463))-x464);

    if (t100 != -126) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x465 = -1;
	int64_t x467 = INT64_MIN;
	uint64_t x468 = 1473453025LLU;
	uint64_t t101 = 2112170812317LLU;

    t101 = ((x465!=(x466/x467))-x468);

    if (t101 != 18446744072236098592LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x469 = 15231993086348311LLU;
	int8_t x470 = INT8_MAX;
	int8_t x471 = 48;
	int64_t x472 = -1LL;

    t102 = ((x469!=(x470/x471))-x472);

    if (t102 != 2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x473 = 62;
	int32_t x474 = INT32_MIN;
	int64_t x475 = 908055583056184652LL;
	static uint16_t x476 = 14319U;
	volatile int32_t t103 = -4239;

    t103 = ((x473!=(x474/x475))-x476);

    if (t103 != -14318) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x477 = 417762154;
	uint32_t x478 = 29753U;
	int8_t x479 = 13;
	int64_t x480 = 65313676165LL;
	volatile int64_t t104 = 168089569965745LL;

    t104 = ((x477!=(x478/x479))-x480);

    if (t104 != -65313676164LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MAX;
	volatile int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MAX;
	static volatile int32_t t105 = -9;

    t105 = ((x481!=(x482/x483))-x484);

    if (t105 != -126) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x485 = UINT64_MAX;
	int64_t x486 = -1LL;
	static int16_t x487 = INT16_MIN;
	static volatile int16_t x488 = -1;
	int32_t t106 = 133;

    t106 = ((x485!=(x486/x487))-x488);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = INT64_MIN;
	int8_t x490 = -1;
	volatile uint8_t x491 = 5U;
	volatile uint16_t x492 = 76U;
	int32_t t107 = -401443626;

    t107 = ((x489!=(x490/x491))-x492);

    if (t107 != -75) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x493 = -1002561;
	int32_t x494 = -180967;
	int8_t x495 = INT8_MIN;
	static uint8_t x496 = 24U;
	int32_t t108 = 0;

    t108 = ((x493!=(x494/x495))-x496);

    if (t108 != -23) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x498 = UINT32_MAX;
	uint16_t x499 = UINT16_MAX;
	int32_t t109 = -3406;

    t109 = ((x497!=(x498/x499))-x500);

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x501 = 1;
	volatile int32_t x503 = INT32_MIN;
	int32_t x504 = -1;
	volatile int32_t t110 = -249;

    t110 = ((x501!=(x502/x503))-x504);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x505 = 1215213236771502601LLU;
	int64_t x506 = -13LL;
	uint8_t x508 = 19U;
	int32_t t111 = 26;

    t111 = ((x505!=(x506/x507))-x508);

    if (t111 != -18) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x513 = -6;
	uint32_t x514 = UINT32_MAX;
	uint64_t x515 = 663397LLU;
	int16_t x516 = INT16_MIN;
	int32_t t112 = 2;

    t112 = ((x513!=(x514/x515))-x516);

    if (t112 != 32769) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x517 = UINT64_MAX;
	int16_t x520 = INT16_MIN;
	volatile int32_t t113 = -17736;

    t113 = ((x517!=(x518/x519))-x520);

    if (t113 != 32769) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = -1;
	int8_t x523 = INT8_MIN;
	uint8_t x524 = UINT8_MAX;

    t114 = ((x521!=(x522/x523))-x524);

    if (t114 != -254) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x529 = -1LL;
	volatile uint32_t x530 = 563U;
	int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	volatile int32_t t115 = 0;

    t115 = ((x529!=(x530/x531))-x532);

    if (t115 != 32769) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x534 = 1719920115208867536LL;
	int8_t x535 = INT8_MAX;
	volatile uint8_t x536 = 13U;

    t116 = ((x533!=(x534/x535))-x536);

    if (t116 != -12) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x537 = INT64_MAX;
	volatile int64_t x538 = INT64_MAX;
	int32_t x539 = INT32_MIN;
	volatile int16_t x540 = -840;
	volatile int32_t t117 = 27;

    t117 = ((x537!=(x538/x539))-x540);

    if (t117 != 841) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x544 = 4;
	int32_t t118 = 30379;

    t118 = ((x541!=(x542/x543))-x544);

    if (t118 != -3) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x545 = 2U;
	int64_t x546 = INT64_MAX;
	uint8_t x547 = 9U;
	uint32_t x548 = 269690U;
	volatile uint32_t t119 = 4U;

    t119 = ((x545!=(x546/x547))-x548);

    if (t119 != 4294697607U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x549 = 6;
	int8_t x550 = INT8_MAX;
	int8_t x552 = 8;

    t120 = ((x549!=(x550/x551))-x552);

    if (t120 != -7) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x557 = INT32_MAX;
	volatile uint16_t x559 = UINT16_MAX;
	int64_t x560 = -6634176907LL;
	volatile int64_t t121 = -13034909514732246LL;

    t121 = ((x557!=(x558/x559))-x560);

    if (t121 != 6634176908LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x565 = UINT16_MAX;
	int16_t x566 = 6;
	static volatile int32_t x567 = 360;
	static int32_t x568 = 1090;
	int32_t t122 = 607178;

    t122 = ((x565!=(x566/x567))-x568);

    if (t122 != -1089) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x569 = -1;
	int32_t x570 = -1;
	int16_t x571 = -13627;
	int8_t x572 = 1;
	int32_t t123 = 0;

    t123 = ((x569!=(x570/x571))-x572);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x573 = INT64_MIN;
	uint64_t x574 = UINT64_MAX;
	int64_t x575 = -562213412162321LL;
	int64_t t124 = 7438503LL;

    t124 = ((x573!=(x574/x575))-x576);

    if (t124 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x577 = 1;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	int16_t x580 = 6;
	static int32_t t125 = 5018;

    t125 = ((x577!=(x578/x579))-x580);

    if (t125 != -5) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x582 = INT32_MIN;
	uint32_t x583 = UINT32_MAX;

    t126 = ((x581!=(x582/x583))-x584);

    if (t126 != 18446744073707446061LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x585 = INT64_MIN;
	static int64_t x586 = -2276LL;
	uint16_t x587 = 6U;
	int8_t x588 = INT8_MAX;

    t127 = ((x585!=(x586/x587))-x588);

    if (t127 != -126) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x593 = 1075308LL;
	static int32_t x595 = 6203201;
	int32_t x596 = -1;

    t128 = ((x593!=(x594/x595))-x596);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x598 = 302;
	static int16_t x599 = -1;
	int32_t t129 = 15264113;

    t129 = ((x597!=(x598/x599))-x600);

    if (t129 != -1848) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x601 = 0U;
	uint64_t x603 = 173305160530296LLU;
	uint32_t x604 = 224563066U;
	static uint32_t t130 = 47202556U;

    t130 = ((x601!=(x602/x603))-x604);

    if (t130 != 4070404230U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x605 = UINT32_MAX;
	volatile int8_t x607 = -4;
	volatile int32_t t131 = -265;

    t131 = ((x605!=(x606/x607))-x608);

    if (t131 != 32769) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	static int8_t x614 = INT8_MIN;
	static uint16_t x615 = 276U;
	uint16_t x616 = UINT16_MAX;
	int32_t t132 = -3922645;

    t132 = ((x613!=(x614/x615))-x616);

    if (t132 != -65534) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x617 = 1984210493U;
	volatile int8_t x618 = -55;
	int16_t x619 = INT16_MIN;
	static int32_t x620 = -16;
	static volatile int32_t t133 = -1990864;

    t133 = ((x617!=(x618/x619))-x620);

    if (t133 != 17) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x621 = INT32_MIN;
	volatile int8_t x623 = INT8_MAX;

    t134 = ((x621!=(x622/x623))-x624);

    if (t134 != 553530) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x625 = INT64_MAX;
	volatile int16_t x626 = INT16_MIN;
	int64_t x627 = INT64_MIN;
	uint64_t x628 = 6128693295288502051LLU;
	uint64_t t135 = 34298721685084LLU;

    t135 = ((x625!=(x626/x627))-x628);

    if (t135 != 12318050778421049566LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x629 = INT8_MIN;
	uint8_t x630 = 23U;
	static int8_t x631 = 3;
	int8_t x632 = 10;
	volatile int32_t t136 = -3;

    t136 = ((x629!=(x630/x631))-x632);

    if (t136 != -9) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x637 = -1;
	int16_t x638 = INT16_MAX;
	volatile int64_t x639 = INT64_MIN;
	volatile uint64_t x640 = 1292355525505628610LLU;

    t137 = ((x637!=(x638/x639))-x640);

    if (t137 != 17154388548203923007LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x641 = -1;
	uint32_t x643 = 1363873604U;
	int16_t x644 = INT16_MIN;

    t138 = ((x641!=(x642/x643))-x644);

    if (t138 != 32769) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x645 = UINT16_MAX;
	int16_t x646 = INT16_MAX;
	volatile uint8_t x647 = 4U;
	int16_t x648 = INT16_MAX;
	int32_t t139 = 23;

    t139 = ((x645!=(x646/x647))-x648);

    if (t139 != -32766) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x649 = UINT16_MAX;
	static uint8_t x651 = 4U;
	static int8_t x652 = INT8_MIN;
	volatile int32_t t140 = 1;

    t140 = ((x649!=(x650/x651))-x652);

    if (t140 != 129) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t t141 = 144;

    t141 = ((x653!=(x654/x655))-x656);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x657 = -1844;
	int8_t x658 = -42;
	uint32_t x659 = UINT32_MAX;
	int16_t x660 = INT16_MAX;
	volatile int32_t t142 = 132137249;

    t142 = ((x657!=(x658/x659))-x660);

    if (t142 != -32766) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x661 = UINT8_MAX;
	int64_t x663 = -1LL;
	uint64_t x664 = 160LLU;

    t143 = ((x661!=(x662/x663))-x664);

    if (t143 != 18446744073709551457LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x666 = INT8_MIN;
	int8_t x667 = INT8_MIN;
	int32_t t144 = 4703;

    t144 = ((x665!=(x666/x667))-x668);

    if (t144 != -65534) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x669 = INT16_MIN;
	static int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MIN;
	volatile int32_t t145 = 955;

    t145 = ((x669!=(x670/x671))-x672);

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x673 = 4054644029827100LL;
	int64_t x674 = INT64_MAX;
	volatile uint64_t x675 = UINT64_MAX;
	static volatile uint64_t x676 = 36297537LLU;
	static uint64_t t146 = 16744700LLU;

    t146 = ((x673!=(x674/x675))-x676);

    if (t146 != 18446744073673254080LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x677 = INT32_MIN;
	static int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MAX;
	int16_t x680 = INT16_MIN;
	volatile int32_t t147 = -493;

    t147 = ((x677!=(x678/x679))-x680);

    if (t147 != 32769) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x681 = 3849647LLU;
	int8_t x682 = 1;
	static int8_t x683 = INT8_MIN;
	int32_t x684 = INT32_MAX;
	volatile int32_t t148 = -116208541;

    t148 = ((x681!=(x682/x683))-x684);

    if (t148 != -2147483646) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = -1;
	uint32_t x687 = 421U;
	uint8_t x688 = UINT8_MAX;
	int32_t t149 = -20791;

    t149 = ((x685!=(x686/x687))-x688);

    if (t149 != -254) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x689 = 16582;
	int32_t x691 = -23587471;
	static uint64_t x692 = 45982LLU;
	uint64_t t150 = 8424098872LLU;

    t150 = ((x689!=(x690/x691))-x692);

    if (t150 != 18446744073709505635LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x694 = -1LL;
	int16_t x695 = INT16_MAX;
	uint8_t x696 = UINT8_MAX;
	int32_t t151 = 0;

    t151 = ((x693!=(x694/x695))-x696);

    if (t151 != -254) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x701 = -179965;
	int8_t x702 = INT8_MAX;
	volatile uint8_t x703 = UINT8_MAX;
	static uint32_t x704 = 6209U;

    t152 = ((x701!=(x702/x703))-x704);

    if (t152 != 4294961088U) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x705 = INT16_MIN;
	int16_t x706 = -1;
	int32_t x707 = -118125056;

    t153 = ((x705!=(x706/x707))-x708);

    if (t153 != -9860) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x709 = -229595;
	int16_t x710 = INT16_MAX;
	int16_t x711 = -434;
	static volatile int64_t x712 = INT64_MAX;
	int64_t t154 = -7493LL;

    t154 = ((x709!=(x710/x711))-x712);

    if (t154 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x714 = UINT64_MAX;
	static int64_t x716 = -787167097301967LL;
	volatile int64_t t155 = 383292643027LL;

    t155 = ((x713!=(x714/x715))-x716);

    if (t155 != 787167097301968LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x717 = INT16_MIN;
	volatile int8_t x718 = INT8_MAX;
	static int32_t x719 = -1;
	static uint16_t x720 = 0U;
	volatile int32_t t156 = 96;

    t156 = ((x717!=(x718/x719))-x720);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x725 = -7;
	static int32_t x727 = INT32_MIN;
	volatile uint16_t x728 = UINT16_MAX;
	volatile int32_t t157 = -6552;

    t157 = ((x725!=(x726/x727))-x728);

    if (t157 != -65534) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MIN;
	static uint32_t x735 = 223U;
	int16_t x736 = 731;
	volatile int32_t t158 = -18540;

    t158 = ((x733!=(x734/x735))-x736);

    if (t158 != -730) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x737 = INT64_MAX;
	static int32_t x738 = 483;
	static volatile int32_t t159 = -343;

    t159 = ((x737!=(x738/x739))-x740);

    if (t159 != -5) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x741 = INT16_MIN;
	static int64_t x742 = INT64_MIN;
	int8_t x743 = -2;
	uint8_t x744 = 30U;
	static volatile int32_t t160 = 215466465;

    t160 = ((x741!=(x742/x743))-x744);

    if (t160 != -29) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = -7295183;
	int32_t x747 = 104;
	volatile int64_t t161 = -410285243723LL;

    t161 = ((x745!=(x746/x747))-x748);

    if (t161 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x749 = 863LLU;
	static uint16_t x750 = 1U;
	volatile int64_t x752 = -5490676123479660LL;

    t162 = ((x749!=(x750/x751))-x752);

    if (t162 != 5490676123479661LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x754 = INT64_MAX;
	int32_t x755 = INT32_MIN;
	static int32_t x756 = 30;
	int32_t t163 = 444175;

    t163 = ((x753!=(x754/x755))-x756);

    if (t163 != -29) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x757 = 99986478326LL;
	int64_t x759 = -1LL;
	int64_t x760 = -23726153LL;
	volatile int64_t t164 = 449548056LL;

    t164 = ((x757!=(x758/x759))-x760);

    if (t164 != 23726154LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x761 = 7433;
	int16_t x762 = -7102;
	uint16_t x763 = 42U;
	uint16_t x764 = UINT16_MAX;
	static int32_t t165 = -27;

    t165 = ((x761!=(x762/x763))-x764);

    if (t165 != -65534) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x769 = UINT32_MAX;
	uint64_t x770 = 11068771181LLU;
	uint64_t x771 = 1053098LLU;
	static uint64_t x772 = 132179450001918LLU;
	uint64_t t166 = 5989339768LLU;

    t166 = ((x769!=(x770/x771))-x772);

    if (t166 != 18446611894259549699LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x773 = UINT16_MAX;
	int64_t x774 = -7114LL;
	int8_t x775 = INT8_MIN;
	volatile uint32_t t167 = 362276092U;

    t167 = ((x773!=(x774/x775))-x776);

    if (t167 != 2U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x778 = UINT64_MAX;
	int32_t x780 = -177;

    t168 = ((x777!=(x778/x779))-x780);

    if (t168 != 178) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x781 = UINT16_MAX;
	uint64_t x783 = 4144LLU;
	uint8_t x784 = UINT8_MAX;

    t169 = ((x781!=(x782/x783))-x784);

    if (t169 != -254) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x790 = INT8_MAX;
	volatile int8_t x791 = INT8_MIN;
	volatile int8_t x792 = 3;
	static volatile int32_t t170 = -4;

    t170 = ((x789!=(x790/x791))-x792);

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x793 = INT32_MIN;
	uint8_t x794 = 9U;
	uint8_t x796 = 26U;
	static volatile int32_t t171 = -4895;

    t171 = ((x793!=(x794/x795))-x796);

    if (t171 != -25) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x797 = INT64_MAX;
	uint64_t x798 = 1629829LLU;
	int16_t x799 = 4749;
	static int8_t x800 = -15;
	volatile int32_t t172 = 36408;

    t172 = ((x797!=(x798/x799))-x800);

    if (t172 != 16) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x802 = -1LL;
	volatile int64_t x803 = 1019797179LL;
	volatile int32_t t173 = 14451544;

    t173 = ((x801!=(x802/x803))-x804);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x805 = 5849LLU;
	uint32_t x808 = UINT32_MAX;

    t174 = ((x805!=(x806/x807))-x808);

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x809 = INT8_MAX;
	static uint16_t x811 = 97U;
	volatile int16_t x812 = -965;

    t175 = ((x809!=(x810/x811))-x812);

    if (t175 != 966) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = 2;
	int8_t x815 = 43;
	int8_t x816 = -1;
	int32_t t176 = 132935551;

    t176 = ((x813!=(x814/x815))-x816);

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x821 = -1;
	int8_t x823 = 1;
	static uint8_t x824 = UINT8_MAX;
	int32_t t177 = 75498807;

    t177 = ((x821!=(x822/x823))-x824);

    if (t177 != -254) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x825 = -364;
	volatile int64_t x826 = INT64_MIN;
	static volatile uint32_t x827 = 1642412U;
	int64_t x828 = INT64_MAX;
	volatile int64_t t178 = 28676225LL;

    t178 = ((x825!=(x826/x827))-x828);

    if (t178 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x829 = 50U;
	uint8_t x830 = 44U;
	static int32_t x831 = INT32_MAX;
	uint8_t x832 = 59U;
	int32_t t179 = 255195;

    t179 = ((x829!=(x830/x831))-x832);

    if (t179 != -58) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x833 = 0LLU;
	uint64_t x835 = 142933877639451LLU;
	uint8_t x836 = 4U;
	volatile int32_t t180 = -185833764;

    t180 = ((x833!=(x834/x835))-x836);

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x841 = 107365LL;
	int32_t x842 = INT32_MIN;
	uint8_t x843 = 9U;
	volatile int32_t x844 = -1;
	int32_t t181 = 4117;

    t181 = ((x841!=(x842/x843))-x844);

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x846 = -1;
	uint64_t x847 = UINT64_MAX;
	int64_t x848 = 197426LL;

    t182 = ((x845!=(x846/x847))-x848);

    if (t182 != -197425LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x849 = 25541376LL;
	uint64_t x850 = 5319LLU;
	volatile uint8_t x851 = 3U;
	static int64_t x852 = INT64_MAX;

    t183 = ((x849!=(x850/x851))-x852);

    if (t183 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x853 = 38U;
	volatile uint8_t x854 = UINT8_MAX;
	volatile int8_t x855 = 53;
	volatile int64_t t184 = 48LL;

    t184 = ((x853!=(x854/x855))-x856);

    if (t184 != -5LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x857 = UINT32_MAX;
	int8_t x858 = INT8_MAX;
	int32_t x859 = INT32_MIN;
	uint16_t x860 = 1098U;
	volatile int32_t t185 = -482;

    t185 = ((x857!=(x858/x859))-x860);

    if (t185 != -1097) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x862 = 0U;
	int64_t x863 = INT64_MIN;
	int16_t x864 = INT16_MIN;

    t186 = ((x861!=(x862/x863))-x864);

    if (t186 != 32769) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x869 = 75LL;
	uint64_t x870 = UINT64_MAX;
	volatile int32_t x871 = 18;
	uint16_t x872 = UINT16_MAX;
	static volatile int32_t t187 = 1;

    t187 = ((x869!=(x870/x871))-x872);

    if (t187 != -65534) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x873 = -572941924LL;
	int32_t x874 = -1;
	int8_t x875 = -1;
	volatile int64_t x876 = -15249537754652LL;
	volatile int64_t t188 = -10759575612LL;

    t188 = ((x873!=(x874/x875))-x876);

    if (t188 != 15249537754653LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x881 = INT8_MIN;
	int16_t x882 = INT16_MAX;
	volatile uint32_t x883 = 24948367U;
	volatile uint8_t x884 = UINT8_MAX;
	int32_t t189 = -22;

    t189 = ((x881!=(x882/x883))-x884);

    if (t189 != -254) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x885 = 1368387321651LL;
	uint64_t x886 = 14232933LLU;
	int64_t x887 = -1736821354440LL;
	static volatile int8_t x888 = 25;
	int32_t t190 = -12281;

    t190 = ((x885!=(x886/x887))-x888);

    if (t190 != -24) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x889 = INT64_MIN;
	uint8_t x892 = UINT8_MAX;
	int32_t t191 = 24679318;

    t191 = ((x889!=(x890/x891))-x892);

    if (t191 != -254) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x897 = 12;
	static int64_t x898 = INT64_MAX;
	volatile int64_t x899 = INT64_MIN;
	volatile int32_t t192 = -12;

    t192 = ((x897!=(x898/x899))-x900);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x905 = UINT32_MAX;
	static int64_t x907 = 223823506142336LL;
	volatile int8_t x908 = INT8_MIN;

    t193 = ((x905!=(x906/x907))-x908);

    if (t193 != 129) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x909 = 60U;
	volatile int64_t x910 = INT64_MIN;
	volatile int64_t x911 = 522497583350728LL;
	volatile uint64_t t194 = 93LLU;

    t194 = ((x909!=(x910/x911))-x912);

    if (t194 != 15694308588931999472LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x913 = -1;
	volatile int16_t x914 = INT16_MAX;
	uint32_t x915 = UINT32_MAX;
	int64_t x916 = -1198126537301484LL;
	int64_t t195 = -2267LL;

    t195 = ((x913!=(x914/x915))-x916);

    if (t195 != 1198126537301485LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x918 = 2U;
	int8_t x919 = INT8_MIN;
	int16_t x920 = INT16_MAX;
	int32_t t196 = -157550;

    t196 = ((x917!=(x918/x919))-x920);

    if (t196 != -32766) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x921 = 1;
	uint8_t x923 = UINT8_MAX;
	int64_t x924 = 3786467071983996723LL;
	volatile int64_t t197 = 190315446LL;

    t197 = ((x921!=(x922/x923))-x924);

    if (t197 != -3786467071983996722LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x925 = -371;
	int16_t x926 = INT16_MIN;
	static volatile int64_t x927 = 28388177382LL;

    t198 = ((x925!=(x926/x927))-x928);

    if (t198 != 2U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x929 = INT64_MAX;
	static uint32_t x930 = 6613U;
	static uint16_t x932 = 188U;
	int32_t t199 = -9706;

    t199 = ((x929!=(x930/x931))-x932);

    if (t199 != -187) { NG(); } else { ; }
	
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

