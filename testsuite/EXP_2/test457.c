
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

int32_t x2 = -1;
int32_t x3 = -1;
int16_t x5 = INT16_MIN;
volatile int16_t x9 = INT16_MAX;
uint16_t x10 = UINT16_MAX;
uint8_t x17 = 121U;
int8_t x37 = INT8_MAX;
static int32_t x42 = INT32_MAX;
uint8_t x52 = 46U;
int32_t x61 = -1;
int8_t x63 = -1;
int16_t x68 = INT16_MIN;
volatile int32_t t12 = -173;
volatile int8_t x69 = -1;
volatile int32_t t13 = -498702014;
int8_t x74 = INT8_MAX;
volatile int8_t x85 = -1;
int16_t x88 = INT16_MAX;
volatile int32_t t15 = -133201190;
uint8_t x94 = UINT8_MAX;
int32_t t17 = -3272;
static volatile int64_t x97 = INT64_MIN;
volatile int32_t t22 = 683;
volatile uint64_t x130 = 89LLU;
int32_t x133 = -1;
int32_t x137 = 387825084;
int16_t x145 = INT16_MIN;
int8_t x146 = 4;
int16_t x148 = INT16_MIN;
int64_t x160 = INT64_MAX;
int16_t x172 = -1;
int32_t x182 = -1;
uint8_t x184 = 8U;
uint16_t x198 = UINT16_MAX;
int32_t x205 = INT32_MIN;
uint8_t x216 = 6U;
int32_t x226 = -23738284;
uint32_t x229 = 2U;
int8_t x233 = 1;
static int16_t x235 = INT16_MIN;
int8_t x243 = 25;
volatile int32_t x245 = 43969890;
volatile int8_t x251 = INT8_MIN;
uint16_t x254 = UINT16_MAX;
volatile int16_t x255 = INT16_MAX;
int32_t t47 = 47665;
int64_t x272 = -1LL;
int64_t x273 = -102511510LL;
int8_t x275 = INT8_MAX;
int64_t x276 = 1093723980164849LL;
int32_t t49 = 2;
volatile int32_t t50 = -135940443;
volatile uint32_t x289 = UINT32_MAX;
int64_t x290 = INT64_MAX;
volatile uint64_t x291 = UINT64_MAX;
uint8_t x307 = 26U;
int32_t x311 = -1;
volatile int32_t t56 = 194;
static volatile int32_t t57 = 1;
volatile int32_t t58 = -1;
int8_t x331 = 28;
int32_t t59 = -5374185;
uint16_t x333 = 149U;
static volatile int32_t t60 = -386424;
static int32_t t61 = 311769;
int64_t x360 = INT64_MAX;
int64_t x387 = 528392146695009LL;
volatile int64_t x390 = -1LL;
int32_t x417 = -18;
volatile uint8_t x418 = 57U;
static volatile uint32_t x420 = 132U;
int16_t x425 = -325;
int64_t x444 = INT64_MIN;
uint32_t x445 = 6018219U;
int16_t x449 = INT16_MIN;
static int16_t x450 = INT16_MIN;
volatile int32_t t76 = -17524728;
volatile int32_t t77 = 176868;
uint8_t x460 = 2U;
static int8_t x466 = INT8_MAX;
volatile int8_t x468 = INT8_MAX;
static int32_t t80 = 984773084;
static volatile int32_t t81 = -447117;
int16_t x477 = 0;
static volatile int64_t x479 = -1LL;
int64_t x480 = INT64_MIN;
uint64_t x488 = 2108626LLU;
int32_t t86 = 27483124;
static int16_t x507 = -1;
static int64_t x509 = -10178914LL;
int32_t t88 = 0;
int32_t x522 = -1013313186;
int32_t x528 = 2718;
int8_t x541 = INT8_MIN;
static volatile int32_t x544 = -1;
int16_t x550 = -1;
volatile uint64_t x555 = 1076189186947LLU;
int64_t x570 = 16744180264LL;
int32_t x574 = -1;
static int16_t x575 = INT16_MAX;
int32_t t98 = 1707894;
static uint8_t x578 = 1U;
volatile int64_t x579 = -1664LL;
volatile uint8_t x586 = UINT8_MAX;
int32_t x589 = INT32_MIN;
int64_t x593 = INT64_MIN;
int8_t x599 = INT8_MIN;
int32_t x605 = INT32_MIN;
int16_t x606 = INT16_MIN;
volatile uint64_t x622 = 540188008266872763LLU;
static uint64_t x623 = 10632221115LLU;
uint16_t x643 = 22956U;
volatile int32_t x647 = -1;
static volatile uint32_t x650 = 225U;
volatile int32_t t113 = 3609;
int16_t x655 = 14;
int8_t x660 = INT8_MIN;
int16_t x674 = -1;
uint8_t x675 = 30U;
volatile int32_t t117 = -8;
static uint32_t x709 = 39U;
volatile int64_t x713 = -1LL;
int64_t x714 = 65414080LL;
int64_t x715 = 121LL;
int64_t x716 = -1LL;
volatile int32_t t127 = -117902;
int16_t x728 = INT16_MIN;
uint64_t x729 = UINT64_MAX;
uint8_t x731 = UINT8_MAX;
uint16_t x734 = 2223U;
static uint16_t x740 = 6U;
int8_t x745 = -24;
uint64_t x747 = UINT64_MAX;
int32_t t132 = 14977003;
uint16_t x767 = 1502U;
static uint64_t x769 = UINT64_MAX;
uint32_t x773 = UINT32_MAX;
volatile uint8_t x776 = UINT8_MAX;
static uint8_t x779 = 48U;
volatile int32_t t138 = -2769;
uint32_t x790 = 322193U;
static int8_t x791 = -1;
static int64_t x796 = INT64_MIN;
int8_t x804 = -39;
int8_t x811 = INT8_MIN;
int16_t x819 = -6;
int64_t x828 = 10682LL;
int32_t t148 = -46;
static uint8_t x833 = UINT8_MAX;
int32_t x852 = -1;
uint16_t x853 = 1U;
static uint8_t x877 = 1U;
int16_t x879 = 1521;
volatile int32_t t154 = 2384;
int16_t x883 = 29;
uint32_t x891 = 9U;
uint16_t x903 = 5U;
uint8_t x904 = 3U;
int8_t x908 = INT8_MAX;
volatile uint16_t x911 = 14099U;
static uint16_t x923 = 46U;
volatile int32_t t163 = -943;
static volatile int32_t x930 = 8;
int16_t x931 = -1;
int64_t x932 = -1LL;
volatile uint16_t x933 = UINT16_MAX;
uint64_t x935 = 3991787767223LLU;
volatile int32_t t165 = -118032;
int64_t x942 = -1LL;
volatile int32_t x944 = -1;
static volatile uint32_t x951 = UINT32_MAX;
int32_t t170 = -20;
volatile int32_t t171 = 43694;
uint8_t x974 = 12U;
uint32_t x985 = 17617U;
uint8_t x989 = 60U;
uint32_t x991 = 14924U;
int16_t x1002 = INT16_MIN;
static uint64_t x1003 = 3263220780LLU;
static int32_t t181 = 21;
int16_t x1011 = INT16_MIN;
uint8_t x1019 = UINT8_MAX;
uint32_t x1037 = UINT32_MAX;
uint64_t x1040 = UINT64_MAX;
volatile int32_t t185 = -42034;
volatile uint32_t x1047 = 120U;
static int32_t t187 = -39367774;
int16_t x1054 = INT16_MIN;
static uint8_t x1056 = 0U;
volatile int64_t x1057 = -199205313LL;
uint32_t x1059 = 236U;
int64_t x1066 = 55262858048856LL;
volatile int16_t x1072 = 1;
static uint32_t x1074 = UINT32_MAX;
volatile uint16_t x1076 = UINT16_MAX;
volatile uint64_t x1077 = 11312581073088426LLU;
static int32_t t193 = 317407910;
int32_t t194 = -4309;
uint32_t x1093 = 570309U;
volatile uint32_t x1106 = UINT32_MAX;
uint64_t x1107 = 5103295213LLU;
static int32_t t199 = -2;


void f0(void) {
    	volatile int8_t x1 = 0;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = -14473012;

    t0 = ((x1%(x2*x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 1045972837U;
	static uint16_t x7 = UINT16_MAX;
	int16_t x8 = 5;
	int32_t t1 = -503;

    t1 = ((x5%(x6*x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = 6U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 1484665;

    t2 = ((x9%(x10*x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x18 = 1U;
	int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t3 = 4131;

    t3 = ((x17%(x18*x19))>x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x25 = INT64_MIN;
	int16_t x26 = INT16_MAX;
	uint64_t x27 = 7172852LLU;
	int16_t x28 = INT16_MIN;
	int32_t t4 = -23451919;

    t4 = ((x25%(x26*x27))>x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x33 = 55LLU;
	uint32_t x34 = 3476788U;
	volatile uint8_t x35 = UINT8_MAX;
	static int64_t x36 = INT64_MIN;
	int32_t t5 = 485869;

    t5 = ((x33%(x34*x35))>x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x38 = INT32_MIN;
	volatile int32_t x39 = 1;
	volatile int32_t x40 = INT32_MIN;
	int32_t t6 = -911914;

    t6 = ((x37%(x38*x39))>x40);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x41 = INT8_MIN;
	int8_t x43 = -1;
	volatile int8_t x44 = INT8_MIN;
	int32_t t7 = 48332;

    t7 = ((x41%(x42*x43))>x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x45 = INT16_MIN;
	int8_t x46 = -1;
	volatile int16_t x47 = INT16_MIN;
	volatile uint32_t x48 = 14139051U;
	volatile int32_t t8 = 48008382;

    t8 = ((x45%(x46*x47))>x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x50 = -1;
	int32_t x51 = -1;
	int32_t t9 = -52859;

    t9 = ((x49%(x50*x51))>x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 113U;
	static int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 6U;
	int32_t t10 = 0;

    t10 = ((x53%(x54*x55))>x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x62 = -15;
	static uint32_t x64 = UINT32_MAX;
	volatile int32_t t11 = 2;

    t11 = ((x61%(x62*x63))>x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = -102799LL;
	static volatile uint16_t x66 = 14U;
	uint64_t x67 = UINT64_MAX;

    t12 = ((x65%(x66*x67))>x68);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x70 = INT32_MAX;
	int32_t x71 = -1;
	volatile uint8_t x72 = 1U;

    t13 = ((x69%(x70*x71))>x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = -1LL;
	static uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 15445U;
	volatile int32_t t14 = 25434016;

    t14 = ((x73%(x74*x75))>x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x86 = 8910LL;
	uint32_t x87 = 5979594U;

    t15 = ((x85%(x86*x87))>x88);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x90 = -1;
	volatile uint16_t x91 = UINT16_MAX;
	static int64_t x92 = -3482579013490838901LL;
	volatile int32_t t16 = -100;

    t16 = ((x89%(x90*x91))>x92);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = 1U;

    t17 = ((x93%(x94*x95))>x96);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x98 = 1088904LL;
	int64_t x99 = -25519532LL;
	static volatile int64_t x100 = INT64_MIN;
	volatile int32_t t18 = 1018;

    t18 = ((x97%(x98*x99))>x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x105 = -15;
	volatile uint64_t x106 = 5LLU;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = 1;
	static volatile int32_t t19 = -192;

    t19 = ((x105%(x106*x107))>x108);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x109 = 1U;
	static int32_t x110 = -621;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 2U;
	volatile int32_t t20 = 26;

    t20 = ((x109%(x110*x111))>x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x113 = 2015U;
	int64_t x114 = -6638377LL;
	uint32_t x115 = 729269U;
	uint8_t x116 = UINT8_MAX;
	int32_t t21 = -258419625;

    t21 = ((x113%(x114*x115))>x116);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	volatile int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -30;

    t22 = ((x121%(x122*x123))>x124);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x129 = -1;
	static uint16_t x131 = 5U;
	static int32_t x132 = -1;
	static volatile int32_t t23 = -209931;

    t23 = ((x129%(x130*x131))>x132);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x134 = -1;
	int64_t x135 = -203369738988353LL;
	int64_t x136 = INT64_MIN;
	int32_t t24 = 83157;

    t24 = ((x133%(x134*x135))>x136);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x138 = 1;
	int32_t x139 = INT32_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t25 = -1458;

    t25 = ((x137%(x138*x139))>x140);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x147 = 7286704;
	volatile int32_t t26 = -762104;

    t26 = ((x145%(x146*x147))>x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x153 = 0U;
	volatile int16_t x154 = 2;
	int64_t x155 = -33211359LL;
	static int32_t x156 = -138162;
	int32_t t27 = -775925;

    t27 = ((x153%(x154*x155))>x156);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	volatile int32_t t28 = 2677639;

    t28 = ((x157%(x158*x159))>x160);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x161 = -6;
	int64_t x162 = -1LL;
	uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t29 = 2556263;

    t29 = ((x161%(x162*x163))>x164);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x169 = 1;
	uint64_t x170 = 523LLU;
	uint64_t x171 = 6713948921LLU;
	volatile int32_t t30 = 260730;

    t30 = ((x169%(x170*x171))>x172);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x173 = 3759652U;
	int32_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	int32_t x176 = -1;
	static volatile int32_t t31 = -2086719;

    t31 = ((x173%(x174*x175))>x176);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x181 = 0;
	int8_t x183 = INT8_MIN;
	int32_t t32 = 3402254;

    t32 = ((x181%(x182*x183))>x184);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x197 = -1;
	uint32_t x199 = 1707U;
	int64_t x200 = INT64_MIN;
	int32_t t33 = -1;

    t33 = ((x197%(x198*x199))>x200);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x201 = -1;
	int8_t x202 = INT8_MAX;
	int8_t x203 = 1;
	int16_t x204 = INT16_MIN;
	int32_t t34 = -41029;

    t34 = ((x201%(x202*x203))>x204);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x206 = UINT8_MAX;
	static int64_t x207 = 44892LL;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t35 = 2491601;

    t35 = ((x205%(x206*x207))>x208);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x209 = 97;
	static uint16_t x210 = 4737U;
	int16_t x211 = INT16_MIN;
	volatile int16_t x212 = INT16_MIN;
	static int32_t t36 = 592123;

    t36 = ((x209%(x210*x211))>x212);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 1LLU;
	volatile int32_t t37 = -1;

    t37 = ((x213%(x214*x215))>x216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x217 = INT32_MIN;
	uint32_t x218 = 14U;
	int64_t x219 = 20627820LL;
	uint8_t x220 = 106U;
	volatile int32_t t38 = 1;

    t38 = ((x217%(x218*x219))>x220);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x225 = INT16_MIN;
	int8_t x227 = -5;
	volatile int64_t x228 = INT64_MAX;
	int32_t t39 = 66054323;

    t39 = ((x225%(x226*x227))>x228);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x230 = 728;
	static volatile int16_t x231 = 3956;
	uint8_t x232 = 73U;
	int32_t t40 = 935176656;

    t40 = ((x229%(x230*x231))>x232);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x234 = 61U;
	static volatile int64_t x236 = -1LL;
	int32_t t41 = 1;

    t41 = ((x233%(x234*x235))>x236);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x241 = -1526786240885136LL;
	volatile int16_t x242 = INT16_MAX;
	int16_t x244 = -1;
	int32_t t42 = -45;

    t42 = ((x241%(x242*x243))>x244);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x246 = -1;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t43 = -1;

    t43 = ((x245%(x246*x247))>x248);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x249 = 10000624768537LLU;
	uint16_t x250 = 2444U;
	int32_t x252 = 772938;
	int32_t t44 = 200;

    t44 = ((x249%(x250*x251))>x252);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x253 = -1;
	volatile int32_t x256 = -9917;
	int32_t t45 = -33;

    t45 = ((x253%(x254*x255))>x256);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x257 = UINT16_MAX;
	int8_t x258 = -11;
	int8_t x259 = -18;
	uint16_t x260 = 13U;
	volatile int32_t t46 = -241988;

    t46 = ((x257%(x258*x259))>x260);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint16_t x261 = UINT16_MAX;
	static uint32_t x262 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 45088761438LLU;

    t47 = ((x261%(x262*x263))>x264);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x269 = 3186U;
	static int16_t x270 = INT16_MIN;
	int8_t x271 = -1;
	volatile int32_t t48 = -1;

    t48 = ((x269%(x270*x271))>x272);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x274 = INT8_MIN;

    t49 = ((x273%(x274*x275))>x276);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x278 = 14459;
	static int16_t x279 = -526;
	int64_t x280 = -1LL;

    t50 = ((x277%(x278*x279))>x280);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x281 = 1U;
	volatile int32_t x282 = -1;
	int16_t x283 = 7201;
	int64_t x284 = INT64_MIN;
	int32_t t51 = -1;

    t51 = ((x281%(x282*x283))>x284);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x285 = 26U;
	int16_t x286 = INT16_MAX;
	int64_t x287 = -1LL;
	int64_t x288 = 15282193428060LL;
	volatile int32_t t52 = -23691;

    t52 = ((x285%(x286*x287))>x288);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x292 = INT32_MIN;
	int32_t t53 = 35905;

    t53 = ((x289%(x290*x291))>x292);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x301 = 25067U;
	volatile int8_t x302 = INT8_MIN;
	int32_t x303 = -1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t54 = -3;

    t54 = ((x301%(x302*x303))>x304);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x305 = INT16_MAX;
	static uint32_t x306 = UINT32_MAX;
	static int64_t x308 = 20373LL;
	volatile int32_t t55 = 5369248;

    t55 = ((x305%(x306*x307))>x308);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	int16_t x310 = 5579;
	int32_t x312 = INT32_MIN;

    t56 = ((x309%(x310*x311))>x312);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x317 = INT16_MIN;
	static volatile uint64_t x318 = 926LLU;
	int32_t x319 = -452953323;
	uint32_t x320 = UINT32_MAX;

    t57 = ((x317%(x318*x319))>x320);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	uint64_t x328 = UINT64_MAX;

    t58 = ((x325%(x326*x327))>x328);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x329 = -1;
	int16_t x330 = -189;
	uint64_t x332 = 31LLU;

    t59 = ((x329%(x330*x331))>x332);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x334 = UINT8_MAX;
	int8_t x335 = INT8_MAX;
	int8_t x336 = INT8_MIN;

    t60 = ((x333%(x334*x335))>x336);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x349 = INT16_MIN;
	static uint64_t x350 = UINT64_MAX;
	volatile int8_t x351 = INT8_MIN;
	static int8_t x352 = INT8_MIN;

    t61 = ((x349%(x350*x351))>x352);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x353 = INT32_MIN;
	volatile int32_t x354 = INT32_MAX;
	uint32_t x355 = 80748306U;
	uint16_t x356 = UINT16_MAX;
	int32_t t62 = -6;

    t62 = ((x353%(x354*x355))>x356);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x358 = -1;
	int16_t x359 = -1;
	static int32_t t63 = -12383;

    t63 = ((x357%(x358*x359))>x360);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x381 = UINT32_MAX;
	volatile uint16_t x382 = 23U;
	int16_t x383 = INT16_MIN;
	int16_t x384 = -57;
	int32_t t64 = -102615167;

    t64 = ((x381%(x382*x383))>x384);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x385 = INT16_MIN;
	static int8_t x386 = INT8_MIN;
	int16_t x388 = -1;
	static volatile int32_t t65 = -116649350;

    t65 = ((x385%(x386*x387))>x388);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x389 = INT8_MIN;
	uint32_t x391 = 102848U;
	int8_t x392 = INT8_MIN;
	int32_t t66 = 0;

    t66 = ((x389%(x390*x391))>x392);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x405 = INT16_MIN;
	static volatile int64_t x406 = 17076LL;
	int8_t x407 = -1;
	volatile int64_t x408 = 8216902283LL;
	int32_t t67 = -97386;

    t67 = ((x405%(x406*x407))>x408);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x409 = INT32_MIN;
	volatile int8_t x410 = 1;
	static int8_t x411 = 3;
	volatile int64_t x412 = -1LL;
	static volatile int32_t t68 = 186548;

    t68 = ((x409%(x410*x411))>x412);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x413 = 5509U;
	int8_t x414 = -1;
	static uint16_t x415 = 757U;
	volatile int32_t x416 = 131837037;
	int32_t t69 = -3;

    t69 = ((x413%(x414*x415))>x416);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x419 = -1748233427176LL;
	static volatile int32_t t70 = 2441176;

    t70 = ((x417%(x418*x419))>x420);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x426 = -1LL;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = -282391;
	static int32_t t71 = 3257;

    t71 = ((x425%(x426*x427))>x428);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x433 = INT8_MAX;
	volatile int32_t x434 = -443;
	volatile uint32_t x435 = 241473564U;
	int32_t x436 = 19;
	volatile int32_t t72 = 3;

    t72 = ((x433%(x434*x435))>x436);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x437 = INT16_MIN;
	int16_t x438 = INT16_MAX;
	static int8_t x439 = -1;
	int16_t x440 = -192;
	static int32_t t73 = 139;

    t73 = ((x437%(x438*x439))>x440);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x441 = 9257179LLU;
	static int16_t x442 = -873;
	int8_t x443 = INT8_MAX;
	int32_t t74 = -23076295;

    t74 = ((x441%(x442*x443))>x444);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x446 = UINT64_MAX;
	volatile uint8_t x447 = UINT8_MAX;
	int32_t x448 = -10752;
	static int32_t t75 = -11783;

    t75 = ((x445%(x446*x447))>x448);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x451 = -1LL;
	volatile int32_t x452 = INT32_MAX;

    t76 = ((x449%(x450*x451))>x452);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x453 = 38260474661LLU;
	uint64_t x454 = UINT64_MAX;
	uint8_t x455 = 98U;
	int16_t x456 = INT16_MIN;

    t77 = ((x453%(x454*x455))>x456);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x457 = -1;
	volatile uint32_t x458 = 57525U;
	uint32_t x459 = 7829U;
	int32_t t78 = 151204081;

    t78 = ((x457%(x458*x459))>x460);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x465 = INT32_MIN;
	static int16_t x467 = INT16_MIN;
	volatile int32_t t79 = -3847642;

    t79 = ((x465%(x466*x467))>x468);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x469 = -1;
	volatile uint64_t x470 = UINT64_MAX;
	volatile uint16_t x471 = 239U;
	int64_t x472 = -1LL;

    t80 = ((x469%(x470*x471))>x472);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x473 = UINT32_MAX;
	volatile uint64_t x474 = 61960424896078246LLU;
	uint8_t x475 = UINT8_MAX;
	int64_t x476 = INT64_MAX;

    t81 = ((x473%(x474*x475))>x476);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x478 = UINT32_MAX;
	volatile int32_t t82 = 24642;

    t82 = ((x477%(x478*x479))>x480);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x481 = 0U;
	int16_t x482 = 5473;
	uint8_t x483 = 26U;
	uint32_t x484 = 548U;
	volatile int32_t t83 = -28;

    t83 = ((x481%(x482*x483))>x484);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x485 = -1;
	uint64_t x486 = 5625862434369124LLU;
	uint64_t x487 = 260LLU;
	static int32_t t84 = 1;

    t84 = ((x485%(x486*x487))>x488);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x489 = -1;
	static int16_t x490 = INT16_MAX;
	static int32_t x491 = 1400;
	uint16_t x492 = 3716U;
	int32_t t85 = 414787;

    t85 = ((x489%(x490*x491))>x492);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x493 = INT16_MIN;
	uint8_t x494 = UINT8_MAX;
	int32_t x495 = -1;
	int8_t x496 = INT8_MAX;

    t86 = ((x493%(x494*x495))>x496);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x505 = INT16_MIN;
	static volatile int8_t x506 = INT8_MIN;
	uint64_t x508 = 10557631LLU;
	static volatile int32_t t87 = 1562;

    t87 = ((x505%(x506*x507))>x508);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x510 = -284;
	static uint64_t x511 = 124153554216942LLU;
	int64_t x512 = -15537525206LL;

    t88 = ((x509%(x510*x511))>x512);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x517 = 92U;
	static volatile uint32_t x518 = 361518843U;
	volatile uint64_t x519 = 1874793079LLU;
	static volatile int32_t x520 = INT32_MIN;
	static volatile int32_t t89 = 16999;

    t89 = ((x517%(x518*x519))>x520);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x521 = UINT32_MAX;
	int8_t x523 = -1;
	int64_t x524 = INT64_MAX;
	volatile int32_t t90 = -7;

    t90 = ((x521%(x522*x523))>x524);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	int64_t x526 = INT64_MAX;
	int32_t x527 = -1;
	int32_t t91 = -128381275;

    t91 = ((x525%(x526*x527))>x528);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x542 = 1U;
	int8_t x543 = -2;
	static int32_t t92 = -3008588;

    t92 = ((x541%(x542*x543))>x544);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x549 = -1;
	int16_t x551 = -1;
	int8_t x552 = INT8_MAX;
	static int32_t t93 = 0;

    t93 = ((x549%(x550*x551))>x552);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x553 = INT8_MIN;
	volatile int32_t x554 = -1;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t94 = 201305281;

    t94 = ((x553%(x554*x555))>x556);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x557 = 1540U;
	uint64_t x558 = 76520LLU;
	int64_t x559 = 4057362524933411LL;
	static uint32_t x560 = UINT32_MAX;
	int32_t t95 = -1728;

    t95 = ((x557%(x558*x559))>x560);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x561 = 63;
	uint64_t x562 = 4183272655436LLU;
	static int16_t x563 = INT16_MIN;
	int8_t x564 = -1;
	int32_t t96 = 19;

    t96 = ((x561%(x562*x563))>x564);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x569 = INT64_MIN;
	volatile uint32_t x571 = 126U;
	volatile uint16_t x572 = 23829U;
	volatile int32_t t97 = -2570;

    t97 = ((x569%(x570*x571))>x572);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x573 = INT32_MAX;
	int32_t x576 = -1;

    t98 = ((x573%(x574*x575))>x576);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x577 = INT8_MIN;
	int8_t x580 = INT8_MIN;
	volatile int32_t t99 = 119;

    t99 = ((x577%(x578*x579))>x580);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x585 = INT8_MIN;
	static uint32_t x587 = UINT32_MAX;
	int64_t x588 = INT64_MAX;
	int32_t t100 = 0;

    t100 = ((x585%(x586*x587))>x588);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x590 = INT8_MIN;
	static volatile uint64_t x591 = 3137097LLU;
	uint32_t x592 = 1U;
	int32_t t101 = 48587994;

    t101 = ((x589%(x590*x591))>x592);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x594 = 2956109U;
	uint16_t x595 = 205U;
	int8_t x596 = 53;
	int32_t t102 = 3;

    t102 = ((x593%(x594*x595))>x596);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x597 = INT8_MIN;
	int64_t x598 = -1LL;
	static volatile int32_t x600 = 86497998;
	volatile int32_t t103 = 3150;

    t103 = ((x597%(x598*x599))>x600);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x601 = 206552064LLU;
	static int16_t x602 = 14168;
	int64_t x603 = 12284176064LL;
	int32_t x604 = INT32_MIN;
	int32_t t104 = 3573644;

    t104 = ((x601%(x602*x603))>x604);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x607 = -10995;
	volatile int64_t x608 = INT64_MIN;
	int32_t t105 = 354101;

    t105 = ((x605%(x606*x607))>x608);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x613 = -322LL;
	int8_t x614 = INT8_MIN;
	static int32_t x615 = -6;
	int32_t x616 = INT32_MIN;
	volatile int32_t t106 = 12;

    t106 = ((x613%(x614*x615))>x616);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x621 = 1414231552U;
	int16_t x624 = 3523;
	volatile int32_t t107 = 16630698;

    t107 = ((x621%(x622*x623))>x624);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x625 = -1;
	int8_t x626 = INT8_MIN;
	volatile int16_t x627 = -1;
	volatile int64_t x628 = 556536978783LL;
	volatile int32_t t108 = -428;

    t108 = ((x625%(x626*x627))>x628);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x629 = -1;
	int32_t x630 = 1;
	int64_t x631 = 739642633LL;
	static int32_t x632 = INT32_MIN;
	volatile int32_t t109 = -159761363;

    t109 = ((x629%(x630*x631))>x632);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x637 = 1160523140110LL;
	uint16_t x638 = 9706U;
	int64_t x639 = -1LL;
	int64_t x640 = -1LL;
	volatile int32_t t110 = 45022855;

    t110 = ((x637%(x638*x639))>x640);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x641 = -1;
	uint8_t x642 = 114U;
	static int64_t x644 = INT64_MIN;
	int32_t t111 = -2664;

    t111 = ((x641%(x642*x643))>x644);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x645 = INT64_MIN;
	int8_t x646 = -36;
	int8_t x648 = INT8_MAX;
	volatile int32_t t112 = 14865;

    t112 = ((x645%(x646*x647))>x648);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x649 = UINT64_MAX;
	static volatile int64_t x651 = 430749069476809LL;
	uint64_t x652 = UINT64_MAX;

    t113 = ((x649%(x650*x651))>x652);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x653 = -1;
	int16_t x654 = -1;
	volatile int8_t x656 = INT8_MIN;
	static int32_t t114 = -412464;

    t114 = ((x653%(x654*x655))>x656);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x657 = 72;
	static int32_t x658 = -1;
	volatile int8_t x659 = INT8_MIN;
	volatile int32_t t115 = 2;

    t115 = ((x657%(x658*x659))>x660);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x669 = INT64_MIN;
	int8_t x670 = INT8_MIN;
	volatile uint32_t x671 = 7U;
	int16_t x672 = 1541;
	int32_t t116 = 8999;

    t116 = ((x669%(x670*x671))>x672);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x673 = INT64_MIN;
	static volatile int32_t x676 = -5847773;

    t117 = ((x673%(x674*x675))>x676);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x677 = INT32_MAX;
	int8_t x678 = -12;
	int8_t x679 = 15;
	volatile int8_t x680 = INT8_MIN;
	int32_t t118 = -354;

    t118 = ((x677%(x678*x679))>x680);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x681 = -1;
	uint8_t x682 = UINT8_MAX;
	volatile uint32_t x683 = 29343095U;
	static int64_t x684 = 2710645282LL;
	volatile int32_t t119 = -60;

    t119 = ((x681%(x682*x683))>x684);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x685 = -1;
	static int16_t x686 = INT16_MIN;
	static volatile int64_t x687 = 99LL;
	volatile uint64_t x688 = 532LLU;
	volatile int32_t t120 = 5676503;

    t120 = ((x685%(x686*x687))>x688);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x689 = -1150470738739837484LL;
	static uint16_t x690 = UINT16_MAX;
	int8_t x691 = -3;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t121 = 5771138;

    t121 = ((x689%(x690*x691))>x692);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	volatile int8_t x694 = 18;
	uint8_t x695 = UINT8_MAX;
	uint8_t x696 = UINT8_MAX;
	int32_t t122 = 0;

    t122 = ((x693%(x694*x695))>x696);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x705 = INT8_MIN;
	int64_t x706 = INT64_MAX;
	volatile uint64_t x707 = 5173971747537599LLU;
	static int16_t x708 = -1;
	volatile int32_t t123 = -121;

    t123 = ((x705%(x706*x707))>x708);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x710 = UINT32_MAX;
	int32_t x711 = INT32_MIN;
	uint32_t x712 = UINT32_MAX;
	int32_t t124 = -2888451;

    t124 = ((x709%(x710*x711))>x712);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t t125 = 3;

    t125 = ((x713%(x714*x715))>x716);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x717 = -1;
	int32_t x718 = 936531;
	uint32_t x719 = 3679911U;
	int64_t x720 = 1804017LL;
	volatile int32_t t126 = 252051312;

    t126 = ((x717%(x718*x719))>x720);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x721 = -1;
	volatile int64_t x722 = 25325792548467LL;
	uint64_t x723 = 141771764171LLU;
	int8_t x724 = INT8_MIN;

    t127 = ((x721%(x722*x723))>x724);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x725 = 132564088LL;
	volatile int32_t x726 = -1442;
	uint16_t x727 = 705U;
	int32_t t128 = 12216519;

    t128 = ((x725%(x726*x727))>x728);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x730 = 2245U;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t129 = -440355206;

    t129 = ((x729%(x730*x731))>x732);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x733 = INT64_MIN;
	int8_t x735 = -30;
	uint64_t x736 = 76975844186192LLU;
	static volatile int32_t t130 = 363198253;

    t130 = ((x733%(x734*x735))>x736);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x737 = 19;
	static uint64_t x738 = UINT64_MAX;
	static uint8_t x739 = UINT8_MAX;
	static int32_t t131 = -1;

    t131 = ((x737%(x738*x739))>x740);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x746 = UINT16_MAX;
	int64_t x748 = INT64_MAX;

    t132 = ((x745%(x746*x747))>x748);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x757 = 22199546810689LL;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = UINT32_MAX;
	int64_t x760 = -287519648331043940LL;
	int32_t t133 = 38;

    t133 = ((x757%(x758*x759))>x760);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x761 = -1;
	static volatile int16_t x762 = 1;
	int8_t x763 = INT8_MIN;
	static volatile uint16_t x764 = 452U;
	int32_t t134 = 10018817;

    t134 = ((x761%(x762*x763))>x764);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x765 = 3409;
	static uint8_t x766 = 3U;
	static int8_t x768 = -1;
	volatile int32_t t135 = 111181612;

    t135 = ((x765%(x766*x767))>x768);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x770 = 107946083U;
	int32_t x771 = INT32_MIN;
	int64_t x772 = -1LL;
	int32_t t136 = 47;

    t136 = ((x769%(x770*x771))>x772);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x774 = 20U;
	static int16_t x775 = INT16_MIN;
	int32_t t137 = 499451398;

    t137 = ((x773%(x774*x775))>x776);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x777 = INT8_MIN;
	uint64_t x778 = 229005541632LLU;
	int64_t x780 = -2094793229LL;

    t138 = ((x777%(x778*x779))>x780);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x785 = UINT64_MAX;
	int64_t x786 = INT64_MAX;
	volatile uint64_t x787 = 57938809192957982LLU;
	int16_t x788 = INT16_MAX;
	volatile int32_t t139 = 15700;

    t139 = ((x785%(x786*x787))>x788);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x789 = INT8_MAX;
	static int16_t x792 = INT16_MAX;
	volatile int32_t t140 = -1856;

    t140 = ((x789%(x790*x791))>x792);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x793 = INT32_MAX;
	int16_t x794 = INT16_MIN;
	int32_t x795 = -1;
	static volatile int32_t t141 = -6885870;

    t141 = ((x793%(x794*x795))>x796);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x797 = INT8_MIN;
	int64_t x798 = INT64_MAX;
	int32_t x799 = -1;
	static volatile uint64_t x800 = 23513843063LLU;
	volatile int32_t t142 = -518697;

    t142 = ((x797%(x798*x799))>x800);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x801 = 57497913580LL;
	int16_t x802 = -16;
	int8_t x803 = INT8_MIN;
	int32_t t143 = -4970241;

    t143 = ((x801%(x802*x803))>x804);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x809 = 8U;
	uint64_t x810 = 5186910112LLU;
	int16_t x812 = INT16_MIN;
	volatile int32_t t144 = 79;

    t144 = ((x809%(x810*x811))>x812);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x813 = UINT16_MAX;
	int8_t x814 = -1;
	static uint8_t x815 = 7U;
	uint8_t x816 = 2U;
	int32_t t145 = 126;

    t145 = ((x813%(x814*x815))>x816);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x817 = INT64_MIN;
	volatile int16_t x818 = INT16_MIN;
	volatile int32_t x820 = -1;
	int32_t t146 = -16618469;

    t146 = ((x817%(x818*x819))>x820);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x821 = INT8_MAX;
	uint16_t x822 = UINT16_MAX;
	int8_t x823 = -1;
	int32_t x824 = INT32_MIN;
	volatile int32_t t147 = -123701;

    t147 = ((x821%(x822*x823))>x824);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x825 = UINT8_MAX;
	volatile int64_t x826 = -13588518LL;
	uint16_t x827 = 16U;

    t148 = ((x825%(x826*x827))>x828);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x829 = -100;
	int8_t x830 = INT8_MAX;
	uint8_t x831 = 11U;
	uint32_t x832 = 1373120339U;
	volatile int32_t t149 = -6556;

    t149 = ((x829%(x830*x831))>x832);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x834 = 67837710LLU;
	uint32_t x835 = 2400345U;
	int16_t x836 = -1;
	static volatile int32_t t150 = 2714;

    t150 = ((x833%(x834*x835))>x836);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x849 = -15;
	int32_t x850 = -31956662;
	int8_t x851 = -1;
	static int32_t t151 = 111;

    t151 = ((x849%(x850*x851))>x852);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x854 = 80223431U;
	static int32_t x855 = -95409;
	uint64_t x856 = 79542199848562LLU;
	volatile int32_t t152 = -476;

    t152 = ((x853%(x854*x855))>x856);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x861 = -82LL;
	static int32_t x862 = -1;
	int16_t x863 = -1369;
	int64_t x864 = -387917331489785370LL;
	volatile int32_t t153 = 3395295;

    t153 = ((x861%(x862*x863))>x864);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x878 = UINT32_MAX;
	volatile int32_t x880 = INT32_MAX;

    t154 = ((x877%(x878*x879))>x880);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x881 = -1LL;
	int16_t x882 = -1;
	int64_t x884 = -1LL;
	volatile int32_t t155 = 5924;

    t155 = ((x881%(x882*x883))>x884);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x889 = -6757;
	volatile int64_t x890 = 536795640LL;
	int8_t x892 = INT8_MIN;
	volatile int32_t t156 = -909;

    t156 = ((x889%(x890*x891))>x892);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x897 = UINT64_MAX;
	int8_t x898 = 22;
	int8_t x899 = INT8_MIN;
	static int8_t x900 = -2;
	int32_t t157 = -3555;

    t157 = ((x897%(x898*x899))>x900);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x901 = 9;
	int32_t x902 = -22040481;
	int32_t t158 = 130275499;

    t158 = ((x901%(x902*x903))>x904);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x905 = UINT32_MAX;
	static uint64_t x906 = UINT64_MAX;
	static volatile int8_t x907 = -1;
	int32_t t159 = 19217;

    t159 = ((x905%(x906*x907))>x908);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x909 = INT8_MIN;
	static int16_t x910 = 1;
	volatile int32_t x912 = INT32_MAX;
	int32_t t160 = -24200;

    t160 = ((x909%(x910*x911))>x912);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x917 = -1;
	int8_t x918 = -1;
	uint16_t x919 = UINT16_MAX;
	volatile uint8_t x920 = 5U;
	int32_t t161 = -2993;

    t161 = ((x917%(x918*x919))>x920);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x921 = UINT8_MAX;
	volatile uint32_t x922 = UINT32_MAX;
	volatile int32_t x924 = -1;
	volatile int32_t t162 = 14922710;

    t162 = ((x921%(x922*x923))>x924);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x925 = INT16_MIN;
	uint32_t x926 = 38495U;
	uint64_t x927 = UINT64_MAX;
	int64_t x928 = INT64_MIN;

    t163 = ((x925%(x926*x927))>x928);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x929 = -1;
	volatile int32_t t164 = -151333;

    t164 = ((x929%(x930*x931))>x932);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x934 = 34;
	int64_t x936 = 8LL;

    t165 = ((x933%(x934*x935))>x936);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x937 = 27;
	int16_t x938 = INT16_MIN;
	int8_t x939 = -1;
	static uint16_t x940 = 10253U;
	volatile int32_t t166 = -957746;

    t166 = ((x937%(x938*x939))>x940);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x941 = 1450723001202214930LLU;
	volatile int8_t x943 = 1;
	volatile int32_t t167 = 3;

    t167 = ((x941%(x942*x943))>x944);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x945 = -1;
	uint8_t x946 = 2U;
	int8_t x947 = INT8_MIN;
	static uint8_t x948 = 79U;
	int32_t t168 = -782;

    t168 = ((x945%(x946*x947))>x948);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x949 = INT16_MAX;
	int16_t x950 = INT16_MAX;
	uint8_t x952 = 9U;
	volatile int32_t t169 = 68293;

    t169 = ((x949%(x950*x951))>x952);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x953 = INT32_MIN;
	volatile uint64_t x954 = 42635LLU;
	int64_t x955 = INT64_MIN;
	volatile int8_t x956 = 0;

    t170 = ((x953%(x954*x955))>x956);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x957 = INT64_MAX;
	static uint8_t x958 = 35U;
	volatile uint16_t x959 = 236U;
	int8_t x960 = -1;

    t171 = ((x957%(x958*x959))>x960);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x961 = 260191420;
	static int8_t x962 = INT8_MIN;
	int16_t x963 = -1;
	static int8_t x964 = -37;
	int32_t t172 = 1020293570;

    t172 = ((x961%(x962*x963))>x964);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x965 = INT64_MIN;
	int32_t x966 = -1;
	int8_t x967 = -1;
	int32_t x968 = INT32_MIN;
	volatile int32_t t173 = -810008;

    t173 = ((x965%(x966*x967))>x968);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x969 = 53U;
	uint8_t x970 = UINT8_MAX;
	static volatile int64_t x971 = -1LL;
	static int16_t x972 = 0;
	int32_t t174 = 106;

    t174 = ((x969%(x970*x971))>x972);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x973 = UINT32_MAX;
	volatile int32_t x975 = -3614162;
	uint16_t x976 = 0U;
	volatile int32_t t175 = 217;

    t175 = ((x973%(x974*x975))>x976);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x977 = 0U;
	int64_t x978 = 1376362LL;
	uint64_t x979 = UINT64_MAX;
	volatile int16_t x980 = INT16_MIN;
	int32_t t176 = 15435250;

    t176 = ((x977%(x978*x979))>x980);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x986 = UINT32_MAX;
	int32_t x987 = INT32_MAX;
	int32_t x988 = INT32_MIN;
	static int32_t t177 = 165428;

    t177 = ((x985%(x986*x987))>x988);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x990 = -50;
	int8_t x992 = INT8_MAX;
	static int32_t t178 = 13;

    t178 = ((x989%(x990*x991))>x992);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x993 = 6915898301LLU;
	int8_t x994 = -1;
	volatile int32_t x995 = -1;
	static int64_t x996 = INT64_MIN;
	int32_t t179 = 89298823;

    t179 = ((x993%(x994*x995))>x996);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x997 = INT64_MIN;
	volatile int8_t x998 = INT8_MIN;
	int64_t x999 = 1278066629110LL;
	uint16_t x1000 = 328U;
	int32_t t180 = -1;

    t180 = ((x997%(x998*x999))>x1000);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1001 = -5811032;
	int64_t x1004 = INT64_MIN;

    t181 = ((x1001%(x1002*x1003))>x1004);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1009 = 3U;
	int64_t x1010 = 492892061227LL;
	volatile int32_t x1012 = INT32_MAX;
	volatile int32_t t182 = -197432;

    t182 = ((x1009%(x1010*x1011))>x1012);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1017 = UINT8_MAX;
	static uint32_t x1018 = 3962369U;
	uint64_t x1020 = 4585994530496524LLU;
	static volatile int32_t t183 = -14;

    t183 = ((x1017%(x1018*x1019))>x1020);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1025 = INT16_MIN;
	int8_t x1026 = -1;
	static int32_t x1027 = -1;
	uint32_t x1028 = 1510U;
	int32_t t184 = 30951140;

    t184 = ((x1025%(x1026*x1027))>x1028);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1038 = -8LL;
	uint8_t x1039 = 95U;

    t185 = ((x1037%(x1038*x1039))>x1040);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1041 = INT32_MIN;
	static int16_t x1042 = -1;
	int32_t x1043 = 893;
	volatile int64_t x1044 = 199639LL;
	static int32_t t186 = -42;

    t186 = ((x1041%(x1042*x1043))>x1044);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1045 = -1;
	volatile int32_t x1046 = INT32_MAX;
	uint32_t x1048 = UINT32_MAX;

    t187 = ((x1045%(x1046*x1047))>x1048);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x1053 = INT64_MAX;
	int32_t x1055 = 30;
	int32_t t188 = 1100;

    t188 = ((x1053%(x1054*x1055))>x1056);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1058 = -1;
	uint8_t x1060 = 85U;
	int32_t t189 = 3134092;

    t189 = ((x1057%(x1058*x1059))>x1060);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1065 = -26530789504LL;
	int16_t x1067 = INT16_MIN;
	int64_t x1068 = INT64_MIN;
	int32_t t190 = 24285026;

    t190 = ((x1065%(x1066*x1067))>x1068);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x1069 = UINT64_MAX;
	uint16_t x1070 = 8061U;
	int8_t x1071 = INT8_MIN;
	int32_t t191 = 23959;

    t191 = ((x1069%(x1070*x1071))>x1072);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1073 = -1635;
	volatile int32_t x1075 = INT32_MIN;
	int32_t t192 = 14298;

    t192 = ((x1073%(x1074*x1075))>x1076);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x1078 = 2065214U;
	int32_t x1079 = -1;
	volatile int16_t x1080 = INT16_MAX;

    t193 = ((x1077%(x1078*x1079))>x1080);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1081 = 0U;
	int8_t x1082 = INT8_MIN;
	static int64_t x1083 = -20LL;
	uint32_t x1084 = UINT32_MAX;

    t194 = ((x1081%(x1082*x1083))>x1084);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x1089 = UINT32_MAX;
	uint32_t x1090 = 2U;
	uint64_t x1091 = 173445490484LLU;
	int64_t x1092 = INT64_MAX;
	int32_t t195 = -20712;

    t195 = ((x1089%(x1090*x1091))>x1092);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1094 = -1;
	uint8_t x1095 = UINT8_MAX;
	volatile int32_t x1096 = -25;
	volatile int32_t t196 = 12;

    t196 = ((x1093%(x1094*x1095))>x1096);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1097 = -1;
	static int32_t x1098 = -1;
	int8_t x1099 = 21;
	int64_t x1100 = INT64_MIN;
	int32_t t197 = 3;

    t197 = ((x1097%(x1098*x1099))>x1100);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1101 = 3U;
	uint16_t x1102 = 19510U;
	static int16_t x1103 = INT16_MIN;
	uint16_t x1104 = 197U;
	static int32_t t198 = 27;

    t198 = ((x1101%(x1102*x1103))>x1104);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1105 = 0;
	uint16_t x1108 = 2798U;

    t199 = ((x1105%(x1106*x1107))>x1108);

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

