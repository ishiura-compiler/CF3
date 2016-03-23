
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

uint16_t x2 = 5965U;
uint16_t x4 = UINT16_MAX;
volatile uint64_t x11 = UINT64_MAX;
int32_t x16 = 28;
static int16_t x21 = INT16_MIN;
int8_t x25 = INT8_MIN;
volatile int64_t x39 = -1LL;
uint16_t x41 = 3U;
int8_t x42 = 29;
uint16_t x45 = 1400U;
volatile int32_t x58 = INT32_MAX;
uint64_t x62 = UINT64_MAX;
uint16_t x63 = 10U;
volatile int8_t x70 = -1;
static int16_t x75 = INT16_MIN;
uint32_t x79 = 61U;
volatile uint8_t x83 = 11U;
int8_t x84 = INT8_MIN;
int64_t x88 = -3209760239853304LL;
volatile int64_t x91 = INT64_MIN;
int64_t t22 = -16308LL;
volatile int8_t x97 = -1;
uint16_t x108 = UINT16_MAX;
int32_t t25 = -5083;
volatile uint16_t x116 = UINT16_MAX;
volatile int32_t t27 = 623349394;
volatile int64_t x117 = 58729LL;
static int16_t x127 = 3860;
static volatile int64_t t31 = -17043549343191549LL;
static uint8_t x137 = UINT8_MAX;
uint64_t x140 = 48507979LLU;
uint8_t x151 = UINT8_MAX;
int16_t x153 = INT16_MIN;
static int16_t x154 = INT16_MIN;
int16_t x156 = INT16_MIN;
int32_t x159 = -1;
uint32_t x162 = 7522262U;
uint64_t x165 = 260848LLU;
uint64_t x173 = 32444314164742874LLU;
int32_t x174 = -1;
int32_t x176 = -409305;
volatile int32_t t42 = -194037942;
int16_t x177 = INT16_MIN;
int64_t t43 = 481739LL;
int64_t x186 = 315899LL;
int32_t x188 = INT32_MAX;
uint64_t x192 = 33321009498574LLU;
uint64_t t46 = 0LLU;
int8_t x198 = -5;
volatile int64_t t48 = -61118475239LL;
int32_t x205 = INT32_MIN;
int32_t t50 = 11;
int64_t x217 = INT64_MIN;
int32_t x219 = 2;
int16_t x221 = -827;
volatile int16_t x228 = -213;
volatile int16_t x229 = INT16_MAX;
int32_t t55 = -197205;
static int16_t x236 = -1;
int32_t t56 = -27287838;
uint64_t x238 = UINT64_MAX;
int16_t x239 = 1;
int8_t x250 = INT8_MIN;
int16_t x259 = INT16_MAX;
static volatile int16_t x260 = INT16_MAX;
volatile int32_t x262 = -1;
int8_t x264 = INT8_MIN;
volatile int8_t x266 = INT8_MAX;
uint32_t x272 = 179386849U;
static volatile int32_t t67 = -1;
uint64_t x284 = 38766665008991277LLU;
volatile int32_t x288 = INT32_MAX;
volatile int64_t t70 = 196128LL;
int32_t t71 = 366142;
static uint8_t x303 = 2U;
uint8_t x304 = 6U;
static int32_t x306 = INT32_MAX;
static int32_t x311 = INT32_MAX;
int8_t x312 = -1;
volatile int8_t x313 = INT8_MAX;
static int32_t t75 = -12600412;
int64_t x319 = INT64_MIN;
int64_t t76 = -417933009LL;
int64_t t77 = 123279591LL;
int16_t x329 = -478;
int32_t x339 = INT32_MIN;
int32_t x350 = -1;
volatile int64_t t85 = -7LL;
int16_t x364 = INT16_MAX;
static int32_t t87 = 879477907;
volatile int8_t x369 = INT8_MIN;
static uint32_t x372 = 512614633U;
volatile uint32_t t91 = 5777U;
volatile int64_t t92 = 911947288663LL;
volatile int8_t x385 = -1;
uint8_t x387 = 1U;
static int8_t x388 = 25;
int16_t x392 = INT16_MIN;
int64_t t99 = -63348LL;
int16_t x419 = -1;
volatile uint16_t x422 = UINT16_MAX;
uint32_t x428 = UINT32_MAX;
int32_t x430 = INT32_MAX;
uint32_t t104 = 196725089U;
uint16_t x434 = 11U;
int64_t x436 = -1LL;
uint32_t x444 = 1U;
uint64_t t108 = 70958286827595510LLU;
int8_t x455 = INT8_MAX;
int32_t t110 = 23;
uint8_t x458 = UINT8_MAX;
volatile uint64_t x459 = 32LLU;
volatile int32_t t113 = -445464321;
volatile int64_t x469 = 107058456LL;
int8_t x486 = INT8_MIN;
int32_t x497 = -1;
int32_t x500 = INT32_MIN;
volatile uint64_t t121 = 94744436970LLU;
int32_t t122 = 341;
int8_t x509 = -4;
int8_t x517 = 1;
volatile int32_t t125 = 333;
int16_t x521 = INT16_MIN;
volatile int32_t x523 = -1;
int32_t x538 = INT32_MAX;
static int32_t x544 = INT32_MIN;
uint8_t x551 = 28U;
static uint16_t x553 = UINT16_MAX;
int32_t x554 = -1046164714;
int8_t x556 = INT8_MIN;
int32_t x566 = INT32_MIN;
static uint8_t x568 = 1U;
volatile int32_t x571 = 85516;
uint32_t t138 = 1U;
uint32_t x579 = UINT32_MAX;
int32_t x580 = -1;
uint16_t x590 = 64U;
int32_t x597 = -1;
volatile int32_t x600 = INT32_MIN;
uint32_t x606 = UINT32_MAX;
uint32_t x611 = 386U;
static volatile uint64_t x612 = 1816LLU;
volatile int16_t x615 = INT16_MIN;
int64_t x618 = -1LL;
static int32_t t150 = 306101;
uint64_t x621 = 2076697433630784756LLU;
int16_t x625 = INT16_MAX;
uint16_t x628 = 1742U;
int32_t t152 = 736157;
int8_t x630 = -1;
int32_t x631 = INT32_MAX;
int16_t x638 = INT16_MIN;
int8_t x639 = -1;
uint32_t t155 = 13112U;
int8_t x645 = 22;
uint8_t x648 = UINT8_MAX;
int8_t x655 = INT8_MIN;
int64_t x657 = 104172263242206109LL;
int32_t t160 = 13821;
int8_t x664 = INT8_MIN;
uint8_t x665 = 2U;
static int8_t x670 = INT8_MIN;
int32_t t163 = -3917695;
uint32_t t164 = 26696U;
int32_t x677 = INT32_MAX;
uint8_t x678 = UINT8_MAX;
uint64_t x682 = UINT64_MAX;
uint32_t x683 = 139U;
int64_t t166 = -15327LL;
volatile int8_t x687 = 1;
uint32_t x692 = 96650357U;
volatile int8_t x693 = INT8_MIN;
volatile int64_t t171 = 32614911LL;
uint16_t x709 = 22194U;
static int8_t x710 = -1;
int8_t x727 = -1;
int32_t x728 = INT32_MAX;
int16_t x729 = -1;
int32_t t177 = 1015882491;
static int16_t x747 = INT16_MAX;
uint64_t x757 = 29LLU;
int16_t x760 = INT16_MIN;
int16_t x761 = 6;
static int16_t x762 = INT16_MIN;
int64_t x768 = INT64_MAX;
volatile int64_t t186 = -42870LL;
int16_t x769 = INT16_MIN;
uint64_t x779 = UINT64_MAX;
int64_t x790 = INT64_MIN;
int8_t x793 = INT8_MAX;
uint16_t x795 = 929U;
int64_t t193 = 698340277LL;
static uint32_t x797 = UINT32_MAX;
int8_t x799 = INT8_MIN;
int16_t x801 = -9111;
volatile int32_t x802 = -1485671;
uint32_t x805 = 1059446U;
uint64_t x807 = 1258697780708493LLU;
static volatile int32_t x809 = INT32_MIN;
static int16_t x815 = INT16_MIN;
static uint8_t x817 = 13U;


void f0(void) {
    	volatile int16_t x1 = -1;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t t0 = 2313;

    t0 = (((x1==x2)/x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 140512689U;
	int16_t x6 = INT16_MAX;
	static int16_t x7 = 1;
	uint32_t x8 = 220164U;
	uint32_t t1 = 491673U;

    t1 = (((x5==x6)/x7)*x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -155;
	int8_t x10 = INT8_MIN;
	uint8_t x12 = 2U;
	uint64_t t2 = 3415807656000487133LLU;

    t2 = (((x9==x10)/x11)*x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 946U;
	int64_t x14 = -1LL;
	uint64_t x15 = 65461081LLU;
	uint64_t t3 = 4101178857LLU;

    t3 = (((x13==x14)/x15)*x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int32_t x18 = 236886196;
	int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;
	static uint64_t t4 = 1011429116857LLU;

    t4 = (((x17==x18)/x19)*x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -1;
	volatile int64_t x23 = -62178145LL;
	int32_t x24 = -1;
	int64_t t5 = -9439004092LL;

    t5 = (((x21==x22)/x23)*x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MAX;
	static int32_t x27 = INT32_MIN;
	volatile int64_t x28 = INT64_MIN;
	static int64_t t6 = -5979915LL;

    t6 = (((x25==x26)/x27)*x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x29 = UINT64_MAX;
	static uint32_t x30 = UINT32_MAX;
	static volatile int16_t x31 = -1;
	static uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 146833930;

    t7 = (((x29==x30)/x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 17138U;
	static volatile int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	static int32_t x36 = 118036;
	volatile int32_t t8 = 30352905;

    t8 = (((x33==x34)/x35)*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	int32_t x38 = -5;
	uint8_t x40 = UINT8_MAX;
	static volatile int64_t t9 = 3281256127LL;

    t9 = (((x37==x38)/x39)*x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x43 = UINT32_MAX;
	int32_t x44 = -4277;
	uint32_t t10 = 5U;

    t10 = (((x41==x42)/x43)*x44);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x46 = -295;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = 540767;
	static int32_t t11 = 361;

    t11 = (((x45==x46)/x47)*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 18381305LL;
	int16_t x50 = -1;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = -1;
	int32_t t12 = 1465108;

    t12 = (((x49==x50)/x51)*x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MIN;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = -1LL;
	uint64_t x56 = 27LLU;
	volatile uint64_t t13 = 3LLU;

    t13 = (((x53==x54)/x55)*x56);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x57 = 21681LLU;
	volatile int8_t x59 = INT8_MIN;
	static uint32_t x60 = 3331710U;
	uint32_t t14 = 1528972478U;

    t14 = (((x57==x58)/x59)*x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t15 = 9U;

    t15 = (((x61==x62)/x63)*x64);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MAX;
	volatile uint16_t x67 = 981U;
	volatile int64_t x68 = 59965841020906LL;
	static int64_t t16 = -11106952733LL;

    t16 = (((x65==x66)/x67)*x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	int16_t x72 = -1;
	int32_t t17 = 1795;

    t17 = (((x69==x70)/x71)*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	static int32_t x76 = INT32_MAX;
	int32_t t18 = 158;

    t18 = (((x73==x74)/x75)*x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x77 = -12;
	int64_t x78 = -1522834LL;
	int64_t x80 = INT64_MAX;
	int64_t t19 = -11198020856768020LL;

    t19 = (((x77==x78)/x79)*x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	volatile int32_t t20 = -345077183;

    t20 = (((x81==x82)/x83)*x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	volatile int64_t t21 = -252490432684253965LL;

    t21 = (((x85==x86)/x87)*x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 6U;
	volatile int8_t x90 = INT8_MIN;
	static uint8_t x92 = 89U;

    t22 = (((x89==x90)/x91)*x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MIN;
	volatile uint64_t x100 = 2LLU;
	uint64_t t23 = 66048590LLU;

    t23 = (((x97==x98)/x99)*x100);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = 1743;
	static int16_t x102 = -4834;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t24 = 7252860014013447LLU;

    t24 = (((x101==x102)/x103)*x104);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x105 = UINT8_MAX;
	static volatile int32_t x106 = 354148420;
	static int32_t x107 = INT32_MIN;

    t25 = (((x105==x106)/x107)*x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = 6;
	int64_t x110 = -825716942242867LL;
	int16_t x111 = 1782;
	static uint8_t x112 = 2U;
	int32_t t26 = -526858334;

    t26 = (((x109==x110)/x111)*x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x114 = 0;
	static int32_t x115 = INT32_MIN;

    t27 = (((x113==x114)/x115)*x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x118 = INT64_MIN;
	static volatile int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t28 = -289471260530LL;

    t28 = (((x117==x118)/x119)*x120);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = 11;
	static int32_t x122 = INT32_MIN;
	static uint16_t x123 = 5071U;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = 1;

    t29 = (((x121==x122)/x123)*x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = 1;
	volatile int32_t x126 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	static int32_t t30 = 0;

    t30 = (((x125==x126)/x127)*x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = 5521117979682130LLU;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 11565U;
	int64_t x132 = INT64_MAX;

    t31 = (((x129==x130)/x131)*x132);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = UINT16_MAX;
	static volatile int16_t x134 = INT16_MAX;
	int32_t x135 = -41261;
	static uint64_t x136 = UINT64_MAX;
	uint64_t t32 = 306LLU;

    t32 = (((x133==x134)/x135)*x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x138 = 51U;
	volatile uint64_t x139 = 890169214LLU;
	volatile uint64_t t33 = 346794319088860LLU;

    t33 = (((x137==x138)/x139)*x140);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x141 = 13227127929825090LLU;
	static uint64_t x142 = 103294227LLU;
	int32_t x143 = INT32_MAX;
	uint32_t x144 = UINT32_MAX;
	volatile uint32_t t34 = 0U;

    t34 = (((x141==x142)/x143)*x144);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = -25768073;
	static volatile int8_t x147 = -1;
	int64_t x148 = 15306LL;
	int64_t t35 = 78270284091LL;

    t35 = (((x145==x146)/x147)*x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = -1013607785LL;
	volatile int8_t x152 = -1;
	int32_t t36 = 9460;

    t36 = (((x149==x150)/x151)*x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x155 = 15U;
	volatile int32_t t37 = -840042;

    t37 = (((x153==x154)/x155)*x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = UINT32_MAX;
	static int32_t x158 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t38 = -14866952;

    t38 = (((x157==x158)/x159)*x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = 69;
	uint32_t x163 = UINT32_MAX;
	int64_t x164 = INT64_MIN;
	volatile int64_t t39 = 5161LL;

    t39 = (((x161==x162)/x163)*x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x166 = 0;
	static int64_t x167 = INT64_MIN;
	volatile int64_t x168 = INT64_MIN;
	static volatile int64_t t40 = -129086003LL;

    t40 = (((x165==x166)/x167)*x168);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x169 = -9;
	volatile uint8_t x170 = 1U;
	uint16_t x171 = 13939U;
	int8_t x172 = INT8_MIN;
	static int32_t t41 = 651;

    t41 = (((x169==x170)/x171)*x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x175 = -1;

    t42 = (((x173==x174)/x175)*x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x178 = INT8_MAX;
	int64_t x179 = -107660217253LL;
	int8_t x180 = 4;

    t43 = (((x177==x178)/x179)*x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -6;
	int16_t x182 = INT16_MAX;
	static volatile int8_t x183 = -12;
	int16_t x184 = -1;
	volatile int32_t t44 = 118088555;

    t44 = (((x181==x182)/x183)*x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x185 = -25;
	uint32_t x187 = 7U;
	volatile uint32_t t45 = 185692359U;

    t45 = (((x185==x186)/x187)*x188);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = INT8_MIN;
	uint16_t x190 = 0U;
	static int8_t x191 = -1;

    t46 = (((x189==x190)/x191)*x192);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 106U;
	uint16_t x194 = 342U;
	int32_t x195 = 1403;
	int16_t x196 = INT16_MIN;
	int32_t t47 = -1105;

    t47 = (((x193==x194)/x195)*x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = 393208381187LL;
	static int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MIN;

    t48 = (((x197==x198)/x199)*x200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = -1;
	static volatile uint32_t x202 = UINT32_MAX;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	static int64_t t49 = -547548454381LL;

    t49 = (((x201==x202)/x203)*x204);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x206 = -1;
	volatile int8_t x207 = -3;
	volatile int8_t x208 = -15;

    t50 = (((x205==x206)/x207)*x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x213 = 46U;
	static uint64_t x214 = UINT64_MAX;
	int32_t x215 = INT32_MIN;
	volatile int64_t x216 = INT64_MIN;
	int64_t t51 = -14028LL;

    t51 = (((x213==x214)/x215)*x216);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x218 = INT64_MAX;
	uint32_t x220 = 33362U;
	volatile uint32_t t52 = 28U;

    t52 = (((x217==x218)/x219)*x220);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x222 = 916U;
	static int8_t x223 = INT8_MAX;
	int16_t x224 = INT16_MAX;
	int32_t t53 = -2;

    t53 = (((x221==x222)/x223)*x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -1;
	uint64_t x226 = 4075LLU;
	volatile uint32_t x227 = 4771932U;
	uint32_t t54 = 3722616U;

    t54 = (((x225==x226)/x227)*x228);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

    t55 = (((x229==x230)/x231)*x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x233 = INT8_MAX;
	static int32_t x234 = INT32_MAX;
	static uint16_t x235 = 312U;

    t56 = (((x233==x234)/x235)*x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x237 = -1660525;
	int8_t x240 = -43;
	int32_t t57 = 8;

    t57 = (((x237==x238)/x239)*x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	static int8_t x243 = -1;
	static uint32_t x244 = 14U;
	volatile uint32_t t58 = 3047U;

    t58 = (((x241==x242)/x243)*x244);

    if (t58 != 4294967282U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x245 = INT16_MIN;
	volatile int32_t x246 = -522732;
	static volatile int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	int64_t t59 = 49906235LL;

    t59 = (((x245==x246)/x247)*x248);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x249 = 2107477657902062423LLU;
	static volatile int16_t x251 = -1605;
	static volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t60 = -11197;

    t60 = (((x249==x250)/x251)*x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = INT8_MIN;
	static int32_t x254 = INT32_MIN;
	static int8_t x255 = 3;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t61 = 31406;

    t61 = (((x253==x254)/x255)*x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x257 = 67719738U;
	int16_t x258 = INT16_MIN;
	int32_t t62 = -87111;

    t62 = (((x257==x258)/x259)*x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = 0;
	int64_t x263 = 1341482247LL;
	volatile int64_t t63 = 1121630600500573493LL;

    t63 = (((x261==x262)/x263)*x264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = -1569LL;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	int64_t t64 = 16740449022754LL;

    t64 = (((x265==x266)/x267)*x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = 1;
	volatile uint16_t x270 = 3069U;
	int64_t x271 = INT64_MAX;
	int64_t t65 = 1LL;

    t65 = (((x269==x270)/x271)*x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	volatile int64_t x274 = INT64_MIN;
	int64_t x275 = 5082LL;
	static int64_t x276 = -38149149218996200LL;
	volatile int64_t t66 = 0LL;

    t66 = (((x273==x274)/x275)*x276);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x277 = INT8_MAX;
	int16_t x278 = -5069;
	volatile uint8_t x279 = UINT8_MAX;
	uint16_t x280 = 26646U;

    t67 = (((x277==x278)/x279)*x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = 10;
	int64_t x282 = INT64_MIN;
	volatile int16_t x283 = INT16_MIN;
	uint64_t t68 = 230183035LLU;

    t68 = (((x281==x282)/x283)*x284);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x285 = INT8_MIN;
	int16_t x286 = 330;
	int16_t x287 = INT16_MIN;
	volatile int32_t t69 = -54748376;

    t69 = (((x285==x286)/x287)*x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x289 = 42U;
	int16_t x290 = INT16_MIN;
	volatile int64_t x291 = 299271087729144902LL;
	uint16_t x292 = UINT16_MAX;

    t70 = (((x289==x290)/x291)*x292);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x297 = INT64_MAX;
	uint64_t x298 = 51974434977LLU;
	uint16_t x299 = 1U;
	uint8_t x300 = UINT8_MAX;

    t71 = (((x297==x298)/x299)*x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = 1938;
	static int64_t x302 = INT64_MIN;
	volatile int32_t t72 = 538976917;

    t72 = (((x301==x302)/x303)*x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x305 = 2;
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MAX;
	int64_t t73 = 138164LL;

    t73 = (((x305==x306)/x307)*x308);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x309 = 60413714862802LLU;
	int32_t x310 = 69;
	static volatile int32_t t74 = -49117657;

    t74 = (((x309==x310)/x311)*x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x314 = INT64_MIN;
	int8_t x315 = 62;
	static int16_t x316 = 16;

    t75 = (((x313==x314)/x315)*x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x317 = UINT64_MAX;
	static volatile int64_t x318 = -50LL;
	int32_t x320 = -1;

    t76 = (((x317==x318)/x319)*x320);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = 1148;
	int64_t x322 = 95666286297444LL;
	int16_t x323 = INT16_MIN;
	int64_t x324 = 13960197522144380LL;

    t77 = (((x321==x322)/x323)*x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = 103U;
	volatile uint16_t x328 = 27U;
	uint32_t t78 = 10983U;

    t78 = (((x325==x326)/x327)*x328);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x330 = 548101298675897135LLU;
	uint32_t x331 = 2U;
	uint16_t x332 = UINT16_MAX;
	uint32_t t79 = 1079848980U;

    t79 = (((x329==x330)/x331)*x332);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = INT64_MIN;
	volatile int64_t x334 = INT64_MIN;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t80 = 23929;

    t80 = (((x333==x334)/x335)*x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x337 = 134U;
	uint64_t x338 = 0LLU;
	static int64_t x340 = -206689315265LL;
	volatile int64_t t81 = -228LL;

    t81 = (((x337==x338)/x339)*x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = 2;
	static uint64_t x342 = 3544616LLU;
	uint8_t x343 = UINT8_MAX;
	static int16_t x344 = INT16_MIN;
	int32_t t82 = -14568;

    t82 = (((x341==x342)/x343)*x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = 1130U;
	static volatile int16_t x346 = -3982;
	int8_t x347 = -25;
	int64_t x348 = -1LL;
	int64_t t83 = 2LL;

    t83 = (((x345==x346)/x347)*x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = INT64_MIN;
	int8_t x351 = -3;
	static volatile int16_t x352 = INT16_MIN;
	int32_t t84 = 0;

    t84 = (((x349==x350)/x351)*x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x354 = -43008LL;
	int64_t x355 = -2040LL;
	static int64_t x356 = INT64_MIN;

    t85 = (((x353==x354)/x355)*x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = INT8_MAX;
	int32_t x358 = INT32_MAX;
	uint32_t x359 = 41077U;
	int64_t x360 = -1LL;
	static volatile int64_t t86 = 1LL;

    t86 = (((x357==x358)/x359)*x360);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x361 = INT32_MIN;
	int16_t x362 = -54;
	int8_t x363 = INT8_MIN;

    t87 = (((x361==x362)/x363)*x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 0;
	static volatile int16_t x366 = -1687;
	uint16_t x367 = 659U;
	volatile int64_t x368 = 84101109696972154LL;
	volatile int64_t t88 = -232LL;

    t88 = (((x365==x366)/x367)*x368);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x370 = 215U;
	volatile int64_t x371 = -65LL;
	int64_t t89 = 718089LL;

    t89 = (((x369==x370)/x371)*x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x373 = INT32_MIN;
	uint64_t x374 = 175636511LLU;
	volatile int64_t x375 = INT64_MAX;
	static volatile int32_t x376 = INT32_MIN;
	int64_t t90 = 234LL;

    t90 = (((x373==x374)/x375)*x376);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x377 = 0U;
	int64_t x378 = 14815341839514LL;
	uint32_t x379 = UINT32_MAX;
	static volatile uint16_t x380 = 1569U;

    t91 = (((x377==x378)/x379)*x380);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x381 = INT64_MIN;
	uint8_t x382 = 1U;
	int64_t x383 = INT64_MIN;
	volatile uint32_t x384 = UINT32_MAX;

    t92 = (((x381==x382)/x383)*x384);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x386 = 42U;
	int32_t t93 = 519;

    t93 = (((x385==x386)/x387)*x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = UINT32_MAX;
	int32_t x390 = -20122;
	static volatile uint8_t x391 = UINT8_MAX;
	int32_t t94 = -973103240;

    t94 = (((x389==x390)/x391)*x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x393 = -1LL;
	static volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = UINT16_MAX;
	int32_t t95 = 37224318;

    t95 = (((x393==x394)/x395)*x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x397 = 1U;
	static int32_t x398 = 247;
	int64_t x399 = INT64_MIN;
	volatile uint8_t x400 = 15U;
	int64_t t96 = 10787905LL;

    t96 = (((x397==x398)/x399)*x400);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x401 = 3U;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 6U;
	static int32_t x404 = 198706;
	static volatile int32_t t97 = -8016429;

    t97 = (((x401==x402)/x403)*x404);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint64_t x405 = UINT64_MAX;
	static int16_t x406 = -1;
	uint32_t x407 = UINT32_MAX;
	volatile int8_t x408 = INT8_MIN;
	static uint32_t t98 = 14826U;

    t98 = (((x405==x406)/x407)*x408);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x409 = 5;
	static int64_t x410 = -1LL;
	static volatile int32_t x411 = -1;
	static int64_t x412 = INT64_MIN;

    t99 = (((x409==x410)/x411)*x412);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x413 = INT16_MIN;
	static uint64_t x414 = 1838063562LLU;
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = -1;
	static volatile uint64_t t100 = 782LLU;

    t100 = (((x413==x414)/x415)*x416);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	static int64_t x418 = INT64_MAX;
	int64_t x420 = INT64_MAX;
	volatile int64_t t101 = 401534307780217141LL;

    t101 = (((x417==x418)/x419)*x420);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x421 = 0U;
	int64_t x423 = INT64_MIN;
	static volatile int16_t x424 = -1;
	static int64_t t102 = -226220354818LL;

    t102 = (((x421==x422)/x423)*x424);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x425 = 0U;
	int64_t x426 = -1LL;
	static int16_t x427 = -9353;
	uint32_t t103 = 1U;

    t103 = (((x425==x426)/x427)*x428);

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = -1;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = -22;

    t104 = (((x429==x430)/x431)*x432);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	volatile int32_t x435 = INT32_MAX;
	int64_t t105 = 1LL;

    t105 = (((x433==x434)/x435)*x436);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = 4;
	static int32_t x438 = 2647;
	uint32_t x439 = UINT32_MAX;
	static int8_t x440 = 62;
	volatile uint32_t t106 = 6234290U;

    t106 = (((x437==x438)/x439)*x440);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = 3535U;
	static uint16_t x442 = UINT16_MAX;
	int8_t x443 = -1;
	static uint32_t t107 = 4U;

    t107 = (((x441==x442)/x443)*x444);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x445 = UINT64_MAX;
	static int8_t x446 = -1;
	static int64_t x447 = INT64_MIN;
	uint64_t x448 = UINT64_MAX;

    t108 = (((x445==x446)/x447)*x448);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x449 = INT16_MAX;
	int32_t x450 = -15;
	int64_t x451 = -1LL;
	uint32_t x452 = 42687263U;
	volatile int64_t t109 = 62046000863LL;

    t109 = (((x449==x450)/x451)*x452);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x453 = INT64_MAX;
	static int64_t x454 = INT64_MAX;
	static volatile int32_t x456 = INT32_MAX;

    t110 = (((x453==x454)/x455)*x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x457 = 12U;
	int64_t x460 = INT64_MIN;
	volatile uint64_t t111 = 1441004670LLU;

    t111 = (((x457==x458)/x459)*x460);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x461 = -1;
	volatile int32_t x462 = 0;
	int64_t x463 = INT64_MIN;
	static uint16_t x464 = 0U;
	static volatile int64_t t112 = -1LL;

    t112 = (((x461==x462)/x463)*x464);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x465 = -1;
	int64_t x466 = INT64_MIN;
	static int8_t x467 = INT8_MIN;
	volatile int32_t x468 = -1;

    t113 = (((x465==x466)/x467)*x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x470 = 3U;
	int64_t x471 = 2013069460LL;
	static uint16_t x472 = 1662U;
	volatile int64_t t114 = -25672LL;

    t114 = (((x469==x470)/x471)*x472);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	int8_t x474 = 50;
	int32_t x475 = -1;
	uint16_t x476 = 557U;
	int32_t t115 = 138818;

    t115 = (((x473==x474)/x475)*x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x477 = -6;
	static uint8_t x478 = UINT8_MAX;
	volatile uint16_t x479 = 14228U;
	int16_t x480 = INT16_MIN;
	int32_t t116 = -1841;

    t116 = (((x477==x478)/x479)*x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x481 = -7003;
	int8_t x482 = INT8_MIN;
	volatile int8_t x483 = INT8_MIN;
	static int64_t x484 = INT64_MIN;
	int64_t t117 = 7LL;

    t117 = (((x481==x482)/x483)*x484);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x485 = 3;
	uint8_t x487 = 14U;
	static volatile int32_t x488 = -1;
	static volatile int32_t t118 = -58;

    t118 = (((x485==x486)/x487)*x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x493 = INT64_MIN;
	uint8_t x494 = 1U;
	int16_t x495 = -1;
	int32_t x496 = INT32_MIN;
	volatile int32_t t119 = -3305631;

    t119 = (((x493==x494)/x495)*x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x498 = INT16_MIN;
	volatile int64_t x499 = INT64_MIN;
	int64_t t120 = -51902700659534LL;

    t120 = (((x497==x498)/x499)*x500);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x501 = INT8_MIN;
	int16_t x502 = INT16_MAX;
	uint64_t x503 = 120221LLU;
	int64_t x504 = INT64_MIN;

    t121 = (((x501==x502)/x503)*x504);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	uint16_t x507 = UINT16_MAX;
	uint8_t x508 = 0U;

    t122 = (((x505==x506)/x507)*x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x510 = 1;
	int16_t x511 = -15137;
	int32_t x512 = INT32_MIN;
	volatile int32_t t123 = 0;

    t123 = (((x509==x510)/x511)*x512);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x513 = -14284;
	int8_t x514 = -1;
	int32_t x515 = -277;
	int16_t x516 = INT16_MIN;
	static int32_t t124 = 103;

    t124 = (((x513==x514)/x515)*x516);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x518 = UINT8_MAX;
	int32_t x519 = INT32_MIN;
	uint8_t x520 = 60U;

    t125 = (((x517==x518)/x519)*x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x522 = UINT16_MAX;
	uint16_t x524 = UINT16_MAX;
	int32_t t126 = -690996;

    t126 = (((x521==x522)/x523)*x524);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x525 = -34;
	static int16_t x526 = INT16_MIN;
	static int8_t x527 = -1;
	uint32_t x528 = UINT32_MAX;
	uint32_t t127 = 921965U;

    t127 = (((x525==x526)/x527)*x528);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x529 = 11U;
	volatile uint16_t x530 = 25111U;
	int64_t x531 = INT64_MIN;
	uint32_t x532 = 22937U;
	int64_t t128 = -3323708697LL;

    t128 = (((x529==x530)/x531)*x532);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x533 = INT64_MIN;
	static uint8_t x534 = 1U;
	int64_t x535 = INT64_MAX;
	static int8_t x536 = INT8_MAX;
	static volatile int64_t t129 = 4559872LL;

    t129 = (((x533==x534)/x535)*x536);

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x537 = 1558413000LLU;
	uint16_t x539 = UINT16_MAX;
	static uint32_t x540 = UINT32_MAX;
	volatile uint32_t t130 = 81430186U;

    t130 = (((x537==x538)/x539)*x540);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x541 = 4;
	uint8_t x542 = UINT8_MAX;
	int16_t x543 = INT16_MAX;
	int32_t t131 = -274066228;

    t131 = (((x541==x542)/x543)*x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x545 = 2U;
	volatile int16_t x546 = -1;
	int16_t x547 = -1;
	static uint32_t x548 = 224U;
	uint32_t t132 = 883877U;

    t132 = (((x545==x546)/x547)*x548);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = 34443;
	int16_t x550 = INT16_MIN;
	static int64_t x552 = 740411861877LL;
	volatile int64_t t133 = -30745529LL;

    t133 = (((x549==x550)/x551)*x552);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x555 = -1;
	int32_t t134 = 9028;

    t134 = (((x553==x554)/x555)*x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 10106651LLU;
	static int16_t x558 = INT16_MIN;
	uint16_t x559 = UINT16_MAX;
	volatile int64_t x560 = INT64_MIN;
	int64_t t135 = -79075LL;

    t135 = (((x557==x558)/x559)*x560);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	int32_t x562 = -1;
	int64_t x563 = -1LL;
	uint8_t x564 = 1U;
	static int64_t t136 = 1307558869750LL;

    t136 = (((x561==x562)/x563)*x564);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x565 = -1;
	volatile int64_t x567 = INT64_MIN;
	int64_t t137 = 66042880925306LL;

    t137 = (((x565==x566)/x567)*x568);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x569 = UINT8_MAX;
	int8_t x570 = INT8_MIN;
	uint32_t x572 = 128314U;

    t138 = (((x569==x570)/x571)*x572);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x573 = INT64_MAX;
	uint64_t x574 = 774656313935LLU;
	int32_t x575 = -1;
	static int64_t x576 = INT64_MAX;
	volatile int64_t t139 = -5959LL;

    t139 = (((x573==x574)/x575)*x576);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MAX;
	uint32_t x578 = 13U;
	volatile uint32_t t140 = 280456680U;

    t140 = (((x577==x578)/x579)*x580);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x581 = -1;
	uint16_t x582 = 554U;
	int32_t x583 = 205418067;
	uint16_t x584 = 308U;
	volatile int32_t t141 = -2157;

    t141 = (((x581==x582)/x583)*x584);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = -139356;
	uint8_t x586 = 37U;
	uint8_t x587 = 101U;
	volatile int16_t x588 = INT16_MIN;
	volatile int32_t t142 = -1067;

    t142 = (((x585==x586)/x587)*x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x591 = INT64_MAX;
	int32_t x592 = INT32_MIN;
	int64_t t143 = 47304LL;

    t143 = (((x589==x590)/x591)*x592);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x593 = 173885860941LLU;
	int8_t x594 = 1;
	uint64_t x595 = 1938992LLU;
	volatile int8_t x596 = INT8_MAX;
	uint64_t t144 = 122080LLU;

    t144 = (((x593==x594)/x595)*x596);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x598 = 656019287440LLU;
	static volatile int64_t x599 = -1LL;
	int64_t t145 = -43324850910LL;

    t145 = (((x597==x598)/x599)*x600);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x601 = 25;
	int8_t x602 = -1;
	static uint16_t x603 = UINT16_MAX;
	int32_t x604 = 29;
	static volatile int32_t t146 = 79;

    t146 = (((x601==x602)/x603)*x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x607 = 44;
	volatile int16_t x608 = -145;
	int32_t t147 = -80607;

    t147 = (((x605==x606)/x607)*x608);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x609 = 306U;
	int64_t x610 = -1LL;
	uint64_t t148 = 25908612LLU;

    t148 = (((x609==x610)/x611)*x612);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x614 = -1;
	int64_t x616 = INT64_MAX;
	static int64_t t149 = 72810LL;

    t149 = (((x613==x614)/x615)*x616);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x617 = 1U;
	int32_t x619 = -1;
	static int32_t x620 = -506935;

    t150 = (((x617==x618)/x619)*x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x622 = 466;
	int64_t x623 = INT64_MIN;
	static int8_t x624 = -1;
	volatile int64_t t151 = -12626608871LL;

    t151 = (((x621==x622)/x623)*x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x626 = -241371722317072LL;
	static int8_t x627 = -3;

    t152 = (((x625==x626)/x627)*x628);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = 12365;
	uint32_t x632 = UINT32_MAX;
	static uint32_t t153 = 6624U;

    t153 = (((x629==x630)/x631)*x632);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x633 = 0;
	int64_t x634 = INT64_MAX;
	int32_t x635 = -589869657;
	int64_t x636 = -58013883235953119LL;
	volatile int64_t t154 = 1750263LL;

    t154 = (((x633==x634)/x635)*x636);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = -64737417033962024LL;
	uint32_t x640 = UINT32_MAX;

    t155 = (((x637==x638)/x639)*x640);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = 26512LL;
	int64_t x643 = INT64_MIN;
	uint16_t x644 = 8U;
	volatile int64_t t156 = 1161647234LL;

    t156 = (((x641==x642)/x643)*x644);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x646 = 0;
	uint64_t x647 = UINT64_MAX;
	uint64_t t157 = 0LLU;

    t157 = (((x645==x646)/x647)*x648);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x649 = INT16_MIN;
	uint16_t x650 = UINT16_MAX;
	int16_t x651 = INT16_MAX;
	int16_t x652 = INT16_MIN;
	int32_t t158 = -462;

    t158 = (((x649==x650)/x651)*x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x653 = 6351639LLU;
	int64_t x654 = -15477749871LL;
	volatile uint32_t x656 = 171246U;
	uint32_t t159 = 16663608U;

    t159 = (((x653==x654)/x655)*x656);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x658 = -1;
	volatile int32_t x659 = 25;
	int16_t x660 = INT16_MIN;

    t160 = (((x657==x658)/x659)*x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x661 = 9U;
	volatile int8_t x662 = INT8_MAX;
	volatile int32_t x663 = -1;
	int32_t t161 = -62;

    t161 = (((x661==x662)/x663)*x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x666 = INT64_MIN;
	static int32_t x667 = -128276632;
	int32_t x668 = INT32_MIN;
	static int32_t t162 = -1718;

    t162 = (((x665==x666)/x667)*x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x669 = 1U;
	static int16_t x671 = INT16_MAX;
	int16_t x672 = -1;

    t163 = (((x669==x670)/x671)*x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = -1;
	static uint32_t x674 = 11U;
	volatile uint32_t x675 = UINT32_MAX;
	int32_t x676 = INT32_MAX;

    t164 = (((x673==x674)/x675)*x676);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x679 = UINT32_MAX;
	int64_t x680 = INT64_MAX;
	volatile int64_t t165 = -2716450636LL;

    t165 = (((x677==x678)/x679)*x680);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x681 = UINT32_MAX;
	int64_t x684 = INT64_MIN;

    t166 = (((x681==x682)/x683)*x684);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x685 = 49U;
	int16_t x686 = INT16_MAX;
	volatile int8_t x688 = -27;
	volatile int32_t t167 = 470754097;

    t167 = (((x685==x686)/x687)*x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x689 = INT16_MIN;
	int64_t x690 = 328156928323LL;
	static uint16_t x691 = 131U;
	static uint32_t t168 = 13U;

    t168 = (((x689==x690)/x691)*x692);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x694 = 15U;
	int8_t x695 = INT8_MIN;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t169 = 1225;

    t169 = (((x693==x694)/x695)*x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x697 = INT32_MIN;
	uint8_t x698 = UINT8_MAX;
	volatile int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MAX;
	int64_t t170 = -3755121LL;

    t170 = (((x697==x698)/x699)*x700);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x701 = 6112341290LL;
	int32_t x702 = INT32_MIN;
	volatile uint32_t x703 = 1368U;
	static int64_t x704 = -2569122342703LL;

    t171 = (((x701==x702)/x703)*x704);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = -1;
	static uint8_t x706 = 42U;
	static volatile int32_t x707 = INT32_MAX;
	static volatile uint8_t x708 = 17U;
	volatile int32_t t172 = -1;

    t172 = (((x705==x706)/x707)*x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x711 = 1;
	int32_t x712 = 0;
	int32_t t173 = -2;

    t173 = (((x709==x710)/x711)*x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x713 = 1111243397LLU;
	volatile int8_t x714 = -1;
	int8_t x715 = INT8_MIN;
	volatile uint32_t x716 = 1202873U;
	volatile uint32_t t174 = 16774U;

    t174 = (((x713==x714)/x715)*x716);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = INT8_MIN;
	uint8_t x722 = UINT8_MAX;
	uint32_t x723 = UINT32_MAX;
	uint16_t x724 = 243U;
	uint32_t t175 = 987U;

    t175 = (((x721==x722)/x723)*x724);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x725 = 14U;
	int8_t x726 = -1;
	int32_t t176 = 5;

    t176 = (((x725==x726)/x727)*x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x730 = -1;
	int32_t x731 = -1;
	volatile int16_t x732 = 24;

    t177 = (((x729==x730)/x731)*x732);

    if (t177 != -24) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = INT64_MAX;
	int32_t x734 = -487125;
	uint8_t x735 = UINT8_MAX;
	int16_t x736 = -1;
	volatile int32_t t178 = -9353654;

    t178 = (((x733==x734)/x735)*x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = -1;
	uint16_t x738 = UINT16_MAX;
	int64_t x739 = 2884LL;
	static uint8_t x740 = UINT8_MAX;
	volatile int64_t t179 = -63LL;

    t179 = (((x737==x738)/x739)*x740);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x741 = 2619LLU;
	static int8_t x742 = INT8_MIN;
	int32_t x743 = -5;
	int16_t x744 = INT16_MIN;
	int32_t t180 = 37155916;

    t180 = (((x741==x742)/x743)*x744);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x745 = -1;
	volatile int16_t x746 = -648;
	int16_t x748 = 55;
	volatile int32_t t181 = -5461072;

    t181 = (((x745==x746)/x747)*x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x749 = UINT64_MAX;
	int32_t x750 = INT32_MIN;
	int32_t x751 = 1;
	volatile int16_t x752 = 12620;
	volatile int32_t t182 = 30;

    t182 = (((x749==x750)/x751)*x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x753 = -1;
	static int8_t x754 = -1;
	volatile uint32_t x755 = 666076U;
	volatile uint64_t x756 = 484588LLU;
	static volatile uint64_t t183 = 0LLU;

    t183 = (((x753==x754)/x755)*x756);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x758 = INT64_MIN;
	uint8_t x759 = 6U;
	volatile int32_t t184 = 16455432;

    t184 = (((x757==x758)/x759)*x760);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x763 = UINT64_MAX;
	int8_t x764 = INT8_MAX;
	volatile uint64_t t185 = 540626LLU;

    t185 = (((x761==x762)/x763)*x764);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x765 = INT8_MIN;
	int64_t x766 = 16843LL;
	volatile uint16_t x767 = 4U;

    t186 = (((x765==x766)/x767)*x768);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x770 = 376U;
	int16_t x771 = -337;
	int16_t x772 = INT16_MIN;
	static int32_t t187 = -932;

    t187 = (((x769==x770)/x771)*x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x773 = INT8_MIN;
	int64_t x774 = -1LL;
	static int16_t x775 = 7;
	uint32_t x776 = 102076U;
	volatile uint32_t t188 = 572814U;

    t188 = (((x773==x774)/x775)*x776);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x777 = INT8_MIN;
	static volatile int8_t x778 = 14;
	int32_t x780 = INT32_MIN;
	volatile uint64_t t189 = 8560541382893LLU;

    t189 = (((x777==x778)/x779)*x780);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = -1;
	int8_t x782 = -12;
	int64_t x783 = INT64_MAX;
	int16_t x784 = INT16_MAX;
	static volatile int64_t t190 = 183921049609077290LL;

    t190 = (((x781==x782)/x783)*x784);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x785 = INT32_MIN;
	uint16_t x786 = UINT16_MAX;
	volatile int8_t x787 = 1;
	int32_t x788 = 224223;
	static volatile int32_t t191 = 132;

    t191 = (((x785==x786)/x787)*x788);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = INT32_MIN;
	static uint8_t x791 = 2U;
	uint64_t x792 = 2608021435LLU;
	volatile uint64_t t192 = 1795605LLU;

    t192 = (((x789==x790)/x791)*x792);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x794 = INT64_MIN;
	volatile int64_t x796 = INT64_MIN;

    t193 = (((x793==x794)/x795)*x796);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x798 = 62284;
	int64_t x800 = 902857952655833LL;
	int64_t t194 = 20184585746081808LL;

    t194 = (((x797==x798)/x799)*x800);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x803 = -1;
	uint32_t x804 = 16U;
	uint32_t t195 = 1478U;

    t195 = (((x801==x802)/x803)*x804);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x806 = INT32_MAX;
	uint16_t x808 = 1U;
	uint64_t t196 = 677670162252LLU;

    t196 = (((x805==x806)/x807)*x808);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x810 = UINT8_MAX;
	volatile uint32_t x811 = 4206860U;
	int16_t x812 = 2071;
	uint32_t t197 = 69499928U;

    t197 = (((x809==x810)/x811)*x812);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x813 = 1;
	static int64_t x814 = -1LL;
	int16_t x816 = INT16_MIN;
	int32_t t198 = 859898;

    t198 = (((x813==x814)/x815)*x816);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x818 = -3105015405639LL;
	uint32_t x819 = 1221U;
	int16_t x820 = 11306;
	uint32_t t199 = 22U;

    t199 = (((x817==x818)/x819)*x820);

    if (t199 != 0U) { NG(); } else { ; }
	
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

