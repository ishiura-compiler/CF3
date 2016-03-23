
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

uint32_t x11 = UINT32_MAX;
int64_t x15 = INT64_MIN;
int64_t x16 = INT64_MAX;
int64_t x22 = INT64_MAX;
volatile int32_t t5 = -48;
int32_t t7 = 6377210;
static volatile uint64_t t8 = 14851641254LLU;
int8_t x40 = -2;
uint8_t x42 = UINT8_MAX;
int32_t t10 = 388;
int32_t x49 = INT32_MIN;
int32_t t13 = 35937007;
static uint64_t x58 = 45LLU;
static volatile uint32_t t14 = 2799930U;
int16_t x62 = -1;
static volatile int64_t t15 = 1686LL;
int16_t x71 = INT16_MIN;
volatile uint32_t x79 = 3U;
uint8_t x80 = UINT8_MAX;
static int16_t x88 = 1;
int32_t x93 = 340421607;
uint16_t x94 = 7547U;
int32_t x97 = INT32_MAX;
int8_t x98 = INT8_MIN;
int8_t x100 = INT8_MIN;
int8_t x108 = INT8_MAX;
int16_t x139 = INT16_MIN;
uint32_t x144 = UINT32_MAX;
volatile int32_t t34 = 1;
static volatile int32_t t35 = -27215;
static int8_t x161 = INT8_MIN;
int32_t x164 = INT32_MIN;
volatile int64_t x188 = -1LL;
int64_t t43 = -1LL;
int32_t x189 = -1;
static int64_t x190 = INT64_MAX;
int64_t x191 = INT64_MIN;
int64_t t44 = 72982898LL;
uint32_t x193 = UINT32_MAX;
volatile int32_t t47 = -110115;
int32_t x206 = INT32_MIN;
int8_t x212 = 15;
int16_t x232 = 60;
int8_t x237 = INT8_MIN;
int64_t x239 = -1LL;
int64_t x240 = INT64_MAX;
int32_t t57 = -4282;
static int64_t x250 = 1794054865718446LL;
uint64_t x251 = UINT64_MAX;
static uint8_t x252 = 104U;
int16_t x256 = 1;
uint8_t x266 = 1U;
int32_t t63 = -54964;
uint16_t x269 = 148U;
static int32_t x272 = -75059799;
int8_t x275 = -7;
static volatile int16_t x282 = INT16_MIN;
uint64_t x290 = 27LLU;
int16_t x292 = -14862;
int8_t x298 = -1;
int64_t t71 = 2302979216129037973LL;
static int16_t x308 = -1;
int8_t x319 = INT8_MAX;
int8_t x320 = -11;
volatile int64_t x322 = INT64_MIN;
int32_t x324 = -1;
int8_t x326 = INT8_MIN;
static volatile int32_t t80 = -2829;
volatile uint16_t x338 = UINT16_MAX;
static int16_t x339 = INT16_MIN;
int8_t x340 = -29;
static volatile uint32_t t82 = 1U;
int8_t x348 = -1;
volatile int32_t x355 = INT32_MIN;
int8_t x358 = 23;
static int8_t x362 = -1;
volatile int8_t x369 = INT8_MIN;
int8_t x380 = -1;
static uint8_t x383 = UINT8_MAX;
int8_t x384 = INT8_MIN;
int8_t x386 = INT8_MIN;
int64_t x389 = INT64_MIN;
int8_t x394 = INT8_MIN;
int8_t x397 = INT8_MIN;
volatile int64_t x400 = 229388715288LL;
int64_t t96 = 1LL;
int32_t t97 = 428;
volatile uint64_t x409 = 10327995207306LLU;
uint8_t x418 = 0U;
int16_t x437 = -1;
static int32_t x442 = -1;
volatile int64_t t107 = -7757347278LL;
int16_t x445 = INT16_MIN;
static volatile uint64_t x449 = 594LLU;
int8_t x454 = INT8_MIN;
volatile uint64_t t110 = 548304415LLU;
static uint64_t t111 = 1127190047LLU;
int64_t x463 = INT64_MIN;
volatile int32_t x467 = -530;
static int64_t x468 = INT64_MAX;
volatile int64_t t113 = 115819826176721LL;
uint16_t x474 = 6U;
static int16_t x478 = -60;
int8_t x479 = INT8_MAX;
int32_t x489 = -950;
static int8_t x491 = INT8_MAX;
uint16_t x492 = 5U;
int32_t x503 = INT32_MIN;
int8_t x504 = -1;
static uint8_t x508 = 102U;
volatile int8_t x517 = -1;
uint8_t x520 = 13U;
int8_t x529 = INT8_MAX;
int16_t x531 = -1;
uint8_t x535 = UINT8_MAX;
static int64_t x544 = INT64_MAX;
int64_t t132 = -7695LL;
volatile int32_t x546 = -23627;
int8_t x547 = -1;
static volatile uint32_t t137 = 53U;
int8_t x565 = 12;
static int8_t x566 = INT8_MAX;
static int32_t t138 = 0;
volatile int64_t t139 = 56LL;
static int32_t x573 = -1;
int8_t x576 = -2;
volatile int8_t x577 = 3;
static int8_t x579 = INT8_MIN;
int32_t x587 = 2;
int16_t x591 = -2702;
int32_t x598 = -38;
int64_t t146 = 5734428804LL;
int16_t x615 = INT16_MIN;
int32_t t151 = -7509;
int8_t x622 = -1;
int64_t x631 = -591565814LL;
volatile int64_t x634 = INT64_MAX;
int64_t t155 = 77107830343804LL;
volatile int32_t t156 = -5818;
static int8_t x642 = -1;
volatile int32_t t157 = -9781951;
volatile uint8_t x648 = UINT8_MAX;
volatile uint64_t x652 = 160501118181786129LLU;
uint32_t x653 = UINT32_MAX;
uint8_t x656 = UINT8_MAX;
volatile int32_t t160 = -4685432;
uint8_t x657 = UINT8_MAX;
uint8_t x661 = 0U;
int8_t x683 = INT8_MIN;
static int8_t x688 = INT8_MIN;
int16_t x694 = 946;
int32_t t170 = 151034;
int64_t x698 = INT64_MIN;
int8_t x702 = INT8_MIN;
static volatile int32_t t173 = 0;
int32_t t174 = 7;
int8_t x715 = -1;
int32_t t176 = 492060660;
static int32_t x729 = INT32_MIN;
uint32_t x732 = UINT32_MAX;
volatile int16_t x735 = INT16_MIN;
volatile int8_t x743 = INT8_MAX;
static uint32_t x744 = 59893U;
volatile uint32_t t182 = 58878U;
static uint32_t x750 = 3900253U;
int64_t x757 = 59025507503992094LL;
uint16_t x772 = 1U;
static volatile int16_t x777 = INT16_MAX;
volatile int32_t x781 = INT32_MIN;
volatile int32_t x783 = INT32_MIN;
int8_t x786 = INT8_MIN;
int32_t t193 = -827;
volatile int64_t x793 = INT64_MIN;
uint32_t x798 = 1249945335U;
int32_t x808 = INT32_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint64_t x2 = 15139429908LLU;
	static int8_t x3 = -1;
	int8_t x4 = -6;
	static volatile int32_t t0 = -1847;

    t0 = ((x1<=(x2%x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	uint64_t x6 = 157128LLU;
	volatile int16_t x7 = INT16_MIN;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 42524507;

    t1 = ((x5<=(x6%x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	volatile int64_t x10 = -446LL;
	uint32_t x12 = 60U;
	volatile uint32_t t2 = 5U;

    t2 = ((x9<=(x10%x11))&x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -1;
	static int16_t x14 = -3132;
	volatile int64_t t3 = 603581661357LL;

    t3 = ((x13<=(x14%x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = UINT16_MAX;
	static uint8_t x18 = UINT8_MAX;
	int32_t x19 = -1;
	volatile int64_t x20 = INT64_MAX;
	int64_t t4 = 963759292421028LL;

    t4 = ((x17<=(x18%x19))&x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile int8_t x23 = 1;
	int8_t x24 = 0;

    t5 = ((x21<=(x22%x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 6U;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = 0;
	volatile int32_t t6 = 214690;

    t6 = ((x25<=(x26%x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int16_t x30 = INT16_MAX;
	int32_t x31 = 282552355;
	int16_t x32 = -2210;

    t7 = ((x29<=(x30%x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = UINT64_MAX;
	static int64_t x35 = 22LL;
	volatile uint64_t x36 = 1194LLU;

    t8 = ((x33<=(x34%x35))&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 418U;
	static int64_t x38 = INT64_MIN;
	uint32_t x39 = 116U;
	volatile int32_t t9 = 9;

    t9 = ((x37<=(x38%x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 1U;
	volatile uint16_t x43 = 1U;
	static volatile uint16_t x44 = UINT16_MAX;

    t10 = ((x41<=(x42%x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	int8_t x47 = -1;
	static int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -9674;

    t11 = ((x45<=(x46%x47))&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -1;
	static int8_t x51 = -1;
	uint8_t x52 = 8U;
	int32_t t12 = 37;

    t12 = ((x49<=(x50%x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = UINT16_MAX;
	static int64_t x54 = INT64_MIN;
	uint8_t x55 = 70U;
	int32_t x56 = 0;

    t13 = ((x53<=(x54%x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -11;
	int64_t x59 = -170062545LL;
	volatile uint32_t x60 = 113U;

    t14 = ((x57<=(x58%x59))&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	volatile int8_t x63 = -1;
	int64_t x64 = -112960493391608LL;

    t15 = ((x61<=(x62%x63))&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 9U;
	int32_t x66 = INT32_MIN;
	static uint8_t x67 = 3U;
	int64_t x68 = -1LL;
	int64_t t16 = -4983946763654LL;

    t16 = ((x65<=(x66%x67))&x68);

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x70 = INT32_MIN;
	static int64_t x72 = -1LL;
	volatile int64_t t17 = -85091184479035LL;

    t17 = ((x69<=(x70%x71))&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 2U;
	static int16_t x76 = INT16_MIN;
	static int32_t t18 = -1320915;

    t18 = ((x73<=(x74%x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MAX;
	int32_t t19 = 10810;

    t19 = ((x77<=(x78%x79))&x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	uint64_t x82 = 32905424LLU;
	int8_t x83 = INT8_MIN;
	int64_t x84 = -1LL;
	int64_t t20 = 1086LL;

    t20 = ((x81<=(x82%x83))&x84);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	volatile int64_t x86 = 685935502975LL;
	volatile int8_t x87 = INT8_MIN;
	int32_t t21 = 2876;

    t21 = ((x85<=(x86%x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -5;
	static volatile int8_t x90 = 16;
	static int8_t x91 = INT8_MIN;
	static uint8_t x92 = 3U;
	int32_t t22 = 17;

    t22 = ((x89<=(x90%x91))&x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x95 = UINT64_MAX;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = 13653914;

    t23 = ((x93<=(x94%x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x99 = -1236;
	static int32_t t24 = 28010840;

    t24 = ((x97<=(x98%x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	volatile uint32_t x102 = 116U;
	static int32_t x103 = INT32_MIN;
	uint16_t x104 = 25425U;
	int32_t t25 = -93;

    t25 = ((x101<=(x102%x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 1979125258719912865LLU;
	int32_t x106 = INT32_MAX;
	uint32_t x107 = 207U;
	int32_t t26 = -3930;

    t26 = ((x105<=(x106%x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 121U;
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MIN;
	int32_t x112 = -22122;
	volatile int32_t t27 = -9690;

    t27 = ((x109<=(x110%x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = 3142740603186822916LL;
	uint16_t x114 = 3U;
	static uint32_t x115 = UINT32_MAX;
	int16_t x116 = -60;
	volatile int32_t t28 = 8814;

    t28 = ((x113<=(x114%x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 12904U;
	int8_t x118 = -1;
	static int16_t x119 = -7;
	static uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -16200973;

    t29 = ((x117<=(x118%x119))&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 1314U;
	int32_t x130 = 754422;
	volatile int64_t x131 = INT64_MIN;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t30 = -69;

    t30 = ((x129<=(x130%x131))&x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x133 = 27832U;
	int16_t x134 = INT16_MIN;
	static int64_t x135 = -511768LL;
	int16_t x136 = INT16_MAX;
	volatile int32_t t31 = 1;

    t31 = ((x133<=(x134%x135))&x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	int16_t x140 = 0;
	volatile int32_t t32 = 1192;

    t32 = ((x137<=(x138%x139))&x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x141 = UINT32_MAX;
	int8_t x142 = INT8_MAX;
	volatile uint32_t x143 = 53U;
	volatile uint32_t t33 = 456U;

    t33 = ((x141<=(x142%x143))&x144);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = 1;
	int16_t x150 = -3464;
	int8_t x151 = -2;
	int8_t x152 = 5;

    t34 = ((x149<=(x150%x151))&x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = 36;
	volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;

    t35 = ((x153<=(x154%x155))&x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = INT64_MIN;
	static int64_t x158 = -40594539460LL;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = 1;
	volatile int32_t t36 = -120787;

    t36 = ((x157<=(x158%x159))&x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	volatile int32_t t37 = 118732098;

    t37 = ((x161<=(x162%x163))&x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = -1LL;
	uint16_t x166 = 31146U;
	int64_t x167 = -4591956083993LL;
	int64_t x168 = INT64_MAX;
	static volatile int64_t t38 = 3840286LL;

    t38 = ((x165<=(x166%x167))&x168);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = INT16_MAX;
	int64_t x170 = 1384227680167LL;
	int64_t x171 = 28330243823211LL;
	uint64_t x172 = 25667650394LLU;
	volatile uint64_t t39 = 754026179591229LLU;

    t39 = ((x169<=(x170%x171))&x172);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = 15359;
	int8_t x174 = 2;
	int32_t x175 = -252983241;
	static uint16_t x176 = 11305U;
	static int32_t t40 = 5718792;

    t40 = ((x173<=(x174%x175))&x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MAX;
	uint64_t x179 = 67885562405LLU;
	volatile int32_t x180 = INT32_MAX;
	volatile int32_t t41 = -79937;

    t41 = ((x177<=(x178%x179))&x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = -1LL;
	uint64_t x182 = 399611737324206LLU;
	int64_t x183 = INT64_MAX;
	int64_t x184 = INT64_MAX;
	int64_t t42 = -4428LL;

    t42 = ((x181<=(x182%x183))&x184);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = INT64_MIN;
	volatile int32_t x186 = INT32_MIN;
	volatile uint8_t x187 = 20U;

    t43 = ((x185<=(x186%x187))&x188);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x192 = 696246102082308089LL;

    t44 = ((x189<=(x190%x191))&x192);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x194 = 34U;
	int32_t x195 = -6637;
	uint8_t x196 = UINT8_MAX;
	int32_t t45 = -896418;

    t45 = ((x193<=(x194%x195))&x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x197 = -19;
	int8_t x198 = 43;
	int8_t x199 = 4;
	volatile uint32_t x200 = UINT32_MAX;
	static volatile uint32_t t46 = 244828U;

    t46 = ((x197<=(x198%x199))&x200);

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x201 = 968U;
	uint64_t x202 = 3740425990676048953LLU;
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;

    t47 = ((x201<=(x202%x203))&x204);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = -3380LL;
	uint8_t x207 = 3U;
	volatile uint32_t x208 = 13166176U;
	uint32_t t48 = 4168428U;

    t48 = ((x205<=(x206%x207))&x208);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x209 = -28;
	int16_t x210 = 15;
	int64_t x211 = -1LL;
	volatile int32_t t49 = -2;

    t49 = ((x209<=(x210%x211))&x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = -2061LL;
	int8_t x214 = 53;
	static int16_t x215 = INT16_MIN;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t50 = 452021445832991604LLU;

    t50 = ((x213<=(x214%x215))&x216);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = 43;
	int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	uint8_t x220 = 96U;
	int32_t t51 = -899203;

    t51 = ((x217<=(x218%x219))&x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x221 = 2794188573346286016LLU;
	volatile int64_t x222 = INT64_MIN;
	static int16_t x223 = INT16_MIN;
	static int16_t x224 = INT16_MAX;
	volatile int32_t t52 = -286762670;

    t52 = ((x221<=(x222%x223))&x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x225 = -11;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = 39314U;
	int32_t x228 = INT32_MIN;
	int32_t t53 = -359544241;

    t53 = ((x225<=(x226%x227))&x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x229 = UINT16_MAX;
	static volatile uint64_t x230 = 698LLU;
	static int64_t x231 = -1LL;
	volatile int32_t t54 = -1412;

    t54 = ((x229<=(x230%x231))&x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = 137328;
	int8_t x234 = -1;
	static volatile int32_t x235 = INT32_MIN;
	int64_t x236 = -103443951LL;
	int64_t t55 = 118354254622332267LL;

    t55 = ((x233<=(x234%x235))&x236);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x238 = INT8_MIN;
	volatile int64_t t56 = -819674LL;

    t56 = ((x237<=(x238%x239))&x240);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1LL;
	int64_t x243 = -92302965777708048LL;
	volatile int32_t x244 = INT32_MAX;

    t57 = ((x241<=(x242%x243))&x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = INT64_MAX;
	int8_t x246 = -1;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MAX;
	volatile int32_t t58 = 237864;

    t58 = ((x245<=(x246%x247))&x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = 1;
	volatile int32_t t59 = 2;

    t59 = ((x249<=(x250%x251))&x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 1;
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int32_t t60 = 1008;

    t60 = ((x253<=(x254%x255))&x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x257 = INT16_MIN;
	volatile int64_t x258 = -1LL;
	int8_t x259 = -51;
	static uint16_t x260 = UINT16_MAX;
	int32_t t61 = 22524393;

    t61 = ((x257<=(x258%x259))&x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = INT32_MAX;
	int64_t x264 = -1325LL;
	volatile int64_t t62 = -5743222LL;

    t62 = ((x261<=(x262%x263))&x264);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x265 = INT16_MIN;
	int16_t x267 = -1;
	volatile uint16_t x268 = UINT16_MAX;

    t63 = ((x265<=(x266%x267))&x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x270 = 681254LL;
	static volatile uint8_t x271 = 7U;
	volatile int32_t t64 = 191014;

    t64 = ((x269<=(x270%x271))&x272);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = INT32_MIN;
	uint64_t x274 = UINT64_MAX;
	int32_t x276 = INT32_MAX;
	int32_t t65 = -13;

    t65 = ((x273<=(x274%x275))&x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x277 = INT32_MIN;
	int32_t x278 = -1;
	int32_t x279 = INT32_MAX;
	uint16_t x280 = 162U;
	int32_t t66 = 30628289;

    t66 = ((x277<=(x278%x279))&x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 5U;
	uint8_t x283 = 98U;
	uint32_t x284 = 317675U;
	uint32_t t67 = 1U;

    t67 = ((x281<=(x282%x283))&x284);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MIN;
	uint32_t x286 = 0U;
	static uint8_t x287 = 3U;
	uint64_t x288 = 308501620514139LLU;
	volatile uint64_t t68 = 130985LLU;

    t68 = ((x285<=(x286%x287))&x288);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = -1;
	uint16_t x291 = 5U;
	volatile int32_t t69 = -180424340;

    t69 = ((x289<=(x290%x291))&x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int16_t x295 = 4211;
	uint64_t x296 = 2298660293755865LLU;
	static uint64_t t70 = 3064439242014LLU;

    t70 = ((x293<=(x294%x295))&x296);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x297 = INT16_MIN;
	int16_t x299 = -1;
	volatile int64_t x300 = 11262852561612795LL;

    t71 = ((x297<=(x298%x299))&x300);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x301 = -2;
	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 69199509620178956LLU;
	static int16_t x304 = 3421;
	int32_t t72 = -233877338;

    t72 = ((x301<=(x302%x303))&x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x305 = -6503;
	volatile uint32_t x306 = 4152032U;
	static volatile uint64_t x307 = 49LLU;
	volatile int32_t t73 = 95383;

    t73 = ((x305<=(x306%x307))&x308);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = -2LL;
	volatile int64_t x310 = 88LL;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = -1;
	volatile int32_t t74 = 80615;

    t74 = ((x309<=(x310%x311))&x312);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = 36073811534LL;
	static int32_t x314 = INT32_MIN;
	static uint16_t x315 = UINT16_MAX;
	volatile int8_t x316 = 0;
	volatile int32_t t75 = -583464883;

    t75 = ((x313<=(x314%x315))&x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x317 = -1LL;
	int64_t x318 = 480LL;
	static int32_t t76 = -295;

    t76 = ((x317<=(x318%x319))&x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x321 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	volatile int32_t t77 = -3997;

    t77 = ((x321<=(x322%x323))&x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = 0;
	int16_t x327 = -1;
	static uint16_t x328 = 7032U;
	volatile int32_t t78 = -11922292;

    t78 = ((x325<=(x326%x327))&x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	uint64_t x330 = 38520860930634LLU;
	volatile uint64_t x331 = 132LLU;
	uint32_t x332 = 590592U;
	uint32_t t79 = 8447941U;

    t79 = ((x329<=(x330%x331))&x332);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x333 = INT16_MIN;
	uint16_t x334 = 176U;
	int8_t x335 = INT8_MIN;
	volatile uint8_t x336 = 2U;

    t80 = ((x333<=(x334%x335))&x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x337 = 33020156U;
	static int32_t t81 = -32;

    t81 = ((x337<=(x338%x339))&x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x341 = INT16_MAX;
	uint8_t x342 = 79U;
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = 1461087U;

    t82 = ((x341<=(x342%x343))&x344);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x345 = 747478U;
	volatile uint32_t x346 = 1415930939U;
	static int8_t x347 = -8;
	int32_t t83 = -56;

    t83 = ((x345<=(x346%x347))&x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = 1LL;
	int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	static int32_t x352 = INT32_MIN;
	int32_t t84 = -3755;

    t84 = ((x349<=(x350%x351))&x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = -1LL;
	uint8_t x354 = 2U;
	int16_t x356 = -1;
	volatile int32_t t85 = 1;

    t85 = ((x353<=(x354%x355))&x356);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x357 = 0;
	uint64_t x359 = 457LLU;
	int8_t x360 = -3;
	int32_t t86 = -22;

    t86 = ((x357<=(x358%x359))&x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x361 = -18;
	static int32_t x363 = INT32_MIN;
	volatile int32_t x364 = 0;
	int32_t t87 = 34915;

    t87 = ((x361<=(x362%x363))&x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = 7;
	uint32_t x366 = 743U;
	uint16_t x367 = 21500U;
	int64_t x368 = INT64_MIN;
	int64_t t88 = -91LL;

    t88 = ((x365<=(x366%x367))&x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x370 = -258;
	int16_t x371 = -4;
	int64_t x372 = 29149711690874LL;
	int64_t t89 = -1LL;

    t89 = ((x369<=(x370%x371))&x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = 12;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = UINT64_MAX;
	static uint8_t x376 = UINT8_MAX;
	volatile int32_t t90 = -54554;

    t90 = ((x373<=(x374%x375))&x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x377 = UINT16_MAX;
	uint16_t x378 = UINT16_MAX;
	uint8_t x379 = 3U;
	volatile int32_t t91 = 740061455;

    t91 = ((x377<=(x378%x379))&x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x381 = -5;
	static volatile uint8_t x382 = 5U;
	volatile int32_t t92 = -199192;

    t92 = ((x381<=(x382%x383))&x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int32_t x388 = 703935;
	static int32_t t93 = -7216120;

    t93 = ((x385<=(x386%x387))&x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x390 = -1LL;
	static int16_t x391 = 401;
	volatile uint8_t x392 = UINT8_MAX;
	static volatile int32_t t94 = 46712;

    t94 = ((x389<=(x390%x391))&x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = INT8_MAX;
	int64_t x395 = INT64_MIN;
	static volatile int8_t x396 = INT8_MIN;
	volatile int32_t t95 = -963393;

    t95 = ((x393<=(x394%x395))&x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x398 = 15198U;
	int32_t x399 = INT32_MAX;

    t96 = ((x397<=(x398%x399))&x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = INT64_MAX;
	int8_t x402 = -1;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = INT8_MIN;

    t97 = ((x401<=(x402%x403))&x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = 450188;
	int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MAX;
	volatile int32_t t98 = -64084;

    t98 = ((x405<=(x406%x407))&x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x410 = -1;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 527897298LLU;
	static uint64_t t99 = 0LLU;

    t99 = ((x409<=(x410%x411))&x412);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = INT16_MIN;
	static uint64_t x414 = 8998944190803275LLU;
	static volatile uint32_t x415 = UINT32_MAX;
	static volatile uint16_t x416 = 1852U;
	volatile int32_t t100 = -439028;

    t100 = ((x413<=(x414%x415))&x416);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	volatile int16_t x419 = INT16_MAX;
	int16_t x420 = INT16_MIN;
	int32_t t101 = 2;

    t101 = ((x417<=(x418%x419))&x420);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x421 = 0U;
	uint16_t x422 = 492U;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	int32_t t102 = -438;

    t102 = ((x421<=(x422%x423))&x424);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = -1;
	volatile int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MAX;
	uint16_t x428 = 1458U;
	static int32_t t103 = -2510;

    t103 = ((x425<=(x426%x427))&x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x429 = INT8_MIN;
	uint64_t x430 = UINT64_MAX;
	volatile int32_t x431 = 9;
	int8_t x432 = -42;
	static int32_t t104 = 50375;

    t104 = ((x429<=(x430%x431))&x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x433 = INT8_MIN;
	uint16_t x434 = 29U;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = 0;
	volatile int32_t t105 = 127894;

    t105 = ((x433<=(x434%x435))&x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int8_t x438 = INT8_MAX;
	int8_t x439 = -1;
	uint32_t x440 = 150802U;
	uint32_t t106 = 3588U;

    t106 = ((x437<=(x438%x439))&x440);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x441 = UINT32_MAX;
	static int32_t x443 = INT32_MAX;
	volatile int64_t x444 = INT64_MIN;

    t107 = ((x441<=(x442%x443))&x444);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x446 = 7;
	static uint8_t x447 = 3U;
	uint32_t x448 = 38U;
	uint32_t t108 = 132256U;

    t108 = ((x445<=(x446%x447))&x448);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x450 = -7;
	uint8_t x451 = UINT8_MAX;
	int32_t x452 = -79448;
	volatile int32_t t109 = -435746;

    t109 = ((x449<=(x450%x451))&x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = -19205018511279LL;
	volatile uint32_t x455 = 471495120U;
	uint64_t x456 = 2197055048145993LLU;

    t110 = ((x453<=(x454%x455))&x456);

    if (t110 != 1LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	uint64_t x458 = 497652677322675670LLU;
	static int64_t x459 = INT64_MAX;
	volatile uint64_t x460 = UINT64_MAX;

    t111 = ((x457<=(x458%x459))&x460);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x461 = 1U;
	static uint64_t x462 = 1066LLU;
	static uint8_t x464 = 17U;
	int32_t t112 = -818725;

    t112 = ((x461<=(x462%x463))&x464);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = -48411698;
	int64_t x466 = -1LL;

    t113 = ((x465<=(x466%x467))&x468);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint32_t x469 = 3U;
	uint32_t x470 = 83U;
	static int64_t x471 = INT64_MAX;
	int64_t x472 = -1LL;
	volatile int64_t t114 = 1588595517501LL;

    t114 = ((x469<=(x470%x471))&x472);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x473 = UINT64_MAX;
	int64_t x475 = INT64_MIN;
	int16_t x476 = INT16_MIN;
	volatile int32_t t115 = 43763524;

    t115 = ((x473<=(x474%x475))&x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x477 = 5U;
	static int64_t x480 = INT64_MAX;
	volatile int64_t t116 = -19429LL;

    t116 = ((x477<=(x478%x479))&x480);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = -1;
	int16_t x482 = -1;
	static int8_t x483 = -1;
	volatile int32_t x484 = -20521939;
	int32_t t117 = 2;

    t117 = ((x481<=(x482%x483))&x484);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MIN;
	int64_t x486 = -1LL;
	uint16_t x487 = 62U;
	static int8_t x488 = 50;
	int32_t t118 = 241730;

    t118 = ((x485<=(x486%x487))&x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x490 = 3;
	int32_t t119 = -424;

    t119 = ((x489<=(x490%x491))&x492);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x493 = UINT8_MAX;
	int16_t x494 = INT16_MIN;
	static uint32_t x495 = 2U;
	volatile uint64_t x496 = 1948877940615293LLU;
	uint64_t t120 = 285541100435717376LLU;

    t120 = ((x493<=(x494%x495))&x496);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x497 = INT8_MIN;
	volatile int32_t x498 = -1;
	uint8_t x499 = UINT8_MAX;
	static volatile int64_t x500 = 1LL;
	volatile int64_t t121 = 17LL;

    t121 = ((x497<=(x498%x499))&x500);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x501 = 1700U;
	int8_t x502 = INT8_MIN;
	volatile int32_t t122 = -183485;

    t122 = ((x501<=(x502%x503))&x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = 6604U;
	int64_t x506 = INT64_MAX;
	static volatile int16_t x507 = -20;
	int32_t t123 = -124;

    t123 = ((x505<=(x506%x507))&x508);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x509 = 22U;
	uint32_t x510 = 92778U;
	int8_t x511 = -1;
	static uint64_t x512 = 12004LLU;
	static uint64_t t124 = 3875388654781865727LLU;

    t124 = ((x509<=(x510%x511))&x512);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x513 = 5442U;
	int64_t x514 = 905727LL;
	int64_t x515 = INT64_MIN;
	int64_t x516 = 368115LL;
	static volatile int64_t t125 = -16110397292LL;

    t125 = ((x513<=(x514%x515))&x516);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x518 = -12607526;
	volatile int64_t x519 = -1LL;
	int32_t t126 = 929;

    t126 = ((x517<=(x518%x519))&x520);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = INT64_MIN;
	int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MAX;
	volatile int32_t t127 = -533995572;

    t127 = ((x521<=(x522%x523))&x524);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x525 = UINT16_MAX;
	uint16_t x526 = 6U;
	static uint16_t x527 = 24958U;
	volatile int64_t x528 = INT64_MAX;
	int64_t t128 = 5LL;

    t128 = ((x525<=(x526%x527))&x528);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x530 = UINT64_MAX;
	static int64_t x532 = INT64_MIN;
	static int64_t t129 = -25101708507LL;

    t129 = ((x529<=(x530%x531))&x532);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = INT8_MAX;
	uint32_t x534 = 177004U;
	int8_t x536 = 1;
	volatile int32_t t130 = 177448809;

    t130 = ((x533<=(x534%x535))&x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x537 = 363U;
	int16_t x538 = INT16_MIN;
	int16_t x539 = -1;
	volatile int8_t x540 = -1;
	int32_t t131 = -800;

    t131 = ((x537<=(x538%x539))&x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x541 = -7256154;
	int16_t x542 = -3;
	static volatile int8_t x543 = 1;

    t132 = ((x541<=(x542%x543))&x544);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x545 = -980655314658810LL;
	volatile uint16_t x548 = 30743U;
	int32_t t133 = 14785202;

    t133 = ((x545<=(x546%x547))&x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x549 = -1;
	volatile int16_t x550 = INT16_MIN;
	volatile int16_t x551 = INT16_MAX;
	int8_t x552 = -1;
	int32_t t134 = -7377886;

    t134 = ((x549<=(x550%x551))&x552);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x553 = -1LL;
	uint64_t x554 = UINT64_MAX;
	int16_t x555 = 546;
	int64_t x556 = INT64_MIN;
	volatile int64_t t135 = 1LL;

    t135 = ((x553<=(x554%x555))&x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x557 = 1U;
	uint8_t x558 = 40U;
	int32_t x559 = INT32_MIN;
	int16_t x560 = -1;
	int32_t t136 = -57109;

    t136 = ((x557<=(x558%x559))&x560);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = -1LL;
	uint32_t x562 = UINT32_MAX;
	int32_t x563 = -1;
	uint32_t x564 = 557636389U;

    t137 = ((x561<=(x562%x563))&x564);

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x567 = INT16_MAX;
	int32_t x568 = INT32_MAX;

    t138 = ((x565<=(x566%x567))&x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x569 = 118U;
	uint16_t x570 = UINT16_MAX;
	uint16_t x571 = 24466U;
	static int64_t x572 = -1LL;

    t139 = ((x569<=(x570%x571))&x572);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x574 = INT16_MIN;
	int16_t x575 = -92;
	static int32_t t140 = 170;

    t140 = ((x573<=(x574%x575))&x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x578 = 758581LL;
	int8_t x580 = 12;
	static volatile int32_t t141 = -1;

    t141 = ((x577<=(x578%x579))&x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x581 = -3;
	int16_t x582 = 8;
	int16_t x583 = INT16_MIN;
	int32_t x584 = INT32_MIN;
	int32_t t142 = 2;

    t142 = ((x581<=(x582%x583))&x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x585 = 8LLU;
	int8_t x586 = INT8_MAX;
	int8_t x588 = -50;
	volatile int32_t t143 = -219050;

    t143 = ((x585<=(x586%x587))&x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = INT8_MAX;
	int64_t x590 = INT64_MIN;
	int32_t x592 = INT32_MAX;
	int32_t t144 = -3594751;

    t144 = ((x589<=(x590%x591))&x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x593 = 1;
	int8_t x594 = -17;
	volatile int32_t x595 = 21023427;
	int16_t x596 = -1;
	static volatile int32_t t145 = 1;

    t145 = ((x593<=(x594%x595))&x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x597 = INT16_MAX;
	int32_t x599 = INT32_MAX;
	int64_t x600 = INT64_MIN;

    t146 = ((x597<=(x598%x599))&x600);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = -1;
	volatile int16_t x602 = INT16_MIN;
	int8_t x603 = -1;
	uint8_t x604 = 28U;
	volatile int32_t t147 = 227746;

    t147 = ((x601<=(x602%x603))&x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MAX;
	int8_t x606 = 12;
	int8_t x607 = INT8_MIN;
	static uint64_t x608 = 10764398947161680LLU;
	uint64_t t148 = 6380145390278LLU;

    t148 = ((x605<=(x606%x607))&x608);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 9803109U;
	int16_t x610 = INT16_MAX;
	int16_t x611 = INT16_MAX;
	uint64_t x612 = 1630484034287LLU;
	volatile uint64_t t149 = 576169073LLU;

    t149 = ((x609<=(x610%x611))&x612);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x613 = 223;
	uint32_t x614 = UINT32_MAX;
	uint32_t x616 = 5593U;
	volatile uint32_t t150 = 4880536U;

    t150 = ((x613<=(x614%x615))&x616);

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = -1;
	int32_t x618 = -15;
	int64_t x619 = 181879093LL;
	volatile int32_t x620 = 281946893;

    t151 = ((x617<=(x618%x619))&x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = -1038569615633LL;
	int32_t x623 = INT32_MAX;
	int16_t x624 = INT16_MAX;
	int32_t t152 = 1523152;

    t152 = ((x621<=(x622%x623))&x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = 22212U;
	int16_t x626 = INT16_MIN;
	volatile uint8_t x627 = UINT8_MAX;
	int64_t x628 = -1LL;
	volatile int64_t t153 = 857023LL;

    t153 = ((x625<=(x626%x627))&x628);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x629 = 28379LLU;
	volatile uint32_t x630 = 57983U;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t154 = -3;

    t154 = ((x629<=(x630%x631))&x632);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x633 = UINT64_MAX;
	volatile int64_t x635 = INT64_MIN;
	static volatile int64_t x636 = 885670832664LL;

    t155 = ((x633<=(x634%x635))&x636);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x637 = INT64_MIN;
	volatile uint8_t x638 = 0U;
	uint8_t x639 = 124U;
	int32_t x640 = INT32_MIN;

    t156 = ((x637<=(x638%x639))&x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x641 = -14LL;
	int32_t x643 = INT32_MIN;
	static int16_t x644 = INT16_MIN;

    t157 = ((x641<=(x642%x643))&x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x645 = INT64_MAX;
	uint32_t x646 = UINT32_MAX;
	volatile int16_t x647 = 38;
	int32_t t158 = 1;

    t158 = ((x645<=(x646%x647))&x648);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x649 = 20686U;
	volatile int32_t x650 = INT32_MIN;
	static volatile int32_t x651 = -1;
	uint64_t t159 = 649LLU;

    t159 = ((x649<=(x650%x651))&x652);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x654 = -1LL;
	int16_t x655 = INT16_MAX;

    t160 = ((x653<=(x654%x655))&x656);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x658 = 59;
	int32_t x659 = INT32_MAX;
	volatile int8_t x660 = 1;
	int32_t t161 = -7;

    t161 = ((x657<=(x658%x659))&x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x662 = INT16_MIN;
	int32_t x663 = -1;
	int32_t x664 = 840819;
	volatile int32_t t162 = 1;

    t162 = ((x661<=(x662%x663))&x664);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x665 = INT8_MAX;
	volatile int8_t x666 = 1;
	static uint64_t x667 = 10047307LLU;
	static int64_t x668 = INT64_MAX;
	int64_t t163 = 247057184466667290LL;

    t163 = ((x665<=(x666%x667))&x668);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int16_t x670 = INT16_MAX;
	uint32_t x671 = 2U;
	int8_t x672 = INT8_MIN;
	static int32_t t164 = -1925;

    t164 = ((x669<=(x670%x671))&x672);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x673 = 335200297110170LL;
	uint32_t x674 = 2U;
	uint16_t x675 = UINT16_MAX;
	volatile int32_t x676 = 8101;
	int32_t t165 = 1389;

    t165 = ((x673<=(x674%x675))&x676);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x677 = 1671548LL;
	volatile int16_t x678 = -1;
	int32_t x679 = -1;
	uint16_t x680 = 20U;
	static volatile int32_t t166 = 5;

    t166 = ((x677<=(x678%x679))&x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x681 = -726;
	volatile uint16_t x682 = UINT16_MAX;
	int16_t x684 = INT16_MIN;
	static volatile int32_t t167 = 124;

    t167 = ((x681<=(x682%x683))&x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x685 = -379393427073LL;
	int64_t x686 = INT64_MIN;
	int16_t x687 = INT16_MIN;
	int32_t t168 = -12;

    t168 = ((x685<=(x686%x687))&x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x689 = INT32_MAX;
	int64_t x690 = 641220535735LL;
	int64_t x691 = -6LL;
	int16_t x692 = INT16_MAX;
	int32_t t169 = -6;

    t169 = ((x689<=(x690%x691))&x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x693 = -1;
	volatile int8_t x695 = -1;
	uint16_t x696 = 5853U;

    t170 = ((x693<=(x694%x695))&x696);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x697 = -1;
	int32_t x699 = -1;
	volatile uint16_t x700 = UINT16_MAX;
	volatile int32_t t171 = -931021;

    t171 = ((x697<=(x698%x699))&x700);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x701 = -1;
	volatile int32_t x703 = -1;
	int32_t x704 = -1;
	static volatile int32_t t172 = 82962;

    t172 = ((x701<=(x702%x703))&x704);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x705 = -1332;
	int32_t x706 = 5179;
	int64_t x707 = INT64_MIN;
	int8_t x708 = -1;

    t173 = ((x705<=(x706%x707))&x708);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x709 = INT32_MAX;
	volatile int16_t x710 = INT16_MIN;
	int32_t x711 = INT32_MIN;
	static int16_t x712 = INT16_MIN;

    t174 = ((x709<=(x710%x711))&x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x713 = INT16_MIN;
	static uint64_t x714 = 114758708LLU;
	uint64_t x716 = 28207182982256LLU;
	uint64_t t175 = 1532642LLU;

    t175 = ((x713<=(x714%x715))&x716);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = INT64_MIN;
	int64_t x719 = INT64_MIN;
	static int16_t x720 = 6;

    t176 = ((x717<=(x718%x719))&x720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x721 = 169040819128285504LLU;
	volatile int8_t x722 = -1;
	uint16_t x723 = UINT16_MAX;
	static uint64_t x724 = UINT64_MAX;
	uint64_t t177 = 106459LLU;

    t177 = ((x721<=(x722%x723))&x724);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = 275;
	uint16_t x726 = 9927U;
	volatile int64_t x727 = INT64_MIN;
	int64_t x728 = INT64_MIN;
	int64_t t178 = 26368673LL;

    t178 = ((x725<=(x726%x727))&x728);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x730 = 35927573745LL;
	volatile int16_t x731 = INT16_MIN;
	uint32_t t179 = 13U;

    t179 = ((x729<=(x730%x731))&x732);

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x733 = -1;
	int8_t x734 = -1;
	int16_t x736 = INT16_MIN;
	volatile int32_t t180 = 167088213;

    t180 = ((x733<=(x734%x735))&x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = 127141LL;
	volatile int16_t x738 = -1;
	int8_t x739 = INT8_MIN;
	static uint32_t x740 = 91332011U;
	static uint32_t t181 = 48U;

    t181 = ((x737<=(x738%x739))&x740);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x741 = 58769LLU;
	int64_t x742 = -1LL;

    t182 = ((x741<=(x742%x743))&x744);

    if (t182 != 1U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	uint32_t x747 = 1757U;
	uint8_t x748 = 39U;
	volatile int32_t t183 = 706;

    t183 = ((x745<=(x746%x747))&x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x749 = INT64_MAX;
	int8_t x751 = -8;
	static int8_t x752 = 1;
	int32_t t184 = 36;

    t184 = ((x749<=(x750%x751))&x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x753 = -134;
	static int8_t x754 = 1;
	static int32_t x755 = INT32_MAX;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t185 = 1585;

    t185 = ((x753<=(x754%x755))&x756);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x758 = UINT32_MAX;
	uint8_t x759 = 26U;
	uint8_t x760 = 42U;
	int32_t t186 = -49250;

    t186 = ((x757<=(x758%x759))&x760);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x761 = -3769LL;
	int32_t x762 = -1;
	volatile int64_t x763 = INT64_MAX;
	volatile int32_t x764 = -1;
	volatile int32_t t187 = 1987468;

    t187 = ((x761<=(x762%x763))&x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x765 = -1;
	int32_t x766 = 325;
	volatile uint8_t x767 = 1U;
	int16_t x768 = INT16_MIN;
	int32_t t188 = -3118794;

    t188 = ((x765<=(x766%x767))&x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x769 = INT16_MIN;
	static int16_t x770 = INT16_MIN;
	int32_t x771 = -39;
	volatile int32_t t189 = -327072;

    t189 = ((x769<=(x770%x771))&x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x773 = 4762056365995LLU;
	uint64_t x774 = UINT64_MAX;
	static int32_t x775 = INT32_MIN;
	int32_t x776 = -1;
	volatile int32_t t190 = 595371813;

    t190 = ((x773<=(x774%x775))&x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x778 = -1;
	int32_t x779 = -183;
	static uint32_t x780 = 41214632U;
	uint32_t t191 = 709292U;

    t191 = ((x777<=(x778%x779))&x780);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x782 = 173U;
	int32_t x784 = -1;
	int32_t t192 = 4;

    t192 = ((x781<=(x782%x783))&x784);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x785 = 2731045413LLU;
	int16_t x787 = INT16_MIN;
	int8_t x788 = INT8_MIN;

    t193 = ((x785<=(x786%x787))&x788);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	volatile int8_t x790 = -1;
	int16_t x791 = INT16_MAX;
	uint8_t x792 = 61U;
	volatile int32_t t194 = 85961;

    t194 = ((x789<=(x790%x791))&x792);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x794 = INT64_MIN;
	volatile int16_t x795 = INT16_MIN;
	int64_t x796 = 3784115958938394LL;
	static volatile int64_t t195 = -4387130319LL;

    t195 = ((x793<=(x794%x795))&x796);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x797 = 30U;
	uint32_t x799 = UINT32_MAX;
	int8_t x800 = -15;
	volatile int32_t t196 = -2137;

    t196 = ((x797<=(x798%x799))&x800);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x801 = -1;
	int8_t x802 = -1;
	int64_t x803 = 4251040LL;
	uint8_t x804 = 16U;
	volatile int32_t t197 = -108;

    t197 = ((x801<=(x802%x803))&x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MAX;
	uint32_t x807 = 3U;
	static volatile int32_t t198 = 12086;

    t198 = ((x805<=(x806%x807))&x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x809 = 29;
	uint32_t x810 = UINT32_MAX;
	int8_t x811 = 30;
	uint16_t x812 = UINT16_MAX;
	volatile int32_t t199 = 4358296;

    t199 = ((x809<=(x810%x811))&x812);

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

