
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

int8_t x1 = 1;
volatile int32_t t0 = 63;
uint16_t x7 = 1U;
static int32_t x8 = INT32_MAX;
int8_t x11 = INT8_MAX;
volatile int32_t t2 = -30;
int32_t x14 = INT32_MAX;
int32_t x15 = INT32_MIN;
int16_t x20 = INT16_MIN;
uint16_t x25 = 24083U;
int32_t x31 = -1;
volatile int32_t t7 = 466;
int32_t x35 = INT32_MIN;
int16_t x36 = -1;
int16_t x40 = -1;
static int64_t x46 = INT64_MAX;
int32_t x58 = INT32_MIN;
int16_t x68 = -3546;
static uint32_t x70 = UINT32_MAX;
int64_t x71 = 717492477998971815LL;
uint16_t x73 = 354U;
int64_t x80 = INT64_MAX;
volatile int32_t t17 = 622291;
int16_t x83 = -335;
uint8_t x91 = 1U;
int32_t x98 = INT32_MIN;
uint32_t x100 = UINT32_MAX;
volatile int64_t t23 = 5961LL;
int32_t x108 = INT32_MAX;
volatile int64_t t24 = -47311683LL;
static int8_t x117 = 4;
static int64_t x120 = INT64_MAX;
volatile int32_t t27 = -362;
int16_t x128 = INT16_MAX;
static volatile int8_t x142 = -1;
static uint64_t x144 = UINT64_MAX;
static uint16_t x146 = UINT16_MAX;
static int32_t x151 = -22914776;
int8_t x157 = -1;
int32_t x158 = INT32_MIN;
int8_t x161 = INT8_MIN;
int32_t x171 = -554387253;
uint32_t x174 = 6U;
volatile uint64_t x175 = 17787508LLU;
int64_t x180 = 45111694645967LL;
static uint8_t x185 = 12U;
static uint16_t x188 = 2U;
int64_t x193 = -31331995148972LL;
int32_t x200 = INT32_MAX;
uint32_t x201 = 218823U;
int64_t x216 = INT64_MIN;
int32_t x221 = -221;
int8_t x225 = 1;
int32_t t52 = 1;
int32_t x231 = -7;
int16_t x239 = INT16_MIN;
int64_t x249 = -17LL;
volatile uint16_t x251 = UINT16_MAX;
int8_t x258 = -1;
uint64_t x272 = 261739074511806907LLU;
static int8_t x274 = INT8_MAX;
uint64_t x283 = UINT64_MAX;
uint16_t x289 = 8739U;
static int32_t x292 = -1;
int16_t x294 = 1;
uint32_t x297 = 5168U;
int32_t x299 = 6213;
int16_t x301 = -1;
volatile int32_t t72 = 5772500;
int16_t x315 = INT16_MIN;
static int32_t x321 = -1;
volatile uint32_t x327 = 333270346U;
static int32_t x328 = -15546636;
static int16_t x330 = INT16_MIN;
int64_t x331 = INT64_MIN;
int32_t t78 = -1812;
int32_t t79 = 906;
int32_t x351 = -1;
volatile int64_t x352 = -380977205259638LL;
uint16_t x357 = UINT16_MAX;
int64_t x360 = INT64_MIN;
volatile uint64_t x365 = 88LLU;
uint64_t x369 = 49134110246114069LLU;
int64_t x375 = INT64_MAX;
volatile int32_t t88 = -255;
volatile int16_t x381 = INT16_MIN;
volatile uint8_t x390 = UINT8_MAX;
static int64_t x391 = INT64_MIN;
int32_t t91 = 501;
static int64_t x393 = INT64_MIN;
static int64_t x398 = -1LL;
int32_t x399 = 7886;
static uint64_t x407 = 28087450054987437LLU;
static volatile uint64_t x412 = 1030191986466828LLU;
int16_t x415 = INT16_MIN;
uint16_t x417 = 2U;
volatile int32_t t97 = -6664;
volatile uint64_t x422 = 47634970LLU;
static int32_t x427 = INT32_MIN;
static uint8_t x428 = 1U;
volatile int64_t x430 = INT64_MIN;
uint32_t x432 = 856209234U;
static int64_t x437 = 2058966LL;
static int32_t x445 = INT32_MIN;
int32_t t104 = INT32_MIN;
int8_t x449 = INT8_MIN;
int64_t x460 = -1LL;
int16_t x463 = -59;
int16_t x481 = -1;
uint16_t x482 = 64U;
volatile uint8_t x483 = 59U;
static int32_t x486 = -1;
volatile int64_t x488 = -1LL;
static int32_t t115 = 380;
volatile uint64_t x493 = 558522395339482LLU;
static volatile int32_t x494 = 1611;
int32_t x500 = INT32_MAX;
volatile uint16_t x504 = 162U;
volatile int32_t t118 = 43;
volatile int32_t x508 = INT32_MAX;
uint8_t x516 = 15U;
int64_t x518 = -1LL;
static int64_t x524 = INT64_MIN;
uint32_t t123 = 1167169U;
uint16_t x532 = 50U;
static int32_t x539 = -1;
int16_t x545 = INT16_MIN;
int32_t t130 = -471269;
uint64_t x567 = 331LLU;
static int32_t t135 = 0;
uint32_t x584 = 1390U;
int16_t x592 = -79;
uint16_t x596 = 940U;
static uint16_t x598 = UINT16_MAX;
volatile int64_t x608 = INT64_MAX;
uint32_t x610 = 160U;
int32_t t145 = -1;
int64_t x614 = -1LL;
volatile uint32_t t147 = 730U;
uint64_t x622 = 180131779LLU;
volatile int32_t x630 = INT32_MIN;
static int8_t x633 = -2;
static volatile int64_t x636 = INT64_MAX;
volatile int32_t t155 = 31;
int32_t x658 = INT32_MIN;
int64_t x668 = INT64_MIN;
volatile int32_t t159 = -164717;
static volatile int32_t x675 = -1;
int8_t x676 = INT8_MIN;
int16_t x683 = INT16_MIN;
int32_t x686 = INT32_MIN;
int64_t x693 = INT64_MIN;
int16_t x695 = -1;
int16_t x698 = 43;
volatile int64_t x704 = INT64_MIN;
volatile int32_t t167 = -2;
volatile int32_t t168 = -66980984;
volatile uint64_t x710 = UINT64_MAX;
int32_t x713 = -1;
int16_t x728 = -1;
volatile uint64_t x735 = 828LLU;
static uint64_t x743 = UINT64_MAX;
static uint16_t x747 = 49U;
int8_t x748 = -1;
volatile uint64_t x751 = UINT64_MAX;
int32_t x753 = INT32_MIN;
uint16_t x754 = UINT16_MAX;
int8_t x756 = 1;
uint16_t x758 = UINT16_MAX;
int32_t x767 = INT32_MIN;
volatile uint16_t x768 = UINT16_MAX;
volatile int64_t t182 = -68999LL;
static int16_t x774 = INT16_MAX;
int16_t x791 = INT16_MIN;
volatile int32_t t188 = 54971;
volatile int32_t x795 = INT32_MIN;
volatile uint32_t x797 = 1106281U;
int64_t x800 = -1LL;
uint8_t x802 = UINT8_MAX;
static uint16_t x808 = UINT16_MAX;
int64_t x809 = -29830016912LL;
uint64_t x811 = 230861LLU;
volatile int32_t t194 = -16060797;
int8_t x819 = -1;
static volatile int32_t t197 = 23;
int8_t x829 = INT8_MIN;
int64_t x830 = INT64_MAX;
static volatile int64_t x834 = -1LL;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 3984U;
	int16_t x4 = -1;

    t0 = (x1-(x2<=(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = 38;
	volatile int32_t t1 = 132162;

    t1 = (x5-(x6<=(x7!=x8)));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	volatile int8_t x12 = INT8_MIN;

    t2 = (x9-(x10<=(x11!=x12)));

    if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	volatile int8_t x16 = INT8_MIN;
	int32_t t3 = -9007;

    t3 = (x13-(x14<=(x15!=x16)));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -8942;
	int32_t x18 = 597;
	static int8_t x19 = -1;
	int32_t t4 = 1287801;

    t4 = (x17-(x18<=(x19!=x20)));

    if (t4 != -8942) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 262721064694412491LL;
	static volatile int32_t x22 = INT32_MIN;
	int16_t x23 = -1;
	int32_t x24 = 11720426;
	int64_t t5 = -81LL;

    t5 = (x21-(x22<=(x23!=x24)));

    if (t5 != 262721064694412490LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = INT16_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = 124279907;

    t6 = (x25-(x26<=(x27!=x28)));

    if (t6 != 24083) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 78U;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x32 = 81018076U;

    t7 = (x29-(x30<=(x31!=x32)));

    if (t7 != 77) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	static int32_t x34 = INT32_MAX;
	static volatile int32_t t8 = 24;

    t8 = (x33-(x34<=(x35!=x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -1;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -217393;

    t9 = (x37-(x38<=(x39!=x40)));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	static uint16_t x47 = 2667U;
	int16_t x48 = -1;
	volatile int32_t t10 = 1;

    t10 = (x45-(x46<=(x47!=x48)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = -1;
	int16_t x50 = INT16_MAX;
	static volatile int8_t x51 = INT8_MAX;
	volatile int32_t x52 = INT32_MAX;
	static volatile int32_t t11 = 121458;

    t11 = (x49-(x50<=(x51!=x52)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -495502;
	static volatile int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t12 = 40525299;

    t12 = (x57-(x58<=(x59!=x60)));

    if (t12 != -495503) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	int32_t x62 = -1;
	static uint64_t x63 = 936482338LLU;
	uint8_t x64 = 0U;
	volatile int32_t t13 = -13524;

    t13 = (x61-(x62<=(x63!=x64)));

    if (t13 != -32769) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MAX;
	uint8_t x66 = UINT8_MAX;
	uint32_t x67 = UINT32_MAX;
	static int32_t t14 = -1710886;

    t14 = (x65-(x66<=(x67!=x68)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = UINT8_MAX;
	uint32_t x72 = 4U;
	static int32_t t15 = -35514678;

    t15 = (x69-(x70<=(x71!=x72)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x74 = 216907800522LLU;
	int64_t x75 = INT64_MAX;
	volatile int32_t x76 = -5952541;
	volatile int32_t t16 = 133391557;

    t16 = (x73-(x74<=(x75!=x76)));

    if (t16 != 354) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -1;
	int8_t x78 = -44;
	int16_t x79 = -1;

    t17 = (x77-(x78<=(x79!=x80)));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x81 = 26U;
	int8_t x82 = -10;
	volatile uint32_t x84 = UINT32_MAX;
	volatile int32_t t18 = 25;

    t18 = (x81-(x82<=(x83!=x84)));

    if (t18 != 25) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x85 = INT64_MAX;
	int16_t x86 = -1722;
	int64_t x87 = -1LL;
	uint32_t x88 = 5951532U;
	int64_t t19 = -10478202LL;

    t19 = (x85-(x86<=(x87!=x88)));

    if (t19 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x89 = INT64_MIN;
	uint64_t x90 = 26LLU;
	uint16_t x92 = 0U;
	int64_t t20 = INT64_MIN;

    t20 = (x89-(x90<=(x91!=x92)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 621LLU;
	static uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	volatile int8_t x96 = INT8_MAX;
	static volatile uint64_t t21 = 112169219LLU;

    t21 = (x93-(x94<=(x95!=x96)));

    if (t21 != 621LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t t22 = -1194173560051801LL;

    t22 = (x97-(x98<=(x99!=x100)));

    if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = -2LL;
	int32_t x102 = INT32_MAX;
	static uint64_t x103 = 242684963684LLU;
	int16_t x104 = -1;

    t23 = (x101-(x102<=(x103!=x104)));

    if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x105 = -1LL;
	static int32_t x106 = INT32_MAX;
	uint8_t x107 = 7U;

    t24 = (x105-(x106<=(x107!=x108)));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MIN;
	int8_t x112 = 27;
	volatile int32_t t25 = -15;

    t25 = (x109-(x110<=(x111!=x112)));

    if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x118 = INT8_MIN;
	uint64_t x119 = UINT64_MAX;
	volatile int32_t t26 = 7547;

    t26 = (x117-(x118<=(x119!=x120)));

    if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = 1;
	static int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;

    t27 = (x121-(x122<=(x123!=x124)));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MAX;
	int32_t t28 = -160101;

    t28 = (x125-(x126<=(x127!=x128)));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x129 = 7U;
	volatile int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	int8_t x132 = -1;
	int32_t t29 = 2310;

    t29 = (x129-(x130<=(x131!=x132)));

    if (t29 != 7) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = 13;
	volatile int8_t x134 = -2;
	volatile int64_t x135 = -1LL;
	volatile uint16_t x136 = 14U;
	volatile int32_t t30 = -47910;

    t30 = (x133-(x134<=(x135!=x136)));

    if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = UINT32_MAX;
	static int64_t x138 = 1105304355LL;
	int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	volatile uint32_t t31 = UINT32_MAX;

    t31 = (x137-(x138<=(x139!=x140)));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x141 = -1;
	uint64_t x143 = 403254816685045747LLU;
	int32_t t32 = 977828484;

    t32 = (x141-(x142<=(x143!=x144)));

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x145 = 353195U;
	int8_t x147 = 20;
	static int16_t x148 = INT16_MAX;
	static uint32_t t33 = 2955U;

    t33 = (x145-(x146<=(x147!=x148)));

    if (t33 != 353195U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = -1;
	int8_t x150 = INT8_MAX;
	int8_t x152 = -10;
	int32_t t34 = -112;

    t34 = (x149-(x150<=(x151!=x152)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 448948075568425LLU;
	int32_t x154 = 3481;
	static int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	uint64_t t35 = 257518175LLU;

    t35 = (x153-(x154<=(x155!=x156)));

    if (t35 != 448948075568425LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x159 = INT8_MAX;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -57;

    t36 = (x157-(x158<=(x159!=x160)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x162 = INT32_MIN;
	volatile uint32_t x163 = UINT32_MAX;
	static int8_t x164 = -5;
	int32_t t37 = -1245;

    t37 = (x161-(x162<=(x163!=x164)));

    if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = 0;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t38 = -13874813;

    t38 = (x165-(x166<=(x167!=x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x169 = 0U;
	int16_t x170 = -1;
	int16_t x172 = 5427;
	static volatile int32_t t39 = -17860;

    t39 = (x169-(x170<=(x171!=x172)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = INT32_MIN;
	int8_t x176 = 13;
	static int32_t t40 = INT32_MIN;

    t40 = (x173-(x174<=(x175!=x176)));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = -2678886149LL;
	int64_t x178 = INT64_MAX;
	int32_t x179 = INT32_MAX;
	int64_t t41 = -162LL;

    t41 = (x177-(x178<=(x179!=x180)));

    if (t41 != -2678886149LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x181 = 418555U;
	int16_t x182 = INT16_MIN;
	static volatile int64_t x183 = INT64_MAX;
	int8_t x184 = 51;
	uint32_t t42 = 1022840U;

    t42 = (x181-(x182<=(x183!=x184)));

    if (t42 != 418554U) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile int32_t t43 = 11;

    t43 = (x185-(x186<=(x187!=x188)));

    if (t43 != 11) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	int32_t x190 = 1;
	static uint32_t x191 = 4610568U;
	volatile int16_t x192 = INT16_MIN;
	int32_t t44 = 462757448;

    t44 = (x189-(x190<=(x191!=x192)));

    if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x194 = -1;
	volatile int32_t x195 = 9553;
	uint32_t x196 = 1U;
	int64_t t45 = 7999863714LL;

    t45 = (x193-(x194<=(x195!=x196)));

    if (t45 != -31331995148973LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = -6;
	static volatile int64_t x198 = -714162822923LL;
	volatile int32_t x199 = INT32_MIN;
	int32_t t46 = -19;

    t46 = (x197-(x198<=(x199!=x200)));

    if (t46 != -7) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 1616568784U;
	uint32_t x204 = 84273538U;
	uint32_t t47 = 191U;

    t47 = (x201-(x202<=(x203!=x204)));

    if (t47 != 218823U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = INT32_MAX;
	volatile uint64_t x210 = 334892216LLU;
	static volatile int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	int32_t t48 = INT32_MAX;

    t48 = (x209-(x210<=(x211!=x212)));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x213 = UINT32_MAX;
	int16_t x214 = -1;
	static uint64_t x215 = 7274239513129400846LLU;
	static uint32_t t49 = 7U;

    t49 = (x213-(x214<=(x215!=x216)));

    if (t49 != 4294967294U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	volatile uint16_t x219 = 2033U;
	uint8_t x220 = UINT8_MAX;
	int64_t t50 = 17253048764935LL;

    t50 = (x217-(x218<=(x219!=x220)));

    if (t50 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x222 = 6U;
	int32_t x223 = INT32_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t51 = -1;

    t51 = (x221-(x222<=(x223!=x224)));

    if (t51 != -221) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = -1;

    t52 = (x225-(x226<=(x227!=x228)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = -217;
	int8_t x230 = 0;
	uint16_t x232 = 1739U;
	volatile int32_t t53 = 7;

    t53 = (x229-(x230<=(x231!=x232)));

    if (t53 != -218) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = UINT16_MAX;
	static int64_t x234 = -56136938011LL;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t54 = -5650830;

    t54 = (x233-(x234<=(x235!=x236)));

    if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = INT64_MIN;
	volatile int32_t x238 = INT32_MAX;
	volatile uint8_t x240 = 4U;
	int64_t t55 = INT64_MIN;

    t55 = (x237-(x238<=(x239!=x240)));

    if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = INT16_MIN;
	int16_t x242 = 8397;
	int16_t x243 = 42;
	static int32_t x244 = INT32_MIN;
	int32_t t56 = -1371740;

    t56 = (x241-(x242<=(x243!=x244)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x245 = 7340109309699LL;
	uint32_t x246 = 379U;
	int64_t x247 = INT64_MIN;
	int8_t x248 = -28;
	volatile int64_t t57 = 2326968169785LL;

    t57 = (x245-(x246<=(x247!=x248)));

    if (t57 != 7340109309699LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x250 = INT64_MIN;
	static uint16_t x252 = UINT16_MAX;
	static volatile int64_t t58 = 575013612750LL;

    t58 = (x249-(x250<=(x251!=x252)));

    if (t58 != -18LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x253 = INT16_MIN;
	uint32_t x254 = 53073559U;
	volatile int8_t x255 = 1;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t59 = 57081;

    t59 = (x253-(x254<=(x255!=x256)));

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x257 = 22290LLU;
	volatile int8_t x259 = INT8_MAX;
	static int16_t x260 = -1;
	volatile uint64_t t60 = 247832907329LLU;

    t60 = (x257-(x258<=(x259!=x260)));

    if (t60 != 22289LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x261 = 8847557691401LLU;
	int64_t x262 = 1LL;
	volatile uint8_t x263 = 18U;
	uint8_t x264 = 6U;
	uint64_t t61 = 3822388LLU;

    t61 = (x261-(x262<=(x263!=x264)));

    if (t61 != 8847557691400LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	uint8_t x266 = 15U;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	volatile int32_t t62 = 3704;

    t62 = (x265-(x266<=(x267!=x268)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x269 = 13U;
	int16_t x270 = 0;
	volatile int32_t x271 = 527245087;
	int32_t t63 = 49466423;

    t63 = (x269-(x270<=(x271!=x272)));

    if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x273 = INT16_MIN;
	uint32_t x275 = 14391U;
	uint64_t x276 = 33LLU;
	int32_t t64 = -176838;

    t64 = (x273-(x274<=(x275!=x276)));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x277 = INT8_MIN;
	static uint8_t x278 = 25U;
	volatile int8_t x279 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t65 = -21;

    t65 = (x277-(x278<=(x279!=x280)));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x281 = 13;
	int64_t x282 = -1LL;
	int8_t x284 = -1;
	int32_t t66 = 3;

    t66 = (x281-(x282<=(x283!=x284)));

    if (t66 != 12) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = INT64_MIN;
	static int8_t x286 = 61;
	int64_t x287 = INT64_MIN;
	static int16_t x288 = 1843;
	int64_t t67 = INT64_MIN;

    t67 = (x285-(x286<=(x287!=x288)));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	volatile int32_t t68 = -24974434;

    t68 = (x289-(x290<=(x291!=x292)));

    if (t68 != 8738) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MAX;
	volatile int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	int32_t t69 = -267;

    t69 = (x293-(x294<=(x295!=x296)));

    if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x298 = UINT32_MAX;
	static int32_t x300 = INT32_MAX;
	static uint32_t t70 = 5U;

    t70 = (x297-(x298<=(x299!=x300)));

    if (t70 != 5168U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x302 = INT64_MAX;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = -43;
	volatile int32_t t71 = 95218678;

    t71 = (x301-(x302<=(x303!=x304)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = 0;
	volatile uint16_t x306 = 23287U;
	static uint64_t x307 = UINT64_MAX;
	static volatile int32_t x308 = INT32_MAX;

    t72 = (x305-(x306<=(x307!=x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x313 = INT64_MAX;
	uint16_t x314 = 1U;
	int32_t x316 = INT32_MAX;
	volatile int64_t t73 = -1730849141225LL;

    t73 = (x313-(x314<=(x315!=x316)));

    if (t73 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x317 = 28U;
	static int32_t x318 = INT32_MAX;
	volatile int8_t x319 = 1;
	int32_t x320 = -1;
	uint32_t t74 = 1U;

    t74 = (x317-(x318<=(x319!=x320)));

    if (t74 != 28U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x322 = 0;
	int64_t x323 = INT64_MIN;
	static int8_t x324 = INT8_MIN;
	int32_t t75 = -6;

    t75 = (x321-(x322<=(x323!=x324)));

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x325 = INT64_MAX;
	int16_t x326 = INT16_MIN;
	static volatile int64_t t76 = -3LL;

    t76 = (x325-(x326<=(x327!=x328)));

    if (t76 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x329 = 3LLU;
	int32_t x332 = INT32_MAX;
	static uint64_t t77 = 694551606LLU;

    t77 = (x329-(x330<=(x331!=x332)));

    if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = INT8_MAX;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	uint32_t x336 = 40U;

    t78 = (x333-(x334<=(x335!=x336)));

    if (t78 != 126) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x337 = 6U;
	uint8_t x338 = 1U;
	int64_t x339 = 1841LL;
	uint16_t x340 = UINT16_MAX;

    t79 = (x337-(x338<=(x339!=x340)));

    if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x345 = INT32_MIN;
	static int8_t x346 = 15;
	int32_t x347 = INT32_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t80 = INT32_MIN;

    t80 = (x345-(x346<=(x347!=x348)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x349 = -1;
	int64_t x350 = -304375192001210LL;
	int32_t t81 = -3;

    t81 = (x349-(x350<=(x351!=x352)));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	int16_t x355 = -1;
	volatile uint64_t x356 = 400LLU;
	volatile int64_t t82 = 33638869574LL;

    t82 = (x353-(x354<=(x355!=x356)));

    if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x358 = -18;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t83 = -27512;

    t83 = (x357-(x358<=(x359!=x360)));

    if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MAX;
	uint8_t x362 = 22U;
	volatile int16_t x363 = INT16_MIN;
	int16_t x364 = -1;
	volatile int32_t t84 = -434639;

    t84 = (x361-(x362<=(x363!=x364)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x366 = INT16_MIN;
	static volatile int32_t x367 = -1;
	int64_t x368 = INT64_MAX;
	static uint64_t t85 = 1825050376557LLU;

    t85 = (x365-(x366<=(x367!=x368)));

    if (t85 != 87LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x370 = -2LL;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = 1058661459364417969LL;
	uint64_t t86 = 44145957844049708LLU;

    t86 = (x369-(x370<=(x371!=x372)));

    if (t86 != 49134110246114068LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x373 = INT64_MIN;
	static volatile int8_t x374 = 29;
	uint8_t x376 = 0U;
	volatile int64_t t87 = INT64_MIN;

    t87 = (x373-(x374<=(x375!=x376)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x377 = 0;
	int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	int32_t x380 = -177084;

    t88 = (x377-(x378<=(x379!=x380)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x382 = INT32_MAX;
	uint32_t x383 = 22913U;
	volatile uint64_t x384 = UINT64_MAX;
	volatile int32_t t89 = 1;

    t89 = (x381-(x382<=(x383!=x384)));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MAX;
	static uint64_t x387 = 30115006LLU;
	volatile int32_t x388 = 27731;
	int32_t t90 = INT32_MIN;

    t90 = (x385-(x386<=(x387!=x388)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x389 = INT16_MIN;
	static int32_t x392 = 246946383;

    t91 = (x389-(x390<=(x391!=x392)));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x394 = 26957328;
	volatile int8_t x395 = -5;
	volatile int16_t x396 = INT16_MAX;
	int64_t t92 = INT64_MIN;

    t92 = (x393-(x394<=(x395!=x396)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x397 = -1;
	static uint16_t x400 = UINT16_MAX;
	volatile int32_t t93 = 20532383;

    t93 = (x397-(x398<=(x399!=x400)));

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = -4198273;
	int64_t x406 = INT64_MAX;
	int64_t x408 = -1744801290797LL;
	volatile int32_t t94 = 12737750;

    t94 = (x405-(x406<=(x407!=x408)));

    if (t94 != -4198273) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MAX;
	volatile uint32_t x411 = 3182U;
	int32_t t95 = -1;

    t95 = (x409-(x410<=(x411!=x412)));

    if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x413 = 13U;
	uint32_t x414 = 5U;
	int8_t x416 = INT8_MIN;
	volatile int32_t t96 = 8356423;

    t96 = (x413-(x414<=(x415!=x416)));

    if (t96 != 13) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	uint16_t x420 = 65U;

    t97 = (x417-(x418<=(x419!=x420)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x421 = -1;
	static int64_t x423 = -198361838001186LL;
	static volatile int8_t x424 = INT8_MIN;
	static int32_t t98 = 11683853;

    t98 = (x421-(x422<=(x423!=x424)));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	volatile int32_t t99 = 46;

    t99 = (x425-(x426<=(x427!=x428)));

    if (t99 != -32769) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x429 = UINT8_MAX;
	static int64_t x431 = INT64_MAX;
	volatile int32_t t100 = 41;

    t100 = (x429-(x430<=(x431!=x432)));

    if (t100 != 254) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x433 = INT64_MAX;
	uint32_t x434 = 4169U;
	int32_t x435 = -58868171;
	uint64_t x436 = 349566241LLU;
	volatile int64_t t101 = INT64_MAX;

    t101 = (x433-(x434<=(x435!=x436)));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x438 = UINT64_MAX;
	static int64_t x439 = INT64_MAX;
	static int8_t x440 = -1;
	int64_t t102 = -266582839943375947LL;

    t102 = (x437-(x438<=(x439!=x440)));

    if (t102 != 2058966LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x441 = UINT16_MAX;
	volatile int64_t x442 = -1LL;
	int16_t x443 = 172;
	int64_t x444 = 1141657802233LL;
	volatile int32_t t103 = 0;

    t103 = (x441-(x442<=(x443!=x444)));

    if (t103 != 65534) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x446 = 1597685718LL;
	int32_t x447 = INT32_MIN;
	volatile int8_t x448 = 0;

    t104 = (x445-(x446<=(x447!=x448)));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x450 = 2U;
	static volatile int16_t x451 = 32;
	uint16_t x452 = 911U;
	volatile int32_t t105 = 25458979;

    t105 = (x449-(x450<=(x451!=x452)));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x453 = 106U;
	static volatile int16_t x454 = -1;
	int16_t x455 = INT16_MAX;
	static int64_t x456 = -12966459255065LL;
	volatile int32_t t106 = -1300879;

    t106 = (x453-(x454<=(x455!=x456)));

    if (t106 != 105) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x457 = 4127LLU;
	int16_t x458 = -100;
	static volatile int8_t x459 = INT8_MAX;
	volatile uint64_t t107 = 3142192415LLU;

    t107 = (x457-(x458<=(x459!=x460)));

    if (t107 != 4126LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = 321;
	int16_t x462 = INT16_MIN;
	static volatile int16_t x464 = 121;
	int32_t t108 = 2;

    t108 = (x461-(x462<=(x463!=x464)));

    if (t108 != 320) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x465 = 0;
	static uint16_t x466 = 3720U;
	int64_t x467 = -1LL;
	volatile int16_t x468 = -12;
	int32_t t109 = -19067747;

    t109 = (x465-(x466<=(x467!=x468)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x469 = 695097;
	static volatile int8_t x470 = INT8_MIN;
	uint32_t x471 = 87872U;
	int32_t x472 = 652;
	volatile int32_t t110 = -20;

    t110 = (x469-(x470<=(x471!=x472)));

    if (t110 != 695096) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	volatile uint64_t x474 = UINT64_MAX;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = INT8_MIN;
	volatile int32_t t111 = 1;

    t111 = (x473-(x474<=(x475!=x476)));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x477 = 85U;
	static int16_t x478 = 1;
	volatile int64_t x479 = 56152LL;
	int64_t x480 = INT64_MIN;
	volatile uint32_t t112 = 57U;

    t112 = (x477-(x478<=(x479!=x480)));

    if (t112 != 84U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x484 = -1;
	static int32_t t113 = -231863355;

    t113 = (x481-(x482<=(x483!=x484)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x485 = 2;
	volatile int16_t x487 = INT16_MIN;
	static volatile int32_t t114 = 248;

    t114 = (x485-(x486<=(x487!=x488)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x489 = 201U;
	int8_t x490 = 7;
	volatile int16_t x491 = 5386;
	static int8_t x492 = INT8_MIN;

    t115 = (x489-(x490<=(x491!=x492)));

    if (t115 != 201) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x495 = INT16_MIN;
	static uint64_t x496 = UINT64_MAX;
	volatile uint64_t t116 = 22668206238441LLU;

    t116 = (x493-(x494<=(x495!=x496)));

    if (t116 != 558522395339482LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x497 = UINT64_MAX;
	int32_t x498 = -1;
	volatile uint32_t x499 = 66U;
	uint64_t t117 = 403215543475259572LLU;

    t117 = (x497-(x498<=(x499!=x500)));

    if (t117 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x501 = -1;
	volatile uint64_t x502 = UINT64_MAX;
	int16_t x503 = INT16_MIN;

    t118 = (x501-(x502<=(x503!=x504)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = -1;
	uint16_t x506 = 174U;
	int32_t x507 = INT32_MIN;
	int32_t t119 = 25881684;

    t119 = (x505-(x506<=(x507!=x508)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x509 = INT16_MAX;
	uint64_t x510 = UINT64_MAX;
	static int64_t x511 = INT64_MIN;
	static uint8_t x512 = 11U;
	int32_t t120 = 0;

    t120 = (x509-(x510<=(x511!=x512)));

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x513 = 89802838711965202LLU;
	int16_t x514 = INT16_MIN;
	uint16_t x515 = 0U;
	volatile uint64_t t121 = 2LLU;

    t121 = (x513-(x514<=(x515!=x516)));

    if (t121 != 89802838711965201LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x517 = 1211LLU;
	int8_t x519 = INT8_MIN;
	static int8_t x520 = 31;
	uint64_t t122 = 1997075556486508399LLU;

    t122 = (x517-(x518<=(x519!=x520)));

    if (t122 != 1210LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x521 = 196U;
	volatile uint64_t x522 = UINT64_MAX;
	volatile int64_t x523 = INT64_MAX;

    t123 = (x521-(x522<=(x523!=x524)));

    if (t123 != 196U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x525 = 416U;
	uint32_t x526 = 2166U;
	int64_t x527 = INT64_MAX;
	volatile int8_t x528 = -1;
	uint32_t t124 = 494412U;

    t124 = (x525-(x526<=(x527!=x528)));

    if (t124 != 416U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x529 = UINT8_MAX;
	volatile int8_t x530 = INT8_MAX;
	int16_t x531 = -1;
	int32_t t125 = -6789995;

    t125 = (x529-(x530<=(x531!=x532)));

    if (t125 != 255) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = 23;
	uint16_t x534 = 9U;
	uint64_t x535 = 4984510638877LLU;
	volatile int16_t x536 = INT16_MIN;
	volatile int32_t t126 = 7154066;

    t126 = (x533-(x534<=(x535!=x536)));

    if (t126 != 23) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x537 = INT8_MIN;
	static volatile int32_t x538 = -1;
	volatile int8_t x540 = INT8_MAX;
	int32_t t127 = -8;

    t127 = (x537-(x538<=(x539!=x540)));

    if (t127 != -129) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x541 = INT64_MAX;
	volatile int8_t x542 = -1;
	volatile int32_t x543 = 74;
	volatile int16_t x544 = -1;
	volatile int64_t t128 = 2899824864461LL;

    t128 = (x541-(x542<=(x543!=x544)));

    if (t128 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x546 = -1;
	int32_t x547 = 67038;
	static volatile int32_t x548 = INT32_MIN;
	volatile int32_t t129 = -644622615;

    t129 = (x545-(x546<=(x547!=x548)));

    if (t129 != -32769) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x549 = UINT16_MAX;
	int16_t x550 = -20;
	int32_t x551 = INT32_MIN;
	volatile int64_t x552 = -1LL;

    t130 = (x549-(x550<=(x551!=x552)));

    if (t130 != 65534) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x553 = 0;
	int16_t x554 = -1;
	uint64_t x555 = UINT64_MAX;
	static int32_t x556 = 204;
	static volatile int32_t t131 = -18638935;

    t131 = (x553-(x554<=(x555!=x556)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	volatile uint16_t x560 = 4777U;
	static volatile int32_t t132 = 61120154;

    t132 = (x557-(x558<=(x559!=x560)));

    if (t132 != -32769) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x561 = INT64_MAX;
	int8_t x562 = 3;
	int8_t x563 = INT8_MAX;
	uint32_t x564 = 294021736U;
	static volatile int64_t t133 = INT64_MAX;

    t133 = (x561-(x562<=(x563!=x564)));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	static int8_t x566 = 1;
	int16_t x568 = INT16_MAX;
	int32_t t134 = 20;

    t134 = (x565-(x566<=(x567!=x568)));

    if (t134 != 65534) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x569 = INT8_MIN;
	uint8_t x570 = 0U;
	int64_t x571 = INT64_MIN;
	int32_t x572 = INT32_MAX;

    t135 = (x569-(x570<=(x571!=x572)));

    if (t135 != -129) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x573 = INT32_MIN;
	static uint64_t x574 = 7029816843915159887LLU;
	int32_t x575 = INT32_MIN;
	int16_t x576 = INT16_MIN;
	int32_t t136 = INT32_MIN;

    t136 = (x573-(x574<=(x575!=x576)));

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x577 = -1LL;
	int16_t x578 = -1;
	int32_t x579 = 0;
	uint64_t x580 = 39LLU;
	int64_t t137 = 536874208079404674LL;

    t137 = (x577-(x578<=(x579!=x580)));

    if (t137 != -2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x581 = INT64_MAX;
	uint32_t x582 = 54985U;
	static int64_t x583 = 83LL;
	volatile int64_t t138 = INT64_MAX;

    t138 = (x581-(x582<=(x583!=x584)));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x585 = INT32_MAX;
	uint64_t x586 = 22247087615538LLU;
	int8_t x587 = -1;
	uint64_t x588 = 59598LLU;
	int32_t t139 = INT32_MAX;

    t139 = (x585-(x586<=(x587!=x588)));

    if (t139 != INT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x589 = UINT32_MAX;
	uint64_t x590 = 28795759465LLU;
	static int64_t x591 = INT64_MIN;
	volatile uint32_t t140 = UINT32_MAX;

    t140 = (x589-(x590<=(x591!=x592)));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x593 = 3739LL;
	int64_t x594 = -1LL;
	volatile uint8_t x595 = UINT8_MAX;
	static int64_t t141 = 1815673298821LL;

    t141 = (x593-(x594<=(x595!=x596)));

    if (t141 != 3738LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x597 = 1007355819U;
	int32_t x599 = INT32_MIN;
	int8_t x600 = -3;
	uint32_t t142 = 841U;

    t142 = (x597-(x598<=(x599!=x600)));

    if (t142 != 1007355819U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x601 = -1LL;
	static int16_t x602 = -1;
	uint8_t x603 = 70U;
	int32_t x604 = -1;
	volatile int64_t t143 = 318110LL;

    t143 = (x601-(x602<=(x603!=x604)));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x605 = -1982;
	uint64_t x606 = UINT64_MAX;
	static volatile uint32_t x607 = UINT32_MAX;
	volatile int32_t t144 = 73;

    t144 = (x605-(x606<=(x607!=x608)));

    if (t144 != -1982) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x609 = -28;
	uint32_t x611 = UINT32_MAX;
	uint32_t x612 = 89387507U;

    t145 = (x609-(x610<=(x611!=x612)));

    if (t145 != -28) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x613 = -888007435744762LL;
	int32_t x615 = INT32_MIN;
	volatile int8_t x616 = INT8_MIN;
	int64_t t146 = 93596261LL;

    t146 = (x613-(x614<=(x615!=x616)));

    if (t146 != -888007435744763LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x617 = UINT32_MAX;
	static int32_t x618 = INT32_MIN;
	int8_t x619 = 7;
	uint32_t x620 = 140U;

    t147 = (x617-(x618<=(x619!=x620)));

    if (t147 != 4294967294U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x621 = INT64_MIN;
	volatile int8_t x623 = INT8_MIN;
	uint8_t x624 = 38U;
	volatile int64_t t148 = INT64_MIN;

    t148 = (x621-(x622<=(x623!=x624)));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x625 = 307U;
	int32_t x626 = 998893453;
	int64_t x627 = -1LL;
	static int16_t x628 = INT16_MIN;
	static int32_t t149 = 29;

    t149 = (x625-(x626<=(x627!=x628)));

    if (t149 != 307) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x629 = 165U;
	int16_t x631 = INT16_MIN;
	static volatile int16_t x632 = INT16_MAX;
	int32_t t150 = -42722;

    t150 = (x629-(x630<=(x631!=x632)));

    if (t150 != 164) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x634 = -112592834;
	uint32_t x635 = 265134948U;
	volatile int32_t t151 = -3455171;

    t151 = (x633-(x634<=(x635!=x636)));

    if (t151 != -3) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x637 = INT8_MIN;
	volatile int64_t x638 = 21705446000928325LL;
	static int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;
	int32_t t152 = -964;

    t152 = (x637-(x638<=(x639!=x640)));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	static uint8_t x646 = 5U;
	int32_t x647 = 415;
	static int32_t x648 = -1;
	int32_t t153 = -22043;

    t153 = (x645-(x646<=(x647!=x648)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x649 = -1;
	int16_t x650 = -109;
	int16_t x651 = INT16_MIN;
	static uint32_t x652 = 17360U;
	int32_t t154 = 106;

    t154 = (x649-(x650<=(x651!=x652)));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x653 = 106U;
	int32_t x654 = INT32_MIN;
	int16_t x655 = INT16_MAX;
	uint32_t x656 = UINT32_MAX;

    t155 = (x653-(x654<=(x655!=x656)));

    if (t155 != 105) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x657 = 0;
	uint16_t x659 = 3910U;
	int16_t x660 = INT16_MIN;
	volatile int32_t t156 = 8842785;

    t156 = (x657-(x658<=(x659!=x660)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x661 = 3U;
	static int16_t x662 = INT16_MIN;
	int8_t x663 = 6;
	int64_t x664 = INT64_MIN;
	int32_t t157 = -1;

    t157 = (x661-(x662<=(x663!=x664)));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = INT8_MIN;
	static uint8_t x666 = 71U;
	int32_t x667 = -135466810;
	int32_t t158 = -6365;

    t158 = (x665-(x666<=(x667!=x668)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x669 = 26;
	uint32_t x670 = 2U;
	static int64_t x671 = 1193889655LL;
	uint32_t x672 = 53U;

    t159 = (x669-(x670<=(x671!=x672)));

    if (t159 != 26) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x673 = 38U;
	uint8_t x674 = 7U;
	volatile int32_t t160 = 38571929;

    t160 = (x673-(x674<=(x675!=x676)));

    if (t160 != 38) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x677 = 502597482U;
	uint64_t x678 = 3890131LLU;
	volatile int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MIN;
	uint32_t t161 = 63530417U;

    t161 = (x677-(x678<=(x679!=x680)));

    if (t161 != 502597482U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = -1LL;
	static volatile int16_t x682 = INT16_MIN;
	volatile uint16_t x684 = 12U;
	int64_t t162 = 34592339592581059LL;

    t162 = (x681-(x682<=(x683!=x684)));

    if (t162 != -2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x685 = INT16_MIN;
	uint16_t x687 = 1670U;
	int16_t x688 = 7231;
	int32_t t163 = 1;

    t163 = (x685-(x686<=(x687!=x688)));

    if (t163 != -32769) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x689 = -1LL;
	static volatile int32_t x690 = INT32_MAX;
	static int8_t x691 = -48;
	volatile int32_t x692 = INT32_MIN;
	static int64_t t164 = 108LL;

    t164 = (x689-(x690<=(x691!=x692)));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x694 = INT16_MAX;
	int32_t x696 = INT32_MIN;
	static int64_t t165 = INT64_MIN;

    t165 = (x693-(x694<=(x695!=x696)));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x697 = -1;
	volatile int8_t x699 = INT8_MAX;
	int8_t x700 = INT8_MAX;
	int32_t t166 = -91;

    t166 = (x697-(x698<=(x699!=x700)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x701 = 2U;
	static int16_t x702 = INT16_MIN;
	static int32_t x703 = INT32_MAX;

    t167 = (x701-(x702<=(x703!=x704)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x705 = -1;
	uint16_t x706 = UINT16_MAX;
	volatile int64_t x707 = INT64_MAX;
	int32_t x708 = -1740;

    t168 = (x705-(x706<=(x707!=x708)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x709 = 6LLU;
	int8_t x711 = INT8_MIN;
	uint32_t x712 = UINT32_MAX;
	volatile uint64_t t169 = 47837LLU;

    t169 = (x709-(x710<=(x711!=x712)));

    if (t169 != 6LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x714 = INT64_MAX;
	static int64_t x715 = -533339120481581142LL;
	int16_t x716 = 2;
	volatile int32_t t170 = 0;

    t170 = (x713-(x714<=(x715!=x716)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x717 = INT64_MAX;
	volatile uint32_t x718 = UINT32_MAX;
	uint32_t x719 = UINT32_MAX;
	uint32_t x720 = 73046U;
	volatile int64_t t171 = INT64_MAX;

    t171 = (x717-(x718<=(x719!=x720)));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x721 = INT32_MAX;
	int32_t x722 = 1;
	static int32_t x723 = 156139041;
	uint8_t x724 = UINT8_MAX;
	static volatile int32_t t172 = -26788593;

    t172 = (x721-(x722<=(x723!=x724)));

    if (t172 != 2147483646) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = INT8_MIN;
	static int64_t x726 = -1LL;
	int32_t x727 = -449613044;
	int32_t t173 = 2;

    t173 = (x725-(x726<=(x727!=x728)));

    if (t173 != -129) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x729 = INT16_MIN;
	int8_t x730 = INT8_MIN;
	volatile uint8_t x731 = UINT8_MAX;
	int8_t x732 = INT8_MIN;
	int32_t t174 = -45148695;

    t174 = (x729-(x730<=(x731!=x732)));

    if (t174 != -32769) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x733 = 9;
	uint32_t x734 = 87U;
	volatile int8_t x736 = 7;
	int32_t t175 = -1389158;

    t175 = (x733-(x734<=(x735!=x736)));

    if (t175 != 9) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x737 = 288U;
	int16_t x738 = -1;
	volatile uint64_t x739 = 953961635160119272LLU;
	int32_t x740 = -2082311;
	static volatile int32_t t176 = 4;

    t176 = (x737-(x738<=(x739!=x740)));

    if (t176 != 287) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x741 = 2379476;
	int8_t x742 = -1;
	int8_t x744 = INT8_MIN;
	int32_t t177 = -1;

    t177 = (x741-(x742<=(x743!=x744)));

    if (t177 != 2379475) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MAX;
	volatile int32_t t178 = INT32_MIN;

    t178 = (x745-(x746<=(x747!=x748)));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x749 = INT16_MIN;
	uint8_t x750 = 3U;
	int16_t x752 = -1;
	int32_t t179 = -9996249;

    t179 = (x749-(x750<=(x751!=x752)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x755 = INT64_MIN;
	int32_t t180 = INT32_MIN;

    t180 = (x753-(x754<=(x755!=x756)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x757 = INT32_MIN;
	static uint32_t x759 = 1760U;
	static int16_t x760 = INT16_MIN;
	volatile int32_t t181 = INT32_MIN;

    t181 = (x757-(x758<=(x759!=x760)));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x765 = 61097LL;
	int64_t x766 = -1LL;

    t182 = (x765-(x766<=(x767!=x768)));

    if (t182 != 61096LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x769 = UINT64_MAX;
	static volatile int8_t x770 = -7;
	int64_t x771 = -1LL;
	static int64_t x772 = -215896614LL;
	static volatile uint64_t t183 = 4LLU;

    t183 = (x769-(x770<=(x771!=x772)));

    if (t183 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x773 = INT16_MIN;
	int8_t x775 = INT8_MIN;
	int32_t x776 = INT32_MIN;
	volatile int32_t t184 = -27;

    t184 = (x773-(x774<=(x775!=x776)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x777 = INT32_MIN;
	int64_t x778 = INT64_MAX;
	uint16_t x779 = 223U;
	static uint8_t x780 = UINT8_MAX;
	volatile int32_t t185 = INT32_MIN;

    t185 = (x777-(x778<=(x779!=x780)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x781 = INT32_MIN;
	int64_t x782 = INT64_MAX;
	int64_t x783 = INT64_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t186 = INT32_MIN;

    t186 = (x781-(x782<=(x783!=x784)));

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x785 = UINT8_MAX;
	int64_t x786 = INT64_MAX;
	volatile uint32_t x787 = 700243804U;
	static int16_t x788 = INT16_MAX;
	int32_t t187 = -6430;

    t187 = (x785-(x786<=(x787!=x788)));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x789 = 417;
	volatile int32_t x790 = -1;
	static volatile int16_t x792 = INT16_MIN;

    t188 = (x789-(x790<=(x791!=x792)));

    if (t188 != 416) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x793 = INT16_MIN;
	static uint32_t x794 = UINT32_MAX;
	volatile uint8_t x796 = 1U;
	int32_t t189 = -2446;

    t189 = (x793-(x794<=(x795!=x796)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x798 = 1629U;
	uint64_t x799 = 3456LLU;
	uint32_t t190 = 157893U;

    t190 = (x797-(x798<=(x799!=x800)));

    if (t190 != 1106281U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x801 = INT16_MIN;
	volatile int32_t x803 = INT32_MAX;
	int64_t x804 = INT64_MAX;
	static volatile int32_t t191 = -1153;

    t191 = (x801-(x802<=(x803!=x804)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x805 = 1985701170018LLU;
	int32_t x806 = -1;
	uint64_t x807 = 225881LLU;
	volatile uint64_t t192 = 5159605341661LLU;

    t192 = (x805-(x806<=(x807!=x808)));

    if (t192 != 1985701170017LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x810 = 5239;
	int8_t x812 = -37;
	int64_t t193 = 546108318625299LL;

    t193 = (x809-(x810<=(x811!=x812)));

    if (t193 != -29830016912LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x813 = INT16_MIN;
	int64_t x814 = -1LL;
	int64_t x815 = -12328305LL;
	int8_t x816 = INT8_MIN;

    t194 = (x813-(x814<=(x815!=x816)));

    if (t194 != -32769) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x817 = INT16_MAX;
	int8_t x818 = 25;
	int32_t x820 = INT32_MIN;
	volatile int32_t t195 = -50;

    t195 = (x817-(x818<=(x819!=x820)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x821 = 1U;
	uint8_t x822 = UINT8_MAX;
	volatile uint64_t x823 = 413LLU;
	int64_t x824 = INT64_MAX;
	static int32_t t196 = -4087591;

    t196 = (x821-(x822<=(x823!=x824)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x825 = INT8_MAX;
	volatile uint32_t x826 = UINT32_MAX;
	uint16_t x827 = 2292U;
	int32_t x828 = 93824791;

    t197 = (x825-(x826<=(x827!=x828)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x831 = UINT32_MAX;
	int32_t x832 = -1;
	int32_t t198 = 475659535;

    t198 = (x829-(x830<=(x831!=x832)));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x833 = -1;
	uint16_t x835 = 45U;
	int64_t x836 = -1038657204708LL;
	int32_t t199 = 6972476;

    t199 = (x833-(x834<=(x835!=x836)));

    if (t199 != -2) { NG(); } else { ; }
	
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

