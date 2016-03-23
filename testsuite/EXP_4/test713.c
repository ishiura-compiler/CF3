
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

static int16_t x8 = INT16_MIN;
volatile int32_t t1 = 60569;
volatile int32_t t4 = -1;
int32_t x22 = 1915385;
int8_t x24 = INT8_MIN;
volatile int64_t x29 = INT64_MAX;
static int64_t t8 = 2689510867628313816LL;
uint8_t x41 = 28U;
int8_t x42 = INT8_MIN;
static uint16_t x44 = UINT16_MAX;
int16_t x46 = 7712;
static int16_t x56 = INT16_MAX;
static uint16_t x66 = 0U;
int64_t x69 = -1LL;
int64_t x71 = -7837LL;
uint64_t x78 = UINT64_MAX;
volatile int64_t t20 = INT64_MAX;
volatile uint64_t t21 = UINT64_MAX;
static int8_t x105 = -1;
int32_t t25 = 19531;
static int32_t x135 = -1;
uint8_t x136 = UINT8_MAX;
static int32_t x138 = INT32_MAX;
int64_t x146 = INT64_MIN;
uint64_t x147 = 4840535LLU;
static volatile int32_t t35 = -43;
volatile int8_t x154 = INT8_MAX;
static int64_t x156 = INT64_MAX;
static int64_t x163 = INT64_MAX;
int64_t x165 = -4370731LL;
int8_t x170 = -1;
uint16_t x177 = 19U;
int8_t x179 = -1;
volatile int32_t x180 = INT32_MAX;
volatile int16_t x181 = 4135;
int32_t x182 = INT32_MIN;
volatile int32_t t44 = 16695722;
int8_t x190 = INT8_MAX;
int16_t x198 = INT16_MIN;
uint8_t x200 = 1U;
static int8_t x203 = -1;
int32_t t48 = 1;
volatile uint8_t x208 = 7U;
uint8_t x210 = 0U;
volatile int64_t x213 = INT64_MAX;
volatile int16_t x223 = 12221;
uint8_t x224 = 10U;
int16_t x227 = 15611;
uint64_t x231 = 4465327871945077703LLU;
int32_t x237 = INT32_MIN;
int32_t x239 = -104;
volatile int32_t t57 = 6281;
int64_t x242 = -21104084LL;
volatile int32_t t58 = -3;
volatile int32_t t60 = 5785;
uint32_t x257 = 295975585U;
uint32_t x262 = UINT32_MAX;
int32_t t64 = -3188;
int16_t x287 = -442;
uint32_t x292 = 1808U;
volatile int32_t t66 = 38991;
uint8_t x297 = UINT8_MAX;
uint32_t x300 = UINT32_MAX;
static volatile int16_t x303 = INT16_MAX;
int64_t x308 = 86LL;
static uint64_t x310 = UINT64_MAX;
static int16_t x312 = INT16_MIN;
int32_t t71 = -9;
static int8_t x324 = -1;
volatile int32_t t75 = -1;
int16_t x329 = 226;
int16_t x337 = INT16_MIN;
uint64_t x368 = 875218303LLU;
int64_t x370 = INT64_MIN;
static int64_t t86 = INT64_MAX;
int16_t x378 = -79;
int64_t t88 = 1430301612147456324LL;
int32_t t91 = -70703403;
static uint32_t x396 = 6248589U;
volatile int32_t t92 = -160319;
uint32_t x398 = 2022039664U;
int32_t x409 = 3496;
uint64_t x415 = 277405664709351LLU;
volatile int32_t x418 = INT32_MIN;
volatile int64_t x420 = INT64_MIN;
volatile int8_t x422 = 15;
int32_t x430 = INT32_MAX;
int16_t x434 = -1;
volatile int32_t t102 = 4463978;
static int64_t x441 = INT64_MIN;
uint32_t x463 = 994358U;
uint32_t x471 = UINT32_MAX;
volatile uint32_t x480 = UINT32_MAX;
volatile int32_t t114 = -520;
static volatile int8_t x488 = 4;
volatile int32_t t115 = 2421;
uint64_t x491 = UINT64_MAX;
int8_t x493 = INT8_MIN;
volatile int64_t x495 = 117651172LL;
int64_t x498 = -108665661LL;
int64_t x507 = -1LL;
int8_t x509 = INT8_MAX;
volatile int32_t t121 = -4659804;
volatile int32_t t122 = 3969055;
int8_t x521 = -1;
static volatile int16_t x523 = INT16_MIN;
static volatile int32_t t124 = 0;
volatile uint32_t x527 = UINT32_MAX;
int16_t x532 = INT16_MIN;
int8_t x536 = -1;
static uint8_t x537 = UINT8_MAX;
int16_t x544 = INT16_MIN;
uint8_t x545 = 16U;
volatile uint32_t x549 = 36U;
static volatile int64_t x553 = INT64_MIN;
int64_t t132 = -477407370263754308LL;
static int16_t x561 = 1;
int64_t x564 = INT64_MAX;
int8_t x565 = -9;
static int16_t x569 = INT16_MAX;
volatile uint16_t x571 = UINT16_MAX;
int8_t x582 = -1;
uint8_t x584 = 69U;
int32_t t139 = -7370;
int32_t t140 = -516;
volatile int32_t x592 = 6;
int8_t x604 = 14;
uint64_t x608 = UINT64_MAX;
static volatile uint32_t t145 = 207375189U;
uint16_t x623 = 1U;
static int16_t x625 = INT16_MIN;
int64_t x641 = -1LL;
uint16_t x648 = 1U;
uint16_t x653 = UINT16_MAX;
int64_t x656 = -1LL;
int8_t x659 = INT8_MIN;
volatile uint32_t x663 = UINT32_MAX;
static int64_t t160 = -1131957604390757LL;
int8_t x676 = INT8_MIN;
volatile int16_t x680 = INT16_MAX;
volatile uint64_t x682 = 2471664LLU;
static int32_t x688 = -1355;
int32_t t164 = 98;
int64_t x696 = -2LL;
volatile int32_t t166 = INT32_MAX;
int32_t t167 = -74120827;
uint64_t x701 = UINT64_MAX;
uint64_t t168 = UINT64_MAX;
static int64_t x706 = INT64_MIN;
volatile int32_t t173 = 3919;
int32_t x732 = -1;
uint64_t x733 = 192892392128152067LLU;
volatile int16_t x737 = -1;
int16_t x739 = INT16_MIN;
volatile int16_t x743 = INT16_MAX;
int16_t x748 = INT16_MAX;
int64_t x763 = INT64_MAX;
volatile int32_t x768 = INT32_MIN;
static uint64_t x769 = UINT64_MAX;
uint64_t t185 = UINT64_MAX;
int64_t x773 = INT64_MAX;
static int32_t x774 = 104668413;
int8_t x776 = INT8_MIN;
static int16_t x779 = INT16_MIN;
int16_t x785 = 1;
static int64_t x791 = 45200128059674LL;
static volatile uint32_t x796 = UINT32_MAX;
volatile int32_t t192 = -1957;
static uint16_t x801 = 3U;
volatile int64_t x808 = -1LL;
volatile int64_t x810 = -1LL;
volatile int32_t x811 = INT32_MIN;
int32_t t195 = -2610;
int64_t x819 = -1LL;
volatile uint64_t x820 = 60652LLU;
volatile int64_t x822 = -393880239LL;
int8_t x828 = INT8_MAX;


void f0(void) {
    	uint32_t x1 = 573145067U;
	int64_t x2 = INT64_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int64_t x4 = INT64_MIN;
	volatile uint32_t t0 = 143282228U;

    t0 = (x1|(x2>(x3/x4)));

    if (t0 != 573145067U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = -1;
	static volatile int16_t x7 = INT16_MAX;

    t1 = (x5|(x6>(x7/x8)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = 48U;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 42U;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 1827;

    t2 = (x9|(x10>(x11/x12)));

    if (t2 != 49) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint8_t x14 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = -3;
	int32_t t3 = 415;

    t3 = (x13|(x14>(x15/x16)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 1U;
	int8_t x18 = INT8_MIN;
	uint16_t x19 = UINT16_MAX;
	static int16_t x20 = INT16_MIN;

    t4 = (x17|(x18>(x19/x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 12U;
	volatile int8_t x23 = INT8_MAX;
	uint32_t t5 = 35U;

    t5 = (x21|(x22>(x23/x24)));

    if (t5 != 13U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	static int64_t x26 = INT64_MIN;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 266374823;

    t6 = (x25|(x26>(x27/x28)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = 2014419786LL;
	volatile uint32_t x31 = 8163104U;
	int32_t x32 = -1;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x29|(x30>(x31/x32)));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	uint16_t x34 = 11135U;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = INT8_MIN;

    t8 = (x33|(x34>(x35/x36)));

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	volatile int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	static volatile uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = INT32_MAX;

    t9 = (x37|(x38>(x39/x40)));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x43 = INT32_MAX;
	int32_t t10 = -58901;

    t10 = (x41|(x42>(x43/x44)));

    if (t10 != 28) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 1;
	int16_t x47 = -23;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 54;

    t11 = (x45|(x46>(x47/x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	uint8_t x54 = 33U;
	int8_t x55 = -40;
	int32_t t12 = 9559;

    t12 = (x53|(x54>(x55/x56)));

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -1;
	int8_t x58 = INT8_MIN;
	static int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	static int32_t t13 = -850576;

    t13 = (x57|(x58>(x59/x60)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x61 = UINT8_MAX;
	int8_t x62 = 1;
	int64_t x63 = -1963LL;
	static int8_t x64 = 1;
	volatile int32_t t14 = 33065376;

    t14 = (x61|(x62>(x63/x64)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 22;
	int64_t x67 = -2LL;
	int64_t x68 = INT64_MIN;
	volatile int32_t t15 = -10955;

    t15 = (x65|(x66>(x67/x68)));

    if (t15 != 22) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x70 = 11;
	int16_t x72 = 12174;
	static volatile int64_t t16 = 126LL;

    t16 = (x69|(x70>(x71/x72)));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -116;
	volatile uint16_t x74 = 7U;
	int32_t x75 = 133835993;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 290;

    t17 = (x73|(x74>(x75/x76)));

    if (t17 != -115) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -5;
	int32_t x79 = INT32_MAX;
	static int16_t x80 = INT16_MIN;
	static int32_t t18 = 1;

    t18 = (x77|(x78>(x79/x80)));

    if (t18 != -5) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 117U;
	int32_t x82 = -3988376;
	int8_t x83 = -1;
	volatile uint64_t x84 = UINT64_MAX;
	int32_t t19 = -23536;

    t19 = (x81|(x82>(x83/x84)));

    if (t19 != 117) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MAX;
	uint16_t x86 = 13539U;
	uint32_t x87 = 3339U;
	int8_t x88 = 53;

    t20 = (x85|(x86>(x87/x88)));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x89 = UINT64_MAX;
	static int32_t x90 = 824720644;
	int16_t x91 = INT16_MIN;
	static int16_t x92 = -1;

    t21 = (x89|(x90>(x91/x92)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x93 = -957;
	static int32_t x94 = -85659139;
	int16_t x95 = -1;
	static volatile uint16_t x96 = 11U;
	int32_t t22 = 1654707;

    t22 = (x93|(x94>(x95/x96)));

    if (t22 != -957) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MAX;
	int32_t x98 = INT32_MIN;
	int32_t x99 = -1;
	volatile int8_t x100 = -3;
	int64_t t23 = INT64_MAX;

    t23 = (x97|(x98>(x99/x100)));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int16_t x103 = 5;
	static uint16_t x104 = 30U;
	volatile int32_t t24 = -6516;

    t24 = (x101|(x102>(x103/x104)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x106 = -1;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;

    t25 = (x105|(x106>(x107/x108)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = 19348680985028LL;
	static volatile int16_t x114 = INT16_MAX;
	int64_t x115 = 21489490011949358LL;
	volatile int32_t x116 = -7257;
	int64_t t26 = 23664456120LL;

    t26 = (x113|(x114>(x115/x116)));

    if (t26 != 19348680985029LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x117 = INT8_MAX;
	volatile int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MAX;
	static uint16_t x120 = UINT16_MAX;
	volatile int32_t t27 = 4;

    t27 = (x117|(x118>(x119/x120)));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = INT32_MAX;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -67;
	volatile int8_t x124 = -3;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x121|(x122>(x123/x124)));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x125 = -58;
	int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t29 = 1233981;

    t29 = (x125|(x126>(x127/x128)));

    if (t29 != -58) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = -1;
	volatile int8_t x130 = INT8_MAX;
	volatile int16_t x131 = -6;
	int32_t x132 = 7217146;
	volatile int32_t t30 = 392;

    t30 = (x129|(x130>(x131/x132)));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 4U;
	static uint32_t x134 = UINT32_MAX;
	static volatile int32_t t31 = -216;

    t31 = (x133|(x134>(x135/x136)));

    if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MAX;
	volatile uint8_t x139 = 27U;
	volatile int8_t x140 = 2;
	volatile int32_t t32 = 950099;

    t32 = (x137|(x138>(x139/x140)));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x141 = -19;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = -1;
	volatile int32_t x144 = 387;
	volatile int32_t t33 = -1;

    t33 = (x141|(x142>(x143/x144)));

    if (t33 != -19) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x145 = -1;
	int8_t x148 = -1;
	volatile int32_t t34 = -2;

    t34 = (x145|(x146>(x147/x148)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = -1;
	static uint8_t x150 = 0U;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MAX;

    t35 = (x149|(x150>(x151/x152)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = INT8_MAX;
	static uint16_t x155 = 1U;
	static int32_t t36 = 12;

    t36 = (x153|(x154>(x155/x156)));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = 3306767U;
	int8_t x158 = -1;
	volatile int16_t x159 = INT16_MAX;
	volatile uint8_t x160 = 93U;
	uint32_t t37 = 563313U;

    t37 = (x157|(x158>(x159/x160)));

    if (t37 != 3306767U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x161 = 3U;
	volatile int64_t x162 = -1LL;
	static uint16_t x164 = UINT16_MAX;
	int32_t t38 = -445561044;

    t38 = (x161|(x162>(x163/x164)));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MAX;
	volatile int16_t x168 = INT16_MIN;
	static volatile int64_t t39 = -63482819LL;

    t39 = (x165|(x166>(x167/x168)));

    if (t39 != -4370731LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = INT64_MIN;
	static int8_t x171 = -23;
	volatile int8_t x172 = INT8_MAX;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x169|(x170>(x171/x172)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	static int8_t x174 = -1;
	int32_t x175 = INT32_MIN;
	static uint8_t x176 = 1U;
	volatile int64_t t41 = -77LL;

    t41 = (x173|(x174>(x175/x176)));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x178 = INT16_MIN;
	int32_t t42 = -1;

    t42 = (x177|(x178>(x179/x180)));

    if (t42 != 19) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x183 = 9U;
	static uint32_t x184 = 714419U;
	volatile int32_t t43 = -2020856;

    t43 = (x181|(x182>(x183/x184)));

    if (t43 != 4135) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x185 = 751U;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;

    t44 = (x185|(x186>(x187/x188)));

    if (t44 != 751) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t45 = 52;

    t45 = (x189|(x190>(x191/x192)));

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MIN;
	static int16_t x194 = INT16_MIN;
	static int64_t x195 = 1LL;
	int16_t x196 = -1;
	volatile int64_t t46 = INT64_MIN;

    t46 = (x193|(x194>(x195/x196)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	static uint8_t x199 = 1U;
	int32_t t47 = -2721;

    t47 = (x197|(x198>(x199/x200)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = -486;
	static int8_t x202 = INT8_MAX;
	uint32_t x204 = 51243U;

    t48 = (x201|(x202>(x203/x204)));

    if (t48 != -486) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -4;
	int32_t x206 = 802678;
	int16_t x207 = INT16_MIN;
	volatile int32_t t49 = -455663700;

    t49 = (x205|(x206>(x207/x208)));

    if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x209 = INT64_MAX;
	int64_t x211 = -1LL;
	uint8_t x212 = 54U;
	int64_t t50 = INT64_MAX;

    t50 = (x209|(x210>(x211/x212)));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x214 = 9833U;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	static volatile int64_t t51 = INT64_MAX;

    t51 = (x213|(x214>(x215/x216)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = UINT8_MAX;
	volatile uint64_t x218 = 1454933LLU;
	int16_t x219 = -1;
	static int16_t x220 = INT16_MAX;
	static volatile int32_t t52 = -182402389;

    t52 = (x217|(x218>(x219/x220)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x221 = -26;
	int16_t x222 = -1;
	volatile int32_t t53 = 463418;

    t53 = (x221|(x222>(x223/x224)));

    if (t53 != -26) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x225 = INT16_MAX;
	int64_t x226 = INT64_MIN;
	static uint64_t x228 = 184809449242530LLU;
	int32_t t54 = -965;

    t54 = (x225|(x226>(x227/x228)));

    if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = 7130072LLU;
	uint8_t x230 = 12U;
	static volatile int64_t x232 = INT64_MAX;
	uint64_t t55 = 302256450864555301LLU;

    t55 = (x229|(x230>(x231/x232)));

    if (t55 != 7130073LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x233 = 3U;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MAX;
	int64_t x236 = -2026838938651863LL;
	int32_t t56 = 165122842;

    t56 = (x233|(x234>(x235/x236)));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x238 = 2U;
	volatile uint16_t x240 = 39U;

    t57 = (x237|(x238>(x239/x240)));

    if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = INT16_MAX;
	int8_t x243 = -1;
	int8_t x244 = -1;

    t58 = (x241|(x242>(x243/x244)));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x249 = -55;
	static volatile uint16_t x250 = UINT16_MAX;
	int16_t x251 = INT16_MAX;
	uint8_t x252 = 15U;
	static int32_t t59 = -1913;

    t59 = (x249|(x250>(x251/x252)));

    if (t59 != -55) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 51;
	volatile int64_t x254 = INT64_MIN;
	static int32_t x255 = -619542383;
	int64_t x256 = INT64_MAX;

    t60 = (x253|(x254>(x255/x256)));

    if (t60 != 51) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x258 = UINT32_MAX;
	int16_t x259 = -85;
	static volatile uint16_t x260 = 10U;
	uint32_t t61 = 108U;

    t61 = (x257|(x258>(x259/x260)));

    if (t61 != 295975585U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x261 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t62 = -226139162;

    t62 = (x261|(x262>(x263/x264)));

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = 19;
	static int16_t x266 = INT16_MIN;
	static int16_t x267 = 1973;
	static int32_t x268 = INT32_MAX;
	int32_t t63 = -18;

    t63 = (x265|(x266>(x267/x268)));

    if (t63 != 19) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = -2895;
	int64_t x270 = INT64_MIN;
	uint64_t x271 = 40521LLU;
	int16_t x272 = INT16_MIN;

    t64 = (x269|(x270>(x271/x272)));

    if (t64 != -2895) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = INT64_MAX;
	uint32_t x286 = UINT32_MAX;
	int8_t x288 = INT8_MAX;
	int64_t t65 = INT64_MAX;

    t65 = (x285|(x286>(x287/x288)));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x289 = -1;
	volatile int16_t x290 = -10;
	int32_t x291 = INT32_MAX;

    t66 = (x289|(x290>(x291/x292)));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x293 = 2;
	volatile int16_t x294 = -1;
	static int64_t x295 = -1LL;
	volatile uint32_t x296 = UINT32_MAX;
	int32_t t67 = -76685926;

    t67 = (x293|(x294>(x295/x296)));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x298 = 27;
	int8_t x299 = INT8_MIN;
	static int32_t t68 = 376;

    t68 = (x297|(x298>(x299/x300)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x301 = -222;
	volatile uint64_t x302 = UINT64_MAX;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t69 = 13;

    t69 = (x301|(x302>(x303/x304)));

    if (t69 != -221) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = INT16_MAX;
	int16_t x306 = -104;
	int32_t x307 = 915;
	volatile int32_t t70 = 0;

    t70 = (x305|(x306>(x307/x308)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x309 = INT16_MIN;
	int32_t x311 = INT32_MIN;

    t71 = (x309|(x310>(x311/x312)));

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = INT32_MAX;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t72 = INT32_MAX;

    t72 = (x313|(x314>(x315/x316)));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x317 = INT8_MAX;
	static int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	uint64_t x320 = 12902182LLU;
	volatile int32_t t73 = 1258643;

    t73 = (x317|(x318>(x319/x320)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x321 = INT8_MAX;
	static uint16_t x322 = 388U;
	int8_t x323 = 17;
	int32_t t74 = 60181263;

    t74 = (x321|(x322>(x323/x324)));

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x325 = 5;
	int16_t x326 = INT16_MIN;
	static volatile int8_t x327 = INT8_MAX;
	uint32_t x328 = 128679292U;

    t75 = (x325|(x326>(x327/x328)));

    if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x330 = 1532280U;
	uint16_t x331 = 13698U;
	static volatile uint8_t x332 = 42U;
	volatile int32_t t76 = -942;

    t76 = (x329|(x330>(x331/x332)));

    if (t76 != 227) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = 5;
	uint8_t x334 = 1U;
	volatile int8_t x335 = -1;
	int8_t x336 = -1;
	volatile int32_t t77 = -1;

    t77 = (x333|(x334>(x335/x336)));

    if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x338 = -4;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 30719U;
	int32_t t78 = 0;

    t78 = (x337|(x338>(x339/x340)));

    if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x341 = INT32_MIN;
	volatile int16_t x342 = -10;
	int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = (x341|(x342>(x343/x344)));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x345 = 13;
	static int8_t x346 = 1;
	uint64_t x347 = 47292LLU;
	int64_t x348 = -1LL;
	volatile int32_t t80 = 380;

    t80 = (x345|(x346>(x347/x348)));

    if (t80 != 13) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x349 = 14U;
	static int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 42U;
	volatile int32_t t81 = 1776721;

    t81 = (x349|(x350>(x351/x352)));

    if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x353 = UINT8_MAX;
	static uint64_t x354 = 172087398LLU;
	uint64_t x355 = UINT64_MAX;
	static int16_t x356 = -1;
	static int32_t t82 = 259208649;

    t82 = (x353|(x354>(x355/x356)));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = -312;
	volatile int64_t x358 = -1LL;
	uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = INT64_MIN;
	volatile int32_t t83 = 34298016;

    t83 = (x357|(x358>(x359/x360)));

    if (t83 != -311) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 157U;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t84 = 5;

    t84 = (x361|(x362>(x363/x364)));

    if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = -1012;
	volatile uint32_t x366 = 6612U;
	uint32_t x367 = 3503U;
	int32_t t85 = 65292293;

    t85 = (x365|(x366>(x367/x368)));

    if (t85 != -1011) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = INT64_MAX;
	volatile int16_t x371 = INT16_MIN;
	uint8_t x372 = 58U;

    t86 = (x369|(x370>(x371/x372)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x373 = 10654U;
	uint64_t x374 = UINT64_MAX;
	uint16_t x375 = UINT16_MAX;
	uint16_t x376 = 6958U;
	volatile int32_t t87 = 119325;

    t87 = (x373|(x374>(x375/x376)));

    if (t87 != 10655) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = -1LL;
	int8_t x379 = 2;
	int64_t x380 = 256643449909899LL;

    t88 = (x377|(x378>(x379/x380)));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MIN;
	int32_t x383 = 725854119;
	uint16_t x384 = 723U;
	volatile int64_t t89 = INT64_MIN;

    t89 = (x381|(x382>(x383/x384)));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x385 = -86;
	uint8_t x386 = 7U;
	static uint64_t x387 = 823798328264LLU;
	int64_t x388 = 562091295078LL;
	volatile int32_t t90 = 845763;

    t90 = (x385|(x386>(x387/x388)));

    if (t90 != -85) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x389 = 5;
	uint32_t x390 = 1653120707U;
	static volatile uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;

    t91 = (x389|(x390>(x391/x392)));

    if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x393 = 2U;
	static int16_t x394 = 455;
	int8_t x395 = INT8_MIN;

    t92 = (x393|(x394>(x395/x396)));

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x397 = 26;
	uint32_t x399 = 188554069U;
	static int64_t x400 = -2218LL;
	volatile int32_t t93 = 22278534;

    t93 = (x397|(x398>(x399/x400)));

    if (t93 != 27) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x401 = INT8_MIN;
	static volatile int32_t x402 = INT32_MAX;
	volatile uint8_t x403 = 22U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t94 = 1;

    t94 = (x401|(x402>(x403/x404)));

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = -30;
	static uint8_t x406 = 0U;
	int16_t x407 = INT16_MAX;
	volatile int16_t x408 = -1;
	static int32_t t95 = -872854;

    t95 = (x405|(x406>(x407/x408)));

    if (t95 != -29) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MIN;
	volatile uint8_t x412 = 13U;
	volatile int32_t t96 = 252118;

    t96 = (x409|(x410>(x411/x412)));

    if (t96 != 3496) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x413 = UINT64_MAX;
	static int8_t x414 = -1;
	volatile int32_t x416 = -631617;
	uint64_t t97 = UINT64_MAX;

    t97 = (x413|(x414>(x415/x416)));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x417 = INT32_MAX;
	int16_t x419 = 5817;
	volatile int32_t t98 = INT32_MAX;

    t98 = (x417|(x418>(x419/x420)));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = INT8_MIN;
	uint32_t x423 = 6311774U;
	volatile int8_t x424 = -8;
	int32_t t99 = -425980475;

    t99 = (x421|(x422>(x423/x424)));

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x425 = INT32_MAX;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = 1U;
	int64_t x428 = 696860LL;
	volatile int32_t t100 = INT32_MAX;

    t100 = (x425|(x426>(x427/x428)));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x429 = -1LL;
	int8_t x431 = INT8_MIN;
	volatile int32_t x432 = -1;
	int64_t t101 = -27057764875383032LL;

    t101 = (x429|(x430>(x431/x432)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = INT8_MAX;
	uint64_t x435 = 125001469532098LLU;
	static uint64_t x436 = 49351490140811125LLU;

    t102 = (x433|(x434>(x435/x436)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x437 = INT8_MIN;
	volatile int32_t x438 = INT32_MAX;
	static int8_t x439 = INT8_MIN;
	int8_t x440 = -1;
	static int32_t t103 = -145369018;

    t103 = (x437|(x438>(x439/x440)));

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x442 = 1;
	volatile int32_t x443 = -236075;
	static volatile int64_t x444 = 175431465395421783LL;
	int64_t t104 = -1466LL;

    t104 = (x441|(x442>(x443/x444)));

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x445 = 13;
	int64_t x446 = 4339522030LL;
	int16_t x447 = -70;
	volatile int16_t x448 = -1;
	int32_t t105 = -134936;

    t105 = (x445|(x446>(x447/x448)));

    if (t105 != 13) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x449 = INT8_MIN;
	uint32_t x450 = 363633U;
	volatile int64_t x451 = INT64_MIN;
	volatile uint64_t x452 = 2172193335076980793LLU;
	volatile int32_t t106 = 505902;

    t106 = (x449|(x450>(x451/x452)));

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x453 = INT32_MIN;
	volatile uint8_t x454 = UINT8_MAX;
	static uint64_t x455 = UINT64_MAX;
	static uint32_t x456 = 2U;
	volatile int32_t t107 = INT32_MIN;

    t107 = (x453|(x454>(x455/x456)));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MAX;
	int16_t x459 = -1;
	int64_t x460 = -1LL;
	static volatile int32_t t108 = -462655213;

    t108 = (x457|(x458>(x459/x460)));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x461 = -3;
	volatile int8_t x462 = INT8_MIN;
	volatile uint8_t x464 = 59U;
	int32_t t109 = 4134;

    t109 = (x461|(x462>(x463/x464)));

    if (t109 != -3) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x465 = INT64_MIN;
	uint8_t x466 = UINT8_MAX;
	int32_t x467 = -1;
	static int64_t x468 = -3582248380385LL;
	volatile int64_t t110 = 116801436472853LL;

    t110 = (x465|(x466>(x467/x468)));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x469 = 4U;
	int8_t x470 = 0;
	volatile int16_t x472 = 12;
	volatile int32_t t111 = -54;

    t111 = (x469|(x470>(x471/x472)));

    if (t111 != 4) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x473 = -1;
	uint16_t x474 = UINT16_MAX;
	uint16_t x475 = UINT16_MAX;
	uint64_t x476 = UINT64_MAX;
	static int32_t t112 = 467723;

    t112 = (x473|(x474>(x475/x476)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = UINT64_MAX;
	int64_t x478 = INT64_MAX;
	static int32_t x479 = -2967826;
	static volatile uint64_t t113 = UINT64_MAX;

    t113 = (x477|(x478>(x479/x480)));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x481 = INT8_MIN;
	uint16_t x482 = UINT16_MAX;
	uint16_t x483 = 1U;
	static uint8_t x484 = 2U;

    t114 = (x481|(x482>(x483/x484)));

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x485 = INT8_MIN;
	volatile uint8_t x486 = UINT8_MAX;
	static volatile int64_t x487 = INT64_MAX;

    t115 = (x485|(x486>(x487/x488)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x489 = 2U;
	static int8_t x490 = -1;
	int32_t x492 = INT32_MIN;
	volatile int32_t t116 = 40438;

    t116 = (x489|(x490>(x491/x492)));

    if (t116 != 3) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x494 = UINT32_MAX;
	volatile int8_t x496 = INT8_MIN;
	int32_t t117 = -7;

    t117 = (x493|(x494>(x495/x496)));

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x497 = 3U;
	int32_t x499 = INT32_MIN;
	volatile uint64_t x500 = 37814419075571489LLU;
	static int32_t t118 = 600;

    t118 = (x497|(x498>(x499/x500)));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x501 = INT32_MIN;
	uint8_t x502 = 75U;
	static int16_t x503 = INT16_MIN;
	volatile uint16_t x504 = UINT16_MAX;
	int32_t t119 = 959170268;

    t119 = (x501|(x502>(x503/x504)));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = -14223695LL;
	uint32_t x506 = 5296020U;
	static int16_t x508 = 9484;
	volatile int64_t t120 = 6544267890LL;

    t120 = (x505|(x506>(x507/x508)));

    if (t120 != -14223695LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x510 = 30;
	volatile int8_t x511 = INT8_MIN;
	uint16_t x512 = 2U;

    t121 = (x509|(x510>(x511/x512)));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x513 = -1;
	uint8_t x514 = UINT8_MAX;
	volatile uint64_t x515 = 179853163LLU;
	static int16_t x516 = -478;

    t122 = (x513|(x514>(x515/x516)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x517 = INT32_MAX;
	volatile int64_t x518 = -1LL;
	static int64_t x519 = -1LL;
	int8_t x520 = INT8_MIN;
	volatile int32_t t123 = INT32_MAX;

    t123 = (x517|(x518>(x519/x520)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x522 = INT64_MIN;
	int16_t x524 = INT16_MIN;

    t124 = (x521|(x522>(x523/x524)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x525 = INT8_MIN;
	volatile int32_t x526 = 188093188;
	volatile uint8_t x528 = 92U;
	int32_t t125 = -1158645;

    t125 = (x525|(x526>(x527/x528)));

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = -924210075830064LL;
	int64_t x530 = INT64_MAX;
	uint64_t x531 = 716975621LLU;
	volatile int64_t t126 = -7LL;

    t126 = (x529|(x530>(x531/x532)));

    if (t126 != -924210075830063LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	uint8_t x534 = 91U;
	int64_t x535 = 372635977LL;
	volatile int32_t t127 = -51232493;

    t127 = (x533|(x534>(x535/x536)));

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x538 = UINT64_MAX;
	static uint16_t x539 = UINT16_MAX;
	uint32_t x540 = 5U;
	volatile int32_t t128 = -13225;

    t128 = (x537|(x538>(x539/x540)));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x541 = 30;
	volatile uint32_t x542 = 110975064U;
	int32_t x543 = -1;
	int32_t t129 = 612328001;

    t129 = (x541|(x542>(x543/x544)));

    if (t129 != 31) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x546 = -1;
	static volatile int8_t x547 = -25;
	int32_t x548 = 1;
	int32_t t130 = 1176456;

    t130 = (x545|(x546>(x547/x548)));

    if (t130 != 17) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x550 = 330U;
	int16_t x551 = INT16_MAX;
	int32_t x552 = 64204882;
	uint32_t t131 = 5U;

    t131 = (x549|(x550>(x551/x552)));

    if (t131 != 37U) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x554 = -5;
	static uint16_t x555 = 8048U;
	int16_t x556 = -1;

    t132 = (x553|(x554>(x555/x556)));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x557 = 153331687U;
	volatile int16_t x558 = INT16_MIN;
	int64_t x559 = 31LL;
	static volatile int32_t x560 = INT32_MIN;
	uint32_t t133 = 5764U;

    t133 = (x557|(x558>(x559/x560)));

    if (t133 != 153331687U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x562 = INT16_MAX;
	uint32_t x563 = 12674403U;
	volatile int32_t t134 = 0;

    t134 = (x561|(x562>(x563/x564)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x566 = 38;
	uint32_t x567 = UINT32_MAX;
	int16_t x568 = -14500;
	static int32_t t135 = 12600;

    t135 = (x565|(x566>(x567/x568)));

    if (t135 != -9) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x570 = INT64_MIN;
	volatile int16_t x572 = INT16_MAX;
	static int32_t t136 = -24117;

    t136 = (x569|(x570>(x571/x572)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x573 = 7923U;
	uint32_t x574 = UINT32_MAX;
	volatile uint64_t x575 = 8049157412858201LLU;
	volatile uint64_t x576 = 12LLU;
	static int32_t t137 = -45996173;

    t137 = (x573|(x574>(x575/x576)));

    if (t137 != 7923) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = 23;
	volatile int64_t x578 = 2031978365463085LL;
	int32_t x579 = -826085;
	uint8_t x580 = UINT8_MAX;
	volatile int32_t t138 = -49;

    t138 = (x577|(x578>(x579/x580)));

    if (t138 != 23) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x581 = INT16_MAX;
	volatile int64_t x583 = INT64_MIN;

    t139 = (x581|(x582>(x583/x584)));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = -1;
	int8_t x586 = 1;
	static volatile int64_t x587 = -90LL;
	int8_t x588 = -1;

    t140 = (x585|(x586>(x587/x588)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = -1;
	int64_t x591 = -27LL;
	static volatile int32_t t141 = 3615;

    t141 = (x589|(x590>(x591/x592)));

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x593 = INT8_MIN;
	static int8_t x594 = INT8_MAX;
	uint16_t x595 = UINT16_MAX;
	volatile int16_t x596 = INT16_MIN;
	volatile int32_t t142 = -1451054;

    t142 = (x593|(x594>(x595/x596)));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x597 = UINT32_MAX;
	static volatile int64_t x598 = INT64_MIN;
	volatile int32_t x599 = INT32_MIN;
	uint8_t x600 = 1U;
	volatile uint32_t t143 = UINT32_MAX;

    t143 = (x597|(x598>(x599/x600)));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x601 = INT16_MAX;
	static uint16_t x602 = 2U;
	uint32_t x603 = 76561250U;
	volatile int32_t t144 = -3131221;

    t144 = (x601|(x602>(x603/x604)));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x605 = 161965U;
	volatile int64_t x606 = 76463690838867480LL;
	int32_t x607 = INT32_MIN;

    t145 = (x605|(x606>(x607/x608)));

    if (t145 != 161965U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x609 = INT32_MAX;
	static int8_t x610 = INT8_MAX;
	int8_t x611 = 1;
	volatile int32_t x612 = -3271248;
	int32_t t146 = INT32_MAX;

    t146 = (x609|(x610>(x611/x612)));

    if (t146 != INT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x613 = INT32_MAX;
	volatile uint64_t x614 = 3555742255739LLU;
	volatile int8_t x615 = INT8_MIN;
	static int32_t x616 = 353852015;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x613|(x614>(x615/x616)));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x617 = -1LL;
	uint8_t x618 = 29U;
	int64_t x619 = -1LL;
	uint8_t x620 = UINT8_MAX;
	int64_t t148 = 56821LL;

    t148 = (x617|(x618>(x619/x620)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x621 = UINT64_MAX;
	uint8_t x622 = UINT8_MAX;
	int8_t x624 = -1;
	uint64_t t149 = UINT64_MAX;

    t149 = (x621|(x622>(x623/x624)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x626 = UINT8_MAX;
	int64_t x627 = INT64_MIN;
	volatile uint64_t x628 = UINT64_MAX;
	int32_t t150 = 0;

    t150 = (x625|(x626>(x627/x628)));

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x629 = 629157U;
	int8_t x630 = -1;
	int8_t x631 = 19;
	int32_t x632 = 130299868;
	static uint32_t t151 = 60U;

    t151 = (x629|(x630>(x631/x632)));

    if (t151 != 629157U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = 3763870;
	uint64_t x635 = 3338304419LLU;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t152 = -73818;

    t152 = (x633|(x634>(x635/x636)));

    if (t152 != -32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x637 = 534087318937620LL;
	volatile int8_t x638 = INT8_MIN;
	static int32_t x639 = INT32_MAX;
	uint64_t x640 = 31LLU;
	volatile int64_t t153 = -2292647375284LL;

    t153 = (x637|(x638>(x639/x640)));

    if (t153 != 534087318937621LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x642 = 3;
	uint64_t x643 = 468174267672890811LLU;
	static int64_t x644 = -23961814900017LL;
	int64_t t154 = 424692902LL;

    t154 = (x641|(x642>(x643/x644)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x645 = INT16_MIN;
	int16_t x646 = 128;
	int64_t x647 = -861186705LL;
	int32_t t155 = 88;

    t155 = (x645|(x646>(x647/x648)));

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = -57LL;
	int16_t x650 = INT16_MIN;
	static uint64_t x651 = UINT64_MAX;
	static uint8_t x652 = UINT8_MAX;
	int64_t t156 = -89LL;

    t156 = (x649|(x650>(x651/x652)));

    if (t156 != -57LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x654 = 205632;
	static int8_t x655 = INT8_MAX;
	volatile int32_t t157 = -12397;

    t157 = (x653|(x654>(x655/x656)));

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x657 = INT64_MAX;
	static int8_t x658 = INT8_MAX;
	int16_t x660 = -46;
	static int64_t t158 = INT64_MAX;

    t158 = (x657|(x658>(x659/x660)));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x661 = 2U;
	int16_t x662 = INT16_MAX;
	static volatile int16_t x664 = INT16_MAX;
	volatile int32_t t159 = 47910;

    t159 = (x661|(x662>(x663/x664)));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x669 = 1076LL;
	volatile uint8_t x670 = 12U;
	uint16_t x671 = 3U;
	uint8_t x672 = 47U;

    t160 = (x669|(x670>(x671/x672)));

    if (t160 != 1077LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x673 = INT16_MAX;
	static int8_t x674 = -2;
	uint32_t x675 = 87U;
	volatile int32_t t161 = 1001591;

    t161 = (x673|(x674>(x675/x676)));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x677 = UINT8_MAX;
	int64_t x678 = INT64_MIN;
	int16_t x679 = -3654;
	int32_t t162 = -1;

    t162 = (x677|(x678>(x679/x680)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x681 = 1635U;
	volatile int64_t x683 = 171793853713LL;
	int16_t x684 = 61;
	int32_t t163 = -171812865;

    t163 = (x681|(x682>(x683/x684)));

    if (t163 != 1635) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x685 = INT16_MIN;
	int8_t x686 = -9;
	int8_t x687 = 1;

    t164 = (x685|(x686>(x687/x688)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x689 = 1020110;
	volatile int64_t x690 = INT64_MIN;
	volatile int16_t x691 = -1;
	int64_t x692 = INT64_MIN;
	volatile int32_t t165 = -573795453;

    t165 = (x689|(x690>(x691/x692)));

    if (t165 != 1020110) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x693 = INT32_MAX;
	uint64_t x694 = 5853471391711246LLU;
	int16_t x695 = INT16_MAX;

    t166 = (x693|(x694>(x695/x696)));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x697 = INT32_MIN;
	int64_t x698 = INT64_MIN;
	volatile uint64_t x699 = 17821604142411853LLU;
	static int16_t x700 = INT16_MIN;

    t167 = (x697|(x698>(x699/x700)));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x702 = INT32_MIN;
	volatile int16_t x703 = -36;
	int16_t x704 = INT16_MAX;

    t168 = (x701|(x702>(x703/x704)));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x705 = INT16_MIN;
	uint64_t x707 = 21628158877948385LLU;
	static int64_t x708 = INT64_MAX;
	volatile int32_t t169 = -10165304;

    t169 = (x705|(x706>(x707/x708)));

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = -1;
	volatile uint64_t x710 = UINT64_MAX;
	volatile uint32_t x711 = UINT32_MAX;
	volatile uint8_t x712 = 8U;
	volatile int32_t t170 = 566;

    t170 = (x709|(x710>(x711/x712)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x713 = INT8_MIN;
	uint16_t x714 = 2714U;
	int32_t x715 = INT32_MIN;
	int8_t x716 = INT8_MAX;
	volatile int32_t t171 = -454919677;

    t171 = (x713|(x714>(x715/x716)));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x717 = 1018913580LLU;
	int16_t x718 = -1;
	volatile int64_t x719 = -2087443529415LL;
	int32_t x720 = INT32_MAX;
	uint64_t t172 = 6LLU;

    t172 = (x717|(x718>(x719/x720)));

    if (t172 != 1018913581LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = -2515;
	volatile int64_t x722 = 12LL;
	int32_t x723 = INT32_MAX;
	int16_t x724 = -1;

    t173 = (x721|(x722>(x723/x724)));

    if (t173 != -2515) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x725 = 4300724;
	uint16_t x726 = UINT16_MAX;
	uint32_t x727 = 2U;
	static int32_t x728 = INT32_MIN;
	int32_t t174 = -186730;

    t174 = (x725|(x726>(x727/x728)));

    if (t174 != 4300725) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x729 = INT8_MIN;
	int8_t x730 = INT8_MAX;
	int8_t x731 = INT8_MIN;
	volatile int32_t t175 = -2868736;

    t175 = (x729|(x730>(x731/x732)));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x734 = 0;
	volatile int64_t x735 = INT64_MIN;
	static uint64_t x736 = 8482304642848LLU;
	volatile uint64_t t176 = 1483528LLU;

    t176 = (x733|(x734>(x735/x736)));

    if (t176 != 192892392128152067LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x738 = INT32_MIN;
	int16_t x740 = INT16_MAX;
	int32_t t177 = 499215;

    t177 = (x737|(x738>(x739/x740)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x741 = 3U;
	int16_t x742 = 6219;
	int16_t x744 = 7516;
	volatile int32_t t178 = 16;

    t178 = (x741|(x742>(x743/x744)));

    if (t178 != 3) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x745 = 32;
	volatile int32_t x746 = -166806;
	static uint16_t x747 = UINT16_MAX;
	int32_t t179 = -33;

    t179 = (x745|(x746>(x747/x748)));

    if (t179 != 32) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x749 = 15U;
	static uint8_t x750 = 8U;
	volatile int8_t x751 = INT8_MIN;
	int64_t x752 = INT64_MAX;
	int32_t t180 = 3597301;

    t180 = (x749|(x750>(x751/x752)));

    if (t180 != 15) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint8_t x753 = 49U;
	volatile int64_t x754 = INT64_MIN;
	uint64_t x755 = 29LLU;
	static int8_t x756 = INT8_MIN;
	volatile int32_t t181 = -3417;

    t181 = (x753|(x754>(x755/x756)));

    if (t181 != 49) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x757 = 0U;
	uint64_t x758 = 1552737046040647LLU;
	uint32_t x759 = 160524U;
	int32_t x760 = 14019058;
	static volatile int32_t t182 = 1305734;

    t182 = (x757|(x758>(x759/x760)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MAX;
	int64_t x764 = INT64_MIN;
	static volatile uint32_t t183 = UINT32_MAX;

    t183 = (x761|(x762>(x763/x764)));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x765 = INT32_MAX;
	int16_t x766 = INT16_MIN;
	uint16_t x767 = 1U;
	volatile int32_t t184 = INT32_MAX;

    t184 = (x765|(x766>(x767/x768)));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x770 = INT64_MIN;
	int32_t x771 = INT32_MIN;
	volatile int8_t x772 = INT8_MIN;

    t185 = (x769|(x770>(x771/x772)));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x775 = -1LL;
	int64_t t186 = INT64_MAX;

    t186 = (x773|(x774>(x775/x776)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x777 = -1;
	int8_t x778 = INT8_MIN;
	int32_t x780 = INT32_MIN;
	int32_t t187 = -4;

    t187 = (x777|(x778>(x779/x780)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = -1;
	uint64_t x782 = UINT64_MAX;
	volatile uint16_t x783 = 53U;
	static uint64_t x784 = UINT64_MAX;
	int32_t t188 = 218625;

    t188 = (x781|(x782>(x783/x784)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x786 = 12U;
	int8_t x787 = INT8_MAX;
	int64_t x788 = 41561LL;
	volatile int32_t t189 = -551911;

    t189 = (x785|(x786>(x787/x788)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x789 = 238067LLU;
	static uint16_t x790 = UINT16_MAX;
	uint64_t x792 = 4076858LLU;
	uint64_t t190 = 450381628929LLU;

    t190 = (x789|(x790>(x791/x792)));

    if (t190 != 238067LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MIN;
	int64_t x794 = -1LL;
	int16_t x795 = -239;
	volatile int32_t t191 = 6605;

    t191 = (x793|(x794>(x795/x796)));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = INT32_MIN;
	volatile uint32_t x798 = UINT32_MAX;
	volatile int8_t x799 = INT8_MAX;
	int64_t x800 = INT64_MIN;

    t192 = (x797|(x798>(x799/x800)));

    if (t192 != -2147483647) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x802 = INT16_MIN;
	uint8_t x803 = UINT8_MAX;
	int32_t x804 = INT32_MAX;
	volatile int32_t t193 = 92207;

    t193 = (x801|(x802>(x803/x804)));

    if (t193 != 3) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = 176512;
	int32_t x806 = INT32_MIN;
	uint32_t x807 = 124796997U;
	int32_t t194 = 65075506;

    t194 = (x805|(x806>(x807/x808)));

    if (t194 != 176512) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x809 = 1U;
	int16_t x812 = INT16_MIN;

    t195 = (x809|(x810>(x811/x812)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = INT16_MAX;
	int16_t x814 = INT16_MIN;
	volatile int64_t x815 = INT64_MAX;
	static int8_t x816 = INT8_MIN;
	int32_t t196 = -45324274;

    t196 = (x813|(x814>(x815/x816)));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = 27U;
	static int8_t x818 = INT8_MIN;
	uint32_t t197 = 198U;

    t197 = (x817|(x818>(x819/x820)));

    if (t197 != 27U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x821 = 0U;
	int32_t x823 = 122;
	uint64_t x824 = UINT64_MAX;
	volatile int32_t t198 = -6;

    t198 = (x821|(x822>(x823/x824)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x825 = INT32_MIN;
	int32_t x826 = -1;
	uint16_t x827 = UINT16_MAX;
	volatile int32_t t199 = INT32_MIN;

    t199 = (x825|(x826>(x827/x828)));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

