
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

static uint16_t x1 = UINT16_MAX;
volatile uint16_t x22 = UINT16_MAX;
static int8_t x24 = INT8_MIN;
int64_t x26 = -1LL;
int32_t x27 = -1;
int16_t x39 = 45;
static uint32_t x40 = UINT32_MAX;
uint16_t x54 = UINT16_MAX;
volatile int32_t t9 = 1;
int64_t x72 = INT64_MIN;
static volatile int32_t x73 = INT32_MIN;
volatile int64_t x76 = INT64_MIN;
int8_t x79 = INT8_MAX;
uint64_t x86 = UINT64_MAX;
volatile int64_t x91 = INT64_MIN;
uint16_t x102 = UINT16_MAX;
int8_t x105 = INT8_MAX;
int8_t x109 = -3;
static volatile int32_t t24 = 33448794;
static volatile int32_t x127 = INT32_MIN;
int32_t t25 = 104;
int32_t t27 = 1372833;
int8_t x139 = 13;
int32_t t29 = -6408;
int32_t t31 = -973;
int32_t x163 = 2919;
volatile int32_t t33 = -10081;
int16_t x170 = INT16_MIN;
int8_t x177 = -1;
uint8_t x180 = UINT8_MAX;
int16_t x183 = INT16_MAX;
int8_t x191 = INT8_MIN;
uint64_t x196 = 59372134LLU;
static int64_t x198 = INT64_MIN;
int64_t x200 = INT64_MAX;
int8_t x213 = -1;
static int32_t x215 = -1;
volatile int32_t t43 = -31988;
static uint64_t x226 = 2959582527195390268LLU;
int64_t x232 = -1LL;
uint64_t x238 = 16773719301762968LLU;
int32_t t49 = 13743;
int64_t x243 = -964351701754594LL;
volatile int8_t x250 = INT8_MIN;
int32_t t52 = 8586208;
uint32_t x253 = UINT32_MAX;
int64_t x256 = INT64_MIN;
volatile int32_t t53 = 113;
static volatile int16_t x276 = INT16_MIN;
static int16_t x285 = 370;
int64_t x294 = INT64_MIN;
uint32_t x295 = 450114U;
int16_t x311 = INT16_MAX;
int32_t x318 = -1;
int16_t x321 = 1566;
volatile int32_t t67 = 1576;
int64_t x337 = INT64_MIN;
uint64_t x339 = 54324967LLU;
int8_t x341 = 15;
volatile uint64_t x350 = UINT64_MAX;
int8_t x351 = INT8_MIN;
int32_t t72 = -425605;
volatile int32_t t73 = -175;
uint32_t x363 = UINT32_MAX;
static volatile int32_t t76 = -449753690;
int64_t x381 = -1LL;
int32_t x386 = -7782273;
volatile uint32_t x387 = 19U;
int32_t x395 = INT32_MIN;
int64_t x398 = INT64_MIN;
int16_t x400 = 1040;
int32_t x404 = -5;
static uint64_t x405 = 21158883LLU;
int32_t t84 = -29599;
uint32_t x421 = 5647413U;
static volatile int32_t t86 = 19568753;
int16_t x430 = 54;
int32_t t88 = -15225;
volatile uint8_t x433 = UINT8_MAX;
uint8_t x435 = 7U;
int64_t x437 = -1LL;
int16_t x450 = -1;
volatile int64_t x463 = 962992574LL;
uint64_t x465 = 4573851243522995360LLU;
static uint64_t x471 = 7874823LLU;
volatile int32_t t95 = -2;
static int8_t x487 = INT8_MAX;
int32_t x497 = INT32_MIN;
int32_t t100 = -124672;
uint8_t x503 = UINT8_MAX;
volatile int32_t t102 = -3518;
static uint32_t x523 = 704089U;
uint16_t x526 = UINT16_MAX;
static volatile int32_t t104 = -375587;
volatile int32_t t105 = -275;
uint8_t x545 = UINT8_MAX;
volatile int32_t x547 = INT32_MIN;
int32_t t109 = 630;
uint8_t x556 = 32U;
static volatile int32_t t112 = 5499;
int32_t x571 = INT32_MIN;
int32_t t114 = 7;
uint32_t x590 = 521179U;
static volatile int32_t t119 = 26987;
int64_t x596 = INT64_MIN;
int32_t t121 = 26;
uint8_t x601 = 25U;
static uint16_t x602 = UINT16_MAX;
int8_t x609 = INT8_MIN;
uint32_t x611 = 1256467137U;
volatile int8_t x619 = INT8_MIN;
int32_t t127 = 7111;
uint64_t x632 = 47LLU;
int64_t x636 = INT64_MAX;
volatile int32_t t132 = -53;
uint64_t x654 = 7751224907253LLU;
int16_t x658 = INT16_MIN;
int64_t x662 = -16703737LL;
static int8_t x663 = -1;
int8_t x674 = -7;
int16_t x679 = -1;
int64_t x693 = INT64_MAX;
static volatile int32_t t142 = -1501;
int16_t x711 = 121;
volatile uint64_t x715 = 153LLU;
int64_t x717 = -758622984827319950LL;
volatile int32_t t147 = 1;
uint32_t x724 = 4U;
int32_t t148 = -776694602;
int16_t x726 = -1;
int16_t x738 = INT16_MIN;
volatile int64_t x740 = INT64_MAX;
int32_t t152 = 291;
volatile int64_t x742 = 62LL;
int8_t x748 = -1;
uint64_t x750 = UINT64_MAX;
volatile int32_t x759 = 1221;
int32_t x761 = 14385727;
static int8_t x763 = INT8_MAX;
uint32_t x764 = UINT32_MAX;
static uint8_t x770 = UINT8_MAX;
int16_t x791 = INT16_MIN;
uint16_t x807 = UINT16_MAX;
int32_t t166 = -214636788;
uint8_t x809 = UINT8_MAX;
volatile int16_t x814 = INT16_MIN;
int16_t x832 = -2067;
volatile int8_t x848 = INT8_MAX;
int16_t x850 = -1;
volatile int16_t x862 = -1;
int8_t x863 = -1;
static volatile int32_t t180 = -476918683;
volatile int32_t t182 = 1;
int8_t x878 = -2;
int32_t t185 = 14;
uint8_t x892 = UINT8_MAX;
int16_t x895 = INT16_MIN;
static int32_t t187 = 170424;
static int8_t x898 = -1;
int16_t x901 = -153;
int16_t x913 = -1;
int8_t x915 = -1;
volatile int16_t x921 = INT16_MIN;
uint16_t x923 = 3950U;
volatile uint32_t x927 = 260217716U;
static int8_t x928 = -1;
int16_t x931 = INT16_MAX;
volatile int32_t x935 = -3;
volatile uint64_t x944 = 28851LLU;
static volatile uint8_t x945 = 24U;


void f0(void) {
    	volatile int8_t x2 = -1;
	int64_t x3 = 13318918817LL;
	int16_t x4 = -17;
	static volatile int32_t t0 = -107977;

    t0 = ((x1-x2)<=(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 123076524384139LL;
	static int16_t x10 = INT16_MIN;
	int16_t x11 = -6186;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t1 = -1;

    t1 = ((x9-x10)<=(x11^x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -2;
	uint16_t x18 = UINT16_MAX;
	static int8_t x19 = 2;
	static int16_t x20 = 10;
	volatile int32_t t2 = -2596;

    t2 = ((x17-x18)<=(x19^x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x21 = UINT8_MAX;
	int8_t x23 = 12;
	int32_t t3 = 10;

    t3 = ((x21-x22)<=(x23^x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = -1898801;
	int64_t x28 = INT64_MIN;
	int32_t t4 = -278052;

    t4 = ((x25-x26)<=(x27^x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 33247664578347LLU;
	static int64_t x30 = -29827659155062680LL;
	uint8_t x31 = 4U;
	static int32_t x32 = -1;
	int32_t t5 = -92849278;

    t5 = ((x29-x30)<=(x31^x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x37 = 312277LLU;
	static int16_t x38 = INT16_MAX;
	int32_t t6 = -152;

    t6 = ((x37-x38)<=(x39^x40));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x41 = 2U;
	uint8_t x42 = 0U;
	uint16_t x43 = 4U;
	int8_t x44 = 0;
	volatile int32_t t7 = -806;

    t7 = ((x41-x42)<=(x43^x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x49 = -1;
	volatile uint16_t x50 = UINT16_MAX;
	static int64_t x51 = INT64_MIN;
	uint32_t x52 = 582490583U;
	static int32_t t8 = 1;

    t8 = ((x49-x50)<=(x51^x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x53 = INT32_MAX;
	int64_t x55 = -6094LL;
	uint64_t x56 = UINT64_MAX;

    t9 = ((x53-x54)<=(x55^x56));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x57 = INT32_MIN;
	volatile uint32_t x58 = 0U;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = 3362541729508LL;
	int32_t t10 = -4;

    t10 = ((x57-x58)<=(x59^x60));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = -1;
	volatile uint32_t x62 = 3066271U;
	volatile uint16_t x63 = UINT16_MAX;
	int32_t x64 = -1;
	int32_t t11 = 1;

    t11 = ((x61-x62)<=(x63^x64));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x69 = INT32_MAX;
	uint32_t x70 = 0U;
	static uint32_t x71 = 167596344U;
	int32_t t12 = 113515;

    t12 = ((x69-x70)<=(x71^x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x74 = -1;
	static volatile uint32_t x75 = UINT32_MAX;
	static int32_t t13 = 0;

    t13 = ((x73-x74)<=(x75^x76));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x77 = UINT16_MAX;
	int32_t x78 = -3;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t14 = -63167;

    t14 = ((x77-x78)<=(x79^x80));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = INT16_MIN;
	uint16_t x82 = 103U;
	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = -1LL;
	volatile int32_t t15 = -356838;

    t15 = ((x81-x82)<=(x83^x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = -1;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t16 = 42168;

    t16 = ((x85-x86)<=(x87^x88));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x89 = INT8_MIN;
	uint8_t x90 = 76U;
	volatile int32_t x92 = -1;
	int32_t t17 = -1;

    t17 = ((x89-x90)<=(x91^x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x93 = INT32_MAX;
	int8_t x94 = 3;
	int32_t x95 = 2;
	uint32_t x96 = 10121U;
	volatile int32_t t18 = -131;

    t18 = ((x93-x94)<=(x95^x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x97 = 27418;
	int16_t x98 = INT16_MIN;
	volatile int32_t x99 = 2361512;
	uint16_t x100 = 63U;
	int32_t t19 = 181;

    t19 = ((x97-x98)<=(x99^x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile int16_t x103 = INT16_MIN;
	uint8_t x104 = 22U;
	static int32_t t20 = 470655077;

    t20 = ((x101-x102)<=(x103^x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x106 = INT8_MIN;
	int64_t x107 = -1LL;
	uint16_t x108 = 339U;
	volatile int32_t t21 = -1;

    t21 = ((x105-x106)<=(x107^x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x110 = 13U;
	int64_t x111 = -1LL;
	uint32_t x112 = UINT32_MAX;
	int32_t t22 = 15000711;

    t22 = ((x109-x110)<=(x111^x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x113 = 1;
	uint32_t x114 = 47U;
	static uint8_t x115 = 42U;
	int64_t x116 = 904099051LL;
	volatile int32_t t23 = 56783349;

    t23 = ((x113-x114)<=(x115^x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = INT8_MIN;
	volatile int8_t x122 = INT8_MIN;
	uint16_t x123 = 150U;
	static uint16_t x124 = 11873U;

    t24 = ((x121-x122)<=(x123^x124));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x125 = 577;
	static int64_t x126 = 5209515600953LL;
	uint32_t x128 = 270314U;

    t25 = ((x125-x126)<=(x127^x128));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x129 = INT64_MAX;
	uint16_t x130 = 91U;
	static volatile uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 3U;
	int32_t t26 = 1513084;

    t26 = ((x129-x130)<=(x131^x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = -1;
	static uint16_t x134 = 3737U;
	volatile int16_t x135 = INT16_MAX;
	static int64_t x136 = -9777830LL;

    t27 = ((x133-x134)<=(x135^x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x137 = 386652900LLU;
	uint16_t x138 = 242U;
	uint8_t x140 = 1U;
	int32_t t28 = -4;

    t28 = ((x137-x138)<=(x139^x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	volatile uint32_t x143 = 63630432U;
	int8_t x144 = -1;

    t29 = ((x141-x142)<=(x143^x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x145 = 750175970LLU;
	int8_t x146 = INT8_MAX;
	static int16_t x147 = 0;
	volatile int32_t x148 = -1;
	int32_t t30 = 197;

    t30 = ((x145-x146)<=(x147^x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = -1;
	int16_t x150 = -1;
	int32_t x151 = 4606;
	volatile int16_t x152 = -1;

    t31 = ((x149-x150)<=(x151^x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = 0LL;
	uint32_t x154 = 203U;
	static int32_t x155 = -1;
	static volatile int8_t x156 = INT8_MIN;
	volatile int32_t t32 = 1939;

    t32 = ((x153-x154)<=(x155^x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x161 = 13065U;
	static volatile int64_t x162 = INT64_MAX;
	static int64_t x164 = 3927LL;

    t33 = ((x161-x162)<=(x163^x164));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x169 = -1;
	uint8_t x171 = 41U;
	int16_t x172 = -11236;
	static int32_t t34 = 1;

    t34 = ((x169-x170)<=(x171^x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x178 = INT64_MIN;
	volatile uint8_t x179 = UINT8_MAX;
	int32_t t35 = -58;

    t35 = ((x177-x178)<=(x179^x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x181 = 20831U;
	int8_t x182 = INT8_MIN;
	int64_t x184 = -1LL;
	volatile int32_t t36 = 2818556;

    t36 = ((x181-x182)<=(x183^x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x185 = 6074170635995487LLU;
	uint8_t x186 = 0U;
	int16_t x187 = -29;
	uint32_t x188 = 1912193132U;
	volatile int32_t t37 = -30353;

    t37 = ((x185-x186)<=(x187^x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = 73;
	int8_t x190 = 0;
	uint32_t x192 = 961U;
	volatile int32_t t38 = 349;

    t38 = ((x189-x190)<=(x191^x192));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x193 = INT64_MIN;
	static int16_t x194 = -23;
	uint64_t x195 = UINT64_MAX;
	static volatile int32_t t39 = 251;

    t39 = ((x193-x194)<=(x195^x196));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x197 = 36843302LLU;
	static int8_t x199 = -8;
	volatile int32_t t40 = 8115;

    t40 = ((x197-x198)<=(x199^x200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x201 = 6674LLU;
	uint32_t x202 = 20018U;
	static volatile uint8_t x203 = 5U;
	static volatile uint16_t x204 = 97U;
	static volatile int32_t t41 = 135032;

    t41 = ((x201-x202)<=(x203^x204));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x209 = INT8_MIN;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	int32_t t42 = -27188;

    t42 = ((x209-x210)<=(x211^x212));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x214 = -1;
	static volatile uint32_t x216 = UINT32_MAX;

    t43 = ((x213-x214)<=(x215^x216));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = 2066513826838959LLU;
	uint16_t x220 = 14095U;
	static volatile int32_t t44 = 19;

    t44 = ((x217-x218)<=(x219^x220));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x221 = 703366114U;
	static volatile uint32_t x222 = 253U;
	int16_t x223 = INT16_MAX;
	int64_t x224 = -110LL;
	int32_t t45 = -50285940;

    t45 = ((x221-x222)<=(x223^x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x225 = 46U;
	uint16_t x227 = UINT16_MAX;
	static int32_t x228 = 10925520;
	static volatile int32_t t46 = 3717772;

    t46 = ((x225-x226)<=(x227^x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x229 = 9026U;
	volatile int8_t x230 = -1;
	volatile int64_t x231 = -1LL;
	volatile int32_t t47 = 387130;

    t47 = ((x229-x230)<=(x231^x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x233 = 1400176U;
	uint64_t x234 = UINT64_MAX;
	int8_t x235 = INT8_MAX;
	int32_t x236 = -1;
	int32_t t48 = 2863813;

    t48 = ((x233-x234)<=(x235^x236));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x237 = -1LL;
	static int16_t x239 = -1;
	uint8_t x240 = 19U;

    t49 = ((x237-x238)<=(x239^x240));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x241 = 6206454U;
	int16_t x242 = -1;
	uint32_t x244 = 20U;
	volatile int32_t t50 = 33283299;

    t50 = ((x241-x242)<=(x243^x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x245 = INT16_MAX;
	uint8_t x246 = 11U;
	static volatile int8_t x247 = INT8_MAX;
	static int16_t x248 = 15462;
	int32_t t51 = 5;

    t51 = ((x245-x246)<=(x247^x248));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x249 = UINT8_MAX;
	uint32_t x251 = 108864U;
	uint64_t x252 = 3621LLU;

    t52 = ((x249-x250)<=(x251^x252));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x254 = -132457298769708264LL;
	uint16_t x255 = 26329U;

    t53 = ((x253-x254)<=(x255^x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -37327685711139173LL;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = INT16_MIN;
	volatile int32_t t54 = 73492568;

    t54 = ((x257-x258)<=(x259^x260));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x265 = 641062789047860LLU;
	int8_t x266 = -1;
	int32_t x267 = INT32_MAX;
	int16_t x268 = -1;
	static int32_t t55 = -37572705;

    t55 = ((x265-x266)<=(x267^x268));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = -1;
	uint32_t x270 = 13475U;
	static volatile int16_t x271 = -15116;
	uint8_t x272 = 1U;
	volatile int32_t t56 = 58662248;

    t56 = ((x269-x270)<=(x271^x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x273 = INT32_MIN;
	static int64_t x274 = 200LL;
	int16_t x275 = -1;
	static volatile int32_t t57 = -8689020;

    t57 = ((x273-x274)<=(x275^x276));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x286 = 29059356LLU;
	int16_t x287 = INT16_MIN;
	static int16_t x288 = -1;
	static int32_t t58 = -90;

    t58 = ((x285-x286)<=(x287^x288));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x289 = 2538U;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 3U;
	int64_t x292 = INT64_MIN;
	static int32_t t59 = 979976;

    t59 = ((x289-x290)<=(x291^x292));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x293 = -27;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t60 = -430616075;

    t60 = ((x293-x294)<=(x295^x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 1;
	volatile uint32_t x299 = UINT32_MAX;
	static volatile int16_t x300 = INT16_MAX;
	int32_t t61 = 16;

    t61 = ((x297-x298)<=(x299^x300));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x305 = -1;
	int64_t x306 = INT64_MAX;
	int8_t x307 = 2;
	static int64_t x308 = INT64_MIN;
	int32_t t62 = -7003;

    t62 = ((x305-x306)<=(x307^x308));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x309 = UINT8_MAX;
	int8_t x310 = INT8_MIN;
	int64_t x312 = -1395430446573LL;
	static int32_t t63 = 207536;

    t63 = ((x309-x310)<=(x311^x312));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x313 = 26552;
	int32_t x314 = 782668;
	uint32_t x315 = 1U;
	int8_t x316 = -1;
	volatile int32_t t64 = 0;

    t64 = ((x313-x314)<=(x315^x316));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x317 = 4U;
	volatile int16_t x319 = INT16_MIN;
	volatile uint64_t x320 = 220523LLU;
	volatile int32_t t65 = -9278792;

    t65 = ((x317-x318)<=(x319^x320));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x322 = UINT32_MAX;
	static int8_t x323 = 1;
	int8_t x324 = 8;
	int32_t t66 = 10377518;

    t66 = ((x321-x322)<=(x323^x324));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 780965U;
	volatile int16_t x336 = INT16_MIN;

    t67 = ((x333-x334)<=(x335^x336));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x338 = INT8_MIN;
	volatile int64_t x340 = -1LL;
	static volatile int32_t t68 = -18768;

    t68 = ((x337-x338)<=(x339^x340));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x342 = UINT32_MAX;
	static uint32_t x343 = 498243U;
	int16_t x344 = INT16_MAX;
	volatile int32_t t69 = -783;

    t69 = ((x341-x342)<=(x343^x344));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x345 = 3U;
	static uint16_t x346 = 54U;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 19246993LLU;
	volatile int32_t t70 = -1;

    t70 = ((x345-x346)<=(x347^x348));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x349 = UINT16_MAX;
	int16_t x352 = -1635;
	static volatile int32_t t71 = 0;

    t71 = ((x349-x350)<=(x351^x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x353 = UINT64_MAX;
	int64_t x354 = INT64_MIN;
	uint64_t x355 = 223511651409688LLU;
	int16_t x356 = 170;

    t72 = ((x353-x354)<=(x355^x356));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x357 = 1263U;
	int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MAX;
	int16_t x360 = INT16_MIN;

    t73 = ((x357-x358)<=(x359^x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x361 = 97U;
	int8_t x362 = INT8_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	volatile int32_t t74 = 485433046;

    t74 = ((x361-x362)<=(x363^x364));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MAX;
	volatile int16_t x367 = INT16_MAX;
	volatile int8_t x368 = INT8_MIN;
	volatile int32_t t75 = -11;

    t75 = ((x365-x366)<=(x367^x368));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x369 = -6;
	uint8_t x370 = UINT8_MAX;
	static volatile int64_t x371 = 44LL;
	int8_t x372 = -1;

    t76 = ((x369-x370)<=(x371^x372));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x373 = 16861U;
	static uint64_t x374 = 5233588318321201163LLU;
	uint64_t x375 = 311002918LLU;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t77 = -2220361;

    t77 = ((x373-x374)<=(x375^x376));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x377 = 83822267044934LL;
	int32_t x378 = -1;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = 29879U;
	volatile int32_t t78 = 26710564;

    t78 = ((x377-x378)<=(x379^x380));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x382 = 128584533LL;
	uint16_t x383 = 16U;
	int64_t x384 = -1LL;
	static int32_t t79 = 282751901;

    t79 = ((x381-x382)<=(x383^x384));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x385 = 23;
	int32_t x388 = 24;
	int32_t t80 = 204465952;

    t80 = ((x385-x386)<=(x387^x388));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x393 = 87U;
	int32_t x394 = -30;
	static volatile uint32_t x396 = UINT32_MAX;
	int32_t t81 = -4;

    t81 = ((x393-x394)<=(x395^x396));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x397 = -1LL;
	uint16_t x399 = UINT16_MAX;
	int32_t t82 = 1;

    t82 = ((x397-x398)<=(x399^x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x401 = -3500LL;
	uint8_t x402 = 1U;
	static int8_t x403 = 29;
	int32_t t83 = 109902521;

    t83 = ((x401-x402)<=(x403^x404));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x406 = INT32_MIN;
	static int64_t x407 = INT64_MAX;
	int32_t x408 = -1;

    t84 = ((x405-x406)<=(x407^x408));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x417 = UINT8_MAX;
	int64_t x418 = 6804785414206LL;
	uint8_t x419 = 2U;
	int64_t x420 = INT64_MIN;
	static volatile int32_t t85 = -742999;

    t85 = ((x417-x418)<=(x419^x420));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x422 = 18179U;
	static int16_t x423 = -5111;
	uint32_t x424 = UINT32_MAX;

    t86 = ((x421-x422)<=(x423^x424));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x425 = UINT64_MAX;
	int8_t x426 = -16;
	int8_t x427 = -1;
	static volatile int32_t x428 = INT32_MIN;
	static int32_t t87 = 6534;

    t87 = ((x425-x426)<=(x427^x428));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile uint32_t x431 = 29223U;
	volatile int16_t x432 = -1;

    t88 = ((x429-x430)<=(x431^x432));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x434 = INT8_MIN;
	volatile uint8_t x436 = 12U;
	int32_t t89 = 1744;

    t89 = ((x433-x434)<=(x435^x436));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x438 = 13743;
	int64_t x439 = INT64_MIN;
	int32_t x440 = 4;
	int32_t t90 = -64;

    t90 = ((x437-x438)<=(x439^x440));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x451 = 905;
	uint8_t x452 = 22U;
	volatile int32_t t91 = -780407;

    t91 = ((x449-x450)<=(x451^x452));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x453 = INT16_MIN;
	static volatile int8_t x454 = -1;
	int64_t x455 = INT64_MIN;
	static int16_t x456 = -1;
	volatile int32_t t92 = 4;

    t92 = ((x453-x454)<=(x455^x456));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x461 = -1;
	int32_t x462 = INT32_MAX;
	uint8_t x464 = 46U;
	int32_t t93 = -34;

    t93 = ((x461-x462)<=(x463^x464));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x466 = UINT32_MAX;
	volatile int16_t x467 = INT16_MAX;
	int16_t x468 = 723;
	volatile int32_t t94 = 420;

    t94 = ((x465-x466)<=(x467^x468));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x469 = 15U;
	static int32_t x470 = -1;
	int16_t x472 = INT16_MIN;

    t95 = ((x469-x470)<=(x471^x472));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x473 = 371;
	int8_t x474 = INT8_MAX;
	int32_t x475 = 3363;
	uint64_t x476 = 620149LLU;
	volatile int32_t t96 = -3717;

    t96 = ((x473-x474)<=(x475^x476));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x481 = 257277167370LL;
	int64_t x482 = -1LL;
	static volatile int16_t x483 = INT16_MIN;
	volatile uint64_t x484 = 1LLU;
	volatile int32_t t97 = -10297;

    t97 = ((x481-x482)<=(x483^x484));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	uint64_t x486 = UINT64_MAX;
	int32_t x488 = 361708896;
	static volatile int32_t t98 = -2;

    t98 = ((x485-x486)<=(x487^x488));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x489 = UINT64_MAX;
	static uint8_t x490 = UINT8_MAX;
	int32_t x491 = 127;
	static uint16_t x492 = UINT16_MAX;
	int32_t t99 = -287;

    t99 = ((x489-x490)<=(x491^x492));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x498 = INT16_MIN;
	static int8_t x499 = 0;
	uint16_t x500 = UINT16_MAX;

    t100 = ((x497-x498)<=(x499^x500));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x501 = INT16_MAX;
	int64_t x502 = INT64_MAX;
	int32_t x504 = -1;
	volatile int32_t t101 = -213;

    t101 = ((x501-x502)<=(x503^x504));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x517 = INT16_MIN;
	static int16_t x518 = 564;
	uint64_t x519 = UINT64_MAX;
	volatile uint8_t x520 = 3U;

    t102 = ((x517-x518)<=(x519^x520));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x521 = -14613821LL;
	volatile int16_t x522 = INT16_MAX;
	static volatile int64_t x524 = -1LL;
	volatile int32_t t103 = 32;

    t103 = ((x521-x522)<=(x523^x524));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x525 = INT32_MAX;
	int64_t x527 = INT64_MAX;
	uint64_t x528 = UINT64_MAX;

    t104 = ((x525-x526)<=(x527^x528));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x529 = -46;
	int64_t x530 = INT64_MIN;
	volatile uint8_t x531 = 20U;
	int16_t x532 = -1;

    t105 = ((x529-x530)<=(x531^x532));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x533 = 3;
	int16_t x534 = 2;
	static int64_t x535 = -1LL;
	static int32_t x536 = INT32_MIN;
	static volatile int32_t t106 = 62;

    t106 = ((x533-x534)<=(x535^x536));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x537 = 0;
	uint64_t x538 = UINT64_MAX;
	uint64_t x539 = 5274755309842084588LLU;
	int32_t x540 = INT32_MAX;
	volatile int32_t t107 = 9501;

    t107 = ((x537-x538)<=(x539^x540));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x546 = INT64_MAX;
	int32_t x548 = -447532;
	static volatile int32_t t108 = -408569;

    t108 = ((x545-x546)<=(x547^x548));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x549 = INT32_MAX;
	volatile uint64_t x550 = UINT64_MAX;
	int8_t x551 = 11;
	volatile uint8_t x552 = 7U;

    t109 = ((x549-x550)<=(x551^x552));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x553 = UINT8_MAX;
	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 73920U;
	int32_t t110 = 418094;

    t110 = ((x553-x554)<=(x555^x556));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x557 = -1LL;
	int64_t x558 = -1LL;
	uint32_t x559 = 0U;
	int32_t x560 = INT32_MAX;
	volatile int32_t t111 = -1;

    t111 = ((x557-x558)<=(x559^x560));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x561 = -1LL;
	volatile int16_t x562 = -1;
	volatile int32_t x563 = INT32_MAX;
	int64_t x564 = INT64_MAX;

    t112 = ((x561-x562)<=(x563^x564));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x565 = UINT64_MAX;
	uint16_t x566 = 1U;
	int8_t x567 = 0;
	int32_t x568 = -123866865;
	volatile int32_t t113 = -93427605;

    t113 = ((x565-x566)<=(x567^x568));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x569 = -1;
	volatile int32_t x570 = -1;
	volatile int64_t x572 = -1LL;

    t114 = ((x569-x570)<=(x571^x572));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x573 = 106U;
	static volatile int8_t x574 = INT8_MIN;
	int8_t x575 = INT8_MIN;
	volatile int64_t x576 = INT64_MIN;
	volatile int32_t t115 = -881970;

    t115 = ((x573-x574)<=(x575^x576));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x577 = 3U;
	volatile int32_t x578 = -1;
	int8_t x579 = 0;
	int32_t x580 = 475232;
	int32_t t116 = 0;

    t116 = ((x577-x578)<=(x579^x580));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x581 = 0;
	uint16_t x582 = UINT16_MAX;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MAX;
	volatile int32_t t117 = -109531;

    t117 = ((x581-x582)<=(x583^x584));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int32_t x586 = -55;
	int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	static int32_t t118 = 16190580;

    t118 = ((x585-x586)<=(x587^x588));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x589 = 116035;
	static volatile int64_t x591 = 0LL;
	uint16_t x592 = UINT16_MAX;

    t119 = ((x589-x590)<=(x591^x592));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x593 = UINT8_MAX;
	int16_t x594 = INT16_MIN;
	static uint64_t x595 = UINT64_MAX;
	int32_t t120 = -52;

    t120 = ((x593-x594)<=(x595^x596));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x597 = 1U;
	static int64_t x598 = 3875905438419LL;
	uint8_t x599 = UINT8_MAX;
	volatile uint32_t x600 = 1599036U;

    t121 = ((x597-x598)<=(x599^x600));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x603 = UINT8_MAX;
	static int64_t x604 = INT64_MIN;
	volatile int32_t t122 = 0;

    t122 = ((x601-x602)<=(x603^x604));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x605 = -1;
	int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MAX;
	volatile int64_t x608 = -1LL;
	volatile int32_t t123 = -438;

    t123 = ((x605-x606)<=(x607^x608));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x610 = 3;
	volatile int64_t x612 = -10029588046LL;
	volatile int32_t t124 = -136;

    t124 = ((x609-x610)<=(x611^x612));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x613 = -1LL;
	int64_t x614 = INT64_MIN;
	int64_t x615 = -1LL;
	int64_t x616 = INT64_MIN;
	volatile int32_t t125 = -81;

    t125 = ((x613-x614)<=(x615^x616));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = UINT64_MAX;
	volatile int64_t x620 = INT64_MIN;
	volatile int32_t t126 = 45;

    t126 = ((x617-x618)<=(x619^x620));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x621 = -1;
	int8_t x622 = INT8_MIN;
	uint64_t x623 = 99LLU;
	int64_t x624 = INT64_MIN;

    t127 = ((x621-x622)<=(x623^x624));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x629 = UINT32_MAX;
	int64_t x630 = -46LL;
	uint64_t x631 = 33405874066LLU;
	static volatile int32_t t128 = 26448;

    t128 = ((x629-x630)<=(x631^x632));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x633 = 215U;
	int8_t x634 = INT8_MIN;
	volatile int16_t x635 = 1;
	int32_t t129 = -162431;

    t129 = ((x633-x634)<=(x635^x636));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x641 = -199;
	int8_t x642 = INT8_MIN;
	uint32_t x643 = 3956483U;
	uint8_t x644 = 92U;
	static int32_t t130 = 29;

    t130 = ((x641-x642)<=(x643^x644));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x645 = 2452U;
	static uint16_t x646 = 873U;
	static int32_t x647 = INT32_MIN;
	int16_t x648 = 0;
	volatile int32_t t131 = 5;

    t131 = ((x645-x646)<=(x647^x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x649 = 16;
	volatile int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MIN;
	static int16_t x652 = INT16_MIN;

    t132 = ((x649-x650)<=(x651^x652));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x653 = INT64_MIN;
	int64_t x655 = -1LL;
	volatile int16_t x656 = 14421;
	volatile int32_t t133 = 0;

    t133 = ((x653-x654)<=(x655^x656));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x657 = UINT32_MAX;
	int8_t x659 = INT8_MIN;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t134 = -5222771;

    t134 = ((x657-x658)<=(x659^x660));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x661 = 91U;
	volatile int16_t x664 = INT16_MAX;
	int32_t t135 = -488;

    t135 = ((x661-x662)<=(x663^x664));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x665 = INT16_MIN;
	int64_t x666 = 25308828739540LL;
	int32_t x667 = -1;
	static int32_t x668 = -1;
	static int32_t t136 = 7;

    t136 = ((x665-x666)<=(x667^x668));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x669 = INT64_MAX;
	uint16_t x670 = 3763U;
	uint16_t x671 = 2U;
	static int16_t x672 = INT16_MIN;
	int32_t t137 = -646210;

    t137 = ((x669-x670)<=(x671^x672));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x675 = -1;
	int32_t x676 = INT32_MIN;
	volatile int32_t t138 = 2853610;

    t138 = ((x673-x674)<=(x675^x676));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x677 = 33237142008784LLU;
	int16_t x678 = INT16_MIN;
	int8_t x680 = -1;
	volatile int32_t t139 = 10887;

    t139 = ((x677-x678)<=(x679^x680));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x681 = 0;
	int64_t x682 = 175493711LL;
	volatile uint8_t x683 = UINT8_MAX;
	volatile uint64_t x684 = 66947LLU;
	volatile int32_t t140 = 0;

    t140 = ((x681-x682)<=(x683^x684));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x689 = -1;
	int64_t x690 = INT64_MIN;
	volatile int16_t x691 = -936;
	int16_t x692 = INT16_MAX;
	int32_t t141 = 42093021;

    t141 = ((x689-x690)<=(x691^x692));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x694 = 1U;
	uint16_t x695 = 3U;
	uint8_t x696 = 7U;

    t142 = ((x693-x694)<=(x695^x696));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MIN;
	volatile uint64_t x699 = 1565LLU;
	int32_t x700 = INT32_MIN;
	volatile int32_t t143 = 27;

    t143 = ((x697-x698)<=(x699^x700));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = INT16_MIN;
	uint32_t x703 = 1U;
	int16_t x704 = INT16_MIN;
	int32_t t144 = 0;

    t144 = ((x701-x702)<=(x703^x704));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x709 = INT32_MIN;
	uint32_t x710 = 8070U;
	uint8_t x712 = 90U;
	static int32_t t145 = -506959596;

    t145 = ((x709-x710)<=(x711^x712));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x713 = INT32_MIN;
	int8_t x714 = -1;
	volatile int64_t x716 = -9016740LL;
	static volatile int32_t t146 = 948217;

    t146 = ((x713-x714)<=(x715^x716));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x718 = -1;
	uint64_t x719 = 8297792LLU;
	static int64_t x720 = INT64_MAX;

    t147 = ((x717-x718)<=(x719^x720));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x721 = INT16_MIN;
	static uint16_t x722 = 236U;
	volatile int32_t x723 = INT32_MIN;

    t148 = ((x721-x722)<=(x723^x724));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x725 = -1;
	volatile uint8_t x727 = 59U;
	int64_t x728 = -1278679576928641920LL;
	volatile int32_t t149 = -54936;

    t149 = ((x725-x726)<=(x727^x728));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x729 = INT16_MAX;
	volatile uint32_t x730 = 1415259U;
	int16_t x731 = INT16_MIN;
	static volatile int32_t x732 = INT32_MIN;
	static volatile int32_t t150 = 56781;

    t150 = ((x729-x730)<=(x731^x732));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x733 = 15601833U;
	int8_t x734 = -1;
	int16_t x735 = -1;
	uint32_t x736 = 116791540U;
	static volatile int32_t t151 = 29964;

    t151 = ((x733-x734)<=(x735^x736));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x737 = -1LL;
	int8_t x739 = INT8_MAX;

    t152 = ((x737-x738)<=(x739^x740));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x741 = INT8_MAX;
	static int64_t x743 = INT64_MAX;
	volatile int8_t x744 = INT8_MIN;
	static volatile int32_t t153 = -1;

    t153 = ((x741-x742)<=(x743^x744));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x745 = 3LLU;
	uint64_t x746 = UINT64_MAX;
	int32_t x747 = INT32_MIN;
	volatile int32_t t154 = -51;

    t154 = ((x745-x746)<=(x747^x748));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x749 = 3U;
	int8_t x751 = INT8_MAX;
	static int16_t x752 = -1;
	int32_t t155 = 109948235;

    t155 = ((x749-x750)<=(x751^x752));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x757 = 25220808LLU;
	int32_t x758 = -1;
	static volatile int64_t x760 = -377004522447922977LL;
	volatile int32_t t156 = 31;

    t156 = ((x757-x758)<=(x759^x760));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x762 = 12;
	volatile int32_t t157 = -511860;

    t157 = ((x761-x762)<=(x763^x764));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x765 = 5426U;
	uint64_t x766 = 1510LLU;
	int16_t x767 = -14;
	static volatile int16_t x768 = INT16_MAX;
	int32_t t158 = 421070182;

    t158 = ((x765-x766)<=(x767^x768));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x771 = -1LL;
	int64_t x772 = 1512LL;
	volatile int32_t t159 = 2364;

    t159 = ((x769-x770)<=(x771^x772));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x777 = INT8_MIN;
	int8_t x778 = INT8_MAX;
	int16_t x779 = 42;
	int8_t x780 = -1;
	static volatile int32_t t160 = 258822702;

    t160 = ((x777-x778)<=(x779^x780));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x781 = 7;
	uint64_t x782 = UINT64_MAX;
	int8_t x783 = INT8_MIN;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t161 = 7081;

    t161 = ((x781-x782)<=(x783^x784));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x785 = 6852347042078LLU;
	int16_t x786 = INT16_MIN;
	int64_t x787 = INT64_MAX;
	uint8_t x788 = UINT8_MAX;
	static volatile int32_t t162 = 291;

    t162 = ((x785-x786)<=(x787^x788));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x789 = UINT16_MAX;
	uint16_t x790 = UINT16_MAX;
	static uint16_t x792 = 110U;
	volatile int32_t t163 = -64;

    t163 = ((x789-x790)<=(x791^x792));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x797 = 94;
	int16_t x798 = 27;
	int16_t x799 = INT16_MIN;
	volatile uint32_t x800 = 3503U;
	volatile int32_t t164 = -29;

    t164 = ((x797-x798)<=(x799^x800));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x801 = UINT8_MAX;
	int64_t x802 = 58827895660LL;
	static int8_t x803 = -1;
	int8_t x804 = INT8_MIN;
	static int32_t t165 = -1532;

    t165 = ((x801-x802)<=(x803^x804));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x805 = -22479318;
	int16_t x806 = INT16_MIN;
	uint64_t x808 = UINT64_MAX;

    t166 = ((x805-x806)<=(x807^x808));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x810 = -1;
	int64_t x811 = -1LL;
	int32_t x812 = INT32_MAX;
	static int32_t t167 = 64455;

    t167 = ((x809-x810)<=(x811^x812));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x813 = 2U;
	static int16_t x815 = -1;
	volatile int16_t x816 = -517;
	static volatile int32_t t168 = -252623;

    t168 = ((x813-x814)<=(x815^x816));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x817 = -367;
	static volatile int16_t x818 = 19;
	static volatile int32_t x819 = 1004;
	int64_t x820 = INT64_MAX;
	volatile int32_t t169 = -429;

    t169 = ((x817-x818)<=(x819^x820));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x821 = 32620970;
	int16_t x822 = 26;
	volatile uint8_t x823 = UINT8_MAX;
	int64_t x824 = INT64_MIN;
	volatile int32_t t170 = 989073;

    t170 = ((x821-x822)<=(x823^x824));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x825 = INT16_MIN;
	int32_t x826 = 840094;
	uint64_t x827 = 15878607370169LLU;
	volatile int16_t x828 = INT16_MAX;
	volatile int32_t t171 = 164;

    t171 = ((x825-x826)<=(x827^x828));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x829 = INT8_MIN;
	static int8_t x830 = -1;
	int64_t x831 = INT64_MAX;
	volatile int32_t t172 = -329;

    t172 = ((x829-x830)<=(x831^x832));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x833 = 4708LLU;
	uint16_t x834 = 0U;
	uint8_t x835 = UINT8_MAX;
	static uint8_t x836 = UINT8_MAX;
	volatile int32_t t173 = 799728;

    t173 = ((x833-x834)<=(x835^x836));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x837 = INT8_MAX;
	volatile int32_t x838 = -1;
	static int16_t x839 = 327;
	int32_t x840 = 63;
	int32_t t174 = -1;

    t174 = ((x837-x838)<=(x839^x840));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x841 = UINT64_MAX;
	int64_t x842 = INT64_MIN;
	uint64_t x843 = 695LLU;
	volatile uint8_t x844 = 20U;
	int32_t t175 = 62497;

    t175 = ((x841-x842)<=(x843^x844));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x845 = -3;
	volatile int8_t x846 = -1;
	static int8_t x847 = 1;
	static int32_t t176 = -779477;

    t176 = ((x845-x846)<=(x847^x848));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x849 = 0U;
	int16_t x851 = 24;
	static int8_t x852 = INT8_MIN;
	int32_t t177 = 15;

    t177 = ((x849-x850)<=(x851^x852));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x853 = -1LL;
	int16_t x854 = INT16_MAX;
	uint32_t x855 = 62U;
	volatile uint64_t x856 = UINT64_MAX;
	volatile int32_t t178 = 145;

    t178 = ((x853-x854)<=(x855^x856));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x857 = -1;
	volatile int16_t x858 = 4740;
	int16_t x859 = INT16_MIN;
	int16_t x860 = 10;
	int32_t t179 = 16647;

    t179 = ((x857-x858)<=(x859^x860));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x861 = 739U;
	static int8_t x864 = INT8_MIN;

    t180 = ((x861-x862)<=(x863^x864));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x865 = INT16_MIN;
	int16_t x866 = -8156;
	static uint32_t x867 = 258136250U;
	static int64_t x868 = INT64_MAX;
	static int32_t t181 = 7354;

    t181 = ((x865-x866)<=(x867^x868));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x869 = INT8_MIN;
	int16_t x870 = INT16_MIN;
	uint16_t x871 = 3U;
	uint32_t x872 = 29618U;

    t182 = ((x869-x870)<=(x871^x872));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x873 = 466023300U;
	volatile uint8_t x874 = 1U;
	uint32_t x875 = UINT32_MAX;
	static volatile int64_t x876 = INT64_MIN;
	int32_t t183 = 144933387;

    t183 = ((x873-x874)<=(x875^x876));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	int8_t x879 = INT8_MIN;
	volatile int64_t x880 = 16314513328LL;
	volatile int32_t t184 = 1035312;

    t184 = ((x877-x878)<=(x879^x880));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x881 = INT64_MIN;
	int16_t x882 = -45;
	uint8_t x883 = 113U;
	int16_t x884 = INT16_MIN;

    t185 = ((x881-x882)<=(x883^x884));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x889 = INT64_MAX;
	uint64_t x890 = UINT64_MAX;
	static volatile int16_t x891 = INT16_MAX;
	int32_t t186 = 12;

    t186 = ((x889-x890)<=(x891^x892));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x893 = -1;
	int32_t x894 = -1;
	static uint8_t x896 = UINT8_MAX;

    t187 = ((x893-x894)<=(x895^x896));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x897 = 349803593U;
	volatile int8_t x899 = INT8_MIN;
	uint16_t x900 = 9217U;
	volatile int32_t t188 = -4499973;

    t188 = ((x897-x898)<=(x899^x900));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x902 = -1;
	int8_t x903 = INT8_MAX;
	int8_t x904 = 6;
	volatile int32_t t189 = -474119;

    t189 = ((x901-x902)<=(x903^x904));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x909 = INT8_MIN;
	int16_t x910 = -7146;
	int8_t x911 = INT8_MIN;
	int16_t x912 = INT16_MAX;
	volatile int32_t t190 = -239769;

    t190 = ((x909-x910)<=(x911^x912));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x914 = UINT32_MAX;
	uint8_t x916 = 9U;
	volatile int32_t t191 = -4847;

    t191 = ((x913-x914)<=(x915^x916));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x917 = UINT8_MAX;
	volatile int16_t x918 = -1;
	static uint16_t x919 = 25U;
	int32_t x920 = 235311;
	int32_t t192 = 503;

    t192 = ((x917-x918)<=(x919^x920));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x922 = INT8_MIN;
	static volatile uint64_t x924 = UINT64_MAX;
	volatile int32_t t193 = 6052;

    t193 = ((x921-x922)<=(x923^x924));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x925 = 1562U;
	uint16_t x926 = 31022U;
	static int32_t t194 = -664181;

    t194 = ((x925-x926)<=(x927^x928));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x929 = -2946;
	int64_t x930 = 3443817143880LL;
	int16_t x932 = 15076;
	volatile int32_t t195 = -13;

    t195 = ((x929-x930)<=(x931^x932));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x933 = 0;
	int64_t x934 = -30LL;
	uint8_t x936 = 15U;
	static volatile int32_t t196 = -19;

    t196 = ((x933-x934)<=(x935^x936));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x937 = 181743127137LLU;
	static volatile int16_t x938 = -1;
	int64_t x939 = INT64_MIN;
	uint32_t x940 = 495334901U;
	volatile int32_t t197 = -42138;

    t197 = ((x937-x938)<=(x939^x940));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x941 = 57;
	uint64_t x942 = UINT64_MAX;
	int64_t x943 = -1LL;
	int32_t t198 = -355586;

    t198 = ((x941-x942)<=(x943^x944));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x946 = -2866120971919LL;
	int32_t x947 = 16133;
	uint64_t x948 = UINT64_MAX;
	volatile int32_t t199 = -18;

    t199 = ((x945-x946)<=(x947^x948));

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

