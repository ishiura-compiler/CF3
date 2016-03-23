
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

static volatile uint64_t x2 = UINT64_MAX;
volatile int8_t x5 = -42;
static int16_t x10 = INT16_MAX;
int8_t x13 = INT8_MAX;
static volatile uint64_t x23 = UINT64_MAX;
volatile int32_t t5 = 3042;
int32_t t6 = 20418;
int8_t x40 = -1;
int8_t x44 = INT8_MIN;
int32_t t11 = -1563;
int64_t x55 = INT64_MIN;
volatile uint16_t x56 = 91U;
int32_t t13 = -329957657;
static int32_t x70 = INT32_MIN;
uint32_t x74 = 495584639U;
uint8_t x75 = 2U;
static int32_t x80 = INT32_MIN;
int32_t t19 = -111951332;
static volatile int32_t x81 = INT32_MIN;
int64_t x86 = INT64_MIN;
int8_t x90 = INT8_MAX;
int16_t x91 = INT16_MIN;
uint32_t x92 = 7194892U;
volatile int32_t x95 = INT32_MAX;
int16_t x97 = INT16_MAX;
int16_t x100 = -203;
int16_t x101 = -1;
static int8_t x108 = INT8_MIN;
int32_t x116 = 70101149;
int64_t x120 = -1LL;
int16_t x123 = -1;
static uint8_t x130 = 4U;
int32_t x132 = -1;
int64_t x133 = INT64_MAX;
int32_t t34 = 48211;
int64_t x142 = INT64_MIN;
static int16_t x146 = INT16_MIN;
volatile uint64_t x152 = 772LLU;
volatile int32_t x156 = INT32_MIN;
int32_t t38 = -8;
int8_t x163 = INT8_MIN;
int8_t x164 = INT8_MIN;
int32_t x165 = INT32_MIN;
static int8_t x167 = INT8_MIN;
int64_t x180 = INT64_MIN;
uint64_t x181 = 4624533184873327LLU;
int64_t x193 = -1LL;
int64_t x195 = 1306491LL;
volatile int32_t t48 = -152749;
volatile int8_t x199 = INT8_MIN;
uint32_t x203 = 4U;
int8_t x212 = INT8_MAX;
int32_t x213 = INT32_MIN;
int32_t t53 = 15337025;
int8_t x218 = INT8_MIN;
volatile int64_t x226 = INT64_MIN;
volatile int8_t x227 = -1;
int16_t x228 = -1;
int32_t t56 = 76661467;
int8_t x231 = INT8_MIN;
static int32_t t57 = -426148;
uint32_t x239 = 4050U;
volatile int8_t x240 = INT8_MIN;
uint8_t x245 = 0U;
volatile uint64_t x246 = 15367LLU;
uint32_t x247 = UINT32_MAX;
volatile int32_t t61 = 360;
volatile int64_t x249 = 0LL;
volatile uint32_t x254 = UINT32_MAX;
static int32_t x260 = -1;
int32_t x262 = -15045205;
volatile int8_t x264 = 1;
int16_t x267 = INT16_MAX;
int32_t t67 = -161;
static int8_t x275 = -1;
int64_t x276 = INT64_MAX;
volatile int32_t t68 = -1543331;
volatile uint8_t x277 = UINT8_MAX;
uint16_t x278 = 466U;
uint8_t x282 = 23U;
uint8_t x285 = UINT8_MAX;
int8_t x287 = INT8_MAX;
static int64_t x295 = INT64_MAX;
uint16_t x297 = UINT16_MAX;
uint64_t x300 = 875060629LLU;
uint64_t x304 = 208602078673421LLU;
volatile int64_t x306 = -1LL;
int32_t x315 = -1;
int16_t x319 = INT16_MAX;
static uint8_t x322 = 21U;
int32_t t80 = 321844;
int32_t x325 = INT32_MIN;
static int32_t x326 = INT32_MIN;
static uint64_t x327 = UINT64_MAX;
volatile int32_t t81 = 0;
int32_t x336 = -1;
int32_t t83 = 8;
static int16_t x347 = INT16_MIN;
static volatile int32_t x350 = INT32_MIN;
static int64_t x359 = -67734257070049378LL;
int64_t x366 = INT64_MAX;
volatile int32_t x372 = -1;
static volatile int64_t x373 = -1LL;
volatile uint8_t x378 = 87U;
uint16_t x387 = 12U;
int64_t x391 = -70362689400995LL;
volatile int32_t t98 = 20048;
int16_t x408 = 1;
volatile int32_t t103 = 16830;
int32_t t105 = 1;
int16_t x430 = -1;
int64_t x453 = 53366LL;
int32_t x454 = INT32_MAX;
int8_t x455 = INT8_MIN;
volatile int16_t x458 = 13419;
int32_t x459 = -2;
static int8_t x460 = 0;
volatile int32_t t114 = 279455;
uint32_t x463 = UINT32_MAX;
int64_t x465 = INT64_MIN;
int32_t x469 = INT32_MIN;
int64_t x473 = -1LL;
volatile int32_t t119 = -251;
uint32_t x484 = 65092U;
int32_t x487 = INT32_MAX;
static int8_t x495 = -2;
int16_t x496 = INT16_MIN;
uint8_t x502 = UINT8_MAX;
int32_t t126 = 1;
volatile int16_t x518 = INT16_MIN;
int32_t t129 = 47971991;
static int32_t x521 = INT32_MIN;
int8_t x530 = -2;
volatile int32_t t133 = 4260917;
int8_t x537 = INT8_MIN;
int8_t x539 = -4;
volatile int16_t x548 = INT16_MIN;
int16_t x553 = -1327;
int32_t t138 = -23595620;
uint8_t x561 = 58U;
volatile int32_t x572 = -12;
int8_t x573 = -1;
int8_t x576 = INT8_MAX;
uint32_t x587 = 357375U;
volatile int32_t t146 = 4;
static int8_t x594 = INT8_MIN;
static volatile int32_t t148 = 5453977;
static int32_t t149 = -5;
int8_t x603 = 0;
int32_t x610 = INT32_MIN;
static int32_t t153 = 157;
int64_t x620 = INT64_MIN;
volatile int32_t t154 = -13944090;
int64_t x630 = -1LL;
uint8_t x633 = 28U;
volatile int8_t x637 = -1;
volatile uint16_t x639 = 29962U;
int32_t t159 = 32624;
int32_t x642 = -51860330;
int32_t x644 = 3946;
volatile int8_t x651 = 20;
volatile int32_t t162 = 1;
static int32_t t164 = -6793;
int64_t x666 = 273664911957767LL;
uint8_t x673 = 1U;
int32_t t168 = 511;
int8_t x677 = -2;
int8_t x683 = -1;
int8_t x693 = INT8_MAX;
uint64_t x701 = 197993619865220718LLU;
int16_t x708 = INT16_MIN;
int16_t x712 = INT16_MIN;
int32_t x716 = -1;
volatile int64_t x719 = -40584477213LL;
uint32_t x721 = UINT32_MAX;
uint16_t x722 = 27U;
volatile int32_t x723 = -83;
uint8_t x728 = 63U;
static uint16_t x736 = 1U;
volatile int32_t t183 = 0;
int8_t x738 = INT8_MIN;
uint8_t x752 = 11U;
int16_t x756 = INT16_MAX;
static int8_t x765 = 0;
volatile int32_t t191 = 1877;
int16_t x780 = -1;
int64_t x781 = -112837941318927LL;
int8_t x784 = INT8_MAX;
int32_t t195 = -1;
volatile int16_t x786 = INT16_MIN;
uint16_t x792 = 199U;
volatile int32_t t197 = 2014;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	static int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1;

    t0 = ((x1==(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 60U;
	int32_t x7 = INT32_MIN;
	volatile int8_t x8 = INT8_MAX;
	int32_t t1 = -222633;

    t1 = ((x5==(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 85819;

    t2 = ((x9==(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MAX;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -121274751;

    t3 = ((x13==(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 610U;
	volatile int64_t x18 = -407318718250862LL;
	volatile int16_t x19 = INT16_MIN;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 170;

    t4 = ((x17==(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 83;
	uint8_t x22 = 3U;
	int16_t x24 = INT16_MIN;

    t5 = ((x21==(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int8_t x26 = 1;
	int32_t x27 = 51102;
	static int64_t x28 = -1LL;

    t6 = ((x25==(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = 139;

    t7 = ((x29==(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = -1;
	int16_t x36 = 580;
	static volatile int32_t t8 = -1405;

    t8 = ((x33==(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 7331;
	volatile int32_t t9 = 0;

    t9 = ((x37==(x38==x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	uint16_t x42 = 0U;
	uint16_t x43 = 201U;
	volatile int32_t t10 = 7570668;

    t10 = ((x41==(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 3U;
	int64_t x46 = -129576061LL;
	int16_t x47 = 3773;
	static uint16_t x48 = 14054U;

    t11 = ((x45==(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MAX;
	uint8_t x50 = 112U;
	static int16_t x51 = INT16_MAX;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -14816;

    t12 = ((x49==(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	static int32_t x54 = -200075588;

    t13 = ((x53==(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = INT64_MIN;
	int64_t x59 = -204731745LL;
	static uint16_t x60 = 882U;
	int32_t t14 = -4;

    t14 = ((x57==(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x61 = 9639139U;
	volatile int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	int32_t x64 = -1;
	int32_t t15 = 24317254;

    t15 = ((x61==(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	static int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MIN;
	int16_t x68 = 1;
	int32_t t16 = -56;

    t16 = ((x65==(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MAX;
	uint32_t x71 = 1931049U;
	static int32_t x72 = INT32_MIN;
	int32_t t17 = 1;

    t17 = ((x69==(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint8_t x76 = 44U;
	static int32_t t18 = 1;

    t18 = ((x73==(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -1LL;
	volatile int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = 3788U;

    t19 = ((x77==(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = INT64_MIN;
	uint64_t x83 = 12LLU;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 4995;

    t20 = ((x81==(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 0U;
	uint16_t x87 = 72U;
	uint16_t x88 = 3U;
	volatile int32_t t21 = 7041066;

    t21 = ((x85==(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -37;
	int32_t t22 = -58116;

    t22 = ((x89==(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 105U;
	int8_t x94 = -1;
	int16_t x96 = -1;
	int32_t t23 = -7609;

    t23 = ((x93==(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	int8_t x99 = -3;
	int32_t t24 = -15427047;

    t24 = ((x97==(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -439736014831LL;
	static int16_t x103 = INT16_MAX;
	uint8_t x104 = 13U;
	volatile int32_t t25 = 0;

    t25 = ((x101==(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = INT64_MIN;
	volatile uint64_t x107 = 149702068LLU;
	volatile int32_t t26 = -990820215;

    t26 = ((x105==(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = 767383LL;
	int64_t x110 = INT64_MAX;
	int16_t x111 = INT16_MAX;
	int16_t x112 = -1;
	volatile int32_t t27 = 4;

    t27 = ((x109==(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	uint16_t x114 = 4330U;
	int32_t x115 = -1;
	int32_t t28 = 201787881;

    t28 = ((x113==(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	static int16_t x118 = 4;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t29 = 3836;

    t29 = ((x117==(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 12U;
	uint32_t x122 = 13600U;
	volatile uint64_t x124 = 503534687085LLU;
	int32_t t30 = 24825;

    t30 = ((x121==(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -18;
	int16_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int8_t x128 = -1;
	volatile int32_t t31 = -7822;

    t31 = ((x125==(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x129 = 3265U;
	int16_t x131 = INT16_MAX;
	int32_t t32 = -2204;

    t32 = ((x129==(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x134 = 2;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -10538110;

    t33 = ((x133==(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x138 = -1;
	volatile uint16_t x139 = 597U;
	static int32_t x140 = INT32_MAX;

    t34 = ((x137==(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 1614741174407351LLU;
	int64_t x143 = 653644922871511423LL;
	int16_t x144 = 660;
	int32_t t35 = 0;

    t35 = ((x141==(x142==x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int16_t x147 = INT16_MAX;
	static uint16_t x148 = 12U;
	volatile int32_t t36 = -3;

    t36 = ((x145==(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = UINT8_MAX;
	int8_t x150 = 2;
	static uint64_t x151 = UINT64_MAX;
	volatile int32_t t37 = -659;

    t37 = ((x149==(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint16_t x154 = 478U;
	uint32_t x155 = 176U;

    t38 = ((x153==(x154==x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int32_t x158 = 503;
	int32_t x159 = -234970;
	uint32_t x160 = 729497U;
	static volatile int32_t t39 = -62;

    t39 = ((x157==(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 4U;
	static int16_t x162 = INT16_MIN;
	static volatile int32_t t40 = 15;

    t40 = ((x161==(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x166 = 2038U;
	int32_t x168 = 15735662;
	volatile int32_t t41 = -201380691;

    t41 = ((x165==(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	static volatile int64_t x170 = -1LL;
	volatile int8_t x171 = -1;
	uint16_t x172 = UINT16_MAX;
	static int32_t t42 = 2410329;

    t42 = ((x169==(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = -6;
	int32_t t43 = -27;

    t43 = ((x173==(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	volatile uint16_t x178 = UINT16_MAX;
	static volatile int16_t x179 = INT16_MIN;
	volatile int32_t t44 = -36733;

    t44 = ((x177==(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -873543;
	int16_t x183 = -1;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -7812571;

    t45 = ((x181==(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	static uint16_t x186 = 1U;
	int32_t x187 = -15849764;
	uint16_t x188 = 1786U;
	int32_t t46 = -65982;

    t46 = ((x185==(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x189 = 12035U;
	volatile uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = -1;
	uint32_t x192 = 303U;
	int32_t t47 = 31784;

    t47 = ((x189==(x190==x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = 3461985LLU;
	int16_t x196 = -1;

    t48 = ((x193==(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	static uint64_t x198 = 8974226158423484393LLU;
	static uint16_t x200 = 3U;
	int32_t t49 = -1077492;

    t49 = ((x197==(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int64_t x204 = 83243053574886064LL;
	static volatile int32_t t50 = 0;

    t50 = ((x201==(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -1;
	static uint64_t x206 = 1215465852610LLU;
	int16_t x207 = -23;
	int8_t x208 = 0;
	int32_t t51 = 13;

    t51 = ((x205==(x206==x207))==x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x209 = INT16_MAX;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -1;
	volatile int32_t t52 = -17;

    t52 = ((x209==(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x214 = -6;
	volatile int64_t x215 = -6LL;
	static int64_t x216 = -230948899821LL;

    t53 = ((x213==(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1;
	volatile int32_t x219 = -267830;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -297;

    t54 = ((x217==(x218==x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile int8_t x222 = INT8_MAX;
	int32_t x223 = 2;
	static uint64_t x224 = 3650534528601769434LLU;
	int32_t t55 = -3035841;

    t55 = ((x221==(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;

    t56 = ((x225==(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -5106083LL;
	int8_t x230 = 26;
	uint64_t x232 = UINT64_MAX;

    t57 = ((x229==(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MAX;
	uint8_t x234 = 44U;
	int8_t x235 = -1;
	volatile int64_t x236 = -1LL;
	static int32_t t58 = -723439260;

    t58 = ((x233==(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = -1LL;
	int64_t x238 = -1LL;
	int32_t t59 = 38;

    t59 = ((x237==(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	static uint8_t x242 = 28U;
	static volatile int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;
	static int32_t t60 = -94;

    t60 = ((x241==(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x248 = UINT16_MAX;

    t61 = ((x245==(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x250 = INT16_MAX;
	int64_t x251 = -17969232172829016LL;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -4124;

    t62 = ((x249==(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	int64_t x255 = -1LL;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = -22859015;

    t63 = ((x253==(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x257 = UINT32_MAX;
	uint8_t x258 = 67U;
	int64_t x259 = INT64_MIN;
	volatile int32_t t64 = -30528;

    t64 = ((x257==(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	int8_t x263 = -2;
	int32_t t65 = 6554958;

    t65 = ((x261==(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -48420LL;
	uint16_t x266 = 310U;
	uint8_t x268 = 2U;
	int32_t t66 = -98250;

    t66 = ((x265==(x266==x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = UINT16_MAX;
	uint8_t x272 = UINT8_MAX;

    t67 = ((x269==(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = UINT32_MAX;

    t68 = ((x273==(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x279 = -4131632;
	static uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -54582;

    t69 = ((x277==(x278==x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x281 = 1U;
	int64_t x283 = -1LL;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = 2429541;

    t70 = ((x281==(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = -13LL;
	static int32_t x288 = -269849702;
	volatile int32_t t71 = -398240;

    t71 = ((x285==(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int32_t x290 = -1;
	volatile int64_t x291 = -1LL;
	static int32_t x292 = INT32_MIN;
	int32_t t72 = 526396;

    t72 = ((x289==(x290==x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x293 = 0;
	int64_t x294 = INT64_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 1;

    t73 = ((x293==(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x298 = 82U;
	int32_t x299 = INT32_MIN;
	static volatile int32_t t74 = 332;

    t74 = ((x297==(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 3687;
	uint16_t x302 = 21061U;
	int64_t x303 = -938811LL;
	int32_t t75 = -46;

    t75 = ((x301==(x302==x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x305 = -1;
	int8_t x307 = 0;
	int8_t x308 = 0;
	int32_t t76 = 214;

    t76 = ((x305==(x306==x307))==x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = 158U;
	int64_t x310 = INT64_MAX;
	volatile int16_t x311 = -872;
	uint32_t x312 = 106U;
	volatile int32_t t77 = 8915453;

    t77 = ((x309==(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = 1012572897092776559LLU;
	int32_t x316 = 712115;
	int32_t t78 = 626;

    t78 = ((x313==(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 1U;
	static uint64_t x318 = 443632LLU;
	int32_t x320 = INT32_MAX;
	int32_t t79 = 1006700;

    t79 = ((x317==(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -26;
	uint32_t x323 = 1499552U;
	uint64_t x324 = 490546380LLU;

    t80 = ((x321==(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x328 = INT32_MAX;

    t81 = ((x325==(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = 7326001LL;
	static int64_t x331 = -1LL;
	uint64_t x332 = 5124LLU;
	static int32_t t82 = -1080801;

    t82 = ((x329==(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	static int16_t x335 = INT16_MAX;

    t83 = ((x333==(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = INT16_MAX;
	int64_t x338 = -1LL;
	static uint32_t x339 = 245704U;
	int64_t x340 = -1LL;
	volatile int32_t t84 = -60;

    t84 = ((x337==(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 3604240584LLU;
	uint64_t x342 = UINT64_MAX;
	uint64_t x343 = 0LLU;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 38023820;

    t85 = ((x341==(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	static int32_t x348 = 3102536;
	int32_t t86 = 23;

    t86 = ((x345==(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 0U;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = -19196;

    t87 = ((x349==(x350==x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MAX;
	volatile int64_t x355 = 323526117LL;
	int32_t x356 = 51;
	volatile int32_t t88 = -35240;

    t88 = ((x353==(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 22U;
	int8_t x358 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -14372;

    t89 = ((x357==(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MAX;
	static volatile int32_t x363 = -1;
	static volatile int32_t x364 = INT32_MIN;
	static int32_t t90 = 1;

    t90 = ((x361==(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	uint16_t x367 = 7U;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -204019990;

    t91 = ((x365==(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MIN;
	int64_t x370 = 1254266769273LL;
	int64_t x371 = -88399136247LL;
	static volatile int32_t t92 = -150096;

    t92 = ((x369==(x370==x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x374 = INT8_MAX;
	int8_t x375 = -10;
	static int8_t x376 = INT8_MAX;
	int32_t t93 = -130230;

    t93 = ((x373==(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 4317845919428342LLU;
	static int32_t x379 = -1;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 7689346;

    t94 = ((x377==(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -29028187;
	static int8_t x382 = -1;
	static int32_t x383 = -7232;
	static int64_t x384 = -1LL;
	volatile int32_t t95 = 3659;

    t95 = ((x381==(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	static uint32_t x386 = 6804U;
	int64_t x388 = -41821341LL;
	int32_t t96 = 10539952;

    t96 = ((x385==(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -2;
	uint32_t x390 = 2U;
	int32_t x392 = -1;
	volatile int32_t t97 = -3469693;

    t97 = ((x389==(x390==x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = 1755774U;
	int64_t x394 = INT64_MIN;
	volatile uint32_t x395 = UINT32_MAX;
	int32_t x396 = -1;

    t98 = ((x393==(x394==x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	uint64_t x399 = 864370526137612654LLU;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = 20;

    t99 = ((x397==(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 187943554U;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MIN;
	int32_t t100 = -920935736;

    t100 = ((x401==(x402==x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	volatile uint8_t x406 = 92U;
	uint32_t x407 = 347941508U;
	int32_t t101 = 3;

    t101 = ((x405==(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x409 = 30U;
	static int64_t x410 = INT64_MAX;
	volatile int8_t x411 = INT8_MAX;
	int32_t x412 = INT32_MIN;
	static int32_t t102 = 587;

    t102 = ((x409==(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = INT32_MAX;
	static volatile int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MAX;
	uint32_t x416 = 4U;

    t103 = ((x413==(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint64_t x418 = 716778636LLU;
	int8_t x419 = INT8_MIN;
	int16_t x420 = 14;
	int32_t t104 = -586;

    t104 = ((x417==(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	static uint8_t x422 = 8U;
	int64_t x423 = 1LL;
	int64_t x424 = INT64_MIN;

    t105 = ((x421==(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = -3538943138330LL;
	uint16_t x426 = 12U;
	static int8_t x427 = 36;
	volatile int8_t x428 = INT8_MIN;
	int32_t t106 = 583187786;

    t106 = ((x425==(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x431 = -1LL;
	int16_t x432 = -57;
	int32_t t107 = -2305034;

    t107 = ((x429==(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	static int64_t x434 = 47LL;
	int16_t x435 = -1;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t108 = 1009;

    t108 = ((x433==(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = -1;
	uint64_t x439 = 5LLU;
	volatile int16_t x440 = 6320;
	volatile int32_t t109 = 6;

    t109 = ((x437==(x438==x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	static int32_t x442 = INT32_MAX;
	static int16_t x443 = INT16_MIN;
	volatile int16_t x444 = -1;
	volatile int32_t t110 = -1061214915;

    t110 = ((x441==(x442==x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 384U;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MAX;
	int32_t t111 = 3260076;

    t111 = ((x445==(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 196587U;
	int8_t x450 = 0;
	int16_t x451 = INT16_MIN;
	int64_t x452 = 162662LL;
	volatile int32_t t112 = -236;

    t112 = ((x449==(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x456 = 0;
	volatile int32_t t113 = 980991;

    t113 = ((x453==(x454==x455))==x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;

    t114 = ((x457==(x458==x459))==x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 0U;
	static volatile int32_t x462 = 6;
	int8_t x464 = INT8_MIN;
	int32_t t115 = -953177;

    t115 = ((x461==(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x466 = INT64_MIN;
	static int16_t x467 = INT16_MIN;
	volatile int64_t x468 = -137860266449LL;
	volatile int32_t t116 = 24;

    t116 = ((x465==(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x470 = INT8_MIN;
	uint32_t x471 = UINT32_MAX;
	uint16_t x472 = UINT16_MAX;
	int32_t t117 = 1;

    t117 = ((x469==(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x474 = 12U;
	int64_t x475 = INT64_MIN;
	static volatile int32_t x476 = -99894475;
	volatile int32_t t118 = 33899;

    t118 = ((x473==(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	volatile int64_t x478 = INT64_MIN;
	int16_t x479 = -934;
	volatile uint64_t x480 = UINT64_MAX;

    t119 = ((x477==(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 51934208LL;
	int64_t x482 = 309209799623LL;
	int32_t x483 = 173143643;
	static volatile int32_t t120 = 0;

    t120 = ((x481==(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MAX;
	volatile int64_t x486 = 269533098408LL;
	int16_t x488 = INT16_MIN;
	static volatile int32_t t121 = -307;

    t121 = ((x485==(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = -1LL;
	int16_t x490 = INT16_MIN;
	int8_t x491 = 4;
	volatile int32_t x492 = 8;
	volatile int32_t t122 = 94656395;

    t122 = ((x489==(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	int16_t x494 = -1;
	static volatile int32_t t123 = 3745;

    t123 = ((x493==(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x497 = 1U;
	uint8_t x498 = 92U;
	volatile int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MAX;
	volatile int32_t t124 = -8722;

    t124 = ((x497==(x498==x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 30U;
	int32_t x503 = INT32_MIN;
	static int32_t x504 = -1;
	int32_t t125 = 60144400;

    t125 = ((x501==(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	volatile int16_t x506 = -110;
	int16_t x507 = -1;
	volatile uint64_t x508 = 599642169LLU;

    t126 = ((x505==(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x509 = INT8_MAX;
	uint32_t x510 = 1167926393U;
	static volatile int16_t x511 = INT16_MAX;
	static uint32_t x512 = 192U;
	int32_t t127 = 0;

    t127 = ((x509==(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	int64_t x514 = 6800928753047897LL;
	int64_t x515 = -2581992000LL;
	static int32_t x516 = -1;
	int32_t t128 = 652;

    t128 = ((x513==(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	int64_t x519 = INT64_MAX;
	int8_t x520 = -1;

    t129 = ((x517==(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x522 = UINT8_MAX;
	int64_t x523 = -63418392778912LL;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 2059787;

    t130 = ((x521==(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MAX;
	int16_t x526 = -464;
	uint32_t x527 = UINT32_MAX;
	uint64_t x528 = 138287739339147LLU;
	static volatile int32_t t131 = -59796;

    t131 = ((x525==(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = UINT8_MAX;
	static int32_t x531 = INT32_MAX;
	int32_t x532 = INT32_MIN;
	int32_t t132 = -1799;

    t132 = ((x529==(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x533 = 7U;
	int8_t x534 = INT8_MAX;
	int16_t x535 = -7;
	volatile uint8_t x536 = UINT8_MAX;

    t133 = ((x533==(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MIN;
	int8_t x540 = INT8_MIN;
	static int32_t t134 = 11;

    t134 = ((x537==(x538==x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 1845356LLU;
	uint8_t x542 = 74U;
	int32_t x543 = -1;
	int8_t x544 = 1;
	int32_t t135 = 2123104;

    t135 = ((x541==(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MIN;
	static int64_t x546 = INT64_MAX;
	volatile int8_t x547 = INT8_MAX;
	int32_t t136 = -26;

    t136 = ((x545==(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 489614U;
	uint32_t x551 = 3865U;
	int32_t x552 = INT32_MIN;
	int32_t t137 = 402034;

    t137 = ((x549==(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = INT32_MIN;
	int16_t x555 = INT16_MIN;
	uint64_t x556 = UINT64_MAX;

    t138 = ((x553==(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	volatile int16_t x559 = INT16_MAX;
	uint64_t x560 = UINT64_MAX;
	int32_t t139 = -1094;

    t139 = ((x557==(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MAX;
	int8_t x563 = INT8_MIN;
	int32_t x564 = -26105700;
	static int32_t t140 = -237788;

    t140 = ((x561==(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = 9;
	int32_t x566 = INT32_MIN;
	static int8_t x567 = -1;
	volatile int32_t x568 = INT32_MIN;
	int32_t t141 = -3087;

    t141 = ((x565==(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	uint32_t x570 = 1U;
	int16_t x571 = 0;
	volatile int32_t t142 = 6729808;

    t142 = ((x569==(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x574 = 1026;
	uint8_t x575 = UINT8_MAX;
	volatile int32_t t143 = -232965010;

    t143 = ((x573==(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 314585373172LLU;
	static uint64_t x578 = UINT64_MAX;
	int64_t x579 = -1649464495563349LL;
	int16_t x580 = 2;
	static int32_t t144 = 27906221;

    t144 = ((x577==(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 112632679LL;
	int32_t x582 = INT32_MAX;
	uint16_t x583 = 1889U;
	uint16_t x584 = UINT16_MAX;
	int32_t t145 = 1;

    t145 = ((x581==(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x585 = 10U;
	int64_t x586 = -789LL;
	int16_t x588 = INT16_MIN;

    t146 = ((x585==(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = 2;
	uint64_t x590 = 40913440467487LLU;
	uint64_t x591 = 60257LLU;
	uint16_t x592 = 1436U;
	int32_t t147 = -7;

    t147 = ((x589==(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint64_t x593 = 57993282774LLU;
	uint16_t x595 = UINT16_MAX;
	uint64_t x596 = 2803833173307022871LLU;

    t148 = ((x593==(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x597 = 588U;
	int8_t x598 = INT8_MAX;
	static int64_t x599 = 2818376857216251LL;
	int8_t x600 = -5;

    t149 = ((x597==(x598==x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = -1;
	uint64_t x602 = 1212425589117LLU;
	uint64_t x604 = UINT64_MAX;
	static int32_t t150 = -1774;

    t150 = ((x601==(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	static uint32_t x606 = 1U;
	int16_t x607 = -1;
	static int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 44;

    t151 = ((x605==(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	int64_t x611 = -1LL;
	volatile int16_t x612 = INT16_MIN;
	int32_t t152 = 1630703;

    t152 = ((x609==(x610==x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 11247713LLU;
	uint32_t x614 = UINT32_MAX;
	int64_t x615 = INT64_MIN;
	volatile int32_t x616 = 3102;

    t153 = ((x613==(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x617 = INT16_MIN;
	static int32_t x618 = -500682;
	int32_t x619 = INT32_MIN;

    t154 = ((x617==(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 1U;
	uint64_t x622 = 396LLU;
	uint8_t x623 = 29U;
	uint8_t x624 = 1U;
	volatile int32_t t155 = 250;

    t155 = ((x621==(x622==x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = -1;
	static int32_t x626 = -1;
	volatile int64_t x627 = INT64_MIN;
	int32_t x628 = -1;
	volatile int32_t t156 = -7;

    t156 = ((x625==(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MAX;
	int16_t x631 = INT16_MIN;
	int32_t x632 = INT32_MAX;
	volatile int32_t t157 = -1;

    t157 = ((x629==(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = INT8_MIN;
	uint8_t x635 = UINT8_MAX;
	static int32_t x636 = -1;
	static volatile int32_t t158 = -461105606;

    t158 = ((x633==(x634==x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x638 = INT8_MAX;
	volatile uint16_t x640 = 10805U;

    t159 = ((x637==(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MAX;
	int8_t x643 = -1;
	volatile int32_t t160 = 2799179;

    t160 = ((x641==(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 58U;
	int16_t x646 = -882;
	static volatile int16_t x647 = 11;
	volatile int64_t x648 = -88375199LL;
	int32_t t161 = -372;

    t161 = ((x645==(x646==x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	static uint8_t x650 = UINT8_MAX;
	uint16_t x652 = 5U;

    t162 = ((x649==(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 0U;
	int32_t x654 = INT32_MIN;
	int32_t x655 = -119;
	int64_t x656 = 37248324350498LL;
	volatile int32_t t163 = 128569;

    t163 = ((x653==(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -45;
	int8_t x658 = 18;
	volatile int16_t x659 = INT16_MIN;
	static int64_t x660 = 2588342702034955320LL;

    t164 = ((x657==(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = -1LL;
	uint16_t x662 = 0U;
	volatile int32_t x663 = INT32_MIN;
	static volatile int16_t x664 = -1;
	volatile int32_t t165 = -1338900;

    t165 = ((x661==(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 13434U;
	int32_t x667 = -51708079;
	int16_t x668 = -1;
	static int32_t t166 = 19347746;

    t166 = ((x665==(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 21041680283378LL;
	volatile uint64_t x670 = 1697178653632LLU;
	int16_t x671 = -2;
	static uint64_t x672 = 8366705LLU;
	volatile int32_t t167 = -1;

    t167 = ((x669==(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = INT64_MIN;
	int64_t x675 = INT64_MIN;
	volatile int32_t x676 = INT32_MAX;

    t168 = ((x673==(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = 136583905LLU;
	int16_t x679 = -31;
	int64_t x680 = INT64_MIN;
	static int32_t t169 = 399327349;

    t169 = ((x677==(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	static int32_t x682 = INT32_MAX;
	int32_t x684 = INT32_MIN;
	static int32_t t170 = 232;

    t170 = ((x681==(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 1295219922630592790LLU;
	volatile int8_t x686 = INT8_MIN;
	volatile uint8_t x687 = 35U;
	volatile int64_t x688 = -1LL;
	volatile int32_t t171 = -1320;

    t171 = ((x685==(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	uint32_t x690 = 92686644U;
	uint64_t x691 = 52461869239481507LLU;
	uint32_t x692 = 3593U;
	int32_t t172 = -770;

    t172 = ((x689==(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x694 = -275122160;
	static uint64_t x695 = UINT64_MAX;
	uint32_t x696 = 176669924U;
	volatile int32_t t173 = -13642275;

    t173 = ((x693==(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = UINT32_MAX;
	int32_t x698 = -50;
	int8_t x699 = INT8_MAX;
	int64_t x700 = INT64_MAX;
	int32_t t174 = -125;

    t174 = ((x697==(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = INT8_MAX;
	int64_t x703 = INT64_MIN;
	static volatile uint16_t x704 = UINT16_MAX;
	int32_t t175 = 2885235;

    t175 = ((x701==(x702==x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MAX;
	volatile uint8_t x706 = 85U;
	int8_t x707 = -51;
	volatile int32_t t176 = 779410271;

    t176 = ((x705==(x706==x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 1028123LLU;
	int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MAX;
	static volatile int32_t t177 = -471;

    t177 = ((x709==(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -4528175612LL;
	volatile int32_t x714 = INT32_MIN;
	static uint8_t x715 = 1U;
	volatile int32_t t178 = -29;

    t178 = ((x713==(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	static volatile int32_t x718 = INT32_MIN;
	volatile int64_t x720 = INT64_MIN;
	int32_t t179 = -4;

    t179 = ((x717==(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x724 = INT16_MIN;
	int32_t t180 = -2875559;

    t180 = ((x721==(x722==x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	int16_t x726 = -134;
	int16_t x727 = -1;
	volatile int32_t t181 = 2831;

    t181 = ((x725==(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MAX;
	uint64_t x730 = 32LLU;
	uint64_t x731 = 14735505655014LLU;
	uint16_t x732 = 4U;
	volatile int32_t t182 = -127378421;

    t182 = ((x729==(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = 0;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = INT32_MIN;

    t183 = ((x733==(x734==x735))==x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	uint16_t x739 = UINT16_MAX;
	int32_t x740 = -1;
	static int32_t t184 = 977307110;

    t184 = ((x737==(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = 24066U;
	int32_t x742 = -458684;
	int64_t x743 = INT64_MIN;
	int32_t x744 = -1;
	volatile int32_t t185 = -46054;

    t185 = ((x741==(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 3749922871203807119LLU;
	static int32_t x746 = INT32_MAX;
	uint64_t x747 = 1822805029279LLU;
	uint64_t x748 = 174288681403LLU;
	int32_t t186 = 1407747;

    t186 = ((x745==(x746==x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	static uint16_t x750 = UINT16_MAX;
	static uint8_t x751 = UINT8_MAX;
	volatile int32_t t187 = 893707968;

    t187 = ((x749==(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 566701778U;
	int64_t x754 = -309949LL;
	int16_t x755 = INT16_MIN;
	volatile int32_t t188 = 2;

    t188 = ((x753==(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	int32_t x758 = -1;
	int8_t x759 = -29;
	uint64_t x760 = 10622811019883LLU;
	volatile int32_t t189 = 53;

    t189 = ((x757==(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x761 = 742U;
	static int64_t x762 = -98780953164LL;
	int16_t x763 = -12;
	uint16_t x764 = 2531U;
	static volatile int32_t t190 = -952635;

    t190 = ((x761==(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x766 = INT32_MIN;
	volatile int32_t x767 = -980993;
	int64_t x768 = -16410478009912961LL;

    t191 = ((x765==(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x769 = 119U;
	static int64_t x770 = -22861073555LL;
	int32_t x771 = 71734428;
	uint8_t x772 = 1U;
	volatile int32_t t192 = -3822;

    t192 = ((x769==(x770==x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = 260569324252728LL;
	uint16_t x774 = UINT16_MAX;
	int64_t x775 = INT64_MIN;
	uint64_t x776 = 261LLU;
	static volatile int32_t t193 = -349742683;

    t193 = ((x773==(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	static int32_t x778 = 496643;
	volatile uint8_t x779 = 30U;
	volatile int32_t t194 = -172145616;

    t194 = ((x777==(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = -1;
	int32_t x783 = INT32_MIN;

    t195 = ((x781==(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t196 = 258499843;

    t196 = ((x785==(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x790 = INT32_MIN;
	int16_t x791 = -3;

    t197 = ((x789==(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = 16639;
	int32_t x794 = INT32_MIN;
	static int8_t x795 = -1;
	int64_t x796 = 157283455002LL;
	int32_t t198 = 356519403;

    t198 = ((x793==(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 0;
	static volatile uint32_t x798 = 2734U;
	volatile int64_t x799 = 39372082374071LL;
	static uint32_t x800 = 1419U;
	static int32_t t199 = 373752;

    t199 = ((x797==(x798==x799))==x800);

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

