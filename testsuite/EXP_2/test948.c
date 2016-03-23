
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

int16_t x2 = INT16_MIN;
volatile int16_t x5 = -1;
int16_t x8 = INT16_MIN;
static int32_t x14 = -1;
static uint8_t x16 = UINT8_MAX;
int32_t t3 = -21;
volatile int32_t t4 = 1;
int64_t x29 = INT64_MAX;
int16_t x35 = INT16_MAX;
volatile uint8_t x36 = 126U;
int32_t t12 = -1;
int64_t x53 = -1LL;
static int64_t x61 = -1LL;
uint16_t x65 = 3951U;
volatile int64_t x76 = -1LL;
int8_t x81 = -1;
uint8_t x91 = UINT8_MAX;
int16_t x94 = INT16_MIN;
int16_t x95 = -1;
uint64_t x98 = UINT64_MAX;
int32_t t23 = 50269;
static int64_t x112 = INT64_MIN;
volatile int32_t t25 = 113;
int8_t x113 = -3;
volatile uint8_t x115 = UINT8_MAX;
int32_t t27 = 3;
static int32_t x122 = -1;
uint64_t x125 = 2501762021LLU;
static volatile int8_t x126 = INT8_MIN;
int16_t x130 = -1;
int8_t x147 = INT8_MIN;
static uint8_t x163 = 65U;
int8_t x174 = INT8_MIN;
volatile int32_t t40 = 2;
static int8_t x178 = INT8_MAX;
uint16_t x179 = 2464U;
volatile int32_t t41 = -7;
static int32_t t42 = 56;
volatile uint8_t x187 = UINT8_MAX;
int8_t x188 = 28;
int8_t x193 = -1;
int8_t x194 = -16;
int64_t x200 = INT64_MAX;
int32_t x203 = -2;
int8_t x207 = -3;
int64_t x212 = INT64_MAX;
volatile int8_t x213 = -1;
int64_t x217 = INT64_MAX;
uint16_t x226 = UINT16_MAX;
static int32_t t53 = 12146321;
uint16_t x230 = 7U;
int8_t x234 = INT8_MAX;
int8_t x235 = INT8_MIN;
volatile int32_t t55 = -1;
static uint16_t x239 = 2U;
int16_t x240 = -1;
volatile int32_t x241 = 123;
static int32_t t59 = 18;
int16_t x258 = INT16_MIN;
int64_t x260 = INT64_MAX;
int8_t x262 = -11;
volatile int32_t x266 = -1;
uint8_t x267 = UINT8_MAX;
volatile int32_t t63 = -422602966;
int32_t x271 = INT32_MIN;
static int32_t x273 = INT32_MAX;
uint32_t x276 = 21575386U;
uint32_t x278 = 1350U;
int32_t x280 = INT32_MAX;
volatile uint64_t x283 = UINT64_MAX;
uint8_t x288 = 33U;
int8_t x296 = INT8_MAX;
static int16_t x300 = 25;
uint32_t x301 = UINT32_MAX;
int32_t t74 = 3;
static volatile int32_t t76 = 925807525;
uint16_t x324 = 4085U;
int8_t x327 = -5;
uint8_t x335 = 62U;
uint16_t x336 = 24U;
volatile int64_t x338 = INT64_MIN;
int16_t x341 = 704;
int8_t x344 = INT8_MAX;
uint8_t x346 = 1U;
int16_t x352 = INT16_MAX;
volatile int32_t t86 = 0;
static volatile uint8_t x361 = 0U;
static int16_t x363 = -6;
static int32_t x385 = INT32_MIN;
int32_t t93 = -1323;
uint16_t x389 = 2U;
int16_t x391 = 4;
static uint32_t x394 = 37U;
int64_t x395 = INT64_MIN;
int8_t x399 = INT8_MIN;
int32_t t96 = 3439920;
int32_t t97 = 393497;
int32_t t98 = 15788596;
int32_t x412 = -1;
int32_t x415 = INT32_MAX;
int64_t x420 = INT64_MIN;
volatile int32_t t101 = -5;
uint64_t x424 = UINT64_MAX;
uint8_t x442 = 0U;
volatile uint32_t x449 = 1224U;
static int64_t x453 = INT64_MAX;
int8_t x461 = -1;
static int64_t x463 = INT64_MIN;
int16_t x470 = INT16_MIN;
int16_t x475 = INT16_MIN;
static int8_t x477 = INT8_MIN;
int16_t x479 = INT16_MAX;
int32_t t115 = -1066483238;
int32_t t116 = 336866;
static volatile int32_t t117 = 87323;
static int32_t x489 = 666939;
volatile int32_t t118 = 597;
static volatile int64_t x495 = INT64_MAX;
static volatile int32_t t119 = -18;
uint16_t x497 = 413U;
static volatile uint8_t x499 = 2U;
int32_t t121 = -65666;
int32_t x508 = 446308;
int32_t t123 = 16600362;
int64_t x515 = 1LL;
static uint8_t x522 = 99U;
int64_t x523 = INT64_MAX;
static int16_t x524 = 3488;
int32_t x530 = -1;
volatile int32_t t128 = 27;
static volatile uint8_t x540 = 61U;
int8_t x542 = INT8_MAX;
int8_t x554 = INT8_MAX;
volatile int32_t t134 = -1302;
int16_t x572 = INT16_MAX;
int64_t x574 = INT64_MIN;
uint32_t x585 = UINT32_MAX;
uint64_t x595 = 1286449LLU;
static volatile int32_t t143 = -4052230;
int32_t x598 = INT32_MIN;
int64_t x608 = INT64_MIN;
int32_t x610 = INT32_MIN;
static int32_t x612 = -10955;
static int32_t x614 = INT32_MIN;
static volatile uint32_t x615 = 255671U;
int32_t t149 = -417;
int32_t x630 = -12;
static volatile int8_t x632 = 0;
volatile int16_t x634 = INT16_MIN;
int16_t x641 = 232;
int32_t t154 = 206;
int16_t x645 = 48;
volatile int64_t x651 = INT64_MIN;
static uint32_t x652 = UINT32_MAX;
volatile int32_t t156 = -5832387;
volatile int32_t t157 = -12;
volatile uint16_t x658 = 137U;
static int8_t x660 = 1;
int16_t x665 = INT16_MIN;
int32_t x678 = -1;
volatile int8_t x679 = -1;
int32_t t163 = -236;
volatile int64_t x684 = -1LL;
uint16_t x689 = 1230U;
static int16_t x702 = 0;
int8_t x706 = -1;
volatile int8_t x715 = INT8_MIN;
int16_t x718 = INT16_MIN;
uint8_t x720 = 53U;
uint16_t x724 = 16U;
volatile uint8_t x727 = 31U;
volatile int32_t t175 = -242886434;
int8_t x730 = INT8_MIN;
int8_t x741 = INT8_MIN;
int8_t x743 = INT8_MAX;
int32_t x745 = INT32_MAX;
int32_t t180 = -10740866;
int32_t x753 = INT32_MIN;
int64_t x754 = INT64_MIN;
int32_t t182 = -136;
volatile int8_t x760 = INT8_MIN;
static volatile int64_t x767 = INT64_MIN;
int64_t x775 = INT64_MIN;
volatile int8_t x778 = -5;
uint8_t x779 = 1U;
uint16_t x780 = 75U;
int16_t x785 = INT16_MIN;
uint16_t x787 = 13616U;
uint64_t x791 = 2058339897LLU;
int64_t x800 = INT64_MIN;
static volatile int16_t x803 = INT16_MAX;
volatile int32_t t195 = -2011058;
int8_t x810 = INT8_MIN;
int32_t x822 = -1;
volatile int32_t t199 = -6243676;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int16_t x3 = -206;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 65230;

    t0 = ((x1&(x2%x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = -1;
	volatile uint64_t x7 = UINT64_MAX;
	static int32_t t1 = 137;

    t1 = ((x5&(x6%x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	int16_t x10 = 1970;
	int16_t x11 = 29;
	int16_t x12 = 280;
	int32_t t2 = -1;

    t2 = ((x9&(x10%x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	static int64_t x15 = 2123698104LL;

    t3 = ((x13&(x14%x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 1;
	int8_t x18 = -1;
	static volatile int32_t x19 = -1;
	uint32_t x20 = 2U;

    t4 = ((x17&(x18%x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 54;
	volatile int16_t x22 = INT16_MAX;
	static uint8_t x23 = UINT8_MAX;
	int64_t x24 = -1LL;
	int32_t t5 = 1;

    t5 = ((x21&(x22%x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -6;
	volatile int16_t x26 = -20;
	static int64_t x27 = -7LL;
	int8_t x28 = -1;
	int32_t t6 = -228;

    t6 = ((x25&(x26%x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 3232;
	uint8_t x31 = 1U;
	uint64_t x32 = UINT64_MAX;
	int32_t t7 = -66218;

    t7 = ((x29&(x30%x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	volatile int32_t t8 = -1009;

    t8 = ((x33&(x34%x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 0;
	volatile int8_t x38 = -3;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	int32_t t9 = -169180684;

    t9 = ((x37&(x38%x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 174606796805LLU;
	static int32_t x42 = INT32_MAX;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = INT32_MAX;
	int32_t t10 = -1756;

    t10 = ((x41&(x42%x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	int64_t x46 = INT64_MAX;
	volatile int16_t x47 = INT16_MAX;
	static int64_t x48 = 1725255256LL;
	volatile int32_t t11 = -62856698;

    t11 = ((x45&(x46%x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int16_t x50 = 488;
	int16_t x51 = -1;
	uint64_t x52 = UINT64_MAX;

    t12 = ((x49&(x50%x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MIN;
	int8_t x56 = -1;
	int32_t t13 = 4;

    t13 = ((x53&(x54%x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x62 = 69U;
	uint64_t x63 = 10239846008498230LLU;
	static int16_t x64 = -1;
	volatile int32_t t14 = -3;

    t14 = ((x61&(x62%x63))<=x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 23497669216LLU;
	uint16_t x68 = 1U;
	static int32_t t15 = -216;

    t15 = ((x65&(x66%x67))<=x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 76U;
	static int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	int8_t x72 = 6;
	int32_t t16 = -4755015;

    t16 = ((x69&(x70%x71))<=x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MAX;
	volatile int16_t x74 = INT16_MAX;
	static int8_t x75 = INT8_MAX;
	int32_t t17 = 1;

    t17 = ((x73&(x74%x75))<=x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MIN;
	int16_t x78 = -1;
	int8_t x79 = INT8_MAX;
	uint32_t x80 = 3556U;
	volatile int32_t t18 = 26;

    t18 = ((x77&(x78%x79))<=x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x82 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = 55181655;
	volatile int32_t t19 = 1997839;

    t19 = ((x81&(x82%x83))<=x84);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	int32_t x86 = -1;
	int8_t x87 = 8;
	int16_t x88 = -1;
	volatile int32_t t20 = 3930501;

    t20 = ((x85&(x86%x87))<=x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	int8_t x90 = 5;
	volatile int64_t x92 = INT64_MIN;
	volatile int32_t t21 = 17821914;

    t21 = ((x89&(x90%x91))<=x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 224U;
	uint16_t x96 = 18282U;
	int32_t t22 = 5611;

    t22 = ((x93&(x94%x95))<=x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = -18748LL;
	static int8_t x99 = -1;
	volatile int32_t x100 = 619;

    t23 = ((x97&(x98%x99))<=x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -1;
	uint8_t x102 = 15U;
	int64_t x103 = INT64_MIN;
	uint64_t x104 = UINT64_MAX;
	int32_t t24 = -442357;

    t24 = ((x101&(x102%x103))<=x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MIN;
	int32_t x111 = -1;

    t25 = ((x109&(x110%x111))<=x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x114 = INT16_MAX;
	int8_t x116 = INT8_MAX;
	int32_t t26 = -196438697;

    t26 = ((x113&(x114%x115))<=x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -2476574431234412LL;
	uint32_t x118 = 8628653U;
	int64_t x119 = -930135032349281220LL;
	int64_t x120 = 15226527496441LL;

    t27 = ((x117&(x118%x119))<=x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = INT16_MIN;
	volatile int64_t x123 = INT64_MIN;
	uint8_t x124 = UINT8_MAX;
	int32_t t28 = -74935;

    t28 = ((x121&(x122%x123))<=x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x127 = 145;
	uint16_t x128 = 1U;
	int32_t t29 = 9;

    t29 = ((x125&(x126%x127))<=x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x129 = 0U;
	int64_t x131 = -248LL;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t30 = -40;

    t30 = ((x129&(x130%x131))<=x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x133 = INT32_MIN;
	static volatile int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t31 = 2732971;

    t31 = ((x133&(x134%x135))<=x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t32 = 14899462;

    t32 = ((x137&(x138%x139))<=x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x141 = INT64_MIN;
	static int32_t x142 = 87420;
	uint64_t x143 = 212209003969233LLU;
	int8_t x144 = 1;
	static volatile int32_t t33 = 3;

    t33 = ((x141&(x142%x143))<=x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t34 = -443814244;

    t34 = ((x145&(x146%x147))<=x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = -106011;
	int8_t x150 = -33;
	int64_t x151 = 1994LL;
	uint32_t x152 = 7318U;
	volatile int32_t t35 = -8;

    t35 = ((x149&(x150%x151))<=x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	uint8_t x156 = 2U;
	volatile int32_t t36 = -31152;

    t36 = ((x153&(x154%x155))<=x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = INT8_MIN;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MAX;
	volatile int8_t x160 = INT8_MIN;
	volatile int32_t t37 = -174108;

    t37 = ((x157&(x158%x159))<=x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x161 = UINT32_MAX;
	int32_t x162 = INT32_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t38 = 2;

    t38 = ((x161&(x162%x163))<=x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x169 = INT16_MIN;
	int32_t x170 = INT32_MAX;
	int8_t x171 = -1;
	volatile int64_t x172 = INT64_MAX;
	int32_t t39 = 1;

    t39 = ((x169&(x170%x171))<=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x173 = INT8_MIN;
	volatile int16_t x175 = 3;
	int16_t x176 = INT16_MIN;

    t40 = ((x173&(x174%x175))<=x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = -1;
	int64_t x180 = -1LL;

    t41 = ((x177&(x178%x179))<=x180);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 231U;
	int8_t x184 = 1;

    t42 = ((x181&(x182%x183))<=x184);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = 5539U;
	int32_t t43 = 1;

    t43 = ((x185&(x186%x187))<=x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = -1;
	volatile int16_t x190 = INT16_MAX;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = -1;
	int32_t t44 = 1623331;

    t44 = ((x189&(x190%x191))<=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x195 = UINT64_MAX;
	int8_t x196 = INT8_MAX;
	static int32_t t45 = 69775124;

    t45 = ((x193&(x194%x195))<=x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x197 = 256076LLU;
	uint8_t x198 = 9U;
	int8_t x199 = INT8_MIN;
	volatile int32_t t46 = -113;

    t46 = ((x197&(x198%x199))<=x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = -38224058249679LL;
	uint32_t x202 = UINT32_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t47 = 9520;

    t47 = ((x201&(x202%x203))<=x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	static uint8_t x206 = UINT8_MAX;
	uint16_t x208 = 9846U;
	volatile int32_t t48 = 6352907;

    t48 = ((x205&(x206%x207))<=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MIN;
	static volatile int16_t x210 = 61;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t t49 = 536376884;

    t49 = ((x209&(x210%x211))<=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x214 = -1;
	int8_t x215 = INT8_MIN;
	int32_t x216 = 12;
	volatile int32_t t50 = -78870;

    t50 = ((x213&(x214%x215))<=x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x218 = INT64_MAX;
	static int32_t x219 = -50057;
	int8_t x220 = -1;
	static volatile int32_t t51 = -8774301;

    t51 = ((x217&(x218%x219))<=x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x221 = 330;
	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	static int64_t x224 = -140LL;
	int32_t t52 = -1320;

    t52 = ((x221&(x222%x223))<=x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -379;
	int32_t x227 = INT32_MIN;
	int16_t x228 = 36;

    t53 = ((x225&(x226%x227))<=x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x229 = 30U;
	int32_t x231 = -82473;
	int8_t x232 = 23;
	volatile int32_t t54 = -226;

    t54 = ((x229&(x230%x231))<=x232);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x233 = UINT64_MAX;
	volatile int64_t x236 = -1LL;

    t55 = ((x233&(x234%x235))<=x236);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	int32_t t56 = -2442;

    t56 = ((x237&(x238%x239))<=x240);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x242 = UINT64_MAX;
	static volatile uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 1U;
	int32_t t57 = 185139604;

    t57 = ((x241&(x242%x243))<=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x245 = INT32_MAX;
	uint16_t x246 = 0U;
	uint64_t x247 = 110663LLU;
	int32_t x248 = INT32_MIN;
	volatile int32_t t58 = 5834189;

    t58 = ((x245&(x246%x247))<=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = 0;
	static int8_t x251 = INT8_MIN;
	static volatile int64_t x252 = -1LL;

    t59 = ((x249&(x250%x251))<=x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t60 = 19;

    t60 = ((x253&(x254%x255))<=x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x257 = 1175U;
	int64_t x259 = INT64_MIN;
	int32_t t61 = 1;

    t61 = ((x257&(x258%x259))<=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -1LL;
	static volatile int8_t x263 = INT8_MAX;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t62 = -1;

    t62 = ((x261&(x262%x263))<=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x265 = 43U;
	int32_t x268 = -1;

    t63 = ((x265&(x266%x267))<=x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x269 = 0U;
	int32_t x270 = INT32_MAX;
	static int64_t x272 = INT64_MIN;
	int32_t t64 = -4333;

    t64 = ((x269&(x270%x271))<=x272);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x274 = -1LL;
	static int8_t x275 = 57;
	int32_t t65 = 580;

    t65 = ((x273&(x274%x275))<=x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = -10663LL;
	int8_t x279 = INT8_MIN;
	volatile int32_t t66 = 62;

    t66 = ((x277&(x278%x279))<=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 900U;
	static int16_t x282 = -1;
	uint64_t x284 = 78026LLU;
	int32_t t67 = -32358364;

    t67 = ((x281&(x282%x283))<=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = 122653U;
	int16_t x286 = INT16_MIN;
	volatile int16_t x287 = INT16_MIN;
	volatile int32_t t68 = -599466;

    t68 = ((x285&(x286%x287))<=x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x289 = -14;
	static int32_t x290 = INT32_MIN;
	uint8_t x291 = 1U;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t69 = -1;

    t69 = ((x289&(x290%x291))<=x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = -2787;
	volatile int8_t x294 = INT8_MAX;
	uint16_t x295 = 13067U;
	volatile int32_t t70 = 73854988;

    t70 = ((x293&(x294%x295))<=x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x297 = 7U;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t t71 = -16;

    t71 = ((x297&(x298%x299))<=x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x302 = -3712;
	int16_t x303 = -2262;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t72 = 7062576;

    t72 = ((x301&(x302%x303))<=x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	int16_t x308 = INT16_MIN;
	volatile int32_t t73 = -289548236;

    t73 = ((x305&(x306%x307))<=x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x309 = INT8_MIN;
	static uint8_t x310 = 31U;
	static volatile int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MIN;

    t74 = ((x309&(x310%x311))<=x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -799;
	int16_t x314 = INT16_MAX;
	volatile int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t75 = 0;

    t75 = ((x313&(x314%x315))<=x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x317 = -1;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int64_t x320 = 10821574LL;

    t76 = ((x317&(x318%x319))<=x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x321 = 498977U;
	int16_t x322 = INT16_MIN;
	int16_t x323 = 1;
	int32_t t77 = 43088275;

    t77 = ((x321&(x322%x323))<=x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x325 = INT16_MAX;
	int8_t x326 = -1;
	int16_t x328 = -1;
	static int32_t t78 = -25715;

    t78 = ((x325&(x326%x327))<=x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = 22U;
	int8_t x330 = INT8_MAX;
	uint64_t x331 = 7088667204LLU;
	volatile uint64_t x332 = 165444788919087LLU;
	volatile int32_t t79 = 8;

    t79 = ((x329&(x330%x331))<=x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	static int8_t x334 = INT8_MIN;
	static volatile int32_t t80 = -34384043;

    t80 = ((x333&(x334%x335))<=x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x337 = INT32_MIN;
	uint8_t x339 = 4U;
	static int8_t x340 = INT8_MAX;
	volatile int32_t t81 = -339;

    t81 = ((x337&(x338%x339))<=x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x342 = 33978LLU;
	int8_t x343 = INT8_MIN;
	int32_t t82 = 23334312;

    t82 = ((x341&(x342%x343))<=x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = -1;
	uint8_t x347 = 20U;
	int64_t x348 = INT64_MIN;
	int32_t t83 = 3271;

    t83 = ((x345&(x346%x347))<=x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x349 = 0;
	static uint16_t x350 = 6003U;
	uint16_t x351 = 1U;
	static int32_t t84 = -944945005;

    t84 = ((x349&(x350%x351))<=x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x353 = INT8_MIN;
	int64_t x354 = -3LL;
	int16_t x355 = -1;
	int64_t x356 = INT64_MIN;
	volatile int32_t t85 = 3;

    t85 = ((x353&(x354%x355))<=x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x357 = 54U;
	uint64_t x358 = 123LLU;
	static uint32_t x359 = 243542U;
	static int64_t x360 = 118242656726338LL;

    t86 = ((x357&(x358%x359))<=x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x362 = 24U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t87 = -146;

    t87 = ((x361&(x362%x363))<=x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x365 = INT8_MIN;
	int64_t x366 = -935694212LL;
	int32_t x367 = INT32_MIN;
	volatile int64_t x368 = INT64_MAX;
	int32_t t88 = 196;

    t88 = ((x365&(x366%x367))<=x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint8_t x369 = 0U;
	int8_t x370 = 0;
	uint16_t x371 = 1U;
	static int8_t x372 = -4;
	static volatile int32_t t89 = 59;

    t89 = ((x369&(x370%x371))<=x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x373 = 3001749745258221293LL;
	int32_t x374 = INT32_MAX;
	int32_t x375 = -299888250;
	uint8_t x376 = 0U;
	int32_t t90 = -1;

    t90 = ((x373&(x374%x375))<=x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x377 = -27LL;
	volatile int64_t x378 = INT64_MIN;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;
	volatile int32_t t91 = 22150914;

    t91 = ((x377&(x378%x379))<=x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x381 = INT32_MIN;
	static int8_t x382 = 1;
	uint8_t x383 = 3U;
	static volatile int32_t x384 = INT32_MIN;
	static volatile int32_t t92 = 0;

    t92 = ((x381&(x382%x383))<=x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x386 = INT16_MIN;
	int64_t x387 = 31584LL;
	static int32_t x388 = -1;

    t93 = ((x385&(x386%x387))<=x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x390 = UINT16_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	static volatile int32_t t94 = 1795;

    t94 = ((x389&(x390%x391))<=x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x393 = INT64_MIN;
	static uint8_t x396 = 45U;
	int32_t t95 = 4;

    t95 = ((x393&(x394%x395))<=x396);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x397 = INT16_MAX;
	uint8_t x398 = 30U;
	int64_t x400 = 1420094407LL;

    t96 = ((x397&(x398%x399))<=x400);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x401 = 1452;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x403 = -1;
	int16_t x404 = -1;

    t97 = ((x401&(x402%x403))<=x404);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = 882;
	uint8_t x406 = 3U;
	static uint32_t x407 = UINT32_MAX;
	uint32_t x408 = 1040239U;

    t98 = ((x405&(x406%x407))<=x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x409 = 1LL;
	int32_t x410 = INT32_MIN;
	volatile int8_t x411 = INT8_MAX;
	int32_t t99 = 937339636;

    t99 = ((x409&(x410%x411))<=x412);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x413 = 873U;
	uint8_t x414 = UINT8_MAX;
	int8_t x416 = -1;
	static int32_t t100 = 0;

    t100 = ((x413&(x414%x415))<=x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	volatile int32_t x418 = -434911215;
	int16_t x419 = INT16_MAX;

    t101 = ((x417&(x418%x419))<=x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x421 = INT8_MIN;
	static int8_t x422 = -46;
	uint64_t x423 = 57789166129LLU;
	int32_t t102 = -941597;

    t102 = ((x421&(x422%x423))<=x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x425 = INT64_MAX;
	int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MIN;
	uint64_t x428 = 393983LLU;
	volatile int32_t t103 = 10458111;

    t103 = ((x425&(x426%x427))<=x428);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x429 = 15947868U;
	int32_t x430 = 50;
	static int8_t x431 = -1;
	int8_t x432 = INT8_MIN;
	static int32_t t104 = 32454564;

    t104 = ((x429&(x430%x431))<=x432);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = INT32_MIN;
	int8_t x434 = 31;
	static volatile int32_t x435 = -1;
	uint32_t x436 = 0U;
	volatile int32_t t105 = 1005244465;

    t105 = ((x433&(x434%x435))<=x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x441 = INT64_MAX;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = INT32_MIN;
	static volatile int32_t t106 = 340194;

    t106 = ((x441&(x442%x443))<=x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x445 = INT16_MAX;
	static int32_t x446 = -10530952;
	int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t107 = -723450361;

    t107 = ((x445&(x446%x447))<=x448);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x450 = 1104U;
	static int64_t x451 = INT64_MIN;
	int64_t x452 = INT64_MIN;
	int32_t t108 = -8253541;

    t108 = ((x449&(x450%x451))<=x452);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x454 = INT16_MIN;
	static uint32_t x455 = 961U;
	int32_t x456 = -379;
	int32_t t109 = 83429;

    t109 = ((x453&(x454%x455))<=x456);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x457 = 1U;
	int8_t x458 = INT8_MIN;
	int8_t x459 = 14;
	uint8_t x460 = 3U;
	static volatile int32_t t110 = 1036697149;

    t110 = ((x457&(x458%x459))<=x460);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x462 = 153U;
	uint32_t x464 = 2096988944U;
	int32_t t111 = -130735138;

    t111 = ((x461&(x462%x463))<=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = -12972265435921216LL;
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = -661145;
	int32_t x468 = INT32_MAX;
	int32_t t112 = 1916;

    t112 = ((x465&(x466%x467))<=x468);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x469 = UINT32_MAX;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MIN;
	volatile int32_t t113 = -156633;

    t113 = ((x469&(x470%x471))<=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x473 = -1;
	volatile uint8_t x474 = 1U;
	uint32_t x476 = 1U;
	volatile int32_t t114 = -1424;

    t114 = ((x473&(x474%x475))<=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x478 = INT8_MAX;
	int16_t x480 = INT16_MIN;

    t115 = ((x477&(x478%x479))<=x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x481 = -97;
	uint8_t x482 = 0U;
	static int32_t x483 = INT32_MAX;
	static int16_t x484 = INT16_MAX;

    t116 = ((x481&(x482%x483))<=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x485 = UINT8_MAX;
	static volatile uint8_t x486 = UINT8_MAX;
	int64_t x487 = INT64_MAX;
	uint64_t x488 = UINT64_MAX;

    t117 = ((x485&(x486%x487))<=x488);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x490 = 1;
	uint64_t x491 = 534095039142923LLU;
	volatile int16_t x492 = -972;

    t118 = ((x489&(x490%x491))<=x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x493 = -910;
	uint16_t x494 = 22415U;
	volatile int32_t x496 = INT32_MIN;

    t119 = ((x493&(x494%x495))<=x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x498 = INT64_MIN;
	int16_t x500 = -16342;
	volatile int32_t t120 = 344699277;

    t120 = ((x497&(x498%x499))<=x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x501 = 1LLU;
	int16_t x502 = 3494;
	volatile int16_t x503 = INT16_MAX;
	uint64_t x504 = UINT64_MAX;

    t121 = ((x501&(x502%x503))<=x504);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x505 = INT64_MAX;
	int32_t x506 = -1;
	volatile int16_t x507 = 12260;
	int32_t t122 = 956465192;

    t122 = ((x505&(x506%x507))<=x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x509 = -1;
	static int32_t x510 = INT32_MIN;
	volatile uint8_t x511 = UINT8_MAX;
	int32_t x512 = 77612185;

    t123 = ((x509&(x510%x511))<=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = 216971LL;
	static volatile int64_t x516 = -106507321506414265LL;
	int32_t t124 = -17717;

    t124 = ((x513&(x514%x515))<=x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x518 = INT32_MIN;
	volatile uint16_t x519 = 2833U;
	volatile int64_t x520 = 4365523264599200401LL;
	int32_t t125 = 977453441;

    t125 = ((x517&(x518%x519))<=x520);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = -18559459149875859LL;
	int32_t t126 = -129526;

    t126 = ((x521&(x522%x523))<=x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = -1LL;
	static volatile int64_t x531 = INT64_MIN;
	static uint32_t x532 = 1009U;
	int32_t t127 = -46;

    t127 = ((x529&(x530%x531))<=x532);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x533 = INT32_MIN;
	volatile int16_t x534 = 0;
	uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MAX;

    t128 = ((x533&(x534%x535))<=x536);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x537 = -1;
	uint16_t x538 = 17U;
	int8_t x539 = -1;
	volatile int32_t t129 = -3235;

    t129 = ((x537&(x538%x539))<=x540);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x541 = 490;
	uint16_t x543 = 11U;
	volatile uint8_t x544 = 13U;
	int32_t t130 = -580292628;

    t130 = ((x541&(x542%x543))<=x544);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x545 = UINT8_MAX;
	int8_t x546 = 2;
	static uint8_t x547 = UINT8_MAX;
	uint8_t x548 = 30U;
	static volatile int32_t t131 = 1164;

    t131 = ((x545&(x546%x547))<=x548);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x549 = -5;
	static volatile uint32_t x550 = 27663761U;
	int16_t x551 = INT16_MAX;
	int16_t x552 = INT16_MIN;
	static int32_t t132 = -27279;

    t132 = ((x549&(x550%x551))<=x552);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x553 = 1;
	int64_t x555 = INT64_MIN;
	int8_t x556 = -1;
	int32_t t133 = 988;

    t133 = ((x553&(x554%x555))<=x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x557 = 845U;
	uint8_t x558 = 2U;
	uint32_t x559 = 123U;
	int16_t x560 = 4;

    t134 = ((x557&(x558%x559))<=x560);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x561 = 9U;
	static int16_t x562 = INT16_MIN;
	int32_t x563 = 10929;
	int16_t x564 = INT16_MAX;
	static volatile int32_t t135 = 70;

    t135 = ((x561&(x562%x563))<=x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x565 = -1;
	int32_t x566 = INT32_MIN;
	static int32_t x567 = -675;
	static int8_t x568 = INT8_MIN;
	static int32_t t136 = 0;

    t136 = ((x565&(x566%x567))<=x568);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x569 = 8755LLU;
	int8_t x570 = -31;
	uint64_t x571 = 1844351919027795839LLU;
	int32_t t137 = 211;

    t137 = ((x569&(x570%x571))<=x572);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x573 = 41U;
	static int32_t x575 = 17;
	uint16_t x576 = 0U;
	static volatile int32_t t138 = -8;

    t138 = ((x573&(x574%x575))<=x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = INT8_MAX;
	volatile int64_t x578 = INT64_MIN;
	int32_t x579 = INT32_MIN;
	static uint64_t x580 = 153354540559130747LLU;
	int32_t t139 = -1221;

    t139 = ((x577&(x578%x579))<=x580);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = -1;
	static int32_t x583 = -25828495;
	volatile int64_t x584 = -1LL;
	int32_t t140 = 0;

    t140 = ((x581&(x582%x583))<=x584);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x586 = INT32_MAX;
	int8_t x587 = -1;
	volatile int8_t x588 = -1;
	volatile int32_t t141 = 371;

    t141 = ((x585&(x586%x587))<=x588);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x589 = UINT64_MAX;
	int16_t x590 = -3462;
	volatile int32_t x591 = INT32_MIN;
	volatile int64_t x592 = INT64_MIN;
	int32_t t142 = 1;

    t142 = ((x589&(x590%x591))<=x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MIN;
	static uint8_t x594 = 1U;
	volatile int8_t x596 = 55;

    t143 = ((x593&(x594%x595))<=x596);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x597 = 515501760U;
	int8_t x599 = -1;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t144 = 630;

    t144 = ((x597&(x598%x599))<=x600);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MIN;
	static int64_t x602 = 781LL;
	volatile uint8_t x603 = UINT8_MAX;
	static uint64_t x604 = 9542358660166LLU;
	int32_t t145 = -50;

    t145 = ((x601&(x602%x603))<=x604);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x605 = 2790;
	uint32_t x606 = UINT32_MAX;
	int64_t x607 = -104143750LL;
	volatile int32_t t146 = 0;

    t146 = ((x605&(x606%x607))<=x608);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = INT64_MAX;
	int8_t x611 = INT8_MAX;
	int32_t t147 = 612647;

    t147 = ((x609&(x610%x611))<=x612);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x616 = INT16_MIN;
	int32_t t148 = 0;

    t148 = ((x613&(x614%x615))<=x616);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x621 = 112U;
	static uint16_t x622 = 245U;
	uint32_t x623 = 20023722U;
	uint32_t x624 = UINT32_MAX;

    t149 = ((x621&(x622%x623))<=x624);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x625 = 4U;
	int16_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	static uint64_t x628 = 322777204LLU;
	volatile int32_t t150 = 19004;

    t150 = ((x625&(x626%x627))<=x628);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x629 = INT64_MIN;
	uint32_t x631 = UINT32_MAX;
	volatile int32_t t151 = -143898542;

    t151 = ((x629&(x630%x631))<=x632);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x633 = INT16_MAX;
	volatile int16_t x635 = 114;
	int16_t x636 = 4389;
	volatile int32_t t152 = -3943579;

    t152 = ((x633&(x634%x635))<=x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x637 = 2U;
	uint16_t x638 = 1656U;
	volatile uint8_t x639 = 1U;
	volatile int16_t x640 = INT16_MIN;
	volatile int32_t t153 = 10768;

    t153 = ((x637&(x638%x639))<=x640);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x642 = -1;
	volatile uint64_t x643 = 23012537LLU;
	int32_t x644 = INT32_MIN;

    t154 = ((x641&(x642%x643))<=x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x646 = 98U;
	uint32_t x647 = UINT32_MAX;
	static int16_t x648 = INT16_MAX;
	int32_t t155 = -142019;

    t155 = ((x645&(x646%x647))<=x648);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x649 = -48689;
	static int8_t x650 = INT8_MIN;

    t156 = ((x649&(x650%x651))<=x652);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x653 = 470U;
	volatile uint64_t x654 = 448302389840257444LLU;
	int32_t x655 = INT32_MAX;
	int16_t x656 = -1;

    t157 = ((x653&(x654%x655))<=x656);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x657 = INT32_MIN;
	volatile int16_t x659 = -1;
	int32_t t158 = -15211266;

    t158 = ((x657&(x658%x659))<=x660);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x661 = INT16_MAX;
	int32_t x662 = INT32_MIN;
	int8_t x663 = INT8_MIN;
	int64_t x664 = -1LL;
	int32_t t159 = 279859109;

    t159 = ((x661&(x662%x663))<=x664);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x666 = INT8_MIN;
	uint32_t x667 = 330061264U;
	uint32_t x668 = 7343U;
	volatile int32_t t160 = -254262614;

    t160 = ((x665&(x666%x667))<=x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x669 = INT8_MIN;
	static int16_t x670 = INT16_MIN;
	int64_t x671 = -67392410LL;
	int64_t x672 = INT64_MIN;
	volatile int32_t t161 = -11756;

    t161 = ((x669&(x670%x671))<=x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x673 = -5655;
	volatile int8_t x674 = 5;
	uint16_t x675 = 1845U;
	int8_t x676 = INT8_MIN;
	static int32_t t162 = 7;

    t162 = ((x673&(x674%x675))<=x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x677 = INT8_MIN;
	int8_t x680 = INT8_MIN;

    t163 = ((x677&(x678%x679))<=x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = -366297268020854LL;
	int64_t x682 = 558569722759960LL;
	int32_t x683 = 350110083;
	volatile int32_t t164 = 2910989;

    t164 = ((x681&(x682%x683))<=x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x685 = INT32_MAX;
	int8_t x686 = -14;
	static volatile int32_t x687 = INT32_MIN;
	int8_t x688 = 6;
	volatile int32_t t165 = -856;

    t165 = ((x685&(x686%x687))<=x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x690 = -230200563667LL;
	static int8_t x691 = -1;
	int64_t x692 = -1112959922938LL;
	static volatile int32_t t166 = -3;

    t166 = ((x689&(x690%x691))<=x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = -1LL;
	int8_t x694 = INT8_MAX;
	uint8_t x695 = UINT8_MAX;
	static int8_t x696 = INT8_MAX;
	int32_t t167 = 11480;

    t167 = ((x693&(x694%x695))<=x696);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = 7564;
	int32_t x698 = -7;
	uint16_t x699 = UINT16_MAX;
	static int64_t x700 = -1350LL;
	volatile int32_t t168 = 5416048;

    t168 = ((x697&(x698%x699))<=x700);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = INT32_MIN;
	static uint64_t x703 = UINT64_MAX;
	volatile uint64_t x704 = UINT64_MAX;
	volatile int32_t t169 = 87029;

    t169 = ((x701&(x702%x703))<=x704);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x705 = -65856711LL;
	int64_t x707 = INT64_MIN;
	int64_t x708 = 52LL;
	volatile int32_t t170 = 15762844;

    t170 = ((x705&(x706%x707))<=x708);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x709 = 1U;
	int64_t x710 = INT64_MIN;
	uint8_t x711 = UINT8_MAX;
	uint16_t x712 = 3U;
	static volatile int32_t t171 = -171960;

    t171 = ((x709&(x710%x711))<=x712);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x713 = -1;
	volatile uint64_t x714 = 790161112LLU;
	static int64_t x716 = INT64_MAX;
	static volatile int32_t t172 = -759762;

    t172 = ((x713&(x714%x715))<=x716);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = -3299716113535703450LL;
	int8_t x719 = -1;
	volatile int32_t t173 = -758873;

    t173 = ((x717&(x718%x719))<=x720);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x721 = -23611;
	int16_t x722 = INT16_MAX;
	int16_t x723 = 4;
	volatile int32_t t174 = 363;

    t174 = ((x721&(x722%x723))<=x724);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x725 = UINT16_MAX;
	int16_t x726 = INT16_MAX;
	uint64_t x728 = UINT64_MAX;

    t175 = ((x725&(x726%x727))<=x728);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x729 = INT16_MIN;
	int64_t x731 = 125896056135470235LL;
	static int8_t x732 = INT8_MIN;
	volatile int32_t t176 = -92;

    t176 = ((x729&(x730%x731))<=x732);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = 9;
	int8_t x734 = INT8_MIN;
	int32_t x735 = 1;
	static uint16_t x736 = 17451U;
	volatile int32_t t177 = 13;

    t177 = ((x733&(x734%x735))<=x736);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x737 = -281265177820257054LL;
	volatile int16_t x738 = -341;
	int32_t x739 = INT32_MAX;
	static uint32_t x740 = 16U;
	static volatile int32_t t178 = 1050181;

    t178 = ((x737&(x738%x739))<=x740);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x742 = 57;
	volatile int32_t x744 = 4693;
	int32_t t179 = 7507;

    t179 = ((x741&(x742%x743))<=x744);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x746 = 2U;
	static volatile uint64_t x747 = 489298848LLU;
	uint64_t x748 = UINT64_MAX;

    t180 = ((x745&(x746%x747))<=x748);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x749 = 3;
	volatile uint64_t x750 = 2699736LLU;
	int16_t x751 = INT16_MAX;
	static int8_t x752 = -1;
	volatile int32_t t181 = 7236426;

    t181 = ((x749&(x750%x751))<=x752);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x755 = 14U;
	volatile int8_t x756 = -7;

    t182 = ((x753&(x754%x755))<=x756);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x757 = -38;
	int32_t x758 = -710;
	uint8_t x759 = 1U;
	static volatile int32_t t183 = -11;

    t183 = ((x757&(x758%x759))<=x760);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x761 = INT16_MAX;
	uint32_t x762 = 1U;
	int8_t x763 = INT8_MIN;
	static int64_t x764 = INT64_MIN;
	volatile int32_t t184 = 2;

    t184 = ((x761&(x762%x763))<=x764);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x765 = INT16_MAX;
	int16_t x766 = -45;
	int32_t x768 = -1;
	int32_t t185 = 5025;

    t185 = ((x765&(x766%x767))<=x768);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = -1;
	int64_t x770 = -1LL;
	int64_t x771 = INT64_MIN;
	int64_t x772 = 26LL;
	volatile int32_t t186 = 14817970;

    t186 = ((x769&(x770%x771))<=x772);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x773 = -1459590989LL;
	int8_t x774 = -1;
	int8_t x776 = INT8_MAX;
	int32_t t187 = 341;

    t187 = ((x773&(x774%x775))<=x776);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = 1;
	int32_t t188 = -233854684;

    t188 = ((x777&(x778%x779))<=x780);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x781 = 5107900;
	static int16_t x782 = INT16_MIN;
	static int32_t x783 = -1;
	volatile int16_t x784 = -401;
	volatile int32_t t189 = 15763419;

    t189 = ((x781&(x782%x783))<=x784);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x786 = 29392U;
	volatile int16_t x788 = 1054;
	int32_t t190 = -4;

    t190 = ((x785&(x786%x787))<=x788);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = INT16_MIN;
	static volatile uint16_t x790 = UINT16_MAX;
	uint16_t x792 = UINT16_MAX;
	int32_t t191 = 2543;

    t191 = ((x789&(x790%x791))<=x792);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x793 = -5;
	volatile uint8_t x794 = UINT8_MAX;
	uint64_t x795 = 193841534LLU;
	uint64_t x796 = 7370119LLU;
	static int32_t t192 = 1035;

    t192 = ((x793&(x794%x795))<=x796);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = -1LL;
	int64_t x798 = INT64_MIN;
	volatile int16_t x799 = INT16_MIN;
	int32_t t193 = -23260;

    t193 = ((x797&(x798%x799))<=x800);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = 6453561697115048LL;
	volatile uint8_t x802 = 3U;
	int32_t x804 = INT32_MAX;
	volatile int32_t t194 = -273607824;

    t194 = ((x801&(x802%x803))<=x804);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = -1;
	volatile int8_t x806 = -1;
	uint16_t x807 = 55U;
	int64_t x808 = INT64_MIN;

    t195 = ((x805&(x806%x807))<=x808);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x809 = 7818569;
	int32_t x811 = INT32_MIN;
	int16_t x812 = INT16_MIN;
	int32_t t196 = 2570;

    t196 = ((x809&(x810%x811))<=x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = INT32_MAX;
	volatile int32_t x814 = -1;
	int64_t x815 = INT64_MIN;
	int64_t x816 = 5246978983429715LL;
	volatile int32_t t197 = -802;

    t197 = ((x813&(x814%x815))<=x816);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = -2287361;
	int16_t x818 = INT16_MIN;
	int16_t x819 = INT16_MIN;
	int8_t x820 = 1;
	volatile int32_t t198 = -5553780;

    t198 = ((x817&(x818%x819))<=x820);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x821 = 123U;
	volatile uint32_t x823 = 1018U;
	uint8_t x824 = UINT8_MAX;

    t199 = ((x821&(x822%x823))<=x824);

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

