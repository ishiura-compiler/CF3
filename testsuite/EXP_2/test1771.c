
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

volatile int32_t x2 = INT32_MIN;
uint8_t x5 = UINT8_MAX;
int32_t x10 = INT32_MIN;
static int64_t x12 = INT64_MIN;
volatile int8_t x16 = -1;
volatile int64_t x18 = -1LL;
int16_t x21 = 0;
static uint32_t x48 = 7774443U;
int32_t x49 = INT32_MIN;
int32_t x50 = -1;
volatile uint8_t x52 = 61U;
int8_t x55 = -1;
volatile int16_t x56 = INT16_MIN;
volatile uint16_t x57 = UINT16_MAX;
volatile int16_t x58 = INT16_MAX;
volatile uint64_t x61 = UINT64_MAX;
int64_t x64 = 111669562229LL;
int32_t x77 = -80625;
uint8_t x79 = 9U;
static int32_t x81 = INT32_MAX;
static int16_t x82 = -1452;
static uint8_t x93 = 95U;
int16_t x97 = INT16_MIN;
int8_t x99 = INT8_MIN;
int8_t x101 = -1;
uint8_t x102 = 1U;
int16_t x117 = 14722;
int32_t t28 = -84;
uint64_t x126 = UINT64_MAX;
uint64_t x132 = UINT64_MAX;
uint64_t x133 = 15285999LLU;
volatile int32_t t33 = 248744;
int8_t x143 = -1;
volatile int32_t t35 = 1;
static int64_t x149 = INT64_MIN;
volatile int64_t x153 = INT64_MAX;
int64_t x155 = -2682426673457588LL;
int16_t x159 = INT16_MIN;
int8_t x169 = 47;
volatile int8_t x170 = -3;
int64_t x173 = INT64_MAX;
volatile int32_t x174 = INT32_MAX;
int32_t x185 = 381;
uint16_t x188 = 3U;
int8_t x190 = INT8_MIN;
uint16_t x192 = UINT16_MAX;
uint32_t x193 = 5046455U;
int8_t x196 = 60;
uint16_t x199 = UINT16_MAX;
volatile int32_t t48 = -118015;
uint32_t x202 = 13881U;
volatile int8_t x204 = -1;
volatile int32_t t49 = 1089654;
static int16_t x205 = -1;
static int32_t x207 = -1;
uint64_t x208 = UINT64_MAX;
volatile uint32_t x213 = 236U;
uint8_t x226 = 10U;
uint16_t x230 = 3U;
int16_t x231 = 1;
uint8_t x234 = 13U;
int8_t x239 = INT8_MIN;
static int8_t x240 = -1;
static volatile uint8_t x243 = 2U;
int16_t x245 = 2;
volatile int16_t x258 = INT16_MIN;
int32_t x262 = -1;
int64_t x263 = -33LL;
int32_t t64 = 1371366;
uint8_t x265 = 5U;
int64_t x268 = 424849249111962LL;
volatile int32_t t65 = -873206383;
uint16_t x270 = UINT16_MAX;
volatile int32_t t66 = 12604;
int16_t x286 = -1;
static uint16_t x291 = 79U;
int8_t x296 = INT8_MIN;
volatile int32_t x300 = 932476;
volatile int32_t t72 = -4024068;
int64_t x306 = INT64_MAX;
uint64_t x308 = UINT64_MAX;
int16_t x311 = INT16_MIN;
static int16_t x315 = INT16_MIN;
static volatile int16_t x322 = 8;
int32_t x323 = INT32_MAX;
int32_t x325 = INT32_MIN;
uint32_t x334 = UINT32_MAX;
volatile int32_t t81 = -15;
uint64_t x337 = 2085LLU;
volatile int32_t t82 = 8925662;
static int32_t x341 = INT32_MIN;
static uint64_t x346 = 1LLU;
int8_t x349 = 4;
int64_t x359 = -1LL;
uint32_t x360 = 374618539U;
static uint8_t x361 = 1U;
int32_t x363 = 93613;
int32_t x366 = -1;
static uint16_t x369 = 24636U;
uint16_t x375 = UINT16_MAX;
int32_t x376 = 84;
int32_t x379 = INT32_MIN;
static int16_t x380 = INT16_MIN;
uint8_t x382 = UINT8_MAX;
int32_t x384 = -5719;
volatile uint32_t x390 = 1885625395U;
uint32_t x393 = UINT32_MAX;
volatile int8_t x395 = INT8_MAX;
int16_t x417 = INT16_MAX;
volatile int32_t t103 = 41152;
int8_t x433 = -1;
uint16_t x438 = 1488U;
volatile uint32_t x439 = 2908315U;
uint8_t x442 = UINT8_MAX;
static int8_t x449 = -20;
volatile uint32_t x450 = 1248966U;
int16_t x455 = INT16_MAX;
int8_t x462 = INT8_MIN;
uint32_t x466 = 679820U;
volatile int32_t t112 = -27844858;
int64_t x473 = -2322678LL;
volatile int32_t t114 = -62494;
uint16_t x481 = 869U;
volatile int32_t t116 = -2842;
int8_t x494 = 3;
uint64_t x496 = UINT64_MAX;
volatile int32_t t119 = -14;
volatile int8_t x506 = 7;
static uint16_t x512 = UINT16_MAX;
static int32_t t122 = 297527904;
volatile int16_t x516 = INT16_MIN;
volatile uint64_t x520 = 338073954157145197LLU;
static volatile int8_t x521 = INT8_MAX;
volatile int32_t t126 = -68050378;
int64_t x533 = -318213977792862337LL;
static uint64_t x539 = 11626465LLU;
int32_t t129 = 3;
int32_t t130 = -10975;
uint8_t x546 = 79U;
volatile int32_t t131 = -3271105;
int32_t x549 = INT32_MIN;
int64_t x550 = -308601653LL;
int32_t t132 = -429314959;
int32_t t133 = 3;
volatile uint32_t x565 = UINT32_MAX;
int32_t x567 = 34078819;
uint32_t x573 = 95682814U;
int32_t t138 = 0;
static volatile int16_t x581 = 526;
uint32_t x584 = UINT32_MAX;
static volatile int16_t x585 = INT16_MIN;
int32_t t142 = -317782;
int32_t x607 = INT32_MIN;
uint32_t x609 = 600160U;
int16_t x612 = 241;
static int16_t x617 = INT16_MIN;
volatile int32_t t149 = -286446;
int16_t x623 = 15648;
int32_t t150 = 14;
int8_t x627 = 3;
static volatile int64_t x629 = INT64_MIN;
static int32_t t153 = 13180;
int32_t x643 = INT32_MIN;
static uint16_t x647 = 4U;
int32_t t157 = 23;
int16_t x653 = INT16_MIN;
uint64_t x654 = 1058511906587434LLU;
int8_t x656 = INT8_MIN;
volatile int32_t t158 = 834041;
static int16_t x662 = INT16_MAX;
int32_t x664 = -1;
uint64_t x669 = 102848542700110LLU;
volatile int32_t t163 = -53487422;
static int32_t x686 = -236716368;
int64_t x691 = INT64_MIN;
volatile int32_t t168 = 121;
uint16_t x698 = UINT16_MAX;
int8_t x700 = -1;
int64_t x701 = 75003LL;
int8_t x704 = -27;
int8_t x706 = 0;
int64_t x707 = 763463745001590104LL;
volatile int32_t t171 = 172604575;
int8_t x710 = 34;
int32_t t172 = 1076718;
int8_t x714 = INT8_MAX;
int16_t x720 = -1;
uint8_t x721 = 50U;
volatile int32_t x726 = -3541693;
uint64_t x727 = 10LLU;
static int16_t x728 = -1;
static volatile int32_t t178 = 7850450;
static volatile int32_t t179 = 11;
int64_t x741 = -5LL;
uint16_t x742 = 1204U;
int16_t x756 = INT16_MIN;
int8_t x758 = INT8_MAX;
uint64_t x773 = 44610013LLU;
static uint16_t x778 = 13203U;
static volatile int32_t t189 = 185404920;
static int16_t x782 = -3624;
static volatile int32_t t192 = 1120888;
int32_t x808 = -1;
int8_t x810 = -4;
int32_t x819 = INT32_MAX;
static uint16_t x823 = 26690U;
int32_t t198 = 2328;
static volatile uint8_t x826 = 122U;
static volatile int32_t t199 = 1;


void f0(void) {
    	int16_t x1 = 436;
	volatile uint16_t x3 = 0U;
	static uint8_t x4 = 14U;
	int32_t t0 = 6;

    t0 = ((x1+(x2<=x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 46838;
	uint64_t x7 = 43505602597LLU;
	int8_t x8 = INT8_MAX;
	int32_t t1 = 117;

    t1 = ((x5+(x6<=x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint32_t x11 = UINT32_MAX;
	static int32_t t2 = 91297675;

    t2 = ((x9+(x10<=x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 116U;
	volatile uint32_t x14 = 40597311U;
	volatile uint8_t x15 = 116U;
	volatile int32_t t3 = 12;

    t3 = ((x13+(x14<=x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 2037802826517LLU;
	int32_t x19 = INT32_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -13708685;

    t4 = ((x17+(x18<=x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 480203134U;
	static uint8_t x23 = 3U;
	static uint8_t x24 = 0U;
	volatile int32_t t5 = 5063;

    t5 = ((x21+(x22<=x23))!=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	uint16_t x26 = UINT16_MAX;
	int32_t x27 = -1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 12036289;

    t6 = ((x25+(x26<=x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile int8_t x30 = INT8_MAX;
	uint64_t x31 = UINT64_MAX;
	uint64_t x32 = UINT64_MAX;
	int32_t t7 = -707;

    t7 = ((x29+(x30<=x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1046LL;
	volatile int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 19;
	static int32_t t8 = 5;

    t8 = ((x33+(x34<=x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 65U;
	uint32_t x38 = 22748U;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 205937;

    t9 = ((x37+(x38<=x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 1088258406U;
	uint16_t x42 = 10U;
	volatile int8_t x43 = INT8_MAX;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 15110980;

    t10 = ((x41+(x42<=x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 4271U;
	uint16_t x46 = 4U;
	int32_t x47 = INT32_MAX;
	volatile int32_t t11 = -115933582;

    t11 = ((x45+(x46<=x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x51 = 988;
	int32_t t12 = 0;

    t12 = ((x49+(x50<=x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 63600151365165842LLU;
	static int8_t x54 = INT8_MAX;
	int32_t t13 = -12722528;

    t13 = ((x53+(x54<=x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x59 = -1LL;
	uint32_t x60 = 59U;
	int32_t t14 = 3;

    t14 = ((x57+(x58<=x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x62 = 47U;
	int8_t x63 = INT8_MIN;
	volatile int32_t t15 = -2;

    t15 = ((x61+(x62<=x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 1449393LL;
	int32_t x66 = -1;
	uint16_t x67 = 3U;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -13344;

    t16 = ((x65+(x66<=x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = 3610943839410924LL;
	volatile int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MIN;
	int16_t x72 = -374;
	int32_t t17 = 126457270;

    t17 = ((x69+(x70<=x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x74 = -1LL;
	int8_t x75 = -3;
	uint64_t x76 = 425483055682178025LLU;
	volatile int32_t t18 = 157959;

    t18 = ((x73+(x74<=x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x78 = UINT16_MAX;
	uint64_t x80 = 2LLU;
	int32_t t19 = 701010073;

    t19 = ((x77+(x78<=x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x83 = 3630U;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 0;

    t20 = ((x81+(x82<=x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x85 = 1722899010446234LLU;
	static uint16_t x86 = 30U;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = UINT32_MAX;
	int32_t t21 = -1;

    t21 = ((x85+(x86<=x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 15U;
	int8_t x90 = -1;
	int64_t x91 = -90474499014LL;
	static int8_t x92 = -1;
	volatile int32_t t22 = 85394404;

    t22 = ((x89+(x90<=x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MIN;
	int16_t x95 = INT16_MAX;
	int32_t x96 = -1;
	static int32_t t23 = 573;

    t23 = ((x93+(x94<=x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = 1198U;
	int8_t x100 = -1;
	int32_t t24 = 22664;

    t24 = ((x97+(x98<=x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x103 = 2064283U;
	int8_t x104 = 1;
	int32_t t25 = -13782;

    t25 = ((x101+(x102<=x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = -2194098LL;
	static int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 1018395U;
	int32_t t26 = -522259;

    t26 = ((x105+(x106<=x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 598346796875744LLU;
	int32_t x110 = -1;
	uint16_t x111 = 1U;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t27 = 93269269;

    t27 = ((x109+(x110<=x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x118 = 0;
	static volatile int32_t x119 = 7;
	uint32_t x120 = 10U;

    t28 = ((x117+(x118<=x119))!=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = INT16_MIN;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	static volatile int16_t x124 = 149;
	static volatile int32_t t29 = 1070737;

    t29 = ((x121+(x122<=x123))!=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x125 = UINT16_MAX;
	uint32_t x127 = 663046819U;
	volatile int32_t x128 = -1;
	int32_t t30 = 6;

    t30 = ((x125+(x126<=x127))!=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = -1LL;
	uint8_t x130 = UINT8_MAX;
	uint8_t x131 = 3U;
	volatile int32_t t31 = -899;

    t31 = ((x129+(x130<=x131))!=x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x134 = -51;
	int32_t x135 = -1;
	uint8_t x136 = 3U;
	static volatile int32_t t32 = 47;

    t32 = ((x133+(x134<=x135))!=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = 3U;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = -14523;
	int32_t x140 = INT32_MIN;

    t33 = ((x137+(x138<=x139))!=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x141 = -1;
	static volatile int32_t x142 = -936270;
	int16_t x144 = 660;
	int32_t t34 = -67;

    t34 = ((x141+(x142<=x143))!=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x146 = -1;
	volatile uint16_t x147 = UINT16_MAX;
	static uint8_t x148 = UINT8_MAX;

    t35 = ((x145+(x146<=x147))!=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x150 = 261U;
	int16_t x151 = -1;
	int16_t x152 = -34;
	volatile int32_t t36 = -132950;

    t36 = ((x149+(x150<=x151))!=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x154 = 66U;
	volatile int16_t x156 = 4;
	int32_t t37 = 208761244;

    t37 = ((x153+(x154<=x155))!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int64_t x160 = 24LL;
	volatile int32_t t38 = -1;

    t38 = ((x157+(x158<=x159))!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x161 = INT8_MIN;
	uint64_t x162 = 15993477067148897LLU;
	volatile int64_t x163 = -39LL;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t39 = 0;

    t39 = ((x161+(x162<=x163))!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = -470;
	int8_t x166 = 38;
	int32_t x167 = 9327172;
	int64_t x168 = -370743782208LL;
	int32_t t40 = 0;

    t40 = ((x165+(x166<=x167))!=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x171 = 4U;
	volatile uint32_t x172 = 7818464U;
	volatile int32_t t41 = -5;

    t41 = ((x169+(x170<=x171))!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x175 = 20939088;
	static volatile int32_t x176 = INT32_MIN;
	int32_t t42 = -25;

    t42 = ((x173+(x174<=x175))!=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	static uint64_t x178 = 188488882202934LLU;
	int16_t x179 = INT16_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	static volatile int32_t t43 = 1;

    t43 = ((x177+(x178<=x179))!=x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = -1;
	static int16_t x182 = -6;
	int8_t x183 = -1;
	static uint32_t x184 = 69589582U;
	int32_t t44 = 49;

    t44 = ((x181+(x182<=x183))!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x186 = INT8_MAX;
	volatile int64_t x187 = INT64_MIN;
	int32_t t45 = 14029797;

    t45 = ((x185+(x186<=x187))!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	int32_t t46 = -1;

    t46 = ((x189+(x190<=x191))!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x194 = UINT8_MAX;
	volatile int32_t x195 = INT32_MIN;
	int32_t t47 = 48;

    t47 = ((x193+(x194<=x195))!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = UINT16_MAX;
	volatile int32_t x198 = 6;
	volatile uint16_t x200 = 773U;

    t48 = ((x197+(x198<=x199))!=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = INT64_MAX;
	int8_t x203 = 1;

    t49 = ((x201+(x202<=x203))!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x206 = INT16_MIN;
	int32_t t50 = -32;

    t50 = ((x205+(x206<=x207))!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x210 = 73U;
	static int16_t x211 = 1;
	int32_t x212 = INT32_MAX;
	volatile int32_t t51 = -178;

    t51 = ((x209+(x210<=x211))!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x214 = -7654942324LL;
	int16_t x215 = INT16_MIN;
	int32_t x216 = -1;
	int32_t t52 = -1;

    t52 = ((x213+(x214<=x215))!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x217 = 3620LLU;
	int64_t x218 = INT64_MAX;
	uint8_t x219 = 1U;
	static int32_t x220 = -1;
	volatile int32_t t53 = -3;

    t53 = ((x217+(x218<=x219))!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x221 = INT8_MAX;
	volatile int8_t x222 = INT8_MAX;
	static int64_t x223 = INT64_MAX;
	volatile uint64_t x224 = 3LLU;
	int32_t t54 = -131;

    t54 = ((x221+(x222<=x223))!=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x225 = -1LL;
	int8_t x227 = 5;
	int64_t x228 = INT64_MIN;
	int32_t t55 = -768564037;

    t55 = ((x225+(x226<=x227))!=x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = -1;
	uint32_t x232 = 21U;
	int32_t t56 = 0;

    t56 = ((x229+(x230<=x231))!=x232);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = -1;
	int8_t x235 = INT8_MIN;
	int16_t x236 = 1617;
	static volatile int32_t t57 = 119;

    t57 = ((x233+(x234<=x235))!=x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x237 = 6;
	int64_t x238 = INT64_MAX;
	volatile int32_t t58 = 13880;

    t58 = ((x237+(x238<=x239))!=x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = -16878;
	static uint16_t x242 = UINT16_MAX;
	uint64_t x244 = 5LLU;
	int32_t t59 = 13;

    t59 = ((x241+(x242<=x243))!=x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x246 = 2908374613344LL;
	static uint64_t x247 = UINT64_MAX;
	static volatile int8_t x248 = -1;
	volatile int32_t t60 = 1122026;

    t60 = ((x245+(x246<=x247))!=x248);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -1;
	static int32_t x250 = -1;
	static int8_t x251 = 1;
	int64_t x252 = INT64_MIN;
	volatile int32_t t61 = 5594;

    t61 = ((x249+(x250<=x251))!=x252);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MAX;
	volatile int32_t x254 = 466283838;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t62 = -7782693;

    t62 = ((x253+(x254<=x255))!=x256);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x257 = -63;
	int16_t x259 = -1;
	static uint8_t x260 = 18U;
	volatile int32_t t63 = 23;

    t63 = ((x257+(x258<=x259))!=x260);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = INT32_MIN;
	static uint32_t x264 = 290U;

    t64 = ((x261+(x262<=x263))!=x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x266 = INT8_MIN;
	uint16_t x267 = 1793U;

    t65 = ((x265+(x266<=x267))!=x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x269 = UINT8_MAX;
	uint16_t x271 = 86U;
	int32_t x272 = INT32_MIN;

    t66 = ((x269+(x270<=x271))!=x272);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MIN;
	int64_t x274 = -1LL;
	static int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	static int32_t t67 = 4;

    t67 = ((x273+(x274<=x275))!=x276);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = 30;
	static int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	volatile int32_t t68 = 35;

    t68 = ((x277+(x278<=x279))!=x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = -697323LL;
	static volatile int32_t x287 = INT32_MIN;
	int8_t x288 = -1;
	int32_t t69 = 351872;

    t69 = ((x285+(x286<=x287))!=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	volatile int16_t x290 = -1;
	int64_t x292 = -1LL;
	int32_t t70 = -46449;

    t70 = ((x289+(x290<=x291))!=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = 522748LL;
	int64_t x294 = INT64_MAX;
	int16_t x295 = INT16_MIN;
	volatile int32_t t71 = 6966;

    t71 = ((x293+(x294<=x295))!=x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x297 = UINT16_MAX;
	volatile int16_t x298 = INT16_MIN;
	static int32_t x299 = INT32_MIN;

    t72 = ((x297+(x298<=x299))!=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x301 = UINT8_MAX;
	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 2U;
	int16_t x304 = 121;
	volatile int32_t t73 = -1;

    t73 = ((x301+(x302<=x303))!=x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = -14063379450LL;
	static int32_t x307 = INT32_MIN;
	int32_t t74 = 2166774;

    t74 = ((x305+(x306<=x307))!=x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x309 = UINT64_MAX;
	static int64_t x310 = INT64_MIN;
	int8_t x312 = -1;
	volatile int32_t t75 = 33786;

    t75 = ((x309+(x310<=x311))!=x312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x313 = INT16_MAX;
	int64_t x314 = -1LL;
	volatile int16_t x316 = 15919;
	volatile int32_t t76 = -1085;

    t76 = ((x313+(x314<=x315))!=x316);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MAX;
	volatile uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	uint8_t x320 = 7U;
	volatile int32_t t77 = -100979;

    t77 = ((x317+(x318<=x319))!=x320);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = INT64_MIN;
	static int8_t x324 = INT8_MIN;
	int32_t t78 = 12984;

    t78 = ((x321+(x322<=x323))!=x324);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x326 = 113313;
	static uint32_t x327 = 778U;
	int64_t x328 = INT64_MIN;
	volatile int32_t t79 = 770034391;

    t79 = ((x325+(x326<=x327))!=x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = 2519;
	int16_t x330 = -1208;
	static volatile int32_t x331 = -8256760;
	static int8_t x332 = 1;
	volatile int32_t t80 = -645;

    t80 = ((x329+(x330<=x331))!=x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = -1;
	static uint8_t x335 = 3U;
	int64_t x336 = 1LL;

    t81 = ((x333+(x334<=x335))!=x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x338 = INT16_MIN;
	uint16_t x339 = UINT16_MAX;
	volatile int64_t x340 = -1LL;

    t82 = ((x337+(x338<=x339))!=x340);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x342 = -1659;
	uint64_t x343 = 603209008LLU;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t83 = -481919055;

    t83 = ((x341+(x342<=x343))!=x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = 1;
	int8_t x347 = INT8_MIN;
	uint8_t x348 = 1U;
	int32_t t84 = 44;

    t84 = ((x345+(x346<=x347))!=x348);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	static uint8_t x352 = 30U;
	int32_t t85 = 129593492;

    t85 = ((x349+(x350<=x351))!=x352);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = -160027415LL;
	int64_t x354 = INT64_MAX;
	volatile int32_t x355 = 0;
	int64_t x356 = -1LL;
	int32_t t86 = -1395550;

    t86 = ((x353+(x354<=x355))!=x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	volatile int32_t t87 = -1;

    t87 = ((x357+(x358<=x359))!=x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x362 = INT32_MIN;
	volatile int8_t x364 = 37;
	int32_t t88 = -8078982;

    t88 = ((x361+(x362<=x363))!=x364);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = -1;
	int8_t x367 = -1;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t89 = -3;

    t89 = ((x365+(x366<=x367))!=x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x370 = -1LL;
	uint32_t x371 = 24212U;
	int32_t x372 = -17;
	volatile int32_t t90 = -55;

    t90 = ((x369+(x370<=x371))!=x372);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 3667U;
	int32_t t91 = -89405629;

    t91 = ((x373+(x374<=x375))!=x376);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = UINT16_MAX;
	volatile int64_t x378 = INT64_MIN;
	int32_t t92 = 5910409;

    t92 = ((x377+(x378<=x379))!=x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x381 = 118819902;
	int16_t x383 = -1;
	volatile int32_t t93 = -19;

    t93 = ((x381+(x382<=x383))!=x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x385 = -1LL;
	volatile int16_t x386 = INT16_MAX;
	uint8_t x387 = 67U;
	static int16_t x388 = -3361;
	volatile int32_t t94 = -488891349;

    t94 = ((x385+(x386<=x387))!=x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = INT64_MIN;
	static int64_t x391 = 466765011272117LL;
	volatile uint64_t x392 = 1462LLU;
	static volatile int32_t t95 = 810;

    t95 = ((x389+(x390<=x391))!=x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x394 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t96 = 7;

    t96 = ((x393+(x394<=x395))!=x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = -1;
	uint64_t x398 = 19LLU;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t97 = -552;

    t97 = ((x397+(x398<=x399))!=x400);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile uint8_t x402 = 0U;
	static volatile uint8_t x403 = 109U;
	uint64_t x404 = 1716245171693019LLU;
	volatile int32_t t98 = -9742141;

    t98 = ((x401+(x402<=x403))!=x404);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = UINT32_MAX;
	int16_t x410 = -7;
	int16_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	int32_t t99 = -9508522;

    t99 = ((x409+(x410<=x411))!=x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x413 = 0LLU;
	uint32_t x414 = 7468U;
	int8_t x415 = INT8_MIN;
	volatile uint8_t x416 = 0U;
	volatile int32_t t100 = 422601;

    t100 = ((x413+(x414<=x415))!=x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	volatile uint64_t x420 = 509LLU;
	int32_t t101 = -79220;

    t101 = ((x417+(x418<=x419))!=x420);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x421 = 121U;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = 15U;
	static int64_t x424 = -1LL;
	int32_t t102 = -8630;

    t102 = ((x421+(x422<=x423))!=x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x425 = 205192240531063383LLU;
	volatile int8_t x426 = INT8_MAX;
	uint64_t x427 = 7491113918195249LLU;
	int32_t x428 = INT32_MAX;

    t103 = ((x425+(x426<=x427))!=x428);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = -1;
	int16_t x430 = INT16_MIN;
	volatile int64_t x431 = -912221458690LL;
	int32_t x432 = -1;
	volatile int32_t t104 = 31;

    t104 = ((x429+(x430<=x431))!=x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x434 = -1LL;
	static int64_t x435 = INT64_MAX;
	int16_t x436 = 16229;
	int32_t t105 = 440334447;

    t105 = ((x433+(x434<=x435))!=x436);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x437 = INT64_MIN;
	int8_t x440 = INT8_MIN;
	static int32_t t106 = -1;

    t106 = ((x437+(x438<=x439))!=x440);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	static uint16_t x443 = 162U;
	int32_t x444 = 735426;
	volatile int32_t t107 = -16479928;

    t107 = ((x441+(x442<=x443))!=x444);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x445 = -1;
	static volatile int32_t x446 = -112;
	int32_t x447 = INT32_MIN;
	volatile int64_t x448 = INT64_MIN;
	volatile int32_t t108 = 370394;

    t108 = ((x445+(x446<=x447))!=x448);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x451 = -238;
	volatile int32_t x452 = 6861;
	int32_t t109 = -98;

    t109 = ((x449+(x450<=x451))!=x452);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x453 = -1;
	volatile int64_t x454 = INT64_MAX;
	uint64_t x456 = 7355722LLU;
	volatile int32_t t110 = -73810;

    t110 = ((x453+(x454<=x455))!=x456);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = 17899024008748LL;
	static int32_t x463 = -1;
	int32_t x464 = -1;
	static volatile int32_t t111 = -7;

    t111 = ((x461+(x462<=x463))!=x464);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x465 = INT32_MAX;
	volatile int8_t x467 = 0;
	int32_t x468 = INT32_MAX;

    t112 = ((x465+(x466<=x467))!=x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x469 = INT64_MIN;
	int32_t x470 = INT32_MIN;
	int32_t x471 = INT32_MIN;
	static int16_t x472 = 11;
	static volatile int32_t t113 = -60729;

    t113 = ((x469+(x470<=x471))!=x472);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x474 = -1LL;
	uint64_t x475 = 14LLU;
	static int64_t x476 = -76627620LL;

    t114 = ((x473+(x474<=x475))!=x476);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x482 = INT8_MIN;
	uint32_t x483 = UINT32_MAX;
	static uint8_t x484 = 25U;
	int32_t t115 = 416;

    t115 = ((x481+(x482<=x483))!=x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x485 = INT64_MIN;
	volatile int64_t x486 = -1LL;
	static int8_t x487 = INT8_MIN;
	static volatile int64_t x488 = INT64_MIN;

    t116 = ((x485+(x486<=x487))!=x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = 0;
	int16_t x490 = INT16_MAX;
	static int32_t x491 = -1;
	volatile int8_t x492 = 25;
	volatile int32_t t117 = 29;

    t117 = ((x489+(x490<=x491))!=x492);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = INT64_MIN;
	int32_t x495 = INT32_MAX;
	int32_t t118 = -2612;

    t118 = ((x493+(x494<=x495))!=x496);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile int64_t x498 = INT64_MIN;
	volatile uint64_t x499 = 115159150LLU;
	uint32_t x500 = 1U;

    t119 = ((x497+(x498<=x499))!=x500);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x501 = 16U;
	uint32_t x502 = 141358U;
	int8_t x503 = INT8_MAX;
	uint32_t x504 = 2063413U;
	volatile int32_t t120 = 24084517;

    t120 = ((x501+(x502<=x503))!=x504);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x507 = 0;
	volatile int32_t x508 = INT32_MIN;
	int32_t t121 = 30996162;

    t121 = ((x505+(x506<=x507))!=x508);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = -2;
	int32_t x510 = -1;
	int8_t x511 = -1;

    t122 = ((x509+(x510<=x511))!=x512);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x513 = 1193U;
	int64_t x514 = 12748049552673682LL;
	uint32_t x515 = 3U;
	volatile int32_t t123 = 237897964;

    t123 = ((x513+(x514<=x515))!=x516);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x517 = 5;
	int32_t x518 = INT32_MIN;
	uint64_t x519 = UINT64_MAX;
	volatile int32_t t124 = 3559;

    t124 = ((x517+(x518<=x519))!=x520);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x522 = INT8_MIN;
	int8_t x523 = 1;
	int32_t x524 = -57628619;
	static volatile int32_t t125 = -329;

    t125 = ((x521+(x522<=x523))!=x524);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x525 = 2786337057131801LLU;
	int64_t x526 = -1LL;
	uint64_t x527 = UINT64_MAX;
	volatile int8_t x528 = -33;

    t126 = ((x525+(x526<=x527))!=x528);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x529 = -1;
	uint32_t x530 = 85913U;
	int16_t x531 = INT16_MIN;
	static int16_t x532 = INT16_MIN;
	int32_t t127 = -1;

    t127 = ((x529+(x530<=x531))!=x532);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x534 = -1;
	volatile int64_t x535 = 6186703296LL;
	int64_t x536 = INT64_MAX;
	int32_t t128 = 11070014;

    t128 = ((x533+(x534<=x535))!=x536);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x537 = UINT32_MAX;
	int32_t x538 = INT32_MIN;
	static int64_t x540 = 1231LL;

    t129 = ((x537+(x538<=x539))!=x540);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x541 = 6U;
	int8_t x542 = INT8_MIN;
	int16_t x543 = 61;
	uint32_t x544 = 867395U;

    t130 = ((x541+(x542<=x543))!=x544);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = -4;
	int16_t x547 = -3203;
	static volatile int32_t x548 = -1;

    t131 = ((x545+(x546<=x547))!=x548);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x551 = UINT8_MAX;
	volatile int8_t x552 = 3;

    t132 = ((x549+(x550<=x551))!=x552);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = UINT32_MAX;
	static int16_t x554 = INT16_MAX;
	uint32_t x555 = 61737U;
	int16_t x556 = -16276;

    t133 = ((x553+(x554<=x555))!=x556);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x557 = 24U;
	int32_t x558 = INT32_MIN;
	uint64_t x559 = 83491381120748737LLU;
	static int32_t x560 = INT32_MIN;
	volatile int32_t t134 = -1;

    t134 = ((x557+(x558<=x559))!=x560);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = INT16_MAX;
	volatile uint64_t x562 = 11070576LLU;
	uint32_t x563 = 39941U;
	uint8_t x564 = 0U;
	volatile int32_t t135 = 109;

    t135 = ((x561+(x562<=x563))!=x564);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x566 = 207;
	uint32_t x568 = 0U;
	static int32_t t136 = -25841;

    t136 = ((x565+(x566<=x567))!=x568);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x569 = 0U;
	uint8_t x570 = 28U;
	int32_t x571 = 817957232;
	int8_t x572 = INT8_MAX;
	int32_t t137 = -53;

    t137 = ((x569+(x570<=x571))!=x572);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x574 = 0U;
	int64_t x575 = INT64_MIN;
	uint64_t x576 = 14565684LLU;

    t138 = ((x573+(x574<=x575))!=x576);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x577 = INT64_MIN;
	uint32_t x578 = 674189U;
	volatile uint8_t x579 = UINT8_MAX;
	int32_t x580 = INT32_MIN;
	static int32_t t139 = -45;

    t139 = ((x577+(x578<=x579))!=x580);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x582 = 1;
	static uint16_t x583 = 22U;
	int32_t t140 = 1087;

    t140 = ((x581+(x582<=x583))!=x584);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x586 = INT8_MIN;
	volatile int64_t x587 = -527320378710736199LL;
	int32_t x588 = -1;
	int32_t t141 = -4034056;

    t141 = ((x585+(x586<=x587))!=x588);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = -1;
	uint8_t x591 = UINT8_MAX;
	static uint32_t x592 = 242935654U;

    t142 = ((x589+(x590<=x591))!=x592);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x593 = -1;
	int64_t x594 = -66LL;
	uint16_t x595 = 48U;
	int32_t x596 = INT32_MIN;
	volatile int32_t t143 = 37511;

    t143 = ((x593+(x594<=x595))!=x596);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = INT8_MIN;
	volatile int16_t x598 = INT16_MAX;
	int16_t x599 = INT16_MAX;
	int32_t x600 = INT32_MIN;
	int32_t t144 = 642;

    t144 = ((x597+(x598<=x599))!=x600);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = -735131492100LL;
	static int16_t x602 = -1;
	int64_t x603 = 246118654773695029LL;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t145 = -1925759;

    t145 = ((x601+(x602<=x603))!=x604);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x605 = 9736257LL;
	static int8_t x606 = INT8_MIN;
	uint32_t x608 = 41727488U;
	volatile int32_t t146 = -11623981;

    t146 = ((x605+(x606<=x607))!=x608);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x610 = UINT8_MAX;
	int32_t x611 = INT32_MAX;
	int32_t t147 = -121;

    t147 = ((x609+(x610<=x611))!=x612);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = 5273U;
	int8_t x614 = -1;
	int16_t x615 = INT16_MAX;
	int64_t x616 = -1LL;
	volatile int32_t t148 = 966;

    t148 = ((x613+(x614<=x615))!=x616);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x618 = INT16_MIN;
	int32_t x619 = INT32_MAX;
	volatile uint64_t x620 = 3574971030680615LLU;

    t149 = ((x617+(x618<=x619))!=x620);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x621 = 1U;
	int8_t x622 = INT8_MAX;
	static int16_t x624 = 11;

    t150 = ((x621+(x622<=x623))!=x624);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x625 = -3;
	static uint64_t x626 = UINT64_MAX;
	volatile int64_t x628 = INT64_MAX;
	volatile int32_t t151 = 15;

    t151 = ((x625+(x626<=x627))!=x628);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x630 = INT8_MAX;
	static int16_t x631 = -1;
	int64_t x632 = INT64_MAX;
	static volatile int32_t t152 = 3707;

    t152 = ((x629+(x630<=x631))!=x632);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = -672821361852570034LL;
	uint16_t x634 = 200U;
	volatile int16_t x635 = INT16_MIN;
	int16_t x636 = -1;

    t153 = ((x633+(x634<=x635))!=x636);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = -1;
	static int64_t x638 = -260543356852LL;
	int16_t x639 = INT16_MIN;
	int32_t x640 = INT32_MAX;
	int32_t t154 = -116921133;

    t154 = ((x637+(x638<=x639))!=x640);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = INT32_MAX;
	int8_t x642 = 2;
	int32_t x644 = -1;
	static int32_t t155 = 6;

    t155 = ((x641+(x642<=x643))!=x644);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x645 = 15U;
	uint64_t x646 = 12764583059070LLU;
	int16_t x648 = -1;
	int32_t t156 = -113;

    t156 = ((x645+(x646<=x647))!=x648);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x649 = 7953U;
	volatile int64_t x650 = -1LL;
	uint8_t x651 = 4U;
	int64_t x652 = -210597LL;

    t157 = ((x649+(x650<=x651))!=x652);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x655 = -1;

    t158 = ((x653+(x654<=x655))!=x656);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x657 = UINT8_MAX;
	uint64_t x658 = 5885169LLU;
	int8_t x659 = INT8_MIN;
	static uint8_t x660 = 15U;
	volatile int32_t t159 = -143171395;

    t159 = ((x657+(x658<=x659))!=x660);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = INT16_MIN;
	int64_t x663 = INT64_MIN;
	int32_t t160 = 81738;

    t160 = ((x661+(x662<=x663))!=x664);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x665 = INT16_MAX;
	int32_t x666 = -10;
	static volatile int8_t x667 = INT8_MIN;
	static int64_t x668 = -1LL;
	static int32_t t161 = -85893;

    t161 = ((x665+(x666<=x667))!=x668);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x670 = UINT16_MAX;
	uint16_t x671 = 8351U;
	static int16_t x672 = -1;
	volatile int32_t t162 = 0;

    t162 = ((x669+(x670<=x671))!=x672);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x673 = INT8_MIN;
	static int32_t x674 = -1;
	int16_t x675 = INT16_MIN;
	uint8_t x676 = 16U;

    t163 = ((x673+(x674<=x675))!=x676);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x677 = UINT64_MAX;
	uint32_t x678 = UINT32_MAX;
	int32_t x679 = INT32_MIN;
	volatile int16_t x680 = 13444;
	volatile int32_t t164 = 8158;

    t164 = ((x677+(x678<=x679))!=x680);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x681 = -1;
	uint32_t x682 = UINT32_MAX;
	volatile uint32_t x683 = UINT32_MAX;
	int32_t x684 = INT32_MIN;
	volatile int32_t t165 = 36291;

    t165 = ((x681+(x682<=x683))!=x684);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x685 = 12U;
	int64_t x687 = INT64_MAX;
	uint8_t x688 = 6U;
	static int32_t t166 = 39039;

    t166 = ((x685+(x686<=x687))!=x688);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x689 = UINT32_MAX;
	int64_t x690 = -1LL;
	uint32_t x692 = 1259941U;
	volatile int32_t t167 = 85637;

    t167 = ((x689+(x690<=x691))!=x692);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x693 = INT16_MAX;
	int64_t x694 = -1LL;
	volatile int64_t x695 = -1LL;
	int8_t x696 = -1;

    t168 = ((x693+(x694<=x695))!=x696);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x697 = INT8_MIN;
	volatile uint8_t x699 = 1U;
	int32_t t169 = 1;

    t169 = ((x697+(x698<=x699))!=x700);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x702 = -1LL;
	volatile int64_t x703 = INT64_MIN;
	volatile int32_t t170 = -51687050;

    t170 = ((x701+(x702<=x703))!=x704);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -6;
	static volatile int64_t x708 = 13566461170590LL;

    t171 = ((x705+(x706<=x707))!=x708);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = 7;
	uint8_t x711 = UINT8_MAX;
	static int8_t x712 = -8;

    t172 = ((x709+(x710<=x711))!=x712);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = -1;
	int32_t x715 = 7536981;
	uint16_t x716 = 7572U;
	int32_t t173 = -205;

    t173 = ((x713+(x714<=x715))!=x716);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = -1;
	volatile int8_t x718 = 20;
	uint8_t x719 = 3U;
	volatile int32_t t174 = -3289545;

    t174 = ((x717+(x718<=x719))!=x720);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x722 = 225U;
	static volatile int8_t x723 = 25;
	uint64_t x724 = UINT64_MAX;
	volatile int32_t t175 = -80977;

    t175 = ((x721+(x722<=x723))!=x724);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = 2U;
	static int32_t t176 = -26085212;

    t176 = ((x725+(x726<=x727))!=x728);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = UINT64_MAX;
	int32_t x730 = 3985410;
	int32_t x731 = INT32_MAX;
	int8_t x732 = INT8_MIN;
	static int32_t t177 = 334567;

    t177 = ((x729+(x730<=x731))!=x732);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x733 = 257793;
	int16_t x734 = -11;
	int32_t x735 = 910;
	int64_t x736 = INT64_MIN;

    t178 = ((x733+(x734<=x735))!=x736);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x737 = INT16_MIN;
	uint8_t x738 = 18U;
	int32_t x739 = INT32_MIN;
	int64_t x740 = INT64_MIN;

    t179 = ((x737+(x738<=x739))!=x740);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x743 = -1LL;
	static volatile uint16_t x744 = UINT16_MAX;
	static int32_t t180 = 69172;

    t180 = ((x741+(x742<=x743))!=x744);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = -10;
	volatile int16_t x746 = INT16_MIN;
	volatile uint8_t x747 = UINT8_MAX;
	static uint8_t x748 = UINT8_MAX;
	static volatile int32_t t181 = 8;

    t181 = ((x745+(x746<=x747))!=x748);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x749 = 23860448;
	uint8_t x750 = 57U;
	int16_t x751 = 10;
	static uint64_t x752 = 490663962537772LLU;
	volatile int32_t t182 = -202868;

    t182 = ((x749+(x750<=x751))!=x752);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x753 = UINT32_MAX;
	int64_t x754 = -1LL;
	int64_t x755 = 464519602LL;
	volatile int32_t t183 = -7619684;

    t183 = ((x753+(x754<=x755))!=x756);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x757 = 1U;
	int8_t x759 = INT8_MAX;
	volatile uint8_t x760 = UINT8_MAX;
	int32_t t184 = -3;

    t184 = ((x757+(x758<=x759))!=x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x761 = 4;
	uint32_t x762 = UINT32_MAX;
	volatile int32_t x763 = INT32_MIN;
	int16_t x764 = -1;
	int32_t t185 = 5925564;

    t185 = ((x761+(x762<=x763))!=x764);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x765 = 29LLU;
	uint8_t x766 = 14U;
	int8_t x767 = 10;
	int8_t x768 = INT8_MAX;
	volatile int32_t t186 = -6350;

    t186 = ((x765+(x766<=x767))!=x768);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x769 = INT8_MIN;
	static int8_t x770 = 1;
	volatile int64_t x771 = -1LL;
	int32_t x772 = INT32_MIN;
	volatile int32_t t187 = -3;

    t187 = ((x769+(x770<=x771))!=x772);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x774 = INT16_MAX;
	volatile uint16_t x775 = 27U;
	volatile int8_t x776 = -1;
	int32_t t188 = 15;

    t188 = ((x773+(x774<=x775))!=x776);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x777 = INT64_MAX;
	int32_t x779 = -1;
	int32_t x780 = -407018;

    t189 = ((x777+(x778<=x779))!=x780);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x781 = -1;
	volatile int8_t x783 = -1;
	uint8_t x784 = 13U;
	int32_t t190 = -758;

    t190 = ((x781+(x782<=x783))!=x784);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x789 = INT32_MIN;
	volatile int64_t x790 = INT64_MIN;
	int16_t x791 = INT16_MIN;
	int16_t x792 = INT16_MIN;
	static int32_t t191 = -1;

    t191 = ((x789+(x790<=x791))!=x792);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x793 = 3296282019746LLU;
	int8_t x794 = -1;
	int16_t x795 = INT16_MIN;
	volatile uint8_t x796 = 78U;

    t192 = ((x793+(x794<=x795))!=x796);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x797 = 0U;
	volatile int8_t x798 = -1;
	volatile uint16_t x799 = 8737U;
	static int32_t x800 = INT32_MIN;
	int32_t t193 = 75548;

    t193 = ((x797+(x798<=x799))!=x800);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x805 = 28178631LL;
	static int16_t x806 = 0;
	int16_t x807 = INT16_MAX;
	int32_t t194 = 2180;

    t194 = ((x805+(x806<=x807))!=x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = INT32_MIN;
	int8_t x811 = 61;
	int64_t x812 = INT64_MAX;
	int32_t t195 = -2;

    t195 = ((x809+(x810<=x811))!=x812);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = -1;
	uint32_t x814 = 123709U;
	uint16_t x815 = 238U;
	uint32_t x816 = 772U;
	volatile int32_t t196 = 7184;

    t196 = ((x813+(x814<=x815))!=x816);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x817 = INT64_MIN;
	static uint32_t x818 = 464380U;
	static int64_t x820 = INT64_MIN;
	int32_t t197 = -6908;

    t197 = ((x817+(x818<=x819))!=x820);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile int64_t x822 = 1LL;
	uint32_t x824 = UINT32_MAX;

    t198 = ((x821+(x822<=x823))!=x824);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x825 = UINT64_MAX;
	int8_t x827 = INT8_MIN;
	int32_t x828 = -22;

    t199 = ((x825+(x826<=x827))!=x828);

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

