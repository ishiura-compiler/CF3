
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

int32_t x2 = -1;
volatile int32_t t2 = 85;
int32_t x17 = INT32_MIN;
int32_t x20 = 427;
int64_t x22 = -210022270LL;
uint16_t x27 = UINT16_MAX;
static volatile int32_t t5 = 739;
int32_t x42 = INT32_MAX;
volatile int16_t x60 = INT16_MIN;
volatile int32_t t9 = -937516455;
uint8_t x65 = 80U;
volatile int64_t x67 = -1LL;
int16_t x71 = -10766;
volatile int32_t t13 = 3;
int8_t x84 = -1;
volatile int16_t x88 = 0;
int32_t x90 = 417082;
volatile int32_t x99 = -1;
int8_t x118 = 1;
int8_t x120 = 1;
volatile int32_t t22 = 40485421;
uint32_t x139 = UINT32_MAX;
volatile int32_t t28 = -1150;
int32_t x173 = INT32_MAX;
int64_t x181 = INT64_MIN;
uint8_t x182 = 0U;
int8_t x187 = INT8_MAX;
uint64_t x189 = 859639LLU;
volatile int32_t t32 = 872795599;
static volatile uint64_t x193 = 14176513410549LLU;
static int32_t t33 = -101;
int32_t x200 = -1;
int64_t x232 = -2507636LL;
volatile int64_t x237 = 17677680878428424LL;
volatile int32_t t42 = 7836327;
int8_t x246 = INT8_MAX;
static uint64_t x248 = UINT64_MAX;
int8_t x253 = -1;
uint64_t x255 = 61359LLU;
int16_t x258 = INT16_MIN;
uint16_t x264 = 344U;
static int32_t t46 = 10;
int8_t x272 = INT8_MIN;
int32_t t47 = -169056;
uint32_t x273 = 0U;
int16_t x277 = INT16_MIN;
volatile int32_t x278 = INT32_MIN;
volatile int32_t t50 = -5070;
int16_t x285 = INT16_MAX;
volatile int32_t x290 = INT32_MIN;
int8_t x291 = INT8_MAX;
volatile int32_t t52 = 661;
uint8_t x295 = 14U;
volatile int32_t x296 = -637458;
int8_t x300 = INT8_MAX;
volatile int8_t x336 = INT8_MIN;
int64_t x337 = -1LL;
static uint16_t x340 = UINT16_MAX;
int32_t x341 = INT32_MAX;
int16_t x343 = -1;
static uint8_t x345 = 51U;
static uint32_t x348 = 27038081U;
int32_t t60 = 47871;
volatile int32_t t61 = -1;
int32_t x354 = 577;
volatile uint64_t x357 = 81436LLU;
uint32_t x370 = 185332528U;
int64_t x382 = 146877LL;
static int8_t x385 = INT8_MIN;
int16_t x386 = -1;
int16_t x395 = INT16_MIN;
volatile int32_t t70 = -8798828;
int8_t x412 = -1;
uint16_t x414 = 20U;
int64_t x421 = INT64_MIN;
static int16_t x422 = 1;
int32_t x428 = INT32_MIN;
volatile int32_t t75 = -272382;
int16_t x431 = -1;
int16_t x438 = INT16_MIN;
static int16_t x442 = INT16_MIN;
volatile int32_t t78 = -177969127;
int64_t x455 = INT64_MIN;
volatile int32_t t81 = -8483;
int8_t x462 = INT8_MIN;
int64_t x464 = -205LL;
int32_t t83 = -438353;
volatile int16_t x474 = -1;
uint32_t x478 = UINT32_MAX;
int32_t x479 = -1;
volatile int32_t t85 = 1281936;
static int8_t x501 = INT8_MIN;
int32_t t88 = -1;
int64_t x514 = -1LL;
volatile uint8_t x518 = 123U;
int32_t t92 = 51;
int16_t x542 = -1;
int32_t t95 = 26275;
uint64_t x557 = 6LLU;
static int32_t t99 = 7288836;
int64_t x577 = INT64_MAX;
uint8_t x583 = UINT8_MAX;
uint32_t x593 = 32U;
volatile int32_t x609 = -1;
volatile int64_t x612 = -1LL;
volatile int64_t x616 = 2LL;
static int64_t x618 = -1LL;
int64_t x619 = -1LL;
static volatile int16_t x621 = -1;
int64_t x623 = 1646803LL;
uint16_t x626 = 2977U;
static volatile int16_t x631 = INT16_MIN;
uint64_t x637 = 157388136424244LLU;
int16_t x645 = 18;
static int32_t t115 = -2771;
int64_t x653 = -1LL;
int32_t x654 = -929;
static int32_t t117 = 0;
uint64_t x667 = UINT64_MAX;
int32_t t118 = 3655235;
int64_t x677 = -416169LL;
static uint64_t x679 = 72263980872692LLU;
int8_t x684 = -1;
volatile int8_t x695 = -1;
int64_t x707 = 2906617241LL;
volatile int32_t t126 = -1;
int8_t x716 = -1;
uint16_t x718 = 19U;
volatile int64_t x719 = -1LL;
uint32_t x721 = 15702U;
static int32_t x730 = -1;
int16_t x731 = INT16_MIN;
volatile uint16_t x753 = 3U;
volatile int16_t x759 = -14;
int32_t t134 = -254803;
int8_t x778 = INT8_MAX;
int8_t x779 = 10;
static int32_t t136 = 11396170;
static uint16_t x783 = UINT16_MAX;
static uint64_t x785 = 663662615848748LLU;
int16_t x786 = INT16_MIN;
int16_t x793 = INT16_MIN;
static volatile uint16_t x794 = 2U;
static int64_t x795 = -1LL;
int64_t x802 = INT64_MIN;
static volatile int16_t x803 = INT16_MIN;
static int16_t x807 = INT16_MIN;
static uint32_t x808 = 3186768U;
static uint8_t x822 = 86U;
volatile int8_t x824 = INT8_MIN;
static volatile int32_t t145 = 35830739;
static int64_t x825 = INT64_MIN;
uint8_t x857 = UINT8_MAX;
uint32_t x863 = 3636066U;
uint32_t x871 = 288278U;
int32_t x872 = 0;
int32_t t154 = 1934903;
static int32_t x882 = INT32_MIN;
int32_t t158 = 0;
static int16_t x902 = INT16_MIN;
int8_t x917 = -1;
volatile int32_t t163 = -3126224;
int32_t t164 = -18;
int32_t x937 = INT32_MIN;
uint8_t x938 = UINT8_MAX;
volatile int8_t x940 = 0;
int64_t x945 = 860766464600446580LL;
uint32_t x953 = 19835925U;
int16_t x956 = INT16_MIN;
int8_t x958 = 2;
static uint16_t x959 = UINT16_MAX;
int16_t x967 = INT16_MIN;
volatile int64_t x980 = -1LL;
volatile int8_t x986 = -1;
volatile uint32_t x992 = 1761U;
int8_t x999 = INT8_MIN;
int32_t x1008 = INT32_MIN;
static volatile int32_t t178 = 152665487;
uint16_t x1013 = 1U;
int16_t x1014 = INT16_MIN;
uint8_t x1015 = 17U;
int8_t x1026 = -2;
int8_t x1031 = 2;
volatile uint16_t x1048 = 3U;
int32_t x1052 = INT32_MIN;
volatile int32_t x1060 = -1;
int8_t x1061 = -5;
uint64_t x1062 = 1261781437204LLU;
int32_t x1063 = -1;
int32_t x1064 = 9;
volatile int32_t t187 = -91;
int16_t x1066 = INT16_MIN;
volatile int64_t x1077 = -1LL;
uint32_t x1079 = UINT32_MAX;
static int8_t x1086 = -1;
static int8_t x1096 = 14;
int32_t t194 = 1876;
uint32_t x1112 = 58U;
uint16_t x1114 = 28U;
uint32_t x1132 = UINT32_MAX;


void f0(void) {
    	static volatile int64_t x1 = INT64_MAX;
	uint64_t x3 = 131429203LLU;
	volatile int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -216;

    t0 = (x1<=(x2*(x3-x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = -872;

    t1 = (x5<=(x6*(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 361;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = 125U;
	uint16_t x12 = UINT16_MAX;

    t2 = (x9<=(x10*(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x18 = 2992795LLU;
	int16_t x19 = INT16_MIN;
	int32_t t3 = 102903;

    t3 = (x17<=(x18*(x19-x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x21 = INT8_MIN;
	uint64_t x23 = 29LLU;
	int64_t x24 = INT64_MIN;
	int32_t t4 = 14595676;

    t4 = (x21<=(x22*(x23-x24)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	volatile int64_t x28 = -1LL;

    t5 = (x25<=(x26*(x27-x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x37 = 3U;
	volatile int32_t x38 = INT32_MIN;
	int64_t x39 = -1LL;
	volatile int32_t x40 = -98315558;
	static volatile int32_t t6 = -49;

    t6 = (x37<=(x38*(x39-x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x41 = UINT32_MAX;
	int16_t x43 = -3;
	uint32_t x44 = 768765U;
	static int32_t t7 = 8;

    t7 = (x41<=(x42*(x43-x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x53 = -1LL;
	static uint64_t x54 = 590040382LLU;
	int64_t x55 = -53790181559654LL;
	volatile uint64_t x56 = 8384156950426LLU;
	volatile int32_t t8 = 10;

    t8 = (x53<=(x54*(x55-x56)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x57 = INT64_MIN;
	static int64_t x58 = -1LL;
	volatile int8_t x59 = INT8_MIN;

    t9 = (x57<=(x58*(x59-x60)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MIN;
	int64_t x63 = -1LL;
	static uint64_t x64 = 0LLU;
	static volatile int32_t t10 = -1;

    t10 = (x61<=(x62*(x63-x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x66 = -1;
	int32_t x68 = 125939421;
	volatile int32_t t11 = -2100;

    t11 = (x65<=(x66*(x67-x68)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x70 = 0LL;
	uint8_t x72 = 0U;
	volatile int32_t t12 = -161703730;

    t12 = (x69<=(x70*(x71-x72)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x77 = INT32_MAX;
	volatile int32_t x78 = -1;
	int16_t x79 = -1;
	uint32_t x80 = UINT32_MAX;

    t13 = (x77<=(x78*(x79-x80)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x81 = 71477198515LLU;
	int64_t x82 = -2222LL;
	uint64_t x83 = 168651460242LLU;
	int32_t t14 = -77574;

    t14 = (x81<=(x82*(x83-x84)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	static volatile int16_t x86 = 15111;
	static int8_t x87 = INT8_MIN;
	int32_t t15 = 50244678;

    t15 = (x85<=(x86*(x87-x88)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x89 = -1;
	static uint32_t x91 = UINT32_MAX;
	static uint32_t x92 = UINT32_MAX;
	volatile int32_t t16 = 3542643;

    t16 = (x89<=(x90*(x91-x92)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x97 = 0;
	int32_t x98 = INT32_MIN;
	int16_t x100 = -1;
	volatile int32_t t17 = -8157006;

    t17 = (x97<=(x98*(x99-x100)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x101 = UINT32_MAX;
	static uint16_t x102 = 11426U;
	volatile int8_t x103 = -1;
	uint8_t x104 = 10U;
	int32_t t18 = 403722;

    t18 = (x101<=(x102*(x103-x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x105 = INT64_MIN;
	int8_t x106 = 0;
	uint64_t x107 = 46328997112LLU;
	volatile int8_t x108 = INT8_MAX;
	int32_t t19 = 727318854;

    t19 = (x105<=(x106*(x107-x108)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x109 = UINT16_MAX;
	volatile uint64_t x110 = 47497351LLU;
	int32_t x111 = -236600670;
	uint32_t x112 = UINT32_MAX;
	int32_t t20 = 530999;

    t20 = (x109<=(x110*(x111-x112)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x117 = 91U;
	static int16_t x119 = INT16_MAX;
	volatile int32_t t21 = -82;

    t21 = (x117<=(x118*(x119-x120)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x133 = 13U;
	uint64_t x134 = 31293005065LLU;
	uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MIN;

    t22 = (x133<=(x134*(x135-x136)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x137 = 434835461830LL;
	static volatile int8_t x138 = -12;
	volatile int32_t x140 = -766598469;
	int32_t t23 = -254986;

    t23 = (x137<=(x138*(x139-x140)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x145 = 1047889202640801LLU;
	int32_t x146 = -4890089;
	uint8_t x147 = 2U;
	int64_t x148 = -82LL;
	static int32_t t24 = -1950545;

    t24 = (x145<=(x146*(x147-x148)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x157 = 1956803LLU;
	uint32_t x158 = 7U;
	uint32_t x159 = 3245919U;
	static int32_t x160 = INT32_MIN;
	int32_t t25 = 31109432;

    t25 = (x157<=(x158*(x159-x160)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x161 = 984493LLU;
	volatile uint32_t x162 = 1U;
	int64_t x163 = 1773591LL;
	int32_t x164 = INT32_MIN;
	int32_t t26 = -610285965;

    t26 = (x161<=(x162*(x163-x164)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x165 = INT8_MAX;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -508222;
	static volatile int32_t t27 = -8333;

    t27 = (x165<=(x166*(x167-x168)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	uint16_t x172 = 1U;

    t28 = (x169<=(x170*(x171-x172)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x174 = INT64_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	int16_t x176 = -10;
	volatile int32_t t29 = 3;

    t29 = (x173<=(x174*(x175-x176)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x183 = INT64_MIN;
	int64_t x184 = -1LL;
	int32_t t30 = 242;

    t30 = (x181<=(x182*(x183-x184)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x185 = UINT32_MAX;
	int8_t x186 = 0;
	uint8_t x188 = 9U;
	volatile int32_t t31 = 1;

    t31 = (x185<=(x186*(x187-x188)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x190 = 1296LLU;
	volatile int32_t x191 = -661;
	static int16_t x192 = 21;

    t32 = (x189<=(x190*(x191-x192)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x194 = 15U;
	static int16_t x195 = INT16_MIN;
	volatile int8_t x196 = INT8_MIN;

    t33 = (x193<=(x194*(x195-x196)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x197 = 225983785LLU;
	uint8_t x198 = UINT8_MAX;
	static uint8_t x199 = 1U;
	volatile int32_t t34 = -51;

    t34 = (x197<=(x198*(x199-x200)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x205 = INT8_MIN;
	volatile uint64_t x206 = UINT64_MAX;
	static uint32_t x207 = UINT32_MAX;
	int16_t x208 = 7701;
	static volatile int32_t t35 = 1461370;

    t35 = (x205<=(x206*(x207-x208)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x217 = INT8_MAX;
	uint32_t x218 = 1788427370U;
	int32_t x219 = -3603;
	volatile int32_t x220 = 1264;
	int32_t t36 = 2037;

    t36 = (x217<=(x218*(x219-x220)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x221 = INT16_MIN;
	static uint32_t x222 = 942U;
	volatile int32_t x223 = INT32_MAX;
	uint64_t x224 = 79LLU;
	volatile int32_t t37 = 922816301;

    t37 = (x221<=(x222*(x223-x224)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x225 = -1LL;
	int8_t x226 = INT8_MAX;
	int16_t x227 = -1;
	static int16_t x228 = INT16_MIN;
	int32_t t38 = 13;

    t38 = (x225<=(x226*(x227-x228)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x229 = -1;
	int64_t x230 = 531535618LL;
	static uint8_t x231 = 14U;
	int32_t t39 = -989204573;

    t39 = (x229<=(x230*(x231-x232)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x233 = UINT16_MAX;
	int32_t x234 = -13858659;
	uint64_t x235 = 2004LLU;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t40 = 48;

    t40 = (x233<=(x234*(x235-x236)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x238 = 8U;
	static int8_t x239 = INT8_MIN;
	uint16_t x240 = 0U;
	int32_t t41 = -1;

    t41 = (x237<=(x238*(x239-x240)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -1;
	int8_t x244 = INT8_MIN;

    t42 = (x241<=(x242*(x243-x244)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x245 = -1;
	int8_t x247 = 2;
	int32_t t43 = -9467;

    t43 = (x245<=(x246*(x247-x248)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	int32_t t44 = 54269;

    t44 = (x253<=(x254*(x255-x256)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x259 = 12U;
	int16_t x260 = INT16_MAX;
	int32_t t45 = -100812;

    t45 = (x257<=(x258*(x259-x260)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x261 = 3691;
	int8_t x262 = INT8_MAX;
	int32_t x263 = 56;

    t46 = (x261<=(x262*(x263-x264)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x269 = INT32_MIN;
	static int16_t x270 = INT16_MIN;
	volatile int16_t x271 = 207;

    t47 = (x269<=(x270*(x271-x272)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x274 = INT16_MAX;
	uint16_t x275 = 86U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t48 = 578641;

    t48 = (x273<=(x274*(x275-x276)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x279 = 29636283U;
	int32_t x280 = -1;
	int32_t t49 = 1;

    t49 = (x277<=(x278*(x279-x280)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x281 = -898;
	volatile uint32_t x282 = UINT32_MAX;
	volatile int8_t x283 = -1;
	int32_t x284 = -1342;

    t50 = (x281<=(x282*(x283-x284)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x286 = INT32_MIN;
	volatile int64_t x287 = 0LL;
	static int16_t x288 = INT16_MIN;
	static volatile int32_t t51 = -234883161;

    t51 = (x285<=(x286*(x287-x288)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x289 = 0;
	int8_t x292 = INT8_MAX;

    t52 = (x289<=(x290*(x291-x292)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x293 = INT16_MAX;
	uint64_t x294 = 64570609668LLU;
	volatile int32_t t53 = -6780;

    t53 = (x293<=(x294*(x295-x296)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x298 = 455393;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t t54 = -13;

    t54 = (x297<=(x298*(x299-x300)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x305 = UINT8_MAX;
	uint64_t x306 = UINT64_MAX;
	volatile int32_t x307 = INT32_MIN;
	static int8_t x308 = -6;
	static int32_t t55 = -14;

    t55 = (x305<=(x306*(x307-x308)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MAX;
	static int16_t x315 = INT16_MIN;
	static int8_t x316 = INT8_MIN;
	int32_t t56 = -74724;

    t56 = (x313<=(x314*(x315-x316)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x333 = INT8_MIN;
	int32_t x334 = -1;
	static int16_t x335 = INT16_MIN;
	volatile int32_t t57 = -11463871;

    t57 = (x333<=(x334*(x335-x336)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x338 = 84897431257758372LLU;
	static int32_t x339 = INT32_MAX;
	static int32_t t58 = 167;

    t58 = (x337<=(x338*(x339-x340)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x342 = UINT32_MAX;
	int64_t x344 = 853LL;
	volatile int32_t t59 = -28;

    t59 = (x341<=(x342*(x343-x344)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x346 = 2416LL;
	int64_t x347 = -1LL;

    t60 = (x345<=(x346*(x347-x348)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	int16_t x351 = -8242;
	static int16_t x352 = INT16_MIN;

    t61 = (x349<=(x350*(x351-x352)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x353 = 20165;
	uint32_t x355 = UINT32_MAX;
	static int8_t x356 = INT8_MIN;
	static volatile int32_t t62 = 0;

    t62 = (x353<=(x354*(x355-x356)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MAX;
	static uint16_t x360 = 0U;
	int32_t t63 = 5484678;

    t63 = (x357<=(x358*(x359-x360)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x365 = UINT8_MAX;
	int8_t x366 = 0;
	int16_t x367 = -1;
	static uint32_t x368 = UINT32_MAX;
	volatile int32_t t64 = 2;

    t64 = (x365<=(x366*(x367-x368)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x369 = INT64_MIN;
	static volatile uint32_t x371 = 1107896767U;
	uint32_t x372 = 49538U;
	volatile int32_t t65 = -7746615;

    t65 = (x369<=(x370*(x371-x372)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x377 = 9016399LLU;
	uint32_t x378 = 56647U;
	volatile uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t66 = -4053;

    t66 = (x377<=(x378*(x379-x380)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x381 = -1LL;
	volatile int16_t x383 = -1;
	uint16_t x384 = 98U;
	static int32_t t67 = -78308590;

    t67 = (x381<=(x382*(x383-x384)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x387 = -15;
	int32_t x388 = -243107;
	volatile int32_t t68 = 13;

    t68 = (x385<=(x386*(x387-x388)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x389 = 64111489LLU;
	volatile int8_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t69 = 3742;

    t69 = (x389<=(x390*(x391-x392)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x393 = 2140794U;
	static int8_t x394 = -1;
	int16_t x396 = INT16_MIN;

    t70 = (x393<=(x394*(x395-x396)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x401 = INT64_MAX;
	int8_t x402 = 5;
	uint32_t x403 = UINT32_MAX;
	static uint8_t x404 = 0U;
	volatile int32_t t71 = 7931;

    t71 = (x401<=(x402*(x403-x404)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = 2737775U;
	int32_t t72 = 1864;

    t72 = (x409<=(x410*(x411-x412)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x413 = INT8_MIN;
	uint16_t x415 = 14U;
	int64_t x416 = -127LL;
	static volatile int32_t t73 = -83072;

    t73 = (x413<=(x414*(x415-x416)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x423 = 3637543049530LLU;
	static volatile uint8_t x424 = UINT8_MAX;
	int32_t t74 = 58123;

    t74 = (x421<=(x422*(x423-x424)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x425 = INT16_MIN;
	static uint64_t x426 = UINT64_MAX;
	int64_t x427 = -59456684414419LL;

    t75 = (x425<=(x426*(x427-x428)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile int64_t x430 = -1LL;
	static volatile int16_t x432 = -216;
	int32_t t76 = 471;

    t76 = (x429<=(x430*(x431-x432)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x437 = INT8_MIN;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = 0;
	int32_t t77 = 1;

    t77 = (x437<=(x438*(x439-x440)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x443 = INT8_MIN;
	int16_t x444 = 0;

    t78 = (x441<=(x442*(x443-x444)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x445 = -2105;
	int8_t x446 = INT8_MIN;
	uint8_t x447 = 60U;
	int64_t x448 = 326312LL;
	int32_t t79 = 38952;

    t79 = (x445<=(x446*(x447-x448)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x453 = 178U;
	uint64_t x454 = UINT64_MAX;
	volatile int64_t x456 = -599755554298843LL;
	int32_t t80 = 968;

    t80 = (x453<=(x454*(x455-x456)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = 42U;
	static volatile uint64_t x459 = UINT64_MAX;
	int16_t x460 = -590;

    t81 = (x457<=(x458*(x459-x460)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x461 = -1850148329893977LL;
	static uint16_t x463 = 1U;
	int32_t t82 = 9;

    t82 = (x461<=(x462*(x463-x464)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x465 = -1;
	int32_t x466 = 0;
	volatile uint64_t x467 = 711801276LLU;
	static uint64_t x468 = UINT64_MAX;

    t83 = (x465<=(x466*(x467-x468)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x473 = -1;
	static int32_t x475 = -1038405;
	int8_t x476 = -1;
	volatile int32_t t84 = -32146360;

    t84 = (x473<=(x474*(x475-x476)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x477 = -1;
	int64_t x480 = -1LL;

    t85 = (x477<=(x478*(x479-x480)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x481 = INT32_MIN;
	static int8_t x482 = -4;
	static volatile uint32_t x483 = UINT32_MAX;
	int32_t x484 = INT32_MIN;
	int32_t t86 = 10309629;

    t86 = (x481<=(x482*(x483-x484)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x489 = INT8_MIN;
	uint8_t x490 = 22U;
	int8_t x491 = INT8_MIN;
	int8_t x492 = INT8_MIN;
	volatile int32_t t87 = -1473054;

    t87 = (x489<=(x490*(x491-x492)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x502 = 196297715LLU;
	volatile int32_t x503 = -1;
	int64_t x504 = INT64_MIN;

    t88 = (x501<=(x502*(x503-x504)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x505 = -1;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MAX;
	volatile int8_t x508 = INT8_MIN;
	volatile int32_t t89 = 3;

    t89 = (x505<=(x506*(x507-x508)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x513 = INT64_MIN;
	int32_t x515 = -9;
	int8_t x516 = INT8_MIN;
	volatile int32_t t90 = -616431;

    t90 = (x513<=(x514*(x515-x516)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x517 = INT32_MIN;
	uint32_t x519 = 1U;
	int64_t x520 = -1LL;
	int32_t t91 = -245147605;

    t91 = (x517<=(x518*(x519-x520)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x521 = -40;
	volatile uint8_t x522 = 0U;
	uint8_t x523 = 7U;
	int64_t x524 = -1LL;

    t92 = (x521<=(x522*(x523-x524)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x525 = -3712;
	uint8_t x526 = 28U;
	uint64_t x527 = 237887LLU;
	int8_t x528 = -7;
	int32_t t93 = 149969;

    t93 = (x525<=(x526*(x527-x528)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x533 = 2128042788658811364LLU;
	int64_t x534 = -1LL;
	int8_t x535 = INT8_MIN;
	static int16_t x536 = -389;
	static volatile int32_t t94 = -72181762;

    t94 = (x533<=(x534*(x535-x536)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x541 = 27U;
	uint32_t x543 = 1328139U;
	uint64_t x544 = UINT64_MAX;

    t95 = (x541<=(x542*(x543-x544)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x549 = 1U;
	static int16_t x550 = -20;
	uint8_t x551 = 66U;
	uint32_t x552 = 28819U;
	int32_t t96 = 40;

    t96 = (x549<=(x550*(x551-x552)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x553 = -1;
	static int32_t x554 = INT32_MAX;
	volatile int32_t x555 = INT32_MIN;
	uint64_t x556 = 13229476491768LLU;
	static int32_t t97 = 22302;

    t97 = (x553<=(x554*(x555-x556)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x558 = 1U;
	uint8_t x559 = UINT8_MAX;
	volatile uint32_t x560 = UINT32_MAX;
	static volatile int32_t t98 = -1247;

    t98 = (x557<=(x558*(x559-x560)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x561 = -61;
	volatile int64_t x562 = 2840LL;
	uint16_t x563 = 228U;
	uint32_t x564 = 5U;

    t99 = (x561<=(x562*(x563-x564)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x565 = 4000338385LLU;
	int8_t x566 = -1;
	uint32_t x567 = 1949342162U;
	static int8_t x568 = -1;
	int32_t t100 = -3;

    t100 = (x565<=(x566*(x567-x568)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x578 = -1;
	uint16_t x579 = UINT16_MAX;
	int32_t x580 = 578;
	volatile int32_t t101 = 94;

    t101 = (x577<=(x578*(x579-x580)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x581 = UINT8_MAX;
	static int8_t x582 = -1;
	volatile uint8_t x584 = 9U;
	static int32_t t102 = -236770;

    t102 = (x581<=(x582*(x583-x584)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x585 = 59800U;
	int16_t x586 = INT16_MAX;
	uint64_t x587 = 22382753656804862LLU;
	int8_t x588 = -1;
	volatile int32_t t103 = 29247721;

    t103 = (x585<=(x586*(x587-x588)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x594 = UINT32_MAX;
	uint64_t x595 = UINT64_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t104 = 3686;

    t104 = (x593<=(x594*(x595-x596)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x601 = -6152643;
	int8_t x602 = INT8_MIN;
	volatile int16_t x603 = -295;
	uint64_t x604 = 17534541LLU;
	int32_t t105 = 170933397;

    t105 = (x601<=(x602*(x603-x604)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x610 = -1LL;
	int16_t x611 = 15;
	int32_t t106 = 89;

    t106 = (x609<=(x610*(x611-x612)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x613 = INT16_MIN;
	static volatile int16_t x614 = INT16_MIN;
	int8_t x615 = INT8_MIN;
	int32_t t107 = 1573;

    t107 = (x613<=(x614*(x615-x616)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x617 = -980;
	volatile uint32_t x620 = 325769U;
	volatile int32_t t108 = -18;

    t108 = (x617<=(x618*(x619-x620)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x622 = 1745808U;
	uint8_t x624 = UINT8_MAX;
	static volatile int32_t t109 = -66536;

    t109 = (x621<=(x622*(x623-x624)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x625 = INT16_MIN;
	int8_t x627 = -21;
	static volatile uint8_t x628 = 0U;
	volatile int32_t t110 = 810;

    t110 = (x625<=(x626*(x627-x628)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x629 = UINT8_MAX;
	uint8_t x630 = 14U;
	uint16_t x632 = 1755U;
	int32_t t111 = -473044217;

    t111 = (x629<=(x630*(x631-x632)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x638 = -1;
	int64_t x639 = -1LL;
	static int32_t x640 = INT32_MAX;
	volatile int32_t t112 = 81302;

    t112 = (x637<=(x638*(x639-x640)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x641 = 5345;
	uint64_t x642 = 1LLU;
	static int8_t x643 = INT8_MIN;
	static int8_t x644 = -62;
	static volatile int32_t t113 = -1191;

    t113 = (x641<=(x642*(x643-x644)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x646 = -1;
	int16_t x647 = -1;
	int16_t x648 = -26;
	volatile int32_t t114 = -125509;

    t114 = (x645<=(x646*(x647-x648)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x649 = INT32_MIN;
	int64_t x650 = -35477604197289LL;
	int8_t x651 = 9;
	static volatile uint16_t x652 = 4U;

    t115 = (x649<=(x650*(x651-x652)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x655 = UINT16_MAX;
	volatile uint64_t x656 = UINT64_MAX;
	int32_t t116 = 490730;

    t116 = (x653<=(x654*(x655-x656)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x657 = 0;
	uint8_t x658 = 1U;
	uint16_t x659 = 1006U;
	uint16_t x660 = 1767U;

    t117 = (x657<=(x658*(x659-x660)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x665 = INT16_MAX;
	uint32_t x666 = 747068358U;
	uint8_t x668 = 0U;

    t118 = (x665<=(x666*(x667-x668)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x678 = UINT32_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t119 = 10835232;

    t119 = (x677<=(x678*(x679-x680)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x681 = -1;
	int16_t x682 = INT16_MIN;
	int16_t x683 = INT16_MAX;
	int32_t t120 = 6709982;

    t120 = (x681<=(x682*(x683-x684)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x685 = INT64_MIN;
	int8_t x686 = INT8_MAX;
	volatile int32_t x687 = -1;
	volatile uint16_t x688 = 539U;
	static volatile int32_t t121 = 7;

    t121 = (x685<=(x686*(x687-x688)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x689 = 4U;
	int8_t x690 = -1;
	int16_t x691 = 64;
	uint8_t x692 = 15U;
	volatile int32_t t122 = -10621;

    t122 = (x689<=(x690*(x691-x692)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x693 = INT16_MIN;
	static volatile int64_t x694 = -1LL;
	int64_t x696 = INT64_MIN;
	volatile int32_t t123 = 36;

    t123 = (x693<=(x694*(x695-x696)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x701 = INT16_MIN;
	int16_t x702 = INT16_MIN;
	uint16_t x703 = 1841U;
	uint16_t x704 = 7U;
	volatile int32_t t124 = -92533268;

    t124 = (x701<=(x702*(x703-x704)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x705 = 1;
	int8_t x706 = INT8_MIN;
	static int32_t x708 = INT32_MIN;
	int32_t t125 = -1;

    t125 = (x705<=(x706*(x707-x708)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x709 = INT64_MIN;
	int8_t x710 = -1;
	uint32_t x711 = UINT32_MAX;
	int64_t x712 = INT64_MAX;

    t126 = (x709<=(x710*(x711-x712)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x713 = 10;
	static int16_t x714 = -4834;
	uint32_t x715 = 1751839U;
	volatile int32_t t127 = -57075893;

    t127 = (x713<=(x714*(x715-x716)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x717 = INT64_MAX;
	uint16_t x720 = 5089U;
	volatile int32_t t128 = 17721128;

    t128 = (x717<=(x718*(x719-x720)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x722 = UINT8_MAX;
	int64_t x723 = -1LL;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t129 = -384;

    t129 = (x721<=(x722*(x723-x724)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x725 = INT64_MIN;
	volatile int8_t x726 = -1;
	int8_t x727 = INT8_MIN;
	int16_t x728 = INT16_MIN;
	static int32_t t130 = -751;

    t130 = (x725<=(x726*(x727-x728)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x729 = UINT8_MAX;
	volatile int16_t x732 = -1;
	static volatile int32_t t131 = -116577;

    t131 = (x729<=(x730*(x731-x732)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x741 = 0;
	int32_t x742 = 5797;
	uint8_t x743 = 20U;
	int64_t x744 = -1LL;
	volatile int32_t t132 = 110148;

    t132 = (x741<=(x742*(x743-x744)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x754 = UINT16_MAX;
	int64_t x755 = 32706585182LL;
	int32_t x756 = -1;
	int32_t t133 = -2;

    t133 = (x753<=(x754*(x755-x756)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x757 = 4607099LL;
	volatile uint8_t x758 = UINT8_MAX;
	int16_t x760 = INT16_MAX;

    t134 = (x757<=(x758*(x759-x760)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x765 = INT8_MIN;
	volatile int64_t x766 = 3295323753374LL;
	static volatile uint64_t x767 = 1634697LLU;
	static uint16_t x768 = 92U;
	volatile int32_t t135 = -1;

    t135 = (x765<=(x766*(x767-x768)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint8_t x780 = 1U;

    t136 = (x777<=(x778*(x779-x780)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x781 = 508516358522LL;
	int32_t x782 = INT32_MAX;
	uint32_t x784 = UINT32_MAX;
	static volatile int32_t t137 = 6179;

    t137 = (x781<=(x782*(x783-x784)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x787 = INT16_MIN;
	static uint16_t x788 = 28278U;
	int32_t t138 = 33166697;

    t138 = (x785<=(x786*(x787-x788)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x796 = INT32_MIN;
	int32_t t139 = -358;

    t139 = (x793<=(x794*(x795-x796)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x797 = 273710254;
	int64_t x798 = INT64_MAX;
	uint32_t x799 = UINT32_MAX;
	int32_t x800 = -1;
	int32_t t140 = -3415;

    t140 = (x797<=(x798*(x799-x800)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x801 = 5LLU;
	uint64_t x804 = UINT64_MAX;
	int32_t t141 = 439398268;

    t141 = (x801<=(x802*(x803-x804)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x805 = INT8_MAX;
	uint64_t x806 = 4528948760636141719LLU;
	int32_t t142 = 92891511;

    t142 = (x805<=(x806*(x807-x808)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	uint8_t x810 = UINT8_MAX;
	uint16_t x811 = 19U;
	uint8_t x812 = 2U;
	static volatile int32_t t143 = 0;

    t143 = (x809<=(x810*(x811-x812)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	int64_t x814 = -17773695288LL;
	static int16_t x815 = 2381;
	static volatile int16_t x816 = -47;
	int32_t t144 = 3619;

    t144 = (x813<=(x814*(x815-x816)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x821 = INT64_MIN;
	int8_t x823 = 0;

    t145 = (x821<=(x822*(x823-x824)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x826 = UINT8_MAX;
	int32_t x827 = 29565;
	int16_t x828 = INT16_MIN;
	volatile int32_t t146 = -1489;

    t146 = (x825<=(x826*(x827-x828)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x837 = INT64_MAX;
	uint64_t x838 = 84287431638919LLU;
	uint8_t x839 = 7U;
	static uint32_t x840 = 2109U;
	volatile int32_t t147 = 0;

    t147 = (x837<=(x838*(x839-x840)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x845 = INT32_MIN;
	static uint16_t x846 = 8334U;
	uint64_t x847 = 10LLU;
	int64_t x848 = 2844994388150653LL;
	static int32_t t148 = 7;

    t148 = (x845<=(x846*(x847-x848)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x849 = -1;
	static int8_t x850 = INT8_MAX;
	volatile uint32_t x851 = 5146U;
	int16_t x852 = -1;
	int32_t t149 = -752;

    t149 = (x849<=(x850*(x851-x852)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x853 = INT32_MIN;
	uint64_t x854 = UINT64_MAX;
	static uint64_t x855 = 2LLU;
	int32_t x856 = -25450678;
	volatile int32_t t150 = -1070106;

    t150 = (x853<=(x854*(x855-x856)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x858 = -1;
	static int16_t x859 = -1;
	int32_t x860 = -19;
	static int32_t t151 = 29073455;

    t151 = (x857<=(x858*(x859-x860)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x861 = -133777;
	int16_t x862 = -1;
	uint8_t x864 = 50U;
	static volatile int32_t t152 = 1;

    t152 = (x861<=(x862*(x863-x864)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x865 = 214211;
	int8_t x866 = -1;
	int32_t x867 = 603361503;
	int16_t x868 = INT16_MIN;
	int32_t t153 = -106952;

    t153 = (x865<=(x866*(x867-x868)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x869 = -1;
	int16_t x870 = 8;

    t154 = (x869<=(x870*(x871-x872)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x873 = 1;
	int32_t x874 = INT32_MAX;
	volatile int16_t x875 = -1;
	volatile uint32_t x876 = 242404238U;
	volatile int32_t t155 = 803432;

    t155 = (x873<=(x874*(x875-x876)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x881 = 30;
	uint32_t x883 = 1901748562U;
	int16_t x884 = 8;
	static volatile int32_t t156 = 79;

    t156 = (x881<=(x882*(x883-x884)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x889 = INT16_MIN;
	uint8_t x890 = 60U;
	volatile int8_t x891 = INT8_MAX;
	int16_t x892 = INT16_MIN;
	int32_t t157 = 4748328;

    t157 = (x889<=(x890*(x891-x892)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x893 = 5U;
	static int32_t x894 = INT32_MAX;
	static volatile uint64_t x895 = UINT64_MAX;
	uint64_t x896 = 1557504368LLU;

    t158 = (x893<=(x894*(x895-x896)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x897 = -4892434;
	uint64_t x898 = 683139143446578LLU;
	uint32_t x899 = 165426U;
	int64_t x900 = 4539526290003LL;
	volatile int32_t t159 = 46989;

    t159 = (x897<=(x898*(x899-x900)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x901 = -6557052734LL;
	uint16_t x903 = 15U;
	uint16_t x904 = 31U;
	volatile int32_t t160 = -46;

    t160 = (x901<=(x902*(x903-x904)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x909 = UINT64_MAX;
	volatile uint64_t x910 = 104933LLU;
	uint64_t x911 = 10286LLU;
	uint8_t x912 = 34U;
	volatile int32_t t161 = 7;

    t161 = (x909<=(x910*(x911-x912)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x913 = 27;
	int32_t x914 = -1;
	volatile int64_t x915 = INT64_MIN;
	static int32_t x916 = -1;
	static int32_t t162 = -3149260;

    t162 = (x913<=(x914*(x915-x916)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x918 = -10;
	static volatile int64_t x919 = 2838LL;
	volatile int32_t x920 = INT32_MIN;

    t163 = (x917<=(x918*(x919-x920)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x925 = -616862681;
	uint16_t x926 = UINT16_MAX;
	static int64_t x927 = -16033152892LL;
	int16_t x928 = -1;

    t164 = (x925<=(x926*(x927-x928)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x929 = UINT8_MAX;
	static volatile uint8_t x930 = 42U;
	int16_t x931 = -1;
	static uint64_t x932 = 732072423970511LLU;
	int32_t t165 = 1;

    t165 = (x929<=(x930*(x931-x932)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x939 = -1;
	int32_t t166 = -8387;

    t166 = (x937<=(x938*(x939-x940)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x946 = UINT32_MAX;
	int8_t x947 = -1;
	int8_t x948 = 6;
	volatile int32_t t167 = 1005328324;

    t167 = (x945<=(x946*(x947-x948)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x949 = 30142992U;
	static int32_t x950 = -1;
	static int32_t x951 = INT32_MAX;
	int32_t x952 = INT32_MAX;
	int32_t t168 = -1220265;

    t168 = (x949<=(x950*(x951-x952)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x954 = UINT16_MAX;
	static volatile int16_t x955 = INT16_MIN;
	int32_t t169 = -5704;

    t169 = (x953<=(x954*(x955-x956)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x957 = 36078314LL;
	static int8_t x960 = INT8_MIN;
	int32_t t170 = 19015022;

    t170 = (x957<=(x958*(x959-x960)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x961 = 1377;
	static uint16_t x962 = 557U;
	static int16_t x963 = -1;
	static int32_t x964 = 4211;
	volatile int32_t t171 = -2491605;

    t171 = (x961<=(x962*(x963-x964)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x965 = 1;
	int64_t x966 = INT64_MAX;
	uint64_t x968 = UINT64_MAX;
	int32_t t172 = -8442539;

    t172 = (x965<=(x966*(x967-x968)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x977 = INT32_MAX;
	int16_t x978 = -13376;
	static uint32_t x979 = UINT32_MAX;
	volatile int32_t t173 = 12882;

    t173 = (x977<=(x978*(x979-x980)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x985 = -1;
	uint32_t x987 = 315U;
	uint32_t x988 = 57U;
	int32_t t174 = 116671934;

    t174 = (x985<=(x986*(x987-x988)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x989 = 0U;
	volatile uint32_t x990 = UINT32_MAX;
	int32_t x991 = INT32_MIN;
	volatile int32_t t175 = -243;

    t175 = (x989<=(x990*(x991-x992)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x997 = UINT8_MAX;
	int64_t x998 = -1LL;
	int32_t x1000 = INT32_MIN;
	volatile int32_t t176 = -4517;

    t176 = (x997<=(x998*(x999-x1000)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x1001 = -110737556571LL;
	int32_t x1002 = INT32_MIN;
	int64_t x1003 = -1LL;
	int32_t x1004 = INT32_MIN;
	int32_t t177 = 1818;

    t177 = (x1001<=(x1002*(x1003-x1004)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1005 = INT64_MAX;
	uint64_t x1006 = 2265635LLU;
	int64_t x1007 = INT64_MIN;

    t178 = (x1005<=(x1006*(x1007-x1008)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x1016 = 5;
	volatile int32_t t179 = -44;

    t179 = (x1013<=(x1014*(x1015-x1016)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1017 = UINT64_MAX;
	static int16_t x1018 = -1;
	int16_t x1019 = INT16_MIN;
	volatile int8_t x1020 = INT8_MIN;
	int32_t t180 = -3;

    t180 = (x1017<=(x1018*(x1019-x1020)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1025 = 0LLU;
	static int16_t x1027 = 21;
	static uint16_t x1028 = 2366U;
	static volatile int32_t t181 = 3163154;

    t181 = (x1025<=(x1026*(x1027-x1028)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x1029 = UINT16_MAX;
	static int8_t x1030 = 3;
	uint64_t x1032 = UINT64_MAX;
	static volatile int32_t t182 = -25;

    t182 = (x1029<=(x1030*(x1031-x1032)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x1041 = 32045U;
	volatile int16_t x1042 = INT16_MIN;
	volatile int8_t x1043 = INT8_MAX;
	int16_t x1044 = 3;
	volatile int32_t t183 = 691;

    t183 = (x1041<=(x1042*(x1043-x1044)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1045 = UINT32_MAX;
	int8_t x1046 = INT8_MIN;
	int64_t x1047 = 3694235235906571LL;
	volatile int32_t t184 = 49;

    t184 = (x1045<=(x1046*(x1047-x1048)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1049 = 80067U;
	static int32_t x1050 = -1;
	volatile uint64_t x1051 = 19890695043821LLU;
	int32_t t185 = -1;

    t185 = (x1049<=(x1050*(x1051-x1052)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1057 = INT16_MIN;
	int8_t x1058 = INT8_MIN;
	int16_t x1059 = INT16_MIN;
	static int32_t t186 = -51168257;

    t186 = (x1057<=(x1058*(x1059-x1060)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    

    t187 = (x1061<=(x1062*(x1063-x1064)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1065 = 35;
	uint8_t x1067 = 18U;
	int8_t x1068 = -4;
	volatile int32_t t188 = -52241;

    t188 = (x1065<=(x1066*(x1067-x1068)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1073 = INT16_MAX;
	uint64_t x1074 = UINT64_MAX;
	uint16_t x1075 = UINT16_MAX;
	static int64_t x1076 = 193040LL;
	static volatile int32_t t189 = -4025840;

    t189 = (x1073<=(x1074*(x1075-x1076)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1078 = -7470530;
	volatile int8_t x1080 = 1;
	volatile int32_t t190 = -5;

    t190 = (x1077<=(x1078*(x1079-x1080)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1081 = INT8_MIN;
	int32_t x1082 = -1;
	volatile uint64_t x1083 = UINT64_MAX;
	volatile int64_t x1084 = INT64_MAX;
	int32_t t191 = 199;

    t191 = (x1081<=(x1082*(x1083-x1084)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1085 = INT8_MIN;
	static int8_t x1087 = INT8_MAX;
	uint16_t x1088 = 250U;
	volatile int32_t t192 = -643046320;

    t192 = (x1085<=(x1086*(x1087-x1088)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1089 = 298;
	volatile int16_t x1090 = INT16_MIN;
	static int16_t x1091 = INT16_MIN;
	int8_t x1092 = 0;
	int32_t t193 = 560294377;

    t193 = (x1089<=(x1090*(x1091-x1092)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x1093 = 14U;
	uint64_t x1094 = 78864056339255LLU;
	static uint8_t x1095 = 38U;

    t194 = (x1093<=(x1094*(x1095-x1096)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1109 = 498;
	uint32_t x1110 = UINT32_MAX;
	int32_t x1111 = 118621896;
	int32_t t195 = 57359307;

    t195 = (x1109<=(x1110*(x1111-x1112)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1113 = 2U;
	int16_t x1115 = INT16_MIN;
	uint32_t x1116 = UINT32_MAX;
	int32_t t196 = -1641805;

    t196 = (x1113<=(x1114*(x1115-x1116)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1117 = 202879862;
	int16_t x1118 = INT16_MIN;
	static int8_t x1119 = 1;
	static int16_t x1120 = INT16_MIN;
	volatile int32_t t197 = 3;

    t197 = (x1117<=(x1118*(x1119-x1120)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1121 = 8122U;
	static int64_t x1122 = -45021LL;
	int32_t x1123 = -2800317;
	uint8_t x1124 = 122U;
	int32_t t198 = -22547;

    t198 = (x1121<=(x1122*(x1123-x1124)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1129 = -1;
	int32_t x1130 = -6321;
	volatile uint64_t x1131 = 26998196216040591LLU;
	int32_t t199 = 2329;

    t199 = (x1129<=(x1130*(x1131-x1132)));

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

