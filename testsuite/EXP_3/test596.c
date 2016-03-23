
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

int8_t x1 = INT8_MIN;
static int64_t x5 = INT64_MAX;
uint16_t x10 = 1088U;
static int8_t x21 = -7;
int32_t x23 = -5937;
static volatile int16_t x26 = INT16_MAX;
int32_t x30 = 878031;
static uint32_t x41 = 42156593U;
int16_t x46 = 3832;
int64_t x65 = 4071088674677LL;
int16_t x67 = -2805;
volatile uint32_t x77 = 1133U;
static int64_t x91 = -1LL;
uint32_t x95 = 28U;
int64_t x97 = INT64_MIN;
volatile int32_t t20 = -367886;
uint64_t x107 = UINT64_MAX;
static int8_t x112 = INT8_MAX;
int8_t x113 = -6;
uint16_t x135 = UINT16_MAX;
static uint32_t x138 = 7022U;
static int16_t x141 = INT16_MIN;
int32_t x146 = -12010084;
volatile int32_t t29 = -4661114;
int32_t x149 = INT32_MIN;
int32_t x150 = INT32_MAX;
int32_t x152 = INT32_MAX;
int16_t x157 = -1;
volatile int32_t t32 = -5267908;
uint64_t x171 = 3LLU;
uint64_t x173 = UINT64_MAX;
volatile uint8_t x175 = 2U;
uint16_t x178 = 163U;
int32_t x180 = INT32_MAX;
int32_t t37 = 64491;
uint8_t x191 = 28U;
int64_t x193 = 2824324013940778LL;
static int32_t x195 = -10;
int16_t x196 = 1;
int32_t x201 = -891689980;
int64_t x206 = -10LL;
volatile int64_t x218 = -1LL;
int64_t x219 = 145782526321844LL;
int64_t x223 = INT64_MIN;
int64_t x234 = -927413515176132960LL;
uint32_t x251 = 2U;
volatile int32_t x252 = INT32_MIN;
int64_t x256 = INT64_MIN;
int16_t x258 = INT16_MIN;
int16_t x259 = 9076;
int8_t x260 = -1;
volatile int8_t x261 = INT8_MIN;
volatile uint8_t x267 = 0U;
int32_t x271 = -1;
static int16_t x275 = INT16_MAX;
int16_t x282 = INT16_MIN;
int64_t x285 = INT64_MIN;
int8_t x288 = -15;
static int8_t x290 = INT8_MIN;
volatile uint8_t x292 = UINT8_MAX;
int32_t x296 = -1;
uint64_t x298 = 441870260496082LLU;
int32_t x302 = INT32_MIN;
uint64_t x305 = 17LLU;
int32_t t66 = 0;
int32_t x317 = 3345562;
volatile uint64_t x324 = UINT64_MAX;
static uint8_t x339 = UINT8_MAX;
int64_t x340 = INT64_MIN;
int16_t x341 = -3;
static int32_t x346 = INT32_MAX;
volatile int32_t t73 = -26180;
int16_t x356 = 3;
volatile int32_t t75 = 5590577;
uint16_t x366 = 518U;
volatile int32_t x367 = -1;
int8_t x368 = -1;
int32_t t77 = -247780;
int64_t x372 = 423999359010419LL;
volatile int32_t t80 = 730612461;
static int64_t x383 = -1LL;
int32_t t81 = 1;
int16_t x385 = INT16_MIN;
int32_t x390 = INT32_MAX;
static uint8_t x391 = 11U;
int32_t t84 = -820;
int32_t x403 = 1840594;
uint64_t x415 = UINT64_MAX;
volatile int8_t x419 = INT8_MAX;
int32_t x421 = -6308117;
int64_t x423 = -1LL;
int32_t x443 = -1;
int32_t t94 = 2;
static int32_t x448 = -50;
int32_t t96 = -262;
int64_t x457 = -913292412525LL;
int32_t t98 = -802;
static uint64_t x468 = 144631LLU;
int16_t x469 = 3;
uint32_t x488 = UINT32_MAX;
static uint16_t x490 = UINT16_MAX;
int64_t x492 = INT64_MAX;
static int16_t x504 = INT16_MAX;
volatile int8_t x513 = INT8_MIN;
static int16_t x515 = -1276;
uint8_t x516 = 57U;
int32_t x519 = -68487786;
static int32_t t107 = -60;
int8_t x521 = INT8_MIN;
int32_t x530 = INT32_MAX;
uint32_t x532 = UINT32_MAX;
uint8_t x536 = 8U;
static int32_t t112 = 250;
volatile int32_t t113 = 15540;
int32_t x547 = INT32_MIN;
volatile int32_t x557 = INT32_MIN;
static volatile int64_t x564 = INT64_MIN;
static volatile uint8_t x570 = 12U;
int32_t x571 = INT32_MIN;
int8_t x575 = INT8_MIN;
uint64_t x577 = 65900933LLU;
static int16_t x579 = INT16_MAX;
int64_t x583 = INT64_MAX;
int32_t t122 = -7756;
int64_t x586 = -1LL;
static int64_t x590 = INT64_MAX;
int64_t x599 = -11838476325395102LL;
uint16_t x602 = UINT16_MAX;
static int64_t x609 = INT64_MAX;
int32_t x610 = INT32_MIN;
int16_t x614 = INT16_MIN;
int32_t x620 = INT32_MIN;
int32_t t131 = 0;
int16_t x623 = INT16_MIN;
int64_t x633 = -534LL;
volatile int32_t x643 = INT32_MAX;
int32_t t136 = -637602120;
int16_t x648 = 16302;
static int64_t x652 = -1LL;
static int8_t x657 = 5;
uint64_t x660 = 19119315573811LLU;
volatile int32_t t139 = 39459270;
static int32_t x677 = -1;
int8_t x678 = INT8_MIN;
int16_t x679 = INT16_MIN;
int32_t t143 = -14017038;
volatile int8_t x689 = -1;
uint64_t x691 = UINT64_MAX;
int32_t x692 = INT32_MIN;
int16_t x694 = INT16_MIN;
static int64_t x695 = INT64_MAX;
static int64_t x697 = -1LL;
uint8_t x699 = 3U;
volatile int32_t x701 = 114108580;
volatile uint16_t x702 = 15233U;
int64_t x704 = INT64_MAX;
volatile int16_t x713 = INT16_MAX;
int64_t x715 = INT64_MIN;
int8_t x720 = INT8_MIN;
uint64_t x721 = UINT64_MAX;
int32_t x724 = -1;
uint32_t x732 = UINT32_MAX;
static int64_t x736 = INT64_MIN;
static int8_t x739 = INT8_MIN;
int8_t x740 = 52;
int64_t x745 = -1LL;
int32_t t159 = 5061;
uint8_t x753 = 3U;
int32_t x759 = INT32_MAX;
int32_t t162 = 125800291;
int8_t x766 = 7;
volatile uint8_t x768 = 45U;
int8_t x775 = INT8_MIN;
uint64_t x777 = 967706410LLU;
int8_t x790 = INT8_MIN;
static int64_t x791 = INT64_MIN;
int16_t x806 = INT16_MAX;
uint16_t x809 = UINT16_MAX;
int16_t x818 = 1310;
int32_t x824 = -197930672;
uint64_t x828 = 118985340LLU;
int32_t t178 = -6;
uint32_t x834 = 2793945U;
volatile int64_t x839 = -1LL;
int32_t t180 = -13299;
int8_t x842 = INT8_MIN;
int32_t t181 = 365750603;
volatile int32_t t182 = 1938;
uint32_t x856 = 109U;
int16_t x860 = INT16_MIN;
static int32_t t184 = -108016;
static int16_t x861 = -1591;
int64_t x863 = INT64_MAX;
volatile int32_t t185 = 250;
static uint16_t x876 = 3711U;
int8_t x880 = -22;
int32_t t188 = -1043479;
int32_t x882 = INT32_MIN;
volatile int32_t x883 = INT32_MAX;
static uint32_t x887 = 23446624U;
static volatile int32_t t190 = -3;
int16_t x894 = 238;
static int8_t x895 = INT8_MAX;
int32_t t192 = -11;
int64_t x898 = -3198LL;
uint32_t x904 = 14462488U;
uint16_t x905 = UINT16_MAX;
int8_t x913 = -31;
int64_t x917 = INT64_MIN;
static uint32_t x922 = UINT32_MAX;
static uint16_t x924 = UINT16_MAX;


void f0(void) {
    	static volatile uint32_t x2 = 5911U;
	volatile int64_t x3 = -1LL;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = 7473;

    t0 = ((x1+x2)==(x3/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = -768608203;

    t1 = ((x5+x6)==(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 8;
	volatile int32_t x11 = 90642;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -3150805;

    t2 = ((x9+x10)==(x11/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 7U;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MIN;
	int32_t t3 = -85096;

    t3 = ((x17+x18)==(x19/x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MIN;
	volatile int16_t x24 = INT16_MIN;
	int32_t t4 = 15283936;

    t4 = ((x21+x22)==(x23/x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x25 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = 7U;
	static volatile int32_t t5 = -1;

    t5 = ((x25+x26)==(x27/x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = INT16_MAX;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = INT8_MIN;
	int32_t t6 = -315;

    t6 = ((x29+x30)==(x31/x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x42 = UINT64_MAX;
	static int32_t x43 = INT32_MAX;
	uint32_t x44 = 71U;
	int32_t t7 = 10358007;

    t7 = ((x41+x42)==(x43/x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x45 = 882LLU;
	static uint64_t x47 = 7LLU;
	int64_t x48 = INT64_MIN;
	volatile int32_t t8 = 226;

    t8 = ((x45+x46)==(x47/x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x53 = -2289518446477047LL;
	uint64_t x54 = UINT64_MAX;
	uint16_t x55 = UINT16_MAX;
	static uint64_t x56 = 135503552474LLU;
	volatile int32_t t9 = -5944;

    t9 = ((x53+x54)==(x55/x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x57 = 27259U;
	int32_t x58 = 40547;
	int32_t x59 = 873445144;
	int32_t x60 = INT32_MIN;
	volatile int32_t t10 = 1;

    t10 = ((x57+x58)==(x59/x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x66 = -11;
	int32_t x68 = INT32_MAX;
	volatile int32_t t11 = -65884158;

    t11 = ((x65+x66)==(x67/x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x69 = -1719;
	int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	volatile int64_t x72 = -3972805818821822325LL;
	int32_t t12 = 0;

    t12 = ((x69+x70)==(x71/x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = INT8_MIN;
	static int8_t x74 = -1;
	int32_t x75 = 599157487;
	int32_t x76 = -1;
	static volatile int32_t t13 = -9;

    t13 = ((x73+x74)==(x75/x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x78 = INT8_MIN;
	volatile uint64_t x79 = 112776247986970421LLU;
	int16_t x80 = 3;
	int32_t t14 = 793388;

    t14 = ((x77+x78)==(x79/x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x81 = 20278LL;
	volatile int32_t x82 = -836;
	uint32_t x83 = UINT32_MAX;
	uint8_t x84 = 10U;
	int32_t t15 = 25849;

    t15 = ((x81+x82)==(x83/x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x85 = -2086;
	int8_t x86 = INT8_MAX;
	volatile uint32_t x87 = 357U;
	uint8_t x88 = 58U;
	volatile int32_t t16 = 892;

    t16 = ((x85+x86)==(x87/x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x89 = -1;
	int16_t x90 = -1;
	static int8_t x92 = -1;
	int32_t t17 = -637016;

    t17 = ((x89+x90)==(x91/x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint32_t x94 = 54U;
	static int32_t x96 = INT32_MIN;
	int32_t t18 = 47019812;

    t18 = ((x93+x94)==(x95/x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x98 = INT64_MAX;
	uint32_t x99 = 187934U;
	static int32_t x100 = -1;
	int32_t t19 = -375;

    t19 = ((x97+x98)==(x99/x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = -244419893189333LL;
	int32_t x102 = INT32_MIN;
	static int64_t x103 = INT64_MAX;
	volatile uint32_t x104 = UINT32_MAX;

    t20 = ((x101+x102)==(x103/x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x105 = INT16_MIN;
	uint32_t x106 = 5488U;
	int64_t x108 = -1735LL;
	volatile int32_t t21 = 6;

    t21 = ((x105+x106)==(x107/x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x109 = 2876U;
	uint64_t x110 = 26094111493281LLU;
	int32_t x111 = INT32_MAX;
	volatile int32_t t22 = 2091331;

    t22 = ((x109+x110)==(x111/x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x114 = INT8_MIN;
	volatile int32_t x115 = 1032455791;
	uint16_t x116 = 1774U;
	volatile int32_t t23 = 4039;

    t23 = ((x113+x114)==(x115/x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MIN;
	uint64_t x118 = 8LLU;
	uint64_t x119 = 465340689627904960LLU;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t24 = 670;

    t24 = ((x117+x118)==(x119/x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x129 = -4043822;
	volatile int8_t x130 = INT8_MIN;
	volatile uint16_t x131 = UINT16_MAX;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t25 = 508;

    t25 = ((x129+x130)==(x131/x132));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x133 = 8086U;
	uint64_t x134 = 98306867481334LLU;
	uint32_t x136 = 1771534U;
	int32_t t26 = -11594;

    t26 = ((x133+x134)==(x135/x136));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = 8;
	volatile int32_t x139 = -1;
	uint16_t x140 = 1U;
	volatile int32_t t27 = -9099;

    t27 = ((x137+x138)==(x139/x140));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x142 = -1LL;
	static uint64_t x143 = UINT64_MAX;
	static int8_t x144 = -1;
	volatile int32_t t28 = -61708363;

    t28 = ((x141+x142)==(x143/x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x145 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	uint64_t x148 = UINT64_MAX;

    t29 = ((x145+x146)==(x147/x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x151 = 25LL;
	int32_t t30 = 1;

    t30 = ((x149+x150)==(x151/x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MAX;
	volatile int32_t t31 = -1441758;

    t31 = ((x153+x154)==(x155/x156));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x158 = 83U;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = 64U;

    t32 = ((x157+x158)==(x159/x160));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x161 = INT64_MAX;
	int32_t x162 = INT32_MIN;
	uint64_t x163 = 1525531766822LLU;
	int16_t x164 = -1;
	volatile int32_t t33 = 629223;

    t33 = ((x161+x162)==(x163/x164));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x165 = -9;
	uint16_t x166 = UINT16_MAX;
	uint16_t x167 = 190U;
	static uint8_t x168 = 17U;
	volatile int32_t t34 = -6248;

    t34 = ((x165+x166)==(x167/x168));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = -8;
	int16_t x170 = INT16_MAX;
	volatile int16_t x172 = 49;
	int32_t t35 = 4;

    t35 = ((x169+x170)==(x171/x172));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x174 = INT16_MIN;
	uint32_t x176 = 12397918U;
	volatile int32_t t36 = 1;

    t36 = ((x173+x174)==(x175/x176));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x177 = 20U;
	uint64_t x179 = UINT64_MAX;

    t37 = ((x177+x178)==(x179/x180));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x181 = INT8_MAX;
	volatile uint64_t x182 = 7522LLU;
	volatile int16_t x183 = -986;
	int64_t x184 = 42327LL;
	volatile int32_t t38 = -402868473;

    t38 = ((x181+x182)==(x183/x184));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x189 = INT32_MAX;
	static uint32_t x190 = 58U;
	volatile int64_t x192 = -1LL;
	volatile int32_t t39 = 32168;

    t39 = ((x189+x190)==(x191/x192));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x194 = INT64_MIN;
	int32_t t40 = 88852580;

    t40 = ((x193+x194)==(x195/x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x197 = 36992349;
	uint16_t x198 = 1U;
	uint16_t x199 = 2195U;
	volatile int8_t x200 = -1;
	int32_t t41 = -30;

    t41 = ((x197+x198)==(x199/x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x202 = -9;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = -1;
	volatile int32_t t42 = -845899;

    t42 = ((x201+x202)==(x203/x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x205 = 5508427758040611LLU;
	volatile int8_t x207 = -8;
	int8_t x208 = -1;
	volatile int32_t t43 = 56;

    t43 = ((x205+x206)==(x207/x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x213 = -1;
	uint32_t x214 = 10799147U;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 15515001797LLU;
	int32_t t44 = 24877;

    t44 = ((x213+x214)==(x215/x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x217 = -1;
	static int64_t x220 = -553447467249414LL;
	volatile int32_t t45 = -268343;

    t45 = ((x217+x218)==(x219/x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x221 = 25;
	volatile uint32_t x222 = 1442U;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t46 = -379369143;

    t46 = ((x221+x222)==(x223/x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x225 = -56738755898091LL;
	volatile uint32_t x226 = 1082411U;
	uint8_t x227 = 121U;
	volatile uint32_t x228 = 218U;
	volatile int32_t t47 = 112664828;

    t47 = ((x225+x226)==(x227/x228));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x233 = -1;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	int32_t t48 = -6882656;

    t48 = ((x233+x234)==(x235/x236));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x237 = INT64_MIN;
	static uint8_t x238 = UINT8_MAX;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t49 = 626889445;

    t49 = ((x237+x238)==(x239/x240));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x241 = INT8_MAX;
	volatile int32_t x242 = -1;
	static int32_t x243 = -1;
	static int16_t x244 = INT16_MIN;
	int32_t t50 = 69974;

    t50 = ((x241+x242)==(x243/x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x249 = 1U;
	int16_t x250 = -1;
	volatile int32_t t51 = 218978;

    t51 = ((x249+x250)==(x251/x252));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x253 = UINT16_MAX;
	static volatile uint16_t x254 = 108U;
	int16_t x255 = INT16_MIN;
	volatile int32_t t52 = -428;

    t52 = ((x253+x254)==(x255/x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = -3;
	int32_t t53 = -33374784;

    t53 = ((x257+x258)==(x259/x260));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x262 = 8483500300476945LLU;
	int8_t x263 = -1;
	static uint32_t x264 = UINT32_MAX;
	int32_t t54 = -248837616;

    t54 = ((x261+x262)==(x263/x264));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MIN;
	int8_t x268 = INT8_MIN;
	volatile int32_t t55 = 1653;

    t55 = ((x265+x266)==(x267/x268));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int64_t x272 = -1LL;
	volatile int32_t t56 = -1939690;

    t56 = ((x269+x270)==(x271/x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x273 = INT16_MAX;
	uint32_t x274 = 123961U;
	uint8_t x276 = UINT8_MAX;
	static volatile int32_t t57 = -453845;

    t57 = ((x273+x274)==(x275/x276));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x278 = -1;
	int64_t x279 = INT64_MIN;
	static int8_t x280 = INT8_MIN;
	static volatile int32_t t58 = 53254;

    t58 = ((x277+x278)==(x279/x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x281 = 494;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MAX;
	volatile int32_t t59 = 4005;

    t59 = ((x281+x282)==(x283/x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x286 = 275U;
	int8_t x287 = -1;
	int32_t t60 = 372;

    t60 = ((x285+x286)==(x287/x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint64_t x289 = UINT64_MAX;
	int16_t x291 = 5;
	volatile int32_t t61 = 17761;

    t61 = ((x289+x290)==(x291/x292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x293 = -36124836244853LL;
	static volatile uint32_t x294 = 39699293U;
	volatile int8_t x295 = INT8_MIN;
	volatile int32_t t62 = 3379;

    t62 = ((x293+x294)==(x295/x296));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x297 = -6;
	int8_t x299 = INT8_MIN;
	volatile uint32_t x300 = 1123U;
	int32_t t63 = 3;

    t63 = ((x297+x298)==(x299/x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x301 = 0;
	int64_t x303 = INT64_MIN;
	int64_t x304 = 568583411448287805LL;
	volatile int32_t t64 = -54810;

    t64 = ((x301+x302)==(x303/x304));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 41U;
	volatile int32_t t65 = -182;

    t65 = ((x305+x306)==(x307/x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x309 = 3U;
	int32_t x310 = -1;
	static uint32_t x311 = 55920058U;
	uint64_t x312 = 5LLU;

    t66 = ((x309+x310)==(x311/x312));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x313 = 22LLU;
	static int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;
	volatile int16_t x316 = INT16_MIN;
	static volatile int32_t t67 = 973248;

    t67 = ((x313+x314)==(x315/x316));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x318 = 1;
	volatile int8_t x319 = -1;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t68 = 404848;

    t68 = ((x317+x318)==(x319/x320));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x321 = -1;
	int64_t x322 = -25573568412025LL;
	uint16_t x323 = 2U;
	static int32_t t69 = -15;

    t69 = ((x321+x322)==(x323/x324));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x334 = -1;
	int16_t x335 = -1;
	volatile int64_t x336 = INT64_MIN;
	int32_t t70 = -191207130;

    t70 = ((x333+x334)==(x335/x336));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x337 = 27U;
	int16_t x338 = INT16_MAX;
	int32_t t71 = 5234;

    t71 = ((x337+x338)==(x339/x340));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x342 = 654U;
	int8_t x343 = -1;
	volatile uint16_t x344 = 4U;
	volatile int32_t t72 = 1;

    t72 = ((x341+x342)==(x343/x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x345 = INT64_MIN;
	int32_t x347 = 335;
	int32_t x348 = -39873801;

    t73 = ((x345+x346)==(x347/x348));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x349 = -1LL;
	volatile uint32_t x350 = 86U;
	int64_t x351 = INT64_MIN;
	uint16_t x352 = 6673U;
	static volatile int32_t t74 = 0;

    t74 = ((x349+x350)==(x351/x352));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x353 = -8;
	volatile uint16_t x354 = 28U;
	int8_t x355 = INT8_MAX;

    t75 = ((x353+x354)==(x355/x356));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x361 = INT16_MAX;
	uint32_t x362 = UINT32_MAX;
	volatile int16_t x363 = INT16_MIN;
	volatile uint8_t x364 = 59U;
	int32_t t76 = -23;

    t76 = ((x361+x362)==(x363/x364));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x365 = -124429;

    t77 = ((x365+x366)==(x367/x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x369 = -1;
	static int64_t x370 = -307222LL;
	static volatile uint32_t x371 = 273731U;
	volatile int32_t t78 = 5;

    t78 = ((x369+x370)==(x371/x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	int64_t x375 = -1LL;
	int8_t x376 = 2;
	static int32_t t79 = 14922351;

    t79 = ((x373+x374)==(x375/x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x377 = 7U;
	static int16_t x378 = -1;
	int16_t x379 = INT16_MAX;
	int64_t x380 = 8975LL;

    t80 = ((x377+x378)==(x379/x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x381 = INT8_MIN;
	volatile int8_t x382 = INT8_MAX;
	uint16_t x384 = UINT16_MAX;

    t81 = ((x381+x382)==(x383/x384));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x386 = -3;
	uint16_t x387 = UINT16_MAX;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t82 = -498633840;

    t82 = ((x385+x386)==(x387/x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x389 = 1950U;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t83 = 3661938;

    t83 = ((x389+x390)==(x391/x392));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x393 = UINT32_MAX;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	static volatile uint16_t x396 = 82U;

    t84 = ((x393+x394)==(x395/x396));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x397 = INT16_MAX;
	static int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MAX;
	volatile int8_t x400 = INT8_MAX;
	int32_t t85 = 0;

    t85 = ((x397+x398)==(x399/x400));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x401 = 13U;
	int8_t x402 = -1;
	uint64_t x404 = UINT64_MAX;
	int32_t t86 = -5786209;

    t86 = ((x401+x402)==(x403/x404));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x405 = 1875459103253182938LLU;
	int64_t x406 = -1167391LL;
	int32_t x407 = INT32_MAX;
	uint8_t x408 = UINT8_MAX;
	int32_t t87 = 3389124;

    t87 = ((x405+x406)==(x407/x408));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x409 = -1LL;
	int64_t x410 = -1LL;
	int8_t x411 = -1;
	uint16_t x412 = 6U;
	int32_t t88 = 489420;

    t88 = ((x409+x410)==(x411/x412));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x413 = INT8_MAX;
	static int32_t x414 = INT32_MIN;
	int64_t x416 = INT64_MIN;
	static volatile int32_t t89 = 371504;

    t89 = ((x413+x414)==(x415/x416));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x417 = -1LL;
	static volatile int8_t x418 = INT8_MIN;
	int32_t x420 = INT32_MIN;
	static int32_t t90 = -219;

    t90 = ((x417+x418)==(x419/x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x422 = -902LL;
	int16_t x424 = 321;
	volatile int32_t t91 = -3938;

    t91 = ((x421+x422)==(x423/x424));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x425 = -1;
	int64_t x426 = -1LL;
	static uint64_t x427 = UINT64_MAX;
	int16_t x428 = INT16_MIN;
	volatile int32_t t92 = -3108982;

    t92 = ((x425+x426)==(x427/x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x433 = -7592;
	uint32_t x434 = 11780U;
	int8_t x435 = 3;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t93 = 12;

    t93 = ((x433+x434)==(x435/x436));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x441 = -1;
	uint16_t x442 = 885U;
	int64_t x444 = INT64_MIN;

    t94 = ((x441+x442)==(x443/x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x445 = 0U;
	volatile int8_t x446 = INT8_MIN;
	uint8_t x447 = 1U;
	int32_t t95 = 69;

    t95 = ((x445+x446)==(x447/x448));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = 15036678LL;
	uint32_t x450 = UINT32_MAX;
	int16_t x451 = 0;
	static int64_t x452 = INT64_MIN;

    t96 = ((x449+x450)==(x451/x452));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x453 = 144U;
	volatile int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	int16_t x456 = INT16_MIN;
	int32_t t97 = 1731;

    t97 = ((x453+x454)==(x455/x456));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x458 = INT8_MIN;
	uint8_t x459 = 14U;
	volatile int16_t x460 = -1;

    t98 = ((x457+x458)==(x459/x460));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x461 = INT32_MIN;
	int64_t x462 = INT64_MAX;
	static int8_t x463 = INT8_MIN;
	int8_t x464 = 25;
	volatile int32_t t99 = -926;

    t99 = ((x461+x462)==(x463/x464));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x465 = 5292362U;
	int16_t x466 = INT16_MAX;
	static int16_t x467 = INT16_MAX;
	int32_t t100 = -1290;

    t100 = ((x465+x466)==(x467/x468));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x470 = 4U;
	int8_t x471 = INT8_MIN;
	uint64_t x472 = 435542374LLU;
	volatile int32_t t101 = 69517036;

    t101 = ((x469+x470)==(x471/x472));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x481 = 90034402LLU;
	volatile uint32_t x482 = UINT32_MAX;
	static int8_t x483 = INT8_MIN;
	int16_t x484 = INT16_MIN;
	int32_t t102 = 111762;

    t102 = ((x481+x482)==(x483/x484));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x485 = -1;
	uint32_t x486 = 2U;
	int16_t x487 = INT16_MIN;
	volatile int32_t t103 = 723133;

    t103 = ((x485+x486)==(x487/x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x489 = UINT8_MAX;
	uint32_t x491 = 0U;
	int32_t t104 = 183;

    t104 = ((x489+x490)==(x491/x492));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x501 = 0U;
	uint8_t x502 = 35U;
	volatile uint16_t x503 = 0U;
	volatile int32_t t105 = 208903874;

    t105 = ((x501+x502)==(x503/x504));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x514 = 297U;
	int32_t t106 = -56;

    t106 = ((x513+x514)==(x515/x516));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x517 = 3U;
	uint64_t x518 = 286502486555836226LLU;
	int16_t x520 = INT16_MIN;

    t107 = ((x517+x518)==(x519/x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x522 = 32U;
	uint16_t x523 = 5U;
	static int64_t x524 = -199651832836LL;
	volatile int32_t t108 = -17;

    t108 = ((x521+x522)==(x523/x524));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x525 = 82U;
	uint16_t x526 = UINT16_MAX;
	static uint16_t x527 = 6U;
	uint16_t x528 = 11U;
	volatile int32_t t109 = -660691;

    t109 = ((x525+x526)==(x527/x528));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x529 = -1;
	int16_t x531 = INT16_MIN;
	volatile int32_t t110 = 12769448;

    t110 = ((x529+x530)==(x531/x532));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x533 = 30U;
	int8_t x534 = 7;
	uint32_t x535 = 2982U;
	volatile int32_t t111 = -4610;

    t111 = ((x533+x534)==(x535/x536));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x537 = 157289U;
	static uint16_t x538 = UINT16_MAX;
	uint8_t x539 = 126U;
	uint32_t x540 = 349718U;

    t112 = ((x537+x538)==(x539/x540));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x541 = UINT64_MAX;
	static int64_t x542 = -5246360331870181LL;
	int16_t x543 = INT16_MIN;
	int16_t x544 = INT16_MIN;

    t113 = ((x541+x542)==(x543/x544));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x545 = INT64_MIN;
	uint32_t x546 = 450498477U;
	uint32_t x548 = 10366U;
	int32_t t114 = -3023306;

    t114 = ((x545+x546)==(x547/x548));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x553 = INT64_MAX;
	static int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MAX;
	volatile int16_t x556 = INT16_MAX;
	int32_t t115 = -125;

    t115 = ((x553+x554)==(x555/x556));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x558 = 1;
	int32_t x559 = 3861268;
	int16_t x560 = -1;
	int32_t t116 = 452772512;

    t116 = ((x557+x558)==(x559/x560));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x561 = INT16_MIN;
	static int8_t x562 = INT8_MIN;
	static int8_t x563 = -1;
	static volatile int32_t t117 = -491039298;

    t117 = ((x561+x562)==(x563/x564));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x565 = INT16_MIN;
	volatile int16_t x566 = -1;
	uint64_t x567 = 2748691601342282287LLU;
	static volatile uint64_t x568 = UINT64_MAX;
	volatile int32_t t118 = -75;

    t118 = ((x565+x566)==(x567/x568));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x569 = 0;
	static uint32_t x572 = UINT32_MAX;
	int32_t t119 = 11747276;

    t119 = ((x569+x570)==(x571/x572));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x573 = INT8_MIN;
	volatile uint64_t x574 = 2575LLU;
	int32_t x576 = -1455;
	int32_t t120 = -1;

    t120 = ((x573+x574)==(x575/x576));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x578 = INT8_MAX;
	int32_t x580 = -2801122;
	volatile int32_t t121 = -872204;

    t121 = ((x577+x578)==(x579/x580));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x581 = 0;
	static uint16_t x582 = 225U;
	static uint64_t x584 = 12213494020676184LLU;

    t122 = ((x581+x582)==(x583/x584));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x585 = -1;
	int16_t x587 = 14;
	uint32_t x588 = 92279650U;
	static volatile int32_t t123 = -118496;

    t123 = ((x585+x586)==(x587/x588));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x591 = 6742LLU;
	static int32_t x592 = INT32_MIN;
	int32_t t124 = 5371278;

    t124 = ((x589+x590)==(x591/x592));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = 187503737;
	int32_t x595 = INT32_MAX;
	int64_t x596 = INT64_MIN;
	int32_t t125 = 154344563;

    t125 = ((x593+x594)==(x595/x596));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x597 = 3U;
	volatile int32_t x598 = 23444594;
	volatile int8_t x600 = INT8_MAX;
	volatile int32_t t126 = 7689119;

    t126 = ((x597+x598)==(x599/x600));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x601 = 2102838543963LLU;
	int32_t x603 = INT32_MIN;
	static int64_t x604 = 6417538851179LL;
	volatile int32_t t127 = 3575;

    t127 = ((x601+x602)==(x603/x604));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x605 = 2116U;
	volatile int64_t x606 = -1LL;
	static volatile uint32_t x607 = 27096U;
	int8_t x608 = -1;
	volatile int32_t t128 = -54541;

    t128 = ((x605+x606)==(x607/x608));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x611 = 0U;
	int16_t x612 = -1;
	volatile int32_t t129 = -208;

    t129 = ((x609+x610)==(x611/x612));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x613 = INT64_MAX;
	volatile int16_t x615 = INT16_MAX;
	static int64_t x616 = INT64_MIN;
	int32_t t130 = -2;

    t130 = ((x613+x614)==(x615/x616));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x617 = 7994LLU;
	static int16_t x618 = INT16_MIN;
	int16_t x619 = INT16_MAX;

    t131 = ((x617+x618)==(x619/x620));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x621 = 1491913273LLU;
	volatile int64_t x622 = -1LL;
	int64_t x624 = INT64_MAX;
	int32_t t132 = -1;

    t132 = ((x621+x622)==(x623/x624));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x625 = UINT32_MAX;
	uint32_t x626 = 113U;
	int64_t x627 = INT64_MAX;
	static int32_t x628 = -3280;
	int32_t t133 = 818440753;

    t133 = ((x625+x626)==(x627/x628));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x629 = -1;
	uint64_t x630 = UINT64_MAX;
	int8_t x631 = 2;
	int8_t x632 = -26;
	static int32_t t134 = 918015933;

    t134 = ((x629+x630)==(x631/x632));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x634 = -1LL;
	static int64_t x635 = INT64_MAX;
	int32_t x636 = INT32_MAX;
	volatile int32_t t135 = 660499;

    t135 = ((x633+x634)==(x635/x636));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x641 = -1;
	uint64_t x642 = 9047348224LLU;
	uint64_t x644 = 7636172976LLU;

    t136 = ((x641+x642)==(x643/x644));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x645 = INT8_MAX;
	volatile uint64_t x646 = 4495342403916436574LLU;
	volatile int8_t x647 = 49;
	volatile int32_t t137 = 7406648;

    t137 = ((x645+x646)==(x647/x648));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x649 = INT8_MIN;
	int32_t x650 = 58583820;
	int32_t x651 = 51465751;
	volatile int32_t t138 = 39024249;

    t138 = ((x649+x650)==(x651/x652));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x658 = 189U;
	uint32_t x659 = UINT32_MAX;

    t139 = ((x657+x658)==(x659/x660));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x661 = -1;
	uint32_t x662 = 12558574U;
	int16_t x663 = INT16_MIN;
	static volatile int64_t x664 = -1LL;
	int32_t t140 = -192;

    t140 = ((x661+x662)==(x663/x664));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x665 = INT16_MAX;
	static uint16_t x666 = UINT16_MAX;
	int32_t x667 = INT32_MAX;
	int32_t x668 = -1483674;
	static int32_t t141 = 1441;

    t141 = ((x665+x666)==(x667/x668));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x673 = 33516394471842LL;
	volatile uint8_t x674 = 5U;
	volatile int16_t x675 = INT16_MIN;
	static int64_t x676 = INT64_MIN;
	volatile int32_t t142 = 36;

    t142 = ((x673+x674)==(x675/x676));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x680 = 1742280U;

    t143 = ((x677+x678)==(x679/x680));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MAX;
	volatile uint64_t x683 = 394640994LLU;
	uint8_t x684 = 41U;
	int32_t t144 = 122497;

    t144 = ((x681+x682)==(x683/x684));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x685 = 1;
	volatile int16_t x686 = -1;
	static int64_t x687 = INT64_MIN;
	int64_t x688 = INT64_MIN;
	volatile int32_t t145 = 12912;

    t145 = ((x685+x686)==(x687/x688));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x690 = INT16_MIN;
	int32_t t146 = -3050717;

    t146 = ((x689+x690)==(x691/x692));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x693 = 43524525180750535LLU;
	int64_t x696 = INT64_MAX;
	static int32_t t147 = -7;

    t147 = ((x693+x694)==(x695/x696));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x698 = INT16_MIN;
	int16_t x700 = -1;
	int32_t t148 = 143096;

    t148 = ((x697+x698)==(x699/x700));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x703 = INT32_MIN;
	int32_t t149 = -5835;

    t149 = ((x701+x702)==(x703/x704));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x705 = INT16_MIN;
	int64_t x706 = -1LL;
	int16_t x707 = INT16_MIN;
	int32_t x708 = -5534943;
	int32_t t150 = 1;

    t150 = ((x705+x706)==(x707/x708));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x709 = -4;
	volatile uint32_t x710 = 293076U;
	static uint16_t x711 = 3U;
	int16_t x712 = 4879;
	int32_t t151 = 14;

    t151 = ((x709+x710)==(x711/x712));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x714 = -337572;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t152 = -59;

    t152 = ((x713+x714)==(x715/x716));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x717 = -1;
	static int16_t x718 = INT16_MIN;
	uint32_t x719 = 3888U;
	volatile int32_t t153 = 6532;

    t153 = ((x717+x718)==(x719/x720));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x722 = 3U;
	volatile int64_t x723 = INT64_MAX;
	volatile int32_t t154 = -9841;

    t154 = ((x721+x722)==(x723/x724));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x725 = 28U;
	volatile int16_t x726 = -11;
	int8_t x727 = INT8_MIN;
	static uint16_t x728 = 90U;
	volatile int32_t t155 = -10152;

    t155 = ((x725+x726)==(x727/x728));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x729 = 4;
	volatile int16_t x730 = 1;
	static int64_t x731 = INT64_MAX;
	volatile int32_t t156 = -751155;

    t156 = ((x729+x730)==(x731/x732));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x733 = UINT32_MAX;
	int64_t x734 = -1LL;
	static uint16_t x735 = 178U;
	int32_t t157 = -18097;

    t157 = ((x733+x734)==(x735/x736));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x737 = 612;
	uint32_t x738 = 7574U;
	int32_t t158 = -1;

    t158 = ((x737+x738)==(x739/x740));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x746 = UINT32_MAX;
	int8_t x747 = 0;
	volatile int32_t x748 = 27;

    t159 = ((x745+x746)==(x747/x748));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x754 = 42;
	int32_t x755 = -1;
	int16_t x756 = INT16_MAX;
	int32_t t160 = -1;

    t160 = ((x753+x754)==(x755/x756));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x757 = INT64_MIN;
	static volatile int16_t x758 = 72;
	int64_t x760 = INT64_MIN;
	int32_t t161 = -863;

    t161 = ((x757+x758)==(x759/x760));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x761 = 12LL;
	volatile int64_t x762 = -1LL;
	int16_t x763 = 256;
	int32_t x764 = -87748;

    t162 = ((x761+x762)==(x763/x764));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x765 = INT16_MIN;
	uint16_t x767 = UINT16_MAX;
	int32_t t163 = 44840916;

    t163 = ((x765+x766)==(x767/x768));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x769 = 81U;
	static uint32_t x770 = 309704526U;
	static volatile uint8_t x771 = 6U;
	static uint64_t x772 = 1927768248708LLU;
	static int32_t t164 = -42577;

    t164 = ((x769+x770)==(x771/x772));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x773 = 11;
	uint32_t x774 = UINT32_MAX;
	int8_t x776 = INT8_MIN;
	volatile int32_t t165 = 1;

    t165 = ((x773+x774)==(x775/x776));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x778 = INT16_MIN;
	int32_t x779 = INT32_MAX;
	int64_t x780 = INT64_MIN;
	volatile int32_t t166 = -32;

    t166 = ((x777+x778)==(x779/x780));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x781 = 3816042U;
	volatile int32_t x782 = -20571;
	uint64_t x783 = 6456LLU;
	static volatile int8_t x784 = INT8_MIN;
	volatile int32_t t167 = -27793037;

    t167 = ((x781+x782)==(x783/x784));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x789 = 64814581377LLU;
	volatile int8_t x792 = INT8_MIN;
	volatile int32_t t168 = 22764;

    t168 = ((x789+x790)==(x791/x792));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x793 = 713U;
	int32_t x794 = INT32_MIN;
	volatile int8_t x795 = 0;
	uint64_t x796 = 1423935LLU;
	volatile int32_t t169 = -10884819;

    t169 = ((x793+x794)==(x795/x796));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	int8_t x798 = 27;
	uint32_t x799 = 13U;
	uint32_t x800 = 230048U;
	static int32_t t170 = -5924197;

    t170 = ((x797+x798)==(x799/x800));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x801 = 11305018931317459LLU;
	static int8_t x802 = INT8_MIN;
	uint8_t x803 = 0U;
	uint64_t x804 = 523754155509666531LLU;
	volatile int32_t t171 = -49;

    t171 = ((x801+x802)==(x803/x804));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x805 = -2167;
	int64_t x807 = INT64_MIN;
	int8_t x808 = INT8_MIN;
	int32_t t172 = -41;

    t172 = ((x805+x806)==(x807/x808));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x810 = INT16_MIN;
	int16_t x811 = -28;
	uint16_t x812 = 128U;
	int32_t t173 = -77;

    t173 = ((x809+x810)==(x811/x812));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x813 = 459524875033LLU;
	int16_t x814 = -1;
	int16_t x815 = INT16_MIN;
	int16_t x816 = INT16_MAX;
	volatile int32_t t174 = 863953104;

    t174 = ((x813+x814)==(x815/x816));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x817 = 14U;
	int32_t x819 = -124;
	uint64_t x820 = UINT64_MAX;
	int32_t t175 = 1;

    t175 = ((x817+x818)==(x819/x820));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x821 = INT16_MIN;
	uint8_t x822 = 0U;
	int64_t x823 = 2124097LL;
	int32_t t176 = 1;

    t176 = ((x821+x822)==(x823/x824));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x825 = -14;
	static int64_t x826 = -1LL;
	int16_t x827 = 234;
	int32_t t177 = 1220656;

    t177 = ((x825+x826)==(x827/x828));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x829 = 69U;
	int64_t x830 = -1LL;
	static volatile int8_t x831 = INT8_MAX;
	volatile int32_t x832 = 2252;

    t178 = ((x829+x830)==(x831/x832));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x833 = INT64_MIN;
	volatile uint16_t x835 = 4009U;
	int32_t x836 = INT32_MAX;
	volatile int32_t t179 = 145028965;

    t179 = ((x833+x834)==(x835/x836));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x837 = 6;
	uint64_t x838 = 461356353LLU;
	int64_t x840 = 18441250102LL;

    t180 = ((x837+x838)==(x839/x840));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x841 = 23000U;
	static uint32_t x843 = 113139939U;
	volatile int64_t x844 = -53474666LL;

    t181 = ((x841+x842)==(x843/x844));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x845 = INT32_MAX;
	volatile int16_t x846 = -96;
	uint16_t x847 = 7798U;
	volatile int8_t x848 = 3;

    t182 = ((x845+x846)==(x847/x848));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x853 = INT64_MIN;
	volatile uint16_t x854 = 0U;
	volatile int16_t x855 = -404;
	static volatile int32_t t183 = 41887781;

    t183 = ((x853+x854)==(x855/x856));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x857 = 17;
	uint64_t x858 = 112921604LLU;
	int8_t x859 = -1;

    t184 = ((x857+x858)==(x859/x860));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x862 = UINT32_MAX;
	volatile int64_t x864 = -19637LL;

    t185 = ((x861+x862)==(x863/x864));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x865 = INT64_MAX;
	int32_t x866 = -1;
	static int32_t x867 = INT32_MAX;
	static int16_t x868 = INT16_MIN;
	volatile int32_t t186 = 64365;

    t186 = ((x865+x866)==(x867/x868));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x873 = INT8_MIN;
	static int32_t x874 = -1;
	static uint64_t x875 = 121028591790LLU;
	volatile int32_t t187 = 33;

    t187 = ((x873+x874)==(x875/x876));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x877 = 940U;
	volatile int8_t x878 = INT8_MIN;
	int64_t x879 = -1LL;

    t188 = ((x877+x878)==(x879/x880));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x881 = 31892952346083196LLU;
	int32_t x884 = INT32_MIN;
	volatile int32_t t189 = -5954444;

    t189 = ((x881+x882)==(x883/x884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x885 = 0U;
	int64_t x886 = INT64_MIN;
	uint32_t x888 = 707163U;

    t190 = ((x885+x886)==(x887/x888));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x889 = 2U;
	uint32_t x890 = UINT32_MAX;
	uint16_t x891 = 144U;
	volatile int16_t x892 = INT16_MIN;
	volatile int32_t t191 = -1;

    t191 = ((x889+x890)==(x891/x892));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x893 = INT16_MAX;
	uint32_t x896 = UINT32_MAX;

    t192 = ((x893+x894)==(x895/x896));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x897 = INT32_MIN;
	static uint8_t x899 = 2U;
	static int16_t x900 = INT16_MIN;
	volatile int32_t t193 = 3;

    t193 = ((x897+x898)==(x899/x900));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x901 = -1427345;
	int16_t x902 = -11;
	static volatile int64_t x903 = -1LL;
	int32_t t194 = -145;

    t194 = ((x901+x902)==(x903/x904));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x906 = -276LL;
	volatile int64_t x907 = -1LL;
	volatile uint16_t x908 = UINT16_MAX;
	volatile int32_t t195 = 1;

    t195 = ((x905+x906)==(x907/x908));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = INT8_MIN;
	int16_t x910 = INT16_MIN;
	static uint64_t x911 = 5LLU;
	volatile int64_t x912 = -525633680630856391LL;
	static volatile int32_t t196 = -39388;

    t196 = ((x909+x910)==(x911/x912));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x914 = 5918575162197LL;
	static uint32_t x915 = 79U;
	uint64_t x916 = 1016153LLU;
	int32_t t197 = -488;

    t197 = ((x913+x914)==(x915/x916));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x918 = 1564U;
	int64_t x919 = -1LL;
	int8_t x920 = INT8_MAX;
	volatile int32_t t198 = 345648;

    t198 = ((x917+x918)==(x919/x920));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x921 = INT32_MAX;
	uint8_t x923 = 0U;
	static int32_t t199 = 370;

    t199 = ((x921+x922)==(x923/x924));

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

