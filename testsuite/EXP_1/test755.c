
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

int16_t x6 = INT16_MIN;
uint32_t x9 = UINT32_MAX;
int16_t x16 = INT16_MIN;
uint32_t x27 = UINT32_MAX;
volatile uint32_t t6 = 13U;
int16_t x32 = INT16_MIN;
int32_t x40 = INT32_MIN;
int16_t x41 = INT16_MIN;
volatile int64_t x42 = 13354LL;
static int64_t x47 = INT64_MIN;
uint64_t x53 = 27416023LLU;
static volatile uint64_t x55 = 75LLU;
int16_t x57 = -1;
volatile uint16_t x58 = UINT16_MAX;
static volatile uint32_t x60 = 12823U;
static volatile int8_t x61 = INT8_MAX;
uint8_t x65 = 1U;
static uint8_t x69 = UINT8_MAX;
uint32_t t17 = 1115728501U;
uint32_t x75 = 92U;
uint64_t t20 = 43866474826199LLU;
static volatile int16_t x93 = INT16_MIN;
uint32_t x98 = 3U;
uint8_t x106 = UINT8_MAX;
int64_t x108 = INT64_MIN;
static int64_t x113 = 22852138LL;
int8_t x116 = -1;
int32_t x118 = 12394780;
uint32_t x122 = 697U;
static int32_t x124 = INT32_MIN;
volatile uint32_t t29 = 14744U;
static int8_t x125 = 24;
volatile uint64_t t31 = 541213LLU;
volatile int8_t x134 = -11;
uint16_t x141 = UINT16_MAX;
uint8_t x147 = 27U;
int64_t t37 = 1LL;
volatile int16_t x161 = -1;
volatile uint64_t t39 = UINT64_MAX;
volatile int64_t t40 = 4108793807833LL;
static uint32_t x172 = 30U;
static uint8_t x178 = 7U;
uint32_t x193 = 0U;
int32_t x195 = INT32_MAX;
static int16_t x196 = 334;
uint32_t t47 = 1313806244U;
static uint8_t x199 = UINT8_MAX;
uint32_t x200 = 246309702U;
uint8_t x209 = 50U;
volatile uint8_t x218 = 30U;
uint8_t x220 = 12U;
volatile uint64_t x227 = UINT64_MAX;
volatile uint64_t t55 = 112939887LLU;
int8_t x230 = INT8_MIN;
int32_t t56 = 1713;
int8_t x235 = INT8_MIN;
int16_t x236 = INT16_MIN;
uint64_t x241 = UINT64_MAX;
static volatile int8_t x242 = INT8_MIN;
static volatile uint32_t t60 = 30119265U;
int8_t x250 = -29;
uint16_t x252 = 1929U;
uint32_t x253 = 324257975U;
static volatile int64_t x255 = INT64_MIN;
int64_t x258 = INT64_MIN;
int8_t x274 = INT8_MIN;
uint32_t x280 = UINT32_MAX;
uint32_t x283 = 0U;
uint8_t x284 = UINT8_MAX;
int64_t x287 = -109194073460518LL;
uint64_t x289 = UINT64_MAX;
volatile int32_t x290 = 26877724;
volatile uint64_t t71 = UINT64_MAX;
uint64_t x298 = 215120041531LLU;
volatile uint32_t t76 = 8591024U;
uint64_t x314 = 4LLU;
int64_t x321 = INT64_MAX;
int64_t x323 = INT64_MIN;
static int64_t x330 = INT64_MAX;
static int64_t x333 = 11975LL;
static volatile int64_t t84 = 31277123388LL;
volatile uint64_t t86 = 93171790350263LLU;
volatile int8_t x360 = INT8_MIN;
int64_t x366 = INT64_MIN;
uint16_t x369 = 0U;
volatile int8_t x374 = INT8_MIN;
int32_t x375 = -1;
uint8_t x379 = 46U;
int16_t x380 = 107;
int16_t x387 = -1;
volatile uint32_t t97 = 100857U;
volatile int32_t x404 = INT32_MAX;
int8_t x405 = INT8_MIN;
int32_t x406 = INT32_MAX;
int32_t x409 = -95055747;
int16_t x410 = -1;
volatile int32_t t100 = -84930527;
static int64_t x415 = INT64_MIN;
int32_t x417 = INT32_MIN;
int16_t x418 = 3;
int16_t x420 = INT16_MIN;
volatile int64_t t103 = 194LL;
int16_t x427 = INT16_MIN;
static int64_t x430 = INT64_MAX;
int16_t x437 = INT16_MAX;
uint8_t x442 = 9U;
static uint16_t x444 = UINT16_MAX;
volatile int32_t t110 = -288346;
int16_t x455 = -1;
uint32_t x463 = UINT32_MAX;
int32_t x467 = -6674;
volatile uint32_t t114 = 0U;
int8_t x471 = INT8_MAX;
int32_t x474 = -25;
int64_t x475 = -1LL;
uint32_t t117 = UINT32_MAX;
uint64_t x482 = UINT64_MAX;
int8_t x496 = INT8_MIN;
int32_t x499 = INT32_MAX;
int64_t x503 = INT64_MIN;
uint8_t x510 = 31U;
volatile int8_t x511 = INT8_MIN;
static int8_t x524 = INT8_MAX;
static int32_t x533 = INT32_MIN;
int32_t x536 = 94;
static int64_t t128 = -3353852414685LL;
int64_t x539 = 509LL;
uint64_t t129 = 4LLU;
static int16_t x542 = INT16_MIN;
uint32_t t131 = 98670U;
static int16_t x556 = 228;
int16_t x565 = 21;
uint64_t x567 = 1LLU;
static int16_t x568 = INT16_MIN;
int16_t x570 = -713;
uint16_t x572 = UINT16_MAX;
volatile int32_t t137 = -124;
int32_t x573 = -1726032;
volatile uint64_t x576 = UINT64_MAX;
volatile uint64_t t138 = UINT64_MAX;
uint8_t x582 = UINT8_MAX;
static volatile int32_t t140 = -206;
static uint64_t x585 = 5LLU;
static uint8_t x598 = UINT8_MAX;
volatile int64_t x599 = 5631594LL;
int32_t x603 = 3;
int8_t x605 = INT8_MIN;
int8_t x613 = INT8_MAX;
int64_t x616 = INT64_MAX;
volatile int64_t t147 = INT64_MAX;
int64_t x618 = INT64_MAX;
int16_t x620 = INT16_MIN;
int8_t x626 = INT8_MAX;
static int32_t x636 = INT32_MIN;
volatile int8_t x641 = INT8_MAX;
static int64_t x646 = -1LL;
volatile int64_t x647 = INT64_MIN;
int32_t x649 = -35227208;
volatile int32_t x652 = 182;
volatile uint16_t x657 = UINT16_MAX;
static int8_t x665 = INT8_MIN;
volatile int64_t t161 = 114815502644586LL;
volatile int32_t x677 = 2311255;
uint64_t t165 = 152079LLU;
volatile uint64_t t166 = 1548414937362LLU;
static volatile uint32_t x697 = 2U;
int8_t x698 = INT8_MIN;
volatile uint16_t x700 = 114U;
uint32_t x702 = 1U;
int8_t x704 = -27;
uint32_t t169 = 41904U;
static int64_t x706 = INT64_MIN;
volatile uint64_t x707 = 73432395434998LLU;
int32_t x708 = 1601855;
volatile uint8_t x711 = 0U;
volatile uint64_t t172 = 271780LLU;
static int8_t x718 = 5;
int64_t x720 = 1402697302296956544LL;
uint8_t x721 = 88U;
volatile int16_t x724 = -176;
static volatile int32_t t174 = -2238;
uint16_t x725 = 1825U;
int32_t x726 = -274201546;
volatile int32_t t175 = -546696;
volatile uint64_t t176 = 0LLU;
static int64_t x736 = -1LL;
static int64_t x737 = INT64_MIN;
int64_t t178 = 199399213114883359LL;
int16_t x745 = -1;
int8_t x747 = 3;
static int16_t x750 = 1131;
static uint64_t t183 = 15324766777LLU;
static int16_t x763 = -3;
int16_t x766 = -1;
int16_t x768 = INT16_MAX;
static uint64_t x772 = 8144243391688LLU;
int8_t x782 = -1;
int64_t x783 = INT64_MIN;
int16_t x789 = INT16_MAX;
int16_t x791 = -1;
int16_t x793 = INT16_MIN;
int8_t x799 = INT8_MAX;
int8_t x805 = INT8_MAX;
uint8_t x808 = 114U;
static uint64_t x809 = UINT64_MAX;
uint64_t x815 = 189046LLU;
int32_t x827 = INT32_MIN;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MAX;
	int32_t x3 = -1;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -3747;

    t0 = (((x1/x2)&x3)|x4);

    if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static int64_t x7 = 7131974LL;
	static int8_t x8 = -1;
	static volatile int64_t t1 = -136682511LL;

    t1 = (((x5/x6)&x7)|x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x10 = 7873U;
	int8_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	uint32_t t2 = 6U;

    t2 = (((x9/x10)&x11)|x12);

    if (t2 != 4294967291U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = 1;
	int16_t x15 = INT16_MAX;
	volatile uint32_t t3 = UINT32_MAX;

    t3 = (((x13/x14)&x15)|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -63600;

    t4 = (((x17/x18)&x19)|x20);

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	volatile int32_t x24 = INT32_MIN;
	static int64_t t5 = 53589097253433665LL;

    t5 = (((x21/x22)&x23)|x24);

    if (t5 != -2147483648LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = 11U;
	static volatile uint8_t x26 = UINT8_MAX;
	volatile int8_t x28 = INT8_MAX;

    t6 = (((x25/x26)&x27)|x28);

    if (t6 != 127U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MAX;
	uint64_t t7 = 1585LLU;

    t7 = (((x29/x30)&x31)|x32);

    if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 3907910U;
	static uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = -82658161543LL;
	uint16_t x36 = 8U;
	volatile uint64_t t8 = 143803490LLU;

    t8 = (((x33/x34)&x35)|x36);

    if (t8 != 8LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	int32_t x38 = 2425;
	static volatile int16_t x39 = INT16_MIN;
	volatile int32_t t9 = -2400;

    t9 = (((x37/x38)&x39)|x40);

    if (t9 != -2146598912) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x43 = -1;
	int64_t x44 = INT64_MAX;
	volatile int64_t t10 = 20897260LL;

    t10 = (((x41/x42)&x43)|x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -741924LL;
	static int64_t x46 = 4632703LL;
	static int16_t x48 = INT16_MIN;
	volatile int64_t t11 = 67LL;

    t11 = (((x45/x46)&x47)|x48);

    if (t11 != -32768LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	int16_t x50 = -4;
	int8_t x51 = INT8_MIN;
	volatile int8_t x52 = 9;
	int64_t t12 = -327206102LL;

    t12 = (((x49/x50)&x51)|x52);

    if (t12 != -2305843009213693943LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x54 = INT8_MIN;
	int16_t x56 = 9169;
	volatile uint64_t t13 = 445827201125822LLU;

    t13 = (((x53/x54)&x55)|x56);

    if (t13 != 9169LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x59 = 116U;
	static uint32_t t14 = 24627563U;

    t14 = (((x57/x58)&x59)|x60);

    if (t14 != 12823U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = INT8_MAX;
	int32_t x63 = -534571577;
	int64_t x64 = INT64_MAX;
	volatile int64_t t15 = INT64_MAX;

    t15 = (((x61/x62)&x63)|x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 10U;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = -8;
	static volatile uint32_t t16 = 0U;

    t16 = (((x65/x66)&x67)|x68);

    if (t16 != 4294967288U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = 5U;
	uint32_t x71 = 3U;
	static volatile uint16_t x72 = UINT16_MAX;

    t17 = (((x69/x70)&x71)|x72);

    if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	uint64_t x76 = 6141126762LLU;
	volatile uint64_t t18 = 825511158767309LLU;

    t18 = (((x73/x74)&x75)|x76);

    if (t18 != 6141126762LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint16_t x77 = 1U;
	int8_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -395112;

    t19 = (((x77/x78)&x79)|x80);

    if (t19 != -32513) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = -1LL;
	uint16_t x82 = UINT16_MAX;
	volatile uint64_t x83 = 14903LLU;
	volatile uint8_t x84 = 60U;

    t20 = (((x81/x82)&x83)|x84);

    if (t20 != 60LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	volatile uint8_t x86 = UINT8_MAX;
	static uint32_t x87 = 944370U;
	volatile int8_t x88 = -1;
	uint32_t t21 = UINT32_MAX;

    t21 = (((x85/x86)&x87)|x88);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 229403U;
	static int32_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MIN;
	volatile uint32_t t22 = 599947U;

    t22 = (((x89/x90)&x91)|x92);

    if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = -1;
	int64_t x95 = -14794264833LL;
	static volatile int32_t x96 = INT32_MIN;
	int64_t t23 = 50545693161592632LL;

    t23 = (((x93/x94)&x95)|x96);

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 36181LLU;
	volatile int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;
	volatile uint64_t t24 = 1LLU;

    t24 = (((x97/x98)&x99)|x100);

    if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = 27;
	uint32_t x107 = 350511U;
	int64_t t25 = INT64_MIN;

    t25 = (((x105/x106)&x107)|x108);

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = 1;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 1U;
	int64_t x112 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

    t26 = (((x109/x110)&x111)|x112);

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x114 = 265U;
	int16_t x115 = -77;
	int64_t t27 = 2683501745040313863LL;

    t27 = (((x113/x114)&x115)|x116);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = 929LL;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 58;
	int64_t t28 = 259882631LL;

    t28 = (((x117/x118)&x119)|x120);

    if (t28 != 58LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 44U;
	static int16_t x123 = INT16_MIN;

    t29 = (((x121/x122)&x123)|x124);

    if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	volatile int64_t t30 = 17973974752613LL;

    t30 = (((x125/x126)&x127)|x128);

    if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x129 = INT8_MAX;
	static uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 0U;

    t31 = (((x129/x130)&x131)|x132);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 1556U;
	volatile uint64_t x135 = 274070964507LLU;
	static volatile int8_t x136 = 1;
	uint64_t t32 = 21722504LLU;

    t32 = (((x133/x134)&x135)|x136);

    if (t32 != 274070964499LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	static int16_t x138 = -82;
	int32_t x139 = 4;
	uint8_t x140 = 3U;
	int32_t t33 = 78;

    t33 = (((x137/x138)&x139)|x140);

    if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x142 = UINT16_MAX;
	static uint8_t x143 = 0U;
	static int64_t x144 = -333193460105175138LL;
	int64_t t34 = -1269976791LL;

    t34 = (((x141/x142)&x143)|x144);

    if (t34 != -333193460105175138LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 4292U;
	static uint32_t x146 = 168U;
	static int16_t x148 = INT16_MIN;
	volatile uint32_t t35 = 9627957U;

    t35 = (((x145/x146)&x147)|x148);

    if (t35 != 4294934553U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -154283LL;
	uint16_t x150 = 165U;
	int64_t x151 = -3711777180LL;
	int16_t x152 = INT16_MAX;
	int64_t t36 = 66228808776LL;

    t36 = (((x149/x150)&x151)|x152);

    if (t36 != -3711762433LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -199589990575LL;
	static uint16_t x154 = UINT16_MAX;
	int32_t x155 = 5610748;
	int16_t x156 = -2;

    t37 = (((x153/x154)&x155)|x156);

    if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MAX;
	uint16_t x158 = 15556U;
	volatile uint32_t x159 = UINT32_MAX;
	int8_t x160 = 1;
	volatile uint32_t t38 = 5527U;

    t38 = (((x157/x158)&x159)|x160);

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x162 = 78U;
	uint64_t x163 = 75184678012LLU;
	volatile int32_t x164 = -1;

    t39 = (((x161/x162)&x163)|x164);

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	static int8_t x166 = INT8_MAX;
	int16_t x167 = -8;
	static int16_t x168 = INT16_MAX;

    t40 = (((x165/x166)&x167)|x168);

    if (t40 != -72624976668131329LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 2U;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 1;
	uint32_t t41 = 54047802U;

    t41 = (((x169/x170)&x171)|x172);

    if (t41 != 30U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -12859;
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = -1;
	uint8_t x176 = 0U;
	static int32_t t42 = -14;

    t42 = (((x173/x174)&x175)|x176);

    if (t42 != -50) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -61899038748470594LL;
	int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MIN;
	int64_t t43 = -13184444044LL;

    t43 = (((x177/x178)&x179)|x180);

    if (t43 != -9223372036854751716LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x181 = INT32_MIN;
	static int8_t x182 = INT8_MAX;
	uint64_t x183 = UINT64_MAX;
	static uint8_t x184 = 9U;
	volatile uint64_t t44 = 30612618182343789LLU;

    t44 = (((x181/x182)&x183)|x184);

    if (t44 != 18446744073692642297LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	int8_t x186 = INT8_MAX;
	int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	int32_t t45 = -521;

    t45 = (((x185/x186)&x187)|x188);

    if (t45 != -1032) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MAX;
	static volatile uint8_t x190 = 3U;
	int32_t x191 = -1935;
	int8_t x192 = INT8_MIN;
	static int32_t t46 = 319384;

    t46 = (((x189/x190)&x191)|x192);

    if (t46 != -96) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = -46741732;

    t47 = (((x193/x194)&x195)|x196);

    if (t47 != 334U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MAX;
	volatile int64_t t48 = -92769154961LL;

    t48 = (((x197/x198)&x199)|x200);

    if (t48 != 246309886LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MAX;
	volatile int64_t x202 = -1LL;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile int64_t t49 = -224232145824533017LL;

    t49 = (((x201/x202)&x203)|x204);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int8_t x205 = INT8_MAX;
	static int8_t x206 = INT8_MIN;
	int16_t x207 = -89;
	static volatile uint8_t x208 = 12U;
	volatile int32_t t50 = 157;

    t50 = (((x205/x206)&x207)|x208);

    if (t50 != 12) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x210 = INT8_MAX;
	static int8_t x211 = -3;
	int8_t x212 = INT8_MAX;
	volatile int32_t t51 = -23427859;

    t51 = (((x209/x210)&x211)|x212);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = -1;
	static uint64_t x214 = UINT64_MAX;
	static uint8_t x215 = 28U;
	volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t52 = 346046213LLU;

    t52 = (((x213/x214)&x215)|x216);

    if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = -1;
	int8_t x219 = -1;
	volatile int32_t t53 = 121279724;

    t53 = (((x217/x218)&x219)|x220);

    if (t53 != 12) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = -1;
	volatile uint64_t x222 = 8863823675LLU;
	uint8_t x223 = 0U;
	int16_t x224 = INT16_MAX;
	uint64_t t54 = 183968095267LLU;

    t54 = (((x221/x222)&x223)|x224);

    if (t54 != 32767LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = 35;
	int32_t x226 = INT32_MIN;
	int64_t x228 = -1640875065LL;

    t55 = (((x225/x226)&x227)|x228);

    if (t55 != 18446744072068676551LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = UINT8_MAX;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MIN;

    t56 = (((x229/x230)&x231)|x232);

    if (t56 != -2147450881) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x233 = 54U;
	volatile int32_t x234 = -2271;
	volatile int32_t t57 = 332;

    t57 = (((x233/x234)&x235)|x236);

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = 12U;
	static uint16_t x238 = 1U;
	static volatile int64_t x239 = 197631LL;
	uint16_t x240 = 1U;
	int64_t t58 = 12283605713280LL;

    t58 = (((x237/x238)&x239)|x240);

    if (t58 != 13LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x243 = -20;
	static uint16_t x244 = 1254U;
	uint64_t t59 = 382808737822LLU;

    t59 = (((x241/x242)&x243)|x244);

    if (t59 != 1254LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 74U;
	int16_t x246 = -1052;
	static uint16_t x247 = 543U;
	volatile uint16_t x248 = UINT16_MAX;

    t60 = (((x245/x246)&x247)|x248);

    if (t60 != 65535U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = 1;
	int16_t x251 = INT16_MIN;
	int32_t t61 = 88;

    t61 = (((x249/x250)&x251)|x252);

    if (t61 != 1929) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x254 = 8;
	int32_t x256 = 5986980;
	int64_t t62 = -2334306415LL;

    t62 = (((x253/x254)&x255)|x256);

    if (t62 != 5986980LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x257 = UINT8_MAX;
	volatile int32_t x259 = -1;
	uint64_t x260 = 15521191626565LLU;
	volatile uint64_t t63 = 780152655212257LLU;

    t63 = (((x257/x258)&x259)|x260);

    if (t63 != 15521191626565LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;
	static volatile int32_t t64 = -3394;

    t64 = (((x261/x262)&x263)|x264);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x265 = INT64_MIN;
	volatile uint64_t x266 = 36634LLU;
	int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t65 = 66469LLU;

    t65 = (((x265/x266)&x267)|x268);

    if (t65 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x269 = 20;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = 121U;
	uint64_t x272 = 7216592LLU;
	uint64_t t66 = 48662937493487LLU;

    t66 = (((x269/x270)&x271)|x272);

    if (t66 != 7216592LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x273 = 63;
	uint32_t x275 = 445U;
	int64_t x276 = INT64_MAX;
	int64_t t67 = INT64_MAX;

    t67 = (((x273/x274)&x275)|x276);

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = INT8_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	static int8_t x279 = -1;
	volatile uint64_t t68 = 1298102448LLU;

    t68 = (((x277/x278)&x279)|x280);

    if (t68 != 4294967295LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MIN;
	volatile uint32_t t69 = 55U;

    t69 = (((x281/x282)&x283)|x284);

    if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x285 = -483413732;
	int64_t x286 = -1LL;
	uint64_t x288 = UINT64_MAX;
	uint64_t t70 = UINT64_MAX;

    t70 = (((x285/x286)&x287)|x288);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x291 = 0;
	int8_t x292 = -1;

    t71 = (((x289/x290)&x291)|x292);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x293 = 13U;
	static int8_t x294 = -7;
	static int32_t x295 = -1;
	int32_t x296 = INT32_MIN;
	volatile int32_t t72 = -2606667;

    t72 = (((x293/x294)&x295)|x296);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x297 = UINT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MIN;
	uint64_t t73 = 641LLU;

    t73 = (((x297/x298)&x299)|x300);

    if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x301 = 744339470318LLU;
	uint8_t x302 = UINT8_MAX;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	static uint64_t t74 = UINT64_MAX;

    t74 = (((x301/x302)&x303)|x304);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x305 = 336U;
	static uint64_t x306 = UINT64_MAX;
	int8_t x307 = INT8_MAX;
	static volatile int32_t x308 = INT32_MIN;
	static volatile uint64_t t75 = 2863459LLU;

    t75 = (((x305/x306)&x307)|x308);

    if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x309 = INT8_MIN;
	uint32_t x310 = 1870533075U;
	int32_t x311 = INT32_MAX;
	int8_t x312 = -60;

    t76 = (((x309/x310)&x311)|x312);

    if (t76 != 4294967238U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = INT64_MAX;
	uint32_t x315 = 2763U;
	int8_t x316 = -1;
	uint64_t t77 = UINT64_MAX;

    t77 = (((x313/x314)&x315)|x316);

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = -1LL;
	int64_t x318 = -1LL;
	int8_t x319 = -11;
	int16_t x320 = INT16_MIN;
	static int64_t t78 = 1236612309787LL;

    t78 = (((x317/x318)&x319)|x320);

    if (t78 != -32767LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x322 = 7216;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t79 = UINT64_MAX;

    t79 = (((x321/x322)&x323)|x324);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = -30288812864593606LL;
	volatile int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = 0U;
	volatile int64_t t80 = -17591437514765549LL;

    t80 = (((x325/x326)&x327)|x328);

    if (t80 != 924341212800LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x329 = INT32_MIN;
	int32_t x331 = -164;
	volatile int32_t x332 = -1;
	int64_t t81 = -1LL;

    t81 = (((x329/x330)&x331)|x332);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x334 = 27299617U;
	uint32_t x335 = 6324189U;
	uint64_t x336 = 22LLU;
	uint64_t t82 = 318002LLU;

    t82 = (((x333/x334)&x335)|x336);

    if (t82 != 22LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x337 = 1U;
	uint32_t x338 = 5475024U;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = 17U;
	volatile uint32_t t83 = 4202U;

    t83 = (((x337/x338)&x339)|x340);

    if (t83 != 17U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x341 = INT64_MAX;
	int16_t x342 = 1750;
	uint32_t x343 = UINT32_MAX;
	static int64_t x344 = -252084223239386LL;

    t84 = (((x341/x342)&x343)|x344);

    if (t84 != -252082040873041LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = UINT64_MAX;
	int64_t x346 = 1853598177LL;
	volatile uint64_t x347 = UINT64_MAX;
	int16_t x348 = 1;
	volatile uint64_t t85 = 30448736609835LLU;

    t85 = (((x345/x346)&x347)|x348);

    if (t85 != 9951857043LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MAX;
	int8_t x351 = 7;
	uint64_t x352 = 689297LLU;

    t86 = (((x349/x350)&x351)|x352);

    if (t86 != 689297LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x353 = -1;
	int32_t x354 = -1;
	static uint16_t x355 = 47U;
	int32_t x356 = INT32_MIN;
	int32_t t87 = -3;

    t87 = (((x353/x354)&x355)|x356);

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = -1;
	static int16_t x358 = -96;
	int8_t x359 = INT8_MIN;
	volatile int32_t t88 = -2190985;

    t88 = (((x357/x358)&x359)|x360);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x365 = 28819U;
	static int32_t x367 = INT32_MIN;
	static volatile int32_t x368 = 192569;
	static int64_t t89 = -790171340275019339LL;

    t89 = (((x365/x366)&x367)|x368);

    if (t89 != 192569LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x370 = 59;
	static volatile int64_t x371 = 2042311307LL;
	int64_t x372 = 5603LL;
	volatile int64_t t90 = -3170529477036287194LL;

    t90 = (((x369/x370)&x371)|x372);

    if (t90 != 5603LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = -5604;
	int64_t x376 = INT64_MIN;
	int64_t t91 = -9785387836LL;

    t91 = (((x373/x374)&x375)|x376);

    if (t91 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = -2005095437803988LL;
	volatile uint64_t x378 = 12754869309LLU;
	uint64_t t92 = 7LLU;

    t92 = (((x377/x378)&x379)|x380);

    if (t92 != 107LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x381 = UINT8_MAX;
	static uint64_t x382 = 3694LLU;
	volatile int8_t x383 = INT8_MIN;
	volatile int64_t x384 = -1LL;
	static volatile uint64_t t93 = UINT64_MAX;

    t93 = (((x381/x382)&x383)|x384);

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x385 = 9U;
	volatile uint8_t x386 = 3U;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t94 = 221321;

    t94 = (((x385/x386)&x387)|x388);

    if (t94 != -125) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	uint16_t x390 = 576U;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 580947839U;
	int64_t t95 = 91209280822LL;

    t95 = (((x389/x390)&x391)|x392);

    if (t95 != -9223372036273827969LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MAX;
	uint32_t x394 = 97U;
	static int64_t x395 = -5415417LL;
	volatile uint16_t x396 = 18U;
	int64_t t96 = -82034998775LL;

    t96 = (((x393/x394)&x395)|x396);

    if (t96 != 19LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x397 = UINT32_MAX;
	static int16_t x398 = -1;
	static uint16_t x399 = 4816U;
	int16_t x400 = INT16_MIN;

    t97 = (((x397/x398)&x399)|x400);

    if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x401 = INT64_MIN;
	int32_t x402 = INT32_MAX;
	volatile int64_t x403 = -226242437449926532LL;
	volatile int64_t t98 = -578788LL;

    t98 = (((x401/x402)&x403)|x404);

    if (t98 != -226242440313438209LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x407 = INT16_MIN;
	int16_t x408 = 254;
	volatile int32_t t99 = 216541;

    t99 = (((x405/x406)&x407)|x408);

    if (t99 != 254) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x411 = -333;
	int32_t x412 = 1;

    t100 = (((x409/x410)&x411)|x412);

    if (t100 != 95055491) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MIN;
	static uint64_t x416 = UINT64_MAX;
	static uint64_t t101 = UINT64_MAX;

    t101 = (((x413/x414)&x415)|x416);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x419 = -1LL;
	volatile int64_t t102 = -19446572079LL;

    t102 = (((x417/x418)&x419)|x420);

    if (t102 != -10922LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = 438;
	int16_t x422 = 1;
	int64_t x423 = INT64_MIN;
	int8_t x424 = 0;

    t103 = (((x421/x422)&x423)|x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -1;
	int8_t x426 = INT8_MIN;
	volatile int32_t x428 = -1;
	int32_t t104 = -163101;

    t104 = (((x425/x426)&x427)|x428);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x429 = 5U;
	uint8_t x431 = 71U;
	volatile int64_t x432 = INT64_MAX;
	int64_t t105 = INT64_MAX;

    t105 = (((x429/x430)&x431)|x432);

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x433 = 126U;
	int32_t x434 = INT32_MAX;
	int16_t x435 = 7;
	int64_t x436 = -1503404LL;
	int64_t t106 = -785LL;

    t106 = (((x433/x434)&x435)|x436);

    if (t106 != -1503404LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x438 = UINT32_MAX;
	int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	volatile uint32_t t107 = 2U;

    t107 = (((x437/x438)&x439)|x440);

    if (t107 != 4294934528U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = -1;
	int8_t x443 = INT8_MIN;
	static volatile int32_t t108 = 385;

    t108 = (((x441/x442)&x443)|x444);

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = -1;
	uint32_t x446 = 85U;
	volatile int32_t x447 = -1;
	int32_t x448 = INT32_MIN;
	volatile uint32_t t109 = 1602968281U;

    t109 = (((x445/x446)&x447)|x448);

    if (t109 != 2198012675U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = -6989;
	int8_t x450 = INT8_MAX;
	int8_t x451 = INT8_MIN;
	int32_t x452 = 110458;

    t110 = (((x449/x450)&x451)|x452);

    if (t110 != -6) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = 1142;
	int8_t x454 = INT8_MIN;
	uint8_t x456 = 2U;
	volatile int32_t t111 = -9560;

    t111 = (((x453/x454)&x455)|x456);

    if (t111 != -6) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x457 = 8841U;
	int32_t x458 = INT32_MAX;
	int64_t x459 = -1LL;
	static uint64_t x460 = UINT64_MAX;
	volatile uint64_t t112 = UINT64_MAX;

    t112 = (((x457/x458)&x459)|x460);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x461 = 1;
	static int32_t x462 = INT32_MAX;
	int16_t x464 = INT16_MIN;
	volatile uint32_t t113 = 126271295U;

    t113 = (((x461/x462)&x463)|x464);

    if (t113 != 4294934528U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x465 = 61598254U;
	uint8_t x466 = UINT8_MAX;
	int32_t x468 = 62624;

    t114 = (((x465/x466)&x467)|x468);

    if (t114 != 259496U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = INT8_MIN;
	uint16_t x472 = 11U;
	int32_t t115 = 3;

    t115 = (((x469/x470)&x471)|x472);

    if (t115 != 11) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x473 = 0;
	int64_t x476 = INT64_MIN;
	int64_t t116 = INT64_MIN;

    t116 = (((x473/x474)&x475)|x476);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x477 = -1;
	int32_t x478 = -172;
	uint32_t x479 = 34738U;
	int8_t x480 = -1;

    t117 = (((x477/x478)&x479)|x480);

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x481 = 5U;
	int32_t x483 = 378;
	uint32_t x484 = 117803085U;
	uint64_t t118 = 30395093774678564LLU;

    t118 = (((x481/x482)&x483)|x484);

    if (t118 != 117803085LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x485 = 864938U;
	int16_t x486 = INT16_MIN;
	static volatile int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MIN;
	volatile uint32_t t119 = 752U;

    t119 = (((x485/x486)&x487)|x488);

    if (t119 != 4294934528U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x489 = 1569125202U;
	int64_t x490 = INT64_MAX;
	int32_t x491 = INT32_MIN;
	static uint64_t x492 = 134693531767200299LLU;
	uint64_t t120 = 34LLU;

    t120 = (((x489/x490)&x491)|x492);

    if (t120 != 134693531767200299LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x493 = -613126812LL;
	static int16_t x494 = INT16_MAX;
	uint32_t x495 = 14443267U;
	static int64_t t121 = -1030772LL;

    t121 = (((x493/x494)&x495)|x496);

    if (t121 != -127LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x497 = INT16_MIN;
	volatile uint16_t x498 = UINT16_MAX;
	int64_t x500 = -41830425339051LL;
	volatile int64_t t122 = -12170540LL;

    t122 = (((x497/x498)&x499)|x500);

    if (t122 != -41830425339051LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x501 = UINT64_MAX;
	static uint8_t x502 = 1U;
	int64_t x504 = INT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = (((x501/x502)&x503)|x504);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = -23;
	static int16_t x506 = INT16_MAX;
	int64_t x507 = 17470051602LL;
	volatile int8_t x508 = INT8_MIN;
	volatile int64_t t124 = -1219797924865934LL;

    t124 = (((x505/x506)&x507)|x508);

    if (t124 != -128LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x509 = 1934807LLU;
	int8_t x512 = -3;
	uint64_t t125 = 21998281LLU;

    t125 = (((x509/x510)&x511)|x512);

    if (t125 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = -1;
	int32_t x522 = -5;
	static uint32_t x523 = 84U;
	uint32_t t126 = 2554U;

    t126 = (((x521/x522)&x523)|x524);

    if (t126 != 127U) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x529 = INT8_MIN;
	uint16_t x530 = UINT16_MAX;
	int32_t x531 = INT32_MIN;
	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (((x529/x530)&x531)|x532);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x534 = INT64_MAX;
	volatile int8_t x535 = 7;

    t128 = (((x533/x534)&x535)|x536);

    if (t128 != 94LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x537 = 15U;
	uint32_t x538 = UINT32_MAX;
	uint64_t x540 = 831868742356LLU;

    t129 = (((x537/x538)&x539)|x540);

    if (t129 != 831868742356LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x541 = 8163U;
	uint64_t x543 = 432LLU;
	int64_t x544 = INT64_MIN;
	uint64_t t130 = 138821855695LLU;

    t130 = (((x541/x542)&x543)|x544);

    if (t130 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = INT8_MAX;
	volatile int16_t x546 = -1;
	int32_t x547 = -1;
	uint32_t x548 = 1932U;

    t131 = (((x545/x546)&x547)|x548);

    if (t131 != 4294967181U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = UINT8_MAX;
	uint64_t x550 = UINT64_MAX;
	uint64_t x551 = UINT64_MAX;
	uint8_t x552 = 0U;
	uint64_t t132 = 122257394LLU;

    t132 = (((x549/x550)&x551)|x552);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile int16_t x554 = -1;
	uint16_t x555 = 221U;
	int32_t t133 = 11591037;

    t133 = (((x553/x554)&x555)|x556);

    if (t133 != 229) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x557 = 0U;
	volatile int32_t x558 = -1;
	int32_t x559 = -232;
	static volatile uint8_t x560 = 7U;
	volatile int32_t t134 = -556678758;

    t134 = (((x557/x558)&x559)|x560);

    if (t134 != 7) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MIN;
	static int16_t x562 = INT16_MIN;
	int8_t x563 = -1;
	int16_t x564 = 5155;
	int32_t t135 = -554;

    t135 = (((x561/x562)&x563)|x564);

    if (t135 != 5155) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x566 = UINT16_MAX;
	static uint64_t t136 = 1514257007385LLU;

    t136 = (((x565/x566)&x567)|x568);

    if (t136 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x569 = 43U;
	int16_t x571 = INT16_MIN;

    t137 = (((x569/x570)&x571)|x572);

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x574 = UINT16_MAX;
	volatile int16_t x575 = INT16_MIN;

    t138 = (((x573/x574)&x575)|x576);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x577 = UINT32_MAX;
	static volatile int16_t x578 = INT16_MIN;
	int32_t x579 = -1434637;
	static int64_t x580 = INT64_MIN;
	int64_t t139 = -31726LL;

    t139 = (((x577/x578)&x579)|x580);

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x583 = 1;
	static volatile uint16_t x584 = 0U;

    t140 = (((x581/x582)&x583)|x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x586 = 48;
	uint32_t x587 = UINT32_MAX;
	int16_t x588 = INT16_MIN;
	uint64_t t141 = 1404481965LLU;

    t141 = (((x585/x586)&x587)|x588);

    if (t141 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x589 = INT8_MIN;
	int8_t x590 = 12;
	int8_t x591 = 1;
	uint64_t x592 = 9392720LLU;
	volatile uint64_t t142 = 1622923888645747637LLU;

    t142 = (((x589/x590)&x591)|x592);

    if (t142 != 9392720LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x597 = 2750261749775LL;
	uint64_t x600 = 10163134LLU;
	uint64_t t143 = 494595LLU;

    t143 = (((x597/x598)&x599)|x600);

    if (t143 != 14367678LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x601 = INT64_MAX;
	static volatile uint64_t x602 = UINT64_MAX;
	int8_t x604 = INT8_MAX;
	volatile uint64_t t144 = 36128464621364LLU;

    t144 = (((x601/x602)&x603)|x604);

    if (t144 != 127LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x606 = UINT16_MAX;
	static int32_t x607 = INT32_MAX;
	static int64_t x608 = -11744LL;
	volatile int64_t t145 = 1797574523LL;

    t145 = (((x605/x606)&x607)|x608);

    if (t145 != -11744LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x609 = 55747576;
	uint16_t x610 = 6490U;
	uint64_t x611 = UINT64_MAX;
	int16_t x612 = -746;
	static uint64_t t146 = 4508454908LLU;

    t146 = (((x609/x610)&x611)|x612);

    if (t146 != 18446744073709551007LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x614 = UINT16_MAX;
	int16_t x615 = INT16_MAX;

    t147 = (((x613/x614)&x615)|x616);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = INT16_MIN;
	volatile int16_t x619 = INT16_MIN;
	volatile int64_t t148 = -121469293LL;

    t148 = (((x617/x618)&x619)|x620);

    if (t148 != -32768LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x621 = 72U;
	static int16_t x622 = 1;
	static uint8_t x623 = UINT8_MAX;
	int16_t x624 = -1;
	int32_t t149 = 3265062;

    t149 = (((x621/x622)&x623)|x624);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x625 = INT16_MAX;
	uint8_t x627 = UINT8_MAX;
	static volatile uint8_t x628 = UINT8_MAX;
	static int32_t t150 = 4181064;

    t150 = (((x625/x626)&x627)|x628);

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x629 = UINT16_MAX;
	int8_t x630 = 22;
	int32_t x631 = -130387;
	static uint64_t x632 = 128965368854783959LLU;
	uint64_t t151 = 5262939539LLU;

    t151 = (((x629/x630)&x631)|x632);

    if (t151 != 128965368854783991LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x633 = -1LL;
	uint64_t x634 = 40LLU;
	int16_t x635 = INT16_MAX;
	uint64_t t152 = 1892972282785669157LLU;

    t152 = (((x633/x634)&x635)|x636);

    if (t152 != 18446744071562094182LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x637 = INT16_MIN;
	uint8_t x638 = UINT8_MAX;
	int8_t x639 = -22;
	int8_t x640 = 1;
	int32_t t153 = -556684038;

    t153 = (((x637/x638)&x639)|x640);

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x642 = 4653886U;
	int16_t x643 = INT16_MAX;
	int16_t x644 = INT16_MIN;
	static volatile uint32_t t154 = 7577U;

    t154 = (((x641/x642)&x643)|x644);

    if (t154 != 4294934528U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = INT32_MIN;
	volatile int64_t x648 = INT64_MIN;
	int64_t t155 = INT64_MIN;

    t155 = (((x645/x646)&x647)|x648);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x650 = 4U;
	uint16_t x651 = 7U;
	volatile int32_t t156 = 46063158;

    t156 = (((x649/x650)&x651)|x652);

    if (t156 != 182) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x653 = UINT64_MAX;
	static int16_t x654 = -123;
	static int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;
	volatile uint64_t t157 = 77375380878602LLU;

    t157 = (((x653/x654)&x655)|x656);

    if (t157 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x658 = 105U;
	volatile int64_t x659 = INT64_MIN;
	int64_t x660 = INT64_MAX;
	int64_t t158 = INT64_MAX;

    t158 = (((x657/x658)&x659)|x660);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x661 = INT16_MAX;
	int8_t x662 = -1;
	volatile int64_t x663 = INT64_MAX;
	int32_t x664 = -1;
	volatile int64_t t159 = -24914LL;

    t159 = (((x661/x662)&x663)|x664);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x666 = UINT32_MAX;
	uint64_t x667 = 5LLU;
	int64_t x668 = INT64_MIN;
	static volatile uint64_t t160 = 9468434573709LLU;

    t160 = (((x665/x666)&x667)|x668);

    if (t160 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x669 = INT16_MIN;
	int64_t x670 = INT64_MIN;
	uint8_t x671 = 1U;
	int8_t x672 = INT8_MIN;

    t161 = (((x669/x670)&x671)|x672);

    if (t161 != -128LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x673 = 176219427LLU;
	int64_t x674 = -1LL;
	int16_t x675 = INT16_MAX;
	int16_t x676 = 0;
	uint64_t t162 = 5568317348498516LLU;

    t162 = (((x673/x674)&x675)|x676);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x678 = 3600632U;
	volatile int32_t x679 = -20758;
	static int8_t x680 = 3;
	static volatile uint32_t t163 = 5343297U;

    t163 = (((x677/x678)&x679)|x680);

    if (t163 != 3U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x681 = 79U;
	int16_t x682 = -1;
	int16_t x683 = -1;
	int64_t x684 = -16483059217173164LL;
	volatile int64_t t164 = -30LL;

    t164 = (((x681/x682)&x683)|x684);

    if (t164 != -11LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = 1338013LLU;
	int8_t x686 = -1;
	int32_t x687 = -14956;
	uint16_t x688 = 109U;

    t165 = (((x685/x686)&x687)|x688);

    if (t165 != 109LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x689 = INT8_MIN;
	uint64_t x690 = UINT64_MAX;
	uint32_t x691 = 3001U;
	static int8_t x692 = 7;

    t166 = (((x689/x690)&x691)|x692);

    if (t166 != 7LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x693 = INT64_MIN;
	volatile uint32_t x694 = UINT32_MAX;
	volatile uint8_t x695 = UINT8_MAX;
	volatile int16_t x696 = 26;
	static int64_t t167 = -639LL;

    t167 = (((x693/x694)&x695)|x696);

    if (t167 != 26LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x699 = 0;
	static volatile uint32_t t168 = 1U;

    t168 = (((x697/x698)&x699)|x700);

    if (t168 != 114U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = INT32_MIN;
	volatile int32_t x703 = 50;

    t169 = (((x701/x702)&x703)|x704);

    if (t169 != 4294967269U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = INT64_MAX;
	uint64_t t170 = 16755065257724151LLU;

    t170 = (((x705/x706)&x707)|x708);

    if (t170 != 1601855LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x709 = UINT64_MAX;
	int64_t x710 = -532442446899717LL;
	int32_t x712 = INT32_MAX;
	uint64_t t171 = 4LLU;

    t171 = (((x709/x710)&x711)|x712);

    if (t171 != 2147483647LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = -96LL;
	uint64_t x714 = 99844972329074LLU;
	int16_t x715 = INT16_MIN;
	int16_t x716 = INT16_MIN;

    t172 = (((x713/x714)&x715)|x716);

    if (t172 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x717 = -90;
	int16_t x719 = INT16_MIN;
	int64_t t173 = 236LL;

    t173 = (((x717/x718)&x719)|x720);

    if (t173 != -29056LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x722 = 31U;
	volatile int8_t x723 = INT8_MIN;

    t174 = (((x721/x722)&x723)|x724);

    if (t174 != -176) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x727 = 26;
	volatile uint8_t x728 = 0U;

    t175 = (((x725/x726)&x727)|x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = -1;
	int16_t x730 = INT16_MIN;
	static uint64_t x731 = 3230647801598428841LLU;
	int8_t x732 = 9;

    t176 = (((x729/x730)&x731)|x732);

    if (t176 != 9LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x733 = INT32_MIN;
	static uint64_t x734 = 1856143507793LLU;
	int64_t x735 = INT64_MIN;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = (((x733/x734)&x735)|x736);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x738 = 1;
	volatile int64_t x739 = 1LL;
	uint8_t x740 = 1U;

    t178 = (((x737/x738)&x739)|x740);

    if (t178 != 1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x741 = INT8_MIN;
	int64_t x742 = -3869733928102168LL;
	volatile int16_t x743 = 1015;
	volatile int16_t x744 = 1;
	volatile int64_t t179 = -1298966848LL;

    t179 = (((x741/x742)&x743)|x744);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x746 = 28;
	static int8_t x748 = INT8_MAX;
	static volatile int32_t t180 = 9827670;

    t180 = (((x745/x746)&x747)|x748);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = -1;
	int32_t x751 = -229927;
	int64_t x752 = INT64_MIN;
	volatile int64_t t181 = INT64_MIN;

    t181 = (((x749/x750)&x751)|x752);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x753 = INT16_MAX;
	int8_t x754 = INT8_MIN;
	int16_t x755 = 2339;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t182 = -2090532;

    t182 = (((x753/x754)&x755)|x756);

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x757 = INT32_MIN;
	uint64_t x758 = UINT64_MAX;
	uint16_t x759 = 3677U;
	int32_t x760 = 772075;

    t183 = (((x757/x758)&x759)|x760);

    if (t183 != 772075LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x762 = INT8_MIN;
	int32_t x764 = INT32_MAX;
	volatile int32_t t184 = -353477416;

    t184 = (((x761/x762)&x763)|x764);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x765 = INT16_MIN;
	int16_t x767 = 1;
	int32_t t185 = 19;

    t185 = (((x765/x766)&x767)|x768);

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x769 = UINT16_MAX;
	int16_t x770 = -31;
	volatile uint16_t x771 = 2U;
	volatile uint64_t t186 = 21373458150LLU;

    t186 = (((x769/x770)&x771)|x772);

    if (t186 != 8144243391690LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x773 = INT64_MIN;
	static volatile uint32_t x774 = 15U;
	uint64_t x775 = UINT64_MAX;
	static volatile uint64_t x776 = UINT64_MAX;
	static volatile uint64_t t187 = UINT64_MAX;

    t187 = (((x773/x774)&x775)|x776);

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x777 = 0;
	int64_t x778 = INT64_MIN;
	volatile int16_t x779 = INT16_MAX;
	int32_t x780 = -1;
	volatile int64_t t188 = -1275042415909LL;

    t188 = (((x777/x778)&x779)|x780);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x781 = 67U;
	uint64_t x784 = 4755722577711262LLU;
	uint64_t t189 = 230LLU;

    t189 = (((x781/x782)&x783)|x784);

    if (t189 != 9228127759432487070LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	uint8_t x787 = 107U;
	static int8_t x788 = -1;
	static int32_t t190 = -25580538;

    t190 = (((x785/x786)&x787)|x788);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x790 = 194636960LLU;
	int64_t x792 = 58376470174485LL;
	volatile uint64_t t191 = 29LLU;

    t191 = (((x789/x790)&x791)|x792);

    if (t191 != 58376470174485LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x794 = 1;
	int32_t x795 = -1;
	int16_t x796 = INT16_MIN;
	int32_t t192 = -52831;

    t192 = (((x793/x794)&x795)|x796);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x797 = -7416474668LL;
	int32_t x798 = INT32_MIN;
	int32_t x800 = INT32_MIN;
	int64_t t193 = 56152LL;

    t193 = (((x797/x798)&x799)|x800);

    if (t193 != -2147483645LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x802 = INT64_MIN;
	int16_t x803 = -1;
	int32_t x804 = -1;
	int64_t t194 = -3517605790LL;

    t194 = (((x801/x802)&x803)|x804);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x806 = INT8_MAX;
	int32_t x807 = -1177088;
	int32_t t195 = 136838;

    t195 = (((x805/x806)&x807)|x808);

    if (t195 != 114) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MAX;
	uint32_t x812 = 21U;
	static uint64_t t196 = 6722845583162LLU;

    t196 = (((x809/x810)&x811)|x812);

    if (t196 != 21LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x813 = 78623160848148LLU;
	volatile uint8_t x814 = UINT8_MAX;
	int8_t x816 = -26;
	static uint64_t t197 = 3LLU;

    t197 = (((x813/x814)&x815)|x816);

    if (t197 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x821 = 1079698688LL;
	int8_t x822 = INT8_MIN;
	uint8_t x823 = 29U;
	uint16_t x824 = UINT16_MAX;
	volatile int64_t t198 = 18754934010554144LL;

    t198 = (((x821/x822)&x823)|x824);

    if (t198 != 65535LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x826 = INT32_MIN;
	int8_t x828 = -1;
	static int32_t t199 = -1;

    t199 = (((x825/x826)&x827)|x828);

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

