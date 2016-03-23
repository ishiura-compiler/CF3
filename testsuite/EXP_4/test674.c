
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

uint8_t x1 = 0U;
int32_t x2 = -1;
volatile uint16_t x7 = UINT16_MAX;
int16_t x9 = INT16_MIN;
volatile int32_t t2 = -34;
uint8_t x19 = 0U;
int32_t x21 = -1;
int16_t x23 = -1;
static uint32_t x27 = 8U;
volatile uint32_t x31 = 14U;
uint64_t x36 = UINT64_MAX;
int16_t x44 = 26;
int8_t x46 = INT8_MIN;
uint32_t x48 = 30222672U;
volatile int32_t t12 = -23655;
volatile int32_t t14 = -16;
int8_t x75 = 6;
volatile uint16_t x84 = 1U;
uint64_t x86 = 25797371353708008LLU;
volatile int32_t t18 = 24718;
static uint16_t x98 = 0U;
int32_t x99 = 1067273722;
uint32_t x104 = 36308732U;
uint32_t t23 = 20716607U;
uint64_t x112 = 708082LLU;
static int16_t x114 = INT16_MAX;
static int8_t x119 = 1;
static volatile int16_t x126 = INT16_MIN;
static int64_t x141 = 140LL;
static int32_t x143 = INT32_MIN;
volatile int32_t x144 = -3;
uint64_t x146 = 1252947LLU;
volatile int64_t t31 = 1864235422565LL;
volatile uint16_t x155 = UINT16_MAX;
int32_t x156 = -1;
int8_t x161 = INT8_MIN;
uint16_t x164 = 249U;
int64_t x181 = INT64_MAX;
static uint64_t x182 = UINT64_MAX;
static volatile int16_t x183 = 7660;
uint32_t t39 = 987170U;
uint64_t x189 = 40237LLU;
volatile uint32_t x193 = UINT32_MAX;
volatile int16_t x195 = INT16_MAX;
uint32_t x197 = 1U;
int64_t x202 = INT64_MAX;
volatile int32_t x204 = INT32_MAX;
static volatile uint64_t t44 = 123LLU;
uint64_t x210 = 16LLU;
uint16_t x212 = 1759U;
static int64_t x220 = -1LL;
int32_t x225 = -5135;
int32_t t49 = -947647145;
volatile int32_t t50 = -178;
uint16_t x243 = UINT16_MAX;
int32_t t53 = -7304978;
volatile int32_t t54 = -4315297;
int32_t x274 = INT32_MIN;
int8_t x279 = INT8_MAX;
volatile int32_t t59 = 3458;
int32_t x283 = -6198;
int32_t t60 = -1;
int64_t x288 = INT64_MAX;
volatile int32_t t61 = 26940780;
volatile int8_t x289 = 0;
int32_t x292 = 24;
volatile int16_t x295 = INT16_MAX;
volatile int8_t x296 = -2;
int16_t x300 = -11;
int64_t x301 = -1LL;
static uint16_t x304 = 1130U;
uint32_t x322 = 2631U;
int32_t x327 = -1;
static uint64_t x333 = 3820LLU;
int64_t x334 = -2445343728LL;
uint16_t x338 = UINT16_MAX;
volatile int32_t x340 = 14148;
static uint16_t x345 = 433U;
static volatile int16_t x349 = INT16_MIN;
int16_t x353 = INT16_MAX;
uint8_t x363 = 2U;
int16_t x379 = INT16_MAX;
volatile int16_t x381 = 245;
static uint32_t x391 = 756654811U;
static volatile int8_t x395 = 1;
static int64_t x396 = -1LL;
uint64_t x406 = 2442087377LLU;
static uint64_t x409 = 15097529124859636LLU;
volatile uint64_t x424 = 440LLU;
int32_t t89 = 114349;
static int64_t x434 = INT64_MIN;
volatile int32_t t91 = -694670307;
volatile uint16_t x442 = UINT16_MAX;
static int64_t t94 = -6LL;
volatile int32_t t96 = 1362;
int64_t x469 = 22136766739LL;
volatile int64_t t98 = -15765LL;
int64_t x479 = INT64_MIN;
int64_t t99 = 183625552067LL;
uint8_t x482 = 6U;
int16_t x487 = -1;
volatile uint16_t x488 = 3U;
int8_t x492 = INT8_MAX;
volatile int32_t x498 = -89;
int64_t x507 = 10009598366LL;
static uint64_t t106 = 376235LLU;
uint16_t x509 = 0U;
static int32_t x512 = INT32_MAX;
static int16_t x513 = INT16_MIN;
static uint8_t x514 = UINT8_MAX;
uint8_t x515 = 1U;
static int8_t x518 = INT8_MIN;
volatile int32_t t111 = 8;
static volatile int32_t x542 = INT32_MAX;
static volatile uint32_t x544 = 9789U;
static int32_t x550 = -1;
static int64_t x552 = 46475LL;
uint16_t x556 = 23U;
volatile int16_t x557 = -254;
volatile uint32_t x563 = 473U;
static int32_t x565 = -1;
int32_t x566 = -1;
uint32_t x568 = UINT32_MAX;
volatile int64_t t121 = 23592176572LL;
volatile int16_t x582 = INT16_MAX;
volatile uint64_t t122 = 10882317360565647LLU;
int32_t x585 = -1255939;
uint16_t x590 = 118U;
uint64_t x592 = 891654LLU;
int16_t x599 = -1;
int16_t x602 = INT16_MIN;
uint32_t x608 = 299U;
int16_t x614 = INT16_MIN;
uint32_t x616 = UINT32_MAX;
int32_t t130 = -84850;
volatile int64_t x627 = INT64_MIN;
int8_t x628 = INT8_MIN;
volatile int32_t x629 = 250;
uint64_t x633 = UINT64_MAX;
int64_t x650 = INT64_MIN;
int8_t x661 = INT8_MIN;
static uint32_t x664 = 796U;
volatile int32_t t140 = -310531477;
int64_t x666 = 5657LL;
volatile int64_t x667 = INT64_MIN;
int32_t x671 = -605812;
static volatile uint32_t t142 = 0U;
int16_t x673 = 28;
int32_t t143 = 6762;
static int8_t x681 = INT8_MAX;
volatile int32_t x684 = -2776955;
int32_t t145 = 22;
volatile int8_t x685 = 1;
int32_t x689 = -1;
static volatile int16_t x690 = INT16_MIN;
static int64_t x692 = -1LL;
int64_t x696 = INT64_MAX;
volatile int64_t x697 = -1LL;
int64_t x699 = 5499157661204721LL;
int16_t x713 = INT16_MAX;
int64_t x720 = 1365961292582LL;
int32_t t152 = 428;
uint64_t x721 = 662LLU;
int32_t x723 = -1;
int8_t x725 = INT8_MAX;
int16_t x732 = -5823;
volatile int32_t t159 = -1214952;
uint64_t x758 = 2083261984828LLU;
uint16_t x763 = 12717U;
volatile int32_t x776 = INT32_MIN;
static volatile uint16_t x802 = 1U;
int8_t x804 = INT8_MAX;
volatile int16_t x811 = 570;
static int32_t x813 = -38461;
int32_t x822 = INT32_MIN;
int8_t x833 = INT8_MIN;
int32_t x834 = INT32_MIN;
static volatile int8_t x837 = -1;
int8_t x844 = 6;
int32_t x851 = INT32_MAX;
int16_t x853 = INT16_MIN;
volatile int32_t t182 = -6745240;
int16_t x868 = 27;
volatile int8_t x873 = 55;
volatile int32_t t186 = -106183;
volatile uint64_t x879 = 31LLU;
volatile uint64_t t187 = 1053757311329LLU;
int32_t x886 = INT32_MIN;
volatile int32_t t193 = 262;
int16_t x916 = INT16_MIN;
int16_t x918 = 117;


void f0(void) {
    	int32_t x3 = INT32_MAX;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = 58839;

    t0 = (x1-(x2!=(x3/x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 22;
	int8_t x6 = INT8_MIN;
	volatile uint8_t x8 = 57U;
	volatile int32_t t1 = 121256;

    t1 = (x5-(x6!=(x7/x8)));

    if (t1 != 21) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = INT32_MIN;
	static uint32_t x11 = 86421U;
	uint16_t x12 = UINT16_MAX;

    t2 = (x9-(x10!=(x11/x12)));

    if (t2 != -32769) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 266740599U;
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 50586789142488LLU;

    t3 = (x13-(x14!=(x15/x16)));

    if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile uint8_t x18 = UINT8_MAX;
	int64_t x20 = 39008901363009LL;
	volatile int32_t t4 = 8806598;

    t4 = (x17-(x18!=(x19/x20)));

    if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 1U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 25626418;

    t5 = (x21-(x22!=(x23/x24)));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int8_t x28 = INT8_MIN;
	int32_t t6 = -203;

    t6 = (x25-(x26!=(x27/x28)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int16_t x30 = 6;
	int32_t x32 = INT32_MAX;
	static int32_t t7 = -19;

    t7 = (x29-(x30!=(x31/x32)));

    if (t7 != -32769) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 590231677U;
	static int8_t x34 = INT8_MAX;
	uint64_t x35 = 21605LLU;
	volatile uint32_t t8 = 539957U;

    t8 = (x33-(x34!=(x35/x36)));

    if (t8 != 590231676U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MAX;
	int16_t x39 = 3350;
	uint8_t x40 = 26U;
	uint32_t t9 = 222U;

    t9 = (x37-(x38!=(x39/x40)));

    if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	uint32_t t10 = 25297207U;

    t10 = (x41-(x42!=(x43/x44)));

    if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	static uint8_t x47 = 1U;
	int32_t t11 = -42726;

    t11 = (x45-(x46!=(x47/x48)));

    if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -166;
	int8_t x50 = INT8_MAX;
	volatile uint64_t x51 = 1411087857LLU;
	uint64_t x52 = UINT64_MAX;

    t12 = (x49-(x50!=(x51/x52)));

    if (t12 != -167) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = 70LLU;
	static volatile uint8_t x60 = 1U;
	volatile int32_t t13 = 65983;

    t13 = (x57-(x58!=(x59/x60)));

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	static volatile int16_t x62 = -12245;
	volatile int64_t x63 = INT64_MAX;
	volatile int32_t x64 = -1;

    t14 = (x61-(x62!=(x63/x64)));

    if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MIN;
	uint8_t x70 = 86U;
	uint16_t x71 = 1U;
	static uint8_t x72 = 93U;
	volatile int32_t t15 = 14269;

    t15 = (x69-(x70!=(x71/x72)));

    if (t15 != -129) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1LL;
	int32_t x74 = -1;
	int64_t x76 = INT64_MAX;
	static volatile int64_t t16 = -51226030744LL;

    t16 = (x73-(x74!=(x75/x76)));

    if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = -13;
	static uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = INT32_MIN;
	int32_t t17 = -114282440;

    t17 = (x81-(x82!=(x83/x84)));

    if (t17 != -14) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = -1;
	volatile int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MIN;

    t18 = (x85-(x86!=(x87/x88)));

    if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = 6;
	static uint16_t x90 = 4U;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t19 = 725309;

    t19 = (x89-(x90!=(x91/x92)));

    if (t19 != 5) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 2U;
	int16_t x94 = 1334;
	uint64_t x95 = 2129868LLU;
	int8_t x96 = -1;
	int32_t t20 = 312985;

    t20 = (x93-(x94!=(x95/x96)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x97 = 8601425LL;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -922282818LL;

    t21 = (x97-(x98!=(x99/x100)));

    if (t21 != 8601425LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t22 = 423;

    t22 = (x101-(x102!=(x103/x104)));

    if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 9U;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MIN;

    t23 = (x105-(x106!=(x107/x108)));

    if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x109 = INT8_MIN;
	static int32_t x110 = INT32_MIN;
	static uint64_t x111 = 114857200562981LLU;
	static volatile int32_t t24 = 3153794;

    t24 = (x109-(x110!=(x111/x112)));

    if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x113 = INT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t25 = 376;

    t25 = (x113-(x114!=(x115/x116)));

    if (t25 != 2147483646) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int16_t x120 = -11;
	int32_t t26 = -53360997;

    t26 = (x117-(x118!=(x119/x120)));

    if (t26 != -129) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = 121;
	volatile int8_t x127 = -1;
	int16_t x128 = 44;
	static volatile int32_t t27 = -296;

    t27 = (x125-(x126!=(x127/x128)));

    if (t27 != 120) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x129 = -224306170775208189LL;
	int64_t x130 = INT64_MAX;
	volatile int16_t x131 = -1;
	volatile uint16_t x132 = 8U;
	volatile int64_t t28 = -3124532935665365171LL;

    t28 = (x129-(x130!=(x131/x132)));

    if (t28 != -224306170775208190LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x133 = 1075373868LLU;
	uint8_t x134 = 0U;
	int8_t x135 = INT8_MIN;
	static int8_t x136 = -1;
	volatile uint64_t t29 = 1038607418957551186LLU;

    t29 = (x133-(x134!=(x135/x136)));

    if (t29 != 1075373867LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x142 = 40U;
	volatile int64_t t30 = 68LL;

    t30 = (x141-(x142!=(x143/x144)));

    if (t30 != 139LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x145 = -3953468809581594LL;
	uint16_t x147 = 1581U;
	int8_t x148 = 5;

    t31 = (x145-(x146!=(x147/x148)));

    if (t31 != -3953468809581595LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x153 = -1;
	static int16_t x154 = -405;
	int32_t t32 = -111143;

    t32 = (x153-(x154!=(x155/x156)));

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x157 = 148U;
	int8_t x158 = -1;
	volatile int64_t x159 = INT64_MIN;
	int32_t x160 = -7233298;
	int32_t t33 = 8404193;

    t33 = (x157-(x158!=(x159/x160)));

    if (t33 != 147) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x162 = INT8_MIN;
	uint64_t x163 = 730328075481009LLU;
	int32_t t34 = -5599267;

    t34 = (x161-(x162!=(x163/x164)));

    if (t34 != -129) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x169 = 6601677947392197LL;
	static volatile int8_t x170 = -26;
	int16_t x171 = -21;
	int8_t x172 = -7;
	volatile int64_t t35 = -48383097569LL;

    t35 = (x169-(x170!=(x171/x172)));

    if (t35 != 6601677947392196LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x173 = UINT32_MAX;
	int32_t x174 = 11;
	uint32_t x175 = UINT32_MAX;
	volatile uint8_t x176 = UINT8_MAX;
	uint32_t t36 = 2608853U;

    t36 = (x173-(x174!=(x175/x176)));

    if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x177 = -122137;
	uint32_t x178 = 45729028U;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	int32_t t37 = -1685;

    t37 = (x177-(x178!=(x179/x180)));

    if (t37 != -122138) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x184 = INT32_MAX;
	volatile int64_t t38 = 79513607921104LL;

    t38 = (x181-(x182!=(x183/x184)));

    if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x185 = 43U;
	uint8_t x186 = UINT8_MAX;
	uint16_t x187 = 305U;
	int32_t x188 = INT32_MIN;

    t39 = (x185-(x186!=(x187/x188)));

    if (t39 != 42U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x190 = UINT8_MAX;
	int8_t x191 = -1;
	volatile uint8_t x192 = 2U;
	uint64_t t40 = 201LLU;

    t40 = (x189-(x190!=(x191/x192)));

    if (t40 != 40236LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x194 = 671163937970088169LL;
	int64_t x196 = 354515027592110306LL;
	uint32_t t41 = 8U;

    t41 = (x193-(x194!=(x195/x196)));

    if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x198 = INT64_MAX;
	volatile uint16_t x199 = 1282U;
	volatile uint64_t x200 = 29081506568155LLU;
	uint32_t t42 = 50660884U;

    t42 = (x197-(x198!=(x199/x200)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x201 = UINT8_MAX;
	uint64_t x203 = 1816LLU;
	volatile int32_t t43 = 225811109;

    t43 = (x201-(x202!=(x203/x204)));

    if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int64_t x206 = -1LL;
	int32_t x207 = -45090785;
	uint8_t x208 = 4U;

    t44 = (x205-(x206!=(x207/x208)));

    if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x209 = INT8_MIN;
	uint32_t x211 = 720916U;
	volatile int32_t t45 = 1;

    t45 = (x209-(x210!=(x211/x212)));

    if (t45 != -129) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	static volatile uint8_t x215 = 0U;
	int16_t x216 = -81;
	volatile int32_t t46 = 17;

    t46 = (x213-(x214!=(x215/x216)));

    if (t46 != -32769) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x217 = -2186959628115641737LL;
	int32_t x218 = INT32_MIN;
	int16_t x219 = INT16_MIN;
	int64_t t47 = -76814974004993LL;

    t47 = (x217-(x218!=(x219/x220)));

    if (t47 != -2186959628115641738LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x221 = 8724530756761249LLU;
	int16_t x222 = -6513;
	static int16_t x223 = INT16_MIN;
	volatile int16_t x224 = -196;
	volatile uint64_t t48 = 1185800LLU;

    t48 = (x221-(x222!=(x223/x224)));

    if (t48 != 8724530756761248LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x226 = INT64_MIN;
	static int8_t x227 = INT8_MIN;
	int32_t x228 = -1;

    t49 = (x225-(x226!=(x227/x228)));

    if (t49 != -5136) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x229 = -1;
	static int8_t x230 = -19;
	int32_t x231 = -1;
	int8_t x232 = 2;

    t50 = (x229-(x230!=(x231/x232)));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x237 = 1703785U;
	static int16_t x238 = INT16_MIN;
	int8_t x239 = 1;
	static int64_t x240 = INT64_MIN;
	uint32_t t51 = 1100U;

    t51 = (x237-(x238!=(x239/x240)));

    if (t51 != 1703784U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x241 = -1;
	volatile int64_t x242 = INT64_MAX;
	int64_t x244 = -1LL;
	static volatile int32_t t52 = 6928366;

    t52 = (x241-(x242!=(x243/x244)));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x245 = 1;
	int16_t x246 = 6;
	volatile int64_t x247 = -1LL;
	int16_t x248 = INT16_MIN;

    t53 = (x245-(x246!=(x247/x248)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x253 = 3U;
	int64_t x254 = -1LL;
	volatile int64_t x255 = 1LL;
	int8_t x256 = -62;

    t54 = (x253-(x254!=(x255/x256)));

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x257 = UINT16_MAX;
	static int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MIN;
	int32_t x260 = -49125;
	int32_t t55 = 5850810;

    t55 = (x257-(x258!=(x259/x260)));

    if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x261 = INT64_MAX;
	volatile uint8_t x262 = 3U;
	int64_t x263 = INT64_MIN;
	int32_t x264 = 1;
	static volatile int64_t t56 = 1555658LL;

    t56 = (x261-(x262!=(x263/x264)));

    if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x269 = 4U;
	static uint16_t x270 = UINT16_MAX;
	static int16_t x271 = -1;
	static uint32_t x272 = 3U;
	static int32_t t57 = -28556585;

    t57 = (x269-(x270!=(x271/x272)));

    if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x273 = 22979U;
	static uint16_t x275 = 239U;
	uint8_t x276 = 2U;
	int32_t t58 = -22;

    t58 = (x273-(x274!=(x275/x276)));

    if (t58 != 22978) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = -12;
	int8_t x278 = 33;
	int8_t x280 = INT8_MIN;

    t59 = (x277-(x278!=(x279/x280)));

    if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x281 = 38U;
	uint16_t x282 = UINT16_MAX;
	uint32_t x284 = 51U;

    t60 = (x281-(x282!=(x283/x284)));

    if (t60 != 37) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x285 = 3336U;
	int64_t x286 = 722244697LL;
	uint64_t x287 = UINT64_MAX;

    t61 = (x285-(x286!=(x287/x288)));

    if (t61 != 3335) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x290 = INT16_MIN;
	int16_t x291 = -1;
	int32_t t62 = 30;

    t62 = (x289-(x290!=(x291/x292)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	int64_t x294 = INT64_MIN;
	volatile uint64_t t63 = 65321113723LLU;

    t63 = (x293-(x294!=(x295/x296)));

    if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	volatile int32_t t64 = 119822;

    t64 = (x297-(x298!=(x299/x300)));

    if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x302 = -1;
	int32_t x303 = 7943;
	volatile int64_t t65 = 288427859445LL;

    t65 = (x301-(x302!=(x303/x304)));

    if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x309 = UINT32_MAX;
	static uint64_t x310 = UINT64_MAX;
	static int32_t x311 = -1;
	volatile uint8_t x312 = 2U;
	uint32_t t66 = 792U;

    t66 = (x309-(x310!=(x311/x312)));

    if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x313 = 15;
	uint64_t x314 = 23LLU;
	uint8_t x315 = 0U;
	int32_t x316 = 66095;
	volatile int32_t t67 = 418;

    t67 = (x313-(x314!=(x315/x316)));

    if (t67 != 14) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x321 = 8;
	uint16_t x323 = 19U;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int32_t t68 = -4513;

    t68 = (x321-(x322!=(x323/x324)));

    if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = INT8_MIN;
	uint16_t x326 = UINT16_MAX;
	int8_t x328 = INT8_MIN;
	int32_t t69 = -10874;

    t69 = (x325-(x326!=(x327/x328)));

    if (t69 != -129) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x329 = -1LL;
	static int8_t x330 = INT8_MIN;
	int64_t x331 = INT64_MAX;
	int8_t x332 = 16;
	static volatile int64_t t70 = 5941638592287LL;

    t70 = (x329-(x330!=(x331/x332)));

    if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x335 = INT8_MAX;
	static int64_t x336 = 1866957259LL;
	volatile uint64_t t71 = 62269743LLU;

    t71 = (x333-(x334!=(x335/x336)));

    if (t71 != 3819LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x339 = -1;
	static int32_t t72 = 271299294;

    t72 = (x337-(x338!=(x339/x340)));

    if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x341 = UINT32_MAX;
	int8_t x342 = 1;
	int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	uint32_t t73 = 3U;

    t73 = (x341-(x342!=(x343/x344)));

    if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x346 = -87;
	uint64_t x347 = 2018LLU;
	int64_t x348 = -1549LL;
	static volatile int32_t t74 = 78138288;

    t74 = (x345-(x346!=(x347/x348)));

    if (t74 != 432) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x350 = UINT32_MAX;
	uint64_t x351 = UINT64_MAX;
	uint32_t x352 = UINT32_MAX;
	int32_t t75 = -16216754;

    t75 = (x349-(x350!=(x351/x352)));

    if (t75 != -32769) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int32_t x356 = -69655139;
	static volatile int32_t t76 = -1083;

    t76 = (x353-(x354!=(x355/x356)));

    if (t76 != 32766) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x357 = 275399079654LLU;
	volatile int8_t x358 = INT8_MIN;
	uint64_t x359 = 283887802915046686LLU;
	static int64_t x360 = INT64_MAX;
	volatile uint64_t t77 = 985LLU;

    t77 = (x357-(x358!=(x359/x360)));

    if (t77 != 275399079653LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x361 = 28;
	int16_t x362 = INT16_MAX;
	int8_t x364 = INT8_MAX;
	volatile int32_t t78 = -856190;

    t78 = (x361-(x362!=(x363/x364)));

    if (t78 != 27) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = -1;
	int32_t x370 = 42805;
	uint8_t x371 = UINT8_MAX;
	uint64_t x372 = UINT64_MAX;
	static int32_t t79 = 24273365;

    t79 = (x369-(x370!=(x371/x372)));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x377 = 103U;
	int16_t x378 = -1;
	uint32_t x380 = 68U;
	static volatile int32_t t80 = -853564;

    t80 = (x377-(x378!=(x379/x380)));

    if (t80 != 102) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x382 = INT64_MAX;
	uint32_t x383 = 197808101U;
	static int64_t x384 = INT64_MIN;
	volatile int32_t t81 = -590197465;

    t81 = (x381-(x382!=(x383/x384)));

    if (t81 != 244) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x385 = 1144853334U;
	volatile uint16_t x386 = 31134U;
	int32_t x387 = INT32_MAX;
	uint8_t x388 = 66U;
	volatile uint32_t t82 = 6U;

    t82 = (x385-(x386!=(x387/x388)));

    if (t82 != 1144853333U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x389 = 1;
	uint64_t x390 = 45792629318069LLU;
	int8_t x392 = INT8_MIN;
	static volatile int32_t t83 = 28600915;

    t83 = (x389-(x390!=(x391/x392)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x393 = UINT64_MAX;
	volatile int16_t x394 = -1;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = (x393-(x394!=(x395/x396)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x397 = INT64_MAX;
	static volatile int64_t x398 = -9LL;
	static int16_t x399 = 0;
	uint32_t x400 = UINT32_MAX;
	int64_t t85 = -105342827LL;

    t85 = (x397-(x398!=(x399/x400)));

    if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x405 = 1135U;
	int64_t x407 = -7540LL;
	volatile int32_t x408 = INT32_MAX;
	volatile int32_t t86 = -1;

    t86 = (x405-(x406!=(x407/x408)));

    if (t86 != 1134) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x410 = INT32_MAX;
	int32_t x411 = -9525;
	int64_t x412 = -1LL;
	uint64_t t87 = 4300322720137823591LLU;

    t87 = (x409-(x410!=(x411/x412)));

    if (t87 != 15097529124859635LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x417 = -1;
	int32_t x418 = -387678;
	int16_t x419 = 13980;
	int32_t x420 = INT32_MIN;
	static int32_t t88 = -730647559;

    t88 = (x417-(x418!=(x419/x420)));

    if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x422 = 30334237231785LLU;
	uint16_t x423 = UINT16_MAX;

    t89 = (x421-(x422!=(x423/x424)));

    if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;
	int8_t x431 = -1;
	static int32_t x432 = INT32_MIN;
	volatile int32_t t90 = 72006;

    t90 = (x429-(x430!=(x431/x432)));

    if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x433 = INT32_MAX;
	static int16_t x435 = 116;
	static int32_t x436 = 241;

    t91 = (x433-(x434!=(x435/x436)));

    if (t91 != 2147483646) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x437 = 466LLU;
	volatile int64_t x438 = -1LL;
	static volatile int32_t x439 = 1860373;
	int64_t x440 = INT64_MIN;
	static volatile uint64_t t92 = 7LLU;

    t92 = (x437-(x438!=(x439/x440)));

    if (t92 != 465LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x441 = 440760U;
	static volatile uint8_t x443 = UINT8_MAX;
	uint8_t x444 = 1U;
	uint32_t t93 = 1U;

    t93 = (x441-(x442!=(x443/x444)));

    if (t93 != 440759U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x445 = INT64_MAX;
	static uint16_t x446 = UINT16_MAX;
	int64_t x447 = -1LL;
	int32_t x448 = -5062514;

    t94 = (x445-(x446!=(x447/x448)));

    if (t94 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x449 = -1;
	int64_t x450 = INT64_MIN;
	int32_t x451 = 25;
	volatile int8_t x452 = INT8_MAX;
	volatile int32_t t95 = 484;

    t95 = (x449-(x450!=(x451/x452)));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x457 = -1;
	uint32_t x458 = 420U;
	uint8_t x459 = 57U;
	int16_t x460 = -1;

    t96 = (x457-(x458!=(x459/x460)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x461 = INT8_MAX;
	int32_t x462 = 14;
	volatile int16_t x463 = INT16_MAX;
	volatile int32_t x464 = INT32_MIN;
	int32_t t97 = -64747;

    t97 = (x461-(x462!=(x463/x464)));

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x470 = -1;
	int64_t x471 = -1LL;
	static uint32_t x472 = UINT32_MAX;

    t98 = (x469-(x470!=(x471/x472)));

    if (t98 != 22136766738LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x477 = INT64_MAX;
	uint64_t x478 = 4LLU;
	int64_t x480 = INT64_MAX;

    t99 = (x477-(x478!=(x479/x480)));

    if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x483 = INT8_MAX;
	uint64_t x484 = 1928438264466094469LLU;
	int32_t t100 = -143861921;

    t100 = (x481-(x482!=(x483/x484)));

    if (t100 != 2147483646) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x485 = INT8_MIN;
	static uint16_t x486 = 60U;
	volatile int32_t t101 = -3800;

    t101 = (x485-(x486!=(x487/x488)));

    if (t101 != -129) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x489 = INT8_MIN;
	static int8_t x490 = INT8_MIN;
	static uint16_t x491 = UINT16_MAX;
	int32_t t102 = -60;

    t102 = (x489-(x490!=(x491/x492)));

    if (t102 != -129) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x493 = 26;
	static int64_t x494 = INT64_MIN;
	uint32_t x495 = 55314547U;
	int8_t x496 = INT8_MIN;
	volatile int32_t t103 = -67867146;

    t103 = (x493-(x494!=(x495/x496)));

    if (t103 != 25) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x497 = -1;
	uint32_t x499 = 918U;
	int16_t x500 = -1;
	int32_t t104 = -5094;

    t104 = (x497-(x498!=(x499/x500)));

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = 1;
	static int32_t x502 = INT32_MIN;
	uint64_t x503 = 363657243277109LLU;
	static int8_t x504 = -58;
	int32_t t105 = 119;

    t105 = (x501-(x502!=(x503/x504)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x505 = 5070747903136647LLU;
	int8_t x506 = 2;
	uint16_t x508 = 28U;

    t106 = (x505-(x506!=(x507/x508)));

    if (t106 != 5070747903136646LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x510 = -1;
	volatile int16_t x511 = INT16_MIN;
	static int32_t t107 = -26164;

    t107 = (x509-(x510!=(x511/x512)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x516 = UINT32_MAX;
	static int32_t t108 = -20186;

    t108 = (x513-(x514!=(x515/x516)));

    if (t108 != -32769) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x517 = INT8_MIN;
	volatile uint32_t x519 = UINT32_MAX;
	int32_t x520 = INT32_MAX;
	static volatile int32_t t109 = 3;

    t109 = (x517-(x518!=(x519/x520)));

    if (t109 != -129) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x521 = 102U;
	volatile int64_t x522 = INT64_MIN;
	static volatile uint32_t x523 = 1504510988U;
	static int32_t x524 = INT32_MIN;
	int32_t t110 = -44178;

    t110 = (x521-(x522!=(x523/x524)));

    if (t110 != 101) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x525 = -2;
	uint32_t x526 = 28026383U;
	volatile int32_t x527 = -621;
	static int8_t x528 = INT8_MIN;

    t111 = (x525-(x526!=(x527/x528)));

    if (t111 != -3) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x529 = INT32_MAX;
	static uint32_t x530 = 13774155U;
	static int32_t x531 = -3358;
	int64_t x532 = -2861366345397LL;
	static volatile int32_t t112 = -1;

    t112 = (x529-(x530!=(x531/x532)));

    if (t112 != 2147483646) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x533 = -1;
	uint64_t x534 = 3606858411695947LLU;
	static volatile int64_t x535 = INT64_MAX;
	int16_t x536 = INT16_MAX;
	int32_t t113 = -55762;

    t113 = (x533-(x534!=(x535/x536)));

    if (t113 != -2) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x541 = INT8_MIN;
	int16_t x543 = INT16_MIN;
	volatile int32_t t114 = 24251;

    t114 = (x541-(x542!=(x543/x544)));

    if (t114 != -129) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x546 = 56942236;
	volatile uint32_t x547 = UINT32_MAX;
	int8_t x548 = INT8_MAX;
	int32_t t115 = 1;

    t115 = (x545-(x546!=(x547/x548)));

    if (t115 != 2147483646) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x549 = 0;
	static int16_t x551 = -1419;
	int32_t t116 = 0;

    t116 = (x549-(x550!=(x551/x552)));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x553 = 15964664U;
	volatile int32_t x554 = -1;
	int32_t x555 = INT32_MAX;
	static volatile uint32_t t117 = 2U;

    t117 = (x553-(x554!=(x555/x556)));

    if (t117 != 15964663U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x558 = INT64_MIN;
	uint16_t x559 = 5012U;
	static uint64_t x560 = 13224506815LLU;
	int32_t t118 = -5227888;

    t118 = (x557-(x558!=(x559/x560)));

    if (t118 != -255) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x561 = 7U;
	uint16_t x562 = 24U;
	static int64_t x564 = INT64_MIN;
	int32_t t119 = -2785;

    t119 = (x561-(x562!=(x563/x564)));

    if (t119 != 6) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x567 = INT64_MAX;
	volatile int32_t t120 = 3986797;

    t120 = (x565-(x566!=(x567/x568)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x577 = 65544LL;
	uint8_t x578 = 16U;
	static int16_t x579 = INT16_MIN;
	static int16_t x580 = 5570;

    t121 = (x577-(x578!=(x579/x580)));

    if (t121 != 65543LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x581 = 261145893239754LLU;
	int16_t x583 = 14727;
	uint32_t x584 = UINT32_MAX;

    t122 = (x581-(x582!=(x583/x584)));

    if (t122 != 261145893239753LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x586 = INT8_MAX;
	volatile int64_t x587 = INT64_MAX;
	int32_t x588 = INT32_MIN;
	int32_t t123 = 5772489;

    t123 = (x585-(x586!=(x587/x588)));

    if (t123 != -1255940) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x589 = INT8_MIN;
	volatile int8_t x591 = INT8_MIN;
	int32_t t124 = 5848671;

    t124 = (x589-(x590!=(x591/x592)));

    if (t124 != -129) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x593 = -1;
	volatile int8_t x594 = INT8_MIN;
	int64_t x595 = INT64_MIN;
	int64_t x596 = 1129554466607268LL;
	volatile int32_t t125 = 9;

    t125 = (x593-(x594!=(x595/x596)));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x598 = 631;
	int64_t x600 = INT64_MIN;
	int32_t t126 = -25;

    t126 = (x597-(x598!=(x599/x600)));

    if (t126 != -32769) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x601 = -1;
	uint16_t x603 = 7976U;
	volatile int64_t x604 = INT64_MIN;
	volatile int32_t t127 = 1482338;

    t127 = (x601-(x602!=(x603/x604)));

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x605 = 663640699LLU;
	uint16_t x606 = UINT16_MAX;
	int16_t x607 = INT16_MIN;
	uint64_t t128 = 461899294111882199LLU;

    t128 = (x605-(x606!=(x607/x608)));

    if (t128 != 663640698LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x613 = -26;
	int32_t x615 = -138;
	static volatile int32_t t129 = -669;

    t129 = (x613-(x614!=(x615/x616)));

    if (t129 != -27) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x617 = -1;
	int32_t x618 = 7622;
	int64_t x619 = -1LL;
	static uint32_t x620 = 16322760U;

    t130 = (x617-(x618!=(x619/x620)));

    if (t130 != -2) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x621 = -939923;
	int8_t x622 = INT8_MIN;
	static uint8_t x623 = 12U;
	static int8_t x624 = -2;
	volatile int32_t t131 = 4060798;

    t131 = (x621-(x622!=(x623/x624)));

    if (t131 != -939924) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x625 = -391;
	int64_t x626 = -1LL;
	static volatile int32_t t132 = -2792;

    t132 = (x625-(x626!=(x627/x628)));

    if (t132 != -392) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x630 = -1;
	static uint64_t x631 = UINT64_MAX;
	int8_t x632 = 1;
	static int32_t t133 = -241;

    t133 = (x629-(x630!=(x631/x632)));

    if (t133 != 250) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x634 = -7878585011207548LL;
	int64_t x635 = -1LL;
	static int64_t x636 = -1LL;
	static uint64_t t134 = 1334477562512758873LLU;

    t134 = (x633-(x634!=(x635/x636)));

    if (t134 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x637 = -70352701687175LL;
	volatile int64_t x638 = INT64_MIN;
	uint8_t x639 = 1U;
	volatile int16_t x640 = INT16_MIN;
	int64_t t135 = 7332872LL;

    t135 = (x637-(x638!=(x639/x640)));

    if (t135 != -70352701687176LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x645 = -1;
	volatile uint64_t x646 = 18033LLU;
	int8_t x647 = -1;
	uint16_t x648 = UINT16_MAX;
	int32_t t136 = -1170442;

    t136 = (x645-(x646!=(x647/x648)));

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x649 = 19321499482954LL;
	int16_t x651 = -2;
	int16_t x652 = INT16_MAX;
	int64_t t137 = -203LL;

    t137 = (x649-(x650!=(x651/x652)));

    if (t137 != 19321499482953LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x653 = 2704LLU;
	uint8_t x654 = UINT8_MAX;
	volatile int16_t x655 = -1;
	int32_t x656 = -1;
	volatile uint64_t t138 = 235460409066150LLU;

    t138 = (x653-(x654!=(x655/x656)));

    if (t138 != 2703LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x657 = 1638U;
	int64_t x658 = INT64_MAX;
	int64_t x659 = INT64_MIN;
	uint64_t x660 = 2441039810LLU;
	int32_t t139 = 30327;

    t139 = (x657-(x658!=(x659/x660)));

    if (t139 != 1637) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x662 = -1LL;
	int64_t x663 = INT64_MIN;

    t140 = (x661-(x662!=(x663/x664)));

    if (t140 != -129) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x665 = 283067LLU;
	uint16_t x668 = 15959U;
	volatile uint64_t t141 = 165LLU;

    t141 = (x665-(x666!=(x667/x668)));

    if (t141 != 283066LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x669 = 28390U;
	int64_t x670 = 14950546LL;
	static int16_t x672 = INT16_MIN;

    t142 = (x669-(x670!=(x671/x672)));

    if (t142 != 28389U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x674 = INT32_MIN;
	uint16_t x675 = 140U;
	int8_t x676 = -1;

    t143 = (x673-(x674!=(x675/x676)));

    if (t143 != 27) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile int8_t x678 = INT8_MIN;
	volatile uint8_t x679 = 19U;
	static int64_t x680 = -29868429LL;
	uint32_t t144 = 257903U;

    t144 = (x677-(x678!=(x679/x680)));

    if (t144 != 4294967294U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x682 = UINT16_MAX;
	int16_t x683 = INT16_MIN;

    t145 = (x681-(x682!=(x683/x684)));

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x686 = UINT32_MAX;
	int16_t x687 = INT16_MAX;
	int8_t x688 = -1;
	volatile int32_t t146 = 7428;

    t146 = (x685-(x686!=(x687/x688)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x691 = INT8_MAX;
	volatile int32_t t147 = -677;

    t147 = (x689-(x690!=(x691/x692)));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x693 = 62547579LLU;
	static volatile int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MAX;
	volatile uint64_t t148 = 0LLU;

    t148 = (x693-(x694!=(x695/x696)));

    if (t148 != 62547578LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x698 = 132;
	uint8_t x700 = 9U;
	int64_t t149 = -248577403LL;

    t149 = (x697-(x698!=(x699/x700)));

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x709 = 458771LLU;
	static int64_t x710 = -30LL;
	int8_t x711 = 0;
	uint16_t x712 = 3633U;
	uint64_t t150 = 9362168LLU;

    t150 = (x709-(x710!=(x711/x712)));

    if (t150 != 458770LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x714 = INT8_MIN;
	int64_t x715 = INT64_MIN;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t151 = 37820611;

    t151 = (x713-(x714!=(x715/x716)));

    if (t151 != 32766) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x717 = -1;
	uint8_t x718 = 27U;
	int16_t x719 = INT16_MIN;

    t152 = (x717-(x718!=(x719/x720)));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x722 = 11;
	int8_t x724 = INT8_MAX;
	volatile uint64_t t153 = 33309LLU;

    t153 = (x721-(x722!=(x723/x724)));

    if (t153 != 661LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x726 = INT16_MIN;
	volatile uint32_t x727 = UINT32_MAX;
	static uint32_t x728 = 3713U;
	volatile int32_t t154 = 2767168;

    t154 = (x725-(x726!=(x727/x728)));

    if (t154 != 126) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x729 = INT16_MAX;
	static int16_t x730 = 26;
	int32_t x731 = INT32_MIN;
	volatile int32_t t155 = 1956;

    t155 = (x729-(x730!=(x731/x732)));

    if (t155 != 32766) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x737 = -39;
	int32_t x738 = 867;
	int16_t x739 = -304;
	int16_t x740 = -1;
	int32_t t156 = -682184026;

    t156 = (x737-(x738!=(x739/x740)));

    if (t156 != -40) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x745 = -2;
	int32_t x746 = INT32_MIN;
	static volatile int8_t x747 = 17;
	volatile uint16_t x748 = UINT16_MAX;
	volatile int32_t t157 = -4585;

    t157 = (x745-(x746!=(x747/x748)));

    if (t157 != -3) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x749 = -2334051LL;
	int8_t x750 = INT8_MIN;
	int32_t x751 = -226764991;
	uint16_t x752 = UINT16_MAX;
	int64_t t158 = 1029482127329196LL;

    t158 = (x749-(x750!=(x751/x752)));

    if (t158 != -2334052LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x753 = 2;
	int64_t x754 = -1LL;
	int16_t x755 = -1;
	int16_t x756 = -1;

    t159 = (x753-(x754!=(x755/x756)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x757 = 2U;
	int32_t x759 = INT32_MAX;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t160 = -383622108;

    t160 = (x757-(x758!=(x759/x760)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x761 = UINT32_MAX;
	static int32_t x762 = -1673;
	int32_t x764 = INT32_MAX;
	volatile uint32_t t161 = 337900639U;

    t161 = (x761-(x762!=(x763/x764)));

    if (t161 != 4294967294U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x765 = INT32_MAX;
	volatile int32_t x766 = INT32_MIN;
	uint64_t x767 = UINT64_MAX;
	volatile int8_t x768 = INT8_MIN;
	volatile int32_t t162 = -4548;

    t162 = (x765-(x766!=(x767/x768)));

    if (t162 != 2147483646) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x769 = 5U;
	volatile int64_t x770 = -14095513934981LL;
	int8_t x771 = -1;
	int64_t x772 = INT64_MAX;
	static volatile int32_t t163 = -19;

    t163 = (x769-(x770!=(x771/x772)));

    if (t163 != 4) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x773 = 4490;
	static volatile uint64_t x774 = 1011384505244878486LLU;
	static volatile uint8_t x775 = 1U;
	int32_t t164 = 0;

    t164 = (x773-(x774!=(x775/x776)));

    if (t164 != 4489) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x777 = INT8_MAX;
	volatile int32_t x778 = 2;
	int32_t x779 = INT32_MIN;
	volatile int8_t x780 = INT8_MAX;
	int32_t t165 = -33270328;

    t165 = (x777-(x778!=(x779/x780)));

    if (t165 != 126) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x781 = 0U;
	int64_t x782 = INT64_MIN;
	int64_t x783 = INT64_MIN;
	volatile int8_t x784 = INT8_MIN;
	volatile uint32_t t166 = UINT32_MAX;

    t166 = (x781-(x782!=(x783/x784)));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x785 = -49;
	static volatile uint32_t x786 = UINT32_MAX;
	int16_t x787 = INT16_MIN;
	int64_t x788 = 5185552575770LL;
	int32_t t167 = -9685;

    t167 = (x785-(x786!=(x787/x788)));

    if (t167 != -50) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x789 = UINT8_MAX;
	uint64_t x790 = 3637600436102483LLU;
	uint64_t x791 = UINT64_MAX;
	static uint32_t x792 = 173711U;
	static int32_t t168 = 1036;

    t168 = (x789-(x790!=(x791/x792)));

    if (t168 != 254) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x793 = UINT8_MAX;
	int8_t x794 = -1;
	int8_t x795 = -1;
	volatile int64_t x796 = -1070LL;
	static int32_t t169 = 37221;

    t169 = (x793-(x794!=(x795/x796)));

    if (t169 != 254) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x797 = 98;
	volatile uint8_t x798 = 4U;
	int32_t x799 = 584;
	uint64_t x800 = 3449437408LLU;
	volatile int32_t t170 = -44945946;

    t170 = (x797-(x798!=(x799/x800)));

    if (t170 != 97) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x801 = 452758911351LLU;
	uint8_t x803 = 0U;
	uint64_t t171 = 213449706LLU;

    t171 = (x801-(x802!=(x803/x804)));

    if (t171 != 452758911350LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x805 = 0U;
	volatile int8_t x806 = INT8_MIN;
	int32_t x807 = INT32_MAX;
	int8_t x808 = INT8_MIN;
	volatile int32_t t172 = -123071355;

    t172 = (x805-(x806!=(x807/x808)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x809 = 100;
	int16_t x810 = 94;
	static int32_t x812 = 161;
	volatile int32_t t173 = 1;

    t173 = (x809-(x810!=(x811/x812)));

    if (t173 != 99) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x814 = UINT16_MAX;
	uint32_t x815 = 463161057U;
	static uint8_t x816 = UINT8_MAX;
	volatile int32_t t174 = -98;

    t174 = (x813-(x814!=(x815/x816)));

    if (t174 != -38462) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x817 = UINT32_MAX;
	int16_t x818 = -1;
	static int64_t x819 = 24104682333LL;
	int8_t x820 = INT8_MAX;
	static uint32_t t175 = 1943415U;

    t175 = (x817-(x818!=(x819/x820)));

    if (t175 != 4294967294U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x821 = 107201960128923LLU;
	uint32_t x823 = 1252493U;
	static volatile uint32_t x824 = UINT32_MAX;
	volatile uint64_t t176 = 854851LLU;

    t176 = (x821-(x822!=(x823/x824)));

    if (t176 != 107201960128922LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x829 = -1;
	int16_t x830 = 0;
	int8_t x831 = INT8_MIN;
	int32_t x832 = 4588;
	int32_t t177 = -903;

    t177 = (x829-(x830!=(x831/x832)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x835 = -7016484818188LL;
	int64_t x836 = -1LL;
	volatile int32_t t178 = -6;

    t178 = (x833-(x834!=(x835/x836)));

    if (t178 != -129) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x838 = 8;
	static int8_t x839 = -34;
	int64_t x840 = -1LL;
	static volatile int32_t t179 = -252238;

    t179 = (x837-(x838!=(x839/x840)));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x841 = INT16_MAX;
	static int64_t x842 = -1LL;
	int8_t x843 = -1;
	static volatile int32_t t180 = -14806502;

    t180 = (x841-(x842!=(x843/x844)));

    if (t180 != 32766) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x849 = -1;
	uint16_t x850 = 5U;
	volatile int16_t x852 = 618;
	int32_t t181 = 859669087;

    t181 = (x849-(x850!=(x851/x852)));

    if (t181 != -2) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x854 = 179LL;
	int32_t x855 = INT32_MIN;
	volatile int32_t x856 = INT32_MAX;

    t182 = (x853-(x854!=(x855/x856)));

    if (t182 != -32769) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x857 = INT8_MIN;
	uint8_t x858 = UINT8_MAX;
	uint16_t x859 = 9144U;
	uint16_t x860 = UINT16_MAX;
	volatile int32_t t183 = 3456;

    t183 = (x857-(x858!=(x859/x860)));

    if (t183 != -129) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x865 = INT8_MIN;
	static int8_t x866 = INT8_MIN;
	volatile int8_t x867 = INT8_MAX;
	int32_t t184 = -130599244;

    t184 = (x865-(x866!=(x867/x868)));

    if (t184 != -129) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x869 = 1;
	int64_t x870 = INT64_MIN;
	volatile uint64_t x871 = 200LLU;
	static int32_t x872 = -671;
	int32_t t185 = -6;

    t185 = (x869-(x870!=(x871/x872)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x874 = 2560;
	uint32_t x875 = UINT32_MAX;
	int16_t x876 = INT16_MIN;

    t186 = (x873-(x874!=(x875/x876)));

    if (t186 != 54) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x877 = 7LLU;
	int8_t x878 = INT8_MIN;
	uint32_t x880 = 8788600U;

    t187 = (x877-(x878!=(x879/x880)));

    if (t187 != 6LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x881 = -1;
	int16_t x882 = INT16_MIN;
	uint16_t x883 = 15557U;
	uint32_t x884 = 100U;
	int32_t t188 = -10800346;

    t188 = (x881-(x882!=(x883/x884)));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x885 = 8U;
	int16_t x887 = -935;
	uint64_t x888 = 194722087510LLU;
	volatile int32_t t189 = 4447;

    t189 = (x885-(x886!=(x887/x888)));

    if (t189 != 7) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x889 = -1228;
	int8_t x890 = -1;
	static volatile uint64_t x891 = 6037LLU;
	uint64_t x892 = 64754876649163LLU;
	volatile int32_t t190 = -216;

    t190 = (x889-(x890!=(x891/x892)));

    if (t190 != -1229) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x893 = -25712LL;
	uint64_t x894 = UINT64_MAX;
	int8_t x895 = INT8_MIN;
	int16_t x896 = -1;
	int64_t t191 = 42951658LL;

    t191 = (x893-(x894!=(x895/x896)));

    if (t191 != -25713LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x897 = -1;
	int16_t x898 = -8;
	int16_t x899 = INT16_MAX;
	int8_t x900 = INT8_MAX;
	volatile int32_t t192 = 4316;

    t192 = (x897-(x898!=(x899/x900)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x901 = -1;
	uint32_t x902 = 1052622248U;
	static volatile int16_t x903 = -1;
	uint8_t x904 = 31U;

    t193 = (x901-(x902!=(x903/x904)));

    if (t193 != -2) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x905 = -167;
	int8_t x906 = -7;
	uint8_t x907 = 5U;
	volatile uint16_t x908 = 38U;
	int32_t t194 = -123;

    t194 = (x905-(x906!=(x907/x908)));

    if (t194 != -168) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x909 = INT16_MIN;
	uint16_t x910 = 31U;
	uint8_t x911 = UINT8_MAX;
	static uint8_t x912 = 1U;
	volatile int32_t t195 = -13429;

    t195 = (x909-(x910!=(x911/x912)));

    if (t195 != -32769) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x913 = INT64_MAX;
	static volatile uint32_t x914 = UINT32_MAX;
	int8_t x915 = INT8_MAX;
	volatile int64_t t196 = 887384LL;

    t196 = (x913-(x914!=(x915/x916)));

    if (t196 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x917 = -1LL;
	int64_t x919 = INT64_MIN;
	volatile uint32_t x920 = 214963U;
	int64_t t197 = -89884399LL;

    t197 = (x917-(x918!=(x919/x920)));

    if (t197 != -2LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x921 = 54U;
	uint8_t x922 = UINT8_MAX;
	int64_t x923 = INT64_MIN;
	uint8_t x924 = 16U;
	volatile uint32_t t198 = 21U;

    t198 = (x921-(x922!=(x923/x924)));

    if (t198 != 53U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x929 = INT16_MAX;
	int16_t x930 = INT16_MIN;
	uint32_t x931 = UINT32_MAX;
	int32_t x932 = INT32_MIN;
	static volatile int32_t t199 = 69447763;

    t199 = (x929-(x930!=(x931/x932)));

    if (t199 != 32766) { NG(); } else { ; }
	
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

