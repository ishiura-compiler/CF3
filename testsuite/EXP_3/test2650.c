
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

uint8_t x8 = 126U;
int16_t x12 = 471;
uint16_t x15 = 3U;
uint16_t x16 = UINT16_MAX;
int16_t x18 = INT16_MIN;
int32_t x19 = -111168908;
int32_t x20 = INT32_MAX;
uint64_t t5 = 678525137LLU;
uint64_t x27 = UINT64_MAX;
static volatile uint16_t x29 = 1U;
uint64_t x35 = 1471LLU;
volatile uint32_t x39 = 2015086U;
uint32_t x40 = UINT32_MAX;
uint16_t x42 = UINT16_MAX;
int16_t x44 = INT16_MIN;
int16_t x45 = INT16_MIN;
int32_t x58 = INT32_MIN;
volatile uint32_t t14 = 180U;
uint64_t x64 = 19603147070704LLU;
static volatile uint64_t x72 = 83LLU;
uint64_t t17 = 0LLU;
uint8_t x82 = 102U;
int16_t x84 = INT16_MAX;
int8_t x89 = INT8_MAX;
volatile int32_t t20 = -8244;
int32_t x93 = -364275220;
int32_t x97 = -1;
static volatile uint32_t x98 = 776U;
volatile int8_t x100 = INT8_MAX;
static volatile int32_t t25 = -13;
int16_t x115 = INT16_MIN;
volatile uint8_t x118 = UINT8_MAX;
uint64_t x125 = UINT64_MAX;
int8_t x126 = 0;
int32_t x133 = INT32_MIN;
static volatile int64_t x134 = INT64_MAX;
int32_t x137 = 565190;
uint64_t x167 = 68321921670LLU;
int32_t x169 = 29;
volatile int16_t x171 = 359;
static int32_t x174 = -1;
volatile int32_t x176 = INT32_MIN;
uint64_t t39 = 14777175062761273LLU;
uint32_t x177 = 1895291194U;
static int32_t x178 = INT32_MIN;
static int64_t x186 = INT64_MAX;
int32_t x190 = INT32_MIN;
static uint16_t x194 = 9U;
static int16_t x212 = INT16_MIN;
volatile int16_t x215 = -999;
uint64_t x216 = 39LLU;
int64_t x219 = INT64_MAX;
static int64_t t50 = 3082LL;
int64_t x224 = -350954482811LL;
uint16_t x225 = 55U;
static int16_t x230 = 10396;
static uint64_t t55 = 67341861755802LLU;
static volatile uint8_t x241 = 6U;
int8_t x242 = -1;
int8_t x243 = INT8_MIN;
volatile int64_t x247 = INT64_MAX;
volatile int16_t x249 = -1;
int8_t x250 = -4;
int32_t x252 = -1;
uint32_t t59 = 214893U;
int16_t x260 = INT16_MIN;
volatile int8_t x261 = INT8_MIN;
int32_t x269 = 67170919;
volatile uint32_t t64 = 3710759U;
int16_t x278 = -1;
int16_t x279 = INT16_MIN;
int32_t t65 = -53;
int8_t x287 = INT8_MAX;
int8_t x297 = INT8_MAX;
int64_t x301 = 66201633065678875LL;
uint32_t x302 = UINT32_MAX;
uint64_t x304 = 2050336603LLU;
volatile int32_t t72 = 20929956;
static int64_t x310 = INT64_MIN;
int8_t x311 = -1;
volatile int32_t t73 = -535970;
int32_t x322 = -1;
volatile uint32_t t77 = 13428U;
uint64_t x335 = 54LLU;
int32_t x341 = 2089;
uint8_t x342 = 20U;
static int16_t x346 = -1;
volatile int16_t x347 = INT16_MIN;
volatile int32_t x361 = INT32_MIN;
int64_t x364 = INT64_MAX;
int32_t x366 = -1;
int16_t x367 = INT16_MIN;
int32_t x371 = INT32_MIN;
static uint16_t x372 = UINT16_MAX;
volatile uint64_t x374 = UINT64_MAX;
static uint16_t x376 = UINT16_MAX;
static uint64_t x380 = 3560162053928439228LLU;
int16_t x382 = -1;
static volatile int8_t x392 = 5;
uint16_t x402 = UINT16_MAX;
int32_t x408 = INT32_MIN;
int16_t x422 = -1;
uint32_t t98 = 757308599U;
int16_t x427 = 3974;
static volatile int64_t x434 = -202760LL;
volatile int16_t x436 = INT16_MIN;
volatile int32_t t101 = -448375;
int16_t x438 = INT16_MIN;
int32_t t103 = -179;
uint64_t x456 = 64727425LLU;
volatile uint64_t t105 = 499652156154328LLU;
int32_t x466 = -1;
int16_t x468 = 3;
volatile uint8_t x472 = 0U;
uint32_t x485 = UINT32_MAX;
int32_t x490 = INT32_MAX;
static int64_t x493 = INT64_MIN;
int64_t x497 = INT64_MIN;
int32_t t115 = 223;
volatile int16_t x502 = -120;
volatile int32_t t117 = -13;
uint16_t x510 = UINT16_MAX;
uint64_t t121 = 1375084656048294474LLU;
volatile uint64_t x525 = UINT64_MAX;
volatile int32_t t122 = 1;
uint16_t x532 = 1U;
int32_t x533 = INT32_MAX;
static volatile int64_t x537 = INT64_MAX;
static uint64_t x538 = UINT64_MAX;
int8_t x539 = -1;
volatile int64_t x540 = INT64_MIN;
int32_t x541 = -12;
uint16_t x546 = 236U;
volatile int32_t t127 = -104991772;
int32_t x554 = -1;
int16_t x556 = -13094;
volatile int32_t t129 = 32344;
volatile uint32_t x561 = 2037U;
static int16_t x563 = -1;
volatile uint32_t t131 = 0U;
static uint8_t x579 = 5U;
static int32_t t135 = -274867;
static volatile uint64_t x582 = UINT64_MAX;
int8_t x584 = -2;
uint32_t x587 = 7605004U;
int32_t t138 = 70787862;
int64_t x600 = -1LL;
volatile int32_t t141 = -16437;
static volatile int32_t x613 = INT32_MIN;
static int64_t x619 = -1LL;
int32_t x624 = -1;
uint64_t t146 = 891406980LLU;
int32_t x632 = 0;
volatile uint64_t t148 = 6254266138112994897LLU;
volatile uint32_t x639 = 5U;
int64_t x653 = INT64_MAX;
uint32_t x668 = 146U;
uint64_t x669 = 3LLU;
int8_t x670 = 4;
int16_t x674 = INT16_MIN;
int32_t x676 = -5696394;
volatile int64_t t159 = 541LL;
int8_t x681 = INT8_MAX;
uint64_t x688 = 2906832396015LLU;
volatile int64_t x690 = -842971543LL;
uint64_t x691 = 5LLU;
uint64_t t163 = 110556935745LLU;
uint64_t x699 = 30086733318LLU;
uint64_t x700 = UINT64_MAX;
int16_t x702 = INT16_MIN;
static volatile int64_t x703 = INT64_MIN;
volatile int64_t t166 = 1565546LL;
static int8_t x705 = INT8_MIN;
static uint16_t x719 = 1579U;
uint8_t x721 = 42U;
uint64_t x725 = 251762937406021LLU;
volatile int8_t x726 = -1;
uint64_t x728 = 723713225085LLU;
uint16_t x735 = 0U;
uint16_t x743 = 26410U;
uint64_t x753 = UINT64_MAX;
int64_t x759 = -465262878208LL;
int64_t t180 = 141615022333606297LL;
static int8_t x765 = 5;
int8_t x780 = INT8_MAX;
int32_t t185 = 487;
static int32_t x792 = -12198;
int16_t x796 = -1;
uint8_t x800 = 91U;
int16_t x805 = -1;
static uint8_t x806 = 126U;
volatile int32_t t194 = -7207;
int64_t x817 = 795240516198902119LL;
static uint64_t x824 = 6645LLU;
int32_t x825 = -647055865;
uint8_t x830 = 30U;
volatile int64_t t198 = 30486314030LL;
int64_t t199 = 63279940LL;


void f0(void) {
    	int16_t x1 = 12;
	static int32_t x2 = -1;
	static volatile uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 63414LL;

    t0 = ((x1==x2)/(x3^x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int16_t x7 = 8862;
	int32_t t1 = 390373552;

    t1 = ((x5==x6)/(x7^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MIN;
	uint8_t x10 = 97U;
	int64_t x11 = -2984379348238LL;
	volatile int64_t t2 = -6373221327LL;

    t2 = ((x9==x10)/(x11^x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -49295374LL;
	uint32_t x14 = 456453789U;
	volatile int32_t t3 = -12223;

    t3 = ((x13==x14)/(x15^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t t4 = -4780153;

    t4 = ((x17==x18)/(x19^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	uint64_t x23 = 3754620466528LLU;
	volatile int16_t x24 = INT16_MAX;

    t5 = ((x21==x22)/(x23^x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 1;
	int16_t x26 = -46;
	int8_t x28 = -47;
	static uint64_t t6 = 63175569943513759LLU;

    t6 = ((x25==x26)/(x27^x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = -3919152427234319016LL;
	uint64_t x31 = UINT64_MAX;
	uint16_t x32 = UINT16_MAX;
	volatile uint64_t t7 = 0LLU;

    t7 = ((x29==x30)/(x31^x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	static uint8_t x34 = 9U;
	int32_t x36 = -26935406;
	uint64_t t8 = 176835124202128LLU;

    t8 = ((x33==x34)/(x35^x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = UINT64_MAX;
	int8_t x38 = INT8_MIN;
	volatile uint32_t t9 = 2768147U;

    t9 = ((x37==x38)/(x39^x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	static int32_t x43 = INT32_MIN;
	int32_t t10 = 8;

    t10 = ((x41==x42)/(x43^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MAX;
	uint32_t x47 = 8169U;
	int8_t x48 = 7;
	uint32_t t11 = 23106455U;

    t11 = ((x45==x46)/(x47^x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MIN;
	static int8_t x51 = INT8_MAX;
	volatile uint8_t x52 = 10U;
	volatile int32_t t12 = 2;

    t12 = ((x49==x50)/(x51^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	uint8_t x55 = 3U;
	uint32_t x56 = 3423034U;
	volatile uint32_t t13 = 306661114U;

    t13 = ((x53==x54)/(x55^x56));

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	static uint32_t x59 = UINT32_MAX;
	static uint8_t x60 = UINT8_MAX;

    t14 = ((x57==x58)/(x59^x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	uint64_t t15 = 2009052273816LLU;

    t15 = ((x61==x62)/(x63^x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	uint64_t x66 = 7313317893545449LLU;
	uint8_t x67 = 0U;
	static int64_t x68 = 253576LL;
	volatile int64_t t16 = -31486390509703298LL;

    t16 = ((x65==x66)/(x67^x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x69 = 21714781LLU;
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = 2159788555637293LL;

    t17 = ((x69==x70)/(x71^x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	int32_t x74 = -1;
	uint32_t x75 = 16498289U;
	int8_t x76 = 28;
	volatile uint32_t t18 = 1042450232U;

    t18 = ((x73==x74)/(x75^x76));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	int16_t x83 = 1;
	static int32_t t19 = 1;

    t19 = ((x81==x82)/(x83^x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x90 = 1U;
	int8_t x91 = 1;
	static volatile int32_t x92 = 280;

    t20 = ((x89==x90)/(x91^x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x94 = -1;
	volatile int64_t x95 = INT64_MIN;
	static int16_t x96 = 2;
	volatile int64_t t21 = 429406278124980552LL;

    t21 = ((x93==x94)/(x95^x96));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x99 = 1926U;
	volatile int32_t t22 = -7746356;

    t22 = ((x97==x98)/(x99^x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint16_t x103 = 3584U;
	int16_t x104 = -1;
	static int32_t t23 = 1206556;

    t23 = ((x101==x102)/(x103^x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 1U;
	volatile int16_t x106 = INT16_MIN;
	static volatile int32_t x107 = INT32_MIN;
	int8_t x108 = -1;
	static int32_t t24 = -9;

    t24 = ((x105==x106)/(x107^x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MIN;
	static uint8_t x110 = UINT8_MAX;
	volatile uint16_t x111 = 185U;
	int16_t x112 = -1981;

    t25 = ((x109==x110)/(x111^x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x113 = 12;
	int16_t x114 = -1;
	int8_t x116 = -6;
	volatile int32_t t26 = -11119199;

    t26 = ((x113==x114)/(x115^x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x117 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int32_t x120 = 9131;
	static volatile int64_t t27 = 2LL;

    t27 = ((x117==x118)/(x119^x120));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x127 = INT16_MAX;
	int16_t x128 = 1;
	int32_t t28 = -56;

    t28 = ((x125==x126)/(x127^x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x129 = 2;
	int32_t x130 = -683;
	int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t29 = 232582583757934LLU;

    t29 = ((x129==x130)/(x131^x132));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x135 = -29LL;
	uint64_t x136 = 95902587LLU;
	static uint64_t t30 = 530989805LLU;

    t30 = ((x133==x134)/(x135^x136));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x138 = -12033774LL;
	uint32_t x139 = 459444490U;
	volatile int32_t x140 = INT32_MIN;
	static volatile uint32_t t31 = 124883U;

    t31 = ((x137==x138)/(x139^x140));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x141 = 3891LLU;
	uint16_t x142 = 6661U;
	int16_t x143 = INT16_MIN;
	static int64_t x144 = 1LL;
	int64_t t32 = 84899LL;

    t32 = ((x141==x142)/(x143^x144));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = UINT16_MAX;
	static int32_t x146 = 269339;
	volatile int16_t x147 = -1;
	int8_t x148 = -3;
	static volatile int32_t t33 = 154;

    t33 = ((x145==x146)/(x147^x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = INT64_MIN;
	volatile int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = UINT16_MAX;
	int32_t t34 = 138;

    t34 = ((x149==x150)/(x151^x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = -1;
	static volatile int16_t x154 = 255;
	volatile uint64_t x155 = 8893977752038189530LLU;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t35 = 149972328123LLU;

    t35 = ((x153==x154)/(x155^x156));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MIN;
	static int16_t x162 = INT16_MAX;
	static uint8_t x163 = 10U;
	static uint64_t x164 = 208076LLU;
	static uint64_t t36 = 423457LLU;

    t36 = ((x161==x162)/(x163^x164));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = 0;
	int32_t x166 = INT32_MIN;
	static uint16_t x168 = 8U;
	uint64_t t37 = 49516116885866LLU;

    t37 = ((x165==x166)/(x167^x168));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x170 = -93151361057LL;
	uint64_t x172 = 1020353097504197LLU;
	static volatile uint64_t t38 = 801644804607LLU;

    t38 = ((x169==x170)/(x171^x172));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x173 = INT64_MAX;
	uint64_t x175 = 11617460LLU;

    t39 = ((x173==x174)/(x175^x176));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x179 = 3632521163475452LLU;
	uint16_t x180 = 198U;
	volatile uint64_t t40 = 109216736LLU;

    t40 = ((x177==x178)/(x179^x180));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x181 = 1U;
	int64_t x182 = -1LL;
	volatile uint32_t x183 = 1U;
	uint16_t x184 = 271U;
	static uint32_t t41 = 2U;

    t41 = ((x181==x182)/(x183^x184));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = -1;
	static uint64_t x187 = 37LLU;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t42 = 123935072989641LLU;

    t42 = ((x185==x186)/(x187^x188));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MIN;
	volatile uint32_t x191 = UINT32_MAX;
	uint16_t x192 = 28U;
	volatile uint32_t t43 = 61059U;

    t43 = ((x189==x190)/(x191^x192));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 4157U;
	int32_t x195 = -1;
	uint8_t x196 = 1U;
	int32_t t44 = -23933;

    t44 = ((x193==x194)/(x195^x196));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x197 = 16U;
	static uint8_t x198 = 5U;
	volatile int8_t x199 = 1;
	uint32_t x200 = 353U;
	volatile uint32_t t45 = 11U;

    t45 = ((x197==x198)/(x199^x200));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x201 = 187U;
	static volatile uint32_t x202 = 2U;
	int8_t x203 = -1;
	uint8_t x204 = 9U;
	int32_t t46 = 263730632;

    t46 = ((x201==x202)/(x203^x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = -1LL;
	int64_t x206 = 77342442756926382LL;
	static int16_t x207 = INT16_MIN;
	static uint32_t x208 = 104U;
	static volatile uint32_t t47 = 3U;

    t47 = ((x205==x206)/(x207^x208));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x209 = INT16_MAX;
	volatile uint64_t x210 = UINT64_MAX;
	volatile uint64_t x211 = 197407896817LLU;
	uint64_t t48 = 129205759060502LLU;

    t48 = ((x209==x210)/(x211^x212));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MIN;
	volatile uint64_t t49 = 90LLU;

    t49 = ((x213==x214)/(x215^x216));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = INT64_MIN;
	volatile uint16_t x218 = 84U;
	static int32_t x220 = -1;

    t50 = ((x217==x218)/(x219^x220));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = 4628U;
	int32_t x223 = INT32_MIN;
	volatile int64_t t51 = -1LL;

    t51 = ((x221==x222)/(x223^x224));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x226 = INT32_MAX;
	int32_t x227 = INT32_MIN;
	volatile uint64_t x228 = 1879LLU;
	volatile uint64_t t52 = 627775773LLU;

    t52 = ((x225==x226)/(x227^x228));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x229 = 3200906;
	uint32_t x231 = 10U;
	int16_t x232 = -5768;
	uint32_t t53 = 879U;

    t53 = ((x229==x230)/(x231^x232));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x233 = 25;
	volatile int32_t x234 = -1;
	uint8_t x235 = 57U;
	volatile uint8_t x236 = 1U;
	int32_t t54 = -950042;

    t54 = ((x233==x234)/(x235^x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -36854;
	uint64_t x238 = 347131LLU;
	uint64_t x239 = 472119439040971091LLU;
	uint16_t x240 = UINT16_MAX;

    t55 = ((x237==x238)/(x239^x240));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x244 = -1LL;
	static int64_t t56 = 188912228LL;

    t56 = ((x241==x242)/(x243^x244));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x245 = 30684U;
	int64_t x246 = -3814078141005040282LL;
	static uint32_t x248 = 306U;
	int64_t t57 = -4501730LL;

    t57 = ((x245==x246)/(x247^x248));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x251 = INT16_MIN;
	int32_t t58 = -2;

    t58 = ((x249==x250)/(x251^x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x253 = 2U;
	static volatile int8_t x254 = INT8_MIN;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;

    t59 = ((x253==x254)/(x255^x256));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = INT8_MAX;
	uint8_t x258 = 2U;
	int16_t x259 = -1;
	static int32_t t60 = -227840;

    t60 = ((x257==x258)/(x259^x260));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x262 = 0U;
	uint8_t x263 = 0U;
	volatile int64_t x264 = 3339862741598860LL;
	volatile int64_t t61 = 2370956LL;

    t61 = ((x261==x262)/(x263^x264));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x265 = INT8_MIN;
	uint8_t x266 = 0U;
	uint8_t x267 = 0U;
	uint8_t x268 = 3U;
	volatile int32_t t62 = 1613;

    t62 = ((x265==x266)/(x267^x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = INT32_MIN;
	int64_t t63 = -320478816LL;

    t63 = ((x269==x270)/(x271^x272));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 68507U;
	static uint32_t x276 = UINT32_MAX;

    t64 = ((x273==x274)/(x275^x276));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x277 = 40U;
	int8_t x280 = INT8_MAX;

    t65 = ((x277==x278)/(x279^x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = INT16_MIN;
	static int32_t x282 = -201646;
	int8_t x283 = INT8_MIN;
	int8_t x284 = 2;
	int32_t t66 = 14809;

    t66 = ((x281==x282)/(x283^x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = 6313;
	int8_t x286 = INT8_MIN;
	int32_t x288 = -1047571;
	volatile int32_t t67 = 1165;

    t67 = ((x285==x286)/(x287^x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = INT64_MIN;
	int16_t x290 = -3;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = 25U;
	int64_t t68 = 10LL;

    t68 = ((x289==x290)/(x291^x292));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x293 = UINT16_MAX;
	int64_t x294 = INT64_MIN;
	int64_t x295 = 77893145LL;
	uint64_t x296 = 5837674884092LLU;
	volatile uint64_t t69 = 97226LLU;

    t69 = ((x293==x294)/(x295^x296));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x298 = -208;
	int32_t x299 = INT32_MAX;
	uint8_t x300 = 102U;
	static int32_t t70 = -96706599;

    t70 = ((x297==x298)/(x299^x300));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x303 = 1U;
	uint64_t t71 = 2056619LLU;

    t71 = ((x301==x302)/(x303^x304));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x305 = 1U;
	int16_t x306 = INT16_MAX;
	int8_t x307 = -1;
	uint16_t x308 = UINT16_MAX;

    t72 = ((x305==x306)/(x307^x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MAX;
	static int8_t x312 = INT8_MIN;

    t73 = ((x309==x310)/(x311^x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x313 = 0;
	volatile uint16_t x314 = 6U;
	static int32_t x315 = -494753931;
	int64_t x316 = -6983747089LL;
	volatile int64_t t74 = -1082507434769089971LL;

    t74 = ((x313==x314)/(x315^x316));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = 1;
	int32_t x318 = -325;
	static int8_t x319 = 1;
	uint8_t x320 = 2U;
	static volatile int32_t t75 = 414360;

    t75 = ((x317==x318)/(x319^x320));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x321 = 7048U;
	int32_t x323 = INT32_MAX;
	int16_t x324 = INT16_MIN;
	int32_t t76 = 1;

    t76 = ((x321==x322)/(x323^x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x325 = -3926063638587LL;
	static int16_t x326 = INT16_MIN;
	uint32_t x327 = 577881736U;
	int16_t x328 = INT16_MIN;

    t77 = ((x325==x326)/(x327^x328));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = 2372529;
	volatile int16_t x334 = -413;
	int8_t x336 = INT8_MIN;
	volatile uint64_t t78 = 482637322075733LLU;

    t78 = ((x333==x334)/(x335^x336));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = UINT8_MAX;
	uint32_t t79 = 3290424U;

    t79 = ((x341==x342)/(x343^x344));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x345 = 432U;
	volatile int8_t x348 = 0;
	int32_t t80 = 1030239;

    t80 = ((x345==x346)/(x347^x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x353 = 57LL;
	int8_t x354 = INT8_MIN;
	int16_t x355 = 1;
	uint8_t x356 = 8U;
	int32_t t81 = 335563411;

    t81 = ((x353==x354)/(x355^x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x357 = 63U;
	int8_t x358 = -1;
	volatile uint32_t x359 = 4U;
	uint64_t x360 = 120560117LLU;
	uint64_t t82 = 908919165537619LLU;

    t82 = ((x357==x358)/(x359^x360));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x362 = -1;
	int8_t x363 = 0;
	int64_t t83 = 2429612564466LL;

    t83 = ((x361==x362)/(x363^x364));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x365 = 10;
	int8_t x368 = INT8_MAX;
	int32_t t84 = -2;

    t84 = ((x365==x366)/(x367^x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	int32_t t85 = -630;

    t85 = ((x369==x370)/(x371^x372));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = INT32_MIN;
	int64_t x375 = 11508753LL;
	volatile int64_t t86 = 117639224549LL;

    t86 = ((x373==x374)/(x375^x376));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x377 = INT8_MIN;
	uint8_t x378 = UINT8_MAX;
	static int16_t x379 = INT16_MIN;
	volatile uint64_t t87 = 2470574LLU;

    t87 = ((x377==x378)/(x379^x380));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x381 = INT64_MAX;
	uint8_t x383 = 29U;
	static int8_t x384 = INT8_MAX;
	int32_t t88 = -35286;

    t88 = ((x381==x382)/(x383^x384));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x385 = UINT32_MAX;
	static volatile int32_t x386 = -1;
	int8_t x387 = INT8_MAX;
	int64_t x388 = INT64_MAX;
	static volatile int64_t t89 = 9623424528LL;

    t89 = ((x385==x386)/(x387^x388));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	uint64_t x391 = 365481470199LLU;
	uint64_t t90 = 5LLU;

    t90 = ((x389==x390)/(x391^x392));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x393 = INT32_MAX;
	static uint32_t x394 = 771647278U;
	static uint64_t x395 = 156409LLU;
	int64_t x396 = -1LL;
	uint64_t t91 = 516962774LLU;

    t91 = ((x393==x394)/(x395^x396));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x397 = 12857U;
	static uint16_t x398 = 228U;
	uint32_t x399 = 900U;
	int16_t x400 = -1;
	volatile uint32_t t92 = 311163941U;

    t92 = ((x397==x398)/(x399^x400));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = 15LLU;
	static uint8_t x403 = 3U;
	uint64_t x404 = 420446LLU;
	volatile uint64_t t93 = 803949575169022LLU;

    t93 = ((x401==x402)/(x403^x404));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x405 = 32U;
	uint32_t x406 = 23109U;
	static int32_t x407 = -7;
	static int32_t t94 = -25298;

    t94 = ((x405==x406)/(x407^x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x409 = -1;
	static int64_t x410 = -998775456486349LL;
	int64_t x411 = 19935LL;
	int64_t x412 = 457063LL;
	volatile int64_t t95 = -1LL;

    t95 = ((x409==x410)/(x411^x412));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x413 = 49123618LLU;
	int16_t x414 = INT16_MAX;
	static uint64_t x415 = UINT64_MAX;
	volatile int32_t x416 = INT32_MIN;
	uint64_t t96 = 4LLU;

    t96 = ((x413==x414)/(x415^x416));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x417 = 1;
	uint32_t x418 = 762340U;
	int32_t x419 = INT32_MIN;
	static uint8_t x420 = 63U;
	int32_t t97 = -16843;

    t97 = ((x417==x418)/(x419^x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x421 = 7004514345528971878LLU;
	int32_t x423 = INT32_MAX;
	uint32_t x424 = 4583276U;

    t98 = ((x421==x422)/(x423^x424));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x425 = 11U;
	uint32_t x426 = 1U;
	static uint8_t x428 = 32U;
	volatile int32_t t99 = 2872596;

    t99 = ((x425==x426)/(x427^x428));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x429 = 103075384LLU;
	static uint8_t x430 = UINT8_MAX;
	volatile uint8_t x431 = 57U;
	static int16_t x432 = INT16_MAX;
	int32_t t100 = -161;

    t100 = ((x429==x430)/(x431^x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint8_t x435 = 6U;

    t101 = ((x433==x434)/(x435^x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x437 = -1;
	int64_t x439 = -1LL;
	static uint32_t x440 = 7871U;
	volatile int64_t t102 = -1110186966LL;

    t102 = ((x437==x438)/(x439^x440));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x441 = 231U;
	uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MIN;
	int16_t x444 = 48;

    t103 = ((x441==x442)/(x443^x444));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x449 = UINT8_MAX;
	int64_t x450 = 6LL;
	volatile int64_t x451 = 69276680LL;
	uint16_t x452 = 0U;
	volatile int64_t t104 = 117LL;

    t104 = ((x449==x450)/(x451^x452));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x453 = -1;
	static uint32_t x454 = 27U;
	int8_t x455 = 40;

    t105 = ((x453==x454)/(x455^x456));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x457 = 0U;
	uint32_t x458 = 503U;
	uint16_t x459 = UINT16_MAX;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t106 = -71;

    t106 = ((x457==x458)/(x459^x460));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x465 = -1;
	int32_t x467 = 99357;
	volatile int32_t t107 = -4647790;

    t107 = ((x465==x466)/(x467^x468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x469 = INT64_MIN;
	static int32_t x470 = INT32_MAX;
	uint32_t x471 = 356U;
	uint32_t t108 = 12039U;

    t108 = ((x469==x470)/(x471^x472));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x473 = INT32_MIN;
	uint32_t x474 = 140499801U;
	volatile int32_t x475 = 80;
	uint8_t x476 = 0U;
	int32_t t109 = -15;

    t109 = ((x473==x474)/(x475^x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x477 = INT16_MIN;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MAX;
	int64_t x480 = -7509LL;
	volatile int64_t t110 = 123630296587LL;

    t110 = ((x477==x478)/(x479^x480));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x481 = INT32_MIN;
	static volatile int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	static volatile int32_t t111 = 3222;

    t111 = ((x481==x482)/(x483^x484));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x486 = INT32_MIN;
	static volatile int32_t x487 = -130846208;
	int8_t x488 = INT8_MIN;
	volatile int32_t t112 = -231712302;

    t112 = ((x485==x486)/(x487^x488));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x489 = INT8_MIN;
	static uint8_t x491 = UINT8_MAX;
	uint32_t x492 = UINT32_MAX;
	static volatile uint32_t t113 = 197137U;

    t113 = ((x489==x490)/(x491^x492));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x494 = INT32_MIN;
	int16_t x495 = -2728;
	volatile uint8_t x496 = 5U;
	int32_t t114 = 1007;

    t114 = ((x493==x494)/(x495^x496));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x498 = UINT64_MAX;
	volatile int32_t x499 = -1341;
	int16_t x500 = INT16_MIN;

    t115 = ((x497==x498)/(x499^x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x501 = 1U;
	int32_t x503 = INT32_MIN;
	uint16_t x504 = 5164U;
	static volatile int32_t t116 = 10214;

    t116 = ((x501==x502)/(x503^x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x505 = INT16_MIN;
	static uint64_t x506 = 150528084383LLU;
	static int16_t x507 = -1;
	static volatile uint16_t x508 = 9U;

    t117 = ((x505==x506)/(x507^x508));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x509 = INT16_MAX;
	int64_t x511 = INT64_MAX;
	int64_t x512 = 62840LL;
	static int64_t t118 = -590179181443776LL;

    t118 = ((x509==x510)/(x511^x512));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = INT16_MIN;
	int8_t x515 = -5;
	int32_t x516 = 74;
	int32_t t119 = 0;

    t119 = ((x513==x514)/(x515^x516));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x517 = 0;
	uint32_t x518 = 82U;
	static volatile int8_t x519 = INT8_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t120 = 54607041;

    t120 = ((x517==x518)/(x519^x520));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MAX;
	uint64_t x523 = 4272231471332184648LLU;
	int32_t x524 = -112;

    t121 = ((x521==x522)/(x523^x524));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x526 = UINT8_MAX;
	uint16_t x527 = 676U;
	static int16_t x528 = -1;

    t122 = ((x525==x526)/(x527^x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x529 = 3475U;
	int64_t x530 = -1LL;
	static int32_t x531 = INT32_MIN;
	volatile int32_t t123 = 49868;

    t123 = ((x529==x530)/(x531^x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x534 = -2;
	static int8_t x535 = INT8_MIN;
	static volatile uint64_t x536 = UINT64_MAX;
	uint64_t t124 = 4991718306LLU;

    t124 = ((x533==x534)/(x535^x536));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t t125 = -54918465LL;

    t125 = ((x537==x538)/(x539^x540));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x542 = 5U;
	volatile int32_t x543 = -1;
	static int64_t x544 = 1255954LL;
	int64_t t126 = 12LL;

    t126 = ((x541==x542)/(x543^x544));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x545 = 2692U;
	int8_t x547 = 24;
	volatile uint8_t x548 = UINT8_MAX;

    t127 = ((x545==x546)/(x547^x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x549 = -1;
	uint16_t x550 = 12688U;
	int8_t x551 = -1;
	int8_t x552 = INT8_MAX;
	int32_t t128 = 132538990;

    t128 = ((x549==x550)/(x551^x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x553 = UINT16_MAX;
	uint16_t x555 = 7629U;

    t129 = ((x553==x554)/(x555^x556));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x557 = 0U;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 5802935943683056616LLU;
	uint8_t x560 = 1U;
	static uint64_t t130 = 30292569692230LLU;

    t130 = ((x557==x558)/(x559^x560));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x562 = UINT16_MAX;
	volatile uint32_t x564 = 59U;

    t131 = ((x561==x562)/(x563^x564));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x565 = 46933;
	static int32_t x566 = 54250;
	int64_t x567 = INT64_MIN;
	uint16_t x568 = 1U;
	volatile int64_t t132 = -43967LL;

    t132 = ((x565==x566)/(x567^x568));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x569 = 767786332076210262LL;
	volatile int8_t x570 = -1;
	int64_t x571 = INT64_MIN;
	uint8_t x572 = 2U;
	volatile int64_t t133 = 163LL;

    t133 = ((x569==x570)/(x571^x572));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x573 = INT8_MIN;
	uint16_t x574 = UINT16_MAX;
	int64_t x575 = 373908LL;
	volatile uint8_t x576 = 54U;
	volatile int64_t t134 = -1LL;

    t134 = ((x573==x574)/(x575^x576));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x577 = INT8_MAX;
	int32_t x578 = -1;
	uint8_t x580 = 76U;

    t135 = ((x577==x578)/(x579^x580));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x581 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	static volatile int32_t t136 = -1095;

    t136 = ((x581==x582)/(x583^x584));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x585 = INT32_MIN;
	static int32_t x586 = -76702;
	uint8_t x588 = 102U;
	volatile uint32_t t137 = 7743299U;

    t137 = ((x585==x586)/(x587^x588));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x589 = 453U;
	int32_t x590 = INT32_MAX;
	static uint16_t x591 = 224U;
	static int16_t x592 = INT16_MIN;

    t138 = ((x589==x590)/(x591^x592));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x593 = -1;
	int32_t x594 = 1497828;
	uint64_t x595 = 223195494695649501LLU;
	int16_t x596 = -1;
	uint64_t t139 = 174459LLU;

    t139 = ((x593==x594)/(x595^x596));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	static int16_t x598 = 9073;
	static uint16_t x599 = 5462U;
	volatile int64_t t140 = -398723096592601LL;

    t140 = ((x597==x598)/(x599^x600));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x601 = 7;
	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	int32_t x604 = -28;

    t141 = ((x601==x602)/(x603^x604));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x605 = INT16_MIN;
	volatile int16_t x606 = 105;
	uint64_t x607 = 9180000341782723006LLU;
	static int8_t x608 = INT8_MAX;
	uint64_t t142 = 16286417050773LLU;

    t142 = ((x605==x606)/(x607^x608));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x609 = -1;
	uint64_t x610 = 1388097LLU;
	static uint64_t x611 = UINT64_MAX;
	uint8_t x612 = UINT8_MAX;
	static volatile uint64_t t143 = 19572337189656LLU;

    t143 = ((x609==x610)/(x611^x612));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x614 = UINT64_MAX;
	uint64_t x615 = 6634216833185989133LLU;
	static int16_t x616 = -1;
	static volatile uint64_t t144 = 454949412024213371LLU;

    t144 = ((x613==x614)/(x615^x616));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x617 = 0U;
	int32_t x618 = INT32_MIN;
	static volatile int16_t x620 = INT16_MAX;
	static volatile int64_t t145 = 1229LL;

    t145 = ((x617==x618)/(x619^x620));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x621 = UINT16_MAX;
	static uint64_t x622 = 3885685387815LLU;
	static uint64_t x623 = 4825LLU;

    t146 = ((x621==x622)/(x623^x624));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	static int8_t x626 = -3;
	volatile int32_t x627 = INT32_MIN;
	int8_t x628 = -9;
	int32_t t147 = 6124;

    t147 = ((x625==x626)/(x627^x628));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x629 = 8792U;
	static int16_t x630 = INT16_MIN;
	uint64_t x631 = 8240737212526278LLU;

    t148 = ((x629==x630)/(x631^x632));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x633 = 1U;
	static uint32_t x634 = UINT32_MAX;
	uint16_t x635 = UINT16_MAX;
	uint8_t x636 = 1U;
	int32_t t149 = 256522153;

    t149 = ((x633==x634)/(x635^x636));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x637 = 30;
	static int64_t x638 = INT64_MIN;
	uint32_t x640 = 1765U;
	volatile uint32_t t150 = 5U;

    t150 = ((x637==x638)/(x639^x640));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x641 = INT16_MAX;
	static int64_t x642 = INT64_MIN;
	volatile uint64_t x643 = 19839056330LLU;
	int16_t x644 = 31;
	uint64_t t151 = 9401221828LLU;

    t151 = ((x641==x642)/(x643^x644));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x646 = -1;
	volatile int32_t x647 = -9;
	int64_t x648 = INT64_MAX;
	int64_t t152 = 3607284LL;

    t152 = ((x645==x646)/(x647^x648));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x649 = -1;
	int16_t x650 = 881;
	int32_t x651 = INT32_MIN;
	volatile int16_t x652 = -27;
	volatile int32_t t153 = -5;

    t153 = ((x649==x650)/(x651^x652));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x654 = -1LL;
	int16_t x655 = INT16_MIN;
	uint32_t x656 = 31920U;
	volatile uint32_t t154 = 11762156U;

    t154 = ((x653==x654)/(x655^x656));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x657 = -103070;
	uint32_t x658 = UINT32_MAX;
	int64_t x659 = INT64_MIN;
	int16_t x660 = -1;
	int64_t t155 = -109419LL;

    t155 = ((x657==x658)/(x659^x660));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x661 = 10U;
	int16_t x662 = 1512;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MAX;
	static volatile int32_t t156 = 1043064378;

    t156 = ((x661==x662)/(x663^x664));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x665 = INT16_MIN;
	int8_t x666 = 6;
	volatile uint16_t x667 = 455U;
	volatile uint32_t t157 = 468004783U;

    t157 = ((x665==x666)/(x667^x668));

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x671 = -1;
	uint8_t x672 = 1U;
	volatile int32_t t158 = -4995;

    t158 = ((x669==x670)/(x671^x672));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x673 = UINT64_MAX;
	static int64_t x675 = INT64_MAX;

    t159 = ((x673==x674)/(x675^x676));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x677 = INT16_MAX;
	static uint8_t x678 = 14U;
	static int32_t x679 = -1;
	int8_t x680 = INT8_MIN;
	volatile int32_t t160 = 3;

    t160 = ((x677==x678)/(x679^x680));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x682 = INT8_MAX;
	uint64_t x683 = 2388502LLU;
	int32_t x684 = INT32_MIN;
	uint64_t t161 = 553LLU;

    t161 = ((x681==x682)/(x683^x684));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x685 = 645885787U;
	volatile uint32_t x686 = 7U;
	int8_t x687 = INT8_MAX;
	volatile uint64_t t162 = 50LLU;

    t162 = ((x685==x686)/(x687^x688));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x689 = 31U;
	static uint8_t x692 = 107U;

    t163 = ((x689==x690)/(x691^x692));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x693 = 1652495056LLU;
	uint32_t x694 = UINT32_MAX;
	volatile int8_t x695 = -1;
	int16_t x696 = INT16_MAX;
	int32_t t164 = -1619;

    t164 = ((x693==x694)/(x695^x696));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x697 = INT64_MIN;
	static uint16_t x698 = 1U;
	uint64_t t165 = 22605189030LLU;

    t165 = ((x697==x698)/(x699^x700));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x701 = -8LL;
	static int64_t x704 = -1LL;

    t166 = ((x701==x702)/(x703^x704));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x706 = 31U;
	uint8_t x707 = UINT8_MAX;
	static int16_t x708 = -3;
	int32_t t167 = 346376;

    t167 = ((x705==x706)/(x707^x708));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x709 = INT8_MIN;
	static volatile int64_t x710 = 142799038681LL;
	volatile int64_t x711 = INT64_MAX;
	int8_t x712 = INT8_MIN;
	static volatile int64_t t168 = -26857631LL;

    t168 = ((x709==x710)/(x711^x712));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x713 = INT16_MIN;
	int32_t x714 = INT32_MIN;
	uint8_t x715 = 1U;
	int8_t x716 = INT8_MAX;
	int32_t t169 = 1;

    t169 = ((x713==x714)/(x715^x716));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x717 = INT64_MIN;
	volatile int64_t x718 = -1LL;
	int64_t x720 = 6311815021989051LL;
	int64_t t170 = -365LL;

    t170 = ((x717==x718)/(x719^x720));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x722 = -1;
	int32_t x723 = -61025498;
	uint8_t x724 = 6U;
	static int32_t t171 = 533833705;

    t171 = ((x721==x722)/(x723^x724));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x727 = -1;
	volatile uint64_t t172 = 38LLU;

    t172 = ((x725==x726)/(x727^x728));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x729 = UINT8_MAX;
	static uint64_t x730 = 5616LLU;
	int8_t x731 = -31;
	static uint64_t x732 = 88833204318836LLU;
	uint64_t t173 = 710988LLU;

    t173 = ((x729==x730)/(x731^x732));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x733 = 122U;
	uint32_t x734 = 206811U;
	static uint64_t x736 = UINT64_MAX;
	volatile uint64_t t174 = 297LLU;

    t174 = ((x733==x734)/(x735^x736));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x737 = -1;
	int16_t x738 = -1;
	int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MIN;
	volatile int64_t t175 = -249437241757713LL;

    t175 = ((x737==x738)/(x739^x740));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x741 = INT64_MAX;
	int64_t x742 = 3473802489448LL;
	volatile int64_t x744 = INT64_MIN;
	static volatile int64_t t176 = 3844308734410626LL;

    t176 = ((x741==x742)/(x743^x744));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = -1;
	int16_t x747 = INT16_MIN;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t177 = -1;

    t177 = ((x745==x746)/(x747^x748));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x749 = UINT16_MAX;
	int64_t x750 = 1LL;
	int32_t x751 = -1;
	static int32_t x752 = -26;
	int32_t t178 = -58692;

    t178 = ((x749==x750)/(x751^x752));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x754 = -1;
	static volatile uint64_t x755 = UINT64_MAX;
	volatile uint8_t x756 = 10U;
	volatile uint64_t t179 = 207712806612744LLU;

    t179 = ((x753==x754)/(x755^x756));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x757 = 0;
	int8_t x758 = -1;
	static uint8_t x760 = UINT8_MAX;

    t180 = ((x757==x758)/(x759^x760));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x761 = INT8_MIN;
	static int64_t x762 = -1LL;
	uint64_t x763 = 31LLU;
	int64_t x764 = INT64_MIN;
	uint64_t t181 = 10780975840223LLU;

    t181 = ((x761==x762)/(x763^x764));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x766 = 88U;
	int8_t x767 = -11;
	static int64_t x768 = INT64_MIN;
	int64_t t182 = -1LL;

    t182 = ((x765==x766)/(x767^x768));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x769 = 1519U;
	int32_t x770 = INT32_MAX;
	volatile uint64_t x771 = UINT64_MAX;
	uint32_t x772 = UINT32_MAX;
	uint64_t t183 = 135821381356585LLU;

    t183 = ((x769==x770)/(x771^x772));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x773 = INT16_MIN;
	uint64_t x774 = UINT64_MAX;
	int8_t x775 = INT8_MIN;
	static int32_t x776 = INT32_MIN;
	static int32_t t184 = 42763;

    t184 = ((x773==x774)/(x775^x776));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x777 = INT16_MAX;
	int16_t x778 = 0;
	int32_t x779 = 6594;

    t185 = ((x777==x778)/(x779^x780));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	int8_t x782 = INT8_MAX;
	uint16_t x783 = UINT16_MAX;
	int8_t x784 = -1;
	volatile int32_t t186 = 12203616;

    t186 = ((x781==x782)/(x783^x784));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x785 = -3LL;
	int16_t x786 = -1050;
	int64_t x787 = INT64_MIN;
	volatile int16_t x788 = INT16_MAX;
	int64_t t187 = 403906366LL;

    t187 = ((x785==x786)/(x787^x788));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x789 = INT16_MAX;
	uint8_t x790 = UINT8_MAX;
	static volatile int32_t x791 = INT32_MIN;
	volatile int32_t t188 = -3258;

    t188 = ((x789==x790)/(x791^x792));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x793 = 668U;
	int32_t x794 = -1;
	int64_t x795 = INT64_MIN;
	volatile int64_t t189 = 195763390343840096LL;

    t189 = ((x793==x794)/(x795^x796));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x797 = 113U;
	volatile int8_t x798 = INT8_MIN;
	volatile int64_t x799 = 49684LL;
	volatile int64_t t190 = -53LL;

    t190 = ((x797==x798)/(x799^x800));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x801 = 7;
	int16_t x802 = -295;
	int8_t x803 = 1;
	int16_t x804 = 0;
	int32_t t191 = 1;

    t191 = ((x801==x802)/(x803^x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x807 = 2U;
	static volatile int64_t x808 = -1LL;
	volatile int64_t t192 = -11LL;

    t192 = ((x805==x806)/(x807^x808));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x809 = 2113;
	uint8_t x810 = UINT8_MAX;
	int32_t x811 = INT32_MAX;
	int32_t x812 = INT32_MIN;
	volatile int32_t t193 = 4304;

    t193 = ((x809==x810)/(x811^x812));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x813 = -1LL;
	int16_t x814 = 1;
	int8_t x815 = INT8_MAX;
	int32_t x816 = INT32_MAX;

    t194 = ((x813==x814)/(x815^x816));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x818 = INT32_MAX;
	volatile uint32_t x819 = UINT32_MAX;
	int32_t x820 = INT32_MIN;
	volatile uint32_t t195 = 1240601U;

    t195 = ((x817==x818)/(x819^x820));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x821 = INT32_MIN;
	int16_t x822 = -70;
	uint16_t x823 = 181U;
	static uint64_t t196 = 102592470536794117LLU;

    t196 = ((x821==x822)/(x823^x824));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x826 = -1;
	int64_t x827 = INT64_MIN;
	int32_t x828 = -1;
	int64_t t197 = -1563LL;

    t197 = ((x825==x826)/(x827^x828));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x829 = INT32_MAX;
	volatile int64_t x831 = INT64_MIN;
	volatile int16_t x832 = INT16_MIN;

    t198 = ((x829==x830)/(x831^x832));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x833 = INT16_MAX;
	uint64_t x834 = 1503111742856LLU;
	uint16_t x835 = 34U;
	volatile int64_t x836 = -419295879485LL;

    t199 = ((x833==x834)/(x835^x836));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

