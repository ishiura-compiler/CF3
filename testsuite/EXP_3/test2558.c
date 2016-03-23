
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

int16_t x12 = -1;
uint16_t x18 = UINT16_MAX;
volatile int16_t x20 = -15501;
static uint32_t x21 = 0U;
volatile uint32_t x22 = 8853U;
uint16_t x25 = 87U;
uint32_t x28 = UINT32_MAX;
static int64_t x33 = 6462901LL;
volatile int32_t t7 = 90666562;
uint64_t x40 = 1LLU;
static int8_t x41 = INT8_MIN;
int16_t x44 = INT16_MIN;
uint16_t x46 = UINT16_MAX;
int8_t x53 = INT8_MIN;
int16_t x57 = 0;
uint32_t x60 = UINT32_MAX;
static volatile int32_t t14 = 3828;
volatile int32_t t15 = 1150;
int64_t x71 = -15729876LL;
int8_t x77 = INT8_MAX;
int64_t x79 = INT64_MIN;
uint8_t x80 = 31U;
uint8_t x81 = 43U;
int64_t x82 = INT64_MIN;
volatile int32_t t19 = 12;
uint64_t x91 = 34224276LLU;
uint64_t x92 = 2559300LLU;
static int16_t x94 = 654;
static volatile int32_t t22 = -1371;
uint64_t x102 = 6287429LLU;
int64_t x103 = -27496924900436LL;
uint16_t x104 = UINT16_MAX;
int32_t t23 = 11;
uint32_t x106 = 313765564U;
int8_t x107 = -1;
uint32_t x112 = UINT32_MAX;
int8_t x113 = INT8_MIN;
static int32_t t26 = 3147;
uint32_t x123 = 25U;
uint16_t x129 = 31U;
uint16_t x131 = UINT16_MAX;
volatile int64_t x138 = -1LL;
int16_t x143 = INT16_MIN;
volatile int32_t t33 = -422;
uint16_t x146 = UINT16_MAX;
static int32_t t34 = -168436;
uint64_t x160 = UINT64_MAX;
int8_t x195 = INT8_MIN;
int32_t t44 = -56294;
volatile int64_t x210 = INT64_MAX;
int64_t x216 = 930917448466743322LL;
int8_t x217 = -1;
static uint64_t x220 = UINT64_MAX;
uint16_t x229 = UINT16_MAX;
static int32_t x231 = -105;
uint8_t x236 = UINT8_MAX;
int64_t x237 = INT64_MIN;
int64_t x245 = INT64_MIN;
uint8_t x267 = UINT8_MAX;
static volatile int8_t x271 = 0;
int32_t t62 = -1001839100;
static int8_t x275 = -2;
static volatile int64_t x276 = 68186587871LL;
int32_t t63 = -188;
volatile int32_t t64 = -1889136;
int8_t x289 = -1;
static uint32_t x290 = 29U;
volatile int64_t x294 = 2818166646874721LL;
static uint8_t x297 = UINT8_MAX;
int16_t x299 = INT16_MAX;
volatile uint64_t x302 = 285LLU;
static uint64_t x303 = UINT64_MAX;
static uint16_t x308 = 5551U;
volatile uint64_t x315 = 1LLU;
uint8_t x316 = 2U;
int8_t x321 = -1;
static int8_t x324 = -1;
int64_t x329 = -83805976964409LL;
int8_t x332 = 4;
int64_t x335 = INT64_MAX;
int32_t t77 = -57158299;
volatile int32_t t78 = 19183;
int32_t x341 = INT32_MAX;
volatile int32_t t79 = -207468;
int16_t x347 = 1;
volatile int32_t t80 = -672;
uint16_t x349 = UINT16_MAX;
static uint8_t x361 = UINT8_MAX;
int32_t x362 = -1;
uint16_t x363 = 247U;
static uint64_t x364 = 3322110617452LLU;
uint8_t x371 = UINT8_MAX;
int32_t t86 = -40147;
uint64_t x377 = 28900940697829LLU;
volatile int32_t t87 = 2167;
int8_t x405 = INT8_MAX;
int8_t x406 = INT8_MAX;
volatile int32_t x410 = 659;
static int8_t x416 = -1;
int64_t x418 = -220923516619883LL;
volatile int16_t x422 = INT16_MIN;
volatile int16_t x425 = INT16_MIN;
volatile uint16_t x429 = UINT16_MAX;
int64_t x430 = 633390179371706LL;
static volatile int32_t t99 = -372425497;
static volatile int32_t x433 = 62219;
static int32_t x438 = INT32_MIN;
int32_t t101 = 12;
volatile int64_t x442 = INT64_MIN;
uint8_t x449 = 12U;
static volatile int32_t t107 = -739524;
uint64_t x469 = UINT64_MAX;
int16_t x470 = INT16_MIN;
int16_t x472 = 141;
volatile int32_t t108 = -27;
volatile int32_t t109 = -6713;
volatile int64_t x478 = -97LL;
volatile int32_t t111 = -21;
volatile uint64_t x492 = 12531483367181LLU;
int32_t x497 = 0;
volatile int32_t t115 = -352;
uint16_t x516 = UINT16_MAX;
static volatile uint16_t x529 = 16U;
int16_t x534 = INT16_MIN;
uint32_t x540 = 2453U;
static volatile uint32_t x546 = 4508448U;
volatile int16_t x560 = INT16_MIN;
static uint16_t x569 = 2809U;
uint64_t x570 = 2986216567LLU;
static int32_t t131 = -160541;
static int32_t x575 = -4037617;
static volatile int64_t x580 = 4LL;
int32_t t133 = 0;
volatile int16_t x589 = 7;
int32_t x600 = INT32_MAX;
int8_t x601 = 0;
int32_t t138 = -6;
int8_t x628 = 1;
int64_t x632 = 12944336LL;
static int64_t x643 = 27029190436807022LL;
uint64_t x650 = 1353559208LLU;
uint32_t x651 = 107449254U;
int32_t x654 = -1;
volatile int32_t t149 = -4;
volatile uint64_t x661 = 9212681644579158058LLU;
static uint16_t x670 = 3U;
uint64_t x671 = UINT64_MAX;
int32_t t152 = -5222;
int64_t x673 = INT64_MIN;
uint8_t x675 = UINT8_MAX;
int8_t x691 = -6;
int32_t x694 = 58254761;
int16_t x697 = INT16_MIN;
int64_t x702 = INT64_MIN;
int8_t x704 = INT8_MAX;
uint16_t x705 = 15665U;
static volatile int16_t x712 = INT16_MIN;
int32_t t162 = 60;
uint32_t x713 = 120214817U;
static int32_t x717 = 69248;
static volatile uint32_t x735 = 46476827U;
volatile uint32_t x748 = UINT32_MAX;
int32_t t170 = -4459270;
uint64_t x749 = UINT64_MAX;
uint64_t x756 = 735939756091LLU;
uint16_t x767 = 28559U;
int8_t x773 = -2;
volatile int32_t t178 = 6917;
int32_t t179 = 1013894524;
volatile uint8_t x802 = 52U;
volatile int32_t x803 = -1;
int64_t x804 = INT64_MAX;
uint16_t x814 = 31U;
static int8_t x815 = INT8_MIN;
static uint64_t x816 = 483LLU;
int16_t x826 = INT16_MAX;
int64_t x833 = -1LL;
volatile int8_t x834 = -25;
volatile int16_t x835 = INT16_MIN;
volatile int32_t t193 = -1;
volatile int16_t x843 = INT16_MIN;
volatile int32_t x858 = INT32_MIN;
int16_t x860 = INT16_MIN;
volatile uint32_t x863 = 1937733U;
uint32_t x871 = 131311414U;
static uint8_t x872 = 116U;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 297123;

    t0 = ((x1+x2)<=(x3^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = 825U;
	int16_t x10 = -1;
	int16_t x11 = INT16_MAX;
	volatile int32_t t1 = -84;

    t1 = ((x9+x10)<=(x11^x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 69121981648LLU;
	volatile int16_t x14 = INT16_MIN;
	uint64_t x15 = 18280694867261LLU;
	int32_t x16 = -1;
	static int32_t t2 = 248767;

    t2 = ((x13+x14)<=(x15^x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = -1LL;
	int16_t x19 = INT16_MAX;
	volatile int32_t t3 = 33258;

    t3 = ((x17+x18)<=(x19^x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x23 = 11870U;
	int64_t x24 = INT64_MAX;
	volatile int32_t t4 = 750283;

    t4 = ((x21+x22)<=(x23^x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	volatile int32_t t5 = 483921981;

    t5 = ((x25+x26)<=(x27^x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MAX;
	volatile int32_t x30 = INT32_MIN;
	int8_t x31 = -10;
	static volatile int8_t x32 = INT8_MIN;
	volatile int32_t t6 = -1517250;

    t6 = ((x29+x30)<=(x31^x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x34 = INT64_MIN;
	uint64_t x35 = 52397LLU;
	int64_t x36 = -7391112LL;

    t7 = ((x33+x34)<=(x35^x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = 2117637LL;
	int64_t x38 = INT64_MIN;
	static int64_t x39 = -1LL;
	volatile int32_t t8 = -7;

    t8 = ((x37+x38)<=(x39^x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = 5;
	int32_t x43 = -7201;
	volatile int32_t t9 = 398;

    t9 = ((x41+x42)<=(x43^x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x45 = INT8_MIN;
	uint8_t x47 = 120U;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = 7;

    t10 = ((x45+x46)<=(x47^x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MAX;
	int32_t x51 = 2061;
	int32_t x52 = -1;
	volatile int32_t t11 = -49;

    t11 = ((x49+x50)<=(x51^x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = -83;
	int8_t x55 = 0;
	static int8_t x56 = -1;
	volatile int32_t t12 = 5;

    t12 = ((x53+x54)<=(x55^x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x58 = INT64_MIN;
	volatile int32_t x59 = 498190661;
	static int32_t t13 = 32;

    t13 = ((x57+x58)<=(x59^x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 235505262U;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	volatile int32_t x64 = 221700644;

    t14 = ((x61+x62)<=(x63^x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 1;
	int8_t x66 = 2;
	int64_t x67 = 10668576338611156LL;
	volatile int16_t x68 = -5455;

    t15 = ((x65+x66)<=(x67^x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -394238486;
	volatile int16_t x70 = INT16_MIN;
	static uint64_t x72 = 525248496173LLU;
	int32_t t16 = -12345568;

    t16 = ((x69+x70)<=(x71^x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x78 = UINT8_MAX;
	int32_t t17 = -3302256;

    t17 = ((x77+x78)<=(x79^x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x83 = INT32_MAX;
	volatile int64_t x84 = INT64_MIN;
	int32_t t18 = 877907886;

    t18 = ((x81+x82)<=(x83^x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 0U;
	volatile uint32_t x86 = 5222U;
	int32_t x87 = INT32_MIN;
	uint16_t x88 = UINT16_MAX;

    t19 = ((x85+x86)<=(x87^x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 7921745665LLU;
	volatile int32_t t20 = -65518988;

    t20 = ((x89+x90)<=(x91^x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MIN;
	uint16_t x95 = 28499U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t21 = 7348024;

    t21 = ((x93+x94)<=(x95^x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = 55212U;
	uint8_t x98 = UINT8_MAX;
	uint8_t x99 = UINT8_MAX;
	volatile uint8_t x100 = 14U;

    t22 = ((x97+x98)<=(x99^x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;

    t23 = ((x101+x102)<=(x103^x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x105 = -1;
	int64_t x108 = INT64_MAX;
	int32_t t24 = -16120563;

    t24 = ((x105+x106)<=(x107^x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;
	int32_t t25 = -183923;

    t25 = ((x109+x110)<=(x111^x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x114 = 935583361584LL;
	static int16_t x115 = 1;
	int32_t x116 = -1;

    t26 = ((x113+x114)<=(x115^x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = 4U;
	int32_t x118 = 0;
	static int64_t x119 = 17617735385023LL;
	uint32_t x120 = 220U;
	volatile int32_t t27 = 324819;

    t27 = ((x117+x118)<=(x119^x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x121 = -1;
	uint64_t x122 = 363076LLU;
	static int32_t x124 = 7381;
	int32_t t28 = -1007;

    t28 = ((x121+x122)<=(x123^x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x125 = 6;
	uint16_t x126 = 2210U;
	volatile int16_t x127 = INT16_MIN;
	static int32_t x128 = -36522066;
	int32_t t29 = 448;

    t29 = ((x125+x126)<=(x127^x128));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x130 = -399531;
	int32_t x132 = INT32_MIN;
	int32_t t30 = -155;

    t30 = ((x129+x130)<=(x131^x132));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x133 = INT16_MAX;
	static uint16_t x134 = UINT16_MAX;
	int32_t x135 = -1;
	static int32_t x136 = 8;
	int32_t t31 = -3794098;

    t31 = ((x133+x134)<=(x135^x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -1;
	int16_t x139 = -1;
	static uint32_t x140 = 748U;
	volatile int32_t t32 = 10;

    t32 = ((x137+x138)<=(x139^x140));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = -1;
	int64_t x142 = -1LL;
	int64_t x144 = -1LL;

    t33 = ((x141+x142)<=(x143^x144));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x145 = INT32_MIN;
	static uint8_t x147 = 0U;
	int64_t x148 = 27076LL;

    t34 = ((x145+x146)<=(x147^x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x149 = 15U;
	static int64_t x150 = 86367952589LL;
	int64_t x151 = 784300LL;
	static uint32_t x152 = UINT32_MAX;
	static int32_t t35 = -11;

    t35 = ((x149+x150)<=(x151^x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 60U;
	int32_t x156 = INT32_MIN;
	int32_t t36 = -102618328;

    t36 = ((x153+x154)<=(x155^x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = -160104566LL;
	int64_t x158 = -32655849248LL;
	static uint32_t x159 = UINT32_MAX;
	static int32_t t37 = -320968902;

    t37 = ((x157+x158)<=(x159^x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = -27;
	uint8_t x162 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	volatile uint16_t x164 = 0U;
	int32_t t38 = 75645;

    t38 = ((x161+x162)<=(x163^x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = -1;
	volatile int8_t x168 = -1;
	volatile int32_t t39 = 0;

    t39 = ((x165+x166)<=(x167^x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = 12;
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 31471U;
	uint32_t x176 = 9674U;
	int32_t t40 = 4704;

    t40 = ((x173+x174)<=(x175^x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = 5LL;
	volatile uint16_t x178 = 9U;
	int8_t x179 = INT8_MIN;
	static uint16_t x180 = 905U;
	volatile int32_t t41 = 168152;

    t41 = ((x177+x178)<=(x179^x180));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = 1354U;
	uint64_t x182 = UINT64_MAX;
	static int8_t x183 = INT8_MIN;
	static volatile int32_t x184 = INT32_MAX;
	static volatile int32_t t42 = 1102;

    t42 = ((x181+x182)<=(x183^x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x189 = -1LL;
	volatile int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	int16_t x192 = -1;
	volatile int32_t t43 = -27619;

    t43 = ((x189+x190)<=(x191^x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x194 = 17;
	static volatile int16_t x196 = INT16_MAX;

    t44 = ((x193+x194)<=(x195^x196));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x197 = 2U;
	int32_t x198 = 421;
	int8_t x199 = -48;
	static uint64_t x200 = 34792900413179569LLU;
	volatile int32_t t45 = 5030;

    t45 = ((x197+x198)<=(x199^x200));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x201 = UINT64_MAX;
	static int16_t x202 = INT16_MIN;
	static volatile int32_t x203 = INT32_MIN;
	uint64_t x204 = 13766LLU;
	volatile int32_t t46 = 1;

    t46 = ((x201+x202)<=(x203^x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	int64_t x206 = -86071608472710184LL;
	int32_t x207 = INT32_MAX;
	volatile int16_t x208 = -11;
	static volatile int32_t t47 = 3279425;

    t47 = ((x205+x206)<=(x207^x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = INT32_MIN;
	int16_t x211 = 993;
	static uint8_t x212 = 1U;
	volatile int32_t t48 = -207;

    t48 = ((x209+x210)<=(x211^x212));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x213 = 14;
	int64_t x214 = -233053867LL;
	uint64_t x215 = 30952944792LLU;
	volatile int32_t t49 = 448905701;

    t49 = ((x213+x214)<=(x215^x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x218 = 6U;
	uint32_t x219 = UINT32_MAX;
	static volatile int32_t t50 = 564549245;

    t50 = ((x217+x218)<=(x219^x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x221 = UINT32_MAX;
	int8_t x222 = -1;
	int16_t x223 = 1;
	int32_t x224 = INT32_MAX;
	volatile int32_t t51 = -245963163;

    t51 = ((x221+x222)<=(x223^x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x225 = INT8_MIN;
	static int64_t x226 = -1LL;
	volatile uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 1551U;
	static int32_t t52 = -8;

    t52 = ((x225+x226)<=(x227^x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x230 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t53 = 182;

    t53 = ((x229+x230)<=(x231^x232));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = 11922072LL;
	volatile int8_t x234 = -1;
	int32_t x235 = INT32_MIN;
	volatile int32_t t54 = -5;

    t54 = ((x233+x234)<=(x235^x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x238 = INT16_MAX;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;
	volatile int32_t t55 = 173;

    t55 = ((x237+x238)<=(x239^x240));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x241 = 3U;
	int32_t x242 = INT32_MIN;
	int8_t x243 = -1;
	uint16_t x244 = 26309U;
	static volatile int32_t t56 = -13;

    t56 = ((x241+x242)<=(x243^x244));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x246 = INT32_MAX;
	uint16_t x247 = 112U;
	uint64_t x248 = UINT64_MAX;
	int32_t t57 = 1570526;

    t57 = ((x245+x246)<=(x247^x248));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MAX;
	volatile uint32_t x250 = 6139092U;
	int8_t x251 = -1;
	static volatile uint8_t x252 = UINT8_MAX;
	int32_t t58 = -691558640;

    t58 = ((x249+x250)<=(x251^x252));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = 1755151;
	uint16_t x254 = 18U;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	volatile int32_t t59 = 27790496;

    t59 = ((x253+x254)<=(x255^x256));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = 63;
	volatile uint64_t x262 = 6920LLU;
	int16_t x263 = INT16_MIN;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t60 = -8879487;

    t60 = ((x261+x262)<=(x263^x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = -1;
	uint64_t x266 = 0LLU;
	volatile int8_t x268 = INT8_MAX;
	int32_t t61 = -1;

    t61 = ((x265+x266)<=(x267^x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x269 = -1;
	uint32_t x270 = 6042499U;
	static int8_t x272 = -1;

    t62 = ((x269+x270)<=(x271^x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x273 = 2LLU;
	int16_t x274 = INT16_MIN;

    t63 = ((x273+x274)<=(x275^x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x277 = -4;
	static int64_t x278 = 0LL;
	volatile int16_t x279 = 8;
	int32_t x280 = 6;

    t64 = ((x277+x278)<=(x279^x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x281 = 37846925934503LLU;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = 7U;
	int64_t x284 = INT64_MAX;
	int32_t t65 = -89;

    t65 = ((x281+x282)<=(x283^x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	static int32_t t66 = 3;

    t66 = ((x285+x286)<=(x287^x288));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x291 = 0U;
	int8_t x292 = INT8_MIN;
	int32_t t67 = 4;

    t67 = ((x289+x290)<=(x291^x292));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x293 = 17U;
	static int32_t x295 = -5258;
	static int64_t x296 = -1LL;
	int32_t t68 = 1488;

    t68 = ((x293+x294)<=(x295^x296));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x298 = 15U;
	uint32_t x300 = 3U;
	volatile int32_t t69 = 14936123;

    t69 = ((x297+x298)<=(x299^x300));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x301 = INT16_MAX;
	uint8_t x304 = 1U;
	int32_t t70 = 297;

    t70 = ((x301+x302)<=(x303^x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x305 = 517751LLU;
	int32_t x306 = 234;
	uint16_t x307 = 25543U;
	int32_t t71 = -5470115;

    t71 = ((x305+x306)<=(x307^x308));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	volatile int32_t t72 = -2985;

    t72 = ((x313+x314)<=(x315^x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = -1;
	static uint64_t x318 = 3134573482534LLU;
	int32_t x319 = INT32_MIN;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t73 = -450;

    t73 = ((x317+x318)<=(x319^x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = -2939;
	uint8_t x323 = 3U;
	int32_t t74 = 32894;

    t74 = ((x321+x322)<=(x323^x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = -2;
	int16_t x326 = INT16_MAX;
	uint64_t x327 = UINT64_MAX;
	int8_t x328 = -1;
	volatile int32_t t75 = 1042;

    t75 = ((x325+x326)<=(x327^x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x330 = INT32_MIN;
	uint16_t x331 = UINT16_MAX;
	static int32_t t76 = -25182;

    t76 = ((x329+x330)<=(x331^x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MIN;
	int64_t x336 = -25LL;

    t77 = ((x333+x334)<=(x335^x336));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x337 = 17;
	int64_t x338 = -384586608755361686LL;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t x340 = -1;

    t78 = ((x337+x338)<=(x339^x340));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	uint16_t x344 = 0U;

    t79 = ((x341+x342)<=(x343^x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x345 = UINT16_MAX;
	static int8_t x346 = INT8_MAX;
	int32_t x348 = INT32_MIN;

    t80 = ((x345+x346)<=(x347^x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x350 = INT64_MIN;
	int32_t x351 = -194;
	int8_t x352 = -3;
	volatile int32_t t81 = -1246181;

    t81 = ((x349+x350)<=(x351^x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x353 = -3;
	uint16_t x354 = 826U;
	uint32_t x355 = 62U;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t82 = 119306869;

    t82 = ((x353+x354)<=(x355^x356));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x357 = 0;
	static int8_t x358 = 1;
	int16_t x359 = -15;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t83 = 30011;

    t83 = ((x357+x358)<=(x359^x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t t84 = 1334277;

    t84 = ((x361+x362)<=(x363^x364));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x365 = 7;
	volatile uint8_t x366 = UINT8_MAX;
	volatile int32_t x367 = -1;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t85 = -14358;

    t85 = ((x365+x366)<=(x367^x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x369 = UINT8_MAX;
	static uint64_t x370 = UINT64_MAX;
	volatile int64_t x372 = INT64_MIN;

    t86 = ((x369+x370)<=(x371^x372));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x378 = -61602;
	static volatile int8_t x379 = 58;
	static volatile int8_t x380 = INT8_MIN;

    t87 = ((x377+x378)<=(x379^x380));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = -1;
	volatile int8_t x382 = INT8_MIN;
	static uint8_t x383 = 14U;
	int8_t x384 = INT8_MIN;
	static int32_t t88 = -11;

    t88 = ((x381+x382)<=(x383^x384));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = 17609496;
	static uint32_t x390 = 25813U;
	int16_t x391 = INT16_MIN;
	int64_t x392 = -1LL;
	volatile int32_t t89 = 0;

    t89 = ((x389+x390)<=(x391^x392));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x393 = UINT32_MAX;
	int64_t x394 = -7714410084667556LL;
	int64_t x395 = -483571198318276212LL;
	int16_t x396 = -1;
	volatile int32_t t90 = -3847;

    t90 = ((x393+x394)<=(x395^x396));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x397 = 13645U;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	uint64_t x400 = 0LLU;
	static volatile int32_t t91 = 314;

    t91 = ((x397+x398)<=(x399^x400));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x401 = INT32_MAX;
	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = INT64_MIN;
	uint8_t x404 = UINT8_MAX;
	int32_t t92 = 74684;

    t92 = ((x401+x402)<=(x403^x404));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x407 = 4U;
	uint8_t x408 = 56U;
	volatile int32_t t93 = 7746;

    t93 = ((x405+x406)<=(x407^x408));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x409 = -1;
	static int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MIN;
	static volatile int32_t t94 = 7126;

    t94 = ((x409+x410)<=(x411^x412));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x413 = 2U;
	int16_t x414 = INT16_MAX;
	uint16_t x415 = UINT16_MAX;
	int32_t t95 = 12;

    t95 = ((x413+x414)<=(x415^x416));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x417 = 12280;
	volatile int16_t x419 = -44;
	static int16_t x420 = 1;
	static volatile int32_t t96 = 2;

    t96 = ((x417+x418)<=(x419^x420));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x421 = INT64_MAX;
	uint32_t x423 = 1487956607U;
	volatile int64_t x424 = -8270249617819249LL;
	volatile int32_t t97 = -440;

    t97 = ((x421+x422)<=(x423^x424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x426 = -1;
	int64_t x427 = -2178199366384452235LL;
	static int8_t x428 = INT8_MIN;
	int32_t t98 = 13224841;

    t98 = ((x425+x426)<=(x427^x428));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x431 = UINT64_MAX;
	uint8_t x432 = 4U;

    t99 = ((x429+x430)<=(x431^x432));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MAX;
	volatile uint32_t x436 = 1031U;
	int32_t t100 = -16690516;

    t100 = ((x433+x434)<=(x435^x436));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x437 = 8U;
	static int64_t x439 = -1LL;
	uint16_t x440 = UINT16_MAX;

    t101 = ((x437+x438)<=(x439^x440));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x441 = INT8_MAX;
	int32_t x443 = INT32_MIN;
	uint32_t x444 = 1U;
	int32_t t102 = 14;

    t102 = ((x441+x442)<=(x443^x444));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int16_t x446 = -1;
	int8_t x447 = -21;
	int32_t x448 = INT32_MAX;
	int32_t t103 = 314069956;

    t103 = ((x445+x446)<=(x447^x448));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x450 = INT8_MIN;
	uint16_t x451 = 17U;
	int8_t x452 = 1;
	volatile int32_t t104 = -3589147;

    t104 = ((x449+x450)<=(x451^x452));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x453 = -1LL;
	int32_t x454 = INT32_MIN;
	volatile int32_t x455 = -23;
	int64_t x456 = -1LL;
	volatile int32_t t105 = 0;

    t105 = ((x453+x454)<=(x455^x456));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x457 = INT64_MAX;
	volatile int16_t x458 = INT16_MIN;
	uint16_t x459 = 1U;
	int64_t x460 = 505610LL;
	static int32_t t106 = 859884;

    t106 = ((x457+x458)<=(x459^x460));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = UINT32_MAX;
	volatile uint64_t x463 = UINT64_MAX;
	int32_t x464 = INT32_MIN;

    t107 = ((x461+x462)<=(x463^x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x471 = 6119752608LLU;

    t108 = ((x469+x470)<=(x471^x472));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MAX;
	int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;

    t109 = ((x473+x474)<=(x475^x476));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x477 = 208689407U;
	int64_t x479 = INT64_MIN;
	int16_t x480 = INT16_MIN;
	int32_t t110 = -81406265;

    t110 = ((x477+x478)<=(x479^x480));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x481 = INT16_MAX;
	uint8_t x482 = 6U;
	uint64_t x483 = 3532LLU;
	int64_t x484 = INT64_MIN;

    t111 = ((x481+x482)<=(x483^x484));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x485 = 14956073LLU;
	uint8_t x486 = UINT8_MAX;
	volatile uint32_t x487 = 18U;
	uint32_t x488 = 1U;
	volatile int32_t t112 = -13;

    t112 = ((x485+x486)<=(x487^x488));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x489 = INT32_MIN;
	int64_t x490 = INT64_MAX;
	uint32_t x491 = 168035691U;
	static volatile int32_t t113 = 13132456;

    t113 = ((x489+x490)<=(x491^x492));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x493 = -1;
	uint16_t x494 = 5U;
	int64_t x495 = -1649LL;
	int16_t x496 = INT16_MIN;
	volatile int32_t t114 = -2;

    t114 = ((x493+x494)<=(x495^x496));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x498 = -1;
	int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;

    t115 = ((x497+x498)<=(x499^x500));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x501 = 1U;
	uint8_t x502 = 0U;
	uint16_t x503 = 1569U;
	int32_t x504 = -1;
	static int32_t t116 = 1064;

    t116 = ((x501+x502)<=(x503^x504));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x505 = 1U;
	static volatile int16_t x506 = -6;
	int32_t x507 = INT32_MAX;
	int64_t x508 = -1151854974401716LL;
	static volatile int32_t t117 = -2;

    t117 = ((x505+x506)<=(x507^x508));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = INT16_MAX;
	uint8_t x515 = 54U;
	volatile int32_t t118 = -206084034;

    t118 = ((x513+x514)<=(x515^x516));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = INT8_MIN;
	static int8_t x518 = -1;
	int16_t x519 = INT16_MAX;
	static int64_t x520 = INT64_MIN;
	volatile int32_t t119 = -8669;

    t119 = ((x517+x518)<=(x519^x520));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x521 = -3;
	uint32_t x522 = UINT32_MAX;
	int32_t x523 = -9920142;
	int16_t x524 = INT16_MIN;
	volatile int32_t t120 = -1;

    t120 = ((x521+x522)<=(x523^x524));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x530 = INT32_MIN;
	int64_t x531 = -42566743360LL;
	volatile int64_t x532 = INT64_MIN;
	int32_t t121 = 377276;

    t121 = ((x529+x530)<=(x531^x532));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x533 = 18525200U;
	int64_t x535 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	int32_t t122 = -6519241;

    t122 = ((x533+x534)<=(x535^x536));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = UINT64_MAX;
	int16_t x539 = INT16_MIN;
	int32_t t123 = -1;

    t123 = ((x537+x538)<=(x539^x540));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x541 = INT8_MIN;
	int16_t x542 = 8146;
	uint32_t x543 = 2823U;
	uint16_t x544 = UINT16_MAX;
	int32_t t124 = 7902;

    t124 = ((x541+x542)<=(x543^x544));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x545 = INT32_MIN;
	uint64_t x547 = 948564713LLU;
	int64_t x548 = INT64_MIN;
	volatile int32_t t125 = -705744;

    t125 = ((x545+x546)<=(x547^x548));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x549 = 190367U;
	int32_t x550 = -211057;
	uint16_t x551 = 22170U;
	volatile uint8_t x552 = UINT8_MAX;
	volatile int32_t t126 = -2615;

    t126 = ((x549+x550)<=(x551^x552));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x553 = -26;
	static volatile int16_t x554 = 0;
	uint8_t x555 = 12U;
	int32_t x556 = INT32_MIN;
	int32_t t127 = 4537;

    t127 = ((x553+x554)<=(x555^x556));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x557 = 4U;
	volatile int16_t x558 = INT16_MAX;
	int16_t x559 = INT16_MIN;
	int32_t t128 = -540080;

    t128 = ((x557+x558)<=(x559^x560));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x561 = UINT32_MAX;
	static int8_t x562 = INT8_MIN;
	int8_t x563 = INT8_MIN;
	static volatile int8_t x564 = INT8_MAX;
	int32_t t129 = 82256;

    t129 = ((x561+x562)<=(x563^x564));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x565 = UINT32_MAX;
	int64_t x566 = 2LL;
	volatile int16_t x567 = 5493;
	static int16_t x568 = INT16_MIN;
	volatile int32_t t130 = 5070912;

    t130 = ((x565+x566)<=(x567^x568));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x571 = 2U;
	int32_t x572 = INT32_MAX;

    t131 = ((x569+x570)<=(x571^x572));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x573 = INT64_MIN;
	int8_t x574 = 59;
	volatile int16_t x576 = -1;
	volatile int32_t t132 = -1724201;

    t132 = ((x573+x574)<=(x575^x576));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x577 = -1;
	static int16_t x578 = INT16_MAX;
	int32_t x579 = -610449;

    t133 = ((x577+x578)<=(x579^x580));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x581 = 320975065;
	uint32_t x582 = 478U;
	uint8_t x583 = 1U;
	int32_t x584 = INT32_MIN;
	volatile int32_t t134 = -5155765;

    t134 = ((x581+x582)<=(x583^x584));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x585 = 4U;
	uint32_t x586 = UINT32_MAX;
	uint8_t x587 = 4U;
	uint64_t x588 = 231906811443848LLU;
	static int32_t t135 = 1848;

    t135 = ((x585+x586)<=(x587^x588));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x590 = INT8_MIN;
	int64_t x591 = -5669144LL;
	static uint64_t x592 = UINT64_MAX;
	int32_t t136 = 5;

    t136 = ((x589+x590)<=(x591^x592));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x597 = 30;
	volatile int16_t x598 = INT16_MAX;
	int8_t x599 = -1;
	int32_t t137 = -43930;

    t137 = ((x597+x598)<=(x599^x600));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x602 = 135;
	int32_t x603 = -1;
	static uint16_t x604 = 11271U;

    t138 = ((x601+x602)<=(x603^x604));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x605 = -1LL;
	uint64_t x606 = 15162545876LLU;
	static int16_t x607 = -1;
	int16_t x608 = 1;
	volatile int32_t t139 = 15447;

    t139 = ((x605+x606)<=(x607^x608));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x609 = 15U;
	uint32_t x610 = 53110U;
	int64_t x611 = -57LL;
	static uint8_t x612 = UINT8_MAX;
	int32_t t140 = 1061087;

    t140 = ((x609+x610)<=(x611^x612));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x613 = 1065U;
	int8_t x614 = -6;
	int16_t x615 = -1;
	uint32_t x616 = UINT32_MAX;
	static volatile int32_t t141 = -32932;

    t141 = ((x613+x614)<=(x615^x616));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x617 = 643U;
	volatile int8_t x618 = INT8_MIN;
	uint64_t x619 = 180830698LLU;
	uint64_t x620 = 8727361601LLU;
	static volatile int32_t t142 = -1827944;

    t142 = ((x617+x618)<=(x619^x620));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x625 = UINT32_MAX;
	uint16_t x626 = 5U;
	uint32_t x627 = 1884U;
	volatile int32_t t143 = -151176;

    t143 = ((x625+x626)<=(x627^x628));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x629 = 224;
	uint32_t x630 = 4645597U;
	volatile uint16_t x631 = 13469U;
	volatile int32_t t144 = 13162;

    t144 = ((x629+x630)<=(x631^x632));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x641 = UINT64_MAX;
	static int16_t x642 = 272;
	uint8_t x644 = UINT8_MAX;
	volatile int32_t t145 = -3625739;

    t145 = ((x641+x642)<=(x643^x644));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x645 = INT8_MAX;
	int16_t x646 = -1;
	int32_t x647 = 33554;
	int64_t x648 = -1LL;
	volatile int32_t t146 = 1445829;

    t146 = ((x645+x646)<=(x647^x648));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x649 = INT32_MAX;
	uint16_t x652 = 431U;
	volatile int32_t t147 = 115905208;

    t147 = ((x649+x650)<=(x651^x652));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x653 = 916633264662054086LL;
	int64_t x655 = INT64_MIN;
	static int32_t x656 = 42245830;
	static int32_t t148 = 872409;

    t148 = ((x653+x654)<=(x655^x656));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x657 = 1990206656520LL;
	volatile int16_t x658 = -1;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MIN;

    t149 = ((x657+x658)<=(x659^x660));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x662 = 0LL;
	static int16_t x663 = INT16_MAX;
	volatile int64_t x664 = INT64_MIN;
	static volatile int32_t t150 = -517693361;

    t150 = ((x661+x662)<=(x663^x664));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = -297078030;
	static uint8_t x666 = UINT8_MAX;
	int32_t x667 = -1;
	int8_t x668 = 11;
	static volatile int32_t t151 = 4625;

    t151 = ((x665+x666)<=(x667^x668));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x672 = -24598039700135775LL;

    t152 = ((x669+x670)<=(x671^x672));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x674 = INT8_MAX;
	volatile uint64_t x676 = 322400LLU;
	volatile int32_t t153 = 46480;

    t153 = ((x673+x674)<=(x675^x676));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = 49062LLU;
	int16_t x678 = INT16_MIN;
	int32_t x679 = -1;
	int32_t x680 = INT32_MIN;
	int32_t t154 = 0;

    t154 = ((x677+x678)<=(x679^x680));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x681 = INT16_MIN;
	int16_t x682 = 346;
	int64_t x683 = INT64_MIN;
	static int64_t x684 = INT64_MAX;
	int32_t t155 = -15622;

    t155 = ((x681+x682)<=(x683^x684));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x685 = -1;
	uint64_t x686 = 2983806218005697456LLU;
	volatile int16_t x687 = INT16_MAX;
	volatile int64_t x688 = INT64_MIN;
	volatile int32_t t156 = 13745517;

    t156 = ((x685+x686)<=(x687^x688));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x689 = INT64_MIN;
	uint8_t x690 = 5U;
	int32_t x692 = INT32_MIN;
	volatile int32_t t157 = -247329375;

    t157 = ((x689+x690)<=(x691^x692));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x693 = INT32_MIN;
	uint8_t x695 = UINT8_MAX;
	static int64_t x696 = -11340627191452LL;
	volatile int32_t t158 = 993;

    t158 = ((x693+x694)<=(x695^x696));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x698 = 15760;
	uint16_t x699 = 12U;
	uint64_t x700 = UINT64_MAX;
	volatile int32_t t159 = -1221;

    t159 = ((x697+x698)<=(x699^x700));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = INT32_MAX;
	int16_t x703 = INT16_MIN;
	int32_t t160 = -38;

    t160 = ((x701+x702)<=(x703^x704));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x706 = -1;
	static uint8_t x707 = 98U;
	int64_t x708 = INT64_MIN;
	int32_t t161 = 50;

    t161 = ((x705+x706)<=(x707^x708));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = 0;
	uint8_t x710 = 0U;
	uint16_t x711 = 1058U;

    t162 = ((x709+x710)<=(x711^x712));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x714 = -99LL;
	uint16_t x715 = UINT16_MAX;
	uint32_t x716 = UINT32_MAX;
	volatile int32_t t163 = -327469412;

    t163 = ((x713+x714)<=(x715^x716));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x718 = -1;
	uint64_t x719 = 1494890780LLU;
	int32_t x720 = INT32_MAX;
	volatile int32_t t164 = -130919931;

    t164 = ((x717+x718)<=(x719^x720));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x721 = 0U;
	uint16_t x722 = UINT16_MAX;
	volatile int64_t x723 = 218481LL;
	int64_t x724 = INT64_MAX;
	int32_t t165 = -76397;

    t165 = ((x721+x722)<=(x723^x724));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = -440;
	uint64_t x726 = UINT64_MAX;
	volatile int32_t x727 = 930253;
	uint8_t x728 = 0U;
	int32_t t166 = -461373897;

    t166 = ((x725+x726)<=(x727^x728));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x729 = 18648U;
	volatile int8_t x730 = INT8_MAX;
	uint16_t x731 = UINT16_MAX;
	uint16_t x732 = 0U;
	volatile int32_t t167 = -63;

    t167 = ((x729+x730)<=(x731^x732));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x733 = 288U;
	uint32_t x734 = UINT32_MAX;
	int64_t x736 = INT64_MIN;
	volatile int32_t t168 = 720108575;

    t168 = ((x733+x734)<=(x735^x736));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = INT8_MIN;
	uint16_t x738 = 9U;
	uint64_t x739 = 5041393035235LLU;
	int64_t x740 = -1LL;
	int32_t t169 = -417933;

    t169 = ((x737+x738)<=(x739^x740));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	static volatile int32_t x747 = INT32_MIN;

    t170 = ((x745+x746)<=(x747^x748));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x750 = -1;
	static int64_t x751 = INT64_MAX;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t171 = -1;

    t171 = ((x749+x750)<=(x751^x752));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x753 = UINT64_MAX;
	uint16_t x754 = 0U;
	volatile int32_t x755 = 453793;
	static volatile int32_t t172 = 265075424;

    t172 = ((x753+x754)<=(x755^x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint8_t x757 = UINT8_MAX;
	uint16_t x758 = UINT16_MAX;
	int64_t x759 = INT64_MIN;
	int32_t x760 = -57609661;
	int32_t t173 = -4613;

    t173 = ((x757+x758)<=(x759^x760));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x761 = INT8_MIN;
	volatile int16_t x762 = -1;
	uint32_t x763 = 61082089U;
	int32_t x764 = INT32_MAX;
	volatile int32_t t174 = -732155550;

    t174 = ((x761+x762)<=(x763^x764));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x765 = INT8_MAX;
	int32_t x766 = INT32_MIN;
	static volatile int8_t x768 = 3;
	volatile int32_t t175 = -5228;

    t175 = ((x765+x766)<=(x767^x768));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x769 = INT8_MAX;
	static volatile int8_t x770 = -1;
	volatile uint64_t x771 = UINT64_MAX;
	int8_t x772 = -1;
	static volatile int32_t t176 = 1469652;

    t176 = ((x769+x770)<=(x771^x772));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x774 = 22431298834076859LLU;
	int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MIN;
	volatile int32_t t177 = -957234947;

    t177 = ((x773+x774)<=(x775^x776));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x777 = 1U;
	int16_t x778 = -1;
	static int64_t x779 = -1LL;
	uint8_t x780 = 31U;

    t178 = ((x777+x778)<=(x779^x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x781 = -1;
	int16_t x782 = -1;
	uint8_t x783 = UINT8_MAX;
	volatile int16_t x784 = -1;

    t179 = ((x781+x782)<=(x783^x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x785 = INT8_MIN;
	volatile int32_t x786 = -9202873;
	int8_t x787 = INT8_MIN;
	uint64_t x788 = 83996503814LLU;
	static volatile int32_t t180 = -1;

    t180 = ((x785+x786)<=(x787^x788));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x789 = 7;
	volatile int32_t x790 = -103060;
	static int8_t x791 = INT8_MIN;
	static uint8_t x792 = 13U;
	int32_t t181 = 320;

    t181 = ((x789+x790)<=(x791^x792));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x793 = -2807765026704LL;
	int8_t x794 = -5;
	int8_t x795 = -39;
	static int16_t x796 = 7;
	static int32_t t182 = 2;

    t182 = ((x793+x794)<=(x795^x796));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x797 = INT8_MIN;
	uint64_t x798 = 74494LLU;
	int16_t x799 = INT16_MAX;
	volatile int32_t x800 = -1;
	int32_t t183 = 552280;

    t183 = ((x797+x798)<=(x799^x800));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x801 = -1;
	volatile int32_t t184 = -53187;

    t184 = ((x801+x802)<=(x803^x804));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x805 = -5;
	static uint16_t x806 = 1U;
	int32_t x807 = 319;
	uint8_t x808 = UINT8_MAX;
	int32_t t185 = 82882;

    t185 = ((x805+x806)<=(x807^x808));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x809 = 34U;
	int32_t x810 = INT32_MIN;
	int32_t x811 = -1;
	static int16_t x812 = INT16_MAX;
	int32_t t186 = 53909742;

    t186 = ((x809+x810)<=(x811^x812));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x813 = INT8_MIN;
	int32_t t187 = 1;

    t187 = ((x813+x814)<=(x815^x816));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x817 = INT16_MAX;
	uint64_t x818 = UINT64_MAX;
	int8_t x819 = INT8_MIN;
	int8_t x820 = 9;
	volatile int32_t t188 = 29384604;

    t188 = ((x817+x818)<=(x819^x820));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x821 = INT16_MIN;
	uint64_t x822 = UINT64_MAX;
	int64_t x823 = INT64_MAX;
	uint64_t x824 = 2962714120518LLU;
	int32_t t189 = -53;

    t189 = ((x821+x822)<=(x823^x824));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x825 = 143459591LLU;
	volatile int64_t x827 = INT64_MIN;
	int32_t x828 = -2024;
	static int32_t t190 = -30725;

    t190 = ((x825+x826)<=(x827^x828));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x829 = 15U;
	static uint8_t x830 = 1U;
	uint16_t x831 = UINT16_MAX;
	static volatile int16_t x832 = INT16_MIN;
	static volatile int32_t t191 = 310;

    t191 = ((x829+x830)<=(x831^x832));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x836 = 1;
	int32_t t192 = -1;

    t192 = ((x833+x834)<=(x835^x836));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x837 = 14U;
	int16_t x838 = INT16_MAX;
	uint32_t x839 = 675U;
	static volatile uint16_t x840 = 2883U;

    t193 = ((x837+x838)<=(x839^x840));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x841 = -47130700370LL;
	static int16_t x842 = INT16_MIN;
	uint16_t x844 = UINT16_MAX;
	int32_t t194 = 123446;

    t194 = ((x841+x842)<=(x843^x844));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = INT64_MAX;
	int8_t x850 = -1;
	int64_t x851 = INT64_MIN;
	int8_t x852 = INT8_MIN;
	int32_t t195 = -536531736;

    t195 = ((x849+x850)<=(x851^x852));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x857 = 1LLU;
	static uint32_t x859 = 4U;
	volatile int32_t t196 = -145237707;

    t196 = ((x857+x858)<=(x859^x860));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x861 = INT16_MIN;
	uint32_t x862 = 4385U;
	int16_t x864 = INT16_MIN;
	volatile int32_t t197 = -203528383;

    t197 = ((x861+x862)<=(x863^x864));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x865 = -13;
	int16_t x866 = INT16_MAX;
	volatile int64_t x867 = 1368357556207LL;
	int16_t x868 = INT16_MIN;
	volatile int32_t t198 = 1;

    t198 = ((x865+x866)<=(x867^x868));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x869 = -1;
	uint32_t x870 = UINT32_MAX;
	volatile int32_t t199 = -28696;

    t199 = ((x869+x870)<=(x871^x872));

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

