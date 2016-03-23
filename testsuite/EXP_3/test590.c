
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

int32_t x4 = INT32_MIN;
uint32_t x12 = UINT32_MAX;
uint8_t x23 = UINT8_MAX;
volatile uint8_t x24 = 3U;
uint16_t x32 = 1119U;
volatile uint64_t t6 = 37314367LLU;
int8_t x37 = 19;
int8_t x38 = INT8_MIN;
static uint16_t x39 = 5007U;
int64_t x44 = -1LL;
int8_t x50 = -1;
volatile uint64_t t10 = 313133423LLU;
int8_t x61 = INT8_MIN;
static volatile uint8_t x65 = UINT8_MAX;
static uint8_t x81 = 30U;
int32_t x85 = INT32_MIN;
int16_t x87 = INT16_MIN;
int16_t x90 = INT16_MAX;
int64_t x91 = INT64_MIN;
int64_t x92 = 19179538LL;
volatile uint32_t x94 = 721U;
static uint32_t t19 = 1065U;
uint8_t x97 = UINT8_MAX;
int32_t t20 = 57641929;
static int8_t x103 = 0;
static volatile uint32_t t21 = 2U;
int16_t x123 = -14919;
int8_t x127 = 0;
int64_t t27 = 3718572417812LL;
int8_t x141 = -6;
int16_t x143 = -1;
static uint64_t x147 = 46039434001577LLU;
int64_t x153 = 5800561771811668LL;
uint16_t x155 = 185U;
static volatile uint32_t t32 = 25U;
int8_t x161 = -1;
uint32_t x167 = 627999078U;
int64_t x173 = -1LL;
int8_t x174 = INT8_MIN;
int64_t t36 = -6LL;
static uint32_t x178 = 27243U;
static int8_t x179 = INT8_MAX;
int8_t x187 = 1;
uint64_t t41 = 13979814585LLU;
static uint32_t x212 = UINT32_MAX;
volatile uint16_t x217 = 14303U;
volatile int8_t x223 = INT8_MIN;
uint32_t t46 = 326U;
uint16_t x226 = 1U;
int32_t t47 = -192607984;
int64_t x230 = -1LL;
uint8_t x233 = 94U;
uint16_t x240 = 117U;
volatile int32_t t52 = 23044180;
volatile uint16_t x251 = 10U;
uint32_t x252 = UINT32_MAX;
volatile int64_t t53 = INT64_MIN;
int32_t x257 = INT32_MAX;
int64_t x261 = INT64_MAX;
int16_t x263 = -2181;
uint32_t x264 = 19275U;
static volatile uint8_t x267 = UINT8_MAX;
int16_t x268 = INT16_MIN;
int16_t x274 = INT16_MIN;
int32_t x275 = INT32_MIN;
volatile int64_t t59 = 26865134LL;
static uint32_t x283 = UINT32_MAX;
volatile uint32_t t60 = 199U;
int16_t x285 = INT16_MIN;
uint16_t x291 = 2682U;
volatile uint64_t t62 = 5090251248896914256LLU;
volatile uint32_t x294 = 2U;
int32_t x296 = 4087;
volatile uint32_t t63 = 3634335U;
int32_t x305 = -96377562;
volatile uint8_t x309 = 0U;
static volatile uint64_t t67 = 12LLU;
int16_t x314 = -1;
volatile int8_t x315 = INT8_MIN;
volatile uint32_t t68 = 4664U;
volatile uint64_t x317 = 18657LLU;
int8_t x322 = INT8_MAX;
int8_t x324 = -1;
volatile int32_t t70 = 16026900;
static uint16_t x342 = 19U;
volatile uint8_t x346 = 58U;
int32_t x351 = -49;
volatile int8_t x354 = INT8_MIN;
int32_t x365 = 113;
static uint8_t x367 = UINT8_MAX;
uint16_t x374 = UINT16_MAX;
int16_t x376 = 1;
int32_t x395 = INT32_MAX;
int8_t x404 = -1;
static uint16_t x407 = 978U;
static uint8_t x412 = UINT8_MAX;
static int8_t x416 = INT8_MIN;
int64_t x418 = INT64_MIN;
uint8_t x419 = UINT8_MAX;
uint64_t t90 = 955972202150LLU;
volatile uint32_t x435 = UINT32_MAX;
int64_t x438 = -1LL;
uint16_t x444 = UINT16_MAX;
int32_t t93 = 115909;
volatile int32_t t95 = -4674299;
uint8_t x454 = UINT8_MAX;
int64_t t96 = -1516LL;
uint32_t x457 = UINT32_MAX;
volatile int16_t x460 = -216;
uint64_t x462 = 28599190232LLU;
int32_t x472 = -135;
static int64_t x481 = 4704915005036LL;
int16_t x483 = -2640;
uint64_t t102 = 2762LLU;
int32_t x491 = -1;
int32_t t104 = 351562556;
static volatile int8_t x499 = INT8_MAX;
static volatile uint64_t x501 = 1910548755141487511LLU;
uint64_t t107 = 5064140298148LLU;
uint64_t x510 = 61101080099785592LLU;
static uint8_t x512 = UINT8_MAX;
int8_t x521 = -1;
int32_t x548 = INT32_MIN;
uint16_t x557 = UINT16_MAX;
volatile uint64_t t117 = 21506187030984969LLU;
uint64_t x561 = 21150078LLU;
uint32_t x575 = 25U;
uint64_t x579 = UINT64_MAX;
int64_t x580 = INT64_MIN;
int64_t x582 = INT64_MAX;
int16_t x585 = 1;
static volatile int32_t t123 = -260920;
int16_t x589 = INT16_MIN;
int16_t x591 = -1;
volatile int8_t x602 = INT8_MAX;
static volatile int64_t x604 = INT64_MAX;
volatile int64_t t126 = 616935855LL;
int64_t x614 = INT64_MIN;
uint16_t x616 = 281U;
int64_t t128 = 193068480427LL;
int64_t x636 = -640660554516LL;
int32_t x645 = INT32_MIN;
uint8_t x646 = UINT8_MAX;
volatile uint8_t x648 = UINT8_MAX;
volatile int32_t t132 = -1048649056;
static int8_t x660 = INT8_MAX;
int8_t x661 = 1;
volatile uint32_t x662 = UINT32_MAX;
uint8_t x663 = 8U;
static int64_t x666 = 1738162LL;
static uint64_t x669 = 92878713437575LLU;
static volatile uint64_t t136 = 7780LLU;
uint64_t x674 = UINT64_MAX;
static int32_t x680 = INT32_MIN;
uint32_t x682 = UINT32_MAX;
uint8_t x683 = 3U;
int16_t x695 = INT16_MAX;
static int64_t t142 = 234LL;
static uint64_t x700 = 307292LLU;
uint16_t x713 = 522U;
uint32_t x721 = UINT32_MAX;
int16_t x723 = -1;
volatile uint64_t t149 = 40934110958424LLU;
int16_t x735 = -1;
volatile int8_t x737 = INT8_MAX;
int32_t x745 = INT32_MIN;
volatile uint64_t x746 = UINT64_MAX;
uint64_t x749 = UINT64_MAX;
int64_t t156 = 5090712238LL;
int8_t x770 = -48;
static volatile int64_t t158 = 12366LL;
uint64_t t159 = 1LLU;
static int32_t x779 = -1435850;
uint8_t x780 = 1U;
volatile uint8_t x784 = 1U;
static int64_t t161 = -119078LL;
volatile int32_t x815 = INT32_MIN;
int64_t t166 = -5700LL;
int8_t x825 = INT8_MIN;
int8_t x827 = INT8_MIN;
uint32_t x835 = 13U;
volatile uint32_t t169 = 3U;
static int8_t x840 = INT8_MIN;
uint8_t x842 = 1U;
int64_t t171 = -40725868768995LL;
int32_t t172 = 55764673;
static int64_t x856 = -1LL;
static int64_t t175 = 226681947556745370LL;
int64_t x867 = -1LL;
uint16_t x868 = 18367U;
uint64_t t178 = 56535278LLU;
int16_t x879 = INT16_MIN;
volatile int32_t x880 = -1;
int32_t x882 = 39;
volatile uint32_t x890 = 55232U;
volatile int64_t x898 = -1LL;
volatile int64_t t183 = 87466LL;
int16_t x901 = -1;
int64_t x906 = 32297446260843LL;
uint64_t x914 = 54553094836LLU;
int8_t x921 = -8;
volatile int32_t t188 = 3;
int8_t x942 = -1;
uint64_t x943 = UINT64_MAX;
uint16_t x944 = UINT16_MAX;
int64_t x950 = 5LL;
static int64_t x954 = -1LL;
uint16_t x957 = 219U;
static int16_t x959 = 1746;
int8_t x966 = -1;
volatile uint32_t t197 = 7U;
volatile uint16_t x971 = 11664U;
int64_t t198 = -96898873LL;
int32_t x973 = INT32_MIN;
uint32_t t199 = 190106U;


void f0(void) {
    	volatile int16_t x1 = 7;
	static int64_t x2 = -363829LL;
	int16_t x3 = INT16_MAX;
	volatile int64_t t0 = 13056294607579LL;

    t0 = ((x1+x2)-(x3/x4));

    if (t0 != -363822LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 767683401U;
	volatile int32_t x10 = -83;
	static int16_t x11 = INT16_MIN;
	uint32_t t1 = 1U;

    t1 = ((x9+x10)-(x11/x12));

    if (t1 != 767683318U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = -1LL;
	uint8_t x14 = 2U;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = -1;
	int64_t t2 = -1927850084669377LL;

    t2 = ((x13+x14)-(x15/x16));

    if (t2 != -127LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MIN;
	uint64_t x18 = 141086761LLU;
	int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t3 = 7LLU;

    t3 = ((x17+x18)-(x19/x20));

    if (t3 != 18446744071703154728LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 27U;
	volatile int32_t x22 = 794758933;
	int32_t t4 = 1849132;

    t4 = ((x21+x22)-(x23/x24));

    if (t4 != 794758875) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = UINT16_MAX;
	volatile int16_t x26 = 3;
	static volatile int16_t x27 = 26;
	volatile uint8_t x28 = 104U;
	int32_t t5 = 43962;

    t5 = ((x25+x26)-(x27/x28));

    if (t5 != 65538) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 7661072096LLU;
	static int8_t x30 = -1;
	static volatile int64_t x31 = INT64_MIN;

    t6 = ((x29+x30)-(x31/x32));

    if (t6 != 8242520652005764LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 3U;
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MIN;
	uint16_t x36 = 26795U;
	volatile int64_t t7 = -1124934385463016846LL;

    t7 = ((x33+x34)-(x35/x36));

    if (t7 != 344219893146289LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x40 = 10U;
	volatile int32_t t8 = 444920203;

    t8 = ((x37+x38)-(x39/x40));

    if (t8 != -609) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 30U;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	volatile int64_t t9 = -915902LL;

    t9 = ((x41+x42)-(x43/x44));

    if (t9 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = -1;
	uint64_t x51 = UINT64_MAX;
	static int64_t x52 = -1243191947640735LL;

    t10 = ((x49+x50)-(x51/x52));

    if (t10 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x53 = 1619U;
	int32_t x54 = -9583138;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t11 = -1225045;

    t11 = ((x53+x54)-(x55/x56));

    if (t11 != -9581520) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x57 = 8217U;
	uint64_t x58 = 0LLU;
	int64_t x59 = 23413LL;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t12 = 26129LLU;

    t12 = ((x57+x58)-(x59/x60));

    if (t12 != 8217LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x62 = INT16_MAX;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	uint32_t t13 = 15559994U;

    t13 = ((x61+x62)-(x63/x64));

    if (t13 != 4261181295U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = INT8_MIN;
	static uint64_t x67 = 12263007LLU;
	uint16_t x68 = 71U;
	static volatile uint64_t t14 = 548528745678895974LLU;

    t14 = ((x65+x66)-(x67/x68));

    if (t14 != 18446744073709379025LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = 3U;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = 20212;
	volatile int64_t t15 = 119579LL;

    t15 = ((x73+x74)-(x75/x76));

    if (t15 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static uint8_t x84 = 2U;
	volatile uint32_t t16 = 2839157U;

    t16 = ((x81+x82)-(x83/x84));

    if (t16 != 2147483551U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x86 = -1LL;
	uint16_t x88 = 106U;
	volatile int64_t t17 = 5084999238939055LL;

    t17 = ((x85+x86)-(x87/x88));

    if (t17 != -2147483340LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 3402300U;
	int64_t t18 = 84LL;

    t18 = ((x89+x90)-(x91/x92));

    if (t18 != 480899900709LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = -1;
	volatile uint32_t x95 = 448757U;
	int8_t x96 = INT8_MAX;

    t19 = ((x93+x94)-(x95/x96));

    if (t19 != 4294964483U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 12U;
	uint16_t x100 = 231U;

    t20 = ((x97+x98)-(x99/x100));

    if (t20 != 510) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x101 = 1U;
	uint16_t x102 = 2676U;
	int16_t x104 = INT16_MAX;

    t21 = ((x101+x102)-(x103/x104));

    if (t21 != 2677U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x105 = 3010673447464LL;
	int64_t x106 = -5388291537LL;
	uint64_t x107 = 16004LLU;
	volatile int32_t x108 = -1;
	volatile uint64_t t22 = 373313LLU;

    t22 = ((x105+x106)-(x107/x108));

    if (t22 != 3005285155927LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = INT16_MIN;
	static int64_t x110 = 1506176497667322820LL;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = 365896759LL;
	uint64_t t23 = 25254989092992178LLU;

    t23 = ((x109+x110)-(x111/x112));

    if (t23 != 1506176447252128890LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = 48;
	volatile int32_t x118 = 14480323;
	uint16_t x119 = 3044U;
	int16_t x120 = -3;
	volatile int32_t t24 = -99293719;

    t24 = ((x117+x118)-(x119/x120));

    if (t24 != 14481385) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = -756639LL;
	int32_t x122 = -1;
	uint32_t x124 = 3997388U;
	volatile int64_t t25 = 3185021981647LL;

    t25 = ((x121+x122)-(x123/x124));

    if (t25 != -757714LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = INT16_MAX;
	int64_t x126 = 897465713580606418LL;
	int16_t x128 = INT16_MIN;
	int64_t t26 = 356646640LL;

    t26 = ((x125+x126)-(x127/x128));

    if (t26 != 897465713580639185LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x133 = INT64_MAX;
	int16_t x134 = -13;
	uint16_t x135 = 0U;
	static int8_t x136 = -10;

    t27 = ((x133+x134)-(x135/x136));

    if (t27 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x142 = 5U;
	volatile int16_t x144 = -44;
	int32_t t28 = -124286;

    t28 = ((x141+x142)-(x143/x144));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x145 = 256895;
	uint32_t x146 = 335U;
	static int64_t x148 = INT64_MIN;
	volatile uint64_t t29 = 7060553LLU;

    t29 = ((x145+x146)-(x147/x148));

    if (t29 != 257230LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x149 = 0;
	uint64_t x150 = 1482754549LLU;
	volatile uint64_t x151 = UINT64_MAX;
	static uint16_t x152 = 2076U;
	volatile uint64_t t30 = 88608060LLU;

    t30 = ((x149+x150)-(x151/x152));

    if (t30 != 18437858360320577094LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x154 = INT16_MIN;
	int8_t x156 = -23;
	int64_t t31 = 481LL;

    t31 = ((x153+x154)-(x155/x156));

    if (t31 != 5800561771778908LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	static volatile int8_t x158 = 1;
	volatile int32_t x159 = INT32_MAX;
	static volatile int32_t x160 = -3;

    t32 = ((x157+x158)-(x159/x160));

    if (t32 != 715827882U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x162 = UINT8_MAX;
	uint8_t x163 = UINT8_MAX;
	static uint8_t x164 = 124U;
	volatile int32_t t33 = 4180530;

    t33 = ((x161+x162)-(x163/x164));

    if (t33 != 252) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x165 = 382722552902439LLU;
	volatile int64_t x166 = 12LL;
	volatile uint64_t x168 = 1LLU;
	uint64_t t34 = 112LLU;

    t34 = ((x165+x166)-(x167/x168));

    if (t34 != 382721924903373LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = INT8_MAX;
	uint64_t x170 = 71500879312LLU;
	static int16_t x171 = INT16_MIN;
	volatile int32_t x172 = INT32_MIN;
	static volatile uint64_t t35 = 115282265875LLU;

    t35 = ((x169+x170)-(x171/x172));

    if (t35 != 71500879439LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x175 = UINT8_MAX;
	volatile int32_t x176 = INT32_MIN;

    t36 = ((x173+x174)-(x175/x176));

    if (t36 != -129LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x177 = 25671869U;
	static uint16_t x180 = 1U;
	static volatile uint32_t t37 = 260795187U;

    t37 = ((x177+x178)-(x179/x180));

    if (t37 != 25698985U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = -1LL;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t38 = 224158929LLU;

    t38 = ((x181+x182)-(x183/x184));

    if (t38 != 65533LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x185 = UINT8_MAX;
	static uint8_t x186 = 10U;
	uint64_t x188 = UINT64_MAX;
	uint64_t t39 = 2511770696708193924LLU;

    t39 = ((x185+x186)-(x187/x188));

    if (t39 != 265LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 1539513016LLU;
	volatile int16_t x191 = -1;
	static int16_t x192 = -1;
	volatile uint64_t t40 = 231758LLU;

    t40 = ((x189+x190)-(x191/x192));

    if (t40 != 1539513014LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 32150U;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 42254LLU;

    t41 = ((x193+x194)-(x195/x196));

    if (t41 != 18446307505714276842LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = INT32_MAX;
	static uint8_t x198 = 0U;
	uint32_t x199 = 375594U;
	uint32_t x200 = 432U;
	static volatile uint32_t t42 = 0U;

    t42 = ((x197+x198)-(x199/x200));

    if (t42 != 2147482778U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x205 = 2U;
	uint16_t x206 = 1U;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = INT16_MIN;
	volatile uint32_t t43 = 495210U;

    t43 = ((x205+x206)-(x207/x208));

    if (t43 != 4294901763U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x209 = INT8_MAX;
	uint32_t x210 = 1451853U;
	uint64_t x211 = 5956LLU;
	uint64_t t44 = 2152012LLU;

    t44 = ((x209+x210)-(x211/x212));

    if (t44 != 1451980LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x218 = UINT16_MAX;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = INT8_MIN;
	uint32_t t45 = 214527U;

    t45 = ((x217+x218)-(x219/x220));

    if (t45 != 79837U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int16_t x224 = -4035;

    t46 = ((x221+x222)-(x223/x224));

    if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x225 = INT32_MIN;
	uint8_t x227 = 28U;
	int8_t x228 = INT8_MIN;

    t47 = ((x225+x226)-(x227/x228));

    if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 3U;
	static int8_t x231 = INT8_MIN;
	int16_t x232 = -1;
	int64_t t48 = 85091483945702349LL;

    t48 = ((x229+x230)-(x231/x232));

    if (t48 != -126LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x234 = 26450U;
	static int64_t x235 = INT64_MAX;
	static uint8_t x236 = UINT8_MAX;
	int64_t t49 = 56LL;

    t49 = ((x233+x234)-(x235/x236));

    if (t49 != -36170086419011792LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x237 = 19U;
	int8_t x238 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	volatile uint64_t t50 = 91979992LLU;

    t50 = ((x237+x238)-(x239/x240));

    if (t50 != 18289079594447076707LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = INT16_MAX;
	int64_t x242 = -1LL;
	int16_t x243 = -1;
	int16_t x244 = -7;
	int64_t t51 = 1300404LL;

    t51 = ((x241+x242)-(x243/x244));

    if (t51 != 32766LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x245 = -1;
	int8_t x246 = INT8_MIN;
	static int16_t x247 = 1;
	int8_t x248 = INT8_MAX;

    t52 = ((x245+x246)-(x247/x248));

    if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x249 = 0;
	static int64_t x250 = INT64_MIN;

    t53 = ((x249+x250)-(x251/x252));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	static int64_t x260 = 26LL;
	volatile int64_t t54 = -39LL;

    t54 = ((x257+x258)-(x259/x260));

    if (t54 != 2064855355LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x262 = -2;
	int64_t t55 = 185LL;

    t55 = ((x261+x262)-(x263/x264));

    if (t55 != 9223372036854552980LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	uint64_t t56 = 2LLU;

    t56 = ((x265+x266)-(x267/x268));

    if (t56 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x269 = -8218893;
	static uint8_t x270 = 1U;
	volatile int32_t x271 = -17491;
	volatile uint16_t x272 = 2U;
	int32_t t57 = 7;

    t57 = ((x269+x270)-(x271/x272));

    if (t57 != -8210147) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x273 = -6;
	int64_t x276 = INT64_MAX;
	int64_t t58 = -5930614003LL;

    t58 = ((x273+x274)-(x275/x276));

    if (t58 != -32774LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;

    t59 = ((x277+x278)-(x279/x280));

    if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x281 = -1;
	int32_t x282 = -1;
	int16_t x284 = INT16_MAX;

    t60 = ((x281+x282)-(x283/x284));

    if (t60 != 4294836218U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MAX;
	static int32_t t61 = -70;

    t61 = ((x285+x286)-(x287/x288));

    if (t61 != -32769) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x289 = 14826511340799125LL;
	uint64_t x290 = UINT64_MAX;
	static int16_t x292 = INT16_MIN;

    t62 = ((x289+x290)-(x291/x292));

    if (t62 != 14826511340799124LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x293 = INT32_MIN;
	int16_t x295 = INT16_MIN;

    t63 = ((x293+x294)-(x295/x296));

    if (t63 != 2147483658U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x297 = 87979LL;
	int16_t x298 = -1;
	uint8_t x299 = 99U;
	volatile int8_t x300 = INT8_MIN;
	int64_t t64 = 8076749796390LL;

    t64 = ((x297+x298)-(x299/x300));

    if (t64 != 87978LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x301 = 6306537372LLU;
	uint64_t x302 = UINT64_MAX;
	static int8_t x303 = INT8_MIN;
	volatile uint16_t x304 = 23U;
	uint64_t t65 = 147172591LLU;

    t65 = ((x301+x302)-(x303/x304));

    if (t65 != 6306537376LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x306 = 967;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = 370688423297LLU;
	volatile uint64_t t66 = 19LLU;

    t66 = ((x305+x306)-(x307/x308));

    if (t66 != 18446744073613175021LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x310 = 2LLU;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;

    t67 = ((x309+x310)-(x311/x312));

    if (t67 != 2LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x313 = UINT32_MAX;
	uint32_t x316 = 13U;

    t68 = ((x313+x314)-(x315/x316));

    if (t68 != 3964585205U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x318 = 664870743U;
	int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MAX;
	volatile uint64_t t69 = 421LLU;

    t69 = ((x317+x318)-(x319/x320));

    if (t69 != 72624977333037241LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x321 = 16U;
	volatile int16_t x323 = INT16_MAX;

    t70 = ((x321+x322)-(x323/x324));

    if (t70 != 32910) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x329 = -1LL;
	uint32_t x330 = UINT32_MAX;
	uint16_t x331 = 26610U;
	int64_t x332 = -158575LL;
	volatile int64_t t71 = -24184074840228LL;

    t71 = ((x329+x330)-(x331/x332));

    if (t71 != 4294967294LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = INT16_MAX;
	uint32_t x334 = 444780U;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = -538111510194862167LL;
	uint64_t t72 = 676792430212513617LLU;

    t72 = ((x333+x334)-(x335/x336));

    if (t72 != 477546LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x337 = -440;
	int8_t x338 = INT8_MAX;
	static uint32_t x339 = 42212U;
	static volatile int64_t x340 = -1LL;
	int64_t t73 = -521070482843LL;

    t73 = ((x337+x338)-(x339/x340));

    if (t73 != 41899LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x341 = -8320421667012406LL;
	int8_t x343 = -1;
	volatile uint32_t x344 = 33995107U;
	int64_t t74 = 134049182LL;

    t74 = ((x341+x342)-(x343/x344));

    if (t74 != -8320421667012513LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x345 = 5067LLU;
	uint64_t x347 = 458999298512578LLU;
	static int32_t x348 = -1;
	uint64_t t75 = 0LLU;

    t75 = ((x345+x346)-(x347/x348));

    if (t75 != 5125LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x349 = INT8_MAX;
	int32_t x350 = -61;
	int16_t x352 = -1;
	int32_t t76 = 36015815;

    t76 = ((x349+x350)-(x351/x352));

    if (t76 != 17) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x353 = 2U;
	int16_t x355 = -1;
	int8_t x356 = -2;
	volatile int32_t t77 = 9;

    t77 = ((x353+x354)-(x355/x356));

    if (t77 != -126) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	int16_t x358 = 1;
	static uint64_t x359 = 70542447556430LLU;
	int16_t x360 = INT16_MAX;
	volatile uint64_t t78 = 6LLU;

    t78 = ((x357+x358)-(x359/x360));

    if (t78 != 18446744071556701262LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x366 = -245;
	int16_t x368 = -1;
	volatile int32_t t79 = -75;

    t79 = ((x365+x366)-(x367/x368));

    if (t79 != 123) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = -1;
	static int8_t x375 = -6;
	int32_t t80 = -506382;

    t80 = ((x373+x374)-(x375/x376));

    if (t80 != 65540) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x381 = 5;
	static int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	int32_t x384 = -4714185;
	int32_t t81 = -29600;

    t81 = ((x381+x382)-(x383/x384));

    if (t81 != -123) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x385 = -1LL;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	int16_t x388 = 244;
	static volatile int64_t t82 = -142913480948LL;

    t82 = ((x385+x386)-(x387/x388));

    if (t82 != 37800705069044181LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x393 = 5118LLU;
	int64_t x394 = 50LL;
	volatile int16_t x396 = -1;
	volatile uint64_t t83 = 4190676412LLU;

    t83 = ((x393+x394)-(x395/x396));

    if (t83 != 2147488815LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	static int8_t x400 = INT8_MIN;
	static int64_t t84 = -263569974258137116LL;

    t84 = ((x397+x398)-(x399/x400));

    if (t84 != -2147483521LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x401 = 3233;
	int16_t x402 = INT16_MAX;
	static uint16_t x403 = 16887U;
	volatile int32_t t85 = -382;

    t85 = ((x401+x402)-(x403/x404));

    if (t85 != 52887) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x405 = 656U;
	int64_t x406 = INT64_MIN;
	static int16_t x408 = -8;
	int64_t t86 = -1107168393898885505LL;

    t86 = ((x405+x406)-(x407/x408));

    if (t86 != -9223372036854775030LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x409 = 798;
	int32_t x410 = INT32_MIN;
	uint16_t x411 = 16426U;
	int32_t t87 = -417250871;

    t87 = ((x409+x410)-(x411/x412));

    if (t87 != -2147482914) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x413 = -1;
	int64_t x414 = -461076328971073062LL;
	int64_t x415 = INT64_MIN;
	volatile int64_t t88 = 5486452306263558LL;

    t88 = ((x413+x414)-(x415/x416));

    if (t88 != -533133923009000999LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = 55476022;
	int32_t x420 = -23;
	volatile int64_t t89 = -6LL;

    t89 = ((x417+x418)-(x419/x420));

    if (t89 != -9223372036799299775LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x425 = INT16_MAX;
	static uint64_t x426 = 1578394614000LLU;
	int16_t x427 = INT16_MAX;
	uint32_t x428 = 6U;

    t90 = ((x425+x426)-(x427/x428));

    if (t90 != 1578394641306LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x433 = -19;
	int8_t x434 = -1;
	int32_t x436 = -6653229;
	volatile uint32_t t91 = 3814U;

    t91 = ((x433+x434)-(x435/x436));

    if (t91 != 4294967275U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x437 = INT32_MAX;
	static int32_t x439 = INT32_MIN;
	volatile uint64_t x440 = 5659883835925076LLU;
	volatile uint64_t t92 = 162110767019883LLU;

    t92 = ((x437+x438)-(x439/x440));

    if (t92 != 2147480387LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x441 = -1;
	volatile uint16_t x442 = 102U;
	int8_t x443 = INT8_MAX;

    t93 = ((x441+x442)-(x443/x444));

    if (t93 != 101) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x445 = 1324U;
	int8_t x446 = INT8_MIN;
	uint64_t x447 = 2000LLU;
	volatile int16_t x448 = -1;
	volatile uint64_t t94 = 484175LLU;

    t94 = ((x445+x446)-(x447/x448));

    if (t94 != 1196LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	int16_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	static uint8_t x452 = 29U;

    t95 = ((x449+x450)-(x451/x452));

    if (t95 != -2005) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint8_t x455 = 14U;
	int64_t x456 = 1055341787042958LL;

    t96 = ((x453+x454)-(x455/x456));

    if (t96 != -32513LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x458 = INT64_MIN;
	uint32_t x459 = 2332675U;
	volatile int64_t t97 = -65829466LL;

    t97 = ((x457+x458)-(x459/x460));

    if (t97 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x461 = 85659934710807LL;
	volatile int64_t x463 = -1LL;
	uint64_t x464 = 1160085323448498LLU;
	uint64_t t98 = 9192407363252894LLU;

    t98 = ((x461+x462)-(x463/x464));

    if (t98 != 85688533885138LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x469 = INT8_MIN;
	static int8_t x470 = -8;
	static uint16_t x471 = 2933U;
	volatile int32_t t99 = -24010982;

    t99 = ((x469+x470)-(x471/x472));

    if (t99 != -115) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x473 = INT64_MAX;
	int16_t x474 = -1;
	int32_t x475 = -1;
	volatile uint16_t x476 = 5242U;
	static int64_t t100 = 29LL;

    t100 = ((x473+x474)-(x475/x476));

    if (t100 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x477 = 233455LL;
	int8_t x478 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	uint64_t t101 = 7639LLU;

    t101 = ((x477+x478)-(x479/x480));

    if (t101 != 233326LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x482 = 2U;
	volatile uint64_t x484 = UINT64_MAX;

    t102 = ((x481+x482)-(x483/x484));

    if (t102 != 4704915005038LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x485 = -1;
	uint32_t x486 = 11001889U;
	int8_t x487 = INT8_MIN;
	volatile int64_t x488 = -2144272337067165LL;
	int64_t t103 = -260552211169908LL;

    t103 = ((x485+x486)-(x487/x488));

    if (t103 != 11001888LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = 56;
	uint16_t x492 = 133U;

    t104 = ((x489+x490)-(x491/x492));

    if (t104 != -72) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x493 = 99U;
	static int32_t x494 = 19810;
	int32_t x495 = INT32_MIN;
	int64_t x496 = -1LL;
	int64_t t105 = -3248639418556LL;

    t105 = ((x493+x494)-(x495/x496));

    if (t105 != -2147463739LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x497 = INT32_MAX;
	uint32_t x498 = 6U;
	int64_t x500 = INT64_MIN;
	static volatile int64_t t106 = -1063958967LL;

    t106 = ((x497+x498)-(x499/x500));

    if (t106 != 2147483653LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x502 = INT64_MIN;
	uint32_t x503 = UINT32_MAX;
	int16_t x504 = INT16_MIN;

    t107 = ((x501+x502)-(x503/x504));

    if (t107 != 11133920791996263318LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x505 = UINT32_MAX;
	static int8_t x506 = -1;
	volatile int16_t x507 = 7;
	int64_t x508 = INT64_MAX;
	static int64_t t108 = 3983954956373LL;

    t108 = ((x505+x506)-(x507/x508));

    if (t108 != 4294967294LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x509 = 4291205374020LLU;
	int32_t x511 = -1;
	volatile uint64_t t109 = 384484881459LLU;

    t109 = ((x509+x510)-(x511/x512));

    if (t109 != 61105371305159612LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x513 = 14U;
	uint32_t x514 = UINT32_MAX;
	static volatile int64_t x515 = 969262543534LL;
	volatile uint32_t x516 = 20U;
	volatile int64_t t110 = -1770LL;

    t110 = ((x513+x514)-(x515/x516));

    if (t110 != -48463127163LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x522 = 11;
	uint8_t x523 = UINT8_MAX;
	int16_t x524 = INT16_MAX;
	int32_t t111 = 3314468;

    t111 = ((x521+x522)-(x523/x524));

    if (t111 != 10) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x525 = 7181U;
	int8_t x526 = INT8_MIN;
	uint16_t x527 = 4U;
	int64_t x528 = INT64_MAX;
	int64_t t112 = 655662529954LL;

    t112 = ((x525+x526)-(x527/x528));

    if (t112 != 7053LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x537 = INT16_MAX;
	int64_t x538 = -1LL;
	int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MAX;
	static int64_t t113 = -108976980067LL;

    t113 = ((x537+x538)-(x539/x540));

    if (t113 != 32767LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x541 = 1396954688665033137LLU;
	int16_t x542 = INT16_MIN;
	static int64_t x543 = INT64_MAX;
	uint16_t x544 = 6305U;
	volatile uint64_t t114 = 1018707362505398LLU;

    t114 = ((x541+x542)-(x543/x544));

    if (t114 != 1395491822362565036LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x545 = INT32_MIN;
	uint8_t x546 = 10U;
	int16_t x547 = INT16_MAX;
	int32_t t115 = -583;

    t115 = ((x545+x546)-(x547/x548));

    if (t115 != -2147483638) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x549 = INT16_MIN;
	uint16_t x550 = UINT16_MAX;
	uint16_t x551 = 84U;
	volatile int64_t x552 = -1LL;
	static volatile int64_t t116 = -12913870164LL;

    t116 = ((x549+x550)-(x551/x552));

    if (t116 != 32851LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x558 = INT16_MAX;
	volatile int64_t x559 = INT64_MIN;
	uint64_t x560 = UINT64_MAX;

    t117 = ((x557+x558)-(x559/x560));

    if (t117 != 98302LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x562 = INT32_MIN;
	static int64_t x563 = -182509655422076345LL;
	static int64_t x564 = -1LL;
	static uint64_t t118 = 795241504534407LLU;

    t118 = ((x561+x562)-(x563/x564));

    if (t118 != 18264234416161141701LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x565 = 383U;
	static uint64_t x566 = 471LLU;
	int16_t x567 = -63;
	static int8_t x568 = -1;
	uint64_t t119 = 7337898139590263LLU;

    t119 = ((x565+x566)-(x567/x568));

    if (t119 != 791LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MAX;
	volatile uint32_t x576 = UINT32_MAX;
	uint32_t t120 = 13564663U;

    t120 = ((x573+x574)-(x575/x576));

    if (t120 != 4294934655U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x577 = -1;
	static uint64_t x578 = 202530604160LLU;
	uint64_t t121 = 16558215326LLU;

    t121 = ((x577+x578)-(x579/x580));

    if (t121 != 202530604158LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x581 = 6011738810251093960LLU;
	uint16_t x583 = 14U;
	static volatile int16_t x584 = INT16_MAX;
	uint64_t t122 = 17072LLU;

    t122 = ((x581+x582)-(x583/x584));

    if (t122 != 15235110847105869767LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x586 = INT32_MIN;
	int16_t x587 = INT16_MIN;
	static volatile int16_t x588 = 8;

    t123 = ((x585+x586)-(x587/x588));

    if (t123 != -2147479551) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x590 = INT8_MIN;
	volatile int64_t x592 = INT64_MIN;
	static volatile int64_t t124 = -243598809LL;

    t124 = ((x589+x590)-(x591/x592));

    if (t124 != -32896LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x597 = -29729233LL;
	volatile int8_t x598 = -1;
	int16_t x599 = INT16_MIN;
	volatile int16_t x600 = INT16_MIN;
	int64_t t125 = 384LL;

    t125 = ((x597+x598)-(x599/x600));

    if (t125 != -29729235LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x601 = 7U;
	int32_t x603 = -15322;

    t126 = ((x601+x602)-(x603/x604));

    if (t126 != 134LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x613 = 15U;
	int8_t x615 = 15;
	int64_t t127 = -1LL;

    t127 = ((x613+x614)-(x615/x616));

    if (t127 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x621 = 3902U;
	static int64_t x622 = INT64_MIN;
	int8_t x623 = 1;
	static int16_t x624 = -1;

    t128 = ((x621+x622)-(x623/x624));

    if (t128 != -9223372036854771905LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x625 = INT64_MIN;
	volatile uint32_t x626 = 66547U;
	uint16_t x627 = UINT16_MAX;
	int64_t x628 = INT64_MAX;
	volatile int64_t t129 = 10409858553488LL;

    t129 = ((x625+x626)-(x627/x628));

    if (t129 != -9223372036854709261LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x633 = INT64_MAX;
	uint64_t x634 = UINT64_MAX;
	int16_t x635 = -12;
	volatile uint64_t t130 = 430618361LLU;

    t130 = ((x633+x634)-(x635/x636));

    if (t130 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x637 = -11305;
	int32_t x638 = -1883;
	static int64_t x639 = INT64_MIN;
	int64_t x640 = INT64_MIN;
	int64_t t131 = 3208042630058LL;

    t131 = ((x637+x638)-(x639/x640));

    if (t131 != -13189LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x647 = 6584U;

    t132 = ((x645+x646)-(x647/x648));

    if (t132 != -2147483418) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x657 = 3757U;
	int8_t x658 = 5;
	uint32_t x659 = UINT32_MAX;
	volatile uint32_t t133 = 892971U;

    t133 = ((x657+x658)-(x659/x660));

    if (t133 != 4261152418U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x664 = -1LL;
	static int64_t t134 = 1LL;

    t134 = ((x661+x662)-(x663/x664));

    if (t134 != 8LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x665 = 3U;
	volatile int32_t x667 = 0;
	static int32_t x668 = 36;
	int64_t t135 = 926767704LL;

    t135 = ((x665+x666)-(x667/x668));

    if (t135 != 1738165LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x670 = 26U;
	int64_t x671 = -1LL;
	int64_t x672 = -1LL;

    t136 = ((x669+x670)-(x671/x672));

    if (t136 != 92878713437600LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x673 = UINT32_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MAX;
	uint64_t t137 = 85LLU;

    t137 = ((x673+x674)-(x675/x676));

    if (t137 != 72624980963115135LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x677 = 14U;
	static uint32_t x678 = UINT32_MAX;
	static volatile uint32_t x679 = UINT32_MAX;
	static uint32_t t138 = 373372443U;

    t138 = ((x677+x678)-(x679/x680));

    if (t138 != 12U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x681 = INT8_MAX;
	int8_t x684 = INT8_MAX;
	static volatile uint32_t t139 = 445979U;

    t139 = ((x681+x682)-(x683/x684));

    if (t139 != 126U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x685 = -3;
	uint8_t x686 = 106U;
	static uint32_t x687 = 31673086U;
	int32_t x688 = -21176;
	uint32_t t140 = 1U;

    t140 = ((x685+x686)-(x687/x688));

    if (t140 != 103U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x689 = UINT32_MAX;
	int8_t x690 = 1;
	int64_t x691 = -3986866929LL;
	uint64_t x692 = UINT64_MAX;
	volatile uint64_t t141 = 25LLU;

    t141 = ((x689+x690)-(x691/x692));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x693 = INT64_MIN;
	volatile uint32_t x694 = 363866U;
	int64_t x696 = -1LL;

    t142 = ((x693+x694)-(x695/x696));

    if (t142 != -9223372036854379175LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x697 = 47811211677689LLU;
	static int32_t x698 = -1;
	uint64_t x699 = UINT64_MAX;
	uint64_t t143 = 139993760597741078LLU;

    t143 = ((x697+x698)-(x699/x700));

    if (t143 != 18446731854903937251LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x701 = -1LL;
	uint32_t x702 = 32507137U;
	uint16_t x703 = UINT16_MAX;
	static volatile int64_t x704 = -1LL;
	int64_t t144 = 16LL;

    t144 = ((x701+x702)-(x703/x704));

    if (t144 != 32572671LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x705 = 239315064934873484LLU;
	uint16_t x706 = 10U;
	volatile int64_t x707 = -2046549814087553LL;
	static uint16_t x708 = UINT16_MAX;
	uint64_t t145 = 1110731905977189LLU;

    t145 = ((x705+x706)-(x707/x708));

    if (t145 != 239315096163221919LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x714 = -39;
	uint16_t x715 = 484U;
	int8_t x716 = INT8_MIN;
	int32_t t146 = 682774;

    t146 = ((x713+x714)-(x715/x716));

    if (t146 != 486) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x717 = INT16_MAX;
	volatile int16_t x718 = INT16_MAX;
	int16_t x719 = INT16_MAX;
	int8_t x720 = INT8_MAX;
	volatile int32_t t147 = -1;

    t147 = ((x717+x718)-(x719/x720));

    if (t147 != 65276) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x722 = 45U;
	int16_t x724 = INT16_MIN;
	volatile uint32_t t148 = 17423U;

    t148 = ((x721+x722)-(x723/x724));

    if (t148 != 44U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x725 = INT32_MIN;
	uint64_t x726 = 984LLU;
	static int16_t x727 = -50;
	static volatile uint32_t x728 = UINT32_MAX;

    t149 = ((x725+x726)-(x727/x728));

    if (t149 != 18446744071562068952LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x733 = 0;
	int32_t x734 = INT32_MIN;
	static volatile int32_t x736 = 2338015;
	int32_t t150 = INT32_MIN;

    t150 = ((x733+x734)-(x735/x736));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x738 = -33;
	volatile uint16_t x739 = 2254U;
	volatile int16_t x740 = INT16_MIN;
	volatile int32_t t151 = 8121;

    t151 = ((x737+x738)-(x739/x740));

    if (t151 != 94) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x747 = UINT8_MAX;
	uint8_t x748 = 29U;
	static uint64_t t152 = 268490007LLU;

    t152 = ((x745+x746)-(x747/x748));

    if (t152 != 18446744071562067959LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x750 = INT8_MIN;
	int16_t x751 = INT16_MIN;
	static int64_t x752 = -1LL;
	volatile uint64_t t153 = 7LLU;

    t153 = ((x749+x750)-(x751/x752));

    if (t153 != 18446744073709518719LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x753 = INT32_MAX;
	static int16_t x754 = -1;
	uint8_t x755 = 0U;
	int8_t x756 = INT8_MIN;
	int32_t t154 = 1805;

    t154 = ((x753+x754)-(x755/x756));

    if (t154 != 2147483646) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x757 = INT16_MAX;
	volatile int32_t x758 = INT32_MIN;
	volatile int32_t x759 = INT32_MIN;
	int64_t x760 = INT64_MIN;
	int64_t t155 = 458368LL;

    t155 = ((x757+x758)-(x759/x760));

    if (t155 != -2147450881LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x761 = INT64_MIN;
	uint8_t x762 = UINT8_MAX;
	int8_t x763 = INT8_MIN;
	int32_t x764 = INT32_MIN;

    t156 = ((x761+x762)-(x763/x764));

    if (t156 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x765 = 498701230U;
	volatile int32_t x766 = -42;
	uint32_t x767 = UINT32_MAX;
	volatile int8_t x768 = -1;
	uint32_t t157 = 112111527U;

    t157 = ((x765+x766)-(x767/x768));

    if (t157 != 498701187U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x769 = 5858774072825LL;
	int64_t x771 = 751822LL;
	volatile uint32_t x772 = 22505308U;

    t158 = ((x769+x770)-(x771/x772));

    if (t158 != 5858774072777LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x773 = 491132LLU;
	volatile uint8_t x774 = UINT8_MAX;
	uint32_t x775 = UINT32_MAX;
	volatile int64_t x776 = INT64_MAX;

    t159 = ((x773+x774)-(x775/x776));

    if (t159 != 491387LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x777 = 5;
	uint8_t x778 = UINT8_MAX;
	int32_t t160 = 9991;

    t160 = ((x777+x778)-(x779/x780));

    if (t160 != 1436110) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x781 = -1;
	uint8_t x782 = 16U;
	static int64_t x783 = 319193408LL;

    t161 = ((x781+x782)-(x783/x784));

    if (t161 != -319193393LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x785 = 6528865986LLU;
	int8_t x786 = INT8_MIN;
	int8_t x787 = -1;
	int8_t x788 = 60;
	uint64_t t162 = 10034646476940LLU;

    t162 = ((x785+x786)-(x787/x788));

    if (t162 != 6528865858LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x789 = 7815;
	int8_t x790 = -1;
	int8_t x791 = INT8_MIN;
	int8_t x792 = -1;
	volatile int32_t t163 = 13;

    t163 = ((x789+x790)-(x791/x792));

    if (t163 != 7686) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x793 = INT8_MAX;
	int8_t x794 = -22;
	int64_t x795 = INT64_MIN;
	uint8_t x796 = 8U;
	volatile int64_t t164 = 1568588563LL;

    t164 = ((x793+x794)-(x795/x796));

    if (t164 != 1152921504606847081LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x809 = 191U;
	volatile int64_t x810 = -136LL;
	int64_t x811 = -20LL;
	int16_t x812 = INT16_MAX;
	int64_t t165 = 1256664952612073LL;

    t165 = ((x809+x810)-(x811/x812));

    if (t165 != 55LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x813 = 7U;
	volatile int64_t x814 = -10137155373LL;
	static volatile uint32_t x816 = 698137U;

    t166 = ((x813+x814)-(x815/x816));

    if (t166 != -10137158442LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x826 = -14;
	int32_t x828 = -22272975;
	volatile int32_t t167 = -225;

    t167 = ((x825+x826)-(x827/x828));

    if (t167 != -142) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x829 = 9LL;
	uint64_t x830 = 1400356145300024LLU;
	int8_t x831 = -1;
	volatile int8_t x832 = INT8_MIN;
	static uint64_t t168 = 13104969LLU;

    t168 = ((x829+x830)-(x831/x832));

    if (t168 != 1400356145300033LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x833 = -15;
	int32_t x834 = 229394;
	volatile int16_t x836 = INT16_MIN;

    t169 = ((x833+x834)-(x835/x836));

    if (t169 != 229379U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x837 = 94U;
	static volatile int32_t x838 = -1;
	int64_t x839 = INT64_MAX;
	int64_t t170 = 6854LL;

    t170 = ((x837+x838)-(x839/x840));

    if (t170 != 72057594037928028LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x841 = INT32_MIN;
	int64_t x843 = INT64_MIN;
	uint32_t x844 = 6136660U;

    t171 = ((x841+x842)-(x843/x844));

    if (t171 != 1500847962875LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x845 = -1;
	int16_t x846 = INT16_MIN;
	int32_t x847 = INT32_MIN;
	uint16_t x848 = UINT16_MAX;

    t172 = ((x845+x846)-(x847/x848));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x849 = INT32_MAX;
	int32_t x850 = INT32_MIN;
	int32_t x851 = INT32_MIN;
	static int64_t x852 = -1LL;
	volatile int64_t t173 = -898652895LL;

    t173 = ((x849+x850)-(x851/x852));

    if (t173 != -2147483649LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x853 = -2;
	static int64_t x854 = -1LL;
	int8_t x855 = -1;
	static int64_t t174 = 6168971LL;

    t174 = ((x853+x854)-(x855/x856));

    if (t174 != -4LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x857 = -1LL;
	int64_t x858 = -258789LL;
	volatile int64_t x859 = -19019037LL;
	uint16_t x860 = 321U;

    t175 = ((x857+x858)-(x859/x860));

    if (t175 != -199541LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x861 = 1951305LLU;
	int16_t x862 = -1;
	static int16_t x863 = 8025;
	volatile int64_t x864 = 5776670470579LL;
	volatile uint64_t t176 = 819436929LLU;

    t176 = ((x861+x862)-(x863/x864));

    if (t176 != 1951304LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x865 = -13;
	uint16_t x866 = 26U;
	static int64_t t177 = 701449753678586859LL;

    t177 = ((x865+x866)-(x867/x868));

    if (t177 != 13LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x869 = INT64_MIN;
	uint64_t x870 = 2LLU;
	static int16_t x871 = -1;
	static int64_t x872 = INT64_MIN;

    t178 = ((x869+x870)-(x871/x872));

    if (t178 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x877 = UINT16_MAX;
	int64_t x878 = INT64_MIN;
	volatile int64_t t179 = -63175096332LL;

    t179 = ((x877+x878)-(x879/x880));

    if (t179 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x881 = -1LL;
	int64_t x883 = INT64_MIN;
	volatile int16_t x884 = 10198;
	volatile int64_t t180 = -3650597658830694LL;

    t180 = ((x881+x882)-(x883/x884));

    if (t180 != 904429499593563LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x889 = 42U;
	int64_t x891 = -1LL;
	int32_t x892 = INT32_MAX;
	volatile int64_t t181 = -31LL;

    t181 = ((x889+x890)-(x891/x892));

    if (t181 != 55274LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x893 = INT8_MIN;
	int64_t x894 = 2LL;
	uint64_t x895 = UINT64_MAX;
	int32_t x896 = INT32_MIN;
	static uint64_t t182 = 24650LLU;

    t182 = ((x893+x894)-(x895/x896));

    if (t182 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x897 = INT32_MAX;
	volatile uint8_t x899 = 0U;
	volatile int8_t x900 = -1;

    t183 = ((x897+x898)-(x899/x900));

    if (t183 != 2147483646LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x902 = -8;
	int16_t x903 = -817;
	uint64_t x904 = 63382356432LLU;
	volatile uint64_t t184 = 312803980515LLU;

    t184 = ((x901+x902)-(x903/x904));

    if (t184 != 18446744073418512506LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x905 = -2;
	volatile int16_t x907 = INT16_MIN;
	volatile int32_t x908 = -4777;
	int64_t t185 = 36370098218LL;

    t185 = ((x905+x906)-(x907/x908));

    if (t185 != 32297446260835LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x913 = 57U;
	static int64_t x915 = INT64_MIN;
	int32_t x916 = INT32_MAX;
	uint64_t t186 = 2732929150LLU;

    t186 = ((x913+x914)-(x915/x916));

    if (t186 != 58848062191LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x917 = 11246610;
	uint32_t x918 = UINT32_MAX;
	int16_t x919 = INT16_MIN;
	uint64_t x920 = 44247LLU;
	volatile uint64_t t187 = 900531709LLU;

    t187 = ((x917+x918)-(x919/x920));

    if (t187 != 18446327169883844093LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x922 = -1;
	static volatile int8_t x923 = 18;
	volatile int32_t x924 = INT32_MIN;

    t188 = ((x921+x922)-(x923/x924));

    if (t188 != -9) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x925 = -1;
	volatile uint8_t x926 = 12U;
	uint64_t x927 = 649278442038343LLU;
	int32_t x928 = -1;
	uint64_t t189 = 1688428097025949600LLU;

    t189 = ((x925+x926)-(x927/x928));

    if (t189 != 11LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x933 = 3217U;
	int64_t x934 = 2LL;
	static uint8_t x935 = 5U;
	uint32_t x936 = UINT32_MAX;
	volatile int64_t t190 = 32227843086934LL;

    t190 = ((x933+x934)-(x935/x936));

    if (t190 != 3219LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x941 = INT16_MIN;
	static volatile uint64_t t191 = 150282870185966LLU;

    t191 = ((x941+x942)-(x943/x944));

    if (t191 != 18446462594437775358LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x945 = 40U;
	int32_t x946 = 1;
	volatile int32_t x947 = INT32_MIN;
	uint64_t x948 = 1742739LLU;
	static volatile uint64_t t192 = 899LLU;

    t192 = ((x945+x946)-(x947/x948));

    if (t192 != 18446733488794615134LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x949 = INT8_MIN;
	int8_t x951 = -1;
	uint32_t x952 = UINT32_MAX;
	int64_t t193 = -1850422133LL;

    t193 = ((x949+x950)-(x951/x952));

    if (t193 != -124LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x953 = -1;
	volatile uint64_t x955 = UINT64_MAX;
	uint16_t x956 = 486U;
	uint64_t t194 = 365714002783979LLU;

    t194 = ((x953+x954)-(x955/x956));

    if (t194 != 18408787810183400274LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x958 = -1LL;
	int32_t x960 = INT32_MIN;
	static volatile int64_t t195 = 126953433541014794LL;

    t195 = ((x957+x958)-(x959/x960));

    if (t195 != 218LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x961 = 0U;
	static uint16_t x962 = 7587U;
	uint16_t x963 = 13864U;
	int64_t x964 = -1528635LL;
	int64_t t196 = -334LL;

    t196 = ((x961+x962)-(x963/x964));

    if (t196 != 7587LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x965 = 16U;
	static volatile int16_t x967 = INT16_MIN;
	volatile int32_t x968 = INT32_MAX;

    t197 = ((x965+x966)-(x967/x968));

    if (t197 != 15U) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x969 = UINT8_MAX;
	int16_t x970 = -148;
	int64_t x972 = INT64_MIN;

    t198 = ((x969+x970)-(x971/x972));

    if (t198 != 107LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x974 = 1078;
	int8_t x975 = -16;
	uint32_t x976 = 483U;

    t199 = ((x973+x974)-(x975/x976));

    if (t199 != 2138592455U) { NG(); } else { ; }
	
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

