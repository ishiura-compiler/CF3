
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

int8_t x3 = INT8_MIN;
int32_t t1 = 386;
int8_t x9 = 0;
volatile uint16_t x10 = 393U;
uint32_t x11 = 211430577U;
int32_t x19 = INT32_MIN;
volatile uint8_t x27 = 1U;
volatile uint32_t x38 = 34359U;
volatile int64_t x43 = 20142727341872LL;
uint8_t x51 = UINT8_MAX;
static volatile int16_t x52 = -1;
volatile int8_t x54 = INT8_MIN;
int32_t x61 = -1;
int8_t x63 = -1;
int16_t x83 = -1;
int8_t x87 = -1;
int16_t x88 = -1;
volatile uint64_t x96 = UINT64_MAX;
uint64_t x100 = UINT64_MAX;
int16_t x101 = INT16_MIN;
int32_t t21 = -295;
static uint8_t x120 = 53U;
volatile uint32_t x132 = 14455730U;
int32_t x133 = INT32_MIN;
int16_t x136 = INT16_MIN;
int32_t x144 = INT32_MIN;
int32_t t29 = 10685;
uint64_t x169 = 1806923LLU;
uint16_t x173 = 3636U;
static uint64_t x177 = 315700685035LLU;
static volatile int32_t t32 = -451559460;
uint32_t x185 = UINT32_MAX;
static int16_t x187 = INT16_MIN;
volatile int32_t t33 = -3;
uint32_t x195 = 488850219U;
static int16_t x200 = INT16_MIN;
uint64_t x202 = 2LLU;
uint32_t x204 = 88806133U;
uint16_t x209 = 3688U;
uint16_t x218 = UINT16_MAX;
int32_t x224 = -1;
volatile int64_t x226 = -525630199LL;
static uint8_t x238 = UINT8_MAX;
static int32_t x244 = -1;
int32_t t45 = -1289526;
int8_t x248 = INT8_MAX;
volatile uint32_t x255 = 20427428U;
int32_t t47 = -39075156;
int32_t x258 = -1;
volatile int8_t x260 = INT8_MIN;
int8_t x265 = 1;
uint64_t x278 = 4981522721872321070LLU;
volatile uint32_t x280 = 18517U;
int16_t x306 = -1;
static uint8_t x307 = 3U;
int64_t x317 = -489954772073LL;
volatile int8_t x324 = INT8_MAX;
int8_t x357 = INT8_MIN;
int32_t x368 = INT32_MAX;
int32_t t63 = 42217;
int8_t x380 = 0;
static int32_t t66 = -7875;
int16_t x404 = -1;
volatile int64_t x407 = INT64_MAX;
static int32_t x419 = INT32_MIN;
uint64_t x420 = 152LLU;
static volatile int32_t t71 = -51972;
int8_t x423 = -18;
uint16_t x444 = UINT16_MAX;
static int32_t t75 = -43;
int64_t x459 = 31502LL;
uint8_t x460 = 7U;
volatile int32_t t76 = -658;
int16_t x461 = INT16_MIN;
volatile int32_t t78 = -31762;
int8_t x478 = 0;
static uint64_t x486 = UINT64_MAX;
volatile int32_t x499 = -566173864;
uint16_t x509 = UINT16_MAX;
int32_t t85 = 396;
static volatile uint32_t x516 = 2028716249U;
int32_t t87 = 1370;
volatile uint8_t x523 = 0U;
static int16_t x524 = INT16_MIN;
int16_t x536 = INT16_MIN;
uint64_t x540 = UINT64_MAX;
static uint16_t x561 = UINT16_MAX;
volatile int64_t x563 = 1873279LL;
static volatile uint16_t x567 = 7U;
int32_t t95 = 247;
int32_t x570 = INT32_MAX;
uint8_t x577 = 1U;
int16_t x580 = INT16_MAX;
int32_t t97 = -35;
static int32_t x581 = 210902743;
uint64_t x582 = 88082594684195LLU;
static volatile int8_t x585 = INT8_MIN;
int32_t t99 = 15;
volatile int32_t t101 = -5538803;
uint32_t x599 = UINT32_MAX;
int16_t x606 = INT16_MAX;
int32_t x621 = INT32_MIN;
volatile int32_t t105 = -14;
uint64_t x659 = 848393726LLU;
int8_t x660 = -2;
int64_t x666 = -40LL;
int16_t x672 = INT16_MIN;
uint16_t x673 = UINT16_MAX;
int64_t x685 = -1LL;
volatile int64_t x687 = -1LL;
int32_t t117 = 20246;
uint8_t x729 = 84U;
int8_t x733 = INT8_MIN;
volatile int32_t x736 = -43565646;
int64_t x739 = 216940964684LL;
int32_t t125 = -85780;
static int64_t x741 = 14430LL;
int8_t x742 = INT8_MIN;
volatile int16_t x748 = INT16_MIN;
int32_t t128 = 176;
static uint64_t x761 = 286109934045LLU;
static volatile int64_t x763 = INT64_MAX;
volatile int32_t t131 = -8148716;
int8_t x775 = INT8_MIN;
volatile uint8_t x790 = 30U;
volatile uint32_t x792 = 115708U;
int64_t x794 = 242LL;
uint16_t x795 = UINT16_MAX;
int8_t x800 = INT8_MAX;
volatile int32_t t136 = 3533;
uint16_t x812 = 7936U;
uint32_t x820 = 982U;
uint32_t x823 = 2U;
uint8_t x836 = UINT8_MAX;
volatile uint16_t x839 = 2086U;
static int8_t x855 = INT8_MIN;
uint32_t x859 = 782U;
static volatile uint32_t x860 = UINT32_MAX;
int32_t t147 = 13350923;
int32_t t148 = -675;
int16_t x870 = INT16_MIN;
int32_t x872 = -2;
volatile int64_t x876 = INT64_MIN;
volatile int16_t x879 = 14;
int16_t x884 = -932;
volatile int8_t x885 = INT8_MAX;
static int8_t x896 = -1;
uint8_t x907 = 0U;
uint8_t x915 = UINT8_MAX;
static volatile int32_t t157 = 61;
int64_t x933 = 660501076326000LL;
static int16_t x942 = -1;
int16_t x943 = INT16_MAX;
static int8_t x955 = INT8_MIN;
uint16_t x967 = 7U;
int16_t x969 = INT16_MAX;
volatile int32_t t164 = 60;
int64_t x976 = -1LL;
static volatile uint32_t x983 = UINT32_MAX;
static volatile uint16_t x992 = UINT16_MAX;
int32_t t168 = -6528;
int16_t x999 = INT16_MIN;
int32_t x1000 = INT32_MAX;
int32_t x1008 = INT32_MIN;
static uint8_t x1014 = 5U;
int32_t x1016 = INT32_MAX;
uint8_t x1018 = 0U;
volatile int16_t x1019 = -10805;
int32_t t173 = 5791;
int16_t x1031 = INT16_MIN;
int32_t t175 = 0;
static uint32_t x1038 = 3176437U;
int8_t x1050 = INT8_MIN;
int16_t x1051 = -209;
volatile int8_t x1053 = 19;
static uint16_t x1062 = 1U;
static int64_t x1064 = 4198528782LL;
uint16_t x1081 = 8U;
volatile int16_t x1083 = 0;
volatile int32_t t183 = 41;
int16_t x1085 = INT16_MIN;
uint32_t x1087 = UINT32_MAX;
int16_t x1089 = -6715;
volatile int32_t t186 = -1;
volatile int16_t x1099 = -142;
int32_t t188 = -50;
volatile uint32_t x1113 = 114U;
static int8_t x1121 = INT8_MIN;
int64_t x1131 = INT64_MIN;
int32_t t191 = 209623;
uint16_t x1136 = 11122U;
int32_t t192 = -1;
volatile int16_t x1138 = INT16_MIN;
int32_t x1148 = INT32_MAX;
volatile uint16_t x1153 = 24084U;
int32_t x1155 = INT32_MAX;
static int32_t t196 = 0;
int32_t x1160 = 2;
volatile int32_t t197 = 1589;
static volatile int64_t x1179 = INT64_MIN;
int32_t t199 = -1;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	static int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 76199740;

    t0 = (((x1*x2)-x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = INT8_MIN;
	int8_t x6 = -1;
	volatile int16_t x7 = -252;
	int16_t x8 = -1;

    t1 = (((x5*x6)-x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x12 = -1;
	volatile int32_t t2 = -414964339;

    t2 = (((x9*x10)-x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 194056653971629895LLU;
	volatile uint8_t x14 = 1U;
	static int16_t x15 = 6;
	static volatile int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -826491095;

    t3 = (((x13*x14)-x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int16_t x18 = -1;
	int16_t x20 = 1;
	volatile int32_t t4 = 3175464;

    t4 = (((x17*x18)-x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint8_t x22 = 2U;
	volatile int64_t x23 = -1LL;
	static uint8_t x24 = 30U;
	int32_t t5 = -7;

    t5 = (((x21*x22)-x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	volatile int8_t x26 = 20;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 887284;

    t6 = (((x25*x26)-x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x29 = UINT64_MAX;
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = INT32_MIN;
	static uint8_t x32 = 3U;
	int32_t t7 = 22;

    t7 = (((x29*x30)-x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x37 = UINT64_MAX;
	int32_t x39 = -10;
	int8_t x40 = -6;
	int32_t t8 = -16509376;

    t8 = (((x37*x38)-x39)<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = UINT64_MAX;
	uint64_t x42 = 20923802800LLU;
	int64_t x44 = -1LL;
	int32_t t9 = -69332;

    t9 = (((x41*x42)-x43)<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = -1;
	volatile uint8_t x50 = UINT8_MAX;
	static volatile int32_t t10 = -1;

    t10 = (((x49*x50)-x51)<=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 28;
	static int16_t x55 = INT16_MIN;
	int32_t x56 = 0;
	int32_t t11 = -214055;

    t11 = (((x53*x54)-x55)<=x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	static volatile int16_t x58 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	uint32_t x60 = 6117U;
	int32_t t12 = 984543;

    t12 = (((x57*x58)-x59)<=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x62 = -1;
	int16_t x64 = -1;
	static volatile int32_t t13 = -14;

    t13 = (((x61*x62)-x63)<=x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = 7;
	volatile int16_t x74 = -49;
	uint32_t x75 = 16680U;
	int32_t x76 = INT32_MAX;
	static volatile int32_t t14 = -43;

    t14 = (((x73*x74)-x75)<=x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x81 = 5U;
	uint16_t x82 = 7104U;
	volatile int16_t x84 = -722;
	static int32_t t15 = -1;

    t15 = (((x81*x82)-x83)<=x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = -1;
	uint8_t x86 = 0U;
	static volatile int32_t t16 = -113;

    t16 = (((x85*x86)-x87)<=x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = -1;
	uint32_t x90 = UINT32_MAX;
	uint8_t x91 = UINT8_MAX;
	static uint16_t x92 = UINT16_MAX;
	int32_t t17 = -229634148;

    t17 = (((x89*x90)-x91)<=x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = 169;
	static uint32_t x94 = 877U;
	static int16_t x95 = 8082;
	volatile int32_t t18 = -1045088669;

    t18 = (((x93*x94)-x95)<=x96);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = INT8_MIN;
	static int16_t x98 = 116;
	static uint64_t x99 = 34228706LLU;
	volatile int32_t t19 = -14;

    t19 = (((x97*x98)-x99)<=x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x102 = 1U;
	int16_t x103 = INT16_MIN;
	static int16_t x104 = INT16_MIN;
	int32_t t20 = -294;

    t20 = (((x101*x102)-x103)<=x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x113 = 5LL;
	static int16_t x114 = INT16_MAX;
	int32_t x115 = -11;
	static int64_t x116 = -1347497409796LL;

    t21 = (((x113*x114)-x115)<=x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x117 = INT8_MIN;
	uint16_t x118 = 431U;
	int8_t x119 = 1;
	int32_t t22 = -7;

    t22 = (((x117*x118)-x119)<=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x121 = -30;
	int16_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	static int16_t x124 = -6;
	volatile int32_t t23 = 1;

    t23 = (((x121*x122)-x123)<=x124);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x129 = -14;
	static int16_t x130 = INT16_MIN;
	int32_t x131 = -1;
	int32_t t24 = 20661;

    t24 = (((x129*x130)-x131)<=x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x134 = 1;
	int8_t x135 = -1;
	static volatile int32_t t25 = 15;

    t25 = (((x133*x134)-x135)<=x136);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MAX;
	int32_t t26 = 118287;

    t26 = (((x141*x142)-x143)<=x144);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x145 = UINT32_MAX;
	int16_t x146 = -1;
	static uint8_t x147 = 5U;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t27 = 55708980;

    t27 = (((x145*x146)-x147)<=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x157 = 5412U;
	int64_t x158 = 573LL;
	int8_t x159 = 1;
	static int8_t x160 = 0;
	volatile int32_t t28 = -3554;

    t28 = (((x157*x158)-x159)<=x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x165 = 450U;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = 21U;
	int8_t x168 = INT8_MIN;

    t29 = (((x165*x166)-x167)<=x168);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t30 = -10;

    t30 = (((x169*x170)-x171)<=x172);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x174 = INT8_MIN;
	volatile int64_t x175 = -236609250459LL;
	uint64_t x176 = 760463LLU;
	volatile int32_t t31 = -3;

    t31 = (((x173*x174)-x175)<=x176);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x178 = 67832U;
	int16_t x179 = INT16_MAX;
	static int64_t x180 = INT64_MIN;

    t32 = (((x177*x178)-x179)<=x180);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x186 = 20946U;
	static volatile uint8_t x188 = UINT8_MAX;

    t33 = (((x185*x186)-x187)<=x188);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x193 = 1625U;
	uint64_t x194 = UINT64_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t34 = 2471;

    t34 = (((x193*x194)-x195)<=x196);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x197 = INT16_MAX;
	uint8_t x198 = 1U;
	int64_t x199 = -123396484033LL;
	int32_t t35 = 3004;

    t35 = (((x197*x198)-x199)<=x200);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x201 = UINT64_MAX;
	volatile uint8_t x203 = 0U;
	static volatile int32_t t36 = 8520997;

    t36 = (((x201*x202)-x203)<=x204);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x210 = -1695915834400LL;
	uint32_t x211 = 584U;
	volatile int8_t x212 = INT8_MIN;
	static volatile int32_t t37 = -7;

    t37 = (((x209*x210)-x211)<=x212);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x213 = 0U;
	int64_t x214 = -118LL;
	uint16_t x215 = 82U;
	int8_t x216 = INT8_MIN;
	int32_t t38 = -30;

    t38 = (((x213*x214)-x215)<=x216);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 972232277539LLU;
	volatile int32_t t39 = 579897;

    t39 = (((x217*x218)-x219)<=x220);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = 7;
	uint8_t x222 = 54U;
	int32_t x223 = -1;
	int32_t t40 = 152986292;

    t40 = (((x221*x222)-x223)<=x224);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x225 = INT16_MIN;
	int64_t x227 = -1LL;
	uint32_t x228 = 1U;
	int32_t t41 = 8;

    t41 = (((x225*x226)-x227)<=x228);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x229 = UINT32_MAX;
	uint64_t x230 = 1800821812LLU;
	volatile uint16_t x231 = 37U;
	int32_t x232 = INT32_MAX;
	static int32_t t42 = 877;

    t42 = (((x229*x230)-x231)<=x232);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x233 = 11U;
	uint16_t x234 = 991U;
	static volatile uint64_t x235 = UINT64_MAX;
	static int16_t x236 = INT16_MIN;
	static volatile int32_t t43 = 1;

    t43 = (((x233*x234)-x235)<=x236);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x237 = UINT64_MAX;
	int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MAX;
	int32_t t44 = 14992106;

    t44 = (((x237*x238)-x239)<=x240);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = 9232;
	int8_t x242 = INT8_MAX;
	int16_t x243 = -1;

    t45 = (((x241*x242)-x243)<=x244);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x245 = 2;
	volatile uint16_t x246 = 122U;
	volatile uint32_t x247 = UINT32_MAX;
	int32_t t46 = -61702276;

    t46 = (((x245*x246)-x247)<=x248);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = -7595379;
	int16_t x254 = -1;
	uint64_t x256 = UINT64_MAX;

    t47 = (((x253*x254)-x255)<=x256);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x257 = 17;
	int8_t x259 = 1;
	volatile int32_t t48 = -1;

    t48 = (((x257*x258)-x259)<=x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x261 = 3U;
	static volatile uint8_t x262 = UINT8_MAX;
	uint32_t x263 = 0U;
	int8_t x264 = 10;
	volatile int32_t t49 = -16122;

    t49 = (((x261*x262)-x263)<=x264);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x266 = -1;
	uint32_t x267 = UINT32_MAX;
	volatile uint16_t x268 = 81U;
	static int32_t t50 = 13066;

    t50 = (((x265*x266)-x267)<=x268);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x277 = 6;
	uint8_t x279 = 11U;
	volatile int32_t t51 = -39090457;

    t51 = (((x277*x278)-x279)<=x280);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x281 = UINT32_MAX;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = -1;
	volatile int32_t t52 = 2922;

    t52 = (((x281*x282)-x283)<=x284);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x285 = 19966740LLU;
	int64_t x286 = INT64_MAX;
	static int64_t x287 = -7440331501064406LL;
	static int32_t x288 = -24709493;
	int32_t t53 = 215391383;

    t53 = (((x285*x286)-x287)<=x288);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x293 = 488;
	uint64_t x294 = 8753120207LLU;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 14U;
	static int32_t t54 = -6249787;

    t54 = (((x293*x294)-x295)<=x296);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x305 = UINT16_MAX;
	volatile int16_t x308 = -1;
	volatile int32_t t55 = -14092;

    t55 = (((x305*x306)-x307)<=x308);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x318 = -9;
	static int8_t x319 = -1;
	uint64_t x320 = UINT64_MAX;
	int32_t t56 = 60;

    t56 = (((x317*x318)-x319)<=x320);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x321 = -1;
	int16_t x322 = INT16_MAX;
	static int64_t x323 = INT64_MIN;
	int32_t t57 = 125137965;

    t57 = (((x321*x322)-x323)<=x324);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x329 = 1U;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t58 = -3527;

    t58 = (((x329*x330)-x331)<=x332);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x337 = 106U;
	static uint8_t x338 = 19U;
	uint32_t x339 = 54U;
	static uint64_t x340 = 26384134216170LLU;
	volatile int32_t t59 = -500153;

    t59 = (((x337*x338)-x339)<=x340);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x353 = -1;
	int16_t x354 = -158;
	int64_t x355 = 826286595507LL;
	int64_t x356 = INT64_MIN;
	volatile int32_t t60 = 66276894;

    t60 = (((x353*x354)-x355)<=x356);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	static int16_t x360 = -1;
	int32_t t61 = 251798;

    t61 = (((x357*x358)-x359)<=x360);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x365 = -2;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = INT8_MIN;
	volatile int32_t t62 = -6392839;

    t62 = (((x365*x366)-x367)<=x368);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x369 = UINT32_MAX;
	static int32_t x370 = INT32_MAX;
	static uint16_t x371 = 174U;
	int16_t x372 = INT16_MIN;

    t63 = (((x369*x370)-x371)<=x372);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x377 = 4016U;
	static volatile uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	volatile int32_t t64 = -185435319;

    t64 = (((x377*x378)-x379)<=x380);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x381 = INT16_MAX;
	uint64_t x382 = 30873064806735880LLU;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = -1;
	int32_t t65 = 1019123;

    t65 = (((x381*x382)-x383)<=x384);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x389 = UINT64_MAX;
	volatile uint8_t x390 = UINT8_MAX;
	volatile int8_t x391 = -1;
	uint16_t x392 = UINT16_MAX;

    t66 = (((x389*x390)-x391)<=x392);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	volatile int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t67 = 127;

    t67 = (((x397*x398)-x399)<=x400);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x401 = UINT16_MAX;
	static volatile int16_t x402 = 1350;
	uint16_t x403 = 3U;
	int32_t t68 = -62;

    t68 = (((x401*x402)-x403)<=x404);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x405 = -123;
	int16_t x406 = -61;
	static uint64_t x408 = 351599999431168LLU;
	volatile int32_t t69 = 3;

    t69 = (((x405*x406)-x407)<=x408);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x409 = 1U;
	int32_t x410 = 458624;
	static uint8_t x411 = 0U;
	static volatile uint64_t x412 = 6987281LLU;
	static int32_t t70 = -28977;

    t70 = (((x409*x410)-x411)<=x412);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x417 = 2051697889770610LLU;
	int16_t x418 = INT16_MIN;

    t71 = (((x417*x418)-x419)<=x420);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x421 = INT16_MAX;
	int64_t x422 = -15013LL;
	uint32_t x424 = 385U;
	static int32_t t72 = -914643;

    t72 = (((x421*x422)-x423)<=x424);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x425 = INT16_MIN;
	static int8_t x426 = -1;
	volatile int8_t x427 = INT8_MIN;
	int64_t x428 = 1219102518712LL;
	int32_t t73 = 1;

    t73 = (((x425*x426)-x427)<=x428);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int32_t x438 = -1;
	int64_t x439 = INT64_MAX;
	int8_t x440 = 12;
	volatile int32_t t74 = 91;

    t74 = (((x437*x438)-x439)<=x440);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x441 = 1830689U;
	volatile uint16_t x442 = 182U;
	static int64_t x443 = -6817252457391LL;

    t75 = (((x441*x442)-x443)<=x444);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x457 = INT32_MIN;
	uint64_t x458 = 9091251379766LLU;

    t76 = (((x457*x458)-x459)<=x460);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x462 = 7518LLU;
	volatile int8_t x463 = INT8_MAX;
	static uint16_t x464 = 458U;
	volatile int32_t t77 = -20002704;

    t77 = (((x461*x462)-x463)<=x464);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x465 = 51565U;
	uint32_t x466 = 835U;
	int64_t x467 = 468818195014LL;
	int16_t x468 = INT16_MIN;

    t78 = (((x465*x466)-x467)<=x468);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MIN;
	volatile int64_t x471 = -1LL;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t79 = 1841;

    t79 = (((x469*x470)-x471)<=x472);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x477 = -3LL;
	uint16_t x479 = 9304U;
	int8_t x480 = INT8_MIN;
	volatile int32_t t80 = -66;

    t80 = (((x477*x478)-x479)<=x480);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x485 = 42941841;
	uint32_t x487 = 178917U;
	uint64_t x488 = 183799787LLU;
	volatile int32_t t81 = -189289670;

    t81 = (((x485*x486)-x487)<=x488);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x489 = 2409787LLU;
	static volatile uint32_t x490 = 109658U;
	volatile int32_t x491 = -1;
	int32_t x492 = INT32_MAX;
	static int32_t t82 = -17;

    t82 = (((x489*x490)-x491)<=x492);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x497 = INT32_MIN;
	uint32_t x498 = 1047U;
	uint32_t x500 = UINT32_MAX;
	static volatile int32_t t83 = 197838416;

    t83 = (((x497*x498)-x499)<=x500);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x505 = UINT64_MAX;
	static int64_t x506 = -18728366961LL;
	int32_t x507 = INT32_MIN;
	int64_t x508 = 10LL;
	static int32_t t84 = -13;

    t84 = (((x505*x506)-x507)<=x508);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x510 = 4747322466LL;
	uint32_t x511 = 50U;
	static uint16_t x512 = UINT16_MAX;

    t85 = (((x509*x510)-x511)<=x512);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x513 = -1;
	static int8_t x514 = 1;
	int16_t x515 = -484;
	volatile int32_t t86 = 4971284;

    t86 = (((x513*x514)-x515)<=x516);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x517 = -20;
	volatile int8_t x518 = INT8_MAX;
	uint64_t x519 = 76925LLU;
	static uint16_t x520 = 12470U;

    t87 = (((x517*x518)-x519)<=x520);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x521 = INT16_MAX;
	int8_t x522 = -6;
	int32_t t88 = 4;

    t88 = (((x521*x522)-x523)<=x524);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x533 = 373U;
	static uint8_t x534 = 26U;
	volatile uint64_t x535 = UINT64_MAX;
	volatile int32_t t89 = 20982712;

    t89 = (((x533*x534)-x535)<=x536);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x537 = 1923728972693053868LLU;
	uint8_t x538 = 1U;
	uint8_t x539 = UINT8_MAX;
	int32_t t90 = 1;

    t90 = (((x537*x538)-x539)<=x540);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x549 = -3;
	uint64_t x550 = 558012131104240778LLU;
	int8_t x551 = -1;
	volatile int64_t x552 = INT64_MIN;
	static volatile int32_t t91 = -31;

    t91 = (((x549*x550)-x551)<=x552);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x553 = 3941765072751391LLU;
	int16_t x554 = -1;
	uint32_t x555 = 95619U;
	int8_t x556 = -1;
	volatile int32_t t92 = 0;

    t92 = (((x553*x554)-x555)<=x556);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x557 = UINT64_MAX;
	int8_t x558 = INT8_MIN;
	int8_t x559 = INT8_MIN;
	volatile uint64_t x560 = 6036LLU;
	static int32_t t93 = 100827;

    t93 = (((x557*x558)-x559)<=x560);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x562 = -1LL;
	static uint32_t x564 = UINT32_MAX;
	int32_t t94 = 1408;

    t94 = (((x561*x562)-x563)<=x564);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MIN;
	int64_t x568 = INT64_MIN;

    t95 = (((x565*x566)-x567)<=x568);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x569 = 1443427136LL;
	static volatile int8_t x571 = INT8_MIN;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t96 = 38;

    t96 = (((x569*x570)-x571)<=x572);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x578 = -94271LL;
	static int64_t x579 = 1087063824792039984LL;

    t97 = (((x577*x578)-x579)<=x580);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x583 = 1U;
	int8_t x584 = INT8_MAX;
	static int32_t t98 = -4936588;

    t98 = (((x581*x582)-x583)<=x584);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x586 = UINT64_MAX;
	int16_t x587 = INT16_MIN;
	int8_t x588 = INT8_MIN;

    t99 = (((x585*x586)-x587)<=x588);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x589 = INT16_MIN;
	static uint64_t x590 = 127821896602LLU;
	uint8_t x591 = 0U;
	int32_t x592 = INT32_MIN;
	volatile int32_t t100 = -18899716;

    t100 = (((x589*x590)-x591)<=x592);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x593 = -2;
	int8_t x594 = INT8_MIN;
	volatile uint8_t x595 = 7U;
	int64_t x596 = 123453429138LL;

    t101 = (((x593*x594)-x595)<=x596);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x597 = 29302U;
	int32_t x598 = -355998384;
	int16_t x600 = 1;
	int32_t t102 = 46960;

    t102 = (((x597*x598)-x599)<=x600);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x605 = 5U;
	static uint16_t x607 = 10U;
	int8_t x608 = -5;
	int32_t t103 = 13188;

    t103 = (((x605*x606)-x607)<=x608);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x622 = 0;
	uint16_t x623 = 3803U;
	uint16_t x624 = 8U;
	int32_t t104 = 7;

    t104 = (((x621*x622)-x623)<=x624);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x629 = 1907529297LL;
	uint32_t x630 = UINT32_MAX;
	uint8_t x631 = 41U;
	int8_t x632 = INT8_MIN;

    t105 = (((x629*x630)-x631)<=x632);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint8_t x642 = 33U;
	uint32_t x643 = 733269629U;
	uint8_t x644 = UINT8_MAX;
	volatile int32_t t106 = 59;

    t106 = (((x641*x642)-x643)<=x644);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x645 = 276874892052799992LLU;
	uint64_t x646 = 62552141912637LLU;
	int8_t x647 = INT8_MAX;
	static uint16_t x648 = UINT16_MAX;
	volatile int32_t t107 = -100428;

    t107 = (((x645*x646)-x647)<=x648);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x653 = 1;
	int32_t x654 = -1;
	int32_t x655 = INT32_MIN;
	int16_t x656 = INT16_MIN;
	volatile int32_t t108 = -59333;

    t108 = (((x653*x654)-x655)<=x656);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x657 = INT16_MIN;
	int8_t x658 = 52;
	int32_t t109 = 5;

    t109 = (((x657*x658)-x659)<=x660);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x665 = 5U;
	uint32_t x667 = 971624407U;
	uint64_t x668 = 13340939853150LLU;
	int32_t t110 = 1025993942;

    t110 = (((x665*x666)-x667)<=x668);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x670 = -1;
	volatile int32_t x671 = -1;
	int32_t t111 = 14655236;

    t111 = (((x669*x670)-x671)<=x672);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x674 = -1;
	int16_t x675 = -1;
	static int16_t x676 = INT16_MAX;
	int32_t t112 = -13024;

    t112 = (((x673*x674)-x675)<=x676);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x677 = 39U;
	int16_t x678 = INT16_MIN;
	uint32_t x679 = 3815343U;
	static uint32_t x680 = UINT32_MAX;
	int32_t t113 = -53696795;

    t113 = (((x677*x678)-x679)<=x680);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x681 = UINT16_MAX;
	int8_t x682 = 1;
	int64_t x683 = 545085404995LL;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t114 = -30824;

    t114 = (((x681*x682)-x683)<=x684);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x686 = 89966115163666223LLU;
	static volatile int32_t x688 = 560367;
	volatile int32_t t115 = -644491;

    t115 = (((x685*x686)-x687)<=x688);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x689 = 2095851239749936144LLU;
	int32_t x690 = INT32_MIN;
	int32_t x691 = INT32_MIN;
	int64_t x692 = INT64_MIN;
	int32_t t116 = -30902194;

    t116 = (((x689*x690)-x691)<=x692);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x693 = 103U;
	int8_t x694 = INT8_MIN;
	int8_t x695 = -1;
	volatile int16_t x696 = 2;

    t117 = (((x693*x694)-x695)<=x696);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x701 = 79U;
	int16_t x702 = -1;
	int64_t x703 = -1LL;
	int8_t x704 = 12;
	static int32_t t118 = -16760779;

    t118 = (((x701*x702)-x703)<=x704);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x705 = -212145LL;
	int8_t x706 = INT8_MIN;
	volatile uint64_t x707 = UINT64_MAX;
	int16_t x708 = INT16_MIN;
	int32_t t119 = -158;

    t119 = (((x705*x706)-x707)<=x708);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x709 = INT16_MAX;
	int16_t x710 = INT16_MIN;
	uint8_t x711 = 0U;
	static int64_t x712 = INT64_MAX;
	int32_t t120 = -2744935;

    t120 = (((x709*x710)-x711)<=x712);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x717 = 2078797195LLU;
	static int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MIN;
	int8_t x720 = INT8_MAX;
	volatile int32_t t121 = 719628;

    t121 = (((x717*x718)-x719)<=x720);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x725 = INT16_MIN;
	int8_t x726 = -1;
	volatile int8_t x727 = INT8_MIN;
	static int8_t x728 = -1;
	static volatile int32_t t122 = -512;

    t122 = (((x725*x726)-x727)<=x728);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x730 = -1;
	uint64_t x731 = UINT64_MAX;
	int32_t x732 = INT32_MAX;
	int32_t t123 = 8354;

    t123 = (((x729*x730)-x731)<=x732);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x734 = 10;
	int16_t x735 = INT16_MAX;
	int32_t t124 = -24661327;

    t124 = (((x733*x734)-x735)<=x736);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x737 = -2366817626906035050LL;
	uint64_t x738 = 8586014229504791956LLU;
	uint64_t x740 = UINT64_MAX;

    t125 = (((x737*x738)-x739)<=x740);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x743 = 30321159744822196LL;
	int8_t x744 = 21;
	volatile int32_t t126 = 11148405;

    t126 = (((x741*x742)-x743)<=x744);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x746 = -1;
	int32_t x747 = -1;
	int32_t t127 = 80;

    t127 = (((x745*x746)-x747)<=x748);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x749 = 18;
	int32_t x750 = 0;
	uint32_t x751 = UINT32_MAX;
	int8_t x752 = -1;

    t128 = (((x749*x750)-x751)<=x752);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x753 = INT8_MAX;
	uint64_t x754 = 1011LLU;
	int16_t x755 = 162;
	static uint16_t x756 = 2044U;
	int32_t t129 = 43;

    t129 = (((x753*x754)-x755)<=x756);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x762 = 1431374U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t130 = 3;

    t130 = (((x761*x762)-x763)<=x764);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x769 = 2LL;
	int16_t x770 = -1;
	uint8_t x771 = 119U;
	static int8_t x772 = 0;

    t131 = (((x769*x770)-x771)<=x772);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x773 = 0;
	int16_t x774 = INT16_MAX;
	volatile int8_t x776 = INT8_MAX;
	volatile int32_t t132 = 577;

    t132 = (((x773*x774)-x775)<=x776);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x785 = 101LL;
	volatile int16_t x786 = -1;
	volatile int32_t x787 = INT32_MAX;
	uint8_t x788 = UINT8_MAX;
	int32_t t133 = -231;

    t133 = (((x785*x786)-x787)<=x788);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x789 = 864U;
	int32_t x791 = INT32_MAX;
	static int32_t t134 = -6925202;

    t134 = (((x789*x790)-x791)<=x792);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x793 = INT8_MIN;
	static int16_t x796 = -1;
	static volatile int32_t t135 = -1514284;

    t135 = (((x793*x794)-x795)<=x796);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x797 = -51;
	int32_t x798 = -1;
	int32_t x799 = 688;

    t136 = (((x797*x798)-x799)<=x800);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	static volatile int32_t x810 = -1;
	int64_t x811 = 0LL;
	static volatile int32_t t137 = -21;

    t137 = (((x809*x810)-x811)<=x812);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x813 = 2943LLU;
	int16_t x814 = -1;
	static int64_t x815 = -1LL;
	static volatile int16_t x816 = INT16_MIN;
	static volatile int32_t t138 = 16017307;

    t138 = (((x813*x814)-x815)<=x816);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x817 = -343055;
	volatile int8_t x818 = INT8_MAX;
	uint8_t x819 = 13U;
	volatile int32_t t139 = -3258;

    t139 = (((x817*x818)-x819)<=x820);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x822 = INT16_MAX;
	int16_t x824 = 9063;
	int32_t t140 = -7257;

    t140 = (((x821*x822)-x823)<=x824);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x833 = INT64_MAX;
	uint64_t x834 = 380501LLU;
	static volatile uint8_t x835 = UINT8_MAX;
	int32_t t141 = 445476604;

    t141 = (((x833*x834)-x835)<=x836);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x837 = -133;
	uint8_t x838 = UINT8_MAX;
	static volatile int16_t x840 = INT16_MAX;
	int32_t t142 = 1051121538;

    t142 = (((x837*x838)-x839)<=x840);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x841 = 444573204U;
	volatile int16_t x842 = INT16_MIN;
	int16_t x843 = 15;
	volatile int16_t x844 = -1;
	volatile int32_t t143 = -1;

    t143 = (((x841*x842)-x843)<=x844);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x845 = 261;
	uint64_t x846 = UINT64_MAX;
	int32_t x847 = INT32_MIN;
	volatile int8_t x848 = INT8_MAX;
	volatile int32_t t144 = -13659;

    t144 = (((x845*x846)-x847)<=x848);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x853 = -1;
	int32_t x854 = -65444;
	volatile int64_t x856 = INT64_MIN;
	int32_t t145 = -955;

    t145 = (((x853*x854)-x855)<=x856);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x857 = 3934505U;
	uint16_t x858 = UINT16_MAX;
	volatile int32_t t146 = -6938811;

    t146 = (((x857*x858)-x859)<=x860);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x861 = 110LLU;
	uint64_t x862 = 58968336397484722LLU;
	int8_t x863 = INT8_MIN;
	uint16_t x864 = UINT16_MAX;

    t147 = (((x861*x862)-x863)<=x864);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x865 = -1LL;
	int32_t x866 = INT32_MIN;
	int64_t x867 = -1LL;
	volatile int8_t x868 = INT8_MAX;

    t148 = (((x865*x866)-x867)<=x868);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x869 = -274LL;
	int8_t x871 = INT8_MAX;
	int32_t t149 = -10;

    t149 = (((x869*x870)-x871)<=x872);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x873 = 7;
	uint8_t x874 = UINT8_MAX;
	uint16_t x875 = 20U;
	int32_t t150 = 58;

    t150 = (((x873*x874)-x875)<=x876);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x877 = 1508150LL;
	volatile int16_t x878 = INT16_MAX;
	int8_t x880 = -1;
	static int32_t t151 = 1;

    t151 = (((x877*x878)-x879)<=x880);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x881 = 723885564421689882LLU;
	int64_t x882 = INT64_MIN;
	uint16_t x883 = 1U;
	static volatile int32_t t152 = -61744;

    t152 = (((x881*x882)-x883)<=x884);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x886 = UINT32_MAX;
	int32_t x887 = 666166518;
	volatile uint16_t x888 = UINT16_MAX;
	volatile int32_t t153 = 354520387;

    t153 = (((x885*x886)-x887)<=x888);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x889 = 0;
	int64_t x890 = INT64_MIN;
	int16_t x891 = 102;
	int64_t x892 = INT64_MIN;
	volatile int32_t t154 = 119;

    t154 = (((x889*x890)-x891)<=x892);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x893 = INT16_MAX;
	int16_t x894 = 204;
	uint8_t x895 = 12U;
	volatile int32_t t155 = 13254978;

    t155 = (((x893*x894)-x895)<=x896);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x905 = -1;
	uint32_t x906 = 50U;
	int16_t x908 = INT16_MIN;
	int32_t t156 = 1;

    t156 = (((x905*x906)-x907)<=x908);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x913 = -26643188460434LL;
	static volatile uint16_t x914 = UINT16_MAX;
	int64_t x916 = -76LL;

    t157 = (((x913*x914)-x915)<=x916);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x929 = INT16_MIN;
	static uint32_t x930 = UINT32_MAX;
	uint32_t x931 = 14841U;
	volatile uint8_t x932 = 2U;
	int32_t t158 = -1;

    t158 = (((x929*x930)-x931)<=x932);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x934 = 3;
	int64_t x935 = -11608533272797221LL;
	int8_t x936 = 1;
	int32_t t159 = 990578;

    t159 = (((x933*x934)-x935)<=x936);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x941 = -1LL;
	volatile int16_t x944 = 9;
	static int32_t t160 = 1;

    t160 = (((x941*x942)-x943)<=x944);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x953 = -1LL;
	volatile int32_t x954 = INT32_MIN;
	int16_t x956 = INT16_MAX;
	int32_t t161 = 404600;

    t161 = (((x953*x954)-x955)<=x956);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x957 = -3;
	int16_t x958 = 1815;
	uint32_t x959 = 4U;
	int8_t x960 = INT8_MAX;
	int32_t t162 = 2286;

    t162 = (((x957*x958)-x959)<=x960);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x965 = INT8_MIN;
	uint32_t x966 = 40U;
	volatile int32_t x968 = -1;
	volatile int32_t t163 = 471318;

    t163 = (((x965*x966)-x967)<=x968);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x970 = UINT8_MAX;
	volatile int64_t x971 = -1LL;
	static uint16_t x972 = 1447U;

    t164 = (((x969*x970)-x971)<=x972);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x973 = 7895144U;
	uint8_t x974 = 1U;
	static volatile int32_t x975 = -691;
	static volatile int32_t t165 = 285838604;

    t165 = (((x973*x974)-x975)<=x976);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x977 = UINT32_MAX;
	static uint8_t x978 = 0U;
	static int32_t x979 = INT32_MIN;
	int64_t x980 = INT64_MIN;
	int32_t t166 = 32552932;

    t166 = (((x977*x978)-x979)<=x980);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x981 = -1LL;
	volatile uint32_t x982 = 13211U;
	int8_t x984 = INT8_MIN;
	volatile int32_t t167 = 4186;

    t167 = (((x981*x982)-x983)<=x984);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x989 = -1;
	volatile uint32_t x990 = 2880U;
	uint8_t x991 = 4U;

    t168 = (((x989*x990)-x991)<=x992);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x997 = -1;
	uint16_t x998 = 1923U;
	volatile int32_t t169 = -2;

    t169 = (((x997*x998)-x999)<=x1000);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x1005 = 23U;
	int16_t x1006 = INT16_MAX;
	static int16_t x1007 = INT16_MAX;
	volatile int32_t t170 = 8294;

    t170 = (((x1005*x1006)-x1007)<=x1008);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x1013 = UINT16_MAX;
	int64_t x1015 = 891556LL;
	volatile int32_t t171 = -845270;

    t171 = (((x1013*x1014)-x1015)<=x1016);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x1017 = 2U;
	static int32_t x1020 = INT32_MIN;
	int32_t t172 = -4;

    t172 = (((x1017*x1018)-x1019)<=x1020);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1025 = -1LL;
	uint64_t x1026 = UINT64_MAX;
	uint32_t x1027 = 416235906U;
	int8_t x1028 = 1;

    t173 = (((x1025*x1026)-x1027)<=x1028);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1029 = 1U;
	uint8_t x1030 = UINT8_MAX;
	static int32_t x1032 = -27;
	int32_t t174 = -57464;

    t174 = (((x1029*x1030)-x1031)<=x1032);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1033 = UINT64_MAX;
	int64_t x1034 = INT64_MAX;
	int32_t x1035 = INT32_MAX;
	int32_t x1036 = 29;

    t175 = (((x1033*x1034)-x1035)<=x1036);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x1037 = -5;
	static volatile int16_t x1039 = -118;
	static uint16_t x1040 = UINT16_MAX;
	volatile int32_t t176 = 60638;

    t176 = (((x1037*x1038)-x1039)<=x1040);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x1041 = 252837265U;
	int8_t x1042 = INT8_MAX;
	static volatile int16_t x1043 = INT16_MAX;
	uint16_t x1044 = UINT16_MAX;
	int32_t t177 = -10793;

    t177 = (((x1041*x1042)-x1043)<=x1044);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1049 = -165;
	int32_t x1052 = INT32_MAX;
	int32_t t178 = 0;

    t178 = (((x1049*x1050)-x1051)<=x1052);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1054 = 1;
	static int16_t x1055 = INT16_MAX;
	int16_t x1056 = -826;
	static int32_t t179 = 1725;

    t179 = (((x1053*x1054)-x1055)<=x1056);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1057 = UINT16_MAX;
	uint32_t x1058 = 120271019U;
	static volatile uint64_t x1059 = UINT64_MAX;
	int64_t x1060 = -135616161LL;
	static volatile int32_t t180 = -193595806;

    t180 = (((x1057*x1058)-x1059)<=x1060);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1061 = INT16_MIN;
	int8_t x1063 = 4;
	static int32_t t181 = -28615;

    t181 = (((x1061*x1062)-x1063)<=x1064);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1065 = 7U;
	int16_t x1066 = INT16_MAX;
	uint32_t x1067 = 162U;
	volatile int32_t x1068 = -1;
	volatile int32_t t182 = -772272;

    t182 = (((x1065*x1066)-x1067)<=x1068);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1082 = 8LL;
	int16_t x1084 = -41;

    t183 = (((x1081*x1082)-x1083)<=x1084);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1086 = 1;
	uint8_t x1088 = 13U;
	int32_t t184 = -10691927;

    t184 = (((x1085*x1086)-x1087)<=x1088);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1090 = 26665U;
	uint64_t x1091 = 2LLU;
	static int32_t x1092 = -26149706;
	static int32_t t185 = -1;

    t185 = (((x1089*x1090)-x1091)<=x1092);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1093 = INT16_MIN;
	static int16_t x1094 = INT16_MAX;
	int16_t x1095 = INT16_MAX;
	int8_t x1096 = 4;

    t186 = (((x1093*x1094)-x1095)<=x1096);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1097 = -1;
	static int16_t x1098 = INT16_MAX;
	static uint8_t x1100 = 45U;
	volatile int32_t t187 = 516352601;

    t187 = (((x1097*x1098)-x1099)<=x1100);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1109 = UINT64_MAX;
	volatile int16_t x1110 = 3755;
	int32_t x1111 = -9547;
	int32_t x1112 = 0;

    t188 = (((x1109*x1110)-x1111)<=x1112);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1114 = -40;
	int8_t x1115 = -1;
	int64_t x1116 = -1LL;
	volatile int32_t t189 = -392;

    t189 = (((x1113*x1114)-x1115)<=x1116);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1122 = 209110U;
	int64_t x1123 = -45944193374LL;
	volatile int64_t x1124 = 63429984299924515LL;
	volatile int32_t t190 = 90;

    t190 = (((x1121*x1122)-x1123)<=x1124);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1129 = 138U;
	uint64_t x1130 = 979418967LLU;
	int64_t x1132 = -1LL;

    t191 = (((x1129*x1130)-x1131)<=x1132);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1133 = UINT8_MAX;
	volatile uint64_t x1134 = 142293874582LLU;
	int8_t x1135 = -10;

    t192 = (((x1133*x1134)-x1135)<=x1136);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1137 = 15466971587701LLU;
	uint64_t x1139 = UINT64_MAX;
	volatile uint32_t x1140 = 5434879U;
	int32_t t193 = -1503623;

    t193 = (((x1137*x1138)-x1139)<=x1140);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1141 = -16155;
	int16_t x1142 = -729;
	int8_t x1143 = -2;
	int32_t x1144 = INT32_MIN;
	int32_t t194 = 2050774;

    t194 = (((x1141*x1142)-x1143)<=x1144);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1145 = 87U;
	int32_t x1146 = 1;
	volatile int16_t x1147 = -15;
	int32_t t195 = -63788385;

    t195 = (((x1145*x1146)-x1147)<=x1148);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1154 = 253LL;
	int64_t x1156 = -1LL;

    t196 = (((x1153*x1154)-x1155)<=x1156);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1157 = 52448LLU;
	int32_t x1158 = -1;
	int32_t x1159 = -61579;

    t197 = (((x1157*x1158)-x1159)<=x1160);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x1161 = 2U;
	int64_t x1162 = 2695586088194LL;
	static int16_t x1163 = INT16_MIN;
	volatile int32_t x1164 = -1;
	int32_t t198 = 107303;

    t198 = (((x1161*x1162)-x1163)<=x1164);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1177 = INT32_MIN;
	uint64_t x1178 = 43506LLU;
	int16_t x1180 = -1;

    t199 = (((x1177*x1178)-x1179)<=x1180);

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

