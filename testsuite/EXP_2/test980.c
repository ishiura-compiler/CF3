
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

static int8_t x1 = INT8_MAX;
volatile int8_t x8 = INT8_MAX;
static uint64_t t2 = 5311980342LLU;
uint8_t x14 = 0U;
volatile int64_t t4 = -12338220629257248LL;
volatile uint16_t x22 = UINT16_MAX;
int16_t x31 = -2827;
int8_t x33 = INT8_MIN;
int64_t t8 = 14LL;
int8_t x42 = 1;
static uint16_t x43 = UINT16_MAX;
int16_t x45 = 8;
static uint64_t x55 = 479543202111392LLU;
int64_t x56 = 154046LL;
int16_t x61 = INT16_MAX;
volatile int16_t x62 = -1;
volatile uint32_t x67 = UINT32_MAX;
int64_t t16 = 16460120614107416LL;
int16_t x72 = INT16_MAX;
static volatile uint64_t t19 = 11430801475LLU;
volatile uint64_t x86 = 252369159666291580LLU;
static int64_t x89 = INT64_MIN;
static uint64_t x91 = 12996129010908LLU;
int64_t x92 = INT64_MIN;
volatile int64_t t25 = -16313965785143694LL;
int32_t x108 = -1;
volatile int32_t t26 = -1;
int8_t x115 = INT8_MIN;
static volatile int32_t t27 = 402966631;
volatile uint32_t t28 = 2118U;
int8_t x121 = INT8_MAX;
int16_t x123 = INT16_MIN;
int64_t x127 = 139264143820LL;
static int64_t t30 = -18482913180LL;
uint64_t x134 = 2LLU;
uint64_t t33 = 2122765983LLU;
int16_t x142 = INT16_MAX;
volatile uint8_t x143 = UINT8_MAX;
int8_t x145 = INT8_MAX;
volatile uint8_t x146 = UINT8_MAX;
int8_t x147 = 40;
uint64_t x148 = UINT64_MAX;
static int16_t x149 = INT16_MIN;
int16_t x150 = INT16_MIN;
int64_t x152 = INT64_MAX;
int16_t x156 = INT16_MAX;
int64_t t37 = 24895365098LL;
volatile int64_t t38 = -19290705045963166LL;
volatile int64_t x164 = INT64_MIN;
volatile int64_t t39 = -982LL;
int8_t x168 = INT8_MIN;
static volatile uint16_t x172 = 13U;
int32_t x176 = -1;
volatile uint64_t t43 = 6816329045191641286LLU;
int32_t x182 = -1;
static uint16_t x183 = UINT16_MAX;
static volatile int64_t t44 = 1133136566LL;
uint64_t x190 = 21430786943LLU;
int64_t x197 = 13137913043899LL;
static uint32_t x199 = UINT32_MAX;
int64_t x201 = -1LL;
int64_t x208 = INT64_MIN;
volatile uint64_t t50 = 20715380LLU;
int8_t x211 = -1;
int64_t t51 = 303347775832LL;
int8_t x217 = -1;
volatile int32_t x221 = -6;
int64_t x223 = -1LL;
uint8_t x238 = 38U;
uint32_t x239 = UINT32_MAX;
volatile uint64_t t57 = 166LLU;
volatile int64_t x248 = INT64_MIN;
int64_t x253 = -98976LL;
int32_t x258 = -1;
volatile int32_t x260 = INT32_MAX;
volatile int64_t t64 = 3851303LL;
static int64_t x271 = INT64_MIN;
int64_t x274 = -1LL;
volatile int64_t t66 = 3646889135134273414LL;
static int8_t x281 = INT8_MAX;
int16_t x284 = -255;
static uint16_t x286 = 66U;
int64_t x292 = INT64_MIN;
int8_t x294 = INT8_MIN;
int16_t x297 = 1;
static volatile int64_t t72 = 4216999803385LL;
int32_t x302 = INT32_MIN;
static volatile int64_t t74 = -118678923674455516LL;
static uint32_t x309 = 88324128U;
static uint32_t x315 = UINT32_MAX;
int32_t x323 = INT32_MAX;
uint64_t t79 = 3710415050012632424LLU;
int64_t x340 = INT64_MAX;
uint16_t x346 = 9U;
int16_t x347 = -3018;
volatile int32_t t84 = 783;
uint64_t x351 = UINT64_MAX;
uint8_t x356 = 6U;
int16_t x364 = 3;
volatile uint64_t t88 = 213LLU;
volatile uint64_t t89 = 421167417366LLU;
int32_t x376 = -1;
int64_t x385 = INT64_MIN;
volatile uint64_t t98 = 10766859730833999LLU;
volatile uint64_t t99 = 1524436LLU;
int64_t t100 = 4527980164514896800LL;
uint64_t x419 = 4270066912713556LLU;
volatile uint64_t x421 = 505440961LLU;
static uint8_t x425 = 0U;
uint32_t t103 = 168210U;
int64_t t104 = -16LL;
int32_t x433 = INT32_MAX;
static uint32_t x438 = 21U;
static int64_t x440 = -1LL;
volatile int32_t x454 = -20844965;
volatile int64_t x461 = INT64_MIN;
int64_t x462 = -15LL;
static int32_t x464 = 390545;
int32_t x473 = 7513;
uint8_t x476 = UINT8_MAX;
static int8_t x495 = -42;
int32_t x498 = INT32_MIN;
volatile int64_t x500 = INT64_MIN;
int64_t t120 = -741828016449LL;
int16_t x508 = 195;
static int64_t x514 = INT64_MIN;
int16_t x520 = -1;
uint32_t x522 = 40U;
uint32_t x531 = 701804U;
static int64_t t130 = 81LL;
int64_t x544 = INT64_MIN;
volatile int64_t t131 = 30004870321385841LL;
static uint64_t t133 = 15413592203289868LLU;
uint64_t x554 = UINT64_MAX;
int64_t x561 = INT64_MAX;
static int32_t x562 = INT32_MAX;
uint32_t x563 = 28324U;
int8_t x571 = INT8_MIN;
static int64_t t137 = -1099328LL;
int64_t x577 = INT64_MIN;
static volatile int64_t x582 = -368114LL;
int32_t x584 = INT32_MAX;
int8_t x585 = INT8_MIN;
volatile int64_t x588 = INT64_MIN;
static int64_t x592 = -84747LL;
int8_t x598 = INT8_MIN;
uint64_t x600 = UINT64_MAX;
uint64_t x602 = UINT64_MAX;
static int32_t x604 = INT32_MIN;
static int64_t x606 = 29396LL;
volatile int16_t x611 = 7;
uint8_t x613 = 18U;
int16_t x616 = -7;
static volatile int64_t t149 = -1958860632862379LL;
int64_t x627 = INT64_MIN;
int64_t t152 = 8695628LL;
int16_t x639 = INT16_MIN;
volatile uint16_t x651 = UINT16_MAX;
static volatile int64_t t157 = -25075LL;
int32_t x657 = 4757115;
static volatile uint8_t x663 = UINT8_MAX;
int64_t x671 = 139390955538322479LL;
int64_t x675 = INT64_MIN;
uint64_t x676 = 15LLU;
volatile int64_t t165 = -3354LL;
static int8_t x685 = -1;
uint8_t x690 = UINT8_MAX;
int16_t x693 = -1;
static volatile int64_t t168 = -1760LL;
int16_t x707 = 137;
static int32_t x715 = -1;
int32_t x724 = -1;
volatile uint64_t t173 = 4012770720LLU;
uint16_t x727 = 806U;
volatile int64_t t174 = -112LL;
static int64_t x733 = 13429759073LL;
int8_t x735 = -1;
volatile int64_t t175 = 298719604928383LL;
static uint64_t t176 = 225723772061474081LLU;
int8_t x741 = INT8_MAX;
static uint64_t x750 = 10860520LLU;
volatile uint64_t t179 = 19552981563894LLU;
int8_t x769 = -1;
volatile int32_t t184 = 17174386;
int64_t x775 = INT64_MIN;
static int64_t x777 = -1LL;
static int64_t x782 = INT64_MIN;
int64_t t187 = -4155997369517969LL;
volatile int16_t x788 = 8;
static int64_t x793 = -14710663LL;
static volatile uint16_t x796 = 6U;
uint64_t x798 = 12642576469092238LLU;
uint32_t x805 = 201U;
uint32_t x808 = 5357415U;
volatile int64_t t192 = 16490LL;
int32_t x819 = -117;
static volatile int16_t x823 = INT16_MIN;
int32_t x825 = 1049962;
static volatile int64_t t197 = 4879079146682LL;
int32_t x829 = 38121;
int64_t x835 = INT64_MIN;
int32_t x836 = INT32_MIN;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	uint8_t x4 = 5U;
	static volatile uint32_t t0 = 474075357U;

    t0 = ((x1^(x2%x3))^x4);

    if (t0 != 122U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint64_t x5 = 5468153757715084LLU;
	static volatile int8_t x6 = -48;
	static int64_t x7 = -169208860880LL;
	volatile uint64_t t1 = 1816636077LLU;

    t1 = ((x5^(x6%x7))^x8);

    if (t1 != 18441275919951836451LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x10 = -1;
	volatile int16_t x11 = -1;
	uint64_t x12 = 5291032LLU;

    t2 = ((x9^(x10%x11))^x12);

    if (t2 != 2142192615LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = 115513LL;
	int64_t t3 = 3885611LL;

    t3 = ((x13^(x14%x15))^x16);

    if (t3 != -115527LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MAX;
	static int32_t x20 = INT32_MIN;

    t4 = ((x17^(x18%x19))^x20);

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = -52;
	volatile int64_t t5 = 5042LL;

    t5 = ((x21^(x22%x23))^x24);

    if (t5 != 9223372036854743091LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 1933U;
	volatile int16_t x26 = 2;
	int8_t x27 = -1;
	volatile int32_t x28 = -276;
	int32_t t6 = -28195;

    t6 = ((x25^(x26%x27))^x28);

    if (t6 != -1695) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	static int32_t x32 = -1;
	int32_t t7 = -62512;

    t7 = ((x29^(x30%x31))^x32);

    if (t7 != -31098) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = 0LL;
	int32_t x35 = INT32_MIN;
	int32_t x36 = INT32_MIN;

    t8 = ((x33^(x34%x35))^x36);

    if (t8 != 2147483520LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MIN;
	int32_t x39 = 550;
	int8_t x40 = 3;
	volatile uint64_t t9 = 17593LLU;

    t9 = ((x37^(x38%x39))^x40);

    if (t9 != 4LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	int64_t x44 = INT64_MAX;
	int64_t t10 = 23077112LL;

    t10 = ((x41^(x42%x43))^x44);

    if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 2U;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	volatile int64_t t11 = -52918956637322241LL;

    t11 = ((x45^(x46%x47))^x48);

    if (t11 != -11LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MAX;
	int8_t x51 = -1;
	volatile int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = -116670035;

    t12 = ((x49^(x50%x51))^x52);

    if (t12 != 32640) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	static int16_t x54 = INT16_MIN;
	volatile uint64_t t13 = 731740339533721LLU;

    t13 = ((x53^(x54%x55))^x56);

    if (t13 != 155718090694497LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 13560U;
	int32_t x58 = -1;
	volatile int32_t x59 = -17307;
	volatile int16_t x60 = -57;
	volatile int32_t t14 = 50;

    t14 = ((x57^(x58%x59))^x60);

    if (t14 != 13504) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = -234219653424506LL;
	volatile int8_t x64 = 0;
	volatile int64_t t15 = 24120LL;

    t15 = ((x61^(x62%x63))^x64);

    if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MIN;
	uint8_t x68 = 52U;

    t16 = ((x65^(x66%x67))^x68);

    if (t16 != 9223372032559808587LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MIN;
	static int16_t x70 = INT16_MAX;
	int32_t x71 = INT32_MAX;
	static int64_t t17 = INT64_MIN;

    t17 = ((x69^(x70%x71))^x72);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 12U;
	int64_t x74 = INT64_MAX;
	volatile int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -993678675LL;

    t18 = ((x73^(x74%x75))^x76);

    if (t18 != -13LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 814263LLU;
	int64_t x78 = -1020841212276187LL;
	uint32_t x79 = 955U;
	int32_t x80 = 9618;

    t19 = ((x77^(x78%x79))^x80);

    if (t19 != 18446744073708746416LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	uint32_t x82 = 2U;
	int32_t x83 = -887255084;
	volatile int8_t x84 = 61;
	uint32_t t20 = 895664U;

    t20 = ((x81^(x82%x83))^x84);

    if (t20 != 65472U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 107U;
	int16_t x87 = INT16_MAX;
	static int32_t x88 = INT32_MIN;
	volatile uint64_t t21 = 1240337LLU;

    t21 = ((x85^(x86%x87))^x88);

    if (t21 != 18446744071562073578LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = 421U;
	volatile uint64_t t22 = 18920577101352656LLU;

    t22 = ((x89^(x90%x91))^x92);

    if (t22 != 421LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = 1;
	int8_t x94 = 6;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 1U;
	volatile int32_t t23 = 1075086;

    t23 = ((x93^(x94%x95))^x96);

    if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 86U;
	static int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	int32_t t24 = 173490628;

    t24 = ((x97^(x98%x99))^x100);

    if (t24 != 32598) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x101 = 34U;
	int64_t x102 = INT64_MIN;
	static int32_t x103 = -1;
	uint8_t x104 = 56U;

    t25 = ((x101^(x102%x103))^x104);

    if (t25 != 26LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = 3U;
	static int16_t x107 = INT16_MIN;

    t26 = ((x105^(x106%x107))^x108);

    if (t26 != 124) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int8_t x114 = INT8_MIN;
	int16_t x116 = INT16_MIN;

    t27 = ((x113^(x114%x115))^x116);

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = 2;
	static int16_t x118 = INT16_MAX;
	uint32_t x119 = 1U;
	static int8_t x120 = INT8_MAX;

    t28 = ((x117^(x118%x119))^x120);

    if (t28 != 125U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x122 = UINT8_MAX;
	uint64_t x124 = 2653627076LLU;
	uint64_t t29 = 15390129369592LLU;

    t29 = ((x121^(x122%x123))^x124);

    if (t29 != 2653626948LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = 798;
	int64_t x126 = -1LL;
	int16_t x128 = -1;

    t30 = ((x125^(x126%x127))^x128);

    if (t30 != 798LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x129 = 89U;
	static uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 123U;
	int32_t t31 = -185534639;

    t31 = ((x129^(x130%x131))^x132);

    if (t31 != 93) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 2U;
	int64_t x135 = -3821LL;
	uint8_t x136 = 0U;
	uint64_t t32 = 755391LLU;

    t32 = ((x133^(x134%x135))^x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = 11LLU;
	static uint16_t x138 = 0U;
	int32_t x139 = INT32_MAX;
	static volatile int16_t x140 = INT16_MIN;

    t33 = ((x137^(x138%x139))^x140);

    if (t33 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = INT32_MIN;
	int16_t x144 = -1;
	int32_t t34 = -26;

    t34 = ((x141^(x142%x143))^x144);

    if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t t35 = 69244812650542059LLU;

    t35 = ((x145^(x146%x147))^x148);

    if (t35 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x151 = 13973U;
	static int64_t t36 = -3182543LL;

    t36 = ((x149^(x150%x151))^x152);

    if (t36 != 9223372036854747861LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MIN;
	int8_t x155 = 26;

    t37 = ((x153^(x154%x155))^x156);

    if (t37 != 9223372036854743063LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x157 = 247421575154806LL;
	int32_t x158 = INT32_MIN;
	static volatile int32_t x159 = 478909;
	int16_t x160 = INT16_MIN;

    t38 = ((x157^(x158%x159))^x160);

    if (t38 != 247421575129602LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = 127711490549784558LL;
	static int64_t x162 = -1LL;
	volatile int64_t x163 = INT64_MIN;

    t39 = ((x161^(x162%x163))^x164);

    if (t39 != 9095660546304991249LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x166 = -1LL;
	int8_t x167 = 1;
	int64_t t40 = -1LL;

    t40 = ((x165^(x166%x167))^x168);

    if (t40 != -129LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 169LLU;
	uint64_t x170 = 16124844LLU;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t t41 = 720LLU;

    t41 = ((x169^(x170%x171))^x172);

    if (t41 != 16124680LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x173 = 25;
	uint8_t x174 = 3U;
	volatile int32_t x175 = INT32_MIN;
	volatile int32_t t42 = 153310;

    t42 = ((x173^(x174%x175))^x176);

    if (t42 != -27) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = INT8_MAX;
	uint8_t x178 = UINT8_MAX;
	uint64_t x179 = 25174440757470300LLU;
	int16_t x180 = INT16_MIN;

    t43 = ((x177^(x178%x179))^x180);

    if (t43 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x181 = INT16_MAX;
	int64_t x184 = INT64_MIN;

    t44 = ((x181^(x182%x183))^x184);

    if (t44 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MIN;
	uint16_t x187 = 15U;
	int32_t x188 = -1;
	volatile int64_t t45 = -97LL;

    t45 = ((x185^(x186%x187))^x188);

    if (t45 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x189 = UINT64_MAX;
	uint16_t x191 = 13U;
	int32_t x192 = 334;
	uint64_t t46 = 67503957LLU;

    t46 = ((x189^(x190%x191))^x192);

    if (t46 != 18446744073709551286LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = 212948310LLU;
	uint32_t x194 = 6376U;
	volatile uint64_t x195 = 640LLU;
	int32_t x196 = INT32_MAX;
	uint64_t t47 = 6430895838584484LLU;

    t47 = ((x193^(x194%x195))^x196);

    if (t47 != 1934534849LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x198 = INT64_MAX;
	uint64_t x200 = 1396377177539527LLU;
	volatile uint64_t t48 = 61LLU;

    t48 = ((x197^(x198%x199))^x200);

    if (t48 != 1405235771729795LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x202 = -1;
	int8_t x203 = INT8_MIN;
	uint32_t x204 = 1042970503U;
	static int64_t t49 = -670LL;

    t49 = ((x201^(x202%x203))^x204);

    if (t49 != 1042970503LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MAX;
	int8_t x207 = -1;

    t50 = ((x205^(x206%x207))^x208);

    if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MAX;
	int64_t x212 = INT64_MAX;

    t51 = ((x209^(x210%x211))^x212);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MAX;
	volatile int16_t x214 = -206;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t x216 = INT32_MIN;
	volatile uint64_t t52 = 4165132481096148363LLU;

    t52 = ((x213^(x214%x215))^x216);

    if (t52 != 2147451085LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x218 = -1LL;
	int64_t x219 = -1LL;
	uint16_t x220 = UINT16_MAX;
	volatile int64_t t53 = 1LL;

    t53 = ((x217^(x218%x219))^x220);

    if (t53 != -65536LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x222 = INT8_MIN;
	volatile uint16_t x224 = 109U;
	static volatile int64_t t54 = -4907381326630490LL;

    t54 = ((x221^(x222%x223))^x224);

    if (t54 != -105LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -16326242687971LL;
	uint64_t x226 = UINT64_MAX;
	static uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MIN;
	uint64_t t55 = 3930920464LLU;

    t55 = ((x225^(x226%x227))^x228);

    if (t55 != 16326242687901LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = UINT32_MAX;
	uint16_t x234 = 38U;
	int32_t x235 = 44;
	volatile int32_t x236 = -1;
	volatile uint32_t t56 = 118718668U;

    t56 = ((x233^(x234%x235))^x236);

    if (t56 != 38U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x237 = 2768;
	uint64_t x240 = 1445LLU;

    t57 = ((x237^(x238%x239))^x240);

    if (t57 != 3923LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -1;
	volatile int32_t x242 = INT32_MIN;
	volatile int8_t x243 = INT8_MAX;
	volatile uint8_t x244 = 11U;
	volatile int32_t t58 = -31532;

    t58 = ((x241^(x242%x243))^x244);

    if (t58 != 12) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = -1;
	volatile uint8_t x246 = UINT8_MAX;
	int32_t x247 = -323189927;
	volatile int64_t t59 = -231550124329LL;

    t59 = ((x245^(x246%x247))^x248);

    if (t59 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MAX;
	static int32_t x250 = INT32_MAX;
	uint32_t x251 = 6997679U;
	static int32_t x252 = INT32_MAX;
	volatile uint32_t t60 = 12609U;

    t60 = ((x249^(x250%x251))^x252);

    if (t60 != 6193873U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x254 = UINT16_MAX;
	static uint8_t x255 = 15U;
	volatile int32_t x256 = 4589;
	int64_t t61 = -3935011LL;

    t61 = ((x253^(x254%x255))^x256);

    if (t61 != -103283LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MAX;
	static int8_t x259 = 1;
	int32_t t62 = -8218364;

    t62 = ((x257^(x258%x259))^x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = 118;
	int32_t x262 = -102781;
	int64_t x263 = INT64_MAX;
	volatile uint64_t x264 = 436LLU;
	static uint64_t t63 = 4995662919203LLU;

    t63 = ((x261^(x262%x263))^x264);

    if (t63 != 18446744073709449025LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = UINT32_MAX;
	volatile int32_t x266 = -21954566;
	int64_t x267 = -246691091888452LL;
	int8_t x268 = INT8_MAX;

    t64 = ((x265^(x266%x267))^x268);

    if (t64 != -4273012614LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MIN;
	volatile uint64_t x270 = UINT64_MAX;
	volatile uint32_t x272 = 349648U;
	static uint64_t t65 = 281563511LLU;

    t65 = ((x269^(x270%x271))^x272);

    if (t65 != 18446744073709201967LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x273 = INT8_MAX;
	volatile int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MAX;

    t66 = ((x273^(x274%x275))^x276);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x277 = 3726;
	int64_t x278 = INT64_MIN;
	volatile int16_t x279 = -1609;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int64_t t67 = -1LL;

    t67 = ((x277^(x278%x279))^x280);

    if (t67 != -62236LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x282 = -11;
	static int64_t x283 = -1LL;
	static int64_t t68 = -49696582272LL;

    t68 = ((x281^(x282%x283))^x284);

    if (t68 != -130LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = -118;
	int16_t x287 = INT16_MAX;
	static volatile int16_t x288 = -1;
	int32_t t69 = 1431;

    t69 = ((x285^(x286%x287))^x288);

    if (t69 != 55) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x289 = 509724U;
	int32_t x290 = INT32_MIN;
	uint64_t x291 = 97559886320LLU;
	uint64_t t70 = 16712248731461614LLU;

    t70 = ((x289^(x290%x291))^x292);

    if (t70 != 9223372121452240972LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = 330946LL;
	static int32_t x295 = 1;
	static uint32_t x296 = UINT32_MAX;
	int64_t t71 = -5056LL;

    t71 = ((x293^(x294%x295))^x296);

    if (t71 != 4294636349LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x298 = INT64_MAX;
	int16_t x299 = 1;
	int16_t x300 = INT16_MIN;

    t72 = ((x297^(x298%x299))^x300);

    if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x301 = -49;
	int64_t x303 = INT64_MIN;
	static uint32_t x304 = 19259494U;
	int64_t t73 = 0LL;

    t73 = ((x301^(x302%x303))^x304);

    if (t73 != 2128224169LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = 6928;
	uint16_t x306 = 3U;
	volatile int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MIN;

    t74 = ((x305^(x306%x307))^x308);

    if (t74 != -2147476717LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x310 = -1LL;
	volatile int32_t x311 = 18953298;
	static volatile uint8_t x312 = 9U;
	volatile int64_t t75 = 18619527146065467LL;

    t75 = ((x309^(x310%x311))^x312);

    if (t75 != -88324138LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = INT8_MAX;
	uint8_t x314 = UINT8_MAX;
	uint8_t x316 = 2U;
	volatile uint32_t t76 = 2062988302U;

    t76 = ((x313^(x314%x315))^x316);

    if (t76 != 130U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x317 = INT64_MAX;
	int16_t x318 = INT16_MIN;
	static uint16_t x319 = 219U;
	int32_t x320 = -543;
	static volatile int64_t t77 = -1LL;

    t77 = ((x317^(x318%x319))^x320);

    if (t77 != 9223372036854775145LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = -1;
	uint64_t x322 = 3834394464LLU;
	uint32_t x324 = 1210566U;
	volatile uint64_t t78 = 1991107726345015LLU;

    t78 = ((x321^(x322%x323))^x324);

    if (t78 != 18446744072021454936LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x325 = 951592080326LLU;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = 1117U;
	int64_t x328 = -1000328325948805LL;

    t79 = ((x325^(x326%x327))^x328);

    if (t79 != 999553138964079LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -1;
	volatile int32_t x330 = -75;
	uint16_t x331 = UINT16_MAX;
	volatile uint32_t x332 = 784U;
	volatile uint32_t t80 = 68U;

    t80 = ((x329^(x330%x331))^x332);

    if (t80 != 858U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MIN;
	uint32_t x335 = 426U;
	uint64_t x336 = 10503LLU;
	volatile uint64_t t81 = 26237351LLU;

    t81 = ((x333^(x334%x335))^x336);

    if (t81 != 9223372036854786481LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = -2030;
	int8_t x339 = 2;
	volatile int64_t t82 = 3767553LL;

    t82 = ((x337^(x338%x339))^x340);

    if (t82 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int16_t x342 = -1;
	static uint32_t x343 = UINT32_MAX;
	volatile int64_t x344 = INT64_MIN;
	volatile uint64_t t83 = 6663720839701184LLU;

    t83 = ((x341^(x342%x343))^x344);

    if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x345 = 376U;
	static int32_t x348 = INT32_MAX;

    t84 = ((x345^(x346%x347))^x348);

    if (t84 != 2147483278) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = -6;
	int16_t x350 = INT16_MAX;
	uint8_t x352 = 107U;
	volatile uint64_t t85 = 860821213LLU;

    t85 = ((x349^(x350%x351))^x352);

    if (t85 != 18446744073709518958LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x353 = INT64_MAX;
	uint16_t x354 = 6U;
	static int16_t x355 = -4016;
	int64_t t86 = INT64_MAX;

    t86 = ((x353^(x354%x355))^x356);

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	static volatile uint16_t x359 = 32557U;
	int8_t x360 = INT8_MIN;
	volatile int64_t t87 = 15883662LL;

    t87 = ((x357^(x358%x359))^x360);

    if (t87 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x361 = 311692LLU;
	static int64_t x362 = -31612038LL;
	int64_t x363 = INT64_MIN;

    t88 = ((x361^(x362%x363))^x364);

    if (t88 != 18446744073677660917LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x365 = UINT64_MAX;
	int32_t x366 = -238637;
	static volatile uint16_t x367 = 39U;
	uint16_t x368 = UINT16_MAX;

    t89 = ((x365^(x366%x367))^x368);

    if (t89 != 65501LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x369 = UINT32_MAX;
	int8_t x370 = INT8_MAX;
	int8_t x371 = INT8_MAX;
	volatile int32_t x372 = -3147;
	uint32_t t90 = 1361756U;

    t90 = ((x369^(x370%x371))^x372);

    if (t90 != 3146U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = 7849778182243LL;
	static uint32_t x374 = 21U;
	volatile uint16_t x375 = UINT16_MAX;
	static volatile int64_t t91 = -1021080LL;

    t91 = ((x373^(x374%x375))^x376);

    if (t91 != -7849778182263LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = INT32_MAX;
	uint64_t x378 = UINT64_MAX;
	static int64_t x379 = -7448989LL;
	static uint16_t x380 = UINT16_MAX;
	uint64_t t92 = 424498158LLU;

    t92 = ((x377^(x378%x379))^x380);

    if (t92 != 2140055964LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x381 = INT16_MIN;
	uint8_t x382 = 0U;
	int64_t x383 = INT64_MIN;
	int64_t x384 = 2844967033130842431LL;
	volatile int64_t t93 = -25021691761LL;

    t93 = ((x381^(x382%x383))^x384);

    if (t93 != -2844967033130813121LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x386 = 3670919914227LLU;
	int16_t x387 = 47;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t94 = 1213LLU;

    t94 = ((x385^(x386%x387))^x388);

    if (t94 != 9223372036854743045LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	static int64_t x390 = INT64_MIN;
	int8_t x391 = -11;
	uint8_t x392 = 39U;
	int64_t t95 = -22621374307000LL;

    t95 = ((x389^(x390%x391))^x392);

    if (t95 != 32735LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = -393300LL;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 3137659LLU;
	uint64_t t96 = 600LLU;

    t96 = ((x397^(x398%x399))^x400);

    if (t96 != 3121111LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x401 = INT8_MIN;
	volatile int8_t x402 = INT8_MIN;
	int16_t x403 = 1563;
	static int16_t x404 = -1;
	int32_t t97 = 19599;

    t97 = ((x401^(x402%x403))^x404);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x405 = 1420LLU;
	volatile int8_t x406 = -1;
	uint8_t x407 = UINT8_MAX;
	static int16_t x408 = -1;

    t98 = ((x405^(x406%x407))^x408);

    if (t98 != 1420LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x409 = 65030224890005LLU;
	int16_t x410 = INT16_MIN;
	static volatile int64_t x411 = INT64_MIN;
	volatile int64_t x412 = -1LL;

    t99 = ((x409^(x410%x411))^x412);

    if (t99 != 65030224885610LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = INT32_MIN;
	static uint8_t x414 = 70U;
	int64_t x415 = INT64_MAX;
	static volatile int32_t x416 = -1;

    t100 = ((x413^(x414%x415))^x416);

    if (t100 != 2147483577LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x417 = INT16_MIN;
	int32_t x418 = 15;
	static int8_t x420 = 8;
	static uint64_t t101 = 255308468987LLU;

    t101 = ((x417^(x418%x419))^x420);

    if (t101 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x422 = -3;
	uint16_t x423 = 3U;
	static uint16_t x424 = UINT16_MAX;
	volatile uint64_t t102 = 77130118469890386LLU;

    t102 = ((x421^(x422%x423))^x424);

    if (t102 != 505451838LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x426 = UINT16_MAX;
	volatile uint32_t x427 = 30633U;
	int16_t x428 = -1;

    t103 = ((x425^(x426%x427))^x428);

    if (t103 != 4294963026U) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MAX;
	volatile int64_t x431 = -24111892410478962LL;
	int8_t x432 = 35;

    t104 = ((x429^(x430%x431))^x432);

    if (t104 != -32676LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x434 = 41U;
	uint8_t x435 = 9U;
	uint32_t x436 = 112U;
	volatile uint32_t t105 = 76433U;

    t105 = ((x433^(x434%x435))^x436);

    if (t105 != 2147483530U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = INT16_MIN;
	uint64_t x439 = 1939456278334480LLU;
	volatile uint64_t t106 = 366016055530509098LLU;

    t106 = ((x437^(x438%x439))^x440);

    if (t106 != 32746LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x445 = 1LLU;
	int64_t x446 = -345357LL;
	uint32_t x447 = 2U;
	uint32_t x448 = 8706U;
	static uint64_t t107 = 117LLU;

    t107 = ((x445^(x446%x447))^x448);

    if (t107 != 18446744073709542908LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x449 = INT32_MIN;
	static uint32_t x450 = 51239U;
	int64_t x451 = -1LL;
	int16_t x452 = INT16_MAX;
	volatile int64_t t108 = -1948168655LL;

    t108 = ((x449^(x450%x451))^x452);

    if (t108 != -2147450881LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x453 = -2;
	volatile int16_t x455 = 3166;
	int16_t x456 = INT16_MAX;
	int32_t t109 = 432711;

    t109 = ((x453^(x454%x455))^x456);

    if (t109 != 32746) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x457 = UINT32_MAX;
	int16_t x458 = 16343;
	uint16_t x459 = UINT16_MAX;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t110 = 40920U;

    t110 = ((x457^(x458%x459))^x460);

    if (t110 != 2147467304U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x463 = INT8_MIN;
	volatile int64_t t111 = -651126523159453LL;

    t111 = ((x461^(x462%x463))^x464);

    if (t111 != 9223372036854385248LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x465 = 1U;
	int16_t x466 = 472;
	int8_t x467 = INT8_MAX;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t112 = -1;

    t112 = ((x465^(x466%x467))^x468);

    if (t112 != 65445) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MAX;
	volatile uint8_t x471 = UINT8_MAX;
	int8_t x472 = 0;
	volatile int32_t t113 = 57026;

    t113 = ((x469^(x470%x471))^x472);

    if (t113 != 65408) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x474 = INT16_MAX;
	uint8_t x475 = UINT8_MAX;
	int32_t t114 = 273125143;

    t114 = ((x473^(x474%x475))^x476);

    if (t114 != 7641) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = 969;
	int32_t x479 = 111194;
	uint8_t x480 = UINT8_MAX;
	int32_t t115 = 1;

    t115 = ((x477^(x478%x479))^x480);

    if (t115 != -2147482826) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x481 = -389001445;
	int8_t x482 = -1;
	static int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;
	volatile int32_t t116 = -4;

    t116 = ((x481^(x482%x483))^x484);

    if (t116 != -1758482204) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x485 = -4;
	int8_t x486 = INT8_MAX;
	static int8_t x487 = INT8_MAX;
	static uint16_t x488 = 1U;
	int32_t t117 = 395;

    t117 = ((x485^(x486%x487))^x488);

    if (t117 != -3) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x489 = -401411;
	static int16_t x490 = INT16_MIN;
	volatile uint8_t x491 = 14U;
	uint16_t x492 = 1427U;
	volatile int32_t t118 = 46388408;

    t118 = ((x489^(x490%x491))^x492);

    if (t118 != 402838) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = UINT32_MAX;
	uint16_t x494 = 1781U;
	uint64_t x496 = 20752LLU;
	volatile uint64_t t119 = 15208924LLU;

    t119 = ((x493^(x494%x495))^x496);

    if (t119 != 4294946558LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x497 = 35;
	static uint32_t x499 = 910091982U;

    t120 = ((x497^(x498%x499))^x500);

    if (t120 != -9223372036527476153LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = -1;
	int8_t x502 = INT8_MIN;
	static uint16_t x503 = 108U;
	int64_t x504 = 64956774795LL;
	int64_t t121 = -13354334034LL;

    t121 = ((x501^(x502%x503))^x504);

    if (t121 != 64956774808LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x505 = UINT32_MAX;
	static uint8_t x506 = 19U;
	int64_t x507 = 520478116340LL;
	volatile int64_t t122 = -944165298097LL;

    t122 = ((x505^(x506%x507))^x508);

    if (t122 != 4294967087LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	volatile int8_t x510 = -7;
	static int8_t x511 = INT8_MAX;
	int16_t x512 = INT16_MAX;
	int32_t t123 = 3518;

    t123 = ((x509^(x510%x511))^x512);

    if (t123 != 2147450886) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = UINT64_MAX;
	static volatile int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t124 = 473215220822LLU;

    t124 = ((x513^(x514%x515))^x516);

    if (t124 != 2147483647LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = 486U;
	int8_t x518 = INT8_MIN;
	int64_t x519 = INT64_MIN;
	static volatile int64_t t125 = -219783462LL;

    t125 = ((x517^(x518%x519))^x520);

    if (t125 != 409LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	int64_t x523 = -1LL;
	int64_t x524 = INT64_MIN;
	int64_t t126 = -11LL;

    t126 = ((x521^(x522%x523))^x524);

    if (t126 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = -1LL;
	uint8_t x526 = 59U;
	int64_t x527 = 2910LL;
	uint32_t x528 = 34349U;
	volatile int64_t t127 = 0LL;

    t127 = ((x525^(x526%x527))^x528);

    if (t127 != -34327LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = INT16_MAX;
	volatile uint16_t x530 = UINT16_MAX;
	uint16_t x532 = UINT16_MAX;
	static volatile uint32_t t128 = 588239U;

    t128 = ((x529^(x530%x531))^x532);

    if (t128 != 32767U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x533 = -1;
	uint16_t x534 = 876U;
	static volatile uint16_t x535 = UINT16_MAX;
	int8_t x536 = -1;
	volatile int32_t t129 = 13448202;

    t129 = ((x533^(x534%x535))^x536);

    if (t129 != 876) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = INT64_MIN;
	static volatile int8_t x538 = INT8_MAX;
	uint32_t x539 = 20U;
	static volatile int64_t x540 = INT64_MIN;

    t130 = ((x537^(x538%x539))^x540);

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x541 = 629U;
	int16_t x542 = -1;
	uint32_t x543 = UINT32_MAX;

    t131 = ((x541^(x542%x543))^x544);

    if (t131 != -9223372036854775179LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x545 = UINT16_MAX;
	static int8_t x546 = -1;
	uint64_t x547 = 40917996034570LLU;
	int32_t x548 = INT32_MIN;
	volatile uint64_t t132 = 268471596641340961LLU;

    t132 = ((x545^(x546%x547))^x548);

    if (t132 != 18446732809871287868LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x549 = 77U;
	static uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MIN;
	uint64_t x552 = UINT64_MAX;

    t133 = ((x549^(x550%x551))^x552);

    if (t133 != 18446744073709486157LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x553 = -1;
	static int32_t x555 = INT32_MIN;
	volatile int64_t x556 = INT64_MAX;
	static uint64_t t134 = 12LLU;

    t134 = ((x553^(x554%x555))^x556);

    if (t134 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x557 = -1;
	volatile int32_t x558 = -141060191;
	int16_t x559 = INT16_MIN;
	uint16_t x560 = 20862U;
	volatile int32_t t135 = -492371214;

    t135 = ((x557^(x558%x559))^x560);

    if (t135 != 14624) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x564 = 28;
	volatile int64_t t136 = -126749811886178716LL;

    t136 = ((x561^(x562%x563))^x564);

    if (t136 != 9223372036854761204LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x569 = INT64_MIN;
	int32_t x570 = -6077357;
	int8_t x572 = INT8_MIN;

    t137 = ((x569^(x570%x571))^x572);

    if (t137 != -9223372036854775725LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = INT64_MAX;
	int64_t x574 = -64763634885LL;
	int16_t x575 = INT16_MAX;
	uint16_t x576 = 122U;
	volatile int64_t t138 = -1LL;

    t138 = ((x573^(x574%x575))^x576);

    if (t138 != -9223372036854756073LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x578 = INT32_MIN;
	volatile int64_t x579 = -1LL;
	uint8_t x580 = 4U;
	static int64_t t139 = -1906986236174LL;

    t139 = ((x577^(x578%x579))^x580);

    if (t139 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = -1;
	uint32_t x583 = 103U;
	volatile int64_t t140 = -102025306600LL;

    t140 = ((x581^(x582%x583))^x584);

    if (t140 != 2147483553LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x586 = 344137480971LLU;
	static int8_t x587 = 13;
	volatile uint64_t t141 = 180893176LLU;

    t141 = ((x585^(x586%x587))^x588);

    if (t141 != 9223372036854775691LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x589 = -132;
	static int32_t x590 = -1;
	static volatile int32_t x591 = INT32_MAX;
	int64_t t142 = -2693998490383LL;

    t142 = ((x589^(x590%x591))^x592);

    if (t142 != -84874LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x593 = UINT8_MAX;
	int64_t x594 = INT64_MAX;
	int32_t x595 = -1;
	uint8_t x596 = UINT8_MAX;
	volatile int64_t t143 = -1LL;

    t143 = ((x593^(x594%x595))^x596);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x597 = -34;
	int64_t x599 = 30LL;
	uint64_t t144 = 680LLU;

    t144 = ((x597^(x598%x599))^x600);

    if (t144 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MAX;
	int8_t x603 = -1;
	volatile uint64_t t145 = 2587360557777LLU;

    t145 = ((x601^(x602%x603))^x604);

    if (t145 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x605 = 7U;
	static int32_t x607 = INT32_MIN;
	volatile int32_t x608 = -1;
	volatile int64_t t146 = -61494396LL;

    t146 = ((x605^(x606%x607))^x608);

    if (t146 != -29396LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x610 = 0;
	int64_t x612 = -1LL;
	volatile int64_t t147 = 1744078LL;

    t147 = ((x609^(x610%x611))^x612);

    if (t147 != 2147483647LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x614 = UINT16_MAX;
	static uint64_t x615 = 1113316776003354LLU;
	volatile uint64_t t148 = 247398303322463LLU;

    t148 = ((x613^(x614%x615))^x616);

    if (t148 != 18446744073709486100LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x617 = -5923764LL;
	int16_t x618 = 5377;
	int8_t x619 = INT8_MIN;
	volatile uint16_t x620 = 4U;

    t149 = ((x617^(x618%x619))^x620);

    if (t149 != -5923767LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = -1;
	int32_t x622 = -1;
	volatile int32_t x623 = INT32_MAX;
	static int16_t x624 = 3;
	static int32_t t150 = -8;

    t150 = ((x621^(x622%x623))^x624);

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x625 = -1;
	int32_t x626 = 3910869;
	static int8_t x628 = 1;
	int64_t t151 = 47685623663361105LL;

    t151 = ((x625^(x626%x627))^x628);

    if (t151 != -3910869LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x629 = 0;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = INT8_MIN;
	static int64_t x632 = INT64_MIN;

    t152 = ((x629^(x630%x631))^x632);

    if (t152 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x633 = INT8_MAX;
	volatile int8_t x634 = -1;
	int8_t x635 = -1;
	uint8_t x636 = UINT8_MAX;
	volatile int32_t t153 = -28704728;

    t153 = ((x633^(x634%x635))^x636);

    if (t153 != 128) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x637 = 194289127145358472LL;
	uint64_t x638 = UINT64_MAX;
	uint64_t x640 = UINT64_MAX;
	uint64_t t154 = 950280172LLU;

    t154 = ((x637^(x638%x639))^x640);

    if (t154 != 18252454946564195464LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = -79652;
	int8_t x642 = -1;
	static int64_t x643 = INT64_MIN;
	uint16_t x644 = UINT16_MAX;
	static int64_t t155 = -1008447598384LL;

    t155 = ((x641^(x642%x643))^x644);

    if (t155 != 116956LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x645 = -1;
	int16_t x646 = -3006;
	uint16_t x647 = 1U;
	volatile int64_t x648 = INT64_MAX;
	volatile int64_t t156 = INT64_MIN;

    t156 = ((x645^(x646%x647))^x648);

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = INT32_MIN;
	static int64_t x650 = 2182110852LL;
	static uint8_t x652 = UINT8_MAX;

    t157 = ((x649^(x650%x651))^x652);

    if (t157 != -2147426197LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x653 = INT32_MAX;
	int8_t x654 = -1;
	static int8_t x655 = 1;
	volatile int32_t x656 = 1;
	int32_t t158 = 9119846;

    t158 = ((x653^(x654%x655))^x656);

    if (t158 != 2147483646) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x658 = INT64_MIN;
	static int64_t x659 = -1LL;
	static int32_t x660 = 2;
	int64_t t159 = -22054661LL;

    t159 = ((x657^(x658%x659))^x660);

    if (t159 != 4757113LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x661 = UINT32_MAX;
	uint8_t x662 = UINT8_MAX;
	int64_t x664 = -546770854786LL;
	static volatile int64_t t160 = 926164551807LL;

    t160 = ((x661^(x662%x663))^x664);

    if (t160 != -548445805695LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x665 = UINT16_MAX;
	uint64_t x666 = UINT64_MAX;
	uint8_t x667 = 44U;
	int64_t x668 = INT64_MIN;
	static volatile uint64_t t161 = 378LLU;

    t161 = ((x665^(x666%x667))^x668);

    if (t161 != 9223372036854841328LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x669 = 113U;
	uint64_t x670 = 6577429583669964LLU;
	static int64_t x672 = INT64_MAX;
	uint64_t t162 = 59231LLU;

    t162 = ((x669^(x670%x671))^x672);

    if (t162 != 9216794607271105858LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x673 = 590777LLU;
	volatile int8_t x674 = INT8_MIN;
	volatile uint64_t t163 = 64260557748414LLU;

    t163 = ((x673^(x674%x675))^x676);

    if (t163 != 18446744073708960822LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = -7652;
	int8_t x678 = INT8_MIN;
	int64_t x679 = 3693618973188279443LL;
	int32_t x680 = -16311738;
	volatile int64_t t164 = 474985576LL;

    t164 = ((x677^(x678%x679))^x680);

    if (t164 != -16316454LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = -1226;
	static uint8_t x682 = 21U;
	uint16_t x683 = 1U;
	static int64_t x684 = INT64_MIN;

    t165 = ((x681^(x682%x683))^x684);

    if (t165 != 9223372036854774582LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x686 = 219544476010089LLU;
	uint64_t x687 = 53LLU;
	volatile int8_t x688 = INT8_MIN;
	static uint64_t t166 = 4150LLU;

    t166 = ((x685^(x686%x687))^x688);

    if (t166 != 77LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = -95004;
	static int64_t x691 = -1LL;
	int16_t x692 = INT16_MIN;
	int64_t t167 = 18577LL;

    t167 = ((x689^(x690%x691))^x692);

    if (t167 != 68836LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x694 = 11961U;
	static int16_t x695 = -1;
	int64_t x696 = -1LL;

    t168 = ((x693^(x694%x695))^x696);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x701 = 1191LLU;
	uint8_t x702 = 22U;
	int32_t x703 = 486013;
	int16_t x704 = INT16_MIN;
	static uint64_t t169 = 1850788075LLU;

    t169 = ((x701^(x702%x703))^x704);

    if (t169 != 18446744073709520049LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = -15;
	uint32_t x708 = UINT32_MAX;
	uint32_t t170 = 963U;

    t170 = ((x705^(x706%x707))^x708);

    if (t170 != 2147483662U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x713 = -16105;
	int64_t x714 = INT64_MIN;
	int8_t x716 = INT8_MIN;
	volatile int64_t t171 = -9159509757990561LL;

    t171 = ((x713^(x714%x715))^x716);

    if (t171 != 16023LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x717 = 0U;
	uint8_t x718 = 11U;
	int32_t x719 = INT32_MAX;
	static int8_t x720 = 0;
	volatile int32_t t172 = -1;

    t172 = ((x717^(x718%x719))^x720);

    if (t172 != 11) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x721 = UINT64_MAX;
	int8_t x722 = INT8_MAX;
	volatile uint32_t x723 = 13236U;

    t173 = ((x721^(x722%x723))^x724);

    if (t173 != 127LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x725 = UINT32_MAX;
	int64_t x726 = INT64_MAX;
	uint32_t x728 = UINT32_MAX;

    t174 = ((x725^(x726%x727))^x728);

    if (t174 != 7LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x734 = 1U;
	volatile int32_t x736 = -1;

    t175 = ((x733^(x734%x735))^x736);

    if (t175 != -13429759074LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x737 = 2276LLU;
	volatile int64_t x738 = -2071LL;
	volatile int16_t x739 = INT16_MIN;
	static uint64_t x740 = 507564364826422LLU;

    t176 = ((x737^(x738%x739))^x740);

    if (t176 != 18446236509344725051LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x742 = INT64_MAX;
	volatile uint64_t x743 = UINT64_MAX;
	static int64_t x744 = -1LL;
	static uint64_t t177 = 15838LLU;

    t177 = ((x741^(x742%x743))^x744);

    if (t177 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x745 = -1;
	int32_t x746 = 158189974;
	static volatile uint64_t x747 = 4392636LLU;
	static uint8_t x748 = 0U;
	uint64_t t178 = 8225718943LLU;

    t178 = ((x745^(x746%x747))^x748);

    if (t178 != 18446744073709496537LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x749 = 45U;
	int32_t x751 = INT32_MAX;
	int32_t x752 = -1;

    t179 = ((x749^(x750%x751))^x752);

    if (t179 != 18446744073698691130LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x753 = INT32_MAX;
	static int8_t x754 = 6;
	int64_t x755 = -1LL;
	static uint32_t x756 = 6424872U;
	volatile int64_t t180 = 581928642720102881LL;

    t180 = ((x753^(x754%x755))^x756);

    if (t180 != 2141058775LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x757 = 32803397U;
	int8_t x758 = INT8_MIN;
	int8_t x759 = -1;
	uint32_t x760 = 0U;
	volatile uint32_t t181 = 151U;

    t181 = ((x757^(x758%x759))^x760);

    if (t181 != 32803397U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x761 = 2U;
	static int64_t x762 = -388285703979LL;
	static uint64_t x763 = 36117416LLU;
	int32_t x764 = INT32_MIN;
	uint64_t t182 = 4825606680LLU;

    t182 = ((x761^(x762%x763))^x764);

    if (t182 != 18446744071581603623LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = INT32_MIN;
	volatile int16_t x766 = -1;
	uint32_t x767 = 68516460U;
	int16_t x768 = INT16_MIN;
	volatile uint32_t t183 = 70U;

    t183 = ((x765^(x766%x767))^x768);

    if (t183 != 2100550103U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x770 = -1;
	volatile int16_t x771 = 1188;
	static int32_t x772 = 216495;

    t184 = ((x769^(x770%x771))^x772);

    if (t184 != 216495) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x773 = INT8_MIN;
	volatile int16_t x774 = -1;
	int8_t x776 = INT8_MAX;
	int64_t t185 = 32LL;

    t185 = ((x773^(x774%x775))^x776);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x778 = 945231606425752LLU;
	uint32_t x779 = 439105688U;
	volatile int64_t x780 = -7484757356793466LL;
	uint64_t t186 = 196064LLU;

    t186 = ((x777^(x778%x779))^x780);

    if (t186 != 7484756949390273LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x781 = -52621;
	int8_t x783 = -1;
	volatile uint8_t x784 = 0U;

    t187 = ((x781^(x782%x783))^x784);

    if (t187 != -52621LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x785 = INT16_MAX;
	int32_t x786 = INT32_MIN;
	static uint32_t x787 = 6584U;
	uint32_t t188 = 1U;

    t188 = ((x785^(x786%x787))^x788);

    if (t188 != 32655U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x789 = -26637;
	int16_t x790 = INT16_MIN;
	static int64_t x791 = -1LL;
	int32_t x792 = INT32_MIN;
	static int64_t t189 = -910LL;

    t189 = ((x789^(x790%x791))^x792);

    if (t189 != 2147457011LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x794 = 28U;
	int64_t x795 = -1LL;
	volatile int64_t t190 = 0LL;

    t190 = ((x793^(x794%x795))^x796);

    if (t190 != -14710657LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x797 = 92U;
	int16_t x799 = INT16_MIN;
	static volatile int32_t x800 = INT32_MIN;
	uint64_t t191 = 36874978LLU;

    t191 = ((x797^(x798%x799))^x800);

    if (t191 != 18434101496954775506LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x806 = -1;
	volatile int64_t x807 = INT64_MAX;

    t192 = ((x805^(x806%x807))^x808);

    if (t192 != -5357487LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x809 = -1LL;
	uint32_t x810 = UINT32_MAX;
	int32_t x811 = -1;
	int64_t x812 = INT64_MIN;
	volatile int64_t t193 = INT64_MAX;

    t193 = ((x809^(x810%x811))^x812);

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x813 = 419;
	static int64_t x814 = INT64_MIN;
	int32_t x815 = 54;
	volatile uint32_t x816 = 3186614U;
	int64_t t194 = -164486557295397886LL;

    t194 = ((x813^(x814%x815))^x816);

    if (t194 != -3186189LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x817 = -1;
	int8_t x818 = -1;
	volatile int32_t x820 = -1;
	static volatile int32_t t195 = -37;

    t195 = ((x817^(x818%x819))^x820);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x821 = -3409907783032534313LL;
	static volatile int32_t x822 = INT32_MIN;
	uint8_t x824 = 10U;
	static volatile int64_t t196 = -415953LL;

    t196 = ((x821^(x822%x823))^x824);

    if (t196 != -3409907783032534307LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x826 = -1LL;
	int32_t x827 = INT32_MAX;
	int8_t x828 = INT8_MIN;

    t197 = ((x825^(x826%x827))^x828);

    if (t197 != 1049877LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x830 = INT64_MIN;
	static int32_t x831 = INT32_MAX;
	volatile uint8_t x832 = UINT8_MAX;
	volatile int64_t t198 = 2134LL;

    t198 = ((x829^(x830%x831))^x832);

    if (t198 != -37912LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x833 = -3299;
	int16_t x834 = INT16_MAX;
	int64_t t199 = 3003LL;

    t199 = ((x833^(x834%x835))^x836);

    if (t199 != 2147454178LL) { NG(); } else { ; }
	
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

