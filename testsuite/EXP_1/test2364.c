
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
int8_t x20 = -1;
volatile uint64_t x21 = UINT64_MAX;
int32_t x28 = -1;
volatile int32_t t8 = 1875;
int64_t x50 = 102LL;
volatile int64_t t10 = 75404LL;
int16_t x55 = INT16_MIN;
static int8_t x58 = -1;
static uint64_t x60 = UINT64_MAX;
int8_t x69 = INT8_MAX;
uint16_t x72 = 12002U;
uint64_t t17 = 15LLU;
int64_t x93 = INT64_MAX;
int16_t x98 = 698;
uint64_t t20 = 6086502806566873LLU;
volatile int64_t t21 = 841528948718297LL;
volatile uint64_t t22 = 207895862983155165LLU;
int32_t x113 = 1;
static int32_t x115 = -1;
int16_t x118 = INT16_MIN;
uint64_t x119 = 599358356678805LLU;
int8_t x121 = INT8_MAX;
volatile int64_t x123 = 2046305LL;
volatile uint64_t t26 = 13759992092LLU;
int8_t x128 = INT8_MIN;
uint8_t x135 = 7U;
volatile uint16_t x152 = UINT16_MAX;
static int32_t x155 = INT32_MIN;
static volatile int64_t t31 = -133126644842428LL;
uint8_t x168 = 13U;
static int64_t t34 = 936566781677074LL;
int32_t t35 = INT32_MIN;
static volatile int8_t x174 = INT8_MAX;
static int16_t x179 = -844;
static int8_t x182 = -17;
int64_t x183 = 392410LL;
volatile int8_t x189 = INT8_MIN;
int32_t x192 = INT32_MIN;
volatile uint64_t x194 = UINT64_MAX;
volatile uint32_t x195 = UINT32_MAX;
volatile int16_t x197 = INT16_MIN;
uint16_t x203 = 0U;
uint64_t x204 = UINT64_MAX;
static int8_t x206 = -1;
int32_t x224 = INT32_MIN;
volatile int8_t x228 = -12;
int64_t t47 = -285952815014811279LL;
static int32_t x250 = INT32_MIN;
static int8_t x255 = INT8_MIN;
int32_t x258 = INT32_MIN;
static uint8_t x262 = 0U;
volatile uint8_t x265 = 8U;
int32_t x267 = INT32_MIN;
uint32_t x270 = UINT32_MAX;
int64_t x275 = 237LL;
static uint64_t x277 = UINT64_MAX;
static uint8_t x278 = UINT8_MAX;
uint64_t t58 = 3865261LLU;
volatile uint8_t x294 = UINT8_MAX;
static int64_t x301 = -95594325477105LL;
static uint8_t x303 = 47U;
uint64_t x305 = UINT64_MAX;
int32_t x306 = 393963159;
volatile int16_t x316 = 1;
volatile uint64_t t65 = 4914598524LLU;
int16_t x317 = INT16_MIN;
volatile int32_t t66 = 9;
int32_t x323 = -1;
static volatile int8_t x329 = INT8_MIN;
int16_t x330 = 1;
uint8_t x339 = 2U;
int16_t x343 = -1;
uint8_t x347 = 31U;
volatile int64_t t73 = -1LL;
int16_t x350 = 1252;
int32_t x351 = -4;
uint32_t x357 = UINT32_MAX;
uint8_t x360 = UINT8_MAX;
int32_t x362 = INT32_MIN;
int64_t t77 = -124299762441LL;
uint32_t x370 = 235895U;
int32_t x371 = -1;
uint64_t x380 = UINT64_MAX;
static int64_t x383 = -635145913LL;
int64_t t82 = -8610271599414281LL;
int8_t x385 = INT8_MIN;
static int8_t x387 = -1;
uint64_t t84 = 2487158850763LLU;
int64_t x395 = -1LL;
int64_t x396 = -1LL;
static int8_t x404 = INT8_MIN;
volatile uint32_t t87 = 35981U;
uint8_t x412 = 4U;
uint8_t x417 = UINT8_MAX;
int32_t t92 = 6398;
static int64_t x425 = -6146LL;
int8_t x430 = -1;
int64_t x431 = 196237924092096LL;
int16_t x440 = 1814;
static int32_t t96 = -7601012;
volatile uint32_t x444 = UINT32_MAX;
uint16_t x445 = 69U;
volatile int16_t x446 = 30;
uint16_t x452 = 3U;
volatile uint64_t t99 = 88749732LLU;
static int32_t x458 = INT32_MIN;
static uint32_t t101 = 3563U;
volatile int8_t x468 = 1;
static int64_t x471 = -1LL;
static int32_t x472 = INT32_MIN;
int16_t x473 = -1;
int16_t x477 = INT16_MIN;
static int32_t x480 = -1;
uint64_t t107 = 59734786LLU;
int16_t x488 = INT16_MIN;
int32_t t108 = 9954322;
static uint8_t x489 = 0U;
int16_t x492 = INT16_MAX;
int32_t t109 = 636794201;
uint16_t x506 = UINT16_MAX;
int64_t x508 = -1LL;
static volatile uint64_t x509 = 133126521641754818LLU;
uint64_t x513 = UINT64_MAX;
volatile uint64_t t117 = 466018088LLU;
int32_t x528 = -363758;
int16_t x529 = 14282;
int64_t t121 = 23720845LL;
int8_t x550 = -23;
int8_t x555 = -1;
int64_t x561 = 124493525767LL;
static int32_t x562 = INT32_MIN;
int16_t x565 = INT16_MAX;
uint8_t x575 = 8U;
uint32_t x576 = 5555U;
int8_t x581 = 2;
static int8_t x590 = INT8_MIN;
uint16_t x594 = 2705U;
static int16_t x595 = INT16_MIN;
volatile int32_t t135 = 53255;
volatile int8_t x603 = INT8_MAX;
int16_t x611 = INT16_MIN;
int8_t x616 = 1;
static int16_t x624 = -15227;
uint16_t x625 = 3998U;
static volatile uint64_t x630 = 16629869836057101LLU;
static volatile uint64_t x639 = 10298838275538LLU;
volatile uint64_t t145 = 3LLU;
volatile int16_t x645 = INT16_MAX;
int32_t x651 = -2640685;
volatile int32_t x653 = -1;
int64_t t149 = 3098789618LL;
int16_t x657 = INT16_MIN;
int8_t x663 = 22;
volatile int64_t t151 = -11LL;
static volatile int32_t x670 = -6273;
int32_t t153 = -43044720;
uint32_t x688 = UINT32_MAX;
int32_t t157 = 3;
int64_t x694 = 2115228139092LL;
int64_t x701 = INT64_MIN;
int16_t x708 = -1;
static volatile uint8_t x720 = 0U;
int16_t x724 = INT16_MIN;
int64_t x732 = 471878986830269318LL;
volatile uint32_t x733 = 28137872U;
volatile uint8_t x734 = 14U;
uint64_t t166 = 1270983066883441776LLU;
static int64_t t173 = 1LL;
int32_t x767 = -1;
static int8_t x781 = INT8_MIN;
int8_t x784 = INT8_MAX;
uint64_t x787 = 23712060502262LLU;
int32_t x788 = -1;
static uint64_t x798 = UINT64_MAX;
volatile uint64_t x799 = 121259761940186769LLU;
uint32_t x805 = UINT32_MAX;
uint16_t x810 = 2064U;
int8_t x811 = INT8_MIN;
int16_t x815 = INT16_MAX;
uint64_t x820 = UINT64_MAX;
uint64_t t187 = 455465572LLU;
int16_t x849 = -5;
static uint32_t x850 = 27067U;
volatile int64_t x853 = -1747240156506259156LL;
volatile int64_t t196 = 3555209271605LL;
int64_t t197 = INT64_MIN;
volatile int16_t x861 = INT16_MIN;
static volatile int8_t x862 = 10;
int16_t x866 = 1552;
uint64_t x868 = 1495796462LLU;


void f0(void) {
    	uint16_t x1 = 373U;
	int32_t x2 = INT32_MIN;
	uint8_t x3 = 55U;
	int32_t t0 = INT32_MIN;

    t0 = (((x1|x2)+x3)&x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = UINT64_MAX;
	uint16_t x10 = 54U;
	uint8_t x11 = 127U;
	static int32_t x12 = -1;
	uint64_t t1 = 86383LLU;

    t1 = (((x9|x10)+x11)&x12);

    if (t1 != 126LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = INT8_MIN;
	int8_t x14 = 0;
	volatile uint16_t x15 = 187U;
	static int16_t x16 = 816;
	volatile int32_t t2 = 6660;

    t2 = (((x13|x14)+x15)&x16);

    if (t2 != 48) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	static int32_t x18 = -1;
	int16_t x19 = INT16_MIN;
	volatile int32_t t3 = 792001;

    t3 = (((x17|x18)+x19)&x20);

    if (t3 != -32769) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x22 = 2362U;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = 0;
	uint64_t t4 = 109621990852844340LLU;

    t4 = (((x21|x22)+x23)&x24);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = 562854894667835237LL;
	volatile uint8_t x27 = 10U;
	volatile int64_t t5 = -120950LL;

    t5 = (((x25|x26)+x27)&x28);

    if (t5 != 562854897205116937LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x29 = UINT8_MAX;
	int16_t x30 = -1;
	volatile int8_t x31 = INT8_MAX;
	volatile uint64_t x32 = 121497224LLU;
	static volatile uint64_t t6 = 6998384426617185LLU;

    t6 = (((x29|x30)+x31)&x32);

    if (t6 != 8LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = INT8_MIN;
	static uint64_t x38 = UINT64_MAX;
	static volatile uint8_t x39 = 6U;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t7 = 70689263964000356LLU;

    t7 = (((x37|x38)+x39)&x40);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 63U;
	uint8_t x42 = 1U;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;

    t8 = (((x41|x42)+x43)&x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = -1;
	uint64_t x46 = 7654265340063LLU;
	int32_t x47 = -1;
	int16_t x48 = 13727;
	volatile uint64_t t9 = 49203899774692786LLU;

    t9 = (((x45|x46)+x47)&x48);

    if (t9 != 13726LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	uint8_t x51 = 3U;
	int8_t x52 = -18;

    t10 = (((x49|x50)+x51)&x52);

    if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = -1952;
	uint8_t x54 = 70U;
	int64_t x56 = -1LL;
	static int64_t t11 = 118LL;

    t11 = (((x53|x54)+x55)&x56);

    if (t11 != -34714LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = 111;
	uint16_t x59 = 0U;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (((x57|x58)+x59)&x60);

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x61 = 30U;
	int64_t x62 = INT64_MIN;
	int16_t x63 = -25;
	volatile uint64_t x64 = 4104261282733064989LLU;
	static volatile uint64_t t13 = 273857109827363LLU;

    t13 = (((x61|x62)+x63)&x64);

    if (t13 != 5LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 98371242790LLU;
	static uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MIN;
	volatile uint64_t t14 = 0LLU;

    t14 = (((x65|x66)+x67)&x68);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x70 = INT64_MIN;
	uint8_t x71 = UINT8_MAX;
	int64_t t15 = 734057913250808LL;

    t15 = (((x69|x70)+x71)&x72);

    if (t15 != 98LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x77 = -4070351397LL;
	static int8_t x78 = -2;
	int64_t x79 = INT64_MAX;
	volatile uint32_t x80 = 11U;
	volatile int64_t t16 = 171LL;

    t16 = (((x77|x78)+x79)&x80);

    if (t16 != 10LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = INT8_MIN;
	static int8_t x86 = INT8_MIN;
	uint16_t x87 = 0U;
	uint64_t x88 = 2123709LLU;

    t17 = (((x85|x86)+x87)&x88);

    if (t17 != 2123648LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	volatile int64_t x92 = -137801370986810LL;
	volatile int64_t t18 = -19566517LL;

    t18 = (((x89|x90)+x91)&x92);

    if (t18 != -137803518476288LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x94 = INT64_MIN;
	volatile int32_t x95 = INT32_MAX;
	int32_t x96 = -1;
	volatile int64_t t19 = -148283518LL;

    t19 = (((x93|x94)+x95)&x96);

    if (t19 != 2147483646LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x97 = INT16_MIN;
	int64_t x99 = -1LL;
	uint64_t x100 = 136243499193680LLU;

    t20 = (((x97|x98)+x99)&x100);

    if (t20 != 136243499171856LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = -1LL;
	static int64_t x103 = -1LL;
	uint8_t x104 = 0U;

    t21 = (((x101|x102)+x103)&x104);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = -1;
	uint64_t x106 = 148LLU;
	int8_t x107 = INT8_MAX;
	static int64_t x108 = INT64_MAX;

    t22 = (((x105|x106)+x107)&x108);

    if (t22 != 126LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x109 = -1;
	uint32_t x110 = 90766290U;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = 257U;
	volatile uint32_t t23 = 104U;

    t23 = (((x109|x110)+x111)&x112);

    if (t23 != 257U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x114 = -1;
	int64_t x116 = INT64_MIN;
	volatile int64_t t24 = INT64_MIN;

    t24 = (((x113|x114)+x115)&x116);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 2246U;
	static int64_t x120 = -1175064533782790LL;
	uint64_t t25 = 19866934955LLU;

    t25 = (((x117|x118)+x119)&x120);

    if (t25 != 564087949893722LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x122 = 1274LLU;
	int16_t x124 = INT16_MAX;

    t26 = (((x121|x122)+x123)&x124);

    if (t26 != 15968LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = 52536236534629696LLU;
	volatile uint64_t t27 = 146029LLU;

    t27 = (((x125|x126)+x127)&x128);

    if (t27 != 52536236534629632LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x133 = INT64_MIN;
	int64_t x134 = -1LL;
	int64_t x136 = INT64_MIN;
	static int64_t t28 = 7LL;

    t28 = (((x133|x134)+x135)&x136);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x137 = 6U;
	int16_t x138 = -1715;
	int16_t x139 = INT16_MAX;
	static volatile int16_t x140 = INT16_MIN;
	static volatile int32_t t29 = 64;

    t29 = (((x137|x138)+x139)&x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = -121472992068861LL;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 20129474LLU;
	uint64_t t30 = 13LLU;

    t30 = (((x149|x150)+x151)&x152);

    if (t30 != 57797LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = -1LL;
	int64_t x154 = -2332LL;
	int16_t x156 = INT16_MAX;

    t31 = (((x153|x154)+x155)&x156);

    if (t31 != 32767LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x157 = 302452555LL;
	static int32_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = INT32_MIN;
	static int64_t t32 = 133LL;

    t32 = (((x157|x158)+x159)&x160);

    if (t32 != 2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x161 = 0U;
	uint64_t x162 = 13201558549130LLU;
	static int64_t x163 = INT64_MIN;
	volatile int32_t x164 = INT32_MIN;
	uint64_t t33 = 2166575282292781LLU;

    t33 = (((x161|x162)+x163)&x164);

    if (t33 != 9223385237436760064LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = INT64_MAX;
	int8_t x166 = -1;
	uint8_t x167 = 11U;

    t34 = (((x165|x166)+x167)&x168);

    if (t34 != 8LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = -1;
	int32_t x170 = 2;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t x172 = INT32_MIN;

    t35 = (((x169|x170)+x171)&x172);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x173 = 1977U;
	uint8_t x175 = 22U;
	static volatile int16_t x176 = -1;
	volatile int32_t t36 = 7;

    t36 = (((x173|x174)+x175)&x176);

    if (t36 != 2069) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x177 = -1;
	uint8_t x178 = 3U;
	int16_t x180 = INT16_MAX;
	volatile int32_t t37 = -2931104;

    t37 = (((x177|x178)+x179)&x180);

    if (t37 != 31923) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x181 = -50343946;
	volatile int16_t x184 = INT16_MIN;
	volatile int64_t t38 = 412516387187LL;

    t38 = (((x181|x182)+x183)&x184);

    if (t38 != 360448LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x190 = -1;
	uint16_t x191 = 8751U;
	int32_t t39 = 493;

    t39 = (((x189|x190)+x191)&x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x193 = INT32_MIN;
	static int8_t x196 = -1;
	uint64_t t40 = 65LLU;

    t40 = (((x193|x194)+x195)&x196);

    if (t40 != 4294967294LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x198 = UINT32_MAX;
	int64_t x199 = 235LL;
	int64_t x200 = -234187166163836693LL;
	volatile int64_t t41 = 5936806026251849LL;

    t41 = (((x197|x198)+x199)&x200);

    if (t41 != 4294967530LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MIN;
	static volatile uint64_t t42 = 5LLU;

    t42 = (((x201|x202)+x203)&x204);

    if (t42 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -2LL;
	int64_t x207 = -3844991LL;
	static int32_t x208 = INT32_MIN;
	volatile int64_t t43 = -19487303935LL;

    t43 = (((x205|x206)+x207)&x208);

    if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x209 = -92948905;
	int8_t x210 = 15;
	static int16_t x211 = INT16_MIN;
	static volatile int32_t x212 = INT32_MAX;
	int32_t t44 = 469234;

    t44 = (((x209|x210)+x211)&x212);

    if (t44 != 2054501983) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x213 = 186U;
	int32_t x214 = INT32_MIN;
	static uint64_t x215 = 21LLU;
	int16_t x216 = INT16_MAX;
	volatile uint64_t t45 = 1388462635LLU;

    t45 = (((x213|x214)+x215)&x216);

    if (t45 != 207LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	static uint32_t x222 = 3427U;
	static int16_t x223 = INT16_MIN;
	uint32_t t46 = 217277031U;

    t46 = (((x221|x222)+x223)&x224);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = 1526U;
	static int64_t x226 = -1LL;
	volatile int16_t x227 = 5766;

    t47 = (((x225|x226)+x227)&x228);

    if (t47 != 5764LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x233 = UINT32_MAX;
	volatile int32_t x234 = INT32_MIN;
	int8_t x235 = 3;
	uint32_t x236 = UINT32_MAX;
	volatile uint32_t t48 = 2802454U;

    t48 = (((x233|x234)+x235)&x236);

    if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x237 = 938U;
	int64_t x238 = INT64_MIN;
	uint32_t x239 = UINT32_MAX;
	uint16_t x240 = UINT16_MAX;
	int64_t t49 = 217488343010965827LL;

    t49 = (((x237|x238)+x239)&x240);

    if (t49 != 937LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	uint64_t x246 = 72856139370LLU;
	volatile int64_t x247 = 7306791LL;
	volatile int16_t x248 = INT16_MAX;
	uint64_t t50 = 1564367482LLU;

    t50 = (((x245|x246)+x247)&x248);

    if (t50 != 32294LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x249 = 91LL;
	uint16_t x251 = 1U;
	int64_t x252 = -1LL;
	volatile int64_t t51 = -156079121152LL;

    t51 = (((x249|x250)+x251)&x252);

    if (t51 != -2147483556LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x253 = 0LL;
	int16_t x254 = 9974;
	static int16_t x256 = -895;
	int64_t t52 = -1035047733959121LL;

    t52 = (((x253|x254)+x255)&x256);

    if (t52 != 9216LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x257 = -1118701623LL;
	static int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

    t53 = (((x257|x258)+x259)&x260);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x261 = 591161U;
	uint32_t x263 = 1073794U;
	uint32_t x264 = 3U;
	uint32_t t54 = 1U;

    t54 = (((x261|x262)+x263)&x264);

    if (t54 != 3U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x266 = 27249U;
	uint8_t x268 = 5U;
	volatile uint32_t t55 = 17057U;

    t55 = (((x265|x266)+x267)&x268);

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = 1;
	uint32_t x271 = 285870U;
	int64_t x272 = INT64_MIN;
	volatile int64_t t56 = -6793428173895864LL;

    t56 = (((x269|x270)+x271)&x272);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint64_t x273 = 461LLU;
	uint8_t x274 = 87U;
	int64_t x276 = 448382275104590LL;
	volatile uint64_t t57 = 268059571826227LLU;

    t57 = (((x273|x274)+x275)&x276);

    if (t57 != 588LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x279 = -1;
	static int64_t x280 = INT64_MIN;

    t58 = (((x277|x278)+x279)&x280);

    if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x281 = 657858U;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	int64_t t59 = 223LL;

    t59 = (((x281|x282)+x283)&x284);

    if (t59 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x293 = -1145104;
	static int32_t x295 = -462218;
	static int64_t x296 = -1LL;
	int64_t t60 = 177761070102LL;

    t60 = (((x293|x294)+x295)&x296);

    if (t60 != -1607307LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = -24;
	int8_t x300 = 3;
	static volatile int32_t t61 = -4609918;

    t61 = (((x297|x298)+x299)&x300);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x302 = INT8_MIN;
	static int64_t x304 = INT64_MIN;
	int64_t t62 = INT64_MIN;

    t62 = (((x301|x302)+x303)&x304);

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x307 = INT8_MIN;
	static volatile uint16_t x308 = 206U;
	volatile uint64_t t63 = 13069395344363616LLU;

    t63 = (((x305|x306)+x307)&x308);

    if (t63 != 78LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x309 = 95U;
	int16_t x310 = -1;
	uint16_t x311 = 4029U;
	static uint8_t x312 = 3U;
	static volatile uint32_t t64 = 218738425U;

    t64 = (((x309|x310)+x311)&x312);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x313 = -1;
	int32_t x314 = INT32_MAX;
	uint64_t x315 = UINT64_MAX;

    t65 = (((x313|x314)+x315)&x316);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x318 = INT32_MIN;
	int32_t x319 = 1043;
	volatile int8_t x320 = INT8_MAX;

    t66 = (((x317|x318)+x319)&x320);

    if (t66 != 19) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x321 = -130198;
	volatile int16_t x322 = -1241;
	static int8_t x324 = -35;
	volatile int32_t t67 = -441385966;

    t67 = (((x321|x322)+x323)&x324);

    if (t67 != -1204) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x325 = 5U;
	uint16_t x326 = 11299U;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t68 = 3070572;

    t68 = (((x325|x326)+x327)&x328);

    if (t68 != 11175) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x331 = -1LL;
	static uint32_t x332 = UINT32_MAX;
	static int64_t t69 = -63723136779LL;

    t69 = (((x329|x330)+x331)&x332);

    if (t69 != 4294967168LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x333 = 8352012U;
	uint16_t x334 = 7U;
	int16_t x335 = INT16_MAX;
	static uint8_t x336 = 83U;
	uint32_t t70 = 350861U;

    t70 = (((x333|x334)+x335)&x336);

    if (t70 != 2U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x337 = 192U;
	volatile int8_t x338 = INT8_MIN;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t71 = 1109479U;

    t71 = (((x337|x338)+x339)&x340);

    if (t71 != 4294967234U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x341 = INT8_MAX;
	volatile int64_t x342 = INT64_MIN;
	int32_t x344 = 0;
	int64_t t72 = 40428LL;

    t72 = (((x341|x342)+x343)&x344);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x345 = INT8_MIN;
	int64_t x346 = 0LL;
	uint16_t x348 = 24774U;

    t73 = (((x345|x346)+x347)&x348);

    if (t73 != 24710LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x349 = UINT16_MAX;
	static uint16_t x352 = 902U;
	int32_t t74 = -85;

    t74 = (((x349|x350)+x351)&x352);

    if (t74 != 898) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x353 = 164U;
	int8_t x354 = -6;
	static int8_t x355 = INT8_MIN;
	uint8_t x356 = UINT8_MAX;
	uint32_t t75 = 144779144U;

    t75 = (((x353|x354)+x355)&x356);

    if (t75 != 126U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x358 = -1;
	int16_t x359 = -1346;
	uint32_t t76 = 811633689U;

    t76 = (((x357|x358)+x359)&x360);

    if (t76 != 189U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x361 = -1;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MAX;

    t77 = (((x361|x362)+x363)&x364);

    if (t77 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x365 = 62U;
	static uint16_t x366 = 18U;
	int8_t x367 = 0;
	volatile int8_t x368 = INT8_MIN;
	int32_t t78 = 28066;

    t78 = (((x365|x366)+x367)&x368);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = -2;
	static volatile int32_t x372 = INT32_MIN;
	volatile uint32_t t79 = 5U;

    t79 = (((x369|x370)+x371)&x372);

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MAX;
	static int16_t x375 = INT16_MAX;
	volatile int64_t x376 = 10LL;
	static volatile int64_t t80 = 9593521053403LL;

    t80 = (((x373|x374)+x375)&x376);

    if (t80 != 10LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x377 = INT64_MIN;
	int64_t x378 = -15587556458809476LL;
	static int8_t x379 = INT8_MIN;
	volatile uint64_t t81 = 60390462593LLU;

    t81 = (((x377|x378)+x379)&x380);

    if (t81 != 18431156517250742012LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = -1LL;
	int64_t x382 = 1433538075927LL;
	uint16_t x384 = UINT16_MAX;

    t82 = (((x381|x382)+x383)&x384);

    if (t82 != 28998LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x386 = UINT64_MAX;
	int16_t x388 = 11063;
	uint64_t t83 = 1506303203LLU;

    t83 = (((x385|x386)+x387)&x388);

    if (t83 != 11062LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x389 = 3548046LLU;
	int64_t x390 = -529710500878778101LL;
	uint64_t x391 = UINT64_MAX;
	volatile int16_t x392 = INT16_MAX;

    t84 = (((x389|x390)+x391)&x392);

    if (t84 != 9102LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = INT32_MAX;
	int16_t x394 = -15;
	static volatile int64_t t85 = 0LL;

    t85 = (((x393|x394)+x395)&x396);

    if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x397 = -31;
	static uint8_t x398 = UINT8_MAX;
	int32_t x399 = 71712639;
	int8_t x400 = INT8_MIN;
	volatile int32_t t86 = 266318834;

    t86 = (((x397|x398)+x399)&x400);

    if (t86 != 71712512) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x401 = INT8_MIN;
	uint32_t x402 = 7482409U;
	uint32_t x403 = 319114636U;

    t87 = (((x401|x402)+x403)&x404);

    if (t87 != 319114496U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x405 = 4608;
	uint64_t x406 = 244582735015775LLU;
	volatile int32_t x407 = -1;
	static int8_t x408 = INT8_MIN;
	uint64_t t88 = 1LLU;

    t88 = (((x405|x406)+x407)&x408);

    if (t88 != 244582735019776LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x409 = UINT64_MAX;
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = 44LL;
	static volatile uint64_t t89 = 46566422355369433LLU;

    t89 = (((x409|x410)+x411)&x412);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x413 = 268U;
	int64_t x414 = -59623716013LL;
	volatile uint64_t x415 = 24547132LLU;
	uint64_t x416 = 5626704458LLU;
	uint64_t t90 = 49109408LLU;

    t90 = (((x413|x414)+x415)&x416);

    if (t90 != 251695626LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x418 = -8;
	int32_t x419 = -265;
	uint8_t x420 = 32U;
	int32_t t91 = -2933;

    t91 = (((x417|x418)+x419)&x420);

    if (t91 != 32) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = 1;
	volatile uint8_t x422 = UINT8_MAX;
	int16_t x423 = 88;
	static int8_t x424 = -1;

    t92 = (((x421|x422)+x423)&x424);

    if (t92 != 343) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x426 = -288066392LL;
	static uint16_t x427 = 3734U;
	volatile int8_t x428 = 1;
	int64_t t93 = 7307LL;

    t93 = (((x425|x426)+x427)&x428);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = INT8_MIN;
	uint32_t x432 = 796U;
	static volatile int64_t t94 = 2800308467927078LL;

    t94 = (((x429|x430)+x431)&x432);

    if (t94 != 28LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = 218637529;
	uint16_t x434 = 0U;
	volatile uint8_t x435 = 47U;
	uint32_t x436 = 118114806U;
	volatile uint32_t t95 = 8000U;

    t95 = (((x433|x434)+x435)&x436);

    if (t95 != 84410624U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = -1;
	int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MAX;

    t96 = (((x437|x438)+x439)&x440);

    if (t96 != 1814) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x441 = 3U;
	static int64_t x442 = INT64_MIN;
	volatile int8_t x443 = 10;
	int64_t t97 = -1326946LL;

    t97 = (((x441|x442)+x443)&x444);

    if (t97 != 13LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x447 = -6;
	uint8_t x448 = 7U;
	int32_t t98 = -2829;

    t98 = (((x445|x446)+x447)&x448);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x449 = UINT64_MAX;
	static uint64_t x450 = UINT64_MAX;
	static uint16_t x451 = 261U;

    t99 = (((x449|x450)+x451)&x452);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x453 = INT8_MIN;
	int8_t x454 = -4;
	uint32_t x455 = UINT32_MAX;
	uint64_t x456 = 3303344LLU;
	volatile uint64_t t100 = 79390LLU;

    t100 = (((x453|x454)+x455)&x456);

    if (t100 != 3303344LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x457 = 145964U;
	uint16_t x459 = 31507U;
	volatile int8_t x460 = INT8_MIN;

    t101 = (((x457|x458)+x459)&x460);

    if (t101 != 2147661056U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x461 = -12;
	volatile uint64_t x462 = UINT64_MAX;
	int8_t x463 = 48;
	uint64_t x464 = 2185115386231681023LLU;
	volatile uint64_t t102 = 8960233417LLU;

    t102 = (((x461|x462)+x463)&x464);

    if (t102 != 47LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x465 = 15372U;
	int64_t x466 = -5247709LL;
	static int8_t x467 = -13;
	int64_t t103 = -703271LL;

    t103 = (((x465|x466)+x467)&x468);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x469 = UINT16_MAX;
	volatile int64_t x470 = INT64_MAX;
	int64_t t104 = 95702715LL;

    t104 = (((x469|x470)+x471)&x472);

    if (t104 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x474 = 3228142;
	int64_t x475 = -1LL;
	int8_t x476 = INT8_MIN;
	volatile int64_t t105 = -555358408897LL;

    t105 = (((x473|x474)+x475)&x476);

    if (t105 != -128LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x478 = INT8_MAX;
	uint16_t x479 = 1U;
	volatile int32_t t106 = -178993;

    t106 = (((x477|x478)+x479)&x480);

    if (t106 != -32640) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x481 = 2796U;
	volatile int8_t x482 = -5;
	uint64_t x483 = 8443759481357808LLU;
	volatile uint32_t x484 = 67U;

    t107 = (((x481|x482)+x483)&x484);

    if (t107 != 67LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x485 = -1;
	uint8_t x486 = UINT8_MAX;
	int8_t x487 = INT8_MIN;

    t108 = (((x485|x486)+x487)&x488);

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x490 = -47250085;
	int8_t x491 = -1;

    t109 = (((x489|x490)+x491)&x492);

    if (t109 != 1370) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x493 = 109737446969585LLU;
	volatile int32_t x494 = -6756562;
	uint32_t x495 = 1815U;
	int64_t x496 = INT64_MAX;
	volatile uint64_t t110 = 737LLU;

    t110 = (((x493|x494)+x495)&x496);

    if (t110 != 9223372036848221974LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x497 = INT32_MIN;
	int16_t x498 = INT16_MIN;
	uint8_t x499 = 1U;
	uint64_t x500 = 10070514973LLU;
	volatile uint64_t t111 = 608LLU;

    t111 = (((x497|x498)+x499)&x500);

    if (t111 != 10070491137LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x501 = 1;
	static volatile int32_t x502 = -1;
	uint64_t x503 = 126LLU;
	static volatile uint64_t x504 = 4LLU;
	volatile uint64_t t112 = 3239967341321670190LLU;

    t112 = (((x501|x502)+x503)&x504);

    if (t112 != 4LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x505 = 2U;
	uint32_t x507 = 256U;
	int64_t t113 = 451LL;

    t113 = (((x505|x506)+x507)&x508);

    if (t113 != 65791LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x510 = UINT32_MAX;
	volatile uint64_t x511 = UINT64_MAX;
	uint64_t x512 = 131LLU;
	static uint64_t t114 = 3LLU;

    t114 = (((x509|x510)+x511)&x512);

    if (t114 != 130LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x514 = UINT8_MAX;
	int16_t x515 = -1;
	static uint64_t x516 = 92513639329249LLU;
	volatile uint64_t t115 = 14LLU;

    t115 = (((x513|x514)+x515)&x516);

    if (t115 != 92513639329248LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x517 = UINT16_MAX;
	static volatile uint32_t x518 = 35310546U;
	int32_t x519 = INT32_MAX;
	int32_t x520 = 152436948;
	uint32_t t116 = 221555U;

    t116 = (((x517|x518)+x519)&x520);

    if (t116 != 1179860U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x521 = INT32_MIN;
	uint64_t x522 = 1672LLU;
	uint32_t x523 = 1U;
	uint16_t x524 = UINT16_MAX;

    t117 = (((x521|x522)+x523)&x524);

    if (t117 != 1673LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x525 = 2753500119839543516LLU;
	uint16_t x526 = 10022U;
	int64_t x527 = INT64_MIN;
	volatile uint64_t t118 = 7080LLU;

    t118 = (((x525|x526)+x527)&x528);

    if (t118 != 11976872156694328082LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x530 = INT64_MIN;
	volatile int16_t x531 = -1;
	static volatile int16_t x532 = INT16_MIN;
	static int64_t t119 = INT64_MIN;

    t119 = (((x529|x530)+x531)&x532);

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x533 = UINT32_MAX;
	int8_t x534 = INT8_MIN;
	uint32_t x535 = 3544673U;
	volatile int64_t x536 = -51LL;
	int64_t t120 = -63964LL;

    t120 = (((x533|x534)+x535)&x536);

    if (t120 != 3544640LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x541 = -1LL;
	int8_t x542 = INT8_MIN;
	int32_t x543 = 1061942028;
	int16_t x544 = INT16_MAX;

    t121 = (((x541|x542)+x543)&x544);

    if (t121 != 29451LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x545 = INT32_MAX;
	int16_t x546 = -1;
	uint16_t x547 = 207U;
	int64_t x548 = 118177LL;
	static volatile int64_t t122 = 4505646075941LL;

    t122 = (((x545|x546)+x547)&x548);

    if (t122 != 128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x549 = INT8_MAX;
	int8_t x551 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	static int32_t t123 = INT32_MIN;

    t123 = (((x549|x550)+x551)&x552);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x553 = 789592740768370LLU;
	int16_t x554 = INT16_MIN;
	volatile uint64_t x556 = 40068LLU;
	uint64_t t124 = 17974369605324225LLU;

    t124 = (((x553|x554)+x555)&x556);

    if (t124 != 34816LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x557 = 7861170LLU;
	int64_t x558 = INT64_MAX;
	int64_t x559 = -118907759381LL;
	uint16_t x560 = 8803U;
	volatile uint64_t t125 = 156308349238269LLU;

    t125 = (((x557|x558)+x559)&x560);

    if (t125 != 98LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x563 = -1;
	int8_t x564 = INT8_MIN;
	static volatile int64_t t126 = -14774430468LL;

    t126 = (((x561|x562)+x563)&x564);

    if (t126 != -60525824LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x566 = 2;
	int8_t x567 = INT8_MAX;
	int64_t x568 = INT64_MIN;
	volatile int64_t t127 = 35107727460213LL;

    t127 = (((x565|x566)+x567)&x568);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x569 = INT32_MAX;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = 0U;
	uint8_t x572 = 1U;
	int32_t t128 = -1;

    t128 = (((x569|x570)+x571)&x572);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x573 = INT64_MAX;
	static int64_t x574 = -1LL;
	int64_t t129 = -117480085701721732LL;

    t129 = (((x573|x574)+x575)&x576);

    if (t129 != 3LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x577 = UINT16_MAX;
	uint64_t x578 = 115036LLU;
	uint64_t x579 = 1919216792174973LLU;
	static int8_t x580 = INT8_MIN;
	volatile uint64_t t130 = 139853319754289LLU;

    t130 = (((x577|x578)+x579)&x580);

    if (t130 != 1919216792305920LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x582 = -1;
	static volatile int16_t x583 = -153;
	int32_t x584 = -1;
	int32_t t131 = -108987;

    t131 = (((x581|x582)+x583)&x584);

    if (t131 != -154) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x585 = 32U;
	volatile uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	volatile uint32_t t132 = 195747U;

    t132 = (((x585|x586)+x587)&x588);

    if (t132 != 4294967040U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x591 = -110716;
	static uint8_t x592 = 17U;
	int32_t t133 = 15671;

    t133 = (((x589|x590)+x591)&x592);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x593 = INT32_MAX;
	int16_t x596 = INT16_MIN;
	int32_t t134 = 0;

    t134 = (((x593|x594)+x595)&x596);

    if (t134 != 2147418112) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MIN;
	int32_t x599 = INT32_MAX;
	volatile int16_t x600 = -1;

    t135 = (((x597|x598)+x599)&x600);

    if (t135 != 2147450879) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x601 = INT32_MAX;
	volatile uint32_t x602 = 441610U;
	static int8_t x604 = INT8_MAX;
	uint32_t t136 = 27389545U;

    t136 = (((x601|x602)+x603)&x604);

    if (t136 != 126U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x605 = -1129408978696310916LL;
	volatile int16_t x606 = INT16_MIN;
	uint8_t x607 = 9U;
	int32_t x608 = INT32_MAX;
	int64_t t137 = -15028LL;

    t137 = (((x605|x606)+x607)&x608);

    if (t137 != 2147479429LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x609 = 20610590LLU;
	static int32_t x610 = INT32_MAX;
	int64_t x612 = -588LL;
	volatile uint64_t t138 = 1LLU;

    t138 = (((x609|x610)+x611)&x612);

    if (t138 != 2147450292LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x613 = 0;
	int32_t x614 = 2;
	volatile uint64_t x615 = 259836LLU;
	uint64_t t139 = 192201LLU;

    t139 = (((x613|x614)+x615)&x616);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x617 = INT64_MIN;
	uint16_t x618 = 508U;
	int8_t x619 = 31;
	volatile int64_t x620 = -48433LL;
	volatile int64_t t140 = -101497117397444LL;

    t140 = (((x617|x618)+x619)&x620);

    if (t140 != -9223372036854775285LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x621 = 0;
	uint32_t x622 = 3003264U;
	uint16_t x623 = 10803U;
	volatile uint32_t t141 = 1931411U;

    t141 = (((x621|x622)+x623)&x624);

    if (t141 != 2999425U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x626 = 76U;
	volatile int16_t x627 = -1;
	int16_t x628 = -1;
	int32_t t142 = 50;

    t142 = (((x625|x626)+x627)&x628);

    if (t142 != 4061) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x629 = 57U;
	static volatile int64_t x631 = -1LL;
	volatile int8_t x632 = INT8_MIN;
	volatile uint64_t t143 = 876699968231892916LLU;

    t143 = (((x629|x630)+x631)&x632);

    if (t143 != 16629869836057088LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x633 = 5U;
	volatile uint32_t x634 = 10392U;
	int8_t x635 = 24;
	int8_t x636 = -38;
	uint32_t t144 = 43214846U;

    t144 = (((x633|x634)+x635)&x636);

    if (t144 != 10384U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x637 = 577U;
	static int32_t x638 = INT32_MIN;
	static int64_t x640 = -1LL;

    t145 = (((x637|x638)+x639)&x640);

    if (t145 != 10300985759763LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x641 = INT8_MIN;
	static volatile int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	static uint8_t x644 = 3U;
	volatile int32_t t146 = -248562;

    t146 = (((x641|x642)+x643)&x644);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x646 = 102;
	static uint8_t x647 = 3U;
	volatile int32_t x648 = -1;
	int32_t t147 = 171452;

    t147 = (((x645|x646)+x647)&x648);

    if (t147 != 32770) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x649 = 1017LLU;
	static int16_t x650 = INT16_MIN;
	uint32_t x652 = 61U;
	volatile uint64_t t148 = 51705576LLU;

    t148 = (((x649|x650)+x651)&x652);

    if (t148 != 12LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x654 = 671864853U;
	volatile int64_t x655 = -200645091545LL;
	int64_t x656 = 902430LL;

    t149 = (((x653|x654)+x655)&x656);

    if (t149 != 836870LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x658 = INT8_MIN;
	uint16_t x659 = 14U;
	int64_t x660 = 52069600LL;
	int64_t t150 = 2LL;

    t150 = (((x657|x658)+x659)&x660);

    if (t150 != 52069504LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x661 = -1;
	int64_t x662 = -1LL;
	uint32_t x664 = UINT32_MAX;

    t151 = (((x661|x662)+x663)&x664);

    if (t151 != 21LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x665 = INT16_MIN;
	volatile uint16_t x666 = UINT16_MAX;
	int64_t x667 = 56938660111LL;
	volatile uint8_t x668 = 89U;
	volatile int64_t t152 = 8484LL;

    t152 = (((x665|x666)+x667)&x668);

    if (t152 != 8LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x669 = UINT16_MAX;
	static int32_t x671 = INT32_MAX;
	int32_t x672 = 2;

    t153 = (((x669|x670)+x671)&x672);

    if (t153 != 2) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = UINT64_MAX;
	int16_t x678 = INT16_MIN;
	int16_t x679 = INT16_MIN;
	uint8_t x680 = 0U;
	uint64_t t154 = 63887801LLU;

    t154 = (((x677|x678)+x679)&x680);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x681 = -1;
	int16_t x682 = -1;
	int16_t x683 = INT16_MIN;
	int32_t x684 = -1;
	int32_t t155 = 12345680;

    t155 = (((x681|x682)+x683)&x684);

    if (t155 != -32769) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	int64_t x687 = 137640288832LL;
	static int64_t t156 = 9931264487LL;

    t156 = (((x685|x686)+x687)&x688);

    if (t156 != 201335232LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x689 = -1;
	static int16_t x690 = INT16_MIN;
	int16_t x691 = -1;
	static int32_t x692 = 152;

    t157 = (((x689|x690)+x691)&x692);

    if (t157 != 152) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x693 = 13075;
	int64_t x695 = INT64_MIN;
	int64_t x696 = -1LL;
	static int64_t t158 = 1937824238915216002LL;

    t158 = (((x693|x694)+x695)&x696);

    if (t158 != -9223369921626636457LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = INT32_MAX;
	uint64_t x698 = 202019680019LLU;
	static int32_t x699 = -1;
	static int32_t x700 = -1;
	static volatile uint64_t t159 = 405073101314475798LLU;

    t159 = (((x697|x698)+x699)&x700);

    if (t159 != 204010946558LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x702 = INT16_MAX;
	volatile int64_t x703 = -1LL;
	uint64_t x704 = UINT64_MAX;
	uint64_t t160 = 47LLU;

    t160 = (((x701|x702)+x703)&x704);

    if (t160 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x705 = 24;
	int8_t x706 = -1;
	int64_t x707 = INT64_MAX;
	int64_t t161 = 3878LL;

    t161 = (((x705|x706)+x707)&x708);

    if (t161 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x717 = 1U;
	int32_t x718 = INT32_MIN;
	uint8_t x719 = 123U;
	int32_t t162 = -131;

    t162 = (((x717|x718)+x719)&x720);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x721 = INT64_MIN;
	volatile int16_t x722 = INT16_MIN;
	static volatile int16_t x723 = 5986;
	int64_t t163 = -3569LL;

    t163 = (((x721|x722)+x723)&x724);

    if (t163 != -32768LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x725 = UINT32_MAX;
	int32_t x726 = 20097;
	volatile uint8_t x727 = UINT8_MAX;
	volatile int8_t x728 = INT8_MAX;
	uint32_t t164 = 21U;

    t164 = (((x725|x726)+x727)&x728);

    if (t164 != 126U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x729 = INT8_MIN;
	static int32_t x730 = 0;
	uint16_t x731 = 3U;
	int64_t t165 = 1965302129LL;

    t165 = (((x729|x730)+x731)&x732);

    if (t165 != 471878986830269314LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x735 = -1;
	volatile uint64_t x736 = 37000LLU;

    t166 = (((x733|x734)+x735)&x736);

    if (t166 != 4232LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x737 = -26957865396LL;
	int16_t x738 = INT16_MIN;
	int16_t x739 = INT16_MIN;
	int8_t x740 = INT8_MIN;
	static volatile int64_t t167 = -1LL;

    t167 = (((x737|x738)+x739)&x740);

    if (t167 != -57856LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x741 = INT8_MIN;
	volatile int64_t x742 = INT64_MIN;
	static volatile int16_t x743 = 525;
	static int64_t x744 = INT64_MIN;
	volatile int64_t t168 = -197103181005190369LL;

    t168 = (((x741|x742)+x743)&x744);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x745 = 1208U;
	uint64_t x746 = UINT64_MAX;
	static int32_t x747 = 167810937;
	int8_t x748 = INT8_MIN;
	volatile uint64_t t169 = 1422647569812LLU;

    t169 = (((x745|x746)+x747)&x748);

    if (t169 != 167810816LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x749 = 16U;
	volatile int8_t x750 = INT8_MAX;
	int64_t x751 = -12748051242440LL;
	volatile int32_t x752 = 23;
	int64_t t170 = 440024162LL;

    t170 = (((x749|x750)+x751)&x752);

    if (t170 != 23LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x753 = INT64_MIN;
	static volatile uint64_t x754 = 18381901127508LLU;
	static uint16_t x755 = 24767U;
	int32_t x756 = INT32_MAX;
	uint64_t t171 = 59987589LLU;

    t171 = (((x753|x754)+x755)&x756);

    if (t171 != 1588609043LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x757 = -90345;
	uint16_t x758 = UINT16_MAX;
	uint32_t x759 = 40199247U;
	volatile uint64_t x760 = 674468968641473756LLU;
	volatile uint64_t t172 = 589LLU;

    t172 = (((x757|x758)+x759)&x760);

    if (t172 != 40117324LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x761 = -2;
	int16_t x762 = -98;
	int64_t x763 = -5653015LL;
	int16_t x764 = 1004;

    t173 = (((x761|x762)+x763)&x764);

    if (t173 != 484LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x765 = UINT16_MAX;
	uint32_t x766 = 219526U;
	uint16_t x768 = 2U;
	volatile uint32_t t174 = 6749085U;

    t174 = (((x765|x766)+x767)&x768);

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x769 = INT16_MIN;
	uint8_t x770 = 2U;
	static volatile int32_t x771 = 13393;
	int64_t x772 = INT64_MIN;
	volatile int64_t t175 = INT64_MIN;

    t175 = (((x769|x770)+x771)&x772);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x773 = INT8_MIN;
	static uint16_t x774 = UINT16_MAX;
	volatile int32_t x775 = 1;
	int32_t x776 = INT32_MIN;
	volatile int32_t t176 = 339887;

    t176 = (((x773|x774)+x775)&x776);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = -1277;
	static int32_t x778 = 65;
	uint32_t x779 = UINT32_MAX;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t177 = 17919LLU;

    t177 = (((x777|x778)+x779)&x780);

    if (t177 != 4294966082LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x782 = -1;
	int64_t x783 = -502LL;
	static int64_t t178 = 28733400806693884LL;

    t178 = (((x781|x782)+x783)&x784);

    if (t178 != 9LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x785 = 8246233U;
	int8_t x786 = 3;
	static volatile uint64_t t179 = 766137197071LLU;

    t179 = (((x785|x786)+x787)&x788);

    if (t179 != 23712068748497LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x789 = 0;
	static int16_t x790 = -1473;
	int16_t x791 = INT16_MAX;
	static uint8_t x792 = 5U;
	int32_t t180 = 0;

    t180 = (((x789|x790)+x791)&x792);

    if (t180 != 4) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x793 = 3288727409LLU;
	int8_t x794 = INT8_MIN;
	uint64_t x795 = 14LLU;
	static int32_t x796 = INT32_MAX;
	uint64_t t181 = 0LLU;

    t181 = (((x793|x794)+x795)&x796);

    if (t181 != 2147483647LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x797 = UINT64_MAX;
	volatile int16_t x800 = 195;
	volatile uint64_t t182 = 55103577306242648LLU;

    t182 = (((x797|x798)+x799)&x800);

    if (t182 != 128LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x801 = 24U;
	int8_t x802 = -1;
	volatile int64_t x803 = -330713LL;
	int8_t x804 = INT8_MIN;
	volatile int64_t t183 = -53LL;

    t183 = (((x801|x802)+x803)&x804);

    if (t183 != 4294636544LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x806 = -240024096;
	int32_t x807 = INT32_MAX;
	volatile uint16_t x808 = 2U;
	volatile uint32_t t184 = 453U;

    t184 = (((x805|x806)+x807)&x808);

    if (t184 != 2U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x809 = INT16_MIN;
	int8_t x812 = INT8_MIN;
	static int32_t t185 = -125434;

    t185 = (((x809|x810)+x811)&x812);

    if (t185 != -30848) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x813 = 19U;
	uint8_t x814 = 48U;
	int8_t x816 = -9;
	uint32_t t186 = 7039193U;

    t186 = (((x813|x814)+x815)&x816);

    if (t186 != 32818U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x817 = INT32_MIN;
	volatile uint8_t x818 = UINT8_MAX;
	static uint64_t x819 = 68391LLU;

    t187 = (((x817|x818)+x819)&x820);

    if (t187 != 18446744071562136614LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = -1;
	int32_t x822 = 4;
	uint16_t x823 = 2937U;
	uint8_t x824 = UINT8_MAX;
	volatile int32_t t188 = 5853;

    t188 = (((x821|x822)+x823)&x824);

    if (t188 != 120) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = INT8_MAX;
	static volatile int64_t x826 = -17207044091385LL;
	int8_t x827 = -1;
	static int64_t x828 = INT64_MAX;
	volatile int64_t t189 = -1491737454295LL;

    t189 = (((x825|x826)+x827)&x828);

    if (t189 != 9223354829810684542LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x829 = INT32_MIN;
	int64_t x830 = INT64_MIN;
	int16_t x831 = INT16_MAX;
	uint16_t x832 = 0U;
	int64_t t190 = -6759914LL;

    t190 = (((x829|x830)+x831)&x832);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x833 = -6946159278661LL;
	static volatile uint64_t x834 = 2723LLU;
	int64_t x835 = INT64_MIN;
	int32_t x836 = -63532;
	volatile uint64_t t191 = 1780LLU;

    t191 = (((x833|x834)+x835)&x836);

    if (t191 != 9223365090695448464LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x837 = INT32_MAX;
	int64_t x838 = INT64_MIN;
	int8_t x839 = INT8_MAX;
	uint32_t x840 = 373877U;
	volatile int64_t t192 = -138LL;

    t192 = (((x837|x838)+x839)&x840);

    if (t192 != 116LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x841 = INT32_MAX;
	int64_t x842 = -515156LL;
	static int16_t x843 = INT16_MIN;
	volatile int8_t x844 = -27;
	int64_t t193 = 17437564015996LL;

    t193 = (((x841|x842)+x843)&x844);

    if (t193 != -32795LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x845 = 197646LLU;
	int64_t x846 = INT64_MAX;
	int8_t x847 = INT8_MIN;
	int8_t x848 = INT8_MIN;
	volatile uint64_t t194 = 4789839048479617LLU;

    t194 = (((x845|x846)+x847)&x848);

    if (t194 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x851 = INT64_MIN;
	int64_t x852 = -164560248478LL;
	static int64_t t195 = -114951620LL;

    t195 = (((x849|x850)+x851)&x852);

    if (t195 != -9223372033911299742LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x854 = -12062;
	uint32_t x855 = 0U;
	static volatile int32_t x856 = 25574901;

    t196 = (((x853|x854)+x855)&x856);

    if (t196 != 25563620LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x857 = 14762656289652LL;
	static int8_t x858 = -1;
	int32_t x859 = -8;
	static volatile int64_t x860 = INT64_MIN;

    t197 = (((x857|x858)+x859)&x860);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x863 = UINT32_MAX;
	int16_t x864 = INT16_MIN;
	uint32_t t198 = 1U;

    t198 = (((x861|x862)+x863)&x864);

    if (t198 != 4294934528U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x865 = -71888LL;
	int8_t x867 = INT8_MAX;
	volatile uint64_t t199 = 268LLU;

    t199 = (((x865|x866)+x867)&x868);

    if (t199 != 1495794350LLU) { NG(); } else { ; }
	
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

