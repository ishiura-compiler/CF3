
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

volatile uint8_t x8 = UINT8_MAX;
int16_t x15 = INT16_MIN;
uint16_t x19 = 9U;
static uint16_t x22 = 59U;
int32_t t5 = 303428736;
int32_t x29 = -1;
uint32_t x32 = 5U;
int32_t x35 = -1;
int8_t x44 = -1;
int64_t x52 = INT64_MIN;
volatile int64_t t12 = -758844257LL;
static int8_t x55 = -1;
int32_t t13 = -53961;
static int32_t x57 = INT32_MAX;
int64_t x59 = INT64_MIN;
volatile int64_t t14 = 31992074LL;
volatile int32_t t16 = 7;
int32_t x73 = INT32_MAX;
int32_t x79 = INT32_MAX;
uint64_t x86 = UINT64_MAX;
static uint16_t x100 = 71U;
int32_t x102 = 1943511;
static int16_t x105 = -1;
static int8_t x106 = -37;
int8_t x109 = INT8_MIN;
int64_t t28 = -73LL;
static int32_t t29 = 715;
volatile int64_t t30 = -164686700296LL;
int32_t x129 = INT32_MIN;
int64_t x132 = -1LL;
static int64_t t32 = 275248LL;
static uint32_t x135 = 18875585U;
static int32_t x137 = -1;
volatile int8_t x142 = 39;
static uint32_t x143 = 1866U;
volatile int32_t t37 = -46;
int64_t x153 = INT64_MIN;
uint16_t x154 = UINT16_MAX;
int16_t x156 = INT16_MIN;
volatile int32_t t38 = 54;
int32_t x158 = INT32_MAX;
int32_t x163 = INT32_MIN;
int32_t t40 = -335;
int64_t x165 = -132177304337LL;
int16_t x166 = -23;
static int32_t x168 = -10406563;
int8_t x169 = 1;
volatile uint32_t t42 = UINT32_MAX;
int32_t x173 = 54;
volatile int64_t t44 = -93182LL;
int64_t x182 = INT64_MIN;
int16_t x188 = 137;
volatile int16_t x196 = INT16_MIN;
static int32_t x198 = INT32_MAX;
static int16_t x199 = INT16_MAX;
int32_t x201 = INT32_MAX;
uint64_t x208 = 0LLU;
static uint64_t t51 = 7629083400352LLU;
static volatile int16_t x210 = INT16_MIN;
static volatile int32_t t53 = 9;
int32_t x218 = 32472;
int8_t x224 = INT8_MIN;
uint64_t x228 = UINT64_MAX;
uint32_t x233 = UINT32_MAX;
int32_t t58 = 10906619;
volatile int16_t x242 = INT16_MAX;
volatile uint32_t t60 = UINT32_MAX;
int64_t x257 = -25489819LL;
int64_t x258 = INT64_MIN;
int32_t x270 = INT32_MAX;
uint16_t x276 = UINT16_MAX;
int32_t t68 = INT32_MAX;
int8_t x288 = INT8_MAX;
int64_t x289 = INT64_MIN;
int8_t x297 = INT8_MIN;
int16_t x302 = INT16_MIN;
int16_t x306 = INT16_MIN;
int8_t x316 = INT8_MIN;
volatile int32_t t78 = 0;
static int32_t x317 = INT32_MIN;
int16_t x327 = INT16_MAX;
static int32_t t84 = 1436474;
int8_t x341 = INT8_MAX;
volatile int16_t x344 = INT16_MAX;
int64_t x348 = INT64_MAX;
volatile uint64_t x349 = 552607447114099067LLU;
static int32_t x351 = INT32_MIN;
int8_t x353 = INT8_MAX;
int64_t x359 = 8440LL;
volatile int64_t t89 = -25605442LL;
volatile int64_t x361 = -2060LL;
int32_t t90 = 7435;
int32_t x375 = INT32_MIN;
static int8_t x376 = 11;
volatile uint64_t t94 = UINT64_MAX;
int8_t x385 = -1;
int64_t t96 = 0LL;
int32_t x393 = -1;
static uint64_t x396 = 67449653861449123LLU;
volatile uint64_t t98 = 6LLU;
int32_t x397 = INT32_MIN;
int64_t x398 = -1LL;
uint16_t x399 = UINT16_MAX;
uint8_t x404 = 56U;
uint8_t x407 = 0U;
static int64_t x409 = -1LL;
int8_t x411 = INT8_MIN;
volatile uint64_t x412 = UINT64_MAX;
uint64_t x414 = 1LLU;
volatile int16_t x416 = INT16_MIN;
int16_t x422 = INT16_MIN;
int32_t x439 = -2841140;
volatile uint64_t t109 = 33377170452LLU;
static int64_t x449 = INT64_MIN;
static uint16_t x452 = UINT16_MAX;
int64_t t112 = -212198311037184660LL;
uint8_t x453 = 0U;
static int64_t x455 = -1LL;
static uint8_t x468 = 97U;
static int64_t x471 = INT64_MIN;
int64_t x472 = INT64_MIN;
volatile uint32_t x480 = 211U;
int32_t x489 = -1;
int64_t x492 = INT64_MIN;
int32_t x496 = 152197;
volatile int8_t x505 = -10;
uint16_t x509 = 3U;
int32_t x520 = INT32_MIN;
int16_t x522 = 769;
int32_t x527 = INT32_MIN;
uint16_t x529 = 1U;
static volatile int16_t x530 = INT16_MAX;
int16_t x531 = INT16_MIN;
int8_t x532 = -5;
int32_t x535 = 1338089;
int8_t x541 = INT8_MIN;
int8_t x544 = INT8_MIN;
uint8_t x545 = 10U;
int8_t x546 = -1;
int16_t x547 = INT16_MIN;
uint64_t x548 = 106903789831912267LLU;
int16_t x560 = -1;
int8_t x566 = 35;
static uint8_t x568 = 11U;
uint8_t x570 = 45U;
volatile uint16_t x571 = 3U;
volatile int32_t t142 = 66548746;
int8_t x576 = -1;
int32_t t143 = 7419065;
int8_t x577 = INT8_MIN;
static int32_t x580 = 546749417;
static int16_t x583 = -9;
int16_t x587 = -9417;
volatile int64_t t147 = 42975LL;
int8_t x597 = -2;
int16_t x598 = INT16_MAX;
uint8_t x600 = UINT8_MAX;
int32_t t149 = 4;
int32_t x612 = -51;
uint32_t x623 = 92361677U;
int8_t x625 = INT8_MAX;
uint16_t x632 = UINT16_MAX;
uint32_t x637 = UINT32_MAX;
uint16_t x640 = 358U;
int64_t x641 = INT64_MAX;
int8_t x646 = INT8_MAX;
uint8_t x648 = 68U;
int32_t x649 = INT32_MAX;
static uint64_t x651 = 960127922LLU;
int64_t x652 = INT64_MAX;
int8_t x653 = -1;
uint8_t x655 = 1U;
uint8_t x663 = 16U;
volatile int32_t t165 = 1271;
volatile uint32_t x665 = 26U;
volatile int32_t x671 = 206;
volatile int32_t x678 = INT32_MIN;
uint32_t x679 = 2U;
int32_t x682 = -1;
volatile int64_t x683 = -1LL;
volatile int64_t t170 = 390LL;
volatile uint8_t x688 = 0U;
static uint16_t x690 = 39U;
int32_t x692 = INT32_MIN;
uint8_t x694 = 1U;
uint8_t x695 = 15U;
static int8_t x700 = INT8_MIN;
int32_t t174 = 63644692;
volatile uint16_t x701 = 27397U;
static int8_t x703 = INT8_MIN;
volatile uint16_t x707 = 1268U;
uint64_t t178 = UINT64_MAX;
uint32_t x717 = UINT32_MAX;
static volatile int16_t x720 = INT16_MIN;
uint64_t t179 = UINT64_MAX;
int64_t x728 = -217399489258526638LL;
uint64_t x730 = 643259LLU;
int32_t x734 = INT32_MIN;
static int16_t x744 = -1;
static volatile uint32_t t185 = UINT32_MAX;
static volatile int8_t x752 = -1;
uint32_t x760 = 90U;
int32_t x772 = INT32_MIN;
int16_t x777 = -1;
uint8_t x786 = 3U;
static uint64_t x788 = 56811812707LLU;
int64_t x790 = -1LL;
int32_t x791 = -1;
int64_t x797 = -1LL;
int32_t t199 = 8;


void f0(void) {
    	int64_t x1 = -2LL;
	int32_t x2 = INT32_MIN;
	volatile uint32_t x3 = 17547U;
	int32_t x4 = INT32_MAX;
	volatile uint32_t t0 = 139577797U;

    t0 = (((x1<=x2)|x3)|x4);

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 20;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 285816937412079066LLU;
	static uint64_t t1 = 21821304662597601LLU;

    t1 = (((x5<=x6)|x7)|x8);

    if (t1 != 285816937412079103LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int32_t x10 = 2;
	int8_t x11 = 24;
	int8_t x12 = 2;
	volatile int32_t t2 = -1658;

    t2 = (((x9<=x10)|x11)|x12);

    if (t2 != 27) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MAX;
	int32_t x14 = -1;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 3;

    t3 = (((x13<=x14)|x15)|x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	uint16_t x18 = UINT16_MAX;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = INT32_MAX;

    t4 = (((x17<=x18)|x19)|x20);

    if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	volatile int32_t x24 = 22791;

    t5 = (((x21<=x22)|x23)|x24);

    if (t5 != -9977) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	uint32_t x26 = 4794346U;
	uint64_t x27 = 2248LLU;
	static volatile int8_t x28 = -1;
	uint64_t t6 = UINT64_MAX;

    t6 = (((x25<=x26)|x27)|x28);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x30 = 0U;
	int8_t x31 = INT8_MIN;
	volatile uint32_t t7 = 0U;

    t7 = (((x29<=x30)|x31)|x32);

    if (t7 != 4294967173U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 16U;
	static volatile int16_t x34 = -1;
	volatile int16_t x36 = -87;
	static volatile int32_t t8 = -11455375;

    t8 = (((x33<=x34)|x35)|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = 826601;
	static uint8_t x38 = 3U;
	static int16_t x39 = INT16_MAX;
	int8_t x40 = -1;
	int32_t t9 = -6;

    t9 = (((x37<=x38)|x39)|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 19042U;
	int8_t x42 = INT8_MIN;
	int8_t x43 = -1;
	volatile int32_t t10 = 1157222;

    t10 = (((x41<=x42)|x43)|x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	uint64_t x46 = UINT64_MAX;
	static volatile uint16_t x47 = 2978U;
	volatile uint32_t x48 = 1U;
	static uint32_t t11 = 94606U;

    t11 = (((x45<=x46)|x47)|x48);

    if (t11 != 2979U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1005;
	int8_t x50 = 15;
	static int64_t x51 = INT64_MAX;

    t12 = (((x49<=x50)|x51)|x52);

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	volatile uint16_t x54 = 36U;
	static volatile uint16_t x56 = 4197U;

    t13 = (((x53<=x54)|x55)|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x58 = 0U;
	static uint16_t x60 = 27U;

    t14 = (((x57<=x58)|x59)|x60);

    if (t14 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 1LLU;
	uint64_t x62 = UINT64_MAX;
	static uint16_t x63 = 16573U;
	uint64_t x64 = 4947842068LLU;
	volatile uint64_t t15 = 6093LLU;

    t15 = (((x61<=x62)|x63)|x64);

    if (t15 != 4947858621LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	static int16_t x66 = INT16_MIN;
	uint16_t x67 = 4U;
	static volatile int8_t x68 = 21;

    t16 = (((x65<=x66)|x67)|x68);

    if (t16 != 21) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -6;
	static uint16_t x70 = UINT16_MAX;
	uint32_t x71 = UINT32_MAX;
	static int16_t x72 = -1;
	uint32_t t17 = UINT32_MAX;

    t17 = (((x69<=x70)|x71)|x72);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x74 = -37;
	int64_t x75 = INT64_MIN;
	static int8_t x76 = -1;
	static int64_t t18 = 64LL;

    t18 = (((x73<=x74)|x75)|x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	volatile int32_t x78 = -1;
	int32_t x80 = -1;
	volatile int32_t t19 = -135898;

    t19 = (((x77<=x78)|x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	int8_t x83 = INT8_MAX;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = -7567439;

    t20 = (((x81<=x82)|x83)|x84);

    if (t20 != -32641) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint32_t x87 = 123830U;
	static int8_t x88 = 1;
	volatile uint32_t t21 = 3947U;

    t21 = (((x85<=x86)|x87)|x88);

    if (t21 != 123831U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = 1;
	int64_t x92 = INT64_MAX;
	int64_t t22 = INT64_MAX;

    t22 = (((x89<=x90)|x91)|x92);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	static volatile int8_t x94 = -1;
	volatile int32_t x95 = 715513;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = 1272987;

    t23 = (((x93<=x94)|x95)|x96);

    if (t23 != 715519) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MIN;
	volatile uint32_t x99 = 514576U;
	volatile uint32_t t24 = 1U;

    t24 = (((x97<=x98)|x99)|x100);

    if (t24 != 514647U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -61;
	int64_t x103 = -299LL;
	uint32_t x104 = 12242576U;
	volatile int64_t t25 = 14448LL;

    t25 = (((x101<=x102)|x103)|x104);

    if (t25 != -299LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x107 = 21U;
	uint64_t x108 = 470280LLU;
	static volatile uint64_t t26 = 9357233LLU;

    t26 = (((x105<=x106)|x107)|x108);

    if (t26 != 470301LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	static volatile int64_t x111 = 3937268034981LL;
	volatile int32_t x112 = -1;
	int64_t t27 = -2293533LL;

    t27 = (((x109<=x110)|x111)|x112);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 47U;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = 1202854881479LL;
	int32_t x116 = 1;

    t28 = (((x113<=x114)|x115)|x116);

    if (t28 != 1202854881479LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 0U;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;

    t29 = (((x117<=x118)|x119)|x120);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int16_t x123 = 9701;
	int64_t x124 = 14366779LL;

    t30 = (((x121<=x122)|x123)|x124);

    if (t30 != 14368255LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -2615;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = INT32_MAX;

    t31 = (((x125<=x126)|x127)|x128);

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -7;
	int8_t x131 = 14;

    t32 = (((x129<=x130)|x131)|x132);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = -642;
	int64_t x134 = INT64_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -684601263177869LL;

    t33 = (((x133<=x134)|x135)|x136);

    if (t33 != -9223372036835900223LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = -1LL;
	uint32_t x139 = 20438176U;
	volatile int64_t x140 = -1LL;
	int64_t t34 = 140LL;

    t34 = (((x137<=x138)|x139)|x140);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -4252743140999324153LL;
	int16_t x144 = INT16_MAX;
	volatile uint32_t t35 = 4U;

    t35 = (((x141<=x142)|x143)|x144);

    if (t35 != 32767U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	volatile uint16_t x147 = 291U;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = 4186968;

    t36 = (((x145<=x146)|x147)|x148);

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -2037LL;
	int32_t x150 = INT32_MAX;
	uint8_t x151 = UINT8_MAX;
	static volatile int16_t x152 = -2;

    t37 = (((x149<=x150)|x151)|x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x155 = INT32_MIN;

    t38 = (((x153<=x154)|x155)|x156);

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	static uint16_t x159 = UINT16_MAX;
	static int8_t x160 = INT8_MIN;
	static int32_t t39 = 3649;

    t39 = (((x157<=x158)|x159)|x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MIN;
	static int32_t x162 = -1;
	int32_t x164 = -1108;

    t40 = (((x161<=x162)|x163)|x164);

    if (t40 != -1107) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x167 = 8;
	int32_t t41 = -1609120;

    t41 = (((x165<=x166)|x167)|x168);

    if (t41 != -10406563) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x170 = 2651157LLU;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 268U;

    t42 = (((x169<=x170)|x171)|x172);

    if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 1U;
	int32_t x175 = -2070216;
	uint64_t x176 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

    t43 = (((x173<=x174)|x175)|x176);

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MIN;
	static volatile uint32_t x180 = UINT32_MAX;

    t44 = (((x177<=x178)|x179)|x180);

    if (t44 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x181 = 187;
	int16_t x183 = INT16_MIN;
	volatile uint64_t x184 = 2024632412272975LLU;
	volatile uint64_t t45 = 624426LLU;

    t45 = (((x181<=x182)|x183)|x184);

    if (t45 != 18446744073709549903LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int32_t x186 = INT32_MIN;
	int16_t x187 = -9944;
	static int32_t t46 = 906753351;

    t46 = (((x185<=x186)|x187)|x188);

    if (t46 != -9815) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	uint16_t x191 = 3536U;
	uint32_t x192 = 473757930U;
	static volatile uint32_t t47 = 46452153U;

    t47 = (((x189<=x190)|x191)|x192);

    if (t47 != 473759227U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MIN;
	int16_t x195 = -327;
	int32_t t48 = -2713154;

    t48 = (((x193<=x194)|x195)|x196);

    if (t48 != -327) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x197 = 27726U;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = -2;

    t49 = (((x197<=x198)|x199)|x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = INT64_MIN;
	volatile int64_t x203 = INT64_MAX;
	int32_t x204 = -1;
	volatile int64_t t50 = 35445154LL;

    t50 = (((x201<=x202)|x203)|x204);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = -222;
	int64_t x206 = -1LL;
	uint16_t x207 = 153U;

    t51 = (((x205<=x206)|x207)|x208);

    if (t51 != 153LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x209 = INT32_MAX;
	volatile uint32_t x211 = 77106579U;
	int64_t x212 = -1031960397LL;
	static volatile int64_t t52 = -729300385300518LL;

    t52 = (((x209<=x210)|x211)|x212);

    if (t52 != -956461645LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 13U;
	volatile int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	volatile uint16_t x216 = 227U;

    t53 = (((x213<=x214)|x215)|x216);

    if (t53 != -29) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MIN;
	int16_t x219 = -1;
	int8_t x220 = -1;
	int32_t t54 = -1626075;

    t54 = (((x217<=x218)|x219)|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	uint64_t x222 = 65881573437779LLU;
	uint64_t x223 = 903585787LLU;
	uint64_t t55 = 1LLU;

    t55 = (((x221<=x222)|x223)|x224);

    if (t55 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -49;
	static int32_t x226 = INT32_MIN;
	static volatile int8_t x227 = -1;
	uint64_t t56 = UINT64_MAX;

    t56 = (((x225<=x226)|x227)|x228);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = INT64_MIN;
	int16_t x230 = INT16_MAX;
	int32_t x231 = -1;
	int64_t x232 = -259970LL;
	volatile int64_t t57 = 608326148449870LL;

    t57 = (((x229<=x230)|x231)|x232);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x234 = 50U;
	int8_t x235 = -1;
	static uint16_t x236 = 241U;

    t58 = (((x233<=x234)|x235)|x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 48U;
	volatile uint32_t x238 = 806U;
	int8_t x239 = -1;
	uint16_t x240 = 0U;
	volatile int32_t t59 = -591192;

    t59 = (((x237<=x238)|x239)|x240);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -1537275;
	static int8_t x243 = -1;
	uint32_t x244 = 113582U;

    t60 = (((x241<=x242)|x243)|x244);

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	static volatile uint64_t x246 = UINT64_MAX;
	volatile uint64_t x247 = 45299146103LLU;
	int8_t x248 = -24;
	static volatile uint64_t t61 = UINT64_MAX;

    t61 = (((x245<=x246)|x247)|x248);

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	static uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 4014295U;
	uint16_t x252 = 13U;
	uint32_t t62 = 2U;

    t62 = (((x249<=x250)|x251)|x252);

    if (t62 != 4014303U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MIN;
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 19948317LLU;
	uint32_t x256 = UINT32_MAX;
	uint64_t t63 = 147002450097084LLU;

    t63 = (((x253<=x254)|x255)|x256);

    if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x259 = -1;
	int64_t x260 = INT64_MIN;
	static int64_t t64 = 60360LL;

    t64 = (((x257<=x258)|x259)|x260);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = 2769237548967LL;
	volatile uint16_t x262 = UINT16_MAX;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = 56U;
	int64_t t65 = 1857501LL;

    t65 = (((x261<=x262)|x263)|x264);

    if (t65 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 412129396730LL;
	uint64_t x266 = 55565707693LLU;
	uint64_t x267 = 1LLU;
	int16_t x268 = -1;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (((x265<=x266)|x267)|x268);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = INT64_MAX;
	uint64_t x271 = 4475842092112LLU;
	volatile uint16_t x272 = 10U;
	static volatile uint64_t t67 = 150481213175711502LLU;

    t67 = (((x269<=x270)|x271)|x272);

    if (t67 != 4475842092122LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	volatile int32_t x274 = -30308235;
	int32_t x275 = INT32_MAX;

    t68 = (((x273<=x274)|x275)|x276);

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MAX;
	int64_t x278 = -1LL;
	int32_t x279 = 456109269;
	static int8_t x280 = INT8_MIN;
	int32_t t69 = -508;

    t69 = (((x277<=x278)|x279)|x280);

    if (t69 != -43) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = UINT64_MAX;
	int8_t x282 = 3;
	uint32_t x283 = 10979214U;
	uint64_t x284 = 153301LLU;
	volatile uint64_t t70 = 8015989807204LLU;

    t70 = (((x281<=x282)|x283)|x284);

    if (t70 != 10999775LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = -3LL;
	volatile int64_t t71 = 7054390361226338LL;

    t71 = (((x285<=x286)|x287)|x288);

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = 1U;
	int8_t x291 = 15;
	uint32_t x292 = 1750246U;
	volatile uint32_t t72 = 45U;

    t72 = (((x289<=x290)|x291)|x292);

    if (t72 != 1750255U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = UINT64_MAX;
	int64_t x294 = 5693334922150LL;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 48257812U;
	uint32_t t73 = 105U;

    t73 = (((x293<=x294)|x295)|x296);

    if (t73 != 48257919U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MAX;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	int64_t t74 = 3650966LL;

    t74 = (((x297<=x298)|x299)|x300);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x303 = 13;
	int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

    t75 = (((x301<=x302)|x303)|x304);

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = UINT32_MAX;
	int64_t x307 = -1LL;
	int16_t x308 = INT16_MIN;
	static volatile int64_t t76 = -178LL;

    t76 = (((x305<=x306)|x307)|x308);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 31413U;
	static int32_t x311 = INT32_MIN;
	static uint64_t x312 = 57988524989LLU;
	static uint64_t t77 = 2411959771492244LLU;

    t77 = (((x309<=x310)|x311)|x312);

    if (t77 != 18446744071568534461LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 253666;
	volatile int8_t x314 = -1;
	int8_t x315 = INT8_MIN;

    t78 = (((x313<=x314)|x315)|x316);

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = 59552303;
	int8_t x319 = 2;
	static int8_t x320 = 6;
	volatile int32_t t79 = 33508166;

    t79 = (((x317<=x318)|x319)|x320);

    if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile uint8_t x322 = 58U;
	int8_t x323 = 40;
	int8_t x324 = INT8_MIN;
	int32_t t80 = 83163166;

    t80 = (((x321<=x322)|x323)|x324);

    if (t80 != -88) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 55354302;
	int16_t x326 = INT16_MIN;
	static int32_t x328 = INT32_MAX;
	static int32_t t81 = INT32_MAX;

    t81 = (((x325<=x326)|x327)|x328);

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x329 = INT8_MIN;
	int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 1;

    t82 = (((x329<=x330)|x331)|x332);

    if (t82 != -2147483521) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x334 = 57200;
	volatile int16_t x335 = -19;
	uint64_t x336 = 53114403590184LLU;
	uint64_t t83 = 5730209066085764067LLU;

    t83 = (((x333<=x334)|x335)|x336);

    if (t83 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	static int8_t x338 = 1;
	volatile int16_t x339 = -1;
	volatile uint8_t x340 = UINT8_MAX;

    t84 = (((x337<=x338)|x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x342 = 1;
	int32_t x343 = 3529;
	int32_t t85 = 171953;

    t85 = (((x341<=x342)|x343)|x344);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 2U;
	uint32_t x346 = 251389U;
	int16_t x347 = -1;
	volatile int64_t t86 = -7725410LL;

    t86 = (((x345<=x346)|x347)|x348);

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = UINT32_MAX;
	uint16_t x352 = UINT16_MAX;
	int32_t t87 = -2727;

    t87 = (((x349<=x350)|x351)|x352);

    if (t87 != -2147418113) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = -11;
	uint16_t x355 = 24U;
	int16_t x356 = 16;
	volatile int32_t t88 = -1;

    t88 = (((x353<=x354)|x355)|x356);

    if (t88 != 24) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 1831U;
	static uint8_t x358 = 3U;
	uint32_t x360 = UINT32_MAX;

    t89 = (((x357<=x358)|x359)|x360);

    if (t89 != 4294967295LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = 26513314075359LL;
	int32_t x363 = 0;
	int8_t x364 = INT8_MIN;

    t90 = (((x361<=x362)|x363)|x364);

    if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MAX;
	int64_t t91 = INT64_MAX;

    t91 = (((x365<=x366)|x367)|x368);

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	static volatile uint64_t x370 = 190LLU;
	int64_t x371 = 25305LL;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = (((x369<=x370)|x371)|x372);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	int32_t t93 = -3;

    t93 = (((x373<=x374)|x375)|x376);

    if (t93 != -2147483637) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	uint32_t x380 = 56779U;

    t94 = (((x377<=x378)|x379)|x380);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MAX;
	volatile int64_t t95 = INT64_MAX;

    t95 = (((x381<=x382)|x383)|x384);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = INT64_MIN;
	uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MIN;

    t96 = (((x385<=x386)|x387)|x388);

    if (t96 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint32_t x390 = 111243U;
	int32_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 1891;

    t97 = (((x389<=x390)|x391)|x392);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = INT16_MIN;
	uint8_t x395 = 93U;

    t98 = (((x393<=x394)|x395)|x396);

    if (t98 != 67449653861449215LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x400 = -1;
	int32_t t99 = 4;

    t99 = (((x397<=x398)|x399)|x400);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = 1;
	static volatile int8_t x402 = INT8_MAX;
	static uint32_t x403 = UINT32_MAX;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = (((x401<=x402)|x403)|x404);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = 37;
	int32_t x406 = 249;
	uint8_t x408 = 12U;
	int32_t t101 = -2;

    t101 = (((x405<=x406)|x407)|x408);

    if (t101 != 13) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = -1;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (((x409<=x410)|x411)|x412);

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MIN;
	uint64_t x415 = 1LLU;
	static volatile uint64_t t103 = 1560585296LLU;

    t103 = (((x413<=x414)|x415)|x416);

    if (t103 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = UINT16_MAX;
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = -7412;
	static volatile int16_t x420 = -51;
	volatile int32_t t104 = 5196095;

    t104 = (((x417<=x418)|x419)|x420);

    if (t104 != -51) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x421 = -8112;
	static uint16_t x423 = 70U;
	int32_t x424 = INT32_MAX;
	static int32_t t105 = INT32_MAX;

    t105 = (((x421<=x422)|x423)|x424);

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = UINT64_MAX;
	static volatile uint16_t x426 = UINT16_MAX;
	uint32_t x427 = UINT32_MAX;
	uint16_t x428 = UINT16_MAX;
	static uint32_t t106 = UINT32_MAX;

    t106 = (((x425<=x426)|x427)|x428);

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 5236U;
	int16_t x430 = 0;
	uint8_t x431 = 78U;
	static volatile int8_t x432 = INT8_MAX;
	int32_t t107 = 5955;

    t107 = (((x429<=x430)|x431)|x432);

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 70;
	volatile int8_t x434 = INT8_MAX;
	uint32_t x435 = 2010167U;
	int64_t x436 = INT64_MIN;
	int64_t t108 = -556286653LL;

    t108 = (((x433<=x434)|x435)|x436);

    if (t108 != -9223372036852765641LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = UINT8_MAX;
	int64_t x438 = -1LL;
	uint64_t x440 = 8113467LLU;

    t109 = (((x437<=x438)|x439)|x440);

    if (t109 != 18446744073709547007LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int8_t x442 = -1;
	int16_t x443 = INT16_MAX;
	volatile int64_t x444 = INT64_MAX;
	volatile int64_t t110 = INT64_MAX;

    t110 = (((x441<=x442)|x443)|x444);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -1;
	volatile uint64_t x446 = 5089141617LLU;
	volatile uint8_t x447 = 3U;
	volatile int64_t x448 = -1LL;
	int64_t t111 = 1690119695LL;

    t111 = (((x445<=x446)|x447)|x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x450 = INT16_MIN;
	int64_t x451 = -112083LL;

    t112 = (((x449<=x450)|x451)|x452);

    if (t112 != -65537LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = -1;
	static uint64_t x456 = 0LLU;
	uint64_t t113 = UINT64_MAX;

    t113 = (((x453<=x454)|x455)|x456);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = 0U;
	static volatile int8_t x458 = INT8_MIN;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t114 = -1778814698LL;

    t114 = (((x457<=x458)|x459)|x460);

    if (t114 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 28909067U;
	uint8_t x462 = 0U;
	uint16_t x463 = 32U;
	uint16_t x464 = 15U;
	volatile int32_t t115 = 32;

    t115 = (((x461<=x462)|x463)|x464);

    if (t115 != 47) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = UINT8_MAX;
	uint16_t x466 = UINT16_MAX;
	int16_t x467 = INT16_MIN;
	volatile int32_t t116 = -5273;

    t116 = (((x465<=x466)|x467)|x468);

    if (t116 != -32671) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 1U;
	int8_t x470 = INT8_MIN;
	volatile int64_t t117 = -51286002LL;

    t117 = (((x469<=x470)|x471)|x472);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x473 = 3U;
	int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MIN;
	static int32_t x476 = INT32_MIN;
	volatile int64_t t118 = -8044282LL;

    t118 = (((x473<=x474)|x475)|x476);

    if (t118 != -2147483647LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x477 = INT64_MIN;
	uint32_t x478 = UINT32_MAX;
	static volatile uint16_t x479 = 745U;
	volatile uint32_t t119 = 524885996U;

    t119 = (((x477<=x478)|x479)|x480);

    if (t119 != 763U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	static uint64_t x482 = 426468327381803LLU;
	int32_t x483 = -47;
	int16_t x484 = INT16_MIN;
	int32_t t120 = -229248;

    t120 = (((x481<=x482)|x483)|x484);

    if (t120 != -47) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	uint8_t x486 = 11U;
	volatile int32_t x487 = -62422754;
	static uint64_t x488 = 8275723037746755LLU;
	uint64_t t121 = 50532387LLU;

    t121 = (((x485<=x486)|x487)|x488);

    if (t121 != 18446744073708480351LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x490 = INT8_MIN;
	volatile int16_t x491 = -1;
	volatile int64_t t122 = -160982366LL;

    t122 = (((x489<=x490)|x491)|x492);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	volatile int64_t x494 = -16712015092406LL;
	int16_t x495 = -11;
	static int32_t t123 = -2685280;

    t123 = (((x493<=x494)|x495)|x496);

    if (t123 != -11) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int8_t x498 = INT8_MAX;
	volatile uint16_t x499 = 2167U;
	uint64_t x500 = UINT64_MAX;
	uint64_t t124 = UINT64_MAX;

    t124 = (((x497<=x498)|x499)|x500);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x501 = 3U;
	uint64_t x502 = UINT64_MAX;
	int32_t x503 = INT32_MAX;
	int64_t x504 = -136006830063828LL;
	static volatile int64_t t125 = -921992788LL;

    t125 = (((x501<=x502)|x503)|x504);

    if (t125 != -136006581878785LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = 142843616875481LLU;
	int16_t x507 = 7;
	int32_t x508 = INT32_MAX;
	static volatile int32_t t126 = INT32_MAX;

    t126 = (((x505<=x506)|x507)|x508);

    if (t126 != INT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = INT16_MAX;
	int64_t x511 = 37933795330144LL;
	int32_t x512 = INT32_MIN;
	volatile int64_t t127 = 1004LL;

    t127 = (((x509<=x510)|x511)|x512);

    if (t127 != -1503311775LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	int64_t x514 = -1LL;
	int64_t x515 = INT64_MAX;
	volatile uint32_t x516 = UINT32_MAX;
	int64_t t128 = INT64_MAX;

    t128 = (((x513<=x514)|x515)|x516);

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = INT16_MIN;
	int64_t x518 = -836548986LL;
	static int8_t x519 = -1;
	volatile int32_t t129 = 2884;

    t129 = (((x517<=x518)|x519)|x520);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x521 = -1;
	int32_t x523 = INT32_MIN;
	int16_t x524 = INT16_MIN;
	int32_t t130 = 698174696;

    t130 = (((x521<=x522)|x523)|x524);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 4005567370902710LLU;
	int64_t x526 = INT64_MAX;
	int64_t x528 = -70505550157LL;
	int64_t t131 = 974755404210641LL;

    t131 = (((x525<=x526)|x527)|x528);

    if (t131 != -1786073421LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t t132 = -844655758;

    t132 = (((x529<=x530)|x531)|x532);

    if (t132 != -5) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -1;
	int32_t x534 = INT32_MAX;
	int8_t x536 = -1;
	volatile int32_t t133 = 107861;

    t133 = (((x533<=x534)|x535)|x536);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 33U;
	volatile uint32_t x538 = 101136U;
	static int32_t x539 = INT32_MIN;
	int32_t x540 = INT32_MIN;
	volatile int32_t t134 = -7101380;

    t134 = (((x537<=x538)|x539)|x540);

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MAX;
	volatile int16_t x543 = INT16_MIN;
	static int32_t t135 = 30;

    t135 = (((x541<=x542)|x543)|x544);

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t t136 = 1LLU;

    t136 = (((x545<=x546)|x547)|x548);

    if (t136 != 18446744073709550411LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	static int8_t x550 = -1;
	uint64_t x551 = 9566438970898605LLU;
	int8_t x552 = -1;
	static volatile uint64_t t137 = UINT64_MAX;

    t137 = (((x549<=x550)|x551)|x552);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x553 = INT8_MIN;
	static int64_t x554 = INT64_MAX;
	static int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MIN;
	int32_t t138 = 30030;

    t138 = (((x553<=x554)|x555)|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = 1409310359LL;
	int8_t x558 = INT8_MIN;
	uint32_t x559 = 617161U;
	uint32_t t139 = UINT32_MAX;

    t139 = (((x557<=x558)|x559)|x560);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	uint32_t x562 = 1586731552U;
	int64_t x563 = INT64_MIN;
	static volatile uint64_t x564 = 4LLU;
	volatile uint64_t t140 = 436075748270054446LLU;

    t140 = (((x561<=x562)|x563)|x564);

    if (t140 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 15U;
	uint8_t x567 = 3U;
	int32_t t141 = 129466511;

    t141 = (((x565<=x566)|x567)|x568);

    if (t141 != 11) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;

    t142 = (((x569<=x570)|x571)|x572);

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x573 = -889;
	int32_t x574 = INT32_MIN;
	int16_t x575 = INT16_MAX;

    t143 = (((x573<=x574)|x575)|x576);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	int8_t x579 = INT8_MAX;
	int32_t t144 = -21904;

    t144 = (((x577<=x578)|x579)|x580);

    if (t144 != 546749439) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x581 = INT32_MIN;
	int32_t x582 = 243;
	int16_t x584 = INT16_MIN;
	int32_t t145 = 3160709;

    t145 = (((x581<=x582)|x583)|x584);

    if (t145 != -9) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x585 = UINT8_MAX;
	int32_t x586 = INT32_MIN;
	volatile uint32_t x588 = 12451823U;
	uint32_t t146 = UINT32_MAX;

    t146 = (((x585<=x586)|x587)|x588);

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -67345;
	static int8_t x590 = -1;
	int8_t x591 = INT8_MIN;
	int64_t x592 = INT64_MIN;

    t147 = (((x589<=x590)|x591)|x592);

    if (t147 != -127LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x593 = UINT64_MAX;
	uint8_t x594 = 9U;
	int16_t x595 = INT16_MIN;
	volatile uint8_t x596 = 4U;
	int32_t t148 = 755316480;

    t148 = (((x593<=x594)|x595)|x596);

    if (t148 != -32764) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x599 = 26522U;

    t149 = (((x597<=x598)|x599)|x600);

    if (t149 != 26623) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	volatile uint16_t x602 = UINT16_MAX;
	int8_t x603 = 3;
	static int8_t x604 = INT8_MIN;
	volatile int32_t t150 = -185046710;

    t150 = (((x601<=x602)|x603)|x604);

    if (t150 != -125) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -1;
	uint16_t x606 = UINT16_MAX;
	volatile int32_t x607 = INT32_MIN;
	static int8_t x608 = -1;
	volatile int32_t t151 = 1949162;

    t151 = (((x605<=x606)|x607)|x608);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = UINT16_MAX;
	int32_t x610 = -1;
	static int64_t x611 = INT64_MIN;
	int64_t t152 = -556213636602384298LL;

    t152 = (((x609<=x610)|x611)|x612);

    if (t152 != -51LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -1LL;
	uint16_t x614 = 19U;
	int32_t x615 = 21360;
	uint64_t x616 = 3863228159LLU;
	uint64_t t153 = 274993846LLU;

    t153 = (((x613<=x614)|x615)|x616);

    if (t153 != 3863248895LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 5U;
	uint32_t x618 = 19663521U;
	int64_t x619 = -619523LL;
	int8_t x620 = -1;
	static volatile int64_t t154 = 61433555918463LL;

    t154 = (((x617<=x618)|x619)|x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int32_t x622 = INT32_MIN;
	int32_t x624 = INT32_MAX;
	volatile uint32_t t155 = 16355U;

    t155 = (((x621<=x622)|x623)|x624);

    if (t155 != 2147483647U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x626 = UINT64_MAX;
	uint16_t x627 = 377U;
	uint32_t x628 = 9632029U;
	volatile uint32_t t156 = 1U;

    t156 = (((x625<=x626)|x627)|x628);

    if (t156 != 9632125U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = -1LL;
	uint64_t x631 = 3209869291703383183LLU;
	uint64_t t157 = 790404LLU;

    t157 = (((x629<=x630)|x631)|x632);

    if (t157 != 3209869291703435263LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	volatile int8_t x634 = INT8_MIN;
	volatile uint8_t x635 = 1U;
	static volatile int8_t x636 = 0;
	static volatile int32_t t158 = 223;

    t158 = (((x633<=x634)|x635)|x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x638 = UINT64_MAX;
	uint8_t x639 = 19U;
	static int32_t t159 = 1;

    t159 = (((x637<=x638)|x639)|x640);

    if (t159 != 375) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x642 = UINT64_MAX;
	static uint8_t x643 = 28U;
	volatile int8_t x644 = 10;
	static int32_t t160 = -216644973;

    t160 = (((x641<=x642)|x643)|x644);

    if (t160 != 31) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	uint16_t x647 = UINT16_MAX;
	static int32_t t161 = -106;

    t161 = (((x645<=x646)|x647)|x648);

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x650 = 883U;
	uint64_t t162 = 49284323315194200LLU;

    t162 = (((x649<=x650)|x651)|x652);

    if (t162 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = 2;
	static uint16_t x656 = UINT16_MAX;
	volatile int32_t t163 = 0;

    t163 = (((x653<=x654)|x655)|x656);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 1;
	uint32_t x658 = UINT32_MAX;
	volatile uint16_t x659 = 2U;
	uint64_t x660 = 42923389LLU;
	uint64_t t164 = 8794673035708073182LLU;

    t164 = (((x657<=x658)|x659)|x660);

    if (t164 != 42923391LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 4113U;
	int32_t x662 = 1;
	static int16_t x664 = INT16_MAX;

    t165 = (((x661<=x662)|x663)|x664);

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = INT64_MIN;
	int32_t x667 = -1;
	static uint8_t x668 = UINT8_MAX;
	int32_t t166 = -213;

    t166 = (((x665<=x666)|x667)|x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -14773243122552175LL;
	int64_t x670 = -71516908299951071LL;
	uint16_t x672 = UINT16_MAX;
	int32_t t167 = -158123544;

    t167 = (((x669<=x670)|x671)|x672);

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	static int32_t x674 = INT32_MIN;
	uint64_t x675 = UINT64_MAX;
	volatile int8_t x676 = INT8_MIN;
	uint64_t t168 = UINT64_MAX;

    t168 = (((x673<=x674)|x675)|x676);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 69U;
	int64_t x680 = -9739666LL;
	static volatile int64_t t169 = -192463558LL;

    t169 = (((x677<=x678)|x679)|x680);

    if (t169 != -9739665LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	int16_t x684 = INT16_MIN;

    t170 = (((x681<=x682)|x683)|x684);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MAX;
	int32_t x686 = INT32_MIN;
	uint32_t x687 = UINT32_MAX;
	uint32_t t171 = UINT32_MAX;

    t171 = (((x685<=x686)|x687)|x688);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 1;
	uint8_t x691 = 0U;
	int32_t t172 = 1609922;

    t172 = (((x689<=x690)|x691)|x692);

    if (t172 != -2147483647) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = -1;
	static int16_t x696 = INT16_MAX;
	static volatile int32_t t173 = -92897739;

    t173 = (((x693<=x694)|x695)|x696);

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = 34U;
	static int32_t x698 = INT32_MIN;
	volatile int8_t x699 = INT8_MIN;

    t174 = (((x697<=x698)|x699)|x700);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x702 = INT16_MAX;
	int8_t x704 = INT8_MIN;
	int32_t t175 = 21568098;

    t175 = (((x701<=x702)|x703)|x704);

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = -1;
	uint32_t x706 = 14086621U;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = -102384;

    t176 = (((x705<=x706)|x707)|x708);

    if (t176 != -31500) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	static int64_t x710 = -656LL;
	int16_t x711 = INT16_MAX;
	volatile int64_t x712 = INT64_MAX;
	volatile int64_t t177 = INT64_MAX;

    t177 = (((x709<=x710)|x711)|x712);

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = -1LL;
	volatile uint32_t x714 = UINT32_MAX;
	int16_t x715 = INT16_MIN;
	static uint64_t x716 = UINT64_MAX;

    t178 = (((x713<=x714)|x715)|x716);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x718 = UINT64_MAX;
	uint64_t x719 = UINT64_MAX;

    t179 = (((x717<=x718)|x719)|x720);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	int8_t x722 = -1;
	uint8_t x723 = 16U;
	static int64_t x724 = INT64_MIN;
	volatile int64_t t180 = 109691225LL;

    t180 = (((x721<=x722)|x723)|x724);

    if (t180 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = -2686165100466LL;
	static int8_t x726 = -1;
	static volatile int16_t x727 = 0;
	int64_t t181 = -939LL;

    t181 = (((x725<=x726)|x727)|x728);

    if (t181 != -217399489258526637LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 0;
	int8_t x731 = INT8_MIN;
	uint16_t x732 = 12U;
	int32_t t182 = -1;

    t182 = (((x729<=x730)|x731)|x732);

    if (t182 != -115) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MIN;
	int8_t x735 = INT8_MAX;
	int16_t x736 = -1;
	static volatile int32_t t183 = -62;

    t183 = (((x733<=x734)|x735)|x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -19;
	uint16_t x738 = UINT16_MAX;
	static int8_t x739 = 1;
	volatile int8_t x740 = 5;
	volatile int32_t t184 = -3818526;

    t184 = (((x737<=x738)|x739)|x740);

    if (t184 != 5) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	int16_t x742 = -1;
	uint32_t x743 = UINT32_MAX;

    t185 = (((x741<=x742)|x743)|x744);

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	uint8_t x746 = UINT8_MAX;
	int64_t x747 = INT64_MIN;
	int16_t x748 = 4;
	volatile int64_t t186 = 14229854156LL;

    t186 = (((x745<=x746)|x747)|x748);

    if (t186 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MIN;
	int64_t t187 = 2637745387932LL;

    t187 = (((x749<=x750)|x751)|x752);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int32_t x754 = -1607593;
	int32_t x755 = 114197;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -7;

    t188 = (((x753<=x754)|x755)|x756);

    if (t188 != -16875) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 1740214;
	volatile int32_t x758 = INT32_MIN;
	static volatile uint8_t x759 = 1U;
	uint32_t t189 = 278829595U;

    t189 = (((x757<=x758)|x759)|x760);

    if (t189 != 91U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -1;
	uint32_t x762 = 124499U;
	int8_t x763 = INT8_MIN;
	uint32_t x764 = 165U;
	volatile uint32_t t190 = 9714966U;

    t190 = (((x761<=x762)|x763)|x764);

    if (t190 != 4294967205U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = 0;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = -1LL;
	volatile uint64_t t191 = UINT64_MAX;

    t191 = (((x765<=x766)|x767)|x768);

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = 18439137LL;
	int16_t x771 = INT16_MIN;
	volatile int32_t t192 = -36;

    t192 = (((x769<=x770)|x771)|x772);

    if (t192 != -32767) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = 112450792;
	int8_t x774 = 5;
	int16_t x775 = INT16_MIN;
	uint64_t x776 = 1LLU;
	uint64_t t193 = 3198785574519LLU;

    t193 = (((x773<=x774)|x775)|x776);

    if (t193 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x778 = 5U;
	int8_t x779 = INT8_MIN;
	int16_t x780 = -1;
	int32_t t194 = 28387;

    t194 = (((x777<=x778)|x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -334;
	uint32_t x782 = 28006U;
	int64_t x783 = 15425LL;
	volatile uint8_t x784 = UINT8_MAX;
	volatile int64_t t195 = 35134480106319760LL;

    t195 = (((x781<=x782)|x783)|x784);

    if (t195 != 15615LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = -8;
	uint32_t x787 = UINT32_MAX;
	uint64_t t196 = 8585LLU;

    t196 = (((x785<=x786)|x787)|x788);

    if (t196 != 60129542143LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 119U;
	static uint32_t x792 = 1395540U;
	uint32_t t197 = UINT32_MAX;

    t197 = (((x789<=x790)|x791)|x792);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	volatile int16_t x794 = INT16_MIN;
	int64_t x795 = -27LL;
	int16_t x796 = INT16_MIN;
	volatile int64_t t198 = 4160289967LL;

    t198 = (((x793<=x794)|x795)|x796);

    if (t198 != -27LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 614U;
	int8_t x799 = -1;
	int16_t x800 = INT16_MIN;

    t199 = (((x797<=x798)|x799)|x800);

    if (t199 != -1) { NG(); } else { ; }
	
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

