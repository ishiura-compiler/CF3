
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

static int64_t t2 = 5056209316169LL;
static int64_t x20 = -1LL;
int64_t t4 = -8566916080829LL;
uint64_t x30 = 108081LLU;
uint16_t x32 = UINT16_MAX;
uint32_t x43 = 90542913U;
uint32_t x45 = 6147427U;
int64_t x46 = INT64_MIN;
volatile int32_t x57 = INT32_MIN;
static uint32_t x68 = UINT32_MAX;
volatile uint32_t x81 = UINT32_MAX;
int32_t x83 = INT32_MIN;
static int16_t x95 = INT16_MIN;
uint64_t x96 = 0LLU;
static int16_t x99 = INT16_MAX;
int8_t x104 = -1;
volatile int64_t t22 = -15LL;
static uint16_t x105 = UINT16_MAX;
int8_t x106 = -1;
int16_t x109 = INT16_MIN;
volatile int16_t x110 = 745;
uint8_t x112 = 3U;
static int64_t t26 = -9318LL;
int8_t x121 = INT8_MIN;
uint64_t x122 = 12790782LLU;
static uint64_t t27 = 100522613573681345LLU;
volatile uint8_t x128 = 4U;
uint64_t x137 = 1LLU;
static int8_t x139 = INT8_MAX;
uint64_t x140 = UINT64_MAX;
int64_t x160 = -1LL;
int32_t x164 = 5301861;
uint16_t x171 = 9246U;
uint16_t x173 = 18U;
int64_t x182 = 223690777427LL;
uint64_t x188 = 2592744LLU;
int32_t t40 = 18331;
volatile uint32_t x202 = UINT32_MAX;
static int32_t x206 = INT32_MAX;
int32_t t44 = 66052500;
int16_t x227 = 236;
int16_t x228 = -1;
int32_t t46 = -203154428;
static int32_t t48 = 242;
volatile int8_t x243 = INT8_MIN;
volatile int64_t t49 = -3562LL;
uint8_t x245 = UINT8_MAX;
volatile int32_t x253 = 129;
uint32_t t52 = 2262032U;
int16_t x271 = -6077;
static volatile int32_t t56 = -560313289;
int64_t x274 = INT64_MIN;
static uint16_t x279 = 1U;
volatile uint64_t t58 = 41261020713076LLU;
static int64_t x285 = -1LL;
uint16_t x292 = 43U;
volatile uint8_t x302 = 69U;
int32_t x303 = INT32_MIN;
volatile int16_t x314 = INT16_MAX;
int8_t x321 = -1;
volatile int32_t t67 = 961;
uint16_t x328 = UINT16_MAX;
uint32_t x341 = UINT32_MAX;
static uint64_t x346 = 5044124076276230LLU;
volatile int8_t x347 = INT8_MIN;
uint64_t t72 = 5LLU;
int8_t x349 = INT8_MIN;
int32_t t73 = -176919;
uint16_t x360 = UINT16_MAX;
static volatile uint32_t t74 = 4114234U;
static volatile uint16_t x362 = UINT16_MAX;
static uint32_t x375 = UINT32_MAX;
uint32_t x381 = 608572475U;
uint64_t t79 = 159413149988724408LLU;
int32_t x398 = INT32_MIN;
volatile int32_t x402 = -1;
int16_t x409 = 10259;
static volatile uint64_t t82 = 82565LLU;
uint64_t t83 = 95121LLU;
uint64_t x426 = UINT64_MAX;
int16_t x428 = -1;
int32_t x433 = INT32_MIN;
int16_t x435 = -1;
static volatile uint64_t t87 = 1181407LLU;
uint8_t x445 = UINT8_MAX;
uint32_t x446 = 804794823U;
int32_t x452 = INT32_MIN;
int64_t t91 = -2923937LL;
uint64_t x457 = UINT64_MAX;
static uint32_t t94 = 22508U;
int32_t x466 = INT32_MAX;
volatile int64_t t95 = -464877397390151326LL;
uint8_t x469 = 48U;
int64_t x471 = -1LL;
volatile uint64_t x473 = 17156302690040LLU;
int32_t x474 = INT32_MIN;
volatile uint64_t t97 = 16024LLU;
int64_t t101 = -56353959116730LL;
int8_t x508 = -1;
static int8_t x509 = INT8_MAX;
static uint8_t x512 = 1U;
static uint8_t x528 = 3U;
volatile int64_t t109 = 2534945758LL;
int16_t x535 = 47;
static volatile int64_t t110 = -31755LL;
uint8_t x540 = 28U;
int16_t x541 = 0;
int32_t t112 = 220929;
uint8_t x549 = UINT8_MAX;
int32_t x552 = 28613371;
volatile uint32_t t113 = 31356469U;
static uint16_t x570 = UINT16_MAX;
volatile uint8_t x584 = 1U;
static volatile int32_t x587 = INT32_MAX;
volatile uint32_t x589 = 13127U;
uint32_t x593 = UINT32_MAX;
int8_t x598 = INT8_MIN;
static int32_t x599 = 93;
uint64_t x601 = UINT64_MAX;
int8_t x608 = 0;
int16_t x611 = -1;
int64_t t127 = 16633928675LL;
static int16_t x616 = INT16_MIN;
int32_t x624 = INT32_MIN;
int32_t x626 = INT32_MAX;
int32_t x636 = 69229;
int8_t x638 = INT8_MIN;
uint64_t x640 = 26LLU;
int32_t x643 = INT32_MIN;
volatile uint64_t t134 = 87076141213704459LLU;
static int16_t x645 = -1;
static int16_t x646 = INT16_MIN;
static int32_t x650 = INT32_MIN;
volatile uint16_t x651 = 237U;
uint64_t t137 = 1LLU;
volatile int64_t t139 = 780797LL;
int32_t x666 = -3294;
static int64_t x673 = INT64_MAX;
int32_t x676 = 5;
volatile uint8_t x677 = UINT8_MAX;
uint32_t t142 = 4981U;
volatile uint64_t x681 = 101LLU;
int32_t x685 = -172695824;
volatile int64_t x687 = -1LL;
static uint16_t x688 = UINT16_MAX;
volatile int64_t x693 = 856705553194LL;
int8_t x704 = INT8_MAX;
int64_t t147 = -325LL;
static uint16_t x710 = UINT16_MAX;
static int8_t x712 = INT8_MAX;
volatile uint64_t t148 = 15656515179LLU;
static volatile int8_t x714 = INT8_MAX;
static int32_t x718 = -1;
volatile uint64_t x721 = 8589515126310396LLU;
uint8_t x724 = 0U;
uint8_t x729 = 3U;
int32_t x732 = 1327891;
static int64_t t153 = -27LL;
static volatile int8_t x746 = -1;
int16_t x750 = 14794;
int8_t x762 = INT8_MIN;
static volatile int8_t x763 = INT8_MAX;
int32_t x764 = -1;
static int8_t x772 = INT8_MIN;
volatile int8_t x773 = INT8_MIN;
volatile uint32_t t163 = 1083U;
int16_t x785 = INT16_MIN;
uint64_t t164 = 837417936970820LLU;
uint16_t x790 = 10U;
uint64_t x804 = 517560041235684057LLU;
volatile uint64_t t170 = 9LLU;
uint8_t x836 = UINT8_MAX;
static uint16_t x847 = UINT16_MAX;
int16_t x854 = INT16_MAX;
static int64_t x865 = INT64_MAX;
volatile int16_t x866 = -96;
uint32_t x878 = UINT32_MAX;
volatile uint32_t t184 = 1U;
uint8_t x886 = UINT8_MAX;
static uint32_t x898 = 117241U;
uint32_t t188 = 1343058147U;
uint8_t x902 = 3U;
int64_t t189 = -46LL;
static int64_t x909 = INT64_MIN;
int64_t x913 = 18045638LL;
uint64_t t192 = 660933695860805LLU;
uint32_t t193 = 9U;
static volatile uint8_t x932 = 18U;
uint64_t t199 = 2812443885159327LLU;


void f0(void) {
    	static int64_t x5 = INT64_MAX;
	volatile int8_t x6 = 8;
	volatile int64_t x7 = -28986653878LL;
	volatile int16_t x8 = INT16_MIN;
	volatile int64_t t0 = -269428391695LL;

    t0 = (((x5/x6)-x7)-x8);

    if (t0 != 1152921533593533621LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x9 = UINT32_MAX;
	static int64_t x10 = 1230809644LL;
	uint16_t x11 = UINT16_MAX;
	int16_t x12 = INT16_MIN;
	int64_t t1 = -13154619LL;

    t1 = (((x9/x10)-x11)-x12);

    if (t1 != -32764LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	uint16_t x14 = 825U;
	int64_t x15 = -1LL;
	int32_t x16 = -7988324;

    t2 = (((x13/x14)-x15)-x16);

    if (t2 != 5385315LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MAX;
	uint16_t x19 = 1U;
	static volatile int64_t t3 = 60LL;

    t3 = (((x17/x18)-x19)-x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 71251U;
	static int8_t x22 = INT8_MAX;
	static volatile int64_t x23 = -1LL;
	int32_t x24 = INT32_MIN;

    t4 = (((x21/x22)-x23)-x24);

    if (t4 != 2147484210LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -164;
	uint16_t x31 = 414U;
	uint64_t t5 = 15LLU;

    t5 = (((x29/x30)-x31)-x32);

    if (t5 != 170675179417119LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x33 = -53606;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MIN;
	volatile int64_t t6 = 648502003LL;

    t6 = (((x33/x34)-x35)-x36);

    if (t6 != 2147483776LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x37 = 1U;
	volatile int8_t x38 = 27;
	int32_t x39 = -33;
	uint16_t x40 = 1U;
	static volatile int32_t t7 = 1488512;

    t7 = (((x37/x38)-x39)-x40);

    if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x41 = 157259252;
	uint8_t x42 = UINT8_MAX;
	static int8_t x44 = -1;
	uint32_t t8 = 475842U;

    t8 = (((x41/x42)-x43)-x44);

    if (t8 != 4205041086U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x47 = 764308835603LLU;
	static int32_t x48 = INT32_MAX;
	volatile uint64_t t9 = 1641541068238208087LLU;

    t9 = (((x45/x46)-x47)-x48);

    if (t9 != 18446743307253232366LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	int32_t x50 = INT32_MIN;
	static int8_t x51 = INT8_MAX;
	static int8_t x52 = -1;
	int32_t t10 = -4;

    t10 = (((x49/x50)-x51)-x52);

    if (t10 != -126) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x53 = INT64_MAX;
	volatile int8_t x54 = INT8_MIN;
	int32_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t11 = -15LL;

    t11 = (((x53/x54)-x55)-x56);

    if (t11 != -72057598332895229LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	static uint32_t x60 = UINT32_MAX;
	static int64_t t12 = -15620LL;

    t12 = (((x57/x58)-x59)-x60);

    if (t12 != -2147483519LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x61 = 187U;
	int32_t x62 = INT32_MIN;
	static uint8_t x63 = 11U;
	uint8_t x64 = 0U;
	int32_t t13 = 25728;

    t13 = (((x61/x62)-x63)-x64);

    if (t13 != -11) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -4093;
	static int16_t x66 = INT16_MAX;
	volatile int32_t x67 = 40;
	uint32_t t14 = 58U;

    t14 = (((x65/x66)-x67)-x68);

    if (t14 != 4294967257U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -426948952699LL;
	int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MAX;
	int32_t x72 = INT32_MIN;
	volatile int64_t t15 = -66LL;

    t15 = (((x69/x70)-x71)-x72);

    if (t15 != -9223372031371753467LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x73 = 48U;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = 374185858U;
	uint64_t x76 = 1791682973LLU;
	volatile uint64_t t16 = 37LLU;

    t16 = (((x73/x74)-x75)-x76);

    if (t16 != 2129098465LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x77 = 98763;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = -1;
	static uint8_t x80 = 3U;
	int32_t t17 = 1;

    t17 = (((x77/x78)-x79)-x80);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x82 = 2;
	uint16_t x84 = 19421U;
	volatile uint32_t t18 = 401U;

    t18 = (((x81/x82)-x83)-x84);

    if (t18 != 4294947874U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -1LL;
	int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	int8_t x88 = INT8_MAX;
	volatile int64_t t19 = -195335921872991LL;

    t19 = (((x85/x86)-x87)-x88);

    if (t19 != -126LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x93 = -1708414225331LL;
	int64_t x94 = INT64_MIN;
	volatile uint64_t t20 = 1973595860LLU;

    t20 = (((x93/x94)-x95)-x96);

    if (t20 != 32768LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = 2425352475200LLU;
	int16_t x98 = -1003;
	uint8_t x100 = 25U;
	static volatile uint64_t t21 = 6352682495679LLU;

    t21 = (((x97/x98)-x99)-x100);

    if (t21 != 18446744073709518824LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 47418211213510LL;
	uint32_t x102 = 11U;
	int32_t x103 = -1;

    t22 = (((x101/x102)-x103)-x104);

    if (t22 != 4310746473957LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x107 = -13849;
	static uint32_t x108 = 170U;
	uint32_t t23 = 50978U;

    t23 = (((x105/x106)-x107)-x108);

    if (t23 != 4294915440U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x111 = 58177755484316LLU;
	volatile uint64_t t24 = 1052999294610LLU;

    t24 = (((x109/x110)-x111)-x112);

    if (t24 != 18446685895954067254LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MAX;
	uint16_t x114 = UINT16_MAX;
	uint32_t x115 = 197274U;
	int8_t x116 = -11;
	static volatile uint32_t t25 = 145076U;

    t25 = (((x113/x114)-x115)-x116);

    if (t25 != 4294802801U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x117 = -731;
	static volatile int64_t x118 = INT64_MIN;
	int16_t x119 = -5540;
	int16_t x120 = 27;

    t26 = (((x117/x118)-x119)-x120);

    if (t26 != 5513LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x123 = INT32_MAX;
	int16_t x124 = 0;

    t27 = (((x121/x122)-x123)-x124);

    if (t27 != 1440042999601LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x125 = -1;
	int32_t x126 = -1;
	int8_t x127 = INT8_MIN;
	static volatile int32_t t28 = -5738756;

    t28 = (((x125/x126)-x127)-x128);

    if (t28 != 125) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	static int64_t x131 = -1LL;
	volatile int8_t x132 = INT8_MIN;
	volatile int64_t t29 = 60278147800LL;

    t29 = (((x129/x130)-x131)-x132);

    if (t29 != 281474976710785LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x138 = INT64_MIN;
	static volatile uint64_t t30 = 177939530655989LLU;

    t30 = (((x137/x138)-x139)-x140);

    if (t30 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = -193LL;
	int64_t x142 = INT64_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	volatile uint32_t x144 = 241840U;
	static volatile int64_t t31 = 59231793204181424LL;

    t31 = (((x141/x142)-x143)-x144);

    if (t31 != -307375LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = -1LL;
	static uint64_t x146 = UINT64_MAX;
	volatile uint32_t x147 = 3363U;
	uint64_t x148 = 205LLU;
	uint64_t t32 = 5LLU;

    t32 = (((x145/x146)-x147)-x148);

    if (t32 != 18446744073709548049LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MIN;
	volatile int32_t x151 = -13912128;
	int8_t x152 = INT8_MIN;
	volatile int32_t t33 = 34565443;

    t33 = (((x149/x150)-x151)-x152);

    if (t33 != 13912256) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x157 = 77U;
	uint32_t x158 = 1665U;
	static int64_t x159 = -1LL;
	volatile int64_t t34 = 115327902191520573LL;

    t34 = (((x157/x158)-x159)-x160);

    if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x161 = 26980LL;
	static int8_t x162 = -1;
	int64_t x163 = INT64_MIN;
	static volatile int64_t t35 = -36713341929LL;

    t35 = (((x161/x162)-x163)-x164);

    if (t35 != 9223372036849446967LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MAX;
	int8_t x170 = 3;
	int64_t x172 = 832432LL;
	static int64_t t36 = -38992368636LL;

    t36 = (((x169/x170)-x171)-x172);

    if (t36 != -841636LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x174 = 1;
	int8_t x175 = INT8_MAX;
	static int32_t x176 = -1414517;
	static int32_t t37 = 258203386;

    t37 = (((x173/x174)-x175)-x176);

    if (t37 != 1414408) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x181 = INT32_MIN;
	volatile int8_t x183 = INT8_MIN;
	uint8_t x184 = UINT8_MAX;
	int64_t t38 = 9984458LL;

    t38 = (((x181/x182)-x183)-x184);

    if (t38 != -127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x185 = 4U;
	int32_t x186 = 55484;
	static uint64_t x187 = UINT64_MAX;
	volatile uint64_t t39 = 205834330LLU;

    t39 = (((x185/x186)-x187)-x188);

    if (t39 != 18446744073706958873LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x193 = -10290;
	int8_t x194 = INT8_MIN;
	int8_t x195 = -30;
	uint8_t x196 = 2U;

    t40 = (((x193/x194)-x195)-x196);

    if (t40 != 108) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x197 = INT16_MAX;
	int16_t x198 = 10215;
	uint64_t x199 = 112267776LLU;
	uint32_t x200 = UINT32_MAX;
	uint64_t t41 = 1697LLU;

    t41 = (((x197/x198)-x199)-x200);

    if (t41 != 18446744069302316548LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x201 = UINT16_MAX;
	int64_t x203 = -1LL;
	int8_t x204 = -8;
	int64_t t42 = 145380LL;

    t42 = (((x201/x202)-x203)-x204);

    if (t42 != 9LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = -1;
	int8_t x207 = 0;
	int16_t x208 = INT16_MAX;
	volatile int32_t t43 = 17740;

    t43 = (((x205/x206)-x207)-x208);

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = 240;
	int32_t x210 = 32530;
	int8_t x211 = INT8_MIN;
	int16_t x212 = -13992;

    t44 = (((x209/x210)-x211)-x212);

    if (t44 != 14120) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = -1LL;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 3U;
	uint16_t x220 = UINT16_MAX;
	static int64_t t45 = -2679346LL;

    t45 = (((x217/x218)-x219)-x220);

    if (t45 != -65538LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x225 = 7015U;
	int16_t x226 = -1;

    t46 = (((x225/x226)-x227)-x228);

    if (t46 != -7250) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x233 = INT8_MAX;
	int32_t x234 = -521659917;
	uint8_t x235 = 53U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t47 = 3127912935860936LLU;

    t47 = (((x233/x234)-x235)-x236);

    if (t47 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x237 = 441483;
	volatile int32_t x238 = -1283;
	int8_t x239 = -1;
	int8_t x240 = -1;

    t48 = (((x237/x238)-x239)-x240);

    if (t48 != -342) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x241 = -6098291069LL;
	int32_t x242 = -1;
	uint32_t x244 = 2511884U;

    t49 = (((x241/x242)-x243)-x244);

    if (t49 != 6095779313LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x246 = INT16_MIN;
	volatile int64_t x247 = -464419071LL;
	int32_t x248 = INT32_MAX;
	volatile int64_t t50 = 834273740681318LL;

    t50 = (((x245/x246)-x247)-x248);

    if (t50 != -1683064576LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MAX;
	int32_t x251 = -1;
	volatile int64_t x252 = -2145672196LL;
	volatile int64_t t51 = -3977950964510277LL;

    t51 = (((x249/x250)-x251)-x252);

    if (t51 != -281481421235203LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x254 = INT8_MAX;
	uint32_t x255 = 33644U;
	int8_t x256 = INT8_MIN;

    t52 = (((x253/x254)-x255)-x256);

    if (t52 != 4294933781U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x257 = -1;
	static int8_t x258 = INT8_MIN;
	static int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t53 = 730724800;

    t53 = (((x257/x258)-x259)-x260);

    if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	volatile uint16_t x263 = 7U;
	volatile uint32_t x264 = 147591883U;
	static uint32_t t54 = 1U;

    t54 = (((x261/x262)-x263)-x264);

    if (t54 != 4147440942U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x265 = INT64_MIN;
	static int16_t x266 = 866;
	uint64_t x267 = 620702LLU;
	int32_t x268 = INT32_MIN;
	uint64_t t55 = 1LLU;

    t55 = (((x265/x266)-x267)-x268);

    if (t55 != 18436093530779215052LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = 0;
	uint16_t x270 = UINT16_MAX;
	int16_t x272 = 1;

    t56 = (((x269/x270)-x271)-x272);

    if (t56 != 6076) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x273 = INT64_MIN;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = 31U;
	int64_t t57 = 167477605126091LL;

    t57 = (((x273/x274)-x275)-x276);

    if (t57 != 98LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x277 = -1;
	uint64_t x278 = 4286944949614152163LLU;
	int64_t x280 = -19856790883366379LL;

    t58 = (((x277/x278)-x279)-x280);

    if (t58 != 19856790883366382LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x281 = 10U;
	static int32_t x282 = INT32_MAX;
	int16_t x283 = 1;
	static int8_t x284 = INT8_MIN;
	int32_t t59 = 43;

    t59 = (((x281/x282)-x283)-x284);

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x286 = 45U;
	int16_t x287 = -7679;
	int16_t x288 = -1;
	int64_t t60 = -8LL;

    t60 = (((x285/x286)-x287)-x288);

    if (t60 != 7680LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint64_t x290 = 5931694287053432585LLU;
	static int8_t x291 = INT8_MIN;
	static volatile uint64_t t61 = 290277777LLU;

    t61 = (((x289/x290)-x291)-x292);

    if (t61 != 88LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x293 = UINT64_MAX;
	int64_t x294 = 2191582828763LL;
	int32_t x295 = -1;
	int16_t x296 = INT16_MAX;
	uint64_t t62 = 34129570873075503LLU;

    t62 = (((x293/x294)-x295)-x296);

    if (t62 != 8384321LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = -1;
	int16_t x298 = -59;
	int16_t x299 = 231;
	int16_t x300 = -1;
	static int32_t t63 = 176;

    t63 = (((x297/x298)-x299)-x300);

    if (t63 != -230) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x301 = INT8_MIN;
	static uint32_t x304 = UINT32_MAX;
	uint32_t t64 = 55054028U;

    t64 = (((x301/x302)-x303)-x304);

    if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x313 = 4242612160507LLU;
	int8_t x315 = -1;
	uint16_t x316 = UINT16_MAX;
	uint64_t t65 = 12LLU;

    t65 = (((x313/x314)-x315)-x316);

    if (t65 != 129412665LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x317 = 25U;
	int8_t x318 = -24;
	uint64_t x319 = 111207101LLU;
	int32_t x320 = 0;
	volatile uint64_t t66 = 4870LLU;

    t66 = (((x317/x318)-x319)-x320);

    if (t66 != 18446744073598344514LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x322 = INT16_MAX;
	int8_t x323 = -1;
	static volatile int16_t x324 = INT16_MAX;

    t67 = (((x321/x322)-x323)-x324);

    if (t67 != -32766) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = -1;
	int64_t x326 = -6844516162240LL;
	int16_t x327 = INT16_MIN;
	int64_t t68 = 283910456997718LL;

    t68 = (((x325/x326)-x327)-x328);

    if (t68 != -32767LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x333 = 4;
	volatile int32_t x334 = -47804;
	volatile int8_t x335 = INT8_MAX;
	uint64_t x336 = 5187668344724LLU;
	static uint64_t t69 = 133886020448367LLU;

    t69 = (((x333/x334)-x335)-x336);

    if (t69 != 18446738886041206765LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x337 = INT8_MAX;
	int64_t x338 = -188460044977355491LL;
	uint16_t x339 = UINT16_MAX;
	static volatile int8_t x340 = INT8_MIN;
	int64_t t70 = 87000540752122568LL;

    t70 = (((x337/x338)-x339)-x340);

    if (t70 != -65407LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x342 = 8079514404134040LLU;
	int8_t x343 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	volatile uint64_t t71 = 516944LLU;

    t71 = (((x341/x342)-x343)-x344);

    if (t71 != 256LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x345 = INT16_MAX;
	uint32_t x348 = 6864U;

    t72 = (((x345/x346)-x347)-x348);

    if (t72 != 18446744073709544880LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	static int16_t x352 = -1;

    t73 = (((x349/x350)-x351)-x352);

    if (t73 != -126) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x357 = 97005U;
	int8_t x358 = INT8_MIN;
	int32_t x359 = 0;

    t74 = (((x357/x358)-x359)-x360);

    if (t74 != 4294901761U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x361 = -1067;
	volatile int16_t x363 = INT16_MAX;
	int8_t x364 = -1;
	volatile int32_t t75 = -2794;

    t75 = (((x361/x362)-x363)-x364);

    if (t75 != -32766) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x373 = 963977LLU;
	int64_t x374 = -1LL;
	static volatile int8_t x376 = -1;
	static volatile uint64_t t76 = 101726LLU;

    t76 = (((x373/x374)-x375)-x376);

    if (t76 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = 4U;
	uint16_t x380 = UINT16_MAX;
	int32_t t77 = -729;

    t77 = (((x377/x378)-x379)-x380);

    if (t77 != -66050) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x382 = -1LL;
	uint64_t x383 = 26295138322754429LLU;
	int8_t x384 = INT8_MIN;
	uint64_t t78 = 253999672LLU;

    t78 = (((x381/x382)-x383)-x384);

    if (t78 != 18420448934778224840LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x393 = 22689832LLU;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MIN;

    t79 = (((x393/x394)-x395)-x396);

    if (t79 != 4295056275LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x397 = 22590182LLU;
	uint8_t x399 = 30U;
	static int16_t x400 = INT16_MIN;
	volatile uint64_t t80 = 2222476485250995568LLU;

    t80 = (((x397/x398)-x399)-x400);

    if (t80 != 32738LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x401 = -1LL;
	volatile uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = -463;
	volatile int64_t t81 = 136458352LL;

    t81 = (((x401/x402)-x403)-x404);

    if (t81 != 209LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x410 = 2282U;
	static uint64_t x411 = 17476227165737136LLU;
	uint32_t x412 = 4415410U;

    t82 = (((x409/x410)-x411)-x412);

    if (t82 != 18429267846539399074LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x413 = -1;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 28964660199LLU;
	int16_t x416 = -1;

    t83 = (((x413/x414)-x415)-x416);

    if (t83 != 18446744044744891418LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x421 = INT16_MIN;
	static int32_t x422 = -1;
	volatile uint64_t x423 = 12LLU;
	int64_t x424 = -22447LL;
	uint64_t t84 = 7401932654958018378LLU;

    t84 = (((x421/x422)-x423)-x424);

    if (t84 != 55203LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x425 = INT16_MAX;
	static volatile int16_t x427 = -1160;
	uint64_t t85 = 13734666318775648LLU;

    t85 = (((x425/x426)-x427)-x428);

    if (t85 != 1161LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x429 = 3U;
	uint8_t x430 = 2U;
	int16_t x431 = -4034;
	static uint16_t x432 = UINT16_MAX;
	uint32_t t86 = 51U;

    t86 = (((x429/x430)-x431)-x432);

    if (t86 != 4294905796U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x434 = 17;
	volatile uint64_t x436 = 824854120871848700LLU;

    t87 = (((x433/x434)-x435)-x436);

    if (t87 != 17621889952711380350LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x437 = -1LL;
	static int64_t x438 = -1LL;
	volatile uint16_t x439 = 978U;
	uint32_t x440 = 23U;
	int64_t t88 = 751879089695351120LL;

    t88 = (((x437/x438)-x439)-x440);

    if (t88 != -1000LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x441 = 10U;
	int32_t x442 = -16948;
	static int8_t x443 = 4;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t89 = 132181;

    t89 = (((x441/x442)-x443)-x444);

    if (t89 != -65539) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x447 = UINT32_MAX;
	volatile int8_t x448 = 61;
	uint32_t t90 = 59259551U;

    t90 = (((x445/x446)-x447)-x448);

    if (t90 != 4294967236U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MIN;
	int8_t x451 = -1;

    t91 = (((x449/x450)-x451)-x452);

    if (t91 != 2147483649LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x453 = 31U;
	int8_t x454 = INT8_MIN;
	int8_t x455 = -1;
	int16_t x456 = -1;
	volatile uint32_t t92 = 957833164U;

    t92 = (((x453/x454)-x455)-x456);

    if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x458 = INT16_MIN;
	uint64_t x459 = 3443660LLU;
	int32_t x460 = INT32_MAX;
	volatile uint64_t t93 = 4091216448390LLU;

    t93 = (((x457/x458)-x459)-x460);

    if (t93 != 18446744071558624310LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = -1;
	volatile int32_t x463 = 284885;
	uint32_t x464 = 338U;

    t94 = (((x461/x462)-x463)-x464);

    if (t94 != 4294682201U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x465 = 123313995LL;
	volatile uint8_t x467 = UINT8_MAX;
	volatile uint32_t x468 = UINT32_MAX;

    t95 = (((x465/x466)-x467)-x468);

    if (t95 != -4294967550LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x470 = -2616;
	int32_t x472 = 229316496;
	volatile int64_t t96 = -1152402631LL;

    t96 = (((x469/x470)-x471)-x472);

    if (t96 != -229316495LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x475 = UINT8_MAX;
	int64_t x476 = INT64_MIN;

    t97 = (((x473/x474)-x475)-x476);

    if (t97 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x477 = 48U;
	uint16_t x478 = 12U;
	uint16_t x479 = 607U;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t98 = 193;

    t98 = (((x477/x478)-x479)-x480);

    if (t98 != -475) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x485 = UINT64_MAX;
	uint32_t x486 = 256935761U;
	static volatile uint16_t x487 = 6742U;
	volatile uint32_t x488 = 5733U;
	uint64_t t99 = 158063591LLU;

    t99 = (((x485/x486)-x487)-x488);

    if (t99 != 71795147536LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x489 = -1;
	int32_t x490 = -1;
	int16_t x491 = -456;
	uint32_t x492 = 8324465U;
	uint32_t t100 = 923892U;

    t100 = (((x489/x490)-x491)-x492);

    if (t100 != 4286643288U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x493 = INT32_MIN;
	volatile int16_t x494 = INT16_MIN;
	int64_t x495 = -6872053417LL;
	int16_t x496 = INT16_MIN;

    t101 = (((x493/x494)-x495)-x496);

    if (t101 != 6872151721LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x497 = INT64_MIN;
	int32_t x498 = INT32_MAX;
	int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MIN;
	volatile int64_t t102 = 1LL;

    t102 = (((x497/x498)-x499)-x500);

    if (t102 != -2147450882LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x501 = -2;
	static uint16_t x502 = 428U;
	volatile int32_t x503 = INT32_MAX;
	int16_t x504 = -1;
	static volatile int32_t t103 = 139092;

    t103 = (((x501/x502)-x503)-x504);

    if (t103 != -2147483646) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x505 = INT16_MAX;
	int64_t x506 = INT64_MIN;
	uint16_t x507 = UINT16_MAX;
	volatile int64_t t104 = -81199232837911432LL;

    t104 = (((x505/x506)-x507)-x508);

    if (t104 != -65534LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x510 = UINT64_MAX;
	volatile int16_t x511 = -14;
	static volatile uint64_t t105 = 1780692221LLU;

    t105 = (((x509/x510)-x511)-x512);

    if (t105 != 13LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x513 = INT64_MAX;
	volatile int8_t x514 = INT8_MIN;
	int32_t x515 = -112750;
	uint8_t x516 = 25U;
	volatile int64_t t106 = 6556047LL;

    t106 = (((x513/x514)-x515)-x516);

    if (t106 != -72057594037815210LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x521 = 24U;
	int16_t x522 = INT16_MIN;
	static int8_t x523 = 3;
	static uint32_t x524 = UINT32_MAX;
	volatile uint32_t t107 = 52540U;

    t107 = (((x521/x522)-x523)-x524);

    if (t107 != 4294967294U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x525 = 32687U;
	uint16_t x526 = 1U;
	static int64_t x527 = 274LL;
	static int64_t t108 = 2162730LL;

    t108 = (((x525/x526)-x527)-x528);

    if (t108 != 32410LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x529 = -32469759779257614LL;
	int64_t x530 = -1LL;
	static int32_t x531 = -1;
	int16_t x532 = INT16_MIN;

    t109 = (((x529/x530)-x531)-x532);

    if (t109 != 32469759779290383LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x533 = UINT32_MAX;
	int16_t x534 = INT16_MIN;
	int64_t x536 = -1LL;

    t110 = (((x533/x534)-x535)-x536);

    if (t110 != 4294967251LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x537 = 4U;
	uint64_t x538 = 1147640727371617743LLU;
	int32_t x539 = INT32_MIN;
	uint64_t t111 = 2747124LLU;

    t111 = (((x537/x538)-x539)-x540);

    if (t111 != 2147483620LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x542 = INT16_MAX;
	static uint16_t x543 = 249U;
	uint16_t x544 = 5572U;

    t112 = (((x541/x542)-x543)-x544);

    if (t112 != -5821) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x550 = 1U;
	uint32_t x551 = 12259U;

    t113 = (((x549/x550)-x551)-x552);

    if (t113 != 4266341921U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x557 = -5784LL;
	int16_t x558 = -1;
	int64_t x559 = -1LL;
	uint16_t x560 = UINT16_MAX;
	volatile int64_t t114 = 30LL;

    t114 = (((x557/x558)-x559)-x560);

    if (t114 != -59750LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x561 = -56;
	uint64_t x562 = 1030289642809LLU;
	int32_t x563 = INT32_MAX;
	uint16_t x564 = 3U;
	volatile uint64_t t115 = 633LLU;

    t115 = (((x561/x562)-x563)-x564);

    if (t115 != 18446744071579972391LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int16_t x565 = -1;
	static int8_t x566 = -1;
	uint16_t x567 = 3U;
	uint32_t x568 = 8U;
	static uint32_t t116 = 7889U;

    t116 = (((x565/x566)-x567)-x568);

    if (t116 != 4294967286U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x569 = INT64_MIN;
	static int8_t x571 = -1;
	int32_t x572 = INT32_MIN;
	static volatile int64_t t117 = 109630LL;

    t117 = (((x569/x570)-x571)-x572);

    if (t117 != -140737488388095LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x573 = 2;
	int64_t x574 = INT64_MIN;
	volatile int32_t x575 = -1;
	int8_t x576 = 8;
	static volatile int64_t t118 = -74044274LL;

    t118 = (((x573/x574)-x575)-x576);

    if (t118 != -7LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x577 = INT64_MIN;
	static int32_t x578 = INT32_MAX;
	int64_t x579 = 12952415LL;
	static volatile int8_t x580 = INT8_MAX;
	volatile int64_t t119 = 143LL;

    t119 = (((x577/x578)-x579)-x580);

    if (t119 != -4307919840LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x581 = -1;
	uint64_t x582 = 63427417162969LLU;
	static int32_t x583 = INT32_MIN;
	uint64_t t120 = 13LLU;

    t120 = (((x581/x582)-x583)-x584);

    if (t120 != 2147774479LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x585 = 9703;
	static uint16_t x586 = 2628U;
	int64_t x588 = -1LL;
	int64_t t121 = 136LL;

    t121 = (((x585/x586)-x587)-x588);

    if (t121 != -2147483643LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x590 = 570865LLU;
	volatile int64_t x591 = -1LL;
	static uint8_t x592 = 9U;
	volatile uint64_t t122 = 5839914423069LLU;

    t122 = (((x589/x590)-x591)-x592);

    if (t122 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x594 = UINT32_MAX;
	int8_t x595 = -5;
	int32_t x596 = INT32_MIN;
	static volatile uint32_t t123 = 11114156U;

    t123 = (((x593/x594)-x595)-x596);

    if (t123 != 2147483654U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x597 = UINT8_MAX;
	volatile int64_t x600 = -1LL;
	volatile int64_t t124 = 4LL;

    t124 = (((x597/x598)-x599)-x600);

    if (t124 != -93LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x602 = INT32_MIN;
	uint64_t x603 = 2072532LLU;
	static int32_t x604 = INT32_MIN;
	uint64_t t125 = 16533485686500534LLU;

    t125 = (((x601/x602)-x603)-x604);

    if (t125 != 2145411117LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x605 = INT16_MIN;
	uint8_t x606 = UINT8_MAX;
	static int32_t x607 = INT32_MIN;
	volatile int32_t t126 = -10;

    t126 = (((x605/x606)-x607)-x608);

    if (t126 != 2147483520) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x609 = UINT8_MAX;
	uint8_t x610 = UINT8_MAX;
	int64_t x612 = -1LL;

    t127 = (((x609/x610)-x611)-x612);

    if (t127 != 3LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x613 = 9349U;
	volatile int16_t x614 = 1;
	uint8_t x615 = UINT8_MAX;
	volatile int32_t t128 = -1;

    t128 = (((x613/x614)-x615)-x616);

    if (t128 != 41862) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x617 = 31734U;
	int8_t x618 = -1;
	static volatile int16_t x619 = -1;
	int8_t x620 = -1;
	volatile int32_t t129 = -208;

    t129 = (((x617/x618)-x619)-x620);

    if (t129 != -31732) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x621 = 360936306LLU;
	uint64_t x622 = 272439520915584LLU;
	volatile int16_t x623 = INT16_MIN;
	uint64_t t130 = 12253891415731LLU;

    t130 = (((x621/x622)-x623)-x624);

    if (t130 != 2147516416LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	uint32_t x627 = UINT32_MAX;
	int8_t x628 = INT8_MIN;
	volatile uint32_t t131 = 350196U;

    t131 = (((x625/x626)-x627)-x628);

    if (t131 != 129U) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x633 = 2U;
	uint32_t x634 = 32U;
	static volatile int32_t x635 = 67384;
	static volatile uint32_t t132 = 18U;

    t132 = (((x633/x634)-x635)-x636);

    if (t132 != 4294830683U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x637 = INT8_MIN;
	int16_t x639 = -1;
	static volatile uint64_t t133 = 109066147LLU;

    t133 = (((x637/x638)-x639)-x640);

    if (t133 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x641 = 5;
	uint64_t x642 = UINT64_MAX;
	static volatile uint32_t x644 = 2536470U;

    t134 = (((x641/x642)-x643)-x644);

    if (t134 != 2144947178LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x647 = -1;
	static int8_t x648 = INT8_MAX;
	static int32_t t135 = 37198;

    t135 = (((x645/x646)-x647)-x648);

    if (t135 != -126) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x649 = 4386086;
	volatile int8_t x652 = INT8_MIN;
	static int32_t t136 = 7954;

    t136 = (((x649/x650)-x651)-x652);

    if (t136 != -109) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x653 = -1;
	static int64_t x654 = INT64_MIN;
	static int32_t x655 = -8;
	uint64_t x656 = 3061620943907LLU;

    t137 = (((x653/x654)-x655)-x656);

    if (t137 != 18446741012088607717LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x658 = -8176239642561845LL;
	int32_t x659 = -1;
	int32_t x660 = -67153;
	volatile int64_t t138 = -39398551LL;

    t138 = (((x657/x658)-x659)-x660);

    if (t138 != 67154LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x661 = UINT32_MAX;
	int16_t x662 = INT16_MIN;
	volatile int64_t x663 = INT64_MAX;
	int32_t x664 = -1;

    t139 = (((x661/x662)-x663)-x664);

    if (t139 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x665 = 1829U;
	volatile uint32_t x667 = 26675224U;
	int32_t x668 = INT32_MIN;
	uint32_t t140 = 47U;

    t140 = (((x665/x666)-x667)-x668);

    if (t140 != 2120808424U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x674 = UINT16_MAX;
	uint16_t x675 = UINT16_MAX;
	int64_t t141 = 2048259LL;

    t141 = (((x673/x674)-x675)-x676);

    if (t141 != 140739635806204LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x678 = -1;
	uint32_t x679 = UINT32_MAX;
	uint8_t x680 = UINT8_MAX;

    t142 = (((x677/x678)-x679)-x680);

    if (t142 != 4294966787U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x682 = UINT16_MAX;
	static int16_t x683 = INT16_MIN;
	uint64_t x684 = 150744LLU;
	uint64_t t143 = 1172291038LLU;

    t143 = (((x681/x682)-x683)-x684);

    if (t143 != 18446744073709433640LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x686 = UINT16_MAX;
	int64_t t144 = -47LL;

    t144 = (((x685/x686)-x687)-x688);

    if (t144 != -68169LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x689 = INT16_MIN;
	volatile int16_t x690 = 10989;
	uint16_t x691 = 4U;
	static uint8_t x692 = UINT8_MAX;
	int32_t t145 = -1;

    t145 = (((x689/x690)-x691)-x692);

    if (t145 != -261) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x694 = -1;
	uint8_t x695 = 2U;
	volatile int64_t x696 = -1LL;
	volatile int64_t t146 = -236133LL;

    t146 = (((x693/x694)-x695)-x696);

    if (t146 != -856705553195LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x701 = 656355789062944LL;
	volatile int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MAX;

    t147 = (((x701/x702)-x703)-x704);

    if (t147 != -2147789413LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x709 = 0LLU;
	static int64_t x711 = INT64_MAX;

    t148 = (((x709/x710)-x711)-x712);

    if (t148 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x713 = UINT64_MAX;
	static int32_t x715 = -5602876;
	int32_t x716 = INT32_MIN;
	uint64_t t149 = 2144456519378838246LLU;

    t149 = (((x713/x714)-x715)-x716);

    if (t149 != 145249955489382206LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	static volatile int64_t x719 = INT64_MIN;
	volatile int64_t x720 = 250LL;
	volatile uint64_t t150 = 168654801LLU;

    t150 = (((x717/x718)-x719)-x720);

    if (t150 != 9223372036854775559LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x722 = INT64_MIN;
	static uint64_t x723 = 2104746070LLU;
	static volatile uint64_t t151 = 0LLU;

    t151 = (((x721/x722)-x723)-x724);

    if (t151 != 18446744071604805546LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = -2;
	int8_t x726 = INT8_MIN;
	uint64_t x727 = 177837LLU;
	int16_t x728 = 1453;
	uint64_t t152 = 1973871625466LLU;

    t152 = (((x725/x726)-x727)-x728);

    if (t152 != 18446744073709372326LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x730 = -13619186585870LL;
	int32_t x731 = 1073431;

    t153 = (((x729/x730)-x731)-x732);

    if (t153 != -2401322LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x733 = -1;
	static int16_t x734 = INT16_MAX;
	uint32_t x735 = 684U;
	static int16_t x736 = INT16_MIN;
	uint32_t t154 = 46716U;

    t154 = (((x733/x734)-x735)-x736);

    if (t154 != 32084U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x741 = 22211LLU;
	static int16_t x742 = INT16_MIN;
	int32_t x743 = INT32_MIN;
	int16_t x744 = -1;
	static volatile uint64_t t155 = 643418644LLU;

    t155 = (((x741/x742)-x743)-x744);

    if (t155 != 2147483649LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x745 = 341LLU;
	static uint16_t x747 = 2U;
	static int8_t x748 = INT8_MAX;
	static volatile uint64_t t156 = 120074903487704LLU;

    t156 = (((x745/x746)-x747)-x748);

    if (t156 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x749 = -1;
	uint8_t x751 = 13U;
	volatile uint64_t x752 = 1249992819505510506LLU;
	static uint64_t t157 = 14898500910LLU;

    t157 = (((x749/x750)-x751)-x752);

    if (t157 != 17196751254204041097LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x754 = 5389;
	uint32_t x755 = 157U;
	int16_t x756 = INT16_MIN;
	static volatile uint32_t t158 = 162984U;

    t158 = (((x753/x754)-x755)-x756);

    if (t158 != 32611U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x761 = -1;
	volatile int32_t t159 = 0;

    t159 = (((x761/x762)-x763)-x764);

    if (t159 != -126) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x769 = 132950429768287LLU;
	uint16_t x770 = UINT16_MAX;
	uint16_t x771 = 1U;
	volatile uint64_t t160 = 7977621370143953LLU;

    t160 = (((x769/x770)-x771)-x772);

    if (t160 != 2028693646LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x774 = -6;
	static int16_t x775 = INT16_MIN;
	int16_t x776 = -3510;
	static volatile int32_t t161 = -1;

    t161 = (((x773/x774)-x775)-x776);

    if (t161 != 36299) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x777 = -2;
	int16_t x778 = 3120;
	int16_t x779 = 2831;
	static volatile uint16_t x780 = 1U;
	static int32_t t162 = -142;

    t162 = (((x777/x778)-x779)-x780);

    if (t162 != -2832) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x781 = -49;
	uint32_t x782 = UINT32_MAX;
	int32_t x783 = INT32_MIN;
	int16_t x784 = INT16_MIN;

    t163 = (((x781/x782)-x783)-x784);

    if (t163 != 2147516416U) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x786 = -1;
	volatile uint64_t x787 = 489585LLU;
	volatile uint64_t x788 = 114LLU;

    t164 = (((x785/x786)-x787)-x788);

    if (t164 != 18446744073709094685LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x789 = 1;
	int8_t x791 = INT8_MIN;
	volatile uint8_t x792 = 0U;
	int32_t t165 = 5110;

    t165 = (((x789/x790)-x791)-x792);

    if (t165 != 128) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x793 = 208631736U;
	uint64_t x794 = 290119LLU;
	int64_t x795 = 357012552969720LL;
	volatile uint16_t x796 = 117U;
	uint64_t t166 = 996LLU;

    t166 = (((x793/x794)-x795)-x796);

    if (t166 != 18446387061156582498LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x797 = UINT16_MAX;
	int8_t x798 = INT8_MAX;
	uint32_t x799 = 69449U;
	int16_t x800 = INT16_MIN;
	static uint32_t t167 = 147297U;

    t167 = (((x797/x798)-x799)-x800);

    if (t167 != 4294931131U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x801 = INT8_MAX;
	int8_t x802 = INT8_MAX;
	uint16_t x803 = 123U;
	uint64_t t168 = 124388008528LLU;

    t168 = (((x801/x802)-x803)-x804);

    if (t168 != 17929184032473867437LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x809 = -1;
	uint64_t x810 = 4526108976391203524LLU;
	static volatile int32_t x811 = -67083;
	volatile uint16_t x812 = 2436U;
	volatile uint64_t t169 = 87128379942LLU;

    t169 = (((x809/x810)-x811)-x812);

    if (t169 != 64651LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x813 = INT16_MIN;
	volatile uint64_t x814 = 13023LLU;
	int8_t x815 = 6;
	uint32_t x816 = 9315U;

    t170 = (((x813/x814)-x815)-x816);

    if (t170 != 1416474243537443LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x817 = -332285;
	volatile int16_t x818 = 122;
	uint16_t x819 = 13U;
	static volatile int32_t x820 = -1;
	int32_t t171 = 74362950;

    t171 = (((x817/x818)-x819)-x820);

    if (t171 != -2735) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x821 = INT8_MAX;
	int32_t x822 = INT32_MIN;
	static uint64_t x823 = 17001426LLU;
	int64_t x824 = 384LL;
	uint64_t t172 = 29775676672LLU;

    t172 = (((x821/x822)-x823)-x824);

    if (t172 != 18446744073692549806LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x825 = 7874U;
	uint16_t x826 = 40U;
	uint32_t x827 = UINT32_MAX;
	volatile int8_t x828 = 0;
	volatile uint32_t t173 = 7U;

    t173 = (((x825/x826)-x827)-x828);

    if (t173 != 197U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x829 = 167U;
	int64_t x830 = INT64_MIN;
	int8_t x831 = INT8_MIN;
	uint16_t x832 = UINT16_MAX;
	int64_t t174 = -177077669594817LL;

    t174 = (((x829/x830)-x831)-x832);

    if (t174 != -65407LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x833 = INT8_MIN;
	static volatile uint64_t x834 = 96912LLU;
	int64_t x835 = INT64_MIN;
	uint64_t t175 = 13827191LLU;

    t175 = (((x833/x834)-x835)-x836);

    if (t175 != 9223562382158491393LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x837 = 23477U;
	int8_t x838 = 3;
	static int64_t x839 = 1964617863594LL;
	uint64_t x840 = 261660002554966107LLU;
	static uint64_t t176 = 1LLU;

    t176 = (((x837/x838)-x839)-x840);

    if (t176 != 18185082106536729740LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x845 = -1;
	int32_t x846 = -1;
	int64_t x848 = -372189572798LL;
	int64_t t177 = 21990616LL;

    t177 = (((x845/x846)-x847)-x848);

    if (t177 != 372189507264LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x849 = -12;
	int64_t x850 = INT64_MIN;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = INT64_MIN;
	uint64_t t178 = 1287967585479229LLU;

    t178 = (((x849/x850)-x851)-x852);

    if (t178 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x853 = 0U;
	volatile uint16_t x855 = 360U;
	uint64_t x856 = UINT64_MAX;
	volatile uint64_t t179 = 1553064840003433076LLU;

    t179 = (((x853/x854)-x855)-x856);

    if (t179 != 18446744073709551257LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x861 = UINT32_MAX;
	uint8_t x862 = UINT8_MAX;
	uint32_t x863 = UINT32_MAX;
	static volatile int32_t x864 = -1;
	static volatile uint32_t t180 = 219U;

    t180 = (((x861/x862)-x863)-x864);

    if (t180 != 16843011U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x867 = 1761;
	uint16_t x868 = 2U;
	int64_t t181 = -686073772LL;

    t181 = (((x865/x866)-x867)-x868);

    if (t181 != -96076792050572344LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x869 = INT64_MIN;
	volatile int32_t x870 = 851436;
	uint8_t x871 = 13U;
	int8_t x872 = -6;
	int64_t t182 = -9LL;

    t182 = (((x869/x870)-x871)-x872);

    if (t182 != -10832724992672LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x873 = 24U;
	uint64_t x874 = 111398980464LLU;
	uint16_t x875 = 2U;
	uint8_t x876 = UINT8_MAX;
	uint64_t t183 = 137224313863256241LLU;

    t183 = (((x873/x874)-x875)-x876);

    if (t183 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x877 = 0;
	int16_t x879 = INT16_MAX;
	static int16_t x880 = INT16_MIN;

    t184 = (((x877/x878)-x879)-x880);

    if (t184 != 1U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x881 = 651444U;
	int8_t x882 = INT8_MAX;
	static int32_t x883 = INT32_MIN;
	int16_t x884 = INT16_MIN;
	volatile uint32_t t185 = 1773U;

    t185 = (((x881/x882)-x883)-x884);

    if (t185 != 2147521545U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x885 = INT64_MIN;
	static int16_t x887 = INT16_MAX;
	int8_t x888 = -1;
	volatile int64_t t186 = 227364488794452166LL;

    t186 = (((x885/x886)-x887)-x888);

    if (t186 != -36170086419071102LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x889 = 1;
	volatile uint16_t x890 = 30247U;
	int16_t x891 = INT16_MIN;
	uint16_t x892 = UINT16_MAX;
	static int32_t t187 = -1;

    t187 = (((x889/x890)-x891)-x892);

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x897 = -8;
	static int16_t x899 = INT16_MIN;
	static volatile int16_t x900 = INT16_MAX;

    t188 = (((x897/x898)-x899)-x900);

    if (t188 != 36634U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x901 = INT64_MIN;
	static volatile uint32_t x903 = 353396U;
	int8_t x904 = INT8_MAX;

    t189 = (((x901/x902)-x903)-x904);

    if (t189 != -3074457345618612125LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x905 = -261561571314310LL;
	int16_t x906 = -1;
	uint16_t x907 = UINT16_MAX;
	uint64_t x908 = 34161638499165036LLU;
	static volatile uint64_t t190 = 7638576656LLU;

    t190 = (((x905/x906)-x907)-x908);

    if (t190 != 18412843996781635355LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x910 = -102;
	volatile int8_t x911 = INT8_MAX;
	int8_t x912 = -1;
	volatile int64_t t191 = 181485533953LL;

    t191 = (((x909/x910)-x911)-x912);

    if (t191 != 90425216047595715LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x914 = UINT64_MAX;
	int16_t x915 = INT16_MAX;
	volatile int32_t x916 = 654757306;

    t192 = (((x913/x914)-x915)-x916);

    if (t192 != 18446744073054761543LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x917 = INT16_MAX;
	static int16_t x918 = -537;
	volatile uint16_t x919 = 1U;
	uint32_t x920 = 1U;

    t193 = (((x917/x918)-x919)-x920);

    if (t193 != 4294967233U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x921 = INT16_MIN;
	volatile int16_t x922 = INT16_MIN;
	uint8_t x923 = UINT8_MAX;
	int8_t x924 = 24;
	int32_t t194 = 46105;

    t194 = (((x921/x922)-x923)-x924);

    if (t194 != -278) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x925 = INT16_MIN;
	int64_t x926 = -19139568912884LL;
	uint8_t x927 = UINT8_MAX;
	uint8_t x928 = UINT8_MAX;
	volatile int64_t t195 = 13LL;

    t195 = (((x925/x926)-x927)-x928);

    if (t195 != -510LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x929 = INT8_MIN;
	static int32_t x930 = -21;
	int64_t x931 = 19718749LL;
	volatile int64_t t196 = 314760375421078LL;

    t196 = (((x929/x930)-x931)-x932);

    if (t196 != -19718761LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x933 = INT32_MIN;
	int16_t x934 = INT16_MAX;
	static int16_t x935 = INT16_MAX;
	uint16_t x936 = 3145U;
	int32_t t197 = 90492115;

    t197 = (((x933/x934)-x935)-x936);

    if (t197 != -101450) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x937 = 73U;
	int32_t x938 = INT32_MIN;
	static volatile uint64_t x939 = UINT64_MAX;
	uint64_t x940 = 45250048LLU;
	volatile uint64_t t198 = 8886015814LLU;

    t198 = (((x937/x938)-x939)-x940);

    if (t198 != 18446744073664301569LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x941 = -9;
	int64_t x942 = -1LL;
	int32_t x943 = -1;
	uint64_t x944 = 62081554LLU;

    t199 = (((x941/x942)-x943)-x944);

    if (t199 != 18446744073647470072LLU) { NG(); } else { ; }
	
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

