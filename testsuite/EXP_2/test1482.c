
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

volatile uint8_t x4 = UINT8_MAX;
static int64_t x7 = INT64_MIN;
uint64_t x9 = 4197434247845LLU;
uint64_t x10 = 3981452721LLU;
int64_t x16 = INT64_MAX;
volatile int32_t t4 = 674;
static uint16_t x22 = 67U;
int32_t t6 = 21945;
int8_t x33 = -45;
volatile int32_t t8 = -29700;
uint8_t x41 = 2U;
int32_t x46 = INT32_MIN;
int8_t x50 = INT8_MIN;
volatile int64_t x53 = INT64_MIN;
uint32_t x60 = 1050224U;
static int64_t x66 = INT64_MAX;
int64_t x68 = INT64_MIN;
volatile uint64_t x72 = 5199098636090609LLU;
uint64_t t17 = 1534LLU;
int8_t x73 = -1;
int32_t t18 = 2524671;
int16_t x86 = 12;
static uint16_t x87 = UINT16_MAX;
int32_t x88 = INT32_MIN;
static int32_t t21 = -42279909;
uint32_t t22 = 3U;
int8_t x100 = -1;
volatile int64_t x101 = INT64_MAX;
static volatile uint16_t x104 = UINT16_MAX;
static volatile int32_t x105 = 69;
uint16_t x114 = UINT16_MAX;
int16_t x119 = -1;
uint16_t x125 = UINT16_MAX;
int16_t x129 = INT16_MAX;
uint32_t x131 = 1889660U;
volatile int32_t t32 = 62076;
int16_t x137 = -1;
int32_t x141 = 35;
uint16_t x142 = 4042U;
int64_t x144 = INT64_MAX;
uint8_t x145 = 1U;
uint32_t x149 = 58763528U;
volatile uint64_t x151 = UINT64_MAX;
int32_t x152 = -90638;
volatile int32_t t40 = 18064834;
int64_t x169 = -6573LL;
int16_t x175 = 1;
int8_t x178 = -1;
static volatile int16_t x183 = 0;
int8_t x190 = INT8_MAX;
int16_t x191 = INT16_MIN;
static int8_t x194 = INT8_MIN;
uint8_t x199 = 27U;
uint32_t x202 = 1914556U;
int16_t x203 = INT16_MIN;
uint32_t x221 = 5941U;
uint8_t x222 = 11U;
int32_t t57 = 8;
uint32_t x236 = UINT32_MAX;
static int32_t t59 = 1;
volatile uint64_t x248 = UINT64_MAX;
volatile uint64_t t63 = 349429LLU;
static uint64_t x258 = 3811746419450634LLU;
int8_t x264 = INT8_MAX;
uint64_t x267 = 1272155LLU;
static uint8_t x270 = UINT8_MAX;
int32_t t68 = -45;
static uint8_t x284 = UINT8_MAX;
volatile int16_t x289 = -1;
static volatile uint8_t x295 = 110U;
uint64_t x297 = 207391277802LLU;
uint16_t x301 = UINT16_MAX;
uint64_t x309 = 46573LLU;
uint32_t x311 = 1004022U;
volatile int32_t x315 = 56714775;
static uint16_t x323 = 203U;
volatile int32_t t80 = 0;
int16_t x325 = INT16_MIN;
int64_t x333 = INT64_MIN;
volatile int8_t x339 = INT8_MIN;
int64_t x344 = INT64_MAX;
int8_t x345 = INT8_MIN;
int8_t x346 = -1;
int16_t x348 = INT16_MIN;
static int16_t x349 = INT16_MIN;
int64_t x363 = INT64_MIN;
volatile uint64_t t91 = 584448873543LLU;
uint8_t x373 = 6U;
volatile uint32_t x377 = 989180537U;
volatile int64_t x378 = INT64_MAX;
uint32_t x379 = 1U;
uint32_t x380 = 1287001218U;
uint16_t x385 = 407U;
static int8_t x387 = 1;
static volatile int32_t t96 = -618055;
uint64_t x391 = UINT64_MAX;
uint8_t x395 = 39U;
int32_t t98 = -1210604;
static int16_t x404 = -1;
volatile int64_t x406 = INT64_MIN;
uint32_t x407 = UINT32_MAX;
static int32_t t101 = -7543636;
int32_t x419 = -1;
static uint32_t t106 = 27410U;
int16_t x437 = -1;
uint32_t x439 = 10800914U;
static int64_t x440 = -1LL;
int32_t t111 = 6809;
uint8_t x449 = UINT8_MAX;
volatile int64_t t112 = 25LL;
int64_t x455 = INT64_MIN;
int16_t x460 = 1;
static int16_t x476 = -643;
int16_t x478 = -317;
uint64_t x491 = 89697976627LLU;
uint64_t x493 = UINT64_MAX;
int64_t x496 = INT64_MIN;
uint8_t x499 = UINT8_MAX;
int32_t x504 = 416;
static int16_t x507 = 32;
int16_t x509 = -215;
volatile int8_t x514 = INT8_MIN;
int64_t x515 = INT64_MIN;
volatile uint8_t x520 = UINT8_MAX;
static uint32_t x528 = UINT32_MAX;
uint32_t x533 = 25U;
int8_t x543 = INT8_MAX;
int32_t x547 = 172453712;
static volatile int64_t t137 = -4923168539397LL;
uint8_t x558 = 56U;
volatile int32_t x561 = -27156;
int8_t x563 = 0;
int64_t x572 = INT64_MAX;
int64_t t142 = -3LL;
uint64_t x574 = UINT64_MAX;
static int16_t x578 = -2241;
uint8_t x584 = 0U;
volatile int32_t t147 = -379226530;
int32_t t149 = 13436;
volatile uint16_t x602 = 1469U;
static int32_t t150 = 0;
volatile uint64_t t152 = 3634292106596LLU;
static volatile int16_t x613 = 0;
int64_t t153 = -295LL;
volatile uint32_t x622 = 2890U;
static int8_t x625 = -1;
int8_t x626 = INT8_MIN;
volatile int16_t x628 = INT16_MAX;
int32_t x629 = -1;
uint16_t x634 = UINT16_MAX;
static volatile int16_t x636 = 14131;
static volatile uint32_t x645 = 119092269U;
volatile int32_t t163 = 2409;
int64_t x663 = INT64_MAX;
int32_t x665 = 9684478;
static int16_t x670 = INT16_MAX;
volatile int32_t x672 = -1;
uint8_t x678 = 0U;
int32_t x680 = -114;
int32_t t170 = 3250;
int8_t x686 = INT8_MAX;
uint8_t x689 = 8U;
uint32_t x698 = UINT32_MAX;
int8_t x706 = -1;
int8_t x707 = INT8_MAX;
volatile int16_t x712 = INT16_MIN;
int16_t x716 = 11;
volatile int64_t x718 = INT64_MIN;
int8_t x727 = 0;
int8_t x729 = INT8_MAX;
static int32_t t182 = 63;
volatile int16_t x738 = 2322;
int64_t x740 = -1LL;
volatile int64_t t184 = 561LL;
static int16_t x741 = 1;
uint32_t t186 = 422U;
int16_t x754 = INT16_MAX;
int8_t x760 = INT8_MAX;
int32_t t189 = 118022;
int64_t x763 = INT64_MAX;
int8_t x766 = -1;
int64_t x767 = INT64_MAX;
int32_t t191 = -1;
int8_t x770 = INT8_MIN;
uint8_t x771 = UINT8_MAX;
static int8_t x776 = INT8_MIN;
volatile uint16_t x781 = UINT16_MAX;
uint16_t x786 = 187U;
int32_t t196 = -10;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	static int64_t x2 = 152283922714LL;
	static int32_t x3 = -809924;
	int32_t t0 = -1246;

    t0 = ((x1==(x2==x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 0U;
	static int64_t x6 = 296667059LL;
	int16_t x8 = -1;
	volatile int32_t t1 = 2;

    t1 = ((x5==(x6==x7))&x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x11 = 8013U;
	int32_t x12 = -99470438;
	int32_t t2 = -746;

    t2 = ((x9==(x10==x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 3LLU;
	uint32_t x14 = UINT32_MAX;
	volatile int8_t x15 = -1;
	int64_t t3 = 24635972434LL;

    t3 = ((x13==(x14==x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint16_t x18 = 1U;
	int32_t x19 = INT32_MAX;
	int8_t x20 = INT8_MAX;

    t4 = ((x17==(x18==x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	int8_t x23 = 6;
	int8_t x24 = 2;
	volatile int32_t t5 = -1;

    t5 = ((x21==(x22==x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	static volatile uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MAX;

    t6 = ((x25==(x26==x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = -2;
	static volatile int16_t x30 = INT16_MAX;
	int16_t x31 = INT16_MAX;
	int32_t x32 = 29510;
	int32_t t7 = 184;

    t7 = ((x29==(x30==x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = 41;
	int32_t x35 = -1;
	static int16_t x36 = -1;

    t8 = ((x33==(x34==x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -1;
	uint64_t x38 = 1133669044LLU;
	int64_t x39 = INT64_MAX;
	uint32_t x40 = 3U;
	uint32_t t9 = 61U;

    t9 = ((x37==(x38==x39))&x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	static int64_t x44 = INT64_MAX;
	int64_t t10 = -10287782LL;

    t10 = ((x41==(x42==x43))&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -6052;
	int16_t x47 = INT16_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 28230;

    t11 = ((x45==(x46==x47))&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -1;
	static volatile int16_t x51 = INT16_MIN;
	static volatile uint32_t x52 = 3057644U;
	volatile uint32_t t12 = 2564681U;

    t12 = ((x49==(x50==x51))&x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = 18U;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 569193965;

    t13 = ((x53==(x54==x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -12;
	uint32_t x58 = UINT32_MAX;
	static int8_t x59 = INT8_MIN;
	volatile uint32_t t14 = 27299383U;

    t14 = ((x57==(x58==x59))&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static int16_t x62 = 0;
	int16_t x63 = 13;
	int32_t x64 = -1;
	volatile int32_t t15 = -38974;

    t15 = ((x61==(x62==x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static uint32_t x67 = 209549U;
	volatile int64_t t16 = 107976327LL;

    t16 = ((x65==(x66==x67))&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint16_t x70 = UINT16_MAX;
	volatile int32_t x71 = 214757;

    t17 = ((x69==(x70==x71))&x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 6U;
	int32_t x75 = INT32_MAX;
	int16_t x76 = INT16_MIN;

    t18 = ((x73==(x74==x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 45LLU;
	uint64_t x78 = 8690748LLU;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = INT16_MAX;
	int32_t t19 = 7;

    t19 = ((x77==(x78==x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x82 = 8U;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t20 = 142959578U;

    t20 = ((x81==(x82==x83))&x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -184;

    t21 = ((x85==(x86==x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 3765U;
	int16_t x91 = 123;
	static uint32_t x92 = UINT32_MAX;

    t22 = ((x89==(x90==x91))&x92);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -472;
	uint16_t x94 = 54U;
	int16_t x95 = INT16_MIN;
	int32_t x96 = -344130889;
	int32_t t23 = -97;

    t23 = ((x93==(x94==x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 9U;
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = 5445;
	volatile int32_t t24 = -64;

    t24 = ((x97==(x98==x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x102 = INT8_MAX;
	static uint32_t x103 = 1828U;
	int32_t t25 = -1;

    t25 = ((x101==(x102==x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x106 = -1;
	int64_t x107 = -1086793374378603033LL;
	uint64_t x108 = UINT64_MAX;
	uint64_t t26 = 10361LLU;

    t26 = ((x105==(x106==x107))&x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	volatile int64_t x111 = 2958326273LL;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = 1;

    t27 = ((x109==(x110==x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 78618U;
	static int32_t x115 = 64240;
	volatile int16_t x116 = 6;
	int32_t t28 = -379278448;

    t28 = ((x113==(x114==x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	volatile int8_t x118 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -1;

    t29 = ((x117==(x118==x119))&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	static int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MAX;
	uint8_t x124 = 52U;
	int32_t t30 = -73976811;

    t30 = ((x121==(x122==x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x126 = UINT64_MAX;
	volatile uint32_t x127 = 106U;
	volatile int32_t x128 = INT32_MAX;
	static int32_t t31 = -83;

    t31 = ((x125==(x126==x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = -1;
	int8_t x132 = -1;

    t32 = ((x129==(x130==x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	static uint16_t x134 = 1647U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 346470;

    t33 = ((x133==(x134==x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = 405422026;
	volatile int8_t x139 = 0;
	int8_t x140 = 0;
	int32_t t34 = -456058257;

    t34 = ((x137==(x138==x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x143 = INT64_MIN;
	volatile int64_t t35 = -8032620LL;

    t35 = ((x141==(x142==x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x146 = 81760244046LLU;
	static uint16_t x147 = 0U;
	static int8_t x148 = -4;
	volatile int32_t t36 = 48558828;

    t36 = ((x145==(x146==x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MAX;
	volatile int32_t t37 = 47;

    t37 = ((x149==(x150==x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 33522334844503LLU;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -1;
	static volatile int32_t t38 = 3620726;

    t38 = ((x153==(x154==x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int32_t x158 = -20093803;
	int32_t x159 = INT32_MIN;
	int32_t x160 = 1410;
	int32_t t39 = -115879;

    t39 = ((x157==(x158==x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 67U;
	int8_t x162 = 22;
	int64_t x163 = -1LL;
	uint16_t x164 = 9U;

    t40 = ((x161==(x162==x163))&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = -1;
	static uint16_t x166 = 63U;
	int16_t x167 = -1;
	int64_t x168 = 6150162320695LL;
	static volatile int64_t t41 = 197701LL;

    t41 = ((x165==(x166==x167))&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 5699198;

    t42 = ((x169==(x170==x171))&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	static uint32_t x174 = 510674U;
	int64_t x176 = INT64_MAX;
	int64_t t43 = -7437689LL;

    t43 = ((x173==(x174==x175))&x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = INT8_MIN;
	uint32_t x179 = 13714669U;
	int16_t x180 = -3365;
	volatile int32_t t44 = 367786937;

    t44 = ((x177==(x178==x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	static int64_t x182 = INT64_MAX;
	int32_t x184 = -1;
	int32_t t45 = 1571077;

    t45 = ((x181==(x182==x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x185 = INT64_MAX;
	int32_t x186 = -1;
	int64_t x187 = -1LL;
	int64_t x188 = -59347299LL;
	static int64_t t46 = 80183LL;

    t46 = ((x185==(x186==x187))&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -846302370376984LL;
	volatile uint8_t x192 = 0U;
	static int32_t t47 = -60092;

    t47 = ((x189==(x190==x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x193 = 23910559848LLU;
	volatile int16_t x195 = INT16_MAX;
	int16_t x196 = -202;
	static volatile int32_t t48 = 0;

    t48 = ((x193==(x194==x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MAX;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -15720;

    t49 = ((x197==(x198==x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = 0;
	uint8_t x204 = 1U;
	volatile int32_t t50 = -73987;

    t50 = ((x201==(x202==x203))&x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int32_t x206 = INT32_MIN;
	volatile uint8_t x207 = 2U;
	uint32_t x208 = 1524910U;
	uint32_t t51 = 9180U;

    t51 = ((x205==(x206==x207))&x208);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = 40469477431LLU;
	uint32_t x210 = 7U;
	int64_t x211 = -1LL;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t52 = 2974LL;

    t52 = ((x209==(x210==x211))&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static uint8_t x214 = 6U;
	static volatile int64_t x215 = 0LL;
	uint8_t x216 = 2U;
	int32_t t53 = 1;

    t53 = ((x213==(x214==x215))&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -954;
	uint16_t x218 = 4194U;
	int32_t x219 = -1;
	int16_t x220 = -1;
	int32_t t54 = -550756586;

    t54 = ((x217==(x218==x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x223 = INT64_MIN;
	static volatile int32_t x224 = -2881162;
	volatile int32_t t55 = 25;

    t55 = ((x221==(x222==x223))&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	int8_t x226 = -58;
	volatile uint64_t x227 = UINT64_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 118;

    t56 = ((x225==(x226==x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 379U;
	static int8_t x230 = -15;
	uint64_t x231 = UINT64_MAX;
	volatile uint8_t x232 = UINT8_MAX;

    t57 = ((x229==(x230==x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	volatile uint16_t x234 = 26U;
	volatile uint8_t x235 = 10U;
	static volatile uint32_t t58 = 1227912159U;

    t58 = ((x233==(x234==x235))&x236);

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = -1;
	volatile int16_t x239 = -1;
	volatile uint16_t x240 = 7U;

    t59 = ((x237==(x238==x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	static uint32_t x242 = 109432610U;
	volatile int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -759919443;

    t60 = ((x241==(x242==x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -67;
	int8_t x246 = -1;
	int16_t x247 = -6364;
	uint64_t t61 = 171170LLU;

    t61 = ((x245==(x246==x247))&x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = 1725082757U;
	uint32_t x250 = 52473U;
	volatile int8_t x251 = -1;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 1917750;

    t62 = ((x249==(x250==x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = -1;
	uint8_t x255 = 21U;
	uint64_t x256 = 3708575592149LLU;

    t63 = ((x253==(x254==x255))&x256);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	int32_t x259 = 14818;
	uint32_t x260 = 3680U;
	uint32_t t64 = 82U;

    t64 = ((x257==(x258==x259))&x260);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 13116370880LLU;
	int8_t x262 = INT8_MIN;
	static volatile int8_t x263 = -1;
	volatile int32_t t65 = -222;

    t65 = ((x261==(x262==x263))&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 31LLU;
	int16_t x266 = -11;
	volatile uint16_t x268 = UINT16_MAX;
	volatile int32_t t66 = -51559196;

    t66 = ((x265==(x266==x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = 1;
	static uint8_t x271 = 2U;
	static int8_t x272 = -1;
	static int32_t t67 = 0;

    t67 = ((x269==(x270==x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = -88532LL;
	int16_t x275 = 36;
	int16_t x276 = -4549;

    t68 = ((x273==(x274==x275))&x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	static int8_t x278 = INT8_MIN;
	uint64_t x279 = 16LLU;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -299287;

    t69 = ((x277==(x278==x279))&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -146;
	int16_t x282 = -1;
	uint16_t x283 = 2U;
	int32_t t70 = 1005989929;

    t70 = ((x281==(x282==x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 8LLU;
	int64_t x286 = -1LL;
	static int16_t x287 = 7;
	int8_t x288 = -1;
	volatile int32_t t71 = -369584700;

    t71 = ((x285==(x286==x287))&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = 125;
	uint16_t x291 = 504U;
	int32_t x292 = 29993788;
	volatile int32_t t72 = 1828787;

    t72 = ((x289==(x290==x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -318;
	volatile int8_t x294 = -8;
	int64_t x296 = INT64_MAX;
	volatile int64_t t73 = 355150158087635LL;

    t73 = ((x293==(x294==x295))&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = -12405;
	uint16_t x299 = 1U;
	uint32_t x300 = 23773U;
	static uint32_t t74 = 834U;

    t74 = ((x297==(x298==x299))&x300);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	static int64_t x304 = -3218LL;
	volatile int64_t t75 = -201436800LL;

    t75 = ((x301==(x302==x303))&x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	volatile int8_t x306 = -1;
	int8_t x307 = INT8_MAX;
	static int16_t x308 = INT16_MIN;
	int32_t t76 = 10043;

    t76 = ((x305==(x306==x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x310 = INT32_MAX;
	uint8_t x312 = 16U;
	volatile int32_t t77 = -1929;

    t77 = ((x309==(x310==x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	volatile int32_t x314 = -1;
	static volatile uint64_t x316 = 15109998567100LLU;
	volatile uint64_t t78 = 24911698837750LLU;

    t78 = ((x313==(x314==x315))&x316);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -38;
	int8_t x319 = -1;
	volatile uint8_t x320 = 2U;
	volatile int32_t t79 = 6377826;

    t79 = ((x317==(x318==x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	uint32_t x322 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;

    t80 = ((x321==(x322==x323))&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x326 = 27713U;
	static int64_t x327 = INT64_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 341545;

    t81 = ((x325==(x326==x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	int16_t x330 = -1;
	int32_t x331 = -1;
	uint16_t x332 = 82U;
	volatile int32_t t82 = 42;

    t82 = ((x329==(x330==x331))&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 877U;
	int64_t x335 = INT64_MIN;
	int64_t x336 = -1LL;
	volatile int64_t t83 = -475577422278317LL;

    t83 = ((x333==(x334==x335))&x336);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = 4;
	static uint32_t x338 = 0U;
	uint16_t x340 = 12076U;
	static volatile int32_t t84 = 1488;

    t84 = ((x337==(x338==x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	volatile uint32_t x342 = 178746287U;
	int64_t x343 = -599141235196487626LL;
	int64_t t85 = -21573583853127LL;

    t85 = ((x341==(x342==x343))&x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int64_t x347 = INT64_MIN;
	int32_t t86 = 174;

    t86 = ((x345==(x346==x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = -1;
	int16_t x351 = 3289;
	volatile int16_t x352 = -1;
	int32_t t87 = 6170627;

    t87 = ((x349==(x350==x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	int16_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = 341;

    t88 = ((x353==(x354==x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x357 = 11LLU;
	int32_t x358 = 10;
	int32_t x359 = 1299;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 1;

    t89 = ((x357==(x358==x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MAX;
	volatile uint64_t x362 = 36508523338LLU;
	int64_t x364 = INT64_MIN;
	volatile int64_t t90 = -1868833LL;

    t90 = ((x361==(x362==x363))&x364);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -1;
	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	uint64_t x368 = 25379021830418LLU;

    t91 = ((x365==(x366==x367))&x368);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile uint16_t x370 = UINT16_MAX;
	volatile int64_t x371 = 12LL;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = 2135LL;

    t92 = ((x369==(x370==x371))&x372);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x374 = INT16_MAX;
	uint32_t x375 = 735U;
	int16_t x376 = INT16_MAX;
	static int32_t t93 = 6;

    t93 = ((x373==(x374==x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t t94 = 462U;

    t94 = ((x377==(x378==x379))&x380);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	uint32_t x383 = 29769609U;
	uint8_t x384 = 2U;
	int32_t t95 = 372;

    t95 = ((x381==(x382==x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = INT8_MIN;
	int32_t x388 = 328051861;

    t96 = ((x385==(x386==x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	volatile uint64_t x392 = 139993218LLU;
	volatile uint64_t t97 = 3433255LLU;

    t97 = ((x389==(x390==x391))&x392);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	int8_t x394 = -1;
	volatile int16_t x396 = 0;

    t98 = ((x393==(x394==x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	volatile uint64_t x398 = 5LLU;
	uint64_t x399 = UINT64_MAX;
	uint8_t x400 = 3U;
	static int32_t t99 = 263149415;

    t99 = ((x397==(x398==x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x401 = 0;
	uint8_t x402 = 12U;
	int64_t x403 = INT64_MAX;
	volatile int32_t t100 = -908;

    t100 = ((x401==(x402==x403))&x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 80LLU;
	static volatile uint16_t x408 = 31U;

    t101 = ((x405==(x406==x407))&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	int64_t x410 = -1LL;
	volatile int16_t x411 = INT16_MIN;
	uint16_t x412 = 17U;
	static int32_t t102 = -1733129;

    t102 = ((x409==(x410==x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	static volatile uint16_t x414 = 859U;
	volatile int32_t x415 = 119514451;
	static int64_t x416 = INT64_MAX;
	int64_t t103 = -139798810590969590LL;

    t103 = ((x413==(x414==x415))&x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -1;
	int64_t x418 = INT64_MAX;
	volatile uint8_t x420 = 1U;
	int32_t t104 = 56254538;

    t104 = ((x417==(x418==x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MAX;
	uint64_t x424 = 10537802269LLU;
	static volatile uint64_t t105 = 60751697938324707LLU;

    t105 = ((x421==(x422==x423))&x424);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MAX;
	int64_t x426 = -1LL;
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 54355U;

    t106 = ((x425==(x426==x427))&x428);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 287413U;
	static int8_t x430 = -2;
	static uint16_t x431 = 253U;
	int32_t x432 = INT32_MIN;
	int32_t t107 = 6;

    t107 = ((x429==(x430==x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = 26U;
	int16_t x434 = 15524;
	static uint8_t x435 = 27U;
	uint32_t x436 = 0U;
	uint32_t t108 = 19584113U;

    t108 = ((x433==(x434==x435))&x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x438 = 17;
	volatile int64_t t109 = 383LL;

    t109 = ((x437==(x438==x439))&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = INT64_MAX;
	int64_t x442 = INT64_MIN;
	int32_t x443 = INT32_MIN;
	volatile uint8_t x444 = 2U;
	int32_t t110 = 501440139;

    t110 = ((x441==(x442==x443))&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x445 = 10092U;
	uint16_t x446 = 832U;
	int8_t x447 = INT8_MAX;
	int16_t x448 = INT16_MAX;

    t111 = ((x445==(x446==x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = 188;
	static uint16_t x451 = UINT16_MAX;
	int64_t x452 = -40774LL;

    t112 = ((x449==(x450==x451))&x452);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	static uint64_t x454 = 28156249084864LLU;
	volatile uint32_t x456 = UINT32_MAX;
	volatile uint32_t t113 = 27311U;

    t113 = ((x453==(x454==x455))&x456);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int32_t x458 = -22993323;
	volatile int8_t x459 = INT8_MAX;
	int32_t t114 = -2057438;

    t114 = ((x457==(x458==x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x461 = -1;
	uint64_t x462 = 62830252776327884LLU;
	uint64_t x463 = 2563720800530805LLU;
	int16_t x464 = 29;
	int32_t t115 = -524346;

    t115 = ((x461==(x462==x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	int8_t x466 = -1;
	static uint32_t x467 = UINT32_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t116 = 55364;

    t116 = ((x465==(x466==x467))&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	volatile int64_t x470 = -207309LL;
	static int64_t x471 = INT64_MAX;
	volatile int16_t x472 = -3348;
	int32_t t117 = 102;

    t117 = ((x469==(x470==x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MAX;
	uint8_t x474 = 59U;
	int32_t x475 = INT32_MIN;
	int32_t t118 = -2080367;

    t118 = ((x473==(x474==x475))&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	volatile int32_t x479 = INT32_MAX;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t119 = 3132305;

    t119 = ((x477==(x478==x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	int64_t x482 = 54867096469516962LL;
	int16_t x483 = INT16_MIN;
	volatile int16_t x484 = 0;
	int32_t t120 = -87;

    t120 = ((x481==(x482==x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	static uint8_t x486 = 54U;
	static int16_t x487 = -1;
	uint16_t x488 = 3226U;
	int32_t t121 = 5667;

    t121 = ((x485==(x486==x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x490 = UINT8_MAX;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = -35966008;

    t122 = ((x489==(x490==x491))&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x494 = UINT16_MAX;
	uint16_t x495 = UINT16_MAX;
	volatile int64_t t123 = 557683937782568895LL;

    t123 = ((x493==(x494==x495))&x496);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -54;
	int64_t x498 = INT64_MIN;
	int8_t x500 = INT8_MAX;
	volatile int32_t t124 = -104113;

    t124 = ((x497==(x498==x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile uint16_t x502 = UINT16_MAX;
	uint64_t x503 = UINT64_MAX;
	static int32_t t125 = 1583334;

    t125 = ((x501==(x502==x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 4U;
	volatile uint32_t x506 = 1U;
	int64_t x508 = INT64_MIN;
	int64_t t126 = -7LL;

    t126 = ((x505==(x506==x507))&x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x510 = INT64_MAX;
	static uint32_t x511 = 7746048U;
	volatile int32_t x512 = INT32_MIN;
	volatile int32_t t127 = 122778;

    t127 = ((x509==(x510==x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 1043051477084362046LLU;
	uint32_t x516 = UINT32_MAX;
	uint32_t t128 = 1853U;

    t128 = ((x513==(x514==x515))&x516);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int32_t x518 = 71410;
	int64_t x519 = INT64_MIN;
	int32_t t129 = 785481;

    t129 = ((x517==(x518==x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x521 = 1U;
	int16_t x522 = INT16_MIN;
	static int8_t x523 = -1;
	uint16_t x524 = 136U;
	static volatile int32_t t130 = -3453;

    t130 = ((x521==(x522==x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int32_t x526 = -32188;
	volatile uint8_t x527 = UINT8_MAX;
	uint32_t t131 = 2112854679U;

    t131 = ((x525==(x526==x527))&x528);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	volatile int8_t x530 = -1;
	int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MIN;
	static volatile int32_t t132 = -252;

    t132 = ((x529==(x530==x531))&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = -3626781213273LL;
	static int32_t x535 = -1;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t133 = -95;

    t133 = ((x533==(x534==x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x537 = 30962160891578611LL;
	static int16_t x538 = INT16_MAX;
	static int32_t x539 = -1;
	volatile uint64_t x540 = 264910938619929194LLU;
	uint64_t t134 = 100LLU;

    t134 = ((x537==(x538==x539))&x540);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	static volatile int8_t x542 = -1;
	static uint64_t x544 = 75844885545816592LLU;
	static uint64_t t135 = 1036789LLU;

    t135 = ((x541==(x542==x543))&x544);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = 7599634203456761LLU;
	static int16_t x546 = INT16_MIN;
	static volatile int32_t x548 = INT32_MAX;
	static volatile int32_t t136 = 10187074;

    t136 = ((x545==(x546==x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -40;
	int8_t x550 = 1;
	int8_t x551 = INT8_MIN;
	static int64_t x552 = INT64_MIN;

    t137 = ((x549==(x550==x551))&x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x553 = UINT64_MAX;
	int64_t x554 = -1LL;
	int8_t x555 = INT8_MAX;
	int32_t x556 = 2;
	volatile int32_t t138 = -501;

    t138 = ((x553==(x554==x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int8_t x559 = INT8_MIN;
	uint8_t x560 = 19U;
	volatile int32_t t139 = -3;

    t139 = ((x557==(x558==x559))&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x562 = 0;
	static int8_t x564 = 0;
	volatile int32_t t140 = -3301;

    t140 = ((x561==(x562==x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -782402;
	int32_t x566 = INT32_MIN;
	uint64_t x567 = UINT64_MAX;
	volatile uint16_t x568 = 1U;
	volatile int32_t t141 = -57109178;

    t141 = ((x565==(x566==x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = -1;
	static uint32_t x571 = 2562691U;

    t142 = ((x569==(x570==x571))&x572);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	uint32_t x576 = 341U;
	uint32_t t143 = 1U;

    t143 = ((x573==(x574==x575))&x576);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x579 = 133742470214642LL;
	int32_t x580 = 170;
	int32_t t144 = -104405;

    t144 = ((x577==(x578==x579))&x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x581 = 115U;
	int32_t x582 = INT32_MIN;
	static int32_t x583 = INT32_MIN;
	int32_t t145 = 145965321;

    t145 = ((x581==(x582==x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 57322U;
	uint64_t x586 = 31964749579925828LLU;
	int8_t x587 = -31;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -19;

    t146 = ((x585==(x586==x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = UINT16_MAX;
	int32_t x590 = INT32_MIN;
	uint8_t x591 = UINT8_MAX;
	volatile uint8_t x592 = 32U;

    t147 = ((x589==(x590==x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = INT64_MIN;
	int16_t x594 = INT16_MAX;
	volatile uint16_t x595 = UINT16_MAX;
	int64_t x596 = INT64_MAX;
	int64_t t148 = -13616185170376288LL;

    t148 = ((x593==(x594==x595))&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MAX;
	static int32_t x599 = -749266462;
	int32_t x600 = INT32_MAX;

    t149 = ((x597==(x598==x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	static int16_t x603 = INT16_MIN;
	static int32_t x604 = INT32_MIN;

    t150 = ((x601==(x602==x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = -61;
	static int64_t x607 = -29LL;
	volatile int32_t x608 = -35441888;
	volatile int32_t t151 = -100771;

    t151 = ((x605==(x606==x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x609 = UINT8_MAX;
	int32_t x610 = 0;
	int16_t x611 = INT16_MIN;
	volatile uint64_t x612 = UINT64_MAX;

    t152 = ((x609==(x610==x611))&x612);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MAX;
	int16_t x615 = INT16_MIN;
	int64_t x616 = -422574229406524LL;

    t153 = ((x613==(x614==x615))&x616);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -105;
	static int16_t x618 = -1;
	int32_t x619 = INT32_MIN;
	volatile int8_t x620 = INT8_MAX;
	volatile int32_t t154 = -29;

    t154 = ((x617==(x618==x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	volatile int32_t x623 = INT32_MIN;
	static uint16_t x624 = 18884U;
	static int32_t t155 = -25184067;

    t155 = ((x621==(x622==x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x627 = INT64_MAX;
	int32_t t156 = -25666;

    t156 = ((x625==(x626==x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x630 = 2152;
	static int32_t x631 = -1;
	volatile uint32_t x632 = 191U;
	volatile uint32_t t157 = 1625U;

    t157 = ((x629==(x630==x631))&x632);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	uint64_t x635 = UINT64_MAX;
	volatile int32_t t158 = -12660983;

    t158 = ((x633==(x634==x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	uint8_t x638 = 1U;
	uint8_t x639 = UINT8_MAX;
	static volatile int8_t x640 = -1;
	static volatile int32_t t159 = 17;

    t159 = ((x637==(x638==x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = INT32_MIN;
	static int16_t x642 = INT16_MIN;
	uint16_t x643 = 243U;
	uint64_t x644 = 1288993255091417342LLU;
	volatile uint64_t t160 = 596566946LLU;

    t160 = ((x641==(x642==x643))&x644);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	uint64_t x647 = UINT64_MAX;
	int64_t x648 = INT64_MIN;
	static volatile int64_t t161 = -1LL;

    t161 = ((x645==(x646==x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 14870552442283LLU;
	int64_t x650 = -1LL;
	int16_t x651 = INT16_MAX;
	uint32_t x652 = UINT32_MAX;
	volatile uint32_t t162 = 0U;

    t162 = ((x649==(x650==x651))&x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MIN;
	int32_t x654 = INT32_MIN;
	volatile int8_t x655 = -1;
	static int32_t x656 = INT32_MIN;

    t163 = ((x653==(x654==x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = 22U;
	int16_t x658 = -3713;
	static int8_t x659 = INT8_MIN;
	volatile int32_t x660 = INT32_MIN;
	volatile int32_t t164 = -6737;

    t164 = ((x657==(x658==x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	int32_t x662 = -1;
	uint32_t x664 = 5U;
	volatile uint32_t t165 = 67U;

    t165 = ((x661==(x662==x663))&x664);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = INT32_MIN;
	volatile int64_t x667 = INT64_MIN;
	int8_t x668 = INT8_MIN;
	int32_t t166 = 2;

    t166 = ((x665==(x666==x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static volatile int8_t x671 = 14;
	static volatile int32_t t167 = 1084;

    t167 = ((x669==(x670==x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	volatile uint32_t x674 = 13U;
	volatile int16_t x675 = -1;
	int8_t x676 = INT8_MAX;
	volatile int32_t t168 = -1794759;

    t168 = ((x673==(x674==x675))&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = -1LL;
	uint16_t x679 = UINT16_MAX;
	int32_t t169 = -82772589;

    t169 = ((x677==(x678==x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 1U;
	volatile int64_t x682 = INT64_MIN;
	static int16_t x683 = INT16_MAX;
	static int16_t x684 = 1;

    t170 = ((x681==(x682==x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x685 = UINT16_MAX;
	int32_t x687 = INT32_MAX;
	int8_t x688 = -1;
	int32_t t171 = 129489673;

    t171 = ((x685==(x686==x687))&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = UINT64_MAX;
	int64_t x691 = INT64_MIN;
	int64_t x692 = 31LL;
	volatile int64_t t172 = -65LL;

    t172 = ((x689==(x690==x691))&x692);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = UINT64_MAX;
	int32_t x694 = -47828003;
	int16_t x695 = INT16_MIN;
	static int32_t x696 = -169288;
	int32_t t173 = -1786;

    t173 = ((x693==(x694==x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 0;
	int16_t x699 = 100;
	uint32_t x700 = 67579633U;
	uint32_t t174 = 61U;

    t174 = ((x697==(x698==x699))&x700);

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = INT16_MIN;
	volatile uint16_t x702 = 74U;
	uint32_t x703 = 83819227U;
	int64_t x704 = INT64_MIN;
	int64_t t175 = -17422LL;

    t175 = ((x701==(x702==x703))&x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 30U;
	int8_t x708 = 3;
	volatile int32_t t176 = 181478;

    t176 = ((x705==(x706==x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MIN;
	volatile uint8_t x710 = 46U;
	static uint16_t x711 = 20U;
	volatile int32_t t177 = -10;

    t177 = ((x709==(x710==x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -537606376174056201LL;
	int32_t x714 = INT32_MIN;
	int16_t x715 = -1;
	volatile int32_t t178 = -2;

    t178 = ((x713==(x714==x715))&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = 7U;
	static int32_t x719 = -445613514;
	int64_t x720 = INT64_MIN;
	volatile int64_t t179 = 16856913378012447LL;

    t179 = ((x717==(x718==x719))&x720);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	uint16_t x722 = 29423U;
	uint32_t x723 = UINT32_MAX;
	static uint32_t x724 = 536U;
	static volatile uint32_t t180 = 139U;

    t180 = ((x721==(x722==x723))&x724);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	int32_t x726 = INT32_MIN;
	uint8_t x728 = 127U;
	volatile int32_t t181 = 25097593;

    t181 = ((x725==(x726==x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = -1LL;
	uint32_t x731 = UINT32_MAX;
	static uint8_t x732 = UINT8_MAX;

    t182 = ((x729==(x730==x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	int16_t x734 = -1;
	volatile uint8_t x735 = 28U;
	uint16_t x736 = UINT16_MAX;
	int32_t t183 = -1797011;

    t183 = ((x733==(x734==x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -44;
	int8_t x739 = -1;

    t184 = ((x737==(x738==x739))&x740);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x742 = 40668234471LLU;
	static int32_t x743 = 2;
	uint64_t x744 = 151474842938LLU;
	volatile uint64_t t185 = 2620747285717LLU;

    t185 = ((x741==(x742==x743))&x744);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int16_t x746 = -1;
	int8_t x747 = -1;
	uint32_t x748 = 0U;

    t186 = ((x745==(x746==x747))&x748);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static int8_t x750 = INT8_MIN;
	int64_t x751 = INT64_MIN;
	volatile uint16_t x752 = 400U;
	volatile int32_t t187 = 4886;

    t187 = ((x749==(x750==x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -3678235LL;
	int32_t x755 = INT32_MAX;
	volatile int32_t x756 = -25712;
	volatile int32_t t188 = 6;

    t188 = ((x753==(x754==x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = 601644761;
	volatile int16_t x758 = 1003;
	uint8_t x759 = UINT8_MAX;

    t189 = ((x757==(x758==x759))&x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	int8_t x762 = -3;
	int8_t x764 = -28;
	volatile int32_t t190 = -886;

    t190 = ((x761==(x762==x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -18;
	uint8_t x768 = 63U;

    t191 = ((x765==(x766==x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	volatile uint16_t x772 = UINT16_MAX;
	volatile int32_t t192 = -1;

    t192 = ((x769==(x770==x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	int32_t x774 = -1;
	int8_t x775 = INT8_MAX;
	int32_t t193 = -588802328;

    t193 = ((x773==(x774==x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -1;
	volatile int16_t x778 = INT16_MIN;
	volatile uint32_t x779 = UINT32_MAX;
	volatile int16_t x780 = INT16_MIN;
	static int32_t t194 = -12;

    t194 = ((x777==(x778==x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = 7LLU;
	int64_t x783 = 65444114863350378LL;
	static int32_t x784 = INT32_MAX;
	int32_t t195 = 671674;

    t195 = ((x781==(x782==x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 1817856370046LLU;
	uint64_t x787 = UINT64_MAX;
	volatile int32_t x788 = INT32_MAX;

    t196 = ((x785==(x786==x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x789 = 481900737789881677LLU;
	volatile uint8_t x790 = UINT8_MAX;
	uint32_t x791 = 4225U;
	int8_t x792 = -1;
	int32_t t197 = -71;

    t197 = ((x789==(x790==x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 7U;
	int64_t x794 = INT64_MIN;
	int16_t x795 = -624;
	volatile uint16_t x796 = 184U;
	volatile int32_t t198 = 2216;

    t198 = ((x793==(x794==x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 1U;
	int8_t x798 = -1;
	static uint16_t x799 = 2U;
	static uint8_t x800 = 11U;
	int32_t t199 = 389;

    t199 = ((x797==(x798==x799))&x800);

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

