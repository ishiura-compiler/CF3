
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

int64_t x2 = 1LL;
uint32_t x4 = UINT32_MAX;
int32_t t0 = 0;
int8_t x6 = INT8_MIN;
int32_t t2 = 6;
uint64_t x18 = UINT64_MAX;
int32_t t4 = 2;
int32_t x24 = -19003;
volatile uint16_t x37 = UINT16_MAX;
uint64_t x38 = UINT64_MAX;
volatile int8_t x39 = INT8_MAX;
volatile int8_t x40 = INT8_MIN;
uint64_t x49 = 1770LLU;
int8_t x51 = 24;
static int32_t t12 = -4749444;
int8_t x59 = INT8_MIN;
static int64_t x61 = INT64_MIN;
volatile int32_t x65 = 13370;
volatile int8_t x68 = INT8_MIN;
int16_t x70 = INT16_MIN;
int64_t x73 = -1LL;
int32_t x75 = -176732097;
volatile int64_t x79 = 4915LL;
uint64_t x80 = 4907949LLU;
int16_t x82 = -1;
static int32_t t19 = 50;
uint32_t x87 = UINT32_MAX;
uint64_t x89 = UINT64_MAX;
int32_t x90 = 2;
static uint64_t x92 = 202130122LLU;
static volatile int64_t x99 = INT64_MIN;
int8_t x100 = -1;
int32_t t23 = 425;
uint64_t x102 = 2215262614491406LLU;
static uint32_t x104 = 9696U;
static int32_t t25 = 324;
uint32_t x113 = UINT32_MAX;
int64_t x117 = -1LL;
int8_t x119 = -1;
int32_t x121 = INT32_MIN;
volatile int64_t x123 = INT64_MIN;
volatile int32_t t29 = 98600;
int16_t x129 = INT16_MIN;
int32_t t31 = -6707;
static volatile int32_t t34 = 5;
static int32_t x151 = -1;
int32_t x152 = -36;
volatile int32_t t35 = -114193;
volatile uint64_t x158 = UINT64_MAX;
int16_t x161 = INT16_MIN;
int64_t x162 = INT64_MAX;
int16_t x167 = INT16_MIN;
int8_t x170 = -1;
int32_t t40 = -59447931;
int64_t x177 = INT64_MIN;
volatile int32_t x181 = -40;
int32_t t42 = -889;
static int8_t x193 = INT8_MIN;
uint64_t x231 = 35LLU;
int8_t x236 = -13;
int16_t x245 = -1;
uint16_t x246 = 46U;
static uint32_t x251 = 8918098U;
int16_t x261 = 2;
uint8_t x262 = 96U;
int8_t x263 = -28;
static int32_t t60 = -31602;
static int32_t t61 = 1148;
int32_t x273 = INT32_MIN;
int64_t x274 = INT64_MIN;
volatile int32_t t62 = 9245;
static uint16_t x281 = 0U;
static volatile int64_t x283 = INT64_MAX;
volatile uint32_t x286 = 16U;
volatile int32_t t65 = 3;
volatile int64_t x296 = -1610170037372161LL;
int32_t x298 = INT32_MAX;
static uint32_t x303 = 498471U;
uint64_t x315 = UINT64_MAX;
int16_t x323 = 1;
int32_t x325 = INT32_MIN;
int64_t x334 = INT64_MIN;
static int32_t t79 = 476833;
int32_t x358 = -24;
volatile int32_t t80 = -1622900;
volatile uint16_t x365 = UINT16_MAX;
int32_t x373 = -692998011;
int8_t x375 = INT8_MIN;
volatile uint64_t x376 = 222901538LLU;
int8_t x377 = INT8_MIN;
int32_t x379 = -1;
uint64_t x381 = UINT64_MAX;
int32_t t85 = -3926;
volatile int32_t t86 = -120;
static uint16_t x390 = UINT16_MAX;
int8_t x391 = -1;
volatile int64_t x392 = -1LL;
int32_t x395 = INT32_MAX;
volatile uint8_t x396 = 1U;
static int16_t x404 = -67;
volatile int8_t x406 = -2;
int32_t t91 = -3438;
uint8_t x421 = 124U;
int32_t t95 = -252;
int64_t x434 = 0LL;
uint16_t x435 = 13820U;
int32_t t97 = -943512;
static int32_t t98 = 71694418;
int16_t x447 = -835;
int16_t x448 = -1;
volatile int32_t t99 = 13558;
int16_t x451 = 1773;
int16_t x453 = 11357;
int32_t t102 = 527206;
int16_t x465 = INT16_MAX;
volatile int8_t x470 = INT8_MIN;
static int32_t x471 = INT32_MIN;
int8_t x472 = INT8_MIN;
int8_t x474 = INT8_MIN;
uint8_t x476 = 110U;
int32_t t106 = -4409999;
volatile int32_t t107 = 102;
static int16_t x484 = INT16_MAX;
int32_t t108 = -563573;
int8_t x486 = INT8_MIN;
uint64_t x487 = UINT64_MAX;
volatile int32_t x492 = INT32_MIN;
volatile int32_t t110 = -213220925;
static int64_t x500 = INT64_MIN;
int32_t t112 = -12369;
static uint8_t x510 = 51U;
volatile int32_t t114 = -11;
uint8_t x513 = UINT8_MAX;
volatile int8_t x518 = -16;
uint64_t x524 = UINT64_MAX;
int16_t x529 = -4;
int8_t x530 = INT8_MIN;
uint16_t x531 = UINT16_MAX;
uint32_t x533 = UINT32_MAX;
uint32_t x537 = 22U;
int32_t x539 = -1;
static uint16_t x543 = UINT16_MAX;
static int8_t x545 = -1;
volatile int8_t x547 = -1;
int32_t t122 = -366253;
uint32_t x555 = 2U;
uint8_t x566 = 7U;
int32_t x575 = 1151;
uint16_t x576 = UINT16_MAX;
uint8_t x581 = 7U;
volatile uint16_t x583 = 11135U;
static int32_t t129 = 15924590;
uint32_t x599 = 132816U;
volatile uint64_t x600 = 17343989389LLU;
int32_t t131 = 657;
volatile int8_t x601 = -1;
int32_t x606 = -1;
int32_t x610 = -1;
volatile int32_t t134 = 475964;
static int32_t x616 = INT32_MIN;
static uint16_t x620 = 159U;
int8_t x623 = 15;
volatile int16_t x624 = 2;
int32_t t138 = 208709;
volatile int32_t t139 = -171;
uint8_t x638 = UINT8_MAX;
volatile uint8_t x639 = 2U;
int32_t t141 = 0;
volatile int32_t t144 = -8;
uint64_t x656 = UINT64_MAX;
int32_t t146 = -11897;
int32_t x663 = 23;
int64_t x665 = INT64_MIN;
int64_t x667 = INT64_MIN;
uint8_t x674 = 0U;
int8_t x676 = -1;
static int8_t x677 = INT8_MIN;
static int32_t x681 = -4864;
static volatile int32_t t151 = 162657433;
int8_t x731 = INT8_MIN;
static int32_t t160 = 48;
int8_t x735 = INT8_MIN;
int32_t x736 = INT32_MIN;
volatile int32_t t161 = -265265938;
uint32_t x744 = 76735U;
static volatile int16_t x746 = 15951;
int8_t x766 = -1;
int8_t x770 = 0;
int32_t t168 = 5530584;
int64_t x788 = 1LL;
uint64_t x807 = 0LLU;
int32_t x814 = -1313;
static uint64_t x816 = UINT64_MAX;
int8_t x820 = 30;
uint8_t x821 = UINT8_MAX;
int32_t x831 = 1571;
uint16_t x835 = 201U;
volatile int32_t x839 = -4880912;
uint16_t x840 = 3842U;
uint8_t x842 = UINT8_MAX;
static int16_t x854 = INT16_MAX;
volatile int32_t t187 = -999205;
int8_t x858 = -3;
int16_t x861 = INT16_MIN;
static int32_t x862 = INT32_MIN;
static uint8_t x863 = UINT8_MAX;
volatile int32_t x865 = INT32_MAX;
int16_t x866 = 1;
int32_t x871 = INT32_MIN;
int16_t x872 = INT16_MIN;
static int32_t t191 = 0;
int32_t x875 = -820;
uint8_t x878 = UINT8_MAX;
volatile int16_t x891 = 689;
int32_t x895 = INT32_MAX;
int32_t t197 = 0;
int32_t t198 = 82;
static int64_t x904 = -1LL;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	int8_t x3 = -9;

    t0 = (x1<=(x2>(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 2U;
	uint8_t x7 = 0U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -9;

    t1 = (x5<=(x6>(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = 462402450774684621LL;
	uint32_t x10 = 865989713U;
	uint64_t x11 = 811194857827801194LLU;
	int32_t x12 = -1;

    t2 = (x9<=(x10>(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 50;
	uint64_t x14 = UINT64_MAX;
	uint8_t x15 = 42U;
	volatile int64_t x16 = -1LL;
	int32_t t3 = 444;

    t3 = (x13<=(x14>(x15-x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 2U;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = -5;

    t4 = (x17<=(x18>(x19-x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	volatile int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 1;

    t5 = (x21<=(x22>(x23-x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x25 = 1246U;
	int8_t x26 = 0;
	int16_t x27 = INT16_MIN;
	static int64_t x28 = 37814082650245467LL;
	int32_t t6 = 10194280;

    t6 = (x25<=(x26>(x27-x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	int8_t x30 = 24;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 2733LLU;
	int32_t t7 = -279504;

    t7 = (x29<=(x30>(x31-x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -144640LL;
	int16_t x34 = 38;
	static int8_t x35 = -32;
	static volatile int8_t x36 = INT8_MIN;
	static volatile int32_t t8 = -10;

    t8 = (x33<=(x34>(x35-x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t t9 = 1;

    t9 = (x37<=(x38>(x39-x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	static uint32_t x47 = 4U;
	int64_t x48 = 104335366097LL;
	static int32_t t10 = -56173428;

    t10 = (x45<=(x46>(x47-x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MIN;
	volatile int8_t x52 = 15;
	volatile int32_t t11 = -5328713;

    t11 = (x49<=(x50>(x51-x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = -1LL;
	int8_t x54 = INT8_MAX;
	volatile uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 1U;

    t12 = (x53<=(x54>(x55-x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 260U;
	int8_t x58 = INT8_MIN;
	int64_t x60 = 103587677LL;
	volatile int32_t t13 = 3433;

    t13 = (x57<=(x58>(x59-x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x62 = -1;
	int32_t x63 = -2761547;
	volatile int64_t x64 = -1147735544353186LL;
	static int32_t t14 = 13;

    t14 = (x61<=(x62>(x63-x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x66 = 13;
	int32_t x67 = 23631613;
	int32_t t15 = -7374;

    t15 = (x65<=(x66>(x67-x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 20LL;
	uint8_t x71 = UINT8_MAX;
	int8_t x72 = -1;
	int32_t t16 = 30266;

    t16 = (x69<=(x70>(x71-x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x74 = 894U;
	int16_t x76 = -30;
	volatile int32_t t17 = 0;

    t17 = (x73<=(x74>(x75-x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -1;
	volatile int8_t x78 = INT8_MAX;
	volatile int32_t t18 = 143874603;

    t18 = (x77<=(x78>(x79-x80)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MIN;
	int8_t x83 = INT8_MAX;
	int64_t x84 = INT64_MAX;

    t19 = (x81<=(x82>(x83-x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x85 = 167869U;
	int8_t x86 = INT8_MAX;
	static uint32_t x88 = UINT32_MAX;
	volatile int32_t t20 = 32623656;

    t20 = (x85<=(x86>(x87-x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x91 = -20852541;
	volatile int32_t t21 = -166432;

    t21 = (x89<=(x90>(x91-x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	uint8_t x96 = 0U;
	static volatile int32_t t22 = 127763;

    t22 = (x93<=(x94>(x95-x96)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	static uint64_t x98 = 17050LLU;

    t23 = (x97<=(x98>(x99-x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x101 = 7422LL;
	uint8_t x103 = 4U;
	volatile int32_t t24 = -37762;

    t24 = (x101<=(x102>(x103-x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -15712357LL;
	int8_t x106 = -1;
	uint64_t x107 = 5589076LLU;
	static int32_t x108 = 6348;

    t25 = (x105<=(x106>(x107-x108)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MIN;
	static uint8_t x110 = UINT8_MAX;
	volatile uint8_t x111 = 0U;
	static uint64_t x112 = 338LLU;
	int32_t t26 = 90153;

    t26 = (x109<=(x110>(x111-x112)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x114 = INT16_MIN;
	static int8_t x115 = 3;
	int8_t x116 = 1;
	static int32_t t27 = 1017929590;

    t27 = (x113<=(x114>(x115-x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x118 = UINT32_MAX;
	uint8_t x120 = 3U;
	volatile int32_t t28 = -64203228;

    t28 = (x117<=(x118>(x119-x120)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x122 = INT32_MIN;
	uint8_t x124 = 0U;

    t29 = (x121<=(x122>(x123-x124)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x130 = 19U;
	int64_t x131 = -2028530715697664LL;
	static uint32_t x132 = 12U;
	volatile int32_t t30 = 14;

    t30 = (x129<=(x130>(x131-x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x133 = INT32_MAX;
	int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	int8_t x136 = INT8_MIN;

    t31 = (x133<=(x134>(x135-x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x137 = -1;
	int8_t x138 = INT8_MIN;
	volatile uint64_t x139 = 166LLU;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t32 = 1;

    t32 = (x137<=(x138>(x139-x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x141 = INT16_MAX;
	int64_t x142 = 213799LL;
	uint64_t x143 = 87990064840530LLU;
	volatile int16_t x144 = -1;
	int32_t t33 = 1698;

    t33 = (x141<=(x142>(x143-x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int8_t x147 = -2;
	uint64_t x148 = 3165839050547LLU;

    t34 = (x145<=(x146>(x147-x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MIN;
	static volatile uint32_t x150 = 91U;

    t35 = (x149<=(x150>(x151-x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x157 = INT16_MAX;
	volatile uint64_t x159 = 19095703833LLU;
	uint32_t x160 = 2762267U;
	static volatile int32_t t36 = -2973053;

    t36 = (x157<=(x158>(x159-x160)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t37 = 3837372;

    t37 = (x161<=(x162>(x163-x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int16_t x168 = INT16_MAX;
	int32_t t38 = 854904463;

    t38 = (x165<=(x166>(x167-x168)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = INT64_MIN;
	static int32_t x171 = INT32_MAX;
	static int16_t x172 = 1;
	static volatile int32_t t39 = -1065188562;

    t39 = (x169<=(x170>(x171-x172)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = 153768841776LLU;
	int8_t x176 = 1;

    t40 = (x173<=(x174>(x175-x176)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x178 = INT16_MIN;
	static int16_t x179 = 61;
	uint8_t x180 = 110U;
	int32_t t41 = -330;

    t41 = (x177<=(x178>(x179-x180)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x182 = -2473631;
	int32_t x183 = -11099;
	int64_t x184 = INT64_MIN;

    t42 = (x181<=(x182>(x183-x184)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x185 = 0U;
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = 63U;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t43 = 424839615;

    t43 = (x185<=(x186>(x187-x188)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x189 = 73064LL;
	int16_t x190 = INT16_MAX;
	volatile uint32_t x191 = 381474207U;
	uint64_t x192 = 117159LLU;
	volatile int32_t t44 = -1;

    t44 = (x189<=(x190>(x191-x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x194 = INT16_MIN;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t45 = 3401965;

    t45 = (x193<=(x194>(x195-x196)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x205 = INT64_MAX;
	uint64_t x206 = 0LLU;
	static uint64_t x207 = 5917893697832327114LLU;
	uint8_t x208 = UINT8_MAX;
	int32_t t46 = -824;

    t46 = (x205<=(x206>(x207-x208)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -1;
	int64_t x210 = -1LL;
	int16_t x211 = INT16_MAX;
	static volatile uint64_t x212 = UINT64_MAX;
	static volatile int32_t t47 = 14;

    t47 = (x209<=(x210>(x211-x212)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = 0;
	static uint64_t x214 = UINT64_MAX;
	static uint64_t x215 = UINT64_MAX;
	volatile uint8_t x216 = 13U;
	volatile int32_t t48 = -446312;

    t48 = (x213<=(x214>(x215-x216)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = -109399LL;
	uint64_t x218 = 4721301688094944LLU;
	static uint32_t x219 = 54179027U;
	uint32_t x220 = 343U;
	volatile int32_t t49 = -1201;

    t49 = (x217<=(x218>(x219-x220)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = -1;
	int32_t x222 = 178265332;
	volatile int8_t x223 = INT8_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t50 = 1742;

    t50 = (x221<=(x222>(x223-x224)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x225 = 62631871U;
	static int8_t x226 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;
	uint8_t x228 = UINT8_MAX;
	static volatile int32_t t51 = -197192736;

    t51 = (x225<=(x226>(x227-x228)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x229 = -1;
	int64_t x230 = -7569481776684434LL;
	uint8_t x232 = 109U;
	int32_t t52 = 1002;

    t52 = (x229<=(x230>(x231-x232)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x233 = INT64_MAX;
	int16_t x234 = -1174;
	static int64_t x235 = INT64_MIN;
	static int32_t t53 = -10113;

    t53 = (x233<=(x234>(x235-x236)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x237 = INT32_MAX;
	volatile int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = 20U;
	int16_t x240 = INT16_MIN;
	static int32_t t54 = -92;

    t54 = (x237<=(x238>(x239-x240)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x247 = 1410689LLU;
	int64_t x248 = -1LL;
	int32_t t55 = -34145;

    t55 = (x245<=(x246>(x247-x248)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x249 = 198982856U;
	uint64_t x250 = 249816996401326940LLU;
	int32_t x252 = -1;
	volatile int32_t t56 = 1;

    t56 = (x249<=(x250>(x251-x252)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = 0;
	uint64_t x254 = 43612455697LLU;
	static uint64_t x255 = 24891422467LLU;
	int16_t x256 = -1;
	volatile int32_t t57 = 891;

    t57 = (x253<=(x254>(x255-x256)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x257 = 9233U;
	int8_t x258 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	static volatile int16_t x260 = INT16_MAX;
	volatile int32_t t58 = -52;

    t58 = (x257<=(x258>(x259-x260)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x264 = 28;
	static volatile int32_t t59 = 2;

    t59 = (x261<=(x262>(x263-x264)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = INT16_MIN;
	volatile int8_t x266 = 50;
	static int64_t x267 = -1075215LL;
	int32_t x268 = INT32_MIN;

    t60 = (x265<=(x266>(x267-x268)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x269 = INT8_MAX;
	static int8_t x270 = INT8_MAX;
	int8_t x271 = -39;
	int64_t x272 = 1535346937059671LL;

    t61 = (x269<=(x270>(x271-x272)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x275 = INT16_MAX;
	int16_t x276 = -1;

    t62 = (x273<=(x274>(x275-x276)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = -8;
	static int16_t x278 = INT16_MAX;
	uint16_t x279 = 233U;
	uint8_t x280 = 93U;
	int32_t t63 = -1;

    t63 = (x277<=(x278>(x279-x280)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x282 = INT8_MAX;
	static int32_t x284 = INT32_MAX;
	int32_t t64 = 13463998;

    t64 = (x281<=(x282>(x283-x284)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x285 = -29;
	volatile int64_t x287 = 1676614230LL;
	uint32_t x288 = UINT32_MAX;

    t65 = (x285<=(x286>(x287-x288)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x293 = INT8_MIN;
	volatile int64_t x294 = 0LL;
	volatile int32_t x295 = -1;
	static volatile int32_t t66 = 128903;

    t66 = (x293<=(x294>(x295-x296)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = INT8_MAX;
	static int8_t x299 = -37;
	uint8_t x300 = UINT8_MAX;
	static volatile int32_t t67 = -7;

    t67 = (x297<=(x298>(x299-x300)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x301 = -869;
	int16_t x302 = -9;
	uint32_t x304 = UINT32_MAX;
	static int32_t t68 = 2682292;

    t68 = (x301<=(x302>(x303-x304)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = UINT16_MAX;
	uint32_t x306 = 440222U;
	int64_t x307 = -1LL;
	volatile int64_t x308 = 8018476245LL;
	volatile int32_t t69 = -2660492;

    t69 = (x305<=(x306>(x307-x308)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	static volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	static volatile uint32_t x312 = 385704U;
	static int32_t t70 = -56345;

    t70 = (x309<=(x310>(x311-x312)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x313 = INT8_MIN;
	uint32_t x314 = 325U;
	int64_t x316 = -1LL;
	volatile int32_t t71 = 13062542;

    t71 = (x313<=(x314>(x315-x316)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x317 = INT16_MIN;
	static int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = 4U;
	int32_t t72 = -424;

    t72 = (x317<=(x318>(x319-x320)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = INT8_MIN;
	uint16_t x322 = UINT16_MAX;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t73 = -2589179;

    t73 = (x321<=(x322>(x323-x324)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x326 = 100811977217119LLU;
	int16_t x327 = INT16_MIN;
	static int16_t x328 = -1274;
	static int32_t t74 = -1865;

    t74 = (x325<=(x326>(x327-x328)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = -1;
	int16_t x335 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t75 = 395703;

    t75 = (x333<=(x334>(x335-x336)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x337 = 85842507U;
	volatile uint64_t x338 = UINT64_MAX;
	int64_t x339 = -50569752788LL;
	int16_t x340 = -6;
	int32_t t76 = 1787608;

    t76 = (x337<=(x338>(x339-x340)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x341 = INT32_MAX;
	volatile int16_t x342 = -1;
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t77 = 14521;

    t77 = (x341<=(x342>(x343-x344)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = INT32_MIN;
	int32_t t78 = -98;

    t78 = (x349<=(x350>(x351-x352)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x353 = -1LL;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = -1LL;
	static int32_t x356 = -1;

    t79 = (x353<=(x354>(x355-x356)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x357 = INT8_MIN;
	int32_t x359 = 7483031;
	volatile int16_t x360 = INT16_MIN;

    t80 = (x357<=(x358>(x359-x360)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x361 = 199U;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = 1;
	int32_t x364 = INT32_MAX;
	static int32_t t81 = 56563480;

    t81 = (x361<=(x362>(x363-x364)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x366 = 0;
	int32_t x367 = 4;
	uint64_t x368 = 45097095LLU;
	int32_t t82 = -5;

    t82 = (x365<=(x366>(x367-x368)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x374 = UINT32_MAX;
	volatile int32_t t83 = -56;

    t83 = (x373<=(x374>(x375-x376)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x378 = 0;
	int64_t x380 = INT64_MIN;
	volatile int32_t t84 = 0;

    t84 = (x377<=(x378>(x379-x380)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x382 = 87856757;
	uint8_t x383 = UINT8_MAX;
	uint32_t x384 = UINT32_MAX;

    t85 = (x381<=(x382>(x383-x384)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MIN;
	static uint32_t x387 = 3242062U;
	volatile int32_t x388 = INT32_MIN;

    t86 = (x385<=(x386>(x387-x388)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = -1;
	static int32_t t87 = 1475;

    t87 = (x389<=(x390>(x391-x392)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x393 = INT8_MIN;
	static int32_t x394 = INT32_MAX;
	volatile int32_t t88 = -241847;

    t88 = (x393<=(x394>(x395-x396)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x401 = 0;
	int8_t x402 = INT8_MIN;
	uint16_t x403 = 51U;
	static volatile int32_t t89 = -175;

    t89 = (x401<=(x402>(x403-x404)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x405 = 30U;
	int32_t x407 = INT32_MIN;
	int64_t x408 = 3LL;
	static int32_t t90 = -6349;

    t90 = (x405<=(x406>(x407-x408)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x409 = UINT8_MAX;
	int8_t x410 = 43;
	static int16_t x411 = -1;
	int16_t x412 = INT16_MIN;

    t91 = (x409<=(x410>(x411-x412)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x413 = 1U;
	uint32_t x414 = 30246U;
	uint64_t x415 = 8331986LLU;
	int8_t x416 = INT8_MAX;
	int32_t t92 = 6626;

    t92 = (x413<=(x414>(x415-x416)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x417 = 1U;
	static volatile uint64_t x418 = UINT64_MAX;
	uint16_t x419 = 3U;
	uint64_t x420 = 16647914LLU;
	volatile int32_t t93 = 1;

    t93 = (x417<=(x418>(x419-x420)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x422 = INT16_MIN;
	uint16_t x423 = UINT16_MAX;
	uint64_t x424 = 16770346178607835LLU;
	int32_t t94 = 970;

    t94 = (x421<=(x422>(x423-x424)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x425 = INT16_MAX;
	int16_t x426 = INT16_MIN;
	static uint64_t x427 = UINT64_MAX;
	int8_t x428 = 2;

    t95 = (x425<=(x426>(x427-x428)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x433 = 0;
	uint32_t x436 = 3585678U;
	int32_t t96 = -65;

    t96 = (x433<=(x434>(x435-x436)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x437 = 102479;
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = -14;
	int8_t x440 = -1;

    t97 = (x437<=(x438>(x439-x440)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MIN;
	volatile int8_t x442 = INT8_MAX;
	volatile int32_t x443 = -1;
	int64_t x444 = INT64_MIN;

    t98 = (x441<=(x442>(x443-x444)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x445 = 10LL;
	int16_t x446 = INT16_MIN;

    t99 = (x445<=(x446>(x447-x448)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = INT32_MAX;
	int8_t x450 = -1;
	static int64_t x452 = -1LL;
	volatile int32_t t100 = 246;

    t100 = (x449<=(x450>(x451-x452)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x454 = UINT16_MAX;
	uint64_t x455 = 226LLU;
	uint8_t x456 = UINT8_MAX;
	int32_t t101 = 27745;

    t101 = (x453<=(x454>(x455-x456)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x457 = 502U;
	volatile int16_t x458 = INT16_MIN;
	volatile int64_t x459 = INT64_MAX;
	uint8_t x460 = 1U;

    t102 = (x457<=(x458>(x459-x460)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x461 = INT8_MIN;
	uint64_t x462 = UINT64_MAX;
	int16_t x463 = -1;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t103 = -98351175;

    t103 = (x461<=(x462>(x463-x464)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x466 = UINT64_MAX;
	volatile int64_t x467 = -1563233762LL;
	volatile int64_t x468 = INT64_MIN;
	static volatile int32_t t104 = 521;

    t104 = (x465<=(x466>(x467-x468)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x469 = 9U;
	int32_t t105 = 4245;

    t105 = (x469<=(x470>(x471-x472)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x473 = UINT64_MAX;
	volatile int64_t x475 = INT64_MAX;

    t106 = (x473<=(x474>(x475-x476)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x477 = UINT32_MAX;
	uint32_t x478 = 292558U;
	int32_t x479 = INT32_MIN;
	static volatile uint64_t x480 = UINT64_MAX;

    t107 = (x477<=(x478>(x479-x480)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x481 = 93U;
	volatile uint8_t x482 = 6U;
	volatile int8_t x483 = INT8_MIN;

    t108 = (x481<=(x482>(x483-x484)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x488 = 1;
	static volatile int32_t t109 = 9;

    t109 = (x485<=(x486>(x487-x488)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x489 = 322U;
	int8_t x490 = INT8_MIN;
	int32_t x491 = INT32_MIN;

    t110 = (x489<=(x490>(x491-x492)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x493 = INT8_MIN;
	volatile int8_t x494 = INT8_MAX;
	static int32_t x495 = -8429;
	int8_t x496 = INT8_MIN;
	volatile int32_t t111 = 10142;

    t111 = (x493<=(x494>(x495-x496)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x497 = 371176370U;
	static volatile int32_t x498 = INT32_MIN;
	int64_t x499 = INT64_MIN;

    t112 = (x497<=(x498>(x499-x500)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = INT16_MIN;
	int64_t x506 = -1272389749LL;
	int8_t x507 = 0;
	uint16_t x508 = UINT16_MAX;
	int32_t t113 = -29837359;

    t113 = (x505<=(x506>(x507-x508)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = INT8_MIN;
	volatile int32_t x511 = 60;
	uint64_t x512 = 62863262391886LLU;

    t114 = (x509<=(x510>(x511-x512)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x514 = -1LL;
	static int8_t x515 = INT8_MIN;
	int16_t x516 = INT16_MIN;
	int32_t t115 = 1;

    t115 = (x513<=(x514>(x515-x516)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = 107354270U;
	int32_t x519 = -1;
	int32_t x520 = -109647845;
	volatile int32_t t116 = -1;

    t116 = (x517<=(x518>(x519-x520)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x521 = INT8_MAX;
	uint8_t x522 = 0U;
	int64_t x523 = 964LL;
	static int32_t t117 = 177182702;

    t117 = (x521<=(x522>(x523-x524)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x532 = -1;
	static int32_t t118 = 1322;

    t118 = (x529<=(x530>(x531-x532)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x534 = INT16_MIN;
	volatile uint32_t x535 = 31U;
	static uint32_t x536 = 36649U;
	int32_t t119 = -1451989;

    t119 = (x533<=(x534>(x535-x536)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x538 = INT8_MIN;
	uint64_t x540 = 180LLU;
	volatile int32_t t120 = -5235;

    t120 = (x537<=(x538>(x539-x540)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x541 = 2134055713U;
	volatile int32_t x542 = INT32_MIN;
	static int16_t x544 = INT16_MIN;
	int32_t t121 = -668;

    t121 = (x541<=(x542>(x543-x544)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x546 = 259499202285445LL;
	static int32_t x548 = INT32_MIN;

    t122 = (x545<=(x546>(x547-x548)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = INT8_MIN;
	int64_t x554 = INT64_MIN;
	int32_t x556 = INT32_MAX;
	int32_t t123 = -553262130;

    t123 = (x553<=(x554>(x555-x556)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x557 = INT32_MIN;
	int16_t x558 = 43;
	int8_t x559 = INT8_MIN;
	static uint64_t x560 = UINT64_MAX;
	volatile int32_t t124 = -1188681;

    t124 = (x557<=(x558>(x559-x560)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x561 = INT8_MIN;
	volatile uint8_t x562 = UINT8_MAX;
	volatile int8_t x563 = INT8_MAX;
	uint32_t x564 = 317U;
	static volatile int32_t t125 = 791;

    t125 = (x561<=(x562>(x563-x564)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x565 = INT32_MAX;
	static int32_t x567 = INT32_MAX;
	int64_t x568 = -58020055LL;
	static volatile int32_t t126 = 15;

    t126 = (x565<=(x566>(x567-x568)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = -1LL;
	static uint64_t x574 = UINT64_MAX;
	int32_t t127 = -925616545;

    t127 = (x573<=(x574>(x575-x576)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x577 = 0;
	int16_t x578 = INT16_MAX;
	volatile int32_t x579 = -3663;
	int32_t x580 = -1;
	static int32_t t128 = 2861150;

    t128 = (x577<=(x578>(x579-x580)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x582 = 6U;
	int8_t x584 = INT8_MIN;

    t129 = (x581<=(x582>(x583-x584)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x593 = 9U;
	uint32_t x594 = 4394500U;
	static int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	int32_t t130 = 879314671;

    t130 = (x593<=(x594>(x595-x596)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x597 = INT32_MIN;
	int16_t x598 = -1603;

    t131 = (x597<=(x598>(x599-x600)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x602 = 6U;
	volatile int16_t x603 = -1;
	int16_t x604 = INT16_MIN;
	int32_t t132 = -1;

    t132 = (x601<=(x602>(x603-x604)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x605 = INT64_MIN;
	int8_t x607 = -1;
	volatile int8_t x608 = 34;
	volatile int32_t t133 = -46;

    t133 = (x605<=(x606>(x607-x608)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x609 = 0U;
	uint16_t x611 = 14U;
	int8_t x612 = -1;

    t134 = (x609<=(x610>(x611-x612)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x613 = UINT16_MAX;
	int8_t x614 = INT8_MIN;
	uint64_t x615 = 26711657LLU;
	int32_t t135 = -17;

    t135 = (x613<=(x614>(x615-x616)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x617 = INT32_MIN;
	static uint8_t x618 = 0U;
	uint16_t x619 = 3365U;
	volatile int32_t t136 = -216;

    t136 = (x617<=(x618>(x619-x620)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x621 = -1LL;
	uint16_t x622 = 1238U;
	int32_t t137 = 162050;

    t137 = (x621<=(x622>(x623-x624)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x625 = INT32_MAX;
	int16_t x626 = INT16_MIN;
	volatile int8_t x627 = INT8_MIN;
	volatile int64_t x628 = 167790492311738LL;

    t138 = (x625<=(x626>(x627-x628)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x629 = INT64_MAX;
	volatile uint16_t x630 = 316U;
	uint32_t x631 = UINT32_MAX;
	volatile uint16_t x632 = UINT16_MAX;

    t139 = (x629<=(x630>(x631-x632)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x633 = 3U;
	volatile uint64_t x634 = 15LLU;
	volatile uint64_t x635 = 522062LLU;
	static int8_t x636 = 1;
	volatile int32_t t140 = -1;

    t140 = (x633<=(x634>(x635-x636)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x637 = 11U;
	int16_t x640 = INT16_MIN;

    t141 = (x637<=(x638>(x639-x640)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x641 = -1;
	volatile int16_t x642 = -156;
	uint8_t x643 = 11U;
	int8_t x644 = INT8_MIN;
	volatile int32_t t142 = 56831424;

    t142 = (x641<=(x642>(x643-x644)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x645 = 25138758U;
	int16_t x646 = 14;
	static uint8_t x647 = UINT8_MAX;
	uint64_t x648 = UINT64_MAX;
	volatile int32_t t143 = 116539;

    t143 = (x645<=(x646>(x647-x648)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x649 = 133U;
	int8_t x650 = 21;
	int64_t x651 = -5LL;
	volatile uint32_t x652 = 83619318U;

    t144 = (x649<=(x650>(x651-x652)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MIN;
	volatile int32_t t145 = -4786231;

    t145 = (x653<=(x654>(x655-x656)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x657 = UINT64_MAX;
	int32_t x658 = INT32_MIN;
	uint32_t x659 = 3561U;
	volatile int64_t x660 = 128275LL;

    t146 = (x657<=(x658>(x659-x660)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x661 = -71;
	static uint16_t x662 = 15800U;
	static int8_t x664 = -25;
	int32_t t147 = 7367386;

    t147 = (x661<=(x662>(x663-x664)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x666 = 1LLU;
	int32_t x668 = -1;
	volatile int32_t t148 = -358764923;

    t148 = (x665<=(x666>(x667-x668)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x673 = INT32_MIN;
	static volatile int8_t x675 = 20;
	int32_t t149 = 3;

    t149 = (x673<=(x674>(x675-x676)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x678 = INT64_MIN;
	uint8_t x679 = 77U;
	uint32_t x680 = UINT32_MAX;
	int32_t t150 = -113;

    t150 = (x677<=(x678>(x679-x680)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x682 = -1;
	int32_t x683 = INT32_MAX;
	int16_t x684 = INT16_MAX;

    t151 = (x681<=(x682>(x683-x684)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	volatile int64_t x687 = INT64_MAX;
	uint16_t x688 = UINT16_MAX;
	volatile int32_t t152 = 244181;

    t152 = (x685<=(x686>(x687-x688)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x689 = INT8_MAX;
	static int16_t x690 = INT16_MIN;
	int8_t x691 = INT8_MIN;
	volatile int32_t x692 = INT32_MIN;
	volatile int32_t t153 = 3355378;

    t153 = (x689<=(x690>(x691-x692)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x697 = INT8_MIN;
	uint8_t x698 = 36U;
	int32_t x699 = -225;
	int64_t x700 = INT64_MIN;
	int32_t t154 = -1;

    t154 = (x697<=(x698>(x699-x700)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x701 = -1;
	int8_t x702 = 11;
	uint32_t x703 = UINT32_MAX;
	volatile int8_t x704 = 0;
	int32_t t155 = -700;

    t155 = (x701<=(x702>(x703-x704)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x705 = 42;
	uint16_t x706 = UINT16_MAX;
	volatile int8_t x707 = INT8_MIN;
	static int8_t x708 = INT8_MIN;
	static int32_t t156 = 793;

    t156 = (x705<=(x706>(x707-x708)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x709 = INT8_MIN;
	uint16_t x710 = 180U;
	int8_t x711 = -1;
	volatile int64_t x712 = 1913956454714297LL;
	volatile int32_t t157 = -1;

    t157 = (x709<=(x710>(x711-x712)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x713 = -1;
	volatile int64_t x714 = INT64_MAX;
	int64_t x715 = INT64_MIN;
	static int32_t x716 = INT32_MIN;
	static int32_t t158 = 1096448;

    t158 = (x713<=(x714>(x715-x716)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x717 = -221;
	uint64_t x718 = UINT64_MAX;
	uint32_t x719 = UINT32_MAX;
	int16_t x720 = 1465;
	volatile int32_t t159 = -2405827;

    t159 = (x717<=(x718>(x719-x720)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x729 = INT32_MIN;
	int64_t x730 = -198189535374LL;
	static uint8_t x732 = UINT8_MAX;

    t160 = (x729<=(x730>(x731-x732)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = INT16_MIN;

    t161 = (x733<=(x734>(x735-x736)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x737 = INT16_MAX;
	uint64_t x738 = 93793812512493890LLU;
	volatile int16_t x739 = INT16_MAX;
	int64_t x740 = INT64_MAX;
	int32_t t162 = -127530418;

    t162 = (x737<=(x738>(x739-x740)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x741 = INT32_MIN;
	int64_t x742 = INT64_MAX;
	int16_t x743 = INT16_MIN;
	volatile int32_t t163 = 1;

    t163 = (x741<=(x742>(x743-x744)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x745 = INT8_MIN;
	int16_t x747 = INT16_MIN;
	uint16_t x748 = 27U;
	volatile int32_t t164 = 13733;

    t164 = (x745<=(x746>(x747-x748)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x750 = -1;
	volatile uint16_t x751 = 53U;
	int8_t x752 = INT8_MIN;
	int32_t t165 = 39002650;

    t165 = (x749<=(x750>(x751-x752)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x753 = UINT64_MAX;
	static int32_t x754 = -4751908;
	static uint64_t x755 = 598980188LLU;
	uint32_t x756 = UINT32_MAX;
	int32_t t166 = 74;

    t166 = (x753<=(x754>(x755-x756)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x765 = INT32_MAX;
	int32_t x767 = INT32_MIN;
	static int32_t x768 = -1;
	int32_t t167 = 6046;

    t167 = (x765<=(x766>(x767-x768)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x769 = 0;
	static int16_t x771 = -1;
	volatile uint8_t x772 = 111U;

    t168 = (x769<=(x770>(x771-x772)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x777 = 0U;
	int32_t x778 = INT32_MIN;
	int32_t x779 = 610;
	static int64_t x780 = -235355211LL;
	int32_t t169 = 8851;

    t169 = (x777<=(x778>(x779-x780)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x781 = 31348;
	volatile int16_t x782 = 2;
	uint64_t x783 = 87504589340762LLU;
	static int16_t x784 = INT16_MIN;
	int32_t t170 = 0;

    t170 = (x781<=(x782>(x783-x784)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x786 = -1;
	int64_t x787 = -1624936177335186LL;
	volatile int32_t t171 = 92664232;

    t171 = (x785<=(x786>(x787-x788)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x789 = INT16_MAX;
	int16_t x790 = INT16_MIN;
	static int16_t x791 = -1;
	uint16_t x792 = 2297U;
	volatile int32_t t172 = -7;

    t172 = (x789<=(x790>(x791-x792)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x793 = 258U;
	uint32_t x794 = UINT32_MAX;
	static uint8_t x795 = 3U;
	int8_t x796 = INT8_MAX;
	int32_t t173 = 70533033;

    t173 = (x793<=(x794>(x795-x796)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x797 = INT32_MAX;
	int64_t x798 = -122096LL;
	volatile uint32_t x799 = 14U;
	volatile uint64_t x800 = 302576688201964LLU;
	int32_t t174 = 0;

    t174 = (x797<=(x798>(x799-x800)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x801 = UINT32_MAX;
	int64_t x802 = INT64_MAX;
	int8_t x803 = 1;
	volatile uint16_t x804 = 6719U;
	volatile int32_t t175 = -7411457;

    t175 = (x801<=(x802>(x803-x804)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x805 = INT64_MIN;
	int16_t x806 = -156;
	uint16_t x808 = 60U;
	volatile int32_t t176 = -3;

    t176 = (x805<=(x806>(x807-x808)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x813 = 289022;
	int8_t x815 = -1;
	volatile int32_t t177 = 1056;

    t177 = (x813<=(x814>(x815-x816)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x817 = -1;
	int8_t x818 = 14;
	int64_t x819 = -155044830LL;
	volatile int32_t t178 = -506706419;

    t178 = (x817<=(x818>(x819-x820)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x822 = INT64_MIN;
	static uint32_t x823 = 4101955U;
	static volatile int8_t x824 = INT8_MAX;
	volatile int32_t t179 = 2;

    t179 = (x821<=(x822>(x823-x824)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x825 = -1LL;
	uint8_t x826 = 31U;
	int8_t x827 = INT8_MAX;
	uint64_t x828 = UINT64_MAX;
	volatile int32_t t180 = -290908661;

    t180 = (x825<=(x826>(x827-x828)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x829 = UINT64_MAX;
	static int64_t x830 = -1LL;
	int64_t x832 = -1LL;
	static int32_t t181 = -535556872;

    t181 = (x829<=(x830>(x831-x832)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x833 = INT32_MIN;
	int16_t x834 = -465;
	static volatile uint32_t x836 = UINT32_MAX;
	volatile int32_t t182 = 40;

    t182 = (x833<=(x834>(x835-x836)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x837 = INT64_MAX;
	int32_t x838 = 1053353057;
	static int32_t t183 = 0;

    t183 = (x837<=(x838>(x839-x840)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x841 = -1;
	static int8_t x843 = INT8_MIN;
	int16_t x844 = INT16_MIN;
	volatile int32_t t184 = -11695439;

    t184 = (x841<=(x842>(x843-x844)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x845 = 16;
	static volatile int16_t x846 = -1;
	volatile int32_t x847 = 58;
	uint16_t x848 = UINT16_MAX;
	static volatile int32_t t185 = -127914995;

    t185 = (x845<=(x846>(x847-x848)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x849 = UINT64_MAX;
	uint64_t x850 = 527543230641299285LLU;
	uint32_t x851 = UINT32_MAX;
	int8_t x852 = INT8_MAX;
	static volatile int32_t t186 = 251;

    t186 = (x849<=(x850>(x851-x852)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x853 = 13789U;
	uint32_t x855 = 1U;
	static int8_t x856 = INT8_MAX;

    t187 = (x853<=(x854>(x855-x856)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x857 = INT32_MIN;
	static uint16_t x859 = 36U;
	uint8_t x860 = UINT8_MAX;
	static int32_t t188 = 25946;

    t188 = (x857<=(x858>(x859-x860)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x864 = UINT16_MAX;
	int32_t t189 = -1;

    t189 = (x861<=(x862>(x863-x864)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x867 = -1;
	int16_t x868 = INT16_MAX;
	int32_t t190 = -140;

    t190 = (x865<=(x866>(x867-x868)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x869 = INT32_MIN;
	int16_t x870 = 1558;

    t191 = (x869<=(x870>(x871-x872)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x873 = INT16_MIN;
	int64_t x874 = -1LL;
	uint32_t x876 = 29829457U;
	volatile int32_t t192 = 43312;

    t192 = (x873<=(x874>(x875-x876)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x877 = 0U;
	int64_t x879 = -1LL;
	int64_t x880 = 366810074882606LL;
	int32_t t193 = 5;

    t193 = (x877<=(x878>(x879-x880)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x881 = 8U;
	static uint16_t x882 = 1529U;
	uint32_t x883 = UINT32_MAX;
	int8_t x884 = INT8_MIN;
	int32_t t194 = -453583722;

    t194 = (x881<=(x882>(x883-x884)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x885 = -1;
	volatile int8_t x886 = 0;
	static int8_t x887 = INT8_MIN;
	volatile int32_t x888 = -2693;
	int32_t t195 = 5;

    t195 = (x885<=(x886>(x887-x888)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = -1LL;
	uint8_t x890 = 0U;
	int16_t x892 = 91;
	int32_t t196 = -1;

    t196 = (x889<=(x890>(x891-x892)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x893 = -453302709819231LL;
	int16_t x894 = INT16_MIN;
	static int64_t x896 = 7880511748919210LL;

    t197 = (x893<=(x894>(x895-x896)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = INT8_MIN;
	int32_t x898 = INT32_MIN;
	volatile int32_t x899 = -1832;
	volatile int32_t x900 = INT32_MIN;

    t198 = (x897<=(x898>(x899-x900)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x901 = INT16_MAX;
	int64_t x902 = INT64_MAX;
	int32_t x903 = -4336009;
	volatile int32_t t199 = 11;

    t199 = (x901<=(x902>(x903-x904)));

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

