
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

int16_t x1 = -15;
int32_t t0 = 1;
int16_t x10 = INT16_MIN;
int16_t x11 = -454;
static int64_t x17 = -1LL;
static uint32_t x26 = UINT32_MAX;
int16_t x27 = 490;
int64_t x28 = 465606821543LL;
uint16_t x40 = UINT16_MAX;
int16_t x45 = INT16_MIN;
int32_t t9 = -44833;
static uint16_t x54 = 3U;
static int16_t x58 = INT16_MIN;
volatile int32_t t11 = 1;
uint64_t x62 = 1357288109850859LLU;
int32_t x63 = INT32_MIN;
volatile uint64_t x68 = 1267LLU;
static int16_t x82 = INT16_MIN;
static int64_t x89 = -1047495893994808LL;
uint32_t x92 = 138181U;
int16_t x98 = -7;
int32_t t20 = -84131009;
static uint32_t x107 = UINT32_MAX;
static uint8_t x118 = UINT8_MAX;
int32_t x119 = -2859;
uint64_t x123 = 25LLU;
static volatile int32_t t25 = -1557;
int16_t x127 = 207;
volatile uint8_t x128 = 33U;
uint64_t x130 = UINT64_MAX;
volatile int16_t x131 = -489;
volatile uint64_t x132 = UINT64_MAX;
volatile int64_t x144 = 0LL;
int16_t x149 = -252;
int32_t x163 = INT32_MAX;
volatile int32_t t35 = -859676;
uint32_t x170 = 1438584734U;
volatile int16_t x172 = -1;
volatile uint64_t x176 = 497293757665LLU;
int16_t x180 = 5;
volatile uint16_t x190 = 71U;
static int64_t x197 = 2665814947775LL;
int16_t x204 = INT16_MIN;
int64_t x209 = -1LL;
int64_t x211 = INT64_MAX;
static volatile int32_t t44 = -34;
static int16_t x220 = -258;
volatile int32_t t47 = -171;
int64_t x235 = INT64_MAX;
static volatile uint8_t x237 = UINT8_MAX;
static volatile int32_t t51 = -253604;
int8_t x241 = -1;
int32_t t52 = 612555062;
static uint16_t x246 = UINT16_MAX;
int16_t x261 = 947;
int16_t x264 = -1;
volatile int8_t x289 = INT8_MIN;
static uint16_t x294 = UINT16_MAX;
int8_t x296 = INT8_MIN;
int16_t x300 = INT16_MAX;
int8_t x316 = INT8_MIN;
int32_t x327 = -1;
volatile int32_t t70 = -3422809;
uint32_t x333 = 5306982U;
volatile uint16_t x352 = UINT16_MAX;
int16_t x358 = INT16_MIN;
static int8_t x362 = -1;
int32_t t76 = 418111545;
static uint64_t x368 = UINT64_MAX;
static int32_t x371 = -1;
volatile uint64_t x372 = UINT64_MAX;
static uint64_t x373 = UINT64_MAX;
uint32_t x377 = UINT32_MAX;
int64_t x383 = -13112049022LL;
static int32_t t81 = -26508081;
static uint16_t x386 = 1643U;
static uint64_t x387 = 53555LLU;
int32_t t83 = 18983;
uint64_t x397 = UINT64_MAX;
static volatile int32_t t84 = -136273563;
int32_t x402 = 4769;
static volatile int32_t t86 = -29363296;
int32_t x419 = -20;
uint8_t x426 = UINT8_MAX;
int16_t x429 = INT16_MAX;
int16_t x430 = -16041;
static uint64_t x432 = 4139643LLU;
int32_t t90 = 57065346;
int8_t x435 = -25;
volatile int64_t x439 = INT64_MIN;
volatile int32_t x445 = 89951;
static uint32_t x454 = 13267434U;
volatile int64_t x456 = -239LL;
volatile int32_t t95 = 7;
static volatile int16_t x466 = -1;
int32_t t97 = 1009;
int16_t x474 = INT16_MIN;
int32_t t99 = -444;
int32_t x482 = INT32_MAX;
uint16_t x483 = UINT16_MAX;
volatile int32_t t102 = 234;
int8_t x503 = INT8_MAX;
static int64_t x510 = INT64_MIN;
uint16_t x517 = 20006U;
uint8_t x520 = 49U;
int8_t x521 = -1;
int32_t x524 = INT32_MAX;
int16_t x525 = INT16_MAX;
static volatile int8_t x532 = -1;
int32_t x542 = -1;
int8_t x544 = INT8_MIN;
int16_t x545 = INT16_MIN;
int8_t x550 = -2;
int8_t x559 = INT8_MAX;
volatile int32_t t118 = 535112;
int32_t t119 = -210876;
static int64_t x571 = INT64_MAX;
uint32_t x573 = 1U;
uint64_t x574 = 1LLU;
uint64_t x579 = 8117844619LLU;
int64_t x580 = INT64_MIN;
static volatile int16_t x584 = INT16_MAX;
volatile int32_t t127 = 490845;
volatile int8_t x611 = -1;
static int16_t x612 = INT16_MIN;
uint64_t x617 = 2032LLU;
int32_t t129 = -1778348;
uint32_t x622 = 7789U;
uint32_t x629 = UINT32_MAX;
static int8_t x630 = -41;
int8_t x641 = INT8_MAX;
static volatile uint32_t x645 = 2976756U;
int8_t x648 = -9;
int8_t x657 = 1;
static volatile uint32_t x658 = UINT32_MAX;
int32_t t137 = 415164604;
static int32_t x662 = INT32_MIN;
uint8_t x663 = 52U;
volatile int32_t t138 = 7;
static uint16_t x665 = UINT16_MAX;
uint32_t x680 = UINT32_MAX;
uint32_t x683 = 67455U;
uint8_t x686 = 14U;
volatile int32_t t143 = -83;
static volatile int16_t x690 = INT16_MAX;
static uint8_t x693 = UINT8_MAX;
static volatile int16_t x702 = -1;
int8_t x708 = -1;
volatile int32_t t148 = -208708507;
static int16_t x722 = INT16_MIN;
volatile int32_t t163 = 21721970;
uint32_t x777 = UINT32_MAX;
volatile int16_t x778 = INT16_MIN;
int8_t x790 = INT8_MAX;
uint64_t x794 = 3972957230156776066LLU;
int32_t t167 = -9;
volatile int64_t x797 = INT64_MIN;
volatile uint16_t x801 = UINT16_MAX;
volatile uint64_t x804 = 5366865LLU;
int32_t t170 = 106204355;
static int64_t x812 = -1834LL;
static volatile uint32_t x820 = UINT32_MAX;
volatile int32_t t172 = 21;
uint64_t x824 = 3993534482234LLU;
static uint32_t x828 = 27U;
volatile int32_t t174 = 1;
static volatile int16_t x832 = -2393;
int8_t x835 = INT8_MIN;
static int32_t x840 = INT32_MIN;
int32_t x842 = 2210391;
volatile int64_t x843 = -1LL;
static int16_t x849 = INT16_MIN;
int64_t x855 = INT64_MIN;
int8_t x857 = INT8_MAX;
volatile int16_t x860 = -484;
uint8_t x862 = 2U;
uint8_t x865 = UINT8_MAX;
static int16_t x866 = -1;
uint8_t x868 = 22U;
int32_t x876 = INT32_MIN;
int16_t x886 = INT16_MIN;
volatile uint64_t x889 = 138449659139337952LLU;
volatile int32_t t189 = 13646;
static uint8_t x894 = 1U;
uint8_t x901 = UINT8_MAX;
static int16_t x904 = INT16_MAX;
int32_t t194 = -1341;
int8_t x918 = INT8_MIN;
int64_t x921 = -400465835LL;
uint8_t x923 = UINT8_MAX;
int16_t x936 = -1;
int32_t x938 = 105;
int32_t x940 = -1;
volatile int32_t t199 = 1452599;


void f0(void) {
    	uint8_t x2 = 4U;
	volatile int16_t x3 = 0;
	int16_t x4 = INT16_MAX;

    t0 = ((x1-x2)==(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint8_t x6 = 1U;
	int32_t x7 = INT32_MIN;
	volatile uint16_t x8 = 6875U;
	volatile int32_t t1 = 14;

    t1 = ((x5-x6)==(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 84;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -1;

    t2 = ((x9-x10)==(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 66;
	uint8_t x14 = 0U;
	static uint32_t x15 = 6367U;
	uint64_t x16 = 22120043094538660LLU;
	static volatile int32_t t3 = 41195;

    t3 = ((x13-x14)==(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -901075706453973LL;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = -1LL;
	volatile int32_t t4 = 0;

    t4 = ((x17-x18)==(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	int32_t t5 = 662272423;

    t5 = ((x25-x26)==(x27<=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = 2;
	uint32_t x38 = 84901U;
	int16_t x39 = INT16_MIN;
	int32_t t6 = 103657;

    t6 = ((x37-x38)==(x39<=x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -118565118;
	int64_t x42 = -1LL;
	volatile uint64_t x43 = 8396394719LLU;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t7 = 768892267;

    t7 = ((x41-x42)==(x43<=x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x46 = 0;
	volatile int16_t x47 = INT16_MIN;
	volatile uint32_t x48 = 6U;
	static volatile int32_t t8 = 1;

    t8 = ((x45-x46)==(x47<=x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = INT32_MIN;
	volatile int32_t x50 = -1;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MAX;

    t9 = ((x49-x50)==(x51<=x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 5816U;
	uint8_t x55 = 6U;
	int8_t x56 = INT8_MIN;
	int32_t t10 = -25273;

    t10 = ((x53-x54)==(x55<=x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = INT16_MIN;
	static volatile uint8_t x59 = 4U;
	volatile int8_t x60 = 1;

    t11 = ((x57-x58)==(x59<=x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = 2488U;
	int8_t x64 = INT8_MIN;
	int32_t t12 = 415;

    t12 = ((x61-x62)==(x63<=x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x65 = UINT16_MAX;
	int32_t x66 = 924405794;
	static volatile int64_t x67 = 15703636006157LL;
	int32_t t13 = 25;

    t13 = ((x65-x66)==(x67<=x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = 1U;
	static uint16_t x70 = 49U;
	static uint64_t x71 = UINT64_MAX;
	static int8_t x72 = -3;
	volatile int32_t t14 = 33916;

    t14 = ((x69-x70)==(x71<=x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x73 = UINT16_MAX;
	volatile uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = 10903;
	int32_t t15 = 1537644;

    t15 = ((x73-x74)==(x75<=x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x77 = 63;
	volatile uint32_t x78 = 1362284U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t16 = -63;

    t16 = ((x77-x78)==(x79<=x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x81 = 30043377;
	static int8_t x83 = INT8_MIN;
	static int16_t x84 = -7818;
	static volatile int32_t t17 = -324962;

    t17 = ((x81-x82)==(x83<=x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x90 = INT8_MAX;
	volatile uint16_t x91 = 28U;
	volatile int32_t t18 = 114475737;

    t18 = ((x89-x90)==(x91<=x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	int32_t x96 = 61495;
	volatile int32_t t19 = -640825345;

    t19 = ((x93-x94)==(x95<=x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x97 = 13U;
	int8_t x99 = -1;
	int16_t x100 = -1;

    t20 = ((x97-x98)==(x99<=x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MAX;
	volatile uint32_t x102 = 182262U;
	int32_t x103 = -148110148;
	volatile uint8_t x104 = 29U;
	volatile int32_t t21 = -1;

    t21 = ((x101-x102)==(x103<=x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	volatile int16_t x108 = INT16_MIN;
	int32_t t22 = -151401213;

    t22 = ((x105-x106)==(x107<=x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = 1909482142130704LL;
	static uint8_t x110 = 7U;
	uint64_t x111 = 108LLU;
	int16_t x112 = INT16_MIN;
	static int32_t t23 = -1;

    t23 = ((x109-x110)==(x111<=x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = 4;
	int64_t x120 = 1LL;
	static volatile int32_t t24 = 4;

    t24 = ((x117-x118)==(x119<=x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x121 = UINT16_MAX;
	static uint64_t x122 = 434044086LLU;
	uint64_t x124 = UINT64_MAX;

    t25 = ((x121-x122)==(x123<=x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x125 = 120101984LLU;
	static volatile int32_t x126 = -1;
	volatile int32_t t26 = -1024;

    t26 = ((x125-x126)==(x127<=x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x129 = 199644;
	volatile int32_t t27 = -1;

    t27 = ((x129-x130)==(x131<=x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x133 = UINT16_MAX;
	int32_t x134 = 202;
	int32_t x135 = INT32_MIN;
	int8_t x136 = -14;
	static volatile int32_t t28 = -3;

    t28 = ((x133-x134)==(x135<=x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x137 = -1;
	int16_t x138 = INT16_MAX;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = -1;
	int32_t t29 = -2041907;

    t29 = ((x137-x138)==(x139<=x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = 199LLU;
	int16_t x142 = -1;
	volatile int8_t x143 = -7;
	volatile int32_t t30 = -1602;

    t30 = ((x141-x142)==(x143<=x144));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 242808703445LLU;
	uint32_t x146 = 74623U;
	int8_t x147 = 0;
	int32_t x148 = INT32_MIN;
	volatile int32_t t31 = 2552220;

    t31 = ((x145-x146)==(x147<=x148));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x150 = 1086291729050562750LLU;
	uint32_t x151 = UINT32_MAX;
	volatile int32_t x152 = INT32_MIN;
	static int32_t t32 = 96;

    t32 = ((x149-x150)==(x151<=x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = -1;
	static volatile int8_t x158 = INT8_MIN;
	int8_t x159 = 1;
	uint32_t x160 = UINT32_MAX;
	static int32_t t33 = 1014402;

    t33 = ((x157-x158)==(x159<=x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x161 = INT8_MIN;
	static volatile uint8_t x162 = 1U;
	int32_t x164 = INT32_MIN;
	int32_t t34 = 8137;

    t34 = ((x161-x162)==(x163<=x164));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = -1;
	int64_t x166 = 135127557103339LL;
	static int16_t x167 = -1;
	static uint32_t x168 = 1U;

    t35 = ((x165-x166)==(x167<=x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x169 = 0U;
	int32_t x171 = -12322;
	volatile int32_t t36 = -30089584;

    t36 = ((x169-x170)==(x171<=x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x173 = 5U;
	uint64_t x174 = 1307LLU;
	int16_t x175 = 12864;
	volatile int32_t t37 = 108626;

    t37 = ((x173-x174)==(x175<=x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = INT16_MIN;
	int64_t x178 = 250LL;
	static volatile int64_t x179 = -1LL;
	volatile int32_t t38 = -120579;

    t38 = ((x177-x178)==(x179<=x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x181 = 5U;
	volatile int8_t x182 = 0;
	int16_t x183 = 245;
	uint64_t x184 = 241870LLU;
	volatile int32_t t39 = 13;

    t39 = ((x181-x182)==(x183<=x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x189 = INT8_MAX;
	int8_t x191 = -1;
	int64_t x192 = -4372835991LL;
	int32_t t40 = 134789;

    t40 = ((x189-x190)==(x191<=x192));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MAX;
	int32_t t41 = -1533693;

    t41 = ((x197-x198)==(x199<=x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x201 = INT8_MIN;
	int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	volatile int32_t t42 = -46;

    t42 = ((x201-x202)==(x203<=x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x205 = UINT64_MAX;
	int8_t x206 = 1;
	static uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MAX;
	static int32_t t43 = -446534;

    t43 = ((x205-x206)==(x207<=x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x210 = 10215;
	int8_t x212 = INT8_MIN;

    t44 = ((x209-x210)==(x211<=x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = 43;
	int8_t x214 = -1;
	volatile int8_t x215 = INT8_MIN;
	int64_t x216 = -1LL;
	int32_t t45 = -342;

    t45 = ((x213-x214)==(x215<=x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x217 = INT32_MIN;
	int64_t x218 = 148806886233189LL;
	int8_t x219 = 2;
	volatile int32_t t46 = 15507074;

    t46 = ((x217-x218)==(x219<=x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = 107;
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = -1;
	static uint32_t x224 = 24U;

    t47 = ((x221-x222)==(x223<=x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	int8_t x227 = -8;
	volatile int16_t x228 = -1260;
	volatile int32_t t48 = 55;

    t48 = ((x225-x226)==(x227<=x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x229 = 78297U;
	uint32_t x230 = UINT32_MAX;
	static int64_t x231 = -266660884308LL;
	int32_t x232 = INT32_MIN;
	int32_t t49 = 505178;

    t49 = ((x229-x230)==(x231<=x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 298LLU;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t50 = -251;

    t50 = ((x233-x234)==(x235<=x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x238 = UINT16_MAX;
	int8_t x239 = INT8_MAX;
	static volatile uint64_t x240 = 5LLU;

    t51 = ((x237-x238)==(x239<=x240));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x242 = UINT64_MAX;
	volatile uint8_t x243 = 10U;
	static int8_t x244 = -1;

    t52 = ((x241-x242)==(x243<=x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x245 = INT8_MIN;
	volatile int8_t x247 = INT8_MAX;
	int64_t x248 = -1LL;
	int32_t t53 = -21;

    t53 = ((x245-x246)==(x247<=x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x249 = 7U;
	static volatile int32_t x250 = INT32_MAX;
	int64_t x251 = -1LL;
	static int8_t x252 = -12;
	int32_t t54 = 112702;

    t54 = ((x249-x250)==(x251<=x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = -1LL;
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = 7U;
	uint32_t x260 = 149836U;
	int32_t t55 = -23156011;

    t55 = ((x257-x258)==(x259<=x260));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x262 = UINT16_MAX;
	volatile int64_t x263 = INT64_MIN;
	int32_t t56 = -1817;

    t56 = ((x261-x262)==(x263<=x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x265 = 101LLU;
	static int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	int16_t x268 = -7;
	int32_t t57 = -450590850;

    t57 = ((x265-x266)==(x267<=x268));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x273 = INT8_MIN;
	static volatile int16_t x274 = 1;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t58 = 8004330;

    t58 = ((x273-x274)==(x275<=x276));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x281 = -13;
	volatile uint16_t x282 = 17224U;
	static int64_t x283 = -1LL;
	uint8_t x284 = 15U;
	volatile int32_t t59 = -1;

    t59 = ((x281-x282)==(x283<=x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x285 = -249965;
	volatile int8_t x286 = 1;
	uint8_t x287 = 0U;
	int64_t x288 = -1351LL;
	int32_t t60 = 520263775;

    t60 = ((x285-x286)==(x287<=x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x290 = INT32_MIN;
	int32_t x291 = -261740;
	static uint8_t x292 = 17U;
	volatile int32_t t61 = -601658715;

    t61 = ((x289-x290)==(x291<=x292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x293 = 305U;
	static volatile int8_t x295 = -1;
	int32_t t62 = -10;

    t62 = ((x293-x294)==(x295<=x296));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x297 = INT16_MAX;
	static uint32_t x298 = UINT32_MAX;
	static uint16_t x299 = UINT16_MAX;
	int32_t t63 = 11;

    t63 = ((x297-x298)==(x299<=x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x301 = 6501972;
	volatile int8_t x302 = INT8_MAX;
	static uint8_t x303 = 2U;
	int64_t x304 = -1LL;
	int32_t t64 = -1;

    t64 = ((x301-x302)==(x303<=x304));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = UINT32_MAX;
	static volatile int64_t x306 = -1LL;
	static uint8_t x307 = 0U;
	int8_t x308 = -1;
	int32_t t65 = 12467227;

    t65 = ((x305-x306)==(x307<=x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x309 = 534541LL;
	volatile int8_t x310 = -1;
	int64_t x311 = INT64_MAX;
	int64_t x312 = 59579377LL;
	int32_t t66 = -7891;

    t66 = ((x309-x310)==(x311<=x312));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x313 = INT64_MAX;
	static uint32_t x314 = 12021809U;
	int16_t x315 = -320;
	int32_t t67 = 177;

    t67 = ((x313-x314)==(x315<=x316));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = -1;
	static uint64_t x319 = 337LLU;
	volatile uint64_t x320 = 5846LLU;
	volatile int32_t t68 = 919562503;

    t68 = ((x317-x318)==(x319<=x320));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x321 = 15U;
	int16_t x322 = 214;
	static int64_t x323 = 2201070667528400LL;
	static volatile int8_t x324 = INT8_MAX;
	int32_t t69 = -2064;

    t69 = ((x321-x322)==(x323<=x324));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MAX;
	int16_t x328 = 7789;

    t70 = ((x325-x326)==(x327<=x328));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x334 = UINT32_MAX;
	int8_t x335 = 5;
	uint64_t x336 = 58LLU;
	static volatile int32_t t71 = 22117396;

    t71 = ((x333-x334)==(x335<=x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x337 = -1LL;
	int64_t x338 = INT64_MIN;
	static int16_t x339 = 20;
	static int64_t x340 = 579LL;
	volatile int32_t t72 = 6;

    t72 = ((x337-x338)==(x339<=x340));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x345 = INT32_MIN;
	int32_t x346 = -6;
	int32_t x347 = -1;
	static int16_t x348 = 55;
	int32_t t73 = -2232;

    t73 = ((x345-x346)==(x347<=x348));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x349 = INT8_MIN;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	int32_t t74 = -31609;

    t74 = ((x349-x350)==(x351<=x352));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x357 = UINT64_MAX;
	volatile int32_t x359 = 8;
	static volatile int16_t x360 = INT16_MIN;
	int32_t t75 = -505074175;

    t75 = ((x357-x358)==(x359<=x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x361 = -42896LL;
	uint16_t x363 = 1U;
	volatile int64_t x364 = -24498852582662905LL;

    t76 = ((x361-x362)==(x363<=x364));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x365 = 0LLU;
	int64_t x366 = -1LL;
	static int64_t x367 = INT64_MIN;
	int32_t t77 = -98912775;

    t77 = ((x365-x366)==(x367<=x368));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x369 = 3U;
	int8_t x370 = 0;
	volatile int32_t t78 = 2;

    t78 = ((x369-x370)==(x371<=x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x374 = INT32_MIN;
	int64_t x375 = 17150689005LL;
	static uint32_t x376 = 4U;
	int32_t t79 = 104527892;

    t79 = ((x373-x374)==(x375<=x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x378 = 44U;
	uint32_t x379 = 170836U;
	static int32_t x380 = INT32_MIN;
	static int32_t t80 = -23;

    t80 = ((x377-x378)==(x379<=x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x381 = -1;
	uint16_t x382 = 2U;
	volatile uint16_t x384 = UINT16_MAX;

    t81 = ((x381-x382)==(x383<=x384));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x385 = INT8_MIN;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t82 = 191363;

    t82 = ((x385-x386)==(x387<=x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x393 = -22744107;
	static int64_t x394 = -1LL;
	volatile uint32_t x395 = 169U;
	static uint16_t x396 = UINT16_MAX;

    t83 = ((x393-x394)==(x395<=x396));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x398 = -1;
	uint16_t x399 = 19453U;
	volatile int32_t x400 = -247;

    t84 = ((x397-x398)==(x399<=x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x401 = -1LL;
	int64_t x403 = 3112220LL;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t85 = -884486124;

    t85 = ((x401-x402)==(x403<=x404));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = 2U;
	static uint16_t x415 = 431U;
	volatile uint32_t x416 = 1694U;

    t86 = ((x413-x414)==(x415<=x416));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t87 = -1970;

    t87 = ((x417-x418)==(x419<=x420));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x421 = -1LL;
	int32_t x422 = INT32_MIN;
	uint32_t x423 = 2350U;
	volatile uint8_t x424 = UINT8_MAX;
	int32_t t88 = -310365098;

    t88 = ((x421-x422)==(x423<=x424));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x425 = INT16_MIN;
	int8_t x427 = INT8_MAX;
	static uint8_t x428 = 3U;
	volatile int32_t t89 = -217;

    t89 = ((x425-x426)==(x427<=x428));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x431 = -22;

    t90 = ((x429-x430)==(x431<=x432));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x433 = -67555355725249544LL;
	static volatile int16_t x434 = INT16_MIN;
	int8_t x436 = 56;
	int32_t t91 = 442217;

    t91 = ((x433-x434)==(x435<=x436));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x437 = 2135346505LLU;
	int32_t x438 = -1;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t92 = 0;

    t92 = ((x437-x438)==(x439<=x440));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x446 = INT16_MAX;
	int32_t x447 = 286740219;
	int64_t x448 = 331241604412318920LL;
	int32_t t93 = -3283118;

    t93 = ((x445-x446)==(x447<=x448));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x453 = -1;
	static volatile uint8_t x455 = UINT8_MAX;
	int32_t t94 = 4063;

    t94 = ((x453-x454)==(x455<=x456));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x457 = INT32_MAX;
	uint64_t x458 = UINT64_MAX;
	static int16_t x459 = -1;
	uint32_t x460 = 13U;

    t95 = ((x457-x458)==(x459<=x460));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x461 = INT8_MIN;
	uint16_t x462 = 4U;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = UINT16_MAX;
	volatile int32_t t96 = 0;

    t96 = ((x461-x462)==(x463<=x464));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x465 = UINT16_MAX;
	volatile int32_t x467 = 64057;
	int64_t x468 = INT64_MIN;

    t97 = ((x465-x466)==(x467<=x468));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x469 = 707273693LLU;
	static int32_t x470 = -1;
	static volatile int8_t x471 = -1;
	static int32_t x472 = INT32_MIN;
	volatile int32_t t98 = 321245;

    t98 = ((x469-x470)==(x471<=x472));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x473 = INT16_MIN;
	static int32_t x475 = -433196;
	int16_t x476 = -32;

    t99 = ((x473-x474)==(x475<=x476));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x477 = -9LL;
	volatile uint8_t x478 = UINT8_MAX;
	int16_t x479 = INT16_MAX;
	uint64_t x480 = 102380729250821LLU;
	int32_t t100 = -4;

    t100 = ((x477-x478)==(x479<=x480));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x481 = 32U;
	int16_t x484 = INT16_MAX;
	int32_t t101 = 1064;

    t101 = ((x481-x482)==(x483<=x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x485 = 82071627;
	int64_t x486 = INT64_MAX;
	int32_t x487 = -48900161;
	static int32_t x488 = INT32_MIN;

    t102 = ((x485-x486)==(x487<=x488));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x489 = INT32_MIN;
	uint64_t x490 = 16349951122808172LLU;
	uint16_t x491 = 514U;
	int8_t x492 = -1;
	int32_t t103 = -1663;

    t103 = ((x489-x490)==(x491<=x492));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x501 = -16156964777LL;
	int64_t x502 = -1LL;
	int32_t x504 = -1166517;
	volatile int32_t t104 = 315;

    t104 = ((x501-x502)==(x503<=x504));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x505 = UINT64_MAX;
	volatile int32_t x506 = INT32_MIN;
	uint32_t x507 = 1723979915U;
	int64_t x508 = INT64_MAX;
	volatile int32_t t105 = -233106;

    t105 = ((x505-x506)==(x507<=x508));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x511 = -1;
	volatile int16_t x512 = 1;
	int32_t t106 = 1637956;

    t106 = ((x509-x510)==(x511<=x512));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x513 = UINT32_MAX;
	int32_t x514 = 7198;
	volatile uint32_t x515 = UINT32_MAX;
	int64_t x516 = 111854942LL;
	volatile int32_t t107 = -4769;

    t107 = ((x513-x514)==(x515<=x516));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x518 = -2941857582LL;
	int32_t x519 = INT32_MIN;
	int32_t t108 = -30778009;

    t108 = ((x517-x518)==(x519<=x520));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x522 = INT8_MIN;
	int8_t x523 = INT8_MAX;
	volatile int32_t t109 = 3824;

    t109 = ((x521-x522)==(x523<=x524));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x526 = INT8_MIN;
	volatile int8_t x527 = 1;
	int32_t x528 = -1;
	static int32_t t110 = -7;

    t110 = ((x525-x526)==(x527<=x528));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x529 = 517U;
	static int8_t x530 = 11;
	static int64_t x531 = 1499269797428223LL;
	volatile int32_t t111 = 504421038;

    t111 = ((x529-x530)==(x531<=x532));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x533 = 1U;
	uint32_t x534 = 36358U;
	uint32_t x535 = 4646940U;
	volatile int32_t x536 = -1;
	volatile int32_t t112 = 105;

    t112 = ((x533-x534)==(x535<=x536));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x537 = 3394U;
	int8_t x538 = -1;
	int16_t x539 = INT16_MIN;
	int64_t x540 = -1461329969LL;
	int32_t t113 = -1;

    t113 = ((x537-x538)==(x539<=x540));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x541 = 0;
	static uint32_t x543 = 297U;
	volatile int32_t t114 = -33;

    t114 = ((x541-x542)==(x543<=x544));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x546 = 118713800LLU;
	static uint8_t x547 = 93U;
	int64_t x548 = 25469LL;
	static volatile int32_t t115 = 6405;

    t115 = ((x545-x546)==(x547<=x548));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x549 = INT8_MIN;
	uint8_t x551 = UINT8_MAX;
	int16_t x552 = INT16_MIN;
	int32_t t116 = 1;

    t116 = ((x549-x550)==(x551<=x552));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x553 = -1;
	int16_t x554 = -1;
	int64_t x555 = 65LL;
	static volatile uint64_t x556 = 51215749321170LLU;
	int32_t t117 = -226823804;

    t117 = ((x553-x554)==(x555<=x556));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x557 = -1;
	int64_t x558 = 759444415591313LL;
	int32_t x560 = -1;

    t118 = ((x557-x558)==(x559<=x560));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x565 = UINT32_MAX;
	int16_t x566 = INT16_MIN;
	int64_t x567 = INT64_MIN;
	volatile int32_t x568 = INT32_MIN;

    t119 = ((x565-x566)==(x567<=x568));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x569 = UINT8_MAX;
	static uint64_t x570 = 3602644326424185204LLU;
	volatile uint8_t x572 = UINT8_MAX;
	int32_t t120 = -11493;

    t120 = ((x569-x570)==(x571<=x572));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int16_t x575 = INT16_MIN;
	uint8_t x576 = 6U;
	static volatile int32_t t121 = 122142274;

    t121 = ((x573-x574)==(x575<=x576));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = INT16_MIN;
	uint16_t x578 = 1589U;
	int32_t t122 = -41159;

    t122 = ((x577-x578)==(x579<=x580));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x581 = INT16_MIN;
	int8_t x582 = -1;
	int32_t x583 = INT32_MAX;
	static volatile int32_t t123 = -138;

    t123 = ((x581-x582)==(x583<=x584));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x585 = -75LL;
	static int8_t x586 = 52;
	static int16_t x587 = INT16_MAX;
	int16_t x588 = INT16_MIN;
	volatile int32_t t124 = 34;

    t124 = ((x585-x586)==(x587<=x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x589 = 415;
	int32_t x590 = -1;
	static int64_t x591 = INT64_MIN;
	int64_t x592 = -86596667781471788LL;
	volatile int32_t t125 = 26834495;

    t125 = ((x589-x590)==(x591<=x592));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x601 = -26;
	static int16_t x602 = INT16_MIN;
	uint32_t x603 = 42687U;
	int8_t x604 = -5;
	int32_t t126 = -46;

    t126 = ((x601-x602)==(x603<=x604));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x606 = INT32_MIN;
	volatile int8_t x607 = INT8_MIN;
	uint32_t x608 = 259698913U;

    t127 = ((x605-x606)==(x607<=x608));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x609 = -1;
	int8_t x610 = -1;
	volatile int32_t t128 = 432099264;

    t128 = ((x609-x610)==(x611<=x612));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x618 = 1LLU;
	int8_t x619 = INT8_MAX;
	uint8_t x620 = 73U;

    t129 = ((x617-x618)==(x619<=x620));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x621 = 83U;
	static volatile int64_t x623 = INT64_MIN;
	static int64_t x624 = INT64_MAX;
	volatile int32_t t130 = -30;

    t130 = ((x621-x622)==(x623<=x624));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x625 = -4;
	int32_t x626 = -50505288;
	int64_t x627 = -3015LL;
	int16_t x628 = -8831;
	volatile int32_t t131 = 4278317;

    t131 = ((x625-x626)==(x627<=x628));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x631 = INT16_MAX;
	int16_t x632 = INT16_MAX;
	volatile int32_t t132 = -1064967261;

    t132 = ((x629-x630)==(x631<=x632));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x638 = 1638176399245868418LL;
	uint32_t x639 = 2910U;
	static volatile int8_t x640 = -20;
	int32_t t133 = -8253065;

    t133 = ((x637-x638)==(x639<=x640));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x642 = 932U;
	int64_t x643 = INT64_MIN;
	volatile int32_t x644 = INT32_MIN;
	int32_t t134 = -11624;

    t134 = ((x641-x642)==(x643<=x644));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x646 = UINT16_MAX;
	volatile int64_t x647 = INT64_MIN;
	int32_t t135 = -69473029;

    t135 = ((x645-x646)==(x647<=x648));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x649 = 83707788886021LL;
	int8_t x650 = -1;
	volatile uint16_t x651 = 17U;
	int32_t x652 = 13197;
	volatile int32_t t136 = 64471539;

    t136 = ((x649-x650)==(x651<=x652));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x659 = INT16_MAX;
	volatile uint64_t x660 = 2687337435LLU;

    t137 = ((x657-x658)==(x659<=x660));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x661 = 53711U;
	uint16_t x664 = UINT16_MAX;

    t138 = ((x661-x662)==(x663<=x664));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x666 = 73U;
	volatile int64_t x667 = -1453194254290184974LL;
	int16_t x668 = -13;
	int32_t t139 = 2185;

    t139 = ((x665-x666)==(x667<=x668));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x669 = 6405140U;
	int8_t x670 = INT8_MAX;
	int32_t x671 = INT32_MIN;
	uint32_t x672 = 465720223U;
	int32_t t140 = 83169;

    t140 = ((x669-x670)==(x671<=x672));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x677 = INT16_MIN;
	uint8_t x678 = 94U;
	int64_t x679 = 8701LL;
	volatile int32_t t141 = -221747;

    t141 = ((x677-x678)==(x679<=x680));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	int32_t x684 = 711154;
	int32_t t142 = -409284176;

    t142 = ((x681-x682)==(x683<=x684));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x685 = 77LLU;
	int32_t x687 = 65;
	static int32_t x688 = -412;

    t143 = ((x685-x686)==(x687<=x688));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x689 = 1650664995U;
	static int32_t x691 = INT32_MAX;
	int16_t x692 = INT16_MAX;
	int32_t t144 = -29553;

    t144 = ((x689-x690)==(x691<=x692));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x694 = INT8_MIN;
	static int32_t x695 = INT32_MAX;
	volatile uint16_t x696 = 8412U;
	int32_t t145 = -21999;

    t145 = ((x693-x694)==(x695<=x696));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x697 = UINT8_MAX;
	static int8_t x698 = -1;
	uint64_t x699 = UINT64_MAX;
	static uint32_t x700 = UINT32_MAX;
	volatile int32_t t146 = -13751880;

    t146 = ((x697-x698)==(x699<=x700));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x701 = 4U;
	uint32_t x703 = UINT32_MAX;
	int8_t x704 = INT8_MIN;
	volatile int32_t t147 = 425126520;

    t147 = ((x701-x702)==(x703<=x704));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x705 = -1;
	static int32_t x706 = 108;
	uint32_t x707 = 84358U;

    t148 = ((x705-x706)==(x707<=x708));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x709 = -5;
	static uint8_t x710 = UINT8_MAX;
	static int32_t x711 = INT32_MIN;
	volatile uint16_t x712 = 222U;
	volatile int32_t t149 = 101;

    t149 = ((x709-x710)==(x711<=x712));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x713 = INT32_MIN;
	uint64_t x714 = 10703028212413LLU;
	int16_t x715 = 1546;
	int32_t x716 = -2943;
	static volatile int32_t t150 = -1484965;

    t150 = ((x713-x714)==(x715<=x716));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x717 = -1;
	int8_t x718 = 1;
	int64_t x719 = INT64_MIN;
	uint32_t x720 = 3118701U;
	int32_t t151 = 3076;

    t151 = ((x717-x718)==(x719<=x720));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x721 = 57U;
	static int8_t x723 = 4;
	int16_t x724 = -1;
	static int32_t t152 = -451694;

    t152 = ((x721-x722)==(x723<=x724));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x725 = 29294664U;
	uint64_t x726 = UINT64_MAX;
	static uint64_t x727 = UINT64_MAX;
	int32_t x728 = 447713438;
	int32_t t153 = 351;

    t153 = ((x725-x726)==(x727<=x728));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x729 = UINT32_MAX;
	volatile uint32_t x730 = 221898U;
	uint8_t x731 = 40U;
	volatile uint64_t x732 = 3298107910432LLU;
	volatile int32_t t154 = 7889624;

    t154 = ((x729-x730)==(x731<=x732));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x737 = 1606;
	static int32_t x738 = -396204;
	volatile uint64_t x739 = 222053992LLU;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t155 = -16326;

    t155 = ((x737-x738)==(x739<=x740));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x745 = INT16_MAX;
	uint32_t x746 = UINT32_MAX;
	volatile int16_t x747 = -1;
	int8_t x748 = INT8_MAX;
	volatile int32_t t156 = 15;

    t156 = ((x745-x746)==(x747<=x748));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x749 = -1;
	int8_t x750 = INT8_MIN;
	int64_t x751 = 253807666768040103LL;
	int16_t x752 = -1;
	int32_t t157 = -774168284;

    t157 = ((x749-x750)==(x751<=x752));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x753 = -1LL;
	volatile int64_t x754 = INT64_MAX;
	int8_t x755 = -1;
	uint64_t x756 = 362439LLU;
	int32_t t158 = -3;

    t158 = ((x753-x754)==(x755<=x756));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x757 = 95U;
	uint16_t x758 = UINT16_MAX;
	volatile int16_t x759 = INT16_MIN;
	int16_t x760 = -1;
	static volatile int32_t t159 = -86765;

    t159 = ((x757-x758)==(x759<=x760));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -201;
	int8_t x763 = INT8_MIN;
	static int16_t x764 = INT16_MIN;
	static volatile int32_t t160 = 62;

    t160 = ((x761-x762)==(x763<=x764));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x765 = INT64_MAX;
	uint32_t x766 = UINT32_MAX;
	volatile int64_t x767 = -1LL;
	uint16_t x768 = 1U;
	static int32_t t161 = 2603450;

    t161 = ((x765-x766)==(x767<=x768));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x769 = 82691U;
	uint64_t x770 = UINT64_MAX;
	int8_t x771 = -14;
	int16_t x772 = -8;
	int32_t t162 = -260480617;

    t162 = ((x769-x770)==(x771<=x772));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x773 = UINT16_MAX;
	volatile int64_t x774 = -1LL;
	static int16_t x775 = INT16_MIN;
	uint64_t x776 = UINT64_MAX;

    t163 = ((x773-x774)==(x775<=x776));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x779 = 12U;
	volatile uint16_t x780 = 2U;
	static volatile int32_t t164 = -781;

    t164 = ((x777-x778)==(x779<=x780));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x785 = INT64_MAX;
	static volatile uint32_t x786 = 499U;
	int8_t x787 = INT8_MAX;
	int32_t x788 = -870436546;
	volatile int32_t t165 = 450;

    t165 = ((x785-x786)==(x787<=x788));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x789 = 1634U;
	int16_t x791 = -88;
	int8_t x792 = INT8_MAX;
	int32_t t166 = 3038;

    t166 = ((x789-x790)==(x791<=x792));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x793 = 0LL;
	int32_t x795 = -1;
	static uint16_t x796 = 243U;

    t167 = ((x793-x794)==(x795<=x796));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x798 = -1;
	int64_t x799 = 1286635819949LL;
	int16_t x800 = INT16_MAX;
	static int32_t t168 = 7;

    t168 = ((x797-x798)==(x799<=x800));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x802 = UINT32_MAX;
	int8_t x803 = INT8_MIN;
	volatile int32_t t169 = -5061641;

    t169 = ((x801-x802)==(x803<=x804));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x805 = 109;
	int32_t x806 = -1;
	int16_t x807 = 8;
	uint64_t x808 = 21328388787LLU;

    t170 = ((x805-x806)==(x807<=x808));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x809 = 1;
	volatile uint32_t x810 = 2U;
	int32_t x811 = -1;
	int32_t t171 = -913887094;

    t171 = ((x809-x810)==(x811<=x812));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x817 = 250121LLU;
	int64_t x818 = INT64_MIN;
	static int8_t x819 = INT8_MAX;

    t172 = ((x817-x818)==(x819<=x820));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x821 = -1;
	int16_t x822 = INT16_MIN;
	static int32_t x823 = INT32_MIN;
	volatile int32_t t173 = -6;

    t173 = ((x821-x822)==(x823<=x824));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x825 = INT64_MIN;
	uint64_t x826 = 366424862542LLU;
	volatile int8_t x827 = -1;

    t174 = ((x825-x826)==(x827<=x828));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x829 = -24;
	uint16_t x830 = UINT16_MAX;
	volatile uint8_t x831 = 6U;
	int32_t t175 = -1;

    t175 = ((x829-x830)==(x831<=x832));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x833 = -7785674735750094LL;
	volatile uint16_t x834 = UINT16_MAX;
	uint8_t x836 = 68U;
	volatile int32_t t176 = -8;

    t176 = ((x833-x834)==(x835<=x836));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x837 = -15;
	static int16_t x838 = -1;
	volatile int32_t x839 = -1;
	static int32_t t177 = -1;

    t177 = ((x837-x838)==(x839<=x840));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x841 = UINT32_MAX;
	volatile int64_t x844 = 254LL;
	volatile int32_t t178 = -5008429;

    t178 = ((x841-x842)==(x843<=x844));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x845 = INT8_MIN;
	volatile int8_t x846 = 33;
	int64_t x847 = INT64_MIN;
	static int64_t x848 = -6114564523825LL;
	static int32_t t179 = 1211;

    t179 = ((x845-x846)==(x847<=x848));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x850 = INT64_MIN;
	int32_t x851 = 12;
	static int8_t x852 = INT8_MIN;
	volatile int32_t t180 = 425263;

    t180 = ((x849-x850)==(x851<=x852));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x853 = 61LLU;
	uint64_t x854 = UINT64_MAX;
	static int16_t x856 = -1;
	int32_t t181 = -10727;

    t181 = ((x853-x854)==(x855<=x856));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x858 = -1LL;
	int64_t x859 = INT64_MAX;
	volatile int32_t t182 = 1;

    t182 = ((x857-x858)==(x859<=x860));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x861 = -3835;
	volatile int8_t x863 = INT8_MIN;
	volatile int16_t x864 = 10380;
	volatile int32_t t183 = -8439843;

    t183 = ((x861-x862)==(x863<=x864));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x867 = 17U;
	volatile int32_t t184 = -30701894;

    t184 = ((x865-x866)==(x867<=x868));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x873 = -1LL;
	uint32_t x874 = 14210317U;
	int32_t x875 = 11780951;
	static volatile int32_t t185 = -461543472;

    t185 = ((x873-x874)==(x875<=x876));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x877 = 1;
	volatile int64_t x878 = 618494463547202008LL;
	int16_t x879 = 8072;
	int64_t x880 = -1LL;
	int32_t t186 = 244;

    t186 = ((x877-x878)==(x879<=x880));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x881 = -1LL;
	int64_t x882 = INT64_MIN;
	volatile int64_t x883 = 1058LL;
	uint8_t x884 = 45U;
	static int32_t t187 = 8665;

    t187 = ((x881-x882)==(x883<=x884));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MAX;
	static int64_t x887 = -1LL;
	static uint8_t x888 = 12U;
	int32_t t188 = -3;

    t188 = ((x885-x886)==(x887<=x888));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x890 = INT64_MAX;
	int64_t x891 = INT64_MAX;
	int16_t x892 = 333;

    t189 = ((x889-x890)==(x891<=x892));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x893 = INT8_MIN;
	static uint64_t x895 = 332765932LLU;
	int16_t x896 = -1;
	volatile int32_t t190 = 52;

    t190 = ((x893-x894)==(x895<=x896));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x897 = -1LL;
	int64_t x898 = INT64_MIN;
	uint16_t x899 = 359U;
	volatile int8_t x900 = -5;
	static int32_t t191 = 60485;

    t191 = ((x897-x898)==(x899<=x900));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x902 = INT16_MIN;
	int64_t x903 = INT64_MIN;
	static int32_t t192 = -422;

    t192 = ((x901-x902)==(x903<=x904));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x905 = -177132565144684LL;
	int16_t x906 = -1;
	static volatile int32_t x907 = INT32_MIN;
	int64_t x908 = INT64_MIN;
	volatile int32_t t193 = 0;

    t193 = ((x905-x906)==(x907<=x908));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x909 = 5921LLU;
	uint16_t x910 = UINT16_MAX;
	int64_t x911 = 6065377785334175LL;
	int64_t x912 = INT64_MIN;

    t194 = ((x909-x910)==(x911<=x912));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x913 = 1U;
	static int16_t x914 = 892;
	volatile int8_t x915 = INT8_MIN;
	uint16_t x916 = UINT16_MAX;
	static volatile int32_t t195 = 1031348393;

    t195 = ((x913-x914)==(x915<=x916));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x917 = 0U;
	static volatile uint32_t x919 = UINT32_MAX;
	static uint16_t x920 = 17U;
	volatile int32_t t196 = -88506609;

    t196 = ((x917-x918)==(x919<=x920));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x922 = UINT8_MAX;
	int16_t x924 = -1;
	int32_t t197 = 11592565;

    t197 = ((x921-x922)==(x923<=x924));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x933 = 25;
	int16_t x934 = 589;
	int64_t x935 = INT64_MAX;
	volatile int32_t t198 = 41;

    t198 = ((x933-x934)==(x935<=x936));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x937 = INT8_MIN;
	volatile uint16_t x939 = UINT16_MAX;

    t199 = ((x937-x938)==(x939<=x940));

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

