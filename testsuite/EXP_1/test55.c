
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

uint64_t x5 = UINT64_MAX;
int16_t x8 = -1;
uint64_t t2 = 166604712030LLU;
static int16_t x15 = INT16_MIN;
int32_t x23 = INT32_MIN;
int16_t x24 = 0;
int32_t t5 = -28679;
static int16_t x25 = INT16_MIN;
int64_t t6 = 1188LL;
uint8_t x30 = 6U;
uint16_t x38 = 14U;
int8_t x39 = INT8_MIN;
uint8_t x42 = 1U;
uint8_t x50 = UINT8_MAX;
int32_t x55 = INT32_MAX;
static int32_t x62 = -456;
uint32_t x67 = 13U;
volatile int32_t x68 = 46;
int64_t x72 = -3525679552377LL;
int16_t x75 = -1;
static int64_t t18 = 125945LL;
int8_t x87 = 26;
uint32_t x89 = UINT32_MAX;
uint64_t x92 = UINT64_MAX;
int32_t x96 = -1;
static uint64_t x100 = 1431162702383LLU;
volatile uint64_t t22 = 52690284809957LLU;
int16_t x104 = INT16_MIN;
int16_t x113 = -1;
uint8_t x114 = 23U;
volatile int64_t t25 = 281223522LL;
int8_t x128 = INT8_MAX;
int64_t x131 = -24227147423LL;
int64_t x135 = 137869299631LL;
uint64_t t29 = 1563LLU;
uint16_t x142 = 5U;
volatile int64_t x144 = 10012331740193352LL;
static int64_t t31 = 552513262650456LL;
volatile int64_t t36 = -1029313371988780742LL;
uint32_t x174 = 176049U;
int8_t x180 = -42;
static volatile uint64_t t39 = 2LLU;
static int16_t x197 = -1;
int64_t x203 = INT64_MIN;
int16_t x205 = 1006;
static int32_t x212 = -20259;
uint16_t x213 = 95U;
int16_t x216 = INT16_MIN;
volatile int32_t t46 = -260198;
uint32_t x229 = 2072149U;
volatile uint64_t t49 = 103067331587208019LLU;
int64_t x241 = -140238969LL;
int64_t x245 = -144547902420LL;
uint32_t x251 = 4U;
volatile int32_t x258 = INT32_MIN;
int32_t x259 = INT32_MAX;
volatile int32_t t55 = 60408609;
volatile int64_t x261 = 4451717065LL;
int8_t x264 = 1;
volatile int64_t t56 = 1738543143453775771LL;
uint8_t x267 = UINT8_MAX;
int16_t x269 = INT16_MIN;
volatile int32_t x293 = 1;
uint16_t x296 = UINT16_MAX;
volatile int32_t x297 = 148836;
static int32_t x305 = 14011009;
int16_t x323 = INT16_MAX;
volatile int64_t t66 = -17205LL;
int8_t x325 = INT8_MIN;
int32_t x327 = INT32_MIN;
int64_t x337 = -13883884664972112LL;
int8_t x339 = INT8_MAX;
uint32_t x340 = UINT32_MAX;
volatile int64_t t73 = 16845514913LL;
uint64_t x372 = UINT64_MAX;
int32_t x381 = -1;
int8_t x384 = INT8_MIN;
uint16_t x391 = UINT16_MAX;
int8_t x400 = INT8_MIN;
volatile int64_t t79 = 1LL;
int16_t x401 = INT16_MIN;
static int8_t x402 = INT8_MAX;
uint64_t x413 = 14026092266903LLU;
int32_t x415 = -2;
int32_t x420 = INT32_MIN;
volatile int32_t t83 = 119258063;
int8_t x425 = 0;
static volatile uint64_t t88 = 10323986LLU;
int64_t t89 = 175666739247494LL;
static uint8_t x445 = 1U;
int32_t x446 = -3473086;
uint32_t x448 = 264255085U;
uint8_t x454 = 12U;
volatile int64_t t92 = -27LL;
volatile int64_t t93 = -1LL;
int8_t x464 = INT8_MIN;
static int32_t x472 = -8;
static volatile int64_t t96 = -7735LL;
int32_t x483 = INT32_MIN;
volatile uint64_t x510 = UINT64_MAX;
static int8_t x517 = -5;
volatile int64_t x521 = INT64_MAX;
int32_t t110 = -59261154;
uint64_t x541 = 79LLU;
uint64_t x542 = UINT64_MAX;
uint8_t x543 = 32U;
uint64_t x548 = UINT64_MAX;
uint64_t t112 = UINT64_MAX;
uint16_t x550 = UINT16_MAX;
uint32_t x552 = 29U;
static int32_t x557 = -1;
volatile int32_t t115 = -8126269;
static int64_t x563 = 19761LL;
int16_t x579 = INT16_MIN;
static int64_t x586 = INT64_MIN;
uint8_t x593 = UINT8_MAX;
uint16_t x598 = UINT16_MAX;
volatile uint8_t x600 = 3U;
volatile uint64_t x602 = UINT64_MAX;
int64_t t128 = -2344413641003312226LL;
int8_t x616 = -3;
uint8_t x618 = 4U;
int32_t x620 = -3631;
static int64_t x630 = INT64_MAX;
static volatile uint64_t t132 = 30886704LLU;
int8_t x638 = INT8_MIN;
static volatile int64_t t133 = -5108LL;
int8_t x646 = INT8_MIN;
volatile int16_t x648 = INT16_MIN;
static uint64_t x649 = 497LLU;
int64_t x651 = INT64_MIN;
static volatile int64_t x653 = INT64_MIN;
int16_t x660 = -2;
volatile uint64_t t138 = UINT64_MAX;
static volatile int64_t t139 = -3863411LL;
uint64_t t143 = 20LLU;
int16_t x699 = -1;
uint32_t t144 = UINT32_MAX;
volatile int64_t t146 = -427960152222LL;
int32_t t147 = -1551;
uint32_t x722 = 46679946U;
static volatile uint16_t x723 = 42U;
static uint64_t x728 = 1LLU;
uint64_t x734 = 212259892LLU;
int32_t x735 = -1;
volatile int64_t t152 = 265909116359484797LL;
uint32_t x742 = UINT32_MAX;
int16_t x743 = INT16_MIN;
int64_t t153 = 6LL;
uint32_t x753 = 257069956U;
int32_t x754 = 410;
int8_t x755 = -1;
volatile uint32_t t155 = 23940U;
static int8_t x768 = INT8_MAX;
volatile int8_t x777 = -1;
uint8_t x785 = 9U;
int64_t x787 = 1050149578052519LL;
volatile int8_t x791 = INT8_MAX;
uint64_t t163 = 419668963LLU;
volatile int8_t x798 = INT8_MAX;
volatile int32_t t165 = 641796556;
uint16_t x809 = 1317U;
int8_t x820 = -1;
volatile uint32_t t168 = 17724751U;
int8_t x836 = INT8_MIN;
volatile int64_t t171 = -7468284691861290LL;
uint16_t x842 = 6U;
int32_t x843 = 28700;
uint64_t t173 = 157486286302248LLU;
uint8_t x851 = UINT8_MAX;
volatile uint16_t x854 = 9U;
volatile int32_t t175 = -1;
uint8_t x858 = 12U;
uint32_t x865 = 51258009U;
volatile int32_t x870 = INT32_MIN;
int16_t x877 = -492;
int64_t t180 = INT64_MAX;
uint16_t x883 = 10245U;
uint64_t x886 = 2193863680418LLU;
volatile uint8_t x894 = 25U;
uint8_t x897 = 109U;
int16_t x901 = -1;
int8_t x902 = INT8_MIN;
int8_t x906 = INT8_MIN;
uint64_t t187 = 253LLU;
static uint64_t x923 = 8248232489000842858LLU;
uint32_t x926 = 2U;
int16_t x935 = INT16_MAX;
volatile int64_t x936 = INT64_MAX;
int8_t x948 = INT8_MAX;
uint64_t x951 = 5715771272LLU;
static volatile uint64_t t197 = 497LLU;
int16_t x958 = INT16_MIN;


void f0(void) {
    	volatile uint16_t x1 = UINT16_MAX;
	static int8_t x2 = -1;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 3U;
	static int32_t t0 = -23018;

    t0 = (((x1+x2)/x3)|x4);

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = INT32_MIN;
	volatile int32_t x7 = 6;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (((x5+x6)/x7)|x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static uint64_t x10 = 46490812LLU;
	static int8_t x11 = INT8_MAX;
	volatile int32_t x12 = INT32_MAX;

    t2 = (((x9+x10)/x11)|x12);

    if (t2 != 72624978545082367LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 1U;
	static int32_t x14 = -1;
	uint16_t x16 = 107U;
	static volatile int32_t t3 = 0;

    t3 = (((x13+x14)/x15)|x16);

    if (t3 != 107) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -305340LL;
	int32_t x18 = 158;
	static int32_t x19 = 930;
	int8_t x20 = -3;
	static int64_t t4 = -39155372988887015LL;

    t4 = (((x17+x18)/x19)|x20);

    if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -24731016;
	int16_t x22 = 11138;

    t5 = (((x21+x22)/x23)|x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = 494470319;
	int64_t x27 = INT64_MIN;
	static int8_t x28 = 14;

    t6 = (((x25+x26)/x27)|x28);

    if (t6 != 14LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x31 = 260960748020960643LLU;
	int8_t x32 = INT8_MIN;
	static uint64_t t7 = 122LLU;

    t7 = (((x29+x30)/x31)|x32);

    if (t7 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	static volatile int8_t x40 = INT8_MIN;
	int32_t t8 = -2167280;

    t8 = (((x37+x38)/x39)|x40);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -13;
	uint64_t x43 = UINT64_MAX;
	volatile uint32_t x44 = 797778U;
	volatile uint64_t t9 = 43400255145617684LLU;

    t9 = (((x41+x42)/x43)|x44);

    if (t9 != 797778LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = INT8_MAX;
	uint8_t x51 = UINT8_MAX;
	volatile uint32_t x52 = 2U;
	volatile uint32_t t10 = 152596U;

    t10 = (((x49+x50)/x51)|x52);

    if (t10 != 3U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x53 = INT64_MAX;
	int8_t x54 = -1;
	volatile uint64_t x56 = 31657036702LLU;
	uint64_t t11 = 59684912LLU;

    t11 = (((x53+x54)/x55)|x56);

    if (t11 != 31657036702LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -251090;
	volatile int16_t x58 = -1;
	static uint8_t x59 = 19U;
	volatile uint32_t x60 = 0U;
	uint32_t t12 = 10389U;

    t12 = (((x57+x58)/x59)|x60);

    if (t12 != 4294954081U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	uint64_t x63 = 86874387117619672LLU;
	volatile int16_t x64 = -1;
	uint64_t t13 = UINT64_MAX;

    t13 = (((x61+x62)/x63)|x64);

    if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	uint32_t t14 = 39U;

    t14 = (((x65+x66)/x67)|x68);

    if (t14 != 330379583U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x69 = 93283U;
	int8_t x70 = INT8_MAX;
	static int64_t x71 = -1LL;
	volatile int64_t t15 = 1008028073LL;

    t15 = (((x69+x70)/x71)|x72);

    if (t15 != -1121LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	int16_t x74 = -1;
	int64_t x76 = INT64_MIN;
	static int64_t t16 = -90713580221749252LL;

    t16 = (((x73+x74)/x75)|x76);

    if (t16 != -254LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MAX;
	uint64_t x79 = 48784LLU;
	volatile int64_t x80 = INT64_MIN;
	volatile uint64_t t17 = 65144507268345307LLU;

    t17 = (((x77+x78)/x79)|x80);

    if (t17 != 9223561102368814319LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x81 = 0;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -3477185LL;

    t18 = (((x81+x82)/x83)|x84);

    if (t18 != -3477185LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 811LLU;
	static int8_t x86 = -9;
	uint8_t x88 = UINT8_MAX;
	uint64_t t19 = 195485763LLU;

    t19 = (((x85+x86)/x87)|x88);

    if (t19 != 255LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x90 = INT8_MAX;
	uint64_t x91 = UINT64_MAX;
	volatile uint64_t t20 = UINT64_MAX;

    t20 = (((x89+x90)/x91)|x92);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MAX;
	static int8_t x94 = -1;
	static int64_t x95 = INT64_MIN;
	int64_t t21 = -17611001LL;

    t21 = (((x93+x94)/x95)|x96);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x97 = 475281U;
	volatile int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;

    t22 = (((x97+x98)/x99)|x100);

    if (t22 != 1431162702383LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = -1LL;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	int64_t t23 = -26140904805LL;

    t23 = (((x101+x102)/x103)|x104);

    if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MIN;
	int8_t x110 = -12;
	volatile int64_t x111 = INT64_MIN;
	int8_t x112 = -1;
	volatile int64_t t24 = -6844LL;

    t24 = (((x109+x110)/x111)|x112);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x115 = 3224493U;
	int64_t x116 = -259232855588LL;

    t25 = (((x113+x114)/x115)|x116);

    if (t25 != -259232855588LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = -1;
	static uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 17U;
	volatile int64_t x120 = INT64_MIN;
	volatile int64_t t26 = -3LL;

    t26 = (((x117+x118)/x119)|x120);

    if (t26 != -9223372036854771954LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = -6;
	uint32_t x126 = UINT32_MAX;
	uint64_t x127 = 1722383320024LLU;
	uint64_t t27 = 735783LLU;

    t27 = (((x125+x126)/x127)|x128);

    if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	int16_t x132 = 258;
	uint64_t t28 = 32820770976635491LLU;

    t28 = (((x129+x130)/x131)|x132);

    if (t28 != 259LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x133 = 3LLU;
	int64_t x134 = INT64_MIN;
	int8_t x136 = INT8_MAX;

    t29 = (((x133+x134)/x135)|x136);

    if (t29 != 66899455LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = -1;
	volatile int16_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	int64_t t30 = INT64_MIN;

    t30 = (((x137+x138)/x139)|x140);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 47191U;
	volatile int8_t x143 = INT8_MIN;

    t31 = (((x141+x142)/x143)|x144);

    if (t31 != 10012331740193352LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x145 = -1;
	int8_t x146 = 48;
	volatile int64_t x147 = -55LL;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t32 = -52579LL;

    t32 = (((x145+x146)/x147)|x148);

    if (t32 != -128LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = 6;
	volatile int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 1;
	static volatile int32_t t33 = -5783145;

    t33 = (((x149+x150)/x151)|x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x153 = 3;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = -52114LL;
	int16_t x156 = INT16_MIN;
	volatile int64_t t34 = -3822679770870LL;

    t34 = (((x153+x154)/x155)|x156);

    if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MIN;
	static int8_t x158 = 1;
	int32_t x159 = INT32_MIN;
	int8_t x160 = -1;
	int64_t t35 = 44117LL;

    t35 = (((x157+x158)/x159)|x160);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x169 = -1974421893732LL;
	static int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MIN;

    t36 = (((x169+x170)/x171)|x172);

    if (t36 != -7742830956LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = 54815649544LLU;
	volatile uint32_t x175 = UINT32_MAX;
	int32_t x176 = 1;
	volatile uint64_t t37 = 7042946001LLU;

    t37 = (((x173+x174)/x175)|x176);

    if (t37 != 13LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	static int16_t x179 = INT16_MIN;
	volatile uint64_t t38 = 2LLU;

    t38 = (((x177+x178)/x179)|x180);

    if (t38 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x185 = 122654985927419LLU;
	int16_t x186 = 15671;
	int16_t x187 = INT16_MIN;
	static int16_t x188 = 3076;

    t39 = (((x185+x186)/x187)|x188);

    if (t39 != 3076LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x189 = 56018U;
	uint8_t x190 = 3U;
	volatile uint32_t x191 = 302997912U;
	uint32_t x192 = 3U;
	uint32_t t40 = 13U;

    t40 = (((x189+x190)/x191)|x192);

    if (t40 != 3U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x193 = 5LL;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	int16_t x196 = -1;
	int64_t t41 = 2513026776535899404LL;

    t41 = (((x193+x194)/x195)|x196);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x198 = -1LL;
	volatile uint32_t x199 = 1278158479U;
	int8_t x200 = INT8_MIN;
	int64_t t42 = 63834825LL;

    t42 = (((x197+x198)/x199)|x200);

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x201 = INT16_MAX;
	int32_t x202 = -1384;
	int32_t x204 = 612226524;
	int64_t t43 = 1544LL;

    t43 = (((x201+x202)/x203)|x204);

    if (t43 != 612226524LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x206 = 1U;
	int16_t x207 = -1;
	static int64_t x208 = -1LL;
	int64_t t44 = 361913289773652991LL;

    t44 = (((x205+x206)/x207)|x208);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x209 = 39267833LLU;
	int64_t x210 = -17966222981667LL;
	int8_t x211 = INT8_MIN;
	uint64_t t45 = 80644813LLU;

    t45 = (((x209+x210)/x211)|x212);

    if (t45 != 18446744073709531357LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x214 = 1U;
	volatile int8_t x215 = INT8_MIN;

    t46 = (((x213+x214)/x215)|x216);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x217 = 448437;
	static int16_t x218 = 26;
	uint32_t x219 = 13611468U;
	uint32_t x220 = 198454U;
	static volatile uint32_t t47 = 230268U;

    t47 = (((x217+x218)/x219)|x220);

    if (t47 != 198454U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 187776U;
	static uint64_t x223 = UINT64_MAX;
	volatile uint8_t x224 = 3U;
	static volatile uint64_t t48 = 13130705595490377LLU;

    t48 = (((x221+x222)/x223)|x224);

    if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x230 = INT8_MAX;
	uint64_t x231 = 2LLU;
	uint32_t x232 = UINT32_MAX;

    t49 = (((x229+x230)/x231)|x232);

    if (t49 != 4294967295LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x237 = -28952466;
	int16_t x238 = INT16_MIN;
	int64_t x239 = 7645591150501LL;
	uint32_t x240 = 160987U;
	int64_t t50 = -549777LL;

    t50 = (((x237+x238)/x239)|x240);

    if (t50 != 160987LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x242 = 867212716540LL;
	int16_t x243 = -1;
	static volatile uint64_t x244 = 72255864983874LLU;
	volatile uint64_t t51 = 3549LLU;

    t51 = (((x241+x242)/x243)|x244);

    if (t51 != 18446743762315769727LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x246 = INT8_MIN;
	uint16_t x247 = 3569U;
	static volatile int32_t x248 = 373;
	static int64_t t52 = -11187LL;

    t52 = (((x245+x246)/x247)|x248);

    if (t52 != -40500873LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x249 = 0U;
	uint8_t x250 = 1U;
	int64_t x252 = INT64_MAX;
	volatile int64_t t53 = INT64_MAX;

    t53 = (((x249+x250)/x251)|x252);

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x253 = -1;
	int64_t x254 = -1LL;
	int32_t x255 = -30365;
	int8_t x256 = -1;
	volatile int64_t t54 = -47LL;

    t54 = (((x253+x254)/x255)|x256);

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x257 = UINT16_MAX;
	uint8_t x260 = UINT8_MAX;

    t55 = (((x257+x258)/x259)|x260);

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x262 = 12;
	volatile uint8_t x263 = UINT8_MAX;

    t56 = (((x261+x262)/x263)|x264);

    if (t56 != 17457715LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x265 = 1097194366783019LLU;
	int8_t x266 = 0;
	int64_t x268 = 11211654LL;
	uint64_t t57 = 253517280LLU;

    t57 = (((x265+x266)/x267)|x268);

    if (t57 != 4302734087062LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x270 = 839005294U;
	int64_t x271 = INT64_MAX;
	static int16_t x272 = 466;
	int64_t t58 = 3256545739335LL;

    t58 = (((x269+x270)/x271)|x272);

    if (t58 != 466LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x273 = -10;
	volatile uint32_t x274 = 3026694U;
	int32_t x275 = INT32_MAX;
	volatile uint64_t x276 = 4LLU;
	static uint64_t t59 = 61490870144LLU;

    t59 = (((x273+x274)/x275)|x276);

    if (t59 != 4LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x289 = 3U;
	uint16_t x290 = 77U;
	int64_t x291 = 1312569321058418006LL;
	int64_t x292 = -1LL;
	static int64_t t60 = -407433965118108LL;

    t60 = (((x289+x290)/x291)|x292);

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int32_t t61 = -713885;

    t61 = (((x293+x294)/x295)|x296);

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x298 = UINT64_MAX;
	volatile int64_t x299 = INT64_MIN;
	uint8_t x300 = 28U;
	volatile uint64_t t62 = 13006832694LLU;

    t62 = (((x297+x298)/x299)|x300);

    if (t62 != 28LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x306 = INT32_MIN;
	volatile uint16_t x307 = 26U;
	uint8_t x308 = 21U;
	int32_t t63 = 0;

    t63 = (((x305+x306)/x307)|x308);

    if (t63 != -82056619) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x309 = -1;
	volatile uint32_t x310 = 188102U;
	volatile int16_t x311 = 11936;
	volatile int16_t x312 = INT16_MAX;
	uint32_t t64 = 44952355U;

    t64 = (((x309+x310)/x311)|x312);

    if (t64 != 32767U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = -2915340;
	volatile int64_t x319 = -632LL;
	int16_t x320 = 243;
	volatile int64_t t65 = -1773563340705216LL;

    t65 = (((x317+x318)/x319)|x320);

    if (t65 != 4595LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x321 = -1;
	int32_t x322 = -1;
	static int64_t x324 = -1LL;

    t66 = (((x321+x322)/x323)|x324);

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x326 = 832831LLU;
	int32_t x328 = INT32_MAX;
	static volatile uint64_t t67 = 18843581720131LLU;

    t67 = (((x325+x326)/x327)|x328);

    if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x329 = INT8_MIN;
	volatile uint16_t x330 = 1917U;
	uint64_t x331 = 7065460341968LLU;
	int32_t x332 = 106534950;
	volatile uint64_t t68 = 7169262342395988LLU;

    t68 = (((x329+x330)/x331)|x332);

    if (t68 != 106534950LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x338 = 10;
	volatile int64_t t69 = 242105971297918007LL;

    t69 = (((x337+x338)/x339)|x340);

    if (t69 != -109319802585089LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x341 = INT32_MIN;
	uint32_t x342 = 244U;
	static int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t70 = -3521638LL;

    t70 = (((x341+x342)/x343)|x344);

    if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x357 = INT16_MIN;
	static uint32_t x358 = UINT32_MAX;
	int64_t x359 = -222LL;
	volatile uint64_t x360 = 24553625LLU;
	volatile uint64_t t71 = 2718191357496LLU;

    t71 = (((x357+x358)/x359)|x360);

    if (t71 != 18446744073709480857LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x361 = INT16_MIN;
	static uint16_t x362 = UINT16_MAX;
	int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;
	static int64_t t72 = -108913409823829LL;

    t72 = (((x361+x362)/x363)|x364);

    if (t72 != -32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x365 = INT32_MAX;
	volatile int64_t x366 = -1LL;
	int32_t x367 = 6128;
	int32_t x368 = 25141;

    t73 = (((x365+x366)/x367)|x368);

    if (t73 != 359157LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x369 = 12U;
	int8_t x370 = -1;
	volatile uint64_t x371 = UINT64_MAX;
	uint64_t t74 = UINT64_MAX;

    t74 = (((x369+x370)/x371)|x372);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x373 = -1LL;
	static volatile int64_t x374 = 9560772661LL;
	static volatile uint8_t x375 = 1U;
	uint8_t x376 = 110U;
	volatile int64_t t75 = 781594728LL;

    t75 = (((x373+x374)/x375)|x376);

    if (t75 != 9560772734LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x382 = 12860;
	int64_t x383 = -1LL;
	volatile int64_t t76 = 874682827197LL;

    t76 = (((x381+x382)/x383)|x384);

    if (t76 != -59LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

    t77 = (((x385+x386)/x387)|x388);

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x389 = 0;
	volatile uint8_t x390 = 62U;
	uint32_t x392 = 840096957U;
	volatile uint32_t t78 = 47U;

    t78 = (((x389+x390)/x391)|x392);

    if (t78 != 840096957U) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x397 = -1;
	int64_t x398 = -43211442881LL;
	int16_t x399 = -3908;

    t79 = (((x397+x398)/x399)|x400);

    if (t79 != -105LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x403 = 63605U;
	uint8_t x404 = 2U;
	uint32_t t80 = 38648723U;

    t80 = (((x401+x402)/x403)|x404);

    if (t80 != 67527U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x409 = INT8_MIN;
	static volatile uint8_t x410 = UINT8_MAX;
	volatile int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	int64_t t81 = 137690435476384LL;

    t81 = (((x409+x410)/x411)|x412);

    if (t81 != -127LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x414 = 182935622863786LL;
	static volatile uint32_t x416 = UINT32_MAX;
	static uint64_t t82 = 63035514823LLU;

    t82 = (((x413+x414)/x415)|x416);

    if (t82 != 4294967295LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x417 = INT8_MIN;
	int8_t x418 = 5;
	volatile uint8_t x419 = 48U;

    t83 = (((x417+x418)/x419)|x420);

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x421 = 468;
	int8_t x422 = INT8_MIN;
	uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 40U;
	uint64_t t84 = 13485383136223642LLU;

    t84 = (((x421+x422)/x423)|x424);

    if (t84 != 40LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x426 = 9U;
	uint16_t x427 = UINT16_MAX;
	volatile int32_t x428 = INT32_MIN;
	static int32_t t85 = INT32_MIN;

    t85 = (((x425+x426)/x427)|x428);

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x429 = 3637724U;
	uint64_t x430 = 156719LLU;
	int64_t x431 = -1LL;
	uint32_t x432 = 41484452U;
	volatile uint64_t t86 = 64479356684LLU;

    t86 = (((x429+x430)/x431)|x432);

    if (t86 != 41484452LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x433 = 19693LLU;
	volatile int64_t x434 = 3333584LL;
	volatile uint8_t x435 = 5U;
	volatile uint64_t x436 = 378538338032621640LLU;
	static uint64_t t87 = 748271186LLU;

    t87 = (((x433+x434)/x435)|x436);

    if (t87 != 378538338032761855LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x437 = 1623577123106LLU;
	uint64_t x438 = 1459526543892LLU;
	int64_t x439 = -229024527081LL;
	uint64_t x440 = 2217370064LLU;

    t88 = (((x437+x438)/x439)|x440);

    if (t88 != 2217370064LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x441 = -1LL;
	static int8_t x442 = INT8_MIN;
	uint8_t x443 = 7U;
	int32_t x444 = INT32_MIN;

    t89 = (((x441+x442)/x443)|x444);

    if (t89 != -18LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x447 = 3334U;
	uint32_t t90 = 6U;

    t90 = (((x445+x446)/x447)|x448);

    if (t90 != 4294967279U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x449 = 24812LL;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = 28209466;
	int16_t x452 = INT16_MIN;
	int64_t t91 = 698LL;

    t91 = (((x449+x450)/x451)|x452);

    if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x453 = -43;
	int64_t x455 = -1LL;
	int16_t x456 = 26;

    t92 = (((x453+x454)/x455)|x456);

    if (t92 != 31LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x457 = 4;
	int8_t x458 = INT8_MIN;
	int64_t x459 = INT64_MAX;
	static int16_t x460 = INT16_MAX;

    t93 = (((x457+x458)/x459)|x460);

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x461 = 2U;
	int8_t x462 = -2;
	uint16_t x463 = UINT16_MAX;
	volatile int32_t t94 = 2;

    t94 = (((x461+x462)/x463)|x464);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x465 = UINT32_MAX;
	volatile uint8_t x466 = 23U;
	uint64_t x467 = 517128335248119LLU;
	int16_t x468 = INT16_MIN;
	volatile uint64_t t95 = 105242703484LLU;

    t95 = (((x465+x466)/x467)|x468);

    if (t95 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x469 = 44U;
	int64_t x470 = 263540449094002LL;
	int32_t x471 = -1;

    t96 = (((x469+x470)/x471)|x472);

    if (t96 != -6LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x477 = UINT8_MAX;
	uint32_t x478 = 77U;
	uint16_t x479 = 782U;
	volatile int32_t x480 = -7854511;
	static volatile uint32_t t97 = 336U;

    t97 = (((x477+x478)/x479)|x480);

    if (t97 != 4287112785U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x481 = INT64_MIN;
	int32_t x482 = INT32_MAX;
	uint64_t x484 = 90387544447746LLU;
	static volatile uint64_t t98 = 6510178081116957LLU;

    t98 = (((x481+x482)/x483)|x484);

    if (t98 != 90387586744319LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x485 = 50227216;
	volatile int8_t x486 = -15;
	uint8_t x487 = UINT8_MAX;
	int64_t x488 = INT64_MIN;
	volatile int64_t t99 = 3LL;

    t99 = (((x485+x486)/x487)|x488);

    if (t99 != -9223372036854578839LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x493 = UINT32_MAX;
	static int64_t x494 = INT64_MIN;
	int8_t x495 = -14;
	volatile uint64_t x496 = 13LLU;
	uint64_t t100 = 0LLU;

    t100 = (((x493+x494)/x495)|x496);

    if (t100 != 658812288039986335LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x501 = UINT16_MAX;
	int16_t x502 = INT16_MAX;
	static int32_t x503 = -995466561;
	int16_t x504 = INT16_MIN;
	int32_t t101 = 15030344;

    t101 = (((x501+x502)/x503)|x504);

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x505 = -1;
	int8_t x506 = -1;
	int32_t x507 = -1;
	uint16_t x508 = 45U;
	int32_t t102 = -41792;

    t102 = (((x505+x506)/x507)|x508);

    if (t102 != 47) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x509 = 2039U;
	int16_t x511 = INT16_MIN;
	int8_t x512 = INT8_MIN;
	uint64_t t103 = 42LLU;

    t103 = (((x509+x510)/x511)|x512);

    if (t103 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x513 = -1;
	uint64_t x514 = UINT64_MAX;
	static int16_t x515 = -1;
	int16_t x516 = -1;
	uint64_t t104 = UINT64_MAX;

    t104 = (((x513+x514)/x515)|x516);

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x518 = 2U;
	static uint32_t x519 = 71170U;
	int32_t x520 = 2;
	volatile uint32_t t105 = 138356U;

    t105 = (((x517+x518)/x519)|x520);

    if (t105 != 60350U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x522 = -1;
	int16_t x523 = INT16_MIN;
	static int64_t x524 = 259453782204393589LL;
	volatile int64_t t106 = 26593206040LL;

    t106 = (((x521+x522)/x523)|x524);

    if (t106 != -66146322831243LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x525 = 0U;
	uint16_t x526 = 97U;
	int16_t x527 = 5552;
	static int16_t x528 = -1;
	volatile uint32_t t107 = UINT32_MAX;

    t107 = (((x525+x526)/x527)|x528);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x529 = -1;
	volatile int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MIN;
	int64_t x532 = -1LL;
	static volatile int64_t t108 = 1LL;

    t108 = (((x529+x530)/x531)|x532);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x533 = 3500643797LLU;
	int16_t x534 = INT16_MIN;
	volatile int32_t x535 = INT32_MIN;
	static uint64_t x536 = 23090804138LLU;
	volatile uint64_t t109 = 2008389442510LLU;

    t109 = (((x533+x534)/x535)|x536);

    if (t109 != 23090804138LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x537 = 14U;
	static int32_t x538 = INT32_MIN;
	uint8_t x539 = 89U;
	volatile uint8_t x540 = 4U;

    t110 = (((x537+x538)/x539)|x540);

    if (t110 != -24129025) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x544 = 413412;
	uint64_t t111 = 2003684250262LLU;

    t111 = (((x541+x542)/x543)|x544);

    if (t111 != 413414LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile uint32_t x546 = 38200U;
	int32_t x547 = INT32_MAX;

    t112 = (((x545+x546)/x547)|x548);

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x549 = 46684U;
	static int8_t x551 = INT8_MIN;
	volatile uint32_t t113 = 2082311968U;

    t113 = (((x549+x550)/x551)|x552);

    if (t113 != 29U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x553 = UINT64_MAX;
	static volatile int8_t x554 = -1;
	uint32_t x555 = 3494404U;
	int16_t x556 = -3;
	uint64_t t114 = UINT64_MAX;

    t114 = (((x553+x554)/x555)|x556);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x558 = 6U;
	volatile uint8_t x559 = 30U;
	int32_t x560 = -1;

    t115 = (((x557+x558)/x559)|x560);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x561 = INT8_MIN;
	int64_t x562 = -5LL;
	int64_t x564 = INT64_MIN;
	volatile int64_t t116 = INT64_MIN;

    t116 = (((x561+x562)/x563)|x564);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x565 = -117554LL;
	uint32_t x566 = 343129660U;
	volatile int64_t x567 = -410557299LL;
	uint32_t x568 = UINT32_MAX;
	int64_t t117 = 804LL;

    t117 = (((x565+x566)/x567)|x568);

    if (t117 != 4294967295LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x569 = 773280832565503689LLU;
	static int16_t x570 = INT16_MAX;
	uint8_t x571 = 1U;
	static volatile int16_t x572 = INT16_MAX;
	uint64_t t118 = 2041217684595LLU;

    t118 = (((x569+x570)/x571)|x572);

    if (t118 != 773280832565542911LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x573 = -48;
	int64_t x574 = INT64_MAX;
	int32_t x575 = 44563;
	int32_t x576 = INT32_MIN;
	int64_t t119 = -16111592926LL;

    t119 = (((x573+x574)/x575)|x576);

    if (t119 != -705691954LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x577 = 7U;
	int32_t x578 = INT32_MIN;
	int16_t x580 = -1;
	uint32_t t120 = UINT32_MAX;

    t120 = (((x577+x578)/x579)|x580);

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x581 = UINT8_MAX;
	volatile int8_t x582 = INT8_MIN;
	int32_t x583 = 842502;
	uint16_t x584 = 392U;
	volatile int32_t t121 = -371;

    t121 = (((x581+x582)/x583)|x584);

    if (t121 != 392) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x585 = UINT32_MAX;
	int32_t x587 = INT32_MIN;
	int16_t x588 = INT16_MIN;
	static int64_t t122 = -5LL;

    t122 = (((x585+x586)/x587)|x588);

    if (t122 != -2LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x589 = -51;
	uint16_t x590 = 1U;
	static int8_t x591 = INT8_MIN;
	static int64_t x592 = INT64_MIN;
	volatile int64_t t123 = INT64_MIN;

    t123 = (((x589+x590)/x591)|x592);

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x594 = 60;
	uint8_t x595 = 46U;
	int16_t x596 = INT16_MIN;
	volatile int32_t t124 = 47276576;

    t124 = (((x593+x594)/x595)|x596);

    if (t124 != -32762) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x597 = 1923U;
	static uint64_t x599 = 40827311827LLU;
	volatile uint64_t t125 = 24522023017182530LLU;

    t125 = (((x597+x598)/x599)|x600);

    if (t125 != 3LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x601 = 100U;
	int16_t x603 = INT16_MIN;
	uint64_t x604 = UINT64_MAX;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (((x601+x602)/x603)|x604);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x605 = 1068U;
	uint64_t x606 = 0LLU;
	static int32_t x607 = -2338653;
	uint32_t x608 = 792700U;
	volatile uint64_t t127 = 79424LLU;

    t127 = (((x605+x606)/x607)|x608);

    if (t127 != 792700LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x609 = -10;
	int8_t x610 = -1;
	volatile int16_t x611 = INT16_MIN;
	static int64_t x612 = -1LL;

    t128 = (((x609+x610)/x611)|x612);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x613 = INT64_MAX;
	int16_t x614 = -10;
	volatile uint32_t x615 = UINT32_MAX;
	volatile int64_t t129 = 1422242709849LL;

    t129 = (((x613+x614)/x615)|x616);

    if (t129 != -3LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x617 = 10LLU;
	uint32_t x619 = 269U;
	volatile uint64_t t130 = 1383700LLU;

    t130 = (((x617+x618)/x619)|x620);

    if (t130 != 18446744073709547985LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x625 = -1;
	uint8_t x626 = 1U;
	uint64_t x627 = UINT64_MAX;
	volatile int64_t x628 = 13096301784892782LL;
	volatile uint64_t t131 = 5LLU;

    t131 = (((x625+x626)/x627)|x628);

    if (t131 != 13096301784892782LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x629 = 5007061226077080801LLU;
	volatile int32_t x631 = -1;
	volatile uint64_t x632 = 399811463620LLU;

    t132 = (((x629+x630)/x631)|x632);

    if (t132 != 399811463620LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x637 = 10469LL;
	static int64_t x639 = INT64_MIN;
	volatile int32_t x640 = INT32_MIN;

    t133 = (((x637+x638)/x639)|x640);

    if (t133 != -2147483648LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x645 = INT64_MAX;
	volatile int32_t x647 = 3807;
	int64_t t134 = -403905931902484LL;

    t134 = (((x645+x646)/x647)|x648);

    if (t134 != -24239LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x650 = 8U;
	volatile int16_t x652 = -1;
	volatile uint64_t t135 = UINT64_MAX;

    t135 = (((x649+x650)/x651)|x652);

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x654 = 5U;
	int8_t x655 = 43;
	static int64_t x656 = -1LL;
	int64_t t136 = -938264373982738LL;

    t136 = (((x653+x654)/x655)|x656);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x657 = -1LL;
	int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MIN;
	int64_t t137 = -114448531LL;

    t137 = (((x657+x658)/x659)|x660);

    if (t137 != -2LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x661 = 3U;
	static uint64_t x662 = 217392193066204939LLU;
	static uint16_t x663 = 25U;
	uint64_t x664 = UINT64_MAX;

    t138 = (((x661+x662)/x663)|x664);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x673 = INT16_MAX;
	int64_t x674 = 29152877487LL;
	volatile uint8_t x675 = UINT8_MAX;
	volatile uint8_t x676 = 0U;

    t139 = (((x673+x674)/x675)|x676);

    if (t139 != 114325138LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x677 = 4376928912LLU;
	volatile uint32_t x678 = UINT32_MAX;
	int8_t x679 = INT8_MIN;
	static volatile uint16_t x680 = UINT16_MAX;
	uint64_t t140 = 309038602480LLU;

    t140 = (((x677+x678)/x679)|x680);

    if (t140 != 65535LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x681 = INT8_MIN;
	int64_t x682 = 499LL;
	int16_t x683 = -6767;
	int64_t x684 = INT64_MIN;
	volatile int64_t t141 = INT64_MIN;

    t141 = (((x681+x682)/x683)|x684);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x689 = 1278638U;
	uint32_t x690 = 365648U;
	int8_t x691 = INT8_MIN;
	int32_t x692 = -27;
	volatile uint32_t t142 = 28U;

    t142 = (((x689+x690)/x691)|x692);

    if (t142 != 4294967269U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x693 = UINT64_MAX;
	int64_t x694 = INT64_MIN;
	int16_t x695 = 683;
	static int32_t x696 = 109019;

    t143 = (((x693+x694)/x695)|x696);

    if (t143 != 13504205032107007LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x697 = 4U;
	uint32_t x698 = 0U;
	static int32_t x700 = -1;

    t144 = (((x697+x698)/x699)|x700);

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x705 = 0U;
	volatile uint8_t x706 = 7U;
	int8_t x707 = 57;
	volatile int32_t x708 = -266502200;
	volatile uint32_t t145 = 885871U;

    t145 = (((x705+x706)/x707)|x708);

    if (t145 != 4028465096U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x709 = INT32_MAX;
	volatile int64_t x710 = -1LL;
	int32_t x711 = -1;
	int64_t x712 = -1LL;

    t146 = (((x709+x710)/x711)|x712);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x717 = INT8_MIN;
	volatile int32_t x718 = 9;
	uint16_t x719 = 2620U;
	uint8_t x720 = 5U;

    t147 = (((x717+x718)/x719)|x720);

    if (t147 != 5) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x721 = UINT8_MAX;
	int32_t x724 = INT32_MIN;
	volatile uint32_t t148 = 112157U;

    t148 = (((x721+x722)/x723)|x724);

    if (t148 != 2148595081U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x725 = -2138981204LL;
	static volatile uint32_t x726 = 3387195U;
	int16_t x727 = INT16_MIN;
	volatile uint64_t t149 = 1464480138463043LLU;

    t149 = (((x725+x726)/x727)|x728);

    if (t149 != 65173LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x729 = INT16_MIN;
	int8_t x730 = -1;
	uint64_t x731 = UINT64_MAX;
	volatile int32_t x732 = INT32_MIN;
	uint64_t t150 = 2682897038LLU;

    t150 = (((x729+x730)/x731)|x732);

    if (t150 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x733 = 4U;
	int8_t x736 = -1;
	volatile uint64_t t151 = UINT64_MAX;

    t151 = (((x733+x734)/x735)|x736);

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x737 = INT64_MAX;
	int32_t x738 = -1;
	int32_t x739 = INT32_MIN;
	uint16_t x740 = 23778U;

    t152 = (((x737+x738)/x739)|x740);

    if (t152 != -4294943517LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x741 = -1;
	int64_t x744 = INT64_MIN;

    t153 = (((x741+x742)/x743)|x744);

    if (t153 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x749 = -13;
	int16_t x750 = INT16_MAX;
	static uint32_t x751 = 996112U;
	uint8_t x752 = UINT8_MAX;
	uint32_t t154 = 582U;

    t154 = (((x749+x750)/x751)|x752);

    if (t154 != 255U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x756 = INT32_MIN;

    t155 = (((x753+x754)/x755)|x756);

    if (t155 != 2147483648U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x757 = INT8_MIN;
	int16_t x758 = -1011;
	static volatile uint64_t x759 = 20LLU;
	uint16_t x760 = 23371U;
	uint64_t t156 = 37LLU;

    t156 = (((x757+x758)/x759)|x760);

    if (t156 != 922337203685482459LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x761 = 1221U;
	static volatile uint32_t x762 = UINT32_MAX;
	static uint16_t x763 = UINT16_MAX;
	volatile uint8_t x764 = UINT8_MAX;
	volatile uint32_t t157 = 598U;

    t157 = (((x761+x762)/x763)|x764);

    if (t157 != 255U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	static volatile uint64_t x766 = 3LLU;
	volatile int32_t x767 = 10191;
	static volatile uint64_t t158 = 6445042904671636277LLU;

    t158 = (((x765+x766)/x767)|x768);

    if (t158 != 127LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x773 = 67U;
	int64_t x774 = INT64_MIN;
	static int8_t x775 = 3;
	int64_t x776 = INT64_MAX;
	int64_t t159 = 424831252664496170LL;

    t159 = (((x773+x774)/x775)|x776);

    if (t159 != -1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x778 = 85973953U;
	int32_t x779 = INT32_MIN;
	int8_t x780 = 37;
	uint32_t t160 = 589970832U;

    t160 = (((x777+x778)/x779)|x780);

    if (t160 != 37U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x786 = INT8_MIN;
	int8_t x788 = 2;
	int64_t t161 = 4656655816414454LL;

    t161 = (((x785+x786)/x787)|x788);

    if (t161 != 2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x789 = 7;
	int16_t x790 = -7;
	static int64_t x792 = -165718739943790LL;
	int64_t t162 = 1894911LL;

    t162 = (((x789+x790)/x791)|x792);

    if (t162 != -165718739943790LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x793 = 7U;
	static int8_t x794 = 2;
	uint32_t x795 = 136U;
	uint64_t x796 = 51247507LLU;

    t163 = (((x793+x794)/x795)|x796);

    if (t163 != 51247507LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x797 = 12U;
	int32_t x799 = 1;
	int16_t x800 = -1;
	static int32_t t164 = 334;

    t164 = (((x797+x798)/x799)|x800);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x801 = INT16_MAX;
	static uint8_t x802 = 29U;
	uint8_t x803 = UINT8_MAX;
	static uint16_t x804 = UINT16_MAX;

    t165 = (((x801+x802)/x803)|x804);

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x810 = INT8_MAX;
	uint64_t x811 = 28468854194731293LLU;
	int32_t x812 = -1;
	volatile uint64_t t166 = UINT64_MAX;

    t166 = (((x809+x810)/x811)|x812);

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x817 = 0U;
	int16_t x818 = 9929;
	int64_t x819 = INT64_MAX;
	volatile int64_t t167 = 21427725845LL;

    t167 = (((x817+x818)/x819)|x820);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x821 = INT8_MIN;
	static uint32_t x822 = 106U;
	int8_t x823 = INT8_MIN;
	static uint8_t x824 = 0U;

    t168 = (((x821+x822)/x823)|x824);

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x825 = INT32_MAX;
	volatile int16_t x826 = -1;
	int32_t x827 = INT32_MAX;
	int8_t x828 = INT8_MAX;
	volatile int32_t t169 = 654484;

    t169 = (((x825+x826)/x827)|x828);

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x829 = INT16_MIN;
	static int16_t x830 = INT16_MAX;
	int32_t x831 = INT32_MAX;
	int64_t x832 = INT64_MIN;
	int64_t t170 = INT64_MIN;

    t170 = (((x829+x830)/x831)|x832);

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = INT64_MIN;
	int32_t x835 = -2080;

    t171 = (((x833+x834)/x835)|x836);

    if (t171 != -113LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x841 = -50;
	volatile uint64_t x844 = 321LLU;
	uint64_t t172 = 1572243LLU;

    t172 = (((x841+x842)/x843)|x844);

    if (t172 != 321LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x845 = INT16_MIN;
	int16_t x846 = INT16_MAX;
	volatile uint64_t x847 = 875137LLU;
	int16_t x848 = INT16_MIN;

    t173 = (((x845+x846)/x847)|x848);

    if (t173 != 18446744073709536307LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x849 = 0;
	uint64_t x850 = 14618527294263LLU;
	volatile int64_t x852 = -1LL;
	static uint64_t t174 = UINT64_MAX;

    t174 = (((x849+x850)/x851)|x852);

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x853 = INT8_MAX;
	int32_t x855 = -1;
	int32_t x856 = INT32_MIN;

    t175 = (((x853+x854)/x855)|x856);

    if (t175 != -136) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x857 = INT64_MIN;
	volatile int64_t x859 = -1LL;
	uint64_t x860 = 5635LLU;
	volatile uint64_t t176 = 646417632441693636LLU;

    t176 = (((x857+x858)/x859)|x860);

    if (t176 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x861 = 4U;
	uint16_t x862 = 13U;
	uint8_t x863 = UINT8_MAX;
	int64_t x864 = INT64_MAX;
	volatile int64_t t177 = INT64_MAX;

    t177 = (((x861+x862)/x863)|x864);

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x866 = 1001U;
	int32_t x867 = INT32_MIN;
	int16_t x868 = -3263;
	volatile uint32_t t178 = 29U;

    t178 = (((x865+x866)/x867)|x868);

    if (t178 != 4294964033U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x869 = 39675756944LLU;
	volatile uint64_t x871 = UINT64_MAX;
	static volatile uint32_t x872 = UINT32_MAX;
	static volatile uint64_t t179 = 53026LLU;

    t179 = (((x869+x870)/x871)|x872);

    if (t179 != 4294967295LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x878 = UINT32_MAX;
	volatile int8_t x879 = -1;
	int64_t x880 = INT64_MAX;

    t180 = (((x877+x878)/x879)|x880);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x881 = -1;
	int64_t x882 = -1LL;
	int16_t x884 = INT16_MAX;
	volatile int64_t t181 = 4LL;

    t181 = (((x881+x882)/x883)|x884);

    if (t181 != 32767LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x885 = INT32_MIN;
	int16_t x887 = INT16_MIN;
	int16_t x888 = -1;
	uint64_t t182 = UINT64_MAX;

    t182 = (((x885+x886)/x887)|x888);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x889 = UINT8_MAX;
	int32_t x890 = INT32_MIN;
	static int64_t x891 = INT64_MIN;
	int32_t x892 = -1;
	int64_t t183 = -1638911518564906026LL;

    t183 = (((x889+x890)/x891)|x892);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x893 = INT32_MIN;
	uint16_t x895 = 1U;
	uint8_t x896 = 113U;
	volatile int32_t t184 = 58;

    t184 = (((x893+x894)/x895)|x896);

    if (t184 != -2147483527) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x898 = -252192134;
	static int32_t x899 = INT32_MAX;
	int8_t x900 = -1;
	volatile int32_t t185 = -3554;

    t185 = (((x897+x898)/x899)|x900);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x903 = -1309;
	uint64_t x904 = 146630431256026LLU;
	static uint64_t t186 = 912591610025LLU;

    t186 = (((x901+x902)/x903)|x904);

    if (t186 != 146630431256026LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x905 = 29261468460LLU;
	int8_t x907 = INT8_MIN;
	int8_t x908 = INT8_MIN;

    t187 = (((x905+x906)/x907)|x908);

    if (t187 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x909 = -1;
	uint64_t x910 = 17905084021LLU;
	int64_t x911 = -1LL;
	int64_t x912 = -24LL;
	volatile uint64_t t188 = 429LLU;

    t188 = (((x909+x910)/x911)|x912);

    if (t188 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x913 = 15U;
	static uint32_t x914 = 125947U;
	uint16_t x915 = 2945U;
	uint8_t x916 = 0U;
	uint32_t t189 = 806803U;

    t189 = (((x913+x914)/x915)|x916);

    if (t189 != 42U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x917 = 49143374851757463LLU;
	int64_t x918 = 1242916532079100LL;
	static int64_t x919 = -261354745035858807LL;
	int64_t x920 = INT64_MIN;
	static volatile uint64_t t190 = 53215LLU;

    t190 = (((x917+x918)/x919)|x920);

    if (t190 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x921 = INT8_MAX;
	volatile int64_t x922 = INT64_MIN;
	int32_t x924 = INT32_MIN;
	uint64_t t191 = 1821979152485LLU;

    t191 = (((x921+x922)/x923)|x924);

    if (t191 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x925 = -1;
	int64_t x927 = -1LL;
	uint64_t x928 = 65LLU;
	uint64_t t192 = UINT64_MAX;

    t192 = (((x925+x926)/x927)|x928);

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x929 = 5786;
	static int8_t x930 = -1;
	uint64_t x931 = UINT64_MAX;
	volatile int64_t x932 = INT64_MIN;
	uint64_t t193 = 461741977415065911LLU;

    t193 = (((x929+x930)/x931)|x932);

    if (t193 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x933 = UINT8_MAX;
	int64_t x934 = -119LL;
	static volatile int64_t t194 = INT64_MAX;

    t194 = (((x933+x934)/x935)|x936);

    if (t194 != INT64_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x941 = 0;
	uint64_t x942 = UINT64_MAX;
	static int64_t x943 = 10393816966383984LL;
	int64_t x944 = INT64_MIN;
	static uint64_t t195 = 443167193264LLU;

    t195 = (((x941+x942)/x943)|x944);

    if (t195 != 9223372036854777582LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x945 = 3U;
	int64_t x946 = INT64_MIN;
	static volatile int32_t x947 = -182370;
	volatile int64_t t196 = 461754LL;

    t196 = (((x945+x946)/x947)|x948);

    if (t196 != 50575050923263LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x949 = INT64_MAX;
	int32_t x950 = INT32_MIN;
	static int16_t x952 = -15;

    t197 = (((x949+x950)/x951)|x952);

    if (t197 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x953 = -1;
	uint16_t x954 = 0U;
	uint8_t x955 = 1U;
	static uint8_t x956 = UINT8_MAX;
	int32_t t198 = 175;

    t198 = (((x953+x954)/x955)|x956);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x957 = -226;
	static volatile int64_t x959 = 4328279454981485089LL;
	int32_t x960 = 369441;
	int64_t t199 = 908460LL;

    t199 = (((x957+x958)/x959)|x960);

    if (t199 != 369441LL) { NG(); } else { ; }
	
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

