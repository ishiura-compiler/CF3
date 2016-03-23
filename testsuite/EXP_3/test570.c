
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

static uint8_t x3 = 0U;
volatile int8_t x6 = -6;
int16_t x7 = INT16_MIN;
int32_t t1 = 174896;
int64_t x10 = -4911601426339408LL;
uint16_t x27 = 31483U;
int32_t x31 = INT32_MAX;
volatile int32_t t5 = 159;
int32_t x38 = 2928;
uint32_t x44 = UINT32_MAX;
static int32_t x50 = INT32_MIN;
uint8_t x53 = 6U;
volatile int32_t t10 = -7409457;
static volatile int32_t t11 = -19129203;
int32_t x77 = INT32_MIN;
uint16_t x80 = UINT16_MAX;
static int8_t x84 = INT8_MIN;
static int32_t t15 = -32836954;
int32_t x85 = -170430338;
static int16_t x92 = -3132;
volatile int32_t t20 = -848;
int64_t x112 = -1LL;
uint16_t x123 = 2U;
uint64_t x130 = 35626036921LLU;
uint16_t x143 = 7411U;
volatile int8_t x155 = 0;
volatile int8_t x163 = 5;
int8_t x177 = INT8_MAX;
volatile int8_t x178 = -30;
volatile int64_t x184 = 1964837964463LL;
volatile int32_t t35 = -50;
int32_t x185 = INT32_MIN;
int16_t x233 = -4;
uint16_t x234 = 42U;
static int32_t x235 = INT32_MIN;
static volatile uint8_t x237 = 8U;
uint32_t x238 = UINT32_MAX;
volatile uint32_t x241 = 86U;
uint8_t x244 = UINT8_MAX;
uint64_t x250 = UINT64_MAX;
volatile uint32_t x252 = 746563738U;
int32_t t48 = -624930207;
volatile uint16_t x275 = 0U;
static int8_t x276 = INT8_MIN;
static int16_t x287 = INT16_MAX;
int32_t t54 = -7235786;
uint32_t x309 = UINT32_MAX;
int16_t x337 = INT16_MAX;
int32_t t61 = -1;
static uint64_t x348 = 280844097580LLU;
volatile uint8_t x360 = 11U;
int32_t t65 = 62771;
volatile int32_t t66 = -2086;
volatile uint64_t x367 = 13476189LLU;
uint32_t x370 = UINT32_MAX;
uint16_t x375 = 17708U;
int16_t x383 = -1;
int16_t x395 = INT16_MIN;
uint8_t x400 = 28U;
static int32_t t74 = 25;
static int16_t x405 = INT16_MIN;
static volatile uint16_t x406 = 354U;
int32_t t76 = 116416;
volatile uint8_t x414 = 1U;
int32_t t77 = -99;
volatile int8_t x418 = INT8_MIN;
int16_t x419 = INT16_MIN;
volatile int64_t x421 = INT64_MAX;
int8_t x423 = -19;
static volatile int32_t t79 = -54;
uint32_t x444 = 2413U;
static volatile uint8_t x445 = 6U;
int16_t x472 = -37;
static volatile int32_t t88 = 0;
int32_t x484 = -941852708;
int32_t t89 = 2092972;
uint64_t x507 = 45943799LLU;
int16_t x519 = -1;
int8_t x530 = INT8_MIN;
volatile int16_t x535 = INT16_MAX;
volatile uint32_t x544 = 92423U;
int8_t x569 = INT8_MIN;
int32_t x570 = INT32_MIN;
static int16_t x572 = -1;
int16_t x573 = INT16_MIN;
volatile uint8_t x575 = 1U;
int32_t t106 = -1956579;
int16_t x583 = INT16_MIN;
volatile int32_t t107 = 1943419;
int64_t x593 = -1LL;
int32_t x603 = 2;
int8_t x606 = 3;
volatile int32_t x608 = -1;
uint16_t x609 = 1947U;
int8_t x611 = INT8_MAX;
uint64_t x614 = 3484505686284LLU;
int32_t t114 = 244;
static int8_t x637 = -59;
static uint16_t x655 = 89U;
int8_t x656 = INT8_MIN;
uint16_t x660 = 106U;
uint16_t x661 = 15671U;
uint16_t x663 = 2U;
uint32_t x670 = UINT32_MAX;
int8_t x675 = INT8_MIN;
int16_t x682 = INT16_MIN;
static int64_t x689 = -687658LL;
uint16_t x700 = 338U;
int8_t x702 = INT8_MAX;
static int32_t t128 = 529802;
static uint32_t x706 = 988605U;
volatile int32_t t129 = -62693458;
uint8_t x725 = 22U;
int64_t x732 = -1LL;
volatile int32_t t134 = -18322457;
int8_t x735 = -1;
volatile int8_t x736 = INT8_MAX;
static uint16_t x741 = UINT16_MAX;
volatile int32_t t136 = 9693024;
int16_t x752 = -1;
static int32_t x754 = -1;
volatile int8_t x764 = INT8_MIN;
int8_t x770 = INT8_MAX;
int32_t x773 = INT32_MAX;
uint8_t x786 = 11U;
uint32_t x787 = UINT32_MAX;
volatile int32_t t144 = -243;
int32_t x789 = INT32_MIN;
static int32_t x792 = INT32_MIN;
uint32_t x796 = 16213U;
int32_t t147 = 1370;
uint8_t x829 = 0U;
static int8_t x832 = -4;
int16_t x833 = -1;
static volatile int16_t x843 = 1;
int64_t x845 = 1LL;
int32_t t154 = 2642893;
int32_t x850 = INT32_MIN;
uint32_t x852 = 11870381U;
int32_t t157 = 1059409019;
volatile uint64_t x875 = 2838LLU;
int32_t t161 = 0;
volatile int8_t x891 = INT8_MAX;
int16_t x904 = INT16_MIN;
volatile int32_t t165 = 1095;
static int16_t x909 = 2358;
uint16_t x910 = 54U;
volatile int16_t x918 = INT16_MIN;
int32_t t168 = -15;
static volatile int64_t x931 = -16596431LL;
int16_t x946 = INT16_MIN;
static int8_t x951 = INT8_MIN;
int64_t x954 = 41347LL;
uint16_t x965 = 290U;
uint8_t x967 = 2U;
int32_t t182 = 50044009;
uint32_t x998 = UINT32_MAX;
volatile int16_t x1000 = INT16_MIN;
uint32_t x1006 = UINT32_MAX;
int16_t x1023 = 282;
int8_t x1050 = 1;
int16_t x1064 = INT16_MIN;
int16_t x1067 = INT16_MAX;
static volatile int32_t x1068 = 89;
static int16_t x1074 = 649;
volatile int16_t x1075 = 5783;


void f0(void) {
    	int32_t x1 = -48695;
	static int64_t x2 = 61660654926499725LL;
	static uint32_t x4 = 380892931U;
	static volatile int32_t t0 = 22;

    t0 = ((x1|x2)<=(x3*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 27884669;
	int64_t x8 = -1LL;

    t1 = ((x5|x6)<=(x7*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 7U;
	int64_t x11 = 29304533992658278LL;
	int64_t x12 = -56LL;
	static volatile int32_t t2 = 124920;

    t2 = ((x9|x10)<=(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x21 = 1061532U;
	int32_t x22 = -1;
	static uint8_t x23 = UINT8_MAX;
	static int8_t x24 = INT8_MIN;
	int32_t t3 = 591806;

    t3 = ((x21|x22)<=(x23*x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = INT64_MIN;
	static uint16_t x26 = 2376U;
	uint16_t x28 = 1U;
	int32_t t4 = 84591729;

    t4 = ((x25|x26)<=(x27*x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MAX;
	uint64_t x32 = 3LLU;

    t5 = ((x29|x30)<=(x31*x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x37 = 1U;
	static int8_t x39 = 2;
	uint8_t x40 = 0U;
	volatile int32_t t6 = 1;

    t6 = ((x37|x38)<=(x39*x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = INT32_MAX;
	int64_t x42 = -6291562LL;
	int8_t x43 = INT8_MIN;
	int32_t t7 = 6;

    t7 = ((x41|x42)<=(x43*x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = -1;
	uint32_t x51 = UINT32_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t8 = -182143873;

    t8 = ((x49|x50)<=(x51*x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x54 = INT64_MAX;
	uint32_t x55 = UINT32_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t9 = -4;

    t9 = ((x53|x54)<=(x55*x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x57 = UINT32_MAX;
	static uint8_t x58 = 1U;
	uint32_t x59 = 1081U;
	static int8_t x60 = INT8_MIN;

    t10 = ((x57|x58)<=(x59*x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = INT16_MIN;
	uint16_t x62 = 61U;
	uint16_t x63 = 7146U;
	int16_t x64 = -31;

    t11 = ((x61|x62)<=(x63*x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x65 = 1289281272380268960LLU;
	static int64_t x66 = 15LL;
	int8_t x67 = INT8_MAX;
	static int8_t x68 = -11;
	volatile int32_t t12 = 66585;

    t12 = ((x65|x66)<=(x67*x68));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = INT16_MIN;
	static uint16_t x70 = 1U;
	volatile int32_t x71 = INT32_MIN;
	int64_t x72 = 33345008LL;
	static int32_t t13 = -249179;

    t13 = ((x69|x70)<=(x71*x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x78 = -9;
	uint64_t x79 = 338LLU;
	static volatile int32_t t14 = 51176157;

    t14 = ((x77|x78)<=(x79*x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = -11;
	int32_t x82 = 15979;
	int8_t x83 = INT8_MAX;

    t15 = ((x81|x82)<=(x83*x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	int8_t x88 = -1;
	volatile int32_t t16 = -90;

    t16 = ((x85|x86)<=(x87*x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x89 = INT32_MAX;
	int32_t x90 = -1;
	int16_t x91 = -1;
	int32_t t17 = -8;

    t17 = ((x89|x90)<=(x91*x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = 2060317766030LLU;
	volatile uint32_t x94 = 7582809U;
	uint64_t x95 = UINT64_MAX;
	volatile int16_t x96 = INT16_MIN;
	int32_t t18 = 1346719;

    t18 = ((x93|x94)<=(x95*x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x101 = INT64_MIN;
	volatile uint64_t x102 = 87444LLU;
	volatile int16_t x103 = INT16_MAX;
	uint32_t x104 = 2829282U;
	int32_t t19 = 23076076;

    t19 = ((x101|x102)<=(x103*x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint32_t x107 = 739U;
	int16_t x108 = INT16_MIN;

    t20 = ((x105|x106)<=(x107*x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = 17024650155LLU;
	int8_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	static volatile int32_t t21 = -29198253;

    t21 = ((x109|x110)<=(x111*x112));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x113 = INT64_MIN;
	static int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;
	volatile int32_t t22 = 45122;

    t22 = ((x113|x114)<=(x115*x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x117 = 3U;
	int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	static int64_t x120 = 67201348763878LL;
	volatile int32_t t23 = 185;

    t23 = ((x117|x118)<=(x119*x120));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x121 = -2202170218422802716LL;
	int8_t x122 = INT8_MIN;
	uint8_t x124 = 48U;
	volatile int32_t t24 = 37;

    t24 = ((x121|x122)<=(x123*x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = 6LLU;
	uint16_t x126 = 6022U;
	static volatile uint64_t x127 = 1483658642623LLU;
	int64_t x128 = -730LL;
	int32_t t25 = 2275;

    t25 = ((x125|x126)<=(x127*x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x129 = INT32_MIN;
	static int64_t x131 = -104022750989228LL;
	uint8_t x132 = 1U;
	int32_t t26 = 35865;

    t26 = ((x129|x130)<=(x131*x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x137 = 115LL;
	uint64_t x138 = 431757LLU;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 40U;
	int32_t t27 = -4;

    t27 = ((x137|x138)<=(x139*x140));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x141 = 11U;
	uint16_t x142 = 2U;
	uint8_t x144 = 20U;
	volatile int32_t t28 = 481050;

    t28 = ((x141|x142)<=(x143*x144));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x145 = INT8_MIN;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = -1LL;
	volatile uint32_t x148 = 24522612U;
	volatile int32_t t29 = 195334;

    t29 = ((x145|x146)<=(x147*x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x153 = 1457U;
	uint16_t x154 = 6U;
	static int16_t x156 = INT16_MAX;
	int32_t t30 = 1;

    t30 = ((x153|x154)<=(x155*x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x157 = INT8_MIN;
	static uint16_t x158 = 861U;
	int32_t x159 = -1;
	int32_t x160 = -1;
	int32_t t31 = 1639689;

    t31 = ((x157|x158)<=(x159*x160));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x161 = 20154830928LLU;
	int64_t x162 = INT64_MAX;
	int8_t x164 = -1;
	static volatile int32_t t32 = 194;

    t32 = ((x161|x162)<=(x163*x164));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x173 = -1;
	int8_t x174 = -1;
	static uint32_t x175 = 575796244U;
	static uint16_t x176 = 1U;
	static int32_t t33 = 639;

    t33 = ((x173|x174)<=(x175*x176));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t34 = 6;

    t34 = ((x177|x178)<=(x179*x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 2133U;
	volatile uint64_t x183 = 1292642241387LLU;

    t35 = ((x181|x182)<=(x183*x184));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x186 = 14U;
	volatile uint64_t x187 = UINT64_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t36 = -55;

    t36 = ((x185|x186)<=(x187*x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x193 = 96;
	int16_t x194 = INT16_MIN;
	uint64_t x195 = 64752145643939814LLU;
	int32_t x196 = INT32_MAX;
	static int32_t t37 = 65512;

    t37 = ((x193|x194)<=(x195*x196));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x197 = 15552057LLU;
	volatile int8_t x198 = INT8_MAX;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t38 = 3;

    t38 = ((x197|x198)<=(x199*x200));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x201 = UINT64_MAX;
	static int64_t x202 = -48707292363LL;
	volatile uint64_t x203 = 23778186331710LLU;
	uint32_t x204 = 104467U;
	int32_t t39 = 121;

    t39 = ((x201|x202)<=(x203*x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x207 = -1;
	int32_t x208 = -14882528;
	int32_t t40 = -382;

    t40 = ((x205|x206)<=(x207*x208));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x209 = -1;
	int16_t x210 = 6;
	int8_t x211 = -1;
	uint64_t x212 = 78LLU;
	volatile int32_t t41 = 681056546;

    t41 = ((x209|x210)<=(x211*x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = INT16_MIN;
	static uint8_t x222 = 1U;
	static int64_t x223 = -1LL;
	int16_t x224 = INT16_MAX;
	static volatile int32_t t42 = -1312296;

    t42 = ((x221|x222)<=(x223*x224));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x229 = -2762;
	int64_t x230 = 29374748528LL;
	volatile int32_t x231 = INT32_MAX;
	static uint32_t x232 = UINT32_MAX;
	volatile int32_t t43 = 29;

    t43 = ((x229|x230)<=(x231*x232));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x236 = -1LL;
	volatile int32_t t44 = -9675523;

    t44 = ((x233|x234)<=(x235*x236));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x239 = INT16_MIN;
	uint32_t x240 = 25U;
	volatile int32_t t45 = -153471;

    t45 = ((x237|x238)<=(x239*x240));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x242 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	int32_t t46 = 5077;

    t46 = ((x241|x242)<=(x243*x244));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x245 = UINT32_MAX;
	volatile uint8_t x246 = 18U;
	int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t47 = -9140;

    t47 = ((x245|x246)<=(x247*x248));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x249 = 3U;
	int32_t x251 = INT32_MIN;

    t48 = ((x249|x250)<=(x251*x252));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x253 = -1494574071810606607LL;
	int32_t x254 = -1;
	uint32_t x255 = 10984U;
	uint8_t x256 = 1U;
	static volatile int32_t t49 = -42771;

    t49 = ((x253|x254)<=(x255*x256));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	uint16_t x266 = 107U;
	static int8_t x267 = INT8_MIN;
	static int32_t x268 = -65;
	volatile int32_t t50 = 292357278;

    t50 = ((x265|x266)<=(x267*x268));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x269 = INT64_MAX;
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 14U;
	uint64_t x272 = 8752736784399410584LLU;
	static volatile int32_t t51 = 1;

    t51 = ((x269|x270)<=(x271*x272));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x273 = UINT32_MAX;
	int8_t x274 = INT8_MIN;
	int32_t t52 = -473;

    t52 = ((x273|x274)<=(x275*x276));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	static volatile int32_t x288 = 7040;
	int32_t t53 = -16163885;

    t53 = ((x285|x286)<=(x287*x288));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x293 = 889U;
	int32_t x294 = INT32_MIN;
	uint8_t x295 = 102U;
	int8_t x296 = INT8_MAX;

    t54 = ((x293|x294)<=(x295*x296));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 351LLU;
	static volatile int32_t x300 = INT32_MIN;
	int32_t t55 = 89196468;

    t55 = ((x297|x298)<=(x299*x300));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x301 = INT16_MIN;
	uint8_t x302 = UINT8_MAX;
	static int64_t x303 = INT64_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t56 = -187744;

    t56 = ((x301|x302)<=(x303*x304));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x305 = UINT8_MAX;
	uint64_t x306 = 3074462017861216383LLU;
	int16_t x307 = -1;
	int64_t x308 = 28851340839100LL;
	volatile int32_t t57 = -7;

    t57 = ((x305|x306)<=(x307*x308));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x310 = 284U;
	int8_t x311 = INT8_MIN;
	volatile uint32_t x312 = 17U;
	int32_t t58 = 176;

    t58 = ((x309|x310)<=(x311*x312));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	volatile uint64_t x315 = 181252488LLU;
	volatile int8_t x316 = INT8_MAX;
	int32_t t59 = -332;

    t59 = ((x313|x314)<=(x315*x316));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x321 = 7;
	static int8_t x322 = INT8_MAX;
	static uint8_t x323 = 25U;
	int16_t x324 = INT16_MAX;
	int32_t t60 = 266568298;

    t60 = ((x321|x322)<=(x323*x324));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = UINT16_MAX;

    t61 = ((x337|x338)<=(x339*x340));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x345 = -14;
	uint32_t x346 = 50U;
	int64_t x347 = -242964895297011LL;
	volatile int32_t t62 = 640965;

    t62 = ((x345|x346)<=(x347*x348));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint32_t x349 = UINT32_MAX;
	int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t63 = 12;

    t63 = ((x349|x350)<=(x351*x352));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x353 = 16U;
	int64_t x354 = INT64_MIN;
	static uint16_t x355 = 7U;
	volatile int64_t x356 = -15146545404980LL;
	static volatile int32_t t64 = 74121354;

    t64 = ((x353|x354)<=(x355*x356));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x357 = -2262LL;
	volatile int8_t x358 = 2;
	int8_t x359 = -1;

    t65 = ((x357|x358)<=(x359*x360));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x361 = -1LL;
	volatile int16_t x362 = -1;
	int8_t x363 = 4;
	volatile uint32_t x364 = UINT32_MAX;

    t66 = ((x361|x362)<=(x363*x364));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MAX;
	volatile uint32_t x368 = 208U;
	volatile int32_t t67 = 664721901;

    t67 = ((x365|x366)<=(x367*x368));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x369 = 28LLU;
	static uint8_t x371 = 6U;
	static uint8_t x372 = 1U;
	int32_t t68 = -2273;

    t68 = ((x369|x370)<=(x371*x372));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x373 = UINT64_MAX;
	static int8_t x374 = INT8_MIN;
	uint64_t x376 = UINT64_MAX;
	int32_t t69 = -57855;

    t69 = ((x373|x374)<=(x375*x376));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x377 = 12045217357041090LL;
	int64_t x378 = INT64_MAX;
	static uint16_t x379 = UINT16_MAX;
	static volatile int16_t x380 = 107;
	volatile int32_t t70 = -11704270;

    t70 = ((x377|x378)<=(x379*x380));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x381 = -1LL;
	int64_t x382 = INT64_MAX;
	uint32_t x384 = 154U;
	int32_t t71 = -162394;

    t71 = ((x381|x382)<=(x383*x384));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x385 = -26;
	int64_t x386 = 12819403079303LL;
	volatile int16_t x387 = 15;
	int16_t x388 = 1;
	volatile int32_t t72 = 993714278;

    t72 = ((x385|x386)<=(x387*x388));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x393 = INT16_MIN;
	uint8_t x394 = 15U;
	int8_t x396 = INT8_MIN;
	int32_t t73 = -380355;

    t73 = ((x393|x394)<=(x395*x396));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x397 = 633815LLU;
	uint16_t x398 = 12U;
	int16_t x399 = INT16_MAX;

    t74 = ((x397|x398)<=(x399*x400));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x407 = INT8_MAX;
	static volatile int16_t x408 = 3;
	volatile int32_t t75 = -57;

    t75 = ((x405|x406)<=(x407*x408));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x409 = 935081403772398170LLU;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = -21259717LL;
	int64_t x412 = 285LL;

    t76 = ((x409|x410)<=(x411*x412));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x413 = INT16_MIN;
	uint64_t x415 = 136976147620807395LLU;
	volatile int64_t x416 = -89243077599067635LL;

    t77 = ((x413|x414)<=(x415*x416));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x417 = UINT8_MAX;
	static uint64_t x420 = UINT64_MAX;
	static volatile int32_t t78 = -81036188;

    t78 = ((x417|x418)<=(x419*x420));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x422 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;

    t79 = ((x421|x422)<=(x423*x424));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x433 = -224;
	int16_t x434 = INT16_MIN;
	static uint16_t x435 = 875U;
	uint64_t x436 = 3352697LLU;
	static volatile int32_t t80 = -20;

    t80 = ((x433|x434)<=(x435*x436));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x441 = -4989LL;
	int8_t x442 = 0;
	int16_t x443 = -1;
	volatile int32_t t81 = 519187627;

    t81 = ((x441|x442)<=(x443*x444));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x446 = INT16_MIN;
	uint8_t x447 = UINT8_MAX;
	static uint32_t x448 = UINT32_MAX;
	volatile int32_t t82 = -39501;

    t82 = ((x445|x446)<=(x447*x448));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x457 = 29884LLU;
	int64_t x458 = INT64_MIN;
	uint32_t x459 = 481U;
	uint32_t x460 = UINT32_MAX;
	int32_t t83 = -1;

    t83 = ((x457|x458)<=(x459*x460));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = -13603;
	static volatile uint32_t x463 = 2057689712U;
	volatile uint64_t x464 = 122229114LLU;
	int32_t t84 = -40131495;

    t84 = ((x461|x462)<=(x463*x464));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x465 = INT16_MIN;
	static int16_t x466 = 12;
	uint32_t x467 = 6U;
	int8_t x468 = 0;
	volatile int32_t t85 = -50772302;

    t85 = ((x465|x466)<=(x467*x468));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x469 = INT32_MIN;
	uint8_t x470 = 0U;
	int8_t x471 = -1;
	int32_t t86 = -1;

    t86 = ((x469|x470)<=(x471*x472));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x473 = 35298886370457LL;
	int16_t x474 = INT16_MIN;
	volatile uint64_t x475 = UINT64_MAX;
	int64_t x476 = INT64_MIN;
	int32_t t87 = 45882;

    t87 = ((x473|x474)<=(x475*x476));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x477 = 2098U;
	volatile int16_t x478 = INT16_MAX;
	volatile int8_t x479 = 28;
	int16_t x480 = INT16_MIN;

    t88 = ((x477|x478)<=(x479*x480));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x481 = 1U;
	static int64_t x482 = INT64_MIN;
	static int8_t x483 = -1;

    t89 = ((x481|x482)<=(x483*x484));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x485 = 130U;
	volatile uint64_t x486 = UINT64_MAX;
	int16_t x487 = -5023;
	int16_t x488 = -1;
	static volatile int32_t t90 = 35998456;

    t90 = ((x485|x486)<=(x487*x488));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x489 = INT64_MIN;
	uint8_t x490 = 2U;
	uint8_t x491 = 5U;
	static int8_t x492 = INT8_MIN;
	int32_t t91 = -14417460;

    t91 = ((x489|x490)<=(x491*x492));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x493 = 48;
	int8_t x494 = INT8_MAX;
	int32_t x495 = -3051431;
	static int16_t x496 = -1;
	int32_t t92 = -1914011;

    t92 = ((x493|x494)<=(x495*x496));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = INT8_MAX;
	int64_t x503 = 3668635656378132LL;
	volatile int8_t x504 = INT8_MIN;
	int32_t t93 = 6283605;

    t93 = ((x501|x502)<=(x503*x504));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x505 = 795026LL;
	int16_t x506 = -1;
	volatile int64_t x508 = -1LL;
	int32_t t94 = 2895;

    t94 = ((x505|x506)<=(x507*x508));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x513 = -1;
	volatile int32_t x514 = -24;
	int8_t x515 = INT8_MAX;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t95 = 4;

    t95 = ((x513|x514)<=(x515*x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x517 = 46;
	int64_t x518 = 13351082322648138LL;
	int8_t x520 = INT8_MIN;
	int32_t t96 = -24320120;

    t96 = ((x517|x518)<=(x519*x520));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x521 = UINT8_MAX;
	static uint16_t x522 = UINT16_MAX;
	uint64_t x523 = UINT64_MAX;
	int64_t x524 = -829922LL;
	volatile int32_t t97 = 100010;

    t97 = ((x521|x522)<=(x523*x524));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x529 = 946593;
	int32_t x531 = 1864;
	uint64_t x532 = 65269278LLU;
	int32_t t98 = 1;

    t98 = ((x529|x530)<=(x531*x532));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x533 = 23U;
	int16_t x534 = INT16_MAX;
	int16_t x536 = 95;
	static volatile int32_t t99 = -200054;

    t99 = ((x533|x534)<=(x535*x536));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int32_t x542 = -2818;
	int32_t x543 = INT32_MIN;
	volatile int32_t t100 = 0;

    t100 = ((x541|x542)<=(x543*x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x545 = 325799787087LL;
	static int64_t x546 = -1LL;
	volatile int16_t x547 = INT16_MIN;
	static int32_t x548 = 42;
	volatile int32_t t101 = -188733;

    t101 = ((x545|x546)<=(x547*x548));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x557 = INT8_MIN;
	uint64_t x558 = 33414872975094162LLU;
	uint32_t x559 = 385087640U;
	volatile uint32_t x560 = UINT32_MAX;
	volatile int32_t t102 = 7133640;

    t102 = ((x557|x558)<=(x559*x560));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x561 = INT16_MAX;
	volatile uint8_t x562 = UINT8_MAX;
	uint16_t x563 = 4U;
	int32_t x564 = -95727;
	int32_t t103 = -1558;

    t103 = ((x561|x562)<=(x563*x564));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x571 = 2949624642944336843LLU;
	int32_t t104 = -165982268;

    t104 = ((x569|x570)<=(x571*x572));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x574 = -11;
	static uint16_t x576 = 5695U;
	volatile int32_t t105 = -1;

    t105 = ((x573|x574)<=(x575*x576));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x577 = INT32_MAX;
	static int16_t x578 = INT16_MIN;
	static volatile int64_t x579 = INT64_MIN;
	static uint64_t x580 = 56LLU;

    t106 = ((x577|x578)<=(x579*x580));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x581 = 1381454459042779676LL;
	uint32_t x582 = 4002080U;
	uint64_t x584 = 176025924006233857LLU;

    t107 = ((x581|x582)<=(x583*x584));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x589 = INT8_MIN;
	int64_t x590 = -31LL;
	int8_t x591 = -1;
	static volatile int16_t x592 = -13008;
	volatile int32_t t108 = -15;

    t108 = ((x589|x590)<=(x591*x592));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x594 = INT16_MIN;
	int64_t x595 = INT64_MAX;
	int8_t x596 = -1;
	volatile int32_t t109 = -118317618;

    t109 = ((x593|x594)<=(x595*x596));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x601 = 3708;
	int64_t x602 = INT64_MIN;
	int16_t x604 = 255;
	static int32_t t110 = 0;

    t110 = ((x601|x602)<=(x603*x604));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x605 = -1;
	int16_t x607 = INT16_MIN;
	int32_t t111 = -563955043;

    t111 = ((x605|x606)<=(x607*x608));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x610 = 513628U;
	uint32_t x612 = 12545164U;
	int32_t t112 = 1123405;

    t112 = ((x609|x610)<=(x611*x612));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x613 = INT16_MIN;
	int16_t x615 = INT16_MIN;
	int8_t x616 = INT8_MAX;
	static volatile int32_t t113 = -17870;

    t113 = ((x613|x614)<=(x615*x616));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x617 = INT8_MAX;
	uint16_t x618 = 285U;
	volatile uint32_t x619 = 111143925U;
	uint32_t x620 = UINT32_MAX;

    t114 = ((x617|x618)<=(x619*x620));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x629 = INT8_MAX;
	volatile int16_t x630 = 15194;
	volatile int64_t x631 = 18090LL;
	static int8_t x632 = INT8_MIN;
	int32_t t115 = -130987707;

    t115 = ((x629|x630)<=(x631*x632));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x638 = INT8_MIN;
	int16_t x639 = -11;
	volatile int32_t x640 = 2;
	int32_t t116 = 75;

    t116 = ((x637|x638)<=(x639*x640));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x645 = 1124914LLU;
	int8_t x646 = -1;
	static volatile int64_t x647 = -1LL;
	int32_t x648 = INT32_MAX;
	static volatile int32_t t117 = -2967;

    t117 = ((x645|x646)<=(x647*x648));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x649 = 27173605U;
	volatile int8_t x650 = INT8_MIN;
	int8_t x651 = -1;
	uint64_t x652 = UINT64_MAX;
	volatile int32_t t118 = -1884304;

    t118 = ((x649|x650)<=(x651*x652));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x653 = INT8_MAX;
	volatile int64_t x654 = INT64_MAX;
	static volatile int32_t t119 = -1016;

    t119 = ((x653|x654)<=(x655*x656));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x657 = 18047;
	static int32_t x658 = INT32_MIN;
	static volatile uint8_t x659 = 9U;
	static volatile int32_t t120 = 24;

    t120 = ((x657|x658)<=(x659*x660));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x662 = INT8_MIN;
	int8_t x664 = INT8_MAX;
	volatile int32_t t121 = 5235746;

    t121 = ((x661|x662)<=(x663*x664));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x669 = -1;
	int64_t x671 = INT64_MAX;
	int8_t x672 = 0;
	int32_t t122 = -4;

    t122 = ((x669|x670)<=(x671*x672));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x673 = INT32_MAX;
	volatile uint16_t x674 = UINT16_MAX;
	int8_t x676 = -1;
	static volatile int32_t t123 = 1;

    t123 = ((x673|x674)<=(x675*x676));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x681 = 15U;
	int32_t x683 = -1;
	uint32_t x684 = UINT32_MAX;
	int32_t t124 = 168454019;

    t124 = ((x681|x682)<=(x683*x684));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x690 = -1;
	int32_t x691 = 41903980;
	volatile uint32_t x692 = 53327821U;
	volatile int32_t t125 = -6;

    t125 = ((x689|x690)<=(x691*x692));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x693 = INT16_MAX;
	int64_t x694 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	int64_t x696 = 12182LL;
	volatile int32_t t126 = -156662239;

    t126 = ((x693|x694)<=(x695*x696));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x697 = -1;
	int16_t x698 = INT16_MAX;
	static uint8_t x699 = UINT8_MAX;
	int32_t t127 = 37047944;

    t127 = ((x697|x698)<=(x699*x700));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x701 = INT64_MIN;
	static int16_t x703 = 8;
	volatile int8_t x704 = INT8_MIN;

    t128 = ((x701|x702)<=(x703*x704));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x705 = INT64_MIN;
	int8_t x707 = INT8_MAX;
	int16_t x708 = -1;

    t129 = ((x705|x706)<=(x707*x708));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x709 = INT64_MAX;
	static uint16_t x710 = 2U;
	uint8_t x711 = UINT8_MAX;
	int16_t x712 = INT16_MIN;
	volatile int32_t t130 = 58745;

    t130 = ((x709|x710)<=(x711*x712));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x713 = -7503950982507236LL;
	uint8_t x714 = UINT8_MAX;
	int64_t x715 = 8620413LL;
	static int32_t x716 = -64300352;
	int32_t t131 = -1;

    t131 = ((x713|x714)<=(x715*x716));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x717 = INT8_MIN;
	int64_t x718 = 99264846LL;
	volatile int8_t x719 = -1;
	volatile int16_t x720 = INT16_MAX;
	int32_t t132 = 21;

    t132 = ((x717|x718)<=(x719*x720));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x726 = 29267188659970639LLU;
	int8_t x727 = INT8_MIN;
	volatile int64_t x728 = -1LL;
	int32_t t133 = 1;

    t133 = ((x725|x726)<=(x727*x728));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x729 = INT8_MAX;
	int64_t x730 = INT64_MIN;
	static int16_t x731 = -15;

    t134 = ((x729|x730)<=(x731*x732));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x733 = 1253421U;
	int16_t x734 = INT16_MIN;
	volatile int32_t t135 = 1069;

    t135 = ((x733|x734)<=(x735*x736));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x742 = INT16_MIN;
	uint32_t x743 = 22700U;
	volatile uint16_t x744 = 155U;

    t136 = ((x741|x742)<=(x743*x744));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x745 = 6U;
	volatile uint16_t x746 = 22761U;
	static int32_t x747 = 2733;
	volatile int8_t x748 = 0;
	volatile int32_t t137 = -21151;

    t137 = ((x745|x746)<=(x747*x748));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x749 = 3U;
	static volatile int32_t x750 = INT32_MAX;
	int8_t x751 = -10;
	int32_t t138 = 50471913;

    t138 = ((x749|x750)<=(x751*x752));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x753 = INT64_MIN;
	uint32_t x755 = 24163742U;
	int32_t x756 = 2997200;
	int32_t t139 = 487089;

    t139 = ((x753|x754)<=(x755*x756));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x761 = 1U;
	int16_t x762 = INT16_MIN;
	static int8_t x763 = -1;
	static volatile int32_t t140 = -7;

    t140 = ((x761|x762)<=(x763*x764));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x769 = 24749U;
	int16_t x771 = INT16_MIN;
	uint16_t x772 = 7U;
	int32_t t141 = -52;

    t141 = ((x769|x770)<=(x771*x772));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x774 = -9;
	uint32_t x775 = 22676487U;
	static volatile uint8_t x776 = 9U;
	volatile int32_t t142 = 8532762;

    t142 = ((x773|x774)<=(x775*x776));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x781 = UINT16_MAX;
	int32_t x782 = INT32_MIN;
	uint32_t x783 = 13569U;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t143 = -11796;

    t143 = ((x781|x782)<=(x783*x784));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x785 = UINT64_MAX;
	int64_t x788 = -1LL;

    t144 = ((x785|x786)<=(x787*x788));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x790 = 80088;
	int64_t x791 = -268LL;
	volatile int32_t t145 = -23995498;

    t145 = ((x789|x790)<=(x791*x792));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x793 = -607948549345727497LL;
	volatile int16_t x794 = 1;
	volatile int32_t x795 = -1;
	int32_t t146 = 366210909;

    t146 = ((x793|x794)<=(x795*x796));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x797 = 1;
	static uint64_t x798 = UINT64_MAX;
	int16_t x799 = -1;
	int64_t x800 = -1LL;

    t147 = ((x797|x798)<=(x799*x800));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x805 = 15U;
	int64_t x806 = INT64_MAX;
	volatile int8_t x807 = INT8_MIN;
	uint32_t x808 = 711975667U;
	volatile int32_t t148 = -860701413;

    t148 = ((x805|x806)<=(x807*x808));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x813 = -1;
	int32_t x814 = 102699;
	int8_t x815 = INT8_MIN;
	static int8_t x816 = INT8_MIN;
	int32_t t149 = -343;

    t149 = ((x813|x814)<=(x815*x816));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x821 = -1;
	static int8_t x822 = -3;
	int8_t x823 = -1;
	uint32_t x824 = UINT32_MAX;
	static volatile int32_t t150 = -101572881;

    t150 = ((x821|x822)<=(x823*x824));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x830 = INT8_MIN;
	static uint8_t x831 = 94U;
	volatile int32_t t151 = -2498;

    t151 = ((x829|x830)<=(x831*x832));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x834 = INT64_MIN;
	int64_t x835 = -2273753941489LL;
	uint64_t x836 = 2625417LLU;
	int32_t t152 = 120918920;

    t152 = ((x833|x834)<=(x835*x836));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x841 = -1LL;
	static volatile int64_t x842 = INT64_MIN;
	uint8_t x844 = UINT8_MAX;
	int32_t t153 = 6422460;

    t153 = ((x841|x842)<=(x843*x844));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x846 = INT8_MIN;
	int8_t x847 = INT8_MIN;
	static uint8_t x848 = UINT8_MAX;

    t154 = ((x845|x846)<=(x847*x848));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x849 = 662;
	volatile int32_t x851 = -1;
	static volatile int32_t t155 = 4473283;

    t155 = ((x849|x850)<=(x851*x852));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x853 = 0;
	uint8_t x854 = UINT8_MAX;
	static int64_t x855 = 928LL;
	int8_t x856 = INT8_MIN;
	int32_t t156 = 415;

    t156 = ((x853|x854)<=(x855*x856));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x857 = 12;
	static uint32_t x858 = 44999U;
	int16_t x859 = INT16_MAX;
	uint16_t x860 = UINT16_MAX;

    t157 = ((x857|x858)<=(x859*x860));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x861 = INT8_MAX;
	int16_t x862 = INT16_MIN;
	static int16_t x863 = INT16_MIN;
	static uint32_t x864 = 53337U;
	volatile int32_t t158 = -57504726;

    t158 = ((x861|x862)<=(x863*x864));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x869 = -734;
	int64_t x870 = -1LL;
	volatile int16_t x871 = INT16_MAX;
	int8_t x872 = -1;
	int32_t t159 = -7;

    t159 = ((x869|x870)<=(x871*x872));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x873 = UINT32_MAX;
	volatile int32_t x874 = INT32_MIN;
	int64_t x876 = -1LL;
	int32_t t160 = 117227395;

    t160 = ((x873|x874)<=(x875*x876));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x881 = INT8_MAX;
	uint8_t x882 = 1U;
	static int16_t x883 = -55;
	volatile int64_t x884 = -1LL;

    t161 = ((x881|x882)<=(x883*x884));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x889 = INT8_MIN;
	volatile int64_t x890 = -1LL;
	int16_t x892 = INT16_MIN;
	static int32_t t162 = -171048;

    t162 = ((x889|x890)<=(x891*x892));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x893 = 2LLU;
	static volatile int64_t x894 = INT64_MAX;
	static volatile int8_t x895 = 9;
	int64_t x896 = -1LL;
	int32_t t163 = 7489317;

    t163 = ((x893|x894)<=(x895*x896));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x897 = INT8_MIN;
	int64_t x898 = -340LL;
	int64_t x899 = -1LL;
	uint8_t x900 = UINT8_MAX;
	int32_t t164 = -448;

    t164 = ((x897|x898)<=(x899*x900));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x901 = -1LL;
	int64_t x902 = -528LL;
	int8_t x903 = INT8_MIN;

    t165 = ((x901|x902)<=(x903*x904));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x911 = INT8_MIN;
	int8_t x912 = INT8_MIN;
	volatile int32_t t166 = 47757156;

    t166 = ((x909|x910)<=(x911*x912));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x917 = UINT32_MAX;
	static int32_t x919 = INT32_MIN;
	uint64_t x920 = UINT64_MAX;
	volatile int32_t t167 = -1;

    t167 = ((x917|x918)<=(x919*x920));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x921 = INT32_MIN;
	uint8_t x922 = 1U;
	volatile int8_t x923 = INT8_MAX;
	int8_t x924 = -1;

    t168 = ((x921|x922)<=(x923*x924));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x925 = INT8_MIN;
	volatile int8_t x926 = INT8_MIN;
	int8_t x927 = -10;
	static uint64_t x928 = UINT64_MAX;
	volatile int32_t t169 = 23;

    t169 = ((x925|x926)<=(x927*x928));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x929 = INT32_MAX;
	int16_t x930 = 0;
	volatile uint16_t x932 = 1U;
	volatile int32_t t170 = 7739;

    t170 = ((x929|x930)<=(x931*x932));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x933 = 6340U;
	int32_t x934 = INT32_MAX;
	static volatile int64_t x935 = -11504628034LL;
	int16_t x936 = INT16_MIN;
	volatile int32_t t171 = -1;

    t171 = ((x933|x934)<=(x935*x936));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x941 = -6;
	int16_t x942 = -1;
	int16_t x943 = -1;
	int64_t x944 = INT64_MAX;
	int32_t t172 = -278053;

    t172 = ((x941|x942)<=(x943*x944));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x945 = INT32_MIN;
	volatile uint64_t x947 = 972LLU;
	int16_t x948 = -23;
	volatile int32_t t173 = -1163422;

    t173 = ((x945|x946)<=(x947*x948));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x949 = UINT32_MAX;
	static int32_t x950 = -618;
	static volatile int32_t x952 = 18;
	int32_t t174 = -209504796;

    t174 = ((x949|x950)<=(x951*x952));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x953 = INT64_MIN;
	volatile int64_t x955 = INT64_MIN;
	uint64_t x956 = 258228955911038LLU;
	volatile int32_t t175 = -95066129;

    t175 = ((x953|x954)<=(x955*x956));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x961 = 33U;
	int16_t x962 = -1;
	static volatile int64_t x963 = 1732622LL;
	volatile int64_t x964 = -19020LL;
	int32_t t176 = 11026086;

    t176 = ((x961|x962)<=(x963*x964));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x966 = -10;
	uint32_t x968 = UINT32_MAX;
	int32_t t177 = 134743873;

    t177 = ((x965|x966)<=(x967*x968));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x973 = INT32_MAX;
	int16_t x974 = INT16_MIN;
	static int32_t x975 = 11909188;
	int64_t x976 = -1LL;
	volatile int32_t t178 = -59;

    t178 = ((x973|x974)<=(x975*x976));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x977 = INT16_MAX;
	static uint8_t x978 = UINT8_MAX;
	uint64_t x979 = UINT64_MAX;
	static volatile int8_t x980 = INT8_MAX;
	volatile int32_t t179 = 252578752;

    t179 = ((x977|x978)<=(x979*x980));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x981 = 389593230551305018LL;
	int8_t x982 = INT8_MIN;
	int16_t x983 = 41;
	static int8_t x984 = INT8_MIN;
	int32_t t180 = 33118029;

    t180 = ((x981|x982)<=(x983*x984));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x985 = 0;
	int8_t x986 = -1;
	int16_t x987 = -236;
	uint8_t x988 = 35U;
	volatile int32_t t181 = -943;

    t181 = ((x985|x986)<=(x987*x988));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x989 = INT32_MIN;
	int8_t x990 = INT8_MIN;
	uint8_t x991 = 44U;
	int32_t x992 = -1;

    t182 = ((x989|x990)<=(x991*x992));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x993 = 1U;
	int64_t x994 = -1LL;
	static uint32_t x995 = 1047488U;
	static volatile int8_t x996 = 4;
	int32_t t183 = -3;

    t183 = ((x993|x994)<=(x995*x996));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x997 = -4;
	volatile uint8_t x999 = UINT8_MAX;
	int32_t t184 = 212700389;

    t184 = ((x997|x998)<=(x999*x1000));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1005 = -1;
	static volatile uint32_t x1007 = UINT32_MAX;
	volatile int8_t x1008 = INT8_MIN;
	static volatile int32_t t185 = -1300;

    t185 = ((x1005|x1006)<=(x1007*x1008));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1013 = INT64_MIN;
	int64_t x1014 = INT64_MAX;
	volatile int64_t x1015 = -1LL;
	int16_t x1016 = -1;
	int32_t t186 = -381;

    t186 = ((x1013|x1014)<=(x1015*x1016));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1017 = 3183;
	int8_t x1018 = -1;
	int32_t x1019 = -44005517;
	uint64_t x1020 = 9407906741LLU;
	static int32_t t187 = -562076579;

    t187 = ((x1017|x1018)<=(x1019*x1020));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1021 = UINT8_MAX;
	static uint64_t x1022 = 224055149976791LLU;
	static uint8_t x1024 = 10U;
	int32_t t188 = 3476;

    t188 = ((x1021|x1022)<=(x1023*x1024));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1025 = 4755955964LL;
	int8_t x1026 = 0;
	int16_t x1027 = 117;
	uint16_t x1028 = 226U;
	volatile int32_t t189 = -30;

    t189 = ((x1025|x1026)<=(x1027*x1028));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1029 = -1;
	uint64_t x1030 = 6016434LLU;
	volatile int64_t x1031 = 31236144736312LL;
	int8_t x1032 = INT8_MIN;
	int32_t t190 = 0;

    t190 = ((x1029|x1030)<=(x1031*x1032));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1033 = 2199;
	uint64_t x1034 = UINT64_MAX;
	uint64_t x1035 = 14591409388616LLU;
	volatile int64_t x1036 = 31698301043LL;
	int32_t t191 = -174;

    t191 = ((x1033|x1034)<=(x1035*x1036));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1041 = 15U;
	volatile int32_t x1042 = 77327;
	static uint32_t x1043 = UINT32_MAX;
	uint64_t x1044 = UINT64_MAX;
	int32_t t192 = 0;

    t192 = ((x1041|x1042)<=(x1043*x1044));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1045 = 0;
	uint8_t x1046 = UINT8_MAX;
	int64_t x1047 = INT64_MAX;
	int32_t x1048 = -1;
	volatile int32_t t193 = 57617415;

    t193 = ((x1045|x1046)<=(x1047*x1048));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1049 = INT16_MAX;
	static int64_t x1051 = INT64_MAX;
	uint64_t x1052 = UINT64_MAX;
	int32_t t194 = -55;

    t194 = ((x1049|x1050)<=(x1051*x1052));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1061 = 1;
	int64_t x1062 = INT64_MAX;
	int64_t x1063 = -9006272LL;
	volatile int32_t t195 = -1779;

    t195 = ((x1061|x1062)<=(x1063*x1064));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1065 = -35;
	int8_t x1066 = -1;
	int32_t t196 = -190296;

    t196 = ((x1065|x1066)<=(x1067*x1068));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1073 = INT32_MIN;
	volatile int16_t x1076 = -1;
	volatile int32_t t197 = -195;

    t197 = ((x1073|x1074)<=(x1075*x1076));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1077 = INT32_MIN;
	volatile int8_t x1078 = 0;
	int32_t x1079 = 549;
	static uint16_t x1080 = 3606U;
	volatile int32_t t198 = -112746394;

    t198 = ((x1077|x1078)<=(x1079*x1080));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1081 = INT32_MIN;
	static int64_t x1082 = -1LL;
	int8_t x1083 = 4;
	int16_t x1084 = -40;
	static volatile int32_t t199 = -191;

    t199 = ((x1081|x1082)<=(x1083*x1084));

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

