
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

static int64_t x1 = -1LL;
static int32_t x3 = -1;
int32_t x9 = 5289;
volatile int64_t x12 = -1LL;
volatile int64_t x26 = 753270279474518LL;
static uint64_t x34 = 2172453568596529LLU;
static int16_t x36 = -1;
uint64_t t5 = 12623955595958LLU;
uint64_t x44 = 13578884231702LLU;
volatile uint16_t x66 = 46U;
int32_t t10 = -193756318;
uint16_t x71 = UINT16_MAX;
volatile int32_t x79 = 1532;
uint32_t x81 = UINT32_MAX;
int32_t x93 = -1251352;
volatile uint64_t x97 = UINT64_MAX;
static uint8_t x102 = 2U;
volatile int64_t x111 = INT64_MAX;
static int64_t x114 = -1LL;
uint32_t x128 = UINT32_MAX;
static volatile int64_t x137 = -1LL;
uint32_t x143 = 161406686U;
int8_t x153 = INT8_MAX;
int32_t x155 = INT32_MIN;
int64_t x160 = INT64_MIN;
volatile int32_t x162 = 29;
static uint16_t x164 = 13145U;
volatile int64_t x168 = -60LL;
volatile int64_t x183 = INT64_MIN;
int32_t x187 = -1;
int32_t t36 = 0;
volatile uint8_t x189 = 3U;
int32_t x191 = -1;
uint64_t t39 = 0LLU;
volatile int64_t x216 = INT64_MIN;
static int32_t x217 = -1;
static volatile uint32_t x219 = 43535839U;
int8_t x242 = INT8_MAX;
int16_t x243 = 2;
volatile int8_t x254 = INT8_MAX;
int8_t x259 = INT8_MIN;
volatile int32_t t47 = -109129;
int16_t x269 = INT16_MIN;
int32_t x271 = INT32_MAX;
uint16_t x275 = 0U;
uint8_t x280 = 1U;
int32_t x286 = -8090;
int32_t t54 = 14;
int8_t x292 = -1;
uint64_t t56 = 4389276516LLU;
uint8_t x306 = 1U;
volatile int32_t t59 = 756;
uint64_t x310 = 1078798527426LLU;
uint16_t x324 = 2678U;
volatile int32_t t63 = -977452094;
static int8_t x337 = INT8_MIN;
uint8_t x356 = 103U;
static volatile int16_t x357 = -53;
uint64_t x367 = UINT64_MAX;
volatile int64_t x376 = 7990867796670LL;
int32_t x382 = INT32_MAX;
static int16_t x388 = INT16_MIN;
uint32_t x403 = 362179U;
int64_t x407 = -344994829LL;
int16_t x410 = -2046;
static uint32_t x412 = UINT32_MAX;
volatile int64_t t81 = -10LL;
volatile uint16_t x439 = 9141U;
volatile uint64_t t86 = 931449766699824704LLU;
static volatile uint64_t t87 = 0LLU;
int8_t x445 = INT8_MAX;
int32_t x446 = -84;
static volatile uint32_t x447 = 13U;
static uint64_t t89 = 30LLU;
uint8_t x465 = 26U;
uint16_t x467 = 4477U;
volatile uint32_t t92 = 2862U;
uint64_t t95 = 271995743940292LLU;
int16_t x495 = -27;
static volatile int16_t x512 = -1;
int8_t x514 = INT8_MIN;
volatile int8_t x515 = -6;
volatile uint64_t x517 = 159382450656954LLU;
volatile uint64_t t102 = 1428042168492748664LLU;
int8_t x544 = INT8_MIN;
volatile int64_t x559 = INT64_MIN;
uint64_t x567 = UINT64_MAX;
static int64_t t107 = -7089275723145181LL;
int8_t x574 = INT8_MIN;
int16_t x575 = 0;
int32_t x595 = 2;
static int64_t x596 = 54108349506LL;
volatile uint64_t t110 = 0LLU;
int64_t x605 = -35027364666994LL;
int32_t t113 = -25368;
uint32_t x618 = UINT32_MAX;
static uint32_t x622 = UINT32_MAX;
uint16_t x625 = 3U;
int16_t x626 = -1;
uint64_t t117 = 407712LLU;
uint8_t x642 = UINT8_MAX;
static int32_t x643 = INT32_MIN;
uint64_t x645 = UINT64_MAX;
int32_t t120 = -15;
volatile int32_t t122 = -225;
uint8_t x671 = 22U;
uint16_t x675 = UINT16_MAX;
volatile uint64_t t124 = 4676095109LLU;
int64_t x683 = -179158LL;
int8_t x684 = INT8_MAX;
int8_t x687 = -1;
int32_t x688 = -1;
static int32_t x707 = INT32_MIN;
int16_t x723 = INT16_MIN;
volatile uint8_t x734 = UINT8_MAX;
volatile uint8_t x735 = 8U;
static uint64_t x747 = 518308093641521210LLU;
uint64_t x748 = UINT64_MAX;
volatile uint64_t t138 = 6192LLU;
uint32_t x771 = 1U;
uint8_t x775 = 1U;
static volatile int8_t x778 = INT8_MIN;
volatile int16_t x784 = INT16_MAX;
uint32_t x790 = 406142U;
int16_t x791 = -1;
volatile int32_t t145 = 209;
static volatile int32_t t147 = -210;
uint64_t t148 = 111139237493969LLU;
int64_t x828 = INT64_MAX;
uint8_t x850 = 30U;
int32_t t152 = 822;
int32_t x853 = INT32_MAX;
int32_t x857 = INT32_MIN;
uint64_t x865 = 5397958LLU;
int64_t x871 = INT64_MIN;
int16_t x880 = INT16_MIN;
int8_t x896 = INT8_MIN;
volatile uint8_t x905 = 102U;
volatile int32_t t165 = -1;
static volatile int8_t x917 = INT8_MIN;
uint16_t x918 = 9U;
volatile uint8_t x924 = 109U;
volatile int64_t t167 = -324496013LL;
volatile int32_t t170 = 924735;
uint8_t x938 = 3U;
uint32_t x940 = 1U;
int16_t x942 = INT16_MAX;
static int16_t x944 = -1;
int64_t x948 = INT64_MAX;
static int32_t t174 = 985482018;
volatile int32_t x959 = -7870;
volatile uint32_t t176 = UINT32_MAX;
int16_t x961 = INT16_MAX;
int8_t x962 = -1;
uint64_t x968 = UINT64_MAX;
uint16_t x974 = 2U;
int8_t x975 = -1;
uint8_t x976 = 23U;
uint8_t x979 = UINT8_MAX;
int8_t x984 = INT8_MAX;
int32_t t181 = 39;
volatile int16_t x985 = 235;
static int64_t x988 = -1LL;
volatile uint64_t t183 = 78LLU;
int64_t x1017 = -1LL;
volatile int16_t x1018 = 44;
uint64_t x1025 = UINT64_MAX;
uint16_t x1028 = 5U;
volatile int32_t t191 = 171991;
uint64_t t193 = 29741LLU;
static volatile uint16_t x1044 = UINT16_MAX;
int32_t x1047 = -1;
int32_t t195 = 44;
static volatile int32_t x1063 = INT32_MIN;


void f0(void) {
    	volatile uint8_t x2 = 1U;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 519776560093LL;

    t0 = ((x1*x2)^(x3==x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = 59;
	int64_t x11 = INT64_MIN;
	volatile int32_t t1 = 1834154;

    t1 = ((x9*x10)^(x11==x12));

    if (t1 != 312051) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x21 = -1;
	int64_t x22 = 23133LL;
	volatile int32_t x23 = INT32_MIN;
	uint16_t x24 = 648U;
	volatile int64_t t2 = 5844990471LL;

    t2 = ((x21*x22)^(x23==x24));

    if (t2 != -23133LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x25 = -6542;
	int8_t x27 = -12;
	static uint64_t x28 = UINT64_MAX;
	static volatile int64_t t3 = -950728703LL;

    t3 = ((x25*x26)^(x27==x28));

    if (t3 != -4927894168322296756LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MIN;
	int8_t x32 = 16;
	int32_t t4 = 31148469;

    t4 = ((x29*x30)^(x31==x32));

    if (t4 != -4194176) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = 6632944U;
	volatile int64_t x35 = INT64_MAX;

    t5 = ((x33*x34)^(x35==x36));

    if (t5 != 2855741533775639280LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x41 = INT16_MIN;
	volatile int8_t x42 = 0;
	int32_t x43 = -805631;
	volatile int32_t t6 = 8;

    t6 = ((x41*x42)^(x43==x44));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x45 = -1;
	volatile uint32_t x46 = 258932U;
	int64_t x47 = INT64_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint32_t t7 = 3U;

    t7 = ((x45*x46)^(x47==x48));

    if (t7 != 4294708364U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x49 = UINT32_MAX;
	uint8_t x50 = 0U;
	static int32_t x51 = -6461;
	int16_t x52 = 8438;
	uint32_t t8 = 9692U;

    t8 = ((x49*x50)^(x51==x52));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = INT32_MAX;
	static uint64_t x62 = UINT64_MAX;
	int64_t x63 = 25LL;
	uint64_t x64 = 406LLU;
	uint64_t t9 = 1586LLU;

    t9 = ((x61*x62)^(x63==x64));

    if (t9 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x65 = 1;
	volatile int32_t x67 = -192;
	int8_t x68 = INT8_MIN;

    t10 = ((x65*x66)^(x67==x68));

    if (t10 != 46) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x69 = 380114431LLU;
	static uint64_t x70 = 2LLU;
	int64_t x72 = 33825955269936LL;
	static uint64_t t11 = 10LLU;

    t11 = ((x69*x70)^(x71==x72));

    if (t11 != 760228862LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = 0;
	static int8_t x74 = 0;
	volatile uint8_t x75 = 2U;
	static int16_t x76 = INT16_MIN;
	int32_t t12 = -93609859;

    t12 = ((x73*x74)^(x75==x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x77 = INT8_MIN;
	uint32_t x78 = 153U;
	static uint32_t x80 = 4U;
	uint32_t t13 = 0U;

    t13 = ((x77*x78)^(x79==x80));

    if (t13 != 4294947712U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x82 = 212789106502LLU;
	int64_t x83 = -1LL;
	int16_t x84 = 219;
	volatile uint64_t t14 = 4067LLU;

    t14 = ((x81*x82)^(x83==x84));

    if (t14 != 10031793546593822906LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MAX;
	volatile int8_t x87 = -5;
	int64_t x88 = -1LL;
	volatile int32_t t15 = -447618102;

    t15 = ((x85*x86)^(x87==x88));

    if (t15 != -4161536) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = 148089050U;
	int32_t x91 = -100387;
	uint16_t x92 = 7U;
	uint32_t t16 = 5U;

    t16 = ((x89*x90)^(x91==x92));

    if (t16 != 3402969382U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = -1;
	int32_t t17 = -5858;

    t17 = ((x93*x94)^(x95==x96));

    if (t17 != 1251352) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x98 = -5;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -1;
	uint64_t t18 = 131686812462LLU;

    t18 = ((x97*x98)^(x99==x100));

    if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	static volatile int32_t t19 = -24838;

    t19 = ((x101*x102)^(x103==x104));

    if (t19 != -255) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = INT16_MAX;
	uint16_t x110 = 1U;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t20 = -182938;

    t20 = ((x109*x110)^(x111==x112));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x113 = INT64_MAX;
	static uint8_t x115 = 4U;
	volatile int8_t x116 = INT8_MIN;
	volatile int64_t t21 = -70924532LL;

    t21 = ((x113*x114)^(x115==x116));

    if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x121 = 2U;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 1U;
	int8_t x124 = -3;
	volatile uint32_t t22 = 7873514U;

    t22 = ((x121*x122)^(x123==x124));

    if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x125 = 181LLU;
	static uint64_t x126 = UINT64_MAX;
	static uint64_t x127 = UINT64_MAX;
	uint64_t t23 = 431208123LLU;

    t23 = ((x125*x126)^(x127==x128));

    if (t23 != 18446744073709551435LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x129 = 1643019126U;
	uint32_t x130 = 96817U;
	static int8_t x131 = 0;
	uint32_t x132 = 263142370U;
	static volatile uint32_t t24 = 3U;

    t24 = ((x129*x130)^(x131==x132));

    if (t24 != 3773947286U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x133 = 48650LLU;
	uint16_t x134 = 1257U;
	int16_t x135 = -125;
	int32_t x136 = 525907218;
	volatile uint64_t t25 = 2LLU;

    t25 = ((x133*x134)^(x135==x136));

    if (t25 != 61153050LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x138 = INT8_MAX;
	volatile int32_t x139 = INT32_MIN;
	static uint8_t x140 = 3U;
	volatile int64_t t26 = 11596995730942990LL;

    t26 = ((x137*x138)^(x139==x140));

    if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = UINT16_MAX;
	static uint64_t x142 = 7770593189LLU;
	static int64_t x144 = INT64_MIN;
	uint64_t t27 = 1436623900LLU;

    t27 = ((x141*x142)^(x143==x144));

    if (t27 != 509245824641115LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x149 = 17141852U;
	static int8_t x150 = -1;
	static volatile int8_t x151 = -1;
	static int32_t x152 = INT32_MIN;
	uint32_t t28 = 7100U;

    t28 = ((x149*x150)^(x151==x152));

    if (t28 != 4277825444U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x154 = -1;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t29 = -254966519;

    t29 = ((x153*x154)^(x155==x156));

    if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x157 = UINT8_MAX;
	uint64_t x158 = 6LLU;
	int16_t x159 = -1;
	static volatile uint64_t t30 = 5346399738LLU;

    t30 = ((x157*x158)^(x159==x160));

    if (t30 != 1530LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x161 = -5;
	int8_t x163 = -1;
	int32_t t31 = 72;

    t31 = ((x161*x162)^(x163==x164));

    if (t31 != -145) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = 63;
	int32_t x166 = 87043;
	int8_t x167 = INT8_MIN;
	volatile int32_t t32 = -8201020;

    t32 = ((x165*x166)^(x167==x168));

    if (t32 != 5483709) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = 21U;
	static uint64_t x170 = 865815178795LLU;
	int16_t x171 = -1;
	int64_t x172 = INT64_MIN;
	static volatile uint64_t t33 = 33341765LLU;

    t33 = ((x169*x170)^(x171==x172));

    if (t33 != 18182118754695LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x173 = 61U;
	static int8_t x174 = 18;
	static int32_t x175 = 1429;
	int64_t x176 = -1LL;
	static volatile int32_t t34 = 0;

    t34 = ((x173*x174)^(x175==x176));

    if (t34 != 1098) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x181 = 404;
	uint16_t x182 = 11491U;
	int8_t x184 = 0;
	int32_t t35 = -100;

    t35 = ((x181*x182)^(x183==x184));

    if (t35 != 4642364) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x185 = 141;
	int8_t x186 = 39;
	volatile int16_t x188 = INT16_MIN;

    t36 = ((x185*x186)^(x187==x188));

    if (t36 != 5499) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x190 = 236549LLU;
	int32_t x192 = -1;
	volatile uint64_t t37 = 48465372808490LLU;

    t37 = ((x189*x190)^(x191==x192));

    if (t37 != 709646LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x193 = UINT8_MAX;
	int8_t x194 = 0;
	int64_t x195 = -28282797309834163LL;
	int16_t x196 = -2;
	volatile int32_t t38 = 385418197;

    t38 = ((x193*x194)^(x195==x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x201 = 102U;
	uint64_t x202 = 188LLU;
	volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MAX;

    t39 = ((x201*x202)^(x203==x204));

    if (t39 != 19176LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x205 = 19;
	int32_t x206 = -15278462;
	int16_t x207 = INT16_MIN;
	static volatile uint8_t x208 = 6U;
	int32_t t40 = -497518313;

    t40 = ((x205*x206)^(x207==x208));

    if (t40 != -290290778) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x213 = 1U;
	int32_t x214 = -15574333;
	static volatile uint8_t x215 = UINT8_MAX;
	static volatile int32_t t41 = -727529;

    t41 = ((x213*x214)^(x215==x216));

    if (t41 != -15574333) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x218 = 7U;
	int16_t x220 = INT16_MAX;
	int32_t t42 = 186;

    t42 = ((x217*x218)^(x219==x220));

    if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x241 = INT8_MAX;
	int8_t x244 = INT8_MIN;
	volatile int32_t t43 = 561664;

    t43 = ((x241*x242)^(x243==x244));

    if (t43 != 16129) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = INT64_MAX;
	int32_t t44 = -330773572;

    t44 = ((x245*x246)^(x247==x248));

    if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x249 = 62093U;
	static uint64_t x250 = 2416593LLU;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	uint64_t t45 = 256311214LLU;

    t45 = ((x249*x250)^(x251==x252));

    if (t45 != 150053509149LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	static int64_t x256 = INT64_MIN;
	static int32_t t46 = -108;

    t46 = ((x253*x254)^(x255==x256));

    if (t46 != -4161535) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x257 = -253;
	volatile int32_t x258 = -1;
	volatile int16_t x260 = 0;

    t47 = ((x257*x258)^(x259==x260));

    if (t47 != 253) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x261 = 282062309U;
	int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	static volatile uint32_t t48 = 165U;

    t48 = ((x261*x262)^(x263==x264));

    if (t48 != 2147483649U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = -1;
	static int64_t x266 = -1LL;
	volatile int8_t x267 = 1;
	uint64_t x268 = UINT64_MAX;
	int64_t t49 = -315623116055LL;

    t49 = ((x265*x266)^(x267==x268));

    if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x270 = INT8_MAX;
	uint16_t x272 = 1691U;
	int32_t t50 = 0;

    t50 = ((x269*x270)^(x271==x272));

    if (t50 != -4161536) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x273 = -312722LL;
	uint32_t x274 = 12553877U;
	volatile int8_t x276 = INT8_MIN;
	volatile int64_t t51 = 37528494LL;

    t51 = ((x273*x274)^(x275==x276));

    if (t51 != -3925873523194LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x277 = 13U;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = 22U;
	int32_t t52 = 355;

    t52 = ((x277*x278)^(x279==x280));

    if (t52 != -1664) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x281 = -34266LL;
	int32_t x282 = INT32_MIN;
	uint16_t x283 = 92U;
	static int32_t x284 = 218;
	int64_t t53 = 30053LL;

    t53 = ((x281*x282)^(x283==x284));

    if (t53 != 73585674682368LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x285 = -1;
	static uint32_t x287 = UINT32_MAX;
	int32_t x288 = -13611352;

    t54 = ((x285*x286)^(x287==x288));

    if (t54 != 8090) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x289 = UINT8_MAX;
	static volatile uint64_t x290 = UINT64_MAX;
	int64_t x291 = 22052663189LL;
	uint64_t t55 = 2405196654396LLU;

    t55 = ((x289*x290)^(x291==x292));

    if (t55 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x293 = 132316LLU;
	int32_t x294 = -100;
	int32_t x295 = INT32_MIN;
	int16_t x296 = -1068;

    t56 = ((x293*x294)^(x295==x296));

    if (t56 != 18446744073696320016LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x297 = 1635517U;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = INT16_MIN;
	int32_t x300 = INT32_MAX;
	static volatile uint64_t t57 = 1LLU;

    t57 = ((x297*x298)^(x299==x300));

    if (t57 != 18446744073707916099LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 328979245U;
	uint32_t x303 = 69699189U;
	volatile int64_t x304 = -11LL;
	volatile uint64_t t58 = 42826635LLU;

    t58 = ((x301*x302)^(x303==x304));

    if (t58 != 18446744073380572371LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x305 = 8;
	int64_t x307 = -1LL;
	static uint16_t x308 = 1U;

    t59 = ((x305*x306)^(x307==x308));

    if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	uint64_t t60 = 533023503753448473LLU;

    t60 = ((x309*x310)^(x311==x312));

    if (t60 != 18446742994911024191LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x313 = 7432U;
	uint32_t x314 = 4159619U;
	uint64_t x315 = 95912657980688858LLU;
	int8_t x316 = -1;
	uint32_t t61 = 3947U;

    t61 = ((x313*x314)^(x315==x316));

    if (t61 != 849517336U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x317 = INT8_MAX;
	int8_t x318 = 0;
	int16_t x319 = INT16_MAX;
	static int32_t x320 = -1;
	volatile int32_t t62 = -2;

    t62 = ((x317*x318)^(x319==x320));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = 0;
	int8_t x323 = INT8_MIN;

    t63 = ((x321*x322)^(x323==x324));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x325 = 18796U;
	volatile int64_t x326 = 2LL;
	static int32_t x327 = INT32_MIN;
	volatile int32_t x328 = -55;
	static int64_t t64 = -33701282789LL;

    t64 = ((x325*x326)^(x327==x328));

    if (t64 != 37592LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x333 = INT16_MIN;
	static int8_t x334 = -1;
	volatile int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t65 = -655;

    t65 = ((x333*x334)^(x335==x336));

    if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x338 = 1560237677321LL;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t x340 = INT32_MIN;
	volatile int64_t t66 = -82551LL;

    t66 = ((x337*x338)^(x339==x340));

    if (t66 != -199710422697088LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x345 = 1;
	int16_t x346 = -1;
	volatile uint32_t x347 = 4111114U;
	static uint8_t x348 = 7U;
	volatile int32_t t67 = -1236293;

    t67 = ((x345*x346)^(x347==x348));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = 0;
	uint8_t x352 = UINT8_MAX;
	volatile uint64_t t68 = 472693326165198LLU;

    t68 = ((x349*x350)^(x351==x352));

    if (t68 != 32768LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x353 = 42280921688LL;
	static int64_t x354 = -1LL;
	uint8_t x355 = UINT8_MAX;
	int64_t t69 = 8370142LL;

    t69 = ((x353*x354)^(x355==x356));

    if (t69 != -42280921688LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x358 = -15;
	uint8_t x359 = 1U;
	volatile int64_t x360 = INT64_MAX;
	int32_t t70 = 421;

    t70 = ((x357*x358)^(x359==x360));

    if (t70 != 795) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x361 = 7160142U;
	int16_t x362 = -700;
	uint8_t x363 = 0U;
	static int32_t x364 = 92;
	static volatile uint32_t t71 = 2268U;

    t71 = ((x361*x362)^(x363==x364));

    if (t71 != 3577835192U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x365 = -1;
	int32_t x366 = INT32_MAX;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t72 = -75997;

    t72 = ((x365*x366)^(x367==x368));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x369 = 156U;
	uint32_t x370 = UINT32_MAX;
	uint32_t x371 = 7428846U;
	uint64_t x372 = UINT64_MAX;
	uint32_t t73 = 1517U;

    t73 = ((x369*x370)^(x371==x372));

    if (t73 != 4294967140U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = INT8_MAX;
	volatile int16_t x374 = 0;
	int8_t x375 = INT8_MIN;
	volatile int32_t t74 = -42;

    t74 = ((x373*x374)^(x375==x376));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x381 = -1;
	int32_t x383 = INT32_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t75 = INT32_MIN;

    t75 = ((x381*x382)^(x383==x384));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = -1;
	volatile int8_t x387 = INT8_MIN;
	int32_t t76 = -58;

    t76 = ((x385*x386)^(x387==x388));

    if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x397 = INT16_MIN;
	uint16_t x398 = 6715U;
	int32_t x399 = INT32_MIN;
	static int16_t x400 = -1;
	int32_t t77 = 15;

    t77 = ((x397*x398)^(x399==x400));

    if (t77 != -220037120) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x401 = 75U;
	volatile int32_t x402 = -100;
	int8_t x404 = 15;
	int32_t t78 = -181948;

    t78 = ((x401*x402)^(x403==x404));

    if (t78 != -7500) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x405 = -1LL;
	int16_t x406 = INT16_MIN;
	uint16_t x408 = 3U;
	volatile int64_t t79 = 33006912LL;

    t79 = ((x405*x406)^(x407==x408));

    if (t79 != 32768LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x409 = UINT8_MAX;
	int64_t x411 = INT64_MIN;
	volatile int32_t t80 = -302465;

    t80 = ((x409*x410)^(x411==x412));

    if (t80 != -521730) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x413 = 0U;
	volatile int64_t x414 = -6725232442275991LL;
	int32_t x415 = -1;
	static int16_t x416 = INT16_MIN;

    t81 = ((x413*x414)^(x415==x416));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x417 = 3390391U;
	int16_t x418 = INT16_MIN;
	static volatile int16_t x419 = 313;
	int32_t x420 = -1;
	volatile uint32_t t82 = 20999U;

    t82 = ((x417*x418)^(x419==x420));

    if (t82 != 572817408U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x421 = -1;
	int8_t x422 = -6;
	static uint16_t x423 = UINT16_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t83 = 145;

    t83 = ((x421*x422)^(x423==x424));

    if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x429 = INT64_MIN;
	uint64_t x430 = 0LLU;
	static int8_t x431 = 1;
	uint32_t x432 = UINT32_MAX;
	volatile uint64_t t84 = 14504642727389582LLU;

    t84 = ((x429*x430)^(x431==x432));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x433 = 230U;
	int16_t x434 = INT16_MIN;
	static int32_t x435 = 0;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t85 = 27;

    t85 = ((x433*x434)^(x435==x436));

    if (t85 != -7536640) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x437 = 439889LLU;
	uint16_t x438 = 0U;
	volatile uint32_t x440 = 2U;

    t86 = ((x437*x438)^(x439==x440));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x441 = 30149631222LL;
	uint64_t x442 = 203LLU;
	volatile int8_t x443 = -4;
	static volatile int8_t x444 = -1;

    t87 = ((x441*x442)^(x443==x444));

    if (t87 != 6120375138066LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x448 = INT8_MIN;
	volatile int32_t t88 = 28;

    t88 = ((x445*x446)^(x447==x448));

    if (t88 != -10668) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x453 = 126LLU;
	int32_t x454 = INT32_MAX;
	int8_t x455 = INT8_MIN;
	int8_t x456 = 1;

    t89 = ((x453*x454)^(x455==x456));

    if (t89 != 270582939522LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x457 = INT16_MIN;
	int64_t x458 = -1LL;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	volatile int64_t t90 = 806378363531LL;

    t90 = ((x457*x458)^(x459==x460));

    if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint64_t x462 = UINT64_MAX;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = 3376263120660680178LLU;
	volatile uint64_t t91 = 45LLU;

    t91 = ((x461*x462)^(x463==x464));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x466 = 0U;
	volatile int16_t x468 = -13462;

    t92 = ((x465*x466)^(x467==x468));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x477 = 379250LL;
	static int8_t x478 = -1;
	int64_t x479 = INT64_MAX;
	static volatile uint8_t x480 = 31U;
	volatile int64_t t93 = -1559395971LL;

    t93 = ((x477*x478)^(x479==x480));

    if (t93 != -379250LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x481 = UINT32_MAX;
	int32_t x482 = -1;
	static volatile int8_t x483 = INT8_MIN;
	int64_t x484 = -356124476LL;
	volatile uint32_t t94 = 38319226U;

    t94 = ((x481*x482)^(x483==x484));

    if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x489 = UINT64_MAX;
	uint8_t x490 = 5U;
	int8_t x491 = INT8_MAX;
	int16_t x492 = 9;

    t95 = ((x489*x490)^(x491==x492));

    if (t95 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x493 = 0;
	uint64_t x494 = 1429907726904LLU;
	static int16_t x496 = 11094;
	uint64_t t96 = 933790688069380277LLU;

    t96 = ((x493*x494)^(x495==x496));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x497 = INT32_MIN;
	static volatile int64_t x498 = 154250LL;
	static volatile uint8_t x499 = 12U;
	int16_t x500 = INT16_MAX;
	volatile int64_t t97 = -5324336315993130LL;

    t97 = ((x497*x498)^(x499==x500));

    if (t97 != -331249352704000LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x501 = -1385;
	static int8_t x502 = INT8_MAX;
	uint32_t x503 = 319622U;
	uint16_t x504 = 2U;
	volatile int32_t t98 = -21186999;

    t98 = ((x501*x502)^(x503==x504));

    if (t98 != -175895) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x505 = 45U;
	volatile uint16_t x506 = 1433U;
	int8_t x507 = -18;
	static uint64_t x508 = 130625167490891610LLU;
	int32_t t99 = 6910;

    t99 = ((x505*x506)^(x507==x508));

    if (t99 != 64485) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x509 = INT8_MIN;
	uint32_t x510 = 9791U;
	static uint64_t x511 = 7277LLU;
	volatile uint32_t t100 = 408U;

    t100 = ((x509*x510)^(x511==x512));

    if (t100 != 4293714048U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x513 = -1;
	uint32_t x516 = 618640370U;
	volatile int32_t t101 = 116236601;

    t101 = ((x513*x514)^(x515==x516));

    if (t101 != 128) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x518 = INT64_MAX;
	int8_t x519 = -12;
	static int64_t x520 = INT64_MAX;

    t102 = ((x517*x518)^(x519==x520));

    if (t102 != 18446584691258894662LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x521 = 7U;
	static volatile int32_t x522 = 48287;
	static int32_t x523 = -2210;
	int8_t x524 = 17;
	static int32_t t103 = 1426;

    t103 = ((x521*x522)^(x523==x524));

    if (t103 != 338009) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x541 = INT32_MAX;
	int16_t x542 = -1;
	volatile uint8_t x543 = 12U;
	volatile int32_t t104 = -14;

    t104 = ((x541*x542)^(x543==x544));

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x553 = 63337U;
	static volatile int32_t x554 = -8233;
	int16_t x555 = INT16_MIN;
	int32_t x556 = -1;
	uint32_t t105 = 30U;

    t105 = ((x553*x554)^(x555==x556));

    if (t105 != 3773513775U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x557 = -7268;
	int64_t x558 = 52560144944LL;
	static int64_t x560 = -1923290596167773857LL;
	static volatile int64_t t106 = -22309531LL;

    t106 = ((x557*x558)^(x559==x560));

    if (t106 != -382007133452992LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x565 = -2484LL;
	static uint32_t x566 = 3905U;
	uint64_t x568 = 5297954405LLU;

    t107 = ((x565*x566)^(x567==x568));

    if (t107 != -9700020LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x573 = INT8_MIN;
	static uint8_t x576 = UINT8_MAX;
	static int32_t t108 = -5100;

    t108 = ((x573*x574)^(x575==x576));

    if (t108 != 16384) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x581 = -214218697LL;
	static int8_t x582 = INT8_MAX;
	int32_t x583 = INT32_MIN;
	static int32_t x584 = INT32_MIN;
	volatile int64_t t109 = 121820547515110669LL;

    t109 = ((x581*x582)^(x583==x584));

    if (t109 != -27205774520LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x593 = 227198034LLU;
	volatile uint16_t x594 = 108U;

    t110 = ((x593*x594)^(x595==x596));

    if (t110 != 24537387672LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x606 = 35U;
	volatile int8_t x607 = 29;
	static int8_t x608 = INT8_MIN;
	volatile int64_t t111 = -78285861LL;

    t111 = ((x605*x606)^(x607==x608));

    if (t111 != -1225957763344790LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint16_t x610 = UINT16_MAX;
	volatile uint64_t x611 = 73074707389LLU;
	uint32_t x612 = 4658U;
	int32_t t112 = 1;

    t112 = ((x609*x610)^(x611==x612));

    if (t112 != -2147450880) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x613 = -1;
	int8_t x614 = INT8_MIN;
	volatile uint64_t x615 = 38806171409631053LLU;
	int16_t x616 = -37;

    t113 = ((x613*x614)^(x615==x616));

    if (t113 != 128) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x617 = 6U;
	volatile int16_t x619 = INT16_MIN;
	int8_t x620 = 26;
	volatile uint32_t t114 = 7046U;

    t114 = ((x617*x618)^(x619==x620));

    if (t114 != 4294967290U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x621 = 33760742230079633LLU;
	static uint32_t x623 = 35U;
	int32_t x624 = INT32_MIN;
	volatile uint64_t t115 = 329332668484569LLU;

    t115 = ((x621*x622)^(x623==x624));

    if (t115 != 6305680878668728175LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x627 = 1;
	int64_t x628 = INT64_MIN;
	volatile int32_t t116 = -2432680;

    t116 = ((x625*x626)^(x627==x628));

    if (t116 != -3) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x629 = UINT64_MAX;
	volatile uint32_t x630 = 395662322U;
	static uint8_t x631 = UINT8_MAX;
	int32_t x632 = INT32_MIN;

    t117 = ((x629*x630)^(x631==x632));

    if (t117 != 18446744073313889294LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x641 = 506;
	int32_t x644 = INT32_MIN;
	static int32_t t118 = 31589;

    t118 = ((x641*x642)^(x643==x644));

    if (t118 != 129031) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x646 = INT32_MAX;
	int64_t x647 = 261194LL;
	uint16_t x648 = UINT16_MAX;
	uint64_t t119 = 227LLU;

    t119 = ((x645*x646)^(x647==x648));

    if (t119 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x657 = INT16_MAX;
	uint8_t x658 = UINT8_MAX;
	int16_t x659 = -1;
	static int32_t x660 = 1;

    t120 = ((x657*x658)^(x659==x660));

    if (t120 != 8355585) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x661 = 0;
	static int64_t x662 = INT64_MIN;
	uint8_t x663 = UINT8_MAX;
	int64_t x664 = INT64_MIN;
	volatile int64_t t121 = -1413713LL;

    t121 = ((x661*x662)^(x663==x664));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x665 = UINT16_MAX;
	int8_t x666 = INT8_MIN;
	volatile uint8_t x667 = 0U;
	static uint8_t x668 = 15U;

    t122 = ((x665*x666)^(x667==x668));

    if (t122 != -8388480) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x669 = -14;
	uint8_t x670 = UINT8_MAX;
	static int16_t x672 = INT16_MIN;
	static volatile int32_t t123 = 508053331;

    t123 = ((x669*x670)^(x671==x672));

    if (t123 != -3570) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x673 = 18173559392LLU;
	volatile int8_t x674 = -1;
	volatile uint8_t x676 = 56U;

    t124 = ((x673*x674)^(x675==x676));

    if (t124 != 18446744055535992224LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x677 = 2U;
	int8_t x678 = INT8_MAX;
	volatile int8_t x679 = INT8_MAX;
	int32_t x680 = -1;
	int32_t t125 = 47027;

    t125 = ((x677*x678)^(x679==x680));

    if (t125 != 254) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x681 = 25U;
	volatile int64_t x682 = -1LL;
	volatile int64_t t126 = 1138827364500LL;

    t126 = ((x681*x682)^(x683==x684));

    if (t126 != -25LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x685 = UINT32_MAX;
	int32_t x686 = 3621;
	uint32_t t127 = 27U;

    t127 = ((x685*x686)^(x687==x688));

    if (t127 != 4294963674U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x705 = 0LL;
	static int64_t x706 = INT64_MIN;
	int64_t x708 = INT64_MIN;
	static volatile int64_t t128 = -6LL;

    t128 = ((x705*x706)^(x707==x708));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x709 = 1012160U;
	int16_t x710 = -1637;
	uint64_t x711 = 30284354492270LLU;
	uint8_t x712 = 2U;
	static uint32_t t129 = 938378481U;

    t129 = ((x709*x710)^(x711==x712));

    if (t129 != 2638061376U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x713 = 1257930U;
	int64_t x714 = 0LL;
	int16_t x715 = -1;
	int16_t x716 = INT16_MIN;
	static int64_t t130 = -43LL;

    t130 = ((x713*x714)^(x715==x716));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x717 = UINT8_MAX;
	uint64_t x718 = UINT64_MAX;
	static int16_t x719 = 216;
	volatile uint16_t x720 = 148U;
	static volatile uint64_t t131 = 592214LLU;

    t131 = ((x717*x718)^(x719==x720));

    if (t131 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x721 = UINT64_MAX;
	uint64_t x722 = UINT64_MAX;
	uint64_t x724 = UINT64_MAX;
	volatile uint64_t t132 = 15255783760LLU;

    t132 = ((x721*x722)^(x723==x724));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x729 = 0;
	static int8_t x730 = 0;
	uint64_t x731 = 5521340436618030LLU;
	int64_t x732 = INT64_MIN;
	volatile int32_t t133 = -215;

    t133 = ((x729*x730)^(x731==x732));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x733 = 0;
	int16_t x736 = INT16_MAX;
	int32_t t134 = -14421179;

    t134 = ((x733*x734)^(x735==x736));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x737 = -6218606098134LL;
	static uint8_t x738 = 118U;
	static volatile uint32_t x739 = 1U;
	static uint8_t x740 = UINT8_MAX;
	volatile int64_t t135 = -7135487LL;

    t135 = ((x737*x738)^(x739==x740));

    if (t135 != -733795519579812LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x741 = -45302;
	int16_t x742 = INT16_MAX;
	int32_t x743 = INT32_MIN;
	int8_t x744 = 1;
	static int32_t t136 = 1;

    t136 = ((x741*x742)^(x743==x744));

    if (t136 != -1484410634) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x745 = UINT32_MAX;
	int32_t x746 = 111770;
	volatile uint32_t t137 = 83377U;

    t137 = ((x745*x746)^(x747==x748));

    if (t137 != 4294855526U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x753 = 127U;
	volatile uint64_t x754 = 1231325LLU;
	static int8_t x755 = -1;
	static int32_t x756 = INT32_MIN;

    t138 = ((x753*x754)^(x755==x756));

    if (t138 != 156378275LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x765 = -1LL;
	uint16_t x766 = 2U;
	int32_t x767 = -1;
	volatile int8_t x768 = 21;
	int64_t t139 = 9863852529LL;

    t139 = ((x765*x766)^(x767==x768));

    if (t139 != -2LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x769 = INT8_MIN;
	int16_t x770 = 28;
	uint8_t x772 = UINT8_MAX;
	static volatile int32_t t140 = 76;

    t140 = ((x769*x770)^(x771==x772));

    if (t140 != -3584) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x773 = INT8_MIN;
	uint64_t x774 = 787008375LLU;
	int8_t x776 = 0;
	uint64_t t141 = 3496363425LLU;

    t141 = ((x773*x774)^(x775==x776));

    if (t141 != 18446743972972479616LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x777 = INT8_MAX;
	volatile uint32_t x779 = UINT32_MAX;
	uint64_t x780 = 3641900LLU;
	int32_t t142 = -309101754;

    t142 = ((x777*x778)^(x779==x780));

    if (t142 != -16256) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x781 = UINT32_MAX;
	static uint32_t x782 = 1267U;
	uint32_t x783 = 386033U;
	volatile uint32_t t143 = 5295645U;

    t143 = ((x781*x782)^(x783==x784));

    if (t143 != 4294966029U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x789 = UINT16_MAX;
	uint64_t x792 = 14484807903LLU;
	volatile uint32_t t144 = 56343U;

    t144 = ((x789*x790)^(x791==x792));

    if (t144 != 846712194U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x793 = 9;
	int8_t x794 = -1;
	uint64_t x795 = 57887574724597907LLU;
	volatile int8_t x796 = -1;

    t145 = ((x793*x794)^(x795==x796));

    if (t145 != -9) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x797 = UINT32_MAX;
	uint16_t x798 = 17832U;
	static int64_t x799 = INT64_MIN;
	uint32_t x800 = UINT32_MAX;
	volatile uint32_t t146 = 5U;

    t146 = ((x797*x798)^(x799==x800));

    if (t146 != 4294949464U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x817 = INT16_MIN;
	uint8_t x818 = UINT8_MAX;
	int64_t x819 = INT64_MIN;
	static volatile int16_t x820 = INT16_MIN;

    t147 = ((x817*x818)^(x819==x820));

    if (t147 != -8355840) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x821 = INT16_MIN;
	uint64_t x822 = UINT64_MAX;
	static volatile int32_t x823 = INT32_MIN;
	int32_t x824 = INT32_MIN;

    t148 = ((x821*x822)^(x823==x824));

    if (t148 != 32769LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x825 = 2344538;
	volatile uint8_t x826 = UINT8_MAX;
	volatile uint64_t x827 = UINT64_MAX;
	volatile int32_t t149 = 1;

    t149 = ((x825*x826)^(x827==x828));

    if (t149 != 597857190) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MAX;
	static volatile int32_t x839 = INT32_MIN;
	int32_t x840 = INT32_MAX;
	int32_t t150 = 29;

    t150 = ((x837*x838)^(x839==x840));

    if (t150 != -4194176) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x841 = 3;
	volatile int16_t x842 = INT16_MAX;
	int32_t x843 = 1;
	uint8_t x844 = 84U;
	int32_t t151 = 0;

    t151 = ((x841*x842)^(x843==x844));

    if (t151 != 98301) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x849 = 28126U;
	volatile int8_t x851 = INT8_MIN;
	int64_t x852 = INT64_MIN;

    t152 = ((x849*x850)^(x851==x852));

    if (t152 != 843780) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x854 = 0;
	uint8_t x855 = 0U;
	int16_t x856 = -1;
	volatile int32_t t153 = -3622869;

    t153 = ((x853*x854)^(x855==x856));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x858 = UINT32_MAX;
	int64_t x859 = INT64_MAX;
	static uint16_t x860 = UINT16_MAX;
	static volatile uint32_t t154 = 2079715U;

    t154 = ((x857*x858)^(x859==x860));

    if (t154 != 2147483648U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x866 = 2206372686106179LLU;
	int64_t x867 = INT64_MIN;
	int64_t x868 = -1LL;
	volatile uint64_t t155 = 10236949631LLU;

    t155 = ((x865*x866)^(x867==x868));

    if (t155 != 11757164405676990162LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x869 = UINT64_MAX;
	int64_t x870 = INT64_MIN;
	uint8_t x872 = UINT8_MAX;
	uint64_t t156 = 9994139742709LLU;

    t156 = ((x869*x870)^(x871==x872));

    if (t156 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x873 = 127U;
	int8_t x874 = INT8_MAX;
	static uint8_t x875 = 59U;
	int8_t x876 = INT8_MIN;
	static volatile int32_t t157 = -159735;

    t157 = ((x873*x874)^(x875==x876));

    if (t157 != 16129) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x877 = -1;
	int16_t x878 = -1;
	int16_t x879 = -1;
	volatile int32_t t158 = 206;

    t158 = ((x877*x878)^(x879==x880));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x881 = UINT8_MAX;
	volatile uint16_t x882 = 3U;
	int16_t x883 = 1;
	int64_t x884 = INT64_MAX;
	static volatile int32_t t159 = -1755656;

    t159 = ((x881*x882)^(x883==x884));

    if (t159 != 765) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x885 = 1U;
	volatile uint8_t x886 = UINT8_MAX;
	int16_t x887 = INT16_MIN;
	int64_t x888 = -176LL;
	uint32_t t160 = 9591U;

    t160 = ((x885*x886)^(x887==x888));

    if (t160 != 255U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x889 = INT8_MAX;
	static volatile int32_t x890 = -1;
	int8_t x891 = INT8_MAX;
	int16_t x892 = INT16_MAX;
	static volatile int32_t t161 = -16;

    t161 = ((x889*x890)^(x891==x892));

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x893 = INT32_MAX;
	int16_t x894 = 0;
	static int32_t x895 = -14489;
	int32_t t162 = -14445671;

    t162 = ((x893*x894)^(x895==x896));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x897 = 205170355588300LLU;
	int8_t x898 = -1;
	volatile uint8_t x899 = UINT8_MAX;
	int8_t x900 = 1;
	volatile uint64_t t163 = 25079LLU;

    t163 = ((x897*x898)^(x899==x900));

    if (t163 != 18446538903353963316LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x901 = -4;
	volatile int16_t x902 = INT16_MIN;
	uint16_t x903 = 31U;
	static int32_t x904 = INT32_MIN;
	int32_t t164 = -1;

    t164 = ((x901*x902)^(x903==x904));

    if (t164 != 131072) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x906 = INT16_MAX;
	volatile int8_t x907 = 2;
	uint64_t x908 = UINT64_MAX;

    t165 = ((x905*x906)^(x907==x908));

    if (t165 != 3342234) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x919 = 0U;
	int16_t x920 = INT16_MIN;
	int32_t t166 = -971537;

    t166 = ((x917*x918)^(x919==x920));

    if (t166 != -1152) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x921 = -220LL;
	int32_t x922 = INT32_MIN;
	int16_t x923 = -163;

    t167 = ((x921*x922)^(x923==x924));

    if (t167 != 472446402560LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x925 = -1;
	uint32_t x926 = 2061144109U;
	volatile int64_t x927 = INT64_MIN;
	int32_t x928 = INT32_MAX;
	static volatile uint32_t t168 = 21569U;

    t168 = ((x925*x926)^(x927==x928));

    if (t168 != 2233823187U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x929 = 5U;
	uint32_t x930 = UINT32_MAX;
	volatile int8_t x931 = -1;
	int8_t x932 = INT8_MIN;
	volatile uint32_t t169 = 407890521U;

    t169 = ((x929*x930)^(x931==x932));

    if (t169 != 4294967291U) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x933 = 37U;
	uint16_t x934 = UINT16_MAX;
	volatile uint8_t x935 = 15U;
	uint8_t x936 = 8U;

    t170 = ((x933*x934)^(x935==x936));

    if (t170 != 2424795) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x937 = INT16_MIN;
	int64_t x939 = INT64_MIN;
	static volatile int32_t t171 = -289909;

    t171 = ((x937*x938)^(x939==x940));

    if (t171 != -98304) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x941 = 0;
	volatile uint8_t x943 = 1U;
	volatile int32_t t172 = -538;

    t172 = ((x941*x942)^(x943==x944));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x945 = 5864285859205LLU;
	static uint64_t x946 = 3916540LLU;
	uint16_t x947 = UINT16_MAX;
	volatile uint64_t t173 = 810060276025944LLU;

    t173 = ((x945*x946)^(x947==x948));

    if (t173 != 4520966065301199084LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x949 = 19;
	int16_t x950 = 7;
	int64_t x951 = INT64_MIN;
	uint8_t x952 = 3U;

    t174 = ((x949*x950)^(x951==x952));

    if (t174 != 133) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x953 = 11401U;
	int8_t x954 = 3;
	volatile int8_t x955 = INT8_MIN;
	uint16_t x956 = 826U;
	static volatile uint32_t t175 = 211622U;

    t175 = ((x953*x954)^(x955==x956));

    if (t175 != 34203U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x957 = UINT32_MAX;
	uint8_t x958 = 1U;
	uint64_t x960 = 68921747LLU;

    t176 = ((x957*x958)^(x959==x960));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x963 = INT64_MIN;
	int64_t x964 = INT64_MIN;
	int32_t t177 = 4;

    t177 = ((x961*x962)^(x963==x964));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x965 = INT8_MIN;
	int16_t x966 = 14789;
	volatile uint16_t x967 = 874U;
	volatile int32_t t178 = 0;

    t178 = ((x965*x966)^(x967==x968));

    if (t178 != -1892992) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x973 = -1;
	int32_t t179 = 3110;

    t179 = ((x973*x974)^(x975==x976));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x977 = 208U;
	uint64_t x978 = 105888715433LLU;
	volatile uint32_t x980 = 1517837669U;
	volatile uint64_t t180 = 1613LLU;

    t180 = ((x977*x978)^(x979==x980));

    if (t180 != 22024852810064LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x981 = -1;
	int32_t x982 = INT32_MAX;
	uint16_t x983 = 60U;

    t181 = ((x981*x982)^(x983==x984));

    if (t181 != -2147483647) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x986 = INT8_MAX;
	int32_t x987 = INT32_MIN;
	int32_t t182 = -16421;

    t182 = ((x985*x986)^(x987==x988));

    if (t182 != 29845) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x993 = 3312LLU;
	int64_t x994 = -15LL;
	static int32_t x995 = INT32_MAX;
	int32_t x996 = INT32_MAX;

    t183 = ((x993*x994)^(x995==x996));

    if (t183 != 18446744073709501937LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x997 = -1;
	int16_t x998 = -1;
	static int32_t x999 = INT32_MIN;
	int32_t x1000 = INT32_MIN;
	volatile int32_t t184 = 0;

    t184 = ((x997*x998)^(x999==x1000));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1001 = 18;
	uint64_t x1002 = 24755807977LLU;
	uint64_t x1003 = 9813841862200LLU;
	int64_t x1004 = INT64_MIN;
	volatile uint64_t t185 = 6LLU;

    t185 = ((x1001*x1002)^(x1003==x1004));

    if (t185 != 445604543586LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1005 = UINT64_MAX;
	uint32_t x1006 = 27U;
	uint64_t x1007 = 151LLU;
	int8_t x1008 = -1;
	static volatile uint64_t t186 = 573925147LLU;

    t186 = ((x1005*x1006)^(x1007==x1008));

    if (t186 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1009 = -1;
	uint8_t x1010 = 3U;
	static int16_t x1011 = INT16_MAX;
	static uint64_t x1012 = 1LLU;
	volatile int32_t t187 = -656;

    t187 = ((x1009*x1010)^(x1011==x1012));

    if (t187 != -3) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1013 = 5U;
	uint8_t x1014 = UINT8_MAX;
	int8_t x1015 = INT8_MIN;
	volatile int8_t x1016 = -15;
	int32_t t188 = -44264335;

    t188 = ((x1013*x1014)^(x1015==x1016));

    if (t188 != 1275) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1019 = 369521U;
	int8_t x1020 = INT8_MAX;
	int64_t t189 = 12555086LL;

    t189 = ((x1017*x1018)^(x1019==x1020));

    if (t189 != -44LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1026 = INT64_MIN;
	uint64_t x1027 = 4785139149157LLU;
	uint64_t t190 = 1160651LLU;

    t190 = ((x1025*x1026)^(x1027==x1028));

    if (t190 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1029 = -1;
	int32_t x1030 = -1;
	volatile uint8_t x1031 = 21U;
	int64_t x1032 = INT64_MIN;

    t191 = ((x1029*x1030)^(x1031==x1032));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1033 = UINT16_MAX;
	int8_t x1034 = INT8_MAX;
	static int64_t x1035 = -1LL;
	uint16_t x1036 = 1472U;
	volatile int32_t t192 = -341;

    t192 = ((x1033*x1034)^(x1035==x1036));

    if (t192 != 8322945) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1037 = 211LLU;
	uint32_t x1038 = 2656U;
	int16_t x1039 = -1;
	int8_t x1040 = INT8_MIN;

    t193 = ((x1037*x1038)^(x1039==x1040));

    if (t193 != 560416LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1041 = 59U;
	int8_t x1042 = -1;
	int64_t x1043 = -1LL;
	volatile int32_t t194 = -6572953;

    t194 = ((x1041*x1042)^(x1043==x1044));

    if (t194 != -59) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1045 = UINT8_MAX;
	volatile uint8_t x1046 = 4U;
	int8_t x1048 = -1;

    t195 = ((x1045*x1046)^(x1047==x1048));

    if (t195 != 1021) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1053 = 1541U;
	static int8_t x1054 = INT8_MIN;
	static int8_t x1055 = INT8_MAX;
	int8_t x1056 = INT8_MIN;
	int32_t t196 = -716956;

    t196 = ((x1053*x1054)^(x1055==x1056));

    if (t196 != -197248) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1061 = 383136LLU;
	volatile int32_t x1062 = 1;
	uint64_t x1064 = 200LLU;
	static volatile uint64_t t197 = 1386LLU;

    t197 = ((x1061*x1062)^(x1063==x1064));

    if (t197 != 383136LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1065 = 258382046841299LL;
	static uint8_t x1066 = 94U;
	int16_t x1067 = -277;
	volatile int16_t x1068 = -824;
	int64_t t198 = -322LL;

    t198 = ((x1065*x1066)^(x1067==x1068));

    if (t198 != 24287912403082106LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1069 = INT8_MIN;
	static uint64_t x1070 = UINT64_MAX;
	uint32_t x1071 = 1933091U;
	static int16_t x1072 = INT16_MAX;
	uint64_t t199 = 13651737185LLU;

    t199 = ((x1069*x1070)^(x1071==x1072));

    if (t199 != 128LLU) { NG(); } else { ; }
	
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

