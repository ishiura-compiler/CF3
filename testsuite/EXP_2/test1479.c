
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

uint8_t x5 = UINT8_MAX;
int16_t x6 = INT16_MIN;
int16_t x8 = INT16_MAX;
static int32_t t3 = -117;
int8_t x17 = -1;
int32_t x19 = INT32_MIN;
static int16_t x20 = -113;
int64_t x21 = -37588LL;
volatile uint8_t x26 = UINT8_MAX;
int32_t t7 = 17;
int32_t x37 = INT32_MIN;
uint64_t x42 = 9346482008LLU;
int8_t x44 = -1;
static int32_t t10 = -334495721;
int32_t x45 = INT32_MIN;
uint8_t x46 = 1U;
volatile int16_t x52 = INT16_MIN;
int16_t x59 = 14724;
volatile int32_t t14 = -1;
int32_t x63 = -1;
uint64_t x65 = UINT64_MAX;
int32_t x66 = -13923283;
volatile uint32_t x68 = 26U;
int64_t x76 = -1904LL;
int32_t x78 = -1;
uint8_t x79 = 2U;
static int64_t x81 = 131553559195789LL;
volatile int8_t x83 = 7;
int32_t t21 = -89428837;
static int64_t x89 = INT64_MIN;
int64_t x90 = INT64_MIN;
int16_t x92 = INT16_MIN;
volatile int32_t x103 = INT32_MIN;
volatile int32_t x107 = -1;
volatile int32_t t26 = 2590;
uint64_t x115 = 2973LLU;
volatile uint64_t x117 = 46LLU;
int32_t t29 = 1930;
int64_t x132 = -7031158LL;
volatile int32_t t32 = -2;
uint8_t x137 = 27U;
static int32_t t36 = -372932;
volatile int32_t x152 = INT32_MIN;
int32_t x156 = INT32_MAX;
int32_t x163 = INT32_MIN;
static int32_t t40 = 30;
int16_t x175 = -1;
int16_t x181 = INT16_MIN;
static volatile int32_t x183 = INT32_MIN;
static volatile uint32_t x191 = UINT32_MAX;
uint16_t x192 = UINT16_MAX;
int64_t x194 = -1LL;
volatile uint32_t x195 = 128873865U;
int64_t x201 = INT64_MIN;
int32_t t50 = -3507;
volatile int8_t x206 = -60;
volatile int32_t t51 = -745;
int8_t x210 = -1;
int16_t x215 = INT16_MIN;
int32_t x229 = INT32_MAX;
int32_t t57 = 0;
volatile uint64_t x234 = UINT64_MAX;
int64_t x240 = -4166377LL;
uint8_t x246 = UINT8_MAX;
uint32_t x254 = UINT32_MAX;
volatile uint32_t x260 = 67800U;
int32_t t66 = -3;
int8_t x272 = 0;
int8_t x276 = -3;
int64_t x280 = INT64_MIN;
static uint32_t x281 = UINT32_MAX;
int16_t x285 = INT16_MIN;
uint8_t x286 = UINT8_MAX;
int64_t x292 = INT64_MAX;
int32_t t72 = 494;
uint8_t x293 = 38U;
int64_t x302 = 96LL;
static int32_t t75 = -30008;
int32_t t76 = 1172;
volatile int32_t t77 = -388977;
uint64_t x317 = UINT64_MAX;
static int32_t t79 = 397274;
int32_t x321 = -3310;
static volatile uint8_t x325 = 52U;
volatile uint64_t x326 = UINT64_MAX;
int32_t x327 = INT32_MIN;
volatile int32_t t81 = -459399;
static int8_t x329 = -1;
uint16_t x330 = UINT16_MAX;
int8_t x331 = INT8_MIN;
volatile int32_t t83 = 28766451;
int8_t x338 = 4;
volatile int32_t t84 = -66559;
volatile int32_t x350 = -316756012;
int32_t t87 = 121836;
static int16_t x356 = -1;
volatile int16_t x359 = INT16_MIN;
uint64_t x360 = 3355LLU;
static uint32_t x361 = 31U;
uint8_t x366 = UINT8_MAX;
int8_t x368 = -1;
int64_t x373 = INT64_MAX;
volatile int64_t x375 = INT64_MAX;
int32_t x386 = 656388;
uint8_t x389 = 0U;
volatile int32_t x391 = 54612197;
int32_t t97 = -178920;
int8_t x393 = 0;
volatile uint16_t x397 = 46U;
uint16_t x403 = UINT16_MAX;
int16_t x407 = INT16_MAX;
int64_t x412 = INT64_MIN;
static int16_t x423 = -1;
uint16_t x427 = 1138U;
uint16_t x435 = 13U;
int16_t x436 = 1;
volatile int16_t x446 = -1;
int8_t x448 = INT8_MIN;
int8_t x450 = INT8_MAX;
volatile int32_t x451 = INT32_MAX;
volatile int32_t t112 = -1714;
int16_t x453 = INT16_MIN;
int64_t x454 = INT64_MAX;
volatile int16_t x460 = -385;
uint64_t x473 = 1981016466387829LLU;
volatile int8_t x480 = INT8_MIN;
volatile int32_t x481 = -1;
uint32_t x482 = 5U;
int64_t x490 = -1LL;
int64_t x495 = 3415592291233634306LL;
int16_t x497 = INT16_MAX;
uint8_t x500 = 45U;
volatile uint32_t x502 = UINT32_MAX;
volatile int8_t x504 = INT8_MAX;
int32_t t125 = -3;
volatile int64_t x507 = 164604133782546LL;
int32_t t126 = -726169;
int32_t x512 = INT32_MIN;
volatile int32_t x513 = INT32_MIN;
uint8_t x514 = 1U;
int8_t x517 = -6;
volatile int32_t t129 = -13;
uint16_t x528 = UINT16_MAX;
int64_t x536 = INT64_MAX;
int32_t t133 = -1713;
static uint8_t x541 = UINT8_MAX;
int8_t x551 = INT8_MIN;
int8_t x554 = INT8_MIN;
int64_t x556 = -248986518LL;
int16_t x563 = INT16_MIN;
static int16_t x566 = -31;
int32_t x570 = 227;
int32_t x589 = INT32_MIN;
int32_t x594 = -1;
int16_t x608 = -1;
int32_t x612 = -344031315;
int32_t t152 = -300223;
int8_t x614 = -3;
int64_t x618 = -1LL;
static int16_t x627 = -102;
int8_t x628 = 0;
int8_t x629 = INT8_MIN;
uint8_t x645 = UINT8_MAX;
int8_t x648 = INT8_MIN;
volatile uint64_t x649 = 240997908575905LLU;
int32_t x652 = INT32_MIN;
uint8_t x661 = 1U;
volatile int32_t t165 = 9699;
static uint64_t x666 = 143892609LLU;
static volatile int32_t t168 = -210;
int64_t x679 = INT64_MIN;
int64_t x680 = -1LL;
int16_t x682 = -3;
volatile int32_t t170 = 0;
int16_t x688 = INT16_MIN;
static int16_t x689 = -876;
static int64_t x693 = -1199940799752LL;
int8_t x694 = 27;
int8_t x696 = INT8_MIN;
volatile uint32_t x697 = 3024U;
uint8_t x710 = 12U;
volatile int32_t x716 = 5;
int64_t x720 = INT64_MIN;
volatile int8_t x721 = INT8_MIN;
int32_t x722 = INT32_MAX;
volatile uint8_t x725 = UINT8_MAX;
volatile int64_t x728 = -145817861LL;
volatile int32_t t181 = 2202309;
uint64_t x730 = 2908LLU;
int16_t x731 = INT16_MIN;
volatile uint8_t x734 = 6U;
uint16_t x744 = 41U;
volatile int32_t t185 = 399870;
int64_t x745 = INT64_MAX;
volatile int32_t t186 = 21925795;
int64_t x756 = 55873231LL;
int32_t t188 = 307;
static int32_t t190 = 1;
uint16_t x768 = UINT16_MAX;
static volatile int8_t x770 = INT8_MIN;
uint16_t x774 = 57U;
int32_t x776 = 4524539;
volatile uint8_t x780 = 20U;
int64_t x781 = INT64_MIN;
int64_t x784 = -1LL;
uint64_t x786 = 50983LLU;
uint64_t x789 = 2975215LLU;
int8_t x790 = 0;
int64_t x794 = -3487934LL;


void f0(void) {
    	int64_t x1 = -1333519145LL;
	uint16_t x2 = 15203U;
	int64_t x3 = -325174329275304LL;
	uint32_t x4 = 4U;
	static int32_t t0 = -28574668;

    t0 = ((x1==(x2==x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x7 = -1;
	int32_t t1 = -3433;

    t1 = ((x5==(x6==x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -9;
	int64_t x10 = INT64_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 137747835;

    t2 = ((x9==(x10==x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 20U;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	static uint16_t x16 = UINT16_MAX;

    t3 = ((x13==(x14==x15))>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x18 = 515511293U;
	static volatile int32_t t4 = -5281964;

    t4 = ((x17==(x18==x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 1252718U;
	static volatile uint64_t x23 = 99233638625LLU;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = -3185;

    t5 = ((x21==(x22==x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	int64_t x27 = INT64_MIN;
	static uint32_t x28 = 50752U;
	static int32_t t6 = 996492498;

    t6 = ((x25==(x26==x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 5LLU;
	int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MAX;

    t7 = ((x29==(x30==x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = 26664LLU;
	static int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = -9;
	int32_t t8 = 2;

    t8 = ((x33==(x34==x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	int8_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -202;

    t9 = ((x37==(x38==x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	static uint32_t x43 = UINT32_MAX;

    t10 = ((x41==(x42==x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x47 = -3;
	volatile int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 612687;

    t11 = ((x45==(x46==x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static volatile uint64_t x50 = 927LLU;
	int64_t x51 = 341021LL;
	static volatile int32_t t12 = -1;

    t12 = ((x49==(x50==x51))>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	static uint32_t x54 = 7072096U;
	volatile uint64_t x55 = 1150119872912679359LLU;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -52;

    t13 = ((x53==(x54==x55))>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 3;
	int32_t x58 = INT32_MIN;
	volatile int32_t x60 = INT32_MIN;

    t14 = ((x57==(x58==x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	static uint32_t x62 = UINT32_MAX;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = -7;

    t15 = ((x61==(x62==x63))>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x67 = 766545669;
	static int32_t t16 = 420;

    t16 = ((x65==(x66==x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	volatile uint16_t x70 = 3583U;
	static int8_t x71 = -1;
	int64_t x72 = -194098067813800LL;
	static int32_t t17 = 13685;

    t17 = ((x69==(x70==x71))>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MAX;
	int8_t x75 = INT8_MIN;
	int32_t t18 = -49283939;

    t18 = ((x73==(x74==x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t19 = 4;

    t19 = ((x77==(x78==x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = 5892LL;
	int64_t x84 = INT64_MAX;
	static int32_t t20 = -7650220;

    t20 = ((x81==(x82==x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	volatile int32_t x87 = INT32_MIN;
	int64_t x88 = 1195683LL;

    t21 = ((x85==(x86==x87))>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x91 = 8168U;
	int32_t t22 = 1;

    t22 = ((x89==(x90==x91))>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint8_t x93 = 54U;
	int32_t x94 = 45687;
	volatile int8_t x95 = INT8_MIN;
	volatile int16_t x96 = -1;
	static volatile int32_t t23 = 616;

    t23 = ((x93==(x94==x95))>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = -1;
	volatile uint16_t x98 = 1429U;
	volatile uint8_t x99 = UINT8_MAX;
	uint32_t x100 = 299127802U;
	int32_t t24 = -1895;

    t24 = ((x97==(x98==x99))>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1181;
	uint64_t x102 = 3675198407828359LLU;
	uint32_t x104 = 119561369U;
	volatile int32_t t25 = -36;

    t25 = ((x101==(x102==x103))>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = 39850;
	int32_t x108 = -3943;

    t26 = ((x105==(x106==x107))>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint64_t x110 = UINT64_MAX;
	static int32_t x111 = INT32_MAX;
	int16_t x112 = INT16_MAX;
	int32_t t27 = 1;

    t27 = ((x109==(x110==x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MAX;
	int64_t x116 = 3008567669LL;
	int32_t t28 = 0;

    t28 = ((x113==(x114==x115))>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x118 = 4492909U;
	static int16_t x119 = -5172;
	volatile int8_t x120 = INT8_MIN;

    t29 = ((x117==(x118==x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MAX;
	uint16_t x122 = 1820U;
	uint16_t x123 = 433U;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = -3;

    t30 = ((x121==(x122==x123))>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 230561823231LLU;
	int32_t t31 = 416;

    t31 = ((x125==(x126==x127))>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	int32_t x130 = 1;
	volatile int8_t x131 = INT8_MIN;

    t32 = ((x129==(x130==x131))>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	int64_t x134 = INT64_MIN;
	static int16_t x135 = INT16_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -114106010;

    t33 = ((x133==(x134==x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = -1;
	int64_t x139 = INT64_MIN;
	int32_t x140 = 550;
	volatile int32_t t34 = 186337043;

    t34 = ((x137==(x138==x139))>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x141 = UINT8_MAX;
	static volatile uint8_t x142 = 75U;
	volatile int32_t x143 = INT32_MAX;
	uint8_t x144 = 58U;
	volatile int32_t t35 = 41636;

    t35 = ((x141==(x142==x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -40733;
	int16_t x146 = 132;
	uint64_t x147 = 1364649733732764LLU;
	int8_t x148 = INT8_MIN;

    t36 = ((x145==(x146==x147))>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 5U;
	static uint8_t x150 = 4U;
	int16_t x151 = -1;
	volatile int32_t t37 = 3932;

    t37 = ((x149==(x150==x151))>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	uint8_t x154 = 3U;
	int32_t x155 = 128909;
	volatile int32_t t38 = -126792208;

    t38 = ((x153==(x154==x155))>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x157 = INT8_MIN;
	static int16_t x158 = INT16_MAX;
	static int8_t x159 = 46;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 78;

    t39 = ((x157==(x158==x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	uint16_t x162 = 7158U;
	volatile int8_t x164 = -7;

    t40 = ((x161==(x162==x163))>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 29417U;
	volatile int16_t x166 = -1;
	int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 421;

    t41 = ((x165==(x166==x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -4;
	int32_t x170 = INT32_MAX;
	static uint8_t x171 = UINT8_MAX;
	volatile uint16_t x172 = UINT16_MAX;
	int32_t t42 = 175;

    t42 = ((x169==(x170==x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MIN;
	uint16_t x174 = 15U;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t43 = 208570;

    t43 = ((x173==(x174==x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = 1129783012LL;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = -12;

    t44 = ((x177==(x178==x179))>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x182 = 78822610U;
	int32_t x184 = INT32_MIN;
	static int32_t t45 = -13747;

    t45 = ((x181==(x182==x183))>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = INT64_MIN;
	static int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	int32_t t46 = 120431;

    t46 = ((x185==(x186==x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x189 = INT8_MIN;
	volatile int32_t x190 = INT32_MIN;
	static volatile int32_t t47 = -153690;

    t47 = ((x189==(x190==x191))>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 2833;
	uint16_t x196 = 3871U;
	volatile int32_t t48 = -2829810;

    t48 = ((x193==(x194==x195))>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	volatile int32_t x198 = 2;
	static uint16_t x199 = 1174U;
	static volatile uint16_t x200 = 88U;
	int32_t t49 = 11;

    t49 = ((x197==(x198==x199))>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = UINT8_MAX;
	static int32_t x203 = INT32_MAX;
	static volatile int32_t x204 = -1613;

    t50 = ((x201==(x202==x203))>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -1;

    t51 = ((x205==(x206==x207))>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile int32_t x211 = INT32_MIN;
	int16_t x212 = 8590;
	volatile int32_t t52 = 1;

    t52 = ((x209==(x210==x211))>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	int8_t x214 = 1;
	int8_t x216 = -1;
	static int32_t t53 = -1080682;

    t53 = ((x213==(x214==x215))>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 2;
	int8_t x218 = INT8_MAX;
	int8_t x219 = 19;
	int16_t x220 = INT16_MIN;
	int32_t t54 = -3;

    t54 = ((x217==(x218==x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 29310565LLU;
	int8_t x222 = INT8_MAX;
	uint32_t x223 = UINT32_MAX;
	uint64_t x224 = 5903783638795LLU;
	static volatile int32_t t55 = 7121514;

    t55 = ((x221==(x222==x223))>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	static volatile int32_t x227 = 20250;
	volatile int32_t x228 = 7303874;
	volatile int32_t t56 = -30767;

    t56 = ((x225==(x226==x227))>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x230 = UINT16_MAX;
	volatile int16_t x231 = INT16_MAX;
	uint8_t x232 = 9U;

    t57 = ((x229==(x230==x231))>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x233 = 16U;
	int16_t x235 = -1;
	static volatile uint16_t x236 = 428U;
	int32_t t58 = 27468918;

    t58 = ((x233==(x234==x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	uint16_t x238 = 5U;
	int64_t x239 = INT64_MIN;
	volatile int32_t t59 = 28267;

    t59 = ((x237==(x238==x239))>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	volatile int32_t x242 = -1;
	volatile int16_t x243 = -14;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = 1556837;

    t60 = ((x241==(x242==x243))>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = INT16_MAX;
	uint64_t x247 = 1430127008282646LLU;
	volatile int16_t x248 = -1;
	static volatile int32_t t61 = -46435090;

    t61 = ((x245==(x246==x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static uint16_t x250 = 32U;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t62 = -539874288;

    t62 = ((x249==(x250==x251))>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MAX;
	uint8_t x255 = 61U;
	int16_t x256 = 8304;
	int32_t t63 = 173779;

    t63 = ((x253==(x254==x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	int16_t x258 = -3;
	int32_t x259 = INT32_MAX;
	static int32_t t64 = 0;

    t64 = ((x257==(x258==x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	static volatile int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MAX;
	int32_t t65 = -989847598;

    t65 = ((x261==(x262==x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = -1;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = -36896LL;
	int16_t x268 = INT16_MIN;

    t66 = ((x265==(x266==x267))>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = 1;
	int32_t x270 = -1;
	static int16_t x271 = INT16_MIN;
	volatile int32_t t67 = 7;

    t67 = ((x269==(x270==x271))>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x273 = 490362U;
	static volatile uint16_t x274 = 70U;
	uint8_t x275 = 1U;
	volatile int32_t t68 = 46389892;

    t68 = ((x273==(x274==x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = 145U;
	static int32_t x278 = -1;
	int16_t x279 = 0;
	volatile int32_t t69 = -753452978;

    t69 = ((x277==(x278==x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MAX;
	uint32_t x283 = 4551U;
	int8_t x284 = -6;
	int32_t t70 = 994479908;

    t70 = ((x281==(x282==x283))>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x287 = INT16_MIN;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 23236;

    t71 = ((x285==(x286==x287))>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	static int8_t x291 = INT8_MIN;

    t72 = ((x289==(x290==x291))>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x294 = UINT8_MAX;
	static uint32_t x295 = 21815673U;
	int32_t x296 = INT32_MIN;
	int32_t t73 = 1059;

    t73 = ((x293==(x294==x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1460LL;
	uint16_t x298 = UINT16_MAX;
	int64_t x299 = -1LL;
	static volatile uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = -77;

    t74 = ((x297==(x298==x299))>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MIN;
	int32_t x303 = -50675652;
	int16_t x304 = INT16_MIN;

    t75 = ((x301==(x302==x303))>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = -1;
	volatile uint64_t x306 = 496788678517202LLU;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = -1;

    t76 = ((x305==(x306==x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MAX;
	static uint8_t x310 = 23U;
	static int64_t x311 = INT64_MAX;
	int8_t x312 = 26;

    t77 = ((x309==(x310==x311))>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile uint64_t x314 = 257046759723LLU;
	int32_t x315 = -3824704;
	int32_t x316 = INT32_MAX;
	int32_t t78 = -18063690;

    t78 = ((x313==(x314==x315))>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = -1LL;
	int8_t x319 = -4;
	int16_t x320 = -524;

    t79 = ((x317==(x318==x319))>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x322 = -1;
	volatile int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -626;

    t80 = ((x321==(x322==x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x328 = 431460U;

    t81 = ((x325==(x326==x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x332 = 1373U;
	volatile int32_t t82 = -602850;

    t82 = ((x329==(x330==x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 7894;
	uint64_t x334 = 16536262001LLU;
	volatile uint16_t x335 = 9351U;
	int32_t x336 = INT32_MAX;

    t83 = ((x333==(x334==x335))>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x339 = -1;
	int16_t x340 = -1;

    t84 = ((x337==(x338==x339))>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	static int8_t x342 = INT8_MIN;
	volatile int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t85 = 272695188;

    t85 = ((x341==(x342==x343))>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x345 = 32;
	uint16_t x346 = 7064U;
	int16_t x347 = INT16_MAX;
	static int32_t x348 = -6380;
	int32_t t86 = -189;

    t86 = ((x345==(x346==x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 117952U;
	static int64_t x351 = -1LL;
	static volatile int64_t x352 = INT64_MIN;

    t87 = ((x349==(x350==x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 42U;
	int16_t x354 = 5803;
	volatile uint32_t x355 = UINT32_MAX;
	int32_t t88 = 13571686;

    t88 = ((x353==(x354==x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 4593LLU;
	int8_t x358 = INT8_MAX;
	static volatile int32_t t89 = -3;

    t89 = ((x357==(x358==x359))>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x362 = 2;
	static volatile int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t90 = -1;

    t90 = ((x361==(x362==x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 19U;
	volatile int32_t x367 = INT32_MAX;
	volatile int32_t t91 = 0;

    t91 = ((x365==(x366==x367))>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MAX;
	static volatile int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MAX;
	int32_t x372 = -109;
	volatile int32_t t92 = -1;

    t92 = ((x369==(x370==x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = 185552381;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t93 = -15;

    t93 = ((x373==(x374==x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 3983148U;
	uint64_t x378 = 1610006956LLU;
	int64_t x379 = -1LL;
	uint64_t x380 = 2679530418LLU;
	int32_t t94 = 345075;

    t94 = ((x377==(x378==x379))>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = UINT32_MAX;
	volatile uint64_t x382 = 854605988380LLU;
	uint16_t x383 = 11U;
	static uint16_t x384 = UINT16_MAX;
	static volatile int32_t t95 = -4879593;

    t95 = ((x381==(x382==x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	static uint32_t x387 = UINT32_MAX;
	int32_t x388 = -1;
	volatile int32_t t96 = 49417272;

    t96 = ((x385==(x386==x387))>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = 1;
	int16_t x392 = -1;

    t97 = ((x389==(x390==x391))>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x394 = 1764685U;
	int32_t x395 = -1;
	static volatile int8_t x396 = -1;
	static int32_t t98 = 11332906;

    t98 = ((x393==(x394==x395))>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x398 = -5208LL;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 462U;
	static int32_t t99 = 612937;

    t99 = ((x397==(x398==x399))>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = 5U;
	static volatile uint16_t x402 = UINT16_MAX;
	uint8_t x404 = 0U;
	volatile int32_t t100 = -10468;

    t100 = ((x401==(x402==x403))>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int16_t x406 = -702;
	uint16_t x408 = 668U;
	volatile int32_t t101 = -32;

    t101 = ((x405==(x406==x407))>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int32_t x410 = -491640732;
	int16_t x411 = INT16_MIN;
	int32_t t102 = 42539150;

    t102 = ((x409==(x410==x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = -1;
	static int8_t x414 = INT8_MIN;
	int8_t x415 = 1;
	int64_t x416 = 43413928844602LL;
	int32_t t103 = 0;

    t103 = ((x413==(x414==x415))>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	volatile int32_t x418 = -1;
	int64_t x419 = INT64_MIN;
	volatile uint32_t x420 = 1579902U;
	volatile int32_t t104 = 95194;

    t104 = ((x417==(x418==x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	static uint32_t x422 = 615U;
	int8_t x424 = -28;
	volatile int32_t t105 = -192530406;

    t105 = ((x421==(x422==x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = 178LL;
	int32_t x426 = -119647;
	int8_t x428 = INT8_MAX;
	static volatile int32_t t106 = 3;

    t106 = ((x425==(x426==x427))>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x429 = 0U;
	int64_t x430 = INT64_MAX;
	static int8_t x431 = -1;
	int32_t x432 = INT32_MIN;
	int32_t t107 = -94;

    t107 = ((x429==(x430==x431))>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	static volatile uint32_t x434 = 1747591839U;
	int32_t t108 = 255241;

    t108 = ((x433==(x434==x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x437 = INT16_MAX;
	static int8_t x438 = INT8_MIN;
	static int64_t x439 = INT64_MIN;
	int16_t x440 = 88;
	int32_t t109 = -96455;

    t109 = ((x437==(x438==x439))>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 1049095320656310LL;
	volatile uint64_t x442 = UINT64_MAX;
	int32_t x443 = INT32_MIN;
	int64_t x444 = -1LL;
	volatile int32_t t110 = -54;

    t110 = ((x441==(x442==x443))>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	volatile uint32_t x447 = 613U;
	int32_t t111 = -9634;

    t111 = ((x445==(x446==x447))>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	static uint32_t x452 = 29403546U;

    t112 = ((x449==(x450==x451))>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x455 = INT32_MAX;
	volatile int16_t x456 = 231;
	static int32_t t113 = 453348919;

    t113 = ((x453==(x454==x455))>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int32_t x457 = 383562640;
	volatile int32_t x458 = INT32_MIN;
	volatile int64_t x459 = -1LL;
	int32_t t114 = -296;

    t114 = ((x457==(x458==x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	int8_t x462 = INT8_MIN;
	int64_t x463 = 378534107377919112LL;
	uint16_t x464 = 12054U;
	int32_t t115 = -3293834;

    t115 = ((x461==(x462==x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = -1;
	volatile uint16_t x467 = 24715U;
	volatile int64_t x468 = 160735919055400LL;
	static int32_t t116 = 593002820;

    t116 = ((x465==(x466==x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x469 = UINT8_MAX;
	int64_t x470 = INT64_MIN;
	static int64_t x471 = INT64_MIN;
	int8_t x472 = -1;
	static int32_t t117 = 215164;

    t117 = ((x469==(x470==x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x474 = -1;
	int32_t x475 = -1;
	static volatile int16_t x476 = INT16_MIN;
	volatile int32_t t118 = -840;

    t118 = ((x473==(x474==x475))>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x477 = UINT32_MAX;
	uint32_t x478 = 62917U;
	static int16_t x479 = INT16_MIN;
	int32_t t119 = -34406700;

    t119 = ((x477==(x478==x479))>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x483 = INT16_MAX;
	int64_t x484 = -1LL;
	volatile int32_t t120 = 366767810;

    t120 = ((x481==(x482==x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -55;
	uint16_t x486 = 759U;
	uint64_t x487 = 983LLU;
	int64_t x488 = INT64_MIN;
	int32_t t121 = -690409841;

    t121 = ((x485==(x486==x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	static int16_t x491 = 115;
	uint16_t x492 = 125U;
	volatile int32_t t122 = 1023;

    t122 = ((x489==(x490==x491))>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	volatile int32_t x494 = INT32_MIN;
	uint32_t x496 = 294U;
	int32_t t123 = 878;

    t123 = ((x493==(x494==x495))>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = 118;
	static int16_t x499 = INT16_MIN;
	static volatile int32_t t124 = -9;

    t124 = ((x497==(x498==x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	int64_t x503 = INT64_MIN;

    t125 = ((x501==(x502==x503))>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x505 = 5145LLU;
	int64_t x506 = INT64_MIN;
	int8_t x508 = INT8_MIN;

    t126 = ((x505==(x506==x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -3985;
	uint64_t x510 = 34836209005203975LLU;
	int64_t x511 = 7156LL;
	int32_t t127 = 1516419;

    t127 = ((x509==(x510==x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x515 = 42;
	uint32_t x516 = 1134131724U;
	int32_t t128 = 179;

    t128 = ((x513==(x514==x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x518 = UINT8_MAX;
	static volatile int8_t x519 = INT8_MIN;
	static int64_t x520 = -1LL;

    t129 = ((x517==(x518==x519))>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = 40642826LLU;
	int32_t x522 = INT32_MIN;
	static int16_t x523 = 1237;
	volatile int64_t x524 = INT64_MIN;
	int32_t t130 = 26166799;

    t130 = ((x521==(x522==x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	static uint32_t x526 = UINT32_MAX;
	int64_t x527 = INT64_MAX;
	int32_t t131 = 238731;

    t131 = ((x525==(x526==x527))>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x529 = -1;
	volatile uint32_t x530 = UINT32_MAX;
	uint32_t x531 = 13U;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -67041;

    t132 = ((x529==(x530==x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = -42;
	volatile uint64_t x534 = UINT64_MAX;
	int8_t x535 = INT8_MIN;

    t133 = ((x533==(x534==x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	volatile int8_t x538 = 5;
	int64_t x539 = -1625599LL;
	volatile int8_t x540 = -57;
	volatile int32_t t134 = -10246;

    t134 = ((x537==(x538==x539))>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = -1;
	int64_t x543 = INT64_MIN;
	int64_t x544 = -1LL;
	int32_t t135 = 18605;

    t135 = ((x541==(x542==x543))>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -10;
	uint16_t x546 = 23U;
	static uint16_t x547 = UINT16_MAX;
	volatile int32_t x548 = -1;
	volatile int32_t t136 = -2690;

    t136 = ((x545==(x546==x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	volatile int64_t x550 = INT64_MIN;
	int32_t x552 = -3741817;
	static int32_t t137 = -6453;

    t137 = ((x549==(x550==x551))>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 2;
	volatile int8_t x555 = -1;
	static int32_t t138 = -1;

    t138 = ((x553==(x554==x555))>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -20104459589656929LL;
	int8_t x558 = INT8_MIN;
	uint16_t x559 = UINT16_MAX;
	int32_t x560 = -1;
	volatile int32_t t139 = 212200;

    t139 = ((x557==(x558==x559))>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	static uint32_t x562 = 410248U;
	volatile uint8_t x564 = UINT8_MAX;
	int32_t t140 = 27;

    t140 = ((x561==(x562==x563))>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 66U;
	uint64_t x567 = 935389143929830LLU;
	uint32_t x568 = 227901914U;
	static int32_t t141 = 58;

    t141 = ((x565==(x566==x567))>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = 1;
	uint16_t x571 = UINT16_MAX;
	int8_t x572 = INT8_MAX;
	static volatile int32_t t142 = -48975;

    t142 = ((x569==(x570==x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MAX;
	int16_t x574 = 0;
	int32_t x575 = INT32_MIN;
	static int32_t x576 = INT32_MAX;
	int32_t t143 = -133466;

    t143 = ((x573==(x574==x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 475207414204LLU;
	int64_t x578 = INT64_MAX;
	int64_t x579 = INT64_MIN;
	int64_t x580 = INT64_MIN;
	volatile int32_t t144 = -1;

    t144 = ((x577==(x578==x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 26U;
	static int8_t x582 = -1;
	uint8_t x583 = 17U;
	int64_t x584 = INT64_MIN;
	int32_t t145 = 4;

    t145 = ((x581==(x582==x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -140599807254698LL;
	static uint8_t x586 = UINT8_MAX;
	static uint32_t x587 = 2117988159U;
	uint8_t x588 = 0U;
	volatile int32_t t146 = -21222674;

    t146 = ((x585==(x586==x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = -1;
	int32_t x591 = INT32_MIN;
	volatile int64_t x592 = 47855409898464781LL;
	int32_t t147 = 10;

    t147 = ((x589==(x590==x591))>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x593 = 36U;
	static volatile uint32_t x595 = UINT32_MAX;
	int8_t x596 = INT8_MAX;
	int32_t t148 = -3545;

    t148 = ((x593==(x594==x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x597 = -367;
	uint8_t x598 = 8U;
	uint64_t x599 = UINT64_MAX;
	int16_t x600 = INT16_MIN;
	int32_t t149 = -60917376;

    t149 = ((x597==(x598==x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	uint32_t x602 = UINT32_MAX;
	uint8_t x603 = UINT8_MAX;
	int8_t x604 = INT8_MAX;
	static int32_t t150 = 404194947;

    t150 = ((x601==(x602==x603))>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	int32_t x606 = INT32_MAX;
	int32_t x607 = -1;
	volatile int32_t t151 = -127338003;

    t151 = ((x605==(x606==x607))>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x609 = 46U;
	int32_t x610 = -1;
	int8_t x611 = INT8_MIN;

    t152 = ((x609==(x610==x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 143U;
	uint64_t x615 = 1312LLU;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t153 = -24;

    t153 = ((x613==(x614==x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MIN;
	static uint8_t x619 = 24U;
	int16_t x620 = -1;
	static volatile int32_t t154 = 2108;

    t154 = ((x617==(x618==x619))>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MIN;
	int64_t x622 = INT64_MIN;
	static uint8_t x623 = UINT8_MAX;
	static uint32_t x624 = 1146395U;
	volatile int32_t t155 = 8811;

    t155 = ((x621==(x622==x623))>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = -1LL;
	static int32_t x626 = INT32_MIN;
	int32_t t156 = -97;

    t156 = ((x625==(x626==x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x630 = 220739267U;
	uint32_t x631 = 0U;
	volatile int32_t x632 = INT32_MAX;
	int32_t t157 = 1696392;

    t157 = ((x629==(x630==x631))>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MIN;
	uint64_t x634 = UINT64_MAX;
	volatile int16_t x635 = -1;
	static int16_t x636 = -13459;
	volatile int32_t t158 = -466;

    t158 = ((x633==(x634==x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 29655677U;
	volatile uint16_t x638 = 26U;
	static int8_t x639 = -6;
	int16_t x640 = 55;
	int32_t t159 = 144;

    t159 = ((x637==(x638==x639))>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = 233085956;
	int64_t x642 = INT64_MIN;
	static int64_t x643 = INT64_MIN;
	int8_t x644 = -1;
	volatile int32_t t160 = -3148252;

    t160 = ((x641==(x642==x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x646 = INT64_MAX;
	volatile int16_t x647 = INT16_MAX;
	int32_t t161 = -10;

    t161 = ((x645==(x646==x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 1U;
	int16_t x651 = 1107;
	volatile int32_t t162 = 1;

    t162 = ((x649==(x650==x651))>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 80U;
	int8_t x654 = INT8_MAX;
	volatile uint16_t x655 = 1011U;
	uint32_t x656 = UINT32_MAX;
	int32_t t163 = -29;

    t163 = ((x653==(x654==x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = -2;
	static int32_t x658 = INT32_MIN;
	volatile int64_t x659 = -190389LL;
	uint64_t x660 = 2003060004346LLU;
	volatile int32_t t164 = -49298074;

    t164 = ((x657==(x658==x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = -1294515LL;
	static int8_t x663 = -1;
	uint32_t x664 = 136193U;

    t165 = ((x661==(x662==x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x667 = INT64_MIN;
	volatile uint8_t x668 = 2U;
	volatile int32_t t166 = 2201;

    t166 = ((x665==(x666==x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MIN;
	int32_t x670 = INT32_MAX;
	static uint32_t x671 = UINT32_MAX;
	static int16_t x672 = 104;
	int32_t t167 = 8814;

    t167 = ((x669==(x670==x671))>x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = 214U;
	uint16_t x674 = UINT16_MAX;
	int32_t x675 = 173996;
	static volatile int64_t x676 = INT64_MAX;

    t168 = ((x673==(x674==x675))>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x677 = 6U;
	uint16_t x678 = 33U;
	static volatile int32_t t169 = -18752;

    t169 = ((x677==(x678==x679))>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	uint64_t x683 = 151056108884462170LLU;
	static int32_t x684 = 142;

    t170 = ((x681==(x682==x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 238LL;
	int8_t x686 = -1;
	uint8_t x687 = 0U;
	volatile int32_t t171 = 73856272;

    t171 = ((x685==(x686==x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x690 = INT32_MIN;
	volatile int32_t x691 = INT32_MIN;
	int32_t x692 = -95156;
	volatile int32_t t172 = 170;

    t172 = ((x689==(x690==x691))>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x695 = INT8_MIN;
	static volatile int32_t t173 = 496714309;

    t173 = ((x693==(x694==x695))>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x698 = INT64_MIN;
	int8_t x699 = INT8_MIN;
	int64_t x700 = -1LL;
	static volatile int32_t t174 = -531;

    t174 = ((x697==(x698==x699))>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = 32U;
	volatile int32_t x702 = INT32_MIN;
	int16_t x703 = INT16_MIN;
	volatile uint8_t x704 = 4U;
	static int32_t t175 = -49;

    t175 = ((x701==(x702==x703))>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x706 = INT64_MIN;
	uint32_t x707 = 553439U;
	uint32_t x708 = 0U;
	int32_t t176 = -32921118;

    t176 = ((x705==(x706==x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = 39753;
	volatile int64_t x711 = -3362343480LL;
	static int8_t x712 = -1;
	volatile int32_t t177 = -453;

    t177 = ((x709==(x710==x711))>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	int32_t x714 = INT32_MAX;
	static int64_t x715 = INT64_MAX;
	int32_t t178 = -63;

    t178 = ((x713==(x714==x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint64_t x718 = UINT64_MAX;
	int8_t x719 = -1;
	int32_t t179 = 12203158;

    t179 = ((x717==(x718==x719))>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x723 = 5780698U;
	static int32_t x724 = 57294;
	int32_t t180 = 452650614;

    t180 = ((x721==(x722==x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = 802U;
	uint16_t x727 = 5U;

    t181 = ((x725==(x726==x727))>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -15684;
	int32_t x732 = INT32_MIN;
	volatile int32_t t182 = 7269421;

    t182 = ((x729==(x730==x731))>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	static int32_t x735 = INT32_MIN;
	static int64_t x736 = -22LL;
	volatile int32_t t183 = -32781593;

    t183 = ((x733==(x734==x735))>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 223LLU;
	uint16_t x738 = 8960U;
	volatile int64_t x739 = INT64_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = -161308;

    t184 = ((x737==(x738==x739))>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = -6;
	static int8_t x742 = INT8_MIN;
	static uint8_t x743 = 0U;

    t185 = ((x741==(x742==x743))>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	static volatile uint8_t x747 = 2U;
	static int32_t x748 = INT32_MAX;

    t186 = ((x745==(x746==x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	static int8_t x750 = -1;
	volatile uint8_t x751 = 111U;
	uint64_t x752 = 117495280093LLU;
	int32_t t187 = 1;

    t187 = ((x749==(x750==x751))>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = INT8_MIN;
	int32_t x754 = INT32_MAX;
	volatile uint16_t x755 = 22U;

    t188 = ((x753==(x754==x755))>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MIN;
	int8_t x758 = -1;
	int64_t x759 = INT64_MAX;
	volatile int64_t x760 = INT64_MAX;
	int32_t t189 = 241821946;

    t189 = ((x757==(x758==x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int8_t x762 = 0;
	static uint32_t x763 = UINT32_MAX;
	int8_t x764 = -7;

    t190 = ((x761==(x762==x763))>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -53;
	int32_t x766 = 1;
	int32_t x767 = INT32_MAX;
	static volatile int32_t t191 = 19165014;

    t191 = ((x765==(x766==x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -6;
	int8_t x771 = -1;
	volatile uint8_t x772 = 82U;
	static int32_t t192 = -36701;

    t192 = ((x769==(x770==x771))>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = -19250051LL;
	uint16_t x775 = UINT16_MAX;
	static volatile int32_t t193 = -995720311;

    t193 = ((x773==(x774==x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 16;
	int32_t x778 = 68928224;
	static int64_t x779 = INT64_MAX;
	volatile int32_t t194 = 250341;

    t194 = ((x777==(x778==x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = UINT32_MAX;
	int64_t x783 = INT64_MIN;
	int32_t t195 = 0;

    t195 = ((x781==(x782==x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	uint32_t x787 = 7U;
	uint8_t x788 = 120U;
	int32_t t196 = 1;

    t196 = ((x785==(x786==x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x791 = UINT64_MAX;
	int32_t x792 = -526149438;
	int32_t t197 = 59321382;

    t197 = ((x789==(x790==x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = 1;
	static int8_t x795 = -1;
	int64_t x796 = INT64_MIN;
	int32_t t198 = 758738531;

    t198 = ((x793==(x794==x795))>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MIN;
	int32_t x799 = INT32_MAX;
	static volatile int8_t x800 = -29;
	volatile int32_t t199 = 232198;

    t199 = ((x797==(x798==x799))>x800);

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

