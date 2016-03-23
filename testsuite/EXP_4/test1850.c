
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

static volatile int32_t t1 = 8160;
int16_t x16 = INT16_MAX;
static int32_t t4 = 42636;
volatile int8_t x33 = INT8_MAX;
static int64_t x34 = -1LL;
int32_t t6 = -1;
volatile uint32_t x39 = 29559U;
int16_t x41 = INT16_MIN;
int16_t x45 = -2;
uint32_t x59 = 63318519U;
int8_t x60 = -1;
int8_t x72 = INT8_MIN;
int16_t x87 = -1;
volatile int8_t x90 = -1;
static uint32_t x94 = 3U;
uint32_t x100 = 32452U;
int32_t t20 = -84;
static volatile int64_t x101 = -1LL;
int64_t t21 = -211277464921954LL;
int16_t x108 = -1;
int8_t x126 = INT8_MAX;
volatile int32_t x128 = INT32_MIN;
volatile int32_t t25 = 492333;
int16_t x130 = INT16_MAX;
int8_t x131 = -58;
volatile int16_t x141 = -22;
static volatile int64_t x144 = 680906312647180691LL;
static volatile int8_t x148 = INT8_MIN;
uint32_t x149 = UINT32_MAX;
static int32_t x156 = -98745;
int32_t x157 = -1;
uint16_t x159 = 300U;
int16_t x161 = -1;
volatile int16_t x163 = INT16_MIN;
uint32_t x170 = UINT32_MAX;
volatile int32_t t36 = -52;
int16_t x178 = INT16_MIN;
static int32_t x179 = -1;
static int64_t x188 = INT64_MIN;
int32_t t39 = -140179884;
static int16_t x189 = INT16_MAX;
int64_t x192 = INT64_MAX;
int32_t t40 = -3261294;
int32_t x197 = 0;
volatile uint8_t x200 = UINT8_MAX;
int8_t x205 = INT8_MIN;
volatile uint32_t t47 = 1327U;
uint64_t t49 = 42669773799713LLU;
static int32_t x235 = INT32_MIN;
volatile int64_t x242 = -1LL;
uint64_t x252 = 3426333872LLU;
static int16_t x253 = -1;
int16_t x256 = 15450;
static int64_t x267 = -243335LL;
volatile uint16_t x271 = UINT16_MAX;
static uint64_t x272 = 0LLU;
int64_t x280 = -4736707670260677LL;
volatile int32_t x289 = -1;
uint64_t x290 = 85612986614976832LLU;
int32_t t64 = -110433829;
uint8_t x295 = 7U;
uint32_t x297 = 28592U;
volatile uint32_t t66 = 1U;
uint8_t x308 = 5U;
int32_t t69 = 2421;
int32_t t71 = -97;
int32_t t72 = 8305106;
int16_t x343 = INT16_MIN;
int32_t t78 = 551092;
int8_t x350 = 6;
int16_t x351 = -1;
uint64_t x355 = 176836357915LLU;
volatile int32_t t81 = -16545;
static uint16_t x361 = UINT16_MAX;
int8_t x371 = INT8_MAX;
volatile int32_t t83 = -1530;
uint32_t x384 = 4U;
volatile int32_t t86 = -5612;
uint32_t x387 = 15U;
static uint32_t x398 = 247178157U;
int64_t x399 = -1LL;
volatile uint64_t x400 = 93LLU;
int64_t t91 = -269573347887LL;
volatile uint8_t x414 = 42U;
static int64_t t92 = 2502963401220405548LL;
int8_t x420 = -1;
static int64_t x421 = -4079242740645322LL;
int32_t x430 = -441;
uint8_t x431 = UINT8_MAX;
volatile int64_t x432 = INT64_MIN;
int64_t x435 = 374084570LL;
int64_t x438 = -210942552170316LL;
static int32_t x442 = INT32_MIN;
volatile int64_t x444 = 284LL;
volatile uint32_t x448 = UINT32_MAX;
volatile int64_t x453 = INT64_MAX;
static int16_t x457 = INT16_MAX;
int16_t x458 = -1;
uint16_t x477 = 1U;
int64_t x485 = -1372481384093454LL;
static uint32_t x491 = UINT32_MAX;
int8_t x494 = -1;
int8_t x496 = -1;
int32_t x499 = INT32_MAX;
volatile int64_t x504 = INT64_MIN;
volatile int8_t x515 = 1;
volatile int32_t t115 = 6531;
int32_t x524 = INT32_MAX;
static volatile int32_t t120 = -103;
volatile int64_t x542 = 14065386700856021LL;
int64_t x544 = -1LL;
static int8_t x549 = -1;
static uint32_t t124 = 89U;
int16_t x561 = INT16_MIN;
int16_t x562 = 96;
static int16_t x563 = INT16_MIN;
static volatile int32_t t127 = 17779;
int64_t x569 = INT64_MAX;
int16_t x570 = INT16_MIN;
volatile int32_t x575 = INT32_MAX;
volatile uint8_t x582 = 28U;
int64_t x585 = INT64_MAX;
int64_t x589 = -1LL;
volatile int64_t t132 = -8373891951LL;
volatile int16_t x600 = -468;
uint32_t x601 = 137953U;
int32_t x602 = INT32_MIN;
static uint32_t t134 = 8677424U;
int64_t x605 = -1LL;
int16_t x609 = INT16_MIN;
uint16_t x610 = 1U;
int32_t t136 = 49498;
uint64_t x613 = 21697LLU;
int8_t x621 = 14;
static int64_t x623 = INT64_MIN;
int8_t x630 = INT8_MAX;
int8_t x631 = INT8_MIN;
int8_t x632 = INT8_MAX;
uint32_t t141 = 49U;
int8_t x638 = INT8_MIN;
int32_t x640 = INT32_MIN;
volatile int32_t t143 = 109316;
static volatile int32_t x643 = 354127;
volatile uint32_t t144 = 845U;
static int32_t x651 = INT32_MIN;
volatile int32_t t147 = -996665;
static uint32_t x660 = UINT32_MAX;
int8_t x664 = -41;
volatile int32_t t149 = -1;
uint8_t x668 = 1U;
int16_t x672 = INT16_MAX;
int8_t x683 = -1;
int32_t x692 = INT32_MIN;
static volatile int32_t t155 = -1717641;
static int8_t x695 = INT8_MIN;
int16_t x696 = -214;
uint8_t x700 = 1U;
int64_t t157 = 29805912LL;
uint8_t x702 = 4U;
int8_t x717 = -5;
int16_t x721 = INT16_MAX;
static uint16_t x730 = UINT16_MAX;
volatile int32_t x738 = INT32_MIN;
uint32_t x742 = UINT32_MAX;
static int16_t x753 = INT16_MAX;
uint16_t x756 = 18017U;
static int64_t x759 = INT64_MIN;
uint16_t x765 = UINT16_MAX;
int8_t x772 = INT8_MIN;
volatile int64_t x774 = INT64_MIN;
uint32_t x783 = UINT32_MAX;
volatile int64_t t174 = 42908140013958LL;
int64_t t176 = 951127634766213LL;
static int64_t x798 = INT64_MIN;
static int16_t x800 = -1;
uint64_t x807 = 4765688634451246LLU;
volatile int32_t t180 = -5379;
uint8_t x809 = 96U;
int64_t x814 = INT64_MIN;
static volatile int8_t x821 = INT8_MIN;
volatile int8_t x826 = -1;
uint64_t x829 = 94545796571LLU;
int32_t t187 = -226;
int32_t t188 = 1039;
int32_t t189 = 24452;
static uint8_t x850 = UINT8_MAX;
static uint16_t x861 = UINT16_MAX;
volatile uint32_t x863 = UINT32_MAX;
int16_t x869 = INT16_MAX;
int32_t x871 = INT32_MAX;
int64_t x873 = -1194878320436083LL;
int64_t x884 = INT64_MIN;
int8_t x888 = INT8_MIN;
int16_t x889 = INT16_MIN;
int64_t x890 = 296539338319084LL;
int16_t x891 = -1;
int32_t t198 = 158;


void f0(void) {
    	int16_t x1 = -1;
	int16_t x2 = 1230;
	int64_t x3 = INT64_MIN;
	static int32_t x4 = 11178;
	static volatile int32_t t0 = 6767563;

    t0 = (x1-(x2!=(x3<=x4)));

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 0;
	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	int64_t x8 = -271374149288116784LL;

    t1 = (x5-(x6!=(x7<=x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 11U;
	static volatile uint16_t x10 = 33U;
	int8_t x11 = 0;
	static uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 1;

    t2 = (x9-(x10!=(x11<=x12)));

    if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -48;
	uint16_t x14 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	static volatile int32_t t3 = -31346245;

    t3 = (x13-(x14!=(x15<=x16)));

    if (t3 != -49) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = 9;
	volatile int32_t x22 = INT32_MAX;
	volatile uint64_t x23 = UINT64_MAX;
	static int32_t x24 = INT32_MIN;

    t4 = (x21-(x22!=(x23<=x24)));

    if (t4 != 8) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x25 = 1U;
	uint32_t x26 = 7836U;
	static volatile int16_t x27 = -463;
	int64_t x28 = INT64_MIN;
	int32_t t5 = -7188;

    t5 = (x25-(x26!=(x27<=x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x35 = 1;
	uint8_t x36 = UINT8_MAX;

    t6 = (x33-(x34!=(x35<=x36)));

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	int64_t x40 = INT64_MIN;
	int32_t t7 = -65329728;

    t7 = (x37-(x38!=(x39<=x40)));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MAX;
	static volatile int64_t x44 = INT64_MIN;
	static volatile int32_t t8 = -26150;

    t8 = (x41-(x42!=(x43<=x44)));

    if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x46 = INT64_MIN;
	int64_t x47 = 1148LL;
	volatile uint8_t x48 = 47U;
	static int32_t t9 = 21;

    t9 = (x45-(x46!=(x47<=x48)));

    if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x49 = INT8_MIN;
	int16_t x50 = -253;
	int64_t x51 = -1LL;
	int32_t x52 = INT32_MAX;
	static volatile int32_t t10 = -4;

    t10 = (x49-(x50!=(x51<=x52)));

    if (t10 != -129) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = INT64_MAX;
	int64_t x58 = -3342LL;
	int64_t t11 = 3251254LL;

    t11 = (x57-(x58!=(x59<=x60)));

    if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x61 = 77126U;
	uint32_t x62 = 23U;
	static int8_t x63 = 3;
	static int32_t x64 = INT32_MIN;
	uint32_t t12 = 4992601U;

    t12 = (x61-(x62!=(x63<=x64)));

    if (t12 != 77125U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	volatile int8_t x67 = 30;
	static int64_t x68 = INT64_MIN;
	static volatile uint32_t t13 = 716976U;

    t13 = (x65-(x66!=(x67<=x68)));

    if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = INT32_MAX;
	volatile int64_t x70 = -1LL;
	uint32_t x71 = 195133U;
	int32_t t14 = -205841591;

    t14 = (x69-(x70!=(x71<=x72)));

    if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x77 = 572LLU;
	int8_t x78 = 0;
	int8_t x79 = INT8_MIN;
	static uint16_t x80 = 86U;
	uint64_t t15 = 13578351117LLU;

    t15 = (x77-(x78!=(x79<=x80)));

    if (t15 != 571LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x81 = 0U;
	uint16_t x82 = 28331U;
	volatile int32_t x83 = INT32_MAX;
	static int16_t x84 = 1;
	static int32_t t16 = 305955;

    t16 = (x81-(x82!=(x83<=x84)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MIN;
	static uint64_t x86 = 204623923714LLU;
	volatile uint64_t x88 = 8LLU;
	volatile int32_t t17 = 149658;

    t17 = (x85-(x86!=(x87<=x88)));

    if (t17 != -32769) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = 6;
	int32_t x91 = -45433;
	volatile int16_t x92 = -5;
	static int32_t t18 = -2281;

    t18 = (x89-(x90!=(x91<=x92)));

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x93 = 52;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t19 = -3680431;

    t19 = (x93-(x94!=(x95<=x96)));

    if (t19 != 51) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 91U;
	int64_t x98 = INT64_MIN;
	int32_t x99 = -809981950;

    t20 = (x97-(x98!=(x99<=x100)));

    if (t20 != 90) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x102 = INT8_MAX;
	uint16_t x103 = 19U;
	volatile uint8_t x104 = 1U;

    t21 = (x101-(x102!=(x103<=x104)));

    if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = 1314538798142117LL;
	int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	static int64_t t22 = -2036LL;

    t22 = (x105-(x106!=(x107<=x108)));

    if (t22 != 1314538798142116LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int32_t x115 = 690148225;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t23 = -4088880;

    t23 = (x113-(x114!=(x115<=x116)));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x121 = 2;
	uint8_t x122 = 32U;
	static volatile int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int32_t t24 = 711380;

    t24 = (x121-(x122!=(x123<=x124)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = 11;
	static int8_t x127 = -3;

    t25 = (x125-(x126!=(x127<=x128)));

    if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x129 = 33U;
	int64_t x132 = -68541754941LL;
	int32_t t26 = -791593;

    t26 = (x129-(x130!=(x131<=x132)));

    if (t26 != 32) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x133 = 13U;
	int32_t x134 = 586918646;
	static uint32_t x135 = UINT32_MAX;
	static uint32_t x136 = UINT32_MAX;
	static volatile int32_t t27 = -1;

    t27 = (x133-(x134!=(x135<=x136)));

    if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = 26LL;
	volatile int32_t x138 = INT32_MAX;
	int32_t x139 = -1;
	uint32_t x140 = UINT32_MAX;
	volatile int64_t t28 = 0LL;

    t28 = (x137-(x138!=(x139<=x140)));

    if (t28 != 25LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x142 = 11;
	int32_t x143 = INT32_MAX;
	int32_t t29 = 270;

    t29 = (x141-(x142!=(x143<=x144)));

    if (t29 != -23) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MAX;
	uint32_t x147 = UINT32_MAX;
	static volatile int32_t t30 = 4;

    t30 = (x145-(x146!=(x147<=x148)));

    if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x150 = 0U;
	int32_t x151 = -200;
	static int64_t x152 = INT64_MIN;
	volatile uint32_t t31 = UINT32_MAX;

    t31 = (x149-(x150!=(x151<=x152)));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint64_t x153 = 3294587327LLU;
	uint8_t x154 = 1U;
	int64_t x155 = 36108685447676174LL;
	static volatile uint64_t t32 = 371670864656616LLU;

    t32 = (x153-(x154!=(x155<=x156)));

    if (t32 != 3294587326LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x158 = -1;
	int8_t x160 = -3;
	volatile int32_t t33 = 416809;

    t33 = (x157-(x158!=(x159<=x160)));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x162 = 8;
	uint32_t x164 = UINT32_MAX;
	int32_t t34 = -206018;

    t34 = (x161-(x162!=(x163<=x164)));

    if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x165 = 8U;
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MAX;
	static volatile int32_t x168 = 13;
	volatile int32_t t35 = 117990;

    t35 = (x165-(x166!=(x167<=x168)));

    if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = -12212;
	static uint8_t x171 = UINT8_MAX;
	volatile uint64_t x172 = 3075558974846939067LLU;

    t36 = (x169-(x170!=(x171<=x172)));

    if (t36 != -12213) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	int32_t x175 = 212;
	uint16_t x176 = 30U;
	static volatile int32_t t37 = 3887;

    t37 = (x173-(x174!=(x175<=x176)));

    if (t37 != 2147483646) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x177 = -1;
	static int64_t x180 = -1LL;
	volatile int32_t t38 = -401139;

    t38 = (x177-(x178!=(x179<=x180)));

    if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x185 = -1;
	int64_t x186 = INT64_MIN;
	static int16_t x187 = INT16_MIN;

    t39 = (x185-(x186!=(x187<=x188)));

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x190 = 2;
	uint8_t x191 = UINT8_MAX;

    t40 = (x189-(x190!=(x191<=x192)));

    if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = INT16_MIN;
	uint8_t x194 = 2U;
	int32_t x195 = INT32_MAX;
	int64_t x196 = INT64_MIN;
	volatile int32_t t41 = -7;

    t41 = (x193-(x194!=(x195<=x196)));

    if (t41 != -32769) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x198 = 6U;
	static int16_t x199 = INT16_MAX;
	volatile int32_t t42 = -53;

    t42 = (x197-(x198!=(x199<=x200)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 261605517627274427LLU;
	volatile int8_t x202 = 0;
	int64_t x203 = -1LL;
	static uint16_t x204 = UINT16_MAX;
	static uint64_t t43 = 509202161LLU;

    t43 = (x201-(x202!=(x203<=x204)));

    if (t43 != 261605517627274426LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x206 = INT64_MIN;
	volatile int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	static int32_t t44 = 210076;

    t44 = (x205-(x206!=(x207<=x208)));

    if (t44 != -129) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = INT16_MAX;
	static int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MIN;
	uint32_t x212 = 8U;
	volatile int32_t t45 = 12891;

    t45 = (x209-(x210!=(x211<=x212)));

    if (t45 != 32766) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x213 = -1LL;
	int64_t x214 = 327397155442202LL;
	int32_t x215 = 2;
	uint32_t x216 = 2056311U;
	int64_t t46 = -11184906068LL;

    t46 = (x213-(x214!=(x215<=x216)));

    if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x217 = UINT32_MAX;
	static uint16_t x218 = 3841U;
	uint64_t x219 = 25658LLU;
	int32_t x220 = INT32_MAX;

    t47 = (x217-(x218!=(x219<=x220)));

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 0U;
	uint8_t x222 = 0U;
	int8_t x223 = -55;
	int32_t x224 = -1;
	volatile int32_t t48 = -299239;

    t48 = (x221-(x222!=(x223<=x224)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x225 = UINT64_MAX;
	uint64_t x226 = 34656477642418LLU;
	static int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;

    t49 = (x225-(x226!=(x227<=x228)));

    if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x233 = -42542;
	uint64_t x234 = 14947273351LLU;
	uint32_t x236 = 7981U;
	int32_t t50 = -1130;

    t50 = (x233-(x234!=(x235<=x236)));

    if (t50 != -42543) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x237 = 32U;
	uint16_t x238 = 12758U;
	static int32_t x239 = 5;
	static uint16_t x240 = UINT16_MAX;
	int32_t t51 = 237396524;

    t51 = (x237-(x238!=(x239<=x240)));

    if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x241 = 832501LL;
	int8_t x243 = 6;
	int16_t x244 = INT16_MIN;
	int64_t t52 = -297491372LL;

    t52 = (x241-(x242!=(x243<=x244)));

    if (t52 != 832500LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x245 = INT32_MAX;
	volatile int8_t x246 = 1;
	static volatile uint64_t x247 = 1014895456072LLU;
	static uint8_t x248 = 0U;
	volatile int32_t t53 = 0;

    t53 = (x245-(x246!=(x247<=x248)));

    if (t53 != 2147483646) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = -1LL;
	int16_t x250 = 8696;
	int16_t x251 = INT16_MIN;
	volatile int64_t t54 = -108733715308824LL;

    t54 = (x249-(x250!=(x251<=x252)));

    if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x254 = INT16_MIN;
	volatile uint8_t x255 = 14U;
	int32_t t55 = -983558;

    t55 = (x253-(x254!=(x255<=x256)));

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x257 = INT16_MIN;
	volatile int32_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	uint64_t x260 = UINT64_MAX;
	static volatile int32_t t56 = -1;

    t56 = (x257-(x258!=(x259<=x260)));

    if (t56 != -32769) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x261 = -1LL;
	static uint32_t x262 = 44U;
	int32_t x263 = INT32_MAX;
	static volatile uint16_t x264 = 6U;
	int64_t t57 = -2071728LL;

    t57 = (x261-(x262!=(x263<=x264)));

    if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x265 = INT8_MAX;
	int32_t x266 = 35764;
	int8_t x268 = 15;
	static int32_t t58 = -8077781;

    t58 = (x265-(x266!=(x267<=x268)));

    if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x269 = UINT64_MAX;
	int64_t x270 = -1LL;
	volatile uint64_t t59 = 32745561242LLU;

    t59 = (x269-(x270!=(x271<=x272)));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = -1578;
	static int32_t t60 = 1;

    t60 = (x273-(x274!=(x275<=x276)));

    if (t60 != -32769) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x277 = INT8_MIN;
	static uint8_t x278 = 12U;
	uint16_t x279 = 337U;
	int32_t t61 = -6848;

    t61 = (x277-(x278!=(x279<=x280)));

    if (t61 != -129) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x281 = 13290U;
	uint64_t x282 = 1460LLU;
	int32_t x283 = 1;
	uint8_t x284 = 26U;
	static volatile int32_t t62 = -223367447;

    t62 = (x281-(x282!=(x283<=x284)));

    if (t62 != 13289) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = -1LL;
	volatile int8_t x286 = INT8_MIN;
	volatile int16_t x287 = INT16_MIN;
	int64_t x288 = 39LL;
	static volatile int64_t t63 = -1048321766323LL;

    t63 = (x285-(x286!=(x287<=x288)));

    if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x291 = 34;
	int32_t x292 = INT32_MAX;

    t64 = (x289-(x290!=(x291<=x292)));

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x293 = -1;
	static int32_t x294 = INT32_MIN;
	int32_t x296 = -6;
	static int32_t t65 = 0;

    t65 = (x293-(x294!=(x295<=x296)));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x298 = INT16_MIN;
	static int64_t x299 = 133056465773358LL;
	volatile uint32_t x300 = 26U;

    t66 = (x297-(x298!=(x299<=x300)));

    if (t66 != 28591U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = 1;
	uint32_t x302 = 528U;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = -13547;
	static int32_t t67 = -5320687;

    t67 = (x301-(x302!=(x303<=x304)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x305 = UINT64_MAX;
	int16_t x306 = -1;
	int32_t x307 = 8933550;
	volatile uint64_t t68 = 1194087367109LLU;

    t68 = (x305-(x306!=(x307<=x308)));

    if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x309 = 60;
	volatile int8_t x310 = INT8_MIN;
	volatile uint64_t x311 = 12294LLU;
	volatile int16_t x312 = INT16_MIN;

    t69 = (x309-(x310!=(x311<=x312)));

    if (t69 != 59) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x313 = UINT64_MAX;
	volatile int16_t x314 = -1;
	int32_t x315 = INT32_MIN;
	volatile int16_t x316 = -1;
	uint64_t t70 = 1305LLU;

    t70 = (x313-(x314!=(x315<=x316)));

    if (t70 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = -1;
	int32_t x318 = INT32_MIN;
	volatile int64_t x319 = INT64_MIN;
	int64_t x320 = 33057166529726LL;

    t71 = (x317-(x318!=(x319<=x320)));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x321 = 421610632;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MIN;
	volatile int64_t x324 = INT64_MIN;

    t72 = (x321-(x322!=(x323<=x324)));

    if (t72 != 421610631) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x325 = INT16_MIN;
	static volatile int64_t x326 = INT64_MIN;
	volatile uint32_t x327 = 131U;
	int16_t x328 = 1;
	volatile int32_t t73 = -48109;

    t73 = (x325-(x326!=(x327<=x328)));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = INT8_MIN;
	uint32_t x330 = 47689U;
	int32_t x331 = 43937;
	uint16_t x332 = 971U;
	int32_t t74 = 1;

    t74 = (x329-(x330!=(x331<=x332)));

    if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x333 = 111U;
	uint8_t x334 = 7U;
	uint64_t x335 = UINT64_MAX;
	static uint64_t x336 = 2993LLU;
	int32_t t75 = -81961;

    t75 = (x333-(x334!=(x335<=x336)));

    if (t75 != 110) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = 7541387;
	volatile int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	volatile uint16_t x340 = 95U;
	int32_t t76 = -4307;

    t76 = (x337-(x338!=(x339<=x340)));

    if (t76 != 7541386) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x341 = 2202U;
	int32_t x342 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	static uint32_t t77 = 167825U;

    t77 = (x341-(x342!=(x343<=x344)));

    if (t77 != 2201U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x345 = -1;
	static uint8_t x346 = 1U;
	static int16_t x347 = -44;
	int32_t x348 = INT32_MIN;

    t78 = (x345-(x346!=(x347<=x348)));

    if (t78 != -2) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x349 = -4754009727063LL;
	int16_t x352 = INT16_MIN;
	static int64_t t79 = 66482275LL;

    t79 = (x349-(x350!=(x351<=x352)));

    if (t79 != -4754009727064LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = UINT8_MAX;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t80 = -369;

    t80 = (x353-(x354!=(x355<=x356)));

    if (t80 != -32769) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = -1;
	volatile uint32_t x360 = 715776490U;

    t81 = (x357-(x358!=(x359<=x360)));

    if (t81 != -32769) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	volatile int64_t x364 = -3LL;
	volatile int32_t t82 = 855326695;

    t82 = (x361-(x362!=(x363<=x364)));

    if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = 20;
	int16_t x372 = INT16_MAX;

    t83 = (x369-(x370!=(x371<=x372)));

    if (t83 != -129) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = INT32_MAX;
	static volatile int8_t x374 = INT8_MIN;
	int32_t x375 = -1;
	static volatile int64_t x376 = -1LL;
	static int32_t t84 = 2606;

    t84 = (x373-(x374!=(x375<=x376)));

    if (t84 != 2147483646) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = -184351085415170LL;
	uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 806051944539434925LLU;
	static int8_t x380 = -1;
	static int64_t t85 = -471241918LL;

    t85 = (x377-(x378!=(x379<=x380)));

    if (t85 != -184351085415171LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = -2;
	int16_t x382 = -23;
	int8_t x383 = -1;

    t86 = (x381-(x382!=(x383<=x384)));

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = -1;
	static int8_t x386 = -39;
	int32_t x388 = -3;
	int32_t t87 = 4;

    t87 = (x385-(x386!=(x387<=x388)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x389 = INT8_MAX;
	volatile int16_t x390 = 8;
	int32_t x391 = -223384;
	int8_t x392 = 0;
	int32_t t88 = -1;

    t88 = (x389-(x390!=(x391<=x392)));

    if (t88 != 126) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x397 = 1;
	volatile int32_t t89 = -1596701;

    t89 = (x397-(x398!=(x399<=x400)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x401 = -1LL;
	uint16_t x402 = UINT16_MAX;
	static uint8_t x403 = UINT8_MAX;
	int16_t x404 = INT16_MAX;
	static int64_t t90 = -39022183272144LL;

    t90 = (x401-(x402!=(x403<=x404)));

    if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x409 = -1LL;
	int64_t x410 = -21762450408012168LL;
	static uint16_t x411 = 4U;
	static uint32_t x412 = 9U;

    t91 = (x409-(x410!=(x411<=x412)));

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x413 = 51621906349579182LL;
	static int64_t x415 = -1LL;
	uint16_t x416 = UINT16_MAX;

    t92 = (x413-(x414!=(x415<=x416)));

    if (t92 != 51621906349579181LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x417 = 44993954LLU;
	int16_t x418 = INT16_MIN;
	int32_t x419 = 1098;
	static uint64_t t93 = 126484LLU;

    t93 = (x417-(x418!=(x419<=x420)));

    if (t93 != 44993953LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x422 = 5935981306LLU;
	static int32_t x423 = -1;
	static volatile int32_t x424 = 6269;
	volatile int64_t t94 = -778684641810356LL;

    t94 = (x421-(x422!=(x423<=x424)));

    if (t94 != -4079242740645323LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x425 = UINT16_MAX;
	static int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	int8_t x428 = INT8_MIN;
	int32_t t95 = 56116;

    t95 = (x425-(x426!=(x427<=x428)));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = -1;
	static volatile int32_t t96 = 82806;

    t96 = (x429-(x430!=(x431<=x432)));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x433 = -1;
	int8_t x434 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t97 = -569;

    t97 = (x433-(x434!=(x435<=x436)));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x437 = INT64_MAX;
	int64_t x439 = INT64_MAX;
	volatile int32_t x440 = 77;
	volatile int64_t t98 = -1LL;

    t98 = (x437-(x438!=(x439<=x440)));

    if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x441 = 81975LLU;
	static volatile uint64_t x443 = UINT64_MAX;
	uint64_t t99 = 1070LLU;

    t99 = (x441-(x442!=(x443<=x444)));

    if (t99 != 81974LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x445 = 494818508U;
	int64_t x446 = INT64_MIN;
	volatile int16_t x447 = -1;
	uint32_t t100 = 7575244U;

    t100 = (x445-(x446!=(x447<=x448)));

    if (t100 != 494818507U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x454 = 15690U;
	static int64_t x455 = -1LL;
	int16_t x456 = -1;
	volatile int64_t t101 = -544068LL;

    t101 = (x453-(x454!=(x455<=x456)));

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x459 = INT32_MIN;
	volatile int16_t x460 = 128;
	int32_t t102 = -233;

    t102 = (x457-(x458!=(x459<=x460)));

    if (t102 != 32766) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x465 = UINT16_MAX;
	uint32_t x466 = 34776330U;
	int64_t x467 = -1LL;
	int16_t x468 = INT16_MAX;
	int32_t t103 = 33846;

    t103 = (x465-(x466!=(x467<=x468)));

    if (t103 != 65534) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = -2052955310857LL;
	int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MAX;
	uint16_t x472 = 147U;
	volatile int64_t t104 = 2338805019881027LL;

    t104 = (x469-(x470!=(x471<=x472)));

    if (t104 != -2052955310858LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x473 = -253743LL;
	int64_t x474 = 86LL;
	volatile uint8_t x475 = 64U;
	uint8_t x476 = UINT8_MAX;
	int64_t t105 = -26LL;

    t105 = (x473-(x474!=(x475<=x476)));

    if (t105 != -253744LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x478 = 4U;
	static int16_t x479 = -9;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t106 = -778618277;

    t106 = (x477-(x478!=(x479<=x480)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x481 = INT16_MIN;
	volatile int16_t x482 = INT16_MIN;
	uint64_t x483 = 112651037748LLU;
	static volatile int8_t x484 = -20;
	volatile int32_t t107 = -1;

    t107 = (x481-(x482!=(x483<=x484)));

    if (t107 != -32769) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x486 = UINT32_MAX;
	volatile int8_t x487 = -6;
	static int8_t x488 = -23;
	volatile int64_t t108 = -13635268559620LL;

    t108 = (x485-(x486!=(x487<=x488)));

    if (t108 != -1372481384093455LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x489 = INT8_MIN;
	int64_t x490 = -32525820747702314LL;
	int64_t x492 = INT64_MIN;
	static volatile int32_t t109 = -7;

    t109 = (x489-(x490!=(x491<=x492)));

    if (t109 != -129) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x493 = 0;
	uint16_t x495 = 7U;
	volatile int32_t t110 = 2551;

    t110 = (x493-(x494!=(x495<=x496)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = 5875430591864474LL;
	int8_t x500 = -1;
	int32_t t111 = 1914;

    t111 = (x497-(x498!=(x499<=x500)));

    if (t111 != 254) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x501 = 148U;
	int64_t x502 = -3592532325LL;
	int32_t x503 = INT32_MAX;
	static volatile int32_t t112 = 182738;

    t112 = (x501-(x502!=(x503<=x504)));

    if (t112 != 147) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MAX;
	uint8_t x507 = 0U;
	int16_t x508 = 6353;
	int32_t t113 = 4851555;

    t113 = (x505-(x506!=(x507<=x508)));

    if (t113 != -32769) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	static int8_t x510 = INT8_MIN;
	static int16_t x511 = INT16_MIN;
	volatile int64_t x512 = -1LL;
	volatile uint32_t t114 = 52559380U;

    t114 = (x509-(x510!=(x511<=x512)));

    if (t114 != 4294967294U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x513 = INT16_MIN;
	static int32_t x514 = -209;
	volatile uint8_t x516 = 1U;

    t115 = (x513-(x514!=(x515<=x516)));

    if (t115 != -32769) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = 346599U;
	static int64_t x522 = -56879266095LL;
	static int32_t x523 = INT32_MIN;
	volatile uint32_t t116 = 48583U;

    t116 = (x521-(x522!=(x523<=x524)));

    if (t116 != 346598U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x525 = 20211U;
	volatile uint16_t x526 = UINT16_MAX;
	int64_t x527 = INT64_MIN;
	volatile int32_t x528 = INT32_MAX;
	volatile int32_t t117 = -4230;

    t117 = (x525-(x526!=(x527<=x528)));

    if (t117 != 20210) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	int64_t x530 = INT64_MIN;
	int8_t x531 = -8;
	int32_t x532 = INT32_MIN;
	uint64_t t118 = 29486LLU;

    t118 = (x529-(x530!=(x531<=x532)));

    if (t118 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x533 = -1LL;
	volatile uint32_t x534 = UINT32_MAX;
	uint16_t x535 = 1U;
	int32_t x536 = INT32_MIN;
	int64_t t119 = 2LL;

    t119 = (x533-(x534!=(x535<=x536)));

    if (t119 != -2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x537 = INT16_MIN;
	uint32_t x538 = UINT32_MAX;
	uint8_t x539 = 106U;
	int32_t x540 = INT32_MIN;

    t120 = (x537-(x538!=(x539<=x540)));

    if (t120 != -32769) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x541 = 119U;
	int8_t x543 = -1;
	int32_t t121 = 116231;

    t121 = (x541-(x542!=(x543<=x544)));

    if (t121 != 118) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x545 = 76U;
	static int64_t x546 = 17517LL;
	static int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	volatile uint32_t t122 = 3U;

    t122 = (x545-(x546!=(x547<=x548)));

    if (t122 != 75U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x550 = 0;
	int64_t x551 = INT64_MIN;
	int8_t x552 = INT8_MIN;
	int32_t t123 = 52;

    t123 = (x549-(x550!=(x551<=x552)));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x553 = 25795U;
	int64_t x554 = -1LL;
	static int16_t x555 = -3;
	uint8_t x556 = UINT8_MAX;

    t124 = (x553-(x554!=(x555<=x556)));

    if (t124 != 25794U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x557 = INT16_MIN;
	volatile int16_t x558 = INT16_MIN;
	int16_t x559 = INT16_MAX;
	uint32_t x560 = UINT32_MAX;
	static volatile int32_t t125 = -1;

    t125 = (x557-(x558!=(x559<=x560)));

    if (t125 != -32769) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x564 = 100LLU;
	volatile int32_t t126 = 735;

    t126 = (x561-(x562!=(x563<=x564)));

    if (t126 != -32769) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x565 = INT16_MIN;
	static int16_t x566 = INT16_MIN;
	int8_t x567 = 11;
	int8_t x568 = -1;

    t127 = (x565-(x566!=(x567<=x568)));

    if (t127 != -32769) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x571 = 18028714276602LLU;
	volatile uint32_t x572 = UINT32_MAX;
	int64_t t128 = -211268150748LL;

    t128 = (x569-(x570!=(x571<=x572)));

    if (t128 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x573 = -1;
	volatile uint8_t x574 = UINT8_MAX;
	static uint16_t x576 = UINT16_MAX;
	volatile int32_t t129 = 734099;

    t129 = (x573-(x574!=(x575<=x576)));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x581 = INT8_MIN;
	uint16_t x583 = UINT16_MAX;
	uint16_t x584 = UINT16_MAX;
	volatile int32_t t130 = -162650;

    t130 = (x581-(x582!=(x583<=x584)));

    if (t130 != -129) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x586 = 1;
	int64_t x587 = INT64_MAX;
	static int64_t x588 = -1LL;
	volatile int64_t t131 = 806835LL;

    t131 = (x585-(x586!=(x587<=x588)));

    if (t131 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x590 = -12;
	volatile int8_t x591 = -1;
	volatile int32_t x592 = -181;

    t132 = (x589-(x590!=(x591<=x592)));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x597 = 1;
	int32_t x598 = 0;
	static int64_t x599 = INT64_MAX;
	static int32_t t133 = 11680047;

    t133 = (x597-(x598!=(x599<=x600)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x603 = INT32_MIN;
	int32_t x604 = -1;

    t134 = (x601-(x602!=(x603<=x604)));

    if (t134 != 137952U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x606 = 57273328U;
	volatile int8_t x607 = INT8_MIN;
	int16_t x608 = INT16_MAX;
	int64_t t135 = 2227531136703926LL;

    t135 = (x605-(x606!=(x607<=x608)));

    if (t135 != -2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x611 = 35U;
	int64_t x612 = -81097121454349LL;

    t136 = (x609-(x610!=(x611<=x612)));

    if (t136 != -32769) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x614 = 174U;
	volatile uint8_t x615 = UINT8_MAX;
	int32_t x616 = INT32_MIN;
	uint64_t t137 = 125642144LLU;

    t137 = (x613-(x614!=(x615<=x616)));

    if (t137 != 21696LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x617 = -5444;
	int8_t x618 = INT8_MAX;
	volatile uint64_t x619 = 1948349204677LLU;
	uint32_t x620 = 2298U;
	static int32_t t138 = -341;

    t138 = (x617-(x618!=(x619<=x620)));

    if (t138 != -5445) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x622 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t139 = -3433;

    t139 = (x621-(x622!=(x623<=x624)));

    if (t139 != 13) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x625 = INT16_MIN;
	static int8_t x626 = -1;
	static uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MIN;
	int32_t t140 = 13344;

    t140 = (x625-(x626!=(x627<=x628)));

    if (t140 != -32769) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x629 = 13U;

    t141 = (x629-(x630!=(x631<=x632)));

    if (t141 != 12U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x633 = INT64_MAX;
	uint16_t x634 = UINT16_MAX;
	uint8_t x635 = UINT8_MAX;
	int64_t x636 = 5851342486953LL;
	volatile int64_t t142 = -111430053666LL;

    t142 = (x633-(x634!=(x635<=x636)));

    if (t142 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = INT8_MIN;
	volatile int64_t x639 = INT64_MIN;

    t143 = (x637-(x638!=(x639<=x640)));

    if (t143 != -129) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x641 = 1U;
	int16_t x642 = INT16_MAX;
	int64_t x644 = INT64_MIN;

    t144 = (x641-(x642!=(x643<=x644)));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x645 = 49U;
	volatile int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	uint16_t x648 = UINT16_MAX;
	static int32_t t145 = 0;

    t145 = (x645-(x646!=(x647<=x648)));

    if (t145 != 48) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x649 = 4U;
	int8_t x650 = -22;
	int8_t x652 = INT8_MIN;
	volatile uint32_t t146 = 9101U;

    t146 = (x649-(x650!=(x651<=x652)));

    if (t146 != 3U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x653 = INT32_MAX;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = 28;
	static int16_t x656 = 5;

    t147 = (x653-(x654!=(x655<=x656)));

    if (t147 != 2147483646) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x657 = -1;
	static int8_t x658 = 62;
	int32_t x659 = -56887388;
	int32_t t148 = 287615135;

    t148 = (x657-(x658!=(x659<=x660)));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = -197;
	int32_t x662 = INT32_MIN;
	int32_t x663 = 67139;

    t149 = (x661-(x662!=(x663<=x664)));

    if (t149 != -198) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x665 = UINT8_MAX;
	static int16_t x666 = INT16_MAX;
	int32_t x667 = INT32_MIN;
	volatile int32_t t150 = 1;

    t150 = (x665-(x666!=(x667<=x668)));

    if (t150 != 254) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x669 = UINT16_MAX;
	static int64_t x670 = -1LL;
	int32_t x671 = -1;
	int32_t t151 = 27073276;

    t151 = (x669-(x670!=(x671<=x672)));

    if (t151 != 65534) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x677 = 2490099423LLU;
	int64_t x678 = -1LL;
	int16_t x679 = INT16_MAX;
	int16_t x680 = -1;
	static uint64_t t152 = 7916445828171LLU;

    t152 = (x677-(x678!=(x679<=x680)));

    if (t152 != 2490099422LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x681 = 130788272919LLU;
	volatile uint64_t x682 = 102LLU;
	int16_t x684 = 0;
	uint64_t t153 = 141596LLU;

    t153 = (x681-(x682!=(x683<=x684)));

    if (t153 != 130788272918LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x685 = -14174;
	static int64_t x686 = -1LL;
	int8_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	int32_t t154 = -54677964;

    t154 = (x685-(x686!=(x687<=x688)));

    if (t154 != -14175) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x689 = 58U;
	int32_t x690 = INT32_MIN;
	uint16_t x691 = 92U;

    t155 = (x689-(x690!=(x691<=x692)));

    if (t155 != 57) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x693 = 7755;
	volatile int16_t x694 = INT16_MAX;
	int32_t t156 = -260605;

    t156 = (x693-(x694!=(x695<=x696)));

    if (t156 != 7754) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x697 = INT64_MAX;
	int8_t x698 = INT8_MIN;
	static uint8_t x699 = UINT8_MAX;

    t157 = (x697-(x698!=(x699<=x700)));

    if (t157 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x701 = 0;
	int8_t x703 = 29;
	int8_t x704 = INT8_MIN;
	volatile int32_t t158 = -13533;

    t158 = (x701-(x702!=(x703<=x704)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x705 = -1;
	int8_t x706 = INT8_MIN;
	int8_t x707 = INT8_MIN;
	volatile int8_t x708 = INT8_MAX;
	static volatile int32_t t159 = -11853533;

    t159 = (x705-(x706!=(x707<=x708)));

    if (t159 != -2) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x718 = 253LLU;
	int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MIN;
	int32_t t160 = -60;

    t160 = (x717-(x718!=(x719<=x720)));

    if (t160 != -6) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x722 = UINT16_MAX;
	uint64_t x723 = 443584636LLU;
	int32_t x724 = INT32_MIN;
	int32_t t161 = 32165;

    t161 = (x721-(x722!=(x723<=x724)));

    if (t161 != 32766) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x725 = 7379U;
	int32_t x726 = INT32_MIN;
	static int64_t x727 = INT64_MIN;
	static int8_t x728 = -12;
	volatile int32_t t162 = 79;

    t162 = (x725-(x726!=(x727<=x728)));

    if (t162 != 7378) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x729 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	uint64_t x732 = 524961LLU;
	int32_t t163 = 7820010;

    t163 = (x729-(x730!=(x731<=x732)));

    if (t163 != -32769) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x737 = -51;
	static uint8_t x739 = 3U;
	uint32_t x740 = 1849U;
	int32_t t164 = 3215;

    t164 = (x737-(x738!=(x739<=x740)));

    if (t164 != -52) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x741 = -149832310LL;
	static uint16_t x743 = UINT16_MAX;
	int32_t x744 = INT32_MIN;
	static volatile int64_t t165 = 323LL;

    t165 = (x741-(x742!=(x743<=x744)));

    if (t165 != -149832311LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x749 = -1;
	int8_t x750 = -1;
	int64_t x751 = -1LL;
	static int64_t x752 = INT64_MIN;
	int32_t t166 = 1;

    t166 = (x749-(x750!=(x751<=x752)));

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x754 = -1;
	volatile uint8_t x755 = 94U;
	int32_t t167 = 30;

    t167 = (x753-(x754!=(x755<=x756)));

    if (t167 != 32766) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x757 = INT16_MAX;
	static int8_t x758 = -1;
	int32_t x760 = INT32_MIN;
	volatile int32_t t168 = -375388180;

    t168 = (x757-(x758!=(x759<=x760)));

    if (t168 != 32766) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x761 = -1LL;
	volatile uint8_t x762 = 3U;
	static uint64_t x763 = 48841842LLU;
	static volatile uint64_t x764 = 82591074537LLU;
	int64_t t169 = 64940LL;

    t169 = (x761-(x762!=(x763<=x764)));

    if (t169 != -2LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x766 = UINT16_MAX;
	uint32_t x767 = 61060811U;
	uint16_t x768 = 117U;
	int32_t t170 = 9027700;

    t170 = (x765-(x766!=(x767<=x768)));

    if (t170 != 65534) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x769 = 134634U;
	static int32_t x770 = -1;
	uint16_t x771 = 3742U;
	volatile uint32_t t171 = 8U;

    t171 = (x769-(x770!=(x771<=x772)));

    if (t171 != 134633U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x773 = INT8_MIN;
	uint32_t x775 = 436U;
	uint64_t x776 = UINT64_MAX;
	int32_t t172 = -23437276;

    t172 = (x773-(x774!=(x775<=x776)));

    if (t172 != -129) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x777 = -1;
	int64_t x778 = -1LL;
	static int8_t x779 = INT8_MIN;
	int8_t x780 = -1;
	volatile int32_t t173 = 257914;

    t173 = (x777-(x778!=(x779<=x780)));

    if (t173 != -2) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x781 = -146838475953184625LL;
	int8_t x782 = INT8_MAX;
	uint16_t x784 = 1U;

    t174 = (x781-(x782!=(x783<=x784)));

    if (t174 != -146838475953184626LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x785 = -1;
	uint16_t x786 = 10364U;
	int8_t x787 = INT8_MAX;
	uint8_t x788 = 23U;
	int32_t t175 = -2;

    t175 = (x785-(x786!=(x787<=x788)));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x789 = -1701LL;
	volatile int16_t x790 = 0;
	static int16_t x791 = -1;
	int64_t x792 = -1LL;

    t176 = (x789-(x790!=(x791<=x792)));

    if (t176 != -1702LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x793 = -1;
	uint64_t x794 = 199244924707297764LLU;
	uint32_t x795 = UINT32_MAX;
	uint8_t x796 = 69U;
	int32_t t177 = 3013;

    t177 = (x793-(x794!=(x795<=x796)));

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x797 = INT16_MAX;
	volatile int64_t x799 = -27316LL;
	int32_t t178 = 2091;

    t178 = (x797-(x798!=(x799<=x800)));

    if (t178 != 32766) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = 1;
	int8_t x803 = INT8_MIN;
	int8_t x804 = -1;
	volatile int64_t t179 = INT64_MIN;

    t179 = (x801-(x802!=(x803<=x804)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x805 = 10U;
	volatile int8_t x806 = -1;
	uint8_t x808 = 76U;

    t180 = (x805-(x806!=(x807<=x808)));

    if (t180 != 9) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x810 = -5;
	int8_t x811 = 53;
	volatile int64_t x812 = INT64_MIN;
	volatile int32_t t181 = -82;

    t181 = (x809-(x810!=(x811<=x812)));

    if (t181 != 95) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x813 = -17990103;
	uint16_t x815 = UINT16_MAX;
	int16_t x816 = -1;
	volatile int32_t t182 = -133330828;

    t182 = (x813-(x814!=(x815<=x816)));

    if (t182 != -17990104) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x817 = UINT64_MAX;
	int64_t x818 = -405488366876100LL;
	int32_t x819 = INT32_MIN;
	int32_t x820 = -64021945;
	static uint64_t t183 = 315499044406657536LLU;

    t183 = (x817-(x818!=(x819<=x820)));

    if (t183 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x822 = INT64_MIN;
	int16_t x823 = -1;
	static int16_t x824 = -7;
	int32_t t184 = -341708627;

    t184 = (x821-(x822!=(x823<=x824)));

    if (t184 != -129) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x825 = 743934272906LLU;
	static int32_t x827 = INT32_MIN;
	static int32_t x828 = -1;
	uint64_t t185 = 299109886354LLU;

    t185 = (x825-(x826!=(x827<=x828)));

    if (t185 != 743934272905LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x830 = -805488;
	uint64_t x831 = 7286104534704120LLU;
	int64_t x832 = 12LL;
	static volatile uint64_t t186 = 537931054002242281LLU;

    t186 = (x829-(x830!=(x831<=x832)));

    if (t186 != 94545796570LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x837 = 1;
	uint16_t x838 = 13U;
	static volatile int8_t x839 = INT8_MIN;
	volatile int32_t x840 = INT32_MAX;

    t187 = (x837-(x838!=(x839<=x840)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = 0;
	volatile int32_t x842 = INT32_MIN;
	volatile int64_t x843 = 17891719289509233LL;
	int32_t x844 = INT32_MIN;

    t188 = (x841-(x842!=(x843<=x844)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x845 = UINT8_MAX;
	int32_t x846 = INT32_MAX;
	uint16_t x847 = 0U;
	volatile int32_t x848 = INT32_MAX;

    t189 = (x845-(x846!=(x847<=x848)));

    if (t189 != 254) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x849 = 1630U;
	uint64_t x851 = 369559387LLU;
	volatile uint8_t x852 = 48U;
	static int32_t t190 = -4521;

    t190 = (x849-(x850!=(x851<=x852)));

    if (t190 != 1629) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x853 = -42;
	static volatile int8_t x854 = INT8_MIN;
	volatile int64_t x855 = -1LL;
	volatile int16_t x856 = -1;
	int32_t t191 = 122;

    t191 = (x853-(x854!=(x855<=x856)));

    if (t191 != -43) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x862 = 0;
	static volatile int8_t x864 = INT8_MAX;
	int32_t t192 = -1;

    t192 = (x861-(x862!=(x863<=x864)));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x870 = INT8_MIN;
	static volatile int16_t x872 = -1;
	static int32_t t193 = -41433520;

    t193 = (x869-(x870!=(x871<=x872)));

    if (t193 != 32766) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x874 = INT64_MIN;
	int8_t x875 = -1;
	uint64_t x876 = UINT64_MAX;
	int64_t t194 = -8260897341187587LL;

    t194 = (x873-(x874!=(x875<=x876)));

    if (t194 != -1194878320436084LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x877 = INT16_MIN;
	volatile int64_t x878 = 22LL;
	uint16_t x879 = 598U;
	int16_t x880 = INT16_MIN;
	int32_t t195 = -51194368;

    t195 = (x877-(x878!=(x879<=x880)));

    if (t195 != -32769) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x881 = -1LL;
	int32_t x882 = INT32_MIN;
	static int8_t x883 = INT8_MIN;
	int64_t t196 = 675963607163535LL;

    t196 = (x881-(x882!=(x883<=x884)));

    if (t196 != -2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x885 = -259628251695LL;
	uint64_t x886 = 15738581069831226LLU;
	int8_t x887 = INT8_MAX;
	int64_t t197 = -1LL;

    t197 = (x885-(x886!=(x887<=x888)));

    if (t197 != -259628251696LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x892 = -1LL;

    t198 = (x889-(x890!=(x891<=x892)));

    if (t198 != -32769) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x893 = 71U;
	int32_t x894 = INT32_MAX;
	int8_t x895 = -16;
	uint16_t x896 = 7U;
	volatile int32_t t199 = 386736204;

    t199 = (x893-(x894!=(x895<=x896)));

    if (t199 != 70) { NG(); } else { ; }
	
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

