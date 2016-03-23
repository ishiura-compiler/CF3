
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

int16_t x12 = INT16_MAX;
int32_t t0 = 111;
int16_t x14 = 2;
volatile uint32_t x25 = 0U;
int64_t t4 = 276LL;
volatile int8_t x46 = -19;
static int16_t x47 = INT16_MIN;
volatile int32_t x49 = INT32_MIN;
volatile int32_t t6 = -1;
int16_t x56 = -1;
uint32_t x59 = UINT32_MAX;
uint16_t x61 = UINT16_MAX;
uint64_t x69 = 3LLU;
int32_t x71 = 1;
uint64_t x73 = UINT64_MAX;
int8_t x75 = -46;
uint32_t x88 = 445864U;
static uint8_t x97 = 7U;
static int32_t t16 = 258;
volatile int16_t x101 = INT16_MAX;
uint64_t x106 = 868877589940LLU;
uint32_t x113 = UINT32_MAX;
static uint64_t t20 = 59LLU;
int8_t x125 = INT8_MIN;
int64_t x128 = -1356082882998493845LL;
volatile int32_t t23 = -7048;
int32_t t24 = 3;
int16_t x143 = INT16_MAX;
volatile int8_t x161 = INT8_MIN;
static volatile int16_t x167 = INT16_MAX;
uint8_t x170 = 89U;
int16_t x175 = 5;
static int32_t t29 = 4;
static volatile uint64_t x180 = 75782969727LLU;
int64_t x183 = 647LL;
static uint16_t x184 = 911U;
int16_t x191 = INT16_MIN;
int32_t x199 = INT32_MIN;
volatile int8_t x213 = INT8_MIN;
int16_t x214 = INT16_MAX;
int8_t x224 = INT8_MAX;
int8_t x230 = 1;
uint64_t x232 = 5728754367227027910LLU;
volatile uint64_t x244 = UINT64_MAX;
int8_t x249 = -16;
static volatile int8_t x251 = INT8_MIN;
static uint16_t x254 = 1U;
uint32_t x272 = 1810089U;
static volatile uint32_t t44 = 3665U;
volatile uint16_t x281 = 30U;
uint8_t x284 = 11U;
uint32_t x293 = 1021165U;
volatile int32_t t48 = -3;
uint16_t x305 = 328U;
uint32_t x306 = UINT32_MAX;
int16_t x308 = INT16_MIN;
volatile int32_t t50 = -6;
uint64_t x328 = UINT64_MAX;
uint16_t x330 = UINT16_MAX;
volatile int64_t x331 = 248430690943668989LL;
int32_t x332 = -66609746;
volatile int64_t x340 = INT64_MIN;
static uint64_t x345 = UINT64_MAX;
volatile uint8_t x349 = UINT8_MAX;
uint64_t x351 = 1397453LLU;
static int16_t x352 = INT16_MIN;
volatile int64_t x388 = -17710426245789507LL;
uint8_t x393 = 27U;
int16_t x403 = INT16_MAX;
int8_t x415 = 21;
static int8_t x416 = INT8_MAX;
int32_t t70 = 0;
static int64_t x431 = 1928321818LL;
int16_t x435 = INT16_MAX;
uint16_t x439 = 1U;
static uint64_t x440 = 7LLU;
uint64_t t75 = 1435529467LLU;
int32_t t76 = 1011793487;
uint32_t x460 = UINT32_MAX;
int64_t x461 = 16335135LL;
static int64_t x462 = -26283LL;
static volatile uint64_t t80 = 8615070337326218772LLU;
int8_t x468 = 3;
int64_t x480 = INT64_MIN;
volatile int64_t t84 = -240086097LL;
volatile int32_t t86 = 1586249;
static int32_t x499 = INT32_MAX;
uint32_t x502 = 3582U;
int64_t x503 = INT64_MIN;
uint8_t x504 = 38U;
int32_t t88 = -28942543;
volatile int8_t x506 = -1;
int32_t t90 = -198468;
int32_t x521 = 57560011;
int8_t x522 = -4;
static int64_t x523 = -1990774474586394612LL;
int32_t t94 = 3255;
uint8_t x539 = 5U;
uint32_t x540 = 14653087U;
volatile int32_t x551 = 2;
uint16_t x561 = 14U;
volatile int32_t t99 = 0;
int64_t x569 = INT64_MAX;
volatile int64_t x571 = INT64_MIN;
static uint32_t x574 = 632U;
int64_t x575 = -953525868LL;
uint64_t x576 = UINT64_MAX;
volatile uint64_t t102 = 24325325LLU;
int16_t x579 = -1;
int8_t x580 = -1;
static int64_t x581 = -1LL;
int16_t x587 = 20;
uint32_t x602 = 1054523U;
uint32_t x603 = 450U;
int64_t x614 = -1LL;
static uint8_t x623 = 0U;
static int32_t x625 = INT32_MAX;
int32_t x627 = 105;
volatile int32_t t113 = -3147821;
static uint64_t x634 = UINT64_MAX;
static volatile int32_t t114 = 1;
int32_t x647 = -18;
static uint8_t x658 = 24U;
volatile uint8_t x662 = UINT8_MAX;
volatile int64_t t120 = -2012760952195620LL;
uint64_t x670 = UINT64_MAX;
volatile int8_t x671 = INT8_MAX;
int32_t t121 = -1;
volatile uint32_t x673 = UINT32_MAX;
static int32_t x688 = -1;
volatile int32_t t124 = -1730;
uint8_t x691 = UINT8_MAX;
volatile int16_t x702 = INT16_MIN;
int64_t x703 = INT64_MIN;
uint64_t x721 = UINT64_MAX;
int16_t x722 = 1;
uint32_t x735 = 518467400U;
uint16_t x737 = 1U;
int32_t x751 = INT32_MIN;
static uint64_t x763 = 3118515800LLU;
static uint16_t x764 = 1U;
uint16_t x765 = 59U;
volatile int32_t t138 = 2589229;
static int8_t x784 = INT8_MAX;
volatile int8_t x788 = 10;
static uint32_t x791 = 53U;
int8_t x796 = 0;
int8_t x802 = INT8_MIN;
static volatile uint32_t t143 = 12U;
int8_t x806 = 0;
int64_t x816 = -272LL;
static int32_t x830 = -1;
int32_t t148 = 4057174;
uint32_t x834 = 1557U;
int16_t x849 = -8880;
static int8_t x852 = -1;
int32_t t154 = 15;
static volatile uint8_t x861 = 1U;
int32_t x862 = INT32_MAX;
int16_t x885 = INT16_MIN;
uint8_t x894 = 2U;
int8_t x895 = INT8_MIN;
volatile uint16_t x896 = 13307U;
volatile int32_t t159 = -2126;
volatile int16_t x903 = -992;
int8_t x908 = 8;
uint8_t x909 = 31U;
uint16_t x910 = 1842U;
static uint16_t x913 = 7U;
volatile int16_t x923 = INT16_MIN;
int16_t x924 = -1;
uint16_t x926 = 1U;
static uint64_t t165 = 219969080859342LLU;
static int16_t x933 = INT16_MIN;
int32_t t166 = 32;
volatile int64_t x944 = INT64_MIN;
int32_t x955 = 181089979;
int16_t x956 = INT16_MIN;
int8_t x958 = INT8_MIN;
uint8_t x963 = 49U;
int32_t t173 = -99903;
int32_t x969 = 1046509;
volatile int32_t t176 = -88115144;
volatile uint64_t t177 = 373981523396LLU;
int64_t x997 = -308290280362560LL;
volatile int16_t x998 = 2;
int64_t x1000 = INT64_MIN;
int16_t x1027 = INT16_MAX;
volatile uint32_t x1032 = 5076U;
uint16_t x1036 = UINT16_MAX;
volatile uint32_t t185 = 10437935U;
int32_t t187 = -54;
static uint64_t x1050 = UINT64_MAX;
uint64_t x1052 = 6LLU;
volatile uint64_t t188 = 42003368746879707LLU;
int8_t x1063 = 27;
static int64_t x1064 = INT64_MIN;
uint8_t x1066 = UINT8_MAX;
volatile int64_t x1074 = INT64_MIN;
static volatile int16_t x1076 = 57;
volatile int32_t x1084 = 90007800;
int8_t x1090 = INT8_MIN;
volatile int8_t x1097 = -3;
static int32_t x1101 = -14064944;
volatile int32_t x1103 = -1;
uint32_t x1105 = 401233U;
uint32_t x1108 = 58542U;
static volatile uint32_t t197 = 189U;
int32_t x1113 = -14535551;
static uint16_t x1120 = UINT16_MAX;


void f0(void) {
    	int8_t x9 = -1;
	volatile uint64_t x10 = 119013311386671546LLU;
	volatile int32_t x11 = INT32_MIN;

    t0 = (((x9*x10)==x11)&x12);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = 0LL;
	int8_t x15 = -1;
	int16_t x16 = -1;
	volatile int32_t t1 = 157611815;

    t1 = (((x13*x14)==x15)&x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = -1;
	int16_t x18 = -17;
	uint8_t x19 = 1U;
	uint32_t x20 = 5772693U;
	uint32_t t2 = 5818U;

    t2 = (((x17*x18)==x19)&x20);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x26 = INT8_MIN;
	volatile int8_t x27 = -2;
	int32_t x28 = -1;
	static volatile int32_t t3 = -2071841;

    t3 = (((x25*x26)==x27)&x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x29 = 14U;
	uint64_t x30 = 199779LLU;
	uint16_t x31 = 6216U;
	int64_t x32 = INT64_MIN;

    t4 = (((x29*x30)==x31)&x32);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x45 = -13599297786629LL;
	static int64_t x48 = INT64_MIN;
	int64_t t5 = 62241503LL;

    t5 = (((x45*x46)==x47)&x48);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = -1032;
	uint8_t x52 = 9U;

    t6 = (((x49*x50)==x51)&x52);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x53 = INT16_MIN;
	uint16_t x54 = UINT16_MAX;
	static volatile int64_t x55 = INT64_MIN;
	int32_t t7 = -207;

    t7 = (((x53*x54)==x55)&x56);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x57 = 15;
	uint64_t x58 = 115706862791288408LLU;
	uint32_t x60 = 39823U;
	uint32_t t8 = 5383U;

    t8 = (((x57*x58)==x59)&x60);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MAX;
	int32_t x64 = -1;
	volatile int32_t t9 = 4;

    t9 = (((x61*x62)==x63)&x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x65 = 0;
	volatile int32_t x66 = INT32_MAX;
	static int32_t x67 = INT32_MIN;
	int32_t x68 = -1;
	static volatile int32_t t10 = 33275551;

    t10 = (((x65*x66)==x67)&x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x70 = 2021599;
	uint16_t x72 = 351U;
	int32_t t11 = 7849;

    t11 = (((x69*x70)==x71)&x72);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x74 = 4048U;
	static int64_t x76 = INT64_MAX;
	volatile int64_t t12 = 468LL;

    t12 = (((x73*x74)==x75)&x76);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x85 = 3769132U;
	int16_t x86 = 1;
	uint16_t x87 = 42U;
	volatile uint32_t t13 = 6624705U;

    t13 = (((x85*x86)==x87)&x88);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x89 = INT16_MAX;
	uint16_t x90 = 29136U;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = UINT64_MAX;
	uint64_t t14 = 3006973828026931LLU;

    t14 = (((x89*x90)==x91)&x92);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x93 = 31813407532917090LL;
	int8_t x94 = -1;
	uint32_t x95 = 267339358U;
	static uint64_t x96 = 143485113284537652LLU;
	volatile uint64_t t15 = 71580LLU;

    t15 = (((x93*x94)==x95)&x96);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x98 = INT16_MIN;
	int16_t x99 = -1;
	uint8_t x100 = 71U;

    t16 = (((x97*x98)==x99)&x100);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x102 = 1U;
	uint32_t x103 = 96078U;
	static volatile int64_t x104 = 0LL;
	int64_t t17 = 4LL;

    t17 = (((x101*x102)==x103)&x104);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x105 = -1;
	int8_t x107 = -1;
	static volatile int8_t x108 = INT8_MAX;
	static int32_t t18 = 27268;

    t18 = (((x105*x106)==x107)&x108);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = -98723430808331753LL;
	static uint8_t x110 = 1U;
	int32_t x111 = INT32_MIN;
	int32_t x112 = -1;
	int32_t t19 = -8110;

    t19 = (((x109*x110)==x111)&x112);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x114 = -1;
	int16_t x115 = 16310;
	static uint64_t x116 = 226LLU;

    t20 = (((x113*x114)==x115)&x116);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x126 = -1;
	int16_t x127 = INT16_MAX;
	volatile int64_t t21 = -1857LL;

    t21 = (((x125*x126)==x127)&x128);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x129 = 3148036254024867589LLU;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MAX;
	uint16_t x132 = 3U;
	int32_t t22 = 70040;

    t22 = (((x129*x130)==x131)&x132);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x133 = INT16_MIN;
	int64_t x134 = -208LL;
	int16_t x135 = 14;
	volatile int8_t x136 = INT8_MIN;

    t23 = (((x133*x134)==x135)&x136);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -2;
	uint8_t x140 = 0U;

    t24 = (((x137*x138)==x139)&x140);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x141 = UINT64_MAX;
	volatile uint64_t x142 = 99LLU;
	int32_t x144 = -732;
	volatile int32_t t25 = -1;

    t25 = (((x141*x142)==x143)&x144);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x162 = 1U;
	uint64_t x163 = 9LLU;
	static int32_t x164 = INT32_MAX;
	int32_t t26 = 2447883;

    t26 = (((x161*x162)==x163)&x164);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x165 = 34LLU;
	volatile int64_t x166 = INT64_MIN;
	static volatile int32_t x168 = INT32_MAX;
	static int32_t t27 = -686623;

    t27 = (((x165*x166)==x167)&x168);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x169 = 6LL;
	volatile int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	int64_t t28 = -73387904117416569LL;

    t28 = (((x169*x170)==x171)&x172);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x173 = -1;
	int32_t x174 = -69192384;
	int32_t x176 = 16701;

    t29 = (((x173*x174)==x175)&x176);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x177 = INT64_MAX;
	int8_t x178 = -1;
	int8_t x179 = -5;
	static uint64_t t30 = 122LLU;

    t30 = (((x177*x178)==x179)&x180);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x181 = 0;
	int16_t x182 = -1;
	int32_t t31 = 129991;

    t31 = (((x181*x182)==x183)&x184);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x189 = 4109333257036622LLU;
	int16_t x190 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t32 = 1720842LLU;

    t32 = (((x189*x190)==x191)&x192);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x193 = UINT32_MAX;
	static int16_t x194 = -270;
	volatile uint16_t x195 = 27405U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t33 = 11393606;

    t33 = (((x193*x194)==x195)&x196);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x197 = 675;
	uint64_t x198 = 6670732674132LLU;
	uint16_t x200 = UINT16_MAX;
	static int32_t t34 = 6;

    t34 = (((x197*x198)==x199)&x200);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x215 = INT32_MAX;
	uint32_t x216 = 12786U;
	static uint32_t t35 = 62851583U;

    t35 = (((x213*x214)==x215)&x216);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x217 = 3U;
	int8_t x218 = -1;
	uint8_t x219 = 29U;
	uint16_t x220 = 4735U;
	static int32_t t36 = -203684;

    t36 = (((x217*x218)==x219)&x220);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x221 = -417970047711LL;
	uint64_t x222 = 4203LLU;
	static uint32_t x223 = 347267U;
	int32_t t37 = -30;

    t37 = (((x221*x222)==x223)&x224);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x229 = 6618U;
	int64_t x231 = INT64_MIN;
	volatile uint64_t t38 = 110LLU;

    t38 = (((x229*x230)==x231)&x232);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x241 = 6;
	static int16_t x242 = INT16_MIN;
	static uint16_t x243 = 10U;
	static uint64_t t39 = 11040LLU;

    t39 = (((x241*x242)==x243)&x244);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x250 = -1LL;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t40 = -9066879;

    t40 = (((x249*x250)==x251)&x252);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x253 = INT64_MAX;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MAX;
	volatile int32_t t41 = 120818702;

    t41 = (((x253*x254)==x255)&x256);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x257 = 393;
	int16_t x258 = -8040;
	int64_t x259 = -6452512836LL;
	int64_t x260 = INT64_MIN;
	volatile int64_t t42 = -987961LL;

    t42 = (((x257*x258)==x259)&x260);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x265 = 166LLU;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = -1;
	static uint16_t x268 = 7646U;
	int32_t t43 = 713;

    t43 = (((x265*x266)==x267)&x268);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x269 = INT8_MAX;
	volatile uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 3U;

    t44 = (((x269*x270)==x271)&x272);

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint8_t x273 = 1U;
	static int64_t x274 = 412232LL;
	volatile uint32_t x275 = 59U;
	int16_t x276 = INT16_MIN;
	int32_t t45 = -36764757;

    t45 = (((x273*x274)==x275)&x276);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x282 = UINT64_MAX;
	uint32_t x283 = 114624870U;
	int32_t t46 = -16;

    t46 = (((x281*x282)==x283)&x284);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x294 = INT32_MIN;
	static int16_t x295 = -1;
	int8_t x296 = 1;
	static volatile int32_t t47 = 1292901;

    t47 = (((x293*x294)==x295)&x296);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x297 = 8U;
	int64_t x298 = -1LL;
	volatile int32_t x299 = 3719;
	static int32_t x300 = INT32_MIN;

    t48 = (((x297*x298)==x299)&x300);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x307 = INT64_MAX;
	static int32_t t49 = 4036;

    t49 = (((x305*x306)==x307)&x308);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x309 = -1;
	int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;

    t50 = (((x309*x310)==x311)&x312);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x317 = INT16_MIN;
	static int16_t x318 = -1;
	volatile int16_t x319 = 0;
	int64_t x320 = INT64_MAX;
	int64_t t51 = 18836294308080939LL;

    t51 = (((x317*x318)==x319)&x320);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x325 = -453;
	int64_t x326 = -1LL;
	int16_t x327 = 0;
	uint64_t t52 = 221672LLU;

    t52 = (((x325*x326)==x327)&x328);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x329 = 275U;
	static volatile int32_t t53 = 2362148;

    t53 = (((x329*x330)==x331)&x332);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x333 = -1;
	int32_t x334 = 20;
	int64_t x335 = 25970LL;
	int8_t x336 = INT8_MIN;
	int32_t t54 = 15717897;

    t54 = (((x333*x334)==x335)&x336);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x337 = -7047LL;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 1993748598U;
	static volatile int64_t t55 = 57658LL;

    t55 = (((x337*x338)==x339)&x340);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x341 = -733875997498678612LL;
	volatile int64_t x342 = -1LL;
	uint8_t x343 = 1U;
	int64_t x344 = INT64_MAX;
	int64_t t56 = -4582135248LL;

    t56 = (((x341*x342)==x343)&x344);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x346 = UINT32_MAX;
	int64_t x347 = -4087840151255LL;
	int64_t x348 = -1LL;
	int64_t t57 = -1531369338043LL;

    t57 = (((x345*x346)==x347)&x348);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x350 = INT16_MIN;
	volatile int32_t t58 = -8;

    t58 = (((x349*x350)==x351)&x352);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	int64_t x355 = -1LL;
	volatile int16_t x356 = INT16_MIN;
	int32_t t59 = 0;

    t59 = (((x353*x354)==x355)&x356);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 108;
	uint32_t x367 = 4043336U;
	uint32_t x368 = 97U;
	uint32_t t60 = 1577U;

    t60 = (((x365*x366)==x367)&x368);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x373 = 24;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MAX;
	static int16_t x376 = 70;
	static int32_t t61 = 397;

    t61 = (((x373*x374)==x375)&x376);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x385 = 895467055211664899LLU;
	int32_t x386 = INT32_MIN;
	uint32_t x387 = 0U;
	volatile int64_t t62 = -8543762351653539LL;

    t62 = (((x385*x386)==x387)&x388);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x389 = 28272089U;
	uint64_t x390 = 13140615443086229LLU;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = -2;
	int32_t t63 = -7;

    t63 = (((x389*x390)==x391)&x392);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x394 = -158299903306000007LL;
	static volatile int8_t x395 = INT8_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t64 = 353934238U;

    t64 = (((x393*x394)==x395)&x396);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x397 = 2787820LL;
	uint64_t x398 = 35001352953516829LLU;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = -2397LL;
	volatile int64_t t65 = -258LL;

    t65 = (((x397*x398)==x399)&x400);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = 19LLU;
	int8_t x404 = -1;
	volatile int32_t t66 = 46;

    t66 = (((x401*x402)==x403)&x404);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x405 = 2814109U;
	int8_t x406 = INT8_MAX;
	int64_t x407 = -1731LL;
	uint32_t x408 = 112926U;
	volatile uint32_t t67 = 1033898588U;

    t67 = (((x405*x406)==x407)&x408);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 1255U;
	int64_t x411 = INT64_MIN;
	static uint32_t x412 = UINT32_MAX;
	volatile uint32_t t68 = 15114974U;

    t68 = (((x409*x410)==x411)&x412);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x413 = -1;
	uint64_t x414 = 6LLU;
	static int32_t t69 = -159;

    t69 = (((x413*x414)==x415)&x416);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x417 = -31181223673078LL;
	static uint64_t x418 = 41928126LLU;
	static volatile int8_t x419 = -1;
	int16_t x420 = INT16_MIN;

    t70 = (((x417*x418)==x419)&x420);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x421 = 11U;
	static int64_t x422 = 8304016545LL;
	int64_t x423 = -1LL;
	int8_t x424 = INT8_MIN;
	int32_t t71 = 45;

    t71 = (((x421*x422)==x423)&x424);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x425 = -1;
	uint16_t x426 = 1U;
	uint8_t x427 = 11U;
	int16_t x428 = -1;
	static volatile int32_t t72 = 12;

    t72 = (((x425*x426)==x427)&x428);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x429 = UINT8_MAX;
	static int16_t x430 = INT16_MIN;
	static int8_t x432 = -48;
	int32_t t73 = -4791;

    t73 = (((x429*x430)==x431)&x432);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x433 = INT32_MAX;
	int64_t x434 = -1LL;
	int64_t x436 = 52216094167676737LL;
	int64_t t74 = -2059654890017LL;

    t74 = (((x433*x434)==x435)&x436);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x437 = 1531U;
	uint8_t x438 = 1U;

    t75 = (((x437*x438)==x439)&x440);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x441 = INT16_MIN;
	int8_t x442 = 0;
	uint64_t x443 = 7594LLU;
	volatile int32_t x444 = INT32_MAX;

    t76 = (((x441*x442)==x443)&x444);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x445 = 61047LL;
	static int16_t x446 = -1727;
	int64_t x447 = 0LL;
	static int16_t x448 = INT16_MIN;
	int32_t t77 = -27;

    t77 = (((x445*x446)==x447)&x448);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	static int16_t x450 = -509;
	static int16_t x451 = INT16_MIN;
	static int8_t x452 = -1;
	int32_t t78 = -205;

    t78 = (((x449*x450)==x451)&x452);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x457 = 3U;
	static volatile int8_t x458 = 5;
	int64_t x459 = 1132483376308728384LL;
	volatile uint32_t t79 = 1022283U;

    t79 = (((x457*x458)==x459)&x460);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x463 = 1145U;
	static uint64_t x464 = UINT64_MAX;

    t80 = (((x461*x462)==x463)&x464);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MAX;
	uint8_t x467 = 57U;
	volatile int32_t t81 = 1038097;

    t81 = (((x465*x466)==x467)&x468);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x469 = INT64_MAX;
	int64_t x470 = -1LL;
	static int64_t x471 = INT64_MIN;
	int32_t x472 = -1;
	int32_t t82 = 3;

    t82 = (((x469*x470)==x471)&x472);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x473 = 65003065U;
	int8_t x474 = INT8_MIN;
	static volatile int32_t x475 = INT32_MAX;
	uint64_t x476 = 38555LLU;
	uint64_t t83 = 2095157969127LLU;

    t83 = (((x473*x474)==x475)&x476);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x477 = 0;
	uint8_t x478 = 107U;
	static uint16_t x479 = 0U;

    t84 = (((x477*x478)==x479)&x480);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x481 = -1;
	volatile int16_t x482 = -1;
	static volatile int32_t x483 = INT32_MIN;
	uint32_t x484 = 2664242U;
	uint32_t t85 = 2U;

    t85 = (((x481*x482)==x483)&x484);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x485 = 16925652903837789LLU;
	int64_t x486 = -1LL;
	uint16_t x487 = UINT16_MAX;
	uint8_t x488 = 0U;

    t86 = (((x485*x486)==x487)&x488);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x497 = 1;
	int16_t x498 = 14;
	uint32_t x500 = 2U;
	uint32_t t87 = 1392U;

    t87 = (((x497*x498)==x499)&x500);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x501 = -44431LL;

    t88 = (((x501*x502)==x503)&x504);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x505 = 23153993338024LL;
	uint8_t x507 = 17U;
	int16_t x508 = -1;
	static int32_t t89 = 170360;

    t89 = (((x505*x506)==x507)&x508);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x509 = -16;
	volatile uint64_t x510 = 2LLU;
	int64_t x511 = INT64_MIN;
	static int32_t x512 = -94;

    t90 = (((x509*x510)==x511)&x512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x513 = INT8_MIN;
	static uint8_t x514 = 1U;
	volatile uint16_t x515 = UINT16_MAX;
	uint64_t x516 = UINT64_MAX;
	uint64_t t91 = 45874LLU;

    t91 = (((x513*x514)==x515)&x516);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x517 = 2U;
	uint8_t x518 = UINT8_MAX;
	static int64_t x519 = 571401855LL;
	int64_t x520 = -29495628177206791LL;
	int64_t t92 = 2249153LL;

    t92 = (((x517*x518)==x519)&x520);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x524 = INT64_MAX;
	volatile int64_t t93 = 0LL;

    t93 = (((x521*x522)==x523)&x524);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x533 = 7624U;
	int64_t x534 = 0LL;
	volatile int16_t x535 = -1;
	int16_t x536 = INT16_MIN;

    t94 = (((x533*x534)==x535)&x536);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x537 = UINT32_MAX;
	uint16_t x538 = 2104U;
	uint32_t t95 = 561650U;

    t95 = (((x537*x538)==x539)&x540);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MIN;
	int64_t x543 = -5608122005309LL;
	int32_t x544 = INT32_MAX;
	static volatile int32_t t96 = 0;

    t96 = (((x541*x542)==x543)&x544);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint64_t x546 = UINT64_MAX;
	int32_t x547 = INT32_MAX;
	static volatile int16_t x548 = INT16_MIN;
	static int32_t t97 = -4881253;

    t97 = (((x545*x546)==x547)&x548);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	uint16_t x550 = UINT16_MAX;
	int16_t x552 = INT16_MIN;
	volatile int32_t t98 = 100039;

    t98 = (((x549*x550)==x551)&x552);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x562 = -463;
	int8_t x563 = -5;
	uint8_t x564 = UINT8_MAX;

    t99 = (((x561*x562)==x563)&x564);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x565 = 7;
	int32_t x566 = 9;
	uint8_t x567 = 2U;
	volatile int16_t x568 = INT16_MIN;
	static int32_t t100 = 1;

    t100 = (((x565*x566)==x567)&x568);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x570 = 35190719802LLU;
	int64_t x572 = INT64_MIN;
	static int64_t t101 = 0LL;

    t101 = (((x569*x570)==x571)&x572);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x573 = -561558360LL;

    t102 = (((x573*x574)==x575)&x576);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x577 = 4;
	uint64_t x578 = 29LLU;
	volatile int32_t t103 = -26140;

    t103 = (((x577*x578)==x579)&x580);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x582 = INT8_MAX;
	static volatile uint16_t x583 = UINT16_MAX;
	static int16_t x584 = -15;
	int32_t t104 = 565637950;

    t104 = (((x581*x582)==x583)&x584);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x585 = -1;
	int8_t x586 = INT8_MAX;
	static uint64_t x588 = UINT64_MAX;
	uint64_t t105 = 7799476261492012LLU;

    t105 = (((x585*x586)==x587)&x588);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x589 = 15971LLU;
	int16_t x590 = 15849;
	int64_t x591 = 103034099870LL;
	int8_t x592 = 1;
	volatile int32_t t106 = 244;

    t106 = (((x589*x590)==x591)&x592);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x597 = INT16_MAX;
	int16_t x598 = INT16_MIN;
	volatile int32_t x599 = INT32_MIN;
	int16_t x600 = -1;
	int32_t t107 = -259841108;

    t107 = (((x597*x598)==x599)&x600);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x601 = -4;
	int16_t x604 = INT16_MAX;
	volatile int32_t t108 = 101536;

    t108 = (((x601*x602)==x603)&x604);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x605 = 84568U;
	int32_t x606 = -1;
	int64_t x607 = -1LL;
	int32_t x608 = -75828;
	volatile int32_t t109 = 1;

    t109 = (((x605*x606)==x607)&x608);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x613 = INT16_MIN;
	int32_t x615 = INT32_MAX;
	uint16_t x616 = 6U;
	static int32_t t110 = -1667485;

    t110 = (((x613*x614)==x615)&x616);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x617 = 53797582456LL;
	uint16_t x618 = 3299U;
	static uint32_t x619 = 110U;
	volatile uint64_t x620 = 8052746041LLU;
	uint64_t t111 = 1100LLU;

    t111 = (((x617*x618)==x619)&x620);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x621 = INT16_MIN;
	int16_t x622 = -383;
	uint64_t x624 = UINT64_MAX;
	uint64_t t112 = 57266714LLU;

    t112 = (((x621*x622)==x623)&x624);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x626 = -1;
	static int32_t x628 = 6;

    t113 = (((x625*x626)==x627)&x628);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x633 = 0LLU;
	int32_t x635 = INT32_MIN;
	int32_t x636 = -140842;

    t114 = (((x633*x634)==x635)&x636);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x637 = 51LLU;
	int16_t x638 = INT16_MIN;
	static uint8_t x639 = 1U;
	int32_t x640 = INT32_MAX;
	volatile int32_t t115 = -44;

    t115 = (((x637*x638)==x639)&x640);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x641 = 2012LLU;
	static int32_t x642 = -3465;
	int16_t x643 = INT16_MAX;
	uint64_t x644 = UINT64_MAX;
	uint64_t t116 = 52532640LLU;

    t116 = (((x641*x642)==x643)&x644);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x645 = -1;
	int16_t x646 = INT16_MIN;
	uint32_t x648 = 432322U;
	volatile uint32_t t117 = 84560723U;

    t117 = (((x645*x646)==x647)&x648);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x653 = 1056667862U;
	int32_t x654 = -205491575;
	static int32_t x655 = -38266;
	int16_t x656 = -14417;
	int32_t t118 = -249084299;

    t118 = (((x653*x654)==x655)&x656);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x657 = UINT16_MAX;
	uint8_t x659 = 3U;
	static int64_t x660 = INT64_MIN;
	volatile int64_t t119 = 3807830999356532LL;

    t119 = (((x657*x658)==x659)&x660);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x661 = 107238172LL;
	int16_t x663 = -1;
	volatile int64_t x664 = -4563739286684402686LL;

    t120 = (((x661*x662)==x663)&x664);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x669 = INT32_MAX;
	static int8_t x672 = -1;

    t121 = (((x669*x670)==x671)&x672);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x674 = INT8_MIN;
	int16_t x675 = 0;
	volatile int64_t x676 = -1LL;
	int64_t t122 = 248305993859921LL;

    t122 = (((x673*x674)==x675)&x676);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x677 = INT16_MAX;
	int16_t x678 = -909;
	int8_t x679 = INT8_MIN;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t123 = 3186;

    t123 = (((x677*x678)==x679)&x680);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x685 = 5843659597002371LL;
	volatile int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;

    t124 = (((x685*x686)==x687)&x688);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x689 = -1LL;
	static int32_t x690 = -1;
	static uint64_t x692 = UINT64_MAX;
	volatile uint64_t t125 = 8603046404260LLU;

    t125 = (((x689*x690)==x691)&x692);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x704 = 320132623U;
	volatile uint32_t t126 = 54822679U;

    t126 = (((x701*x702)==x703)&x704);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MAX;
	int8_t x707 = 0;
	uint16_t x708 = 0U;
	volatile int32_t t127 = 1;

    t127 = (((x705*x706)==x707)&x708);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x709 = 75U;
	int8_t x710 = INT8_MAX;
	static int8_t x711 = -1;
	int64_t x712 = INT64_MAX;
	static volatile int64_t t128 = -287LL;

    t128 = (((x709*x710)==x711)&x712);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x717 = 6U;
	static int8_t x718 = 10;
	int32_t x719 = -1;
	int16_t x720 = -1;
	int32_t t129 = -104656;

    t129 = (((x717*x718)==x719)&x720);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x723 = 44;
	volatile int32_t x724 = INT32_MIN;
	volatile int32_t t130 = -83;

    t130 = (((x721*x722)==x723)&x724);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x733 = 1;
	static int8_t x734 = -1;
	int8_t x736 = INT8_MIN;
	volatile int32_t t131 = -35843;

    t131 = (((x733*x734)==x735)&x736);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x738 = INT64_MIN;
	static volatile uint8_t x739 = 16U;
	static int8_t x740 = INT8_MIN;
	volatile int32_t t132 = -2;

    t132 = (((x737*x738)==x739)&x740);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x745 = -266344;
	static int64_t x746 = -1LL;
	volatile int16_t x747 = INT16_MIN;
	static int32_t x748 = -59470923;
	volatile int32_t t133 = -8078;

    t133 = (((x745*x746)==x747)&x748);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x749 = INT16_MAX;
	uint8_t x750 = UINT8_MAX;
	uint32_t x752 = 13358U;
	uint32_t t134 = 28U;

    t134 = (((x749*x750)==x751)&x752);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x761 = 3U;
	static volatile uint8_t x762 = UINT8_MAX;
	int32_t t135 = 339548;

    t135 = (((x761*x762)==x763)&x764);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x766 = -1LL;
	int8_t x767 = INT8_MIN;
	uint16_t x768 = 26341U;
	int32_t t136 = 128;

    t136 = (((x765*x766)==x767)&x768);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x773 = -1;
	int32_t x774 = -25868751;
	int32_t x775 = -1;
	int16_t x776 = 61;
	int32_t t137 = -9074951;

    t137 = (((x773*x774)==x775)&x776);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x777 = 0LL;
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = -1LL;
	int8_t x780 = -1;

    t138 = (((x777*x778)==x779)&x780);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	static volatile uint16_t x782 = UINT16_MAX;
	static int16_t x783 = INT16_MIN;
	volatile int32_t t139 = -600279872;

    t139 = (((x781*x782)==x783)&x784);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x785 = 20;
	int8_t x786 = 0;
	uint32_t x787 = 25425U;
	int32_t t140 = 963;

    t140 = (((x785*x786)==x787)&x788);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x789 = INT16_MIN;
	volatile int32_t x790 = -1;
	static volatile int16_t x792 = -650;
	volatile int32_t t141 = 1;

    t141 = (((x789*x790)==x791)&x792);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x793 = -1;
	int64_t x794 = 0LL;
	static uint32_t x795 = 38460431U;
	static volatile int32_t t142 = -36;

    t142 = (((x793*x794)==x795)&x796);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x801 = 275388912769LLU;
	uint16_t x803 = 322U;
	volatile uint32_t x804 = 231953987U;

    t143 = (((x801*x802)==x803)&x804);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x805 = INT32_MIN;
	static int16_t x807 = INT16_MIN;
	volatile int32_t x808 = -1;
	int32_t t144 = 203325;

    t144 = (((x805*x806)==x807)&x808);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x813 = UINT32_MAX;
	int8_t x814 = -1;
	volatile int32_t x815 = INT32_MIN;
	int64_t t145 = -523760461832LL;

    t145 = (((x813*x814)==x815)&x816);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x821 = -1;
	uint16_t x822 = 13670U;
	int64_t x823 = -1LL;
	int32_t x824 = INT32_MIN;
	volatile int32_t t146 = -55273304;

    t146 = (((x821*x822)==x823)&x824);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x825 = INT8_MIN;
	uint32_t x826 = UINT32_MAX;
	volatile int64_t x827 = -136017LL;
	int32_t x828 = INT32_MIN;
	volatile int32_t t147 = 1474798;

    t147 = (((x825*x826)==x827)&x828);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x829 = 3029U;
	uint16_t x831 = 771U;
	int8_t x832 = INT8_MAX;

    t148 = (((x829*x830)==x831)&x832);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x833 = UINT64_MAX;
	int16_t x835 = INT16_MIN;
	int8_t x836 = INT8_MAX;
	volatile int32_t t149 = 1;

    t149 = (((x833*x834)==x835)&x836);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x837 = INT8_MIN;
	uint8_t x838 = 69U;
	int16_t x839 = -1;
	int8_t x840 = 0;
	volatile int32_t t150 = -996429393;

    t150 = (((x837*x838)==x839)&x840);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x841 = 57954669LLU;
	static volatile int16_t x842 = INT16_MIN;
	static uint64_t x843 = UINT64_MAX;
	uint64_t x844 = 22LLU;
	uint64_t t151 = 27108318207319983LLU;

    t151 = (((x841*x842)==x843)&x844);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x850 = -1;
	uint64_t x851 = 14047LLU;
	int32_t t152 = -697432;

    t152 = (((x849*x850)==x851)&x852);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x853 = 0U;
	int16_t x854 = 1;
	int64_t x855 = -28205LL;
	int16_t x856 = INT16_MIN;
	volatile int32_t t153 = -22271;

    t153 = (((x853*x854)==x855)&x856);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x857 = 2;
	int16_t x858 = INT16_MIN;
	volatile uint32_t x859 = UINT32_MAX;
	int8_t x860 = INT8_MIN;

    t154 = (((x857*x858)==x859)&x860);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x863 = -1115;
	int8_t x864 = INT8_MAX;
	int32_t t155 = 5;

    t155 = (((x861*x862)==x863)&x864);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x869 = INT8_MAX;
	uint16_t x870 = UINT16_MAX;
	static int32_t x871 = INT32_MIN;
	int8_t x872 = -1;
	volatile int32_t t156 = 230263;

    t156 = (((x869*x870)==x871)&x872);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x881 = 208LLU;
	uint64_t x882 = 3317626015537252663LLU;
	int16_t x883 = 189;
	uint64_t x884 = 5039485935LLU;
	uint64_t t157 = 59051244LLU;

    t157 = (((x881*x882)==x883)&x884);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x886 = -23587LL;
	volatile int16_t x887 = -12;
	static int32_t x888 = INT32_MAX;
	static int32_t t158 = 24339;

    t158 = (((x885*x886)==x887)&x888);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x893 = UINT32_MAX;

    t159 = (((x893*x894)==x895)&x896);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x901 = -1;
	int16_t x902 = INT16_MAX;
	int32_t x904 = INT32_MAX;
	volatile int32_t t160 = 2;

    t160 = (((x901*x902)==x903)&x904);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x905 = UINT64_MAX;
	int8_t x906 = -62;
	int8_t x907 = INT8_MIN;
	static int32_t t161 = 0;

    t161 = (((x905*x906)==x907)&x908);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x911 = 0;
	uint16_t x912 = 7400U;
	int32_t t162 = 24998937;

    t162 = (((x909*x910)==x911)&x912);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x914 = -2;
	uint32_t x915 = 7841U;
	volatile int8_t x916 = 2;
	int32_t t163 = 1;

    t163 = (((x913*x914)==x915)&x916);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x921 = 5043398599LLU;
	static int16_t x922 = INT16_MAX;
	volatile int32_t t164 = 122580;

    t164 = (((x921*x922)==x923)&x924);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x925 = -1;
	static uint32_t x927 = 571U;
	uint64_t x928 = 895515LLU;

    t165 = (((x925*x926)==x927)&x928);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x934 = 2;
	static volatile int64_t x935 = INT64_MAX;
	int8_t x936 = INT8_MAX;

    t166 = (((x933*x934)==x935)&x936);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x937 = INT64_MIN;
	static uint64_t x938 = UINT64_MAX;
	volatile int64_t x939 = 1851LL;
	static volatile int64_t x940 = INT64_MIN;
	volatile int64_t t167 = 92581990155348467LL;

    t167 = (((x937*x938)==x939)&x940);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x941 = UINT64_MAX;
	volatile int8_t x942 = 34;
	static volatile int16_t x943 = -1;
	int64_t t168 = 5568599938329311LL;

    t168 = (((x941*x942)==x943)&x944);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x945 = 15U;
	int8_t x946 = -1;
	volatile uint32_t x947 = 424U;
	int16_t x948 = 0;
	static volatile int32_t t169 = 4;

    t169 = (((x945*x946)==x947)&x948);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x953 = -1;
	int8_t x954 = -23;
	volatile int32_t t170 = 401236;

    t170 = (((x953*x954)==x955)&x956);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x957 = INT16_MIN;
	static int64_t x959 = -1LL;
	int32_t x960 = 1013757972;
	int32_t t171 = -199478456;

    t171 = (((x957*x958)==x959)&x960);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x961 = 0;
	volatile int16_t x962 = -1;
	int32_t x964 = INT32_MAX;
	int32_t t172 = 2;

    t172 = (((x961*x962)==x963)&x964);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x965 = 10863774;
	uint8_t x966 = 9U;
	uint8_t x967 = 2U;
	int8_t x968 = INT8_MIN;

    t173 = (((x965*x966)==x967)&x968);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x970 = -1;
	uint8_t x971 = UINT8_MAX;
	volatile uint8_t x972 = UINT8_MAX;
	static volatile int32_t t174 = -97013607;

    t174 = (((x969*x970)==x971)&x972);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x981 = 19098LLU;
	uint16_t x982 = 30U;
	volatile int16_t x983 = 1524;
	static volatile uint16_t x984 = 9526U;
	int32_t t175 = -1;

    t175 = (((x981*x982)==x983)&x984);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x989 = INT8_MIN;
	uint64_t x990 = UINT64_MAX;
	uint32_t x991 = UINT32_MAX;
	int32_t x992 = -5443283;

    t176 = (((x989*x990)==x991)&x992);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x993 = 1U;
	volatile uint32_t x994 = UINT32_MAX;
	int32_t x995 = 510;
	uint64_t x996 = 211224453914810153LLU;

    t177 = (((x993*x994)==x995)&x996);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x999 = INT64_MIN;
	volatile int64_t t178 = 76235297762LL;

    t178 = (((x997*x998)==x999)&x1000);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x1005 = 36838449LLU;
	volatile uint8_t x1006 = 1U;
	int8_t x1007 = INT8_MIN;
	static int16_t x1008 = INT16_MIN;
	int32_t t179 = -9976;

    t179 = (((x1005*x1006)==x1007)&x1008);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1013 = -58;
	int8_t x1014 = INT8_MAX;
	volatile int32_t x1015 = INT32_MAX;
	volatile uint8_t x1016 = 15U;
	static volatile int32_t t180 = 1036349;

    t180 = (((x1013*x1014)==x1015)&x1016);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1017 = -1;
	static int16_t x1018 = INT16_MIN;
	volatile int64_t x1019 = INT64_MAX;
	uint64_t x1020 = 77452072LLU;
	uint64_t t181 = 2930309877640625622LLU;

    t181 = (((x1017*x1018)==x1019)&x1020);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1025 = UINT16_MAX;
	uint32_t x1026 = 3U;
	int64_t x1028 = -1LL;
	int64_t t182 = -130539624631840LL;

    t182 = (((x1025*x1026)==x1027)&x1028);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1029 = -1;
	uint64_t x1030 = UINT64_MAX;
	static uint8_t x1031 = 19U;
	volatile uint32_t t183 = 29627U;

    t183 = (((x1029*x1030)==x1031)&x1032);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1033 = 496866;
	uint16_t x1034 = 328U;
	int32_t x1035 = INT32_MIN;
	volatile int32_t t184 = -5;

    t184 = (((x1033*x1034)==x1035)&x1036);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x1037 = 117308343U;
	int8_t x1038 = 0;
	int8_t x1039 = 1;
	uint32_t x1040 = 60926684U;

    t185 = (((x1037*x1038)==x1039)&x1040);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1041 = 4065U;
	int32_t x1042 = -1;
	int32_t x1043 = INT32_MIN;
	int8_t x1044 = -1;
	volatile int32_t t186 = 1;

    t186 = (((x1041*x1042)==x1043)&x1044);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1045 = INT32_MIN;
	uint32_t x1046 = 79803882U;
	uint64_t x1047 = 2942917914688969LLU;
	int16_t x1048 = INT16_MIN;

    t187 = (((x1045*x1046)==x1047)&x1048);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1049 = -38092;
	int32_t x1051 = INT32_MAX;

    t188 = (((x1049*x1050)==x1051)&x1052);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1061 = 30;
	int8_t x1062 = INT8_MIN;
	int64_t t189 = -14LL;

    t189 = (((x1061*x1062)==x1063)&x1064);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x1065 = UINT16_MAX;
	int16_t x1067 = INT16_MIN;
	int32_t x1068 = INT32_MIN;
	int32_t t190 = 6992541;

    t190 = (((x1065*x1066)==x1067)&x1068);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x1073 = 1U;
	static int16_t x1075 = INT16_MIN;
	volatile int32_t t191 = 62;

    t191 = (((x1073*x1074)==x1075)&x1076);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1081 = UINT8_MAX;
	volatile int16_t x1082 = INT16_MAX;
	uint64_t x1083 = 4847823LLU;
	volatile int32_t t192 = 1069404654;

    t192 = (((x1081*x1082)==x1083)&x1084);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1085 = 1U;
	volatile int16_t x1086 = 8270;
	int8_t x1087 = -1;
	static volatile uint8_t x1088 = 12U;
	volatile int32_t t193 = -7389;

    t193 = (((x1085*x1086)==x1087)&x1088);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1089 = INT16_MIN;
	volatile int8_t x1091 = 0;
	volatile int8_t x1092 = 0;
	volatile int32_t t194 = 58;

    t194 = (((x1089*x1090)==x1091)&x1092);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1098 = 27243092243LL;
	int8_t x1099 = -1;
	uint64_t x1100 = UINT64_MAX;
	uint64_t t195 = 201LLU;

    t195 = (((x1097*x1098)==x1099)&x1100);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1102 = UINT32_MAX;
	static int8_t x1104 = -1;
	volatile int32_t t196 = 0;

    t196 = (((x1101*x1102)==x1103)&x1104);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1106 = 3980U;
	int32_t x1107 = INT32_MIN;

    t197 = (((x1105*x1106)==x1107)&x1108);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1114 = -1;
	uint8_t x1115 = UINT8_MAX;
	volatile int8_t x1116 = 14;
	volatile int32_t t198 = -649690;

    t198 = (((x1113*x1114)==x1115)&x1116);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1117 = INT16_MIN;
	int8_t x1118 = -1;
	int16_t x1119 = -1;
	int32_t t199 = 15728;

    t199 = (((x1117*x1118)==x1119)&x1120);

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

