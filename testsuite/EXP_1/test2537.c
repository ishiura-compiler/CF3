
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

static volatile int32_t x5 = INT32_MIN;
uint64_t x6 = 3848995LLU;
int64_t x13 = -1LL;
volatile int64_t t2 = 4331474262996610682LL;
int16_t x17 = INT16_MIN;
uint32_t x26 = 15715U;
uint64_t x50 = 27528LLU;
uint32_t x51 = 6U;
volatile uint64_t t11 = 4851329977LLU;
static int32_t t12 = 2092502;
int8_t x57 = -1;
volatile uint64_t t13 = 343549LLU;
volatile uint16_t x67 = 1U;
int32_t x79 = INT32_MIN;
static int32_t x81 = INT32_MAX;
uint32_t x82 = 176U;
uint16_t x85 = 829U;
uint64_t t19 = 13438080807LLU;
static int16_t x93 = INT16_MIN;
int32_t x96 = 39;
uint64_t x100 = 4428702064031500209LLU;
int64_t x104 = INT64_MIN;
static int64_t x107 = INT64_MIN;
int64_t x108 = 167299079925971LL;
uint64_t x109 = 3818011992641258670LLU;
static uint32_t x114 = 2017402U;
int32_t x118 = -1;
int8_t x119 = INT8_MIN;
uint32_t t27 = 524073439U;
int64_t x122 = -1LL;
int8_t x126 = INT8_MIN;
int8_t x127 = INT8_MIN;
volatile uint32_t x129 = UINT32_MAX;
static int16_t x132 = -1;
volatile uint64_t t31 = 2257600097142LLU;
int16_t x140 = INT16_MAX;
volatile int32_t t32 = -986254846;
volatile int16_t x147 = INT16_MIN;
static int8_t x150 = INT8_MAX;
uint32_t x151 = 95U;
uint64_t t36 = 7948109380LLU;
static volatile int64_t x167 = -160299125507829890LL;
volatile uint8_t x170 = UINT8_MAX;
int8_t x176 = -15;
int32_t t41 = 2;
static uint8_t x186 = 1U;
volatile uint32_t t42 = 722109U;
uint8_t x191 = 10U;
volatile uint32_t x198 = UINT32_MAX;
int8_t x200 = -1;
static uint32_t x202 = 21816U;
volatile int64_t x206 = INT64_MIN;
uint64_t t47 = 99208252844607LLU;
int32_t x225 = -81;
volatile int32_t x226 = INT32_MIN;
uint32_t x240 = 15916U;
volatile uint64_t t55 = 126658692482303063LLU;
volatile int64_t t57 = -4203131279178309964LL;
uint16_t x268 = UINT16_MAX;
uint32_t x270 = 118754998U;
volatile int8_t x276 = -27;
volatile int64_t t62 = 1022689483984453614LL;
uint8_t x280 = 4U;
volatile uint8_t x284 = UINT8_MAX;
uint64_t x287 = UINT64_MAX;
volatile uint32_t x289 = 14125U;
int64_t x290 = INT64_MAX;
int8_t x292 = INT8_MAX;
volatile int64_t t66 = 928847867193LL;
static int64_t x301 = INT64_MIN;
volatile int8_t x308 = -1;
uint32_t x310 = UINT32_MAX;
int8_t x316 = INT8_MAX;
int32_t t71 = 1;
volatile int64_t t72 = 73015686LL;
static int16_t x346 = INT16_MIN;
volatile int64_t x353 = -1LL;
volatile int64_t t77 = 170326729858LL;
int8_t x358 = 13;
static int16_t x362 = INT16_MIN;
volatile uint16_t x363 = UINT16_MAX;
static int16_t x364 = INT16_MAX;
volatile uint64_t t79 = 118LLU;
int8_t x388 = INT8_MAX;
volatile int32_t t83 = 45336657;
uint8_t x392 = 13U;
int8_t x410 = 36;
static volatile int8_t x412 = INT8_MAX;
volatile int16_t x413 = INT16_MAX;
uint32_t x420 = UINT32_MAX;
uint64_t x428 = 52912LLU;
volatile uint64_t t89 = 115619788LLU;
int8_t x435 = INT8_MAX;
int32_t t90 = -1;
int32_t x440 = -1;
int64_t t91 = -17166342193LL;
int8_t x449 = 30;
volatile uint64_t x450 = 695074848LLU;
volatile uint16_t x461 = 0U;
static volatile int32_t x468 = -1;
int64_t x471 = -1LL;
int32_t x473 = INT32_MAX;
int16_t x487 = 938;
volatile int16_t x493 = INT16_MIN;
int32_t x494 = 124513;
uint16_t x496 = 5U;
volatile int16_t x497 = -1;
int32_t x498 = -1;
int64_t t104 = -3061986LL;
uint32_t x528 = UINT32_MAX;
uint8_t x535 = 58U;
static uint64_t x538 = UINT64_MAX;
int16_t x541 = INT16_MIN;
static int32_t x542 = -1;
uint32_t x543 = 0U;
uint32_t x548 = UINT32_MAX;
static int16_t x549 = 0;
static volatile int32_t x565 = 297;
int64_t x566 = 42940717LL;
int64_t x571 = -1LL;
uint16_t x572 = 2059U;
uint64_t t115 = 4596LLU;
int32_t t116 = -991188;
uint8_t x579 = 2U;
int64_t x587 = -1LL;
uint8_t x590 = 1U;
int64_t x596 = INT64_MAX;
int32_t x601 = INT32_MIN;
uint32_t x604 = UINT32_MAX;
static int8_t x614 = INT8_MAX;
uint32_t x615 = 1028455217U;
int64_t t125 = -784636LL;
volatile int32_t x621 = -1;
static int16_t x645 = -225;
volatile int8_t x650 = -1;
volatile int8_t x651 = -11;
int32_t t131 = 53978081;
uint32_t x658 = 211753U;
int64_t x660 = 6LL;
uint16_t x669 = 29U;
uint32_t x673 = UINT32_MAX;
volatile int32_t x675 = INT32_MIN;
int16_t x677 = -1;
int8_t x688 = INT8_MAX;
static int8_t x714 = -2;
int32_t x717 = 185851;
int16_t x730 = -3611;
int64_t x732 = -6329LL;
int8_t x752 = INT8_MIN;
static int64_t t157 = 176562687LL;
uint8_t x773 = UINT8_MAX;
static int16_t x774 = INT16_MIN;
static int8_t x775 = 8;
static int32_t x782 = 885553937;
uint64_t t161 = 46LLU;
int32_t x792 = INT32_MIN;
int64_t t162 = -562038LL;
int32_t x793 = -1;
int64_t t163 = -2481077501078710315LL;
uint64_t x799 = 926775618861LLU;
static uint64_t x803 = 1524018LLU;
uint64_t t165 = 2687131911LLU;
int64_t x836 = -1LL;
static uint8_t x843 = 0U;
static int16_t x847 = INT16_MIN;
volatile int32_t t169 = 10659910;
int64_t x858 = INT64_MAX;
int64_t x862 = INT64_MIN;
volatile uint8_t x865 = UINT8_MAX;
int16_t x868 = 15;
static volatile uint64_t t173 = 86013526673LLU;
int8_t x880 = INT8_MAX;
static volatile uint64_t t176 = 27LLU;
int32_t x887 = INT32_MIN;
int16_t x888 = INT16_MIN;
int8_t x890 = INT8_MAX;
int64_t x896 = -1LL;
int16_t x907 = -8531;
int8_t x911 = 20;
volatile int16_t x926 = INT16_MIN;
uint16_t x934 = 1U;
uint64_t x939 = 5835559795235LLU;
static uint32_t x940 = 11U;
int32_t x946 = INT32_MIN;
int64_t x947 = -1LL;
volatile uint8_t x949 = 9U;
int64_t x950 = -599200359519703LL;
int32_t x953 = INT32_MAX;
uint32_t x954 = 10U;
int16_t x955 = -9025;
uint16_t x957 = UINT16_MAX;
int32_t x964 = -1;
int32_t t197 = 138691735;
static volatile uint8_t x992 = 12U;


void f0(void) {
    	uint32_t x7 = 23U;
	int8_t x8 = INT8_MAX;
	uint64_t t0 = 102853509223045LLU;

    t0 = (((x5|x6)^x7)*x8);

    if (t0 != 18446743801467952844LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = 2535;
	uint64_t x10 = 4702396810392889LLU;
	int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MAX;
	uint64_t t1 = 56239991583043305LLU;

    t1 = (((x9|x10)^x11)*x12);

    if (t1 != 696945450896752128LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = INT64_MAX;
	int32_t x15 = -1;
	int32_t x16 = -12095;

    t2 = (((x13|x14)^x15)*x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x18 = 6804613310211268LLU;
	uint64_t x19 = UINT64_MAX;
	int16_t x20 = INT16_MIN;
	uint64_t t3 = 20743LLU;

    t3 = (((x17|x18)^x19)*x20);

    if (t3 != 18446744073481125888LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 3714240623LLU;
	int8_t x24 = -1;
	static volatile uint64_t t4 = 382909297319818902LLU;

    t4 = (((x21|x22)^x23)*x24);

    if (t4 != 18446744069995352176LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int32_t x27 = -69630;
	int8_t x28 = -1;
	volatile uint32_t t5 = 0U;

    t5 = (((x25|x26)^x27)*x28);

    if (t5 != 2147562143U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -1;
	volatile int64_t t6 = 1108612803461651380LL;

    t6 = (((x29|x30)^x31)*x32);

    if (t6 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 3787097684LLU;
	int64_t x34 = INT64_MIN;
	int64_t x35 = -1LL;
	static int8_t x36 = INT8_MIN;
	volatile uint64_t t7 = 1958439364830974989LLU;

    t7 = (((x33|x34)^x35)*x36);

    if (t7 != 484748503680LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x37 = 25U;
	int8_t x38 = -1;
	uint16_t x39 = 3U;
	int32_t x40 = -1;
	volatile int32_t t8 = 64192;

    t8 = (((x37|x38)^x39)*x40);

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 4724838355166285722LLU;
	int64_t x42 = INT64_MAX;
	int32_t x43 = INT32_MIN;
	volatile int8_t x44 = -20;
	uint64_t t9 = 4818148934789906LLU;

    t9 = (((x41|x42)^x43)*x44);

    if (t9 != 18446744030759878676LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = 6U;
	uint32_t t10 = 12384909U;

    t10 = (((x45|x46)^x47)*x48);

    if (t10 != 4294770688U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x49 = UINT8_MAX;
	static int64_t x52 = 19144431638LL;

    t11 = (((x49|x50)^x51)*x52);

    if (t11 != 529171234905958LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = 1656;
	static int32_t x54 = -1;
	int32_t x55 = -1;
	int32_t x56 = INT32_MAX;

    t12 = (((x53|x54)^x55)*x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x58 = 1;
	uint64_t x59 = 37394998LLU;
	int64_t x60 = INT64_MAX;

    t13 = (((x57|x58)^x59)*x60);

    if (t13 != 9223372036892170807LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = UINT32_MAX;
	int64_t x62 = 9836307393627656LL;
	int64_t x63 = 61993803874LL;
	int8_t x64 = -1;
	static int64_t t14 = -511270LL;

    t14 = (((x61|x62)^x63)*x64);

    if (t14 != -9836366596775837LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x65 = -1;
	static int8_t x66 = INT8_MAX;
	uint16_t x68 = UINT16_MAX;
	int32_t t15 = -8;

    t15 = (((x65|x66)^x67)*x68);

    if (t15 != -131070) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x73 = 3535615U;
	uint8_t x74 = 7U;
	uint8_t x75 = 6U;
	static volatile uint16_t x76 = 14719U;
	volatile uint32_t t16 = 5848U;

    t16 = (((x73|x74)^x75)*x76);

    if (t16 != 501021319U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = 2U;
	volatile int32_t x78 = INT32_MIN;
	volatile int8_t x80 = INT8_MAX;
	static volatile int32_t t17 = 1;

    t17 = (((x77|x78)^x79)*x80);

    if (t17 != 254) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x83 = 390153970319084LLU;
	static int32_t x84 = INT32_MAX;
	uint64_t t18 = 3476968283LLU;

    t18 = (((x81|x82)^x83)*x84);

    if (t18 != 15679033277196205805LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x86 = 0U;
	static int32_t x87 = -1;
	uint64_t x88 = UINT64_MAX;

    t19 = (((x85|x86)^x87)*x88);

    if (t19 != 830LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x89 = 268U;
	volatile int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = -22644;
	int32_t t20 = 3978;

    t20 = (((x89|x90)^x91)*x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x94 = 236U;
	uint64_t x95 = 1972622LLU;
	static volatile uint64_t t21 = 1824109LLU;

    t21 = (((x93|x94)^x95)*x96);

    if (t21 != 18446744073631849966LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = -1;
	static int32_t x99 = 7693029;
	volatile uint64_t t22 = 2543931034LLU;

    t22 = (((x97|x98)^x99)*x100);

    if (t22 != 2340305309466121466LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 1617944405113LLU;
	int64_t x103 = -8LL;
	uint64_t t23 = 4196205538248LLU;

    t23 = (((x101|x102)^x103)*x104);

    if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x105 = INT64_MIN;
	int32_t x106 = 402;
	int64_t t24 = -24707864LL;

    t24 = (((x105|x106)^x107)*x108);

    if (t24 != 67254230130240342LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x110 = INT16_MIN;
	uint8_t x111 = 0U;
	int32_t x112 = -50901;
	volatile uint64_t t25 = 239110324LLU;

    t25 = (((x109|x110)^x111)*x112);

    if (t25 != 772982586LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	uint64_t x115 = 59LLU;
	int8_t x116 = 0;
	uint64_t t26 = 6884641821720545LLU;

    t26 = (((x113|x114)^x115)*x116);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = -4574;
	uint32_t x120 = UINT32_MAX;

    t27 = (((x117|x118)^x119)*x120);

    if (t27 != 4294967169U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x121 = INT8_MAX;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	static int64_t t28 = -52905810700LL;

    t28 = (((x121|x122)^x123)*x124);

    if (t28 != 2147385345LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 3U;
	uint8_t x128 = 12U;
	int32_t t29 = -29729;

    t29 = (((x125|x126)^x127)*x128);

    if (t29 != 36) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x130 = 0;
	volatile int32_t x131 = -1;
	uint32_t t30 = 1498U;

    t30 = (((x129|x130)^x131)*x132);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x133 = UINT8_MAX;
	int64_t x134 = INT64_MAX;
	uint64_t x135 = 7632922LLU;
	int64_t x136 = 3953313839325632093LL;

    t31 = (((x133|x134)^x135)*x136);

    if (t31 != 622691789372443697LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = 225U;
	uint8_t x138 = 11U;
	int16_t x139 = 8;

    t32 = (((x137|x138)^x139)*x140);

    if (t32 != 7438109) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x141 = 2080474U;
	static uint16_t x142 = 158U;
	int16_t x143 = INT16_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t33 = 129928198678LLU;

    t33 = (((x141|x142)^x143)*x144);

    if (t33 != 18446744073707470559LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x145 = INT8_MAX;
	volatile int32_t x146 = 16;
	uint32_t x148 = 127U;
	uint32_t t34 = 6U;

    t34 = (((x145|x146)^x147)*x148);

    if (t34 != 4290821889U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -6719;
	uint16_t x152 = 2U;
	volatile uint32_t t35 = 526495635U;

    t35 = (((x149|x150)^x151)*x152);

    if (t35 != 4294953792U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x161 = 391883812U;
	uint64_t x162 = 36978314449050036LLU;
	int64_t x163 = -1436122691LL;
	uint64_t x164 = UINT64_MAX;

    t36 = (((x161|x162)^x163)*x164);

    if (t36 != 36978313404777463LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int8_t x168 = 5;
	volatile int64_t t37 = -82691473668LL;

    t37 = (((x165|x166)^x167)*x168);

    if (t37 != 801495627539149445LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x169 = UINT8_MAX;
	uint32_t x171 = 3056U;
	volatile uint32_t x172 = 131964471U;
	uint32_t t38 = 28715U;

    t38 = (((x169|x170)^x171)*x172);

    if (t38 != 4224229945U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = 0;
	volatile uint32_t x174 = 1005804U;
	int64_t x175 = 1079972652006LL;
	int64_t t39 = 44029308949163LL;

    t39 = (((x173|x174)^x175)*x176);

    if (t39 != -16199600436630LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 855329793837116208LLU;
	uint8_t x178 = UINT8_MAX;
	static int32_t x179 = -1;
	int32_t x180 = 1990;
	volatile uint64_t t40 = 16491101858915LLU;

    t40 = (((x177|x178)^x179)*x180);

    if (t40 != 13440909119126632448LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x181 = INT8_MIN;
	uint16_t x182 = 6944U;
	uint16_t x183 = UINT16_MAX;
	volatile uint8_t x184 = 1U;

    t41 = (((x181|x182)^x183)*x184);

    if (t41 != -65441) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 22694U;
	int16_t x187 = -1;
	int32_t x188 = -1;

    t42 = (((x185|x186)^x187)*x188);

    if (t42 != 22696U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x189 = 18;
	int32_t x190 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile uint32_t t43 = 43416U;

    t43 = (((x189|x190)^x191)*x192);

    if (t43 != 11U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x197 = INT32_MAX;
	static int64_t x199 = INT64_MAX;
	volatile int64_t t44 = -13800820273695086LL;

    t44 = (((x197|x198)^x199)*x200);

    if (t44 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x201 = UINT8_MAX;
	int32_t x203 = INT32_MIN;
	volatile int32_t x204 = INT32_MAX;
	static uint32_t t45 = 21U;

    t45 = (((x201|x202)^x203)*x204);

    if (t45 != 4294945281U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = -405;
	int32_t x207 = -1;
	static int8_t x208 = -1;
	int64_t t46 = 189LL;

    t46 = (((x205|x206)^x207)*x208);

    if (t46 != -404LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	volatile uint64_t x210 = 49916LLU;
	uint8_t x211 = 3U;
	static int8_t x212 = INT8_MAX;

    t47 = (((x209|x210)^x211)*x212);

    if (t47 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = -1;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -1;
	volatile uint32_t t48 = 1185431U;

    t48 = (((x213|x214)^x215)*x216);

    if (t48 != 2147483649U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x217 = -1;
	static volatile uint32_t x218 = 4U;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = UINT32_MAX;
	uint32_t t49 = 20532610U;

    t49 = (((x217|x218)^x219)*x220);

    if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x221 = -1LL;
	uint64_t x222 = 1LLU;
	int8_t x223 = -1;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t50 = 0LLU;

    t50 = (((x221|x222)^x223)*x224);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x227 = UINT64_MAX;
	uint8_t x228 = UINT8_MAX;
	volatile uint64_t t51 = 83669541140LLU;

    t51 = (((x225|x226)^x227)*x228);

    if (t51 != 20400LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = -1;
	volatile int8_t x230 = INT8_MIN;
	volatile uint64_t x231 = 4037979565585989574LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t52 = 4337966187433315LLU;

    t52 = (((x229|x230)^x231)*x232);

    if (t52 != 12143111847867842560LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = -7320;
	int64_t x234 = 322904322482162LL;
	uint16_t x235 = UINT16_MAX;
	uint16_t x236 = UINT16_MAX;
	static volatile int64_t t53 = 554452728115923LL;

    t53 = (((x233|x234)^x235)*x236);

    if (t53 != -4294574085LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = 2999LLU;
	int8_t x238 = INT8_MAX;
	int16_t x239 = INT16_MIN;
	uint64_t t54 = 970LLU;

    t54 = (((x237|x238)^x239)*x240);

    if (t54 != 18446744073236894164LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x245 = 9735900343LLU;
	int32_t x246 = INT32_MIN;
	int32_t x247 = INT32_MIN;
	static int64_t x248 = INT64_MAX;

    t55 = (((x245|x246)^x247)*x248);

    if (t55 != 9223372035708810057LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x249 = INT8_MAX;
	volatile uint64_t x250 = 518022807LLU;
	int64_t x251 = 495295092LL;
	int64_t x252 = 224LL;
	volatile uint64_t t56 = 375LLU;

    t56 = (((x249|x250)^x251)*x252);

    if (t56 != 12771457440LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	uint32_t x255 = 495597U;
	int32_t x256 = INT32_MIN;

    t57 = (((x253|x254)^x255)*x256);

    if (t57 != 1064093179969536LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x257 = INT16_MIN;
	int64_t x258 = -1LL;
	int16_t x259 = -44;
	int32_t x260 = -1;
	volatile int64_t t58 = 19192782984951LL;

    t58 = (((x257|x258)^x259)*x260);

    if (t58 != -43LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x261 = 14U;
	int32_t x262 = INT32_MAX;
	volatile int32_t x263 = INT32_MIN;
	volatile int64_t x264 = -1LL;
	volatile int64_t t59 = -92LL;

    t59 = (((x261|x262)^x263)*x264);

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x265 = 6U;
	uint64_t x266 = 3650988004972106699LLU;
	volatile int8_t x267 = INT8_MAX;
	volatile uint64_t t60 = 1027855666410733LLU;

    t60 = (((x265|x266)^x267)*x268);

    if (t60 != 13228269834126290000LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x269 = INT16_MIN;
	static uint64_t x271 = UINT64_MAX;
	int64_t x272 = -36753LL;
	volatile uint64_t t61 = 417658203479090LLU;

    t61 = (((x269|x270)^x271)*x272);

    if (t61 != 157851867156135LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x273 = -14;
	volatile int64_t x274 = -5108LL;
	static volatile int32_t x275 = -1;

    t62 = (((x273|x274)^x275)*x276);

    if (t62 != -27LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x277 = 25U;
	volatile uint64_t x278 = 2103LLU;
	static uint64_t x279 = UINT64_MAX;
	static uint64_t t63 = 3492855412LLU;

    t63 = (((x277|x278)^x279)*x280);

    if (t63 != 18446744073709543168LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 28U;
	uint64_t x283 = UINT64_MAX;
	uint64_t t64 = 5226118294LLU;

    t64 = (((x281|x282)^x283)*x284);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x285 = -6080;
	static volatile int8_t x286 = INT8_MIN;
	uint16_t x288 = 18760U;
	uint64_t t65 = 11454886985199LLU;

    t65 = (((x285|x286)^x287)*x288);

    if (t65 != 1181880LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x291 = INT64_MAX;

    t66 = (((x289|x290)^x291)*x292);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	static uint64_t x295 = 11417117LLU;
	int32_t x296 = INT32_MIN;
	uint64_t t67 = 80LLU;

    t67 = (((x293|x294)^x295)*x296);

    if (t67 != 9247890111067062272LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x302 = INT64_MIN;
	uint8_t x303 = 83U;
	int32_t x304 = -1;
	static volatile int64_t t68 = -41547LL;

    t68 = (((x301|x302)^x303)*x304);

    if (t68 != 9223372036854775725LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = 0U;
	int16_t x307 = -1;
	static volatile int32_t t69 = -1848;

    t69 = (((x305|x306)^x307)*x308);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = INT64_MAX;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;
	uint64_t t70 = 3317384342LLU;

    t70 = (((x309|x310)^x311)*x312);

    if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = -1;
	uint8_t x314 = 119U;
	volatile uint16_t x315 = 10U;

    t71 = (((x313|x314)^x315)*x316);

    if (t71 != -1397) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = -2675;
	int16_t x323 = -518;
	int16_t x324 = INT16_MAX;

    t72 = (((x321|x322)^x323)*x324);

    if (t72 != 71006089LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x329 = 5LLU;
	volatile uint8_t x330 = 14U;
	uint64_t x331 = UINT64_MAX;
	static int32_t x332 = INT32_MAX;
	uint64_t t73 = 573725821423111739LLU;

    t73 = (((x329|x330)^x331)*x332);

    if (t73 != 18446744039349813264LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x333 = -359937935;
	int32_t x334 = -88191707;
	uint64_t x335 = 861621443476LLU;
	uint16_t x336 = 1286U;
	volatile uint64_t t74 = 858290902650400806LLU;

    t74 = (((x333|x334)^x335)*x336);

    if (t74 != 18445636087861407302LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x345 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	int64_t x348 = 54270LL;
	int64_t t75 = -728496258978346345LL;

    t75 = (((x345|x346)^x347)*x348);

    if (t75 != -54270LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = -9;
	int32_t x351 = -1;
	static uint32_t x352 = 1800U;
	volatile uint32_t t76 = 104442055U;

    t76 = (((x349|x350)^x351)*x352);

    if (t76 != 14400U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x354 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	volatile int16_t x356 = INT16_MIN;

    t77 = (((x353|x354)^x355)*x356);

    if (t77 != -70368744144896LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x357 = -25;
	volatile uint64_t x359 = UINT64_MAX;
	static int8_t x360 = -1;
	volatile uint64_t t78 = 31137904LLU;

    t78 = (((x357|x358)^x359)*x360);

    if (t78 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x361 = 42881659387034455LLU;

    t79 = (((x361|x362)^x363)*x364);

    if (t79 != 18446744072138046296LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x365 = 31LLU;
	static volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;
	static uint64_t t80 = 1034567605643LLU;

    t80 = (((x365|x366)^x367)*x368);

    if (t80 != 70302172184576LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x377 = -1;
	volatile int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	static int16_t x380 = INT16_MIN;
	volatile int32_t t81 = -331;

    t81 = (((x377|x378)^x379)*x380);

    if (t81 != -1073709056) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x381 = 13150;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	volatile int64_t t82 = 3090964173807752248LL;

    t82 = (((x381|x382)^x383)*x384);

    if (t82 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x385 = -242981;
	static int8_t x386 = INT8_MAX;
	int32_t x387 = -1;

    t83 = (((x385|x386)^x387)*x388);

    if (t83 != 30853888) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x390 = 57;
	uint64_t x391 = 57468056802934415LLU;
	uint64_t t84 = 7279000773580526717LLU;

    t84 = (((x389|x390)^x391)*x392);

    if (t84 != 17699659335271403454LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x397 = INT64_MIN;
	static int8_t x398 = INT8_MIN;
	volatile uint16_t x399 = 7U;
	int16_t x400 = -1;
	int64_t t85 = -1LL;

    t85 = (((x397|x398)^x399)*x400);

    if (t85 != 121LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x409 = INT16_MAX;
	int8_t x411 = INT8_MIN;
	static int32_t t86 = -42;

    t86 = (((x409|x410)^x411)*x412);

    if (t86 != -4145407) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x414 = -1LL;
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = -1LL;
	volatile int64_t t87 = -25447757166012LL;

    t87 = (((x413|x414)^x415)*x416);

    if (t87 != 256LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x417 = -1;
	static uint16_t x418 = UINT16_MAX;
	static int64_t x419 = -1LL;
	volatile int64_t t88 = -34330908517150104LL;

    t88 = (((x417|x418)^x419)*x420);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x425 = INT64_MIN;
	volatile uint16_t x426 = 1U;
	volatile int8_t x427 = INT8_MAX;

    t89 = (((x425|x426)^x427)*x428);

    if (t89 != 6666912LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x433 = INT16_MIN;
	int16_t x434 = -1;
	volatile uint16_t x436 = 86U;

    t90 = (((x433|x434)^x435)*x436);

    if (t90 != -11008) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x437 = -1LL;
	volatile int16_t x438 = INT16_MIN;
	static int8_t x439 = INT8_MIN;

    t91 = (((x437|x438)^x439)*x440);

    if (t91 != -127LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x451 = INT8_MIN;
	int8_t x452 = INT8_MIN;
	volatile uint64_t t92 = 23590357809LLU;

    t92 = (((x449|x450)^x451)*x452);

    if (t92 != 88969584896LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x453 = -1807;
	int32_t x454 = INT32_MAX;
	volatile uint16_t x455 = 9840U;
	static uint32_t x456 = UINT32_MAX;
	uint32_t t93 = 227U;

    t93 = (((x453|x454)^x455)*x456);

    if (t93 != 9841U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x462 = 17;
	int8_t x463 = -14;
	static int16_t x464 = INT16_MIN;
	static int32_t t94 = 1;

    t94 = (((x461|x462)^x463)*x464);

    if (t94 != 950272) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x465 = -1631;
	volatile int16_t x466 = INT16_MIN;
	uint32_t x467 = 6518U;
	uint32_t t95 = 2039156U;

    t95 = (((x465|x466)^x467)*x468);

    if (t95 != 7977U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x469 = -414;
	static int64_t x470 = INT64_MIN;
	int8_t x472 = -1;
	volatile int64_t t96 = 31802323669001LL;

    t96 = (((x469|x470)^x471)*x472);

    if (t96 != -413LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x474 = -101571667;
	uint32_t x475 = UINT32_MAX;
	int8_t x476 = INT8_MAX;
	volatile uint32_t t97 = 14U;

    t97 = (((x473|x474)^x475)*x476);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x477 = UINT16_MAX;
	int16_t x478 = 4;
	int8_t x479 = INT8_MIN;
	static int32_t x480 = -4;
	volatile int32_t t98 = 22777369;

    t98 = (((x477|x478)^x479)*x480);

    if (t98 != 261636) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x481 = -1LL;
	volatile int16_t x482 = INT16_MIN;
	int64_t x483 = -1LL;
	int8_t x484 = -2;
	static int64_t t99 = 3866LL;

    t99 = (((x481|x482)^x483)*x484);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x485 = 94U;
	uint8_t x486 = 27U;
	uint16_t x488 = UINT16_MAX;
	int32_t t100 = 60373;

    t100 = (((x485|x486)^x487)*x488);

    if (t100 != 66386955) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x495 = UINT64_MAX;
	volatile uint64_t t101 = 1935150155227084145LLU;

    t101 = (((x493|x494)^x495)*x496);

    if (t101 != 32790LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x499 = 14;
	static int16_t x500 = 10;
	int32_t t102 = 264848;

    t102 = (((x497|x498)^x499)*x500);

    if (t102 != -150) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	volatile int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	static volatile int32_t x504 = INT32_MIN;
	volatile uint64_t t103 = 54300457LLU;

    t103 = (((x501|x502)^x503)*x504);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x513 = -1682;
	int32_t x514 = 5012;
	int64_t x515 = 849857178LL;
	volatile uint8_t x516 = 33U;

    t104 = (((x513|x514)^x515)*x516);

    if (t104 != -28045320732LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x517 = INT64_MIN;
	int16_t x518 = -1;
	int64_t x519 = 15551792LL;
	int32_t x520 = INT32_MIN;
	static int64_t t105 = 3415431LL;

    t105 = (((x517|x518)^x519)*x520);

    if (t105 != 33397221164580864LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x525 = INT32_MAX;
	volatile int64_t x526 = -1LL;
	int64_t x527 = 184714380LL;
	volatile int64_t t106 = 1942534998287LL;

    t106 = (((x525|x526)^x527)*x528);

    if (t106 != -793342225311169395LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x533 = 3826968838058577LLU;
	uint8_t x534 = 116U;
	int16_t x536 = INT16_MIN;
	static volatile uint64_t t107 = 474471907424745LLU;

    t107 = (((x533|x534)^x535)*x536);

    if (t107 != 3725093630463475712LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x537 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	uint32_t x540 = 130534048U;
	static volatile uint64_t t108 = 255544LLU;

    t108 = (((x537|x538)^x539)*x540);

    if (t108 != 16577824096LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x544 = 10670U;
	uint32_t t109 = 7975U;

    t109 = (((x541|x542)^x543)*x544);

    if (t109 != 4294956626U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x545 = -1713;
	volatile int64_t x546 = 2041062546LL;
	uint64_t x547 = UINT64_MAX;
	static volatile uint64_t t110 = 1231545LLU;

    t110 = (((x545|x546)^x547)*x548);

    if (t110 != 2336462208480LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x550 = UINT16_MAX;
	volatile int8_t x551 = -10;
	int16_t x552 = INT16_MIN;
	static int32_t t111 = 1;

    t111 = (((x549|x550)^x551)*x552);

    if (t111 != 2147188736) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x553 = INT8_MIN;
	uint16_t x554 = 13U;
	static uint64_t x555 = 492836957LLU;
	volatile int32_t x556 = INT32_MIN;
	volatile uint64_t t112 = 6744482741LLU;

    t112 = (((x553|x554)^x555)*x556);

    if (t112 != 1058359209650814976LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x561 = -1;
	int8_t x562 = -1;
	uint64_t x563 = 230789LLU;
	uint8_t x564 = 2U;
	uint64_t t113 = 1308139908988932LLU;

    t113 = (((x561|x562)^x563)*x564);

    if (t113 != 18446744073709090036LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x567 = 804364938U;
	uint32_t x568 = 516347U;
	volatile int64_t t114 = -552763129170LL;

    t114 = (((x565|x566)^x567)*x568);

    if (t114 != 394113260567741LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x569 = INT32_MAX;
	volatile uint64_t x570 = 241900844888LLU;

    t115 = (((x569|x570)^x571)*x572);

    if (t115 != 18446244425131622400LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x573 = 11U;
	volatile int16_t x574 = -7244;
	static uint8_t x575 = 42U;
	int16_t x576 = 236;

    t116 = (((x573|x574)^x575)*x576);

    if (t116 != -1716900) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x577 = INT32_MAX;
	volatile int32_t x578 = INT32_MIN;
	int32_t x580 = -1;
	int32_t t117 = 490;

    t117 = (((x577|x578)^x579)*x580);

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = INT8_MIN;
	volatile int8_t x588 = INT8_MIN;
	int64_t t118 = -4983478718668764LL;

    t118 = (((x585|x586)^x587)*x588);

    if (t118 != -16256LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x589 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	static int64_t x592 = -1LL;
	static volatile int64_t t119 = -696463684868LL;

    t119 = (((x589|x590)^x591)*x592);

    if (t119 != 32641LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x593 = INT32_MAX;
	static volatile int16_t x594 = 1;
	uint64_t x595 = 287393444144581LLU;
	volatile uint64_t t120 = 65118531165LLU;

    t120 = (((x593|x594)^x595)*x596);

    if (t120 != 18446456678122923462LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x597 = UINT64_MAX;
	static volatile int8_t x598 = INT8_MAX;
	int8_t x599 = INT8_MAX;
	uint64_t x600 = 302372948442829LLU;
	uint64_t t121 = 10879020LLU;

    t121 = (((x597|x598)^x599)*x600);

    if (t121 != 18408040336308869504LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x602 = 1;
	static int8_t x603 = INT8_MIN;
	uint32_t t122 = 22852082U;

    t122 = (((x601|x602)^x603)*x604);

    if (t122 != 2147483775U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x605 = 0U;
	int8_t x606 = 25;
	uint64_t x607 = 472776607911898169LLU;
	volatile uint64_t x608 = 1643793063362253LLU;
	static volatile uint64_t t123 = 17826669943LLU;

    t123 = (((x605|x606)^x607)*x608);

    if (t123 != 10933736772680799648LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x613 = 108939493LLU;
	int32_t x616 = -1;
	uint64_t t124 = 61233053488296LLU;

    t124 = (((x613|x614)^x615)*x616);

    if (t124 != 18446744072716373042LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x617 = 11746U;
	int8_t x618 = -1;
	int16_t x619 = -11;
	volatile int64_t x620 = -10072704046443095LL;

    t125 = (((x617|x618)^x619)*x620);

    if (t125 != -100727040464430950LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x622 = 500U;
	int16_t x623 = -1;
	int16_t x624 = 855;
	uint32_t t126 = 31U;

    t126 = (((x621|x622)^x623)*x624);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x625 = 1037791;
	uint16_t x626 = 4U;
	volatile int8_t x627 = -1;
	int64_t x628 = -1027916844207LL;
	volatile int64_t t127 = -3633908062218545108LL;

    t127 = (((x625|x626)^x627)*x628);

    if (t127 != 1066763877583270944LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x629 = 20U;
	uint64_t x630 = UINT64_MAX;
	static volatile uint64_t x631 = UINT64_MAX;
	int32_t x632 = INT32_MIN;
	static volatile uint64_t t128 = 938905564225141LLU;

    t128 = (((x629|x630)^x631)*x632);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x641 = -1;
	static int16_t x642 = INT16_MIN;
	volatile uint64_t x643 = 4942884331LLU;
	uint32_t x644 = 2476U;
	uint64_t t129 = 309490LLU;

    t129 = (((x641|x642)^x643)*x644);

    if (t129 != 18446731835127945584LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x646 = 4U;
	volatile int16_t x647 = INT16_MAX;
	volatile int16_t x648 = INT16_MIN;
	int32_t t130 = -2494441;

    t130 = (((x645|x646)^x647)*x648);

    if (t130 != 1066401792) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x649 = 1U;
	static int8_t x652 = INT8_MIN;

    t131 = (((x649|x650)^x651)*x652);

    if (t131 != -1280) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = 2;
	uint16_t x655 = UINT16_MAX;
	uint64_t x656 = 328685LLU;
	uint64_t t132 = 17764108213186LLU;

    t132 = (((x653|x654)^x655)*x656);

    if (t132 != 18446744062938215481LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x657 = UINT16_MAX;
	static int8_t x659 = -1;
	volatile int64_t t133 = 4875LL;

    t133 = (((x657|x658)^x659)*x660);

    if (t133 != 25768230912LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x661 = UINT32_MAX;
	int8_t x662 = INT8_MIN;
	uint8_t x663 = UINT8_MAX;
	int32_t x664 = INT32_MAX;
	uint32_t t134 = 194204992U;

    t134 = (((x661|x662)^x663)*x664);

    if (t134 != 256U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x665 = 635831647507LLU;
	static int16_t x666 = 7;
	int8_t x667 = -3;
	static int32_t x668 = INT32_MAX;
	static volatile uint64_t t135 = 2533493392883939320LLU;

    t135 = (((x665|x666)^x667)*x668);

    if (t135 != 18067740255423102230LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x670 = UINT64_MAX;
	int16_t x671 = -1;
	int16_t x672 = -10277;
	volatile uint64_t t136 = 2456658601LLU;

    t136 = (((x669|x670)^x671)*x672);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x674 = INT32_MIN;
	static int16_t x676 = -1;
	uint32_t t137 = 42U;

    t137 = (((x673|x674)^x675)*x676);

    if (t137 != 2147483649U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x678 = INT64_MIN;
	uint32_t x679 = UINT32_MAX;
	uint32_t x680 = 1U;
	volatile int64_t t138 = 79512061272482657LL;

    t138 = (((x677|x678)^x679)*x680);

    if (t138 != -4294967296LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x681 = 14U;
	int32_t x682 = 16400787;
	int8_t x683 = 23;
	uint32_t x684 = 2663200U;
	static uint32_t t139 = 7486U;

    t139 = (((x681|x682)^x683)*x684);

    if (t139 != 3024210176U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x685 = -204;
	uint32_t x686 = 21475U;
	static int32_t x687 = -1723619;
	volatile uint32_t t140 = 5050U;

    t140 = (((x685|x686)^x687)*x688);

    if (t140 != 218900502U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x689 = -1171783;
	volatile int16_t x690 = INT16_MIN;
	uint64_t x691 = 2294428LLU;
	uint64_t x692 = 1797037LLU;
	uint64_t t141 = 858440570602LLU;

    t141 = (((x689|x690)^x691)*x692);

    if (t141 != 18446739905800305665LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x693 = INT32_MIN;
	static uint8_t x694 = 1U;
	static volatile uint16_t x695 = 1444U;
	int16_t x696 = -1;
	volatile int32_t t142 = 1;

    t142 = (((x693|x694)^x695)*x696);

    if (t142 != 2147482203) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x697 = 8U;
	uint16_t x698 = 168U;
	static volatile uint8_t x699 = 47U;
	int16_t x700 = INT16_MIN;
	static uint32_t t143 = 54U;

    t143 = (((x697|x698)^x699)*x700);

    if (t143 != 4290543616U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x701 = -25;
	int64_t x702 = INT64_MIN;
	uint8_t x703 = UINT8_MAX;
	int32_t x704 = -3;
	volatile int64_t t144 = 1212425985334361LL;

    t144 = (((x701|x702)^x703)*x704);

    if (t144 != 696LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x709 = UINT64_MAX;
	int8_t x710 = 15;
	uint16_t x711 = UINT16_MAX;
	int16_t x712 = -1;
	uint64_t t145 = 86710163215476141LLU;

    t145 = (((x709|x710)^x711)*x712);

    if (t145 != 65536LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x713 = 27U;
	volatile int8_t x715 = INT8_MIN;
	volatile int16_t x716 = INT16_MIN;
	uint32_t t146 = 8U;

    t146 = (((x713|x714)^x715)*x716);

    if (t146 != 4290805760U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x718 = -1LL;
	volatile uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = -1;
	int64_t t147 = 1LL;

    t147 = (((x717|x718)^x719)*x720);

    if (t147 != 256LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x721 = -1;
	uint16_t x722 = UINT16_MAX;
	int64_t x723 = -1LL;
	uint16_t x724 = 0U;
	int64_t t148 = -1334741LL;

    t148 = (((x721|x722)^x723)*x724);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x725 = INT32_MIN;
	volatile int64_t x726 = 8909936LL;
	volatile uint16_t x727 = 201U;
	int32_t x728 = 5;
	static volatile int64_t t149 = 12761LL;

    t149 = (((x725|x726)^x727)*x728);

    if (t149 != -10692868195LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x729 = INT16_MIN;
	int64_t x731 = -6029636LL;
	int64_t t150 = 3596986LL;

    t150 = (((x729|x730)^x731)*x732);

    if (t150 != -38184382289LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x733 = -1LL;
	static int64_t x734 = INT64_MIN;
	static volatile int32_t x735 = INT32_MIN;
	volatile int64_t x736 = -1LL;
	int64_t t151 = -37451070500711LL;

    t151 = (((x733|x734)^x735)*x736);

    if (t151 != -2147483647LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x737 = INT8_MAX;
	uint8_t x738 = 0U;
	int32_t x739 = INT32_MAX;
	volatile uint64_t x740 = 116567681256665LLU;
	static volatile uint64_t t152 = 1LLU;

    t152 = (((x737|x738)^x739)*x740);

    if (t152 != 4857383062362231680LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x741 = -321;
	static int16_t x742 = INT16_MIN;
	uint8_t x743 = 21U;
	static int16_t x744 = INT16_MIN;
	int32_t t153 = -4953;

    t153 = (((x741|x742)^x743)*x744);

    if (t153 != 11206656) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x745 = 57LL;
	int8_t x746 = INT8_MIN;
	int16_t x747 = INT16_MAX;
	int8_t x748 = INT8_MAX;
	static int64_t t154 = -4858237LL;

    t154 = (((x745|x746)^x747)*x748);

    if (t154 != -4152646LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x749 = UINT16_MAX;
	int32_t x750 = INT32_MAX;
	uint64_t x751 = 36598074382017LLU;
	volatile uint64_t t155 = 115LLU;

    t155 = (((x749|x750)^x751)*x752);

    if (t155 != 18442059413772263680LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x761 = INT8_MIN;
	uint64_t x762 = UINT64_MAX;
	static int32_t x763 = INT32_MAX;
	int16_t x764 = 312;
	static uint64_t t156 = 345305LLU;

    t156 = (((x761|x762)^x763)*x764);

    if (t156 != 18446743403694653440LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x769 = -3811106;
	volatile int32_t x770 = -536244;
	static int64_t x771 = -11LL;
	static int8_t x772 = -1;

    t157 = (((x769|x770)^x771)*x772);

    if (t157 != -534059LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x776 = INT8_MIN;
	volatile int32_t t158 = 7;

    t158 = (((x773|x774)^x775)*x776);

    if (t158 != 4162688) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x777 = 1;
	static int64_t x778 = 269LL;
	volatile int32_t x779 = -1;
	int16_t x780 = INT16_MIN;
	int64_t t159 = -3741077991433057442LL;

    t159 = (((x777|x778)^x779)*x780);

    if (t159 != 8847360LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x781 = UINT64_MAX;
	uint32_t x783 = 822U;
	int16_t x784 = -1;
	static volatile uint64_t t160 = 2111691550294LLU;

    t160 = (((x781|x782)^x783)*x784);

    if (t160 != 823LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x785 = 30004U;
	int64_t x786 = INT64_MIN;
	uint64_t x787 = UINT64_MAX;
	static int16_t x788 = -62;

    t161 = (((x785|x786)^x787)*x788);

    if (t161 != 1860310LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x789 = INT64_MIN;
	static int32_t x790 = -1;
	volatile int32_t x791 = INT32_MIN;

    t162 = (((x789|x790)^x791)*x792);

    if (t162 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x794 = -1LL;
	int32_t x795 = -1;
	volatile int64_t x796 = -1LL;

    t163 = (((x793|x794)^x795)*x796);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x797 = -1;
	volatile uint64_t x798 = 607431074939221780LLU;
	volatile int32_t x800 = 48980;
	static uint64_t t164 = 11329366709264LLU;

    t164 = (((x797|x798)^x799)*x800);

    if (t164 != 18401350603897690856LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x801 = INT16_MAX;
	int16_t x802 = INT16_MAX;
	volatile int8_t x804 = -1;

    t165 = (((x801|x802)^x803)*x804);

    if (t165 != 18446744073708028211LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x825 = -1;
	int64_t x826 = INT64_MAX;
	volatile int64_t x827 = INT64_MIN;
	volatile int32_t x828 = 1;
	int64_t t166 = INT64_MAX;

    t166 = (((x825|x826)^x827)*x828);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x833 = -10;
	int8_t x834 = -1;
	volatile int8_t x835 = INT8_MIN;
	volatile int64_t t167 = -526LL;

    t167 = (((x833|x834)^x835)*x836);

    if (t167 != -127LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x841 = 6287723869LL;
	volatile int16_t x842 = -1;
	volatile uint64_t x844 = 61528983084LLU;
	uint64_t t168 = 7663999LLU;

    t168 = (((x841|x842)^x843)*x844);

    if (t168 != 18446744012180568532LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x845 = INT16_MAX;
	int8_t x846 = INT8_MIN;
	int8_t x848 = -1;

    t169 = (((x845|x846)^x847)*x848);

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x853 = 0;
	static uint16_t x854 = 17U;
	uint64_t x855 = UINT64_MAX;
	uint8_t x856 = UINT8_MAX;
	static uint64_t t170 = 88LLU;

    t170 = (((x853|x854)^x855)*x856);

    if (t170 != 18446744073709547026LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x857 = 1606188599932083LLU;
	int16_t x859 = INT16_MIN;
	static volatile int8_t x860 = -1;
	volatile uint64_t t171 = 29879569494345LLU;

    t171 = (((x857|x858)^x859)*x860);

    if (t171 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x861 = UINT16_MAX;
	uint64_t x863 = 1560418LLU;
	uint8_t x864 = UINT8_MAX;
	volatile uint64_t t172 = 160319LLU;

    t172 = (((x861|x862)^x863)*x864);

    if (t172 != 9223372037242317923LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x866 = INT64_MIN;
	uint64_t x867 = 7183279169LLU;

    t173 = (((x865|x866)^x867)*x868);

    if (t173 != 9223372144603965218LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x869 = -28846540LL;
	uint8_t x870 = 49U;
	int64_t x871 = -20404663933348780LL;
	static uint64_t x872 = 130552LLU;
	volatile uint64_t t174 = 119367359851435LLU;

    t174 = (((x869|x870)^x871)*x872);

    if (t174 != 7538536404673702648LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x873 = -8217;
	static uint64_t x874 = 12389386386138592LLU;
	volatile int64_t x875 = INT64_MAX;
	int8_t x876 = INT8_MIN;
	uint64_t t175 = 827220239LLU;

    t175 = (((x873|x874)^x875)*x876);

    if (t175 != 18446744073709548544LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x877 = 0U;
	int32_t x878 = 69;
	uint64_t x879 = 2598870163361490LLU;

    t176 = (((x877|x878)^x879)*x880);

    if (t176 != 330056510746901737LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x881 = 4U;
	int64_t x882 = -35762694082442091LL;
	int16_t x883 = -1;
	uint8_t x884 = UINT8_MAX;
	volatile int64_t t177 = 28852424326224LL;

    t177 = (((x881|x882)^x883)*x884);

    if (t177 != 9119486991022732950LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x885 = INT32_MAX;
	int64_t x886 = 21255LL;
	int64_t t178 = 1545LL;

    t178 = (((x885|x886)^x887)*x888);

    if (t178 != 32768LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x889 = INT8_MIN;
	uint32_t x891 = 201024459U;
	uint64_t x892 = 384LLU;
	uint64_t t179 = 72972941LLU;

    t179 = (((x889|x890)^x891)*x892);

    if (t179 != 1572074049024LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x893 = -1219;
	int64_t x894 = -241LL;
	uint16_t x895 = 2U;
	volatile int64_t t180 = -5896293806LL;

    t180 = (((x893|x894)^x895)*x896);

    if (t180 != 195LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x897 = -8580442645246LL;
	volatile int32_t x898 = -175033537;
	uint16_t x899 = 31U;
	int16_t x900 = -76;
	volatile int64_t t181 = 39754707LL;

    t181 = (((x897|x898)^x899)*x900);

    if (t181 != 12971098752LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x905 = INT32_MIN;
	int32_t x906 = INT32_MIN;
	int16_t x908 = -1;
	int32_t t182 = 1989;

    t182 = (((x905|x906)^x907)*x908);

    if (t182 != -2147475117) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x909 = -72LL;
	static uint64_t x910 = 122778LLU;
	int8_t x912 = -1;
	volatile uint64_t t183 = 51066142LLU;

    t183 = (((x909|x910)^x911)*x912);

    if (t183 != 82LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x913 = INT8_MIN;
	int64_t x914 = 8865705633081516LL;
	static int32_t x915 = -5180;
	uint64_t x916 = 2224974LLU;
	static uint64_t t184 = 2401223368444126LLU;

    t184 = (((x913|x914)^x915)*x916);

    if (t184 != 11623264176LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x917 = -1;
	int8_t x918 = INT8_MIN;
	uint64_t x919 = UINT64_MAX;
	int16_t x920 = -7;
	volatile uint64_t t185 = 0LLU;

    t185 = (((x917|x918)^x919)*x920);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x921 = 24155090616174LLU;
	uint32_t x922 = 957011U;
	uint64_t x923 = UINT64_MAX;
	int64_t x924 = INT64_MAX;
	uint64_t t186 = 62932579095LLU;

    t186 = (((x921|x922)^x923)*x924);

    if (t186 != 24155091042176LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x925 = 123U;
	uint32_t x927 = UINT32_MAX;
	int64_t x928 = -530465673599LL;
	int64_t t187 = -3075LL;

    t187 = (((x925|x926)^x927)*x928);

    if (t187 != -17316521448965756LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x929 = UINT8_MAX;
	int16_t x930 = INT16_MAX;
	uint64_t x931 = UINT64_MAX;
	uint32_t x932 = UINT32_MAX;
	volatile uint64_t t188 = 0LLU;

    t188 = (((x929|x930)^x931)*x932);

    if (t188 != 18446603336221229056LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x933 = INT32_MIN;
	int32_t x935 = INT32_MAX;
	int32_t x936 = -1;
	volatile int32_t t189 = 138;

    t189 = (((x933|x934)^x935)*x936);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x937 = 0U;
	int64_t x938 = INT64_MIN;
	uint64_t t190 = 59LLU;

    t190 = (((x937|x938)^x939)*x940);

    if (t190 != 9223436228012523393LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x941 = -1;
	static int8_t x942 = INT8_MIN;
	int8_t x943 = INT8_MIN;
	int64_t x944 = -16LL;
	volatile int64_t t191 = 69LL;

    t191 = (((x941|x942)^x943)*x944);

    if (t191 != -2032LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x945 = -1;
	volatile int8_t x948 = 4;
	static volatile int64_t t192 = 510597459LL;

    t192 = (((x945|x946)^x947)*x948);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x951 = -1;
	int8_t x952 = INT8_MIN;
	int64_t t193 = -654755312LL;

    t193 = (((x949|x950)^x951)*x952);

    if (t193 != -76697646018521856LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x956 = 63102;
	volatile uint32_t t194 = 584U;

    t194 = (((x953|x954)^x955)*x956);

    if (t194 != 569432448U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x958 = INT64_MAX;
	volatile uint32_t x959 = UINT32_MAX;
	volatile int64_t x960 = -1LL;
	int64_t t195 = 2842760943883898LL;

    t195 = (((x957|x958)^x959)*x960);

    if (t195 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x961 = UINT16_MAX;
	static int8_t x962 = INT8_MIN;
	uint8_t x963 = 0U;
	volatile int32_t t196 = -976862132;

    t196 = (((x961|x962)^x963)*x964);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x973 = 1301U;
	int8_t x974 = -1;
	static int8_t x975 = -1;
	int16_t x976 = 6727;

    t197 = (((x973|x974)^x975)*x976);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x981 = INT16_MIN;
	int32_t x982 = -1;
	uint32_t x983 = UINT32_MAX;
	uint32_t x984 = 9142558U;
	uint32_t t198 = 586623U;

    t198 = (((x981|x982)^x983)*x984);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x989 = -1LL;
	volatile int64_t x990 = INT64_MIN;
	uint16_t x991 = UINT16_MAX;
	volatile int64_t t199 = -130283251023014300LL;

    t199 = (((x989|x990)^x991)*x992);

    if (t199 != -786432LL) { NG(); } else { ; }
	
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

