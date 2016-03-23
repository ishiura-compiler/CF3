
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

int64_t x11 = INT64_MIN;
int32_t t1 = 33739088;
uint32_t x19 = UINT32_MAX;
uint16_t x20 = 7U;
int32_t t2 = 1;
uint16_t x40 = UINT16_MAX;
int32_t t7 = -1;
uint8_t x45 = 0U;
volatile int32_t t8 = 102343;
uint8_t x53 = 1U;
static uint64_t x56 = 1LLU;
int16_t x59 = INT16_MAX;
static volatile int64_t x70 = INT64_MAX;
int8_t x71 = -1;
static uint8_t x98 = 2U;
static volatile int32_t t18 = 36427;
int8_t x110 = INT8_MIN;
volatile int16_t x114 = 3905;
static uint8_t x122 = UINT8_MAX;
uint16_t x125 = UINT16_MAX;
int16_t x137 = 0;
volatile uint32_t x140 = UINT32_MAX;
static volatile int32_t t26 = -31751859;
volatile int64_t x152 = INT64_MIN;
volatile int32_t t28 = 57;
int8_t x157 = -1;
int16_t x162 = INT16_MIN;
volatile uint32_t x168 = UINT32_MAX;
volatile int32_t t32 = -253149;
uint32_t x171 = 400912802U;
volatile int32_t x174 = INT32_MAX;
volatile int32_t x182 = INT32_MIN;
int32_t t36 = -35949;
int32_t x187 = 1;
int32_t x190 = INT32_MIN;
uint16_t x196 = 457U;
static int8_t x201 = 0;
static volatile int32_t x220 = -1;
int32_t t43 = -881;
int16_t x224 = INT16_MAX;
static uint64_t x233 = UINT64_MAX;
int16_t x238 = INT16_MIN;
uint16_t x241 = UINT16_MAX;
int16_t x244 = INT16_MIN;
static int32_t x246 = 13;
int16_t x248 = 3075;
int16_t x250 = -414;
static int16_t x252 = 200;
int8_t x259 = -1;
static int8_t x260 = -57;
int32_t t53 = -1;
int16_t x263 = INT16_MIN;
int32_t t54 = 3657;
volatile int64_t x268 = -1LL;
volatile int32_t t56 = -21;
int8_t x278 = INT8_MAX;
volatile int32_t t57 = 6;
uint32_t x288 = 183653497U;
uint16_t x289 = 47U;
volatile int8_t x296 = 8;
uint16_t x299 = UINT16_MAX;
static int64_t x300 = -1LL;
static volatile int8_t x307 = INT8_MIN;
volatile int32_t t63 = -1;
int8_t x314 = INT8_MIN;
int16_t x316 = 11641;
uint8_t x318 = UINT8_MAX;
int8_t x322 = INT8_MIN;
static uint64_t x323 = 3936462LLU;
static int32_t x324 = INT32_MIN;
static int64_t x332 = INT64_MAX;
int64_t x335 = INT64_MAX;
uint32_t x343 = 44986U;
uint8_t x362 = UINT8_MAX;
int8_t x366 = -1;
static volatile int32_t t76 = 2854;
int16_t x376 = -6027;
int8_t x387 = -35;
int64_t x405 = INT64_MIN;
uint8_t x424 = 4U;
int64_t x433 = -44787948316498LL;
int32_t t92 = -1714;
volatile uint16_t x451 = 30U;
int32_t t93 = 2716904;
static uint64_t x453 = 6910LLU;
volatile uint8_t x454 = 7U;
uint32_t x456 = 375830U;
static int8_t x458 = INT8_MAX;
volatile uint64_t x465 = UINT64_MAX;
volatile int64_t x469 = INT64_MIN;
static int32_t t97 = -16810887;
static int32_t t98 = -50;
static uint64_t x484 = 2329LLU;
volatile int32_t x487 = INT32_MIN;
uint64_t x491 = 439LLU;
uint16_t x495 = 18794U;
uint64_t x506 = UINT64_MAX;
int16_t x512 = -1459;
uint64_t x518 = 51LLU;
int64_t x519 = INT64_MIN;
volatile int32_t x521 = -3367714;
static volatile uint64_t x522 = 1599791732441318530LLU;
int32_t t111 = -280;
volatile int32_t t112 = -18449;
static int64_t x537 = INT64_MIN;
static int16_t x544 = -15;
static volatile int32_t x551 = -1;
int32_t t115 = 56197;
volatile int32_t t116 = 920785;
int64_t x564 = -1LL;
int64_t x570 = INT64_MIN;
static int64_t x571 = 26LL;
int16_t x588 = INT16_MAX;
volatile int32_t t121 = 9880510;
int64_t x593 = INT64_MIN;
volatile uint8_t x599 = UINT8_MAX;
int16_t x601 = -1;
volatile int8_t x606 = -40;
static volatile uint64_t x608 = 783670896LLU;
int32_t x623 = 60107;
volatile int32_t x629 = -5;
volatile int32_t t131 = 25156662;
static int32_t x633 = -353936;
int16_t x635 = INT16_MAX;
volatile int16_t x636 = -1;
volatile int32_t t132 = 115529216;
int8_t x647 = 4;
volatile uint8_t x652 = UINT8_MAX;
int32_t t135 = -258101;
volatile uint32_t x658 = 284133824U;
volatile int32_t t137 = 6;
int32_t t138 = 25;
int32_t t140 = -6628;
int32_t x677 = -1;
int32_t x679 = -3771388;
volatile int32_t t141 = -33;
static int16_t x681 = -15791;
int8_t x684 = 1;
static volatile uint32_t x694 = UINT32_MAX;
uint16_t x696 = 5U;
int32_t x697 = -1;
int16_t x704 = -70;
static uint32_t x705 = 9234U;
int64_t x707 = INT64_MIN;
uint64_t x708 = 1660LLU;
static volatile int8_t x711 = INT8_MIN;
volatile int8_t x716 = 7;
static uint32_t x723 = 1U;
int64_t x724 = -1LL;
int16_t x725 = INT16_MIN;
static int16_t x729 = INT16_MIN;
volatile uint8_t x731 = 3U;
int8_t x732 = 22;
static int32_t t154 = -65;
static int32_t x744 = -1;
volatile int8_t x745 = 24;
volatile int32_t x746 = -3224839;
int32_t x747 = -1;
int64_t x751 = -1LL;
int32_t x752 = INT32_MAX;
int32_t t158 = 0;
uint64_t x754 = 29641LLU;
int64_t x763 = -1LL;
int32_t x764 = INT32_MIN;
int32_t t161 = -3088;
volatile int32_t x770 = INT32_MIN;
volatile int8_t x781 = 58;
int16_t x783 = 85;
uint8_t x788 = UINT8_MAX;
uint32_t x789 = UINT32_MAX;
uint16_t x790 = UINT16_MAX;
uint8_t x805 = 1U;
static int64_t x806 = 15086014814484289LL;
int64_t x808 = -1LL;
volatile int32_t x812 = -9;
static volatile int32_t t171 = -32;
int16_t x819 = INT16_MAX;
int32_t t172 = 627;
static int8_t x824 = -1;
uint64_t x825 = 6946409LLU;
int32_t x826 = -1;
int32_t t175 = -702986;
int16_t x835 = -154;
volatile int32_t x838 = INT32_MIN;
int32_t t177 = 26;
int64_t x843 = INT64_MAX;
volatile int32_t t178 = -1;
uint32_t x847 = UINT32_MAX;
int32_t x863 = INT32_MIN;
int16_t x866 = INT16_MAX;
uint16_t x868 = 1U;
static int32_t t184 = -25;
volatile int32_t t185 = 1021;
int32_t x877 = INT32_MIN;
int32_t x884 = -263002803;
int32_t t187 = 102865864;
int8_t x893 = INT8_MIN;
int32_t t190 = 1538196;
static volatile int64_t x903 = INT64_MIN;
volatile int16_t x910 = -1;
uint32_t x911 = 6994860U;
int16_t x914 = -1;
static int32_t x916 = -7;
uint64_t x917 = 3880127LLU;
int64_t x920 = -263LL;
static volatile uint64_t x922 = 8948488LLU;
int64_t x930 = -340LL;


void f0(void) {
    	uint16_t x5 = 866U;
	static int16_t x6 = 407;
	int8_t x7 = 2;
	uint16_t x8 = 124U;
	static volatile int32_t t0 = -158;

    t0 = (x5>(x6%(x7-x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = UINT8_MAX;
	int8_t x12 = INT8_MIN;

    t1 = (x9>(x10%(x11-x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = 8U;
	int32_t x18 = INT32_MAX;

    t2 = (x17>(x18%(x19-x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 718LL;
	int16_t x22 = INT16_MIN;
	static volatile int64_t x23 = -1LL;
	uint64_t x24 = 1123LLU;
	volatile int32_t t3 = 265;

    t3 = (x21>(x22%(x23-x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 0U;
	int32_t t4 = -5546165;

    t4 = (x29>(x30%(x31-x32)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MIN;
	int64_t x35 = INT64_MIN;
	static volatile int16_t x36 = -1;
	int32_t t5 = 12;

    t5 = (x33>(x34%(x35-x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x37 = INT64_MIN;
	uint32_t x38 = 989435U;
	int16_t x39 = 31;
	int32_t t6 = -8170065;

    t6 = (x37>(x38%(x39-x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x41 = 26U;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = 309LLU;

    t7 = (x41>(x42%(x43-x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x46 = INT8_MAX;
	uint64_t x47 = 1968810876LLU;
	static int64_t x48 = -1LL;

    t8 = (x45>(x46%(x47-x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint16_t x54 = 5754U;
	int32_t x55 = 92;
	static int32_t t9 = -8944062;

    t9 = (x53>(x54%(x55-x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x60 = -1;
	volatile int32_t t10 = 27124411;

    t10 = (x57>(x58%(x59-x60)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x61 = INT32_MIN;
	volatile int32_t x62 = -1;
	int8_t x63 = -1;
	volatile uint16_t x64 = 1291U;
	volatile int32_t t11 = 3770;

    t11 = (x61>(x62%(x63-x64)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x69 = INT16_MAX;
	volatile uint64_t x72 = 11717LLU;
	volatile int32_t t12 = 1591;

    t12 = (x69>(x70%(x71-x72)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = 1;
	int32_t x74 = -25133;
	volatile uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 11U;
	int32_t t13 = 128142008;

    t13 = (x73>(x74%(x75-x76)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x77 = INT32_MIN;
	int32_t x78 = 160;
	int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t14 = -6050;

    t14 = (x77>(x78%(x79-x80)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x85 = 636159739;
	uint64_t x86 = 303105184LLU;
	static int32_t x87 = 0;
	int64_t x88 = 117815313LL;
	int32_t t15 = -6;

    t15 = (x85>(x86%(x87-x88)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = -1;
	static volatile uint64_t x90 = 11914LLU;
	uint32_t x91 = 4005707U;
	volatile uint16_t x92 = 11U;
	static int32_t t16 = -54416;

    t16 = (x89>(x90%(x91-x92)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x93 = -1;
	int64_t x94 = -1LL;
	static uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 3U;
	static int32_t t17 = 0;

    t17 = (x93>(x94%(x95-x96)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile int64_t x99 = 4805091549420LL;
	static int64_t x100 = -1LL;

    t18 = (x97>(x98%(x99-x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x101 = 728373LLU;
	static volatile int32_t x102 = INT32_MIN;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = -7019;
	int32_t t19 = -3812159;

    t19 = (x101>(x102%(x103-x104)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = -1;
	uint8_t x111 = 52U;
	static int32_t x112 = -3881513;
	volatile int32_t t20 = 1813;

    t20 = (x109>(x110%(x111-x112)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x113 = -15255285060LL;
	int16_t x115 = 184;
	uint32_t x116 = 858280U;
	int32_t t21 = 224618135;

    t21 = (x113>(x114%(x115-x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x121 = INT16_MIN;
	static uint64_t x123 = UINT64_MAX;
	int32_t x124 = -2606543;
	int32_t t22 = -8499;

    t22 = (x121>(x122%(x123-x124)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x126 = -1;
	volatile int64_t x127 = INT64_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t23 = 30;

    t23 = (x125>(x126%(x127-x128)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x129 = INT32_MIN;
	int64_t x130 = INT64_MIN;
	volatile int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;
	volatile int32_t t24 = 59329;

    t24 = (x129>(x130%(x131-x132)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x138 = 1446492869297LLU;
	uint32_t x139 = 0U;
	volatile int32_t t25 = -5281;

    t25 = (x137>(x138%(x139-x140)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x141 = UINT8_MAX;
	uint16_t x142 = 281U;
	uint16_t x143 = 57U;
	volatile uint16_t x144 = 5U;

    t26 = (x141>(x142%(x143-x144)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = -1;
	uint64_t x146 = 0LLU;
	int16_t x147 = -1;
	uint64_t x148 = 18735841783299493LLU;
	int32_t t27 = 11813126;

    t27 = (x145>(x146%(x147-x148)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x149 = -1LL;
	int8_t x150 = -36;
	int64_t x151 = -1LL;

    t28 = (x149>(x150%(x151-x152)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = 2462U;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 3319888346128496LLU;
	int32_t t29 = -40499;

    t29 = (x153>(x154%(x155-x156)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x158 = 16U;
	uint8_t x159 = 113U;
	int16_t x160 = INT16_MAX;
	int32_t t30 = 9;

    t30 = (x157>(x158%(x159-x160)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x161 = 9453233U;
	int32_t x163 = -1;
	uint8_t x164 = 10U;
	int32_t t31 = 3;

    t31 = (x161>(x162%(x163-x164)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x165 = 30U;
	int8_t x166 = -1;
	volatile uint8_t x167 = 34U;

    t32 = (x165>(x166%(x167-x168)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x169 = 11U;
	uint8_t x170 = 0U;
	static int64_t x172 = 879628LL;
	static volatile int32_t t33 = -7777;

    t33 = (x169>(x170%(x171-x172)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x173 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	uint64_t x176 = 7657088817765LLU;
	volatile int32_t t34 = -42;

    t34 = (x173>(x174%(x175-x176)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x177 = 5367;
	volatile uint16_t x178 = 266U;
	int16_t x179 = -95;
	int16_t x180 = INT16_MIN;
	volatile int32_t t35 = 249227;

    t35 = (x177>(x178%(x179-x180)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x181 = 19709540256LL;
	int8_t x183 = INT8_MIN;
	int16_t x184 = INT16_MAX;

    t36 = (x181>(x182%(x183-x184)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x185 = 0U;
	volatile int8_t x186 = INT8_MAX;
	volatile int16_t x188 = -1;
	volatile int32_t t37 = -8148;

    t37 = (x185>(x186%(x187-x188)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x189 = 14U;
	int16_t x191 = -2935;
	volatile uint8_t x192 = UINT8_MAX;
	static int32_t t38 = 5276;

    t38 = (x189>(x190%(x191-x192)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x193 = -1;
	int8_t x194 = -1;
	volatile int32_t x195 = -5489881;
	volatile int32_t t39 = 0;

    t39 = (x193>(x194%(x195-x196)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x202 = INT8_MIN;
	int16_t x203 = 4674;
	int16_t x204 = -1;
	int32_t t40 = -238044;

    t40 = (x201>(x202%(x203-x204)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x205 = 3U;
	static uint8_t x206 = UINT8_MAX;
	static int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;
	static int32_t t41 = 0;

    t41 = (x205>(x206%(x207-x208)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x213 = -2879188LL;
	uint32_t x214 = 63143U;
	volatile uint8_t x215 = UINT8_MAX;
	uint64_t x216 = 2632099458LLU;
	int32_t t42 = 21;

    t42 = (x213>(x214%(x215-x216)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	static int8_t x219 = -3;

    t43 = (x217>(x218%(x219-x220)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x221 = 1390U;
	uint16_t x222 = 1038U;
	volatile int32_t x223 = -9034615;
	int32_t t44 = 476;

    t44 = (x221>(x222%(x223-x224)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x225 = INT16_MAX;
	uint64_t x226 = 4006668542298661295LLU;
	uint8_t x227 = 1U;
	int8_t x228 = -1;
	int32_t t45 = -9;

    t45 = (x225>(x226%(x227-x228)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = INT32_MIN;
	uint16_t x230 = 79U;
	static int8_t x231 = -1;
	int8_t x232 = 4;
	int32_t t46 = 25;

    t46 = (x229>(x230%(x231-x232)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x234 = INT16_MIN;
	static uint32_t x235 = UINT32_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t47 = 48479380;

    t47 = (x233>(x234%(x235-x236)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x237 = 4274732350107048LLU;
	volatile uint64_t x239 = UINT64_MAX;
	static volatile int16_t x240 = INT16_MIN;
	static int32_t t48 = -42;

    t48 = (x237>(x238%(x239-x240)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x242 = INT64_MIN;
	int16_t x243 = -1;
	static volatile int32_t t49 = -384295627;

    t49 = (x241>(x242%(x243-x244)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x245 = 79;
	int16_t x247 = 194;
	static volatile int32_t t50 = -5;

    t50 = (x245>(x246%(x247-x248)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x249 = INT32_MAX;
	int16_t x251 = INT16_MAX;
	int32_t t51 = 3486073;

    t51 = (x249>(x250%(x251-x252)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x253 = 1193462847891LLU;
	volatile int32_t x254 = INT32_MIN;
	uint16_t x255 = 1U;
	static int32_t x256 = -1;
	volatile int32_t t52 = 569485191;

    t52 = (x253>(x254%(x255-x256)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x257 = 13120U;
	int16_t x258 = 0;

    t53 = (x257>(x258%(x259-x260)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	static int64_t x262 = 14288921201LL;
	volatile int8_t x264 = -1;

    t54 = (x261>(x262%(x263-x264)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x265 = -1;
	uint16_t x266 = 3786U;
	static volatile int32_t x267 = 64925567;
	int32_t t55 = 377443;

    t55 = (x265>(x266%(x267-x268)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x269 = -1;
	volatile uint64_t x270 = 3618860750944LLU;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = -8395;

    t56 = (x269>(x270%(x271-x272)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = 2;
	int64_t x279 = -2988726LL;
	int32_t x280 = -1;

    t57 = (x277>(x278%(x279-x280)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x285 = -114712;
	uint8_t x286 = 19U;
	volatile int8_t x287 = -45;
	int32_t t58 = -1;

    t58 = (x285>(x286%(x287-x288)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x290 = 172U;
	static int32_t x291 = INT32_MIN;
	volatile int32_t x292 = -1;
	int32_t t59 = 217838;

    t59 = (x289>(x290%(x291-x292)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = -108219328115LL;
	volatile uint8_t x294 = 38U;
	uint8_t x295 = 3U;
	static volatile int32_t t60 = -899586796;

    t60 = (x293>(x294%(x295-x296)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x297 = -144236493359940LL;
	int16_t x298 = INT16_MIN;
	int32_t t61 = -66035;

    t61 = (x297>(x298%(x299-x300)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x301 = INT64_MAX;
	volatile int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = 332777U;
	static volatile int32_t t62 = 57948849;

    t62 = (x301>(x302%(x303-x304)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x305 = 26097;
	int8_t x306 = 0;
	static volatile int8_t x308 = 6;

    t63 = (x305>(x306%(x307-x308)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x309 = -3;
	volatile uint8_t x310 = 91U;
	static int32_t x311 = -5925;
	int16_t x312 = INT16_MIN;
	volatile int32_t t64 = -7;

    t64 = (x309>(x310%(x311-x312)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x313 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t t65 = 979533187;

    t65 = (x313>(x314%(x315-x316)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x317 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t66 = 49965;

    t66 = (x317>(x318%(x319-x320)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x321 = UINT32_MAX;
	static int32_t t67 = 7775083;

    t67 = (x321>(x322%(x323-x324)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile uint64_t x331 = 4848LLU;
	volatile int32_t t68 = 25;

    t68 = (x329>(x330%(x331-x332)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x333 = INT64_MIN;
	int64_t x334 = INT64_MIN;
	uint8_t x336 = 90U;
	int32_t t69 = 248;

    t69 = (x333>(x334%(x335-x336)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x337 = 0U;
	int32_t x338 = INT32_MIN;
	volatile int8_t x339 = -2;
	uint32_t x340 = 1871401U;
	int32_t t70 = -365;

    t70 = (x337>(x338%(x339-x340)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x341 = INT32_MIN;
	int64_t x342 = -62775074339LL;
	int16_t x344 = -1;
	static int32_t t71 = -7931;

    t71 = (x341>(x342%(x343-x344)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x345 = 442U;
	int32_t x346 = INT32_MAX;
	static uint32_t x347 = 20U;
	uint8_t x348 = UINT8_MAX;
	static volatile int32_t t72 = -2;

    t72 = (x345>(x346%(x347-x348)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x353 = 333U;
	static int8_t x354 = 1;
	int16_t x355 = 0;
	int8_t x356 = INT8_MIN;
	volatile int32_t t73 = 5120;

    t73 = (x353>(x354%(x355-x356)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x361 = UINT64_MAX;
	volatile int8_t x363 = -1;
	int32_t x364 = 0;
	volatile int32_t t74 = -255;

    t74 = (x361>(x362%(x363-x364)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x365 = -124761;
	static int16_t x367 = -1;
	uint64_t x368 = 1124600828800193344LLU;
	volatile int32_t t75 = 301;

    t75 = (x365>(x366%(x367-x368)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x369 = 6LLU;
	volatile int16_t x370 = 2592;
	static int32_t x371 = -1;
	uint8_t x372 = UINT8_MAX;

    t76 = (x369>(x370%(x371-x372)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x373 = 49U;
	int16_t x374 = -1;
	int16_t x375 = INT16_MIN;
	static int32_t t77 = 48;

    t77 = (x373>(x374%(x375-x376)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x377 = 159;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = INT16_MAX;
	static int16_t x380 = -1;
	int32_t t78 = -33167;

    t78 = (x377>(x378%(x379-x380)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x381 = 63U;
	int32_t x382 = -5;
	volatile int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;
	int32_t t79 = -16;

    t79 = (x381>(x382%(x383-x384)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x385 = 1551347804048LLU;
	static int32_t x386 = INT32_MIN;
	uint64_t x388 = 887703195405923LLU;
	volatile int32_t t80 = -2180057;

    t80 = (x385>(x386%(x387-x388)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x393 = -151;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -1;
	volatile int32_t x396 = INT32_MAX;
	int32_t t81 = 3238927;

    t81 = (x393>(x394%(x395-x396)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x397 = 54976U;
	int8_t x398 = -1;
	int64_t x399 = 28LL;
	int8_t x400 = INT8_MIN;
	static int32_t t82 = 1;

    t82 = (x397>(x398%(x399-x400)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x401 = 24U;
	int16_t x402 = INT16_MAX;
	int16_t x403 = -1490;
	volatile uint32_t x404 = 98U;
	int32_t t83 = 273863;

    t83 = (x401>(x402%(x403-x404)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x406 = INT64_MIN;
	int64_t x407 = INT64_MAX;
	int32_t x408 = INT32_MAX;
	static volatile int32_t t84 = 54;

    t84 = (x405>(x406%(x407-x408)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x413 = INT16_MIN;
	static int8_t x414 = -1;
	static int16_t x415 = 3;
	int32_t x416 = INT32_MAX;
	int32_t t85 = 0;

    t85 = (x413>(x414%(x415-x416)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x417 = -1669;
	int8_t x418 = INT8_MAX;
	static uint16_t x419 = 0U;
	int8_t x420 = INT8_MAX;
	volatile int32_t t86 = 1;

    t86 = (x417>(x418%(x419-x420)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x421 = 54302006364608LLU;
	int16_t x422 = -1;
	int32_t x423 = -22;
	volatile int32_t t87 = -31178;

    t87 = (x421>(x422%(x423-x424)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x429 = INT64_MAX;
	int64_t x430 = 1469370436740421LL;
	uint32_t x431 = UINT32_MAX;
	static uint16_t x432 = 6826U;
	static volatile int32_t t88 = -33748;

    t88 = (x429>(x430%(x431-x432)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x434 = UINT8_MAX;
	static volatile uint8_t x435 = UINT8_MAX;
	uint16_t x436 = UINT16_MAX;
	static volatile int32_t t89 = -1174490;

    t89 = (x433>(x434%(x435-x436)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x437 = 188770;
	uint8_t x438 = UINT8_MAX;
	int64_t x439 = -1LL;
	int16_t x440 = -6256;
	volatile int32_t t90 = 1298761;

    t90 = (x437>(x438%(x439-x440)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x441 = -22;
	int32_t x442 = -1;
	int16_t x443 = INT16_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t91 = 735820858;

    t91 = (x441>(x442%(x443-x444)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x445 = -233;
	volatile int32_t x446 = 47981826;
	static int64_t x447 = 3581906834157070195LL;
	static uint32_t x448 = 193U;

    t92 = (x445>(x446%(x447-x448)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x449 = INT32_MAX;
	uint8_t x450 = UINT8_MAX;
	uint32_t x452 = UINT32_MAX;

    t93 = (x449>(x450%(x451-x452)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x455 = UINT8_MAX;
	static int32_t t94 = 7;

    t94 = (x453>(x454%(x455-x456)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x457 = -2;
	int8_t x459 = INT8_MIN;
	volatile int64_t x460 = -1LL;
	int32_t t95 = -404414168;

    t95 = (x457>(x458%(x459-x460)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x466 = INT32_MAX;
	uint8_t x467 = UINT8_MAX;
	static volatile uint64_t x468 = 290546224422249479LLU;
	static int32_t t96 = 10;

    t96 = (x465>(x466%(x467-x468)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x470 = 1020U;
	uint8_t x471 = 2U;
	volatile int16_t x472 = INT16_MIN;

    t97 = (x469>(x470%(x471-x472)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x473 = UINT16_MAX;
	static uint8_t x474 = UINT8_MAX;
	static int16_t x475 = -9292;
	int8_t x476 = INT8_MIN;

    t98 = (x473>(x474%(x475-x476)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x477 = 29665;
	static int16_t x478 = 208;
	volatile uint64_t x479 = UINT64_MAX;
	int32_t x480 = -3852;
	int32_t t99 = 402069;

    t99 = (x477>(x478%(x479-x480)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x481 = 822U;
	int64_t x482 = -3078684158LL;
	static int32_t x483 = -1;
	int32_t t100 = -27;

    t100 = (x481>(x482%(x483-x484)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x485 = 16466716197028LLU;
	int16_t x486 = INT16_MIN;
	uint32_t x488 = 498824U;
	int32_t t101 = 41607;

    t101 = (x485>(x486%(x487-x488)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x489 = -4389;
	uint32_t x490 = 22424812U;
	int8_t x492 = -1;
	volatile int32_t t102 = 132313723;

    t102 = (x489>(x490%(x491-x492)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x493 = INT8_MIN;
	int16_t x494 = -496;
	static volatile int8_t x496 = INT8_MAX;
	int32_t t103 = -1615504;

    t103 = (x493>(x494%(x495-x496)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x497 = UINT32_MAX;
	int64_t x498 = 416030LL;
	int16_t x499 = 256;
	int8_t x500 = -1;
	volatile int32_t t104 = 512256;

    t104 = (x497>(x498%(x499-x500)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x502 = INT8_MIN;
	int64_t x503 = -919LL;
	static int64_t x504 = 129478937959477LL;
	int32_t t105 = -23408;

    t105 = (x501>(x502%(x503-x504)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x505 = -1;
	volatile int32_t x507 = INT32_MAX;
	int8_t x508 = INT8_MAX;
	static int32_t t106 = 907572;

    t106 = (x505>(x506%(x507-x508)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x509 = INT16_MIN;
	static uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	volatile int32_t t107 = 2;

    t107 = (x509>(x510%(x511-x512)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x513 = INT64_MAX;
	int8_t x514 = INT8_MIN;
	int8_t x515 = -1;
	volatile int64_t x516 = INT64_MAX;
	volatile int32_t t108 = -23836;

    t108 = (x513>(x514%(x515-x516)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x517 = 603308114185LLU;
	static int16_t x520 = -117;
	volatile int32_t t109 = -3318143;

    t109 = (x517>(x518%(x519-x520)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x523 = UINT64_MAX;
	static uint8_t x524 = 10U;
	static int32_t t110 = -34;

    t110 = (x521>(x522%(x523-x524)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x530 = -1LL;
	static uint64_t x531 = 17652917547686LLU;
	volatile uint32_t x532 = 28U;

    t111 = (x529>(x530%(x531-x532)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x533 = INT16_MIN;
	static uint32_t x534 = UINT32_MAX;
	uint8_t x535 = 11U;
	uint32_t x536 = 408098352U;

    t112 = (x533>(x534%(x535-x536)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x538 = -1;
	volatile int16_t x539 = INT16_MAX;
	int8_t x540 = INT8_MIN;
	int32_t t113 = -9205577;

    t113 = (x537>(x538%(x539-x540)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x541 = -11786LL;
	int16_t x542 = 40;
	static uint8_t x543 = UINT8_MAX;
	static int32_t t114 = 8284479;

    t114 = (x541>(x542%(x543-x544)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x549 = 56U;
	int32_t x550 = 2030;
	int64_t x552 = INT64_MIN;

    t115 = (x549>(x550%(x551-x552)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x553 = 35U;
	int32_t x554 = INT32_MIN;
	volatile uint16_t x555 = UINT16_MAX;
	static int8_t x556 = INT8_MIN;

    t116 = (x553>(x554%(x555-x556)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x561 = -10;
	static uint32_t x562 = 13959921U;
	uint16_t x563 = 0U;
	volatile int32_t t117 = 985600;

    t117 = (x561>(x562%(x563-x564)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x569 = INT8_MIN;
	volatile int64_t x572 = 210404LL;
	volatile int32_t t118 = 24934247;

    t118 = (x569>(x570%(x571-x572)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x573 = -146;
	int8_t x574 = INT8_MIN;
	int64_t x575 = -259417313LL;
	uint8_t x576 = 15U;
	volatile int32_t t119 = -130;

    t119 = (x573>(x574%(x575-x576)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x577 = INT32_MIN;
	int32_t x578 = INT32_MIN;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = INT8_MIN;
	static volatile int32_t t120 = -6;

    t120 = (x577>(x578%(x579-x580)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x585 = INT8_MIN;
	static uint32_t x586 = UINT32_MAX;
	uint8_t x587 = UINT8_MAX;

    t121 = (x585>(x586%(x587-x588)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x589 = 1U;
	uint32_t x590 = 95392840U;
	uint32_t x591 = 3U;
	int8_t x592 = INT8_MAX;
	static int32_t t122 = -1;

    t122 = (x589>(x590%(x591-x592)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x594 = -45;
	int64_t x595 = -1LL;
	uint16_t x596 = 6U;
	int32_t t123 = -156662;

    t123 = (x593>(x594%(x595-x596)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x597 = 24809395LLU;
	int8_t x598 = INT8_MAX;
	static uint16_t x600 = UINT16_MAX;
	volatile int32_t t124 = 7;

    t124 = (x597>(x598%(x599-x600)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x602 = -1;
	uint64_t x603 = 392189659889192584LLU;
	volatile uint32_t x604 = UINT32_MAX;
	volatile int32_t t125 = -1;

    t125 = (x601>(x602%(x603-x604)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x605 = INT32_MIN;
	int64_t x607 = -1LL;
	int32_t t126 = -26631;

    t126 = (x605>(x606%(x607-x608)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x609 = 23;
	uint16_t x610 = UINT16_MAX;
	int8_t x611 = -3;
	uint64_t x612 = UINT64_MAX;
	volatile int32_t t127 = -2;

    t127 = (x609>(x610%(x611-x612)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x613 = 255365LLU;
	static int8_t x614 = -1;
	int64_t x615 = -1LL;
	uint16_t x616 = UINT16_MAX;
	static volatile int32_t t128 = -383468769;

    t128 = (x613>(x614%(x615-x616)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x621 = INT64_MAX;
	int64_t x622 = INT64_MAX;
	static int64_t x624 = -1066236921LL;
	int32_t t129 = -811;

    t129 = (x621>(x622%(x623-x624)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x625 = INT8_MIN;
	int16_t x626 = INT16_MIN;
	int8_t x627 = INT8_MIN;
	uint8_t x628 = 2U;
	static volatile int32_t t130 = -621426330;

    t130 = (x625>(x626%(x627-x628)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x630 = 37225773LLU;
	volatile int8_t x631 = INT8_MIN;
	volatile int64_t x632 = -4LL;

    t131 = (x629>(x630%(x631-x632)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x634 = -1;

    t132 = (x633>(x634%(x635-x636)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x637 = UINT16_MAX;
	uint16_t x638 = 50U;
	uint16_t x639 = 1019U;
	int16_t x640 = INT16_MAX;
	static volatile int32_t t133 = 74577;

    t133 = (x637>(x638%(x639-x640)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x646 = -9;
	uint64_t x648 = UINT64_MAX;
	int32_t t134 = 9972979;

    t134 = (x645>(x646%(x647-x648)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x649 = INT64_MAX;
	int8_t x650 = INT8_MIN;
	static int64_t x651 = -151LL;

    t135 = (x649>(x650%(x651-x652)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x653 = INT64_MIN;
	int16_t x654 = INT16_MIN;
	uint32_t x655 = 15U;
	int8_t x656 = INT8_MIN;
	volatile int32_t t136 = 0;

    t136 = (x653>(x654%(x655-x656)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x657 = -19;
	int8_t x659 = INT8_MAX;
	volatile int32_t x660 = 638998;

    t137 = (x657>(x658%(x659-x660)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x661 = 3;
	int8_t x662 = INT8_MIN;
	static int64_t x663 = -1LL;
	uint32_t x664 = 0U;

    t138 = (x661>(x662%(x663-x664)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x665 = 570713;
	uint8_t x666 = 0U;
	uint32_t x667 = 27960999U;
	int16_t x668 = -1;
	static int32_t t139 = -8;

    t139 = (x665>(x666%(x667-x668)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x669 = INT16_MAX;
	volatile uint32_t x670 = 107373439U;
	int16_t x671 = INT16_MIN;
	static int16_t x672 = 10;

    t140 = (x669>(x670%(x671-x672)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x678 = UINT16_MAX;
	uint16_t x680 = 0U;

    t141 = (x677>(x678%(x679-x680)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x682 = INT16_MAX;
	volatile uint64_t x683 = 374373LLU;
	volatile int32_t t142 = 44296;

    t142 = (x681>(x682%(x683-x684)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint16_t x685 = 52U;
	int16_t x686 = -1;
	uint32_t x687 = 0U;
	volatile int8_t x688 = INT8_MAX;
	static volatile int32_t t143 = -40880505;

    t143 = (x685>(x686%(x687-x688)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x693 = 0LL;
	volatile int64_t x695 = -1LL;
	static int32_t t144 = 0;

    t144 = (x693>(x694%(x695-x696)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x698 = UINT64_MAX;
	uint32_t x699 = UINT32_MAX;
	volatile uint8_t x700 = 89U;
	static int32_t t145 = 5431630;

    t145 = (x697>(x698%(x699-x700)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x701 = INT64_MIN;
	int32_t x702 = INT32_MIN;
	int16_t x703 = INT16_MAX;
	static int32_t t146 = 251232;

    t146 = (x701>(x702%(x703-x704)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x706 = INT16_MAX;
	volatile int32_t t147 = 0;

    t147 = (x705>(x706%(x707-x708)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x709 = UINT32_MAX;
	int32_t x710 = INT32_MAX;
	int32_t x712 = INT32_MIN;
	int32_t t148 = -22691519;

    t148 = (x709>(x710%(x711-x712)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x713 = -4;
	uint8_t x714 = UINT8_MAX;
	uint32_t x715 = 13829269U;
	int32_t t149 = -1;

    t149 = (x713>(x714%(x715-x716)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x717 = 6;
	int32_t x718 = INT32_MIN;
	static int16_t x719 = INT16_MIN;
	static int8_t x720 = 1;
	volatile int32_t t150 = -12652;

    t150 = (x717>(x718%(x719-x720)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x721 = -21;
	volatile uint8_t x722 = 5U;
	static int32_t t151 = 1;

    t151 = (x721>(x722%(x723-x724)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x726 = -46625020LL;
	static int8_t x727 = -1;
	int16_t x728 = INT16_MIN;
	int32_t t152 = 3035;

    t152 = (x725>(x726%(x727-x728)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x730 = -1;
	static volatile int32_t t153 = -5;

    t153 = (x729>(x730%(x731-x732)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x733 = UINT64_MAX;
	static uint16_t x734 = UINT16_MAX;
	int8_t x735 = INT8_MAX;
	static int8_t x736 = INT8_MIN;

    t154 = (x733>(x734%(x735-x736)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x737 = -1LL;
	static int32_t x738 = -12861291;
	int64_t x739 = -150886LL;
	int8_t x740 = INT8_MIN;
	int32_t t155 = 791;

    t155 = (x737>(x738%(x739-x740)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x741 = -1;
	int32_t x742 = -3971052;
	uint64_t x743 = 277410173294LLU;
	int32_t t156 = 654;

    t156 = (x741>(x742%(x743-x744)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x748 = -7247;
	int32_t t157 = -1;

    t157 = (x745>(x746%(x747-x748)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x749 = UINT32_MAX;
	volatile uint32_t x750 = UINT32_MAX;

    t158 = (x749>(x750%(x751-x752)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x753 = INT32_MAX;
	volatile int32_t x755 = -218356202;
	int64_t x756 = INT64_MIN;
	int32_t t159 = 100;

    t159 = (x753>(x754%(x755-x756)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x761 = INT16_MIN;
	uint64_t x762 = UINT64_MAX;
	volatile int32_t t160 = -324239643;

    t160 = (x761>(x762%(x763-x764)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x765 = 2811334U;
	int8_t x766 = INT8_MIN;
	static int64_t x767 = INT64_MIN;
	static uint64_t x768 = UINT64_MAX;

    t161 = (x765>(x766%(x767-x768)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x769 = INT32_MIN;
	volatile uint64_t x771 = 30797604792116LLU;
	volatile int64_t x772 = 2369890201969LL;
	int32_t t162 = 123991;

    t162 = (x769>(x770%(x771-x772)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x773 = INT64_MIN;
	static int64_t x774 = INT64_MAX;
	volatile uint32_t x775 = UINT32_MAX;
	int8_t x776 = INT8_MIN;
	int32_t t163 = -17853782;

    t163 = (x773>(x774%(x775-x776)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x777 = INT8_MIN;
	volatile int64_t x778 = INT64_MIN;
	static int8_t x779 = INT8_MAX;
	volatile int8_t x780 = INT8_MIN;
	volatile int32_t t164 = 3789;

    t164 = (x777>(x778%(x779-x780)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x782 = -1;
	uint32_t x784 = 3U;
	static int32_t t165 = -234;

    t165 = (x781>(x782%(x783-x784)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x785 = -1;
	int32_t x786 = 2525;
	volatile int8_t x787 = -1;
	volatile int32_t t166 = 79652952;

    t166 = (x785>(x786%(x787-x788)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t167 = 809;

    t167 = (x789>(x790%(x791-x792)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x793 = INT32_MIN;
	int8_t x794 = 60;
	static int8_t x795 = INT8_MAX;
	int16_t x796 = 1083;
	int32_t t168 = 545;

    t168 = (x793>(x794%(x795-x796)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x807 = -2089946692LL;
	volatile int32_t t169 = 22529;

    t169 = (x805>(x806%(x807-x808)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x809 = UINT16_MAX;
	static int64_t x810 = INT64_MAX;
	int8_t x811 = INT8_MIN;
	volatile int32_t t170 = 31267074;

    t170 = (x809>(x810%(x811-x812)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x813 = 3U;
	int64_t x814 = -1LL;
	int32_t x815 = INT32_MIN;
	static volatile int8_t x816 = -1;

    t171 = (x813>(x814%(x815-x816)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x817 = INT32_MAX;
	int8_t x818 = -1;
	int16_t x820 = INT16_MIN;

    t172 = (x817>(x818%(x819-x820)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x821 = INT8_MIN;
	int8_t x822 = -29;
	int64_t x823 = 44LL;
	volatile int32_t t173 = -14471;

    t173 = (x821>(x822%(x823-x824)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x827 = 2856226U;
	int16_t x828 = INT16_MIN;
	static volatile int32_t t174 = 15149622;

    t174 = (x825>(x826%(x827-x828)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x829 = -1;
	static int32_t x830 = INT32_MIN;
	int16_t x831 = -15565;
	static int64_t x832 = INT64_MIN;

    t175 = (x829>(x830%(x831-x832)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x833 = INT32_MIN;
	int16_t x834 = -1;
	uint8_t x836 = 1U;
	int32_t t176 = 1;

    t176 = (x833>(x834%(x835-x836)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x837 = 14U;
	int32_t x839 = INT32_MIN;
	uint64_t x840 = 4731216742191876LLU;

    t177 = (x837>(x838%(x839-x840)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x841 = INT16_MIN;
	int8_t x842 = INT8_MAX;
	uint8_t x844 = 2U;

    t178 = (x841>(x842%(x843-x844)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x845 = INT32_MIN;
	int16_t x846 = INT16_MIN;
	uint64_t x848 = UINT64_MAX;
	static int32_t t179 = 383;

    t179 = (x845>(x846%(x847-x848)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x853 = 92969450LLU;
	int32_t x854 = -1;
	uint64_t x855 = 456037LLU;
	int16_t x856 = INT16_MIN;
	volatile int32_t t180 = 7902279;

    t180 = (x853>(x854%(x855-x856)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x857 = UINT16_MAX;
	int8_t x858 = 0;
	volatile int32_t x859 = 702;
	static volatile uint32_t x860 = UINT32_MAX;
	int32_t t181 = -456;

    t181 = (x857>(x858%(x859-x860)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x861 = UINT16_MAX;
	int64_t x862 = -83226186655LL;
	static uint32_t x864 = UINT32_MAX;
	volatile int32_t t182 = -1;

    t182 = (x861>(x862%(x863-x864)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x865 = 18LL;
	uint64_t x867 = 14419728569003LLU;
	int32_t t183 = 6414285;

    t183 = (x865>(x866%(x867-x868)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x869 = -1;
	int32_t x870 = -3990;
	int8_t x871 = 0;
	static volatile int64_t x872 = -1LL;

    t184 = (x869>(x870%(x871-x872)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x873 = INT64_MIN;
	int8_t x874 = INT8_MIN;
	volatile int64_t x875 = INT64_MIN;
	volatile int64_t x876 = -783544LL;

    t185 = (x873>(x874%(x875-x876)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x878 = INT8_MAX;
	volatile int32_t x879 = INT32_MIN;
	int8_t x880 = -4;
	int32_t t186 = -4160;

    t186 = (x877>(x878%(x879-x880)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x881 = INT32_MIN;
	int64_t x882 = INT64_MIN;
	volatile int64_t x883 = INT64_MIN;

    t187 = (x881>(x882%(x883-x884)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x885 = 10U;
	uint8_t x886 = 52U;
	uint32_t x887 = UINT32_MAX;
	int64_t x888 = -1LL;
	volatile int32_t t188 = 35;

    t188 = (x885>(x886%(x887-x888)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x889 = INT32_MIN;
	int64_t x890 = INT64_MAX;
	static uint16_t x891 = UINT16_MAX;
	uint8_t x892 = 4U;
	volatile int32_t t189 = -131812912;

    t189 = (x889>(x890%(x891-x892)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x894 = 2U;
	uint8_t x895 = UINT8_MAX;
	static int8_t x896 = INT8_MAX;

    t190 = (x893>(x894%(x895-x896)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x897 = INT16_MIN;
	uint64_t x898 = 113523LLU;
	int32_t x899 = INT32_MIN;
	static int8_t x900 = INT8_MIN;
	int32_t t191 = 116;

    t191 = (x897>(x898%(x899-x900)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x901 = -1235;
	volatile uint8_t x902 = 0U;
	volatile int32_t x904 = -1;
	int32_t t192 = 18168506;

    t192 = (x901>(x902%(x903-x904)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x909 = -1966;
	uint32_t x912 = 119U;
	int32_t t193 = 1837;

    t193 = (x909>(x910%(x911-x912)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x913 = INT64_MIN;
	int8_t x915 = -1;
	int32_t t194 = 908491;

    t194 = (x913>(x914%(x915-x916)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x918 = 1LL;
	int32_t x919 = -1;
	int32_t t195 = 1432980;

    t195 = (x917>(x918%(x919-x920)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x921 = INT8_MIN;
	int8_t x923 = 10;
	int64_t x924 = -3863516321335654175LL;
	volatile int32_t t196 = 1292;

    t196 = (x921>(x922%(x923-x924)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x925 = INT32_MAX;
	int32_t x926 = INT32_MAX;
	int64_t x927 = -286533616818390258LL;
	int8_t x928 = INT8_MIN;
	volatile int32_t t197 = -3245788;

    t197 = (x925>(x926%(x927-x928)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x929 = INT32_MIN;
	static int16_t x931 = 502;
	uint64_t x932 = 1321699956918999LLU;
	static int32_t t198 = 1230978;

    t198 = (x929>(x930%(x931-x932)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x937 = -1;
	uint32_t x938 = 830508795U;
	volatile uint64_t x939 = UINT64_MAX;
	volatile uint16_t x940 = 1U;
	int32_t t199 = -3;

    t199 = (x937>(x938%(x939-x940)));

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

