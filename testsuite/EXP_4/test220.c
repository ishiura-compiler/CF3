
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

volatile int32_t x11 = -8647;
int8_t x16 = 1;
int8_t x20 = -2;
uint8_t x31 = 11U;
uint8_t x35 = 3U;
int32_t t8 = 5;
uint32_t x40 = 29U;
int32_t t9 = 138750;
int16_t x46 = INT16_MAX;
volatile int32_t t12 = -19786;
static int8_t x67 = -1;
static int32_t t14 = 211631;
volatile int16_t x69 = INT16_MIN;
volatile uint64_t x71 = UINT64_MAX;
int64_t x77 = INT64_MIN;
static volatile int32_t x79 = 1444161;
static int32_t t17 = 66942;
uint32_t x85 = 0U;
volatile uint8_t x87 = 0U;
uint8_t x89 = 0U;
static uint8_t x90 = 19U;
uint8_t x95 = 81U;
int16_t x112 = -887;
static int8_t x115 = INT8_MIN;
int8_t x125 = -57;
uint16_t x126 = 4U;
uint8_t x128 = UINT8_MAX;
volatile int16_t x133 = -1;
int32_t t29 = -38203;
int8_t x142 = -19;
int16_t x143 = -1;
static uint8_t x144 = 0U;
int32_t t31 = 84129;
uint8_t x153 = 36U;
uint16_t x156 = UINT16_MAX;
volatile int32_t t32 = -1;
int64_t x161 = -1LL;
int32_t x180 = INT32_MIN;
int32_t x185 = 5275;
int16_t x187 = INT16_MAX;
int32_t t36 = 26685045;
static int32_t x196 = INT32_MIN;
int32_t t38 = -1909;
int64_t x206 = INT64_MAX;
int8_t x208 = INT8_MAX;
volatile int64_t x209 = -1LL;
volatile uint8_t x215 = 25U;
int8_t x229 = INT8_MIN;
uint16_t x232 = 0U;
static int32_t x234 = 858993;
int16_t x239 = INT16_MIN;
uint16_t x241 = UINT16_MAX;
int8_t x242 = -62;
static int32_t x244 = -1;
volatile uint8_t x245 = 0U;
int64_t x248 = 0LL;
int32_t t50 = -1443;
static volatile uint8_t x249 = 54U;
int32_t t51 = -1;
static volatile int16_t x254 = 164;
int16_t x256 = -1;
int32_t t53 = 995;
static volatile uint8_t x265 = UINT8_MAX;
int64_t x274 = INT64_MAX;
uint32_t x275 = UINT32_MAX;
int32_t t55 = -190408;
volatile int64_t x280 = -1LL;
uint16_t x281 = 1584U;
uint32_t x282 = 361075U;
int64_t x283 = -1050216970298180LL;
uint32_t x285 = UINT32_MAX;
int64_t x287 = 83LL;
int8_t x288 = -1;
uint8_t x291 = UINT8_MAX;
volatile int8_t x292 = INT8_MIN;
volatile int32_t t59 = -446;
int8_t x299 = -1;
static volatile int32_t t62 = 255571;
int8_t x320 = -1;
static int8_t x323 = -40;
volatile int32_t t66 = -118;
int64_t x329 = -84700405291608LL;
static int16_t x333 = INT16_MIN;
int32_t t68 = -25;
uint64_t x337 = 678135844585LLU;
volatile int8_t x339 = INT8_MIN;
int32_t t69 = 908647;
volatile int16_t x347 = INT16_MAX;
uint16_t x349 = UINT16_MAX;
uint8_t x354 = UINT8_MAX;
uint32_t x355 = 1U;
volatile uint16_t x360 = UINT16_MAX;
int16_t x371 = INT16_MIN;
uint8_t x373 = 0U;
static int32_t x376 = 20196;
int32_t t79 = 10852;
int8_t x392 = -1;
uint8_t x402 = 4U;
int32_t t85 = 754391;
int32_t x417 = INT32_MIN;
volatile int8_t x419 = 0;
uint8_t x429 = 10U;
int8_t x433 = INT8_MAX;
volatile uint16_t x434 = 1U;
int8_t x437 = -50;
int16_t x441 = INT16_MIN;
volatile int64_t x443 = INT64_MIN;
volatile uint64_t x444 = 52805LLU;
int32_t t92 = 1872;
uint8_t x457 = 0U;
static int8_t x459 = -1;
volatile int32_t t93 = 103;
static uint32_t x464 = UINT32_MAX;
static int16_t x469 = INT16_MIN;
int64_t x470 = INT64_MIN;
int64_t x481 = INT64_MIN;
volatile int32_t t97 = 3323;
volatile uint16_t x485 = 2U;
int16_t x491 = -1;
int32_t t103 = -1;
int32_t t106 = 12190;
static int32_t t107 = -1600878;
int32_t x531 = -1;
int64_t x539 = INT64_MAX;
volatile uint64_t x540 = 126467072175165452LLU;
static volatile int32_t t109 = 2;
volatile uint16_t x543 = UINT16_MAX;
volatile uint16_t x544 = UINT16_MAX;
int8_t x559 = INT8_MAX;
int8_t x561 = INT8_MAX;
int8_t x562 = 27;
int8_t x564 = 9;
int64_t x568 = 1291286LL;
volatile int32_t t113 = -896;
uint64_t x572 = UINT64_MAX;
volatile int32_t t114 = -42152;
int8_t x574 = INT8_MIN;
volatile int32_t x581 = INT32_MAX;
volatile uint32_t x593 = UINT32_MAX;
int32_t t118 = -2366;
static uint16_t x600 = 181U;
static volatile int32_t t119 = 453269;
static int8_t x601 = INT8_MIN;
static int8_t x627 = 0;
uint16_t x632 = UINT16_MAX;
int32_t t126 = 1;
int32_t t127 = 60506;
int64_t x637 = INT64_MAX;
int32_t x640 = INT32_MIN;
volatile int32_t t128 = -32;
int32_t x641 = INT32_MIN;
static int64_t x644 = INT64_MAX;
int8_t x648 = -1;
int64_t x655 = INT64_MIN;
static volatile int32_t x656 = INT32_MIN;
uint8_t x658 = 24U;
volatile int64_t x660 = INT64_MIN;
int32_t x668 = -382;
volatile int32_t t134 = -820553451;
volatile uint16_t x678 = 13U;
static uint64_t x697 = UINT64_MAX;
uint64_t x698 = 43010567996133LLU;
int16_t x706 = INT16_MAX;
uint16_t x717 = 7956U;
uint16_t x735 = 0U;
static uint32_t x736 = UINT32_MAX;
static uint32_t x750 = UINT32_MAX;
static int16_t x754 = -1;
static volatile int32_t x757 = 57;
volatile uint16_t x771 = 31279U;
uint64_t x772 = UINT64_MAX;
int32_t t155 = 6273640;
int64_t x785 = -1101395547032744045LL;
int32_t x791 = INT32_MAX;
volatile int8_t x798 = INT8_MAX;
uint16_t x807 = UINT16_MAX;
static int16_t x812 = -1;
volatile int32_t x830 = -27867;
int32_t t163 = -52682;
uint16_t x838 = 1U;
int16_t x840 = INT16_MIN;
int16_t x841 = INT16_MAX;
volatile uint16_t x845 = UINT16_MAX;
int8_t x850 = 0;
int16_t x851 = INT16_MIN;
int32_t x854 = INT32_MAX;
volatile int32_t x859 = INT32_MIN;
int16_t x862 = INT16_MIN;
volatile int32_t x879 = 7;
volatile uint16_t x880 = 105U;
volatile uint32_t x881 = 80390U;
static uint16_t x882 = 117U;
static volatile int8_t x883 = -1;
int64_t x890 = INT64_MIN;
int64_t x895 = INT64_MIN;
int32_t x905 = -931188691;
uint32_t x918 = 854391U;
static uint64_t x920 = 351LLU;
static int8_t x930 = -1;
static int8_t x934 = INT8_MIN;
int8_t x939 = INT8_MIN;
uint16_t x941 = 712U;
int64_t x948 = 5032133096979LL;
static uint16_t x952 = 3U;
volatile uint64_t x955 = 127239173LLU;
volatile int32_t t190 = 1;
int8_t x961 = -49;
int8_t x963 = 0;
volatile uint32_t x967 = 110169U;
static int32_t x971 = INT32_MIN;
int64_t x980 = 0LL;
uint64_t x990 = 279LLU;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	static int8_t x2 = INT8_MAX;
	static uint32_t x3 = 16U;
	volatile int32_t x4 = 59899;
	static volatile int32_t t0 = 1;

    t0 = (x1<=(x2-(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 18U;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -377252917;

    t1 = (x5<=(x6-(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = INT8_MIN;
	uint64_t x12 = 67997469598314769LLU;
	volatile int32_t t2 = 104;

    t2 = (x9<=(x10-(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MIN;
	volatile uint32_t x15 = 1536U;
	int32_t t3 = -5;

    t3 = (x13<=(x14-(x15-x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 7U;
	uint32_t x18 = 1U;
	int8_t x19 = INT8_MAX;
	static volatile int32_t t4 = -132;

    t4 = (x17<=(x18-(x19-x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 521460617;
	int32_t x22 = -1;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = -3460241158278LL;
	int32_t t5 = 86062;

    t5 = (x21<=(x22-(x23-x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = 3LL;
	uint8_t x26 = 57U;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -95;

    t6 = (x25<=(x26-(x27-x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 21U;
	uint8_t x30 = 81U;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = -412465;

    t7 = (x29<=(x30-(x31-x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int8_t x34 = -1;
	int8_t x36 = 1;

    t8 = (x33<=(x34-(x35-x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	static int32_t x38 = INT32_MIN;
	volatile int8_t x39 = INT8_MIN;

    t9 = (x37<=(x38-(x39-x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -570LL;
	int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 18U;
	volatile int32_t t10 = 10112168;

    t10 = (x41<=(x42-(x43-x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 4624781U;
	volatile int8_t x47 = -1;
	uint32_t x48 = UINT32_MAX;
	static int32_t t11 = 9382928;

    t11 = (x45<=(x46-(x47-x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 66787739;
	volatile uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 2540184U;
	int32_t x52 = -78;

    t12 = (x49<=(x50-(x51-x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x57 = 341957724U;
	volatile uint64_t x58 = 51LLU;
	volatile int16_t x59 = INT16_MIN;
	static uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = 7;

    t13 = (x57<=(x58-(x59-x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	uint8_t x68 = 1U;

    t14 = (x65<=(x66-(x67-x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x70 = -23228396LL;
	int8_t x72 = -7;
	volatile int32_t t15 = -1067;

    t15 = (x69<=(x70-(x71-x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MAX;
	volatile int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MIN;
	volatile int32_t t16 = 15930318;

    t16 = (x73<=(x74-(x75-x76)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x78 = 0U;
	int64_t x80 = 5602352LL;

    t17 = (x77<=(x78-(x79-x80)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -832;
	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = -1;
	volatile int32_t t18 = 45165;

    t18 = (x81<=(x82-(x83-x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x86 = 12883666475LL;
	static int32_t x88 = 277;
	volatile int32_t t19 = 49;

    t19 = (x85<=(x86-(x87-x88)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x91 = INT64_MIN;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t20 = -2596075;

    t20 = (x89<=(x90-(x91-x92)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MAX;
	int8_t x94 = INT8_MAX;
	volatile int32_t x96 = -21;
	volatile int32_t t21 = -36;

    t21 = (x93<=(x94-(x95-x96)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MIN;
	static int32_t x99 = -1;
	int64_t x100 = -1LL;
	static volatile int32_t t22 = -2;

    t22 = (x97<=(x98-(x99-x100)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	uint64_t x102 = 402488033LLU;
	int32_t x103 = -14709;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int32_t t23 = 18355;

    t23 = (x101<=(x102-(x103-x104)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x109 = UINT8_MAX;
	static volatile int64_t x110 = -1LL;
	static uint32_t x111 = 198U;
	static int32_t t24 = -1050610;

    t24 = (x109<=(x110-(x111-x112)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -109;
	static volatile int32_t x114 = INT32_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t25 = -2038233;

    t25 = (x113<=(x114-(x115-x116)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = 88U;
	uint32_t x118 = 2U;
	volatile int16_t x119 = -1;
	volatile uint8_t x120 = 10U;
	volatile int32_t t26 = -21;

    t26 = (x117<=(x118-(x119-x120)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x127 = 1285U;
	int32_t t27 = 355411;

    t27 = (x125<=(x126-(x127-x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	uint8_t x131 = 57U;
	uint16_t x132 = 15227U;
	volatile int32_t t28 = -1646;

    t28 = (x129<=(x130-(x131-x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x134 = 1;
	int8_t x135 = 0;
	int16_t x136 = INT16_MAX;

    t29 = (x133<=(x134-(x135-x136)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x137 = 13215LLU;
	int32_t x138 = INT32_MAX;
	static uint32_t x139 = 60566940U;
	static uint64_t x140 = UINT64_MAX;
	int32_t t30 = -54;

    t30 = (x137<=(x138-(x139-x140)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x141 = 2LLU;

    t31 = (x141<=(x142-(x143-x144)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x154 = INT8_MAX;
	int8_t x155 = -3;

    t32 = (x153<=(x154-(x155-x156)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x162 = INT8_MIN;
	uint8_t x163 = 17U;
	uint16_t x164 = 524U;
	int32_t t33 = 3;

    t33 = (x161<=(x162-(x163-x164)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x177 = INT64_MIN;
	int16_t x178 = -113;
	int32_t x179 = -2660;
	volatile int32_t t34 = -497670188;

    t34 = (x177<=(x178-(x179-x180)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x181 = INT32_MAX;
	uint32_t x182 = 6877U;
	volatile int64_t x183 = -6800939600422LL;
	int16_t x184 = -3;
	volatile int32_t t35 = -12778814;

    t35 = (x181<=(x182-(x183-x184)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x186 = -224060;
	volatile uint64_t x188 = 4LLU;

    t36 = (x185<=(x186-(x187-x188)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x191 = -597;
	int8_t x192 = INT8_MIN;
	int32_t t37 = 82648422;

    t37 = (x189<=(x190-(x191-x192)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x193 = 112732571690271LLU;
	static int16_t x194 = -1;
	int32_t x195 = INT32_MIN;

    t38 = (x193<=(x194-(x195-x196)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x197 = INT16_MIN;
	uint8_t x198 = 0U;
	volatile int16_t x199 = INT16_MAX;
	static volatile uint32_t x200 = 1U;
	int32_t t39 = 0;

    t39 = (x197<=(x198-(x199-x200)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x201 = -1;
	static volatile int8_t x202 = -7;
	static int32_t x203 = -1;
	uint32_t x204 = 289426256U;
	volatile int32_t t40 = -21640856;

    t40 = (x201<=(x202-(x203-x204)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x205 = INT8_MAX;
	uint16_t x207 = UINT16_MAX;
	int32_t t41 = -46165100;

    t41 = (x205<=(x206-(x207-x208)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x210 = 4U;
	static int8_t x211 = 0;
	int8_t x212 = INT8_MAX;
	volatile int32_t t42 = 0;

    t42 = (x209<=(x210-(x211-x212)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = -1;
	volatile uint8_t x214 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	static int32_t t43 = -109857410;

    t43 = (x213<=(x214-(x215-x216)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x217 = INT32_MIN;
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 70U;
	int32_t x220 = -1;
	static int32_t t44 = -11;

    t44 = (x217<=(x218-(x219-x220)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x225 = INT32_MIN;
	volatile int8_t x226 = -1;
	int8_t x227 = -1;
	int8_t x228 = INT8_MIN;
	int32_t t45 = -203436;

    t45 = (x225<=(x226-(x227-x228)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x230 = -52;
	volatile uint64_t x231 = 274627482893999779LLU;
	static volatile int32_t t46 = -2775912;

    t46 = (x229<=(x230-(x231-x232)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x233 = 1402806870232078LLU;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t47 = -1;

    t47 = (x233<=(x234-(x235-x236)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	static volatile uint16_t x240 = 10U;
	int32_t t48 = 3;

    t48 = (x237<=(x238-(x239-x240)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x243 = -32456;
	int32_t t49 = -188593759;

    t49 = (x241<=(x242-(x243-x244)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = UINT8_MAX;

    t50 = (x245<=(x246-(x247-x248)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x250 = 3610U;
	uint8_t x251 = 0U;
	uint8_t x252 = UINT8_MAX;

    t51 = (x249<=(x250-(x251-x252)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x253 = -424750226651LL;
	static int8_t x255 = INT8_MIN;
	static volatile int32_t t52 = 8199453;

    t52 = (x253<=(x254-(x255-x256)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x261 = 25U;
	int8_t x262 = INT8_MAX;
	uint32_t x263 = 1U;
	static int16_t x264 = INT16_MAX;

    t53 = (x261<=(x262-(x263-x264)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MAX;
	int32_t x268 = -155;
	int32_t t54 = 11085947;

    t54 = (x265<=(x266-(x267-x268)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x273 = INT64_MIN;
	uint32_t x276 = UINT32_MAX;

    t55 = (x273<=(x274-(x275-x276)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x277 = -8108;
	uint64_t x278 = 1103900099590LLU;
	static int8_t x279 = 31;
	volatile int32_t t56 = 10;

    t56 = (x277<=(x278-(x279-x280)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x284 = INT64_MIN;
	volatile int32_t t57 = 14694955;

    t57 = (x281<=(x282-(x283-x284)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x286 = INT8_MAX;
	volatile int32_t t58 = -2030;

    t58 = (x285<=(x286-(x287-x288)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x289 = -531;
	static int8_t x290 = -1;

    t59 = (x289<=(x290-(x291-x292)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x293 = 18692275784168147LLU;
	static int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 0U;
	int32_t t60 = 187599;

    t60 = (x293<=(x294-(x295-x296)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x297 = 3717;
	static volatile int8_t x298 = -28;
	volatile int16_t x300 = 14;
	volatile int32_t t61 = -32134;

    t61 = (x297<=(x298-(x299-x300)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int8_t x302 = -2;
	static uint8_t x303 = 41U;
	int8_t x304 = -5;

    t62 = (x301<=(x302-(x303-x304)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 268780U;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t63 = -11318708;

    t63 = (x309<=(x310-(x311-x312)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x317 = 118U;
	uint8_t x318 = 4U;
	uint64_t x319 = 147622LLU;
	volatile int32_t t64 = -4312;

    t64 = (x317<=(x318-(x319-x320)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x321 = INT8_MIN;
	volatile uint64_t x322 = 341864LLU;
	static int64_t x324 = -1LL;
	static int32_t t65 = 2467162;

    t65 = (x321<=(x322-(x323-x324)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x325 = -1;
	volatile int16_t x326 = -2;
	int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MIN;

    t66 = (x325<=(x326-(x327-x328)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 3013651601608LLU;
	static uint64_t x332 = 107362641908048LLU;
	static volatile int32_t t67 = 35;

    t67 = (x329<=(x330-(x331-x332)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x334 = INT32_MIN;
	int64_t x335 = -234229654477LL;
	volatile int16_t x336 = -1;

    t68 = (x333<=(x334-(x335-x336)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x338 = 920993296LLU;
	int64_t x340 = INT64_MIN;

    t69 = (x337<=(x338-(x339-x340)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x341 = 614279LLU;
	uint64_t x342 = 738LLU;
	volatile int64_t x343 = -1LL;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t70 = -367439036;

    t70 = (x341<=(x342-(x343-x344)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x345 = 1;
	uint64_t x346 = 24914LLU;
	int8_t x348 = 1;
	volatile int32_t t71 = -738;

    t71 = (x345<=(x346-(x347-x348)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x350 = INT16_MIN;
	static int8_t x351 = INT8_MIN;
	static int8_t x352 = 10;
	int32_t t72 = -176324101;

    t72 = (x349<=(x350-(x351-x352)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x353 = INT32_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t73 = 3;

    t73 = (x353<=(x354-(x355-x356)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x357 = INT32_MAX;
	int8_t x358 = -54;
	int16_t x359 = -3;
	volatile int32_t t74 = 3847172;

    t74 = (x357<=(x358-(x359-x360)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x361 = 11441919783549LLU;
	int16_t x362 = -1;
	int8_t x363 = 0;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t75 = 6665852;

    t75 = (x361<=(x362-(x363-x364)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x365 = -29;
	static int32_t x366 = INT32_MIN;
	int16_t x367 = -246;
	int16_t x368 = INT16_MAX;
	int32_t t76 = 0;

    t76 = (x365<=(x366-(x367-x368)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile int8_t x370 = 3;
	uint32_t x372 = 1039840U;
	volatile int32_t t77 = 703029;

    t77 = (x369<=(x370-(x371-x372)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x374 = -1;
	volatile int64_t x375 = -17519LL;
	int32_t t78 = -231040;

    t78 = (x373<=(x374-(x375-x376)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x377 = 54U;
	static uint64_t x378 = UINT64_MAX;
	static uint8_t x379 = 0U;
	uint8_t x380 = 3U;

    t79 = (x377<=(x378-(x379-x380)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = INT64_MAX;
	static int8_t x382 = -1;
	int16_t x383 = -4;
	int8_t x384 = -1;
	volatile int32_t t80 = 1;

    t80 = (x381<=(x382-(x383-x384)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x385 = INT8_MAX;
	volatile int64_t x386 = INT64_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MAX;
	volatile int32_t t81 = -14874819;

    t81 = (x385<=(x386-(x387-x388)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x389 = 7971;
	int8_t x390 = -1;
	uint64_t x391 = 5666LLU;
	static volatile int32_t t82 = -385;

    t82 = (x389<=(x390-(x391-x392)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x393 = -1;
	static volatile uint8_t x394 = 2U;
	int64_t x395 = -24821128LL;
	int16_t x396 = 143;
	volatile int32_t t83 = -169354526;

    t83 = (x393<=(x394-(x395-x396)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x397 = 7U;
	int32_t x398 = 2029;
	int8_t x399 = INT8_MIN;
	static volatile uint64_t x400 = UINT64_MAX;
	volatile int32_t t84 = 165;

    t84 = (x397<=(x398-(x399-x400)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x401 = 0;
	int64_t x403 = -2592110310193LL;
	uint32_t x404 = UINT32_MAX;

    t85 = (x401<=(x402-(x403-x404)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x418 = 58316245014247LL;
	static uint32_t x420 = UINT32_MAX;
	int32_t t86 = 6719226;

    t86 = (x417<=(x418-(x419-x420)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x421 = INT16_MAX;
	volatile uint16_t x422 = UINT16_MAX;
	int64_t x423 = 10053077664814LL;
	int8_t x424 = 1;
	volatile int32_t t87 = 1988870;

    t87 = (x421<=(x422-(x423-x424)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x425 = 24;
	uint8_t x426 = 1U;
	int32_t x427 = -1;
	volatile int8_t x428 = INT8_MIN;
	int32_t t88 = 285416;

    t88 = (x425<=(x426-(x427-x428)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x430 = INT32_MIN;
	uint32_t x431 = 129893U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t89 = -7741450;

    t89 = (x429<=(x430-(x431-x432)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x435 = UINT8_MAX;
	uint32_t x436 = UINT32_MAX;
	static int32_t t90 = -151;

    t90 = (x433<=(x434-(x435-x436)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = INT8_MIN;
	static int64_t x440 = 957548718492LL;
	volatile int32_t t91 = -100439885;

    t91 = (x437<=(x438-(x439-x440)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint64_t x442 = 1814640972336203LLU;

    t92 = (x441<=(x442-(x443-x444)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x458 = INT16_MAX;
	int32_t x460 = INT32_MIN;

    t93 = (x457<=(x458-(x459-x460)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x461 = -1;
	int32_t x462 = INT32_MAX;
	int32_t x463 = INT32_MAX;
	int32_t t94 = 3;

    t94 = (x461<=(x462-(x463-x464)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x465 = 518U;
	int64_t x466 = -1LL;
	int64_t x467 = -1LL;
	int8_t x468 = -62;
	int32_t t95 = 1;

    t95 = (x465<=(x466-(x467-x468)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x471 = -1LL;
	volatile int32_t x472 = INT32_MAX;
	int32_t t96 = 965131413;

    t96 = (x469<=(x470-(x471-x472)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x482 = INT16_MAX;
	uint32_t x483 = 375U;
	int8_t x484 = INT8_MAX;

    t97 = (x481<=(x482-(x483-x484)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x486 = 26LLU;
	uint64_t x487 = UINT64_MAX;
	volatile uint8_t x488 = 15U;
	int32_t t98 = 3188653;

    t98 = (x485<=(x486-(x487-x488)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x489 = INT32_MIN;
	static int64_t x490 = INT64_MIN;
	int32_t x492 = 15618;
	int32_t t99 = -150544859;

    t99 = (x489<=(x490-(x491-x492)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x497 = UINT32_MAX;
	int8_t x498 = -1;
	volatile int32_t x499 = INT32_MIN;
	int32_t x500 = INT32_MIN;
	volatile int32_t t100 = -10443497;

    t100 = (x497<=(x498-(x499-x500)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x501 = -13;
	int16_t x502 = INT16_MIN;
	uint16_t x503 = UINT16_MAX;
	int8_t x504 = -1;
	int32_t t101 = 332394660;

    t101 = (x501<=(x502-(x503-x504)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x505 = -53;
	static uint32_t x506 = 41U;
	int8_t x507 = INT8_MIN;
	static volatile int16_t x508 = INT16_MIN;
	volatile int32_t t102 = -2089113;

    t102 = (x505<=(x506-(x507-x508)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x509 = INT64_MAX;
	volatile uint32_t x510 = 299814U;
	uint16_t x511 = 6U;
	int32_t x512 = 414;

    t103 = (x509<=(x510-(x511-x512)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x513 = INT32_MIN;
	volatile int32_t x514 = -1789;
	static int64_t x515 = INT64_MIN;
	int8_t x516 = INT8_MIN;
	int32_t t104 = 60505758;

    t104 = (x513<=(x514-(x515-x516)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x517 = 504LLU;
	static volatile uint32_t x518 = 18473U;
	int16_t x519 = INT16_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t105 = -910;

    t105 = (x517<=(x518-(x519-x520)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x521 = 1392U;
	volatile int32_t x522 = INT32_MAX;
	uint32_t x523 = UINT32_MAX;
	volatile uint8_t x524 = 1U;

    t106 = (x521<=(x522-(x523-x524)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int32_t x527 = -1;
	volatile int64_t x528 = -29410LL;

    t107 = (x525<=(x526-(x527-x528)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x529 = 1;
	uint8_t x530 = UINT8_MAX;
	int32_t x532 = 1867947;
	int32_t t108 = -2563725;

    t108 = (x529<=(x530-(x531-x532)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = 54;

    t109 = (x537<=(x538-(x539-x540)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x541 = 14611U;
	uint16_t x542 = 24380U;
	volatile int32_t t110 = -7438;

    t110 = (x541<=(x542-(x543-x544)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x557 = UINT16_MAX;
	uint64_t x558 = 3530258729736057LLU;
	int16_t x560 = INT16_MIN;
	volatile int32_t t111 = -8;

    t111 = (x557<=(x558-(x559-x560)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x563 = 0;
	static int32_t t112 = 30;

    t112 = (x561<=(x562-(x563-x564)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x565 = INT16_MAX;
	volatile int16_t x566 = INT16_MAX;
	int8_t x567 = INT8_MIN;

    t113 = (x565<=(x566-(x567-x568)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x569 = 29731347757404166LLU;
	volatile int8_t x570 = 6;
	int32_t x571 = INT32_MAX;

    t114 = (x569<=(x570-(x571-x572)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x573 = INT8_MAX;
	static int32_t x575 = INT32_MAX;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t115 = 106522630;

    t115 = (x573<=(x574-(x575-x576)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x582 = INT16_MAX;
	int8_t x583 = INT8_MIN;
	static int64_t x584 = INT64_MIN;
	volatile int32_t t116 = -1;

    t116 = (x581<=(x582-(x583-x584)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x589 = -12;
	int32_t x590 = INT32_MIN;
	volatile uint64_t x591 = UINT64_MAX;
	int16_t x592 = INT16_MIN;
	static volatile int32_t t117 = -3936687;

    t117 = (x589<=(x590-(x591-x592)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x594 = INT8_MIN;
	static uint8_t x595 = 2U;
	volatile uint8_t x596 = 1U;

    t118 = (x593<=(x594-(x595-x596)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x597 = 350;
	int16_t x598 = INT16_MIN;
	uint8_t x599 = UINT8_MAX;

    t119 = (x597<=(x598-(x599-x600)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x602 = 257299;
	int64_t x603 = -174549773005LL;
	volatile int64_t x604 = INT64_MIN;
	static int32_t t120 = -30011225;

    t120 = (x601<=(x602-(x603-x604)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x605 = INT64_MIN;
	uint32_t x606 = 5U;
	int16_t x607 = INT16_MIN;
	static int8_t x608 = -1;
	volatile int32_t t121 = 3;

    t121 = (x605<=(x606-(x607-x608)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x609 = 11;
	int8_t x610 = INT8_MAX;
	int8_t x611 = 7;
	int16_t x612 = -1;
	int32_t t122 = -19;

    t122 = (x609<=(x610-(x611-x612)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x617 = UINT16_MAX;
	uint16_t x618 = UINT16_MAX;
	int8_t x619 = INT8_MIN;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t123 = 18;

    t123 = (x617<=(x618-(x619-x620)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x621 = -8184006LL;
	int8_t x622 = 0;
	int32_t x623 = -1;
	int8_t x624 = 0;
	static volatile int32_t t124 = 2;

    t124 = (x621<=(x622-(x623-x624)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x625 = UINT64_MAX;
	int16_t x626 = -1;
	uint32_t x628 = 30784930U;
	int32_t t125 = 22544223;

    t125 = (x625<=(x626-(x627-x628)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x629 = INT16_MIN;
	uint8_t x630 = 8U;
	uint64_t x631 = UINT64_MAX;

    t126 = (x629<=(x630-(x631-x632)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x633 = 703U;
	uint16_t x634 = 3061U;
	uint64_t x635 = 486025LLU;
	volatile int64_t x636 = 12081133735955375LL;

    t127 = (x633<=(x634-(x635-x636)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x638 = -1;
	int16_t x639 = -24;

    t128 = (x637<=(x638-(x639-x640)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x642 = 0;
	uint64_t x643 = 5LLU;
	int32_t t129 = 13298797;

    t129 = (x641<=(x642-(x643-x644)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x645 = INT64_MIN;
	uint8_t x646 = UINT8_MAX;
	int64_t x647 = 109902389276LL;
	volatile int32_t t130 = -1;

    t130 = (x645<=(x646-(x647-x648)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x653 = 71023U;
	static volatile int8_t x654 = INT8_MIN;
	int32_t t131 = -6;

    t131 = (x653<=(x654-(x655-x656)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x657 = 693;
	int8_t x659 = INT8_MIN;
	int32_t t132 = -712595;

    t132 = (x657<=(x658-(x659-x660)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x665 = INT64_MIN;
	uint32_t x666 = UINT32_MAX;
	volatile int32_t x667 = 67358;
	int32_t t133 = -383402003;

    t133 = (x665<=(x666-(x667-x668)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x673 = -1;
	int8_t x674 = 1;
	static volatile uint16_t x675 = 609U;
	int32_t x676 = -1;

    t134 = (x673<=(x674-(x675-x676)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x677 = -1;
	uint8_t x679 = 0U;
	uint8_t x680 = UINT8_MAX;
	int32_t t135 = 184545;

    t135 = (x677<=(x678-(x679-x680)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x681 = 3U;
	int32_t x682 = INT32_MIN;
	int64_t x683 = -1LL;
	static int32_t x684 = -109492523;
	int32_t t136 = 734;

    t136 = (x681<=(x682-(x683-x684)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x685 = -24;
	volatile int64_t x686 = INT64_MAX;
	int8_t x687 = INT8_MAX;
	uint8_t x688 = 4U;
	volatile int32_t t137 = -1;

    t137 = (x685<=(x686-(x687-x688)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x689 = 409686640000LLU;
	static int8_t x690 = INT8_MIN;
	int16_t x691 = INT16_MIN;
	int64_t x692 = 893LL;
	static int32_t t138 = 908092;

    t138 = (x689<=(x690-(x691-x692)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x699 = 5699931011983530LLU;
	int32_t x700 = INT32_MIN;
	volatile int32_t t139 = -16471129;

    t139 = (x697<=(x698-(x699-x700)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x705 = UINT32_MAX;
	uint64_t x707 = 20947181170207LLU;
	static volatile int32_t x708 = -1843;
	volatile int32_t t140 = -89778;

    t140 = (x705<=(x706-(x707-x708)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x713 = 97344601400LLU;
	volatile int32_t x714 = 3;
	int16_t x715 = INT16_MIN;
	int16_t x716 = 6290;
	int32_t t141 = -172093764;

    t141 = (x713<=(x714-(x715-x716)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x718 = -1;
	int8_t x719 = INT8_MIN;
	int64_t x720 = INT64_MIN;
	volatile int32_t t142 = -39;

    t142 = (x717<=(x718-(x719-x720)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x725 = UINT16_MAX;
	int64_t x726 = INT64_MAX;
	volatile int16_t x727 = INT16_MAX;
	uint16_t x728 = 1127U;
	int32_t t143 = -10;

    t143 = (x725<=(x726-(x727-x728)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x729 = 78U;
	uint64_t x730 = UINT64_MAX;
	int64_t x731 = INT64_MIN;
	uint64_t x732 = 2064271850LLU;
	volatile int32_t t144 = -71;

    t144 = (x729<=(x730-(x731-x732)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x733 = -1;
	int16_t x734 = -18;
	int32_t t145 = -849;

    t145 = (x733<=(x734-(x735-x736)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x737 = 16887461802801374LLU;
	uint16_t x738 = 4937U;
	int16_t x739 = 711;
	static uint16_t x740 = 43U;
	static int32_t t146 = -59861517;

    t146 = (x737<=(x738-(x739-x740)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x741 = 610347340LLU;
	static int64_t x742 = -1LL;
	volatile int8_t x743 = 5;
	int64_t x744 = -1LL;
	static int32_t t147 = 1032698;

    t147 = (x741<=(x742-(x743-x744)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x745 = 14U;
	volatile int16_t x746 = INT16_MIN;
	uint8_t x747 = 29U;
	uint32_t x748 = 1U;
	volatile int32_t t148 = -3230905;

    t148 = (x745<=(x746-(x747-x748)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x751 = INT8_MIN;
	volatile int8_t x752 = -7;
	int32_t t149 = -44503;

    t149 = (x749<=(x750-(x751-x752)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x753 = 1;
	int32_t x755 = -80;
	uint8_t x756 = UINT8_MAX;
	static int32_t t150 = 66;

    t150 = (x753<=(x754-(x755-x756)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x758 = 31370;
	volatile int32_t x759 = -13602235;
	int64_t x760 = 528885368LL;
	volatile int32_t t151 = 1;

    t151 = (x757<=(x758-(x759-x760)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x761 = -8;
	static uint8_t x762 = 57U;
	int64_t x763 = -181099930469660LL;
	uint8_t x764 = 1U;
	static volatile int32_t t152 = -1768;

    t152 = (x761<=(x762-(x763-x764)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x769 = INT32_MIN;
	int16_t x770 = INT16_MAX;
	static int32_t t153 = -1;

    t153 = (x769<=(x770-(x771-x772)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x773 = INT16_MIN;
	int64_t x774 = -1LL;
	int8_t x775 = -1;
	int64_t x776 = INT64_MIN;
	static volatile int32_t t154 = 12265244;

    t154 = (x773<=(x774-(x775-x776)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x781 = INT8_MIN;
	volatile int8_t x782 = -1;
	uint32_t x783 = 21668782U;
	uint8_t x784 = 28U;

    t155 = (x781<=(x782-(x783-x784)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x786 = INT16_MIN;
	volatile int16_t x787 = 5;
	uint16_t x788 = 171U;
	volatile int32_t t156 = -16442079;

    t156 = (x785<=(x786-(x787-x788)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x789 = 1432;
	uint64_t x790 = 552182137490360LLU;
	uint8_t x792 = 15U;
	static volatile int32_t t157 = 2929163;

    t157 = (x789<=(x790-(x791-x792)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x797 = INT8_MIN;
	volatile int32_t x799 = INT32_MIN;
	uint64_t x800 = UINT64_MAX;
	static int32_t t158 = -1720;

    t158 = (x797<=(x798-(x799-x800)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x805 = 1572442930LL;
	int64_t x806 = -1LL;
	int64_t x808 = -1099426636114670578LL;
	int32_t t159 = -1;

    t159 = (x805<=(x806-(x807-x808)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x809 = INT64_MAX;
	int8_t x810 = 1;
	uint64_t x811 = UINT64_MAX;
	static int32_t t160 = -123342;

    t160 = (x809<=(x810-(x811-x812)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x817 = -1;
	int8_t x818 = INT8_MAX;
	uint8_t x819 = 0U;
	uint16_t x820 = 15U;
	volatile int32_t t161 = 63538824;

    t161 = (x817<=(x818-(x819-x820)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x829 = UINT8_MAX;
	static uint8_t x831 = UINT8_MAX;
	uint32_t x832 = UINT32_MAX;
	static int32_t t162 = 17095;

    t162 = (x829<=(x830-(x831-x832)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x833 = INT16_MIN;
	static volatile uint16_t x834 = 25U;
	volatile int16_t x835 = -3;
	uint8_t x836 = 1U;

    t163 = (x833<=(x834-(x835-x836)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x837 = -1;
	int64_t x839 = -1LL;
	static volatile int32_t t164 = -2274;

    t164 = (x837<=(x838-(x839-x840)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x842 = 20884818966809LLU;
	static int32_t x843 = -1;
	volatile uint64_t x844 = 1660840589LLU;
	volatile int32_t t165 = -100;

    t165 = (x841<=(x842-(x843-x844)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x846 = -1114;
	uint32_t x847 = 15U;
	uint8_t x848 = UINT8_MAX;
	static volatile int32_t t166 = -7045841;

    t166 = (x845<=(x846-(x847-x848)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x849 = UINT64_MAX;
	uint64_t x852 = UINT64_MAX;
	int32_t t167 = -130087;

    t167 = (x849<=(x850-(x851-x852)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x853 = 7U;
	int16_t x855 = -1;
	static int16_t x856 = INT16_MIN;
	volatile int32_t t168 = -222343;

    t168 = (x853<=(x854-(x855-x856)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x857 = INT32_MIN;
	uint8_t x858 = UINT8_MAX;
	int16_t x860 = INT16_MIN;
	int32_t t169 = -7074;

    t169 = (x857<=(x858-(x859-x860)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x861 = -1;
	uint32_t x863 = 35779217U;
	uint64_t x864 = 14LLU;
	volatile int32_t t170 = -258465;

    t170 = (x861<=(x862-(x863-x864)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x869 = 2;
	int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MIN;
	int64_t x872 = -1LL;
	int32_t t171 = -4284;

    t171 = (x869<=(x870-(x871-x872)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x873 = -349LL;
	int16_t x874 = -2663;
	uint64_t x875 = UINT64_MAX;
	static int16_t x876 = -1;
	static int32_t t172 = 1007448186;

    t172 = (x873<=(x874-(x875-x876)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x877 = 2U;
	int16_t x878 = -6550;
	static volatile int32_t t173 = 31321;

    t173 = (x877<=(x878-(x879-x880)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x884 = 153LLU;
	int32_t t174 = 248;

    t174 = (x881<=(x882-(x883-x884)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x885 = INT64_MAX;
	uint16_t x886 = 710U;
	int16_t x887 = INT16_MAX;
	uint64_t x888 = 963LLU;
	volatile int32_t t175 = 46;

    t175 = (x885<=(x886-(x887-x888)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x889 = INT8_MAX;
	uint8_t x891 = UINT8_MAX;
	uint64_t x892 = UINT64_MAX;
	int32_t t176 = -2604;

    t176 = (x889<=(x890-(x891-x892)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x893 = INT32_MAX;
	static uint64_t x894 = UINT64_MAX;
	int64_t x896 = -327LL;
	volatile int32_t t177 = 188831;

    t177 = (x893<=(x894-(x895-x896)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x897 = 47U;
	static int16_t x898 = INT16_MIN;
	volatile int32_t x899 = 1;
	int8_t x900 = -3;
	static int32_t t178 = 110574580;

    t178 = (x897<=(x898-(x899-x900)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x906 = INT32_MAX;
	static uint16_t x907 = UINT16_MAX;
	int8_t x908 = INT8_MIN;
	int32_t t179 = -55939;

    t179 = (x905<=(x906-(x907-x908)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x909 = 1;
	int64_t x910 = -59433975LL;
	static int8_t x911 = -38;
	uint64_t x912 = UINT64_MAX;
	int32_t t180 = -629234289;

    t180 = (x909<=(x910-(x911-x912)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x917 = -1;
	uint32_t x919 = 356064U;
	int32_t t181 = -4024;

    t181 = (x917<=(x918-(x919-x920)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x921 = INT16_MAX;
	static int64_t x922 = -986940880138296LL;
	uint64_t x923 = 72689LLU;
	int64_t x924 = -1LL;
	static volatile int32_t t182 = -26;

    t182 = (x921<=(x922-(x923-x924)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x925 = 7789140181114798LL;
	uint32_t x926 = 424871U;
	volatile int16_t x927 = -1;
	int32_t x928 = INT32_MIN;
	volatile int32_t t183 = -43788090;

    t183 = (x925<=(x926-(x927-x928)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x929 = 2074204U;
	volatile int16_t x931 = -91;
	int32_t x932 = -1;
	int32_t t184 = -18378975;

    t184 = (x929<=(x930-(x931-x932)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x933 = -3748LL;
	uint32_t x935 = 97787065U;
	int8_t x936 = -1;
	int32_t t185 = 7035977;

    t185 = (x933<=(x934-(x935-x936)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x937 = UINT8_MAX;
	uint64_t x938 = 73828634773402453LLU;
	int8_t x940 = -26;
	static volatile int32_t t186 = 917002;

    t186 = (x937<=(x938-(x939-x940)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x942 = -360545LL;
	uint16_t x943 = 28U;
	uint64_t x944 = 47018729044362130LLU;
	volatile int32_t t187 = -8152138;

    t187 = (x941<=(x942-(x943-x944)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x945 = -6200025174LL;
	static int8_t x946 = INT8_MAX;
	uint32_t x947 = UINT32_MAX;
	volatile int32_t t188 = -1;

    t188 = (x945<=(x946-(x947-x948)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x949 = -1LL;
	uint16_t x950 = UINT16_MAX;
	uint64_t x951 = 12452542035082LLU;
	volatile int32_t t189 = -19439;

    t189 = (x949<=(x950-(x951-x952)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x953 = 1324306779976773LL;
	int16_t x954 = 6;
	volatile int16_t x956 = INT16_MAX;

    t190 = (x953<=(x954-(x955-x956)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x957 = 13U;
	int8_t x958 = -11;
	static int16_t x959 = -1;
	static uint16_t x960 = UINT16_MAX;
	static volatile int32_t t191 = 0;

    t191 = (x957<=(x958-(x959-x960)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x962 = 17;
	static int8_t x964 = INT8_MIN;
	int32_t t192 = 224751956;

    t192 = (x961<=(x962-(x963-x964)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x965 = -1;
	volatile int64_t x966 = INT64_MIN;
	uint64_t x968 = 96277659439833349LLU;
	int32_t t193 = -10961;

    t193 = (x965<=(x966-(x967-x968)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x969 = 495U;
	static uint8_t x970 = 12U;
	static uint64_t x972 = 895373LLU;
	int32_t t194 = 54702;

    t194 = (x969<=(x970-(x971-x972)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x977 = INT32_MAX;
	uint32_t x978 = 1060241859U;
	volatile int16_t x979 = -384;
	volatile int32_t t195 = 147480;

    t195 = (x977<=(x978-(x979-x980)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x985 = -6116;
	static volatile uint32_t x986 = 17640893U;
	static int64_t x987 = -1LL;
	int16_t x988 = INT16_MIN;
	int32_t t196 = -3053993;

    t196 = (x985<=(x986-(x987-x988)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x989 = -1;
	uint64_t x991 = UINT64_MAX;
	volatile int32_t x992 = INT32_MAX;
	static volatile int32_t t197 = 64528;

    t197 = (x989<=(x990-(x991-x992)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x993 = INT8_MIN;
	int8_t x994 = 0;
	uint8_t x995 = 7U;
	int8_t x996 = 0;
	int32_t t198 = 15812183;

    t198 = (x993<=(x994-(x995-x996)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x997 = INT8_MAX;
	int32_t x998 = 2166415;
	int16_t x999 = INT16_MAX;
	static int16_t x1000 = INT16_MAX;
	int32_t t199 = -576351923;

    t199 = (x997<=(x998-(x999-x1000)));

    if (t199 != 1) { NG(); } else { ; }
	
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

